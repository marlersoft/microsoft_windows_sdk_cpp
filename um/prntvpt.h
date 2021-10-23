
/*++

Copyright (c) 1996-2004 Microsoft Corporation

Module Name:

    prnptntv.h

Abstract:

    Print ticket APIs for Win32 applications

--*/

#ifndef _PRNPTNTV_H_
#define _PRNPTNTV_H_

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

DECLARE_HANDLE(HPTPROVIDER);

#define PRINTTICKET_ISTREAM_APIS 1

#define S_PT_NO_CONFLICT                 (0x00040001)
#define S_PT_CONFLICT_RESOLVED           (0x00040002)

/*
    PrintTicket stream provided by the caller did not
    follow PrintTicket framework specification or the XML
    could not be parsed.  If returned by 
    PTMergeAndValidatePrintTicket, it indicates that the 
    base ticket contained the error.
*/
#define E_PRINTTICKET_FORMAT             (0x80040003)

/*
    PrintCapabilities document generated by the driver
    did not follow the specification.  This indicates an
    error in the driver.
*/
#define E_PRINTCAPABILITIES_FORMAT       (0x80040004)

/*
    The delta print ticket parameter passed to 
    PTMergeAndValidatePrintTicket did not
    follow PrintTicket framework specification or
    the XML could not be parsed.
*/
#define E_DELTA_PRINTTICKET_FORMAT       (0x80040005)

/*
PrintDeviceCapabilities document generated by the driver
did not follow the specification.  This indicates an
error in the driver.
*/
#define E_PRINTDEVICECAPABILITIES_FORMAT       (0x80040006)

typedef enum tagEDefaultDevmodeType
{
    kUserDefaultDevmode,
    kPrinterDefaultDevmode
} EDefaultDevmodeType;

typedef enum 
{
    kPTPageScope,
    kPTDocumentScope,
    kPTJobScope
} EPrintTicketScope;


HRESULT WINAPI
PTQuerySchemaVersionSupport(
            _In_        PCWSTR       pszPrinterName,
            _Out_       DWORD       *pMaxVersion
            );

HRESULT WINAPI
PTOpenProvider( 
            _In_        PCWSTR       pszPrinterName,
                        DWORD        dwVersion,
            _Out_       HPTPROVIDER *phProvider
            );

HRESULT WINAPI
PTOpenProviderEx( 
            _In_  PCWSTR       pszPrinterName,
                  DWORD        dwMaxVersion,
                  DWORD        dwPrefVersion,
            _Out_ HPTPROVIDER *phProvider,
            _Out_ DWORD       *pUsedVersion
            );

HRESULT WINAPI
PTCloseProvider(
            _In_  HPTPROVIDER hProvider
            );

HRESULT WINAPI
PTReleaseMemory(
    _In_ PVOID pBuffer
    );
    
HRESULT WINAPI
PTGetPrintCapabilities( 
            _In_            HPTPROVIDER         hProvider,
            _In_opt_        IStream            *pPrintTicket,
            _Inout_         IStream            *pCapabilities,
            _Out_opt_       BSTR               *pbstrErrorMessage
            );

HRESULT WINAPI
PTGetPrintDeviceCapabilities(
    _In_            HPTPROVIDER         hProvider,
    _In_opt_        IStream            *pPrintTicket,
    _Inout_         IStream            *pDeviceCapabilities,
    _Out_opt_       BSTR               *pbstrErrorMessage
    );

HRESULT WINAPI
PTGetPrintDeviceResources(
    _In_            HPTPROVIDER         hProvider,
    _In_            LPCWSTR             pszLocaleName,
    _In_opt_        IStream            *pPrintTicket,
    _Inout_         IStream            *pDeviceResources,
    _Out_opt_       BSTR               *pbstrErrorMessage
);

HRESULT WINAPI
PTMergeAndValidatePrintTicket(
            _In_            HPTPROVIDER        hProvider,
            _In_            IStream           *pBaseTicket,
            _In_opt_        IStream           *pDeltaTicket,
            _In_            EPrintTicketScope  scope,
            _Inout_         IStream           *pResultTicket, 
            _Out_opt_       BSTR              *pbstrErrorMessage 
            );

HRESULT WINAPI
PTConvertPrintTicketToDevMode( 
            _In_                     HPTPROVIDER          hProvider,
            _In_                     IStream             *pPrintTicket,
                                     EDefaultDevmodeType  baseDevmodeType,
            _In_                     EPrintTicketScope  scope,
            _Out_                    ULONG               *pcbDevmode,
            _Outptr_result_bytebuffer_(*pcbDevmode) OUT PDEVMODE *ppDevmode,
            _Out_opt_                BSTR                *pbstrErrorMessage 
            );
        
HRESULT WINAPI
PTConvertDevModeToPrintTicket( 
            _In_        HPTPROVIDER        hProvider,
                        ULONG              cbDevmode,
            _In_        PDEVMODE           pDevmode,
            _In_        EPrintTicketScope  scope,
            _Inout_     IStream           *pPrintTicket
            );
        
#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif /* _PRNPTNTV_H_ */

