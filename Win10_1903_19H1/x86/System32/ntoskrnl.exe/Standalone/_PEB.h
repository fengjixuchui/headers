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

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PEB
{
  /* 0x0000 */ unsigned char InheritedAddressSpace;
  /* 0x0001 */ unsigned char ReadImageFileExecOptions;
  /* 0x0002 */ unsigned char BeingDebugged;
  union
  {
    /* 0x0003 */ unsigned char BitField;
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char ImageUsesLargePages : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char IsProtectedProcess : 1; /* bit position: 1 */
      /* 0x0003 */ unsigned char IsImageDynamicallyRelocated : 1; /* bit position: 2 */
      /* 0x0003 */ unsigned char SkipPatchingUser32Forwarders : 1; /* bit position: 3 */
      /* 0x0003 */ unsigned char IsPackagedProcess : 1; /* bit position: 4 */
      /* 0x0003 */ unsigned char IsAppContainer : 1; /* bit position: 5 */
      /* 0x0003 */ unsigned char IsProtectedProcessLight : 1; /* bit position: 6 */
      /* 0x0003 */ unsigned char IsLongPathAwareProcess : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0004 */ void* Mutant;
  /* 0x0008 */ void* ImageBaseAddress;
  /* 0x000c */ struct _PEB_LDR_DATA* Ldr;
  /* 0x0010 */ struct _RTL_USER_PROCESS_PARAMETERS* ProcessParameters;
  /* 0x0014 */ void* SubSystemData;
  /* 0x0018 */ void* ProcessHeap;
  /* 0x001c */ struct _RTL_CRITICAL_SECTION* FastPebLock;
  /* 0x0020 */ union _SLIST_HEADER* volatile AtlThunkSListPtr;
  /* 0x0024 */ void* IFEOKey;
  union
  {
    /* 0x0028 */ unsigned long CrossProcessFlags;
    struct /* bitfield */
    {
      /* 0x0028 */ unsigned long ProcessInJob : 1; /* bit position: 0 */
      /* 0x0028 */ unsigned long ProcessInitializing : 1; /* bit position: 1 */
      /* 0x0028 */ unsigned long ProcessUsingVEH : 1; /* bit position: 2 */
      /* 0x0028 */ unsigned long ProcessUsingVCH : 1; /* bit position: 3 */
      /* 0x0028 */ unsigned long ProcessUsingFTH : 1; /* bit position: 4 */
      /* 0x0028 */ unsigned long ProcessPreviouslyThrottled : 1; /* bit position: 5 */
      /* 0x0028 */ unsigned long ProcessCurrentlyThrottled : 1; /* bit position: 6 */
      /* 0x0028 */ unsigned long ProcessImagesHotPatched : 1; /* bit position: 7 */
      /* 0x0028 */ unsigned long ReservedBits0 : 24; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* KernelCallbackTable;
    /* 0x002c */ void* UserSharedInfoPtr;
  }; /* size: 0x0004 */
  /* 0x0030 */ unsigned long SystemReserved;
  /* 0x0034 */ union _SLIST_HEADER* volatile AtlThunkSListPtr32;
  /* 0x0038 */ void* ApiSetMap;
  /* 0x003c */ unsigned long TlsExpansionCounter;
  /* 0x0040 */ void* TlsBitmap;
  /* 0x0044 */ unsigned long TlsBitmapBits[2];
  /* 0x004c */ void* ReadOnlySharedMemoryBase;
  /* 0x0050 */ void* SharedData;
  /* 0x0054 */ void** ReadOnlyStaticServerData;
  /* 0x0058 */ void* AnsiCodePageData;
  /* 0x005c */ void* OemCodePageData;
  /* 0x0060 */ void* UnicodeCaseTableData;
  /* 0x0064 */ unsigned long NumberOfProcessors;
  /* 0x0068 */ unsigned long NtGlobalFlag;
  /* 0x0070 */ union _LARGE_INTEGER CriticalSectionTimeout;
  /* 0x0078 */ unsigned long HeapSegmentReserve;
  /* 0x007c */ unsigned long HeapSegmentCommit;
  /* 0x0080 */ unsigned long HeapDeCommitTotalFreeThreshold;
  /* 0x0084 */ unsigned long HeapDeCommitFreeBlockThreshold;
  /* 0x0088 */ unsigned long NumberOfHeaps;
  /* 0x008c */ unsigned long MaximumNumberOfHeaps;
  /* 0x0090 */ void** ProcessHeaps;
  /* 0x0094 */ void* GdiSharedHandleTable;
  /* 0x0098 */ void* ProcessStarterHelper;
  /* 0x009c */ unsigned long GdiDCAttributeList;
  /* 0x00a0 */ struct _RTL_CRITICAL_SECTION* LoaderLock;
  /* 0x00a4 */ unsigned long OSMajorVersion;
  /* 0x00a8 */ unsigned long OSMinorVersion;
  /* 0x00ac */ unsigned short OSBuildNumber;
  /* 0x00ae */ unsigned short OSCSDVersion;
  /* 0x00b0 */ unsigned long OSPlatformId;
  /* 0x00b4 */ unsigned long ImageSubsystem;
  /* 0x00b8 */ unsigned long ImageSubsystemMajorVersion;
  /* 0x00bc */ unsigned long ImageSubsystemMinorVersion;
  /* 0x00c0 */ unsigned long ActiveProcessAffinityMask;
  /* 0x00c4 */ unsigned long GdiHandleBuffer[34];
  /* 0x014c */ void* PostProcessInitRoutine /* function */;
  /* 0x0150 */ void* TlsExpansionBitmap;
  /* 0x0154 */ unsigned long TlsExpansionBitmapBits[32];
  /* 0x01d4 */ unsigned long SessionId;
  /* 0x01d8 */ union _ULARGE_INTEGER AppCompatFlags;
  /* 0x01e0 */ union _ULARGE_INTEGER AppCompatFlagsUser;
  /* 0x01e8 */ void* pShimData;
  /* 0x01ec */ void* AppCompatInfo;
  /* 0x01f0 */ struct _UNICODE_STRING CSDVersion;
  /* 0x01f8 */ const struct _ACTIVATION_CONTEXT_DATA* ActivationContextData;
  /* 0x01fc */ struct _ASSEMBLY_STORAGE_MAP* ProcessAssemblyStorageMap;
  /* 0x0200 */ const struct _ACTIVATION_CONTEXT_DATA* SystemDefaultActivationContextData;
  /* 0x0204 */ struct _ASSEMBLY_STORAGE_MAP* SystemAssemblyStorageMap;
  /* 0x0208 */ unsigned long MinimumStackCommit;
  /* 0x020c */ void* SparePointers[4];
  /* 0x021c */ unsigned long SpareUlongs[5];
  /* 0x0230 */ void* WerRegistrationData;
  /* 0x0234 */ void* WerShipAssertPtr;
  /* 0x0238 */ void* pUnused;
  /* 0x023c */ void* pImageHeaderHash;
  union
  {
    /* 0x0240 */ unsigned long TracingFlags;
    struct /* bitfield */
    {
      /* 0x0240 */ unsigned long HeapTracingEnabled : 1; /* bit position: 0 */
      /* 0x0240 */ unsigned long CritSecTracingEnabled : 1; /* bit position: 1 */
      /* 0x0240 */ unsigned long LibLoaderTracingEnabled : 1; /* bit position: 2 */
      /* 0x0240 */ unsigned long SpareTracingBits : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0248 */ unsigned __int64 CsrServerReadOnlySharedMemoryBase;
  /* 0x0250 */ unsigned long TppWorkerpListLock;
  /* 0x0254 */ struct _LIST_ENTRY TppWorkerpList;
  /* 0x025c */ void* WaitOnAddressHashTable[128];
  /* 0x045c */ void* TelemetryCoverageHeader;
  /* 0x0460 */ unsigned long CloudFileFlags;
  /* 0x0464 */ unsigned long CloudFileDiagFlags;
  /* 0x0468 */ char PlaceholderCompatibilityMode;
  /* 0x0469 */ char PlaceholderCompatibilityModeReserved[7];
  /* 0x0470 */ struct _LEAP_SECOND_DATA* LeapSecondData;
  union
  {
    /* 0x0474 */ unsigned long LeapSecondFlags;
    struct /* bitfield */
    {
      /* 0x0474 */ unsigned long SixtySecondEnabled : 1; /* bit position: 0 */
      /* 0x0474 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0478 */ unsigned long NtGlobalFlag2;
  /* 0x047c */ long __PADDING__[1];
} PEB, *PPEB; /* size: 0x0480 */

