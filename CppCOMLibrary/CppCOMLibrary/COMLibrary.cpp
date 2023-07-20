// CppCOMLibrary.cpp : Defines the initialization routines for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "COMLibrary.h"
#include "BeepEmitter.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COMLibraryModule construction

class COMLibraryModule : public CAtlDllModuleT< COMLibraryModule >
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
};


// The one and only COMLibraryModule object

COMLibraryModule _AtlModule;


STDAPI DllCanUnloadNow(void)
{
	return _AtlModule.DllCanUnloadNow();
}


STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	// TODO: Add your specialized code here and/or call the base class
	return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}


extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved);
}

STDAPI DllRegisterServer(void)
{
	return _AtlModule.DllRegisterServer();
}

STDAPI DllUnregisterServer(void)
{
	return _AtlModule.DllUnregisterServer();
}
