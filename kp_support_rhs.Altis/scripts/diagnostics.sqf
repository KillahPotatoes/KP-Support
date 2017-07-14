waitUntil {time > 1};

diag_log format ["[KP SUPPORT] [MISSIONSTART] Missionfile: %1 - World Name: %2", missionName, worldName];

while {true} do {
	diag_log format ["[KP SUPPORT] [STATS] FPS: 1% - Players: %2 - Ground Units: %3", diag_fps, count allPlayers, {!(isPlayer _x) && (alive _x) && ((vehicle _x) isKindOf "Land") && !(isObjectHidden _x)} count allUnits];
	sleep 60;
};