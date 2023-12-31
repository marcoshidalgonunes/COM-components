// BeepEmitter.cpp : Implementation of CBeepEmitter and DLL registration.

#include "pch.h"
#include "COMLibrary.h"
#include "BeepEmitter.h"
#include <Windows.h>

CBeepEmitter::CBeepEmitter() {}

STDMETHODIMP CBeepEmitter::get_Beeped(BOOL* retval)
{
	if (retval == NULL)
		return E_POINTER;
	Beep(3500, 50) ? *retval = true : *retval = false;
	return S_OK;
}