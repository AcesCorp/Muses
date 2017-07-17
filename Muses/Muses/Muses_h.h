

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for Muses.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
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


#ifndef __Muses_h_h__
#define __Muses_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMuses_FWD_DEFINED__
#define __IMuses_FWD_DEFINED__
typedef interface IMuses IMuses;

#endif 	/* __IMuses_FWD_DEFINED__ */


#ifndef __CMusesDoc_FWD_DEFINED__
#define __CMusesDoc_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMusesDoc CMusesDoc;
#else
typedef struct CMusesDoc CMusesDoc;
#endif /* __cplusplus */

#endif 	/* __CMusesDoc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Muses_LIBRARY_DEFINED__
#define __Muses_LIBRARY_DEFINED__

/* library Muses */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_Muses;

#ifndef __IMuses_DISPINTERFACE_DEFINED__
#define __IMuses_DISPINTERFACE_DEFINED__

/* dispinterface IMuses */
/* [uuid] */ 


EXTERN_C const IID DIID_IMuses;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("AB355383-8A59-44F5-AC95-7456E145B205")
    IMuses : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IMusesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMuses * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMuses * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMuses * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMuses * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMuses * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMuses * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMuses * This,
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
        
        END_INTERFACE
    } IMusesVtbl;

    interface IMuses
    {
        CONST_VTBL struct IMusesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMuses_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMuses_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMuses_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMuses_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMuses_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMuses_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMuses_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IMuses_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CMusesDoc;

#ifdef __cplusplus

class DECLSPEC_UUID("8600AA13-50A1-4F48-A7B9-D41CBD3BD9CB")
CMusesDoc;
#endif
#endif /* __Muses_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


