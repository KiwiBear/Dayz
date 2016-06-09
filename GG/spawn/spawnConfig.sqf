_bodyCheck = 1500; // If a player has a body within this distance of a spawn that spawn will be blocked. Set to -1 to disable.
_mapRadius = 12000; // Distance from center to farthest edge of map. Only used when spawnNearPlot is enabled.
_spawnNearGroup = false; // Allow players to spawn near their group. Blocked if the player has a body within bodyCheck distance of the leader. Requires DZGM to work.
_spawnNearPlot = false; // Allow players to spawn near their plot. Blocked if the player has a body within bodyCheck distance of their plot. Requires Plot4Life to work. 
_spawnRadius = 800; // Distance around spawn to find a safe pos. Lower is closer to exact coordinates. Do not set too low or BIS_fnc_findSafePos may fail.

_spawnPoints = switch (toLower worldName) do {
case "chernarus":{
	[
		["Random",[[4932,1989,0],[12048,8352,0],[6901,2509,0],[10294,2191,0],[2236,1923,0],[13510,5249,0],[3608,2152,0],[7952,3205,0],[12071,3591,0],[13407,4175,0],[7068,11221,0],[9711,8962,0],[5939,10195,0],[8421,6643,0],[8812,11642,0],[5301,8548,0]
		,[11053,12361,0],[2718,10094,0],[4984,12492,0],[4582,6457,0],[9153,3901,0],[3626,8976,0],[6587,6026,0],[2692,5284,0],[1689,3850,0],[3315,3934,0],[4480,4615,0],[5839,4779,0],[7545,5144,0],[10103,5483,0],[11290,6557,0],[10750,8133,0],[12818,8097,0]
		,[10428,9850,0],[12305,10818,0],[7066,7680,0]],0,0,1],
		["Pavlovo",[1689,3850,0],0,0],
		["Kozlovka",[4480,4615,0],0,0],
		["Nadezhdino",[5839,4779,0],0,0],
		["Mogilevka",[7545,5144,0],0,0],
		["Staroye",[10103,5483,0],0,0],
		["Dolina",[11290,6557,0],0,0],
		["Nizhnoye",[12818,8097,0],0,0],
		["Dubrovka",[10428,9850,0],0,0],
		["Kamenka",[1896,2242,0],0,0],
		["Komarovo",[3608,2152,0],0,0],
		["Balota",[4523,2444,0],0,0],
		["Cherno",[6723,2562,0],0,0],
		["Prigor",[7952,3205,0],0,0],
		["Elektro",[10417,2120,0],0,0],
		["Kamyshovo",[12071,3591,0],0,0],
		["Krutoy",[13407,4175,0],0,0],
		["Solnichny",[13470,6306,0],0,0],
		["Berezino",[12037,9100,0],0,0],
		["Gorka",[9711,8962,0],0,0],
		["Grishino",[5939,10195,0],0,0],
		["Guglovo",[8421,6643,0],0,0],
		["Gvozdno",[8812,11642,0],0,0],
		["Kabanino",[5301,8548,0],0,0],
		["Pogorevka",[4582,6457,0],0,0],
		["Pusta",[9153,3901,0],0,0],
		["Vybor",[3626,8976,0],0,0],
		["Vyshnoye",[6587,6026,0],0,0],
		["Zelenogorsk",[2692,5284,0],0,0],
		["Bandit Vendor",[1607,7804,0],0,-70000],
		["Hero Vendor",[12944,12767,0],0,30000]
		]
	};
	case "tavi":{
		[
		["Random",[[9093,2614,0],[8150,21299,0],[9506,17303,0],[6496,9300,0],[13201,16649,0],[6066,7404,0],[7919,6727,0],[14032,12259,0],[15120,9674,0],[17610,6293,0],[10939,652,0],[17588,4952,0],[15954,15847,0],[16674,13930,0],[8915,2301,0],[11361,6685,0],
		[17744,10299,0],[18292,7537,0],[13561,19300,0],[15246,17425,0],[8350,18937,0],[10180,19059,0],[11238,14413,0],[10184,1542,0],[1529,7271,0],[5904,10519,0]],0,0,1],
		["Topolka",[9093,2614,0],0,0],
		["Helfenburg",[8150,21299,0],0,0],
		["Kozak",[9506,17303,0],0,0],
		["Zmey",[6496,9300,0],0,0],
		["Volcano Perun",[13201,16649,0],0,0],
		["Volcano Vilas",[6066,7404,0],0,0],
		["Novi Dvor",[7919,6727,0],0,0],
		["Solibor",[14032,12259,0],0,0],
		["Sabina",[15120,9674,0],0,0],
		["Kryvoe",[9095,5403,0],0,0],
		["Stari Sad",[17588,4952,0],0,0],
		["Martin",[16674,13930,0],0,0],
		["Komarovo",[11361,6685,0],0,0],
		["Dubovo",[16222,11600,0],0,0],
		["Byelov",[18292,7537,0],0,0],
		["Khotanovsk",[13561,19300,0],0,0],
		["Dalnogorsk",[15246,17425,0],0,0],
		["Kameni",[8350,18937,0],0,0],
		["Yaroslav",[10180,19059,0],0,0],
		["Lyepestok",[11238,14413,0],0,0],
		["Marina",[10184,1542,0],0,0],
		["Race Track",[1529,7271,0],0,0],
		["Cernovar",[5904,10519,0],0,0],
		["Bandit Vendor",[10940,653,0],0,-10000],
		["Hero Vendor",[15586,16396,0],0,10000]
		]
	};
};

_vipListBase = [
	"0",
	"0",
	"0"
];
_vipListBases = [ // Do not use a z (height) higher than _autoOpenHeight in haloConfig.sqf if using halo
	["0",[2324,15365,0]],
	[],
	[]
];