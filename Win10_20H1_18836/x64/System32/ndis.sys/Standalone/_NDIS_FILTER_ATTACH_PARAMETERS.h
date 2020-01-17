typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef enum _NET_IF_MEDIA_CONNECT_STATE
{
  MediaConnectStateUnknown = 0,
  MediaConnectStateConnected = 1,
  MediaConnectStateDisconnected = 2,
} NET_IF_MEDIA_CONNECT_STATE, *PNET_IF_MEDIA_CONNECT_STATE;

typedef enum _NET_IF_MEDIA_DUPLEX_STATE
{
  MediaDuplexStateUnknown = 0,
  MediaDuplexStateHalf = 1,
  MediaDuplexStateFull = 2,
} NET_IF_MEDIA_DUPLEX_STATE, *PNET_IF_MEDIA_DUPLEX_STATE;

typedef enum _NDIS_MEDIUM
{
  NdisMedium802_3 = 0,
  NdisMedium802_5 = 1,
  NdisMediumFddi = 2,
  NdisMediumWan = 3,
  NdisMediumLocalTalk = 4,
  NdisMediumDix = 5,
  NdisMediumArcnetRaw = 6,
  NdisMediumArcnet878_2 = 7,
  NdisMediumAtm = 8,
  NdisMediumWirelessWan = 9,
  NdisMediumIrda = 10,
  NdisMediumBpc = 11,
  NdisMediumCoWan = 12,
  NdisMedium1394 = 13,
  NdisMediumInfiniBand = 14,
  NdisMediumTunnel = 15,
  NdisMediumNative802_11 = 16,
  NdisMediumLoopback = 17,
  NdisMediumWiMAX = 18,
  NdisMediumIP = 19,
  NdisMediumMax = 20,
} NDIS_MEDIUM, *PNDIS_MEDIUM;

typedef enum _NDIS_PHYSICAL_MEDIUM
{
  NdisPhysicalMediumUnspecified = 0,
  NdisPhysicalMediumWirelessLan = 1,
  NdisPhysicalMediumCableModem = 2,
  NdisPhysicalMediumPhoneLine = 3,
  NdisPhysicalMediumPowerLine = 4,
  NdisPhysicalMediumDSL = 5,
  NdisPhysicalMediumFibreChannel = 6,
  NdisPhysicalMedium1394 = 7,
  NdisPhysicalMediumWirelessWan = 8,
  NdisPhysicalMediumNative802_11 = 9,
  NdisPhysicalMediumBluetooth = 10,
  NdisPhysicalMediumInfiniband = 11,
  NdisPhysicalMediumWiMax = 12,
  NdisPhysicalMediumUWB = 13,
  NdisPhysicalMedium802_3 = 14,
  NdisPhysicalMedium802_5 = 15,
  NdisPhysicalMediumIrda = 16,
  NdisPhysicalMediumWiredWAN = 17,
  NdisPhysicalMediumWiredCoWan = 18,
  NdisPhysicalMediumOther = 19,
  NdisPhysicalMediumNative802_15_4 = 20,
  NdisPhysicalMediumMax = 21,
} NDIS_PHYSICAL_MEDIUM, *PNDIS_PHYSICAL_MEDIUM;

typedef struct _NDIS_FILTER_ATTACH_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long IfIndex;
  /* 0x0008 */ union _NET_LUID_LH NetLuid;
  /* 0x0010 */ struct _UNICODE_STRING* FilterModuleGuidName;
  /* 0x0018 */ unsigned long BaseMiniportIfIndex;
  /* 0x0020 */ struct _UNICODE_STRING* BaseMiniportInstanceName;
  /* 0x0028 */ struct _UNICODE_STRING* BaseMiniportName;
  /* 0x0030 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x0034 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x0038 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0040 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0048 */ enum _NDIS_MEDIUM MiniportMediaType;
  /* 0x004c */ enum _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediaType;
  /* 0x0050 */ void* MiniportMediaSpecificAttributes;
  /* 0x0058 */ struct _NDIS_OFFLOAD* DefaultOffloadConfiguration;
  /* 0x0060 */ unsigned short MacAddressLength;
  /* 0x0062 */ unsigned char CurrentMacAddress[32];
  /* 0x0088 */ union _NET_LUID_LH BaseMiniportNetLuid;
  /* 0x0090 */ unsigned long LowerIfIndex;
  /* 0x0098 */ union _NET_LUID_LH LowerIfNetLuid;
  /* 0x00a0 */ unsigned long Flags;
  /* 0x00a8 */ struct _NDIS_HD_SPLIT_CURRENT_CONFIG* HDSplitCurrentConfig;
  /* 0x00b0 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* ReceiveFilterCapabilities;
  /* 0x00b8 */ struct _DEVICE_OBJECT* MiniportPhysicalDeviceObject;
  /* 0x00c0 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* NicSwitchCapabilities;
  /* 0x00c8 */ unsigned char BaseMiniportIfConnectorPresent;
  /* 0x00d0 */ struct _NDIS_SRIOV_CAPABILITIES* SriovCapabilities;
  /* 0x00d8 */ struct _NDIS_NIC_SWITCH_INFO_ARRAY* NicSwitchArray;
} NDIS_FILTER_ATTACH_PARAMETERS, *PNDIS_FILTER_ATTACH_PARAMETERS; /* size: 0x00e0 */

