typedef struct _WNF_NODE_HEADER
{
  /* 0x0000 */ unsigned short NodeTypeCode;
  /* 0x0002 */ unsigned short NodeByteSize;
} WNF_NODE_HEADER, *PWNF_NODE_HEADER; /* size: 0x0004 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

typedef enum _WNF_DATA_SCOPE
{
  WnfDataScopeSystem = 0,
  WnfDataScopeSession = 1,
  WnfDataScopeUser = 2,
  WnfDataScopeProcess = 3,
  WnfDataScopeMachine = 4,
  WnfDataScopePhysicalMachine = 5,
} WNF_DATA_SCOPE, *PWNF_DATA_SCOPE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _WNF_LOCK
{
  /* 0x0000 */ struct _EX_PUSH_LOCK PushLock;
} WNF_LOCK, *PWNF_LOCK; /* size: 0x0004 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _WNF_SCOPE_INSTANCE
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0004 */ struct _EX_RUNDOWN_REF RunRef;
  /* 0x0008 */ enum _WNF_DATA_SCOPE DataScope;
  /* 0x000c */ unsigned long InstanceIdSize;
  /* 0x0010 */ void* InstanceIdData;
  /* 0x0014 */ struct _LIST_ENTRY ResolverListEntry;
  /* 0x001c */ struct _WNF_LOCK NameSetLock;
  /* 0x0020 */ struct _RTL_AVL_TREE NameSet;
  /* 0x0024 */ void* PermanentDataStore;
  /* 0x0028 */ void* VolatilePermanentDataStore;
} WNF_SCOPE_INSTANCE, *PWNF_SCOPE_INSTANCE; /* size: 0x002c */

