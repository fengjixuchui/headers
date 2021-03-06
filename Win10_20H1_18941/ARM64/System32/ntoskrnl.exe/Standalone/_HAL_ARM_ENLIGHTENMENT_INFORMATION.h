typedef struct _HAL_ARM_ENLIGHTENMENT_INFORMATION
{
  /* 0x0000 */ unsigned long Enlightenments;
  /* 0x0004 */ unsigned long HypervisorConnected;
  /* 0x0008 */ unsigned long Reserved0;
  /* 0x000c */ unsigned long SpinCountMask;
  /* 0x0010 */ void* LongSpinWait /* function */;
  /* 0x0018 */ void* GetReferenceTime /* function */;
  /* 0x0020 */ void* SetSystemSleepProperty /* function */;
  /* 0x0028 */ void* EnterSleepState /* function */;
  /* 0x0030 */ void* NotifyDebugDeviceAvailable /* function */;
  /* 0x0038 */ void* MapDeviceInterrupt /* function */;
  /* 0x0040 */ void* UnmapDeviceInterrupt /* function */;
  /* 0x0048 */ void* RetargetDeviceInterrupt /* function */;
  /* 0x0050 */ void* EnableDeviceInterrupt /* function */;
  /* 0x0058 */ void* QueryAssociatedProcessors /* function */;
  /* 0x0060 */ void* GetMachineCheckContext /* function */;
  /* 0x0068 */ void* SuspendPartition /* function */;
  /* 0x0070 */ void* ResumePartition /* function */;
  /* 0x0078 */ void* SetSystemMachineCheckProperty /* function */;
  /* 0x0080 */ void* WheaErrorNotification /* function */;
  /* 0x0088 */ void* GetProcessorIndexFromVpIndex /* function */;
  /* 0x0090 */ void* SyntheticClusterIpi /* function */;
  /* 0x0098 */ void* VpStartEnabled /* function */;
  /* 0x00a0 */ void* StartVirtualProcessor /* function */;
  /* 0x00a8 */ void* GetVpIndexFromApicId /* function */;
  /* 0x00b0 */ void* IumAccessPciDevice /* function */;
  /* 0x00b8 */ void* IumEfiRuntimeService /* function */;
  /* 0x00c0 */ void* SetQpcBias /* function */;
  /* 0x00c8 */ void* GetQpcBias /* function */;
  /* 0x00d0 */ void* AllocateDeviceDomain /* function */;
  /* 0x00d8 */ void* RegisterDeviceId /* function */;
  /* 0x00e0 */ void* UnregisterDeviceId /* function */;
  /* 0x00e8 */ void* AttachDeviceDomain /* function */;
  /* 0x00f0 */ void* DetachDeviceDomain /* function */;
  /* 0x00f8 */ void* DeleteDeviceDomain /* function */;
  /* 0x0100 */ void* MapDeviceLogicalRange /* function */;
  /* 0x0108 */ void* UnmapDeviceLogicalRange /* function */;
  /* 0x0110 */ void* MapDeviceSparsePages /* function */;
  /* 0x0118 */ void* UnmapDeviceSparsePages /* function */;
  /* 0x0120 */ void* ConfigureDeviceDomain /* function */;
  /* 0x0128 */ void* FlushDeviceDomain /* function */;
  /* 0x0130 */ void* FlushDeviceDomainVaList /* function */;
  /* 0x0138 */ void* GetDmaGuardEnabled /* function */;
  /* 0x0140 */ void* ConfigureDeviceFault /* function */;
  /* 0x0148 */ void* GetSintMessage /* function */;
  /* 0x0150 */ void* UnblockDefaultDma /* function */;
} HAL_ARM_ENLIGHTENMENT_INFORMATION, *PHAL_ARM_ENLIGHTENMENT_INFORMATION; /* size: 0x0158 */

