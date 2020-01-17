typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY
{
  NdisGftCounterUpdateFrequencyUndefined = 0,
  NdisGftCounterUpdateFrequencyOnQuery = 1,
  NdisGftCounterUpdateFrequencyPerUpdatePeriod = 2,
  NdisGftCounterUpdateFrequencyPerPacket = 3,
  NdisGftCounterUpdateFrequencyMax = 4,
} NDIS_GFT_COUNTER_UPDATE_FREQUENCY, *PNDIS_GFT_COUNTER_UPDATE_FREQUENCY;

typedef enum _NDIS_GFT_COUNTER_TYPE
{
  NdisGftCounterTypeUndefined = 0,
  NdisGftCounterTypePacket = 1,
  NdisGftCounterTypeByte = 2,
  NdisGftCounterTypePacketByte = 3,
  NdisGftCounterTypePacketByteAndState = 4,
  NdisGftCounterTypeMax = 5,
} NDIS_GFT_COUNTER_TYPE, *PNDIS_GFT_COUNTER_TYPE;

typedef enum _NDIS_GFT_FLOW_ENTRY_CACHE_HINT
{
  NdisGftFlowEntryCacheHintUndefined = 0,
  NdisGftFlowEntryCacheHintLowFrequency = 100,
  NdisGftFlowEntryCacheHintMediumFrequency = 200,
  NdisGftFlowEntryCacheHintHighFrequency = 300,
  NdisGftFlowEntryCacheHintMax = 1000,
} NDIS_GFT_FLOW_ENTRY_CACHE_HINT, *PNDIS_GFT_FLOW_ENTRY_CACHE_HINT;

typedef enum _NDIS_GFT_FLOW_ENTRY_STATE
{
  NdisGftFlowEntryStateUndefined = 0,
  NdisGftFlowEntryStateDeactivated = 1,
  NdisGftFlowEntryStateActivated = 2,
  NdisGftFlowEntryStateMax = 3,
} NDIS_GFT_FLOW_ENTRY_STATE, *PNDIS_GFT_FLOW_ENTRY_STATE;

typedef struct _NDIS_GFT_EXACT_MATCH_FLOW_ENTRY
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long TableId;
  /* 0x000c */ unsigned long VPortId;
  /* 0x0010 */ unsigned long MatchProfileId;
  /* 0x0014 */ int MatchRequestStatus;
  /* 0x0018 */ int ActionRequestStatus;
  /* 0x001c */ unsigned long CounterFlags;
  /* 0x0020 */ enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY CounterUpdateFrequency;
  /* 0x0024 */ enum _NDIS_GFT_COUNTER_TYPE CounterType;
  /* 0x0028 */ unsigned long UpdatePeriod;
  union
  {
    union
    {
      /* 0x002c */ volatile struct _NDIS_GFT_PACKET_COUNTER_VALUE* PacketCounterAddress;
      /* 0x002c */ volatile struct _NDIS_GFT_BYTE_COUNTER_VALUE* ByteCounterAddress;
      /* 0x002c */ volatile struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE* PacketByteCounterAddress;
      /* 0x002c */ volatile struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE* PacketByteCounterAndStateAddress;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ CounterValueBuffer;
  /* 0x0030 */ unsigned long HeaderTranspositionProfileId;
  /* 0x0034 */ unsigned long RedirectionVPortId;
  /* 0x0038 */ unsigned long TtlIsOneRedirectionVPortId;
  /* 0x003c */ unsigned long NumCounterObjects;
  /* 0x0040 */ unsigned long CounterIdArray[8];
  /* 0x0060 */ enum _NDIS_GFT_FLOW_ENTRY_CACHE_HINT CacheHint;
  /* 0x0064 */ unsigned long ClientFlowEntryId;
  /* 0x0068 */ unsigned long ProviderFlowEntryId;
  /* 0x006c */ enum _NDIS_GFT_FLOW_ENTRY_STATE FlowEntryState;
  /* 0x0070 */ unsigned long TcpSequenceNumber;
  /* 0x0074 */ unsigned long HeaderGroupExactMatchArrayOffset;
  /* 0x0078 */ unsigned long HeaderGroupExactMatchArrayNumElements;
  /* 0x007c */ unsigned long HeaderGroupExactMatchArrayElementSize;
  /* 0x0080 */ unsigned long HeaderGroupTranspositionArrayOffset;
  /* 0x0084 */ unsigned long HeaderGroupTranspositionArrayNumElements;
  /* 0x0088 */ unsigned long HeaderGroupTranspositionArrayElementSize;
  /* 0x008c */ unsigned long CustomActionOffset;
} NDIS_GFT_EXACT_MATCH_FLOW_ENTRY, *PNDIS_GFT_EXACT_MATCH_FLOW_ENTRY; /* size: 0x0090 */

