typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0008 */ void* StackBase;
  /* 0x0010 */ void* StackLimit;
  /* 0x0018 */ void* SubSystemTib;
  union
  {
    /* 0x0020 */ void* FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* ArbitraryUserPointer;
  /* 0x0030 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x0038 */

typedef struct _KDESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad[3];
  /* 0x0006 */ unsigned short Limit;
  /* 0x0008 */ void* Base;
} KDESCRIPTOR, *PKDESCRIPTOR; /* size: 0x0010 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned __int64 Cr0;
  /* 0x0008 */ unsigned __int64 Cr2;
  /* 0x0010 */ unsigned __int64 Cr3;
  /* 0x0018 */ unsigned __int64 Cr4;
  /* 0x0020 */ unsigned __int64 KernelDr0;
  /* 0x0028 */ unsigned __int64 KernelDr1;
  /* 0x0030 */ unsigned __int64 KernelDr2;
  /* 0x0038 */ unsigned __int64 KernelDr3;
  /* 0x0040 */ unsigned __int64 KernelDr6;
  /* 0x0048 */ unsigned __int64 KernelDr7;
  /* 0x0050 */ struct _KDESCRIPTOR Gdtr;
  /* 0x0060 */ struct _KDESCRIPTOR Idtr;
  /* 0x0070 */ unsigned short Tr;
  /* 0x0072 */ unsigned short Ldtr;
  /* 0x0074 */ unsigned long MxCsr;
  /* 0x0078 */ unsigned __int64 DebugControl;
  /* 0x0080 */ unsigned __int64 LastBranchToRip;
  /* 0x0088 */ unsigned __int64 LastBranchFromRip;
  /* 0x0090 */ unsigned __int64 LastExceptionToRip;
  /* 0x0098 */ unsigned __int64 LastExceptionFromRip;
  /* 0x00a0 */ unsigned __int64 Cr8;
  /* 0x00a8 */ unsigned __int64 MsrGsBase;
  /* 0x00b0 */ unsigned __int64 MsrGsSwap;
  /* 0x00b8 */ unsigned __int64 MsrStar;
  /* 0x00c0 */ unsigned __int64 MsrLStar;
  /* 0x00c8 */ unsigned __int64 MsrCStar;
  /* 0x00d0 */ unsigned __int64 MsrSyscallMask;
  /* 0x00d8 */ unsigned __int64 Xcr0;
  /* 0x00e0 */ unsigned __int64 MsrFsBase;
  /* 0x00e8 */ unsigned __int64 SpecialPadding0;
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00f0 */

typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _XSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XSAVE_FORMAT, *PXSAVE_FORMAT; /* size: 0x0200 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 P6Home;
  /* 0x0030 */ unsigned long ContextFlags;
  /* 0x0034 */ unsigned long MxCsr;
  /* 0x0038 */ unsigned short SegCs;
  /* 0x003a */ unsigned short SegDs;
  /* 0x003c */ unsigned short SegEs;
  /* 0x003e */ unsigned short SegFs;
  /* 0x0040 */ unsigned short SegGs;
  /* 0x0042 */ unsigned short SegSs;
  /* 0x0044 */ unsigned long EFlags;
  /* 0x0048 */ unsigned __int64 Dr0;
  /* 0x0050 */ unsigned __int64 Dr1;
  /* 0x0058 */ unsigned __int64 Dr2;
  /* 0x0060 */ unsigned __int64 Dr3;
  /* 0x0068 */ unsigned __int64 Dr6;
  /* 0x0070 */ unsigned __int64 Dr7;
  /* 0x0078 */ unsigned __int64 Rax;
  /* 0x0080 */ unsigned __int64 Rcx;
  /* 0x0088 */ unsigned __int64 Rdx;
  /* 0x0090 */ unsigned __int64 Rbx;
  /* 0x0098 */ unsigned __int64 Rsp;
  /* 0x00a0 */ unsigned __int64 Rbp;
  /* 0x00a8 */ unsigned __int64 Rsi;
  /* 0x00b0 */ unsigned __int64 Rdi;
  /* 0x00b8 */ unsigned __int64 R8;
  /* 0x00c0 */ unsigned __int64 R9;
  /* 0x00c8 */ unsigned __int64 R10;
  /* 0x00d0 */ unsigned __int64 R11;
  /* 0x00d8 */ unsigned __int64 R12;
  /* 0x00e0 */ unsigned __int64 R13;
  /* 0x00e8 */ unsigned __int64 R14;
  /* 0x00f0 */ unsigned __int64 R15;
  /* 0x00f8 */ unsigned __int64 Rip;
  union
  {
    /* 0x0100 */ struct _XSAVE_FORMAT FltSave;
    struct
    {
      /* 0x0100 */ struct _M128A Header[2];
      /* 0x0120 */ struct _M128A Legacy[8];
      /* 0x01a0 */ struct _M128A Xmm0;
      /* 0x01b0 */ struct _M128A Xmm1;
      /* 0x01c0 */ struct _M128A Xmm2;
      /* 0x01d0 */ struct _M128A Xmm3;
      /* 0x01e0 */ struct _M128A Xmm4;
      /* 0x01f0 */ struct _M128A Xmm5;
      /* 0x0200 */ struct _M128A Xmm6;
      /* 0x0210 */ struct _M128A Xmm7;
      /* 0x0220 */ struct _M128A Xmm8;
      /* 0x0230 */ struct _M128A Xmm9;
      /* 0x0240 */ struct _M128A Xmm10;
      /* 0x0250 */ struct _M128A Xmm11;
      /* 0x0260 */ struct _M128A Xmm12;
      /* 0x0270 */ struct _M128A Xmm13;
      /* 0x0280 */ struct _M128A Xmm14;
      /* 0x0290 */ struct _M128A Xmm15;
    }; /* size: 0x01a0 */
  }; /* size: 0x0200 */
  /* 0x0300 */ struct _M128A VectorRegister[26];
  /* 0x04a0 */ unsigned __int64 VectorControl;
  /* 0x04a8 */ unsigned __int64 DebugControl;
  /* 0x04b0 */ unsigned __int64 LastBranchToRip;
  /* 0x04b8 */ unsigned __int64 LastBranchFromRip;
  /* 0x04c0 */ unsigned __int64 LastExceptionToRip;
  /* 0x04c8 */ unsigned __int64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT; /* size: 0x04d0 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _KSPECIAL_REGISTERS SpecialRegisters;
  /* 0x00f0 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x05c0 */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned long MxCsr;
  /* 0x0004 */ unsigned char LegacyNumber;
  /* 0x0005 */ unsigned char ReservedMustBeZero;
  /* 0x0006 */ unsigned char InterruptRequest;
  /* 0x0007 */ unsigned char IdleHalt;
  /* 0x0008 */ struct _KTHREAD* CurrentThread;
  /* 0x0010 */ struct _KTHREAD* NextThread;
  /* 0x0018 */ struct _KTHREAD* IdleThread;
  /* 0x0020 */ unsigned char NestingLevel;
  /* 0x0021 */ unsigned char ClockOwner;
  union
  {
    /* 0x0022 */ unsigned char PendingTickFlags;
    struct /* bitfield */
    {
      /* 0x0022 */ unsigned char PendingTick : 1; /* bit position: 0 */
      /* 0x0022 */ unsigned char PendingBackupTick : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0023 */ unsigned char IdleState;
  /* 0x0024 */ unsigned long Number;
  /* 0x0028 */ unsigned __int64 RspBase;
  /* 0x0030 */ unsigned __int64 PrcbLock;
  /* 0x0038 */ char* PriorityState;
  /* 0x0040 */ char CpuType;
  /* 0x0041 */ char CpuID;
  union
  {
    /* 0x0042 */ unsigned short CpuStep;
    struct
    {
      /* 0x0042 */ unsigned char CpuStepping;
      /* 0x0043 */ unsigned char CpuModel;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0044 */ unsigned long MHz;
  /* 0x0048 */ unsigned __int64 HalReserved[8];
  /* 0x0088 */ unsigned short MinorVersion;
  /* 0x008a */ unsigned short MajorVersion;
  /* 0x008c */ unsigned char BuildType;
  /* 0x008d */ unsigned char CpuVendor;
  /* 0x008e */ unsigned char CoresPerPhysicalProcessor;
  /* 0x008f */ unsigned char LogicalProcessorsPerCore;
  /* 0x0090 */ unsigned __int64 TscFrequency;
  /* 0x0098 */ unsigned __int64 PrcbPad04[5];
  /* 0x00c0 */ struct _KNODE* ParentNode;
  /* 0x00c8 */ unsigned __int64 GroupSetMember;
  /* 0x00d0 */ unsigned char Group;
  /* 0x00d1 */ unsigned char GroupIndex;
  /* 0x00d2 */ unsigned char PrcbPad05[2];
  /* 0x00d4 */ unsigned long InitialApicId;
  /* 0x00d8 */ unsigned long ScbOffset;
  /* 0x00dc */ unsigned long ApicMask;
  /* 0x00e0 */ void* AcpiReserved;
  /* 0x00e8 */ unsigned long CFlushSize;
  union
  {
    struct
    {
      /* 0x00f0 */ unsigned __int64 TrappedSecurityDomain;
      union
      {
        /* 0x00f8 */ unsigned char BpbState;
        struct
        {
          struct /* bitfield */
          {
            /* 0x00f8 */ unsigned char BpbCpuIdle : 1; /* bit position: 0 */
            /* 0x00f8 */ unsigned char BpbFlushRsbOnTrap : 1; /* bit position: 1 */
            /* 0x00f8 */ unsigned char BpbIbpbOnReturn : 1; /* bit position: 2 */
            /* 0x00f8 */ unsigned char BpbIbpbOnTrap : 1; /* bit position: 3 */
            /* 0x00f8 */ unsigned char BpbIbpbOnRetpolineExit : 1; /* bit position: 4 */
            /* 0x00f8 */ unsigned char BpbStateReserved : 3; /* bit position: 5 */
          }; /* bitfield */
          union
          {
            /* 0x00f9 */ unsigned char BpbFeatures;
            struct
            {
              struct /* bitfield */
              {
                /* 0x00f9 */ unsigned char BpbClearOnIdle : 1; /* bit position: 0 */
                /* 0x00f9 */ unsigned char BpbEnabled : 1; /* bit position: 1 */
                /* 0x00f9 */ unsigned char BpbSmep : 1; /* bit position: 2 */
                /* 0x00f9 */ unsigned char BpbFeaturesReserved : 5; /* bit position: 3 */
              }; /* bitfield */
              /* 0x00fa */ unsigned char BpbCurrentSpecCtrl;
              /* 0x00fb */ unsigned char BpbKernelSpecCtrl;
              /* 0x00fc */ unsigned char BpbNmiSpecCtrl;
              /* 0x00fd */ unsigned char BpbUserSpecCtrl;
              /* 0x00fe */ volatile short PairRegister;
            }; /* size: 0x0007 */
          }; /* size: 0x0007 */
        }; /* size: 0x0008 */
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    /* 0x00f0 */ unsigned __int64 PrcbPad11[2];
  }; /* size: 0x0010 */
  /* 0x0100 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x06c0 */ struct _XSAVE_AREA_HEADER* ExtendedSupervisorState;
  /* 0x06c8 */ unsigned long ProcessorSignature;
  /* 0x06cc */ unsigned long ProcessorFlags;
  /* 0x06d0 */ unsigned __int64 PrcbPad12a;
  /* 0x06d8 */ unsigned __int64 PrcbPad12[3];
  /* 0x06f0 */ long __PADDING__[4];
} KPRCB, *PKPRCB; /* size: 0x0700 */

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ union _KGDTENTRY64* GdtBase;
      /* 0x0008 */ struct _KTSS64* TssBase;
      /* 0x0010 */ unsigned __int64 UserRsp;
      /* 0x0018 */ struct _KPCR* Self;
      /* 0x0020 */ struct _KPRCB* CurrentPrcb;
      /* 0x0028 */ struct _KSPIN_LOCK_QUEUE* LockArray;
      /* 0x0030 */ void* Used_Self;
    }; /* size: 0x0038 */
  }; /* size: 0x0038 */
  /* 0x0038 */ union _KIDTENTRY64* IdtBase;
  /* 0x0040 */ unsigned __int64 Unused[2];
  /* 0x0050 */ unsigned char Irql;
  /* 0x0051 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x0052 */ unsigned char ObsoleteNumber;
  /* 0x0053 */ unsigned char Fill0;
  /* 0x0054 */ unsigned long Unused0[3];
  /* 0x0060 */ unsigned short MajorVersion;
  /* 0x0062 */ unsigned short MinorVersion;
  /* 0x0064 */ unsigned long StallScaleFactor;
  /* 0x0068 */ void* Unused1[3];
  /* 0x0080 */ unsigned long KernelReserved[15];
  /* 0x00bc */ unsigned long SecondLevelCacheSize;
  /* 0x00c0 */ unsigned long HalReserved[16];
  /* 0x0100 */ unsigned long Unused2;
  /* 0x0108 */ void* KdVersionBlock;
  /* 0x0110 */ void* Unused3;
  /* 0x0118 */ unsigned long PcrAlign1[24];
  /* 0x0180 */ struct _KPRCB Prcb;
} KPCR, *PKPCR; /* size: 0x0880 */

