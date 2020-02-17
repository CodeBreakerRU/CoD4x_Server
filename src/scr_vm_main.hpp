﻿#pragma once
#include "qshared.hpp"


extern "C"
{
    void CCDECL GScr_LoadScripts();
    void Scr_YYACError(const char* fmt, ...);
    int GScr_LoadScriptAndLabel(const char* scriptName, const char* labelName, qboolean mandatory);
}
