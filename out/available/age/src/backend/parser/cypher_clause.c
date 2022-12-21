#define __S_IFBLK 0060000
#define DatumGetByteaP(X) ((bytea *) PG_DETOAST_DATUM(X))
#define Anum_pg_index_indisready 12
#define SOL_LLC 268
#define F_PG_STAT_GET_MOD_SINCE_ANALYZE 3177
#define EHWPOISON 133
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define ENTRY_ID_MIN INT64CONST(1)
#define F_PG_EXTENSION_CONFIG_DUMP 3086
#define F_INT2UP 1911
#define F_BRIN_INCLUSION_ADD_VALUE 4106
#define BootstrapTransactionId ((TransactionId) 1)
#define PARTPRUNE_H 
#define __SSP_STRONG__ 3
#define F_BOOLSEND 2437
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define F_JSONB_OBJECT_FIELD 3478
#define RELKIND_PARTITIONED_INDEX 'I'
#define F_HAS_TABLESPACE_PRIVILEGE_ID_NAME 2392
#define EMULTIHOP 72
#define F_BITEQ 1581
#define SET_LOCKTAG_RELATION_EXTEND(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION_EXTEND, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define ERRCODE_AMBIGUOUS_COLUMN MAKE_SQLSTATE('4','2','7','0','2')
#define ERRCODE_DUPLICATE_ALIAS MAKE_SQLSTATE('4','2','7','1','2')
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define AT_STATX_SYNC_AS_STAT 0x0000
#define F_PERCENTILE_CONT_INTERVAL_FINAL 3977
#define STATUS_EOF (-2)
#define MAX_FORKNUM INIT_FORKNUM
#define F_MACADDR_EQ 830
#define F_TS_HEADLINE_BYID 3744
#define RelationCloseSmgr(relation) do { if ((relation)->rd_smgr != NULL) { smgrclose((relation)->rd_smgr); Assert((relation)->rd_smgr == NULL); } } while (0)
#define F_HYPOTHETICAL_RANK_FINAL 3987
#define AF_MAX PF_MAX
#define _SC_PII _SC_PII
#define F_JSONB_INT2 3450
#define F_JSONB_INT4 3451
#define F_REGTYPESEND 2455
#define F_JSONB_INT8 3452
#define F_ARRAY_LE 393
#define F_TIMETZ_EQ 1352
#define F_TIMESTAMP_RECV 2474
#define __CFLOAT32 _Complex _Float32
#define F_PG_ADVISORY_XACT_LOCK_SHARED_INT8 3090
#define F_ARRAY_LT 391
#define __UINT_LEAST16_MAX__ 0xffff
#define F_SET_RW_HINT 1036
#define INSTR_TIME_ADD(x,y) do { (x).tv_sec += (y).tv_sec; (x).tv_nsec += (y).tv_nsec; while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define IP_ROUTER_ALERT 5
#define F_CASH_RECV 2492
#define CYPHER_TARGET_NODE_IS_VARIABLE(flags) (flags & CYPHER_TARGET_NODE_IS_VAR)
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define __FLT128_MAX_10_EXP__ 4932
#define F_XMLTOTEXT 2922
#define F_TSVECTOR_TO_ARRAY 3326
#define OPCLASS_ITEM_STORAGETYPE 3
#define F_RI_FKEY_CASCADE_DEL 1646
#define RE_DUP_MAX (0x7fff)
#define F_INT4XOR 1900
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define PVC_RECURSE_AGGREGATES 0x0002
#define F_BE_LO_LSEEK64 3170
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define outerPlanState(node) (((PlanState *)(node))->lefttree)
#define BackendIdForTempRelations() (ParallelMasterBackendId == InvalidBackendId ? MyBackendId : ParallelMasterBackendId)
#define sa_sigaction __sigaction_handler.sa_sigaction
#define F_MACADDR_NOT 3144
#define XLOG_MARK_UNIMPORTANT 0x02
#define F_BE_LO_CLOSE 953
#define ERRCODE_INVALID_ROLE_SPECIFICATION MAKE_SQLSTATE('0','P','0','0','0')
#define F_WINDOW_NTH_VALUE 3114
#define DatumGetHeapTupleHeader(X) ((HeapTupleHeader) PG_DETOAST_DATUM(X))
#define F_TEXT_SUBSTR_NO_LEN 883
#define F_ARRAY_NE 390
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define F_WIDTH_BUCKET_ARRAY 3218
#define F_MAKE_TIME 3847
#define F_TEXTPOS 849
#define F_CIDOUT 53
#define EUSERS 87
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define si_fd _sifields._sigpoll.si_fd
#define _GETOPT_CORE_H 1
#define USE_LLVM 1
#define _T_WCHAR_ 
#define _SC_IPV6 _SC_IPV6
#define F_NUMERICTYPMODOUT 2918
#define RTPrefixStrategyNumber 28
#define F_HYPOTHETICAL_CUME_DIST_FINAL 3991
#define F_INT4MUL 141
#define IS_VALID_DATE(d) ((DATETIME_MIN_JULIAN - POSTGRES_EPOCH_JDATE) <= (d) && (d) < (DATE_END_JULIAN - POSTGRES_EPOCH_JDATE))
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define NI_MAXSERV 32
#define ERRCODE_CONNECTION_DOES_NOT_EXIST MAKE_SQLSTATE('0','8','0','0','3')
#define Anum_pg_class_relacl 31
#define restrict __restrict__
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define ERRCODE_RESERVED_NAME MAKE_SQLSTATE('4','2','9','3','9')
#define F_PG_HBA_FILE_RULES 3401
#define OIDVECTORARRAYOID 1013
#define si_arch _sifields._sigsys._arch
#define F_ARRAY_TO_TEXT 395
#define LockHashPartitionLockByIndex(i) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + (i)].lock)
#define FIELDNO_FUNCTIONCALLINFODATA_ARGNULL 7
#define __S64_TYPE long int
#define _PRINTF_NAN_LEN_MAX 4
#define PG_BINARY_R "r"
#define __FLT_MAX_EXP__ 128
#define PG_BINARY_W "w"
#define F_PG_BACKUP_START_TIME 3814
#define INTSTYLE_POSTGRES 0
#define __SQUAD_TYPE long int
#define F_PG_DDL_COMMAND_SEND 90
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _BITS_SIGINFO_CONSTS_H 1
#define PG_GETARG_EXPANDED_ARRAYX(n,metacache) DatumGetExpandedArrayX(PG_GETARG_DATUM(n), metacache)
#define SIGBUS 7
#define PG_GETARG_VARLENA_PP(n) PG_DETOAST_DATUM_PACKED(PG_GETARG_DATUM(n))
#define F_REGEXP_SPLIT_TO_ARRAY_NO_FLAGS 2767
#define SYNC_FILE_RANGE_WRITE 2
#define ERRCODE_INVALID_ARGUMENT_FOR_NTILE MAKE_SQLSTATE('2','2','0','1','4')
#define _BSD_SIZE_T_DEFINED_ 
#define F_NOTIFY 1026
#define F_SET_CONFIG_BY_NAME 2078
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define F_PG_STAT_GET_TUPLES_DELETED 1933
#define F_INTERVAL_UM 1168
#define F_CIDR_ABBREV 599
#define __CHAR_BIT__ 8
#define SO_DOMAIN 39
#define HTUP_H 
#define USE_OPENSSL 1
#define F_TEXTICLIKE 1633
#define F_TEXTICNLIKE 1634
#define F_GTSQUERY_UNION 3698
#define heap_getattr(tup,attnum,tupleDesc,isnull) ( ((attnum) > 0) ? ( ((attnum) > (int) HeapTupleHeaderGetNatts((tup)->t_data)) ? getmissingattr((tupleDesc), (attnum), (isnull)) : fastgetattr((tup), (attnum), (tupleDesc), (isnull)) ) : heap_getsysattr((tup), (attnum), (tupleDesc), (isnull)) )
#define SHORTALIGN(LEN) TYPEALIGN(ALIGNOF_SHORT, (LEN))
#define F_MACADDR_LE 832
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define F_PG_NODE_TREE_SEND 198
#define F_CASH_NUMERIC 3823
#define ARR_HASNULL(a) ((a)->dataoffset != 0)
#define lnext(lc) ((lc)->next)
#define F_TIDNE 1265
#define EREMCHG 78
#define F_MACADDR_LT 831
#define RELKIND_PARTITIONED_TABLE 'p'
#define PG_VERSION_STR "PostgreSQL 11.18 (Ubuntu 11.18-1.pgdg22.04+1) on aarch64-unknown-linux-gnu, compiled by gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0, 64-bit"
#define pairingheap_reset(h) ((h)->ph_root = NULL)
#define SIGTTIN 21
#define vertex_tuple_id Anum_ag_label_vertex_table_id - 1
#define F_PG_STAT_GET_BGWRITER_BUF_WRITTEN_CLEAN 2772
#define EACCES 13
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define F_PG_TRY_ADVISORY_XACT_LOCK_INT4 3095
#define F_INT28MI 942
#define F_INT2UM 213
#define F_BOX_RIGHT 191
#define AG_LABEL_COMMANDS_H 
#define SOCK_RAW SOCK_RAW
#define TRANSACTION_STATUS_SUB_COMMITTED 0x03
#define AG_AGTYPE_H 
#define F_TINTERVALLENGE 271
#define F_RANGE_CONTAINS 3859
#define PG_GETARG_BOOL(n) DatumGetBool(PG_GETARG_DATUM(n))
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define EDESTADDRREQ 89
#define F_BOX_SUB 1423
#define ERRCODE_INVALID_TEXT_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','2')
#define F_INT8RECV 2408
#define F_PG_RELATION_SIZE 2332
#define F_PG_TABLE_SIZE 2997
#define F_QUERY_TO_XMLSCHEMA 2927
#define F_TIMESTAMPTZ_TIMETZ 1388
#define si_pid _sifields._kill.si_pid
#define _PROC_H_ 
#define ERRCODE_DATA_EXCEPTION MAKE_SQLSTATE('2','2','0','0','0')
#define PG_DIAG_STATEMENT_POSITION 'P'
#define INT8RANGEOID 3926
#define PIPE_BUF 4096
#define F_INET_ABBREV 598
#define IP_TTL 2
#define F_BPCHAROUT 1045
#define DatumGetArrayTypeP(X) ((ArrayType *) PG_DETOAST_DATUM(X))
#define UInt64GetDatum(X) ((Datum) (X))
#define AGT_HEADER_PATH 0x00000004
#define F_SPG_RANGE_QUAD_CONFIG 3469
#define F_BITOVERLAY_NO_LEN 3031
#define stderr stderr
#define F_MACADDR_OR 3146
#define F_JSONB_HASH_EXTENDED 3416
#define F_HAS_TABLESPACE_PRIVILEGE_ID_ID 2393
#define SAFE_TO_SKIP_EXISTENCE_CHECK(flags) (flags & EXISTING_VARAIBLE_DECLARED_SAME_CLAUSE)
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define F_HAS_COLUMN_PRIVILEGE_NAME_NAME_NAME 3012
#define RECORDARRAYOID 2287
#define __USE_XOPEN2KXSI 1
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define RelationIsScannable(relation) ((relation)->rd_rel->relispopulated)
#define CASHOID 790
#define index_getattr(tup,attnum,tupleDesc,isnull) ( AssertMacro(PointerIsValid(isnull) && (attnum) > 0), *(isnull) = false, !IndexTupleHasNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup) + IndexInfoFindDataOffset((tup)->t_info) + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocache_index_getattr((tup), (attnum), (tupleDesc)) ) : ( (att_isnull((attnum)-1, (char *)(tup) + sizeof(IndexTupleData))) ? ( *(isnull) = true, (Datum)NULL ) : ( nocache_index_getattr((tup), (attnum), (tupleDesc)) ) ) )
#define RWH_WRITE_LIFE_EXTREME 5
#define F_HAS_TYPE_PRIVILEGE_ID_ID 3141
#define SOCK_RDM SOCK_RDM
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define Int8GetDatum(X) ((Datum) (X))
#define F_PATH_DIV_PT 1439
#define F_BPCHAR 668
#define ERRCODE_TRANSACTION_ROLLBACK MAKE_SQLSTATE('4','0','0','0','0')
#define F_JSON_EXTRACT_PATH 3951
#define OPCLASS_ITEM_OPERATOR 1
#define PF_DECnet 12
#define CLogControlLock (&MainLWLockArray[11].lock)
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define UINT_FAST16_WIDTH __WORDSIZE
#define IP_MAX_MEMBERSHIPS 20
#define AG_CYPHER_CLAUSE_H 
#define F_TIME_GT 1104
#define HAVE_STRUCT_ADDRINFO 1
#define BITMAPLEN(NATTS) (((int)(NATTS) + 7) / 8)
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define F_TINTERVALLENGT 269
#define PG_GETARG_BYTEA_P_SLICE(n,a,b) DatumGetByteaPSlice(PG_GETARG_DATUM(n),a,b)
#define pairingheap_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define MaxAttrSize (10 * 1024 * 1024)
#define F_OIDEQ 184
#define F_UUID_GE 2957
#define F_MACADDR8_CMP 4119
#define DAYS_PER_MONTH 30
#define MaxAllocHugeSize (SIZE_MAX / 2)
#define F_JSON_ARRAY_ELEMENT 3949
#define pg_attribute_printf(f,a) __attribute__((format(PG_PRINTF_ATTRIBUTE, f, a)))
#define ERRCODE_UNDEFINED_COLUMN MAKE_SQLSTATE('4','2','7','0','3')
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define F_INTERVAL_JUSTIFY_INTERVAL 2711
#define F_NETWORK_GE 924
#define __STATFS_MATCHES_STATFS64 1
#define F_PATH_CENTER 226
#define F_TIMESTAMP_GE 1156
#define _BITS_SOCKADDR_H 1
#define InvalidSnapshot ((Snapshot) NULL)
#define Anum_pg_class_reloftype 4
#define F_TSVECTOR_CONCAT 3625
#define O_RDWR 02
#define F_INDEX_AM_HANDLER_OUT 327
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define lsecond(l) lfirst(lnext(list_head(l)))
#define F_SPGHANDLER 334
#define F_REGPROCRECV 2444
#define Anum_pg_index_indcheckxmin 11
#define NUM_FIXED_LWLOCKS (PREDICATELOCK_MANAGER_LWLOCK_OFFSET + NUM_PREDICATELOCK_PARTITIONS)
#define ag_graph_relation_id() ag_relation_id("ag_graph", "table")
#define PG_SOMAXCONN 10000
#define AG_GRAPHID_H 
#define F_NAMENE 659
#define USE_SQL_DATES 2
#define MCAST_LEAVE_SOURCE_GROUP 47
#define ACLITEM_SET_PRIVS_GOPTIONS(item,privs,goptions) ((item).ai_privs = ((AclMode) (privs) & 0xFFFF) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define F_PG_LS_DIR_1ARG 2625
#define BKPBLOCK_WILL_INIT 0x40
#define __FLT32X_DECIMAL_DIG__ 17
#define PGNODETREEOID 194
#define PG_GETARG_BYTEA_PP(n) DatumGetByteaPP(PG_GETARG_DATUM(n))
#define IPV6_IPSEC_POLICY 34
#define ItemIdSetDead(itemId) ( (itemId)->lp_flags = LP_DEAD, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define F_SHOW_ALL_FILE_SETTINGS 3329
#define HEAP_XMAX_KEYSHR_LOCK 0x0010
#define _POSIX_MQ_PRIO_MAX 32
#define MovedPartitionsBlockNumber InvalidBlockNumber
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define AGT_GIN_FLAG_STR 0x05
#define XLogLogicalInfoActive() (wal_level >= WAL_LEVEL_LOGICAL)
#define STA_DEL 0x0020
#define ag_graph_name_index_id() ag_relation_id("ag_graph_name_index", "index")
#define IPV6_2292HOPOPTS 3
#define F_PG_SAFE_SNAPSHOT_BLOCKING_PIDS 3376
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define F_INT8MOD 945
#define ERRCODE_SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','4')
#define ACL_SELECT_FOR_UPDATE ACL_UPDATE
#define Max(x,y) ((x) > (y) ? (x) : (y))
#define AGTE_IS_NUMERIC(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_NUMERIC)
#define Anum_pg_class_relrowsecurity 23
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define F_INT4RECV 2406
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define HAVE_SYSLOG 1
#define IPV6_PMTUDISC_PROBE 3
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define F_XML_IS_WELL_FORMED_CONTENT 3053
#define IP_FREEBIND 15
#define RelationGetPartitionKey(relation) ((relation)->rd_partkey)
#define F_FLOAT4EQ 287
#define HOLD_INTERRUPTS() (InterruptHoldoffCount++)
#define LONG_WIDTH __WORDSIZE
#define F_TSVECTOR_UPDATE_TRIGGER_BYID 3752
#define _POSIX_PATH_MAX 256
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define SEGV_BNDERR SEGV_BNDERR
#define init_local_spin_delay(status) init_spin_delay(status, __FILE__, __LINE__, PG_FUNCNAME_MACRO)
#define F_GETDATABASEENCODING 1039
#define REGDICTIONARYOID 3769
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define F_INITCAP 872
#define __RLIM_T_MATCHES_RLIM64_T 1
#define AF_IPX PF_IPX
#define F_FLOAT8_REGR_SXX 2807
#define is_nonwindows_absolute_path(filename) ( IS_NONWINDOWS_DIR_SEP((filename)[0]) )
#define F_TSQUERY_REWRITE_QUERY 3685
#define DT_NOBEGIN PG_INT64_MIN
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define _BITS_PTHREADTYPES_COMMON_H 1
#define IPV6_UNICAST_IF 76
#define VARDATA_1B(PTR) (((varattrib_1b *) (PTR))->va_data)
#define F_INET_OUT 911
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','5')
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define FmgrHookIsNeeded(fn_oid) (!needs_fmgr_hook ? false : (*needs_fmgr_hook)(fn_oid))
#define OIDOID 26
#define __SIGEV_MAX_SIZE 64
#define PG_INT128_TYPE __int128
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define Anum_pg_class_relname 1
#define F_INT8NE 468
#define F_DCOS 1605
#define F_DISPELL_INIT 3731
#define __sigval_t_defined 
#define MCAST_LEAVE_GROUP 45
#define F_CASH_GT 892
#define SOL_BLUETOOTH 274
#define FD_SETSIZE __FD_SETSIZE
#define __CFLOAT128 _Complex _Float128
#define F_JSONB_HASH 4045
#define F_RECORD_IMAGE_GE 3186
#define _SC_CPUTIME _SC_CPUTIME
#define F_TIMESTAMP_TRANSFORM 3917
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define F_RECORD_IMAGE_GT 3184
#define F_TIMESTAMPTZ_GT_TIMESTAMP 2530
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __SVE_ZREGS_OFFSET 0
#define F_DATAN2D 2734
#define lthird(l) lfirst(lnext(lnext(list_head(l))))
#define F_REGPROCEDUREIN 2212
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define F_GIST_POLY_CONSISTENT 2585
#define PG_DYNSHMEM_DIR "pg_dynshmem"
#define __DBL_MIN_10_EXP__ (-307)
#define makeNode(_type_) ((_type_ *) newNode(sizeof(_type_),T_ ##_type_))
#define MERGE_CLAUSE_FUNCTION_NAME "_cypher_merge_clause"
#define F_RECORD_IMAGE_NE 3182
#define GAI_NOWAIT 1
#define ENOTTY 25
#define F_TSVECTOR_UNNEST 3322
#define TRACE_SORT 1
#define ERRCODE_ERROR_IN_ASSIGNMENT MAKE_SQLSTATE('2','2','0','0','5')
#define F_TIMESTAMPTZ_IZONE 1026
#define WrapLimitsVacuumLock (&MainLWLockArray[46].lock)
#define F_SPG_BBOX_QUAD_CONFIG 5010
#define MOD_NANO ADJ_NANO
#define slist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, slist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define S_IRGRP (S_IRUSR >> 3)
#define F_INET_GIST_SAME 3559
#define F_HAS_TABLE_PRIVILEGE_NAME_NAME 1922
#define PARTITION_STRATEGY_RANGE 'r'
#define L_cuserid 9
#define _CS_V6_ENV _CS_V6_ENV
#define BGWORKER_BYPASS_ALLOWCONN 1
#define F_PG_GET_CONSTRAINTDEF_EXT 2508
#define ag_label_name_graph_index_id() ag_relation_id("ag_label_name_graph_index", "index")
#define F_BE_LO_UNLINK 964
#define AGE_DEFAULT_VARNAME_PREFIX "_age_varname_"
#define RTOverRightStrategyNumber 4
#define Anum_pg_attribute_attalign 12
#define __u_char_defined 
#define F_RELTIME_INTERVAL 1177
#define F_INET_SEND 2497
#define F_ACLITEMOUT 1032
#define F_BE_LO_IMPORT 764
#define unlikely(x) __builtin_expect((x) != 0, 0)
#define F_SHA512_BYTEA 3422
#define F_SHELL_IN 2398
#define HAVE_DECL_F_FULLFSYNC 0
#define MAX_INPUT 255
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define RTLessStrategyNumber 20
#define __FLT64X_HAS_INFINITY__ 1
#define BKPBLOCK_HAS_IMAGE 0x10
#define IPV6_HOPOPTS 54
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define Anum_pg_type_typrelid 11
#define F_DSYNONYM_INIT 3728
#define _POSIX_TRACE_EVENT_FILTER -1
#define Min(x,y) ((x) < (y) ? (x) : (y))
#define __INT_LEAST16_TYPE__ short int
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define Anum_pg_type_typcollation 27
#define SO_SECURITY_AUTHENTICATION 22
#define AGT_CMASK 0x0FFFFFFF
#define F_DPOW 232
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define PG_RETURN_CSTRING(x) return CStringGetDatum(x)
#define F_UUID_GT 2958
#define F_OIDGE 1639
#define NameStr(name) ((name).data)
#define _BITS_TYPES_LOCALE_T_H 1
#define UINT8_WIDTH 8
#define MSG_WAITALL MSG_WAITALL
#define F_PG_COLLATION_FOR 3162
#define REGPROCEDUREARRAYOID 2207
#define F_BTRELTIMECMP 380
#define F_BYTEAGETBIT 723
#define F_PG_STAT_GET_FUNCTION_SELF_TIME 2980
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define F_FMGR_SQL_VALIDATOR 2248
#define PG_DIAG_CONTEXT 'W'
#define __ASM_GENERIC_SOCKET_H 
#define F_ICREGEXEQSEL 1820
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define _XOPEN_XCU_VERSION 4
#define __O_NOATIME 01000000
#define F_BOX_DIV 1425
#define USECS_PER_DAY INT64CONST(86400000000)
#define HAVE_INT_OPTERR 1
#define __SI_SIGFAULT_ADDL 
#define ENOMEM 12
#define F_HAS_TYPE_PRIVILEGE_NAME_NAME 3138
#define BITARRAYOID 1561
#define SPLICE_F_GIFT 8
#define _SYS_TIME_H 1
#define GET_LABEL_ID(id) (((uint64)id) >> ENTRY_ID_BITS)
#define SOL_TIPC 271
#define PAIRINGHEAP_H 
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define F_PRSD_HEADLINE 3720
#define F_VARCHARSEND 2433
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH _CS_PATH
#define F_SHOW_CONFIG_BY_NAME 2077
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define F_INET_GIST_CONSISTENT 3553
#define _ERRNO_H 1
#define h_addr h_addr_list[0]
#define __INT_LEAST8_MAX__ 0x7f
#define ACL_DELETE_CHR 'd'
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define __stub_sigreturn 
#define F_INT4RANGE_SUBDIFF 3922
#define F_TS_HEADLINE_OPT 3754
#define F_PG_DATABASE_SIZE_OID 2324
#define for_each_cell(cell,initcell) for ((cell) = (initcell); (cell) != NULL; (cell) = lnext(cell))
#define _XBS5_LPBIG_OFFBIG -1
#define IN_CLASSB_NSHIFT 16
#define DEFAULT_BGWRITER_FLUSH_AFTER 64
#define PRS2LOCK_H 
#define F_INT8_AVG_COMBINE 2785
#define F_JSONB_BUILD_ARRAY 3271
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define NFDBITS __NFDBITS
#define FIELDNO_TUPLETABLESLOT_TUPLE 5
#define REGCLASSOID 2205
#define AGTENTRY_IS_BOOL_TRUE 0x30000000
#define PG_HAVE_ATOMIC_READ_U64 
#define Anum_ag_graph_name 1
#define ACL_ALL_RIGHTS_SEQUENCE (ACL_USAGE|ACL_SELECT|ACL_UPDATE)
#define F_ARRAY_CAT 383
#define TransactionIdIsNormal(xid) ((xid) >= FirstNormalTransactionId)
#define F_CIRCLE_OVERLEFT 1455
#define transform_prev_cypher_clause(cpstate,prev_clause,add_rte_to_query) transform_cypher_clause_as_subquery(cpstate, transform_cypher_clause, prev_clause, NULL, add_rte_to_query)
#define F_TIMESTAMP_FINITE 1389
#define F_BTTEXT_PATTERN_CMP 2166
#define F_POINT_SEND 2429
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define PG_RETURN_INT64(x) return Int64GetDatum(x)
#define PROC_VACUUM_FOR_WRAPAROUND 0x08
#define S_IXOTH (S_IXGRP >> 3)
#define GENBKI_H 
#define F_TIME_TIMETZ 2047
#define InitTupleHashIterator(htable,iter) tuplehash_start_iterate(htable->hashtab, iter)
#define WCHAR_WIDTH 32
#define FirstBootstrapObjectId 10000
#define lfourth_oid(l) lfirst_oid(lnext(lnext(lnext(list_head(l)))))
#define slist_check(head) ((void) (head))
#define SOL_IPV6 41
#define __O_CLOEXEC 02000000
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define O_CLOEXEC __O_CLOEXEC
#define IP_MTU 14
#define F_MAKE_INTERVAL 3464
#define DATEARRAYOID 1182
#define DT_CHR DT_CHR
#define F_DIST_LB 726
#define __ARM_FP 14
#define FIELDNO_FUNCTIONCALLINFODATA_ISNULL 4
#define AF_ROSE PF_ROSE
#define F_TIMETZ_IN 1350
#define SIGSTKFLT 16
#define DatumGetUInt32(X) ((uint32) (X))
#define F_TIMESTAMP_MI 1188
#define AG_AG_LABEL_H 
#define F_TIMESTAMP_SEND 2475
#define __fortify_function __extern_always_inline __attribute_artificial__
#define FIELDNO_HEAPTUPLEHEADERDATA_BITS 5
#define F_BOX_ABOVE 2565
#define LP_UNUSED 0
#define F_BTOIDSORTSUPPORT 3134
#define F_BPCHARRECV 2430
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define Anum_pg_type_typtypmod 25
#define _RPC_NETDB_H 1
#define F_SEAL_FUTURE_WRITE 0x0010
#define TZ_STRLEN_MAX 255
#define SIZEOF_OFF_T 8
#define FAPPEND O_APPEND
#define F_PG_WAL_LSN_DIFF 3165
#define SOCK_DCCP SOCK_DCCP
#define CommandIdGetDatum(X) ((Datum) (X))
#define F_SPG_QUAD_CONFIG 4018
#define _POSIX_JOB_CONTROL 1
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define F_PG_CREATE_PHYSICAL_REPLICATION_SLOT 3779
#define AG_CYPHER_EXPR_H 
#define Anum_pg_attribute_atthasmissing 15
#define __POSIX_FADV_NOREUSE 5
#define PF_SECURITY 14
#define MaxAttrNumber 32767
#define F_INET_SPG_INNER_CONSISTENT 3798
#define F_BINARY_UPGRADE_SET_NEXT_TOAST_PG_TYPE_OID 3585
#define IPV6_2292DSTOPTS 4
#define CppAsString2(x) CppAsString(x)
#define F_GENERATE_SERIES_NUMERIC 3260
#define F_HASH_ARRAY_EXTENDED 782
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define F_GIST_POLY_DISTANCE 3288
#define PG_DIAG_TABLE_NAME 't'
#define __ASM_GENERIC_BITS_PER_LONG 
#define ARR_SIZE(a) VARSIZE(a)
#define ENABLE_THREAD_SAFETY 1
#define HAVE_WCTYPE_H 1
#define RELATION_IS_OTHER_TEMP(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP && !(relation)->rd_islocaltemp)
#define F_BTFLOAT4CMP 354
#define F_OIDSEND 2419
#define F_INT28GT 1853
#define DatumGetUInt64(X) ((uint64) (X))
#define _POSIX_THREAD_CPUTIME 0
#define __linux 1
#define VARATT_IS_4B_C(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x02)
#define PG_MAGIC_FUNCTION_NAME Pg_magic_func
#define AGG_CONTEXT_WINDOW 2
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define VARATT_IS_4B_U(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x00)
#define F_REGCLASSOUT 2219
#define F_POLY_LEFT 341
#define F_DIST_PC 1476
#define VARCHAROID 1043
#define F_DIST_PL 725
#define ERRCODE_SUCCESSFUL_COMPLETION MAKE_SQLSTATE('0','0','0','0','0')
#define F_PG_LSN_EQ 3233
#define F_DIST_PS 363
#define AI_ADDRCONFIG 0x0020
#define si_int _sifields._rt.si_sigval.sival_int
#define TYPTYPE_ENUM 'e'
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define SearchSysCacheExists4(cacheId,key1,key2,key3,key4) SearchSysCacheExists(cacheId, key1, key2, key3, key4)
#define _BITS_PTHREADTYPES_ARCH_H 1
#define RTContainsStrategyNumber 7
#define LockHashPartitionLockByProc(leader_pgproc) LockHashPartitionLock((leader_pgproc)->pgprocno)
#define __UINT32_MAX__ 0xffffffffU
#define DSA_POINTER_FORMAT "%016" INT64_MODIFIER "x"
#define F_TIMETZ_NE 1353
#define ERRCODE_S_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','2')
#define __bool_true_false_are_defined 1
#define _BITS_SS_FLAGS_H 1
#define F_NETWORK_GT 923
#define __TIMER_T_TYPE void *
#define F_OIDVECTORGE 680
#define ItemPointerGetBlockNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetBlockNumberNoCheck(pointer) )
#define ERRCODE_DATETIME_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','0','8')
#define F_PG_RELOAD_CONF 2621
#define F_JSON_ARRAY_ELEMENTS_TEXT 3969
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define F_NETWORK_NE 925
#define F_TSQUERY_GE 3666
#define __SIZE_T 
#define F_INT4DIV 154
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define _POSIX_PIPE_BUF 512
#define DatumGetHeapTupleHeaderCopy(X) ((HeapTupleHeader) PG_DETOAST_DATUM_COPY(X))
#define ACL_INSERT (1<<0)
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define F_BITGT 1593
#define ALIGNOF_DOUBLE 8
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define PF_SNA 22
#define F_JSON_BUILD_OBJECT_NOARGS 3201
#define PG_SEMA_H 
#define _ATFILE_SOURCE 1
#define NO_MAX_DSIZE (-1)
#define F_DIST_SB 365
#define F_ENUM_NE 3509
#define REL_H 
#define _SC_NETWORKING _SC_NETWORKING
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define MSG_FIN MSG_FIN
#define RangeVarGetRelid(relation,lockmode,missing_ok) RangeVarGetRelidExtended(relation, lockmode, (missing_ok) ? RVR_MISSING_OK : 0, NULL, NULL)
#define INT2OID 21
#define PATH_REQ_OUTER(path) ((path)->param_info ? (path)->param_info->ppi_req_outer : (Relids) NULL)
#define SO_NO_CHECK 11
#define UINT_FAST64_WIDTH 64
#define RTLeftStrategyNumber 1
#define TABLESPACE_MAP_OLD "tablespace_map.old"
#define F_HAS_COLUMN_PRIVILEGE_NAME_ID_ATTNUM 3015
#define WUNTRACED 2
#define F_TIMESTAMP_EQ_DATE 2366
#define F_FDW_HANDLER_OUT 3117
#define ERESTART 85
#define PG_HAVE_ATOMIC_ADD_FETCH_U32 
#define NZERO 20
#define F_REGTYPEOUT 2221
#define EISNAM 120
#define F_NUMERIC_TO_NUMBER 1777
#define pg_bswap64(x) __builtin_bswap64(x)
#define UINT16_C(c) c
#define F_ARRAYCONTJOINSEL 3818
#define ACL_UPDATE_CHR 'w'
#define F_RECORD_IMAGE_EQ 3181
#define F_MACADDR8_LT 4114
#define F_DFLOOR 2309
#define ENOKEY 126
#define PageXLogRecPtrGet(val) ((uint64) (val).xlogid << 32 | (val).xrecoff)
#define F_SPG_RANGE_QUAD_PICKSPLIT 3471
#define HeapTupleHeaderXminFrozen(tup) ( ((tup)->t_infomask & (HEAP_XMIN_FROZEN)) == HEAP_XMIN_FROZEN )
#define ENOMSG 42
#define _PC_PRIO_IO _PC_PRIO_IO
#define RENAME_EXCHANGE (1 << 1)
#define F_GIN_CMP_TSLEXEME 3724
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define SpinLockInit(lock) S_INIT_LOCK(lock)
#define F_HASHTEXTEXTENDED 448
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define F_TIMETZ_PART 1273
#define qsort(a,b,c,d) pg_qsort(a,b,c,d)
#define F_UUID_OUT 2953
#define FIELDNO_EXPRSTATE_RESNULL 2
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define AF_FILE PF_FILE
#define __SCHAR_MAX__ 0x7f
#define JULIAN_MINDAY (24)
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME_NAME 3000
#define F_NETWORK_HOSTMASK 1362
#define PG_IOLBF _IOLBF
#define __USE_KERNEL_IPV6_DEFS 0
#define F_INT8_MUL_CASH 3399
#define F_PG_GET_REPLICATION_SLOTS 3781
#define F_CHARSEND 2435
#define __attribute_used__ __attribute__ ((__used__))
#define RelationHasReferenceCountZero(relation) ((bool)((relation)->rd_refcnt == 0))
#define VARATT_IS_EXTENDED(PTR) (!VARATT_IS_4B_U(PTR))
#define ERRCODE_INVALID_DATABASE_DEFINITION MAKE_SQLSTATE('4','2','P','1','2')
#define F_POINT_IN 117
#define __KERNEL_STRICT_NAMES 
#define SYNC_METHOD_FSYNC 0
#define F_PG_STAT_RESET 2274
#define pg_write_barrier_impl() __atomic_thread_fence(__ATOMIC_RELEASE)
#define __INT64_C(c) c ## L
#define F_PERCENTILE_CONT_FLOAT8_FINAL 3975
#define SA_SIGINFO 4
#define F_PG_ADVISORY_XACT_LOCK_SHARED_INT4 3094
#define F_INT28PL 841
#define FIELDNO_HEAPTUPLEHEADERDATA_HOFF 4
#define HAVE_TYPEOF 1
#define F_CASH_DIV_CASH 3822
#define F_INT8SEND 2409
#define HEAP_INSERT_NO_LOGICAL 0x0010
#define __CHAR16_TYPE__ short unsigned int
#define F_BPCHAROCTETLEN 1375
#define Anum_pg_class_relfrozenxid 29
#define vertex_tuple_properties Anum_ag_label_vertex_table_properties - 1
#define F_POINT_BELOW 134
#define ERRCODE_WITH_CHECK_OPTION_VIOLATION MAKE_SQLSTATE('4','4','0','0','0')
#define F_CLOSE_LS 1488
#define HAVE_CRYPT 1
#define RelationGetRelationName(relation) (NameStr((relation)->rd_rel->relname))
#define DSM_IMPL_SYSV 2
#define F_HAS_COLUMN_PRIVILEGE_ID_NAME_NAME 3016
#define FRAMEOPTION_EXCLUDE_GROUP 0x10000
#define DO_AGGSPLIT_SERIALIZE(as) (((as) & AGGSPLITOP_SERIALIZE) != 0)
#define PATHOID 602
#define AttributeRelationId 1249
#define F_PG_WALFILE_NAME 2851
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define F_PG_NUM_NONNULLS 440
#define SIZEOF_DSA_POINTER 8
#define WL_SOCKET_WRITEABLE (1 << 2)
#define F_BE_LO_CREAT 957
#define CHECKPOINT_FLUSH_ALL 0x0010
#define RELTIMEARRAYOID 1024
#define LOG_DESTINATION_STDERR 1
#define F_JSONB_EXTRACT_PATH 3217
#define F_HASHINT4EXTENDED 425
#define __isascii(c) (((c) & ~0x7f) == 0)
#define F_TIMEPL 244
#define __toascii(c) ((c) & 0x7f)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define F_VARCHARIN 1046
#define F_TINTERVALREL 249
#define F_BOX_CENTER 138
#define PREV_CYPHER_CLAUSE_ALIAS "_"
#define SO_TIMESTAMP_OLD 29
#define F_SCALARLTSEL 103
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define F_PG_STAT_FILE_1ARG 2623
#define F_JSONB_EACH_TEXT 3932
#define F_UUID_HASH_EXTENDED 3412
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define F_TXID_SNAPSHOT_XMIN 2945
#define BLCKSZ 8192
#define _BITS_SIGINFO_ARCH_H 1
#define F_TSVECTOROUT 3611
#define PGNDISTINCTOID 3361
#define si_addr _sifields._sigfault.si_addr
#define SOL_TLS 282
#define DatumGetCommandId(X) ((CommandId) (X))
#define XLOGRECORD_H 
#define F_RI_FKEY_NOACTION_UPD 1655
#define RelationHasLocalCheckOption(relation) ((relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option_offset != 0 ? strcmp((char *) (relation)->rd_options + ((ViewOptions *) (relation)->rd_options)->check_option_offset, "local") == 0 : false)
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define F_POINT_NE 988
#define F_TIMETZ_HASH_EXTENDED 3410
#define F_TIMETZ_GE 1356
#define F_QUOTE_NULLABLE 1289
#define FIOSETOWN 0x8901
#define RELTIMEOID 703
#define PG_RETURN_ACL_P(x) PG_RETURN_POINTER(x)
#define SpinLockFree(lock) S_LOCK_FREE(lock)
#define IS_VALID_TIMESTAMP(t) (MIN_TIMESTAMP <= (t) && (t) < END_TIMESTAMP)
#define F_LOWER 870
#define HeapTupleHasVarWidth(tuple) (((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH) != 0)
#define ERRCODE_INSUFFICIENT_RESOURCES MAKE_SQLSTATE('5','3','0','0','0')
#define HAVE_DLOPEN 1
#define Anum_pg_class_relfilenode 7
#define SO_LOCK_FILTER 44
#define TSROUND(j) (rint(((double) (j)) * TS_PREC_INV) / TS_PREC_INV)
#define HeapTupleHeaderGetTypeId(tup) ( (tup)->t_choice.t_datum.datum_typeid )
#define _ASM_GENERIC_INT_LL64_H 
#define _SC_VERSION _SC_VERSION
#define F_NUMERIC_TO_CHAR 1772
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define RELKIND_COMPOSITE_TYPE 'c'
#define F_FLOAT8_REGR_AVGX 2810
#define F_FLOAT8_REGR_AVGY 2811
#define F_TSVECTOR_FILTER 3319
#define IPPROTO_EGP IPPROTO_EGP
#define __USER_LABEL_PREFIX__ 
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define GET_AGTYPE_VALUE_OBJECT_VALUE(agtv_object,search_key) get_agtype_value_object_value(agtv_object, search_key, sizeof(search_key) - 1)
#define F_POLY_OVERABOVE 2568
#define F_PG_EVENT_TRIGGER_TABLE_REWRITE_OID 4566
#define RelFileNodeEquals(node1,node2) ((node1).relNode == (node2).relNode && (node1).dbNode == (node2).dbNode && (node1).spcNode == (node2).spcNode)
#define F_PG_STAT_RESET_SINGLE_FUNCTION_COUNTERS 3777
#define errcontext set_errcontext_domain(TEXTDOMAIN), errcontext_msg
#define F_INT8_AVG_SERIALIZE 2786
#define __LC_MEASUREMENT 11
#define llast(l) lfirst(list_tail(l))
#define Anum_pg_attribute_attbyval 10
#define SCM_TIMESTAMPING_PKTINFO 58
#define __INT16_TYPE__ short int
#define PG_GETARG_NUMERIC_COPY(n) DatumGetNumericCopy(PG_GETARG_DATUM(n))
#define AT_SYMLINK_NOFOLLOW 0x100
#define F_ARRAY_UPPER 2092
#define __GLIBC__ 2
#define _SC_POLL _SC_POLL
#define F_DIST_CPOLY 728
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define F_ROW_TO_JSON_PRETTY 3156
#define RENAME_NOREPLACE (1 << 0)
#define F_TIME_LARGER 1377
#define F_PG_CONTROL_CHECKPOINT 3442
#define HASH_ATTACH 0x1000
#define F_NUMERIC_ACCUM 1833
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define F_TIMESTAMP_IZONE 2070
#define ERRCODE_FDW_INCONSISTENT_DESCRIPTOR_INFORMATION MAKE_SQLSTATE('H','V','0','2','1')
#define WCONTINUED 8
#define RelationUsesLocalBuffers(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP)
#define setjmp(env) _setjmp (env)
#define UINT_LEAST8_WIDTH 8
#define SizeOfXLogRecordBlockHeader (offsetof(XLogRecordBlockHeader, data_length) + sizeof(uint16))
#define ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('2','3','0','0','0')
#define HASH_SHARED_MEM 0x0800
#define ERRCODE_FDW_INVALID_STRING_LENGTH_OR_BUFFER_LENGTH MAKE_SQLSTATE('H','V','0','9','0')
#define F_NLIKEJOINSEL 1828
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define F_CSTRING_SEND 2501
#define PageGetLSN(page) PageXLogRecPtrGet(((PageHeader) (page))->pd_lsn)
#define BUFFERALIGN(LEN) TYPEALIGN(ALIGNOF_BUFFER, (LEN))
#define F_BITSHIFTLEFT 1677
#define F_CASH_CMP 377
#define _LARGEFILE64_SOURCE 1
#define isascii(c) __isascii (c)
#define __LDBL_HAS_INFINITY__ 1
#define F_HAS_TYPE_PRIVILEGE_ID 3143
#define F_LINE_SEND 2489
#define AG_ACCESS_FUNCTION_ID "age_id"
#define _BITS_UINTN_IDENTITY_H 1
#define F_GINARRAYEXTRACT_2ARGS 3076
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define DatumGetUInt16(X) ((uint16) (X))
#define F_GIST_CIRCLE_DISTANCE 3280
#define F_GETLK 5
#define __fsfilcnt_t_defined 
#define F_PG_NOTIFICATION_QUEUE_USAGE 3296
#define F_CHAROUT 33
#define F_FLOAT8DIV 217
#define PG_RETURN_UINT16(x) return UInt16GetDatum(x)
#define AGTYPEARRAYOID get_AGTYPEARRAYOID()
#define F_PG_STAT_GET_TUPLES_UPDATED 1932
#define ERRCODE_FLOATING_POINT_EXCEPTION MAKE_SQLSTATE('2','2','P','0','1')
#define F_PG_EVENT_TRIGGER_TABLE_REWRITE_REASON 4567
#define FRAMEOPTION_NONDEFAULT 0x00001
#define AF_PHONET PF_PHONET
#define F_EQJOINSEL 105
#define AGTE_IS_NULL(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_NULL)
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define ATTRIBUTE_FIXED_PART_SIZE (offsetof(FormData_pg_attribute,attcollation) + sizeof(Oid))
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U64 
#define INET_ADDRSTRLEN 16
#define _BITS_TYPESIZES_H 1
#define F_PG_TYPE_IS_VISIBLE 2080
#define INSTR_TIME_SET_ZERO(t) ((t).tv_sec = 0, (t).tv_nsec = 0)
#define F_TS_RANKCD_TT 3710
#define F_INETMI_INT8 2632
#define ACL_REFERENCES (1<<5)
#define _POSIX2_BC_SCALE_MAX 99
#define F_INTERVAL_JUSTIFY_DAYS 1295
#define F_DATE_LT_TIMESTAMP 2338
#define F_INT2SMALLER 771
#define ERRCODE_FDW_INVALID_COLUMN_NAME MAKE_SQLSTATE('H','V','0','0','7')
#define __GNU_LIBRARY__ 6
#define DatumGetAclP(X) ((Acl *) PG_DETOAST_DATUM(X))
#define VARATT_IS_EXTERNAL(PTR) VARATT_IS_1B_E(PTR)
#define PG_ATTRIBUTE_D_H 
#define F_ASCII 1620
#define __FLT32_DIG__ 6
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define __blkcnt_t_defined 
#define F_TIMESTAMP_OUT 1313
#define ERRCODE_INVALID_COLUMN_DEFINITION MAKE_SQLSTATE('4','2','6','1','1')
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define F_HAS_SEQUENCE_PRIVILEGE_ID_NAME 2183
#define S_IFMT __S_IFMT
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define ADJ_FREQUENCY 0x0002
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define F_ARRAY_LOWER 2091
#define F_TIMESTAMP_IZONE_TRANSFORM 3994
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define F_LIKEJOINSEL 1825
#define Anum_pg_type_typname 1
#define SO_TIMESTAMPING_OLD 37
#define ENOLINK 67
#define __HAVE_FLOAT128X 0
#define __FLT32_IS_IEC_60559__ 2
#define __GLIBC_MINOR__ 35
#define PF_LLC 26
#define EISDIR 21
#define isblank_l(c,l) __isblank_l ((c), (l))
#define repalloc_array(pointer,type,count) ((type *) repalloc(pointer, sizeof(type) * (count)))
#define POINTOID 600
#define s6_addr16 __in6_u.__u6_addr16
#define F_PG_DEPENDENCIES_IN 3404
#define HAVE_SRANDOM 1
#define F_INT4_ACCUM 1835
#define F_INT42PL 179
#define BGWORKER_BACKEND_DATABASE_CONNECTION 0x0002
#define SO_BROADCAST 6
#define __SVE_NUM_ZREGS 32
#define F_ANYENUM_IN 3504
#define F_BOX_MUL 1424
#define F_PG_IDENTIFY_OBJECT_AS_ADDRESS 3382
#define F_TINTERVALLENLE 270
#define ERRCODE_INVALID_GRANT_OPERATION MAKE_SQLSTATE('0','L','P','0','1')
#define SLAB_DEFAULT_BLOCK_SIZE (8 * 1024)
#define __SSIZE_T_TYPE __SWORD_TYPE
#define AG_AG_GRAPH_H 
#define F_PG_READ_FILE_ALL 3826
#define __DEV_T_TYPE __UQUAD_TYPE
#define F_GET_CURRENT_TS_CONFIG 3759
#define F_LTRIM1 881
#define USECS_PER_SEC INT64CONST(1000000)
#define F_MACADDR_CMP 836
#define ACL_ALL_RIGHTS_FDW (ACL_USAGE)
#define PG_RETURN_UINT64(x) return UInt64GetDatum(x)
#define F_TXID_CURRENT_IF_ASSIGNED 3348
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define SIGIO SIGPOLL
#define FD_H 
#define PACKAGE_TARNAME "postgresql"
#define XLogRecHasBlockRef(decoder,block_id) ((decoder)->blocks[block_id].in_use)
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __STDC_UTF_16__ 1
#define F_PG_JIT_AVAILABLE 315
#define OidFunctionCall7(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7) OidFunctionCall7Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define s6_addr32 __in6_u.__u6_addr32
#define AGE_VARNAME_SET_CLAUSE AGE_DEFAULT_VARNAME_PREFIX"set_clause"
#define F_DOMAIN_RECV 2598
#define le32toh(x) __uint32_identity (x)
#define SearchSysCacheCopy1(cacheId,key1) SearchSysCacheCopy(cacheId, key1, 0, 0, 0)
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define F_PG_ADVISORY_UNLOCK_ALL 2892
#define F_ENUM_LE 3512
#define F_POLY_NPOINTS 1445
#define F_INET_GIST_PICKSPLIT 3558
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define F_PG_AVAILABLE_EXTENSIONS 3082
#define F_PG_GET_PARTKEYDEF 3352
#define SearchSysCacheCopy3(cacheId,key1,key2,key3) SearchSysCacheCopy(cacheId, key1, key2, key3, 0)
#define __O_LARGEFILE 0
#define SearchSysCacheList1(cacheId,key1) SearchSysCacheList(cacheId, 1, key1, 0, 0)
#define NIL ((List *) NULL)
#define EXECNODES_H 
#define SCM_TXTIME SO_TXTIME
#define F_INT4AND 1898
#define ERRCODE_PROGRAM_LIMIT_EXCEEDED MAKE_SQLSTATE('5','4','0','0','0')
#define F_REGNAMESPACESEND 4088
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define F_BTHANDLER 330
#define F_JSONB_TO_TSVECTOR 4213
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define DT_SOCK DT_SOCK
#define InvalidBackendId (-1)
#define DSM_IMPL_MMAP 4
#define ACL_ID_PUBLIC 0
#define CACHELINEALIGN(LEN) TYPEALIGN(PG_CACHE_LINE_SIZE, (LEN))
#define AttrNumberGetAttrOffset(attNum) ( AssertMacro(AttrNumberIsForUserDefinedAttr(attNum)), ((attNum) - 1) )
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define F_BTINT8SORTSUPPORT 3131
#define ItemPointerGetOffsetNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetOffsetNumberNoCheck(pointer) )
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define PG_RETURN_CHAR(x) return CharGetDatum(x)
#define F_ARRAY_REMOVE 3167
#define Int64GetDatumFast(X) Int64GetDatum(X)
#define F_DPI 1610
#define SYNC_METHOD_FDATASYNC 1
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define F_ARRAY_TO_JSON 3153
#define PG_HAVE_ATOMIC_SUB_FETCH_U64 
#define F_MACADDR_SEND 2495
#define __FLT32X_HAS_INFINITY__ 1
#define Anum_pg_type_typispreferred 8
#define s6_addr __in6_u.__u6_addr8
#define UINT32_WIDTH 32
#define PG_RETURN_INT32(x) return Int32GetDatum(x)
#define __INT32_MAX__ 0x7fffffff
#define DatumGetObjectId(X) ((Oid) (X))
#define ERRCODE_RAISE_EXCEPTION MAKE_SQLSTATE('P','0','0','0','1')
#define F_PG_STAT_GET_AUTOVACUUM_COUNT 3055
#define F_TXID_SNAPSHOT_XMAX 2946
#define TYPCATEGORY_PSEUDOTYPE 'P'
#define F_XIDRECV 2440
#define __GLIBC_USE_DEPRECATED_GETS 0
#define BlockIdEquals(blockId1,blockId2) ((blockId1)->bi_hi == (blockId2)->bi_hi && (blockId1)->bi_lo == (blockId2)->bi_lo)
#define F_BOOL_ACCUM 3496
#define F_TSMATCHJOINSEL 3687
#define _POSIX_V7_LPBIG_OFFBIG -1
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define F_HASHBPCHAREXTENDED 972
#define F_JSONB_INSERT 3579
#define __INT_WIDTH__ 32
#define __S_IFCHR 0020000
#define RELKIND_TOASTVALUE 't'
#define O_ASYNC 020000
#define S_ISVTX __S_ISVTX
#define ERRCODE_IS_CATEGORY(ec) (((ec) & ~((1 << 12) - 1)) == 0)
#define BOXARRAYOID 1020
#define HAVE_POSIX_FALLOCATE 1
#define __STDC_IEC_559__ 1
#define MAKE_SQLSTATE(ch1,ch2,ch3,ch4,ch5) (PGSIXBIT(ch1) + (PGSIXBIT(ch2) << 6) + (PGSIXBIT(ch3) << 12) + (PGSIXBIT(ch4) << 18) + (PGSIXBIT(ch5) << 24))
#define SO_TYPE 3
#define F_PG_STAT_GET_ANALYZE_COUNT 3056
#define __STDC_ISO_10646__ 201706L
#define COMPLETION_TAG_BUFSIZE 64
#define CHECKPOINT_IS_SHUTDOWN 0x0001
#define TIMER_ABSTIME 1
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define _SC_NL_NMAX _SC_NL_NMAX
#define F_SUPPRESS_REDUNDANT_UPDATES_TRIGGER 1291
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define AGGSPLITOP_SKIPFINAL 0x02
#define MemoryContextCopyAndSetIdentifier(cxt,id) MemoryContextSetIdentifier(cxt, MemoryContextStrdup(cxt, id))
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define HEAP_XMAX_IS_KEYSHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_KEYSHR_LOCK)
#define F_TEXT_CHAR 944
#define ACL_MODECHG_ADD 1
#define F_FLOAT8RECV 2426
#define VAR_H 
#define BoolIsValid(boolean) ((boolean) == false || (boolean) == true)
#define F_OIDVECTOROUT 55
#define DatumGetChar(X) ((char) (X))
#define PROC_IS_AUTOVACUUM 0x01
#define __DECIMAL_DIG__ 36
#define AGTE_HAS_OFF(agte_) (((agte_)&AGTENTRY_HAS_OFF) != 0)
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define ERRCODE_INVALID_SQL_STATEMENT_NAME MAKE_SQLSTATE('2','6','0','0','0')
#define __USE_FORTIFY_LEVEL 2
#define LOCK_EX 2
#define REGROLEOID 4096
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define F_BITSHIFTRIGHT 1678
#define HeapTupleHeaderGetRawCommandId(tup) ( (tup)->t_choice.t_heap.t_field3.t_cid )
#define UNKNOWNOID 705
#define TS_PREC_INV 1000000.0
#define XLogArchiveCommandSet() (XLogArchiveCommand[0] != '\0')
#define Anum_pg_index_indkey 15
#define _POSIX2_EXPR_NEST_MAX 32
#define QTW_IGNORE_RANGE_TABLE 0x08
#define F_TEXT_RIGHT 3061
#define LSEGARRAYOID 1018
#define F_CASH_DIV_FLT4 847
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define F_MACADDR_NE 835
#define F_IN_RANGE_FLOAT8_FLOAT8 4139
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define __SC_THREAD_STACK_MIN_VALUE 75
#define ERRCODE_E_R_I_E_EVENT_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','3')
#define _LARGEFILE_SOURCE 1
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define NUMERIC_MAX_PRECISION 1000
#define __FLT128_IS_IEC_60559__ 2
#define ENABLE_NLS 1
#define AG_GET_ARG_AGTYPE_P(x) DATUM_GET_AGTYPE_P(PG_GETARG_DATUM(x))
#define F_SPG_BOX_QUAD_LEAF_CONSISTENT 5016
#define ESTALE 116
#define HeapTupleHasNulls(tuple) (((tuple)->t_data->t_infomask & HEAP_HASNULL) != 0)
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __SI_MAX_SIZE 128
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define F_HAS_TABLE_PRIVILEGE_ID_NAME 1924
#define LC_TIME __LC_TIME
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define F_PATH_N_GE 986
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define AutovacuumScheduleLock (&MainLWLockArray[23].lock)
#define SEGV_ACCADI SEGV_ACCADI
#define F_TIMESTAMP_NE_DATE 2369
#define IPV6_FREEBIND 78
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define __SIZEOF_FLOAT__ 4
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define ALIGNOF_LONG 8
#define OID_MAX UINT_MAX
#define _POSIX_LOGIN_NAME_MAX 9
#define __S_IFIFO 0010000
#define PTRDIFF_MAX (9223372036854775807L)
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define FPSIMD_MAGIC 0x46508001
#define pg_attribute_packed() __attribute__((packed))
#define HAVE_DECL_VSNPRINTF 1
#define F_JSONB_BUILD_OBJECT_NOARGS 3274
#define HAVE__BUILTIN_CONSTANT_P 1
#define _XBS5_ILP32_OFF32 -1
#define graph_exists(graph_name) OidIsValid(get_graph_oid(graph_name))
#define __ASM_SIGCONTEXT_H 
#define FNDELAY O_NDELAY
#define ProcArrayLock (&MainLWLockArray[4].lock)
#define IP_ORIGDSTADDR 20
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define F_INTERVAL_FINITE 1390
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define HAVE_STDLIB_H 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define F_TIME_TRANSFORM 3944
#define F_XML_IS_WELL_FORMED 3051
#define dlist_tail_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) dlist_tail_element_off(lhead, offsetof(type, membername))))
#define ALLOCSET_DEFAULT_MAXSIZE (8 * 1024 * 1024)
#define F_TEXTICREGEXNE 1239
#define F_EXLCK 4
#define SOL_ICMPV6 58
#define FLOAT8PASSBYVAL true
#define HeapTupleIsHeapOnly(tuple) HeapTupleHeaderIsHeapOnly((tuple)->t_data)
#define __attribute_const__ __attribute__ ((__const__))
#define ERRCODE_INDETERMINATE_DATATYPE MAKE_SQLSTATE('4','2','P','1','8')
#define TAS_SPIN(lock) TAS(lock)
#define SLIST_STATIC_INIT(name) {{NULL}}
#define F_VARCHAROUT 1047
#define F_PG_STAT_GET_FUNCTION_CALLS 2978
#define ERRCODE_FDW_REPLY_HANDLE MAKE_SQLSTATE('H','V','0','0','K')
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define F_MACADDR_GT 833
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define F_PG_STAT_GET_XACT_TUPLES_FETCHED 3039
#define DO_AGGSPLIT_COMBINE(as) (((as) & AGGSPLITOP_COMBINE) != 0)
#define ERRCODE_NO_DATA_FOUND MAKE_SQLSTATE('P','0','0','0','2')
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define F_ANY_OUT 2295
#define F_RANGESEL 3169
#define HAVE_TZNAME 1
#define F_NUMERIC_LOG 1736
#define AF_BLUETOOTH PF_BLUETOOTH
#define F_IN_RANGE_INT4_INT2 4129
#define HeapTupleHeaderSetXminCommitted(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_COMMITTED) )
#define F_PATH_N_GT 983
#define F_XIDSEND 2441
#define pg_restrict __restrict__
#define L_tmpnam 20
#define TRIGGEROID 2279
#define _DIRENT_HAVE_D_RECLEN 
#define PG_GETARG_BPCHAR_P(n) DatumGetBpCharP(PG_GETARG_DATUM(n))
#define PG_DIAG_SCHEMA_NAME 's'
#define ___int_wchar_t_h 
#define F_REGDICTIONARYSEND 3774
#define UINT8_C(c) c
#define F_CASH_MUL_INT4 864
#define F_XML_IS_WELL_FORMED_DOCUMENT 3052
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define MINS_PER_HOUR 60
#define __GNUC__ 11
#define F_TSQUERYSEND 3640
#define HAVE_DECL_POSIX_FADVISE 1
#define STA_UNSYNC 0x0040
#define F_ACLITEM_EQ 1062
#define HAVE_SYS_TYPES_H 1
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define IPPROTO_TCP IPPROTO_TCP
#define F_BE_LOREAD 954
#define HAVE_GCC__ATOMIC_INT32_CAS 1
#define F_TIMESTAMPTZ_EQ_DATE 2379
#define PG_DIAG_SQLSTATE 'C'
#define F_RDLCK 0
#define PGDDLCOMMANDOID 32
#define F_MACADDR8_AND 4121
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ERRCODE_T_R_STATEMENT_COMPLETION_UNKNOWN MAKE_SQLSTATE('4','0','0','0','3')
#define F_TO_REGOPERATOR 3476
#define appendStringInfoCharMacro(str,ch) (((str)->len + 1 >= (str)->maxlen) ? appendStringInfoChar(str, ch) : (void)((str)->data[(str)->len] = (ch), (str)->data[++(str)->len] = '\0'))
#define BackendRandomLock (&MainLWLockArray[43].lock)
#define HEAP_XACT_MASK 0xFFF0
#define F_NUMERIC_SERIALIZE 3335
#define F_HAS_COLUMN_PRIVILEGE_NAME_ATTNUM 3021
#define JSONBARRAYOID 3807
#define EXPANDED_POINTER_SIZE (VARHDRSZ_EXTERNAL + sizeof(varatt_expanded))
#define PF_ISDN 34
#define HAVE_GETADDRINFO 1
#define F_TIME_PART 1385
#define TSM_HANDLEROID 3310
#define F_HAS_SCHEMA_PRIVILEGE_NAME_ID 2269
#define F_PG_STAT_GET_TUPLES_FETCHED 1930
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define PageIsEmpty(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData)
#define F_TO_REGCLASS 3495
#define F_DATE_GT 1089
#define F_SPG_KD_PICKSPLIT 4025
#define F_REGNAMESPACEOUT 4085
#define FIELDNO_TUPLETABLESLOT_SLOW 4
#define AF_NFC PF_NFC
#define HAVE_DECL_STRNLEN 1
#define BlockNumberIsValid(blockNumber) ((bool) ((BlockNumber) (blockNumber) != InvalidBlockNumber))
#define AGTE_IS_BOOL(agte_) (AGTE_IS_BOOL_TRUE(agte_) || AGTE_IS_BOOL_FALSE(agte_))
#define ERRCODE_WARNING_NULL_VALUE_ELIMINATED_IN_SET_FUNCTION MAKE_SQLSTATE('0','1','0','0','3')
#define F_ICLIKESEL 1814
#define ERRCODE_STACKED_DIAGNOSTICS_ACCESSED_WITHOUT_ACTIVE_HANDLER MAKE_SQLSTATE('0','Z','0','0','2')
#define TRANSAM_H 
#define ERRCODE_INVALID_CURSOR_DEFINITION MAKE_SQLSTATE('4','2','P','1','1')
#define INT8OID 20
#define __daddr_t_defined 
#define F_RELTIMERECV 2464
#define F_IN_RANGE_INT2_INT8 4130
#define F_CLOSE_PS 366
#define F_LSEG_GE 1486
#define MSG_CTRUNC MSG_CTRUNC
#define SIZEOF_SIZE_T 8
#define PageIsPrunable(page,oldestxmin) ( AssertMacro(TransactionIdIsNormal(oldestxmin)), TransactionIdIsValid(((PageHeader) (page))->pd_prune_xid) && TransactionIdPrecedes(((PageHeader) (page))->pd_prune_xid, oldestxmin) )
#define DatumGetByteaPSlice(X,m,n) ((bytea *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define EAI_MEMORY -10
#define UINT64CONST(x) (x ##UL)
#define list_make4_int(x1,x2,x3,x4) lcons_int(x1, list_make3_int(x2, x3, x4))
#define F_GIST_POINT_DISTANCE 3064
#define MSG_PROXY MSG_PROXY
#define SO_DETACH_REUSEPORT_BPF 68
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __BIGGEST_ALIGNMENT__ 16
#define F_TIMESTAMPTZ_TO_CHAR 1770
#define F_INTINTERVAL 248
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define sa_handler __sigaction_handler.sa_handler
#define LONG_MAX __LONG_MAX__
#define IPV6_RECVHOPOPTS 53
#define PG_RETURN_NAME(x) return NameGetDatum(x)
#define STDERR_FILENO 2
#define F_XML_RECV 2898
#define F_POLY_CONTAINED 345
#define F_INT8RANGE_SUBDIFF 3923
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define F_PG_STAT_GET_TUPLES_HOT_UPDATED 1972
#define ItemIdGetFlags(itemId) ((itemId)->lp_flags)
#define __INT_FAST8_MAX__ 0x7f
#define Anum_pg_attribute_attnum 6
#define __FLT64_MAX_10_EXP__ 308
#define AGTYPE_CONTAINS_STRATEGY_NUMBER 7
#define F_ARRAY_APPEND 378
#define pg_ntoh16(x) pg_bswap16(x)
#define F_PG_STAT_GET_DB_TUPLES_FETCHED 2759
#define DLIST_STATIC_INIT(name) {{&(name).head, &(name).head}}
#define F_TINTERVALSTART 272
#define __GLIBC_USE_LIB_EXT2 1
#define F_NUMERIC_OUT 1702
#define F_POINT_RECV 2428
#define PG_HAVE_ATOMIC_FETCH_ADD_U64 
#define FunctionCall1(flinfo,arg1) FunctionCall1Coll(flinfo, InvalidOid, arg1)
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define Anum_pg_attribute_attndims 7
#define ITEMID_H 
#define F_PG_DEPENDENCIES_RECV 3406
#define HAVE_GETRLIMIT 1
#define WTERMSIG(status) __WTERMSIG (status)
#define F_TEXT_NAME 407
#define ERRCODE_UNTERMINATED_C_STRING MAKE_SQLSTATE('2','2','0','2','4')
#define ERRCODE_ZERO_LENGTH_CHARACTER_STRING MAKE_SQLSTATE('2','2','0','0','F')
#define ItemPointerIndicatesMovedPartitions(pointer) ( ItemPointerGetOffsetNumber(pointer) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(pointer) == MovedPartitionsBlockNumber )
#define F_XML_SEND 2899
#define __DBL_IS_IEC_60559__ 2
#define AF_SECURITY PF_SECURITY
#define STA_PPSTIME 0x0004
#define BufferIsLocal(buffer) ((buffer) < 0)
#define LOCK_RW 192
#define GROUPING_CAN_PARTIAL_AGG 0x0004
#define EXIT_SUCCESS 0
#define PG_BSWAP_H 
#define F_BOX_GT 127
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define UINT64_WIDTH 64
#define TYPTYPE_RANGE 'r'
#define pg_ntoh32(x) pg_bswap32(x)
#define F_GTSVECTOR_SAME 3652
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define HAVE_STRTOULL 1
#define SI_QUEUE SI_QUEUE
#define ERRCODE_AMBIGUOUS_ALIAS MAKE_SQLSTATE('4','2','P','0','9')
#define UINTMAX_WIDTH 64
#define _POSIX_SIGQUEUE_MAX 32
#define F_IN_RANGE_NUMERIC_NUMERIC 4141
#define HeapTupleHeaderSetNatts(tup,natts) ( (tup)->t_infomask2 = ((tup)->t_infomask2 & ~HEAP_NATTS_MASK) | (natts) )
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define F_OIDVECTORRECV 2420
#define F_CIRCLE_AREA 1468
#define SCM_CREDENTIALS SCM_CREDENTIALS
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define HAVE_FDATASYNC 1
#define IP_MTU_DISCOVER 10
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define PG_CACHE_LINE_SIZE 128
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define F_DCOT 1607
#define F_HAS_COLUMN_PRIVILEGE_ID_NAME 3022
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define PARSETREE_H 
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define F_PG_WALFILE_NAME_OFFSET 2850
#define F_DSIMPLE_LEXIZE 3726
#define F_BRIN_MINMAX_CONSISTENT 3385
#define AGT_GIN_MAX_LENGTH 125
#define __va_arg_pack() __builtin_va_arg_pack ()
#define IS_A_AGTYPE_SCALAR(agtype_val) ((agtype_val)->type >= AGTV_NULL && (agtype_val)->type < AGTV_ARRAY)
#define HAVE_READLINK 1
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define _FEATURES_H 1
#define F_INT8_SUM 1842
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define F_ELEM_CONTAINED_BY_RANGE 3860
#define GTSVECTORARRAYOID 3644
#define F_REGCLASSRECV 2452
#define NL_LANGMAX _POSIX2_LINE_MAX
#define pg_ntoh64(x) pg_bswap64(x)
#define F_TXID_STATUS 3360
#define F_IN_RANGE_TIMETZ_INTERVAL 4138
#define BUFFER_MAPPING_LWLOCK_OFFSET NUM_INDIVIDUAL_LWLOCKS
#define F_TXID_CURRENT_SNAPSHOT 2944
#define F_PG_CONVERSION_IS_VISIBLE 2093
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define TIMESTAMP_IS_NOBEGIN(j) ((j) == DT_NOBEGIN)
#define CIDROID 650
#define HASH_BLOBS 0x0020
#define F_UUID_RECV 2961
#define __DADDR_T_TYPE __S32_TYPE
#define Anum_pg_class_relforcerowsecurity 24
#define elog(elevel,...) do { elog_start(__FILE__, __LINE__, PG_FUNCNAME_MACRO); elog_finish(elevel, __VA_ARGS__); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define F_PG_STAT_GET_BACKEND_IDSET 1936
#define F_FLOAT8SMALLER 224
#define PACKAGE_BUGREPORT "pgsql-bugs@postgresql.org"
#define F_TIMESTAMP_CMP 1314
#define F_BITNOT 1676
#define __INTPTR_WIDTH__ 64
#define F_PG_REPLICATION_ORIGIN_SESSION_PROGRESS 6009
#define EPIPE 32
#define TSRANGEOID 3908
#define ERRCODE_RESTRICT_VIOLATION MAKE_SQLSTATE('2','3','0','0','1')
#define MAX_HANDLE_SZ 128
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define F_PG_STAT_GET_DB_XACT_COMMIT 1942
#define VirtualTransactionIdIsRecoveredPreparedXact(vxid) ((vxid).backendId == InvalidBackendId)
#define SMGROID 210
#define TablespaceCreateLock (&MainLWLockArray[19].lock)
#define F_INT8LT 469
#define F_GIN_TRICONSISTENT_JSONB_PATH 3489
#define LONG_MIN (-LONG_MAX - 1L)
#define F_NUMERIC_NE 1719
#define F_TS_HEADLINE_JSONB_BYID_OPT 4201
#define SIZE_WIDTH __WORDSIZE
#define STA_PPSWANDER 0x0400
#define TYPTYPE_PSEUDO 'p'
#define __FD_SETSIZE 1024
#define F_NUMERIC_CEIL 1711
#define F_CURSOR_TO_XMLSCHEMA 2928
#define DSA_H 
#define F_INTERVAL_PART 1172
#define F_BINARY_UPGRADE_SET_NEXT_PG_ENUM_OID 3589
#define F_AREAJOINSEL 140
#define h_errno (*__h_errno_location ())
#define F_BOOL_ACCUM_INV 3497
#define INSTR_TIME_ACCUM_DIFF(x,y,z) do { (x).tv_sec += (y).tv_sec - (z).tv_sec; (x).tv_nsec += (y).tv_nsec - (z).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define _XBS5_LP64_OFF64 1
#define F_INT8NOT 1907
#define F_REGEXP_MATCH_NO_FLAGS 3396
#define lfourth(l) lfirst(lnext(lnext(lnext(list_head(l)))))
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define PARSE_CLAUSE_H 
#define __FLT64_HAS_DENORM__ 1
#define SI_USER SI_USER
#define ITUP_H 
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define DEVNULL "/dev/null"
#define F_BTINT2CMP 350
#define ERRCODE_INVALID_TRANSACTION_STATE MAKE_SQLSTATE('2','5','0','0','0')
#define F_BE_LO_FROM_BYTEA 3457
#define EBADMSG 74
#define XLogRecGetDataLen(decoder) ((decoder)->main_data_len)
#define F_POLY_OVERBELOW 2567
#define AGTENTRY_IS_BOOL_FALSE 0x20000000
#define MakeExpandedObjectReadOnly(d,isnull,typlen) (((isnull) || (typlen) != -1) ? (d) : MakeExpandedObjectReadOnlyInternal(d))
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __LDBL_HAS_DENORM__ 1
#define ItemIdGetOffset(itemId) ((itemId)->lp_off)
#define F_HAS_TYPE_PRIVILEGE_NAME_ID 3139
#define F_PHRASETO_TSQUERY 5001
#define F_PG_DROP_REPLICATION_SLOT 3780
#define HAVE_UINTPTR_T 1
#define F_HAS_DATABASE_PRIVILEGE_NAME 2254
#define __S_IFREG 0100000
#define __SOCKADDR_ALLTYPES __SOCKADDR_ONETYPE (sockaddr) __SOCKADDR_ONETYPE (sockaddr_at) __SOCKADDR_ONETYPE (sockaddr_ax25) __SOCKADDR_ONETYPE (sockaddr_dl) __SOCKADDR_ONETYPE (sockaddr_eon) __SOCKADDR_ONETYPE (sockaddr_in) __SOCKADDR_ONETYPE (sockaddr_in6) __SOCKADDR_ONETYPE (sockaddr_inarp) __SOCKADDR_ONETYPE (sockaddr_ipx) __SOCKADDR_ONETYPE (sockaddr_iso) __SOCKADDR_ONETYPE (sockaddr_ns) __SOCKADDR_ONETYPE (sockaddr_un) __SOCKADDR_ONETYPE (sockaddr_x25)
#define LC_TIME_MASK (1 << __LC_TIME)
#define PG_DIAG_INTERNAL_QUERY 'q'
#define AGT_HEADER_FLOAT 0x00000001
#define AGT_ROOT_COUNT(agtp_) (*(uint32 *)VARDATA(agtp_) & AGT_CMASK)
#define LC_ADDRESS __LC_ADDRESS
#define F_ARRAY_NDIMS 748
#define SIGABRT 6
#define ACL_ALL_RIGHTS_COLUMN (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_REFERENCES)
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define F_TEXT_STARTS_WITH 3696
#define F_POLY_OVERLEFT 342
#define POSIX_FADV_NORMAL 0
#define F_JSON_ARRAY_ELEMENTS 3955
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define ERRCODE_INVALID_TRANSACTION_TERMINATION MAKE_SQLSTATE('2','D','0','0','0')
#define IndexTupleHasVarwidths(itup) ((((IndexTuple) (itup))->t_info & INDEX_VAR_MASK))
#define TIMEOID 1083
#define __dev_t_defined 
#define F_INT2IN 38
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define F_HAS_ANY_COLUMN_PRIVILEGE_ID 3029
#define F_PG_LSN_MI 3237
#define F_BOX_LEFT 188
#define HeapTupleHeaderSetTypMod(tup,typmod) ( (tup)->t_choice.t_datum.datum_typmod = (typmod) )
#define F_PG_NUM_NULLS 438
#define HAVE_SYS_UN_H 1
#define SO_DONTROUTE 5
#define F_BYTEA_SUBSTR_NO_LEN 2013
#define __DBL_MAX_EXP__ 1024
#define ERRCODE_FDW_COLUMN_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','5')
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define PARAM_FLAG_CONST 0x0001
#define S_LOCK_H 
#define HAVE_STRSIGNAL 1
#define __WCHAR_WIDTH__ 32
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define SEGV_ADIDERR SEGV_ADIDERR
#define MinCommandIdAttributeNumber (-4)
#define HEAP_LOCK_MASK (HEAP_XMAX_SHR_LOCK | HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define DatumGetInt32(X) ((int32) (X))
#define _BITS_WCHAR_H 1
#define IP_RECVERR 11
#define innerPlanState(node) (((PlanState *)(node))->righttree)
#define ERRCODE_SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED MAKE_SQLSTATE('2','5','0','0','7')
#define F_PG_STAT_GET_BACKEND_WAIT_EVENT 2853
#define MAKEFUNC_H 
#define F_BOOL_ANYTRUE 3499
#define F_INT4_ACCUM_INV 3568
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define Anum_pg_index_indislive 13
#define ERRCODE_DUPLICATE_FUNCTION MAKE_SQLSTATE('4','2','7','2','3')
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define isspace_l(c,l) __isspace_l ((c), (l))
#define F_PG_CREATE_RESTORE_POINT 3098
#define MemoryContextIsValid(context) ((context) != NULL && (IsA((context), AllocSetContext) || IsA((context), SlabContext) || IsA((context), GenerationContext)))
#define F_TSRANGE_SUBDIFF 3929
#define XLR_BLOCK_ID_DATA_LONG 254
#define ETOOMANYREFS 109
#define TYPCATEGORY_INVALID '\0'
#define ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE MAKE_SQLSTATE('0','3','0','0','0')
#define AG_VERTEX_COLNAME_PROPERTIES "properties"
#define PG_TRY() do { sigjmp_buf *save_exception_stack = PG_exception_stack; ErrorContextCallback *save_context_stack = error_context_stack; sigjmp_buf local_sigjmp_buf; if (sigsetjmp(local_sigjmp_buf, 0) == 0) { PG_exception_stack = &local_sigjmp_buf
#define F_ARRAYCONTAINED 2749
#define F_HAS_DATABASE_PRIVILEGE_ID 2255
#define _POSIX_TZNAME_MAX 6
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define _POSIX_SSIZE_MAX 32767
#define F_INTERVAL_LE 1165
#define F_CIRCLE_OVERRIGHT 1456
#define Anum_ag_label_relation 5
#define F_TXID_SNAPSHOT_RECV 2941
#define F_CIRCLE_ABOVE 1461
#define MCAST_INCLUDE 1
#define RWH_WRITE_LIFE_SHORT 2
#define F_PG_STAT_GET_XACT_FUNCTION_SELF_TIME 3048
#define _POSIX_RE_DUP_MAX 255
#define _POSIX_MAX_CANON 255
#define IPV6_UNICAST_HOPS 16
#define F_HAS_TABLE_PRIVILEGE_ID 1927
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define F_BITTYPMODOUT 2920
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define OldSerXidLock (&MainLWLockArray[31].lock)
#define PF_PHONET 35
#define FRAMEOPTION_RANGE 0x00002
#define F_DATABASE_TO_XML 2936
#define F_GIN_EXTRACT_JSONB 3482
#define USE_SYSV_SHARED_MEMORY 1
#define __USECONDS_T_TYPE __U32_TYPE
#define F_FLOAT8IN 214
#define HAVE_GCC__ATOMIC_INT64_CAS 1
#define DT_BLK DT_BLK
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define F_INT8_AVG_ACCUM 2746
#define F_TIME_SMALLER 1378
#define ERRCODE_CANNOT_CONNECT_NOW MAKE_SQLSTATE('5','7','P','0','3')
#define F_GIN_EXTRACT_JSONB_QUERY 3483
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define REGBUF_STANDARD 0x08
#define F_TIMETZ_OUT 1351
#define INSTR_TIME_IS_ZERO(t) ((t).tv_nsec == 0 && (t).tv_sec == 0)
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define EXFULL 54
#define _LINUX_STDDEF_H 
#define pg_spin_delay_impl() ((void)0)
#define RTBelowStrategyNumber 10
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define _STDARG_H 
#define F_TS_RANKCD_TTF 3709
#define SHRT_MIN (-SHRT_MAX - 1)
#define ERRCODE_ESCAPE_CHARACTER_CONFLICT MAKE_SQLSTATE('2','2','0','0','B')
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define HAVE_EDITLINE_HISTORY_H 1
#define AF_AX25 PF_AX25
#define _PC_VDISABLE _PC_VDISABLE
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define SO_COOKIE 57
#define F_TIMESTAMPTZ_LT_DATE 2377
#define F_PG_STOP_BACKUP_V2 2739
#define F_LINE_HORIZONTAL 1415
#define CURSOR_OPT_GENERIC_PLAN 0x0040
#define _BITS_STDIO2_H 1
#define HEAP_XMAX_IS_LOCKED_ONLY(infomask) (((infomask) & HEAP_XMAX_LOCK_ONLY) || (((infomask) & (HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK)) == HEAP_XMAX_EXCL_LOCK))
#define HEAP_XMAX_IS_MULTI 0x1000
#define _SC_BARRIERS _SC_BARRIERS
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define ACL_EXECUTE_CHR 'X'
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define F_TIMETZ_GT 1357
#define ERRCODE_INVALID_OBJECT_DEFINITION MAKE_SQLSTATE('4','2','P','1','7')
#define DatumGetTransactionId(X) ((TransactionId) (X))
#define F_PG_STAT_GET_WAL_SENDERS 3099
#define st_atime st_atim.tv_sec
#define PARTITION_STRATEGY_LIST 'l'
#define __stub___compat_uselib 
#define SHAREDTUPLESTORE_H 
#define F_PG_OPTIONS_TO_TABLE 2289
#define AGE_DEFAULT_ALIAS_PREFIX "_age_default_alias_"
#define F_FLOAT8LE 296
#define F_CONTJOINSEL 1303
#define __INT_FAST8_TYPE__ signed char
#define F_FLOAT8LT 295
#define _POSIX_CPUTIME 0
#define si_stime _sifields._sigchld.si_stime
#define is_windows_absolute_path(filename) ( IS_WINDOWS_DIR_SEP((filename)[0]) || (isalpha((unsigned char) ((filename)[0])) && (filename)[1] == ':' && IS_WINDOWS_DIR_SEP((filename)[2])) )
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define F_PG_CONTROL_SYSTEM 3441
#define F_ARRAY_POSITION 3277
#define F_PG_WAL_REPLAY_RESUME 3072
#define O_TMPFILE __O_TMPFILE
#define Anum_pg_class_relpartbound 33
#define SearchSysCacheExists3(cacheId,key1,key2,key3) SearchSysCacheExists(cacheId, key1, key2, key3, 0)
#define F_FLOAT8MI 219
#define Anum_pg_class_relhasindex 13
#define OidGenLock (&MainLWLockArray[2].lock)
#define EBUSY 16
#define F_INTERVAL_TIME 1419
#define F_NUMERIC_ABS 1704
#define AT_STATX_DONT_SYNC 0x4000
#define AG_EDGE_COLNAME_ID "id"
#define SOCK_PACKET SOCK_PACKET
#define F_GET_RW_HINT 1035
#define F_TSVECTOR_DELETE_STR 3321
#define ENOTNAM 118
#define DynamicSharedMemoryControlLock (&MainLWLockArray[34].lock)
#define F_FLOAT8NE 294
#define ERRCODE_INSUFFICIENT_PRIVILEGE MAKE_SQLSTATE('4','2','5','0','1')
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define AG_CYPHER_TRANSFORM_ENTITY_H 
#define _LINUX_CLOSE_RANGE_H 
#define F_DATE_LE_TIMESTAMP 2339
#define ERRCODE_QUERY_CANCELED MAKE_SQLSTATE('5','7','0','1','4')
#define __U16_TYPE unsigned short int
#define F_JSON_EXTRACT_PATH_TEXT 3953
#define SO_SNDTIMEO_NEW 67
#define CLD_EXITED CLD_EXITED
#define F_PG_STAT_GET_XACT_TUPLES_INSERTED 3040
#define F_REGROLEOUT 4092
#define WINT_MAX (4294967295u)
#define F_TSQUERYIN 3612
#define F_NUMERIC_ADD 1724
#define F_RANGE_OVERRIGHT 3866
#define _POSIX_NAME_MAX 14
#define UINTPTR_MAX (18446744073709551615UL)
#define F_PG_STAT_GET_DB_TUPLES_UPDATED 2761
#define F_NAMEICLIKE 1635
#define SORTSUPPORT_H 
#define EXEC_FLAG_EXPLAIN_ONLY 0x0001
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#define ERRCODE_DIAGNOSTICS_EXCEPTION MAKE_SQLSTATE('0','Z','0','0','0')
#define F_FLOAT8PL 218
#define F_SHA224_BYTEA 3419
#define HeapTupleHeaderSetMatch(tup) ( (tup)->t_infomask2 |= HEAP_TUPLE_HAS_MATCH )
#define linitial_oid(l) lfirst_oid(list_head(l))
#define F_FLOAT4_ACCUM 208
#define F_INDEX_AM_HANDLER_IN 326
#define HTUP_DETAILS_H 
#define AF_ATMSVC PF_ATMSVC
#define __LDBL_REDIR2_DECL(name) 
#define TypeIsToastable(typid) (get_typstorage(typid) != 'p')
#define PageClearHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags &= ~PD_HAS_FREE_LINES)
#define LOCALLOCK_LOCKMETHOD(llock) ((llock).tag.lock.locktag_lockmethodid)
#define LC_MONETARY __LC_MONETARY
#define __ASM_GENERIC_POSIX_TYPES_H 
#define F_RECORD_RECV 2402
#define F_PG_GET_RULEDEF_EXT 2504
#define F_ARRAY_FILL_WITH_LOWER_BOUNDS 1286
#define PG_GETARG_NAME(n) DatumGetName(PG_GETARG_DATUM(n))
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define HEAP_XMAX_INVALID 0x0800
#define __INT_LEAST64_TYPE__ long int
#define F_FLOAT8_TIMESTAMPTZ 1158
#define F_BTRECORDIMAGECMP 3187
#define TransactionIdIsValid(xid) ((xid) != InvalidTransactionId)
#define F_CASHSMALLER 899
#define __FLT_MIN_EXP__ (-125)
#define pairingheap_is_empty(h) ((h)->ph_root == NULL)
#define F_NETWORKJOINSEL 3561
#define F_NETWORK_MASKLEN 697
#define JULIAN_MINMONTH (11)
#define F_GENERATE_SERIES_STEP_INT8 1068
#define F_SCALARGTJOINSEL 108
#define lsecond_oid(l) lfirst_oid(lnext(list_head(l)))
#define WEXITED 4
#define F_TEXTOVERLAY_NO_LEN 1405
#define Anum_pg_class_relhastriggers 21
#define F_GETOWN __F_GETOWN
#define F_PG_STAT_GET_DB_BLK_WRITE_TIME 2845
#define IPV6_V6ONLY 26
#define PG_GET_COLLATION() (fcinfo->fncollation)
#define F_GTSQUERY_COMPRESS 3695
#define MaxHeapTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(SizeofHeapTupleHeader) + sizeof(ItemIdData))))
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define F_GIN_TSQUERY_TRICONSISTENT 3921
#define REGPROCEDUREOID 2202
#define _POSIX_SYMLINK_MAX 255
#define PIV_LOG_WARNING (1 << 0)
#define AF_PPPOX PF_PPPOX
#define F_INT84 480
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define HAVE_UNISTD_H 1
#define CYPHER_TARGET_NODE_FLAG_INSERT 0x0001
#define F_TEXTREGEXSUBSTR 2073
#define Anum_pg_class_relowner 5
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define IPV6_RECVRTHDR 56
#define alloca(size) __builtin_alloca (size)
#define F_INT48 481
#define AG_GETARG_GRAPHID(a) DATUM_GET_GRAPHID(PG_GETARG_DATUM(a))
#define F_DEGREES 1608
#define F_INT28EQ 1850
#define ERRCODE_INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION MAKE_SQLSTATE('2','2','0','1','G')
#define NL_SETMAX INT_MAX
#define IP_MULTICAST_ALL 49
#define HAVE_SYS_IPC_H 1
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define ERRCODE_LOCK_FILE_EXISTS MAKE_SQLSTATE('F','0','0','0','1')
#define AllocSizeIsValid(size) ((Size) (size) <= MaxAllocSize)
#define PF_IRDA 23
#define F_SPG_BOX_QUAD_CONFIG 5012
#define __THROWNL __attribute__ ((__nothrow__))
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define ReplicationOriginLock (&MainLWLockArray[40].lock)
#define AGTENTRY_HAS_OFF 0x80000000
#define _DIRENT_HAVE_D_OFF 
#define F_TIMESTAMP_LE 1155
#define F_ARRAY_REPLACE 3168
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define F_ENUM_EQ 3508
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define INT_LEAST32_WIDTH 32
#define HeapTupleSetOid(tuple,oid) HeapTupleHeaderSetOid((tuple)->t_data, (oid))
#define FASYNC O_ASYNC
#define VARHDRSZ_SHORT offsetof(varattrib_1b, va_data)
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define CHECKPOINT_IMMEDIATE 0x0004
#define _LOCALE_H 1
#define MAXALIGN_DOWN(LEN) TYPEALIGN_DOWN(MAXIMUM_ALIGNOF, (LEN))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define _NSIG (__SIGRTMAX + 1)
#define ERRCODE_READ_ONLY_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','6')
#define PG_HAVE_ATOMIC_ADD_FETCH_U64 
#define __ARM_FP16_ARGS 1
#define PG_RETURN_BYTEA_P(x) PG_RETURN_POINTER(x)
#define F_ABSTIME_TIMESTAMPTZ 1173
#define F_TEXTRECV 2414
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define __FP_FAST_FMAF 1
#define F_BE_LO_TRUNCATE64 3172
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define AG_AG_NODES_H 
#define ERRCODE_CHARACTER_NOT_IN_REPERTOIRE MAKE_SQLSTATE('2','2','0','2','1')
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define IPV6_RECVTCLASS 66
#define ERRCODE_PROTOCOL_VIOLATION MAKE_SQLSTATE('0','8','P','0','1')
#define F_LSEG_VERTICAL 997
#define AGT_ROOT_BINARY_FLAGS(agtp_) (*(uint32 *)VARDATA(agtp_) & AGT_FBINARY_MASK)
#define __INT_LEAST32_MAX__ 0x7fffffff
#define O_RSYNC O_SYNC
#define F_CASH_LE 891
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define F_ENUM_GE 3513
#define F_NAMESEND 2423
#define F_ARRAY_AGG_FINALFN 2334
#define F_TEXTREGEXNE 1256
#define lfirst_int(lc) ((lc)->data.int_value)
#define F_PG_CREATE_LOGICAL_REPLICATION_SLOT 3786
#define Natts_ag_label 6
#define WINT_MIN (0u)
#define TSQUERYARRAYOID 3645
#define PageSetAllVisible(page) (((PageHeader) (page))->pd_flags |= PD_ALL_VISIBLE)
#define MaxSizeOfXLogRecordBlockHeader (SizeOfXLogRecordBlockHeader + SizeOfXLogRecordBlockImageHeader + SizeOfXLogRecordBlockCompressHeader + sizeof(RelFileNode) + sizeof(BlockNumber))
#define __STRINGS_FORTIFIED 1
#define F_WINDOW_LEAD_WITH_OFFSET_AND_DEFAULT 3111
#define F_ANYELEMENT_IN 2312
#define EXPANDEDDATUM_H 
#define _PG_NUMERIC_H_ 
#define __key_t_defined 
#define F_INT82 714
#define USE_DSM_MMAP 
#define F_PG_HAS_ROLE_ID_NAME 2707
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define REL_HAS_ALL_PART_PROPS(rel) ((rel)->part_scheme && (rel)->boundinfo && (rel)->nparts > 0 && (rel)->part_rels && (rel)->partexprs && (rel)->nullable_partexprs)
#define F_TEXTNE 157
#define SerializablePredicateLockListLock (&MainLWLockArray[30].lock)
#define ERRCODE_UNDEFINED_PARAMETER MAKE_SQLSTATE('4','2','P','0','2')
#define __unix__ 1
#define IPV6_MTU 24
#define SO_RCVLOWAT 18
#define att_align_pointer(cur_offset,attalign,attlen,attptr) ( ((attlen) == -1 && VARATT_NOT_PAD_BYTE(attptr)) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define IPV6_RECVDSTOPTS 58
#define SIG_ATOMIC_WIDTH 32
#define F_MACADDR_IN 436
#define F_HAS_COLUMN_PRIVILEGE_NAME_NAME_ATTNUM 3013
#define JSONARRAYOID 199
#define CLASS_TUPLE_SIZE (offsetof(FormData_pg_class,relminmxid) + sizeof(TransactionId))
#define IPPROTO_MTP IPPROTO_MTP
#define F_ENUM_IN 3506
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define SK_SEARCHARRAY 0x0020
#define SECURITY_RESTRICTED_OPERATION 0x0002
#define _XOPEN_LEGACY 1
#define TYPECACHE_HASH_PROC 0x0010
#define F_JSONB_CONTAINS 4046
#define F_RI_FKEY_SETNULL_UPD 1651
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __HAVE_DISTINCT_FLOAT64 0
#define PARSE_RELATION_H 
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define __LP64__ 1
#define INT8ARRAYOID 1016
#define BTLessStrategyNumber 1
#define F_PG_STAT_GET_DB_CONFLICT_LOCK 3066
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define F_GIST_POINT_COMPRESS 1030
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define InvalidStrategy ((StrategyNumber) 0)
#define F_REGEXNEJOINSEL 1827
#define __FLT_EVAL_METHOD_C99__ 0
#define F_RANGE_GIST_CONSISTENT 3875
#define F_BOX_ADD 1422
#define RelCacheInitLock (&MainLWLockArray[16].lock)
#define Anum_pg_type_typreceive 16
#define F_TIMESTAMP_NE 1153
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __USE_UNIX98 1
#define st_ctime st_ctim.tv_sec
#define NUM_PREDICATELOCK_PARTITIONS (1 << LOG2_NUM_PREDICATELOCK_PARTITIONS)
#define F_BYTEAOUT 31
#define F_FLOAT8UM 220
#define WINT_WIDTH 32
#define F_HASHBPCHAR 1080
#define F_BTINT24CMP 2190
#define ERRCODE_CANT_CHANGE_RUNTIME_PARAM MAKE_SQLSTATE('5','5','P','0','2')
#define IPV6_DSTOPTS 59
#define F_PG_STAT_GET_DB_STAT_RESET_TIME 3074
#define F_RANGE_OVERLAPS 3857
#define PG_END_TRY() } PG_exception_stack = save_exception_stack; error_context_stack = save_context_stack; } while (0)
#define Anum_pg_class_relhasoids 19
#define DatumGetVarCharPSlice(X,m,n) ((VarChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define TZDISP_LIMIT ((MAX_TZDISP_HOUR + 1) * SECS_PER_HOUR)
#define F_ICREGEXNESEL 1823
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define InvalidTransactionId ((TransactionId) 0)
#define STA_NANO 0x2000
#define ACLITEM_ALL_GOPTION_BITS ((AclMode) 0xFFFF << 16)
#define ESCAPE_STRING_SYNTAX 'E'
#define F_ENUM_LT 3510
#define __FLT64_MIN_EXP__ (-1021)
#define IPV6_RECVERR 25
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PF_MAX 46
#define F_VARBIT_OUT 1580
#define F_HAS_TABLE_PRIVILEGE_NAME_ID 1923
#define AssertState(condition) ((void)true)
#define F_INT4_SUM 1841
#define F_INTERVAL_MUL 1618
#define SIGNAL_ARGS int postgres_signal_arg
#define F_INT8DEC_ANY 3547
#define EXEC_FLAG_BACKWARD 0x0004
#define CHAR_MAX UCHAR_MAX
#define ScanDirectionIsNoMovement(direction) ((bool) ((direction) == NoMovementScanDirection))
#define F_MACADDR_OUT 437
#define F_REGPROCSEND 2445
#define F_CIDR_OUT 1427
#define FPE_INTDIV FPE_INTDIV
#define SEEK_DATA 3
#define F_HASH_RANGE_EXTENDED 3417
#define AGT_FARRAY 0x40000000
#define IP_RECVTOS 13
#define F_IN_RANGE_TIME_INTERVAL 4137
#define SO_PEERSEC 31
#define SOL_DECNET 261
#define ERRCODE_UNDEFINED_FUNCTION MAKE_SQLSTATE('4','2','8','8','3')
#define NormalTransactionIdFollows(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) > 0)
#define ABSTIMEARRAYOID 1023
#define PG_RETURN_BPCHAR_P(x) PG_RETURN_POINTER(x)
#define F_BOX_AREA 975
#define F_TINTERVALLENLT 268
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define F_INET_SAME_FAMILY 4071
#define __FDS_BITS(set) ((set)->fds_bits)
#define TYPECACHE_CMP_PROC 0x0008
#define F_BTTIDCMP 2794
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define F_PERCENTILE_CONT_FLOAT8_MULTI_FINAL 3981
#define ERRCODE_L_E_INVALID_SPECIFICATION MAKE_SQLSTATE('0','F','0','0','1')
#define F_INT42GT 163
#define XLogRecPtrIsInvalid(r) ((r) == InvalidXLogRecPtr)
#define F_TEXTOCTETLEN 1374
#define F_INT48PL 1278
#define F_SPG_TEXT_INNER_CONSISTENT 4030
#define LONG_BIT 64
#define F_PG_STAT_GET_BGWRITER_REQUESTED_CHECKPOINTS 2770
#define __FLT16_MIN_10_EXP__ (-4)
#define IP_TOS 1
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define F_PG_CURRENT_WAL_LSN 2849
#define F_BOX_OVERRIGHT 190
#define DatumGetBpCharP(X) ((BpChar *) PG_DETOAST_DATUM(X))
#define PG_NARGS() (fcinfo->nargs)
#define INNER_VAR 65000
#define F_HAS_TABLESPACE_PRIVILEGE_ID 2395
#define TRAP_HWBKPT TRAP_HWBKPT
#define F_HASHCHAREXTENDED 446
#define EXECDESC_H 
#define EvalPlanQualSetSlot(epqstate,slot) ((epqstate)->origslot = (slot))
#define F_RANGE_LOWER_INF 3853
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define F_WRLCK 1
#define EIDRM 43
#define PF_ROSE 11
#define ECOMM 70
#define EXEC_FLAG_SKIP_TRIGGERS 0x0010
#define F_CIRCLE_MUL_PT 1148
#define _PC_NAME_MAX _PC_NAME_MAX
#define BOOLOID 16
#define F_INT2VECTORIN 40
#define ResetTupleHashIterator(htable,iter) InitTupleHashIterator(htable, iter)
#define InvalidAttrNumber 0
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define F_CIRCLE_EQ 1462
#define VARATT_IS_EXTERNAL_NON_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && !VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SET_VARTAG_1B_E(PTR,tag) (((varattrib_1b_e *) (PTR))->va_header = 0x01, ((varattrib_1b_e *) (PTR))->va_tag = (tag))
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define PG_HAVE_ATOMIC_FETCH_AND_U32 
#define F_INT84MI 1275
#define _PC_MAX_CANON _PC_MAX_CANON
#define F_CASH_WORDS 935
#define PF_INET6 10
#define palloc0_object(type) ((type *) palloc0(sizeof(type)))
#define VARATT_CAN_MAKE_SHORT(PTR) (VARATT_IS_4B_U(PTR) && (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT) <= VARATT_SHORT_MAX)
#define F_DLOG10 1339
#define F_PG_GET_OBJECT_ADDRESS 3954
#define __USE_POSIX2 1
#define IP_TRANSPARENT 19
#define F_BOX_SEND 2485
#define F_LINE_PERP 1413
#define XLogRecGetData(decoder) ((decoder)->main_data)
#define HAVE_WCHAR_H 1
#define RelationSetTargetBlock(relation,targblock) do { RelationOpenSmgr(relation); (relation)->rd_smgr->smgr_targblock = (targblock); } while (0)
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define F_BOXES_BOUND_BOX 4067
#define F_PG_STAT_GET_XACT_NUMSCANS 3037
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ERRCODE_INTERNAL_ERROR MAKE_SQLSTATE('X','X','0','0','0')
#define FRAMEOPTION_END_UNBOUNDED_PRECEDING 0x00040
#define AARR_HASNULL(a) (VARATT_IS_EXPANDED_HEADER(a) ? ((a)->xpn.dvalues != NULL ? (a)->xpn.dnulls != NULL : ARR_HASNULL((a)->xpn.fvalue)) : ARR_HASNULL((ArrayType *) (a)))
#define _POSIX_NGROUPS_MAX 8
#define SHARED_TUPLESTORE_SINGLE_PASS 0x01
#define _POSIX_V7_ILP32_OFF32 -1
#define F_PGSQL_VERSION 89
#define F_JSON_TYPEOF 3968
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define RelationRelationId 1259
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define NUMRANGEOID 3906
#define __INT_LEAST32_WIDTH__ 32
#define ERRCODE_INVALID_ROW_COUNT_IN_LIMIT_CLAUSE MAKE_SQLSTATE('2','2','0','1','W')
#define AGT_GIN_FLAG_NULL 0x02
#define F_POINTS_BOX 1421
#define SHMEM_INDEX_SIZE (64)
#define __siginfo_t_defined 1
#define F_FMGR_INTERNAL_VALIDATOR 2246
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define IPV6_AUTOFLOWLABEL 70
#define F_INT4GT 147
#define SIGEV_THREAD SIGEV_THREAD
#define CHECK_FOR_INTERRUPTS() do { if (INTERRUPTS_PENDING_CONDITION()) ProcessInterrupts(); } while(0)
#define IPV6_2292PKTINFO 2
#define AF_IUCV PF_IUCV
#define F_POLY_RECV 2486
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define GET_VXID_FROM_PGPROC(vxid,proc) ((vxid).backendId = (proc).backendId, (vxid).localTransactionId = (proc).lxid)
#define BKPBLOCK_FLAG_MASK 0xF0
#define TransactionIdGetDatum(X) ((Datum) (X))
#define F_LSEG_OUT 120
#define __VERSION__ "11.3.0"
#define F_RANGE_GIST_PENALTY 3879
#define F_GIST_BOX_PICKSPLIT 2582
#define __IOV_MAX 1024
#define SizeOfPageHeaderData (offsetof(PageHeaderData, pd_linp))
#define TXID_SNAPSHOTOID 2970
#define IP_PKTINFO 8
#define __UINT64_C(c) c ## UL
#define ACL_MODECHG_EQL 3
#define INIT_CRC32C(crc) ((crc) = 0xFFFFFFFF)
#define MONTHS_PER_YEAR 12
#define ACL_CONNECT (1<<11)
#define INT64CONST(x) (x ##L)
#define USE_XSD_DATES 4
#define _SYS_CDEFS_H 1
#define ILL_ILLTRP ILL_ILLTRP
#define INDEX_MAX_KEYS 32
#define isprint(c) __isctype((c), _ISprint)
#define Anum_pg_index_indisprimary 6
#define F_INT8INC 1219
#define F_INTERVAL_ACCUM 1843
#define F_UUID_SEND 2962
#define AG_AG_CATALOG_H 
#define SET_VARSIZE_4B_C(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2) | 0x02)
#define RENAME_WHITEOUT (1 << 2)
#define ERRCODE_INVALID_XML_PROCESSING_INSTRUCTION MAKE_SQLSTATE('2','2','0','0','T')
#define F_HAS_DATABASE_PRIVILEGE_ID_ID 2253
#define F_PREFIXSEL 3437
#define AT_EACCESS 0x200
#define F_TIMESTAMPTZ_GE_TIMESTAMP 2531
#define MaxTupleAttributeNumber 1664
#define EBFONT 59
#define RELPATH_H 
#define HAVE_SYS_SEM_H 1
#define F_SETSEED 1599
#define FIELDNO_AGGSTATE_CURRENT_SET 20
#define PG_PORT_H 
#define _POSIX_VERSION 200809L
#define _STDC_PREDEF_H 1
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define TEXTARRAYOID 1009
#define F_PG_STAT_GET_BGWRITER_MAXWRITTEN_CLEAN 2773
#define CLOG_ZEROPAGE 0x00
#define INT_FAST8_WIDTH 8
#define F_REGCONFIGOUT 3737
#define __INT_WCHAR_T_H 
#define AGTE_IS_STRING(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_STRING)
#define PGDLLEXPORT 
#define F_DATE_CMP 1092
#define TRANSACTION_STATUS_IN_PROGRESS 0x00
#define SET_VARSIZE_COMPRESSED(PTR,len) SET_VARSIZE_4B_C(PTR, len)
#define F_POLY_CONTAIN_PT 1428
#define DEFAULT_SPINS_PER_DELAY 100
#define PARTITION_STRATEGY_HASH 'h'
#define copyObject(obj) ((typeof(obj)) copyObjectImpl(obj))
#define HAVE_GCC__SYNC_INT32_CAS 1
#define SOCK_DGRAM SOCK_DGRAM
#define F_INT4LE 149
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define MINIMAL_TUPLE_PADDING ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) % MAXIMUM_ALIGNOF)
#define F_INT4LT 66
#define F_HASHOIDVECTOR 457
#define DN_RENAME 0x00000010
#define __bitwise __bitwise__
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define ERRCODE_INDEX_CORRUPTED MAKE_SQLSTATE('X','X','0','0','2')
#define __WINT_MAX__ 0xffffffffU
#define DSM_IMPL_POSIX 1
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define F_HASHFLOAT8EXTENDED 444
#define __ARM_FEATURE_FMA 1
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define F_PG_SIZE_BYTES 3334
#define F_SIMILAR_ESCAPE 1623
#define F_JSONB_PRETTY 3306
#define ERRCODE_INVALID_ESCAPE_SEQUENCE MAKE_SQLSTATE('2','2','0','2','5')
#define _SYS_SOCKET_H 1
#define palloc_object(type) ((type *) palloc(sizeof(type)))
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _T_PTRDIFF_ 
#define XMLOID 142
#define MSG_CONFIRM MSG_CONFIRM
#define ABSTIMEOID 702
#define TRAP_TRACE TRAP_TRACE
#define PF_FILE PF_LOCAL
#define HeapTupleHeaderClearHeapOnly(tup) ( (tup)->t_infomask2 &= ~HEAP_ONLY_TUPLE )
#define F_INTERVALTYPMODIN 2903
#define F_INT4NOT 1901
#define F_DATE_GE_TIMESTAMPTZ 2355
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define BlockIdGetBlockNumber(blockId) ( AssertMacro(BlockIdIsValid(blockId)), ((((BlockNumber) (blockId)->bi_hi) << 16) | ((BlockNumber) (blockId)->bi_lo)) )
#define F_TXID_SNAPSHOT_XIP 2947
#define F_INT4NE 144
#define ENOTDIR 20
#define RTAboveStrategyNumber 11
#define Anum_pg_attribute_attcollation 20
#define TransactionIdEquals(id1,id2) ((id1) == (id2))
#define __INT_FAST16_WIDTH__ 64
#define UPDATE_CLAUSE_SET "SET"
#define Anum_pg_publication_pubowner 2
#define BACKUP_LABEL_OLD "backup_label.old"
#define FPE_CONDTRAP FPE_CONDTRAP
#define F_BE_LO_CREATE 715
#define FIELDNO_EXPRCONTEXT_DOMAINDATUM 12
#define F_TIME_MI_TIME 1690
#define SOL_NFC 280
#define PARTDEFS_H 
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define AutovacuumLock (&MainLWLockArray[22].lock)
#define ARR_OVERHEAD_NONULLS(ndims) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims))
#define TEXTOID 25
#define F_MACADDR_GE 834
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define F_BTFLOAT84CMP 2195
#define ERRCODE_NULL_VALUE_NO_INDICATOR_PARAMETER MAKE_SQLSTATE('2','2','0','0','2')
#define INTERRUPTS_PENDING_CONDITION() (unlikely(InterruptPending))
#define F_SCHEMA_TO_XMLSCHEMA 2934
#define BOXOID 603
#define ControlFileLock (&MainLWLockArray[9].lock)
#define ERRCODE_INVALID_COLUMN_REFERENCE MAKE_SQLSTATE('4','2','P','1','0')
#define INT4ARRAYOID 1007
#define VARSIZE_EXTERNAL(PTR) (VARHDRSZ_EXTERNAL + VARTAG_SIZE(VARTAG_EXTERNAL(PTR)))
#define _POSIX_STREAM_MAX 8
#define F_PG_TERMINATE_BACKEND 2096
#define XLR_CHECK_CONSISTENCY 0x02
#define F_INT4PL 177
#define F_RANGE_CONSTRUCTOR2 3840
#define __FLT32_MANT_DIG__ 24
#define RTNotEqualStrategyNumber 19
#define ACL_ALL_RIGHTS_TYPE (ACL_USAGE)
#define F_PG_EVENT_TRIGGER_DROPPED_OBJECTS 3566
#define F_NUMERIC_AVG_DESERIALIZE 2741
#define F_PG_OPERATOR_IS_VISIBLE 2082
#define F_RI_FKEY_NOACTION_DEL 1654
#define SVE_VQ_MAX __SVE_VQ_MAX
#define INTALIGN(LEN) TYPEALIGN(ALIGNOF_INT, (LEN))
#define F_INT4RANGE_CANONICAL 3914
#define isupper_l(c,l) __isupper_l ((c), (l))
#define F_TIMESTAMP_SORTSUPPORT 3137
#define ERRCODE_INDETERMINATE_COLLATION MAKE_SQLSTATE('4','2','P','2','2')
#define F_CSTRING_OUT 2293
#define Anum_pg_type_typdefaultbin 28
#define F_POLY_CIRCLE 1474
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define ACL_EXECUTE (1<<7)
#define F_BOX_CONTAIN 187
#define __S_IFDIR 0040000
#define USE_POSIX_FADVISE 
#define F_PG_LOGICAL_SLOT_PEEK_CHANGES 3784
#define F_I2TOD 235
#define F_I2TOF 236
#define __SIZE_T__ 
#define RELSEG_SIZE 131072
#define __stub_gtty 
#define PARSE_NODE_H 
#define _LFS64_ASYNCHRONOUS_IO 1
#define si_value _sifields._rt.si_sigval
#define XLogArchivingActive() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode > ARCHIVE_MODE_OFF)
#define F_DATAN 1602
#define IP_PASSSEC 18
#define IPPORT_RESERVED 1024
#define SEEK_HOLE 4
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define F_EQSEL 101
#define NL_NMAX INT_MAX
#define si_utime _sifields._sigchld.si_utime
#define PG_GETARG_UINT16(n) DatumGetUInt16(PG_GETARG_DATUM(n))
#define F_TSQUERY_CMP 3668
#define F_HAS_FUNCTION_PRIVILEGE_NAME_ID 2257
#define RELKIND_RELATION 'r'
#define ItemIdGetLength(itemId) ((itemId)->lp_len)
#define F_DATE_PL_INTERVAL 2071
#define ADJ_SETOFFSET 0x0100
#define MSG_BATCH MSG_BATCH
#define RELPERSISTENCE_PERMANENT 'p'
#define LC_PAPER __LC_PAPER
#define _POSIX_QLIMIT 1
#define F_PG_STAT_GET_XACT_TUPLES_DELETED 3042
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define AI_ALL 0x0010
#define F_TEXTNLIKE 851
#define F_JSON_TO_RECORD 3204
#define Anum_pg_class_relminmxid 30
#define F_HAS_LANGUAGE_PRIVILEGE_ID_ID 2265
#define TIMEARRAYOID 1183
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define F_GIST_POINT_CONSISTENT 2179
#define F_RANGE_GIST_UNION 3876
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define PG_UINT64_MAX UINT64CONST(0xFFFFFFFFFFFFFFFF)
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define F_BIT_SEND 2457
#define F_NAMENLIKE 859
#define F_GENERATE_SERIES_INT4 1067
#define F_GENERATE_SERIES_INT8 1069
#define __wur __attribute_warn_unused_result__
#define SIGHUP 1
#define F_DIST_CPOINT 3290
#define __FLT16_DIG__ 3
#define PageGetContents(page) ((char *) (page) + MAXALIGN(SizeOfPageHeaderData))
#define PG_GETARG_UINT32(n) DatumGetUInt32(PG_GETARG_DATUM(n))
#define ELOOP 40
#define SET_LOCKTAG_ADVISORY(locktag,id1,id2,id3,id4) ((locktag).locktag_field1 = (id1), (locktag).locktag_field2 = (id2), (locktag).locktag_field3 = (id3), (locktag).locktag_field4 = (id4), (locktag).locktag_type = LOCKTAG_ADVISORY, (locktag).locktag_lockmethodid = USER_LOCKMETHOD)
#define F_NETWORK_SUPEQ 930
#define HEAP_LOCKED_UPGRADED(infomask) ( ((infomask) & HEAP_XMAX_IS_MULTI) != 0 && ((infomask) & HEAP_XMAX_LOCK_ONLY) != 0 && (((infomask) & (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)) == 0) )
#define Anum_pg_attribute_atttypmod 9
#define SYNC_METHOD_FSYNC_WRITETHROUGH 3
#define FIELDNO_EXPRCONTEXT_SCANTUPLE 1
#define HeapTupleClearHotUpdated(tuple) HeapTupleHeaderClearHotUpdated((tuple)->t_data)
#define WL_SOCKET_MASK (WL_SOCKET_READABLE | WL_SOCKET_WRITEABLE | WL_SOCKET_CONNECTED)
#define IS_SIMPLE_REL(rel) ((rel)->reloptkind == RELOPT_BASEREL || (rel)->reloptkind == RELOPT_OTHER_MEMBER_REL)
#define __FLT128_HAS_DENORM__ 1
#define VARATT_IS_EXTERNAL_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define F_JSONB_TO_RECORDSET 3491
#define FirstNormalTransactionId ((TransactionId) 3)
#define SIG_UNBLOCK 1
#define _POSIX_RTSIG_MAX 8
#define F_DUPFD 0
#define __off64_t_defined 
#define __F_GETSIG 11
#define F_SCALARGTSEL 104
#define F_PG_BLOCKING_PIDS 2561
#define F_REGDICTIONARYRECV 3773
#define PageSetHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags |= PD_HAS_FREE_LINES)
#define F_FLOAT4RECV 2424
#define dlist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, dlist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define ENTRY_ID_MASK INT64CONST(0x0000ffffffffffff)
#define IN_CLASSB_MAX 65536
#define __ORDER_PDP_ENDIAN__ 3412
#define F_PG_IS_OTHER_TEMP_SCHEMA 2855
#define _SYS_SIZE_T_H 
#define F_NUMERIC_SCALE 3281
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define UPDATE_CLAUSE_REMOVE "REMOVE"
#define _ISOC95_SOURCE 1
#define FunctionCall2(flinfo,arg1,arg2) FunctionCall2Coll(flinfo, InvalidOid, arg1, arg2)
#define FunctionCall3(flinfo,arg1,arg2,arg3) FunctionCall3Coll(flinfo, InvalidOid, arg1, arg2, arg3)
#define FunctionCall5(flinfo,arg1,arg2,arg3,arg4,arg5) FunctionCall5Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define FunctionCall6(flinfo,arg1,arg2,arg3,arg4,arg5,arg6) FunctionCall6Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define FunctionCall8(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) FunctionCall8Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define FunctionCall9(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) FunctionCall9Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define EL2HLT 51
#define F_INT2SHL 1896
#define __ARM_64BIT_STATE 1
#define F_CIRCLE_RADIUS 1470
#define RelationIsPopulated(relation) ((relation)->rd_rel->relispopulated)
#define F_PATH_MUL_PT 1438
#define F_PG_STAT_GET_TUPLES_RETURNED 1929
#define SVE_VQ_MIN __SVE_VQ_MIN
#define INDEX_SIZE_MASK 0x1FFF
#define DEFAULT_SYNC_METHOD PLATFORM_DEFAULT_SYNC_METHOD
#define AGT_ROOT_DATA_FBINARY(agtp_) VARDATA(agtp_);
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define MAXPGPATH 1024
#define ACL_ALL_RIGHTS_TABLESPACE (ACL_CREATE)
#define __socklen_t_defined 
#define SO_ACCEPTCONN 30
#define F_FLOAT4_NUMERIC 1742
#define CLOCK_MONOTONIC_COARSE 6
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define PF_ROUTE PF_NETLINK
#define F_FLOAT48MI 282
#define att_align_nominal(cur_offset,attalign) ( ((attalign) == 'i') ? INTALIGN(cur_offset) : (((attalign) == 'c') ? (uintptr_t) (cur_offset) : (((attalign) == 'd') ? DOUBLEALIGN(cur_offset) : ( AssertMacro((attalign) == 's'), SHORTALIGN(cur_offset) ))) )
#define __have_pthread_attr_t 1
#define PageGetSpecialSize(page) ((uint16) (PageGetPageSize(page) - ((PageHeader)(page))->pd_special))
#define RTSameStrategyNumber 6
#define VARSIZE_ANY_EXHDR(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR)-VARHDRSZ_EXTERNAL : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR)-VARHDRSZ_SHORT : VARSIZE_4B(PTR)-VARHDRSZ))
#define AG_RETURN_GRAPHID(x) return GRAPHID_GET_DATUM(x)
#define F_FLOAT8_NUMERIC 1743
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define XIDARRAYOID 1011
#define F_BTINT84CMP 2189
#define ILL_COPROC ILL_COPROC
#define USE_OPENSSL_RANDOM 1
#define LOCKBIT_ON(lockmode) (1 << (lockmode))
#define RELCACHE_INIT_FILENAME "pg_internal.init"
#define F_MXID_AGE 3939
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define SPIN_H 
#define O_RDONLY 00
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define F_TS_HEADLINE_JSONB_OPT 4203
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define F_PG_GET_TRIGGERDEF 1662
#define Anum_pg_attribute_attidentity 16
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define _STRUCT_TIMESPEC 1
#define __ARM_ARCH 8
#define IP_MULTICAST_TTL 33
#define IPPROTO_UDP IPPROTO_UDP
#define STDC_HEADERS 1
#define Int16GetDatum(X) ((Datum) (X))
#define ERRCODE_INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','3')
#define F_BTRIM1 885
#define RAND_MAX 2147483647
#define STA_CLOCKERR 0x1000
#define SS_ONSTACK SS_ONSTACK
#define PG_DETOAST_DATUM_COPY(datum) pg_detoast_datum_copy((struct varlena *) DatumGetPointer(datum))
#define F_INT42DIV 173
#define TUPDESC_H 
#define RWH_WRITE_LIFE_MEDIUM 3
#define Anum_pg_class_relreplident 26
#define IndexTupleHasNulls(itup) ((((IndexTuple) (itup))->t_info & INDEX_NULL_MASK))
#define F_RTRIM1 401
#define F_TIMESTAMPTZ_CMP_TIMESTAMP 2533
#define F_TS_RANK_TTF 3705
#define F_SETLK 6
#define NUM_LOCK_PARTITIONS (1 << LOG2_NUM_LOCK_PARTITIONS)
#define _SC_PIPE _SC_PIPE
#define UINT16_WIDTH 16
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define __INT16_MAX__ 0x7fff
#define TYPECACHE_HASH_EXTENDED_PROC_FINFO 0x8000
#define EKEYREJECTED 129
#define shm_toc_estimate_chunk(e,sz) ((e)->space_for_chunks = add_size((e)->space_for_chunks, BUFFERALIGN(sz)))
#define _BSD_SIZE_T_ 
#define INETARRAYOID 1041
#define TYPCATEGORY_UNKNOWN 'X'
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define VARATT_IS_1B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x01)
#define F_PG_STAT_GET_DB_CONFLICT_ALL 3070
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define AF_KEY PF_KEY
#define F_HAS_LANGUAGE_PRIVILEGE_NAME_NAME 2262
#define ERRCODE_IN_FAILED_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','2')
#define OIDARRAYOID 1028
#define F_POINT_DIV 1444
#define LOCK_NB 4
#define SOL_SOCKET 1
#define F_INTER_SB 373
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define F_QUERY_TO_XML 2924
#define F_CASH_NE 889
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define F_INT2NOT 1895
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define F_PG_STAT_GET_LAST_VACUUM_TIME 2781
#define NUMERIC_MAX_RESULT_SCALE (NUMERIC_MAX_PRECISION * 2)
#define AF_INET PF_INET
#define Anum_pg_index_indrelid 2
#define F_VARCHARTYPMODIN 2915
#define FLOAT4_FITS_IN_INT16(num) ((num) >= (float4) PG_INT16_MIN && (num) < -((float4) PG_INT16_MIN))
#define F_PG_GET_FUNCTIONDEF 2098
#define F_JSONB_DELETE_ARRAY 3343
#define BTGreaterStrategyNumber 5
#define POSIX_FADV_RANDOM 1
#define llast_int(l) lfirst_int(list_tail(l))
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define F_INT2ABS 1253
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define HeapTupleHeaderIsHeapOnly(tup) ( ((tup)->t_infomask2 & HEAP_ONLY_TUPLE) != 0 )
#define GetSysCacheOid1(cacheId,key1) GetSysCacheOid(cacheId, key1, 0, 0, 0)
#define GetSysCacheOid2(cacheId,key1,key2) GetSysCacheOid(cacheId, key1, key2, 0, 0)
#define GetSysCacheOid3(cacheId,key1,key2,key3) GetSysCacheOid(cacheId, key1, key2, key3, 0)
#define SOL_NETBEUI 267
#define F_CIDR_SEND 2499
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define F_JSON_TO_TSVECTOR_BYID 4216
#define LC_NUMERIC __LC_NUMERIC
#define dlist_check(head) ((void) (head))
#define ERRCODE_UNDEFINED_DATABASE MAKE_SQLSTATE('3','D','0','0','0')
#define __HAVE_DISTINCT_FLOAT128 0
#define F_PG_GET_FUNCTION_ARG_DEFAULT 3808
#define TYPECACHE_TUPDESC 0x0100
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define SyncScanLock (&MainLWLockArray[24].lock)
#define NOTICE 18
#define CLOCK_THREAD_CPUTIME_ID 3
#define IPV6_PMTUDISC_DO 2
#define IPV6_PKTINFO 50
#define pg_bswap16(x) __builtin_bswap16(x)
#define VARATT_IS_4B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x00)
#define F_LINE_CONSTRUCT_PP 1493
#define CHECKPOINT_WAIT 0x0020
#define F_HAS_SEQUENCE_PRIVILEGE_NAME_ID 2182
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define OidIsValid(objectId) ((bool) ((objectId) != InvalidOid))
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define F_TIMESTAMPTZ_NE_TIMESTAMP 2532
#define F_NUMERIC_FLOAT4 1745
#define __F_GETOWN_EX 16
#define F_NUMERIC_FLOAT8 1746
#define __UINT32_TYPE__ unsigned int
#define PG_MAJORVERSION "11"
#define F_JSONB_FLOAT4 3453
#define F_JSONB_FLOAT8 2580
#define RelFileNodeBackendEquals(node1,node2) ((node1).node.relNode == (node2).node.relNode && (node1).node.dbNode == (node2).node.dbNode && (node1).backend == (node2).backend && (node1).node.spcNode == (node2).node.spcNode)
#define SIOCGSTAMP_OLD 0x8906
#define F_LASTVAL 2559
#define F_ABSTIME_FINITE 275
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define F_FTOI4 319
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define DatumGetInt16(X) ((int16) (X))
#define F_LSEG_LT 1483
#define OUTER_VAR 65001
#define F_NUMERIC_POLY_DESERIALIZE 3340
#define HeapTupleHeaderHasExternal(tup) (((tup)->t_infomask & HEAP_HASEXTERNAL) != 0)
#define F_REGOPEROUT 2215
#define F_CIRCLE_SAME 1452
#define F_FLOAT8EQ 293
#define ERRCODE_FDW_INVALID_OPTION_INDEX MAKE_SQLSTATE('H','V','0','0','C')
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define _SYS_TYPES_H 1
#define F_FLOAT8_REGR_SYY 2808
#define F_PARSE_IDENT 1268
#define O_NOATIME __O_NOATIME
#define F_FLOAT8_COVAR_SAMP 2816
#define IOV_MAX __IOV_MAX
#define SO_RXQ_OVFL 40
#define F_PG_STATISTICS_OBJ_IS_VISIBLE 3403
#define AI_V4MAPPED 0x0008
#define F_PG_DDL_COMMAND_RECV 88
#define RelationIsUsedAsCatalogTable(relation) ((relation)->rd_options && ((relation)->rd_rel->relkind == RELKIND_RELATION || (relation)->rd_rel->relkind == RELKIND_MATVIEW) ? ((StdRdOptions *) (relation)->rd_options)->user_catalog_table : false)
#define F_GENERATE_SUBSCRIPTS 1191
#define F_NUMERIC_POLY_SERIALIZE 3339
#define SOL_IRDA 266
#define MAXDIM 6
#define BKI_WITHOUT_OIDS 
#define __ARM_ARCH_PROFILE 65
#define F_BTBPCHAR_PATTERN_SORTSUPPORT 3333
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define HeapTupleHeaderGetNatts(tup) ((tup)->t_infomask2 & HEAP_NATTS_MASK)
#define INTPTR_MAX (9223372036854775807L)
#define F_INTER_SL 277
#define AG_AG_FUNC_H 
#define __UINTMAX_C(c) c ## UL
#define TYPCACHE_H 
#define SO_ERROR 4
#define F_BITTYPMODIN 2919
#define _POSIX_C_SOURCE 200809L
#define IP_MULTICAST_IF 32
#define VirtualTransactionIdIsValid(vxid) (LocalTransactionIdIsValid((vxid).localTransactionId))
#define IP_DROP_MEMBERSHIP 36
#define F_BYTEALIKE 2005
#define LOG2_NUM_LOCK_PARTITIONS 4
#define F_CIRCLE_OUT 1451
#define InvalidOffsetNumber ((OffsetNumber) 0)
#define HAVE_SSL_CLEAR_OPTIONS 1
#define F_MKTINTERVAL 676
#define PG_GETARG_VARCHAR_PP(n) DatumGetVarCharPP(PG_GETARG_DATUM(n))
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define F_INT4UM 212
#define F_JSON_AGG_TRANSFN 3173
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define XLogRecHasAnyBlockRefs(decoder) ((decoder)->max_block_id >= 0)
#define IPV6_LEAVE_GROUP 21
#define INT64_MODIFIER "l"
#define F_LSEG_PERP 996
#define F_RELTIMEGE 262
#define ERRCODE_INVALID_CURSOR_STATE MAKE_SQLSTATE('2','4','0','0','0')
#define F_PG_IS_WAL_REPLAY_PAUSED 3073
#define ENAVAIL 119
#define SO_SNDBUFFORCE 32
#define LATCH_H 
#define F_TSQUERYOUT 3613
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define F_TIMESTAMPTYPMODIN 2905
#define SET_LOCKTAG_OBJECT(locktag,dboid,classoid,objoid,objsubid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (classoid), (locktag).locktag_field3 = (objoid), (locktag).locktag_field4 = (objsubid), (locktag).locktag_type = LOCKTAG_OBJECT, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define __LDBL_REDIR(name,proto) name proto
#define ItemIdSetRedirect(itemId,link) ( (itemId)->lp_flags = LP_REDIRECT, (itemId)->lp_off = (link), (itemId)->lp_len = 0 )
#define INTERVALARRAYOID 1187
#define HAVE_DECL_STRTOULL 1
#define HASH_FIXED_SIZE 0x2000
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define F_TIDLT 2791
#define F_INT2VECTORRECV 2410
#define F_GIN_EXTRACT_TSVECTOR 3656
#define OffsetToPointer(base,offset) ((void *)((char *) base + offset))
#define F_INT82MUL 839
#define SIGCONT 18
#define IndexIsReady(indexForm) ((indexForm)->indisready)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define F_BTRIM 884
#define ENTRY_ID_BITS (32 + 16)
#define lthird_node(type,l) castNode(type, lthird(l))
#define __blksize_t_defined 
#define AG_EDGE_ACCESS_FUNCTION_ID "age_id"
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define F_INT2SEND 2405
#define _SC_SELECT _SC_SELECT
#define _PATH_SERVICES "/etc/services"
#define F_CHARLE 72
#define F_PG_STAT_FILE 3307
#define RTGreaterEqualStrategyNumber 23
#define SOL_XDP 283
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define HAVE_UNSETENV 1
#define _LFS64_LARGEFILE 1
#define HAVE_TERMIOS_H 1
#define PF_NETBEUI 13
#define SHAREDFILESET_H 
#define CURSOR_OPT_FAST_PLAN 0x0020
#define F_PG_PREPARED_STATEMENT 2510
#define __WCHAR_MAX __WCHAR_MAX__
#define __GLIBC_USE_ISOC2X 1
#define F_BOOLIN 1242
#define CONDITION_VARIABLE_H 
#define F_TEXT_PATTERN_LE 2161
#define F_BTFLOAT8SORTSUPPORT 3133
#define XLogRecGetPrev(decoder) ((decoder)->decoded_record->xl_prev)
#define _ANSI_STDDEF_H 
#define F_ABSTIME_TIMESTAMP 2023
#define TRANSACTION_STATUS_COMMITTED 0x01
#define ERRCODE_TOO_MANY_CONNECTIONS MAKE_SQLSTATE('5','3','3','0','0')
#define IP_PMTUDISC_WANT 1
#define IP_XFRM_POLICY 17
#define F_TSMATCHSEL 3686
#define F_REGPROCEDUREOUT 2213
#define F_GIN_COMPARE_JSONB 3480
#define FUNC_MAX_ARGS 100
#define F_JSONB_OUT 3804
#define HeapTupleHeaderHasMatch(tup) ( ((tup)->t_infomask2 & HEAP_TUPLE_HAS_MATCH) != 0 )
#define __iovec_defined 1
#define FALLOC_FL_KEEP_SIZE 0x01
#define F_DIST_PB 364
#define F_VOID_OUT 2299
#define ERRCODE_NOT_NULL_VIOLATION MAKE_SQLSTATE('2','3','5','0','2')
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define ObjectIdGetDatum(X) ((Datum) (X))
#define IN_CLASSA_MAX 128
#define STATUS_ERROR (-1)
#define VARHDRSZ_EXTERNAL offsetof(varattrib_1b_e, va_data)
#define NAMEDATALEN 64
#define F_PG_LAST_XACT_REPLAY_TIMESTAMP 3830
#define F_JSON_OBJECT 3202
#define _XOPEN_SOURCE_EXTENDED 1
#define HEAPAM_H 
#define F_BITSUBSTR 1680
#define F_INT82EQ 1856
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define S_IFCHR __S_IFCHR
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define F_PG_STAT_GET_BACKEND_WAIT_EVENT_TYPE 2788
#define F_VARBITTYPMODOUT 2921
#define F_INT4OUT 43
#define ESR_MAGIC 0x45535201
#define IPV6_RECVPATHMTU 60
#define Assert(condition) ((void)true)
#define F_ABSTIMEIN 240
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define SO_DETACH_FILTER 27
#define F_BOX_POLY 1448
#define F_BE_LO_EXPORT 765
#define EAI_AGAIN -3
#define INTPTR_MIN (-9223372036854775807L-1)
#define F_INT2AND 1892
#define O_SYNC 04010000
#define AF_MPLS PF_MPLS
#define INT8_C(c) c
#define PF_IB 27
#define F_FLOAT8_REGR_SLOPE 2813
#define F_FLOAT8_ACCUM 222
#define F_TIMESTAMP_SMALLER 1195
#define AGT_ROOT_IS_BINARY(agtp_) ((*(uint32 *)VARDATA(agtp_) & AGT_FBINARY) != 0)
#define ENOMEDIUM 123
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define LONGALIGN(LEN) TYPEALIGN(ALIGNOF_LONG, (LEN))
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define F_PG_STAT_GET_ACTIVITY 2022
#define __UWORD_TYPE unsigned long int
#define TRAP_BRKPT TRAP_BRKPT
#define CREATE_CLAUSE_FUNCTION_NAME "_cypher_create_clause"
#define F_CHARNE 70
#define F_GTSQUERY_CONSISTENT_OLDSIG 3793
#define F_OFD_SETLK 37
#define F_ARRAY_DIMS 747
#define F_NUMERIC_INC 1764
#define F_INT82GE 1861
#define F_HAS_COLUMN_PRIVILEGE_ID_ATTNUM 3023
#define F_GINARRAYEXTRACT 2743
#define TRAP_UNK TRAP_UNK
#define TYPECACHE_GT_OPR 0x0004
#define O_NDELAY O_NONBLOCK
#define F_INT82GT 1859
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define AGTE_IS_BOOL_TRUE(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_BOOL_TRUE)
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __FLT64_IS_IEC_60559__ 2
#define F_INT4MOD 156
#define F_TIMETYPMODIN 2909
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define F_TINTERVALRECV 2466
#define F_LSEG_RECV 2480
#define __AARCH64EL__ 1
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define GetSysCacheOid4(cacheId,key1,key2,key3,key4) GetSysCacheOid(cacheId, key1, key2, key3, key4)
#define USECS_PER_HOUR INT64CONST(3600000000)
#define F_INT8OUT 461
#define F_DATE_LT_TIMESTAMPTZ 2351
#define F_GIST_POLY_COMPRESS 2586
#define F_CIRCLE_OVERABOVE 2588
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define pairingheap_const_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, const pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((const type *) ((const char *) (ptr) - offsetof(type, membername))))
#define F_DOMAIN_IN 2597
#define __O_DSYNC 010000
#define GENAM_H 
#define MinTransactionIdAttributeNumber (-3)
#define ERRCODE_FDW_INVALID_HANDLE MAKE_SQLSTATE('H','V','0','0','B')
#define F_INT28GE 1855
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define LINEOID 628
#define __timer_t_defined 1
#define pg_memory_barrier_impl() __atomic_thread_fence(__ATOMIC_SEQ_CST)
#define HAVE_STRUCT_TM_TM_ZONE 1
#define __WCLONE 0x80000000
#define PG_DETOAST_DATUM_PACKED(datum) pg_detoast_datum_packed((struct varlena *) DatumGetPointer(datum))
#define SHRT_MAX __SHRT_MAX__
#define TYPCATEGORY_ARRAY 'A'
#define F_INT2_ACCUM 1834
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define SET_LOCKTAG_VIRTUALTRANSACTION(locktag,vxid) ((locktag).locktag_field1 = (vxid).backendId, (locktag).locktag_field2 = (vxid).localTransactionId, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_VIRTUALTRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define F_LINE_INTERPT 1494
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define F_HASHNAMEEXTENDED 447
#define F_TIMESTAMPTZ_TRUNC 1217
#define FRAMEOPTION_EXCLUSION (FRAMEOPTION_EXCLUDE_CURRENT_ROW | FRAMEOPTION_EXCLUDE_GROUP | FRAMEOPTION_EXCLUDE_TIES)
#define F_BINARY_UPGRADE_CREATE_EMPTY_EXTENSION 3591
#define F_TIDSEND 2439
#define F_REGEXP_SPLIT_TO_ARRAY 2768
#define ERRCODE_FDW_INVALID_COLUMN_NUMBER MAKE_SQLSTATE('H','V','0','0','8')
#define DatumGetAclItemP(X) ((AclItem *) DatumGetPointer(X))
#define F_PG_STAT_GET_NUMSCANS 1928
#define ERRCODE_INVALID_SCHEMA_DEFINITION MAKE_SQLSTATE('4','2','P','1','5')
#define AGTYPE_CONTAINER_IS_ARRAY(agtc) (((agtc)->header & AGT_FARRAY) != 0)
#define FETCH_ALL LONG_MAX
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define BOOLARRAYOID 1000
#define AssertMacro(condition) ((void)true)
#define PGDLLIMPORT 
#define EROFS 30
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define ACL_CREATE_CHR 'C'
#define AttributeNumberIsValid(attributeNumber) ((bool) ((attributeNumber) != InvalidAttrNumber))
#define F_ABSTIMEOUT 241
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define HAVE_SYNC_FILE_RANGE 1
#define HAVE_IPV6 1
#define SO_BSDCOMPAT 14
#define F_BIT_OUT 1565
#define F_NOW 1299
#define F_JSONB_GE 4042
#define F_FLOAT8_COMBINE 276
#define HAVE__BUILTIN_UNREACHABLE 1
#define F_TIMESTAMP_LARGER 1196
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define IPV6_RTHDRDSTOPTS 55
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define F_TO_HEX64 2090
#define F_PG_TIMEZONE_NAMES 2856
#define F_GTSQUERY_SAME 3699
#define F_TIMESTAMP_LT_TIMESTAMPTZ 2520
#define INT32_C(c) c
#define F_INT82LE 1860
#define F_INT4SHR 1903
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define SHRT_WIDTH 16
#define F_INT82LT 1858
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define F_TIMESTAMP_EQ 1152
#define dsa_allocate(area,size) dsa_allocate_extended(area, size, 0)
#define LOG_DESTINATION_EVENTLOG 4
#define F_PG_READ_BINARY_FILE_ALL 3828
#define ACLITEMOID 1033
#define PageSetPrunable(page,xid) do { Assert(TransactionIdIsNormal(xid)); if (!TransactionIdIsValid(((PageHeader) (page))->pd_prune_xid) || TransactionIdPrecedes(xid, ((PageHeader) (page))->pd_prune_xid)) ((PageHeader) (page))->pd_prune_xid = (xid); } while (0)
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define F_TINTERVALEND 273
#define __WCHAR_T__ 
#define UINT_LEAST64_WIDTH 64
#define HAVE_VSNPRINTF 1
#define HAVE_LDAP_H 1
#define __SIZEOF_SIZE_T__ 8
#define InvalidOid ((Oid) 0)
#define F_PG_LSN_LT 3231
#define HAVE_CBRT 1
#define __glibc_objsize0(__o) __bos0 (__o)
#define CHECKPOINT_END_OF_RECOVERY 0x0002
#define PG_INT8_MAX (0x7F)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define F_BINARY_UPGRADE_SET_NEXT_TOAST_PG_CLASS_OID 3588
#define Anum_ag_label_name 1
#define _POSIX_TIMERS 200809L
#define Anum_pg_class_reltuples 10
#define F_ABSTIMERECV 2462
#define F_MACADDR8_EQ 4113
#define XLogHintBitIsNeeded() (DataChecksumsEnabled() || wal_log_hints)
#define TYPECACHE_DOMAIN_BASE_INFO 0x1000
#define NI_DGRAM 16
#define IPV6_JOIN_ANYCAST 27
#define F_POLY_BOX 1446
#define F_BIT 1685
#define F_INT82NE 1857
#define MCAST_UNBLOCK_SOURCE 44
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define TRAP_BRANCH TRAP_BRANCH
#define IP_HDRINCL 3
#define FIELDNO_EXPRCONTEXT_DOMAINNULL 13
#define IPV6_TCLASS 67
#define F_CHARTOI4 77
#define pgoff_t off_t
#define Anum_pg_attribute_atttypid 3
#define F_TEXT_PATTERN_LT 2160
#define RelationGetRelid(relation) ((relation)->rd_id)
#define F_PG_ADVISORY_LOCK_INT4 2886
#define __UINT_FAST16_TYPE__ long unsigned int
#define F_HAS_SEQUENCE_PRIVILEGE_ID_ID 2184
#define F_TIMESTAMP_CMP_DATE 2370
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define ERRCODE_UNDEFINED_SCHEMA MAKE_SQLSTATE('3','F','0','0','0')
#define ERRCODE_SYSTEM_ERROR MAKE_SQLSTATE('5','8','0','0','0')
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define HASH_KEYCOPY 0x0100
#define TupleDescSize(src) (offsetof(struct tupleDesc, attrs) + (src)->natts * sizeof(FormData_pg_attribute))
#define _POSIX_RAW_SOCKETS 200809L
#define XLOGREADER_H 
#define Anum_pg_attribute_attacl 21
#define Anum_pg_type_typnamespace 2
#define STA_MODE 0x4000
#define DatumGetTextPP(X) ((text *) PG_DETOAST_DATUM_PACKED(X))
#define F_INTERVAL_SEND 2479
#define EXEC_FLAG_REWIND 0x0002
#define F_INT8_ACCUM_INV 3569
#define FKCONSTR_MATCH_FULL 'f'
#define HEAP_INSERT_SPECULATIVE 0x0008
#define __PRAGMA_REDEFINE_EXTNAME 1
#define list_make5_oid(x1,x2,x3,x4,x5) lcons_oid(x1, list_make4_oid(x2, x3, x4, x5))
#define F_IN_RANGE_INT8_INT8 4126
#define __ss_aligntype unsigned long int
#define F_PG_CANCEL_BACKEND 2171
#define ItemPointerIsValid(pointer) ((bool) (PointerIsValid(pointer) && ((pointer)->ip_posid != 0)))
#define Anum_pg_attribute_attmissingval 24
#define F_TIMESTAMP_IN 1312
#define SIGEV_NONE SIGEV_NONE
#define TUPMACS_H 
#define F_I8TOF 652
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define __FLT16_DECIMAL_DIG__ 5
#define HASH_CONTEXT 0x0400
#define F_RELTIMESEND 2465
#define Anum_pg_type_typnotnull 23
#define _STRINGS_H 1
#define F_TO_HEX32 2089
#define SI_MESGQ SI_MESGQ
#define __F_SETOWN 8
#define _VA_LIST_DEFINED 
#define F_LSEG_EQ 999
#define HAVE_GETHOSTBYNAME_R 1
#define F_BITOVERLAY 3030
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define F_PG_LSN_CMP 3251
#define __BLKSIZE_T_TYPE __S32_TYPE
#define F_FLOAT8_STDDEV_SAMP 1832
#define PF_ECONET 19
#define F_SMGROUT 761
#define F_BOX_CONTAINED 192
#define __INT_LEAST16_MAX__ 0x7fff
#define linitial(l) lfirst(list_head(l))
#define _SC_CLK_TCK _SC_CLK_TCK
#define RELFILENODE_H 
#define __DBL_MAX_10_EXP__ 308
#define F_REGROLERECV 4094
#define F_PLAINTO_TSQUERY 3751
#define F_PG_STAT_GET_LAST_ANALYZE_TIME 2783
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define UCHAR_WIDTH 8
#define PG_PUBLICATION_H 
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define F_INT4_BOOL 2557
#define EDEADLK 35
#define F_VOID_IN 2298
#define F_PG_NODE_TREE_RECV 197
#define F_ABSTIMEEQ 251
#define RELKIND_SEQUENCE 'S'
#define SHMEM_INDEX_KEYSIZE (48)
#define XLogRecHasBlockImage(decoder,block_id) ((decoder)->blocks[block_id].has_image)
#define ERRCODE_CANNOT_COERCE MAKE_SQLSTATE('4','2','8','4','6')
#define S_INIT_LOCK(lock) S_UNLOCK(lock)
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define F_FLOAT84MUL 283
#define F_RANGE_ADJACENT 3862
#define IsBootstrapProcessingMode() (Mode == BootstrapProcessing)
#define __SIG_ATOMIC_WIDTH__ 32
#define HeapTupleHeaderIndicatesMovedPartitions(tup) (ItemPointerGetOffsetNumber(&(tup)->t_ctid) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(&(tup)->t_ctid) == MovedPartitionsBlockNumber)
#define HAVE_UNIX_SOCKETS 1
#define HeapTupleHeaderGetRawXmax(tup) ( (tup)->t_choice.t_heap.t_xmax )
#define ERRCODE_E_R_I_E_INVALID_SQLSTATE_RETURNED MAKE_SQLSTATE('3','9','0','0','1')
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define __HAVE_DISTINCT_FLOAT32 0
#define CommitTsControlLock (&MainLWLockArray[38].lock)
#define INT64_MAX (__INT64_C(9223372036854775807))
#define INT2VECTORARRAYOID 1006
#define htole16(x) __uint16_identity (x)
#define SIGCHLD 17
#define ERRCODE_TRIGGERED_ACTION_EXCEPTION MAKE_SQLSTATE('0','9','0','0','0')
#define F_TSQUERYTREE 3673
#define AGTYPE_ITERATOR_TOKEN_IS_HASHABLE(x) (x > WAGT_DONE && x < WAGT_BEGIN_ARRAY)
#define F_NUMERIC_SMALLER 1766
#define MAXNAMLEN NAME_MAX
#define F_TIMESTAMP_LT 1154
#define HOURS_PER_DAY 24
#define F_HAS_TABLE_PRIVILEGE_NAME 1926
#define F_WINDOW_LAG_WITH_OFFSET_AND_DEFAULT 3108
#define F_ARRAY_AGG_ARRAY_FINALFN 4052
#define CSTRINGOID 2275
#define F_ABSTIMEGE 256
#define F_BPCHARSEND 2431
#define F_ABSTIMEGT 254
#define Anum_pg_class_relispartition 27
#define F_SPG_TEXT_CONFIG 4027
#define F_BOX_CIRCLE 1479
#define DT_UNKNOWN DT_UNKNOWN
#define FIELDNO_EXPRCONTEXT_CASENULL 11
#define F_GENERATE_SERIES_STEP_INT4 1066
#define ERRCODE_TOO_MANY_ARGUMENTS MAKE_SQLSTATE('5','4','0','2','3')
#define __UINT8_MAX__ 0xff
#define F_FLOAT48EQ 299
#define OldSnapshotTimeMapLock (&MainLWLockArray[42].lock)
#define htole32(x) __uint32_identity (x)
#define EDQUOT 122
#define PG_INT8_MIN (-0x7F-1)
#define HAVE_RL_COMPLETION_MATCHES 1
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME 3028
#define F_TIMETYPMODOUT 2910
#define F_BRIN_INCLUSION_CONSISTENT 4107
#define USER_LOCKMETHOD 2
#define PG_GETARG_TEXT_PP(n) DatumGetTextPP(PG_GETARG_DATUM(n))
#define ADJ_NANO 0x2000
#define F_INT8_AVG 1964
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define PRS2_NEW_VARNO 2
#define AGT_GIN_FLAG_NUM 0x04
#define PageGetItem(page,itemId) ( AssertMacro(PageIsValid(page)), AssertMacro(ItemIdHasStorage(itemId)), (Item)(((char *)(page)) + ItemIdGetOffset(itemId)) )
#define NI_NUMERICSERV 2
#define DSM_IMPL_WINDOWS 3
#define F_LSEG_CENTER 225
#define F_ARRAY_LARGER 515
#define F_POLY_CONTAIN 340
#define F_PG_INDEX_COLUMN_HAS_PROPERTY 638
#define SIGSYS 31
#define linux 1
#define IsNormalProcessingMode() (Mode == NormalProcessing)
#define SOL_DCCP 269
#define AI_IDN 0x0040
#define F_TSVECTOR_UPDATE_TRIGGER_BYCOLUMN 3753
#define F_INETMI 2633
#define TIMESTAMP_NOBEGIN(j) do {(j) = DT_NOBEGIN;} while (0)
#define EXECUTOR_H 
#define F_RELTIMEOUT 243
#define CYPHER_TARGET_NODE_FLAG_NONE 0x0000
#define ARR_ELEMTYPE(a) ((a)->elemtype)
#define MOD_MICRO ADJ_MICRO
#define F_BPCHARTYPMODOUT 2914
#define ntohl(x) __bswap_32 (x)
#define SA_NOCLDSTOP 1
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define ntohs(x) __bswap_16 (x)
#define F_PG_STAT_GET_BACKEND_DBID 1938
#define PG_HAVE_ATOMIC_INIT_U32 
#define F_TIMESTAMPTZ_EQ_TIMESTAMP 2529
#define DATERANGEARRAYOID 3913
#define BITS_PER_BITMAPWORD 32
#define INTERNALOID 2281
#define AGE_VARNAME_MERGE_CLAUSE AGE_DEFAULT_VARNAME_PREFIX"merge_clause"
#define F_TO_REGOPER 3492
#define ERRCODE_DUPLICATE_FILE MAKE_SQLSTATE('5','8','P','0','2')
#define REFCURSORARRAYOID 2201
#define ____FILE_defined 1
#define HAVE_DECL_STRLCAT 0
#define F_INT84DIV 1277
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define ILL_PRVREG ILL_PRVREG
#define PDP_ENDIAN __PDP_ENDIAN
#define F_REGTYPERECV 2454
#define LSEGOID 601
#define FPE_FLTINV FPE_FLTINV
#define FIELDNO_EXPRCONTEXT_AGGNULLS 9
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define F_CONTSEL 1302
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define F_HASH_NUMERIC_EXTENDED 780
#define Anum_pg_attribute_attnotnull 13
#define AccessExclusiveLock 8
#define SA_INTERRUPT 0x20000000
#define F_PG_CONFIG 3400
#define MOD_ESTERROR ADJ_ESTERROR
#define O_LARGEFILE __O_LARGEFILE
#define TIDBITMAP_H 
#define ERRCODE_IDLE_IN_TRANSACTION_SESSION_TIMEOUT MAKE_SQLSTATE('2','5','P','0','3')
#define AllocSetContextCreate(parent,name,...) (StaticAssertExpr(__builtin_constant_p(name), "memory context names must be constant strings"), AllocSetContextCreateExtended(parent, name, __VA_ARGS__))
#define F_ABSTIMELT 253
#define F_INT2MOD 155
#define F_ARRAY_POSITION_START 3278
#define F_HAS_FUNCTION_PRIVILEGE_ID_ID 2259
#define ERRCODE_E_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','4')
#define F_INET_GIST_FETCH 3573
#define __FLT32_MIN_10_EXP__ (-37)
#define CYPHER_CLAUSE_FLAG_NONE 0x0000
#define F_HAS_FUNCTION_PRIVILEGE_ID_NAME 2258
#define __GNUC_MINOR__ 3
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define F_REGROLESEND 4095
#define F_TIME_HASH 1688
#define ShareUpdateExclusiveLock 4
#define RTOldContainedByStrategyNumber 14
#define HEAP_MOVED (HEAP_MOVED_OFF | HEAP_MOVED_IN)
#define PG_HAVE_ATOMIC_INIT_U64 
#define __FLT32X_DIG__ 15
#define _VA_LIST_ 
#define F_ORDERED_SET_TRANSITION 3970
#define F_PG_TOTAL_RELATION_SIZE 2286
#define INSTR_TIME_GET_MILLISEC(t) (((double) (t).tv_sec * 1000.0) + ((double) (t).tv_nsec) / 1000000.0)
#define ERRCODE_UNIQUE_VIOLATION MAKE_SQLSTATE('2','3','5','0','5')
#define CUSTOMPATH_SUPPORT_BACKWARD_SCAN 0x0001
#define ERRCODE_FDW_INVALID_DATA_TYPE MAKE_SQLSTATE('H','V','0','0','4')
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define HEAP_XMAX_BITS (HEAP_XMAX_COMMITTED | HEAP_XMAX_INVALID | HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK | HEAP_XMAX_LOCK_ONLY)
#define HAVE_LANGINFO_H 1
#define F_ABSTIMENE 252
#define F_TIME_LE 1103
#define XLOG_INCLUDE_ORIGIN 0x01
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define _SC_PII_XTI _SC_PII_XTI
#define AGTYPE_EXISTS_ANY_STRATEGY_NUMBER 10
#define HAVE_BIO_GET_DATA 1
#define F_BOX_OVERBELOW 2563
#define FKCONSTR_ACTION_SETDEFAULT 'd'
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define F_JSON_TO_RECORDSET 3205
#define NUMERIC_MAX_DISPLAY_SCALE NUMERIC_MAX_PRECISION
#define F_PATH_ISCLOSED 1430
#define LC_TELEPHONE __LC_TELEPHONE
#define F_OIDVECTORSEND 2421
#define ENAMETOOLONG 36
#define F_BPCHARCMP 1078
#define ERRCODE_DEPENDENT_OBJECTS_STILL_EXIST MAKE_SQLSTATE('2','B','P','0','1')
#define ERRCODE_FDW_OUT_OF_MEMORY MAKE_SQLSTATE('H','V','0','0','1')
#define F_CASH_MUL_INT8 3344
#define USE_ISO_DATES 1
#define TYPCATEGORY_STRING 'S'
#define ACL_UPDATE (1<<2)
#define CLD_STOPPED CLD_STOPPED
#define LOCK_MAND 32
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define F_TIMESTAMPTZ_TIME 2019
#define __DBL_HAS_QUIET_NAN__ 1
#define BOOL_WIDTH 1
#define F_BITSUBSTR_NO_LEN 1699
#define XLogRecGetRmid(decoder) ((decoder)->decoded_record->xl_rmid)
#define SET_VARSIZE_SHORT(PTR,len) SET_VARSIZE_1B(PTR, len)
#define Anum_pg_class_relnamespace 2
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define PARSE_OPER_H 
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define HAVE_STRONG_RANDOM 1
#define BPCHARARRAYOID 1014
#define F_INT4EQ 65
#define HAVE_SYS_EPOLL_H 1
#define F_FLOAT8MUL 216
#define IPPROTO_MPLS IPPROTO_MPLS
#define F_TEXTREGEXEQ 1254
#define ERRCODE_INTERVAL_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','1','5')
#define SA_STACK SA_ONSTACK
#define F_INT8ABS 1230
#define Anum_ag_label_vertex_table_id 1
#define shm_toc_initialize_estimator(e) ((e)->space_for_chunks = 0, (e)->number_of_keys = 0)
#define F_PG_CURRENT_WAL_FLUSH_LSN 3330
#define RTOverAboveStrategyNumber 12
#define F_REGOPERATOROUT 2217
#define AF_VSOCK PF_VSOCK
#define BUS_ADRERR BUS_ADRERR
#define ARR_DIMS(a) ((int *) (((char *) (a)) + sizeof(ArrayType)))
#define LABEL_ID_MAX PG_UINT16_MAX
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define F_FLOAT8GE 298
#define F_PG_GET_PARTITION_CONSTRAINTDEF 3408
#define __f128(x) x ##f128
#define HSEARCH_H 
#define ACLITEM_SET_RIGHTS(item,rights) ((item).ai_privs = (AclMode) (rights))
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define F_DCBRT 231
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define pg_bswap32(x) __builtin_bswap32(x)
#define F_HASH_NUMERIC 432
#define TYPCATEGORY_RANGE 'R'
#define F_DATETIME_TIMESTAMP 1272
#define F_JSONB_EXISTS_ALL 4049
#define RTGreaterStrategyNumber 22
#define F_DATE_SORTSUPPORT 3136
#define F_PG_LS_DIR 3297
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define F_PG_MY_TEMP_SCHEMA 2854
#define __FLT16_MANT_DIG__ 11
#define F_I4TOCHAR 78
#define F_REGEXEQSEL 1818
#define F_PG_STAT_GET_DB_CONFLICT_BUFFERPIN 3068
#define IndexIsValid(indexForm) ((indexForm)->indisvalid)
#define F_JSON_POPULATE_RECORDSET 3961
#define ESOCKTNOSUPPORT 94
#define TEXTDOMAIN NULL
#define AF_LOCAL PF_LOCAL
#define __INTPTR_TYPE__ long int
#define __WCHAR_TYPE__ unsigned int
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define F_RANGE_CONSTRUCTOR3 3841
#define HAVE_UUID_UUID_H 1
#define HAVE_INTPTR_T 1
#define F_WINDOW_FIRST_VALUE 3112
#define F_FLOAT84PL 285
#define HeapTupleIsValid(tuple) PointerIsValid(tuple)
#define FP_LOCK_SLOTS_PER_BACKEND 16
#define Anum_pg_type_typacl 30
#define F_MACADDR8_SET7BIT 4125
#define NAME_MAX 255
#define POSTGRES_H 
#define F_PG_STAT_GET_DB_TUPLES_DELETED 2762
#define ItemIdSetNormal(itemId,off,len) ( (itemId)->lp_flags = LP_NORMAL, (itemId)->lp_off = (off), (itemId)->lp_len = (len) )
#define PageGetSpecialPointer(page) ( AssertMacro(PageValidateSpecialPointer(page)), (char *) ((char *) (page) + ((PageHeader) (page))->pd_special) )
#define F_INET_SET_MASKLEN 605
#define PG_RETURN_VARCHAR_P(x) PG_RETURN_POINTER(x)
#define IP_RECVTTL 12
#define F_WEBSEARCH_TO_TSQUERY 5009
#define EXEC_FLAG_MARK 0x0008
#define F_PG_COLLATION_IS_VISIBLE 3815
#define __pic__ 2
#define lfirst(lc) ((lc)->data.ptr_value)
#define F_PG_STAT_GET_BLOCKS_HIT 1935
#define Anum_pg_class_relallvisible 11
#define ItemPointerSet(pointer,blockNumber,offNum) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber), (pointer)->ip_posid = offNum )
#define MaxOffsetNumber ((OffsetNumber) (BLCKSZ / sizeof(ItemIdData)))
#define RELPERSISTENCE_UNLOGGED 'u'
#define F_OIDVECTORGT 681
#define __ARM_ARCH_8A 1
#define TSQUERYOID 3615
#define F_PG_DDL_COMMAND_IN 86
#define __stub_chflags 
#define ERRCODE_LOCK_NOT_AVAILABLE MAKE_SQLSTATE('5','5','P','0','3')
#define HAVE_INT128 1
#define FLOAT8OID 701
#define CURSOR_OPT_CUSTOM_PLAN 0x0080
#define F_PRSD_END 3719
#define WL_SOCKET_READABLE (1 << 1)
#define list_make4_oid(x1,x2,x3,x4) lcons_oid(x1, list_make3_oid(x2, x3, x4))
#define F_PG_LSN_HASH 3252
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define F_INT8RANGE_CANONICAL 3928
#define EDOTDOT 73
#define MaxAllocSize ((Size) 0x3fffffff)
#define __FLT32_DECIMAL_DIG__ 9
#define __O_DIRECT 0200000
#define PF_SMC 43
#define HEAP_XMAX_COMMITTED 0x0400
#define F_TEXT_FORMAT_NV 3540
#define F_TIME_LT 1102
#define __USE_POSIX 1
#define PG_CRC32C_H 
#define PF_NFC 39
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define RelationIsValid(relation) PointerIsValid(relation)
#define HAVE_RANDOM 1
#define PAI_OVERWRITE (1 << 0)
#define F_OIDVECTORIN 54
#define REGNAMESPACEOID 4089
#define BUFSIZ 8192
#define HAVE_SHM_OPEN 1
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define PG_GETARG_FLOAT8(n) DatumGetFloat8(PG_GETARG_DATUM(n))
#define F_PG_TRIGGER_DEPTH 3163
#define F_BIT_RECV 2456
#define F_BPCHARGT 1051
#define SO_PEEK_OFF 42
#define DatumGetCString(X) ((char *) DatumGetPointer(X))
#define HEAP_MOVED_OFF 0x4000
#define WL_SOCKET_CONNECTED WL_SOCKET_WRITEABLE
#define castNode(_type_,nodeptr) ((_type_ *) (nodeptr))
#define __FLT_MAX_10_EXP__ 38
#define F_NAMELT 655
#define _WCHAR_T_DECLARED 
#define AddinShmemInitLock (&MainLWLockArray[21].lock)
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define F_HASH_ACLITEM_EXTENDED 777
#define WNOWAIT 0x01000000
#define F_PG_LSN_HASH_EXTENDED 3413
#define ShmemIndexLock (&MainLWLockArray[1].lock)
#define MultiXactIdGetDatum(X) ((Datum) (X))
#define SPLICE_F_MOVE 1
#define F_PG_READ_FILE 4100
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define REPLICA_IDENTITY_NOTHING 'n'
#define LWLOCK_MINIMAL_SIZE (sizeof(LWLock) <= 32 ? 32 : 64)
#define AF_ALG PF_ALG
#define _SC_2_PBS _SC_2_PBS
#define AF_QIPCRTR PF_QIPCRTR
#define ERRCODE_NOT_AN_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','L')
#define F_INT8OR 1905
#define F_PG_AVAILABLE_EXTENSION_VERSIONS 3083
#define F_INT48MI 1279
#define PG_TEMP_FILE_PREFIX "pgsql_tmp"
#define IPV6_ADDR_PREFERENCES 72
#define AG_DEFAULT_LABEL_VERTEX "_ag_label_vertex"
#define FRAMEOPTION_START_OFFSET_FOLLOWING 0x02000
#define BKI_BOOTSTRAP 
#define XLR_MAX_BLOCK_ID 32
#define TRANSACTION_STATUS_ABORTED 0x02
#define __LC_COLLATE 3
#define OffsetNumberMask (0xffff)
#define SO_ZEROCOPY 60
#define RTEqualStrategyNumber 18
#define F_PG_ENCODING_TO_CHAR 1597
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define F_GETFD 1
#define SET_LOCKTAG_TUPLE(locktag,dboid,reloid,blocknum,offnum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = (offnum), (locktag).locktag_type = LOCKTAG_TUPLE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define TUPTABLE_H 
#define HAVE_DECL_STRLCPY 0
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define F_TIMESTAMPTZ_CMP_DATE 2383
#define F_GTSQUERY_CONSISTENT 3701
#define pg_hton16(x) pg_bswap16(x)
#define ERRCODE_T_R_SERIALIZATION_FAILURE MAKE_SQLSTATE('4','0','0','0','1')
#define EPROTONOSUPPORT 93
#define UINT_MAX (INT_MAX * 2U + 1U)
#define ADJ_TICK 0x4000
#define F_TIMESTAMPTZ_AGE 1199
#define BKI_SHARED_RELATION 
#define _BITS_STDINT_INTN_H 1
#define F_NETWORKSEL 3560
#define __TIMESIZE 64
#define INVERT_COMPARE_RESULT(var) ((var) = ((var) < 0) ? 1 : -(var))
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define LABEL_TYPE_EDGE 'e'
#define F_GIN_EXTRACT_JSONB_QUERY_PATH 3486
#define ERRCODE_INVALID_TIME_ZONE_DISPLACEMENT_VALUE MAKE_SQLSTATE('2','2','0','0','9')
#define PROC_VACUUM_STATE_MASK (PROC_IN_VACUUM | PROC_IN_ANALYZE | PROC_VACUUM_FOR_WRAPAROUND)
#define F_BPCHAREQ 1048
#define IN_CLASSC_NET 0xffffff00
#define __SIGRTMAX 64
#define F_QUOTE_IDENT 1282
#define Anum_pg_publication_pubinsert 4
#define LONG_ALIGN_MASK (sizeof(long) - 1)
#define __USE_LARGEFILE64 1
#define F_PG_NODE_TREE_IN 195
#define ERRCODE_FDW_SCHEMA_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','Q')
#define __FLT16_HAS_QUIET_NAN__ 1
#define IP_PMTUDISC_OMIT 5
#define ERRCODE_FDW_INVALID_DATA_TYPE_DESCRIPTORS MAKE_SQLSTATE('H','V','0','0','6')
#define HASH_COMPARE 0x0080
#define IsInitProcessingMode() (Mode == InitProcessing)
#define F_ANYARRAY_IN 2296
#define F_POINT_SUB 1442
#define __cookie_io_functions_t_defined 1
#define __gid_t_defined 
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define IN_LOOPBACKNET 127
#define F_BIT_AND 1673
#define PageClearPrunable(page) (((PageHeader) (page))->pd_prune_xid = InvalidTransactionId)
#define F_XMLVALIDATE 2897
#define PointerIsAligned(pointer,type) (((uintptr_t)(pointer) % (sizeof (type))) == 0)
#define __ASM_SVE_CONTEXT_H 
#define F_DLOG1 234
#define F_EVENT_TRIGGER_IN 3594
#define F_TRANSLATE 878
#define SK_SEARCHNOTNULL 0x0080
#define F_JSONB_DELETE 3302
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define NETDB_SUCCESS 0
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define F_RANGE_GIST_SAME 3881
#define F_LSEG_INTERPT 362
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define IPV6_DONTFRAG 62
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define TRY_AGAIN 2
#define HAVE_OPENSSL_INIT_SSL 1
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define Abs(x) ((x) >= 0 ? (x) : -(x))
#define TIMESTAMP_NOT_FINITE(j) (TIMESTAMP_IS_NOBEGIN(j) || TIMESTAMP_IS_NOEND(j))
#define F_FLOAT4DIV 203
#define __SVE_VQ_BYTES 16
#define F_TIMESTAMP_LE_TIMESTAMPTZ 2521
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define TSVECTOROID 3614
#define _POSIX_SEM_VALUE_MAX 32767
#define linitial_int(l) lfirst_int(list_head(l))
#define AF_ATMPVC PF_ATMPVC
#define F_BPCHAR_PATTERN_LT 2174
#define LC_CTYPE __LC_CTYPE
#define __UINT_LEAST32_TYPE__ unsigned int
#define F_RANGE_CMP 3870
#define ADJ_OFFSET_SS_READ 0xa001
#define SET_VARSIZE(PTR,len) SET_VARSIZE_4B(PTR, len)
#define htole64(x) __uint64_identity (x)
#define _XBS5_ILP32_OFFBIG -1
#define F_PG_START_BACKUP 2172
#define _CTYPE_H 1
#define AF_ASH PF_ASH
#define IPPROTO_GRE IPPROTO_GRE
#define ag_label_oid_index_id() ag_relation_id("ag_label_oid_index", "index")
#define DOUBLEALIGN(LEN) TYPEALIGN(ALIGNOF_DOUBLE, (LEN))
#define edge_tuple_start_id Anum_ag_label_edge_table_start_id - 1
#define __LDBL_MIN_EXP__ (-16381)
#define F_PG_STAT_GET_XACT_BLOCKS_HIT 3045
#define VARDATA_4B(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_data)
#define F_CIDEQ 69
#define VARTAG_EXTERNAL(PTR) VARTAG_1B_E(PTR)
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define F_BYTEA_SORTSUPPORT 3331
#define F_INT2_ACCUM_INV 3567
#define lsecond_int(l) lfirst_int(lnext(list_head(l)))
#define F_INT8INC_ANY 2804
#define F_INTERVAL_ACCUM_INV 3549
#define __BIT_TYPES_DEFINED__ 1
#define _POSIX_VDISABLE '\0'
#define __size_t 
#define F_HAS_TABLESPACE_PRIVILEGE_NAME_ID 2391
#define AGT_FBINARY_MASK 0x0FFFFFFF
#define F_GETLK64 5
#define F_ICREGEXEQJOINSEL 1826
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define F_BRIN_SUMMARIZE_NEW_VALUES 3952
#define F_SHELL_OUT 2399
#define stdout stdout
#define F_RECORD_IMAGE_LE 3185
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define MSG_RST MSG_RST
#define IP_OPTIONS 4
#define __WINT_WIDTH__ 32
#define REGTYPEARRAYOID 2211
#define F_INTERVAL_NE 1163
#define __struct_FILE_defined 1
#define Anum_pg_type_typanalyze 20
#define INTPTR_WIDTH __WORDSIZE
#define FLOAT4_FITS_IN_INT32(num) ((num) >= (float4) PG_INT32_MIN && (num) < -((float4) PG_INT32_MIN))
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define HAVE_UTIME_H 1
#define DatumGetTextPCopy(X) ((text *) PG_DETOAST_DATUM_COPY(X))
#define F_BYTEALT 1949
#define F_PG_LSN_RECV 3238
#define SIGUSR1 10
#define RINFO_IS_PUSHED_DOWN(rinfo,joinrelids) ((rinfo)->is_pushed_down || !bms_is_subset((rinfo)->required_relids, joinrelids))
#define F_NUMERIC_AVG_COMBINE 3337
#define VARDATA_ANY(PTR) (VARATT_IS_1B(PTR) ? VARDATA_1B(PTR) : VARDATA_4B(PTR))
#define F_BOOL_INT4 2558
#define __FLT32X_MAX_10_EXP__ 308
#define LOCK_SH 1
#define palloc0fast(sz) ( MemSetTest(0, sz) ? MemoryContextAllocZeroAligned(CurrentMemoryContext, sz) : MemoryContextAllocZero(CurrentMemoryContext, sz) )
#define ESRCH 3
#define ____mbstate_t_defined 1
#define F_UNKNOWNIN 109
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U32 
#define F_CIDSEND 2443
#define HASH_FFACTOR 0x0008
#define SO_ATTACH_REUSEPORT_EBPF 52
#define __SIGRTMIN 32
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define PARSE_COERCE_H 
#define F_PG_TABLESPACE_LOCATION 3778
#define F_TINTERVALCT 264
#define CURSOR_OPT_INSENSITIVE 0x0008
#define F_ANYARRAY_RECV 2502
#define RTContainsElemStrategyNumber 16
#define SO_RCVBUFFORCE 33
#define F_NUMERIC_POWER 1738
#define TUPCONVERT_H 
#define F_PG_GET_VIEWDEF_NAME_EXT 2505
#define F_CIRCLE_GE 1467
#define ERRCODE_INVALID_ARGUMENT_FOR_POWER_FUNCTION MAKE_SQLSTATE('2','2','0','1','F')
#define F_CIRCLE_GT 1465
#define _BITS_SIGNUM_GENERIC_H 1
#define F_BPCHARTYPMODIN 2913
#define ERRCODE_WARNING_DEPRECATED_FEATURE MAKE_SQLSTATE('0','1','P','0','1')
#define IP_PMTUDISC 10
#define F_FLOAT84NE 306
#define L_INCR SEEK_CUR
#define PG_HAVE_ATOMIC_INIT_FLAG 
#define ERRCODE_DUPLICATE_TABLE MAKE_SQLSTATE('4','2','P','0','7')
#define EMSGSIZE 90
#define F_OVERLAPS_TIMESTAMP 1304
#define __ASM_POSIX_TYPES_H 
#define TYPCATEGORY_NETWORK 'I'
#define F_ARRAY_CARDINALITY 3179
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define Anum_pg_class_reltype 3
#define __INT_LEAST32_TYPE__ int
#define ANYNONARRAYOID 2776
#define __FLT32_MIN_EXP__ (-125)
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define RWH_WRITE_LIFE_NONE 1
#define InvalidCommandId (~(CommandId)0)
#define DatumGetNumericCopy(X) ((Numeric) PG_DETOAST_DATUM_COPY(X))
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_ID 3005
#define SOL_CAIF 278
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define ERRCODE_OBJECT_NOT_IN_PREREQUISITE_STATE MAKE_SQLSTATE('5','5','0','0','0')
#define _SIZET_ 
#define F_PG_COLUMN_SIZE 1269
#define F_XID_AGE 1181
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define F_TINTERVALEQ 784
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define SIGPIPE 13
#define LOCKBIT_OFF(lockmode) (~(1 << (lockmode)))
#define _LP64 1
#define F_ABSTIME_DATE 1179
#define ACL_OPTION_TO_PRIVS(privs) (((AclMode) (privs) >> 16) & 0xFFFF)
#define F_FTOD 311
#define ACL_ALL_RIGHTS_FOREIGN_SERVER (ACL_USAGE)
#define F_STRING_AGG_FINALFN 3536
#define MAXALIGN(LEN) TYPEALIGN(MAXIMUM_ALIGNOF, (LEN))
#define __UINT8_C(c) c
#define F_REGOPERSEND 2449
#define F_PG_ENCODING_MAX_LENGTH_SQL 2319
#define F_CIRCLE_IN 1450
#define F_BOOL_ALLTRUE 3498
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE IPPROTO_NONE
#define F_BOOLOUT 1243
#define MOD_MAXERROR ADJ_MAXERROR
#define __S_IFSOCK 0140000
#define F_PG_GET_TRIGGERDEF_EXT 2730
#define WL_POSTMASTER_DEATH (1 << 4)
#define F_GIN_CONSISTENT_JSONB_PATH 3487
#define exec_subplan_get_plan(plannedstmt,subplan) ((Plan *) list_nth((plannedstmt)->subplans, (subplan)->plan_id - 1))
#define __stub_stty 
#define F_TO_JSON 3176
#define list_make3_oid(x1,x2,x3) lcons_oid(x1, list_make2_oid(x2, x3))
#define AGTE_IS_AGTYPE(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_AGTYPE)
#define __ASM_GENERIC_SOCKIOS_H 
#define F_NETWORK_HOST 699
#define F_LINE_IN 1490
#define F_TINTERVALGT 787
#define F_HASHMACADDR 399
#define RelFileNodeBackendIsTemp(rnode) ((rnode).backend != InvalidBackendId)
#define F_UNKNOWNRECV 2416
#define AGTYPE_EXISTS_STRATEGY_NUMBER 9
#define GetSysCacheHashValue4(cacheId,key1,key2,key3,key4) GetSysCacheHashValue(cacheId, key1, key2, key3, key4)
#define __UINT64_TYPE__ long unsigned int
#define TSTZRANGEARRAYOID 3911
#define Anum_pg_index_indpred 20
#define EAI_ADDRFAMILY -9
#define IsA(nodeptr,_type_) (nodeTag(nodeptr) == T_ ##_type_)
#define __stub___compat_query_module 
#define FirstCommandId ((CommandId) 0)
#define ag_graph_namespace_index_id() ag_relation_id("ag_graph_namespace_index", "index")
#define __ARM_NEON 1
#define newNode(size,tag) ({ Node *_result; AssertMacro((size) >= sizeof(Node)); _result = (Node *) palloc0fast(size); _result->type = (tag); _result; })
#define NO_DATA 4
#define F_FLOAT8_REGR_SXY 2809
#define F_DATE_NE_TIMESTAMPTZ 2356
#define POLYGONARRAYOID 1027
#define F_ICREGEXNEJOINSEL 1829
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define F_LSEG_GT 1485
#define F_FLOAT48GE 304
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define SO_MEMINFO 55
#define _SC_IOV_MAX _SC_IOV_MAX
#define F_TINTERVALIN 246
#define LOCK_WRITE 128
#define _SC_PASS_MAX _SC_PASS_MAX
#define F_POLY_SAME 339
#define F_CHARRECV 2434
#define F_VARBIT 1687
#define F_SCALARLESEL 336
#define F_RANGE_OUT 3835
#define F_NETWORK_LE 922
#define _SC_LONG_BIT _SC_LONG_BIT
#define ACL_ALL_RIGHTS_STR "arwdDxtXUCTc"
#define ERRCODE_DUPLICATE_COLUMN MAKE_SQLSTATE('4','2','7','0','1')
#define PG_RETURN_ARRAYTYPE_P(x) PG_RETURN_POINTER(x)
#define __stack_t_defined 1
#define F_REGPROCEDURERECV 2446
#define _POSIX_MAPPED_FILES 200809L
#define F_BTTEXTSORTSUPPORT 3255
#define ITEM_H 
#define PG_TEXTDOMAIN(domain) (domain "-" PG_MAJORVERSION)
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define F_HAS_LANGUAGE_PRIVILEGE_NAME 2266
#define ACL_DELETE (1<<3)
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define F_TEXT_TO_ARRAY 394
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define FLOAT4PASSBYVAL true
#define planner_subplan_get_plan(root,subplan) ((Plan *) list_nth((root)->glob->subplans, (subplan)->plan_id - 1))
#define HEAP_MOVED_IN 0x8000
#define F_TS_TYPANALYZE 3688
#define OIDCHARS 10
#define HAVE_DECL_LLVMGETHOSTCPUFEATURES 1
#define F_PG_ROTATE_LOGFILE 4099
#define F_INT8INC_FLOAT8_FLOAT8 2805
#define IPPROTO_IGMP IPPROTO_IGMP
#define LockHashPartition(hashcode) ((hashcode) % NUM_LOCK_PARTITIONS)
#define MaxHeapTupleSize (BLCKSZ - MAXALIGN(SizeOfPageHeaderData + sizeof(ItemIdData)))
#define __O_NOFOLLOW 0100000
#define BUFPAGE_H 
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define PG_RE_THROW() pg_re_throw()
#define MinHeapTupleSize MAXALIGN(SizeofHeapTupleHeader)
#define F_TSQUERY_LE 3663
#define PF_IUCV 32
#define __PID_T_TYPE __S32_TYPE
#define F_FLOAT8_TO_CHAR 1776
#define DatumGetInt64(X) ((int64) (X))
#define F_BOOLRECV 2436
#define F_TINTERVALLE 788
#define AGTE_OFFLENFLD(agte_) ((agte_)&AGTENTRY_OFFLENMASK)
#define HAVE_POLL 1
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define F_TINTERVALLT 786
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define PageGetMaxOffsetNumber(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData ? 0 : ((((PageHeader) (page))->pd_lower - SizeOfPageHeaderData) / sizeof(ItemIdData)))
#define ENOTCONN 107
#define F_ARRAY_TO_TSVECTOR 3327
#define STA_PPSFREQ 0x0002
#define GetPGProcByNumber(n) (&ProcGlobal->allProcs[(n)])
#define F_ARRAY_OUT 751
#define F_REGPROCIN 44
#define IN_CLASSB_NET 0xffff0000
#define F_TEXT_PATTERN_GE 2163
#define ERRCODE_UNDEFINED_CURSOR MAKE_SQLSTATE('3','4','0','0','0')
#define AccessShareLock 1
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define XLOG_BLCKSZ 8192
#define TIMESTAMPARRAYOID 1115
#define VARATT_SHORT_MAX 0x7F
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define F_TIMESTAMPTZ_DATE 1178
#define F_BPCHAR_SMALLER 1064
#define __GNUC_STDC_INLINE__ 1
#define F_PRSD_START 3717
#define F_TINTERVALGE 789
#define P_tmpdir "/tmp"
#define TXID_SNAPSHOTARRAYOID 2949
#define RelationOpenSmgr(relation) do { if ((relation)->rd_smgr == NULL) smgrsetowner(&((relation)->rd_smgr), smgropen((relation)->rd_node, (relation)->rd_backend)); } while (0)
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define MSG_TRYHARD MSG_DONTROUTE
#define HAVE_DECL_LLVMCREATEPERFJITEVENTLISTENER 1
#define _POSIX_MESSAGE_PASSING 200809L
#define F_ARRAY_TYPANALYZE 3816
#define __HAVE_FLOAT32 1
#define F_BITGETBIT 3032
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define __WORDSIZE_TIME64_COMPAT32 0
#define EPFNOSUPPORT 96
#define intVal(v) (((Value *)(v))->val.ival)
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME_NAME 3024
#define F_MAKE_TIMESTAMPTZ 3462
#define HAVE_STDBOOL_H 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define IPV6_ROUTER_ALERT 22
#define F_CURRENT_DATABASE 861
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define SO_PEERNAME 28
#define F_INT48GE 857
#define F_VARBIT_TRANSFORM 3158
#define CYPHER_OPT_RIGHT_ALIAS "_R"
#define F_TSQUERY_PHRASE_DISTANCE 5004
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define F_INT48GT 855
#define __DBL_DECIMAL_DIG__ 17
#define F_RANGE_MERGE 4057
#define F_TINTERVALOV 265
#define F_PERCENTILE_DISC_MULTI_FINAL 3979
#define F_BPCHAR_SORTSUPPORT 3328
#define PARSE_TARGET_H 
#define F_INTERVAL_EQ 1162
#define ERRCODE_S_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('2','F','0','0','3')
#define PRS2_OLD_VARNO 1
#define ERRCODE_CONFIGURATION_LIMIT_EXCEEDED MAKE_SQLSTATE('5','3','4','0','0')
#define LP_REDIRECT 2
#define ItemPointerSetInvalid(pointer) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), InvalidBlockNumber), (pointer)->ip_posid = InvalidOffsetNumber )
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define linitial_node(type,l) castNode(type, linitial(l))
#define INT_LEAST64_WIDTH 64
#define lfirst_oid(lc) ((lc)->data.oid_value)
#define F_INETOR 2629
#define F_DIST_SL 727
#define TypeRelationId 1247
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define F_ENUM_RECV 3532
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define fetchatt(A,T) fetch_att(T, (A)->attbyval, (A)->attlen)
#define SOCK_STREAM SOCK_STREAM
#define F_TEXT_PATTERN_GT 2164
#define REGBUF_WILL_INIT (0x04 | 0x02)
#define SKEY_H 
#define SA_NOMASK SA_NODEFER
#define TIME_UTC 1
#define TYPECACHE_HASH_EXTENDED_PROC 0x4000
#define __BIG_ENDIAN 4321
#define XLOG_DEFS_H 
#define F_TEXTOUT 47
#define store_att_byval(T,newdatum,attlen) do { switch (attlen) { case sizeof(char): *(char *) (T) = DatumGetChar(newdatum); break; case sizeof(int16): *(int16 *) (T) = DatumGetInt16(newdatum); break; case sizeof(int32): *(int32 *) (T) = DatumGetInt32(newdatum); break; case sizeof(Datum): *(Datum *) (T) = (newdatum); break; default: elog(ERROR, "unsupported byval length: %d", (int) (attlen)); break; } } while (0)
#define INDEX_AM_RESERVED_BIT 0x2000
#define PG_HAVE_ATOMIC_READ_U32 
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_BITSPERLONG_H 
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define strVal(v) (((Value *)(v))->val.str)
#define ERRCODE_FDW_INVALID_OPTION_NAME MAKE_SQLSTATE('H','V','0','0','D')
#define F_POINT_ABOVE 131
#define F_NAMERECV 2422
#define REPLICA_IDENTITY_FULL 'f'
#define F_PATH_N_EQ 984
#define NUM_INDIVIDUAL_LWLOCKS 48
#define F_PG_REPLICATION_ORIGIN_PROGRESS 6013
#define F_PT_CONTAINED_CIRCLE 1478
#define AGTENTRY_IS_NULL 0x40000000
#define ENOTBLK 15
#define RECORDOID 2249
#define ERRCODE_SNAPSHOT_TOO_OLD MAKE_SQLSTATE('7','2','0','0','0')
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define F_PG_RELATION_IS_PUBLISHABLE 6121
#define SI_KERNEL SI_KERNEL
#define ACL_H 
#define PG_GETARG_BYTEA_P(n) DatumGetByteaP(PG_GETARG_DATUM(n))
#define INDOPTION_DESC 0x0001
#define __INTMAX_WIDTH__ 64
#define F_PG_STAT_GET_BUF_ALLOC 2859
#define INT4OID 23
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define F_POLY_IN 347
#define _POSIX_REENTRANT_FUNCTIONS 1
#define F_NAMEREGEXNE 1252
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define BGWORKER_SHMEM_ACCESS 0x0001
#define F_OFD_SETLKW 38
#define F_PG_STAT_GET_ARCHIVER 3195
#define __ORDER_BIG_ENDIAN__ 4321
#define F_TIMESTAMPTZ_RECV 2476
#define PLATFORM_DEFAULT_SYNC_METHOD SYNC_METHOD_FDATASYNC
#define F_I8TOD 482
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define F_INT48LT 854
#define DSM_CREATE_NULL_IF_MAXSEGMENTS 0x0001
#define F_NUMERIC_COMBINE 3341
#define CHAR_WIDTH 8
#define USE_PREFETCH 
#define F_GTSVECTOR_UNION 3651
#define IP_RECVFRAGSIZE 25
#define F_PATH_ADD 1435
#define __UINT32_C(c) c ## U
#define F_BE_LO_TELL 958
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define AI_CANONIDN 0x0080
#define EISCONN 106
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define EAI_SYSTEM -11
#define edge_tuple_properties Anum_ag_label_edge_table_properties - 1
#define Natts_ag_graph 2
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define ENABLE_GSS 1
#define SET_LOCKTAG_PAGE(locktag,dboid,reloid,blocknum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_PAGE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define PageIsAllVisible(page) (((PageHeader) (page))->pd_flags & PD_ALL_VISIBLE)
#define F_CASH_IN 886
#define REGOPEROID 2203
#define F_NUMERIC_POLY_STDDEV_SAMP 3393
#define IP_NODEFRAG 22
#define __ATOMIC_RELEASE 3
#define __glibc_has_builtin(name) __has_builtin (name)
#define _LFS_ASYNCHRONOUS_IO 1
#define Natts_pg_type 30
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define AF_UNIX PF_UNIX
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define F_RANGE_UNION 3867
#define F_BITLT 1595
#define IP_RECVRETOPTS IP_RETOPTS
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define LOCK_UN 8
#define F_SETSIG __F_SETSIG
#define IPPROTO_COMP IPPROTO_COMP
#define USE_DSM_POSIX 
#define F_TIMESTAMP_GT 1157
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define HAVE_GETOPT_H 1
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define IS_DEFAULT_LABEL_EDGE(str) (str != NULL && strcmp(AG_DEFAULT_LABEL_EDGE, str) == 0)
#define _VA_LIST_T_H 
#define DN_MODIFY 0x00000002
#define __PIC__ 2
#define DN_DELETE 0x00000008
#define F_PG_RELATION_FILENODE 2999
#define F_REGTYPEIN 2220
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define TYPCATEGORY_COMPOSITE 'C'
#define __UINT_FAST32_TYPE__ long unsigned int
#define VARSIZE_1B(PTR) ((((varattrib_1b *) (PTR))->va_header >> 1) & 0x7F)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define O_NOFOLLOW __O_NOFOLLOW
#define F_DATE_TIMESTAMPTZ 1174
#define F_DIST_POLYP 3292
#define POLL_ERR POLL_ERR
#define F_RANGE_LT 3871
#define F_ARRAYOVERLAP 2747
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define F_INT8PL 463
#define REGCLASSARRAYOID 2210
#define UInt8GetDatum(X) ((Datum) (X))
#define SVE_VL_MAX __SVE_VL_MAX
#define AF_CAIF PF_CAIF
#define list_make2_oid(x1,x2) lcons_oid(x1, list_make1_oid(x2))
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define TYPCATEGORY_GEOMETRIC 'G'
#define ispunct(c) __isctype((c), _ISpunct)
#define LOG2_NUM_PREDICATELOCK_PARTITIONS 4
#define DatumGetUInt8(X) ((uint8) (X))
#define HAVE_DECL_STRTOLL 1
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define SHORTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_SHORT, (LEN))
#define DatumGetBpCharPCopy(X) ((BpChar *) PG_DETOAST_DATUM_COPY(X))
#define F_BOX_WIDTH 976
#define ScanDirectionIsValid(direction) ((bool) (BackwardScanDirection <= (direction) && (direction) <= ForwardScanDirection))
#define _POSIX_MQ_OPEN_MAX 8
#define ERRCODE_S_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','4')
#define Anum_ag_label_id 3
#define F_VARCHAR 669
#define TYPECACHE_CMP_PROC_FINFO 0x0040
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define F_PG_STAT_GET_DB_TEMP_FILES 3150
#define HEAP_XMAX_LOCK_ONLY 0x0080
#define F_PG_STAT_GET_DB_TUPLES_RETURNED 2758
#define __FP_FAST_FMA 1
#define F_HASHOID 453
#define ERRCODE_FDW_ERROR MAKE_SQLSTATE('H','V','0','0','0')
#define F_SET_FILE_RW_HINT 1038
#define F_TIME_HASH_EXTENDED 3409
#define PG_BINARY 0
#define SA_NOCLDWAIT 2
#define F_ARRAY_SEND 2401
#define __va_list__ 
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define CSTRINGARRAYOID 1263
#define VARSIZE_4B(PTR) ((((varattrib_4b *) (PTR))->va_4byte.va_header >> 2) & 0x3FFFFFFF)
#define F_BE_LO_LSEEK 956
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define IPV6_PATHMTU 61
#define PG_HAVE_ATOMIC_UNLOCKED_WRITE_U32 
#define SpecTokenOffsetNumber 0xfffe
#define F_INTERVAL_LARGER 1198
#define EXTNODENAME_MAX_LEN 64
#define FIELDNO_EXPRSTATE_RESULTSLOT 4
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX2_BC_DIM_MAX 2048
#define _POSIX_ASYNC_IO 1
#define F_PG_STAT_GET_TUPLES_INSERTED 1931
#define PG_GETARG_ARRAYTYPE_P_COPY(n) DatumGetArrayTypePCopy(PG_GETARG_DATUM(n))
#define HeapTupleHeaderSetXmax(tup,xid) ( (tup)->t_choice.t_heap.t_xmax = (xid) )
#define pg_read_barrier_impl() __atomic_thread_fence(__ATOMIC_ACQUIRE)
#define CLOCK_REALTIME 0
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define ERFKILL 132
#define F_INTERVAL_TRANSFORM 3918
#define F_HASHENUM 3515
#define F_INT42MUL 171
#define ERRCODE_S_E_INVALID_SPECIFICATION MAKE_SQLSTATE('3','B','0','0','1')
#define FIN_CRC32C(crc) ((crc) ^= 0xFFFFFFFF)
#define __INT32_TYPE__ int
#define F_GIN_CONSISTENT_JSONB 3484
#define F_PG_DEPENDENCIES_SEND 3407
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define F_JSONB_LE 4041
#define __SIZEOF_DOUBLE__ 8
#define F_FLOAT8_REGR_R2 2812
#define F_TIMETZ_SEND 2473
#define PG_HAVE_ATOMIC_FETCH_AND_U64 
#define __FLT_MANT_DIG__ 24
#define MCAST_MSFILTER 48
#define F_JSON_EACH 3958
#define F_TEXTOVERLAY 1404
#define IPV6_PMTUDISC_WANT 1
#define PG_LIST_H 
#define PF_APPLETALK 5
#define Anum_pg_attribute_attstattarget 4
#define CIRCLEARRAYOID 719
#define HeapTupleHeaderGetDatumLength(tup) VARSIZE(tup)
#define EPROTOTYPE 91
#define TTS_HAS_PHYSICAL_TUPLE(slot) ((slot)->tts_tuple != NULL && (slot)->tts_tuple != &((slot)->tts_minhdr))
#define ARR_NDIM(a) ((a)->ndim)
#define __SWORD_TYPE long int
#define REGROLEARRAYOID 4097
#define F_TIMESTAMP_GE_DATE 2368
#define Anum_pg_attribute_attstorage 11
#define be16toh(x) __bswap_16 (x)
#define F_INET_CLIENT_PORT 2197
#define SizeOfXLogRecordBlockImageHeader (offsetof(XLogRecordBlockImageHeader, bimg_info) + sizeof(uint8))
#define F_ON_SB 372
#define EL3HLT 46
#define F_BINARY_UPGRADE_SET_MISSING_VALUE 4101
#define _BITS_POSIX1_LIM_H 1
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define ATTSTATSSLOT_VALUES 0x01
#define CIDOID 29
#define SO_GET_FILTER SO_ATTACH_FILTER
#define forthree(cell1,list1,cell2,list2,cell3,list3) for ((cell1) = list_head(list1), (cell2) = list_head(list2), (cell3) = list_head(list3); (cell1) != NULL && (cell2) != NULL && (cell3) != NULL; (cell1) = lnext(cell1), (cell2) = lnext(cell2), (cell3) = lnext(cell3))
#define MCAST_BLOCK_SOURCE 43
#define F_TIMESTAMPTZ_IN 1150
#define _DIRENT_MATCHES_DIRENT64 1
#define FORKNAMECHARS 4
#define dsa_pointer_atomic_compare_exchange pg_atomic_compare_exchange_u64
#define ScanDirectionIsForward(direction) ((bool) ((direction) == ForwardScanDirection))
#define IN_CLASSA_NET 0xff000000
#define FLOAT4_FITS_IN_INT64(num) ((num) >= (float4) PG_INT64_MIN && (num) < -((float4) PG_INT64_MIN))
#define PG_USED_FOR_ASSERTS_ONLY pg_attribute_unused()
#define F_INT4SEND 2407
#define RTLessEqualStrategyNumber 21
#define ERRCODE_CARDINALITY_VIOLATION MAKE_SQLSTATE('2','1','0','0','0')
#define _T_SIZE 
#define StoreInvalidTransactionId(dest) (*(dest) = InvalidTransactionId)
#define VARATT_CONVERTED_SHORT_SIZE(PTR) (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT)
#define BKPBLOCK_HAS_DATA 0x20
#define REPLICA_IDENTITY_INDEX 'i'
#define ERRCODE_OUT_OF_MEMORY MAKE_SQLSTATE('5','3','2','0','0')
#define F_BOX_ABOVE_EQ 115
#define SO_MAX_PACING_RATE 47
#define ARR_OVERHEAD_WITHNULLS(ndims,nitems) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims) + ((nitems) + 7) / 8)
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define TYPECACHE_HASH_PROC_FINFO 0x0080
#define dlist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), (type *) dlist_head_element_off(lhead, offsetof(type, membername)))
#define HEAP_INSERT_SKIP_WAL 0x0001
#define F_DTRUNC 229
#define F_NUMERIC_POLY_COMBINE 3338
#define F_SPG_BOX_QUAD_INNER_CONSISTENT 5015
#define F_INT2_NUMERIC 1782
#define _____fpos64_t_defined 1
#define F_POLY_ABOVE 2569
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define va_end(v) __builtin_va_end(v)
#define ERRCODE_INVALID_CHARACTER_VALUE_FOR_CAST MAKE_SQLSTATE('2','2','0','1','8')
#define F_BOX_SAME 186
#define AG_EDGE_ACCESS_FUNCTION_START_ID "age_start_id"
#define ERRCODE_INVALID_TABLE_DEFINITION MAKE_SQLSTATE('4','2','P','1','6')
#define F_INT28LE 1854
#define HAVE_LONG_LONG_INT 1
#define DEFAULT_LOCKMETHOD 1
#define F_INETPL 2630
#define SVE_VL_MIN __SVE_VL_MIN
#define SET_CLAUSE_FUNCTION_NAME "_cypher_set_clause"
#define F_SPG_QUAD_CHOOSE 4019
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define F_VARCHARTYPMODOUT 2916
#define F_GIN_EXTRACT_TSQUERY 3657
#define _POSIX_V7_ILP32_OFFBIG -1
#define VARDATA(PTR) VARDATA_4B(PTR)
#define ELIBBAD 80
#define F_NUMERIC_MOD 1728
#define USE_PAM 1
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define TYPTYPE_COMPOSITE 'c'
#define _CS_V7_ENV _CS_V7_ENV
#define ESTRPIPE 86
#define __glibc_clang_prereq(maj,min) 0
#define ERRCODE_STATEMENT_TOO_COMPLEX MAKE_SQLSTATE('5','4','0','0','1')
#define F_CIRCLE_DISTANCE 1471
#define PF_INET 2
#define _SC_SIGNALS _SC_SIGNALS
#define TIMESTAMP_IS_NOEND(j) ((j) == DT_NOEND)
#define ECONNREFUSED 111
#define _XOPEN_LIM_H 1
#define si_call_addr _sifields._sigsys._call_addr
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ATTRIBUTE_IDENTITY_BY_DEFAULT 'd'
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define atooid(x) ((Oid) strtoul((x), NULL, 10))
#define Anum_pg_publication_pubupdate 5
#define ReleaseSysCacheList(x) ReleaseCatCacheList(x)
#define _RWLOCK_INTERNAL_H 
#define UINT_FAST8_WIDTH 8
#define F_INT2LARGER 770
#define F_PATH_NPOINTS 1432
#define F_REGROLEIN 4098
#define UINT16_MAX (65535)
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define F_JSONB_OBJECT 3263
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_MINHOPCOUNT 73
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define PF_MPLS 28
#define __USE_XOPEN_EXTENDED 1
#define XLogIsNeeded() (wal_level >= WAL_LEVEL_REPLICA)
#define InvalidPid (-1)
#define _POSIX_TRACE_LOG -1
#define HAVE_UNSIGNED_LONG_LONG_INT 1
#define __INT16_C(c) c
#define ACL_CREATE_TEMP (1<<10)
#define HeapTupleHeaderSetXmin(tup,xid) ( (tup)->t_choice.t_heap.t_xmin = (xid) )
#define PF_RXRPC 33
#define F_TIMESTAMPTZ_GT_DATE 2380
#define __ARM_ARCH_ISA_A64 1
#define MemSetLoop(start,val,len) do { long * _start = (long *) (start); long * _stop = (long *) ((char *) _start + (Size) (len)); while (_start < _stop) *_start++ = 0; } while (0)
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define _SC_THREADS _SC_THREADS
#define TIMEZONE_GLOBAL timezone
#define pg_attribute_format_arg(a) __attribute__((format_arg(a)))
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SIG_IGN ((__sighandler_t) 1)
#define F_INT28LT 1852
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define ENFILE 23
#define RESUME_CANCEL_INTERRUPTS() do { Assert(QueryCancelHoldoffCount > 0); QueryCancelHoldoffCount--; } while(0)
#define F_BE_LO_PUT 3460
#define ERRCODE_FDW_DYNAMIC_PARAMETER_VALUE_NEEDED MAKE_SQLSTATE('H','V','0','0','2')
#define F_INT8_TO_CHAR 1774
#define ARR_DATA_PTR(a) (((char *) (a)) + ARR_DATA_OFFSET(a))
#define _NETINET_IN_H 1
#define EEXIST 17
#define ERRCODE_SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION MAKE_SQLSTATE('4','2','0','0','0')
#define F_NUMERIC_INT2 1783
#define PGDEPENDENCIESOID 3402
#define HAVE_LONG_INT_64 1
#define F_THESAURUS_LEXIZE 3741
#define IP_UNICAST_IF 50
#define F_SETLKW 7
#define DT_LNK DT_LNK
#define errno (*__errno_location ())
#define F_PG_EXTENSION_UPDATE_PATHS 3084
#define __LC_IDENTIFICATION 12
#define EADV 68
#define FLEXIBLE_ARRAY_MEMBER 
#define F_MACADDR8_SEND 3447
#define F_ACLDEFAULT_SQL 3943
#define F_MACADDR8_TRUNC 4112
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME 3004
#define VARATT_NOT_PAD_BYTE(PTR) (*((uint8 *) (PTR)) != 0)
#define PF_ATMPVC 8
#define F_PG_LAST_COMMITTED_XACT 3583
#define CATALOG_VERSION_NO 201809051
#define F_PG_OPFAMILY_IS_VISIBLE 3829
#define _BITS_STAT_H 1
#define InitFunctionCallInfoData(Fcinfo,Flinfo,Nargs,Collation,Context,Resultinfo) do { (Fcinfo).flinfo = (Flinfo); (Fcinfo).context = (Context); (Fcinfo).resultinfo = (Resultinfo); (Fcinfo).fncollation = (Collation); (Fcinfo).isnull = false; (Fcinfo).nargs = (Nargs); } while (0)
#define PG_HAVE_ATOMIC_CLEAR_FLAG 
#define F_JSON_AGG_FINALFN 3174
#define F_INT4_AVG_ACCUM 1963
#define F_TIMEOFDAY 274
#define CURSOR_OPT_HOLD 0x0010
#define PG_GETARG_VARCHAR_P_SLICE(n,a,b) DatumGetVarCharPSlice(PG_GETARG_DATUM(n),a,b)
#define __ARM_PCS_AAPCS64 1
#define F_RANGE_INTERSECT 3868
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define InvalidSubTransactionId ((SubTransactionId) 0)
#define F_BINARY_UPGRADE_SET_NEXT_INDEX_PG_CLASS_OID 3587
#define F_LIKE_ESCAPE_BYTEA 2009
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define F_BINARY_UPGRADE_SET_NEXT_HEAP_PG_CLASS_OID 3586
#define EAI_SERVICE -8
#define INTSTYLE_ISO_8601 3
#define F_XIDOUT 51
#define ENOPKG 65
#define F_FLOAT4SEND 2425
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define AF_X25 PF_X25
#define F_INT8LE 471
#define F_NUMERIC_AVG_SERIALIZE 2740
#define Anum_pg_type_typtype 6
#define F_JSONB_POPULATE_RECORDSET 3475
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define GetPerTupleExprContext(estate) ((estate)->es_per_tuple_exprcontext ? (estate)->es_per_tuple_exprcontext : MakePerTupleExprContext(estate))
#define ERRCODE_FDW_INVALID_USE_OF_NULL_POINTER MAKE_SQLSTATE('H','V','0','0','9')
#define PageGetPageSize(page) ((Size) (((PageHeader) (page))->pd_pagesize_version & (uint16) 0xFF00))
#define F_TINTERVALLENNE 267
#define F_BRIN_MINMAX_OPCINFO 3383
#define LWLOCK_PADDED_SIZE PG_CACHE_LINE_SIZE
#define ERRCODE_OPERATOR_INTERVENTION MAKE_SQLSTATE('5','7','0','0','0')
#define __UINTPTR_TYPE__ long unsigned int
#define ARRAY_H 
#define F_XML_OUT 2894
#define F_INTERVAL_RECV 2478
#define F_TS_RANKCD_WTT 3708
#define F_UUID_EQ 2956
#define IS_DUMMY_APPEND(p) (IsA((p), AppendPath) && ((AppendPath *) (p))->subpaths == NIL)
#define CLD_KILLED CLD_KILLED
#define F_TIMESTAMP_ZONE_TRANSFORM 3995
#define HEAP_INSERT_FROZEN 0x0004
#define F_HAS_DATABASE_PRIVILEGE_ID_NAME 2252
#define F_IN_RANGE_INT4_INT8 4127
#define F_PG_STAT_GET_DB_BLOCKS_HIT 1945
#define SO_RCVTIMEO_NEW 66
#define AGT_OFFSET_STRIDE 32
#define __bitwise__ 
#define __SVE_NUM_PREGS 16
#define F_FLOAT4_TO_CHAR 1775
#define SOL_AAL 265
#define SHUT_RD SHUT_RD
#define F_LSEG_LE 1484
#define O_PATH __O_PATH
#define _SC_FIFO _SC_FIFO
#define __BITS_SOCKET_H 
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define TIMESTAMP_END_JULIAN (109203528)
#define SubtransControlLock (&MainLWLockArray[12].lock)
#define _SC_SPAWN _SC_SPAWN
#define BLOCK_H 
#define F_PG_FILENODE_RELATION 3454
#define CYPHER_TARGET_NODE_MERGE_EXISTS 0x0010
#define ERRCODE_INVALID_INDICATOR_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','1','0')
#define list_make1_oid(x1) lcons_oid(x1, NIL)
#define F_BIT_IN 1564
#define ERRCODE_NAME_TOO_LONG MAKE_SQLSTATE('4','2','6','2','2')
#define FLOAT8ARRAYOID 1022
#define BGW_MAXLEN 96
#define REGCONFIGOID 3734
#define ERRCODE_INVALID_FUNCTION_DEFINITION MAKE_SQLSTATE('4','2','P','1','3')
#define PG_UINT8_MAX (0xFF)
#define F_TIMESTAMP_TO_CHAR 2049
#define F_LSEG_IN 119
#define F_DATE_OUT 1085
#define SIG_SETMASK 2
#define F_PG_OPCLASS_IS_VISIBLE 2083
#define F_RANGE_LOWER 3848
#define PVC_RECURSE_WINDOWFUNCS 0x0008
#define IPV6_MULTICAST_ALL 29
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define F_PG_READ_BINARY_FILE 3295
#define XLogRecBlockImageApply(decoder,block_id) ((decoder)->blocks[block_id].apply_image)
#define _POSIX_OPEN_MAX 20
#define HAVE_GCC__SYNC_CHAR_TAS 1
#define DATETIME_MIN_JULIAN (0)
#define F_ANYELEMENT_OUT 2313
#define ERRCODE_TRIM_ERROR MAKE_SQLSTATE('2','2','0','2','7')
#define F_PG_SIZE_PRETTY_NUMERIC 3166
#define F_XIDNEQ 3308
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define HASH_FUNCTION 0x0040
#define PG_TEMP_FILES_DIR "pgsql_tmp"
#define __FLT128_DECIMAL_DIG__ 36
#define OPAQUEOID 2282
#define ERRCODE_SUBSTRING_ERROR MAKE_SQLSTATE('2','2','0','1','1')
#define LOG_DESTINATION_CSVLOG 8
#define FIELDNO_EXPRCONTEXT_INNERTUPLE 2
#define BlockIdIsValid(blockId) ((bool) PointerIsValid(blockId))
#define F_TS_HEADLINE 3755
#define F_INT4SMALLER 769
#define F_IN_RANGE_DATE_INTERVAL 4133
#define ENOTUNIQ 76
#define F_TEXTREGEXREPLACE 2285
#define F_PG_NDISTINCT_RECV 3357
#define F_GINHANDLER 333
#define F_PG_STAT_GET_BUF_WRITTEN_BACKEND 2775
#define _PWD_H 1
#define list_make1(x1) lcons(x1, NIL)
#define list_make2(x1,x2) lcons(x1, list_make1(x2))
#define list_make3(x1,x2,x3) lcons(x1, list_make2(x2, x3))
#define list_make4(x1,x2,x3,x4) lcons(x1, list_make3(x2, x3, x4))
#define list_make5(x1,x2,x3,x4,x5) lcons(x1, list_make4(x2, x3, x4, x5))
#define F_PG_XACT_COMMIT_TIMESTAMP 3581
#define __FLT_DECIMAL_DIG__ 9
#define PROCLOCK_LOCKMETHOD(proclock) LOCK_LOCKMETHOD(*((proclock).tag.myLock))
#define EOHPGetRWDatum(eohptr) PointerGetDatum((eohptr)->eoh_rw_ptr)
#define ERRCODE_WARNING_IMPLICIT_ZERO_BIT_PADDING MAKE_SQLSTATE('0','1','0','0','8')
#define F_CLOSE_SB 368
#define F_TIME_GE 1105
#define GetCTETargetList(cte) (AssertMacro(IsA((cte)->ctequery, Query)), ((Query *) (cte)->ctequery)->commandType == CMD_SELECT ? ((Query *) (cte)->ctequery)->targetList : ((Query *) (cte)->ctequery)->returningList)
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define F_PG_REPLICATION_ORIGIN_XACT_RESET 6011
#define F_PG_PREPARED_XACT 1065
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __FLT_MIN_10_EXP__ (-37)
#define F_TIMETZ_LE 1355
#define PG_RETURN_VOID() return (Datum) 0
#define SOL_ALG 279
#define SHUT_WR SHUT_WR
#define AGE_VARNAME_CREATE_NULL_VALUE AGE_DEFAULT_VARNAME_PREFIX"create_null_value"
#define AT_EMPTY_PATH 0x1000
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define F_BRIN_MINMAX_UNION 3386
#define _ASM_GENERIC_TYPES_H 
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define __INT_LEAST64_WIDTH__ 64
#define F_NAMEOUT 35
#define INT_LEAST16_MAX (32767)
#define Anum_pg_index_indisunique 5
#define F_GTSVECTOR_CONSISTENT 3654
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define AGT_FBINARY 0x80000000
#define _GNU_SOURCE 1
#define _POSIX_SAVED_IDS 1
#define F_HASHMACADDR8EXTENDED 781
#define NUM_BUFFER_PARTITIONS 128
#define Natts_pg_index 20
#define F_TS_STAT1 3689
#define F_TS_STAT2 3690
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define PG_DIAG_SEVERITY_NONLOCALIZED 'V'
#define IsPolymorphicType(typid) ((typid) == ANYELEMENTOID || (typid) == ANYARRAYOID || (typid) == ANYNONARRAYOID || (typid) == ANYENUMOID || (typid) == ANYRANGEOID)
#define F_NUMERIC_CMP 1769
#define _POSIX_BARRIERS 200809L
#define att_isnull(ATT,BITS) (!((BITS)[(ATT) >> 3] & (1 << ((ATT) & 0x07))))
#define NI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("NI_IDN_USE_STD3_ASCII_RULES is deprecated") 128
#define PG_DIAG_CONSTRAINT_NAME 'n'
#define PageClearFull(page) (((PageHeader) (page))->pd_flags &= ~PD_PAGE_FULL)
#define PG_CLASS_H 
#define DAYS_PER_YEAR 365.25
#define F_CLOSE_PB 367
#define BACKUP_LABEL_FILE "backup_label"
#define d_fileno d_ino
#define TYPCATEGORY_DATETIME 'D'
#define __ATOMIC_ACQ_REL 4
#define __U32_TYPE unsigned int
#define ALLOCSET_DEFAULT_SIZES ALLOCSET_DEFAULT_MINSIZE, ALLOCSET_DEFAULT_INITSIZE, ALLOCSET_DEFAULT_MAXSIZE
#define HAVE_SYS_SELECT_H 1
#define F_HAS_ANY_COLUMN_PRIVILEGE_ID_NAME 3026
#define ATTSTATSSLOT_NUMBERS 0x02
#define F_HAS_SCHEMA_PRIVILEGE_ID 2273
#define F_LIKE_ESCAPE 1637
#define F_CIRCLE_LT 1464
#define _STDLIB_H 1
#define F_JSONB_BUILD_OBJECT 3273
#define PG_GETARG_RAW_VARLENA_P(n) ((struct varlena *) PG_GETARG_POINTER(n))
#define IP_RECVERR_RFC4884 26
#define _T_WCHAR 
#define F_NAMEREGEXEQ 79
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define F_TS_RANK_WTTF 3703
#define F_TSQUERY_REWRITE 3684
#define F_PG_GET_MULTIXACT_MEMBERS 3819
#define F_INT8_CASH 3812
#define _BITS_FLOATN_COMMON_H 
#define IP_UNBLOCK_SOURCE 37
#define IPV6_RTHDR_TYPE_0 0
#define TransactionIdAdvance(dest) do { (dest)++; if ((dest) < FirstNormalTransactionId) (dest) = FirstNormalTransactionId; } while(0)
#define PG_RETURN_NUMERIC(x) return NumericGetDatum(x)
#define F_TIMESTAMPTZ_SEND 2477
#define CppAsString(identifier) #identifier
#define CLOCK_TAI 11
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define si_timerid _sifields._timer.si_tid
#define _BITS_SIGEVENT_CONSTS_H 1
#define __FLT32X_MAX_EXP__ 1024
#define F_GIST_POINT_FETCH 3282
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define F_WINDOW_RANK 3101
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define TUPLESTORE_H 
#define HAS_TEST_AND_SET 
#define F_TIME_NE 1106
#define O_NOCTTY 0400
#define LONGALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_LONG, (LEN))
#define AIO_PRIO_DELTA_MAX 20
#define F_HAS_COLUMN_PRIVILEGE_NAME_NAME 3020
#define F_NETWORK_CMP 926
#define HeapTupleHeaderSetXminInvalid(tup) ( AssertMacro(!HeapTupleHeaderXminCommitted(tup)), ((tup)->t_infomask |= HEAP_XMIN_INVALID) )
#define F_PERCENTILE_CONT_INTERVAL_MULTI_FINAL 3983
#define F_HAS_LANGUAGE_PRIVILEGE_ID_NAME 2264
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define F_JSONB_EXTRACT_PATH_TEXT 3940
#define F_PG_GET_VIEWDEF 1641
#define NO_ADDRESS NO_DATA
#define F_INTERVAL_OUT 1161
#define _STDBOOL_H 
#define AARR_DIMS(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.dims : ARR_DIMS((ArrayType *) (a)))
#define PARAMS_H 
#define F_PG_STAT_GET_BGWRITER_TIMED_CHECKPOINTS 2769
#define __ARM_SIZEOF_WCHAR_T 4
#define PG_PAGE_LAYOUT_VERSION 4
#define HAVE_STRING_H 1
#define F_CIDR_IN 1267
#define __ATOMIC_ACQUIRE 2
#define Float4GetDatumFast(X) Float4GetDatum(X)
#define F_ICLIKEJOINSEL 1816
#define RTMaxStrategyNumber 28
#define F_JSON_BUILD_ARRAY 3198
#define F_TIMETZ_RECV 2472
#define RELKIND_MATVIEW 'm'
#define GAI_WAIT 0
#define IP_DEFAULT_MULTICAST_TTL 1
#define F_ORDERED_SET_TRANSITION_MULTI 3971
#define VARRAWSIZE_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_rawsize)
#define __ARM_FEATURE_UNALIGNED 1
#define F_BTBOOLCMP 1693
#define PVC_INCLUDE_PLACEHOLDERS 0x0010
#define ANYRANGEOID 3831
#define PG_INDEX_H 
#define F_INT2XOR 1894
#define F_INT2_AVG_ACCUM_INV 3570
#define ItemPointerCopy(fromPointer,toPointer) ( AssertMacro(PointerIsValid(toPointer)), AssertMacro(PointerIsValid(fromPointer)), *(toPointer) = *(fromPointer) )
#define MOD_CLKB ADJ_TICK
#define ATTNUM_H 
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __GCC_IEC_559_COMPLEX 2
#define F_GTSVECTOR_COMPRESS 3648
#define F_JSONB_DELETE_PATH 3304
#define F_INT2VECTORSEND 2411
#define VARATT_IS_EXTERNAL_ONDISK(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_ONDISK)
#define LOG_DESTINATION_SYSLOG 2
#define Anum_pg_type_typalign 21
#define HeapTupleHeaderSetXminFrozen(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_FROZEN) )
#define AG_AG_NAMESPACE_H 
#define F_TIMETZ_LT 1354
#define __uid_t_defined 
#define F_BPCHAR_PATTERN_LE 2175
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define EUNATCH 49
#define SOL_ATM 264
#define _SETJMP_H 1
#define F_INT4IN 42
#define F_TABLE_TO_XML 2923
#define F_CIRCLE_BOX 1480
#define F_FLOAT8OUT 215
#define F_NUMRANGE_SUBDIFF 3924
#define INT_LEAST16_MIN (-32767-1)
#define USE_ICU 1
#define CLogTruncationLock (&MainLWLockArray[45].lock)
#define F_BYTEAEQ 1948
#define F_FLOAT48DIV 280
#define LWLOCK_H 
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define AF_RDS PF_RDS
#define __flexarr []
#define _SC_LINE_MAX _SC_LINE_MAX
#define SEGV_PKUERR SEGV_PKUERR
#define ACL_TRIGGER_CHR 't'
#define F_DTAND 2737
#define F_TIMETZ_MI_INTERVAL 1750
#define AG_EDGE_COLNAME_END_ID "end_id"
#define BlockIdCopy(toBlockId,fromBlockId) ( AssertMacro(PointerIsValid(toBlockId)), AssertMacro(PointerIsValid(fromBlockId)), (toBlockId)->bi_hi = (fromBlockId)->bi_hi, (toBlockId)->bi_lo = (fromBlockId)->bi_lo )
#define _BITS_SETJMP_H 1
#define _POSIX_PRIORITIZED_IO 200809L
#define PG_DETOAST_DATUM_SLICE(datum,f,c) pg_detoast_datum_slice((struct varlena *) DatumGetPointer(datum), (int32) (f), (int32) (c))
#define PG_INT32_MAX (0x7FFFFFFF)
#define __stub_fchflags 
#define F_NUMERIC_SEND 2461
#define PG_RETURN_OID(x) return ObjectIdGetDatum(x)
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define SK_ROW_MEMBER 0x0008
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define IS_DIR_SEP(ch) IS_NONWINDOWS_DIR_SEP(ch)
#define F_OIDVECTORLT 677
#define F_BYTEAGT 1951
#define F_SPG_RANGE_QUAD_CHOOSE 3470
#define F_PATH_OPEN 1434
#define O_ACCMODE 0003
#define ERRCODE_NO_DATA MAKE_SQLSTATE('0','2','0','0','0')
#define ERRCODE_INVALID_XML_COMMENT MAKE_SQLSTATE('2','2','0','0','S')
#define SizeofHeapTupleHeader offsetof(HeapTupleHeaderData, t_bits)
#define F_INTERVAL_SCALE 1200
#define AT_STATX_FORCE_SYNC 0x2000
#define pairingheap_is_singular(h) ((h)->ph_root && (h)->ph_root->first_child == NULL)
#define __FSWORD_T_TYPE __SWORD_TYPE
#define SIG_HOLD ((__sighandler_t) 2)
#define AF_XDP PF_XDP
#define ACCEPT_TYPE_ARG3 socklen_t
#define FIOGETOWN 0x8903
#define ERRCODE_UNDEFINED_OBJECT MAKE_SQLSTATE('4','2','7','0','4')
#define EAFNOSUPPORT 97
#define F_TSVECTOR_NE 3619
#define F_PG_STAT_GET_BACKEND_PID 1937
#define F_TIME_OUT 1144
#define F_XMLEXISTS 2614
#define ERRCODE_DATATYPE_MISMATCH MAKE_SQLSTATE('4','2','8','0','4')
#define F_TSQUERY_NUMNODE 3672
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define FKCONSTR_ACTION_NOACTION 'a'
#define ERRCODE_INVALID_ARGUMENT_FOR_LOG MAKE_SQLSTATE('2','2','0','1','E')
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define RTContainedByStrategyNumber 8
#define F_INT2OUT 39
#define F_TIME_IN 1143
#define F_TS_PARSE_BYID 3715
#define ACCEPT_TYPE_RETURN int
#define F_BITPOSITION 1698
#define F_TSVECTORRECV 3639
#define F_INT24EQ 158
#define F_BYTEAIN 1244
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define VARBITOID 1562
#define USE_LIBXML 1
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define F_PT_CONTAINED_POLY 1429
#define F_FLOAT4IN 200
#define IPV6_PMTUDISC_INTERFACE 4
#define PG_DIAG_MESSAGE_PRIMARY 'M'
#define F_REGEXP_MATCH 3397
#define DELAYTIMER_MAX 2147483647
#define Anum_pg_attribute_attinhcount 19
#define F_PG_IMPORT_SYSTEM_COLLATIONS 3445
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define F_ARRAY_LENGTH 2176
#define DT_WHT DT_WHT
#define F_DATE_GE 1090
#define Anum_pg_class_relrewrite 28
#define INT16_C(c) c
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define NUM_ATOMICS_SEMAPHORES 64
#define _SC_2_C_DEV _SC_2_C_DEV
#define LockHashPartitionLock(hashcode) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + LockHashPartition(hashcode)].lock)
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define F_TINTERVALSEND 2467
#define F_RECORD_NE 2982
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK2 2
#define NAMESPACE_H 
#define F_PG_NOTIFY 3036
#define F_INT24GE 168
#define EXIT_FAILURE 1
#define ENOEXEC 8
#define Anum_pg_publication_pubdelete 6
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define F_INT24GT 162
#define F_FTOI2 238
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define F_PG_STAT_GET_DB_BLOCKS_FETCHED 1944
#define ALLOCSET_START_SMALL_SIZES ALLOCSET_SMALL_MINSIZE, ALLOCSET_SMALL_INITSIZE, ALLOCSET_DEFAULT_MAXSIZE
#define ERRCODE_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','1')
#define SizeofMinimalTupleHeader offsetof(MinimalTupleData, t_bits)
#define FRAMEOPTION_BETWEEN 0x00010
#define MQ_PRIO_MAX 32768
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define F_ENUM_RANGE_ALL 3531
#define _GETOPT_POSIX_H 1
#define ERRCODE_TOO_MANY_ROWS MAKE_SQLSTATE('P','0','0','0','3')
#define LC_ALL __LC_ALL
#define EA_MAGIC 689375833
#define _XOPEN_SOURCE 700
#define UINT_LEAST32_WIDTH 32
#define F_BYTEALE 1950
#define EILSEQ 84
#define XLR_INFO_MASK 0x0F
#define ERRCODE_INVALID_TRANSACTION_INITIATION MAKE_SQLSTATE('0','B','0','0','0')
#define F_TIMETZ_SCALE 1969
#define F_INT4SHL 1902
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ESPIPE 29
#define F_DATE_NE_TIMESTAMP 2343
#define F_BRIN_INCLUSION_UNION 4108
#define F_INT48MUL 1280
#define _POSIX_TTY_NAME_MAX 9
#define __USE_LARGEFILE 1
#define __PTRDIFF_TYPE__ long int
#define AG_CYPHER_PARSE_NODE_H 
#define SI_DETHREAD SI_DETHREAD
#define HeapTupleHeaderSetDatumLength(tup,len) SET_VARSIZE(tup, len)
#define F_FTOI8 653
#define F_I4TOF 318
#define __OFF_T_MATCHES_OFF64_T 1
#define PruneCxtStateIdx(partnatts,step_id,keyno) ((partnatts) * (step_id) + (keyno))
#define F_TEXT_SUBSTR 877
#define F_INT4_CASH 3811
#define iscntrl(c) __isctype((c), _IScntrl)
#define list_make5_int(x1,x2,x3,x4,x5) lcons_int(x1, list_make4_int(x2, x3, x4, x5))
#define F_PG_GET_REPLICA_IDENTITY_INDEX 6120
#define F_CIRCLE_DIV_PT 1149
#define F_BYTEANE 1953
#define USE_STDBOOL 1
#define F_VOID_SEND 3121
#define F_NAMEICREGEXEQ 1240
#define OPEN_DATASYNC_FLAG O_DSYNC
#define F_NUMERIC_INT4 1744
#define __WCHAR_MAX__ 0xffffffffU
#define AF_APPLETALK PF_APPLETALK
#define F_RANGE_MINUS 3869
#define F_INT2NE 145
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define F_POLY_CENTER 227
#define SOL_PPPOL2TP 273
#define AF_IB PF_IB
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define ERRCODE_ARRAY_ELEMENT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define SO_NETNS_COOKIE 71
#define F_NUMERIC_SIGN 1706
#define INT16_MAX (32767)
#define LANGUAGE_HANDLEROID 2280
#define F_SHA384_BYTEA 3421
#define IPV6_NEXTHOP 9
#define relpathbackend(rnode,backend,forknum) GetRelationPath((rnode).dbNode, (rnode).spcNode, (rnode).relNode, backend, forknum)
#define PG_RETURN_TEXT_P(x) PG_RETURN_POINTER(x)
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define F_BTTEXTCMP 360
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define MEMNODES_H 
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define AF_MCTP PF_MCTP
#define HAVE_PG_ATTRIBUTE_NORETURN 1
#define F_NUMERIC_INT8 1779
#define __S_IREAD 0400
#define F_REGPROCOUT 45
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define NUMERICOID 1700
#define Anum_pg_index_indexrelid 1
#define BGW_DEFAULT_RESTART_INTERVAL 60
#define HEAP_NATTS_MASK 0x07FF
#define F_PG_RELATION_FILEPATH 3034
#define RMGR_H 
#define FRAMEOPTION_EXCLUDE_CURRENT_ROW 0x08000
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define XLOGINSERT_H 
#define F_GETOWN_EX __F_GETOWN_EX
#define EXEC_FLAG_WITH_OIDS 0x0020
#define ERRCODE_FOREIGN_KEY_VIOLATION MAKE_SQLSTATE('2','3','5','0','3')
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define BKPBLOCK_FORK_MASK 0x0F
#define CLOCK_MONOTONIC_RAW 4
#define ALLOCSET_DEFAULT_INITSIZE (8 * 1024)
#define PACKAGE_STRING "PostgreSQL 11.18"
#define _IOFBF 0
#define DATUM_GET_GRAPHID(d) DatumGetInt64(d)
#define LOCK_READ 64
#define F_REGEXEQJOINSEL 1824
#define ERRCODE_DUPLICATE_DATABASE MAKE_SQLSTATE('4','2','P','0','4')
#define PARSE_COLLATE_H 
#define BKI_ROWTYPE_OID(oid,oidmacro) 
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define F_DATE_GT_TIMESTAMPTZ 2354
#define ERRCODE_DATABASE_DROPPED MAKE_SQLSTATE('5','7','P','0','4')
#define F_FLOAT4SMALLER 211
#define AGT_ROOT_IS_OBJECT(agtp_) ((*(uint32 *)VARDATA(agtp_) & AGT_FOBJECT) != 0)
#define VARBITARRAYOID 1563
#define TYPECACHE_DOMAIN_CONSTR_INFO 0x2000
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define F_JSON_OBJECT_FIELD 3947
#define F_BOX_EQ 128
#define F_HASHVARLENAEXTENDED 772
#define ERRCODE_INVALID_SCHEMA_NAME MAKE_SQLSTATE('3','F','0','0','0')
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define SO_SELECT_ERR_QUEUE 45
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define SIGXCPU 24
#define F_BYTEANLIKE 2006
#define __FLT64_DECIMAL_DIG__ 17
#define F_SATISFIES_HASH_PARTITION 5028
#define F_CIDR_RECV 2498
#define F_GETSIG __F_GETSIG
#define VARATT_IS_1B_E(PTR) ((((varattrib_1b *) (PTR))->va_header) == 0x01)
#define F_LSEG_LENGTH 1487
#define TIMESTAMPTZOID 1184
#define F_GETPIPE_SZ 1032
#define __FLT128_HAS_QUIET_NAN__ 1
#define F_POLY_BELOW 2566
#define F_INT42LE 167
#define lengthof(array) (sizeof (array) / sizeof ((array)[0]))
#define F_PG_REPLICATION_ORIGIN_SESSION_RESET 6007
#define ADJ_MICRO 0x1000
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define F_IN_RANGE_TIMESTAMPTZ_INTERVAL 4135
#define F_TSQ_MCONTAINED 3692
#define TIMETZARRAYOID 1270
#define BackgroundWorkerLock (&MainLWLockArray[33].lock)
#define ObjectAddressSet(addr,class_id,object_id) ObjectAddressSubSet(addr, class_id, object_id, 0)
#define Anum_ag_label_edge_table_end_id 3
#define F_BITXOR 1675
#define AI_NUMERICSERV 0x0400
#define UUIDOID 2950
#define F_TIME_INTERVAL 1370
#define USE_POSTGRES_DATES 0
#define F_NUMERIC_EQ 1718
#define XATTR_SIZE_MAX 65536
#define HAVE_POLL_H 1
#define F_BYTEAGE 1952
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define F_RADIANS 1609
#define HAVE_SSL_GET_CURRENT_COMPRESSION 1
#define F_STRING_AGG_TRANSFN 3535
#define MAX_TIMESTAMP_PRECISION 6
#define ANYELEMENTOID 2283
#define CharGetDatum(X) ((Datum) (X))
#define F_PG_EXPORT_SNAPSHOT 3809
#define AGTYPE_CONTAINER_SIZE(agtc) ((agtc)->header & AGT_CMASK)
#define AGT_FBINARY_TYPE_VLE_PATH 0x00000001
#define lfourth_int(l) lfirst_int(lnext(lnext(lnext(list_head(l)))))
#define F_TIMESTAMPTZTYPMODIN 2907
#define Anum_pg_index_indnatts 3
#define HAVE_LIBREADLINE 1
#define F_GIN_EXTRACT_TSQUERY_5ARGS 3087
#define ILL_BADIADDR ILL_BADIADDR
#define F_IN_RANGE_FLOAT4_FLOAT8 4140
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define F_INET_GIST_PENALTY 3557
#define F_XMLCOMMENT 2895
#define F_BOX_BELOW_EQ 116
#define F_PLAINTO_TSQUERY_BYID 3747
#define EOWNERDEAD 130
#define F_XPATH_EXISTS 3049
#define F_NAMEGT 657
#define HEAP_XMAX_IS_EXCL_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_EXCL_LOCK)
#define F_JSONB_TO_TSVECTOR_BYID 4214
#define F_NUMERIC_AVG_ACCUM 2858
#define DT_FIFO DT_FIFO
#define AGTE_IS_CONTAINER(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_CONTAINER)
#define F_REGNAMESPACEIN 4084
#define F_CASH_GE 893
#define F_BYTEA_STRING_AGG_FINALFN 3544
#define F_TXID_SNAPSHOT_SEND 2942
#define PVC_RECURSE_PLACEHOLDERS 0x0020
#define F_PG_STAT_GET_VACUUM_COUNT 3054
#define TINTERVALOID 704
#define F_PG_CURSOR 2511
#define NODEFUNCS_H 
#define HeapTupleSetHeapOnly(tuple) HeapTupleHeaderSetHeapOnly((tuple)->t_data)
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define HAVE_PTHREAD 1
#define HeapTupleHeaderGetTypMod(tup) ( (tup)->t_choice.t_datum.datum_typmod )
#define F_QUERY_TO_XML_AND_XMLSCHEMA 2930
#define SHUT_RDWR SHUT_RDWR
#define POLL_MSG POLL_MSG
#define F_TIMESTAMP_ABSTIME 2030
#define INT16_MIN (-32767-1)
#define SIZEOF_BOOL 1
#define F_PG_TRY_ADVISORY_LOCK_INT8 2882
#define HAVE_ASN1_STRING_GET0_DATA 1
#define __FINITE_MATH_ONLY__ 0
#define Anum_pg_index_indisclustered 9
#define si_overrun _sifields._timer.si_overrun
#define __sig_atomic_t_defined 1
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define PG_RETURN_FLOAT8(x) return Float8GetDatum(x)
#define ERRCODE_INVALID_NAME MAKE_SQLSTATE('4','2','6','0','2')
#define F_LANGUAGE_HANDLER_OUT 2303
#define SInvalWriteLock (&MainLWLockArray[6].lock)
#define F_PG_ADVISORY_UNLOCK_SHARED_INT8 2885
#define F_NAMEIN 34
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define F_PERCENTILE_DISC_FINAL 3973
#define PROC_RESERVED 0x20
#define MOD_TIMECONST ADJ_TIMECONST
#define new_ag_node(size,tag) ( AssertMacro((size) >= sizeof(ExtensibleNode)), AssertMacro(tag != ag_node_invalid_t), _new_ag_node(size, tag) )
#define PG_INDEX_D_H 
#define EXEC_FLAG_WITH_NO_DATA 0x0080
#define F_JSON_OBJECT_TWO_ARG 3203
#define SO_SNDLOWAT 19
#define RTOverBelowStrategyNumber 9
#define MOD_FREQUENCY ADJ_FREQUENCY
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define FALLOC_FL_ZERO_RANGE 0x10
#define F_CURRTID_BYRELNAME 1294
#define EBADR 53
#define F_BTABSTIMECMP 357
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define STA_PPSERROR 0x0800
#define ObjectIdAttributeNumber (-2)
#define XLR_NORMAL_RDATAS 20
#define __pid_t_defined 
#define EL2NSYNC 45
#define ERANGE 34
#define ECANCELED 125
#define F_PG_STAT_GET_XACT_TUPLES_UPDATED 3041
#define TYPTYPE_DOMAIN 'd'
#define F_TEXT_REVERSE 3062
#define XLR_SPECIAL_REL_UPDATE 0x01
#define InvalidDsaPointer ((dsa_pointer) 0)
#define F_SETVAL_OID 1576
#define PARSE_EXPR_H 
#define F_SMGREQ 762
#define F_BTINT2SORTSUPPORT 3129
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define SCM_SRCRT IPV6_RXSRCRT
#define ReplicationSlotAllocationLock (&MainLWLockArray[36].lock)
#define Anum_pg_attribute_attislocal 18
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _THREAD_MUTEX_INTERNAL_H 1
#define F_GIST_BOX_SAME 2584
#define __LDBL_REDIR1(name,proto,alias) name proto
#define MSG_MORE MSG_MORE
#define ERRCODE_EXTERNAL_ROUTINE_EXCEPTION MAKE_SQLSTATE('3','8','0','0','0')
#define F_TO_REGTYPE 3493
#define EOF (-1)
#define IndexIsLive(indexForm) ((indexForm)->indislive)
#define NGROUPS_MAX 65536
#define RelationGetNumberOfAttributes(relation) ((relation)->rd_rel->relnatts)
#define INT_FAST8_MAX (127)
#define F_NUMERIC_SORTSUPPORT 3283
#define MOD_STATUS ADJ_STATUS
#define SO_INCOMING_NAPI_ID 56
#define ETXTBSY 26
#define F_ANYARRAY_OUT 2297
#define AGT_ROOT_IS_ARRAY(agtp_) ((*(uint32 *)VARDATA(agtp_) & AGT_FARRAY) != 0)
#define F_IN_RANGE_INTERVAL_INTERVAL 4136
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define AmBootstrapProcess() (MyAuxProcType == BootstrapProcess)
#define Anum_pg_type_typsend 17
#define F_AMVALIDATE 338
#define F_ON_PB 136
#define F_DCEIL 2308
#define F_ON_PL 959
#define NSIG _NSIG
#define F_SCHEMA_TO_XML 2933
#define F_ON_PS 369
#define F_LINE_INTERSECT 1495
#define RelationGetTargetPageFreeSpace(relation,defaultff) (BLCKSZ * (100 - RelationGetFillFactor(relation, defaultff)) / 100)
#define F_SPG_RANGE_QUAD_INNER_CONSISTENT 3472
#define INDOPTION_NULLS_FIRST 0x0002
#define EAI_INPROGRESS -100
#define RELATION_H 
#define F_BITFROMINT4 1683
#define F_TSQUERY_PHRASE 5003
#define MSG_PEEK MSG_PEEK
#define F_PG_LOGICAL_EMIT_MESSAGE_BYTEA 3578
#define F_TINTERVALSAME 263
#define ADJ_ESTERROR 0x0008
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define F_BPCHARGE 1052
#define EAI_CANCELED -101
#define F_PG_STAT_GET_BACKEND_CLIENT_ADDR 1392
#define htobe16(x) __bswap_16 (x)
#define F_NAME_TEXT 406
#define ERRCODE_INVALID_FOREIGN_KEY MAKE_SQLSTATE('4','2','8','3','0')
#define F_SMGRIN 760
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define ILIST_H 
#define __SHRT_MAX__ 0x7fff
#define Anum_pg_type_typinput 14
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define USE_SYSTEMD 1
#define ILL_ILLOPC ILL_ILLOPC
#define F_BITLENGTH 1681
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define Anum_pg_type_typcategory 7
#define PG_GETARG_NUMERIC(n) DatumGetNumeric(PG_GETARG_DATUM(n))
#define Anum_pg_type_typbyval 5
#define F_JSON_EACH_TEXT 3959
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define LABEL_ID_SEQ_NAME "_label_id_seq"
#define F_RI_FKEY_CHECK_UPD 1645
#define F_TIMESTAMP_GT_DATE 2367
#define __FLT64X_MAX_10_EXP__ 4932
#define F_BRIN_SUMMARIZE_RANGE 3999
#define F_TSVECTOR_STRIP 3623
#define F_INT8LARGER 1236
#define F_WINDOW_DENSE_RANK 3102
#define F_OIDSMALLER 1966
#define F_ENUM_FIRST 3528
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define ACL_ALL_RIGHTS_FUNCTION (ACL_EXECUTE)
#define SIGTTOU 22
#define AllocHugeSizeIsValid(size) ((Size) (size) <= MaxAllocHugeSize)
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define STA_FREQHOLD 0x0080
#define F_ON_SL 960
#define F_REGCONFIGSEND 3739
#define __clockid_t_defined 1
#define F_HASHTEXT 400
#define ERRCODE_TO_CATEGORY(ec) ((ec) & ((1 << 12) - 1))
#define BACKENDID_H 
#define Anum_pg_type_typdelim 10
#define __LDBL_IS_IEC_60559__ 2
#define SO_RCVTIMEO_OLD 20
#define __CHAR32_TYPE__ unsigned int
#define F_PATH_CLOSE 1433
#define F_PG_STAT_GET_DB_BLK_READ_TIME 2844
#define HeapTupleHeaderSetMovedPartitions(tup) ItemPointerSet(&(tup)->t_ctid, MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define IPV6_HDRINCL 36
#define F_HAS_SERVER_PRIVILEGE_ID 3011
#define NSS_BUFLEN_PASSWD 1024
#define HeapTupleHeaderGetXmin(tup) ( HeapTupleHeaderXminFrozen(tup) ? FrozenTransactionId : HeapTupleHeaderGetRawXmin(tup) )
#define POSIX_FADV_SEQUENTIAL 2
#define F_GIN_CMP_PREFIX 2700
#define SerializableXactHashLock (&MainLWLockArray[28].lock)
#define F_CIRCLE_LE 1466
#define ERRCODE_TRANSACTION_RESOLUTION_UNKNOWN MAKE_SQLSTATE('0','8','0','0','7')
#define F_TSVECTOR_EQ 3618
#define ReplicationSlotControlLock (&MainLWLockArray[37].lock)
#define AGE_VARNAME_CREATE_CLAUSE AGE_DEFAULT_VARNAME_PREFIX"create_clause"
#define F_HAS_ANY_COLUMN_PRIVILEGE_ID_ID 3027
#define PageSetLSN(page,lsn) PageXLogRecPtrSet(((PageHeader) (page))->pd_lsn, lsn)
#define F_PG_STAT_RESET_SHARED 3775
#define __LITTLE_ENDIAN 1234
#define F_INTERVAL_SMALLER 1197
#define INDEX_VAR 65002
#define SVE_MAGIC 0x53564501
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define AGT_HEADER_VERTEX 0x00000002
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define F_INT42LT 161
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define ItemIdMarkDead(itemId) ( (itemId)->lp_flags = LP_DEAD )
#define ACL_USAGE_CHR 'U'
#define htobe64(x) __bswap_64 (x)
#define F_SMGRNE 763
#define F_TSVECTOR_GE 3620
#define EINPROGRESS 115
#define F_SCALARLTJOINSEL 107
#define TINTERVALARRAYOID 1025
#define __HAVE_DISTINCT_FLOAT32X 0
#define UINTPTR_WIDTH __WORDSIZE
#define F_BTTEXT_PATTERN_SORTSUPPORT 3332
#define WL_LATCH_SET (1 << 0)
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define PG_DYNSHMEM_MMAP_FILE_PREFIX "mmap."
#define ERRCODE_T_R_DEADLOCK_DETECTED MAKE_SQLSTATE('4','0','P','0','1')
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define INT_FAST8_MIN (-128)
#define _UNISTD_H 1
#define HeapTupleHeaderGetOid(tup) ( ((tup)->t_infomask & HEAP_HASOID) ? *((Oid *) ((char *)(tup) + (tup)->t_hoff - sizeof(Oid))) : InvalidOid )
#define F_OPAQUE_IN 2306
#define F_TIMETZ_PL_INTERVAL 1749
#define F_PG_TRY_ADVISORY_XACT_LOCK_INT8 3091
#define F_TO_TSQUERY 3750
#define F_REGCONFIGIN 3736
#define WCHAR_MIN __WCHAR_MIN
#define ERRCODE_E_R_I_E_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','1')
#define ERRCODE_PLPGSQL_ERROR MAKE_SQLSTATE('P','0','0','0','0')
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define F_TO_JSONB 3787
#define F_CLOSE_LSEG 1489
#define floatVal(v) atof(((Value *)(v))->val.str)
#define HeapTupleClearHeapOnly(tuple) HeapTupleHeaderClearHeapOnly((tuple)->t_data)
#define LSYSCACHE_H 
#define F_BE_LO_IMPORT_WITH_OID 767
#define F_TRIGGER_OUT 2301
#define __UID_T_TYPE __U32_TYPE
#define F_CASH_MUL_INT2 866
#define HAVE_MEMMOVE 1
#define _POSIX_READER_WRITER_LOCKS 200809L
#define PROC_IN_ANALYZE 0x04
#define F_PG_HAS_ROLE_NAME 2709
#define F_SPG_POLY_QUAD_COMPRESS 5011
#define __AARCH64_CMODEL_SMALL__ 1
#define F_FLOAT8UP 1914
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define HAVE_GETIFADDRS 1
#define _POSIX_AIO_MAX 1
#define OffsetNumberIsValid(offsetNumber) ((bool) ((offsetNumber != InvalidOffsetNumber) && (offsetNumber <= MaxOffsetNumber)))
#define INT_FAST32_WIDTH __WORDSIZE
#define SO_WIFI_STATUS 41
#define F_LINE_RECV 2488
#define HAVE_LDAP_INITIALIZE 1
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define ADJ_TIMECONST 0x0020
#define F_PG_TIMEZONE_ABBREVS 2599
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define F_GTSVECTOR_CONSISTENT_OLDSIG 3790
#define F_REGCLASSIN 2218
#define F_INT8_AVG_ACCUM_INV 3387
#define __LDBL_MAX_EXP__ 16384
#define get_parse_state(cpstate) ((ParseState *)(cpstate))
#define F_DATE_CMP_TIMESTAMPTZ 2357
#define Anum_pg_index_indisreplident 14
#define F_PG_GET_SERIAL_SEQUENCE 1665
#define PRIMNODES_H 
#define ENOTEMPTY 39
#define is_absolute_path(filename) is_nonwindows_absolute_path(filename)
#define F_OFD_GETLK 36
#define ACLITEM_GET_PRIVS(item) ((item).ai_privs & 0xFFFF)
#define F_BPCHARLEN 1318
#define UINT_FAST16_MAX (18446744073709551615UL)
#define PG_RETURN_EXPANDED_ARRAY(x) PG_RETURN_DATUM(EOHPGetRWDatum(&(x)->hdr))
#define INTSTYLE_POSTGRES_VERBOSE 1
#define F_DCOSD 2736
#define CHARARRAYOID 1002
#define __WINT_MIN__ 0U
#define F_TSVECTOR_LE 3617
#define GROUPING_CAN_USE_SORT 0x0001
#define O_DIRECTORY __O_DIRECTORY
#define IS_DUMMY_REL(r) is_dummy_rel(r)
#define F_WINDOW_CUME_DIST 3104
#define F_TSVECTOR_LT 3616
#define F_HAS_SCHEMA_PRIVILEGE_NAME_NAME 2268
#define _SC_SHELL _SC_SHELL
#define ACL_ALL_RIGHTS_LARGEOBJECT (ACL_SELECT|ACL_UPDATE)
#define F_JSON_IN 321
#define F_SCALARGEJOINSEL 398
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define SECS_PER_MINUTE 60
#define PG_GETARG_FLOAT4(n) DatumGetFloat4(PG_GETARG_DATUM(n))
#define PG_MODULE_MAGIC_DATA { sizeof(Pg_magic_struct), PG_VERSION_NUM / 100, FUNC_MAX_ARGS, INDEX_MAX_KEYS, NAMEDATALEN, FLOAT4PASSBYVAL, FLOAT8PASSBYVAL }
#define __linux__ 1
#define F_SEAL_WRITE 0x0008
#define IndexInfoFindDataOffset(t_info) ( (!((t_info) & INDEX_NULL_MASK)) ? ( (Size)MAXALIGN(sizeof(IndexTupleData)) ) : ( (Size)MAXALIGN(sizeof(IndexTupleData) + sizeof(IndexAttributeBitMapData)) ) )
#define F_INT2MUL 152
#define F_THESAURUS_INIT 3740
#define F_BINARY_ENCODE 1946
#define DatumGetBpCharPSlice(X,m,n) ((BpChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define ERRCODE_AMBIGUOUS_FUNCTION MAKE_SQLSTATE('4','2','7','2','5')
#define AF_NETROM PF_NETROM
#define SO_BPF_EXTENSIONS 48
#define HeapTupleHeaderGetSpeculativeToken(tup) ( AssertMacro(HeapTupleHeaderIsSpeculative(tup)), ItemPointerGetBlockNumber(&(tup)->t_ctid) )
#define REGBUF_FORCE_IMAGE 0x01
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define F_CIRCLE_LEFT 1454
#define __FLT128_MIN_10_EXP__ (-4931)
#define F_GTSVECTOR_DECOMPRESS 3649
#define F_PG_TRY_ADVISORY_XACT_LOCK_SHARED_INT4 3096
#define __FLT32X_IS_IEC_60559__ 2
#define DatumGetByteaPCopy(X) ((bytea *) PG_DETOAST_DATUM_COPY(X))
#define F_PG_TRY_ADVISORY_XACT_LOCK_SHARED_INT8 3092
#define PD_HAS_FREE_LINES 0x0001
#define F_JSON_BUILD_OBJECT 3200
#define ADJ_MAXERROR 0x0004
#define htonl(x) __bswap_32 (x)
#define HAVE_GCC__SYNC_INT32_TAS 1
#define unix 1
#define htons(x) __bswap_16 (x)
#define IPV6_MTU_DISCOVER 23
#define EAI_NONAME -2
#define F_BOX_OVERLEFT 189
#define _POSIX_AIO_LISTIO_MAX 2
#define F_TIMETZ_CMP 1358
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME_ID 3025
#define F_BOX_OUT 124
#define F_BTFLOAT48CMP 2194
#define HEAP_UPDATED 0x2000
#define PG_FREE_IF_COPY(ptr,n) do { if ((Pointer) (ptr) != PG_GETARG_POINTER(n)) pfree(ptr); } while (0)
#define INTSTYLE_SQL_STANDARD 2
#define DatumGetAclPCopy(X) ((Acl *) PG_DETOAST_DATUM_COPY(X))
#define DSA_ALLOC_HUGE 0x01
#define SO_REUSEADDR 2
#define Anum_pg_type_typlen 4
#define __WCHAR_MIN__ 0U
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_SYNCHRONIZED_IO 200809L
#define __SIZEOF_WINT_T__ 4
#define F_PG_FUNCTION_IS_VISIBLE 2081
#define F_PG_GET_INDEXDEF_EXT 2507
#define CUSTOMPATH_SUPPORT_MARK_RESTORE 0x0002
#define VARATT_IS_SHORT(PTR) VARATT_IS_1B(PTR)
#define F_RANGE_EQ 3855
#define PG_UINT16_MAX (0xFFFF)
#define HAVE_LIBCRYPTO 1
#define F_JSONB_SET 3305
#define UINT_WIDTH 32
#define F_INTERVAL_AVG 1844
#define CppConcat(x,y) x ##y
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define F_RANGE_CONTAINS_ELEM 3858
#define F_PG_LSN_OUT 3230
#define SET_VARSIZE_1B(PTR,len) (((varattrib_1b *) (PTR))->va_header = (((uint8) (len)) << 1) | 0x01)
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define F_TEXTEQ 67
#define F_PG_STAT_RESET_SINGLE_TABLE_COUNTERS 3776
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define F_HASHENUMEXTENDED 3414
#define F_CLOSE_LB 963
#define O_APPEND 02000
#define __osockaddr_defined 1
#define F_BTNAMECMP 359
#define F_BINARY_DECODE 1947
#define F_TO_REGROLE 4093
#define _SYS_USER_H 1
#define _FORTIFY_SOURCE 2
#define F_FMGR_C_VALIDATOR 2247
#define __INT8_MAX__ 0x7f
#define SET_LOCKTAG_SPECULATIVE_INSERTION(locktag,xid,token) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = (token), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_SPECULATIVE_TOKEN, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define DEF_PGPORT 5432
#define F_HASHNAME 455
#define GTSVECTOROID 3642
#define F_TIMETZ_ZONE 2037
#define PG_DIAG_SOURCE_FUNCTION 'R'
#define _SC_BASE _SC_BASE
#define F_SPG_QUAD_INNER_CONSISTENT 4021
#define _BITS_TIMEX_H 1
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define F_DATE_EQ_TIMESTAMP 2340
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _POSIX_LINK_MAX 8
#define AGG_CONTEXT_AGGREGATE 1
#define F_ENUM_LARGER 3525
#define PointerIsValid(pointer) ((const void*)(pointer) != NULL)
#define F_GIST_CIRCLE_COMPRESS 2592
#define __ldiv_t_defined 1
#define VARTAG_IS_EXPANDED(tag) (((tag) & ~1) == VARTAG_EXPANDED_RO)
#define AF_TIPC PF_TIPC
#define TIDARRAYOID 1010
#define ItemPointerGetBlockNumberNoCheck(pointer) ( BlockIdGetBlockNumber(&(pointer)->ip_blkid) )
#define DO_AGGSPLIT_SKIPFINAL(as) (((as) & AGGSPLITOP_SKIPFINAL) != 0)
#define F_INT84GE 479
#define F_LINE_DISTANCE 239
#define LOCKTAG_LAST_TYPE LOCKTAG_DATABASE_FROZEN_IDS
#define F_BITFROMINT8 2075
#define F_INET_SPG_CHOOSE 3796
#define __UINT8_TYPE__ unsigned char
#define CHARCLASS_NAME_MAX 2048
#define F_TIDRECV 2438
#define __unix 1
#define isblank(c) __isctype((c), _ISblank)
#define F_JSON_STRING_TO_TSVECTOR 4210
#define _DEFAULT_SOURCE 1
#define F_TEXT_GE 743
#define F_TABLE_TO_XML_AND_XMLSCHEMA 2929
#define _LINUX_POSIX_TYPES_H 
#define SO_MARK 36
#define ACL_CREATE (1<<9)
#define PointerGetDatum(X) ((Datum) (X))
#define _POSIX2_BC_STRING_MAX 1000
#define AG_VERTEX_ACCESS_FUNCTION_PROPERTIES "age_properties"
#define F_CHR 1621
#define SYSCACHE_H 
#define __USE_EXTERN_INLINES 1
#define AARR_NDIM(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.ndims : ARR_NDIM((ArrayType *) (a)))
#define AG_EDGE_COLNAME_PROPERTIES "properties"
#define F_PG_CURRENT_WAL_INSERT_LSN 2852
#define ERRCODE_DIVISION_BY_ZERO MAKE_SQLSTATE('2','2','0','1','2')
#define F_PG_REPLICATION_SLOT_ADVANCE 3878
#define F_SPG_BOX_QUAD_CHOOSE 5013
#define PinTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) IncrTupleDescRefCount(tupdesc); } while (0)
#define F_TIMETZ_SMALLER 1380
#define OBJECTADDRESS_H 
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define __LOCK_ALIGNMENT 
#define PG_GETARG_OID(n) DatumGetObjectId(PG_GETARG_DATUM(n))
#define fastgetattr(tup,attnum,tupleDesc,isnull) ( AssertMacro((attnum) > 0), (*(isnull) = false), HeapTupleNoNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup)->t_data + (tup)->t_data->t_hoff + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocachegetattr((tup), (attnum), (tupleDesc)) ) : ( att_isnull((attnum)-1, (tup)->t_data->t_bits) ? ( (*(isnull) = true), (Datum)NULL ) : ( nocachegetattr((tup), (attnum), (tupleDesc)) ) ) )
#define _XOPEN_REALTIME_THREADS 1
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define F_PG_STAT_GET_XACT_TUPLES_HOT_UPDATED 3043
#define ETIMEDOUT 110
#define HAVE__BUILTIN_TYPES_COMPATIBLE_P 1
#define ERRCODE_INVALID_AUTHORIZATION_SPECIFICATION MAKE_SQLSTATE('2','8','0','0','0')
#define PageGetItemId(page,offsetNumber) ((ItemId) (&((PageHeader) (page))->pd_linp[(offsetNumber) - 1]))
#define F_REGOPERRECV 2448
#define F_INT4LARGER 768
#define F_INT24LE 166
#define __USE_GNU_GETTEXT 1
#define BITS_PER_BYTE 8
#define PG_INT64_MAX INT64CONST(0x7FFFFFFFFFFFFFFF)
#define __SI_ERRNO_THEN_CODE 1
#define ExclusiveLock 7
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define F_DATE_EQ_TIMESTAMPTZ 2353
#define F_HAS_SERVER_PRIVILEGE_ID_ID 3009
#define ENODATA 61
#define F_LPAD 873
#define pg_compiler_barrier() pg_compiler_barrier_impl()
#define USE_GERMAN_DATES 3
#define do_text_output_oneline(tstate,str_to_emit) do { Datum values_[1]; bool isnull_[1]; values_[0] = PointerGetDatum(cstring_to_text(str_to_emit)); isnull_[0] = false; do_tup_output(tstate, values_, isnull_); pfree(DatumGetPointer(values_[0])); } while (0)
#define F_HASHVARLENA 456
#define IPV6_AUTHHDR 10
#define F_INT42EQ 159
#define ERRCODE_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('2','2','0','0','4')
#define MAX_RANDOM_VALUE PG_INT32_MAX
#define F_OIDVECTORTYPES 1349
#define DN_ACCESS 0x00000001
#define __END_DECLS 
#define FKCONSTR_ACTION_SETNULL 'n'
#define F_DSYNONYM_LEXIZE 3729
#define _STATBUF_ST_NSEC 
#define PARALLEL_H 
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define Anum_pg_class_relkind 16
#define IPV6_RECVERR_RFC4884 31
#define F_INT84LE 478
#define HAVE_COMPUTED_GOTO 1
#define F_POLY_OVERRIGHT 343
#define SET_VARTAG_EXTERNAL(PTR,tag) SET_VARTAG_1B_E(PTR, tag)
#define DATEORDER_YMD 0
#define F_ANYARRAY_SEND 2503
#define SizeOfXLogRecord (offsetof(XLogRecord, xl_crc) + sizeof(pg_crc32c))
#define F_INT84LT 476
#define F_JSONB_OBJECT_KEYS 3931
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _ALLOCA_H 1
#define F_UUID_HASH 2963
#define F_JSONB_ARRAY_ELEMENTS 3219
#define F_NUMERIC_UPLUS 1915
#define F_INT42GE 169
#define dlist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->next)
#define F_POINT_VERT 989
#define F_PATH_SUB_PT 1437
#define F_CHARLT 1246
#define ACL_SIZE(ACL) ARR_SIZE(ACL)
#define F_TEXT_LE 741
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define CURSOR_OPT_BINARY 0x0001
#define F_TIME_PL_INTERVAL 1747
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define PG_HAVE_ATOMIC_U32_SUPPORT 
#define _SYS_SELECT_H 1
#define S_IRUSR __S_IREAD
#define IndexRelationGetNumberOfAttributes(relation) ((relation)->rd_index->indnatts)
#define F_POSITIONJOINSEL 1301
#define F_INT2_AVG_ACCUM 1962
#define ERRCODE_COLLATION_MISMATCH MAKE_SQLSTATE('4','2','P','2','1')
#define RelationNeedsWAL(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_PERMANENT)
#define HAVE_STDINT_H 1
#define PF_ALG 38
#define CheckpointLock (&MainLWLockArray[10].lock)
#define TYPCATEGORY_BITSTRING 'V'
#define ALLOCSET_DEFAULT_MINSIZE 0
#define F_OIDTOI8 1288
#define NUM_SPINLOCK_SEMAPHORES 128
#define ERRCODE_INVALID_CATALOG_NAME MAKE_SQLSTATE('3','D','0','0','0')
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define F_HASHOIDVECTOREXTENDED 776
#define SCOPE_DELIMITER '%'
#define __jmp_buf_tag_defined 1
#define ELOG_H 
#define __LC_TELEPHONE 10
#define AGT_FSCALAR 0x10000000
#define F_TS_LEXIZE 3723
#define F_PG_ISOLATION_TEST_SESSION_IS_BLOCKED 3378
#define REGDICTIONARYARRAYOID 3770
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define PG_DIAG_INTERNAL_POSITION 'p'
#define IP_IPSEC_POLICY 16
#define F_FLOAT8LARGER 223
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define F_WINDOW_LAG_WITH_OFFSET 3107
#define IPPROTO_PIM IPPROTO_PIM
#define F_PG_STAT_GET_DB_DEADLOCKS 3152
#define HAVE_INTTYPES_H 1
#define __DBL_DIG__ 15
#define Anum_pg_class_relisshared 14
#define F_PG_GET_EXPR_EXT 2509
#define F_PG_GET_PUBLICATION_TABLES 6119
#define PG_PRINTF_ATTRIBUTE gnu_printf
#define ERRCODE_DISK_FULL MAKE_SQLSTATE('5','3','1','0','0')
#define EINTR 4
#define __f32x(x) x ##f32x
#define AF_INET6 PF_INET6
#define F_INT84PL 1274
#define F_TEXT_FORMAT 3539
#define F_MACADDRTOMACADDR8 4123
#define SOL_NETLINK 270
#define UInt16GetDatum(X) ((Datum) (X))
#define PATH_MAX 4096
#define CLOCK_BOOTTIME 7
#define HeapTupleHeaderSetHotUpdated(tup) ( (tup)->t_infomask2 |= HEAP_HOT_UPDATED )
#define F_XIDEQ 68
#define F_BOX_IN 123
#define F_BTRECORDCMP 2987
#define F_DATE_PLI 1141
#define _IO_EOF_SEEN 0x0010
#define DEBUG1 14
#define DEBUG2 13
#define DEBUG3 12
#define DEBUG4 11
#define DEBUG5 10
#define _POSIX_SPAWN 200809L
#define __SHRT_WIDTH__ 16
#define F_INT4OR 1899
#define F_RANGE_RECV 3836
#define F_GINQUERYARRAYEXTRACT 2774
#define __f64x(x) x ##f64x
#define SO_LINGER 13
#define INT4RANGEOID 3904
#define F_GIN_TSQUERY_CONSISTENT_6ARGS 3088
#define TYPCATEGORY_NUMERIC 'N'
#define PG_INT64_MIN (-INT64CONST(0x7FFFFFFFFFFFFFFF) - 1)
#define F_DATE_MII 1142
#define Anum_pg_type_typndims 26
#define AGT_HEADER_EDGE 0x00000003
#define TMP_MAX 238328
#define si_status _sifields._sigchld.si_status
#define ALIGNOF_BUFFER 32
#define AF_WANPIPE PF_WANPIPE
#define PF_UNIX PF_LOCAL
#define ERRCODE_INVALID_REGULAR_EXPRESSION MAKE_SQLSTATE('2','2','0','1','B')
#define __FLT32_MAX_EXP__ 128
#define F_UPPER 871
#define AmCheckpointerProcess() (MyAuxProcType == CheckpointerProcess)
#define F_RANGE_EMPTY 3850
#define DATEOID 1082
#define F_INT42MI 183
#define F_CURRENT_QUERY 817
#define TupleDescAttr(tupdesc,i) (&(tupdesc)->attrs[(i)])
#define F_BYTEASEND 2413
#define AGT_GIN_FLAG_HASHED 0x10
#define SECS_PER_YEAR (36525 * 864)
#define ILL_ILLADR ILL_ILLADR
#define F_FLOAT8_REGR_INTERCEPT 2814
#define F_RI_FKEY_RESTRICT_UPD 1649
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC PF_UNSPEC
#define F_NUMERIC_CASH 3824
#define QTW_IGNORE_CTE_SUBQUERIES 0x02
#define F_PG_CONVERT_TO 1717
#define _SS_SIZE 128
#define SIGQUIT 3
#define F_INT42NE 165
#define F_DATE_CMP_TIMESTAMP 2344
#define NI_NOFQDN 4
#define SK_UNARY 0x0002
#define MAXTZLEN 10
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define F_REGOPERATORIN 2216
#define F_PG_CONVERT 1813
#define F_JSON_TO_TSVECTOR 4215
#define F_HAS_FUNCTION_PRIVILEGE_NAME_NAME 2256
#define ACL_DAT(ACL) ((AclItem *) ARR_DATA_PTR(ACL))
#define SYNC_METHOD_OPEN 2
#define F_ENUM_CMP 3514
#define PF_CAIF 37
#define F_ABSTIMELE 255
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define F_BOOLTEXT 2971
#define RELPERSISTENCE_TEMP 't'
#define le64toh(x) __uint64_identity (x)
#define PACKAGE_NAME "PostgreSQL"
#define PF_ASH 18
#define JULIAN_MAXYEAR (5874898)
#define SHM_MQ_H 
#define F_NUMERIC_GE 1721
#define HOLD_CANCEL_INTERRUPTS() (QueryCancelHoldoffCount++)
#define F_PG_CURRENT_LOGFILE 3800
#define EAI_IDN_ENCODE -105
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define F_GINARRAYCONSISTENT 2744
#define PATHARRAYOID 1019
#define _WCHAR_T_ 
#define FIELDNO_TUPLETABLESLOT_ISNULL 11
#define F_NUMERIC_AVG 1837
#define F_INTERVAL_PL 1169
#define F_TSTZRANGE_SUBDIFF 3930
#define F_TSQUERY_GT 3667
#define F_ON_PPATH 137
#define F_BITLE 1594
#define RTSIG_MAX 32
#define F_JSONB_BUILD_ARRAY_NOARGS 3272
#define F_TO_TIMESTAMP 1778
#define F_I4TOD 316
#define EPERM 1
#define F_NUMERIC_DIV 1727
#define Anum_ag_label_edge_table_properties 4
#define _STDDEF_H 
#define EAI_FAMILY -6
#define F_TIDEQ 1292
#define VARSIZE(PTR) VARSIZE_4B(PTR)
#define F_JSONB_TYPEOF 3210
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define F_TSM_BERNOULLI_HANDLER 3313
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define lthird_int(l) lfirst_int(lnext(lnext(list_head(l))))
#define AssertVariableIsOfType(varname,typename) StaticAssertStmt(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename))
#define F_TS_RANKCD_WTTF 3707
#define F_PG_SIZE_PRETTY 2288
#define F_ARRAY_GE 396
#define PF_AX25 3
#define F_TS_RANK_TT 3706
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __SIZEOF_PTRDIFF_T__ 8
#define AF_BRIDGE PF_BRIDGE
#define PG_GETARG_ANY_ARRAY_P(n) DatumGetAnyArrayP(PG_GETARG_DATUM(n))
#define BGW_NEVER_RESTART -1
#define F_RI_FKEY_SETDEFAULT_UPD 1653
#define EXTENSIBLE_H 
#define _BITS_FLOATN_H 
#define F_INT24DIV 172
#define F_BPCHARLT 1049
#define IndexRelationGetNumberOfKeyAttributes(relation) ((relation)->rd_index->indnkeyatts)
#define F_REGDICTIONARYOUT 3772
#define BtreeVacuumLock (&MainLWLockArray[20].lock)
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _IONBF 2
#define F_PATH_N_LE 985
#define F_INTERVAL_RELTIME 1194
#define F_BPCHAR_PATTERN_GE 2177
#define F_BITNE 1582
#define F_PATH_N_LT 982
#define _SYS_UCONTEXT_H 1
#define FIELDNO_EXPRCONTEXT_OUTERTUPLE 3
#define F_BPCHAR_PATTERN_GT 2178
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define AGGSPLITOP_SERIALIZE 0x04
#define RelationRelation_Rowtype_Id 83
#define F_GTSVECTORIN 3646
#define F_CHARIN 1245
#define SO_DETACH_BPF SO_DETACH_FILTER
#define NameGetDatum(X) CStringGetDatum(NameStr(*(X)))
#define toascii(c) __toascii (c)
#define NL_TEXTMAX INT_MAX
#define PG_MAGIC_FUNCTION_NAME_STRING "Pg_magic_func"
#define ERRCODE_S_R_E_FUNCTION_EXECUTED_NO_RETURN_STATEMENT MAKE_SQLSTATE('2','F','0','0','5')
#define MACADDR8OID 774
#define edge_tuple_end_id Anum_ag_label_edge_table_end_id - 1
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define PF_NETLINK 16
#define __UINT16_C(c) c
#define F_INT4UP 1912
#define F_PG_RELATION_IS_UPDATABLE 3842
#define F_FLOAT4LARGER 209
#define F_GIST_CIRCLE_CONSISTENT 2591
#define F_TSVECTOR_CMP 3622
#define MaxLockTupleMode LockTupleExclusive
#define InvalidLocalTransactionId 0
#define F_INET_GIST_COMPRESS 3555
#define HAVE_LIBSELINUX 1
#define IP_MULTICAST_LOOP 34
#define F_PG_STAT_GET_CHECKPOINT_WRITE_TIME 3160
#define NI_NAMEREQD 8
#define HeapTupleHeaderGetUpdateXid(tup) ( (!((tup)->t_infomask & HEAP_XMAX_INVALID) && ((tup)->t_infomask & HEAP_XMAX_IS_MULTI) && !((tup)->t_infomask & HEAP_XMAX_LOCK_ONLY)) ? HeapTupleGetUpdateXid(tup) : HeapTupleHeaderGetRawXmax(tup) )
#define _POSIX2_RE_DUP_MAX 255
#define F_BITCAT 1679
#define si_syscall _sifields._sigsys._syscall
#define F_JSONB_ARRAY_ELEMENTS_TEXT 3465
#define TIMETZOID 1266
#define SOL_X25 262
#define F_INT82PL 837
#define AF_CAN PF_CAN
#define HeapTupleGetOid(tuple) HeapTupleHeaderGetOid((tuple)->t_data)
#define O_WRONLY 01
#define __gnu_linux__ 1
#define F_CURRENT_SCHEMA 1402
#define O_EXCL 0200
#define F_BYTEASETBIT 724
#define _ENDIAN_H 1
#define SPIN_DELAY() ((void) 0)
#define AGTYPE_CONTAINER_IS_BINARY(agtc) (((agtc)->header & AGT_FBINARY) != 0)
#define INT_FAST16_MAX (9223372036854775807L)
#define F_JSONB_EACH 3208
#define EOHPGetRODatum(eohptr) PointerGetDatum((eohptr)->eoh_ro_ptr)
#define _BITS_SIGNUM_ARCH_H 1
#define SOL_IP 0
#define IPPROTO_PUP IPPROTO_PUP
#define ERRCODE_INVALID_BINARY_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','3')
#define F_PG_GET_RULEDEF 1573
#define F_PG_GET_USERBYID 1642
#define ACL_TRUNCATE (1<<4)
#define Anum_pg_class_reloptions 32
#define F_JSON_OUT 322
#define list_make2_int(x1,x2) lcons_int(x1, list_make1_int(x2))
#define ENOTSOCK 88
#define F_MD5_TEXT 2311
#define OFF_H 
#define ALLOCSET_SMALL_SIZES ALLOCSET_SMALL_MINSIZE, ALLOCSET_SMALL_INITSIZE, ALLOCSET_SMALL_MAXSIZE
#define PG_O_DIRECT O_DIRECT
#define F_HAS_SERVER_PRIVILEGE_NAME_ID 3007
#define MINIMAL_TUPLE_DATA_OFFSET offsetof(MinimalTupleData, t_infomask2)
#define Anum_pg_type_typisdefined 9
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define F_VARBIT_RECV 2458
#define AmBackgroundWriterProcess() (MyAuxProcType == BgWriterProcess)
#define TableOidAttributeNumber (-7)
#define F_JSONB_OBJECT_TWO_ARG 3264
#define F_TSQUERY_NE 3665
#define F_TIMESTAMP_NE_TIMESTAMPTZ 2525
#define __UQUAD_TYPE unsigned long int
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define PG_GETARG_POINTER(n) DatumGetPointer(PG_GETARG_DATUM(n))
#define F_FLOAT4GE 292
#define DatumIsReadWriteExpandedObject(d,isnull,typlen) (((isnull) || (typlen) != -1) ? false : VARATT_IS_EXTERNAL_EXPANDED_RW(DatumGetPointer(d)))
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define F_FLOAT4GT 291
#define F_BTTINTERVALCMP 381
#define islower(c) __isctype((c), _ISlower)
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define WARNING 19
#define ENOSR 63
#define st_mtime st_mtim.tv_sec
#define __USE_ISOC11 1
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define F_INT48EQ 852
#define F_TSQUERY_OR 3670
#define F_PATH_AREA 979
#define __FLT16_MIN_EXP__ (-13)
#define F_FLOAT8_CORR 2817
#define ERRCODE_FDW_NO_SCHEMAS MAKE_SQLSTATE('H','V','0','0','P')
#define Anum_pg_type_typowner 3
#define PGSIXBIT(ch) (((ch) - '0') & 0x3F)
#define __stub___compat_bdflush 
#define _BITS_STRING_FORTIFIED_H 1
#define F_NUMERIC_SUM 3178
#define __FLT64_MANT_DIG__ 53
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define F_NUMERIC_TRANSFORM 3157
#define F_POSTGRESQL_FDW_VALIDATOR 2316
#define IPPROTO_IDP IPPROTO_IDP
#define F_RANGE_TYPANALYZE 3916
#define F_GENERATE_SERIES_STEP_NUMERIC 3259
#define F_SHOW_CONFIG_BY_NAME_MISSING_OK 3294
#define F_PG_DDL_COMMAND_OUT 87
#define SK_ISNULL 0x0001
#define F_PG_GET_STATISTICSOBJDEF 3415
#define PG_GETARG_ARRAYTYPE_P(n) DatumGetArrayTypeP(PG_GETARG_DATUM(n))
#define F_BYTEAOCTETLEN 720
#define HAVE_APPEND_HISTORY 1
#define __FLT64X_MANT_DIG__ 113
#define F_SETLEASE 1024
#define RelationGetDescr(relation) ((relation)->rd_att)
#define IPPROTO_IPIP IPPROTO_IPIP
#define F_PG_GET_VIEWDEF_EXT 2506
#define F_SPG_KD_CHOOSE 4024
#define AG_EDGE_ACCESS_FUNCTION_PROPERTIES "age_properties"
#define F_JSONB_OBJECT_AGG_TRANSFN 3268
#define F_INT2INT4_SUM 3572
#define ELIBACC 79
#define F_RANGE_CONTAINED_BY 3861
#define PARTITION_MAX_KEYS 32
#define _T_PTRDIFF 
#define pg_noinline __attribute__((noinline))
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define ACL_CREATE_TEMP_CHR 'T'
#define MaxBlockNumber ((BlockNumber) 0xFFFFFFFE)
#define att_addlength_pointer(cur_offset,attlen,attptr) ( ((attlen) > 0) ? ( (cur_offset) + (attlen) ) : (((attlen) == -1) ? ( (cur_offset) + VARSIZE_ANY(attptr) ) : ( AssertMacro((attlen) == -2), (cur_offset) + (strlen((char *) (attptr)) + 1) )) )
#define PROCLIST_TYPES_H 
#define __glibc_has_extension(ext) 0
#define F_ANY_IN 2294
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define SECURITY_NOFORCE_RLS 0x0004
#define F_UUID_LE 2955
#define IPV6_2292PKTOPTIONS 6
#define PAI_IS_HEAP (1 << 1)
#define pg_attribute_noreturn() __attribute__((noreturn))
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define HAVE_UTIMES 1
#define F_FLOAT8SEND 2427
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define _LFS64_STDIO 1
#define L_ctermid 9
#define F_NUMERICTYPMODIN 2917
#define PG_GETARG_CHAR(n) DatumGetChar(PG_GETARG_DATUM(n))
#define INSTR_TIME_GET_DOUBLE(t) (((double) (t).tv_sec) + ((double) (t).tv_nsec) / 1000000000.0)
#define PG_BINARY_A "a"
#define F_TS_MATCH_TQ 3761
#define FRAMEOPTION_START_OFFSET (FRAMEOPTION_START_OFFSET_PRECEDING | FRAMEOPTION_START_OFFSET_FOLLOWING)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define F_FLOAT4LT 289
#define ACL_CONNECT_CHR 'c'
#define F_BYTEATRIM 2015
#define pg_attribute_no_sanitize_alignment() __attribute__((no_sanitize("alignment")))
#define F_ROW_SECURITY_ACTIVE_NAME 3299
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define PG_HAVE_ATOMIC_WRITE_U32 
#define InvalidBuffer 0
#define InstrCountTuples2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->ntuples2 += (delta); } while (0)
#define PG_GETARG_TEXT_P_SLICE(n,a,b) DatumGetTextPSlice(PG_GETARG_DATUM(n),a,b)
#define F_FLOAT84DIV 284
#define F_FLOAT4MUL 202
#define F_INT82MI 838
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_ID_NAME 3002
#define F_JSONB_NE 4038
#define _SC_ARG_MAX _SC_ARG_MAX
#define isupper(c) __isctype((c), _ISupper)
#define planner_rt_fetch(rti,root) ((root)->simple_rte_array ? (root)->simple_rte_array[rti] : rt_fetch(rti, (root)->parse->rtable))
#define F_TO_REGPROC 3494
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define INT4RANGEARRAYOID 3905
#define S_IWUSR __S_IWRITE
#define F_TIMESTAMPTZ_SCALE 1967
#define ag_label_relation_id() ag_relation_id("ag_label", "table")
#define F_NETWORK_OVERLAP 3551
#define F_VARBITTYPMODIN 2902
#define IsParallelWorker() (ParallelWorkerNumber >= 0)
#define TYPECACHE_LT_OPR 0x0002
#define F_DATE_RECV 2468
#define QTW_IGNORE_RC_SUBQUERIES 0x03
#define F_FLOAT4NE 288
#define FRAMEOPTION_START_OFFSET_PRECEDING 0x00800
#define HAVE_SNPRINTF 1
#define SEEK_CUR 1
#define ELNRNG 48
#define EAI_FAIL -4
#define AF_ROUTE PF_ROUTE
#define F_INT4MI 181
#define F_REGPROCEDURESEND 2447
#define CYPHER_TARGET_NODE_IN_PATH(flags) (flags & CYPHER_TARGET_NODE_IN_PATH_VAR)
#define F_NUMERIC_RECV 2460
#define LABEL_ID_MIN 1
#define F_PG_STAT_GET_SUBSCRIPTION 6118
#define PageIsNew(page) (((PageHeader) (page))->pd_upper == 0)
#define ERRCODE_SEQUENCE_GENERATOR_LIMIT_EXCEEDED MAKE_SQLSTATE('2','2','0','0','H')
#define OidFunctionCall5(functionId,arg1,arg2,arg3,arg4,arg5) OidFunctionCall5Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define __ONCE_ALIGNMENT 
#define RTSubEqualStrategyNumber 25
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define __SI_ALIGNMENT 
#define Anum_pg_index_indisvalid 10
#define F_PG_STAT_GET_DB_CONFLICT_TABLESPACE 3065
#define PG_HAVE_ATOMIC_EXCHANGE_U32 
#define PageIsFull(page) (((PageHeader) (page))->pd_flags & PD_PAGE_FULL)
#define NI_MAXHOST 1025
#define RelationIsSecurityView(relation) ((relation)->rd_options ? ((ViewOptions *) (relation)->rd_options)->security_barrier : false)
#define CHAR_MIN 0
#define TSTZRANGEOID 3910
#define __USE_ISOC95 1
#define HAVE_UTIME 1
#define F_INT84NE 475
#define F_LSEG_CONSTRUCT 993
#define F_TIME_MI_INTERVAL 1748
#define make_ag_node(type) ((type *)new_ag_node(sizeof(type), CppConcat(type, _t)))
#define O_FSYNC O_SYNC
#define ERRCODE_INVALID_ESCAPE_OCTET MAKE_SQLSTATE('2','2','0','0','D')
#define F_FLOAT4PL 204
#define _POSIX_SEM_NSEMS_MAX 256
#define __UINT16_TYPE__ short unsigned int
#define F_BTINT4CMP 351
#define MSG_DONTROUTE MSG_DONTROUTE
#define OidFunctionCall9(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) OidFunctionCall9Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define HAVE_WORKING_LINK 1
#define relpathperm(rnode,forknum) relpathbackend(rnode, InvalidBackendId, forknum)
#define __FLT16_MAX_10_EXP__ 4
#define S_IFLNK __S_IFLNK
#define HAVE__BUILTIN_OP_OVERFLOW 1
#define F_LSEG_PARALLEL 995
#define F_TIMESTAMPTZ_ZONE 1159
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define F_PG_DATABASE_SIZE_NAME 2168
#define Int32GetDatum(X) ((Datum) (X))
#define F_DSIMPLE_INIT 3725
#define Anum_pg_attribute_attname 2
#define HAVE_FSEEKO 1
#define Anum_pg_attribute_attrelid 1
#define _STDIO_H 1
#define list_nth_node(type,list,n) castNode(type, list_nth(list, n))
#define ItemIdIsUsed(itemId) ((itemId)->lp_flags != LP_UNUSED)
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define FPE_FLTDIV FPE_FLTDIV
#define C_H 
#define F_SETVAL3_OID 1765
#define F_TIME_RECV 2470
#define LOCK_LOCKMETHOD(lock) ((LOCKMETHODID) (lock).tag.locktag_lockmethodid)
#define F_OIDNE 185
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define FLOAT4OID 700
#define REGBUF_KEEP_DATA 0x10
#define LINEARRAYOID 629
#define F_UNKNOWNSEND 2417
#define llast_oid(l) lfirst_oid(list_tail(l))
#define F_CIRCLE_OVERBELOW 2587
#define _BITS_STDINT_UINTN_H 1
#define HeapTupleHeaderSetHeapOnly(tup) ( (tup)->t_infomask2 |= HEAP_ONLY_TUPLE )
#define F_RANGE_BEFORE 3863
#define F_NUMERIC_SUB 1725
#define ERRCODE_AMBIGUOUS_PARAMETER MAKE_SQLSTATE('4','2','P','0','8')
#define F_BITOCTETLENGTH 1682
#define F_CURRTID_BYRELOID 1293
#define __DBL_HAS_INFINITY__ 1
#define dummyret void
#define PG_HAVE_ATOMIC_EXCHANGE_U64 
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define F_JSONB_ARRAY_ELEMENT_TEXT 3216
#define IPV6_PMTUDISC_OMIT 5
#define MOD_TAI ADJ_TAI
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define _POSIX_UIO_MAXIOV 16
#define Anum_ag_label_edge_table_start_id 2
#define get_pathtarget_sortgroupref(target,colno) ((target)->sortgrouprefs ? (target)->sortgrouprefs[colno] : (Index) 0)
#define F_PATH_DISTANCE 370
#define F_LIKESEL 1819
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define __F_GETOWN 9
#define Anum_pg_class_reltoastrelid 12
#define F_POINT_MUL 1443
#define MSG_FASTOPEN MSG_FASTOPEN
#define F_ARRAYCONTSEL 3817
#define PF_NETROM 6
#define LABEL_TYPE_VERTEX 'v'
#define __USE_XOPEN 1
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define isspace(c) __isctype((c), _ISspace)
#define stdin stdin
#define RelationIsAccessibleInLogicalDecoding(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && (IsCatalogRelation(relation) || RelationIsUsedAsCatalogTable(relation)))
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define F_INT84MUL 1276
#define REPLICA_IDENTITY_DEFAULT 'd'
#define _POSIX_TIMER_MAX 32
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define F_TSQUERYRECV 3641
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define F_POLY_SEND 2487
#define ERRCODE_INVALID_TABLESAMPLE_ARGUMENT MAKE_SQLSTATE('2','2','0','2','H')
#define HAVE_INT_TIMEZONE 1
#define HAVE_STRNLEN 1
#define F_JSONB_POPULATE_RECORD 3209
#define PROC_IN_VACUUM 0x02
#define F_NUMERIC_SQRT 1730
#define F_TIMESTAMP_TIME 1316
#define F_DACOSD 2732
#define F_FLOAT4UM 206
#define F_FLOAT4UP 1913
#define F_BOX_BELOW 2562
#define F_WINDOW_LEAD_WITH_OFFSET 3110
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define IPV6_ORIGDSTADDR 74
#define F_INTERNAL_IN 2304
#define F_GIN_TSQUERY_CONSISTENT_OLDSIG 3792
#define GetSysCacheHashValue1(cacheId,key1) GetSysCacheHashValue(cacheId, key1, 0, 0, 0)
#define GetSysCacheHashValue2(cacheId,key1,key2) GetSysCacheHashValue(cacheId, key1, key2, 0, 0)
#define HAVE_TM_ZONE 1
#define NAMEARRAYOID 1003
#define VARTAG_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_tag)
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define StaticAssertStmt(condition,errmessage) do { _Static_assert(condition, errmessage); } while(0)
#define _ISOC11_SOURCE 1
#define pg_write_barrier() pg_write_barrier_impl()
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define InvalidRelation ((Relation) NULL)
#define F_PG_SEQUENCE_PARAMETERS 3078
#define F_RANGE_GIST_PICKSPLIT 3880
#define F_BOOLOR_STATEFUNC 2516
#define pg_memory_barrier() pg_memory_barrier_impl()
#define PG_RETURN_FLOAT4(x) return Float4GetDatum(x)
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IPPROTO_IPV6 IPPROTO_IPV6
#define F_PG_REPLICATION_ORIGIN_SESSION_SETUP 6006
#define F_HAS_DATABASE_PRIVILEGE_NAME_ID 2251
#define F_RELTIMELE 261
#define Trap(condition,errorType) ((void)true)
#define F_REPLACE_TEXT 2087
#define F_ENUM_GT 3511
#define F_PG_READ_FILE_V2 3293
#define be32toh(x) __bswap_32 (x)
#define PVC_INCLUDE_WINDOWFUNCS 0x0004
#define PGUNSIXBIT(val) (((val) & 0x3F) + '0')
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define IPPROTO_SCTP IPPROTO_SCTP
#define RelationGetPartitionDesc(relation) ((relation)->rd_partdesc)
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define F_NETWORK_NETMASK 696
#define AF_ECONET PF_ECONET
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define ag_label_relation_index_id() ag_relation_id("ag_label_relation_index", "index")
#define PGPROC_MAX_CACHED_SUBXIDS 64
#define EXPLAIN_H 
#define NI_IDN 32
#define F_PATH_INTER 973
#define ScanTupleHashTable(htable,iter) tuplehash_iterate(htable->hashtab, iter)
#define _SIZE_T_DEFINED 
#define SearchSysCacheCopy2(cacheId,key1,key2) SearchSysCacheCopy(cacheId, key1, key2, 0, 0)
#define SearchSysCacheCopy4(cacheId,key1,key2,key3,key4) SearchSysCacheCopy(cacheId, key1, key2, key3, key4)
#define SearchSysCacheList2(cacheId,key1,key2) SearchSysCacheList(cacheId, 2, key1, key2, 0)
#define SearchSysCacheList3(cacheId,key1,key2,key3) SearchSysCacheList(cacheId, 3, key1, key2, key3)
#define F_FLOAT48NE 300
#define SECURITY_LOCAL_USERID_CHANGE 0x0001
#define ERRCODE_BAD_COPY_FILE_FORMAT MAKE_SQLSTATE('2','2','P','0','4')
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define list_make1_int(x1) lcons_int(x1, NIL)
#define RelationGetNamespace(relation) ((relation)->rd_rel->relnamespace)
#define F_MACADDR_AND 3145
#define lsecond_node(type,l) castNode(type, lsecond(l))
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define F_TSVECTOR_SETWEIGHT_BY_FILTER 3320
#define _WCHAR_T_DEFINED_ 
#define F_TEXTCAT 1258
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define isalpha(c) __isctype((c), _ISalpha)
#define _POSIX_NO_TRUNC 1
#define ECHILD 10
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define F_ARRAY_FILL 1193
#define BufferIsInvalid(buffer) ((buffer) == InvalidBuffer)
#define _POSIX_REGEXP 1
#define UINT_LEAST8_MAX (255)
#define START_CRIT_SECTION() (CritSectionCount++)
#define F_PG_REPLICATION_ORIGIN_CREATE 6003
#define F_PG_LS_LOGDIR 3353
#define HAVE_LINUX_EIDRM_BUG 
#define _BITS_POSIX2_LIM_H 1
#define END_TIMESTAMP INT64CONST(9223371331200000000)
#define F_TINTERVALNE 785
#define ERRCODE_WARNING_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','1','0','0','C')
#define LC_NAME_MASK (1 << __LC_NAME)
#define F_RANGE_GT 3874
#define F_INT82DIV 840
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define SK_ROW_END 0x0010
#define FirstNormalObjectId 16384
#define CheckpointerCommLock (&MainLWLockArray[17].lock)
#define __stub_setlogin 
#define PG_GETARG_HEAPTUPLEHEADER(n) DatumGetHeapTupleHeader(PG_GETARG_DATUM(n))
#define HEAP_INSERT_SKIP_FSM 0x0002
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define F_GENERATE_SERIES_TIMESTAMP 938
#define LC_MESSAGES __LC_MESSAGES
#define F_PG_BACKEND_PID 2026
#define PF_MCTP 45
#define ACLITEM_GET_RIGHTS(item) ((item).ai_privs)
#define INSTR_TIME_H 
#define F_TS_HEADLINE_JSON_OPT 4207
#define Anum_pg_class_relhasrules 20
#define F_BYTEAOVERLAY 749
#define FIELDNO_EXPRCONTEXT_CASEDATUM 10
#define F_NETWORK_SUB 927
#define MemSetTest(val,len) ( ((len) & LONG_ALIGN_MASK) == 0 && (len) <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0 && (val) == 0 )
#define _POSIX_MEMORY_PROTECTION 200809L
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME_ID 3001
#define F_INT2PL 176
#define Natts_pg_attribute 24
#define PG_TYPE_D_H 
#define F_PG_STAT_GET_DB_TEMP_BYTES 3151
#define F_RELTIMEEQ 257
#define MAX_TZDISP_HOUR 15
#define F_CIRCLE_POLY 1475
#define HeapTupleHeaderSetCmax(tup,cid,iscombo) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); if (iscombo) (tup)->t_infomask |= HEAP_COMBOCID; else (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define F_CIDIN 52
#define F_INTERVAL_GT 1167
#define true 1
#define SA_RESETHAND 0x80000000
#define BKI_LOOKUP(catalog) 
#define ERRCODE_WARNING_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('0','1','0','0','4')
#define AGE_VARNAME_ID AGE_DEFAULT_VARNAME_PREFIX"id"
#define EAI_SOCKTYPE -7
#define __S32_TYPE int
#define IS_OUTER_JOIN(jointype) (((1 << (jointype)) & ((1 << JOIN_LEFT) | (1 << JOIN_FULL) | (1 << JOIN_RIGHT) | (1 << JOIN_ANTI))) != 0)
#define label_id_is_valid(id) (id >= LABEL_ID_MIN && id <= LABEL_ID_MAX)
#define IP_PKTOPTIONS 9
#define CYPHER_CLAUSE_FLAG_PREVIOUS_CLAUSE 0x0002
#define F_PG_READ_FILE_OFF_LEN 2624
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define PG_DETOAST_DATUM(datum) pg_detoast_datum((struct varlena *) DatumGetPointer(datum))
#define _SC_2_C_BIND _SC_2_C_BIND
#define F_PG_SWITCH_WAL 2848
#define F_XMLCONCAT2 2900
#define ERRCODE_DUPLICATE_PSTATEMENT MAKE_SQLSTATE('4','2','P','0','5')
#define F_SETFD 2
#define F_FLOAT8ABS 221
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __FLT64_MIN_10_EXP__ (-307)
#define ERRCODE_FDW_TOO_MANY_HANDLES MAKE_SQLSTATE('H','V','0','1','4')
#define VARATT_IS_COMPRESSED(PTR) VARATT_IS_4B_C(PTR)
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define REGNAMESPACEARRAYOID 4090
#define F_IN_RANGE_INT2_INT2 4132
#define HEAP_HASOID 0x0008
#define F_INT24LT 160
#define ACL_SELECT_CHR 'r'
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define F_PG_GET_VIEWDEF_WRAP 3159
#define __toascii_l(c,l) ((l), __toascii (c))
#define F_RELTIMEGT 260
#define F_PG_CONVERT_FROM 1714
#define _POSIX_DELAYTIMER_MAX 32
#define PVC_INCLUDE_AGGREGATES 0x0001
#define CHECKPOINT_FORCE 0x0008
#define F_DATE_LE_TIMESTAMPTZ 2352
#define F_JSONB_EQ 4043
#define F_INET_IN 910
#define ENTRY_ID_MAX INT64CONST(281474976710655)
#define AGGSPLITOP_COMBINE 0x01
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define _LIBINTL_H 1
#define F_INET_GIST_UNION 3554
#define PageClearAllVisible(page) (((PageHeader) (page))->pd_flags &= ~PD_ALL_VISIBLE)
#define F_IN_RANGE_INT2_INT4 4131
#define F_TIMESTAMP_ZONE 2069
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define F_GET_FILE_RW_HINT 1037
#define F_JSONB_EXISTS 4047
#define __HAVE_FLOAT16 0
#define IPV6_ADDRFORM 1
#define HeapTupleHeaderSetXvac(tup,xid) do { Assert((tup)->t_infomask & HEAP_MOVED); (tup)->t_choice.t_heap.t_field3.t_xvac = (xid); } while (0)
#define EREMOTE 66
#define dlist_reverse_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->prev ? (iter).end->prev : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->prev)
#define ERRCODE_STRING_DATA_LENGTH_MISMATCH MAKE_SQLSTATE('2','2','0','2','6')
#define F_ANYRANGE_IN 3832
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define F_INT2_SUM 1840
#define F_FLOAT8GT 297
#define UINT_LEAST16_WIDTH 16
#define __FLT128_MAX_EXP__ 16384
#define F_RELTIMEIN 242
#define F_PG_IS_IN_BACKUP 3813
#define SIZEOF_DATUM SIZEOF_VOID_P
#define VARTAG_SIZE(tag) ((tag) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : VARTAG_IS_EXPANDED(tag) ? sizeof(varatt_expanded) : (tag) == VARTAG_ONDISK ? sizeof(varatt_external) : TrapMacro(true, "unrecognized TOAST vartag"))
#define BUS_OBJERR BUS_OBJERR
#define F_JSONB_GT 4040
#define F_PG_STAT_GET_LAST_AUTOANALYZE_TIME 2784
#define ERRCODE_SQL_ROUTINE_EXCEPTION MAKE_SQLSTATE('2','F','0','0','0')
#define INT_WIDTH 32
#define IPPROTO_RSVP IPPROTO_RSVP
#define PG_GETARG_BYTEA_P_COPY(n) DatumGetByteaPCopy(PG_GETARG_DATUM(n))
#define SEGV_MAPERR SEGV_MAPERR
#define HAVE_HISTORY_TRUNCATE_FILE 1
#define SO_BINDTODEVICE 25
#define F_BE_LO_GET 3458
#define __F_SETSIG 10
#define F_SETFL 4
#define F_ADD_SEALS 1033
#define F_INTERVAL_COMBINE 3325
#define _PTRDIFF_T_DECLARED 
#define F_PRSD_NEXTTOKEN 3718
#define F_RI_FKEY_CASCADE_UPD 1647
#define _BITS_STDIO_H 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define IP_PMTUDISC_PROBE 3
#define __glibc_objsize(__o) __bos (__o)
#define pg_hton32(x) pg_bswap32(x)
#define DatumBigEndianToNative(x) pg_bswap64(x)
#define FRAMEOPTION_END_OFFSET_FOLLOWING 0x04000
#define CYPHER_TARGET_NODE_INSERT_ENTITY(flags) (flags & CYPHER_TARGET_NODE_FLAG_INSERT)
#define F_DASIND 2731
#define F_CIRCLE_RIGHT 1457
#define AGE_VARNAME_DELETE_CLAUSE AGE_DEFAULT_VARNAME_PREFIX"delete_clause"
#define F_JSONB_IN 3806
#define dsa_pointer_atomic_write pg_atomic_write_u64
#define F_CLOCK_TIMESTAMP 2649
#define Anum_pg_index_indclass 17
#define ESRMNT 69
#define STA_PLL 0x0001
#define F_INTERVALTYPMODOUT 2904
#define F_TIMESTAMPTZ_GE_DATE 2381
#define ERRCODE_E_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('3','8','0','0','3')
#define F_HAS_TYPE_PRIVILEGE_NAME 3142
#define F_ENUM_RANGE_BOUNDS 3530
#define __FLT32_HAS_QUIET_NAN__ 1
#define ag_label_seq_name_graph_index_id() ag_relation_id("ag_label_seq_name_graph_index", "index")
#define MCAST_EXCLUDE 0
#define F_TS_HEADLINE_JSONB_BYID 4202
#define COLL_WEIGHTS_MAX 255
#define F_DATE_GT_TIMESTAMP 2341
#define IPPROTO_AH IPPROTO_AH
#define DatumGetBpCharPP(X) ((BpChar *) PG_DETOAST_DATUM_PACKED(X))
#define F_INT8_NUMERIC 1781
#define F_RI_FKEY_SETDEFAULT_DEL 1652
#define TrapMacro(condition,errorType) (true)
#define TTY_NAME_MAX 32
#define RelationMappingLock (&MainLWLockArray[25].lock)
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define Int64GetDatum(X) ((Datum) (X))
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define isalnum(c) __isctype((c), _ISalnum)
#define __HAVE_FLOAT64 1
#define F_BOX_OVERABOVE 2564
#define CommitTsLock (&MainLWLockArray[39].lock)
#define Anum_pg_publication_puballtables 3
#define CYPHER_TARGET_NODE_OUTPUT(flags) (flags & (CYPHER_TARGET_NODE_IS_VAR | CYPHER_TARGET_NODE_IN_PATH_VAR))
#define INSTR_TIME_GET_MICROSEC(t) (((uint64) (t).tv_sec * (uint64) 1000000) + (uint64) ((t).tv_nsec / 1000))
#define HeapTupleHasExternal(tuple) (((tuple)->t_data->t_infomask & HEAP_HASEXTERNAL) != 0)
#define NO_RECOVERY 3
#define F_RELTIMENE 258
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define F_HASHMACADDREXTENDED 778
#define F_HAS_SERVER_PRIVILEGE_NAME_NAME 3006
#define ItemIdIsDead(itemId) ((itemId)->lp_flags == LP_DEAD)
#define F_DEXP 233
#define ERRCODE_FDW_OPTION_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','J')
#define BITMAPSET_H 
#define PG_DIAG_COLUMN_NAME 'c'
#define __FLT64X_MIN_EXP__ (-16381)
#define F_JSONB_LT 4039
#define F_TIMESTAMP_EQ_TIMESTAMPTZ 2522
#define SIZE_MAX (18446744073709551615UL)
#define TransactionIdRetreat(dest) do { (dest)--; } while ((dest) < FirstNormalTransactionId)
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define _PTRDIFF_T 
#define INETOID 869
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define MSG_WAITFORONE MSG_WAITFORONE
#define F_NUMERIC_VAR_POP 2514
#define F_JSONB_AGG_FINALFN 3266
#define PF_UNSPEC 0
#define F_JSON_POPULATE_RECORD 3960
#define UINT64_C(c) c ## UL
#define BKI_FORCE_NOT_NULL 
#define BoolGetDatum(X) ((Datum) ((X) ? 1 : 0))
#define __LDBL_MIN_10_EXP__ (-4931)
#define RTOverlapStrategyNumber 3
#define F_JSON_ARRAY_ELEMENT_TEXT 3950
#define DATE_END_JULIAN (2147483494)
#define DEFAULT_BACKEND_FLUSH_AFTER 0
#define NotifyQueueTailLock (&MainLWLockArray[47].lock)
#define USE_FLOAT8_BYVAL 1
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define F_CIRCLE_OVERLAP 1459
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define PD_ALL_VISIBLE 0x0004
#define F_TS_PARSE_BYNAME 3716
#define _GCC_WCHAR_T 
#define dngettext(domainname,msgid1,msgid2,n) dcngettext (domainname, msgid1, msgid2, n, LC_MESSAGES)
#define F_LSEG_NE 1482
#define HAVE_BIO_METH_NEW 1
#define F_PG_TRY_ADVISORY_LOCK_SHARED_INT8 2883
#define AGT_HEADER_INTEGER 0x00000000
#define ItemPointerSetOffsetNumber(pointer,offsetNumber) ( AssertMacro(PointerIsValid(pointer)), (pointer)->ip_posid = (offsetNumber) )
#define PF_X25 9
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define F_INT8DIV 466
#define QTW_EXAMINE_RTES 0x10
#define MACADDRARRAYOID 1040
#define SO_PASSSEC 34
#define SIOCATMARK 0x8905
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define F_BITTOINT8 2076
#define F_SETPIPE_SZ 1031
#define ItemIdIsNormal(itemId) ((itemId)->lp_flags == LP_NORMAL)
#define NETDB_INTERNAL -1
#define DSM_HANDLE_INVALID 0
#define __ARM_FP16_FORMAT_IEEE 1
#define si_uid _sifields._kill.si_uid
#define CHECKPOINT_CAUSE_TIME 0x0080
#define __WTERMSIG(status) ((status) & 0x7f)
#define ERRCODE_DATETIME_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','8')
#define ERRCODE_HELD_CURSOR_REQUIRES_SAME_ISOLATION_LEVEL MAKE_SQLSTATE('2','5','0','0','8')
#define PG_RETURN_POINTER(x) return PointerGetDatum(x)
#define _POSIX_THREAD_THREADS_MAX 64
#define _SC_PAGESIZE _SC_PAGESIZE
#define F_SPG_KD_INNER_CONSISTENT 4026
#define PG_GETARG_BPCHAR_PP(n) DatumGetBpCharPP(PG_GETARG_DATUM(n))
#define PG_FUNCNAME_MACRO __func__
#define F_PG_STAT_GET_WAL_RECEIVER 3317
#define UINT_LEAST16_MAX (65535)
#define F_PATH_OUT 122
#define StrNCpy(dst,src,len) do { char * _dst = (dst); Size _len = (len); if (_len > 0) { strncpy(_dst, (src), _len); _dst[_len-1] = '\0'; } } while (0)
#define RELKIND_VIEW 'v'
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define F_INT84GT 477
#define SIZEOF_VOID_P 8
#define F_HAS_SCHEMA_PRIVILEGE_NAME 2272
#define PF_BRIDGE 7
#define IP_PMTUDISC_DONT 0
#define RelationIsLogicallyLogged(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && !IsCatalogRelation(relation))
#define ReleaseTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) DecrTupleDescRefCount(tupdesc); } while (0)
#define F_REGEXP_SPLIT_TO_TABLE_NO_FLAGS 2765
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define DEST_H 
#define HAVE_FUNCNAME__FUNC 1
#define CATVERSION_H 
#define F_POINT_OUT 118
#define F_PG_TS_CONFIG_IS_VISIBLE 3758
#define ANYARRAYOID 2277
#define F_ACLITEMIN 1031
#define F_BRIN_MINMAX_ADD_VALUE 3384
#define _PC_LINK_MAX _PC_LINK_MAX
#define __useconds_t_defined 
#define AsyncCtlLock (&MainLWLockArray[26].lock)
#define F_BYTEAPOS 2014
#define F_INTERVAL_TO_CHAR 1768
#define DEFAULT_EVENT_SOURCE "PostgreSQL"
#define CURSOR_OPT_PARALLEL_OK 0x0100
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define F_PG_STAT_GET_AUTOANALYZE_COUNT 3057
#define INT8_MIN (-128)
#define _GCC_LIMITS_H_ 
#define ItemPointerSetMovedPartitions(pointer) ItemPointerSet((pointer), MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define AssertVariableIsOfTypeMacro(varname,typename) (StaticAssertExpr(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename)))
#define WNOHANG 1
#define ADJ_TAI 0x0080
#define MAX_INTERVAL_PRECISION 6
#define _XOPEN_SHM 1
#define DEF_PGPORT_STR "5432"
#define F_TS_HEADLINE_JSON 4208
#define PF_IPX 4
#define ItemIdSetUnused(itemId) ( (itemId)->lp_flags = LP_UNUSED, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define HOST_NOT_FOUND 1
#define F_CASH_DIV_FLT8 897
#define ACL_N_SIZE(N) (ARR_OVERHEAD_NONULLS(1) + ((N) * sizeof(AclItem)))
#define F_PG_STAT_GET_DB_XACT_ROLLBACK 1943
#define FRAMEOPTION_END_OFFSET (FRAMEOPTION_END_OFFSET_PRECEDING | FRAMEOPTION_END_OFFSET_FOLLOWING)
#define F_INT4_TO_CHAR 1773
#define F_PATH_ADD_PT 1436
#define SEGV_ACCERR SEGV_ACCERR
#define F_TIMESTAMP_LE_DATE 2365
#define __PTRDIFF_T 
#define F_TXID_CURRENT 2943
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define F_BIT_OR 1674
#define ERRCODE_UNDEFINED_TABLE MAKE_SQLSTATE('4','2','P','0','1')
#define ENOCSI 50
#define F_CIRCLE_CONTAIN 1453
#define F_BOOLEQ 60
#define _SC_WORD_BIT _SC_WORD_BIT
#define pg_attribute_unused() __attribute__((unused))
#define palloc0_array(type,count) ((type *) palloc0(sizeof(type) * (count)))
#define _POSIX_ADVISORY_INFO 200809L
#define F_TSVECTOR_LENGTH 3711
#define STA_PPSSIGNAL 0x0100
#define _POSIX_CLOCKRES_MIN 20000000
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define DatumGetVarCharPP(X) ((VarChar *) PG_DETOAST_DATUM_PACKED(X))
#define F_GETFL 3
#define LC_MEASUREMENT __LC_MEASUREMENT
#define F_LOCK 1
#define F_JSONB_CONTAINED 4050
#define F_CIRCLE_RECV 2490
#define _BITS_TYPES___LOCALE_T_H 1
#define F_TINTERVALOUT 247
#define HEAP_KEYS_UPDATED 0x2000
#define ShareRowExclusiveLock 6
#define F_REGOPERIN 2214
#define F_CIDR_SET_MASKLEN 635
#define PG_DIAG_DATATYPE_NAME 'd'
#define HEAP_MIN_FILLFACTOR 10
#define S_IRWXG (S_IRWXU >> 3)
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define F_OIDOUT 1799
#define F_REGEXP_MATCHES_NO_FLAGS 2763
#define F_BTINT82CMP 2193
#define EOH_HEADER_MAGIC (-1)
#define DSM_IMPL_H 
#define HAVE_STRINGS_H 1
#define InstrCountFiltered1(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered1 += (delta); } while(0)
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define BKPIMAGE_IS_COMPRESSED 0x02
#define F_TIMESTAMP_TRUNC 2020
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define FRAMEOPTION_GROUPS 0x00008
#define EADDRINUSE 98
#define _VA_LIST 
#define F_INTERVAL_MI 1170
#define F_INT84EQ 474
#define F_INT2DIV 153
#define IPPROTO_MH IPPROTO_MH
#define F_MACADDR_TRUNC 753
#define InstrCountFiltered2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered2 += (delta); } while(0)
#define F_TSQUERY_EQ 3664
#define IN_CLASSA_NSHIFT 24
#define TIMESTAMPTZARRAYOID 1185
#define PG_HAVE_ATOMIC_FLAG_SUPPORT 
#define HeapTupleHeaderSetCmin(tup,cid) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define HAVE_X509_GET_SIGNATURE_NID 1
#define CYPHER_CLAUSE_FLAG_TERMINAL 0x0001
#define AttrOffsetGetAttrNumber(attributeOffset) ((AttrNumber) (1 + (attributeOffset)))
#define ADJ_STATUS 0x0010
#define F_NUMERIC_POLY_VAR_SAMP 3391
#define JSONBOID 3802
#define F_RANGE_LOWER_INC 3851
#define CLOCK_REALTIME_ALARM 8
#define AG_VERTEX_ACCESS_FUNCTION_ID "age_id"
#define __O_PATH 010000000
#define F_INETNOT 2627
#define isxdigit(c) __isctype((c), _ISxdigit)
#define HAVE_STRTOLL 1
#define F_BRINHANDLER 335
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define F_TXID_VISIBLE_IN_SNAPSHOT 2948
#define F_CASH_MI 895
#define F_INT2MI 180
#define IndexTupleSize(itup) ((Size) ((itup)->t_info & INDEX_SIZE_MASK))
#define F_INT4_NUMERIC 1740
#define F_INT2_MUL_CASH 863
#define F_PG_GET_VIEWDEF_NAME 1640
#define StaticAssertExpr(condition,errmessage) ((void) ({ StaticAssertStmt(condition, errmessage); true; }))
#define __WCOREFLAG 0x80
#define F_PG_CURRENT_LOGFILE_1ARG 3801
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define F_RTRIM 876
#define F_NEXTVAL_OID 1574
#define F_NUMERIC_GT 1720
#define __O_DIRECTORY 040000
#define Anum_pg_attribute_attlen 5
#define SYNC_METHOD_OPEN_DSYNC 4
#define F_PG_SHOW_REPLICATION_ORIGIN_STATUS 6014
#define htobe32(x) __bswap_32 (x)
#define __S_ISUID 04000
#define F_UUID_NE 2959
#define F_NUMERIC_LARGER 1767
#define __isascii_l(c,l) ((l), __isascii (c))
#define ERRCODE_DUPLICATE_SCHEMA MAKE_SQLSTATE('4','2','P','0','6')
#define F_FLOAT48PL 281
#define F_FLOAT4LE 290
#define IPV6_MULTICAST_IF 17
#define F_DIST_PPATH 371
#define RM_MAX_ID (RM_NEXT_ID - 1)
#define INT8_WIDTH 8
#define F_PG_INDEX_HAS_PROPERTY 637
#define F_GINARRAYTRICONSISTENT 3920
#define __S_ISVTX 01000
#define F_HAS_TABLE_PRIVILEGE_ID_ID 1925
#define F_INT4_AVG_ACCUM_INV 3571
#define __restrict_arr __restrict
#define USE_FLOAT4_BYVAL 1
#define forboth(cell1,list1,cell2,list2) for ((cell1) = list_head(list1), (cell2) = list_head(list2); (cell1) != NULL && (cell2) != NULL; (cell1) = lnext(cell1), (cell2) = lnext(cell2))
#define TZNAME_GLOBAL tzname
#define ALLOCSET_SMALL_MAXSIZE (8 * 1024)
#define _POSIX_SYMLOOP_MAX 8
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define SET_VARSIZE_4B(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2))
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define SCHAR_WIDTH 8
#define PG_RETURN_DATUM(x) return (x)
#define __MODE_T_TYPE __U32_TYPE
#define F_SETLKW64 7
#define F_TIMETZTYPMODIN 2911
#define Anum_pg_index_indexprs 19
#define ERRCODE_EXTERNAL_ROUTINE_INVOCATION_EXCEPTION MAKE_SQLSTATE('3','9','0','0','0')
#define F_PG_STAT_GET_XACT_BLOCKS_FETCHED 3044
#define F_BITTOINT4 1684
#define SIGTRAP 5
#define Anum_ag_label_graph 2
#define DATEORDER_DMY 1
#define F_TIMESTAMPTZ_PL_INTERVAL 1189
#define __nonnull(params) __attribute_nonnull__ (params)
#define F_POLY_OVERLAP 346
#define CHAROID 18
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _BITS_STRUCT_STAT_H 1
#define DatumGetPointer(X) ((Pointer) (X))
#define ERRCODE_INVALID_XML_CONTENT MAKE_SQLSTATE('2','2','0','0','N')
#define HAVE_STRUCT_OPTION 1
#define F_HASH_ARRAY 626
#define F_NETWORK_NETWORK 683
#define __SI_BAND_TYPE long int
#define F_TO_ASCII_DEFAULT 1845
#define F_PG_HAS_ROLE_ID 2710
#define RTRightStrategyNumber 5
#define O_DSYNC __O_DSYNC
#define F_DATE_SMALLER 1139
#define WRITEBACK_MAX_PENDING_FLUSHES 256
#define F_SPG_TEXT_LEAF_CONSISTENT 4031
#define F_PG_STAT_GET_CHECKPOINT_SYNC_TIME 3161
#define F_TEXTREGEXREPLACE_NOOPT 2284
#define NL_ARGMAX _POSIX_ARG_MAX
#define INT_LEAST8_MAX (127)
#define F_BTBPCHAR_PATTERN_CMP 2180
#define __S_IFLNK 0120000
#define __aarch64__ 1
#define F_TS_TOKEN_TYPE_BYID 3713
#define CIDRARRAYOID 651
#define F_REGNAMESPACERECV 4087
#define F_GIN_EXTRACT_JSONB_PATH 3485
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define FALLOC_FL_PUNCH_HOLE 0x02
#define F_ICNLIKESEL 1815
#define __CFLOAT64X _Complex _Float64x
#define __CFLOAT32X _Complex _Float32x
#define FLOAT8_FITS_IN_INT32(num) ((num) >= (float8) PG_INT32_MIN && (num) < -((float8) PG_INT32_MIN))
#define AF_KCM PF_KCM
#define IPPROTO_TP IPPROTO_TP
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define F_PG_STAT_GET_BLOCKS_FETCHED 1934
#define ngettext(msgid1,msgid2,n) dngettext (NULL, msgid1, msgid2, n)
#define JULIAN_MAXMONTH (6)
#define SO_PROTOCOL 38
#define ERRCODE_INVALID_GRANTOR MAKE_SQLSTATE('0','L','0','0','0')
#define F_SPG_TEXT_CHOOSE 4028
#define ItemIdGetRedirect(itemId) ((itemId)->lp_off)
#define STATUS_FOUND (1)
#define si_pkey _sifields._sigfault._bounds._pkey
#define F_TIMESTAMP_HASH_EXTENDED 3411
#define XMLARRAYOID 143
#define __FLT64X_DECIMAL_DIG__ 36
#define F_FLOAT8_REGR_ACCUM 2806
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define IP_BIND_ADDRESS_NO_PORT 24
#define F_HAS_LANGUAGE_PRIVILEGE_NAME_ID 2263
#define F_NETWORK_LT 921
#define F_NETWORK_SHOW 730
#define Anum_pg_type_typmodout 19
#define F_PG_STOP_BACKUP 2173
#define F_MACADDR8TOMACADDR 4124
#define ERRCODE_WARNING_PRIVILEGE_NOT_GRANTED MAKE_SQLSTATE('0','1','0','0','7')
#define F_RANGE_UPPER_INF 3854
#define __DBL_HAS_DENORM__ 1
#define ACL_GRANT_OPTION_FOR(privs) (((AclMode) (privs) & 0xFFFF) << 16)
#define INT_LEAST32_MAX (2147483647)
#define _FALLOC_H_ 
#define STA_INS 0x0010
#define F_CIRCLE_CONTAINED 1458
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define MISCADMIN_H 
#define FPE_FLTSUB FPE_FLTSUB
#define PG_INT64_TYPE long int
#define F_HYPOTHETICAL_DENSE_RANK_FINAL 3993
#define INT_FAST16_WIDTH __WORDSIZE
#define F_MUL_D_INTERVAL 1624
#define F_BRIN_INCLUSION_OPCINFO 4105
#define F_REGDICTIONARYIN 3771
#define F_TIMESTAMPTZ_PART 1171
#define GRAPHIDARRAYOID get_GRAPHIDARRAYOID()
#define FLOAT8_FITS_IN_INT64(num) ((num) >= (float8) PG_INT64_MIN && (num) < -((float8) PG_INT64_MIN))
#define F_CIRCLE_BELOW 1460
#define FIELDNO_AGGSTATE_ALL_PERGROUPS 34
#define LOGIN_NAME_MAX 256
#define getrelid(rangeindex,rangetable) (rt_fetch(rangeindex, rangetable)->relid)
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define is_ag_node(node,type) _is_ag_node((Node *)(node), CppAsString(type))
#define CHAR_BIT __CHAR_BIT__
#define __attribute_pure__ __attribute__ ((__pure__))
#define SizeOfXLogRecordBlockCompressHeader sizeof(XLogRecordBlockCompressHeader)
#define F_BE_LOWRITE 955
#define F_UUID_LT 2954
#define EDEADLOCK EDEADLK
#define F_TSVECTORIN 3610
#define INTERVALOID 1186
#define F_INET_CLIENT_ADDR 2196
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define CLOG_H 
#define PG_VERSION_NUM 110018
#define F_NUMERIC_STDDEV_SAMP 1839
#define NUMERICARRAYOID 1231
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define ERRCODE_FDW_UNABLE_TO_ESTABLISH_CONNECTION MAKE_SQLSTATE('H','V','0','0','N')
#define F_PG_STAT_GET_DB_NUMBACKENDS 1941
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define F_ARRAY_GT 392
#define Anum_pg_index_indimmediate 8
#define F_TS_HEADLINE_JSON_BYID 4206
#define XLogRecGetTotalLen(decoder) ((decoder)->decoded_record->xl_tot_len)
#define HAVE_EDITLINE_READLINE_H 1
#define ERRCODE_SYNTAX_ERROR MAKE_SQLSTATE('4','2','6','0','1')
#define HeapTupleHeaderIsSpeculative(tup) ( (ItemPointerGetOffsetNumberNoCheck(&(tup)->t_ctid) == SpecTokenOffsetNumber) )
#define F_CLOSE_PL 961
#define FIELDNO_TUPLETABLESLOT_OFF 14
#define HAVE_SYS_RESOURCE_H 1
#define F_CIRCLE_SUB_PT 1147
#define AsyncQueueLock (&MainLWLockArray[27].lock)
#define dsa_pointer_atomic_fetch_add pg_atomic_fetch_add_u64
#define __FLT64X_IS_IEC_60559__ 2
#define F_TS_TOKEN_TYPE_BYNAME 3714
#define ERRCODE_IO_ERROR MAKE_SQLSTATE('5','8','0','3','0')
#define F_INT2RECV 2404
#define HAVE_RL_FILENAME_COMPLETION_FUNCTION 1
#define BGW_EXTRALEN 128
#define __ptr_t void *
#define F_PG_ADVISORY_UNLOCK_INT4 2890
#define SyncRepLock (&MainLWLockArray[32].lock)
#define CLOCK_BOOTTIME_ALARM 9
#define F_TEXT_GT 742
#define F_FLOAT48GT 303
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define F_TXID_SNAPSHOT_IN 2939
#define HAVE_IFADDRS_H 1
#define F_PG_TABLESPACE_SIZE_NAME 2323
#define IS_VALID_JULIAN(y,m,d) (((y) > JULIAN_MINYEAR || ((y) == JULIAN_MINYEAR && ((m) >= JULIAN_MINMONTH))) && ((y) < JULIAN_MAXYEAR || ((y) == JULIAN_MAXYEAR && ((m) < JULIAN_MAXMONTH))))
#define F_PG_CHAR_TO_ENCODING 1264
#define DatumGetVarCharP(X) ((VarChar *) PG_DETOAST_DATUM(X))
#define F_PG_CLIENT_ENCODING 810
#define AGTE_ADVANCE_OFFSET(offset,agte) do { agtentry agte_ = (agte); if (AGTE_HAS_OFF(agte_)) (offset) = AGTE_OFFLENFLD(agte_); else (offset) += AGTE_OFFLENFLD(agte_); } while (0)
#define PG_DIAG_MESSAGE_DETAIL 'D'
#define F_INTERVAL_HASH_EXTENDED 3418
#define F_TEXT_CONCAT_WS 3059
#define F_JSONB_ARRAY_ELEMENT 3215
#define F_PG_INDEXES_SIZE 2998
#define _SIZE_T 
#define F_TIMESTAMP_HASH 2039
#define MAX_CANON 255
#define HeapTupleHeaderGetXvac(tup) ( ((tup)->t_infomask & HEAP_MOVED) ? (tup)->t_choice.t_heap.t_field3.t_xvac : InvalidTransactionId )
#define __LDBL_DECIMAL_DIG__ 36
#define F_ROW_SECURITY_ACTIVE 3298
#define ALLOCSET_SMALL_MINSIZE 0
#define INT8RANGEARRAYOID 3927
#define INT_LEAST8_MIN (-128)
#define F_TIDGE 2792
#define ItemIdIsRedirected(itemId) ((itemId)->lp_flags == LP_REDIRECT)
#define FKCONSTR_ACTION_RESTRICT 'r'
#define F_BYTEASETBYTE 722
#define CYPHER_CLAUSE_HAS_PREVIOUS_CLAUSE(flags) (flags & CYPHER_CLAUSE_FLAG_PREVIOUS_CLAUSE)
#define SET_LOCKTAG_DATABASE_FROZEN_IDS(locktag,dboid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_DATABASE_FROZEN_IDS, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define ERRCODE_CONNECTION_EXCEPTION MAKE_SQLSTATE('0','8','0','0','0')
#define gettext_noop(x) (x)
#define PG_GETARG_TEXT_P(n) DatumGetTextP(PG_GETARG_DATUM(n))
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define JSONOID 114
#define __USE_GNU 1
#define F_HAS_SEQUENCE_PRIVILEGE_ID 2186
#define F_CURRENT_SCHEMAS 1403
#define MOD_OFFSET ADJ_OFFSET
#define _PTRDIFF_T_ 
#define HAVE_STDIO_H 1
#define F_DATABASE_TO_XMLSCHEMA 2937
#define SO_KEEPALIVE 9
#define F_GET_SEALS 1034
#define ACCEPT_TYPE_ARG1 int
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define DT_NOEND PG_INT64_MAX
#define HASH_ALLOC 0x0200
#define F_INT24PL 178
#define F_JSONB_AGG_TRANSFN 3265
#define ACL_NO_RIGHTS 0
#define F_BOX_LT 129
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define F_PG_TRY_ADVISORY_LOCK_INT4 2888
#define ERRCODE_BRANCH_TRANSACTION_ALREADY_ACTIVE MAKE_SQLSTATE('2','5','0','0','2')
#define TYPTYPE_BASE 'b'
#define F_PG_WAL_REPLAY_PAUSE 3071
#define F_MD5_BYTEA 2321
#define F_HASHOIDEXTENDED 445
#define F_PG_LISTENING_CHANNELS 3035
#define ADJ_OFFSET 0x0001
#define F_RANGE_UPPER_INC 3852
#define F_PATH_IN 121
#define F_BOX_RECV 2484
#define F_TSVECTOR_SETWEIGHT 3624
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define MEMSET_LOOP_LIMIT 1024
#define __GXX_ABI_VERSION 1016
#define F_MAKE_TIMESTAMPTZ_AT_TIMEZONE 3463
#define TYPECACHE_EQ_OPR_FINFO 0x0020
#define F_UNLCK 2
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define F_NETWORK_FAMILY 711
#define F_NUMERIC_ROUND 1707
#define F_FLOAT48LE 302
#define __USE_XOPEN2K8 1
#define closesocket close
#define F_RANGE_OVERLEFT 3865
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define F_BE_LO_TELL64 3171
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define ag_label_graph_id_index_id() ag_relation_id("ag_label_graph_id_index", "index")
#define F_FLOAT48LT 301
#define ScanDirectionIsBackward(direction) ((bool) ((direction) == BackwardScanDirection))
#define F_PG_HAS_ROLE_ID_ID 2708
#define PREDICATELOCK_MANAGER_LWLOCK_OFFSET (LOCK_MANAGER_LWLOCK_OFFSET + NUM_LOCK_PARTITIONS)
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define F_POINT_ADD 1441
#define islower_l(c,l) __islower_l ((c), (l))
#define ARR_NULLBITMAP(a) (ARR_HASNULL(a) ? (bits8 *) (((char *) (a)) + sizeof(ArrayType) + 2 * sizeof(int) * ARR_NDIM(a)) : (bits8 *) NULL)
#define edge_tuple_id Anum_ag_label_edge_table_id - 1
#define AARR_ELEMTYPE(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.element_type : ARR_ELEMTYPE((ArrayType *) (a)))
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define ACL_ALL_RIGHTS_SCHEMA (ACL_USAGE|ACL_CREATE)
#define ENETDOWN 100
#define F_PG_ADVISORY_UNLOCK_SHARED_INT4 2891
#define ERROR 20
#define RESUME_INTERRUPTS() do { Assert(InterruptHoldoffCount > 0); InterruptHoldoffCount--; } while(0)
#define F_HAS_SERVER_PRIVILEGE_NAME 3010
#define LINE_MAX _POSIX2_LINE_MAX
#define EREMOTEIO 121
#define __STRING(x) #x
#define BPCHAROID 1042
#define SO_OOBINLINE 10
#define REGBUF_NO_IMAGE 0x02
#define PANIC 22
#define AGGSPLITOP_DESERIALIZE 0x08
#define PF_WANPIPE 25
#define NI_NUMERICHOST 1
#define SIGVTALRM 26
#define EAI_ALLDONE -103
#define INSTR_TIME_SUBTRACT(x,y) do { (x).tv_sec -= (y).tv_sec; (x).tv_nsec -= (y).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } } while (0)
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define EXECPARTITION_H 
#define F_ARRAY_SMALLER 516
#define DirectFunctionCall1(func,arg1) DirectFunctionCall1Coll(func, InvalidOid, arg1)
#define DirectFunctionCall2(func,arg1,arg2) DirectFunctionCall2Coll(func, InvalidOid, arg1, arg2)
#define DirectFunctionCall3(func,arg1,arg2,arg3) DirectFunctionCall3Coll(func, InvalidOid, arg1, arg2, arg3)
#define DirectFunctionCall4(func,arg1,arg2,arg3,arg4) DirectFunctionCall4Coll(func, InvalidOid, arg1, arg2, arg3, arg4)
#define DirectFunctionCall5(func,arg1,arg2,arg3,arg4,arg5) DirectFunctionCall5Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define DirectFunctionCall6(func,arg1,arg2,arg3,arg4,arg5,arg6) DirectFunctionCall6Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define DirectFunctionCall7(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7) DirectFunctionCall7Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define DirectFunctionCall8(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) DirectFunctionCall8Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define DirectFunctionCall9(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) DirectFunctionCall9Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define F_BOOLAND_STATEFUNC 2515
#define CATALOG(name,oid,oidmacro) typedef struct CppConcat(FormData_,name)
#define __INO_T_TYPE __ULONGWORD_TYPE
#define F_DATERANGE_SUBDIFF 3925
#define OidFunctionCall3(functionId,arg1,arg2,arg3) OidFunctionCall3Coll(functionId, InvalidOid, arg1, arg2, arg3)
#define F_SPG_QUAD_PICKSPLIT 4020
#define ERRCODE_FDW_UNABLE_TO_CREATE_EXECUTION MAKE_SQLSTATE('H','V','0','0','L')
#define F_GTSVECTOR_PENALTY 3653
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define MultiXactMemberControlLock (&MainLWLockArray[15].lock)
#define F_TIMESTAMPTZ_TIMESTAMP 2027
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define PG_HAVE_ATOMIC_WRITE_U64 
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define __F_SETOWN_EX 15
#define F_ULOCK 0
#define F_PG_STAT_GET_BACKEND_USERID 1939
#define DSM_H 
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define __LC_ALL 6
#define PG_GETARG_EXPANDED_ARRAY(n) DatumGetExpandedArray(PG_GETARG_DATUM(n))
#define F_PATH_RECV 2482
#define __struct_tm_defined 1
#define QUERYENVIRONMENT_H 
#define _SC_TRACE _SC_TRACE
#define F_PG_LSN_IN 3229
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define F_ENUM_OUT 3507
#define F_DATE_MI_INTERVAL 2072
#define __ssize_t_defined 
#define EBADFD 77
#define AGTYPE_P_GET_DATUM(p) PointerGetDatum(p)
#define HAVE_LIBXSLT 1
#define LABEL_KIND_VERTEX 'v'
#define F_ARRAY_TO_JSON_PRETTY 3154
#define F_TSVECTORSEND 3638
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define _SC_FSYNC _SC_FSYNC
#define F_TIDGT 2790
#define F_PG_GET_FUNCTION_ARGUMENTS 2162
#define F_TO_ASCII_ENC 1846
#define TYPECACHE_BTREE_OPFAMILY 0x0200
#define F_NETWORK_SUBEQ 928
#define FPE_INTOVF FPE_INTOVF
#define __time_t_defined 1
#define F_CASH_MUL_FLT4 846
#define F_BOOLGT 57
#define RELCACHE_H 
#define F_PREFIXJOINSEL 3438
#define gettext(msgid) dgettext (NULL, msgid)
#define F_BITSETBIT 3033
#define F_JSONB_STRIP_NULLS 3262
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SIGPROF 27
#define F_TIMETZ_LARGER 1379
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define F_BYTEA_SUBSTR 2012
#define SetInvalidVirtualTransactionId(vxid) ((vxid).backendId = InvalidBackendId, (vxid).localTransactionId = InvalidLocalTransactionId)
#define F_PG_INDEXAM_HAS_PROPERTY 636
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define GROUPING_CAN_USE_HASH 0x0002
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define FD_CLOEXEC 1
#define PF_TIPC 30
#define F_TSQ_MCONTAINS 3691
#define FLOAT8_FITS_IN_INT16(num) ((num) >= (float8) PG_INT16_MIN && (num) < -((float8) PG_INT16_MIN))
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define BITOID 1560
#define IS_DEFAULT_LABEL_VERTEX(str) (str != NULL && strcmp(AG_DEFAULT_LABEL_VERTEX, str) == 0)
#define F_FLOAT48MUL 279
#define pg_spin_delay() pg_spin_delay_impl()
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define shm_toc_estimate_keys(e,cnt) ((e)->number_of_keys = add_size((e)->number_of_keys, cnt))
#define F_REPEAT 1622
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define F_HASHFLOAT4EXTENDED 443
#define PG_GETARG_DATUM(n) (fcinfo->arg[n])
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define RELKIND_FOREIGN_TABLE 'f'
#define IPV6_MULTICAST_HOPS 18
#define CURSOR_OPT_SCROLL 0x0002
#define CYPHER_TARGET_NODE_IN_PATH_VAR 0x0008
#define SSIZE_MAX LONG_MAX
#define ACL_TRIGGER (1<<6)
#define F_PG_ADVISORY_LOCK_INT8 2880
#define LogicalRepWorkerLock (&MainLWLockArray[44].lock)
#define REGCONFIGARRAYOID 3735
#define INSTRUMENT_H 
#define F_TIMEMI 245
#define IS_UPPER_REL(rel) ((rel)->reloptkind == RELOPT_UPPER_REL || (rel)->reloptkind == RELOPT_OTHER_UPPER_REL)
#define ERRCODE_INVALID_TABLESAMPLE_REPEAT MAKE_SQLSTATE('2','2','0','2','G')
#define IPV6_TRANSPARENT 75
#define PG_RETURN_INT16(x) return Int16GetDatum(x)
#define F_GISTHANDLER 332
#define F_INT4INC 766
#define VARSIZE_SHORT(PTR) VARSIZE_1B(PTR)
#define F_JSON_RECV 323
#define F_PG_STAT_CLEAR_SNAPSHOT 2230
#define ERRCODE_WINDOWING_ERROR MAKE_SQLSTATE('4','2','P','2','0')
#define AG_DEFAULT_LABEL_EDGE "_ag_label_edge"
#define __LC_ADDRESS 9
#define AT_FDCWD -100
#define HeapTupleNoNulls(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASNULL))
#define F_NUMERIC_LE 1723
#define F_INT2SHR 1897
#define F_SPLIT_TEXT 2088
#define ereport(elevel,rest) ereport_domain(elevel, TEXTDOMAIN, rest)
#define F_NUMERIC_LT 1722
#define ERRCODE_INVALID_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','2','3')
#define INT32_MAX (2147483647)
#define __USE_ATFILE 1
#define F_PG_TS_PARSER_IS_VISIBLE 3756
#define __INT32_C(c) c
#define F_DSIGN 2310
#define F_PG_STAT_GET_BACKEND_CLIENT_PORT 1393
#define F_DATETIMETZ_TIMESTAMPTZ 1297
#define F_INET_SPG_PICKSPLIT 3797
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define F_INT8XOR 1906
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define F_PG_NDISTINCT_OUT 3356
#define RWH_WRITE_LIFE_LONG 4
#define F_DATAN2 1603
#define F_NAMEGE 658
#define F_BOX_DISTANCE 978
#define _PATH_PROTOCOLS "/etc/protocols"
#define __glibc_macro_warning1(message) _Pragma (#message)
#define HAVE_ATOMICS 1
#define __S_IFMT 0170000
#define MACADDROID 829
#define ACLITEM_SET_GOPTIONS(item,goptions) ((item).ai_privs = ((item).ai_privs & ~(((AclMode) 0xFFFF) << 16)) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define __STDC_IEC_559_COMPLEX__ 1
#define F_NUMERIC_POLY_STDDEV_POP 3392
#define AI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("AI_IDN_USE_STD3_ASCII_RULES is deprecated") 0x0200
#define OPCLASS_ITEM_FUNCTION 2
#define F_BINARY_UPGRADE_SET_NEXT_PG_AUTHID_OID 3590
#define F_CASH_EQ 888
#define LOCK_H_ 
#define F_BOOLLT 56
#define F_HAS_SCHEMA_PRIVILEGE_ID_ID 2271
#define PageXLogRecPtrSet(ptr,lsn) ((ptr).xlogid = (uint32) ((lsn) >> 32), (ptr).xrecoff = (uint32) (lsn))
#define XidGenLock (&MainLWLockArray[3].lock)
#define DN_ATTRIB 0x00000020
#define SO_INCOMING_CPU 49
#define F_PG_STAT_GET_XACT_FUNCTION_CALLS 3046
#define F_TXID_SNAPSHOT_OUT 2940
#define BTLessEqualStrategyNumber 2
#define F_INT8SMALLER 1237
#define F_JSON_STRIP_NULLS 3261
#define F_MAKE_DATE 3846
#define dsa_pointer_atomic_init pg_atomic_init_u64
#define F_RECORD_SEND 2403
#define QTW_DONT_COPY_QUERY 0x20
#define DOUBLEALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_DOUBLE, (LEN))
#define JULIAN_MINYEAR (-4713)
#define F_PG_STAT_GET_BACKEND_ACTIVITY 1940
#define __error_t_defined 1
#define __FLT128_DIG__ 33
#define PG_MODULE_MAGIC extern PGDLLEXPORT const Pg_magic_struct *PG_MAGIC_FUNCTION_NAME(void); const Pg_magic_struct * PG_MAGIC_FUNCTION_NAME(void) { static const Pg_magic_struct Pg_magic_data = PG_MODULE_MAGIC_DATA; return &Pg_magic_data; } extern int no_such_variable
#define __SCHAR_WIDTH__ 8
#define Anum_pg_class_relchecks 18
#define HAVE_GETOPT 1
#define DELETE_CLAUSE_FUNCTION_NAME "_cypher_delete_clause"
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define HEAP_XMAX_EXCL_LOCK 0x0040
#define F_NETWORK_SMALLER 3563
#define slist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).prev = &(lhead)->head, (iter).cur = (iter).prev->next, (iter).next = (iter).cur ? (iter).cur->next : NULL; (iter).cur != NULL; (iter).prev = (iter).cur, (iter).cur = (iter).next, (iter).next = (iter).next ? (iter).next->next : NULL)
#define F_BOOLNE 84
#define F_LINE_EQ 1492
#define XLOG_H 
#define F_REGOPERATORRECV 2450
#define IP_ADD_MEMBERSHIP 35
#define F_BYTEARECV 2412
#define ERRCODE_INVALID_ARGUMENT_FOR_NTH_VALUE MAKE_SQLSTATE('2','2','0','1','6')
#define __FLT32_MAX_10_EXP__ 38
#define NUMERIC_MIN_DISPLAY_SCALE 0
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define F_INT4_MUL_CASH 862
#define PG_PUBLICATION_D_H 
#define F_BOOLGE 1692
#define ACL_ALL_RIGHTS_LANGUAGE (ACL_USAGE)
#define ACL_TRUNCATE_CHR 'D'
#define PG_HAVE_SPIN_DELAY 
#define F_INTERVAL_JUSTIFY_HOURS 1175
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define F_INT8DEC 3546
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define F_PG_STAT_GET_PROGRESS_INFO 3318
#define UTIME_OMIT ((1l << 30) - 2l)
#define __INT_FAST32_TYPE__ long int
#define TABLESPACE_MAP "tablespace_map"
#define VirtualTransactionIdEquals(vxid1,vxid2) ((vxid1).backendId == (vxid2).backendId && (vxid1).localTransactionId == (vxid2).localTransactionId)
#define pg_compiler_barrier_impl() __asm__ __volatile__("" ::: "memory")
#define TIDOID 27
#define __itimerspec_defined 1
#define bool _Bool
#define F_ANYENUM_OUT 3505
#define GetSysCacheHashValue3(cacheId,key1,key2,key3) GetSysCacheHashValue(cacheId, key1, key2, key3, 0)
#define PG_HAVE_ATOMIC_TEST_SET_FLAG 
#define PG_LSNARRAYOID 3221
#define RELTRIGGER_H 
#define HAVE_SYS_STAT_H 1
#define F_TO_TSVECTOR_BYID 3745
#define F_TEXT_LEFT 3060
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define S_IWGRP (S_IWUSR >> 3)
#define UNIX_EPOCH_JDATE 2440588
#define MINIMAL_TUPLE_OFFSET ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) / MAXIMUM_ALIGNOF * MAXIMUM_ALIGNOF)
#define F_HAS_TABLESPACE_PRIVILEGE_NAME 2394
#define SIG_DFL ((__sighandler_t) 0)
#define F_HASHINET 422
#define F_INETAND 2628
#define F_PG_GET_INDEXDEF 1643
#define PG_INT16_MAX (0x7FFF)
#define BKI_FORCE_NULL 
#define SIG_ATOMIC_MIN (-2147483647-1)
#define F_OK 0
#define F_BTFLOAT8CMP 355
#define _PC_PATH_MAX _PC_PATH_MAX
#define isgraph(c) __isctype((c), _ISgraph)
#define RelationHasCascadedCheckOption(relation) ((relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option_offset != 0 ? strcmp((char *) (relation)->rd_options + ((ViewOptions *) (relation)->rd_options)->check_option_offset, "cascaded") == 0 : false)
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define F_XIDIN 50
#define Anum_pg_attribute_attfdwoptions 23
#define ERRCODE_TOO_MANY_COLUMNS MAKE_SQLSTATE('5','4','0','1','1')
#define F_PG_HAS_ROLE_NAME_NAME 2705
#define PG_VERSION "11.18 (Ubuntu 11.18-1.pgdg22.04+1)"
#define TYPECACHE_HASH_OPFAMILY 0x0400
#define _POSIX_MAX_INPUT 255
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define F_TIMETZTYPMODOUT 2912
#define REINDEXOPT_VERBOSE (1 << 0)
#define ESHUTDOWN 108
#define F_HAS_COLUMN_PRIVILEGE_ID_ID_NAME 3018
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define HAVE_SYS_SHM_H 1
#define INT32_MIN (-2147483647-1)
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define F_HASHFLOAT4 451
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define DatumGetNumeric(X) ((Numeric) PG_DETOAST_DATUM(X))
#define __S_IWRITE 0200
#define AssertPointerAlignment(ptr,bndr) ((void)true)
#define F_HAS_DATABASE_PRIVILEGE_NAME_NAME 2250
#define AssertArg(condition) ((void)true)
#define F_PG_GET_FUNCTION_IDENTITY_ARGUMENTS 2232
#define F_CASH_LT 890
#define F_INT8EQ 467
#define RTSuperEqualStrategyNumber 27
#define LC_COLLATE __LC_COLLATE
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define HeapTupleHeaderSetSpeculativeToken(tup,token) ( ItemPointerSet(&(tup)->t_ctid, token, SpecTokenOffsetNumber) )
#define Anum_pg_type_typbasetype 24
#define ACL_NUM(ACL) (ARR_DIMS(ACL)[0])
#define BUF_H 
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define F_SETOWN __F_SETOWN
#define FIELDNO_HEAPTUPLEDATA_DATA 3
#define F_INT28MUL 943
#define F_RANGE_GE 3873
#define XATTR_LIST_MAX 65536
#define INT_FAST64_WIDTH 64
#define F_LSEG_HORIZONTAL 998
#define __FLT64X_DIG__ 33
#define F_NUMERIC_EXP 1732
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define F_CURRVAL_OID 1575
#define F_HAS_SEQUENCE_PRIVILEGE_NAME_NAME 2181
#define slist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), (type *) slist_head_element_off(lhead, offsetof(type, membername)))
#define FRAMEOPTION_END_CURRENT_ROW 0x00400
#define HAVE_LIBLDAP 1
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define F_INET_SPG_LEAF_CONSISTENT 3799
#define PGINVALID_SOCKET (-1)
#define F_DATERANGE_CANONICAL 3915
#define __INT8_TYPE__ signed char
#define F_INT8GE 472
#define MAX_LOCKMODES 10
#define F_SETLK64 6
#define F_GTSVECTOROUT 3647
#define F_INT8GT 470
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define F_INT8_ACCUM 1836
#define F_BTARRAYCMP 382
#define USECS_PER_MINUTE INT64CONST(60000000)
#define __FLT32X_MIN_EXP__ (-1021)
#define __ELF__ 1
#define F_LINE_VERTICAL 1414
#define PACKAGE_VERSION "11.18"
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define F_ENUM_SMALLER 3524
#define F_RANGE_IN 3834
#define F_POINT_LEFT 132
#define F_POINT_EQ 135
#define BTMaxStrategyNumber 5
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define BKPIMAGE_HAS_HOLE 0x01
#define InHotStandby (standbyState >= STANDBY_SNAPSHOT_PENDING)
#define F_INT8UP 1910
#define F_TEXT_TO_ARRAY_NULL 376
#define _SC_AIO_MAX _SC_AIO_MAX
#define F_BTINT8CMP 842
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define fmgr_info_set_expr(expr,finfo) ((finfo)->fn_expr = (expr))
#define ALIGNOF_INT 4
#define F_INT8IN 460
#define RowExclusiveLock 3
#define isdigit(c) __isctype((c), _ISdigit)
#define ERRCODE_WRONG_OBJECT_TYPE MAKE_SQLSTATE('4','2','8','0','9')
#define ELIBSCN 81
#define F_SCALARGESEL 337
#define F_BITGE 1592
#define F_TLOCK 2
#define F_INT48LE 856
#define INVALID_LABEL_ID 0
#define ERRCODE_GENERATED_ALWAYS MAKE_SQLSTATE('4','2','8','C','9')
#define SDIR_H 
#define HeapTupleHeaderClearMatch(tup) ( (tup)->t_infomask2 &= ~HEAP_TUPLE_HAS_MATCH )
#define F_MAKEACLITEM 1365
#define _PGTIME_H 
#define REGOPERATOROID 2204
#define F_TIMESTAMP_SCALE 1961
#define BKPBLOCK_SAME_REL 0x80
#define F_GETLEASE 1025
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define HAVE_DECL_SNPRINTF 1
#define MCXT_ALLOC_HUGE 0x01
#define SOL_RAW 255
#define F_TIMESTAMP_GT_TIMESTAMPTZ 2523
#define INT_LEAST16_WIDTH 16
#define __FLT_RADIX__ 2
#define Anum_pg_type_typarray 13
#define SO_REUSEPORT 15
#define F_DACOS 1601
#define PG_INT16_MIN (-0x7FFF-1)
#define HEAP_XMIN_FROZEN (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)
#define pg_read_barrier() pg_read_barrier_impl()
#define F_RANGE_LE 3872
#define F_INET_SERVER_PORT 2199
#define F_INET_TO_CIDR 1715
#define _BITS_TIME64_H 1
#define AI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("AI_IDN_ALLOW_UNASSIGNED is deprecated") 0x0100
#define PG_INT32_MIN (-0x7FFFFFFF-1)
#define F_PG_STAT_GET_DB_CONFLICT_STARTUP_DEADLOCK 3069
#define AGT_ROOT_IS_SCALAR(agtp_) ((*(uint32 *)VARDATA(agtp_) & AGT_FSCALAR) != 0)
#define F_NUMERIC_POLY_AVG 3389
#define TYPCATEGORY_BOOLEAN 'B'
#define HAVE_USELOCALE 1
#define __LC_MESSAGES 5
#define F_TEXTICREGEXEQ 1238
#define Natts_pg_publication 7
#define F_BOX_CONTAIN_PT 193
#define SLAB_LARGE_BLOCK_SIZE (8 * 1024 * 1024)
#define EAI_BADFLAGS -1
#define F_PG_TS_TEMPLATE_IS_VISIBLE 3768
#define USE_UNNAMED_POSIX_SEMAPHORES 1
#define palloc_array(type,count) ((type *) palloc(sizeof(type) * (count)))
#define _POSIX_ARG_MAX 4096
#define _DIRENT_HAVE_D_TYPE 
#define F_BOX_OVERLAP 125
#define F_MACADDR8_GE 4117
#define BUS_ADRALN BUS_ADRALN
#define F_CHAR_BPCHAR 860
#define F_CIRCLE_CONTAIN_PT 1477
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define F_INET_MERGE 4063
#define DEFAULT_DYNAMIC_SHARED_MEMORY_TYPE DSM_IMPL_POSIX
#define F_RANGE_NE 3856
#define S_LOCK_FREE(lock) (*(lock) == 0)
#define SOL_RDS 276
#define Anum_pg_class_relnatts 17
#define F_INT8MI 464
#define __UINT_FAST64_TYPE__ long unsigned int
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define UINT_FAST32_MAX (18446744073709551615UL)
#define F_PG_LOGICAL_SLOT_PEEK_BINARY_CHANGES 3785
#define F_PG_STAT_GET_BUF_FSYNC_BACKEND 3063
#define FKCONSTR_ACTION_CASCADE 'c'
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define F_ANYNONARRAY_OUT 2778
#define MSG_TRUNC MSG_TRUNC
#define RegProcedureIsValid(p) OidIsValid(p)
#define F_BINARY_UPGRADE_SET_NEXT_ARRAY_PG_TYPE_OID 3584
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define INDEX_VAR_MASK 0x4000
#define INTMAX_C(c) c ## L
#define __f32(x) x ##f32
#define F_OIDVECTOREQ 679
#define N_ACL_RIGHTS 12
#define SO_PREFER_BUSY_POLL 69
#define F_MACADDR8_IN 4110
#define F_BYTEAGETBYTE 721
#define TYPEALIGN_DOWN(ALIGNVAL,LEN) (((uintptr_t) (LEN)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define F_PG_COLUMN_IS_UPDATABLE 3843
#define _BITS_SIGSTACK_H 1
#define F_OIDLARGER 1965
#define _POSIX_TIMEOUTS 200809L
#define F_PG_NDISTINCT_SEND 3358
#define F_HAS_SERVER_PRIVILEGE_ID_NAME 3008
#define PG_DIAG_MESSAGE_HINT 'H'
#define F_CIRCLE_ADD_PT 1146
#define TABLESPACE_VERSION_DIRECTORY "PG_" PG_MAJORVERSION "_" CppAsString2(CATALOG_VERSION_NO)
#define F_BE_LO_GET_FRAGMENT 3459
#define EOVERFLOW 75
#define __STDC_IEC_60559_BFP__ 201404L
#define REGOPERATORARRAYOID 2209
#define __FSID_T_TYPE struct { int __val[2]; }
#define HEAP_XMIN_COMMITTED 0x0100
#define list_make3_int(x1,x2,x3) lcons_int(x1, list_make2_int(x2, x3))
#define FunctionCall4(flinfo,arg1,arg2,arg3,arg4) FunctionCall4Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4)
#define AF_PACKET PF_PACKET
#define F_CASH_MUL_FLT8 896
#define F_DCOTD 2738
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define HeapTupleHeaderIsHotUpdated(tup) ( ((tup)->t_infomask2 & HEAP_HOT_UPDATED) != 0 && ((tup)->t_infomask & HEAP_XMAX_INVALID) == 0 && !HeapTupleHeaderXminInvalid(tup) )
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define _POSIX_HOST_NAME_MAX 255
#define F_BE_LO_TRUNCATE 1004
#define F_UUID_IN 2952
#define __SIZEOF_PTHREAD_COND_T 48
#define F_GRAPHIDEQ F_INT8EQ
#define __P(args) args
#define Anum_pg_class_relpersistence 15
#define HASH_PARTITION 0x0001
#define SEEK_SET 0
#define PG_KRB_SRVNAM "postgres"
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define F_TSQUERY_LT 3662
#define INVALID_PGPROCNO PG_INT32_MAX
#define EAI_NODATA -5
#define OffsetNumberNext(offsetNumber) ((OffsetNumber) (1 + (offsetNumber)))
#define POSIX_FADV_WILLNEED 3
#define PageIsValid(page) PointerIsValid(page)
#define AF_IEEE802154 PF_IEEE802154
#define ERRCODE_FEATURE_NOT_SUPPORTED MAKE_SQLSTATE('0','A','0','0','0')
#define F_POLY_OUT 348
#define FunctionCall7(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7) FunctionCall7Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define BYTEAOID 17
#define F_INT8UM 462
#define F_ARRAY_RECV 2400
#define VARDATA_EXTERNAL(PTR) VARDATA_1B_E(PTR)
#define __f64(x) x ##f64
#define F_NLIKESEL 1822
#define LSNOID 3220
#define PG_GETARG_VARCHAR_P_COPY(n) DatumGetVarCharPCopy(PG_GETARG_DATUM(n))
#define PageGetPageLayoutVersion(page) (((PageHeader) (page))->pd_pagesize_version & 0x00FF)
#define F_MACADDR8_LE 4115
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define F_RANGE_SEND 3837
#define F_PG_STAT_GET_LIVE_TUPLES 2878
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define F_LENGTH_IN_ENCODING 1713
#define INT_LEAST8_WIDTH 8
#define ERRCODE_INVALID_DATETIME_FORMAT MAKE_SQLSTATE('2','2','0','0','7')
#define F_PG_STAT_GET_XACT_TUPLES_RETURNED 3038
#define ACL_REFERENCES_CHR 'x'
#define F_WIDTH_BUCKET_NUMERIC 2170
#define F_PATH_POLY 1449
#define F_BPCHARNE 1053
#define __FLT32X_MANT_DIG__ 53
#define F_GTSVECTOR_PICKSPLIT 3650
#define NUMERIC_MIN_SIG_DIGITS 16
#define F_TIMESTAMP_DATE 2029
#define XLR_NORMAL_MAX_BLOCK_ID 4
#define F_TIME_SCALE 1968
#define EUCLEAN 117
#define AG_EDGE_COLNAME_START_ID "start_id"
#define MaxTransactionId ((TransactionId) 0xFFFFFFFF)
#define _POSIX_IPV6 200809L
#define F_PG_STAT_GET_BACKEND_XACT_START 2857
#define F_JSONB_SEND 3803
#define F_CASHLARGER 898
#define IP_MSFILTER 41
#define _EXTERN_INLINE __extern_inline
#define RTSuperStrategyNumber 26
#define HASH_DIRSIZE 0x0004
#define DSM_IMPL_NONE 0
#define _SIGNAL_H 
#define HAVE_GETPWUID_R 1
#define _POSIX_SHELL 1
#define F_PG_LAST_WAL_RECEIVE_LSN 3820
#define F_HASHMACADDR8 328
#define PG_RETURN_BOOL(x) return BoolGetDatum(x)
#define EAI_OVERFLOW -12
#define AG_EDGE_ACCESS_FUNCTION_END_ID "age_end_id"
#define SizeOfXLogRecordDataHeaderShort (sizeof(uint8) * 2)
#define ALLOCSET_SMALL_INITSIZE (1 * 1024)
#define F_MACADDR8_NE 4118
#define ShareLock 5
#define AttributeRelation_Rowtype_Id 75
#define HEAP_HOT_UPDATED 0x4000
#define F_GIN_EXTRACT_TSVECTOR_2ARGS 3077
#define F_PG_STAT_GET_LAST_AUTOVACUUM_TIME 2782
#define __LC_PAPER 7
#define IP_BLOCK_SOURCE 38
#define __S_IEXEC 0100
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define W_OK 2
#define FIELDNO_AGGSTATE_CURAGGCONTEXT 14
#define STA_FLL 0x0008
#define F_HASHINT2 449
#define _SIZE_T_ 
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define __FLT16_IS_IEC_60559__ 2
#define F_JSONB_NUMERIC 3449
#define __FLT16_MAX_EXP__ 16
#define REGPROCOID 24
#define F_MACADDR8_OR 4122
#define DEFAULT_XLOG_SEG_SIZE (16*1024*1024)
#define F_NUMERIC_IN 1701
#define F_RANGE_UPPER 3849
#define O_CREAT 0100
#define _WCHAR_T_H 
#define IP_RETOPTS 7
#define EPROTO 71
#define ENODEV 19
#define F_HASHINT4 450
#define POLL_OUT POLL_OUT
#define BOOL_MAX 1
#define HeapTupleAllFixed(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH))
#define INT16_WIDTH 16
#define LLONG_WIDTH 64
#define __stub_revoke 
#define _POSIX_CHOWN_RESTRICTED 0
#define F_DTOI8 483
#define USE_LIBXSLT 1
#define F_JSONB_OBJECT_AGG_FINALFN 3269
#define innerPlan(node) (((Plan *)(node))->righttree)
#define IS_PARTITIONED_REL(rel) ((rel)->part_scheme && (rel)->boundinfo && (rel)->nparts > 0 && (rel)->part_rels && !IS_DUMMY_REL(rel))
#define INT_MAX __INT_MAX__
#define PG_GETARG_ACLITEM_P(n) DatumGetAclItemP(PG_GETARG_DATUM(n))
#define likely(x) __builtin_expect((x) != 0, 1)
#define __stub___compat_create_module 
#define AG_CYPHER_ITEM_H 
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define SQL_STR_DOUBLE(ch,escape_backslash) ((ch) == '\'' || ((ch) == '\\' && (escape_backslash)))
#define for_both_cell(cell1,initcell1,cell2,initcell2) for ((cell1) = (initcell1), (cell2) = (initcell2); (cell1) != NULL && (cell2) != NULL; (cell1) = lnext(cell1), (cell2) = lnext(cell2))
#define AGTYPEOID get_AGTYPEOID()
#define BTGreaterEqualStrategyNumber 4
#define F_GIN_TSQUERY_CONSISTENT 3658
#define foreach(cell,l) for ((cell) = list_head(l); (cell) != NULL; (cell) = lnext(cell))
#define _POSIX_MONOTONIC_CLOCK 0
#define F_VARCHAR_TRANSFORM 3097
#define F_PG_TS_DICT_IS_VISIBLE 3757
#define F_GIN_CLEAN_PENDING_LIST 3789
#define EKEYEXPIRED 127
#define F_TIMESTAMP_PL_INTERVAL 2032
#define HEAP_COMBOCID 0x0020
#define F_FLOAT8_VAR_POP 2512
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define O_DIRECT __O_DIRECT
#define ResetExprContext(econtext) MemoryContextReset((econtext)->ecxt_per_tuple_memory)
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define F_UUID_SORTSUPPORT 3300
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define F_HASHINT8 949
#define STATUS_WAITING (2)
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define HAVE_RAND_OPENSSL 1
#define EXISTING_VARAIBLE_DECLARED_SAME_CLAUSE 0x0002
#define NAMEOID 19
#define MINSIGSTKSZ SIGSTKSZ
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define ERRCODE_CONNECTION_FAILURE MAKE_SQLSTATE('0','8','0','0','6')
#define F_REGCLASSSEND 2453
#define DT_REG DT_REG
#define F_INTERNAL_OUT 2305
#define F_PG_SEQUENCE_LAST_VALUE 4032
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 6
#define ERRCODE_INVALID_ROW_COUNT_IN_RESULT_OFFSET_CLAUSE MAKE_SQLSTATE('2','2','0','1','X')
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define _POSIX_TRACE_INHERIT -1
#define STRINGINFO_H 
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define AG_CYPHER_NODE_H 
#define ERRCODE_INVALID_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','M')
#define ERRCODE_FDW_TABLE_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','R')
#define ATOMICS_H 
#define __USE_ISOC99 1
#define F_GTSQUERY_PENALTY 3700
#define F_TIMETZ_TIME 2046
#define _PATH_NETWORKS "/etc/networks"
#define PF_IEEE802154 36
#define ACLITEM_GET_GOPTIONS(item) (((item).ai_privs >> 16) & 0xFFFF)
#define CStringGetDatum(X) PointerGetDatum(X)
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define F_RI_FKEY_RESTRICT_DEL 1648
#define _PC_SYNC_IO _PC_SYNC_IO
#define F_RECORD_IMAGE_LT 3183
#define F_LSEG_INTERSECT 994
#define F_HASHHANDLER 331
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define TypeRelation_Rowtype_Id 71
#define PG_GETARG_INT16(n) DatumGetInt16(PG_GETARG_DATUM(n))
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define F_DISPELL_LEXIZE 3732
#define __FLT_HAS_INFINITY__ 1
#define PG_RETURN_UINT32(x) return UInt32GetDatum(x)
#define HAVE_SPINLOCKS 1
#define MaxIndexTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(sizeof(IndexTupleData) + 1) + sizeof(ItemIdData))))
#define SO_SNDBUF 7
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define F_TO_REGPROCEDURE 3479
#define F_LSEG_DISTANCE 361
#define XLogRecGetXid(decoder) ((decoder)->decoded_record->xl_xid)
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define F_PG_ADVISORY_XACT_LOCK_INT4 3093
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define S_IFSOCK __S_IFSOCK
#define F_BOX_INTERSECT 980
#define F_TO_TSQUERY_BYID 3746
#define _BSD_PTRDIFF_T_ 
#define F_FLOAT8_STDDEV_POP 2513
#define F_ARRAY_EQ 744
#define F_POLY_RIGHT 344
#define SIGXFSZ 25
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define F_PG_GET_KEYWORDS 1686
#define Anum_pg_index_indcollation 16
#define CHECKPOINT_CAUSE_XLOG 0x0040
#define _BITS_ENDIANNESS_H 1
#define ERRCODE_TRIGGERED_DATA_CHANGE_VIOLATION MAKE_SQLSTATE('2','7','0','0','0')
#define Anum_pg_attribute_attcacheoff 8
#define __POSIX_FADV_DONTNEED 4
#define F_INTERVAL_HASH 1697
#define TYPCATEGORY_USER 'U'
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define LP_DEAD 3
#define FirstOffsetNumber ((OffsetNumber) 1)
#define ERRCODE_LOCATOR_EXCEPTION MAKE_SQLSTATE('0','F','0','0','0')
#define PG_GETARG_INT32(n) DatumGetInt32(PG_GETARG_DATUM(n))
#define SET_LOCKTAG_RELATION(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define F_PG_STAT_GET_DB_TUPLES_INSERTED 2760
#define __INT_FAST32_WIDTH__ 64
#define dlist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end, (iter).next = (iter).cur->next; (iter).cur != (iter).end; (iter).cur = (iter).next, (iter).next = (iter).cur->next)
#define F_BITCMP 1596
#define F_ARRAYCONTAINS 2748
#define NULL ((void *)0)
#define F_NEQJOINSEL 106
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define AF_IRDA PF_IRDA
#define HAVE__BOOL 1
#define RELATION_IS_LOCAL(relation) ((relation)->rd_islocaltemp || (relation)->rd_createSubid != InvalidSubTransactionId)
#define F_OVERLAPS_TIMETZ 1271
#define F_VARBIT_SEND 2459
#define F_TIMESTAMPTZ_NE_DATE 2382
#define ObjectAddressSubSet(addr,class_id,object_id,object_sub_id) do { (addr).classId = (class_id); (addr).objectId = (object_id); (addr).objectSubId = (object_sub_id); } while (0)
#define F_MACADDR8_OUT 4111
#define F_HAS_FUNCTION_PRIVILEGE_NAME 2260
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define F_NUMERIC_FLOOR 1712
#define BIG_ENDIAN __BIG_ENDIAN
#define PF_PPPOX 24
#define BKPIMAGE_APPLY 0x04
#define F_HASHINETEXTENDED 779
#define F_CIRCLE_DIAMETER 1469
#define type_is_array(typid) (get_element_type(typid) != InvalidOid)
#define F_VARBIT_IN 1579
#define SO_ATTACH_REUSEPORT_CBPF 51
#define __SIZE_WIDTH__ 64
#define F_PG_LSN_SEND 3239
#define AGT_FOBJECT 0x20000000
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define HAVE_STRERROR 1
#define F_TIMESTAMP_TIMESTAMPTZ 2028
#define F_BE_LO_OPEN 952
#define SO_TIMESTAMPNS_NEW 64
#define F_TEXT_LARGER 458
#define INT_MIN (-INT_MAX - 1)
#define F_TEXTLIKE 850
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define F_ANYRANGE_OUT 3833
#define FRAMEOPTION_START_UNBOUNDED_PRECEDING 0x00020
#define PG_RETURN_ACLITEM_P(x) PG_RETURN_POINTER(x)
#define F_DTOI4 317
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define HAVE_SYMLINK 1
#define AF_RXRPC PF_RXRPC
#define IPV6_XFRM_POLICY 35
#define F_JSON_BUILD_ARRAY_NOARGS 3199
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define PG_GETARG_INT64(n) DatumGetInt64(PG_GETARG_DATUM(n))
#define EL3RST 47
#define F_WIDTH_BUCKET_FLOAT8 320
#define F_INT8SHL 1908
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define F_INT8SHR 1909
#define PF_QIPCRTR 42
#define S_IROTH (S_IRGRP >> 3)
#define F_TEXT_REGCLASS 1079
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define ItemPointerSetBlockNumber(pointer,blockNumber) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber) )
#define SI_TKILL SI_TKILL
#define F_AREASEL 139
#define F_INTERVAL_CMP 1315
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define HEAP_XMAX_IS_SHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_SHR_LOCK)
#define HAVE_GSSAPI_GSSAPI_H 1
#define SOL_KCM 281
#define MCXT_ALLOC_ZERO 0x04
#define F_INT48DIV 1281
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define MSG_OOB MSG_OOB
#define _BITS_TIME_H 1
#define ERRCODE_E_R_I_E_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('3','9','0','0','4')
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define S_LOCK(lock) (TAS(lock) ? s_lock((lock), __FILE__, __LINE__, PG_FUNCNAME_MACRO) : 0)
#define F_UUID_CMP 2960
#define FRAMEOPTION_DEFAULTS (FRAMEOPTION_RANGE | FRAMEOPTION_START_UNBOUNDED_PRECEDING | FRAMEOPTION_END_CURRENT_ROW)
#define F_PG_GET_CONSTRAINTDEF 1387
#define PD_PAGE_FULL 0x0002
#define GetPerTupleMemoryContext(estate) (GetPerTupleExprContext(estate)->ecxt_per_tuple_memory)
#define F_TIMENOW 250
#define F_MACADDR8_GT 4116
#define CYPHER_PARSE_AGG_H 
#define PG_GETARG_BPCHAR_P_SLICE(n,a,b) DatumGetBpCharPSlice(PG_GETARG_DATUM(n),a,b)
#define __STDC_VERSION__ 201710L
#define MemSet(start,val,len) do { void *_vstart = (void *) (start); int _val = (val); Size _len = (len); if ((((uintptr_t) _vstart) & LONG_ALIGN_MASK) == 0 && (_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0)
#define ERRCODE_OBJECT_IN_USE MAKE_SQLSTATE('5','5','0','0','6')
#define F_PG_STAT_GET_BACKEND_ACTIVITY_START 2094
#define F_FLOAT8_REGR_COMBINE 3342
#define lfirst_node(type,lc) castNode(type, lfirst(lc))
#define F_STATEMENT_TIMESTAMP 2648
#define HEAP_HASVARWIDTH 0x0002
#define F_TS_RANK_WTT 3704
#define SO_DEBUG 1
#define F_DSIN 1604
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define ACL_ALL_RIGHTS_RELATION (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_DELETE|ACL_TRUNCATE|ACL_REFERENCES|ACL_TRIGGER)
#define F_PRSD_LEXTYPE 3721
#define VARATT_IS_EXTERNAL_INDIRECT(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_INDIRECT)
#define F_NUMERIC 1703
#define UINTMAX_C(c) c ## UL
#define SHMEM_H 
#define ILL_BADSTK ILL_BADSTK
#define __PMT(args) args
#define F_CIRCLE_SEND 2491
#define F_LINE_OUT 1491
#define __SIZEOF_POINTER__ 8
#define HAVE_INET_ATON 1
#define AF_SMC PF_SMC
#define AF_NETBEUI PF_NETBEUI
#define AT_NO_AUTOMOUNT 0x800
#define IPV6_2292RTHDR 5
#define POSTGRES_EXT_H 
#define ERRCODE_CHECK_VIOLATION MAKE_SQLSTATE('2','3','5','1','4')
#define ECONNRESET 104
#define F_ENUM_LAST 3529
#define AGTENTRY_OFFLENMASK 0x0FFFFFFF
#define F_PG_ROTATE_LOGFILE_V2 2622
#define Anum_pg_publication_pubtruncate 7
#define IS_SPECIAL_VARNO(varno) ((varno) >= INNER_VAR)
#define HeapScanIsValid(scan) PointerIsValid(scan)
#define VALUE_H 
#define AttrNumberIsForUserDefinedAttr(attributeNumber) ((bool) ((attributeNumber) > 0))
#define _LINUX_LIMITS_H 
#define AF_SNA PF_SNA
#define F_ARRAY_UNNEST 2331
#define F_HAS_SEQUENCE_PRIVILEGE_NAME 2185
#define _SC_2_VERSION _SC_2_VERSION
#define Anum_pg_index_indoption 18
#define LP_NORMAL 1
#define GETSTRUCT(TUP) ((char *) ((TUP)->t_data) + (TUP)->t_data->t_hoff)
#define FirstLowInvalidHeapAttributeNumber (-8)
#define SIGSTOP 19
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define F_ARRAY_TO_TEXT_NULL 384
#define ENXIO 6
#define F_PG_HAS_ROLE_NAME_ID 2706
#define F_NAMEICREGEXNE 1241
#define CLOCK_MONOTONIC 1
#define F_CIRCLE_NE 1463
#define F_JSONB_DELETE_IDX 3303
#define FIELDNO_EXPRCONTEXT_AGGVALUES 8
#define IPV6_RTHDR_LOOSE 0
#define BTEqualStrategyNumber 3
#define AARR_LBOUND(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.lbound : ARR_LBOUND((ArrayType *) (a)))
#define PG_FUNCTION_ARGS FunctionCallInfo fcinfo
#define SIGALRM 14
#define __FLT64_HAS_QUIET_NAN__ 1
#define F_BTINT4SORTSUPPORT 3130
#define HAVE_ISINF 1
#define ERRCODE_EXCLUSION_VIOLATION MAKE_SQLSTATE('2','3','P','0','1')
#define F_PG_TABLE_IS_VISIBLE 2079
#define F_I8TOOID 1287
#define F_FLT4_MUL_CASH 848
#define F_TS_MATCH_VQ 3634
#define HEAP_XMAX_SHR_LOCK (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define SIGRTMIN (__libc_current_sigrtmin ())
#define ERRCODE_DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST MAKE_SQLSTATE('2','B','0','0','0')
#define Anum_pg_attribute_atthasdef 14
#define _SC_STREAMS _SC_STREAMS
#define EBADRQC 56
#define EQ_CRC32C(c1,c2) ((c1) == (c2))
#define TermTupleHashIterator(iter) ((void) 0)
#define PG_HAVE_ATOMIC_UNLOCKED_TEST_FLAG 
#define DatumGetTextP(X) ((text *) PG_DETOAST_DATUM(X))
#define F_OVERLAPS_TIME 1308
#define F_FLOAT8_VAR_SAMP 1831
#define F_DATE_TIMESTAMP 2024
#define SelfItemPointerAttributeNumber (-1)
#define USE_ARMV8_CRC32C_WITH_RUNTIME_CHECK 1
#define F_HAS_LANGUAGE_PRIVILEGE_ID 2267
#define HAVE_LOCALE_T 1
#define Anum_pg_class_relhassubclass 22
#define L_XTND SEEK_END
#define __WALL 0x40000000
#define F_VARCHARRECV 2432
#define F_PG_TRY_ADVISORY_LOCK_SHARED_INT4 2889
#define MCAST_JOIN_GROUP 42
#define F_NUMERIC_VAR_SAMP 1838
#define INET6_ADDRSTRLEN 46
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define POSTGRES_EPOCH_JDATE 2451545
#define PG_HAVE_ATOMIC_FETCH_ADD_U32 
#define __KEY_T_TYPE __S32_TYPE
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_ID_ID 3003
#define HEAP_HASNULL 0x0001
#define __SVE_VQ_MAX 512
#define F_RECORD_EQ 2981
#define F_BYTEAOVERLAY_NO_LEN 752
#define POLYGONOID 604
#define ERRCODE_NO_ADDITIONAL_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','2','0','0','1')
#define F_NUMERIC_POLY_SUM 3388
#define F_PG_EVENT_TRIGGER_DDL_COMMANDS 4568
#define PF_CAN 29
#define AGT_GIN_FLAG_BOOL 0x03
#define LOG 15
#define F_CONSTRUCT_POINT 1440
#define FIELDNO_EXPRSTATE_RESVALUE 3
#define F_TIMESTAMPTZ_MI_INTERVAL 1190
#define IS_OTHER_REL(rel) ((rel)->reloptkind == RELOPT_OTHER_MEMBER_REL || (rel)->reloptkind == RELOPT_OTHER_JOINREL || (rel)->reloptkind == RELOPT_OTHER_UPPER_REL)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define FIELDNO_AGGSTATE_CURPERTRANS 16
#define ___int_ptrdiff_t_h 
#define __stub___compat_get_kernel_syms 
#define IPV6_RECVFRAGSIZE 77
#define DATERANGEOID 3912
#define VARDATA_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_data)
#define MIN_TIMESTAMP INT64CONST(-211813488000000000)
#define att_addlength_datum(cur_offset,attlen,attdatum) att_addlength_pointer(cur_offset, attlen, DatumGetPointer(attdatum))
#define F_RECORD_GE 2986
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define F_RECORD_GT 2984
#define F_BTOIDCMP 356
#define __FLT64_HAS_INFINITY__ 1
#define PG_HAVE_ATOMIC_FETCH_OR_U32 
#define F_POINT_BOX 4091
#define PG_GETARG_HEAPTUPLEHEADER_COPY(n) DatumGetHeapTupleHeaderCopy(PG_GETARG_DATUM(n))
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define RelationGetTargetPageUsage(relation,defaultff) (BLCKSZ * RelationGetFillFactor(relation, defaultff) / 100)
#define MCXT_ALLOC_NO_OOM 0x02
#define false 0
#define IPV6_JOIN_GROUP 20
#define POLL_HUP POLL_HUP
#define HASH_SEGMENT 0x0002
#define _STRING_H 1
#define UINT_FAST32_WIDTH __WORDSIZE
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define HAVE_DECL_LLVMORCGETSYMBOLADDRESSIN 0
#define EVTTRIGGEROID 3838
#define HAVE_LIBM 1
#define BYTEAARRAYOID 1001
#define BlockIdSet(blockId,blockNumber) ( AssertMacro(PointerIsValid(blockId)), (blockId)->bi_hi = (blockNumber) >> 16, (blockId)->bi_lo = (blockNumber) & 0xffff )
#define F_INT2VECTOROUT 41
#define WSTOPPED 2
#define HAVE_LIBZ 1
#define F_PG_STAT_GET_BGWRITER_STAT_RESET_TIME 3075
#define ____sigset_t_defined 
#define ERRCODE_UNDEFINED_FILE MAKE_SQLSTATE('5','8','P','0','1')
#define F_PG_NODE_TREE_OUT 196
#define ERRCODE_MOST_SPECIFIC_TYPE_MISMATCH MAKE_SQLSTATE('2','2','0','0','G')
#define F_INT8MUL 465
#define _XOPEN_REALTIME 1
#define RTOverLeftStrategyNumber 2
#define AGTENTRY_IS_CONTAINER 0x50000000
#define F_RECORD_IN 2290
#define HAVE_LIBSSL 1
#define ATTRIBUTE_IDENTITY_ALWAYS 'a'
#define F_RANGE_AFTER 3864
#define F_WINDOW_LAST_VALUE 3113
#define FILENAME_MAX 4096
#define SOL_RXRPC 272
#define EEO_FLAG_IS_QUAL (1 << 0)
#define __nlink_t_defined 
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define F_BTINT48CMP 2188
#define PublicationRelationId 6104
#define F_BPCHARIN 1044
#define IS_WINDOWS_DIR_SEP(ch) ((ch) == '/' || (ch) == '\\')
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define VARHDRSZ ((int32) sizeof(int32))
#define VARATT_IS_EXPANDED_HEADER(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_header == EOH_HEADER_MAGIC)
#define PG_INSTR_CLOCK CLOCK_MONOTONIC
#define IPPROTO_RAW IPPROTO_RAW
#define HAVE_POSIX_FADVISE 1
#define __ino_t_defined 
#define F_ARRAY_AGG_TRANSFN 2333
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define __CLOCKID_T_TYPE __S32_TYPE
#define ALIGNOF_PG_INT128_TYPE 16
#define F_PG_REPLICATION_ORIGIN_DROP 6004
#define PG_HAVE_ATOMIC_FETCH_OR_U64 
#define F_IN_RANGE_TIMESTAMP_INTERVAL 4134
#define HeapTupleHeaderGetRawXmin(tup) ( (tup)->t_choice.t_heap.t_xmin )
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define F_INET_SERVER_ADDR 2198
#define F_OIDRECV 2418
#define F_DATE_SEND 2469
#define F_TO_ASCII_ENCNAME 1847
#define F_ABSTIMESEND 2463
#define USE_LDAP 1
#define Anum_pg_publication_pubname 1
#define ____sigval_t_defined 
#define AGTYPE_EXISTS_ALL_STRATEGY_NUMBER 11
#define DatumGetVarCharPCopy(X) ((VarChar *) PG_DETOAST_DATUM_COPY(X))
#define F_TS_MATCH_QV 3635
#define _POSIX_MEMLOCK_RANGE 200809L
#define F_CR_CIRCLE 1473
#define F_TRIGGER_IN 2300
#define CHECKPOINT_REQUESTED 0x0100
#define NUM_AUXILIARY_PROCS 4
#define IPPROTO_ICMP IPPROTO_ICMP
#define F_GIST_BOX_CONSISTENT 2578
#define SerializableFinishedListLock (&MainLWLockArray[29].lock)
#define F_GIN_TRICONSISTENT_JSONB 3488
#define Anum_ag_graph_namespace 2
#define F_NEQSEL 102
#define F_TIME_EQ 1145
#define ELIBEXEC 83
#define RWH_WRITE_LIFE_NOT_SET 0
#define FKCONSTR_MATCH_SIMPLE 's'
#define Anum_pg_class_relam 6
#define PG_DIAG_SOURCE_FILE 'F'
#define F_RECORD_LE 2985
#define F_TEXTIN 46
#define TransactionIdStore(xid,dest) (*(dest) = (xid))
#define F_RECORD_LT 2983
#define F_DTOI2 237
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define LocalTransactionIdIsValid(lxid) ((lxid) != InvalidLocalTransactionId)
#define HAVE__STATIC_ASSERT 1
#define HAVE_DECL_LLVMCREATEGDBREGISTRATIONLISTENER 1
#define __INT_FAST64_WIDTH__ 64
#define F_TIMESTAMP_CMP_TIMESTAMPTZ 2526
#define F_BOX_DIAGONAL 981
#define F_ACLREMOVE 1036
#define F_BPCHARLE 1050
#define INDEX_NULL_MASK 0x8000
#define SysCacheSize (USERMAPPINGUSERSERVER + 1)
#define AGTENTRY_IS_STRING 0x00000000
#define __SVE_VQ_MIN 1
#define UTIME_NOW ((1l << 30) - 1l)
#define MONEYARRAYOID 791
#define AmStartupProcess() (MyAuxProcType == StartupProcess)
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ERRCODE_NONSTANDARD_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','P','0','6')
#define SI_ASYNCIO SI_ASYNCIO
#define F_NAMEEQ 62
#define F_FLOAT4MI 205
#define F_TIMESTAMPTZTYPMODOUT 2908
#define __BYTE_ORDER __LITTLE_ENDIAN
#define TupIsNull(slot) ((slot) == NULL || (slot)->tts_isempty)
#define _BITS_UIO_LIM_H 1
#define F_PG_TYPEOF 1619
#define F_WINDOW_PERCENT_RANK 3103
#define ALIGNOF_SHORT 2
#define __HAVE_GENERIC_SELECTION 1
#define INT64_WIDTH 64
#define EADDRNOTAVAIL 99
#define ETIME 62
#define F_INET_RECV 2496
#define _NETDB_H 1
#define ResetPerTupleExprContext(estate) do { if ((estate)->es_per_tuple_exprcontext) ResetExprContext((estate)->es_per_tuple_exprcontext); } while (0)
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define FNONBLOCK O_NONBLOCK
#define F_TS_MATCH_TT 3760
#define F_TIME_SEND 2471
#define __FLT_DIG__ 6
#define NUMRANGEARRAYOID 3907
#define F_TIMETZ_HASH 1696
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define F_BTFLOAT4SORTSUPPORT 3132
#define ERRCODE_SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','1')
#define __FLT32_HAS_INFINITY__ 1
#define MEMUTILS_H 
#define INT_FAST32_MAX (9223372036854775807L)
#define F_BINARY_UPGRADE_SET_NEXT_PG_TYPE_OID 3582
#define TYPECACHE_RANGE_INFO 0x0800
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define lfourth_node(type,l) castNode(type, lfourth(l))
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define ANYENUMOID 3500
#define XLR_BLOCK_ID_ORIGIN 253
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define F_POINT_SLOPE 992
#define Anum_pg_class_relpages 9
#define IS_AG_DEFAULT_LABEL(x) (IS_DEFAULT_LABEL_EDGE(x) || IS_DEFAULT_LABEL_VERTEX(x))
#define Anum_pg_class_relispopulated 25
#define F_CASH_SEND 2493
#define _STATBUF_ST_RDEV 
#define __LDBL_REDIR_DECL(name) 
#define F_PATH_LENGTH 987
#define Anum_pg_index_indnkeyatts 4
#define F_JSONB_BOOL 3556
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define F_HASHINT8EXTENDED 442
#define NI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("NI_IDN_ALLOW_UNASSIGNED is deprecated") 64
#define F_NUMERIC_FAC 111
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define F_TSM_HANDLER_IN 3311
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define AmWalReceiverProcess() (MyAuxProcType == WalReceiverProcess)
#define BYTE_ORDER __BYTE_ORDER
#define AGTE_IS_BOOL_FALSE(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_BOOL_FALSE)
#define F_PG_CONTROL_INIT 3444
#define PTRDIFF_WIDTH __WORDSIZE
#define F_POINT_RIGHT 133
#define ULLONG_WIDTH 64
#define F_CIRCLE_CENTER 1416
#define XLogRecGetOrigin(decoder) ((decoder)->record_origin)
#define si_band _sifields._sigpoll.si_band
#define COMP_CRC32C(crc,data,len) ((crc) = pg_comp_crc32c((crc), (data), (len)))
#define F_FLT8_MUL_CASH 919
#define F_TO_DATE 1780
#define UINT8_MAX (255)
#define TIMESTAMP_NOEND(j) do {(j) = DT_NOEND;} while (0)
#define ERRCODE_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('2','2','0','0','1')
#define XLR_BLOCK_ID_DATA_SHORT 255
#define SOL_IUCV 277
#define _BITS_SIGACTION_H 1
#define LOCKDEFS_H_ 
#define F_TABLE_TO_XMLSCHEMA 2926
#define IPV6_RTHDR 57
#define STDIN_FILENO 0
#define SI_ASYNCNL SI_ASYNCNL
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define F_PG_REPLICATION_ORIGIN_XACT_SETUP 6010
#define MemSetAligned(start,val,len) do { long *_start = (long *) (start); int _val = (val); Size _len = (len); if ((_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_start, _val, _len); } while (0)
#define SpinLockAcquire(lock) S_LOCK(lock)
#define SECS_PER_DAY 86400
#define F_JSON_STRING_TO_TSVECTOR_BYID 4212
#define _T_SIZE_ 
#define F_TIMESTAMPTZ_LT_TIMESTAMP 2527
#define LLONG_MAX __LONG_LONG_MAX__
#define F_PG_REPLICATION_ORIGIN_SESSION_IS_SETUP 6008
#define IPV6_RECVHOPLIMIT 51
#define F_CHAR_TEXT 946
#define ERRCODE_WARNING MAKE_SQLSTATE('0','1','0','0','0')
#define ENOTRECOVERABLE 131
#define UINT_FAST8_MAX (255)
#define PF_ATMSVC 20
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define F_INT8AND 1904
#define ERRCODE_INVALID_PSTATEMENT_DEFINITION MAKE_SQLSTATE('4','2','P','1','4')
#define ITEMPTR_H 
#define XLogRecGetInfo(decoder) ((decoder)->decoded_record->xl_info)
#define QTW_IGNORE_JOINALIASES 0x04
#define __WNOTHREAD 0x20000000
#define __LC_NUMERIC 1
#define F_CHAREQ 61
#define F_PG_SLEEP 2626
#define HAVE_LIBPAM 1
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define AF_LLC PF_LLC
#define __INT64_TYPE__ long int
#define F_SEAL_SEAL 0x0001
#define ERRCODE_E_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','2')
#define EIO 5
#define NumericGetDatum(X) PointerGetDatum(X)
#define GetProcessingMode() Mode
#define UINT64_FORMAT "%" INT64_MODIFIER "u"
#define CLOCK_PROCESS_CPUTIME_ID 2
#define AGTYPE_CONTAINER_IS_OBJECT(agtc) (((agtc)->header & AGT_FOBJECT) != 0)
#define ITIMER_REAL ITIMER_REAL
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define ENETUNREACH 101
#define EXDEV 18
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define va_start(v,l) __builtin_va_start(v,l)
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define F_ARRAY_AGG_ARRAY_TRANSFN 4051
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define F_MODE_FINAL 3985
#define UINT32_C(c) c ## U
#define BGWORKER_H 
#define HAVE_INT64_TIMESTAMP 
#define F_TIMESTAMPTYPMODOUT 2906
#define F_TEXTSEND 2415
#define F_REGCONFIGRECV 3738
#define F_NUMERIC_POLY_VAR_POP 3390
#define F_HASHCHAR 454
#define F_CHARGE 74
#define F_DATE_GE_TIMESTAMP 2342
#define TYPCATEGORY_ENUM 'E'
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define PG_GETARG_ACL_P(n) DatumGetAclP(PG_GETARG_DATUM(n))
#define F_CHARGT 73
#define ULONG_WIDTH __WORDSIZE
#define PG_RETURN_NULL() do { fcinfo->isnull = true; return (Datum) 0; } while (0)
#define ERRCODE_INVALID_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','0','C')
#define FIELDNO_FUNCTIONCALLINFODATA_ARG 6
#define PF_PACKET 17
#define HAVE__BUILTIN_BSWAP16 1
#define MSG_SYN MSG_SYN
#define HAVE_SETSID 1
#define F_PHRASETO_TSQUERY_BYID 5006
#define __INO64_T_TYPE __UQUAD_TYPE
#define INSTR_TIME_SET_CURRENT(t) ((void) clock_gettime(PG_INSTR_CLOCK, &(t)))
#define _POSIX_V6_ILP32_OFF32 -1
#define MultiXactOffsetControlLock (&MainLWLockArray[14].lock)
#define DELAY_CHKPT_COMPLETE (1<<1)
#define F_HASHINT2EXTENDED 441
#define IS_NONWINDOWS_DIR_SEP(ch) ((ch) == '/')
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define F_ARRAY_PREPEND 379
#define _POSIX_TRACE -1
#define O_TRUNC 01000
#define __FP_FAST_FMAF32 1
#define F_TS_HEADLINE_JSONB 4204
#define BKI_DEFAULT(value) 
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define HAVE_CLOCK_GETTIME 1
#define __WINT_TYPE__ unsigned int
#define MB_LEN_MAX 16
#define _POSIX_FSYNC 200809L
#define __SIZEOF_SHORT__ 2
#define F_SEAL_GROW 0x0004
#define IS_HIGHBIT_SET(ch) ((unsigned char)(ch) & HIGHBIT)
#define Anum_ag_label_kind 4
#define STDOUT_FILENO 1
#define SEM_VALUE_MAX (2147483647)
#define HIGHBIT (0x80)
#define FALLOC_FL_INSERT_RANGE 0x20
#define F_PG_DEPENDENCIES_OUT 3405
#define F_PG_LSN_GE 3234
#define __intptr_t_defined 
#define TSRANGEARRAYOID 3909
#define F_PG_LOGICAL_SLOT_GET_BINARY_CHANGES 3783
#define outerPlan(node) (((Plan *)(node))->lefttree)
#define SOL_PACKET 263
#define F_REGEXNESEL 1821
#define F_PG_LSN_GT 3235
#define F_BINARY_UPGRADE_SET_RECORD_INIT_PRIVS 4083
#define HAVE__BUILTIN_BSWAP32 1
#define heap_close(r,l) relation_close(r,l)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define F_HAS_TABLESPACE_PRIVILEGE_NAME_NAME 2390
#define HAVE_STRERROR_R 1
#define F_ENUM_SEND 3533
#define ERRCODE_ADMIN_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','1')
#define ACLITEM_SET_PRIVS(item,privs) ((item).ai_privs = ((item).ai_privs & ~((AclMode) 0xFFFF)) | ((AclMode) (privs) & 0xFFFF))
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define SIGPOLL 29
#define F_HASHFLOAT8 452
#define XLR_RMGR_INFO_MASK 0xF0
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define F_DATABASE_TO_XML_AND_XMLSCHEMA 2938
#define ERRCODE_UNDEFINED_PSTATEMENT MAKE_SQLSTATE('2','6','0','0','0')
#define AGTENTRY_TYPEMASK 0x70000000
#define F_FDW_HANDLER_IN 3116
#define F_NAME_BPCHAR 408
#define CYPHER_TARGET_NODE_IS_VAR 0x0004
#define F_ROW_TO_JSON 3155
#define F_I4TOI2 314
#define SIGCLD SIGCHLD
#define ENOSPC 28
#define ERRCODE_UNTRANSLATABLE_CHARACTER MAKE_SQLSTATE('2','2','P','0','5')
#define HEAP_DEFAULT_FILLFACTOR 100
#define S_UNLOCK(lock) __sync_lock_release(lock)
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define AG_AG_CACHE_H 
#define SNAPSHOT_H 
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define HAVE_CRYPT_H 1
#define ERRCODE_E_R_I_E_SRF_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','2')
#define LABEL_KIND_EDGE 'e'
#define F_GENERATE_SUBSCRIPTS_NODIR 1192
#define RTKNNSearchStrategyNumber 15
#define F_WEBSEARCH_TO_TSQUERY_BYID 5007
#define F_INTERVAL_TRUNC 1218
#define F_JSON_OBJECT_KEYS 3957
#define __USE_POSIX199309 1
#define SO_RCVBUF 8
#define VARDATA_SHORT(PTR) VARDATA_1B(PTR)
#define HAVE_MKDTEMP 1
#define AmWalWriterProcess() (MyAuxProcType == WalWriterProcess)
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define F_PG_GET_EXPR 1716
#define F_VOID_RECV 3120
#define _FCNTL_H 1
#define F_PG_REPLICATION_ORIGIN_OID 6005
#define PG_HAVE_ATOMIC_U64_SUPPORT 
#define F_MAKE_TIMESTAMP 3461
#define HAVE__BUILTIN_BSWAP64 1
#define F_NUMERIC_MUL 1726
#define BUFFERALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_BUFFER, (LEN))
#define F_PATH_ISOPEN 1431
#define SIGTSTP 20
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define F_NUMERIC_LN 1734
#define PG_CATCH() } else { PG_exception_stack = save_exception_stack; error_context_stack = save_context_stack
#define MaxHeapAttributeNumber 1600
#define ERRCODE_DUPLICATE_OBJECT MAKE_SQLSTATE('4','2','7','1','0')
#define F_CSTRING_RECV 2500
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define F_HAS_TYPE_PRIVILEGE_ID_NAME 3140
#define PageSetFull(page) (((PageHeader) (page))->pd_flags |= PD_PAGE_FULL)
#define F_TO_TSVECTOR 3749
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define __LDBL_MAX_10_EXP__ 4932
#define _POSIX_SEMAPHORES 200809L
#define __W_CONTINUED 0xffff
#define __ATOMIC_RELAXED 0
#define QTW_IGNORE_RT_SUBQUERIES 0x01
#define ACLITEMARRAYOID 1034
#define llast_node(type,l) castNode(type, llast(l))
#define F_BTNAMESORTSUPPORT 3135
#define CURSOR_OPT_NO_SCROLL 0x0004
#define HAVE__VA_ARGS 1
#define ACL_MODECHG_DEL 2
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define F_PG_LSN_LE 3232
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define F_NETWORK_SUP 929
#define RELKIND_INDEX 'i'
#define ERRCODE_INVALID_CURSOR_NAME MAKE_SQLSTATE('3','4','0','0','0')
#define F_RELTIMELT 259
#define SA_ONESHOT SA_RESETHAND
#define F_BRIN_DESUMMARIZE_RANGE 4014
#define _XOPEN_VERSION 700
#define SCM_TIMESTAMPING_OPT_STATS 54
#define ERRCODE_T_R_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('4','0','0','0','2')
#define F_BTINT42CMP 2191
#define AGT_GIN_FLAG_KEY 0x01
#define F_FLOAT84EQ 305
#define HAVE_GCC__SYNC_INT64_CAS 1
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define F_SPG_QUAD_LEAF_CONSISTENT 4022
#define EDOM 33
#define XATTR_NAME_MAX 255
#define F_DSQRT 230
#define F_AGGREGATE_DUMMY 2050
#define INT32_WIDTH 32
#define F_OIDVECTORLE 678
#define ENOSTR 60
#define F_TIDIN 48
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define att_align_datum(cur_offset,attalign,attlen,attdatum) ( ((attlen) == -1 && VARATT_IS_SHORT(DatumGetPointer(attdatum))) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define F_NAMEICNLIKE 1636
#define QTW_EXAMINE_SORTGROUP 0x80
#define SIOCSPGRP 0x8902
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define F_PG_STAT_GET_FUNCTION_TOTAL_TIME 2979
#define SetProcessingMode(mode) do { AssertArg((mode) == BootstrapProcessing || (mode) == InitProcessing || (mode) == NormalProcessing); Mode = (mode); } while(0)
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define F_POSITIONSEL 1300
#define Float8GetDatumFast(X) Float8GetDatum(X)
#define ERRCODE_ASSERT_FAILURE MAKE_SQLSTATE('P','0','0','0','4')
#define SHM_TOC_H 
#define SIGKILL 9
#define F_PG_LSN_NE 3236
#define TYPCATEGORY_TIMESPAN 'T'
#define PG_GETARG_VARCHAR_P(n) DatumGetVarCharP(PG_GETARG_DATUM(n))
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define F_FLOAT84GE 310
#define ECHRNG 44
#define _SC_REGEXP _SC_REGEXP
#define F_FLOAT84GT 309
#define EHOSTDOWN 112
#define _LFS_LARGEFILE 1
#define InvalidBlockNumber ((BlockNumber) 0xFFFFFFFF)
#define F_TIME_CMP 1107
#define STA_CLK 0x8000
#define F_POLY_DISTANCE 729
#define __wchar_t__ 
#define FrozenTransactionId ((TransactionId) 2)
#define HeapTupleHeaderSetOid(tup,oid) do { Assert((tup)->t_infomask & HEAP_HASOID); *((Oid *) ((char *)(tup) + (tup)->t_hoff - sizeof(Oid))) = (oid); } while (0)
#define F_TIMESTAMPTZ_OUT 1151
#define SEEK_END 2
#define OffsetNumberPrev(offsetNumber) ((OffsetNumber) (-1 + (offsetNumber)))
#define EXEC_FLAG_WITHOUT_OIDS 0x0040
#define rt_fetch(rangetable_index,rangetable) ((RangeTblEntry *) list_nth(rangetable, (rangetable_index)-1))
#define USE_SSL 
#define HeapTupleHeaderClearHotUpdated(tup) ( (tup)->t_infomask2 &= ~HEAP_HOT_UPDATED )
#define _POSIX2_LINE_MAX 2048
#define F_PG_IDENTIFY_OBJECT 3839
#define PALLOC_H 
#define LOCK_MANAGER_LWLOCK_OFFSET (BUFFER_MAPPING_LWLOCK_OFFSET + NUM_BUFFER_PARTITIONS)
#define _ISOC99_SOURCE 1
#define ERRCODE_FDW_FUNCTION_SEQUENCE_ERROR MAKE_SQLSTATE('H','V','0','1','0')
#define DatumGetName(X) ((Name) DatumGetPointer(X))
#define F_RI_FKEY_CHECK_INS 1644
#define F_RECORD_OUT 2291
#define ENOLCK 37
#define HEAP_ONLY_TUPLE 0x8000
#define COMMERROR LOG_SERVER_ONLY
#define PageHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags & PD_HAS_FREE_LINES)
#define ItemPointerGetOffsetNumberNoCheck(pointer) ( (pointer)->ip_posid )
#define MSG_DONTWAIT MSG_DONTWAIT
#define RelationGetToastTupleTarget(relation,defaulttarg) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->toast_tuple_target : (defaulttarg))
#define JULIAN_MAXDAY (3)
#define F_INTERVAL_GE 1166
#define F_JSONB_STRING_TO_TSVECTOR_BYID 4211
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define F_HAS_SCHEMA_PRIVILEGE_ID_NAME 2270
#define F_JSONB_TO_RECORD 3490
#define _STDDEF_H_ 
#define _XOPEN_UNIX 1
#define HAVE_UUID_E2FS 1
#define __LC_NAME 8
#define HEAPTUPLESIZE MAXALIGN(sizeof(HeapTupleData))
#define F_NUMERIC_STDDEV_POP 2596
#define ACL_USAGE (1<<8)
#define MAXALIGN64(LEN) TYPEALIGN64(MAXIMUM_ALIGNOF, (LEN))
#define USHRT_WIDTH 16
#define F_SHA256_BYTEA 3420
#define PageAddItem(page,item,size,offsetNumber,overwrite,is_heap) PageAddItemExtended(page, item, size, offsetNumber, ((overwrite) ? PAI_OVERWRITE : 0) | ((is_heap) ? PAI_IS_HEAP : 0))
#define label_exists(label_name,label_graph) OidIsValid(get_label_oid(label_name, label_graph))
#define be64toh(x) __bswap_64 (x)
#define ENOSYS 38
#define F_POINT_HORIZ 990
#define F_ACLINSERT 1035
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define SA_RESTART 0x10000000
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define ERRCODE_SAVEPOINT_EXCEPTION MAKE_SQLSTATE('3','B','0','0','0')
#define EXE ""
#define UUIDARRAYOID 2951
#define MAXIMUM_ALIGNOF 8
#define STRATNUM_H 
#define F_TIMETZ_IZONE 2038
#define AI_PASSIVE 0x0001
#define F_TIMESTAMP_LT_DATE 2364
#define DT_DIR DT_DIR
#define F_RPAD 874
#define F_INTERVAL_IN 1160
#define __UINT_LEAST64_TYPE__ long unsigned int
#define ERRCODE_ARRAY_SUBSCRIPT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define FIELDNO_TUPLETABLESLOT_VALUES 10
#define Anum_ag_label_vertex_table_properties 2
#define PF_RDS 21
#define F_PG_STAT_GET_BGWRITER_BUF_WRITTEN_CHECKPOINTS 2771
#define F_FLOAT84LE 308
#define WL_TIMEOUT (1 << 3)
#define pg_hton64(x) pg_bswap64(x)
#define FFSYNC O_FSYNC
#define _BITS_LOCALE_H 1
#define F_CSTRING_IN 2292
#define ARR_DATA_OFFSET(a) (ARR_HASNULL(a) ? (a)->dataoffset : ARR_OVERHEAD_NONULLS(ARR_NDIM(a)))
#define F_PG_LOGICAL_SLOT_GET_CHANGES 3782
#define __BITS_PER_LONG 64
#define F_PG_READ_BINARY_FILE_OFF_LEN 3827
#define DEFAULT_PGSOCKET_DIR "/var/run/postgresql"
#define va_arg(v,l) __builtin_va_arg(v,l)
#define TYPECACHE_EQ_OPR 0x0001
#define TUPLESORT_H 
#define F_NUMERIC_TRUNC 1709
#define VARATT_IS_EXTERNAL_EXPANDED_RO(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RO)
#define F_FLOAT84MI 286
#define NODES_H 
#define VARATT_IS_EXTERNAL_EXPANDED_RW(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RW)
#define _THREAD_SHARED_TYPES_H 1
#define Anum_pg_type_typmodin 18
#define AT_REMOVEDIR 0x200
#define entry_id_is_valid(id) (id >= ENTRY_ID_MIN && id <= ENTRY_ID_MAX)
#define ERRCODE_GROUPING_ERROR MAKE_SQLSTATE('4','2','8','0','3')
#define _SC_TIMERS _SC_TIMERS
#define OidFunctionCall0(functionId) OidFunctionCall0Coll(functionId, InvalidOid)
#define OidFunctionCall1(functionId,arg1) OidFunctionCall1Coll(functionId, InvalidOid, arg1)
#define OidFunctionCall2(functionId,arg1,arg2) OidFunctionCall2Coll(functionId, InvalidOid, arg1, arg2)
#define OidFunctionCall4(functionId,arg1,arg2,arg3,arg4) OidFunctionCall4Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4)
#define OidFunctionCall6(functionId,arg1,arg2,arg3,arg4,arg5,arg6) OidFunctionCall6Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define OidFunctionCall8(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) OidFunctionCall8Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define Anum_pg_type_typdefault 29
#define F_MACADDR8_RECV 3446
#define Anum_ag_label_edge_table_id 1
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define F_SPG_BOX_QUAD_PICKSPLIT 5014
#define PLANNODES_H 
#define F_MACADDR_RECV 2494
#define AT_STATX_SYNC_TYPE 0x6000
#define F_TIMESTAMP_GE_TIMESTAMPTZ 2524
#define F_GENERATE_SERIES_TIMESTAMPTZ 939
#define ItemIdIsValid(itemId) PointerIsValid(itemId)
#define F_CURRENT_USER 710
#define F_NAMELIKE 858
#define F_WINDOW_LEAD 3109
#define F_WINDOW_NTILE 3105
#define F_NUMERIC_ACCUM_INV 3548
#define F_INTERVAL_LT 1164
#define ENOTSUP EOPNOTSUPP
#define OPEN_SYNC_FLAG O_SYNC
#define IP_CHECKSUM 23
#define F_JSON_SEND 324
#define ERRCODE_E_R_E_CONTAINING_SQL_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','1')
#define F_TEXT_SMALLER 459
#define __kernel_old_uid_t __kernel_old_uid_t
#define __FP_FAST_FMAF32x 1
#define TAS(lock) tas(lock)
#define R_OK 4
#define HEAP_TUPLE_HAS_MATCH HEAP_ONLY_TUPLE
#define WALBufMappingLock (&MainLWLockArray[7].lock)
#define _BITS_SIGTHREAD_H 1
#define Anum_ag_label_seq_name 6
#define F_BPCHAR_LARGER 1063
#define __FLT16_HAS_DENORM__ 1
#define F_JSONB_EXISTS_ANY 4048
#define VOIDOID 2278
#define SIZEOF_LONG 8
#define toascii_l(c,l) __toascii_l ((c), (l))
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define HAVE_NET_IF_H 1
#define RowShareLock 2
#define AF_NETLINK PF_NETLINK
#define __INT_FAST8_WIDTH__ 8
#define GRAPHID_GET_DATUM(x) Int64GetDatum(x)
#define F_NETWORK_EQ 920
#define AGTYPE_CONTAINER_IS_SCALAR(agtc) (((agtc)->header & AGT_FSCALAR) != 0)
#define RTOldContainsStrategyNumber 13
#define F_PG_TABLESPACE_DATABASES 2556
#define SET_LOCKTAG_TRANSACTION(locktag,xid) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_TRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define F_TEXT_LT 740
#define ANYOID 2276
#define F_HASH_ACLITEM 329
#define F_TO_REGNAMESPACE 4086
#define F_TSVECTOR_DELETE_ARR 3323
#define IndexScanIsValid(scan) PointerIsValid(scan)
#define CLD_DUMPED CLD_DUMPED
#define INCLUDE_NODE_IN_JOIN_TREE(path,node) (path->var_name || node->name || node->props)
#define RTAdjacentStrategyNumber 17
#define FKCONSTR_MATCH_PARTIAL 'p'
#define HEAP_HASEXTERNAL 0x0004
#define F_WINDOW_LAG 3106
#define FATAL 21
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define F_SESSION_USER 746
#define NON_EXEC_STATIC static
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define F_LSEG_SEND 2481
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __ULONG32_TYPE unsigned int
#define F_BTOIDVECTORCMP 404
#define F_GTSQUERY_PICKSPLIT 3697
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define STA_PPSJITTER 0x0200
#define F_MACADDR8_NOT 4120
#define _PATH_HOSTS "/etc/hosts"
#define F_CIDRECV 2442
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define FOPEN_MAX 16
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK 3
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define F_PG_STAT_GET_XACT_FUNCTION_TOTAL_TIME 3047
#define __suseconds_t_defined 
#define SPLICE_F_NONBLOCK 2
#define HEAP_XMIN_INVALID 0x0200
#define F_GIST_BOX_UNION 2583
#define SIGFPE 8
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define TwoPhaseStateLock (&MainLWLockArray[18].lock)
#define __off_t_defined 
#define SK_SEARCHNULL 0x0040
#define F_BYTEACAT 2011
#define SO_CNX_ADVICE 53
#define HeapTupleSetHotUpdated(tuple) HeapTupleHeaderSetHotUpdated((tuple)->t_data)
#define F_ACLCONTAINS 1037
#define DTTOIF(dirtype) ((dirtype) << 12)
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define F_PG_NDISTINCT_IN 3355
#define PF_XDP 44
#define F_ANYNONARRAY_IN 2777
#define SO_NOFCS 43
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define HAVE_GETOPT_LONG 1
#define RelationGetParallelWorkers(relation,defaultpw) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->parallel_workers : (defaultpw))
#define SIGPWR 30
#define F_XPATH 2931
#define F_TEXTTOXML 2896
#define F_DRANDOM 1598
#define FRAMEOPTION_START_CURRENT_ROW 0x00200
#define F_IN_RANGE_INT4_INT4 4128
#define XLogArchivingAlways() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode == ARCHIVE_MODE_ALWAYS)
#define _GCC_SIZE_T 
#define F_JSONB_RECV 3805
#define PROC_IN_LOGICAL_DECODING 0x10
#define F_SHOW_ALL_SETTINGS 2084
#define F_INET_SPG_CONFIG 3795
#define __U64_TYPE unsigned long int
#define Anum_pg_attribute_attoptions 22
#define L_SET SEEK_SET
#define SO_PEERGROUPS 59
#define _LIBC_LIMITS_H_ 1
#define __USE_XOPEN2K8XSI 1
#define F_MACADDR_SORTSUPPORT 3359
#define SO_SNDTIMEO_OLD 21
#define MemoryContextResetAndDeleteChildren(ctx) MemoryContextReset(ctx)
#define ERRCODE_CRASH_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','2')
#define F_INT4_AVG_COMBINE 3324
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define PG_GETARG_ACL_P_COPY(n) DatumGetAclPCopy(PG_GETARG_DATUM(n))
#define INDEX_AM_HANDLEROID 325
#define PG_GETARG_BPCHAR_P_COPY(n) DatumGetBpCharPCopy(PG_GETARG_DATUM(n))
#define F_CASH_PL 894
#define _POSIX_V6_ILP32_OFFBIG -1
#define slist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).cur = (lhead)->head.next; (iter).cur != NULL; (iter).cur = (iter).cur->next)
#define ITIMER_PROF ITIMER_PROF
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define HAVE_LIBXML2 1
#define DatumGetBool(X) ((bool) ((X) != 0))
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define F_BTINT28CMP 2192
#define F_CLOSE_SL 962
#define F_SCALARLEJOINSEL 386
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define F_ARRAY_POSITIONS 3279
#define PG_ATTRIBUTE_H 
#define tuplestore_donestoring(state) ((void) 0)
#define BGWORKER_CLASS_PARALLEL 0x0010
#define F_JSON_OBJECT_AGG_FINALFN 3196
#define HAVE_SECURITY_PAM_APPL_H 1
#define PG_ARGISNULL(n) (fcinfo->argnull[n])
#define F_PG_TABLESPACE_SIZE_OID 2322
#define F_BOX_HEIGHT 977
#define SIOCGSTAMPNS_OLD 0x8907
#define IP_MINTTL 21
#define TYPEALIGN(ALIGNVAL,LEN) (((uintptr_t) (LEN) + ((ALIGNVAL) - 1)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define DATEORDER_MDY 2
#define F_SHLCK 8
#define F_PG_STAT_GET_SNAPSHOT_TIMESTAMP 3788
#define F_LTRIM 875
#define F_HAS_COLUMN_PRIVILEGE_ID_ID_ATTNUM 3019
#define __ONCE_FLAG_INIT { 0 }
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define END_CRIT_SECTION() do { Assert(CritSectionCount > 0); CritSectionCount--; } while(0)
#define __LC_CTYPE 0
#define F_FLOAT8_AVG 1830
#define F_PG_STAT_GET_DB_CONFLICT_SNAPSHOT 3067
#define MultiXactGenLock (&MainLWLockArray[13].lock)
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define F_CASH_DIV_INT4 865
#define F_CASH_DIV_INT8 3345
#define S_IWOTH (S_IWGRP >> 3)
#define F_TIDLE 2793
#define F_INT4ABS 1251
#define REGOPERARRAYOID 2208
#define F_BTCHARCMP 358
#define SO_TIMESTAMP_NEW 63
#define isascii_l(c,l) __isascii_l ((c), (l))
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define sigcontext_struct sigcontext
#define F_TIDSMALLER 2796
#define PARSER_FUNC_H 
#define ACL_ALL_RIGHTS_DATABASE (ACL_CREATE|ACL_CREATE_TEMP|ACL_CONNECT)
#define PG_DIAG_SEVERITY 'S'
#define AGTENTRY_IS_NUMERIC 0x10000000
#define AF_DECnet PF_DECnet
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define ERRCODE_INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','4')
#define __LONG_WIDTH__ 64
#define NodeSetTag(nodeptr,t) (((Node*)(nodeptr))->type = (t))
#define __STDLIB_MB_LEN_MAX 16
#define FIELDNO_TUPLETABLESLOT_TUPLEDESCRIPTOR 6
#define F_HAS_COLUMN_PRIVILEGE_NAME_ID_NAME 3014
#define F_PG_IS_IN_RECOVERY 3810
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define SIG_ERR ((__sighandler_t) -1)
#define AI_NUMERICHOST 0x0004
#define ereport_domain(elevel,domain,rest) do { if (errstart(elevel, __FILE__, __LINE__, PG_FUNCNAME_MACRO, domain)) errfinish rest; if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define DSA_ALLOC_NO_OOM 0x02
#define F_INT24NE 164
#define F_PG_LOCK_STATUS 1371
#define F_GIN_EXTRACT_TSQUERY_OLDSIG 3791
#define XLogStandbyInfoActive() (wal_level >= WAL_LEVEL_REPLICA)
#define F_OPAQUE_OUT 2307
#define __INO_T_MATCHES_INO64_T 1
#define F_OIDGT 1638
#define FPE_FLTRES FPE_FLTRES
#define FMGROIDS_H 
#define PG_DATA_CHECKSUM_VERSION 1
#define PG_DIAG_SOURCE_LINE 'L'
#define ENOPROTOOPT 92
#define SearchSysCacheExists1(cacheId,key1) SearchSysCacheExists(cacheId, key1, 0, 0, 0)
#define SearchSysCacheExists2(cacheId,key1,key2) SearchSysCacheExists(cacheId, key1, key2, 0, 0)
#define TYPEALIGN64(ALIGNVAL,LEN) (((uint64) (LEN) + ((ALIGNVAL) - 1)) & ~((uint64) ((ALIGNVAL) - 1)))
#define F_DATE_EQ 1086
#define F_DATAND 2733
#define DO_AGGSPLIT_DESERIALIZE(as) (((as) & AGGSPLITOP_DESERIALIZE) != 0)
#define GRAPHIDOID get_GRAPHIDOID()
#define PG_GETARG_VARLENA_P(n) PG_DETOAST_DATUM(PG_GETARG_DATUM(n))
#define F_FLOAT4OUT 201
#define DELAY_CHKPT_START (1<<0)
#define EAI_NOTCANCELED -102
#define SO_ATTACH_BPF 50
#define F_UNKNOWNOUT 110
#define HAVE_DECL_LLVMGETHOSTCPUNAME 1
#define __GLIBC_USE_IEC_60559_EXT 1
#define F_JSON_OBJECT_AGG_TRANSFN 3180
#define FMGR_H 
#define F_HYPOTHETICAL_PERCENT_RANK_FINAL 3989
#define LOCKOPTIONS_H 
#define __HAVE_FLOAT128 1
#define RelationHasCheckOption(relation) ((relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option_offset != 0)
#define F_INT24MI 182
#define UINT_LEAST32_MAX (4294967295U)
#define AGTENTRY_IS_AGTYPE 0x70000000
#define EMFILE 24
#define F_OIDIN 1798
#define ARR_LBOUND(a) ((int *) (((char *) (a)) + sizeof(ArrayType) + sizeof(int) * ARR_NDIM(a)))
#define MultiXactTruncationLock (&MainLWLockArray[41].lock)
#define RelationIsMapped(relation) ((relation)->rd_rel->relfilenode == InvalidOid)
#define HAVE_NETINET_TCP_H 1
#define SO_BUSY_POLL_BUDGET 70
#define CLOG_TRUNCATE 0x10
#define isprint_l(c,l) __isprint_l ((c), (l))
#define IPV6_HOPLIMIT 52
#define MACADDR8ARRAYOID 775
#define F_TIMESTAMP_MI_INTERVAL 2033
#define SA_NODEFER 0x40000000
#define F_JSONB_ARRAY_LENGTH 3207
#define F_SETOWN_EX __F_SETOWN_EX
#define SK_ROW_HEADER 0x0004
#define F_TINTERVALLENEQ 266
#define Anum_pg_type_typstorage 22
#define __lldiv_t_defined 1
#define POLL_PRI POLL_PRI
#define RelationGetTargetBlock(relation) ( (relation)->rd_smgr != NULL ? (relation)->rd_smgr->smgr_targblock : InvalidBlockNumber )
#define F_PG_COLLATION_ACTUAL_VERSION 3448
#define SIGILL 4
#define MSG_EOR MSG_EOR
#define DATATYPE_TIMESTAMP_H 
#define dgettext(domainname,msgid) dcgettext (domainname, msgid, LC_MESSAGES)
#define VARSIZE_ANY(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR) : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR) : VARSIZE_4B(PTR)))
#define DN_MULTISHOT 0x80000000
#define PG_HAVE_ATOMIC_FETCH_SUB_U32 
#define IndexRelationId 2610
#define ItemIdHasStorage(itemId) ((itemId)->lp_len != 0)
#define DsaPointerIsValid(x) ((x) != InvalidDsaPointer)
#define ENOBUFS 105
#define RTSubStrategyNumber 24
#define F_DATE_IN 1084
#define REFCURSOROID 1790
#define F_SPG_KD_CONFIG 4023
#define _SC_INT_MIN _SC_INT_MIN
#define RowMarkRequiresRowShareLock(marktype) ((marktype) <= ROW_MARK_KEYSHARE)
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define F_OIDLE 717
#define F_WINDOW_ROW_NUMBER 3100
#define oid_hash uint32_hash
#define Anum_pg_class_reltablespace 8
#define IN_MULTICAST(a) IN_CLASSD(a)
#define F_OIDLT 716
#define F_FLOAT84LT 307
#define F_REGEXP_MATCHES 2764
#define F_BPCHAR_NAME 409
#define dsa_allocate0(area,size) dsa_allocate_extended(area, size, DSA_ALLOC_ZERO)
#define F_NAMELE 656
#define SYSATTR_H 
#define F_TEXT_CONCAT 3058
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define __SIZEOF_WCHAR_T__ 4
#define NormalTransactionIdPrecedes(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) < 0)
#define SIGINT 2
#define F_TSM_SYSTEM_HANDLER 3314
#define F_BYTEACMP 1954
#define Anum_pg_type_typoutput 15
#define EFAULT 14
#define F_PG_STAT_GET_BACKEND_START 1391
#define SpinLockRelease(lock) S_UNLOCK(lock)
#define F_TSM_HANDLER_OUT 3312
#define ACL_INSERT_CHR 'a'
#define Anum_pg_index_indisexclusion 7
#define OIDVECTOROID 30
#define F_UNIQUE_KEY_RECHECK 1250
#define PF_KCM 41
#define STATUS_OK (0)
#define F_LANGUAGE_HANDLER_IN 2302
#define REGTYPEOID 2206
#define SIGIOT SIGABRT
#define WORD_BIT 32
#define POINTARRAYOID 1017
#define F_HASH_RANGE 3902
#define F_TSQUERY_AND 3669
#define SCM_TIMESTAMP SO_TIMESTAMP
#define EWOULDBLOCK EAGAIN
#define FRAMEOPTION_END_OFFSET_PRECEDING 0x01000
#define F_ACLEXPLODE 1689
#define HAVE_RINT 1
#define PG_HAVE_ATOMIC_FETCH_SUB_U64 
#define F_PG_ADVISORY_LOCK_SHARED_INT4 2887
#define DN_CREATE 0x00000004
#define F_PG_ADVISORY_LOCK_SHARED_INT8 2881
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define F_PG_REPLICATION_ORIGIN_ADVANCE 6012
#define F_DATE_LE 1088
#define F_CASH_OUT 887
#define F_NETWORK_BROADCAST 698
#define S_IXGRP (S_IXUSR >> 3)
#define ERRCODE_FDW_INVALID_DESCRIPTOR_FIELD_IDENTIFIER MAKE_SQLSTATE('H','V','0','9','1')
#define F_DATE_LT 1087
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define __ATOMIC_CONSUME 1
#define CIDARRAYOID 1012
#define SO_TIMESTAMPING_NEW 65
#define AG_RETURN_AGTYPE_P(x) PG_RETURN_POINTER(x)
#define F_ARRAY_IN 750
#define F_PATH_SEND 2483
#define sigev_notify_function _sigev_un._sigev_thread._function
#define F_BYTEA_STRING_AGG_TRANSFN 3543
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define F_DATE_MI 1140
#define PF_KEY 15
#define HeapTupleHeaderSetTypeId(tup,typeid) ( (tup)->t_choice.t_datum.datum_typeid = (typeid) )
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define SK_ORDER_BY 0x0100
#define F_JSONB_STRING_TO_TSVECTOR 4209
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define F_INT48NE 853
#define TSVECTORARRAYOID 3643
#define F_BOOLLE 1691
#define SOMAXCONN 4096
#define HAVE_GETRUSAGE 1
#define ACLITEM_ALL_PRIV_BITS ((AclMode) 0xFFFF)
#define F_TSVECTOR_GT 3621
#define DSA_ALLOC_ZERO 0x04
#define ILL_PRVOPC ILL_PRVOPC
#define _XOPEN_ENH_I18N 1
#define F_DATE_NE 1091
#define F_PG_POSTMASTER_START_TIME 2560
#define ERRCODE_INVALID_PASSWORD MAKE_SQLSTATE('2','8','P','0','1')
#define INT2VECTOROID 22
#define REGPROCARRAYOID 1008
#define type_is_array_domain(typid) (get_base_element_type(typid) != InvalidOid)
#define ERRCODE_FDW_UNABLE_TO_CREATE_REPLY MAKE_SQLSTATE('H','V','0','0','M')
#define _STDINT_H 1
#define __FILE_defined 1
#define F_TIMESTAMP_AGE 2058
#define IN_CLASSC_NSHIFT 8
#define PG_GETARG_TEXT_P_COPY(n) DatumGetTextPCopy(PG_GETARG_DATUM(n))
#define RelationGetForm(relation) ((relation)->rd_rel)
#define F_SCHEMA_TO_XML_AND_XMLSCHEMA 2935
#define F_FLOAT4ABS 207
#define F_INT2EQ 63
#define F_TIMESTAMPTZ_LE_DATE 2378
#define NoLock 0
#define PG_HAVE_ATOMIC_SUB_FETCH_U32 
#define SEGV_ADIPERR SEGV_ADIPERR
#define F_DIST_PPOLY 3275
#define F_DTAN 1606
#define S_ISUID __S_ISUID
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define LC_NAME __LC_NAME
#define HAVE_DECL_FDATASYNC 1
#define F_PG_DESCRIBE_OBJECT 3537
#define POLL_IN POLL_IN
#define _DIRENT_H 1
#define ERRCODE_INVALID_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','1','9')
#define _LIMITS_H___ 
#define F_SPG_RANGE_QUAD_LEAF_CONSISTENT 3473
#define F_JSONB_CMP 4044
#define PageSizeIsValid(pageSize) ((pageSize) == BLCKSZ)
#define INT64_FORMAT "%" INT64_MODIFIER "d"
#define F_HAS_FUNCTION_PRIVILEGE_ID 2261
#define AG_VERTEX_COLNAME_ID "id"
#define F_JSON_ARRAY_LENGTH 3956
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define F_LINE_PARALLEL 1412
#define PG_GETARG_CSTRING(n) DatumGetCString(PG_GETARG_DATUM(n))
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define F_INT2GE 151
#define SI_TIMER SI_TIMER
#define __LC_MONETARY 4
#define VARDATA_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_data)
#define LOG_SERVER_ONLY 16
#define F_INT2GT 146
#define USE_DSM_SYSV 
#define PG_RETURN_HEAPTUPLEHEADER(x) return HeapTupleHeaderGetDatum(x)
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define F_TIMESTAMPTZ_LE_TIMESTAMP 2528
#define F_I2TOI4 313
#define ELIBMAX 82
#define __sigstack_defined 1
#define F_INTERVAL_DIV 1326
#define INFO 17
#define SPLICE_F_MORE 4
#define FRAMEOPTION_END_UNBOUNDED_FOLLOWING 0x00100
#define _ISOC2X_SOURCE 1
#define INTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_INT, (LEN))
#define MaxTransactionIdAttributeNumber (-5)
#define INVALID_ENTRY_ID INT64CONST(0)
#define BKI_SCHEMA_MACRO 
#define InvalidXLogRecPtr 0
#define F_FORMAT_TYPE 1081
#define TopSubTransactionId ((SubTransactionId) 1)
#define __ino64_t_defined 
#define PG_UINT32_MAX (0xFFFFFFFFU)
#define F_BOX_GE 126
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define AF_ISDN PF_ISDN
#define F_XML_IN 2893
#define Natts_pg_class 33
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define F_POLY_PATH 1447
#define F_PG_LAST_WAL_REPLAY_LSN 3821
#define F_EVENT_TRIGGER_OUT 3595
#define DatumGetTextPSlice(X,m,n) ((text *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define VARCHARARRAYOID 1015
#define XIDOID 28
#define IPV6_MULTICAST_LOOP 19
#define F_GIST_BOX_PENALTY 2581
#define dsa_pointer_atomic_read pg_atomic_read_u64
#define __ATOMIC_SEQ_CST 5
#define F_DUPFD_CLOEXEC 1030
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define AutoFileLock (&MainLWLockArray[35].lock)
#define IPV6_2292HOPLIMIT 8
#define F_TS_HEADLINE_JSON_BYID_OPT 4205
#define CIRCLEOID 718
#define ERRCODE_FDW_INVALID_ATTRIBUTE_VALUE MAKE_SQLSTATE('H','V','0','2','4')
#define ENOENT 2
#define F_DSIND 2735
#define NL_MSGMAX INT_MAX
#define F_JSON_OBJECT_FIELD_TEXT 3948
#define ERRCODE_WARNING_PRIVILEGE_NOT_REVOKED MAKE_SQLSTATE('0','1','0','0','6')
#define IPV6_LEAVE_ANYCAST 28
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define Anum_pg_attribute_attisdropped 17
#define __TIME64_T_TYPE __TIME_T_TYPE
#define DATUM_GET_AGTYPE_P(d) ((agtype *)PG_DETOAST_DATUM(d))
#define __FLT32X_MIN_10_EXP__ (-307)
#define HEAP2_XACT_MASK 0xE000
#define FRAMEOPTION_EXCLUDE_TIES 0x20000
#define pg_unreachable() __builtin_unreachable()
#define F_DASIN 1600
#define F_SPG_TEXT_PICKSPLIT 4029
#define F_NETWORK_LARGER 3562
#define ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','3')
#define F_FLOAT8_COVAR_POP 2815
#define SizeOfXLogRecordDataHeaderLong (sizeof(uint8) + sizeof(uint32))
#define F_JSONB_OBJECT_FIELD_TEXT 3214
#define F_DATE_FINITE 1373
#define F_TSQUERY_NOT 3671
#define SIGTERM 15
#define relpath(rnode,forknum) relpathbackend((rnode).node, (rnode).backend, forknum)
#define F_OIDVECTORNE 619
#define F_INT2LE 148
#define PTHREAD_KEYS_MAX 1024
#define F_NUMERIC_DIV_TRUNC 1973
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define F_INT2LT 64
#define F_TS_HEADLINE_BYID_OPT 3743
#define EBADSLT 57
#define F_INT28DIV 948
#define IPV6_PMTUDISC_DONT 0
#define F_NUMERIC_UMINUS 1771
#define AI_CANONNAME 0x0002
#define EMEDIUMTYPE 124
#define EKEYREVOKED 128
#define __FLT64X_HAS_DENORM__ 1
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define F_ICNLIKEJOINSEL 1817
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define IPV6_RTHDR_STRICT 1
#define F_QUOTE_LITERAL 1283
#define FRAMEOPTION_ROWS 0x00004
#define F_PG_LOGICAL_EMIT_MESSAGE_TEXT 3577
#define __HAVE_DISTINCT_FLOAT64X 0
#define F_PG_STAT_GET_DEAD_TUPLES 2879
#define ERRCODE_FDW_INVALID_STRING_FORMAT MAKE_SQLSTATE('H','V','0','0','A')
#define F_BOX_LE 130
#define ERRCODE_INVALID_RECURSION MAKE_SQLSTATE('4','2','P','1','9')
#define F_PG_CONF_LOAD_TIME 2034
#define F_PG_ADVISORY_UNLOCK_INT8 2884
#define F_INT24MUL 170
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define __SIZEOF_LONG_LONG__ 8
#define PG_BACKEND_VERSIONSTR "postgres (PostgreSQL) " PG_VERSION "\n"
#define F_TIMESTAMPTZ_ABSTIME 1180
#define IS_JOIN_REL(rel) ((rel)->reloptkind == RELOPT_JOINREL || (rel)->reloptkind == RELOPT_OTHER_JOINREL)
#define EHOSTUNREACH 113
#define __USE_DYNAMIC_STACK_SIZE 1
#define AGTYPE_FBINARY_CONTAINER_TYPE(agtc) ((agtc)->header &AGT_FBINARY_MASK)
#define UInt32GetDatum(X) ((Datum) (X))
#define HASH_ELEM 0x0010
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define PageSetPageSizeAndVersion(page,size,version) ( AssertMacro(((size) & 0xFF00) == (size)), AssertMacro(((version) & 0x00FF) == (version)), ((PageHeader) (page))->pd_pagesize_version = (size) | (version) )
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define INVALID_TUPLEDESC_IDENTIFIER ((uint64) 1)
#define DEFAULT_CHECKPOINT_FLUSH_AFTER 32
#define F_CURSOR_TO_XML 2925
#define ERRCODE_CASE_NOT_FOUND MAKE_SQLSTATE('2','0','0','0','0')
#define _GCC_PTRDIFF_T 
#define SInvalReadLock (&MainLWLockArray[5].lock)
#define PACKAGE_URL ""
#define F_POINT_DISTANCE 991
#define _POSIX_THREAD_KEYS_MAX 128
#define F_TIDLARGER 2795
#define ALLOCSET_SEPARATE_THRESHOLD 8192
#define F_INT2OR 1893
#define F_INT4GE 150
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define F_INT28NE 1851
#define F_TEXTLEN 1257
#define __LDBL_DIG__ 33
#define __exctype(name) extern int name (int) __THROW
#define pg_attribute_always_inline __attribute__((always_inline)) inline
#define MaxCommandIdAttributeNumber (-6)
#define _SC_NZERO _SC_NZERO
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','1')
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define F_PG_ADVISORY_XACT_LOCK_INT8 3089
#define fetch_att(T,attbyval,attlen) ( (attbyval) ? ( (attlen) == (int) sizeof(Datum) ? *((Datum *)(T)) : ( (attlen) == (int) sizeof(int32) ? Int32GetDatum(*((int32 *)(T))) : ( (attlen) == (int) sizeof(int16) ? Int16GetDatum(*((int16 *)(T))) : ( AssertMacro((attlen) == 1), CharGetDatum(*((char *)(T))) ) ) ) ) : PointerGetDatum((char *) (T)) )
#define F_TIMESTAMP_PART 2021
#define INTERRUPTS_CAN_BE_PROCESSED() (InterruptHoldoffCount == 0 && CritSectionCount == 0 && QueryCancelHoldoffCount == 0)
#define WALWriteLock (&MainLWLockArray[8].lock)
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define F_PG_CONTROL_RECOVERY 3443
#define ERRCODE_INDICATOR_OVERFLOW MAKE_SQLSTATE('2','2','0','2','2')
#define F_REGEXP_SPLIT_TO_TABLE 2766
#define RelationGetFillFactor(relation,defaultff) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->fillfactor : (defaultff))
#define HeapTupleHeaderXminCommitted(tup) ( ((tup)->t_infomask & HEAP_XMIN_COMMITTED) != 0 )
#define SO_TIMESTAMPNS_OLD 35
#define HeapTupleHeaderXminInvalid(tup) ( ((tup)->t_infomask & (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)) == HEAP_XMIN_INVALID )
#define F_TIDOUT 49
#define __POSIX2_THIS_VERSION 200809L
#define REWRITEHANDLER_H 
#define INTMAX_WIDTH 64
#define EC_MUST_BE_REDUNDANT(eclass) ((eclass)->ec_has_const && !(eclass)->ec_below_outer_join)
#define F_HAS_COLUMN_PRIVILEGE_ID_NAME_ATTNUM 3017
#define INT2ARRAYOID 1005
#define FDW_HANDLEROID 3115
#define F_DATE_LARGER 1138
#define EAI_INTR -104
#define ERRCODE_DATA_CORRUPTED MAKE_SQLSTATE('X','X','0','0','1')
#define IPV6_RECVPKTINFO 49
#define IP_PMTUDISC_INTERFACE 4
#define PARSENODES_H 
#define F_INTER_LB 278
#define PF_VSOCK 40
#define F_REGOPERATORSEND 2451
#define SECS_PER_HOUR 3600
#define FunctionCallInvoke(fcinfo) ((* (fcinfo)->flinfo->fn_addr) (fcinfo))
#define F_CASH_DIV_INT2 867
#define F_JSONB_CONCAT 3301
#define MovedPartitionsOffsetNumber 0xfffd
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define DatumGetArrayTypePCopy(X) ((ArrayType *) PG_DETOAST_DATUM_COPY(X))
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define DatumGetByteaPP(X) ((bytea *) PG_DETOAST_DATUM_PACKED(X))
#define FIELDNO_TUPLETABLESLOT_NVALID 9
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define lthird_oid(l) lfirst_oid(lnext(lnext(list_head(l))))
#define nodeTag(nodeptr) (((const Node*)(nodeptr))->type)
#define SO_BUF_LOCK 72
#define PG_CLASS_D_H 
#define HeapTupleIsHotUpdated(tuple) HeapTupleHeaderIsHotUpdated((tuple)->t_data)
#define SO_PRIORITY 12
#define pg_attribute_aligned(a) __attribute__((aligned(a)))
#define F_INT8_AVG_DESERIALIZE 2787
#define F_NUMERIC_DESERIALIZE 3336
#define ACL_SELECT (1<<1)
#define F_PG_GET_FUNCTION_RESULT 2165
#define F_DROUND 228
#define FLOAT4ARRAYOID 1021
#define F_PG_LS_WALDIR 3354
#define CYPHER_CLAUSE_IS_TERMINAL(flags) (flags & CYPHER_CLAUSE_FLAG_TERMINAL)
#define _POSIX2_BC_BASE_MAX 99
#define ERRCODE_INVALID_PRECEDING_OR_FOLLOWING_SIZE MAKE_SQLSTATE('2','2','0','1','3')
#define F_DTOF 312
#define PG_FUNCTION_INFO_V1(funcname) extern Datum funcname(PG_FUNCTION_ARGS); extern PGDLLEXPORT const Pg_finfo_record * CppConcat(pg_finfo_,funcname)(void); const Pg_finfo_record * CppConcat(pg_finfo_,funcname) (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable
#define PF_LOCAL 1
#define F_INT28 754
#define __S_ISGID 02000
#define F_RI_FKEY_SETNULL_DEL 1650
#define SS_DISABLE SS_DISABLE
#define __SLONGWORD_TYPE long int
#define Anum_pg_type_typelem 12
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define __fsblkcnt_t_defined 
#define PD_VALID_FLAG_BITS 0x0007
#define FPE_FLTUND FPE_FLTUND
#define FPE_FLTUNK FPE_FLTUNK
#define FRAMEOPTION_START_UNBOUNDED_FOLLOWING 0x00080
#define _(x) gettext(x)
#define X_OK 1
#define ERRCODE_DUPLICATE_CURSOR MAKE_SQLSTATE('4','2','P','0','3')
#define TIMESTAMPOID 1114
#define ERRCODE_CONFIG_FILE_ERROR MAKE_SQLSTATE('F','0','0','0','0')
