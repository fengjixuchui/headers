typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KDEVICE_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceListEntry;
  /* 0x0008 */ unsigned long SortKey;
  /* 0x000c */ unsigned char Inserted;
  /* 0x000d */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0010 */

typedef struct _WAIT_CONTEXT_BLOCK
{
  union
  {
    /* 0x0000 */ struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY DmaWaitEntry;
      /* 0x0008 */ unsigned long NumberOfChannels;
      struct /* bitfield */
      {
        /* 0x000c */ unsigned long SyncCallback : 1; /* bit position: 0 */
        /* 0x000c */ unsigned long DmaContext : 1; /* bit position: 1 */
        /* 0x000c */ unsigned long ZeroMapRegisters : 1; /* bit position: 2 */
        /* 0x000c */ unsigned long Reserved : 9; /* bit position: 3 */
        /* 0x000c */ unsigned long NumberOfRemapPages : 20; /* bit position: 12 */
      }; /* bitfield */
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0010 */ void* DeviceRoutine /* function */;
  /* 0x0014 */ void* DeviceContext;
  /* 0x0018 */ unsigned long NumberOfMapRegisters;
  /* 0x001c */ void* DeviceObject;
  /* 0x0020 */ void* CurrentIrp;
  /* 0x0024 */ struct _KDPC* BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK; /* size: 0x0028 */

typedef struct _DMA_TRANSFER_CONTEXT_V1
{
  /* 0x0000 */ long DmaState;
  /* 0x0004 */ unsigned long TransferState;
  /* 0x0008 */ struct _WAIT_CONTEXT_BLOCK Wcb;
  /* 0x0030 */ void* HalWcb;
} DMA_TRANSFER_CONTEXT_V1, *PDMA_TRANSFER_CONTEXT_V1; /* size: 0x0034 */

typedef struct _DMA_TRANSFER_CONTEXT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ struct _DMA_TRANSFER_CONTEXT_V1 V1;
} DMA_TRANSFER_CONTEXT, *PDMA_TRANSFER_CONTEXT; /* size: 0x0038 */

