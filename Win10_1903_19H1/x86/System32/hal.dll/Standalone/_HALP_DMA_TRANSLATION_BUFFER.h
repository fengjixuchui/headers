typedef struct _HALP_DMA_TRANSLATION_BUFFER
{
  /* 0x0000 */ struct _HALP_DMA_TRANSLATION_BUFFER* Next;
  /* 0x0004 */ unsigned long EntryCount;
  /* 0x0008 */ struct _HALP_DMA_TRANSLATION_ENTRY* Entries;
} HALP_DMA_TRANSLATION_BUFFER, *PHALP_DMA_TRANSLATION_BUFFER; /* size: 0x000c */

