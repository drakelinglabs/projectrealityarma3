#include "macros.hpp"
/*
    Project Reality ArmA 3

    Author:

    Description:
    [Description]

    Parameter(s):
    None

    Returns:
    None
*/

DFUNC(escapeFnc) =  {
    params ["", "_key"];
    private _ret = false;

    if (_key == 1) then {
        createDialog (["RscDisplayInterrupt", "RscDisplayMPInterrupt"] select isMultiplayer);

        disableSerialization;

        private _dlg = findDisplay 49;

        for "_index" from 100 to 2000 do {
            (_dlg displayCtrl _index) ctrlEnable false;
        };

        private _ctrl = _dlg displayctrl 103;
        _ctrl ctrlSetEventHandler ["buttonClick", "
            closeDialog 0;
            failMission ""LOSER"";
        "];
        _ctrl ctrlEnable true;
        _ctrl ctrlSetText "ABORT";
        _ctrl ctrlSetTooltip "Abort.";

        _ret = true;
    };

    _ret;
};

["missionStarted", {
    [{
        params ["_group"];

        private _sidePlayerCount = EGVAR(Mission,competingSides) apply {
            private _side = call compile _x;
            [{side group _x == _side} count (allPlayers), _side]
        };
        _sidePlayerCount sort true;
        private _newSide = _sidePlayerCount select 0 select 1;

        PRA3_Player setVariable [CGVAR(tempUnit), true];
        [_newSide, createGroup _newSide, [-1000, -1000, 10], true] call CFUNC(respawn);
    }, []] call CFUNC(mutex);

    createDialog UIVAR(RespawnScreen);
    (findDisplay 1000) displayAddEventHandler ["KeyDown", FUNC(escapeFnc)];

    [QEGVAR(Revive,Killed), {
        setPlayerRespawnTime 10e10; //@todo make this independent of revive module
        createDialog UIVAR(RespawnScreen);
        (findDisplay 1000) displayAddEventHandler ["KeyDown", FUNC(escapeFnc)];
    }] call CFUNC(addEventHandler);

    ["Respawn Screen", PRA3_Player, 0, {!dialog}, {
        createDialog UIVAR(RespawnScreen);
    }] call CFUNC(addAction);
}] call CFUNC(addEventHandler);


["playerSideChanged", {
    [UIVAR(RespawnScreen_TeamInfo_update)] call CFUNC(localEvent);
}] call CFUNC(addEventHandler);

["leaderChanged", {
    [UIVAR(RespawnScreen_SquadManagement_update)] call CFUNC(localEvent);
}] call CFUNC(addEventHandler);

["groupChanged", {
    _this select 0 params ["_newGroup", "_oldGroup"];

    [UIVAR(RespawnScreen_RoleManagement_update), [_newGroup, _oldGroup]] call CFUNC(targetEvent);
    [UIVAR(RespawnScreen_SquadManagement_update)] call CFUNC(globalEvent);
    [UIVAR(RespawnScreen_DeploymentManagement_update)] call CFUNC(localEvent);
}] call CFUNC(addEventHandler);