

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 00:14:07 2038
 */
/* Compiler settings for COMLibrary.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __COMLibrary_h__
#define __COMLibrary_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IBeepEmitter_FWD_DEFINED__
#define __IBeepEmitter_FWD_DEFINED__
typedef interface IBeepEmitter IBeepEmitter;

#endif 	/* __IBeepEmitter_FWD_DEFINED__ */


#ifndef __BeepEmitter_FWD_DEFINED__
#define __BeepEmitter_FWD_DEFINED__

#ifdef __cplusplus
typedef class BeepEmitter BeepEmitter;
#else
typedef struct BeepEmitter BeepEmitter;
#endif /* __cplusplus */

#endif 	/* __BeepEmitter_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IBeepEmitter_INTERFACE_DEFINED__
#define __IBeepEmitter_INTERFACE_DEFINED__

/* interface IBeepEmitter */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IBeepEmitter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85A0C751-E359-47BE-A531-A5045164DFF8")
    IBeepEmitter : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Get( 
            /* [retval][out] */ BOOL *retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBeepEmitterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBeepEmitter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBeepEmitter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBeepEmitter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBeepEmitter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBeepEmitter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBeepEmitter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBeepEmitter * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Get )( 
            IBeepEmitter * This,
            /* [retval][out] */ BOOL *retval);
        
        END_INTERFACE
    } IBeepEmitterVtbl;

    interface IBeepEmitter
    {
        CONST_VTBL struct IBeepEmitterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBeepEmitter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBeepEmitter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBeepEmitter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBeepEmitter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBeepEmitter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBeepEmitter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBeepEmitter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBeepEmitter_get_Get(This,retval)	\
    ( (This)->lpVtbl -> get_Get(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBeepEmitter_INTERFACE_DEFINED__ */



#ifndef __COMLibrary_LIBRARY_DEFINED__
#define __COMLibrary_LIBRARY_DEFINED__

/* library COMLibrary */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_COMLibrary;

EXTERN_C const CLSID CLSID_BeepEmitter;

#ifdef __cplusplus

class DECLSPEC_UUID("B76625EA-2F4D-486B-A21F-32EE6AFE5731")
BeepEmitter;
#endif
#endif /* __COMLibrary_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


