#pragma once
// BeepEmitter.h : main header file for BEEPER.DLL
//
// This is a part of the Active Template Library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Active Template Library Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Active Template Library product.

#include "pch.h"

/////////////////////////////////////////////////////////////////////////////
// BeepEmitter

class CBeepEmitter;

class CBeepEmitter2 :
	public ISupportErrorInfo,
	public CComTearOffObjectBase<CBeepEmitter>
{
public:
	CBeepEmitter2() {}
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
	{
		return (InlineIsEqualGUID(IID_IBeepEmitter, riid)) ? S_OK : S_FALSE;
	}

	BEGIN_COM_MAP(CBeepEmitter2)
		COM_INTERFACE_ENTRY(ISupportErrorInfo)
	END_COM_MAP()
};

class CBeepEmitter :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CBeepEmitter, &CLSID_BeepEmitter>,
	public IDispatchImpl<IBeepEmitter, &IID_IBeepEmitter, &LIBID_COMLibrary, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:

	DECLARE_NOT_AGGREGATABLE(CBeepEmitter)
	DECLARE_GET_CONTROLLING_UNKNOWN()
	DECLARE_REGISTRY_RESOURCEID(IDR_COMLIBRARY)

	BEGIN_COM_MAP(CBeepEmitter)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IBeepEmitter)
		COM_INTERFACE_ENTRY_TEAR_OFF(IID_ISupportErrorInfo, CBeepEmitter2)
	END_COM_MAP()

	// IBeepEmitter
public:
	CBeepEmitter();
	STDMETHOD(get_Beeped)(BOOL* retval);
};

OBJECT_ENTRY_AUTO(CLSID_BeepEmitter, CBeepEmitter)
