typedef struct _NDIS_REFCOUNT_TAGGED
{
  /* 0x0000 */ struct _NDIS_REFCOUNT_TAGGED_ENTRY* Tags;
  /* 0x0008 */ unsigned long RefMask[1];
  /* 0x000c */ long __PADDING__[1];
} NDIS_REFCOUNT_TAGGED, *PNDIS_REFCOUNT_TAGGED; /* size: 0x0010 */

