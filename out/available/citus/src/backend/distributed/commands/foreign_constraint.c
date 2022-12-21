#define __S_IFBLK 0060000
#define DatumGetByteaP(X) ((bytea *) PG_DETOAST_DATUM(X))
#define Anum_pg_index_indisready 12
#define GUC_SUPERUSER_ONLY 0x0100
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define F_INT2UM 213
#define F_INT2UP 1911
#define BootstrapTransactionId ((TransactionId) 1)
#define DATEMULTIRANGEOID 4535
#define __SSP_STRONG__ 3
#define F_BOOLSEND 2437
#define __attr_access(x) __attribute__ ((__access__ x))
#define IPV6_2292HOPOPTS 3
#define RELKIND_PARTITIONED_INDEX 'I'
#define ALLOCSET_DEFAULT_MAXSIZE (8 * 1024 * 1024)
#define SET_LOCKTAG_RELATION_EXTEND(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION_EXTEND, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define F_UTF8_TO_SHIFT_JIS_2004 4385
#define F_PRSD_HEADLINE 3720
#define F_JSONB_PATH_MATCH_TZ 2030
#define F_PG_STAT_GET_BGWRITER_REQUESTED_CHECKPOINTS 2770
#define AT_STATX_SYNC_AS_STAT 0x0000
#define STATUS_EOF (-2)
#define Anum_pg_constraint_conindid 10
#define AF_MAX PF_MAX
#define _SC_PII _SC_PII
#define F_TEXTEQNAME 247
#define F_ARRAY_LE 393
#define ERRCODE_INVALID_DATABASE_DEFINITION MAKE_SQLSTATE('4','2','P','1','2')
#define F_ARRAY_FILL_ANYELEMENT__INT4__INT4 1286
#define __SIZEOF_WCHAR_T__ 4
#define __UINT_LEAST16_MAX__ 0xffff
#define IP_ROUTER_ALERT 5
#define F_NUMERIC_AVG_COMBINE 3337
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define RE_DUP_MAX (0x7fff)
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define PVC_RECURSE_AGGREGATES 0x0002
#define F_MIN_TIME 2139
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define sa_sigaction __sigaction_handler.sa_sigaction
#define XLOG_MARK_UNIMPORTANT 0x02
#define ILIST_H 
#define fcGetArgNull(fc,n) ((fc)->args[n].isnull)
#define F_STRING_TO_ARRAY_TEXT_TEXT 394
#define F_ARRAY_NE 390
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define F_BRIN_MINMAX_MULTI_DISTANCE_TID 4627
#define F_CLOSE_LSEG 1489
#define si_fd _sifields._sigpoll.si_fd
#define _GETOPT_CORE_H 1
#define USE_LLVM 1
#define _T_WCHAR_ 
#define IS_VALID_DATE(d) ((DATETIME_MIN_JULIAN - POSTGRES_EPOCH_JDATE) <= (d) && (d) < (DATE_END_JULIAN - POSTGRES_EPOCH_JDATE))
#define NI_MAXSERV 32
#define ERRCODE_CONNECTION_DOES_NOT_EXIST MAKE_SQLSTATE('0','8','0','0','3')
#define ERRCODE_RESERVED_NAME MAKE_SQLSTATE('4','2','9','3','9')
#define F_PG_HBA_FILE_RULES 3401
#define F_MACADDR_IN 436
#define ERRCODE_READ_ONLY_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','6')
#define F_GIST_CIRCLE_CONSISTENT 2591
#define LockHashPartitionLockByIndex(i) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + (i)].lock)
#define F_PG_SLEEP 2626
#define _PRINTF_NAN_LEN_MAX 4
#define PG_BINARY_R "r"
#define PG_BINARY_W "w"
#define PRIuPTR __PRIPTR_PREFIX "u"
#define F_STDDEV_POP_FLOAT4 2727
#define F_STDDEV_POP_FLOAT8 2728
#define F_STRING_TO_ARRAY_TEXT_TEXT_TEXT 376
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define F_NUMERIC_ABS 1704
#define PG_GETARG_EXPANDED_ARRAYX(n,metacache) DatumGetExpandedArrayX(PG_GETARG_DATUM(n), metacache)
#define GUC_UNIT_MB 0x4000
#define F_TSRANGE_TIMESTAMP_TIMESTAMP_TEXT 3934
#define ERRCODE_INVALID_ARGUMENT_FOR_NTILE MAKE_SQLSTATE('2','2','0','1','4')
#define __GNU_LIBRARY__ 6
#define F_FLOAT4_JSONB 3453
#define NL_NMAX INT_MAX
#define GUC_UNIT_MS 0x10000
#define ERRCODE_SINGLETON_SQL_JSON_ITEM_REQUIRED MAKE_SQLSTATE('2','2','0','3','8')
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define XACT_FLAGS_NEEDIMMEDIATECOMMIT (1U << 2)
#define F_PG_EXTENSION_UPDATE_PATHS 3084
#define CONFIGURE_ARGS " '--build=aarch64-linux-gnu' '--prefix=/usr' '--includedir=${prefix}/include' '--mandir=${prefix}/share/man' '--infodir=${prefix}/share/info' '--sysconfdir=/etc' '--localstatedir=/var' '--disable-option-checking' '--disable-silent-rules' '--libdir=${prefix}/lib/aarch64-linux-gnu' '--runstatedir=/run' '--disable-maintainer-mode' '--disable-dependency-tracking' '--with-tcl' '--with-perl' '--with-python' '--with-pam' '--with-openssl' '--with-libxml' '--with-libxslt' '--mandir=/usr/share/postgresql/14/man' '--docdir=/usr/share/doc/postgresql-doc-14' '--sysconfdir=/etc/postgresql-common' '--datarootdir=/usr/share/' '--datadir=/usr/share/postgresql/14' '--bindir=/usr/lib/postgresql/14/bin' '--libdir=/usr/lib/aarch64-linux-gnu/' '--libexecdir=/usr/lib/postgresql/' '--includedir=/usr/include/postgresql/' '--with-extra-version= (Ubuntu 14.5-0ubuntu0.22.04.1)' '--enable-nls' '--enable-thread-safety' '--enable-debug' '--enable-dtrace' '--disable-rpath' '--with-uuid=e2fs' '--with-gnu-ld' '--with-gssapi' '--with-ldap' '--with-pgport=5432' '--with-system-tzdata=/usr/share/zoneinfo' 'AWK=mawk' 'MKDIR_P=/bin/mkdir -p' 'PROVE=/usr/bin/prove' 'PYTHON=/usr/bin/python3' 'TAR=/bin/tar' 'XSLTPROC=xsltproc --nonet' 'CFLAGS=-g -O2 -flto=auto -ffat-lto-objects -flto=auto -ffat-lto-objects -fstack-protector-strong -Wformat -Werror=format-security' 'LDFLAGS=-Wl,-Bsymbolic-functions -flto=auto -ffat-lto-objects -flto=auto -Wl,-z,relro -Wl,-z,now' '--enable-tap-tests' '--with-icu' '--with-llvm' 'LLVM_CONFIG=/usr/bin/llvm-config-14' 'CLANG=/usr/bin/clang-14' '--with-lz4' '--with-systemd' '--with-selinux' 'build_alias=aarch64-linux-gnu' 'CPPFLAGS=-Wdate-time -D_FORTIFY_SOURCE=2' 'CXXFLAGS=-g -O2 -flto=auto -ffat-lto-objects -flto=auto -ffat-lto-objects -fstack-protector-strong -Wformat -Werror=format-security'"
#define CLOCK_THREAD_CPUTIME_ID 3
#define F_INT2VECTORRECV 2410
#define HTUP_H 
#define F_TEXTICNLIKE 1634
#define F_MACADDR_LE 832
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define F_TIDNE 1265
#define F_MACADDR_LT 831
#define F_HASHENUM 3515
#define SO_NOFCS 43
#define __SCHAR_WIDTH__ 8
#define F_REGOPERSEND 2449
#define F_BOX_RIGHT 191
#define ADJ_OFFSET 0x0001
#define SOCK_RAW SOCK_RAW
#define F_VARBITLE 1670
#define F_VARBITLT 1671
#define EDESTADDRREQ 89
#define ERRCODE_NO_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','5')
#define AMFLAG_HAS_TID_RANGE (1 << 0)
#define F_BOX_SUB 1423
#define ERRCODE_INVALID_TEXT_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','2')
#define F_INT8RECV 2408
#define F_PG_TABLE_SIZE 2997
#define F_REGR_INTERCEPT 2826
#define FIELDNO_MINIMALTUPLETABLESLOT_TUPLE 1
#define F_ABS_FLOAT4 1394
#define si_pid _sifields._kill.si_pid
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define F_INT2NOT 1895
#define F_TO_CHAR_INTERVAL_TEXT 1768
#define PG_MINORVERSION_NUM 5
#define F_PG_INDEXAM_PROGRESS_PHASENAME 676
#define F_MACADDR_OR 3146
#define F_VARBITNE 1667
#define REGOPEROID 2203
#define RECORDARRAYOID 2287
#define IPV6_ADDRFORM 1
#define VARDATA(PTR) VARDATA_4B(PTR)
#define SOCK_RDM SOCK_RDM
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define HAVE_GETOPT 1
#define HeapTupleNoNulls(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASNULL))
#define F_JSON_EXTRACT_PATH 3951
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define AttributeRelidNameIndexId 2658
#define IP_MAX_MEMBERSHIPS 20
#define BITMAPLEN(NATTS) (((int)(NATTS) + 7) / 8)
#define PG_MCV_LISTOID 5017
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define MaxAttrSize (10 * 1024 * 1024)
#define foreach_ptr(var,l) for (ListCell *(var ## CellDoNotUse) = list_head(l); (var ## CellDoNotUse) != NULL && (((var) = lfirst(var ## CellDoNotUse)) || true); var ## CellDoNotUse = lnext(l, var ## CellDoNotUse))
#define F_HAS_SERVER_PRIVILEGE_NAME_OID_TEXT 3007
#define ERRCODE_UNDEFINED_COLUMN MAKE_SQLSTATE('4','2','7','0','3')
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define F_HASH_ACLITEM 329
#define F_PATH_CENTER 226
#define F_GIST_BOX_PENALTY 2581
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define F_SPG_QUAD_PICKSPLIT 4020
#define F_REGPROCRECV 2444
#define F_ON_PB 136
#define USE_SQL_DATES 2
#define MCAST_LEAVE_SOURCE_GROUP 47
#define ACLITEM_SET_PRIVS_GOPTIONS(item,privs,goptions) ((item).ai_privs = ((AclMode) (privs) & 0xFFFF) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 0
#define IPV6_IPSEC_POLICY 34
#define ItemIdSetDead(itemId) ( (itemId)->lp_flags = LP_DEAD, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define F_JSONB_PATH_EXISTS_TZ 1177
#define F_FLOOR_FLOAT8 2309
#define STA_DEL 0x0020
#define F_HOST 699
#define planner_rt_fetch(rti,root) ((root)->simple_rte_array ? (root)->simple_rte_array[rti] : rt_fetch(rti, (root)->parse->rtable))
#define F_HAS_TABLE_PRIVILEGE_NAME_TEXT_TEXT 1922
#define F_INT2_SUM 1840
#define _XOPEN_VERSION 700
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define F_ENUM_RANGE_ANYENUM 3531
#define BGWORKER_CLASS_PARALLEL 0x0010
#define IP_FREEBIND 15
#define F_ON_PL 959
#define F_BITAND 1673
#define HOLD_INTERRUPTS() (InterruptHoldoffCount++)
#define F_INT4_BOOL 2558
#define PG_VERSION_NUM 140005
#define init_local_spin_delay(status) init_spin_delay(status, __FILE__, __LINE__, PG_FUNCNAME_MACRO)
#define F_PG_SHOW_ALL_SETTINGS 2084
#define REGDICTIONARYOID 3769
#define F_TSMULTIRANGE_ 4286
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __SAFE_MEM_LIB_H__ 
#define F_VARIANCE_FLOAT8 2152
#define F_LEAD_ANYELEMENT 3109
#define _BITS_PTHREADTYPES_COMMON_H 1
#define TYPCATEGORY_COMPOSITE 'C'
#define GetSysCacheHashValue3(cacheId,key1,key2,key3) GetSysCacheHashValue(cacheId, key1, key2, key3, 0)
#define Anum_pg_dist_partition_partmethod 2
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define GetSysCacheHashValue4(cacheId,key1,key2,key3,key4) GetSysCacheHashValue(cacheId, key1, key2, key3, key4)
#define __SIGEV_MAX_SIZE 64
#define PF_LLC 26
#define F_TIMETZDATE_PL 1298
#define F_DISPELL_INIT 3731
#define GROUPING_CAN_PARTIAL_AGG 0x0004
#define __sigval_t_defined 
#define __UINT_FAST32_TYPE__ long unsigned int
#define SIGPROF 27
#define SOL_BLUETOOTH 274
#define VARSIZE_1B(PTR) ((((varattrib_1b *) (PTR))->va_header >> 1) & 0x7F)
#define HAVE_LIBLDAP 1
#define F_RECORD_IMAGE_GE 3186
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define F_RECORD_IMAGE_GT 3184
#define PG_INT32_MIN (-0x7FFFFFFF-1)
#define F_DIST_BP 357
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define PG_DYNSHMEM_DIR "pg_dynshmem"
#define AttributeRelation_Rowtype_Id 75
#define makeNode(_type_) ((_type_ *) newNode(sizeof(_type_),T_ ##_type_))
#define ENOTTY 25
#define WCHAR_MIN __WCHAR_MIN
#define PRIi32 "i"
#define MOD_NANO ADJ_NANO
#define F_CASH_DIV_INT4 865
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define HASH_SEGMENT 0x0002
#define HAVE_DECL_LLVMORCGETSYMBOLADDRESSIN 0
#define PARTITION_STRATEGY_RANGE 'r'
#define L_cuserid 9
#define __LP64__ 1
#define F_LATIN2_TO_WIN1250 4342
#define F_RANGE_ADJACENT 3862
#define COMP_CRC32C(crc,data,len) ((crc) = pg_comp_crc32c((crc), (data), (len)))
#define F_MIN_ANYENUM 3527
#define Anum_pg_attribute_attalign 11
#define F_SET_BIT_BYTEA_INT8_INT4 724
#define __u_char_defined 
#define unlikely(x) __builtin_expect((x) != 0, 0)
#define F_PERCENTILE_DISC_FLOAT8_ANYELEMENT 3972
#define F_IN_RANGE_INT4_INT4_INT8_BOOL_BOOL 4127
#define HAVE_DECL_F_FULLFSYNC 0
#define __FLT32_HAS_DENORM__ 1
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define IP_ADD_MEMBERSHIP 35
#define HAVE_INT64_TIMESTAMP 
#define Anum_pg_type_typrelid 12
#define F_DSYNONYM_INIT 3728
#define GROUPING_CAN_USE_HASH 0x0002
#define PageGetPageLayoutVersion(page) (((PageHeader) (page))->pd_pagesize_version & 0x00FF)
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define F_TEXTREGEXNE 1256
#define Anum_pg_type_typcollation 29
#define unix 1
#define F_UUID_GT 2958
#define XactTruncationLock (&MainLWLockArray[44].lock)
#define _BITS_TYPES_LOCALE_T_H 1
#define _LIMITS_H___ 
#define MSG_WAITALL MSG_WAITALL
#define F_RECORD_IMAGE_LE 3185
#define F_PG_STAT_GET_FUNCTION_SELF_TIME 2980
#define F_NUMERIC_DIV_TRUNC 1980
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define F_JSONB_TO_RECORD 3490
#define LOCALLOCK_LOCKTAG(llock) ((LockTagType) (llock).tag.lock.locktag_type)
#define F_JSON_OBJECT_AGG_FINALFN 3196
#define F_ARRAY_AGG_ANYARRAY 4053
#define INT8ARRAYOID 1016
#define F_BTOIDVECTORCMP 404
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define __O_NOATIME 01000000
#define F_PG_LS_WALDIR 3354
#define USECS_PER_DAY INT64CONST(86400000000)
#define F_PG_LOCK_STATUS 1371
#define HAVE_INT_OPTERR 1
#define __SI_SIGFAULT_ADDL 
#define F_MULTIRANGE_ADJACENT_MULTIRANGE 4256
#define F_LANGUAGE_HANDLER_IN 2302
#define SS_DISABLE SS_DISABLE
#define BITARRAYOID 1561
#define F_REPEAT 1622
#define F_MAX_BPCHAR 2244
#define F_PG_STAT_GET_DB_SESSIONS_ABANDONED 6189
#define GUC_CUSTOM_PLACEHOLDER 0x0080
#define SOL_TIPC 271
#define TYPCATEGORY_NUMERIC 'N'
#define TTS_FIXED(slot) (((slot)->tts_flags & TTS_FLAG_FIXED) != 0)
#define _CS_PATH _CS_PATH
#define F_RECORD_IMAGE_NE 3182
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define F_SPG_RANGE_QUAD_INNER_CONSISTENT 3472
#define PG_DETOAST_DATUM(datum) pg_detoast_datum((struct varlena *) DatumGetPointer(datum))
#define F_BOUND_BOX 4067
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define F_PG_DATABASE_SIZE_OID 2324
#define Natts_pg_sequence 8
#define F_NETWORK_GE 924
#define IN_CLASSB_NSHIFT 16
#define DEFAULT_BGWRITER_FLUSH_AFTER 64
#define PRS2LOCK_H 
#define LC_MEASUREMENT __LC_MEASUREMENT
#define NFDBITS __NFDBITS
#define REGCLASSOID 2205
#define LOG_DESTINATION_STDERR 1
#define F_IN_RANGE_INT8_INT8_INT8_BOOL_BOOL 4126
#define SCNd8 "hhd"
#define ERRCODE_STACKED_DIAGNOSTICS_ACCESSED_WITHOUT_ACTIVE_HANDLER MAKE_SQLSTATE('0','Z','0','0','2')
#define F_POINT_SEND 2429
#define F_DATE_BIN_INTERVAL_TIMESTAMPTZ_TIMESTAMPTZ 6178
#define F_JSON_OBJECT__TEXT__TEXT 3203
#define SINVAL_H 
#define WCHAR_WIDTH 32
#define ItemIdSetRedirect(itemId,link) ( (itemId)->lp_flags = LP_REDIRECT, (itemId)->lp_off = (link), (itemId)->lp_len = 0 )
#define slist_check(head) ((void) (head))
#define F_INT8_FLOAT8 483
#define SOL_IPV6 41
#define HeapTupleHeaderSetXminFrozen(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_FROZEN) )
#define __O_CLOEXEC 02000000
#define ENETRESET 102
#define IP_MTU 14
#define PG_VERSION_13 130000
#define PG_VERSION_14 140000
#define PG_VERSION_15 150000
#define DATEARRAYOID 1182
#define F_DIST_LB 726
#define AF_ROSE PF_ROSE
#define F_DIST_LP 702
#define F_DIST_LS 704
#define CHECKPOINT_WAIT 0x0020
#define __fortify_function __extern_always_inline __attribute_artificial__
#define LP_UNUSED 0
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define PG_KRB_SRVNAM "postgres"
#define SIGSEGV 11
#define SCNd16 "hd"
#define F_PG_WAL_LSN_DIFF 3165
#define F_TIMESTAMPTYPMODIN 2905
#define REPLICATION_MODEL_STREAMING 's'
#define INSTR_TIME_GET_MILLISEC(t) (((double) (t).tv_sec * 1000.0) + ((double) (t).tv_nsec) / 1000000.0)
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define F_MACADDR_EQ 830
#define __UINT_LEAST8_MAX__ 0xff
#define F_MIN_DATE 2138
#define REGCLASSARRAYOID 2210
#define F_MULTIRANGE_IN 4231
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define BTGreaterEqualStrategyNumber 4
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define F_MOD_INT2_INT2 940
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define F_GIST_POLY_DISTANCE 3288
#define F_PG_STAT_GET_BACKEND_CLIENT_ADDR 1392
#define __ASM_GENERIC_BITS_PER_LONG 
#define ARR_SIZE(a) VARSIZE(a)
#define F_UTF8_TO_EUC_CN 4361
#define F_INT28GE 1855
#define SCNd32 "d"
#define SCNi8 "hhi"
#define sprintf pg_sprintf
#define F_TSTZRANGE_TIMESTAMPTZ_TIMESTAMPTZ_TEXT 3938
#define pg_bswap16(x) __builtin_bswap16(x)
#define __linux 1
#define VARATT_IS_4B_C(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x02)
#define ERROR_BUFFER_SIZE 256
#define PG_MAGIC_FUNCTION_NAME Pg_magic_func
#define AGG_CONTEXT_WINDOW 2
#define VARATT_IS_4B_U(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x00)
#define F_BTFLOAT8SORTSUPPORT 3133
#define FORMAT_TYPE_FORCE_QUALIFY 0x04
#define F_DIST_PC 1476
#define VARCHAROID 1043
#define F_DIST_PL 725
#define ERRCODE_SUCCESSFUL_COMPLETION MAKE_SQLSTATE('0','0','0','0','0')
#define AI_ADDRCONFIG 0x0020
#define TYPTYPE_ENUM 'e'
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define F_PG_STAT_GET_DB_TUPLES_DELETED 2762
#define F_PG_REPLICATION_ORIGIN_SESSION_SETUP 6006
#define _BITS_PTHREADTYPES_ARCH_H 1
#define HOURS_PER_DAY 24
#define RTContainsStrategyNumber 7
#define LockHashPartitionLockByProc(leader_pgproc) LockHashPartitionLock((leader_pgproc)->pgprocno)
#define ERRCODE_S_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','2')
#define __bool_true_false_are_defined 1
#define F_NETWORK_GT 923
#define IsTrueArrayType(typeForm) (OidIsValid((typeForm)->typelem) && (typeForm)->typsubscript == F_ARRAY_SUBSCRIPT_HANDLER)
#define F_PG_NDISTINCT_IN 3355
#define SYNC_METHOD_OPEN_DSYNC 4
#define ItemPointerGetBlockNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetBlockNumberNoCheck(pointer) )
#define ERRCODE_DATETIME_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','0','8')
#define F_PG_GET_STATISTICSOBJDEF_COLUMNS 6174
#define __SIZE_T 
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define F_MIN_PG_LSN 4190
#define F_SPG_KD_INNER_CONSISTENT 4026
#define SCNd64 __PRI64_PREFIX "d"
#define SIGUSR1 10
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define F_IN_RANGE_INTERVAL_INTERVAL_INTERVAL_BOOL_BOOL 4136
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define Anum_pg_sequence_seqcache 7
#define _ATFILE_SOURCE 1
#define PF_WANPIPE 25
#define NO_MAX_DSIZE (-1)
#define F_DIST_SB 365
#define F_DIST_SL 727
#define _SC_NETWORKING _SC_NETWORKING
#define F_DIST_SP 380
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define RangeVarGetRelid(relation,lockmode,missing_ok) RangeVarGetRelidExtended(relation, lockmode, (missing_ok) ? RVR_MISSING_OK : 0, NULL, NULL)
#define INT2OID 21
#define PATH_REQ_OUTER(path) ((path)->param_info ? (path)->param_info->ppi_req_outer : (Relids) NULL)
#define USE_GERMAN_DATES 3
#define RTLeftStrategyNumber 1
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define F_TIMESTAMP_EQ_DATE 2366
#define F_MACADDR8_OUT 4111
#define F_FLOAT8_REGR_R2 2812
#define GROUP_ID_UPGRADING -2
#define F_LSEG_POINT_POINT 993
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define F_UTF8_TO_JOHAB 4377
#define F_PG_OPFAMILY_IS_VISIBLE 3829
#define VA_ARGS_NARGS_(_01,_02,_03,_04,_05,_06,_07,_08,_09,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,N,...) (N)
#define F_BINARY_UPGRADE_SET_NEXT_INDEX_PG_CLASS_OID 3587
#define pg_bswap64(x) __builtin_bswap64(x)
#define F_XMLCONCAT2 2900
#define UINT16_C(c) c
#define F_SPG_BOX_QUAD_CONFIG 5012
#define TupleDescSize(src) (offsetof(struct TupleDescData, attrs) + (src)->natts * sizeof(FormData_pg_attribute))
#define F_FLOAT4NE 288
#define SCNo8 "hho"
#define SET_LOCKTAG_TUPLE(locktag,dboid,reloid,blocknum,offnum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = (offnum), (locktag).locktag_type = LOCKTAG_TUPLE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define _PC_PRIO_IO _PC_PRIO_IO
#define SpinLockInit(lock) S_INIT_LOCK(lock)
#define F_HASHTEXTEXTENDED 448
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define qsort(a,b,c,d) pg_qsort(a,b,c,d)
#define F_DATE_MII 1142
#define F_GIN_EXTRACT_TSVECTOR_TSVECTOR_INTERNAL 3077
#define __SCHAR_MAX__ 0x7f
#define PG_IOLBF _IOLBF
#define F_STRING_AGG_TEXT_TEXT 3538
#define F_PG_GET_REPLICATION_SLOTS 3781
#define DatumGetUInt8(X) ((uint8) (X))
#define be32toh(x) __bswap_32 (x)
#define F_ENUM_RANGE_ANYENUM_ANYENUM 3530
#define RelationHasReferenceCountZero(relation) ((bool)((relation)->rd_refcnt == 0))
#define F_POINT_IN 117
#define __KERNEL_STRICT_NAMES 
#define SCNxFAST16 __PRIPTR_PREFIX "x"
#define Anum_pg_type_typnamespace 3
#define F_JSONB_PATH_MATCH 4009
#define F_RANGE_CONTAINS_ELEM 3858
#define pg_write_barrier_impl() __atomic_thread_fence(__ATOMIC_RELEASE)
#define F_ROW_SECURITY_ACTIVE_OID 3298
#define SA_SIGINFO 4
#define F_INT28PL 841
#define F_UUID_CMP 2960
#define FIELDNO_HEAPTUPLEHEADERDATA_HOFF 4
#define F_INT8SEND 2409
#define STA_PPSWANDER 0x0400
#define INTERVAL_RANGE_MASK (0x7FFF)
#define F_REGOPERATORIN 2216
#define F_LEAD_ANYELEMENT_INT4 3110
#define F_RANGE_TYPANALYZE 3916
#define Anum_pg_class_relfrozenxid 29
#define F_DATEMULTIRANGE_ 4292
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define ERRCODE_WITH_CHECK_OPTION_VIOLATION MAKE_SQLSTATE('4','4','0','0','0')
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define F_TRUNC_MACADDR8 4112
#define DO_AGGSPLIT_SERIALIZE(as) (((as) & AGGSPLITOP_SERIALIZE) != 0)
#define PATHOID 602
#define F_PG_WALFILE_NAME 2851
#define F_INT4LT 66
#define SIZEOF_DSA_POINTER 8
#define dlist_check(head) ((void) (head))
#define __isascii(c) (((c) & ~0x7f) == 0)
#define F_MULTIRANGE_OUT 4232
#define __toascii(c) ((c) & 0x7f)
#define F_REGR_SXY 2821
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define F_ARRAY_LT 391
#define SO_TIMESTAMP_OLD 29
#define F_SCALARLTSEL 103
#define __SIZEOF_INT__ 4
#define F_POINT_BOX 1534
#define SCNu8 "hhu"
#define WINT_WIDTH 32
#define F_GET_BIT_BYTEA_INT8 723
#define __PRAGMA_REDEFINE_EXTNAME 1
#define F_REGEXP_MATCHES_TEXT_TEXT 2763
#define _BITS_SIGINFO_ARCH_H 1
#define SizeOfXLogRecordBlockCompressHeader sizeof(XLogRecordBlockCompressHeader)
#define SOL_TLS 282
#define PageClearPrunable(page) (((PageHeader) (page))->pd_prune_xid = InvalidTransactionId)
#define IPPROTO_SCTP IPPROTO_SCTP
#define F_HASHBPCHAR 1080
#define WILDCARD_NODE_ID 0
#define F_POINT_NE 988
#define F_TIMETZ_HASH_EXTENDED 3410
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_OID_OID_TEXT 3003
#define SCNxFAST64 __PRI64_PREFIX "x"
#define MINS_PER_HOUR 60
#define AT_FDCWD -100
#define FIOSETOWN 0x8901
#define F_INT2LARGER 770
#define HeapTupleHasVarWidth(tuple) (((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH) != 0)
#define ERRCODE_INSUFFICIENT_RESOURCES MAKE_SQLSTATE('5','3','0','0','0')
#define HAVE_DLOPEN 1
#define TSROUND(j) (rint(((double) (j)) * TS_PREC_INV) / TS_PREC_INV)
#define _ASM_GENERIC_INT_LL64_H 
#define PRIuFAST16 __PRIPTR_PREFIX "u"
#define _SC_VERSION _SC_VERSION
#define F_RANGE_CMP 3870
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define F_FLOAT8_REGR_AVGX 2810
#define F_FLOAT8_REGR_AVGY 2811
#define IPPROTO_EGP IPPROTO_EGP
#define __USER_LABEL_PREFIX__ 
#define __ss_aligntype unsigned long int
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define F_PATH_MUL_PT 1438
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define SCNx8 "hhx"
#define _BITS_ENDIANNESS_H 1
#define errcontext set_errcontext_domain(TEXTDOMAIN), errcontext_msg
#define __LC_MEASUREMENT 11
#define Anum_pg_attribute_attbyval 10
#define _POSIX_TRACE -1
#define SCM_TIMESTAMPING_PKTINFO 58
#define __GLIBC__ 2
#define F_DIST_CPOLY 728
#define RTSubEqualStrategyNumber 25
#define F_TEXTNLIKE 851
#define PRIuFAST32 __PRIPTR_PREFIX "u"
#define F_INT82PL 837
#define F_TIME_LARGER 1377
#define HASH_ATTACH 0x1000
#define F_NUMERIC_ACCUM 1833
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define ERRCODE_FDW_INCONSISTENT_DESCRIPTOR_INFORMATION MAKE_SQLSTATE('H','V','0','2','1')
#define WCONTINUED 8
#define RelationUsesLocalBuffers(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP)
#define setjmp(env) _setjmp (env)
#define GUC_check_errmsg pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errmsg_string = format_elog_string
#define ItemPointerGetBlockNumberNoCheck(pointer) ( BlockIdGetBlockNumber(&(pointer)->ip_blkid) )
#define PG_HAVE_ATOMIC_ADD_FETCH_U32 
#define F_TSVECTOR_UPDATE_TRIGGER_COLUMN 3753
#define PG_LSNARRAYOID 3221
#define __SVE_NUM_ZREGS 32
#define ERRCODE_FDW_INVALID_STRING_LENGTH_OR_BUFFER_LENGTH MAKE_SQLSTATE('H','V','0','9','0')
#define F_NLIKEJOINSEL 1828
#define F_CSTRING_SEND 2501
#define F_GETPGUSERNAME 710
#define __LDBL_HAS_INFINITY__ 1
#define F_HAS_ANY_COLUMN_PRIVILEGE_OID_TEXT_TEXT 3026
#define TimestampGetDatum(X) Int64GetDatum(X)
#define RTOldBelowStrategyNumber 29
#define F_FLOAT8DIV 217
#define F_MULTIRANGE_INTERSECT_AGG_TRANSFN 4388
#define __ARM_FEATURE_IDIV 1
#define __FP_FAST_FMAF32 1
#define FRAMEOPTION_NONDEFAULT 0x00001
#define AF_PHONET PF_PHONET
#define F_PG_IDENTIFY_OBJECT_AS_ADDRESS 3382
#define CITUS_REBALANCER_APPLICATION_NAME_PREFIX "citus_rebalancer gpid="
#define INSTR_TIME_SET_ZERO(t) ((t).tv_sec = 0, (t).tv_nsec = 0)
#define ACL_REFERENCES (1<<5)
#define F_DATE_LT_TIMESTAMP 2338
#define ERRCODE_FDW_INVALID_COLUMN_NAME MAKE_SQLSTATE('H','V','0','0','7')
#define ILL_ILLOPN ILL_ILLOPN
#define F_UNKNOWNSEND 2417
#define F_BOX_POINT 4091
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define F_LIKEJOINSEL 1825
#define HASH_PARTITION 0x0001
#define Anum_pg_type_typname 2
#define ENOLINK 67
#define F_VARBITEQ 1666
#define __SSIZE_T_TYPE __SWORD_TYPE
#define F_MAKE_DATE 3846
#define F_KOI8R_TO_UTF8 4355
#define ATTSTATSSLOT_VALUES 0x01
#define F_INT4_ACCUM 1835
#define SO_BROADCAST 6
#define F_ANYENUM_IN 3504
#define F_MULTIRANGE_OVERLEFT_RANGE 4265
#define __DEV_T_TYPE __UQUAD_TYPE
#define USECS_PER_SEC INT64CONST(1000000)
#define __SAFE_LIB_ERRNO_H__ 
#define F_TXID_CURRENT_IF_ASSIGNED 3348
#define F_HAS_FUNCTION_PRIVILEGE_OID_OID_TEXT 2259
#define TSMULTIRANGEARRAYOID 6152
#define SIGIO SIGPOLL
#define PACKAGE_TARNAME "postgresql"
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __STDC_UTF_16__ 1
#define F_REGCONFIGIN 3736
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define le32toh(x) __uint32_identity (x)
#define SearchSysCacheCopy1(cacheId,key1) SearchSysCacheCopy(cacheId, key1, 0, 0, 0)
#define F_INTERVAL_SUPPORT 3918
#define F_ENUM_LE 3512
#define F_BIT_SEND 2457
#define SearchSysCacheCopy2(cacheId,key1,key2) SearchSysCacheCopy(cacheId, key1, key2, 0, 0)
#define F_NUMERIC_POLY_COMBINE 3338
#define F_PG_GET_PARTKEYDEF 3352
#define SearchSysCacheList1(cacheId,key1) SearchSysCacheList(cacheId, 1, key1, 0, 0)
#define EXECNODES_H 
#define _STRINGS_H 1
#define FLOAT8OID 701
#define F_ISFINITE_DATE 1373
#define ERRCODE_PROGRAM_LIMIT_EXCEEDED MAKE_SQLSTATE('5','4','0','0','0')
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define F_BTHANDLER 330
#define F_VARBITCMP 1672
#define CACHELINEALIGN(LEN) TYPEALIGN(PG_CACHE_LINE_SIZE, (LEN))
#define F_BRIN_INCLUSION_OPCINFO 4105
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define ItemPointerGetOffsetNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetOffsetNumberNoCheck(pointer) )
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define F_ARRAY_REMOVE 3167
#define SYNC_METHOD_FDATASYNC 1
#define _SC_PII_OSI _SC_PII_OSI
#define F_NAME_VARCHAR 1400
#define F_MACADDR_SEND 2495
#define ERRCODE_RAISE_EXCEPTION MAKE_SQLSTATE('P','0','0','0','1')
#define F_DATE_PART_TEXT_TIMETZ 1273
#define F_PG_LSN_IN 3229
#define F_BOOL_ACCUM 3496
#define F_TSMATCHJOINSEL 3687
#define _POSIX_V7_LPBIG_OFFBIG -1
#define STDOUT_FILENO 1
#define F_JSONB_INSERT 3579
#define __INT_WIDTH__ 32
#define O_NDELAY O_NONBLOCK
#define __S_IFCHR 0020000
#define F_INT4SHL 1902
#define S_ISVTX __S_ISVTX
#define ERRCODE_IS_CATEGORY(ec) (((ec) & ~((1 << 12) - 1)) == 0)
#define CONSTRAINT_FOREIGN 'f'
#define BOXARRAYOID 1020
#define TYPEALIGN_DOWN(ALIGNVAL,LEN) (((uintptr_t) (LEN)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define PROC_XMIN_FLAGS (PROC_IN_VACUUM | PROC_IN_SAFE_IC)
#define HAVE_POSIX_FALLOCATE 1
#define HEAP_HASEXTERNAL 0x0004
#define __STDC_IEC_559__ 1
#define MaxHeapTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(SizeofHeapTupleHeader) + sizeof(ItemIdData))))
#define F_VERSION 89
#define isprint_l(c,l) __isprint_l ((c), (l))
#define SO_TYPE 3
#define __STDC_ISO_10646__ 201706L
#define CHECKPOINT_IS_SHUTDOWN 0x0001
#define MOD_MICRO ADJ_MICRO
#define EXEC_FLAG_EXPLAIN_ONLY 0x0001
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define TYPCATEGORY_RANGE 'R'
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define BoolIsValid(boolean) ((boolean) == false || (boolean) == true)
#define F_OIDVECTOROUT 55
#define DatumGetChar(X) ((char) (X))
#define F_DATE_SORTSUPPORT 3136
#define __DECIMAL_DIG__ 36
#define F_QUOTE_NULLABLE_TEXT 1289
#define ERRCODE_INVALID_SQL_STATEMENT_NAME MAKE_SQLSTATE('2','6','0','0','0')
#define __USE_FORTIFY_LEVEL 2
#define F_ACOS 1601
#define LOCK_EX 2
#define F_BITSHIFTRIGHT 1678
#define HeapTupleHeaderGetRawCommandId(tup) ( (tup)->t_choice.t_heap.t_field3.t_cid )
#define UNKNOWNOID 705
#define TS_PREC_INV 1000000.0
#define XLogArchiveCommandSet() (XLogArchiveCommand[0] != '\0')
#define Anum_pg_index_indkey 15
#define EIO 5
#define F_CASH_DIV_FLT4 847
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define F_CASH_DIV_FLT8 897
#define IS_OTHER_REL(rel) ((rel)->reloptkind == RELOPT_OTHER_MEMBER_REL || (rel)->reloptkind == RELOPT_OTHER_JOINREL || (rel)->reloptkind == RELOPT_OTHER_UPPER_REL)
#define F_TEXTANYCAT 2003
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define F_HAS_FUNCTION_PRIVILEGE_OID_TEXT_TEXT 2258
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define F_MACADDR_GE 834
#define ERRCODE_E_R_I_E_EVENT_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','3')
#define _LARGEFILE_SOURCE 1
#define F_NAMELTTEXT 241
#define ENABLE_NLS 1
#define ENETDOWN 100
#define ESTALE 116
#define HeapTupleHasNulls(tuple) (((tuple)->t_data->t_infomask & HEAP_HASNULL) != 0)
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define LC_TIME __LC_TIME
#define HAVE_STRTOF 1
#define F_UNISTR 6198
#define AutovacuumScheduleLock (&MainLWLockArray[23].lock)
#define SEGV_ACCADI SEGV_ACCADI
#define F_JSON_BUILD_OBJECT_ 3201
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define ALIGNOF_LONG 8
#define F_OCTET_LENGTH_BPCHAR 1375
#define PTRDIFF_MAX (9223372036854775807L)
#define F_BTFLOAT4CMP 354
#define HAVE__BUILTIN_CONSTANT_P 1
#define __ASM_SIGCONTEXT_H 
#define IP_ORIGDSTADDR 20
#define _SC_UINT_MAX _SC_UINT_MAX
#define F_ANYARRAY_IN 2296
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define F_INTERVAL_HASH_EXTENDED 3418
#define DELAYTIMER_MAX 2147483647
#define ConstraintTypidIndexId 2666
#define HAVE_STDLIB_H 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define F_NAMEICREGEXEQ 1240
#define IPV6_DSTOPTS 59
#define OPEN_SYNC_FLAG O_SYNC
#define F_XMLCOMMENT 2895
#define F_INT2AND 1892
#define F_LSEG_GT 1485
#define F_VAR_SAMP_FLOAT4 2644
#define F_VAR_SAMP_FLOAT8 2645
#define SOL_ICMPV6 58
#define FLOAT8PASSBYVAL true
#define F_COSH 2463
#define F_ANYCOMPATIBLENONARRAY_OUT 5093
#define ERRCODE_INDETERMINATE_DATATYPE MAKE_SQLSTATE('4','2','P','1','8')
#define F_VARCHAROUT 1047
#define F_HAS_TABLESPACE_PRIVILEGE_OID_OID_TEXT 2393
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define F_MACADDR_GT 833
#define ERRCODE_NO_DATA_FOUND MAKE_SQLSTATE('P','0','0','0','2')
#define BehaviorIsRestrictOrNoAction(x) ((x) == FKCONSTR_ACTION_NOACTION || (x) == FKCONSTR_ACTION_RESTRICT)
#define F_COTD 2738
#define F_RANGESEL 3169
#define AF_BLUETOOTH PF_BLUETOOTH
#define HeapTupleHeaderSetXminCommitted(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_COMMITTED) )
#define F_XIDSEND 2441
#define L_tmpnam 20
#define TRIGGEROID 2279
#define _DIRENT_HAVE_D_RECLEN 
#define PG_GETARG_BPCHAR_P(n) DatumGetBpCharP(PG_GETARG_DATUM(n))
#define PG_DIAG_SCHEMA_NAME 's'
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define isascii(c) __isascii (c)
#define __GNUC__ 11
#define PRIoLEAST16 "o"
#define timestamptz_cmp_internal(dt1,dt2) timestamp_cmp_internal(dt1, dt2)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define IPPROTO_TCP IPPROTO_TCP
#define F_PG_WALFILE_NAME_OFFSET 2850
#define __CFLOAT64X _Complex _Float64x
#define PG_DIAG_SQLSTATE 'C'
#define F_MACADDR8_AND 4121
#define F_TO_REGOPERATOR 3476
#define appendStringInfoCharMacro(str,ch) (((str)->len + 1 >= (str)->maxlen) ? appendStringInfoChar(str, ch) : (void)((str)->data[(str)->len] = (ch), (str)->data[++(str)->len] = '\0'))
#define HEAP_XACT_MASK 0xFFF0
#define F_PG_LSN_GT 3235
#define JSONBARRAYOID 3807
#define OPENSSL_API_COMPAT 0x10001000L
#define F_MIN_ANYARRAY 2051
#define PageIsEmpty(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData)
#define F_CASH_MUL_INT8 3344
#define F_SPG_KD_PICKSPLIT 4025
#define F_LENGTH_LSEG 1530
#define HAVE_PTHREAD_BARRIER_WAIT 1
#define AF_NFC PF_NFC
#define ERRCODE_WARNING_NULL_VALUE_ELIMINATED_IN_SET_FUNCTION MAKE_SQLSTATE('0','1','0','0','3')
#define LOCK_NB 4
#define CSTRINGARRAYOID 1263
#define F_SPLIT_PART 2088
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define HAVE_LZ4_H 1
#define EAI_MEMORY -10
#define F_INT4_AVG_ACCUM_INV 3571
#define F_ANYCOMPATIBLEMULTIRANGE_OUT 4227
#define SO_DETACH_REUSEPORT_BPF 68
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define F_TEXTREGEXEQ_SUPPORT 1364
#define __BIGGEST_ALIGNMENT__ 16
#define F_TIMESTAMP_LE_TIMESTAMPTZ 2521
#define sa_handler __sigaction_handler.sa_handler
#define LONG_MAX __LONG_MAX__
#define IPV6_RECVHOPOPTS 53
#define F_PG_READ_BINARY_FILE_TEXT_INT8_INT8 3827
#define pg_read_barrier() pg_read_barrier_impl()
#define ItemIdGetFlags(itemId) ((itemId)->lp_flags)
#define JSONPATHOID 4072
#define __LC_MESSAGES 5
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define PG_GETARG_VARCHAR_PP(n) DatumGetVarCharPP(PG_GETARG_DATUM(n))
#define list_make_ptr_cell(v) ((ListCell) {.ptr_value = (v)})
#define HEAP_HOT_UPDATED 0x4000
#define F_ARRAY_APPEND 378
#define F_HAS_DATABASE_PRIVILEGE_OID_TEXT 2255
#define PRIoLEAST64 __PRI64_PREFIX "o"
#define __GLIBC_USE_LIB_EXT2 1
#define F_GTSVECTOR_CONSISTENT_INTERNAL_TSVECTOR_INT2_OID_INTERNAL 3654
#define F_PG_DEPENDENCIES_RECV 3406
#define HAVE_GETRLIMIT 1
#define WTERMSIG(status) __WTERMSIG (status)
#define EXEC_FLAG_WITH_NO_DATA 0x0020
#define ERRCODE_ZERO_LENGTH_CHARACTER_STRING MAKE_SQLSTATE('2','2','0','0','F')
#define F_NOTLIKE_BYTEA_BYTEA 2008
#define __DBL_IS_IEC_60559__ 2
#define __FLT32_HAS_INFINITY__ 1
#define F_INTERVAL_MUL 1618
#define LOCK_RW 192
#define pg_compiler_barrier() pg_compiler_barrier_impl()
#define EXIT_SUCCESS 0
#define PrevProcessUtility_compat(a,b,c,d,e,f,g,h) PrevProcessUtility(a, b, c, d, e, f, g, h)
#define F_INT4_INT2 313
#define F_INT4_INT8 480
#define INSTR_TIME_SET_CURRENT_LAZY(t) (INSTR_TIME_IS_ZERO(t) ? INSTR_TIME_SET_CURRENT(t), true : false)
#define ERRCODE_AMBIGUOUS_ALIAS MAKE_SQLSTATE('4','2','P','0','9')
#define PG_GETARG_INTERVAL_P(n) DatumGetIntervalP(PG_GETARG_DATUM(n))
#define ACL_CREATE_TEMP_CHR 'T'
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define PG_BSWAP_H 
#define DatumGetName(X) ((Name) DatumGetPointer(X))
#define F_OIDVECTORRECV 2420
#define VARLENA_EXTSIZE_MASK ((1U << VARLENA_EXTSIZE_BITS) - 1)
#define SCM_CREDENTIALS SCM_CREDENTIALS
#define F_QUOTE_LITERAL_TEXT 1283
#define RowShareLock 2
#define F_INT28DIV 948
#define ELF_PRARGSZ (80)
#define expand_function_arguments_compat(a,b,c,d) expand_function_arguments(a, b, c, d)
#define HAVE_FDATASYNC 1
#define F_SUBSTRING_BYTEA_INT4 2013
#define ITIMER_PROF ITIMER_PROF
#define GUC_LIST_QUOTE 0x0002
#define snprintf pg_snprintf
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define PRId8 "d"
#define F_BRIN_MINMAX_CONSISTENT 3385
#define XL_ROUTINE(...) &(XLogReaderRoutine){__VA_ARGS__}
#define HAVE_READLINK 1
#define si_syscall _sifields._sigsys._syscall
#define F_INT8_SUM 1842
#define LOCK_UN 8
#define F_ELEM_CONTAINED_BY_RANGE 3860
#define F_HAS_LANGUAGE_PRIVILEGE_TEXT_TEXT 2266
#define NL_LANGMAX _POSIX2_LINE_MAX
#define F_SINH 2462
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define PG_SNAPSHOTARRAYOID 5039
#define VARATT_IS_EXPANDED_HEADER(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_header == (uint32) EOH_HEADER_MAGIC)
#define HASH_BLOBS 0x0020
#define XID8OID 5069
#define HAVE_SYS_UIO_H 1
#define HeapTupleHeaderSetMovedPartitions(tup) ItemPointerSetMovedPartitions(&(tup)->t_ctid)
#define F_FLOAT8SMALLER 224
#define __INTPTR_WIDTH__ 64
#define ERRCODE_RESTRICT_VIOLATION MAKE_SQLSTATE('2','3','0','0','1')
#define F_ISVERTICAL_LINE 1414
#define MAX_HANDLE_SZ 128
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define XLogRecBlockImageApply(decoder,block_id) ((decoder)->blocks[block_id].apply_image)
#define F_ISPARALLEL_LINE_LINE 1412
#define LONG_MIN (-LONG_MAX - 1L)
#define F_NUMERIC_NE 1719
#define PG_VERSION "14.5 (Ubuntu 14.5-0ubuntu0.22.04.1)"
#define F_ARRAY_TO_JSON_ANYARRAY 3153
#define F_DIAMETER 1469
#define F_TSVECTOR_LE 3617
#define F_AREAJOINSEL 140
#define INET_ADDRSTRLEN 16
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define SetListCellPtr(a,b) ((a)->ptr_value = (b))
#define F_INT8NOT 1907
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define PRIi8 "i"
#define ERRCODE_INVALID_TRANSACTION_STATE MAKE_SQLSTATE('2','5','0','0','0')
#define XLogRecGetDataLen(decoder) ((decoder)->main_data_len)
#define MakeExpandedObjectReadOnly(d,isnull,typlen) (((isnull) || (typlen) != -1) ? (d) : MakeExpandedObjectReadOnlyInternal(d))
#define _FEATURES_H 1
#define SCNiLEAST16 "hi"
#define Anum_pg_index_indislive 13
#define __S_IFREG 0100000
#define __SOCKADDR_ALLTYPES __SOCKADDR_ONETYPE (sockaddr) __SOCKADDR_ONETYPE (sockaddr_at) __SOCKADDR_ONETYPE (sockaddr_ax25) __SOCKADDR_ONETYPE (sockaddr_dl) __SOCKADDR_ONETYPE (sockaddr_eon) __SOCKADDR_ONETYPE (sockaddr_in) __SOCKADDR_ONETYPE (sockaddr_in6) __SOCKADDR_ONETYPE (sockaddr_inarp) __SOCKADDR_ONETYPE (sockaddr_ipx) __SOCKADDR_ONETYPE (sockaddr_iso) __SOCKADDR_ONETYPE (sockaddr_ns) __SOCKADDR_ONETYPE (sockaddr_un) __SOCKADDR_ONETYPE (sockaddr_x25)
#define LC_TIME_MASK (1 << __LC_TIME)
#define PG_DIAG_INTERNAL_QUERY 'q'
#define boolVal(v) intVal(v)
#define LC_ADDRESS __LC_ADDRESS
#define SIGABRT 6
#define ACL_ALL_RIGHTS_COLUMN (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_REFERENCES)
#define _GCC_WRAP_STDINT_H 
#define GUC_NOT_WHILE_SEC_REST 0x0400
#define POSIX_FADV_NORMAL 0
#define DatumGetInt16(X) ((int16) (X))
#define S_IFCHR __S_IFCHR
#define SCNiLEAST32 "i"
#define __dev_t_defined 
#define S_INIT_LOCK(lock) S_UNLOCK(lock)
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define F_VARBITGE 1668
#define F_PG_AVAILABLE_EXTENSION_VERSIONS 3083
#define Anum_pg_publication_pubinsert 5
#define HAVE_SYS_UN_H 1
#define SO_DONTROUTE 5
#define INETARRAYOID 1041
#define ERRCODE_FDW_COLUMN_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','5')
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define DatumGetInt32(X) ((int32) (X))
#define F_HAS_SCHEMA_PRIVILEGE_OID_TEXT_TEXT 2270
#define TTS_SHOULDFREE(slot) (((slot)->tts_flags & TTS_FLAG_SHOULDFREE) != 0)
#define IP_PMTUDISC_WANT 1
#define F_PG_LSN_OUT 3230
#define F_PG_STAT_GET_BACKEND_WAIT_EVENT 2853
#define __DBL_HAS_INFINITY__ 1
#define BKI_LOOKUP_OPT(catalog) 
#define F_HAS_COLUMN_PRIVILEGE_OID_TEXT_INT2_TEXT 3017
#define ERFKILL 132
#define __FLT16_DECIMAL_DIG__ 5
#define COMPLETION_TAG_BUFSIZE 64
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define LC_NAME_MASK (1 << __LC_NAME)
#define PG_GETARG_TEXT_PP(n) DatumGetTextPP(PG_GETARG_DATUM(n))
#define ERRCODE_DUPLICATE_FUNCTION MAKE_SQLSTATE('4','2','7','2','3')
#define _VA_LIST_ 
#define isspace_l(c,l) __isspace_l ((c), (l))
#define PRIo8 "o"
#define SCNiLEAST64 __PRI64_PREFIX "i"
#define F_FLOAT8GE 298
#define F_TSRANGE_SUBDIFF 3929
#define TYPCATEGORY_INVALID '\0'
#define ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE MAKE_SQLSTATE('0','3','0','0','0')
#define F_LOWER_INC_ANYRANGE 3851
#define PG_TRY() do { sigjmp_buf *_save_exception_stack = PG_exception_stack; ErrorContextCallback *_save_context_stack = error_context_stack; sigjmp_buf _local_sigjmp_buf; bool _do_rethrow = false; if (sigsetjmp(_local_sigjmp_buf, 0) == 0) { PG_exception_stack = &_local_sigjmp_buf
#define F_RANGE_EQ 3855
#define F_CIRCLE_OVERRIGHT 1456
#define F_HAS_TABLESPACE_PRIVILEGE_OID_TEXT 2395
#define F_TXID_SNAPSHOT_RECV 2941
#define COMPRESSION_LEVEL_MAX 19
#define F_WIN1251_TO_ISO 4319
#define __POSIX_FADV_NOREUSE 5
#define _POSIX_RE_DUP_MAX 255
#define SO_INCOMING_CPU 49
#define GUC_UNIT_KB 0x1000
#define F_JSONB_STRIP_NULLS 3262
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
#define F_TIMETZ_OUT 1351
#define INSTR_TIME_IS_ZERO(t) ((t).tv_nsec == 0 && (t).tv_sec == 0)
#define _LINUX_STDDEF_H 
#define _STDARG_H 
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define _PC_VDISABLE _PC_VDISABLE
#define __CHAR32_TYPE__ unsigned int
#define SO_COOKIE 57
#define F_LINE_HORIZONTAL 1499
#define F_DATE_PLI 1141
#define _BITS_STDIO2_H 1
#define get_partition_parent_compat(a,b) get_partition_parent(a, b)
#define HEAP_XMAX_IS_LOCKED_ONLY(infomask) (((infomask) & HEAP_XMAX_LOCK_ONLY) || (((infomask) & (HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK)) == HEAP_XMAX_EXCL_LOCK))
#define HEAP_XMAX_IS_MULTI 0x1000
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define F_JSONB_OBJECT_AGG 3270
#define ERRCODE_INVALID_OBJECT_DEFINITION MAKE_SQLSTATE('4','2','P','1','7')
#define DatumGetTransactionId(X) ((TransactionId) (X))
#define F_PG_OPTIONS_TO_TABLE 2289
#define F_FLOAT8LE 296
#define F_CONTJOINSEL 1303
#define GUC_H 
#define F_FLOAT8LT 295
#define Anum_pg_constraint_confrelid 12
#define SO_PEERSEC 31
#define _LINUX_TYPES_H 
#define F_PG_CONTROL_SYSTEM 3441
#define __PRIPTR_PREFIX "l"
#define F_PG_WAL_REPLAY_RESUME 3072
#define SOL_DECNET 261
#define PRIu8 "u"
#define __SIZEOF_WINT_T__ 4
#define PRIxLEAST8 "x"
#define F_FLOAT8MI 219
#define F_NUMERIC_UMINUS 1771
#define HeapTupleHeaderXminInvalid(tup) ( ((tup)->t_infomask & (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)) == HEAP_XMIN_INVALID )
#define HAVE_SYS_SHM_H 1
#define F_STDDEV_SAMP_INT2 2714
#define F_STDDEV_SAMP_INT4 2713
#define F_STDDEV_SAMP_INT8 2712
#define ENOTNAM 118
#define DynamicSharedMemoryControlLock (&MainLWLockArray[34].lock)
#define F_FLOAT8NE 294
#define INT32_MIN (-2147483647-1)
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define _LINUX_CLOSE_RANGE_H 
#define F_NUMRANGE_NUMERIC_NUMERIC_TEXT 3845
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define F_DATE_LE_TIMESTAMP 2339
#define __U16_TYPE unsigned short int
#define F_INT8_AVG_COMBINE 2785
#define CLD_EXITED CLD_EXITED
#define _STDIO_H 1
#define F_UNKNOWNOUT 110
#define PQfreeNotify(ptr) PQfreemem(ptr)
#define FIELDNO_EXPRCONTEXT_CASEDATUM 10
#define PG_NDISTINCTOID 3361
#define F_BTRIM_TEXT 885
#define SORTSUPPORT_H 
#define PRIx8 "x"
#define COMPRESSION_LEVEL_MIN 1
#define _PTRDIFF_T 
#define F_FLOAT8PL 218
#define DN_MULTISHOT 0x80000000
#define HeapTupleHeaderSetMatch(tup) ( (tup)->t_infomask2 |= HEAP_TUPLE_HAS_MATCH )
#define ItemIdSetUnused(itemId) ( (itemId)->lp_flags = LP_UNUSED, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define F_ISEMPTY_ANYMULTIRANGE 4237
#define F_INDEX_AM_HANDLER_IN 326
#define F_INT4_NUMERIC 1744
#define VARDATA_COMPRESSED_GET_COMPRESS_METHOD(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_tcinfo >> VARLENA_EXTSIZE_BITS)
#define SetInvalidVirtualTransactionId(vxid) ((vxid).backendId = InvalidBackendId, (vxid).localTransactionId = InvalidLocalTransactionId)
#define LOCALLOCK_LOCKMETHOD(llock) ((llock).tag.lock.locktag_lockmethodid)
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define F_BTRECORDIMAGECMP 3187
#define __FLT128_HAS_INFINITY__ 1
#define F_PG_LSN_HASH_EXTENDED 3413
#define PG_DIAG_MESSAGE_PRIMARY 'M'
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define MultiXactMemberSLRULock (&MainLWLockArray[15].lock)
#define F_GETOWN __F_GETOWN
#define F_PG_GET_FUNCTION_IDENTITY_ARGUMENTS 2232
#define F_UTF8_TO_GBK 4371
#define PG_GET_COLLATION() (fcinfo->fncollation)
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define F_REGPROCOUT 45
#define F_GENERATE_SERIES_INT8_INT8_INT8 1068
#define F_TEXTCAT 1258
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define HAVE_UNISTD_H 1
#define PG_GET_OPCLASS_OPTIONS() get_fn_opclass_options(fcinfo->flinfo)
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define alloca(size) __builtin_alloca (size)
#define ERRCODE_INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION MAKE_SQLSTATE('2','2','0','1','G')
#define IPV6_2292RTHDR 5
#define F_ARRAY_DIMS 747
#define IP_MULTICAST_ALL 49
#define PF_IRDA 23
#define TYPCATEGORY_PSEUDOTYPE 'P'
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define ReplicationOriginLock (&MainLWLockArray[40].lock)
#define _DIRENT_HAVE_D_OFF 
#define F_TIMESTAMP_LE 2055
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define INT_LEAST32_WIDTH 32
#define F_BRIN_MINMAX_MULTI_DISTANCE_FLOAT4 4624
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define F_BRIN_MINMAX_MULTI_DISTANCE_FLOAT8 4625
#define __FLT64X_HAS_QUIET_NAN__ 1
#define HIGHBIT (0x80)
#define PG_HAVE_ATOMIC_ADD_FETCH_U64 
#define GROUPING_CAN_USE_SORT 0x0001
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define COLUMNAR_METADATA_H 
#define IPV6_RECVTCLASS 66
#define ERRCODE_PROTOCOL_VIOLATION MAKE_SQLSTATE('0','8','P','0','1')
#define O_RSYNC O_SYNC
#define F_ACLCONTAINS 1037
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define F_NAMESEND 2423
#define F_XID8CMP 5096
#define F_XID8SEND 5083
#define LOCKOPTIONS_H 
#define PageSetAllVisible(page) (((PageHeader) (page))->pd_flags |= PD_ALL_VISIBLE)
#define F_LOG_NUMERIC 1741
#define F_PG_STAT_GET_BACKEND_START 1391
#define EXPANDEDDATUM_H 
#define HeapTupleHeaderSetTypeId(tup,typeid) ( (tup)->t_choice.t_datum.datum_typeid = (typeid) )
#define __key_t_defined 
#define USE_DSM_MMAP 
#define FRAMEOPTION_GROUPS 0x00008
#define TSVECTORARRAYOID 3643
#define F_PG_STAT_GET_DB_NUMBACKENDS 1941
#define ERRCODE_UNDEFINED_PARAMETER MAKE_SQLSTATE('4','2','P','0','2')
#define SO_RCVLOWAT 18
#define F_BIT_AND_INT8 2240
#define F_PG_REPLICATION_ORIGIN_XACT_SETUP 6010
#define F_PG_BACKUP_START_TIME 3814
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define SECURITY_RESTRICTED_OPERATION 0x0002
#define ERRCODE_SQL_JSON_MEMBER_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','A')
#define F_RI_FKEY_SETNULL_UPD 1651
#define UTIME_NOW ((1l << 30) - 1l)
#define AssertArg(condition) ((void)true)
#define F_GIST_POINT_COMPRESS 1030
#define F_TIMESTAMPTZ_PL_INTERVAL 1189
#define __HAVE_FLOAT32X 1
#define InvalidStrategy ((StrategyNumber) 0)
#define FIELDNO_HEAPTUPLEHEADERDATA_BITS 5
#define __FLT_EVAL_METHOD_C99__ 0
#define _POSIX_JOB_CONTROL 1
#define Anum_pg_class_relhasrules 20
#define RelCacheInitLock (&MainLWLockArray[16].lock)
#define Anum_pg_type_typreceive 18
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __LDBL_MAX_EXP__ 16384
#define st_ctime st_ctim.tv_sec
#define DECLARE_TOAST(name,toastoid,indexoid) extern int no_such_variable
#define NUM_PREDICATELOCK_PARTITIONS (1 << LOG2_NUM_PREDICATELOCK_PARTITIONS)
#define F_ISO_TO_WIN1251 4318
#define ERRCODE_E_R_I_E_SRF_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','2')
#define F_PG_ADVISORY_XACT_LOCK_INT4_INT4 3093
#define F_SHIFT_JIS_2004_TO_EUC_JIS_2004 4387
#define ERRCODE_CANT_CHANGE_RUNTIME_PARAM MAKE_SQLSTATE('5','5','P','0','2')
#define F_PG_STAT_GET_DB_STAT_RESET_TIME 3074
#define F_RANGE_OVERLAPS 3857
#define TUPTABLE_H 
#define S_IFREG __S_IFREG
#define F_DATETIMETZ_PL 1297
#define ESCAPE_STRING_SYNTAX 'E'
#define F_INT4_CHAR 77
#define RTKNNSearchStrategyNumber 15
#define __FLT64_MIN_EXP__ (-1021)
#define F_TIMEZONE_TEXT_TIMESTAMPTZ 1159
#define F_TRUNC_NUMERIC 1710
#define ERRCODE_SQL_JSON_SCALAR_REQUIRED MAKE_SQLSTATE('2','2','0','3','F')
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PF_MAX 46
#define PROCSIGNAL_H 
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define LC_COLLATE __LC_COLLATE
#define F_MACADDR_OUT 437
#define __USE_POSIX199309 1
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define SHMEM_INDEX_KEYSIZE (48)
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define __FDS_BITS(set) ((set)->fds_bits)
#define F_PG_XACT_COMMIT_TIMESTAMP_ORIGIN 6168
#define XLogRecPtrIsInvalid(r) ((r) == InvalidXLogRecPtr)
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define EvalPlanQualSetSlot(epqstate,slot) ((epqstate)->origslot = (slot))
#define F_SPG_TEXT_INNER_CONSISTENT 4030
#define F_INT8XOR 1906
#define __FLT16_MIN_10_EXP__ (-4)
#define F_POLYGON_INT4_CIRCLE 1475
#define F_JSONB_TO_TSVECTOR_JSONB_JSONB 4213
#define F_WIDTH_BUCKET_NUMERIC_NUMERIC_NUMERIC_INT4 2170
#define F_INT4SEND 2407
#define F_PG_TRY_ADVISORY_LOCK_INT4_INT4 2888
#define F_HAS_ANY_COLUMN_PRIVILEGE_OID_OID_TEXT 3027
#define F_BOOLOR_STATEFUNC 2516
#define __UINT16_MAX__ 0xffff
#define F_PG_STAT_GET_TUPLES_RETURNED 1929
#define dsa_pointer_atomic_init pg_atomic_init_u64
#define F_INT8INC_ANY 2804
#define HeapTupleHeaderGetDatumLength(tup) VARSIZE(tup)
#define EIDRM 43
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define F_PG_READ_FILE_OLD 4100
#define F_OVERLAPS_TIME_INTERVAL_TIME_TIME 1311
#define F_BRIN_MINMAX_MULTI_DISTANCE_UUID 4628
#define F_CIRCLE_MUL_PT 1148
#define _PC_NAME_MAX _PC_NAME_MAX
#define F_LO_FROM_BYTEA 3457
#define F_JSONB_OUT 3804
#define F_NUMERIC_DESERIALIZE 3336
#define HAVE_STRUCT_TM_TM_ZONE 1
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define PG_HAVE_ATOMIC_FETCH_AND_U32 
#define INTSTYLE_POSTGRES 0
#define F_TRUNC_MACADDR 753
#define ADJ_NANO 0x2000
#define HEAP_XMAX_KEYSHR_LOCK 0x0010
#define F_INT4EQ 65
#define F_HAS_LANGUAGE_PRIVILEGE_OID_OID_TEXT 2265
#define COLUMNAR_VERSION_MINOR 0
#define RelationSetTargetBlock(relation,targblock) do { RelationOpenSmgr(relation); (relation)->rd_smgr->smgr_targblock = (targblock); } while (0)
#define MaxLockTupleMode LockTupleExclusive
#define SizeofHeapTupleHeader offsetof(HeapTupleHeaderData, t_bits)
#define F_PG_STAT_GET_XACT_NUMSCANS 3037
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ERRCODE_INTERNAL_ERROR MAKE_SQLSTATE('X','X','0','0','0')
#define F_REGR_AVGY 2823
#define F_TIMESTAMPTZ_LARGER 1196
#define F_COVAR_POP 2827
#define ACL_ALL_RIGHTS_STR "arwdDxtXUCTc"
#define RelationRelationId 1259
#define NUMRANGEOID 3906
#define __siginfo_t_defined 1
#define F_PG_LOGICAL_SLOT_PEEK_BINARY_CHANGES 3785
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define F_VARCHAR_NAME 1401
#define IPV6_AUTOFLOWLABEL 70
#define F_INT4GT 147
#define SCNiMAX __PRI64_PREFIX "i"
#define CHECK_FOR_INTERRUPTS() do { if (INTERRUPTS_PENDING_CONDITION()) ProcessInterrupts(); } while(0)
#define IPV6_2292PKTINFO 2
#define PROCLIST_TYPES_H 
#define AF_IUCV PF_IUCV
#define __ASM_POSIX_TYPES_H 
#define F_RANGE_INTERSECT 3868
#define AmWalWriterProcess() (MyAuxProcType == WalWriterProcess)
#define F_GIST_BOX_PICKSPLIT 2582
#define F_TAND 2737
#define F_TANH 2464
#define HAVE_SYNCFS 1
#define __UINT64_C(c) c ## UL
#define PRIXLEAST16 "X"
#define F_INT4IN 42
#define ILL_ILLTRP ILL_ILLTRP
#define isprint(c) __isctype((c), _ISprint)
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define F_DENSE_RANK_ 3102
#define F_PG_DDL_COMMAND_SEND 90
#define SET_VARSIZE_4B_C(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2) | 0x02)
#define ERRCODE_INVALID_XML_PROCESSING_INSTRUCTION MAKE_SQLSTATE('2','2','0','0','T')
#define F_ANYELEMENT_IN 2312
#define lfourth_int(l) lfirst_int(list_nth_cell(l, 3))
#define SA_RESETHAND 0x80000000
#define F_TIMEDATE_PL 1296
#define F_CHARRECV 2434
#define RELPATH_H 
#define Anum_pg_dist_partition_colocationid 4
#define F_TIMESTAMP_MI 2031
#define FIELDNO_AGGSTATE_CURRENT_SET 20
#define _STDC_PREDEF_H 1
#define ESLEMIN ( 402 )
#define PRIXLEAST32 "X"
#define PERFORM_DELETION_SKIP_EXTENSIONS 0x0010
#define RELSCAN_H 
#define F_CHARLT 1246
#define ERRCODE_TO_CATEGORY(ec) ((ec) & ((1 << 12) - 1))
#define PF_RDS 21
#define PGDLLEXPORT 
#define DEFAULT_SPINS_PER_DELAY 100
#define PARTITION_STRATEGY_HASH 'h'
#define HAVE_GCC__SYNC_INT32_CAS 1
#define F_BIT_RECV 2456
#define SOCK_DGRAM SOCK_DGRAM
#define F_INT4LE 149
#define F_EUC_JP_TO_MIC 4326
#define DN_RENAME 0x00000010
#define F_HASHNAME 455
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define ERRCODE_INDEX_CORRUPTED MAKE_SQLSTATE('X','X','0','0','2')
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define F_STDDEV_POP_INT4 2725
#define F_ANYCOMPATIBLE_OUT 5087
#define F_SIMILAR_ESCAPE 1623
#define F_BOOL_ALLTRUE 3498
#define _SYS_SOCKET_H 1
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define MSG_CONFIRM MSG_CONFIRM
#define TRAP_TRACE TRAP_TRACE
#define PF_FILE PF_LOCAL
#define F_ISO8859_1_TO_UTF8 4374
#define F_DATE_GE_TIMESTAMPTZ 2355
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define F_INT4NE 144
#define PRIXLEAST64 __PRI64_PREFIX "X"
#define F_HASHTIDEXTENDED 2234
#define BACKUP_LABEL_OLD "backup_label.old"
#define HAVE_STDIO_H 1
#define F_TIME_MI_TIME 1690
#define F_WIN866_TO_MIC 4308
#define PARTDEFS_H 
#define F_PG_COLUMN_IS_UPDATABLE 3843
#define F_PG_GET_VIEWDEF_TEXT 1640
#define INTERRUPTS_PENDING_CONDITION() (unlikely(InterruptPending))
#define ControlFileLock (&MainLWLockArray[9].lock)
#define F_NTILE 3105
#define F_NUMERIC_SEND 2461
#define _POSIX_STREAM_MAX 8
#define F_INT4PL 177
#define REPLICATION_MODEL_INVALID 'i'
#define IPV6_MULTICAST_HOPS 18
#define ACL_ALL_RIGHTS_TYPE (ACL_USAGE)
#define F_PG_OPERATOR_IS_VISIBLE 2082
#define F_RI_FKEY_NOACTION_DEL 1654
#define INTALIGN(LEN) TYPEALIGN(ALIGNOF_INT, (LEN))
#define isupper_l(c,l) __isupper_l ((c), (l))
#define F_TIMESTAMPTZ_GE 1156
#define COLUMNAR_VERSION_MAJOR 2
#define F_OVERLAY_TEXT_TEXT_INT4_INT4 1404
#define DECLARE_ARRAY_FOREIGN_KEY_OPT(cols,reftbl,refcols) extern int no_such_variable
#define F_VOID_IN 2298
#define F_PG_GET_REPLICA_IDENTITY_INDEX 6120
#define HAVE_LIBPAM 1
#define ACL_EXECUTE (1<<7)
#define MaxAllocSize ((Size) 0x3fffffff)
#define __S_IFDIR 0040000
#define F_MAX_INET 3564
#define USE_POSIX_FADVISE 
#define _POSIX_TRACE_INHERIT -1
#define __stub_gtty 
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define F_BRIN_MINMAX_MULTI_DISTANCE_INET 4636
#define F_INT48DIV 1281
#define F_HAS_COLUMN_PRIVILEGE_NAME_TEXT_TEXT_TEXT 3012
#define F_ACLITEMEQ 1062
#define ACL_ALL_RIGHTS_RELATION (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_DELETE|ACL_TRUNCATE|ACL_REFERENCES|ACL_TRIGGER)
#define F_TIMESTAMPTZ_IN 1150
#define F_EQSEL 101
#define F_EUC_JP_TO_SJIS 4324
#define si_utime _sifields._sigchld.si_utime
#define F_TSQUERY_CMP 3668
#define ItemIdGetLength(itemId) ((itemId)->lp_len)
#define MSG_BATCH MSG_BATCH
#define CHECKPOINT_CAUSE_XLOG 0x0080
#define LC_PAPER __LC_PAPER
#define F_JSONPATH_OUT 4003
#define F_POSITION_TEXT_TEXT 849
#define F_EUC_JIS_2004_TO_SHIFT_JIS_2004 4386
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define STRATNUM_H 
#define FFSYNC O_FSYNC
#define __FLT64X_DIG__ 33
#define __wur __attribute_warn_unused_result__
#define SIGHUP 1
#define F_ARRAY_AGG_ARRAY_TRANSFN 4051
#define __FLT16_DIG__ 3
#define PageGetContents(page) ((char *) (page) + MAXALIGN(SizeOfPageHeaderData))
#define F_BITSHIFTLEFT 1677
#define SET_LOCKTAG_ADVISORY(locktag,id1,id2,id3,id4) ((locktag).locktag_field1 = (id1), (locktag).locktag_field2 = (id2), (locktag).locktag_field3 = (id3), (locktag).locktag_field4 = (id4), (locktag).locktag_type = LOCKTAG_ADVISORY, (locktag).locktag_lockmethodid = USER_LOCKMETHOD)
#define SYNC_METHOD_FSYNC_WRITETHROUGH 3
#define VARATT_IS_EXTERNAL_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SIG_UNBLOCK 1
#define PARSENODES_H 
#define F_TIMESTAMPTZ_MI 1188
#define SIGTSTP 20
#define F_CHARLE 72
#define IN_CLASSB_MAX 65536
#define Int8GetDatum(X) ((Datum) (X))
#define F_PG_IS_OTHER_TEMP_SCHEMA 2855
#define F_PG_LS_DIR_TEXT_BOOL_BOOL 3297
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define _ISOC95_SOURCE 1
#define FullTransactionIdEquals(a,b) ((a).value == (b).value)
#define EL2HLT 51
#define F_PG_REPLICATION_SLOT_ADVANCE 3878
#define F_INT2SHL 1896
#define __ARM_64BIT_STATE 1
#define SIZEOF_OFF_T 8
#define MAXPGPATH 1024
#define GetPerTupleExprContext(estate) ((estate)->es_per_tuple_exprcontext ? (estate)->es_per_tuple_exprcontext : MakePerTupleExprContext(estate))
#define BYTE_ORDER __BYTE_ORDER
#define s6_addr __in6_u.__u6_addr8
#define F_TEXTRECV 2414
#define PageGetSpecialSize(page) ((uint16) (PageGetPageSize(page) - ((PageHeader)(page))->pd_special))
#define __SIZEOF_INT128__ 16
#define VARSIZE_ANY_EXHDR(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR)-VARHDRSZ_EXTERNAL : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR)-VARHDRSZ_SHORT : VARSIZE_4B(PTR)-VARHDRSZ))
#define F_NUMERIC_ACCUM_INV 3548
#define F_PG_EVENT_TRIGGER_TABLE_REWRITE_REASON 4567
#define _BITS_TYPESIZES_H 1
#define F_REGCOLLATIONOUT 4194
#define F_COUNT_ANY 2147
#define IPV6_HOPLIMIT 52
#define LOCKBIT_ON(lockmode) (1 << (lockmode))
#define IndexRelationGetNumberOfKeyAttributes(relation) ((relation)->rd_index->indnkeyatts)
#define TopSubTransactionId ((SubTransactionId) 1)
#define SPIN_H 
#define EINVAL 22
#define WSTOPSIG(status) __WSTOPSIG (status)
#define F_HASHENUMEXTENDED 3414
#define ereport_domain(elevel,domain,...) do { pg_prevent_errno_in_scope(); if (__builtin_constant_p(elevel) && (elevel) >= ERROR ? errstart_cold(elevel, domain) : errstart(elevel, domain)) __VA_ARGS__, errfinish(__FILE__, __LINE__, PG_FUNCNAME_MACRO); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define ESLEMAX ( 403 )
#define Anum_pg_constraint_condeferred 6
#define ERRCODE_INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','3')
#define RelationAllowsEarlyPruning(rel) ( RelationIsPermanent(rel) && !IsCatalogRelation(rel) && !RelationIsAccessibleInLogicalDecoding(rel) )
#define RAND_MAX 2147483647
#define F_AGE_TIMESTAMP 2059
#define __FLT64X_HAS_INFINITY__ 1
#define GENBKI_H 
#define SS_ONSTACK SS_ONSTACK
#define F_NETWORK_SUPEQ 930
#define VARDATA_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_data)
#define PageXLogRecPtrGet(val) ((uint64) (val).xlogid << 32 | (val).xrecoff)
#define Anum_pg_class_relreplident 26
#define IndexTupleHasNulls(itup) ((((IndexTuple) (itup))->t_info & INDEX_NULL_MASK))
#define __need___va_list 
#define F_UUID_GE 2957
#define _SC_PIPE _SC_PIPE
#define UINT16_WIDTH 16
#define F_NETWORKJOINSEL 3561
#define __INT16_MAX__ 0x7fff
#define __THROWNL __attribute__ ((__nothrow__))
#define PG_DIST_PARTITION_H 
#define F_INET_SPG_LEAF_CONSISTENT 3799
#define TYPCATEGORY_UNKNOWN 'X'
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define F_PG_STAT_GET_DB_CONFLICT_ALL 3070
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define F_GIST_POINT_SORTSUPPORT 3435
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_TEXT_TEXT 3004
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define SHARD_NAME_SEPARATOR '_'
#define F_INT4MULTIRANGE__INT4RANGE 4282
#define SLAB_DEFAULT_BLOCK_SIZE (8 * 1024)
#define Anum_pg_index_indrelid 2
#define F_PG_DATABASE_SIZE_NAME 2168
#define F_TEXT_XML 2922
#define _POSIX_QLIMIT 1
#define BTGreaterStrategyNumber 5
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define SOL_NETBEUI 267
#define COMMAND_OK_IN_PARALLEL_MODE 0x0002
#define LC_NUMERIC __LC_NUMERIC
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define AF_MPLS PF_MPLS
#define CURSOR_OPT_ASENSITIVE 0x0010
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define NOTICE 18
#define IPV6_PMTUDISC_DO 2
#define F_HAS_TYPE_PRIVILEGE_NAME_TEXT_TEXT 3138
#define _SYS_PROCFS_H 1
#define STA_MODE 0x4000
#define F_NUMERIC_FLOAT4 1742
#define __F_GETOWN_EX 16
#define SpecTokenOffsetNumber 0xfffe
#define F_NUMERIC_FLOAT8 1743
#define Anum_pg_sequence_seqincrement 4
#define Anum_pg_class_relnamespace 3
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define TEXTDOMAIN NULL
#define F_BRIN_MINMAX_MULTI_DISTANCE_INT2 4621
#define F_BRIN_MINMAX_MULTI_DISTANCE_INT4 4622
#define OUTER_VAR 65001
#define F_NUMERIC_POLY_DESERIALIZE 3340
#define ADJ_OFFSET_SS_READ 0xa001
#define dlist_reverse_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->prev ? (iter).end->prev : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->prev)
#define F_PG_GET_VIEWDEF_OID_INT4 3159
#define HAVE_LINK 1
#define SOL_IRDA 266
#define MAXDIM 6
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define HeapTupleHeaderGetNatts(tup) ((tup)->t_infomask2 & HEAP_NATTS_MASK)
#define F_TSRANGE_TIMESTAMP_TIMESTAMP 3933
#define F_PG_LSN_PLI 5022
#define USE_REPL_SNPRINTF 1
#define SO_ERROR 4
#define _POSIX_C_SOURCE 200809L
#define list_make2_int(x1,x2) list_make2_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2))
#define InvalidOffsetNumber ((OffsetNumber) 0)
#define F_INT4UM 212
#define F_OVERLAPS_TIMESTAMPTZ_INTERVAL_TIMESTAMPTZ_INTERVAL 1305
#define VARATT_CONVERTED_SHORT_SIZE(PTR) (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT)
#define vprintf pg_vprintf
#define F_PG_GET_FUNCTION_SQLBODY 6197
#define SO_SNDBUFFORCE 32
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define F_PG_GET_VIEWDEF_TEXT_BOOL 2505
#define LATCH_H 
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define INTERVALARRAYOID 1187
#define HAVE_DECL_STRTOULL 1
#define __LDBL_MAX_10_EXP__ 4932
#define F_INT8SMALLER 1237
#define OffsetToPointer(base,offset) ((void *)((char *) base + offset))
#define F_TS_HEADLINE_REGCONFIG_JSON_TSQUERY 4206
#define TRANSACTION_STATUS_SUB_COMMITTED 0x03
#define SIGCONT 18
#define XACT_COMPLETION_APPLY_FEEDBACK (1U << 29)
#define ACL_ALL_RIGHTS_FUNCTION (ACL_EXECUTE)
#define F_TIMESTAMP_SUPPORT 3917
#define F_PG_READ_FILE_TEXT 3826
#define __blksize_t_defined 
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define _SC_SELECT _SC_SELECT
#define _PATH_SERVICES "/etc/services"
#define F_HAS_SCHEMA_PRIVILEGE_TEXT_TEXT 2272
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define ERRCODE_PLPGSQL_ERROR MAKE_SQLSTATE('P','0','0','0','0')
#define HAVE_UNSETENV 1
#define _LFS64_LARGEFILE 1
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define SO_MAX_PACING_RATE 47
#define F_INT4_SUM 1841
#define F_ASIN 1600
#define _LFS64_ASYNCHRONOUS_IO 1
#define F_INT8_JSONB 3452
#define F_GIN_CMP_TSLEXEME 3724
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define __ATOMIC_RELAXED 0
#define F_BIG5_TO_EUC_TW 4333
#define F_TIDSMALLER 2796
#define FALLOC_FL_KEEP_SIZE 0x01
#define CV_MINIMAL_SIZE (sizeof(ConditionVariable) <= 16 ? 16 : 32)
#define F_AVG_NUMERIC 2103
#define ObjectIdGetDatum(X) ((Datum) (X))
#define LOCK_WRITE 128
#define STATUS_ERROR (-1)
#define F_PG_LAST_XACT_REPLAY_TIMESTAMP 3830
#define F_BRIN_SUMMARIZE_NEW_VALUES 3952
#define F_INT82EQ 1856
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define F_VARBITTYPMODOUT 2921
#define Assert(condition) ((void)true)
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define SO_DETACH_FILTER 27
#define parse_analyze_varparams_compat(a,b,c,d,e) parse_analyze_varparams(a, b, c, d)
#define LOCK_MAND 32
#define INT8_C(c) c
#define F_FLOAT8_ACCUM 222
#define INT8_H 
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define F_DATE_TIMESTAMPTZ 1178
#define S_IFDIR __S_IFDIR
#define F_GEN_RANDOM_UUID 3432
#define F_PG_STAT_GET_ACTIVITY 2022
#define EBUSY 16
#define __UWORD_TYPE unsigned long int
#define DSM_H 
#define F_OFD_SETLK 37
#define F_SHA224 3419
#define F_NUMERIC_INC 1764
#define F_INT82GE 1861
#define TRAP_UNK TRAP_UNK
#define F_INT82GT 1859
#define F_TO_JSONB 3787
#define __FLT64_IS_IEC_60559__ 2
#define F_TIMETYPMODIN 2909
#define CLOG_ZEROPAGE 0x00
#define F_LO_CLOSE 953
#define F_TSTZRANGE_TIMESTAMPTZ_TIMESTAMPTZ 3937
#define __FLT32X_MIN_EXP__ (-1021)
#define SAFE_STR_MIN_NUMBERS ( 1 )
#define NI_NUMERICSERV 2
#define USECS_PER_HOUR INT64CONST(3600000000)
#define F_INT8OUT 461
#define F_DATE_LT_TIMESTAMPTZ 2351
#define F_GIST_POLY_COMPRESS 2586
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define F_JSONB_ARRAY_ELEMENT 3215
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define SQL_STR_DOUBLE(ch,escape_backslash) ((ch) == '\'' || ((ch) == '\\' && (escape_backslash)))
#define ERRCODE_FDW_INVALID_HANDLE MAKE_SQLSTATE('H','V','0','0','B')
#define IntervalPGetDatum(X) PointerGetDatum(X)
#define F_HAS_TABLE_PRIVILEGE_OID_OID_TEXT 1925
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define F_REGPROCIN 44
#define MSG_OOB MSG_OOB
#define SHRT_MAX __SHRT_MAX__
#define TYPCATEGORY_ARRAY 'A'
#define SET_LOCKTAG_VIRTUALTRANSACTION(locktag,vxid) ((locktag).locktag_field1 = (vxid).backendId, (locktag).locktag_field2 = (vxid).localTransactionId, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_VIRTUALTRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define F_ABBREV_INET 598
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define F_TIMETZ_TIMETZ_INT4 1969
#define F_TIDSEND 2439
#define TYPCATEGORY_ENUM 'E'
#define DELAY_CHKPT_COMPLETE (1<<1)
#define ERRCODE_INVALID_SCHEMA_DEFINITION MAKE_SQLSTATE('4','2','P','1','5')
#define F_VOID_RECV 3120
#define __FLT64_DIG__ 15
#define EROFS 30
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define CHAR_WIDTH 8
#define AttributeNumberIsValid(attributeNumber) ((bool) ((attributeNumber) != InvalidAttrNumber))
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define HAVE_IPV6 1
#define BKI_ROWTYPE_OID(oid,oidmacro) 
#define F_BIT_OUT 1565
#define F_TIMESTAMP_LARGER 2036
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define METADATA_CACHE_H 
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define F_GTSQUERY_SAME 3699
#define SO_BUSY_POLL_BUDGET 70
#define F_INT82LE 1860
#define F_INT4SHR 1903
#define F_INT82LT 1858
#define F_NUMMULTIRANGE_NUMRANGE 4284
#define F_PG_POSTMASTER_START_TIME 2560
#define ESUNTERM ( 407 )
#define F_INET_IN 910
#define __glibc_c99_flexarr_available 1
#define __WCHAR_T__ 
#define HAVE_LDAP_H 1
#define InvalidOid ((Oid) 0)
#define F_UTF8_TO_UHC 4381
#define F_TIDOUT 49
#define CHECKPOINT_END_OF_RECOVERY 0x0002
#define F_BRIN_INCLUSION_ADD_VALUE 4106
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define XLogHintBitIsNeeded() (DataChecksumsEnabled() || wal_log_hints)
#define NI_DGRAM 16
#define PRIxFAST16 __PRIPTR_PREFIX "x"
#define F_INT82NE 1857
#define TRAP_BRANCH TRAP_BRANCH
#define F_VAR_POP_FLOAT4 2721
#define F_VAR_POP_FLOAT8 2722
#define MaxAllocHugeSize (SIZE_MAX / 2)
#define F_EUC_TW_TO_MIC 4334
#define F_HAS_DATABASE_PRIVILEGE_OID_TEXT_TEXT 2252
#define F_EXTRACT_TEXT_TIMETZ 6201
#define F_TS_RANK_CD_TSVECTOR_TSQUERY_INT4 3709
#define PRIxFAST32 __PRIPTR_PREFIX "x"
#define list_make5_oid(x1,x2,x3,x4,x5) list_make5_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3), list_make_oid_cell(x4), list_make_oid_cell(x5))
#define F_PG_ADVISORY_LOCK_INT8 2880
#define Anum_pg_attribute_attmissingval 26
#define SIGEV_NONE SIGEV_NONE
#define ERRCODE_INVALID_CHARACTER_VALUE_FOR_CAST MAKE_SQLSTATE('2','2','0','1','8')
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define F_WEBSEARCH_TO_TSQUERY_REGCONFIG_TEXT 5007
#define PF_INET6 10
#define SI_MESGQ SI_MESGQ
#define DSM_IMPL_MMAP 4
#define _VA_LIST_DEFINED 
#define STRIPE_ROW_COUNT_MAXIMUM 10000000
#define F_IN_RANGE_NUMERIC_NUMERIC_NUMERIC_BOOL_BOOL 4141
#define FIELDNO_TUPLETABLESLOT_VALUES 5
#define Anum_pg_constraint_confmatchtype 15
#define __BLKSIZE_T_TYPE __S32_TYPE
#define AF_IRDA PF_IRDA
#define __INT_LEAST16_MAX__ 0x7fff
#define SCM_SRCRT IPV6_RXSRCRT
#define F_TIMESTAMPTZ_EQ_TIMESTAMP 2529
#define F_FLOAT84EQ 305
#define CONSTRAINT_PRIMARY 'p'
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define UCHAR_WIDTH 8
#define PG_PUBLICATION_H 
#define UINT64_WIDTH 64
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define F_MAX_INT8 2115
#define F_INT8RANGE_INT8_INT8 3945
#define XLogRecHasBlockImage(decoder,block_id) ((decoder)->blocks[block_id].has_image)
#define F_JSON_OBJECT_AGG 3197
#define HAVE__BOOL 1
#define F_BPCHARICNLIKE 1661
#define F_FLOAT84MUL 283
#define REDISTRIBUTE_BY_HASH 'x'
#define F_STDDEV_POP_NUMERIC 2729
#define __SIG_ATOMIC_WIDTH__ 32
#define si_stime _sifields._sigchld.si_stime
#define PRIxFAST64 __PRI64_PREFIX "x"
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define F_ARRAY_TO_STRING_ANYARRAY_TEXT_TEXT 384
#define __INT_LEAST64_TYPE__ long int
#define F_ISO_TO_MIC 4304
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define F_BPCHARSEND 2431
#define Anum_pg_class_relispartition 27
#define VARATT_CAN_MAKE_SHORT(PTR) (VARATT_IS_4B_U(PTR) && (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT) <= VARATT_SHORT_MAX)
#define DT_UNKNOWN DT_UNKNOWN
#define ADJ_SETOFFSET 0x0100
#define F_FLOAT8_NUMERIC 1746
#define F_HAS_SCHEMA_PRIVILEGE_NAME_TEXT_TEXT 2268
#define F_INTERVAL_SMALLER 1197
#define F_PG_STAT_GET_DB_IDLE_IN_TRANSACTION_TIME 6187
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define F_GET_FILE_RW_HINT 1037
#define F_TIMETYPMODOUT 2910
#define F_REGPROCEDUREIN 2212
#define MultiXactOffsetSLRULock (&MainLWLockArray[14].lock)
#define InHotStandby (standbyState >= STANDBY_SNAPSHOT_PENDING)
#define strerror pg_strerror
#define PRS2_NEW_VARNO 2
#define RTAboveStrategyNumber 11
#define PageGetItem(page,itemId) ( AssertMacro(PageIsValid(page)), AssertMacro(ItemIdHasStorage(itemId)), (Item)(((char *)(page)) + ItemIdGetOffset(itemId)) )
#define F_XIDRECV 2440
#define F_LSEG_CENTER 225
#define F_ARRAY_LARGER 515
#define F_VARBIT_SEND 2459
#define SOL_DCCP 269
#define AI_IDN 0x0040
#define EXECUTOR_H 
#define F_BTINT42CMP 2191
#define F_UUID_HASH_EXTENDED 3412
#define ntohl(x) __bswap_32 (x)
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define ntohs(x) __bswap_16 (x)
#define F_PG_STAT_GET_BACKEND_DBID 1938
#define PG_HAVE_ATOMIC_INIT_U32 
#define CitusMakeNode(_type_) ((_type_ *) CitusNewNode(sizeof(_type_),T_ ##_type_))
#define DATERANGEARRAYOID 3913
#define INTERNALOID 2281
#define LAST_OCLASS OCLASS_TRANSFORM
#define SCNdMAX __PRI64_PREFIX "d"
#define F_INT8_INT4 481
#define IS_HIGHBIT_SET(ch) ((unsigned char)(ch) & HIGHBIT)
#define HAVE_DECL_STRLCAT 0
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define TIDBITMAP_H 
#define FPE_FLTINV FPE_FLTINV
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define F_SETLKW 7
#define HeapTupleSetHeapOnly(tuple) HeapTupleHeaderSetHeapOnly((tuple)->t_data)
#define F_XIDNEQ 3308
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define F_PG_CONFIG 3400
#define ERRCODE_IDLE_IN_TRANSACTION_SESSION_TIMEOUT MAKE_SQLSTATE('2','5','P','0','3')
#define HAVE__BUILTIN_FRAME_ADDRESS 1
#define ERRCODE_E_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','4')
#define IsPolymorphicTypeFamily1(typid) ((typid) == ANYELEMENTOID || (typid) == ANYARRAYOID || (typid) == ANYNONARRAYOID || (typid) == ANYENUMOID || (typid) == ANYRANGEOID || (typid) == ANYMULTIRANGEOID)
#define IsPolymorphicTypeFamily2(typid) ((typid) == ANYCOMPATIBLEOID || (typid) == ANYCOMPATIBLEARRAYOID || (typid) == ANYCOMPATIBLENONARRAYOID || (typid) == ANYCOMPATIBLERANGEOID || (typid) == ANYCOMPATIBLEMULTIRANGEOID)
#define __FLT32_MIN_10_EXP__ (-37)
#define F_PG_TRIGGER_DEPTH 3163
#define Anum_pg_constraint_conparentid 11
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define F_TIME_HASH 1688
#define F_INTERVAL_ACCUM 1843
#define HEAP_MOVED (HEAP_MOVED_OFF | HEAP_MOVED_IN)
#define F_CENTER_CIRCLE 1543
#define ERRCODE_STRING_DATA_LENGTH_MISMATCH MAKE_SQLSTATE('2','2','0','2','6')
#define ERRCODE_TOO_MANY_JSON_OBJECT_MEMBERS MAKE_SQLSTATE('2','2','0','3','E')
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define MEMUTILS_H 
#define SVE_VL_MIN __SVE_VL_MIN
#define HAVE_LANGINFO_H 1
#define F_TIME_LE 1103
#define XLOG_INCLUDE_ORIGIN 0x01
#define F_LN_NUMERIC 1734
#define F_PG_TRY_ADVISORY_XACT_LOCK_INT4_INT4 3095
#define F_INT2_AVG_ACCUM_INV 3570
#define F_JSON_TO_RECORDSET 3205
#define pairingheap_is_singular(h) ((h)->ph_root && (h)->ph_root->first_child == NULL)
#define F_COUNT_ 2803
#define F_REGROLEIN 4098
#define F_PG_PROMOTE 3436
#define ENAMETOOLONG 36
#define F_PG_STAT_GET_DB_SESSIONS_FATAL 6190
#define ERRCODE_DEPENDENT_OBJECTS_STILL_EXIST MAKE_SQLSTATE('2','B','P','0','1')
#define ERRCODE_FDW_OUT_OF_MEMORY MAKE_SQLSTATE('H','V','0','0','1')
#define ACL_UPDATE (1<<2)
#define CLD_STOPPED CLD_STOPPED
#define __DBL_HAS_QUIET_NAN__ 1
#define BOOL_WIDTH 1
#define PARSE_FUNC_H 
#define INVALID_SHARD_INDEX -1
#define BPCHARARRAYOID 1014
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define MinSizeOfXactAssignment offsetof(xl_xact_assignment, xsub)
#define ERRCODE_INTERVAL_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','1','5')
#define F_INT8ABS 1230
#define AF_VSOCK PF_VSOCK
#define UINT_WIDTH 32
#define ARR_DIMS(a) ((int *) (((char *) (a)) + sizeof(ArrayType)))
#define F_GTSVECTOR_CONSISTENT_INTERNAL_GTSVECTOR_INT4_OID_INTERNAL 3790
#define F_ABS_INT2 1398
#define F_ABS_INT4 1397
#define F_ABS_INT8 1396
#define F_REGCLASSSEND 2453
#define IndexScanIsValid(scan) PointerIsValid(scan)
#define F_POW_NUMERIC_NUMERIC 1738
#define F_REGDICTIONARYOUT 3772
#define RTGreaterStrategyNumber 22
#define F_REGEXEQSEL 1818
#define SHARD_TABLE_SIZE_QUERY "SELECT pg_table_size(%s)"
#define F_VARBITGT 1669
#define InstrCountFiltered1(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered1 += (delta); } while(0)
#define VARDATA_COMPRESSED_GET_EXTSIZE(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_tcinfo & VARLENA_EXTSIZE_MASK)
#define F_OIDVECTOREQ 679
#define __WCHAR_TYPE__ unsigned int
#define __SIZEOF_FLOAT__ 4
#define HeapTupleIsValid(tuple) PointerIsValid(tuple)
#define GUC_NOT_IN_SAMPLE 0x0020
#define IP_RECVTTL 12
#define __pic__ 2
#define F_OVERLAY_TEXT_TEXT_INT4 1405
#define XLOG_XACT_ABORT_PREPARED 0x40
#define F_OIDVECTORGE 680
#define MaxOffsetNumber ((OffsetNumber) (BLCKSZ / sizeof(ItemIdData)))
#define F_INT8IN 460
#define F_OIDVECTORGT 681
#define __ARM_ARCH_8A 1
#define ERRCODE_LOCK_NOT_AVAILABLE MAKE_SQLSTATE('5','5','P','0','3')
#define HAVE_INT128 1
#define SCNxPTR __PRIPTR_PREFIX "x"
#define F_STRIP 3623
#define ATTRIBUTE_GENERATED_STORED 's'
#define list_make_oid_cell(v) ((ListCell) {.oid_value = (v)})
#define GUC_UNIT_BYTE 0x8000
#define __FLT32_DECIMAL_DIG__ 9
#define JULIAN_MINYEAR (-4713)
#define PF_NFC 39
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define RelationIsValid(relation) PointerIsValid(relation)
#define F_MAKEACLITEM 1365
#define HAVE_RANDOM 1
#define PAI_OVERWRITE (1 << 0)
#define F_OIDVECTORIN 54
#define BUFSIZ 8192
#define F_TIMETZ_TIMESTAMPTZ 1388
#define F_PG_STAT_GET_BACKEND_WAIT_EVENT_TYPE 2788
#define FMGROIDS_H 
#define _POSIX_AIO_MAX 1
#define isdigit(c) __isctype((c), _ISdigit)
#define __FLT_MAX_10_EXP__ 38
#define __F_GETOWN 9
#define F_VOID_OUT 2299
#define OffsetNumberIsValid(offsetNumber) ((bool) ((offsetNumber != InvalidOffsetNumber) && (offsetNumber <= MaxOffsetNumber)))
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME_OID_TEXT 3001
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define F_TS_RANK_TSVECTOR_TSQUERY 3706
#define XACT_FLAGS_ACCESSEDTEMPNAMESPACE (1U << 0)
#define ELIBSCN 81
#define ShmemIndexLock (&MainLWLockArray[1].lock)
#define F_LASTVAL 2559
#define EXEC_FLAG_REWIND 0x0002
#define AF_ALG PF_ALG
#define F_TRIGGER_IN 2300
#define for_each_from(cell,lst,N) for (ForEachState cell ##__state = for_each_from_setup(lst, N); (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define _SC_2_PBS _SC_2_PBS
#define AF_QIPCRTR PF_QIPCRTR
#define F_INT8OR 1905
#define F_TEXTICLIKE_SUPPORT 1025
#define INT_FAST32_WIDTH __WORDSIZE
#define F_BPCHARNLIKE 1632
#define IPV6_ADDR_PREFERENCES 72
#define __DBL_MAX_10_EXP__ 308
#define F_PT_CONTAINED_CIRCLE 1478
#define F_TIMESTAMPTZ_LT 1154
#define FRAMEOPTION_START_OFFSET_FOLLOWING 0x02000
#define MONEYOID 790
#define __LC_COLLATE 3
#define DatumGetBpCharPCopy(X) ((BpChar *) PG_DETOAST_DATUM_COPY(X))
#define TYPALIGN_SHORT 's'
#define F_PG_PARTITION_TREE 3423
#define WL_TIMEOUT (1 << 3)
#define F_TSVECTOR_NE 3619
#define RTEqualStrategyNumber 18
#define F_PG_ENCODING_TO_CHAR 1597
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define F_FLOAT4_INT2 236
#define F_FLOAT4_INT4 318
#define F_FLOAT4_INT8 652
#define HAVE_DECL_STRLCPY 0
#define F_TIMESTAMPTZ_CMP_DATE 2383
#define ADJ_TICK 0x4000
#define BKI_SHARED_RELATION 
#define __TIMESIZE 64
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define BKI_SCHEMA_MACRO 
#define TYPTYPE_COMPOSITE 'c'
#define fprintf pg_fprintf
#define F_OIDVECTORNE 619
#define F_ICNLIKEJOINSEL 1817
#define ALLOCSET_SEPARATE_THRESHOLD 8192
#define DECLARE_FOREIGN_KEY_OPT(cols,reftbl,refcols) extern int no_such_variable
#define InvalidFullTransactionId FullTransactionIdFromEpochAndXid(0, InvalidTransactionId)
#define SIGCLD SIGCHLD
#define __FLT16_HAS_QUIET_NAN__ 1
#define BackendIdForTempRelations() (ParallelLeaderBackendId == InvalidBackendId ? MyBackendId : ParallelLeaderBackendId)
#define ERRCODE_FDW_INVALID_DATA_TYPE_DESCRIPTORS MAKE_SQLSTATE('H','V','0','0','6')
#define SCNuMAX __PRI64_PREFIX "u"
#define HASH_COMPARE 0x0080
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define __gid_t_defined 
#define FRAMEOPTION_END_UNBOUNDED_PRECEDING 0x00040
#define LC_MESSAGES __LC_MESSAGES
#define F_CIDIN 52
#define F_ISHORIZONTAL_LINE 1415
#define F_PG_IS_IN_BACKUP 3813
#define PointerIsAligned(pointer,type) (((uintptr_t)(pointer) % (sizeof (type))) == 0)
#define F_DLOG1 234
#define F_TRANSLATE 878
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define NETDB_SUCCESS 0
#define F_PG_SHOW_ALL_FILE_SETTINGS 3329
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define F_LSEG_INTERPT 362
#define ___int_size_t_h 
#define Anum_pg_constraint_convalidated 7
#define _POSIX2_EXPR_NEST_MAX 32
#define TRY_AGAIN 2
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __clock_t_defined 1
#define TSVECTOROID 3614
#define linitial_int(l) lfirst_int(list_nth_cell(l, 0))
#define __GLIBC_MINOR__ 35
#define Anum_pg_dist_partition_repmodel 5
#define __UINT_LEAST32_TYPE__ unsigned int
#define SCNu16 "hu"
#define F_RI_FKEY_RESTRICT_DEL 1648
#define F_HAS_FUNCTION_PRIVILEGE_NAME_TEXT_TEXT 2256
#define _XBS5_ILP32_OFFBIG -1
#define F_TIMESTAMP_OUT 1313
#define AF_ASH PF_ASH
#define IPPROTO_GRE IPPROTO_GRE
#define VARATT_EXTERNAL_IS_COMPRESSED(toast_pointer) (VARATT_EXTERNAL_GET_EXTSIZE(toast_pointer) < (toast_pointer).va_rawsize - VARHDRSZ)
#define DOUBLEALIGN(LEN) TYPEALIGN(ALIGNOF_DOUBLE, (LEN))
#define F_PG_ADVISORY_LOCK_INT4_INT4 2886
#define __LDBL_MIN_EXP__ (-16381)
#define XLOG_XACT_ABORT 0x20
#define VARTAG_EXTERNAL(PTR) VARTAG_1B_E(PTR)
#define F_LSEG_VERTICAL 997
#define F_SETFL 4
#define lsecond_int(l) lfirst_int(list_nth_cell(l, 1))
#define F_PG_CURRENT_WAL_INSERT_LSN 2852
#define _POSIX_MAX_CANON 255
#define ERRCODE_ESCAPE_CHARACTER_CONFLICT MAKE_SQLSTATE('2','2','0','0','B')
#define IPV6_RECVPKTINFO 49
#define PG_FINALLY() } else _do_rethrow = true; { PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack
#define SCNu32 "u"
#define stdout stdout
#define NL_SETMAX INT_MAX
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define REGTYPEARRAYOID 2211
#define PG_GETARG_VARCHAR_P(n) DatumGetVarCharP(PG_GETARG_DATUM(n))
#define F_INTERVAL_NE 1163
#define Anum_pg_type_typanalyze 22
#define INTPTR_WIDTH __WORDSIZE
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define DatumGetTextPCopy(X) ((text *) PG_DETOAST_DATUM_COPY(X))
#define F_BYTEALT 1949
#define __INT_LEAST8_MAX__ 0x7f
#define F_PG_STAT_GET_DB_CONFLICT_LOCK 3066
#define F_VARCHARIN 1046
#define F_BOOL_INT4 2557
#define __FLT32X_MAX_10_EXP__ 308
#define F_PG_STAT_GET_DB_XACT_COMMIT 1942
#define ____mbstate_t_defined 1
#define ADJ_STATUS 0x0010
#define PG_UINT64_MAX UINT64CONST(0xFFFFFFFFFFFFFFFF)
#define F_PG_INDEX_HAS_PROPERTY 637
#define F_TSQUERYSEND 3640
#define F_SPGHANDLER 334
#define O_RDONLY 00
#define F_ICREGEXEQSEL 1820
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define F_INT8_AVG_SERIALIZE 2786
#define SO_RCVBUFFORCE 33
#define F_GIN_EXTRACT_JSONB 3482
#define PLANNODES_H 
#define F_HASH_NUMERIC_EXTENDED 780
#define ECONNREFUSED 111
#define ERRCODE_INVALID_ARGUMENT_FOR_POWER_FUNCTION MAKE_SQLSTATE('2','2','0','1','F')
#define SCNu64 __PRI64_PREFIX "u"
#define _BITS_SIGNUM_GENERIC_H 1
#define F_NAMECONCATOID 266
#define F_GCD_NUMERIC_NUMERIC 5048
#define F_TABLE_AM_HANDLER_IN 267
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define F_TS_RANK_CD_TSVECTOR_TSQUERY 3710
#define F_LSEG_GE 1486
#define AutovacuumLock (&MainLWLockArray[22].lock)
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define ANYNONARRAYOID 2776
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define InvalidCommandId (~(CommandId)0)
#define _SIZET_ 
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define SIGPIPE 13
#define _LP64 1
#define si_call_addr _sifields._sigsys._call_addr
#define PG_RETURN_VARCHAR_P(x) PG_RETURN_POINTER(x)
#define F_STRING_AGG_FINALFN 3536
#define MAXALIGN(LEN) TYPEALIGN(MAXIMUM_ALIGNOF, (LEN))
#define F_CEILING_FLOAT8 2320
#define CMDTAG_H 
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE IPPROTO_NONE
#define F_BOOLOUT 1243
#define F_ISPERP_LSEG_LSEG 1409
#define __S_IFSOCK 0140000
#define __stub_stty 
#define list_make3_oid(x1,x2,x3) list_make3_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3))
#define __ULONG32_TYPE unsigned int
#define __ASM_GENERIC_SOCKIOS_H 
#define F_UNKNOWNRECV 2416
#define HAVE_STRUCT_SOCKADDR_UN 1
#define EAI_ADDRFAMILY -9
#define F_ANYCOMPATIBLEMULTIRANGE_IN 4226
#define FirstCommandId ((CommandId) 0)
#define POLYGONARRAYOID 1027
#define F_INTERVAL_INTERVAL_INT4 1200
#define LOG_SERVER_ONLY 16
#define _SC_IOV_MAX _SC_IOV_MAX
#define _SC_PASS_MAX _SC_PASS_MAX
#define F_VARBIT 1687
#define F_RANGE_OUT 3835
#define PG_RETURN_ARRAYTYPE_P(x) PG_RETURN_POINTER(x)
#define F_REGPROCEDURERECV 2446
#define __stub___compat_bdflush 
#define F_REGCOLLATIONRECV 4196
#define ALLOCSET_DEFAULT_INITSIZE (8 * 1024)
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define IS_UPPER_REL(rel) ((rel)->reloptkind == RELOPT_UPPER_REL || (rel)->reloptkind == RELOPT_OTHER_UPPER_REL)
#define O_TRUNC 01000
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define PG_RETURN_FLOAT4(x) return Float4GetDatum(x)
#define PVC_INCLUDE_WINDOWFUNCS 0x0004
#define HEAP_MOVED_IN 0x8000
#define F_TS_TYPANALYZE 3688
#define F_PG_SIZE_PRETTY_INT8 2288
#define OIDCHARS 10
#define F_INT8INC_FLOAT8_FLOAT8 2805
#define LSEGARRAYOID 1018
#define F_PG_BLOCKING_PIDS 2561
#define F_TRIGGER_OUT 2301
#define PG_RE_THROW() pg_re_throw()
#define __PID_T_TYPE __S32_TYPE
#define CitusNodeTag(nodeptr) CitusNodeTagI((Node*) nodeptr)
#define F_CARDINALITY 3179
#define HAVE_POLL 1
#define _SC_AIO_MAX _SC_AIO_MAX
#define ENOTCONN 107
#define IN_CLASSB_NET 0xffff0000
#define F_XID8LE 5036
#define ERRCODE_FDW_UNABLE_TO_CREATE_EXECUTION MAKE_SQLSTATE('H','V','0','0','L')
#define XLOG_BLCKSZ 8192
#define TIMESTAMPARRAYOID 1115
#define VARATT_SHORT_MAX 0x7F
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define INTERVAL_RANGE(t) (((t) >> 16) & INTERVAL_RANGE_MASK)
#define _POSIX_UIO_MAXIOV 16
#define F_PRSD_START 3717
#define P_tmpdir "/tmp"
#define HAVE_HISTORY_TRUNCATE_FILE 1
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _POSIX_MESSAGE_PASSING 200809L
#define __WORDSIZE_TIME64_COMPAT32 0
#define EPFNOSUPPORT 96
#define intVal(v) (((Value *)(v))->val.ival)
#define HAVE_STDBOOL_H 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define SO_PEERNAME 28
#define F_INT48GE 857
#define F_TS_RANK_CD__FLOAT4_TSVECTOR_TSQUERY_INT4 3707
#define F_INT48GT 855
#define __DBL_DECIMAL_DIG__ 17
#define F_BPCHAR_SORTSUPPORT 3328
#define F_INTERVAL_EQ 1162
#define F_INT4_FLOAT4 319
#define F_PG_STAT_GET_BGWRITER_BUF_WRITTEN_CLEAN 2772
#define LP_REDIRECT 2
#define ItemPointerSetInvalid(pointer) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), InvalidBlockNumber), (pointer)->ip_posid = InvalidOffsetNumber )
#define _SIZE_T 
#define F_PG_LOGICAL_EMIT_MESSAGE_BOOL_TEXT_BYTEA 3578
#define _IO_ERR_SEEN 0x0020
#define linitial_node(type,l) castNode(type, linitial(l))
#define CITUS_NODE_TAG_START 1200
#define TypeRelationId 1247
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define ACL_ALL_RIGHTS_FDW (ACL_USAGE)
#define SOCK_STREAM SOCK_STREAM
#define ARR_DATA_PTR(a) (((char *) (a)) + ARR_DATA_OFFSET(a))
#define __BIG_ENDIAN 4321
#define F_ATAN 1602
#define F_TEXTOUT 47
#define store_att_byval(T,newdatum,attlen) do { switch (attlen) { case sizeof(char): *(char *) (T) = DatumGetChar(newdatum); break; case sizeof(int16): *(int16 *) (T) = DatumGetInt16(newdatum); break; case sizeof(int32): *(int32 *) (T) = DatumGetInt32(newdatum); break; case sizeof(Datum): *(Datum *) (T) = (newdatum); break; default: elog(ERROR, "unsupported byval length: %d", (int) (attlen)); break; } } while (0)
#define F_MULTIRANGE_CMP 4273
#define F_ICREGEXEQJOINSEL 1826
#define FullTransactionIdFollowsOrEquals(a,b) ((a).value >= (b).value)
#define BOOL_MAX 1
#define F_PG_REPLICATION_ORIGIN_PROGRESS 6013
#define F_MACADDR8_EQ 4113
#define F_UNNEST_ANYMULTIRANGE 1293
#define VARATT_IS_EXTERNAL_INDIRECT(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_INDIRECT)
#define ERRCODE_SNAPSHOT_TOO_OLD MAKE_SQLSTATE('7','2','0','0','0')
#define F_POINT_MUL 1443
#define ACL_H 
#define PG_GETARG_BYTEA_P(n) DatumGetByteaP(PG_GETARG_DATUM(n))
#define PG_BINARY_A "a"
#define INT4OID 23
#define F_TO_TSVECTOR_TEXT 3749
#define CONSTRAINT_UNIQUE 'u'
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define F_BTINT4SORTSUPPORT 3130
#define __ORDER_BIG_ENDIAN__ 4321
#define F_TIMESTAMPTZ_RECV 2476
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define F_INT48LT 854
#define ESZEROL ( 401 )
#define pg_hton64(x) pg_bswap64(x)
#define F_GTSVECTOR_UNION 3651
#define F_RANGE_GIST_SAME 3881
#define F_ISVERTICAL_POINT_POINT 1406
#define F_MULTIRANGE_CONTAINS_ELEM 4249
#define __UINT32_C(c) c ## U
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define MAX_INPUT 255
#define CHARARRAYOID 1002
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define EAI_SYSTEM -11
#define F_MULTIRANGE_UNION 4270
#define LOG2_NUM_PREDICATELOCK_PARTITIONS 4
#define CANDIDATE_NODE_FIELDS 2
#define XACT_XINFO_HAS_GID (1U << 7)
#define SIGEV_THREAD SIGEV_THREAD
#define F_INET_GIST_FETCH 3573
#define _BITS_TIME64_H 1
#define forfour(cell1,list1,cell2,list2,cell3,list3,cell4,list4) for (ForFourState cell1 ##__state = {(list1), (list2), (list3), (list4), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), multi_for_advance_cell(cell4, cell1 ##__state, l4, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL && cell4 != NULL); cell1 ##__state.i++)
#define __WINT_MIN__ 0U
#define F_INTERVAL_COMBINE 3325
#define IP_NODEFRAG 22
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define USE_DSM_POSIX 
#define HAVE_GETOPT_H 1
#define DN_MODIFY 0x00000002
#define F_TIMESTAMP_CMP_TIMESTAMPTZ 2526
#define F_REGTYPEIN 2220
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define F_INT48PL 1278
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define lthird(l) lfirst(list_nth_cell(l, 2))
#define O_NOFOLLOW __O_NOFOLLOW
#define ERRCODE_MORE_THAN_ONE_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','4')
#define F_QUOTE_NULLABLE_ANYELEMENT 1290
#define POLL_ERR POLL_ERR
#define F_ARRAYOVERLAP 2747
#define F_BTTEXT_PATTERN_CMP 2166
#define F_SEAL_FUTURE_WRITE 0x0010
#define UInt8GetDatum(X) ((Datum) (X))
#define SVE_VL_MAX __SVE_VL_MAX
#define AF_CAIF PF_CAIF
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define ispunct(c) __isctype((c), _ISpunct)
#define PageHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags & PD_HAS_FREE_LINES)
#define HAVE_STRCHRNUL 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __fsfilcnt_t_defined 
#define F_PG_INDEXES_SIZE 2998
#define HAVE__BUILTIN_POPCOUNT 1
#define F_SUBSTRING_TEXT_INT4 937
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define F_PG_STAT_GET_DB_TUPLES_RETURNED 2758
#define F_LO_OPEN 952
#define F_PG_GET_INDEXDEF_OID 1643
#define ERRCODE_FDW_ERROR MAKE_SQLSTATE('H','V','0','0','0')
#define F_SET_FILE_RW_HINT 1038
#define F_TIME_HASH_EXTENDED 3409
#define PG_BINARY 0
#define HAVE_EXECINFO_H 1
#define F_ARRAY_SEND 2401
#define F_TSVECTOR_LT 3616
#define SO_SNDLOWAT 19
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX_ASYNC_IO 1
#define HeapTupleHeaderSetXmax(tup,xid) ( (tup)->t_choice.t_heap.t_xmax = (xid) )
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define F_INT42MUL 171
#define F_GIN_CONSISTENT_JSONB 3484
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define ERRCODE_CHARACTER_NOT_IN_REPERTOIRE MAKE_SQLSTATE('2','2','0','2','1')
#define WARNING_CLIENT_ONLY 20
#define __SIZEOF_DOUBLE__ 8
#define F_LOWER_TEXT 870
#define MCAST_MSFILTER 48
#define PG_GETARG_BOOL(n) DatumGetBool(PG_GETARG_DATUM(n))
#define RelationIsScannable(relation) ((relation)->rd_rel->relispopulated)
#define INVALID_PLACEMENT_ID 0
#define PG_LIST_H 
#define Anum_pg_attribute_attstattarget 4
#define EXTENSIBLE_H 
#define F_UNNEST_ANYARRAY 2331
#define F_TIMESTAMPTZ_NE_DATE 2382
#define F_INET_CLIENT_PORT 2197
#define _BITS_POSIX1_LIM_H 1
#define Anum_pg_class_relminmxid 30
#define F_INT2_ACCUM 1834
#define CIDOID 29
#define SO_GET_FILTER SO_ATTACH_FILTER
#define forthree(cell1,list1,cell2,list2,cell3,list3) for (ForThreeState cell1 ##__state = {(list1), (list2), (list3), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL); cell1 ##__state.i++)
#define F_PG_REPLICATION_ORIGIN_SESSION_IS_SETUP 6008
#define ScanDirectionIsForward(direction) ((bool) ((direction) == ForwardScanDirection))
#define F_BITTYPMODIN 2919
#define F_CIDR_SEND 2499
#define ERRCODE_FDW_OPTION_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','J')
#define unvolatize(underlying_type,expr) (StaticAssertExpr(__builtin_types_compatible_p(__typeof(expr), volatile underlying_type), "wrong cast"), (underlying_type) (expr))
#define _T_SIZE 
#define StoreInvalidTransactionId(dest) (*(dest) = InvalidTransactionId)
#define F_NUMERIC_SERIALIZE 3335
#define REPLICA_IDENTITY_INDEX 'i'
#define ERRCODE_OUT_OF_MEMORY MAKE_SQLSTATE('5','3','2','0','0')
#define CURSOR_OPT_FAST_PLAN 0x0100
#define __va_arg_pack() __builtin_va_arg_pack ()
#define F_MULTIRANGE_ADJACENT_RANGE 4257
#define F_INT2_NUMERIC 1783
#define INT_LEAST8_WIDTH 8
#define DTTOIF(dirtype) ((dirtype) << 12)
#define F_POLY_ABOVE 2569
#define __FLT32X_HAS_QUIET_NAN__ 1
#define va_end(v) __builtin_va_end(v)
#define F_BOX_SAME 186
#define F_PG_TYPE_IS_VISIBLE 2080
#define ERRCODE_INVALID_TABLE_DEFINITION MAKE_SQLSTATE('4','2','P','1','6')
#define __INT_FAST16_WIDTH__ 64
#define F_VARCHARTYPMODOUT 2916
#define FirstNormalFullTransactionId FullTransactionIdFromEpochAndXid(0, FirstNormalTransactionId)
#define ELIBBAD 80
#define COMMAND_OK_IN_READ_ONLY_TXN 0x0001
#define CITUS_SEQUENCE_H 
#define USE_PAM 1
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define TYPSTORAGE_EXTERNAL 'e'
#define __glibc_clang_prereq(maj,min) 0
#define ERRCODE_STATEMENT_TOO_COMPLEX MAKE_SQLSTATE('5','4','0','0','1')
#define PF_INET 2
#define _SC_SIGNALS _SC_SIGNALS
#define F_DIST_CPOINT 3290
#define F_CHAR_TEXT 944
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ATTRIBUTE_IDENTITY_BY_DEFAULT 'd'
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define TSTZRANGEARRAYOID 3911
#define Anum_pg_publication_pubupdate 6
#define _RWLOCK_INTERNAL_H 
#define UINT_FAST8_WIDTH 8
#define DSM_IMPL_POSIX 1
#define F_ENUM_RECV 3532
#define UINT16_MAX (65535)
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_MINHOPCOUNT 73
#define SO_ZEROCOPY 60
#define ACLITEM_GET_PRIVS(item) ((item).ai_privs & 0xFFFF)
#define __USE_XOPEN_EXTENDED 1
#define __ASM_BITSPERLONG_H 
#define InvalidPid (-1)
#define _POSIX_TRACE_LOG -1
#define F_SETWEIGHT_TSVECTOR_CHAR__TEXT 3320
#define ACL_CREATE_TEMP (1<<10)
#define HeapTupleHeaderSetXmin(tup,xid) ( (tup)->t_choice.t_heap.t_xmin = (xid) )
#define __ARM_ARCH_ISA_A64 1
#define F_TIMESTAMPTZ_DATE_TIME 1176
#define MemSetLoop(start,val,len) do { long * _start = (long *) (start); long * _stop = (long *) ((char *) _start + (Size) (len)); while (_start < _stop) *_start++ = 0; } while (0)
#define TIMEZONE_GLOBAL timezone
#define F_PG_DDL_COMMAND_RECV 88
#define SIG_IGN ((__sighandler_t) 1)
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define __STDC__ 1
#define ENFILE 23
#define ERRCODE_FDW_DYNAMIC_PARAMETER_VALUE_NEEDED MAKE_SQLSTATE('H','V','0','0','2')
#define PG_HAVE_ATOMIC_INIT_U64 
#define SECS_PER_MINUTE 60
#define __FLT32X_DIG__ 15
#define EEXIST 17
#define __PTRDIFF_TYPE__ long int
#define F_THESAURUS_LEXIZE 3741
#define F_EUC_JP_TO_UTF8 4362
#define IP_UNICAST_IF 50
#define AccessExclusiveLock 8
#define DT_LNK DT_LNK
#define VARATT_NOT_PAD_BYTE(PTR) (*((uint8 *) (PTR)) != 0)
#define MINIMAL_TUPLE_DATA_OFFSET offsetof(MinimalTupleData, t_infomask2)
#define F_PG_LAST_COMMITTED_XACT 3583
#define CATALOG_VERSION_NO 202107181
#define F_INT4_AVG_ACCUM 1963
#define HEAP_KEYS_UPDATED 0x2000
#define EAI_BADFLAGS -1
#define F_NETWORK_EQ 920
#define F_TS_STAT_TEXT_TEXT 3690
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define Anum_pg_sequence_seqrelid 1
#define F_BINARY_UPGRADE_SET_NEXT_HEAP_PG_CLASS_OID 3586
#define EAI_SERVICE -8
#define INTSTYLE_ISO_8601 3
#define ENOBUFS 105
#define F_FLOAT4SEND 2425
#define F_INT8LE 471
#define Anum_pg_type_typtype 7
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define PageGetPageSize(page) ((Size) (((PageHeader) (page))->pd_pagesize_version & (uint16) 0xFF00))
#define MaxBlockNumber ((BlockNumber) 0xFFFFFFFE)
#define F_BRIN_MINMAX_OPCINFO 3383
#define ERRCODE_OPERATOR_INTERVENTION MAKE_SQLSTATE('5','7','0','0','0')
#define __UINTPTR_TYPE__ long unsigned int
#define F_INTERVAL_RECV 2478
#define IS_DUMMY_APPEND(p) (IsA((p), AppendPath) && ((AppendPath *) (p))->subpaths == NIL)
#define F_RANGE_CONTAINS_MULTIRANGE 4541
#define F_PG_STAT_GET_DB_BLOCKS_HIT 1945
#define __bitwise__ 
#define F_TS_DELETE_TSVECTOR__TEXT 3323
#define F_BRIN_MINMAX_MULTI_SUMMARY_SEND 4641
#define O_PATH __O_PATH
#define _SC_FIFO _SC_FIFO
#define F_TXID_CURRENT 2943
#define F_SEAL_WRITE 0x0008
#define _SC_SPAWN _SC_SPAWN
#define BLOCK_H 
#define F_PG_FILENODE_RELATION 3454
#define ERRCODE_INVALID_INDICATOR_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','1','0')
#define list_make1_oid(x1) list_make1_impl(T_OidList, list_make_oid_cell(x1))
#define ERRCODE_NAME_TOO_LONG MAKE_SQLSTATE('4','2','6','2','2')
#define FLOAT8ARRAYOID 1022
#define BGW_MAXLEN 96
#define PG_UINT8_MAX (0xFF)
#define SIG_SETMASK 2
#define ACL_ALL_RIGHTS_SCHEMA (ACL_USAGE|ACL_CREATE)
#define INTERVAL_FULL_PRECISION (0xFFFF)
#define PVC_RECURSE_WINDOWFUNCS 0x0008
#define PRIo16 "o"
#define __USE_ATFILE 1
#define F_GETLK 5
#define HTEqualStrategyNumber 1
#define F_HAS_TABLE_PRIVILEGE_TEXT_TEXT 1926
#define _POSIX_OPEN_MAX 20
#define F_NETWORK_CMP 926
#define isgraph(c) __isctype((c), _ISgraph)
#define ERRCODE_TRIM_ERROR MAKE_SQLSTATE('2','2','0','2','7')
#define UInt16GetDatum(X) ((Datum) (X))
#define __FLT128_DECIMAL_DIG__ 36
#define LOG_DESTINATION_CSVLOG 8
#define MemoryContextCopyAndSetIdentifier(cxt,id) MemoryContextSetIdentifier(cxt, MemoryContextStrdup(cxt, id))
#define F_LO_TRUNCATE64 3172
#define F_DECODE 1947
#define list_make1(x1) list_make1_impl(T_List, list_make_ptr_cell(x1))
#define list_make2(x1,x2) list_make2_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2))
#define list_make3(x1,x2,x3) list_make3_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3))
#define list_make4(x1,x2,x3,x4) list_make4_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3), list_make_ptr_cell(x4))
#define list_make5(x1,x2,x3,x4,x5) list_make5_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3), list_make_ptr_cell(x4), list_make_ptr_cell(x5))
#define F_PG_XACT_COMMIT_TIMESTAMP 3581
#define __FLT_DECIMAL_DIG__ 9
#define PRIo32 "o"
#define EOHPGetRWDatum(eohptr) PointerGetDatum((eohptr)->eoh_rw_ptr)
#define F_TO_CHAR_NUMERIC_TEXT 1772
#define F_NUM_NONNULLS 440
#define F_PG_PREPARED_XACT 1065
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define F_MULTIRANGE_GE 4276
#define ERRCODE_INVALID_SQL_JSON_SUBSCRIPT MAKE_SQLSTATE('2','2','0','3','3')
#define F_TXID_SNAPSHOT_XIP 2947
#define PATH_MAX 4096
#define F_INET_SERVER_ADDR 2198
#define PG_RETURN_VOID() return (Datum) 0
#define TYPALIGN_CHAR 'c'
#define F_POLYGON_BOX 1448
#define OPTION_NAME_CHUNK_ROW_COUNT "chunk_group_row_limit"
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _ASM_GENERIC_TYPES_H 
#define F_DCBRT 231
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define TTS_IS_VIRTUAL(slot) ((slot)->tts_ops == &TTSOpsVirtual)
#define PG_DIAG_SEVERITY_NONLOCALIZED 'V'
#define IsPolymorphicType(typid) (IsPolymorphicTypeFamily1(typid) || IsPolymorphicTypeFamily2(typid))
#define att_isnull(ATT,BITS) (!((BITS)[(ATT) >> 3] & (1 << ((ATT) & 0x07))))
#define F_PG_COLLATION_IS_VISIBLE 3815
#define PG_DIAG_CONSTRAINT_NAME 'n'
#define PRIo64 __PRI64_PREFIX "o"
#define PRIXFAST16 __PRIPTR_PREFIX "X"
#define COLUMNAR_MODULE_NAME "citus_columnar"
#define BACKUP_LABEL_FILE "backup_label"
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define ATTSTATSSLOT_NUMBERS 0x02
#define AF_NETROM PF_NETROM
#define F_MAX_INTERVAL 2128
#define PG_GETARG_RAW_VARLENA_P(n) ((struct varlena *) PG_GETARG_POINTER(n))
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define IPV6_RTHDR_TYPE_0 0
#define F_PG_GET_CATALOG_FOREIGN_KEYS 6159
#define EISDIR 21
#define _BITS_SIGEVENT_CONSTS_H 1
#define _CS_V6_ENV _CS_V6_ENV
#define ____sigset_t_defined 
#define F_GB18030_TO_UTF8 4368
#define RESUME_CANCEL_INTERRUPTS() do { Assert(QueryCancelHoldoffCount > 0); QueryCancelHoldoffCount--; } while(0)
#define F_HAS_SEQUENCE_PRIVILEGE_NAME_OID_TEXT 2182
#define F_MULTIRANGE_LT 4274
#define F_BRIN_MINMAX_MULTI_DISTANCE_INTERVAL 4631
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define HAS_TEST_AND_SET 
#define F_TIME_NE 1106
#define F_CONVERT_FROM 1714
#define LONGALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_LONG, (LEN))
#define HeapTupleHeaderSetXminInvalid(tup) ( AssertMacro(!HeapTupleHeaderXminCommitted(tup)), ((tup)->t_infomask |= HEAP_XMIN_INVALID) )
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define F_JSONB_EXTRACT_PATH_TEXT 3940
#define AARR_DIMS(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.dims : ARR_DIMS((ArrayType *) (a)))
#define PG_PAGE_LAYOUT_VERSION 4
#define F_CIDR_IN 1267
#define F_INT8_INT2 754
#define F_MULTIRANGE_NE 4245
#define BKI_ARRAY_DEFAULT(value) 
#define F_BOX_OVERBELOW 2563
#define F_BTBOOLCMP 1693
#define ANYRANGEOID 3831
#define PG_INDEX_H 
#define F_INT2XOR 1894
#define PRIXFAST64 __PRI64_PREFIX "X"
#define F_STDDEV_INT4 2155
#define VARATT_IS_EXTERNAL_ONDISK(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_ONDISK)
#define F_ANYRANGE_OUT 3833
#define EEO_FLAG_IS_QUAL (1 << 0)
#define DECLARE_FOREIGN_KEY(cols,reftbl,refcols) extern int no_such_variable
#define Anum_pg_class_relowner 6
#define F_JSONB_GE 4042
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define CONSTRAINT_CHECK 'c'
#define F_POWER_NUMERIC_NUMERIC 2169
#define F_BYTEAEQ 1948
#define _SC_LINE_MAX _SC_LINE_MAX
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define F_LTRIM_TEXT 881
#define _BITS_SETJMP_H 1
#define _POSIX_PRIORITIZED_IO 200809L
#define PG_INT32_MAX (0x7FFFFFFF)
#define F_BIT_COUNT_BYTEA 6163
#define F_TIME_GE 1105
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define F_TIME_GT 1104
#define F_RANGE_INTERSECT_AGG_ANYMULTIRANGE 4389
#define HEAP_LOCKED_UPGRADED(infomask) ( ((infomask) & HEAP_XMAX_IS_MULTI) != 0 && ((infomask) & HEAP_XMAX_LOCK_ONLY) != 0 && (((infomask) & (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)) == 0) )
#define F_BYTEAGT 1951
#define ERRCODE_NO_DATA MAKE_SQLSTATE('0','2','0','0','0')
#define F_BOX_ABOVE 2565
#define F_TSVECTORIN 3610
#define F_OCTET_LENGTH_BYTEA 720
#define __FSWORD_T_TYPE __SWORD_TYPE
#define F_RI_FKEY_SETDEFAULT_DEL 1652
#define IPV6_LEAVE_GROUP 21
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define F_PG_TRY_ADVISORY_XACT_LOCK_SHARED_INT8 3092
#define PG_GETARG_BPCHAR_P_COPY(n) DatumGetBpCharPCopy(PG_GETARG_DATUM(n))
#define PG_DEPENDENCIESOID 3402
#define ERRCODE_DATATYPE_MISMATCH MAKE_SQLSTATE('4','2','8','0','4')
#define F_MULTIRANGE_INTERSECT 4272
#define _STDDEF_H_ 
#define F_PG_GET_INDEXDEF_OID_INT4_BOOL 2507
#define F_TIME_IN 1143
#define SCNo64 __PRI64_PREFIX "o"
#define F_JSONB_OBJECT__TEXT 3263
#define ACCEPT_TYPE_RETURN int
#define F_PG_MCV_LIST_ITEMS 3427
#define F_NUMERIC_SMALLER 1766
#define INSTR_TIME_ACCUM_DIFF(x,y,z) do { (x).tv_sec += (y).tv_sec - (z).tv_sec; (x).tv_nsec += (y).tv_nsec - (z).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define F_BYTEAIN 1244
#define _POSIX_CLOCK_SELECTION 200809L
#define COMMAND_IS_NOT_READ_ONLY 0
#define F_MASKLEN 697
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define COMMAND_OK_IN_RECOVERY 0x0004
#define IPV6_PMTUDISC_INTERFACE 4
#define F_INT8RANGE_CANONICAL 3928
#define F_PG_IMPORT_SYSTEM_COLLATIONS 3445
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define DT_WHT DT_WHT
#define TTS_IS_HEAPTUPLE(slot) ((slot)->tts_ops == &TTSOpsHeapTuple)
#define Anum_pg_class_relrewrite 28
#define NUM_ATOMICS_SEMAPHORES 64
#define __sigset_t_defined 1
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK2 2
#define REGCOLLATIONARRAYOID 4192
#define F_DATE_TRUNC_TEXT_TIMESTAMPTZ_TEXT 1284
#define Anum_pg_publication_pubdelete 7
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define _WCHAR_H 1
#define MQ_PRIO_MAX 32768
#define Anum_pg_sequence_seqtypid 2
#define ERRCODE_TOO_MANY_ROWS MAKE_SQLSTATE('P','0','0','0','3')
#define PRIXLEAST8 "X"
#define F_TIME_LT 1102
#define IPV6_PATHMTU 61
#define UINT_LEAST32_WIDTH 32
#define F_BYTEALE 1950
#define ERRCODE_INVALID_TRANSACTION_INITIATION MAKE_SQLSTATE('0','B','0','0','0')
#define NUMMULTIRANGEOID 4532
#define F_INTERVAL_PL_TIMETZ 2547
#define F_XIDOUT 51
#define SI_DETHREAD SI_DETHREAD
#define HeapTupleHeaderSetDatumLength(tup,len) SET_VARSIZE(tup, len)
#define F_RANGE_UNION 3867
#define ADJ_MAXERROR 0x0004
#define iscntrl(c) __isctype((c), _IScntrl)
#define F_BYTEANE 1953
#define RelationCreateStorage_compat(a,b,c) RelationCreateStorage(a, b)
#define F_BOOL_JSONB 3556
#define AssertTransactionIdInAllowableRange(xid) ((void)true)
#define F_CORR 2829
#define _SC_2_C_DEV _SC_2_C_DEV
#define XLR_INFO_MASK 0x0F
#define AF_IB PF_IB
#define ERRCODE_ARRAY_ELEMENT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define SO_NETNS_COOKIE 71
#define INT16_MAX (32767)
#define IPV6_NEXTHOP 9
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define F_BTTEXTCMP 360
#define F_BTINT2SORTSUPPORT 3129
#define AF_MCTP PF_MCTP
#define HAVE_PG_ATTRIBUTE_NORETURN 1
#define F_NUMERIC_INT8 1781
#define F_VARBIT_SUPPORT 3158
#define __S_IREAD 0400
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define fastgetattr(tup,attnum,tupleDesc,isnull) ( AssertMacro((attnum) > 0), (*(isnull) = false), HeapTupleNoNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup)->t_data + (tup)->t_data->t_hoff + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocachegetattr((tup), (attnum), (tupleDesc)) ) : ( att_isnull((attnum)-1, (tup)->t_data->t_bits) ? ( (*(isnull) = true), (Datum)NULL ) : ( nocachegetattr((tup), (attnum), (tupleDesc)) ) ) )
#define HEAP_NATTS_MASK 0x07FF
#define F_LTRIM_TEXT_TEXT 875
#define F_PG_RELATION_FILEPATH 3034
#define RMGR_H 
#define FRAMEOPTION_EXCLUDE_CURRENT_ROW 0x08000
#define F_GETOWN_EX __F_GETOWN_EX
#define FKCONSTR_ACTION_CASCADE 'c'
#define PACKAGE_STRING "PostgreSQL 14.5"
#define F_REGEXEQJOINSEL 1824
#define Anum_pg_publication_oid 1
#define ERRCODE_DUPLICATE_DATABASE MAKE_SQLSTATE('4','2','P','0','4')
#define HeapTupleHeaderSetHeapOnly(tup) ( (tup)->t_infomask2 |= HEAP_ONLY_TUPLE )
#define F_ARRAY_RECV 2400
#define __FLT_EVAL_METHOD__ 0
#define F_TIMESTAMP_GE_TIMESTAMPTZ 2524
#define ERRCODE_DATABASE_DROPPED MAKE_SQLSTATE('5','7','P','0','4')
#define F_INT8MULTIRANGE__INT8RANGE 4297
#define pg_prevent_errno_in_scope() int __errno_location pg_attribute_unused()
#define F_BOX_OVERLEFT 189
#define F_BITLT 1595
#define ERRCODE_INVALID_SCHEMA_NAME MAKE_SQLSTATE('3','F','0','0','0')
#define IP_DEFAULT_MULTICAST_LOOP 1
#define F_HASH_RANGE 3902
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 1
#define F_UTF8_TO_SJIS 4379
#define VARATT_IS_1B_E(PTR) ((((varattrib_1b *) (PTR))->va_header) == 0x01)
#define TIMESTAMPTZOID 1184
#define F_POLY_BELOW 2566
#define FIELDNO_EXPRCONTEXT_AGGVALUES 8
#define lengthof(array) (sizeof (array) / sizeof ((array)[0]))
#define STACK_DEPTH_SLOP (512 * 1024L)
#define MemSetTest(val,len) ( ((len) & LONG_ALIGN_MASK) == 0 && (len) <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0 && (val) == 0 )
#define F_PG_REPLICATION_ORIGIN_SESSION_RESET 6007
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define RELSEG_SIZE 131072
#define F_ANYNONARRAY_IN 2777
#define F_REGEXP_SPLIT_TO_TABLE_TEXT_TEXT 2765
#define F_BITXOR 1675
#define GIDSIZE 200
#define F_NAMEEQ 62
#define FNONBLOCK O_NONBLOCK
#define F_PG_TIMEZONE_ABBREVS 2599
#define INT8_MIN (-128)
#define F_UTF8_TO_ISO8859 4372
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define CharGetDatum(X) ((Datum) (X))
#define RegProcedureIsValid(p) OidIsValid(p)
#define ILL_BADIADDR ILL_BADIADDR
#define F_INET_GIST_PENALTY 3557
#define CONNECTION_MANAGMENT_H 
#define EOWNERDEAD 130
#define F_LIKE_ESCAPE_BYTEA_BYTEA 2009
#define _PROC_H_ 
#define HEAP_XMAX_IS_EXCL_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_EXCL_LOCK)
#define F_BYTEA_STRING_AGG_FINALFN 3544
#define EAI_INPROGRESS -100
#define INTERVAL_FULL_RANGE (0x7FFF)
#define HeapTupleHeaderGetTypMod(tup) ( (tup)->t_choice.t_datum.datum_typmod )
#define F_TIMESTAMPTZ_CMP 1314
#define FLOAT8_FITS_IN_INT16(num) ((num) >= (float8) PG_INT16_MIN && (num) < -((float8) PG_INT16_MIN))
#define F_WIN1250_TO_MIC 4340
#define PG_HAVE_ATOMIC_READ_U64 
#define INT16_MIN (-32767-1)
#define HAVE_ASN1_STRING_GET0_DATA 1
#define si_overrun _sifields._timer.si_overrun
#define F_PG_GET_KEYWORDS 1686
#define _BITS_ERRNO_H 1
#define F_TS_HEADLINE_REGCONFIG_JSON_TSQUERY_TEXT 4205
#define F_MULTIRANGE_CONTAINS_RANGE 4250
#define ERRCODE_INVALID_NAME MAKE_SQLSTATE('4','2','6','0','2')
#define F_LANGUAGE_HANDLER_OUT 2303
#define SInvalWriteLock (&MainLWLockArray[6].lock)
#define F_NAMEIN 34
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define MOD_TIMECONST ADJ_TIMECONST
#define F_INT2SMALLER 771
#define F_GENERATE_SERIES_TIMESTAMPTZ_TIMESTAMPTZ_INTERVAL 939
#define FALLOC_FL_ZERO_RANGE 0x10
#define SHM_TOC_H 
#define F_TRUNC_FLOAT8 1343
#define EL2NSYNC 45
#define ILL_BADSTK ILL_BADSTK
#define F_TO_TSVECTOR_JSON 4210
#define pg_attribute_hot __attribute__((hot))
#define SAFE_STR_MIN_SPECIALS ( 1 )
#define F_INT8NE 468
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __LDBL_REDIR1(name,proto,alias) name proto
#define PageClearHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags &= ~PD_HAS_FREE_LINES)
#define F_RANGE_MERGE_ANYMULTIRANGE 4228
#define F_BTFLOAT84CMP 2195
#define RelationGetTargetPageUsage(relation,defaultff) (BLCKSZ * RelationGetFillFactor(relation, defaultff) / 100)
#define F_NUMERIC_SORTSUPPORT 3283
#define MOD_STATUS ADJ_STATUS
#define ETXTBSY 26
#define F_REGTYPESEND 2455
#define _POSIX_SYNCHRONIZED_IO 200809L
#define F_REGTYPEOUT 2221
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define F_PERCENTILE_CONT_FLOAT8_FLOAT8 3974
#define AmBootstrapProcess() (MyAuxProcType == BootstrapProcess)
#define RWH_WRITE_LIFE_EXTREME 5
#define Anum_pg_type_typsend 19
#define F_MIC_TO_LATIN1 4345
#define F_MIC_TO_LATIN2 4339
#define F_MIC_TO_LATIN3 4347
#define F_MIC_TO_LATIN4 4349
#define NSIG _NSIG
#define RTOverRightStrategyNumber 4
#define F_TEXT_LARGER 458
#define SO_INCOMING_NAPI_ID 56
#define EAI_CANCELED -101
#define F_NAME_TEXT 407
#define UUIDARRAYOID 2951
#define Anum_pg_type_typinput 16
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define F_RI_FKEY_CHECK_UPD 1645
#define F_TIMESTAMP_GT_DATE 2367
#define __FLT64X_MAX_10_EXP__ 4932
#define F_ENUM_FIRST 3528
#define SIGTTOU 22
#define XactSLRULock (&MainLWLockArray[11].lock)
#define F_HASHTEXT 400
#define F_REGR_SXX 2819
#define list_make4_int(x1,x2,x3,x4) list_make4_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3), list_make_int_cell(x4))
#define ACL_ALL_RIGHTS_FOREIGN_SERVER (ACL_USAGE)
#define BACKENDID_H 
#define Anum_pg_type_typdelim 11
#define __CFLOAT32X _Complex _Float32x
#define F_RANGE_SEND 3837
#define F_PG_STAT_GET_DB_BLK_READ_TIME 2844
#define NSS_BUFLEN_PASSWD 1024
#define F_UPPER_ANYRANGE 3849
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define F_OVERLAPS_TIMESTAMP_INTERVAL_TIMESTAMP_INTERVAL 2042
#define ITUP_H 
#define F_HAS_TYPE_PRIVILEGE_OID_TEXT 3143
#define TAS_SPIN(lock) TAS(lock)
#define F_TIMETZ_PL_INTERVAL 1749
#define F_REGR_SYY 2820
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define SHARD_RANGE_QUERY "SELECT min(%s), max(%s) FROM %s"
#define F_MIN_INT2 2133
#define HAVE_DECL_PWRITEV 1
#define FORMAT_TYPE_ALLOW_INVALID 0x02
#define F_ABBREV_CIDR 599
#define VARHDRSZ_SHORT offsetof(varattrib_1b, va_data)
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define F_WIN1251_TO_WIN866 4315
#define F_INT8LARGER 1236
#define SVE_MAGIC 0x53564501
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define PG_BRIN_BLOOM_SUMMARYOID 4600
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define DECLARE_UNIQUE_INDEX_PKEY(name,oid,decl) extern int no_such_variable
#define DISTRIBUTE_BY_HASH 'h'
#define ItemIdMarkDead(itemId) ( (itemId)->lp_flags = LP_DEAD )
#define F_VARIANCE_NUMERIC 2153
#define F_PG_STAT_GET_WAL 1136
#define F_MIN_TIMESTAMP 2142
#define F_PG_NOTIFICATION_QUEUE_USAGE 3296
#define F_SCALARLTJOINSEL 107
#define UINTPTR_WIDTH __WORDSIZE
#define ERRCODE_T_R_DEADLOCK_DETECTED MAKE_SQLSTATE('4','0','P','0','1')
#define CLOCK_MONOTONIC_COARSE 6
#define RESOWNER_H 
#define F_PG_TRY_ADVISORY_XACT_LOCK_INT8 3091
#define F_EXTRACT_TEXT_INTERVAL 6204
#define F_TIMESTAMPTZ_NE 1153
#define F_TIMESTAMPTZ_GT_TIMESTAMP 2530
#define ERRCODE_E_R_I_E_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','1')
#define CITUS_ARRAY_TYPE_H 
#define SIGINT 2
#define F_TIMESTAMPTZ_SMALLER 1195
#define ALLOCSET_SMALL_MAXSIZE (8 * 1024)
#define ____gwchar_t_defined 1
#define floatVal(v) atof(((Value *)(v))->val.str)
#define F_PG_STOP_BACKUP_BOOL_BOOL 2739
#define F_MONEY_INT4 3811
#define F_BRIN_MINMAX_UNION 3386
#define F_CASH_MUL_INT2 866
#define pg_pread pread
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define F_PG_STAT_GET_SLRU 2306
#define F_JSONB_HASH_EXTENDED 3416
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define FD_SETSIZE __FD_SETSIZE
#define Anum_pg_index_indpred 20
#define Anum_pg_index_indisreplident 14
#define PRIMNODES_H 
#define F_FLOAT8_INT2 235
#define F_FLOAT8_INT4 316
#define F_FLOAT8_INT8 482
#define F_JSONB_CMP 4044
#define UINT_FAST16_MAX (18446744073709551615UL)
#define F_OBJ_DESCRIPTION_OID_NAME 1215
#define ENOTBLK 15
#define F_JSONB_TYPEOF 3210
#define EPROTOTYPE 91
#define F_JSONB_TO_TSVECTOR_REGCONFIG_JSONB_JSONB 4214
#define ACL_ALL_RIGHTS_LARGEOBJECT (ACL_SELECT|ACL_UPDATE)
#define printf(...) pg_printf(__VA_ARGS__)
#define F_SCALARGEJOINSEL 398
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define F_EXP_NUMERIC 1732
#define F_MACADDR8_SET7BIT 4125
#define PG_GETARG_FLOAT4(n) DatumGetFloat4(PG_GETARG_DATUM(n))
#define EAI_ALLDONE -103
#define PG_GETARG_FLOAT8(n) DatumGetFloat8(PG_GETARG_DATUM(n))
#define __linux__ 1
#define IndexInfoFindDataOffset(t_info) ( (!((t_info) & INDEX_NULL_MASK)) ? ( (Size)MAXALIGN(sizeof(IndexTupleData)) ) : ( (Size)MAXALIGN(sizeof(IndexTupleData) + sizeof(IndexAttributeBitMapData)) ) )
#define F_AGE_TIMESTAMPTZ 1386
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
#define CITUS_safe_lib_H 
#define RelationMappingLock (&MainLWLockArray[25].lock)
#define PG_RETURN_TEXT_P(x) PG_RETURN_POINTER(x)
#define F_CBRT 1345
#define PG_FREE_IF_COPY(ptr,n) do { if ((Pointer) (ptr) != PG_GETARG_POINTER(n)) pfree(ptr); } while (0)
#define SIZE_MAX (18446744073709551615UL)
#define SO_REUSEADDR 2
#define foreach_ptr_append(var,l) for (int var ## PositionDoNotUse = 0; (var ## PositionDoNotUse) < list_length(l) && (((var) = list_nth(l, var ## PositionDoNotUse)) || true); var ## PositionDoNotUse ++)
#define RSIZE_MAX_STR ( 4UL << 10 )
#define F_PG_STAT_RESET_SINGLE_TABLE_COUNTERS 3776
#define DeferredError(code,message,detail,hint) DeferredErrorInternal(code, message, detail, hint, __FILE__, __LINE__, PG_FUNCNAME_MACRO)
#define HAVE_LIBCRYPTO 1
#define F_NUMERIC_VAR_SAMP 1838
#define CppConcat(x,y) x ##y
#define _SC_TIMERS _SC_TIMERS
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define F_REGCONFIGOUT 3737
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define F_BOOL_OR 2518
#define F_DATE_GT_TIMESTAMPTZ 2354
#define F_PG_STAT_GET_BGWRITER_STAT_RESET_TIME 3075
#define PG_BITUTILS_H 
#define SOL_X25 262
#define O_APPEND 02000
#define XACT_XINFO_HAS_ORIGIN (1U << 5)
#define F_JSON_EACH 3958
#define _FORTIFY_SOURCE 2
#define Anum_pg_attribute_attrelid 1
#define F_POLY_OVERLAP 346
#define INTERVAL_PRECISION(t) ((t) & INTERVAL_PRECISION_MASK)
#define __INT8_MAX__ 0x7f
#define CURSOR_OPT_HOLD 0x0020
#define SET_LOCKTAG_SPECULATIVE_INSERTION(locktag,xid,token) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = (token), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_SPECULATIVE_TOKEN, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define GTSVECTOROID 3642
#define pg_write_barrier() pg_write_barrier_impl()
#define PG_DIAG_SOURCE_FUNCTION 'R'
#define F_INT42LT 161
#define ItemIdSetNormal(itemId,off,len) ( (itemId)->lp_flags = LP_NORMAL, (itemId)->lp_off = (off), (itemId)->lp_len = (len) )
#define _BITS_TIMEX_H 1
#define F_ELEM_CONTAINED_BY_MULTIRANGE 4252
#define HAVE_DECL_LLVMCREATEGDBREGISTRATIONLISTENER 1
#define COLL_WEIGHTS_MAX 255
#define pgproc_statusflags_compat(pgproc) ((pgproc)->statusFlags)
#define DO_AGGSPLIT_SKIPFINAL(as) (((as) & AGGSPLITOP_SKIPFINAL) != 0)
#define IndexTupleHasVarwidths(itup) ((((IndexTuple) (itup))->t_info & INDEX_VAR_MASK))
#define BUILTINS_H 
#define F_TO_TSVECTOR_REGCONFIG_TEXT 3745
#define F_INT84GT 477
#define ERRCODE_FDW_UNABLE_TO_ESTABLISH_CONNECTION MAKE_SQLSTATE('H','V','0','0','N')
#define Anum_pg_attribute_attgenerated 18
#define CHARCLASS_NAME_MAX 2048
#define isblank(c) __isctype((c), _ISblank)
#define POSTGRES_EPOCH_JDATE 2451545
#define F_TEXT_GE 743
#define unconstify(underlying_type,expr) (StaticAssertExpr(__builtin_types_compatible_p(__typeof(expr), const underlying_type), "wrong cast"), (underlying_type) (expr))
#define SO_MARK 36
#define F_TEXT_GT 742
#define __USE_EXTERN_INLINES 1
#define Anum_pg_constraint_coninhcount 17
#define ERRCODE_DIVISION_BY_ZERO MAKE_SQLSTATE('2','2','0','1','2')
#define PG_GETARG_EXPANDED_ARRAY(n) DatumGetExpandedArray(PG_GETARG_DATUM(n))
#define F_SPG_BOX_QUAD_CHOOSE 5013
#define PinTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) IncrTupleDescRefCount(tupdesc); } while (0)
#define ProcessUtility_compat(a,b,c,d,e,f,g,h) ProcessUtility(a, b, c, d, e, f, g, h)
#define OBJECTADDRESS_H 
#define F_GENERATE_SERIES_TIMESTAMP_TIMESTAMP_INTERVAL 938
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define F_REGEXP_MATCH_TEXT_TEXT 3396
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define F_PG_STAT_GET_XACT_TUPLES_HOT_UPDATED 3043
#define ETIMEDOUT 110
#define HAVE__BUILTIN_TYPES_COMPATIBLE_P 1
#define F_INT4LARGER 768
#define SCNx32 "x"
#define __USE_GNU_GETTEXT 1
#define PG_RETURN_BPCHAR_P(x) PG_RETURN_POINTER(x)
#define F_MIN_NUMERIC 2146
#define ExclusiveLock 7
#define _EXTERN_INLINE __extern_inline
#define F_DATE_EQ_TIMESTAMPTZ 2353
#define F_TS_TOKEN_TYPE_TEXT 3714
#define INT4MULTIRANGEARRAYOID 6150
#define F_STDDEV_SAMP_FLOAT4 2715
#define DN_ACCESS 0x00000001
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define Anum_pg_class_relkind 17
#define F_NUMERIC_POLY_SUM 3388
#define EOVERFLOW 75
#define F_INT84LE 478
#define F_DATE_BIN_INTERVAL_TIMESTAMP_TIMESTAMP 6177
#define F_POLY_OVERRIGHT 343
#define SizeOfXLogRecordBlockImageHeader (offsetof(XLogRecordBlockImageHeader, bimg_info) + sizeof(uint8))
#define DATEORDER_YMD 0
#define SizeOfXLogRecord (offsetof(XLogRecord, xl_crc) + sizeof(pg_crc32c))
#define TEXTARRAYOID 1009
#define SO_DEBUG 1
#define F_INET_OUT 911
#define F_TEXT_LE 741
#define __BITS_PER_LONG 64
#define F_TIME_PL_INTERVAL 1747
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define PF_ALG 38
#define F_INT84NE 475
#define _XOPEN_ENH_I18N 1
#define ERRCODE_INVALID_CATALOG_NAME MAKE_SQLSTATE('3','D','0','0','0')
#define F_TO_HEX_INT4 2089
#define F_HASHOIDVECTOREXTENDED 776
#define F_TO_HEX_INT8 2090
#define ARR_ELEMTYPE(a) ((a)->elemtype)
#define ELOG_H 
#define MAX_TIMESTAMP_PRECISION 6
#define SET_NULLABLE_FIELD(ptr,field,value) (ptr)->__nullable_storage.field = (value); (ptr)->field = &((ptr)->__nullable_storage.field)
#define F_TS_RANK_CD__FLOAT4_TSVECTOR_TSQUERY 3708
#define ACL_SELECT (1<<1)
#define PERFORM_DELETION_SKIP_ORIGINAL 0x0008
#define PG_DIAG_INTERNAL_POSITION 'p'
#define IP_IPSEC_POLICY 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define ACLITEM_SET_RIGHTS(item,rights) ((item).ai_privs = (AclMode) (rights))
#define ERRCODE_UNDEFINED_CURSOR MAKE_SQLSTATE('3','4','0','0','0')
#define Anum_pg_class_relisshared 15
#define F_PG_DEPENDENCIES_IN 3404
#define F_PG_GET_PUBLICATION_TABLES 6119
#define lthird_oid(l) lfirst_oid(list_nth_cell(l, 2))
#define XactCompletionForceSyncCommit(xinfo) ((xinfo & XACT_COMPLETION_FORCE_SYNC_COMMIT) != 0)
#define AF_INET6 PF_INET6
#define F_INT84PL 1274
#define dsa_pointer_atomic_compare_exchange pg_atomic_compare_exchange_u64
#define SHRT_MIN (-SHRT_MAX - 1)
#define F_XIDEQ 68
#define STA_CLOCKERR 0x1000
#define F_NPOINTS_POLYGON 1556
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define CppAsString2(x) CppAsString(x)
#define __SHRT_WIDTH__ 16
#define PG_CLASSARRAYOID 273
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define OPTION_NAME_COMPRESSION_TYPE "compression"
#define F_LCM_INT8_INT8 5047
#define F_RI_FKEY_NOACTION_UPD 1655
#define F_XIDEQINT4 1319
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define PageGetLSN(page) PageXLogRecPtrGet(((PageHeader) (page))->pd_lsn)
#define Anum_pg_type_typndims 28
#define ALIGNOF_BUFFER 32
#define PF_UNIX PF_LOCAL
#define ERRCODE_INVALID_REGULAR_EXPRESSION MAKE_SQLSTATE('2','2','0','1','B')
#define S_LOCK(lock) (TAS(lock) ? s_lock((lock), __FILE__, __LINE__, PG_FUNCNAME_MACRO) : 0)
#define AmCheckpointerProcess() (MyAuxProcType == CheckpointerProcess)
#define F_OID 1287
#define __SI_MAX_SIZE 128
#define F_CURRENT_QUERY 817
#define F_BYTEASEND 2413
#define HAVE_GCC__ATOMIC_INT32_CAS 1
#define ERRCODE_SQL_ROUTINE_EXCEPTION MAKE_SQLSTATE('2','F','0','0','0')
#define F_INT84MUL 1276
#define ResetExprContext(econtext) MemoryContextReset((econtext)->ecxt_per_tuple_memory)
#define SCHAR_WIDTH 8
#define F_TS_RANK__FLOAT4_TSVECTOR_TSQUERY 3704
#define F_HAS_SERVER_PRIVILEGE_OID_OID_TEXT 3009
#define LOCAL_FCINFO(name,nargs) union { FunctionCallInfoBaseData fcinfo; char fcinfo_data[SizeForFunctionCallInfo(nargs)]; } name ##data; FunctionCallInfo name = &name ##data.fcinfo
#define att_addlength_datum(cur_offset,attlen,attdatum) att_addlength_pointer(cur_offset, attlen, DatumGetPointer(attdatum))
#define O_TMPFILE __O_TMPFILE
#define F_XIDIN 50
#define PG_TABLE_SIZE_FUNCTION "pg_table_size(%s)"
#define PF_ASH 18
#define F_TIDLE 2793
#define F_POSITION_BYTEA_BYTEA 2014
#define HOLD_CANCEL_INTERRUPTS() (QueryCancelHoldoffCount++)
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define F_PG_STAT_GET_TUPLES_INSERTED 1931
#define DECLARE_UNIQUE_INDEX(name,oid,decl) extern int no_such_variable
#define F_HASH_NUMERIC 432
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define F_PG_READ_BINARY_FILE_TEXT 3828
#define _WCHAR_T_ 
#define F_PG_CONTROL_CHECKPOINT 3442
#define F_SHA384 3421
#define MCXT_ALLOC_NO_OOM 0x02
#define F_HASHOIDVECTOR 457
#define F_BRIN_MINMAX_MULTI_DISTANCE_DATE 4629
#define EPERM 1
#define F_LIKE_ESCAPE_TEXT_TEXT 1637
#define F_INT8_BIT 2076
#define pgstat_init_relation(r) pgstat_initstats(r)
#define AssertVariableIsOfType(varname,typename) StaticAssertStmt(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename))
#define F_FIRST_VALUE 3112
#define CitusIsA(nodeptr,_type_) (CitusNodeTag(nodeptr) == T_ ##_type_)
#define PF_AX25 3
#define F_SPG_POLY_QUAD_COMPRESS 5011
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define F_DIST_PPOLY 3275
#define __SIZEOF_PTRDIFF_T__ 8
#define PG_GETARG_ANY_ARRAY_P(n) DatumGetAnyArrayP(PG_GETARG_DATUM(n))
#define F_HAS_SERVER_PRIVILEGE_TEXT_TEXT 3010
#define HASH_CONTEXT 0x0400
#define F_BPCHARLT 1049
#define F_CIRCLE_POINT_FLOAT8 1473
#define SOL_XDP 283
#define F_LAG_ANYELEMENT 3106
#define __unix__ 1
#define __SIZEOF_LONG__ 8
#define _IONBF 2
#define TTS_FLAG_FIXED (1 << 4)
#define F_BOX_BELOW 2562
#define F_INDEX_AM_HANDLER_OUT 327
#define FIELDNO_EXPRCONTEXT_OUTERTUPLE 3
#define F_PG_STAT_GET_DB_ACTIVE_TIME 6186
#define AGGSPLITOP_SERIALIZE 0x04
#define F_CHARIN 1245
#define toascii(c) __toascii (c)
#define F_EUC_CN_TO_UTF8 4360
#define PG_MAGIC_FUNCTION_NAME_STRING "Pg_magic_func"
#define ERRCODE_S_R_E_FUNCTION_EXECUTED_NO_RETURN_STATEMENT MAKE_SQLSTATE('2','F','0','0','5')
#define MACADDR8OID 774
#define PF_NETLINK 16
#define XACT_XINFO_HAS_AE_LOCKS (1U << 6)
#define __UINT16_C(c) c
#define F_PG_ADVISORY_UNLOCK_SHARED_INT4_INT4 2891
#define F_INT8_AVG 1964
#define F_FLOAT4LARGER 209
#define OPTION_NAME_STRIPE_ROW_COUNT "stripe_row_limit"
#define F_OCTET_LENGTH_TEXT 1374
#define HAVE_LIBSELINUX 1
#define ERRCODE_NOT_AN_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','L')
#define NI_NAMEREQD 8
#define __SVE_VQ_BYTES 16
#define F_BTNAMETEXTCMP 246
#define TIMETZOID 1266
#define END_TIMESTAMP INT64CONST(9223371331200000000)
#define AF_CAN PF_CAN
#define SCNdLEAST16 "hd"
#define F_STDDEV_POP_INT2 2726
#define O_WRONLY 01
#define F_CIRCLE_POLYGON 1474
#define SECURITY_NOFORCE_RLS 0x0004
#define U64FromFullTransactionId(x) ((x).value)
#define __gnu_linux__ 1
#define F_EXTRACT_TEXT_TIMESTAMP 6202
#define __INTMAX_WIDTH__ 64
#define DEFAULT_BACKEND_FLUSH_AFTER 0
#define O_EXCL 0200
#define SPIN_DELAY() ((void) 0)
#define SOL_IP 0
#define ERRCODE_INVALID_BINARY_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','3')
#define METADATA_UTILITY_H 
#define F_SPG_BOX_QUAD_INNER_CONSISTENT 5015
#define XLOG_XACT_HAS_INFO 0x80
#define F_ORDERED_SET_TRANSITION_MULTI 3971
#define HEAPTUPLESIZE MAXALIGN(sizeof(HeapTupleData))
#define EXEC_FLAG_SKIP_TRIGGERS 0x0010
#define OFF_H 
#define F_TO_CHAR_TIMESTAMP_TEXT 2049
#define PG_O_DIRECT O_DIRECT
#define SCNdLEAST32 "d"
#define F_VARBIT_RECV 2458
#define Anum_pg_attribute_atttypid 3
#define DAYS_PER_YEAR 365.25
#define TYPCATEGORY_STRING 'S'
#define F_JSONB_EACH_TEXT 3932
#define TUPLESTORE_H 
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define ERRCODE_NON_NUMERIC_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','6')
#define SYNC_FILE_RANGE_WRITE 2
#define RESUME_INTERRUPTS() do { Assert(InterruptHoldoffCount > 0); InterruptHoldoffCount--; } while(0)
#define SHARDID_SEQUENCE_NAME "pg_dist_shardid_seq"
#define F_CIDSEND 2443
#define F_PG_NEXTOID 275
#define __FLT16_MIN_EXP__ (-13)
#define Anum_pg_type_typmodin 20
#define PG_HAVE_ATOMIC_FETCH_AND_U64 
#define Anum_pg_type_typowner 4
#define PRIi64 __PRI64_PREFIX "i"
#define __ARM_FEATURE_FMA 1
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define IPPROTO_IDP IPPROTO_IDP
#define AT_REMOVEDIR 0x200
#define FORMAT_TYPE_TYPEMOD_GIVEN 0x01
#define F_BOX_OUT 124
#define F_PG_GET_STATISTICSOBJDEF 3415
#define SCNdLEAST64 __PRI64_PREFIX "d"
#define F_TO_REGCOLLATION 4195
#define F_UTF8_TO_EUC_JIS_2004 4383
#define RelationGetDescr(relation) ((relation)->rd_att)
#define IPPROTO_IPIP IPPROTO_IPIP
#define RTMaxStrategyNumber 30
#define HAVE_RL_FILENAME_QUOTING_FUNCTION 1
#define F_RANGE_OVERLAPS_MULTIRANGE 4246
#define F_INT2INT4_SUM 3572
#define RelFileNodeEquals(node1,node2) ((node1).relNode == (node2).relNode && (node1).dbNode == (node2).dbNode && (node1).spcNode == (node2).spcNode)
#define _T_PTRDIFF 
#define pg_noinline __attribute__((noinline))
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define F_TEXTEQ 67
#define F_UUID_LE 2955
#define F_POW_FLOAT8_FLOAT8 1346
#define F_JSON_BUILD_ARRAY_ANY 3198
#define PAI_IS_HEAP (1 << 1)
#define pg_attribute_noreturn() __attribute__((noreturn))
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define __STDC_VERSION__ 199901L
#define L_ctermid 9
#define F_MAX_PG_LSN 4189
#define PG_HAVE_ATOMIC_WRITE_U64 
#define PG_GETARG_CHAR(n) DatumGetChar(PG_GETARG_DATUM(n))
#define F_CIRCLE_RECV 2490
#define F_TEXTNENAME 252
#define F_TIMESTAMPTZTYPMODIN 2907
#define __FLT_HAS_DENORM__ 1
#define strerror_r pg_strerror_r
#define F_MAX_TID 2797
#define pg_attribute_no_sanitize_alignment() __attribute__((no_sanitize("alignment")))
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define PG_GETARG_TEXT_P_SLICE(n,a,b) DatumGetTextPSlice(PG_GETARG_DATUM(n),a,b)
#define F_FLOAT4MUL 202
#define F_JSON_SEND 324
#define F_TS_HEADLINE_TEXT_TSQUERY_TEXT 3754
#define F_JSONB_NE 4038
#define F_SUM_FLOAT8 2111
#define __timeval_defined 1
#define FORMAT_TYPE_INVALID_AS_NULL 0x08
#define F_RANGE_AGG_TRANSFN 4299
#define F_TO_REGPROCEDURE 3479
#define F_DATE_RECV 2468
#define HEAP_XMAX_COMMITTED 0x0400
#define FRAMEOPTION_START_OFFSET_PRECEDING 0x00800
#define AF_LOCAL PF_LOCAL
#define F_OVERLAPS_TIMESTAMPTZ_INTERVAL_TIMESTAMPTZ_TIMESTAMPTZ 1307
#define DatumGetInt64(X) ((int64) (X))
#define AF_ROUTE PF_ROUTE
#define F_FLOAT4OUT 201
#define F_ENUM_GE 3513
#define F_NUMERIC_RECV 2460
#define ACL_ALL_RIGHTS_DATABASE (ACL_CREATE|ACL_CREATE_TEMP|ACL_CONNECT)
#define PageIsNew(page) (((PageHeader) (page))->pd_upper == 0)
#define ERRCODE_SEQUENCE_GENERATOR_LIMIT_EXCEEDED MAKE_SQLSTATE('2','2','0','0','H')
#define __ONCE_ALIGNMENT 
#define _POSIX_HOST_NAME_MAX 255
#define Anum_pg_index_indisvalid 10
#define OidFunctionCall6(functionId,arg1,arg2,arg3,arg4,arg5,arg6) OidFunctionCall6Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define F_GTSVECTOR_OPTIONS 3434
#define PageIsFull(page) (((PageHeader) (page))->pd_flags & PD_PAGE_FULL)
#define NI_MAXHOST 1025
#define ESBADFMT ( 410 )
#define F_TIME_MI_INTERVAL 1748
#define F_INTERVAL_PL_TIMESTAMPTZ 2549
#define O_FSYNC O_SYNC
#define ERRCODE_INVALID_ESCAPE_OCTET MAKE_SQLSTATE('2','2','0','0','D')
#define _POSIX_SEM_NSEMS_MAX 256
#define MSG_DONTROUTE MSG_DONTROUTE
#define F_FLOAT8_REGR_COMBINE 3342
#define PG_FUNCTION_ARGS FunctionCallInfo fcinfo
#define ____sigval_t_defined 
#define PQsetdb(M_PGHOST,M_PGPORT,M_PGOPT,M_PGTTY,M_DBNAME) PQsetdbLogin(M_PGHOST, M_PGPORT, M_PGOPT, M_PGTTY, M_DBNAME, NULL, NULL)
#define Anum_pg_attribute_attname 2
#define HAVE_FSEEKO 1
#define F_DATETIME_PL 1272
#define XIDARRAYOID 1011
#define F_BOOL_ACCUM_INV 3497
#define F_TIME_RECV 2470
#define LOCK_LOCKMETHOD(lock) ((LOCKMETHODID) (lock).tag.locktag_lockmethodid)
#define FLOAT4OID 700
#define _BITS_STDINT_UINTN_H 1
#define ANYCOMPATIBLEOID 5077
#define AttributeRelidNumIndexId 2659
#define HeapTupleHeaderSetSpeculativeToken(tup,token) ( ItemPointerSet(&(tup)->t_ctid, token, SpecTokenOffsetNumber) )
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define F_RANGE_BEFORE 3863
#define ERRCODE_AMBIGUOUS_PARAMETER MAKE_SQLSTATE('4','2','P','0','8')
#define DEFAULT_PGSOCKET_DIR "/var/run/postgresql"
#define PG_HAVE_ATOMIC_EXCHANGE_U64 
#define WEOF (0xffffffffu)
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define F_PATH_DISTANCE 370
#define F_TS_HEADLINE_JSON_TSQUERY_TEXT 4207
#define LONG_BIT 64
#define ECOMM 70
#define _POSIX_NGROUPS_MAX 8
#define Anum_pg_class_reltoastrelid 13
#define PF_NETROM 6
#define HAVE_UUID_UUID_H 1
#define HAVE_SYS_SIGNALFD_H 1
#define REPLICA_IDENTITY_DEFAULT 'd'
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define Anum_pg_type_typacl 32
#define F_FLOAT84NE 306
#define InitDirtySnapshot(snapshotdata) ((snapshotdata).snapshot_type = SNAPSHOT_DIRTY)
#define F_BTINT8SORTSUPPORT 3131
#define PG_AUTOCONF_FILENAME "postgresql.auto.conf"
#define HAVE_BIO_METH_NEW 1
#define _SC_CLK_TCK _SC_CLK_TCK
#define TransactionIdRetreat(dest) do { (dest)--; } while ((dest) < FirstNormalTransactionId)
#define F_HEIGHT 977
#define IPV6_ORIGDSTADDR 74
#define F_UPPER_INF_ANYRANGE 3854
#define NAMEARRAYOID 1003
#define F_LO_TRUNCATE 1004
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define StaticAssertStmt(condition,errmessage) do { _Static_assert(condition, errmessage); } while(0)
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define PG_TYPE_H 
#define F_PG_SEQUENCE_PARAMETERS 3078
#define F_RANGE_GIST_PICKSPLIT 3880
#define F_RTRIM_BYTEA_BYTEA 6196
#define ACL_DELETE_CHR 'd'
#define F_MULTIRANGE_SEND 4234
#define pg_memory_barrier() pg_memory_barrier_impl()
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IPPROTO_IPV6 IPPROTO_IPV6
#define lfirst_node(type,lc) castNode(type, lfirst(lc))
#define Anum_pg_publication_pubviaroot 9
#define F_PG_STAT_GET_REPLICATION_SLOT 6169
#define F_BTINT8CMP 842
#define INTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_INT, (LEN))
#define USE_LIBXML 1
#define XLOGRECORD_H 
#define RTSubStrategyNumber 24
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define AF_ECONET PF_ECONET
#define Anum_pg_type_typbyval 6
#define __FLT32X_HAS_DENORM__ 1
#define F_INETMI_INT8 2632
#define __HAVE_FLOAT128X 0
#define F_PATH_INTER 973
#define SECURITY_LOCAL_USERID_CHANGE 0x0001
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define F_HAS_COLUMN_PRIVILEGE_OID_OID_INT2_TEXT 3019
#define F_INT4SMALLER 769
#define VARDATA_EXTERNAL(PTR) VARDATA_1B_E(PTR)
#define lsecond_node(type,l) castNode(type, lsecond(l))
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define dlist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->next)
#define PG_RETURN_FLOAT8(x) return Float8GetDatum(x)
#define SCNdFAST8 "hhd"
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define F_PG_STAT_GET_DB_TUPLES_FETCHED 2759
#define NotifySLRULock (&MainLWLockArray[26].lock)
#define _POSIX_REGEXP 1
#define __f64(x) x ##f64
#define START_CRIT_SECTION() (CritSectionCount++)
#define F_SPG_QUAD_INNER_CONSISTENT 4021
#define DSA_H 
#define HAVE_LINUX_EIDRM_BUG 
#define F_INT84EQ 474
#define pairingheap_is_empty(h) ((h)->ph_root == NULL)
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define F_GET_RW_HINT 1035
#define HEAP_INSERT_SKIP_FSM TABLE_INSERT_SKIP_FSM
#define PG_GETARG_NAME(n) DatumGetName(PG_GETARG_DATUM(n))
#define F_PG_BACKEND_PID 2026
#define DROP_FOREIGN_TABLE_COMMAND "DROP FOREIGN TABLE IF EXISTS %s CASCADE"
#define F_RANGE_GIST_CONSISTENT 3875
#define __O_DSYNC 010000
#define F_NETWORK_SUB 927
#define _POSIX_MEMORY_PROTECTION 200809L
#define F_PERCENTILE_CONT_FLOAT8_MULTI_FINAL 3981
#define F_NETWORK_SUP 929
#define RelationGetParallelWorkers(relation,defaultpw) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->parallel_workers : (defaultpw))
#define F_INTERVAL_LE 1165
#define BKI_LOOKUP(catalog) 
#define EAI_SOCKTYPE -7
#define __sig_atomic_t_defined 1
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define IS_OUTER_JOIN(jointype) (((1 << (jointype)) & ((1 << JOIN_LEFT) | (1 << JOIN_FULL) | (1 << JOIN_RIGHT) | (1 << JOIN_ANTI))) != 0)
#define PG_GETARG_OID(n) DatumGetObjectId(PG_GETARG_DATUM(n))
#define F_CEIL_NUMERIC 1711
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define F_BTCHARCMP 358
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __FLT64_MIN_10_EXP__ (-307)
#define SOL_SOCKET 1
#define ERRCODE_FDW_TOO_MANY_HANDLES MAKE_SQLSTATE('H','V','0','1','4')
#define F_PG_STAT_GET_DB_CHECKSUM_FAILURES 3426
#define _POSIX_LINK_MAX 8
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define F_ISO_TO_KOI8R 4316
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define F_FLOAT8_REGR_INTERCEPT 2814
#define F_AVG_INT2 2102
#define F_AVG_INT4 2101
#define LIBPQ_FE_H 
#define F_AVG_INT8 2100
#define TYPSTORAGE_EXTENDED 'x'
#define F_MAX_DATE 2122
#define _LIBINTL_H 1
#define F_CIDR_RECV 2498
#define __HAVE_FLOAT16 0
#define EREMOTE 66
#define F_GIN_EXTRACT_TSVECTOR_TSVECTOR_INTERNAL_INTERNAL 3656
#define __FLT128_MAX_EXP__ 16384
#define pg_hton16(x) pg_bswap16(x)
#define VARTAG_SIZE(tag) ((tag) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : VARTAG_IS_EXPANDED(tag) ? sizeof(varatt_expanded) : (tag) == VARTAG_ONDISK ? sizeof(varatt_external) : TrapMacro(true, "unrecognized TOAST vartag"))
#define AF_NETLINK PF_NETLINK
#define F_NUMERIC_SUM 3178
#define PG_GETARG_BYTEA_P_COPY(n) DatumGetByteaPCopy(PG_GETARG_DATUM(n))
#define SEGV_MAPERR SEGV_MAPERR
#define __HAVE_FLOAT32 1
#define F_POSITIONSEL 1300
#define F_BYTEAOUT 31
#define _BITS_STDIO_H 1
#define __SVE_NUM_PREGS 16
#define pg_hton32(x) pg_bswap32(x)
#define DatumBigEndianToNative(x) pg_bswap64(x)
#define FRAMEOPTION_END_OFFSET_FOLLOWING 0x04000
#define Anum_pg_sequence_seqcycle 8
#define F_CIRCLE_RIGHT 1457
#define F_HAS_COLUMN_PRIVILEGE_TEXT_TEXT_TEXT 3020
#define F_LSEG_IN 119
#define BlockIdIsValid(blockId) ((bool) PointerIsValid(blockId))
#define F_MACADDR8_LT 4114
#define TYPALIGN_DOUBLE 'd'
#define AF_RDS PF_RDS
#define __SIZEOF_SIZE_T__ 8
#define SK_ROW_MEMBER 0x0008
#define FKCONSTR_ACTION_NOACTION 'a'
#define PRIiLEAST16 "i"
#define ERRCODE_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','1')
#define F_JSONB_EXISTS 4047
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define MIN_TIMESTAMP INT64CONST(-211813488000000000)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define SCNiPTR __PRIPTR_PREFIX "i"
#define __HAVE_FLOAT64 1
#define Anum_pg_publication_puballtables 4
#define INSTR_TIME_GET_MICROSEC(t) (((uint64) (t).tv_sec * (uint64) 1000000) + (uint64) ((t).tv_nsec / 1000))
#define F_PG_STAT_GET_ANALYZE_COUNT 3056
#define NO_RECOVERY 3
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define F_HASHMACADDREXTENDED 778
#define IPPROTO_TP IPPROTO_TP
#define PG_DIAG_COLUMN_NAME 'c'
#define __FLT64X_MIN_EXP__ (-16381)
#define F_LSEG_LE 1484
#define PRIiLEAST32 "i"
#define _SC_BASE _SC_BASE
#define ERRCODE_INVALID_DATETIME_FORMAT MAKE_SQLSTATE('2','2','0','0','7')
#define F_LSEG_LT 1483
#define WORKER_APPLY_SHARD_DDL_COMMAND "SELECT worker_apply_shard_ddl_command (" UINT64_FORMAT ", %s, %s)"
#define MSG_WAITFORONE MSG_WAITFORONE
#define SO_PASSSEC 34
#define F_JSONB_AGG_FINALFN 3266
#define __LDBL_MIN_10_EXP__ (-4931)
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define __kernel_old_uid_t __kernel_old_uid_t
#define F_GENERATE_SUBSCRIPTS_ANYARRAY_INT4_BOOL 1191
#define XACT_H 
#define F_PG_STAT_GET_XACT_TUPLES_RETURNED 3038
#define F_SETLEASE 1024
#define BUF_H 
#define F_PG_SIZE_PRETTY_NUMERIC 3166
#define F_CIRCLE_OVERLAP 1459
#define _GCC_WCHAR_T 
#define __FLT32_MAX_EXP__ 128
#define dngettext(domainname,msgid1,msgid2,n) dcngettext (domainname, msgid1, msgid2, n, LC_MESSAGES)
#define F_LSEG_NE 1482
#define S_IWUSR __S_IWRITE
#define PRIiFAST8 "i"
#define SIOCATMARK 0x8905
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define PRIiLEAST64 __PRI64_PREFIX "i"
#define F_POSITION_BIT_BIT 1698
#define F_SETPIPE_SZ 1031
#define ADJ_TAI 0x0080
#define DSM_HANDLE_INVALID 0
#define __ARM_FP16_FORMAT_IEEE 1
#define F_GIST_POINT_CONSISTENT 2179
#define si_uid _sifields._kill.si_uid
#define CHECKPOINT_CAUSE_TIME 0x0100
#define __WTERMSIG(status) ((status) & 0x7f)
#define ERRCODE_DATETIME_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','8')
#define PG_RETURN_DATUM(x) return (x)
#define foreach_delete_current(lst,cell) (cell ##__state.i--, (List *) (cell ##__state.l = list_delete_cell(lst, cell)))
#define UINT_LEAST16_MAX (65535)
#define F_QUOTE_IDENT 1282
#define R_OK 4
#define F_PATH_OUT 122
#define F_UNLCK 2
#define F_PG_TS_DICT_IS_VISIBLE 3757
#define F_JSONPATH_SEND 4004
#define F_POINT_OUT 118
#define ANYARRAYOID 2277
#define WORKER_APPLY_INTER_SHARD_DDL_COMMAND "SELECT worker_apply_inter_shard_ddl_command (" UINT64_FORMAT ", %s, " UINT64_FORMAT ", %s, %s)"
#define _PC_LINK_MAX _PC_LINK_MAX
#define SIGQUIT 3
#define pg_nodiscard __attribute__((warn_unused_result))
#define TimestampTzPlusMilliseconds(tz,ms) ((tz) + ((ms) * (int64) 1000))
#define CURSOR_OPT_PARALLEL_OK 0x0800
#define F_PG_STAT_RESET_SLRU 2307
#define LIBPQ_HAS_TRACE_FLAGS 1
#define ItemPointerSetMovedPartitions(pointer) ItemPointerSet((pointer), MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define AssertVariableIsOfTypeMacro(varname,typename) (StaticAssertExpr(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename)))
#define F_INITCAP 872
#define F_CURRENT_SETTING_TEXT_BOOL 3294
#define F_ARRAY_FILL_ANYELEMENT__INT4 1193
#define HOST_NOT_FOUND 1
#define _FALLOC_H_ 
#define SEGV_ACCERR SEGV_ACCERR
#define F_BPCHAR_LARGER 1063
#define F_TIMESTAMP_LE_DATE 2365
#define DatumGetIntervalP(X) ((Interval *) DatumGetPointer(X))
#define REFERENCE_TABLE_UTILS_H_ 
#define RTContainsElemStrategyNumber 16
#define PRIoLEAST32 "o"
#define F_MACADDR8_RECV 3446
#define HAVE_LIBSSL 1
#define pg_attribute_unused() __attribute__((unused))
#define REPLICATION_MODEL_2PC 't'
#define _POSIX_ADVISORY_INFO 200809L
#define STA_PPSSIGNAL 0x0100
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define F_CIDR_OUT 1427
#define F_HAS_SCHEMA_PRIVILEGE_OID_OID_TEXT 2271
#define F_BIT_XOR_INT2 6164
#define F_LOCK 1
#define VOIDOID 2278
#define PG_DIAG_DATATYPE_NAME 'd'
#define SNAPMGR_H 
#define F_OIDOUT 1799
#define F_CURRENT_USER 745
#define DSM_IMPL_H 
#define F_ARRAY_TO_JSON_ANYARRAY_BOOL 3154
#define HAVE_STRINGS_H 1
#define F_PG_STAT_GET_BLOCKS_HIT 1935
#define F_EXTRACT_TEXT_TIMESTAMPTZ 6203
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define MultiXactGenLock (&MainLWLockArray[13].lock)
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define F_HAS_DATABASE_PRIVILEGE_TEXT_TEXT 2254
#define GUC_QUALIFIER_SEPARATOR '.'
#define _VA_LIST 
#define _BITS_STDIO_LIM_H 1
#define F_BIT_XOR_INT8 6166
#define F_TIMESTAMPTZ_EQ 1152
#define F_PG_CLIENT_ENCODING 810
#define IN_CLASSA_NSHIFT 24
#define TIMESTAMPTZARRAYOID 1185
#define PG_USED_FOR_ASSERTS_ONLY pg_attribute_unused()
#define AttrOffsetGetAttrNumber(attributeOffset) ((AttrNumber) (1 + (attributeOffset)))
#define JSONBOID 3802
#define __O_PATH 010000000
#define F_RADIUS 1470
#define F_ON_SB 372
#define isxdigit(c) __isctype((c), _ISxdigit)
#define F_UTF8_TO_GB18030 4369
#define F_BRINHANDLER 335
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define VARCHARARRAYOID 1015
#define BeginCopyFrom_compat(a,b,c,d,e,f,g,h) BeginCopyFrom(a, b, c, d, e, f, g, h)
#define F_XIDNEQINT4 3309
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define F_NUM_NULLS 438
#define F_PG_SHOW_REPLICATION_ORIGIN_STATUS 6014
#define __ssize_t_defined 
#define F_MACADDR8_CMP 4119
#define IPV6_MULTICAST_IF 17
#define CURSOR_OPT_NO_SCROLL 0x0004
#define F_DIST_PPATH 371
#define INT8_WIDTH 8
#define F_TIMESTAMP_GE 2056
#define ACL_INSERT (1<<0)
#define PG_RELATION_SIZE_FUNCTION "pg_relation_size(%s)"
#define __INT_FAST8_WIDTH__ 8
#define TZNAME_GLOBAL tzname
#define F_WIN866_TO_KOI8R 4313
#define _POSIX_SYMLOOP_MAX 8
#define F_VARIANCE_INT2 2150
#define SET_VARSIZE_4B(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2))
#define HAVE_DECL_RTLD_GLOBAL 1
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define F_SETLKW64 7
#define BUFFERALIGN(LEN) TYPEALIGN(ALIGNOF_BUFFER, (LEN))
#define Anum_pg_index_indexprs 19
#define ERRCODE_EXTERNAL_ROUTINE_INVOCATION_EXCEPTION MAKE_SQLSTATE('3','9','0','0','0')
#define HAVE_HMAC_CTX_FREE 1
#define SIGTRAP 5
#define __nonnull(params) __attribute_nonnull__ (params)
#define F_GIN_EXTRACT_TSQUERY_TSQUERY_INTERNAL_INT2_INTERNAL_INTERNAL_INTERNAL_INTERNAL 3791
#define _BITS_STRUCT_STAT_H 1
#define ERRCODE_INVALID_XML_CONTENT MAKE_SQLSTATE('2','2','0','0','N')
#define HAVE_STRUCT_OPTION 1
#define F_HASH_ARRAY 626
#define F_GETSIG __F_GETSIG
#define O_DSYNC __O_DSYNC
#define BufferIsLocal(buffer) ((buffer) < 0)
#define F_BTBPCHAR_PATTERN_CMP 2180
#define F_DATE_TRUNC_TEXT_TIMESTAMP 2020
#define LOCK_READ 64
#define __aarch64__ 1
#define ERRCODE_CANNOT_CONNECT_NOW MAKE_SQLSTATE('5','7','P','0','3')
#define __UINT_FAST64_TYPE__ long unsigned int
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define F_INT4OR 1899
#define F_NUMERIC_LOG 1737
#define F_TEXTLTNAME 248
#define __ARM_FP16_ARGS 1
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define CREATE_SCHEMA_COMMAND "CREATE SCHEMA IF NOT EXISTS %s AUTHORIZATION %s"
#define JULIAN_MAXMONTH (6)
#define F_RANGE_GT 3874
#define SO_PROTOCOL 38
#define ERRCODE_INVALID_GRANTOR MAKE_SQLSTATE('0','L','0','0','0')
#define F_TIME_TIME_INT4 1968
#define COMMAND_IS_STRICTLY_READ_ONLY (COMMAND_OK_IN_READ_ONLY_TXN | COMMAND_OK_IN_RECOVERY | COMMAND_OK_IN_PARALLEL_MODE)
#define F_PREFIXSEL 3437
#define LSN_FORMAT_ARGS(lsn) (AssertVariableIsOfTypeMacro((lsn), XLogRecPtr), (uint32) ((lsn) >> 32)), ((uint32) (lsn))
#define SET_VARSIZE_COMPRESSED(PTR,len) SET_VARSIZE_4B_C(PTR, len)
#define __FLT64X_DECIMAL_DIG__ 36
#define F_LSEG_RECV 2480
#define IP_BIND_ADDRESS_NO_PORT 24
#define F_NETWORK_LT 921
#define ERRCODE_WARNING_PRIVILEGE_NOT_GRANTED MAKE_SQLSTATE('0','1','0','0','7')
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX (2147483647)
#define F_TIMESTAMPTZ_TIMESTAMPTZ_INT4 1967
#define STA_INS 0x0010
#define PG_INT64_TYPE long int
#define F_LIKE_BYTEA_BYTEA 2007
#define F_REGDICTIONARYIN 3771
#define LOGIN_NAME_MAX 256
#define F_TIMEZONE_INTERVAL_TIMESTAMP 2070
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define BOOLARRAYOID 1000
#define F_DIV 1973
#define tuplestore_donestoring(state) ((void) 0)
#define INTERVALOID 1186
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define InitNonVacuumableSnapshot(snapshotdata,vistestp) ((snapshotdata).snapshot_type = SNAPSHOT_NON_VACUUMABLE, (snapshotdata).vistest = (vistestp))
#define PageIsAllVisible(page) (((PageHeader) (page))->pd_flags & PD_ALL_VISIBLE)
#define PG_COPYRES_TUPLES 0x02
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define COLUMNAR_H 
#define F_PG_STAT_GET_CHECKPOINT_SYNC_TIME 3161
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define XLogRecGetTotalLen(decoder) ((decoder)->decoded_record->xl_tot_len)
#define ERRCODE_SYNTAX_ERROR MAKE_SQLSTATE('4','2','6','0','1')
#define TTS_EMPTY(slot) (((slot)->tts_flags & TTS_FLAG_EMPTY) != 0)
#define MSG_RST MSG_RST
#define dsa_pointer_atomic_fetch_add pg_atomic_fetch_add_u64
#define __stub_chflags 
#define F_CONTSEL 1302
#define F_NUMMULTIRANGE_ 4283
#define SyncRepLock (&MainLWLockArray[32].lock)
#define F_ARRAY_OUT 751
#define vfprintf pg_vfprintf
#define DatumGetVarCharP(X) ((VarChar *) PG_DETOAST_DATUM(X))
#define PG_DIAG_MESSAGE_DETAIL 'D'
#define F_TIMESTAMP_HASH 2039
#define MAX_CANON 255
#define F_UUID_RECV 2961
#define HeapTupleHeaderGetXvac(tup) ( ((tup)->t_infomask & HEAP_MOVED) ? (tup)->t_choice.t_heap.t_field3.t_xvac : InvalidTransactionId )
#define REGROLEARRAYOID 4097
#define PG_RETURN_TIMESTAMP(x) return TimestampGetDatum(x)
#define F_PG_SLEEP_UNTIL 3936
#define ItemIdIsRedirected(itemId) ((itemId)->lp_flags == LP_REDIRECT)
#define FKCONSTR_ACTION_RESTRICT 'r'
#define LWLOCK_PADDED_SIZE PG_CACHE_LINE_SIZE
#define EarlyPruningEnabled(rel) (old_snapshot_threshold >= 0 && RelationAllowsEarlyPruning(rel))
#define PROCLOCK_LOCKMETHOD(proclock) LOCK_LOCKMETHOD(*((proclock).tag.myLock))
#define PG_GETARG_TEXT_P(n) DatumGetTextP(PG_GETARG_DATUM(n))
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define MOD_OFFSET ADJ_OFFSET
#define F_SATISFIES_HASH_PARTITION 5028
#define F_GET_SEALS 1034
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_OID_TEXT_TEXT 3002
#define DT_NOEND PG_INT64_MAX
#define LockHashPartitionLock(hashcode) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + LockHashPartition(hashcode)].lock)
#define __FLT64X_MANT_DIG__ 113
#define F_DPOW 232
#define RELTRIGGER_H 
#define SCNi16 "hi"
#define NUM_TUPLESORTMETHODS 4
#define PRIdLEAST16 "d"
#define COLUMNAR_COMPRESSION_H 
#define TYPTYPE_BASE 'b'
#define F_PG_WAL_REPLAY_PAUSE 3071
#define F_BPCHARTYPMODOUT 2914
#define COLUMNAR_TUPLE_COST_MULTIPLIER 10
#define F_BOX_RECV 2484
#define INT_LEAST32_MIN (-2147483647-1)
#define LogicalRepWorkerLock (&MainLWLockArray[43].lock)
#define F_TO_TSVECTOR_REGCONFIG_JSON 4212
#define __LDBL_IS_IEC_60559__ 2
#define F_JSONB_SET 3305
#define BlockIdGetBlockNumber(blockId) ( AssertMacro(BlockIdIsValid(blockId)), ((((BlockNumber) (blockId)->bi_hi) << 16) | ((BlockNumber) (blockId)->bi_lo)) )
#define XLOG_INCLUDE_XID 0x04
#define F_BPCHARNE 1053
#define F_PATH_ADD 1435
#define F_RANGE_OVERLEFT 3865
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define F_INT2_AVG_ACCUM 1962
#define ALLOCSET_DEFAULT_MINSIZE 0
#define F_SPG_QUAD_CHOOSE 4019
#define ScanDirectionIsBackward(direction) ((bool) ((direction) == BackwardScanDirection))
#define SCNi32 "i"
#define F_TIDGE 2792
#define __BITS_SOCKET_H 
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define F_GENERATE_SERIES_INT4_INT4_INT4 1066
#define BGWORKER_BACKEND_DATABASE_CONNECTION 0x0002
#define DSA_POINTER_FORMAT "%016" INT64_MODIFIER "x"
#define ERROR 21
#define st_mtime st_mtim.tv_sec
#define PGSIXBIT(ch) (((ch) - '0') & 0x3F)
#define BPCHAROID 1042
#define REGBUF_NO_IMAGE 0x02
#define PANIC 23
#define F_CIRCLE_OVERBELOW 2587
#define F_OFD_GETLK 36
#define PG_MODULE_MAGIC_DATA { sizeof(Pg_magic_struct), PG_VERSION_NUM / 100, FUNC_MAX_ARGS, INDEX_MAX_KEYS, NAMEDATALEN, FLOAT8PASSBYVAL }
#define F_MACADDR8_NE 4118
#define F_NAMEREGEXEQ 79
#define INSTR_TIME_SUBTRACT(x,y) do { (x).tv_sec -= (y).tv_sec; (x).tv_nsec -= (y).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } } while (0)
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define TTS_SLOW(slot) (((slot)->tts_flags & TTS_FLAG_SLOW) != 0)
#define pull_varnos_compat(a,b) pull_varnos(a, b)
#define F_BOOLAND_STATEFUNC 2515
#define __INO_T_TYPE __ULONGWORD_TYPE
#define islower(c) __isctype((c), _ISlower)
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define F_SET_BYTE 722
#define F_WIDTH_BUCKET_ANYCOMPATIBLE_ANYCOMPATIBLEARRAY 3218
#define F_GENERATE_SERIES_NUMERIC_NUMERIC 3260
#define F_NOTLIKE_NAME_TEXT 1572
#define __F_SETOWN_EX 15
#define SCNi64 __PRI64_PREFIX "i"
#define F_ULOCK 0
#define RTOverlapStrategyNumber 3
#define F_TSQ_MCONTAINED 3692
#define F_PATH_RECV 2482
#define __struct_tm_defined 1
#define F_MACADDR_NE 835
#define __LDBL_DECIMAL_DIG__ 36
#define F_ENUM_OUT 3507
#define TypeIsToastable(typid) (get_typstorage(typid) != TYPSTORAGE_PLAIN)
#define F_TSVECTORSEND 3638
#define _SC_FSYNC _SC_FSYNC
#define F_UTF8_TO_KOI8R 4354
#define F_TIDGT 2790
#define F_INT8UP 1910
#define FPE_INTOVF FPE_INTOVF
#define F_ATAN2D 2734
#define F_SIGN_NUMERIC 1706
#define F_CASH_MUL_FLT4 846
#define F_CASH_MUL_FLT8 896
#define F_BOOLGT 57
#define gettext(msgid) dgettext (NULL, msgid)
#define F_PG_CURRENT_LOGFILE_ 3800
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define MCAST_LEAVE_GROUP 45
#define F_TIMETZ_LARGER 1379
#define Anum_pg_class_relnatts 18
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define F_PG_INDEXAM_HAS_PROPERTY 636
#define STA_PPSJITTER 0x0200
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define PF_TIPC 30
#define F_TSQ_MCONTAINS 3691
#define BITOID 1560
#define F_TIDIN 48
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define PG_GETARG_DATUM(n) (fcinfo->args[n].value)
#define HAVE_DECL_RTLD_NOW 1
#define RELKIND_FOREIGN_TABLE 'f'
#define F_GIST_BOX_UNION 2583
#define Anum_pg_class_relhassubclass 22
#define F_BOOLIN 1242
#define ACL_TRIGGER (1<<6)
#define REGCONFIGARRAYOID 3735
#define RELATION_IS_OTHER_TEMP(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP && !(relation)->rd_islocaltemp)
#define F_PG_LSN_LARGER 4187
#define ERRCODE_INVALID_TABLESAMPLE_REPEAT MAKE_SQLSTATE('2','2','0','2','G')
#define PG_RETURN_INT16(x) return Int16GetDatum(x)
#define IndexRelidIndexId 2679
#define F_INT4INC 766
#define pg_backend_random pg_strong_random
#define SerializablePredicateListLock (&MainLWLockArray[30].lock)
#define F_TEXTICREGEXEQ 1238
#define F_UTF8_TO_KOI8U 4356
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define ereport(elevel,...) ereport_domain(elevel, TEXTDOMAIN, __VA_ARGS__)
#define ERRCODE_INVALID_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','2','3')
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define F_MACADDR8_NOT 4120
#define F_PG_STAT_GET_BACKEND_CLIENT_PORT 1393
#define F_INET_SPG_PICKSPLIT 3797
#define TUPCONVERT_H 
#define RWH_WRITE_LIFE_LONG 4
#define F_CURSOR_TO_XMLSCHEMA 2928
#define INTERVAL_PRECISION_MASK (0xFFFF)
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __S_IFMT 0170000
#define PG_RETURN_INT32(x) return Int32GetDatum(x)
#define ACLITEM_SET_GOPTIONS(item,goptions) ((item).ai_privs = ((item).ai_privs & ~(((AclMode) 0xFFFF) << 16)) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define __STDC_IEC_559_COMPLEX__ 1
#define AI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("AI_IDN_USE_STD3_ASCII_RULES is deprecated") 0x0200
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME_OID_TEXT 3025
#define OPCLASS_ITEM_FUNCTION 2
#define F_BOOLLT 56
#define F_TIMESTAMPTZ_DATE_TIMETZ 1359
#define PageXLogRecPtrSet(ptr,lsn) ((ptr).xlogid = (uint32) ((lsn) >> 32), (ptr).xrecoff = (uint32) (lsn))
#define DN_ATTRIB 0x00000020
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define F_BINARY_UPGRADE_SET_NEXT_MULTIRANGE_ARRAY_PG_TYPE_OID 4391
#define BTLessEqualStrategyNumber 2
#define F_BOX_MUL 1424
#define F_RECORD_SEND 2403
#define __O_DIRECT 0200000
#define F_PG_STAT_GET_BACKEND_ACTIVITY 1940
#define GUC_EXPLAIN 0x100000
#define __FLT128_DIG__ 33
#define pairingheap_reset(h) ((h)->ph_root = NULL)
#define LOCALHOST_NODE_ID -1
#define F_ABS_FLOAT8 1395
#define SCNiLEAST8 "hhi"
#define F_PG_STAT_GET_DB_SESSIONS 6188
#define DAYS_PER_MONTH 30
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define F_CASH_GE 893
#define F_ISEMPTY_ANYRANGE 3850
#define F_BOOLNE 84
#define F_GENERATE_SUBSCRIPTS_ANYARRAY_INT4 1192
#define F_CASH_GT 892
#define XLOG_H 
#define SyncScanLock (&MainLWLockArray[24].lock)
#define ERRCODE_INVALID_ARGUMENT_FOR_NTH_VALUE MAKE_SQLSTATE('2','2','0','1','6')
#define TypeNameNspIndexId 2704
#define PG_RETURN_INT64(x) return Int64GetDatum(x)
#define F_NAMENETEXT 245
#define REFCURSORARRAYOID 2201
#define PG_PUBLICATION_D_H 
#define ACL_ALL_RIGHTS_LANGUAGE (ACL_USAGE)
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define F_ISHORIZONTAL_LSEG 1411
#define F_INT8DEC 3546
#define ENOKEY 126
#define TABLESPACE_MAP "tablespace_map"
#define VirtualTransactionIdEquals(vxid1,vxid2) ((vxid1).backendId == (vxid2).backendId && (vxid1).localTransactionId == (vxid2).localTransactionId)
#define F_INT8_ACCUM_INV 3569
#define pg_compiler_barrier_impl() __asm__ __volatile__("" ::: "memory")
#define F_BTOIDSORTSUPPORT 3134
#define HAVE_SYS_STAT_H 1
#define F_BYTEAGE 1952
#define F_CASH_IN 886
#define DN_DELETE 0x00000008
#define S_IWGRP (S_IWUSR >> 3)
#define F_STDDEV_FLOAT4 2157
#define MINIMAL_TUPLE_OFFSET ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) / MAXIMUM_ALIGNOF * MAXIMUM_ALIGNOF)
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define F_INETAND 2628
#define PG_INT16_MAX (0x7FFF)
#define F_TO_TIMESTAMP_FLOAT8 1158
#define HAVE_GCC__SYNC_CHAR_TAS 1
#define F_OK 0
#define _PC_PATH_MAX _PC_PATH_MAX
#define SHAREDINVALRELCACHE_ID (-2)
#define F_DLOG10 1339
#define _SIZE_T_ 
#define F_SET_CONFIG 2078
#define F_ANYELEMENT_OUT 2313
#define F_PG_SNAPSHOT_XIP 5064
#define ReleaseSysCacheList(x) ReleaseCatCacheList(x)
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define O_CREAT 0100
#define F_RANK_ 3101
#define ESHUTDOWN 108
#define F_HASH_RANGE_EXTENDED 3417
#define SO_SNDTIMEO_NEW 67
#define Anum_pg_class_relhastriggers 21
#define Anum_pg_constraint_conppeqop 22
#define AssertPointerAlignment(ptr,bndr) ((void)true)
#define F_CASH_LE 891
#define F_LOWER_ANYMULTIRANGE 4235
#define F_INT8PL_INET 2631
#define F_INT8EQ 467
#define F_MIN_SCALE 5042
#define __ULONGWORD_TYPE unsigned long int
#define F_BOX_OVERRIGHT 190
#define F_INT8DIV 466
#define ERRCODE_ARRAY_SUBSCRIPT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define F_SETOWN __F_SETOWN
#define PF_VSOCK 40
#define F_CASH_MI 895
#define XATTR_LIST_MAX 65536
#define F_LSEG_HORIZONTAL 998
#define F_TS_HEADLINE_JSON_TSQUERY 4208
#define F_BIT_XOR_BIT 6167
#define F_STDDEV_FLOAT8 2158
#define SHARD_SIZES_COLUMN_COUNT (3)
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define FRAMEOPTION_END_CURRENT_ROW 0x00400
#define F_HASHINET 422
#define F_CASH_NE 889
#define __INT8_TYPE__ signed char
#define F_INT8GE 472
#define MAX_LOCKMODES 10
#define F_INT8GT 470
#define XLogRecHasAnyBlockRefs(decoder) ((decoder)->max_block_id >= 0)
#define F_INT8_ACCUM 1836
#define F_TIMESTAMPTZ_GT 1157
#define F_CENTER_BOX 1542
#define __ELF__ 1
#define ENOMEDIUM 123
#define SI_TKILL SI_TKILL
#define PACKAGE_VERSION "14.5"
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define F_POINT_EQ 135
#define F_PG_STAT_GET_XACT_FUNCTION_TOTAL_TIME 3047
#define PG_TEMP_FILES_DIR "pgsql_tmp"
#define BTMaxStrategyNumber 5
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define BKPIMAGE_HAS_HOLE 0x01
#define F_BOOLGE 1692
#define JSONARRAYOID 199
#define RowExclusiveLock 3
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __FLT_RADIX__ 2
#define F_BOOLRECV 2436
#define PG_INT16_MIN (-0x7FFF-1)
#define HEAP_XMIN_FROZEN (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)
#define __INT_LEAST16_TYPE__ short int
#define ERRCODE_SUBSTRING_ERROR MAKE_SQLSTATE('2','2','0','1','1')
#define SCNoFAST8 "hho"
#define AI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("AI_IDN_ALLOW_UNASSIGNED is deprecated") 0x0100
#define ESNOSPC ( 406 )
#define F_NETWORK_NE 925
#define F_INT82MUL 839
#define F_MACADDR8_OR 4122
#define SCNdPTR __PRIPTR_PREFIX "d"
#define HAVE_USELOCALE 1
#define ACL_MODECHG_ADD 1
#define SLAB_LARGE_BLOCK_SIZE (8 * 1024 * 1024)
#define pg_nextpower2_size_t(num) pg_nextpower2_64(num)
#define __ARM_PCS_AAPCS64 1
#define LOG_DESTINATION_SYSLOG 2
#define ERRCODE_FDW_INVALID_USE_OF_NULL_POINTER MAKE_SQLSTATE('H','V','0','0','9')
#define F_UUID_EQ 2956
#define SCNxLEAST16 "hx"
#define USE_UNNAMED_POSIX_SEMAPHORES 1
#define _POSIX_ARG_MAX 4096
#define F_DIST_BL 703
#define F_MULTIRANGE_TYPANALYZE 4242
#define BUS_ADRALN BUS_ADRALN
#define F_LAST_VALUE 3113
#define F_CIRCLE_CONTAIN_PT 1477
#define S_LOCK_FREE(lock) (*(lock) == 0)
#define F_INT8MI 464
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define F_INT84GE 479
#define SCNx16 "hx"
#define CLOCK_MONOTONIC_RAW 4
#define F_POLYGON_PATH 1449
#define F_ANYNONARRAY_OUT 2778
#define F_BINARY_UPGRADE_SET_NEXT_ARRAY_PG_TYPE_OID 3584
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define Anum_pg_attribute_attislocal 20
#define OLD_SNAPSHOT_PADDING_ENTRIES 10
#define SCNxLEAST32 "x"
#define F_DIST_BS 381
#define SAFE_STR_MIN_UPPERCASE ( 2 )
#define SO_PREFER_BUSY_POLL 69
#define F_INET_GIST_UNION 3554
#define F_MONEY_INT8 3812
#define F_REGCLASSIN 2218
#define is_absolute_path(filename) ( IS_DIR_SEP((filename)[0]) )
#define PG_PROCARRAYOID 272
#define _BITS_SIGSTACK_H 1
#define _POSIX_TIMEOUTS 200809L
#define F_PG_NDISTINCT_SEND 3358
#define PG_DIAG_MESSAGE_HINT 'H'
#define XactCompletionApplyFeedback(xinfo) ((xinfo & XACT_COMPLETION_APPLY_FEEDBACK) != 0)
#define TABLESPACE_VERSION_DIRECTORY "PG_" PG_MAJORVERSION "_" CppAsString2(CATALOG_VERSION_NO)
#define REGOPERATORARRAYOID 2209
#define S_IRUSR __S_IREAD
#define PG_INT64_MAX INT64CONST(0x7FFFFFFFFFFFFFFF)
#define __S_IWRITE 0200
#define AF_PACKET PF_PACKET
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define HeapTupleHeaderIsHotUpdated(tup) ( ((tup)->t_infomask2 & HEAP_HOT_UPDATED) != 0 && ((tup)->t_infomask & HEAP_XMAX_INVALID) == 0 && !HeapTupleHeaderXminInvalid(tup) )
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define VARSIZE(PTR) VARSIZE_4B(PTR)
#define F_UUID_IN 2952
#define __SIZEOF_PTHREAD_COND_T 48
#define F_INT8PL 463
#define _WCHAR_T_H 
#define F_PG_HAS_ROLE_OID_TEXT 2710
#define F_OVERLAPS_TIMESTAMP_INTERVAL_TIMESTAMP_TIMESTAMP 2044
#define F_LOREAD 954
#define ERRCODE_FEATURE_NOT_SUPPORTED MAKE_SQLSTATE('0','A','0','0','0')
#define F_TIMESTAMPTZ_SEND 2477
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK 3
#define SCNxLEAST64 __PRI64_PREFIX "x"
#define BYTEAOID 17
#define F_INT8UM 462
#define LSNOID PG_LSNOID
#define PG_GETARG_VARCHAR_P_COPY(n) DatumGetVarCharPCopy(PG_GETARG_DATUM(n))
#define F_LATIN2_TO_MIC 4338
#define F_PG_STAT_GET_LIVE_TUPLES 2878
#define F_OVERLAPS_TIMESTAMPTZ_TIMESTAMPTZ_TIMESTAMPTZ_INTERVAL 1306
#define F_PG_CURRENT_WAL_FLUSH_LSN 3330
#define AddinShmemInitLock (&MainLWLockArray[21].lock)
#define F_GTSVECTOR_PICKSPLIT 3650
#define SCNx64 __PRI64_PREFIX "x"
#define CLOCK_TAI 11
#define XLR_NORMAL_MAX_BLOCK_ID 4
#define IP_RETOPTS 7
#define F_INT2_MUL_CASH 863
#define MaxTransactionId ((TransactionId) 0xFFFFFFFF)
#define __restrict_arr __restrict
#define F_MIN_TIMETZ 2140
#define F_TSMULTIRANGE__TSRANGE 4288
#define EpochFromFullTransactionId(x) ((uint32) ((x).value >> 32))
#define F_UUID_LT 2954
#define Anum_pg_index_indimmediate 8
#define _SIGNAL_H 
#define _POSIX_SHELL 1
#define F_PG_LAST_WAL_RECEIVE_LSN 3820
#define F_HASHMACADDR8 328
#define HASH_ALLOC 0x0200
#define SO_PEEK_OFF 42
#define __LC_PAPER 7
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define W_OK 2
#define ENODEV 19
#define RelationHasCascadedCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option == VIEW_OPTION_CHECK_OPTION_CASCADED)
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define EXPLAIN_H 
#define __FLT16_IS_IEC_60559__ 2
#define __FLT16_MAX_EXP__ 16
#define RELCACHE_INIT_FILENAME "pg_internal.init"
#define F_MULTIRANGE_OVERLEFT_MULTIRANGE 4266
#define F_HASHOIDEXTENDED 445
#define F_UUID_NE 2959
#define F_HASHINT2 449
#define EPROTO 71
#define F_HASHINT4 450
#define F_HASHINT8 949
#define F_DATE_LE_TIMESTAMPTZ 2352
#define INT16_WIDTH 16
#define DatumGetCString(X) ((char *) DatumGetPointer(X))
#define F_BOX_CONTAIN 187
#define LP_NORMAL 1
#define INT_MAX __INT_MAX__
#define PG_GETARG_ACLITEM_P(n) DatumGetAclItemP(PG_GETARG_DATUM(n))
#define likely(x) __builtin_expect((x) != 0, 1)
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define for_both_cell(cell1,list1,initcell1,cell2,list2,initcell2) for (ForBothCellState cell1 ##__state = for_both_cell_setup(list1, initcell1, list2, initcell2); multi_for_advance_cell(cell1, cell1 ##__state, l1, i1), multi_for_advance_cell(cell2, cell1 ##__state, l2, i2), (cell1 != NULL && cell2 != NULL); cell1 ##__state.i1++, cell1 ##__state.i2++)
#define _POSIX_MONOTONIC_CLOCK 0
#define F_NOTIFY 1026
#define PF_PACKET 17
#define ATOMICS_H 
#define F_HAS_TABLESPACE_PRIVILEGE_TEXT_TEXT 2394
#define SHM_MQ_H 
#define F_FLOAT8_VAR_POP 2512
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define ACL_UPDATE_CHR 'w'
#define F_LN_FLOAT8 1341
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define F_INT4XOR 1900
#define __INT_FAST8_TYPE__ signed char
#define F_GTSQUERY_UNION 3698
#define F_CONVERT 1813
#define __U64_TYPE unsigned long int
#define IP_RECVOPTS 6
#define S_LOCK_H 
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define GUC_UNIT (GUC_UNIT_MEMORY | GUC_UNIT_TIME)
#define HAVE_INDEXOPTINFO_TYPEDEF 1
#define F_GTSQUERY_PENALTY 3700
#define _PATH_NETWORKS "/etc/networks"
#define ACLITEM_GET_GOPTIONS(item) (((item).ai_privs >> 16) & 0xFFFF)
#define WORKER_DEFAULT_RACK "default"
#define PG_UINT32_MAX (0xFFFFFFFFU)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define HEAP_ONLY_TUPLE 0x8000
#define IP_MULTICAST_TTL 33
#define _PC_SYNC_IO _PC_SYNC_IO
#define F_HASHHANDLER 331
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define _XOPEN_SHM 1
#define PG_GETARG_INT16(n) DatumGetInt16(PG_GETARG_DATUM(n))
#define DECLARE_INDEX(name,oid,decl) extern int no_such_variable
#define F_DISPELL_LEXIZE 3732
#define F_JSONB_SUBSCRIPT_HANDLER 6098
#define HAVE_SPINLOCKS 1
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define XLogRecGetXid(decoder) ((decoder)->decoded_record->xl_xid)
#define F_PG_RELATION_SIZE_REGCLASS 2325
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define F_PERCENTILE_DISC_MULTI_FINAL 3979
#define F_HAS_LANGUAGE_PRIVILEGE_OID_TEXT 2267
#define VirtualTransactionIdIsValid(vxid) (LocalTransactionIdIsValid((vxid).localTransactionId))
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define CITUS_APPLICATION_NAME_PREFIX "citus_internal gpid="
#define RELPERSISTENCE_PERMANENT 'p'
#define FirstOffsetNumber ((OffsetNumber) 1)
#define PG_GETARG_INT32(n) DatumGetInt32(PG_GETARG_DATUM(n))
#define F_REGR_AVGX 2822
#define F_DATERANGE_CANONICAL 3915
#define F_PG_STAT_GET_DB_TUPLES_INSERTED 2760
#define F_ARRAYCONTAINS 2748
#define F_NEQJOINSEL 106
#define F_JSONB_DELETE_JSONB__TEXT 3343
#define FirstLowInvalidHeapAttributeNumber (-7)
#define SCNuPTR __PRIPTR_PREFIX "u"
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define TIMETZARRAYOID 1270
#define pg_analyze_and_rewrite_fixedparams(a,b,c,d,e) pg_analyze_and_rewrite(a, b, c, d, e)
#define SO_ATTACH_REUSEPORT_CBPF 51
#define F_PG_LSN_SEND 3239
#define NotifyQueueLock (&MainLWLockArray[27].lock)
#define F_ARRAY_TYPANALYZE 3816
#define F_TIMESTAMP_TIMESTAMPTZ 2027
#define F_TEXTICREGEXNE 1239
#define INT_MIN (-INT_MAX - 1)
#define F_ANYCOMPATIBLEARRAY_OUT 5089
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define FRAMEOPTION_START_UNBOUNDED_PRECEDING 0x00020
#define F_MD5_TEXT 2311
#define PG_DDL_COMMANDOID 32
#define RELAY_UTILITY_H 
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define F_LO_EXPORT 765
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define PG_GETARG_INT64(n) DatumGetInt64(PG_GETARG_DATUM(n))
#define EL3RST 47
#define F_INT8SHL 1908
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define F_INT8SHR 1909
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define ERRCODE_UNSAFE_NEW_ENUM_VALUE_USAGE MAKE_SQLSTATE('5','5','P','0','4')
#define F_GIN_EXTRACT_JSONB_QUERY 3483
#define Anum_pg_index_indnatts 3
#define F_MULTIRANGESEL 4243
#define HEAP_XMAX_IS_SHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_SHR_LOCK)
#define SOL_KCM 281
#define HAVE_PREAD 1
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define FRAMEOPTION_DEFAULTS (FRAMEOPTION_RANGE | FRAMEOPTION_START_UNBOUNDED_PRECEDING | FRAMEOPTION_END_CURRENT_ROW)
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define F_PG_MCV_LIST_OUT 5019
#define PG_GETARG_BPCHAR_P_SLICE(n,a,b) DatumGetBpCharPSlice(PG_GETARG_DATUM(n),a,b)
#define WrapLimitsVacuumLock (&MainLWLockArray[46].lock)
#define F_POLY_RECV 2486
#define ERRCODE_OBJECT_IN_USE MAKE_SQLSTATE('5','5','0','0','6')
#define FullTransactionIdIsNormal(x) FullTransactionIdFollowsOrEquals(x, FirstNormalFullTransactionId)
#define F_ANYCOMPATIBLERANGE_IN 5094
#define ENOTDIR 20
#define HAVE_DECL_LLVMGETHOSTCPUNAME 1
#define F_STATEMENT_TIMESTAMP 2648
#define F_PG_TERMINATE_BACKEND 2096
#define HEAP_HASVARWIDTH 0x0002
#define _LIBC_LIMITS_H_ 1
#define TIMER_ABSTIME 1
#define __WCHAR_MB_LEN_MAX 16
#define __INT_FAST8_MAX__ 0x7f
#define Anum_pg_attribute_attlen 5
#define __PMT(args) args
#define Anum_pg_constraint_condeferrable 5
#define llast_int(l) lfirst_int(list_last_cell(l))
#define HAVE_INET_ATON 1
#define _SYS_TYPES_H 1
#define InvalidDsaPointer ((dsa_pointer) 0)
#define F_HAS_DATABASE_PRIVILEGE_NAME_OID_TEXT 2251
#define Anum_pg_publication_pubtruncate 8
#define VALUE_H 
#define F_TIMESTAMP_DATE 2024
#define RELKIND_RELATION 'r'
#define GETSTRUCT(TUP) ((char *) ((TUP)->t_data) + (TUP)->t_data->t_hoff)
#define BKPIMAGE_APPLY 0x04
#define F_LINE_OUT 1491
#define ENXIO 6
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define F_NAMEICREGEXNE 1241
#define F_PG_CURRENT_XACT_ID 5059
#define IPV6_RTHDR_LOOSE 0
#define F_POINT_CIRCLE 1416
#define F_INT2SEND 2405
#define F_CURRENT_SETTING_TEXT 2077
#define __FLT64_HAS_QUIET_NAN__ 1
#define F_TS_DELETE_TSVECTOR_TEXT 3321
#define SIGRTMIN (__libc_current_sigrtmin ())
#define ERRCODE_DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST MAKE_SQLSTATE('2','B','0','0','0')
#define _SC_STREAMS _SC_STREAMS
#define SubtransSLRULock (&MainLWLockArray[12].lock)
#define TermTupleHashIterator(iter) ((void) 0)
#define PG_HAVE_ATOMIC_UNLOCKED_TEST_FLAG 
#define DatumGetTextP(X) ((text *) PG_DETOAST_DATUM(X))
#define SelfItemPointerAttributeNumber (-1)
#define F_POLY_SEND 2487
#define L_XTND SEEK_END
#define __WALL 0x40000000
#define F_VARCHARRECV 2432
#define __PTRDIFF_T 
#define slist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, slist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define F_FAMILY 711
#define FAPPEND O_APPEND
#define TextDatumGetCString(d) text_to_cstring((text *) DatumGetPointer(d))
#define POLYGONOID 604
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define PF_CAN 29
#define LOG 15
#define F_HAS_TYPE_PRIVILEGE_OID_OID_TEXT 3141
#define FIELDNO_EXPRSTATE_RESVALUE 3
#define F_BPCHAREQ 1048
#define INT8MULTIRANGEOID 4536
#define F_TIMESTAMPTZ_MI_INTERVAL 1190
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define FIELDNO_AGGSTATE_CURPERTRANS 16
#define GUC_NO_RESET_ALL 0x0008
#define F_POINT_RECV 2428
#define __stub___compat_get_kernel_syms 
#define IPV6_RECVFRAGSIZE 77
#define F_SLOPE 992
#define __END_DECLS 
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define Anum_pg_constraint_conpfeqop 21
#define F_CEILING_NUMERIC 2167
#define __FLT64_HAS_INFINITY__ 1
#define F_BPCHARGE 1052
#define POLL_HUP POLL_HUP
#define F_BPCHARGT 1051
#define ERRCODE_INVALID_ARGUMENT_FOR_SQL_JSON_DATETIME_FUNCTION MAKE_SQLSTATE('2','2','0','3','1')
#define _STRING_H 1
#define HAVE_LIBM 1
#define HAVE_LIBZ 1
#define TABLEAM_H 
#define F_PG_NODE_TREE_OUT 196
#define ERRCODE_MOST_SPECIFIC_TYPE_MISMATCH MAKE_SQLSTATE('2','2','0','0','G')
#define F_INT8MUL 465
#define _XOPEN_REALTIME 1
#define F_HAS_DATABASE_PRIVILEGE_OID_OID_TEXT 2253
#define FILENAME_MAX 4096
#define Anum_pg_dist_partition_logicalrelid 1
#define F_TS_MATCH_VQ 3634
#define F_INTEGER_PL_DATE 2550
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define F_DATE_CMP_TIMESTAMP 2344
#define PublicationRelationId 6104
#define F_BPCHARIN 1044
#define VARHDRSZ ((int32) sizeof(int32))
#define PG_HAVE_ATOMIC_WRITE_U32 
#define F_BTRIM_BYTEA_BYTEA 2015
#define F_BIG5_TO_MIC 4335
#define F_PG_STAT_FILE_TEXT 2623
#define USE_LDAP 1
#define Anum_pg_publication_pubname 2
#define PRIoMAX __PRI64_PREFIX "o"
#define DatumGetVarCharPCopy(X) ((VarChar *) PG_DETOAST_DATUM_COPY(X))
#define COORDINATOR_GROUP_ID 0
#define _POSIX_MEMLOCK_RANGE 200809L
#define XACT_XINFO_HAS_TWOPHASE (1U << 4)
#define ERRCODE_FDW_UNABLE_TO_CREATE_REPLY MAKE_SQLSTATE('H','V','0','0','M')
#define SerializableFinishedListLock (&MainLWLockArray[29].lock)
#define F_POINT_LEFT 132
#define F_GIN_TRICONSISTENT_JSONB 3488
#define FKCONSTR_MATCH_SIMPLE 's'
#define PG_DIAG_SOURCE_FILE 'F'
#define F_MULTIRANGE_GT 4277
#define F_MATCHINGJOINSEL 5041
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define LocalTransactionIdIsValid(lxid) ((lxid) != InvalidLocalTransactionId)
#define TCOPPROT_H 
#define _POSIX_MQ_OPEN_MAX 8
#define F_JSON_OBJECT__TEXT 3202
#define FIELDNO_AGGSTATE_ALL_PERGROUPS 53
#define F_BPCHARLE 1050
#define ANYCOMPATIBLEARRAYOID 5078
#define MONEYARRAYOID 791
#define AmStartupProcess() (MyAuxProcType == StartupProcess)
#define F_TIMESTAMPTZTYPMODOUT 2908
#define __BYTE_ORDER __LITTLE_ENDIAN
#define COLUMNAR_AM_NAME "columnar"
#define F_PG_TYPEOF 1619
#define F_POLY_NPOINTS 1445
#define F_PG_CREATE_RESTORE_POINT 3098
#define INT64_WIDTH 64
#define F_MULTIRANGE_GIST_CONSISTENT 6154
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define fmgr_info_set_expr(expr,finfo) ((finfo)->fn_expr = (expr))
#define F_TS_MATCH_TT 3760
#define NUMRANGEARRAYOID 3907
#define F_TIMESTAMP_IN 1312
#define ERRCODE_SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','1')
#define INT_FAST32_MAX (9223372036854775807L)
#define STRIPE_ROW_COUNT_MINIMUM 1000
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define lfourth_node(type,l) castNode(type, lfourth(l))
#define HeapTupleSetHotUpdated(tuple) HeapTupleHeaderSetHotUpdated((tuple)->t_data)
#define RelationGetPartitionDesc_compat(a,b) RelationGetPartitionDesc(a, b)
#define PG_GETARG_UINT16(n) DatumGetUInt16(PG_GETARG_DATUM(n))
#define F_CASH_SEND 2493
#define _STATBUF_ST_RDEV 
#define __LDBL_REDIR_DECL(name) 
#define F_NEXTVAL 1574
#define Anum_pg_class_relpages 10
#define F_HASHINT8EXTENDED 442
#define F_SUBSTR_TEXT_INT4_INT4 877
#define UINT_FAST8_MAX (255)
#define F_VAR_SAMP_INT4 2642
#define __INT_MAX__ 0x7fffffff
#define F_TSM_HANDLER_IN 3311
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define F_HAS_COLUMN_PRIVILEGE_NAME_OID_TEXT_TEXT 3014
#define F_INET_GIST_SAME 3559
#define SOL_IUCV 277
#define LOCKDEFS_H_ 
#define F_INT24MUL 170
#define HEAP_INSERT_SPECULATIVE 0x0010
#define FIELDNO_FUNCTIONCALLINFODATA_ISNULL 4
#define F_JSONB_ARRAY_LENGTH 3207
#define TYPCATEGORY_TIMESPAN 'T'
#define _T_SIZE_ 
#define F_GIST_CIRCLE_DISTANCE 3280
#define F_PG_REPLICATION_ORIGIN_OID 6005
#define LLONG_MAX __LONG_LONG_MAX__
#define SerialSLRULock (&MainLWLockArray[31].lock)
#define PAIRINGHEAP_H 
#define GetPerTupleMemoryContext(estate) (GetPerTupleExprContext(estate)->ecxt_per_tuple_memory)
#define HAVE_EXPLICIT_BZERO 1
#define SHUT_WR SHUT_WR
#define XLogRecGetInfo(decoder) ((decoder)->decoded_record->xl_info)
#define __LC_NUMERIC 1
#define F_CHAREQ 61
#define __INT64_TYPE__ long int
#define F_NOTLIKE_TEXT_TEXT 1570
#define XLOG_XACT_PREPARE 0x10
#define ERRCODE_E_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','2')
#define HeapTupleHeaderIsSpeculative(tup) ( (ItemPointerGetOffsetNumberNoCheck(&(tup)->t_ctid) == SpecTokenOffsetNumber) )
#define UINT64_FORMAT "%" INT64_MODIFIER "u"
#define F_CIDEQ 69
#define ITIMER_REAL ITIMER_REAL
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define S_IRGRP (S_IRUSR >> 3)
#define F_MODE_FINAL 3985
#define _POSIX_SYMLINK_MAX 255
#define FLOAT4ARRAYOID 1021
#define F_REGCONFIGRECV 3738
#define F_HASHCHAR 454
#define F_CHARGE 74
#define MAX_CATALOG_MULTI_INSERT_BYTES 65535
#define F_NETMASK 696
#define F_TO_CHAR_FLOAT4_TEXT 1775
#define Anum_pg_constraint_confdeltype 14
#define PG_GETARG_ACL_P(n) DatumGetAclP(PG_GETARG_DATUM(n))
#define F_CHARGT 73
#define LOCK_H_ 
#define Anum_pg_attribute_attcompression 13
#define INSTR_TIME_SET_CURRENT(t) ((void) clock_gettime(PG_INSTR_CLOCK, &(t)))
#define _POSIX_V6_ILP32_OFF32 -1
#define F_INT4RANGE_INT4_INT4 3840
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define F_JSONB_EXTRACT_PATH 3217
#define BKI_DEFAULT(value) 
#define F_PG_TRY_ADVISORY_XACT_LOCK_SHARED_INT4_INT4 3096
#define HAVE__BUILTIN_UNREACHABLE 1
#define EXEC_FLAG_BACKWARD 0x0004
#define MB_LEN_MAX 16
#define EDQUOT 122
#define F_SEAL_GROW 0x0004
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define ALLOCSET_SMALL_MINSIZE 0
#define __intptr_t_defined 
#define outerPlan(node) (((Plan *)(node))->lefttree)
#define F_REGEXNESEL 1821
#define F_BINARY_UPGRADE_SET_RECORD_INIT_PRIVS 4083
#define F_BRIN_BLOOM_SUMMARY_SEND 4599
#define GTSVECTORARRAYOID 3644
#define ERRCODE_ADMIN_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','1')
#define Anum_pg_constraint_conexclop 24
#define SIGPOLL 29
#define F_INT8RANGE_INT8_INT8_TEXT 3946
#define PRIiFAST16 __PRIPTR_PREFIX "i"
#define F_WIN1251_TO_MIC 4306
#define EREMOTEIO 121
#define F_PG_HAS_ROLE_OID_OID_TEXT 2708
#define F_MULTIRANGE_OVERLAPS_RANGE 4247
#define OidGenLock (&MainLWLockArray[2].lock)
#define AT_STATX_DONT_SYNC 0x4000
#define HAVE_PLANNERINFO_TYPEDEF 1
#define ERRCODE_UNTRANSLATABLE_CHARACTER MAKE_SQLSTATE('2','2','P','0','5')
#define XLOG_XACT_COMMIT_PREPARED 0x30
#define F_PG_VISIBLE_IN_SNAPSHOT 5065
#define F_PG_HAS_ROLE_OID_NAME_TEXT 2707
#define __FP_FAST_FMAF64 1
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define F_INT8LT 469
#define RSIZE_MAX_MEM16 ( RSIZE_MAX_MEM/2 )
#define HAVE_MKDTEMP 1
#define ConstraintRelidTypidNameIndexId 2665
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define MovedPartitionsOffsetNumber 0xfffd
#define Anum_pg_index_indclass 17
#define F_MIC_TO_KOI8R 4303
#define F_REGPROCEDUREOUT 2213
#define REPLICATION_MODEL_COORDINATOR 'c'
#define HASH_TOKEN_COUNT INT64CONST(4294967296)
#define PG_CATCH() } else { PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack
#define F_SPG_BOX_QUAD_PICKSPLIT 5014
#define ERRCODE_DUPLICATE_OBJECT MAKE_SQLSTATE('4','2','7','1','0')
#define F_CSTRING_RECV 2500
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define F_JSONB_ARRAY_ELEMENTS 3219
#define RSIZE_MAX_MEM32 ( RSIZE_MAX_MEM/4 )
#define F_DATE_SEND 2469
#define _POSIX_SEMAPHORES 200809L
#define llast_node(type,l) castNode(type, llast(l))
#define F_BTNAMESORTSUPPORT 3135
#define F_CHARNE 70
#define F_JSONB_PATH_QUERY_TZ 1179
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define ESNULLP ( 400 )
#define SequenceRelationId 2224
#define SA_ONESHOT SA_RESETHAND
#define SCM_TIMESTAMPING_OPT_STATS 54
#define MULTI_JOIN_ORDER_H 
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define XATTR_NAME_MAX 255
#define pg_prevpower2_size_t(num) pg_prevpower2_64(num)
#define F_SUBSTR_TEXT_INT4 883
#define F_OIDVECTORLE 678
#define F_INTERVAL_PL_TIME 1848
#define HAVE_READV 1
#define F_PG_STAT_GET_FUNCTION_TOTAL_TIME 2979
#define dsa_allocate(area,size) dsa_allocate_extended(area, size, 0)
#define SCNoFAST16 __PRIPTR_PREFIX "o"
#define HeapTupleAllFixed(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH))
#define F_DATE_PART_TEXT_INTERVAL 1172
#define F_UUID_SORTSUPPORT 3300
#define __USE_XOPEN2K8XSI 1
#define SIGKILL 9
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define __INT_LEAST32_TYPE__ int
#define SOL_CAIF 278
#define F_NAME_BPCHAR 409
#define F_BIT_OR_BIT 2243
#define ECHRNG 44
#define F_ACLREMOVE 1036
#define FrozenTransactionId ((TransactionId) 2)
#define F_TIMESTAMPTZ_OUT 1151
#define F_MULTIRANGE_OVERRIGHT_MULTIRANGE 4269
#define USE_SSL 
#define F_TO_TSVECTOR_JSONB 4209
#define HeapTupleHeaderClearHotUpdated(tup) ( (tup)->t_infomask2 &= ~HEAP_HOT_UPDATED )
#define Anum_pg_constraint_conislocal 16
#define LOCK_MANAGER_LWLOCK_OFFSET (BUFFER_MAPPING_LWLOCK_OFFSET + NUM_BUFFER_PARTITIONS)
#define SCNiFAST16 __PRIPTR_PREFIX "i"
#define ERRCODE_FDW_FUNCTION_SEQUENCE_ERROR MAKE_SQLSTATE('H','V','0','1','0')
#define F_RI_FKEY_CHECK_INS 1644
#define F_BRIN_MINMAX_MULTI_SUMMARY_OUT 4639
#define F_JSONB_PATH_MATCH_OPR 4011
#define PRIoLEAST8 "o"
#define ENOLCK 37
#define StaticAssertDecl(condition,errmessage) _Static_assert(condition, errmessage)
#define MSG_DONTWAIT MSG_DONTWAIT
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define F_DATE_OUT 1085
#define F_HASHMACADDR8EXTENDED 781
#define DISTRIBUTE_BY_RANGE 'r'
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define HAVE_UUID_E2FS 1
#define HAVE_SECURITY_PAM_APPL_H 1
#define TYPSTORAGE_PLAIN 'p'
#define F_PLAINTO_TSQUERY_TEXT 3751
#define F_NUMERIC_STDDEV_POP 2596
#define USHRT_WIDTH 16
#define SCNiFAST32 __PRIPTR_PREFIX "i"
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define F_ACOSD 2732
#define F_ACOSH 2466
#define F_JUSTIFY_DAYS 1295
#define F_BTRECORDCMP 2987
#define AI_PASSIVE 0x0001
#define F_TIMESTAMP_LT_DATE 2364
#define F_INT42GT 163
#define F_DIAGONAL 981
#define DSA_ALLOC_HUGE 0x01
#define F_PG_STAT_GET_BGWRITER_BUF_WRITTEN_CHECKPOINTS 2771
#define F_PG_STAT_GET_DB_CONFLICT_BUFFERPIN 3068
#define __SI_ERRNO_THEN_CODE 1
#define INDEX_SIZE_MASK 0x1FFF
#define Anum_pg_constraint_confkey 20
#define TUPDESC_H 
#define ARR_DATA_OFFSET(a) (ARR_HASNULL(a) ? (a)->dataoffset : ARR_OVERHEAD_NONULLS(ARR_NDIM(a)))
#define S_ISUID __S_ISUID
#define FIELDNO_TUPLETABLESLOT_ISNULL 6
#define TUPLESORT_H 
#define VARATT_IS_EXTERNAL_EXPANDED_RO(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RO)
#define VARATT_IS_EXTERNAL_EXPANDED_RW(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RW)
#define SCNiFAST64 __PRI64_PREFIX "i"
#define F_NUMERIC_POLY_AVG 3389
#define F_JSONB_OBJECT_AGG_TRANSFN 3268
#define __f128(x) x ##f128
#define VARDATA_SHORT(PTR) VARDATA_1B(PTR)
#define F_INTERVAL_LARGER 1198
#define F_PG_FUNCTION_IS_VISIBLE 2081
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define F_MACADDR_RECV 2494
#define EOH_HEADER_MAGIC (-1)
#define F_INT82DIV 840
#define F_NAMELIKE 858
#define F_AMVALIDATE 338
#define ENOTSUP EOPNOTSUPP
#define IP_CHECKSUM 23
#define ERRCODE_S_E_INVALID_SPECIFICATION MAKE_SQLSTATE('3','B','0','0','1')
#define F_PG_TIMEZONE_NAMES 2856
#define FullTransactionIdIsValid(x) TransactionIdIsValid(XidFromFullTransactionId(x))
#define HAVE_RL_COMPLETION_APPEND_CHARACTER 1
#define _BITS_SIGTHREAD_H 1
#define F_JSONB_EXISTS_ANY 4048
#define _BITS_TYPES___LOCALE_T_H 1
#define toascii_l(c,l) __toascii_l ((c), (l))
#define IndexTupleSize(itup) ((Size) ((itup)->t_info & INDEX_SIZE_MASK))
#define HEAP_XMAX_IS_KEYSHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_KEYSHR_LOCK)
#define F_PG_TABLESPACE_DATABASES 2556
#define WRITEBACK_MAX_PENDING_FLUSHES 256
#define F_TEXT_LT 740
#define ANYOID 2276
#define F_TSQUERY_PHRASE_TSQUERY_TSQUERY_INT4 5004
#define F_GIN_EXTRACT_TSQUERY_TSVECTOR_INTERNAL_INT2_INTERNAL_INTERNAL_INTERNAL_INTERNAL 3657
#define F_TO_REGNAMESPACE 4086
#define EDEADLOCK EDEADLK
#define CLD_DUMPED CLD_DUMPED
#define RTAdjacentStrategyNumber 17
#define FKCONSTR_MATCH_PARTIAL 'p'
#define Anum_pg_type_typelem 14
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define PRIxFAST8 "x"
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define PageGetItemId(page,offsetNumber) ((ItemId) (&((PageHeader) (page))->pd_linp[(offsetNumber) - 1]))
#define F_SJIS_TO_MIC 4327
#define F_CIDRECV 2442
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define TTS_IS_MINIMALTUPLE(slot) ((slot)->tts_ops == &TTSOpsMinimalTuple)
#define F_ICREGEXNESEL 1823
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __suseconds_t_defined 
#define FIELDNO_HEAPTUPLETABLESLOT_OFF 2
#define INDEX_VAR_MASK 0x4000
#define PG_RETURN_BOOL(x) return BoolGetDatum(x)
#define __off_t_defined 
#define ERRCODE_CONNECTION_FAILURE MAKE_SQLSTATE('0','8','0','0','6')
#define SK_SEARCHNULL 0x0040
#define F_TIMEZONE_TEXT_TIMETZ 2037
#define PRIdLEAST64 __PRI64_PREFIX "d"
#define F_MIN_TIMESTAMPTZ 2143
#define SCM_TIMESTAMP SO_TIMESTAMP
#define DT_REG DT_REG
#define SIGPWR 30
#define F_FLOAT8UP 1914
#define EMEDIUMTYPE 124
#define MaxLockMode 8
#define F_PG_STAT_GET_BUF_FSYNC_BACKEND 3063
#define XLogArchivingAlways() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode == ARCHIVE_MODE_ALWAYS)
#define F_POINT_RIGHT 133
#define XLR_BLOCK_ID_DATA_SHORT 255
#define _GCC_SIZE_T 
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define PG_NODE_TREEOID 194
#define __INO64_T_TYPE __UQUAD_TYPE
#define HAVE_CLOCK_GETTIME 1
#define F_PG_DEPENDENCIES_OUT 3405
#define __W_CONTINUED 0xffff
#define L_SET SEEK_SET
#define F_DSQRT 230
#define F_MACADDR_SORTSUPPORT 3359
#define SO_SNDTIMEO_OLD 21
#define MemoryContextResetAndDeleteChildren(ctx) MemoryContextReset(ctx)
#define ERRCODE_CRASH_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','2')
#define F_INT4_AVG_COMBINE 3324
#define F_NUMERIC_JSONB 3449
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define ULONG_WIDTH __WORDSIZE
#define PublicationObjectIndexId 6110
#define F_TSVECTOROUT 3611
#define __size_t__ 
#define HAVE_LIBXML2 1
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define F_ARRAY_POSITIONS 3279
#define F_NAMEGETEXT 243
#define HAVE_STRTOLL 1
#define POLL_IN POLL_IN
#define F_BPCHARICLIKE 1660
#define F_PG_TABLESPACE_SIZE_OID 2322
#define F_COVAR_SAMP 2828
#define PQnoPasswordSupplied "fe_sendauth: no password supplied\n"
#define F_MIC_TO_EUC_CN 4323
#define __TIME64_T_TYPE __TIME_T_TYPE
#define _POSIX_BARRIERS 200809L
#define __ONCE_FLAG_INIT { 0 }
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define END_CRIT_SECTION() do { Assert(CritSectionCount > 0); CritSectionCount--; } while(0)
#define REGOPERARRAYOID 2208
#define SK_SEARCHNOTNULL 0x0080
#define F_SUPPRESS_REDUNDANT_UPDATES_TRIGGER 1291
#define ERRCODE_INVALID_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','1','9')
#define F_ISCLOSED 1430
#define Anum_pg_dist_partition_partkey 3
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define __LONG_WIDTH__ 64
#define Anum_pg_constraint_connoinherit 18
#define __STDLIB_MB_LEN_MAX 16
#define FIELDNO_TUPLETABLESLOT_TUPLEDESCRIPTOR 4
#define F_JSONB_PATH_EXISTS 4005
#define F_PG_IS_IN_RECOVERY 3810
#define __S_IFIFO 0010000
#define DSA_ALLOC_NO_OOM 0x02
#define F_HASH_ARRAY_EXTENDED 782
#define ENOPROTOOPT 92
#define SearchSysCacheExists1(cacheId,key1) SearchSysCacheExists(cacheId, key1, 0, 0, 0)
#define SearchSysCacheExists2(cacheId,key1,key2) SearchSysCacheExists(cacheId, key1, key2, 0, 0)
#define TYPEALIGN64(ALIGNVAL,LEN) (((uint64) (LEN) + ((ALIGNVAL) - 1)) & ~((uint64) ((ALIGNVAL) - 1)))
#define DO_AGGSPLIT_DESERIALIZE(as) (((as) & AGGSPLITOP_DESERIALIZE) != 0)
#define PG_GETARG_VARLENA_P(n) PG_DETOAST_DATUM(PG_GETARG_DATUM(n))
#define NormalTransactionIdFollows(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) > 0)
#define TYPSTORAGE_MAIN 'm'
#define BKPBLOCK_FLAG_MASK 0xF0
#define F_PERCENTILE_CONT__FLOAT8_FLOAT8 3980
#define F_JSON_OBJECT_AGG_TRANSFN 3180
#define __blkcnt_t_defined 
#define RelationHasCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option != VIEW_OPTION_CHECK_OPTION_NOT_SET)
#define INT_WIDTH 32
#define F_GIN_EXTRACT_JSONB_PATH 3485
#define EMFILE 24
#define F_MAKE_TIMESTAMPTZ_INT4_INT4_INT4_INT4_INT4_FLOAT8_TEXT 3463
#define F_PI 1610
#define ARR_LBOUND(a) ((int *) (((char *) (a)) + sizeof(ArrayType) + sizeof(int) * ARR_NDIM(a)))
#define MultiXactTruncationLock (&MainLWLockArray[41].lock)
#define HAVE_NETINET_TCP_H 1
#define PG_GETARG_UINT32(n) DatumGetUInt32(PG_GETARG_DATUM(n))
#define MACADDR8ARRAYOID 775
#define SA_NODEFER 0x40000000
#define SK_ROW_HEADER 0x0004
#define VARATT_IS_EXTERNAL(PTR) VARATT_IS_1B_E(PTR)
#define BUFFER_MAPPING_LWLOCK_OFFSET NUM_INDIVIDUAL_LWLOCKS
#define F_ARRAY_AGG_FINALFN 2334
#define F_PG_COLLATION_ACTUAL_VERSION 3448
#define ERRCODE_INVALID_PSTATEMENT_DEFINITION MAKE_SQLSTATE('4','2','P','1','4')
#define MSG_EOR MSG_EOR
#define DATATYPE_TIMESTAMP_H 
#define VARSIZE_ANY(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR) : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR) : VARSIZE_4B(PTR)))
#define PERFORM_DELETION_CONCURRENT_LOCK 0x0020
#define IndexRelationId 2610
#define STANDBY_SIGNAL_FILE "standby.signal"
#define ItemIdHasStorage(itemId) ((itemId)->lp_len != 0)
#define F_DATE_IN 1084
#define ERRCODE_INVALID_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','M')
#define __FLT_MIN_10_EXP__ (-37)
#define ACLITEM_ALL_GOPTION_BITS ((AclMode) 0xFFFF << 16)
#define F_MIC_TO_EUC_JP 4328
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define dsa_allocate0(area,size) dsa_allocate_extended(area, size, DSA_ALLOC_ZERO)
#define AT_EACCESS 0x200
#define F_POLY_CONTAIN_PT 1428
#define ENOTEMPTY 39
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define Anum_pg_type_typdefaultbin 30
#define XID8ARRAYOID 271
#define F_MIC_TO_EUC_KR 4331
#define ACL_INSERT_CHR 'a'
#define Anum_pg_index_indisexclusion 7
#define F_REGR_SLOPE 2825
#define WORD_BIT 32
#define F_CHAR_LENGTH_TEXT 1381
#define FRAMEOPTION_END_OFFSET_PRECEDING 0x01000
#define F_PG_ADVISORY_LOCK_SHARED_INT8 2881
#define F_INT4OUT 43
#define F_DATE_LT 1087
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define NUMMULTIRANGEARRAYOID 6151
#define F_PG_STAT_GET_LAST_ANALYZE_TIME 2783
#define SO_TIMESTAMPING_NEW 65
#define F_INETMI 2633
#define F_INT2MOD 155
#define F_DATE_MI 1140
#define PRIoPTR __PRIPTR_PREFIX "o"
#define INTMAX_C(c) c ## L
#define HAVE_GETRUSAGE 1
#define ACLITEM_ALL_PRIV_BITS ((AclMode) 0xFFFF)
#define ILL_PRVOPC ILL_PRVOPC
#define F_HAS_LANGUAGE_PRIVILEGE_NAME_TEXT_TEXT 2262
#define F_SUBSTRING_BIT_INT4 1699
#define type_is_array_domain(typid) (get_base_element_type(typid) != InvalidOid)
#define HAVE_DECL_LLVMGETHOSTCPUFEATURES 1
#define _STDINT_H 1
#define AccessShareLock 1
#define __FILE_defined 1
#define F_BTINT24CMP 2190
#define PG_GETARG_TEXT_P_COPY(n) DatumGetTextPCopy(PG_GETARG_DATUM(n))
#define RelationGetForm(relation) ((relation)->rd_rel)
#define F_SCHEMA_TO_XML_AND_XMLSCHEMA 2935
#define F_INETOR 2629
#define F_FLOAT4ABS 207
#define Anum_pg_attribute_atttypmod 9
#define F_TIMESTAMPTZ_LE_DATE 2378
#define WL_SOCKET_READABLE (1 << 1)
#define NoLock 0
#define PG_HAVE_ATOMIC_SUB_FETCH_U32 
#define ConstraintNameNspIndexId 2664
#define F_BIT_AND_INT4 2238
#define F_PG_DESCRIBE_OBJECT 3537
#define Anum_pg_attribute_attstorage 12
#define F_INETPL 2630
#define F_GIN_EXTRACT_JSONB_QUERY_PATH 3486
#define ERRCODE_TOO_MANY_JSON_ARRAY_ELEMENTS MAKE_SQLSTATE('2','2','0','3','D')
#define F_SPG_RANGE_QUAD_LEAF_CONSISTENT 3473
#define F_TIMESTAMPTZ_LE 1155
#define __ATOMIC_RELEASE 3
#define PageSizeIsValid(pageSize) ((pageSize) == BLCKSZ)
#define HAVE_X509_GET_SIGNATURE_NID 1
#define DATETIME_MIN_JULIAN (0)
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define F_INT4_JSONB 3451
#define SI_TIMER SI_TIMER
#define __LC_MONETARY 4
#define VARDATA_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_data)
#define F_VARIANCE_FLOAT4 2151
#define GUC_UNIT_MIN 0x30000
#define USE_DSM_SYSV 
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define F_DSYNONYM_LEXIZE 3729
#define PD_ALL_VISIBLE 0x0004
#define F_COSD 2736
#define F_LAG_ANYELEMENT_INT4 3107
#define PIV_REPORT_STAT (1 << 1)
#define FRAMEOPTION_END_UNBOUNDED_FOLLOWING 0x00100
#define fcGetArgValue(fc,n) ((fc)->args[n].value)
#define InvalidXLogRecPtr 0
#define PG_HAVE_ATOMIC_SUB_FETCH_U64 
#define F_HAS_COLUMN_PRIVILEGE_OID_TEXT_TEXT_TEXT 3016
#define F_PG_LAST_WAL_REPLAY_LSN 3821
#define F_NUMERIC_POLY_VAR_SAMP 3391
#define F_EVENT_TRIGGER_OUT 3595
#define F_BOX_LEFT 188
#define __SIZEOF_POINTER__ 8
#define F_INT2MUL 152
#define F_PG_GET_CONSTRAINTDEF_OID 1387
#define DISTRIBUTE_BY_INVALID '\0'
#define XactCompletionRelcacheInitFileInval(xinfo) ((xinfo & XACT_COMPLETION_UPDATE_RELCACHE_FILE) != 0)
#define __ATOMIC_SEQ_CST 5
#define WORKER_MANAGER_H 
#define F_MIC_TO_EUC_TW 4336
#define F_TIMETZ_EQ 1352
#define NL_MSGMAX INT_MAX
#define ALLOCSET_SMALL_SIZES ALLOCSET_SMALL_MINSIZE, ALLOCSET_SMALL_INITSIZE, ALLOCSET_SMALL_MAXSIZE
#define __FLT32X_MIN_10_EXP__ (-307)
#define PRId16 "d"
#define FRAMEOPTION_EXCLUDE_TIES 0x20000
#define PF_IB 27
#define F_JSONB_TO_RECORDSET 3491
#define F_FLOAT8_COVAR_POP 2815
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define SIGTERM 15
#define F_PG_CURRENT_SNAPSHOT 5061
#define ATTRIBUTE_FIXED_PART_SIZE (offsetof(FormData_pg_attribute,attcollation) + sizeof(Oid))
#define F_OBJ_DESCRIPTION_OID 1348
#define getObjectTypeDescription_compat(a,b) getObjectTypeDescription(a, b)
#define DatumGetByteaPSlice(X,m,n) ((bytea *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define PG_FUNCNAME_MACRO __func__
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define PRId32 "d"
#define FRAMEOPTION_ROWS 0x00004
#define MinSizeOfXactRelfilenodes offsetof(xl_xact_relfilenodes, xnodes)
#define ERRCODE_FDW_INVALID_STRING_FORMAT MAKE_SQLSTATE('H','V','0','0','A')
#define ERRCODE_INVALID_RECURSION MAKE_SQLSTATE('4','2','P','1','9')
#define F_OIDEQ 184
#define DT_FIFO DT_FIFO
#define F_NPOINTS_PATH 1545
#define UInt32GetDatum(X) ((Datum) (X))
#define F_COS 1605
#define F_COT 1607
#define SHAREDINVALCATALOG_ID (-1)
#define DEFAULT_CHECKPOINT_FLUSH_AFTER 32
#define F_CURSOR_TO_XML 2925
#define ERRCODE_CASE_NOT_FOUND MAKE_SQLSTATE('2','0','0','0','0')
#define ERRORMESSAGE_H 
#define PACKAGE_URL "https://www.postgresql.org/"
#define F_POINT_DISTANCE 991
#define F_LSEG_INTERSECT 994
#define F_INT4GE 150
#define GUC_UNIT_BLOCKS 0x2000
#define F_TIMESTAMP_GE_DATE 2368
#define FORKNAMECHARS 4
#define F_INT28NE 1851
#define PRId64 __PRI64_PREFIX "d"
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','1')
#define fetch_att(T,attbyval,attlen) ( (attbyval) ? ( (attlen) == (int) sizeof(Datum) ? *((Datum *)(T)) : ( (attlen) == (int) sizeof(int32) ? Int32GetDatum(*((int32 *)(T))) : ( (attlen) == (int) sizeof(int16) ? Int16GetDatum(*((int16 *)(T))) : ( AssertMacro((attlen) == 1), CharGetDatum(*((char *)(T))) ) ) ) ) : PointerGetDatum((char *) (T)) )
#define F_CONCAT_WS 3059
#define __POSIX2_THIS_VERSION 200809L
#define __ldiv_t_defined 1
#define EC_MUST_BE_REDUNDANT(eclass) ((eclass)->ec_has_const && !(eclass)->ec_below_outer_join)
#define ___int_ptrdiff_t_h 
#define F_LEAD_ANYCOMPATIBLE_INT4_ANYCOMPATIBLE 3111
#define F_SHOBJ_DESCRIPTION 1993
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define F_AGE_TIMESTAMPTZ_TIMESTAMPTZ 1199
#define IP_PMTUDISC_INTERFACE 4
#define F_ACLITEMIN 1031
#define F_INTER_LB 278
#define F_FLOAT8_JSONB 2580
#define SECS_PER_HOUR 3600
#define F_CASH_DIV_INT2 867
#define DatumGetArrayTypePCopy(X) ((ArrayType *) PG_DETOAST_DATUM_COPY(X))
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define PG_CLASS_D_H 
#define F_REGEXP_SPLIT_TO_ARRAY_TEXT_TEXT_TEXT 2768
#define HeapTupleIsHotUpdated(tuple) HeapTupleHeaderIsHotUpdated((tuple)->t_data)
#define SO_PRIORITY 12
#define F_DATERANGE_DATE_DATE_TEXT 3942
#define __USE_LARGEFILE64 1
#define Anum_pg_constraint_conname 2
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define F_SETOWN_EX __F_SETOWN_EX
#define ERRCODE_INVALID_PRECEDING_OR_FOLLOWING_SIZE MAKE_SQLSTATE('2','2','0','1','3')
#define PF_LOCAL 1
#define F_STRING_AGG_BYTEA_BYTEA 3545
#define F_PG_STAT_GET_NUMSCANS 1928
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define FIELDNO_MINIMALTUPLETABLESLOT_OFF 4
#define F_BOX_POINT_POINT 1421
#define F_OVERLAPS_TIMESTAMP_TIMESTAMP_TIMESTAMP_INTERVAL 2043
#define SOL_LLC 268
#define F_PG_STAT_GET_MOD_SINCE_ANALYZE 3177
#define REGCOLLATIONOID 4191
#define EHWPOISON 133
#define F_PG_EXTENSION_CONFIG_DUMP 3086
#define F_HASHTID 2233
#define ERRCODE_INVALID_JSON_TEXT MAKE_SQLSTATE('2','2','0','3','2')
#define __DBL_MIN_EXP__ (-1021)
#define F_CIDR 1715
#define INTSTYLE_POSTGRES_VERBOSE 1
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define F_ISOPEN 1431
#define EMULTIHOP 72
#define F_BITEQ 1581
#define ERRCODE_AMBIGUOUS_COLUMN MAKE_SQLSTATE('4','2','7','0','2')
#define F_SIN 1604
#define ERRCODE_DUPLICATE_ALIAS MAKE_SQLSTATE('4','2','7','1','2')
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define F_ASINH 2465
#define F_PERCENTILE_CONT_INTERVAL_FINAL 3977
#define MAX_FORKNUM INIT_FORKNUM
#define F_TS_HEADLINE_JSONB_TSQUERY_TEXT 4203
#define RelationCloseSmgr(relation) do { if ((relation)->rd_smgr != NULL) { smgrclose((relation)->rd_smgr); Assert((relation)->rd_smgr == NULL); } } while (0)
#define F_SIGN_FLOAT8 2310
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __CFLOAT32 _Complex _Float32
#define F_PG_ADVISORY_XACT_LOCK_SHARED_INT8 3090
#define F_SQRT_FLOAT8 1344
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define F_SET_RW_HINT 1036
#define F_TXID_VISIBLE_IN_SNAPSHOT 2948
#define JSONPATHARRAYOID 4073
#define IPPROTO_PIM IPPROTO_PIM
#define DatumGetBpCharPP(X) ((BpChar *) PG_DETOAST_DATUM_PACKED(X))
#define __FLT128_MAX_10_EXP__ 4932
#define F_STRPOS 868
#define OPCLASS_ITEM_STORAGETYPE 3
#define F_RI_FKEY_CASCADE_DEL 1646
#define F_MAX_TEXT 2129
#define PVC_INCLUDE_PLACEHOLDERS 0x0010
#define F_INT8MULTIRANGE_INT8RANGE 4296
#define outerPlanState(node) (((PlanState *)(node))->lefttree)
#define IP_PMTUDISC_OMIT 5
#define F_BTINT84CMP 2189
#define DatumGetHeapTupleHeader(X) ((HeapTupleHeader) PG_DETOAST_DATUM(X))
#define F_INTER_SL 277
#define F_CIDOUT 53
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define F_SCALARGTSEL 104
#define _SC_IPV6 _SC_IPV6
#define HeapTupleHeaderSetTypMod(tup,typmod) ( (tup)->t_choice.t_datum.datum_typmod = (typmod) )
#define F_BOX_DIV 1425
#define F_TIMEZONE_INTERVAL_TIMETZ 2038
#define RWH_WRITE_LIFE_SHORT 2
#define F_BTVARSTREQUALIMAGE 5050
#define MCAST_JOIN_GROUP 42
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define restrict __restrict__
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define F_VAR_POP_INT4 2719
#define F_REGDICTIONARYRECV 3773
#define F_COL_DESCRIPTION 1216
#define F_INT48NE 853
#define OIDVECTORARRAYOID 1013
#define VARATT_EXTERNAL_GET_EXTSIZE(toast_pointer) ((toast_pointer).va_extinfo & VARLENA_EXTSIZE_MASK)
#define si_arch _sifields._sigsys._arch
#define __S64_TYPE long int
#define IP_TOS 1
#define F_VAR_POP_INT8 2718
#define SizeOfPageHeaderData (offsetof(PageHeaderData, pd_linp))
#define __SQUAD_TYPE long int
#define F_BOX_EQ 128
#define F_INT8AND 1904
#define _BITS_SIGINFO_CONSTS_H 1
#define F_PG_SIZE_BYTES 3334
#define SIGBUS 7
#define F_REGEXP_SPLIT_TO_TABLE_TEXT_TEXT_TEXT 2766
#define F_INTERVAL_UM 1168
#define DATEORDER_MDY 2
#define __CHAR_BIT__ 8
#define SO_DOMAIN 39
#define CUSTOMPATH_SUPPORT_MARK_RESTORE 0x0002
#define USE_OPENSSL 1
#define REMOTE_TRANSACTION_H 
#define heap_getattr(tup,attnum,tupleDesc,isnull) ( ((attnum) > 0) ? ( ((attnum) > (int) HeapTupleHeaderGetNatts((tup)->t_data)) ? getmissingattr((tupleDesc), (attnum), (isnull)) : fastgetattr((tup), (attnum), (tupleDesc), (isnull)) ) : heap_getsysattr((tup), (attnum), (tupleDesc), (isnull)) )
#define SHORTALIGN(LEN) TYPEALIGN(ALIGNOF_SHORT, (LEN))
#define F_PG_NODE_TREE_SEND 198
#define ARR_HASNULL(a) ((a)->dataoffset != 0)
#define pairingheap_const_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, const pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((const type *) ((const char *) (ptr) - offsetof(type, membername))))
#define F_DATE_TRUNC_TEXT_TIMESTAMPTZ 1217
#define EREMCHG 78
#define F_LSEG_DISTANCE 361
#define AF_DECnet PF_DECnet
#define RELKIND_PARTITIONED_TABLE 'p'
#define PG_VERSION_STR "PostgreSQL 14.5 (Ubuntu 14.5-0ubuntu0.22.04.1) on aarch64-unknown-linux-gnu, compiled by gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0, 64-bit"
#define F_XID8RECV 5082
#define HASH_KEYCOPY 0x0100
#define SIGTTIN 21
#define F_SUBSTRING_BYTEA_INT4_INT4 2012
#define EACCES 13
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define index_getattr(tup,attnum,tupleDesc,isnull) ( AssertMacro(PointerIsValid(isnull) && (attnum) > 0), *(isnull) = false, !IndexTupleHasNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup) + IndexInfoFindDataOffset((tup)->t_info) + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocache_index_getattr((tup), (attnum), (tupleDesc)) ) : ( (att_isnull((attnum)-1, (char *)(tup) + sizeof(IndexTupleData))) ? ( *(isnull) = true, (Datum)NULL ) : ( nocache_index_getattr((tup), (attnum), (tupleDesc)) ) ) )
#define InstrCountFiltered2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered2 += (delta); } while(0)
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define F_BINARY_UPGRADE_SET_MISSING_VALUE 4101
#define TRANSFER_MODE_BLOCK_WRITES 'b'
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define StaticAssertExpr(condition,errmessage) ((void) ({ StaticAssertStmt(condition, errmessage); true; }))
#define __DADDR_T_TYPE __S32_TYPE
#define pg_attribute_cold __attribute__((cold))
#define F_NAMEGT 657
#define ERRCODE_DATA_EXCEPTION MAKE_SQLSTATE('2','2','0','0','0')
#define INT8RANGEOID 3926
#define LOCKBIT_OFF(lockmode) (~(1 << (lockmode)))
#define PIPE_BUF 4096
#define ERRCODE_FDW_INVALID_COLUMN_NUMBER MAKE_SQLSTATE('H','V','0','0','8')
#define IP_TTL 2
#define F_BPCHAROUT 1045
#define DatumGetArrayTypeP(X) ((ArrayType *) PG_DETOAST_DATUM(X))
#define UInt64GetDatum(X) ((Datum) (X))
#define F_SPG_RANGE_QUAD_CONFIG 3469
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define F_NEQSEL 102
#define CHUNK_ROW_COUNT_MAXIMUM 100000
#define F_FLT8_MUL_CASH 919
#define F_INT2_FLOAT4 238
#define BKPBLOCK_HAS_DATA 0x20
#define F_GENERATE_SERIES_INT8_SUPPORT 3995
#define PRIiLEAST8 "i"
#define F_UPPER_INC_ANYRANGE 3852
#define F_MIN_INET 3565
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define __INT32_C(c) c
#define F_PATH_DIV_PT 1439
#define ERRCODE_TRANSACTION_ROLLBACK MAKE_SQLSTATE('4','0','0','0','0')
#define F_ATAN2 1603
#define PF_DECnet 12
#define F_ATANH 2467
#define Anum_pg_dist_partition_autoconverted 6
#define __ORDER_LITTLE_ENDIAN__ 1234
#define F_INT2_FLOAT8 237
#define NUM_BUFFER_PARTITIONS 128
#define UINT_FAST16_WIDTH __WORDSIZE
#define HAVE_STRUCT_ADDRINFO 1
#define F_PG_STAT_GET_BACKEND_IDSET 1936
#define PG_GETARG_BYTEA_P_SLICE(n,a,b) DatumGetByteaPSlice(PG_GETARG_DATUM(n),a,b)
#define OLD_SNAPSHOT_TIME_MAP_ENTRIES (old_snapshot_threshold + OLD_SNAPSHOT_PADDING_ENTRIES)
#define F_JSONB_BUILD_OBJECT_ 3274
#define F_PG_STATISTICS_OBJ_IS_VISIBLE 3403
#define F_OVERLAPS_TIME_TIME_TIME_TIME 1308
#define F_JSON_ARRAY_ELEMENT 3949
#define pg_attribute_printf(f,a) __attribute__((format(PG_PRINTF_ATTRIBUTE, f, a)))
#define Anum_pg_index_indexrelid 1
#define __STATFS_MATCHES_STATFS64 1
#define F_XPATH_TEXT_XML__TEXT 2931
#define InvalidSnapshot ((Snapshot) NULL)
#define F_TSVECTOR_CONCAT 3625
#define XACT_REPEATABLE_READ 2
#define lsecond(l) lfirst(list_nth_cell(l, 1))
#define Anum_pg_index_indcheckxmin 11
#define F_MAX_ANYENUM 3526
#define PG_SOMAXCONN 10000
#define F_PG_COPY_LOGICAL_REPLICATION_SLOT_NAME_NAME_BOOL_NAME 4222
#define IS_DUMMY_REL(r) is_dummy_rel(r)
#define F_OVERLAY_BIT_BIT_INT4_INT4 3030
#define BKPBLOCK_WILL_INIT 0x40
#define F_ISO_TO_WIN866 4320
#define PG_GETARG_BYTEA_PP(n) DatumGetByteaPP(PG_GETARG_DATUM(n))
#define F_JSONB_BUILD_ARRAY_ANY 3271
#define MovedPartitionsBlockNumber InvalidBlockNumber
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define XLogLogicalInfoActive() (wal_level >= WAL_LEVEL_LOGICAL)
#define F_NUMNODE 3672
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define F_VARBIT_OUT 1580
#define ACL_SELECT_FOR_UPDATE ACL_UPDATE
#define Max(x,y) ((x) > (y) ? (x) : (y))
#define Anum_pg_class_relrowsecurity 23
#define F_MIC_TO_ISO 4305
#define F_INT4RECV 2406
#define HAVE_SYSLOG 1
#define IPV6_PMTUDISC_PROBE 3
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define F_GIN_TSQUERY_CONSISTENT_INTERNAL_INT2_TSQUERY_INT4_INTERNAL_INTERNAL 3088
#define F_FLOAT4EQ 287
#define MinSizeOfXactInvals offsetof(xl_xact_invals, msgs)
#define LONG_WIDTH __WORDSIZE
#define FIELDNO_EXPRCONTEXT_DOMAINNULL 13
#define SEGV_BNDERR SEGV_BNDERR
#define F_DATEMULTIRANGE_DATERANGE 4293
#define F_GETDATABASEENCODING 1039
#define DEFAULT_TABLE_ACCESS_METHOD "heap"
#define F_VARCHARSEND 2433
#define F_FLOAT8_REGR_SXX 2807
#define F_FLOAT8_REGR_SXY 2809
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define F_INT4_FLOAT8 317
#define lfirst_oid(lc) ((lc)->oid_value)
#define IPV6_UNICAST_IF 76
#define F_NETWORK_LE 922
#define __O_NOFOLLOW 0100000
#define ngettext(msgid1,msgid2,n) dngettext (NULL, msgid1, msgid2, n)
#define F_SPG_TEXT_CHOOSE 4028
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','5')
#define OIDOID 26
#define PG_INT128_TYPE __int128
#define TRANSACTION_MANAGMENT_H 
#define F_PG_STOP_BACKUP_ 2173
#define F_FLOAT8_REGR_SYY 2808
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define CIRCLEARRAYOID 719
#define Anum_pg_class_relname 2
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define F_AGE_XID 1181
#define __CFLOAT128 _Complex _Float128
#define F_JSONB_HASH 4045
#define __SIG_ATOMIC_TYPE__ int
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __SVE_ZREGS_OFFSET 0
#define PG_VERSION_COMPAT_H 
#define CONSTRAINT_TRIGGER 't'
#define F_TIME_OUT 1144
#define FunctionCall3(flinfo,arg1,arg2,arg3) FunctionCall3Coll(flinfo, InvalidOid, arg1, arg2, arg3)
#define __DBL_MIN_10_EXP__ (-307)
#define F_JSON_BUILD_ARRAY_ 3199
#define GAI_NOWAIT 1
#define F_RI_FKEY_SETDEFAULT_UPD 1653
#define h_errno (*__h_errno_location ())
#define TRACE_SORT 1
#define F_SPG_BBOX_QUAD_CONFIG 5010
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define F_RANGE_MERGE_ANYRANGE_ANYRANGE 4057
#define DEPENDENCY_H 
#define __FLT32X_MAX_EXP__ 1024
#define F_MULTIRANGE_LE 4275
#define F_TIMETZTYPMODOUT 2912
#define F_ACLITEMOUT 1032
#define SYNC_H 
#define F_SHELL_IN 2398
#define F_ANYCOMPATIBLEARRAY_IN 5088
#define __GNUC_PATCHLEVEL__ 0
#define RTLessStrategyNumber 20
#define F_DENSE_RANK_ANY 3992
#define BKPBLOCK_HAS_IMAGE 0x10
#define IPV6_HOPOPTS 54
#define F_INT4MI 181
#define __ASM_SVE_CONTEXT_H 
#define HAVE_NET_IF_H 1
#define _POSIX_TRACE_EVENT_FILTER -1
#define Min(x,y) ((x) < (y) ? (x) : (y))
#define ACL_REFERENCES_CHR 'x'
#define SO_SECURITY_AUTHENTICATION 22
#define TSQUERYOID 3615
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define PG_RETURN_CSTRING(x) return CStringGetDatum(x)
#define PG_MAJORVERSION_NUM 14
#define F_TIMESTAMP_SORTSUPPORT 3137
#define h_addr h_addr_list[0]
#define NameStr(name) ((name).data)
#define UINT8_WIDTH 8
#define REGPROCEDUREARRAYOID 2207
#define F_BRIN_BLOOM_UNION 4594
#define NameGetDatum(X) CStringGetDatum(NameStr(*(X)))
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define F_FMGR_SQL_VALIDATOR 2248
#define SCNdLEAST8 "hhd"
#define INVALID_SHARD_ID 0
#define _XOPEN_XCU_VERSION 4
#define ENOMEM 12
#define F_BRIN_MINMAX_MULTI_DISTANCE_MACADDR8 4635
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define F_FORMAT_TYPE 1081
#define F_MULTIRANGE_BEFORE_MULTIRANGE 4260
#define _SYS_TIME_H 1
#define F_ARRAY_SUBSCRIPT_HANDLER 6179
#define _BITS_SOCKADDR_H 1
#define __INT_LEAST8_WIDTH__ 8
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define F_ASIND 2731
#define PG_SEQUENCE_D_H 
#define foreach_int(var,l) for (ListCell *(var ## CellDoNotUse) = list_head(l); (var ## CellDoNotUse) != NULL && (((var) = lfirst_int(var ## CellDoNotUse)) || true); var ## CellDoNotUse = lnext(l, var ## CellDoNotUse))
#define F_PG_REPLICATION_ORIGIN_SESSION_PROGRESS 6009
#define F_INT4RANGE_SUBDIFF 3922
#define for_each_cell(cell,lst,initcell) for (ForEachState cell ##__state = for_each_cell_setup(lst, initcell); (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define _XBS5_LPBIG_OFFBIG -1
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define VirtualTransactionIdIsRecoveredPreparedXact(vxid) ((vxid).backendId == InvalidBackendId)
#define F_PERCENT_RANK_ 3103
#define F_ARRAY_CAT 383
#define F_TIMETZ_GE 1356
#define POINTOID 600
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define F_PG_STAT_GET_TUPLES_HOT_UPDATED 1972
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define S_IXOTH (S_IXGRP >> 3)
#define F_INTERVAL_TIME 1370
#define lfourth_oid(l) lfirst_oid(list_nth_cell(l, 3))
#define F_INT2_INT4 314
#define INT8MULTIRANGEARRAYOID 6157
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define ERRCODE_E_R_I_E_INVALID_SQLSTATE_RETURNED MAKE_SQLSTATE('3','9','0','0','1')
#define F_MAKE_INTERVAL 3464
#define __ARM_FP 14
#define INT_FAST16_MAX (9223372036854775807L)
#define F_TIMETZ_IN 1350
#define F_POINT_FLOAT8_FLOAT8 1440
#define SIGSTKFLT 16
#define DatumGetUInt32(X) ((uint32) (X))
#define F_HASH_MULTIRANGE 4278
#define F_TIMESTAMP_SEND 2475
#define F_PERCENT_RANK_ANY 3988
#define Anum_pg_type_typtypmod 27
#define _RPC_NETDB_H 1
#define HAVE_GCC__SYNC_INT64_CAS 1
#define TZ_STRLEN_MAX 255
#define SOCK_DCCP SOCK_DCCP
#define NAME_MAX 255
#define XLOG_XACT_OPMASK 0x70
#define F_SPG_QUAD_CONFIG 4018
#define TRANSFER_MODE_FORCE_LOGICAL 'l'
#define SCHAR_MAX __SCHAR_MAX__
#define F_PG_CREATE_PHYSICAL_REPLICATION_SLOT 3779
#define Anum_pg_attribute_atthasmissing 16
#define PF_SECURITY 14
#define MaxAttrNumber 32767
#define IPV6_2292DSTOPTS 4
#define Anum_pg_attribute_attcollation 22
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define XLogArchivingActive() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode > ARCHIVE_MODE_OFF)
#define PG_DIAG_TABLE_NAME 't'
#define F_GIN_TRICONSISTENT_JSONB_PATH 3489
#define HAVE_DECL_PREADV 1
#define ENABLE_THREAD_SAFETY 1
#define HAVE_WCTYPE_H 1
#define NotifyQueueTailLock (&MainLWLockArray[47].lock)
#define ATTMAP_H 
#define F_OIDSEND 2419
#define F_MONEY_NUMERIC 3824
#define DatumGetUInt64(X) ((uint64) (X))
#define _POSIX_THREAD_CPUTIME 0
#define F_GINARRAYEXTRACT_ANYARRAY_INTERNAL 3076
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define F_QUERY_TO_XML_AND_XMLSCHEMA 2930
#define si_int _sifields._rt.si_sigval.sival_int
#define F_MULTIRANGE_CONTAINED_BY_RANGE 4542
#define __unix 1
#define _POSIX_SPAWN 200809L
#define SearchSysCacheExists4(cacheId,key1,key2,key3,key4) SearchSysCacheExists(cacheId, key1, key2, key3, key4)
#define FirstGenbkiObjectId 10000
#define __UINT32_MAX__ 0xffffffffU
#define F_TIMETZ_NE 1353
#define F_DATE_PART_TEXT_DATE 1384
#define _BITS_SS_FLAGS_H 1
#define F_PG_RELATION_IS_PUBLISHABLE 6121
#define F_JSON_ARRAY_ELEMENTS_TEXT 3969
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define PF_SMC 43
#define IPV6_DONTFRAG 62
#define _POSIX_PIPE_BUF 512
#define DatumGetHeapTupleHeaderCopy(X) ((HeapTupleHeader) PG_DETOAST_DATUM_COPY(X))
#define F_CIRCLE_EQ 1462
#define F_INET_SEND 2497
#define F_BITGT 1593
#define ALIGNOF_DOUBLE 8
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define PF_SNA 22
#define Anum_pg_sequence_seqmax 5
#define __INT_FAST32_WIDTH__ 64
#define SCNuLEAST16 "hu"
#define REL_H 
#define F_EXLCK 4
#define MSG_FIN MSG_FIN
#define F_NUMERIC_COMBINE 3341
#define SO_NO_CHECK 11
#define SMGR_H 
#define UINT_FAST64_WIDTH 64
#define WUNTRACED 2
#define ERESTART 85
#define PRIiFAST64 __PRI64_PREFIX "i"
#define pg_attribute_format_arg(a) __attribute__((format_arg(a)))
#define NZERO 20
#define EISNAM 120
#define F_FDW_HANDLER_OUT 3117
#define RTContainedByStrategyNumber 8
#define F_ARRAYCONTJOINSEL 3818
#define SCNuLEAST32 "u"
#define ALLOCSET_DEFAULT_SIZES ALLOCSET_DEFAULT_MINSIZE, ALLOCSET_DEFAULT_INITSIZE, ALLOCSET_DEFAULT_MAXSIZE
#define NULL ((void *)0)
#define __f64x(x) x ##f64x
#define OPTIMIZER_H 
#define ENOMSG 42
#define F_NUMERIC_POWER 1739
#define RENAME_EXCHANGE (1 << 1)
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define F_NAMEGTTEXT 244
#define FIELDNO_EXPRSTATE_RESNULL 2
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define AF_FILE PF_FILE
#define F_TO_CHAR_FLOAT8_TEXT 1776
#define JULIAN_MINDAY (24)
#define F_LO_CREATE 715
#define F_TS_DEBUG_TEXT 6184
#define __USE_KERNEL_IPV6_DEFS 0
#define F_CHARSEND 2435
#define ACL_SELECT_CHR 'r'
#define GUC_UNIT_S 0x20000
#define F_TSTZMULTIRANGE_ 4289
#define VARATT_IS_EXTENDED(PTR) (!VARATT_IS_4B_U(PTR))
#define SYNC_METHOD_FSYNC 0
#define F_LOG10_FLOAT8 1194
#define SpinLockFree(lock) S_LOCK_FREE(lock)
#define F_MULTIRANGE_GIST_COMPRESS 6156
#define __INT64_C(c) c ## L
#define PG_INSTR_CLOCK CLOCK_MONOTONIC
#define F_PERCENTILE_CONT_FLOAT8_FINAL 3975
#define SCNuLEAST64 __PRI64_PREFIX "u"
#define F_ISFINITE_TIMESTAMPTZ 1389
#define HAVE_TYPEOF 1
#define F_CASH_DIV_CASH 3822
#define F_PG_LSN_MI 3237
#define att_align_nominal(cur_offset,attalign) ( ((attalign) == TYPALIGN_INT) ? INTALIGN(cur_offset) : (((attalign) == TYPALIGN_CHAR) ? (uintptr_t) (cur_offset) : (((attalign) == TYPALIGN_DOUBLE) ? DOUBLEALIGN(cur_offset) : ( AssertMacro((attalign) == TYPALIGN_SHORT), SHORTALIGN(cur_offset) ))) )
#define F_KOI8R_TO_ISO 4317
#define F_JSONB_SEND 3803
#define F_CHAR_LENGTH_BPCHAR 1372
#define RelationGetRelationName(relation) (NameStr((relation)->rd_rel->relname))
#define DSM_IMPL_SYSV 2
#define F_INTERVAL_GT 1167
#define FRAMEOPTION_EXCLUDE_GROUP 0x10000
#define AttributeRelationId 1249
#define F_LINE 1493
#define PROC_VACUUM_FOR_WRAPAROUND 0x08
#define WL_SOCKET_WRITEABLE (1 << 2)
#define CHECKPOINT_FLUSH_ALL 0x0010
#define F_HASHINT4EXTENDED 425
#define Anum_pg_sequence_seqmin 6
#define PublicationNameIndexId 6111
#define F_BOX_CENTER 138
#define COLUMNAR_BYTES_PER_PAGE (BLCKSZ - SizeOfPageHeaderData)
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define S_IRWXO (S_IRWXG >> 3)
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define F_REGROLESEND 4095
#define F_LENGTH_BPCHAR 1318
#define BLCKSZ 8192
#define ClassTblspcRelfilenodeIndexId 3455
#define si_addr _sifields._sigfault.si_addr
#define DatumGetCommandId(X) ((CommandId) (X))
#define EAI_NOTCANCELED -102
#define _STDBOOL_H 
#define RelationHasLocalCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option == VIEW_OPTION_CHECK_OPTION_LOCAL)
#define F_XML 2896
#define S_IFMT __S_IFMT
#define PG_RETURN_ACL_P(x) PG_RETURN_POINTER(x)
#define CLOCK_REALTIME 0
#define IS_VALID_TIMESTAMP(t) (MIN_TIMESTAMP <= (t) && (t) < END_TIMESTAMP)
#define FullTransactionIdFollows(a,b) ((a).value > (b).value)
#define F_PG_STAT_GET_PROGRESS_INFO 3318
#define SO_LOCK_FILTER 44
#define PRIxMAX __PRI64_PREFIX "x"
#define F_HASH_RECORD_EXTENDED 6193
#define RELKIND_COMPOSITE_TYPE 'c'
#define __wint_t_defined 1
#define __MODE_T_TYPE __U32_TYPE
#define F_MAX_MONEY 2125
#define F_POLY_OVERABOVE 2568
#define F_PG_EVENT_TRIGGER_TABLE_REWRITE_OID 4566
#define F_RANGE_CONTAINS 3859
#define ObjectAddressSubSet(addr,class_id,object_id,object_sub_id) do { (addr).classId = (class_id); (addr).objectId = (object_id); (addr).objectSubId = (object_sub_id); } while (0)
#define llast(l) lfirst(list_last_cell(l))
#define F_IN_RANGE_INT4_INT4_INT2_BOOL_BOOL 4129
#define PARALLEL_H 
#define F_BOX_POLYGON 1446
#define F_BIT_INT4_INT4 1683
#define _SC_POLL _SC_POLL
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define TSTZMULTIRANGEOID 4534
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U32 
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define F_PG_CONTROL_INIT 3444
#define HAVE_READLINE_HISTORY_H 1
#define UINT_LEAST8_WIDTH 8
#define SetTuplestoreDestReceiverParams_compat(a,b,c,d,e,f) SetTuplestoreDestReceiverParams(a, b, c, d, e, f)
#define F_ANYMULTIRANGE_OUT 4230
#define F_SUM_NUMERIC 2114
#define SizeOfXLogRecordBlockHeader (offsetof(XLogRecordBlockHeader, data_length) + sizeof(uint16))
#define ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('2','3','0','0','0')
#define HASH_SHARED_MEM 0x0800
#define F_CASH_CMP 377
#define F_TIMETZ_GT 1357
#define F_UHC_TO_UTF8 4380
#define _LARGEFILE64_SOURCE 1
#define F_MULTIRANGE_EQ 4244
#define _BITS_UINTN_IDENTITY_H 1
#define F_SPG_TEXT_LEAF_CONSISTENT 4031
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define DatumGetUInt16(X) ((uint16) (X))
#define F_UUID_SEND 2962
#define PG_RETURN_UINT16(x) return UInt16GetDatum(x)
#define ERRCODE_FLOATING_POINT_EXCEPTION MAKE_SQLSTATE('2','2','P','0','1')
#define F_EQJOINSEL 105
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define F_INT2RECV 2404
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U64 
#define BIG_ENDIAN __BIG_ENDIAN
#define _POSIX2_BC_SCALE_MAX 99
#define si_status _sifields._sigchld.si_status
#define _BSD_SIZE_T_DEFINED_ 
#define DatumGetAclP(X) ((Acl *) PG_DETOAST_DATUM(X))
#define PG_RETURN_UINT32(x) return UInt32GetDatum(x)
#define PG_ATTRIBUTE_D_H 
#define F_BRIN_MINMAX_MULTI_CONSISTENT 4618
#define __FLT32_DIG__ 6
#define F_IN_RANGE_INT2_INT2_INT8_BOOL_BOOL 4130
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define CStringGetTextDatum(s) PointerGetDatum(cstring_to_text(s))
#define ERRCODE_INVALID_COLUMN_DEFINITION MAKE_SQLSTATE('4','2','6','1','1')
#define F_BOX_DISTANCE 978
#define __RLIM_T_MATCHES_RLIM64_T 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define F_PG_HAS_ROLE_NAME_OID_TEXT 2706
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define SO_TIMESTAMPING_OLD 37
#define F_TEXTREGEXEQ 1254
#define F_TSTZMULTIRANGE__TSTZRANGE 4291
#define AF_WANPIPE PF_WANPIPE
#define F_INET_GIST_CONSISTENT 3553
#define isblank_l(c,l) __isblank_l ((c), (l))
#define _XBS5_LP64_OFF64 1
#define TransactionIdIsNormal(xid) ((xid) >= FirstNormalTransactionId)
#define s6_addr16 __in6_u.__u6_addr16
#define ILL_COPROC ILL_COPROC
#define HAVE_SRANDOM 1
#define RENAME_NOREPLACE (1 << 0)
#define F_GCD_INT4_INT4 5044
#define F_TSQUERY_PHRASE_TSQUERY_TSQUERY 5003
#define ERRCODE_INVALID_GRANT_OPERATION MAKE_SQLSTATE('0','L','P','0','1')
#define F_PG_STAT_GET_AUTOANALYZE_COUNT 3057
#define F_TIMEOFDAY 274
#define DATEORDER_DMY 1
#define PG_RETURN_UINT64(x) return UInt64GetDatum(x)
#define F_EXTRACT_TEXT_TIME 6200
#define F_LENGTH_BYTEA_NAME 1713
#define FD_H 
#define F_INT4_ACCUM_INV 3568
#define F_PG_JIT_AVAILABLE 315
#define s6_addr32 __in6_u.__u6_addr32
#define F_DOMAIN_RECV 2598
#define F_MAX_TIMETZ 2124
#define ClassOidIndexId 2662
#define F_INET_GIST_PICKSPLIT 3558
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define F_PG_AVAILABLE_EXTENSIONS 3082
#define __O_LARGEFILE 0
#define NIL ((List *) NULL)
#define _POSIX_NAME_MAX 14
#define SCM_TXTIME SO_TXTIME
#define F_INT4AND 1898
#define F_TS_RANK_TSVECTOR_TSQUERY_INT4 3705
#define _ANSI_STDDEF_H 
#define F_REGNAMESPACESEND 4088
#define F_LTRIM_BYTEA_BYTEA 6195
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define DT_SOCK DT_SOCK
#define InvalidBackendId (-1)
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define SHMEM_INDEX_SIZE (64)
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define AttrNumberGetAttrOffset(attNum) ( AssertMacro(AttrNumberIsForUserDefinedAttr(attNum)), ((attNum) - 1) )
#define PG_RETURN_CHAR(x) return CharGetDatum(x)
#define Int64GetDatumFast(X) Int64GetDatum(X)
#define _SC_MEMLOCK _SC_MEMLOCK
#define CLOCK_BOOTTIME_ALARM 9
#define __FLT32X_HAS_INFINITY__ 1
#define XLR_BLOCK_ID_TOPLEVEL_XID 252
#define Anum_pg_type_typispreferred 9
#define F_ARRAY_UNNEST_SUPPORT 3996
#define SO_ACCEPTCONN 30
#define UINT32_WIDTH 32
#define __INT32_MAX__ 0x7fffffff
#define DatumGetObjectId(X) ((Oid) (X))
#define F_TIMESTAMPTZ_CMP_TIMESTAMP 2533
#define F_PG_STAT_GET_AUTOVACUUM_COUNT 3055
#define F_TXID_SNAPSHOT_XMAX 2946
#define __GLIBC_USE_DEPRECATED_GETS 0
#define F_POLY_OUT 348
#define O_ASYNC 020000
#define F_VARBIT_IN 1579
#define PG_RETURN_TIMESTAMPTZ(x) return TimestampTzGetDatum(x)
#define MAKE_SQLSTATE(ch1,ch2,ch3,ch4,ch5) (PGSIXBIT(ch1) + (PGSIXBIT(ch2) << 6) + (PGSIXBIT(ch3) << 12) + (PGSIXBIT(ch4) << 18) + (PGSIXBIT(ch5) << 24))
#define F_TIDLT 2791
#define _SC_NL_NMAX _SC_NL_NMAX
#define AGGSPLITOP_SKIPFINAL 0x02
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define F_FLOAT8RECV 2426
#define F_TO_ASCII_TEXT 1845
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define REGROLEOID 4096
#define Anum_pg_class_reloptions 32
#define PG_DETOAST_DATUM_PACKED(datum) pg_detoast_datum_packed((struct varlena *) DatumGetPointer(datum))
#define F_TIME_TIMETZ 2046
#define F_DUPFD 0
#define Anum_pg_class_relacl 31
#define F_MIN_OID 2134
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define F_MAX_FLOAT4 2119
#define __FLT128_IS_IEC_60559__ 2
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define F_SPG_BOX_QUAD_LEAF_CONSISTENT 5016
#define ResetPerTupleExprContext(estate) do { if ((estate)->es_per_tuple_exprcontext) ResetExprContext((estate)->es_per_tuple_exprcontext); } while (0)
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define F_REGPROCEDURESEND 2447
#define F_HASHBPCHAREXTENDED 972
#define F_TIMESTAMP_NE_DATE 2369
#define IPV6_FREEBIND 78
#define SHUT_RDWR SHUT_RDWR
#define F_BPCHAR_BPCHAR_INT4_BOOL 668
#define OID_MAX UINT_MAX
#define _POSIX_LOGIN_NAME_MAX 9
#define FPSIMD_MAGIC 0x46508001
#define F_CHR 1621
#define pg_attribute_packed() __attribute__((packed))
#define ATTRIBUTE_IDENTITY_ALWAYS 'a'
#define _XBS5_ILP32_OFF32 -1
#define _POSIX_SIGQUEUE_MAX 32
#define FNDELAY O_NDELAY
#define ProcArrayLock (&MainLWLockArray[4].lock)
#define __FLT64X_MIN_10_EXP__ (-4931)
#define INT64_C(c) c ## L
#define F_PG_STAT_GET_CHECKPOINT_WRITE_TIME 3160
#define ADJ_MICRO 0x1000
#define TYPALIGN_INT 'i'
#define dlist_tail_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) dlist_tail_element_off(lhead, offsetof(type, membername))))
#define ItemPointerCopy(fromPointer,toPointer) ( AssertMacro(PointerIsValid(toPointer)), AssertMacro(PointerIsValid(fromPointer)), *(toPointer) = *(fromPointer) )
#define TupleDescAttr(tupdesc,i) (&(tupdesc)->attrs[(i)])
#define PGERROR 21
#define HeapTupleIsHeapOnly(tuple) HeapTupleHeaderIsHeapOnly((tuple)->t_data)
#define __attribute_const__ __attribute__ ((__const__))
#define ERRCODE_FDW_REPLY_HANDLE MAKE_SQLSTATE('H','V','0','0','K')
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define F_PG_STAT_GET_XACT_TUPLES_FETCHED 3039
#define DO_AGGSPLIT_COMBINE(as) (((as) & AGGSPLITOP_COMBINE) != 0)
#define F_ANY_OUT 2295
#define F_MAKE_TIMESTAMPTZ_INT4_INT4_INT4_INT4_INT4_FLOAT8 3462
#define PERFORM_DELETION_CONCURRENTLY 0x0002
#define F_MODE 3984
#define F_PATH_N_GT 983
#define pg_restrict __restrict__
#define ___int_wchar_t_h 
#define F_REGDICTIONARYSEND 3774
#define F_BPCHARICREGEXEQ 1656
#define __GCC_IEC_559_COMPLEX 2
#define F_BRIN_MINMAX_MULTI_SUMMARY_IN 4638
#define HAVE_DECL_POSIX_FADVISE 1
#define HAVE_SYS_TYPES_H 1
#define XLOG_XACT_COMMIT 0x00
#define F_INT8_FLOAT4 653
#define Anum_pg_constraint_conffeqop 23
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ERRCODE_T_R_STATEMENT_COMPLETION_UNKNOWN MAKE_SQLSTATE('4','0','0','0','3')
#define EXPANDED_POINTER_SIZE (VARHDRSZ_EXTERNAL + sizeof(varatt_expanded))
#define __SAFE_TYPES_H__ 
#define PF_ISDN 34
#define TSM_HANDLEROID 3310
#define F_PG_STAT_GET_TUPLES_FETCHED 1930
#define F_XID8GT 5035
#define F_JSONPATH_RECV 4002
#define F_TO_REGCLASS 3495
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define F_DATE_GT 1089
#define POSIX_FADV_WILLNEED 3
#define F_ISHORIZONTAL_POINT_POINT 1407
#define RelationIsSecurityView(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options ? ((ViewOptions *) (relation)->rd_options)->security_barrier : false)
#define XLOG_XACT_INVALIDATIONS 0x60
#define BlockNumberIsValid(blockNumber) ((bool) ((BlockNumber) (blockNumber) != InvalidBlockNumber))
#define F_ICLIKESEL 1814
#define PG_HAVE_ATOMIC_FETCH_ADD_U32 
#define TRANSAM_H 
#define ERRCODE_INVALID_CURSOR_DEFINITION MAKE_SQLSTATE('4','2','P','1','1')
#define INT8OID 20
#define F_PG_TOTAL_RELATION_SIZE 2286
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define F_TO_CHAR_INT8_TEXT 1774
#define MSG_CTRUNC MSG_CTRUNC
#define UINT64CONST(x) (x ##UL)
#define IPPROTO_UDP IPPROTO_UDP
#define F_INT2VECTORSEND 2411
#define MSG_PROXY MSG_PROXY
#define HSEARCH_H 
#define F_PG_ADVISORY_LOCK_SHARED_INT4_INT4 2887
#define F_TEXT_CHAR 946
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define F_POINT_BELOW 134
#define TABLE_INSERT_NO_LOGICAL 0x0008
#define Anum_pg_class_relispopulated 25
#define PG_RETURN_NAME(x) return NameGetDatum(x)
#define STDERR_FILENO 2
#define F_XML_RECV 2898
#define F_POLY_CONTAINED 345
#define Int16GetDatum(X) ((Datum) (X))
#define F_INT8RANGE_SUBDIFF 3923
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define F_NUMERIC_POLY_STDDEV_SAMP 3393
#define Anum_pg_attribute_attnum 6
#define F_ENUM_NE 3509
#define __FLT64_MAX_10_EXP__ 308
#define pg_ntoh16(x) pg_bswap16(x)
#define F_PG_GET_CONSTRAINTDEF_OID_BOOL 2508
#define PRIdLEAST32 "d"
#define DLIST_STATIC_INIT(name) {{&(name).head, &(name).head}}
#define F_PG_REPLICATION_ORIGIN_CREATE 6003
#define F_BOX_OVERLAP 125
#define F_NUMERIC_OUT 1702
#define PG_HAVE_ATOMIC_FETCH_ADD_U64 
#define F_ANYCOMPATIBLE_IN 5086
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define Anum_pg_attribute_attndims 7
#define ERRCODE_NON_UNIQUE_KEYS_IN_A_JSON_OBJECT MAKE_SQLSTATE('2','2','0','3','7')
#define HeapScanIsValid(scan) PointerIsValid(scan)
#define F_TEXT_NAME 406
#define ERRCODE_UNTERMINATED_C_STRING MAKE_SQLSTATE('2','2','0','2','4')
#define Anum_pg_type_typalign 23
#define F_XML_SEND 2899
#define DatumGetTimestamp(X) ((Timestamp) DatumGetInt64(X))
#define AF_SECURITY PF_SECURITY
#define STA_PPSTIME 0x0004
#define HAVE_SYMLINK 1
#define F_VAR_SAMP_INT2 2643
#define F_VAR_SAMP_INT8 2641
#define TYPTYPE_RANGE 'r'
#define pg_ntoh32(x) pg_bswap32(x)
#define SO_DETACH_BPF SO_DETACH_FILTER
#define F_GTSVECTOR_SAME 3652
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define HAVE_STRTOULL 1
#define SI_QUEUE SI_QUEUE
#define UINTMAX_WIDTH 64
#define F_FACTORIAL 1376
#define F_BRIN_DESUMMARIZE_RANGE 4014
#define F_JSONB_BUILD_ARRAY_ 3272
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define VARATT_EXTERNAL_GET_COMPRESS_METHOD(toast_pointer) ((toast_pointer).va_extinfo >> VARLENA_EXTSIZE_BITS)
#define ERRCODE_DUPLICATE_PSTATEMENT MAKE_SQLSTATE('4','2','P','0','5')
#define PG_VERSION_16 160000
#define Anum_pg_index_indisprimary 6
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define IP_MTU_DISCOVER 10
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define _DIRENT_HAVE_D_TYPE 
#define Anum_pg_constraint_conrelid 8
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define IP_MINTTL 21
#define F_BPCHARICREGEXNE 1657
#define AF_RXRPC PF_RXRPC
#define F_ARRAY_POSITION_ANYCOMPATIBLEARRAY_ANYCOMPATIBLE 3277
#define F_MULTIRANGE_AFTER_RANGE 4262
#define _SS_SIZE 128
#define PRIiFAST32 __PRIPTR_PREFIX "i"
#define Anum_pg_constraint_conkey 19
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define __USE_XOPEN2K 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define FDW_HANDLEROID 3115
#define F_REGCLASSRECV 2452
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define ERRCODE_UNDEFINED_FUNCTION MAKE_SQLSTATE('4','2','8','8','3')
#define pg_ntoh64(x) pg_bswap64(x)
#define F_TXID_STATUS 3360
#define F_MOD_INT4_INT4 941
#define _SC_2_VERSION _SC_2_VERSION
#define F_VAR_POP_INT2 2720
#define __lldiv_t_defined 1
#define F_TXID_CURRENT_SNAPSHOT 2944
#define F_PG_CONVERSION_IS_VISIBLE 2093
#define CIDROID 650
#define F_BRIN_BLOOM_ADD_VALUE 4592
#define FIELDNO_NULLABLE_DATUM_DATUM 0
#define Anum_pg_class_relforcerowsecurity 24
#define elog(elevel,...) ereport(elevel, errmsg_internal(__VA_ARGS__))
#define pairingheap_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define SAFE_STR_MIN_LOWERCASE ( 2 )
#define PACKAGE_BUGREPORT "pgsql-bugs@lists.postgresql.org"
#define WL_SOCKET_CONNECTED WL_SOCKET_WRITEABLE
#define F_BITNOT 1676
#define __LDBL_HAS_DENORM__ 1
#define EPIPE 32
#define TSRANGEOID 3908
#define F_INT2_ACCUM_INV 3567
#define F_MULTIRANGE_CONTAINED_BY_MULTIRANGE 4254
#define F_PG_LS_DIR_TEXT 2625
#define ACL_ALL_RIGHTS_SEQUENCE (ACL_USAGE|ACL_SELECT|ACL_UPDATE)
#define XACT_XINFO_HAS_RELFILENODES (1U << 2)
#define F_TSQUERY_EQ 3664
#define TablespaceCreateLock (&MainLWLockArray[19].lock)
#define F_PG_SNAPSHOT_SEND 5058
#define FALLOC_FL_INSERT_RANGE 0x20
#define F_TIDLARGER 2795
#define TYPTYPE_PSEUDO 'p'
#define __FD_SETSIZE 1024
#define F_BINARY_UPGRADE_SET_NEXT_PG_ENUM_OID 3589
#define SOMAXCONN 4096
#define F_STRING_TO_TABLE_TEXT_TEXT 6160
#define lfourth(l) lfirst(list_nth_cell(l, 3))
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define F_NUMERIC_SUPPORT 3157
#define SI_USER SI_USER
#define DEVNULL "/dev/null"
#define EBADMSG 74
#define F_POLY_OVERBELOW 2567
#define __USE_POSIX199506 1
#define ItemIdGetOffset(itemId) ((itemId)->lp_off)
#define F_INT28MUL 943
#define F_CONCAT 3058
#define AssertPendingSyncs_RelationCache() do {} while (0)
#define F_PG_CONF_LOAD_TIME 2034
#define F_PATH_CONTAIN_PT 1426
#define F_ARRAY_NDIMS 748
#define F_POINT_DIV 1444
#define __INT_LEAST32_MAX__ 0x7fffffff
#define F_MULTIRANGE_AFTER_MULTIRANGE 4263
#define CLD_CONTINUED CLD_CONTINUED
#define PG_GETARG_TIMESTAMPTZ(n) DatumGetTimestampTz(PG_GETARG_DATUM(n))
#define PG_VERSION_CONSTANTS 
#define F_JSON_ARRAY_ELEMENTS 3955
#define ERRCODE_INVALID_TRANSACTION_TERMINATION MAKE_SQLSTATE('2','D','0','0','0')
#define F_EXTRACT_TEXT_DATE 6199
#define TIMEOID 1083
#define EBFONT 59
#define F_INT2IN 38
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define F_INT4RANGE_INT4_INT4_TEXT 3841
#define F_PHRASETO_TSQUERY_TEXT 5001
#define F_TIME_SUPPORT 3944
#define __DBL_MAX_EXP__ 1024
#define F_SHELL_OUT 2399
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define PARAM_FLAG_CONST 0x0001
#define HAVE_STRSIGNAL 1
#define __WCHAR_WIDTH__ 32
#define SEGV_ADIDERR SEGV_ADIDERR
#define __SAFE_LIB_H__ 
#define MinCommandIdAttributeNumber (-3)
#define _BITS_WCHAR_H 1
#define IP_RECVERR 11
#define TABLE_METADATA_FIELDS 7
#define ERRCODE_SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED MAKE_SQLSTATE('2','5','0','0','7')
#define RelationGetRelid(relation) ((relation)->rd_id)
#define F_JSON_EXTRACT_PATH_TEXT 3953
#define INT_LEAST8_MIN (-128)
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define ETOOMANYREFS 109
#define CURSOR_OPT_CUSTOM_PLAN 0x0400
#define _POSIX_TZNAME_MAX 6
#define F_GTSVECTOR_DECOMPRESS 3649
#define __itimerspec_defined 1
#define _POSIX_SSIZE_MAX 32767
#define pg_pwrite pwrite
#define F_CIRCLE_ABOVE 1461
#define INDOPTION_NULLS_FIRST 0x0002
#define F_LO_LSEEK 956
#define MCAST_INCLUDE 1
#define F_PG_STAT_GET_XACT_FUNCTION_SELF_TIME 3048
#define F_GIST_BOX_CONSISTENT 2578
#define SCNdFAST16 __PRIPTR_PREFIX "d"
#define IPV6_UNICAST_HOPS 16
#define F_BRIN_MINMAX_MULTI_DISTANCE_TIMESTAMP 4637
#define COMMERROR LOG_SERVER_ONLY
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define F_UPPER_INC_ANYMULTIRANGE 4239
#define ENABLE_GSS 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define F_TIME_SMALLER 1378
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define sl_default_handler ignore_handler_s
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define EXFULL 54
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define SCNdFAST32 __PRIPTR_PREFIX "d"
#define _T_WCHAR 
#define AF_AX25 PF_AX25
#define F_BINARY_UPGRADE_SET_NEXT_MULTIRANGE_PG_TYPE_OID 4390
#define ATTNUM_H 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define F_TIMESTAMPTZ_LT_DATE 2377
#define CURSOR_OPT_GENERIC_PLAN 0x0200
#define _SC_BARRIERS _SC_BARRIERS
#define VERSION_COMPAT_H 
#define ACL_EXECUTE_CHR 'X'
#define F_PG_NOTIFY 3036
#define F_INTERVAL_PL_TIMESTAMP 2548
#define F_INT4MULTIRANGE_ 4280
#define st_atime st_atim.tv_sec
#define PARTITION_STRATEGY_LIST 'l'
#define __stub___compat_uselib 
#define SHAREDTUPLESTORE_H 
#define Anum_pg_class_relchecks 19
#define dgettext(domainname,msgid) dcgettext (domainname, msgid, LC_MESSAGES)
#define _POSIX_CPUTIME 0
#define __ARM_ALIGN_MAX_PWR 28
#define PageSetLSN(page,lsn) PageXLogRecPtrSet(((PageHeader) (page))->pd_lsn, lsn)
#define __USE_POSIX 1
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define Anum_pg_class_relpartbound 33
#define SearchSysCacheExists3(cacheId,key1,key2,key3) SearchSysCacheExists(cacheId, key1, key2, key3, 0)
#define SCNdFAST64 __PRI64_PREFIX "d"
#define Anum_pg_class_reltuples 11
#define FIELDNO_NULLABLE_DATUM_ISNULL 1
#define RelationNeedsWAL(relation) (RelationIsPermanent(relation) && (XLogIsNeeded() || (relation->rd_createSubid == InvalidSubTransactionId && relation->rd_firstRelfilenodeSubid == InvalidSubTransactionId)))
#define __f32x(x) x ##f32x
#define PG_CRC32C_H 
#define F_DATE_EQ 1086
#define ERRCODE_INSUFFICIENT_PRIVILEGE MAKE_SQLSTATE('4','2','5','0','1')
#define ERRCODE_QUERY_CANCELED MAKE_SQLSTATE('5','7','0','1','4')
#define F_TIMESTAMP_DATE_TIME 2025
#define F_UNNEST_TSVECTOR 3322
#define RELPERSISTENCE_TEMP 't'
#define WINT_MAX (4294967295u)
#define F_TSQUERYIN 3612
#define F_NUMERIC_ADD 1724
#define F_RANGE_OVERRIGHT 3866
#define UINTPTR_MAX (18446744073709551615UL)
#define F_NAMEICLIKE 1635
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#define NETDB_INTERNAL -1
#define linitial_oid(l) lfirst_oid(list_nth_cell(l, 0))
#define F_LENGTH_TSVECTOR 3711
#define HTUP_DETAILS_H 
#define LC_MONETARY __LC_MONETARY
#define __ASM_GENERIC_POSIX_TYPES_H 
#define F_TABLE_AM_HANDLER_OUT 268
#define F_RECORD_RECV 2402
#define __USE_GNU 1
#define HEAP_XMAX_INVALID 0x0800
#define F_CASHSMALLER 899
#define __FLT_MIN_EXP__ (-125)
#define Anum_pg_constraint_contypid 9
#define JULIAN_MINMONTH (11)
#define F_SCALARGTJOINSEL 108
#define lsecond_oid(l) lfirst_oid(list_nth_cell(l, 1))
#define F_NUMERIC_VAR_POP 2514
#define WEXITED 4
#define F_TEXT_INET 730
#define IPV6_V6ONLY 26
#define F_GTSQUERY_COMPRESS 3695
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define REGPROCEDUREOID 2202
#define IP_OPTIONS 4
#define PIV_LOG_WARNING (1 << 0)
#define AF_PPPOX PF_PPPOX
#define F_BPCHARREGEXNE 1659
#define F_SET_MASKLEN_CIDR_INT4 635
#define IPV6_RECVRTHDR 56
#define HeapTupleHeaderSetHotUpdated(tup) ( (tup)->t_infomask2 |= HEAP_HOT_UPDATED )
#define F_DEGREES 1608
#define F_INT28EQ 1850
#define __UINT8_TYPE__ unsigned char
#define F_GTSQUERY_CONSISTENT_INTERNAL_INTERNAL_INT4_OID_INTERNAL 3793
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define HAVE_SYS_IPC_H 1
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define HAVE_RL_COMPLETION_SUPPRESS_QUOTE 1
#define AllocSizeIsValid(size) ((Size) (size) <= MaxAllocSize)
#define EKEYREJECTED 129
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define F_MACADDR8_GT 4116
#define HAVE_GSSAPI_GSSAPI_H 1
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define F_ENUM_EQ 3508
#define _BSD_SIZE_T_ 
#define EQ_CRC32C(c1,c2) ((c1) == (c2))
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define F_PATH_LENGTH 987
#define CHECKPOINT_IMMEDIATE 0x0004
#define _LOCALE_H 1
#define MAXALIGN_DOWN(LEN) TYPEALIGN_DOWN(MAXIMUM_ALIGNOF, (LEN))
#define __INT_FAST64_TYPE__ long int
#define _NSIG (__SIGRTMAX + 1)
#define get_pathtarget_sortgroupref(target,colno) ((target)->sortgrouprefs ? (target)->sortgrouprefs[colno] : (Index) 0)
#define MCXT_ALLOC_ZERO 0x04
#define PG_RETURN_BYTEA_P(x) PG_RETURN_POINTER(x)
#define ACL_MODECHG_DEL 2
#define F_PG_STAT_RESET_REPLICATION_SLOT 6170
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define SHARDINTERVAL_UTILS_H_ 
#define __HAVE_DISTINCT_FLOAT32 0
#define ERRCODE_CONNECTION_EXCEPTION MAKE_SQLSTATE('0','8','0','0','0')
#define F_JSONB_POPULATE_RECORD 3209
#define F_XML_IS_WELL_FORMED_CONTENT 3053
#define F_ENUM_GT 3511
#define F_PG_CREATE_LOGICAL_REPLICATION_SLOT 3786
#define WINT_MIN (0u)
#define TSQUERYARRAYOID 3645
#define MaxSizeOfXLogRecordBlockHeader (SizeOfXLogRecordBlockHeader + SizeOfXLogRecordBlockImageHeader + SizeOfXLogRecordBlockCompressHeader + sizeof(RelFileNode) + sizeof(BlockNumber))
#define __STRINGS_FORTIFIED 1
#define F_INTERVALTYPMODOUT 2904
#define F_CASH_OUT 887
#define SCNxFAST32 __PRIPTR_PREFIX "x"
#define F_PG_STAT_GET_SNAPSHOT_TIMESTAMP 3788
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define REL_HAS_ALL_PART_PROPS(rel) ((rel)->part_scheme && (rel)->boundinfo && (rel)->nparts > 0 && (rel)->part_rels && (rel)->partexprs && (rel)->nullable_partexprs)
#define INT64_FORMAT "%" INT64_MODIFIER "d"
#define F_HAS_LANGUAGE_PRIVILEGE_OID_TEXT_TEXT 2264
#define IPV6_MTU 24
#define F_RANGE_AGG 4301
#define __mbstate_t_defined 1
#define TABLE_H 
#define IPV6_RECVDSTOPTS 58
#define SIG_ATOMIC_WIDTH 32
#define F_TO_REGOPER 3492
#define IPPROTO_MTP IPPROTO_MTP
#define F_ENUM_IN 3506
#define F_JSONB_AGG 3267
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define __USE_XOPEN2KXSI 1
#define _XOPEN_LEGACY 1
#define F_TS_HEADLINE_REGCONFIG_JSONB_TSQUERY_TEXT 4201
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __HAVE_DISTINCT_FLOAT64 0
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define F_PG_SNAPSHOT_XMAX 5063
#define F_FLOAT4_FLOAT8 312
#define DatumGetTimestampTz(X) ((TimestampTz) DatumGetInt64(X))
#define __ASM_GENERIC_SOCKET_H 
#define BTLessStrategyNumber 1
#define CommandIdGetDatum(X) ((Datum) (X))
#define F_JSON_TO_TSVECTOR_REGCONFIG_JSON_JSONB 4216
#define F_HAS_COLUMN_PRIVILEGE_NAME_TEXT_INT2_TEXT 3013
#define __USE_UNIX98 1
#define F_FLOAT8UM 220
#define F_XPATH_EXISTS_TEXT_XML 3050
#define F_AREASEL 139
#define CLOCK_REALTIME_ALARM 8
#define SpinLockAcquire(lock) S_LOCK(lock)
#define PG_END_TRY() } if (_do_rethrow) PG_RE_THROW(); PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack; } while (0)
#define DatumGetVarCharPSlice(X,m,n) ((VarChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define MaxCommandIdAttributeNumber (-5)
#define TZDISP_LIMIT ((MAX_TZDISP_HOUR + 1) * SECS_PER_HOUR)
#define F_SEAL_SEAL 0x0001
#define InvalidTransactionId ((TransactionId) 0)
#define F_ENUM_LT 3510
#define F_LPAD_TEXT_INT4 879
#define PG_COPYRES_EVENTS 0x04
#define F_PG_EVENT_TRIGGER_DDL_COMMANDS 4568
#define IPV6_RECVERR 25
#define SET_LOCKTAG_RELATION(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define AssertState(condition) ((void)true)
#define SIGNAL_ARGS int postgres_signal_arg
#define F_INT8DEC_ANY 3547
#define CHAR_MAX UCHAR_MAX
#define ScanDirectionIsNoMovement(direction) ((bool) ((direction) == NoMovementScanDirection))
#define _INTTYPES_H 1
#define F_POLY_OVERLEFT 342
#define F_REGPROCSEND 2445
#define FPE_INTDIV FPE_INTDIV
#define SEEK_DATA 3
#define IP_RECVTOS 13
#define F_UPPER_TEXT 871
#define SIZE_WIDTH __WORDSIZE
#define F_BIT_AND_BIT 2242
#define F_PG_STAT_GET_DB_BLK_WRITE_TIME 2845
#define F_INET_SAME_FAMILY 4071
#define F_DENSE_RANK_FINAL 3993
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define F_DATE_GE_TIMESTAMP 2342
#define F_HASH_MULTIRANGE_EXTENDED 4279
#define ERRCODE_L_E_INVALID_SPECIFICATION MAKE_SQLSTATE('0','F','0','0','1')
#define F_RANGE_ADJACENT_MULTIRANGE 4255
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define F_PG_CURRENT_WAL_LSN 2849
#define COLUMNAR_POSTSCRIPT_SIZE_MAX 256
#define PG_NARGS() (fcinfo->nargs)
#define ACL_CREATE_CHR 'C'
#define INNER_VAR 65000
#define TRAP_HWBKPT TRAP_HWBKPT
#define F_HASHCHAREXTENDED 446
#define EXECDESC_H 
#define F_RANGE_MINUS 3869
#define HeapTupleHeaderGetRawXmax(tup) ( (tup)->t_choice.t_heap.t_xmax )
#define __REGISTER_PREFIX__ 
#define WORKER_DEFAULT_CLUSTER "default"
#define RelationGetToastTupleTarget(relation,defaulttarg) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->toast_tuple_target : (defaulttarg))
#define PF_ROSE 11
#define OIDARRAYOID 1028
#define HEAP_UPDATED 0x2000
#define NUM_AUXILIARY_PROCS 5
#define BOOLOID 16
#define F_INT2VECTORIN 40
#define InvalidAttrNumber 0
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define VARATT_IS_EXTERNAL_NON_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && !VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SET_VARTAG_1B_E(PTR,tag) (((varattrib_1b_e *) (PTR))->va_header = 0x01, ((varattrib_1b_e *) (PTR))->va_tag = (tag))
#define _PC_MAX_CANON _PC_MAX_CANON
#define CATVERSION_H 
#define F_PG_SNAPSHOT_XMIN 5062
#define F_NUMERIC_AVG 1837
#define F_INT2_INT8 714
#define LMGR_H 
#define F_PG_GET_OBJECT_ADDRESS 3954
#define __USE_POSIX2 1
#define IP_TRANSPARENT 19
#define F_BOX_SEND 2485
#define XLogRecGetData(decoder) ((decoder)->main_data)
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define PG_TEMP_FILE_PREFIX "pgsql_tmp"
#define F_PG_COLUMN_COMPRESSION 2121
#define F_AREA_PATH 979
#define AARR_HASNULL(a) (VARATT_IS_EXPANDED_HEADER(a) ? ((a)->xpn.dvalues != NULL ? (a)->xpn.dnulls != NULL : ARR_HASNULL((a)->xpn.fvalue)) : ARR_HASNULL((ArrayType *) (a)))
#define F_REGCLASS 1079
#define F_UNKNOWNIN 109
#define _POSIX_V7_ILP32_OFF32 -1
#define F_INET_CLIENT_ADDR 2196
#define F_JSON_TYPEOF 3968
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define F_PG_SNAPSHOT_RECV 5057
#define F_WEBSEARCH_TO_TSQUERY_TEXT 5009
#define F_BRIN_MINMAX_MULTI_DISTANCE_PG_LSN 4633
#define F_NTH_VALUE 3114
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define F_OIDLT 716
#define ERRCODE_INVALID_ROW_COUNT_IN_LIMIT_CLAUSE MAKE_SQLSTATE('2','2','0','1','W')
#define F_FMGR_INTERNAL_VALIDATOR 2246
#define CHAR_MIN 0
#define __FLT_MANT_DIG__ 24
#define XLogRecHasBlockRef(decoder,block_id) ((decoder)->blocks[block_id].in_use)
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define GET_VXID_FROM_PGPROC(vxid,proc) ((vxid).backendId = (proc).backendId, (vxid).localTransactionId = (proc).lxid)
#define TransactionIdGetDatum(X) ((Datum) (X))
#define __VERSION__ "11.3.0"
#define SCNoLEAST8 "hho"
#define F_SETWEIGHT_TSVECTOR_CHAR 3624
#define F_RANGE_GIST_PENALTY 3879
#define F_BPCHAR_NAME 408
#define __IOV_MAX 1024
#define TXID_SNAPSHOTOID 2970
#define F_IN_RANGE_FLOAT4_FLOAT4_FLOAT8_BOOL_BOOL 4140
#define IP_PKTINFO 8
#define F_IN_RANGE_TIMESTAMP_TIMESTAMP_INTERVAL_BOOL_BOOL 4134
#define F_TO_CHAR_INT4_TEXT 1773
#define ACL_CONNECT (1<<11)
#define INT64CONST(x) (x ##L)
#define USE_XSD_DATES 4
#define _SYS_CDEFS_H 1
#define INDEX_MAX_KEYS 32
#define F_INT2OUT 39
#define F_HAS_TYPE_PRIVILEGE_TEXT_TEXT 3142
#define F_RIGHT 3061
#define F_JSONB_IN 3806
#define F_STDDEV_INT2 2156
#define WORKER_APPLY_SHARD_DDL_COMMAND_WITHOUT_SCHEMA "SELECT worker_apply_shard_ddl_command (" UINT64_FORMAT ", %s)"
#define RENAME_WHITEOUT (1 << 2)
#define PG_RETURN_OID(x) return ObjectIdGetDatum(x)
#define F_ON_PPATH 137
#define Anum_pg_index_indisclustered 9
#define MaxTupleAttributeNumber 1664
#define F_SPG_QUAD_LEAF_CONSISTENT 4022
#define HEAP_HASNULL 0x0001
#define HAVE_SYS_SEM_H 1
#define HeapTupleHeaderGetRawXmin(tup) ( (tup)->t_choice.t_heap.t_xmin )
#define F_SETSEED 1599
#define F_SUBSTRING_TEXT_TEXT_TEXT 2074
#define SO_ATTACH_BPF 50
#define PG_PORT_H 
#define _POSIX_VERSION 200809L
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define HEAP_DEFAULT_FILLFACTOR 100
#define RTSIG_MAX 32
#define INT_FAST8_WIDTH 8
#define F_STDDEV_INT8 2154
#define __INT_WCHAR_T_H 
#define F_TO_TSQUERY_TEXT 3750
#define TwoPhaseStateLock (&MainLWLockArray[18].lock)
#define F_DATE_CMP 1092
#define TRANSACTION_STATUS_IN_PROGRESS 0x00
#define _ALLOCA_H 1
#define F_MIN_TID 2798
#define copyObject(obj) ((typeof(obj)) copyObjectImpl(obj))
#define CREATE_SEQUENCE_COMMAND "CREATE SEQUENCE IF NOT EXISTS %s AS %s INCREMENT BY " INT64_FORMAT " MINVALUE " INT64_FORMAT " MAXVALUE " INT64_FORMAT " START WITH " INT64_FORMAT " CACHE " INT64_FORMAT " %sCYCLE"
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define FIELDNO_EXPRCONTEXT_AGGNULLS 9
#define __bitwise __bitwise__
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define ERRCODE_INVALID_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','0','C')
#define F_POINT_SUB 1442
#define F_HASHFLOAT8EXTENDED 444
#define ENOTSOCK 88
#define PG_DIAG_STATEMENT_POSITION 'P'
#define O_RDWR 02
#define ERRCODE_INVALID_ESCAPE_SEQUENCE MAKE_SQLSTATE('2','2','0','2','5')
#define _PTRDIFF_T_ 
#define TSTZRANGEOID 3910
#define _T_PTRDIFF_ 
#define HeapTupleHeaderClearHeapOnly(tup) ( (tup)->t_infomask2 &= ~HEAP_ONLY_TUPLE )
#define F_INTERVALTYPMODIN 2903
#define F_PG_STAT_GET_DB_BLOCKS_FETCHED 1944
#define F_BRIN_BLOOM_SUMMARY_OUT 4597
#define F_GTSQUERY_PICKSPLIT 3697
#define FPE_CONDTRAP FPE_CONDTRAP
#define SOL_NFC 280
#define ARR_OVERHEAD_NONULLS(ndims) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims))
#define TEXTOID 25
#define F_FLOAT8_REGR_ACCUM 2806
#define F_NUMERICTYPMODOUT 2918
#define F_MULTIRANGE_BEFORE_RANGE 4259
#define ERRCODE_NULL_VALUE_NO_INDICATOR_PARAMETER MAKE_SQLSTATE('2','2','0','0','2')
#define F_UUID_OUT 2953
#define BOXOID 603
#define __INTMAX_C(c) c ## L
#define XACT_COMPLETION_UPDATE_RELCACHE_FILE (1U << 30)
#define F_CIRCLE_BELOW 1460
#define CLOG_H 
#define ERRCODE_INVALID_COLUMN_REFERENCE MAKE_SQLSTATE('4','2','P','1','0')
#define F_FLOAT84LE 308
#define INT4ARRAYOID 1007
#define F_BRIN_MINMAX_MULTI_ADD_VALUE 4617
#define VARSIZE_EXTERNAL(PTR) (VARHDRSZ_EXTERNAL + VARTAG_SIZE(VARTAG_EXTERNAL(PTR)))
#define NormalTransactionIdPrecedes(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) < 0)
#define XLR_CHECK_CONSISTENCY 0x02
#define F_DIST_PATHP 421
#define __FLT32_MANT_DIG__ 24
#define F_MIC_TO_WIN866 4309
#define RTNotEqualStrategyNumber 19
#define _SYS_SIZE_T_H 
#define XidFromFullTransactionId(x) ((uint32) (x).value)
#define F_NUMERIC_AVG_DESERIALIZE 2741
#define SVE_VQ_MAX __SVE_VQ_MAX
#define WAIT_EVENT_SET_INDEX_FAILED -2
#define ERRCODE_INDETERMINATE_COLLATION MAKE_SQLSTATE('4','2','P','2','2')
#define PRIX8 "X"
#define SHRT_WIDTH 16
#define F_MAX_INT2 2117
#define __STDC_IEC_60559_BFP__ 201404L
#define __SIZE_T__ 
#define SO_ATTACH_REUSEPORT_EBPF 52
#define IS_DIR_SEP(ch) ((ch) == '/')
#define F_GINQUERYARRAYEXTRACT 2774
#define si_value _sifields._rt.si_sigval
#define F_HAS_COLUMN_PRIVILEGE_OID_OID_TEXT_TEXT 3018
#define IP_PASSSEC 18
#define IPPORT_RESERVED 1024
#define SEEK_HOLE 4
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define F_LSEG_OUT 120
#define F_DATE_TIMESTAMP 2029
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define AI_ALL 0x0010
#define F_JSON_TO_RECORD 3204
#define F_XML_IS_WELL_FORMED_DOCUMENT 3052
#define TIMEARRAYOID 1183
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define F_NAMENLIKE 859
#define F_PG_STAT_GET_DB_SESSION_TIME 6185
#define MSG_SYN MSG_SYN
#define F_LO_GET_OID_INT8_INT4 3459
#define NL_TEXTMAX INT_MAX
#define ELOOP 40
#define F_DATE_PART_TEXT_TIME 1385
#define F_NETWORK 683
#define BGWORKER_BYPASS_ALLOWCONN 1
#define F_PLAINTO_TSQUERY_REGCONFIG_TEXT 3747
#define WL_SOCKET_MASK (WL_SOCKET_READABLE | WL_SOCKET_WRITEABLE | WL_SOCKET_CONNECTED)
#define IS_SIMPLE_REL(rel) ((rel)->reloptkind == RELOPT_BASEREL || (rel)->reloptkind == RELOPT_OTHER_MEMBER_REL)
#define __FLT128_HAS_DENORM__ 1
#define F_SETFD 2
#define _BITS_TIME_H 1
#define F_IN_RANGE_TIME_TIME_INTERVAL_BOOL_BOOL 4137
#define F_XPATH_TEXT_XML 2932
#define _POSIX_RTSIG_MAX 8
#define RTRightStrategyNumber 5
#define __off64_t_defined 
#define ERRCODE_INVALID_ROLE_SPECIFICATION MAKE_SQLSTATE('0','P','0','0','0')
#define __F_GETSIG 11
#define PageSetHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags |= PD_HAS_FREE_LINES)
#define PG_ATTRIBUTEARRAYOID 270
#define F_FLOAT4RECV 2424
#define F_CIRCLE_CONTAIN 1453
#define F_NUMERIC_CMP 1769
#define __ORDER_PDP_ENDIAN__ 3412
#define _POSIX_TIMERS 200809L
#define GUC_DISALLOW_IN_FILE 0x0040
#define F_OVERLAY_BIT_BIT_INT4 3031
#define DT_NOBEGIN PG_INT64_MIN
#define FunctionCall1(flinfo,arg1) FunctionCall1Coll(flinfo, InvalidOid, arg1)
#define FunctionCall2(flinfo,arg1,arg2) FunctionCall2Coll(flinfo, InvalidOid, arg1, arg2)
#define FunctionCall4(flinfo,arg1,arg2,arg3,arg4) FunctionCall4Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4)
#define FunctionCall5(flinfo,arg1,arg2,arg3,arg4,arg5) FunctionCall5Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define FunctionCall6(flinfo,arg1,arg2,arg3,arg4,arg5,arg6) FunctionCall6Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define FunctionCall7(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7) FunctionCall7Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define FunctionCall8(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) FunctionCall8Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define FunctionCall9(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) FunctionCall9Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define F_PG_GET_FUNCTIONDEF 2098
#define RelationIsPopulated(relation) ((relation)->rd_rel->relispopulated)
#define SVE_VQ_MIN __SVE_VQ_MIN
#define DEFAULT_SYNC_METHOD PLATFORM_DEFAULT_SYNC_METHOD
#define OIDVECTOROID 30
#define ACL_ALL_RIGHTS_TABLESPACE (ACL_CREATE)
#define F_ANYARRAY_RECV 2502
#define F_FLOAT4_NUMERIC 1745
#define F_BRIN_MINMAX_MULTI_SUMMARY_RECV 4640
#define PF_ROUTE PF_NETLINK
#define F_SUBSTRING_BIT_INT4_INT4 1680
#define GUC_REPORT 0x0010
#define __have_pthread_attr_t 1
#define F_NETWORK_SORTSUPPORT 5033
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define F_PG_SAFE_SNAPSHOT_BLOCKING_PIDS 3376
#define F_BOX_LT 129
#define ERRCODE_SQL_JSON_NUMBER_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','B')
#define F_ROUND_NUMERIC_INT4 1707
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define _ANSI_STDARG_H_ 
#define Anum_pg_attribute_attidentity 17
#define PRIuFAST8 "u"
#define F_PG_PARTITION_ANCESTORS 3425
#define F_NETWORK_SMALLER 3563
#define STDC_HEADERS 1
#define F_BRIN_BLOOM_OPTIONS 4595
#define PF_KCM 41
#define F_BOX_OVERABOVE 2564
#define F_TAN 1606
#define ERRCODE_INVALID_XML_COMMENT MAKE_SQLSTATE('2','2','0','0','S')
#define F_INT28GT 1853
#define RWH_WRITE_LIFE_MEDIUM 3
#define F_SETLK 6
#define HAVE_GETADDRINFO 1
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define VARATT_IS_1B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x01)
#define ERRCODE_IN_FAILED_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','2')
#define F_INTER_SB 373
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define F_QUERY_TO_XML 2924
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define F_ROW_SECURITY_ACTIVE_TEXT 3299
#define AF_INET PF_INET
#define F_TS_DEBUG_REGCONFIG_TEXT 6183
#define FLOAT4_FITS_IN_INT16(num) ((num) >= (float4) PG_INT16_MIN && (num) < -((float4) PG_INT16_MIN))
#define F_OVERLAY_BYTEA_BYTEA_INT4 752
#define PG_DETOAST_DATUM_COPY(datum) pg_detoast_datum_copy((struct varlena *) DatumGetPointer(datum))
#define __GNUC_VA_LIST 
#define F_INT2ABS 1253
#define HeapTupleHeaderIsHeapOnly(tup) ( ((tup)->t_infomask2 & HEAP_ONLY_TUPLE) != 0 )
#define GetSysCacheOid1(cacheId,oidcol,key1) GetSysCacheOid(cacheId, oidcol, key1, 0, 0, 0)
#define GetSysCacheOid2(cacheId,oidcol,key1,key2) GetSysCacheOid(cacheId, oidcol, key1, key2, 0, 0)
#define GetSysCacheOid3(cacheId,oidcol,key1,key2,key3) GetSysCacheOid(cacheId, oidcol, key1, key2, key3, 0)
#define GetSysCacheOid4(cacheId,oidcol,key1,key2,key3,key4) GetSysCacheOid(cacheId, oidcol, key1, key2, key3, key4)
#define O_SYNC 04010000
#define F_PG_MY_TEMP_SCHEMA 2854
#define __HAVE_DISTINCT_FLOAT128 0
#define TYPTYPE_MULTIRANGE 'm'
#define MinSizeOfXactSubxacts offsetof(xl_xact_subxacts, subxacts)
#define IPV6_PKTINFO 50
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define VARATT_IS_4B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x00)
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define OidIsValid(objectId) ((bool) ((objectId) != InvalidOid))
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define F_TIMESTAMPTZ_NE_TIMESTAMP 2532
#define FLOAT4_FITS_IN_INT32(num) ((num) >= (float4) PG_INT32_MIN && (num) < -((float4) PG_INT32_MIN))
#define F_BOX_IN 123
#define PG_MAJORVERSION "14"
#define ITEM_H 
#define SIOCGSTAMP_OLD 0x8906
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define INDEXING_H 
#define REPLICA_IDENTITY_FULL 'f'
#define HeapTupleHeaderHasExternal(tup) (((tup)->t_infomask & HEAP_HASEXTERNAL) != 0)
#define GUC_check_errhint pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errhint_string = format_elog_string
#define F_CIRCLE_SAME 1452
#define F_FLOAT8EQ 293
#define ERRCODE_FDW_INVALID_OPTION_INDEX MAKE_SQLSTATE('H','V','0','0','C')
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define INT4MULTIRANGEOID 4451
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define AF_SMC PF_SMC
#define F_INT2NE 145
#define O_NOATIME __O_NOATIME
#define F_FLOAT8_COVAR_SAMP 2816
#define IOV_MAX __IOV_MAX
#define SO_RXQ_OVFL 40
#define AI_V4MAPPED 0x0008
#define RelationIsUsedAsCatalogTable(relation) ((relation)->rd_options && ((relation)->rd_rel->relkind == RELKIND_RELATION || (relation)->rd_rel->relkind == RELKIND_MATVIEW) ? ((StdRdOptions *) (relation)->rd_options)->user_catalog_table : false)
#define PRIdLEAST8 "d"
#define AF_NETBEUI PF_NETBEUI
#define INDEX_AM_RESERVED_BIT 0x2000
#define SO_TIMESTAMPNS_OLD 35
#define F_LINE_IN 1490
#define INTPTR_MAX (9223372036854775807L)
#define F_MULTIRANGE_CONTAINS_MULTIRANGE 4251
#define __UINTMAX_C(c) c ## UL
#define GUC_LIST_INPUT 0x0001
#define PG_GETARG_ARRAYTYPE_P_COPY(n) DatumGetArrayTypePCopy(PG_GETARG_DATUM(n))
#define FLOAT4_FITS_IN_INT64(num) ((num) >= (float4) PG_INT64_MIN && (num) < -((float4) PG_INT64_MIN))
#define IP_MULTICAST_IF 32
#define F_LPAD_TEXT_INT4_TEXT 873
#define ACL_TRUNCATE_CHR 'D'
#define IP_DROP_MEMBERSHIP 36
#define F_BOOL_ANYTRUE 3499
#define F_CIRCLE_OUT 1451
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define F_NOW 1299
#define F_JSON_AGG_TRANSFN 3173
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define INT64_MODIFIER "l"
#define F_LSEG_PERP 996
#define F_FLOAT8SEND 2427
#define F_DATE_PL_INTERVAL 2071
#define F_SIMILAR_TO_ESCAPE_TEXT_TEXT 1986
#define ERRCODE_INVALID_CURSOR_STATE MAKE_SQLSTATE('2','4','0','0','0')
#define ENAVAIL 119
#define PATHNODES_H 
#define TTS_FLAG_SLOW (1 << 3)
#define F_AVG_INTERVAL 2106
#define Natts_pg_dist_partition 6
#define EA_MAGIC 689375833
#define SET_LOCKTAG_OBJECT(locktag,dboid,classoid,objoid,objsubid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (classoid), (locktag).locktag_field3 = (objoid), (locktag).locktag_field4 = (objsubid), (locktag).locktag_type = LOCKTAG_OBJECT, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define F_UTF8_TO_WIN 4358
#define HASH_FIXED_SIZE 0x2000
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define ENOSR 63
#define PG_DIAG_CONTEXT 'W'
#define PRIu16 "u"
#define foreach(cell,lst) for (ForEachState cell ##__state = {(lst), 0}; (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define lthird_node(type,l) castNode(type, lthird(l))
#define F_INT24GE 168
#define F_SETSIG __F_SETSIG
#define HAVE_TERMIOS_H 1
#define SHAREDFILESET_H 
#define F_NUMERIC_MONEY 3823
#define F_MIN_BPCHAR 2245
#define HEAP_MOVED_OFF 0x4000
#define __GLIBC_USE_ISOC2X 1
#define CONDITION_VARIABLE_H 
#define F_REGCLASSOUT 2219
#define F_TEXT_PATTERN_LE 2161
#define PRIu32 "u"
#define ERRCODE_TOO_MANY_CONNECTIONS MAKE_SQLSTATE('5','3','3','0','0')
#define IP_XFRM_POLICY 17
#define F_TSMATCHSEL 3686
#define FUNC_MAX_ARGS 100
#define __iovec_defined 1
#define F_VARIANCE_INT4 2149
#define InvalidRelation ((Relation) NULL)
#define F_VARIANCE_INT8 2148
#define F_DIST_PB 364
#define TTS_FLAG_EMPTY (1 << 1)
#define ERRCODE_NOT_NULL_VIOLATION MAKE_SQLSTATE('2','3','5','0','2')
#define IN_CLASSA_MAX 128
#define VARHDRSZ_EXTERNAL offsetof(varattrib_1b_e, va_data)
#define NAMEDATALEN 64
#define _XOPEN_SOURCE_EXTENDED 1
#define HEAPAM_H 
#define F_PG_TRY_ADVISORY_LOCK_SHARED_INT8 2883
#define F_RANGE_AFTER 3864
#define BKI_BOOTSTRAP 
#define F_NUMERIC_LARGER 1767
#define SCNoMAX __PRI64_PREFIX "o"
#define PG_DIAG_SOURCE_LINE 'L'
#define INTPTR_MIN (-9223372036854775807L-1)
#define TABLE_INSERT_FROZEN 0x0004
#define EAFNOSUPPORT 97
#define F_AVG_FLOAT8 2105
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define PRIu64 __PRI64_PREFIX "u"
#define LONGALIGN(LEN) TYPEALIGN(ALIGNOF_LONG, (LEN))
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define F_PG_GET_FUNCTION_ARG_DEFAULT 3808
#define TRAP_BRKPT TRAP_BRKPT
#define HAVE_RL_RESET_SCREEN_SIZE 1
#define F_GISTHANDLER 332
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __AARCH64EL__ 1
#define DECLARE_ARRAY_FOREIGN_KEY(cols,reftbl,refcols) extern int no_such_variable
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define F_EUC_JIS_2004_TO_UTF8 4382
#define F_JUSTIFY_HOURS 1175
#define forboth_int_oid(var1,l1,var2,l2) for (ListCell *(var1 ## CellDoNotUse) = list_head(l1), *(var2 ## CellDoNotUse) = list_head(l2); (var1 ## CellDoNotUse) != NULL && (var2 ## CellDoNotUse) != NULL && (((var1) = lfirst_int(var1 ## CellDoNotUse)) || true) && (((var2) = lfirst_oid(var2 ## CellDoNotUse)) || true); var1 ## CellDoNotUse = lnext(l1, var1 ## CellDoNotUse), var2 ## CellDoNotUse = lnext(l2, var2 ## CellDoNotUse) )
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define F_DOMAIN_IN 2597
#define GENAM_H 
#define MinTransactionIdAttributeNumber (-2)
#define PRIxLEAST16 "x"
#define F_PG_REPLICATION_ORIGIN_ADVANCE 6012
#define PG_RETURN_ACLITEM_P(x) PG_RETURN_POINTER(x)
#define F_DIST_PS 363
#define LINEOID 628
#define __timer_t_defined 1
#define F_LINE_SEND 2489
#define __WCLONE 0x80000000
#define F_SJIS_TO_UTF8 4378
#define F_GENERATE_SERIES_NUMERIC_NUMERIC_NUMERIC 3259
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define F_LINE_INTERPT 1494
#define F_DATE_LE 1088
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define F_HASHMACADDR 399
#define EMSGSIZE 90
#define SEGV_ADIPERR SEGV_ADIPERR
#define FRAMEOPTION_EXCLUSION (FRAMEOPTION_EXCLUDE_CURRENT_ROW | FRAMEOPTION_EXCLUDE_GROUP | FRAMEOPTION_EXCLUDE_TIES)
#define F_TO_REGTYPE 3493
#define ScanDirectionIsValid(direction) ((bool) (BackwardScanDirection <= (direction) && (direction) <= ForwardScanDirection))
#define DatumGetAclItemP(X) ((AclItem *) DatumGetPointer(X))
#define PRIxLEAST32 "x"
#define SNAPSHOT_H 
#define FETCH_ALL LONG_MAX
#define __WCHAR_MIN __WCHAR_MIN__
#define ItemPointerGetOffsetNumberNoCheck(pointer) ( (pointer)->ip_posid )
#define F_WIN_TO_UTF8 4359
#define ADJ_FREQUENCY 0x0002
#define HAVE_SYNC_FILE_RANGE 1
#define SIZEOF_LONG 8
#define BGW_DEFAULT_RESTART_INTERVAL 60
#define SO_BSDCOMPAT 14
#define IPV6_RTHDRDSTOPTS 55
#define ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','3')
#define F_BPCHARLIKE 1631
#define INT32_C(c) c
#define DsaPointerIsValid(x) ((x) != InvalidDsaPointer)
#define REGBUF_FORCE_IMAGE 0x01
#define Anum_pg_class_reltablespace 9
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define F_TIMESTAMP_EQ 2052
#define LOG_DESTINATION_EVENTLOG 4
#define F_DATE_GE 1090
#define ACLITEMOID 1033
#define PageSetPrunable(page,xid) do { Assert(TransactionIdIsNormal(xid)); if (!TransactionIdIsValid(((PageHeader) (page))->pd_prune_xid) || TransactionIdPrecedes(xid, ((PageHeader) (page))->pd_prune_xid)) ((PageHeader) (page))->pd_prune_xid = (xid); } while (0)
#define F_DUPFD_CLOEXEC 1030
#define F_TO_ASCII_TEXT_INT4 1846
#define HeapTupleHeaderGetUpdateXid(tup) ( (!((tup)->t_infomask & HEAP_XMAX_INVALID) && ((tup)->t_infomask & HEAP_XMAX_IS_MULTI) && !((tup)->t_infomask & HEAP_XMAX_LOCK_ONLY)) ? HeapTupleGetUpdateXid(tup) : HeapTupleHeaderGetRawXmax(tup) )
#define UINT_LEAST64_WIDTH 64
#define ERRCODE_FDW_INVALID_DESCRIPTOR_FIELD_IDENTIFIER MAKE_SQLSTATE('H','V','0','9','1')
#define F_GIN_EXTRACT_TSQUERY_TSQUERY_INTERNAL_INT2_INTERNAL_INTERNAL 3087
#define __glibc_objsize0(__o) __bos0 (__o)
#define PG_INT8_MAX (0x7F)
#define Anum_pg_class_reltype 4
#define F_BPCHAR_PATTERN_GT 2178
#define PRIxLEAST64 __PRI64_PREFIX "x"
#define F_INT4MUL 141
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define IPV6_JOIN_ANYCAST 27
#define F_TSQUERY_OR 3670
#define MCAST_UNBLOCK_SOURCE 44
#define F_EUC_CN_TO_MIC 4322
#define F_JSONPATH_IN 4001
#define F_TIMESTAMP_GT 2057
#define F_FORMAT_TEXT 3540
#define IPV6_TCLASS 67
#define AF_SNA PF_SNA
#define pgoff_t off_t
#define PRIX16 "X"
#define __UINT_FAST16_TYPE__ long unsigned int
#define FirstBootstrapObjectId 12000
#define F_PG_CURRENT_LOGFILE_TEXT 3801
#define MEMNODES_H 
#define F_TIMESTAMP_CMP_DATE 2370
#define ReplicationSlotAllocationLock (&MainLWLockArray[36].lock)
#define ERRCODE_SYSTEM_ERROR MAKE_SQLSTATE('5','8','0','0','0')
#define SizeOfXLogRecordDataHeaderShort (sizeof(uint8) * 2)
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define _POSIX_RAW_SOCKETS 200809L
#define F_IN_RANGE_INT4_INT4_INT4_BOOL_BOOL 4128
#define Anum_pg_attribute_attacl 23
#define F_PHRASETO_TSQUERY_REGCONFIG_TEXT 5006
#define DatumGetTextPP(X) ((text *) PG_DETOAST_DATUM_PACKED(X))
#define F_INTERVAL_SEND 2479
#define FKCONSTR_MATCH_FULL 'f'
#define AmBackgroundWriterProcess() (MyAuxProcType == BgWriterProcess)
#define F_OIDVECTORTYPES 1349
#define F_PG_STAT_RESET_SHARED 3775
#define F_PG_LSN_HASH 3252
#define F_PG_CANCEL_BACKEND 2171
#define ItemPointerIsValid(pointer) ((bool) (PointerIsValid(pointer) && ((pointer)->ip_posid != 0)))
#define F_XID8OUT 5081
#define RWH_WRITE_LIFE_NONE 1
#define TableOidAttributeNumber (-6)
#define TUPMACS_H 
#define Anum_pg_type_typnotnull 25
#define RTGreaterEqualStrategyNumber 23
#define __F_SETOWN 8
#define PRIX32 "X"
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define PF_ECONET 19
#define F_BOX_CONTAINED 192
#define RELFILENODE_H 
#define RSIZE_MIN_STR ( 1 )
#define F_UTF8_TO_BIG5 4353
#define COLUMNAR_SETOPTIONS_HOOK_SYM "ColumnarTableSetOptions_hook"
#define F_REGEXP_MATCHES_TEXT_TEXT_TEXT 2764
#define HEAP_XMIN_COMMITTED 0x0100
#define EDEADLK 35
#define F_PG_NODE_TREE_RECV 197
#define F_XID8EQ 5084
#define ERRCODE_CANNOT_COERCE MAKE_SQLSTATE('4','2','8','4','6')
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define F_TS_HEADLINE_JSONB_TSQUERY 4204
#define pg_spin_delay_impl() ((void)0)
#define IsBootstrapProcessingMode() (Mode == BootstrapProcessing)
#define HAVE_UNIX_SOCKETS 1
#define F_JSONB_ARRAY_ELEMENTS_TEXT 3465
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define F_ACLDEFAULT 3943
#define F_BIT_INT8_INT4 2075
#define F_JSONB_RECV 3805
#define INT64_MAX (__INT64_C(9223372036854775807))
#define INT2VECTORARRAYOID 1006
#define htole16(x) __uint16_identity (x)
#define SIGCHLD 17
#define ERRCODE_TRIGGERED_ACTION_EXCEPTION MAKE_SQLSTATE('0','9','0','0','0')
#define F_INTERVAL_PL_DATE 2546
#define F_PG_SWITCH_WAL 2848
#define MAXNAMLEN NAME_MAX
#define F_INT48LE 856
#define F_TIMESTAMP_LT 2054
#define __INT16_TYPE__ short int
#define PRIX64 __PRI64_PREFIX "X"
#define F_MATCHINGSEL 5040
#define F_BRIN_INCLUSION_CONSISTENT 4107
#define USE_CREATE_REFERENCE_TABLE_HINT "You could use SELECT create_reference_table('%s') " "to replicate the referenced table to all nodes or " "consider dropping the foreign key"
#define F_BTINT2CMP 350
#define Anum_pg_publication_pubowner 3
#define F_BOX_CIRCLE 1480
#define XLR_BLOCK_ID_DATA_LONG 254
#define PRIoFAST16 __PRIPTR_PREFIX "o"
#define ERRCODE_TOO_MANY_ARGUMENTS MAKE_SQLSTATE('5','4','0','2','3')
#define __UINT8_MAX__ 0xff
#define F_FLOAT48EQ 299
#define OldSnapshotTimeMapLock (&MainLWLockArray[42].lock)
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define htole32(x) __uint32_identity (x)
#define SK_SEARCHARRAY 0x0020
#define F_TIMESTAMP_NE 2053
#define PG_INT8_MIN (-0x7F-1)
#define F_MIC_TO_WIN1251 4307
#define HAVE_RL_COMPLETION_MATCHES 1
#define F_SPG_TEXT_CONFIG 4027
#define F_WRLCK 1
#define MONTHS_PER_YEAR 12
#define USER_LOCKMETHOD 2
#define F_NETWORK_SUBSET_SUPPORT 1173
#define F_JSONB_OBJECT_FIELD_TEXT 3214
#define FirstNormalTransactionId ((TransactionId) 3)
#define F_XID8IN 5070
#define DSM_IMPL_WINDOWS 3
#define F_POLY_CONTAIN 340
#define F_PG_INDEX_COLUMN_HAS_PROPERTY 638
#define SIGSYS 31
#define linux 1
#define IsNormalProcessingMode() (Mode == NormalProcessing)
#define TIMESTAMP_NOBEGIN(j) do {(j) = DT_NOBEGIN;} while (0)
#define F_LEFT 3060
#define SA_NOCLDSTOP 1
#define F_MIN_INT8 2131
#define F_ANYMULTIRANGE_IN 4229
#define F_REPLACE 2087
#define ERRCODE_DUPLICATE_FILE MAKE_SQLSTATE('5','8','P','0','2')
#define ____FILE_defined 1
#define F_INT84DIV 1277
#define ERRCODE_FDW_SCHEMA_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','Q')
#define ILL_PRVREG ILL_PRVREG
#define F_PG_COPY_LOGICAL_REPLICATION_SLOT_NAME_NAME 4224
#define F_REGTYPERECV 2454
#define htole64(x) __uint64_identity (x)
#define CITUS_LISTUTILS_H 
#define LSEGOID 601
#define F_PG_RELATION_SIZE_REGCLASS_TEXT 2332
#define Anum_pg_attribute_attnotnull 14
#define F_HAS_ANY_COLUMN_PRIVILEGE_TEXT_TEXT 3028
#define SA_INTERRUPT 0x20000000
#define MOD_ESTERROR ADJ_ESTERROR
#define O_LARGEFILE __O_LARGEFILE
#define EVENT_TRIGGEROID 3838
#define F_XID8LT 5034
#define F_NUMERIC_PL_PG_LSN 5023
#define F_TEXTICREGEXEQ_SUPPORT 1024
#define F_PG_DEPENDENCIES_SEND 3407
#define sigev_notify_function _sigev_un._sigev_thread._function
#define RTOldContainedByStrategyNumber 14
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define F_ORDERED_SET_TRANSITION 3970
#define ERRCODE_UNIQUE_VIOLATION MAKE_SQLSTATE('2','3','5','0','5')
#define F_POINT_ADD 1441
#define F_TEXTIN 46
#define F_MOD_INT8_INT8 947
#define F_XID8NE 5085
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define FOPEN_MAX 16
#define _SC_PII_XTI _SC_PII_XTI
#define FKCONSTR_ACTION_SETDEFAULT 'd'
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define Anum_pg_constraint_contype 4
#define F_HEAP_TABLEAM_HANDLER 3
#define VARHDRSZ_COMPRESSED offsetof(varattrib_4b, va_compressed.va_data)
#define PG_BACKEND_VERSIONSTR "postgres (PostgreSQL) " PG_VERSION "\n"
#define LC_TELEPHONE __LC_TELEPHONE
#define SysCacheSize (USERMAPPINGUSERSERVER + 1)
#define F_PT_CONTAINED_POLY 1429
#define F_OIDVECTORSEND 2421
#define F_BPCHARCMP 1078
#define USE_ISO_DATES 1
#define NI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("NI_IDN_ALLOW_UNASSIGNED is deprecated") 64
#define F_VARCHAR_SUPPORT 3097
#define XLogRecGetRmid(decoder) ((decoder)->decoded_record->xl_rmid)
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define RELCACHE_H 
#define F_BIG5_TO_UTF8 4352
#define F_FLOAT8MUL 216
#define IPPROTO_MPLS IPPROTO_MPLS
#define SA_STACK SA_ONSTACK
#define F_PG_RELATION_IS_UPDATABLE 3842
#define F_REGOPERATOROUT 2217
#define BUS_ADRERR BUS_ADRERR
#define F_MAX_OID 2118
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define F_PG_GET_PARTITION_CONSTRAINTDEF 3408
#define BTEqualStrategyNumber 3
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define pg_bswap32(x) __builtin_bswap32(x)
#define le64toh(x) __uint64_identity (x)
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define F_POLY_DISTANCE 729
#define ESOCKTNOSUPPORT 94
#define __INTPTR_TYPE__ long int
#define EWOULDBLOCK EAGAIN
#define HeapTupleClearHotUpdated(tuple) HeapTupleHeaderClearHotUpdated((tuple)->t_data)
#define F_TSVECTOR_CMP 3622
#define FP_LOCK_SLOTS_PER_BACKEND 16
#define POSTGRES_H 
#define F_PG_STAT_GET_LAST_AUTOANALYZE_TIME 2784
#define PageGetSpecialPointer(page) ( AssertMacro(PageValidateSpecialPointer(page)), (char *) ((char *) (page) + ((PageHeader) (page))->pd_special) )
#define ESEMPTY ( 405 )
#define lfirst(lc) ((lc)->ptr_value)
#define Anum_pg_type_typstorage 24
#define Anum_pg_class_relallvisible 12
#define F_BOX_ADD 1422
#define RELPERSISTENCE_UNLOGGED 'u'
#define __S_IFLNK 0120000
#define WL_EXIT_ON_PM_DEATH (1 << 5)
#define F_PG_DDL_COMMAND_IN 86
#define F_JSONB_OBJECT_KEYS 3931
#define list_make4_oid(x1,x2,x3,x4) list_make4_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3), list_make_oid_cell(x4))
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define InvalidLocalTransactionId 0
#define EDOTDOT 73
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define HASH_STRINGS 0x0010
#define F_BRIN_MINMAX_MULTI_DISTANCE_INT8 4623
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define INT_LEAST16_WIDTH 16
#define F_PERCENT_RANK_FINAL 3989
#define REGNAMESPACEOID 4089
#define HAVE_SHM_OPEN 1
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define CheckpointerCommLock (&MainLWLockArray[17].lock)
#define ACL_MODECHG_EQL 3
#define F_POWER_FLOAT8_FLOAT8 1368
#define HAVE_LONG_INT_64 1
#define _WCHAR_T_DECLARED 
#define F_DATABASE_TO_XML_AND_XMLSCHEMA 2938
#define F_GENERATE_SERIES_INT8_INT8 1069
#define F_JSONB_PRETTY 3306
#define F_HASH_ACLITEM_EXTENDED 777
#define WNOWAIT 0x01000000
#define OidFunctionCall0(functionId) OidFunctionCall0Coll(functionId, InvalidOid)
#define PRIXFAST8 "X"
#define F_DATERANGE_DATE_DATE 3941
#define F_ENUM_CMP 3514
#define MultiXactIdGetDatum(X) ((Datum) (X))
#define EXEC_FLAG_MARK 0x0008
#define _POSIX2_BC_DIM_MAX 2048
#define F_NETWORKSEL 3560
#define F_PG_STAT_GET_WAL_SENDERS 3099
#define _GCC_PTRDIFF_T 
#define HEAP_XMAX_SHR_LOCK (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define _FCNTL_H 1
#define F_NUMERIC_POLY_STDDEV_POP 3392
#define DSM_CREATE_NULL_IF_MAXSEGMENTS 0x0001
#define XLR_MAX_BLOCK_ID 32
#define GUC_UNIT_TIME 0xF0000
#define F_JSONB_POPULATE_RECORDSET 3475
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define F_INT2LE 148
#define PRIXMAX __PRI64_PREFIX "X"
#define ERRCODE_T_R_SERIALIZATION_FAILURE MAKE_SQLSTATE('4','0','0','0','1')
#define EPROTONOSUPPORT 93
#define UINT_MAX (INT_MAX * 2U + 1U)
#define F_GINARRAYCONSISTENT 2744
#define EFBIG 27
#define INVERT_COMPARE_RESULT(var) ((var) = ((var) < 0) ? 1 : -(var))
#define F_TIMESTAMP_TIMESTAMP_INT4 1961
#define ERRCODE_INVALID_TIME_ZONE_DISPLACEMENT_VALUE MAKE_SQLSTATE('2','2','0','0','9')
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define PROC_VACUUM_STATE_MASK (PROC_IN_VACUUM | PROC_IN_SAFE_IC | PROC_VACUUM_FOR_WRAPAROUND)
#define SAFE_STR_PASSWORD_MIN_LENGTH ( 6 )
#define F_RANGE_AFTER_MULTIRANGE 4261
#define IN_CLASSC_NET 0xffffff00
#define F_PG_STAT_GET_DB_TUPLES_UPDATED 2761
#define INT16_C(c) c
#define SCNoFAST32 __PRIPTR_PREFIX "o"
#define __SIGRTMAX 64
#define LONG_ALIGN_MASK (sizeof(long) - 1)
#define F_TRANSACTION_TIMESTAMP 2647
#define __WINT_MAX__ 0xffffffffU
#define __FLT_MAX_EXP__ 128
#define IsInitProcessingMode() (Mode == InitProcessing)
#define F_OVERLAPS_TIME_TIME_TIME_INTERVAL 1310
#define att_align_pointer(cur_offset,attalign,attlen,attptr) ( ((attlen) == -1 && VARATT_NOT_PAD_BYTE(attptr)) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define Anum_pg_class_reloftype 5
#define F_RANK_FINAL 3987
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define IN_LOOPBACKNET 127
#define VARDATA_1B(PTR) (((varattrib_1b *) (PTR))->va_data)
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define __TIMER_T_TYPE void *
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define HAVE_OPENSSL_INIT_SSL 1
#define Abs(x) ((x) >= 0 ? (x) : -(x))
#define F_FLOAT4DIV 203
#define HEAP_INSERT_NO_LOGICAL TABLE_INSERT_NO_LOGICAL
#define SCNoFAST64 __PRI64_PREFIX "o"
#define XACT_XINFO_HAS_INVALS (1U << 3)
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define F_AVG_FLOAT4 2104
#define _POSIX_SEM_VALUE_MAX 32767
#define AF_ATMPVC PF_ATMPVC
#define F_BIT_XOR_INT4 6165
#define LC_CTYPE __LC_CTYPE
#define F_CONVERT_TO 1717
#define SET_VARSIZE(PTR,len) SET_VARSIZE_4B(PTR, len)
#define CLOCK_BOOTTIME 7
#define _CTYPE_H 1
#define F_TO_NUMBER 1777
#define Anum_pg_attribute_atthasdef 15
#define F_JSON_POPULATE_RECORDSET 3961
#define VARDATA_4B(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_data)
#define F_RANGE_BEFORE_MULTIRANGE 4258
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_RL_FILENAME_QUOTE_CHARACTERS 1
#define SHARED_TUPLESTORE_SINGLE_PASS 0x01
#define F_STDDEV_POP_INT8 2724
#define F_BITCAT 1679
#define F_INTERVAL_ACCUM_INV 3549
#define F_GIN_TSQUERY_CONSISTENT_INTERNAL_INT2_TSVECTOR_INT4_INTERNAL_INTERNAL_INTERNAL_INTERNAL 3658
#define __BIT_TYPES_DEFINED__ 1
#define _POSIX_VDISABLE '\0'
#define F_JSONB_PATH_QUERY_ARRAY_TZ 1180
#define F_TS_HEADLINE_REGCONFIG_TEXT_TSQUERY_TEXT 3743
#define F_HAS_TABLESPACE_PRIVILEGE_NAME_OID_TEXT 2391
#define __WINT_WIDTH__ 32
#define NUM_FIXED_LWLOCKS (PREDICATELOCK_MANAGER_LWLOCK_OFFSET + NUM_PREDICATELOCK_PARTITIONS)
#define __struct_FILE_defined 1
#define lfirst_int(lc) ((lc)->int_value)
#define TUPLE_LOCK_FLAG_FIND_LAST_VERSION (1 << 1)
#define __S_ISVTX 01000
#define RINFO_IS_PUSHED_DOWN(rinfo,joinrelids) ((rinfo)->is_pushed_down || !bms_is_subset((rinfo)->required_relids, joinrelids))
#define VARDATA_ANY(PTR) (VARATT_IS_1B(PTR) ? VARDATA_1B(PTR) : VARDATA_4B(PTR))
#define F_RECORD_IMAGE_EQ 3181
#define F_INT8_MUL_CASH 3399
#define lthird_int(l) lfirst_int(list_nth_cell(l, 2))
#define foreach_current_index(cell) (cell ##__state.i)
#define ERRCODE_SQL_JSON_OBJECT_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','C')
#define XACT_XINFO_HAS_SUBXACTS (1U << 1)
#define palloc0fast(sz) ( MemSetTest(0, sz) ? MemoryContextAllocZeroAligned(CurrentMemoryContext, sz) : MemoryContextAllocZero(CurrentMemoryContext, sz) )
#define F_UTF8_TO_ISO8859_1 4375
#define FIELDNO_EXPRCONTEXT_DOMAINDATUM 12
#define F_IN_RANGE_TIMESTAMPTZ_TIMESTAMPTZ_INTERVAL_BOOL_BOOL 4135
#define FIELDNO_HEAPTUPLETABLESLOT_TUPLE 1
#define __SIGRTMIN 32
#define F_DATE_PART_TEXT_TIMESTAMP 2021
#define CURSOR_OPT_INSENSITIVE 0x0008
#define ROWID_VAR 65003
#define __FLT64X_IS_IEC_60559__ 2
#define F_CIRCLE_GE 1467
#define F_GIN_TSQUERY_TRICONSISTENT 3921
#define F_CIRCLE_GT 1465
#define F_NAMEEQTEXT 240
#define ERRCODE_WARNING_DEPRECATED_FEATURE MAKE_SQLSTATE('0','1','P','0','1')
#define IP_PMTUDISC 10
#define L_INCR SEEK_CUR
#define PG_HAVE_ATOMIC_INIT_FLAG 
#define ERRCODE_DUPLICATE_TABLE MAKE_SQLSTATE('4','2','P','0','7')
#define TYPCATEGORY_NETWORK 'I'
#define __FLT32_MIN_EXP__ (-125)
#define SmgrIsTemp(smgr) RelFileNodeBackendIsTemp((smgr)->smgr_rnode)
#define ERRCODE_OBJECT_NOT_IN_PREREQUISITE_STATE MAKE_SQLSTATE('5','5','0','0','0')
#define F_PG_COLUMN_SIZE 1269
#define F_PG_STAT_GET_LAST_VACUUM_TIME 2781
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define ACL_OPTION_TO_PRIVS(privs) (((AclMode) (privs) >> 16) & 0xFFFF)
#define AT_STATX_FORCE_SYNC 0x2000
#define POSIX_FADV_RANDOM 1
#define __UINT8_C(c) c
#define ERRCODE_IO_ERROR MAKE_SQLSTATE('5','8','0','3','0')
#define dlist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, dlist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define F_CIRCLE_IN 1450
#define __cookie_io_functions_t_defined 1
#define MOD_MAXERROR ADJ_MAXERROR
#define TIMESTAMP_NOT_FINITE(j) (TIMESTAMP_IS_NOBEGIN(j) || TIMESTAMP_IS_NOEND(j))
#define WL_POSTMASTER_DEATH (1 << 4)
#define F_GIN_CONSISTENT_JSONB_PATH 3487
#define exec_subplan_get_plan(plannedstmt,subplan) ((Plan *) list_nth((plannedstmt)->subplans, (subplan)->plan_id - 1))
#define F_TO_JSON 3176
#define F_TIMETZ_SEND 2473
#define __UINT64_TYPE__ long unsigned int
#define IsA(nodeptr,_type_) (nodeTag(nodeptr) == T_ ##_type_)
#define SO_RCVTIMEO_NEW 66
#define __stub___compat_query_module 
#define F_ROUND_NUMERIC 1708
#define __ARM_NEON 1
#define newNode(size,tag) ({ Node *_result; AssertMacro((size) >= sizeof(Node)); _result = (Node *) palloc0fast(size); _result->type = (tag); _result; })
#define NO_DATA 4
#define F_DATE_NE_TIMESTAMPTZ 2356
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define HEAP_INSERT_FROZEN TABLE_INSERT_FROZEN
#define F_FLOAT48GE 304
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define F_CIRCLE_LE 1466
#define SO_MEMINFO 55
#define Trap(condition,errorType) ((void)true)
#define F_CIRCLE_LT 1464
#define F_PG_READ_BINARY_FILE_TEXT_INT8_INT8_BOOL 3295
#define HAVE_RL_FILENAME_COMPLETION_FUNCTION 1
#define F_HASHNAMEEXTENDED 447
#define SCNiFAST8 "hhi"
#define __PRI64_PREFIX "l"
#define ERRCODE_SQL_JSON_ARRAY_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','9')
#define ERRCODE_DUPLICATE_COLUMN MAKE_SQLSTATE('4','2','7','0','1')
#define FRAMEOPTION_END_OFFSET (FRAMEOPTION_END_OFFSET_PRECEDING | FRAMEOPTION_END_OFFSET_FOLLOWING)
#define F_UPPER_ANYMULTIRANGE 4236
#define __stack_t_defined 1
#define _POSIX_MAPPED_FILES 200809L
#define PG_TEXTDOMAIN(domain) (domain "-" PG_MAJORVERSION)
#define __FLT128_HAS_QUIET_NAN__ 1
#define USE_POSTGRES_DATES 0
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define Anum_pg_type_typsubscript 13
#define PG_INDEX_D_H 
#define F_MAX_TIMESTAMPTZ 2127
#define IPPROTO_IGMP IPPROTO_IGMP
#define F_RANGE_CONTAINED_BY_MULTIRANGE 4253
#define STA_FREQHOLD 0x0080
#define F_TIMESTAMP_LT_TIMESTAMPTZ 2520
#define BUFPAGE_H 
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define F_TSQUERY_LE 3663
#define PF_IUCV 32
#define PRIiMAX __PRI64_PREFIX "i"
#define SET_LOCKTAG_TRANSACTION(locktag,xid) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_TRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define AI_CANONNAME 0x0002
#define HAVE_SYS_PRCTL_H 1
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define pg_attribute_aligned(a) __attribute__((aligned(a)))
#define F_TEXT_PATTERN_GE 2163
#define list_make_int_cell(v) ((ListCell) {.int_value = (v)})
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define F_TIMESTAMPTZ_DATE 1174
#define F_BPCHAR_SMALLER 1064
#define F_NUMERIC_POLY_SERIALIZE 3339
#define S_IFLNK __S_IFLNK
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define F_DSIMPLE_LEXIZE 3726
#define __FLT64_HAS_DENORM__ 1
#define HAVE_DECL_LLVMCREATEPERFJITEVENTLISTENER 1
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define F_BTTEXT_PATTERN_SORTSUPPORT 3332
#define ESRMNT 69
#define IN_CLASSC_NSHIFT 8
#define IPV6_ROUTER_ALERT 22
#define F_CURRENT_DATABASE 861
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define _POSIX2_BC_BASE_MAX 99
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define USE_LZ4 1
#define F_PG_HAS_ROLE_NAME_TEXT 2709
#define RELKIND_TOASTVALUE 't'
#define _POSIX_MQ_PRIO_MAX 32
#define F_TSQUERY_LT 3662
#define PRS2_OLD_VARNO 1
#define F_ANYTEXTCAT 2004
#define ERRCODE_CONFIGURATION_LIMIT_EXCEEDED MAKE_SQLSTATE('5','3','4','0','0')
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define F_TO_ASCII_TEXT_NAME 1847
#define ENOANO 55
#define INT_LEAST64_WIDTH 64
#define TABLESPACE_MAP_OLD "tablespace_map.old"
#define F_PATH_IN 121
#define F_DATE_MI_INTERVAL 2072
#define PG_GETARG_TIMESTAMP(n) DatumGetTimestamp(PG_GETARG_DATUM(n))
#define F_PG_LSN_CMP 3251
#define fetchatt(A,T) fetch_att(T, (A)->attbyval, (A)->attlen)
#define REGBUF_WILL_INIT (0x04 | 0x02)
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
#define F_PG_CHAR_TO_ENCODING 1264
#define RECORDOID 2249
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define SI_KERNEL SI_KERNEL
#define F_CASH_WORDS 935
#define F_PG_CURRENT_XACT_ID_IF_ASSIGNED 5060
#define PRIdFAST16 __PRIPTR_PREFIX "d"
#define RTOldAboveStrategyNumber 30
#define _STRUCT_TIMESPEC 1
#define F_PG_STAT_GET_BUF_ALLOC 2859
#define F_POLY_IN 347
#define _POSIX_REENTRANT_FUNCTIONS 1
#define __mode_t_defined 
#define BGWORKER_SHMEM_ACCESS 0x0001
#define F_OFD_SETLKW 38
#define PLATFORM_DEFAULT_SYNC_METHOD SYNC_METHOD_FDATASYNC
#define F_ARRAY_POSITION_ANYCOMPATIBLEARRAY_ANYCOMPATIBLE_INT4 3278
#define MaxHeapAttributeNumber 1600
#define XACT_READ_UNCOMMITTED 0
#define USE_PREFETCH 
#define ESNODIFF ( 408 )
#define IP_RECVFRAGSIZE 25
#define F_BTRIM_TEXT_TEXT 884
#define PERFORM_DELETION_QUIETLY 0x0004
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define PRIdFAST32 __PRIPTR_PREFIX "d"
#define AI_CANONIDN 0x0080
#define EISCONN 106
#define INET6_ADDRSTRLEN 46
#define F_TEXT_BOOL 2971
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define PARAMS_H 
#define F_ANYCOMPATIBLEARRAY_RECV 5090
#define OPCLASS_ITEM_OPERATOR 1
#define _ENDIAN_H 1
#define PG_RETURN_HEAPTUPLEHEADER(x) return HeapTupleHeaderGetDatum(x)
#define F_PG_LS_TMPDIR_OID 5030
#define __glibc_has_builtin(name) __has_builtin (name)
#define _LFS_ASYNCHRONOUS_IO 1
#define Natts_pg_type 32
#define AF_UNIX PF_UNIX
#define IP_RECVRETOPTS IP_RETOPTS
#define F_JSONB_OBJECT_FIELD 3478
#define IPPROTO_COMP IPPROTO_COMP
#define EUSERS 87
#define F_FLOAT4_ACCUM 208
#define _VA_LIST_T_H 
#define F_TEXTICLIKE 1633
#define CASHOID MONEYOID
#define F_PG_ISOLATION_TEST_SESSION_IS_BLOCKED 3378
#define __PIC__ 2
#define F_PG_RELATION_FILENODE 2999
#define PRIdFAST64 __PRI64_PREFIX "d"
#define XACT_SERIALIZABLE 3
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define F_DIST_POLYP 3292
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define list_make2_oid(x1,x2) list_make2_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2))
#define HAVE_GETHOSTBYNAME_R 1
#define TYPCATEGORY_GEOMETRIC 'G'
#define HAVE_DECL_STRTOLL 1
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define F_ARRAYCONTAINED 2749
#define F_OIDVECTORLT 677
#define F_PG_GET_VIEWDEF_OID_BOOL 2506
#define F_GBK_TO_UTF8 4370
#define F_ARRAY_UPPER 2092
#define F_EUC_KR_TO_UTF8 4364
#define F_TS_HEADLINE_REGCONFIG_JSONB_TSQUERY 4202
#define F_JSON_RECV 323
#define HEAP_XMAX_LOCK_ONLY 0x0080
#define __FP_FAST_FMA 1
#define SA_NOCLDWAIT 2
#define F_PG_STAT_GET_DB_CHECKSUM_LAST_FAILURE 3428
#define F_TO_CHAR_TIMESTAMPTZ_TEXT 1770
#define F_PG_MCV_LIST_SEND 5021
#define VARSIZE_4B(PTR) ((((varattrib_4b *) (PTR))->va_4byte.va_header >> 2) & 0x3FFFFFFF)
#define PG_HAVE_ATOMIC_UNLOCKED_WRITE_U32 
#define FIELDNO_EXPRSTATE_RESULTSLOT 4
#define F_SQRT_NUMERIC 1730
#define pg_read_barrier_impl() __atomic_thread_fence(__ATOMIC_ACQUIRE)
#define F_BINARY_UPGRADE_CREATE_EMPTY_EXTENSION 3591
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define fcSetArgNull(fc,n) fcSetArgExt(fc, n, (Datum) 0, true)
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define FIN_CRC32C(crc) ((crc) ^= 0xFFFFFFFF)
#define __INT32_TYPE__ int
#define FASYNC O_ASYNC
#define F_JSONB_LE 4041
#define F_MACADDR_NOT 3144
#define DatumGetBpCharP(X) ((BpChar *) PG_DETOAST_DATUM(X))
#define IPV6_PMTUDISC_WANT 1
#define SHAREDINVALRELMAP_ID (-4)
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK 5
#define ARR_NDIM(a) ((a)->ndim)
#define __SWORD_TYPE long int
#define F_INT4NOT 1901
#define be16toh(x) __bswap_16 (x)
#define GetProcessingMode() Mode
#define EL3HLT 46
#define F_MIN_TEXT 2145
#define F_CURRVAL 1575
#define PQTRACE_REGRESS_MODE (1<<1)
#define MCAST_BLOCK_SOURCE 43
#define _DIRENT_MATCHES_DIRENT64 1
#define NUM_LOCK_PARTITIONS (1 << LOG2_NUM_LOCK_PARTITIONS)
#define RTSameStrategyNumber 6
#define IN_CLASSA_NET 0xff000000
#define PG_RETURN_POINTER(x) return PointerGetDatum(x)
#define RTLessEqualStrategyNumber 21
#define ERRCODE_CARDINALITY_VIOLATION MAKE_SQLSTATE('2','1','0','0','0')
#define UINT8_C(c) c
#define F_TSQUERYOUT 3613
#define F_JSONB_OBJECT__TEXT__TEXT 3264
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define ARR_OVERHEAD_WITHNULLS(ndims,nitems) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims) + ((nitems) + 7) / 8)
#define F_DTRUNC 229
#define _____fpos64_t_defined 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define F_LOG10_NUMERIC 1481
#define F_INT28LE 1854
#define DEFAULT_LOCKMETHOD 1
#define MINIMAL_TUPLE_PADDING ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) % MAXIMUM_ALIGNOF)
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define _POSIX_V7_ILP32_OFFBIG -1
#define F_MULTIRANGE_OVERLAPS_MULTIRANGE 4248
#define __LDBL_REDIR2_DECL(name) 
#define F_OVERLAPS_TIMETZ_TIMETZ_TIMETZ_TIMETZ 1271
#define _CS_V7_ENV _CS_V7_ENV
#define ESTRPIPE 86
#define __SC_THREAD_STACK_MIN_VALUE 75
#define TIMESTAMP_IS_NOEND(j) ((j) == DT_NOEND)
#define ESPIPE 29
#define _XOPEN_LIM_H 1
#define HEAP_LOCK_MASK (HEAP_XMAX_SHR_LOCK | HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define F_TS_HEADLINE_REGCONFIG_TEXT_TSQUERY 3744
#define F_SHIFT_JIS_2004_TO_UTF8 4384
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define atooid(x) ((Oid) strtoul((x), NULL, 10))
#define RaiseDeferredError(error,elevel) do { RaiseDeferredErrorInternal(error, elevel); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) { pg_unreachable(); } } while (0)
#define PF_RXRPC 33
#define F_PATH_NPOINTS 1432
#define F_VARCHAR_VARCHAR_INT4_BOOL 669
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define PF_MPLS 28
#define ALL_CONNECTION_FAILURE_ERRNOS EPIPE: case ECONNRESET: case ECONNABORTED: case EHOSTDOWN: case EHOSTUNREACH: case ENETDOWN: case ENETRESET: case ENETUNREACH
#define PG_LSNOID 3220
#define XLogIsNeeded() (wal_level >= WAL_LEVEL_REPLICA)
#define F_BYTEALIKE 2005
#define __INT16_C(c) c
#define F_ICREGEXNEJOINSEL 1829
#define F_DATE_NE_TIMESTAMP 2343
#define F_TIMESTAMPTZ_GT_DATE 2380
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define SOL_AAL 265
#define XMLOID 142
#define _SC_THREADS _SC_THREADS
#define ERRCODE_WARNING_IMPLICIT_ZERO_BIT_PADDING MAKE_SQLSTATE('0','1','0','0','8')
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define F_INT28LT 1852
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define _NETINET_IN_H 1
#define F_HAS_SCHEMA_PRIVILEGE_OID_TEXT 2273
#define ERRCODE_SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION MAKE_SQLSTATE('4','2','0','0','0')
#define F_NUMERIC_INT2 1782
#define F_NUMERIC_INT4 1740
#define UUIDOID 2950
#define CITUS_NODES_H 
#define errno (*__errno_location ())
#define F_MACADDR 4124
#define __LC_IDENTIFICATION 12
#define EADV 68
#define FLEXIBLE_ARRAY_MEMBER 
#define F_ISPERP_LINE_LINE 1413
#define ANYMULTIRANGEOID 4537
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define _POSIX_TTY_NAME_MAX 9
#define PF_ATMPVC 8
#define F_TEXT_PATTERN_LT 2160
#define _BITS_STAT_H 1
#define F_TIMETZTYPMODIN 2911
#define InitFunctionCallInfoData(Fcinfo,Flinfo,Nargs,Collation,Context,Resultinfo) do { (Fcinfo).flinfo = (Flinfo); (Fcinfo).context = (Context); (Fcinfo).resultinfo = (Resultinfo); (Fcinfo).fncollation = (Collation); (Fcinfo).isnull = false; (Fcinfo).nargs = (Nargs); } while (0)
#define PG_HAVE_ATOMIC_CLEAR_FLAG 
#define PG_GETARG_VARCHAR_P_SLICE(n,a,b) DatumGetVarCharPSlice(PG_GETARG_DATUM(n),a,b)
#define F_CLOSE_LS 1488
#define F_QUERYTREE 3673
#define F_RANK_ANY 3986
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define AF_X25 PF_X25
#define F_NUMERIC_AVG_SERIALIZE 2740
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define F_PRSD_END 3719
#define F_BRIN_BLOOM_CONSISTENT 4593
#define INSTR_TIME_GET_DOUBLE(t) (((double) (t).tv_sec) + ((double) (t).tv_nsec) / 1000000000.0)
#define ItemPointerSet(pointer,blockNumber,offNum) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber), (pointer)->ip_posid = offNum )
#define F_TS_REWRITE_TSQUERY_TSQUERY_TSQUERY 3684
#define ARRAY_H 
#define RelationIsAccessibleInLogicalDecoding(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && (IsCatalogRelation(relation) || RelationIsUsedAsCatalogTable(relation)))
#define CLD_KILLED CLD_KILLED
#define SK_ROW_END 0x0010
#define F_INT4MULTIRANGE_INT4RANGE 4281
#define F_PG_GET_STATISTICSOBJDEF_EXPRESSIONS 6173
#define SHUT_RD SHUT_RD
#define F_MIN_MONEY 2141
#define VARLENA_EXTSIZE_BITS 30
#define F_LOWRITE 955
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define TIMESTAMP_END_JULIAN (109203528)
#define F_BIT_IN 1564
#define REGCONFIGOID 3734
#define F_CLOSE_PB 367
#define ERRCODE_INVALID_FUNCTION_DEFINITION MAKE_SQLSTATE('4','2','P','1','3')
#define F_INT8INC 1219
#define F_CLOSE_PL 961
#define F_CLOSE_PS 366
#define AF_IPX PF_IPX
#define IPV6_MULTICAST_ALL 29
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define FIELDNO_HEAPTUPLEDATA_DATA 3
#define REFCURSOROID 1790
#define HASH_FUNCTION 0x0040
#define FIELDNO_EXPRCONTEXT_INNERTUPLE 2
#define F_FDW_HANDLER_IN 3116
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define F_BPCHARREGEXEQ 1658
#define PG_HAS_OPCLASS_OPTIONS() has_fn_opclass_options(fcinfo->flinfo)
#define F_PG_STAT_GET_BACKEND_XACT_START 2857
#define HTMaxStrategyNumber 1
#define Anum_pg_constraint_connamespace 3
#define RULEUTILS_H 
#define ENOTUNIQ 76
#define F_GINHANDLER 333
#define F_PG_STAT_GET_BUF_WRITTEN_BACKEND 2775
#define _PWD_H 1
#define F_CLOSE_SB 368
#define F_CLOSE_SL 962
#define GetCTETargetList(cte) (AssertMacro(IsA((cte)->ctequery, Query)), ((Query *) (cte)->ctequery)->commandType == CMD_SELECT ? ((Query *) (cte)->ctequery)->targetList : ((Query *) (cte)->ctequery)->returningList)
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define PG_GETARG_CSTRING(n) DatumGetCString(PG_GETARG_DATUM(n))
#define F_TIMETZ_LE 1355
#define SOL_ALG 279
#define IsolationUsesXactSnapshot() (XactIsoLevel >= XACT_REPEATABLE_READ)
#define AT_EMPTY_PATH 0x1000
#define F_JSONB_DELETE_JSONB_INT4 3303
#define __INT_LEAST64_WIDTH__ 64
#define F_NAMEOUT 35
#define F_HAS_TYPE_PRIVILEGE_NAME_OID_TEXT 3139
#define INT_LEAST16_MAX (32767)
#define Anum_pg_index_indisunique 5
#define MAX_NODE_LENGTH 255
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define _GNU_SOURCE 1
#define _POSIX_SAVED_IDS 1
#define Natts_pg_index 20
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define F_PG_GET_TRIGGERDEF_OID 1662
#define F_OVERLAPS_TIMESTAMPTZ_TIMESTAMPTZ_TIMESTAMPTZ_TIMESTAMPTZ 1304
#define __POSIX_FADV_DONTNEED 4
#define NI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("NI_IDN_USE_STD3_ASCII_RULES is deprecated") 128
#define PageClearFull(page) (((PageHeader) (page))->pd_flags &= ~PD_PAGE_FULL)
#define PG_CLASS_H 
#define FIELDNO_EXPRCONTEXT_CASENULL 11
#define F_PG_SLEEP_FOR 3935
#define IndexIndrelidIndexId 2678
#define TYPCATEGORY_DATETIME 'D'
#define F_REGCOLLATIONSEND 4197
#define __U32_TYPE unsigned int
#define HAVE_SYS_SELECT_H 1
#define F_LOG_NUMERIC_NUMERIC 1736
#define _STDLIB_H 1
#define IP_RECVERR_RFC4884 26
#define F_LSEG_BOX 1541
#define F_TO_TSQUERY_REGCONFIG_TEXT 3746
#define F_INT2GE 151
#define ConstraintOidIndexId 2667
#define F_PG_CONTROL_RECOVERY 3443
#define F_PG_GET_EXPR_PG_NODE_TREE_OID_BOOL 2509
#define F_PG_GET_MULTIXACT_MEMBERS 3819
#define _BITS_FLOATN_COMMON_H 
#define IP_UNBLOCK_SOURCE 37
#define F_WIN1250_TO_LATIN2 4343
#define CppAsString(identifier) #identifier
#define si_timerid _sifields._timer.si_tid
#define F_INT28MI 942
#define PG_CONSTRAINT_D_H 
#define F_GIST_POINT_FETCH 3282
#define F_CHAROUT 33
#define O_NOCTTY 0400
#define F_UPPER_INF_ANYMULTIRANGE 4241
#define F_POSITIONJOINSEL 1301
#define NO_ADDRESS NO_DATA
#define F_INTERVAL_OUT 1161
#define F_PG_STAT_GET_BGWRITER_TIMED_CHECKPOINTS 2769
#define __ARM_SIZEOF_WCHAR_T 4
#define HAVE_STRING_H 1
#define F_SCALARLESEL 336
#define __ATOMIC_ACQUIRE 2
#define RELKIND_HAS_STORAGE(relkind) ((relkind) == RELKIND_RELATION || (relkind) == RELKIND_INDEX || (relkind) == RELKIND_SEQUENCE || (relkind) == RELKIND_TOASTVALUE || (relkind) == RELKIND_MATVIEW)
#define GAI_WAIT 0
#define IP_DEFAULT_MULTICAST_TTL 1
#define F_NAMENE 659
#define F_PG_STAT_GET_DB_SESSIONS_KILLED 6191
#define F_PG_STAT_GET_BACKEND_USERID 1939
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define F_GTSVECTOR_COMPRESS 3648
#define F_JSONB_DELETE_PATH 3304
#define F_TS_HEADLINE_TEXT_TSQUERY 3755
#define F_DIST_POLYC 785
#define F_TIMETZ_LT 1354
#define __uid_t_defined 
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define LLONG_WIDTH 64
#define F_SET_MASKLEN_INET_INT4 605
#define F_LENGTH_BIT 1681
#define F_MIN_FLOAT4 2135
#define EUNATCH 49
#define SOL_ATM 264
#define F_MIN_FLOAT8 2136
#define F_INTERVAL_MI 1170
#define MemoryContextIsValid(context) ((context) != NULL && (IsA((context), AllocSetContext) || IsA((context), SlabContext) || IsA((context), GenerationContext)))
#define F_TABLE_TO_XML 2923
#define ACL_ID_PUBLIC 0
#define F_CIRCLE_BOX 1479
#define F_CURRTID2 1294
#define F_NUMRANGE_SUBDIFF 3924
#define INT_LEAST16_MIN (-32767-1)
#define USE_ICU 1
#define LWLOCK_H 
#define F_FLOAT4GT 291
#define F_TEXTLENAME 249
#define __flexarr []
#define fcSetArgExt(fc,n,val,is_null) (((fc)->args[n].isnull = (is_null)), ((fc)->args[n].value = (val)))
#define F_SIND 2735
#define F_XMLAGG 2901
#define ACL_TRIGGER_CHR 't'
#define F_LO_LSEEK64 3170
#define F_TIMETZ_MI_INTERVAL 1750
#define BlockIdCopy(toBlockId,fromBlockId) ( AssertMacro(PointerIsValid(toBlockId)), AssertMacro(PointerIsValid(fromBlockId)), (toBlockId)->bi_hi = (fromBlockId)->bi_hi, (toBlockId)->bi_lo = (fromBlockId)->bi_lo )
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define PG_DETOAST_DATUM_SLICE(datum,f,c) pg_detoast_datum_slice((struct varlena *) DatumGetPointer(datum), (int32) (f), (int32) (c))
#define _SC_LONG_BIT _SC_LONG_BIT
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define F_LINE_EQ 1492
#define F_PG_STAT_GET_VACUUM_COUNT 3054
#define F_TIMESTAMPTZ_LE_TIMESTAMP 2528
#define F_SPG_RANGE_QUAD_CHOOSE 3470
#define __socklen_t_defined 
#define O_ACCMODE 0003
#define ACCEPT_TYPE_ARG1 int
#define SIG_HOLD ((__sighandler_t) 2)
#define SHARD_CSTORE_TABLE_SIZE_QUERY "SELECT cstore_table_size(%s)"
#define AF_XDP PF_XDP
#define FIOGETOWN 0x8903
#define F_PG_COPY_PHYSICAL_REPLICATION_SLOT_NAME_NAME_BOOL 4220
#define F_IN_RANGE_DATE_DATE_INTERVAL_BOOL_BOOL 4133
#define F_SETVAL_REGCLASS_INT8 1576
#define F_ARRAY_TO_STRING_ANYARRAY_TEXT 395
#define ERRCODE_UNDEFINED_OBJECT MAKE_SQLSTATE('4','2','7','0','4')
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define F_BRIN_MINMAX_MULTI_DISTANCE_TIMETZ 4632
#define ERRCODE_INVALID_ARGUMENT_FOR_LOG MAKE_SQLSTATE('2','2','0','1','E')
#define IP_HDRINCL 3
#define F_NUMERIC_UPLUS 1915
#define F_INT24EQ 158
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define F_KOI8R_TO_WIN866 4312
#define VARBITOID 1562
#define F_FLOAT48MI 282
#define F_PG_LSN_RECV 3238
#define Anum_pg_attribute_attinhcount 21
#define F_JSONB_PATH_EXISTS_OPR 4010
#define F_ARRAY_LENGTH 2176
#define F_ISVERTICAL_LSEG 1410
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define __SIZEOF_PTHREAD_ATTR_T 64
#define MinSizeOfXactAbort sizeof(xl_xact_abort)
#define bool _Bool
#define EXIT_FAILURE 1
#define GetPGProcByNumber(n) (&ProcGlobal->allProcs[(n)])
#define F_INT24GT 162
#define ALLOCSET_START_SMALL_SIZES ALLOCSET_SMALL_MINSIZE, ALLOCSET_SMALL_INITSIZE, ALLOCSET_DEFAULT_MAXSIZE
#define SizeofMinimalTupleHeader offsetof(MinimalTupleData, t_bits)
#define F_FLOAT8_COMBINE 276
#define FRAMEOPTION_BETWEEN 0x00010
#define F_INETNOT 2627
#define vsnprintf pg_vsnprintf
#define SET_LOCKTAG_PAGE(locktag,dboid,reloid,blocknum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_PAGE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define _GETOPT_POSIX_H 1
#define LC_ALL __LC_ALL
#define _XOPEN_SOURCE 700
#define EILSEQ 84
#define SOL_PPPOL2TP 273
#define fcSetArg(fc,n,value) fcSetArgExt(fc, n, value, false)
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define F_PERCENTILE_CONT_FLOAT8_INTERVAL 3976
#define F_BRIN_INCLUSION_UNION 4108
#define F_INT48MUL 1280
#define Anum_pg_attribute_attfdwoptions 25
#define __OFF_T_MATCHES_OFF64_T 1
#define list_make5_int(x1,x2,x3,x4,x5) list_make5_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3), list_make_int_cell(x4), list_make_int_cell(x5))
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define F_CIRCLE_DIV_PT 1149
#define IN_MULTICAST(a) IN_CLASSD(a)
#define F_VOID_SEND 3121
#define OPEN_DATASYNC_FLAG O_DSYNC
#define PRIdMAX __PRI64_PREFIX "d"
#define __WCHAR_MAX__ 0xffffffffU
#define AF_APPLETALK PF_APPLETALK
#define F_POLY_CENTER 227
#define TTS_FLAG_SHOULDFREE (1 << 2)
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define F_SYSTEM 3314
#define PG_BRIN_MINMAX_MULTI_SUMMARYOID 4601
#define LANGUAGE_HANDLEROID 2280
#define F_PG_XACT_STATUS 5066
#define F_PG_START_BACKUP 2172
#define relpathbackend(rnode,backend,forknum) GetRelationPath((rnode).dbNode, (rnode).spcNode, (rnode).relNode, backend, forknum)
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define ADJ_ESTERROR 0x0008
#define NUMERICOID 1700
#define HeapTupleHeaderGetXmin(tup) ( HeapTupleHeaderXminFrozen(tup) ? FrozenTransactionId : HeapTupleHeaderGetRawXmin(tup) )
#define F_RTRIM_TEXT_TEXT 876
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define XLOGINSERT_H 
#define TABLE_INSERT_SKIP_FSM 0x0002
#define F_MAX_TIME 2123
#define PD_HAS_FREE_LINES 0x0001
#define ERRCODE_FOREIGN_KEY_VIOLATION MAKE_SQLSTATE('2','3','5','0','3')
#define BKPBLOCK_FORK_MASK 0x0F
#define _IOFBF 0
#define F_INT24LE 166
#define F_INTERNAL_IN 2304
#define F_HAS_TABLESPACE_PRIVILEGE_NAME_TEXT_TEXT 2390
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define COLUMNAR_POSTSCRIPT_SIZE_LENGTH 1
#define VARBITARRAYOID 1563
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define F_JSON_OBJECT_FIELD 3947
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define F_INT24MI 182
#define RowMarkRequiresRowShareLock(marktype) ((marktype) <= ROW_MARK_KEYSHARE)
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define SO_SELECT_ERR_QUEUE 45
#define SIGXCPU 24
#define SSIZE_MAX LONG_MAX
#define F_PG_LOGICAL_SLOT_PEEK_CHANGES 3784
#define ANYCOMPATIBLERANGEOID 5080
#define F_LSEG_LENGTH 1487
#define FALLOC_FL_PUNCH_HOLE 0x02
#define F_GETPIPE_SZ 1032
#define F_INT24NE 164
#define SLIST_STATIC_INIT(name) {{NULL}}
#define F_MOD_NUMERIC_NUMERIC 1728
#define F_BOX_ABOVE_EQ 115
#define F_MULTIRANGE_MINUS 4271
#define AI_NUMERICSERV 0x0400
#define XATTR_SIZE_MAX 65536
#define HAVE_POLL_H 1
#define F_EUC_TW_TO_UTF8 4366
#define F_TEXTGENAME 250
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define F_STRING_AGG_TRANSFN 3535
#define F_NUMERIC_NUMERIC_INT4 1703
#define ANYELEMENTOID 2283
#define MaxTransactionIdAttributeNumber (-4)
#define HAVE_LIBREADLINE 1
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define VA_ARGS_NARGS(...) VA_ARGS_NARGS_(__VA_ARGS__, 63,62,61,60, 59,58,57,56,55,54,53,52,51,50, 49,48,47,46,45,44,43,42,41,40, 39,38,37,36,35,34,33,32,31,30, 29,28,27,26,25,24,23,22,21,20, 19,18,17,16,15,14,13,12,11,10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#define PG_COPYRES_ATTRS 0x01
#define F_TIMESTAMPTZ_GE_DATE 2381
#define F_ISFINITE_INTERVAL 1390
#define F_REGNAMESPACEIN 4084
#define F_TXID_SNAPSHOT_SEND 2942
#define PVC_RECURSE_PLACEHOLDERS 0x0020
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define HAVE_PTHREAD 1
#define F_BINARY_UPGRADE_SET_NEXT_PG_TYPE_OID 3582
#define POLL_MSG POLL_MSG
#define F_TIME_TIMESTAMPTZ 2019
#define UINT64_C(c) c ## UL
#define SIZEOF_BOOL 1
#define F_INTERNAL_OUT 2305
#define F_PG_TRY_ADVISORY_LOCK_INT8 2882
#define __FINITE_MATH_ONLY__ 0
#define ReplicationSlotControlLock (&MainLWLockArray[37].lock)
#define HEAP_MIN_FILLFACTOR 10
#define ERRCODE_E_R_I_E_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('3','9','0','0','4')
#define F_PG_ADVISORY_UNLOCK_SHARED_INT8 2885
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define F_PATH 1447
#define planner_subplan_get_plan(root,subplan) ((Plan *) list_nth((root)->glob->subplans, (subplan)->plan_id - 1))
#define DISTRIBUTE_BY_NONE 'n'
#define TransactionIdStore(xid,dest) (*(dest) = (xid))
#define RTOverBelowStrategyNumber 9
#define __ARM_FEATURE_UNALIGNED 1
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define EBADR 53
#define ERRCODE_FDW_NO_SCHEMAS MAKE_SQLSTATE('H','V','0','0','P')
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define stats_compat(a,b,c,d,e) stats(a, b, c, d, e)
#define __pid_t_defined 
#define SYSATTR_H 
#define F_WIN1251_TO_KOI8R 4311
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define _POSIX_NO_TRUNC 1
#define ECANCELED 125
#define F_PG_STAT_GET_XACT_TUPLES_UPDATED 3041
#define TYPTYPE_DOMAIN 'd'
#define XLR_SPECIAL_REL_UPDATE 0x01
#define ERRCODE_BRANCH_TRANSACTION_ALREADY_ACTIVE MAKE_SQLSTATE('2','5','0','0','2')
#define SIGFPE 8
#define F_ROUND_FLOAT8 1342
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define linitial(l) lfirst(list_nth_cell(l, 0))
#define ERRCODE_UNDEFINED_SCHEMA MAKE_SQLSTATE('3','F','0','0','0')
#define _THREAD_MUTEX_INTERNAL_H 1
#define F_GIST_BOX_SAME 2584
#define MSG_MORE MSG_MORE
#define ERRCODE_EXTERNAL_ROUTINE_EXCEPTION MAKE_SQLSTATE('3','8','0','0','0')
#define PG_GETARG_HEAPTUPLEHEADER_COPY(n) DatumGetHeapTupleHeaderCopy(PG_GETARG_DATUM(n))
#define PG_RETURN_INTERVAL_P(x) return IntervalPGetDatum(x)
#define INT_FAST8_MAX (127)
#define UNIX_EPOCH_JDATE 2440588
#define F_ANYARRAY_OUT 2297
#define _BITS_STRING_FORTIFIED_H 1
#define LOCK_LOCKTAG(lock) ((LockTagType) (lock).tag.locktag_type)
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define PG_GETARG_VARLENA_PP(n) PG_DETOAST_DATUM_PACKED(PG_GETARG_DATUM(n))
#define F_INT84MI 1275
#define PG_CONSTRAINT_H 
#define PRIXFAST32 __PRIPTR_PREFIX "X"
#define F_SCHEMA_TO_XML 2933
#define F_ON_PS 369
#define F_JSON_TO_TSVECTOR_JSON_JSONB 4215
#define F_LINE_INTERSECT 1495
#define RelationGetTargetPageFreeSpace(relation,defaultff) (BLCKSZ * (100 - RelationGetFillFactor(relation, defaultff)) / 100)
#define F_TIDEQ 1292
#define MSG_PEEK MSG_PEEK
#define strtou64(str,endptr,base) ((uint64) strtoul(str, endptr, base))
#define htobe16(x) __bswap_16 (x)
#define ERRCODE_INVALID_FOREIGN_KEY MAKE_SQLSTATE('4','2','8','3','0')
#define BlockIdEquals(blockId1,blockId2) ((blockId1)->bi_hi == (blockId2)->bi_hi && (blockId1)->bi_lo == (blockId2)->bi_lo)
#define PROC_IS_AUTOVACUUM 0x01
#define HAVE_GETPWUID_R 1
#define false 0
#define __SHRT_MAX__ 0x7fff
#define O_CLOEXEC __O_CLOEXEC
#define F_MIC_TO_WIN1250 4341
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define F_INT42DIV 173
#define USE_SYSTEMD 1
#define ILL_ILLOPC ILL_ILLOPC
#define Anum_pg_type_typcategory 8
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define F_BRIN_SUMMARIZE_RANGE 3999
#define F_OIDSMALLER 1966
#define DEST_H 
#define AllocHugeSizeIsValid(size) ((Size) (size) <= MaxAllocHugeSize)
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define htobe32(x) __bswap_32 (x)
#define F_ON_SL 960
#define F_REGCONFIGSEND 3739
#define PG_GETARG_TRANSACTIONID(n) DatumGetTransactionId(PG_GETARG_DATUM(n))
#define __daddr_t_defined 
#define EXTNODENAME_MAX_LEN 64
#define F_HAS_ANY_COLUMN_PRIVILEGE_OID_TEXT 3029
#define RelationRelation_Rowtype_Id 83
#define F_TSVECTORRECV 3639
#define PRIuMAX __PRI64_PREFIX "u"
#define ACL_NO_RIGHTS 0
#define SO_RCVTIMEO_OLD 20
#define F_CIRCLE_NE 1463
#define IPV6_HDRINCL 36
#define F_PG_LOGICAL_EMIT_MESSAGE_BOOL_TEXT_TEXT 3577
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define SerializableXactHashLock (&MainLWLockArray[28].lock)
#define LockHashPartition(hashcode) ((hashcode) % NUM_LOCK_PARTITIONS)
#define ERRCODE_TRANSACTION_RESOLUTION_UNKNOWN MAKE_SQLSTATE('0','8','0','0','7')
#define F_TSVECTOR_EQ 3618
#define F_HAS_TABLE_PRIVILEGE_OID_TEXT 1927
#define do_text_output_oneline(tstate,str_to_emit) do { Datum values_[1]; bool isnull_[1]; values_[0] = PointerGetDatum(cstring_to_text(str_to_emit)); isnull_[0] = false; do_tup_output(tstate, values_, isnull_); pfree(DatumGetPointer(values_[0])); } while (0)
#define F_BERNOULLI 3313
#define F_ARRAY_REPLACE 3168
#define F_SUBSTRING_TEXT_INT4_INT4 936
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define Natts_pg_class 33
#define F_PG_STAT_GET_FUNCTION_CALLS 2978
#define INDEX_VAR 65002
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define F_ANYCOMPATIBLEARRAY_SEND 5091
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define F_TEXT_SMALLER 459
#define htobe64(x) __bswap_64 (x)
#define FPE_FLTRES FPE_FLTRES
#define F_TSVECTOR_GE 3620
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define F_TSVECTOR_GT 3621
#define WL_LATCH_SET (1 << 0)
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define INT_FAST8_MIN (-128)
#define _UNISTD_H 1
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define RelFileNodeBackendIsTemp(rnode) ((rnode).backend != InvalidBackendId)
#define ERRCODE_SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','4')
#define F_PG_LOGICAL_SLOT_GET_CHANGES 3782
#define __stub_sigreturn 
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define PG_USE_STDBOOL 1
#define SCNo16 "ho"
#define XLOGREADER_H 
#define HeapTupleClearHeapOnly(tuple) HeapTupleHeaderClearHeapOnly((tuple)->t_data)
#define LSYSCACHE_H 
#define F_JSON_POPULATE_RECORD 3960
#define __UID_T_TYPE __U32_TYPE
#define CUSTOMPATH_SUPPORT_BACKWARD_SCAN 0x0001
#define _POSIX_READER_WRITER_LOCKS 200809L
#define CITUS_COLUMNAR_INTERNAL_VERSION "11.1-0"
#define __AARCH64_CMODEL_SMALL__ 1
#define HAVE_GETIFADDRS 1
#define SO_WIFI_STATUS 41
#define F_LINE_RECV 2488
#define HAVE_LDAP_INITIALIZE 1
#define F_PG_LOGICAL_SLOT_GET_BINARY_CHANGES 3783
#define NON_EXEC_STATIC static
#define F_INT8_AVG_ACCUM_INV 3387
#define STA_NANO 0x2000
#define SCNo32 "o"
#define F_DATE_CMP_TIMESTAMPTZ 2357
#define F_PG_GET_SERIAL_SEQUENCE 1665
#define F_PG_ROTATE_LOGFILE 2622
#define F_PG_SNAPSHOT_OUT 5056
#define MinHeapTupleSize MAXALIGN(SizeofHeapTupleHeader)
#define PG_RETURN_EXPANDED_ARRAY(x) PG_RETURN_DATUM(EOHPGetRWDatum(&(x)->hdr))
#define GUC_UNIT_MEMORY 0xF000
#define INDOPTION_DESC 0x0001
#define ERRCODE_UNDEFINED_DATABASE MAKE_SQLSTATE('3','D','0','0','0')
#define F_CIRCLE_DISTANCE 1471
#define F_PG_STAT_GET_DB_TEMP_FILES 3150
#define F_MACADDR8 4123
#define F_LO_TELL64 3171
#define _SC_SHELL _SC_SHELL
#define F_JSON_IN 321
#define ShareUpdateExclusiveLock 4
#define F_FLOAT4IN 200
#define F_THESAURUS_INIT 3740
#define F_SUM_INT2 2109
#define F_SUM_INT4 2108
#define F_SUM_INT8 2107
#define F_BOX_BELOW_EQ 116
#define SO_BPF_EXTENSIONS 48
#define F_CIRCLE_LEFT 1454
#define F_SUM_MONEY 2112
#define __FLT128_MIN_10_EXP__ (-4931)
#define FuncnameGetCandidates_compat(a,b,c,d,e,f,g) FuncnameGetCandidates(a, b, c, d, e, f, g)
#define DatumGetByteaPCopy(X) ((bytea *) PG_DETOAST_DATUM_COPY(X))
#define ESNOTFND ( 409 )
#define standard_ProcessUtility_compat(a,b,c,d,e,f,g,h) standard_ProcessUtility(a, b, c, d, e, f, g, h)
#define EAI_NONAME -2
#define IsolationIsSerializable() (XactIsoLevel == XACT_SERIALIZABLE)
#define _POSIX_AIO_LISTIO_MAX 2
#define F_VARCHARTYPMODIN 2915
#define F_TIMETZ_CMP 1358
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define WORKER_NODE_FIELDS 2
#define F_BTFLOAT48CMP 2194
#define INTSTYLE_SQL_STANDARD 2
#define Anum_pg_type_typlen 5
#define __WCHAR_MIN__ 0U
#define IPV6_MULTICAST_LOOP 19
#define DATEMULTIRANGEARRAYOID 6155
#define F_VAR_SAMP_NUMERIC 2646
#define BYTEAARRAYOID 1001
#define VARATT_IS_SHORT(PTR) VARATT_IS_1B(PTR)
#define PARTITION_MAX_KEYS 32
#define PG_UINT16_MAX (0xFFFF)
#define __FLT64X_HAS_DENORM__ 1
#define F_BRIN_MINMAX_MULTI_OPCINFO 4616
#define F_INTERVAL_AVG 1844
#define F_DATEMULTIRANGE__DATERANGE 4294
#define SET_VARSIZE_1B(PTR,len) (((varattrib_1b *) (PTR))->va_header = (((uint8) (len)) << 1) | 0x01)
#define F_ANYCOMPATIBLERANGE_OUT 5095
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define F_BROADCAST 698
#define WSTOPPED 2
#define PG_GETARG_ACL_P_COPY(n) DatumGetAclPCopy(PG_GETARG_DATUM(n))
#define Anum_pg_type_oid 1
#define F_GIST_BOX_DISTANCE 3998
#define __osockaddr_defined 1
#define F_TO_REGROLE 4093
#define shm_toc_estimate_keys(e,cnt) ((e)->number_of_keys = add_size((e)->number_of_keys, cnt))
#define _SYS_USER_H 1
#define DEF_PGPORT 5432
#define F_INT8_OID 1288
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define AGG_CONTEXT_AGGREGATE 1
#define PointerIsValid(pointer) ((const void*)(pointer) != NULL)
#define VARTAG_IS_EXPANDED(tag) (((tag) & ~1) == VARTAG_EXPANDED_RO)
#define AF_TIPC PF_TIPC
#define TIDARRAYOID 1010
#define HeapTupleHeaderClearMatch(tup) ( (tup)->t_infomask2 &= ~HEAP_TUPLE_HAS_MATCH )
#define F_HAS_SERVER_PRIVILEGE_NAME_TEXT_TEXT 3006
#define F_GCD_INT8_INT8 5045
#define LOCKTAG_LAST_TYPE LOCKTAG_ADVISORY
#define F_TIDRECV 2438
#define F_ARRAY_LOWER 2091
#define DatumGetPointer(X) ((Pointer) (X))
#define F_BOOL_AND 2517
#define _DEFAULT_SOURCE 1
#define _LINUX_POSIX_TYPES_H 
#define ACL_CREATE (1<<9)
#define PointerGetDatum(X) ((Datum) (X))
#define _POSIX2_BC_STRING_MAX 1000
#define SYSCACHE_H 
#define AARR_NDIM(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.ndims : ARR_NDIM((ArrayType *) (a)))
#define Anum_pg_type_typdefault 31
#define PRIuLEAST16 "u"
#define F_HAS_FUNCTION_PRIVILEGE_OID_TEXT 2261
#define F_TIMETZ_SMALLER 1380
#define __LOCK_ALIGNMENT 
#define _XOPEN_REALTIME_THREADS 1
#define F_CIRCLE_OVERABOVE 2588
#define _POSIX_CHILD_MAX 25
#define ERRCODE_INVALID_AUTHORIZATION_SPECIFICATION MAKE_SQLSTATE('2','8','0','0','0')
#define F_SCALARGESEL 337
#define F_REGOPERRECV 2448
#define __USE_XOPEN2K8 1
#define BITS_PER_BYTE 8
#define list_make3_int(x1,x2,x3) list_make3_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3))
#define F_CEIL_FLOAT8 2308
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define closesocket close
#define ENODATA 61
#define PRIuLEAST32 "u"
#define DISTRIBUTE_BY_APPEND 'a'
#define F_HASHVARLENA 456
#define IPV6_AUTHHDR 10
#define F_INT42EQ 159
#define ERRCODE_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('2','2','0','0','4')
#define MAX_RANDOM_VALUE PG_INT32_MAX
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define SET_VARSIZE_SHORT(PTR,len) SET_VARSIZE_1B(PTR, len)
#define F_PG_READ_FILE_TEXT_INT8_INT8_BOOL 3293
#define F_TIMEZONE_INTERVAL_TIMESTAMPTZ 1026
#define FKCONSTR_ACTION_SETNULL 'n'
#define GUC_UNIT_XBLOCKS 0x3000
#define _STATBUF_ST_NSEC 
#define TMP_MAX 238328
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define CITUS_COMMANDS_H 
#define IPV6_RECVERR_RFC4884 31
#define HAVE_COMPUTED_GOTO 1
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME_TEXT_TEXT 3024
#define SET_VARTAG_EXTERNAL(PTR,tag) SET_VARTAG_1B_E(PTR, tag)
#define F_ANYARRAY_SEND 2503
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define F_UTF8_TO_EUC_TW 4367
#define PF_NETBEUI 13
#define F_UUID_HASH 2963
#define F_INT42GE 169
#define F_POINT_VERT 989
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define F_PATH_SUB_PT 1437
#define ACL_SIZE(ACL) ARR_SIZE(ACL)
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define CURSOR_OPT_BINARY 0x0001
#define _SYS_SELECT_H 1
#define _POSIX_THREAD_KEYS_MAX 128
#define IndexRelationGetNumberOfAttributes(relation) ((relation)->rd_index->indnatts)
#define F_FLOAT48LT 301
#define PRIuLEAST64 __PRI64_PREFIX "u"
#define SnapshotAny (&SnapshotAnyData)
#define ERRCODE_COLLATION_MISMATCH MAKE_SQLSTATE('4','2','P','2','1')
#define HAVE_STDINT_H 1
#define F_INT24LT 160
#define Anum_pg_type_typoutput 17
#define F_IS_NORMALIZED 4351
#define F_CURRENT_SCHEMAS 1403
#define TYPCATEGORY_BITSTRING 'V'
#define NUM_SPINLOCK_SEMAPHORES 128
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define SCOPE_DELIMITER '%'
#define __jmp_buf_tag_defined 1
#define DirectFunctionCall2(func,arg1,arg2) DirectFunctionCall2Coll(func, InvalidOid, arg1, arg2)
#define __LC_TELEPHONE 10
#define F_PG_NDISTINCT_RECV 3357
#define F_TS_LEXIZE 3723
#define REGDICTIONARYARRAYOID 3770
#define F_MULTIRANGE 4298
#define SIGURG 23
#define F_FLOAT8LARGER 223
#define CONSTRAINT_EXCLUSION 'x'
#define F_PG_STAT_GET_DB_DEADLOCKS 3152
#define HAVE_INTTYPES_H 1
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define PG_PRINTF_ATTRIBUTE gnu_printf
#define ERRCODE_DISK_FULL MAKE_SQLSTATE('5','3','1','0','0')
#define EINTR 4
#define F_PARSE_IDENT 1268
#define __WCHAR_MAX __WCHAR_MAX__
#define vsprintf pg_vsprintf
#define DirectFunctionCall6(func,arg1,arg2,arg3,arg4,arg5,arg6) DirectFunctionCall6Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define CIRCLEOID 718
#define F_MULTIRANGE_RECV 4233
#define _IO_EOF_SEEN 0x0010
#define DEBUG1 14
#define DEBUG2 13
#define DEBUG3 12
#define DEBUG4 11
#define F_TO_TSVECTOR_REGCONFIG_JSONB 4211
#define ObjectAddressSet(addr,class_id,object_id) ObjectAddressSubSet(addr, class_id, object_id, 0)
#define F_KOI8R_TO_WIN1251 4310
#define F_RANGE_RECV 3836
#define ERRCODE_FDW_INVALID_ATTRIBUTE_VALUE MAKE_SQLSTATE('H','V','0','2','4')
#define SO_LINGER 13
#define INT4RANGEOID 3904
#define F_PG_NODE_TREE_IN 195
#define F_INT42LE 167
#define Anum_pg_class_relfilenode 8
#define PG_INT64_MIN (-INT64CONST(0x7FFFFFFFFFFFFFFF) - 1)
#define __FLT32_IS_IEC_60559__ 2
#define F_SHA256 3420
#define F_ANY_IN 2294
#define F_FLOAT4SMALLER 211
#define F_PG_STAT_GET_XACT_BLOCKS_HIT 3045
#define POLL_PRI POLL_PRI
#define F_LCM_INT4_INT4 5046
#define F_PG_LSN 6103
#define F_ABS_NUMERIC 1705
#define DATEOID 1082
#define F_TO_TIMESTAMP_TEXT_TEXT 1778
#define ERRCODE_IDLE_SESSION_TIMEOUT MAKE_SQLSTATE('5','7','P','0','5')
#define F_INT42MI 183
#define F_PATH_N_GE 986
#define F_MAX_FLOAT8 2120
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define SECS_PER_YEAR (36525 * 864)
#define ILL_ILLADR ILL_ILLADR
#define F_RI_FKEY_RESTRICT_UPD 1649
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC PF_UNSPEC
#define F_FLOAT8_VAR_SAMP 1831
#define F_INT42NE 165
#define F_CUME_DIST_ANY 3990
#define NI_NOFQDN 4
#define F_SJIS_TO_EUC_JP 4325
#define MAXTZLEN 10
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define MCXT_ALLOC_HUGE 0x01
#define PF_CAIF 37
#define AllocSetContextCreate(parent,name,...) (StaticAssertExpr(__builtin_constant_p(name), "memory context names must be constant strings"), AllocSetContextCreateInternal(parent, name, __VA_ARGS__))
#define F_POPEN 1434
#define forfive(cell1,list1,cell2,list2,cell3,list3,cell4,list4,cell5,list5) for (ForFiveState cell1 ##__state = {(list1), (list2), (list3), (list4), (list5), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), multi_for_advance_cell(cell4, cell1 ##__state, l4, i), multi_for_advance_cell(cell5, cell1 ##__state, l5, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL && cell4 != NULL && cell5 != NULL); cell1 ##__state.i++)
#define PACKAGE_NAME "PostgreSQL"
#define F_BIT_LENGTH_BIT 1812
#define JULIAN_MAXYEAR (5874898)
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define F_NUMERIC_GE 1721
#define EAI_IDN_ENCODE -105
#define F_BTTIDCMP 2794
#define F_TSQUERY_GE 3666
#define PATHARRAYOID 1019
#define F_MIC_TO_SJIS 4329
#define F_TSTZRANGE_SUBDIFF 3930
#define F_TSQUERY_GT 3667
#define F_INT42PL 179
#define XLR_BLOCK_ID_ORIGIN 253
#define F_BITLE 1594
#define F_NUMERIC_DIV 1727
#define WORKER_LENGTH 256
#define _STDDEF_H 
#define EAI_FAMILY -6
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define F_INET_SPG_CHOOSE 3796
#define AF_BRIDGE PF_BRIDGE
#define BGW_NEVER_RESTART -1
#define SCNoLEAST16 "ho"
#define F_INT24DIV 172
#define BtreeVacuumLock (&MainLWLockArray[20].lock)
#define IPV6_RECVPATHMTU 60
#define F_PATH_N_LE 985
#define pg_memory_barrier_impl() __atomic_thread_fence(__ATOMIC_SEQ_CST)
#define F_BPCHAR_PATTERN_GE 2177
#define F_BITNE 1582
#define F_ROW_TO_JSON_RECORD 3155
#define F_PATH_N_LT 982
#define _SYS_UCONTEXT_H 1
#define F_GTSVECTORIN 3646
#define F_CUME_DIST_FINAL 3991
#define F_INT4UP 1912
#define RTOverAboveStrategyNumber 12
#define F_FLOAT8_FLOAT4 311
#define F_BITOR 1674
#define SCNoLEAST32 "o"
#define F_INET_GIST_COMPRESS 3555
#define IP_MULTICAST_LOOP 34
#define Anum_pg_sequence_seqstart 3
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define _POSIX2_RE_DUP_MAX 255
#define IsMVCCSnapshot(snapshot) ((snapshot)->snapshot_type == SNAPSHOT_MVCC || (snapshot)->snapshot_type == SNAPSHOT_HISTORIC_MVCC)
#define SOCK_PACKET SOCK_PACKET
#define PRIoFAST32 __PRIPTR_PREFIX "o"
#define F_CURRENT_SCHEMA 1402
#define F_PG_STAT_GET_ARCHIVER 3195
#define F_HASHVARLENAEXTENDED 772
#define TSTZMULTIRANGEARRAYOID 6153
#define IPPROTO_PUP IPPROTO_PUP
#define F_CSTRING_OUT 2293
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define ACL_TRUNCATE (1<<4)
#define F_BTINT48CMP 2188
#define Anum_pg_attribute_attisdropped 19
#define PG_GETARG_ARRAYTYPE_P(n) DatumGetArrayTypeP(PG_GETARG_DATUM(n))
#define Anum_pg_type_typisdefined 10
#define SCNoLEAST64 __PRI64_PREFIX "o"
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define TRANSACTION_STATUS_COMMITTED 0x01
#define F_STDDEV_SAMP_FLOAT8 2716
#define F_TSQUERY_NE 3665
#define F_TIMESTAMP_NE_TIMESTAMPTZ 2525
#define PG_GETARG_POINTER(n) DatumGetPointer(PG_GETARG_DATUM(n))
#define F_FLOAT4GE 292
#define DatumIsReadWriteExpandedObject(d,isnull,typlen) (((isnull) || (typlen) != -1) ? false : VARATT_IS_EXTERNAL_EXPANDED_RW(DatumGetPointer(d)))
#define F_BPCHAR_PATTERN_LE 2175
#define F_FLOAT8OUT 215
#define F_PG_LOG_BACKEND_MEMORY_CONTEXTS 4543
#define F_BPCHAR_PATTERN_LT 2174
#define F_XMLEXISTS 2614
#define WARNING 19
#define PRIoFAST64 __PRI64_PREFIX "o"
#define __USE_ISOC11 1
#define F_INT48EQ 852
#define F_NUMERIC_AVG_ACCUM 2858
#define F_FLOAT8_CORR 2817
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define MAX_PORT_LENGTH 10
#define __FLT64_MANT_DIG__ 53
#define F_POSTGRESQL_FDW_VALIDATOR 2316
#define F_EUC_TW_TO_BIG5 4332
#define F_PG_DDL_COMMAND_OUT 87
#define F_RANGE_INTERSECT_AGG_TRANSFN 4401
#define SCNxFAST8 "hhx"
#define F_PG_REPLICATION_ORIGIN_XACT_RESET 6011
#define F_ANYCOMPATIBLENONARRAY_IN 5092
#define HAVE_APPEND_HISTORY 1
#define F_SPG_KD_CHOOSE 4024
#define ACL_USAGE_CHR 'U'
#define TRANSACTION_STATUS_ABORTED 0x02
#define att_addlength_pointer(cur_offset,attlen,attptr) ( ((attlen) > 0) ? ( (cur_offset) + (attlen) ) : (((attlen) == -1) ? ( (cur_offset) + VARSIZE_ANY(attptr) ) : ( AssertMacro((attlen) == -2), (cur_offset) + (strlen((char *) (attptr)) + 1) )) )
#define UINT_LEAST8_MAX (255)
#define F_PG_STAT_GET_SUBSCRIPTION 6118
#define IPV6_2292PKTOPTIONS 6
#define F_MAX_NUMERIC 2130
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define _LFS64_STDIO 1
#define F_NUMERICTYPMODIN 2917
#define F_NUMERIC_EQ 1718
#define F_SHA512 3422
#define FRAMEOPTION_START_OFFSET (FRAMEOPTION_START_OFFSET_PRECEDING | FRAMEOPTION_START_OFFSET_FOLLOWING)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define F_LIKESEL 1819
#define __SIZEOF_LONG_DOUBLE__ 16
#define SHAREDINVALSNAPSHOT_ID (-5)
#define __ino_t_defined 
#define InvalidBuffer 0
#define F_POINT_POLYGON 1540
#define F_FLOAT84DIV 284
#define F_BYTEANLIKE 2006
#define F_HAS_COLUMN_PRIVILEGE_TEXT_INT2_TEXT 3021
#define MAXINT8LEN 20
#define DROP_REGULAR_TABLE_COMMAND "DROP TABLE IF EXISTS %s CASCADE"
#define F_INT4ABS 1251
#define _SC_ARG_MAX _SC_ARG_MAX
#define isupper(c) __isctype((c), _ISupper)
#define F_FLOAT4MI 205
#define XACT_COMPLETION_FORCE_SYNC_COMMIT (1U << 31)
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define F_ARRAY_AGG_TRANSFN 2333
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define INT4RANGEARRAYOID 3905
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME_TEXT_TEXT 3000
#define INVALID_COLOCATION_ID 0
#define F_NETWORK_OVERLAP 3551
#define IsParallelWorker() (ParallelWorkerNumber >= 0)
#define F_XPATH_EXISTS_TEXT_XML__TEXT 3049
#define SIOCSPGRP 0x8902
#define F_LO_TELL 958
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define EAI_FAIL -4
#define GUC_DISALLOW_IN_AUTO_FILE 0x0800
#define __STRING(x) #x
#define ERRCODE_LOCATOR_EXCEPTION MAKE_SQLSTATE('0','F','0','0','0')
#define F_GINARRAYEXTRACT_ANYARRAY_INTERNAL_INTERNAL 2743
#define F_NETWORK_SUBEQ 928
#define F_RANGE_AGG_FINALFN 4300
#define F_PG_STAT_GET_XACT_TUPLES_INSERTED 3040
#define LOCK_SH 1
#define SO_OOBINLINE 10
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define F_PG_STAT_GET_DB_CONFLICT_TABLESPACE 3065
#define F_CASHLARGER 898
#define F_NUMERIC_MOD 1729
#define F_REGROLEOUT 4092
#define F_GIN_COMPARE_JSONB 3480
#define _POSIX_CHOWN_RESTRICTED 0
#define F_REGEXP_MATCH_TEXT_TEXT_TEXT 3397
#define HEAP_COMBOCID 0x0020
#define __USE_ISOC95 1
#define __USE_ISOC99 1
#define ERRCODE_DUPLICATE_JSON_OBJECT_KEY_VALUE MAKE_SQLSTATE('2','2','0','3','0')
#define Anum_pg_index_indcollation 16
#define F_BITCMP 1596
#define F_FLOAT4PL 204
#define __UINT16_TYPE__ short unsigned int
#define HAVE_WORKING_LINK 1
#define SHMEM_H 
#define relpathperm(rnode,forknum) relpathbackend(rnode, InvalidBackendId, forknum)
#define __GNUC_STDC_INLINE__ 1
#define HAVE__BUILTIN_OP_OVERFLOW 1
#define F_LSEG_PARALLEL 995
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define Int32GetDatum(X) ((Datum) (X))
#define Anum_pg_class_relam 7
#define MOD_FREQUENCY ADJ_FREQUENCY
#define list_nth_node(type,list,n) castNode(type, list_nth(list, n))
#define ItemIdIsUsed(itemId) ((itemId)->lp_flags != LP_UNUSED)
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define FPE_FLTDIV FPE_FLTDIV
#define C_H 
#define F_TS_STAT_TEXT 3689
#define LINEARRAYOID 629
#define RELKIND_INDEX 'i'
#define INT32_WIDTH 32
#define F_PG_GET_WAL_REPLAY_PAUSE_STATE 1137
#define F_PG_COPY_LOGICAL_REPLICATION_SLOT_NAME_NAME_BOOL 4223
#define NI_NUMERICHOST 1
#define getObjectIdentity_compat(a,b) getObjectIdentity(a, b)
#define dummyret void
#define Anum_pg_class_relhasindex 14
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define F_CASH_LT 890
#define IPV6_PMTUDISC_OMIT 5
#define __USE_LARGEFILE 1
#define MSG_FASTOPEN MSG_FASTOPEN
#define F_ARRAYCONTSEL 3817
#define F_BYTEA_STRING_AGG_TRANSFN 3543
#define __USE_XOPEN 1
#define HeapTupleHeaderGetSpeculativeToken(tup) ( AssertMacro(HeapTupleHeaderIsSpeculative(tup)), ItemPointerGetBlockNumber(&(tup)->t_ctid) )
#define isspace(c) __isctype((c), _ISspace)
#define PRIi16 "i"
#define F_TSQUERYRECV 3641
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define ERRCODE_INVALID_TABLESAMPLE_ARGUMENT MAKE_SQLSTATE('2','2','0','2','H')
#define HAVE_INT_TIMEZONE 1
#define HAVE_STRNLEN 1
#define PROC_IN_VACUUM 0x02
#define F_NUMERIC_SQRT 1731
#define F_FLOAT4UM 206
#define F_FLOAT4UP 1913
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define _POSIX_PATH_MAX 256
#define GetSysCacheHashValue1(cacheId,key1) GetSysCacheHashValue(cacheId, key1, 0, 0, 0)
#define GetSysCacheHashValue2(cacheId,key1,key2) GetSysCacheHashValue(cacheId, key1, key2, 0, 0)
#define F_ENUM_SEND 3533
#define FmgrHookIsNeeded(fn_oid) (!needs_fmgr_hook ? false : (*needs_fmgr_hook)(fn_oid))
#define VARTAG_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_tag)
#define _ISOC11_SOURCE 1
#define InitTupleHashIterator(htable,iter) tuplehash_start_iterate(htable->hashtab, iter)
#define F_IN_RANGE_INT2_INT2_INT4_BOOL_BOOL 4131
#define F_GENERATE_SERIES_INT4_SUPPORT 3994
#define HeapTupleHeaderXminFrozen(tup) ( ((tup)->t_infomask & (HEAP_XMIN_FROZEN)) == HEAP_XMIN_FROZEN )
#define PGUNSIXBIT(val) (((val) & 0x3F) + '0')
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define F_XML_OUT 2894
#define __INT_FAST16_TYPE__ long int
#define F_GET_CURRENT_TS_CONFIG 3759
#define ScanTupleHashTable(htable,iter) tuplehash_iterate(htable->hashtab, iter)
#define _SIZE_T_DEFINED 
#define SearchSysCacheCopy3(cacheId,key1,key2,key3) SearchSysCacheCopy(cacheId, key1, key2, key3, 0)
#define SearchSysCacheCopy4(cacheId,key1,key2,key3,key4) SearchSysCacheCopy(cacheId, key1, key2, key3, key4)
#define SearchSysCacheList2(cacheId,key1,key2) SearchSysCacheList(cacheId, 2, key1, key2, 0)
#define SearchSysCacheList3(cacheId,key1,key2,key3) SearchSysCacheList(cacheId, 3, key1, key2, key3)
#define ERRCODE_BAD_COPY_FILE_FORMAT MAKE_SQLSTATE('2','2','P','0','4')
#define list_make1_int(x1) list_make1_impl(T_IntList, list_make_int_cell(x1))
#define F_MACADDR_AND 3145
#define _WCHAR_T_DEFINED_ 
#define isalpha(c) __isctype((c), _ISalpha)
#define ECHILD 10
#define F_BTBPCHAR_PATTERN_SORTSUPPORT 3333
#define PG_TOTAL_RELATION_SIZE_FUNCTION "pg_total_relation_size(%s)"
#define ClassNameNspIndexId 2663
#define BufferIsInvalid(buffer) ((buffer) == InvalidBuffer)
#define F_JSONB_ARRAY_ELEMENT_TEXT 3216
#define MSG_TRYHARD MSG_DONTROUTE
#define F_JSONB_PATH_QUERY_ARRAY 4007
#define F_PG_LS_LOGDIR 3353
#define _BITS_POSIX2_LIM_H 1
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define ERRCODE_WARNING_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','1','0','0','C')
#define F_OVERLAPS_TIME_INTERVAL_TIME_INTERVAL 1309
#define FirstNormalObjectId 16384
#define __stub_setlogin 
#define PG_GETARG_HEAPTUPLEHEADER(n) DatumGetHeapTupleHeader(PG_GETARG_DATUM(n))
#define _POSIX_SPORADIC_SERVER -1
#define TransactionIdIsValid(xid) ((xid) != InvalidTransactionId)
#define F_BINARY_UPGRADE_SET_NEXT_TOAST_PG_CLASS_OID 3588
#define INSTR_TIME_H 
#define F_LATIN4_TO_MIC 4348
#define CLASS_TUPLE_SIZE (offsetof(FormData_pg_class,relminmxid) + sizeof(TransactionId))
#define F_INT4_MUL_CASH 862
#define Natts_pg_attribute 26
#define PG_TYPE_D_H 
#define F_PG_STAT_GET_DB_TEMP_BYTES 3151
#define INDEX_AM_HANDLEROID 325
#define true 1
#define F_POINT_PATH 1533
#define ERRCODE_WARNING_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('0','1','0','0','4')
#define CommitTsSLRULock (&MainLWLockArray[38].lock)
#define F_CASH_RECV 2492
#define __S32_TYPE int
#define F_WIDTH 976
#define IP_PKTOPTIONS 9
#define RTOverLeftStrategyNumber 2
#define F_FLOAT8ABS 221
#define WORKER_RACK_TRIES 5
#define VARATT_IS_COMPRESSED(PTR) VARATT_IS_4B_C(PTR)
#define HeapTupleHeaderSetNatts(tup,natts) ( (tup)->t_infomask2 = ((tup)->t_infomask2 & ~HEAP_NATTS_MASK) | (natts) )
#define WAIT_EVENT_SET_INDEX_NOT_INITIALIZED -1
#define REGNAMESPACEARRAYOID 4090
#define UTILITY_H 
#define F_LO_PUT 3460
#define __toascii_l(c,l) ((l), __toascii (c))
#define XLogRecGetPrev(decoder) ((decoder)->decoded_record->xl_prev)
#define HeapTupleHeaderHasMatch(tup) ( ((tup)->t_infomask2 & HEAP_TUPLE_HAS_MATCH) != 0 )
#define _POSIX_DELAYTIMER_MAX 32
#define PVC_INCLUDE_AGGREGATES 0x0001
#define CHECKPOINT_FORCE 0x0008
#define F_NAMELETEXT 242
#define F_TEXT_BPCHAR 401
#define F_BPCHARTYPMODIN 2913
#define F_JSONB_EQ 4043
#define AGGSPLITOP_COMBINE 0x01
#define PageClearAllVisible(page) (((PageHeader) (page))->pd_flags &= ~PD_ALL_VISIBLE)
#define CSTRINGOID 2275
#define Anum_pg_class_oid 1
#define PDP_ENDIAN __PDP_ENDIAN
#define HeapTupleHeaderSetXvac(tup,xid) do { Assert((tup)->t_infomask & HEAP_MOVED); (tup)->t_choice.t_heap.t_field3.t_xvac = (xid); } while (0)
#define F_LO_IMPORT_TEXT_OID 767
#define F_JSONB_PATH_QUERY_FIRST_TZ 2023
#define shm_toc_initialize_estimator(e) ((e)->space_for_chunks = 0, (e)->number_of_keys = 0)
#define F_ANYRANGE_IN 3832
#define Natts_pg_constraint 25
#define F_DATE_TRUNC_TEXT_INTERVAL 1218
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define F_FLOAT8GT 297
#define UINT_LEAST16_WIDTH 16
#define WALWriteLock (&MainLWLockArray[8].lock)
#define F_PG_GET_BACKEND_MEMORY_CONTEXTS 2282
#define SIZEOF_DATUM SIZEOF_VOID_P
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define BUS_OBJERR BUS_OBJERR
#define F_JSONB_GT 4040
#define IPPROTO_RSVP IPPROTO_RSVP
#define F_RANGE_INTERSECT_AGG_ANYRANGE 4450
#define TTS_IS_BUFFERTUPLE(slot) ((slot)->tts_ops == &TTSOpsBufferHeapTuple)
#define TXID_SNAPSHOTARRAYOID 2949
#define ANYCOMPATIBLEMULTIRANGEOID 4538
#define SO_BINDTODEVICE 25
#define SnapshotSelf (&SnapshotSelfData)
#define F_ADD_SEALS 1033
#define _PTRDIFF_T_DECLARED 
#define F_PRSD_NEXTTOKEN 3718
#define F_FLOOR_NUMERIC 1712
#define XACT_XINFO_HAS_DBINFO (1U << 0)
#define IP_PMTUDISC_PROBE 3
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __glibc_objsize(__o) __bos (__o)
#define F_MIN_INTERVAL 2144
#define F_LENGTH_BYTEA 2010
#define dsa_pointer_atomic_write pg_atomic_write_u64
#define F_CLOCK_TIMESTAMP 2649
#define STA_PLL 0x0001
#define ERRCODE_E_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('3','8','0','0','3')
#define __FLT32_HAS_QUIET_NAN__ 1
#define F_TS_MATCH_QV 3635
#define MCAST_EXCLUDE 0
#define F_DATE_GT_TIMESTAMP 2341
#define F_PERCENTILE_CONT_INTERVAL_MULTI_FINAL 3983
#define F_HASHOID 453
#define F_TIME_TIMESTAMP 1316
#define EBADSLT 57
#define IPPROTO_AH IPPROTO_AH
#define F_INT8_NUMERIC 1779
#define TrapMacro(condition,errorType) (true)
#define F_FLOAT4LT 289
#define F_PG_MCV_LIST_RECV 5020
#define Int64GetDatum(X) ((Datum) (X))
#define ERRCODE_LOCK_FILE_EXISTS MAKE_SQLSTATE('F','0','0','0','1')
#define isalnum(c) __isctype((c), _ISalnum)
#define REPLICA_IDENTITY_NOTHING 'n'
#define F_REGOPEROUT 2215
#define F_BRIN_BLOOM_SUMMARY_RECV 4598
#define CommitTsLock (&MainLWLockArray[39].lock)
#define XACT_FLAGS_ACQUIREDACCESSEXCLUSIVELOCK (1U << 1)
#define F_PG_PREPARED_STATEMENT 2510
#define IPV6_PMTUDISC_DONT 0
#define ItemIdIsDead(itemId) ((itemId)->lp_flags == LP_DEAD)
#define ACL_CONNECT_CHR 'c'
#define IPPROTO_ICMP IPPROTO_ICMP
#define BITMAPSET_H 
#define F_JSONB_LT 4039
#define F_TIMESTAMP_EQ_TIMESTAMPTZ 2522
#define DatumGetAclPCopy(X) ((Acl *) PG_DETOAST_DATUM_COPY(X))
#define ERRCODE_DIAGNOSTICS_EXCEPTION MAKE_SQLSTATE('0','Z','0','0','0')
#define INETOID 869
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define HAVE_BACKTRACE_SYMBOLS 1
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define F_WIDTH_BUCKET_FLOAT8_FLOAT8_FLOAT8_INT4 320
#define SK_UNARY 0x0002
#define PF_UNSPEC 0
#define F_BIT_COUNT_BIT 6162
#define F_BYTEA_SORTSUPPORT 3331
#define BKI_FORCE_NOT_NULL 
#define BoolGetDatum(X) ((Datum) ((X) ? 1 : 0))
#define F_JSON_ARRAY_ELEMENT_TEXT 3950
#define __isascii_l(c,l) ((l), __isascii (c))
#define F_BTNAMECMP 359
#define PGWARNING 19
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define AlterTableStmtObjType_compat(a) ((a)->objtype)
#define F_JSON_OUT 322
#define ItemPointerSetOffsetNumber(pointer,offsetNumber) ( AssertMacro(PointerIsValid(pointer)), (pointer)->ip_posid = (offsetNumber) )
#define PF_MCTP 45
#define HeapTupleHeaderSetCmax(tup,cid,iscombo) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); if (iscombo) (tup)->t_infomask |= HEAP_COMBOCID; else (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define EKEYREVOKED 128
#define F_NUMERIC_SUB 1725
#define F_BTINT4CMP 351
#define F_TIME_INTERVAL 1419
#define F_CLOSE_LB 963
#define MACADDRARRAYOID 1040
#define USE_FLOAT8_BYVAL 1
#define PF_X25 9
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define F_CHARACTER_LENGTH_TEXT 1369
#define ERRCODE_S_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('2','F','0','0','3')
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
#define F_WIN866_TO_ISO 4321
#define RelationIsLogicallyLogged(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && (relation)->rd_rel->relkind != RELKIND_FOREIGN_TABLE && !IsCatalogRelation(relation))
#define F_ENCODE 1946
#define ReleaseTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) DecrTupleDescRefCount(tupdesc); } while (0)
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define HAVE_FUNCNAME__FUNC 1
#define FirstNormalUnloggedLSN ((XLogRecPtr) 1000)
#define F_PG_TS_CONFIG_IS_VISIBLE 3758
#define F_BRIN_MINMAX_ADD_VALUE 3384
#define F_SHLCK 8
#define DEFAULT_EVENT_SOURCE "PostgreSQL"
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define F_POINT_LSEG 1532
#define FILE_POSSIBLY_DELETED(err) ((err) == ENOENT)
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
#define F_BOOLEQ 60
#define _SC_WORD_BIT _SC_WORD_BIT
#define F_PERCENTILE_CONT__FLOAT8_INTERVAL 3982
#define __HAVE_GENERIC_SELECTION 1
#define F_GETFD 1
#define F_CASH_MUL_INT4 864
#define _POSIX_CLOCKRES_MIN 20000000
#define F_GETFL 3
#define SpinLockRelease(lock) S_UNLOCK(lock)
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define F_JSONB_CONTAINED 4050
#define ShareRowExclusiveLock 6
#define F_REGOPERIN 2214
#define S_IRWXG (S_IRWXU >> 3)
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define F_JOHAB_TO_UTF8 4376
#define F_HAS_COLUMN_PRIVILEGE_NAME_OID_INT2_TEXT 3015
#define F_BTINT82CMP 2193
#define SCNuLEAST8 "hhu"
#define BKPIMAGE_IS_COMPRESSED 0x02
#define EADDRINUSE 98
#define F_TRIM_SCALE 5043
#define F_INT2DIV 153
#define IPPROTO_MH IPPROTO_MH
#define PRIx16 "x"
#define F_BIT_AND_INT2 2236
#define PG_HAVE_ATOMIC_FLAG_SUPPORT 
#define HeapTupleHeaderSetCmin(tup,cid) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define F_TIMEZONE_TEXT_TIMESTAMP 2069
#define F_PG_ENCODING_MAX_LENGTH 2319
#define F_TEXTNE 157
#define F_ICLIKEJOINSEL 1816
#define INSTR_TIME_ADD(x,y) do { (x).tv_sec += (y).tv_sec; (x).tv_nsec += (y).tv_nsec; while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define F_MAKE_TIME 3847
#define F_HAS_SEQUENCE_PRIVILEGE_TEXT_TEXT 2185
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define F_SET_BIT_BIT_INT4_INT4 3033
#define __WCOREFLAG 0x80
#define HAVE_READLINE_READLINE_H 1
#define F_VARBITTYPMODIN 2902
#define PRIx32 "x"
#define __O_DIRECTORY 040000
#define _XOPEN_UNIX 1
#define ERRCODE_DUPLICATE_SCHEMA MAKE_SQLSTATE('4','2','P','0','6')
#define F_FLOAT4LE 290
#define F_CIRCLE_OVERLEFT 1455
#define F_GINARRAYTRICONSISTENT 3920
#define forboth(cell1,list1,cell2,list2) for (ForBothState cell1 ##__state = {(list1), (list2), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), (cell1 != NULL && cell2 != NULL); cell1 ##__state.i++)
#define F_OVERLAY_BYTEA_BYTEA_INT4_INT4 749
#define F_PG_STAT_RESET_SINGLE_FUNCTION_COUNTERS 3777
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define F_SPG_RANGE_QUAD_PICKSPLIT 3471
#define F_HAS_COLUMN_PRIVILEGE_OID_INT2_TEXT 3023
#define F_INTERVAL_PL 1169
#define F_PG_STAT_GET_XACT_BLOCKS_FETCHED 3044
#define F_TEXTLIKE_SUPPORT 1023
#define CHAROID 18
#define F_HAS_SEQUENCE_PRIVILEGE_OID_TEXT_TEXT 2183
#define XLOG_XACT_ASSIGNMENT 0x50
#define __SI_BAND_TYPE long int
#define PRIx64 __PRI64_PREFIX "x"
#define F_DATE_SMALLER 1139
#define NL_ARGMAX _POSIX_ARG_MAX
#define INT_LEAST8_MAX (127)
#define F_PERCENTILE_DISC__FLOAT8_ANYELEMENT 3978
#define F_PG_TRY_ADVISORY_LOCK_SHARED_INT4_INT4 2889
#define CIDRARRAYOID 651
#define F_REGNAMESPACERECV 4087
#define F_ICNLIKESEL 1815
#define FLOAT8_FITS_IN_INT32(num) ((num) >= (float8) PG_INT32_MIN && (num) < -((float8) PG_INT32_MIN))
#define AF_KCM PF_KCM
#define F_HAS_SEQUENCE_PRIVILEGE_OID_OID_TEXT 2184
#define F_OVERLAPS_TIMESTAMP_TIMESTAMP_TIMESTAMP_TIMESTAMP 2041
#define F_PG_STAT_GET_BLOCKS_FETCHED 1934
#define RSIZE_MAX_MEM ( 256UL << 20 )
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define F_FLOAT8_REGR_SLOPE 2813
#define F_WIN866_TO_WIN1251 4314
#define ItemIdGetRedirect(itemId) ((itemId)->lp_off)
#define si_pkey _sifields._sigfault._bounds._pkey
#define XMLARRAYOID 143
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define ItemPointerSetBlockNumber(pointer,blockNumber) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber) )
#define F_TIMESTAMP_SMALLER 2035
#define Anum_pg_type_typmodout 21
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
#define F_TSMULTIRANGE_TSRANGE 4287
#define F_BRIN_MINMAX_MULTI_DISTANCE_TIME 4630
#define FLOAT8_FITS_IN_INT64(num) ((num) >= (float8) PG_INT64_MIN && (num) < -((float8) PG_INT64_MIN))
#define CHAR_BIT __CHAR_BIT__
#define __attribute_pure__ __attribute__ ((__pure__))
#define MinSizeOfXactCommit (offsetof(xl_xact_commit, xact_time) + sizeof(TimestampTz))
#define F_MIN_INT4 2132
#define F_TIMESTAMPTZ_EQ_DATE 2379
#define F_NUMERIC_STDDEV_SAMP 1839
#define NUMERICARRAYOID 1231
#define DatumGetTextPSlice(X,m,n) ((text *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define DT_BLK DT_BLK
#define __SLONGWORD_TYPE long int
#define F_ARRAY_GT 392
#define PF_XDP 44
#define INT2ARRAYOID 1005
#define INDEX_NULL_MASK 0x8000
#define F_BRIN_MINMAX_MULTI_OPTIONS 4620
#define F_CIRCLE_SUB_PT 1147
#define ItemIdIsNormal(itemId) ((itemId)->lp_flags == LP_NORMAL)
#define F_HOSTMASK 1362
#define F_REVERSE 3062
#define F_RTRIM_TEXT 882
#define BGW_EXTRALEN 128
#define F_OCTET_LENGTH_BIT 1682
#define F_FLOAT48GT 303
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define F_TXID_SNAPSHOT_IN 2939
#define HAVE_IFADDRS_H 1
#define F_PG_TABLESPACE_SIZE_NAME 2323
#define F_TEXT_PATTERN_GT 2164
#define IS_VALID_JULIAN(y,m,d) (((y) > JULIAN_MINYEAR || ((y) == JULIAN_MINYEAR && ((m) >= JULIAN_MINMONTH))) && ((y) < JULIAN_MAXYEAR || ((y) == JULIAN_MAXYEAR && ((m) < JULIAN_MAXMONTH))))
#define F_LOWER_INF_ANYRANGE 3853
#define INVAL_H 
#define F_TS_FILTER 3319
#define F_PG_ADVISORY_UNLOCK_INT8 2884
#define F_RAW_ARRAY_SUBSCRIPT_HANDLER 6180
#define INT8RANGEARRAYOID 3927
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define F_LAG_ANYCOMPATIBLE_INT4_ANYCOMPATIBLE 3108
#define RangeTableEntryFromNSItem(a) ((a)->p_rte)
#define gettext_noop(x) (x)
#define JSONOID 114
#define F_MAX_ANYARRAY 2050
#define F_TS_RANK__FLOAT4_TSVECTOR_TSQUERY_INT4 3703
#define AIO_PRIO_DELTA_MAX 20
#define F_DATABASE_TO_XMLSCHEMA 2937
#define SO_KEEPALIVE 9
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define ACCEPT_TYPE_ARG3 socklen_t
#define F_INT24PL 178
#define __SVE_VQ_MIN 1
#define HAVE_SPECIALJOININFO_TYPEDEF 1
#define RELKIND_SEQUENCE 'S'
#define F_MD5_BYTEA 2321
#define F_PG_LISTENING_CHANNELS 3035
#define F_PG_DROP_REPLICATION_SLOT 3780
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define MEMSET_LOOP_LIMIT 1024
#define F_MIC_TO_BIG5 4337
#define HeapTupleHeaderGetTypeId(tup) ( (tup)->t_choice.t_datum.datum_typeid )
#define SKEY_H 
#define F_HAS_FUNCTION_PRIVILEGE_NAME_OID_TEXT 2257
#define F_FLOAT48LE 302
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define F_INET_SPG_INNER_CONSISTENT 3798
#define F_INT84LT 476
#define F_LIKE_NAME_TEXT 1571
#define islower_l(c,l) __islower_l ((c), (l))
#define F_JSON_AGG 3175
#define ARR_NULLBITMAP(a) (ARR_HASNULL(a) ? (bits8 *) (((char *) (a)) + sizeof(ArrayType) + 2 * sizeof(int) * ARR_NDIM(a)) : (bits8 *) NULL)
#define AARR_ELEMTYPE(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.element_type : ARR_ELEMTYPE((ArrayType *) (a)))
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define F_ISO8859_TO_UTF8 4373
#define LINE_MAX _POSIX2_LINE_MAX
#define F_JSON_BUILD_OBJECT_ANY 3200
#define NGROUPS_MAX 65536
#define EHOSTUNREACH 113
#define AGGSPLITOP_DESERIALIZE 0x08
#define SIGVTALRM 26
#define F_FLOAT48NE 300
#define F_LOWER_INF_ANYMULTIRANGE 4240
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define F_PG_READ_FILE_TEXT_INT8_INT8 2624
#define F_ARRAY_SMALLER 516
#define DirectFunctionCall1(func,arg1) DirectFunctionCall1Coll(func, InvalidOid, arg1)
#define DirectFunctionCall3(func,arg1,arg2,arg3) DirectFunctionCall3Coll(func, InvalidOid, arg1, arg2, arg3)
#define DirectFunctionCall4(func,arg1,arg2,arg3,arg4) DirectFunctionCall4Coll(func, InvalidOid, arg1, arg2, arg3, arg4)
#define DirectFunctionCall5(func,arg1,arg2,arg3,arg4,arg5) DirectFunctionCall5Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define DirectFunctionCall7(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7) DirectFunctionCall7Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define DirectFunctionCall8(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) DirectFunctionCall8Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define DirectFunctionCall9(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) DirectFunctionCall9Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define __USE_DYNAMIC_STACK_SIZE 1
#define F_ARRAY_TO_TSVECTOR 3327
#define CATALOG(name,oid,oidmacro) typedef struct CppConcat(FormData_,name)
#define F_DATERANGE_SUBDIFF 3925
#define __attribute_used__ __attribute__ ((__used__))
#define F_GTSVECTOR_PENALTY 3653
#define F_PG_MCV_LIST_IN 5018
#define ACL_N_SIZE(N) (ARR_OVERHEAD_NONULLS(1) + ((N) * sizeof(AclItem)))
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define F_TABLE_TO_XML_AND_XMLSCHEMA 2929
#define F_NUMERIC_GT 1720
#define SI_ASYNCIO SI_ASYNCIO
#define F_RANGE_CONTAINED_BY 3861
#define __LC_ALL 6
#define ItemPointerIndicatesMovedPartitions(pointer) ( ItemPointerGetOffsetNumber(pointer) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(pointer) == MovedPartitionsBlockNumber )
#define QUERYENVIRONMENT_H 
#define _SC_TRACE _SC_TRACE
#define F_FLOAT48PL 281
#define F_FMGR_C_VALIDATOR 2247
#define EBADFD 77
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define HAVE_LIBXSLT 1
#define F_TIMESTAMPTZ_TIMESTAMP 2028
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define Anum_pg_class_relpersistence 16
#define TIMESTAMP_IS_NOBEGIN(j) ((j) == DT_NOBEGIN)
#define F_PG_SNAPSHOT_IN 5055
#define F_PREFIXJOINSEL 3438
#define ECONNRESET 104
#define F_NUMERIC_IN 1701
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define FD_CLOEXEC 1
#define SCNoPTR __PRIPTR_PREFIX "o"
#define F_BRIN_BLOOM_SUMMARY_IN 4596
#define F_FLOAT48MUL 279
#define pg_spin_delay() pg_spin_delay_impl()
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define SEEK_CUR 1
#define F_HASHFLOAT4EXTENDED 443
#define SIG_ATOMIC_MAX (2147483647)
#define ENOPKG 65
#define ELNRNG 48
#define CURSOR_OPT_SCROLL 0x0002
#define F_PG_HAS_ROLE_NAME_NAME_TEXT 2705
#define F_LATIN3_TO_MIC 4346
#define _SC_2_C_BIND _SC_2_C_BIND
#define F_HAS_TABLESPACE_PRIVILEGE_OID_TEXT_TEXT 2392
#define IPV6_TRANSPARENT 75
#define PD_VALID_FLAG_BITS 0x0007
#define HeapTupleHasExternal(tuple) (((tuple)->t_data->t_infomask & HEAP_HASEXTERNAL) != 0)
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define F_PG_STAT_CLEAR_SNAPSHOT 2230
#define ERRCODE_WINDOWING_ERROR MAKE_SQLSTATE('4','2','P','2','0')
#define F_NUMERIC_LE 1723
#define F_INT2SHR 1897
#define F_NUMERIC_LT 1722
#define INT32_MAX (2147483647)
#define Anum_pg_constraint_oid 1
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define F_REGR_R2 2824
#define F_BRIN_MINMAX_MULTI_DISTANCE_MACADDR 4634
#define F_NAMEGE 658
#define _PATH_PROTOCOLS "/etc/protocols"
#define HAVE_ATOMICS 1
#define MACADDROID 829
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define F_NUMMULTIRANGE__NUMRANGE 4285
#define ACL_DELETE (1<<3)
#define POSIX_FADV_SEQUENTIAL 2
#define F_CHAR_INT4 78
#define XidGenLock (&MainLWLockArray[3].lock)
#define _BITS_FLOATN_H 
#define F_ENUM_LARGER 3525
#define F_TXID_SNAPSHOT_OUT 2940
#define F_HAS_TABLE_PRIVILEGE_NAME_OID_TEXT 1923
#define F_SUBSTRING_TEXT_TEXT 2073
#define PG_SEQUENCE_H 
#define DOUBLEALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_DOUBLE, (LEN))
#define F_PG_PARTITION_ROOT 3424
#define __error_t_defined 1
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define TUPLE_LOCK_FLAG_LOCK_UPDATE_IN_PROGRESS (1 << 0)
#define HAVE_SYS_EPOLL_H 1
#define F_TIMESTAMP_HASH_EXTENDED 3411
#define HEAP_XMAX_EXCL_LOCK 0x0040
#define slist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), (type *) slist_head_element_off(lhead, offsetof(type, membername)))
#define NAMESPACE_UTILS_H 
#define F_LINE_DISTANCE 239
#define ResetTupleHashIterator(htable,iter) InitTupleHashIterator(htable, iter)
#define F_LOWER_INC_ANYMULTIRANGE 4238
#define F_REGOPERATORRECV 2450
#define __FLT32_MAX_10_EXP__ 38
#define POINTARRAYOID 1017
#define DT_CHR DT_CHR
#define F_POLY_LEFT 341
#define F_TSQUERY_NOT 3671
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define F_PCLOSE 1433
#define CITUS_RUN_COMMAND_APPLICATION_NAME_PREFIX "citus_run_command gpid="
#define __INT_FAST32_TYPE__ long int
#define F_BRIN_MINMAX_MULTI_UNION 4619
#define TIDOID 27
#define F_REGCOLLATIONIN 4193
#define F_ANYENUM_OUT 3505
#define PG_HAVE_ATOMIC_TEST_SET_FLAG 
#define COLOCATION_UTILS_H_ 
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define F_SETVAL_REGCLASS_INT8_BOOL 1765
#define F_GET_BIT_BIT_INT4 3032
#define SIG_DFL ((__sighandler_t) 0)
#define F_BINARY_UPGRADE_SET_NEXT_PG_AUTHID_OID 3590
#define F_INT4MOD 156
#define SIG_ATOMIC_MIN (-2147483647-1)
#define F_BTFLOAT8CMP 355
#define ConstraintParentIndexId 2579
#define TTY_NAME_MAX 32
#define ERRCODE_TOO_MANY_COLUMNS MAKE_SQLSTATE('5','4','0','1','1')
#define PQTRACE_SUPPRESS_TIMESTAMPS (1<<0)
#define F_GTSVECTOROUT 3647
#define F_FLOAT8_STDDEV_SAMP 1832
#define F_PG_STAT_GET_INS_SINCE_VACUUM 5053
#define _POSIX_MAX_INPUT 255
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define memset_struct_0(variable) memset(&variable, 0, sizeof(variable))
#define F_RECORD_NE 2982
#define F_RPAD_TEXT_INT4 880
#define F_HASHFLOAT4 451
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define F_HASHFLOAT8 452
#define __FLT16_MANT_DIG__ 11
#define F_PRSD_LEXTYPE 3721
#define RTSuperEqualStrategyNumber 27
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define _SIZE_T_DECLARED 
#define F_CUME_DIST_ 3104
#define F_LO_GET_OID 3458
#define _POSIX_THREADS 200809L
#define Anum_pg_type_typbasetype 26
#define ACL_NUM(ACL) (ARR_DIMS(ACL)[0])
#define F_BIT_BIT_INT4_BOOL 1685
#define F_RANGE_GE 3873
#define SAFE_STR_PASSWORD_MAX_LENGTH ( 32 )
#define INT_FAST64_WIDTH 64
#define F_SCHEMA_TO_XMLSCHEMA 2934
#define F_INET_RECV 2496
#define F_NUMERIC_EXP 1733
#define PGINVALID_SOCKET (-1)
#define RelFileNodeBackendEquals(node1,node2) ((node1).node.relNode == (node2).node.relNode && (node1).node.dbNode == (node2).node.dbNode && (node1).backend == (node2).backend && (node1).node.spcNode == (node2).node.spcNode)
#define F_SETLK64 6
#define HAVE__BUILTIN_CLZ 1
#define F_EVERY 2519
#define F_KOI8U_TO_UTF8 4357
#define F_RANDOM 1598
#define USECS_PER_MINUTE INT64CONST(60000000)
#define F_LINE_VERTICAL 1498
#define F_ENUM_SMALLER 3524
#define RelationOpenSmgr(relation) do { if ((relation)->rd_smgr == NULL) smgrsetowner(&((relation)->rd_smgr), smgropen((relation)->rd_node, (relation)->rd_backend)); } while (0)
#define F_RANGE_IN 3834
#define F_HASHINT2EXTENDED 441
#define F_PG_NDISTINCT_OUT 3356
#define HeapTupleHeaderIndicatesMovedPartitions(tup) ItemPointerIndicatesMovedPartitions(&(tup)->t_ctid)
#define _BITS_BYTESWAP_H 1
#define F_REGOPERATORSEND 2451
#define __ID_T_TYPE __U32_TYPE
#define ALIGNOF_INT 4
#define castNode(_type_,nodeptr) ((_type_ *) (nodeptr))
#define ERRCODE_WRONG_OBJECT_TYPE MAKE_SQLSTATE('4','2','8','0','9')
#define F_BITGE 1592
#define F_TLOCK 2
#define ESFMTTYP ( 411 )
#define ERRCODE_GENERATED_ALWAYS MAKE_SQLSTATE('4','2','8','C','9')
#define SDIR_H 
#define _PGTIME_H 
#define REGOPERATOROID 2204
#define BKPBLOCK_SAME_REL 0x80
#define F_GETLEASE 1025
#define SOL_RAW 255
#define PG_SNAPSHOTOID 5038
#define F_TIMESTAMP_GT_TIMESTAMPTZ 2523
#define Anum_pg_type_typarray 15
#define SO_REUSEPORT 15
#define F_JSON_STRIP_NULLS 3261
#define CITUS_TRUNCATE_TRIGGER_NAME "citus_truncate_trigger"
#define F_TS_MATCH_TQ 3761
#define F_INT2OR 1893
#define SA_NOMASK SA_NODEFER
#define F_BTTEXTNAMECMP 253
#define F_RANGE_LE 3872
#define F_ROW_TO_JSON_RECORD_BOOL 3156
#define F_RANGE_LT 3871
#define _POSIX_FSYNC 200809L
#define ERRCODE_S_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','4')
#define F_PG_STAT_GET_DB_CONFLICT_STARTUP_DEADLOCK 3069
#define TYPCATEGORY_BOOLEAN 'B'
#define F_JUSTIFY_INTERVAL 2711
#define Natts_pg_publication 9
#define F_BOX_CONTAIN_PT 193
#define F_JSONB_OBJECT_AGG_FINALFN 3269
#define F_PG_TS_TEMPLATE_IS_VISIBLE 3768
#define TSMULTIRANGEOID 4533
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define TRANSFER_MODE_AUTOMATIC 'a'
#define REGBUF_STANDARD 0x08
#define F_MACADDR8_GE 4117
#define AF_ATMSVC PF_ATMSVC
#define _SETJMP_H 1
#define DEFAULT_DYNAMIC_SHARED_MEMORY_TYPE DSM_IMPL_POSIX
#define F_RANGE_NE 3856
#define SOL_RDS 276
#define HEAP2_XACT_MASK 0xE000
#define ERRCODE_INDICATOR_OVERFLOW MAKE_SQLSTATE('2','2','0','2','2')
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define MSG_TRUNC MSG_TRUNC
#define POSTGRES_EXT_H 
#define SizeForFunctionCallInfo(nargs) (offsetof(FunctionCallInfoBaseData, args) + sizeof(NullableDatum) * (nargs))
#define __f32(x) x ##f32
#define N_ACL_RIGHTS 12
#define F_GTSQUERY_CONSISTENT_INTERNAL_TSQUERY_INT2_OID_INTERNAL 3701
#define F_MACADDR8_IN 4110
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define F_OIDLARGER 1965
#define HAVE__BUILTIN_CTZ 1
#define F_BYTEARECV 2412
#define F_PG_TABLESPACE_LOCATION 3778
#define XLR_NORMAL_RDATAS 20
#define __SI_ALIGNMENT 
#define F_INT4RANGE_CANONICAL 3914
#define __P(args) args
#define SEEK_SET 0
#define F_HAS_SCHEMA_PRIVILEGE_NAME_OID_TEXT 2269
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define EAI_NODATA -5
#define OffsetNumberNext(offsetNumber) ((OffsetNumber) (1 + (offsetNumber)))
#define PageIsValid(page) PointerIsValid(page)
#define AF_IEEE802154 PF_IEEE802154
#define F_XID8GE 5037
#define make_simple_restrictinfo_compat(a,b) make_simple_restrictinfo(a, b)
#define RelationGetNamespace(relation) ((relation)->rd_rel->relnamespace)
#define F_NLIKESEL 1822
#define F_MACADDR8_LE 4115
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define DATE_END_JULIAN (2147483494)
#define F_HAS_SERVER_PRIVILEGE_OID_TEXT_TEXT 3008
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32X_MANT_DIG__ 53
#define F_SUBSTR_BYTEA_INT4 2086
#define EUCLEAN 117
#define _POSIX_IPV6 200809L
#define F_REGEXP_REPLACE_TEXT_TEXT_TEXT_TEXT 2285
#define PG_HAVE_ATOMIC_EXCHANGE_U32 
#define IP_MSFILTER 41
#define F_PG_GET_EXPR_PG_NODE_TREE_OID 1716
#define HASH_DIRSIZE 0x0004
#define EAI_OVERFLOW -12
#define F_BRIN_BLOOM_OPCINFO 4591
#define ALLOCSET_SMALL_INITSIZE (1 * 1024)
#define ShareLock 5
#define _GCC_LIMITS_H_ 
#define F_PG_STAT_GET_LAST_AUTOVACUUM_TIME 2782
#define IP_BLOCK_SOURCE 38
#define __S_IEXEC 0100
#define PG_MODULE_MAGIC extern PGDLLEXPORT const Pg_magic_struct *PG_MAGIC_FUNCTION_NAME(void); const Pg_magic_struct * PG_MAGIC_FUNCTION_NAME(void) { static const Pg_magic_struct Pg_magic_data = PG_MODULE_MAGIC_DATA; return &Pg_magic_data; } extern int no_such_variable
#define FIELDNO_AGGSTATE_CURAGGCONTEXT 14
#define STA_FLL 0x0008
#define BKI_FORCE_NULL 
#define F_JSONB_AGG_TRANSFN 3265
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define F_GIN_TSQUERY_CONSISTENT_INTERNAL_INT2_TSQUERY_INT4_INTERNAL_INTERNAL_INTERNAL_INTERNAL 3792
#define F_LENGTH_TEXT 1317
#define REGPROCOID 24
#define SET_LOCKTAG_DATABASE_FROZEN_IDS(locktag,dboid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_DATABASE_FROZEN_IDS, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define DEFAULT_XLOG_SEG_SIZE (16*1024*1024)
#define F_PG_LS_TMPDIR_ 5029
#define UINT_FAST32_MAX (18446744073709551615UL)
#define F_TS_PARSE_TEXT_TEXT 3716
#define F_JSONB_DELETE_JSONB_TEXT 3302
#define F_SIMILAR_TO_ESCAPE_TEXT 1987
#define POLL_OUT POLL_OUT
#define GUC_check_errdetail pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errdetail_string = format_elog_string
#define F_NORMALIZE 4350
#define __stub_revoke 
#define ACLITEM_SET_PRIVS(item,privs) ((item).ai_privs = ((item).ai_privs & ~((AclMode) 0xFFFF)) | ((AclMode) (privs) & 0xFFFF))
#define USE_LIBXSLT 1
#define F_JSONB_CONTAINS 4046
#define IS_PARTITIONED_REL(rel) ((rel)->part_scheme && (rel)->boundinfo && (rel)->nparts > 0 && (rel)->part_rels && !IS_DUMMY_REL(rel))
#define NAMEOID 19
#define __stub___compat_create_module 
#define F_TIMETZ_RECV 2472
#define F_GIN_CMP_PREFIX 2700
#define RTPrefixStrategyNumber 28
#define F_GIN_CLEAN_PENDING_LIST 3789
#define EKEYEXPIRED 127
#define F_TIMESTAMP_PL_INTERVAL 2032
#define F_BRIN_MINMAX_MULTI_DISTANCE_NUMERIC 4626
#define F_TIMESTAMPTYPMODOUT 2906
#define O_DIRECT __O_DIRECT
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define PG_TYPEARRAYOID 210
#define __UINT_LEAST64_TYPE__ long unsigned int
#define XACT_READ_COMMITTED 1
#define MINSIGSTKSZ SIGSTKSZ
#define _TIME_H 1
#define SHAREDINVALSMGR_ID (-3)
#define F_PG_SEQUENCE_LAST_VALUE 4032
#define __FLT_HAS_QUIET_NAN__ 1
#define ERRCODE_INVALID_ROW_COUNT_IN_RESULT_OFFSET_CLAUSE MAKE_SQLSTATE('2','2','0','1','X')
#define F_ISPARALLEL_LSEG_LSEG 1408
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define STRINGINFO_H 
#define ERRCODE_FDW_TABLE_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','R')
#define F_TIMETZ_TIME 2047
#define PF_IEEE802154 36
#define RECOVERY_SIGNAL_FILE "recovery.signal"
#define GUC_IS_NAME 0x0200
#define CStringGetDatum(X) PointerGetDatum(X)
#define F_DATE_NE 1091
#define TypeRelation_Rowtype_Id 71
#define F_STDDEV_SAMP_NUMERIC 2717
#define __FLT_HAS_INFINITY__ 1
#define __va_list__ 
#define InitToastSnapshot(snapshotdata,l,w) ((snapshotdata).snapshot_type = SNAPSHOT_TOAST, (snapshotdata).lsn = (l), (snapshotdata).whenTaken = (w))
#define MaxIndexTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(sizeof(IndexTupleData) + 1) + sizeof(ItemIdData))))
#define SO_SNDBUF 7
#define F_LCM_NUMERIC_NUMERIC 5049
#define innerPlan(node) (((Plan *)(node))->righttree)
#define F_BOX_INTERSECT 980
#define _BSD_PTRDIFF_T_ 
#define F_FLOAT8_STDDEV_POP 2513
#define PRIXPTR __PRIPTR_PREFIX "X"
#define SIGXFSZ 25
#define EXE ""
#define F_LINE_PERP 1497
#define ERRCODE_TRIGGERED_DATA_CHANGE_VIOLATION MAKE_SQLSTATE('2','7','0','0','0')
#define Anum_pg_attribute_attcacheoff 8
#define F_INTERVAL_HASH 1697
#define TYPCATEGORY_USER 'U'
#define LP_DEAD 3
#define SYNC_METHOD_OPEN 2
#define dlist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end, (iter).next = (iter).cur->next; (iter).cur != (iter).end; (iter).cur = (iter).next, (iter).next = (iter).cur->next)
#define F_BPCHARRECV 2430
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define __CHAR16_TYPE__ short unsigned int
#define RELATION_IS_LOCAL(relation) ((relation)->rd_islocaltemp || (relation)->rd_createSubid != InvalidSubTransactionId)
#define F_TRUNC_NUMERIC_INT4 1709
#define PLACEMENTID_SEQUENCE_NAME "pg_dist_placement_placementid_seq"
#define F_HAS_DATABASE_PRIVILEGE_NAME_TEXT_TEXT 2250
#define PageGetMaxOffsetNumber(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData ? 0 : ((((PageHeader) (page))->pd_lower - SizeOfPageHeaderData) / sizeof(ItemIdData)))
#define HAVE_BIO_GET_DATA 1
#define AT_SYMLINK_NOFOLLOW 0x100
#define __id_t_defined 
#define F_TSVECTOR_UPDATE_TRIGGER 3752
#define PF_PPPOX 24
#define F_HASHINETEXTENDED 779
#define type_is_array(typid) (get_element_type(typid) != InvalidOid)
#define CitusNewNode(size,tag) ({ CitusNode *_result; AssertMacro((size) >= sizeof(CitusNode)); _result = (CitusNode *) palloc0fast(size); _result->extensible.type = T_ExtensibleNode; _result->extensible.extnodename = CitusNodeTagNames[tag - CITUS_NODE_TAG_START]; _result->citus_tag =(int) (tag); _result; })
#define __SIZE_WIDTH__ 64
#define SO_TIMESTAMPNS_NEW 64
#define F_TEXTLIKE 850
#define IPV6_XFRM_POLICY 35
#define RELKIND_MATVIEW 'm'
#define F_JSONB_SET_LAX 5054
#define PG_HAVE_ATOMIC_READ_U32 
#define PF_QIPCRTR 42
#define F_INT8MULTIRANGE_ 4295
#define FIELDNO_FUNCTIONCALLINFODATA_ARGS 6
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define F_INTERVAL_CMP 1315
#define F_STRING_TO_TABLE_TEXT_TEXT_TEXT 6161
#define F_LO_IMPORT_TEXT 764
#define PG_SEMA_H 
#define MemSet(start,val,len) do { void *_vstart = (void *) (start); int _val = (val); Size _len = (len); if ((((uintptr_t) _vstart) & LONG_ALIGN_MASK) == 0 && (_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0)
#define F_PG_STAT_GET_BACKEND_ACTIVITY_START 2094
#define F_PG_STAT_GET_BACKEND_PID 1937
#define __NLINK_T_TYPE __U32_TYPE
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define __ARM_ARCH 8
#define UINTMAX_C(c) c ## UL
#define RM_MAX_ID (RM_NEXT_ID - 1)
#define F_ASCII 1620
#define F_CIRCLE_SEND 2491
#define AT_NO_AUTOMOUNT 0x800
#define PREDICATELOCK_MANAGER_LWLOCK_OFFSET (LOCK_MANAGER_LWLOCK_OFFSET + NUM_LOCK_PARTITIONS)
#define ERRCODE_CHECK_VIOLATION MAKE_SQLSTATE('2','3','5','1','4')
#define F_ENUM_LAST 3529
#define HeapTupleHeaderXminCommitted(tup) ( ((tup)->t_infomask & HEAP_XMIN_COMMITTED) != 0 )
#define SetProcessingMode(mode) do { AssertArg((mode) == BootstrapProcessing || (mode) == InitProcessing || (mode) == NormalProcessing); Mode = (mode); } while(0)
#define IS_SPECIAL_VARNO(varno) ((varno) >= INNER_VAR)
#define F_XID 5071
#define PGDLLIMPORT 
#define F_TEXTGTNAME 251
#define F_CIRCLE_ADD_PT 1146
#define AttrNumberIsForUserDefinedAttr(attributeNumber) ((bool) ((attributeNumber) > 0))
#define _LINUX_LIMITS_H 
#define SIGSTOP 19
#define GUC_NO_SHOW_ALL 0x0004
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define F_PG_GET_RULEDEF_OID_BOOL 2504
#define SCNuFAST16 __PRIPTR_PREFIX "u"
#define CLOCK_MONOTONIC 1
#define F_EVENT_TRIGGER_IN 3594
#define F_INT8MOD 945
#define DatumGetVarCharPP(X) ((VarChar *) PG_DETOAST_DATUM_PACKED(X))
#define AARR_LBOUND(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.lbound : ARR_LBOUND((ArrayType *) (a)))
#define F_PERCENTILE_DISC_FINAL 3973
#define __FLT16_MAX_10_EXP__ 4
#define ERRCODE_EXCLUSION_VIOLATION MAKE_SQLSTATE('2','3','P','0','1')
#define F_PG_TABLE_IS_VISIBLE 2079
#define F_FLT4_MUL_CASH 848
#define INTERVAL_MASK(b) (1 << (b))
#define EBADRQC 56
#define F_CIRCLE_CONTAINED 1458
#define PROMOTE_SIGNAL_FILE "promote"
#define PERFORM_DELETION_INTERNAL 0x0001
#define USE_ARMV8_CRC32C_WITH_RUNTIME_CHECK 1
#define F_JSON_EACH_TEXT 3959
#define HAVE_LOCALE_T 1
#define SCNuFAST32 __PRIPTR_PREFIX "u"
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define F_RANGE_GIST_UNION 3876
#define __KEY_T_TYPE __S32_TYPE
#define F_GET_BYTE 721
#define __SVE_VQ_MAX 512
#define F_RECORD_EQ 2981
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define INTMAX_WIDTH 64
#define __F_SETSIG 10
#define ERRCODE_NO_ADDITIONAL_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','2','0','0','1')
#define F_PG_ADVISORY_XACT_LOCK_SHARED_INT4_INT4 3094
#define F_HAS_COLUMN_PRIVILEGE_OID_TEXT_TEXT 3022
#define F_TIME_SEND 2471
#define F_BTEQUALIMAGE 5051
#define SEGV_PKUERR SEGV_PKUERR
#define DATERANGEOID 3912
#define S_IFSOCK __S_IFSOCK
#define NAMESPACE_H 
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define F_RECORD_GE 2986
#define F_PG_EXPORT_SNAPSHOT 3809
#define F_RECORD_GT 2984
#define F_BTOIDCMP 356
#define SCNuFAST64 __PRI64_PREFIX "u"
#define PG_HAVE_ATOMIC_FETCH_OR_U32 
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define ERRCODE_FDW_INVALID_DATA_TYPE MAKE_SQLSTATE('H','V','0','0','4')
#define NI_IDN 32
#define IPV6_JOIN_GROUP 20
#define UINT_FAST32_WIDTH __WORDSIZE
#define F_HAS_TYPE_PRIVILEGE_OID_TEXT_TEXT 3140
#define F_TIMESTAMP_RECV 2474
#define F_JSONB_PATH_QUERY 4006
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define BlockIdSet(blockId,blockNumber) ( AssertMacro(PointerIsValid(blockId)), (blockId)->bi_hi = (blockNumber) >> 16, (blockId)->bi_lo = (blockNumber) & 0xffff )
#define F_INT2VECTOROUT 41
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define F_SUM_FLOAT4 2110
#define F_GIST_CIRCLE_COMPRESS 2592
#define ERRCODE_UNDEFINED_FILE MAKE_SQLSTATE('5','8','P','0','1')
#define PG_HAVE_ATOMIC_U32_SUPPORT 
#define F_RECORD_IN 2290
#define MISCADMIN_H 
#define SOL_RXRPC 272
#define __nlink_t_defined 
#define INTERVAL_TYPMOD(p,r) ((((r) & INTERVAL_RANGE_MASK) << 16) | ((p) & INTERVAL_PRECISION_MASK))
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define IPPROTO_RAW IPPROTO_RAW
#define HAVE_POSIX_FADVISE 1
#define foreach_oid(var,l) for (ListCell *(var ## CellDoNotUse) = list_head(l); (var ## CellDoNotUse) != NULL && (((var) = lfirst_oid(var ## CellDoNotUse)) || true); var ## CellDoNotUse = lnext(l, var ## CellDoNotUse))
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define EOHPGetRODatum(eohptr) PointerGetDatum((eohptr)->eoh_ro_ptr)
#define __CLOCKID_T_TYPE __S32_TYPE
#define F_PG_REPLICATION_ORIGIN_DROP 6004
#define PG_HAVE_ATOMIC_FETCH_OR_U64 
#define F_NETWORK_LARGER 3562
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define F_OIDRECV 2418
#define ESOVRLP ( 404 )
#define PRIiPTR __PRIPTR_PREFIX "i"
#define INSTRUMENT_H 
#define shm_toc_estimate_chunk(e,sz) ((e)->space_for_chunks = add_size((e)->space_for_chunks, BUFFERALIGN(sz)))
#define CHECKPOINT_REQUESTED 0x0040
#define F_TIME_EQ 1145
#define ELIBEXEC 83
#define RWH_WRITE_LIFE_NOT_SET 0
#define F_RECORD_LE 2985
#define UNSET_NULLABLE_FIELD(ptr,field) (ptr)->field = NULL; memset_struct_0((ptr)->__nullable_storage.field)
#define F_RECORD_LT 2983
#define F_TSTZMULTIRANGE_TSTZRANGE 4290
#define HAVE__STATIC_ASSERT 1
#define AmArchiverProcess() (MyAuxProcType == ArchiverProcess)
#define __INT_FAST64_WIDTH__ 64
#define F_MAX_INT4 2116
#define F_ISFINITE_TIMESTAMP 2048
#define SIGALRM 14
#define __UQUAD_TYPE unsigned long int
#define ERRCODE_NONSTANDARD_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','P','0','6')
#define FMGRPROTOS_H 
#define TupIsNull(slot) ((slot) == NULL || TTS_EMPTY(slot))
#define _BITS_UIO_LIM_H 1
#define F_POLY_SAME 339
#define ALIGNOF_SHORT 2
#define F_PG_LSN_SMALLER 4188
#define F_HASH_RECORD 6192
#define STA_PPSFREQ 0x0002
#define EADDRNOTAVAIL 99
#define ETIME 62
#define EAI_INTR -104
#define __LITTLE_ENDIAN 1234
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define F_TIMETZ_HASH 1696
#define SequenceRelidIndexId 5002
#define F_BTFLOAT4SORTSUPPORT 3132
#define F_DSIMPLE_INIT 3725
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define ANYENUMOID 3500
#define F_MAX_TIMESTAMP 2126
#define TABLE_AM_HANDLEROID 269
#define HAVE_PPOLL 1
#define Anum_pg_constraint_confupdtype 13
#define F_ROW_NUMBER 3100
#define Anum_pg_index_indnkeyatts 4
#define F_TO_REGPROC 3494
#define F_TIMESTAMPTZ_LT_TIMESTAMP 2527
#define PG_COPYRES_NOTICEHOOKS 0x08
#define F_TXID_SNAPSHOT_XMIN 2945
#define S_IXUSR __S_IEXEC
#define AmWalReceiverProcess() (MyAuxProcType == WalReceiverProcess)
#define F_MXID_AGE 3939
#define F_INT2_JSONB 3450
#define PTRDIFF_WIDTH __WORDSIZE
#define ULLONG_WIDTH 64
#define STDIN_FILENO 0
#define S_IWOTH (S_IWGRP >> 3)
#define F_CIRCLE_CENTER 1472
#define XLogRecGetOrigin(decoder) ((decoder)->record_origin)
#define si_band _sifields._sigpoll.si_band
#define F_TO_DATE 1780
#define UINT8_MAX (255)
#define TIMESTAMP_NOEND(j) do {(j) = DT_NOEND;} while (0)
#define ERRCODE_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('2','2','0','0','1')
#define VARSIZE_SHORT(PTR) VARSIZE_1B(PTR)
#define HAVE_PWRITE 1
#define RelationGetNumberOfAttributes(relation) ((relation)->rd_rel->relnatts)
#define IPV6_RTHDR 57
#define MemSetAligned(start,val,len) do { long *_start = (long *) (start); int _val = (val); Size _len = (len); if ((_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_start, _val, _len); } while (0)
#define F_HAS_SERVER_PRIVILEGE_OID_TEXT 3011
#define IPV6_RECVHOPLIMIT 51
#define F_INET_MERGE 4063
#define PF_ATMSVC 20
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define F_PG_ROTATE_LOGFILE_OLD 4099
#define ITEMPTR_H 
#define __WNOTHREAD 0x20000000
#define AF_LLC PF_LLC
#define F_TSVECTOR_TO_ARRAY 3326
#define HEAP_XMAX_BITS (HEAP_XMAX_COMMITTED | HEAP_XMAX_INVALID | HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK | HEAP_XMAX_LOCK_ONLY)
#define F_TS_TOKEN_TYPE_OID 3713
#define F_QUERY_TO_XMLSCHEMA 2927
#define CLOCK_PROCESS_CPUTIME_ID 2
#define ENETUNREACH 101
#define EXDEV 18
#define va_start(v,l) __builtin_va_start(v,l)
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define EFAULT 14
#define F_GENERATE_SERIES_INT4_INT4 1067
#define F_CHARACTER_LENGTH_BPCHAR 1367
#define PRIxPTR __PRIPTR_PREFIX "x"
#define UINT32_C(c) c ## U
#define BGWORKER_H 
#define F_TEXTSEND 2415
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define F_NUMERIC_POLY_VAR_POP 3390
#define F_RANGE_OVERLEFT_MULTIRANGE 4264
#define PG_RETURN_NULL() do { fcinfo->isnull = true; return (Datum) 0; } while (0)
#define F_PG_LSN_EQ 3233
#define ACL_DAT(ACL) ((AclItem *) ARR_DATA_PTR(ACL))
#define F_NUMERIC_MUL 1726
#define PARSE_NODE_H 
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define HAVE__BUILTIN_BSWAP16 1
#define HAVE_SETSID 1
#define WORKER_PARTITIONED_TABLE_SIZE_FUNCTION "worker_partitioned_table_size(%s)"
#define REGBUF_KEEP_DATA 0x10
#define F_ARRAY_PREPEND 379
#define F_REGROLERECV 4094
#define __WINT_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define F_DATE_EQ_TIMESTAMP 2340
#define SEM_VALUE_MAX (2147483647)
#define F_VAR_POP_NUMERIC 2723
#define llast_oid(l) lfirst_oid(list_last_cell(l))
#define F_PG_LSN_GE 3234
#define TSRANGEARRAYOID 3909
#define ADJ_TIMECONST 0x0020
#define SOL_PACKET 263
#define MOD_TAI ADJ_TAI
#define HAVE__BUILTIN_BSWAP32 1
#define F_PG_STAT_FILE_TEXT_BOOL 3307
#define ITEMID_H 
#define __LC_ADDRESS 9
#define HAVE_STRERROR_R 1
#define F_FORMAT_TEXT_ANY 3539
#define XLR_RMGR_INFO_MASK 0xF0
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define ERRCODE_UNDEFINED_PSTATEMENT MAKE_SQLSTATE('2','6','0','0','0')
#define F_FLOAT48DIV 280
#define COORDINATOR_PROTOCOL_H 
#define F_BTARRAYCMP 382
#define ENOSPC 28
#define F_REGR_COUNT 2818
#define ENOEXEC 8
#define S_UNLOCK(lock) __sync_lock_release(lock)
#define forboth_ptr_oid(var1,l1,var2,l2) for (ListCell *(var1 ## CellDoNotUse) = list_head(l1), *(var2 ## CellDoNotUse) = list_head(l2); (var1 ## CellDoNotUse) != NULL && (var2 ## CellDoNotUse) != NULL && (((var1) = lfirst(var1 ## CellDoNotUse)) || true) && (((var2) = lfirst_oid(var2 ## CellDoNotUse)) || true); var1 ## CellDoNotUse = lnext(l1, var1 ## CellDoNotUse), var2 ## CellDoNotUse = lnext(l2, var2 ## CellDoNotUse) )
#define FIELDNO_TUPLETABLESLOT_FLAGS 1
#define RTSuperStrategyNumber 26
#define F_LO_UNLINK 964
#define EOF (-1)
#define EOK ( 0 )
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define F_JSON_OBJECT_KEYS 3957
#define F_ARRAY_AGG_ARRAY_FINALFN 4052
#define SO_RCVBUF 8
#define F_IN_RANGE_FLOAT8_FLOAT8_FLOAT8_BOOL_BOOL 4139
#define F_ARRAY_GE 396
#define SK_ISNULL 0x0001
#define TransactionIdEquals(id1,id2) ((id1) == (id2))
#define PG_HAVE_ATOMIC_U64_SUPPORT 
#define HAVE__BUILTIN_BSWAP64 1
#define BUFFERALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_BUFFER, (LEN))
#define F_HAS_SEQUENCE_PRIVILEGE_NAME_TEXT_TEXT 2181
#define F_BIT_LENGTH_TEXT 1811
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define F_NUMERIC_LN 1735
#define F_PG_STAT_GET_BGWRITER_MAXWRITTEN_CLEAN 2773
#define STA_PPSERROR 0x0800
#define F_INT4DIV 154
#define F_TS_PARSE_OID_TEXT 3715
#define PageSetFull(page) (((PageHeader) (page))->pd_flags |= PD_PAGE_FULL)
#define FPE_FLTUNK FPE_FLTUNK
#define F_REGNAMESPACEOUT 4085
#define AssertMacro(condition) ((void)true)
#define ACLITEMARRAYOID 1034
#define F_RECORD_IMAGE_LT 3183
#define F_PG_LSN_LE 3232
#define ERRCODE_INVALID_CURSOR_NAME MAKE_SQLSTATE('3','4','0','0','0')
#define F_REGEXNEJOINSEL 1827
#define F_PG_LSN_LT 3231
#define __fsblkcnt_t_defined 
#define ERRCODE_T_R_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('4','0','0','0','2')
#define F_PG_GET_FUNCTION_ARGUMENTS 2162
#define EDOM 33
#define ENOSTR 60
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define att_align_datum(cur_offset,attalign,attlen,attdatum) ( ((attlen) == -1 && VARATT_IS_SHORT(DatumGetPointer(attdatum))) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define F_NAMEICNLIKE 1636
#define BITS_PER_BITMAPWORD 64
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define Float8GetDatumFast(X) Float8GetDatum(X)
#define ERRCODE_ASSERT_FAILURE MAKE_SQLSTATE('P','0','0','0','4')
#define F_PG_LSN_NE 3236
#define dlist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), (type *) dlist_head_element_off(lhead, offsetof(type, membername)))
#define ESRCH 3
#define F_XMLVALIDATE 2897
#define F_FLOAT84GE 310
#define F_SUBSTR_BYTEA_INT4_INT4 2085
#define Anum_pg_constraint_conbin 25
#define _SC_REGEXP _SC_REGEXP
#define F_PG_IS_WAL_REPLAY_PAUSED 3073
#define F_FLOAT84GT 309
#define EHOSTDOWN 112
#define _LFS_LARGEFILE 1
#define InvalidBlockNumber ((BlockNumber) 0xFFFFFFFF)
#define F_TIME_CMP 1107
#define STA_CLK 0x8000
#define __wchar_t__ 
#define ERANGE 34
#define SEEK_END 2
#define OffsetNumberPrev(offsetNumber) ((OffsetNumber) (-1 + (offsetNumber)))
#define F_HAS_TABLE_PRIVILEGE_OID_TEXT_TEXT 1924
#define _POSIX2_LINE_MAX 2048
#define _ISOC99_SOURCE 1
#define F_RECORD_OUT 2291
#define strtoi64(str,endptr,base) ((int64) strtol(str, endptr, base))
#define F_MACADDR8_SEND 3447
#define TIMESTAMP_MASK(b) (1 << (b))
#define JULIAN_MAXDAY (3)
#define F_INTERVAL_GE 1166
#define PG_STRERROR_R_BUFLEN 256
#define F_HAS_FUNCTION_PRIVILEGE_TEXT_TEXT 2260
#define F_PG_TS_PARSER_IS_VISIBLE 3756
#define PQ_QUERY_PARAM_MAX_LIMIT 65535
#define __S_ISUID 04000
#define WORKER_PARTITIONED_RELATION_SIZE_FUNCTION "worker_partitioned_relation_size(%s)"
#define __LC_NAME 8
#define F_BIT_LENGTH_BYTEA 1810
#define ACL_USAGE (1<<8)
#define MAXALIGN64(LEN) TYPEALIGN64(MAXIMUM_ALIGNOF, (LEN))
#define PageAddItem(page,item,size,offsetNumber,overwrite,is_heap) PageAddItemExtended(page, item, size, offsetNumber, ((overwrite) ? PAI_OVERWRITE : 0) | ((is_heap) ? PAI_IS_HEAP : 0))
#define be64toh(x) __bswap_64 (x)
#define ENOSYS 38
#define F_JSONB_BUILD_OBJECT_ANY 3273
#define SOL_NETLINK 270
#define F_ACLINSERT 1035
#define SA_RESTART 0x10000000
#define F_INT8_AVG_ACCUM 2746
#define ERRCODE_SAVEPOINT_EXCEPTION MAKE_SQLSTATE('3','B','0','0','0')
#define MAXIMUM_ALIGNOF 8
#define DT_DIR DT_DIR
#define F_INTERVAL_IN 1160
#define F_SCALE 3281
#define F_LENGTH_PATH 1531
#define F_REGEXP_SPLIT_TO_ARRAY_TEXT_TEXT 2767
#define CHUNK_ROW_COUNT_MINIMUM 1000
#define FIELDNO_EXPRCONTEXT_SCANTUPLE 1
#define F_FLOAT84LT 307
#define _BITS_LOCALE_H 1
#define F_CSTRING_IN 2292
#define F_JSONB_PATH_QUERY_FIRST 4008
#define F_LOWER_ANYRANGE 3848
#define va_arg(v,l) __builtin_va_arg(v,l)
#define F_FLOAT84MI 286
#define NODES_H 
#define F_BIT_OR_INT8 2241
#define slist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).prev = &(lhead)->head, (iter).cur = (iter).prev->next, (iter).next = (iter).cur ? (iter).cur->next : NULL; (iter).cur != NULL; (iter).prev = (iter).cur, (iter).cur = (iter).next, (iter).next = (iter).next ? (iter).next->next : NULL)
#define _THREAD_SHARED_TYPES_H 1
#define ERRCODE_GROUPING_ERROR MAKE_SQLSTATE('4','2','8','0','3')
#define __glibc_has_extension(ext) 0
#define SCNxMAX __PRI64_PREFIX "x"
#define OidFunctionCall1(functionId,arg1) OidFunctionCall1Coll(functionId, InvalidOid, arg1)
#define OidFunctionCall2(functionId,arg1,arg2) OidFunctionCall2Coll(functionId, InvalidOid, arg1, arg2)
#define OidFunctionCall3(functionId,arg1,arg2,arg3) OidFunctionCall3Coll(functionId, InvalidOid, arg1, arg2, arg3)
#define OidFunctionCall4(functionId,arg1,arg2,arg3,arg4) OidFunctionCall4Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4)
#define OidFunctionCall5(functionId,arg1,arg2,arg3,arg4,arg5) OidFunctionCall5Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define OidFunctionCall7(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7) OidFunctionCall7Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define OidFunctionCall8(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) OidFunctionCall8Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define OidFunctionCall9(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) OidFunctionCall9Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define F_BTTEXTSORTSUPPORT 3255
#define AT_STATX_SYNC_TYPE 0x6000
#define ItemIdIsValid(itemId) PointerIsValid(itemId)
#define FullTransactionIdPrecedesOrEquals(a,b) ((a).value <= (b).value)
#define makeBoolean(val) makeInteger(val)
#define _BITS_SIGNUM_ARCH_H 1
#define F_INTERVAL_LT 1164
#define WORKER_PARTITIONED_RELATION_TOTAL_SIZE_FUNCTION "worker_partitioned_relation_total_size(%s)"
#define ERRCODE_E_R_E_CONTAINING_SQL_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','1')
#define INIT_CRC32C(crc) ((crc) = 0xFFFFFFFF)
#define __FP_FAST_FMAF32x 1
#define TAS(lock) tas(lock)
#define HEAP_TUPLE_HAS_MATCH HEAP_ONLY_TUPLE
#define WALBufMappingLock (&MainLWLockArray[7].lock)
#define __FLT16_HAS_DENORM__ 1
#define __STDC_UTF_32__ 1
#define F_BPCHAR_CHAR 860
#define RTOldContainsStrategyNumber 13
#define ACL_GRANT_OPTION_FOR(privs) (((AclMode) (privs) & 0xFFFF) << 16)
#define F_FLOAT84PL 285
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define FATAL 22
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define F_SESSION_USER 746
#define HAVE_DECL_FDATASYNC 1
#define F_LSEG_SEND 2481
#define XLogRecGetTopXid(decoder) ((decoder)->toplevel_xid)
#define F_INT48MI 1279
#define F_PG_STAT_RESET 2274
#define _BITS_SIGACTION_H 1
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define HAVE_LIBLZ4 1
#define _PATH_HOSTS "/etc/hosts"
#define UTIME_OMIT ((1l << 30) - 2l)
#define SPLICE_F_NONBLOCK 2
#define HEAP_XMIN_INVALID 0x0200
#define F_TABLE_TO_XMLSCHEMA 2926
#define F_XML_IS_WELL_FORMED 3051
#define F_BYTEACAT 2011
#define HEAP_HASOID_OLD 0x0008
#define SO_CNX_ADVICE 53
#define TimestampTzGetDatum(X) Int64GetDatum(X)
#define PD_PAGE_FULL 0x0002
#define HAVE_GETOPT_LONG 1
#define F_LINE_PARALLEL 1496
#define F_PG_ADVISORY_UNLOCK_INT4_INT4 2890
#define F_PG_GET_SHMEM_ALLOCATIONS 5052
#define FRAMEOPTION_START_CURRENT_ROW 0x00200
#define VARATT_EXTERNAL_SET_SIZE_AND_COMPRESS_METHOD(toast_pointer,len,cm) do { Assert((cm) == TOAST_PGLZ_COMPRESSION_ID || (cm) == TOAST_LZ4_COMPRESSION_ID); ((toast_pointer).va_extinfo = (len) | ((uint32) (cm) << VARLENA_EXTSIZE_BITS)); } while (0)
#define F_AGE_TIMESTAMP_TIMESTAMP 2058
#define multi_for_advance_cell(cell,state,l,i) (cell = (state.l != NIL && state.i < state.l->length) ? &state.l->elements[state.i] : NULL)
#define PROC_IN_SAFE_IC 0x04
#define InstrCountTuples2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->ntuples2 += (delta); } while (0)
#define ACLITEM_GET_RIGHTS(item) ((item).ai_privs)
#define PROC_IN_LOGICAL_DECODING 0x10
#define F_AREA_CIRCLE 1468
#define F_INET_SPG_CONFIG 3795
#define Anum_pg_attribute_attoptions 24
#define SO_PEERGROUPS 59
#define F_TIMESTAMPTZ_GE_TIMESTAMP 2531
#define F_LIKE_TEXT_TEXT 1569
#define F_CASH_PL 894
#define _POSIX_V6_ILP32_OFFBIG -1
#define slist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).cur = (lhead)->head.next; (iter).cur != NULL; (iter).cur = (iter).cur->next)
#define _SC_INT_MAX _SC_INT_MAX
#define CLOG_TRUNCATE 0x10
#define F_PG_LS_ARCHIVE_STATUSDIR 5031
#define DatumGetBool(X) ((bool) ((X) != 0))
#define ACCESS_RELATION_H 
#define F_BTINT28CMP 2192
#define F_SCALARLEJOINSEL 386
#define F_TIMESTAMP_CMP 2045
#define PG_ARGISNULL(n) (fcinfo->args[n].isnull)
#define SIOCGSTAMPNS_OLD 0x8907
#define TYPEALIGN(ALIGNVAL,LEN) (((uintptr_t) (LEN) + ((ALIGNVAL) - 1)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define F_GETLK64 5
#define PG_DATA_CHECKSUM_VERSION 1
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define PageIsVerified(page,blkno) PageIsVerifiedExtended(page, blkno, PIV_LOG_WARNING | PIV_REPORT_STAT)
#define __LC_CTYPE 0
#define F_FLOAT8_AVG 1830
#define F_PG_STAT_GET_DB_CONFLICT_SNAPSHOT 3067
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define F_CASH_DIV_INT8 3345
#define SO_TIMESTAMP_NEW 63
#define F_TS_REWRITE_TSQUERY_TEXT 3685
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define sigcontext_struct sigcontext
#define SI_ASYNCNL SI_ASYNCNL
#define PG_DIAG_SEVERITY 'S'
#define F_SUM_INTERVAL 2113
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define ERRCODE_INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','4')
#define NodeSetTag(nodeptr,t) (((Node*)(nodeptr))->type = (t))
#define MaxHeapTupleSize (BLCKSZ - MAXALIGN(SizeOfPageHeaderData + sizeof(ItemIdData)))
#define F_EUC_KR_TO_MIC 4330
#define F_MACADDR_CMP 836
#define SIG_ERR ((__sighandler_t) -1)
#define AI_NUMERICHOST 0x0004
#define HAVE_HMAC_CTX_NEW 1
#define ERRCODE_ERROR_IN_ASSIGNMENT MAKE_SQLSTATE('2','2','0','0','5')
#define F_OIDGE 1639
#define F_PG_COLLATION_FOR 3162
#define F_PG_STAT_GET_XACT_TUPLES_DELETED 3042
#define XLogStandbyInfoActive() (wal_level >= WAL_LEVEL_REPLICA)
#define __INO_T_MATCHES_INO64_T 1
#define F_OIDGT 1638
#define EAI_AGAIN -3
#define F_IN_RANGE_INT2_INT2_INT2_BOOL_BOOL 4132
#define DELAY_CHKPT_START (1<<0)
#define F_ATAND 2733
#define INVALID_PGPROCNO PG_INT32_MAX
#define MAX_TZDISP_HOUR 15
#define __GLIBC_USE_IEC_60559_EXT 1
#define RTBelowStrategyNumber 10
#define FMGR_H 
#define PG_DYNSHMEM_MMAP_FILE_PREFIX "mmap."
#define F_PG_GET_TRIGGERDEF_OID_BOOL 2730
#define __HAVE_FLOAT128 1
#define UINT_LEAST32_MAX (4294967295U)
#define F_OIDIN 1798
#define F_HAS_LANGUAGE_PRIVILEGE_NAME_OID_TEXT 2263
#define F_LOG_FLOAT8 1340
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_OID_TEXT 3005
#define HAVE_DECL_STRNLEN 1
#define SCNxLEAST8 "hhx"
#define SIZEOF_SIZE_T 8
#define PGPROC_MAX_CACHED_SUBXIDS 64
#define F_TIMESTAMP_MI_INTERVAL 2033
#define F_LATIN1_TO_MIC 4344
#define PG_CACHE_LINE_SIZE 128
#define F_PG_STAT_GET_TUPLES_DELETED 1933
#define F_POINT_HORIZ 990
#define RelationGetTargetBlock(relation) ( (relation)->rd_smgr != NULL ? (relation)->rd_smgr->smgr_targblock : InvalidBlockNumber )
#define SIGILL 4
#define F_POLYGON_CIRCLE 1544
#define CITUS_RULEUTILS_H 
#define forboth_ptr(var1,l1,var2,l2) for (ListCell *(var1 ## CellDoNotUse) = list_head(l1), *(var2 ## CellDoNotUse) = list_head(l2); (var1 ## CellDoNotUse) != NULL && (var2 ## CellDoNotUse) != NULL && (((var1) = lfirst(var1 ## CellDoNotUse)) || true) && (((var2) = lfirst(var2 ## CellDoNotUse)) || true); var1 ## CellDoNotUse = lnext(l1, var1 ## CellDoNotUse), var2 ## CellDoNotUse = lnext(l2, var2 ## CellDoNotUse) )
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define PG_HAVE_ATOMIC_FETCH_SUB_U32 
#define __time_t_defined 1
#define F_JSONB_EACH 3208
#define SECS_PER_DAY 86400
#define F_SPG_KD_CONFIG 4023
#define _SC_INT_MIN _SC_INT_MIN
#define F_UTF8_TO_EUC_JP 4363
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define F_OIDLE 717
#define TypeOidIndexId 2703
#define F_PG_GET_USERBYID 1642
#define TIMESTAMP_H 
#define F_NAMELE 656
#define F_INT4_BIT 1684
#define F_PG_COPY_PHYSICAL_REPLICATION_SLOT_NAME_NAME 4221
#define F_BYTEACMP 1954
#define O_DIRECTORY __O_DIRECTORY
#define F_UTF8_TO_EUC_KR 4365
#define F_TSM_HANDLER_OUT 3312
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define F_UNIQUE_KEY_RECHECK 1250
#define STATUS_OK (0)
#define REGTYPEOID 2206
#define SIGIOT SIGABRT
#define F_DEXP 233
#define SELECT_TRUE_QUERY "SELECT TRUE FROM %s LIMIT 1"
#define LIBPQ_HAS_PIPELINING 1
#define F_OIDNE 185
#define _POSIX_TIMER_MAX 32
#define PG_HAVE_ATOMIC_FETCH_SUB_U64 
#define DN_CREATE 0x00000004
#define PRIdFAST8 "d"
#define F_RI_FKEY_CASCADE_UPD 1647
#define F_EXP_FLOAT8 1347
#define S_IXGRP (S_IXUSR >> 3)
#define __ATOMIC_CONSUME 1
#define CIDARRAYOID 1012
#define F_ARRAY_IN 750
#define F_PATH_SEND 2483
#define F_MULTIRANGE_OVERRIGHT_RANGE 4268
#define __GNUC_MINOR__ 3
#define PRIuLEAST8 "u"
#define PF_KEY 15
#define F_JSONB_EXISTS_ALL 4049
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define SK_ORDER_BY 0x0100
#define F_PG_RELOAD_CONF 2621
#define F_BOOLLE 1691
#define DSA_ALLOC_ZERO 0x04
#define PG_RETURN_TRANSACTIONID(x) return TransactionIdGetDatum(x)
#define F_POLY_RIGHT 344
#define F_KOI8R_TO_MIC 4302
#define F_NAMELT 655
#define ANYCOMPATIBLENONARRAYOID 5079
#define ERRCODE_INVALID_PASSWORD MAKE_SQLSTATE('2','8','P','0','1')
#define INT2VECTOROID 22
#define F_REGEXP_REPLACE_TEXT_TEXT_TEXT 2284
#define REGPROCARRAYOID 1008
#define F_CASH_EQ 888
#define ALIGNOF_PG_INT128_TYPE 16
#define ERRCODE_WARNING MAKE_SQLSTATE('0','1','0','0','0')
#define F_INT2EQ 63
#define F_TRIM_ARRAY 6172
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define LC_NAME __LC_NAME
#define SHORTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_SHORT, (LEN))
#define FullTransactionIdPrecedes(a,b) ((a).value < (b).value)
#define isascii_l(c,l) __isascii_l ((c), (l))
#define _DIRENT_H 1
#define ENOTRECOVERABLE 131
#define F_JSON_AGG_FINALFN 3174
#define InvalidSubTransactionId ((SubTransactionId) 0)
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define F_JSON_ARRAY_LENGTH 3956
#define F_STDDEV_NUMERIC 2159
#define F_INT2GT 146
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define ELIBMAX 82
#define F_GIST_POINT_DISTANCE 3064
#define ConstraintRelationId 2606
#define __sigstack_defined 1
#define F_INTERVAL_DIV 1326
#define F_NUMRANGE_NUMERIC_NUMERIC 3844
#define INFO 17
#define SPLICE_F_MORE 4
#define _ISOC2X_SOURCE 1
#define F_ACLEXPLODE 1689
#define F_PG_CURSOR 2511
#define F_PG_ADVISORY_UNLOCK_ALL 2892
#define stdin stdin
#define __ino64_t_defined 
#define F_BOX_GE 126
#define STA_UNSYNC 0x0040
#define AF_ISDN PF_ISDN
#define __clockid_t_defined 1
#define F_STARTS_WITH 3696
#define F_XML_IN 2893
#define F_PG_OPCLASS_IS_VISIBLE 2083
#define F_BOX_GT 127
#define __size_t 
#define XIDOID 28
#define dsa_pointer_atomic_read pg_atomic_read_u64
#define F_QUOTE_LITERAL_ANYELEMENT 1285
#define __stub_fchflags 
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define AutoFileLock (&MainLWLockArray[35].lock)
#define IPV6_2292HOPLIMIT 8
#define PRIdPTR __PRIPTR_PREFIX "d"
#define F_ARRAY_AGG_ANYNONARRAY 2335
#define ENOENT 2
#define F_PG_EVENT_TRIGGER_DROPPED_OBJECTS 3566
#define F_JSON_OBJECT_FIELD_TEXT 3948
#define __LONG_MAX__ 0x7fffffffffffffffL
#define ERRCODE_WARNING_PRIVILEGE_NOT_REVOKED MAKE_SQLSTATE('0','1','0','0','6')
#define DEBUG5 10
#define IPV6_LEAVE_ANYCAST 28
#define __UINT32_TYPE__ unsigned int
#define F_TSQUERY_AND 3669
#define pg_unreachable() __builtin_unreachable()
#define F_AREA_BOX 975
#define F_SPG_TEXT_PICKSPLIT 4029
#define PRIuFAST64 __PRI64_PREFIX "u"
#define F_RANGE_OVERRIGHT_MULTIRANGE 4267
#define ERRCODE_DUPLICATE_CURSOR MAKE_SQLSTATE('4','2','P','0','3')
#define SizeOfXLogRecordDataHeaderLong (sizeof(uint8) + sizeof(uint32))
#define relpath(rnode,forknum) relpathbackend((rnode).node, (rnode).backend, forknum)
#define SPLICE_F_MOVE 1
#define PTHREAD_KEYS_MAX 1024
#define USE_SYSV_SHARED_MEMORY 1
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define F_INT2LT 64
#define HAVE_WRITEV 1
#define F_PG_GET_VIEWDEF_OID 1641
#define __useconds_t_defined 
#define FIELDNO_EXPRSTATE_PARENT 11
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define F_INT2MI 180
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define __HAVE_DISTINCT_FLOAT64X 0
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define F_BOX_LE 130
#define RelationIsPermanent(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_PERMANENT)
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define __SIZEOF_LONG_LONG__ 8
#define HAVE_SETENV 1
#define IS_JOIN_REL(rel) ((rel)->reloptkind == RELOPT_JOINREL || (rel)->reloptkind == RELOPT_OTHER_JOINREL)
#define F_LO_CREAT 957
#define SPLICE_F_GIFT 8
#define HASH_ELEM 0x0008
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define PageSetPageSizeAndVersion(page,size,version) ( AssertMacro(((size) & 0xFF00) == (size)), AssertMacro(((version) & 0x00FF) == (version)), ((PageHeader) (page))->pd_pagesize_version = (size) | (version) )
#define F_PG_STAT_GET_XACT_FUNCTION_CALLS 3046
#define __SAFE_STR_LIB_H__ 
#define PG_HAVE_SPIN_DELAY 
#define SInvalReadLock (&MainLWLockArray[5].lock)
#define ELIBACC 79
#define F_PG_STAT_GET_TUPLES_UPDATED 1932
#define F_TEXTLEN 1257
#define __LDBL_DIG__ 33
#define __exctype(name) extern int name (int) __THROW
#define pg_attribute_always_inline __attribute__((always_inline)) inline
#define _SC_NZERO _SC_NZERO
#define F_INT2PL 176
#define F_ARRAY_EQ 744
#define F_PG_ADVISORY_XACT_LOCK_INT8 3089
#define INTERRUPTS_CAN_BE_PROCESSED() (InterruptHoldoffCount == 0 && CritSectionCount == 0 && QueryCancelHoldoffCount == 0)
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define S_IROTH (S_IRGRP >> 3)
#define RelationGetFillFactor(relation,defaultff) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->fillfactor : (defaultff))
#define Anum_pg_index_indoption 18
#define F_INT82MI 838
#define F_DATE_LARGER 1138
#define F_HAS_SEQUENCE_PRIVILEGE_OID_TEXT 2186
#define X_OK 1
#define _NETDB_H 1
#define ERRCODE_DATA_CORRUPTED MAKE_SQLSTATE('X','X','0','0','1')
#define F_DATE_PART_TEXT_TIMESTAMPTZ 1171
#define __S_ISGID 02000
#define F_PG_GET_RULEDEF_OID 1573
#define F_PG_LSN_MII 5024
#define FunctionCallInvoke(fcinfo) ((* (fcinfo)->flinfo->fn_addr) (fcinfo))
#define F_JSONB_CONCAT 3301
#define PRIoFAST8 "o"
#define F_LSEG_EQ 999
#define DatumGetByteaPP(X) ((bytea *) PG_DETOAST_DATUM_PACKED(X))
#define FIELDNO_TUPLETABLESLOT_NVALID 2
#define F_BIT_OR_INT2 2237
#define TIMESTAMPOID 1114
#define F_BIT_OR_INT4 2239
#define nodeTag(nodeptr) (((const Node*)(nodeptr))->type)
#define SO_BUF_LOCK 72
#define F_INT8_AVG_DESERIALIZE 2787
#define F_RPAD_TEXT_INT4_TEXT 874
#define PG_ATTRIBUTE_H 
#define F_PG_GET_FUNCTION_RESULT 2165
#define F_DROUND 228
#define F_RI_FKEY_SETNULL_DEL 1650
#define RelationIsMapped(relation) (RELKIND_HAS_STORAGE((relation)->rd_rel->relkind) && ((relation)->rd_rel->relfilenode == InvalidOid))
#define PG_FUNCTION_INFO_V1(funcname) extern Datum funcname(PG_FUNCTION_ARGS); extern PGDLLEXPORT const Pg_finfo_record * CppConcat(pg_finfo_,funcname)(void); const Pg_finfo_record * CppConcat(pg_finfo_,funcname) (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable
#define F_NAMEREGEXNE 1252
#define BackgroundWorkerLock (&MainLWLockArray[33].lock)
#define SCNuFAST8 "hhu"
#define ERRCODE_CONFIG_FILE_ERROR MAKE_SQLSTATE('F','0','0','0','0')
#define F_IN_RANGE_TIMETZ_TIMETZ_INTERVAL_BOOL_BOOL 4138
#define MAX_KILOBYTES INT_MAX
#define PALLOC_H 
#define FPE_FLTUND FPE_FLTUND
#define FRAMEOPTION_START_UNBOUNDED_FOLLOWING 0x00080
#define _(x) gettext(x)
