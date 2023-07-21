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
