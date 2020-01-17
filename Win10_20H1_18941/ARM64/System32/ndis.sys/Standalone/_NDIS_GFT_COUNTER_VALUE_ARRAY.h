typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFT_COUNTER_VALUE_ARRAY
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long TableId;
  union
  {
    union
    {
      /* 0x0010 */ unsigned __int64 FlowEntryId;
      /* 0x0010 */ unsigned long CounterId;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ StartId;
  /* 0x0018 */ unsigned long NumCounters;
  /* 0x001c */ unsigned long CounterValueArrayOffset;
  /* 0x0020 */ unsigned long CounterValueArrayNumElements;
  /* 0x0024 */ unsigned long CounterValueArrayElementSize;
} NDIS_GFT_COUNTER_VALUE_ARRAY, *PNDIS_GFT_COUNTER_VALUE_ARRAY; /* size: 0x0028 */

