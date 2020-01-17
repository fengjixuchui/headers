typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFT_PROFILE_INFO_ARRAY
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long ProfileInfoArrayOffset;
  /* 0x000c */ unsigned long ProfileInfoArrayNumElements;
  /* 0x0010 */ unsigned long ProfileInfoArrayElementSize;
} NDIS_GFT_PROFILE_INFO_ARRAY, *PNDIS_GFT_PROFILE_INFO_ARRAY; /* size: 0x0014 */

