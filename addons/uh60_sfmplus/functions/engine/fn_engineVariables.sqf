/* ----------------------------------------------------------------------------
Function: vtx_uh60_sfmplus_fnc_engineVariables

Description:
	Defines core engine variables.

Parameters:
	_heli - The helicopter to get information from [Unit].

Returns:
	...

Examples:
	...

Author:
	BradMick
---------------------------------------------------------------------------- */
params ["_heli"];
_setVarIfEmpty = {
	params ["_vehicle", "_key", "_default"];
	_vehicle setVariable [_key, _vehicle getVariable [_key, _default]];
};
[_heli, "vtx_uh60_sfmplus_engPowerLeverState", ["OFF","OFF"]] call _setVarIfEmpty; //OFF, IDLE, FLY
[_heli, "vtx_uh60_sfmplus_engState", ["OFF","OFF"]] call _setVarIfEmpty; //OFF, STARTING, ON

if(isMultiplayer) then {
	_heli setVariable ["vtx_uh60_sfmplus_lastTimePropagated", 0];
};

_heli setVariable ["vtx_uh60_sfmplus_isSingleEng",			false];

//Outputs
_heli setVariable ["vtx_uh60_sfmplus_engFF",               	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engBaseNG",		   	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engPctNG",            	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engBaseNP",           	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engPctNP",            	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engBaseTQ",		   	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engPctTQ",  		   	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engBaseTGT",     	   	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engTGT",        	   	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engBaseOilPSI",	  	[0.0, 0.0]];
_heli setVariable ["vtx_uh60_sfmplus_engOilPSI",		   	[0.0, 0.0]];