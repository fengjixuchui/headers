typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _MMINPAGE_SUPPORT_FLOW_THROUGH
{
  /* 0x0000 */ unsigned long Page[1];
  /* 0x0004 */ struct _MMINPAGE_SUPPORT* InitialInPageSupport;
  /* 0x0008 */ struct _MMPAGING_FILE* PagingFile;
  /* 0x000c */ unsigned long PageFileOffset;
  /* 0x0010 */ struct _RTL_BALANCED_NODE Node;
} MMINPAGE_SUPPORT_FLOW_THROUGH, *PMMINPAGE_SUPPORT_FLOW_THROUGH; /* size: 0x001c */

