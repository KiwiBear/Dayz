{
	if (_object isKindof "KORD") then {
         _object setVehicleAmmo 0;

	};
	if (_object isKindof "KORD_high") then {
         _object setVehicleAmmo 0;

	};
	if (_object isKindof "DSHkM_Mini_TriPod") then {
         _object setVehicleAmmo 0;

	};
	if (_object isKindof "DSHKM_Gue") then {
         _object setVehicleAmmo 0;

	};
	if (_object isKindof "M2HD_mini_TriPod") then {
         _object setVehicleAmmo 0;

	};
	if (_object isKindof "MK19_TriPod") then {
         _object setVehicleAmmo 0;

	};
	if (_object isKindof "M2StaticMG_US_EP1") then {
         _object setVehicleAmmo 0;

	};
	if (_object isKindof "AGS_RU") then {
         _object setVehicleAmmo 0;

	};
	if (_object isKindof "BAF_GMG_Tripod_D") then {
         _object setVehicleAmmo 0;
	};
	
	if (_object isKindOf "Ka60_GL_PMC") then {
		_object magazinesTurret [-1];
        _object removeMagazinesTurret ["14Rnd_57mm",[-1]];
        _object WeaponsTurret [-1];
        _object removeWeapon "57mmLauncher";
	};
	
} forEach vehicles; 