private ["_fpsmarker", "_fps", "_localunits", "_localvehicles" ];

_fpsmarker = createMarker ["fpsmarker", [500, 500]];
_fpsmarker setMarkerType "mil_start";
_fpsmarker setMarkerSize [0.7, 0.7];

while {true} do {

	_fps = diag_fps;

	_fpsmarker setMarkerColor "ColorGREEN";
	if (_fps < 30) then {_fpsmarker setMarkerColor "ColorYELLOW";};
	if (_fps < 20) then {_fpsmarker setMarkerColor "ColorORANGE";};
	if (_fps < 10) then {_fpsmarker setMarkerColor "ColorRED";};

	_fpsmarker setMarkerText format ["Server: %1 fps and %2 ground units", (round (_fps * 100.0)) / 100.0, {!(isPlayer _x) && (alive _x) && ((vehicle _x) isKindOf "Land") && !(isObjectHidden _x)} count allUnits];

	sleep 15;
};
