typedef struct _MCI_STATUS_INTEL_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 McaErrorCode : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ModelErrorCode : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 OtherInfo : 5; /* bit position: 32 */
    /* 0x0000 */ unsigned __int64 FirmwareUpdateError : 1; /* bit position: 37 */
    /* 0x0000 */ unsigned __int64 CorrectedErrorCount : 15; /* bit position: 38 */
    /* 0x0000 */ unsigned __int64 ThresholdErrorStatus : 2; /* bit position: 53 */
    /* 0x0000 */ unsigned __int64 ActionRequired : 1; /* bit position: 55 */
    /* 0x0000 */ unsigned __int64 Signalling : 1; /* bit position: 56 */
    /* 0x0000 */ unsigned __int64 ContextCorrupt : 1; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 AddressValid : 1; /* bit position: 58 */
    /* 0x0000 */ unsigned __int64 MiscValid : 1; /* bit position: 59 */
    /* 0x0000 */ unsigned __int64 ErrorEnabled : 1; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 UncorrectedError : 1; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 StatusOverFlow : 1; /* bit position: 62 */
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 63 */
  }; /* bitfield */
} MCI_STATUS_INTEL_BITS, *PMCI_STATUS_INTEL_BITS; /* size: 0x0008 */

