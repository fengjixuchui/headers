typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_RECEIVE_QUEUE_TYPE
{
  NdisReceiveQueueTypeUnspecified = 0,
  NdisReceiveQueueTypeVMQueue = 1,
  NdisReceiveQueueTypeMaximum = 2,
} NDIS_RECEIVE_QUEUE_TYPE, *PNDIS_RECEIVE_QUEUE_TYPE;

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

typedef struct _NDIS_RECEIVE_QUEUE_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_RECEIVE_QUEUE_TYPE QueueType;
  /* 0x000c */ unsigned long QueueId;
  /* 0x0010 */ unsigned long QueueGroupId;
  /* 0x0018 */ struct _GROUP_AFFINITY ProcessorAffinity;
  /* 0x0028 */ unsigned long NumSuggestedReceiveBuffers;
  /* 0x002c */ unsigned long MSIXTableEntry;
  /* 0x0030 */ unsigned long LookaheadSize;
  /* 0x0034 */ struct _IF_COUNTED_STRING_LH VmName;
  /* 0x0238 */ struct _IF_COUNTED_STRING_LH QueueName;
  /* 0x043c */ unsigned long PortId;
  /* 0x0440 */ unsigned long InterruptCoalescingDomainId;
  /* 0x0444 */ unsigned long QosSqId;
} NDIS_RECEIVE_QUEUE_PARAMETERS, *PNDIS_RECEIVE_QUEUE_PARAMETERS; /* size: 0x0448 */

