typedef struct _NDIS_NBL_TRACKER_BUCKET
{
  /* 0x0000 */ struct PNDIS_PER_PROCESSOR_SLOT__* Slot;
  /* 0x0004 */ long PassiveCounter;
} NDIS_NBL_TRACKER_BUCKET, *PNDIS_NBL_TRACKER_BUCKET; /* size: 0x0008 */

