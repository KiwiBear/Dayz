﻿if(not local player) exitWith{};
#include "dialog\definitions.sqf"
disableSerialization;

_display = findDisplay SKINS_DIALOG;
_listbox = _display displayCtrl SKINS_UNITLIST;
_sel = lbCurSel _listbox; if(_sel < 0) exitWith{};

_unittype = Men_Clothing select _sel;
_typename = lbtext [SKINS_UNITLIST,_sel];

_hasGPS = false;
_hasCompass = false;
_hasRadio = false;
_hasWatch = false;
_hasMap = false;
_UID = (getPlayerUID player);

if (str _unittype == str _unittype)then{

	if(DZE_ActionInProgress) exitWith { cutText ["Skin Change is in progress, please wait","PLAIN DOWN"]; };
	DZE_ActionInProgress = true;

	if (!isNull (unitBackpack player)) exitWith {cutText ["You cannot change your Skin while wearing a backpack", "PLAIN"];DZE_ActionInProgress = false;};


	if (player hasWeapon "ItemCompass") then {_hasCompass = true;};
	if (player hasWeapon "ItemRadio") then {_hasRadio = true;};
	if (player hasWeapon "ItemGPS") then {_hasGPS = true;};
	if (player hasWeapon "ItemWatch") then {_hasWatch = true;};
	if (player hasWeapon "ItemMap") then {_hasMap = true;};

	player playActionNow "Medic";
	sleep 7;
	CloseDialog 0;
	sleep 1;
	[dayz_playerUID,dayz_characterID,_unittype] spawn player_humanityMorph;
	sleep 0.2;
	vehicle player switchCamera 'EXTERNAL';
	sleep 3;

	DZE_ActionInProgress = false;

	if (!_hasCompass) then {player removeWeapon "ItemCompass";};
	if (!_hasRadio) then {player removeWeapon "ItemRadio";};
	if (!_hasGPS) then {player removeWeapon "ItemGPS";};
	if (!_hasWatch) then {player removeWeapon "ItemWatch";};
	if (!_hasMap) then {player removeWeapon "ItemMap";};

};