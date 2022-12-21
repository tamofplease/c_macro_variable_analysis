#define __S_IFBLK 0060000
#define DatumGetByteaP(X) ((bytea *) PG_DETOAST_DATUM(X))
#define GUC_SUPERUSER_ONLY 0x0100
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define F_INT2UM 213
#define F_INT2UP 1911
#define BootstrapTransactionId ((TransactionId) 1)
#define F_RECORD_SEND 2403
#define __SSP_STRONG__ 3
#define F_BOOLSEND 2437
#define __attr_access(x) __attribute__ ((__access__ x))
#define IPV6_2292HOPOPTS 3
#define RELKIND_PARTITIONED_INDEX 'I'
#define ag_label_name_graph_index_id() ag_relation_id("ag_label_name_graph_index", "index")
#define SET_LOCKTAG_RELATION_EXTEND(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION_EXTEND, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define F_PRSD_HEADLINE 3720
#define F_PG_STAT_GET_BGWRITER_REQUESTED_CHECKPOINTS 2770
#define AT_STATX_SYNC_AS_STAT 0x0000
#define STATUS_EOF (-2)
#define F_MACADDR_EQ 830
#define AF_MAX PF_MAX
#define _SC_PII _SC_PII
#define F_JSONB_INT2 3450
#define F_JSONB_INT4 3451
#define F_JSONB_INT8 3452
#define F_ARRAY_LE 393
#define ERRCODE_INVALID_DATABASE_DEFINITION MAKE_SQLSTATE('4','2','P','1','2')
#define __USE_ISOC99 1
#define F_ARRAY_LT 391
#define __UINT_LEAST16_MAX__ 0xffff
#define IP_ROUTER_ALERT 5
#define F_NUMERIC_AVG_COMBINE 3337
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define RE_DUP_MAX (0x7fff)
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define F_BOOL_ACCUM 3496
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define sa_sigaction __sigaction_handler.sa_sigaction
#define F_MACADDR_GT 833
#define F_TEXT_SUBSTR_NO_LEN 883
#define PG_GETARG_VARCHAR_PP(n) DatumGetVarCharPP(PG_GETARG_DATUM(n))
#define F_ARRAY_NE 390
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define F_WIDTH_BUCKET_ARRAY 3218
#define si_fd _sifields._sigpoll.si_fd
#define USE_LLVM 1
#define _T_WCHAR_ 
#define IS_VALID_DATE(d) ((DATETIME_MIN_JULIAN - POSTGRES_EPOCH_JDATE) <= (d) && (d) < (DATE_END_JULIAN - POSTGRES_EPOCH_JDATE))
#define NI_MAXSERV 32
#define ERRCODE_CONNECTION_DOES_NOT_EXIST MAKE_SQLSTATE('0','8','0','0','3')
#define ERRCODE_RESERVED_NAME MAKE_SQLSTATE('4','2','9','3','9')
#define HAVE_GETOPT_H 1
#define F_MACADDR_IN 436
#define ERRCODE_READ_ONLY_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','6')
#define F_GIST_CIRCLE_CONSISTENT 2591
#define LockHashPartitionLockByIndex(i) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + (i)].lock)
#define F_PG_SLEEP 2626
#define _PRINTF_NAN_LEN_MAX 4
#define PG_BINARY_R "r"
#define PG_BINARY_W "w"
#define F_PG_DDL_COMMAND_SEND 90
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define PG_GETARG_EXPANDED_ARRAYX(n,metacache) DatumGetExpandedArrayX(PG_GETARG_DATUM(n), metacache)
#define PG_GETARG_VARLENA_PP(n) PG_DETOAST_DATUM_PACKED(PG_GETARG_DATUM(n))
#define GUC_UNIT_MB 0x4000
#define F_NUMERIC_SEND 2461
#define F_PG_GET_REPLICA_IDENTITY_INDEX 6120
#define ERRCODE_INVALID_ARGUMENT_FOR_NTILE MAKE_SQLSTATE('2','2','0','1','4')
#define __GNU_LIBRARY__ 6
#define NL_NMAX INT_MAX
#define F_SET_CONFIG_BY_NAME 2078
#define GUC_UNIT_MS 0x10000
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define XACT_FLAGS_NEEDIMMEDIATECOMMIT (1U << 3)
#define F_PG_EXTENSION_UPDATE_PATHS 3084
#define F_MACADDR8_TRUNC 4112
#define F_CIDR_ABBREV 599
#define CLOCK_THREAD_CPUTIME_ID 3
#define HTUP_H 
#define F_TEXTICNLIKE 1634
#define F_BE_LO_EXPORT 765
#define F_MACADDR_LE 832
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define F_GTSQUERY_CONSISTENT_OLDSIG 3793
#define lnext(lc) ((lc)->next)
#define F_MACADDR_LT 831
#define F_HASHENUM 3515
#define SO_NOFCS 43
#define PG_RETURN_UINT32(x) return UInt32GetDatum(x)
#define F_BOX_RIGHT 191
#define AG_LABEL_COMMANDS_H 
#define ADJ_OFFSET 0x0001
#define SOCK_RAW SOCK_RAW
#define AG_AGTYPE_H 
#define EDESTADDRREQ 89
#define F_BOX_SUB 1423
#define ERRCODE_INVALID_TEXT_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','2')
#define F_PG_RELATION_SIZE 2332
#define F_PG_TABLE_SIZE 2997
#define F_MACADDR_NE 835
#define si_pid _sifields._kill.si_pid
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define PG_DIAG_STATEMENT_POSITION 'P'
#define F_MACADDR_OR 3146
#define F_HAS_TABLESPACE_PRIVILEGE_ID_ID 2393
#define F_HAS_COLUMN_PRIVILEGE_NAME_NAME_NAME 3012
#define IPV6_ADDRFORM 1
#define L_INCR SEEK_CUR
#define F_HAS_TYPE_PRIVILEGE_ID_ID 3141
#define VARDATA(PTR) VARDATA_4B(PTR)
#define SOCK_RDM SOCK_RDM
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define F_BE_LO_PUT 3460
#define HAVE_GETOPT 1
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define F_DCBRT 231
#define __isascii_l(c,l) ((l), __isascii (c))
#define IP_MAX_MEMBERSHIPS 20
#define BITMAPLEN(NATTS) (((int)(NATTS) + 7) / 8)
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define F_TINTERVALLENGT 269
#define MaxAttrSize (10 * 1024 * 1024)
#define DAYS_PER_MONTH 30
#define SEQ_COL_FIRSTCOL SEQ_COL_LASTVAL
#define ERRCODE_UNDEFINED_COLUMN MAKE_SQLSTATE('4','2','7','0','3')
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define F_INTERVAL_JUSTIFY_INTERVAL 2711
#define F_PATH_CENTER 226
#define F_GIST_BOX_PENALTY 2581
#define F_REGTYPEOUT 2221
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define F_SPG_QUAD_PICKSPLIT 4020
#define F_REGPROCRECV 2444
#define USE_SQL_DATES 2
#define MCAST_LEAVE_SOURCE_GROUP 47
#define ACLITEM_SET_PRIVS_GOPTIONS(item,privs,goptions) ((item).ai_privs = ((AclMode) (privs) & 0xFFFF) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define __FLT32X_DECIMAL_DIG__ 17
#define IPV6_IPSEC_POLICY 34
#define ItemIdSetDead(itemId) ( (itemId)->lp_flags = LP_DEAD, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define AGT_GIN_FLAG_STR 0x05
#define STA_DEL 0x0020
#define ag_graph_name_index_id() ag_relation_id("ag_graph_name_index", "index")
#define F_INT8MOD 945
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define _XOPEN_VERSION 700
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define IP_FREEBIND 15
#define HOLD_INTERRUPTS() (InterruptHoldoffCount++)
#define F_INT4_BOOL 2557
#define AG_RETURN_AGTYPE_P(x) PG_RETURN_POINTER(x)
#define init_local_spin_delay(status) init_spin_delay(status, __FILE__, __LINE__, PG_FUNCNAME_MACRO)
#define F_HAS_FUNCTION_PRIVILEGE_ID_NAME 2258
#define F_ORDERED_SET_TRANSITION 3970
#define F_HAS_SCHEMA_PRIVILEGE_NAME 2272
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __RLIM_T_MATCHES_RLIM64_T 1
#define F_RECORD_IMAGE_EQ 3181
#define _BITS_PTHREADTYPES_COMMON_H 1
#define HAVE_TM_ZONE 1
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define FmgrHookIsNeeded(fn_oid) (!needs_fmgr_hook ? false : (*needs_fmgr_hook)(fn_oid))
#define __SIGEV_MAX_SIZE 64
#define F_BOX_RECV 2484
#define F_DISPELL_INIT 3731
#define __sigval_t_defined 
#define MCAST_LEAVE_GROUP 45
#define F_DCOT 1607
#define SOL_BLUETOOTH 274
#define VARSIZE_1B(PTR) ((((varattrib_1b *) (PTR))->va_header >> 1) & 0x7F)
#define HAVE_LIBLDAP 1
#define F_RECORD_IMAGE_GE 3186
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define F_XPATH_EXISTS 3049
#define F_RECORD_IMAGE_GT 3184
#define PG_INT32_MIN (-0x7FFFFFFF-1)
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define PG_DYNSHMEM_DIR "pg_dynshmem"
#define AttributeRelation_Rowtype_Id 75
#define makeNode(_type_) ((_type_ *) newNode(sizeof(_type_),T_ ##_type_))
#define ENOTTY 25
#define F_TSVECTOR_UNNEST 3322
#define F_MD5_TEXT 2311
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define MOD_NANO ADJ_NANO
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define F_BTBPCHAR_PATTERN_SORTSUPPORT 3333
#define HASH_SEGMENT 0x0002
#define HAVE_DECL_LLVMORCGETSYMBOLADDRESSIN 0
#define PARTITION_STRATEGY_RANGE 'r'
#define L_cuserid 9
#define COMP_CRC32C(crc,data,len) ((crc) = pg_comp_crc32c((crc), (data), (len)))
#define Anum_pg_attribute_attalign 12
#define __u_char_defined 
#define UTIME_NOW ((1l << 30) - 1l)
#define HAVE_DECL_F_FULLFSYNC 0
#define __FLT32_HAS_DENORM__ 1
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define IP_ADD_MEMBERSHIP 35
#define F_PG_TABLESPACE_DATABASES 2556
#define F_DSYNONYM_INIT 3728
#define PageGetPageLayoutVersion(page) (((PageHeader) (page))->pd_pagesize_version & 0x00FF)
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define AGTENTRY_IS_NUMERIC 0x10000000
#define unix 1
#define _BITS_TYPES_LOCALE_T_H 1
#define _LIMITS_H___ 
#define MSG_WAITALL MSG_WAITALL
#define F_RECORD_IMAGE_LE 3185
#define F_RECORD_IMAGE_LT 3183
#define F_NUMERIC_DIV_TRUNC 1973
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define F_JSONB_TO_RECORD 3490
#define PG_DIAG_CONTEXT 'W'
#define F_BTOIDVECTORCMP 404
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define __O_NOATIME 01000000
#define USECS_PER_DAY INT64CONST(86400000000)
#define F_PG_LOCK_STATUS 1371
#define __S_IFMT 0170000
#define HAVE_INT_OPTERR 1
#define __SI_SIGFAULT_ADDL 
#define F_LANGUAGE_HANDLER_IN 2302
#define F_HAS_TYPE_PRIVILEGE_NAME_NAME 3138
#define F_REPEAT 1622
#define SPLICE_F_GIFT 8
#define GUC_CUSTOM_PLACEHOLDER 0x0080
#define SOL_TIPC 271
#define F_VARCHARSEND 2433
#define _CS_PATH _CS_PATH
#define F_RECORD_IMAGE_NE 3182
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define F_CASH_NUMERIC 3823
#define _ERRNO_H 1
#define PG_DETOAST_DATUM(datum) pg_detoast_datum((struct varlena *) DatumGetPointer(datum))
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define IN_CLASSB_NSHIFT 16
#define DEFAULT_BGWRITER_FLUSH_AFTER 64
#define F_TIMESTAMPTZ_ZONE 1159
#define F_DSYNONYM_LEXIZE 3729
#define NFDBITS __NFDBITS
#define FIELDNO_TUPLETABLESLOT_TUPLE 5
#define AGTENTRY_IS_BOOL_TRUE 0x30000000
#define LOG_DESTINATION_STDERR 1
#define ERRCODE_STACKED_DIAGNOSTICS_ACCESSED_WITHOUT_ACTIVE_HANDLER MAKE_SQLSTATE('0','Z','0','0','2')
#define F_POINT_SEND 2429
#define SINVAL_H 
#define WCHAR_WIDTH 32
#define ItemIdSetRedirect(itemId,link) ( (itemId)->lp_flags = LP_REDIRECT, (itemId)->lp_off = (link), (itemId)->lp_len = 0 )
#define F_DATE_GT_TIMESTAMP 2341
#define __HAVE_FLOAT32X 1
#define SOL_IPV6 41
#define __O_CLOEXEC 02000000
#define IP_MTU 14
#define F_DIST_LB 726
#define AF_ROSE PF_ROSE
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define AG_AG_LABEL_H 
#define __fortify_function __extern_always_inline __attribute_artificial__
#define LP_UNUSED 0
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define Anum_pg_class_reltuples 10
#define SIGSEGV 11
#define ACL_SELECT_CHR 'r'
#define F_SEAL_FUTURE_WRITE 0x0010
#define F_INT28EQ 1850
#define F_PG_WAL_LSN_DIFF 3165
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define F_PG_ENCODING_TO_CHAR 1597
#define __UINT_LEAST8_MAX__ 0xff
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define __UINTMAX_TYPE__ long unsigned int
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define F_GIST_POLY_DISTANCE 3288
#define __ASM_GENERIC_BITS_PER_LONG 
#define ARR_SIZE(a) VARSIZE(a)
#define DTK_TZ 4
#define F_INT28GE 1855
#define F_TIMEPL 244
#define pg_bswap16(x) __builtin_bswap16(x)
#define __linux 1
#define VARATT_IS_4B_C(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x02)
#define PG_MAGIC_FUNCTION_NAME Pg_magic_func
#define AGG_CONTEXT_WINDOW 2
#define VARATT_IS_4B_U(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x00)
#define F_BTFLOAT8SORTSUPPORT 3133
#define FORMAT_TYPE_FORCE_QUALIFY 0x04
#define F_DIST_PC 1476
#define F_DIST_PL 725
#define ERRCODE_SUCCESSFUL_COMPLETION MAKE_SQLSTATE('0','0','0','0','0')
#define AI_ADDRCONFIG 0x0020
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define _BITS_PTHREADTYPES_ARCH_H 1
#define HOURS_PER_DAY 24
#define RTContainsStrategyNumber 7
#define ERRCODE_S_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','2')
#define __bool_true_false_are_defined 1
#define ItemPointerGetBlockNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetBlockNumberNoCheck(pointer) )
#define ERRCODE_DATETIME_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','0','8')
#define __SIZE_T 
#define OffsetNumberMask (0xffff)
#define F_SPG_KD_INNER_CONSISTENT 4026
#define SIGUSR1 10
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define F_JSON_BUILD_OBJECT_NOARGS 3201
#define _ATFILE_SOURCE 1
#define PF_WANPIPE 25
#define NO_MAX_DSIZE (-1)
#define F_DIST_SB 365
#define F_DIST_SL 727
#define _SC_NETWORKING _SC_NETWORKING
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define RangeVarGetRelid(relation,lockmode,missing_ok) RangeVarGetRelidExtended(relation, lockmode, (missing_ok) ? RVR_MISSING_OK : 0, NULL, NULL)
#define IS_DEFAULT_LABEL_EDGE(str) (str != NULL && strcmp(AG_DEFAULT_LABEL_EDGE, str) == 0)
#define DQUARTER "quarter"
#define F_SMGRIN 760
#define RTLeftStrategyNumber 1
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define F_TIMESTAMP_EQ_DATE 2366
#define F_MACADDR8_OUT 4111
#define PARSE_NODE_H 
#define F_INT28LE 1854
#define F_HAS_TABLESPACE_PRIVILEGE_ID 2395
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define F_INT28LT 1852
#define F_PG_OPFAMILY_IS_VISIBLE 3829
#define F_BINARY_UPGRADE_SET_NEXT_INDEX_PG_CLASS_OID 3587
#define pg_bswap64(x) __builtin_bswap64(x)
#define _STATBUF_ST_RDEV 
#define UINT16_C(c) c
#define F_SPG_BOX_QUAD_CONFIG 5012
#define TupleDescSize(src) (offsetof(struct tupleDesc, attrs) + (src)->natts * sizeof(FormData_pg_attribute))
#define F_DFLOOR 2309
#define SET_LOCKTAG_TUPLE(locktag,dboid,reloid,blocknum,offnum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = (offnum), (locktag).locktag_type = LOCKTAG_TUPLE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define SK_ROW_HEADER 0x0004
#define _PC_PRIO_IO _PC_PRIO_IO
#define SpinLockInit(lock) S_INIT_LOCK(lock)
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define qsort(a,b,c,d) pg_qsort(a,b,c,d)
#define __SCHAR_MAX__ 0x7f
#define DTK_MILLISEC 29
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME_NAME 3000
#define PG_IOLBF _IOLBF
#define repalloc_array(pointer,type,count) ((type *) repalloc(pointer, sizeof(type) * (count)))
#define F_PG_GET_REPLICATION_SLOTS 3781
#define DatumGetUInt8(X) ((uint8) (X))
#define F_POINT_IN 117
#define __KERNEL_STRICT_NAMES 
#define AGG_CONTEXT_AGGREGATE 1
#define pg_write_barrier_impl() __atomic_thread_fence(__ATOMIC_RELEASE)
#define DTK_AGO 5
#define SA_SIGINFO 4
#define F_INT28PL 841
#define F_UUID_CMP 2960
#define FIELDNO_HEAPTUPLEHEADERDATA_HOFF 4
#define F_TXID_STATUS 3360
#define F_INT8SEND 2409
#define STA_PPSWANDER 0x0400
#define F_BPCHAROCTETLEN 1375
#define F_REGOPERATORIN 2216
#define __CFLOAT32 _Complex _Float32
#define F_RANGE_TYPANALYZE 3916
#define Anum_pg_class_relfrozenxid 29
#define ERRCODE_WITH_CHECK_OPTION_VIOLATION MAKE_SQLSTATE('4','4','0','0','0')
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define DO_AGGSPLIT_SERIALIZE(as) (((as) & AGGSPLITOP_SERIALIZE) != 0)
#define F_PG_WALFILE_NAME 2851
#define SIZEOF_DSA_POINTER 8
#define F_BE_LO_CREAT 957
#define F_REGOPEROUT 2215
#define __isascii(c) (((c) & ~0x7f) == 0)
#define __toascii(c) ((c) & 0x7f)
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define F_TINTERVALREL 249
#define SO_TIMESTAMP_OLD 29
#define F_SCALARLTSEL 103
#define __SIZEOF_INT__ 4
#define F_REGDICTIONARYSEND 3774
#define WINT_WIDTH 32
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _BITS_SIGINFO_ARCH_H 1
#define SizeOfXLogRecordBlockCompressHeader sizeof(XLogRecordBlockCompressHeader)
#define SOL_TLS 282
#define PageClearPrunable(page) (((PageHeader) (page))->pd_prune_xid = InvalidTransactionId)
#define IPPROTO_SCTP IPPROTO_SCTP
#define IS_NONWINDOWS_DIR_SEP(ch) ((ch) == '/')
#define Anum_ag_graph_name 1
#define F_POINT_NE 988
#define F_TIMETZ_HASH_EXTENDED 3410
#define AT_FDCWD -100
#define FIOSETOWN 0x8901
#define F_INT2LARGER 770
#define HeapTupleHasVarWidth(tuple) (((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH) != 0)
#define ERRCODE_INSUFFICIENT_RESOURCES MAKE_SQLSTATE('5','3','0','0','0')
#define HAVE_DLOPEN 1
#define TSROUND(j) (rint(((double) (j)) * TS_PREC_INV) / TS_PREC_INV)
#define _ASM_GENERIC_INT_LL64_H 
#define _SC_VERSION _SC_VERSION
#define F_NUMERIC_TO_CHAR 1772
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define F_FLOAT8_REGR_AVGX 2810
#define F_FLOAT8_REGR_AVGY 2811
#define IPPROTO_EGP IPPROTO_EGP
#define __USER_LABEL_PREFIX__ 
#define SO_DEBUG 1
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define GET_AGTYPE_VALUE_OBJECT_VALUE(agtv_object,search_key) get_agtype_value_object_value(agtv_object, search_key, sizeof(search_key) - 1)
#define F_PATH_MUL_PT 1438
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define _BITS_ENDIANNESS_H 1
#define errcontext set_errcontext_domain(TEXTDOMAIN), errcontext_msg
#define __LC_MEASUREMENT 11
#define Anum_pg_attribute_attbyval 10
#define _POSIX_TRACE -1
#define SCM_TIMESTAMPING_PKTINFO 58
#define PG_GETARG_NUMERIC_COPY(n) DatumGetNumericCopy(PG_GETARG_DATUM(n))
#define floatVal(v) atof(((Value *)(v))->val.str)
#define __GLIBC__ 2
#define F_DIST_CPOLY 728
#define RTSubEqualStrategyNumber 25
#define F_ROW_TO_JSON_PRETTY 3156
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define F_TO_ASCII_ENCNAME 1847
#define F_INT82PL 837
#define F_TIME_LARGER 1377
#define F_NETWORK_NETMASK 696
#define HASH_ATTACH 0x1000
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define ERRCODE_FDW_INCONSISTENT_DESCRIPTOR_INFORMATION MAKE_SQLSTATE('H','V','0','2','1')
#define WCONTINUED 8
#define setjmp(env) _setjmp (env)
#define GUC_check_errmsg pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errmsg_string = format_elog_string
#define ItemPointerGetBlockNumberNoCheck(pointer) ( BlockIdGetBlockNumber(&(pointer)->ip_blkid) )
#define UTILITY_H 
#define ERRCODE_FDW_INVALID_STRING_LENGTH_OR_BUFFER_LENGTH MAKE_SQLSTATE('H','V','0','9','0')
#define F_NLIKEJOINSEL 1828
#define F_CSTRING_SEND 2501
#define __LDBL_HAS_INFINITY__ 1
#define AG_ACCESS_FUNCTION_ID "age_id"
#define TimestampGetDatum(X) Int64GetDatum(X)
#define F_FLOAT8DIV 217
#define DatumGetVarCharPSlice(X,m,n) ((VarChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define FRAMEOPTION_NONDEFAULT 0x00001
#define AF_PHONET PF_PHONET
#define INSTR_TIME_SET_ZERO(t) ((t).tv_sec = 0, (t).tv_nsec = 0)
#define ACL_REFERENCES (1<<5)
#define F_DATE_LT_TIMESTAMP 2338
#define ERRCODE_FDW_INVALID_COLUMN_NAME MAKE_SQLSTATE('H','V','0','0','7')
#define ILL_ILLOPN ILL_ILLOPN
#define F_UNKNOWNSEND 2417
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define F_LIKEJOINSEL 1825
#define HASH_PARTITION 0x0001
#define F_PG_LS_WALDIR 3354
#define ENOLINK 67
#define PF_LLC 26
#define F_TIMESTAMP_TRANSFORM 3917
#define F_GIN_EXTRACT_TSQUERY_5ARGS 3087
#define SO_BROADCAST 6
#define __SVE_NUM_ZREGS 32
#define F_ANYENUM_IN 3504
#define F_PG_IDENTIFY_OBJECT_AS_ADDRESS 3382
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __DEV_T_TYPE __UQUAD_TYPE
#define USECS_PER_SEC INT64CONST(1000000)
#define MAXDATELEN 128
#define F_TXID_CURRENT_IF_ASSIGNED 3348
#define SIGIO SIGPOLL
#define PACKAGE_TARNAME "postgresql"
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __STDC_UTF_16__ 1
#define le32toh(x) __uint32_identity (x)
#define _SIZE_T_DEFINED 
#define InvalidTransactionId ((TransactionId) 0)
#define F_NUMERIC_POLY_COMBINE 3338
#define SearchSysCacheCopy4(cacheId,key1,key2,key3,key4) SearchSysCacheCopy(cacheId, key1, key2, key3, key4)
#define F_DRANDOM 1598
#define EXECNODES_H 
#define ERRCODE_PROGRAM_LIMIT_EXCEEDED MAKE_SQLSTATE('5','4','0','0','0')
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define F_BTHANDLER 330
#define CACHELINEALIGN(LEN) TYPEALIGN(PG_CACHE_LINE_SIZE, (LEN))
#define F_BRIN_INCLUSION_OPCINFO 4105
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define _SC_PII_OSI _SC_PII_OSI
#define F_MACADDR_SEND 2495
#define ERRCODE_RAISE_EXCEPTION MAKE_SQLSTATE('P','0','0','0','1')
#define F_TSMATCHJOINSEL 3687
#define STDOUT_FILENO 1
#define F_JSONB_INSERT 3579
#define __INT_WIDTH__ 32
#define O_NDELAY O_NONBLOCK
#define __S_IFCHR 0020000
#define F_INT4SHL 1902
#define S_ISVTX __S_ISVTX
#define ERRCODE_IS_CATEGORY(ec) (((ec) & ~((1 << 12) - 1)) == 0)
#define F_INT4SHR 1903
#define HAVE_POSIX_FALLOCATE 1
#define F_INET_GIST_PENALTY 3557
#define __STDC_IEC_559__ 1
#define SO_TYPE 3
#define __STDC_ISO_10646__ 201706L
#define MOD_MICRO ADJ_MICRO
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define lsecond_node(type,l) castNode(type, lsecond(l))
#define BoolIsValid(boolean) ((boolean) == false || (boolean) == true)
#define F_OIDVECTOROUT 55
#define DatumGetChar(X) ((char) (X))
#define F_DATE_SORTSUPPORT 3136
#define __DECIMAL_DIG__ 36
#define AGTE_HAS_OFF(agte_) (((agte_)&AGTENTRY_HAS_OFF) != 0)
#define ERRCODE_INVALID_SQL_STATEMENT_NAME MAKE_SQLSTATE('2','6','0','0','0')
#define __USE_FORTIFY_LEVEL 2
#define LOCK_EX 2
#define F_BITSHIFTRIGHT 1678
#define HeapTupleHeaderGetRawCommandId(tup) ( (tup)->t_choice.t_heap.t_field3.t_cid )
#define TS_PREC_INV 1000000.0
#define EIO 5
#define F_CASH_DIV_FLT4 847
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define F_CASH_DIV_FLT8 897
#define F_IN_RANGE_FLOAT8_FLOAT8 4139
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define F_MACADDR_GE 834
#define __SC_THREAD_STACK_MIN_VALUE 75
#define ERRCODE_E_R_I_E_EVENT_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','3')
#define _LARGEFILE_SOURCE 1
#define MAX_INPUT 255
#define ENABLE_NLS 1
#define ENETDOWN 100
#define ESTALE 116
#define HeapTupleHasNulls(tuple) (((tuple)->t_data->t_infomask & HEAP_HASNULL) != 0)
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define LC_TIME __LC_TIME
#define AutovacuumScheduleLock (&MainLWLockArray[23].lock)
#define SEGV_ACCADI SEGV_ACCADI
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define ALIGNOF_LONG 8
#define PTRDIFF_MAX (9223372036854775807L)
#define HAVE_DECL_VSNPRINTF 1
#define HAVE__BUILTIN_CONSTANT_P 1
#define __ASM_SIGCONTEXT_H 
#define IP_ORIGDSTADDR 20
#define LOCK_H_ 
#define _SC_UINT_MAX _SC_UINT_MAX
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define HAVE_STDLIB_H 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define F_NAMEICREGEXEQ 1240
#define IPV6_DSTOPTS 59
#define OPEN_SYNC_FLAG O_SYNC
#define F_XMLCOMMENT 2895
#define SOL_ICMPV6 58
#define FLOAT8PASSBYVAL true
#define ERRCODE_INDETERMINATE_DATATYPE MAKE_SQLSTATE('4','2','P','1','8')
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define F_VARCHAROUT 1047
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define ERRCODE_NO_DATA_FOUND MAKE_SQLSTATE('P','0','0','0','2')
#define F_RANGESEL 3169
#define AF_BLUETOOTH PF_BLUETOOTH
#define F_IN_RANGE_INT4_INT2 4129
#define HeapTupleHeaderSetXminCommitted(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_COMMITTED) )
#define F_IN_RANGE_INT4_INT4 4128
#define F_IN_RANGE_INT4_INT8 4127
#define L_tmpnam 20
#define PG_GETARG_BPCHAR_P(n) DatumGetBpCharP(PG_GETARG_DATUM(n))
#define PG_DIAG_SCHEMA_NAME 's'
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define isascii(c) __isascii (c)
#define MINS_PER_HOUR 60
#define __GNUC__ 11
#define timestamptz_cmp_internal(dt1,dt2) timestamp_cmp_internal(dt1, dt2)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define IPPROTO_TCP IPPROTO_TCP
#define F_PG_WALFILE_NAME_OFFSET 2850
#define PG_DIAG_SQLSTATE 'C'
#define F_REGEXNESEL 1821
#define F_MACADDR8_AND 4121
#define F_TO_REGOPERATOR 3476
#define appendStringInfoCharMacro(str,ch) (((str)->len + 1 >= (str)->maxlen) ? appendStringInfoChar(str, ch) : (void)((str)->data[(str)->len] = (ch), (str)->data[++(str)->len] = '\0'))
#define BackendRandomLock (&MainLWLockArray[43].lock)
#define HEAP_XACT_MASK 0xFFF0
#define PageIsEmpty(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData)
#define F_SPG_KD_PICKSPLIT 4025
#define AF_NFC PF_NFC
#define AGT_ROOT_IS_OBJECT(agtp_) ((*(uint32 *)VARDATA(agtp_) & AGT_FOBJECT) != 0)
#define AGTE_IS_BOOL(agte_) (AGTE_IS_BOOL_TRUE(agte_) || AGTE_IS_BOOL_FALSE(agte_))
#define ERRCODE_WARNING_NULL_VALUE_ELIMINATED_IN_SET_FUNCTION MAKE_SQLSTATE('0','1','0','0','3')
#define LOCK_NB 4
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define EAI_MEMORY -10
#define F_INT4_AVG_ACCUM_INV 3571
#define VARSIZE_4B(PTR) ((((varattrib_4b *) (PTR))->va_4byte.va_header >> 2) & 0x3FFFFFFF)
#define SO_DETACH_REUSEPORT_BPF 68
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __BIGGEST_ALIGNMENT__ 16
#define F_TIMESTAMPTZ_TO_CHAR 1770
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define LONG_MAX __LONG_MAX__
#define IPV6_RECVHOPOPTS 53
#define ItemIdGetFlags(itemId) ((itemId)->lp_flags)
#define __LC_MESSAGES 5
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define F_NUMERIC_AVG_SERIALIZE 2740
#define HEAP_HOT_UPDATED 0x4000
#define F_ARRAY_APPEND 378
#define __GLIBC_USE_LIB_EXT2 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define F_PG_DEPENDENCIES_RECV 3406
#define HAVE_GETRLIMIT 1
#define WTERMSIG(status) __WTERMSIG (status)
#define F_NAMEICREGEXNE 1241
#define ERRCODE_ZERO_LENGTH_CHARACTER_STRING MAKE_SQLSTATE('2','2','0','0','F')
#define BufferIsInvalid(buffer) ((buffer) == InvalidBuffer)
#define __DBL_IS_IEC_60559__ 2
#define LOCK_RW 192
#define EXIT_SUCCESS 0
#define ERRCODE_AMBIGUOUS_ALIAS MAKE_SQLSTATE('4','2','P','0','9')
#define PG_GETARG_INTERVAL_P(n) DatumGetIntervalP(PG_GETARG_DATUM(n))
#define ACL_CREATE_TEMP_CHR 'T'
#define DTK_TOMORROW 15
#define PG_BSWAP_H 
#define DatumGetName(X) ((Name) DatumGetPointer(X))
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define F_OIDVECTORRECV 2420
#define SCM_CREDENTIALS SCM_CREDENTIALS
#define RowShareLock 2
#define ELF_PRARGSZ (80)
#define HAVE_FDATASYNC 1
#define ITIMER_PROF ITIMER_PROF
#define GUC_LIST_QUOTE 0x0002
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define F_BRIN_MINMAX_CONSISTENT 3385
#define AGT_GIN_MAX_LENGTH 125
#define IS_A_AGTYPE_SCALAR(agtype_val) ((agtype_val)->type >= AGTV_NULL && (agtype_val)->type < AGTV_ARRAY)
#define HAVE_READLINK 1
#define F_INT8_SUM 1842
#define LOCK_UN 8
#define F_ELEM_CONTAINED_BY_RANGE 3860
#define ScanDirectionIsNoMovement(direction) ((bool) ((direction) == NoMovementScanDirection))
#define NL_LANGMAX _POSIX2_LINE_MAX
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define VARATT_IS_EXPANDED_HEADER(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_header == EOH_HEADER_MAGIC)
#define HASH_BLOBS 0x0020
#define F_CIRCLE_CENTER 1416
#define F_PG_STAT_GET_BACKEND_IDSET 1936
#define F_FLOAT8SMALLER 224
#define __INTPTR_WIDTH__ 64
#define ERRCODE_RESTRICT_VIOLATION MAKE_SQLSTATE('2','3','0','0','1')
#define MAX_HANDLE_SZ 128
#define F_BOX_HEIGHT 977
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define XLogRecBlockImageApply(decoder,block_id) ((decoder)->blocks[block_id].apply_image)
#define F_GIN_TRICONSISTENT_JSONB_PATH 3489
#define LONG_MIN (-LONG_MAX - 1L)
#define F_GINARRAYEXTRACT_2ARGS 3076
#define __USE_ISOC95 1
#define INET_ADDRSTRLEN 16
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define _XBS5_LP64_OFF64 1
#define F_INT8NOT 1907
#define F_REGEXP_MATCH_NO_FLAGS 3396
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define ERRCODE_INVALID_TRANSACTION_STATE MAKE_SQLSTATE('2','5','0','0','0')
#define F_TEXT_CHAR 944
#define MakeExpandedObjectReadOnly(d,isnull,typlen) (((isnull) || (typlen) != -1) ? (d) : MakeExpandedObjectReadOnlyInternal(d))
#define _FEATURES_H 1
#define __LDBL_HAS_DENORM__ 1
#define AGTYPE_CONTAINS_STRATEGY_NUMBER 7
#define HAVE_UINTPTR_T 1
#define F_HAS_DATABASE_PRIVILEGE_NAME 2254
#define __S_IFREG 0100000
#define __SOCKADDR_ALLTYPES __SOCKADDR_ONETYPE (sockaddr) __SOCKADDR_ONETYPE (sockaddr_at) __SOCKADDR_ONETYPE (sockaddr_ax25) __SOCKADDR_ONETYPE (sockaddr_dl) __SOCKADDR_ONETYPE (sockaddr_eon) __SOCKADDR_ONETYPE (sockaddr_in) __SOCKADDR_ONETYPE (sockaddr_in6) __SOCKADDR_ONETYPE (sockaddr_inarp) __SOCKADDR_ONETYPE (sockaddr_ipx) __SOCKADDR_ONETYPE (sockaddr_iso) __SOCKADDR_ONETYPE (sockaddr_ns) __SOCKADDR_ONETYPE (sockaddr_un) __SOCKADDR_ONETYPE (sockaddr_x25)
#define LC_TIME_MASK (1 << __LC_TIME)
#define PG_DIAG_INTERNAL_QUERY 'q'
#define F_TEXTOVERLAY_NO_LEN 1405
#define LC_ADDRESS __LC_ADDRESS
#define SIGABRT 6
#define ACL_ALL_RIGHTS_COLUMN (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_REFERENCES)
#define _GCC_WRAP_STDINT_H 
#define GUC_NOT_WHILE_SEC_REST 0x0400
#define F_POLY_OVERLEFT 342
#define POSIX_FADV_NORMAL 0
#define DatumGetInt16(X) ((int16) (X))
#define S_IFCHR __S_IFCHR
#define __dev_t_defined 
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define F_HAS_LANGUAGE_PRIVILEGE_ID_ID 2265
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define HeapTupleHeaderHasExternal(tup) (((tup)->t_infomask & HEAP_HASEXTERNAL) != 0)
#define F_PG_AVAILABLE_EXTENSION_VERSIONS 3083
#define HAVE_SYS_UN_H 1
#define SO_DONTROUTE 5
#define F_BYTEA_SUBSTR_NO_LEN 2013
#define ERRCODE_FDW_COLUMN_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','5')
#define ERRCODE_WARNING_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','1','0','0','C')
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define F_BITGETBIT 3032
#define SO_PEERNAME 28
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define DatumGetInt32(X) ((int32) (X))
#define IP_PMTUDISC_WANT 1
#define F_PG_LSN_OUT 3230
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define ERFKILL 132
#define __FLT16_DECIMAL_DIG__ 5
#define COMPLETION_TAG_BUFSIZE 64
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define LC_NAME_MASK (1 << __LC_NAME)
#define PG_GETARG_TEXT_PP(n) DatumGetTextPP(PG_GETARG_DATUM(n))
#define _VA_LIST_ 
#define isspace_l(c,l) __isspace_l ((c), (l))
#define F_TS_HEADLINE_OPT 3754
#define F_FLOAT8GE 298
#define F_TSRANGE_SUBDIFF 3929
#define ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE MAKE_SQLSTATE('0','3','0','0','0')
#define AG_VERTEX_COLNAME_PROPERTIES "properties"
#define PG_TRY() do { sigjmp_buf *save_exception_stack = PG_exception_stack; ErrorContextCallback *save_context_stack = error_context_stack; sigjmp_buf local_sigjmp_buf; if (sigsetjmp(local_sigjmp_buf, 0) == 0) { PG_exception_stack = &local_sigjmp_buf
#define REINDEXOPT_VERBOSE (1 << 0)
#define F_CIRCLE_OVERRIGHT 1456
#define __POSIX_FADV_NOREUSE 5
#define _POSIX_RE_DUP_MAX 255
#define GUC_UNIT_KB 0x1000
#define DatumGetInt64(X) ((int64) (X))
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define F_BITTYPMODOUT 2920
#define PF_PHONET 35
#define FRAMEOPTION_RANGE 0x00002
#define F_DATABASE_TO_XML 2936
#define __USECONDS_T_TYPE __U32_TYPE
#define F_FLOAT8IN 214
#define HAVE_GCC__ATOMIC_INT64_CAS 1
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define F_TIMESTAMP_TO_CHAR 2049
#define F_TIMETZ_OUT 1351
#define INSTR_TIME_IS_ZERO(t) ((t).tv_nsec == 0 && (t).tv_sec == 0)
#define F_PG_DATABASE_SIZE_OID 2324
#define _STDARG_H 
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define DTK_EPOCH 11
#define _PC_VDISABLE _PC_VDISABLE
#define __CHAR32_TYPE__ unsigned int
#define SO_COOKIE 57
#define _BITS_STDIO2_H 1
#define HEAP_XMAX_IS_LOCKED_ONLY(infomask) (((infomask) & HEAP_XMAX_LOCK_ONLY) || (((infomask) & (HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK)) == HEAP_XMAX_EXCL_LOCK))
#define HEAP_XMAX_IS_MULTI 0x1000
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define ERRCODE_INVALID_OBJECT_DEFINITION MAKE_SQLSTATE('4','2','P','1','7')
#define DatumGetTransactionId(X) ((TransactionId) (X))
#define F_PG_OPTIONS_TO_TABLE 2289
#define F_FLOAT8LE 296
#define F_CONTJOINSEL 1303
#define GUC_H 
#define F_FLOAT8LT 295
#define SO_PEERSEC 31
#define _LINUX_TYPES_H 
#define F_PG_CONTROL_SYSTEM 3441
#define F_PG_WAL_REPLAY_RESUME 3072
#define SOL_DECNET 261
#define DTTOIF(dirtype) ((dirtype) << 12)
#define __SIZEOF_WINT_T__ 4
#define F_TS_PARSE_BYNAME 3716
#define F_FLOAT8MI 219
#define F_NUMERIC_UMINUS 1771
#define HeapTupleHeaderXminInvalid(tup) ( ((tup)->t_infomask & (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)) == HEAP_XMIN_INVALID )
#define HAVE_SYS_SHM_H 1
#define DTK_YESTERDAY 13
#define ENOTNAM 118
#define DynamicSharedMemoryControlLock (&MainLWLockArray[34].lock)
#define F_FLOAT8NE 294
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define F_INET_GIST_COMPRESS 3555
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define F_DATE_LE_TIMESTAMP 2339
#define __U16_TYPE unsigned short int
#define F_INT8_AVG_COMBINE 2785
#define SO_SNDTIMEO_NEW 67
#define CLD_EXITED CLD_EXITED
#define F_PG_STAT_GET_XACT_TUPLES_INSERTED 3040
#define F_TIMESTAMPTZ_TIMETZ 1388
#define _STDIO_H 1
#define F_LTRIM1 881
#define F_UNKNOWNOUT 110
#define F_TIMESTAMP_NE_DATE 2369
#define FIELDNO_EXPRCONTEXT_CASEDATUM 10
#define SORTSUPPORT_H 
#define _PTRDIFF_T 
#define F_FLOAT8PL 218
#define DN_MULTISHOT 0x80000000
#define F_SHA224_BYTEA 3419
#define HeapTupleHeaderSetMatch(tup) ( (tup)->t_infomask2 |= HEAP_TUPLE_HAS_MATCH )
#define ItemIdSetUnused(itemId) ( (itemId)->lp_flags = LP_UNUSED, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define F_INDEX_AM_HANDLER_IN 326
#define F_INT4_NUMERIC 1740
#define PF_IEEE802154 36
#define TypeIsToastable(typid) (get_typstorage(typid) != 'p')
#define LOCALLOCK_LOCKMETHOD(llock) ((llock).tag.lock.locktag_lockmethodid)
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define F_INT28 754
#define F_BTRECORDIMAGECMP 3187
#define __FLT128_HAS_INFINITY__ 1
#define F_PG_LSN_HASH_EXTENDED 3413
#define PG_DIAG_MESSAGE_PRIMARY 'M'
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define F_GETOWN __F_GETOWN
#define F_RANGE_CONSTRUCTOR2 3840
#define F_RANGE_CONSTRUCTOR3 3841
#define PG_GET_COLLATION() (fcinfo->fncollation)
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define HAVE_UNISTD_H 1
#define F_TEXTREGEXSUBSTR 2073
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define alloca(size) __builtin_alloca (size)
#define F_INT48 481
#define F_TIMETZ_RECV 2472
#define SECOND 12
#define ERRCODE_INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION MAKE_SQLSTATE('2','2','0','1','G')
#define PF_IRDA 23
#define INT_WIDTH 32
#define SIGCHLD 17
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define ReplicationOriginLock (&MainLWLockArray[40].lock)
#define AGTENTRY_HAS_OFF 0x80000000
#define ERRCODE_TRIGGERED_ACTION_EXCEPTION MAKE_SQLSTATE('0','9','0','0','0')
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define INT_LEAST32_WIDTH 32
#define F_FLOAT8UM 220
#define IPV6_RECVHOPLIMIT 51
#define __FLT64X_HAS_QUIET_NAN__ 1
#define HIGHBIT (0x80)
#define PG_HAVE_ATOMIC_ADD_FETCH_U64 
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define IPV6_RECVTCLASS 66
#define F_NUMERIC_TRUNC 1709
#define _BITS_SIGNUM_ARCH_H 1
#define AGT_ROOT_BINARY_FLAGS(agtp_) (*(uint32 *)VARDATA(agtp_) & AGT_FBINARY_MASK)
#define O_RSYNC O_SYNC
#define F_ACLCONTAINS 1037
#define lthird_int(l) lfirst_int(lnext(lnext(list_head(l))))
#define F_PG_LSN_IN 3229
#define LOCKOPTIONS_H 
#define PageSetAllVisible(page) (((PageHeader) (page))->pd_flags |= PD_ALL_VISIBLE)
#define F_PG_STAT_GET_BACKEND_START 1391
#define EXPANDEDDATUM_H 
#define HeapTupleHeaderSetTypeId(tup,typeid) ( (tup)->t_choice.t_datum.datum_typeid = (typeid) )
#define __key_t_defined 
#define USE_DSM_MMAP 
#define ERRCODE_UNDEFINED_PARAMETER MAKE_SQLSTATE('4','2','P','0','2')
#define SO_RCVLOWAT 18
#define F_BE_LO_LSEEK64 3170
#define F_HAS_COLUMN_PRIVILEGE_NAME_NAME_ATTNUM 3013
#define F_PG_BACKUP_START_TIME 3814
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define SECURITY_RESTRICTED_OPERATION 0x0002
#define F_ARRAY_TO_TEXT_NULL 384
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x) != 0, 0)
#define AssertArg(condition) ((void)true)
#define F_GIST_POINT_COMPRESS 1030
#define DTK_DATE_M (DTK_M(YEAR) | DTK_M(MONTH) | DTK_M(DAY))
#define ENETRESET 102
#define FIELDNO_HEAPTUPLEHEADERDATA_BITS 5
#define F_REGEXNEJOINSEL 1827
#define __FLT_EVAL_METHOD_C99__ 0
#define _POSIX_JOB_CONTROL 1
#define RelCacheInitLock (&MainLWLockArray[16].lock)
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define NUM_PREDICATELOCK_PARTITIONS (1 << LOG2_NUM_PREDICATELOCK_PARTITIONS)
#define FRAMEOPTION_END_OFFSET_FOLLOWING 0x04000
#define ERRCODE_E_R_I_E_SRF_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','2')
#define F_HASHBPCHAR 1080
#define ERRCODE_CANT_CHANGE_RUNTIME_PARAM MAKE_SQLSTATE('5','5','P','0','2')
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define EOF (-1)
#define F_RANGE_OVERLAPS 3857
#define TUPTABLE_H 
#define F_PG_STAT_GET_TUPLES_UPDATED 1932
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define ESCAPE_STRING_SYNTAX 'E'
#define RTKNNSearchStrategyNumber 15
#define __FLT64_MIN_EXP__ (-1021)
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PF_MAX 46
#define PROCSIGNAL_H 
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define LC_COLLATE __LC_COLLATE
#define XLogRecGetDataLen(decoder) ((decoder)->main_data_len)
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME_ID 3001
#define F_IN_RANGE_TIME_INTERVAL 4137
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define SHMEM_INDEX_KEYSIZE (48)
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define isalnum(c) __isctype((c), _ISalnum)
#define DYEAR "year"
#define __FDS_BITS(set) ((set)->fds_bits)
#define UNITS 17
#define XLogRecPtrIsInvalid(r) ((r) == InvalidXLogRecPtr)
#define F_TEXTOCTETLEN 1374
#define F_SPG_TEXT_INNER_CONSISTENT 4030
#define __FLT16_MIN_10_EXP__ (-4)
#define F_INT4SEND 2407
#define __UINT16_MAX__ 0xffff
#define F_PG_STAT_GET_TUPLES_RETURNED 1929
#define F_INT8INC_ANY 2804
#define HeapTupleHeaderGetDatumLength(tup) VARSIZE(tup)
#define EIDRM 43
#define F_AGGREGATE_DUMMY 2050
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define F_CIRCLE_MUL_PT 1148
#define _PC_NAME_MAX _PC_NAME_MAX
#define F_JSONB_OUT 3804
#define F_NUMERIC_DESERIALIZE 3336
#define HAVE_STRUCT_TM_TM_ZONE 1
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define PG_HAVE_ATOMIC_FETCH_AND_U32 
#define INTSTYLE_POSTGRES 0
#define F_POINTS_BOX 1421
#define F_BE_LO_TELL 958
#define palloc0_object(type) ((type *) palloc0(sizeof(type)))
#define F_DLOG10 1339
#define HEAP_XMAX_KEYSHR_LOCK 0x0010
#define F_INT4EQ 65
#define MaxLockTupleMode LockTupleExclusive
#define F_JSON_BUILD_ARRAY 3198
#define F_PG_STAT_GET_XACT_NUMSCANS 3037
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ERRCODE_INTERNAL_ERROR MAKE_SQLSTATE('X','X','0','0','0')
#define F_PGSQL_VERSION 89
#define ACL_ALL_RIGHTS_STR "arwdDxtXUCTc"
#define RelationRelationId 1259
#define __siginfo_t_defined 1
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define F_CHARLE 72
#define F_INT4GT 147
#define SIGEV_THREAD SIGEV_THREAD
#define IPV6_2292PKTINFO 2
#define PROCLIST_TYPES_H 
#define AF_IUCV PF_IUCV
#define F_IN_RANGE_NUMERIC_NUMERIC 4141
#define F_RANGE_INTERSECT 3868
#define F_PG_COLLATION_IS_VISIBLE 3815
#define __UINT64_C(c) c ## UL
#define F_XMLTOTEXT 2922
#define F_INT4IN 42
#define ILL_ILLTRP ILL_ILLTRP
#define isprint(c) __isctype((c), _ISprint)
#define BKPIMAGE_HAS_HOLE 0x01
#define SET_VARSIZE_4B_C(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2) | 0x02)
#define ERRCODE_INVALID_XML_PROCESSING_INSTRUCTION MAKE_SQLSTATE('2','2','0','0','T')
#define lfourth_int(l) lfirst_int(lnext(lnext(lnext(list_head(l)))))
#define RELPATH_H 
#define FIELDNO_AGGSTATE_CURRENT_SET 20
#define _STDC_PREDEF_H 1
#define PERFORM_DELETION_SKIP_EXTENSIONS 0x0010
#define F_CHARLT 1246
#define F_REGCONFIGOUT 3737
#define PGDLLEXPORT 
#define DEFAULT_SPINS_PER_DELAY 100
#define PARTITION_STRATEGY_HASH 'h'
#define HAVE_GCC__SYNC_INT32_CAS 1
#define SOCK_DGRAM SOCK_DGRAM
#define F_INT4LE 149
#define F_INT4LT 66
#define F_HASHOIDVECTOR 457
#define DN_RENAME 0x00000010
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define ERRCODE_INDEX_CORRUPTED MAKE_SQLSTATE('X','X','0','0','2')
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define FKCONSTR_ACTION_CASCADE 'c'
#define F_SIMILAR_ESCAPE 1623
#define _SYS_SOCKET_H 1
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define MSG_CONFIRM MSG_CONFIRM
#define PF_FILE PF_LOCAL
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define __FLT128_MAX_EXP__ 16384
#define F_INT4NE 144
#define INT_FAST64_WIDTH 64
#define FRAMEOPTION_END_CURRENT_ROW 0x00400
#define F_BE_LO_CREATE 715
#define F_HAS_DATABASE_PRIVILEGE_ID_ID 2253
#define PARTDEFS_H 
#define F_PG_COLUMN_IS_UPDATABLE 3843
#define F_INT4OR 1899
#define ControlFileLock (&MainLWLockArray[9].lock)
#define F_RANGE_UPPER_INF 3854
#define DTK_NUMBER 0
#define _POSIX_STREAM_MAX 8
#define F_INT4PL 177
#define IPV6_MULTICAST_HOPS 18
#define ACL_ALL_RIGHTS_TYPE (ACL_USAGE)
#define F_PG_OPERATOR_IS_VISIBLE 2082
#define F_RI_FKEY_NOACTION_DEL 1654
#define INTALIGN(LEN) TYPEALIGN(ALIGNOF_INT, (LEN))
#define isupper_l(c,l) __isupper_l ((c), (l))
#define F_VOID_IN 2298
#define HAVE_LIBPAM 1
#define F_PG_GET_EXPR 1716
#define ACL_EXECUTE (1<<7)
#define IP_PKTOPTIONS 9
#define USE_POSIX_FADVISE 
#define RTBelowStrategyNumber 10
#define _POSIX_TRACE_INHERIT -1
#define __stub_gtty 
#define F_INT48DIV 1281
#define ACL_ALL_RIGHTS_RELATION (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_DELETE|ACL_TRUNCATE|ACL_REFERENCES|ACL_TRIGGER)
#define F_TIMESTAMPTZ_IN 1150
#define si_utime _sifields._sigchld.si_utime
#define F_TSQUERY_CMP 3668
#define ItemIdGetLength(itemId) ((itemId)->lp_len)
#define MSG_BATCH MSG_BATCH
#define LC_PAPER __LC_PAPER
#define HAVE__BUILTIN_BSWAP16 1
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define STRATNUM_H 
#define FFSYNC O_FSYNC
#define __FLT64X_DIG__ 33
#define F_GENERATE_SERIES_INT8 1069
#define __wur __attribute_warn_unused_result__
#define ERRCODE_TRIGGERED_DATA_CHANGE_VIOLATION MAKE_SQLSTATE('2','7','0','0','0')
#define __FLT16_DIG__ 3
#define PageGetContents(page) ((char *) (page) + MAXALIGN(SizeOfPageHeaderData))
#define SET_LOCKTAG_ADVISORY(locktag,id1,id2,id3,id4) ((locktag).locktag_field1 = (id1), (locktag).locktag_field2 = (id2), (locktag).locktag_field3 = (id3), (locktag).locktag_field4 = (id4), (locktag).locktag_type = LOCKTAG_ADVISORY, (locktag).locktag_lockmethodid = USER_LOCKMETHOD)
#define F_REGEXP_MATCHES 2764
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define VARATT_IS_EXTERNAL_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define PG_GETARG_FLOAT8(n) DatumGetFloat8(PG_GETARG_DATUM(n))
#define SIG_UNBLOCK 1
#define F_ACLITEMIN 1031
#define UINT_FAST16_MAX (18446744073709551615UL)
#define SIGTSTP 20
#define IN_CLASSB_MAX 65536
#define Int8GetDatum(X) ((Datum) (X))
#define F_PG_IS_OTHER_TEMP_SCHEMA 2855
#define MovedPartitionsBlockNumber InvalidBlockNumber
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define SEEK_SET 0
#define EL2HLT 51
#define F_PG_REPLICATION_SLOT_ADVANCE 3878
#define __ARM_64BIT_STATE 1
#define F_PG_LS_DIR 3297
#define SIZEOF_OFF_T 8
#define MAXPGPATH 1024
#define F_MXID_AGE 3939
#define SO_ACCEPTCONN 30
#define CLOCK_MONOTONIC_COARSE 6
#define PageGetSpecialSize(page) ((uint16) (PageGetPageSize(page) - ((PageHeader)(page))->pd_special))
#define __SIZEOF_INT128__ 16
#define VARSIZE_ANY_EXHDR(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR)-VARHDRSZ_EXTERNAL : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR)-VARHDRSZ_SHORT : VARSIZE_4B(PTR)-VARHDRSZ))
#define F_NUMERIC_ACCUM_INV 3548
#define GRAPHID_GET_DATUM(x) Int64GetDatum(x)
#define F_PG_EVENT_TRIGGER_TABLE_REWRITE_REASON 4567
#define _BITS_TYPESIZES_H 1
#define ILL_COPROC ILL_COPROC
#define USE_OPENSSL_RANDOM 1
#define LOCKBIT_ON(lockmode) (1 << (lockmode))
#define RELCACHE_INIT_FILENAME "pg_internal.init"
#define EINVAL 22
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define ERRCODE_INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','3')
#define RAND_MAX 2147483647
#define _DIRENT_MATCHES_DIRENT64 1
#define __FLT64X_HAS_INFINITY__ 1
#define GENBKI_H 
#define SS_ONSTACK SS_ONSTACK
#define F_NETWORK_SUPEQ 930
#define PageXLogRecPtrGet(val) ((uint64) (val).xlogid << 32 | (val).xrecoff)
#define Anum_pg_class_relreplident 26
#define IndexTupleHasNulls(itup) ((((IndexTuple) (itup))->t_info & INDEX_NULL_MASK))
#define _SC_PIPE _SC_PIPE
#define UINT16_WIDTH 16
#define F_NETWORKJOINSEL 3561
#define HAVE_LONG_INT_64 1
#define __INT16_MAX__ 0x7fff
#define __THROWNL __attribute__ ((__nothrow__))
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define F_PG_STAT_GET_DB_CONFLICT_ALL 3070
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define _POSIX_QLIMIT 1
#define BTGreaterStrategyNumber 5
#define AG_RETURN_GRAPHID(x) return GRAPHID_GET_DATUM(x)
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define SOL_NETBEUI 267
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define F_JSON_TO_TSVECTOR_BYID 4216
#define LC_NUMERIC __LC_NUMERIC
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define AF_MPLS PF_MPLS
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define NOTICE 18
#define IPV6_PMTUDISC_DO 2
#define F_PG_GET_VIEWDEF_NAME_EXT 2505
#define STA_MODE 0x4000
#define F_NUMERIC_FLOAT4 1745
#define __F_GETOWN_EX 16
#define SpecTokenOffsetNumber 0xfffe
#define F_NUMERIC_FLOAT8 1746
#define Anum_pg_class_relnamespace 2
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define TEXTDOMAIN NULL
#define OUTER_VAR 65001
#define F_NUMERIC_POLY_DESERIALIZE 3340
#define F_NUMERIC_TRANSFORM 3157
#define ADJ_OFFSET_SS_READ 0xa001
#define F_GENERATE_SUBSCRIPTS 1191
#define SOL_IRDA 266
#define MAXDIM 6
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define HeapTupleHeaderGetNatts(tup) ((tup)->t_infomask2 & HEAP_NATTS_MASK)
#define DAGO "ago"
#define SO_ERROR 4
#define _POSIX_C_SOURCE 200809L
#define InvalidOffsetNumber ((OffsetNumber) 0)
#define F_VARBIT_OUT 1580
#define F_MKTINTERVAL 676
#define F_RELTIMEGE 262
#define VARATT_CONVERTED_SHORT_SIZE(PTR) (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT)
#define ACL_ID_PUBLIC 0
#define F_PG_READ_BINARY_FILE_OFF_LEN 3827
#define SO_SNDBUFFORCE 32
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define HAVE_DECL_STRTOULL 1
#define _POSIX_V7_LPBIG_OFFBIG -1
#define F_INT8SMALLER 1237
#define OffsetToPointer(base,offset) ((void *)((char *) base + offset))
#define AGTENTRY_IS_AGTYPE 0x70000000
#define SIGCONT 18
#define XACT_COMPLETION_APPLY_FEEDBACK (1U << 29)
#define ACL_ALL_RIGHTS_FUNCTION (ACL_EXECUTE)
#define F_BTRIM 884
#define ERRCODE_OUT_OF_MEMORY MAKE_SQLSTATE('5','3','2','0','0')
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define AG_EDGE_ACCESS_FUNCTION_ID "age_id"
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define F_INT2SEND 2405
#define _SC_SELECT _SC_SELECT
#define _PATH_SERVICES "/etc/services"
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define HAVE_UNSETENV 1
#define _LFS64_LARGEFILE 1
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define PF_NETBEUI 13
#define SO_MAX_PACING_RATE 47
#define F_WINDOW_LEAD_WITH_OFFSET_AND_DEFAULT 3111
#define F_INT4_SUM 1841
#define _LFS64_ASYNCHRONOUS_IO 1
#define XLogRecGetPrev(decoder) ((decoder)->decoded_record->xl_prev)
#define F_ABSTIME_TIMESTAMP 2023
#define F_SHOW_CONFIG_BY_NAME_MISSING_OK 3294
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define ag_label_relation_id() ag_relation_id("ag_label", "table")
#define F_TIDSMALLER 2796
#define FALLOC_FL_KEEP_SIZE 0x01
#define ObjectIdGetDatum(X) ((Datum) (X))
#define STATUS_ERROR (-1)
#define SIGFPE 8
#define F_PG_LAST_XACT_REPLAY_TIMESTAMP 3830
#define __stub_sigreturn 
#define F_INT82EQ 1856
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define F_VARBITTYPMODOUT 2921
#define Assert(condition) ((void)true)
#define SO_DETACH_FILTER 27
#define __ELF__ 1
#define LOCK_MAND 32
#define DTK_MICROSEC 30
#define INT8_C(c) c
#define F_TIMESTAMP_SMALLER 1195
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define F_DATE_TIMESTAMPTZ 1174
#define S_IFDIR __S_IFDIR
#define F_PG_STAT_GET_ACTIVITY 2022
#define EBUSY 16
#define __UWORD_TYPE unsigned long int
#define DSM_H 
#define F_OFD_SETLK 37
#define F_NUMERIC_INC 1764
#define F_INT82GE 1861
#define LABEL_ID_SEQ_NAME "_label_id_seq"
#define F_GINARRAYEXTRACT 2743
#define TRAP_UNK TRAP_UNK
#define F_INT82GT 1859
#define F_TO_JSONB 3787
#define __FLT64_IS_IEC_60559__ 2
#define F_TIMETYPMODIN 2909
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define F_TINTERVALRECV 2466
#define NI_NUMERICSERV 2
#define F_INT8OUT 461
#define F_DATE_LT_TIMESTAMPTZ 2351
#define F_GIST_POLY_COMPRESS 2586
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define F_JSONB_ARRAY_ELEMENT 3215
#define STA_FLL 0x0008
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define SQL_STR_DOUBLE(ch,escape_backslash) ((ch) == '\'' || ((ch) == '\\' && (escape_backslash)))
#define ERRCODE_FDW_INVALID_HANDLE MAKE_SQLSTATE('H','V','0','0','B')
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define MSG_OOB MSG_OOB
#define SHRT_MAX __SHRT_MAX__
#define SET_LOCKTAG_VIRTUALTRANSACTION(locktag,vxid) ((locktag).locktag_field1 = (vxid).backendId, (locktag).locktag_field2 = (vxid).localTransactionId, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_VIRTUALTRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define HAVE__STATIC_ASSERT 1
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define F_BINARY_UPGRADE_CREATE_EMPTY_EXTENSION 3591
#define ERRCODE_FDW_INVALID_COLUMN_NUMBER MAKE_SQLSTATE('H','V','0','0','8')
#define ERRCODE_INVALID_SCHEMA_DEFINITION MAKE_SQLSTATE('4','2','P','1','5')
#define F_VOID_RECV 3120
#define __FLT64_DIG__ 15
#define EROFS 30
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define AttributeNumberIsValid(attributeNumber) ((bool) ((attributeNumber) != InvalidAttrNumber))
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define HAVE_IPV6 1
#define BKI_ROWTYPE_OID(oid,oidmacro) 
#define F_BIT_OUT 1565
#define F_XIDSEND 2441
#define F_TIMESTAMP_LARGER 1196
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define F_GTSQUERY_SAME 3699
#define PG_DYNSHMEM_MMAP_FILE_PREFIX "mmap."
#define SO_BUSY_POLL_BUDGET 70
#define F_INT82LE 1860
#define F_INT82LT 1858
#define F_PG_POSTMASTER_START_TIME 2560
#define __glibc_c99_flexarr_available 1
#define F_TINTERVALEND 273
#define __WCHAR_T__ 
#define HAVE_LDAP_H 1
#define ELIBACC 79
#define F_INT82MI 838
#define F_BRIN_INCLUSION_ADD_VALUE 4106
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define F_BINARY_UPGRADE_SET_NEXT_TOAST_PG_CLASS_OID 3588
#define F_ABSTIMERECV 2462
#define NI_DGRAM 16
#define JULIAN_MINDAY (24)
#define TRAP_BRANCH TRAP_BRANCH
#define PG_RETURN_VARCHAR_P(x) PG_RETURN_POINTER(x)
#define F_TIMESTAMPTZ_EQ_DATE 2379
#define F_TIMESTAMP_FINITE 1389
#define linux 1
#define F_RANGE_CONTAINS_ELEM 3858
#define list_make5_oid(x1,x2,x3,x4,x5) lcons_oid(x1, list_make4_oid(x2, x3, x4, x5))
#define F_IN_RANGE_INT8_INT8 4126
#define __ss_aligntype unsigned long int
#define Anum_pg_attribute_attmissingval 24
#define F_I8TOF 652
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define _STRINGS_H 1
#define SI_MESGQ SI_MESGQ
#define DSM_IMPL_MMAP 4
#define _VA_LIST_DEFINED 
#define F_BITOVERLAY 3030
#define FIELDNO_TUPLETABLESLOT_VALUES 10
#define __BLKSIZE_T_TYPE __S32_TYPE
#define __INT_LEAST16_MAX__ 0x7fff
#define SCM_SRCRT IPV6_RXSRCRT
#define HAVE_STRNLEN 1
#define F_FLOAT84EQ 305
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define UCHAR_WIDTH 8
#define UINT64_WIDTH 64
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define XLogRecHasBlockImage(decoder,block_id) ((decoder)->blocks[block_id].has_image)
#define HAVE__BOOL 1
#define F_TXID_SNAPSHOT_RECV 2941
#define __SIG_ATOMIC_WIDTH__ 32
#define si_stime _sifields._sigchld.si_stime
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define __INT_LEAST64_TYPE__ long int
#define F_JSONB_NUMERIC 3449
#define F_ARRAY_AGG_ARRAY_FINALFN 4052
#define F_JSONB_BUILD_OBJECT_NOARGS 3274
#define ENTRY_ID_BITS (32 + 16)
#define Anum_pg_class_relispartition 27
#define VARATT_CAN_MAKE_SHORT(PTR) (VARATT_IS_4B_U(PTR) && (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT) <= VARATT_SHORT_MAX)
#define DT_UNKNOWN DT_UNKNOWN
#define ADJ_SETOFFSET 0x0100
#define F_TEXTRECV 2414
#define F_FLOAT8_NUMERIC 1743
#define F_PG_STAT_GET_DB_STAT_RESET_TIME 3074
#define F_INTERVAL_SMALLER 1197
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME 3028
#define F_TIMETYPMODOUT 2910
#define F_RI_FKEY_SETNULL_UPD 1651
#define PRS2_NEW_VARNO 2
#define DA_D "ad"
#define RTAboveStrategyNumber 11
#define PageGetItem(page,itemId) ( AssertMacro(PageIsValid(page)), AssertMacro(ItemIdHasStorage(itemId)), (Item)(((char *)(page)) + ItemIdGetOffset(itemId)) )
#define F_LSEG_CENTER 225
#define F_ARRAY_LARGER 515
#define SOL_DCCP 269
#define AI_IDN 0x0040
#define F_RELTIMESEND 2465
#define ntohl(x) __bswap_32 (x)
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define ntohs(x) __bswap_16 (x)
#define F_PG_STAT_GET_BACKEND_DBID 1938
#define PG_HAVE_ATOMIC_INIT_U32 
#define __O_DIRECTORY 040000
#define LAST_OCLASS OCLASS_TRANSFORM
#define IS_HIGHBIT_SET(ch) ((unsigned char)(ch) & HIGHBIT)
#define F_FTOD 311
#define HAVE_DECL_STRLCAT 0
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define TIDBITMAP_H 
#define FPE_FLTINV FPE_FLTINV
#define F_HASH_NUMERIC_EXTENDED 780
#define F_SETLKW 7
#define HeapTupleSetHeapOnly(tuple) HeapTupleHeaderSetHeapOnly((tuple)->t_data)
#define F_XIDNEQ 3308
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define HeapTupleHeaderSetXvac(tup,xid) do { Assert((tup)->t_infomask & HEAP_MOVED); (tup)->t_choice.t_heap.t_field3.t_xvac = (xid); } while (0)
#define LABEL_KIND_VERTEX 'v'
#define ERRCODE_IDLE_IN_TRANSACTION_SESSION_TIMEOUT MAKE_SQLSTATE('2','5','P','0','3')
#define F_ARRAY_POSITION_START 3278
#define F_HAS_FUNCTION_PRIVILEGE_ID_ID 2259
#define ERRCODE_E_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','4')
#define F_INET_GIST_FETCH 3573
#define __FLT32_MIN_10_EXP__ (-37)
#define F_PG_TRIGGER_DEPTH 3163
#define DEFAULT_LOCKMETHOD 1
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define F_TIME_HASH 1688
#define HEAP_MOVED (HEAP_MOVED_OFF | HEAP_MOVED_IN)
#define PG_HAVE_ATOMIC_INIT_U64 
#define __FLT32X_DIG__ 15
#define F_PG_DEPENDENCIES_IN 3404
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define SVE_VL_MIN __SVE_VL_MIN
#define HAVE_LANGINFO_H 1
#define F_INT2_AVG_ACCUM_INV 3570
#define F_JSON_TO_RECORDSET 3205
#define pairingheap_is_singular(h) ((h)->ph_root && (h)->ph_root->first_child == NULL)
#define ENAMETOOLONG 36
#define ERRCODE_DEPENDENT_OBJECTS_STILL_EXIST MAKE_SQLSTATE('2','B','P','0','1')
#define ERRCODE_FDW_OUT_OF_MEMORY MAKE_SQLSTATE('H','V','0','0','1')
#define F_CASH_MUL_INT8 3344
#define ACL_UPDATE (1<<2)
#define CLD_STOPPED CLD_STOPPED
#define F_REGCONFIGRECV 3738
#define gen_label_relation_name(label_name) (label_name)
#define __DBL_HAS_QUIET_NAN__ 1
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define MinSizeOfXactAssignment offsetof(xl_xact_assignment, xsub)
#define ERRCODE_INTERVAL_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','1','5')
#define F_INT8ABS 1230
#define Anum_ag_label_vertex_table_id 1
#define AF_VSOCK PF_VSOCK
#define F_TSVECTOR_UPDATE_TRIGGER_BYID 3752
#define ARR_DIMS(a) ((int *) (((char *) (a)) + sizeof(ArrayType)))
#define LABEL_ID_MAX PG_UINT16_MAX
#define F_REGCLASSSEND 2453
#define ACLITEM_SET_RIGHTS(item,rights) ((item).ai_privs = (AclMode) (rights))
#define F_REGDICTIONARYOUT 3772
#define RTGreaterStrategyNumber 22
#define F_REGEXEQSEL 1818
#define F_PG_STAT_GET_DB_CONFLICT_BUFFERPIN 3068
#define AF_LOCAL PF_LOCAL
#define F_OIDVECTOREQ 679
#define __SIZEOF_FLOAT__ 4
#define HAVE_INTPTR_T 1
#define F_WINDOW_FIRST_VALUE 3112
#define HeapTupleIsValid(tuple) PointerIsValid(tuple)
#define IS_OUTER_JOIN(jointype) (((1 << (jointype)) & ((1 << JOIN_LEFT) | (1 << JOIN_FULL) | (1 << JOIN_RIGHT) | (1 << JOIN_ANTI))) != 0)
#define GUC_NOT_IN_SAMPLE 0x0020
#define IP_RECVTTL 12
#define __pic__ 2
#define XLOG_XACT_ABORT_PREPARED 0x40
#define F_OIDVECTORGE 680
#define MaxOffsetNumber ((OffsetNumber) (BLCKSZ / sizeof(ItemIdData)))
#define F_NETWORK_NETWORK 683
#define F_OIDVECTORGT 681
#define __ARM_ARCH_8A 1
#define __stub_chflags 
#define ERRCODE_LOCK_NOT_AVAILABLE MAKE_SQLSTATE('5','5','P','0','3')
#define HAVE_INT128 1
#define GUC_UNIT_BYTE 0x8000
#define __FLT32_DECIMAL_DIG__ 9
#define JULIAN_MINYEAR (-4713)
#define __USE_POSIX 1
#define PG_CRC32C_H 
#define DatumGetNumeric(X) ((Numeric) PG_DETOAST_DATUM(X))
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define F_DEGREES 1608
#define HAVE_GETIFADDRS 1
#define F_MAKEACLITEM 1365
#define HAVE_RANDOM 1
#define PAI_OVERWRITE (1 << 0)
#define F_OIDVECTORIN 54
#define BUFSIZ 8192
#define __LDBL_REDIR2_DECL(name) 
#define isdigit(c) __isctype((c), _ISdigit)
#define __FLT_MAX_10_EXP__ 38
#define SizeofHeapTupleHeader offsetof(HeapTupleHeaderData, t_bits)
#define F_DATE_SEND 2469
#define F_FLOAT4PL 204
#define UINT_LEAST16_WIDTH 16
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define XACT_FLAGS_ACCESSEDTEMPNAMESPACE (1U << 2)
#define ELIBSCN 81
#define F_WINDOW_LAG_WITH_OFFSET_AND_DEFAULT 3108
#define ShmemIndexLock (&MainLWLockArray[1].lock)
#define F_TEXT_LEFT 3060
#define F_PG_READ_FILE 4100
#define LWLOCK_MINIMAL_SIZE (sizeof(LWLock) <= 32 ? 32 : 64)
#define AF_ALG PF_ALG
#define F_TRIGGER_IN 2300
#define _SC_2_PBS _SC_2_PBS
#define AF_QIPCRTR PF_QIPCRTR
#define INT_FAST32_WIDTH __WORDSIZE
#define IPV6_ADDR_PREFERENCES 72
#define __DBL_MAX_10_EXP__ 308
#define F_PT_CONTAINED_CIRCLE 1478
#define FRAMEOPTION_START_OFFSET_FOLLOWING 0x02000
#define __LC_COLLATE 3
#define DatumGetBpCharPCopy(X) ((BpChar *) PG_DETOAST_DATUM_COPY(X))
#define RTEqualStrategyNumber 18
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define HAVE_DECL_STRLCPY 0
#define F_GIST_POINT_FETCH 3282
#define F_TIMESTAMPTZ_CMP_DATE 2383
#define ADJ_TICK 0x4000
#define F_PG_GET_TRIGGERDEF_EXT 2730
#define BKI_SHARED_RELATION 
#define __TIMESIZE 64
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define BKI_SCHEMA_MACRO 
#define F_TEXT_CONCAT_WS 3059
#define F_OIDVECTORNE 619
#define F_ICNLIKEJOINSEL 1817
#define F_QUOTE_IDENT 1282
#define SIGCLD SIGCHLD
#define F_PG_NODE_TREE_IN 195
#define __FLT16_HAS_QUIET_NAN__ 1
#define BackendIdForTempRelations() (ParallelMasterBackendId == InvalidBackendId ? MyBackendId : ParallelMasterBackendId)
#define ERRCODE_FDW_INVALID_DATA_TYPE_DESCRIPTORS MAKE_SQLSTATE('H','V','0','0','6')
#define _CS_V7_ENV _CS_V7_ENV
#define HASH_COMPARE 0x0080
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define __gid_t_defined 
#define FRAMEOPTION_END_UNBOUNDED_PRECEDING 0x00040
#define LC_MESSAGES __LC_MESSAGES
#define F_CIDIN 52
#define MONTH 1
#define Anum_ag_label_edge_table_end_id 3
#define F_DLOG1 234
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define _POSIX2_EXPR_NEST_MAX 32
#define TRY_AGAIN 2
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __clock_t_defined 1
#define linitial_int(l) lfirst_int(list_head(l))
#define __GLIBC_MINOR__ 35
#define __UINT_LEAST32_TYPE__ unsigned int
#define _XBS5_ILP32_OFFBIG -1
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define AF_ASH PF_ASH
#define IPPROTO_GRE IPPROTO_GRE
#define DOUBLEALIGN(LEN) TYPEALIGN(ALIGNOF_DOUBLE, (LEN))
#define F_BIT_AND 1673
#define __LDBL_MIN_EXP__ (-16381)
#define XLOG_XACT_ABORT 0x20
#define VARTAG_EXTERNAL(PTR) VARTAG_1B_E(PTR)
#define F_PG_REPLICATION_ORIGIN_CREATE 6003
#define F_CIRCLE_AREA 1468
#define F_PG_FILENODE_RELATION 3454
#define lsecond_int(l) lfirst_int(lnext(list_head(l)))
#define BUS_OBJERR BUS_OBJERR
#define F_PG_CURRENT_WAL_INSERT_LSN 2852
#define _POSIX_MAX_CANON 255
#define USE_SYSV_SHARED_MEMORY 1
#define ERRCODE_ESCAPE_CHARACTER_CONFLICT MAKE_SQLSTATE('2','2','0','0','B')
#define IPV6_RECVPKTINFO 49
#define F_TSVECTOR_DELETE_STR 3321
#define stdout stdout
#define NL_SETMAX INT_MAX
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define INTPTR_WIDTH __WORDSIZE
#define F_RANGE_ADJACENT 3862
#define HAVE_UTIME_H 1
#define DatumGetTextPCopy(X) ((text *) PG_DETOAST_DATUM_COPY(X))
#define __INT_LEAST8_MAX__ 0x7f
#define __LDBL_MAX_EXP__ 16384
#define F_BOOL_INT4 2558
#define __FLT32X_MAX_10_EXP__ 308
#define ____mbstate_t_defined 1
#define ADJ_STATUS 0x0010
#define F_TO_TSQUERY_BYID 3746
#define SO_ATTACH_REUSEPORT_EBPF 52
#define PG_UINT64_MAX UINT64CONST(0xFFFFFFFFFFFFFFFF)
#define F_TSQUERYSEND 3640
#define F_SPGHANDLER 334
#define F_ANYARRAY_RECV 2502
#define F_INT8DEC_ANY 3547
#define O_RDONLY 00
#define F_ICREGEXEQSEL 1820
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define DatumGetHeapTupleHeader(X) ((HeapTupleHeader) PG_DETOAST_DATUM(X))
#define AGTENTRY_OFFLENMASK 0x0FFFFFFF
#define SO_RCVBUFFORCE 33
#define F_GIN_EXTRACT_JSONB 3482
#define ECONNREFUSED 111
#define ERRCODE_INVALID_ARGUMENT_FOR_POWER_FUNCTION MAKE_SQLSTATE('2','2','0','1','F')
#define _BITS_SIGNUM_GENERIC_H 1
#define BKI_DEFAULT(value) 
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define AutovacuumLock (&MainLWLockArray[22].lock)
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define InvalidCommandId (~(CommandId)0)
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_ID 3005
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define HeapTupleHeaderGetOid(tup) ( ((tup)->t_infomask & HEAP_HASOID) ? *((Oid *) ((char *)(tup) + (tup)->t_hoff - sizeof(Oid))) : InvalidOid )
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define _LP64 1
#define F_I4TOCHAR 78
#define si_call_addr _sifields._sigsys._call_addr
#define F_STRING_AGG_FINALFN 3536
#define MAXALIGN(LEN) TYPEALIGN(MAXIMUM_ALIGNOF, (LEN))
#define F_REGOPERSEND 2449
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE IPPROTO_NONE
#define F_BOOLOUT 1243
#define __S_IFSOCK 0140000
#define __stub_stty 
#define list_make3_oid(x1,x2,x3) lcons_oid(x1, list_make2_oid(x2, x3))
#define GetSysCacheHashValue3(cacheId,key1,key2,key3) GetSysCacheHashValue(cacheId, key1, key2, key3, 0)
#define __ASM_GENERIC_SOCKIOS_H 
#define SEGV_MAPERR SEGV_MAPERR
#define DTERR_MD_FIELD_OVERFLOW (-3)
#define ECHRNG 44
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define EAI_ADDRFAMILY -9
#define FirstCommandId ((CommandId) 0)
#define ag_graph_namespace_index_id() ag_relation_id("ag_graph_namespace_index", "index")
#define _SC_REGEXP _SC_REGEXP
#define F_DCOS 1605
#define F_INET_ABBREV 598
#define _SC_IOV_MAX _SC_IOV_MAX
#define _SC_PASS_MAX _SC_PASS_MAX
#define F_VARBIT 1687
#define F_SCALARLESEL 336
#define PG_RETURN_ARRAYTYPE_P(x) PG_RETURN_POINTER(x)
#define O_ASYNC 020000
#define F_REGPROCEDURERECV 2446
#define __stub___compat_bdflush 
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define O_TRUNC 01000
#define FLOAT4PASSBYVAL true
#define F_BTINT8CMP 842
#define PG_RETURN_FLOAT8(x) return Float8GetDatum(x)
#define F_DCEIL 2308
#define PG_GETARG_NUMERIC(n) DatumGetNumeric(PG_GETARG_DATUM(n))
#define LockHashPartition(hashcode) ((hashcode) % NUM_LOCK_PARTITIONS)
#define F_MACADDR8_CMP 4119
#define F_TRIGGER_OUT 2301
#define PG_RE_THROW() pg_re_throw()
#define __PID_T_TYPE __S32_TYPE
#define HAVE_POLL 1
#define _SC_AIO_MAX _SC_AIO_MAX
#define edge_tuple_id Anum_ag_label_edge_table_id - 1
#define F_ABSTIMELE 255
#define PageGetMaxOffsetNumber(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData ? 0 : ((((PageHeader) (page))->pd_lower - SizeOfPageHeaderData) / sizeof(ItemIdData)))
#define ENOTCONN 107
#define F_SHA512_BYTEA 3422
#define IN_CLASSB_NET 0xffff0000
#define F_HAS_SEQUENCE_PRIVILEGE_NAME 2185
#define F_INT48EQ 852
#define VARATT_SHORT_MAX 0x7F
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define INTERVAL_RANGE(t) (((t) >> 16) & INTERVAL_RANGE_MASK)
#define _POSIX_UIO_MAXIOV 16
#define F_PRSD_START 3717
#define P_tmpdir "/tmp"
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _POSIX_MESSAGE_PASSING 200809L
#define __WORDSIZE_TIME64_COMPAT32 0
#define EPFNOSUPPORT 96
#define F_JSONB_CMP 4044
#define intVal(v) (((Value *)(v))->val.ival)
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME_NAME 3024
#define F_MAKE_TIMESTAMPTZ 3462
#define HAVE_STDBOOL_H 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define F_INT48GE 857
#define F_HAS_TABLESPACE_PRIVILEGE_NAME_NAME 2390
#define F_TSQUERY_PHRASE_DISTANCE 5004
#define F_LINE_RECV 2488
#define F_INT48GT 855
#define SEQ_COL_CALLED 3
#define AMPM 9
#define F_BPCHAR_SORTSUPPORT 3328
#define F_INTERVAL_EQ 1162
#define F_PG_STAT_GET_BGWRITER_BUF_WRITTEN_CLEAN 2772
#define LP_REDIRECT 2
#define ItemPointerSetInvalid(pointer) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), InvalidBlockNumber), (pointer)->ip_posid = InvalidOffsetNumber )
#define _SIZE_T 
#define _IO_ERR_SEEN 0x0020
#define linitial_node(type,l) castNode(type, linitial(l))
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define F_INT4GE 150
#define ACL_ALL_RIGHTS_FDW (ACL_USAGE)
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define SOCK_STREAM SOCK_STREAM
#define F_PG_CONTROL_CHECKPOINT 3442
#define ARR_DATA_PTR(a) (((char *) (a)) + ARR_DATA_OFFSET(a))
#define __BIG_ENDIAN 4321
#define F_TEXTOUT 47
#define store_att_byval(T,newdatum,attlen) do { switch (attlen) { case sizeof(char): *(char *) (T) = DatumGetChar(newdatum); break; case sizeof(int16): *(int16 *) (T) = DatumGetInt16(newdatum); break; case sizeof(int32): *(int32 *) (T) = DatumGetInt32(newdatum); break; case sizeof(Datum): *(Datum *) (T) = (newdatum); break; default: elog(ERROR, "unsupported byval length: %d", (int) (attlen)); break; } } while (0)
#define PG_HAVE_ATOMIC_READ_U32 
#define BOOL_MAX 1
#define F_PG_REPLICATION_ORIGIN_PROGRESS 6013
#define INTSTYLE_POSTGRES_VERBOSE 1
#define VARATT_IS_EXTERNAL_INDIRECT(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_INDIRECT)
#define ERRCODE_SNAPSHOT_TOO_OLD MAKE_SQLSTATE('7','2','0','0','0')
#define F_POINT_MUL 1443
#define ACL_H 
#define __SIZEOF_WCHAR_T__ 4
#define PG_GETARG_BYTEA_P(n) DatumGetByteaP(PG_GETARG_DATUM(n))
#define F_TS_RANK_TTF 3705
#define PG_BINARY_A "a"
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define F_INT48LE 856
#define F_TIMESTAMPTZ_RECV 2476
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define F_INT48LT 854
#define IPV6_AUTOFLOWLABEL 70
#define CHAR_WIDTH 8
#define F_RANGE_GIST_SAME 3881
#define F_NETWORK_FAMILY 711
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define F_CONTSEL 1302
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define EAI_SYSTEM -11
#define LOG2_NUM_PREDICATELOCK_PARTITIONS 4
#define S_IFMT __S_IFMT
#define XACT_XINFO_HAS_GID (1U << 7)
#define PF_MPLS 28
#define _BITS_TIME64_H 1
#define IP_NODEFRAG 22
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define ERRCODE_E_R_I_E_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('3','9','0','0','4')
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define USE_DSM_POSIX 
#define F_CLOSE_LSEG 1489
#define F_PG_HBA_FILE_RULES 3401
#define DN_MODIFY 0x00000002
#define F_REGTYPEIN 2220
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define F_INT48PL 1278
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define lthird(l) lfirst(lnext(lnext(list_head(l))))
#define O_NOFOLLOW __O_NOFOLLOW
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_ID_NAME 3002
#define POLL_ERR POLL_ERR
#define GET_LABEL_ID(id) (((uint64)id) >> ENTRY_ID_BITS)
#define F_ARRAYOVERLAP 2747
#define DTK_ISODOW 37
#define F_BTTEXT_PATTERN_CMP 2166
#define BTGreaterEqualStrategyNumber 4
#define UInt8GetDatum(X) ((Datum) (X))
#define SVE_VL_MAX __SVE_VL_MAX
#define AF_CAIF PF_CAIF
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define ispunct(c) __isctype((c), _ISpunct)
#define F_TEXT_FORMAT_NV 3540
#define POLL_IN POLL_IN
#define F_BOX_WIDTH 976
#define JULIAN 4
#define __fsfilcnt_t_defined 
#define ERRCODE_S_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','4')
#define HeapTupleHeaderClearHotUpdated(tup) ( (tup)->t_infomask2 &= ~HEAP_HOT_UPDATED )
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define F_PG_STAT_GET_DB_TUPLES_RETURNED 2758
#define ERRCODE_FDW_ERROR MAKE_SQLSTATE('H','V','0','0','0')
#define F_SET_FILE_RW_HINT 1038
#define F_TIME_HASH_EXTENDED 3409
#define PG_BINARY 0
#define LOG_DESTINATION_SYSLOG 2
#define F_ARRAY_SEND 2401
#define __va_list__ 
#define SO_SNDLOWAT 19
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define UINTMAX_C(c) c ## UL
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX_ASYNC_IO 1
#define HeapTupleHeaderSetXmax(tup,xid) ( (tup)->t_choice.t_heap.t_xmax = (xid) )
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define F_INT42MUL 171
#define iscntrl(c) __isctype((c), _IScntrl)
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define ERRCODE_CHARACTER_NOT_IN_REPERTOIRE MAKE_SQLSTATE('2','2','0','2','1')
#define __SIZEOF_DOUBLE__ 8
#define ERRCODE_FDW_NO_SCHEMAS MAKE_SQLSTATE('H','V','0','0','P')
#define MCAST_MSFILTER 48
#define PG_GETARG_BOOL(n) DatumGetBool(PG_GETARG_DATUM(n))
#define DTK_TIME_M (DTK_M(HOUR) | DTK_M(MINUTE) | DTK_ALL_SECS_M)
#define PG_LIST_H 
#define CHECK_FOR_INTERRUPTS() do { if (INTERRUPTS_PENDING_CONDITION()) ProcessInterrupts(); } while(0)
#define Anum_pg_attribute_attstattarget 4
#define F_TIMESTAMPTZ_NE_DATE 2382
#define F_INET_CLIENT_PORT 2197
#define _BITS_POSIX1_LIM_H 1
#define ADJ_NANO 0x2000
#define Anum_pg_class_relminmxid 30
#define SO_GET_FILTER SO_ATTACH_FILTER
#define forthree(cell1,list1,cell2,list2,cell3,list3) for ((cell1) = list_head(list1), (cell2) = list_head(list2), (cell3) = list_head(list3); (cell1) != NULL && (cell2) != NULL && (cell3) != NULL; (cell1) = lnext(cell1), (cell2) = lnext(cell2), (cell3) = lnext(cell3))
#define ScanDirectionIsForward(direction) ((bool) ((direction) == ForwardScanDirection))
#define F_CIDR_SEND 2499
#define ERRCODE_FDW_OPTION_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','J')
#define _T_SIZE 
#define StoreInvalidTransactionId(dest) (*(dest) = InvalidTransactionId)
#define F_NUMERIC_SERIALIZE 3335
#define REPLICA_IDENTITY_INDEX 'i'
#define CURSOR_OPT_FAST_PLAN 0x0020
#define F_REGEXP_SPLIT_TO_ARRAY_NO_FLAGS 2767
#define __va_arg_pack() __builtin_va_arg_pack ()
#define F_INT2_NUMERIC 1782
#define F_POLY_ABOVE 2569
#define __FLT32X_HAS_QUIET_NAN__ 1
#define va_end(v) __builtin_va_end(v)
#define ERRCODE_INVALID_TABLE_DEFINITION MAKE_SQLSTATE('4','2','P','1','6')
#define HAVE_LONG_LONG_INT 1
#define __INT_FAST16_WIDTH__ 64
#define F_TIME_MI_TIME 1690
#define F_VARCHARTYPMODOUT 2916
#define ELIBBAD 80
#define USE_PAM 1
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define __glibc_clang_prereq(maj,min) 0
#define ERRCODE_STATEMENT_TOO_COMPLEX MAKE_SQLSTATE('5','4','0','0','1')
#define PF_INET 2
#define _SC_SIGNALS _SC_SIGNALS
#define F_DIST_CPOINT 3290
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ATTRIBUTE_IDENTITY_BY_DEFAULT 'd'
#define F_INTERVAL_ACCUM 1843
#define F_PG_BLOCKING_PIDS 2561
#define _RWLOCK_INTERNAL_H 
#define UINT_FAST8_WIDTH 8
#define DSM_IMPL_POSIX 1
#define F_ENUM_RECV 3532
#define UINT16_MAX (65535)
#define IPV6_MINHOPCOUNT 73
#define F_GTSVECTOR_UNION 3651
#define SO_ZEROCOPY 60
#define ACLITEM_GET_PRIVS(item) ((item).ai_privs & 0xFFFF)
#define PF_RXRPC 33
#define __USE_XOPEN_EXTENDED 1
#define F_JSONB_DELETE 3302
#define __ASM_BITSPERLONG_H 
#define InvalidPid (-1)
#define _POSIX_TRACE_LOG -1
#define HAVE_UNSIGNED_LONG_LONG_INT 1
#define ACL_CREATE_TEMP (1<<10)
#define HeapTupleHeaderSetXmin(tup,xid) ( (tup)->t_choice.t_heap.t_xmin = (xid) )
#define IPV6_FREEBIND 78
#define AG_EDGE_ACCESS_FUNCTION_START_ID "age_start_id"
#define __ARM_ARCH_ISA_A64 1
#define MemSetLoop(start,val,len) do { long * _start = (long *) (start); long * _stop = (long *) ((char *) _start + (Size) (len)); while (_start < _stop) *_start++ = 0; } while (0)
#define TIMEZONE_GLOBAL timezone
#define SIG_IGN ((__sighandler_t) 1)
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define __STDC__ 1
#define ERRCODE_FDW_DYNAMIC_PARAMETER_VALUE_NEEDED MAKE_SQLSTATE('H','V','0','0','2')
#define F_INT8_TO_CHAR 1774
#define EEXIST 17
#define __PTRDIFF_TYPE__ long int
#define F_CLOCK_TIMESTAMP 2649
#define IP_UNICAST_IF 50
#define AccessExclusiveLock 8
#define DT_LNK DT_LNK
#define F_ACLDEFAULT_SQL 3943
#define VARATT_NOT_PAD_BYTE(PTR) (*((uint8 *) (PTR)) != 0)
#define F_PG_LAST_COMMITTED_XACT 3583
#define CATALOG_VERSION_NO 201809051
#define F_INT4_AVG_ACCUM 1963
#define HEAP_KEYS_UPDATED 0x2000
#define EAI_BADFLAGS -1
#define F_NETWORK_EQ 920
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define F_BINARY_UPGRADE_SET_NEXT_HEAP_PG_CLASS_OID 3586
#define INTSTYLE_ISO_8601 3
#define F_FLOAT4SEND 2425
#define F_INT8LE 471
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define ERRCODE_FDW_INVALID_USE_OF_NULL_POINTER MAKE_SQLSTATE('H','V','0','0','9')
#define DTK_TODAY 14
#define PageGetPageSize(page) ((Size) (((PageHeader) (page))->pd_pagesize_version & (uint16) 0xFF00))
#define MaxBlockNumber ((BlockNumber) 0xFFFFFFFE)
#define F_BRIN_MINMAX_OPCINFO 3383
#define ERRCODE_OPERATOR_INTERVENTION MAKE_SQLSTATE('5','7','0','0','0')
#define __UINTPTR_TYPE__ long unsigned int
#define F_INTERVAL_RECV 2478
#define F_PG_STAT_GET_DB_BLOCKS_HIT 1945
#define O_PATH __O_PATH
#define _SC_FIFO _SC_FIFO
#define F_TXID_CURRENT 2943
#define _SC_SPAWN _SC_SPAWN
#define BLOCK_H 
#define ERRCODE_INVALID_INDICATOR_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','1','0')
#define list_make1_oid(x1) lcons_oid(x1, NIL)
#define ERRCODE_NAME_TOO_LONG MAKE_SQLSTATE('4','2','6','2','2')
#define TIMESTAMP_MASK(b) (1 << (b))
#define PG_UINT8_MAX (0xFF)
#define SIG_SETMASK 2
#define ACL_ALL_RIGHTS_SCHEMA (ACL_USAGE|ACL_CREATE)
#define INTERVAL_FULL_PRECISION (0xFFFF)
#define __USE_ATFILE 1
#define F_GETLK 5
#define F_PG_READ_BINARY_FILE 3295
#define _POSIX_OPEN_MAX 20
#define DTK_DAY 21
#define F_NETWORK_CMP 926
#define DB_C "bc"
#define F_ANYELEMENT_OUT 2313
#define ERRCODE_TRIM_ERROR MAKE_SQLSTATE('2','2','0','2','7')
#define __FLT128_DECIMAL_DIG__ 36
#define LOG_DESTINATION_CSVLOG 8
#define WSTOPPED 2
#define F_RELTIMELE 261
#define list_make1(x1) lcons(x1, NIL)
#define list_make3(x1,x2,x3) lcons(x1, list_make2(x2, x3))
#define list_make4(x1,x2,x3,x4) lcons(x1, list_make3(x2, x3, x4))
#define list_make5(x1,x2,x3,x4,x5) lcons(x1, list_make4(x2, x3, x4, x5))
#define F_PG_XACT_COMMIT_TIMESTAMP 3581
#define F_ACLREMOVE 1036
#define __FLT_DECIMAL_DIG__ 9
#define EOHPGetRWDatum(eohptr) PointerGetDatum((eohptr)->eoh_rw_ptr)
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define AGT_GIN_FLAG_NULL 0x02
#define F_INET_SERVER_ADDR 2198
#define F_QUERY_TO_XMLSCHEMA 2927
#define PG_RETURN_VOID() return (Datum) 0
#define F_BE_LO_TRUNCATE64 3172
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _ASM_GENERIC_TYPES_H 
#define F_NOW 1299
#define F_REGPROCEDUREOUT 2213
#define F_JSONB_STRIP_NULLS 3262
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define F_GIST_BOX_PICKSPLIT 2582
#define PG_DIAG_CONSTRAINT_NAME 'n'
#define F_OPAQUE_OUT 2307
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define ATTSTATSSLOT_NUMBERS 0x02
#define F_HAS_SCHEMA_PRIVILEGE_ID 2273
#define F_LIKE_ESCAPE 1637
#define AF_NETROM PF_NETROM
#define F_JSONB_BUILD_OBJECT 3273
#define PG_GETARG_RAW_VARLENA_P(n) ((struct varlena *) PG_GETARG_POINTER(n))
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define IPV6_RTHDR_TYPE_0 0
#define EISDIR 21
#define _BITS_SIGEVENT_CONSTS_H 1
#define _CS_V6_ENV _CS_V6_ENV
#define ____sigset_t_defined 
#define RESUME_CANCEL_INTERRUPTS() do { Assert(QueryCancelHoldoffCount > 0); QueryCancelHoldoffCount--; } while(0)
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define HAS_TEST_AND_SET 
#define LONGALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_LONG, (LEN))
#define F_HAS_COLUMN_PRIVILEGE_NAME_NAME 3020
#define HeapTupleHeaderSetXminInvalid(tup) ( AssertMacro(!HeapTupleHeaderXminCommitted(tup)), ((tup)->t_infomask |= HEAP_XMIN_INVALID) )
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define F_JSONB_EXTRACT_PATH_TEXT 3940
#define AARR_DIMS(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.dims : ARR_DIMS((ArrayType *) (a)))
#define PG_PAGE_LAYOUT_VERSION 4
#define F_CIDR_IN 1267
#define Float4GetDatumFast(X) Float4GetDatum(X)
#define F_ICLIKEJOINSEL 1816
#define F_HAS_TABLE_PRIVILEGE_NAME 1926
#define VARRAWSIZE_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_rawsize)
#define F_TXID_SNAPSHOT_XMAX 2946
#define F_BTBOOLCMP 1693
#define F_BYTEA_SUBSTR 2012
#define F_INT2XOR 1894
#define ItemPointerCopy(fromPointer,toPointer) ( AssertMacro(PointerIsValid(toPointer)), AssertMacro(PointerIsValid(fromPointer)), *(toPointer) = *(fromPointer) )
#define F_TS_HEADLINE_JSONB_BYID_OPT 4201
#define __UINT_LEAST8_TYPE__ unsigned char
#define F_MACADDR8_GT 4116
#define F_BYTEAEQ 1948
#define F_FLOAT48DIV 280
#define _SC_LINE_MAX _SC_LINE_MAX
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define _BITS_SETJMP_H 1
#define _POSIX_PRIORITIZED_IO 200809L
#define PG_INT32_MAX (0x7FFFFFFF)
#define __stub_fchflags 
#define F_TIME_GE 1105
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define F_TIME_GT 1104
#define HEAP_LOCKED_UPGRADED(infomask) ( ((infomask) & HEAP_XMAX_IS_MULTI) != 0 && ((infomask) & HEAP_XMAX_LOCK_ONLY) != 0 && (((infomask) & (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)) == 0) )
#define F_BYTEAGT 1951
#define ERRCODE_NO_DATA MAKE_SQLSTATE('0','2','0','0','0')
#define F_BOX_ABOVE 2565
#define F_TSVECTORIN 3610
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define DTK_DOY 33
#define __FSWORD_T_TYPE __SWORD_TYPE
#define F_RI_FKEY_SETDEFAULT_DEL 1652
#define IPV6_LEAVE_GROUP 21
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define NUMERIC_MAX_DISPLAY_SCALE NUMERIC_MAX_PRECISION
#define F_PATH_ISCLOSED 1430
#define F_PG_TRY_ADVISORY_XACT_LOCK_SHARED_INT8 3092
#define PG_GETARG_BPCHAR_P_COPY(n) DatumGetBpCharPCopy(PG_GETARG_DATUM(n))
#define ERRCODE_DATATYPE_MISMATCH MAKE_SQLSTATE('4','2','8','0','4')
#define _STDDEF_H_ 
#define F_INT2OUT 39
#define F_TIME_IN 1143
#define AD 0
#define ACCEPT_TYPE_RETURN int
#define F_NUMERIC_SMALLER 1766
#define INSTR_TIME_ACCUM_DIFF(x,y,z) do { (x).tv_sec += (y).tv_sec - (z).tv_sec; (x).tv_nsec += (y).tv_nsec - (z).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define F_BYTEAIN 1244
#define _POSIX_CLOCK_SELECTION 200809L
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define IPV6_PMTUDISC_INTERFACE 4
#define DELAYTIMER_MAX 2147483647
#define F_INT8RANGE_CANONICAL 3928
#define F_PG_IMPORT_SYSTEM_COLLATIONS 3445
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define DT_WHT DT_WHT
#define RWH_WRITE_LIFE_NOT_SET 0
#define NUM_ATOMICS_SEMAPHORES 64
#define __sigset_t_defined 1
#define FMODULO(t,q,u) do { (q) = (((t) < 0) ? ceil((t) / (u)) : floor((t) / (u))); if ((q) != 0) (t) -= rint((q) * (u)); } while(0)
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK2 2
#define IsA(nodeptr,_type_) (nodeTag(nodeptr) == T_ ##_type_)
#define INT8_MAX (127)
#define F_REGPROCIN 44
#define F_PG_LSN_CMP 3251
#define MQ_PRIO_MAX 32768
#define F_TIMENOW 250
#define F_TIME_LE 1103
#define ERRCODE_TOO_MANY_ROWS MAKE_SQLSTATE('P','0','0','0','3')
#define F_TIME_LT 1102
#define IPV6_PATHMTU 61
#define UINT_LEAST32_WIDTH 32
#define F_BYTEALE 1950
#define F_TIMETZ_SCALE 1969
#define F_BYTEALT 1949
#define F_XIDOUT 51
#define SI_DETHREAD SI_DETHREAD
#define HeapTupleHeaderSetDatumLength(tup,len) SET_VARSIZE(tup, len)
#define F_RANGE_UNION 3867
#define F_GIN_CONSISTENT_JSONB 3484
#define DDECADE "decade"
#define USE_STDBOOL 1
#define AF_IB PF_IB
#define F_TIME_NE 1106
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define XLR_INFO_MASK 0x0F
#define F_BYTEANE 1953
#define ERRCODE_ARRAY_ELEMENT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define SO_NETNS_COOKIE 71
#define INT16_MAX (32767)
#define F_JSON_OBJECT_FIELD 3947
#define IPV6_NEXTHOP 9
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define F_BTTEXTCMP 360
#define F_BTINT2SORTSUPPORT 3129
#define AF_MCTP PF_MCTP
#define HAVE_PG_ATTRIBUTE_NORETURN 1
#define F_NUMERIC_INT8 1779
#define __S_IREAD 0400
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define fastgetattr(tup,attnum,tupleDesc,isnull) ( AssertMacro((attnum) > 0), (*(isnull) = false), HeapTupleNoNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup)->t_data + (tup)->t_data->t_hoff + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocachegetattr((tup), (attnum), (tupleDesc)) ) : ( att_isnull((attnum)-1, (tup)->t_data->t_bits) ? ( (*(isnull) = true), (Datum)NULL ) : ( nocachegetattr((tup), (attnum), (tupleDesc)) ) ) )
#define HEAP_NATTS_MASK 0x07FF
#define F_TIME_PL_INTERVAL 1747
#define RMGR_H 
#define FRAMEOPTION_EXCLUDE_CURRENT_ROW 0x08000
#define F_GETOWN_EX __F_GETOWN_EX
#define F_TIMETZ_CMP 1358
#define CLOCK_MONOTONIC_RAW 4
#define PACKAGE_STRING "PostgreSQL 11.18"
#define DATUM_GET_GRAPHID(d) DatumGetInt64(d)
#define F_REGEXEQJOINSEL 1824
#define ACL_INSERT_CHR 'a'
#define ERRCODE_DUPLICATE_DATABASE MAKE_SQLSTATE('4','2','P','0','4')
#define HeapTupleHeaderSetHeapOnly(tup) ( (tup)->t_infomask2 |= HEAP_ONLY_TUPLE )
#define F_ARRAY_RECV 2400
#define __FLT_EVAL_METHOD__ 0
#define EAI_NONAME -2
#define F_TIMESTAMP_GE_TIMESTAMPTZ 2524
#define ERRCODE_DATABASE_DROPPED MAKE_SQLSTATE('5','7','P','0','4')
#define F_FLOAT4SMALLER 211
#define SIGPOLL 29
#define ERRCODE_INVALID_SCHEMA_NAME MAKE_SQLSTATE('3','F','0','0','0')
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define __FLT64_DECIMAL_DIG__ 17
#define VARATT_IS_1B_E(PTR) ((((varattrib_1b *) (PTR))->va_header) == 0x01)
#define F_POLY_BELOW 2566
#define FIELDNO_EXPRCONTEXT_AGGVALUES 8
#define lengthof(array) (sizeof (array) / sizeof ((array)[0]))
#define STACK_DEPTH_SLOP (512 * 1024L)
#define MemSetTest(val,len) ( ((len) & LONG_ALIGN_MASK) == 0 && (len) <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0 && (val) == 0 )
#define F_PG_REPLICATION_ORIGIN_SESSION_RESET 6007
#define F_FLOAT8_VAR_POP 2512
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define RELSEG_SIZE 131072
#define F_ANYNONARRAY_IN 2777
#define ObjectAddressSet(addr,class_id,object_id) ObjectAddressSubSet(addr, class_id, object_id, 0)
#define F_BITXOR 1675
#define GIDSIZE 200
#define ItemPointerSetOffsetNumber(pointer,offsetNumber) ( AssertMacro(PointerIsValid(pointer)), (pointer)->ip_posid = (offsetNumber) )
#define F_TIME_INTERVAL 1370
#define F_NAMEEQ 62
#define FNONBLOCK O_NONBLOCK
#define F_PG_TIMEZONE_ABBREVS 2599
#define INT8_MIN (-128)
#define RTSuperStrategyNumber 26
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define HAVE_SSL_GET_CURRENT_COMPRESSION 1
#define CharGetDatum(X) ((Datum) (X))
#define RegProcedureIsValid(p) OidIsValid(p)
#define ILL_BADIADDR ILL_BADIADDR
#define EOWNERDEAD 130
#define F_HYPOTHETICAL_CUME_DIST_FINAL 3991
#define F_NAMEGT 657
#define HEAP_XMAX_IS_EXCL_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_EXCL_LOCK)
#define F_BYTEA_STRING_AGG_FINALFN 3544
#define INTERVAL_FULL_RANGE (0x7FFF)
#define CommitTsLock (&MainLWLockArray[39].lock)
#define HeapTupleHeaderGetTypMod(tup) ( (tup)->t_choice.t_datum.datum_typmod )
#define F_NETWORK_GE 924
#define BOOL_WIDTH 1
#define PG_HAVE_ATOMIC_READ_U64 
#define F_TIMESTAMP_ABSTIME 2030
#define F_PG_START_BACKUP 2172
#define HAVE_ASN1_STRING_GET0_DATA 1
#define si_overrun _sifields._timer.si_overrun
#define F_PG_GET_KEYWORDS 1686
#define _BITS_ERRNO_H 1
#define ERRCODE_INVALID_NAME MAKE_SQLSTATE('4','2','6','0','2')
#define F_LANGUAGE_HANDLER_OUT 2303
#define SInvalWriteLock (&MainLWLockArray[6].lock)
#define F_NAMEIN 34
#define F_PERCENTILE_DISC_FINAL 3973
#define MOD_TIMECONST ADJ_TIMECONST
#define F_NUMERIC_SIGN 1706
#define F_POINT_SLOPE 992
#define FALLOC_FL_ZERO_RANGE 0x10
#define DDAY "day"
#define STA_PPSERROR 0x0800
#define EL2NSYNC 45
#define ILL_BADSTK ILL_BADSTK
#define InvalidDsaPointer ((dsa_pointer) 0)
#define F_SETVAL_OID 1576
#define Anum_pg_attribute_attislocal 18
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define F_NAMELE 656
#define __LDBL_REDIR1(name,proto,alias) name proto
#define F_NAMELT 655
#define PageClearHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags &= ~PD_HAS_FREE_LINES)
#define F_BPCHARTYPMODIN 2913
#define F_BTFLOAT84CMP 2195
#define MOD_STATUS ADJ_STATUS
#define ETXTBSY 26
#define F_REGTYPESEND 2455
#define _POSIX_SYNCHRONIZED_IO 200809L
#define F_IN_RANGE_INTERVAL_INTERVAL 4136
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define AmBootstrapProcess() (MyAuxProcType == BootstrapProcess)
#define DTK_YEAR 25
#define RWH_WRITE_LIFE_EXTREME 5
#define F_AMVALIDATE 338
#define F_NAMENE 659
#define NSIG _NSIG
#define RTOverRightStrategyNumber 4
#define F_TEXTPOS 849
#define F_TSQUERY_PHRASE 5003
#define SO_INCOMING_NAPI_ID 56
#define EAI_CANCELED -101
#define F_NAME_TEXT 406
#define F_ARRAY_LOWER 2091
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define vertex_tuple_properties Anum_ag_label_vertex_table_properties - 1
#define DTK_INVALID 7
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define F_TEXTNLIKE 851
#define F_BITLENGTH 1681
#define __ARM_FEATURE_IDIV 1
#define F_INT8_ACCUM_INV 3569
#define F_RI_FKEY_CHECK_UPD 1645
#define __FLT64X_MAX_10_EXP__ 4932
#define F_ENUM_FIRST 3528
#define SIGTTOU 22
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define F_HASHTEXT 400
#define list_make4_int(x1,x2,x3,x4) lcons_int(x1, list_make3_int(x2, x3, x4))
#define ERRCODE_TO_CATEGORY(ec) ((ec) & ((1 << 12) - 1))
#define BACKENDID_H 
#define __CFLOAT32X _Complex _Float32x
#define F_RANGE_SEND 3837
#define F_PATH_CLOSE 1433
#define F_PG_STAT_GET_DB_BLK_READ_TIME 2844
#define NSS_BUFLEN_PASSWD 1024
#define F_BE_LO_FROM_BYTEA 3457
#define TIMESTAMP_IS_NOBEGIN(j) ((j) == DT_NOBEGIN)
#define ITUP_H 
#define F_TIMETZ_PL_INTERVAL 1749
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define F_HAS_ANY_COLUMN_PRIVILEGE_ID_ID 3027
#define FORMAT_TYPE_ALLOW_INVALID 0x02
#define VARHDRSZ_SHORT offsetof(varattrib_1b, va_data)
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define F_INT8LARGER 1236
#define SVE_MAGIC 0x53564501
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define ItemIdMarkDead(itemId) ( (itemId)->lp_flags = LP_DEAD )
#define F_TS_HEADLINE_BYID 3744
#define F_PG_NOTIFICATION_QUEUE_USAGE 3296
#define F_SCALARLTJOINSEL 107
#define UINTPTR_WIDTH __WORDSIZE
#define F_JSONB_STRING_TO_TSVECTOR 4209
#define ERRCODE_T_R_DEADLOCK_DETECTED MAKE_SQLSTATE('4','0','P','0','1')
#define F_PG_TRY_ADVISORY_XACT_LOCK_INT4 3095
#define F_PG_TRY_ADVISORY_XACT_LOCK_INT8 3091
#define F_TO_TSQUERY 3750
#define F_TIMESTAMPTZ_GT_TIMESTAMP 2530
#define ERRCODE_E_R_I_E_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','1')
#define PG_KRB_SRVNAM "postgres"
#define MINUTE 11
#define F_XIDRECV 2440
#define F_CASH_MUL_INT2 866
#define F_CASH_MUL_INT4 864
#define AGTYPE_EXISTS_ANY_STRATEGY_NUMBER 10
#define IP_BLOCK_SOURCE 38
#define EDQUOT 122
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define F_VARCHARRECV 2432
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define F_JSONB_HASH_EXTENDED 3416
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define F_LSEG_VERTICAL 997
#define FD_SETSIZE __FD_SETSIZE
#define PRIMNODES_H 
#define F_BIT_SEND 2457
#define F_BPCHARLEN 1318
#define ENOTBLK 15
#define EFAULT 14
#define EPROTOTYPE 91
#define ACL_ALL_RIGHTS_LARGEOBJECT (ACL_SELECT|ACL_UPDATE)
#define F_SCALARGEJOINSEL 398
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define SECS_PER_MINUTE 60
#define F_MACADDR8_SET7BIT 4125
#define PG_GETARG_FLOAT4(n) DatumGetFloat4(PG_GETARG_DATUM(n))
#define PG_MODULE_MAGIC_DATA { sizeof(Pg_magic_struct), PG_VERSION_NUM / 100, FUNC_MAX_ARGS, INDEX_MAX_KEYS, NAMEDATALEN, FLOAT4PASSBYVAL, FLOAT8PASSBYVAL }
#define __linux__ 1
#define F_SEAL_WRITE 0x0008
#define IndexInfoFindDataOffset(t_info) ( (!((t_info) & INDEX_NULL_MASK)) ? ( (Size)MAXALIGN(sizeof(IndexTupleData)) ) : ( (Size)MAXALIGN(sizeof(IndexTupleData) + sizeof(IndexAttributeBitMapData)) ) )
#define DatumGetBpCharPSlice(X,m,n) ((BpChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define ERRCODE_AMBIGUOUS_FUNCTION MAKE_SQLSTATE('4','2','7','2','5')
#define TransactionIdAdvance(dest) do { (dest)++; if ((dest) < FirstNormalTransactionId) (dest) = FirstNormalTransactionId; } while(0)
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define MOD_CLKB ADJ_TICK
#define __FLT32X_IS_IEC_60559__ 2
#define SYNCHRONOUS_COMMIT_ON SYNCHRONOUS_COMMIT_REMOTE_FLUSH
#define htonl(x) __bswap_32 (x)
#define HAVE_GCC__SYNC_INT32_TAS 1
#define htons(x) __bswap_16 (x)
#define IPV6_MTU_DISCOVER 23
#define F_RADIANS 1609
#define RelationMappingLock (&MainLWLockArray[25].lock)
#define PG_RETURN_TEXT_P(x) PG_RETURN_POINTER(x)
#define PG_FREE_IF_COPY(ptr,n) do { if ((Pointer) (ptr) != PG_GETARG_POINTER(n)) pfree(ptr); } while (0)
#define SIZE_MAX (18446744073709551615UL)
#define SO_REUSEADDR 2
#define F_PG_LOGICAL_EMIT_MESSAGE_BYTEA 3578
#define F_PG_STAT_RESET_SINGLE_TABLE_COUNTERS 3776
#define HAVE_LIBCRYPTO 1
#define UINT_WIDTH 32
#define CppConcat(x,y) x ##y
#define F_HASHNAME 455
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define PG_RETURN_BOOL(x) return BoolGetDatum(x)
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define F_CURRENT_QUERY 817
#define F_RDLCK 0
#define SOL_X25 262
#define O_APPEND 02000
#define XACT_XINFO_HAS_ORIGIN (1U << 5)
#define _POSIX_MQ_OPEN_MAX 8
#define _FORTIFY_SOURCE 2
#define HAVE_UTIME 1
#define Anum_pg_attribute_attrelid 1
#define F_POLY_OVERLAP 346
#define INTERVAL_PRECISION(t) ((t) & INTERVAL_PRECISION_MASK)
#define __INT8_MAX__ 0x7f
#define SET_LOCKTAG_SPECULATIVE_INSERTION(locktag,xid,token) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = (token), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_SPECULATIVE_TOKEN, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define F_FLOAT84LE 308
#define F_TIMETZ_ZONE 2037
#define pg_write_barrier() pg_write_barrier_impl()
#define PG_DIAG_SOURCE_FUNCTION 'R'
#define F_SPG_QUAD_INNER_CONSISTENT 4021
#define _BITS_TIMEX_H 1
#define DO_AGGSPLIT_SKIPFINAL(as) (((as) & AGGSPLITOP_SKIPFINAL) != 0)
#define F_INT84GE 479
#define PG_GETARG_VARCHAR_P_SLICE(n,a,b) DatumGetVarCharPSlice(PG_GETARG_DATUM(n),a,b)
#define BUILTINS_H 
#define F_INT84GT 477
#define ERRCODE_FDW_UNABLE_TO_ESTABLISH_CONNECTION MAKE_SQLSTATE('H','V','0','0','N')
#define CHARCLASS_NAME_MAX 2048
#define isblank(c) __isctype((c), _ISblank)
#define POSTGRES_EPOCH_JDATE 2451545
#define F_JSON_STRING_TO_TSVECTOR 4210
#define ACL_MODECHG_DEL 2
#define F_TEXT_GE 743
#define SO_MARK 36
#define F_TEXT_GT 742
#define AG_VERTEX_ACCESS_FUNCTION_PROPERTIES "age_properties"
#define __USE_EXTERN_INLINES 1
#define ERRCODE_DIVISION_BY_ZERO MAKE_SQLSTATE('2','2','0','1','2')
#define PG_GETARG_EXPANDED_ARRAY(n) DatumGetExpandedArray(PG_GETARG_DATUM(n))
#define F_SPG_BOX_QUAD_CHOOSE 5013
#define PinTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) IncrTupleDescRefCount(tupdesc); } while (0)
#define OBJECTADDRESS_H 
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define F_TIMESTAMP_AGE 2058
#define DTK_TIME 3
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define F_PG_STAT_GET_XACT_TUPLES_HOT_UPDATED 3043
#define ETIMEDOUT 110
#define HAVE__BUILTIN_TYPES_COMPATIBLE_P 1
#define F_INT4LARGER 768
#define __USE_GNU_GETTEXT 1
#define PG_RETURN_BPCHAR_P(x) PG_RETURN_POINTER(x)
#define ExclusiveLock 7
#define _EXTERN_INLINE __extern_inline
#define VirtualTransactionIdIsValid(vxid) (LocalTransactionIdIsValid((vxid).localTransactionId))
#define DN_ACCESS 0x00000001
#define __END_DECLS 
#define F_I2TOI4 313
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define F_BE_LO_GET_FRAGMENT 3459
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define Anum_pg_class_relkind 16
#define __USE_LARGEFILE64 1
#define EOVERFLOW 75
#define F_INT84LE 478
#define F_POLY_OVERRIGHT 343
#define GetProcessingMode() Mode
#define DATEORDER_YMD 0
#define SizeOfXLogRecord (offsetof(XLogRecord, xl_crc) + sizeof(pg_crc32c))
#define F_INT84LT 476
#define _ALLOCA_H 1
#define F_TEXT_LE 741
#define __BITS_PER_LONG 64
#define F_INT84MI 1275
#define F_WINDOW_NTILE 3105
#define F_TEXT_LT 740
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define S_IRUSR __S_IREAD
#define PF_ALG 38
#define F_INT84NE 475
#define _XOPEN_ENH_I18N 1
#define ERRCODE_INVALID_CATALOG_NAME MAKE_SQLSTATE('3','D','0','0','0')
#define F_HASHOIDVECTOREXTENDED 776
#define ARR_ELEMTYPE(a) ((a)->elemtype)
#define ELOG_H 
#define MAX_TIMESTAMP_PRECISION 6
#define ACL_SELECT (1<<1)
#define AG_DEFAULT_LABEL_VERTEX "_ag_label_vertex"
#define PG_DIAG_INTERNAL_POSITION 'p'
#define IP_IPSEC_POLICY 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define F_ARRAY_POSITION 3277
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define ERRCODE_UNDEFINED_CURSOR MAKE_SQLSTATE('3','4','0','0','0')
#define Anum_pg_class_relisshared 14
#define F_PG_GET_EXPR_EXT 2509
#define XactCompletionForceSyncCommit(xinfo) ((xinfo & XACT_COMPLETION_FORCE_SYNC_COMMIT) != 0)
#define _POSIX_NO_TRUNC 1
#define AF_INET6 PF_INET6
#define F_INT84PL 1274
#define dsa_pointer_atomic_compare_exchange pg_atomic_compare_exchange_u64
#define F_TEXT_FORMAT 3539
#define F_MACADDRTOMACADDR8 4123
#define INT32_MIN (-2147483647-1)
#define F_XIDEQ 68
#define STA_CLOCKERR 0x1000
#define F_BTRECORDCMP 2987
#define F_DATE_PLI 1141
#define CppAsString2(x) CppAsString(x)
#define _POSIX_SPAWN 200809L
#define __SHRT_WIDTH__ 16
#define F_BOX_ABOVE_EQ 115
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define _IO_USER_LOCK 0x8000
#define F_GIN_TSQUERY_CONSISTENT_6ARGS 3088
#define F_RI_FKEY_NOACTION_UPD 1655
#define PageGetLSN(page) PageXLogRecPtrGet(((PageHeader) (page))->pd_lsn)
#define F_DATE_MII 1142
#define HASH_ELEM 0x0010
#define si_status _sifields._sigchld.si_status
#define ALIGNOF_BUFFER 32
#define _DIRENT_HAVE_D_RECLEN 
#define PF_UNIX PF_LOCAL
#define ERRCODE_INVALID_REGULAR_EXPRESSION MAKE_SQLSTATE('2','2','0','1','B')
#define AmCheckpointerProcess() (MyAuxProcType == CheckpointerProcess)
#define EAI_SERVICE -8
#define __SI_MAX_SIZE 128
#define F_LSEG_PARALLEL 995
#define F_BYTEASEND 2413
#define AGT_GIN_FLAG_HASHED 0x10
#define HAVE_GCC__ATOMIC_INT32_CAS 1
#define ERRCODE_SQL_ROUTINE_EXCEPTION MAKE_SQLSTATE('2','F','0','0','0')
#define dsa_pointer_atomic_init pg_atomic_init_u64
#define F_NUMERIC_CASH 3824
#define _SS_SIZE 128
#define F_PG_GET_VIEWDEF_NAME 1640
#define DTK_MONTH 23
#define F_HAS_FUNCTION_PRIVILEGE_NAME_NAME 2256
#define att_addlength_datum(cur_offset,attlen,attdatum) att_addlength_pointer(cur_offset, attlen, DatumGetPointer(attdatum))
#define O_TMPFILE __O_TMPFILE
#define F_XIDIN 50
#define le64toh(x) __uint64_identity (x)
#define PF_ASH 18
#define UINT64_C(c) c ## UL
#define F_JSONB_CONTAINS 4046
#define HOLD_CANCEL_INTERRUPTS() (QueryCancelHoldoffCount++)
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define F_PG_STAT_GET_TUPLES_INSERTED 1931
#define ENOPKG 65
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define F_ON_PPATH 137
#define MCXT_ALLOC_NO_OOM 0x02
#define F_TO_TIMESTAMP 1778
#define FIELDNO_FUNCTIONCALLINFODATA_ARG 6
#define LockHashPartitionLockByProc(leader_pgproc) LockHashPartitionLock((leader_pgproc)->pgprocno)
#define AssertVariableIsOfType(varname,typename) StaticAssertStmt(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename))
#define PF_AX25 3
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define F_DIST_PPOLY 3275
#define PG_GETARG_ANY_ARRAY_P(n) DatumGetAnyArrayP(PG_GETARG_DATUM(n))
#define HASH_CONTEXT 0x0400
#define SOL_XDP 283
#define __unix__ 1
#define __SIZEOF_LONG__ 8
#define _IONBF 2
#define F_INTERVAL_RELTIME 1194
#define F_BOX_BELOW 2562
#define F_INDEX_AM_HANDLER_OUT 327
#define FIELDNO_EXPRCONTEXT_OUTERTUPLE 3
#define AGGSPLITOP_SERIALIZE 0x04
#define toascii(c) __toascii (c)
#define NL_TEXTMAX INT_MAX
#define PG_MAGIC_FUNCTION_NAME_STRING "Pg_magic_func"
#define ERRCODE_S_R_E_FUNCTION_EXECUTED_NO_RETURN_STATEMENT MAKE_SQLSTATE('2','F','0','0','5')
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define PF_NETLINK 16
#define XACT_XINFO_HAS_AE_LOCKS (1U << 6)
#define HAVE_SPINLOCKS 1
#define __UINT16_C(c) c
#define F_FLOAT4LARGER 209
#define F_PG_GET_PARTKEYDEF 3352
#define HAVE_LIBSELINUX 1
#define ERRCODE_NOT_AN_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','L')
#define NI_NAMEREQD 8
#define __SVE_VQ_BYTES 16
#define END_TIMESTAMP INT64CONST(9223371331200000000)
#define AF_CAN PF_CAN
#define HeapTupleGetOid(tuple) HeapTupleHeaderGetOid((tuple)->t_data)
#define STA_FREQHOLD 0x0080
#define O_WRONLY 01
#define F_NAMESEND 2423
#define __gnu_linux__ 1
#define __INTMAX_WIDTH__ 64
#define DEFAULT_BACKEND_FLUSH_AFTER 0
#define O_EXCL 0200
#define SPIN_DELAY() ((void) 0)
#define SOL_IP 0
#define ERRCODE_INVALID_BINARY_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','3')
#define F_SPG_BOX_QUAD_INNER_CONSISTENT 5015
#define XLOG_XACT_HAS_INFO 0x80
#define F_ORDERED_SET_TRANSITION_MULTI 3971
#define list_make2_int(x1,x2) lcons_int(x1, list_make1_int(x2))
#define OFF_H 
#define PG_O_DIRECT O_DIRECT
#define F_VARBIT_RECV 2458
#define Anum_pg_attribute_atttypid 3
#define F_BINARY_DECODE 1947
#define DAYS_PER_YEAR 365.25
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define F_JSONB_EACH_TEXT 3932
#define TUPLESTORE_H 
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define F_TEXT_RIGHT 3061
#define SO_BINDTODEVICE 25
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define DTIMEZONE "timezone"
#define F_CIDSEND 2443
#define __FLT16_MIN_EXP__ (-13)
#define PG_HAVE_ATOMIC_FETCH_AND_U64 
#define __ARM_FEATURE_FMA 1
#define IPPROTO_IDP IPPROTO_IDP
#define AT_REMOVEDIR 0x200
#define FORMAT_TYPE_TYPEMOD_GIVEN 0x01
#define F_PG_GET_STATISTICSOBJDEF 3415
#define SEQUENCE_H 
#define RTMaxStrategyNumber 28
#define F_PG_GET_VIEWDEF_EXT 2506
#define F_INT2INT4_SUM 3572
#define _T_PTRDIFF 
#define pg_noinline __attribute__((noinline))
#define F_TEXTEQ 67
#define SECURITY_NOFORCE_RLS 0x0004
#define PAI_IS_HEAP (1 << 1)
#define pg_attribute_noreturn() __attribute__((noreturn))
#define L_ctermid 9
#define PG_GETARG_CHAR(n) DatumGetChar(PG_GETARG_DATUM(n))
#define F_CIRCLE_RECV 2490
#define __FLT_HAS_DENORM__ 1
#define F_HAS_TYPE_PRIVILEGE_NAME 3142
#define pg_attribute_no_sanitize_alignment() __attribute__((no_sanitize("alignment")))
#define F_GIN_EXTRACT_TSVECTOR_2ARGS 3077
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define PG_GETARG_TEXT_P_SLICE(n,a,b) DatumGetTextPSlice(PG_GETARG_DATUM(n),a,b)
#define F_FLOAT4MUL 202
#define F_TIMESTAMP_TRUNC 2020
#define F_JSON_SEND 324
#define __timeval_defined 1
#define F_GTSVECTOR_PICKSPLIT 3650
#define F_TO_REGPROCEDURE 3479
#define F_DATE_RECV 2468
#define HEAP_XMAX_COMMITTED 0x0400
#define FRAMEOPTION_START_OFFSET_PRECEDING 0x00800
#define ELNRNG 48
#define HEAP_XMAX_EXCL_LOCK 0x0040
#define AF_ROUTE PF_ROUTE
#define F_FLOAT4OUT 201
#define F_INT4MI 181
#define F_TABLE_TO_XML 2923
#define F_PATH_N_GE 986
#define ACL_ALL_RIGHTS_DATABASE (ACL_CREATE|ACL_CREATE_TEMP|ACL_CONNECT)
#define PageIsNew(page) (((PageHeader) (page))->pd_upper == 0)
#define ERRCODE_SEQUENCE_GENERATOR_LIMIT_EXCEEDED MAKE_SQLSTATE('2','2','0','0','H')
#define __ONCE_ALIGNMENT 
#define _POSIX_HOST_NAME_MAX 255
#define OidFunctionCall6(functionId,arg1,arg2,arg3,arg4,arg5,arg6) OidFunctionCall6Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define PageIsFull(page) (((PageHeader) (page))->pd_flags & PD_PAGE_FULL)
#define NI_MAXHOST 1025
#define F_TIME_MI_INTERVAL 1748
#define O_FSYNC O_SYNC
#define ERRCODE_INVALID_ESCAPE_OCTET MAKE_SQLSTATE('2','2','0','0','D')
#define _POSIX_SEM_NSEMS_MAX 256
#define MSG_DONTROUTE MSG_DONTROUTE
#define F_FLOAT8_REGR_COMBINE 3342
#define PG_FUNCTION_ARGS FunctionCallInfo fcinfo
#define DTK_SPECIAL 6
#define PF_XDP 44
#define __WCHAR_TYPE__ unsigned int
#define F_PG_DATABASE_SIZE_NAME 2168
#define ____sigval_t_defined 
#define Anum_pg_attribute_attname 2
#define HAVE_FSEEKO 1
#define F_TIMESTAMP_IZONE 2070
#define F_BOOL_ACCUM_INV 3497
#define F_SETVAL3_OID 1765
#define F_TIME_RECV 2470
#define LOCK_LOCKMETHOD(lock) ((LOCKMETHODID) (lock).tag.locktag_lockmethodid)
#define _BITS_STDINT_UINTN_H 1
#define F_REGNAMESPACEOUT 4085
#define F_RANGE_BEFORE 3863
#define ERRCODE_AMBIGUOUS_PARAMETER MAKE_SQLSTATE('4','2','P','0','8')
#define DEFAULT_PGSOCKET_DIR "/var/run/postgresql"
#define Anum_ag_label_edge_table_id 1
#define PG_HAVE_ATOMIC_EXCHANGE_U64 
#define F_TIMESTAMPTZ_GE_TIMESTAMP 2531
#define F_PATH_DISTANCE 370
#define LONG_BIT 64
#define ECOMM 70
#define _POSIX_NGROUPS_MAX 8
#define Anum_pg_class_reltoastrelid 12
#define PF_NETROM 6
#define HAVE_UUID_UUID_H 1
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define F_INT84MUL 1276
#define REPLICA_IDENTITY_DEFAULT 'd'
#define EWOULDBLOCK EAGAIN
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define PG_AUTOCONF_FILENAME "postgresql.auto.conf"
#define HAVE_BIO_METH_NEW 1
#define _SC_CLK_TCK _SC_CLK_TCK
#define F_DACOSD 2732
#define USHRT_WIDTH 16
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK 3
#define F_JSONB_TO_TSVECTOR_BYID 4214
#define IPV6_ORIGDSTADDR 74
#define F_GIN_TSQUERY_CONSISTENT_OLDSIG 3792
#define TUPCONVERT_H 
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define StaticAssertStmt(condition,errmessage) do { _Static_assert(condition, errmessage); } while(0)
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define F_PG_SEQUENCE_PARAMETERS 3078
#define F_RANGE_GIST_PICKSPLIT 3880
#define ACL_DELETE_CHR 'd'
#define pg_memory_barrier() pg_memory_barrier_impl()
#define IPPROTO_IPV6 IPPROTO_IPV6
#define be32toh(x) __bswap_32 (x)
#define INTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_INT, (LEN))
#define USE_LIBXML 1
#define XLOGRECORD_H 
#define RTSubStrategyNumber 24
#define AF_ECONET PF_ECONET
#define HeapTupleClearHotUpdated(tuple) HeapTupleHeaderClearHotUpdated((tuple)->t_data)
#define __FLT32X_HAS_DENORM__ 1
#define F_INETMI_INT8 2632
#define __HAVE_FLOAT128X 0
#define NI_IDN 32
#define SECURITY_LOCAL_USERID_CHANGE 0x0001
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define F_INT4SMALLER 769
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define F_PG_STAT_GET_DB_TUPLES_FETCHED 2759
#define _POSIX_REGEXP 1
#define UINT_LEAST8_MAX (255)
#define START_CRIT_SECTION() (CritSectionCount++)
#define DSA_H 
#define __CFLOAT64X _Complex _Float64x
#define HAVE_LINUX_EIDRM_BUG 
#define F_INT84EQ 474
#define pairingheap_is_empty(h) ((h)->ph_root == NULL)
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define SK_ROW_END 0x0010
#define F_GET_RW_HINT 1035
#define HEAP_INSERT_SKIP_FSM 0x0002
#define PG_GETARG_NAME(n) DatumGetName(PG_GETARG_DATUM(n))
#define F_PG_BACKEND_PID 2026
#define F_RANGE_GIST_CONSISTENT 3875
#define F_BYTEAOVERLAY 749
#define __O_DSYNC 010000
#define F_NETWORK_SUB 927
#define _POSIX_MEMORY_PROTECTION 200809L
#define F_PERCENTILE_CONT_FLOAT8_MULTI_FINAL 3981
#define F_NETWORK_SUP 929
#define EAI_SOCKTYPE -7
#define __sig_atomic_t_defined 1
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define INTERRUPTS_PENDING_CONDITION() (unlikely(InterruptPending))
#define NL_MSGMAX INT_MAX
#define PG_GETARG_OID(n) DatumGetObjectId(PG_GETARG_DATUM(n))
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define _SC_2_C_BIND _SC_2_C_BIND
#define F_NAMELIKE 858
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __FLT64_MIN_10_EXP__ (-307)
#define SOL_SOCKET 1
#define ERRCODE_FDW_TOO_MANY_HANDLES MAKE_SQLSTATE('H','V','0','1','4')
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define F_IN_RANGE_INT2_INT2 4132
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define AGTE_IS_BOOL_TRUE(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_BOOL_TRUE)
#define F_CIRCLE_OVERABOVE 2588
#define F_INET_IN 910
#define _POSIX_TIMERS 200809L
#define _LIBINTL_H 1
#define F_TIMESTAMP_ZONE 2069
#define F_GET_FILE_RW_HINT 1037
#define ag_label_relation_index_id() ag_relation_id("ag_label_relation_index", "index")
#define __HAVE_FLOAT16 0
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define EREMOTE 66
#define pg_hton16(x) pg_bswap16(x)
#define F_PG_IS_IN_BACKUP 3813
#define F_TRANSLATE 878
#define VARTAG_SIZE(tag) ((tag) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : VARTAG_IS_EXPANDED(tag) ? sizeof(varatt_expanded) : (tag) == VARTAG_ONDISK ? sizeof(varatt_external) : TrapMacro(true, "unrecognized TOAST vartag"))
#define AF_NETLINK PF_NETLINK
#define F_BTINT4CMP 351
#define F_LSEG_GE 1486
#define PG_GETARG_BYTEA_P_COPY(n) DatumGetByteaPCopy(PG_GETARG_DATUM(n))
#define VARTAG_IS_EXPANDED(tag) (((tag) & ~1) == VARTAG_EXPANDED_RO)
#define F_LSEG_GT 1485
#define __HAVE_FLOAT32 1
#define F_POSITIONSEL 1300
#define F_INTERVAL_COMBINE 3325
#define F_BYTEAOUT 31
#define _BITS_STDIO_H 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __SVE_NUM_PREGS 16
#define pg_hton32(x) pg_bswap32(x)
#define DatumBigEndianToNative(x) pg_bswap64(x)
#define DSECOND "second"
#define F_DASIND 2731
#define DTK_TZ_HOUR 34
#define F_BOX_SAME 186
#define F_BPCHARSEND 2431
#define F_CIRCLE_RIGHT 1457
#define F_LSEG_IN 119
#define BlockIdIsValid(blockId) ((bool) PointerIsValid(blockId))
#define F_ENUM_RANGE_BOUNDS 3530
#define COLL_WEIGHTS_MAX 255
#define AF_RDS PF_RDS
#define DatumGetBpCharPP(X) ((BpChar *) PG_DETOAST_DATUM_PACKED(X))
#define __SIZEOF_SIZE_T__ 8
#define SK_ROW_MEMBER 0x0008
#define FKCONSTR_ACTION_NOACTION 'a'
#define ERRCODE_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','1')
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define MIN_TIMESTAMP INT64CONST(-211813488000000000)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define __HAVE_FLOAT64 1
#define DATETIME_H 
#define F_REGNAMESPACERECV 4087
#define INSTR_TIME_GET_MICROSEC(t) (((uint64) (t).tv_sec * (uint64) 1000000) + (uint64) ((t).tv_nsec / 1000))
#define F_PG_STAT_GET_ANALYZE_COUNT 3056
#define NO_RECOVERY 3
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define pg_hton64(x) pg_bswap64(x)
#define IPPROTO_TP IPPROTO_TP
#define PG_DIAG_COLUMN_NAME 'c'
#define __FLT64X_MIN_EXP__ (-16381)
#define F_LSEG_LE 1484
#define TransactionIdRetreat(dest) do { (dest)--; } while ((dest) < FirstNormalTransactionId)
#define _SC_BASE _SC_BASE
#define F_LSEG_LT 1483
#define MSG_WAITFORONE MSG_WAITFORONE
#define F_JSONB_AGG_FINALFN 3266
#define F_BTABSTIMECMP 357
#define __LDBL_MIN_10_EXP__ (-4931)
#define RTOverlapStrategyNumber 3
#define __kernel_old_uid_t __kernel_old_uid_t
#define F_VOID_OUT 2299
#define F_SETLEASE 1024
#define F_DATE_GT_TIMESTAMPTZ 2354
#define F_PG_SIZE_PRETTY_NUMERIC 3166
#define _GCC_WCHAR_T 
#define __FLT32_MAX_EXP__ 128
#define dngettext(domainname,msgid1,msgid2,n) dcngettext (domainname, msgid1, msgid2, n, LC_MESSAGES)
#define F_LSEG_NE 1482
#define F_WIDTH_BUCKET_NUMERIC 2170
#define S_IWUSR __S_IWRITE
#define SIOCATMARK 0x8905
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define F_SETPIPE_SZ 1031
#define ADJ_TAI 0x0080
#define DSM_HANDLE_INVALID 0
#define __ARM_FP16_FORMAT_IEEE 1
#define si_uid _sifields._kill.si_uid
#define __WTERMSIG(status) ((status) & 0x7f)
#define ERRCODE_DATETIME_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','8')
#define PG_RETURN_DATUM(x) return (x)
#define CURSOR_OPT_HOLD 0x0010
#define UINT_LEAST16_MAX (65535)
#define R_OK 4
#define F_PATH_OUT 122
#define F_UNLCK 2
#define F_PG_TS_DICT_IS_VISIBLE 3757
#define StrNCpy(dst,src,len) do { char * _dst = (dst); Size _len = (len); if (_len > 0) { strncpy(_dst, (src), _len); _dst[_len-1] = '\0'; } } while (0)
#define F_REGEXP_SPLIT_TO_TABLE_NO_FLAGS 2765
#define F_POINT_OUT 118
#define WALBufMappingLock (&MainLWLockArray[7].lock)
#define TextDatumGetCString(d) text_to_cstring((text *) DatumGetPointer(d))
#define TimestampTzPlusMilliseconds(tz,ms) ((tz) + ((ms) * (int64) 1000))
#define SOL_IUCV 277
#define CURSOR_OPT_PARALLEL_OK 0x0100
#define ItemPointerSetMovedPartitions(pointer) ItemPointerSet((pointer), MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define AssertVariableIsOfTypeMacro(varname,typename) (StaticAssertExpr(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename)))
#define _XOPEN_SHM 1
#define VARDATA_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_data)
#define _FALLOC_H_ 
#define FRAMEOPTION_END_OFFSET (FRAMEOPTION_END_OFFSET_PRECEDING | FRAMEOPTION_END_OFFSET_FOLLOWING)
#define SEGV_ACCERR SEGV_ACCERR
#define F_TIMESTAMP_LE_DATE 2365
#define DatumGetIntervalP(X) ((Interval *) DatumGetPointer(X))
#define __PTRDIFF_T 
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define F_MACADDR8_RECV 3446
#define HAVE_LIBSSL 1
#define F_HAS_SERVER_PRIVILEGE_NAME_ID 3007
#define pg_attribute_unused() __attribute__((unused))
#define F_WEBSEARCH_TO_TSQUERY 5009
#define _POSIX_ADVISORY_INFO 200809L
#define F_TSVECTOR_LENGTH 3711
#define STA_PPSSIGNAL 0x0100
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define F_CIDR_OUT 1427
#define EARLY "-infinity"
#define F_JSONB_EACH 3208
#define F_LOCK 1
#define F_PG_STAT_GET_BUF_WRITTEN_BACKEND 2775
#define F_CIDR_SET_MASKLEN 635
#define PG_DIAG_DATATYPE_NAME 'd'
#define F_CURRENT_USER 710
#define DSM_IMPL_H 
#define HAVE_STRINGS_H 1
#define F_BTRIM1 885
#define MultiXactGenLock (&MainLWLockArray[13].lock)
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define GUC_QUALIFIER_SEPARATOR '.'
#define _VA_LIST 
#define F_INTERVAL_MI 1170
#define F_RANGE_GIST_UNION 3876
#define PG_USED_FOR_ASSERTS_ONLY pg_attribute_unused()
#define AttrOffsetGetAttrNumber(attributeOffset) ((AttrNumber) (1 + (attributeOffset)))
#define F_RANGE_LOWER_INC 3851
#define F_RANGE_LOWER_INF 3853
#define __O_PATH 010000000
#define F_INETNOT 2627
#define F_ON_SB 372
#define isxdigit(c) __isctype((c), _ISxdigit)
#define F_BRINHANDLER 335
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define __SIZEOF_POINTER__ 8
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define F_NEXTVAL_OID 1574
#define ItemPointerSet(pointer,blockNumber,offNum) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber), (pointer)->ip_posid = offNum )
#define F_PG_SHOW_REPLICATION_ORIGIN_STATUS 6014
#define IPV6_MULTICAST_IF 17
#define CURSOR_OPT_NO_SCROLL 0x0004
#define F_DIST_PPATH 371
#define INT8_WIDTH 8
#define ACL_INSERT (1<<0)
#define __INT_FAST8_WIDTH__ 8
#define USE_FLOAT4_BYVAL 1
#define TZNAME_GLOBAL tzname
#define _POSIX_SYMLOOP_MAX 8
#define ARR_OVERHEAD_NONULLS(ndims) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims))
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define F_LOWER 870
#define F_SETLKW64 7
#define F_TIMETZTYPMODIN 2911
#define BUFFERALIGN(LEN) TYPEALIGN(ALIGNOF_BUFFER, (LEN))
#define ERRCODE_EXTERNAL_ROUTINE_INVOCATION_EXCEPTION MAKE_SQLSTATE('3','9','0','0','0')
#define SIGTRAP 5
#define __nonnull(params) __attribute_nonnull__ (params)
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _BITS_STRUCT_STAT_H 1
#define ERRCODE_INVALID_XML_CONTENT MAKE_SQLSTATE('2','2','0','0','N')
#define HAVE_STRUCT_OPTION 1
#define F_HASH_ARRAY 626
#define F_GETSIG __F_GETSIG
#define F_TO_ASCII_DEFAULT 1845
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME_ID 3025
#define BufferIsLocal(buffer) ((buffer) < 0)
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define F_BTBPCHAR_PATTERN_CMP 2180
#define LOCK_READ 64
#define __aarch64__ 1
#define FIELDNO_TUPLETABLESLOT_TUPLEDESCRIPTOR 6
#define ERRCODE_CANNOT_CONNECT_NOW MAKE_SQLSTATE('5','7','P','0','3')
#define F_ARRAY_REMOVE 3167
#define FALLOC_FL_PUNCH_HOLE 0x02
#define F_PG_CLIENT_ENCODING 810
#define F_NUMERIC_LOG 1736
#define __ARM_FP16_ARGS 1
#define JULIAN_MAXMONTH (6)
#define F_TIMESTAMPTZ_PL_INTERVAL 1189
#define SO_PROTOCOL 38
#define ERRCODE_INVALID_GRANTOR MAKE_SQLSTATE('0','L','0','0','0')
#define STATUS_FOUND (1)
#define F_PREFIXSEL 3437
#define SET_VARSIZE_COMPRESSED(PTR,len) SET_VARSIZE_4B_C(PTR, len)
#define __FLT64X_DECIMAL_DIG__ 36
#define F_GTSQUERY_PICKSPLIT 3697
#define DTK_CURRENT 8
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define IP_BIND_ADDRESS_NO_PORT 24
#define F_NETWORK_LT 921
#define ERRCODE_WARNING_PRIVILEGE_NOT_GRANTED MAKE_SQLSTATE('0','1','0','0','7')
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX (2147483647)
#define F_PATH_OPEN 1434
#define STA_INS 0x0010
#define MISCADMIN_H 
#define PG_INT64_TYPE long int
#define F_REGDICTIONARYIN 3771
#define GRAPHIDARRAYOID get_GRAPHIDARRAYOID()
#define LOGIN_NAME_MAX 256
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define ItemPointerGetOffsetNumberNoCheck(pointer) ( (pointer)->ip_posid )
#define F_BE_LOWRITE 955
#define tuplestore_donestoring(state) ((void) 0)
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define PageIsAllVisible(page) (((PageHeader) (page))->pd_flags & PD_ALL_VISIBLE)
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define F_HAS_COLUMN_PRIVILEGE_ID_ID_NAME 3018
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define F_TS_HEADLINE_JSON_BYID 4206
#define XLogRecGetTotalLen(decoder) ((decoder)->decoded_record->xl_tot_len)
#define ERRCODE_SYNTAX_ERROR MAKE_SQLSTATE('4','2','6','0','1')
#define HAVE_SYS_RESOURCE_H 1
#define AsyncQueueLock (&MainLWLockArray[27].lock)
#define MSG_RST MSG_RST
#define dsa_pointer_atomic_fetch_add pg_atomic_fetch_add_u64
#define F_TS_TOKEN_TYPE_BYNAME 3714
#define SyncRepLock (&MainLWLockArray[32].lock)
#define F_ARRAY_OUT 751
#define F_HAS_TYPE_PRIVILEGE_ID 3143
#define F_TSVECTORRECV 3639
#define F_PG_CHAR_TO_ENCODING 1264
#define PG_DIAG_MESSAGE_DETAIL 'D'
#define F_INTERVAL_HASH_EXTENDED 3418
#define F_TIMESTAMP_HASH 2039
#define MAX_CANON 255
#define HeapTupleHeaderGetXvac(tup) ( ((tup)->t_infomask & HEAP_MOVED) ? (tup)->t_choice.t_heap.t_field3.t_xvac : InvalidTransactionId )
#define F_ROW_SECURITY_ACTIVE 3298
#define AGT_ROOT_COUNT(agtp_) (*(uint32 *)VARDATA(agtp_) & AGT_CMASK)
#define ItemIdIsRedirected(itemId) ((itemId)->lp_flags == LP_REDIRECT)
#define F_HASH_RANGE 3902
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define FKCONSTR_ACTION_RESTRICT 'r'
#define F_TEXTCAT 1258
#define LWLOCK_PADDED_SIZE PG_CACHE_LINE_SIZE
#define PG_GETARG_TEXT_P(n) DatumGetTextP(PG_GETARG_DATUM(n))
#define F_TSQUERY_REWRITE 3684
#define MOD_OFFSET ADJ_OFFSET
#define HAVE_STDIO_H 1
#define F_GET_SEALS 1034
#define DT_NOEND PG_INT64_MAX
#define LockHashPartitionLock(hashcode) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + LockHashPartition(hashcode)].lock)
#define F_JSON_AGG_TRANSFN 3173
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define F_RANGE_UPPER_INC 3852
#define LSYSCACHE_H 
#define INT_LEAST32_MIN (-2147483647-1)
#define F_PG_STAT_GET_DB_CONFLICT_LOCK 3066
#define LogicalRepWorkerLock (&MainLWLockArray[44].lock)
#define F_JSONB_SET 3305
#define BlockIdGetBlockNumber(blockId) ( AssertMacro(BlockIdIsValid(blockId)), ((((BlockNumber) (blockId)->bi_hi) << 16) | ((BlockNumber) (blockId)->bi_lo)) )
#define F_NUMERIC_ROUND 1707
#define F_RANGE_OVERLEFT 3865
#define F_BE_LO_TELL64 3171
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define F_INT2_AVG_ACCUM 1962
#define F_SPG_QUAD_CHOOSE 4019
#define ScanDirectionIsBackward(direction) ((bool) ((direction) == BackwardScanDirection))
#define __BITS_SOCKET_H 
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define F_POINT_ADD 1441
#define ERROR 20
#define st_mtime st_mtim.tv_sec
#define PGSIXBIT(ch) (((ch) - '0') & 0x3F)
#define SO_OOBINLINE 10
#define IPV6_2292RTHDR 5
#define PANIC 22
#define F_CIRCLE_OVERBELOW 2587
#define __F_GETOWN 9
#define F_OFD_GETLK 36
#define EAI_ALLDONE -103
#define F_NAMEREGEXEQ 79
#define INSTR_TIME_SUBTRACT(x,y) do { (x).tv_sec -= (y).tv_sec; (x).tv_nsec -= (y).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } } while (0)
#define F_BE_LO_GET 3458
#define F_BOOLAND_STATEFUNC 2515
#define F_TIDEQ 1292
#define __INO_T_TYPE __ULONGWORD_TYPE
#define islower(c) __isctype((c), _ISlower)
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define EAI_INTR -104
#define F_BOOLEQ 60
#define __F_SETOWN_EX 15
#define AGT_OFFSET_STRIDE 32
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define F_TSQ_MCONTAINED 3692
#define F_PATH_RECV 2482
#define __struct_tm_defined 1
#define __LDBL_DECIMAL_DIG__ 36
#define F_ENUM_OUT 3507
#define F_PG_STAT_GET_CHECKPOINT_SYNC_TIME 3161
#define __ssize_t_defined 
#define F_TIDGE 2792
#define F_ARRAY_TO_JSON_PRETTY 3154
#define F_TSVECTORSEND 3638
#define _SC_FSYNC _SC_FSYNC
#define F_TIDGT 2790
#define F_PG_GET_FUNCTION_ARGUMENTS 2162
#define F_GTSVECTOROUT 3647
#define F_TO_ASCII_ENC 1846
#define FPE_INTOVF FPE_INTOVF
#define F_BOOLGE 1692
#define PageGetItemId(page,offsetNumber) ((ItemId) (&((PageHeader) (page))->pd_linp[(offsetNumber) - 1]))
#define F_CASH_MUL_FLT4 846
#define F_CASH_MUL_FLT8 896
#define F_BOOLGT 57
#define gettext(msgid) dgettext (NULL, msgid)
#define PM 1
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SIGPROF 27
#define F_TIMETZ_LARGER 1379
#define Anum_pg_class_relnatts 17
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define F_PG_INDEXAM_HAS_PROPERTY 636
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define PF_TIPC 30
#define F_TSQ_MCONTAINS 3691
#define F_BITSETBIT 3033
#define IS_DEFAULT_LABEL_VERTEX(str) (str != NULL && strcmp(AG_DEFAULT_LABEL_VERTEX, str) == 0)
#define F_TIDIN 48
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define PG_GETARG_DATUM(n) (fcinfo->arg[n])
#define __NLINK_T_TYPE __U32_TYPE
#define RELKIND_FOREIGN_TABLE 'f'
#define F_GIST_BOX_UNION 2583
#define Anum_pg_class_relhassubclass 22
#define F_BOOLIN 1242
#define ACL_TRIGGER (1<<6)
#define __nlink_t_defined 
#define F_TIMEMI 245
#define ERRCODE_INVALID_TABLESAMPLE_REPEAT MAKE_SQLSTATE('2','2','0','2','G')
#define PG_RETURN_INT16(x) return Int16GetDatum(x)
#define F_INT4INC 766
#define VARSIZE_SHORT(PTR) VARSIZE_1B(PTR)
#define F_REGPROCEDUREIN 2212
#define __LC_ADDRESS 9
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define ereport(elevel,rest) ereport_domain(elevel, TEXTDOMAIN, rest)
#define ERRCODE_INVALID_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','2','3')
#define __S_IEXEC 0100
#define F_PG_STAT_GET_BACKEND_CLIENT_PORT 1393
#define F_INET_SPG_PICKSPLIT 3797
#define F_TIMESTAMP_LE_TIMESTAMPTZ 2521
#define RWH_WRITE_LIFE_LONG 4
#define F_DATAN2 1603
#define F_BOX_DISTANCE 978
#define F_TIDLE 2793
#define __glibc_macro_warning1(message) _Pragma (#message)
#define F_DATAND 2733
#define PG_RETURN_INT32(x) return Int32GetDatum(x)
#define ACLITEM_SET_GOPTIONS(item,goptions) ((item).ai_privs = ((item).ai_privs & ~(((AclMode) 0xFFFF) << 16)) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define F_TIDLT 2791
#define __STDC_IEC_559_COMPLEX__ 1
#define AI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("AI_IDN_USE_STD3_ASCII_RULES is deprecated") 0x0200
#define OPCLASS_ITEM_FUNCTION 2
#define F_CASH_EQ 888
#define F_BOOLLT 56
#define DN_ATTRIB 0x00000020
#define BTLessEqualStrategyNumber 2
#define F_NAMEREGEXNE 1252
#define __O_DIRECT 0200000
#define F_PG_STAT_GET_BACKEND_ACTIVITY 1940
#define SIGPWR 30
#define __FLT128_DIG__ 33
#define F_TIDNE 1265
#define pairingheap_reset(h) ((h)->ph_root = NULL)
#define W_OK 2
#define F_JSON_EXTRACT_PATH 3951
#define HAVE_FUNCNAME__FUNC 1
#define F_NETWORK_SMALLER 3563
#define F_CASH_GE 893
#define F_BOOLNE 84
#define F_CASH_GT 892
#define F_INT2VECTORRECV 2410
#define SyncScanLock (&MainLWLockArray[24].lock)
#define ERRCODE_INVALID_ARGUMENT_FOR_NTH_VALUE MAKE_SQLSTATE('2','2','0','1','6')
#define NUMERIC_MIN_DISPLAY_SCALE 0
#define sa_handler __sigaction_handler.sa_handler
#define INSTR_TIME_GET_MILLISEC(t) (((double) (t).tv_sec * 1000.0) + ((double) (t).tv_nsec) / 1000000.0)
#define ACL_ALL_RIGHTS_LANGUAGE (ACL_USAGE)
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define F_INT8DEC 3546
#define F_XMLCONCAT2 2900
#define ENOKEY 126
#define VirtualTransactionIdEquals(vxid1,vxid2) ((vxid1).backendId == (vxid2).backendId && (vxid1).localTransactionId == (vxid2).localTransactionId)
#define pg_compiler_barrier_impl() __asm__ __volatile__("" ::: "memory")
#define F_BTOIDSORTSUPPORT 3134
#define HAVE_SYS_STAT_H 1
#define F_BYTEAGE 1952
#define F_CASH_IN 886
#define DN_DELETE 0x00000008
#define S_IWGRP (S_IWUSR >> 3)
#define F_PG_READ_FILE_OFF_LEN 2624
#define MINIMAL_TUPLE_OFFSET ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) / MAXIMUM_ALIGNOF * MAXIMUM_ALIGNOF)
#define PG_INT16_MAX (0x7FFF)
#define HAVE_GCC__SYNC_CHAR_TAS 1
#define F_OK 0
#define _PC_PATH_MAX _PC_PATH_MAX
#define isgraph(c) __isctype((c), _ISgraph)
#define SHAREDINVALRELCACHE_ID (-2)
#define ReleaseSysCacheList(x) ReleaseCatCacheList(x)
#define PG_VERSION "11.18 (Ubuntu 11.18-1.pgdg22.04+1)"
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define O_CREAT 0100
#define _PC_LINK_MAX _PC_LINK_MAX
#define ESHUTDOWN 108
#define F_HASH_RANGE_EXTENDED 3417
#define Anum_pg_class_relhastriggers 21
#define PF_NFC 39
#define AssertPointerAlignment(ptr,bndr) ((void)true)
#define F_CASH_LE 891
#define F_CASH_LT 890
#define F_INT8EQ 467
#define F_TIMESTAMP_TIME 1316
#define F_REGNAMESPACESEND 4088
#define F_BOX_OVERRIGHT 190
#define F_INT8DIV 466
#define ERRCODE_ARRAY_SUBSCRIPT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define F_SETOWN __F_SETOWN
#define F_INT28MUL 943
#define F_TEXTIN 46
#define F_CASH_MI 895
#define XATTR_LIST_MAX 65536
#define F_LSEG_HORIZONTAL 998
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define F_HAS_SEQUENCE_PRIVILEGE_NAME_NAME 2181
#define F_REGOPERATORRECV 2450
#define MILLENNIUM 27
#define F_BINARY_UPGRADE_SET_NEXT_PG_AUTHID_OID 3590
#define F_CASH_NE 889
#define __INT8_TYPE__ signed char
#define F_INT8GE 472
#define MAX_LOCKMODES 10
#define F_INT8GT 470
#define XLogRecHasAnyBlockRefs(decoder) ((decoder)->max_block_id >= 0)
#define F_INT8_ACCUM 1836
#define ENOMEDIUM 123
#define SI_TKILL SI_TKILL
#define IntervalPGetDatum(X) PointerGetDatum(X)
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define F_TIDSEND 2439
#define PACKAGE_VERSION "11.18"
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define HASH_FUNCTION 0x0040
#define F_POINT_EQ 135
#define PG_TEMP_FILES_DIR "pgsql_tmp"
#define BTMaxStrategyNumber 5
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define BITS_PER_BITMAPWORD 32
#define F_CASH_PL 894
#define F_CHARSEND 2435
#define F_INT8IN 460
#define RowExclusiveLock 3
#define RTLessEqualStrategyNumber 21
#define F_LSEG_INTERPT 362
#define _BITS_TIME_H 1
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define HAVE_DECL_SNPRINTF 1
#define DatumGetNumericCopy(X) ((Numeric) PG_DETOAST_DATUM_COPY(X))
#define F_TS_TYPANALYZE 3688
#define __FLT_RADIX__ 2
#define F_BOOLRECV 2436
#define PG_INT16_MIN (-0x7FFF-1)
#define HEAP_XMIN_FROZEN (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)
#define __INT_LEAST16_TYPE__ short int
#define AI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("AI_IDN_ALLOW_UNASSIGNED is deprecated") 0x0100
#define F_NETWORK_NE 925
#define F_INT82MUL 839
#define ATTSTATSSLOT_VALUES 0x01
#define HAVE_USELOCALE 1
#define ACL_MODECHG_ADD 1
#define __ARM_PCS_AAPCS64 1
#define F_TS_RANK_WTTF 3703
#define F_UUID_EQ 2956
#define F_INT8LT 469
#define USE_UNNAMED_POSIX_SEMAPHORES 1
#define palloc_array(type,count) ((type *) palloc(sizeof(type) * (count)))
#define _POSIX_ARG_MAX 4096
#define BUS_ADRALN BUS_ADRALN
#define F_CHAR_BPCHAR 860
#define F_CIRCLE_CONTAIN_PT 1477
#define Anum_pg_class_relowner 5
#define S_LOCK_FREE(lock) (*(lock) == 0)
#define F_INT8MI 464
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define AGT_HEADER_VERTEX 0x00000002
#define F_PG_LOGICAL_SLOT_PEEK_BINARY_CHANGES 3785
#define IP_DEFAULT_MULTICAST_LOOP 1
#define F_ANYNONARRAY_OUT 2778
#define F_BINARY_UPGRADE_SET_NEXT_ARRAY_PG_TYPE_OID 3584
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define F_UUID_GE 2957
#define F_INT8NE 468
#define F_UUID_GT 2958
#define F_GIN_CMP_TSLEXEME 3724
#define SO_PREFER_BUSY_POLL 69
#define F_REGCLASSIN 2218
#define is_absolute_path(filename) is_nonwindows_absolute_path(filename)
#define F_BYTEAGETBYTE 721
#define F_TEXTICREGEXEQ 1238
#define _BITS_SIGSTACK_H 1
#define _POSIX_TIMEOUTS 200809L
#define F_PG_NDISTINCT_SEND 3358
#define F_INT8OR 1905
#define PG_DIAG_MESSAGE_HINT 'H'
#define DMONTH "month"
#define XactCompletionApplyFeedback(xinfo) ((xinfo & XACT_COMPLETION_APPLY_FEEDBACK) != 0)
#define TABLESPACE_VERSION_DIRECTORY "PG_" PG_MAJORVERSION "_" CppAsString2(CATALOG_VERSION_NO)
#define __STDC_IEC_60559_BFP__ 201404L
#define SIGPIPE 13
#define __S_IWRITE 0200
#define AF_PACKET PF_PACKET
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define HeapTupleHeaderIsHotUpdated(tup) ( ((tup)->t_infomask2 & HEAP_HOT_UPDATED) != 0 && ((tup)->t_infomask & HEAP_XMAX_INVALID) == 0 && !HeapTupleHeaderXminInvalid(tup) )
#define VARSIZE(PTR) VARSIZE_4B(PTR)
#define F_UUID_IN 2952
#define __SIZEOF_PTHREAD_COND_T 48
#define F_INT8PL 463
#define _WCHAR_T_H 
#define F_PG_STAT_GET_AUTOANALYZE_COUNT 3057
#define F_PG_DDL_COMMAND_RECV 88
#define AGTYPE_CONTAINER_IS_ARRAY(agtc) (((agtc)->header & AGT_FARRAY) != 0)
#define F_NUMERIC_RECV 2460
#define ERRCODE_FEATURE_NOT_SUPPORTED MAKE_SQLSTATE('0','A','0','0','0')
#define PG_GETARG_VARCHAR_P_COPY(n) DatumGetVarCharPCopy(PG_GETARG_DATUM(n))
#define F_PG_STAT_GET_LIVE_TUPLES 2878
#define F_PG_CURRENT_WAL_FLUSH_LSN 3330
#define AddinShmemInitLock (&MainLWLockArray[21].lock)
#define CLOCK_TAI 11
#define NUMERIC_MIN_SIG_DIGITS 16
#define IP_RETOPTS 7
#define F_INT2_MUL_CASH 863
#define __restrict_arr __restrict
#define F_UUID_LE 2955
#define F_BRIN_MINMAX_UNION 3386
#define F_UUID_LT 2954
#define _SIGNAL_H 
#define F_TS_HEADLINE_JSON_OPT 4207
#define F_PG_LAST_WAL_RECEIVE_LSN 3820
#define F_HASHMACADDR8 328
#define HASH_ALLOC 0x0200
#define SO_PEEK_OFF 42
#define __LC_PAPER 7
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define _SIZE_T_ 
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define __FLT16_IS_IEC_60559__ 2
#define __FLT16_MAX_EXP__ 16
#define F_DATE_EQ_TIMESTAMPTZ 2353
#define INTERVAL_RANGE_MASK (0x7FFF)
#define F_HASHOIDEXTENDED 445
#define F_UUID_NE 2959
#define F_INT8UM 462
#define F_INT8UP 1910
#define EPROTO 71
#define F_HASHINT2 449
#define F_HASHINT4 450
#define F_HASHINT8 949
#define INT16_WIDTH 16
#define DatumGetCString(X) ((char *) DatumGetPointer(X))
#define F_BOX_CONTAIN 187
#define LP_NORMAL 1
#define __S_IFDIR 0040000
#define INT_MAX __INT_MAX__
#define PG_GETARG_ACLITEM_P(n) DatumGetAclItemP(PG_GETARG_DATUM(n))
#define likely(x) __builtin_expect((x) != 0, 1)
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define for_both_cell(cell1,initcell1,cell2,initcell2) for ((cell1) = (initcell1), (cell2) = (initcell2); (cell1) != NULL && (cell2) != NULL; (cell1) = lnext(cell1), (cell2) = lnext(cell2))
#define AGTYPEOID get_AGTYPEOID()
#define _POSIX_MONOTONIC_CLOCK 0
#define F_VARCHAR_TRANSFORM 3097
#define F_NOTIFY 1026
#define F_TSVECTOR_CONCAT 3625
#define F_BOXES_BOUND_BOX 4067
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define F_UUID_SORTSUPPORT 3300
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define F_INT4XOR 1900
#define __INT_FAST8_TYPE__ signed char
#define F_GTSQUERY_UNION 3698
#define ATOMICS_H 
#define __U64_TYPE unsigned long int
#define IP_RECVOPTS 6
#define F_PG_DROP_REPLICATION_SLOT 3780
#define S_LOCK_H 
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define GUC_UNIT (GUC_UNIT_MEMORY | GUC_UNIT_TIME)
#define F_TIMETZ_MI_INTERVAL 1750
#define F_GTSQUERY_PENALTY 3700
#define _PATH_NETWORKS "/etc/networks"
#define ACLITEM_GET_GOPTIONS(item) (((item).ai_privs >> 16) & 0xFFFF)
#define PG_UINT32_MAX (0xFFFFFFFFU)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define F_NUMERIC_SCALE 3281
#define F_RI_FKEY_RESTRICT_DEL 1648
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO _PC_SYNC_IO
#define SHAREDINVALCATALOG_ID (-1)
#define F_LSEG_INTERSECT 994
#define F_HASHHANDLER 331
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define PG_GETARG_INT16(n) DatumGetInt16(PG_GETARG_DATUM(n))
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define list_make2(x1,x2) lcons(x1, list_make1(x2))
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define XLogRecGetXid(decoder) ((decoder)->decoded_record->xl_xid)
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define F_PERCENTILE_DISC_MULTI_FINAL 3979
#define DTK_MINUTE 19
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define RELPERSISTENCE_PERMANENT 'p'
#define F_XML_IS_WELL_FORMED_DOCUMENT 3052
#define FirstOffsetNumber ((OffsetNumber) 1)
#define F_QUERY_TO_XML_AND_XMLSCHEMA 2930
#define F_PG_STAT_GET_DB_TUPLES_INSERTED 2760
#define F_ARRAYCONTAINS 2748
#define F_NEQJOINSEL 106
#define F_BIT 1685
#define AGTYPE_EXISTS_ALL_STRATEGY_NUMBER 11
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define F_NUMERIC_FLOOR 1712
#define SO_ATTACH_REUSEPORT_CBPF 51
#define F_PG_LSN_SEND 3239
#define F_ARRAY_TYPANALYZE 3816
#define AGTYPE_CONTAINER_IS_OBJECT(agtc) (((agtc)->header & AGT_FOBJECT) != 0)
#define F_TIMESTAMP_TIMESTAMPTZ 2028
#define F_TEXTICREGEXNE 1239
#define USE_GERMAN_DATES 3
#define INT_MIN (-INT_MAX - 1)
#define ag_label_graph_id_index_id() ag_relation_id("ag_label_graph_id_index", "index")
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define F_CIRCLE_RADIUS 1470
#define FRAMEOPTION_START_UNBOUNDED_PRECEDING 0x00020
#define F_DTOI4 317
#define HAVE_SYMLINK 1
#define _DIRENT_HAVE_D_TYPE 
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define PG_GETARG_INT64(n) DatumGetInt64(PG_GETARG_DATUM(n))
#define EL3RST 47
#define F_INT8SHL 1908
#define HOST_NOT_FOUND 1
#define F_INT8SHR 1909
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define F_PG_LOGICAL_SLOT_PEEK_CHANGES 3784
#define F_GIN_EXTRACT_JSONB_QUERY 3483
#define BackgroundWorkerLock (&MainLWLockArray[33].lock)
#define HEAP_XMAX_IS_SHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_SHR_LOCK)
#define MCXT_ALLOC_ZERO 0x04
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define FRAMEOPTION_DEFAULTS (FRAMEOPTION_RANGE | FRAMEOPTION_START_UNBOUNDED_PRECEDING | FRAMEOPTION_END_CURRENT_ROW)
#define F_PG_CURRENT_WAL_LSN 2849
#define PG_GETARG_BPCHAR_P_SLICE(n,a,b) DatumGetBpCharPSlice(PG_GETARG_DATUM(n),a,b)
#define F_POLY_RECV 2486
#define si_value _sifields._rt.si_sigval
#define ERRCODE_OBJECT_IN_USE MAKE_SQLSTATE('5','5','0','0','6')
#define ENOTDIR 20
#define F_STATEMENT_TIMESTAMP 2648
#define HEAP_HASVARWIDTH 0x0002
#define F_TS_RANK_WTT 3704
#define _LIBC_LIMITS_H_ 1
#define TIMER_ABSTIME 1
#define F_NUMERIC 1703
#define Anum_pg_attribute_attlen 5
#define F_LPAD 873
#define __PMT(args) args
#define llast_int(l) lfirst_int(list_tail(l))
#define HAVE_INET_ATON 1
#define _SYS_TYPES_H 1
#define AF_NETBEUI PF_NETBEUI
#define F_PG_ROTATE_LOGFILE_V2 2622
#define VALUE_H 
#define F_TIMESTAMP_DATE 2029
#define RELKIND_RELATION 'r'
#define F_ARRAY_UNNEST 2331
#define BKPIMAGE_APPLY 0x04
#define F_LINE_OUT 1491
#define ENXIO 6
#define IPV6_RTHDR_LOOSE 0
#define __FLT64_HAS_QUIET_NAN__ 1
#define ERRCODE_DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST MAKE_SQLSTATE('2','B','0','0','0')
#define _SC_STREAMS _SC_STREAMS
#define TermTupleHashIterator(iter) ((void) 0)
#define PG_HAVE_ATOMIC_UNLOCKED_TEST_FLAG 
#define DatumGetTextP(X) ((text *) PG_DETOAST_DATUM(X))
#define F_OVERLAPS_TIME 1308
#define F_INT2SMALLER 771
#define F_POLY_SEND 2487
#define L_XTND SEEK_END
#define __WALL 0x40000000
#define F_NUMERIC_VAR_SAMP 1838
#define OPCLASS_ITEM_OPERATOR 1
#define XactCompletionRelcacheInitFileInval(xinfo) ((xinfo & XACT_COMPLETION_UPDATE_RELCACHE_FILE) != 0)
#define F_FLOAT4_ACCUM 208
#define FAPPEND O_APPEND
#define PF_CAN 29
#define LOG 15
#define F_CONSTRUCT_POINT 1440
#define FIELDNO_EXPRSTATE_RESVALUE 3
#define F_FLOAT4_NUMERIC 1742
#define F_TIMESTAMPTZ_MI_INTERVAL 1190
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define FIELDNO_AGGSTATE_CURPERTRANS 16
#define GUC_NO_RESET_ALL 0x0008
#define F_POINT_RECV 2428
#define __stub___compat_get_kernel_syms 
#define IPV6_RECVFRAGSIZE 77
#define F_FLOAT8_TIMESTAMPTZ 1158
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define F_REGNAMESPACEIN 4084
#define __FLT64_HAS_INFINITY__ 1
#define F_BPCHARGE 1052
#define POLL_HUP POLL_HUP
#define DECADE 25
#define F_BPCHARGT 1051
#define _STRING_H 1
#define F_PG_GET_SERIAL_SEQUENCE 1665
#define HAVE_LIBM 1
#define F_PG_NODE_TREE_OUT 196
#define ERRCODE_MOST_SPECIFIC_TYPE_MISMATCH MAKE_SQLSTATE('2','2','0','0','G')
#define F_INT8MUL 465
#define _XOPEN_REALTIME 1
#define F_TEXTREGEXEQ 1254
#define FILENAME_MAX 4096
#define __LDBL_REDIR_DECL(name) 
#define F_DATE_CMP_TIMESTAMP 2344
#define F_BPCHARIN 1044
#define VARHDRSZ ((int32) sizeof(int32))
#define HeapTupleHeaderSetOid(tup,oid) do { Assert((tup)->t_infomask & HEAP_HASOID); *((Oid *) ((char *)(tup) + (tup)->t_hoff - sizeof(Oid))) = (oid); } while (0)
#define PG_HAVE_ATOMIC_WRITE_U32 
#define F_ARRAY_AGG_TRANSFN 2333
#define F_IN_RANGE_TIMESTAMP_INTERVAL 4134
#define F_NUMERIC_MOD 1728
#define USE_LDAP 1
#define DatumGetVarCharPCopy(X) ((VarChar *) PG_DETOAST_DATUM_COPY(X))
#define F_TS_MATCH_QV 3635
#define F_TS_HEADLINE_JSONB_BYID 4202
#define SerializableFinishedListLock (&MainLWLockArray[29].lock)
#define F_GIN_TRICONSISTENT_JSONB 3488
#define FKCONSTR_MATCH_SIMPLE 's'
#define PG_DIAG_SOURCE_FILE 'F'
#define ACL_ALL_RIGHTS_FOREIGN_SERVER (ACL_USAGE)
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define LocalTransactionIdIsValid(lxid) ((lxid) != InvalidLocalTransactionId)
#define TCOPPROT_H 
#define HAVE_DECL_LLVMCREATEGDBREGISTRATIONLISTENER 1
#define F_TIMESTAMP_CMP_TIMESTAMPTZ 2526
#define FIELDNO_AGGSTATE_ALL_PERGROUPS 34
#define F_BOX_DIAGONAL 981
#define F_BPCHARLE 1050
#define F_PG_TABLESPACE_SIZE_NAME 2323
#define F_BPCHARLT 1049
#define AmStartupProcess() (MyAuxProcType == StartupProcess)
#define RESUME_INTERRUPTS() do { Assert(InterruptHoldoffCount > 0); InterruptHoldoffCount--; } while(0)
#define F_TIMESTAMPTZTYPMODOUT 2908
#define __BYTE_ORDER __LITTLE_ENDIAN
#define F_PG_TYPEOF 1619
#define F_WINDOW_PERCENT_RANK 3103
#define __HAVE_GENERIC_SELECTION 1
#define F_PG_GET_TRIGGERDEF 1662
#define INT64_WIDTH 64
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define fmgr_info_set_expr(expr,finfo) ((finfo)->fn_expr = (expr))
#define F_TS_MATCH_TQ 3761
#define F_TS_MATCH_TT 3760
#define F_HYPOTHETICAL_DENSE_RANK_FINAL 3993
#define F_BPCHARNE 1053
#define ERRCODE_SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','1')
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX (9223372036854775807L)
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define lfourth_node(type,l) castNode(type, lfourth(l))
#define __UINT_FAST64_TYPE__ long unsigned int
#define HeapTupleSetHotUpdated(tuple) HeapTupleHeaderSetHotUpdated((tuple)->t_data)
#define F_DATERANGE_CANONICAL 3915
#define pg_compiler_barrier() pg_compiler_barrier_impl()
#define F_ENUM_LAST 3529
#define F_TS_MATCH_VQ 3634
#define F_BTOIDCMP 356
#define F_WINDOW_LAST_VALUE 3113
#define Anum_pg_class_relpages 9
#define F_HAS_FUNCTION_PRIVILEGE_NAME_ID 2257
#define F_HASHINT8EXTENDED 442
#define UINT_FAST8_MAX (255)
#define NI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("NI_IDN_ALLOW_UNASSIGNED is deprecated") 64
#define __INT_MAX__ 0x7fffffff
#define F_NUMERIC_POLY_VAR_POP 3390
#define F_TSM_HANDLER_IN 3311
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define GRAPHIDOID get_GRAPHIDOID()
#define F_TEXT_CONCAT 3058
#define F_INET_GIST_SAME 3559
#define F_TABLE_TO_XMLSCHEMA 2926
#define F_INT24MUL 170
#define F_TEXTREGEXNE 1256
#define F_TIMESTAMP_CMP 1314
#define SI_ASYNCNL SI_ASYNCNL
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define F_JSONB_ARRAY_LENGTH 3207
#define _T_SIZE_ 
#define F_GIST_CIRCLE_DISTANCE 3280
#define F_PG_REPLICATION_ORIGIN_OID 6005
#define LLONG_MAX __LONG_LONG_MAX__
#define F_PG_REPLICATION_ORIGIN_SESSION_IS_SETUP 6008
#define IN_CLASSC_NSHIFT 8
#define MaxHeapTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(SizeofHeapTupleHeader) + sizeof(ItemIdData))))
#define PAIRINGHEAP_H 
#define SHUT_WR SHUT_WR
#define XLogRecGetInfo(decoder) ((decoder)->decoded_record->xl_info)
#define LC_MEASUREMENT __LC_MEASUREMENT
#define F_PG_NUM_NULLS 438
#define __LC_NUMERIC 1
#define F_CHAREQ 61
#define STDIN_FILENO 0
#define __INT64_TYPE__ long int
#define XLOG_XACT_PREPARE 0x10
#define ERRCODE_E_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','2')
#define SET_VARTAG_EXTERNAL(PTR,tag) SET_VARTAG_1B_E(PTR, tag)
#define UINT64_FORMAT "%" INT64_MODIFIER "u"
#define F_INT8RECV 2408
#define ITIMER_REAL ITIMER_REAL
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define F_RTRIM1 401
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define S_IRGRP (S_IRUSR >> 3)
#define F_MODE_FINAL 3985
#define _POSIX_SYMLINK_MAX 255
#define TABLECMDS_H 
#define F_TIMESTAMPTYPMODOUT 2906
#define F_HASHCHAR 454
#define F_CHARGE 74
#define F_DATE_GE_TIMESTAMP 2342
#define PG_GETARG_ACL_P(n) DatumGetAclP(PG_GETARG_DATUM(n))
#define F_CHARGT 73
#define F_PG_STAT_RESET_SHARED 3775
#define ERRCODE_INVALID_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','0','C')
#define PF_PACKET 17
#define MSG_SYN MSG_SYN
#define __INO64_T_TYPE __UQUAD_TYPE
#define INSTR_TIME_SET_CURRENT(t) ((void) clock_gettime(PG_INSTR_CLOCK, &(t)))
#define _POSIX_V6_ILP32_OFF32 -1
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define F_FLOAT8_STDDEV_SAMP 1832
#define F_RELTIME_INTERVAL 1177
#define F_TIMETZ_HASH 1696
#define F_OVERLAPS_TIMESTAMP 1304
#define HAVE__BUILTIN_UNREACHABLE 1
#define F_HAS_SEQUENCE_PRIVILEGE_ID_NAME 2183
#define F_JSONB_TO_TSVECTOR 4213
#define MB_LEN_MAX 16
#define _POSIX_FSYNC 200809L
#define F_SEAL_GROW 0x0004
#define Anum_ag_label_kind 4
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define F_CHARIN 1245
#define outerPlan(node) (((Plan *)(node))->lefttree)
#define AGT_FBINARY_MASK 0x0FFFFFFF
#define F_BINARY_UPGRADE_SET_RECORD_INIT_PRIVS 4083
#define ERRCODE_ADMIN_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','1')
#define EREMOTEIO 121
#define F_FDW_HANDLER_IN 3116
#define F_I4TOI2 314
#define OidGenLock (&MainLWLockArray[2].lock)
#define AT_STATX_DONT_SYNC 0x4000
#define F_CHAROUT 33
#define ERRCODE_UNTRANSLATABLE_CHARACTER MAKE_SQLSTATE('2','2','P','0','5')
#define XLOG_XACT_COMMIT_PREPARED 0x30
#define __FP_FAST_FMAF64 1
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define HAVE_CRYPT_H 1
#define LABEL_KIND_EDGE 'e'
#define F_WEBSEARCH_TO_TSQUERY_BYID 5007
#define F_INTERVAL_TRUNC 1218
#define __USE_POSIX199309 1
#define AG_AG_CACHE_H 
#define HAVE_MKDTEMP 1
#define AmWalWriterProcess() (MyAuxProcType == WalWriterProcess)
#define F_NUMERIC_DIV 1727
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define F_RANGE_EMPTY 3850
#define MovedPartitionsOffsetNumber 0xfffd
#define F_PG_CONTROL_RECOVERY 3443
#define F_FLOAT8UP 1914
#define ENTRY_ID_MASK INT64CONST(0x0000ffffffffffff)
#define PG_CATCH() } else { PG_exception_stack = save_exception_stack; error_context_stack = save_context_stack
#define ERRCODE_DUPLICATE_OBJECT MAKE_SQLSTATE('4','2','7','1','0')
#define F_CSTRING_RECV 2500
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define F_NETWORK_HOSTMASK 1362
#define F_HAS_TYPE_PRIVILEGE_ID_NAME 3140
#define _POSIX_SIGQUEUE_MAX 32
#define _POSIX_SEMAPHORES 200809L
#define __ATOMIC_RELAXED 0
#define graph_exists(graph_name) OidIsValid(get_graph_oid(graph_name))
#define F_BTNAMESORTSUPPORT 3135
#define F_CHARNE 70
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define SA_ONESHOT SA_RESETHAND
#define F_PG_ADVISORY_LOCK_INT4 2886
#define F_PG_ADVISORY_LOCK_INT8 2880
#define AGT_GIN_FLAG_KEY 0x01
#define F_FLOAT84MUL 283
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define XATTR_NAME_MAX 255
#define LOCK_SH 1
#define F_OIDVECTORLE 678
#define F_LINE_CONSTRUCT_PP 1493
#define F_PG_STAT_GET_FUNCTION_TOTAL_TIME 2979
#define F_PG_STAT_GET_BACKEND_WAIT_EVENT_TYPE 2788
#define SetProcessingMode(mode) do { AssertArg((mode) == BootstrapProcessing || (mode) == InitProcessing || (mode) == NormalProcessing); Mode = (mode); } while(0)
#define dsa_allocate(area,size) dsa_allocate_extended(area, size, 0)
#define HeapTupleAllFixed(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH))
#define SIGKILL 9
#define F_TSVECTOR_UPDATE_TRIGGER_BYCOLUMN 3753
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define __INT_LEAST32_TYPE__ int
#define SOL_CAIF 278
#define F_NAME_BPCHAR 408
#define F_UNKNOWNRECV 2416
#define FrozenTransactionId ((TransactionId) 2)
#define F_TIMESTAMPTZ_OUT 1151
#define DTK_STRING 1
#define USE_SSL 
#define F_VARCHAR 669
#define LOCK_MANAGER_LWLOCK_OFFSET (BUFFER_MAPPING_LWLOCK_OFFSET + NUM_BUFFER_PARTITIONS)
#define ERRCODE_FDW_FUNCTION_SEQUENCE_ERROR MAKE_SQLSTATE('H','V','0','1','0')
#define F_RI_FKEY_CHECK_INS 1644
#define ENOLCK 37
#define F_CIRCLE_DISTANCE 1471
#define MSG_DONTWAIT MSG_DONTWAIT
#define F_DATE_OUT 1085
#define F_HASHMACADDR8EXTENDED 781
#define F_JSONB_STRING_TO_TSVECTOR_BYID 4211
#define F_POINT_BOX 4091
#define F_HAS_SCHEMA_PRIVILEGE_ID_NAME 2270
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define _XOPEN_UNIX 1
#define HAVE_UUID_E2FS 1
#define HAVE_SECURITY_PAM_APPL_H 1
#define F_NUMERIC_STDDEV_POP 2596
#define F_RANGE_OUT 3835
#define F_HAS_SERVER_PRIVILEGE_ID 3011
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define ACL_SIZE(ACL) ARR_SIZE(ACL)
#define F_PG_STAT_GET_BACKEND_WAIT_EVENT 2853
#define AI_PASSIVE 0x0001
#define F_OPAQUE_IN 2306
#define F_INT42GT 163
#define TZ 5
#define HeapTupleHeaderSetSpeculativeToken(tup,token) ( ItemPointerSet(&(tup)->t_ctid, token, SpecTokenOffsetNumber) )
#define DSA_ALLOC_HUGE 0x01
#define PF_RDS 21
#define F_PG_STAT_GET_BGWRITER_BUF_WRITTEN_CHECKPOINTS 2771
#define __SI_ERRNO_THEN_CODE 1
#define INDEX_SIZE_MASK 0x1FFF
#define TUPDESC_H 
#define F_PG_LOGICAL_SLOT_GET_CHANGES 3782
#define FIELDNO_TUPLETABLESLOT_ISNULL 11
#define TUPLESORT_H 
#define VARATT_IS_EXTERNAL_EXPANDED_RO(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RO)
#define VARATT_IS_EXTERNAL_EXPANDED_RW(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RW)
#define entry_id_is_valid(id) (id >= ENTRY_ID_MIN && id <= ENTRY_ID_MAX)
#define F_NUMERIC_POLY_AVG 3389
#define F_JSONB_OBJECT_AGG_TRANSFN 3268
#define __f128(x) x ##f128
#define F_PG_FUNCTION_IS_VISIBLE 2081
#define edge_tuple_start_id Anum_ag_label_edge_table_start_id - 1
#define _BITS_FLOATN_H 
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define PLANNODES_H 
#define F_MACADDR_RECV 2494
#define F_GENERATE_SERIES_TIMESTAMPTZ 939
#define F_INT82DIV 840
#define Natts_ag_label 6
#define ENOTSUP EOPNOTSUPP
#define IP_CHECKSUM 23
#define ERRCODE_S_E_INVALID_SPECIFICATION MAKE_SQLSTATE('3','B','0','0','1')
#define _BITS_SIGTHREAD_H 1
#define LC_NAME __LC_NAME
#define _BITS_TYPES___LOCALE_T_H 1
#define toascii_l(c,l) __toascii_l ((c), (l))
#define IndexTupleSize(itup) ((Size) ((itup)->t_info & INDEX_SIZE_MASK))
#define HEAP_XMAX_IS_KEYSHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_KEYSHR_LOCK)
#define WRITEBACK_MAX_PENDING_FLUSHES 256
#define F_HASH_ACLITEM 329
#define F_TO_REGNAMESPACE 4086
#define EDEADLOCK EDEADLK
#define CLD_DUMPED CLD_DUMPED
#define FIELDNO_TUPLETABLESLOT_OFF 14
#define RTAdjacentStrategyNumber 17
#define FKCONSTR_MATCH_PARTIAL 'p'
#define F_PREFIXJOINSEL 3438
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define __ULONG32_TYPE unsigned int
#define _BITS_BYTESWAP_H 1
#define F_CIDRECV 2442
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define F_RANGE_LOWER 3848
#define F_ICREGEXNESEL 1823
#define __suseconds_t_defined 
#define INDEX_VAR_MASK 0x4000
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define __off_t_defined 
#define ERRCODE_CONNECTION_FAILURE MAKE_SQLSTATE('0','8','0','0','6')
#define SK_SEARCHNULL 0x0040
#define GETSTRUCT(TUP) ((char *) ((TUP)->t_data) + (TUP)->t_data->t_hoff)
#define PG_DIAG_SEVERITY_NONLOCALIZED 'V'
#define DT_REG DT_REG
#define F_PG_STAT_GET_BUF_FSYNC_BACKEND 3063
#define F_POINT_RIGHT 133
#define XLR_BLOCK_ID_DATA_SHORT 255
#define _GCC_SIZE_T 
#define F_INETAND 2628
#define F_GENERATE_SERIES_INT4 1067
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define HAVE_CLOCK_GETTIME 1
#define F_PG_DEPENDENCIES_OUT 3405
#define F_SHOW_ALL_SETTINGS 2084
#define __W_CONTINUED 0xffff
#define L_SET SEEK_SET
#define F_DSQRT 230
#define __USE_XOPEN2K8XSI 1
#define F_MACADDR_SORTSUPPORT 3359
#define SO_SNDTIMEO_OLD 21
#define ERRCODE_CRASH_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','2')
#define F_INT4_AVG_COMBINE 3324
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define F_TIMESTAMP_LT_DATE 2364
#define ULONG_WIDTH __WORDSIZE
#define __size_t__ 
#define HAVE_LIBXML2 1
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define F_ARRAY_POSITIONS 3279
#define F_JSON_OBJECT_AGG_FINALFN 3196
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define F_PG_TABLESPACE_SIZE_OID 2322
#define DATEORDER_MDY 2
#define _POSIX_BARRIERS 200809L
#define F_HAS_COLUMN_PRIVILEGE_ID_ID_ATTNUM 3019
#define F_TS_RANKCD_TT 3710
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define END_CRIT_SECTION() do { Assert(CritSectionCount > 0); CritSectionCount--; } while(0)
#define F_INET_GIST_CONSISTENT 3553
#define F_SUPPRESS_REDUNDANT_UPDATES_TRIGGER 1291
#define AF_DECnet PF_DECnet
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define __LONG_WIDTH__ 64
#define F_PG_STAT_RESET_SINGLE_FUNCTION_COUNTERS 3777
#define __STDLIB_MB_LEN_MAX 16
#define DTK_EARLY 9
#define F_PG_IS_IN_RECOVERY 3810
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define __S_IFIFO 0010000
#define F_VARBIT_TRANSFORM 3158
#define DSA_ALLOC_NO_OOM 0x02
#define F_GIN_EXTRACT_TSQUERY_OLDSIG 3791
#define F_HASH_ARRAY_EXTENDED 782
#define ENOPROTOOPT 92
#define SearchSysCacheExists1(cacheId,key1) SearchSysCacheExists(cacheId, key1, 0, 0, 0)
#define SearchSysCacheExists2(cacheId,key1,key2) SearchSysCacheExists(cacheId, key1, key2, 0, 0)
#define SearchSysCacheExists3(cacheId,key1,key2,key3) SearchSysCacheExists(cacheId, key1, key2, key3, 0)
#define SearchSysCacheExists4(cacheId,key1,key2,key3,key4) SearchSysCacheExists(cacheId, key1, key2, key3, key4)
#define F_DATE_EQ 1086
#define DO_AGGSPLIT_DESERIALIZE(as) (((as) & AGGSPLITOP_DESERIALIZE) != 0)
#define PG_GETARG_VARLENA_P(n) PG_DETOAST_DATUM(PG_GETARG_DATUM(n))
#define NormalTransactionIdFollows(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) > 0)
#define SO_ATTACH_BPF 50
#define F_JSON_OBJECT_AGG_TRANSFN 3180
#define __blkcnt_t_defined 
#define TMODULO(t,q,u) do { (q) = ((t) / (u)); if ((q) != 0) (t) -= ((q) * (u)); } while(0)
#define F_BOOL_ANYTRUE 3499
#define F_INT4UM 212
#define F_GIN_EXTRACT_JSONB_PATH 3485
#define EMFILE 24
#define ARR_LBOUND(a) ((int *) (((char *) (a)) + sizeof(ArrayType) + sizeof(int) * ARR_NDIM(a)))
#define PG_GETARG_POINTER(n) DatumGetPointer(PG_GETARG_DATUM(n))
#define F_DATE_GE 1090
#define HAVE_NETINET_TCP_H 1
#define F_DATE_GT 1089
#define F_INT4UP 1912
#define BUFFER_MAPPING_LWLOCK_OFFSET NUM_INDIVIDUAL_LWLOCKS
#define F_JSON_ARRAY_ELEMENTS 3955
#define F_PG_COLLATION_ACTUAL_VERSION 3448
#define ERRCODE_INVALID_PSTATEMENT_DEFINITION MAKE_SQLSTATE('4','2','P','1','4')
#define MSG_EOR MSG_EOR
#define DATATYPE_TIMESTAMP_H 
#define VARSIZE_ANY(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR) : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR) : VARSIZE_4B(PTR)))
#define __UINT32_TYPE__ unsigned int
#define ItemIdHasStorage(itemId) ((itemId)->lp_len != 0)
#define F_TSVECTOR_FILTER 3319
#define F_DATE_IN 1084
#define ERRCODE_INVALID_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','M')
#define __FLT_MIN_10_EXP__ (-37)
#define ACLITEM_ALL_GOPTION_BITS ((AclMode) 0xFFFF << 16)
#define oid_hash uint32_hash
#define IN_MULTICAST(a) IN_CLASSD(a)
#define dsa_allocate0(area,size) dsa_allocate_extended(area, size, DSA_ALLOC_ZERO)
#define AT_EACCESS 0x200
#define F_POLY_CONTAIN_PT 1428
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define F_TSM_SYSTEM_HANDLER 3314
#define F_DATE_CMP_TIMESTAMPTZ 2357
#define WORD_BIT 32
#define ERRCODE_INVALID_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','1','9')
#define EXIT_FAILURE 1
#define FRAMEOPTION_END_OFFSET_PRECEDING 0x01000
#define F_PG_ADVISORY_LOCK_SHARED_INT4 2887
#define F_PG_ADVISORY_LOCK_SHARED_INT8 2881
#define F_TIMEOFDAY 274
#define F_PG_REPLICATION_ORIGIN_ADVANCE 6012
#define F_DATE_LE 1088
#define F_NETWORK_BROADCAST 698
#define AT_STATX_FORCE_SYNC 0x2000
#define F_DATE_LT 1087
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define F_PG_STAT_GET_LAST_ANALYZE_TIME 2783
#define SO_TIMESTAMPING_NEW 65
#define F_INETMI 2633
#define F_INT2MOD 155
#define sigev_notify_function _sigev_un._sigev_thread._function
#define F_DATE_MI 1140
#define F_BOX_DIV 1425
#define F_TIMESTAMPTZ_AGE 1199
#define INTMAX_C(c) c ## L
#define HAVE_GETRUSAGE 1
#define ACLITEM_ALL_PRIV_BITS ((AclMode) 0xFFFF)
#define ILL_PRVOPC ILL_PRVOPC
#define F_DATE_NE 1091
#define type_is_array_domain(typid) (get_base_element_type(typid) != InvalidOid)
#define HAVE_DECL_LLVMGETHOSTCPUFEATURES 1
#define _STDINT_H 1
#define AccessShareLock 1
#define __FILE_defined 1
#define F_INET_MERGE 4063
#define PG_GETARG_TEXT_P_COPY(n) DatumGetTextPCopy(PG_GETARG_DATUM(n))
#define F_SCHEMA_TO_XML_AND_XMLSCHEMA 2935
#define F_INETOR 2629
#define F_FLOAT4ABS 207
#define F_TIMESTAMPTZ_LE_DATE 2378
#define NoLock 0
#define PG_HAVE_ATOMIC_SUB_FETCH_U32 
#define PG_DETOAST_DATUM_SLICE(datum,f,c) pg_detoast_datum_slice((struct varlena *) DatumGetPointer(datum), (int32) (f), (int32) (c))
#define F_PG_DESCRIBE_OBJECT 3537
#define Anum_pg_attribute_attstorage 11
#define HEAP_INSERT_SKIP_WAL 0x0001
#define F_INETPL 2630
#define F_GIN_EXTRACT_JSONB_QUERY_PATH 3486
#define SCM_TIMESTAMP SO_TIMESTAMP
#define F_SPG_RANGE_QUAD_LEAF_CONSISTENT 3473
#define __ATOMIC_RELEASE 3
#define PageSizeIsValid(pageSize) ((pageSize) == BLCKSZ)
#define INT64_FORMAT "%" INT64_MODIFIER "d"
#define DATETIME_MIN_JULIAN (0)
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define _GETOPT_CORE_H 1
#define F_TINTERVALSAME 263
#define VARDATA_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_data)
#define GUC_UNIT_MIN 0x30000
#define USE_DSM_SYSV 
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define F_CHR 1621
#define F_JSONB_BUILD_ARRAY 3271
#define PD_ALL_VISIBLE 0x0004
#define MinSizeOfXactAbort sizeof(xl_xact_abort)
#define FRAMEOPTION_END_UNBOUNDED_FOLLOWING 0x00100
#define PG_HAVE_ATOMIC_SUB_FETCH_U64 
#define F_HAS_ANY_COLUMN_PRIVILEGE_ID_NAME 3026
#define Natts_pg_class 33
#define F_PG_LAST_WAL_REPLAY_LSN 3821
#define F_NUMERIC_POLY_VAR_SAMP 3391
#define F_EVENT_TRIGGER_OUT 3595
#define F_BOX_LEFT 188
#define F_INT2MUL 152
#define IsolationIsSerializable() (XactIsoLevel == XACT_SERIALIZABLE)
#define __ATOMIC_SEQ_CST 5
#define F_HAS_SERVER_PRIVILEGE_ID_ID 3009
#define ERRCODE_FDW_INVALID_ATTRIBUTE_VALUE MAKE_SQLSTATE('H','V','0','2','4')
#define AGT_FBINARY 0x80000000
#define F_HASHENUMEXTENDED 3414
#define F_CURRENT_SCHEMA 1402
#define F_TIMESTAMP_IZONE_TRANSFORM 3994
#define DATUM_GET_AGTYPE_P(d) ((agtype *)PG_DETOAST_DATUM(d))
#define __FLT32X_MIN_10_EXP__ (-307)
#define FRAMEOPTION_EXCLUDE_TIES 0x20000
#define PF_IB 27
#define ZULU "zulu"
#define F_FLOAT8_COVAR_POP 2815
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define F_PG_STAT_GET_DB_NUMBACKENDS 1941
#define SIGTERM 15
#define ATTRIBUTE_FIXED_PART_SIZE (offsetof(FormData_pg_attribute,attcollation) + sizeof(Oid))
#define F_TS_HEADLINE_BYID_OPT 3743
#define F_ARRAY_CARDINALITY 3179
#define IPV6_PMTUDISC_DONT 0
#define EKEYREVOKED 128
#define ERRCODE_S_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('2','F','0','0','3')
#define PG_FUNCNAME_MACRO __func__
#define F_TS_HEADLINE_JSON 4208
#define F_INT4_TO_CHAR 1773
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define F_QUOTE_LITERAL 1283
#define QUERYENVIRONMENT_H 
#define FRAMEOPTION_ROWS 0x00004
#define F_TXID_SNAPSHOT_XIP 2947
#define ERRCODE_FDW_INVALID_STRING_FORMAT MAKE_SQLSTATE('H','V','0','0','A')
#define ERRCODE_INVALID_RECURSION MAKE_SQLSTATE('4','2','P','1','9')
#define F_TSQUERY_NUMNODE 3672
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define F_JSON_BUILD_ARRAY_NOARGS 3199
#define DT_FIFO DT_FIFO
#define UInt32GetDatum(X) ((Datum) (X))
#define F_JSON_OBJECT_TWO_ARG 3203
#define DEFAULT_CHECKPOINT_FLUSH_AFTER 32
#define F_CURSOR_TO_XML 2925
#define label_exists(label_name,label_graph) OidIsValid(get_label_oid(label_name, label_graph))
#define F_I8TOD 482
#define PACKAGE_URL ""
#define F_POINT_DISTANCE 991
#define F_ENUM_SMALLER 3524
#define SET_VARSIZE_4B(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2))
#define GUC_UNIT_BLOCKS 0x2000
#define F_TIMESTAMP_GE_DATE 2368
#define FORKNAMECHARS 4
#define F_BITPOSITION 1698
#define fetch_att(T,attbyval,attlen) ( (attbyval) ? ( (attlen) == (int) sizeof(Datum) ? *((Datum *)(T)) : ( (attlen) == (int) sizeof(int32) ? Int32GetDatum(*((int32 *)(T))) : ( (attlen) == (int) sizeof(int16) ? Int16GetDatum(*((int16 *)(T))) : ( AssertMacro((attlen) == 1), CharGetDatum(*((char *)(T))) ) ) ) ) : PointerGetDatum((char *) (T)) )
#define F_TIMESTAMP_PART 2021
#define __POSIX2_THIS_VERSION 200809L
#define __ldiv_t_defined 1
#define Anum_ag_label_graph 2
#define ___int_ptrdiff_t_h 
#define F_DATAN 1602
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define IP_PMTUDISC_INTERFACE 4
#define PARSENODES_H 
#define F_INTER_LB 278
#define PF_VSOCK 40
#define SECS_PER_HOUR 3600
#define DatumGetArrayTypePCopy(X) ((ArrayType *) PG_DETOAST_DATUM_COPY(X))
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define PG_CLASS_D_H 
#define HeapTupleIsHotUpdated(tuple) HeapTupleHeaderIsHotUpdated((tuple)->t_data)
#define SO_PRIORITY 12
#define F_NUMERIC_POLY_SUM 3388
#define F_BTCHARCMP 358
#define F_BE_LO_TRUNCATE 1004
#define PERFORM_DELETION_SKIP_ORIGINAL 0x0008
#define F_SETOWN_EX __F_SETOWN_EX
#define ERRCODE_INVALID_PRECEDING_OR_FOLLOWING_SIZE MAKE_SQLSTATE('2','2','0','1','3')
#define PF_LOCAL 1
#define F_PG_STAT_GET_NUMSCANS 1928
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define SOL_LLC 268
#define F_PG_STAT_GET_MOD_SINCE_ANALYZE 3177
#define EHWPOISON 133
#define F_PG_EXTENSION_CONFIG_DUMP 3086
#define __DBL_MIN_EXP__ (-1021)
#define EMULTIHOP 72
#define F_BITEQ 1581
#define ERRCODE_AMBIGUOUS_COLUMN MAKE_SQLSTATE('4','2','7','0','2')
#define ERRCODE_DUPLICATE_ALIAS MAKE_SQLSTATE('4','2','7','1','2')
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define F_PERCENTILE_CONT_INTERVAL_FINAL 3977
#define MAX_FORKNUM INIT_FORKNUM
#define F_HYPOTHETICAL_RANK_FINAL 3987
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define F_PG_ADVISORY_XACT_LOCK_SHARED_INT4 3094
#define F_PG_ADVISORY_XACT_LOCK_SHARED_INT8 3090
#define F_SET_RW_HINT 1036
#define F_TXID_VISIBLE_IN_SNAPSHOT 2948
#define __DBL_DECIMAL_DIG__ 17
#define __FLT128_MAX_10_EXP__ 4932
#define OPCLASS_ITEM_STORAGETYPE 3
#define F_REGCONFIGIN 3736
#define outerPlanState(node) (((PlanState *)(node))->lefttree)
#define IP_PMTUDISC_OMIT 5
#define F_BTINT84CMP 2189
#define F_WINDOW_NTH_VALUE 3114
#define F_INTER_SB 373
#define F_INTER_SL 277
#define F_CIDOUT 53
#define F_DATE_LE_TIMESTAMPTZ 2352
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define _SC_IPV6 _SC_IPV6
#define HeapTupleHeaderSetTypMod(tup,typmod) ( (tup)->t_choice.t_datum.datum_typmod = (typmod) )
#define RWH_WRITE_LIFE_SHORT 2
#define MCAST_JOIN_GROUP 42
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define F_IN_RANGE_FLOAT4_FLOAT8 4140
#define restrict __restrict__
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define F_ARRAY_TO_TEXT 395
#define FIELDNO_FUNCTIONCALLINFODATA_ARGNULL 7
#define __S64_TYPE long int
#define IP_TOS 1
#define SizeOfPageHeaderData (offsetof(PageHeaderData, pd_linp))
#define __SQUAD_TYPE long int
#define F_INT8AND 1904
#define _BITS_SIGINFO_CONSTS_H 1
#define F_PG_SIZE_BYTES 3334
#define SYNC_FILE_RANGE_WRITE 2
#define PG_DIAG_SEVERITY 'S'
#define F_INT8_AVG_ACCUM_INV 3387
#define __CHAR_BIT__ 8
#define SO_DOMAIN 39
#define SIGRTMIN (__libc_current_sigrtmin ())
#define USE_OPENSSL 1
#define heap_getattr(tup,attnum,tupleDesc,isnull) ( ((attnum) > 0) ? ( ((attnum) > (int) HeapTupleHeaderGetNatts((tup)->t_data)) ? getmissingattr((tupleDesc), (attnum), (isnull)) : fastgetattr((tup), (attnum), (tupleDesc), (isnull)) ) : heap_getsysattr((tup), (attnum), (tupleDesc), (isnull)) )
#define SHORTALIGN(LEN) TYPEALIGN(ALIGNOF_SHORT, (LEN))
#define F_PG_NODE_TREE_SEND 198
#define ARR_HASNULL(a) ((a)->dataoffset != 0)
#define pairingheap_const_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, const pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((const type *) ((const char *) (ptr) - offsetof(type, membername))))
#define EREMCHG 78
#define RELKIND_PARTITIONED_TABLE 'p'
#define PG_VERSION_STR "PostgreSQL 11.18 (Ubuntu 11.18-1.pgdg22.04+1) on aarch64-unknown-linux-gnu, compiled by gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0, 64-bit"
#define HASH_KEYCOPY 0x0100
#define SIGTTIN 21
#define EACCES 13
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define index_getattr(tup,attnum,tupleDesc,isnull) ( AssertMacro(PointerIsValid(isnull) && (attnum) > 0), *(isnull) = false, !IndexTupleHasNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup) + IndexInfoFindDataOffset((tup)->t_info) + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocache_index_getattr((tup), (attnum), (tupleDesc)) ) : ( (att_isnull((attnum)-1, (char *)(tup) + sizeof(IndexTupleData))) ? ( *(isnull) = true, (Datum)NULL ) : ( nocache_index_getattr((tup), (attnum), (tupleDesc)) ) ) )
#define InstrCountFiltered2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered2 += (delta); } while(0)
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define F_BINARY_UPGRADE_SET_MISSING_VALUE 4101
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define StaticAssertExpr(condition,errmessage) ((void) ({ StaticAssertStmt(condition, errmessage); true; }))
#define ERRCODE_DATA_EXCEPTION MAKE_SQLSTATE('2','2','0','0','0')
#define LOCKBIT_OFF(lockmode) (~(1 << (lockmode)))
#define PIPE_BUF 4096
#define IP_TTL 2
#define F_BPCHAROUT 1045
#define DatumGetArrayTypeP(X) ((ArrayType *) PG_DETOAST_DATUM(X))
#define UInt64GetDatum(X) ((Datum) (X))
#define AGT_HEADER_PATH 0x00000004
#define F_BITOVERLAY_NO_LEN 3031
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define F_NEQSEL 102
#define MaxHeapTupleSize (BLCKSZ - MAXALIGN(SizeOfPageHeaderData + sizeof(ItemIdData)))
#define F_FLT8_MUL_CASH 919
#define BKPBLOCK_HAS_DATA 0x20
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define __INT32_C(c) c
#define F_BPCHAR 668
#define ERRCODE_TRANSACTION_ROLLBACK MAKE_SQLSTATE('4','0','0','0','0')
#define PF_DECnet 12
#define __ORDER_LITTLE_ENDIAN__ 1234
#define NUM_BUFFER_PARTITIONS 128
#define UINT_FAST16_WIDTH __WORDSIZE
#define HAVE_STRUCT_ADDRINFO 1
#define PG_GETARG_BYTEA_P_SLICE(n,a,b) DatumGetByteaPSlice(PG_GETARG_DATUM(n),a,b)
#define F_JSON_ARRAY_ELEMENT 3949
#define pg_attribute_printf(f,a) __attribute__((format(PG_PRINTF_ATTRIBUTE, f, a)))
#define __STATFS_MATCHES_STATFS64 1
#define InvalidSnapshot ((Snapshot) NULL)
#define F_NETWORK_GT 923
#define XACT_REPEATABLE_READ 2
#define F_TIMETZ_EQ 1352
#define lsecond(l) lfirst(lnext(list_head(l)))
#define PG_SOMAXCONN 10000
#define F_BINARY_ENCODE 1946
#define F_PG_LS_DIR_1ARG 2625
#define BKPBLOCK_WILL_INIT 0x40
#define PG_GETARG_BYTEA_PP(n) DatumGetByteaPP(PG_GETARG_DATUM(n))
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define ACL_SELECT_FOR_UPDATE ACL_UPDATE
#define Max(x,y) ((x) > (y) ? (x) : (y))
#define Anum_pg_class_relrowsecurity 23
#define LABEL_ID_MIN 1
#define F_INT4RECV 2406
#define HAVE_SYSLOG 1
#define IPV6_PMTUDISC_PROBE 3
#define F_XML_IS_WELL_FORMED_CONTENT 3053
#define EAI_INPROGRESS -100
#define F_TIMESTAMPTZ_TRUNC 1217
#define MinSizeOfXactInvals offsetof(xl_xact_invals, msgs)
#define LONG_WIDTH __WORDSIZE
#define FIELDNO_EXPRCONTEXT_DOMAINNULL 13
#define SEGV_BNDERR SEGV_BNDERR
#define F_GETDATABASEENCODING 1039
#define F_INITCAP 872
#define F_FLOAT8_REGR_SXX 2807
#define F_FLOAT8_REGR_SXY 2809
#define is_nonwindows_absolute_path(filename) ( IS_NONWINDOWS_DIR_SEP((filename)[0]) )
#define F_TSQUERY_REWRITE_QUERY 3685
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define F_NETWORK_LE 922
#define __O_NOFOLLOW 0100000
#define ngettext(msgid1,msgid2,n) dngettext (NULL, msgid1, msgid2, n)
#define F_SPG_TEXT_CHOOSE 4028
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','5')
#define PG_INT128_TYPE __int128
#define F_FLOAT8_REGR_SYY 2808
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define Anum_pg_class_relname 1
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define __CFLOAT128 _Complex _Float128
#define F_JSONB_HASH 4045
#define F_VARCHARTYPMODIN 2915
#define __SIG_ATOMIC_TYPE__ int
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __SVE_ZREGS_OFFSET 0
#define F_TIME_OUT 1144
#define FunctionCall3(flinfo,arg1,arg2,arg3) FunctionCall3Coll(flinfo, InvalidOid, arg1, arg2, arg3)
#define __DBL_MIN_10_EXP__ (-307)
#define GAI_NOWAIT 1
#define F_RI_FKEY_SETDEFAULT_UPD 1653
#define FunctionCall5(flinfo,arg1,arg2,arg3,arg4,arg5) FunctionCall5Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define h_errno (*__h_errno_location ())
#define TRACE_SORT 1
#define ERRCODE_ERROR_IN_ASSIGNMENT MAKE_SQLSTATE('2','2','0','0','5')
#define F_TIMESTAMPTZ_IZONE 1026
#define WrapLimitsVacuumLock (&MainLWLockArray[46].lock)
#define F_SPG_BBOX_QUAD_CONFIG 5010
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define DEPENDENCY_H 
#define F_IN_RANGE_INT2_INT4 4131
#define EEO_FLAG_IS_QUAL (1 << 0)
#define F_IN_RANGE_INT2_INT8 4130
#define __FLT32X_MAX_EXP__ 1024
#define FunctionCall9(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) FunctionCall9Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define F_PG_GET_CONSTRAINTDEF_EXT 2508
#define SOL_NETLINK 270
#define ERRCODE_PLPGSQL_ERROR MAKE_SQLSTATE('P','0','0','0','0')
#define F_SHELL_IN 2398
#define F_TSM_BERNOULLI_HANDLER 3313
#define AG_DEFAULT_LABEL_EDGE "_ag_label_edge"
#define __GNUC_PATCHLEVEL__ 0
#define RTLessStrategyNumber 20
#define F_BOX_OVERABOVE 2564
#define BKPBLOCK_HAS_IMAGE 0x10
#define IPV6_HOPOPTS 54
#define __ASM_SVE_CONTEXT_H 
#define HAVE_NET_IF_H 1
#define _POSIX_TRACE_EVENT_FILTER -1
#define Min(x,y) ((x) < (y) ? (x) : (y))
#define ACL_REFERENCES_CHR 'x'
#define SO_SECURITY_AUTHENTICATION 22
#define HAVE_DECL_LLVMGETHOSTCPUNAME 1
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define PG_RETURN_CSTRING(x) return CStringGetDatum(x)
#define AGTYPE_P_GET_DATUM(p) PointerGetDatum(p)
#define F_TIMESTAMP_SORTSUPPORT 3137
#define h_addr h_addr_list[0]
#define DMINUTE "minute"
#define NameStr(name) ((name).data)
#define UINT8_WIDTH 8
#define F_BYTEAGETBIT 723
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define F_FMGR_SQL_VALIDATOR 2248
#define _XOPEN_XCU_VERSION 4
#define ENOMEM 12
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define F_FORMAT_TYPE 1081
#define _SYS_TIME_H 1
#define _BITS_SOCKADDR_H 1
#define __INT_LEAST8_WIDTH__ 8
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define DTERR_INTERVAL_OVERFLOW (-4)
#define F_INT4RANGE_SUBDIFF 3922
#define for_each_cell(cell,initcell) for ((cell) = (initcell); (cell) != NULL; (cell) = lnext(cell))
#define _XBS5_LPBIG_OFFBIG -1
#define F_TSVECTOR_SETWEIGHT_BY_FILTER 3320
#define F_PG_STAT_FILE_1ARG 2623
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define ACL_ALL_RIGHTS_SEQUENCE (ACL_USAGE|ACL_SELECT|ACL_UPDATE)
#define F_ARRAY_CAT 383
#define F_TIMETZ_GE 1356
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define F_PG_STAT_GET_TUPLES_HOT_UPDATED 1972
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define S_IXOTH (S_IXGRP >> 3)
#define F_INTERVAL_TIME 1419
#define lfourth_oid(l) lfirst_oid(lnext(lnext(lnext(list_head(l)))))
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define ERRCODE_E_R_I_E_INVALID_SQLSTATE_RETURNED MAKE_SQLSTATE('3','9','0','0','1')
#define F_DIST_POLYP 3292
#define F_MAKE_INTERVAL 3464
#define __ARM_FP 14
#define F_TIMETZ_IN 1350
#define SIGSTKFLT 16
#define DatumGetUInt32(X) ((uint32) (X))
#define F_PG_ENCODING_MAX_LENGTH_SQL 2319
#define F_TIMESTAMP_SEND 2475
#define _RPC_NETDB_H 1
#define TZ_STRLEN_MAX 255
#define SOCK_DCCP SOCK_DCCP
#define NAME_MAX 255
#define CommandIdGetDatum(X) ((Datum) (X))
#define F_SPG_QUAD_CONFIG 4018
#define SCHAR_MAX __SCHAR_MAX__
#define F_PG_CREATE_PHYSICAL_REPLICATION_SLOT 3779
#define Anum_pg_attribute_atthasmissing 15
#define __ONCE_FLAG_INIT { 0 }
#define PF_SECURITY 14
#define MaxAttrNumber 32767
#define PG_GETARG_INT32(n) DatumGetInt32(PG_GETARG_DATUM(n))
#define IPV6_2292DSTOPTS 4
#define Anum_pg_attribute_attcollation 20
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define PG_DIAG_TABLE_NAME 't'
#define ENABLE_THREAD_SAFETY 1
#define EL3HLT 46
#define HAVE_WCTYPE_H 1
#define NotifyQueueTailLock (&MainLWLockArray[47].lock)
#define F_TIMETZ_LE 1355
#define F_BTFLOAT4CMP 354
#define F_OIDSEND 2419
#define DatumGetUInt64(X) ((uint64) (X))
#define _POSIX_THREAD_CPUTIME 0
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define F_REGCLASSOUT 2219
#define ___int_size_t_h 
#define F_BOX_POLY 1448
#define si_int _sifields._rt.si_sigval.sival_int
#define F_JSONB_RECV 3805
#define __unix 1
#define TYPEALIGN64(ALIGNVAL,LEN) (((uint64) (LEN) + ((ALIGNVAL) - 1)) & ~((uint64) ((ALIGNVAL) - 1)))
#define USER_LOCKMETHOD 2
#define __UINT32_MAX__ 0xffffffffU
#define F_TIMETZ_NE 1353
#define _BITS_SS_FLAGS_H 1
#define F_PG_RELATION_IS_PUBLISHABLE 6121
#define F_PG_RELOAD_CONF 2621
#define F_JSON_ARRAY_ELEMENTS_TEXT 3969
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define IPV6_DONTFRAG 62
#define F_GINARRAYCONSISTENT 2744
#define _POSIX_PIPE_BUF 512
#define DatumGetHeapTupleHeaderCopy(X) ((HeapTupleHeader) PG_DETOAST_DATUM_COPY(X))
#define F_INET_SEND 2497
#define ALIGNOF_DOUBLE 8
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define PF_SNA 22
#define __INT_FAST32_WIDTH__ 64
#define F_EXLCK 4
#define MSG_FIN MSG_FIN
#define F_NUMERIC_COMBINE 3341
#define SO_NO_CHECK 11
#define UINT_FAST64_WIDTH 64
#define WUNTRACED 2
#define ERESTART 85
#define pg_attribute_format_arg(a) __attribute__((format_arg(a)))
#define NZERO 20
#define EISNAM 120
#define F_PG_STAT_GET_SNAPSHOT_TIMESTAMP 3788
#define F_FDW_HANDLER_OUT 3117
#define RTContainedByStrategyNumber 8
#define F_ARRAYCONTJOINSEL 3818
#define NULL ((void *)0)
#define __f64x(x) x ##f64x
#define F_INET_OUT 911
#define ENOMSG 42
#define F_NUMERIC_POWER 1738
#define RENAME_EXCHANGE (1 << 1)
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define FIELDNO_EXPRSTATE_RESNULL 2
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define AF_FILE PF_FILE
#define __USE_KERNEL_IPV6_DEFS 0
#define GUC_UNIT_S 0x20000
#define ERRCODE_FDW_UNABLE_TO_CREATE_EXECUTION MAKE_SQLSTATE('H','V','0','0','L')
#define VARATT_IS_EXTENDED(PTR) (!VARATT_IS_4B_U(PTR))
#define SpinLockFree(lock) S_LOCK_FREE(lock)
#define __INT64_C(c) c ## L
#define F_PERCENTILE_CONT_FLOAT8_FINAL 3975
#define HAVE_TYPEOF 1
#define F_CASH_DIV_CASH 3822
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define GUC_REPORT 0x0010
#define F_HAS_TABLE_PRIVILEGE_ID_NAME 1924
#define HAVE_CRYPT 1
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define DSM_IMPL_SYSV 2
#define F_HAS_COLUMN_PRIVILEGE_ID_NAME_NAME 3016
#define FRAMEOPTION_EXCLUDE_GROUP 0x10000
#define DTK_CENTURY 27
#define AttributeRelationId 1249
#define F_HASHINT4EXTENDED 425
#define NO_ADDRESS NO_DATA
#define F_BOX_CENTER 138
#define S_IRWXG (S_IRWXU >> 3)
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define S_IRWXO (S_IRWXG >> 3)
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define F_REGROLESEND 4095
#define BLCKSZ 8192
#define si_addr _sifields._sigfault.si_addr
#define DatumGetCommandId(X) ((CommandId) (X))
#define EAI_NOTCANCELED -102
#define PG_RETURN_ACL_P(x) PG_RETURN_POINTER(x)
#define CLOCK_REALTIME 0
#define IS_VALID_TIMESTAMP(t) (MIN_TIMESTAMP <= (t) && (t) < END_TIMESTAMP)
#define F_LINE_DISTANCE 239
#define AGTE_IS_BOOL_FALSE(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_BOOL_FALSE)
#define SO_LOCK_FILTER 44
#define __MODE_T_TYPE __U32_TYPE
#define INT16_MIN (-32767-1)
#define F_POLY_OVERABOVE 2568
#define F_PLAINTO_TSQUERY_BYID 3747
#define F_PG_EVENT_TRIGGER_TABLE_REWRITE_OID 4566
#define F_RANGE_CONTAINS 3859
#define llast(l) lfirst(list_tail(l))
#define _SC_POLL _SC_POLL
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U32 
#define ABS_BEFORE 20
#define F_PG_CONTROL_INIT 3444
#define UINT_LEAST8_WIDTH 8
#define SizeOfXLogRecordBlockHeader (offsetof(XLogRecordBlockHeader, data_length) + sizeof(uint16))
#define ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('2','3','0','0','0')
#define HASH_SHARED_MEM 0x0800
#define F_TIMETZ_GT 1357
#define _LARGEFILE64_SOURCE 1
#define _BITS_UINTN_IDENTITY_H 1
#define F_LSEG_SEND 2481
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define DatumGetUInt16(X) ((uint16) (X))
#define F_UUID_SEND 2962
#define PG_RETURN_UINT16(x) return UInt16GetDatum(x)
#define F_LENGTH_IN_ENCODING 1713
#define ERRCODE_FLOATING_POINT_EXCEPTION MAKE_SQLSTATE('2','2','P','0','1')
#define AGTE_IS_NULL(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_NULL)
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define F_INT2RECV 2404
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U64 
#define TMP_MAX 238328
#define BIG_ENDIAN __BIG_ENDIAN
#define _BSD_SIZE_T_DEFINED_ 
#define DatumGetAclP(X) ((Acl *) PG_DETOAST_DATUM(X))
#define PG_ATTRIBUTE_D_H 
#define __FLT32_DIG__ 6
#define F_TIMESTAMP_OUT 1313
#define CStringGetTextDatum(s) PointerGetDatum(cstring_to_text(s))
#define ERRCODE_INVALID_COLUMN_DEFINITION MAKE_SQLSTATE('4','2','6','1','1')
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define SS_DISABLE SS_DISABLE
#define SO_TIMESTAMPING_OLD 37
#define __HAVE_FLOAT128 1
#define AF_WANPIPE PF_WANPIPE
#define isblank_l(c,l) __isblank_l ((c), (l))
#define TransactionIdIsNormal(xid) ((xid) >= FirstNormalTransactionId)
#define s6_addr16 __in6_u.__u6_addr16
#define HAVE_SRANDOM 1
#define RENAME_NOREPLACE (1 << 0)
#define PG_HAVE_ATOMIC_ADD_FETCH_U32 
#define ERRCODE_INVALID_GRANT_OPERATION MAKE_SQLSTATE('0','L','P','0','1')
#define AG_AG_GRAPH_H 
#define F_PG_READ_FILE_ALL 3826
#define PG_RETURN_UINT64(x) return UInt64GetDatum(x)
#define FD_H 
#define F_INT4_ACCUM_INV 3568
#define s6_addr32 __in6_u.__u6_addr32
#define F_DOMAIN_RECV 2598
#define F_INET_GIST_PICKSPLIT 3558
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define __O_LARGEFILE 0
#define NIL ((List *) NULL)
#define _POSIX_NAME_MAX 14
#define F_PG_GET_RULEDEF_EXT 2504
#define SCM_TXTIME SO_TXTIME
#define _ANSI_STDDEF_H 
#define __ULONGWORD_TYPE unsigned long int
#define InvalidStrategy ((StrategyNumber) 0)
#define AGT_CMASK 0x0FFFFFFF
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define DT_SOCK DT_SOCK
#define InvalidBackendId (-1)
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define SHMEM_INDEX_SIZE (64)
#define AttrNumberGetAttrOffset(attNum) ( AssertMacro(AttrNumberIsForUserDefinedAttr(attNum)), ((attNum) - 1) )
#define PG_RETURN_CHAR(x) return CharGetDatum(x)
#define Int64GetDatumFast(X) Int64GetDatum(X)
#define F_DPI 1610
#define _SC_MEMLOCK _SC_MEMLOCK
#define F_ARRAY_TO_JSON 3153
#define F_FLOAT8_TO_CHAR 1776
#define __FLT32X_HAS_INFINITY__ 1
#define s6_addr __in6_u.__u6_addr8
#define UINT32_WIDTH 32
#define __INT32_MAX__ 0x7fffffff
#define DatumGetObjectId(X) ((Oid) (X))
#define F_TIMESTAMPTZ_CMP_TIMESTAMP 2533
#define F_PG_STAT_GET_AUTOVACUUM_COUNT 3055
#define F_HAS_SEQUENCE_PRIVILEGE_NAME_ID 2182
#define __GLIBC_USE_DEPRECATED_GETS 0
#define F_POLY_OUT 348
#define AGTENTRY_IS_CONTAINER 0x50000000
#define PG_RETURN_TIMESTAMPTZ(x) return TimestampTzGetDatum(x)
#define SIGEV_NONE SIGEV_NONE
#define MAKE_SQLSTATE(ch1,ch2,ch3,ch4,ch5) (PGSIXBIT(ch1) + (PGSIXBIT(ch2) << 6) + (PGSIXBIT(ch3) << 12) + (PGSIXBIT(ch4) << 18) + (PGSIXBIT(ch5) << 24))
#define _SC_NL_NMAX _SC_NL_NMAX
#define AGGSPLITOP_SKIPFINAL 0x02
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define F_FLOAT8RECV 2426
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define PG_DETOAST_DATUM_PACKED(datum) pg_detoast_datum_packed((struct varlena *) DatumGetPointer(datum))
#define F_TIME_TIMETZ 2047
#define F_DUPFD 0
#define Anum_pg_class_relacl 31
#define NOW "now"
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define F_PG_TIMEZONE_NAMES 2856
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define NUMERIC_MAX_PRECISION 1000
#define __FLT128_IS_IEC_60559__ 2
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define HAVE_STRERROR 1
#define F_SPG_BOX_QUAD_LEAF_CONSISTENT 5016
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define F_REGPROCEDURESEND 2447
#define F_HASHBPCHAREXTENDED 972
#define SHUT_RDWR SHUT_RDWR
#define F_TIMETZ_TIME 2046
#define F_HAS_TYPE_PRIVILEGE_NAME_ID 3139
#define OID_MAX UINT_MAX
#define _POSIX_LOGIN_NAME_MAX 9
#define FPSIMD_MAGIC 0x46508001
#define pg_attribute_packed() __attribute__((packed))
#define ATTRIBUTE_IDENTITY_ALWAYS 'a'
#define MultiXactTruncationLock (&MainLWLockArray[41].lock)
#define _XBS5_ILP32_OFF32 -1
#define llast_node(type,l) castNode(type, llast(l))
#define FNDELAY O_NDELAY
#define ProcArrayLock (&MainLWLockArray[4].lock)
#define __FLT64X_MIN_10_EXP__ (-4931)
#define F_INTERVAL_FINITE 1390
#define INT64_C(c) c ## L
#define F_TIME_TRANSFORM 3944
#define F_XML_IS_WELL_FORMED 3051
#define TupleDescAttr(tupdesc,i) (&(tupdesc)->attrs[(i)])
#define HeapTupleIsHeapOnly(tuple) HeapTupleHeaderIsHeapOnly((tuple)->t_data)
#define __attribute_const__ __attribute__ ((__const__))
#define TAS_SPIN(lock) TAS(lock)
#define ERRCODE_FDW_REPLY_HANDLE MAKE_SQLSTATE('H','V','0','0','K')
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define F_PG_STAT_GET_XACT_TUPLES_FETCHED 3039
#define DO_AGGSPLIT_COMBINE(as) (((as) & AGGSPLITOP_COMBINE) != 0)
#define F_ANY_OUT 2295
#define HAVE_TZNAME 1
#define PERFORM_DELETION_CONCURRENTLY 0x0002
#define F_PATH_N_GT 983
#define pg_restrict __restrict__
#define ___int_wchar_t_h 
#define F_QUOTE_NULLABLE 1289
#define __GCC_IEC_559_COMPLEX 2
#define HAVE_DECL_POSIX_FADVISE 1
#define HAVE_SYS_TYPES_H 1
#define XLOG_XACT_COMMIT 0x00
#define F_NUMERIC_CEIL 1711
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ERRCODE_T_R_STATEMENT_COMPLETION_UNKNOWN MAKE_SQLSTATE('4','0','0','0','3')
#define F_HAS_COLUMN_PRIVILEGE_NAME_ATTNUM 3021
#define EXPANDED_POINTER_SIZE (VARHDRSZ_EXTERNAL + sizeof(varatt_expanded))
#define PF_ISDN 34
#define F_HAS_SCHEMA_PRIVILEGE_NAME_ID 2269
#define F_PG_STAT_GET_TUPLES_FETCHED 1930
#define F_TO_REGCLASS 3495
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define POSIX_FADV_WILLNEED 3
#define BlockNumberIsValid(blockNumber) ((bool) ((BlockNumber) (blockNumber) != InvalidBlockNumber))
#define VARDATA_4B(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_data)
#define PG_HAVE_ATOMIC_FETCH_ADD_U32 
#define TRANSAM_H 
#define F_ABSTIME_FINITE 275
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define F_FLOAT8_REGR_INTERCEPT 2814
#define F_RELTIMERECV 2464
#define MSG_CTRUNC MSG_CTRUNC
#define SIZEOF_SIZE_T 8
#define F_XPATH 2931
#define UINT64CONST(x) (x ##UL)
#define HeapTupleHeaderSetXminFrozen(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_FROZEN) )
#define IPPROTO_UDP IPPROTO_UDP
#define MSG_PROXY MSG_PROXY
#define HSEARCH_H 
#define O_DSYNC __O_DSYNC
#define F_INTINTERVAL 248
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define STDC_HEADERS 1
#define PG_RETURN_NAME(x) return NameGetDatum(x)
#define STDERR_FILENO 2
#define F_POLY_CONTAINED 345
#define Int16GetDatum(X) ((Datum) (X))
#define F_INT8RANGE_SUBDIFF 3923
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define F_NUMERIC_POLY_STDDEV_SAMP 3393
#define Anum_pg_attribute_attnum 6
#define VARATT_IS_EXTERNAL_ONDISK(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_ONDISK)
#define __FLT64_MAX_10_EXP__ 308
#define F_THESAURUS_LEXIZE 3741
#define F_BE_LOREAD 954
#define pg_ntoh16(x) pg_bswap16(x)
#define F_NUMERIC_OUT 1702
#define PG_HAVE_ATOMIC_FETCH_ADD_U64 
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define Anum_pg_attribute_attndims 7
#define HeapScanIsValid(scan) PointerIsValid(scan)
#define ERRCODE_UNTERMINATED_C_STRING MAKE_SQLSTATE('2','2','0','2','4')
#define F_XML_SEND 2899
#define DatumGetTimestamp(X) ((Timestamp) DatumGetInt64(X))
#define AF_SECURITY PF_SECURITY
#define STA_PPSTIME 0x0004
#define RESERV 0
#define pg_ntoh32(x) pg_bswap32(x)
#define SO_DETACH_BPF SO_DETACH_FILTER
#define F_GTSVECTOR_SAME 3652
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define HAVE_STRTOULL 1
#define SI_QUEUE SI_QUEUE
#define UINTMAX_WIDTH 64
#define F_BRIN_DESUMMARIZE_RANGE 4014
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define ERRCODE_DUPLICATE_PSTATEMENT MAKE_SQLSTATE('4','2','P','0','5')
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define IP_MTU_DISCOVER 10
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define HAVE_STRTOLL 1
#define IP_MINTTL 21
#define F_HAS_COLUMN_PRIVILEGE_ID_NAME 3022
#define AF_RXRPC PF_RXRPC
#define VARATT_IS_EXTERNAL(PTR) VARATT_IS_1B_E(PTR)
#define __USE_XOPEN2K 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define F_REGCLASSRECV 2452
#define F_HAS_TABLESPACE_PRIVILEGE_ID_NAME 2392
#define pg_ntoh64(x) pg_bswap64(x)
#define ADBC 18
#define _SC_2_VERSION _SC_2_VERSION
#define F_PG_CONVERSION_IS_VISIBLE 2093
#define __DADDR_T_TYPE __S32_TYPE
#define Anum_pg_class_relforcerowsecurity 24
#define elog(elevel,...) do { elog_start(__FILE__, __LINE__, PG_FUNCNAME_MACRO); elog_finish(elevel, __VA_ARGS__); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define pairingheap_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define PACKAGE_BUGREPORT "pgsql-bugs@postgresql.org"
#define F_BITNOT 1676
#define IPV6_UNICAST_IF 76
#define EPIPE 32
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define __ASM_POSIX_TYPES_H 
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define VirtualTransactionIdIsRecoveredPreparedXact(vxid) ((vxid).backendId == InvalidBackendId)
#define XACT_XINFO_HAS_RELFILENODES (1U << 2)
#define F_INT42NE 165
#define TablespaceCreateLock (&MainLWLockArray[19].lock)
#define F_BINARY_UPGRADE_SET_NEXT_TOAST_PG_TYPE_OID 3585
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define FALLOC_FL_INSERT_RANGE 0x20
#define F_TIDLARGER 2795
#define __FD_SETSIZE 1024
#define F_BINARY_UPGRADE_SET_NEXT_PG_ENUM_OID 3589
#define SOMAXCONN 4096
#define lfourth(l) lfirst(lnext(lnext(lnext(list_head(l)))))
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define SI_USER SI_USER
#define DEVNULL "/dev/null"
#define EBADMSG 74
#define F_POLY_OVERBELOW 2567
#define AGTENTRY_IS_BOOL_FALSE 0x20000000
#define __USE_POSIX199506 1
#define ItemIdGetOffset(itemId) ((itemId)->lp_off)
#define F_PHRASETO_TSQUERY 5001
#define AGT_HEADER_FLOAT 0x00000001
#define NI_NOFQDN 4
#define F_POINT_DIV 1444
#define __INT_LEAST32_MAX__ 0x7fffffff
#define CLD_CONTINUED CLD_CONTINUED
#define PG_GETARG_TIMESTAMPTZ(n) DatumGetTimestampTz(PG_GETARG_DATUM(n))
#define F_GTSQUERY_CONSISTENT 3701
#define ERRCODE_INVALID_TRANSACTION_TERMINATION MAKE_SQLSTATE('2','D','0','0','0')
#define EBFONT 59
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define DMILLENNIUM "millennium"
#define F_HAS_ANY_COLUMN_PRIVILEGE_ID 3029
#define __DBL_MAX_EXP__ 1024
#define F_SHELL_OUT 2399
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define PARAM_FLAG_CONST 0x0001
#define HAVE_STRSIGNAL 1
#define __WCHAR_WIDTH__ 32
#define SEGV_ADIDERR SEGV_ADIDERR
#define _BITS_WCHAR_H 1
#define IP_RECVERR 11
#define ERRCODE_SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED MAKE_SQLSTATE('2','5','0','0','7')
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define F_JSON_EXTRACT_PATH_TEXT 3953
#define IGNORE_DTF 8
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define ETOOMANYREFS 109
#define F_JSON_TO_TSVECTOR 4215
#define F_HAS_DATABASE_PRIVILEGE_ID 2255
#define _POSIX_TZNAME_MAX 6
#define F_GTSVECTOR_DECOMPRESS 3649
#define __itimerspec_defined 1
#define _POSIX_SSIZE_MAX 32767
#define Anum_ag_label_relation 5
#define F_CIRCLE_ABOVE 1461
#define MCAST_INCLUDE 1
#define F_PG_STAT_GET_XACT_FUNCTION_SELF_TIME 3048
#define F_GIST_BOX_CONSISTENT 2578
#define F_PG_CURRENT_LOGFILE_1ARG 3801
#define IPV6_UNICAST_HOPS 16
#define F_HAS_TABLE_PRIVILEGE_ID 1927
#define COMMERROR LOG_SERVER_ONLY
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define ENABLE_GSS 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define F_TIME_EQ 1145
#define F_TIME_SMALLER 1378
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define EXFULL 54
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define F_TS_RANKCD_TTF 3709
#define F_INT8_AVG_SERIALIZE 2786
#define _T_WCHAR 
#define HAVE_EDITLINE_HISTORY_H 1
#define AF_AX25 PF_AX25
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define F_TIMESTAMPTZ_LT_DATE 2377
#define CURSOR_OPT_GENERIC_PLAN 0x0040
#define _SC_BARRIERS _SC_BARRIERS
#define ACL_EXECUTE_CHR 'X'
#define F_PG_NOTIFY 3036
#define st_atime st_atim.tv_sec
#define PARTITION_STRATEGY_LIST 'l'
#define __stub___compat_uselib 
#define SHAREDTUPLESTORE_H 
#define Anum_pg_class_relchecks 18
#define _POSIX_CPUTIME 0
#define F_INT42DIV 173
#define is_windows_absolute_path(filename) ( IS_WINDOWS_DIR_SEP((filename)[0]) || (isalpha((unsigned char) ((filename)[0])) && (filename)[1] == ':' && IS_WINDOWS_DIR_SEP((filename)[2])) )
#define __ARM_ALIGN_MAX_PWR 28
#define PageSetLSN(page,lsn) PageXLogRecPtrSet(((PageHeader) (page))->pd_lsn, lsn)
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define F_RECORD_GE 2986
#define Anum_pg_class_relpartbound 33
#define __f32x(x) x ##f32x
#define F_BOOLTEXT 2971
#define ERRCODE_INSUFFICIENT_PRIVILEGE MAKE_SQLSTATE('4','2','5','0','1')
#define ERRCODE_QUERY_CANCELED MAKE_SQLSTATE('5','7','0','1','4')
#define F_REGROLEOUT 4092
#define WINT_MAX (4294967295u)
#define F_TSQUERYIN 3612
#define F_XML_OUT 2894
#define F_NUMERIC_ADD 1724
#define _BITS_POSIX2_LIM_H 1
#define F_SPG_POLY_QUAD_COMPRESS 5011
#define HeapTupleHeaderSetNatts(tup,natts) ( (tup)->t_infomask2 = ((tup)->t_infomask2 & ~HEAP_NATTS_MASK) | (natts) )
#define UINTPTR_MAX (18446744073709551615UL)
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','1')
#define F_SHOW_CONFIG_BY_NAME 2077
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#define ERRCODE_DIAGNOSTICS_EXCEPTION MAKE_SQLSTATE('0','Z','0','0','0')
#define NETDB_INTERNAL -1
#define linitial_oid(l) lfirst_oid(list_head(l))
#define LC_MONETARY __LC_MONETARY
#define __ASM_GENERIC_POSIX_TYPES_H 
#define NETDB_SUCCESS 0
#define F_ARRAY_FILL_WITH_LOWER_BOUNDS 1286
#define AG_EDGE_COLNAME_START_ID "start_id"
#define __USE_GNU 1
#define HEAP_XMAX_INVALID 0x0800
#define F_CASHSMALLER 899
#define __FLT_MIN_EXP__ (-125)
#define JULIAN_MINMONTH (11)
#define HAVE_POSIX_FADVISE 1
#define F_SCALARGTJOINSEL 108
#define lsecond_oid(l) lfirst_oid(lnext(list_head(l)))
#define AGTYPE_ITERATOR_TOKEN_IS_HASHABLE(x) (x > WAGT_DONE && x < WAGT_BEGIN_ARRAY)
#define WEXITED 4
#define IPV6_V6ONLY 26
#define F_GTSQUERY_COMPRESS 3695
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define HAVE_INT64_TIMESTAMP 
#define PIV_LOG_WARNING (1 << 0)
#define AF_PPPOX PF_PPPOX
#define IPV6_RECVRTHDR 56
#define AG_GETARG_GRAPHID(a) DATUM_GET_GRAPHID(PG_GETARG_DATUM(a))
#define HeapTupleHeaderSetHotUpdated(tup) ( (tup)->t_infomask2 |= HEAP_HOT_UPDATED )
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define HAVE_SYS_IPC_H 1
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define EKEYREJECTED 129
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define F_ENUM_EQ 3508
#define _BSD_SIZE_T_ 
#define EQ_CRC32C(c1,c2) ((c1) == (c2))
#define AG_EDGE_COLNAME_ID "id"
#define HeapTupleSetOid(tuple,oid) HeapTupleHeaderSetOid((tuple)->t_data, (oid))
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define F_PATH_LENGTH 987
#define _LOCALE_H 1
#define MAXALIGN_DOWN(LEN) TYPEALIGN_DOWN(MAXIMUM_ALIGNOF, (LEN))
#define ERRCODE_INVALID_CHARACTER_VALUE_FOR_CAST MAKE_SQLSTATE('2','2','0','1','8')
#define __INT_FAST64_TYPE__ long int
#define _NSIG (__SIGRTMAX + 1)
#define F_JSONB_TYPEOF 3210
#define PG_RETURN_BYTEA_P(x) PG_RETURN_POINTER(x)
#define F_ABSTIME_TIMESTAMPTZ 1173
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define PARSER_H 
#define __HAVE_DISTINCT_FLOAT32 0
#define F_ENUM_GE 3513
#define ERRCODE_CONNECTION_EXCEPTION MAKE_SQLSTATE('0','8','0','0','0')
#define F_JSONB_POPULATE_RECORD 3209
#define F_ENUM_GT 3511
#define F_PG_CREATE_LOGICAL_REPLICATION_SLOT 3786
#define WINT_MIN (0u)
#define MaxSizeOfXLogRecordBlockHeader (SizeOfXLogRecordBlockHeader + SizeOfXLogRecordBlockImageHeader + SizeOfXLogRecordBlockCompressHeader + sizeof(RelFileNode) + sizeof(BlockNumber))
#define __STRINGS_FORTIFIED 1
#define F_INTERVALTYPMODOUT 2904
#define htole32(x) __uint32_identity (x)
#define F_JSONB_OBJECT 3263
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define F_TEXTNE 157
#define SerializablePredicateLockListLock (&MainLWLockArray[30].lock)
#define F_PATH_AREA 979
#define IPV6_MTU 24
#define IPV6_RECVDSTOPTS 58
#define SIG_ATOMIC_WIDTH 32
#define F_TO_REGOPER 3492
#define IPPROTO_MTP IPPROTO_MTP
#define F_ENUM_IN 3506
#define F_TINTERVALLENGE 271
#define Anum_ag_label_edge_table_properties 4
#define __USE_XOPEN2KXSI 1
#define _XOPEN_LEGACY 1
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __HAVE_DISTINCT_FLOAT64 0
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define DTK_M(t) (0x01 << (t))
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define DatumGetTimestampTz(X) ((TimestampTz) DatumGetInt64(X))
#define __ASM_GENERIC_SOCKET_H 
#define BTLessStrategyNumber 1
#define HEAP_XMAX_SHR_LOCK (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define __USE_UNIX98 1
#define F_BTINT24CMP 2190
#define F_AREASEL 139
#define CLOCK_REALTIME_ALARM 8
#define SpinLockAcquire(lock) S_LOCK(lock)
#define PG_END_TRY() } PG_exception_stack = save_exception_stack; error_context_stack = save_context_stack; } while (0)
#define TZDISP_LIMIT ((MAX_TZDISP_HOUR + 1) * SECS_PER_HOUR)
#define F_SEAL_SEAL 0x0001
#define F_ENUM_LE 3512
#define ItemPointerGetOffsetNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetOffsetNumberNoCheck(pointer) )
#define F_ENUM_LT 3510
#define F_PG_EVENT_TRIGGER_DDL_COMMANDS 4568
#define IPV6_RECVERR 25
#define SET_LOCKTAG_RELATION(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define AssertState(condition) ((void)true)
#define F_INTERVAL_MUL 1618
#define SIGNAL_ARGS int postgres_signal_arg
#define CHAR_MAX UCHAR_MAX
#define F_PG_JIT_AVAILABLE 315
#define F_REGPROCSEND 2445
#define FPE_INTDIV FPE_INTDIV
#define SEEK_DATA 3
#define AGT_FARRAY 0x40000000
#define IP_RECVTOS 13
#define F_ENUM_NE 3509
#define ERRCODE_UNDEFINED_FUNCTION MAKE_SQLSTATE('4','2','8','8','3')
#define SIZE_WIDTH __WORDSIZE
#define F_TINTERVALLENLE 270
#define PG_INT64_MAX INT64CONST(0x7FFFFFFFFFFFFFFF)
#define ABS_AFTER 21
#define F_PG_STAT_GET_DB_BLK_WRITE_TIME 2845
#define F_TINTERVALLENLT 268
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define F_HAS_TABLE_PRIVILEGE_NAME_ID 1923
#define ERRCODE_L_E_INVALID_SPECIFICATION MAKE_SQLSTATE('0','F','0','0','1')
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define F_HAS_LANGUAGE_PRIVILEGE_NAME_NAME 2262
#define PG_NARGS() (fcinfo->nargs)
#define ACL_CREATE_CHR 'C'
#define INNER_VAR 65000
#define TRAP_HWBKPT TRAP_HWBKPT
#define F_HASHCHAREXTENDED 446
#define F_RANGE_MINUS 3869
#define HeapTupleHeaderGetRawXmax(tup) ( (tup)->t_choice.t_heap.t_xmax )
#define __REGISTER_PREFIX__ 
#define PF_ROSE 11
#define WEEK 24
#define HEAP_UPDATED 0x2000
#define F_INT2VECTORIN 40
#define InvalidAttrNumber 0
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define VARDATA_ANY(PTR) (VARATT_IS_1B(PTR) ? VARDATA_1B(PTR) : VARDATA_4B(PTR))
#define VARATT_IS_EXTERNAL_NON_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && !VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SET_VARTAG_1B_E(PTR,tag) (((varattrib_1b_e *) (PTR))->va_header = 0x01, ((varattrib_1b_e *) (PTR))->va_tag = (tag))
#define _PC_MAX_CANON _PC_MAX_CANON
#define CATVERSION_H 
#define F_NUMERIC_AVG 1837
#define F_CASH_WORDS 935
#define PF_INET6 10
#define F_PG_GET_OBJECT_ADDRESS 3954
#define __USE_POSIX2 1
#define IP_TRANSPARENT 19
#define F_BOX_SEND 2485
#define XLogRecGetData(decoder) ((decoder)->main_data)
#define HAVE_WCHAR_H 1
#define F_PG_SIZE_PRETTY 2288
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define PG_TEMP_FILE_PREFIX "pgsql_tmp"
#define AARR_HASNULL(a) (VARATT_IS_EXPANDED_HEADER(a) ? ((a)->xpn.dvalues != NULL ? (a)->xpn.dnulls != NULL : ARR_HASNULL((a)->xpn.fvalue)) : ARR_HASNULL((ArrayType *) (a)))
#define F_UNKNOWNIN 109
#define _POSIX_V7_ILP32_OFF32 -1
#define F_INET_CLIENT_ADDR 2196
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define F_OIDLT 716
#define ERRCODE_INVALID_ROW_COUNT_IN_LIMIT_CLAUSE MAKE_SQLSTATE('2','2','0','1','W')
#define F_FMGR_INTERNAL_VALIDATOR 2246
#define SetInvalidVirtualTransactionId(vxid) ((vxid).backendId = InvalidBackendId, (vxid).localTransactionId = InvalidLocalTransactionId)
#define CHAR_MIN 0
#define XLogRecHasBlockRef(decoder,block_id) ((decoder)->blocks[block_id].in_use)
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define GET_VXID_FROM_PGPROC(vxid,proc) ((vxid).backendId = (proc).backendId, (vxid).localTransactionId = (proc).lxid)
#define BKPBLOCK_FLAG_MASK 0xF0
#define TransactionIdGetDatum(X) ((Datum) (X))
#define __VERSION__ "11.3.0"
#define F_RANGE_GIST_PENALTY 3879
#define __IOV_MAX 1024
#define IP_PKTINFO 8
#define ACL_CONNECT (1<<11)
#define INT64CONST(x) (x ##L)
#define USE_XSD_DATES 4
#define _SYS_CDEFS_H 1
#define INDEX_MAX_KEYS 32
#define DTK_QUARTER 24
#define F_HAS_SERVER_PRIVILEGE_ID_NAME 3008
#define RENAME_WHITEOUT (1 << 2)
#define PG_RETURN_OID(x) return ObjectIdGetDatum(x)
#define MaxTupleAttributeNumber 1664
#define F_SPG_QUAD_LEAF_CONSISTENT 4022
#define HEAP_HASNULL 0x0001
#define HAVE_SYS_SEM_H 1
#define HeapTupleHeaderGetRawXmin(tup) ( (tup)->t_choice.t_heap.t_xmin )
#define F_SETSEED 1599
#define PG_PORT_H 
#define _POSIX_VERSION 200809L
#define INT16_C(c) c
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define INT_FAST8_WIDTH 8
#define __INT_WCHAR_T_H 
#define AGTE_IS_STRING(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_STRING)
#define TwoPhaseStateLock (&MainLWLockArray[18].lock)
#define F_DATE_CMP 1092
#define copyObject(obj) ((typeof(obj)) copyObjectImpl(obj))
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define FIELDNO_EXPRCONTEXT_AGGNULLS 9
#define __bitwise __bitwise__
#define _SC_TIMERS _SC_TIMERS
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define F_POINT_SUB 1442
#define F_HASHFLOAT8EXTENDED 444
#define ENOTSOCK 88
#define O_RDWR 02
#define ERRCODE_INVALID_ESCAPE_SEQUENCE MAKE_SQLSTATE('2','2','0','2','5')
#define palloc_object(type) ((type *) palloc(sizeof(type)))
#define _T_PTRDIFF_ 
#define AG_EDGE_COLNAME_END_ID "end_id"
#define EPERM 1
#define F_TEXTREGEXREPLACE 2285
#define HeapTupleHeaderClearHeapOnly(tup) ( (tup)->t_infomask2 &= ~HEAP_ONLY_TUPLE )
#define F_INTERVALTYPMODIN 2903
#define F_PG_STAT_GET_DB_BLOCKS_FETCHED 1944
#define F_CIDR_RECV 2498
#define FPE_CONDTRAP FPE_CONDTRAP
#define SOL_NFC 280
#define ISOTIME 23
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define F_NUMERICTYPMODOUT 2918
#define ERRCODE_NULL_VALUE_NO_INDICATOR_PARAMETER MAKE_SQLSTATE('2','2','0','0','2')
#define F_UUID_OUT 2953
#define __INTMAX_C(c) c ## L
#define XACT_COMPLETION_UPDATE_RELCACHE_FILE (1U << 30)
#define F_CIRCLE_BELOW 1460
#define F_INTERVAL_PART 1172
#define ERRCODE_INVALID_COLUMN_REFERENCE MAKE_SQLSTATE('4','2','P','1','0')
#define VARSIZE_EXTERNAL(PTR) (VARHDRSZ_EXTERNAL + VARTAG_SIZE(VARTAG_EXTERNAL(PTR)))
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define TRAP_TRACE TRAP_TRACE
#define XLR_CHECK_CONSISTENCY 0x02
#define __FLT32_MANT_DIG__ 24
#define RTNotEqualStrategyNumber 19
#define _SYS_SIZE_T_H 
#define AGT_ROOT_DATA_FBINARY(agtp_) VARDATA(agtp_);
#define F_NUMERIC_AVG_DESERIALIZE 2741
#define F_TIMESTAMP_SCALE 1961
#define SVE_VQ_MAX __SVE_VQ_MAX
#define F_INT4RANGE_CANONICAL 3914
#define F_PG_GET_INDEXDEF 1643
#define ERRCODE_INDETERMINATE_COLLATION MAKE_SQLSTATE('4','2','P','2','2')
#define Natts_ag_graph 2
#define SHRT_WIDTH 16
#define AG_EDGE_ACCESS_FUNCTION_END_ID "age_end_id"
#define F_I2TOD 235
#define F_I2TOF 236
#define __SIZE_T__ 
#define IS_DIR_SEP(ch) IS_NONWINDOWS_DIR_SEP(ch)
#define F_GINQUERYARRAYEXTRACT 2774
#define F_TEXT_REVERSE 3062
#define IP_PASSSEC 18
#define IPPORT_RESERVED 1024
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define PG_GETARG_UINT16(n) DatumGetUInt16(PG_GETARG_DATUM(n))
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define DTZMOD 28
#define AI_ALL 0x0010
#define F_JSON_TO_RECORD 3204
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define F_NAMENLIKE 859
#define PG_GETARG_UINT32(n) DatumGetUInt32(PG_GETARG_DATUM(n))
#define ELOOP 40
#define Anum_pg_attribute_atttypmod 9
#define __FLT128_HAS_DENORM__ 1
#define F_SETFD 2
#define F_JSONB_TO_RECORDSET 3491
#define F_SETFL 4
#define _POSIX_RTSIG_MAX 8
#define RTRightStrategyNumber 5
#define __off64_t_defined 
#define ERRCODE_INVALID_ROLE_SPECIFICATION MAKE_SQLSTATE('0','P','0','0','0')
#define __F_GETSIG 11
#define F_SCALARGTSEL 104
#define PageSetHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags |= PD_HAS_FREE_LINES)
#define F_FLOAT4RECV 2424
#define F_CIRCLE_CONTAIN 1453
#define __ORDER_PDP_ENDIAN__ 3412
#define F_SHOW_ALL_FILE_SETTINGS 3329
#define GUC_DISALLOW_IN_FILE 0x0040
#define DT_NOBEGIN PG_INT64_MIN
#define FunctionCall1(flinfo,arg1) FunctionCall1Coll(flinfo, InvalidOid, arg1)
#define FunctionCall2(flinfo,arg1,arg2) FunctionCall2Coll(flinfo, InvalidOid, arg1, arg2)
#define FunctionCall4(flinfo,arg1,arg2,arg3,arg4) FunctionCall4Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4)
#define FunctionCall6(flinfo,arg1,arg2,arg3,arg4,arg5,arg6) FunctionCall6Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define FunctionCall7(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7) FunctionCall7Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define FunctionCall8(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) FunctionCall8Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define F_BTRELTIMECMP 380
#define F_PG_REPLICATION_ORIGIN_SESSION_PROGRESS 6009
#define SVE_VQ_MIN __SVE_VQ_MIN
#define PG_DETOAST_DATUM_COPY(datum) pg_detoast_datum_copy((struct varlena *) DatumGetPointer(datum))
#define DEFAULT_SYNC_METHOD PLATFORM_DEFAULT_SYNC_METHOD
#define ACL_ALL_RIGHTS_TABLESPACE (ACL_CREATE)
#define PF_ROUTE PF_NETLINK
#define att_align_nominal(cur_offset,attalign) ( ((attalign) == 'i') ? INTALIGN(cur_offset) : (((attalign) == 'c') ? (uintptr_t) (cur_offset) : (((attalign) == 'd') ? DOUBLEALIGN(cur_offset) : ( AssertMacro((attalign) == 's'), SHORTALIGN(cur_offset) ))) )
#define __have_pthread_attr_t 1
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define F_INTERVAL_JUSTIFY_DAYS 1295
#define __INT_FAST8_MAX__ 0x7f
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define _ANSI_STDARG_H_ 
#define Anum_pg_attribute_attidentity 16
#define F_DISPELL_LEXIZE 3732
#define IP_MULTICAST_TTL 33
#define PF_KCM 41
#define F_TEXT_STARTS_WITH 3696
#define ERRCODE_INVALID_XML_COMMENT MAKE_SQLSTATE('2','2','0','0','S')
#define F_INT28GT 1853
#define RWH_WRITE_LIFE_MEDIUM 3
#define F_SETLK 6
#define IN_CLASSA_NSHIFT 24
#define HAVE_GETADDRINFO 1
#define F_NUMERIC_TO_NUMBER 1777
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define VARATT_IS_1B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x01)
#define F_TIMETZ_LT 1354
#define F_TXID_CURRENT_SNAPSHOT 2944
#define ERRCODE_IN_FAILED_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','2')
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define F_QUERY_TO_XML 2924
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define F_LSEG_OUT 120
#define AF_INET PF_INET
#define F_JSONB_BUILD_ARRAY_NOARGS 3272
#define FLOAT4_FITS_IN_INT16(num) ((num) >= (float4) PG_INT16_MIN && (num) < -((float4) PG_INT16_MIN))
#define F_PG_GET_FUNCTIONDEF 2098
#define NUMERIC_MAX_RESULT_SCALE (NUMERIC_MAX_PRECISION * 2)
#define F_INT2ABS 1253
#define HeapTupleHeaderIsHeapOnly(tup) ( ((tup)->t_infomask2 & HEAP_ONLY_TUPLE) != 0 )
#define GetSysCacheOid1(cacheId,key1) GetSysCacheOid(cacheId, key1, 0, 0, 0)
#define GetSysCacheOid2(cacheId,key1,key2) GetSysCacheOid(cacheId, key1, key2, 0, 0)
#define GetSysCacheOid3(cacheId,key1,key2,key3) GetSysCacheOid(cacheId, key1, key2, key3, 0)
#define GetSysCacheOid4(cacheId,key1,key2,key3,key4) GetSysCacheOid(cacheId, key1, key2, key3, key4)
#define O_SYNC 04010000
#define F_PG_MY_TEMP_SCHEMA 2854
#define DTK_HOUR 20
#define __HAVE_DISTINCT_FLOAT128 0
#define DTK_DOW 32
#define MinSizeOfXactSubxacts offsetof(xl_xact_subxacts, subxacts)
#define IPV6_PKTINFO 50
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define VARATT_IS_4B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x00)
#define DEFREM_H 
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define OidIsValid(objectId) ((bool) ((objectId) != InvalidOid))
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define F_TIMESTAMPTZ_NE_TIMESTAMP 2532
#define PG_MAJORVERSION "11"
#define F_JSONB_FLOAT4 3453
#define F_JSONB_FLOAT8 2580
#define ITEM_H 
#define SIOCGSTAMP_OLD 0x8906
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define F_HAS_SEQUENCE_PRIVILEGE_ID 2186
#define REPLICA_IDENTITY_FULL 'f'
#define vertex_tuple_id Anum_ag_label_vertex_table_id - 1
#define GUC_check_errhint pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errhint_string = format_elog_string
#define F_CIRCLE_SAME 1452
#define F_FLOAT8EQ 293
#define ERRCODE_FDW_INVALID_OPTION_INDEX MAKE_SQLSTATE('H','V','0','0','C')
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define AF_SMC PF_SMC
#define F_PARSE_IDENT 1268
#define O_NOATIME __O_NOATIME
#define F_FLOAT8_COVAR_SAMP 2816
#define IOV_MAX __IOV_MAX
#define AI_V4MAPPED 0x0008
#define HR24 2
#define INDEX_AM_RESERVED_BIT 0x2000
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define GUC_LIST_INPUT 0x0001
#define PG_GETARG_ARRAYTYPE_P_COPY(n) DatumGetArrayTypePCopy(PG_GETARG_DATUM(n))
#define FLOAT4_FITS_IN_INT64(num) ((num) >= (float4) PG_INT64_MIN && (num) < -((float4) PG_INT64_MIN))
#define IP_MULTICAST_IF 32
#define F_PG_CONVERT 1813
#define ACL_TRUNCATE_CHR 'D'
#define IP_DROP_MEMBERSHIP 36
#define F_CIRCLE_OUT 1451
#define HAVE_SSL_CLEAR_OPTIONS 1
#define F_PG_AVAILABLE_EXTENSIONS 3082
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define INT64_MODIFIER "l"
#define InvalidOid ((Oid) 0)
#define F_DATE_PL_INTERVAL 2071
#define F_BYTEATRIM 2015
#define ERRCODE_INVALID_CURSOR_STATE MAKE_SQLSTATE('2','4','0','0','0')
#define __WINT_MIN__ 0U
#define F_PG_IS_WAL_REPLAY_PAUSED 3073
#define ENAVAIL 119
#define __uid_t_defined 
#define EA_MAGIC 689375833
#define F_INT4_CASH 3811
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define ENOSR 63
#define ECONNRESET 104
#define foreach(cell,l) for ((cell) = list_head(l); (cell) != NULL; (cell) = lnext(cell))
#define lthird_node(type,l) castNode(type, lthird(l))
#define F_SETSIG __F_SETSIG
#define GUC_UNIT_XBLOCKS 0x3000
#define SHAREDFILESET_H 
#define __WCHAR_MAX __WCHAR_MAX__
#define HEAP_MOVED_OFF 0x4000
#define __GLIBC_USE_ISOC2X 1
#define F_WINDOW_LEAD 3109
#define CONDITION_VARIABLE_H 
#define F_FLOAT48LT 301
#define F_GTSVECTORIN 3646
#define ERRCODE_TOO_MANY_CONNECTIONS MAKE_SQLSTATE('5','3','3','0','0')
#define IP_XFRM_POLICY 17
#define F_TSMATCHSEL 3686
#define F_GIN_COMPARE_JSONB 3480
#define FUNC_MAX_ARGS 100
#define __iovec_defined 1
#define F_DIST_PB 364
#define ERRCODE_NOT_NULL_VIOLATION MAKE_SQLSTATE('2','3','5','0','2')
#define IN_CLASSA_MAX 128
#define VARHDRSZ_EXTERNAL offsetof(varattrib_1b_e, va_data)
#define NAMEDATALEN 64
#define HEAPAM_H 
#define F_BITSUBSTR 1680
#define HAVE_RINT 1
#define F_PG_TRY_ADVISORY_LOCK_SHARED_INT4 2889
#define F_PG_TRY_ADVISORY_LOCK_SHARED_INT8 2883
#define F_RANGE_AFTER 3864
#define BKI_BOOTSTRAP 
#define F_NUMERIC_LARGER 1767
#define PG_DIAG_SOURCE_LINE 'L'
#define INTPTR_MIN (-9223372036854775807L-1)
#define F_INT2AND 1892
#define F_PG_HAS_ROLE_ID 2710
#define EAFNOSUPPORT 97
#define F_FLOAT8_REGR_SLOPE 2813
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define INVAL_H 
#define LONGALIGN(LEN) TYPEALIGN(ALIGNOF_LONG, (LEN))
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define XLOG_SEQ_LOG 0x00
#define F_PG_GET_FUNCTION_ARG_DEFAULT 3808
#define TRAP_BRKPT TRAP_BRKPT
#define F_ARRAY_DIMS 747
#define F_GISTHANDLER 332
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define F_INT4MOD 156
#define __AARCH64EL__ 1
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define __FP_FAST_FMAF32 1
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define F_GIN_EXTRACT_TSVECTOR 3656
#define GENAM_H 
#define SEQ_COL_LASTCOL SEQ_COL_CALLED
#define ISODATE 22
#define PG_RETURN_ACLITEM_P(x) PG_RETURN_POINTER(x)
#define F_DIST_PS 363
#define __timer_t_defined 1
#define F_LINE_SEND 2489
#define __WCLONE 0x80000000
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define F_LINE_INTERPT 1494
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define F_HASHMACADDR 399
#define EMSGSIZE 90
#define SEGV_ADIPERR SEGV_ADIPERR
#define FRAMEOPTION_EXCLUSION (FRAMEOPTION_EXCLUDE_CURRENT_ROW | FRAMEOPTION_EXCLUDE_GROUP | FRAMEOPTION_EXCLUDE_TIES)
#define F_TO_REGTYPE 3493
#define ScanDirectionIsValid(direction) ((bool) (BackwardScanDirection <= (direction) && (direction) <= ForwardScanDirection))
#define DatumGetAclItemP(X) ((AclItem *) DatumGetPointer(X))
#define SNAPSHOT_H 
#define FETCH_ALL LONG_MAX
#define __WCHAR_MIN __WCHAR_MIN__
#define AssertMacro(condition) ((void)true)
#define F_THESAURUS_INIT 3740
#define SIOCSPGRP 0x8902
#define F_ABSTIMEOUT 241
#define HAVE_SYNC_FILE_RANGE 1
#define SIZEOF_LONG 8
#define AGTYPE_CONTAINER_IS_SCALAR(agtc) (((agtc)->header & AGT_FSCALAR) != 0)
#define SO_BSDCOMPAT 14
#define st_ctime st_ctim.tv_sec
#define F_TEXTREGEXREPLACE_NOOPT 2284
#define INT32_C(c) c
#define F_PG_HAS_ROLE_NAME 2709
#define DsaPointerIsValid(x) ((x) != InvalidDsaPointer)
#define Anum_pg_class_reltablespace 8
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define F_TIMESTAMP_EQ 1152
#define LOG_DESTINATION_EVENTLOG 4
#define F_PG_READ_BINARY_FILE_ALL 3828
#define PageSetPrunable(page,xid) do { Assert(TransactionIdIsNormal(xid)); if (!TransactionIdIsValid(((PageHeader) (page))->pd_prune_xid) || TransactionIdPrecedes(xid, ((PageHeader) (page))->pd_prune_xid)) ((PageHeader) (page))->pd_prune_xid = (xid); } while (0)
#define F_DUPFD_CLOEXEC 1030
#define __LONG_MAX__ 0x7fffffffffffffffL
#define HeapTupleHeaderGetUpdateXid(tup) ( (!((tup)->t_infomask & HEAP_XMAX_INVALID) && ((tup)->t_infomask & HEAP_XMAX_IS_MULTI) && !((tup)->t_infomask & HEAP_XMAX_LOCK_ONLY)) ? HeapTupleGetUpdateXid(tup) : HeapTupleHeaderGetRawXmax(tup) )
#define UINT_LEAST64_WIDTH 64
#define HAVE_VSNPRINTF 1
#define ERRCODE_FDW_INVALID_DESCRIPTOR_FIELD_IDENTIFIER MAKE_SQLSTATE('H','V','0','9','1')
#define HAVE_CBRT 1
#define __glibc_objsize0(__o) __bos0 (__o)
#define PG_INT8_MAX (0x7F)
#define Anum_ag_label_name 1
#define F_INT4MUL 141
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define IPV6_JOIN_ANYCAST 27
#define F_POLY_BOX 1446
#define MCAST_UNBLOCK_SOURCE 44
#define F_TIMESTAMP_GE 1156
#define IP_HDRINCL 3
#define F_TIMESTAMP_GT 1157
#define IPV6_TCLASS 67
#define AF_SNA PF_SNA
#define F_BIT_OR 1674
#define F_CHARTOI4 77
#define pgoff_t off_t
#define __UINT_FAST16_TYPE__ long unsigned int
#define FirstBootstrapObjectId 10000
#define F_TIMESTAMP_CMP_DATE 2370
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define AGO 19
#define ReplicationSlotAllocationLock (&MainLWLockArray[36].lock)
#define ERRCODE_SYSTEM_ERROR MAKE_SQLSTATE('5','8','0','0','0')
#define SizeOfXLogRecordDataHeaderShort (sizeof(uint8) * 2)
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define ACL_UPDATE_CHR 'w'
#define _POSIX_RAW_SOCKETS 200809L
#define F_TIMETZ_PART 1273
#define Anum_pg_attribute_attacl 21
#define DatumGetTextPP(X) ((text *) PG_DETOAST_DATUM_PACKED(X))
#define F_INTERVAL_SEND 2479
#define FKCONSTR_MATCH_FULL 'f'
#define DTERR_FIELD_OVERFLOW (-2)
#define HOUR 10
#define F_OIDVECTORTYPES 1349
#define F_I8TOOID 1287
#define F_PG_LSN_HASH 3252
#define F_ARRAY_AGG_ARRAY_TRANSFN 4051
#define ItemPointerIsValid(pointer) ((bool) (PointerIsValid(pointer) && ((pointer)->ip_posid != 0)))
#define F_TIMESTAMP_IN 1312
#define TUPMACS_H 
#define RTGreaterEqualStrategyNumber 23
#define __F_SETOWN 8
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define PF_ECONET 19
#define F_SMGROUT 761
#define F_BOX_CONTAINED 192
#define RELFILENODE_H 
#define F_PLAINTO_TSQUERY 3751
#define TIMESTAMP_IS_NOEND(j) ((j) == DT_NOEND)
#define HEAP_XMIN_COMMITTED 0x0100
#define EDEADLK 35
#define F_PG_NODE_TREE_RECV 197
#define F_ABSTIMEEQ 251
#define RELKIND_SEQUENCE 'S'
#define ERRCODE_CANNOT_COERCE MAKE_SQLSTATE('4','2','8','4','6')
#define S_INIT_LOCK(lock) S_UNLOCK(lock)
#define PG_RETURN_INT64(x) return Int64GetDatum(x)
#define pg_spin_delay_impl() ((void)0)
#define IsBootstrapProcessingMode() (Mode == BootstrapProcessing)
#define HAVE_UNIX_SOCKETS 1
#define F_JSONB_ARRAY_ELEMENTS_TEXT 3465
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define INT_LEAST8_WIDTH 8
#define CommitTsControlLock (&MainLWLockArray[38].lock)
#define INT64_MAX (__INT64_C(9223372036854775807))
#define htole16(x) __uint16_identity (x)
#define F_TIMESTAMP_LE 1155
#define F_TSQUERYTREE 3673
#define MAXNAMLEN NAME_MAX
#define __ORDER_BIG_ENDIAN__ 4321
#define F_TIMESTAMP_LT 1154
#define __INT16_TYPE__ short int
#define F_ABSTIMEGE 256
#define F_ABSTIMEGT 254
#define F_TIMESTAMP_MI 1188
#define F_BTINT2CMP 350
#define F_BOX_CIRCLE 1479
#define XLR_BLOCK_ID_DATA_LONG 254
#define F_GENERATE_SERIES_STEP_INT4 1066
#define ERRCODE_TOO_MANY_ARGUMENTS MAKE_SQLSTATE('5','4','0','2','3')
#define __UINT8_MAX__ 0xff
#define F_GENERATE_SERIES_STEP_INT8 1068
#define F_FLOAT48EQ 299
#define OldSnapshotTimeMapLock (&MainLWLockArray[42].lock)
#define F_CASH_OUT 887
#define SK_SEARCHARRAY 0x0020
#define F_TIMESTAMP_NE 1153
#define PG_INT8_MIN (-0x7F-1)
#define HAVE_RL_COMPLETION_MATCHES 1
#define F_SPG_TEXT_CONFIG 4027
#define F_WRLCK 1
#define __LDBL_IS_IEC_60559__ 2
#define MONTHS_PER_YEAR 12
#define FirstNormalTransactionId ((TransactionId) 3)
#define F_ABSTIMEIN 240
#define AGT_GIN_FLAG_NUM 0x04
#define DSM_IMPL_WINDOWS 3
#define F_POLY_CONTAIN 340
#define F_PG_INDEX_COLUMN_HAS_PROPERTY 638
#define SIGSYS 31
#define IsNormalProcessingMode() (Mode == NormalProcessing)
#define TIMESTAMP_NOBEGIN(j) do {(j) = DT_NOBEGIN;} while (0)
#define F_BRIN_INCLUSION_CONSISTENT 4107
#define SA_NOCLDSTOP 1
#define F_LASTVAL 2559
#define ERRCODE_DUPLICATE_FILE MAKE_SQLSTATE('5','8','P','0','2')
#define ____FILE_defined 1
#define ERRCODE_FDW_SCHEMA_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','Q')
#define ILL_PRVREG ILL_PRVREG
#define F_REGTYPERECV 2454
#define htole64(x) __uint64_identity (x)
#define HEAPTUPLESIZE MAXALIGN(sizeof(HeapTupleData))
#define Anum_pg_attribute_attnotnull 13
#define SA_INTERRUPT 0x20000000
#define MOD_ESTERROR ADJ_ESTERROR
#define O_LARGEFILE __O_LARGEFILE
#define F_ABSTIMELT 253
#define F_PG_DEPENDENCIES_SEND 3407
#define ERRCODE_DUPLICATE_FUNCTION MAKE_SQLSTATE('4','2','7','2','3')
#define F_PATH_INTER 973
#define RTOldContainedByStrategyNumber 14
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define ERRCODE_UNIQUE_VIOLATION MAKE_SQLSTATE('2','3','5','0','5')
#define ERRCODE_FDW_INVALID_DATA_TYPE MAKE_SQLSTATE('H','V','0','0','4')
#define F_ABSTIMENE 252
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define _SC_PII_XTI _SC_PII_XTI
#define F_BOX_OVERBELOW 2563
#define FKCONSTR_ACTION_SETDEFAULT 'd'
#define SA_NODEFER 0x40000000
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define PG_BACKEND_VERSIONSTR "postgres (PostgreSQL) " PG_VERSION "\n"
#define LC_TELEPHONE __LC_TELEPHONE
#define F_OIDVECTORSEND 2421
#define F_BPCHARCMP 1078
#define USE_ISO_DATES 1
#define F_VARCHARIN 1046
#define F_TIMESTAMPTZ_TIME 2019
#define F_BITSUBSTR_NO_LEN 1699
#define XLogRecGetRmid(decoder) ((decoder)->decoded_record->xl_rmid)
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define HAVE_STRONG_RANDOM 1
#define F_FLOAT8MUL 216
#define IPPROTO_MPLS IPPROTO_MPLS
#define SA_STACK SA_ONSTACK
#define RTOverAboveStrategyNumber 12
#define F_REGOPERATOROUT 2217
#define BUS_ADRERR BUS_ADRERR
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define ACL_OPTION_TO_PRIVS(privs) (((AclMode) (privs) >> 16) & 0xFFFF)
#define BTEqualStrategyNumber 3
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define pg_bswap32(x) __builtin_bswap32(x)
#define F_HASH_NUMERIC 432
#define F_DATETIME_TIMESTAMP 1272
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define F_POLY_DISTANCE 729
#define ESOCKTNOSUPPORT 94
#define __INTPTR_TYPE__ long int
#define F_TSVECTOR_CMP 3622
#define PATH_MAX 4096
#define POSTGRES_H 
#define F_PG_STAT_GET_LAST_AUTOANALYZE_TIME 2784
#define PageGetSpecialPointer(page) ( AssertMacro(PageValidateSpecialPointer(page)), (char *) ((char *) (page) + ((PageHeader) (page))->pd_special) )
#define F_INET_SET_MASKLEN 605
#define lfirst(lc) ((lc)->data.ptr_value)
#define F_PG_STAT_GET_BLOCKS_HIT 1935
#define Anum_pg_class_relallvisible 11
#define RELPERSISTENCE_UNLOGGED 'u'
#define __S_IFLNK 0120000
#define F_JSONB_OBJECT_KEYS 3931
#define list_make4_oid(x1,x2,x3,x4) lcons_oid(x1, list_make3_oid(x2, x3, x4))
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define InvalidLocalTransactionId 0
#define EDOTDOT 73
#define heap_close(r,l) relation_close(r,l)
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define F_CURSOR_TO_XMLSCHEMA 2928
#define PF_SMC 43
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define HAVE_SHM_OPEN 1
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define CheckpointerCommLock (&MainLWLockArray[17].lock)
#define ACL_MODECHG_EQL 3
#define F_BIT_RECV 2456
#define _WCHAR_T_DECLARED 
#define F_DATABASE_TO_XML_AND_XMLSCHEMA 2938
#define F_JSONB_PRETTY 3306
#define F_HASH_ACLITEM_EXTENDED 777
#define WNOWAIT 0x01000000
#define MultiXactIdGetDatum(X) ((Datum) (X))
#define F_INT4DIV 154
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define HAVE_EDITLINE_READLINE_H 1
#define _POSIX2_BC_DIM_MAX 2048
#define F_NETWORKSEL 3560
#define Anum_pg_class_reloptions 32
#define _FCNTL_H 1
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define F_NUMERIC_POLY_STDDEV_POP 3392
#define DSM_CREATE_NULL_IF_MAXSEGMENTS 0x0001
#define XLR_MAX_BLOCK_ID 32
#define GUC_UNIT_TIME 0xF0000
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define F_JSONB_POPULATE_RECORDSET 3475
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define DTK_MILLENNIUM 28
#define __intptr_t_defined 
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define ERRCODE_T_R_SERIALIZATION_FAILURE MAKE_SQLSTATE('4','0','0','0','1')
#define EPROTONOSUPPORT 93
#define UINT_MAX (INT_MAX * 2U + 1U)
#define EFBIG 27
#define Anum_pg_class_relrewrite 28
#define INVERT_COMPARE_RESULT(var) ((var) = ((var) < 0) ? 1 : -(var))
#define ERRCODE_INVALID_TIME_ZONE_DISPLACEMENT_VALUE MAKE_SQLSTATE('2','2','0','0','9')
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define IN_CLASSC_NET 0xffffff00
#define __SIGRTMAX 64
#define F_LINE_HORIZONTAL 1415
#define F_RANGE_EQ 3855
#define LONG_ALIGN_MASK (sizeof(long) - 1)
#define __WINT_MAX__ 0xffffffffU
#define __FLT_MAX_EXP__ 128
#define IsInitProcessingMode() (Mode == InitProcessing)
#define F_PATH_DIV_PT 1439
#define Anum_pg_class_reloftype 4
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define IN_LOOPBACKNET 127
#define VARDATA_1B(PTR) (((varattrib_1b *) (PTR))->va_data)
#define F_CIRCLE_OVERLAP 1459
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define MICROSECOND 14
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define DSA_POINTER_FORMAT "%016" INT64_MODIFIER "x"
#define __TIMER_T_TYPE void *
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define HAVE_OPENSSL_INIT_SSL 1
#define Abs(x) ((x) >= 0 ? (x) : -(x))
#define PG_INSTR_CLOCK CLOCK_MONOTONIC
#define F_FLOAT4DIV 203
#define HEAP_INSERT_NO_LOGICAL 0x0010
#define XACT_XINFO_HAS_INVALS (1U << 3)
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define _POSIX_SEM_VALUE_MAX 32767
#define AF_ATMPVC PF_ATMPVC
#define LC_CTYPE __LC_CTYPE
#define SET_VARSIZE(PTR,len) SET_VARSIZE_4B(PTR, len)
#define CLOCK_BOOTTIME 7
#define _CTYPE_H 1
#define ag_label_oid_index_id() ag_relation_id("ag_label_oid_index", "index")
#define AGTENTRY_TYPEMASK 0x70000000
#define F_ICLIKESEL 1814
#define F_CIDEQ 69
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define SHARED_TUPLESTORE_SINGLE_PASS 0x01
#define F_INT2_ACCUM_INV 3567
#define F_INTERVAL_ACCUM_INV 3549
#define __BIT_TYPES_DEFINED__ 1
#define _POSIX_VDISABLE '\0'
#define F_HAS_TABLESPACE_PRIVILEGE_NAME_ID 2391
#define F_TINTERVALLENNE 267
#define si_syscall _sifields._sigsys._syscall
#define F_GETLK64 5
#define IP_OPTIONS 4
#define __WINT_WIDTH__ 32
#define NUM_FIXED_LWLOCKS (PREDICATELOCK_MANAGER_LWLOCK_OFFSET + NUM_PREDICATELOCK_PARTITIONS)
#define __struct_FILE_defined 1
#define lfirst_int(lc) ((lc)->data.int_value)
#define FLOAT4_FITS_IN_INT32(num) ((num) >= (float4) PG_INT32_MIN && (num) < -((float4) PG_INT32_MIN))
#define F_ACLITEMOUT 1032
#define __S_ISVTX 01000
#define F_CIRCLE_EQ 1462
#define F_INT8_MUL_CASH 3399
#define XACT_XINFO_HAS_SUBXACTS (1U << 1)
#define palloc0fast(sz) ( MemSetTest(0, sz) ? MemoryContextAllocZeroAligned(CurrentMemoryContext, sz) : MemoryContextAllocZero(CurrentMemoryContext, sz) )
#define FIELDNO_EXPRCONTEXT_DOMAINDATUM 12
#define HASH_FFACTOR 0x0008
#define F_PG_TERMINATE_BACKEND 2096
#define __SIGRTMIN 32
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define F_TINTERVALCT 264
#define CURSOR_OPT_INSENSITIVE 0x0008
#define __FLT64X_IS_IEC_60559__ 2
#define F_CIRCLE_GE 1467
#define HASH_FIXED_SIZE 0x2000
#define F_GIN_TSQUERY_TRICONSISTENT 3921
#define F_CIRCLE_GT 1465
#define ERRCODE_WARNING_DEPRECATED_FEATURE MAKE_SQLSTATE('0','1','P','0','1')
#define IP_PMTUDISC 10
#define PG_HAVE_ATOMIC_INIT_FLAG 
#define ERRCODE_DUPLICATE_TABLE MAKE_SQLSTATE('4','2','P','0','7')
#define F_TSVECTOROUT 3611
#define Anum_pg_class_reltype 3
#define __FLT32_MIN_EXP__ (-125)
#define RWH_WRITE_LIFE_NONE 1
#define F_SPG_RANGE_QUAD_CHOOSE 3470
#define _PG_NUMERIC_H_ 
#define ERRCODE_OBJECT_NOT_IN_PREREQUISITE_STATE MAKE_SQLSTATE('5','5','0','0','0')
#define F_PG_COLUMN_SIZE 1269
#define F_PG_STAT_GET_LAST_VACUUM_TIME 2781
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define F_TINTERVALEQ 784
#define F_INT84DIV 1277
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define F_ABSTIME_DATE 1179
#define F_PG_GET_PARTITION_CONSTRAINTDEF 3408
#define POSIX_FADV_RANDOM 1
#define F_PG_DDL_COMMAND_IN 86
#define __UINT8_C(c) c
#define ERRCODE_IO_ERROR MAKE_SQLSTATE('5','8','0','3','0')
#define F_CIRCLE_IN 1450
#define __cookie_io_functions_t_defined 1
#define MOD_MAXERROR ADJ_MAXERROR
#define TIMESTAMP_NOT_FINITE(j) (TIMESTAMP_IS_NOBEGIN(j) || TIMESTAMP_IS_NOEND(j))
#define F_JSON_POPULATE_RECORDSET 3961
#define F_GIN_CONSISTENT_JSONB_PATH 3487
#define exec_subplan_get_plan(plannedstmt,subplan) ((Plan *) list_nth((plannedstmt)->subplans, (subplan)->plan_id - 1))
#define F_TO_JSON 3176
#define AGTE_IS_AGTYPE(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_AGTYPE)
#define IS_WINDOWS_DIR_SEP(ch) ((ch) == '/' || (ch) == '\\')
#define F_TINTERVALGT 787
#define SO_RXQ_OVFL 40
#define F_TIMETZ_SEND 2473
#define AGTYPE_EXISTS_STRATEGY_NUMBER 9
#define __UINT64_TYPE__ long unsigned int
#define SO_RCVTIMEO_NEW 66
#define __stub___compat_query_module 
#define F_INTERVAL_TRANSFORM 3918
#define __ARM_NEON 1
#define newNode(size,tag) ({ Node *_result; AssertMacro((size) >= sizeof(Node)); _result = (Node *) palloc0fast(size); _result->type = (tag); _result; })
#define NO_DATA 4
#define AGT_FSCALAR 0x10000000
#define F_ICREGEXNEJOINSEL 1829
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define HEAP_INSERT_FROZEN 0x0004
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define F_CIRCLE_LE 1466
#define SO_MEMINFO 55
#define F_TINTERVALIN 246
#define F_CIRCLE_LT 1464
#define _SC_LONG_BIT _SC_LONG_BIT
#define ERRCODE_DUPLICATE_COLUMN MAKE_SQLSTATE('4','2','7','0','1')
#define __stack_t_defined 1
#define _POSIX_MAPPED_FILES 200809L
#define PG_TEXTDOMAIN(domain) (domain "-" PG_MAJORVERSION)
#define F_HAS_LANGUAGE_PRIVILEGE_NAME 2266
#define __FLT128_HAS_QUIET_NAN__ 1
#define USE_POSTGRES_DATES 0
#define AGT_FBINARY_TYPE_VLE_PATH 0x00000001
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define F_TINTERVALGE 789
#define DTK_ALL_SECS_M (DTK_M(SECOND) | DTK_M(MILLISECOND) | DTK_M(MICROSECOND))
#define F_ANYARRAY_OUT 2297
#define IPPROTO_IGMP IPPROTO_IGMP
#define F_TIMESTAMP_LT_TIMESTAMPTZ 2520
#define BUFPAGE_H 
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define PF_IUCV 32
#define SET_LOCKTAG_TRANSACTION(locktag,xid) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_TRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define AI_CANONNAME 0x0002
#define F_TINTERVALLE 788
#define _STATBUF_ST_NSEC 
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define F_TINTERVALLT 786
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define pg_attribute_aligned(a) __attribute__((aligned(a)))
#define __USE_ISOC11 1
#define CLD_TRAPPED CLD_TRAPPED
#define F_FLOAT48GT 303
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define F_TIMESTAMPTZ_DATE 1178
#define F_BPCHAR_SMALLER 1064
#define F_NUMERIC_POLY_SERIALIZE 3339
#define S_IFLNK __S_IFLNK
#define F_DSIMPLE_LEXIZE 3726
#define __FLT64_HAS_DENORM__ 1
#define HAVE_DECL_LLVMCREATEPERFJITEVENTLISTENER 1
#define BKI_WITHOUT_OIDS 
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define F_JSONB_DELETE_ARRAY 3343
#define ESRMNT 69
#define IPV6_ROUTER_ALERT 22
#define F_CURRENT_DATABASE 861
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define _POSIX2_BC_BASE_MAX 99
#define F_BTTEXT_PATTERN_SORTSUPPORT 3332
#define F_RANGE_MERGE 4057
#define F_TINTERVALOV 265
#define RELKIND_TOASTVALUE 't'
#define _POSIX_MQ_PRIO_MAX 32
#define F_TSQUERY_LT 3662
#define PRS2_OLD_VARNO 1
#define ERRCODE_CONFIGURATION_LIMIT_EXCEEDED MAKE_SQLSTATE('5','3','4','0','0')
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define ENOANO 55
#define INT_LEAST64_WIDTH 64
#define lfirst_oid(lc) ((lc)->data.oid_value)
#define F_PATH_IN 121
#define F_DATE_MI_INTERVAL 2072
#define PG_GETARG_TIMESTAMP(n) DatumGetTimestamp(PG_GETARG_DATUM(n))
#define fetchatt(A,T) fetch_att(T, (A)->attbyval, (A)->attlen)
#define si_arch _sifields._sigsys._arch
#define XLOG_DEFS_H 
#define innerPlanState(node) (((PlanState *)(node))->righttree)
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define strVal(v) (((Value *)(v))->val.str)
#define ERRCODE_FDW_INVALID_OPTION_NAME MAKE_SQLSTATE('H','V','0','0','D')
#define F_POINT_ABOVE 131
#define F_NAMERECV 2422
#define F_PATH_N_EQ 984
#define NUM_INDIVIDUAL_LWLOCKS 48
#define F_GIN_CMP_PREFIX 2700
#define AGTENTRY_IS_NULL 0x40000000
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define SI_KERNEL SI_KERNEL
#define F_DATE_GE_TIMESTAMPTZ 2355
#define _STRUCT_TIMESPEC 1
#define F_PG_STAT_GET_BUF_ALLOC 2859
#define F_POLY_IN 347
#define _POSIX_REENTRANT_FUNCTIONS 1
#define __mode_t_defined 
#define F_OFD_SETLKW 38
#define DatumGetVarCharP(X) ((VarChar *) PG_DETOAST_DATUM(X))
#define USE_PREFETCH 
#define IP_RECVFRAGSIZE 25
#define SO_TIMESTAMPNS_OLD 35
#define PERFORM_DELETION_QUIETLY 0x0004
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define F_FLT4_MUL_CASH 848
#define DTK_DECADE 26
#define HEAP_MOVED_IN 0x8000
#define AI_CANONIDN 0x0080
#define EISCONN 106
#define edge_tuple_properties Anum_ag_label_edge_table_properties - 1
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define PARAMS_H 
#define PG_RETURN_HEAPTUPLEHEADER(x) return HeapTupleHeaderGetDatum(x)
#define __glibc_has_builtin(name) __has_builtin (name)
#define AF_UNIX PF_UNIX
#define IP_RECVRETOPTS IP_RETOPTS
#define F_JSONB_OBJECT_FIELD 3478
#define IPPROTO_COMP IPPROTO_COMP
#define EUSERS 87
#define _VA_LIST_T_H 
#define F_TEXTICLIKE 1633
#define INT_FAST16_MAX (9223372036854775807L)
#define __UINT16_TYPE__ short unsigned int
#define F_PG_ISOLATION_TEST_SESSION_IS_BLOCKED 3378
#define __PIC__ 2
#define F_PG_RELATION_FILENODE 2999
#define __UINT_FAST32_TYPE__ long unsigned int
#define XACT_SERIALIZABLE 3
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define pg_read_barrier() pg_read_barrier_impl()
#define F_TIMESTAMPTYPMODIN 2905
#define list_make2_oid(x1,x2) lcons_oid(x1, list_make1_oid(x2))
#define HAVE_GETHOSTBYNAME_R 1
#define F_JSONB_EXISTS_ANY 4048
#define HAVE_DECL_STRTOLL 1
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define F_ARRAYCONTAINED 2749
#define F_OIDVECTORLT 677
#define F_DPOW 232
#define F_ARRAY_UPPER 2092
#define F_JSON_RECV 323
#define HEAP_XMAX_LOCK_ONLY 0x0080
#define __FP_FAST_FMA 1
#define SA_NOCLDWAIT 2
#define PG_HAVE_ATOMIC_UNLOCKED_WRITE_U32 
#define FIELDNO_EXPRSTATE_RESULTSLOT 4
#define pg_read_barrier_impl() __atomic_thread_fence(__ATOMIC_ACQUIRE)
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define FIN_CRC32C(crc) ((crc) ^= 0xFFFFFFFF)
#define __INT32_TYPE__ int
#define FASYNC O_ASYNC
#define DTERR_BAD_FORMAT (-1)
#define F_PG_GET_RULEDEF 1573
#define Anum_pg_class_relhasoids 19
#define F_MACADDR_NOT 3144
#define DatumGetBpCharP(X) ((BpChar *) PG_DETOAST_DATUM(X))
#define IPV6_PMTUDISC_WANT 1
#define SHAREDINVALRELMAP_ID (-4)
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK 5
#define TTS_HAS_PHYSICAL_TUPLE(slot) ((slot)->tts_tuple != NULL && (slot)->tts_tuple != &((slot)->tts_minhdr))
#define ARR_NDIM(a) ((a)->ndim)
#define __SWORD_TYPE long int
#define F_INT4NOT 1901
#define be16toh(x) __bswap_16 (x)
#define SizeOfXLogRecordBlockImageHeader (offsetof(XLogRecordBlockImageHeader, bimg_info) + sizeof(uint8))
#define ERRCODE_INVALID_TRANSACTION_INITIATION MAKE_SQLSTATE('0','B','0','0','0')
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define MCAST_BLOCK_SOURCE 43
#define NUM_LOCK_PARTITIONS (1 << LOG2_NUM_LOCK_PARTITIONS)
#define RTSameStrategyNumber 6
#define IN_CLASSA_NET 0xff000000
#define PG_RETURN_POINTER(x) return PointerGetDatum(x)
#define ERRCODE_CARDINALITY_VIOLATION MAKE_SQLSTATE('2','1','0','0','0')
#define UINT8_C(c) c
#define F_TSQUERYOUT 3613
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define ARR_OVERHEAD_WITHNULLS(ndims,nitems) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims) + ((nitems) + 7) / 8)
#define F_DTRUNC 229
#define __SVE_VQ_MAX 512
#define _____fpos64_t_defined 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define PageHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags & PD_HAS_FREE_LINES)
#define SpinLockRelease(lock) S_UNLOCK(lock)
#define MINIMAL_TUPLE_PADDING ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) % MAXIMUM_ALIGNOF)
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define F_GIN_EXTRACT_TSQUERY 3657
#define _POSIX_V7_ILP32_OFFBIG -1
#define MAKEFUNC_H 
#define FMGROIDS_H 
#define ESTRPIPE 86
#define ESPIPE 29
#define _XOPEN_LIM_H 1
#define HEAP_LOCK_MASK (HEAP_XMAX_SHR_LOCK | HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define atooid(x) ((Oid) strtoul((x), NULL, 10))
#define F_PATH_NPOINTS 1432
#define F_REGROLEIN 4098
#define F_ICREGEXEQJOINSEL 1826
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define F_BYTEALIKE 2005
#define __INT16_C(c) c
#define F_TIMESTAMPTZ_GT_DATE 2380
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define SOL_AAL 265
#define F_IN_RANGE_TIMETZ_INTERVAL 4138
#define _SC_THREADS _SC_THREADS
#define ERRCODE_WARNING_IMPLICIT_ZERO_BIT_PADDING MAKE_SQLSTATE('0','1','0','0','8')
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define _NETINET_IN_H 1
#define ERRCODE_SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION MAKE_SQLSTATE('4','2','0','0','0')
#define F_NUMERIC_INT2 1783
#define F_NUMERIC_INT4 1744
#define errno (*__errno_location ())
#define DTK_SECOND 18
#define __LC_IDENTIFICATION 12
#define EADV 68
#define FLEXIBLE_ARRAY_MEMBER 
#define AGT_ROOT_IS_ARRAY(agtp_) ((*(uint32 *)VARDATA(agtp_) & AGT_FARRAY) != 0)
#define INIT_CRC32C(crc) ((crc) = 0xFFFFFFFF)
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define _POSIX_TTY_NAME_MAX 9
#define PF_ATMPVC 8
#define _BITS_STAT_H 1
#define ENTRY_ID_MAX INT64CONST(281474976710655)
#define InitFunctionCallInfoData(Fcinfo,Flinfo,Nargs,Collation,Context,Resultinfo) do { (Fcinfo).flinfo = (Flinfo); (Fcinfo).context = (Context); (Fcinfo).resultinfo = (Resultinfo); (Fcinfo).fncollation = (Collation); (Fcinfo).isnull = false; (Fcinfo).nargs = (Nargs); } while (0)
#define PG_HAVE_ATOMIC_CLEAR_FLAG 
#define F_CLOSE_LB 963
#define IndexTupleHasVarwidths(itup) ((((IndexTuple) (itup))->t_info & INDEX_VAR_MASK))
#define F_CLOSE_LS 1488
#define F_LIKE_ESCAPE_BYTEA 2009
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define F_PG_STAT_GET_DB_TUPLES_DELETED 2762
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define INSTR_TIME_GET_DOUBLE(t) (((double) (t).tv_sec) + ((double) (t).tv_nsec) / 1000000000.0)
#define ARRAY_H 
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define CLD_KILLED CLD_KILLED
#define _LINUX_STDDEF_H 
#define F_TIMESTAMP_ZONE_TRANSFORM 3995
#define BKI_LOOKUP(catalog) 
#define OIDCHARS 10
#define SHUT_RD SHUT_RD
#define RTContainsElemStrategyNumber 16
#define TIMESTAMP_END_JULIAN (109203528)
#define SubtransControlLock (&MainLWLockArray[12].lock)
#define F_BIT_IN 1564
#define F_CLOSE_PB 367
#define ERRCODE_INVALID_FUNCTION_DEFINITION MAKE_SQLSTATE('4','2','P','1','3')
#define F_INT8INC 1219
#define F_CLOSE_PL 961
#define F_CLOSE_PS 366
#define F_INT2_SUM 1840
#define F_PG_STAT_GET_BGWRITER_STAT_RESET_TIME 3075
#define AF_IPX PF_IPX
#define IPV6_MULTICAST_ALL 29
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define FIELDNO_HEAPTUPLEDATA_DATA 3
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define F_INT48NE 853
#define ERRCODE_SUBSTRING_ERROR MAKE_SQLSTATE('2','2','0','1','1')
#define FIELDNO_EXPRCONTEXT_INNERTUPLE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define F_PG_STAT_GET_BACKEND_XACT_START 2857
#define F_IN_RANGE_DATE_INTERVAL 4133
#define ENOTUNIQ 76
#define F_GIN_TSQUERY_CONSISTENT 3658
#define F_GINHANDLER 333
#define _PWD_H 1
#define PROCLOCK_LOCKMETHOD(proclock) LOCK_LOCKMETHOD(*((proclock).tag.myLock))
#define F_CLOSE_SB 368
#define F_CLOSE_SL 962
#define GetCTETargetList(cte) (AssertMacro(IsA((cte)->ctequery, Query)), ((Query *) (cte)->ctequery)->commandType == CMD_SELECT ? ((Query *) (cte)->ctequery)->targetList : ((Query *) (cte)->ctequery)->returningList)
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define F_PG_REPLICATION_ORIGIN_XACT_RESET 6011
#define F_BPCHAREQ 1048
#define ENTRY_ID_MIN INT64CONST(1)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define PG_GETARG_CSTRING(n) DatumGetCString(PG_GETARG_DATUM(n))
#define SOL_ALG 279
#define IsolationUsesXactSnapshot() (XactIsoLevel >= XACT_REPEATABLE_READ)
#define AT_EMPTY_PATH 0x1000
#define __INT_LEAST64_WIDTH__ 64
#define F_NAMEOUT 35
#define INT_LEAST16_MAX (32767)
#define F_GTSVECTOR_CONSISTENT 3654
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define _GNU_SOURCE 1
#define _POSIX_SAVED_IDS 1
#define F_TS_STAT1 3689
#define F_TS_STAT2 3690
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define F_NUMERIC_CMP 1769
#define __POSIX_FADV_DONTNEED 4
#define SK_SEARCHNOTNULL 0x0080
#define NI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("NI_IDN_USE_STD3_ASCII_RULES is deprecated") 128
#define PageClearFull(page) (((PageHeader) (page))->pd_flags &= ~PD_PAGE_FULL)
#define F_POLY_SAME 339
#define FIELDNO_EXPRCONTEXT_CASENULL 11
#define __U32_TYPE unsigned int
#define HAVE_SYS_SELECT_H 1
#define _STDLIB_H 1
#define IP_RECVERR_RFC4884 26
#define F_PG_GET_MULTIXACT_MEMBERS 3819
#define F_INT8_CASH 3812
#define _BITS_FLOATN_COMMON_H 
#define IP_UNBLOCK_SOURCE 37
#define SI_TIMER SI_TIMER
#define PG_RETURN_NUMERIC(x) return NumericGetDatum(x)
#define __LC_MONETARY 4
#define CppAsString(identifier) #identifier
#define si_timerid _sifields._timer.si_tid
#define __FLT16_HAS_DENORM__ 1
#define F_INT28MI 942
#define O_NOCTTY 0400
#define _PTRDIFF_T_ 
#define F_HAS_LANGUAGE_PRIVILEGE_ID_NAME 2264
#define F_POSITIONJOINSEL 1301
#define F_PG_GET_VIEWDEF 1641
#define F_INTERVAL_OUT 1161
#define _STDBOOL_H 
#define F_PG_STAT_GET_BGWRITER_TIMED_CHECKPOINTS 2769
#define __ARM_SIZEOF_WCHAR_T 4
#define HAVE_STRING_H 1
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define DYNTZ 7
#define GAI_WAIT 0
#define IP_DEFAULT_MULTICAST_TTL 1
#define F_PG_STAT_GET_BACKEND_USERID 1939
#define ATTNUM_H 
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define F_GTSVECTOR_COMPRESS 3648
#define F_INT2GT 146
#define F_INT2VECTORSEND 2411
#define F_POINT_BELOW 134
#define F_RANGE_CMP 3870
#define F_BOX_OVERLAP 125
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define SIGBUS 7
#define LLONG_WIDTH 64
#define F_OVERLAPS_TIMETZ 1271
#define EUNATCH 49
#define SOL_ATM 264
#define _BITS_STDIO_LIM_H 1
#define F_CIRCLE_BOX 1480
#define INT_LEAST16_MIN (-32767-1)
#define USE_ICU 1
#define LWLOCK_H 
#define F_NUMERIC_VAR_POP 2514
#define __flexarr []
#define ACL_TRIGGER_CHR 't'
#define BlockIdCopy(toBlockId,fromBlockId) ( AssertMacro(PointerIsValid(toBlockId)), AssertMacro(PointerIsValid(fromBlockId)), (toBlockId)->bi_hi = (fromBlockId)->bi_hi, (toBlockId)->bi_lo = (fromBlockId)->bi_lo )
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define F_LINE_EQ 1492
#define F_PG_STAT_GET_VACUUM_COUNT 3054
#define __socklen_t_defined 
#define O_ACCMODE 0003
#define F_INTERVAL_SCALE 1200
#define SIG_HOLD ((__sighandler_t) 2)
#define AF_XDP PF_XDP
#define F_CHAR_TEXT 946
#define FIOGETOWN 0x8903
#define ERRCODE_UNDEFINED_OBJECT MAKE_SQLSTATE('4','2','7','0','4')
#define ELIBMAX 82
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ERRCODE_INVALID_ARGUMENT_FOR_LOG MAKE_SQLSTATE('2','2','0','1','E')
#define F_TS_PARSE_BYID 3715
#define F_INT24EQ 158
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define F_PT_CONTAINED_POLY 1429
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define F_BOX_ADD 1422
#define Anum_pg_attribute_attinhcount 19
#define F_ARRAY_LENGTH 2176
#define _SC_2_C_DEV _SC_2_C_DEV
#define __SIZEOF_PTHREAD_ATTR_T 64
#define F_TINTERVALSEND 2467
#define F_WINDOW_RANK 3101
#define F_LINE_IN 1490
#define F_INT24GE 168
#define bool _Bool
#define F_INT24GT 162
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define SizeofMinimalTupleHeader offsetof(MinimalTupleData, t_bits)
#define FRAMEOPTION_BETWEEN 0x00010
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define SET_LOCKTAG_PAGE(locktag,dboid,reloid,blocknum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_PAGE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define _GETOPT_POSIX_H 1
#define LC_ALL __LC_ALL
#define F_HAS_TABLE_PRIVILEGE_ID_ID 1925
#define DTK_TZ_MINUTE 35
#define _XOPEN_SOURCE 700
#define EILSEQ 84
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define F_DATE_NE_TIMESTAMP 2343
#define F_BRIN_INCLUSION_UNION 4108
#define F_INT48MUL 1280
#define Anum_pg_attribute_attfdwoptions 23
#define __OFF_T_MATCHES_OFF64_T 1
#define F_TEXT_SUBSTR 877
#define SET_LOCKTAG_OBJECT(locktag,dboid,classoid,objoid,objsubid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (classoid), (locktag).locktag_field3 = (objoid), (locktag).locktag_field4 = (objsubid), (locktag).locktag_type = LOCKTAG_OBJECT, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define list_make5_int(x1,x2,x3,x4,x5) lcons_int(x1, list_make4_int(x2, x3, x4, x5))
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define F_CIRCLE_DIV_PT 1149
#define F_VOID_SEND 3121
#define OPEN_DATASYNC_FLAG O_DSYNC
#define __WCHAR_MAX__ 0xffffffffU
#define AF_APPLETALK PF_APPLETALK
#define F_POLY_CENTER 227
#define SOL_PPPOL2TP 273
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define InvalidXLogRecPtr 0
#define F_SHA384_BYTEA 3421
#define relpathbackend(rnode,backend,forknum) GetRelationPath((rnode).dbNode, (rnode).spcNode, (rnode).relNode, backend, forknum)
#define F_BITFROMINT4 1683
#define F_OIDSMALLER 1966
#define AGT_HEADER_EDGE 0x00000003
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define HeapTupleHeaderGetXmin(tup) ( HeapTupleHeaderXminFrozen(tup) ? FrozenTransactionId : HeapTupleHeaderGetRawXmin(tup) )
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define F_PG_GET_VIEWDEF_WRAP 3159
#define PD_HAS_FREE_LINES 0x0001
#define ERRCODE_FOREIGN_KEY_VIOLATION MAKE_SQLSTATE('2','3','5','0','3')
#define BKPBLOCK_FORK_MASK 0x0F
#define _IOFBF 0
#define F_INT24LE 166
#define F_INTERNAL_IN 2304
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define F_INT24MI 182
#define RowMarkRequiresRowShareLock(marktype) ((marktype) <= ROW_MARK_KEYSHARE)
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define __f64(x) x ##f64
#define SO_SELECT_ERR_QUEUE 45
#define SIGXCPU 24
#define SSIZE_MAX LONG_MAX
#define F_TO_TSVECTOR 3749
#define F_LSEG_LENGTH 1487
#define F_GETPIPE_SZ 1032
#define F_INT24NE 164
#define F_INT28NE 1851
#define F_IN_RANGE_TIMESTAMPTZ_INTERVAL 4135
#define F_TSQUERY_OR 3670
#define _ISOC2X_SOURCE 1
#define F_BRIN_MINMAX_ADD_VALUE 3384
#define XATTR_SIZE_MAX 65536
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define HAVE_POLL_H 1
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define F_STRING_AGG_TRANSFN 3535
#define F_INT24PL 178
#define HAVE_LIBREADLINE 1
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define F_TIMESTAMPTZ_GE_DATE 2381
#define F_PG_TRY_ADVISORY_LOCK_INT4 2888
#define F_TXID_SNAPSHOT_SEND 2942
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define HAVE_PTHREAD 1
#define F_BINARY_UPGRADE_SET_NEXT_PG_TYPE_OID 3582
#define POLL_MSG POLL_MSG
#define SIZEOF_BOOL 1
#define F_INTERNAL_OUT 2305
#define __FINITE_MATH_ONLY__ 0
#define F_BITFROMINT8 2075
#define __id_t_defined 
#define F_PG_ADVISORY_UNLOCK_SHARED_INT4 2891
#define F_PG_ADVISORY_UNLOCK_SHARED_INT8 2885
#define F_SPG_TEXT_LEAF_CONSISTENT 4031
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define TransactionIdStore(xid,dest) (*(dest) = (xid))
#define RTOverBelowStrategyNumber 9
#define SIGALRM 14
#define FMGRPROTOS_H 
#define EBADE 52
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define F_CURRTID_BYRELNAME 1294
#define F_PG_REPLICATION_ORIGIN_XACT_SETUP 6010
#define EBADR 53
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define __pid_t_defined 
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define ECANCELED 125
#define XLR_SPECIAL_REL_UPDATE 0x01
#define ERRCODE_BRANCH_TRANSACTION_ALREADY_ACTIVE MAKE_SQLSTATE('2','5','0','0','2')
#define F_SMGREQ 762
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define linitial(l) lfirst(list_head(l))
#define ERRCODE_UNDEFINED_SCHEMA MAKE_SQLSTATE('3','F','0','0','0')
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define _THREAD_MUTEX_INTERNAL_H 1
#define F_GIST_BOX_SAME 2584
#define MSG_MORE MSG_MORE
#define ERRCODE_EXTERNAL_ROUTINE_EXCEPTION MAKE_SQLSTATE('3','8','0','0','0')
#define F_TS_RANKCD_WTTF 3707
#define PG_RETURN_INTERVAL_P(x) return IntervalPGetDatum(x)
#define INT_FAST8_MAX (127)
#define UNIX_EPOCH_JDATE 2440588
#define _BITS_STRING_FORTIFIED_H 1
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define F_ON_PB 136
#define F_ON_PL 959
#define F_ON_PS 369
#define F_LINE_INTERSECT 1495
#define UNKNOWN_FIELD 31
#define F_HAS_TABLE_PRIVILEGE_NAME_NAME 1922
#define __FLT64_MANT_DIG__ 53
#define F_SPG_RANGE_QUAD_INNER_CONSISTENT 3472
#define MSG_PEEK MSG_PEEK
#define ADJ_ESTERROR 0x0008
#define F_PG_STAT_GET_BACKEND_CLIENT_ADDR 1392
#define htobe16(x) __bswap_16 (x)
#define ERRCODE_INVALID_FOREIGN_KEY MAKE_SQLSTATE('4','2','8','3','0')
#define BlockIdEquals(blockId1,blockId2) ((blockId1)->bi_hi == (blockId2)->bi_hi && (blockId1)->bi_lo == (blockId2)->bi_lo)
#define F_HASHTEXTEXTENDED 448
#define F_ACLITEM_EQ 1062
#define __SHRT_MAX__ 0x7fff
#define O_CLOEXEC __O_CLOEXEC
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define USE_SYSTEMD 1
#define ILL_ILLOPC ILL_ILLOPC
#define F_PG_CONF_LOAD_TIME 2034
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define F_BRIN_SUMMARIZE_RANGE 3999
#define CURSOR_OPT_CUSTOM_PLAN 0x0080
#define F_WINDOW_DENSE_RANK 3102
#define DEST_H 
#define htobe32(x) __bswap_32 (x)
#define F_ON_SL 960
#define F_REGCONFIGSEND 3739
#define Anum_pg_class_relispopulated 25
#define __daddr_t_defined 
#define F_TIMESTAMPTZ_PART 1171
#define RelationRelation_Rowtype_Id 83
#define F_HAS_SEQUENCE_PRIVILEGE_ID_ID 2184
#define F_WINDOW_LAG 3106
#define ACL_NO_RIGHTS 0
#define SO_RCVTIMEO_OLD 20
#define F_CIRCLE_NE 1463
#define HeapTupleHeaderSetMovedPartitions(tup) ItemPointerSet(&(tup)->t_ctid, MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define IPV6_HDRINCL 36
#define F_XID_AGE 1181
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define SerializableXactHashLock (&MainLWLockArray[28].lock)
#define MAXDATEFIELDS 25
#define ERRCODE_TRANSACTION_RESOLUTION_UNKNOWN MAKE_SQLSTATE('0','8','0','0','7')
#define F_TSVECTOR_EQ 3618
#define F_ARRAY_REPLACE 3168
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define INDEX_VAR 65002
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define ACL_N_SIZE(N) (ARR_OVERHEAD_NONULLS(1) + ((N) * sizeof(AclItem)))
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define F_TEXT_SMALLER 459
#define htobe64(x) __bswap_64 (x)
#define FPE_FLTRES FPE_FLTRES
#define F_SMGRNE 763
#define F_TSVECTOR_GE 3620
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define F_TSVECTOR_GT 3621
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define DTK_WEEK 22
#define INT_FAST8_MIN (-128)
#define _UNISTD_H 1
#define F_PG_STATISTICS_OBJ_IS_VISIBLE 3403
#define RelFileNodeBackendIsTemp(rnode) ((rnode).backend != InvalidBackendId)
#define ERRCODE_SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','4')
#define F_TIMETZTYPMODOUT 2912
#define F_INET_TO_CIDR 1715
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define XLOGREADER_H 
#define HeapTupleClearHeapOnly(tuple) HeapTupleHeaderClearHeapOnly((tuple)->t_data)
#define F_BE_LO_IMPORT_WITH_OID 767
#define F_JSON_POPULATE_RECORD 3960
#define __UID_T_TYPE __U32_TYPE
#define HAVE_MEMMOVE 1
#define _POSIX_READER_WRITER_LOCKS 200809L
#define __AARCH64_CMODEL_SMALL__ 1
#define _POSIX_AIO_MAX 1
#define OffsetNumberIsValid(offsetNumber) ((bool) ((offsetNumber != InvalidOffsetNumber) && (offsetNumber <= MaxOffsetNumber)))
#define SO_WIFI_STATUS 41
#define HAVE_LDAP_INITIALIZE 1
#define F_PG_LOGICAL_SLOT_GET_BINARY_CHANGES 3783
#define F_RECORD_RECV 2402
#define F_GTSVECTOR_CONSISTENT_OLDSIG 3790
#define NON_EXEC_STATIC static
#define STA_NANO 0x2000
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define ENOTEMPTY 39
#define F_PG_ROTATE_LOGFILE 4099
#define MinHeapTupleSize MAXALIGN(SizeofHeapTupleHeader)
#define PG_RETURN_EXPANDED_ARRAY(x) PG_RETURN_DATUM(EOHPGetRWDatum(&(x)->hdr))
#define GUC_UNIT_MEMORY 0xF000
#define ERRCODE_UNDEFINED_DATABASE MAKE_SQLSTATE('3','D','0','0','0')
#define F_LSEG_PERP 996
#define F_TSVECTOR_LE 3617
#define F_PG_STAT_GET_DB_TEMP_FILES 3150
#define F_WINDOW_CUME_DIST 3104
#define F_TSVECTOR_LT 3616
#define F_HAS_SCHEMA_PRIVILEGE_NAME_NAME 2268
#define F_JSON_EACH 3958
#define INVALID "invalid"
#define _SC_SHELL _SC_SHELL
#define F_JSON_IN 321
#define ShareUpdateExclusiveLock 4
#define att_isnull(ATT,BITS) (!((BITS)[(ATT) >> 3] & (1 << ((ATT) & 0x07))))
#define F_BOX_BELOW_EQ 116
#define SO_BPF_EXTENSIONS 48
#define F_CIRCLE_LEFT 1454
#define __FLT128_MIN_10_EXP__ (-4931)
#define F_PG_TRY_ADVISORY_XACT_LOCK_SHARED_INT4 3096
#define DatumGetByteaPCopy(X) ((bytea *) PG_DETOAST_DATUM_COPY(X))
#define F_TSVECTOR_NE 3619
#define F_BTINT8SORTSUPPORT 3131
#define F_JSON_BUILD_OBJECT 3200
#define ADJ_MAXERROR 0x0004
#define F_PRSD_END 3719
#define F_BOX_OVERLEFT 189
#define _POSIX_AIO_LISTIO_MAX 2
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define F_BOX_OUT 124
#define F_BTFLOAT48CMP 2194
#define SOL_KCM 281
#define INTSTYLE_SQL_STANDARD 2
#define ReplicationSlotControlLock (&MainLWLockArray[37].lock)
#define F_SHA256_BYTEA 3420
#define __WCHAR_MIN__ 0U
#define IPV6_MULTICAST_LOOP 19
#define YEAR 2
#define F_PG_GET_INDEXDEF_EXT 2507
#define VARATT_IS_SHORT(PTR) VARATT_IS_1B(PTR)
#define PG_UINT16_MAX (0xFFFF)
#define F_TS_RANK_TT 3706
#define F_INTERVAL_AVG 1844
#define SET_VARSIZE_1B(PTR,len) (((varattrib_1b *) (PTR))->va_header = (((uint8) (len)) << 1) | 0x01)
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define F_OIDOUT 1799
#define PG_GETARG_ACL_P_COPY(n) DatumGetAclPCopy(PG_GETARG_DATUM(n))
#define __osockaddr_defined 1
#define F_BTNAMECMP 359
#define F_TO_REGROLE 4093
#define _SYS_USER_H 1
#define F_DATAN2D 2734
#define DEF_PGPORT 5432
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _POSIX_LINK_MAX 8
#define F_ENUM_LARGER 3525
#define PointerIsValid(pointer) ((const void*)(pointer) != NULL)
#define ERRCODE_LOCATOR_EXCEPTION MAKE_SQLSTATE('0','F','0','0','0')
#define HAVE_LIBZ 1
#define AF_TIPC PF_TIPC
#define F_BOX_MUL 1424
#define HeapTupleHeaderClearMatch(tup) ( (tup)->t_infomask2 &= ~HEAP_TUPLE_HAS_MATCH )
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define LOCKTAG_LAST_TYPE LOCKTAG_DATABASE_FROZEN_IDS
#define F_TIDRECV 2438
#define AG_AG_CATALOG_H 
#define DatumGetPointer(X) ((Pointer) (X))
#define _DEFAULT_SOURCE 1
#define _LINUX_POSIX_TYPES_H 
#define ACL_CREATE (1<<9)
#define PointerGetDatum(X) ((Datum) (X))
#define _POSIX2_BC_STRING_MAX 1000
#define SYSCACHE_H 
#define AARR_NDIM(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.ndims : ARR_NDIM((ArrayType *) (a)))
#define AG_EDGE_COLNAME_PROPERTIES "properties"
#define F_PATH_ADD 1435
#define F_CHARRECV 2434
#define F_TIMETZ_SMALLER 1380
#define __LOCK_ALIGNMENT 
#define _XOPEN_REALTIME_THREADS 1
#define _POSIX_CHILD_MAX 25
#define F_JSONB_CONCAT 3301
#define ERRCODE_INVALID_AUTHORIZATION_SPECIFICATION MAKE_SQLSTATE('2','8','0','0','0')
#define F_SCALARGESEL 337
#define F_REGOPERRECV 2448
#define BITS_PER_BYTE 8
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define ENODATA 61
#define F_TEXT_LARGER 458
#define F_HASHVARLENA 456
#define IPV6_AUTHHDR 10
#define F_INT42EQ 159
#define ERRCODE_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('2','2','0','0','4')
#define MAX_RANDOM_VALUE PG_INT32_MAX
#define DTK_LATE 10
#define SET_VARSIZE_SHORT(PTR,len) SET_VARSIZE_1B(PTR, len)
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define FKCONSTR_ACTION_SETNULL 'n'
#define HAVE_TERMIOS_H 1
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define Anum_ag_graph_namespace 2
#define IPV6_RECVERR_RFC4884 31
#define HAVE_COMPUTED_GOTO 1
#define HeapTupleHeaderIsSpeculative(tup) ( (ItemPointerGetOffsetNumberNoCheck(&(tup)->t_ctid) == SpecTokenOffsetNumber) )
#define F_ANYARRAY_SEND 2503
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define F_TS_RANKCD_WTT 3708
#define F_UUID_HASH 2963
#define F_JSONB_ARRAY_ELEMENTS 3219
#define F_NUMERIC_UPLUS 1915
#define F_INT42GE 169
#define F_POINT_VERT 989
#define F_PATH_SUB_PT 1437
#define F_MACADDR_OUT 437
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define F_ANYELEMENT_IN 2312
#define F_NUMERIC_ABS 1704
#define CURSOR_OPT_BINARY 0x0001
#define _SYS_SELECT_H 1
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define F_INT4OUT 43
#define IPPROTO_IPIP IPPROTO_IPIP
#define ERRCODE_COLLATION_MISMATCH MAKE_SQLSTATE('4','2','P','2','1')
#define HAVE_STDINT_H 1
#define F_INT24LT 160
#define F_CURRENT_SCHEMAS 1403
#define F_OIDTOI8 1288
#define NUM_SPINLOCK_SEMAPHORES 128
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define SCOPE_DELIMITER '%'
#define DHOUR "hour"
#define __jmp_buf_tag_defined 1
#define __LC_TELEPHONE 10
#define F_PG_NDISTINCT_RECV 3357
#define F_TS_LEXIZE 3723
#define SIGURG 23
#define F_FLOAT8LARGER 223
#define F_WINDOW_LAG_WITH_OFFSET 3107
#define IPPROTO_PIM IPPROTO_PIM
#define F_RI_FKEY_CASCADE_DEL 1646
#define F_PG_STAT_GET_DB_DEADLOCKS 3152
#define HAVE_INTTYPES_H 1
#define F_INT8INC_FLOAT8_FLOAT8 2805
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define F_SPG_RANGE_QUAD_CONFIG 3469
#define PG_PRINTF_ATTRIBUTE gnu_printf
#define ERRCODE_DISK_FULL MAKE_SQLSTATE('5','3','1','0','0')
#define EINTR 4
#define F_BE_LO_UNLINK 964
#define F_BE_LO_IMPORT 764
#define UInt16GetDatum(X) ((Datum) (X))
#define _IO_EOF_SEEN 0x0010
#define DEBUG1 14
#define DEBUG2 13
#define DEBUG3 12
#define DEBUG4 11
#define F_BITGE 1592
#define F_BITGT 1593
#define F_RANGE_RECV 3836
#define SO_LINGER 13
#define F_INT42LE 167
#define Anum_pg_class_relfilenode 7
#define PG_INT64_MIN (-INT64CONST(0x7FFFFFFFFFFFFFFF) - 1)
#define F_INT42LT 161
#define __FLT32_IS_IEC_60559__ 2
#define F_UPPER 871
#define POLL_PRI POLL_PRI
#define F_ABSTIMESEND 2463
#define F_INT42MI 183
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define SECS_PER_YEAR (36525 * 864)
#define ILL_ILLADR ILL_ILLADR
#define F_RI_FKEY_RESTRICT_UPD 1649
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC PF_UNSPEC
#define F_FLOAT8_VAR_SAMP 1831
#define SIGQUIT 3
#define F_TSQUERY_EQ 3664
#define F_ARRAY_NDIMS 748
#define MAXTZLEN 10
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define PF_CAIF 37
#define RELPERSISTENCE_TEMP 't'
#define PACKAGE_NAME "PostgreSQL"
#define JULIAN_MAXYEAR (5874898)
#define F_PG_CURRENT_LOGFILE 3800
#define EAI_IDN_ENCODE -105
#define ereport_domain(elevel,domain,rest) do { if (errstart(elevel, __FILE__, __LINE__, PG_FUNCNAME_MACRO, domain)) errfinish rest; if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define F_BTTIDCMP 2794
#define F_TSQUERY_GE 3666
#define F_JSON_TYPEOF 3968
#define F_TSQUERY_GT 3667
#define F_INT42PL 179
#define XLR_BLOCK_ID_ORIGIN 253
#define F_BITLE 1594
#define RTSIG_MAX 32
#define F_I4TOD 316
#define F_I4TOF 318
#define F_BITLT 1595
#define AGTYPE_CONTAINER_SIZE(agtc) ((agtc)->header & AGT_CMASK)
#define _STDDEF_H 
#define EAI_FAMILY -6
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define F_SPG_BOX_QUAD_PICKSPLIT 5014
#define F_INET_SPG_CHOOSE 3796
#define F_TS_HEADLINE_JSONB_OPT 4203
#define AF_BRIDGE PF_BRIDGE
#define F_INT24DIV 172
#define F_JSON_OBJECT 3202
#define BtreeVacuumLock (&MainLWLockArray[20].lock)
#define IPV6_RECVPATHMTU 60
#define F_PATH_N_LE 985
#define F_DOMAIN_IN 2597
#define pg_memory_barrier_impl() __atomic_thread_fence(__ATOMIC_SEQ_CST)
#define F_BPCHAR_PATTERN_GE 2177
#define F_BITNE 1582
#define F_PATH_N_LT 982
#define _SYS_UCONTEXT_H 1
#define F_BPCHAR_PATTERN_GT 2178
#define NameGetDatum(X) CStringGetDatum(NameStr(*(X)))
#define F_PG_RELATION_IS_UPDATABLE 3842
#define DTK_ZULU 16
#define IP_MULTICAST_LOOP 34
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define F_PG_STAT_GET_CHECKPOINT_WRITE_TIME 3160
#define _LINUX_CLOSE_RANGE_H 
#define _POSIX2_RE_DUP_MAX 255
#define F_BITCAT 1679
#define SOCK_PACKET SOCK_PACKET
#define F_TSQUERY_LE 3663
#define AGTE_OFFLENFLD(agte_) ((agte_)&AGTENTRY_OFFLENMASK)
#define F_FLOAT4EQ 287
#define F_PG_STAT_GET_ARCHIVER 3195
#define F_HASHVARLENAEXTENDED 772
#define F_BYTEASETBIT 724
#define _ENDIAN_H 1
#define F_PG_STAT_GET_DB_XACT_COMMIT 1942
#define AGTYPE_CONTAINER_IS_BINARY(agtc) (((agtc)->header & AGT_FBINARY) != 0)
#define EOHPGetRODatum(eohptr) PointerGetDatum((eohptr)->eoh_ro_ptr)
#define IPPROTO_PUP IPPROTO_PUP
#define F_CSTRING_OUT 2293
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define ACL_TRUNCATE (1<<4)
#define Anum_pg_attribute_attisdropped 17
#define PG_GETARG_ARRAYTYPE_P(n) DatumGetArrayTypeP(PG_GETARG_DATUM(n))
#define F_FLOAT4_TO_CHAR 1775
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define AmBackgroundWriterProcess() (MyAuxProcType == BgWriterProcess)
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define F_JSONB_OBJECT_TWO_ARG 3264
#define F_TSQUERY_NE 3665
#define F_TIMESTAMP_NE_TIMESTAMPTZ 2525
#define __UQUAD_TYPE unsigned long int
#define F_TIMESTAMPTZ_SEND 2477
#define F_FLOAT4GE 292
#define DatumIsReadWriteExpandedObject(d,isnull,typlen) (((isnull) || (typlen) != -1) ? false : VARATT_IS_EXTERNAL_EXPANDED_RW(DatumGetPointer(d)))
#define F_BPCHAR_PATTERN_LE 2175
#define F_FLOAT8OUT 215
#define F_FLOAT4GT 291
#define F_BTTINTERVALCMP 381
#define F_BPCHAR_PATTERN_LT 2174
#define F_XMLEXISTS 2614
#define F_PG_LSN_RECV 3238
#define WARNING 19
#define XLOG_BLCKSZ 8192
#define F_NUMERIC_AVG_ACCUM 2858
#define F_FLOAT8_CORR 2817
#define OldSerXidLock (&MainLWLockArray[31].lock)
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define att_align_pointer(cur_offset,attalign,attlen,attptr) ( ((attlen) == -1 && VARATT_NOT_PAD_BYTE(attptr)) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define F_POSTGRESQL_FDW_VALIDATOR 2316
#define F_GENERATE_SERIES_STEP_NUMERIC 3259
#define F_PG_DDL_COMMAND_OUT 87
#define F_REGEXP_SPLIT_TO_ARRAY 2768
#define F_FLOAT4IN 200
#define F_HAS_DATABASE_PRIVILEGE_ID_NAME 2252
#define HAVE_APPEND_HISTORY 1
#define __FLT64X_MANT_DIG__ 113
#define F_SPG_KD_CHOOSE 4024
#define AG_EDGE_ACCESS_FUNCTION_PROPERTIES "age_properties"
#define ACL_USAGE_CHR 'U'
#define PARTITION_MAX_KEYS 32
#define att_addlength_pointer(cur_offset,attlen,attptr) ( ((attlen) > 0) ? ( (cur_offset) + (attlen) ) : (((attlen) == -1) ? ( (cur_offset) + VARSIZE_ANY(attptr) ) : ( AssertMacro((attlen) == -2), (cur_offset) + (strlen((char *) (attptr)) + 1) )) )
#define F_ANY_IN 2294
#define FOPEN_MAX 16
#define F_PG_STAT_GET_SUBSCRIPTION 6118
#define IPV6_2292PKTOPTIONS 6
#define LABEL_TYPE_VERTEX 'v'
#define INT_LEAST16_WIDTH 16
#define HAVE_UTIMES 1
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define F_TEXT_TO_ARRAY 394
#define _LFS64_STDIO 1
#define F_NUMERICTYPMODIN 2917
#define F_NUMERIC_EQ 1718
#define IPPROTO_RAW IPPROTO_RAW
#define FRAMEOPTION_START_OFFSET (FRAMEOPTION_START_OFFSET_PRECEDING | FRAMEOPTION_START_OFFSET_FOLLOWING)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define F_LIKESEL 1819
#define __SIZEOF_LONG_DOUBLE__ 16
#define SHAREDINVALSNAPSHOT_ID (-5)
#define F_FLOAT4LT 289
#define F_HASHINT2EXTENDED 441
#define F_ROW_SECURITY_ACTIVE_NAME 3299
#define __ino_t_defined 
#define InvalidBuffer 0
#define F_FLOAT84DIV 284
#define F_BYTEANLIKE 2006
#define F_INT4ABS 1251
#define _SC_ARG_MAX _SC_ARG_MAX
#define isupper(c) __isctype((c), _ISupper)
#define F_FLOAT4MI 205
#define XACT_COMPLETION_FORCE_SYNC_COMMIT (1U << 31)
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define F_PG_STAT_GET_FUNCTION_SELF_TIME 2980
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define F_BTFLOAT4SORTSUPPORT 3132
#define F_TIMESTAMPTZ_SCALE 1967
#define DT_BLK DT_BLK
#define F_NETWORK_OVERLAP 3551
#define F_FLOAT4NE 288
#define F_JSON_OBJECT_FIELD_TEXT 3948
#define HAVE_SNPRINTF 1
#define SEEK_CUR 1
#define EAI_FAIL -4
#define GUC_DISALLOW_IN_AUTO_FILE 0x0800
#define __STRING(x) #x
#define F_PG_NDISTINCT_IN 3355
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define AGT_ROOT_IS_SCALAR(agtp_) ((*(uint32 *)VARDATA(agtp_) & AGT_FSCALAR) != 0)
#define list_make3_int(x1,x2,x3) lcons_int(x1, list_make2_int(x2, x3))
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define F_PG_STAT_GET_DB_CONFLICT_TABLESPACE 3065
#define F_CASHLARGER 898
#define F_PG_STAT_FILE 3307
#define _POSIX_CHOWN_RESTRICTED 0
#define HEAP_COMBOCID 0x0020
#define F_AREAJOINSEL 140
#define F_LSEG_CONSTRUCT 993
#define F_BITCMP 1596
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define HAVE_WORKING_LINK 1
#define SHMEM_H 
#define relpathperm(rnode,forknum) relpathbackend(rnode, InvalidBackendId, forknum)
#define __FLT16_MAX_10_EXP__ 4
#define __GNUC_STDC_INLINE__ 1
#define F_HAS_SERVER_PRIVILEGE_NAME 3010
#define HAVE__BUILTIN_OP_OVERFLOW 1
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define Int32GetDatum(X) ((Datum) (X))
#define Anum_pg_class_relam 6
#define MOD_FREQUENCY ADJ_FREQUENCY
#define list_nth_node(type,list,n) castNode(type, list_nth(list, n))
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define FPE_FLTDIV FPE_FLTDIV
#define C_H 
#define F_INTERVAL_LARGER 1198
#define RELKIND_INDEX 'i'
#define INT32_WIDTH 32
#define NI_NUMERICHOST 1
#define F_CURRTID_BYRELOID 1293
#define F_GIST_POINT_CONSISTENT 2179
#define dummyret void
#define Anum_pg_class_relhasindex 13
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define IPV6_PMTUDISC_OMIT 5
#define __USE_LARGEFILE 1
#define MSG_FASTOPEN MSG_FASTOPEN
#define F_ARRAYCONTSEL 3817
#define __exctype(name) extern int name (int) __THROW
#define F_BYTEA_STRING_AGG_TRANSFN 3543
#define __USE_XOPEN 1
#define F_BITSHIFTLEFT 1677
#define HeapTupleHeaderGetSpeculativeToken(tup) ( AssertMacro(HeapTupleHeaderIsSpeculative(tup)), ItemPointerGetBlockNumber(&(tup)->t_ctid) )
#define isspace(c) __isctype((c), _ISspace)
#define stdin stdin
#define F_TSQUERYRECV 3641
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define F_HAS_LANGUAGE_PRIVILEGE_ID 2267
#define ERRCODE_INVALID_TABLESAMPLE_ARGUMENT MAKE_SQLSTATE('2','2','0','2','H')
#define HAVE_INT_TIMEZONE 1
#define __FLT_MANT_DIG__ 24
#define F_TIMESTAMPTZ_EQ_TIMESTAMP 2529
#define F_NUMERIC_SQRT 1730
#define F_FLOAT4UM 206
#define F_FLOAT4UP 1913
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define _POSIX_PATH_MAX 256
#define GetSysCacheHashValue1(cacheId,key1) GetSysCacheHashValue(cacheId, key1, 0, 0, 0)
#define GetSysCacheHashValue2(cacheId,key1,key2) GetSysCacheHashValue(cacheId, key1, key2, 0, 0)
#define F_ENUM_SEND 3533
#define GetSysCacheHashValue4(cacheId,key1,key2,key3,key4) GetSysCacheHashValue(cacheId, key1, key2, key3, key4)
#define VARTAG_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_tag)
#define _ISOC11_SOURCE 1
#define InitTupleHashIterator(htable,iter) tuplehash_start_iterate(htable->hashtab, iter)
#define F_PG_REPLICATION_ORIGIN_SESSION_SETUP 6006
#define F_REPLACE_TEXT 2087
#define F_PG_READ_FILE_V2 3293
#define HeapTupleHeaderXminFrozen(tup) ( ((tup)->t_infomask & (HEAP_XMIN_FROZEN)) == HEAP_XMIN_FROZEN )
#define PGUNSIXBIT(val) (((val) & 0x3F) + '0')
#define F_PG_NUM_NONNULLS 440
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define __INT_FAST16_TYPE__ long int
#define F_GET_CURRENT_TS_CONFIG 3759
#define ScanTupleHashTable(htable,iter) tuplehash_iterate(htable->hashtab, iter)
#define SearchSysCacheCopy1(cacheId,key1) SearchSysCacheCopy(cacheId, key1, 0, 0, 0)
#define SearchSysCacheCopy2(cacheId,key1,key2) SearchSysCacheCopy(cacheId, key1, key2, 0, 0)
#define SearchSysCacheCopy3(cacheId,key1,key2,key3) SearchSysCacheCopy(cacheId, key1, key2, key3, 0)
#define SearchSysCacheList1(cacheId,key1) SearchSysCacheList(cacheId, 1, key1, 0, 0)
#define SearchSysCacheList2(cacheId,key1,key2) SearchSysCacheList(cacheId, 2, key1, key2, 0)
#define SearchSysCacheList3(cacheId,key1,key2,key3) SearchSysCacheList(cacheId, 3, key1, key2, key3)
#define ERRCODE_BAD_COPY_FILE_FORMAT MAKE_SQLSTATE('2','2','P','0','4')
#define list_make1_int(x1) lcons_int(x1, NIL)
#define F_MACADDR_AND 3145
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define _WCHAR_T_DEFINED_ 
#define isalpha(c) __isctype((c), _ISalpha)
#define ECHILD 10
#define F_ARRAY_FILL 1193
#define F_INT4AND 1898
#define F_PG_HAS_ROLE_ID_ID 2708
#define TYPEALIGN_DOWN(ALIGNVAL,LEN) (((uintptr_t) (LEN)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define F_JSONB_ARRAY_ELEMENT_TEXT 3216
#define MSG_TRYHARD MSG_DONTROUTE
#define F_PG_LS_LOGDIR 3353
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define F_TINTERVALNE 785
#define F_BITTOINT8 2076
#define FirstNormalObjectId 16384
#define __stub_setlogin 
#define PG_GETARG_HEAPTUPLEHEADER(n) DatumGetHeapTupleHeader(PG_GETARG_DATUM(n))
#define _POSIX_SPORADIC_SERVER -1
#define TransactionIdIsValid(xid) ((xid) != InvalidTransactionId)
#define F_RANGE_OVERRIGHT 3866
#define INSTR_TIME_H 
#define Anum_pg_class_relhasrules 20
#define F_INT4_MUL_CASH 862
#define Natts_pg_attribute 24
#define F_PG_STAT_GET_DB_TEMP_BYTES 3151
#define F_RELTIMEEQ 257
#define F_CIRCLE_POLY 1475
#define true 1
#define SA_RESETHAND 0x80000000
#define ERRCODE_WARNING_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('0','1','0','0','4')
#define F_CASH_RECV 2492
#define __S32_TYPE int
#define label_id_is_valid(id) (id >= LABEL_ID_MIN && id <= LABEL_ID_MAX)
#define F_TEXT_NAME 407
#define RTOverLeftStrategyNumber 2
#define LOCK_WRITE 128
#define F_FLOAT8ABS 221
#define AG_AG_NAMESPACE_H 
#define VARATT_IS_COMPRESSED(PTR) VARATT_IS_4B_C(PTR)
#define HEAP_HASOID 0x0008
#define __toascii_l(c,l) ((l), __toascii (c))
#define F_RELTIMEGT 260
#define HeapTupleHeaderHasMatch(tup) ( ((tup)->t_infomask2 & HEAP_TUPLE_HAS_MATCH) != 0 )
#define F_PG_CONVERT_FROM 1714
#define _POSIX_DELAYTIMER_MAX 32
#define PTHREAD_KEYS_MAX 1024
#define F_JSONB_EQ 4043
#define AGGSPLITOP_COMBINE 0x01
#define PageClearAllVisible(page) (((PageHeader) (page))->pd_flags &= ~PD_ALL_VISIBLE)
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define PDP_ENDIAN __PDP_ENDIAN
#define F_PG_CONFIG 3400
#define ERRCODE_STRING_DATA_LENGTH_MISMATCH MAKE_SQLSTATE('2','2','0','2','6')
#define F_ANYRANGE_IN 3832
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define F_SPLIT_TEXT 2088
#define F_RELTIMEIN 242
#define WALWriteLock (&MainLWLockArray[8].lock)
#define SIZEOF_DATUM SIZEOF_VOID_P
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define F_JSONB_GE 4042
#define F_CASH_CMP 377
#define AGTYPEARRAYOID get_AGTYPEARRAYOID()
#define F_JSONB_GT 4040
#define IPPROTO_RSVP IPPROTO_RSVP
#define F_NAMEICLIKE 1635
#define HAVE_HISTORY_TRUNCATE_FILE 1
#define F_ADD_SEALS 1033
#define _PTRDIFF_T_DECLARED 
#define F_PRSD_NEXTTOKEN 3718
#define XACT_XINFO_HAS_DBINFO (1U << 0)
#define IP_PMTUDISC_PROBE 3
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __glibc_objsize(__o) __bos (__o)
#define F_BITTYPMODIN 2919
#define F_INET_SAME_FAMILY 4071
#define F_JSONB_IN 3806
#define dsa_pointer_atomic_write pg_atomic_write_u64
#define STA_PLL 0x0001
#define ERRCODE_E_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('3','8','0','0','3')
#define __FLT32_HAS_QUIET_NAN__ 1
#define ag_label_seq_name_graph_index_id() ag_relation_id("ag_label_seq_name_graph_index", "index")
#define MCAST_EXCLUDE 0
#define F_JSONB_EXTRACT_PATH 3217
#define F_RELTIMELT 259
#define _POSIX_MEMLOCK_RANGE 200809L
#define F_PERCENTILE_CONT_INTERVAL_MULTI_FINAL 3983
#define F_HASHOID 453
#define IPPROTO_AH IPPROTO_AH
#define F_INT8_NUMERIC 1781
#define TrapMacro(condition,errorType) (true)
#define F_GRAPHIDEQ F_INT8EQ
#define F_CR_CIRCLE 1473
#define Int64GetDatum(X) ((Datum) (X))
#define ERRCODE_LOCK_FILE_EXISTS MAKE_SQLSTATE('F','0','0','0','1')
#define REPLICA_IDENTITY_NOTHING 'n'
#define _XOPEN_SOURCE_EXTENDED 1
#define XACT_XINFO_HAS_TWOPHASE (1U << 4)
#define AGT_GIN_FLAG_BOOL 0x03
#define XACT_FLAGS_ACQUIREDACCESSEXCLUSIVELOCK (1U << 1)
#define F_RELTIMENE 258
#define F_PG_PREPARED_STATEMENT 2510
#define F_HAS_SERVER_PRIVILEGE_NAME_NAME 3006
#define ItemIdIsDead(itemId) ((itemId)->lp_flags == LP_DEAD)
#define F_JSONB_LE 4041
#define F_TEXTOVERLAY 1404
#define IPPROTO_ICMP IPPROTO_ICMP
#define BITMAPSET_H 
#define F_JSONB_LT 4039
#define F_TIMESTAMP_EQ_TIMESTAMPTZ 2522
#define DatumGetAclPCopy(X) ((Acl *) PG_DETOAST_DATUM_COPY(X))
#define EADDRNOTAVAIL 99
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define SK_UNARY 0x0002
#define PF_UNSPEC 0
#define F_BYTEA_SORTSUPPORT 3331
#define BKI_FORCE_NOT_NULL 
#define BoolGetDatum(X) ((Datum) ((X) ? 1 : 0))
#define F_INT8_AVG 1964
#define F_TSVECTOR_STRIP 3623
#define F_JSON_ARRAY_ELEMENT_TEXT 3950
#define AI_NUMERICSERV 0x0400
#define SO_PASSSEC 34
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define F_TIMESTAMPTZTYPMODIN 2907
#define F_JSONB_NE 4038
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define F_JSON_OUT 322
#define AGT_HEADER_INTEGER 0x00000000
#define PF_MCTP 45
#define HeapTupleHeaderSetCmax(tup,cid,iscombo) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); if (iscombo) (tup)->t_infomask |= HEAP_COMBOCID; else (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define F_NUMERIC_SUB 1725
#define F_NUMERIC_SUM 3178
#define F_JSONB_EXISTS 4047
#define F_NETWORK_LARGER 3562
#define USE_FLOAT8_BYVAL 1
#define PF_X25 9
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define DatumGetByteaPSlice(X,m,n) ((bytea *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define __GXX_ABI_VERSION 1016
#define ERRCODE_HELD_CURSOR_REQUIRES_SAME_ISOLATION_LEVEL MAKE_SQLSTATE('2','5','0','0','8')
#define _POSIX_THREAD_THREADS_MAX 64
#define _SC_PAGESIZE _SC_PAGESIZE
#define PG_GETARG_BPCHAR_PP(n) DatumGetBpCharPP(PG_GETARG_DATUM(n))
#define F_PG_STAT_GET_WAL_RECEIVER 3317
#define RELKIND_VIEW 'v'
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define SIZEOF_VOID_P 8
#define PF_BRIDGE 7
#define IP_PMTUDISC_DONT 0
#define ReleaseTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) DecrTupleDescRefCount(tupdesc); } while (0)
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define F_PG_TS_CONFIG_IS_VISIBLE 3758
#define AsyncCtlLock (&MainLWLockArray[26].lock)
#define F_INTERVAL_TO_CHAR 1768
#define DEFAULT_EVENT_SOURCE "PostgreSQL"
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define _POSIX_SHELL 1
#define WNOHANG 1
#define F_GIST_POLY_CONSISTENT 2585
#define MAX_INTERVAL_PRECISION 6
#define DEF_PGPORT_STR "5432"
#define PF_IPX 4
#define F_PG_STAT_GET_DB_XACT_ROLLBACK 1943
#define F_PATH_ADD_PT 1436
#define ESR_MAGIC 0x45535201
#define ERRCODE_UNDEFINED_TABLE MAKE_SQLSTATE('4','2','P','0','1')
#define ENOCSI 50
#define _SC_WORD_BIT _SC_WORD_BIT
#define palloc0_array(type,count) ((type *) palloc0(sizeof(type) * (count)))
#define F_GETFD 1
#define _POSIX_CLOCKRES_MIN 20000000
#define DatumGetVarCharPP(X) ((VarChar *) PG_DETOAST_DATUM_PACKED(X))
#define F_GETFL 3
#define F_JSONB_CONTAINED 4050
#define F_TINTERVALOUT 247
#define ShareRowExclusiveLock 6
#define F_REGOPERIN 2214
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define F_REGEXP_MATCHES_NO_FLAGS 2763
#define F_BTINT82CMP 2193
#define EOH_HEADER_MAGIC (-1)
#define F_INT82NE 1857
#define HTUP_DETAILS_H 
#define F_BE_LO_CLOSE 953
#define InstrCountFiltered1(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered1 += (delta); } while(0)
#define BKPIMAGE_IS_COMPRESSED 0x02
#define EADDRINUSE 98
#define F_INT2DIV 153
#define IPPROTO_MH IPPROTO_MH
#define F_MACADDR_TRUNC 753
#define PG_HAVE_ATOMIC_FLAG_SUPPORT 
#define HeapTupleHeaderSetCmin(tup,cid) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define HAVE_X509_GET_SIGNATURE_NID 1
#define INSTR_TIME_ADD(x,y) do { (x).tv_sec += (y).tv_sec; (x).tv_nsec += (y).tv_nsec; while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define F_MAKE_TIME 3847
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define __WCOREFLAG 0x80
#define F_RTRIM 876
#define F_VARBITTYPMODIN 2902
#define F_UUID_HASH_EXTENDED 3412
#define F_ULOCK 0
#define ERRCODE_DUPLICATE_SCHEMA MAKE_SQLSTATE('4','2','P','0','6')
#define F_FLOAT4LE 290
#define F_CIRCLE_OVERLEFT 1455
#define F_PG_INDEX_HAS_PROPERTY 637
#define F_GINARRAYTRICONSISTENT 3920
#define forboth(cell1,list1,cell2,list2) for ((cell1) = list_head(list1), (cell2) = list_head(list2); (cell1) != NULL && (cell2) != NULL; (cell1) = lnext(cell1), (cell2) = lnext(cell2))
#define TODAY "today"
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define F_SPG_RANGE_QUAD_PICKSPLIT 3471
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define MaxTransactionId ((TransactionId) 0xFFFFFFFF)
#define SCHAR_WIDTH 8
#define SO_CNX_ADVICE 53
#define F_PG_STAT_GET_XACT_BLOCKS_FETCHED 3044
#define F_BITTOINT4 1684
#define F_TO_REGPROC 3494
#define DATEORDER_DMY 1
#define F_PG_NDISTINCT_OUT 3356
#define XLOG_XACT_ASSIGNMENT 0x50
#define __SI_BAND_TYPE long int
#define F_DATE_SMALLER 1139
#define NL_ARGMAX _POSIX_ARG_MAX
#define INT_LEAST8_MAX (127)
#define F_TS_TOKEN_TYPE_BYID 3713
#define RelFileNodeEquals(node1,node2) ((node1).relNode == (node2).relNode && (node1).dbNode == (node2).dbNode && (node1).spcNode == (node2).spcNode)
#define F_PG_STOP_BACKUP_V2 2739
#define F_HAS_TABLESPACE_PRIVILEGE_NAME 2394
#define F_ICNLIKESEL 1815
#define FLOAT8_FITS_IN_INT32(num) ((num) >= (float8) PG_INT32_MIN && (num) < -((float8) PG_INT32_MIN))
#define AF_KCM PF_KCM
#define F_PG_STAT_GET_BLOCKS_FETCHED 1934
#define ItemIdGetRedirect(itemId) ((itemId)->lp_off)
#define si_pkey _sifields._sigfault._bounds._pkey
#define DAY 3
#define F_FLOAT8_REGR_ACCUM 2806
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define ItemPointerSetBlockNumber(pointer,blockNumber) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber) )
#define F_HAS_LANGUAGE_PRIVILEGE_NAME_ID 2263
#define F_NETWORK_SHOW 730
#define F_PG_STOP_BACKUP 2173
#define F_MAKE_TIMESTAMP 3461
#define F_PG_IDENTIFY_OBJECT 3839
#define AF_KEY PF_KEY
#define F_INET_SERVER_PORT 2199
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define F_PG_STAT_GET_DEAD_TUPLES 2879
#define LOG2_NUM_LOCK_PARTITIONS 4
#define FPE_FLTSUB FPE_FLTSUB
#define INT_FAST16_WIDTH __WORDSIZE
#define F_MUL_D_INTERVAL 1624
#define FLOAT8_FITS_IN_INT64(num) ((num) >= (float8) PG_INT64_MIN && (num) < -((float8) PG_INT64_MIN))
#define F_NETWORK_HOST 699
#define CHAR_BIT __CHAR_BIT__
#define __attribute_pure__ __attribute__ ((__pure__))
#define Anum_ag_label_seq_name 6
#define MinSizeOfXactCommit (offsetof(xl_xact_commit, xact_time) + sizeof(TimestampTz))
#define PG_VERSION_NUM 110018
#define F_NUMERIC_STDDEV_SAMP 1839
#define DatumGetTextPSlice(X,m,n) ((text *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define F_REGEXP_SPLIT_TO_TABLE 2766
#define __SLONGWORD_TYPE long int
#define INDEX_NULL_MASK 0x8000
#define F_CIRCLE_SUB_PT 1147
#define F_BYTEAPOS 2014
#define F_FLOAT48GE 304
#define HAVE_RL_FILENAME_COMPLETION_FUNCTION 1
#define CLOCK_BOOTTIME_ALARM 9
#define F_TEXT_PATTERN_GE 2163
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define F_TXID_SNAPSHOT_IN 2939
#define HAVE_IFADDRS_H 1
#define F_TEXT_PATTERN_GT 2164
#define IS_VALID_JULIAN(y,m,d) (((y) > JULIAN_MINYEAR || ((y) == JULIAN_MINYEAR && ((m) >= JULIAN_MINMONTH))) && ((y) < JULIAN_MAXYEAR || ((y) == JULIAN_MAXYEAR && ((m) < JULIAN_MAXMONTH))))
#define AGTE_ADVANCE_OFFSET(offset,agte) do { agtentry agte_ = (agte); if (AGTE_HAS_OFF(agte_)) (offset) = AGTE_OFFLENFLD(agte_); else (offset) += AGTE_OFFLENFLD(agte_); } while (0)
#define INT_LEAST8_MIN (-128)
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define F_BYTEASETBYTE 722
#define F_ARRAY_AGG_FINALFN 2334
#define gettext_noop(x) (x)
#define F_FLOAT8GT 297
#define AIO_PRIO_DELTA_MAX 20
#define F_DATABASE_TO_XMLSCHEMA 2937
#define SO_KEEPALIVE 9
#define ACCEPT_TYPE_ARG1 int
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define ACCEPT_TYPE_ARG3 socklen_t
#define F_FTOI2 238
#define F_FTOI4 319
#define F_FTOI8 653
#define AGTE_IS_CONTAINER(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_CONTAINER)
#define F_PG_TRY_ADVISORY_LOCK_INT8 2882
#define F_MD5_BYTEA 2321
#define F_PG_LISTENING_CHANNELS 3035
#define F_PG_STAT_GET_WAL_SENDERS 3099
#define F_PG_STAT_GET_DB_TUPLES_UPDATED 2761
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define MEMSET_LOOP_LIMIT 1024
#define F_MAKE_TIMESTAMPTZ_AT_TIMEZONE 3463
#define HeapTupleHeaderGetTypeId(tup) ( (tup)->t_choice.t_datum.datum_typeid )
#define SKEY_H 
#define F_FLOAT48LE 302
#define __USE_XOPEN2K8 1
#define closesocket close
#define F_INET_SPG_INNER_CONSISTENT 3798
#define F_TEXT_PATTERN_LE 2161
#define F_TEXT_PATTERN_LT 2160
#define islower_l(c,l) __islower_l ((c), (l))
#define ARR_NULLBITMAP(a) (ARR_HASNULL(a) ? (bits8 *) (((char *) (a)) + sizeof(ArrayType) + 2 * sizeof(int) * ARR_NDIM(a)) : (bits8 *) NULL)
#define AARR_ELEMTYPE(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.element_type : ARR_ELEMTYPE((ArrayType *) (a)))
#define LATE "infinity"
#define F_FLOAT48MI 282
#define LINE_MAX _POSIX2_LINE_MAX
#define NGROUPS_MAX 65536
#define DatumGetByteaPP(X) ((bytea *) PG_DETOAST_DATUM_PACKED(X))
#define AGGSPLITOP_DESERIALIZE 0x08
#define SIGVTALRM 26
#define F_FLOAT48NE 300
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
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
#define __USE_DYNAMIC_STACK_SIZE 1
#define F_ARRAY_TO_TSVECTOR 3327
#define CATALOG(name,oid,oidmacro) typedef struct CppConcat(FormData_,name)
#define F_DATERANGE_SUBDIFF 3925
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define __attribute_used__ __attribute__ ((__used__))
#define F_GTSVECTOR_PENALTY 3653
#define MultiXactMemberControlLock (&MainLWLockArray[15].lock)
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define F_NUMERIC_GE 1721
#define PG_HAVE_ATOMIC_WRITE_U64 
#define F_GENERATE_SERIES_TIMESTAMP 938
#define F_TABLE_TO_XML_AND_XMLSCHEMA 2929
#define F_NUMERIC_GT 1720
#define SI_ASYNCIO SI_ASYNCIO
#define F_RANGE_CONTAINED_BY 3861
#define __LC_ALL 6
#define ItemPointerIndicatesMovedPartitions(pointer) ( ItemPointerGetOffsetNumber(pointer) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(pointer) == MovedPartitionsBlockNumber )
#define ItemIdIsNormal(itemId) ((itemId)->lp_flags == LP_NORMAL)
#define XACT_FLAGS_ACCESSEDTEMPREL (1U << 0)
#define _SC_TRACE _SC_TRACE
#define F_FLOAT48PL 281
#define EBADFD 77
#define HAVE_LIBXSLT 1
#define F_TIMESTAMPTZ_TIMESTAMP 2027
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define DOY 15
#define SCM_TIMESTAMPING_OPT_STATS 54
#define Anum_pg_class_relpersistence 15
#define RELCACHE_H 
#define F_NUMERIC_IN 1701
#define MILLISECOND 13
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define F_TEXT_TO_ARRAY_NULL 376
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define FD_CLOEXEC 1
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define F_FLOAT48MUL 279
#define pg_spin_delay() pg_spin_delay_impl()
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define F_HASHFLOAT4EXTENDED 443
#define SIG_ATOMIC_MAX (2147483647)
#define CURSOR_OPT_SCROLL 0x0002
#define IPV6_TRANSPARENT 75
#define DOW 16
#define HeapTupleHasExternal(tuple) (((tuple)->t_data->t_infomask & HEAP_HASEXTERNAL) != 0)
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define F_PG_STAT_CLEAR_SNAPSHOT 2230
#define ERRCODE_WINDOWING_ERROR MAKE_SQLSTATE('4','2','P','2','0')
#define HeapTupleNoNulls(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASNULL))
#define F_NUMERIC_LE 1723
#define ag_graph_relation_id() ag_relation_id("ag_graph", "table")
#define F_INT2SHR 1897
#define F_NUMERIC_LN 1734
#define F_NUMERIC_LT 1722
#define INT32_MAX (2147483647)
#define F_PG_TS_PARSER_IS_VISIBLE 3756
#define F_DATETIMETZ_TIMESTAMPTZ 1297
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define F_INT8XOR 1906
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define F_NAMEGE 658
#define _PATH_PROTOCOLS "/etc/protocols"
#define HAVE_ATOMICS 1
#define isprint_l(c,l) __isprint_l ((c), (l))
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define DTZ 6
#define ACL_DELETE (1<<3)
#define F_NUMERIC_NE 1719
#define POSIX_FADV_SEQUENTIAL 2
#define F_HAS_SCHEMA_PRIVILEGE_ID_ID 2271
#define XidGenLock (&MainLWLockArray[3].lock)
#define AF_X25 PF_X25
#define F_TXID_SNAPSHOT_OUT 2940
#define F_JSON_STRIP_NULLS 3261
#define DOUBLEALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_DOUBLE, (LEN))
#define F_PG_CREATE_RESTORE_POINT 3098
#define __error_t_defined 1
#define __SCHAR_WIDTH__ 8
#define HAVE_SYS_EPOLL_H 1
#define ItemIdSetNormal(itemId,off,len) ( (itemId)->lp_flags = LP_NORMAL, (itemId)->lp_off = (off), (itemId)->lp_len = (len) )
#define SPIN_H 
#define le16toh(x) __uint16_identity (x)
#define ResetTupleHashIterator(htable,iter) InitTupleHashIterator(htable, iter)
#define __FLT32_MAX_10_EXP__ 38
#define DT_CHR DT_CHR
#define CLogTruncationLock (&MainLWLockArray[45].lock)
#define F_POLY_LEFT 341
#define F_PG_SAFE_SNAPSHOT_BLOCKING_PIDS 3376
#define F_INTERVAL_JUSTIFY_HOURS 1175
#define F_POLY_CIRCLE 1474
#define F_TSQUERY_NOT 3671
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define F_PG_STAT_GET_PROGRESS_INFO 3318
#define __INT_FAST32_TYPE__ long int
#define F_ANYENUM_OUT 3505
#define F_NUMERIC_ACCUM 1833
#define PG_HAVE_ATOMIC_TEST_SET_FLAG 
#define RELTRIGGER_H 
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define F_MAKE_DATE 3846
#define SIG_DFL ((__sighandler_t) 0)
#define F_HASHINET 422
#define SIG_ATOMIC_MIN (-2147483647-1)
#define F_PG_PREPARED_XACT 1065
#define F_BTFLOAT8CMP 355
#define ERRCODE_CASE_NOT_FOUND MAKE_SQLSTATE('2','0','0','0','0')
#define F_TIME_PART 1385
#define TTY_NAME_MAX 32
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define ERRCODE_TOO_MANY_COLUMNS MAKE_SQLSTATE('5','4','0','1','1')
#define F_PG_HAS_ROLE_NAME_NAME 2705
#define _POSIX_MAX_INPUT 255
#define F_RECORD_NE 2982
#define F_HASHFLOAT4 451
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define F_HASHFLOAT8 452
#define __FLT16_MANT_DIG__ 11
#define F_HAS_DATABASE_PRIVILEGE_NAME_NAME 2250
#define F_PG_GET_FUNCTION_IDENTITY_ARGUMENTS 2232
#define F_PRSD_LEXTYPE 3721
#define RTSuperEqualStrategyNumber 27
#define ETIME 62
#define F_BOX_AREA 975
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define ACL_NUM(ACL) (ARR_DIMS(ACL)[0])
#define BUF_H 
#define F_RANGE_GE 3873
#define F_SCHEMA_TO_XMLSCHEMA 2934
#define F_RANGE_GT 3874
#define F_EQSEL 101
#define F_NUMERIC_EXP 1732
#define F_CURRVAL_OID 1575
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define F_INET_SPG_LEAF_CONSISTENT 3799
#define PGINVALID_SOCKET (-1)
#define MultiXactOffsetControlLock (&MainLWLockArray[14].lock)
#define RelFileNodeBackendEquals(node1,node2) ((node1).node.relNode == (node2).node.relNode && (node1).node.dbNode == (node2).node.dbNode && (node1).backend == (node2).backend && (node1).node.spcNode == (node2).node.spcNode)
#define F_SETLK64 6
#define ARR_DATA_OFFSET(a) (ARR_HASNULL(a) ? (a)->dataoffset : ARR_OVERHEAD_NONULLS(ARR_NDIM(a)))
#define AGTENTRY_IS_STRING 0x00000000
#define F_PATH_POLY 1449
#define USECS_PER_MINUTE INT64CONST(60000000)
#define __FLT32X_MIN_EXP__ (-1021)
#define F_BRIN_SUMMARIZE_NEW_VALUES 3952
#define PG_RETURN_FLOAT4(x) return Float4GetDatum(x)
#define F_RANGE_IN 3834
#define F_POINT_LEFT 132
#define HeapTupleHeaderIndicatesMovedPartitions(tup) (ItemPointerGetOffsetNumber(&(tup)->t_ctid) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(&(tup)->t_ctid) == MovedPartitionsBlockNumber)
#define __ID_T_TYPE __U32_TYPE
#define _POSIX_THREAD_KEYS_MAX 128
#define ALIGNOF_INT 4
#define castNode(_type_,nodeptr) ((_type_ *) (nodeptr))
#define ERRCODE_WRONG_OBJECT_TYPE MAKE_SQLSTATE('4','2','8','0','9')
#define F_TLOCK 2
#define ERRCODE_GENERATED_ALWAYS MAKE_SQLSTATE('4','2','8','C','9')
#define SDIR_H 
#define _PGTIME_H 
#define BKPBLOCK_SAME_REL 0x80
#define F_GETLEASE 1025
#define MCXT_ALLOC_HUGE 0x01
#define SOL_RAW 255
#define F_TIMESTAMP_GT_TIMESTAMPTZ 2523
#define USECS_PER_HOUR INT64CONST(3600000000)
#define SO_REUSEPORT 15
#define F_DACOS 1601
#define PageIsPrunable(page,oldestxmin) ( AssertMacro(TransactionIdIsNormal(oldestxmin)), TransactionIdIsValid(((PageHeader) (page))->pd_prune_xid) && TransactionIdPrecedes(((PageHeader) (page))->pd_prune_xid, oldestxmin) )
#define DTERR_TZDISP_OVERFLOW (-5)
#define SA_NOMASK SA_NODEFER
#define F_MACADDR8_EQ 4113
#define F_RANGE_LE 3872
#define F_RANGE_LT 3871
#define F_PG_INDEXES_SIZE 2998
#define F_PG_STAT_GET_DB_CONFLICT_STARTUP_DEADLOCK 3069
#define F_BOX_CONTAIN_PT 193
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME 3004
#define F_JSONB_OBJECT_AGG_FINALFN 3269
#define F_PG_TS_TEMPLATE_IS_VISIBLE 3768
#define F_BYTEAOVERLAY_NO_LEN 752
#define RELKIND_COMPOSITE_TYPE 'c'
#define F_MACADDR8_GE 4117
#define AF_ATMSVC PF_ATMSVC
#define _SETJMP_H 1
#define DEFAULT_DYNAMIC_SHARED_MEMORY_TYPE DSM_IMPL_POSIX
#define F_RANGE_NE 3856
#define SOL_RDS 276
#define F_REGEXP_MATCH 3397
#define HEAP2_XACT_MASK 0xE000
#define ERRCODE_INDICATOR_OVERFLOW MAKE_SQLSTATE('2','2','0','2','2')
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define MSG_TRUNC MSG_TRUNC
#define _ISOC95_SOURCE 1
#define POSTGRES_EXT_H 
#define __f32(x) x ##f32
#define N_ACL_RIGHTS 12
#define F_DCOSD 2736
#define F_MACADDR8_IN 4110
#define Anum_ag_label_vertex_table_properties 2
#define F_OIDLARGER 1965
#define F_BYTEARECV 2412
#define F_PG_TABLESPACE_LOCATION 3778
#define IPV6_XFRM_POLICY 35
#define F_DCOTD 2738
#define __SI_ALIGNMENT 
#define __SIZEOF_PTRDIFF_T__ 8
#define __P(args) args
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define EAI_NODATA -5
#define OffsetNumberNext(offsetNumber) ((OffsetNumber) (1 + (offsetNumber)))
#define PageIsValid(page) PointerIsValid(page)
#define AF_IEEE802154 PF_IEEE802154
#define F_WINDOW_LEAD_WITH_OFFSET 3110
#define VARDATA_EXTERNAL(PTR) VARDATA_1B_E(PTR)
#define F_INT4_ACCUM 1835
#define F_NLIKESEL 1822
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define F_MACADDR8_LE 4115
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define F_MACADDR8_LT 4114
#define ERRCODE_INVALID_DATETIME_FORMAT MAKE_SQLSTATE('2','2','0','0','7')
#define DATE_END_JULIAN (2147483494)
#define F_PG_STAT_GET_XACT_TUPLES_RETURNED 3038
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32X_MANT_DIG__ 53
#define F_TIME_SCALE 1968
#define EUCLEAN 117
#define _POSIX_IPV6 200809L
#define F_JSONB_SEND 3803
#define PG_HAVE_ATOMIC_EXCHANGE_U32 
#define IP_MSFILTER 41
#define HASH_DIRSIZE 0x0004
#define DSM_IMPL_NONE 0
#define HAVE_GETPWUID_R 1
#define EAI_OVERFLOW -12
#define F_MACADDR8_NE 4118
#define ShareLock 5
#define _GCC_LIMITS_H_ 
#define F_PG_STAT_GET_LAST_AUTOVACUUM_TIME 2782
#define F_TSTZRANGE_SUBDIFF 3930
#define F_DSIGN 2310
#define PG_MODULE_MAGIC extern PGDLLEXPORT const Pg_magic_struct *PG_MAGIC_FUNCTION_NAME(void); const Pg_magic_struct * PG_MAGIC_FUNCTION_NAME(void) { static const Pg_magic_struct Pg_magic_data = PG_MODULE_MAGIC_DATA; return &Pg_magic_data; } extern int no_such_variable
#define FIELDNO_AGGSTATE_CURAGGCONTEXT 14
#define XACT_H 
#define BKI_FORCE_NULL 
#define F_JSONB_AGG_TRANSFN 3265
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define F_TIMESTAMP_HASH_EXTENDED 3411
#define F_MACADDR8_OR 4122
#define SET_LOCKTAG_DATABASE_FROZEN_IDS(locktag,dboid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_DATABASE_FROZEN_IDS, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define DEFAULT_XLOG_SEG_SIZE (16*1024*1024)
#define UINT_FAST32_MAX (18446744073709551615UL)
#define F_RANGE_UPPER 3849
#define F_HAS_COLUMN_PRIVILEGE_ID_ATTNUM 3023
#define ENODEV 19
#define F_TS_HEADLINE 3755
#define POLL_OUT POLL_OUT
#define GUC_check_errdetail pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errdetail_string = format_elog_string
#define F_DTOI2 237
#define __stub_revoke 
#define ACLITEM_SET_PRIVS(item,privs) ((item).ai_privs = ((item).ai_privs & ~((AclMode) 0xFFFF)) | ((AclMode) (privs) & 0xFFFF))
#define F_DTOI8 483
#define USE_LIBXSLT 1
#define __stub___compat_create_module 
#define RTPrefixStrategyNumber 28
#define F_GIN_CLEAN_PENDING_LIST 3789
#define EKEYEXPIRED 127
#define F_TIMESTAMP_PL_INTERVAL 2032
#define FIELDNO_TUPLETABLESLOT_SLOW 4
#define O_DIRECT __O_DIRECT
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define STATUS_WAITING (2)
#define __UINT_LEAST64_TYPE__ long unsigned int
#define XACT_READ_COMMITTED 1
#define HAVE_RAND_OPENSSL 1
#define MINSIGSTKSZ SIGSTKSZ
#define _TIME_H 1
#define SHAREDINVALSMGR_ID (-3)
#define F_PG_SEQUENCE_LAST_VALUE 4032
#define __FLT_HAS_QUIET_NAN__ 1
#define ERRCODE_INVALID_ROW_COUNT_IN_RESULT_OFFSET_CLAUSE MAKE_SQLSTATE('2','2','0','1','X')
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define STRINGINFO_H 
#define ERRCODE_FDW_TABLE_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','R')
#define GUC_IS_NAME 0x0200
#define F_INT2NOT 1895
#define CStringGetDatum(X) PointerGetDatum(X)
#define F_TO_HEX32 2089
#define AGTYPE_FBINARY_CONTAINER_TYPE(agtc) ((agtc)->header &AGT_FBINARY_MASK)
#define __FLT_HAS_INFINITY__ 1
#define MaxIndexTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(sizeof(IndexTupleData) + 1) + sizeof(ItemIdData))))
#define SO_SNDBUF 7
#define F_LSEG_DISTANCE 361
#define F_DSIND 2735
#define AG_GRAPHID_H 
#define innerPlan(node) (((Plan *)(node))->righttree)
#define F_BOX_INTERSECT 980
#define _BSD_PTRDIFF_T_ 
#define F_FLOAT8_STDDEV_POP 2513
#define SIGXFSZ 25
#define EXE ""
#define F_LINE_PERP 1413
#define SIGHUP 1
#define Anum_pg_attribute_attcacheoff 8
#define F_INTERVAL_HASH 1697
#define LP_DEAD 3
#define F_GENERATE_SERIES_NUMERIC 3260
#define IP_MULTICAST_ALL 49
#define F_FLOAT8_ACCUM 222
#define F_BPCHARRECV 2430
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define AF_IRDA PF_IRDA
#define __CHAR16_TYPE__ short unsigned int
#define F_VARBIT_SEND 2459
#define F_PG_STAT_GET_XACT_BLOCKS_HIT 3045
#define HAVE_BIO_GET_DATA 1
#define ObjectAddressSubSet(addr,class_id,object_id,object_sub_id) do { (addr).classId = (class_id); (addr).objectId = (object_id); (addr).objectSubId = (object_sub_id); } while (0)
#define AT_SYMLINK_NOFOLLOW 0x100
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define F_HAS_FUNCTION_PRIVILEGE_NAME 2260
#define PF_PPPOX 24
#define F_HASHINETEXTENDED 779
#define F_CIRCLE_DIAMETER 1469
#define type_is_array(typid) (get_element_type(typid) != InvalidOid)
#define __SIZE_WIDTH__ 64
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define AG_GET_ARG_AGTYPE_P(x) DATUM_GET_AGTYPE_P(PG_GETARG_DATUM(x))
#define F_BE_LO_OPEN 952
#define SO_TIMESTAMPNS_NEW 64
#define F_TEXTLIKE 850
#define F_LINE_VERTICAL 1414
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define DTK_JULIAN 31
#define RELKIND_MATVIEW 'm'
#define F_ANYRANGE_OUT 3833
#define F_PG_STAT_GET_BACKEND_PID 1937
#define PF_QIPCRTR 42
#define F_TEXT_REGCLASS 1079
#define F_INTERVAL_CMP 1315
#define HAVE_GSSAPI_GSSAPI_H 1
#define ACL_CONNECT_CHR 'c'
#define AG_VERTEX_ACCESS_FUNCTION_ID "age_id"
#define CheckpointLock (&MainLWLockArray[10].lock)
#define lthird_oid(l) lfirst_oid(lnext(lnext(list_head(l))))
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define S_LOCK(lock) (TAS(lock) ? s_lock((lock), __FILE__, __LINE__, PG_FUNCNAME_MACRO) : 0)
#define __STDC_VERSION__ 201710L
#define MemSet(start,val,len) do { void *_vstart = (void *) (start); int _val = (val); Size _len = (len); if ((((uintptr_t) _vstart) & LONG_ALIGN_MASK) == 0 && (_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0)
#define F_PG_STAT_GET_BACKEND_ACTIVITY_START 2094
#define lfirst_node(type,lc) castNode(type, lfirst(lc))
#define SEEK_HOLE 4
#define F_DSIN 1604
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define CLogControlLock (&MainLWLockArray[11].lock)
#define __ARM_ARCH 8
#define F_PG_TOTAL_RELATION_SIZE 2286
#define RM_MAX_ID (RM_NEXT_ID - 1)
#define F_CIRCLE_SEND 2491
#define AT_NO_AUTOMOUNT 0x800
#define PREDICATELOCK_MANAGER_LWLOCK_OFFSET (LOCK_MANAGER_LWLOCK_OFFSET + NUM_LOCK_PARTITIONS)
#define ERRCODE_CHECK_VIOLATION MAKE_SQLSTATE('2','3','5','1','4')
#define F_PG_SWITCH_WAL 2848
#define F_CASH_SEND 2493
#define IS_SPECIAL_VARNO(varno) ((varno) >= INNER_VAR)
#define PGDLLIMPORT 
#define F_CIRCLE_ADD_PT 1146
#define AttrNumberIsForUserDefinedAttr(attributeNumber) ((bool) ((attributeNumber) > 0))
#define _LINUX_LIMITS_H 
#define SIGSTOP 19
#define GUC_NO_SHOW_ALL 0x0004
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define F_PG_HAS_ROLE_NAME_ID 2706
#define CLOCK_MONOTONIC 1
#define F_EVENT_TRIGGER_IN 3594
#define F_JSONB_DELETE_IDX 3303
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define AARR_LBOUND(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.lbound : ARR_LBOUND((ArrayType *) (a)))
#define F_BTINT4SORTSUPPORT 3130
#define HAVE_ISINF 1
#define ERRCODE_EXCLUSION_VIOLATION MAKE_SQLSTATE('2','3','P','0','1')
#define F_PG_TABLE_IS_VISIBLE 2079
#define XLOG_XACT_OPMASK 0x70
#define Anum_pg_attribute_atthasdef 14
#define INTERVAL_MASK(b) (1 << (b))
#define EBADRQC 56
#define F_CIRCLE_CONTAINED 1458
#define F_XML_RECV 2898
#define LABEL_TYPE_EDGE 'e'
#define PERFORM_DELETION_INTERNAL 0x0001
#define USE_ARMV8_CRC32C_WITH_RUNTIME_CHECK 1
#define F_JSON_EACH_TEXT 3959
#define HAVE_LOCALE_T 1
#define INET6_ADDRSTRLEN 46
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define __KEY_T_TYPE __S32_TYPE
#define _DIRENT_HAVE_D_OFF 
#define F_INT2_ACCUM 1834
#define F_RECORD_EQ 2981
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define INTMAX_WIDTH 64
#define __F_SETSIG 10
#define ERRCODE_NO_ADDITIONAL_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','2','0','0','1')
#define F_TIME_SEND 2471
#define SEGV_PKUERR SEGV_PKUERR
#define S_IFSOCK __S_IFSOCK
#define NAMESPACE_H 
#define F_ENUM_CMP 3514
#define F_NUMRANGE_SUBDIFF 3924
#define F_PG_EXPORT_SNAPSHOT 3809
#define F_RECORD_GT 2984
#define PG_HAVE_ATOMIC_FETCH_OR_U32 
#define PG_GETARG_HEAPTUPLEHEADER_COPY(n) DatumGetHeapTupleHeaderCopy(PG_GETARG_DATUM(n))
#define F_SCHEMA_TO_XML 2933
#define false 0
#define IPV6_JOIN_GROUP 20
#define UINT_FAST32_WIDTH __WORDSIZE
#define F_TIMESTAMP_RECV 2474
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define F_SHLCK 8
#define BlockIdSet(blockId,blockNumber) ( AssertMacro(PointerIsValid(blockId)), (blockId)->bi_hi = (blockNumber) >> 16, (blockId)->bi_lo = (blockNumber) & 0xffff )
#define F_INT2VECTOROUT 41
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define F_GIST_CIRCLE_COMPRESS 2592
#define ERRCODE_UNDEFINED_FILE MAKE_SQLSTATE('5','8','P','0','1')
#define PG_HAVE_ATOMIC_U32_SUPPORT 
#define F_RECORD_IN 2290
#define SOL_RXRPC 272
#define F_BTINT48CMP 2188
#define INTERVAL_TYPMOD(p,r) ((((r) & INTERVAL_RANGE_MASK) << 16) | ((p) & INTERVAL_PRECISION_MASK))
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define DTK_ISOYEAR 36
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define __CLOCKID_T_TYPE __S32_TYPE
#define F_PG_REPLICATION_ORIGIN_DROP 6004
#define PG_HAVE_ATOMIC_FETCH_OR_U64 
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define F_OIDRECV 2418
#define INSTRUMENT_H 
#define F_HASHNAMEEXTENDED 447
#define ELIBEXEC 83
#define F_RECORD_LE 2985
#define F_RECORD_LT 2983
#define F_NUMERIC_SORTSUPPORT 3283
#define __INT_FAST64_WIDTH__ 64
#define F_DATE_NE_TIMESTAMPTZ 2356
#define SysCacheSize (USERMAPPINGUSERSERVER + 1)
#define __ARM_FEATURE_UNALIGNED 1
#define __SVE_VQ_MIN 1
#define ERRCODE_NONSTANDARD_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','P','0','6')
#define F_HAS_COLUMN_PRIVILEGE_NAME_ID_ATTNUM 3015
#define F_NETWORK_SUBEQ 928
#define TupIsNull(slot) ((slot) == NULL || (slot)->tts_isempty)
#define _BITS_UIO_LIM_H 1
#define F_HAS_DATABASE_PRIVILEGE_NAME_ID 2251
#define ALIGNOF_SHORT 2
#define YESTERDAY "yesterday"
#define STA_PPSFREQ 0x0002
#define F_INET_RECV 2496
#define _NETDB_H 1
#define __LITTLE_ENDIAN 1234
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define F_DSIMPLE_INIT 3725
#define EBADF 9
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define IS_AG_DEFAULT_LABEL(x) (IS_DEFAULT_LABEL_EDGE(x) || IS_DEFAULT_LABEL_VERTEX(x))
#define F_JSONB_BOOL 3556
#define F_TIMESTAMPTZ_LT_TIMESTAMP 2527
#define F_TXID_SNAPSHOT_XMIN 2945
#define F_NUMERIC_FAC 111
#define S_IXUSR __S_IEXEC
#define AmWalReceiverProcess() (MyAuxProcType == WalReceiverProcess)
#define BYTE_ORDER __BYTE_ORDER
#define ItemIdIsUsed(itemId) ((itemId)->lp_flags != LP_UNUSED)
#define F_LINE_PARALLEL 1412
#define PTRDIFF_WIDTH __WORDSIZE
#define ULLONG_WIDTH 64
#define AG_VERTEX_COLNAME_ID "id"
#define S_IWOTH (S_IWGRP >> 3)
#define XLogRecGetOrigin(decoder) ((decoder)->record_origin)
#define si_band _sifields._sigpoll.si_band
#define F_TO_DATE 1780
#define UINT8_MAX (255)
#define TIMESTAMP_NOEND(j) do {(j) = DT_NOEND;} while (0)
#define ERRCODE_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('2','2','0','0','1')
#define _BITS_SIGACTION_H 1
#define F_TS_HEADLINE_JSON_BYID_OPT 4205
#define DWEEK "week"
#define IPV6_RTHDR 57
#define MemSetAligned(start,val,len) do { long *_start = (long *) (start); int _val = (val); Size _len = (len); if ((_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_start, _val, _len); } while (0)
#define DTK_NOW 12
#define DMICROSEC "usecond"
#define F_JSON_STRING_TO_TSVECTOR_BYID 4212
#define ERRCODE_WARNING MAKE_SQLSTATE('0','1','0','0','0')
#define PF_ATMSVC 20
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define F_TINTERVALSTART 272
#define ITEMPTR_H 
#define __WNOTHREAD 0x20000000
#define AF_LLC PF_LLC
#define F_TIMESTAMP_GT_DATE 2367
#define F_TSVECTOR_TO_ARRAY 3326
#define HEAP_XMAX_BITS (HEAP_XMAX_COMMITTED | HEAP_XMAX_INVALID | HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK | HEAP_XMAX_LOCK_ONLY)
#define NumericGetDatum(X) PointerGetDatum(X)
#define F_ANYARRAY_IN 2296
#define CLOCK_PROCESS_CPUTIME_ID 2
#define DTK_DELTA 17
#define DTK_DATE 2
#define ENETUNREACH 101
#define EXDEV 18
#define va_start(v,l) __builtin_va_start(v,l)
#define UINT32_C(c) c ## U
#define F_NETWORK_MASKLEN 697
#define F_REGPROCOUT 45
#define F_TEXTSEND 2415
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define PG_RETURN_NULL() do { fcinfo->isnull = true; return (Datum) 0; } while (0)
#define F_PG_LSN_EQ 3233
#define ACL_DAT(ACL) ((AclItem *) ARR_DATA_PTR(ACL))
#define F_NUMERIC_MUL 1726
#define F_FLOAT8_REGR_R2 2812
#define HAVE_SETSID 1
#define F_PHRASETO_TSQUERY_BYID 5006
#define PLATFORM_DEFAULT_SYNC_METHOD SYNC_METHOD_FDATASYNC
#define F_ARRAY_PREPEND 379
#define F_TS_HEADLINE_JSONB 4204
#define F_REGROLERECV 4094
#define __WINT_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define F_DATE_EQ_TIMESTAMP 2340
#define SEM_VALUE_MAX (2147483647)
#define llast_oid(l) lfirst_oid(list_tail(l))
#define F_PG_LSN_GE 3234
#define F_POLY_NPOINTS 1445
#define ADJ_TIMECONST 0x0020
#define SOL_PACKET 263
#define F_PG_LSN_GT 3235
#define MOD_TAI ADJ_TAI
#define HAVE__BUILTIN_BSWAP32 1
#define SEQ_COL_LASTVAL 1
#define ITEMID_H 
#define HAVE_STRERROR_R 1
#define XLR_RMGR_INFO_MASK 0xF0
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define ERRCODE_UNDEFINED_PSTATEMENT MAKE_SQLSTATE('2','6','0','0','0')
#define F_INT2SHL 1896
#define __bitwise__ 
#define F_ROW_TO_JSON 3155
#define F_BTARRAYCMP 382
#define ENOSPC 28
#define ENOEXEC 8
#define S_UNLOCK(lock) __sync_lock_release(lock)
#define AM 0
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define F_GENERATE_SUBSCRIPTS_NODIR 1192
#define TOKMAXLEN 10
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define F_JSON_OBJECT_KEYS 3957
#define SO_RCVBUF 8
#define VARDATA_SHORT(PTR) VARDATA_1B(PTR)
#define BC 1
#define SK_ISNULL 0x0001
#define TransactionIdEquals(id1,id2) ((id1) == (id2))
#define PG_HAVE_ATOMIC_U64_SUPPORT 
#define HAVE__BUILTIN_BSWAP64 1
#define BUFFERALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_BUFFER, (LEN))
#define F_PATH_ISOPEN 1431
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define F_PG_STAT_GET_BGWRITER_MAXWRITTEN_CLEAN 2773
#define MaxHeapAttributeNumber 1600
#define PageSetFull(page) (((PageHeader) (page))->pd_flags |= PD_PAGE_FULL)
#define __LDBL_MAX_10_EXP__ 4932
#define HAVE__VA_ARGS 1
#define F_LSEG_RECV 2480
#define F_PG_LSN_LE 3232
#define ERRCODE_INVALID_CURSOR_NAME MAKE_SQLSTATE('3','4','0','0','0')
#define F_UUID_RECV 2961
#define F_PG_LSN_LT 3231
#define XACT_READ_UNCOMMITTED 0
#define ERRCODE_T_R_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('4','0','0','0','2')
#define F_BTINT42CMP 2191
#define EDOM 33
#define F_RELTIMEOUT 243
#define AGTE_IS_NUMERIC(agte_) (((agte_)&AGTENTRY_TYPEMASK) == AGTENTRY_IS_NUMERIC)
#define ENOSTR 60
#define F_PG_LSN_MI 3237
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define att_align_datum(cur_offset,attalign,attlen,attdatum) ( ((attlen) == -1 && VARATT_IS_SHORT(DatumGetPointer(attdatum))) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define F_NAMEICNLIKE 1636
#define AGT_FOBJECT 0x20000000
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define Float8GetDatumFast(X) Float8GetDatum(X)
#define ERRCODE_ASSERT_FAILURE MAKE_SQLSTATE('P','0','0','0','4')
#define F_PG_LSN_NE 3236
#define PG_GETARG_VARCHAR_P(n) DatumGetVarCharP(PG_GETARG_DATUM(n))
#define ESRCH 3
#define F_XMLVALIDATE 2897
#define F_FLOAT84GE 310
#define F_FLOAT84GT 309
#define EHOSTDOWN 112
#define F_FLOAT8_COMBINE 276
#define _LFS_LARGEFILE 1
#define InvalidBlockNumber ((BlockNumber) 0xFFFFFFFF)
#define F_TIME_CMP 1107
#define STA_CLK 0x8000
#define __wchar_t__ 
#define ERANGE 34
#define SEEK_END 2
#define OffsetNumberPrev(offsetNumber) ((OffsetNumber) (-1 + (offsetNumber)))
#define _POSIX2_LINE_MAX 2048
#define _ISOC99_SOURCE 1
#define F_PG_TYPE_IS_VISIBLE 2080
#define F_RECORD_OUT 2291
#define HEAP_ONLY_TUPLE 0x8000
#define ENFILE 23
#define F_MACADDR8_SEND 3447
#define F_PG_CONVERT_TO 1717
#define JULIAN_MAXDAY (3)
#define F_INTERVAL_GE 1166
#define F_INTERVAL_GT 1167
#define F_DTAND 2737
#define __S_ISUID 04000
#define __LC_NAME 8
#define F_ENUM_RANGE_ALL 3531
#define ACL_USAGE (1<<8)
#define MAXALIGN64(LEN) TYPEALIGN64(MAXIMUM_ALIGNOF, (LEN))
#define F_PG_RELATION_FILEPATH 3034
#define PageAddItem(page,item,size,offsetNumber,overwrite,is_heap) PageAddItemExtended(page, item, size, offsetNumber, ((overwrite) ? PAI_OVERWRITE : 0) | ((is_heap) ? PAI_IS_HEAP : 0))
#define be64toh(x) __bswap_64 (x)
#define ENOSYS 38
#define F_POINT_HORIZ 990
#define F_ACLINSERT 1035
#define SA_RESTART 0x10000000
#define F_INT8_AVG_ACCUM 2746
#define ERRCODE_SAVEPOINT_EXCEPTION MAKE_SQLSTATE('3','B','0','0','0')
#define MAXIMUM_ALIGNOF 8
#define F_TIMETZ_IZONE 2038
#define DT_DIR DT_DIR
#define F_RPAD 874
#define F_INTERVAL_IN 1160
#define F_HASHMACADDREXTENDED 778
#define FIELDNO_EXPRCONTEXT_SCANTUPLE 1
#define DCENTURY "century"
#define F_PG_GET_USERBYID 1642
#define _BITS_LOCALE_H 1
#define F_CSTRING_IN 2292
#define F_PG_GET_PUBLICATION_TABLES 6119
#define CENTURY 26
#define __DBL_HAS_INFINITY__ 1
#define va_arg(v,l) __builtin_va_arg(v,l)
#define ADJ_FREQUENCY 0x0002
#define F_FLOAT84MI 286
#define NODES_H 
#define _THREAD_SHARED_TYPES_H 1
#define F_BYTEAOCTETLEN 720
#define ERRCODE_GROUPING_ERROR MAKE_SQLSTATE('4','2','8','0','3')
#define __glibc_has_extension(ext) 0
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define __UINT32_C(c) c ## U
#define OidFunctionCall0(functionId) OidFunctionCall0Coll(functionId, InvalidOid)
#define OidFunctionCall1(functionId,arg1) OidFunctionCall1Coll(functionId, InvalidOid, arg1)
#define OidFunctionCall2(functionId,arg1,arg2) OidFunctionCall2Coll(functionId, InvalidOid, arg1, arg2)
#define OidFunctionCall3(functionId,arg1,arg2,arg3) OidFunctionCall3Coll(functionId, InvalidOid, arg1, arg2, arg3)
#define OidFunctionCall4(functionId,arg1,arg2,arg3,arg4) OidFunctionCall4Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4)
#define OidFunctionCall5(functionId,arg1,arg2,arg3,arg4,arg5) OidFunctionCall5Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define OidFunctionCall7(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7) OidFunctionCall7Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define OidFunctionCall8(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) OidFunctionCall8Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define OidFunctionCall9(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) OidFunctionCall9Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define F_FLOAT84NE 306
#define Trap(condition,errorType) ((void)true)
#define F_BTTEXTSORTSUPPORT 3255
#define AT_STATX_SYNC_TYPE 0x6000
#define ItemIdIsValid(itemId) PointerIsValid(itemId)
#define F_INTERVAL_LE 1165
#define ERRCODE_PROTOCOL_VIOLATION MAKE_SQLSTATE('0','8','P','0','1')
#define F_INTERVAL_LT 1164
#define ERRCODE_E_R_E_CONTAINING_SQL_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','1')
#define __FP_FAST_FMAF32x 1
#define TAS(lock) tas(lock)
#define HEAP_TUPLE_HAS_MATCH HEAP_ONLY_TUPLE
#define F_BPCHAR_LARGER 1063
#define __STDC_UTF_32__ 1
#define RTOldContainsStrategyNumber 13
#define ACL_GRANT_OPTION_FOR(privs) (((AclMode) (privs) & 0xFFFF) << 16)
#define F_TSVECTOR_DELETE_ARR 3323
#define IndexScanIsValid(scan) PointerIsValid(scan)
#define F_FLOAT84PL 285
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define PG_RETURN_TIMESTAMP(x) return TimestampGetDatum(x)
#define HEAP_HASEXTERNAL 0x0004
#define F_PG_CANCEL_BACKEND 2171
#define FATAL 21
#define F_PG_WAL_REPLAY_PAUSE 3071
#define F_SESSION_USER 746
#define F_INTERVAL_NE 1163
#define HAVE_DECL_FDATASYNC 1
#define F_INT48MI 1279
#define F_PG_STAT_RESET 2274
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define STA_PPSJITTER 0x0200
#define LOCKDEFS_H_ 
#define F_MACADDR8_NOT 4120
#define PageXLogRecPtrSet(ptr,lsn) ((ptr).xlogid = (uint32) ((lsn) >> 32), (ptr).xrecoff = (uint32) (lsn))
#define _PATH_HOSTS "/etc/hosts"
#define UTIME_OMIT ((1l << 30) - 2l)
#define F_TO_TSVECTOR_BYID 3745
#define F_PG_STAT_GET_XACT_FUNCTION_TOTAL_TIME 3047
#define INVALID_LABEL_ID 0
#define SPLICE_F_NONBLOCK 2
#define HEAP_XMIN_INVALID 0x0200
#define F_INET_GIST_UNION 3554
#define ADJ_MICRO 0x1000
#define F_BYTEACAT 2011
#define F_INTERVAL_PL 1169
#define F_MACADDR8TOMACADDR 4124
#define TimestampTzGetDatum(X) Int64GetDatum(X)
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define F_FMGR_C_VALIDATOR 2247
#define PD_PAGE_FULL 0x0002
#define MINIMAL_TUPLE_DATA_OFFSET offsetof(MinimalTupleData, t_infomask2)
#define HAVE_GETOPT_LONG 1
#define F_TEXTTOXML 2896
#define FRAMEOPTION_START_CURRENT_ROW 0x00200
#define F_ASCII 1620
#define InstrCountTuples2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->ntuples2 += (delta); } while (0)
#define ACLITEM_GET_RIGHTS(item) ((item).ai_privs)
#define SEQ_COL_LOG 2
#define F_INET_SPG_CONFIG 3795
#define Anum_pg_attribute_attoptions 22
#define SO_PEERGROUPS 59
#define _POSIX_V6_ILP32_OFFBIG -1
#define _SC_INT_MAX _SC_INT_MAX
#define DatumGetBool(X) ((bool) ((X) != 0))
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define F_BTINT28CMP 2192
#define IPV6_RTHDRDSTOPTS 55
#define F_SCALARLEJOINSEL 386
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define HEAP_INSERT_SPECULATIVE 0x0008
#define PG_ARGISNULL(n) (fcinfo->argnull[n])
#define SIOCGSTAMPNS_OLD 0x8907
#define TYPEALIGN(ALIGNVAL,LEN) (((uintptr_t) (LEN) + ((ALIGNVAL) - 1)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define F_LTRIM 875
#define MinSizeOfXactRelfilenodes offsetof(xl_xact_relfilenodes, xnodes)
#define F_TO_HEX64 2090
#define PG_DATA_CHECKSUM_VERSION 1
#define F_OIDEQ 184
#define __LC_CTYPE 0
#define F_FLOAT8_AVG 1830
#define F_PG_STAT_GET_DB_CONFLICT_SNAPSHOT 3067
#define F_CASH_DIV_INT2 867
#define F_CASH_DIV_INT4 865
#define F_CASH_DIV_INT8 3345
#define INTERVAL_PRECISION_MASK (0xFFFF)
#define SO_TIMESTAMP_NEW 63
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define sigcontext_struct sigcontext
#define F_REGDICTIONARYRECV 3773
#define F_INTERVAL_UM 1168
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define FIELDNO_FUNCTIONCALLINFODATA_ISNULL 4
#define ERRCODE_INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','4')
#define NodeSetTag(nodeptr,t) (((Node*)(nodeptr))->type = (t))
#define F_HAS_COLUMN_PRIVILEGE_NAME_ID_NAME 3014
#define F_MACADDR_CMP 836
#define F_BOOL_ALLTRUE 3498
#define SIG_ERR ((__sighandler_t) -1)
#define AI_NUMERICHOST 0x0004
#define F_OIDGE 1639
#define F_PG_COLLATION_FOR 3162
#define F_PG_STAT_GET_XACT_TUPLES_DELETED 3042
#define __INO_T_MATCHES_INO64_T 1
#define F_OIDGT 1638
#define EAI_AGAIN -3
#define F_BOOLOR_STATEFUNC 2516
#define MAX_TZDISP_HOUR 15
#define __GLIBC_USE_IEC_60559_EXT 1
#define FMGR_H 
#define F_HYPOTHETICAL_PERCENT_RANK_FINAL 3989
#define F_BE_LO_LSEEK 956
#define UINT_LEAST32_MAX (4294967295U)
#define F_VARBIT_IN 1579
#define F_OIDIN 1798
#define EMEDIUMTYPE 124
#define FLOAT8_FITS_IN_INT16(num) ((num) >= (float8) PG_INT16_MIN && (num) < -((float8) PG_INT16_MIN))
#define IPV6_HOPLIMIT 52
#define HAVE_DECL_STRNLEN 1
#define ERRCODE_INVALID_CURSOR_DEFINITION MAKE_SQLSTATE('4','2','P','1','1')
#define F_BPCHARTYPMODOUT 2914
#define __fsblkcnt_t_defined 
#define F_TIMESTAMP_MI_INTERVAL 2033
#define F_TINTERVALLENEQ 266
#define PG_CACHE_LINE_SIZE 128
#define F_PG_STAT_GET_TUPLES_DELETED 1933
#define __lldiv_t_defined 1
#define SIGILL 4
#define dgettext(domainname,msgid) dcgettext (domainname, msgid, LC_MESSAGES)
#define PG_HAVE_ATOMIC_FETCH_SUB_U32 
#define ENOBUFS 105
#define __time_t_defined 1
#define SECS_PER_DAY 86400
#define F_SPG_KD_CONFIG 4023
#define _SC_INT_MIN _SC_INT_MIN
#define F_OIDLE 717
#define F_WINDOW_ROW_NUMBER 3100
#define F_FLOAT84LT 307
#define F_BPCHAR_NAME 409
#define TIMESTAMP_H 
#define NormalTransactionIdPrecedes(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) < 0)
#define SIGINT 2
#define F_BYTEACMP 1954
#define O_DIRECTORY __O_DIRECTORY
#define F_TSM_HANDLER_OUT 3312
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define F_UNIQUE_KEY_RECHECK 1250
#define STATUS_OK (0)
#define SIGIOT SIGABRT
#define F_DEXP 233
#define F_OIDNE 185
#define _POSIX_TIMER_MAX 32
#define PG_HAVE_ATOMIC_FETCH_SUB_U64 
#define AGT_ROOT_IS_BINARY(agtp_) ((*(uint32 *)VARDATA(agtp_) & AGT_FBINARY) != 0)
#define DN_CREATE 0x00000004
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define F_RI_FKEY_CASCADE_UPD 1647
#define S_IXGRP (S_IXUSR >> 3)
#define __ATOMIC_CONSUME 1
#define F_PATH_SEND 2483
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define F_SATISFIES_HASH_PARTITION 5028
#define __GNUC_MINOR__ 3
#define EPOCH "epoch"
#define PF_KEY 15
#define F_JSONB_EXISTS_ALL 4049
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define SK_ORDER_BY 0x0100
#define F_BOOLLE 1691
#define DSA_ALLOC_ZERO 0x04
#define F_POLY_RIGHT 344
#define ERRCODE_INVALID_PASSWORD MAKE_SQLSTATE('2','8','P','0','1')
#define F_INT82 714
#define edge_tuple_end_id Anum_ag_label_edge_table_end_id - 1
#define ALIGNOF_PG_INT128_TYPE 16
#define ERRCODE_FDW_UNABLE_TO_CREATE_REPLY MAKE_SQLSTATE('H','V','0','0','M')
#define F_INT84 480
#define F_INT2EQ 63
#define F_DTAN 1606
#define S_ISUID __S_ISUID
#define F_EQJOINSEL 105
#define F_PG_HAS_ROLE_ID_NAME 2707
#define SHORTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_SHORT, (LEN))
#define isascii_l(c,l) __isascii_l ((c), (l))
#define FRAMEOPTION_GROUPS 0x00008
#define isleap(y) (((y) % 4) == 0 && (((y) % 100) != 0 || ((y) % 400) == 0))
#define _DIRENT_H 1
#define DMILLISEC "msecond"
#define ENOTRECOVERABLE 131
#define F_JSON_AGG_FINALFN 3174
#define InvalidSubTransactionId ((SubTransactionId) 0)
#define F_HAS_FUNCTION_PRIVILEGE_ID 2261
#define F_JSON_ARRAY_LENGTH 3956
#define F_BOX_EQ 128
#define F_INT2GE 151
#define LOG_SERVER_ONLY 16
#define F_JSONB_DELETE_PATH 3304
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define F_TIMESTAMPTZ_LE_TIMESTAMP 2528
#define F_GIST_POINT_DISTANCE 3064
#define __sigstack_defined 1
#define F_INTERVAL_DIV 1326
#define TOMORROW "tomorrow"
#define INFO 17
#define SPLICE_F_MORE 4
#define INVALID_ENTRY_ID INT64CONST(0)
#define F_PG_CURSOR 2511
#define F_PG_ADVISORY_UNLOCK_ALL 2892
#define TopSubTransactionId ((SubTransactionId) 1)
#define __ino64_t_defined 
#define F_BOX_GE 126
#define STA_UNSYNC 0x0040
#define AF_ISDN PF_ISDN
#define __clockid_t_defined 1
#define F_XML_IN 2893
#define F_PG_OPCLASS_IS_VISIBLE 2083
#define F_BOX_GT 127
#define F_POLY_PATH 1447
#define F_INT2IN 38
#define __size_t 
#define dsa_pointer_atomic_read pg_atomic_read_u64
#define __UINT8_TYPE__ unsigned char
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define AutoFileLock (&MainLWLockArray[35].lock)
#define IPV6_2292HOPLIMIT 8
#define ENOENT 2
#define F_PG_EVENT_TRIGGER_DROPPED_OBJECTS 3566
#define F_DATE_TIMESTAMP 2024
#define ERRCODE_WARNING_PRIVILEGE_NOT_REVOKED MAKE_SQLSTATE('0','1','0','0','6')
#define DEBUG5 10
#define IPV6_LEAVE_ANYCAST 28
#define F_BOX_IN 123
#define pg_unreachable() __builtin_unreachable()
#define F_DASIN 1600
#define F_SPG_TEXT_PICKSPLIT 4029
#define ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','3')
#define ERRCODE_DUPLICATE_CURSOR MAKE_SQLSTATE('4','2','P','0','3')
#define F_BITOCTETLENGTH 1682
#define SizeOfXLogRecordDataHeaderLong (sizeof(uint8) + sizeof(uint32))
#define F_JSONB_OBJECT_FIELD_TEXT 3214
#define PointerIsAligned(pointer,type) (((uintptr_t)(pointer) % (sizeof (type))) == 0)
#define _(x) gettext(x)
#define relpath(rnode,forknum) relpathbackend((rnode).node, (rnode).backend, forknum)
#define SPLICE_F_MOVE 1
#define F_INT2LE 148
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define F_INT2LT 64
#define EBADSLT 57
#define F_INT28DIV 948
#define SO_INCOMING_CPU 49
#define __useconds_t_defined 
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define F_INT2MI 180
#define _LFS_ASYNCHRONOUS_IO 1
#define F_PG_LOGICAL_EMIT_MESSAGE_TEXT 3577
#define __HAVE_DISTINCT_FLOAT64X 0
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define F_BOX_LE 130
#define F_PG_ADVISORY_UNLOCK_INT4 2890
#define F_PG_ADVISORY_UNLOCK_INT8 2884
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define F_BOX_LT 129
#define __SIZEOF_LONG_LONG__ 8
#define F_TIMESTAMPTZ_ABSTIME 1180
#define F_INT2NE 145
#define EHOSTUNREACH 113
#define FRAMEOPTION_START_UNBOUNDED_FOLLOWING 0x00080
#define Anum_ag_label_id 3
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define PageSetPageSizeAndVersion(page,size,version) ( AssertMacro(((size) & 0xFF00) == (size)), AssertMacro(((version) & 0x00FF) == (version)), ((PageHeader) (page))->pd_pagesize_version = (size) | (version) )
#define HAVE_GCC__SYNC_INT64_CAS 1
#define F_PG_STAT_GET_XACT_FUNCTION_CALLS 3046
#define PG_HAVE_SPIN_DELAY 
#define _GCC_PTRDIFF_T 
#define SInvalReadLock (&MainLWLockArray[5].lock)
#define F_INT2OR 1893
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define F_TEXTLEN 1257
#define __LDBL_DIG__ 33
#define F_FLOAT8SEND 2427
#define Anum_ag_label_edge_table_start_id 2
#define pg_attribute_always_inline __attribute__((always_inline)) inline
#define _SC_NZERO _SC_NZERO
#define F_PG_ADVISORY_XACT_LOCK_INT4 3093
#define F_INT2PL 176
#define F_ARRAY_EQ 744
#define F_PG_ADVISORY_XACT_LOCK_INT8 3089
#define INTERRUPTS_CAN_BE_PROCESSED() (InterruptHoldoffCount == 0 && CritSectionCount == 0 && QueryCancelHoldoffCount == 0)
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define F_WIDTH_BUCKET_FLOAT8 320
#define S_IROTH (S_IRGRP >> 3)
#define HeapTupleHeaderXminCommitted(tup) ( ((tup)->t_infomask & HEAP_XMIN_COMMITTED) != 0 )
#define F_TSVECTOR_SETWEIGHT 3624
#define F_TIDOUT 49
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_ID_ID 3003
#define F_HAS_COLUMN_PRIVILEGE_ID_NAME_ATTNUM 3017
#define F_DATE_LARGER 1138
#define X_OK 1
#define DCURRENT "current"
#define ERRCODE_DATA_CORRUPTED MAKE_SQLSTATE('X','X','0','0','1')
#define F_PG_STAT_GET_FUNCTION_CALLS 2978
#define F_REGOPERATORSEND 2451
#define F_ARRAY_GE 396
#define FunctionCallInvoke(fcinfo) ((* (fcinfo)->flinfo->fn_addr) (fcinfo))
#define F_ARRAY_GT 392
#define F_LSEG_EQ 999
#define FIELDNO_TUPLETABLESLOT_NVALID 9
#define nodeTag(nodeptr) (((const Node*)(nodeptr))->type)
#define SO_BUF_LOCK 72
#define PG_ATTRIBUTE_H 
#define F_PG_GET_FUNCTION_RESULT 2165
#define F_DTOF 312
#define PG_FUNCTION_INFO_V1(funcname) extern Datum funcname(PG_FUNCTION_ARGS); extern PGDLLEXPORT const Pg_finfo_record * CppConcat(pg_finfo_,funcname)(void); const Pg_finfo_record * CppConcat(pg_finfo_,funcname) (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable
#define __S_ISGID 02000
#define F_PG_STAT_GET_XACT_TUPLES_UPDATED 3041
#define MAX_KILOBYTES INT_MAX
#define PALLOC_H 
#define F_PG_GET_CONSTRAINTDEF 1387
#define PD_VALID_FLAG_BITS 0x0007
#define FPE_FLTUND FPE_FLTUND
#define F_TSQUERY_AND 3669
#define F_ARRAY_IN 750
#define FPE_FLTUNK FPE_FLTUNK
#define F_ACLEXPLODE 1689
#define F_DROUND 228
#define F_DATE_FINITE 1373
#define ERRCODE_CONFIG_FILE_ERROR MAKE_SQLSTATE('F','0','0','0','0')
#define F_RI_FKEY_SETNULL_DEL 1650
#define F_INT8_AVG_DESERIALIZE 2787
