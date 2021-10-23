/*-------------------------------------------------------------------------------------
 *
 * Copyright (c) Microsoft Corporation
 *
 *-------------------------------------------------------------------------------------*/


/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
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

#ifndef __d3d11sdklayers_h__
#define __d3d11sdklayers_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ID3D11Debug_FWD_DEFINED__
#define __ID3D11Debug_FWD_DEFINED__
typedef interface ID3D11Debug ID3D11Debug;

#endif 	/* __ID3D11Debug_FWD_DEFINED__ */


#ifndef __ID3D11SwitchToRef_FWD_DEFINED__
#define __ID3D11SwitchToRef_FWD_DEFINED__
typedef interface ID3D11SwitchToRef ID3D11SwitchToRef;

#endif 	/* __ID3D11SwitchToRef_FWD_DEFINED__ */


#ifndef __ID3D11TracingDevice_FWD_DEFINED__
#define __ID3D11TracingDevice_FWD_DEFINED__
typedef interface ID3D11TracingDevice ID3D11TracingDevice;

#endif 	/* __ID3D11TracingDevice_FWD_DEFINED__ */


#ifndef __ID3D11RefTrackingOptions_FWD_DEFINED__
#define __ID3D11RefTrackingOptions_FWD_DEFINED__
typedef interface ID3D11RefTrackingOptions ID3D11RefTrackingOptions;

#endif 	/* __ID3D11RefTrackingOptions_FWD_DEFINED__ */


#ifndef __ID3D11RefDefaultTrackingOptions_FWD_DEFINED__
#define __ID3D11RefDefaultTrackingOptions_FWD_DEFINED__
typedef interface ID3D11RefDefaultTrackingOptions ID3D11RefDefaultTrackingOptions;

#endif 	/* __ID3D11RefDefaultTrackingOptions_FWD_DEFINED__ */


#ifndef __ID3D11InfoQueue_FWD_DEFINED__
#define __ID3D11InfoQueue_FWD_DEFINED__
typedef interface ID3D11InfoQueue ID3D11InfoQueue;

#endif 	/* __ID3D11InfoQueue_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "d3d11.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_d3d11sdklayers_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Application Family
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#define	D3D11_SDK_LAYERS_VERSION	( 1 )

#define	D3D11_DEBUG_FEATURE_FLUSH_PER_RENDER_OP	( 0x1 )

#define	D3D11_DEBUG_FEATURE_FINISH_PER_RENDER_OP	( 0x2 )

#define	D3D11_DEBUG_FEATURE_PRESENT_PER_RENDER_OP	( 0x4 )

#define	D3D11_DEBUG_FEATURE_ALWAYS_DISCARD_OFFERED_RESOURCE	( 0x8 )

#define	D3D11_DEBUG_FEATURE_NEVER_DISCARD_OFFERED_RESOURCE	( 0x10 )

#define	D3D11_DEBUG_FEATURE_AVOID_BEHAVIOR_CHANGING_DEBUG_AIDS	( 0x40 )

#define	D3D11_DEBUG_FEATURE_DISABLE_TILED_RESOURCE_MAPPING_TRACKING_AND_VALIDATION	( 0x80 )

typedef 
enum D3D11_RLDO_FLAGS
    {
        D3D11_RLDO_SUMMARY	= 0x1,
        D3D11_RLDO_DETAIL	= 0x2,
        D3D11_RLDO_IGNORE_INTERNAL	= 0x4
    } 	D3D11_RLDO_FLAGS;

DEFINE_ENUM_FLAG_OPERATORS(D3D11_RLDO_FLAGS)


extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0000_v0_0_s_ifspec;

#ifndef __ID3D11Debug_INTERFACE_DEFINED__
#define __ID3D11Debug_INTERFACE_DEFINED__

/* interface ID3D11Debug */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_ID3D11Debug;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79cf2233-7536-4948-9d36-1e4692dc5760")
    ID3D11Debug : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFeatureMask( 
            UINT Mask) = 0;
        
        virtual UINT STDMETHODCALLTYPE GetFeatureMask( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPresentPerRenderOpDelay( 
            UINT Milliseconds) = 0;
        
        virtual UINT STDMETHODCALLTYPE GetPresentPerRenderOpDelay( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSwapChain( 
            /* [annotation] */ 
            _In_opt_  IDXGISwapChain *pSwapChain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSwapChain( 
            /* [annotation] */ 
            _Out_  IDXGISwapChain **ppSwapChain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateContext( 
            /* [annotation] */ 
            _In_  ID3D11DeviceContext *pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportLiveDeviceObjects( 
            D3D11_RLDO_FLAGS Flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateContextForDispatch( 
            /* [annotation] */ 
            _In_  ID3D11DeviceContext *pContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ID3D11DebugVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ID3D11Debug * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ID3D11Debug * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ID3D11Debug * This);
        
        DECLSPEC_XFGVIRT(ID3D11Debug, SetFeatureMask)
        HRESULT ( STDMETHODCALLTYPE *SetFeatureMask )( 
            ID3D11Debug * This,
            UINT Mask);
        
        DECLSPEC_XFGVIRT(ID3D11Debug, GetFeatureMask)
        UINT ( STDMETHODCALLTYPE *GetFeatureMask )( 
            ID3D11Debug * This);
        
        DECLSPEC_XFGVIRT(ID3D11Debug, SetPresentPerRenderOpDelay)
        HRESULT ( STDMETHODCALLTYPE *SetPresentPerRenderOpDelay )( 
            ID3D11Debug * This,
            UINT Milliseconds);
        
        DECLSPEC_XFGVIRT(ID3D11Debug, GetPresentPerRenderOpDelay)
        UINT ( STDMETHODCALLTYPE *GetPresentPerRenderOpDelay )( 
            ID3D11Debug * This);
        
        DECLSPEC_XFGVIRT(ID3D11Debug, SetSwapChain)
        HRESULT ( STDMETHODCALLTYPE *SetSwapChain )( 
            ID3D11Debug * This,
            /* [annotation] */ 
            _In_opt_  IDXGISwapChain *pSwapChain);
        
        DECLSPEC_XFGVIRT(ID3D11Debug, GetSwapChain)
        HRESULT ( STDMETHODCALLTYPE *GetSwapChain )( 
            ID3D11Debug * This,
            /* [annotation] */ 
            _Out_  IDXGISwapChain **ppSwapChain);
        
        DECLSPEC_XFGVIRT(ID3D11Debug, ValidateContext)
        HRESULT ( STDMETHODCALLTYPE *ValidateContext )( 
            ID3D11Debug * This,
            /* [annotation] */ 
            _In_  ID3D11DeviceContext *pContext);
        
        DECLSPEC_XFGVIRT(ID3D11Debug, ReportLiveDeviceObjects)
        HRESULT ( STDMETHODCALLTYPE *ReportLiveDeviceObjects )( 
            ID3D11Debug * This,
            D3D11_RLDO_FLAGS Flags);
        
        DECLSPEC_XFGVIRT(ID3D11Debug, ValidateContextForDispatch)
        HRESULT ( STDMETHODCALLTYPE *ValidateContextForDispatch )( 
            ID3D11Debug * This,
            /* [annotation] */ 
            _In_  ID3D11DeviceContext *pContext);
        
        END_INTERFACE
    } ID3D11DebugVtbl;

    interface ID3D11Debug
    {
        CONST_VTBL struct ID3D11DebugVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID3D11Debug_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Debug_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Debug_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Debug_SetFeatureMask(This,Mask)	\
    ( (This)->lpVtbl -> SetFeatureMask(This,Mask) ) 

#define ID3D11Debug_GetFeatureMask(This)	\
    ( (This)->lpVtbl -> GetFeatureMask(This) ) 

#define ID3D11Debug_SetPresentPerRenderOpDelay(This,Milliseconds)	\
    ( (This)->lpVtbl -> SetPresentPerRenderOpDelay(This,Milliseconds) ) 

#define ID3D11Debug_GetPresentPerRenderOpDelay(This)	\
    ( (This)->lpVtbl -> GetPresentPerRenderOpDelay(This) ) 

#define ID3D11Debug_SetSwapChain(This,pSwapChain)	\
    ( (This)->lpVtbl -> SetSwapChain(This,pSwapChain) ) 

#define ID3D11Debug_GetSwapChain(This,ppSwapChain)	\
    ( (This)->lpVtbl -> GetSwapChain(This,ppSwapChain) ) 

#define ID3D11Debug_ValidateContext(This,pContext)	\
    ( (This)->lpVtbl -> ValidateContext(This,pContext) ) 

#define ID3D11Debug_ReportLiveDeviceObjects(This,Flags)	\
    ( (This)->lpVtbl -> ReportLiveDeviceObjects(This,Flags) ) 

#define ID3D11Debug_ValidateContextForDispatch(This,pContext)	\
    ( (This)->lpVtbl -> ValidateContextForDispatch(This,pContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Debug_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_d3d11sdklayers_0000_0001 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0001_v0_0_s_ifspec;

#ifndef __ID3D11SwitchToRef_INTERFACE_DEFINED__
#define __ID3D11SwitchToRef_INTERFACE_DEFINED__

/* interface ID3D11SwitchToRef */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_ID3D11SwitchToRef;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1ef337e3-58e7-4f83-a692-db221f5ed47e")
    ID3D11SwitchToRef : public IUnknown
    {
    public:
        virtual BOOL STDMETHODCALLTYPE SetUseRef( 
            BOOL UseRef) = 0;
        
        virtual BOOL STDMETHODCALLTYPE GetUseRef( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ID3D11SwitchToRefVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ID3D11SwitchToRef * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ID3D11SwitchToRef * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ID3D11SwitchToRef * This);
        
        DECLSPEC_XFGVIRT(ID3D11SwitchToRef, SetUseRef)
        BOOL ( STDMETHODCALLTYPE *SetUseRef )( 
            ID3D11SwitchToRef * This,
            BOOL UseRef);
        
        DECLSPEC_XFGVIRT(ID3D11SwitchToRef, GetUseRef)
        BOOL ( STDMETHODCALLTYPE *GetUseRef )( 
            ID3D11SwitchToRef * This);
        
        END_INTERFACE
    } ID3D11SwitchToRefVtbl;

    interface ID3D11SwitchToRef
    {
        CONST_VTBL struct ID3D11SwitchToRefVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID3D11SwitchToRef_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11SwitchToRef_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11SwitchToRef_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11SwitchToRef_SetUseRef(This,UseRef)	\
    ( (This)->lpVtbl -> SetUseRef(This,UseRef) ) 

#define ID3D11SwitchToRef_GetUseRef(This)	\
    ( (This)->lpVtbl -> GetUseRef(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11SwitchToRef_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_d3d11sdklayers_0000_0002 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion
#pragma region PC Application Family
#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
typedef 
enum D3D11_SHADER_TRACKING_RESOURCE_TYPE
    {
        D3D11_SHADER_TRACKING_RESOURCE_TYPE_NONE	= 0,
        D3D11_SHADER_TRACKING_RESOURCE_TYPE_UAV_DEVICEMEMORY	= 1,
        D3D11_SHADER_TRACKING_RESOURCE_TYPE_NON_UAV_DEVICEMEMORY	= 2,
        D3D11_SHADER_TRACKING_RESOURCE_TYPE_ALL_DEVICEMEMORY	= 3,
        D3D11_SHADER_TRACKING_RESOURCE_TYPE_GROUPSHARED_MEMORY	= 4,
        D3D11_SHADER_TRACKING_RESOURCE_TYPE_ALL_SHARED_MEMORY	= 5,
        D3D11_SHADER_TRACKING_RESOURCE_TYPE_GROUPSHARED_NON_UAV	= 6,
        D3D11_SHADER_TRACKING_RESOURCE_TYPE_ALL	= 7
    } 	D3D11_SHADER_TRACKING_RESOURCE_TYPE;

typedef 
enum D3D11_SHADER_TRACKING_OPTION
    {
        D3D11_SHADER_TRACKING_OPTION_IGNORE	= 0,
        D3D11_SHADER_TRACKING_OPTION_TRACK_UNINITIALIZED	= 0x1,
        D3D11_SHADER_TRACKING_OPTION_TRACK_RAW	= 0x2,
        D3D11_SHADER_TRACKING_OPTION_TRACK_WAR	= 0x4,
        D3D11_SHADER_TRACKING_OPTION_TRACK_WAW	= 0x8,
        D3D11_SHADER_TRACKING_OPTION_ALLOW_SAME	= 0x10,
        D3D11_SHADER_TRACKING_OPTION_TRACK_ATOMIC_CONSISTENCY	= 0x20,
        D3D11_SHADER_TRACKING_OPTION_TRACK_RAW_ACROSS_THREADGROUPS	= 0x40,
        D3D11_SHADER_TRACKING_OPTION_TRACK_WAR_ACROSS_THREADGROUPS	= 0x80,
        D3D11_SHADER_TRACKING_OPTION_TRACK_WAW_ACROSS_THREADGROUPS	= 0x100,
        D3D11_SHADER_TRACKING_OPTION_TRACK_ATOMIC_CONSISTENCY_ACROSS_THREADGROUPS	= 0x200,
        D3D11_SHADER_TRACKING_OPTION_UAV_SPECIFIC_FLAGS	= ( ( ( D3D11_SHADER_TRACKING_OPTION_TRACK_RAW_ACROSS_THREADGROUPS | D3D11_SHADER_TRACKING_OPTION_TRACK_WAR_ACROSS_THREADGROUPS )  | D3D11_SHADER_TRACKING_OPTION_TRACK_WAW_ACROSS_THREADGROUPS )  | D3D11_SHADER_TRACKING_OPTION_TRACK_ATOMIC_CONSISTENCY_ACROSS_THREADGROUPS ) ,
        D3D11_SHADER_TRACKING_OPTION_ALL_HAZARDS	= ( ( ( ( ( ( ( D3D11_SHADER_TRACKING_OPTION_TRACK_RAW | D3D11_SHADER_TRACKING_OPTION_TRACK_WAR )  | D3D11_SHADER_TRACKING_OPTION_TRACK_WAW )  | D3D11_SHADER_TRACKING_OPTION_TRACK_ATOMIC_CONSISTENCY )  | D3D11_SHADER_TRACKING_OPTION_TRACK_RAW_ACROSS_THREADGROUPS )  | D3D11_SHADER_TRACKING_OPTION_TRACK_WAR_ACROSS_THREADGROUPS )  | D3D11_SHADER_TRACKING_OPTION_TRACK_WAW_ACROSS_THREADGROUPS )  | D3D11_SHADER_TRACKING_OPTION_TRACK_ATOMIC_CONSISTENCY_ACROSS_THREADGROUPS ) ,
        D3D11_SHADER_TRACKING_OPTION_ALL_HAZARDS_ALLOWING_SAME	= ( D3D11_SHADER_TRACKING_OPTION_ALL_HAZARDS | D3D11_SHADER_TRACKING_OPTION_ALLOW_SAME ) ,
        D3D11_SHADER_TRACKING_OPTION_ALL_OPTIONS	= ( D3D11_SHADER_TRACKING_OPTION_ALL_HAZARDS_ALLOWING_SAME | D3D11_SHADER_TRACKING_OPTION_TRACK_UNINITIALIZED ) 
    } 	D3D11_SHADER_TRACKING_OPTIONS;



extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0002_v0_0_s_ifspec;

#ifndef __ID3D11TracingDevice_INTERFACE_DEFINED__
#define __ID3D11TracingDevice_INTERFACE_DEFINED__

/* interface ID3D11TracingDevice */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_ID3D11TracingDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1911c771-1587-413e-a7e0-fb26c3de0268")
    ID3D11TracingDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetShaderTrackingOptionsByType( 
            /* [annotation] */ 
            _In_  UINT ResourceTypeFlags,
            /* [annotation] */ 
            _In_  UINT Options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShaderTrackingOptions( 
            /* [annotation] */ 
            _In_  IUnknown *pShader,
            /* [annotation] */ 
            _In_  UINT Options) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ID3D11TracingDeviceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ID3D11TracingDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ID3D11TracingDevice * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ID3D11TracingDevice * This);
        
        DECLSPEC_XFGVIRT(ID3D11TracingDevice, SetShaderTrackingOptionsByType)
        HRESULT ( STDMETHODCALLTYPE *SetShaderTrackingOptionsByType )( 
            ID3D11TracingDevice * This,
            /* [annotation] */ 
            _In_  UINT ResourceTypeFlags,
            /* [annotation] */ 
            _In_  UINT Options);
        
        DECLSPEC_XFGVIRT(ID3D11TracingDevice, SetShaderTrackingOptions)
        HRESULT ( STDMETHODCALLTYPE *SetShaderTrackingOptions )( 
            ID3D11TracingDevice * This,
            /* [annotation] */ 
            _In_  IUnknown *pShader,
            /* [annotation] */ 
            _In_  UINT Options);
        
        END_INTERFACE
    } ID3D11TracingDeviceVtbl;

    interface ID3D11TracingDevice
    {
        CONST_VTBL struct ID3D11TracingDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID3D11TracingDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11TracingDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11TracingDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11TracingDevice_SetShaderTrackingOptionsByType(This,ResourceTypeFlags,Options)	\
    ( (This)->lpVtbl -> SetShaderTrackingOptionsByType(This,ResourceTypeFlags,Options) ) 

#define ID3D11TracingDevice_SetShaderTrackingOptions(This,pShader,Options)	\
    ( (This)->lpVtbl -> SetShaderTrackingOptions(This,pShader,Options) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11TracingDevice_INTERFACE_DEFINED__ */


#ifndef __ID3D11RefTrackingOptions_INTERFACE_DEFINED__
#define __ID3D11RefTrackingOptions_INTERFACE_DEFINED__

/* interface ID3D11RefTrackingOptions */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_ID3D11RefTrackingOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("193dacdf-0db2-4c05-a55c-ef06cac56fd9")
    ID3D11RefTrackingOptions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetTrackingOptions( 
            UINT uOptions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ID3D11RefTrackingOptionsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ID3D11RefTrackingOptions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ID3D11RefTrackingOptions * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ID3D11RefTrackingOptions * This);
        
        DECLSPEC_XFGVIRT(ID3D11RefTrackingOptions, SetTrackingOptions)
        HRESULT ( STDMETHODCALLTYPE *SetTrackingOptions )( 
            ID3D11RefTrackingOptions * This,
            UINT uOptions);
        
        END_INTERFACE
    } ID3D11RefTrackingOptionsVtbl;

    interface ID3D11RefTrackingOptions
    {
        CONST_VTBL struct ID3D11RefTrackingOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID3D11RefTrackingOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11RefTrackingOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11RefTrackingOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11RefTrackingOptions_SetTrackingOptions(This,uOptions)	\
    ( (This)->lpVtbl -> SetTrackingOptions(This,uOptions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11RefTrackingOptions_INTERFACE_DEFINED__ */


#ifndef __ID3D11RefDefaultTrackingOptions_INTERFACE_DEFINED__
#define __ID3D11RefDefaultTrackingOptions_INTERFACE_DEFINED__

/* interface ID3D11RefDefaultTrackingOptions */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_ID3D11RefDefaultTrackingOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03916615-c644-418c-9bf4-75db5be63ca0")
    ID3D11RefDefaultTrackingOptions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetTrackingOptions( 
            UINT ResourceTypeFlags,
            UINT Options) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ID3D11RefDefaultTrackingOptionsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ID3D11RefDefaultTrackingOptions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ID3D11RefDefaultTrackingOptions * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ID3D11RefDefaultTrackingOptions * This);
        
        DECLSPEC_XFGVIRT(ID3D11RefDefaultTrackingOptions, SetTrackingOptions)
        HRESULT ( STDMETHODCALLTYPE *SetTrackingOptions )( 
            ID3D11RefDefaultTrackingOptions * This,
            UINT ResourceTypeFlags,
            UINT Options);
        
        END_INTERFACE
    } ID3D11RefDefaultTrackingOptionsVtbl;

    interface ID3D11RefDefaultTrackingOptions
    {
        CONST_VTBL struct ID3D11RefDefaultTrackingOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID3D11RefDefaultTrackingOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11RefDefaultTrackingOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11RefDefaultTrackingOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11RefDefaultTrackingOptions_SetTrackingOptions(This,ResourceTypeFlags,Options)	\
    ( (This)->lpVtbl -> SetTrackingOptions(This,ResourceTypeFlags,Options) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11RefDefaultTrackingOptions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_d3d11sdklayers_0000_0005 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP) */
#pragma endregion
#pragma endregion
#pragma region Application Family
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
DEFINE_GUID(DXGI_DEBUG_D3D11, 0x4b99317b, 0xac39, 0x4aa6, 0xbb, 0xb, 0xba, 0xa0, 0x47, 0x84, 0x79, 0x8f);
#define D3D11_REGKEY_PATH __TEXT("Software\\Microsoft\\Direct3D")
#define D3D11_MUTE_DEBUG_OUTPUT __TEXT("MuteDebugOutput")
#define D3D11_ENABLE_BREAK_ON_MESSAGE __TEXT("EnableBreakOnMessage")
#define D3D11_INFOQUEUE_STORAGE_FILTER_OVERRIDE __TEXT("InfoQueueStorageFilterOverride")
#define D3D11_MUTE_CATEGORY __TEXT("Mute_CATEGORY_%s")
#define D3D11_MUTE_SEVERITY __TEXT("Mute_SEVERITY_%s")
#define D3D11_MUTE_ID_STRING __TEXT("Mute_ID_%s")
#define D3D11_MUTE_ID_DECIMAL __TEXT("Mute_ID_%d")
#define D3D11_UNMUTE_SEVERITY_INFO __TEXT("Unmute_SEVERITY_INFO")
#define D3D11_BREAKON_CATEGORY __TEXT("BreakOn_CATEGORY_%s")
#define D3D11_BREAKON_SEVERITY __TEXT("BreakOn_SEVERITY_%s")
#define D3D11_BREAKON_ID_STRING __TEXT("BreakOn_ID_%s")
#define D3D11_BREAKON_ID_DECIMAL __TEXT("BreakOn_ID_%d")
#define D3D11_APPSIZE_STRING __TEXT("Size")
#define D3D11_APPNAME_STRING __TEXT("Name")
#define D3D11_FORCE_DEBUGGABLE __TEXT("ForceDebuggable")
#define D3D11_FORCE_SHADER_SKIP_OPTIMIZATION __TEXT("ForceShaderSkipOptimization")
typedef 
enum D3D11_MESSAGE_CATEGORY
    {
        D3D11_MESSAGE_CATEGORY_APPLICATION_DEFINED	= 0,
        D3D11_MESSAGE_CATEGORY_MISCELLANEOUS	= ( D3D11_MESSAGE_CATEGORY_APPLICATION_DEFINED + 1 ) ,
        D3D11_MESSAGE_CATEGORY_INITIALIZATION	= ( D3D11_MESSAGE_CATEGORY_MISCELLANEOUS + 1 ) ,
        D3D11_MESSAGE_CATEGORY_CLEANUP	= ( D3D11_MESSAGE_CATEGORY_INITIALIZATION + 1 ) ,
        D3D11_MESSAGE_CATEGORY_COMPILATION	= ( D3D11_MESSAGE_CATEGORY_CLEANUP + 1 ) ,
        D3D11_MESSAGE_CATEGORY_STATE_CREATION	= ( D3D11_MESSAGE_CATEGORY_COMPILATION + 1 ) ,
        D3D11_MESSAGE_CATEGORY_STATE_SETTING	= ( D3D11_MESSAGE_CATEGORY_STATE_CREATION + 1 ) ,
        D3D11_MESSAGE_CATEGORY_STATE_GETTING	= ( D3D11_MESSAGE_CATEGORY_STATE_SETTING + 1 ) ,
        D3D11_MESSAGE_CATEGORY_RESOURCE_MANIPULATION	= ( D3D11_MESSAGE_CATEGORY_STATE_GETTING + 1 ) ,
        D3D11_MESSAGE_CATEGORY_EXECUTION	= ( D3D11_MESSAGE_CATEGORY_RESOURCE_MANIPULATION + 1 ) ,
        D3D11_MESSAGE_CATEGORY_SHADER	= ( D3D11_MESSAGE_CATEGORY_EXECUTION + 1 ) 
    } 	D3D11_MESSAGE_CATEGORY;

typedef 
enum D3D11_MESSAGE_SEVERITY
    {
        D3D11_MESSAGE_SEVERITY_CORRUPTION	= 0,
        D3D11_MESSAGE_SEVERITY_ERROR	= ( D3D11_MESSAGE_SEVERITY_CORRUPTION + 1 ) ,
        D3D11_MESSAGE_SEVERITY_WARNING	= ( D3D11_MESSAGE_SEVERITY_ERROR + 1 ) ,
        D3D11_MESSAGE_SEVERITY_INFO	= ( D3D11_MESSAGE_SEVERITY_WARNING + 1 ) ,
        D3D11_MESSAGE_SEVERITY_MESSAGE	= ( D3D11_MESSAGE_SEVERITY_INFO + 1 ) 
    } 	D3D11_MESSAGE_SEVERITY;

typedef 
enum D3D11_MESSAGE_ID
    {
        D3D11_MESSAGE_ID_UNKNOWN	= 0,
        D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_HAZARD	= ( D3D11_MESSAGE_ID_UNKNOWN + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_VSSETSHADERRESOURCES_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_VSSETCONSTANTBUFFERS_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_VSSETSHADERRESOURCES_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GSSETSHADERRESOURCES_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_VSSETCONSTANTBUFFERS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GSSETCONSTANTBUFFERS_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_GSSETSHADERRESOURCES_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_PSSETSHADERRESOURCES_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_GSSETCONSTANTBUFFERS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_PSSETCONSTANTBUFFERS_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_PSSETSHADERRESOURCES_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETS_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_PSSETCONSTANTBUFFERS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SOSETTARGETS_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_STRING_FROM_APPLICATION	= ( D3D11_MESSAGE_ID_DEVICE_SOSETTARGETS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_THIS	= ( D3D11_MESSAGE_ID_STRING_FROM_APPLICATION + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER1	= ( D3D11_MESSAGE_ID_CORRUPTED_THIS + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER2	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER1 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER3	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER2 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER4	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER3 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER5	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER4 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER6	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER5 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER7	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER6 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER8	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER7 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER9	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER8 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER10	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER9 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER11	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER10 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER12	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER11 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER13	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER12 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER14	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER13 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_PARAMETER15	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER14 + 1 ) ,
        D3D11_MESSAGE_ID_CORRUPTED_MULTITHREADING	= ( D3D11_MESSAGE_ID_CORRUPTED_PARAMETER15 + 1 ) ,
        D3D11_MESSAGE_ID_MESSAGE_REPORTING_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CORRUPTED_MULTITHREADING + 1 ) ,
        D3D11_MESSAGE_ID_IASETINPUTLAYOUT_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_MESSAGE_REPORTING_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_IASETVERTEXBUFFERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_IASETINPUTLAYOUT_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_IASETINDEXBUFFER_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_IASETVERTEXBUFFERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_VSSETSHADER_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_IASETINDEXBUFFER_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_VSSETSHADERRESOURCES_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_VSSETSHADER_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_VSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_VSSETSHADERRESOURCES_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_VSSETSAMPLERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_VSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_GSSETSHADER_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_VSSETSAMPLERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_GSSETSHADERRESOURCES_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_GSSETSHADER_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_GSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_GSSETSHADERRESOURCES_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_GSSETSAMPLERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_GSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_SOSETTARGETS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_GSSETSAMPLERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_PSSETSHADER_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_SOSETTARGETS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_PSSETSHADERRESOURCES_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_PSSETSHADER_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_PSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_PSSETSHADERRESOURCES_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_PSSETSAMPLERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_PSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_RSSETSTATE_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_PSSETSAMPLERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_OMSETBLENDSTATE_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_RSSETSTATE_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_OMSETDEPTHSTENCILSTATE_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_OMSETBLENDSTATE_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_OMSETRENDERTARGETS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_OMSETDEPTHSTENCILSTATE_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_SETPREDICATION_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_OMSETRENDERTARGETS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_GETPRIVATEDATA_MOREDATA	= ( D3D11_MESSAGE_ID_SETPREDICATION_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_SETPRIVATEDATA_INVALIDFREEDATA	= ( D3D11_MESSAGE_ID_GETPRIVATEDATA_MOREDATA + 1 ) ,
        D3D11_MESSAGE_ID_SETPRIVATEDATA_INVALIDIUNKNOWN	= ( D3D11_MESSAGE_ID_SETPRIVATEDATA_INVALIDFREEDATA + 1 ) ,
        D3D11_MESSAGE_ID_SETPRIVATEDATA_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_SETPRIVATEDATA_INVALIDIUNKNOWN + 1 ) ,
        D3D11_MESSAGE_ID_SETPRIVATEDATA_CHANGINGPARAMS	= ( D3D11_MESSAGE_ID_SETPRIVATEDATA_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_SETPRIVATEDATA_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_SETPRIVATEDATA_CHANGINGPARAMS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDFORMAT	= ( D3D11_MESSAGE_ID_SETPRIVATEDATA_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDSAMPLES	= ( D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDUSAGE	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDSAMPLES + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDBINDFLAGS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDCPUACCESSFLAGS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDBINDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDMISCFLAGS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDCPUACCESSFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDCPUACCESSFLAGS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDBINDFLAGS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDCPUACCESSFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDINITIALDATA	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDBINDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDDIMENSIONS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDINITIALDATA + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDMIPLEVELS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDDIMENSIONS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDMISCFLAGS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDMIPLEVELS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_NULLDESC	= ( D3D11_MESSAGE_ID_CREATEBUFFER_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDCONSTANTBUFFERBINDINGS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_LARGEALLOCATION	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDCONSTANTBUFFERBINDINGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDFORMAT	= ( D3D11_MESSAGE_ID_CREATEBUFFER_LARGEALLOCATION + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_UNSUPPORTEDFORMAT	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDSAMPLES	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_UNSUPPORTEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDUSAGE	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDSAMPLES + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDBINDFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDCPUACCESSFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDBINDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDMISCFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDCPUACCESSFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDCPUACCESSFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDBINDFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDCPUACCESSFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDINITIALDATA	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDBINDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDDIMENSIONS	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDINITIALDATA + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDMIPLEVELS	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDDIMENSIONS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDMISCFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDMIPLEVELS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_NULLDESC	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_LARGEALLOCATION	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDFORMAT	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_LARGEALLOCATION + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_UNSUPPORTEDFORMAT	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDSAMPLES	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_UNSUPPORTEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDUSAGE	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDSAMPLES + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDBINDFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDCPUACCESSFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDBINDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDMISCFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDCPUACCESSFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDCPUACCESSFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDBINDFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDCPUACCESSFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDINITIALDATA	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDBINDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDDIMENSIONS	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDINITIALDATA + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDMIPLEVELS	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDDIMENSIONS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDMISCFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDMIPLEVELS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_NULLDESC	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_LARGEALLOCATION	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDFORMAT	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_LARGEALLOCATION + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_UNSUPPORTEDFORMAT	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDSAMPLES	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_UNSUPPORTEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDUSAGE	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDSAMPLES + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDBINDFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDCPUACCESSFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDBINDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDMISCFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDCPUACCESSFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDCPUACCESSFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDBINDFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDCPUACCESSFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDINITIALDATA	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDBINDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDDIMENSIONS	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDINITIALDATA + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDMIPLEVELS	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDDIMENSIONS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDMISCFLAGS	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDMIPLEVELS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_NULLDESC	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE3D_LARGEALLOCATION	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_UNRECOGNIZEDFORMAT	= ( D3D11_MESSAGE_ID_CREATETEXTURE3D_LARGEALLOCATION + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDESC	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_UNRECOGNIZEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDIMENSIONS	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDRESOURCE	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDIMENSIONS + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_TOOMANYOBJECTS	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_TOOMANYOBJECTS + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_UNRECOGNIZEDFORMAT	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_UNSUPPORTEDFORMAT	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_UNRECOGNIZEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDESC	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_UNSUPPORTEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDIMENSIONS	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDRESOURCE	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDIMENSIONS + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_TOOMANYOBJECTS	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_TOOMANYOBJECTS + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_UNRECOGNIZEDFORMAT	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDDESC	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_UNRECOGNIZEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDDIMENSIONS	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDRESOURCE	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDDIMENSIONS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_TOOMANYOBJECTS	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_TOOMANYOBJECTS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_TOOMANYELEMENTS	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_TOOMANYELEMENTS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INCOMPATIBLEFORMAT	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSLOT	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INCOMPATIBLEFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDINPUTSLOTCLASS	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSLOT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_STEPRATESLOTCLASSMISMATCH	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDINPUTSLOTCLASS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSLOTCLASSCHANGE	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_STEPRATESLOTCLASSMISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSTEPRATECHANGE	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSLOTCLASSCHANGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDALIGNMENT	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSTEPRATECHANGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_DUPLICATESEMANTIC	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDALIGNMENT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_UNPARSEABLEINPUTSIGNATURE	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_DUPLICATESEMANTIC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_NULLSEMANTIC	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_UNPARSEABLEINPUTSIGNATURE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_MISSINGELEMENT	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_NULLSEMANTIC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_NULLDESC	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_MISSINGELEMENT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVERTEXSHADER_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDSHADERBYTECODE	= ( D3D11_MESSAGE_ID_CREATEVERTEXSHADER_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDSHADERTYPE	= ( D3D11_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDSHADERBYTECODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADER_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDSHADERTYPE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDSHADERBYTECODE	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADER_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDSHADERTYPE	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDSHADERBYTECODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDSHADERTYPE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSHADERBYTECODE	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSHADERTYPE	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSHADERBYTECODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMENTRIES	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSHADERTYPE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTPUTSTREAMSTRIDEUNUSED	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMENTRIES + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDDECL	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTPUTSTREAMSTRIDEUNUSED + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_EXPECTEDDECL	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDDECL + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTPUTSLOT0EXPECTED	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_EXPECTEDDECL + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDOUTPUTSLOT	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTPUTSLOT0EXPECTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_ONLYONEELEMENTPERSLOT	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDOUTPUTSLOT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDCOMPONENTCOUNT	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_ONLYONEELEMENTPERSLOT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTARTCOMPONENTANDCOMPONENTCOUNT	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDCOMPONENTCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDGAPDEFINITION	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTARTCOMPONENTANDCOMPONENTCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_REPEATEDOUTPUT	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDGAPDEFINITION + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDOUTPUTSTREAMSTRIDE	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_REPEATEDOUTPUT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MISSINGSEMANTIC	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDOUTPUTSTREAMSTRIDE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MASKMISMATCH	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MISSINGSEMANTIC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_CANTHAVEONLYGAPS	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MASKMISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DECLTOOCOMPLEX	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_CANTHAVEONLYGAPS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MISSINGOUTPUTSIGNATURE	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DECLTOOCOMPLEX + 1 ) ,
        D3D11_MESSAGE_ID_CREATEPIXELSHADER_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MISSINGOUTPUTSIGNATURE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEPIXELSHADER_INVALIDSHADERBYTECODE	= ( D3D11_MESSAGE_ID_CREATEPIXELSHADER_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEPIXELSHADER_INVALIDSHADERTYPE	= ( D3D11_MESSAGE_ID_CREATEPIXELSHADER_INVALIDSHADERBYTECODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDFILLMODE	= ( D3D11_MESSAGE_ID_CREATEPIXELSHADER_INVALIDSHADERTYPE + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDCULLMODE	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDFILLMODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDDEPTHBIASCLAMP	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDCULLMODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDSLOPESCALEDDEPTHBIAS	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDDEPTHBIASCLAMP + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_TOOMANYOBJECTS	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDSLOPESCALEDDEPTHBIAS + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_NULLDESC	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_TOOMANYOBJECTS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDDEPTHWRITEMASK	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDDEPTHFUNC	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDDEPTHWRITEMASK + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILFAILOP	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDDEPTHFUNC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILZFAILOP	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILFAILOP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILPASSOP	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILZFAILOP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILFUNC	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILPASSOP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILFAILOP	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILFUNC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILZFAILOP	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILFAILOP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILPASSOP	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILZFAILOP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILFUNC	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILPASSOP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_TOOMANYOBJECTS	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILFUNC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_NULLDESC	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_TOOMANYOBJECTS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDSRCBLEND	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDDESTBLEND	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDSRCBLEND + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDBLENDOP	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDDESTBLEND + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDSRCBLENDALPHA	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDBLENDOP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDDESTBLENDALPHA	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDSRCBLENDALPHA + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDBLENDOPALPHA	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDDESTBLENDALPHA + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDRENDERTARGETWRITEMASK	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDBLENDOPALPHA + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_TOOMANYOBJECTS	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDRENDERTARGETWRITEMASK + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_NULLDESC	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_TOOMANYOBJECTS + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDFILTER	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSU	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDFILTER + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSV	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSU + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSW	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSV + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMIPLODBIAS	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSW + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMAXANISOTROPY	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMIPLODBIAS + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDCOMPARISONFUNC	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMAXANISOTROPY + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMINLOD	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDCOMPARISONFUNC + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMAXLOD	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMINLOD + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_TOOMANYOBJECTS	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMAXLOD + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_NULLDESC	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_TOOMANYOBJECTS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDQUERY	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDMISCFLAGS	= ( D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDQUERY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_UNEXPECTEDMISCFLAG	= ( D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_NULLDESC	= ( D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_UNEXPECTEDMISCFLAG + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNRECOGNIZED	= ( D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNDEFINED	= ( D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNRECOGNIZED + 1 ) ,
        D3D11_MESSAGE_ID_IASETVERTEXBUFFERS_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNDEFINED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_OFFSET_TOO_LARGE	= ( D3D11_MESSAGE_ID_IASETVERTEXBUFFERS_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_OFFSET_TOO_LARGE + 1 ) ,
        D3D11_MESSAGE_ID_IASETINDEXBUFFER_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_FORMAT_INVALID	= ( D3D11_MESSAGE_ID_IASETINDEXBUFFER_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_OFFSET_TOO_LARGE	= ( D3D11_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_FORMAT_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_OFFSET_UNALIGNED	= ( D3D11_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_OFFSET_TOO_LARGE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_VSSETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_OFFSET_UNALIGNED + 1 ) ,
        D3D11_MESSAGE_ID_VSSETCONSTANTBUFFERS_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_DEVICE_VSSETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_VSSETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_VSSETCONSTANTBUFFERS_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_VSSETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_VSSETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GSSETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_VSSETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_GSSETCONSTANTBUFFERS_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_DEVICE_GSSETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GSSETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_GSSETCONSTANTBUFFERS_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GSSETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_GSSETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_SOSETTARGETS_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_DEVICE_GSSETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SOSETTARGETS_OFFSET_UNALIGNED	= ( D3D11_MESSAGE_ID_SOSETTARGETS_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_PSSETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_SOSETTARGETS_OFFSET_UNALIGNED + 1 ) ,
        D3D11_MESSAGE_ID_PSSETCONSTANTBUFFERS_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_DEVICE_PSSETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_PSSETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_PSSETCONSTANTBUFFERS_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_PSSETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_PSSETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_INVALIDVIEWPORT	= ( D3D11_MESSAGE_ID_DEVICE_PSSETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_INVALIDSCISSOR	= ( D3D11_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_INVALIDVIEWPORT + 1 ) ,
        D3D11_MESSAGE_ID_CLEARRENDERTARGETVIEW_DENORMFLUSH	= ( D3D11_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_INVALIDSCISSOR + 1 ) ,
        D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_DENORMFLUSH	= ( D3D11_MESSAGE_ID_CLEARRENDERTARGETVIEW_DENORMFLUSH + 1 ) ,
        D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_INVALID	= ( D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_DENORMFLUSH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IAGETVERTEXBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_VSGETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_IAGETVERTEXBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_VSGETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_VSGETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_VSGETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_VSGETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GSGETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_VSGETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GSGETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_GSGETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GSGETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_GSGETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SOGETTARGETS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_GSGETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_PSGETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_SOGETTARGETS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_PSGETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_PSGETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_PSGETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_PSGETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RSGETVIEWPORTS_VIEWPORTS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_PSGETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RSGETSCISSORRECTS_RECTS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_RSGETVIEWPORTS_VIEWPORTS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GENERATEMIPS_RESOURCE_INVALID	= ( D3D11_MESSAGE_ID_DEVICE_RSGETSCISSORRECTS_RECTS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDDESTINATIONSUBRESOURCE	= ( D3D11_MESSAGE_ID_DEVICE_GENERATEMIPS_RESOURCE_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCESUBRESOURCE	= ( D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDDESTINATIONSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCEBOX	= ( D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCESUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCE	= ( D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCEBOX + 1 ) ,
        D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDDESTINATIONSTATE	= ( D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCE + 1 ) ,
        D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCESTATE	= ( D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDDESTINATIONSTATE + 1 ) ,
        D3D11_MESSAGE_ID_COPYRESOURCE_INVALIDSOURCE	= ( D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCESTATE + 1 ) ,
        D3D11_MESSAGE_ID_COPYRESOURCE_INVALIDDESTINATIONSTATE	= ( D3D11_MESSAGE_ID_COPYRESOURCE_INVALIDSOURCE + 1 ) ,
        D3D11_MESSAGE_ID_COPYRESOURCE_INVALIDSOURCESTATE	= ( D3D11_MESSAGE_ID_COPYRESOURCE_INVALIDDESTINATIONSTATE + 1 ) ,
        D3D11_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONSUBRESOURCE	= ( D3D11_MESSAGE_ID_COPYRESOURCE_INVALIDSOURCESTATE + 1 ) ,
        D3D11_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONBOX	= ( D3D11_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONSTATE	= ( D3D11_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONBOX + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_DESTINATION_INVALID	= ( D3D11_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONSTATE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_DESTINATION_SUBRESOURCE_INVALID	= ( D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_DESTINATION_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_SOURCE_INVALID	= ( D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_DESTINATION_SUBRESOURCE_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_SOURCE_SUBRESOURCE_INVALID	= ( D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_SOURCE_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_FORMAT_INVALID	= ( D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_SOURCE_SUBRESOURCE_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_BUFFER_MAP_INVALIDMAPTYPE	= ( D3D11_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_FORMAT_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_BUFFER_MAP_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_BUFFER_MAP_INVALIDMAPTYPE + 1 ) ,
        D3D11_MESSAGE_ID_BUFFER_MAP_ALREADYMAPPED	= ( D3D11_MESSAGE_ID_BUFFER_MAP_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_BUFFER_MAP_DEVICEREMOVED_RETURN	= ( D3D11_MESSAGE_ID_BUFFER_MAP_ALREADYMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_BUFFER_UNMAP_NOTMAPPED	= ( D3D11_MESSAGE_ID_BUFFER_MAP_DEVICEREMOVED_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE1D_MAP_INVALIDMAPTYPE	= ( D3D11_MESSAGE_ID_BUFFER_UNMAP_NOTMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE1D_MAP_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_TEXTURE1D_MAP_INVALIDMAPTYPE + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE1D_MAP_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_TEXTURE1D_MAP_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE1D_MAP_ALREADYMAPPED	= ( D3D11_MESSAGE_ID_TEXTURE1D_MAP_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE1D_MAP_DEVICEREMOVED_RETURN	= ( D3D11_MESSAGE_ID_TEXTURE1D_MAP_ALREADYMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE1D_UNMAP_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_TEXTURE1D_MAP_DEVICEREMOVED_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE1D_UNMAP_NOTMAPPED	= ( D3D11_MESSAGE_ID_TEXTURE1D_UNMAP_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE2D_MAP_INVALIDMAPTYPE	= ( D3D11_MESSAGE_ID_TEXTURE1D_UNMAP_NOTMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE2D_MAP_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_TEXTURE2D_MAP_INVALIDMAPTYPE + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE2D_MAP_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_TEXTURE2D_MAP_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE2D_MAP_ALREADYMAPPED	= ( D3D11_MESSAGE_ID_TEXTURE2D_MAP_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE2D_MAP_DEVICEREMOVED_RETURN	= ( D3D11_MESSAGE_ID_TEXTURE2D_MAP_ALREADYMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE2D_UNMAP_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_TEXTURE2D_MAP_DEVICEREMOVED_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE2D_UNMAP_NOTMAPPED	= ( D3D11_MESSAGE_ID_TEXTURE2D_UNMAP_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE3D_MAP_INVALIDMAPTYPE	= ( D3D11_MESSAGE_ID_TEXTURE2D_UNMAP_NOTMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE3D_MAP_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_TEXTURE3D_MAP_INVALIDMAPTYPE + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE3D_MAP_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_TEXTURE3D_MAP_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE3D_MAP_ALREADYMAPPED	= ( D3D11_MESSAGE_ID_TEXTURE3D_MAP_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE3D_MAP_DEVICEREMOVED_RETURN	= ( D3D11_MESSAGE_ID_TEXTURE3D_MAP_ALREADYMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE3D_UNMAP_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_TEXTURE3D_MAP_DEVICEREMOVED_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_TEXTURE3D_UNMAP_NOTMAPPED	= ( D3D11_MESSAGE_ID_TEXTURE3D_UNMAP_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_CHECKFORMATSUPPORT_FORMAT_DEPRECATED	= ( D3D11_MESSAGE_ID_TEXTURE3D_UNMAP_NOTMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_CHECKMULTISAMPLEQUALITYLEVELS_FORMAT_DEPRECATED	= ( D3D11_MESSAGE_ID_CHECKFORMATSUPPORT_FORMAT_DEPRECATED + 1 ) ,
        D3D11_MESSAGE_ID_SETEXCEPTIONMODE_UNRECOGNIZEDFLAGS	= ( D3D11_MESSAGE_ID_CHECKMULTISAMPLEQUALITYLEVELS_FORMAT_DEPRECATED + 1 ) ,
        D3D11_MESSAGE_ID_SETEXCEPTIONMODE_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_SETEXCEPTIONMODE_UNRECOGNIZEDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_SETEXCEPTIONMODE_DEVICEREMOVED_RETURN	= ( D3D11_MESSAGE_ID_SETEXCEPTIONMODE_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_REF_SIMULATING_INFINITELY_FAST_HARDWARE	= ( D3D11_MESSAGE_ID_SETEXCEPTIONMODE_DEVICEREMOVED_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_REF_THREADING_MODE	= ( D3D11_MESSAGE_ID_REF_SIMULATING_INFINITELY_FAST_HARDWARE + 1 ) ,
        D3D11_MESSAGE_ID_REF_UMDRIVER_EXCEPTION	= ( D3D11_MESSAGE_ID_REF_THREADING_MODE + 1 ) ,
        D3D11_MESSAGE_ID_REF_KMDRIVER_EXCEPTION	= ( D3D11_MESSAGE_ID_REF_UMDRIVER_EXCEPTION + 1 ) ,
        D3D11_MESSAGE_ID_REF_HARDWARE_EXCEPTION	= ( D3D11_MESSAGE_ID_REF_KMDRIVER_EXCEPTION + 1 ) ,
        D3D11_MESSAGE_ID_REF_ACCESSING_INDEXABLE_TEMP_OUT_OF_RANGE	= ( D3D11_MESSAGE_ID_REF_HARDWARE_EXCEPTION + 1 ) ,
        D3D11_MESSAGE_ID_REF_PROBLEM_PARSING_SHADER	= ( D3D11_MESSAGE_ID_REF_ACCESSING_INDEXABLE_TEMP_OUT_OF_RANGE + 1 ) ,
        D3D11_MESSAGE_ID_REF_OUT_OF_MEMORY	= ( D3D11_MESSAGE_ID_REF_PROBLEM_PARSING_SHADER + 1 ) ,
        D3D11_MESSAGE_ID_REF_INFO	= ( D3D11_MESSAGE_ID_REF_OUT_OF_MEMORY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEXPOS_OVERFLOW	= ( D3D11_MESSAGE_ID_REF_INFO + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAWINDEXED_INDEXPOS_OVERFLOW	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEXPOS_OVERFLOW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAWINSTANCED_VERTEXPOS_OVERFLOW	= ( D3D11_MESSAGE_ID_DEVICE_DRAWINDEXED_INDEXPOS_OVERFLOW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAWINSTANCED_INSTANCEPOS_OVERFLOW	= ( D3D11_MESSAGE_ID_DEVICE_DRAWINSTANCED_VERTEXPOS_OVERFLOW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAWINDEXEDINSTANCED_INSTANCEPOS_OVERFLOW	= ( D3D11_MESSAGE_ID_DEVICE_DRAWINSTANCED_INSTANCEPOS_OVERFLOW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAWINDEXEDINSTANCED_INDEXPOS_OVERFLOW	= ( D3D11_MESSAGE_ID_DEVICE_DRAWINDEXEDINSTANCED_INSTANCEPOS_OVERFLOW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_SHADER_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_DRAWINDEXEDINSTANCED_INDEXPOS_OVERFLOW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_SEMANTICNAME_NOT_FOUND	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_SHADER_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_REGISTERINDEX	= ( D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_SEMANTICNAME_NOT_FOUND + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_COMPONENTTYPE	= ( D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_REGISTERINDEX + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_REGISTERMASK	= ( D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_COMPONENTTYPE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_SYSTEMVALUE	= ( D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_REGISTERMASK + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_NEVERWRITTEN_ALWAYSREADS	= ( D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_SYSTEMVALUE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_NEVERWRITTEN_ALWAYSREADS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_INPUTLAYOUT_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_CONSTANT_BUFFER_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_INPUTLAYOUT_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_CONSTANT_BUFFER_TOO_SMALL	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_CONSTANT_BUFFER_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_SAMPLER_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_CONSTANT_BUFFER_TOO_SMALL + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_SHADERRESOURCEVIEW_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_SAMPLER_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_VIEW_DIMENSION_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_SHADERRESOURCEVIEW_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_STRIDE_TOO_SMALL	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_VIEW_DIMENSION_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_TOO_SMALL	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_STRIDE_TOO_SMALL + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_TOO_SMALL + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_FORMAT_INVALID	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_TOO_SMALL	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_FORMAT_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_GS_INPUT_PRIMITIVE_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_TOO_SMALL + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_RETURN_TYPE_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_GS_INPUT_PRIMITIVE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_POSITION_NOT_PRESENT	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_RETURN_TYPE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_OUTPUT_STREAM_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_POSITION_NOT_PRESENT + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_BOUND_RESOURCE_MAPPED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_OUTPUT_STREAM_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_PRIMITIVETOPOLOGY	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_BOUND_RESOURCE_MAPPED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_OFFSET_UNALIGNED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_PRIMITIVETOPOLOGY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_STRIDE_UNALIGNED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_OFFSET_UNALIGNED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_INDEX_OFFSET_UNALIGNED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_VERTEX_STRIDE_UNALIGNED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_OUTPUT_STREAM_OFFSET_UNALIGNED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_INDEX_OFFSET_UNALIGNED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_LD_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_OUTPUT_STREAM_OFFSET_UNALIGNED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_SAMPLE_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_LD_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_SAMPLE_C_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_SAMPLE_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_MULTISAMPLE_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_SAMPLE_C_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_SO_TARGETS_BOUND_WITHOUT_SOURCE	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_MULTISAMPLE_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_SO_STRIDE_LARGER_THAN_BUFFER	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_SO_TARGETS_BOUND_WITHOUT_SOURCE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_OM_RENDER_TARGET_DOES_NOT_SUPPORT_BLENDING	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_SO_STRIDE_LARGER_THAN_BUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_OM_DUAL_SOURCE_BLENDING_CAN_ONLY_HAVE_RENDER_TARGET_0	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_OM_RENDER_TARGET_DOES_NOT_SUPPORT_BLENDING + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_AT_FAULT	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_OM_DUAL_SOURCE_BLENDING_CAN_ONLY_HAVE_RENDER_TARGET_0 + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_POSSIBLY_AT_FAULT	= ( D3D11_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_AT_FAULT + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_NOT_AT_FAULT	= ( D3D11_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_POSSIBLY_AT_FAULT + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_NOT_AT_FAULT + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_BADINTERFACE_RETURN	= ( D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_VIEWPORT_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_BADINTERFACE_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_TRAILING_DIGIT_IN_SEMANTIC	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_VIEWPORT_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_TRAILING_DIGIT_IN_SEMANTIC	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_TRAILING_DIGIT_IN_SEMANTIC + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_DENORMFLUSH	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_TRAILING_DIGIT_IN_SEMANTIC + 1 ) ,
        D3D11_MESSAGE_ID_OMSETRENDERTARGETS_INVALIDVIEW	= ( D3D11_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_DENORMFLUSH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETTEXTFILTERSIZE_INVALIDDIMENSIONS	= ( D3D11_MESSAGE_ID_OMSETRENDERTARGETS_INVALIDVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_SAMPLER_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_SETTEXTFILTERSIZE_INVALIDDIMENSIONS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_TYPE_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_SAMPLER_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_BLENDSTATE_GETDESC_LEGACY	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_TYPE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_SHADERRESOURCEVIEW_GETDESC_LEGACY	= ( D3D11_MESSAGE_ID_BLENDSTATE_GETDESC_LEGACY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEQUERY_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_SHADERRESOURCEVIEW_GETDESC_LEGACY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEPREDICATE_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATEQUERY_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOUNTER_OUTOFRANGE_COUNTER	= ( D3D11_MESSAGE_ID_CREATEPREDICATE_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOUNTER_SIMULTANEOUS_ACTIVE_COUNTERS_EXHAUSTED	= ( D3D11_MESSAGE_ID_CREATECOUNTER_OUTOFRANGE_COUNTER + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOUNTER_UNSUPPORTED_WELLKNOWN_COUNTER	= ( D3D11_MESSAGE_ID_CREATECOUNTER_SIMULTANEOUS_ACTIVE_COUNTERS_EXHAUSTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOUNTER_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATECOUNTER_UNSUPPORTED_WELLKNOWN_COUNTER + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOUNTER_NONEXCLUSIVE_RETURN	= ( D3D11_MESSAGE_ID_CREATECOUNTER_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOUNTER_NULLDESC	= ( D3D11_MESSAGE_ID_CREATECOUNTER_NONEXCLUSIVE_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CHECKCOUNTER_OUTOFRANGE_COUNTER	= ( D3D11_MESSAGE_ID_CREATECOUNTER_NULLDESC + 1 ) ,
        D3D11_MESSAGE_ID_CHECKCOUNTER_UNSUPPORTED_WELLKNOWN_COUNTER	= ( D3D11_MESSAGE_ID_CHECKCOUNTER_OUTOFRANGE_COUNTER + 1 ) ,
        D3D11_MESSAGE_ID_SETPREDICATION_INVALID_PREDICATE_STATE	= ( D3D11_MESSAGE_ID_CHECKCOUNTER_UNSUPPORTED_WELLKNOWN_COUNTER + 1 ) ,
        D3D11_MESSAGE_ID_QUERY_BEGIN_UNSUPPORTED	= ( D3D11_MESSAGE_ID_SETPREDICATION_INVALID_PREDICATE_STATE + 1 ) ,
        D3D11_MESSAGE_ID_PREDICATE_BEGIN_DURING_PREDICATION	= ( D3D11_MESSAGE_ID_QUERY_BEGIN_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_QUERY_BEGIN_DUPLICATE	= ( D3D11_MESSAGE_ID_PREDICATE_BEGIN_DURING_PREDICATION + 1 ) ,
        D3D11_MESSAGE_ID_QUERY_BEGIN_ABANDONING_PREVIOUS_RESULTS	= ( D3D11_MESSAGE_ID_QUERY_BEGIN_DUPLICATE + 1 ) ,
        D3D11_MESSAGE_ID_PREDICATE_END_DURING_PREDICATION	= ( D3D11_MESSAGE_ID_QUERY_BEGIN_ABANDONING_PREVIOUS_RESULTS + 1 ) ,
        D3D11_MESSAGE_ID_QUERY_END_ABANDONING_PREVIOUS_RESULTS	= ( D3D11_MESSAGE_ID_PREDICATE_END_DURING_PREDICATION + 1 ) ,
        D3D11_MESSAGE_ID_QUERY_END_WITHOUT_BEGIN	= ( D3D11_MESSAGE_ID_QUERY_END_ABANDONING_PREVIOUS_RESULTS + 1 ) ,
        D3D11_MESSAGE_ID_QUERY_GETDATA_INVALID_DATASIZE	= ( D3D11_MESSAGE_ID_QUERY_END_WITHOUT_BEGIN + 1 ) ,
        D3D11_MESSAGE_ID_QUERY_GETDATA_INVALID_FLAGS	= ( D3D11_MESSAGE_ID_QUERY_GETDATA_INVALID_DATASIZE + 1 ) ,
        D3D11_MESSAGE_ID_QUERY_GETDATA_INVALID_CALL	= ( D3D11_MESSAGE_ID_QUERY_GETDATA_INVALID_FLAGS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_PS_OUTPUT_TYPE_MISMATCH	= ( D3D11_MESSAGE_ID_QUERY_GETDATA_INVALID_CALL + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_GATHER_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_PS_OUTPUT_TYPE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_USE_OF_CENTER_MULTISAMPLE_PATTERN	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_GATHER_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_STRIDE_TOO_LARGE	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_USE_OF_CENTER_MULTISAMPLE_PATTERN + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_INVALIDRANGE	= ( D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_STRIDE_TOO_LARGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_EMPTY_LAYOUT	= ( D3D11_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_INVALIDRANGE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_SAMPLE_COUNT_MISMATCH	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_EMPTY_LAYOUT + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_OBJECT_SUMMARY	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RESOURCE_SAMPLE_COUNT_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_BUFFER	= ( D3D11_MESSAGE_ID_LIVE_OBJECT_SUMMARY + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_TEXTURE1D	= ( D3D11_MESSAGE_ID_LIVE_BUFFER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_TEXTURE2D	= ( D3D11_MESSAGE_ID_LIVE_TEXTURE1D + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_TEXTURE3D	= ( D3D11_MESSAGE_ID_LIVE_TEXTURE2D + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_SHADERRESOURCEVIEW	= ( D3D11_MESSAGE_ID_LIVE_TEXTURE3D + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_RENDERTARGETVIEW	= ( D3D11_MESSAGE_ID_LIVE_SHADERRESOURCEVIEW + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILVIEW	= ( D3D11_MESSAGE_ID_LIVE_RENDERTARGETVIEW + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_VERTEXSHADER	= ( D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILVIEW + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_GEOMETRYSHADER	= ( D3D11_MESSAGE_ID_LIVE_VERTEXSHADER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_PIXELSHADER	= ( D3D11_MESSAGE_ID_LIVE_GEOMETRYSHADER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_INPUTLAYOUT	= ( D3D11_MESSAGE_ID_LIVE_PIXELSHADER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_SAMPLER	= ( D3D11_MESSAGE_ID_LIVE_INPUTLAYOUT + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_BLENDSTATE	= ( D3D11_MESSAGE_ID_LIVE_SAMPLER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILSTATE	= ( D3D11_MESSAGE_ID_LIVE_BLENDSTATE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_RASTERIZERSTATE	= ( D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILSTATE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_QUERY	= ( D3D11_MESSAGE_ID_LIVE_RASTERIZERSTATE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_PREDICATE	= ( D3D11_MESSAGE_ID_LIVE_QUERY + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_COUNTER	= ( D3D11_MESSAGE_ID_LIVE_PREDICATE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_DEVICE	= ( D3D11_MESSAGE_ID_LIVE_COUNTER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_SWAPCHAIN	= ( D3D11_MESSAGE_ID_LIVE_DEVICE + 1 ) ,
        D3D11_MESSAGE_ID_D3D10_MESSAGES_END	= ( D3D11_MESSAGE_ID_LIVE_SWAPCHAIN + 1 ) ,
        D3D11_MESSAGE_ID_D3D10L9_MESSAGES_START	= 0x100000,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_STENCIL_NO_TWO_SIDED	= ( D3D11_MESSAGE_ID_D3D10L9_MESSAGES_START + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_DepthBiasClamp_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_STENCIL_NO_TWO_SIDED + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_NO_COMPARISON_SUPPORT	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_DepthBiasClamp_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_EXCESSIVE_ANISOTROPY	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_NO_COMPARISON_SUPPORT + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_BORDER_OUT_OF_RANGE	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_EXCESSIVE_ANISOTROPY + 1 ) ,
        D3D11_MESSAGE_ID_VSSETSAMPLERS_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_BORDER_OUT_OF_RANGE + 1 ) ,
        D3D11_MESSAGE_ID_VSSETSAMPLERS_TOO_MANY_SAMPLERS	= ( D3D11_MESSAGE_ID_VSSETSAMPLERS_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_PSSETSAMPLERS_TOO_MANY_SAMPLERS	= ( D3D11_MESSAGE_ID_VSSETSAMPLERS_TOO_MANY_SAMPLERS + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_NO_ARRAYS	= ( D3D11_MESSAGE_ID_PSSETSAMPLERS_TOO_MANY_SAMPLERS + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_NO_VB_AND_IB_BIND	= ( D3D11_MESSAGE_ID_CREATERESOURCE_NO_ARRAYS + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_NO_TEXTURE_1D	= ( D3D11_MESSAGE_ID_CREATERESOURCE_NO_VB_AND_IB_BIND + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_DIMENSION_OUT_OF_RANGE	= ( D3D11_MESSAGE_ID_CREATERESOURCE_NO_TEXTURE_1D + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_NOT_BINDABLE_AS_SHADER_RESOURCE	= ( D3D11_MESSAGE_ID_CREATERESOURCE_DIMENSION_OUT_OF_RANGE + 1 ) ,
        D3D11_MESSAGE_ID_OMSETRENDERTARGETS_TOO_MANY_RENDER_TARGETS	= ( D3D11_MESSAGE_ID_CREATERESOURCE_NOT_BINDABLE_AS_SHADER_RESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_OMSETRENDERTARGETS_NO_DIFFERING_BIT_DEPTHS	= ( D3D11_MESSAGE_ID_OMSETRENDERTARGETS_TOO_MANY_RENDER_TARGETS + 1 ) ,
        D3D11_MESSAGE_ID_IASETVERTEXBUFFERS_BAD_BUFFER_INDEX	= ( D3D11_MESSAGE_ID_OMSETRENDERTARGETS_NO_DIFFERING_BIT_DEPTHS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_TOO_MANY_VIEWPORTS	= ( D3D11_MESSAGE_ID_IASETVERTEXBUFFERS_BAD_BUFFER_INDEX + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_ADJACENCY_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_TOO_MANY_VIEWPORTS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_TOO_MANY_SCISSORS	= ( D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_ADJACENCY_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_COPYRESOURCE_ONLY_TEXTURE_2D_WITHIN_GPU_MEMORY	= ( D3D11_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_TOO_MANY_SCISSORS + 1 ) ,
        D3D11_MESSAGE_ID_COPYRESOURCE_NO_TEXTURE_3D_READBACK	= ( D3D11_MESSAGE_ID_COPYRESOURCE_ONLY_TEXTURE_2D_WITHIN_GPU_MEMORY + 1 ) ,
        D3D11_MESSAGE_ID_COPYRESOURCE_NO_TEXTURE_ONLY_READBACK	= ( D3D11_MESSAGE_ID_COPYRESOURCE_NO_TEXTURE_3D_READBACK + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_UNSUPPORTED_FORMAT	= ( D3D11_MESSAGE_ID_COPYRESOURCE_NO_TEXTURE_ONLY_READBACK + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_ALPHA_TO_COVERAGE	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_UNSUPPORTED_FORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_DepthClipEnable_MUST_BE_TRUE	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_ALPHA_TO_COVERAGE + 1 ) ,
        D3D11_MESSAGE_ID_DRAWINDEXED_STARTINDEXLOCATION_MUST_BE_POSITIVE	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_DepthClipEnable_MUST_BE_TRUE + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_MUST_USE_LOWEST_LOD	= ( D3D11_MESSAGE_ID_DRAWINDEXED_STARTINDEXLOCATION_MUST_BE_POSITIVE + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_MINLOD_MUST_NOT_BE_FRACTIONAL	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_MUST_USE_LOWEST_LOD + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_MAXLOD_MUST_BE_FLT_MAX	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_MINLOD_MUST_NOT_BE_FRACTIONAL + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_FIRSTARRAYSLICE_MUST_BE_ZERO	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_MAXLOD_MUST_BE_FLT_MAX + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_CUBES_MUST_HAVE_6_SIDES	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_FIRSTARRAYSLICE_MUST_BE_ZERO + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_NOT_BINDABLE_AS_RENDER_TARGET	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_CUBES_MUST_HAVE_6_SIDES + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_NO_DWORD_INDEX_BUFFER	= ( D3D11_MESSAGE_ID_CREATERESOURCE_NOT_BINDABLE_AS_RENDER_TARGET + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_MSAA_PRECLUDES_SHADER_RESOURCE	= ( D3D11_MESSAGE_ID_CREATERESOURCE_NO_DWORD_INDEX_BUFFER + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_PRESENTATION_PRECLUDES_SHADER_RESOURCE	= ( D3D11_MESSAGE_ID_CREATERESOURCE_MSAA_PRECLUDES_SHADER_RESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_INDEPENDENT_BLEND_ENABLE	= ( D3D11_MESSAGE_ID_CREATERESOURCE_PRESENTATION_PRECLUDES_SHADER_RESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_INDEPENDENT_WRITE_MASKS	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_INDEPENDENT_BLEND_ENABLE + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_NO_STREAM_OUT	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_INDEPENDENT_WRITE_MASKS + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_ONLY_VB_IB_FOR_BUFFERS	= ( D3D11_MESSAGE_ID_CREATERESOURCE_NO_STREAM_OUT + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_NO_AUTOGEN_FOR_VOLUMES	= ( D3D11_MESSAGE_ID_CREATERESOURCE_ONLY_VB_IB_FOR_BUFFERS + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_DXGI_FORMAT_R8G8B8A8_CANNOT_BE_SHARED	= ( D3D11_MESSAGE_ID_CREATERESOURCE_NO_AUTOGEN_FOR_VOLUMES + 1 ) ,
        D3D11_MESSAGE_ID_VSSHADERRESOURCES_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_CREATERESOURCE_DXGI_FORMAT_R8G8B8A8_CANNOT_BE_SHARED + 1 ) ,
        D3D11_MESSAGE_ID_GEOMETRY_SHADER_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_VSSHADERRESOURCES_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_STREAM_OUT_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_GEOMETRY_SHADER_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_TEXT_FILTER_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_STREAM_OUT_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_SEPARATE_ALPHA_BLEND	= ( D3D11_MESSAGE_ID_TEXT_FILTER_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_MRT_BLEND	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_SEPARATE_ALPHA_BLEND + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_OPERATION_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_MRT_BLEND + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_NO_MIRRORONCE	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_OPERATION_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DRAWINSTANCED_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_NO_MIRRORONCE + 1 ) ,
        D3D11_MESSAGE_ID_DRAWINDEXEDINSTANCED_NOT_SUPPORTED_BELOW_9_3	= ( D3D11_MESSAGE_ID_DRAWINSTANCED_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DRAWINDEXED_POINTLIST_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DRAWINDEXEDINSTANCED_NOT_SUPPORTED_BELOW_9_3 + 1 ) ,
        D3D11_MESSAGE_ID_SETBLENDSTATE_SAMPLE_MASK_CANNOT_BE_ZERO	= ( D3D11_MESSAGE_ID_DRAWINDEXED_POINTLIST_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_DIMENSION_EXCEEDS_FEATURE_LEVEL_DEFINITION	= ( D3D11_MESSAGE_ID_SETBLENDSTATE_SAMPLE_MASK_CANNOT_BE_ZERO + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_ONLY_SINGLE_MIP_LEVEL_DEPTH_STENCIL_SUPPORTED	= ( D3D11_MESSAGE_ID_CREATERESOURCE_DIMENSION_EXCEEDS_FEATURE_LEVEL_DEFINITION + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_NEGATIVESCISSOR	= ( D3D11_MESSAGE_ID_CREATERESOURCE_ONLY_SINGLE_MIP_LEVEL_DEPTH_STENCIL_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_SLOT_ZERO_MUST_BE_D3D10_INPUT_PER_VERTEX_DATA	= ( D3D11_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_NEGATIVESCISSOR + 1 ) ,
        D3D11_MESSAGE_ID_CREATERESOURCE_NON_POW_2_MIPMAP	= ( D3D11_MESSAGE_ID_SLOT_ZERO_MUST_BE_D3D10_INPUT_PER_VERTEX_DATA + 1 ) ,
        D3D11_MESSAGE_ID_CREATESAMPLERSTATE_BORDER_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_CREATERESOURCE_NON_POW_2_MIPMAP + 1 ) ,
        D3D11_MESSAGE_ID_OMSETRENDERTARGETS_NO_SRGB_MRT	= ( D3D11_MESSAGE_ID_CREATESAMPLERSTATE_BORDER_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_COPYRESOURCE_NO_3D_MISMATCHED_UPDATES	= ( D3D11_MESSAGE_ID_OMSETRENDERTARGETS_NO_SRGB_MRT + 1 ) ,
        D3D11_MESSAGE_ID_D3D10L9_MESSAGES_END	= ( D3D11_MESSAGE_ID_COPYRESOURCE_NO_3D_MISMATCHED_UPDATES + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_MESSAGES_START	= 0x200000,
        D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_D3D11_MESSAGES_START + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDCLASSLINKAGE	= ( D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDCLASSLINKAGE	= ( D3D11_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDCLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMSTREAMS	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDCLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTREAMTORASTERIZER	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMSTREAMS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDSTREAMS	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTREAMTORASTERIZER + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDCLASSLINKAGE	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDSTREAMS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEPIXELSHADER_INVALIDCLASSLINKAGE	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDCLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_INVALID_COMMANDLISTFLAGS	= ( D3D11_MESSAGE_ID_CREATEPIXELSHADER_INVALIDCLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_SINGLETHREADED	= ( D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_INVALID_COMMANDLISTFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_SINGLETHREADED + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_INVALID_CALL_RETURN	= ( D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_INVALID_CALL_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_FINISHDISPLAYLIST_ONIMMEDIATECONTEXT	= ( D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_FINISHDISPLAYLIST_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_FINISHDISPLAYLIST_ONIMMEDIATECONTEXT + 1 ) ,
        D3D11_MESSAGE_ID_FINISHDISPLAYLIST_INVALID_CALL_RETURN	= ( D3D11_MESSAGE_ID_FINISHDISPLAYLIST_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_FINISHDISPLAYLIST_INVALID_CALL_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDENTRIES	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDSTRIDES	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDENTRIES + 1 ) ,
        D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMSTRIDES	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDSTRIDES + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_HSSETSHADERRESOURCES_HAZARD	= ( D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMSTRIDES + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_HSSETCONSTANTBUFFERS_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_HSSETSHADERRESOURCES_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_HSSETSHADERRESOURCES_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_DEVICE_HSSETCONSTANTBUFFERS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_HSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_HSSETSHADERRESOURCES_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDCALL	= ( D3D11_MESSAGE_ID_HSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEHULLSHADER_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDCALL + 1 ) ,
        D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDSHADERBYTECODE	= ( D3D11_MESSAGE_ID_CREATEHULLSHADER_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDSHADERTYPE	= ( D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDSHADERBYTECODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDCLASSLINKAGE	= ( D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDSHADERTYPE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_HSSETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDCLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_HSSETCONSTANTBUFFERS_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_DEVICE_HSSETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_HSSETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_HSSETCONSTANTBUFFERS_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_HSSETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_HSSETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_HSGETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_HSSETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_HSGETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_HSGETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_HSGETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_HSGETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DSSETSHADERRESOURCES_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_HSGETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DSSETCONSTANTBUFFERS_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_DSSETSHADERRESOURCES_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DSSETSHADERRESOURCES_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_DEVICE_DSSETCONSTANTBUFFERS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_DSSETSHADERRESOURCES_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDCALL	= ( D3D11_MESSAGE_ID_DSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDOMAINSHADER_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDCALL + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDSHADERBYTECODE	= ( D3D11_MESSAGE_ID_CREATEDOMAINSHADER_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDSHADERTYPE	= ( D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDSHADERBYTECODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDCLASSLINKAGE	= ( D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDSHADERTYPE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DSSETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDCLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_DSSETCONSTANTBUFFERS_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_DEVICE_DSSETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DSSETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_DSSETCONSTANTBUFFERS_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DSSETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_DSSETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DSGETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_DSSETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DSGETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_DSGETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DSGETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_DSGETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_HS_XOR_DS_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DSGETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEFERRED_CONTEXT_REMOVAL_PROCESS_AT_FAULT	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_HS_XOR_DS_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAWINDIRECT_INVALID_ARG_BUFFER	= ( D3D11_MESSAGE_ID_DEFERRED_CONTEXT_REMOVAL_PROCESS_AT_FAULT + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAWINDIRECT_OFFSET_UNALIGNED	= ( D3D11_MESSAGE_ID_DEVICE_DRAWINDIRECT_INVALID_ARG_BUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAWINDIRECT_OFFSET_OVERFLOW	= ( D3D11_MESSAGE_ID_DEVICE_DRAWINDIRECT_OFFSET_UNALIGNED + 1 ) ,
        D3D11_MESSAGE_ID_RESOURCE_MAP_INVALIDMAPTYPE	= ( D3D11_MESSAGE_ID_DEVICE_DRAWINDIRECT_OFFSET_OVERFLOW + 1 ) ,
        D3D11_MESSAGE_ID_RESOURCE_MAP_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_RESOURCE_MAP_INVALIDMAPTYPE + 1 ) ,
        D3D11_MESSAGE_ID_RESOURCE_MAP_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_RESOURCE_MAP_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_RESOURCE_MAP_ALREADYMAPPED	= ( D3D11_MESSAGE_ID_RESOURCE_MAP_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_RESOURCE_MAP_DEVICEREMOVED_RETURN	= ( D3D11_MESSAGE_ID_RESOURCE_MAP_ALREADYMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_RESOURCE_MAP_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_RESOURCE_MAP_DEVICEREMOVED_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_RESOURCE_MAP_WITHOUT_INITIAL_DISCARD	= ( D3D11_MESSAGE_ID_RESOURCE_MAP_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_RESOURCE_UNMAP_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_RESOURCE_MAP_WITHOUT_INITIAL_DISCARD + 1 ) ,
        D3D11_MESSAGE_ID_RESOURCE_UNMAP_NOTMAPPED	= ( D3D11_MESSAGE_ID_RESOURCE_UNMAP_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RASTERIZING_CONTROL_POINTS	= ( D3D11_MESSAGE_ID_RESOURCE_UNMAP_NOTMAPPED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RASTERIZING_CONTROL_POINTS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_HS_DS_SIGNATURE_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_HULL_SHADER_INPUT_TOPOLOGY_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_HS_DS_SIGNATURE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_HS_DS_CONTROL_POINT_COUNT_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_HULL_SHADER_INPUT_TOPOLOGY_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_HS_DS_TESSELLATOR_DOMAIN_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_HS_DS_CONTROL_POINT_COUNT_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_CONTEXT	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_HS_DS_TESSELLATOR_DOMAIN_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_CONTEXT	= ( D3D11_MESSAGE_ID_CREATE_CONTEXT + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_CONTEXT	= ( D3D11_MESSAGE_ID_LIVE_CONTEXT + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_BUFFER	= ( D3D11_MESSAGE_ID_DESTROY_CONTEXT + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_BUFFER_WIN7	= ( D3D11_MESSAGE_ID_CREATE_BUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_BUFFER	= ( D3D11_MESSAGE_ID_LIVE_BUFFER_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_TEXTURE1D	= ( D3D11_MESSAGE_ID_DESTROY_BUFFER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_TEXTURE1D_WIN7	= ( D3D11_MESSAGE_ID_CREATE_TEXTURE1D + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_TEXTURE1D	= ( D3D11_MESSAGE_ID_LIVE_TEXTURE1D_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_TEXTURE2D	= ( D3D11_MESSAGE_ID_DESTROY_TEXTURE1D + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_TEXTURE2D_WIN7	= ( D3D11_MESSAGE_ID_CREATE_TEXTURE2D + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_TEXTURE2D	= ( D3D11_MESSAGE_ID_LIVE_TEXTURE2D_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_TEXTURE3D	= ( D3D11_MESSAGE_ID_DESTROY_TEXTURE2D + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_TEXTURE3D_WIN7	= ( D3D11_MESSAGE_ID_CREATE_TEXTURE3D + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_TEXTURE3D	= ( D3D11_MESSAGE_ID_LIVE_TEXTURE3D_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_SHADERRESOURCEVIEW	= ( D3D11_MESSAGE_ID_DESTROY_TEXTURE3D + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_SHADERRESOURCEVIEW_WIN7	= ( D3D11_MESSAGE_ID_CREATE_SHADERRESOURCEVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_SHADERRESOURCEVIEW	= ( D3D11_MESSAGE_ID_LIVE_SHADERRESOURCEVIEW_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_RENDERTARGETVIEW	= ( D3D11_MESSAGE_ID_DESTROY_SHADERRESOURCEVIEW + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_RENDERTARGETVIEW_WIN7	= ( D3D11_MESSAGE_ID_CREATE_RENDERTARGETVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_RENDERTARGETVIEW	= ( D3D11_MESSAGE_ID_LIVE_RENDERTARGETVIEW_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_DEPTHSTENCILVIEW	= ( D3D11_MESSAGE_ID_DESTROY_RENDERTARGETVIEW + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILVIEW_WIN7	= ( D3D11_MESSAGE_ID_CREATE_DEPTHSTENCILVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_DEPTHSTENCILVIEW	= ( D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILVIEW_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_VERTEXSHADER	= ( D3D11_MESSAGE_ID_DESTROY_DEPTHSTENCILVIEW + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_VERTEXSHADER_WIN7	= ( D3D11_MESSAGE_ID_CREATE_VERTEXSHADER + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_VERTEXSHADER	= ( D3D11_MESSAGE_ID_LIVE_VERTEXSHADER_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_HULLSHADER	= ( D3D11_MESSAGE_ID_DESTROY_VERTEXSHADER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_HULLSHADER	= ( D3D11_MESSAGE_ID_CREATE_HULLSHADER + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_HULLSHADER	= ( D3D11_MESSAGE_ID_LIVE_HULLSHADER + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_DOMAINSHADER	= ( D3D11_MESSAGE_ID_DESTROY_HULLSHADER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_DOMAINSHADER	= ( D3D11_MESSAGE_ID_CREATE_DOMAINSHADER + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_DOMAINSHADER	= ( D3D11_MESSAGE_ID_LIVE_DOMAINSHADER + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_GEOMETRYSHADER	= ( D3D11_MESSAGE_ID_DESTROY_DOMAINSHADER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_GEOMETRYSHADER_WIN7	= ( D3D11_MESSAGE_ID_CREATE_GEOMETRYSHADER + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_GEOMETRYSHADER	= ( D3D11_MESSAGE_ID_LIVE_GEOMETRYSHADER_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_PIXELSHADER	= ( D3D11_MESSAGE_ID_DESTROY_GEOMETRYSHADER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_PIXELSHADER_WIN7	= ( D3D11_MESSAGE_ID_CREATE_PIXELSHADER + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_PIXELSHADER	= ( D3D11_MESSAGE_ID_LIVE_PIXELSHADER_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_INPUTLAYOUT	= ( D3D11_MESSAGE_ID_DESTROY_PIXELSHADER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_INPUTLAYOUT_WIN7	= ( D3D11_MESSAGE_ID_CREATE_INPUTLAYOUT + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_INPUTLAYOUT	= ( D3D11_MESSAGE_ID_LIVE_INPUTLAYOUT_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_SAMPLER	= ( D3D11_MESSAGE_ID_DESTROY_INPUTLAYOUT + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_SAMPLER_WIN7	= ( D3D11_MESSAGE_ID_CREATE_SAMPLER + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_SAMPLER	= ( D3D11_MESSAGE_ID_LIVE_SAMPLER_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_BLENDSTATE	= ( D3D11_MESSAGE_ID_DESTROY_SAMPLER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_BLENDSTATE_WIN7	= ( D3D11_MESSAGE_ID_CREATE_BLENDSTATE + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_BLENDSTATE	= ( D3D11_MESSAGE_ID_LIVE_BLENDSTATE_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_DEPTHSTENCILSTATE	= ( D3D11_MESSAGE_ID_DESTROY_BLENDSTATE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILSTATE_WIN7	= ( D3D11_MESSAGE_ID_CREATE_DEPTHSTENCILSTATE + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_DEPTHSTENCILSTATE	= ( D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILSTATE_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_RASTERIZERSTATE	= ( D3D11_MESSAGE_ID_DESTROY_DEPTHSTENCILSTATE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_RASTERIZERSTATE_WIN7	= ( D3D11_MESSAGE_ID_CREATE_RASTERIZERSTATE + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_RASTERIZERSTATE	= ( D3D11_MESSAGE_ID_LIVE_RASTERIZERSTATE_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_QUERY	= ( D3D11_MESSAGE_ID_DESTROY_RASTERIZERSTATE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_QUERY_WIN7	= ( D3D11_MESSAGE_ID_CREATE_QUERY + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_QUERY	= ( D3D11_MESSAGE_ID_LIVE_QUERY_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_PREDICATE	= ( D3D11_MESSAGE_ID_DESTROY_QUERY + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_PREDICATE_WIN7	= ( D3D11_MESSAGE_ID_CREATE_PREDICATE + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_PREDICATE	= ( D3D11_MESSAGE_ID_LIVE_PREDICATE_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_COUNTER	= ( D3D11_MESSAGE_ID_DESTROY_PREDICATE + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_COUNTER	= ( D3D11_MESSAGE_ID_CREATE_COUNTER + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_COMMANDLIST	= ( D3D11_MESSAGE_ID_DESTROY_COUNTER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_COMMANDLIST	= ( D3D11_MESSAGE_ID_CREATE_COMMANDLIST + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_COMMANDLIST	= ( D3D11_MESSAGE_ID_LIVE_COMMANDLIST + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_CLASSINSTANCE	= ( D3D11_MESSAGE_ID_DESTROY_COMMANDLIST + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_CLASSINSTANCE	= ( D3D11_MESSAGE_ID_CREATE_CLASSINSTANCE + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_CLASSINSTANCE	= ( D3D11_MESSAGE_ID_LIVE_CLASSINSTANCE + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_CLASSLINKAGE	= ( D3D11_MESSAGE_ID_DESTROY_CLASSINSTANCE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_CLASSLINKAGE	= ( D3D11_MESSAGE_ID_CREATE_CLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_CLASSLINKAGE	= ( D3D11_MESSAGE_ID_LIVE_CLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_DEVICE_WIN7	= ( D3D11_MESSAGE_ID_DESTROY_CLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_OBJECT_SUMMARY_WIN7	= ( D3D11_MESSAGE_ID_LIVE_DEVICE_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_COMPUTESHADER	= ( D3D11_MESSAGE_ID_LIVE_OBJECT_SUMMARY_WIN7 + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_COMPUTESHADER	= ( D3D11_MESSAGE_ID_CREATE_COMPUTESHADER + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_COMPUTESHADER	= ( D3D11_MESSAGE_ID_LIVE_COMPUTESHADER + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_UNORDEREDACCESSVIEW	= ( D3D11_MESSAGE_ID_DESTROY_COMPUTESHADER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_UNORDEREDACCESSVIEW	= ( D3D11_MESSAGE_ID_CREATE_UNORDEREDACCESSVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_UNORDEREDACCESSVIEW	= ( D3D11_MESSAGE_ID_LIVE_UNORDEREDACCESSVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETSHADER_INTERFACES_FEATURELEVEL	= ( D3D11_MESSAGE_ID_DESTROY_UNORDEREDACCESSVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETSHADER_INTERFACE_COUNT_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_SETSHADER_INTERFACES_FEATURELEVEL + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE	= ( D3D11_MESSAGE_ID_DEVICE_SETSHADER_INTERFACE_COUNT_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE_INDEX	= ( D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE_TYPE	= ( D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE_INDEX + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE_DATA	= ( D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE_TYPE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETSHADER_UNBOUND_INSTANCE_DATA	= ( D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE_DATA + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETSHADER_INSTANCE_DATA_BINDINGS	= ( D3D11_MESSAGE_ID_DEVICE_SETSHADER_UNBOUND_INSTANCE_DATA + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATESHADER_CLASSLINKAGE_FULL	= ( D3D11_MESSAGE_ID_DEVICE_SETSHADER_INSTANCE_DATA_BINDINGS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CHECKFEATURESUPPORT_UNRECOGNIZED_FEATURE	= ( D3D11_MESSAGE_ID_DEVICE_CREATESHADER_CLASSLINKAGE_FULL + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CHECKFEATURESUPPORT_MISMATCHED_DATA_SIZE	= ( D3D11_MESSAGE_ID_DEVICE_CHECKFEATURESUPPORT_UNRECOGNIZED_FEATURE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CHECKFEATURESUPPORT_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_DEVICE_CHECKFEATURESUPPORT_MISMATCHED_DATA_SIZE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETSHADERRESOURCES_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_CHECKFEATURESUPPORT_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETCONSTANTBUFFERS_HAZARD	= ( D3D11_MESSAGE_ID_DEVICE_CSSETSHADERRESOURCES_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_CSSETSHADERRESOURCES_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_DEVICE_CSSETCONSTANTBUFFERS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_CSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_CSSETSHADERRESOURCES_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDCALL	= ( D3D11_MESSAGE_ID_CSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOMPUTESHADER_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDCALL + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDSHADERBYTECODE	= ( D3D11_MESSAGE_ID_CREATECOMPUTESHADER_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDSHADERTYPE	= ( D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDSHADERBYTECODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDCLASSLINKAGE	= ( D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDSHADERTYPE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDCLASSLINKAGE + 1 ) ,
        D3D11_MESSAGE_ID_CSSETCONSTANTBUFFERS_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_DEVICE_CSSETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_CSSETCONSTANTBUFFERS_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_CSSETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSGETSHADERRESOURCES_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_CSSETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSGETCONSTANTBUFFERS_BUFFERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_CSGETSHADERRESOURCES_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSGETSAMPLERS_SAMPLERS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_CSGETCONSTANTBUFFERS_BUFFERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_DOUBLEFLOATOPSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CSGETSAMPLERS_SAMPLERS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_DOUBLEFLOATOPSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_DOUBLEFLOATOPSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_DOUBLEFLOATOPSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_DOUBLEFLOATOPSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_DOUBLEFLOATOPSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_DOUBLEFLOATOPSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DOUBLEFLOATOPSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_DOUBLEFLOATOPSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_DOUBLEFLOATOPSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DOUBLEFLOATOPSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_DOUBLEFLOATOPSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_DOUBLEFLOATOPSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDSTRUCTURESTRIDE	= ( D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_DOUBLEFLOATOPSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDSTRUCTURESTRIDE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDRESOURCE	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDDESC	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDDESC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDDIMENSIONS	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_UNRECOGNIZEDFORMAT	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDDIMENSIONS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_HAZARD	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_UNRECOGNIZEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_OVERLAPPING_OLD_SLOTS	= ( D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_NO_OP	= ( D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_OVERLAPPING_OLD_SLOTS + 1 ) ,
        D3D11_MESSAGE_ID_CSSETUNORDEREDACCESSVIEWS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_NO_OP + 1 ) ,
        D3D11_MESSAGE_ID_PSSETUNORDEREDACCESSVIEWS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_CSSETUNORDEREDACCESSVIEWS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_PSSETUNORDEREDACCESSVIEWS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_TOOMANYOBJECTS	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_HAZARD	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_TOOMANYOBJECTS + 1 ) ,
        D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEW_DENORMFLUSH	= ( D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSS_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEW_DENORMFLUSH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSGETUNORDEREDACCESSS_VIEWS_EMPTY	= ( D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSS_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_DEVICE_CSGETUNORDEREDACCESSS_VIEWS_EMPTY + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESESOURCEVIEW_TOOMANYOBJECTS	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_INVALID_ARG_BUFFER	= ( D3D11_MESSAGE_ID_CREATESHADERRESESOURCEVIEW_TOOMANYOBJECTS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_OFFSET_UNALIGNED	= ( D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_INVALID_ARG_BUFFER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_OFFSET_OVERFLOW	= ( D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_OFFSET_UNALIGNED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETRESOURCEMINLOD_INVALIDCONTEXT	= ( D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_OFFSET_OVERFLOW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETRESOURCEMINLOD_INVALIDRESOURCE	= ( D3D11_MESSAGE_ID_DEVICE_SETRESOURCEMINLOD_INVALIDCONTEXT + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETRESOURCEMINLOD_INVALIDMINLOD	= ( D3D11_MESSAGE_ID_DEVICE_SETRESOURCEMINLOD_INVALIDRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GETRESOURCEMINLOD_INVALIDCONTEXT	= ( D3D11_MESSAGE_ID_DEVICE_SETRESOURCEMINLOD_INVALIDMINLOD + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_GETRESOURCEMINLOD_INVALIDRESOURCE	= ( D3D11_MESSAGE_ID_DEVICE_GETRESOURCEMINLOD_INVALIDCONTEXT + 1 ) ,
        D3D11_MESSAGE_ID_OMSETDEPTHSTENCIL_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_DEVICE_GETRESOURCEMINLOD_INVALIDRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_DEPTH_READONLY	= ( D3D11_MESSAGE_ID_OMSETDEPTHSTENCIL_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_STENCIL_READONLY	= ( D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_DEPTH_READONLY + 1 ) ,
        D3D11_MESSAGE_ID_CHECKFEATURESUPPORT_FORMAT_DEPRECATED	= ( D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_STENCIL_READONLY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_RETURN_TYPE_MISMATCH	= ( D3D11_MESSAGE_ID_CHECKFEATURESUPPORT_FORMAT_DEPRECATED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_RETURN_TYPE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_UNORDEREDACCESSVIEW_RENDERTARGETVIEW_OVERLAP	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_DIMENSION_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_UNORDEREDACCESSVIEW_RENDERTARGETVIEW_OVERLAP + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_APPEND_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_DIMENSION_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMICS_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_APPEND_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_STRUCTURE_STRIDE_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMICS_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_BUFFER_TYPE_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_STRUCTURE_STRIDE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_RAW_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_BUFFER_TYPE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_FORMAT_LD_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_RAW_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_FORMAT_STORE_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_FORMAT_LD_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_ADD_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_FORMAT_STORE_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_BITWISE_OPS_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_ADD_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_CMPSTORE_CMPEXCHANGE_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_BITWISE_OPS_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_EXCHANGE_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_CMPSTORE_CMPEXCHANGE_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_SIGNED_MINMAX_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_EXCHANGE_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_UNSIGNED_MINMAX_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_SIGNED_MINMAX_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DISPATCH_BOUND_RESOURCE_MAPPED	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_UNSIGNED_MINMAX_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DISPATCH_THREADGROUPCOUNT_OVERFLOW	= ( D3D11_MESSAGE_ID_DEVICE_DISPATCH_BOUND_RESOURCE_MAPPED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DISPATCH_THREADGROUPCOUNT_ZERO	= ( D3D11_MESSAGE_ID_DEVICE_DISPATCH_THREADGROUPCOUNT_OVERFLOW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADERRESOURCEVIEW_STRUCTURE_STRIDE_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_DISPATCH_THREADGROUPCOUNT_ZERO + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADERRESOURCEVIEW_BUFFER_TYPE_MISMATCH	= ( D3D11_MESSAGE_ID_DEVICE_SHADERRESOURCEVIEW_STRUCTURE_STRIDE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADERRESOURCEVIEW_RAW_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_SHADERRESOURCEVIEW_BUFFER_TYPE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DISPATCH_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_SHADERRESOURCEVIEW_RAW_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_DISPATCH_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_INVALIDOFFSET	= ( D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_LARGEOFFSET	= ( D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_INVALIDOFFSET + 1 ) ,
        D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_INVALIDDESTINATIONSTATE	= ( D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_LARGEOFFSET + 1 ) ,
        D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_INVALIDSOURCESTATE	= ( D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_INVALIDDESTINATIONSTATE + 1 ) ,
        D3D11_MESSAGE_ID_CHECKFORMATSUPPORT_FORMAT_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_INVALIDSOURCESTATE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_INVALIDVIEW	= ( D3D11_MESSAGE_ID_CHECKFORMATSUPPORT_FORMAT_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_INVALIDOFFSET	= ( D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_INVALIDVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_TOOMANYVIEWS	= ( D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_INVALIDOFFSET + 1 ) ,
        D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEWFLOAT_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_TOOMANYVIEWS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_COUNTER_UNSUPPORTED	= ( D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEWFLOAT_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_REF_WARNING	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_COUNTER_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_PIXEL_SHADER_WITHOUT_RTV_OR_DSV	= ( D3D11_MESSAGE_ID_REF_WARNING + 1 ) ,
        D3D11_MESSAGE_ID_SHADER_ABORT	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_PIXEL_SHADER_WITHOUT_RTV_OR_DSV + 1 ) ,
        D3D11_MESSAGE_ID_SHADER_MESSAGE	= ( D3D11_MESSAGE_ID_SHADER_ABORT + 1 ) ,
        D3D11_MESSAGE_ID_SHADER_ERROR	= ( D3D11_MESSAGE_ID_SHADER_MESSAGE + 1 ) ,
        D3D11_MESSAGE_ID_OFFERRESOURCES_INVALIDRESOURCE	= ( D3D11_MESSAGE_ID_SHADER_ERROR + 1 ) ,
        D3D11_MESSAGE_ID_HSSETSAMPLERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_OFFERRESOURCES_INVALIDRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_DSSETSAMPLERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_HSSETSAMPLERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CSSETSAMPLERS_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_DSSETSAMPLERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_HSSETSHADER_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_CSSETSAMPLERS_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_DSSETSHADER_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_HSSETSHADER_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_CSSETSHADER_UNBINDDELETINGOBJECT	= ( D3D11_MESSAGE_ID_DSSETSHADER_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_ENQUEUESETEVENT_INVALIDARG_RETURN	= ( D3D11_MESSAGE_ID_CSSETSHADER_UNBINDDELETINGOBJECT + 1 ) ,
        D3D11_MESSAGE_ID_ENQUEUESETEVENT_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_ENQUEUESETEVENT_INVALIDARG_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_ENQUEUESETEVENT_ACCESSDENIED_RETURN	= ( D3D11_MESSAGE_ID_ENQUEUESETEVENT_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_NUMUAVS_INVALIDRANGE	= ( D3D11_MESSAGE_ID_ENQUEUESETEVENT_ACCESSDENIED_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_USE_OF_ZERO_REFCOUNT_OBJECT	= ( D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_NUMUAVS_INVALIDRANGE + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_MESSAGES_END	= ( D3D11_MESSAGE_ID_USE_OF_ZERO_REFCOUNT_OBJECT + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_1_MESSAGES_START	= 0x300000,
        D3D11_MESSAGE_ID_CREATE_VIDEODECODER	= ( D3D11_MESSAGE_ID_D3D11_1_MESSAGES_START + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_VIDEOPROCESSORENUM	= ( D3D11_MESSAGE_ID_CREATE_VIDEODECODER + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_VIDEOPROCESSOR	= ( D3D11_MESSAGE_ID_CREATE_VIDEOPROCESSORENUM + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_DECODEROUTPUTVIEW	= ( D3D11_MESSAGE_ID_CREATE_VIDEOPROCESSOR + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_PROCESSORINPUTVIEW	= ( D3D11_MESSAGE_ID_CREATE_DECODEROUTPUTVIEW + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_PROCESSOROUTPUTVIEW	= ( D3D11_MESSAGE_ID_CREATE_PROCESSORINPUTVIEW + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_DEVICECONTEXTSTATE	= ( D3D11_MESSAGE_ID_CREATE_PROCESSOROUTPUTVIEW + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_VIDEODECODER	= ( D3D11_MESSAGE_ID_CREATE_DEVICECONTEXTSTATE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_VIDEOPROCESSORENUM	= ( D3D11_MESSAGE_ID_LIVE_VIDEODECODER + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_VIDEOPROCESSOR	= ( D3D11_MESSAGE_ID_LIVE_VIDEOPROCESSORENUM + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_DECODEROUTPUTVIEW	= ( D3D11_MESSAGE_ID_LIVE_VIDEOPROCESSOR + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_PROCESSORINPUTVIEW	= ( D3D11_MESSAGE_ID_LIVE_DECODEROUTPUTVIEW + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_PROCESSOROUTPUTVIEW	= ( D3D11_MESSAGE_ID_LIVE_PROCESSORINPUTVIEW + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_DEVICECONTEXTSTATE	= ( D3D11_MESSAGE_ID_LIVE_PROCESSOROUTPUTVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_VIDEODECODER	= ( D3D11_MESSAGE_ID_LIVE_DEVICECONTEXTSTATE + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_VIDEOPROCESSORENUM	= ( D3D11_MESSAGE_ID_DESTROY_VIDEODECODER + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_VIDEOPROCESSOR	= ( D3D11_MESSAGE_ID_DESTROY_VIDEOPROCESSORENUM + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_DECODEROUTPUTVIEW	= ( D3D11_MESSAGE_ID_DESTROY_VIDEOPROCESSOR + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_PROCESSORINPUTVIEW	= ( D3D11_MESSAGE_ID_DESTROY_DECODEROUTPUTVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_PROCESSOROUTPUTVIEW	= ( D3D11_MESSAGE_ID_DESTROY_PROCESSORINPUTVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_DEVICECONTEXTSTATE	= ( D3D11_MESSAGE_ID_DESTROY_PROCESSOROUTPUTVIEW + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_DESTROY_DEVICECONTEXTSTATE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_INVALIDFEATURELEVEL	= ( D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_FEATURELEVELS_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_INVALIDFEATURELEVEL + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_INVALIDREFIID	= ( D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_FEATURELEVELS_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DISCARDVIEW_INVALIDVIEW	= ( D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_INVALIDREFIID + 1 ) ,
        D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION1_INVALIDCOPYFLAGS	= ( D3D11_MESSAGE_ID_DEVICE_DISCARDVIEW_INVALIDVIEW + 1 ) ,
        D3D11_MESSAGE_ID_UPDATESUBRESOURCE1_INVALIDCOPYFLAGS	= ( D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION1_INVALIDCOPYFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDFORCEDSAMPLECOUNT	= ( D3D11_MESSAGE_ID_UPDATESUBRESOURCE1_INVALIDCOPYFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODER_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDFORCEDSAMPLECOUNT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODER_NULLPARAM	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODER_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODER_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODER_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODER_ZEROWIDTHHEIGHT	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODER_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODER_DRIVER_INVALIDBUFFERSIZE	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODER_ZEROWIDTHHEIGHT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODER_DRIVER_INVALIDBUFFERUSAGE	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODER_DRIVER_INVALIDBUFFERSIZE + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERPROFILECOUNT_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODER_DRIVER_INVALIDBUFFERUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERPROFILE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETVIDEODECODERPROFILECOUNT_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERPROFILE_INVALIDINDEX	= ( D3D11_MESSAGE_ID_GETVIDEODECODERPROFILE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERPROFILE_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_GETVIDEODECODERPROFILE_INVALIDINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CHECKVIDEODECODERFORMAT_NULLPARAM	= ( D3D11_MESSAGE_ID_GETVIDEODECODERPROFILE_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CHECKVIDEODECODERFORMAT_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CHECKVIDEODECODERFORMAT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERCONFIGCOUNT_NULLPARAM	= ( D3D11_MESSAGE_ID_CHECKVIDEODECODERFORMAT_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERCONFIGCOUNT_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_GETVIDEODECODERCONFIGCOUNT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERCONFIG_NULLPARAM	= ( D3D11_MESSAGE_ID_GETVIDEODECODERCONFIGCOUNT_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERCONFIG_INVALIDINDEX	= ( D3D11_MESSAGE_ID_GETVIDEODECODERCONFIG_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERCONFIG_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_GETVIDEODECODERCONFIG_INVALIDINDEX + 1 ) ,
        D3D11_MESSAGE_ID_GETDECODERCREATIONPARAMS_NULLPARAM	= ( D3D11_MESSAGE_ID_GETVIDEODECODERCONFIG_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_GETDECODERDRIVERHANDLE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETDECODERCREATIONPARAMS_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETDECODERBUFFER_NULLPARAM	= ( D3D11_MESSAGE_ID_GETDECODERDRIVERHANDLE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETDECODERBUFFER_INVALIDBUFFER	= ( D3D11_MESSAGE_ID_GETDECODERBUFFER_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETDECODERBUFFER_INVALIDTYPE	= ( D3D11_MESSAGE_ID_GETDECODERBUFFER_INVALIDBUFFER + 1 ) ,
        D3D11_MESSAGE_ID_GETDECODERBUFFER_LOCKED	= ( D3D11_MESSAGE_ID_GETDECODERBUFFER_INVALIDTYPE + 1 ) ,
        D3D11_MESSAGE_ID_RELEASEDECODERBUFFER_NULLPARAM	= ( D3D11_MESSAGE_ID_GETDECODERBUFFER_LOCKED + 1 ) ,
        D3D11_MESSAGE_ID_RELEASEDECODERBUFFER_INVALIDTYPE	= ( D3D11_MESSAGE_ID_RELEASEDECODERBUFFER_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_RELEASEDECODERBUFFER_NOTLOCKED	= ( D3D11_MESSAGE_ID_RELEASEDECODERBUFFER_INVALIDTYPE + 1 ) ,
        D3D11_MESSAGE_ID_DECODERBEGINFRAME_NULLPARAM	= ( D3D11_MESSAGE_ID_RELEASEDECODERBUFFER_NOTLOCKED + 1 ) ,
        D3D11_MESSAGE_ID_DECODERBEGINFRAME_HAZARD	= ( D3D11_MESSAGE_ID_DECODERBEGINFRAME_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_DECODERENDFRAME_NULLPARAM	= ( D3D11_MESSAGE_ID_DECODERBEGINFRAME_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_SUBMITDECODERBUFFERS_NULLPARAM	= ( D3D11_MESSAGE_ID_DECODERENDFRAME_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_SUBMITDECODERBUFFERS_INVALIDTYPE	= ( D3D11_MESSAGE_ID_SUBMITDECODERBUFFERS_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_DECODEREXTENSION_NULLPARAM	= ( D3D11_MESSAGE_ID_SUBMITDECODERBUFFERS_INVALIDTYPE + 1 ) ,
        D3D11_MESSAGE_ID_DECODEREXTENSION_INVALIDRESOURCE	= ( D3D11_MESSAGE_ID_DECODEREXTENSION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_DECODEREXTENSION_INVALIDRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_NULLPARAM	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDFRAMEFORMAT	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDUSAGE	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDFRAMEFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDINPUTFRAMERATE	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDOUTPUTFRAMERATE	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDINPUTFRAMERATE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDWIDTHHEIGHT	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDOUTPUTFRAMERATE + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEOPROCESSORCONTENTDESC_NULLPARAM	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDWIDTHHEIGHT + 1 ) ,
        D3D11_MESSAGE_ID_CHECKVIDEOPROCESSORFORMAT_NULLPARAM	= ( D3D11_MESSAGE_ID_GETVIDEOPROCESSORCONTENTDESC_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEOPROCESSORCAPS_NULLPARAM	= ( D3D11_MESSAGE_ID_CHECKVIDEOPROCESSORFORMAT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEOPROCESSORRATECONVERSIONCAPS_NULLPARAM	= ( D3D11_MESSAGE_ID_GETVIDEOPROCESSORCAPS_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEOPROCESSORRATECONVERSIONCAPS_INVALIDINDEX	= ( D3D11_MESSAGE_ID_GETVIDEOPROCESSORRATECONVERSIONCAPS_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEOPROCESSORCUSTOMRATE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETVIDEOPROCESSORRATECONVERSIONCAPS_INVALIDINDEX + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEOPROCESSORCUSTOMRATE_INVALIDINDEX	= ( D3D11_MESSAGE_ID_GETVIDEOPROCESSORCUSTOMRATE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEOPROCESSORFILTERRANGE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETVIDEOPROCESSORCUSTOMRATE_INVALIDINDEX + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEOPROCESSORFILTERRANGE_UNSUPPORTED	= ( D3D11_MESSAGE_ID_GETVIDEOPROCESSORFILTERRANGE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOR_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_GETVIDEOPROCESSORFILTERRANGE_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOR_NULLPARAM	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOR_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTTARGETRECT_NULLPARAM	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOR_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTTARGETRECT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR_INVALIDALPHA	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCOLORSPACE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR_INVALIDALPHA + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCOLORSPACE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_INVALIDFILLMODE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCONSTRICTION_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_INVALIDFILLMODE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTSTEREOMODE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCONSTRICTION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTSTEREOMODE_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTSTEREOMODE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTEXTENSION_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTSTEREOMODE_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTTARGETRECT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTEXTENSION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTBACKGROUNDCOLOR_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTTARGETRECT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTCOLORSPACE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTBACKGROUNDCOLOR_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTALPHAFILLMODE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTCOLORSPACE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTCONSTRICTION_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTALPHAFILLMODE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCONSTRICTION_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTCONSTRICTION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCONSTRICTION_INVALIDSIZE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCONSTRICTION_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTSTEREOMODE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCONSTRICTION_INVALIDSIZE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTEXTENSION_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTSTEREOMODE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFRAMEFORMAT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTEXTENSION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFRAMEFORMAT_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFRAMEFORMAT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFRAMEFORMAT_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFRAMEFORMAT_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFRAMEFORMAT_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_INVALIDRATE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_INVALIDFLAG	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_INVALIDRATE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_INVALIDFLAG + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSOURCERECT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSOURCERECT_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSOURCERECT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSOURCERECT_INVALIDRECT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSOURCERECT_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMDESTRECT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSOURCERECT_INVALIDRECT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMDESTRECT_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMDESTRECT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMDESTRECT_INVALIDRECT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMDESTRECT_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMDESTRECT_INVALIDRECT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_INVALIDALPHA	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_INVALIDALPHA + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_INVALIDCOUNT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_INVALIDALPHA	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_INVALIDCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_INVALIDALPHA + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_INVALIDRATIO	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_INVALIDRATIO + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_INVALIDRANGE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_INVALIDRANGE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_FLIPUNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_MONOOFFSETUNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_FLIPUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_FORMATUNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_MONOOFFSETUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_FORMATUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_INVALIDFILTER	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_INVALIDFILTER + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_INVALIDLEVEL	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMEXTENSION_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_INVALIDLEVEL + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMEXTENSION_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMEXTENSION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFRAMEFORMAT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMEXTENSION_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFRAMEFORMAT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMOUTPUTRATE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSOURCERECT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMOUTPUTRATE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMDESTRECT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSOURCERECT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMALPHA_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMDESTRECT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPALETTE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMALPHA_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPIXELASPECTRATIO_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPALETTE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMLUMAKEY_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPIXELASPECTRATIO_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSTEREOFORMAT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMLUMAKEY_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMAUTOPROCESSINGMODE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSTEREOFORMAT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFILTER_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMAUTOPROCESSINGMODE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMEXTENSION_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFILTER_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMEXTENSION_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMEXTENSION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMEXTENSION_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDSTREAMCOUNT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_TARGETRECT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDSTREAMCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDOUTPUT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_TARGETRECT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDPASTFRAMES	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDOUTPUT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDFUTUREFRAMES	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDPASTFRAMES + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDSOURCERECT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDFUTUREFRAMES + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDDESTRECT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDSOURCERECT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDINPUTRESOURCE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDDESTRECT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDARRAYSIZE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDINPUTRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDARRAY	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDARRAYSIZE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_RIGHTEXPECTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDARRAY + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_RIGHTNOTEXPECTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_RIGHTEXPECTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_STEREONOTENABLED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_RIGHTNOTEXPECTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDRIGHTRESOURCE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_STEREONOTENABLED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_NOSTEREOSTREAMS	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDRIGHTRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INPUTHAZARD	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_NOSTEREOSTREAMS + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_OUTPUTHAZARD	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INPUTHAZARD + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_OUTPUTHAZARD + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_NULLPARAM	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDTYPE	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDBIND	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDTYPE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_UNSUPPORTEDFORMAT	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDBIND + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDMIP	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_UNSUPPORTEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_UNSUPPORTEMIP	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDMIP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDARRAYSIZE	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_UNSUPPORTEMIP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDARRAY	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDARRAYSIZE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDDIMENSION	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDARRAY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDDIMENSION + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_NULLPARAM	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDTYPE	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDBIND	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDTYPE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDMISC	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDBIND + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDUSAGE	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDMISC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDFOURCC	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDMIP	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDFOURCC + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_UNSUPPORTEDMIP	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDMIP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDARRAYSIZE	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_UNSUPPORTEDMIP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDARRAY	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDARRAYSIZE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDDIMENSION	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDARRAY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDDIMENSION + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_NULLPARAM	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDTYPE	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDBIND	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDTYPE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDFORMAT	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDBIND + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDMIP	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_UNSUPPORTEDMIP	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDMIP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_UNSUPPORTEDARRAY	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_UNSUPPORTEDMIP + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDARRAY	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_UNSUPPORTEDARRAY + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDDIMENSION	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDARRAY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_USE_OF_FORCED_SAMPLE_COUNT	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDDIMENSION + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDLOGICOPS	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_USE_OF_FORCED_SAMPLE_COUNT + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDARRAYWITHDECODER	= ( D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDLOGICOPS + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDDARRAYWITHDECODER	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDARRAYWITHDECODER + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDARRAYWITHDECODER	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDDARRAYWITHDECODER + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_LOCKEDOUT_INTERFACE	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDARRAYWITHDECODER + 1 ) ,
        D3D11_MESSAGE_ID_REF_WARNING_ATOMIC_INCONSISTENT	= ( D3D11_MESSAGE_ID_DEVICE_LOCKEDOUT_INTERFACE + 1 ) ,
        D3D11_MESSAGE_ID_REF_WARNING_READING_UNINITIALIZED_RESOURCE	= ( D3D11_MESSAGE_ID_REF_WARNING_ATOMIC_INCONSISTENT + 1 ) ,
        D3D11_MESSAGE_ID_REF_WARNING_RAW_HAZARD	= ( D3D11_MESSAGE_ID_REF_WARNING_READING_UNINITIALIZED_RESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_REF_WARNING_WAR_HAZARD	= ( D3D11_MESSAGE_ID_REF_WARNING_RAW_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_REF_WARNING_WAW_HAZARD	= ( D3D11_MESSAGE_ID_REF_WARNING_WAR_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_CREATECRYPTOSESSION_NULLPARAM	= ( D3D11_MESSAGE_ID_REF_WARNING_WAW_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_CREATECRYPTOSESSION_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATECRYPTOSESSION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETCRYPTOTYPE_NULLPARAM	= ( D3D11_MESSAGE_ID_CREATECRYPTOSESSION_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_GETDECODERPROFILE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETCRYPTOTYPE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETCRYPTOSESSIONCERTIFICATESIZE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETDECODERPROFILE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETCRYPTOSESSIONCERTIFICATE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETCRYPTOSESSIONCERTIFICATESIZE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETCRYPTOSESSIONCERTIFICATE_WRONGSIZE	= ( D3D11_MESSAGE_ID_GETCRYPTOSESSIONCERTIFICATE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETCRYPTOSESSIONHANDLE_WRONGSIZE	= ( D3D11_MESSAGE_ID_GETCRYPTOSESSIONCERTIFICATE_WRONGSIZE + 1 ) ,
        D3D11_MESSAGE_ID_NEGOTIATECRPYTOSESSIONKEYEXCHANGE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETCRYPTOSESSIONHANDLE_WRONGSIZE + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_UNSUPPORTED	= ( D3D11_MESSAGE_ID_NEGOTIATECRPYTOSESSIONKEYEXCHANGE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_NULLPARAM	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_WRONGDEVICE	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_WRONGDEVICE	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_WRONGDEVICE + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_FORMAT_MISMATCH	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_WRONGDEVICE + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_SIZE_MISMATCH	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_FORMAT_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_MULTISAMPLED	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_SIZE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_NOT_STAGING	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_MULTISAMPLED + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_MAPPED	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_NOT_STAGING + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_MAPPED	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_MAPPED + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_OFFERED	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_MAPPED + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_OFFERED	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_OFFERED + 1 ) ,
        D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_CONTENT_UNDEFINED	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_OFFERED + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_UNSUPPORTED	= ( D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_CONTENT_UNDEFINED + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_NULLPARAM	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_WRONGDEVICE	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_WRONGDEVICE	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_WRONGDEVICE + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_FORMAT_MISMATCH	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_WRONGDEVICE + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_SIZE_MISMATCH	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_FORMAT_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_MULTISAMPLED	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_SIZE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_NOT_STAGING	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_MULTISAMPLED + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_NOT_RENDER_TARGET	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_NOT_STAGING + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_MAPPED	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_NOT_RENDER_TARGET + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_MAPPED	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_MAPPED + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_OFFERED	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_MAPPED + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_OFFERED	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_OFFERED + 1 ) ,
        D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_CONTENT_UNDEFINED	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_OFFERED + 1 ) ,
        D3D11_MESSAGE_ID_STARTSESSIONKEYREFRESH_NULLPARAM	= ( D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_CONTENT_UNDEFINED + 1 ) ,
        D3D11_MESSAGE_ID_STARTSESSIONKEYREFRESH_INVALIDSIZE	= ( D3D11_MESSAGE_ID_STARTSESSIONKEYREFRESH_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_FINISHSESSIONKEYREFRESH_NULLPARAM	= ( D3D11_MESSAGE_ID_STARTSESSIONKEYREFRESH_INVALIDSIZE + 1 ) ,
        D3D11_MESSAGE_ID_GETENCRYPTIONBLTKEY_NULLPARAM	= ( D3D11_MESSAGE_ID_FINISHSESSIONKEYREFRESH_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETENCRYPTIONBLTKEY_INVALIDSIZE	= ( D3D11_MESSAGE_ID_GETENCRYPTIONBLTKEY_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETCONTENTPROTECTIONCAPS_NULLPARAM	= ( D3D11_MESSAGE_ID_GETENCRYPTIONBLTKEY_INVALIDSIZE + 1 ) ,
        D3D11_MESSAGE_ID_CHECKCRYPTOKEYEXCHANGE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETCONTENTPROTECTIONCAPS_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CHECKCRYPTOKEYEXCHANGE_INVALIDINDEX	= ( D3D11_MESSAGE_ID_CHECKCRYPTOKEYEXCHANGE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_NULLPARAM	= ( D3D11_MESSAGE_ID_CHECKCRYPTOKEYEXCHANGE_INVALIDINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_UNSUPPORTED	= ( D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_INVALIDTYPE	= ( D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_OUTOFMEMORY_RETURN	= ( D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_INVALIDTYPE + 1 ) ,
        D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATESIZE_INVALIDCHANNEL	= ( D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_OUTOFMEMORY_RETURN + 1 ) ,
        D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATESIZE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATESIZE_INVALIDCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATE_INVALIDCHANNEL	= ( D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATESIZE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATE_INVALIDCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATE_WRONGSIZE	= ( D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE_INVALIDCHANNEL	= ( D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATE_WRONGSIZE + 1 ) ,
        D3D11_MESSAGE_ID_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE_NULLPARAM	= ( D3D11_MESSAGE_ID_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE_INVALIDCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_NULLPARAM	= ( D3D11_MESSAGE_ID_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_WRONGCHANNEL	= ( D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_UNSUPPORTEDQUERY	= ( D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_WRONGCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_WRONGSIZE	= ( D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_UNSUPPORTEDQUERY + 1 ) ,
        D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_INVALIDPROCESSINDEX	= ( D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_WRONGSIZE + 1 ) ,
        D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_NULLPARAM	= ( D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_INVALIDPROCESSINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_WRONGCHANNEL	= ( D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_UNSUPPORTEDCONFIGURE	= ( D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_WRONGCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_WRONGSIZE	= ( D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_UNSUPPORTEDCONFIGURE + 1 ) ,
        D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_INVALIDPROCESSIDTYPE	= ( D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_WRONGSIZE + 1 ) ,
        D3D11_MESSAGE_ID_VSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT	= ( D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_INVALIDPROCESSIDTYPE + 1 ) ,
        D3D11_MESSAGE_ID_DSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT	= ( D3D11_MESSAGE_ID_VSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_HSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT	= ( D3D11_MESSAGE_ID_DSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_GSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT	= ( D3D11_MESSAGE_ID_HSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_PSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT	= ( D3D11_MESSAGE_ID_GSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_CSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT	= ( D3D11_MESSAGE_ID_PSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_NEGOTIATECRPYTOSESSIONKEYEXCHANGE_INVALIDSIZE	= ( D3D11_MESSAGE_ID_CSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE_INVALIDSIZE	= ( D3D11_MESSAGE_ID_NEGOTIATECRPYTOSESSIONKEYEXCHANGE_INVALIDSIZE + 1 ) ,
        D3D11_MESSAGE_ID_OFFERRESOURCES_INVALIDPRIORITY	= ( D3D11_MESSAGE_ID_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE_INVALIDSIZE + 1 ) ,
        D3D11_MESSAGE_ID_GETCRYPTOSESSIONHANDLE_OUTOFMEMORY	= ( D3D11_MESSAGE_ID_OFFERRESOURCES_INVALIDPRIORITY + 1 ) ,
        D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_NULLPARAM	= ( D3D11_MESSAGE_ID_GETCRYPTOSESSIONHANDLE_OUTOFMEMORY + 1 ) ,
        D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_INVALIDTYPE	= ( D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_INVALIDBIND	= ( D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_INVALIDTYPE + 1 ) ,
        D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_INVALIDARRAY	= ( D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_INVALIDBIND + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_NULLPARAM	= ( D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_INVALIDARRAY + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_INVALID	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_INVALID + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMROTATION_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_INVALIDVIEW	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMROTATION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_DOUBLEEXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_INVALIDVIEW + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_SHADEREXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_DOUBLEEXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_DOUBLEEXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_SHADEREXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_SHADEREXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_DOUBLEEXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_DOUBLEEXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_SHADEREXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_SHADEREXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_DOUBLEEXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_DOUBLEEXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_SHADEREXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_SHADEREXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_DOUBLEEXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DOUBLEEXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_SHADEREXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_SHADEREXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DOUBLEEXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_DOUBLEEXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_SHADEREXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_SHADEREXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_DOUBLEEXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_DOUBLEEXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_SHADEREXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_SHADEREXTENSIONSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_DOUBLEEXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_MINPRECISION	= ( D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_SHADEREXTENSIONSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_UNSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_MINPRECISION + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_UAVSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_UAVSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_UAVSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_UAVSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_UAVSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_UAVSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_UAVSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UAVSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_UAVSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_UAVSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UAVSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_UAVSNOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_UAVSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_INVALIDOFFSET	= ( D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_UAVSNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_TOOMANYVIEWS	= ( D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_INVALIDOFFSET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_NOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_TOOMANYVIEWS + 1 ) ,
        D3D11_MESSAGE_ID_SWAPDEVICECONTEXTSTATE_NOTSUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_NOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_UPDATESUBRESOURCE_PREFERUPDATESUBRESOURCE1	= ( D3D11_MESSAGE_ID_SWAPDEVICECONTEXTSTATE_NOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_GETDC_INACCESSIBLE	= ( D3D11_MESSAGE_ID_UPDATESUBRESOURCE_PREFERUPDATESUBRESOURCE1 + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_INVALIDRECT	= ( D3D11_MESSAGE_ID_GETDC_INACCESSIBLE + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_SAMPLE_MASK_IGNORED_ON_FL9	= ( D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_INVALIDRECT + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE1_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_SAMPLE_MASK_IGNORED_ON_FL9 + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_BY_NAME_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE1_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_ENQUEUESETEVENT_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_BY_NAME_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_OFFERRELEASE_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_ENQUEUESETEVENT_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_OFFERRESOURCES_INACCESSIBLE	= ( D3D11_MESSAGE_ID_OFFERRELEASE_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDMSAA	= ( D3D11_MESSAGE_ID_OFFERRESOURCES_INACCESSIBLE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDMSAA	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDMSAA + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_INVALIDSOURCERECT	= ( D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDMSAA + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_EMPTYRECT	= ( D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_INVALIDSOURCERECT + 1 ) ,
        D3D11_MESSAGE_ID_UPDATESUBRESOURCE_EMPTYDESTBOX	= ( D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_EMPTYRECT + 1 ) ,
        D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_EMPTYSOURCEBOX	= ( D3D11_MESSAGE_ID_UPDATESUBRESOURCE_EMPTYDESTBOX + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_OM_RENDER_TARGET_DOES_NOT_SUPPORT_LOGIC_OPS	= ( D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_EMPTYSOURCEBOX + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_DEPTHSTENCILVIEW_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_OM_RENDER_TARGET_DOES_NOT_SUPPORT_LOGIC_OPS + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RENDERTARGETVIEW_NOT_SET	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_DEPTHSTENCILVIEW_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_RENDERTARGETVIEW_NOT_SET_DUE_TO_FLIP_PRESENT	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RENDERTARGETVIEW_NOT_SET + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_NOT_SET_DUE_TO_FLIP_PRESENT	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_RENDERTARGETVIEW_NOT_SET_DUE_TO_FLIP_PRESENT + 1 ) ,
        D3D11_MESSAGE_ID_GETDATAFORNEWHARDWAREKEY_NULLPARAM	= ( D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_NOT_SET_DUE_TO_FLIP_PRESENT + 1 ) ,
        D3D11_MESSAGE_ID_CHECKCRYPTOSESSIONSTATUS_NULLPARAM	= ( D3D11_MESSAGE_ID_GETDATAFORNEWHARDWAREKEY_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETCRYPTOSESSIONPRIVATEDATASIZE_NULLPARAM	= ( D3D11_MESSAGE_ID_CHECKCRYPTOSESSIONSTATUS_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERCAPS_NULLPARAM	= ( D3D11_MESSAGE_ID_GETCRYPTOSESSIONPRIVATEDATASIZE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_GETVIDEODECODERCAPS_ZEROWIDTHHEIGHT	= ( D3D11_MESSAGE_ID_GETVIDEODECODERCAPS_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CHECKVIDEODECODERDOWNSAMPLING_NULLPARAM	= ( D3D11_MESSAGE_ID_GETVIDEODECODERCAPS_ZEROWIDTHHEIGHT + 1 ) ,
        D3D11_MESSAGE_ID_CHECKVIDEODECODERDOWNSAMPLING_INVALIDCOLORSPACE	= ( D3D11_MESSAGE_ID_CHECKVIDEODECODERDOWNSAMPLING_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CHECKVIDEODECODERDOWNSAMPLING_ZEROWIDTHHEIGHT	= ( D3D11_MESSAGE_ID_CHECKVIDEODECODERDOWNSAMPLING_INVALIDCOLORSPACE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEODECODERENABLEDOWNSAMPLING_NULLPARAM	= ( D3D11_MESSAGE_ID_CHECKVIDEODECODERDOWNSAMPLING_ZEROWIDTHHEIGHT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEODECODERENABLEDOWNSAMPLING_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEODECODERENABLEDOWNSAMPLING_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEODECODERUPDATEDOWNSAMPLING_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEODECODERENABLEDOWNSAMPLING_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEODECODERUPDATEDOWNSAMPLING_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEODECODERUPDATEDOWNSAMPLING_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CHECKVIDEOPROCESSORFORMATCONVERSION_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEODECODERUPDATEDOWNSAMPLING_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCOLORSPACE1_NULLPARAM	= ( D3D11_MESSAGE_ID_CHECKVIDEOPROCESSORFORMATCONVERSION_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTCOLORSPACE1_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCOLORSPACE1_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE1_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTCOLORSPACE1_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE1_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE1_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMMIRROR_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE1_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMMIRROR_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMMIRROR_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMMIRROR_UNSUPPORTED	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMMIRROR_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE1_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMMIRROR_UNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMMIRROR_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE1_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_RECOMMENDVIDEODECODERDOWNSAMPLING_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMMIRROR_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_RECOMMENDVIDEODECODERDOWNSAMPLING_INVALIDCOLORSPACE	= ( D3D11_MESSAGE_ID_RECOMMENDVIDEODECODERDOWNSAMPLING_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_RECOMMENDVIDEODECODERDOWNSAMPLING_ZEROWIDTHHEIGHT	= ( D3D11_MESSAGE_ID_RECOMMENDVIDEODECODERDOWNSAMPLING_INVALIDCOLORSPACE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTSHADERUSAGE_NULLPARAM	= ( D3D11_MESSAGE_ID_RECOMMENDVIDEODECODERDOWNSAMPLING_ZEROWIDTHHEIGHT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTSHADERUSAGE_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTSHADERUSAGE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTSHADERUSAGE_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_INVALIDSTREAMCOUNT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_TARGETRECT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_INVALIDSTREAMCOUNT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_INVALIDSOURCERECT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_TARGETRECT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_INVALIDDESTRECT	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_INVALIDSOURCERECT + 1 ) ,
        D3D11_MESSAGE_ID_GETCRYPTOSESSIONPRIVATEDATASIZE_INVALID_KEY_EXCHANGE_TYPE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_INVALIDDESTRECT + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_1_MESSAGES_END	= ( D3D11_MESSAGE_ID_GETCRYPTOSESSIONPRIVATEDATASIZE_INVALID_KEY_EXCHANGE_TYPE + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_2_MESSAGES_START	= ( D3D11_MESSAGE_ID_D3D11_1_MESSAGES_END + 1 ) ,
        D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDUSAGE	= ( D3D11_MESSAGE_ID_D3D11_2_MESSAGES_START + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDUSAGE	= ( D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDUSAGE	= ( D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_LEVEL9_STEPRATE_NOT_1	= ( D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_LEVEL9_INSTANCING_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_LEVEL9_STEPRATE_NOT_1 + 1 ) ,
        D3D11_MESSAGE_ID_UPDATETILEMAPPINGS_INVALID_PARAMETER	= ( D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_LEVEL9_INSTANCING_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_COPYTILEMAPPINGS_INVALID_PARAMETER	= ( D3D11_MESSAGE_ID_UPDATETILEMAPPINGS_INVALID_PARAMETER + 1 ) ,
        D3D11_MESSAGE_ID_COPYTILES_INVALID_PARAMETER	= ( D3D11_MESSAGE_ID_COPYTILEMAPPINGS_INVALID_PARAMETER + 1 ) ,
        D3D11_MESSAGE_ID_UPDATETILES_INVALID_PARAMETER	= ( D3D11_MESSAGE_ID_COPYTILES_INVALID_PARAMETER + 1 ) ,
        D3D11_MESSAGE_ID_RESIZETILEPOOL_INVALID_PARAMETER	= ( D3D11_MESSAGE_ID_UPDATETILES_INVALID_PARAMETER + 1 ) ,
        D3D11_MESSAGE_ID_TILEDRESOURCEBARRIER_INVALID_PARAMETER	= ( D3D11_MESSAGE_ID_RESIZETILEPOOL_INVALID_PARAMETER + 1 ) ,
        D3D11_MESSAGE_ID_NULL_TILE_MAPPING_ACCESS_WARNING	= ( D3D11_MESSAGE_ID_TILEDRESOURCEBARRIER_INVALID_PARAMETER + 1 ) ,
        D3D11_MESSAGE_ID_NULL_TILE_MAPPING_ACCESS_ERROR	= ( D3D11_MESSAGE_ID_NULL_TILE_MAPPING_ACCESS_WARNING + 1 ) ,
        D3D11_MESSAGE_ID_DIRTY_TILE_MAPPING_ACCESS	= ( D3D11_MESSAGE_ID_NULL_TILE_MAPPING_ACCESS_ERROR + 1 ) ,
        D3D11_MESSAGE_ID_DUPLICATE_TILE_MAPPINGS_IN_COVERED_AREA	= ( D3D11_MESSAGE_ID_DIRTY_TILE_MAPPING_ACCESS + 1 ) ,
        D3D11_MESSAGE_ID_TILE_MAPPINGS_IN_COVERED_AREA_DUPLICATED_OUTSIDE	= ( D3D11_MESSAGE_ID_DUPLICATE_TILE_MAPPINGS_IN_COVERED_AREA + 1 ) ,
        D3D11_MESSAGE_ID_TILE_MAPPINGS_SHARED_BETWEEN_INCOMPATIBLE_RESOURCES	= ( D3D11_MESSAGE_ID_TILE_MAPPINGS_IN_COVERED_AREA_DUPLICATED_OUTSIDE + 1 ) ,
        D3D11_MESSAGE_ID_TILE_MAPPINGS_SHARED_BETWEEN_INPUT_AND_OUTPUT	= ( D3D11_MESSAGE_ID_TILE_MAPPINGS_SHARED_BETWEEN_INCOMPATIBLE_RESOURCES + 1 ) ,
        D3D11_MESSAGE_ID_CHECKMULTISAMPLEQUALITYLEVELS_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_TILE_MAPPINGS_SHARED_BETWEEN_INPUT_AND_OUTPUT + 1 ) ,
        D3D11_MESSAGE_ID_GETRESOURCETILING_NONTILED_RESOURCE	= ( D3D11_MESSAGE_ID_CHECKMULTISAMPLEQUALITYLEVELS_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_RESIZETILEPOOL_SHRINK_WITH_MAPPINGS_STILL_DEFINED_PAST_END	= ( D3D11_MESSAGE_ID_GETRESOURCETILING_NONTILED_RESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_NEED_TO_CALL_TILEDRESOURCEBARRIER	= ( D3D11_MESSAGE_ID_RESIZETILEPOOL_SHRINK_WITH_MAPPINGS_STILL_DEFINED_PAST_END + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEVICE_INVALIDARGS	= ( D3D11_MESSAGE_ID_NEED_TO_CALL_TILEDRESOURCEBARRIER + 1 ) ,
        D3D11_MESSAGE_ID_CREATEDEVICE_WARNING	= ( D3D11_MESSAGE_ID_CREATEDEVICE_INVALIDARGS + 1 ) ,
        D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEWUINT_HAZARD	= ( D3D11_MESSAGE_ID_CREATEDEVICE_WARNING + 1 ) ,
        D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEWFLOAT_HAZARD	= ( D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEWUINT_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_TILED_RESOURCE_TIER_1_BUFFER_TEXTURE_MISMATCH	= ( D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEWFLOAT_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_CRYPTOSESSION	= ( D3D11_MESSAGE_ID_TILED_RESOURCE_TIER_1_BUFFER_TEXTURE_MISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_AUTHENTICATEDCHANNEL	= ( D3D11_MESSAGE_ID_CREATE_CRYPTOSESSION + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_CRYPTOSESSION	= ( D3D11_MESSAGE_ID_CREATE_AUTHENTICATEDCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_AUTHENTICATEDCHANNEL	= ( D3D11_MESSAGE_ID_LIVE_CRYPTOSESSION + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_CRYPTOSESSION	= ( D3D11_MESSAGE_ID_LIVE_AUTHENTICATEDCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_AUTHENTICATEDCHANNEL	= ( D3D11_MESSAGE_ID_DESTROY_CRYPTOSESSION + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_2_MESSAGES_END	= ( D3D11_MESSAGE_ID_DESTROY_AUTHENTICATEDCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_3_MESSAGES_START	= ( D3D11_MESSAGE_ID_D3D11_2_MESSAGES_END + 1 ) ,
        D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALID_CONSERVATIVERASTERMODE	= ( D3D11_MESSAGE_ID_D3D11_3_MESSAGES_START + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_SYSTEMVALUE	= ( D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALID_CONSERVATIVERASTERMODE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDCONTEXTTYPE	= ( D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_SYSTEMVALUE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_DECODENOTSUPPORTED	= ( D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDCONTEXTTYPE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_ENCODENOTSUPPORTED	= ( D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_DECODENOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDPLANEINDEX	= ( D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_ENCODENOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDVIDEOPLANEINDEX	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDPLANEINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_AMBIGUOUSVIDEOPLANEINDEX	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDVIDEOPLANEINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDPLANEINDEX	= ( D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_AMBIGUOUSVIDEOPLANEINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDVIDEOPLANEINDEX	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDPLANEINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_AMBIGUOUSVIDEOPLANEINDEX	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDVIDEOPLANEINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDPLANEINDEX	= ( D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_AMBIGUOUSVIDEOPLANEINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDVIDEOPLANEINDEX	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDPLANEINDEX + 1 ) ,
        D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_AMBIGUOUSVIDEOPLANEINDEX	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDVIDEOPLANEINDEX + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_INVALIDSCANDATAOFFSET	= ( D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_AMBIGUOUSVIDEOPLANEINDEX + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_NOTSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGDECODE_INVALIDSCANDATAOFFSET + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_DIMENSIONSTOOLARGE	= ( D3D11_MESSAGE_ID_JPEGDECODE_NOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_INVALIDCOMPONENTS	= ( D3D11_MESSAGE_ID_JPEGDECODE_DIMENSIONSTOOLARGE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_DESTINATIONNOT2D	= ( D3D11_MESSAGE_ID_JPEGDECODE_INVALIDCOMPONENTS + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_TILEDRESOURCESUNSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGDECODE_DESTINATIONNOT2D + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_GUARDRECTSUNSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGDECODE_TILEDRESOURCESUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_FORMATUNSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGDECODE_GUARDRECTSUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_JPEGDECODE_FORMATUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_INVALIDMIPLEVEL	= ( D3D11_MESSAGE_ID_JPEGDECODE_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_EMPTYDESTBOX	= ( D3D11_MESSAGE_ID_JPEGDECODE_INVALIDMIPLEVEL + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_DESTBOXNOT2D	= ( D3D11_MESSAGE_ID_JPEGDECODE_EMPTYDESTBOX + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_DESTBOXNOTSUB	= ( D3D11_MESSAGE_ID_JPEGDECODE_DESTBOXNOT2D + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_DESTBOXESINTERSECT	= ( D3D11_MESSAGE_ID_JPEGDECODE_DESTBOXNOTSUB + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_XSUBSAMPLEMISMATCH	= ( D3D11_MESSAGE_ID_JPEGDECODE_DESTBOXESINTERSECT + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_YSUBSAMPLEMISMATCH	= ( D3D11_MESSAGE_ID_JPEGDECODE_XSUBSAMPLEMISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_XSUBSAMPLEODD	= ( D3D11_MESSAGE_ID_JPEGDECODE_YSUBSAMPLEMISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_YSUBSAMPLEODD	= ( D3D11_MESSAGE_ID_JPEGDECODE_XSUBSAMPLEODD + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_OUTPUTDIMENSIONSTOOLARGE	= ( D3D11_MESSAGE_ID_JPEGDECODE_YSUBSAMPLEODD + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_NONPOW2SCALEUNSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGDECODE_OUTPUTDIMENSIONSTOOLARGE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_FRACTIONALDOWNSCALETOLARGE	= ( D3D11_MESSAGE_ID_JPEGDECODE_NONPOW2SCALEUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_CHROMASIZEMISMATCH	= ( D3D11_MESSAGE_ID_JPEGDECODE_FRACTIONALDOWNSCALETOLARGE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_LUMACHROMASIZEMISMATCH	= ( D3D11_MESSAGE_ID_JPEGDECODE_CHROMASIZEMISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_INVALIDNUMDESTINATIONS	= ( D3D11_MESSAGE_ID_JPEGDECODE_LUMACHROMASIZEMISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_SUBBOXUNSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGDECODE_INVALIDNUMDESTINATIONS + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_1DESTUNSUPPORTEDFORMAT	= ( D3D11_MESSAGE_ID_JPEGDECODE_SUBBOXUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_3DESTUNSUPPORTEDFORMAT	= ( D3D11_MESSAGE_ID_JPEGDECODE_1DESTUNSUPPORTEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_SCALEUNSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGDECODE_3DESTUNSUPPORTEDFORMAT + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_INVALIDSOURCESIZE	= ( D3D11_MESSAGE_ID_JPEGDECODE_SCALEUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_INVALIDCOPYFLAGS	= ( D3D11_MESSAGE_ID_JPEGDECODE_INVALIDSOURCESIZE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_HAZARD	= ( D3D11_MESSAGE_ID_JPEGDECODE_INVALIDCOPYFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPORTEDSRCBUFFERUSAGE	= ( D3D11_MESSAGE_ID_JPEGDECODE_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPORTEDSRCBUFFERMISCFLAGS	= ( D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPORTEDSRCBUFFERUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPORTEDDSTTEXTUREUSAGE	= ( D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPORTEDSRCBUFFERMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_BACKBUFFERNOTSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPORTEDDSTTEXTUREUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPRTEDCOPYFLAGS	= ( D3D11_MESSAGE_ID_JPEGDECODE_BACKBUFFERNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_NOTSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPRTEDCOPYFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_INVALIDSCANDATAOFFSET	= ( D3D11_MESSAGE_ID_JPEGENCODE_NOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_INVALIDCOMPONENTS	= ( D3D11_MESSAGE_ID_JPEGENCODE_INVALIDSCANDATAOFFSET + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_SOURCENOT2D	= ( D3D11_MESSAGE_ID_JPEGENCODE_INVALIDCOMPONENTS + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_TILEDRESOURCESUNSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGENCODE_SOURCENOT2D + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_GUARDRECTSUNSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGENCODE_TILEDRESOURCESUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_XSUBSAMPLEMISMATCH	= ( D3D11_MESSAGE_ID_JPEGENCODE_GUARDRECTSUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_YSUBSAMPLEMISMATCH	= ( D3D11_MESSAGE_ID_JPEGENCODE_XSUBSAMPLEMISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_FORMATUNSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGENCODE_YSUBSAMPLEMISMATCH + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_INVALIDSUBRESOURCE	= ( D3D11_MESSAGE_ID_JPEGENCODE_FORMATUNSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_INVALIDMIPLEVEL	= ( D3D11_MESSAGE_ID_JPEGENCODE_INVALIDSUBRESOURCE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_DIMENSIONSTOOLARGE	= ( D3D11_MESSAGE_ID_JPEGENCODE_INVALIDMIPLEVEL + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_HAZARD	= ( D3D11_MESSAGE_ID_JPEGENCODE_DIMENSIONSTOOLARGE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_UNSUPPORTEDDSTBUFFERUSAGE	= ( D3D11_MESSAGE_ID_JPEGENCODE_HAZARD + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_UNSUPPORTEDDSTBUFFERMISCFLAGS	= ( D3D11_MESSAGE_ID_JPEGENCODE_UNSUPPORTEDDSTBUFFERUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_UNSUPPORTEDSRCTEXTUREUSAGE	= ( D3D11_MESSAGE_ID_JPEGENCODE_UNSUPPORTEDDSTBUFFERMISCFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_JPEGENCODE_BACKBUFFERNOTSUPPORTED	= ( D3D11_MESSAGE_ID_JPEGENCODE_UNSUPPORTEDSRCTEXTUREUSAGE + 1 ) ,
        D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_UNSUPPORTEDCONTEXTTTYPEFORQUERY	= ( D3D11_MESSAGE_ID_JPEGENCODE_BACKBUFFERNOTSUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_FLUSH1_INVALIDCONTEXTTYPE	= ( D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_UNSUPPORTEDCONTEXTTTYPEFORQUERY + 1 ) ,
        D3D11_MESSAGE_ID_DEVICE_SETHARDWAREPROTECTION_INVALIDCONTEXT	= ( D3D11_MESSAGE_ID_FLUSH1_INVALIDCONTEXTTYPE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTHDRMETADATA_NULLPARAM	= ( D3D11_MESSAGE_ID_DEVICE_SETHARDWAREPROTECTION_INVALIDCONTEXT + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTHDRMETADATA_INVALIDSIZE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTHDRMETADATA_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTHDRMETADATA_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTHDRMETADATA_INVALIDSIZE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTHDRMETADATA_INVALIDSIZE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTHDRMETADATA_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMHDRMETADATA_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTHDRMETADATA_INVALIDSIZE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMHDRMETADATA_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMHDRMETADATA_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMHDRMETADATA_INVALIDSIZE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMHDRMETADATA_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMHDRMETADATA_NULLPARAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMHDRMETADATA_INVALIDSIZE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMHDRMETADATA_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMHDRMETADATA_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMHDRMETADATA_INVALIDSIZE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMHDRMETADATA_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFRAMEFORMAT_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMHDRMETADATA_INVALIDSIZE + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFRAMEFORMAT_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMOUTPUTRATE_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSOURCERECT_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMOUTPUTRATE_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMDESTRECT_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSOURCERECT_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMALPHA_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMDESTRECT_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPALETTE_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMALPHA_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPIXELASPECTRATIO_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPALETTE_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMLUMAKEY_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPIXELASPECTRATIO_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSTEREOFORMAT_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMLUMAKEY_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMAUTOPROCESSINGMODE_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSTEREOFORMAT_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFILTER_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMAUTOPROCESSINGMODE_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMROTATION_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFILTER_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE1_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMROTATION_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMMIRROR_INVALIDSTREAM	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE1_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_FENCE	= ( D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMMIRROR_INVALIDSTREAM + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_FENCE	= ( D3D11_MESSAGE_ID_CREATE_FENCE + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_FENCE	= ( D3D11_MESSAGE_ID_LIVE_FENCE + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_SYNCHRONIZEDCHANNEL	= ( D3D11_MESSAGE_ID_DESTROY_FENCE + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_SYNCHRONIZEDCHANNEL	= ( D3D11_MESSAGE_ID_CREATE_SYNCHRONIZEDCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_SYNCHRONIZEDCHANNEL	= ( D3D11_MESSAGE_ID_LIVE_SYNCHRONIZEDCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_CREATEFENCE_INVALIDFLAGS	= ( D3D11_MESSAGE_ID_DESTROY_SYNCHRONIZEDCHANNEL + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_3_MESSAGES_END	= ( D3D11_MESSAGE_ID_CREATEFENCE_INVALIDFLAGS + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_5_MESSAGES_START	= ( D3D11_MESSAGE_ID_D3D11_3_MESSAGES_END + 1 ) ,
        D3D11_MESSAGE_ID_NEGOTIATECRYPTOSESSIONKEYEXCHANGEMT_INVALIDKEYEXCHANGETYPE	= ( D3D11_MESSAGE_ID_D3D11_5_MESSAGES_START + 1 ) ,
        D3D11_MESSAGE_ID_NEGOTIATECRYPTOSESSIONKEYEXCHANGEMT_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_NEGOTIATECRYPTOSESSIONKEYEXCHANGEMT_INVALIDKEYEXCHANGETYPE + 1 ) ,
        D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_COMPONENT_COUNT	= ( D3D11_MESSAGE_ID_NEGOTIATECRYPTOSESSIONKEYEXCHANGEMT_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_COMPONENT	= ( D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_COMPONENT_COUNT + 1 ) ,
        D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_BUFFER_SIZE	= ( D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_COMPONENT + 1 ) ,
        D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_BUFFER_USAGE	= ( D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_BUFFER_SIZE + 1 ) ,
        D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_BUFFER_MISC_FLAGS	= ( D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_BUFFER_USAGE + 1 ) ,
        D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_BUFFER_OFFSET	= ( D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_BUFFER_MISC_FLAGS + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_TRACKEDWORKLOAD	= ( D3D11_MESSAGE_ID_DECODERBEGINFRAME_INVALID_HISTOGRAM_BUFFER_OFFSET + 1 ) ,
        D3D11_MESSAGE_ID_LIVE_TRACKEDWORKLOAD	= ( D3D11_MESSAGE_ID_CREATE_TRACKEDWORKLOAD + 1 ) ,
        D3D11_MESSAGE_ID_DESTROY_TRACKEDWORKLOAD	= ( D3D11_MESSAGE_ID_LIVE_TRACKEDWORKLOAD + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_TRACKED_WORKLOAD_NULLPARAM	= ( D3D11_MESSAGE_ID_DESTROY_TRACKEDWORKLOAD + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_TRACKED_WORKLOAD_INVALID_MAX_INSTANCES	= ( D3D11_MESSAGE_ID_CREATE_TRACKED_WORKLOAD_NULLPARAM + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_TRACKED_WORKLOAD_INVALID_DEADLINE_TYPE	= ( D3D11_MESSAGE_ID_CREATE_TRACKED_WORKLOAD_INVALID_MAX_INSTANCES + 1 ) ,
        D3D11_MESSAGE_ID_CREATE_TRACKED_WORKLOAD_INVALID_ENGINE_TYPE	= ( D3D11_MESSAGE_ID_CREATE_TRACKED_WORKLOAD_INVALID_DEADLINE_TYPE + 1 ) ,
        D3D11_MESSAGE_ID_MULTIPLE_TRACKED_WORKLOADS	= ( D3D11_MESSAGE_ID_CREATE_TRACKED_WORKLOAD_INVALID_ENGINE_TYPE + 1 ) ,
        D3D11_MESSAGE_ID_MULTIPLE_TRACKED_WORKLOAD_PAIRS	= ( D3D11_MESSAGE_ID_MULTIPLE_TRACKED_WORKLOADS + 1 ) ,
        D3D11_MESSAGE_ID_INCOMPLETE_TRACKED_WORKLOAD_PAIR	= ( D3D11_MESSAGE_ID_MULTIPLE_TRACKED_WORKLOAD_PAIRS + 1 ) ,
        D3D11_MESSAGE_ID_OUT_OF_ORDER_TRACKED_WORKLOAD_PAIR	= ( D3D11_MESSAGE_ID_INCOMPLETE_TRACKED_WORKLOAD_PAIR + 1 ) ,
        D3D11_MESSAGE_ID_CANNOT_ADD_TRACKED_WORKLOAD	= ( D3D11_MESSAGE_ID_OUT_OF_ORDER_TRACKED_WORKLOAD_PAIR + 1 ) ,
        D3D11_MESSAGE_ID_TRACKED_WORKLOAD_NOT_SUPPORTED	= ( D3D11_MESSAGE_ID_CANNOT_ADD_TRACKED_WORKLOAD + 1 ) ,
        D3D11_MESSAGE_ID_TRACKED_WORKLOAD_ENGINE_TYPE_NOT_FOUND	= ( D3D11_MESSAGE_ID_TRACKED_WORKLOAD_NOT_SUPPORTED + 1 ) ,
        D3D11_MESSAGE_ID_NO_TRACKED_WORKLOAD_SLOT_AVAILABLE	= ( D3D11_MESSAGE_ID_TRACKED_WORKLOAD_ENGINE_TYPE_NOT_FOUND + 1 ) ,
        D3D11_MESSAGE_ID_END_TRACKED_WORKLOAD_INVALID_ARG	= ( D3D11_MESSAGE_ID_NO_TRACKED_WORKLOAD_SLOT_AVAILABLE + 1 ) ,
        D3D11_MESSAGE_ID_TRACKED_WORKLOAD_DISJOINT_FAILURE	= ( D3D11_MESSAGE_ID_END_TRACKED_WORKLOAD_INVALID_ARG + 1 ) ,
        D3D11_MESSAGE_ID_D3D11_5_MESSAGES_END	= ( D3D11_MESSAGE_ID_TRACKED_WORKLOAD_DISJOINT_FAILURE + 1 ) 
    } 	D3D11_MESSAGE_ID;

typedef struct D3D11_MESSAGE
    {
    D3D11_MESSAGE_CATEGORY Category;
    D3D11_MESSAGE_SEVERITY Severity;
    D3D11_MESSAGE_ID ID;
    /* [annotation] */ 
    _Field_size_(DescriptionByteLength)  const char *pDescription;
    SIZE_T DescriptionByteLength;
    } 	D3D11_MESSAGE;

typedef struct D3D11_INFO_QUEUE_FILTER_DESC
    {
    UINT NumCategories;
    /* [annotation] */ 
    _Field_size_(NumCategories)  D3D11_MESSAGE_CATEGORY *pCategoryList;
    UINT NumSeverities;
    /* [annotation] */ 
    _Field_size_(NumSeverities)  D3D11_MESSAGE_SEVERITY *pSeverityList;
    UINT NumIDs;
    /* [annotation] */ 
    _Field_size_(NumIDs)  D3D11_MESSAGE_ID *pIDList;
    } 	D3D11_INFO_QUEUE_FILTER_DESC;

typedef struct D3D11_INFO_QUEUE_FILTER
    {
    D3D11_INFO_QUEUE_FILTER_DESC AllowList;
    D3D11_INFO_QUEUE_FILTER_DESC DenyList;
    } 	D3D11_INFO_QUEUE_FILTER;

#define D3D11_INFO_QUEUE_DEFAULT_MESSAGE_COUNT_LIMIT 1024


extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0005_v0_0_s_ifspec;

#ifndef __ID3D11InfoQueue_INTERFACE_DEFINED__
#define __ID3D11InfoQueue_INTERFACE_DEFINED__

/* interface ID3D11InfoQueue */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_ID3D11InfoQueue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6543dbb6-1b48-42f5-ab82-e97ec74326f6")
    ID3D11InfoQueue : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetMessageCountLimit( 
            /* [annotation] */ 
            _In_  UINT64 MessageCountLimit) = 0;
        
        virtual void STDMETHODCALLTYPE ClearStoredMessages( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMessage( 
            /* [annotation] */ 
            _In_  UINT64 MessageIndex,
            /* [annotation] */ 
            _Out_writes_bytes_opt_(*pMessageByteLength)  D3D11_MESSAGE *pMessage,
            /* [annotation] */ 
            _Inout_  SIZE_T *pMessageByteLength) = 0;
        
        virtual UINT64 STDMETHODCALLTYPE GetNumMessagesAllowedByStorageFilter( void) = 0;
        
        virtual UINT64 STDMETHODCALLTYPE GetNumMessagesDeniedByStorageFilter( void) = 0;
        
        virtual UINT64 STDMETHODCALLTYPE GetNumStoredMessages( void) = 0;
        
        virtual UINT64 STDMETHODCALLTYPE GetNumStoredMessagesAllowedByRetrievalFilter( void) = 0;
        
        virtual UINT64 STDMETHODCALLTYPE GetNumMessagesDiscardedByMessageCountLimit( void) = 0;
        
        virtual UINT64 STDMETHODCALLTYPE GetMessageCountLimit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddStorageFilterEntries( 
            /* [annotation] */ 
            _In_  D3D11_INFO_QUEUE_FILTER *pFilter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStorageFilter( 
            /* [annotation] */ 
            _Out_writes_bytes_opt_(*pFilterByteLength)  D3D11_INFO_QUEUE_FILTER *pFilter,
            /* [annotation] */ 
            _Inout_  SIZE_T *pFilterByteLength) = 0;
        
        virtual void STDMETHODCALLTYPE ClearStorageFilter( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushEmptyStorageFilter( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushCopyOfStorageFilter( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushStorageFilter( 
            /* [annotation] */ 
            _In_  D3D11_INFO_QUEUE_FILTER *pFilter) = 0;
        
        virtual void STDMETHODCALLTYPE PopStorageFilter( void) = 0;
        
        virtual UINT STDMETHODCALLTYPE GetStorageFilterStackSize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddRetrievalFilterEntries( 
            /* [annotation] */ 
            _In_  D3D11_INFO_QUEUE_FILTER *pFilter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRetrievalFilter( 
            /* [annotation] */ 
            _Out_writes_bytes_opt_(*pFilterByteLength)  D3D11_INFO_QUEUE_FILTER *pFilter,
            /* [annotation] */ 
            _Inout_  SIZE_T *pFilterByteLength) = 0;
        
        virtual void STDMETHODCALLTYPE ClearRetrievalFilter( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushEmptyRetrievalFilter( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushCopyOfRetrievalFilter( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushRetrievalFilter( 
            /* [annotation] */ 
            _In_  D3D11_INFO_QUEUE_FILTER *pFilter) = 0;
        
        virtual void STDMETHODCALLTYPE PopRetrievalFilter( void) = 0;
        
        virtual UINT STDMETHODCALLTYPE GetRetrievalFilterStackSize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddMessage( 
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_CATEGORY Category,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_SEVERITY Severity,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_ID ID,
            /* [annotation] */ 
            _In_  LPCSTR pDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddApplicationMessage( 
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_SEVERITY Severity,
            /* [annotation] */ 
            _In_  LPCSTR pDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBreakOnCategory( 
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_CATEGORY Category,
            /* [annotation] */ 
            _In_  BOOL bEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBreakOnSeverity( 
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_SEVERITY Severity,
            /* [annotation] */ 
            _In_  BOOL bEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBreakOnID( 
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_ID ID,
            /* [annotation] */ 
            _In_  BOOL bEnable) = 0;
        
        virtual BOOL STDMETHODCALLTYPE GetBreakOnCategory( 
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_CATEGORY Category) = 0;
        
        virtual BOOL STDMETHODCALLTYPE GetBreakOnSeverity( 
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_SEVERITY Severity) = 0;
        
        virtual BOOL STDMETHODCALLTYPE GetBreakOnID( 
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_ID ID) = 0;
        
        virtual void STDMETHODCALLTYPE SetMuteDebugOutput( 
            /* [annotation] */ 
            _In_  BOOL bMute) = 0;
        
        virtual BOOL STDMETHODCALLTYPE GetMuteDebugOutput( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ID3D11InfoQueueVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ID3D11InfoQueue * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, SetMessageCountLimit)
        HRESULT ( STDMETHODCALLTYPE *SetMessageCountLimit )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  UINT64 MessageCountLimit);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, ClearStoredMessages)
        void ( STDMETHODCALLTYPE *ClearStoredMessages )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetMessage)
        HRESULT ( STDMETHODCALLTYPE *GetMessage )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  UINT64 MessageIndex,
            /* [annotation] */ 
            _Out_writes_bytes_opt_(*pMessageByteLength)  D3D11_MESSAGE *pMessage,
            /* [annotation] */ 
            _Inout_  SIZE_T *pMessageByteLength);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetNumMessagesAllowedByStorageFilter)
        UINT64 ( STDMETHODCALLTYPE *GetNumMessagesAllowedByStorageFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetNumMessagesDeniedByStorageFilter)
        UINT64 ( STDMETHODCALLTYPE *GetNumMessagesDeniedByStorageFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetNumStoredMessages)
        UINT64 ( STDMETHODCALLTYPE *GetNumStoredMessages )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetNumStoredMessagesAllowedByRetrievalFilter)
        UINT64 ( STDMETHODCALLTYPE *GetNumStoredMessagesAllowedByRetrievalFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetNumMessagesDiscardedByMessageCountLimit)
        UINT64 ( STDMETHODCALLTYPE *GetNumMessagesDiscardedByMessageCountLimit )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetMessageCountLimit)
        UINT64 ( STDMETHODCALLTYPE *GetMessageCountLimit )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, AddStorageFilterEntries)
        HRESULT ( STDMETHODCALLTYPE *AddStorageFilterEntries )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_INFO_QUEUE_FILTER *pFilter);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetStorageFilter)
        HRESULT ( STDMETHODCALLTYPE *GetStorageFilter )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _Out_writes_bytes_opt_(*pFilterByteLength)  D3D11_INFO_QUEUE_FILTER *pFilter,
            /* [annotation] */ 
            _Inout_  SIZE_T *pFilterByteLength);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, ClearStorageFilter)
        void ( STDMETHODCALLTYPE *ClearStorageFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, PushEmptyStorageFilter)
        HRESULT ( STDMETHODCALLTYPE *PushEmptyStorageFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, PushCopyOfStorageFilter)
        HRESULT ( STDMETHODCALLTYPE *PushCopyOfStorageFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, PushStorageFilter)
        HRESULT ( STDMETHODCALLTYPE *PushStorageFilter )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_INFO_QUEUE_FILTER *pFilter);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, PopStorageFilter)
        void ( STDMETHODCALLTYPE *PopStorageFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetStorageFilterStackSize)
        UINT ( STDMETHODCALLTYPE *GetStorageFilterStackSize )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, AddRetrievalFilterEntries)
        HRESULT ( STDMETHODCALLTYPE *AddRetrievalFilterEntries )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_INFO_QUEUE_FILTER *pFilter);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetRetrievalFilter)
        HRESULT ( STDMETHODCALLTYPE *GetRetrievalFilter )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _Out_writes_bytes_opt_(*pFilterByteLength)  D3D11_INFO_QUEUE_FILTER *pFilter,
            /* [annotation] */ 
            _Inout_  SIZE_T *pFilterByteLength);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, ClearRetrievalFilter)
        void ( STDMETHODCALLTYPE *ClearRetrievalFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, PushEmptyRetrievalFilter)
        HRESULT ( STDMETHODCALLTYPE *PushEmptyRetrievalFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, PushCopyOfRetrievalFilter)
        HRESULT ( STDMETHODCALLTYPE *PushCopyOfRetrievalFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, PushRetrievalFilter)
        HRESULT ( STDMETHODCALLTYPE *PushRetrievalFilter )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_INFO_QUEUE_FILTER *pFilter);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, PopRetrievalFilter)
        void ( STDMETHODCALLTYPE *PopRetrievalFilter )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetRetrievalFilterStackSize)
        UINT ( STDMETHODCALLTYPE *GetRetrievalFilterStackSize )( 
            ID3D11InfoQueue * This);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, AddMessage)
        HRESULT ( STDMETHODCALLTYPE *AddMessage )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_CATEGORY Category,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_SEVERITY Severity,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_ID ID,
            /* [annotation] */ 
            _In_  LPCSTR pDescription);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, AddApplicationMessage)
        HRESULT ( STDMETHODCALLTYPE *AddApplicationMessage )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_SEVERITY Severity,
            /* [annotation] */ 
            _In_  LPCSTR pDescription);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, SetBreakOnCategory)
        HRESULT ( STDMETHODCALLTYPE *SetBreakOnCategory )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_CATEGORY Category,
            /* [annotation] */ 
            _In_  BOOL bEnable);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, SetBreakOnSeverity)
        HRESULT ( STDMETHODCALLTYPE *SetBreakOnSeverity )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_SEVERITY Severity,
            /* [annotation] */ 
            _In_  BOOL bEnable);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, SetBreakOnID)
        HRESULT ( STDMETHODCALLTYPE *SetBreakOnID )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_ID ID,
            /* [annotation] */ 
            _In_  BOOL bEnable);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetBreakOnCategory)
        BOOL ( STDMETHODCALLTYPE *GetBreakOnCategory )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_CATEGORY Category);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetBreakOnSeverity)
        BOOL ( STDMETHODCALLTYPE *GetBreakOnSeverity )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_SEVERITY Severity);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetBreakOnID)
        BOOL ( STDMETHODCALLTYPE *GetBreakOnID )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  D3D11_MESSAGE_ID ID);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, SetMuteDebugOutput)
        void ( STDMETHODCALLTYPE *SetMuteDebugOutput )( 
            ID3D11InfoQueue * This,
            /* [annotation] */ 
            _In_  BOOL bMute);
        
        DECLSPEC_XFGVIRT(ID3D11InfoQueue, GetMuteDebugOutput)
        BOOL ( STDMETHODCALLTYPE *GetMuteDebugOutput )( 
            ID3D11InfoQueue * This);
        
        END_INTERFACE
    } ID3D11InfoQueueVtbl;

    interface ID3D11InfoQueue
    {
        CONST_VTBL struct ID3D11InfoQueueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID3D11InfoQueue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11InfoQueue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11InfoQueue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11InfoQueue_SetMessageCountLimit(This,MessageCountLimit)	\
    ( (This)->lpVtbl -> SetMessageCountLimit(This,MessageCountLimit) ) 

#define ID3D11InfoQueue_ClearStoredMessages(This)	\
    ( (This)->lpVtbl -> ClearStoredMessages(This) ) 

#define ID3D11InfoQueue_GetMessage(This,MessageIndex,pMessage,pMessageByteLength)	\
    ( (This)->lpVtbl -> GetMessage(This,MessageIndex,pMessage,pMessageByteLength) ) 

#define ID3D11InfoQueue_GetNumMessagesAllowedByStorageFilter(This)	\
    ( (This)->lpVtbl -> GetNumMessagesAllowedByStorageFilter(This) ) 

#define ID3D11InfoQueue_GetNumMessagesDeniedByStorageFilter(This)	\
    ( (This)->lpVtbl -> GetNumMessagesDeniedByStorageFilter(This) ) 

#define ID3D11InfoQueue_GetNumStoredMessages(This)	\
    ( (This)->lpVtbl -> GetNumStoredMessages(This) ) 

#define ID3D11InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(This)	\
    ( (This)->lpVtbl -> GetNumStoredMessagesAllowedByRetrievalFilter(This) ) 

#define ID3D11InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(This)	\
    ( (This)->lpVtbl -> GetNumMessagesDiscardedByMessageCountLimit(This) ) 

#define ID3D11InfoQueue_GetMessageCountLimit(This)	\
    ( (This)->lpVtbl -> GetMessageCountLimit(This) ) 

#define ID3D11InfoQueue_AddStorageFilterEntries(This,pFilter)	\
    ( (This)->lpVtbl -> AddStorageFilterEntries(This,pFilter) ) 

#define ID3D11InfoQueue_GetStorageFilter(This,pFilter,pFilterByteLength)	\
    ( (This)->lpVtbl -> GetStorageFilter(This,pFilter,pFilterByteLength) ) 

#define ID3D11InfoQueue_ClearStorageFilter(This)	\
    ( (This)->lpVtbl -> ClearStorageFilter(This) ) 

#define ID3D11InfoQueue_PushEmptyStorageFilter(This)	\
    ( (This)->lpVtbl -> PushEmptyStorageFilter(This) ) 

#define ID3D11InfoQueue_PushCopyOfStorageFilter(This)	\
    ( (This)->lpVtbl -> PushCopyOfStorageFilter(This) ) 

#define ID3D11InfoQueue_PushStorageFilter(This,pFilter)	\
    ( (This)->lpVtbl -> PushStorageFilter(This,pFilter) ) 

#define ID3D11InfoQueue_PopStorageFilter(This)	\
    ( (This)->lpVtbl -> PopStorageFilter(This) ) 

#define ID3D11InfoQueue_GetStorageFilterStackSize(This)	\
    ( (This)->lpVtbl -> GetStorageFilterStackSize(This) ) 

#define ID3D11InfoQueue_AddRetrievalFilterEntries(This,pFilter)	\
    ( (This)->lpVtbl -> AddRetrievalFilterEntries(This,pFilter) ) 

#define ID3D11InfoQueue_GetRetrievalFilter(This,pFilter,pFilterByteLength)	\
    ( (This)->lpVtbl -> GetRetrievalFilter(This,pFilter,pFilterByteLength) ) 

#define ID3D11InfoQueue_ClearRetrievalFilter(This)	\
    ( (This)->lpVtbl -> ClearRetrievalFilter(This) ) 

#define ID3D11InfoQueue_PushEmptyRetrievalFilter(This)	\
    ( (This)->lpVtbl -> PushEmptyRetrievalFilter(This) ) 

#define ID3D11InfoQueue_PushCopyOfRetrievalFilter(This)	\
    ( (This)->lpVtbl -> PushCopyOfRetrievalFilter(This) ) 

#define ID3D11InfoQueue_PushRetrievalFilter(This,pFilter)	\
    ( (This)->lpVtbl -> PushRetrievalFilter(This,pFilter) ) 

#define ID3D11InfoQueue_PopRetrievalFilter(This)	\
    ( (This)->lpVtbl -> PopRetrievalFilter(This) ) 

#define ID3D11InfoQueue_GetRetrievalFilterStackSize(This)	\
    ( (This)->lpVtbl -> GetRetrievalFilterStackSize(This) ) 

#define ID3D11InfoQueue_AddMessage(This,Category,Severity,ID,pDescription)	\
    ( (This)->lpVtbl -> AddMessage(This,Category,Severity,ID,pDescription) ) 

#define ID3D11InfoQueue_AddApplicationMessage(This,Severity,pDescription)	\
    ( (This)->lpVtbl -> AddApplicationMessage(This,Severity,pDescription) ) 

#define ID3D11InfoQueue_SetBreakOnCategory(This,Category,bEnable)	\
    ( (This)->lpVtbl -> SetBreakOnCategory(This,Category,bEnable) ) 

#define ID3D11InfoQueue_SetBreakOnSeverity(This,Severity,bEnable)	\
    ( (This)->lpVtbl -> SetBreakOnSeverity(This,Severity,bEnable) ) 

#define ID3D11InfoQueue_SetBreakOnID(This,ID,bEnable)	\
    ( (This)->lpVtbl -> SetBreakOnID(This,ID,bEnable) ) 

#define ID3D11InfoQueue_GetBreakOnCategory(This,Category)	\
    ( (This)->lpVtbl -> GetBreakOnCategory(This,Category) ) 

#define ID3D11InfoQueue_GetBreakOnSeverity(This,Severity)	\
    ( (This)->lpVtbl -> GetBreakOnSeverity(This,Severity) ) 

#define ID3D11InfoQueue_GetBreakOnID(This,ID)	\
    ( (This)->lpVtbl -> GetBreakOnID(This,ID) ) 

#define ID3D11InfoQueue_SetMuteDebugOutput(This,bMute)	\
    ( (This)->lpVtbl -> SetMuteDebugOutput(This,bMute) ) 

#define ID3D11InfoQueue_GetMuteDebugOutput(This)	\
    ( (This)->lpVtbl -> GetMuteDebugOutput(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11InfoQueue_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_d3d11sdklayers_0000_0006 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion
#pragma endregion
DEFINE_GUID(IID_ID3D11Debug,0x79cf2233,0x7536,0x4948,0x9d,0x36,0x1e,0x46,0x92,0xdc,0x57,0x60);
DEFINE_GUID(IID_ID3D11SwitchToRef,0x1ef337e3,0x58e7,0x4f83,0xa6,0x92,0xdb,0x22,0x1f,0x5e,0xd4,0x7e);
DEFINE_GUID(IID_ID3D11TracingDevice,0x1911c771,0x1587,0x413e,0xa7,0xe0,0xfb,0x26,0xc3,0xde,0x02,0x68);
DEFINE_GUID(IID_ID3D11RefTrackingOptions,0x193dacdf,0x0db2,0x4c05,0xa5,0x5c,0xef,0x06,0xca,0xc5,0x6f,0xd9);
DEFINE_GUID(IID_ID3D11RefDefaultTrackingOptions,0x03916615,0xc644,0x418c,0x9b,0xf4,0x75,0xdb,0x5b,0xe6,0x3c,0xa0);
DEFINE_GUID(IID_ID3D11InfoQueue,0x6543dbb6,0x1b48,0x42f5,0xab,0x82,0xe9,0x7e,0xc7,0x43,0x26,0xf6);


extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11sdklayers_0000_0006_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


