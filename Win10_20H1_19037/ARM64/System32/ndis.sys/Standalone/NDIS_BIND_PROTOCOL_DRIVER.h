class wistd::__compressed_pair<Rtl::KString *,wistd::default_delete<Rtl::KString> >
{
}; /* size: 0x0008 */

class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> >
{
  /* 0x0000 */ class wistd::__compressed_pair<Rtl::KString *,wistd::default_delete<Rtl::KString> > __ptr_;
}; /* size: 0x0008 */

struct NDIS_BIND_PROTOCOL_DRIVER
{
  /* 0x0018 */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > Name;
  /* 0x0020 */ unsigned long ProtocolBindFlags;
  /* 0x0028 */ struct _NDIS_PROTOCOL_BLOCK* RunningDriver;
}; /* size: 0x0030 */

