// CppCOMLibrary.cpp : Defines the initialization routines for the DLL.
//

#include "pch.h"
#include "COMLibrary.h"
#include "BeepEmitter.h"


#define IID_DEFINED
#include "COMLibrary_i.c"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#ifndef _X86_ extern "C" 
extern "C" { int __afxForceUSRDLL; }
#endif

// COMLibraryModule construction

class COMLibraryModule : public CAtlDllModuleT< COMLibraryModule >
{
public:
	DECLARE_LIBID(LIBID_COMLibrary)
};


// The one and only COMLibraryModule object

COMLibraryModule _AtlModule;


STDAPI DllCanUnloadNow(void)
{
	return _AtlModule.DllCanUnloadNow();
}


STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}


extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved);
}

STDAPI DllRegisterServer(void)
{
	HRESULT hr = _AtlModule.DllRegisterServer();
	return hr;
}

STDAPI DllUnregisterServer(void)
{
	HRESULT hr = _AtlModule.DllUnregisterServer();
	return hr;
}
