typedef struct _NDIS_GLOBAL_TRIAGE_BLOCK
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned short Revision;
  /* 0x0006 */ unsigned short Size;
  /* 0x0008 */ unsigned short MiniportBlockSize;
  /* 0x000a */ unsigned short MiniportAdapterContextOffset;
  /* 0x000c */ unsigned short AdapterInstanceNameOffset;
  /* 0x000e */ unsigned short MiniportLowestFilterOffset;
  /* 0x0010 */ unsigned short MiniportOpenQueueOffset;
  /* 0x0012 */ unsigned short MiniportDriverHandleOffset;
  /* 0x0014 */ unsigned short MiniportPendingOidOffset;
  /* 0x0016 */ unsigned short MiniportSymbolicLinkOffset;
  /* 0x0018 */ unsigned short MDriverBlockSize;
  /* 0x001a */ unsigned short MiniportServiceNameOffset;
  /* 0x001c */ unsigned short MiniportImageNameOffset;
  /* 0x001e */ unsigned short FilterBlockSize;
  /* 0x0020 */ unsigned short FilterDriverOffset;
  /* 0x0022 */ unsigned short FilterModuleContextOffset;
  /* 0x0024 */ unsigned short FilterHigherFilterOffset;
  /* 0x0026 */ unsigned short FilterFriendlyNameOffset;
  /* 0x0028 */ unsigned short FilterPendingOidOffset;
  /* 0x002a */ unsigned short FilterMiniportOffset;
  /* 0x002c */ unsigned short FilterDriverBlockSize;
  /* 0x002e */ unsigned short FilterDriverFriendlyNameOffset;
  /* 0x0030 */ unsigned short FilterServiceNameOffset;
  /* 0x0032 */ unsigned short FilterImageNameOffset;
  /* 0x0034 */ unsigned short OpenBlockSize;
  /* 0x0036 */ unsigned short ProtocolHandleOffset;
  /* 0x0038 */ unsigned short ProtocolBindingContextOffset;
  /* 0x003a */ unsigned short MiniportNextOpenOffset;
  /* 0x003c */ unsigned short OpenMiniportOffset;
  /* 0x003e */ unsigned short ProtocolBlockSize;
  /* 0x0040 */ unsigned short ProtocolNameOffset;
  /* 0x0042 */ unsigned short ProtocolImageNameOffset;
  /* 0x0044 */ unsigned short NBLPoolListOffset;
  /* 0x0046 */ unsigned short AllocatedListOffset;
  /* 0x0048 */ unsigned short OwnerHandleOffset;
  /* 0x004a */ unsigned short LookasideListOffset;
  /* 0x004c */ unsigned short EntryLinkageOffset;
  /* 0x004e */ unsigned short EntryHeaderSize;
  /* 0x0050 */ unsigned short LookasideListSize;
  /* 0x0052 */ unsigned short SListHeadOffset;
  /* 0x0054 */ unsigned short BackupSListHeadOffset;
  /* 0x0056 */ unsigned short NblSize;
  /* 0x0058 */ unsigned short NblCurrentOwnerOffset;
  /* 0x005a */ unsigned short SourceHandleOffset;
  /* 0x005c */ unsigned short NdisOidRequestSize;
  /* 0x005e */ unsigned short NdisTrackNblOwner;
  /* 0x0060 */ unsigned short MaxNumberOfProcessors;
  /* 0x0068 */ unsigned __int64 GlobalNetBufferListPoolList;
  /* 0x0070 */ unsigned __int64 BugcheckMiniport;
  /* 0x0078 */ unsigned __int64 PendingNBL[32];
  /* 0x0178 */ unsigned short PendingNBLCount[32];
  /* 0x01b8 */ unsigned short NblTrackerContextOffset;
  /* 0x01ba */ unsigned short MiniportPnPEventLogOffset;
  /* 0x01bc */ unsigned short MiniportSelectiveSuspendOffset;
  /* 0x01be */ unsigned short MiniportSelectiveSuspendSize;
  /* 0x01c0 */ unsigned short MiniportAoAcOffset;
  /* 0x01c2 */ unsigned short MiniportAoAcSize;
  struct
  {
    /* 0x01c4 */ unsigned short NumProtocolsOffset;
    /* 0x01c6 */ unsigned short ProtocolListOffset;
    /* 0x01c8 */ unsigned short NumFiltersOffset;
    /* 0x01ca */ unsigned short FilterListOffset;
  } /* size: 0x0008 */ MiniportBlockBindings;
  struct
  {
    /* 0x01cc */ unsigned short Size;
    /* 0x01ce */ unsigned short BindStateOffset;
    /* 0x01d0 */ unsigned short BindDriverOffset;
    /* 0x01d2 */ unsigned short BindDriverSize;
  } /* size: 0x0008 */ BindProtocolLink;
  struct
  {
    /* 0x01d4 */ unsigned short Size;
    /* 0x01d6 */ unsigned short BindStateOffset;
    /* 0x01d8 */ unsigned short BindDriverOffset;
    /* 0x01da */ unsigned short BindDriverSize;
  } /* size: 0x0008 */ BindFilterLink;
  struct
  {
    /* 0x01dc */ unsigned short NumContextsOffset;
    /* 0x01de */ unsigned short ContextListOffset;
  } /* size: 0x0004 */ BindState;
  struct
  {
    /* 0x01e0 */ unsigned short Size;
    /* 0x01e2 */ unsigned short NumEntriesOffset;
    /* 0x01e4 */ unsigned short EntrySizeOffset;
  } /* size: 0x0006 */ NdisEventLog;
  /* 0x01e6 */ unsigned short MiniportHookAdapterHandleOffset;
  /* 0x01e8 */ unsigned short MDriverHookDriverHandleOffset;
  /* 0x01ea */ unsigned short MDriverHookDriverTypeOffset;
  /* 0x01ec */ unsigned short MDriverHookRegisteredOffset;
  /* 0x01ee */ unsigned short NblTrackerSize;
} NDIS_GLOBAL_TRIAGE_BLOCK, *PNDIS_GLOBAL_TRIAGE_BLOCK; /* size: 0x01f0 */

