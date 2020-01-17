typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef union _NET_BUFFER_DATA_LENGTH
{
  union
  {
    /* 0x0000 */ unsigned long DataLength;
    /* 0x0000 */ unsigned long stDataLength;
  }; /* size: 0x0004 */
} NET_BUFFER_DATA_LENGTH, *PNET_BUFFER_DATA_LENGTH; /* size: 0x0004 */

typedef struct _NET_BUFFER_DATA
{
  /* 0x0000 */ struct _NET_BUFFER* Next;
  /* 0x0004 */ struct _MDL* CurrentMdl;
  /* 0x0008 */ unsigned long CurrentMdlOffset;
  /* 0x000c */ union _NET_BUFFER_DATA_LENGTH NbDataLength;
  /* 0x0010 */ struct _MDL* MdlChain;
  /* 0x0014 */ unsigned long DataOffset;
} NET_BUFFER_DATA, *PNET_BUFFER_DATA; /* size: 0x0018 */

typedef union _NET_BUFFER_HEADER
{
  union
  {
    /* 0x0000 */ struct _NET_BUFFER_DATA NetBufferData;
    /* 0x0000 */ union _SLIST_HEADER Link;
  }; /* size: 0x0018 */
} NET_BUFFER_HEADER, *PNET_BUFFER_HEADER; /* size: 0x0018 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _NET_BUFFER
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _NET_BUFFER* Next;
      /* 0x0004 */ struct _MDL* CurrentMdl;
      /* 0x0008 */ unsigned long CurrentMdlOffset;
      union
      {
        /* 0x000c */ unsigned long DataLength;
        struct
        {
          /* 0x000c */ unsigned long stDataLength;
          /* 0x0010 */ struct _MDL* MdlChain;
          /* 0x0014 */ unsigned long DataOffset;
        }; /* size: 0x000c */
      }; /* size: 0x000c */
    }; /* size: 0x0018 */
    /* 0x0000 */ union _SLIST_HEADER Link;
    /* 0x0000 */ union _NET_BUFFER_HEADER NetBufferHeader;
  }; /* size: 0x0018 */
  /* 0x0018 */ unsigned short ChecksumBias;
  /* 0x001a */ unsigned short Reserved;
  /* 0x001c */ void* NdisPoolHandle;
  /* 0x0020 */ void* NdisReserved[2];
  /* 0x0028 */ void* ProtocolReserved[6];
  /* 0x0040 */ void* MiniportReserved[4];
  /* 0x0050 */ union _LARGE_INTEGER DataPhysicalAddress;
  union
  {
    /* 0x0058 */ struct _NET_BUFFER_SHARED_MEMORY* SharedMemoryInfo;
    /* 0x0058 */ struct _SCATTER_GATHER_LIST* ScatterGatherList;
  }; /* size: 0x0004 */
  /* 0x005c */ long __PADDING__[1];
} NET_BUFFER, *PNET_BUFFER; /* size: 0x0060 */

