private ["_part_out","_part_in","_qty_out","_qty_in","_qty","_bos","_bag","_class","_started","_finished","_animState","_isMedic","_num_removed","_needed","_activatingPlayer","_buy_o_sell","_textPartIn","_textPartOut","_traderID"];
//		   [part_out,part_in, qty_out, qty_in,];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_103") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_activatingPlayer = player;

_part_out = (_this select 3) select 0;
_part_in = (_this select 3) select 1;
_qty_out = (_this select 3) select 2;
_qty_in = (_this select 3) select 3;
_buy_o_sell = (_this select 3) select 4;
_textPartIn = (_this select 3) select 5;
_textPartOut = (_this select 3) select 6;
_traderID = (_this select 3) select 7;
_bos = 0;

if(_buy_o_sell == "buy") then {
	//_qty = {_x == _part_in} count magazines player;
	_qty = player getVariable ["cashMoney",0]; // get your money variable	
} else {
	_bos = 1;
	_qty = 0;
	_bag = unitBackpack player;
	_class = typeOf _bag;
	if(_class == _part_in) then {
		_qty = 1;
	};
};

if (_qty >= _qty_in) then {

	cutText [(localize "str_epoch_player_105"), "PLAIN DOWN"];
	 
	[1,1] call dayz_HungerThirst;
	
	private["_newPosition","_finished","_oldPosition"];
    if(isNil "_oldPosition") then { _oldPosition = position player;};
    _finished = false;
    sleep 2;
    if (player distance _oldPosition <= 1) then {
        _finished = true;
    };
    if (!_finished) exitWith {
        DZE_ActionInProgress = false;
        r_autoTrade = false;
        cutText [(localize "str_epoch_player_106") , "PLAIN DOWN"];
    };

	if (_finished) then {

		// Double check we still have parts
		if(_buy_o_sell == "buy") then {
			//_qty = {_x == _part_in} count magazines player;
			_qty = player getVariable ["cashMoney",0]; // get your money variable	
		} else {
			_qty = 0;
			_bag = unitBackpack player;
			_class = typeOf _bag;
			if(_class == _part_in) then {
				_qty = 1;
			};
		};

		if (_qty >= _qty_in) then {

			//["PVDZE_obj_Trade",[_activatingPlayer,_traderID,_bos]] call callRpcProcedure;
			if (isNil "_bag") then { _bag = "Unknown Backpack" };
			if (isNil "inTraderCity") then { inTraderCity = "Unknown Trader City" };
			PVDZE_obj_Trade = [_activatingPlayer,_traderID,_bos,_bag,inTraderCity];
			publicVariableServer  "PVDZE_obj_Trade";
	
			//diag_log format["DEBUG Starting to wait for answer: %1", PVDZE_obj_Trade];

			waitUntil {!isNil "dayzTradeResult"};

			//diag_log format["DEBUG Complete Trade: %1", dayzTradeResult];

			if(dayzTradeResult == "PASS") then {

				if(_buy_o_sell == "buy") then {

					//_num_removed = ([player,_part_in,_qty_in] call BIS_fnc_invRemove);
					_qtychange = _qty - _qty_in;
					player setVariable ["cashMoney", _qtychange , true];
					_newM = player getVariable ["cashMoney",0];
					//_removed = ([player,_part_in,_qty_in] call BIS_fnc_invRemove);
					
					_num_removed = _qty - _newM; // 
					
						systemChat format ['Payed %1 %3. %2 incoming!',_num_removed,_part_out,CurrencyName];
					if(_num_removed == _qty_in) then {
						removeBackpack player;
						player addBackpack _part_out;
					};
				} else {
					// Sell
					if((typeOf (unitBackpack player)) == _part_in) then {
						removeBackpack player;
						//for "_x" from 1 to _qty_out do {
						//	player addMagazine _part_out;
						//};
						
						_myMoney = player getVariable ["cashMoney",0];
						_myMoney = _myMoney + _qty_out;
						player setVariable ["cashMoney", _myMoney , true];
								
						
					};
				};

				cutText [format[(localize "str_epoch_player_186"),_qty_in,_textPartIn,_qty_out,_textPartOut], "PLAIN DOWN"];

				{player removeAction _x} forEach s_player_parts;s_player_parts = [];
				s_player_parts_crtl = -1;
	
			} else {
				cutText [format[(localize "str_epoch_player_183"),_textPartOut] , "PLAIN DOWN"];
			};
			dayzTradeResult = nil;
		};
	};
	
} else {
	_needed =  _qty_in - _qty;
	//cutText [format[(localize "str_epoch_player_184"),_needed,_textPartIn] , "PLAIN DOWN"];
	cutText [format["You need %1 %2",_needed,_textPartIn] , "PLAIN DOWN"]; // edited so it says, You need 5000 coins or you need 1 engine.
};

DZE_ActionInProgress = false;