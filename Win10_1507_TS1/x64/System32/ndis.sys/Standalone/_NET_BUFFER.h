typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef union _NET_BUFFER_DATA_LENGTH
{
  union
  {
    /* 0x0000 */ unsigned long DataLength;
    /* 0x0000 */ unsigned __int64 stDataLength;
  }; /* size: 0x0008 */
} NET_BUFFER_DATA_LENGTH, *PNET_BUFFER_DATA_LENGTH; /* size: 0x0008 */

typedef struct _NET_BUFFER_DATA
{
  /* 0x0000 */ struct _NET_BUFFER* Next;
  /* 0x0008 */ struct _MDL* CurrentMdl;
  /* 0x0010 */ unsigned long CurrentMdlOffset;
  /* 0x0018 */ union _NET_BUFFER_DATA_LENGTH NbDataLength;
  /* 0x0020 */ struct _MDL* MdlChain;
  /* 0x0028 */ unsigned long DataOffset;
  /* 0x002c */ long __PADDING__[1];
} NET_BUFFER_DATA, *PNET_BUFFER_DATA; /* size: 0x0030 */

typedef union _NET_BUFFER_HEADER
{
  union
  {
    /* 0x0000 */ struct _NET_BUFFER_DATA NetBufferData;
    /* 0x0000 */ union _SLIST_HEADER Link;
  }; /* size: 0x0030 */
} NET_BUFFER_HEADER, *PNET_BUFFER_HEADER; /* size: 0x0030 */

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
      /* 0x0008 */ struct _MDL* CurrentMdl;
      /* 0x0010 */ unsigned long CurrentMdlOffset;
      union
      {
        /* 0x0018 */ unsigned long DataLength;
        struct
        {
          /* 0x0018 */ unsigned __int64 stDataLength;
          /* 0x0020 */ struct _MDL* MdlChain;
          /* 0x0028 */ unsigned long DataOffset;
        }; /* size: 0x0014 */
      }; /* size: 0x0014 */
    }; /* size: 0x0028 */
    /* 0x0000 */ union _SLIST_HEADER Link;
    /* 0x0000 */ union _NET_BUFFER_HEADER NetBufferHeader;
  }; /* size: 0x0030 */
  /* 0x0030 */ unsigned short ChecksumBias;
  /* 0x0032 */ unsigned short Reserved;
  /* 0x0038 */ void* NdisPoolHandle;
  /* 0x0040 */ void* NdisReserved[2];
  /* 0x0050 */ void* ProtocolReserved[6];
  /* 0x0080 */ void* MiniportReserved[4];
  /* 0x00a0 */ union _LARGE_INTEGER DataPhysicalAddress;
  union
  {
    /* 0x00a8 */ struct _NET_BUFFER_SHARED_MEMORY* SharedMemoryInfo;
    /* 0x00a8 */ struct _SCATTER_GATHER_LIST* ScatterGatherList;
  }; /* size: 0x0008 */
} NET_BUFFER, *PNET_BUFFER; /* size: 0x00b0 */

