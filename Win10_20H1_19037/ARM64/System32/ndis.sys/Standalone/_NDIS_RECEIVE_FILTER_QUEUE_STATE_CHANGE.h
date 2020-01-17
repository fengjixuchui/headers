typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_RECEIVE_FILTER_QUEUE_STATE_CHANGE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long QueueId;
} NDIS_RECEIVE_FILTER_QUEUE_STATE_CHANGE, *PNDIS_RECEIVE_FILTER_QUEUE_STATE_CHANGE; /* size: 0x0008 */

