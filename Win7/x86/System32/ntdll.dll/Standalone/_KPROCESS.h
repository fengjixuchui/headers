typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
              union
              {
                /* 0x0003 */ unsigned char TimerMiscFlags;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
                  /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KGDTENTRY
{
  /* 0x0000 */ unsigned short LimitLow;
  /* 0x0002 */ unsigned short BaseLow;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned char BaseMid;
        /* 0x0005 */ unsigned char Flags1;
        /* 0x0006 */ unsigned char Flags2;
        /* 0x0007 */ unsigned char BaseHi;
      } /* size: 0x0004 */ Bytes;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long BaseMid : 8; /* bit position: 0 */
          /* 0x0004 */ unsigned long Type : 5; /* bit position: 8 */
          /* 0x0004 */ unsigned long Dpl : 2; /* bit position: 13 */
          /* 0x0004 */ unsigned long Pres : 1; /* bit position: 15 */
          /* 0x0004 */ unsigned long LimitHi : 4; /* bit position: 16 */
          /* 0x0004 */ unsigned long Sys : 1; /* bit position: 20 */
          /* 0x0004 */ unsigned long Reserved_0 : 1; /* bit position: 21 */
          /* 0x0004 */ unsigned long Default_Big : 1; /* bit position: 22 */
          /* 0x0004 */ unsigned long Granularity : 1; /* bit position: 23 */
          /* 0x0004 */ unsigned long BaseHi : 8; /* bit position: 24 */
        }; /* bitfield */
      } /* size: 0x0004 */ Bits;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ HighWord;
} KGDTENTRY, *PKGDTENTRY; /* size: 0x0008 */

typedef struct _KIDTENTRY
{
  /* 0x0000 */ unsigned short Offset;
  /* 0x0002 */ unsigned short Selector;
  /* 0x0004 */ unsigned short Access;
  /* 0x0006 */ unsigned short ExtendedOffset;
} KIDTENTRY, *PKIDTENTRY; /* size: 0x0008 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _KEXECUTE_OPTIONS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ExecuteDisable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char ExecuteEnable : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char DisableThunkEmulation : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char Permanent : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char ExecuteDispatchEnable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned char ImageDispatchEnable : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned char DisableExceptionChainValidation : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned char Spare : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ volatile unsigned char ExecuteOptions;
  }; /* size: 0x0001 */
} KEXECUTE_OPTIONS, *PKEXECUTE_OPTIONS; /* size: 0x0001 */

typedef union _KSTACK_COUNT
{
  union
  {
    /* 0x0000 */ volatile long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ volatile unsigned long State : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long StackCount : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KSTACK_COUNT, *PKSTACK_COUNT; /* size: 0x0004 */

typedef struct _KPROCESS
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY ProfileListHead;
  /* 0x0018 */ unsigned long DirectoryTableBase;
  /* 0x001c */ struct _KGDTENTRY LdtDescriptor;
  /* 0x0024 */ struct _KIDTENTRY Int21Descriptor;
  /* 0x002c */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0034 */ unsigned long ProcessLock;
  /* 0x0038 */ struct _KAFFINITY_EX Affinity;
  /* 0x0044 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x004c */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x0050 */ volatile struct _KAFFINITY_EX ActiveProcessors;
  union
  {
    struct /* bitfield */
    {
      /* 0x005c */ volatile long AutoAlignment : 1; /* bit position: 0 */
      /* 0x005c */ volatile long DisableBoost : 1; /* bit position: 1 */
      /* 0x005c */ volatile long DisableQuantum : 1; /* bit position: 2 */
      /* 0x005c */ volatile unsigned long ActiveGroupsMask : 1; /* bit position: 3 */
      /* 0x005c */ volatile long ReservedFlags : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x005c */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x0060 */ char BasePriority;
  /* 0x0061 */ char QuantumReset;
  /* 0x0062 */ unsigned char Visited;
  /* 0x0063 */ unsigned char Unused3;
  /* 0x0064 */ unsigned long ThreadSeed[1];
  /* 0x0068 */ unsigned short IdealNode[1];
  /* 0x006a */ unsigned short IdealGlobalNode;
  /* 0x006c */ union _KEXECUTE_OPTIONS Flags;
  /* 0x006d */ unsigned char Unused1;
  /* 0x006e */ unsigned short IopmOffset;
  /* 0x0070 */ unsigned long Unused4;
  /* 0x0074 */ union _KSTACK_COUNT StackCount;
  /* 0x0078 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x0080 */ volatile unsigned __int64 CycleTime;
  /* 0x0088 */ unsigned long KernelTime;
  /* 0x008c */ unsigned long UserTime;
  /* 0x0090 */ void* VdmTrapcHandler;
  /* 0x0094 */ long __PADDING__[1];
} KPROCESS, *PKPROCESS; /* size: 0x0098 */

