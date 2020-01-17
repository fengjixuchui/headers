typedef enum _WWAN_AUTH_PROTOCOL
{
  WwanAuthProtocolNone = 0,
  WwanAuthProtocolPap = 1,
  WwanAuthProtocolChap = 2,
  WwanAuthProtocolMsChapV2 = 3,
  WwanAuthProtocolAuto = 4,
  WwanAuthProtocolMax = 5,
} WWAN_AUTH_PROTOCOL, *PWWAN_AUTH_PROTOCOL;

