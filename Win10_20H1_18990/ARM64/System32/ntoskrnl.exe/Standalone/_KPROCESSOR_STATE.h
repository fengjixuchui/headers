typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned __int64 Elr_El1;
  /* 0x0008 */ unsigned int Spsr_El1;
  /* 0x0010 */ unsigned __int64 Tpidr_El0;
  /* 0x0018 */ unsigned __int64 Tpidrro_El0;
  /* 0x0020 */ unsigned __int64 Tpidr_El1;
  /* 0x0028 */ unsigned __int64 KernelBvr[8];
  /* 0x0068 */ unsigned long KernelBcr[8];
  /* 0x0088 */ unsigned __int64 KernelWvr[2];
  /* 0x0098 */ unsigned long KernelWcr[2];
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00a0 */

typedef struct _KARM64_ARCH_STATE
{
  /* 0x0000 */ unsigned __int64 Midr_El1;
  /* 0x0008 */ unsigned __int64 Sctlr_El1;
  /* 0x0010 */ unsigned __int64 Actlr_El1;
  /* 0x0018 */ unsigned __int64 Cpacr_El1;
  /* 0x0020 */ unsigned __int64 Tcr_El1;
  /* 0x0028 */ unsigned __int64 Ttbr0_El1;
  /* 0x0030 */ unsigned __int64 Ttbr1_El1;
  /* 0x0038 */ unsigned __int64 Esr_El1;
  /* 0x0040 */ unsigned __int64 Far_El1;
  /* 0x0048 */ unsigned __int64 Pmcr_El0;
  /* 0x0050 */ unsigned __int64 Pmcntenset_El0;
  /* 0x0058 */ unsigned __int64 Pmccntr_El0;
  /* 0x0060 */ unsigned __int64 Pmxevcntr_El0[31];
  /* 0x0158 */ unsigned __int64 Pmxevtyper_El0[31];
  /* 0x0250 */ unsigned __int64 Pmovsclr_El0;
  /* 0x0258 */ unsigned __int64 Pmselr_El0;
  /* 0x0260 */ unsigned __int64 Pmuserenr_El0;
  /* 0x0268 */ unsigned __int64 Mair_El1;
  /* 0x0270 */ unsigned __int64 Vbar_El1;
} KARM64_ARCH_STATE, *PKARM64_ARCH_STATE; /* size: 0x0278 */

typedef union _ARM64_NT_NEON128
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Low;
      /* 0x0008 */ __int64 High;
    }; /* size: 0x0010 */
    /* 0x0000 */ double D[2];
    /* 0x0000 */ float S[4];
    /* 0x0000 */ unsigned short H[8];
    /* 0x0000 */ unsigned char B[16];
  }; /* size: 0x0010 */
} ARM64_NT_NEON128, *PARM64_NT_NEON128; /* size: 0x0010 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Cpsr;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned __int64 X0;
      /* 0x0010 */ unsigned __int64 X1;
      /* 0x0018 */ unsigned __int64 X2;
      /* 0x0020 */ unsigned __int64 X3;
      /* 0x0028 */ unsigned __int64 X4;
      /* 0x0030 */ unsigned __int64 X5;
      /* 0x0038 */ unsigned __int64 X6;
      /* 0x0040 */ unsigned __int64 X7;
      /* 0x0048 */ unsigned __int64 X8;
      /* 0x0050 */ unsigned __int64 X9;
      /* 0x0058 */ unsigned __int64 X10;
      /* 0x0060 */ unsigned __int64 X11;
      /* 0x0068 */ unsigned __int64 X12;
      /* 0x0070 */ unsigned __int64 X13;
      /* 0x0078 */ unsigned __int64 X14;
      /* 0x0080 */ unsigned __int64 X15;
      /* 0x0088 */ unsigned __int64 X16;
      /* 0x0090 */ unsigned __int64 X17;
      /* 0x0098 */ unsigned __int64 X18;
      /* 0x00a0 */ unsigned __int64 X19;
      /* 0x00a8 */ unsigned __int64 X20;
      /* 0x00b0 */ unsigned __int64 X21;
      /* 0x00b8 */ unsigned __int64 X22;
      /* 0x00c0 */ unsigned __int64 X23;
      /* 0x00c8 */ unsigned __int64 X24;
      /* 0x00d0 */ unsigned __int64 X25;
      /* 0x00d8 */ unsigned __int64 X26;
      /* 0x00e0 */ unsigned __int64 X27;
      /* 0x00e8 */ unsigned __int64 X28;
      /* 0x00f0 */ unsigned __int64 Fp;
      /* 0x00f8 */ unsigned __int64 Lr;
    }; /* size: 0x00f8 */
    /* 0x0008 */ unsigned __int64 X[31];
  }; /* size: 0x00f8 */
  /* 0x0100 */ unsigned __int64 Sp;
  /* 0x0108 */ unsigned __int64 Pc;
  /* 0x0110 */ union _ARM64_NT_NEON128 V[32];
  /* 0x0310 */ unsigned long Fpcr;
  /* 0x0314 */ unsigned long Fpsr;
  /* 0x0318 */ unsigned long Bcr[8];
  /* 0x0338 */ unsigned __int64 Bvr[8];
  /* 0x0378 */ unsigned long Wcr[2];
  /* 0x0380 */ unsigned __int64 Wvr[2];
} CONTEXT, *PCONTEXT; /* size: 0x0390 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _KSPECIAL_REGISTERS SpecialRegisters;
  /* 0x00a0 */ struct _KARM64_ARCH_STATE ArchState;
  /* 0x0320 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x06b0 */

