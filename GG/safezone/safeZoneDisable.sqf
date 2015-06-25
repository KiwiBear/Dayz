canbuild = true;
inSafeZone = false;
isInTraderCity = false;

hintSilent parseText format ["
	<t align='center' color='#37AAE1' shadow='2' size='1.75'>SAFEZONE</t><br/>
	<img size='8' image='GG\images\logo.paa'/>
	<br/>
	<t align='center' color='#868686'>------------------------------</t><br/>
	<br/>
	<t align='center' color='#52bf90'>You have left a safezone!</t><br/>
	<br/>
	<t align='center' color='#FF0000'>Your weapon will activate and god mode disable within 30 seconds!</t>
	<br/>
"];


terminate SafezoneVehicleSpeedLimit;
terminate SafezoneSkinChange;
terminate SafezoneZSHIELD;

if (!isNil "timer60") then { terminate timer60; };
player removeEventHandler ["Fired", SafezoneFiredEvent];

timer60 = [] spawn {
	SafezoneFiredEvent2 = player addEventHandler ["Fired", {
		cutText ["Your weapon will activate within 30 Seconds!","PLAIN DOWN",4];
		nearestObject [_this select 0,_this select 4] setPos [0,0,0];
	}];
	
	uiSleep (15 + (random 15));
	
	if (!inSafeZone) then {
		fnc_usec_damageHandler = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";
		player_zombieCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";
		player allowDamage true;
		player removeAllEventHandlers "HandleDamage";
		player removeEventHandler ["Fired", SafezoneFiredEvent2];
		player addEventhandler ["HandleDamage",{_this call fnc_usec_damageHandler;} ];
		
		taskHint ["PROTECTION DISABLED", [1,(68/255),(68/255),1], "taskFailed"];
	};
};
