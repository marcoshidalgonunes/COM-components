// BeepEmitter.cpp : Implementation of CBeepEmitter and DLL registration.

#include "pch.h"
#include "COMLibrary.h"
#include "BeepEmitter.h"
#include <Windows.h>

CBeepEmitter::CBeepEmitter() {}

STDMETHODIMP CBeepEmitter::get_Get(BOOL* retval)
{
	Beep(3500, 50) ? *retval = true : *retval = false;
	return S_OK;
}