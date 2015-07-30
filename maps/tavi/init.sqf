startLoadingScreen ["","RscDisplayLoadCustom"];
cutText ["","BLACK OUT"];
enableSaving [false, false];

preload_done = false;
dayZ_instance =	11;	
dayzHiveRequest = [];
initialized = false;
dayz_previousID = 0;

player setVariable ["BIS_noCoreConversations", true];
enableRadio true;
enableSentences false;

call compile preprocessFileLineNumbers"GG\config.sqf";

spawnArea= 2500;
dayz_minpos = -26000; 
dayz_maxpos = 26000;
dayz_MapArea = 20000;

GGSafezones = [
	[zonesabina, 40, "Sabina"],
	[zonelyep, 50, "Lyepestok"],
	[zonebilgrad, 50, "Bilgrad"],
	[zonebranibor, 60, "Branibor"],
	[zonekrasno, 100, "Krasno"],
	[zonedubovo, 100, "Dubovo"],
	[zonewholesalesouth, 50, "South Wholesaler"],
	[zonewholesalenorth, 50, "North Wholesaler"],
	[zoneblackbig, 50, "BLACK MARKET"],
	[zoneblacksmall, 50, "BLACK MARKET"],
	[zonehero, 40, "Hero"]
];

EpochEvents = [
	["any","any","any","any",30,"abandonedvault"],
	["any","any","any","any",0,"crash_spawner"],
	["any","any","any","any",40,"supply_drop"]
];

call compile preprocessFileLineNumbers "GG\variables.sqf";
progressLoadingScreen 0.1;
call compile preprocessFileLineNumbers "GG\publicEH.sqf";
progressLoadingScreen 0.2;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";
progressLoadingScreen 0.4;
call compile preprocessFileLineNumbers "GG\compiles.sqf";
call compile preprocessFileLineNumbers "GG\bike\init.sqf";
progressLoadingScreen 0.5;
call compile preprocessFileLineNumbers "traders.sqf";
call compile preprocessFileLineNumbers "GG\tow_lift\init.sqf";
progressLoadingScreen 1.0;

"filmic" setToneMappingParams [0.153, 0.357, 0.231, 0.1573, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";

if (isServer) then {
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\missions\dynamic_vehicle.sqf";
	execVM "\z\addons\dayz_server\missions\Taviana\mission.sqf";
	diag_log text "APlotForLife";
	_serverMonitor = 	[] execVM "\z\addons\dayz_code\system\server_monitor.sqf";
	"ctc_HumanityChange" addPublicVariableEventHandler {[_this select 1] execVM 'GG\humanitychange.sqf'};
};

if (!isDedicated) then {
	0 fadeSound 0;
	
	waitUntil {(!isNil "sm_done" && !isNil "dayz_loadScreenMsg")};
	diag_log format["%1: Server done loading",servertime];
	
	dayz_loadScreenMsg = (localize "STR_AUTHENTICATING");
	
	[] spawn {
		uiSleep 45;
		if(!preload_done) then {
			dayz_loadScreenMsg = "Loading is taking longer than usual, please relog and try again.";
			uiSleep 10;
			endMission "END1";
		};
	};
	
	_id = player addEventHandler ["Respawn", {_id = [] spawn player_death;}];
	_playerMonitor = 	[] execVM "GG\player_monitor.sqf";
	[] execVM "GG\group\init.sqf";
	[false,12] execVM "\z\addons\dayz_code\compile\local_lights_init.sqf";
	_nil = [] execVM "GG\remote.sqf";
	execVM "GG\service_point\service_point.sqf";
	_nil = [] execVM "GG\VehicleKeyChanger\VehicleKeyChanger_init.sqf";
	execVM "GG\hud\playerHud.sqf";

	
	preload_done = true;
};

execVM "GG\preview.sqf";
execVM "GG\gold\init.sqf";
execVM "GG\weed\farms.sqf";
execVM "GG\antimanualfire.sqf";

#include "GG\BIS_Effects\init.sqf"


_pic = "GG\images\logo.paa";
[
    '<img align=''left'' size=''2.0'' shadow=''0'' image='+(str(_pic))+' /><br/><t size=''1'' font=''Bitstream'' align=''Center''  color=''#38AAE1''>www.GHOSTZGAMERZ.com</t>',
    safeZoneX+0.027,
    safeZoneY+safeZoneH-0.2,
    99999,
    0,
    0,
    3090
] spawn bis_fnc_dynamicText;

6 cutRsc ["EarPlugs", "PLAIN"];

{
_adminated = _x getVariable ["adminated",0];
if( !isNil "_adminated" &&  _adminated != 0)then{
_x setObjectTexture [0, "GG\images\admin.jpg"];
};
}forEach playableUnits; 
