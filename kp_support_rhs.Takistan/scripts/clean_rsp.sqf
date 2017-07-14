waitUntil {time > 1};

private ["_actual_rsp", "_rsp_helicopters"];

KP_support_detected_helis_old = [];

while {true} do {

	KP_support_detected_helis = [];

	for [{_i=0}, {!isNil ("rsp_" + str _i)}, {_i = _i + 1}] do {
		_actual_rsp = missionNamespace getVariable ("rsp_" + str _i);
		_rsp_helicopters = _actual_rsp nearObjects ["Air",10];
		{
			if !(_x in KP_support_detected_helis) then {
				KP_support_detected_helis pushBack _x;
			};
		} forEach _rsp_helicopters
	};

	{
		if ((_x in KP_support_detected_helis_old) && (({isPlayer _x && alive _x} count crew _x) == 0)) then {
			diag_log format ["[KP SUPPORT] [RSP CLEANER] Deleting Chopper: %1", (typeOf _x)];
			KP_support_detected_helis = KP_support_detected_helis - [_x];
			deleteVehicle _x;
		};
	} forEach KP_support_detected_helis;

	KP_support_detected_helis_old = +KP_support_detected_helis;

	uiSleep 180;
};
