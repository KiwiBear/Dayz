/*
	DayZ Lock Safe
	Usage: [_obj] spawn player_unlockVault;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_objectID","_objectUID","_obj","_ownerID","_dir","_pos","_holder","_weapons","_magazines","_backpacks","_alreadyPacking","_lockedClass","_text","_playerNear","_characterID","_PlayerUID","_vector","_inventoryCHK","_inventory"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_10") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

player removeAction s_player_lockvault;
s_player_lockvault = 1;

_obj = _this;
_objType = typeOf _obj;

_lockedClass = getText (configFile >> "CfgVehicles" >> _objType >> "lockedClass");
_text = 		getText (configFile >> "CfgVehicles" >> _objType >> "displayName");

// Silently exit if object no longer exists
if(isNull _obj) exitWith { DZE_ActionInProgress = false; };
_inventoryCHK = str([getWeaponCargo _obj, getMagazineCargo _obj, getBackpackCargo _obj]);
[1,1] call dayz_HungerThirst;
player playActionNow "Medic";
sleep 1;
[player,"tentpack",0,false] call dayz_zombieSpeak;
sleep 1;

_playerNear = _obj call dze_isnearest_player;
if(_playerNear) exitWith { DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_11") , "PLAIN DOWN"];  };

_characterID = _obj getVariable["CharacterID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];
_ownerID =  _obj getVariable["ownerPUID", "0"];

if (DZE_APlotforLife) then {
	_playerUID = [player] call FNC_GetPlayerUID;
}else{
	_PlayerUID = dayz_characterID;
};

if((_characterID != dayz_combination) && (_ownerID != _PlayerUID)) exitWith {DZE_ActionInProgress = false; s_player_lockvault = -1; cutText [format[(localize "str_epoch_player_115"),_text], "PLAIN DOWN"]; };

_alreadyPacking = _obj getVariable["packing",0];
if (_alreadyPacking == 1) exitWith {DZE_ActionInProgress = false; s_player_lockvault = -1; cutText [format[(localize "str_epoch_player_116"),_text], "PLAIN DOWN"]};
_obj setVariable["packing",1];

_dir = direction _obj;
_vector = [(vectorDir _obj),(vectorUp _obj)];
_pos = _obj getVariable["OEMPos",(getposATL _obj)];

if(!isNull _obj) then {

	PVDZE_log_lockUnlock = [player, _obj,true];
	publicVariableServer "PVDZE_log_lockUnlock";

	//place vault
	_holder = createVehicle [_lockedClass,_pos,[], 0, "CAN_COLLIDE"];
	_holder setdir _dir;
	_holder setVariable["memDir",_dir,true];
	_holder setVectorDirAndUp _vector;
	_holder setPosATL _pos;
	player reveal _holder;
	
	_holder setVariable["CharacterID",_characterID,true];
	_holder setVariable["ObjectID",_objectID,true];
	_holder setVariable["ObjectUID",_objectUID,true];
	_holder setVariable ["OEMPos", _pos, true];
	_holder setVariable ["ownerPUID", _ownerID , true];

	_weapons = 		getWeaponCargo _obj;
	_magazines = 	getMagazineCargo _obj;
	_backpacks = 	getBackpackCargo _obj;
	_safebank =		_obj getVariable["safeMoney","0"];
	
	// remove vault
	_inventory = [getWeaponCargo _obj, getMagazineCargo _obj, getBackpackCargo _obj];
	deleteVehicle _obj;

	// Fill variables with loot
	_holder setVariable ["WeaponCargo", _weapons, true];
	_holder setVariable ["MagazineCargo", _magazines, true];
	_holder setVariable ["BackpackCargo", _backpacks, true];
	_holder setVariable ["safeMoney", _safebank,true];

	PVDZE_lockVault = [_objectID,_objectUID,_holder,player,_inventory,(_inventoryCHK != str(_inventory))];
	publicVariableServer "PVDZE_lockVault";
	
	cutText [format[(localize "str_epoch_player_117"),_text], "PLAIN DOWN"];
};
s_player_lockvault = -1;
DZE_ActionInProgress = false;
