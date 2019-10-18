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

typedef struct _SCATTER_GATHER_ELEMENT
{
  /* 0x0000 */ union _LARGE_INTEGER Address;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ unsigned long Reserved;
} SCATTER_GATHER_ELEMENT, *PSCATTER_GATHER_ELEMENT; /* size: 0x0010 */

typedef struct _SCATTER_GATHER_LIST
{
  /* 0x0000 */ unsigned long NumberOfElements;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ struct _SCATTER_GATHER_ELEMENT* Elements /* zero-length array */;
} SCATTER_GATHER_LIST, *PSCATTER_GATHER_LIST; /* size: 0x0008 */

