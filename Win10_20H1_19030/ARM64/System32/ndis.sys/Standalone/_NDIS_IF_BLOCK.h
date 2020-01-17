typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _NET_LUID_LH
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Reserved : 24; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NetLuidIndex : 24; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 IfType : 16; /* bit position: 48 */
      }; /* bitfield */
    } /* size: 0x0008 */ Info;
  }; /* size: 0x0008 */
} NET_LUID_LH, *PNET_LUID_LH; /* size: 0x0008 */

enum NdisIfBlockSource
{
  NdisIfBlockSourcePublicApi = 0,
  NdisIfBlockSourcePersistedNetSetup = 1,
  NdisIfBlockSourceAutomaticLwFilter = 2,
  NdisIfBlockSourceAutomaticLoopback = 3,
};

typedef enum _NDIS_MINIPORT_EVENT
{
  NdisMEvent_Unknown = 0,
  NdisMEventDx_SystemSleep = 1,
  NdisMEventDx_NicQuiet = 2,
  NdisMEventDx_SSIdle = 3,
  NdisMEventDx_D3DTimeout = 4,
  NdisMEventD0_SystemResume = 5,
  NdisMEventD0_NicActive = 6,
  NdisMEventD0_AoAcWake = 7,
  NdisMEventD0_SSResume = 8,
  NdisMEventD0_D3DCancel = 9,
  NdisMEventD0_D3DWake = 10,
  NdisMEventD0_D3DResume = 11,
  NdisMEventD0_Complete = 12,
  NdisMEventD0_SSComplete = 13,
  NdisMEventDx_Complete = 14,
  NdisMEventDx_SSComplete = 15,
  NdisMEvent_SSCancelIdle = 16,
  NdisMEvent_SSIdleComplete = 17,
  NdisMEvent_SSIdleReq = 18,
  NdisMEvent_SSIdleConfirm = 19,
  NdisMEventD0_AoAcSurpriseWake = 20,
  NdisMEvent_DeviceAdded = 31,
  NdisMEvent_DeviceStart = 32,
  NdisMEvent_DeviceQueryRemove = 33,
  NdisMEvent_DeviceCancelRemove = 34,
  NdisMEvent_DeviceRemove = 35,
  NdisMEvent_DeviceSurpriseRemoval = 36,
  NdisMEvent_DeviceQueryStop = 37,
  NdisMEvent_DeviceCancelStop = 38,
  NdisMEvent_DeviceStop = 39,
  NdisMEvent_MiniportInitialized = 51,
  NdisMEvent_MiniportHalted = 52,
  NdisMEvent_MiniportPaused = 53,
  NdisMEvent_MiniportRestarted = 54,
  NdisMEvent_MiniportPmInitialized = 55,
  NdisMEventErr_Min = 70,
  NdisMEventErr_UserRequested = 70,
  NdisMEventErr_MiniportRequested = 71,
  NdisMEventErr_FailedIMInitDevice = 72,
  NdisMEventErr_FailedRestart = 73,
  NdisMEventErr_FailedPowerD0 = 74,
  NdisMEventErr_FailedPowerDx = 75,
  NdisMEventErr_UninstalledByUsermode = 76,
  NdisMEventErr_Max = 76,
} NDIS_MINIPORT_EVENT, *PNDIS_MINIPORT_EVENT;

typedef enum _NDIS_NSI_INTERFACE_PURPOSE
{
  NDIS_NSI_INTERFACE_PURPOSE_DEFAULT = 0,
  NDIS_NSI_INTERFACE_PURPOSE_INTERNAL_VSWITCH_NIC = 1,
  NDIS_NSI_INTERFACE_PURPOSE_MAX = 2,
} NDIS_NSI_INTERFACE_PURPOSE, *PNDIS_NSI_INTERFACE_PURPOSE;

typedef struct _NDIS_IF_BLOCK
{
  /* 0x04d0 */ struct _LIST_ENTRY Link;
  /* 0x04e0 */ struct _LIST_ENTRY ProviderLink;
  /* 0x04f0 */ struct _LIST_ENTRY NetworkLink;
  /* 0x0500 */ struct _NDIS_IF_RCV_ADDRESS* ifRcvAddressTable;
  /* 0x0508 */ unsigned long ifRcvAddressCount;
  /* 0x050c */ unsigned long ifMaxRcvAddressCount;
  /* 0x0510 */ unsigned long LowerLayerIfCount;
  /* 0x0514 */ unsigned long HigherLayerIfCount;
  /* 0x0518 */ long Ref;
  /* 0x0520 */ union _NET_LUID_LH NetLuid;
  /* 0x0528 */ void* ProviderIfContext;
  /* 0x0530 */ struct _NDIS_IF_PROVIDER_BLOCK* ProviderHandle;
  /* 0x0538 */ unsigned long Flags;
  /* 0x053c */ unsigned long WanTunnelType;
  /* 0x0540 */ unsigned long PortNumber;
  /* 0x0548 */ unsigned __int64 ifLastChange;
  /* 0x0550 */ unsigned __int64 ifCounterDiscontinuityTime;
  /* 0x0558 */ struct _NDIS_IF_NETWORK_BLOCK* Network;
  /* 0x0560 */ struct _NDIS_IF_COMPARTMENT_BLOCK* Compartment;
  /* 0x0568 */ struct _KEVENT* AsyncEvent;
  /* 0x0570 */ unsigned char AlreadyDeregistered;
  /* 0x0571 */ unsigned char bNdisIsProvider;
  /* 0x0572 */ unsigned char IsNdisFilter;
  /* 0x0573 */ unsigned char MiniportAvailable;
  /* 0x0574 */ unsigned long MiniportLinkReference;
  /* 0x0578 */ enum NdisIfBlockSource Source;
  union
  {
    /* 0x0580 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
    /* 0x0580 */ struct _NDIS_FILTER_BLOCK* Filter;
  }; /* size: 0x0008 */
  /* 0x0588 */ unsigned long SupportedStatistics;
  /* 0x0590 */ struct _IF_COUNTED_STRING_LH* ifL2NetworkInfo;
  /* 0x0598 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
  /* 0x05a0 */ struct NDIS_REFCOUNT_HANDLE__* MpRefCountTracker;
  /* 0x05a8 */ unsigned long InterlockedFlags;
  /* 0x05ac */ enum _NDIS_MINIPORT_EVENT LastMiniportFatalErrorReason;
  /* 0x05b0 */ unsigned __int64 MiniportFatalErrorTimestamp[3];
  /* 0x05c8 */ unsigned char MiniportFatalErrorTimestampIndex;
  /* 0x05c9 */ unsigned char NetworkIdOverridden;
  /* 0x05ca */ unsigned char IsWDFMiniportInterface;
  /* 0x05cc */ enum _NDIS_NSI_INTERFACE_PURPOSE ifPurpose;
  /* 0x05d0 */ struct _NDIS_PCW_DATA_BLOCK* PcwDataBlock;
} NDIS_IF_BLOCK, *PNDIS_IF_BLOCK; /* size: 0x05d8 */

