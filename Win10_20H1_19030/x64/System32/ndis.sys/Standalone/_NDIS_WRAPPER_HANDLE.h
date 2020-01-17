typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _NDIS_WRAPPER_HANDLE
{
  /* 0x0000 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0008 */ struct _UNICODE_STRING ServiceRegPath;
} NDIS_WRAPPER_HANDLE, *PNDIS_WRAPPER_HANDLE; /* size: 0x0018 */

