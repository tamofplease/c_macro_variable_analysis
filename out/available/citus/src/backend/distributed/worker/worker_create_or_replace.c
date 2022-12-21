#define __S_IFBLK 0060000
#define DatumGetByteaP(X) ((bytea *) PG_DETOAST_DATUM(X))
#define Anum_pg_index_indisready 12
#define GUC_SUPERUSER_ONLY 0x0100
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define BootstrapTransactionId ((TransactionId) 1)
#define DATEMULTIRANGEOID 4535
#define __SSP_STRONG__ 3
#define __attr_access(x) __attribute__ ((__access__ x))
#define IPV6_2292HOPOPTS 3
#define ALLOCSET_DEFAULT_MAXSIZE (8 * 1024 * 1024)
#define SET_LOCKTAG_RELATION_EXTEND(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION_EXTEND, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define AT_STATX_SYNC_AS_STAT 0x0000
#define STATUS_EOF (-2)
#define AF_MAX PF_MAX
#define _SC_PII _SC_PII
#define ERRCODE_INVALID_DATABASE_DEFINITION MAKE_SQLSTATE('4','2','P','1','2')
#define __UINT_LEAST16_MAX__ 0xffff
#define IP_ROUTER_ALERT 5
#define RESOWNER_H 
#define FRAMEOPTION_NONDEFAULT 0x00001
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define RE_DUP_MAX (0x7fff)
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define PVC_RECURSE_AGGREGATES 0x0002
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define sa_sigaction __sigaction_handler.sa_sigaction
#define XLOG_MARK_UNIMPORTANT 0x02
#define ILIST_H 
#define LIBPQ_HAS_PIPELINING 1
#define PG_GETARG_VARCHAR_PP(n) DatumGetVarCharPP(PG_GETARG_DATUM(n))
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define USE_LLVM 1
#define _T_WCHAR_ 
#define IS_VALID_DATE(d) ((DATETIME_MIN_JULIAN - POSTGRES_EPOCH_JDATE) <= (d) && (d) < (DATE_END_JULIAN - POSTGRES_EPOCH_JDATE))
#define NI_MAXSERV 32
#define ERRCODE_CONNECTION_DOES_NOT_EXIST MAKE_SQLSTATE('0','8','0','0','3')
#define ERRCODE_RESERVED_NAME MAKE_SQLSTATE('4','2','9','3','9')
#define ERRCODE_READ_ONLY_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','6')
#define LockHashPartitionLockByIndex(i) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + (i)].lock)
#define _PRINTF_NAN_LEN_MAX 4
#define PG_BINARY_R "r"
#define PG_BINARY_W "w"
#define PRIuPTR __PRIPTR_PREFIX "u"
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define PG_GETARG_EXPANDED_ARRAYX(n,metacache) DatumGetExpandedArrayX(PG_GETARG_DATUM(n), metacache)
#define GUC_UNIT_MB 0x4000
#define ERRCODE_INVALID_ARGUMENT_FOR_NTILE MAKE_SQLSTATE('2','2','0','1','4')
#define __GNU_LIBRARY__ 6
#define NL_NMAX INT_MAX
#define GUC_UNIT_MS 0x10000
#define ERRCODE_SINGLETON_SQL_JSON_ITEM_REQUIRED MAKE_SQLSTATE('2','2','0','3','8')
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define XACT_FLAGS_NEEDIMMEDIATECOMMIT (1U << 2)
#define CONFIGURE_ARGS " '--build=aarch64-linux-gnu' '--prefix=/usr' '--includedir=${prefix}/include' '--mandir=${prefix}/share/man' '--infodir=${prefix}/share/info' '--sysconfdir=/etc' '--localstatedir=/var' '--disable-option-checking' '--disable-silent-rules' '--libdir=${prefix}/lib/aarch64-linux-gnu' '--runstatedir=/run' '--disable-maintainer-mode' '--disable-dependency-tracking' '--with-tcl' '--with-perl' '--with-python' '--with-pam' '--with-openssl' '--with-libxml' '--with-libxslt' '--mandir=/usr/share/postgresql/14/man' '--docdir=/usr/share/doc/postgresql-doc-14' '--sysconfdir=/etc/postgresql-common' '--datarootdir=/usr/share/' '--datadir=/usr/share/postgresql/14' '--bindir=/usr/lib/postgresql/14/bin' '--libdir=/usr/lib/aarch64-linux-gnu/' '--libexecdir=/usr/lib/postgresql/' '--includedir=/usr/include/postgresql/' '--with-extra-version= (Ubuntu 14.5-0ubuntu0.22.04.1)' '--enable-nls' '--enable-thread-safety' '--enable-debug' '--enable-dtrace' '--disable-rpath' '--with-uuid=e2fs' '--with-gnu-ld' '--with-gssapi' '--with-ldap' '--with-pgport=5432' '--with-system-tzdata=/usr/share/zoneinfo' 'AWK=mawk' 'MKDIR_P=/bin/mkdir -p' 'PROVE=/usr/bin/prove' 'PYTHON=/usr/bin/python3' 'TAR=/bin/tar' 'XSLTPROC=xsltproc --nonet' 'CFLAGS=-g -O2 -flto=auto -ffat-lto-objects -flto=auto -ffat-lto-objects -fstack-protector-strong -Wformat -Werror=format-security' 'LDFLAGS=-Wl,-Bsymbolic-functions -flto=auto -ffat-lto-objects -flto=auto -Wl,-z,relro -Wl,-z,now' '--enable-tap-tests' '--with-icu' '--with-llvm' 'LLVM_CONFIG=/usr/bin/llvm-config-14' 'CLANG=/usr/bin/clang-14' '--with-lz4' '--with-systemd' '--with-selinux' 'build_alias=aarch64-linux-gnu' 'CPPFLAGS=-Wdate-time -D_FORTIFY_SOURCE=2' 'CXXFLAGS=-g -O2 -flto=auto -ffat-lto-objects -flto=auto -ffat-lto-objects -fstack-protector-strong -Wformat -Werror=format-security'"
#define CLOCK_THREAD_CPUTIME_ID 3
#define HTUP_H 
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define SO_NOFCS 43
#define PG_RETURN_UINT32(x) return UInt32GetDatum(x)
#define SOCK_RAW SOCK_RAW
#define EDESTADDRREQ 89
#define ERRCODE_NO_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','5')
#define AMFLAG_HAS_TID_RANGE (1 << 0)
#define ERRCODE_INVALID_TEXT_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','2')
#define si_pid _sifields._kill.si_pid
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define PG_MINORVERSION_NUM 5
#define REGOPEROID 2203
#define RECORDARRAYOID 2287
#define IPV6_ADDRFORM 1
#define __ARM_FEATURE_FMA 1
#define VARDATA(PTR) VARDATA_4B(PTR)
#define SOCK_RDM SOCK_RDM
#define Anum_pg_type_typsend 19
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define HAVE_GETOPT 1
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define AttributeRelidNameIndexId 2658
#define IP_MAX_MEMBERSHIPS 20
#define BITMAPLEN(NATTS) (((int)(NATTS) + 7) / 8)
#define PG_MCV_LISTOID 5017
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define WORKER_PROTOCOL_H 
#define MaxAttrSize (10 * 1024 * 1024)
#define foreach_ptr(var,l) for (ListCell *(var ## CellDoNotUse) = list_head(l); (var ## CellDoNotUse) != NULL && (((var) = lfirst(var ## CellDoNotUse)) || true); var ## CellDoNotUse = lnext(l, var ## CellDoNotUse))
#define DAYS_PER_MONTH 30
#define ERRCODE_UNDEFINED_COLUMN MAKE_SQLSTATE('4','2','7','0','3')
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define MCAST_LEAVE_SOURCE_GROUP 47
#define ACLITEM_SET_PRIVS_GOPTIONS(item,privs,goptions) ((item).ai_privs = ((AclMode) (privs) & 0xFFFF) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define ERRORMESSAGE_H 
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 0
#define IPV6_IPSEC_POLICY 34
#define ItemIdSetDead(itemId) ( (itemId)->lp_flags = LP_DEAD, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define FORMAT_OPERATOR_INVALID_AS_NULL 0x01
#define Anum_pg_class_relchecks 19
#define STA_DEL 0x0020
#define planner_rt_fetch(rti,root) ((root)->simple_rte_array ? (root)->simple_rte_array[rti] : rt_fetch(rti, (root)->parse->rtable))
#define _XOPEN_VERSION 700
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define BGWORKER_CLASS_PARALLEL 0x0010
#define IP_FREEBIND 15
#define ProcedureRelation_Rowtype_Id 81
#define PG_VERSION_NUM 140005
#define init_local_spin_delay(status) init_spin_delay(status, __FILE__, __LINE__, PG_FUNCNAME_MACRO)
#define REGDICTIONARYOID 3769
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __SAFE_MEM_LIB_H__ 
#define _BITS_PTHREADTYPES_COMMON_H 1
#define Anum_pg_dist_partition_partmethod 2
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define GetSysCacheHashValue4(cacheId,key1,key2,key3,key4) GetSysCacheHashValue(cacheId, key1, key2, key3, key4)
#define PF_LLC 26
#define GROUPING_CAN_PARTIAL_AGG 0x0004
#define __sigval_t_defined 
#define SIGPROF 27
#define SOL_BLUETOOTH 274
#define VARSIZE_1B(PTR) ((((varattrib_1b *) (PTR))->va_header >> 1) & 0x7F)
#define HAVE_LIBLDAP 1
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define PG_INT32_MIN (-0x7FFFFFFF-1)
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define PG_DYNSHMEM_DIR "pg_dynshmem"
#define AttributeRelation_Rowtype_Id 75
#define makeNode(_type_) ((_type_ *) newNode(sizeof(_type_),T_ ##_type_))
#define ENOTTY 25
#define PRIi32 "i"
#define MOD_NANO ADJ_NANO
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define ERRCODE_INVALID_ARGUMENT_FOR_SQL_JSON_DATETIME_FUNCTION MAKE_SQLSTATE('2','2','0','3','1')
#define HASH_SEGMENT 0x0002
#define HAVE_DECL_LLVMORCGETSYMBOLADDRESSIN 0
#define PARTITION_STRATEGY_RANGE 'r'
#define L_cuserid 9
#define ERRCODE_WARNING MAKE_SQLSTATE('0','1','0','0','0')
#define COMP_CRC32C(crc,data,len) ((crc) = pg_comp_crc32c((crc), (data), (len)))
#define Anum_pg_attribute_attalign 11
#define __u_char_defined 
#define HAVE_DECL_F_FULLFSYNC 0
#define __FLT32_HAS_DENORM__ 1
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define IP_ADD_MEMBERSHIP 35
#define HAVE_INT64_TIMESTAMP 
#define Anum_pg_type_typrelid 12
#define GROUPING_CAN_USE_HASH 0x0002
#define PageGetPageLayoutVersion(page) (((PageHeader) (page))->pd_pagesize_version & 0x00FF)
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define Anum_pg_type_typcollation 29
#define unix 1
#define SCNxLEAST32 "x"
#define _BITS_TYPES_LOCALE_T_H 1
#define _LIMITS_H___ 
#define MSG_WAITALL MSG_WAITALL
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define __FLT32_MAX_10_EXP__ 38
#define INT8ARRAYOID 1016
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define __O_NOATIME 01000000
#define USECS_PER_DAY INT64CONST(86400000000)
#define __S_IFMT 0170000
#define HAVE_INT_OPTERR 1
#define __SI_SIGFAULT_ADDL 
#define BITARRAYOID 1561
#define SOL_TIPC 271
#define TTS_FIXED(slot) (((slot)->tts_flags & TTS_FLAG_FIXED) != 0)
#define _CS_PATH _CS_PATH
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define PG_DETOAST_DATUM(datum) pg_detoast_datum((struct varlena *) DatumGetPointer(datum))
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define Natts_pg_sequence 8
#define IN_CLASSB_NSHIFT 16
#define DEFAULT_BGWRITER_FLUSH_AFTER 64
#define PRS2LOCK_H 
#define NFDBITS __NFDBITS
#define REGCLASSOID 2205
#define LOG_DESTINATION_STDERR 1
#define SCNd8 "hhd"
#define ERRCODE_STACKED_DIAGNOSTICS_ACCESSED_WITHOUT_ACTIVE_HANDLER MAKE_SQLSTATE('0','Z','0','0','2')
#define SINVAL_H 
#define WCHAR_WIDTH 32
#define ItemIdSetRedirect(itemId,link) ( (itemId)->lp_flags = LP_REDIRECT, (itemId)->lp_off = (link), (itemId)->lp_len = 0 )
#define slist_check(head) ((void) (head))
#define SOL_IPV6 41
#define HeapTupleHeaderSetXminFrozen(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_FROZEN) )
#define __O_CLOEXEC 02000000
#define ENETRESET 102
#define IP_MTU 14
#define PG_VERSION_13 130000
#define PG_VERSION_14 140000
#define PG_VERSION_15 150000
#define DATEARRAYOID 1182
#define TSMULTIRANGEOID 4533
#define AF_ROSE PF_ROSE
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define __fortify_function __extern_always_inline __attribute_artificial__
#define LP_UNUSED 0
#define Anum_pg_class_reltuples 11
#define SCNd16 "hd"
#define REPLICATION_MODEL_STREAMING 's'
#define INSTR_TIME_GET_MILLISEC(t) (((double) (t).tv_sec * 1000.0) + ((double) (t).tv_nsec) / 1000000.0)
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define __UINT_LEAST8_MAX__ 0xff
#define REGCLASSARRAYOID 2210
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define BTGreaterEqualStrategyNumber 4
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define __GID_T_TYPE __U32_TYPE
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define __ASM_GENERIC_BITS_PER_LONG 
#define ARR_SIZE(a) VARSIZE(a)
#define SCNd32 "d"
#define SCNi8 "hhi"
#define sprintf pg_sprintf
#define SVE_VL_MAX __SVE_VL_MAX
#define PF_MAX 46
#define pg_bswap16(x) __builtin_bswap16(x)
#define __linux 1
#define VARATT_IS_4B_C(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x02)
#define ERROR_BUFFER_SIZE 256
#define PG_MAGIC_FUNCTION_NAME Pg_magic_func
#define AGG_CONTEXT_WINDOW 2
#define VARATT_IS_4B_U(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x00)
#define FORMAT_TYPE_FORCE_QUALIFY 0x04
#define VARCHAROID 1043
#define ERRCODE_SUCCESSFUL_COMPLETION MAKE_SQLSTATE('0','0','0','0','0')
#define AI_ADDRCONFIG 0x0020
#define TYPTYPE_ENUM 'e'
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define _BITS_PTHREADTYPES_ARCH_H 1
#define HOURS_PER_DAY 24
#define RTContainsStrategyNumber 7
#define ERRCODE_S_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','2')
#define __bool_true_false_are_defined 1
#define IsTrueArrayType(typeForm) (OidIsValid((typeForm)->typelem) && (typeForm)->typsubscript == F_ARRAY_SUBSCRIPT_HANDLER)
#define SYNC_METHOD_OPEN_DSYNC 4
#define ERRCODE_UNDEFINED_SCHEMA MAKE_SQLSTATE('3','F','0','0','0')
#define ERRCODE_DATETIME_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','0','8')
#define __SIZE_T 
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define SCNd64 __PRI64_PREFIX "d"
#define ACL_INSERT (1<<0)
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define Anum_pg_sequence_seqcache 7
#define SizeOfXLogRecordDataHeaderShort (sizeof(uint8) * 2)
#define _ATFILE_SOURCE 1
#define PF_WANPIPE 25
#define NO_MAX_DSIZE (-1)
#define _SC_NETWORKING _SC_NETWORKING
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define RangeVarGetRelid(relation,lockmode,missing_ok) RangeVarGetRelidExtended(relation, lockmode, (missing_ok) ? RVR_MISSING_OK : 0, NULL, NULL)
#define INT2OID 21
#define PATH_REQ_OUTER(path) ((path)->param_info ? (path)->param_info->ppi_req_outer : (Relids) NULL)
#define RTLeftStrategyNumber 1
#define GROUP_ID_UPGRADING -2
#define pg_bswap64(x) __builtin_bswap64(x)
#define UINT16_C(c) c
#define TupleDescSize(src) (offsetof(struct TupleDescData, attrs) + (src)->natts * sizeof(FormData_pg_attribute))
#define SCNo8 "hho"
#define MSG_SYN MSG_SYN
#define HeapTupleHeaderXminFrozen(tup) ( ((tup)->t_infomask & (HEAP_XMIN_FROZEN)) == HEAP_XMIN_FROZEN )
#define _PC_PRIO_IO _PC_PRIO_IO
#define SpinLockInit(lock) S_INIT_LOCK(lock)
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define qsort(a,b,c,d) pg_qsort(a,b,c,d)
#define __SCHAR_MAX__ 0x7f
#define PG_IOLBF _IOLBF
#define DatumGetUInt8(X) ((uint8) (X))
#define RELKIND_PARTITIONED_INDEX 'I'
#define be32toh(x) __bswap_32 (x)
#define RelationHasReferenceCountZero(relation) ((bool)((relation)->rd_refcnt == 0))
#define __KERNEL_STRICT_NAMES 
#define SCNxFAST16 __PRIPTR_PREFIX "x"
#define Anum_pg_type_typnamespace 3
#define ESNOSPC ( 406 )
#define POINTOID 600
#define pg_write_barrier_impl() __atomic_thread_fence(__ATOMIC_RELEASE)
#define CITUS_RUN_COMMAND_APPLICATION_NAME_PREFIX "citus_run_command gpid="
#define SA_SIGINFO 4
#define FIELDNO_HEAPTUPLEHEADERDATA_HOFF 4
#define STA_PPSWANDER 0x0400
#define Anum_pg_class_relfrozenxid 29
#define ERRCODE_WITH_CHECK_OPTION_VIOLATION MAKE_SQLSTATE('4','4','0','0','0')
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define DO_AGGSPLIT_SERIALIZE(as) (((as) & AGGSPLITOP_SERIALIZE) != 0)
#define PATHOID 602
#define SIZEOF_DSA_POINTER 8
#define dlist_check(head) ((void) (head))
#define __isascii(c) (((c) & ~0x7f) == 0)
#define __toascii(c) ((c) & 0x7f)
#define Anum_pg_class_relreplident 26
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define SO_TIMESTAMP_OLD 29
#define __SIZEOF_INT__ 4
#define WINT_WIDTH 32
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _BITS_SIGINFO_ARCH_H 1
#define SizeOfXLogRecordBlockCompressHeader sizeof(XLogRecordBlockCompressHeader)
#define SOL_TLS 282
#define PageClearPrunable(page) (((PageHeader) (page))->pd_prune_xid = InvalidTransactionId)
#define IPPROTO_SCTP IPPROTO_SCTP
#define WORKER_CREATE_OR_REPLACE_H 
#define WILDCARD_NODE_ID 0
#define SCNxFAST64 __PRI64_PREFIX "x"
#define AT_FDCWD -100
#define FIOSETOWN 0x8901
#define HeapTupleHasVarWidth(tuple) (((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH) != 0)
#define ERRCODE_INSUFFICIENT_RESOURCES MAKE_SQLSTATE('5','3','0','0','0')
#define HAVE_DLOPEN 1
#define TSROUND(j) (rint(((double) (j)) * TS_PREC_INV) / TS_PREC_INV)
#define PRIuFAST16 __PRIPTR_PREFIX "u"
#define _SC_VERSION _SC_VERSION
#define IPPROTO_EGP IPPROTO_EGP
#define __USER_LABEL_PREFIX__ 
#define SO_DEBUG 1
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define INDOPTION_NULLS_FIRST 0x0002
#define _BITS_ENDIANNESS_H 1
#define errcontext set_errcontext_domain(TEXTDOMAIN), errcontext_msg
#define __LC_MEASUREMENT 11
#define Anum_pg_attribute_attbyval 10
#define SCM_TIMESTAMPING_PKTINFO 58
#define __GLIBC__ 2
#define RTSubEqualStrategyNumber 25
#define PRIuFAST32 __PRIPTR_PREFIX "u"
#define HASH_ATTACH 0x1000
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define MOD_FREQUENCY ADJ_FREQUENCY
#define ERRCODE_FDW_INCONSISTENT_DESCRIPTOR_INFORMATION MAKE_SQLSTATE('H','V','0','2','1')
#define WCONTINUED 8
#define RelationUsesLocalBuffers(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP)
#define setjmp(env) _setjmp (env)
#define GUC_check_errmsg pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errmsg_string = format_elog_string
#define UTILITY_H 
#define PG_LSNARRAYOID 3221
#define ERRCODE_FDW_INVALID_STRING_LENGTH_OR_BUFFER_LENGTH MAKE_SQLSTATE('H','V','0','9','0')
#define __LDBL_HAS_INFINITY__ 1
#define SUBQUERY_PUSHDOWN_RELATION_ID 10001
#define TimestampGetDatum(X) Int64GetDatum(X)
#define FUNCAPI_H 
#define RTOldBelowStrategyNumber 29
#define __ARM_FEATURE_IDIV 1
#define DatumGetVarCharPSlice(X,m,n) ((VarChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define AF_PHONET PF_PHONET
#define MaxCommandIdAttributeNumber (-5)
#define Anum_pg_ts_config_cfgname 2
#define ACL_REFERENCES (1<<5)
#define ERRCODE_FDW_INVALID_COLUMN_NAME MAKE_SQLSTATE('H','V','0','0','7')
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define HASH_PARTITION 0x0001
#define Anum_pg_type_typname 2
#define ENOLINK 67
#define F_SEAL_SEAL 0x0001
#define SO_BROADCAST 6
#define __SVE_NUM_ZREGS 32
#define Anum_pg_type_typbyval 6
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __DEV_T_TYPE __UQUAD_TYPE
#define USECS_PER_SEC INT64CONST(1000000)
#define __SAFE_LIB_ERRNO_H__ 
#define TSMULTIRANGEARRAYOID 6152
#define PACKAGE_TARNAME "postgresql"
#define EAFNOSUPPORT 97
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __STDC_UTF_16__ 1
#define le32toh(x) __uint32_identity (x)
#define _SIZE_T_DEFINED 
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define SearchSysCacheCopy4(cacheId,key1,key2,key3,key4) SearchSysCacheCopy(cacheId, key1, key2, key3, key4)
#define EXECNODES_H 
#define _STRINGS_H 1
#define ERRCODE_PROGRAM_LIMIT_EXCEEDED MAKE_SQLSTATE('5','4','0','0','0')
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define CACHELINEALIGN(LEN) TYPEALIGN(PG_CACHE_LINE_SIZE, (LEN))
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define SYNC_METHOD_FDATASYNC 1
#define _SC_PII_OSI _SC_PII_OSI
#define ERRCODE_RAISE_EXCEPTION MAKE_SQLSTATE('P','0','0','0','1')
#define SCNdPTR __PRIPTR_PREFIX "d"
#define _POSIX_V7_LPBIG_OFFBIG -1
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __INT_WIDTH__ 32
#define O_NDELAY O_NONBLOCK
#define __S_IFCHR 0020000
#define S_ISVTX __S_ISVTX
#define ERRCODE_IS_CATEGORY(ec) (((ec) & ~((1 << 12) - 1)) == 0)
#define ItemPointerSet(pointer,blockNumber,offNum) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber), (pointer)->ip_posid = offNum )
#define BOXARRAYOID 1020
#define TYPEALIGN_DOWN(ALIGNVAL,LEN) (((uintptr_t) (LEN)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define HAVE_POSIX_FALLOCATE 1
#define HEAP_HASEXTERNAL 0x0004
#define __STDC_IEC_559__ 1
#define SerialSLRULock (&MainLWLockArray[31].lock)
#define SO_TYPE 3
#define __STDC_ISO_10646__ 201706L
#define CHECKPOINT_IS_SHUTDOWN 0x0001
#define MOD_MICRO ADJ_MICRO
#define EXEC_FLAG_EXPLAIN_ONLY 0x0001
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define TYPCATEGORY_RANGE 'R'
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define lsecond_node(type,l) castNode(type, lsecond(l))
#define CitusMakeNode(_type_) ((_type_ *) CitusNewNode(sizeof(_type_),T_ ##_type_))
#define __id_t_defined 
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define BoolIsValid(boolean) ((boolean) == false || (boolean) == true)
#define DatumGetChar(X) ((char) (X))
#define __DECIMAL_DIG__ 36
#define ERRCODE_INVALID_SQL_STATEMENT_NAME MAKE_SQLSTATE('2','6','0','0','0')
#define __USE_FORTIFY_LEVEL 2
#define LOCK_EX 2
#define HeapTupleHeaderGetRawCommandId(tup) ( (tup)->t_choice.t_heap.t_field3.t_cid )
#define UNKNOWNOID 705
#define TS_PREC_INV 1000000.0
#define Anum_pg_index_indkey 15
#define EIO 5
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define SerializablePredicateListLock (&MainLWLockArray[30].lock)
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define ERRCODE_E_R_I_E_EVENT_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','3')
#define _LARGEFILE_SOURCE 1
#define MAX_INPUT 255
#define PROVOLATILE_STABLE 's'
#define ENABLE_NLS 1
#define ENETDOWN 100
#define ESTALE 116
#define HeapTupleHasNulls(tuple) (((tuple)->t_data->t_infomask & HEAP_HASNULL) != 0)
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define _WCHAR_T_DEFINED_ 
#define LC_TIME __LC_TIME
#define HAVE_STRTOF 1
#define AutovacuumScheduleLock (&MainLWLockArray[23].lock)
#define SEGV_ACCADI SEGV_ACCADI
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define ALIGNOF_LONG 8
#define PTRDIFF_MAX (9223372036854775807L)
#define HAVE__BUILTIN_CONSTANT_P 1
#define __ASM_SIGCONTEXT_H 
#define IP_ORIGDSTADDR 20
#define _SC_UINT_MAX _SC_UINT_MAX
#define F_OK 0
#define HAVE_STDLIB_H 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define IPV6_DSTOPTS 59
#define OPEN_SYNC_FLAG O_SYNC
#define SOL_ICMPV6 58
#define FLOAT8PASSBYVAL true
#define ERRCODE_INDETERMINATE_DATATYPE MAKE_SQLSTATE('4','2','P','1','8')
#define __va_list__ 
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define ERRCODE_NO_DATA_FOUND MAKE_SQLSTATE('P','0','0','0','2')
#define AF_BLUETOOTH PF_BLUETOOTH
#define Anum_pg_proc_pronargs 17
#define HeapTupleHeaderSetXminCommitted(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_COMMITTED) )
#define L_tmpnam 20
#define Anum_pg_proc_prosecdef 11
#define _DIRENT_HAVE_D_RECLEN 
#define PG_GETARG_BPCHAR_P(n) DatumGetBpCharP(PG_GETARG_DATUM(n))
#define PG_DIAG_SCHEMA_NAME 's'
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define TSTZMULTIRANGEOID 4534
#define isascii(c) __isascii (c)
#define MINS_PER_HOUR 60
#define __GNUC__ 11
#define PRIoLEAST16 "o"
#define timestamptz_cmp_internal(dt1,dt2) timestamp_cmp_internal(dt1, dt2)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define IPPROTO_TCP IPPROTO_TCP
#define PG_DIAG_SQLSTATE 'C'
#define appendStringInfoCharMacro(str,ch) (((str)->len + 1 >= (str)->maxlen) ? appendStringInfoChar(str, ch) : (void)((str)->data[(str)->len] = (ch), (str)->data[++(str)->len] = '\0'))
#define HEAP_XACT_MASK 0xFFF0
#define JSONBARRAYOID 3807
#define OPENSSL_API_COMPAT 0x10001000L
#define PageIsEmpty(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData)
#define HAVE_PTHREAD_BARRIER_WAIT 1
#define AF_NFC PF_NFC
#define ERRCODE_WARNING_NULL_VALUE_ELIMINATED_IN_SET_FUNCTION MAKE_SQLSTATE('0','1','0','0','3')
#define LOCK_NB 4
#define CSTRINGARRAYOID 1263
#define HAVE_LZ4_H 1
#define EAI_MEMORY -10
#define VARSIZE_4B(PTR) ((((varattrib_4b *) (PTR))->va_4byte.va_header >> 2) & 0x3FFFFFFF)
#define SO_DETACH_REUSEPORT_BPF 68
#define __BIGGEST_ALIGNMENT__ 16
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define LONG_MAX __LONG_MAX__
#define IPV6_RECVHOPOPTS 53
#define ItemIdGetFlags(itemId) ((itemId)->lp_flags)
#define JSONPATHOID 4072
#define __LC_MESSAGES 5
#define PRIuMAX __PRI64_PREFIX "u"
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define list_make_ptr_cell(v) ((ListCell) {.ptr_value = (v)})
#define HEAP_HOT_UPDATED 0x4000
#define PRIoLEAST64 __PRI64_PREFIX "o"
#define __GLIBC_USE_LIB_EXT2 1
#define RESERVED_HASHED_COLUMN_ID MaxAttrNumber
#define HAVE_GETRLIMIT 1
#define WTERMSIG(status) __WTERMSIG (status)
#define EXEC_FLAG_WITH_NO_DATA 0x0020
#define ERRCODE_ZERO_LENGTH_CHARACTER_STRING MAKE_SQLSTATE('2','2','0','0','F')
#define BufferIsInvalid(buffer) ((buffer) == InvalidBuffer)
#define __DBL_IS_IEC_60559__ 2
#define LOCK_RW 192
#define EXIT_SUCCESS 0
#define PrevProcessUtility_compat(a,b,c,d,e,f,g,h) PrevProcessUtility(a, b, c, d, e, f, g, h)
#define ERRCODE_AMBIGUOUS_ALIAS MAKE_SQLSTATE('4','2','P','0','9')
#define PG_GETARG_INTERVAL_P(n) DatumGetIntervalP(PG_GETARG_DATUM(n))
#define ACL_CREATE_TEMP_CHR 'T'
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define PG_BSWAP_H 
#define SINGLE_RTE_INDEX 1
#define DatumGetName(X) ((Name) DatumGetPointer(X))
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define VARLENA_EXTSIZE_MASK ((1U << VARLENA_EXTSIZE_BITS) - 1)
#define SCM_CREDENTIALS SCM_CREDENTIALS
#define RowShareLock 2
#define ELF_PRARGSZ (80)
#define expand_function_arguments_compat(a,b,c,d) expand_function_arguments(a, b, c, d)
#define HAVE_FDATASYNC 1
#define ITIMER_PROF ITIMER_PROF
#define snprintf pg_snprintf
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define PRId8 "d"
#define SIGIO SIGPOLL
#define XL_ROUTINE(...) &(XLogReaderRoutine){__VA_ARGS__}
#define HAVE_READLINK 1
#define si_syscall _sifields._sigsys._syscall
#define LOCK_UN 8
#define NL_LANGMAX _POSIX2_LINE_MAX
#define PG_SNAPSHOTARRAYOID 5039
#define VARATT_IS_EXPANDED_HEADER(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_header == (uint32) EOH_HEADER_MAGIC)
#define HASH_BLOBS 0x0020
#define XID8OID 5069
#define HAVE_SYS_UIO_H 1
#define __INTPTR_WIDTH__ 64
#define ERRCODE_RESTRICT_VIOLATION MAKE_SQLSTATE('2','3','0','0','1')
#define MAX_HANDLE_SZ 128
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define XLOG_XACT_OPMASK 0x70
#define XLogRecBlockImageApply(decoder,block_id) ((decoder)->blocks[block_id].apply_image)
#define INET_ADDRSTRLEN 16
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define SetListCellPtr(a,b) ((a)->ptr_value = (b))
#define _XBS5_LP64_OFF64 1
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define PRIi8 "i"
#define ERRCODE_INVALID_TRANSACTION_STATE MAKE_SQLSTATE('2','5','0','0','0')
#define MakeExpandedObjectReadOnly(d,isnull,typlen) (((isnull) || (typlen) != -1) ? (d) : MakeExpandedObjectReadOnlyInternal(d))
#define _FEATURES_H 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __LDBL_HAS_DENORM__ 1
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
#define CURSOR_OPT_ASENSITIVE 0x0010
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define CREATE_TABLE_COMMAND "CREATE TABLE %s (%s)"
#define Anum_pg_publication_pubinsert 5
#define HAVE_SYS_UN_H 1
#define SO_DONTROUTE 5
#define INETARRAYOID 1041
#define ERRCODE_FDW_COLUMN_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','5')
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define DatumGetInt32(X) ((int32) (X))
#define TTS_SHOULDFREE(slot) (((slot)->tts_flags & TTS_FLAG_SHOULDFREE) != 0)
#define IP_PMTUDISC_WANT 1
#define __DBL_HAS_INFINITY__ 1
#define BKI_LOOKUP_OPT(catalog) 
#define ERFKILL 132
#define __FLT16_DECIMAL_DIG__ 5
#define COMPLETION_TAG_BUFSIZE 64
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define PG_GETARG_TEXT_PP(n) DatumGetTextPP(PG_GETARG_DATUM(n))
#define ERRCODE_DUPLICATE_FUNCTION MAKE_SQLSTATE('4','2','7','2','3')
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define isspace_l(c,l) __isspace_l ((c), (l))
#define PRIo8 "o"
#define SCNiLEAST64 __PRI64_PREFIX "i"
#define TYPCATEGORY_INVALID '\0'
#define ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE MAKE_SQLSTATE('0','3','0','0','0')
#define PG_TRY() do { sigjmp_buf *_save_exception_stack = PG_exception_stack; ErrorContextCallback *_save_context_stack = error_context_stack; sigjmp_buf _local_sigjmp_buf; bool _do_rethrow = false; if (sigsetjmp(_local_sigjmp_buf, 0) == 0) { PG_exception_stack = &_local_sigjmp_buf
#define memset_struct_0(variable) memset(&variable, 0, sizeof(variable))
#define SCNdLEAST16 "hd"
#define COMPRESSION_LEVEL_MAX 19
#define _POSIX_RE_DUP_MAX 255
#define GUC_UNIT_KB 0x1000
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define PF_PHONET 35
#define FRAMEOPTION_RANGE 0x00002
#define __USECONDS_T_TYPE __U32_TYPE
#define HAVE_GCC__ATOMIC_INT64_CAS 1
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define INSTR_TIME_IS_ZERO(t) ((t).tv_nsec == 0 && (t).tv_sec == 0)
#define _LINUX_STDDEF_H 
#define _STDARG_H 
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define _PC_VDISABLE _PC_VDISABLE
#define __CHAR32_TYPE__ unsigned int
#define SO_COOKIE 57
#define _BITS_STDIO2_H 1
#define get_partition_parent_compat(a,b) get_partition_parent(a, b)
#define HEAP_XMAX_IS_LOCKED_ONLY(infomask) (((infomask) & HEAP_XMAX_LOCK_ONLY) || (((infomask) & (HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK)) == HEAP_XMAX_EXCL_LOCK))
#define HEAP_XMAX_IS_MULTI 0x1000
#define ERRCODE_INVALID_OBJECT_DEFINITION MAKE_SQLSTATE('4','2','P','1','7')
#define DatumGetTransactionId(X) ((TransactionId) (X))
#define GUC_H 
#define SO_PEERSEC 31
#define __FLT64X_MANT_DIG__ 113
#define _LINUX_TYPES_H 
#define SOL_DECNET 261
#define PRIu8 "u"
#define __SIZEOF_WINT_T__ 4
#define PRIxLEAST8 "x"
#define HeapTupleHeaderXminInvalid(tup) ( ((tup)->t_infomask & (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)) == HEAP_XMIN_INVALID )
#define HAVE_SYS_SHM_H 1
#define ENOTNAM 118
#define FIN_CRC32C(crc) ((crc) ^= 0xFFFFFFFF)
#define __ARM_FEATURE_UNALIGNED 1
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define __U16_TYPE unsigned short int
#define CLD_EXITED CLD_EXITED
#define _STDIO_H 1
#define FIELDNO_EXPRCONTEXT_CASEDATUM 10
#define INVALID_TASK_ID 0
#define PG_NDISTINCTOID 3361
#define SORTSUPPORT_H 
#define PRIx8 "x"
#define COMPRESSION_LEVEL_MIN 1
#define _PTRDIFF_T 
#define DN_MULTISHOT 0x80000000
#define HeapTupleHeaderSetMatch(tup) ( (tup)->t_infomask2 |= HEAP_TUPLE_HAS_MATCH )
#define ItemIdSetUnused(itemId) ( (itemId)->lp_flags = LP_UNUSED, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define VARDATA_COMPRESSED_GET_COMPRESS_METHOD(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_tcinfo >> VARLENA_EXTSIZE_BITS)
#define LOCALLOCK_LOCKMETHOD(llock) ((llock).tag.lock.locktag_lockmethodid)
#define PG_GETARG_NAME(n) DatumGetName(PG_GETARG_DATUM(n))
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define __FLT128_HAS_INFINITY__ 1
#define PG_DIAG_MESSAGE_PRIMARY 'M'
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define MultiXactMemberSLRULock (&MainLWLockArray[15].lock)
#define F_GETOWN __F_GETOWN
#define PG_GET_COLLATION() (fcinfo->fncollation)
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define HAVE_UNISTD_H 1
#define PG_GET_OPCLASS_OPTIONS() get_fn_opclass_options(fcinfo->flinfo)
#define alloca(size) __builtin_alloca (size)
#define LWLOCK_PADDED_SIZE PG_CACHE_LINE_SIZE
#define ERRCODE_INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION MAKE_SQLSTATE('2','2','0','1','G')
#define IPV6_2292RTHDR 5
#define ISCOMPLEX(typeid) (typeOrDomainTypeRelid(typeid) != InvalidOid)
#define PROC_IN_SAFE_IC 0x04
#define PF_IRDA 23
#define TYPCATEGORY_PSEUDOTYPE 'P'
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define ReplicationOriginLock (&MainLWLockArray[40].lock)
#define _DIRENT_HAVE_D_OFF 
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define INT_LEAST32_WIDTH 32
#define IPV6_RECVHOPLIMIT 51
#define __FLT64X_HAS_QUIET_NAN__ 1
#define HIGHBIT (0x80)
#define ADJ_TIMECONST 0x0020
#define GROUPING_CAN_USE_SORT 0x0001
#define dlist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), (type *) dlist_head_element_off(lhead, offsetof(type, membername)))
#define COLUMNAR_METADATA_H 
#define IPV6_RECVTCLASS 66
#define _BITS_SIGNUM_ARCH_H 1
#define O_RSYNC O_SYNC
#define WARNING_CLIENT_ONLY 20
#define LOCKOPTIONS_H 
#define PageSetAllVisible(page) (((PageHeader) (page))->pd_flags |= PD_ALL_VISIBLE)
#define EXPANDEDDATUM_H 
#define HeapTupleHeaderSetTypeId(tup,typeid) ( (tup)->t_choice.t_datum.datum_typeid = (typeid) )
#define __key_t_defined 
#define USE_DSM_MMAP 
#define pg_memory_barrier() pg_memory_barrier_impl()
#define ERRCODE_UNDEFINED_PARAMETER MAKE_SQLSTATE('4','2','P','0','2')
#define SO_RCVLOWAT 18
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define WORKER_MANAGER_H 
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define ERRCODE_SQL_JSON_MEMBER_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','A')
#define __SIGEV_MAX_SIZE 64
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x) != 0, 0)
#define AssertArg(condition) ((void)true)
#define __HAVE_FLOAT32X 1
#define InvalidStrategy ((StrategyNumber) 0)
#define FIELDNO_HEAPTUPLEHEADERDATA_BITS 5
#define __FLT_EVAL_METHOD_C99__ 0
#define _POSIX_JOB_CONTROL 1
#define RelCacheInitLock (&MainLWLockArray[16].lock)
#define Anum_pg_type_typreceive 18
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __LDBL_MAX_EXP__ 16384
#define st_ctime st_ctim.tv_sec
#define DECLARE_TOAST(name,toastoid,indexoid) extern int no_such_variable
#define NUM_PREDICATELOCK_PARTITIONS (1 << LOG2_NUM_PREDICATELOCK_PARTITIONS)
#define ERRCODE_CANT_CHANGE_RUNTIME_PARAM MAKE_SQLSTATE('5','5','P','0','2')
#define EOF (-1)
#define TUPTABLE_H 
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define ESCAPE_STRING_SYNTAX 'E'
#define RTKNNSearchStrategyNumber 15
#define __FLT64_MIN_EXP__ (-1021)
#define ERRCODE_SQL_JSON_SCALAR_REQUIRED MAKE_SQLSTATE('2','2','0','3','F')
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PROCSIGNAL_H 
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define LC_COLLATE __LC_COLLATE
#define XLogRecGetDataLen(decoder) ((decoder)->main_data_len)
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define SHMEM_INDEX_KEYSIZE (48)
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define __FDS_BITS(set) ((set)->fds_bits)
#define XLogRecPtrIsInvalid(r) ((r) == InvalidXLogRecPtr)
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define EvalPlanQualSetSlot(epqstate,slot) ((epqstate)->origslot = (slot))
#define __FLT16_MIN_10_EXP__ (-4)
#define __UINT16_MAX__ 0xffff
#define HeapTupleHeaderGetDatumLength(tup) VARSIZE(tup)
#define PRIX64 __PRI64_PREFIX "X"
#define EIDRM 43
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define _PC_NAME_MAX _PC_NAME_MAX
#define HAVE_STRUCT_TM_TM_ZONE 1
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define VARATT_CAN_MAKE_SHORT(PTR) (VARATT_IS_4B_U(PTR) && (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT) <= VARATT_SHORT_MAX)
#define ADJ_NANO 0x2000
#define HEAP_XMAX_KEYSHR_LOCK 0x0010
#define COLUMNAR_VERSION_MINOR 0
#define RelationSetTargetBlock(relation,targblock) do { RelationOpenSmgr(relation); (relation)->rd_smgr->smgr_targblock = (targblock); } while (0)
#define MaxLockTupleMode LockTupleExclusive
#define SizeofHeapTupleHeader offsetof(HeapTupleHeaderData, t_bits)
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ERRCODE_INTERNAL_ERROR MAKE_SQLSTATE('X','X','0','0','0')
#define INDEX_AM_HANDLEROID 325
#define ACL_ALL_RIGHTS_STR "arwdDxtXUCTc"
#define RelationRelationId 1259
#define NUMRANGEOID 3906
#define __siginfo_t_defined 1
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define SIGEV_THREAD SIGEV_THREAD
#define IPV6_2292PKTINFO 2
#define PROCLIST_TYPES_H 
#define AF_IUCV PF_IUCV
#define __UINT64_C(c) c ## UL
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __kernel_old_uid_t __kernel_old_uid_t
#define Anum_pg_proc_proconfig 29
#define isprint(c) __isctype((c), _ISprint)
#define SET_VARSIZE_4B_C(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2) | 0x02)
#define ERRCODE_INVALID_XML_PROCESSING_INSTRUCTION MAKE_SQLSTATE('2','2','0','0','T')
#define ILL_BADSTK ILL_BADSTK
#define RELPATH_H 
#define Anum_pg_dist_partition_colocationid 4
#define FIELDNO_AGGSTATE_CURRENT_SET 20
#define _STDC_PREDEF_H 1
#define ESLEMIN ( 402 )
#define PRIXLEAST32 "X"
#define PERFORM_DELETION_SKIP_EXTENSIONS 0x0010
#define RELSCAN_H 
#define ERRCODE_TO_CATEGORY(ec) ((ec) & ((1 << 12) - 1))
#define PROKIND_FUNCTION 'f'
#define PGDLLEXPORT 
#define DEFAULT_SPINS_PER_DELAY 100
#define PARTITION_STRATEGY_HASH 'h'
#define HAVE_GCC__SYNC_INT32_CAS 1
#define SOCK_DGRAM SOCK_DGRAM
#define CommitTsSLRULock (&MainLWLockArray[38].lock)
#define DN_RENAME 0x00000010
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define ERRCODE_INDEX_CORRUPTED MAKE_SQLSTATE('X','X','0','0','2')
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define FKCONSTR_ACTION_CASCADE 'c'
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define MSG_CONFIRM MSG_CONFIRM
#define PF_FILE PF_LOCAL
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define PRIXLEAST64 __PRI64_PREFIX "X"
#define TransactionIdEquals(id1,id2) ((id1) == (id2))
#define Anum_pg_publication_pubowner 3
#define BACKUP_LABEL_OLD "backup_label.old"
#define HAVE_STDIO_H 1
#define SIGBUS 7
#define CITUS_LOG_LEVEL_OFF 0
#define PARTDEFS_H 
#define ENOBUFS 105
#define ControlFileLock (&MainLWLockArray[9].lock)
#define _POSIX_STREAM_MAX 8
#define REPLICATION_MODEL_INVALID 'i'
#define IPV6_MULTICAST_HOPS 18
#define ACL_ALL_RIGHTS_TYPE (ACL_USAGE)
#define INTALIGN(LEN) TYPEALIGN(ALIGNOF_INT, (LEN))
#define isupper_l(c,l) __isupper_l ((c), (l))
#define COLUMNAR_VERSION_MAJOR 2
#define HAVE_LIBPAM 1
#define ACL_EXECUTE (1<<7)
#define MaxAllocSize ((Size) 0x3fffffff)
#define USE_POSIX_FADVISE 
#define _POSIX_TRACE_INHERIT -1
#define __stub_gtty 
#define ACL_ALL_RIGHTS_RELATION (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_DELETE|ACL_TRUNCATE|ACL_REFERENCES|ACL_TRIGGER)
#define si_utime _sifields._sigchld.si_utime
#define ItemIdGetLength(itemId) ((itemId)->lp_len)
#define MSG_BATCH MSG_BATCH
#define LC_PAPER __LC_PAPER
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define STRATNUM_H 
#define FFSYNC O_FSYNC
#define __FLT64X_DIG__ 33
#define __wur __attribute_warn_unused_result__
#define ERRCODE_TRIGGERED_DATA_CHANGE_VIOLATION MAKE_SQLSTATE('2','7','0','0','0')
#define __FLT16_DIG__ 3
#define PageGetContents(page) ((char *) (page) + MAXALIGN(SizeOfPageHeaderData))
#define SET_LOCKTAG_ADVISORY(locktag,id1,id2,id3,id4) ((locktag).locktag_field1 = (id1), (locktag).locktag_field2 = (id2), (locktag).locktag_field3 = (id3), (locktag).locktag_field4 = (id4), (locktag).locktag_type = LOCKTAG_ADVISORY, (locktag).locktag_lockmethodid = USER_LOCKMETHOD)
#define SYNC_METHOD_FSYNC_WRITETHROUGH 3
#define RegProcedureIsValid(p) OidIsValid(p)
#define VARATT_IS_EXTERNAL_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SIG_UNBLOCK 1
#define PARSENODES_H 
#define PRIdFAST16 __PRIPTR_PREFIX "d"
#define IN_CLASSB_MAX 65536
#define Int8GetDatum(X) ((Datum) (X))
#define PG_PROC_H 
#define TIMESTAMP_IS_NOEND(j) ((j) == DT_NOEND)
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define _ISOC95_SOURCE 1
#define FullTransactionIdEquals(a,b) ((a).value == (b).value)
#define EL2HLT 51
#define __ARM_64BIT_STATE 1
#define SIZEOF_OFF_T 8
#define MAXPGPATH 1024
#define GetPerTupleExprContext(estate) ((estate)->es_per_tuple_exprcontext ? (estate)->es_per_tuple_exprcontext : MakePerTupleExprContext(estate))
#define BYTE_ORDER __BYTE_ORDER
#define s6_addr __in6_u.__u6_addr8
#define CITUS_DEPARSER_H 
#define CLOCK_MONOTONIC_COARSE 6
#define PageGetSpecialSize(page) ((uint16) (PageGetPageSize(page) - ((PageHeader)(page))->pd_special))
#define __SIZEOF_INT128__ 16
#define VARSIZE_ANY_EXHDR(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR)-VARHDRSZ_EXTERNAL : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR)-VARHDRSZ_SHORT : VARSIZE_4B(PTR)-VARHDRSZ))
#define _BITS_TYPESIZES_H 1
#define ILL_COPROC ILL_COPROC
#define IPV6_HOPLIMIT 52
#define RELCACHE_INIT_FILENAME "pg_internal.init"
#define WSTOPSIG(status) __WSTOPSIG (status)
#define ereport_domain(elevel,domain,...) do { pg_prevent_errno_in_scope(); if (__builtin_constant_p(elevel) && (elevel) >= ERROR ? errstart_cold(elevel, domain) : errstart(elevel, domain)) __VA_ARGS__, errfinish(__FILE__, __LINE__, PG_FUNCNAME_MACRO); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define ADJ_OFFSET 0x0001
#define ESLEMAX ( 403 )
#define ERRCODE_INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','3')
#define RAND_MAX 2147483647
#define __FLT64X_HAS_INFINITY__ 1
#define GENBKI_H 
#define SS_ONSTACK SS_ONSTACK
#define PageXLogRecPtrGet(val) ((uint64) (val).xlogid << 32 | (val).xrecoff)
#define IndexTupleHasNulls(itup) ((((IndexTuple) (itup))->t_info & INDEX_NULL_MASK))
#define __need___va_list 
#define _SC_PIPE _SC_PIPE
#define UINT16_WIDTH 16
#define __INT16_MAX__ 0x7fff
#define __THROWNL __attribute__ ((__nothrow__))
#define TYPCATEGORY_UNKNOWN 'X'
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define SHARD_NAME_SEPARATOR '_'
#define XidFromFullTransactionId(x) ((uint32) (x).value)
#define SLAB_DEFAULT_BLOCK_SIZE (8 * 1024)
#define Anum_pg_index_indrelid 2
#define _POSIX_QLIMIT 1
#define BTGreaterStrategyNumber 5
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define SOL_NETBEUI 267
#define COMMAND_OK_IN_PARALLEL_MODE 0x0002
#define LC_NUMERIC __LC_NUMERIC
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define AF_MPLS PF_MPLS
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define SyncScanLock (&MainLWLockArray[24].lock)
#define NOTICE 18
#define IPV6_PMTUDISC_DO 2
#define STA_MODE 0x4000
#define __F_GETOWN_EX 16
#define SpecTokenOffsetNumber 0xfffe
#define RelFileNodeBackendEquals(node1,node2) ((node1).node.relNode == (node2).node.relNode && (node1).node.dbNode == (node2).node.dbNode && (node1).backend == (node2).backend && (node1).node.spcNode == (node2).node.spcNode)
#define Anum_pg_sequence_seqincrement 4
#define Anum_pg_class_relnamespace 3
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define TEXTDOMAIN NULL
#define OUTER_VAR 65001
#define ADJ_OFFSET_SS_READ 0xa001
#define dlist_reverse_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->prev ? (iter).end->prev : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->prev)
#define RINFO_IS_PUSHED_DOWN(rinfo,joinrelids) ((rinfo)->is_pushed_down || !bms_is_subset((rinfo)->required_relids, joinrelids))
#define SOL_IRDA 266
#define MAXDIM 6
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define HeapTupleHeaderGetNatts(tup) ((tup)->t_infomask2 & HEAP_NATTS_MASK)
#define FuncnameGetCandidates_compat(a,b,c,d,e,f,g) FuncnameGetCandidates(a, b, c, d, e, f, g)
#define CUSTOMPATH_SUPPORT_MARK_RESTORE 0x0002
#define USE_REPL_SNPRINTF 1
#define SO_ERROR 4
#define _POSIX_C_SOURCE 200809L
#define list_make2_int(x1,x2) list_make2_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2))
#define InvalidOffsetNumber ((OffsetNumber) 0)
#define MultiXactOffsetSLRULock (&MainLWLockArray[14].lock)
#define VARATT_CONVERTED_SHORT_SIZE(PTR) (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT)
#define vprintf pg_vprintf
#define ACL_ID_PUBLIC 0
#define SO_SNDBUFFORCE 32
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define LATCH_H 
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define INTERVALARRAYOID 1187
#define HAVE_DECL_STRTOULL 1
#define OffsetToPointer(base,offset) ((void *)((char *) base + offset))
#define TRANSACTION_STATUS_SUB_COMMITTED 0x03
#define SIGCONT 18
#define XACT_COMPLETION_APPLY_FEEDBACK (1U << 29)
#define TYPTYPE_COMPOSITE 'c'
#define ERRCODE_OUT_OF_MEMORY MAKE_SQLSTATE('5','3','2','0','0')
#define __blksize_t_defined 
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define _PATH_SERVICES "/etc/services"
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define ERRCODE_PLPGSQL_ERROR MAKE_SQLSTATE('P','0','0','0','0')
#define HAVE_UNSETENV 1
#define _LFS64_LARGEFILE 1
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define CURSOR_OPT_FAST_PLAN 0x0100
#define _LFS64_ASYNCHRONOUS_IO 1
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define FALLOC_FL_KEEP_SIZE 0x01
#define ObjectIdGetDatum(X) ((Datum) (X))
#define LOCK_WRITE 128
#define STATUS_ERROR (-1)
#define RelationOpenSmgr(relation) do { if ((relation)->rd_smgr == NULL) smgrsetowner(&((relation)->rd_smgr), smgropen((relation)->rd_node, (relation)->rd_backend)); } while (0)
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define Assert(condition) ((void)true)
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define SO_DETACH_FILTER 27
#define parse_analyze_varparams_compat(a,b,c,d,e) parse_analyze_varparams(a, b, c, d)
#define LOCK_MAND 32
#define INT8_C(c) c
#define INT8_H 
#define strerror pg_strerror
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define S_IFDIR __S_IFDIR
#define EBUSY 16
#define __UWORD_TYPE unsigned long int
#define DSM_H 
#define F_OFD_SETLK 37
#define _BITS_TYPES_H 1
#define TRAP_UNK TRAP_UNK
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define PVC_INCLUDE_AGGREGATES 0x0001
#define SAFE_STR_MIN_NUMBERS ( 1 )
#define NI_NUMERICSERV 2
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define STA_FLL 0x0008
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define ERRCODE_FDW_INVALID_HANDLE MAKE_SQLSTATE('H','V','0','0','B')
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define MSG_OOB MSG_OOB
#define SHRT_MAX __SHRT_MAX__
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define TYPCATEGORY_ARRAY 'A'
#define SET_LOCKTAG_VIRTUALTRANSACTION(locktag,vxid) ((locktag).locktag_field1 = (vxid).backendId, (locktag).locktag_field2 = (vxid).localTransactionId, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_VIRTUALTRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define TYPCATEGORY_ENUM 'E'
#define DELAY_CHKPT_COMPLETE (1<<1)
#define ERRCODE_INVALID_SCHEMA_DEFINITION MAKE_SQLSTATE('4','2','P','1','5')
#define __FLT64_DIG__ 15
#define EROFS 30
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define AttributeNumberIsValid(attributeNumber) ((bool) ((attributeNumber) != InvalidAttrNumber))
#define HAVE_IPV6 1
#define BKI_ROWTYPE_OID(oid,oidmacro) 
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define METADATA_CACHE_H 
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define PG_DYNSHMEM_MMAP_FILE_PREFIX "mmap."
#define SO_BUSY_POLL_BUDGET 70
#define ESUNTERM ( 407 )
#define __glibc_c99_flexarr_available 1
#define __WCHAR_T__ 
#define HAVE_LDAP_H 1
#define InvalidOid ((Oid) 0)
#define CHECKPOINT_END_OF_RECOVERY 0x0002
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define XLogHintBitIsNeeded() (DataChecksumsEnabled() || wal_log_hints)
#define NI_DGRAM 16
#define PRIxFAST16 __PRIPTR_PREFIX "x"
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define TRAP_BRANCH TRAP_BRANCH
#define PG_RETURN_TIMESTAMPTZ(x) return TimestampTzGetDatum(x)
#define PRIxFAST32 __PRIPTR_PREFIX "x"
#define list_make5_oid(x1,x2,x3,x4,x5) list_make5_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3), list_make_oid_cell(x4), list_make_oid_cell(x5))
#define __ss_aligntype unsigned long int
#define Anum_pg_attribute_attmissingval 26
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define Anum_pg_proc_prolang 5
#define PF_INET6 10
#define SI_MESGQ SI_MESGQ
#define DSM_IMPL_MMAP 4
#define _VA_LIST_DEFINED 
#define STRIPE_ROW_COUNT_MAXIMUM 10000000
#define FIELDNO_TUPLETABLESLOT_VALUES 5
#define si_fd _sifields._sigpoll.si_fd
#define __BLKSIZE_T_TYPE __S32_TYPE
#define AF_IRDA PF_IRDA
#define FKCONSTR_ACTION_NOACTION 'a'
#define __INT_LEAST16_MAX__ 0x7fff
#define SCM_SRCRT IPV6_RXSRCRT
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define PG_PUBLICATION_H 
#define UINT64_WIDTH 64
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define XLogRecHasBlockImage(decoder,block_id) ((decoder)->blocks[block_id].has_image)
#define HAVE__BOOL 1
#define REDISTRIBUTE_BY_HASH 'x'
#define __SIG_ATOMIC_WIDTH__ 32
#define si_stime _sifields._sigchld.si_stime
#define PRIxFAST64 __PRI64_PREFIX "x"
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define __INT_LEAST64_TYPE__ long int
#define CSTRINGOID 2275
#define PRIiLEAST16 "i"
#define Anum_pg_class_relispartition 27
#define DT_UNKNOWN DT_UNKNOWN
#define ADJ_SETOFFSET 0x0100
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define PRS2_NEW_VARNO 2
#define RTAboveStrategyNumber 11
#define PageGetItem(page,itemId) ( AssertMacro(PageIsValid(page)), AssertMacro(ItemIdHasStorage(itemId)), (Item)(((char *)(page)) + ItemIdGetOffset(itemId)) )
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define SOL_DCCP 269
#define AI_IDN 0x0040
#define EXECUTOR_H 
#define ntohl(x) __bswap_32 (x)
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define ntohs(x) __bswap_16 (x)
#define PG_HAVE_ATOMIC_INIT_U32 
#define DATERANGEARRAYOID 3913
#define INTERNALOID 2281
#define LAST_OCLASS OCLASS_TRANSFORM
#define SCNdMAX __PRI64_PREFIX "d"
#define IS_HIGHBIT_SET(ch) ((unsigned char)(ch) & HIGHBIT)
#define HAVE_DECL_STRLCAT 0
#define pg_prevpower2_size_t(num) pg_prevpower2_64(num)
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define PROPARALLEL_RESTRICTED 'r'
#define TIDBITMAP_H 
#define FPE_FLTINV FPE_FLTINV
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define PG_PROC_D_H 
#define AccessExclusiveLock 8
#define HeapTupleSetHeapOnly(tuple) HeapTupleHeaderSetHeapOnly((tuple)->t_data)
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define ERRCODE_IDLE_IN_TRANSACTION_SESSION_TIMEOUT MAKE_SQLSTATE('2','5','P','0','3')
#define HAVE__BUILTIN_FRAME_ADDRESS 1
#define ERRCODE_E_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','4')
#define IsPolymorphicTypeFamily1(typid) ((typid) == ANYELEMENTOID || (typid) == ANYARRAYOID || (typid) == ANYNONARRAYOID || (typid) == ANYENUMOID || (typid) == ANYRANGEOID || (typid) == ANYMULTIRANGEOID)
#define IsPolymorphicTypeFamily2(typid) ((typid) == ANYCOMPATIBLEOID || (typid) == ANYCOMPATIBLEARRAYOID || (typid) == ANYCOMPATIBLENONARRAYOID || (typid) == ANYCOMPATIBLERANGEOID || (typid) == ANYCOMPATIBLEMULTIRANGEOID)
#define __FLT32_MIN_10_EXP__ (-37)
#define DEFAULT_LOCKMETHOD 1
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define HEAP_MOVED (HEAP_MOVED_OFF | HEAP_MOVED_IN)
#define ERRCODE_STRING_DATA_LENGTH_MISMATCH MAKE_SQLSTATE('2','2','0','2','6')
#define ERRCODE_NAME_TOO_LONG MAKE_SQLSTATE('4','2','6','2','2')
#define ERRCODE_TOO_MANY_JSON_OBJECT_MEMBERS MAKE_SQLSTATE('2','2','0','3','E')
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define MEMUTILS_H 
#define HAVE_LANGINFO_H 1
#define XLOG_INCLUDE_ORIGIN 0x01
#define pairingheap_is_singular(h) ((h)->ph_root && (h)->ph_root->first_child == NULL)
#define ENAMETOOLONG 36
#define ERRCODE_DEPENDENT_OBJECTS_STILL_EXIST MAKE_SQLSTATE('2','B','P','0','1')
#define ERRCODE_FDW_OUT_OF_MEMORY MAKE_SQLSTATE('H','V','0','0','1')
#define EFBIG 27
#define ACL_UPDATE (1<<2)
#define __DBL_HAS_QUIET_NAN__ 1
#define BOOL_WIDTH 1
#define TYPALIGN_SHORT 's'
#define PARSE_FUNC_H 
#define INVALID_SHARD_INDEX -1
#define BPCHARARRAYOID 1014
#define MinSizeOfXactAssignment offsetof(xl_xact_assignment, xsub)
#define ERRCODE_INTERVAL_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','1','5')
#define AF_VSOCK PF_VSOCK
#define UINT_WIDTH 32
#define ARR_DIMS(a) ((int *) (((char *) (a)) + sizeof(ArrayType)))
#define RTGreaterStrategyNumber 22
#define SHARD_TABLE_SIZE_QUERY "SELECT pg_table_size(%s)"
#define InstrCountFiltered1(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered1 += (delta); } while(0)
#define VARDATA_COMPRESSED_GET_EXTSIZE(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_tcinfo & VARLENA_EXTSIZE_MASK)
#define __WCHAR_TYPE__ unsigned int
#define __SIZEOF_FLOAT__ 4
#define HeapTupleIsValid(tuple) PointerIsValid(tuple)
#define IS_OUTER_JOIN(jointype) (((1 << (jointype)) & ((1 << JOIN_LEFT) | (1 << JOIN_FULL) | (1 << JOIN_RIGHT) | (1 << JOIN_ANTI))) != 0)
#define GUC_NOT_IN_SAMPLE 0x0020
#define IP_RECVTTL 12
#define __pic__ 2
#define XLOG_XACT_ABORT_PREPARED 0x40
#define MaxOffsetNumber ((OffsetNumber) (BLCKSZ / sizeof(ItemIdData)))
#define __ARM_ARCH_8A 1
#define ERRCODE_LOCK_NOT_AVAILABLE MAKE_SQLSTATE('5','5','P','0','3')
#define HAVE_INT128 1
#define SCNxPTR __PRIPTR_PREFIX "x"
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define __AARCH64_CMODEL_SMALL__ 1
#define list_make_oid_cell(v) ((ListCell) {.oid_value = (v)})
#define GUC_UNIT_BYTE 0x8000
#define __FLT32_DECIMAL_DIG__ 9
#define __O_DIRECT 0200000
#define __USE_POSIX 1
#define PG_CRC32C_H 
#define PF_NFC 39
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define RelationIsValid(relation) PointerIsValid(relation)
#define HAVE_GETIFADDRS 1
#define HAVE_RANDOM 1
#define PAI_OVERWRITE (1 << 0)
#define COLUMNAR_MODULE_NAME "citus_columnar"
#define BUFSIZ 8192
#define DatumGetCString(X) ((char *) DatumGetPointer(X))
#define isdigit(c) __isctype((c), _ISdigit)
#define __FLT_MAX_10_EXP__ 38
#define UINT_LEAST16_WIDTH 16
#define ERRCODE_WRONG_OBJECT_TYPE MAKE_SQLSTATE('4','2','8','0','9')
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define MULTI_LOGICAL_PLANNER_H 
#define XACT_FLAGS_ACCESSEDTEMPNAMESPACE (1U << 0)
#define ELIBSCN 81
#define ShmemIndexLock (&MainLWLockArray[1].lock)
#define EXEC_FLAG_REWIND 0x0002
#define AF_ALG PF_ALG
#define for_each_from(cell,lst,N) for (ForEachState cell ##__state = for_each_from_setup(lst, N); (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define _SC_2_PBS _SC_2_PBS
#define AF_QIPCRTR PF_QIPCRTR
#define INT_FAST32_WIDTH __WORDSIZE
#define IPV6_ADDR_PREFERENCES 72
#define dsa_allocate(area,size) dsa_allocate_extended(area, size, 0)
#define MONEYOID 790
#define __LC_COLLATE 3
#define DatumGetBpCharPCopy(X) ((BpChar *) PG_DETOAST_DATUM_COPY(X))
#define WL_TIMEOUT (1 << 3)
#define RTEqualStrategyNumber 18
#define __S16_TYPE short int
#define HAVE_DECL_STRLCPY 0
#define ADJ_TICK 0x4000
#define IndexRelationId 2610
#define BKI_SHARED_RELATION 
#define __TIMESIZE 64
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define BKI_SCHEMA_MACRO 
#define fprintf pg_fprintf
#define ALLOCSET_SEPARATE_THRESHOLD 8192
#define DECLARE_FOREIGN_KEY_OPT(cols,reftbl,refcols) extern int no_such_variable
#define InvalidFullTransactionId FullTransactionIdFromEpochAndXid(0, InvalidTransactionId)
#define SIGCLD SIGCHLD
#define CMD_MERGE CMD_UNKNOWN
#define __FLT16_HAS_QUIET_NAN__ 1
#define BackendIdForTempRelations() (ParallelLeaderBackendId == InvalidBackendId ? MyBackendId : ParallelLeaderBackendId)
#define ERRCODE_FDW_INVALID_DATA_TYPE_DESCRIPTORS MAKE_SQLSTATE('H','V','0','0','6')
#define HASH_COMPARE 0x0080
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define __gid_t_defined 
#define LC_MESSAGES __LC_MESSAGES
#define __ASM_SVE_CONTEXT_H 
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define _POSIX2_EXPR_NEST_MAX 32
#define FIELDNO_MINIMALTUPLETABLESLOT_TUPLE 1
#define TRY_AGAIN 2
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define PublicationNameIndexId 6111
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define Anum_pg_collation_collname 2
#define __clock_t_defined 1
#define TSVECTOROID 3614
#define linitial_int(l) lfirst_int(list_nth_cell(l, 0))
#define __GLIBC_MINOR__ 35
#define Anum_pg_dist_partition_repmodel 5
#define __UINT_LEAST32_TYPE__ unsigned int
#define _XBS5_ILP32_OFFBIG -1
#define AF_ASH PF_ASH
#define IPPROTO_GRE IPPROTO_GRE
#define VARATT_EXTERNAL_IS_COMPRESSED(toast_pointer) (VARATT_EXTERNAL_GET_EXTSIZE(toast_pointer) < (toast_pointer).va_rawsize - VARHDRSZ)
#define DOUBLEALIGN(LEN) TYPEALIGN(ALIGNOF_DOUBLE, (LEN))
#define __LDBL_MIN_EXP__ (-16381)
#define XLOG_XACT_ABORT 0x20
#define VARTAG_EXTERNAL(PTR) VARTAG_1B_E(PTR)
#define lsecond_int(l) lfirst_int(list_nth_cell(l, 1))
#define ProcedureOidIndexId 2690
#define _POSIX_MAX_CANON 255
#define USE_SYSV_SHARED_MEMORY 1
#define ERRCODE_ESCAPE_CHARACTER_CONFLICT MAKE_SQLSTATE('2','2','0','0','B')
#define IPV6_RECVPKTINFO 49
#define PG_FINALLY() } else _do_rethrow = true; { PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack
#define stdout stdout
#define NL_SETMAX INT_MAX
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define REGTYPEARRAYOID 2211
#define PG_GETARG_VARCHAR_P(n) DatumGetVarCharP(PG_GETARG_DATUM(n))
#define Anum_pg_type_typanalyze 22
#define INTPTR_WIDTH __WORDSIZE
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define DatumGetTextPCopy(X) ((text *) PG_DETOAST_DATUM_COPY(X))
#define __INT_LEAST8_MAX__ 0x7f
#define __FLT32X_MAX_10_EXP__ 308
#define ____mbstate_t_defined 1
#define ADJ_STATUS 0x0010
#define SO_ATTACH_REUSEPORT_EBPF 52
#define PG_UINT64_MAX UINT64CONST(0xFFFFFFFFFFFFFFFF)
#define O_RDONLY 00
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define SO_RCVBUFFORCE 33
#define ECONNREFUSED 111
#define ERRCODE_INVALID_ARGUMENT_FOR_POWER_FUNCTION MAKE_SQLSTATE('2','2','0','1','F')
#define SCNu64 __PRI64_PREFIX "u"
#define _BITS_SIGNUM_GENERIC_H 1
#define __ASM_POSIX_TYPES_H 
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define ANYNONARRAYOID 2776
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define InvalidCommandId (~(CommandId)0)
#define Anum_pg_proc_provariadic 8
#define _SIZET_ 
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define _LP64 1
#define PG_RETURN_VARCHAR_P(x) PG_RETURN_POINTER(x)
#define MAXALIGN(LEN) TYPEALIGN(MAXIMUM_ALIGNOF, (LEN))
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE IPPROTO_NONE
#define __S_IFSOCK 0140000
#define __stub_stty 
#define standard_ProcessUtility_compat(a,b,c,d,e,f,g,h) standard_ProcessUtility(a, b, c, d, e, f, g, h)
#define list_make3_oid(x1,x2,x3) list_make3_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3))
#define __ASM_GENERIC_SOCKIOS_H 
#define TSTZRANGEARRAYOID 3911
#define HAVE_STRUCT_SOCKADDR_UN 1
#define EAI_ADDRFAMILY -9
#define FirstCommandId ((CommandId) 0)
#define POLYGONARRAYOID 1027
#define _SC_IOV_MAX _SC_IOV_MAX
#define _SC_PASS_MAX _SC_PASS_MAX
#define PG_RETURN_ARRAYTYPE_P(x) PG_RETURN_POINTER(x)
#define O_ASYNC 020000
#define __stub___compat_bdflush 
#define ALLOCSET_DEFAULT_INITSIZE (8 * 1024)
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define IS_UPPER_REL(rel) ((rel)->reloptkind == RELOPT_UPPER_REL || (rel)->reloptkind == RELOPT_OTHER_UPPER_REL)
#define O_TRUNC 01000
#define PG_RETURN_FLOAT4(x) return Float4GetDatum(x)
#define PVC_INCLUDE_WINDOWFUNCS 0x0004
#define OIDCHARS 10
#define LSEGARRAYOID 1018
#define PG_RE_THROW() pg_re_throw()
#define __PID_T_TYPE __S32_TYPE
#define CitusNodeTag(nodeptr) CitusNodeTagI((Node*) nodeptr)
#define HAVE_POLL 1
#define _SC_AIO_MAX _SC_AIO_MAX
#define ProcedureNameArgsNspIndexId 2691
#define ENOTCONN 107
#define IN_CLASSB_NET 0xffff0000
#define XLOG_BLCKSZ 8192
#define TIMESTAMPARRAYOID 1115
#define VARATT_SHORT_MAX 0x7F
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define INTERVAL_RANGE(t) (((t) >> 16) & INTERVAL_RANGE_MASK)
#define UINT_FAST8_WIDTH 8
#define _POSIX_UIO_MAXIOV 16
#define __DBL_MAX_10_EXP__ 308
#define P_tmpdir "/tmp"
#define HAVE_HISTORY_TRUNCATE_FILE 1
#define CITUS_TRUNCATE_TRIGGER_NAME "citus_truncate_trigger"
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _POSIX_MESSAGE_PASSING 200809L
#define __WORDSIZE_TIME64_COMPAT32 0
#define EPFNOSUPPORT 96
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define SO_PEERNAME 28
#define LP_REDIRECT 2
#define ItemPointerSetInvalid(pointer) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), InvalidBlockNumber), (pointer)->ip_posid = InvalidOffsetNumber )
#define _IO_ERR_SEEN 0x0020
#define linitial_node(type,l) castNode(type, linitial(l))
#define Anum_pg_proc_proleakproof 12
#define TypeRelationId 1247
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define FORMAT_COLLATE_ALLOW_INVALID 0x02
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define ACL_ALL_RIGHTS_FDW (ACL_USAGE)
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define SOCK_STREAM SOCK_STREAM
#define __BIG_ENDIAN 4321
#define store_att_byval(T,newdatum,attlen) do { switch (attlen) { case sizeof(char): *(char *) (T) = DatumGetChar(newdatum); break; case sizeof(int16): *(int16 *) (T) = DatumGetInt16(newdatum); break; case sizeof(int32): *(int32 *) (T) = DatumGetInt32(newdatum); break; case sizeof(Datum): *(Datum *) (T) = (newdatum); break; default: elog(ERROR, "unsupported byval length: %d", (int) (attlen)); break; } } while (0)
#define FullTransactionIdFollowsOrEquals(a,b) ((a).value >= (b).value)
#define BOOL_MAX 1
#define VARATT_IS_EXTERNAL_INDIRECT(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_INDIRECT)
#define ERRCODE_SNAPSHOT_TOO_OLD MAKE_SQLSTATE('7','2','0','0','0')
#define ACL_H 
#define PG_GETARG_BYTEA_P(n) DatumGetByteaP(PG_GETARG_DATUM(n))
#define PG_BINARY_A "a"
#define INT4OID 23
#define ERRCODE_UNDEFINED_DATABASE MAKE_SQLSTATE('3','D','0','0','0')
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __ORDER_BIG_ENDIAN__ 4321
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define IPV6_AUTOFLOWLABEL 70
#define ESZEROL ( 401 )
#define CHAR_WIDTH 8
#define __UINT32_C(c) c ## U
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define EAI_SYSTEM -11
#define LOG2_NUM_PREDICATELOCK_PARTITIONS 4
#define CANDIDATE_NODE_FIELDS 2
#define XACT_XINFO_HAS_GID (1U << 7)
#define SCNiMAX __PRI64_PREFIX "i"
#define PF_MPLS 28
#define _BITS_TIME64_H 1
#define forfour(cell1,list1,cell2,list2,cell3,list3,cell4,list4) for (ForFourState cell1 ##__state = {(list1), (list2), (list3), (list4), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), multi_for_advance_cell(cell4, cell1 ##__state, l4, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL && cell4 != NULL); cell1 ##__state.i++)
#define IP_NODEFRAG 22
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define ReplicationSlotControlLock (&MainLWLockArray[37].lock)
#define USE_DSM_POSIX 
#define HAVE_GETOPT_H 1
#define DN_MODIFY 0x00000002
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define TYPCATEGORY_COMPOSITE 'C'
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define lthird(l) lfirst(list_nth_cell(l, 2))
#define O_NOFOLLOW __O_NOFOLLOW
#define ERRCODE_MORE_THAN_ONE_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','4')
#define POLL_ERR POLL_ERR
#define F_SEAL_FUTURE_WRITE 0x0010
#define UInt8GetDatum(X) ((Datum) (X))
#define AF_CAIF PF_CAIF
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define ispunct(c) __isctype((c), _ISpunct)
#define HAVE_STRCHRNUL 1
#define __fsfilcnt_t_defined 
#define ERRCODE_S_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','4')
#define HAVE__BUILTIN_POPCOUNT 1
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define Anum_pg_proc_procost 6
#define ERRCODE_FDW_ERROR MAKE_SQLSTATE('H','V','0','0','0')
#define F_SET_FILE_RW_HINT 1038
#define PG_BINARY 0
#define HAVE_EXECINFO_H 1
#define SO_SNDLOWAT 19
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX_ASYNC_IO 1
#define HeapTupleHeaderSetXmax(tup,xid) ( (tup)->t_choice.t_heap.t_xmax = (xid) )
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define ERRCODE_CHARACTER_NOT_IN_REPERTOIRE MAKE_SQLSTATE('2','2','0','2','1')
#define __SIZEOF_DOUBLE__ 8
#define ACL_CREATE_TEMP (1<<10)
#define PG_GETARG_BOOL(n) DatumGetBool(PG_GETARG_DATUM(n))
#define RelationIsScannable(relation) ((relation)->rd_rel->relispopulated)
#define INVALID_PLACEMENT_ID 0
#define PG_LIST_H 
#define va_start(v,l) __builtin_va_start(v,l)
#define Anum_pg_attribute_attstattarget 4
#define EXTENSIBLE_H 
#define _BITS_POSIX1_LIM_H 1
#define Anum_pg_class_relminmxid 30
#define CIDOID 29
#define SO_GET_FILTER SO_ATTACH_FILTER
#define forthree(cell1,list1,cell2,list2,cell3,list3) for (ForThreeState cell1 ##__state = {(list1), (list2), (list3), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL); cell1 ##__state.i++)
#define ScanDirectionIsForward(direction) ((bool) ((direction) == ForwardScanDirection))
#define ERRCODE_FDW_OPTION_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','J')
#define unvolatize(underlying_type,expr) (StaticAssertExpr(__builtin_types_compatible_p(__typeof(expr), volatile underlying_type), "wrong cast"), (underlying_type) (expr))
#define _T_SIZE 
#define StoreInvalidTransactionId(dest) (*(dest) = InvalidTransactionId)
#define REPLICA_IDENTITY_INDEX 'i'
#define SO_MAX_PACING_RATE 47
#define __va_arg_pack() __builtin_va_arg_pack ()
#define DTTOIF(dirtype) ((dirtype) << 12)
#define __FLT32X_HAS_QUIET_NAN__ 1
#define va_end(v) __builtin_va_end(v)
#define ERRCODE_INVALID_TABLE_DEFINITION MAKE_SQLSTATE('4','2','P','1','6')
#define SVE_VL_MIN __SVE_VL_MIN
#define __INT_FAST16_WIDTH__ 64
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
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
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ATTRIBUTE_IDENTITY_BY_DEFAULT 'd'
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define Anum_pg_publication_pubupdate 6
#define ACL_MODECHG_ADD 1
#define SCNi32 "i"
#define _RWLOCK_INTERNAL_H 
#define RTLessEqualStrategyNumber 21
#define DSM_IMPL_POSIX 1
#define UINT16_MAX (65535)
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_MINHOPCOUNT 73
#define SO_ZEROCOPY 60
#define ACLITEM_GET_PRIVS(item) ((item).ai_privs & 0xFFFF)
#define __USE_XOPEN_EXTENDED 1
#define __ASM_BITSPERLONG_H 
#define GET_VXID_FROM_PGPROC(vxid,proc) ((vxid).backendId = (proc).backendId, (vxid).localTransactionId = (proc).lxid)
#define _POSIX_TRACE_LOG -1
#define HeapTupleHeaderSetXmin(tup,xid) ( (tup)->t_choice.t_heap.t_xmin = (xid) )
#define IPV6_FREEBIND 78
#define __ARM_ARCH_ISA_A64 1
#define MemSetLoop(start,val,len) do { long * _start = (long *) (start); long * _stop = (long *) ((char *) _start + (Size) (len)); while (_start < _stop) *_start++ = 0; } while (0)
#define TIMEZONE_GLOBAL timezone
#define SIG_IGN ((__sighandler_t) 1)
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define __STDC__ 1
#define strtoi64(str,endptr,base) ((int64) strtol(str, endptr, base))
#define ERRCODE_FDW_DYNAMIC_PARAMETER_VALUE_NEEDED MAKE_SQLSTATE('H','V','0','0','2')
#define PG_HAVE_ATOMIC_INIT_U64 
#define __FLT32X_DIG__ 15
#define EEXIST 17
#define __PTRDIFF_TYPE__ long int
#define IP_UNICAST_IF 50
#define F_SETLKW 7
#define DT_LNK DT_LNK
#define SLAB_LARGE_BLOCK_SIZE (8 * 1024 * 1024)
#define VARATT_NOT_PAD_BYTE(PTR) (*((uint8 *) (PTR)) != 0)
#define MINIMAL_TUPLE_DATA_OFFSET offsetof(MinimalTupleData, t_infomask2)
#define CATALOG_VERSION_NO 202107181
#define CURSOR_OPT_HOLD 0x0020
#define HEAP_KEYS_UPDATED 0x2000
#define EAI_BADFLAGS -1
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define EAI_SERVICE -8
#define Anum_pg_type_typtype 7
#define PageGetPageSize(page) ((Size) (((PageHeader) (page))->pd_pagesize_version & (uint16) 0xFF00))
#define MaxBlockNumber ((BlockNumber) 0xFFFFFFFE)
#define ERRCODE_OPERATOR_INTERVENTION MAKE_SQLSTATE('5','7','0','0','0')
#define __UINTPTR_TYPE__ long unsigned int
#define IS_DUMMY_APPEND(p) (IsA((p), AppendPath) && ((AppendPath *) (p))->subpaths == NIL)
#define O_PATH __O_PATH
#define __BITS_SOCKET_H 
#define Natts_pg_collation 10
#define _SC_SPAWN _SC_SPAWN
#define BLOCK_H 
#define Anum_pg_proc_proowner 4
#define Anum_pg_proc_prorows 7
#define ERRCODE_INVALID_INDICATOR_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','1','0')
#define list_make1_oid(x1) list_make1_impl(T_OidList, list_make_oid_cell(x1))
#define ELOG_H 
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
#define F_GETLK64 5
#define _POSIX_OPEN_MAX 20
#define isgraph(c) __isctype((c), _ISgraph)
#define ERRCODE_TRIM_ERROR MAKE_SQLSTATE('2','2','0','2','7')
#define __FLT128_DECIMAL_DIG__ 36
#define MemoryContextCopyAndSetIdentifier(cxt,id) MemoryContextSetIdentifier(cxt, MemoryContextStrdup(cxt, id))
#define list_make1(x1) list_make1_impl(T_List, list_make_ptr_cell(x1))
#define list_make2(x1,x2) list_make2_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2))
#define list_make3(x1,x2,x3) list_make3_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3))
#define list_make4(x1,x2,x3,x4) list_make4_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3), list_make_ptr_cell(x4))
#define list_make5(x1,x2,x3,x4,x5) list_make5_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3), list_make_ptr_cell(x4), list_make_ptr_cell(x5))
#define __FLT_DECIMAL_DIG__ 9
#define EOHPGetRWDatum(eohptr) PointerGetDatum((eohptr)->eoh_rw_ptr)
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define InvalidSubTransactionId ((SubTransactionId) 0)
#define ERRCODE_INVALID_SQL_JSON_SUBSCRIPT MAKE_SQLSTATE('2','2','0','3','3')
#define PATH_MAX 4096
#define PG_RETURN_VOID() return (Datum) 0
#define TYPALIGN_CHAR 'c'
#define Anum_pg_dist_partition_autoconverted 6
#define OPTION_NAME_CHUNK_ROW_COUNT "chunk_group_row_limit"
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _ASM_GENERIC_TYPES_H 
#define EOPNOTSUPP 95
#define JULIAN_MAXDAY (3)
#define TTS_IS_VIRTUAL(slot) ((slot)->tts_ops == &TTSOpsVirtual)
#define PG_DIAG_SEVERITY_NONLOCALIZED 'V'
#define IsPolymorphicType(typid) (IsPolymorphicTypeFamily1(typid) || IsPolymorphicTypeFamily2(typid))
#define att_isnull(ATT,BITS) (!((BITS)[(ATT) >> 3] & (1 << ((ATT) & 0x07))))
#define PG_DIAG_CONSTRAINT_NAME 'n'
#define PRIXFAST16 __PRIPTR_PREFIX "X"
#define BACKUP_LABEL_FILE "backup_label"
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
#define ATTSTATSSLOT_NUMBERS 0x02
#define AF_NETROM PF_NETROM
#define PG_GETARG_RAW_VARLENA_P(n) ((struct varlena *) PG_GETARG_POINTER(n))
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define IPV6_RTHDR_TYPE_0 0
#define _BITS_SIGEVENT_CONSTS_H 1
#define ____sigset_t_defined 
#define CollationRelationId 3456
#define HAS_TEST_AND_SET 
#define LONGALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_LONG, (LEN))
#define HeapTupleHeaderSetXminInvalid(tup) ( AssertMacro(!HeapTupleHeaderXminCommitted(tup)), ((tup)->t_infomask |= HEAP_XMIN_INVALID) )
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define PG_STRERROR_R_BUFLEN 256
#define AARR_DIMS(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.dims : ARR_DIMS((ArrayType *) (a)))
#define PG_PAGE_LAYOUT_VERSION 4
#define BKI_ARRAY_DEFAULT(value) 
#define ANYRANGEOID 3831
#define PG_INDEX_H 
#define ItemPointerCopy(fromPointer,toPointer) ( AssertMacro(PointerIsValid(toPointer)), AssertMacro(PointerIsValid(fromPointer)), *(toPointer) = *(fromPointer) )
#define PRIXLEAST16 "X"
#define VARATT_IS_EXTERNAL_ONDISK(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_ONDISK)
#define DECLARE_FOREIGN_KEY(cols,reftbl,refcols) extern int no_such_variable
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define _SETJMP_H 1
#define _SC_LINE_MAX _SC_LINE_MAX
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define _BITS_SETJMP_H 1
#define _POSIX_PRIORITIZED_IO 200809L
#define PG_INT32_MAX (0x7FFFFFFF)
#define __stub_fchflags 
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define HEAP_LOCKED_UPGRADED(infomask) ( ((infomask) & HEAP_XMAX_IS_MULTI) != 0 && ((infomask) & HEAP_XMAX_LOCK_ONLY) != 0 && (((infomask) & (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)) == 0) )
#define ERRCODE_NO_DATA MAKE_SQLSTATE('0','2','0','0','0')
#define ILL_ILLTRP ILL_ILLTRP
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __FSWORD_T_TYPE __SWORD_TYPE
#define IPV6_LEAVE_GROUP 21
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define PG_GETARG_BPCHAR_P_COPY(n) DatumGetBpCharPCopy(PG_GETARG_DATUM(n))
#define PG_DEPENDENCIESOID 3402
#define ERRCODE_DATATYPE_MISMATCH MAKE_SQLSTATE('4','2','8','0','4')
#define _STDDEF_H_ 
#define SCNo64 __PRI64_PREFIX "o"
#define ACCEPT_TYPE_RETURN int
#define INSTR_TIME_ACCUM_DIFF(x,y,z) do { (x).tv_sec += (y).tv_sec - (z).tv_sec; (x).tv_nsec += (y).tv_nsec - (z).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define _POSIX_CLOCK_SELECTION 200809L
#define COMMAND_IS_NOT_READ_ONLY 0
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define COMMAND_OK_IN_RECOVERY 0x0004
#define IPV6_PMTUDISC_INTERFACE 4
#define DELAYTIMER_MAX 2147483647
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define DT_WHT DT_WHT
#define TTS_IS_HEAPTUPLE(slot) ((slot)->tts_ops == &TTSOpsHeapTuple)
#define Anum_pg_class_relrewrite 28
#define XLOG_DEFS_H 
#define __sigset_t_defined 1
#define ESNOTFND ( 409 )
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK2 2
#define __FLT32_MIN_EXP__ (-125)
#define IsA(nodeptr,_type_) (nodeTag(nodeptr) == T_ ##_type_)
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define _WCHAR_H 1
#define MQ_PRIO_MAX 32768
#define BKPIMAGE_HAS_HOLE 0x01
#define Anum_pg_sequence_seqtypid 2
#define ERRCODE_TOO_MANY_ROWS MAKE_SQLSTATE('P','0','0','0','3')
#define PRIXLEAST8 "X"
#define IPV6_PATHMTU 61
#define UINT_LEAST32_WIDTH 32
#define ERRCODE_INVALID_TRANSACTION_INITIATION MAKE_SQLSTATE('0','B','0','0','0')
#define NUMMULTIRANGEOID 4532
#define SI_DETHREAD SI_DETHREAD
#define HeapTupleHeaderSetDatumLength(tup,len) SET_VARSIZE(tup, len)
#define iscntrl(c) __isctype((c), _IScntrl)
#define RelationCreateStorage_compat(a,b,c) RelationCreateStorage(a, b)
#define AssertTransactionIdInAllowableRange(xid) ((void)true)
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define XLR_INFO_MASK 0x0F
#define AF_IB PF_IB
#define ERRCODE_ARRAY_ELEMENT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define SO_NETNS_COOKIE 71
#define INT16_MAX (32767)
#define IPV6_NEXTHOP 9
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define AF_MCTP PF_MCTP
#define HAVE_PG_ATTRIBUTE_NORETURN 1
#define __S_IREAD 0400
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define RelationRelation_Rowtype_Id 83
#define fastgetattr(tup,attnum,tupleDesc,isnull) ( AssertMacro((attnum) > 0), (*(isnull) = false), HeapTupleNoNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup)->t_data + (tup)->t_data->t_hoff + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocachegetattr((tup), (attnum), (tupleDesc)) ) : ( att_isnull((attnum)-1, (tup)->t_data->t_bits) ? ( (*(isnull) = true), (Datum)NULL ) : ( nocachegetattr((tup), (attnum), (tupleDesc)) ) ) )
#define HEAP_NATTS_MASK 0x07FF
#define RMGR_H 
#define FRAMEOPTION_EXCLUDE_CURRENT_ROW 0x08000
#define WORKER_APPLY_SHARD_DDL_COMMAND_WITHOUT_SCHEMA "SELECT worker_apply_shard_ddl_command (" UINT64_FORMAT ", %s)"
#define F_GETOWN_EX __F_GETOWN_EX
#define PACKAGE_STRING "PostgreSQL 14.5"
#define Anum_pg_proc_prosupport 9
#define ERRCODE_DUPLICATE_DATABASE MAKE_SQLSTATE('4','2','P','0','4')
#define HeapTupleHeaderSetHeapOnly(tup) ( (tup)->t_infomask2 |= HEAP_ONLY_TUPLE )
#define __FLT_EVAL_METHOD__ 0
#define EAI_NONAME -2
#define PROC_XMIN_FLAGS (PROC_IN_VACUUM | PROC_IN_SAFE_IC)
#define ERRCODE_DATABASE_DROPPED MAKE_SQLSTATE('5','7','P','0','4')
#define pg_prevent_errno_in_scope() int __errno_location pg_attribute_unused()
#define ERRCODE_INVALID_SCHEMA_NAME MAKE_SQLSTATE('3','F','0','0','0')
#define IP_DEFAULT_MULTICAST_LOOP 1
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define __FP_FAST_FMAF32 1
#define __FLT64_DECIMAL_DIG__ 17
#define VARATT_IS_1B_E(PTR) ((((varattrib_1b *) (PTR))->va_header) == 0x01)
#define TIMESTAMPTZOID 1184
#define TYPCATEGORY_NUMERIC 'N'
#define lengthof(array) (sizeof (array) / sizeof ((array)[0]))
#define STACK_DEPTH_SLOP (512 * 1024L)
#define MemSetTest(val,len) ( ((len) & LONG_ALIGN_MASK) == 0 && (len) <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0 && (val) == 0 )
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define CLD_STOPPED CLD_STOPPED
#define ObjectAddressSet(addr,class_id,object_id) ObjectAddressSubSet(addr, class_id, object_id, 0)
#define GIDSIZE 200
#define Anum_pg_collation_collnamespace 3
#define FNONBLOCK O_NONBLOCK
#define INT8_MIN (-128)
#define PROARGMODE_IN 'i'
#define CharGetDatum(X) ((Datum) (X))
#define lfourth_int(l) lfirst_int(list_nth_cell(l, 3))
#define QUERYENVIRONMENT_H 
#define CONNECTION_MANAGMENT_H 
#define EOWNERDEAD 130
#define HEAP_XMAX_IS_EXCL_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_EXCL_LOCK)
#define CollationOidIndexId 3085
#define EAI_INPROGRESS -100
#define SCNdLEAST64 __PRI64_PREFIX "d"
#define CommitTsLock (&MainLWLockArray[39].lock)
#define HeapTupleHeaderGetTypMod(tup) ( (tup)->t_choice.t_datum.datum_typmod )
#define PG_HAVE_ATOMIC_READ_U64 
#define HAVE_ASN1_STRING_GET0_DATA 1
#define si_overrun _sifields._timer.si_overrun
#define _BITS_ERRNO_H 1
#define ERRCODE_INVALID_NAME MAKE_SQLSTATE('4','2','6','0','2')
#define SInvalWriteLock (&MainLWLockArray[6].lock)
#define MOD_TIMECONST ADJ_TIMECONST
#define FALLOC_FL_ZERO_RANGE 0x10
#define SHM_TOC_H 
#define STA_PPSERROR 0x0800
#define EL2NSYNC 45
#define ERANGE 34
#define pg_attribute_hot __attribute__((hot))
#define SAFE_STR_MIN_SPECIALS ( 1 )
#define Anum_pg_attribute_attislocal 20
#define __LDBL_REDIR1(name,proto,alias) name proto
#define __size_t 
#define PageClearHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags &= ~PD_HAS_FREE_LINES)
#define RelationGetTargetPageUsage(relation,defaultff) (BLCKSZ * RelationGetFillFactor(relation, defaultff) / 100)
#define MOD_STATUS ADJ_STATUS
#define ETXTBSY 26
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define RWH_WRITE_LIFE_EXTREME 5
#define NSIG _NSIG
#define RTOverRightStrategyNumber 4
#define SO_INCOMING_NAPI_ID 56
#define EAI_CANCELED -101
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define UUIDARRAYOID 2951
#define Anum_pg_type_typinput 16
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define __FLT64X_MAX_10_EXP__ 4932
#define SIGTTOU 22
#define XactSLRULock (&MainLWLockArray[11].lock)
#define list_make4_int(x1,x2,x3,x4) list_make4_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3), list_make_int_cell(x4))
#define BACKENDID_H 
#define Anum_pg_type_typdelim 11
#define __CFLOAT32X _Complex _Float32x
#define MSG_PEEK MSG_PEEK
#define NSS_BUFLEN_PASSWD 1024
#define RELCACHE_H 
#define SHARD_RANGE_QUERY "SELECT min(%s), max(%s) FROM %s"
#define HAVE_DECL_PWRITEV 1
#define DT_DIR DT_DIR
#define VARHDRSZ_SHORT offsetof(varattrib_1b, va_data)
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define SVE_MAGIC 0x53564501
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define DEFAULT_BACKEND_FLUSH_AFTER 0
#define PG_BRIN_BLOOM_SUMMARYOID 4600
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define DECLARE_UNIQUE_INDEX_PKEY(name,oid,decl) extern int no_such_variable
#define DISTRIBUTE_BY_HASH 'h'
#define ItemIdMarkDead(itemId) ( (itemId)->lp_flags = LP_DEAD )
#define UINTPTR_WIDTH __WORDSIZE
#define ERRCODE_T_R_DEADLOCK_DETECTED MAKE_SQLSTATE('4','0','P','0','1')
#define WCHAR_MIN __WCHAR_MIN
#define ERRCODE_E_R_I_E_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','1')
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define ____gwchar_t_defined 1
#define floatVal(v) atof(((Value *)(v))->val.str)
#define EDQUOT 122
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define FD_SETSIZE __FD_SETSIZE
#define Anum_pg_index_indpred 20
#define Anum_pg_index_indisreplident 14
#define PRIMNODES_H 
#define UINT_FAST16_MAX (18446744073709551615UL)
#define ENOTBLK 15
#define EFAULT 14
#define EPROTOTYPE 91
#define ACL_ALL_RIGHTS_LARGEOBJECT (ACL_SELECT|ACL_UPDATE)
#define printf(...) pg_printf(__VA_ARGS__)
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define SECS_PER_MINUTE 60
#define PG_GETARG_FLOAT4(n) DatumGetFloat4(PG_GETARG_DATUM(n))
#define EAI_ALLDONE -103
#define PG_GETARG_FLOAT8(n) DatumGetFloat8(PG_GETARG_DATUM(n))
#define __linux__ 1
#define F_SEAL_WRITE 0x0008
#define IndexInfoFindDataOffset(t_info) ( (!((t_info) & INDEX_NULL_MASK)) ? ( (Size)MAXALIGN(sizeof(IndexTupleData)) ) : ( (Size)MAXALIGN(sizeof(IndexTupleData) + sizeof(IndexAttributeBitMapData)) ) )
#define DatumGetBpCharPSlice(X,m,n) ((BpChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define SRF_PERCALL_SETUP() per_MultiFuncCall(fcinfo)
#define ERRCODE_AMBIGUOUS_FUNCTION MAKE_SQLSTATE('4','2','7','2','5')
#define TransactionIdAdvance(dest) do { (dest)++; if ((dest) < FirstNormalTransactionId) (dest) = FirstNormalTransactionId; } while(0)
#define ERRCODE_CASE_NOT_FOUND MAKE_SQLSTATE('2','0','0','0','0')
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define MOD_CLKB ADJ_TICK
#define FORMAT_COLLATE_FORCE_QUALIFY 0x04
#define __FLT32X_IS_IEC_60559__ 2
#define SYNCHRONOUS_COMMIT_ON SYNCHRONOUS_COMMIT_REMOTE_FLUSH
#define htonl(x) __bswap_32 (x)
#define HAVE_GCC__SYNC_INT32_TAS 1
#define htons(x) __bswap_16 (x)
#define IPV6_MTU_DISCOVER 23
#define CHUNK_ROW_COUNT_MINIMUM 1000
#define CITUS_safe_lib_H 
#define RelationMappingLock (&MainLWLockArray[25].lock)
#define PG_RETURN_TEXT_P(x) PG_RETURN_POINTER(x)
#define PG_FREE_IF_COPY(ptr,n) do { if ((Pointer) (ptr) != PG_GETARG_POINTER(n)) pfree(ptr); } while (0)
#define DatumGetAclPCopy(X) ((Acl *) PG_DETOAST_DATUM_COPY(X))
#define SO_REUSEADDR 2
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_SYNCHRONIZED_IO 200809L
#define foreach_ptr_append(var,l) for (int var ## PositionDoNotUse = 0; (var ## PositionDoNotUse) < list_length(l) && (((var) = list_nth(l, var ## PositionDoNotUse)) || true); var ## PositionDoNotUse ++)
#define RSIZE_MAX_STR ( 4UL << 10 )
#define DeferredError(code,message,detail,hint) DeferredErrorInternal(code, message, detail, hint, __FILE__, __LINE__, PG_FUNCNAME_MACRO)
#define HAVE_LIBCRYPTO 1
#define CppConcat(x,y) x ##y
#define _SC_TIMERS _SC_TIMERS
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define PG_BITUTILS_H 
#define SOL_X25 262
#define O_APPEND 02000
#define XACT_XINFO_HAS_ORIGIN (1U << 5)
#define _POSIX_MQ_OPEN_MAX 8
#define _FORTIFY_SOURCE 2
#define Anum_pg_attribute_attrelid 1
#define INTERVAL_PRECISION(t) ((t) & INTERVAL_PRECISION_MASK)
#define __INT8_MAX__ 0x7f
#define GTSVECTOROID 3642
#define PG_GETARG_BYTEA_PP(n) DatumGetByteaPP(PG_GETARG_DATUM(n))
#define pg_write_barrier() pg_write_barrier_impl()
#define ItemIdSetNormal(itemId,off,len) ( (itemId)->lp_flags = LP_NORMAL, (itemId)->lp_off = (off), (itemId)->lp_len = (len) )
#define _BITS_TIMEX_H 1
#define Anum_pg_proc_pronargdefaults 18
#define pgproc_statusflags_compat(pgproc) ((pgproc)->statusFlags)
#define DO_AGGSPLIT_SKIPFINAL(as) (((as) & AGGSPLITOP_SKIPFINAL) != 0)
#define IndexTupleHasVarwidths(itup) ((((IndexTuple) (itup))->t_info & INDEX_VAR_MASK))
#define BUILTINS_H 
#define Anum_pg_attribute_attgenerated 18
#define isblank(c) __isctype((c), _ISblank)
#define POSTGRES_EPOCH_JDATE 2451545
#define unconstify(underlying_type,expr) (StaticAssertExpr(__builtin_types_compatible_p(__typeof(expr), const underlying_type), "wrong cast"), (underlying_type) (expr))
#define SO_MARK 36
#define __USE_EXTERN_INLINES 1
#define ERRCODE_DIVISION_BY_ZERO MAKE_SQLSTATE('2','2','0','1','2')
#define PG_GETARG_EXPANDED_ARRAY(n) DatumGetExpandedArray(PG_GETARG_DATUM(n))
#define PinTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) IncrTupleDescRefCount(tupdesc); } while (0)
#define ProcessUtility_compat(a,b,c,d,e,f,g,h) ProcessUtility(a, b, c, d, e, f, g, h)
#define OBJECTADDRESS_H 
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define AddinShmemInitLock (&MainLWLockArray[21].lock)
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define ETIMEDOUT 110
#define HAVE__BUILTIN_TYPES_COMPATIBLE_P 1
#define PG_DIAG_MESSAGE_HINT 'H'
#define __USE_GNU_GETTEXT 1
#define PG_RETURN_BPCHAR_P(x) PG_RETURN_POINTER(x)
#define FIELDNO_EXPRCONTEXT_AGGVALUES 8
#define ExclusiveLock 7
#define _EXTERN_INLINE __extern_inline
#define VirtualTransactionIdIsValid(vxid) (LocalTransactionIdIsValid((vxid).localTransactionId))
#define INT4MULTIRANGEARRAYOID 6150
#define LOCALLOCK_LOCKTAG(llock) ((LockTagType) (llock).tag.lock.locktag_type)
#define DN_ACCESS 0x00000001
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define Anum_pg_class_relkind 17
#define EOVERFLOW 75
#define SizeOfXLogRecordBlockImageHeader (offsetof(XLogRecordBlockImageHeader, bimg_info) + sizeof(uint8))
#define SizeOfXLogRecord (offsetof(XLogRecord, xl_crc) + sizeof(pg_crc32c))
#define TEXTARRAYOID 1009
#define Anum_pg_index_indclass 17
#define Anum_pg_proc_provolatile 15
#define __BITS_PER_LONG 64
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define S_IRUSR __S_IREAD
#define PF_ALG 38
#define Anum_pg_index_indisexclusion 7
#define _XOPEN_ENH_I18N 1
#define ERRCODE_INVALID_CATALOG_NAME MAKE_SQLSTATE('3','D','0','0','0')
#define ARR_ELEMTYPE(a) ((a)->elemtype)
#define MAX_TIMESTAMP_PRECISION 6
#define SET_NULLABLE_FIELD(ptr,field,value) (ptr)->__nullable_storage.field = (value); (ptr)->field = &((ptr)->__nullable_storage.field)
#define ACL_SELECT (1<<1)
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define PG_DIAG_INTERNAL_POSITION 'p'
#define IP_IPSEC_POLICY 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define ACLITEM_SET_RIGHTS(item,rights) ((item).ai_privs = (AclMode) (rights))
#define Anum_pg_proc_proargtypes 20
#define ERRCODE_UNDEFINED_CURSOR MAKE_SQLSTATE('3','4','0','0','0')
#define Anum_pg_class_relisshared 15
#define XactCompletionForceSyncCommit(xinfo) ((xinfo & XACT_COMPLETION_FORCE_SYNC_COMMIT) != 0)
#define AF_INET6 PF_INET6
#define dsa_pointer_atomic_compare_exchange pg_atomic_compare_exchange_u64
#define INT32_MIN (-2147483647-1)
#define STA_CLOCKERR 0x1000
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define CppAsString2(x) CppAsString(x)
#define _POSIX_SPAWN 200809L
#define __SHRT_WIDTH__ 16
#define PG_CLASSARRAYOID 273
#define OPTION_NAME_COMPRESSION_TYPE "compression"
#define _INTTYPES_H 1
#define WORKER_TRANSACTION_H 
#define TRIGGEROID 2279
#define PageGetLSN(page) PageXLogRecPtrGet(((PageHeader) (page))->pd_lsn)
#define Anum_pg_type_typndims 28
#define ALIGNOF_BUFFER 32
#define PF_UNIX PF_LOCAL
#define ERRCODE_INVALID_REGULAR_EXPRESSION MAKE_SQLSTATE('2','2','0','1','B')
#define S_LOCK(lock) (TAS(lock) ? s_lock((lock), __FILE__, __LINE__, PG_FUNCNAME_MACRO) : 0)
#define HAVE_GCC__ATOMIC_INT32_CAS 1
#define ERRCODE_SQL_ROUTINE_EXCEPTION MAKE_SQLSTATE('2','F','0','0','0')
#define _SS_SIZE 128
#define ResetExprContext(econtext) MemoryContextReset((econtext)->ecxt_per_tuple_memory)
#define SCHAR_WIDTH 8
#define LOCAL_FCINFO(name,nargs) union { FunctionCallInfoBaseData fcinfo; char fcinfo_data[SizeForFunctionCallInfo(nargs)]; } name ##data; FunctionCallInfo name = &name ##data.fcinfo
#define att_addlength_datum(cur_offset,attlen,attdatum) att_addlength_pointer(cur_offset, attlen, DatumGetPointer(attdatum))
#define O_TMPFILE __O_TMPFILE
#define PG_TABLE_SIZE_FUNCTION "pg_table_size(%s)"
#define le64toh(x) __uint64_identity (x)
#define PF_ASH 18
#define UINT64_C(c) c ## UL
#define DECLARE_UNIQUE_INDEX(name,oid,decl) extern int no_such_variable
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define EPERM 1
#define LockHashPartitionLockByProc(leader_pgproc) LockHashPartitionLock((leader_pgproc)->pgprocno)
#define pgstat_init_relation(r) pgstat_initstats(r)
#define AssertVariableIsOfType(varname,typename) StaticAssertStmt(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename))
#define CitusIsA(nodeptr,_type_) (CitusNodeTag(nodeptr) == T_ ##_type_)
#define PF_AX25 3
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __SIZEOF_PTRDIFF_T__ 8
#define PG_GETARG_ANY_ARRAY_P(n) DatumGetAnyArrayP(PG_GETARG_DATUM(n))
#define HASH_CONTEXT 0x0400
#define SOL_XDP 283
#define __unix__ 1
#define BKI_BOOTSTRAP 
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _IONBF 2
#define TTS_FLAG_FIXED (1 << 4)
#define FIELDNO_EXPRCONTEXT_OUTERTUPLE 3
#define AGGSPLITOP_SERIALIZE 0x04
#define NL_TEXTMAX INT_MAX
#define PG_MAGIC_FUNCTION_NAME_STRING "Pg_magic_func"
#define ERRCODE_S_R_E_FUNCTION_EXECUTED_NO_RETURN_STATEMENT MAKE_SQLSTATE('2','F','0','0','5')
#define MACADDR8OID 774
#define PF_NETLINK 16
#define XACT_XINFO_HAS_AE_LOCKS (1U << 6)
#define __UINT16_C(c) c
#define OPTION_NAME_STRIPE_ROW_COUNT "stripe_row_limit"
#define HAVE_LIBSELINUX 1
#define ERRCODE_NOT_AN_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','L')
#define NI_NAMEREQD 8
#define TIMETZOID 1266
#define END_TIMESTAMP INT64CONST(9223371331200000000)
#define AF_CAN PF_CAN
#define STA_FREQHOLD 0x0080
#define BUFPAGE_H 
#define O_WRONLY 01
#define U64FromFullTransactionId(x) ((x).value)
#define __gnu_linux__ 1
#define __INTMAX_WIDTH__ 64
#define PG_HAVE_ATOMIC_FETCH_AND_U32 
#define O_EXCL 0200
#define SPIN_DELAY() ((void) 0)
#define SOL_IP 0
#define ERRCODE_INVALID_BINARY_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','3')
#define METADATA_UTILITY_H 
#define HEAPTUPLESIZE MAXALIGN(sizeof(HeapTupleData))
#define EXEC_FLAG_SKIP_TRIGGERS 0x0010
#define _SC_THREADS _SC_THREADS
#define OFF_H 
#define PG_O_DIRECT O_DIRECT
#define SCNdLEAST32 "d"
#define Anum_pg_attribute_atttypid 3
#define __UINT_FAST32_TYPE__ long unsigned int
#define DAYS_PER_YEAR 365.25
#define TYPCATEGORY_STRING 'S'
#define TUPLESTORE_H 
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define ERRCODE_NON_NUMERIC_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','6')
#define SYNC_FILE_RANGE_WRITE 2
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define DISTRIBUTED_PLANNER_H 
#define __FLT16_MIN_EXP__ (-13)
#define PG_HAVE_ATOMIC_FETCH_AND_U64 
#define Anum_pg_type_typowner 4
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define IPPROTO_IDP IPPROTO_IDP
#define AT_REMOVEDIR 0x200
#define si_arch _sifields._sigsys._arch
#define RelationGetDescr(relation) ((relation)->rd_att)
#define IPPROTO_IPIP IPPROTO_IPIP
#define RTMaxStrategyNumber 30
#define HAVE_RL_FILENAME_QUOTING_FUNCTION 1
#define _T_PTRDIFF 
#define pg_noinline __attribute__((noinline))
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define PG_GETARG_ARRAYTYPE_P(n) DatumGetArrayTypeP(PG_GETARG_DATUM(n))
#define PAI_IS_HEAP (1 << 1)
#define pg_attribute_noreturn() __attribute__((noreturn))
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define L_ctermid 9
#define PG_GETARG_CHAR(n) DatumGetChar(PG_GETARG_DATUM(n))
#define __FLT_HAS_DENORM__ 1
#define strerror_r pg_strerror_r
#define pg_attribute_no_sanitize_alignment() __attribute__((no_sanitize("alignment")))
#define PG_GETARG_TEXT_P_SLICE(n,a,b) DatumGetTextPSlice(PG_GETARG_DATUM(n),a,b)
#define __timeval_defined 1
#define HEAP_XMAX_COMMITTED 0x0400
#define FRAMEOPTION_START_OFFSET_PRECEDING 0x00800
#define AF_LOCAL PF_LOCAL
#define DatumGetInt64(X) ((int64) (X))
#define AF_ROUTE PF_ROUTE
#define ACL_ALL_RIGHTS_DATABASE (ACL_CREATE|ACL_CREATE_TEMP|ACL_CONNECT)
#define PageIsNew(page) (((PageHeader) (page))->pd_upper == 0)
#define ERRCODE_SEQUENCE_GENERATOR_LIMIT_EXCEEDED MAKE_SQLSTATE('2','2','0','0','H')
#define __ONCE_ALIGNMENT 
#define _POSIX_HOST_NAME_MAX 255
#define Anum_pg_index_indisvalid 10
#define OidFunctionCall6(functionId,arg1,arg2,arg3,arg4,arg5,arg6) OidFunctionCall6Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define PageIsFull(page) (((PageHeader) (page))->pd_flags & PD_PAGE_FULL)
#define ACL_DELETE (1<<3)
#define ESBADFMT ( 410 )
#define O_FSYNC O_SYNC
#define ERRCODE_INVALID_ESCAPE_OCTET MAKE_SQLSTATE('2','2','0','0','D')
#define _POSIX_SEM_NSEMS_MAX 256
#define MSG_DONTROUTE MSG_DONTROUTE
#define PG_FUNCTION_ARGS FunctionCallInfo fcinfo
#define ____sigval_t_defined 
#define PQsetdb(M_PGHOST,M_PGPORT,M_PGOPT,M_PGTTY,M_DBNAME) PQsetdbLogin(M_PGHOST, M_PGPORT, M_PGOPT, M_PGTTY, M_DBNAME, NULL, NULL)
#define Anum_pg_attribute_attname 2
#define HAVE_FSEEKO 1
#define SHARD_CSTORE_TABLE_SIZE_QUERY "SELECT cstore_table_size(%s)"
#define XIDARRAYOID 1011
#define LOCK_LOCKMETHOD(lock) ((LOCKMETHODID) (lock).tag.locktag_lockmethodid)
#define FLOAT4OID 700
#define _BITS_STDINT_UINTN_H 1
#define ANYCOMPATIBLEOID 5077
#define AttributeRelidNumIndexId 2659
#define HeapTupleHeaderSetSpeculativeToken(tup,token) ( ItemPointerSet(&(tup)->t_ctid, token, SpecTokenOffsetNumber) )
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define ERRCODE_AMBIGUOUS_PARAMETER MAKE_SQLSTATE('4','2','P','0','8')
#define DEFAULT_PGSOCKET_DIR "/var/run/postgresql"
#define PG_HAVE_ATOMIC_EXCHANGE_U64 
#define XMLOID 142
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define _POSIX_NGROUPS_MAX 8
#define Anum_pg_class_reltoastrelid 13
#define COLLPROVIDER_LIBC 'c'
#define PF_NETROM 6
#define HAVE_UUID_UUID_H 1
#define RelationIsAccessibleInLogicalDecoding(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && (IsCatalogRelation(relation) || RelationIsUsedAsCatalogTable(relation)))
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define REPLICA_IDENTITY_DEFAULT 'd'
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define InitDirtySnapshot(snapshotdata) ((snapshotdata).snapshot_type = SNAPSHOT_DIRTY)
#define PG_AUTOCONF_FILENAME "postgresql.auto.conf"
#define HAVE_BIO_METH_NEW 1
#define _SC_CLK_TCK _SC_CLK_TCK
#define TransactionIdRetreat(dest) do { (dest)--; } while ((dest) < FirstNormalTransactionId)
#define IPV6_ORIGDSTADDR 74
#define TUPCONVERT_H 
#define NAMEARRAYOID 1003
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define StaticAssertStmt(condition,errmessage) do { _Static_assert(condition, errmessage); } while(0)
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define PG_TYPE_H 
#define ACL_DELETE_CHR 'd'
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IPPROTO_IPV6 IPPROTO_IPV6
#define Anum_pg_publication_pubviaroot 9
#define INTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_INT, (LEN))
#define USE_LIBXML 1
#define XLOGRECORD_H 
#define RTSubStrategyNumber 24
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define AF_ECONET PF_ECONET
#define HeapTupleClearHotUpdated(tuple) HeapTupleHeaderClearHotUpdated((tuple)->t_data)
#define __FLT32X_HAS_DENORM__ 1
#define PGPROC_MAX_CACHED_SUBXIDS 64
#define __HAVE_FLOAT128X 0
#define NI_IDN 32
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define VARDATA_EXTERNAL(PTR) VARDATA_1B_E(PTR)
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define dlist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->next)
#define PG_RETURN_FLOAT8(x) return Float8GetDatum(x)
#define SCNdFAST8 "hhd"
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define _POSIX_REGEXP 1
#define __f64(x) x ##f64
#define UINT_LEAST8_MAX (255)
#define DSA_H 
#define __CFLOAT64X _Complex _Float64x
#define HAVE_LINUX_EIDRM_BUG 
#define pairingheap_is_empty(h) ((h)->ph_root == NULL)
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define F_GET_RW_HINT 1035
#define HEAP_INSERT_SKIP_FSM TABLE_INSERT_SKIP_FSM
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define DROP_FOREIGN_TABLE_COMMAND "DROP FOREIGN TABLE IF EXISTS %s CASCADE"
#define __O_DSYNC 010000
#define _POSIX_MEMORY_PROTECTION 200809L
#define RelationGetParallelWorkers(relation,defaultpw) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->parallel_workers : (defaultpw))
#define BKI_LOOKUP(catalog) 
#define EAI_SOCKTYPE -7
#define NL_MSGMAX INT_MAX
#define PG_GETARG_OID(n) DatumGetObjectId(PG_GETARG_DATUM(n))
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __FLT64_MIN_10_EXP__ (-307)
#define SOL_SOCKET 1
#define ERRCODE_FDW_TOO_MANY_HANDLES MAKE_SQLSTATE('H','V','0','1','4')
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define MinSizeOfXactInvals offsetof(xl_xact_invals, msgs)
#define TYPSTORAGE_EXTENDED 'x'
#define _POSIX_TIMERS 200809L
#define _LIBINTL_H 1
#define F_GET_FILE_RW_HINT 1037
#define __HAVE_FLOAT16 0
#define EREMOTE 66
#define pg_hton16(x) pg_bswap16(x)
#define VARTAG_SIZE(tag) ((tag) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : VARTAG_IS_EXPANDED(tag) ? sizeof(varatt_expanded) : (tag) == VARTAG_ONDISK ? sizeof(varatt_external) : TrapMacro(true, "unrecognized TOAST vartag"))
#define AF_NETLINK PF_NETLINK
#define PG_GETARG_BYTEA_P_COPY(n) DatumGetByteaPCopy(PG_GETARG_DATUM(n))
#define SEGV_MAPERR SEGV_MAPERR
#define __HAVE_FLOAT32 1
#define _BITS_STDIO_H 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __SVE_NUM_PREGS 16
#define pg_hton32(x) pg_bswap32(x)
#define DatumBigEndianToNative(x) pg_bswap64(x)
#define FRAMEOPTION_END_OFFSET_FOLLOWING 0x04000
#define Anum_pg_sequence_seqcycle 8
#define BlockIdIsValid(blockId) ((bool) PointerIsValid(blockId))
#define AF_RDS PF_RDS
#define LC_NAME_MASK (1 << __LC_NAME)
#define __SIZEOF_SIZE_T__ 8
#define SK_ROW_MEMBER 0x0008
#define LOCAL_TABLE_SUBQUERY_CTE_HINT "Use CTE's or subqueries to select from local tables and use them in joins"
#define ERRCODE_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','1')
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define MIN_TIMESTAMP INT64CONST(-211813488000000000)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define SCNiPTR __PRIPTR_PREFIX "i"
#define __HAVE_FLOAT64 1
#define Anum_pg_publication_puballtables 4
#define INSTR_TIME_GET_MICROSEC(t) (((uint64) (t).tv_sec * (uint64) 1000000) + (uint64) ((t).tv_nsec / 1000))
#define NO_RECOVERY 3
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define pg_hton64(x) pg_bswap64(x)
#define get_pathtarget_sortgroupref(target,colno) ((target)->sortgrouprefs ? (target)->sortgrouprefs[colno] : (Index) 0)
#define PG_DIAG_COLUMN_NAME 'c'
#define __FLT64X_MIN_EXP__ (-16381)
#define Anum_pg_proc_proallargtypes 21
#define PRIiLEAST32 "i"
#define _SC_BASE _SC_BASE
#define ERRCODE_INVALID_DATETIME_FORMAT MAKE_SQLSTATE('2','2','0','0','7')
#define WORKER_APPLY_SHARD_DDL_COMMAND "SELECT worker_apply_shard_ddl_command (" UINT64_FORMAT ", %s, %s)"
#define MSG_WAITFORONE MSG_WAITFORONE
#define SO_PASSSEC 34
#define __LDBL_MIN_10_EXP__ (-4931)
#define RTOverlapStrategyNumber 3
#define INIT_CRC32C(crc) ((crc) = 0xFFFFFFFF)
#define F_SETLEASE 1024
#define BUF_H 
#define _GCC_WCHAR_T 
#define __FLT32_MAX_EXP__ 128
#define _SC_FIFO _SC_FIFO
#define dngettext(domainname,msgid1,msgid2,n) dcngettext (domainname, msgid1, msgid2, n, LC_MESSAGES)
#define S_IWUSR __S_IWRITE
#define PRIiFAST8 "i"
#define SIOCATMARK 0x8905
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define PRIiLEAST64 __PRI64_PREFIX "i"
#define F_SETPIPE_SZ 1031
#define ADJ_TAI 0x0080
#define DSM_HANDLE_INVALID 0
#define ESEMPTY ( 405 )
#define __ARM_FP16_FORMAT_IEEE 1
#define CHECKPOINT_CAUSE_TIME 0x0100
#define __WTERMSIG(status) ((status) & 0x7f)
#define ERRCODE_DATETIME_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','8')
#define PG_RETURN_DATUM(x) return (x)
#define foreach_delete_current(lst,cell) (cell ##__state.i--, (List *) (cell ##__state.l = list_delete_cell(lst, cell)))
#define UINT_LEAST16_MAX (65535)
#define R_OK 4
#define F_UNLCK 2
#define ANYARRAYOID 2277
#define WALBufMappingLock (&MainLWLockArray[7].lock)
#define TextDatumGetCString(d) text_to_cstring((text *) DatumGetPointer(d))
#define WORKER_APPLY_INTER_SHARD_DDL_COMMAND "SELECT worker_apply_inter_shard_ddl_command (" UINT64_FORMAT ", %s, " UINT64_FORMAT ", %s, %s)"
#define pg_nodiscard __attribute__((warn_unused_result))
#define TimestampTzPlusMilliseconds(tz,ms) ((tz) + ((ms) * (int64) 1000))
#define SRF_RETURN_DONE(_funcctx) do { ReturnSetInfo *rsi; end_MultiFuncCall(fcinfo, _funcctx); rsi = (ReturnSetInfo *) fcinfo->resultinfo; rsi->isDone = ExprEndResult; PG_RETURN_NULL(); } while (0)
#define CURSOR_OPT_PARALLEL_OK 0x0800
#define LIBPQ_HAS_TRACE_FLAGS 1
#define ItemPointerSetMovedPartitions(pointer) ItemPointerSet((pointer), MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define AssertVariableIsOfTypeMacro(varname,typename) (StaticAssertExpr(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename)))
#define CLOCK_TAI 11
#define _XOPEN_SHM 1
#define TSQUERYOID 3615
#define FRAMEOPTION_END_OFFSET (FRAMEOPTION_END_OFFSET_PRECEDING | FRAMEOPTION_END_OFFSET_FOLLOWING)
#define SEGV_ACCERR SEGV_ACCERR
#define DatumGetIntervalP(X) ((Interval *) DatumGetPointer(X))
#define __PTRDIFF_T 
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define PRIoLEAST32 "o"
#define HAVE_LIBSSL 1
#define pg_attribute_unused() __attribute__((unused))
#define REPLICATION_MODEL_2PC 't'
#define _POSIX_ADVISORY_INFO 200809L
#define STA_PPSSIGNAL 0x0100
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define F_LOCK 1
#define NO_FORCE_PUSHDOWN 0
#define VOIDOID 2278
#define PG_DIAG_DATATYPE_NAME 'd'
#define SNAPMGR_H 
#define DSM_IMPL_H 
#define HAVE_STRINGS_H 1
#define MultiXactGenLock (&MainLWLockArray[13].lock)
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define GUC_QUALIFIER_SEPARATOR '.'
#define _VA_LIST 
#define _BITS_STDIO_LIM_H 1
#define IN_CLASSA_NSHIFT 24
#define TIMESTAMPTZARRAYOID 1185
#define PG_USED_FOR_ASSERTS_ONLY pg_attribute_unused()
#define RelationGetForm(relation) ((relation)->rd_rel)
#define AttrOffsetGetAttrNumber(attributeOffset) ((AttrNumber) (1 + (attributeOffset)))
#define __O_PATH 010000000
#define isxdigit(c) __isctype((c), _ISxdigit)
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define RelationCloseSmgr(relation) do { if ((relation)->rd_smgr != NULL) { smgrclose((relation)->rd_smgr); Assert((relation)->rd_smgr == NULL); } } while (0)
#define VARCHARARRAYOID 1015
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define si_uid _sifields._kill.si_uid
#define __ssize_t_defined 
#define CURSOR_OPT_NO_SCROLL 0x0004
#define INT8_WIDTH 8
#define SIGUSR1 10
#define PG_RELATION_SIZE_FUNCTION "pg_relation_size(%s)"
#define __INT_FAST8_WIDTH__ 8
#define TZNAME_GLOBAL tzname
#define _POSIX_SYMLOOP_MAX 8
#define SET_VARSIZE_4B(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2))
#define ItemPointerGetBlockNumberNoCheck(pointer) ( BlockIdGetBlockNumber(&(pointer)->ip_blkid) )
#define HAVE_DECL_RTLD_GLOBAL 1
#define ARR_OVERHEAD_NONULLS(ndims) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims))
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define F_SETLKW64 7
#define XACT_XINFO_HAS_SUBXACTS (1U << 1)
#define Anum_pg_index_indexprs 19
#define ERRCODE_EXTERNAL_ROUTINE_INVOCATION_EXCEPTION MAKE_SQLSTATE('3','9','0','0','0')
#define HAVE_HMAC_CTX_FREE 1
#define SIGTRAP 5
#define __nonnull(params) __attribute_nonnull__ (params)
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define ERRCODE_INVALID_XML_CONTENT MAKE_SQLSTATE('2','2','0','0','N')
#define INT_FAST64_WIDTH 64
#define HAVE_STRUCT_OPTION 1
#define F_GETSIG __F_GETSIG
#define SHUT_RDWR SHUT_RDWR
#define O_DSYNC __O_DSYNC
#define EpochFromFullTransactionId(x) ((uint32) ((x).value >> 32))
#define BufferIsLocal(buffer) ((buffer) < 0)
#define LOCK_READ 64
#define __aarch64__ 1
#define ERRCODE_CANNOT_CONNECT_NOW MAKE_SQLSTATE('5','7','P','0','3')
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __ARM_FP16_ARGS 1
#define JULIAN_MAXMONTH (6)
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define SO_PROTOCOL 38
#define ERRCODE_INVALID_GRANTOR MAKE_SQLSTATE('0','L','0','0','0')
#define COMMAND_IS_STRICTLY_READ_ONLY (COMMAND_OK_IN_READ_ONLY_TXN | COMMAND_OK_IN_RECOVERY | COMMAND_OK_IN_PARALLEL_MODE)
#define LSN_FORMAT_ARGS(lsn) (AssertVariableIsOfTypeMacro((lsn), XLogRecPtr), (uint32) ((lsn) >> 32)), ((uint32) (lsn))
#define SET_VARSIZE_COMPRESSED(PTR,len) SET_VARSIZE_4B_C(PTR, len)
#define SET_LOCKTAG_SPECULATIVE_INSERTION(locktag,xid,token) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = (token), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_SPECULATIVE_TOKEN, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define __FLT64X_DECIMAL_DIG__ 36
#define IP_BIND_ADDRESS_NO_PORT 24
#define _DEFAULT_SOURCE 1
#define ERRCODE_WARNING_PRIVILEGE_NOT_GRANTED MAKE_SQLSTATE('0','1','0','0','7')
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX (2147483647)
#define STA_INS 0x0010
#define PG_INT64_TYPE long int
#define LOGIN_NAME_MAX 256
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define BOOLARRAYOID 1000
#define tuplestore_donestoring(state) ((void) 0)
#define INTERVALOID 1186
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define InitNonVacuumableSnapshot(snapshotdata,vistestp) ((snapshotdata).snapshot_type = SNAPSHOT_NON_VACUUMABLE, (snapshotdata).vistest = (vistestp))
#define PageIsAllVisible(page) (((PageHeader) (page))->pd_flags & PD_ALL_VISIBLE)
#define PG_COPYRES_TUPLES 0x02
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define XLogRecGetTotalLen(decoder) ((decoder)->decoded_record->xl_tot_len)
#define ERRCODE_SYNTAX_ERROR MAKE_SQLSTATE('4','2','6','0','1')
#define TTS_EMPTY(slot) (((slot)->tts_flags & TTS_FLAG_EMPTY) != 0)
#define _BITS_SIGINFO_CONSTS_H 1
#define HAVE_SYS_RESOURCE_H 1
#define MSG_RST MSG_RST
#define dsa_pointer_atomic_fetch_add pg_atomic_fetch_add_u64
#define __stub_chflags 
#define ATTRIBUTE_GENERATED_STORED 's'
#define SyncRepLock (&MainLWLockArray[32].lock)
#define vfprintf pg_vfprintf
#define RelationGetToastTupleTarget(relation,defaulttarg) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->toast_tuple_target : (defaulttarg))
#define PG_DIAG_MESSAGE_DETAIL 'D'
#define MAX_CANON 255
#define HeapTupleHeaderGetXvac(tup) ( ((tup)->t_infomask & HEAP_MOVED) ? (tup)->t_choice.t_heap.t_field3.t_xvac : InvalidTransactionId )
#define REGROLEARRAYOID 4097
#define ItemIdIsRedirected(itemId) ((itemId)->lp_flags == LP_REDIRECT)
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define FKCONSTR_ACTION_RESTRICT 'r'
#define EarlyPruningEnabled(rel) (old_snapshot_threshold >= 0 && RelationAllowsEarlyPruning(rel))
#define PG_GETARG_TEXT_P(n) DatumGetTextP(PG_GETARG_DATUM(n))
#define MOD_OFFSET ADJ_OFFSET
#define F_GET_SEALS 1034
#define DT_NOEND PG_INT64_MAX
#define LockHashPartitionLock(hashcode) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + LockHashPartition(hashcode)].lock)
#define SCNi16 "hi"
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define NUM_TUPLESORTMETHODS 4
#define PRIdLEAST16 "d"
#define COLUMNAR_COMPRESSION_H 
#define TYPTYPE_BASE 'b'
#define COLUMNAR_TUPLE_COST_MULTIPLIER 10
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define NON_EXEC_STATIC static
#define INT_LEAST32_MIN (-2147483647-1)
#define LogicalRepWorkerLock (&MainLWLockArray[43].lock)
#define BlockIdGetBlockNumber(blockId) ( AssertMacro(BlockIdIsValid(blockId)), ((((BlockNumber) (blockId)->bi_hi) << 16) | ((BlockNumber) (blockId)->bi_lo)) )
#define XLOG_INCLUDE_XID 0x04
#define PRIxFAST8 "x"
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define ScanDirectionIsBackward(direction) ((bool) ((direction) == BackwardScanDirection))
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define BGWORKER_BACKEND_DATABASE_CONNECTION 0x0002
#define ERROR 21
#define st_mtime st_mtim.tv_sec
#define PGSIXBIT(ch) (((ch) - '0') & 0x3F)
#define SET_SEARCH_PATH_COMMAND "SET search_path TO %s"
#define BPCHAROID 1042
#define SO_OOBINLINE 10
#define REGBUF_NO_IMAGE 0x02
#define PANIC 23
#define RELKIND_VIEW 'v'
#define __F_GETOWN 9
#define F_OFD_GETLK 36
#define PG_MODULE_MAGIC_DATA { sizeof(Pg_magic_struct), PG_VERSION_NUM / 100, FUNC_MAX_ARGS, INDEX_MAX_KEYS, NAMEDATALEN, FLOAT8PASSBYVAL }
#define INSTR_TIME_SUBTRACT(x,y) do { (x).tv_sec -= (y).tv_sec; (x).tv_nsec -= (y).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } } while (0)
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define TTS_SLOW(slot) (((slot)->tts_flags & TTS_FLAG_SLOW) != 0)
#define pull_varnos_compat(a,b) pull_varnos(a, b)
#define __INO_T_TYPE __ULONGWORD_TYPE
#define islower(c) __isctype((c), _ISlower)
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define __F_SETOWN_EX 15
#define SCNi64 __PRI64_PREFIX "i"
#define __struct_tm_defined 1
#define __LDBL_DECIMAL_DIG__ 36
#define FPE_INTOVF FPE_INTOVF
#define PageGetItemId(page,offsetNumber) ((ItemId) (&((PageHeader) (page))->pd_linp[(offsetNumber) - 1]))
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define gettext(msgid) dgettext (NULL, msgid)
#define SDIR_H 
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define MCAST_LEAVE_GROUP 45
#define Anum_pg_class_relnatts 18
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define PF_TIPC 30
#define BITOID 1560
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define PG_GETARG_DATUM(n) (fcinfo->args[n].value)
#define RELKIND_FOREIGN_TABLE 'f'
#define Anum_pg_class_relhassubclass 22
#define ACL_TRIGGER (1<<6)
#define REGCONFIGARRAYOID 3735
#define RELATION_IS_OTHER_TEMP(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP && !(relation)->rd_islocaltemp)
#define ERRCODE_INVALID_TABLESAMPLE_REPEAT MAKE_SQLSTATE('2','2','0','2','G')
#define PG_RETURN_INT16(x) return Int16GetDatum(x)
#define IndexRelidIndexId 2679
#define pg_backend_random pg_strong_random
#define __LC_ADDRESS 9
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define ereport(elevel,rest) do { int ereport_loglevel = elevel; (void) (ereport_loglevel); ereport_domain(elevel, TEXTDOMAIN, rest); } while (0)
#define ERRCODE_INVALID_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','2','3')
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define RWH_WRITE_LIFE_LONG 4
#define INTERVAL_PRECISION_MASK (0xFFFF)
#define __glibc_macro_warning1(message) _Pragma (#message)
#define PRIX16 "X"
#define PG_RETURN_INT32(x) return Int32GetDatum(x)
#define ACLITEM_SET_GOPTIONS(item,goptions) ((item).ai_privs = ((item).ai_privs & ~(((AclMode) 0xFFFF) << 16)) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define __STDC_IEC_559_COMPLEX__ 1
#define AI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("AI_IDN_USE_STD3_ASCII_RULES is deprecated") 0x0200
#define OPCLASS_ITEM_FUNCTION 2
#define PointerIsAligned(pointer,type) (((uintptr_t)(pointer) % (sizeof (type))) == 0)
#define DN_ATTRIB 0x00000020
#define BTLessEqualStrategyNumber 2
#define JULIAN_MINYEAR (-4713)
#define GUC_EXPLAIN 0x100000
#define __FLT128_DIG__ 33
#define pairingheap_reset(h) ((h)->ph_root = NULL)
#define W_OK 2
#define LOCALHOST_NODE_ID -1
#define SCNiLEAST8 "hhi"
#define HAVE_FUNCNAME__FUNC 1
#define Anum_pg_proc_pronamespace 3
#define XLOG_H 
#define ERRCODE_INVALID_ARGUMENT_FOR_NTH_VALUE MAKE_SQLSTATE('2','2','0','1','6')
#define TypeNameNspIndexId 2704
#define sa_handler __sigaction_handler.sa_handler
#define PG_RETURN_INT64(x) return Int64GetDatum(x)
#define REFCURSORARRAYOID 2201
#define PG_PUBLICATION_D_H 
#define ACL_ALL_RIGHTS_LANGUAGE (ACL_USAGE)
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define ENOKEY 126
#define DISTRIBUTE_BY_RANGE 'r'
#define TABLESPACE_MAP "tablespace_map"
#define VirtualTransactionIdEquals(vxid1,vxid2) ((vxid1).backendId == (vxid2).backendId && (vxid1).localTransactionId == (vxid2).localTransactionId)
#define pg_compiler_barrier_impl() __asm__ __volatile__("" ::: "memory")
#define HAVE_SYS_STAT_H 1
#define TTS_IS_MINIMALTUPLE(slot) ((slot)->tts_ops == &TTSOpsMinimalTuple)
#define DN_DELETE 0x00000008
#define S_IWGRP (S_IWUSR >> 3)
#define MINIMAL_TUPLE_OFFSET ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) / MAXIMUM_ALIGNOF * MAXIMUM_ALIGNOF)
#define PG_INT16_MAX (0x7FFF)
#define HAVE_GCC__SYNC_CHAR_TAS 1
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define _PC_PATH_MAX _PC_PATH_MAX
#define SHAREDINVALRELCACHE_ID (-2)
#define _SIZE_T_ 
#define ReleaseSysCacheList(x) ReleaseCatCacheList(x)
#define PG_VERSION "14.5 (Ubuntu 14.5-0ubuntu0.22.04.1)"
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define O_CREAT 0100
#define F_SHLCK 8
#define ESHUTDOWN 108
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define SO_SNDTIMEO_NEW 67
#define Anum_pg_class_relhastriggers 21
#define AssertPointerAlignment(ptr,bndr) ((void)true)
#define __ULONGWORD_TYPE unsigned long int
#define ERRCODE_ARRAY_SUBSCRIPT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define F_SETOWN __F_SETOWN
#define EXPLAIN_H 
#define XATTR_LIST_MAX 65536
#define SHARD_SIZES_COLUMN_COUNT (3)
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define FRAMEOPTION_END_CURRENT_ROW 0x00400
#define __INT8_TYPE__ signed char
#define MAX_LOCKMODES 10
#define REGPROCARRAYOID 1008
#define XLogRecHasAnyBlockRefs(decoder) ((decoder)->max_block_id >= 0)
#define COLL_WEIGHTS_MAX 255
#define __ELF__ 1
#define ENOMEDIUM 123
#define SI_TKILL SI_TKILL
#define IntervalPGetDatum(X) PointerGetDatum(X)
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define PACKAGE_VERSION "14.5"
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define HASH_FUNCTION 0x0040
#define PG_TEMP_FILES_DIR "pgsql_tmp"
#define BTMaxStrategyNumber 5
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define BITS_PER_BITMAPWORD 64
#define JSONARRAYOID 199
#define RowExclusiveLock 3
#define Anum_pg_collation_oid 1
#define _BITS_TIME_H 1
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __FLT_RADIX__ 2
#define PG_INT16_MIN (-0x7FFF-1)
#define HEAP_XMIN_FROZEN (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)
#define __INT_LEAST16_TYPE__ short int
#define SCNoFAST8 "hho"
#define LOG_DESTINATION_CSVLOG 8
#define AI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("AI_IDN_ALLOW_UNASSIGNED is deprecated") 0x0100
#define ATTSTATSSLOT_VALUES 0x01
#define HAVE_USELOCALE 1
#define pg_nextpower2_size_t(num) pg_nextpower2_64(num)
#define __ARM_PCS_AAPCS64 1
#define LOG_DESTINATION_SYSLOG 2
#define ERRCODE_FDW_INVALID_USE_OF_NULL_POINTER MAKE_SQLSTATE('H','V','0','0','9')
#define SCNxLEAST16 "hx"
#define USE_UNNAMED_POSIX_SEMAPHORES 1
#define _POSIX_ARG_MAX 4096
#define BUS_ADRALN BUS_ADRALN
#define Anum_pg_class_relowner 6
#define S_LOCK_FREE(lock) (*(lock) == 0)
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define SCNx16 "hx"
#define CLOCK_MONOTONIC_RAW 4
#define RELSEG_SIZE 131072
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define OLD_SNAPSHOT_PADDING_ENTRIES 10
#define SAFE_STR_MIN_UPPERCASE ( 2 )
#define SO_PREFER_BUSY_POLL 69
#define is_absolute_path(filename) ( IS_DIR_SEP((filename)[0]) )
#define PG_PROCARRAYOID 272
#define _BITS_SIGSTACK_H 1
#define _POSIX_TIMEOUTS 200809L
#define TABLESPACE_VERSION_DIRECTORY "PG_" PG_MAJORVERSION "_" CppAsString2(CATALOG_VERSION_NO)
#define REGOPERATORARRAYOID 2209
#define SIGPIPE 13
#define AF_PACKET PF_PACKET
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define HeapTupleHeaderIsHotUpdated(tup) ( ((tup)->t_infomask2 & HEAP_HOT_UPDATED) != 0 && ((tup)->t_infomask & HEAP_XMAX_INVALID) == 0 && !HeapTupleHeaderXminInvalid(tup) )
#define VARSIZE(PTR) VARSIZE_4B(PTR)
#define __SIZEOF_PTHREAD_COND_T 48
#define _WCHAR_T_H 
#define Anum_pg_proc_proacl 30
#define Anum_pg_proc_oid 1
#define ERRCODE_FEATURE_NOT_SUPPORTED MAKE_SQLSTATE('0','A','0','0','0')
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK 3
#define SCNxLEAST64 __PRI64_PREFIX "x"
#define BYTEAOID 17
#define LSNOID PG_LSNOID
#define __sig_atomic_t_defined 1
#define PG_GETARG_VARCHAR_P_COPY(n) DatumGetVarCharPCopy(PG_GETARG_DATUM(n))
#define SCNx64 __PRI64_PREFIX "x"
#define XLR_NORMAL_MAX_BLOCK_ID 4
#define IP_RETOPTS 7
#define MaxTransactionId ((TransactionId) 0xFFFFFFFF)
#define __restrict_arr __restrict
#define Anum_pg_index_indimmediate 8
#define _SIGNAL_H 
#define ROW_PREFETCH_COUNT 50
#define _POSIX_SHELL 1
#define HASH_ALLOC 0x0200
#define PG_TOTAL_RELATION_SIZE_FUNCTION "pg_total_relation_size(%s)"
#define __LC_PAPER 7
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define RelationHasCascadedCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option == VIEW_OPTION_CHECK_OPTION_CASCADED)
#define __FLT16_IS_IEC_60559__ 2
#define __FLT16_MAX_EXP__ 16
#define INTERVAL_RANGE_MASK (0x7FFF)
#define __S_IWRITE 0200
#define EPROTO 71
#define INT16_WIDTH 16
#define LP_NORMAL 1
#define __S_IFDIR 0040000
#define PG_GETARG_ACLITEM_P(n) DatumGetAclItemP(PG_GETARG_DATUM(n))
#define likely(x) __builtin_expect((x) != 0, 1)
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define POLL_OUT POLL_OUT
#define for_both_cell(cell1,list1,initcell1,cell2,list2,initcell2) for (ForBothCellState cell1 ##__state = for_both_cell_setup(list1, initcell1, list2, initcell2); multi_for_advance_cell(cell1, cell1 ##__state, l1, i1), multi_for_advance_cell(cell2, cell1 ##__state, l2, i2), (cell1 != NULL && cell2 != NULL); cell1 ##__state.i1++, cell1 ##__state.i2++)
#define PF_PACKET 17
#define SHM_MQ_H 
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __INT_FAST8_TYPE__ signed char
#define RTBelowStrategyNumber 10
#define ATOMICS_H 
#define __U64_TYPE unsigned long int
#define IP_RECVOPTS 6
#define S_LOCK_H 
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define GUC_UNIT (GUC_UNIT_MEMORY | GUC_UNIT_TIME)
#define _PATH_NETWORKS "/etc/networks"
#define ACLITEM_GET_GOPTIONS(item) (((item).ai_privs >> 16) & 0xFFFF)
#define WORKER_DEFAULT_RACK "default"
#define PG_UINT32_MAX (0xFFFFFFFFU)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define HEAP_ONLY_TUPLE 0x8000
#define IP_MULTICAST_TTL 33
#define _PC_SYNC_IO _PC_SYNC_IO
#define SHAREDINVALCATALOG_ID (-1)
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define PG_GETARG_INT16(n) DatumGetInt16(PG_GETARG_DATUM(n))
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define HAVE_SPINLOCKS 1
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define XLogRecGetXid(decoder) ((decoder)->decoded_record->xl_xid)
#define HAVE_LONG_INT_64 1
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define SYNC_H 
#define CITUS_APPLICATION_NAME_PREFIX "citus_internal gpid="
#define RELPERSISTENCE_PERMANENT 'p'
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define FirstOffsetNumber ((OffsetNumber) 1)
#define PG_GETARG_INT32(n) DatumGetInt32(PG_GETARG_DATUM(n))
#define SCNuPTR __PRIPTR_PREFIX "u"
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define FIELDNO_TUPLETABLESLOT_TUPLEDESCRIPTOR 4
#define TIMETZARRAYOID 1270
#define pg_analyze_and_rewrite_fixedparams(a,b,c,d,e) pg_analyze_and_rewrite(a, b, c, d, e)
#define Anum_pg_ts_config_oid 1
#define NotifyQueueLock (&MainLWLockArray[27].lock)
#define INT_MIN (-INT_MAX - 1)
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define FRAMEOPTION_START_UNBOUNDED_PRECEDING 0x00020
#define HAVE_SYMLINK 1
#define _DIRENT_HAVE_D_TYPE 
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define PG_GETARG_INT64(n) DatumGetInt64(PG_GETARG_DATUM(n))
#define EL3RST 47
#define HOST_NOT_FOUND 1
#define ERRCODE_UNSAFE_NEW_ENUM_VALUE_USAGE MAKE_SQLSTATE('5','5','P','0','4')
#define Anum_pg_index_indnatts 3
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define HEAP_XMAX_IS_SHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_SHR_LOCK)
#define SOL_KCM 281
#define HAVE_PREAD 1
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define FRAMEOPTION_DEFAULTS (FRAMEOPTION_RANGE | FRAMEOPTION_START_UNBOUNDED_PRECEDING | FRAMEOPTION_END_CURRENT_ROW)
#define PD_PAGE_FULL 0x0002
#define PG_GETARG_BPCHAR_P_SLICE(n,a,b) DatumGetBpCharPSlice(PG_GETARG_DATUM(n),a,b)
#define WrapLimitsVacuumLock (&MainLWLockArray[46].lock)
#define si_value _sifields._rt.si_sigval
#define ERRCODE_OBJECT_IN_USE MAKE_SQLSTATE('5','5','0','0','6')
#define FullTransactionIdIsNormal(x) FullTransactionIdFollowsOrEquals(x, FirstNormalFullTransactionId)
#define ENOTDIR 20
#define HAVE_DECL_LLVMGETHOSTCPUNAME 1
#define HEAP_HASVARWIDTH 0x0002
#define TIMER_ABSTIME 1
#define __WCHAR_MB_LEN_MAX 16
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define Anum_pg_attribute_attlen 5
#define __PMT(args) args
#define llast_int(l) lfirst_int(list_last_cell(l))
#define HAVE_INET_ATON 1
#define _SYS_TYPES_H 1
#define AF_NETBEUI PF_NETBEUI
#define InvalidDsaPointer ((dsa_pointer) 0)
#define Anum_pg_publication_pubtruncate 8
#define VALUE_H 
#define RELKIND_RELATION 'r'
#define BKPIMAGE_APPLY 0x04
#define ENXIO 6
#define IPV6_RTHDR_LOOSE 0
#define __FLT64_HAS_QUIET_NAN__ 1
#define ERRCODE_DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST MAKE_SQLSTATE('2','B','0','0','0')
#define _SC_STREAMS _SC_STREAMS
#define SubtransSLRULock (&MainLWLockArray[12].lock)
#define TermTupleHashIterator(iter) ((void) 0)
#define PG_HAVE_ATOMIC_UNLOCKED_TEST_FLAG 
#define DatumGetTextP(X) ((text *) PG_DETOAST_DATUM(X))
#define SelfItemPointerAttributeNumber (-1)
#define L_XTND SEEK_END
#define __WALL 0x40000000
#define OPCLASS_ITEM_OPERATOR 1
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define __FP_FAST_FMAF64 1
#define FAPPEND O_APPEND
#define PRIXFAST8 "X"
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define POLYGONOID 604
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define PF_CAN 29
#define LOG 15
#define FIELDNO_EXPRSTATE_RESVALUE 3
#define INT8MULTIRANGEOID 4536
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define FIELDNO_AGGSTATE_CURPERTRANS 16
#define GUC_NO_RESET_ALL 0x0008
#define __stub___compat_get_kernel_syms 
#define IPV6_RECVFRAGSIZE 77
#define ERRCODE_UNDEFINED_TABLE MAKE_SQLSTATE('4','2','P','0','1')
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define __FLT64_HAS_INFINITY__ 1
#define POLL_HUP POLL_HUP
#define _STRING_H 1
#define HAVE_LIBM 1
#define fcGetArgNull(fc,n) ((fc)->args[n].isnull)
#define TABLEAM_H 
#define ERRCODE_MOST_SPECIFIC_TYPE_MISMATCH MAKE_SQLSTATE('2','2','0','0','G')
#define _XOPEN_REALTIME 1
#define FILENAME_MAX 4096
#define EEO_FLAG_IS_QUAL (1 << 0)
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define PublicationRelationId 6104
#define VARHDRSZ ((int32) sizeof(int32))
#define PG_HAVE_ATOMIC_WRITE_U32 
#define USE_LDAP 1
#define Anum_pg_publication_pubname 2
#define PRIoMAX __PRI64_PREFIX "o"
#define DatumGetVarCharPCopy(X) ((VarChar *) PG_DETOAST_DATUM_COPY(X))
#define COORDINATOR_GROUP_ID 0
#define _POSIX_MEMLOCK_RANGE 200809L
#define XACT_XINFO_HAS_TWOPHASE (1U << 4)
#define SerializableFinishedListLock (&MainLWLockArray[29].lock)
#define ProcedureRelationId 1255
#define FKCONSTR_MATCH_SIMPLE 's'
#define PG_DIAG_SOURCE_FILE 'F'
#define ACL_ALL_RIGHTS_FOREIGN_SERVER (ACL_USAGE)
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define LocalTransactionIdIsValid(lxid) ((lxid) != InvalidLocalTransactionId)
#define TCOPPROT_H 
#define FIELDNO_AGGSTATE_ALL_PERGROUPS 53
#define ANYCOMPATIBLEARRAYOID 5078
#define MONEYARRAYOID 791
#define PG_HAVE_ATOMIC_WRITE_U64 
#define SI_ASYNCIO SI_ASYNCIO
#define __BYTE_ORDER __LITTLE_ENDIAN
#define COLUMNAR_AM_NAME "columnar"
#define INT64_WIDTH 64
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define fmgr_info_set_expr(expr,finfo) ((finfo)->fn_expr = (expr))
#define NUMRANGEARRAYOID 3907
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define ERRCODE_SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','1')
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX (9223372036854775807L)
#define STRIPE_ROW_COUNT_MINIMUM 1000
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define lfourth_node(type,l) castNode(type, lfourth(l))
#define __UINT_FAST64_TYPE__ long unsigned int
#define HeapTupleSetHotUpdated(tuple) HeapTupleHeaderSetHotUpdated((tuple)->t_data)
#define RelationGetPartitionDesc_compat(a,b) RelationGetPartitionDesc(a, b)
#define pg_compiler_barrier() pg_compiler_barrier_impl()
#define _STATBUF_ST_RDEV 
#define __LDBL_REDIR_DECL(name) 
#define Anum_pg_class_relpages 10
#define UINT_FAST8_MAX (255)
#define __INT_MAX__ 0x7fffffff
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define RELATION_RESTRICTION_EQUIVALENCE_H 
#define Anum_pg_sequence_seqrelid 1
#define SOL_IUCV 277
#define HEAP_INSERT_SPECULATIVE 0x0010
#define SI_ASYNCNL SI_ASYNCNL
#define FIELDNO_FUNCTIONCALLINFODATA_ISNULL 4
#define TYPCATEGORY_TIMESPAN 'T'
#define _T_SIZE_ 
#define LLONG_MAX __LONG_LONG_MAX__
#define IN_CLASSC_NSHIFT 8
#define MaxHeapTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(SizeofHeapTupleHeader) + sizeof(ItemIdData))))
#define CREATE_OR_REPLACE_COMMAND "SELECT worker_create_or_replace_object(%s);"
#define PAIRINGHEAP_H 
#define GetPerTupleMemoryContext(estate) (GetPerTupleExprContext(estate)->ecxt_per_tuple_memory)
#define HAVE_EXPLICIT_BZERO 1
#define SHUT_WR SHUT_WR
#define XLogRecGetInfo(decoder) ((decoder)->decoded_record->xl_info)
#define LC_MEASUREMENT __LC_MEASUREMENT
#define __LC_NUMERIC 1
#define __INT64_TYPE__ long int
#define XLOG_XACT_PREPARE 0x10
#define ERRCODE_E_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','2')
#define HeapTupleHeaderIsSpeculative(tup) ( (ItemPointerGetOffsetNumberNoCheck(&(tup)->t_ctid) == SpecTokenOffsetNumber) )
#define UINT64_FORMAT "%" INT64_MODIFIER "u"
#define F_NOTIFY 1026
#define ITIMER_REAL ITIMER_REAL
#define HAVE_LINK 1
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define S_IRGRP (S_IRUSR >> 3)
#define _POSIX_SYMLINK_MAX 255
#define FLOAT4ARRAYOID 1021
#define MAX_CATALOG_MULTI_INSERT_BYTES 65535
#define pg_ntoh32(x) pg_bswap32(x)
#define UNIX_EPOCH_JDATE 2440588
#define LOCK_H_ 
#define ERRCODE_INVALID_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','0','C')
#define Anum_pg_attribute_attcompression 13
#define INSTR_TIME_SET_CURRENT(t) ((void) clock_gettime(PG_INSTR_CLOCK, &(t)))
#define _POSIX_V6_ILP32_OFF32 -1
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define BKI_DEFAULT(value) 
#define HAVE__BUILTIN_UNREACHABLE 1
#define EXEC_FLAG_BACKWARD 0x0004
#define MB_LEN_MAX 16
#define _POSIX_FSYNC 200809L
#define F_SEAL_GROW 0x0004
#define MemoryContextResetAndDeleteChildren(ctx) MemoryContextReset(ctx)
#define STDOUT_FILENO 1
#define ALLOCSET_SMALL_MINSIZE 0
#define __intptr_t_defined 
#define outerPlan(node) (((Plan *)(node))->lefttree)
#define GTSVECTORARRAYOID 3644
#define ERRCODE_ADMIN_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','1')
#define PRIiFAST16 __PRIPTR_PREFIX "i"
#define EREMOTEIO 121
#define OidGenLock (&MainLWLockArray[2].lock)
#define AT_STATX_DONT_SYNC 0x4000
#define HAVE_PLANNERINFO_TYPEDEF 1
#define ERRCODE_UNTRANSLATABLE_CHARACTER MAKE_SQLSTATE('2','2','P','0','5')
#define XLOG_XACT_COMMIT_PREPARED 0x30
#define PROARGMODE_VARIADIC 'v'
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define LOG_UTILS_H 
#define __USE_POSIX199309 1
#define RSIZE_MAX_MEM16 ( RSIZE_MAX_MEM/2 )
#define HAVE_MKDTEMP 1
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define MovedPartitionsOffsetNumber 0xfffd
#define SIGTSTP 20
#define HASH_TOKEN_COUNT INT64CONST(4294967296)
#define HEAP_XMAX_EXCL_LOCK 0x0040
#define PG_CATCH() } else { PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack
#define ERRCODE_DUPLICATE_OBJECT MAKE_SQLSTATE('4','2','7','1','0')
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define EMEDIUMTYPE 124
#define _POSIX_SIGQUEUE_MAX 32
#define RSIZE_MAX_MEM32 ( RSIZE_MAX_MEM/4 )
#define _POSIX_SEMAPHORES 200809L
#define __ATOMIC_RELAXED 0
#define llast_node(type,l) castNode(type, llast(l))
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define ESNULLP ( 400 )
#define SequenceRelationId 2224
#define SA_ONESHOT SA_RESETHAND
#define SCM_TIMESTAMPING_OPT_STATS 54
#define MULTI_JOIN_ORDER_H 
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define XATTR_NAME_MAX 255
#define LOCK_SH 1
#define _LIBC_LIMITS_H_ 1
#define HAVE_READV 1
#define SCNoFAST16 __PRIPTR_PREFIX "o"
#define HeapTupleAllFixed(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH))
#define SIGKILL 9
#define FRAMEOPTION_START_OFFSET_FOLLOWING 0x02000
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define __INT_LEAST32_TYPE__ int
#define SOL_CAIF 278
#define ECHRNG 44
#define FrozenTransactionId ((TransactionId) 2)
#define ARR_DATA_PTR(a) (((char *) (a)) + ARR_DATA_OFFSET(a))
#define USE_SSL 
#define HeapTupleHeaderClearHotUpdated(tup) ( (tup)->t_infomask2 &= ~HEAP_HOT_UPDATED )
#define PALLOC_H 
#define LOCK_MANAGER_LWLOCK_OFFSET (BUFFER_MAPPING_LWLOCK_OFFSET + NUM_BUFFER_PARTITIONS)
#define SCNiFAST16 __PRIPTR_PREFIX "i"
#define ERRCODE_FDW_FUNCTION_SEQUENCE_ERROR MAKE_SQLSTATE('H','V','0','1','0')
#define PRIoLEAST8 "o"
#define ENOLCK 37
#define StaticAssertDecl(condition,errmessage) _Static_assert(condition, errmessage)
#define MSG_DONTWAIT MSG_DONTWAIT
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define _XOPEN_UNIX 1
#define HAVE_UUID_E2FS 1
#define HAVE_SECURITY_PAM_APPL_H 1
#define TYPSTORAGE_PLAIN 'p'
#define SCNiFAST32 __PRIPTR_PREFIX "i"
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define INT_MAX __INT_MAX__
#define AI_PASSIVE 0x0001
#define __UINT_FAST8_TYPE__ unsigned char
#define DSA_ALLOC_HUGE 0x01
#define NON_PRUNABLE_JOIN -1
#define PF_RDS 21
#define __SI_ERRNO_THEN_CODE 1
#define INDEX_SIZE_MASK 0x1FFF
#define TUPDESC_H 
#define ARR_DATA_OFFSET(a) (ARR_HASNULL(a) ? (a)->dataoffset : ARR_OVERHEAD_NONULLS(ARR_NDIM(a)))
#define S_ISUID __S_ISUID
#define FIELDNO_TUPLETABLESLOT_ISNULL 6
#define TUPLESORT_H 
#define VARATT_IS_EXTERNAL_EXPANDED_RO(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RO)
#define VARATT_IS_EXTERNAL_EXPANDED_RW(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RW)
#define GET_TABLE_DDL_EVENTS "SELECT master_get_table_ddl_events('%s')"
#define SCNiFAST64 __PRI64_PREFIX "i"
#define __f128(x) x ##f128
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define VARDATA_SHORT(PTR) VARDATA_1B(PTR)
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define PLANNODES_H 
#define SCNuLEAST8 "hhu"
#define ENOTSUP EOPNOTSUPP
#define IP_CHECKSUM 23
#define ERRCODE_S_E_INVALID_SPECIFICATION MAKE_SQLSTATE('3','B','0','0','1')
#define FullTransactionIdIsValid(x) TransactionIdIsValid(XidFromFullTransactionId(x))
#define HAVE_RL_COMPLETION_APPEND_CHARACTER 1
#define _BITS_SIGTHREAD_H 1
#define _BITS_TYPES___LOCALE_T_H 1
#define toascii_l(c,l) __toascii_l ((c), (l))
#define Natts_pg_index 20
#define IndexTupleSize(itup) ((Size) ((itup)->t_info & INDEX_SIZE_MASK))
#define HEAP_XMAX_IS_KEYSHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_KEYSHR_LOCK)
#define WRITEBACK_MAX_PENDING_FLUSHES 256
#define ANYOID 2276
#define EDEADLOCK EDEADLK
#define CLD_DUMPED CLD_DUMPED
#define RTAdjacentStrategyNumber 17
#define FKCONSTR_MATCH_PARTIAL 'p'
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define __ULONG32_TYPE unsigned int
#define _BITS_BYTESWAP_H 1
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define _POSIX_MONOTONIC_CLOCK 0
#define __suseconds_t_defined 
#define FIELDNO_HEAPTUPLETABLESLOT_OFF 2
#define INDEX_VAR_MASK 0x4000
#define PG_RETURN_BOOL(x) return BoolGetDatum(x)
#define __off_t_defined 
#define ERRCODE_CONNECTION_FAILURE MAKE_SQLSTATE('0','8','0','0','6')
#define SK_SEARCHNULL 0x0040
#define GETSTRUCT(TUP) ((char *) ((TUP)->t_data) + (TUP)->t_data->t_hoff)
#define SIGPWR 30
#define MaxLockMode 8
#define XactCompletionRelcacheInitFileInval(xinfo) ((xinfo & XACT_COMPLETION_UPDATE_RELCACHE_FILE) != 0)
#define XLR_BLOCK_ID_DATA_SHORT 255
#define _GCC_SIZE_T 
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define PG_NODE_TREEOID 194
#define __INO64_T_TYPE __UQUAD_TYPE
#define HAVE_CLOCK_GETTIME 1
#define __W_CONTINUED 0xffff
#define L_SET SEEK_SET
#define __USE_XOPEN2K8XSI 1
#define SO_SNDTIMEO_OLD 21
#define ERRCODE_CRASH_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','2')
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define ULONG_WIDTH __WORDSIZE
#define PublicationObjectIndexId 6110
#define __size_t__ 
#define HAVE_LIBXML2 1
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define PageHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags & PD_HAS_FREE_LINES)
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define __TIME64_T_TYPE __TIME_T_TYPE
#define _PC_LINK_MAX _PC_LINK_MAX
#define __ONCE_FLAG_INIT { 0 }
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define REGOPERARRAYOID 2208
#define SYNC_METHOD_OPEN 2
#define AF_DECnet PF_DECnet
#define __LONG_WIDTH__ 64
#define __STDLIB_MB_LEN_MAX 16
#define Anum_pg_proc_prorettype 19
#define __S_IFIFO 0010000
#define DSA_ALLOC_NO_OOM 0x02
#define SUBQUERY_RELATION_ID 10000
#define ENOPROTOOPT 92
#define SearchSysCacheExists1(cacheId,key1) SearchSysCacheExists(cacheId, key1, 0, 0, 0)
#define SearchSysCacheExists2(cacheId,key1,key2) SearchSysCacheExists(cacheId, key1, key2, 0, 0)
#define SearchSysCacheExists3(cacheId,key1,key2,key3) SearchSysCacheExists(cacheId, key1, key2, key3, 0)
#define SearchSysCacheExists4(cacheId,key1,key2,key3,key4) SearchSysCacheExists(cacheId, key1, key2, key3, key4)
#define DO_AGGSPLIT_DESERIALIZE(as) (((as) & AGGSPLITOP_DESERIALIZE) != 0)
#define PG_GETARG_VARLENA_P(n) PG_DETOAST_DATUM(PG_GETARG_DATUM(n))
#define NormalTransactionIdFollows(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) > 0)
#define TYPSTORAGE_MAIN 'm'
#define BKPBLOCK_FLAG_MASK 0xF0
#define ERRCODE_COLLATION_MISMATCH MAKE_SQLSTATE('4','2','P','2','1')
#define __blkcnt_t_defined 
#define RelationHasCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option != VIEW_OPTION_CHECK_OPTION_NOT_SET)
#define EMFILE 24
#define ARR_LBOUND(a) ((int *) (((char *) (a)) + sizeof(ArrayType) + sizeof(int) * ARR_NDIM(a)))
#define MultiXactTruncationLock (&MainLWLockArray[41].lock)
#define HAVE_NETINET_TCP_H 1
#define MACADDR8ARRAYOID 775
#define SA_NODEFER 0x40000000
#define SK_ROW_HEADER 0x0004
#define BUFFER_MAPPING_LWLOCK_OFFSET NUM_INDIVIDUAL_LWLOCKS
#define STRINGINFO_H 
#define ERRCODE_INVALID_PSTATEMENT_DEFINITION MAKE_SQLSTATE('4','2','P','1','4')
#define MSG_EOR MSG_EOR
#define DATATYPE_TIMESTAMP_H 
#define VARSIZE_ANY(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR) : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR) : VARSIZE_4B(PTR)))
#define PERFORM_DELETION_CONCURRENT_LOCK 0x0020
#define STANDBY_SIGNAL_FILE "standby.signal"
#define ItemIdHasStorage(itemId) ((itemId)->lp_len != 0)
#define ACLITEM_ALL_GOPTION_BITS ((AclMode) 0xFFFF << 16)
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define dsa_allocate0(area,size) dsa_allocate_extended(area, size, DSA_ALLOC_ZERO)
#define ENOTEMPTY 39
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define Anum_pg_type_typdefaultbin 30
#define XID8ARRAYOID 271
#define PARSE_TYPE_H 
#define WORD_BIT 32
#define RELKIND_PARTITIONED_TABLE 'p'
#define ERRCODE_INVALID_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','1','9')
#define EXIT_FAILURE 1
#define FRAMEOPTION_END_OFFSET_PRECEDING 0x01000
#define Anum_pg_proc_probin 27
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define NUMMULTIRANGEARRAYOID 6151
#define SO_TIMESTAMPING_NEW 65
#define sigev_notify_function _sigev_un._sigev_thread._function
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define INTMAX_C(c) c ## L
#define HAVE_GETRUSAGE 1
#define ACLITEM_ALL_PRIV_BITS ((AclMode) 0xFFFF)
#define ILL_PRVOPC ILL_PRVOPC
#define XactTruncationLock (&MainLWLockArray[44].lock)
#define POSIX_FADV_RANDOM 1
#define type_is_array_domain(typid) (get_base_element_type(typid) != InvalidOid)
#define HAVE_DECL_LLVMGETHOSTCPUFEATURES 1
#define _STDINT_H 1
#define AccessShareLock 1
#define NUMERICARRAYOID 1231
#define __FILE_defined 1
#define PG_GETARG_TEXT_P_COPY(n) DatumGetTextPCopy(PG_GETARG_DATUM(n))
#define Anum_pg_attribute_atttypmod 9
#define COLLPROVIDER_DEFAULT 'd'
#define WL_SOCKET_READABLE (1 << 1)
#define NoLock 0
#define PG_HAVE_ATOMIC_SUB_FETCH_U32 
#define PG_DETOAST_DATUM_SLICE(datum,f,c) pg_detoast_datum_slice((struct varlena *) DatumGetPointer(datum), (int32) (f), (int32) (c))
#define Anum_pg_attribute_attstorage 12
#define SCM_TIMESTAMP SO_TIMESTAMP
#define ERRCODE_TOO_MANY_JSON_ARRAY_ELEMENTS MAKE_SQLSTATE('2','2','0','3','D')
#define ANYMULTIRANGEOID 4537
#define PageSizeIsValid(pageSize) ((pageSize) == BLCKSZ)
#define HAVE_X509_GET_SIGNATURE_NID 1
#define DATETIME_MIN_JULIAN (0)
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define _GETOPT_CORE_H 1
#define SI_TIMER SI_TIMER
#define VARDATA_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_data)
#define GUC_UNIT_MIN 0x30000
#define USE_DSM_SYSV 
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define PD_ALL_VISIBLE 0x0004
#define MinSizeOfXactAbort sizeof(xl_xact_abort)
#define PIV_REPORT_STAT (1 << 1)
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define InvalidXLogRecPtr 0
#define PQnoPasswordSupplied "fe_sendauth: no password supplied\n"
#define __SIZEOF_POINTER__ 8
#define IsolationIsSerializable() (XactIsoLevel == XACT_SERIALIZABLE)
#define __ATOMIC_SEQ_CST 5
#define ERRCODE_FDW_INVALID_ATTRIBUTE_VALUE MAKE_SQLSTATE('H','V','0','2','4')
#define ALLOCSET_SMALL_SIZES ALLOCSET_SMALL_MINSIZE, ALLOCSET_SMALL_INITSIZE, ALLOCSET_SMALL_MAXSIZE
#define __FLT32X_MIN_10_EXP__ (-307)
#define PRId16 "d"
#define FRAMEOPTION_EXCLUDE_TIES 0x20000
#define PF_IB 27
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define SIGTERM 15
#define ATTRIBUTE_FIXED_PART_SIZE (offsetof(FormData_pg_attribute,attcollation) + sizeof(Oid))
#define EKEYREVOKED 128
#define DatumGetByteaPSlice(X,m,n) ((bytea *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define PG_FUNCNAME_MACRO __func__
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define PRId32 "d"
#define __SI_BAND_TYPE long int
#define ERRCODE_FDW_INVALID_STRING_FORMAT MAKE_SQLSTATE('H','V','0','0','A')
#define SHAREDINVALSNAPSHOT_ID (-5)
#define ERRCODE_INVALID_RECURSION MAKE_SQLSTATE('4','2','P','1','9')
#define DT_FIFO DT_FIFO
#define UInt32GetDatum(X) ((Datum) (X))
#define PRIoPTR __PRIPTR_PREFIX "o"
#define DEFAULT_CHECKPOINT_FLUSH_AFTER 32
#define PACKAGE_URL "https://www.postgresql.org/"
#define GUC_UNIT_BLOCKS 0x2000
#define FORKNAMECHARS 4
#define PRId64 __PRI64_PREFIX "d"
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','1')
#define fetch_att(T,attbyval,attlen) ( (attbyval) ? ( (attlen) == (int) sizeof(Datum) ? *((Datum *)(T)) : ( (attlen) == (int) sizeof(int32) ? Int32GetDatum(*((int32 *)(T))) : ( (attlen) == (int) sizeof(int16) ? Int16GetDatum(*((int16 *)(T))) : ( AssertMacro((attlen) == 1), CharGetDatum(*((char *)(T))) ) ) ) ) : PointerGetDatum((char *) (T)) )
#define PROARGMODE_OUT 'o'
#define __POSIX2_THIS_VERSION 200809L
#define __ldiv_t_defined 1
#define EC_MUST_BE_REDUNDANT(eclass) ((eclass)->ec_has_const && !(eclass)->ec_below_outer_join)
#define ___int_ptrdiff_t_h 
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define IP_PMTUDISC_INTERFACE 4
#define SECS_PER_HOUR 3600
#define DatumGetArrayTypePCopy(X) ((ArrayType *) PG_DETOAST_DATUM_COPY(X))
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define PG_CLASS_D_H 
#define HeapTupleIsHotUpdated(tuple) HeapTupleHeaderIsHotUpdated((tuple)->t_data)
#define SO_PRIORITY 12
#define PERFORM_DELETION_SKIP_ORIGINAL 0x0008
#define F_SETOWN_EX __F_SETOWN_EX
#define ERRCODE_INVALID_PRECEDING_OR_FOLLOWING_SIZE MAKE_SQLSTATE('2','2','0','1','3')
#define PF_LOCAL 1
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define multi_for_advance_cell(cell,state,l,i) (cell = (state.l != NIL && state.i < state.l->length) ? &state.l->elements[state.i] : NULL)
#define FUNCTION_CALL_DELEGATION_H 
#define FIELDNO_MINIMALTUPLETABLESLOT_OFF 4
#define TIMESTAMPOID 1114
#define SOL_LLC 268
#define REGCOLLATIONOID 4191
#define EHWPOISON 133
#define Anum_pg_proc_proargnames 23
#define ERRCODE_INVALID_JSON_TEXT MAKE_SQLSTATE('2','2','0','3','2')
#define __DBL_MIN_EXP__ (-1021)
#define EMULTIHOP 72
#define ERRCODE_AMBIGUOUS_COLUMN MAKE_SQLSTATE('4','2','7','0','2')
#define ERRCODE_DUPLICATE_ALIAS MAKE_SQLSTATE('4','2','7','1','2')
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define MAX_FORKNUM INIT_FORKNUM
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __CFLOAT32 _Complex _Float32
#define F_SET_RW_HINT 1036
#define SCNuFAST32 __PRIPTR_PREFIX "u"
#define JSONPATHARRAYOID 4073
#define __DBL_DECIMAL_DIG__ 17
#define __FLT128_MAX_10_EXP__ 4932
#define OPCLASS_ITEM_STORAGETYPE 3
#define PVC_INCLUDE_PLACEHOLDERS 0x0010
#define outerPlanState(node) (((PlanState *)(node))->lefttree)
#define TupleGetDatum(_slot,_tuple) HeapTupleGetDatum(_tuple)
#define IP_PMTUDISC_OMIT 5
#define DatumGetHeapTupleHeader(X) ((HeapTupleHeader) PG_DETOAST_DATUM(X))
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define _SC_IPV6 _SC_IPV6
#define HeapTupleHeaderSetTypMod(tup,typmod) ( (tup)->t_choice.t_datum.datum_typmod = (typmod) )
#define RWH_WRITE_LIFE_SHORT 2
#define MCAST_JOIN_GROUP 42
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define restrict __restrict__
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define OIDVECTORARRAYOID 1013
#define VARATT_EXTERNAL_GET_EXTSIZE(toast_pointer) ((toast_pointer).va_extinfo & VARLENA_EXTSIZE_MASK)
#define _PTRDIFF_T_ 
#define __S64_TYPE long int
#define IP_TOS 1
#define SizeOfPageHeaderData (offsetof(PageHeaderData, pd_linp))
#define __SQUAD_TYPE long int
#define Anum_pg_ts_config_cfgparser 5
#define __CHAR_BIT__ 8
#define SO_DOMAIN 39
#define BeginCopyFrom_compat(a,b,c,d,e,f,g,h) BeginCopyFrom(a, b, c, d, e, f, g, h)
#define USE_OPENSSL 1
#define REMOTE_TRANSACTION_H 
#define heap_getattr(tup,attnum,tupleDesc,isnull) ( ((attnum) > 0) ? ( ((attnum) > (int) HeapTupleHeaderGetNatts((tup)->t_data)) ? getmissingattr((tupleDesc), (attnum), (isnull)) : fastgetattr((tup), (attnum), (tupleDesc), (isnull)) ) : heap_getsysattr((tup), (attnum), (tupleDesc), (isnull)) )
#define SHORTALIGN(LEN) TYPEALIGN(ALIGNOF_SHORT, (LEN))
#define ARR_HASNULL(a) ((a)->dataoffset != 0)
#define pairingheap_const_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, const pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((const type *) ((const char *) (ptr) - offsetof(type, membername))))
#define EREMCHG 78
#define Anum_pg_ts_config_cfgowner 4
#define PG_VERSION_STR "PostgreSQL 14.5 (Ubuntu 14.5-0ubuntu0.22.04.1) on aarch64-unknown-linux-gnu, compiled by gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0, 64-bit"
#define HASH_KEYCOPY 0x0100
#define SIGTTIN 21
#define EACCES 13
#define index_getattr(tup,attnum,tupleDesc,isnull) ( AssertMacro(PointerIsValid(isnull) && (attnum) > 0), *(isnull) = false, !IndexTupleHasNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup) + IndexInfoFindDataOffset((tup)->t_info) + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocache_index_getattr((tup), (attnum), (tupleDesc)) ) : ( (att_isnull((attnum)-1, (char *)(tup) + sizeof(IndexTupleData))) ? ( *(isnull) = true, (Datum)NULL ) : ( nocache_index_getattr((tup), (attnum), (tupleDesc)) ) ) )
#define InstrCountFiltered2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered2 += (delta); } while(0)
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define TRANSFER_MODE_BLOCK_WRITES 'b'
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define StaticAssertExpr(condition,errmessage) ((void) ({ StaticAssertStmt(condition, errmessage); true; }))
#define SPLICE_F_GIFT 8
#define __DADDR_T_TYPE __S32_TYPE
#define pg_attribute_cold __attribute__((cold))
#define _PROC_H_ 
#define ERRCODE_DATA_EXCEPTION MAKE_SQLSTATE('2','2','0','0','0')
#define INT8RANGEOID 3926
#define LOCKBIT_OFF(lockmode) (~(1 << (lockmode)))
#define PIPE_BUF 4096
#define IP_TTL 2
#define CHARARRAYOID 1002
#define DatumGetArrayTypeP(X) ((ArrayType *) PG_DETOAST_DATUM(X))
#define UInt64GetDatum(X) ((Datum) (X))
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define INET6_ADDRSTRLEN 46
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define MaxHeapTupleSize (BLCKSZ - MAXALIGN(SizeOfPageHeaderData + sizeof(ItemIdData)))
#define CHUNK_ROW_COUNT_MAXIMUM 100000
#define BKPBLOCK_HAS_DATA 0x20
#define PRIiLEAST8 "i"
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define __INT32_C(c) c
#define ERRCODE_TRANSACTION_ROLLBACK MAKE_SQLSTATE('4','0','0','0','0')
#define PF_DECnet 12
#define __ORDER_LITTLE_ENDIAN__ 1234
#define NUM_BUFFER_PARTITIONS 128
#define UINT_FAST16_WIDTH __WORDSIZE
#define HAVE_STRUCT_ADDRINFO 1
#define PG_GETARG_BYTEA_P_SLICE(n,a,b) DatumGetByteaPSlice(PG_GETARG_DATUM(n),a,b)
#define GUC_CUSTOM_PLACEHOLDER 0x0080
#define OLD_SNAPSHOT_TIME_MAP_ENTRIES (old_snapshot_threshold + OLD_SNAPSHOT_PADDING_ENTRIES)
#define pg_attribute_printf(f,a) __attribute__((format(PG_PRINTF_ATTRIBUTE, f, a)))
#define Anum_pg_index_indexrelid 1
#define __STATFS_MATCHES_STATFS64 1
#define InvalidSnapshot ((Snapshot) NULL)
#define XACT_REPEATABLE_READ 2
#define lsecond(l) lfirst(list_nth_cell(l, 1))
#define CREATE_SCHEMA_COMMAND "CREATE SCHEMA IF NOT EXISTS %s AUTHORIZATION %s"
#define Anum_pg_index_indcheckxmin 11
#define PG_SOMAXCONN 10000
#define IS_DUMMY_REL(r) is_dummy_rel(r)
#define BKPBLOCK_WILL_INIT 0x40
#define MovedPartitionsBlockNumber InvalidBlockNumber
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define XLogLogicalInfoActive() (wal_level >= WAL_LEVEL_LOGICAL)
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define ACL_SELECT_FOR_UPDATE ACL_UPDATE
#define Max(x,y) ((x) > (y) ? (x) : (y))
#define Anum_pg_class_relrowsecurity 23
#define HAVE_SYSLOG 1
#define IPV6_PMTUDISC_PROBE 3
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define LONG_WIDTH __WORDSIZE
#define FIELDNO_EXPRCONTEXT_DOMAINNULL 13
#define SEGV_BNDERR SEGV_BNDERR
#define TYPALIGN_DOUBLE 'd'
#define POSIX_COLLATION_OID 951
#define DEFAULT_TABLE_ACCESS_METHOD "heap"
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define lfirst_oid(lc) ((lc)->oid_value)
#define IPV6_UNICAST_IF 76
#define __O_NOFOLLOW 0100000
#define ngettext(msgid1,msgid2,n) dngettext (NULL, msgid1, msgid2, n)
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','5')
#define OIDOID 26
#define ERRCODE_INVALID_CURSOR_NAME MAKE_SQLSTATE('3','4','0','0','0')
#define PG_INT128_TYPE __int128
#define TRANSACTION_MANAGMENT_H 
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define CIRCLEARRAYOID 719
#define Anum_pg_class_relname 2
#define __CFLOAT128 _Complex _Float128
#define __SIG_ATOMIC_TYPE__ int
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __SVE_ZREGS_OFFSET 0
#define PG_VERSION_COMPAT_H 
#define __DBL_MIN_10_EXP__ (-307)
#define GAI_NOWAIT 1
#define h_errno (*__h_errno_location ())
#define TRACE_SORT 1
#define ERRCODE_ERROR_IN_ASSIGNMENT MAKE_SQLSTATE('2','2','0','0','5')
#define Anum_pg_proc_prokind 10
#define slist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, slist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define DEPENDENCY_H 
#define __FLT32X_MAX_EXP__ 1024
#define PG_SEQUENCE_D_H 
#define FunctionCall9(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) FunctionCall9Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define SOL_NETLINK 270
#define _SYS_SOCKET_H 1
#define __isascii_l(c,l) ((l), __isascii (c))
#define __GNUC_PATCHLEVEL__ 0
#define RTLessStrategyNumber 20
#define BKPBLOCK_HAS_IMAGE 0x10
#define IPV6_HOPOPTS 54
#define HAVE_NET_IF_H 1
#define _POSIX_TRACE_EVENT_FILTER -1
#define Min(x,y) ((x) < (y) ? (x) : (y))
#define ACL_REFERENCES_CHR 'x'
#define SO_SECURITY_AUTHENTICATION 22
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define PG_RETURN_CSTRING(x) return CStringGetDatum(x)
#define PG_MAJORVERSION_NUM 14
#define h_addr h_addr_list[0]
#define NameStr(name) ((name).data)
#define UINT8_WIDTH 8
#define REGPROCEDUREARRAYOID 2207
#define NameGetDatum(X) CStringGetDatum(NameStr(*(X)))
#define SCNdLEAST8 "hhd"
#define INVALID_SHARD_ID 0
#define _XOPEN_XCU_VERSION 4
#define ENOMEM 12
#define _SYS_TIME_H 1
#define _BITS_SOCKADDR_H 1
#define __INT_LEAST8_WIDTH__ 8
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define foreach_int(var,l) for (ListCell *(var ## CellDoNotUse) = list_head(l); (var ## CellDoNotUse) != NULL && (((var) = lfirst_int(var ## CellDoNotUse)) || true); var ## CellDoNotUse = lnext(l, var ## CellDoNotUse))
#define IPV6_MULTICAST_IF 17
#define for_each_cell(cell,lst,initcell) for (ForEachState cell ##__state = for_each_cell_setup(lst, initcell); (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define _XBS5_LPBIG_OFFBIG -1
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define VirtualTransactionIdIsRecoveredPreparedXact(vxid) ((vxid).backendId == InvalidBackendId)
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define S_IXOTH (S_IXGRP >> 3)
#define XACT_XINFO_HAS_RELFILENODES (1U << 2)
#define lfourth_oid(l) lfirst_oid(list_nth_cell(l, 3))
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define INT8MULTIRANGEARRAYOID 6157
#define ERRCODE_E_R_I_E_INVALID_SQLSTATE_RETURNED MAKE_SQLSTATE('3','9','0','0','1')
#define __ARM_FP 14
#define INT_FAST16_MAX (9223372036854775807L)
#define SIGSTKFLT 16
#define DatumGetUInt32(X) ((uint32) (X))
#define SRF_RETURN_NEXT_NULL(_funcctx) do { ReturnSetInfo *rsi; (_funcctx)->call_cntr++; rsi = (ReturnSetInfo *) fcinfo->resultinfo; rsi->isDone = ExprMultipleResult; PG_RETURN_NULL(); } while (0)
#define Anum_pg_type_typtypmod 27
#define _RPC_NETDB_H 1
#define HAVE_GCC__SYNC_INT64_CAS 1
#define SOCK_DCCP SOCK_DCCP
#define NAME_MAX 255
#define CommandIdGetDatum(X) ((Datum) (X))
#define TRANSFER_MODE_FORCE_LOGICAL 'l'
#define SCHAR_MAX __SCHAR_MAX__
#define Anum_pg_attribute_atthasmissing 16
#define PF_SECURITY 14
#define MaxAttrNumber 32767
#define IPV6_2292DSTOPTS 4
#define Anum_pg_attribute_attcollation 22
#define XLogArchivingActive() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode > ARCHIVE_MODE_OFF)
#define PG_DIAG_TABLE_NAME 't'
#define HAVE_DECL_PREADV 1
#define ENABLE_THREAD_SAFETY 1
#define HAVE_WCTYPE_H 1
#define NotifyQueueTailLock (&MainLWLockArray[47].lock)
#define LONG_MIN (-LONG_MAX - 1L)
#define ATTMAP_H 
#define DatumGetUInt64(X) ((uint64) (X))
#define _POSIX_THREAD_CPUTIME 0
#define DEFAULT_SYNC_METHOD PLATFORM_DEFAULT_SYNC_METHOD
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define ___int_size_t_h 
#define XLR_NORMAL_RDATAS 20
#define si_int _sifields._rt.si_sigval.sival_int
#define __unix 1
#define TYPEALIGN64(ALIGNVAL,LEN) (((uint64) (LEN) + ((ALIGNVAL) - 1)) & ~((uint64) ((ALIGNVAL) - 1)))
#define FirstGenbkiObjectId 10000
#define __UINT32_MAX__ 0xffffffffU
#define DSA_POINTER_FORMAT "%016" INT64_MODIFIER "x"
#define _BITS_SS_FLAGS_H 1
#define __TIMER_T_TYPE void *
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define PF_SMC 43
#define IPV6_DONTFRAG 62
#define _POSIX_PIPE_BUF 512
#define DatumGetHeapTupleHeaderCopy(X) ((HeapTupleHeader) PG_DETOAST_DATUM_COPY(X))
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
#define SO_NO_CHECK 11
#define SMGR_H 
#define UINT_FAST64_WIDTH 64
#define PROKIND_AGGREGATE 'a'
#define WUNTRACED 2
#define ERESTART 85
#define PRIiFAST64 __PRI64_PREFIX "i"
#define pg_attribute_format_arg(a) __attribute__((format_arg(a)))
#define NZERO 20
#define EISNAM 120
#define RTContainedByStrategyNumber 8
#define ALLOCSET_DEFAULT_SIZES ALLOCSET_DEFAULT_MINSIZE, ALLOCSET_DEFAULT_INITSIZE, ALLOCSET_DEFAULT_MAXSIZE
#define NULL ((void *)0)
#define __f64x(x) x ##f64x
#define ENOMSG 42
#define RENAME_EXCHANGE (1 << 1)
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define FIELDNO_EXPRSTATE_RESNULL 2
#define PG_TS_CONFIG_D_H 
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define AF_FILE PF_FILE
#define __USE_KERNEL_IPV6_DEFS 0
#define GUC_UNIT_S 0x20000
#define ERRCODE_FDW_UNABLE_TO_CREATE_EXECUTION MAKE_SQLSTATE('H','V','0','0','L')
#define VARATT_IS_EXTENDED(PTR) (!VARATT_IS_4B_U(PTR))
#define SYNC_METHOD_FSYNC 0
#define SpinLockFree(lock) S_LOCK_FREE(lock)
#define __INT64_C(c) c ## L
#define SCNuLEAST64 __PRI64_PREFIX "u"
#define HAVE_TYPEOF 1
#define att_align_nominal(cur_offset,attalign) ( ((attalign) == TYPALIGN_INT) ? INTALIGN(cur_offset) : (((attalign) == TYPALIGN_CHAR) ? (uintptr_t) (cur_offset) : (((attalign) == TYPALIGN_DOUBLE) ? DOUBLEALIGN(cur_offset) : ( AssertMacro((attalign) == TYPALIGN_SHORT), SHORTALIGN(cur_offset) ))) )
#define CREATE_TABLE_AS_COMMAND "CREATE TABLE %s (%s) AS (%s)"
#define RelationGetRelationName(relation) (NameStr((relation)->rd_rel->relname))
#define DSM_IMPL_SYSV 2
#define FRAMEOPTION_EXCLUDE_GROUP 0x10000
#define AttributeRelationId 1249
#define INVALID_PGPROCNO PG_INT32_MAX
#define WL_SOCKET_WRITEABLE (1 << 2)
#define CHECKPOINT_FLUSH_ALL 0x0010
#define BGW_EXTRALEN 128
#define NO_ADDRESS NO_DATA
#define Anum_pg_sequence_seqmin 6
#define COLUMNAR_BYTES_PER_PAGE (BLCKSZ - SizeOfPageHeaderData)
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define S_IRWXO (S_IRWXG >> 3)
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define BLCKSZ 8192
#define ClassTblspcRelfilenodeIndexId 3455
#define si_addr _sifields._sigfault.si_addr
#define DatumGetCommandId(X) ((CommandId) (X))
#define EAI_NOTCANCELED -102
#define RelationHasLocalCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option == VIEW_OPTION_CHECK_OPTION_LOCAL)
#define HAVE_INDEXOPTINFO_TYPEDEF 1
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define S_IFMT __S_IFMT
#define PG_RETURN_ACL_P(x) PG_RETURN_POINTER(x)
#define CLOCK_REALTIME 0
#define IS_VALID_TIMESTAMP(t) (MIN_TIMESTAMP <= (t) && (t) < END_TIMESTAMP)
#define FullTransactionIdFollows(a,b) ((a).value > (b).value)
#define SO_LOCK_FILTER 44
#define _PGTIME_H 
#define RELKIND_COMPOSITE_TYPE 'c'
#define __wint_t_defined 1
#define __MODE_T_TYPE __U32_TYPE
#define SO_ATTACH_BPF 50
#define ObjectAddressSubSet(addr,class_id,object_id,object_sub_id) do { (addr).classId = (class_id); (addr).objectId = (object_id); (addr).objectSubId = (object_sub_id); } while (0)
#define SEEK_SET 0
#define llast(l) lfirst(list_last_cell(l))
#define PARALLEL_H 
#define _SC_POLL _SC_POLL
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U32 
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define HAVE_READLINE_HISTORY_H 1
#define UINT_LEAST8_WIDTH 8
#define SetTuplestoreDestReceiverParams_compat(a,b,c,d,e,f) SetTuplestoreDestReceiverParams(a, b, c, d, e, f)
#define SizeOfXLogRecordBlockHeader (offsetof(XLogRecordBlockHeader, data_length) + sizeof(uint16))
#define ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('2','3','0','0','0')
#define HASH_SHARED_MEM 0x0800
#define BUFFERALIGN(LEN) TYPEALIGN(ALIGNOF_BUFFER, (LEN))
#define _LARGEFILE64_SOURCE 1
#define _BITS_UINTN_IDENTITY_H 1
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define DatumGetUInt16(X) ((uint16) (X))
#define CollationNameEncNspIndexId 3164
#define PG_RETURN_UINT16(x) return UInt16GetDatum(x)
#define ERRCODE_FLOATING_POINT_EXCEPTION MAKE_SQLSTATE('2','2','P','0','1')
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U64 
#define COLLPROVIDER_ICU 'i'
#define BIG_ENDIAN __BIG_ENDIAN
#define _POSIX2_BC_SCALE_MAX 99
#define si_status _sifields._sigchld.si_status
#define _BSD_SIZE_T_DEFINED_ 
#define DatumGetAclP(X) ((Acl *) PG_DETOAST_DATUM(X))
#define PG_ATTRIBUTE_D_H 
#define __FLT32_DIG__ 6
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define CStringGetTextDatum(s) PointerGetDatum(cstring_to_text(s))
#define ERRCODE_INVALID_COLUMN_DEFINITION MAKE_SQLSTATE('4','2','6','1','1')
#define __RLIM_T_MATCHES_RLIM64_T 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define toascii(c) __toascii (c)
#define SS_DISABLE SS_DISABLE
#define SO_TIMESTAMPING_OLD 37
#define AF_WANPIPE PF_WANPIPE
#define __FLT128_MAX_EXP__ 16384
#define EISDIR 21
#define isblank_l(c,l) __isblank_l ((c), (l))
#define TransactionIdIsNormal(xid) ((xid) >= FirstNormalTransactionId)
#define s6_addr16 __in6_u.__u6_addr16
#define HAVE_SRANDOM 1
#define RENAME_NOREPLACE (1 << 0)
#define PG_HAVE_ATOMIC_ADD_FETCH_U32 
#define ERRCODE_INVALID_GRANT_OPERATION MAKE_SQLSTATE('0','L','P','0','1')
#define INVALID_JOB_ID 0
#define PG_RETURN_UINT64(x) return UInt64GetDatum(x)
#define FD_H 
#define s6_addr32 __in6_u.__u6_addr32
#define LOCKBIT_ON(lockmode) (1 << (lockmode))
#define ClassOidIndexId 2662
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define __O_LARGEFILE 0
#define NIL ((List *) NULL)
#define _POSIX_NAME_MAX 14
#define __S_ISUID 04000
#define SCM_TXTIME SO_TXTIME
#define _ANSI_STDDEF_H 
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define DT_SOCK DT_SOCK
#define InvalidBackendId (-1)
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define SHMEM_INDEX_SIZE (64)
#define PRIi64 __PRI64_PREFIX "i"
#define CitusNewNode(size,tag) ({ CitusNode *_result; AssertMacro((size) >= sizeof(CitusNode)); _result = (CitusNode *) palloc0fast(size); _result->extensible.type = T_ExtensibleNode; _result->extensible.extnodename = CitusNodeTagNames[tag - CITUS_NODE_TAG_START]; _result->citus_tag =(int) (tag); _result; })
#define AttrNumberGetAttrOffset(attNum) ( AssertMacro(AttrNumberIsForUserDefinedAttr(attNum)), ((attNum) - 1) )
#define PG_RETURN_CHAR(x) return CharGetDatum(x)
#define Int64GetDatumFast(X) Int64GetDatum(X)
#define _BITS_STRUCT_STAT_H 1
#define _SC_MEMLOCK _SC_MEMLOCK
#define CLOCK_BOOTTIME_ALARM 9
#define __FLT32X_HAS_INFINITY__ 1
#define XLR_BLOCK_ID_TOPLEVEL_XID 252
#define Anum_pg_type_typispreferred 9
#define SO_ACCEPTCONN 30
#define UINT32_WIDTH 32
#define __INT32_MAX__ 0x7fffffff
#define DatumGetObjectId(X) ((Oid) (X))
#define __GLIBC_USE_DEPRECATED_GETS 0
#define SIGEV_NONE SIGEV_NONE
#define MAKE_SQLSTATE(ch1,ch2,ch3,ch4,ch5) (PGSIXBIT(ch1) + (PGSIXBIT(ch2) << 6) + (PGSIXBIT(ch3) << 12) + (PGSIXBIT(ch4) << 18) + (PGSIXBIT(ch5) << 24))
#define Anum_pg_sequence_seqstart 3
#define _SC_NL_NMAX _SC_NL_NMAX
#define SCNu16 "hu"
#define AGGSPLITOP_SKIPFINAL 0x02
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define PQfreeNotify(ptr) PQfreemem(ptr)
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define EINVAL 22
#define REGROLEOID 4096
#define Anum_pg_class_reloptions 32
#define PG_DETOAST_DATUM_PACKED(datum) pg_detoast_datum_packed((struct varlena *) DatumGetPointer(datum))
#define F_DUPFD 0
#define Anum_pg_class_relacl 31
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define __FLT128_IS_IEC_60559__ 2
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define ResetPerTupleExprContext(estate) do { if ((estate)->es_per_tuple_exprcontext) ResetExprContext((estate)->es_per_tuple_exprcontext); } while (0)
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define MULTI_UTILITY_H 
#define FLOAT8_FITS_IN_INT16(num) ((num) >= (float8) PG_INT16_MIN && (num) < -((float8) PG_INT16_MIN))
#define OID_MAX UINT_MAX
#define _POSIX_LOGIN_NAME_MAX 9
#define FPSIMD_MAGIC 0x46508001
#define pg_attribute_packed() __attribute__((packed))
#define ATTRIBUTE_IDENTITY_ALWAYS 'a'
#define _XBS5_ILP32_OFF32 -1
#define FNDELAY O_NDELAY
#define ProcArrayLock (&MainLWLockArray[4].lock)
#define __FLT64X_MIN_10_EXP__ (-4931)
#define INT64_C(c) c ## L
#define ADJ_MICRO 0x1000
#define TYPALIGN_INT 'i'
#define dlist_tail_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) dlist_tail_element_off(lhead, offsetof(type, membername))))
#define PRIXFAST64 __PRI64_PREFIX "X"
#define TupleDescAttr(tupdesc,i) (&(tupdesc)->attrs[(i)])
#define PGERROR 21
#define HeapTupleIsHeapOnly(tuple) HeapTupleHeaderIsHeapOnly((tuple)->t_data)
#define __attribute_const__ __attribute__ ((__const__))
#define ERRCODE_FDW_REPLY_HANDLE MAKE_SQLSTATE('H','V','0','0','K')
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define DO_AGGSPLIT_COMBINE(as) (((as) & AGGSPLITOP_COMBINE) != 0)
#define PERFORM_DELETION_CONCURRENTLY 0x0002
#define pg_restrict __restrict__
#define ___int_wchar_t_h 
#define __GCC_IEC_559_COMPLEX 2
#define HAVE_DECL_POSIX_FADVISE 1
#define HAVE_SYS_TYPES_H 1
#define XLOG_XACT_COMMIT 0x00
#define SRF_RETURN_NEXT(_funcctx,_result) do { ReturnSetInfo *rsi; (_funcctx)->call_cntr++; rsi = (ReturnSetInfo *) fcinfo->resultinfo; rsi->isDone = ExprMultipleResult; PG_RETURN_DATUM(_result); } while (0)
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ERRCODE_T_R_STATEMENT_COMPLETION_UNKNOWN MAKE_SQLSTATE('4','0','0','0','3')
#define EXPANDED_POINTER_SIZE (VARHDRSZ_EXTERNAL + sizeof(varatt_expanded))
#define __SAFE_TYPES_H__ 
#define PF_ISDN 34
#define TSM_HANDLEROID 3310
#define XLogArchiveCommandSet() (XLogArchiveCommand[0] != '\0')
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define POSIX_FADV_WILLNEED 3
#define RelationIsSecurityView(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options ? ((ViewOptions *) (relation)->rd_options)->security_barrier : false)
#define XLOG_XACT_INVALIDATIONS 0x60
#define BlockNumberIsValid(blockNumber) ((bool) ((BlockNumber) (blockNumber) != InvalidBlockNumber))
#define PG_HAVE_ATOMIC_FETCH_ADD_U32 
#define TRANSAM_H 
#define SCNxLEAST8 "hhx"
#define INT8OID 20
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define MSG_CTRUNC MSG_CTRUNC
#define UINT64CONST(x) (x ##UL)
#define IPPROTO_UDP IPPROTO_UDP
#define MSG_PROXY MSG_PROXY
#define HSEARCH_H 
#define PROVOLATILE_IMMUTABLE 'i'
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define TABLE_INSERT_NO_LOGICAL 0x0008
#define PG_RETURN_NAME(x) return NameGetDatum(x)
#define STDERR_FILENO 2
#define Int16GetDatum(X) ((Datum) (X))
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define Anum_pg_attribute_attnum 6
#define __FLT64_MAX_10_EXP__ 308
#define pg_ntoh16(x) pg_bswap16(x)
#define PRIdLEAST32 "d"
#define DLIST_STATIC_INIT(name) {{&(name).head, &(name).head}}
#define PG_HAVE_ATOMIC_FETCH_ADD_U64 
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define Anum_pg_attribute_attndims 7
#define ERRCODE_NON_UNIQUE_KEYS_IN_A_JSON_OBJECT MAKE_SQLSTATE('2','2','0','3','7')
#define HeapScanIsValid(scan) PointerIsValid(scan)
#define ERRCODE_UNTERMINATED_C_STRING MAKE_SQLSTATE('2','2','0','2','4')
#define Anum_pg_type_typalign 23
#define dsa_pointer_atomic_init pg_atomic_init_u64
#define DatumGetTimestamp(X) ((Timestamp) DatumGetInt64(X))
#define AF_SECURITY PF_SECURITY
#define STA_PPSTIME 0x0004
#define TYPTYPE_RANGE 'r'
#define PG_GETARG_ACL_P(n) DatumGetAclP(PG_GETARG_DATUM(n))
#define SO_DETACH_BPF SO_DETACH_FILTER
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define HAVE_STRTOULL 1
#define SI_QUEUE SI_QUEUE
#define UINTMAX_WIDTH 64
#define RelationAllowsEarlyPruning(rel) ( RelationIsPermanent(rel) && !IsCatalogRelation(rel) && !RelationIsAccessibleInLogicalDecoding(rel) )
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define VARATT_EXTERNAL_GET_COMPRESS_METHOD(toast_pointer) ((toast_pointer).va_extinfo >> VARLENA_EXTSIZE_BITS)
#define ERRCODE_DUPLICATE_PSTATEMENT MAKE_SQLSTATE('4','2','P','0','5')
#define PG_VERSION_16 160000
#define Anum_pg_index_indisprimary 6
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define IP_MTU_DISCOVER 10
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define HAVE_STRTOLL 1
#define IP_MINTTL 21
#define AF_RXRPC PF_RXRPC
#define VARATT_IS_EXTERNAL(PTR) VARATT_IS_1B_E(PTR)
#define PRIiFAST32 __PRIPTR_PREFIX "i"
#define __USE_XOPEN2K 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define FDW_HANDLEROID 3115
#define pg_ntoh64(x) pg_bswap64(x)
#define _SC_2_VERSION _SC_2_VERSION
#define __lldiv_t_defined 1
#define CIDROID 650
#define FIELDNO_NULLABLE_DATUM_DATUM 0
#define Anum_pg_class_relforcerowsecurity 24
#define elog(elevel,...) ereport(elevel, errmsg_internal(__VA_ARGS__))
#define pairingheap_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define SAFE_STR_MIN_LOWERCASE ( 2 )
#define PACKAGE_BUGREPORT "pgsql-bugs@lists.postgresql.org"
#define WL_SOCKET_CONNECTED WL_SOCKET_WRITEABLE
#define USHRT_WIDTH 16
#define EPIPE 32
#define TSRANGEOID 3908
#define ACL_ALL_RIGHTS_SEQUENCE (ACL_USAGE|ACL_SELECT|ACL_UPDATE)
#define TablespaceCreateLock (&MainLWLockArray[19].lock)
#define FALLOC_FL_INSERT_RANGE 0x20
#define TYPTYPE_PSEUDO 'p'
#define __FD_SETSIZE 1024
#define SOMAXCONN 4096
#define lfourth(l) lfirst(list_nth_cell(l, 3))
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define SI_USER SI_USER
#define DEVNULL "/dev/null"
#define EBADMSG 74
#define __USE_POSIX199506 1
#define ItemIdGetOffset(itemId) ((itemId)->lp_off)
#define AssertPendingSyncs_RelationCache() do {} while (0)
#define __INT_LEAST32_MAX__ 0x7fffffff
#define PG_VERSION_CONSTANTS 
#define ERRCODE_INVALID_TRANSACTION_TERMINATION MAKE_SQLSTATE('2','D','0','0','0')
#define TIMEOID 1083
#define EBFONT 59
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define CHECKPOINT_WAIT 0x0020
#define __DBL_MAX_EXP__ 1024
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define PARAM_FLAG_CONST 0x0001
#define HAVE_STRSIGNAL 1
#define __WCHAR_WIDTH__ 32
#define SEGV_ADIDERR SEGV_ADIDERR
#define MinCommandIdAttributeNumber (-3)
#define _BITS_WCHAR_H 1
#define IP_RECVERR 11
#define TABLE_METADATA_FIELDS 7
#define ERRCODE_SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED MAKE_SQLSTATE('2','5','0','0','7')
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define MAKEFUNC_H 
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define RelationGetRelid(relation) ((relation)->rd_id)
#define INT_LEAST8_MIN (-128)
#define TRANSFER_MODE_AUTOMATIC 'a'
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define ETOOMANYREFS 109
#define _POSIX_TZNAME_MAX 6
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define _POSIX_SSIZE_MAX 32767
#define pg_pwrite pwrite
#define MCAST_INCLUDE 1
#define TSConfigOidIndexId 3712
#define IPV6_UNICAST_HOPS 16
#define COMMERROR LOG_SERVER_ONLY
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define PF_QIPCRTR 42
#define ENABLE_GSS 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define Anum_pg_proc_protrftypes 25
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define sl_default_handler ignore_handler_s
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define EXFULL 54
#define RELAY_UTILITY_H 
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define SCNdFAST32 __PRIPTR_PREFIX "d"
#define PRIxMAX __PRI64_PREFIX "x"
#define _T_WCHAR 
#define AF_AX25 PF_AX25
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define CURSOR_OPT_GENERIC_PLAN 0x0200
#define _SC_BARRIERS _SC_BARRIERS
#define VERSION_COMPAT_H 
#define ACL_EXECUTE_CHR 'X'
#define ERRCODE_WARNING_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','1','0','0','C')
#define fcSetArg(fc,n,value) fcSetArgExt(fc, n, value, false)
#define st_atime st_atim.tv_sec
#define PARTITION_STRATEGY_LIST 'l'
#define __stub___compat_uselib 
#define SHAREDTUPLESTORE_H 
#define TUPLE_LOCK_FLAG_LOCK_UPDATE_IN_PROGRESS (1 << 0)
#define CITUS_RULEUTILS_H 
#define _POSIX_CPUTIME 0
#define __ARM_ALIGN_MAX_PWR 28
#define PageSetLSN(page,lsn) PageXLogRecPtrSet(((PageHeader) (page))->pd_lsn, lsn)
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define Anum_pg_class_relpartbound 33
#define FIELDNO_NULLABLE_DATUM_ISNULL 1
#define RelationNeedsWAL(relation) (RelationIsPermanent(relation) && (XLogIsNeeded() || (relation->rd_createSubid == InvalidSubTransactionId && relation->rd_firstRelfilenodeSubid == InvalidSubTransactionId)))
#define __f32x(x) x ##f32x
#define ERRCODE_INSUFFICIENT_PRIVILEGE MAKE_SQLSTATE('4','2','5','0','1')
#define ERRCODE_QUERY_CANCELED MAKE_SQLSTATE('5','7','0','1','4')
#define SCNu32 "u"
#define RELPERSISTENCE_TEMP 't'
#define WINT_MAX (4294967295u)
#define _BITS_POSIX2_LIM_H 1
#define HeapTupleHeaderSetNatts(tup,natts) ( (tup)->t_infomask2 = ((tup)->t_infomask2 & ~HEAP_NATTS_MASK) | (natts) )
#define UINTPTR_MAX (18446744073709551615UL)
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#define NETDB_INTERNAL -1
#define linitial_oid(l) lfirst_oid(list_nth_cell(l, 0))
#define HTUP_DETAILS_H 
#define GUC_LIST_QUOTE 0x0002
#define LC_MONETARY __LC_MONETARY
#define __ASM_GENERIC_POSIX_TYPES_H 
#define __USE_GNU 1
#define HEAP_XMAX_INVALID 0x0800
#define __FLT_MIN_EXP__ (-125)
#define JULIAN_MINMONTH (11)
#define HAVE_POSIX_FADVISE 1
#define lsecond_oid(l) lfirst_oid(list_nth_cell(l, 1))
#define WEXITED 4
#define IPV6_V6ONLY 26
#define REGPROCEDUREOID 2202
#define PIV_LOG_WARNING (1 << 0)
#define AF_PPPOX PF_PPPOX
#define TZ_STRLEN_MAX 255
#define IPV6_RECVRTHDR 56
#define HeapTupleHeaderSetHotUpdated(tup) ( (tup)->t_infomask2 |= HEAP_HOT_UPDATED )
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define HAVE_SYS_IPC_H 1
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define HAVE_RL_COMPLETION_SUPPRESS_QUOTE 1
#define AllocSizeIsValid(size) ((Size) (size) <= MaxAllocSize)
#define EKEYREJECTED 129
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _BSD_SIZE_T_ 
#define EQ_CRC32C(c1,c2) ((c1) == (c2))
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define CHECKPOINT_IMMEDIATE 0x0004
#define _LOCALE_H 1
#define MAXALIGN_DOWN(LEN) TYPEALIGN_DOWN(MAXIMUM_ALIGNOF, (LEN))
#define __INT_FAST64_TYPE__ long int
#define PG_DIST_PARTITION_H 
#define MCXT_ALLOC_ZERO 0x04
#define PG_RETURN_BYTEA_P(x) PG_RETURN_POINTER(x)
#define ACL_MODECHG_DEL 2
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define SHARDINTERVAL_UTILS_H_ 
#define __HAVE_DISTINCT_FLOAT32 0
#define WINT_MIN (0u)
#define TSQUERYARRAYOID 3645
#define MaxSizeOfXLogRecordBlockHeader (SizeOfXLogRecordBlockHeader + SizeOfXLogRecordBlockImageHeader + SizeOfXLogRecordBlockCompressHeader + sizeof(RelFileNode) + sizeof(BlockNumber))
#define __STRINGS_FORTIFIED 1
#define SCNxFAST32 __PRIPTR_PREFIX "x"
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define REL_HAS_ALL_PART_PROPS(rel) ((rel)->part_scheme && (rel)->boundinfo && (rel)->nparts > 0 && (rel)->part_rels && (rel)->partexprs && (rel)->nullable_partexprs)
#define INT64_FORMAT "%" INT64_MODIFIER "d"
#define IPV6_MTU 24
#define __mbstate_t_defined 1
#define TABLE_H 
#define IPV6_RECVDSTOPTS 58
#define SIG_ATOMIC_WIDTH 32
#define IPPROTO_MTP IPPROTO_MTP
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define __USE_XOPEN2KXSI 1
#define _XOPEN_LEGACY 1
#define __HAVE_DISTINCT_FLOAT64 0
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define __FLT_MIN_10_EXP__ (-37)
#define DatumGetTimestampTz(X) ((TimestampTz) DatumGetInt64(X))
#define __ASM_GENERIC_SOCKET_H 
#define BTLessStrategyNumber 1
#define __USE_UNIX98 1
#define CLOCK_REALTIME_ALARM 8
#define SpinLockAcquire(lock) S_LOCK(lock)
#define PG_END_TRY() } if (_do_rethrow) PG_RE_THROW(); PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack; } while (0)
#define TZDISP_LIMIT ((MAX_TZDISP_HOUR + 1) * SECS_PER_HOUR)
#define InvalidTransactionId ((TransactionId) 0)
#define ItemPointerGetOffsetNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetOffsetNumberNoCheck(pointer) )
#define PG_COPYRES_EVENTS 0x04
#define PROKIND_PROCEDURE 'p'
#define IPV6_RECVERR 25
#define SET_LOCKTAG_RELATION(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define AssertState(condition) ((void)true)
#define SIGNAL_ARGS int postgres_signal_arg
#define CHAR_MAX UCHAR_MAX
#define ScanDirectionIsNoMovement(direction) ((bool) ((direction) == NoMovementScanDirection))
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define FPE_INTDIV FPE_INTDIV
#define SEEK_DATA 3
#define IP_RECVTOS 13
#define ERRCODE_UNDEFINED_FUNCTION MAKE_SQLSTATE('4','2','8','8','3')
#define SIZE_WIDTH __WORDSIZE
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define ERRCODE_L_E_INVALID_SPECIFICATION MAKE_SQLSTATE('0','F','0','0','1')
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define COLUMNAR_POSTSCRIPT_SIZE_MAX 256
#define PG_NARGS() (fcinfo->nargs)
#define ACL_CREATE_CHR 'C'
#define INNER_VAR 65000
#define TRAP_HWBKPT TRAP_HWBKPT
#define EXECDESC_H 
#define HeapTupleHeaderGetRawXmax(tup) ( (tup)->t_choice.t_heap.t_xmax )
#define __REGISTER_PREFIX__ 
#define WORKER_DEFAULT_CLUSTER "default"
#define PF_ROSE 11
#define OIDARRAYOID 1028
#define HEAP_UPDATED 0x2000
#define BOOLOID 16
#define InvalidAttrNumber 0
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define VARATT_IS_EXTERNAL_NON_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && !VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SET_VARTAG_1B_E(PTR,tag) (((varattrib_1b_e *) (PTR))->va_header = 0x01, ((varattrib_1b_e *) (PTR))->va_tag = (tag))
#define _PC_MAX_CANON _PC_MAX_CANON
#define LMGR_H 
#define __USE_POSIX2 1
#define IP_TRANSPARENT 19
#define XLogRecGetData(decoder) ((decoder)->main_data)
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define PG_TEMP_FILE_PREFIX "pgsql_tmp"
#define FRAMEOPTION_END_UNBOUNDED_PRECEDING 0x00040
#define AARR_HASNULL(a) (VARATT_IS_EXPANDED_HEADER(a) ? ((a)->xpn.dvalues != NULL ? (a)->xpn.dnulls != NULL : ARR_HASNULL((a)->xpn.fvalue)) : ARR_HASNULL((ArrayType *) (a)))
#define _POSIX_V7_ILP32_OFF32 -1
#define TypeIsToastable(typid) (get_typstorage(typid) != TYPSTORAGE_PLAIN)
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define EMSGSIZE 90
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define ERRCODE_INVALID_ROW_COUNT_IN_LIMIT_CLAUSE MAKE_SQLSTATE('2','2','0','1','W')
#define SetInvalidVirtualTransactionId(vxid) ((vxid).backendId = InvalidBackendId, (vxid).localTransactionId = InvalidLocalTransactionId)
#define CHAR_MIN 0
#define XLogRecHasBlockRef(decoder,block_id) ((decoder)->blocks[block_id].in_use)
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define __FLT64_IS_IEC_60559__ 2
#define TransactionIdGetDatum(X) ((Datum) (X))
#define __VERSION__ "11.3.0"
#define SCNoLEAST8 "hho"
#define __IOV_MAX 1024
#define TXID_SNAPSHOTOID 2970
#define IP_PKTINFO 8
#define ACL_CONNECT (1<<11)
#define INT64CONST(x) (x ##L)
#define _SYS_CDEFS_H 1
#define INDEX_MAX_KEYS 32
#define RENAME_WHITEOUT (1 << 2)
#define PG_RETURN_OID(x) return ObjectIdGetDatum(x)
#define Anum_pg_index_indisclustered 9
#define MaxTupleAttributeNumber 1664
#define HEAP_HASNULL 0x0001
#define HAVE_SYS_SEM_H 1
#define HeapTupleHeaderGetRawXmin(tup) ( (tup)->t_choice.t_heap.t_xmin )
#define PG_PORT_H 
#define _POSIX_VERSION 200809L
#define AF_INET PF_INET
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define HEAP_DEFAULT_FILLFACTOR 100
#define CLOG_ZEROPAGE 0x00
#define INT_FAST8_WIDTH 8
#define __INT_WCHAR_T_H 
#define TwoPhaseStateLock (&MainLWLockArray[18].lock)
#define TRANSACTION_STATUS_IN_PROGRESS 0x00
#define copyObject(obj) ((typeof(obj)) copyObjectImpl(obj))
#define CREATE_SEQUENCE_COMMAND "CREATE SEQUENCE IF NOT EXISTS %s AS %s INCREMENT BY " INT64_FORMAT " MINVALUE " INT64_FORMAT " MAXVALUE " INT64_FORMAT " START WITH " INT64_FORMAT " CACHE " INT64_FORMAT " %sCYCLE"
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define FIELDNO_EXPRCONTEXT_AGGNULLS 9
#define __bitwise __bitwise__
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define ENOTSOCK 88
#define PG_DIAG_STATEMENT_POSITION 'P'
#define O_RDWR 02
#define ERRCODE_INVALID_ESCAPE_SEQUENCE MAKE_SQLSTATE('2','2','0','2','5')
#define TSTZRANGEOID 3910
#define _T_PTRDIFF_ 
#define HeapTupleHeaderClearHeapOnly(tup) ( (tup)->t_infomask2 &= ~HEAP_ONLY_TUPLE )
#define SOL_NFC 280
#define TEXTOID 25
#define ERRCODE_NULL_VALUE_NO_INDICATOR_PARAMETER MAKE_SQLSTATE('2','2','0','0','2')
#define BOXOID 603
#define __INTMAX_C(c) c ## L
#define XACT_COMPLETION_UPDATE_RELCACHE_FILE (1U << 30)
#define CLOG_H 
#define ERRCODE_INVALID_COLUMN_REFERENCE MAKE_SQLSTATE('4','2','P','1','0')
#define INT4ARRAYOID 1007
#define VARSIZE_EXTERNAL(PTR) (VARHDRSZ_EXTERNAL + VARTAG_SIZE(VARTAG_EXTERNAL(PTR)))
#define NormalTransactionIdPrecedes(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) < 0)
#define TRAP_TRACE TRAP_TRACE
#define XLR_CHECK_CONSISTENCY 0x02
#define __FLT32_MANT_DIG__ 24
#define RTNotEqualStrategyNumber 19
#define _SYS_SIZE_T_H 
#define SVE_VQ_MAX __SVE_VQ_MAX
#define WAIT_EVENT_SET_INDEX_FAILED -2
#define ERRCODE_INDETERMINATE_COLLATION MAKE_SQLSTATE('4','2','P','2','2')
#define PRIX8 "X"
#define SHRT_WIDTH 16
#define __STDC_IEC_60559_BFP__ 201404L
#define __SIZE_T__ 
#define IS_DIR_SEP(ch) ((ch) == '/')
#define FIELDNO_HEAPTUPLETABLESLOT_TUPLE 1
#define IP_PASSSEC 18
#define IPPORT_RESERVED 1024
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define PG_GETARG_UINT16(n) DatumGetUInt16(PG_GETARG_DATUM(n))
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define AI_ALL 0x0010
#define TIMEARRAYOID 1183
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define Anum_pg_collation_collowner 4
#define PG_GETARG_UINT32(n) DatumGetUInt32(PG_GETARG_DATUM(n))
#define ELOOP 40
#define BGWORKER_BYPASS_ALLOWCONN 1
#define WL_SOCKET_MASK (WL_SOCKET_READABLE | WL_SOCKET_WRITEABLE | WL_SOCKET_CONNECTED)
#define IS_SIMPLE_REL(rel) ((rel)->reloptkind == RELOPT_BASEREL || (rel)->reloptkind == RELOPT_OTHER_MEMBER_REL)
#define __FLT128_HAS_DENORM__ 1
#define F_SETFD 2
#define F_SETFL 4
#define _POSIX_RTSIG_MAX 8
#define RTRightStrategyNumber 5
#define __off64_t_defined 
#define ERRCODE_INVALID_ROLE_SPECIFICATION MAKE_SQLSTATE('0','P','0','0','0')
#define __F_GETSIG 11
#define CURSOR_OPT_FORCE_DISTRIBUTED 0x080000
#define PageSetHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags |= PD_HAS_FREE_LINES)
#define PG_ATTRIBUTEARRAYOID 270
#define USECS_PER_HOUR INT64CONST(3600000000)
#define __ORDER_PDP_ENDIAN__ 3412
#define SmgrIsTemp(smgr) RelFileNodeBackendIsTemp((smgr)->smgr_rnode)
#define GUC_DISALLOW_IN_FILE 0x0040
#define DT_NOBEGIN PG_INT64_MIN
#define FunctionCall1(flinfo,arg1) FunctionCall1Coll(flinfo, InvalidOid, arg1)
#define FunctionCall2(flinfo,arg1,arg2) FunctionCall2Coll(flinfo, InvalidOid, arg1, arg2)
#define FunctionCall3(flinfo,arg1,arg2,arg3) FunctionCall3Coll(flinfo, InvalidOid, arg1, arg2, arg3)
#define FunctionCall4(flinfo,arg1,arg2,arg3,arg4) FunctionCall4Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4)
#define FunctionCall5(flinfo,arg1,arg2,arg3,arg4,arg5) FunctionCall5Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define FunctionCall6(flinfo,arg1,arg2,arg3,arg4,arg5,arg6) FunctionCall6Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define FunctionCall7(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7) FunctionCall7Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define FunctionCall8(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) FunctionCall8Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define RelationIsPopulated(relation) ((relation)->rd_rel->relispopulated)
#define SVE_VQ_MIN __SVE_VQ_MIN
#define FORMAT_TYPE_INVALID_AS_NULL 0x08
#define OIDVECTOROID 30
#define ACL_ALL_RIGHTS_TABLESPACE (ACL_CREATE)
#define PF_ROUTE PF_NETLINK
#define GUC_REPORT 0x0010
#define __have_pthread_attr_t 1
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define ERRCODE_SQL_JSON_NUMBER_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','B')
#define __INT_FAST8_MAX__ 0x7f
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define _ANSI_STDARG_H_ 
#define Anum_pg_attribute_attidentity 17
#define PRIuFAST8 "u"
#define __FLT64X_HAS_DENORM__ 1
#define STDC_HEADERS 1
#define PROKIND_WINDOW 'w'
#define PF_KCM 41
#define ERRCODE_INVALID_XML_COMMENT MAKE_SQLSTATE('2','2','0','0','S')
#define RWH_WRITE_LIFE_MEDIUM 3
#define F_SETLK 6
#define PROVOLATILE_VOLATILE 'v'
#define HAVE_GETADDRINFO 1
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define VARATT_IS_1B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x01)
#define ERRCODE_IN_FAILED_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','2')
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define FPE_CONDTRAP FPE_CONDTRAP
#define FLOAT4_FITS_IN_INT16(num) ((num) >= (float4) PG_INT16_MIN && (num) < -((float4) PG_INT16_MIN))
#define PG_DETOAST_DATUM_COPY(datum) pg_detoast_datum_copy((struct varlena *) DatumGetPointer(datum))
#define HeapTupleHeaderIsHeapOnly(tup) ( ((tup)->t_infomask2 & HEAP_ONLY_TUPLE) != 0 )
#define GetSysCacheOid1(cacheId,oidcol,key1) GetSysCacheOid(cacheId, oidcol, key1, 0, 0, 0)
#define GetSysCacheOid2(cacheId,oidcol,key1,key2) GetSysCacheOid(cacheId, oidcol, key1, key2, 0, 0)
#define GetSysCacheOid3(cacheId,oidcol,key1,key2,key3) GetSysCacheOid(cacheId, oidcol, key1, key2, key3, 0)
#define GetSysCacheOid4(cacheId,oidcol,key1,key2,key3,key4) GetSysCacheOid(cacheId, oidcol, key1, key2, key3, key4)
#define O_SYNC 04010000
#define __HAVE_DISTINCT_FLOAT128 0
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define TYPTYPE_MULTIRANGE 'm'
#define MinSizeOfXactSubxacts offsetof(xl_xact_subxacts, subxacts)
#define IPV6_PKTINFO 50
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define VARATT_IS_4B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x00)
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define OidIsValid(objectId) ((bool) ((objectId) != InvalidOid))
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define FLOAT4_FITS_IN_INT32(num) ((num) >= (float4) PG_INT32_MIN && (num) < -((float4) PG_INT32_MIN))
#define PG_MAJORVERSION "14"
#define SIOCGSTAMP_OLD 0x8906
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define INDEXING_H 
#define REPLICA_IDENTITY_FULL 'f'
#define HeapTupleHeaderHasExternal(tup) (((tup)->t_infomask & HEAP_HASEXTERNAL) != 0)
#define GUC_check_errhint pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errhint_string = format_elog_string
#define ERRCODE_FDW_INVALID_OPTION_INDEX MAKE_SQLSTATE('H','V','0','0','C')
#define INT4MULTIRANGEOID 4451
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define AF_SMC PF_SMC
#define O_NOATIME __O_NOATIME
#define IOV_MAX __IOV_MAX
#define SO_RXQ_OVFL 40
#define AI_V4MAPPED 0x0008
#define RelationIsUsedAsCatalogTable(relation) ((relation)->rd_options && ((relation)->rd_rel->relkind == RELKIND_RELATION || (relation)->rd_rel->relkind == RELKIND_MATVIEW) ? ((StdRdOptions *) (relation)->rd_options)->user_catalog_table : false)
#define PRIdLEAST8 "d"
#define Anum_pg_proc_proparallel 16
#define INDEX_AM_RESERVED_BIT 0x2000
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define GUC_LIST_INPUT 0x0001
#define PG_GETARG_ARRAYTYPE_P_COPY(n) DatumGetArrayTypePCopy(PG_GETARG_DATUM(n))
#define IP_MULTICAST_IF 32
#define ACL_TRUNCATE_CHR 'D'
#define ACL_NUM(ACL) (ARR_DIMS(ACL)[0])
#define IP_DROP_MEMBERSHIP 36
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _ALLOCA_H 1
#define INT64_MODIFIER "l"
#define Anum_pg_proc_proargmodes 22
#define ERRCODE_INVALID_CURSOR_STATE MAKE_SQLSTATE('2','4','0','0','0')
#define __WINT_MIN__ 0U
#define ENAVAIL 119
#define PATHNODES_H 
#define TTS_FLAG_SLOW (1 << 3)
#define Natts_pg_dist_partition 6
#define EA_MAGIC 689375833
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define ENOSR 63
#define Anum_pg_collation_collencoding 7
#define pg_pread pread
#define PRIu16 "u"
#define Anum_pg_proc_prosrc 26
#define lthird_node(type,l) castNode(type, lthird(l))
#define PG_HAVE_ATOMIC_ADD_FETCH_U64 
#define __POSIX_FADV_NOREUSE 5
#define F_SETSIG __F_SETSIG
#define HAVE_TERMIOS_H 1
#define SHAREDFILESET_H 
#define HEAP_MOVED_OFF 0x4000
#define __GLIBC_USE_ISOC2X 1
#define CONDITION_VARIABLE_H 
#define PRIu32 "u"
#define ERRCODE_TOO_MANY_CONNECTIONS MAKE_SQLSTATE('5','3','3','0','0')
#define CV_MINIMAL_SIZE (sizeof(ConditionVariable) <= 16 ? 16 : 32)
#define IP_XFRM_POLICY 17
#define FUNC_MAX_ARGS 100
#define TSConfigNameNspIndexId 3608
#define __iovec_defined 1
#define InvalidRelation ((Relation) NULL)
#define TTS_FLAG_EMPTY (1 << 1)
#define ERRCODE_NOT_NULL_VIOLATION MAKE_SQLSTATE('2','3','5','0','2')
#define OPTIMIZER_H 
#define IN_CLASSA_MAX 128
#define VARHDRSZ_EXTERNAL offsetof(varattrib_1b_e, va_data)
#define NAMEDATALEN 64
#define _XOPEN_SOURCE_EXTENDED 1
#define HEAPAM_H 
#define INSTR_TIME_SET_ZERO(t) ((t).tv_sec = 0, (t).tv_nsec = 0)
#define Natts_pg_ts_config 5
#define DatumGetBpCharPP(X) ((BpChar *) PG_DETOAST_DATUM_PACKED(X))
#define SCNoMAX __PRI64_PREFIX "o"
#define PG_DIAG_SOURCE_LINE 'L'
#define INTPTR_MIN (-9223372036854775807L-1)
#define TABLE_INSERT_FROZEN 0x0004
#define PRIu64 __PRI64_PREFIX "u"
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define CLD_CONTINUED CLD_CONTINUED
#define TRAP_BRKPT TRAP_BRKPT
#define HAVE_RL_RESET_SCREEN_SIZE 1
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __AARCH64EL__ 1
#define DECLARE_ARRAY_FOREIGN_KEY(cols,reftbl,refcols) extern int no_such_variable
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define forboth_int_oid(var1,l1,var2,l2) for (ListCell *(var1 ## CellDoNotUse) = list_head(l1), *(var2 ## CellDoNotUse) = list_head(l2); (var1 ## CellDoNotUse) != NULL && (var2 ## CellDoNotUse) != NULL && (((var1) = lfirst_int(var1 ## CellDoNotUse)) || true) && (((var2) = lfirst_oid(var2 ## CellDoNotUse)) || true); var1 ## CellDoNotUse = lnext(l1, var1 ## CellDoNotUse), var2 ## CellDoNotUse = lnext(l2, var2 ## CellDoNotUse) )
#define MinTransactionIdAttributeNumber (-2)
#define PRIxLEAST16 "x"
#define PG_RETURN_ACLITEM_P(x) PG_RETURN_POINTER(x)
#define LINEOID 628
#define __timer_t_defined 1
#define __WCLONE 0x80000000
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define SEGV_ADIPERR SEGV_ADIPERR
#define FRAMEOPTION_EXCLUSION (FRAMEOPTION_EXCLUDE_CURRENT_ROW | FRAMEOPTION_EXCLUDE_GROUP | FRAMEOPTION_EXCLUDE_TIES)
#define ScanDirectionIsValid(direction) ((bool) (BackwardScanDirection <= (direction) && (direction) <= ForwardScanDirection))
#define DatumGetAclItemP(X) ((AclItem *) DatumGetPointer(X))
#define PRIxLEAST32 "x"
#define SNAPSHOT_H 
#define FETCH_ALL LONG_MAX
#define __WCHAR_MIN __WCHAR_MIN__
#define ItemPointerGetOffsetNumberNoCheck(pointer) ( (pointer)->ip_posid )
#define AssertMacro(condition) ((void)true)
#define ADJ_FREQUENCY 0x0002
#define HAVE_SYNC_FILE_RANGE 1
#define SIZEOF_LONG 8
#define BGW_DEFAULT_RESTART_INTERVAL 60
#define IPV6_RTHDRDSTOPTS 55
#define INT32_C(c) c
#define DsaPointerIsValid(x) ((x) != InvalidDsaPointer)
#define REGBUF_FORCE_IMAGE 0x01
#define Anum_pg_class_reltablespace 9
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define LOG_DESTINATION_EVENTLOG 4
#define ACLITEMOID 1033
#define PageSetPrunable(page,xid) do { Assert(TransactionIdIsNormal(xid)); if (!TransactionIdIsValid(((PageHeader) (page))->pd_prune_xid) || TransactionIdPrecedes(xid, ((PageHeader) (page))->pd_prune_xid)) ((PageHeader) (page))->pd_prune_xid = (xid); } while (0)
#define F_DUPFD_CLOEXEC 1030
#define HeapTupleHeaderGetUpdateXid(tup) ( (!((tup)->t_infomask & HEAP_XMAX_INVALID) && ((tup)->t_infomask & HEAP_XMAX_IS_MULTI) && !((tup)->t_infomask & HEAP_XMAX_LOCK_ONLY)) ? HeapTupleGetUpdateXid(tup) : HeapTupleHeaderGetRawXmax(tup) )
#define UINT_LEAST64_WIDTH 64
#define ERRCODE_FDW_INVALID_DESCRIPTOR_FIELD_IDENTIFIER MAKE_SQLSTATE('H','V','0','9','1')
#define __glibc_objsize0(__o) __bos0 (__o)
#define PG_INT8_MAX (0x7F)
#define PRIxLEAST64 __PRI64_PREFIX "x"
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define IPV6_JOIN_ANYCAST 27
#define MCAST_UNBLOCK_SOURCE 44
#define AutovacuumLock (&MainLWLockArray[22].lock)
#define IP_HDRINCL 3
#define IPV6_TCLASS 67
#define AF_SNA PF_SNA
#define pgoff_t off_t
#define __UINT_FAST16_TYPE__ long unsigned int
#define FirstBootstrapObjectId 12000
#define DECLARE_INDEX(name,oid,decl) extern int no_such_variable
#define MEMNODES_H 
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define ReplicationSlotAllocationLock (&MainLWLockArray[36].lock)
#define ERRCODE_SYSTEM_ERROR MAKE_SQLSTATE('5','8','0','0','0')
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define VA_ARGS_NARGS_(_01,_02,_03,_04,_05,_06,_07,_08,_09,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,N,...) (N)
#define ACL_UPDATE_CHR 'w'
#define _POSIX_RAW_SOCKETS 200809L
#define Anum_pg_attribute_attacl 23
#define DatumGetTextPP(X) ((text *) PG_DETOAST_DATUM_PACKED(X))
#define FKCONSTR_MATCH_FULL 'f'
#define ItemPointerIsValid(pointer) ((bool) (PointerIsValid(pointer) && ((pointer)->ip_posid != 0)))
#define RWH_WRITE_LIFE_NONE 1
#define TableOidAttributeNumber (-6)
#define TUPMACS_H 
#define Anum_pg_type_typnotnull 25
#define RTGreaterEqualStrategyNumber 23
#define __F_SETOWN 8
#define PRIX32 "X"
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define PF_ECONET 19
#define RELFILENODE_H 
#define RSIZE_MIN_STR ( 1 )
#define COLUMNAR_SETOPTIONS_HOOK_SYM "ColumnarTableSetOptions_hook"
#define HEAP_XMIN_COMMITTED 0x0100
#define EDEADLK 35
#define ERRCODE_CANNOT_COERCE MAKE_SQLSTATE('4','2','8','4','6')
#define S_INIT_LOCK(lock) S_UNLOCK(lock)
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define CIDARRAYOID 1012
#define pg_spin_delay_impl() ((void)0)
#define HAVE_UNIX_SOCKETS 1
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define INT_LEAST8_WIDTH 8
#define INT64_MAX (__INT64_C(9223372036854775807))
#define INT2VECTORARRAYOID 1006
#define htole16(x) __uint16_identity (x)
#define SIGCHLD 17
#define ERRCODE_TRIGGERED_ACTION_EXCEPTION MAKE_SQLSTATE('0','9','0','0','0')
#define MAXNAMLEN NAME_MAX
#define FirstLowInvalidHeapAttributeNumber (-7)
#define __INT16_TYPE__ short int
#define XLR_BLOCK_ID_DATA_LONG 254
#define PRIoFAST16 __PRIPTR_PREFIX "o"
#define GUC_NO_SHOW_ALL 0x0004
#define ERRCODE_TOO_MANY_ARGUMENTS MAKE_SQLSTATE('5','4','0','2','3')
#define __UINT8_MAX__ 0xff
#define MinSizeOfXactCommit (offsetof(xl_xact_commit, xact_time) + sizeof(TimestampTz))
#define OldSnapshotTimeMapLock (&MainLWLockArray[42].lock)
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define htole32(x) __uint32_identity (x)
#define SK_SEARCHARRAY 0x0020
#define PG_INT8_MIN (-0x7F-1)
#define HAVE_RL_COMPLETION_MATCHES 1
#define F_WRLCK 1
#define __LDBL_IS_IEC_60559__ 2
#define MONTHS_PER_YEAR 12
#define USER_LOCKMETHOD 2
#define FirstNormalTransactionId ((TransactionId) 3)
#define DSM_IMPL_WINDOWS 3
#define SIGSYS 31
#define linux 1
#define TIMESTAMP_NOBEGIN(j) do {(j) = DT_NOBEGIN;} while (0)
#define SA_NOCLDSTOP 1
#define ERRCODE_DUPLICATE_FILE MAKE_SQLSTATE('5','8','P','0','2')
#define ____FILE_defined 1
#define ERRCODE_FDW_SCHEMA_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','Q')
#define ILL_PRVREG ILL_PRVREG
#define htole64(x) __uint64_identity (x)
#define CITUS_LISTUTILS_H 
#define LSEGOID 601
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define Anum_pg_attribute_attnotnull 14
#define SA_INTERRUPT 0x20000000
#define MOD_ESTERROR ADJ_ESTERROR
#define O_LARGEFILE __O_LARGEFILE
#define EVENT_TRIGGEROID 3838
#define ITEM_H 
#define MCAST_MSFILTER 48
#define RTOldContainedByStrategyNumber 14
#define _VA_LIST_ 
#define ERRCODE_UNIQUE_VIOLATION MAKE_SQLSTATE('2','3','5','0','5')
#define SCNuFAST16 __PRIPTR_PREFIX "u"
#define ERRCODE_FDW_INVALID_DATA_TYPE MAKE_SQLSTATE('H','V','0','0','4')
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define _SC_PII_XTI _SC_PII_XTI
#define FKCONSTR_ACTION_SETDEFAULT 'd'
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define VARHDRSZ_COMPRESSED offsetof(varattrib_4b, va_compressed.va_data)
#define PG_BACKEND_VERSIONSTR "postgres (PostgreSQL) " PG_VERSION "\n"
#define LC_TELEPHONE __LC_TELEPHONE
#define COLUMNAR_H 
#define NI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("NI_IDN_ALLOW_UNASSIGNED is deprecated") 64
#define XLogRecGetRmid(decoder) ((decoder)->decoded_record->xl_rmid)
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define TIMESTAMP_IS_NOBEGIN(j) ((j) == DT_NOBEGIN)
#define ERRCODE_FDW_NO_SCHEMAS MAKE_SQLSTATE('H','V','0','0','P')
#define IPPROTO_MPLS IPPROTO_MPLS
#define BUS_ADRERR BUS_ADRERR
#define PG_DIAG_SOURCE_FUNCTION 'R'
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define BTEqualStrategyNumber 3
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define pg_bswap32(x) __builtin_bswap32(x)
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define ESOCKTNOSUPPORT 94
#define __INTPTR_TYPE__ long int
#define EWOULDBLOCK EAGAIN
#define FP_LOCK_SLOTS_PER_BACKEND 16
#define Anum_pg_type_typacl 32
#define POSTGRES_H 
#define PageGetSpecialPointer(page) ( AssertMacro(PageValidateSpecialPointer(page)), (char *) ((char *) (page) + ((PageHeader) (page))->pd_special) )
#define lfirst(lc) ((lc)->ptr_value)
#define Anum_pg_type_typstorage 24
#define Anum_pg_class_relallvisible 12
#define RELPERSISTENCE_UNLOGGED 'u'
#define __S_IFLNK 0120000
#define WL_EXIT_ON_PM_DEATH (1 << 5)
#define FLOAT8OID 701
#define list_make4_oid(x1,x2,x3,x4) list_make4_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3), list_make_oid_cell(x4))
#define InvalidLocalTransactionId 0
#define EDOTDOT 73
#define HASH_STRINGS 0x0010
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define intVal(v) (((Value *)(v))->val.ival)
#define INT_LEAST16_WIDTH 16
#define REGNAMESPACEOID 4089
#define HAVE_SHM_OPEN 1
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define CheckpointerCommLock (&MainLWLockArray[17].lock)
#define ACL_MODECHG_EQL 3
#define SO_PEEK_OFF 42
#define _WCHAR_T_DECLARED 
#define WNOWAIT 0x01000000
#define SCNxMAX __PRI64_PREFIX "x"
#define CMDTAG_H 
#define MultiXactIdGetDatum(X) ((Datum) (X))
#define EXEC_FLAG_MARK 0x0008
#define HEAP_XMAX_SHR_LOCK (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define _FCNTL_H 1
#define DSM_CREATE_NULL_IF_MAXSEGMENTS 0x0001
#define XLR_MAX_BLOCK_ID 32
#define GUC_UNIT_TIME 0xF0000
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define SET_LOCKTAG_TUPLE(locktag,dboid,reloid,blocknum,offnum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = (offnum), (locktag).locktag_type = LOCKTAG_TUPLE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define PRIXMAX __PRI64_PREFIX "X"
#define ERRCODE_T_R_SERIALIZATION_FAILURE MAKE_SQLSTATE('4','0','0','0','1')
#define EPROTONOSUPPORT 93
#define UINT_MAX (INT_MAX * 2U + 1U)
#define __itimerspec_defined 1
#define ACL_INSERT_CHR 'a'
#define INVERT_COMPARE_RESULT(var) ((var) = ((var) < 0) ? 1 : -(var))
#define ERRCODE_INVALID_TIME_ZONE_DISPLACEMENT_VALUE MAKE_SQLSTATE('2','2','0','0','9')
#define PROC_VACUUM_STATE_MASK (PROC_IN_VACUUM | PROC_IN_SAFE_IC | PROC_VACUUM_FOR_WRAPAROUND)
#define SAFE_STR_PASSWORD_MIN_LENGTH ( 6 )
#define IN_CLASSC_NET 0xffffff00
#define INT16_C(c) c
#define SCNoFAST32 __PRIPTR_PREFIX "o"
#define __SIGRTMAX 64
#define LONG_ALIGN_MASK (sizeof(long) - 1)
#define __USE_LARGEFILE64 1
#define __WINT_MAX__ 0xffffffffU
#define __FLT_MAX_EXP__ 128
#define att_align_pointer(cur_offset,attalign,attlen,attptr) ( ((attlen) == -1 && VARATT_NOT_PAD_BYTE(attptr)) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define Anum_pg_class_reloftype 5
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define IN_LOOPBACKNET 127
#define VARDATA_1B(PTR) (((varattrib_1b *) (PTR))->va_data)
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define HAVE_OPENSSL_INIT_SSL 1
#define Abs(x) ((x) >= 0 ? (x) : -(x))
#define PG_INSTR_CLOCK CLOCK_MONOTONIC
#define HEAP_INSERT_NO_LOGICAL TABLE_INSERT_NO_LOGICAL
#define __SVE_VQ_BYTES 16
#define SCNoFAST64 __PRI64_PREFIX "o"
#define XACT_XINFO_HAS_INVALS (1U << 3)
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define _POSIX_SEM_VALUE_MAX 32767
#define AF_ATMPVC PF_ATMPVC
#define LC_CTYPE __LC_CTYPE
#define SET_VARSIZE(PTR,len) SET_VARSIZE_4B(PTR, len)
#define CLOCK_BOOTTIME 7
#define _CTYPE_H 1
#define VARDATA_4B(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_data)
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define HAVE_RL_FILENAME_QUOTE_CHARACTERS 1
#define SHARED_TUPLESTORE_SINGLE_PASS 0x01
#define __BIT_TYPES_DEFINED__ 1
#define PG_HAVE_ATOMIC_FLAG_SUPPORT 
#define IP_OPTIONS 4
#define __WINT_WIDTH__ 32
#define NUM_FIXED_LWLOCKS (PREDICATELOCK_MANAGER_LWLOCK_OFFSET + NUM_PREDICATELOCK_PARTITIONS)
#define __struct_FILE_defined 1
#define lfirst_int(lc) ((lc)->int_value)
#define TUPLE_LOCK_FLAG_FIND_LAST_VERSION (1 << 1)
#define PG_COLLATION_D_H 
#define __S_ISVTX 01000
#define VARDATA_ANY(PTR) (VARATT_IS_1B(PTR) ? VARDATA_1B(PTR) : VARDATA_4B(PTR))
#define lthird_int(l) lfirst_int(list_nth_cell(l, 2))
#define foreach_current_index(cell) (cell ##__state.i)
#define ERRCODE_SQL_JSON_OBJECT_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','C')
#define palloc0fast(sz) ( MemSetTest(0, sz) ? MemoryContextAllocZeroAligned(CurrentMemoryContext, sz) : MemoryContextAllocZero(CurrentMemoryContext, sz) )
#define FIELDNO_EXPRCONTEXT_DOMAINDATUM 12
#define __SIGRTMIN 32
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define CURSOR_OPT_INSENSITIVE 0x0008
#define ROWID_VAR 65003
#define __FLT64X_IS_IEC_60559__ 2
#define HASH_FIXED_SIZE 0x2000
#define ERRCODE_WARNING_DEPRECATED_FEATURE MAKE_SQLSTATE('0','1','P','0','1')
#define IP_PMTUDISC 10
#define PG_HAVE_ATOMIC_INIT_FLAG 
#define ERRCODE_DUPLICATE_TABLE MAKE_SQLSTATE('4','2','P','0','7')
#define TYPCATEGORY_NETWORK 'I'
#define Anum_pg_class_reltype 4
#define ERRCODE_OBJECT_NOT_IN_PREREQUISITE_STATE MAKE_SQLSTATE('5','5','0','0','0')
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define IS_OTHER_REL(rel) ((rel)->reloptkind == RELOPT_OTHER_MEMBER_REL || (rel)->reloptkind == RELOPT_OTHER_JOINREL || (rel)->reloptkind == RELOPT_OTHER_UPPER_REL)
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define ACL_OPTION_TO_PRIVS(privs) (((AclMode) (privs) >> 16) & 0xFFFF)
#define AT_STATX_FORCE_SYNC 0x2000
#define __UINT8_C(c) c
#define ERRCODE_IO_ERROR MAKE_SQLSTATE('5','8','0','3','0')
#define dlist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, dlist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define ITUP_H 
#define PRIo64 __PRI64_PREFIX "o"
#define __cookie_io_functions_t_defined 1
#define MOD_MAXERROR ADJ_MAXERROR
#define TIMESTAMP_NOT_FINITE(j) (TIMESTAMP_IS_NOBEGIN(j) || TIMESTAMP_IS_NOEND(j))
#define WL_POSTMASTER_DEATH (1 << 4)
#define exec_subplan_get_plan(plannedstmt,subplan) ((Plan *) list_nth((plannedstmt)->subplans, (subplan)->plan_id - 1))
#define __UINT64_TYPE__ long unsigned int
#define SO_RCVTIMEO_NEW 66
#define __stub___compat_query_module 
#define __ARM_NEON 1
#define newNode(size,tag) ({ Node *_result; AssertMacro((size) >= sizeof(Node)); _result = (Node *) palloc0fast(size); _result->type = (tag); _result; })
#define NO_DATA 4
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define HEAP_INSERT_FROZEN TABLE_INSERT_FROZEN
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define SO_MEMINFO 55
#define ERRCODE_SQL_JSON_ARRAY_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','9')
#define ERRCODE_DUPLICATE_COLUMN MAKE_SQLSTATE('4','2','7','0','1')
#define __stack_t_defined 1
#define _POSIX_MAPPED_FILES 200809L
#define PG_TEXTDOMAIN(domain) (domain "-" PG_MAJORVERSION)
#define __FLT128_HAS_QUIET_NAN__ 1
#define PG_INDEX_D_H 
#define SCNdFAST16 __PRIPTR_PREFIX "d"
#define IPPROTO_IGMP IPPROTO_IGMP
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define Anum_pg_publication_pubdelete 7
#define PF_IUCV 32
#define SET_LOCKTAG_TRANSACTION(locktag,xid) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_TRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define PRIoFAST64 __PRI64_PREFIX "o"
#define AI_CANONNAME 0x0002
#define HAVE_SYS_PRCTL_H 1
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define pg_attribute_aligned(a) __attribute__((aligned(a)))
#define list_make_int_cell(v) ((ListCell) {.int_value = (v)})
#define S_IFLNK __S_IFLNK
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define __FLT64_HAS_DENORM__ 1
#define HAVE_DECL_LLVMCREATEPERFJITEVENTLISTENER 1
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define ESRMNT 69
#define IPV6_ROUTER_ALERT 22
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define CATVERSION_H 
#define USE_LZ4 1
#define RELKIND_TOASTVALUE 't'
#define _POSIX_MQ_PRIO_MAX 32
#define PRS2_OLD_VARNO 1
#define ERRCODE_CONFIGURATION_LIMIT_EXCEEDED MAKE_SQLSTATE('5','3','4','0','0')
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define ENOANO 55
#define INT_LEAST64_WIDTH 64
#define TABLESPACE_MAP_OLD "tablespace_map.old"
#define PG_GETARG_TIMESTAMP(n) DatumGetTimestamp(PG_GETARG_DATUM(n))
#define __SAFE_LIB_H__ 
#define fetchatt(A,T) fetch_att(T, (A)->attbyval, (A)->attlen)
#define REGBUF_WILL_INIT (0x04 | 0x02)
#define FORMAT_TYPE_TYPEMOD_GIVEN 0x01
#define innerPlanState(node) (((PlanState *)(node))->righttree)
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define strVal(v) (((Value *)(v))->val.str)
#define ERRCODE_FDW_INVALID_OPTION_NAME MAKE_SQLSTATE('H','V','0','0','D')
#define NUM_INDIVIDUAL_LWLOCKS 48
#define ALLOCSET_SMALL_MAXSIZE (8 * 1024)
#define RECORDOID 2249
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define SI_KERNEL SI_KERNEL
#define RTOldAboveStrategyNumber 30
#define _STRUCT_TIMESPEC 1
#define _POSIX_REENTRANT_FUNCTIONS 1
#define __mode_t_defined 
#define BGWORKER_SHMEM_ACCESS 0x0001
#define F_OFD_SETLKW 38
#define PLATFORM_DEFAULT_SYNC_METHOD SYNC_METHOD_FDATASYNC
#define MaxHeapAttributeNumber 1600
#define XACT_READ_UNCOMMITTED 0
#define DatumGetVarCharP(X) ((VarChar *) PG_DETOAST_DATUM(X))
#define USE_PREFETCH 
#define ESNODIFF ( 408 )
#define IP_RECVFRAGSIZE 25
#define SO_TIMESTAMPNS_OLD 35
#define PERFORM_DELETION_QUIETLY 0x0004
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define PRIdFAST32 __PRIPTR_PREFIX "d"
#define AI_CANONIDN 0x0080
#define EISCONN 106
#define PG_DATA_CHECKSUM_VERSION 1
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define SET_LOCKTAG_PAGE(locktag,dboid,reloid,blocknum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_PAGE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define PARAMS_H 
#define _ENDIAN_H 1
#define PG_RETURN_HEAPTUPLEHEADER(x) return HeapTupleHeaderGetDatum(x)
#define __glibc_has_builtin(name) __has_builtin (name)
#define _LFS_ASYNCHRONOUS_IO 1
#define Natts_pg_type 32
#define AF_UNIX PF_UNIX
#define IP_RECVRETOPTS IP_RETOPTS
#define IPPROTO_COMP IPPROTO_COMP
#define EUSERS 87
#define _VA_LIST_T_H 
#define __UINT16_TYPE__ short unsigned int
#define CASHOID MONEYOID
#define __PIC__ 2
#define PRIdFAST64 __PRI64_PREFIX "d"
#define XACT_SERIALIZABLE 3
#define pg_read_barrier() pg_read_barrier_impl()
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define list_make2_oid(x1,x2) list_make2_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2))
#define ItemPointerGetBlockNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetBlockNumberNoCheck(pointer) )
#define HAVE_GETHOSTBYNAME_R 1
#define TYPCATEGORY_GEOMETRIC 'G'
#define HAVE_DECL_STRTOLL 1
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define HEAP_XMAX_LOCK_ONLY 0x0080
#define __FP_FAST_FMA 1
#define SA_NOCLDWAIT 2
#define PG_HAVE_ATOMIC_UNLOCKED_WRITE_U32 
#define FIELDNO_EXPRSTATE_RESULTSLOT 4
#define pg_read_barrier_impl() __atomic_thread_fence(__ATOMIC_ACQUIRE)
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define fcSetArgNull(fc,n) fcSetArgExt(fc, n, (Datum) 0, true)
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define __INT32_TYPE__ int
#define FASYNC O_ASYNC
#define DatumGetBpCharP(X) ((BpChar *) PG_DETOAST_DATUM(X))
#define IPV6_PMTUDISC_WANT 1
#define SHAREDINVALRELMAP_ID (-4)
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK 5
#define ARR_NDIM(a) ((a)->ndim)
#define __SWORD_TYPE long int
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define be16toh(x) __bswap_16 (x)
#define EL3HLT 46
#define DECLARE_ARRAY_FOREIGN_KEY_OPT(cols,reftbl,refcols) extern int no_such_variable
#define PQTRACE_REGRESS_MODE (1<<1)
#define MCAST_BLOCK_SOURCE 43
#define _DIRENT_MATCHES_DIRENT64 1
#define NUM_LOCK_PARTITIONS (1 << LOG2_NUM_LOCK_PARTITIONS)
#define RTSameStrategyNumber 6
#define IN_CLASSA_NET 0xff000000
#define FLOAT4_FITS_IN_INT64(num) ((num) >= (float4) PG_INT64_MIN && (num) < -((float4) PG_INT64_MIN))
#define PG_RETURN_POINTER(x) return PointerGetDatum(x)
#define UINT8_C(c) c
#define FORMAT_OPERATOR_FORCE_QUALIFY 0x02
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define ARR_OVERHEAD_WITHNULLS(ndims,nitems) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims) + ((nitems) + 7) / 8)
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define _____fpos64_t_defined 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define ERRCODE_INVALID_CHARACTER_VALUE_FOR_CAST MAKE_SQLSTATE('2','2','0','1','8')
#define MINIMAL_TUPLE_PADDING ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) % MAXIMUM_ALIGNOF)
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define _POSIX_V7_ILP32_OFFBIG -1
#define __LDBL_REDIR2_DECL(name) 
#define _CS_V7_ENV _CS_V7_ENV
#define ESTRPIPE 86
#define __SC_THREAD_STACK_MIN_VALUE 75
#define ESPIPE 29
#define _XOPEN_LIM_H 1
#define si_call_addr _sifields._sigsys._call_addr
#define HEAP_LOCK_MASK (HEAP_XMAX_SHR_LOCK | HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define atooid(x) ((Oid) strtoul((x), NULL, 10))
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define RaiseDeferredError(error,elevel) do { RaiseDeferredErrorInternal(error, elevel); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) { pg_unreachable(); } } while (0)
#define PF_RXRPC 33
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define ALL_CONNECTION_FAILURE_ERRNOS EPIPE: case ECONNRESET: case ECONNABORTED: case EHOSTDOWN: case EHOSTUNREACH: case ENETDOWN: case ENETRESET: case ENETUNREACH
#define PG_LSNOID 3220
#define XLogIsNeeded() (wal_level >= WAL_LEVEL_REPLICA)
#define __INT16_C(c) c
#define SOL_AAL 265
#define ACL_SELECT_CHR 'r'
#define ERRCODE_WARNING_IMPLICIT_ZERO_BIT_PADDING MAKE_SQLSTATE('0','1','0','0','8')
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define _NETINET_IN_H 1
#define ERRCODE_SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION MAKE_SQLSTATE('4','2','0','0','0')
#define UUIDOID 2950
#define CITUS_NODES_H 
#define errno (*__errno_location ())
#define __LC_IDENTIFICATION 12
#define EADV 68
#define FLEXIBLE_ARRAY_MEMBER 
#define PROPARALLEL_SAFE 's'
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define _POSIX_TTY_NAME_MAX 9
#define PF_ATMPVC 8
#define _BITS_STAT_H 1
#define InitFunctionCallInfoData(Fcinfo,Flinfo,Nargs,Collation,Context,Resultinfo) do { (Fcinfo).flinfo = (Flinfo); (Fcinfo).context = (Context); (Fcinfo).resultinfo = (Resultinfo); (Fcinfo).fncollation = (Collation); (Fcinfo).isnull = false; (Fcinfo).nargs = (Nargs); } while (0)
#define PG_HAVE_ATOMIC_CLEAR_FLAG 
#define PG_GETARG_VARCHAR_P_SLICE(n,a,b) DatumGetVarCharPSlice(PG_GETARG_DATUM(n),a,b)
#define PG_DDL_COMMANDOID 32
#define Anum_pg_proc_proisstrict 13
#define ENOPKG 65
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define AF_X25 PF_X25
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define INSTR_TIME_GET_DOUBLE(t) (((double) (t).tv_sec) + ((double) (t).tv_nsec) / 1000000000.0)
#define ARRAY_H 
#define CLD_KILLED CLD_KILLED
#define __SIZEOF_WCHAR_T__ 4
#define SK_ROW_END 0x0010
#define SHUT_RD SHUT_RD
#define VARLENA_EXTSIZE_BITS 30
#define RTContainsElemStrategyNumber 16
#define TIMESTAMP_END_JULIAN (109203528)
#define Anum_pg_proc_proname 2
#define REGCONFIGOID 3734
#define ERRCODE_INVALID_FUNCTION_DEFINITION MAKE_SQLSTATE('4','2','P','1','3')
#define AF_IPX PF_IPX
#define IPV6_MULTICAST_ALL 29
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define FIELDNO_HEAPTUPLEDATA_DATA 3
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define REFCURSOROID 1790
#define ERRCODE_SUBSTRING_ERROR MAKE_SQLSTATE('2','2','0','1','1')
#define FIELDNO_EXPRCONTEXT_INNERTUPLE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define PG_HAS_OPCLASS_OPTIONS() has_fn_opclass_options(fcinfo->flinfo)
#define HTMaxStrategyNumber 1
#define ENOTUNIQ 76
#define _PWD_H 1
#define PROCLOCK_LOCKMETHOD(proclock) LOCK_LOCKMETHOD(*((proclock).tag.myLock))
#define GetCTETargetList(cte) (AssertMacro(IsA((cte)->ctequery, Query)), ((Query *) (cte)->ctequery)->commandType == CMD_SELECT ? ((Query *) (cte)->ctequery)->targetList : ((Query *) (cte)->ctequery)->returningList)
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define SOL_ALG 279
#define IsolationUsesXactSnapshot() (XactIsoLevel >= XACT_REPEATABLE_READ)
#define AT_EMPTY_PATH 0x1000
#define __INT_LEAST64_WIDTH__ 64
#define INT_LEAST16_MAX (32767)
#define Anum_pg_index_indisunique 5
#define MAX_NODE_LENGTH 255
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define _GNU_SOURCE 1
#define _POSIX_SAVED_IDS 1
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define __POSIX_FADV_DONTNEED 4
#define SK_SEARCHNOTNULL 0x0080
#define NI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("NI_IDN_USE_STD3_ASCII_RULES is deprecated") 128
#define PageClearFull(page) (((PageHeader) (page))->pd_flags &= ~PD_PAGE_FULL)
#define PG_CLASS_H 
#define FIELDNO_EXPRCONTEXT_CASENULL 11
#define IndexIndrelidIndexId 2678
#define TYPCATEGORY_DATETIME 'D'
#define __U32_TYPE unsigned int
#define HAVE_SYS_SELECT_H 1
#define _STDLIB_H 1
#define IP_RECVERR_RFC4884 26
#define _BITS_FLOATN_COMMON_H 
#define IP_UNBLOCK_SOURCE 37
#define Anum_pg_publication_oid 1
#define REGCOLLATIONARRAYOID 4192
#define PG_GETARG_POINTER(n) DatumGetPointer(PG_GETARG_DATUM(n))
#define __LC_MONETARY 4
#define CppAsString(identifier) #identifier
#define si_timerid _sifields._timer.si_tid
#define __FLT16_HAS_DENORM__ 1
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define O_NOCTTY 0400
#define _STDBOOL_H 
#define __ARM_SIZEOF_WCHAR_T 4
#define HAVE_STRING_H 1
#define __ATOMIC_ACQUIRE 2
#define RELKIND_HAS_STORAGE(relkind) ((relkind) == RELKIND_RELATION || (relkind) == RELKIND_INDEX || (relkind) == RELKIND_SEQUENCE || (relkind) == RELKIND_TOASTVALUE || (relkind) == RELKIND_MATVIEW)
#define GAI_WAIT 0
#define IP_DEFAULT_MULTICAST_TTL 1
#define ATTNUM_H 
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __uid_t_defined 
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define LLONG_WIDTH 64
#define EUNATCH 49
#define SOL_ATM 264
#define MemoryContextIsValid(context) ((context) != NULL && (IsA((context), AllocSetContext) || IsA((context), SlabContext) || IsA((context), GenerationContext)))
#define INT_LEAST16_MIN (-32767-1)
#define USE_ICU 1
#define LWLOCK_H 
#define __flexarr []
#define fcSetArgExt(fc,n,val,is_null) (((fc)->args[n].isnull = (is_null)), ((fc)->args[n].value = (val)))
#define ACL_TRIGGER_CHR 't'
#define BlockIdCopy(toBlockId,fromBlockId) ( AssertMacro(PointerIsValid(toBlockId)), AssertMacro(PointerIsValid(fromBlockId)), (toBlockId)->bi_hi = (fromBlockId)->bi_hi, (toBlockId)->bi_lo = (fromBlockId)->bi_lo )
#define _SC_LONG_BIT _SC_LONG_BIT
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define __socklen_t_defined 
#define O_ACCMODE 0003
#define SIG_HOLD ((__sighandler_t) 2)
#define AF_XDP PF_XDP
#define FIOGETOWN 0x8903
#define ERRCODE_UNDEFINED_OBJECT MAKE_SQLSTATE('4','2','7','0','4')
#define ELIBMAX 82
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ERRCODE_INVALID_ARGUMENT_FOR_LOG MAKE_SQLSTATE('2','2','0','1','E')
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define VARBITOID 1562
#define Anum_pg_attribute_attinhcount 21
#define _SC_2_C_DEV _SC_2_C_DEV
#define __SIZEOF_PTHREAD_ATTR_T 64
#define NAMESPACE_H 
#define bool _Bool
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define GetPGProcByNumber(n) (&ProcGlobal->allProcs[(n)])
#define ALLOCSET_START_SMALL_SIZES ALLOCSET_SMALL_MINSIZE, ALLOCSET_SMALL_INITSIZE, ALLOCSET_DEFAULT_MAXSIZE
#define SizeofMinimalTupleHeader offsetof(MinimalTupleData, t_bits)
#define FRAMEOPTION_BETWEEN 0x00010
#define vsnprintf pg_vsnprintf
#define _GETOPT_POSIX_H 1
#define LC_ALL __LC_ALL
#define _XOPEN_SOURCE 700
#define _POSIX2_BC_DIM_MAX 2048
#define EILSEQ 84
#define SOL_PPPOL2TP 273
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define Anum_pg_attribute_attfdwoptions 25
#define SCNxFAST8 "hhx"
#define __OFF_T_MATCHES_OFF64_T 1
#define SET_LOCKTAG_OBJECT(locktag,dboid,classoid,objoid,objsubid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (classoid), (locktag).locktag_field3 = (objoid), (locktag).locktag_field4 = (objsubid), (locktag).locktag_type = LOCKTAG_OBJECT, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define list_make5_int(x1,x2,x3,x4,x5) list_make5_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3), list_make_int_cell(x4), list_make_int_cell(x5))
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define IN_MULTICAST(a) IN_CLASSD(a)
#define OPEN_DATASYNC_FLAG O_DSYNC
#define PRIdMAX __PRI64_PREFIX "d"
#define __WCHAR_MAX__ 0xffffffffU
#define AF_APPLETALK PF_APPLETALK
#define IS_JOIN_REL(rel) ((rel)->reloptkind == RELOPT_JOINREL || (rel)->reloptkind == RELOPT_OTHER_JOINREL)
#define TTS_FLAG_SHOULDFREE (1 << 2)
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define PG_BRIN_MINMAX_MULTI_SUMMARYOID 4601
#define LANGUAGE_HANDLEROID 2280
#define relpathbackend(rnode,backend,forknum) GetRelationPath((rnode).dbNode, (rnode).spcNode, (rnode).relNode, backend, forknum)
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define ADJ_ESTERROR 0x0008
#define NUMERICOID 1700
#define HeapTupleHeaderGetXmin(tup) ( HeapTupleHeaderXminFrozen(tup) ? FrozenTransactionId : HeapTupleHeaderGetRawXmin(tup) )
#define LIBPQ_FE_H 
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define XLOGINSERT_H 
#define TABLE_INSERT_SKIP_FSM 0x0002
#define PD_HAS_FREE_LINES 0x0001
#define ERRCODE_FOREIGN_KEY_VIOLATION MAKE_SQLSTATE('2','3','5','0','3')
#define BKPBLOCK_FORK_MASK 0x0F
#define _IOFBF 0
#define _POSIX2_BC_STRING_MAX 1000
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define COLUMNAR_POSTSCRIPT_SIZE_LENGTH 1
#define VARBITARRAYOID 1563
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define SHARDID_SEQUENCE_NAME "pg_dist_shardid_seq"
#define RowMarkRequiresRowShareLock(marktype) ((marktype) <= ROW_MARK_KEYSHARE)
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define FRAMEOPTION_END_UNBOUNDED_FOLLOWING 0x00100
#define SO_SELECT_ERR_QUEUE 45
#define SIGXCPU 24
#define ANYCOMPATIBLERANGEOID 5080
#define FALLOC_FL_PUNCH_HOLE 0x02
#define F_GETPIPE_SZ 1032
#define SLIST_STATIC_INIT(name) {{NULL}}
#define _ISOC2X_SOURCE 1
#define XATTR_SIZE_MAX 65536
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define HAVE_POLL_H 1
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define ANYELEMENTOID 2283
#define HAVE_LIBREADLINE 1
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define VA_ARGS_NARGS(...) VA_ARGS_NARGS_(__VA_ARGS__, 63,62,61,60, 59,58,57,56,55,54,53,52,51,50, 49,48,47,46,45,44,43,42,41,40, 39,38,37,36,35,34,33,32,31,30, 29,28,27,26,25,24,23,22,21,20, 19,18,17,16,15,14,13,12,11,10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#define PG_COPYRES_ATTRS 0x01
#define PVC_RECURSE_PLACEHOLDERS 0x0020
#define PRIo32 "o"
#define __COMPAR_FN_T 
#define Anum_pg_type_typsubscript 13
#define HAVE_PTHREAD 1
#define POLL_MSG POLL_MSG
#define SIZEOF_BOOL 1
#define __FINITE_MATH_ONLY__ 0
#define AT_EACCESS 0x200
#define HEAP_MIN_FILLFACTOR 10
#define ERRCODE_E_R_I_E_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('3','9','0','0','4')
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define planner_subplan_get_plan(root,subplan) ((Plan *) list_nth((root)->glob->subplans, (subplan)->plan_id - 1))
#define DISTRIBUTE_BY_NONE 'n'
#define TransactionIdStore(xid,dest) (*(dest) = (xid))
#define RTOverBelowStrategyNumber 9
#define SIGALRM 14
#define FMGRPROTOS_H 
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define EBADR 53
#define FORMAT_PROC_FORCE_QUALIFY 0x02
#define stats_compat(a,b,c,d,e) stats(a, b, c, d, e)
#define __pid_t_defined 
#define SYSATTR_H 
#define PG_HAVE_ATOMIC_SUB_FETCH_U64 
#define Anum_pg_collation_collversion 10
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define ECANCELED 125
#define TYPTYPE_DOMAIN 'd'
#define XLR_SPECIAL_REL_UPDATE 0x01
#define ERRCODE_BRANCH_TRANSACTION_ALREADY_ACTIVE MAKE_SQLSTATE('2','5','0','0','2')
#define SIGFPE 8
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define linitial(l) lfirst(list_nth_cell(l, 0))
#define MaxAllocHugeSize (SIZE_MAX / 2)
#define IndexRelationGetNumberOfKeyAttributes(relation) ((relation)->rd_index->indnkeyatts)
#define MSG_MORE MSG_MORE
#define ERRCODE_EXTERNAL_ROUTINE_EXCEPTION MAKE_SQLSTATE('3','8','0','0','0')
#define PG_GETARG_HEAPTUPLEHEADER_COPY(n) DatumGetHeapTupleHeaderCopy(PG_GETARG_DATUM(n))
#define PG_RETURN_INTERVAL_P(x) return IntervalPGetDatum(x)
#define INT_FAST8_MAX (127)
#define NUM_AUXILIARY_PROCS 5
#define _BITS_STRING_FORTIFIED_H 1
#define LOCK_LOCKTAG(lock) ((LockTagType) (lock).tag.locktag_type)
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define PG_GETARG_VARLENA_PP(n) PG_DETOAST_DATUM_PACKED(PG_GETARG_DATUM(n))
#define PRIXFAST32 __PRIPTR_PREFIX "X"
#define RelationGetTargetPageFreeSpace(relation,defaultff) (BLCKSZ * (100 - RelationGetFillFactor(relation, defaultff)) / 100)
#define __FLT64_MANT_DIG__ 53
#define strtou64(str,endptr,base) ((uint64) strtoul(str, endptr, base))
#define htobe16(x) __bswap_16 (x)
#define ERRCODE_INVALID_FOREIGN_KEY MAKE_SQLSTATE('4','2','8','3','0')
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define BlockIdEquals(blockId1,blockId2) ((blockId1)->bi_hi == (blockId2)->bi_hi && (blockId1)->bi_lo == (blockId2)->bi_lo)
#define PROC_IS_AUTOVACUUM 0x01
#define HAVE_GETPWUID_R 1
#define __SHRT_MAX__ 0x7fff
#define O_CLOEXEC __O_CLOEXEC
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define USE_SYSTEMD 1
#define ILL_ILLOPC ILL_ILLOPC
#define ILL_ILLOPN ILL_ILLOPN
#define Anum_pg_type_typcategory 8
#define SRF_IS_FIRSTCALL() (fcinfo->flinfo->fn_extra == NULL)
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define CURSOR_OPT_CUSTOM_PLAN 0x0400
#define ACL_ALL_RIGHTS_FUNCTION (ACL_EXECUTE)
#define DEST_H 
#define AllocHugeSizeIsValid(size) ((Size) (size) <= MaxAllocHugeSize)
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define htobe32(x) __bswap_32 (x)
#define PG_GETARG_TRANSACTIONID(n) DatumGetTransactionId(PG_GETARG_DATUM(n))
#define __daddr_t_defined 
#define EXTNODENAME_MAX_LEN 64
#define ACL_NO_RIGHTS 0
#define SO_RCVTIMEO_OLD 20
#define HeapTupleHeaderSetMovedPartitions(tup) ItemPointerSetMovedPartitions(&(tup)->t_ctid)
#define IPV6_HDRINCL 36
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define SerializableXactHashLock (&MainLWLockArray[28].lock)
#define ERRCODE_TRANSACTION_RESOLUTION_UNKNOWN MAKE_SQLSTATE('0','8','0','0','7')
#define do_text_output_oneline(tstate,str_to_emit) do { Datum values_[1]; bool isnull_[1]; values_[0] = PointerGetDatum(cstring_to_text(str_to_emit)); isnull_[0] = false; do_tup_output(tstate, values_, isnull_); pfree(DatumGetPointer(values_[0])); } while (0)
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define Natts_pg_class 33
#define INDEX_VAR 65002
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define htobe64(x) __bswap_64 (x)
#define FPE_FLTRES FPE_FLTRES
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define PRIdLEAST64 __PRI64_PREFIX "d"
#define WL_LATCH_SET (1 << 0)
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define INT_FAST8_MIN (-128)
#define _UNISTD_H 1
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define RelFileNodeBackendIsTemp(rnode) ((rnode).backend != InvalidBackendId)
#define ERRCODE_SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','4')
#define __stub_sigreturn 
#define __OPTIMIZE__ 1
#define Anum_pg_collation_collisdeterministic 6
#define PG_USE_STDBOOL 1
#define SCNo16 "ho"
#define XLOGREADER_H 
#define HeapTupleClearHeapOnly(tuple) HeapTupleHeaderClearHeapOnly((tuple)->t_data)
#define LSYSCACHE_H 
#define __UID_T_TYPE __U32_TYPE
#define CUSTOMPATH_SUPPORT_BACKWARD_SCAN 0x0001
#define _POSIX_READER_WRITER_LOCKS 200809L
#define CITUS_COLUMNAR_INTERNAL_VERSION "11.1-0"
#define _POSIX_AIO_MAX 1
#define OffsetNumberIsValid(offsetNumber) ((bool) ((offsetNumber != InvalidOffsetNumber) && (offsetNumber <= MaxOffsetNumber)))
#define SO_WIFI_STATUS 41
#define HAVE_LDAP_INITIALIZE 1
#define NETDB_SUCCESS 0
#define STA_NANO 0x2000
#define SCNo32 "o"
#define MinHeapTupleSize MAXALIGN(SizeofHeapTupleHeader)
#define PG_RETURN_EXPANDED_ARRAY(x) PG_RETURN_DATUM(EOHPGetRWDatum(&(x)->hdr))
#define GUC_UNIT_MEMORY 0xF000
#define _SC_SHELL _SC_SHELL
#define ShareUpdateExclusiveLock 4
#define SO_BPF_EXTENSIONS 48
#define __FLT128_MIN_10_EXP__ (-4931)
#define DatumGetByteaPCopy(X) ((bytea *) PG_DETOAST_DATUM_COPY(X))
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define ADJ_MAXERROR 0x0004
#define DISTRIBUTE_BY_INVALID '\0'
#define _POSIX_AIO_LISTIO_MAX 2
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define _SC_SELECT _SC_SELECT
#define WORKER_NODE_FIELDS 2
#define PRIiMAX __PRI64_PREFIX "i"
#define Anum_pg_type_typlen 5
#define __WCHAR_MIN__ 0U
#define IPV6_MULTICAST_LOOP 19
#define DATEMULTIRANGEARRAYOID 6155
#define BYTEAARRAYOID 1001
#define VARATT_IS_SHORT(PTR) VARATT_IS_1B(PTR)
#define PARTITION_MAX_KEYS 32
#define PG_UINT16_MAX (0xFFFF)
#define CURSOR_OPT_BINARY 0x0001
#define SET_VARSIZE_1B(PTR,len) (((varattrib_1b *) (PTR))->va_header = (((uint8) (len)) << 1) | 0x01)
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define WSTOPPED 2
#define PG_GETARG_ACL_P_COPY(n) DatumGetAclPCopy(PG_GETARG_DATUM(n))
#define Anum_pg_type_oid 1
#define __osockaddr_defined 1
#define shm_toc_estimate_keys(e,cnt) ((e)->number_of_keys = add_size((e)->number_of_keys, cnt))
#define _SYS_USER_H 1
#define DEF_PGPORT 5432
#define NotifySLRULock (&MainLWLockArray[26].lock)
#define _SC_2_C_BIND _SC_2_C_BIND
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _POSIX_LINK_MAX 8
#define AGG_CONTEXT_AGGREGATE 1
#define PointerIsValid(pointer) ((const void*)(pointer) != NULL)
#define VARTAG_IS_EXPANDED(tag) (((tag) & ~1) == VARTAG_EXPANDED_RO)
#define HAVE_LIBZ 1
#define _CS_V6_ENV _CS_V6_ENV
#define AF_TIPC PF_TIPC
#define TIDARRAYOID 1010
#define HeapTupleHeaderClearMatch(tup) ( (tup)->t_infomask2 &= ~HEAP_TUPLE_HAS_MATCH )
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define LOCKTAG_LAST_TYPE LOCKTAG_ADVISORY
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define DatumGetPointer(X) ((Pointer) (X))
#define _LINUX_POSIX_TYPES_H 
#define ACL_CREATE (1<<9)
#define PointerGetDatum(X) ((Datum) (X))
#define SYSCACHE_H 
#define AARR_NDIM(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.ndims : ARR_NDIM((ArrayType *) (a)))
#define Anum_pg_type_typdefault 31
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define PRIuLEAST16 "u"
#define HAVE_DECL_RTLD_NOW 1
#define __LOCK_ALIGNMENT 
#define _XOPEN_REALTIME_THREADS 1
#define _POSIX_CHILD_MAX 25
#define ERRCODE_INVALID_AUTHORIZATION_SPECIFICATION MAKE_SQLSTATE('2','8','0','0','0')
#define SCNiFAST8 "hhi"
#define __USE_XOPEN2K8 1
#define BITS_PER_BYTE 8
#define PG_INT64_MAX INT64CONST(0x7FFFFFFFFFFFFFFF)
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define __PRI64_PREFIX "l"
#define closesocket close
#define ENODATA 61
#define PRIuLEAST32 "u"
#define DISTRIBUTE_BY_APPEND 'a'
#define SCNdFAST64 __PRI64_PREFIX "d"
#define IPV6_AUTHHDR 10
#define ERRCODE_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('2','2','0','0','4')
#define MAX_RANDOM_VALUE PG_INT32_MAX
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define SET_VARSIZE_SHORT(PTR,len) SET_VARSIZE_1B(PTR, len)
#define FKCONSTR_ACTION_SETNULL 'n'
#define GUC_UNIT_XBLOCKS 0x3000
#define _STATBUF_ST_NSEC 
#define TMP_MAX 238328
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define CITUS_COMMANDS_H 
#define IPV6_RECVERR_RFC4884 31
#define HAVE_COMPUTED_GOTO 1
#define SET_VARTAG_EXTERNAL(PTR,tag) SET_VARTAG_1B_E(PTR, tag)
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define PF_NETBEUI 13
#define ACL_SIZE(ACL) ARR_SIZE(ACL)
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define _SYS_SELECT_H 1
#define _POSIX_THREAD_KEYS_MAX 128
#define IndexRelationGetNumberOfAttributes(relation) ((relation)->rd_index->indnatts)
#define PRIuLEAST64 __PRI64_PREFIX "u"
#define SnapshotAny (&SnapshotAnyData)
#define HAVE_STDINT_H 1
#define Anum_pg_type_typoutput 17
#define TYPCATEGORY_BITSTRING 'V'
#define ALLOCSET_DEFAULT_MINSIZE 0
#define NUM_SPINLOCK_SEMAPHORES 128
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define SCOPE_DELIMITER '%'
#define __jmp_buf_tag_defined 1
#define __LC_TELEPHONE 10
#define REGDICTIONARYARRAYOID 3770
#define SIGURG 23
#define IPPROTO_PIM IPPROTO_PIM
#define HAVE_INTTYPES_H 1
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define PG_PRINTF_ATTRIBUTE gnu_printf
#define ERRCODE_DISK_FULL MAKE_SQLSTATE('5','3','1','0','0')
#define EINTR 4
#define UInt16GetDatum(X) ((Datum) (X))
#define __WCHAR_MAX __WCHAR_MAX__
#define vsprintf pg_vsprintf
#define DirectFunctionCall6(func,arg1,arg2,arg3,arg4,arg5,arg6) DirectFunctionCall6Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define CIRCLEOID 718
#define _IO_EOF_SEEN 0x0010
#define DEBUG1 14
#define DEBUG2 13
#define DEBUG3 12
#define DEBUG4 11
#define DEBUG5 10
#define SO_LINGER 13
#define INT4RANGEOID 3904
#define Anum_pg_class_relfilenode 8
#define PG_INT64_MIN (-INT64CONST(0x7FFFFFFFFFFFFFFF) - 1)
#define __FLT32_IS_IEC_60559__ 2
#define DATEOID 1082
#define ERRCODE_IDLE_SESSION_TIMEOUT MAKE_SQLSTATE('5','7','P','0','5')
#define SysCacheSize (USERMAPPINGUSERSERVER + 1)
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define SECS_PER_YEAR (36525 * 864)
#define ILL_ILLADR ILL_ILLADR
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC PF_UNSPEC
#define SIGQUIT 3
#define NI_NOFQDN 4
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define PF_CAIF 37
#define AllocSetContextCreate(parent,name,...) (StaticAssertExpr(__builtin_constant_p(name), "memory context names must be constant strings"), AllocSetContextCreateInternal(parent, name, __VA_ARGS__))
#define forfive(cell1,list1,cell2,list2,cell3,list3,cell4,list4,cell5,list5) for (ForFiveState cell1 ##__state = {(list1), (list2), (list3), (list4), (list5), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), multi_for_advance_cell(cell4, cell1 ##__state, l4, i), multi_for_advance_cell(cell5, cell1 ##__state, l5, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL && cell4 != NULL && cell5 != NULL); cell1 ##__state.i++)
#define PACKAGE_NAME "PostgreSQL"
#define JULIAN_MAXYEAR (5874898)
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define DynamicSharedMemoryControlLock (&MainLWLockArray[34].lock)
#define EAI_IDN_ENCODE -105
#define PATHARRAYOID 1019
#define XLR_BLOCK_ID_ORIGIN 253
#define RTSIG_MAX 32
#define SIGPOLL 29
#define WORKER_LENGTH 256
#define _STDDEF_H 
#define EAI_FAMILY -6
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define AF_BRIDGE PF_BRIDGE
#define BGW_NEVER_RESTART -1
#define SCNoLEAST16 "ho"
#define BtreeVacuumLock (&MainLWLockArray[20].lock)
#define IPV6_RECVPATHMTU 60
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define pg_memory_barrier_impl() __atomic_thread_fence(__ATOMIC_SEQ_CST)
#define _SYS_UCONTEXT_H 1
#define AlterTableStmtObjType_compat(a) ((a)->objtype)
#define RTOverAboveStrategyNumber 12
#define SCNoLEAST32 "o"
#define IP_MULTICAST_LOOP 34
#define SCNuMAX __PRI64_PREFIX "u"
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define _LINUX_CLOSE_RANGE_H 
#define _POSIX2_RE_DUP_MAX 255
#define IsMVCCSnapshot(snapshot) ((snapshot)->snapshot_type == SNAPSHOT_MVCC || (snapshot)->snapshot_type == SNAPSHOT_HISTORIC_MVCC)
#define SO_ATTACH_REUSEPORT_CBPF 51
#define SOCK_PACKET SOCK_PACKET
#define PRIoFAST32 __PRIPTR_PREFIX "o"
#define TSTZMULTIRANGEARRAYOID 6153
#define IPPROTO_PUP IPPROTO_PUP
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define ACL_TRUNCATE (1<<4)
#define Anum_pg_attribute_attisdropped 19
#define Anum_pg_type_typisdefined 10
#define SCNoLEAST64 __PRI64_PREFIX "o"
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define TRANSACTION_STATUS_COMMITTED 0x01
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define __UQUAD_TYPE unsigned long int
#define DatumIsReadWriteExpandedObject(d,isnull,typlen) (((isnull) || (typlen) != -1) ? false : VARATT_IS_EXTERNAL_EXPANDED_RW(DatumGetPointer(d)))
#define WARNING 19
#define __USE_ISOC11 1
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define MAX_PORT_LENGTH 10
#define HAVE_APPEND_HISTORY 1
#define ACL_USAGE_CHR 'U'
#define TRANSACTION_STATUS_ABORTED 0x02
#define att_addlength_pointer(cur_offset,attlen,attptr) ( ((attlen) > 0) ? ( (cur_offset) + (attlen) ) : (((attlen) == -1) ? ( (cur_offset) + VARSIZE_ANY(attptr) ) : ( AssertMacro((attlen) == -2), (cur_offset) + (strlen((char *) (attptr)) + 1) )) )
#define FOPEN_MAX 16
#define IPV6_2292PKTOPTIONS 6
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define _LFS64_STDIO 1
#define PROPARALLEL_UNSAFE 'u'
#define IPPROTO_RAW IPPROTO_RAW
#define FRAMEOPTION_START_OFFSET (FRAMEOPTION_START_OFFSET_PRECEDING | FRAMEOPTION_START_OFFSET_FOLLOWING)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __SIZEOF_LONG_DOUBLE__ 16
#define ACL_CONNECT_CHR 'c'
#define __ino_t_defined 
#define InvalidBuffer 0
#define MAXINT8LEN 20
#define _SC_ARG_MAX _SC_ARG_MAX
#define isupper(c) __isctype((c), _ISupper)
#define XACT_COMPLETION_FORCE_SYNC_COMMIT (1U << 31)
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define INT4RANGEARRAYOID 3905
#define foreach_oid(var,l) for (ListCell *(var ## CellDoNotUse) = list_head(l); (var ## CellDoNotUse) != NULL && (((var) = lfirst_oid(var ## CellDoNotUse)) || true); var ## CellDoNotUse = lnext(l, var ## CellDoNotUse))
#define IsParallelWorker() (ParallelWorkerNumber >= 0)
#define SSIZE_MAX LONG_MAX
#define _WINT_T 1
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define __SI_MAX_SIZE 128
#define EAI_FAIL -4
#define GUC_DISALLOW_IN_AUTO_FILE 0x0800
#define __STRING(x) #x
#define ERRCODE_LOCATOR_EXCEPTION MAKE_SQLSTATE('0','F','0','0','0')
#define list_make3_int(x1,x2,x3) list_make3_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3))
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define _POSIX_CHOWN_RESTRICTED 0
#define HEAP_COMBOCID 0x0020
#define PG_TYPEARRAYOID 210
#define __USE_ISOC95 1
#define __USE_ISOC99 1
#define ERRCODE_DUPLICATE_JSON_OBJECT_KEY_VALUE MAKE_SQLSTATE('2','2','0','3','0')
#define Anum_pg_index_indcollation 16
#define REPLICATION_MODEL_COORDINATOR 'c'
#define SHMEM_H 
#define relpathperm(rnode,forknum) relpathbackend(rnode, InvalidBackendId, forknum)
#define __GNUC_STDC_INLINE__ 1
#define HAVE__BUILTIN_OP_OVERFLOW 1
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define Int32GetDatum(X) ((Datum) (X))
#define Anum_pg_class_relam 7
#define list_nth_node(type,list,n) castNode(type, list_nth(list, n))
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define FPE_FLTDIV FPE_FLTDIV
#define C_H 
#define LINEARRAYOID 629
#define INT32_WIDTH 32
#define INSTR_TIME_SET_CURRENT_LAZY(t) (INSTR_TIME_IS_ZERO(t) ? INSTR_TIME_SET_CURRENT(t), true : false)
#define NI_NUMERICHOST 1
#define getObjectIdentity_compat(a,b) getObjectIdentity(a, b)
#define dummyret void
#define TSConfigRelationId 3602
#define Anum_pg_class_relhasindex 14
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define IPV6_PMTUDISC_OMIT 5
#define __USE_LARGEFILE 1
#define MSG_FASTOPEN MSG_FASTOPEN
#define HeapTupleGetDatum(tuple) HeapTupleHeaderGetDatum((tuple)->t_data)
#define __USE_XOPEN 1
#define HeapTupleHeaderGetSpeculativeToken(tup) ( AssertMacro(HeapTupleHeaderIsSpeculative(tup)), ItemPointerGetBlockNumber(&(tup)->t_ctid) )
#define isspace(c) __isctype((c), _ISspace)
#define stdin stdin
#define PRIi16 "i"
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define ERRCODE_INVALID_TABLESAMPLE_ARGUMENT MAKE_SQLSTATE('2','2','0','2','H')
#define HAVE_INT_TIMEZONE 1
#define __FLT_MANT_DIG__ 24
#define HAVE_STRNLEN 1
#define PROC_IN_VACUUM 0x02
#define _POSIX_PATH_MAX 256
#define GetSysCacheHashValue1(cacheId,key1) GetSysCacheHashValue(cacheId, key1, 0, 0, 0)
#define GetSysCacheHashValue2(cacheId,key1,key2) GetSysCacheHashValue(cacheId, key1, key2, 0, 0)
#define GetSysCacheHashValue3(cacheId,key1,key2,key3) GetSysCacheHashValue(cacheId, key1, key2, key3, 0)
#define FmgrHookIsNeeded(fn_oid) (!needs_fmgr_hook ? false : (*needs_fmgr_hook)(fn_oid))
#define VARTAG_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_tag)
#define _ISOC11_SOURCE 1
#define InitTupleHashIterator(htable,iter) tuplehash_start_iterate(htable->hashtab, iter)
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define DEFAULT_COLLATION_OID 100
#define PGUNSIXBIT(val) (((val) & 0x3F) + '0')
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define __INT_FAST16_TYPE__ long int
#define ScanTupleHashTable(htable,iter) tuplehash_iterate(htable->hashtab, iter)
#define SearchSysCacheCopy1(cacheId,key1) SearchSysCacheCopy(cacheId, key1, 0, 0, 0)
#define SearchSysCacheCopy2(cacheId,key1,key2) SearchSysCacheCopy(cacheId, key1, key2, 0, 0)
#define SearchSysCacheCopy3(cacheId,key1,key2,key3) SearchSysCacheCopy(cacheId, key1, key2, key3, 0)
#define SearchSysCacheList1(cacheId,key1) SearchSysCacheList(cacheId, 1, key1, 0, 0)
#define SearchSysCacheList2(cacheId,key1,key2) SearchSysCacheList(cacheId, 2, key1, key2, 0)
#define SearchSysCacheList3(cacheId,key1,key2,key3) SearchSysCacheList(cacheId, 3, key1, key2, key3)
#define ERRCODE_BAD_COPY_FILE_FORMAT MAKE_SQLSTATE('2','2','P','0','4')
#define list_make1_int(x1) list_make1_impl(T_IntList, list_make_int_cell(x1))
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define isalpha(c) __isctype((c), _ISalpha)
#define _POSIX_NO_TRUNC 1
#define ECHILD 10
#define ClassNameNspIndexId 2663
#define MSG_TRYHARD MSG_DONTROUTE
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define FirstNormalObjectId 16384
#define __stub_setlogin 
#define PG_GETARG_HEAPTUPLEHEADER(n) DatumGetHeapTupleHeader(PG_GETARG_DATUM(n))
#define _POSIX_SPORADIC_SERVER -1
#define TransactionIdIsValid(xid) ((xid) != InvalidTransactionId)
#define INSTR_TIME_H 
#define CLASS_TUPLE_SIZE (offsetof(FormData_pg_class,relminmxid) + sizeof(TransactionId))
#define Anum_pg_class_relhasrules 20
#define Natts_pg_attribute 26
#define PG_TYPE_D_H 
#define true 1
#define SA_RESETHAND 0x80000000
#define PRIiPTR __PRIPTR_PREFIX "i"
#define ERRCODE_WARNING_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('0','1','0','0','4')
#define __S32_TYPE int
#define IP_PKTOPTIONS 9
#define RTOverLeftStrategyNumber 2
#define WORKER_RACK_TRIES 5
#define VARATT_IS_COMPRESSED(PTR) VARATT_IS_4B_C(PTR)
#define WAIT_EVENT_SET_INDEX_NOT_INITIALIZED -1
#define REGNAMESPACEARRAYOID 4090
#define WEOF (0xffffffffu)
#define __toascii_l(c,l) ((l), __toascii (c))
#define XLogRecGetPrev(decoder) ((decoder)->decoded_record->xl_prev)
#define HeapTupleHeaderHasMatch(tup) ( ((tup)->t_infomask2 & HEAP_TUPLE_HAS_MATCH) != 0 )
#define _POSIX_DELAYTIMER_MAX 32
#define CHECKPOINT_FORCE 0x0008
#define PTHREAD_KEYS_MAX 1024
#define AGGSPLITOP_COMBINE 0x01
#define PageClearAllVisible(page) (((PageHeader) (page))->pd_flags &= ~PD_ALL_VISIBLE)
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define Anum_pg_class_oid 1
#define PDP_ENDIAN __PDP_ENDIAN
#define HeapTupleHeaderSetXvac(tup,xid) do { Assert((tup)->t_infomask & HEAP_MOVED); (tup)->t_choice.t_heap.t_field3.t_xvac = (xid); } while (0)
#define shm_toc_initialize_estimator(e) ((e)->space_for_chunks = 0, (e)->number_of_keys = 0)
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define PROC_VACUUM_FOR_WRAPAROUND 0x08
#define Anum_pg_proc_proretset 14
#define WALWriteLock (&MainLWLockArray[8].lock)
#define SIZEOF_DATUM SIZEOF_VOID_P
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define Anum_pg_dist_partition_logicalrelid 1
#define BUS_OBJERR BUS_OBJERR
#define INT_WIDTH 32
#define IPPROTO_RSVP IPPROTO_RSVP
#define TTS_IS_BUFFERTUPLE(slot) ((slot)->tts_ops == &TTSOpsBufferHeapTuple)
#define TXID_SNAPSHOTARRAYOID 2949
#define ANYCOMPATIBLEMULTIRANGEOID 4538
#define SO_BINDTODEVICE 25
#define SnapshotSelf (&SnapshotSelfData)
#define F_ADD_SEALS 1033
#define _PTRDIFF_T_DECLARED 
#define XACT_XINFO_HAS_DBINFO (1U << 0)
#define IP_PMTUDISC_PROBE 3
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __glibc_objsize(__o) __bos (__o)
#define dsa_pointer_atomic_write pg_atomic_write_u64
#define HAVE_STDBOOL_H 1
#define STA_PLL 0x0001
#define ERRCODE_E_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('3','8','0','0','3')
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 0
#define EBADSLT 57
#define IPPROTO_AH IPPROTO_AH
#define TrapMacro(condition,errorType) (true)
#define __PRIPTR_PREFIX "l"
#define Int64GetDatum(X) ((Datum) (X))
#define ERRCODE_LOCK_FILE_EXISTS MAKE_SQLSTATE('F','0','0','0','1')
#define REPLICA_IDENTITY_NOTHING 'n'
#define XACT_FLAGS_ACQUIREDACCESSEXCLUSIVELOCK (1U << 1)
#define SUBQUERY_RANGE_TABLE_ID -1
#define IPV6_PMTUDISC_DONT 0
#define ItemIdIsDead(itemId) ((itemId)->lp_flags == LP_DEAD)
#define IPPROTO_ICMP IPPROTO_ICMP
#define BITMAPSET_H 
#define SIZE_MAX (18446744073709551615UL)
#define ERRCODE_DIAGNOSTICS_EXCEPTION MAKE_SQLSTATE('0','Z','0','0','0')
#define INETOID 869
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define HAVE_BACKTRACE_SYMBOLS 1
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define SK_UNARY 0x0002
#define PF_UNSPEC 0
#define BKI_FORCE_NOT_NULL 
#define BoolGetDatum(X) ((Datum) ((X) ? 1 : 0))
#define AI_NUMERICSERV 0x0400
#define PGWARNING 19
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define ItemPointerSetOffsetNumber(pointer,offsetNumber) ( AssertMacro(PointerIsValid(pointer)), (pointer)->ip_posid = (offsetNumber) )
#define PF_MCTP 45
#define HeapTupleHeaderSetCmax(tup,cid,iscombo) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); if (iscombo) (tup)->t_infomask |= HEAP_COMBOCID; else (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define getObjectTypeDescription_compat(a,b) getObjectTypeDescription(a, b)
#define USE_FLOAT8_BYVAL 1
#define PF_X25 9
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define Anum_pg_collation_collctype 9
#define ERRCODE_S_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('2','F','0','0','3')
#define __GXX_ABI_VERSION 1016
#define ERRCODE_HELD_CURSOR_REQUIRES_SAME_ISOLATION_LEVEL MAKE_SQLSTATE('2','5','0','0','8')
#define _POSIX_THREAD_THREADS_MAX 64
#define _SC_PAGESIZE _SC_PAGESIZE
#define PG_GETARG_BPCHAR_PP(n) DatumGetBpCharPP(PG_GETARG_DATUM(n))
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define SIZEOF_VOID_P 8
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define PF_BRIDGE 7
#define IP_PMTUDISC_DONT 0
#define RelationIsLogicallyLogged(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && (relation)->rd_rel->relkind != RELKIND_FOREIGN_TABLE && !IsCatalogRelation(relation))
#define ReleaseTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) DecrTupleDescRefCount(tupdesc); } while (0)
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define FirstNormalUnloggedLSN ((XLogRecPtr) 1000)
#define DEFAULT_EVENT_SOURCE "PostgreSQL"
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define FILE_POSSIBLY_DELETED(err) ((err) == ENOENT)
#define WNOHANG 1
#define MAX_INTERVAL_PRECISION 6
#define _POSIX2_BC_BASE_MAX 99
#define DEF_PGPORT_STR "5432"
#define PF_IPX 4
#define ESR_MAGIC 0x45535201
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define ENOCSI 50
#define _SC_WORD_BIT _SC_WORD_BIT
#define __HAVE_GENERIC_SELECTION 1
#define F_GETFD 1
#define _POSIX_CLOCKRES_MIN 20000000
#define F_GETFL 3
#define SpinLockRelease(lock) S_UNLOCK(lock)
#define L_INCR SEEK_CUR
#define ShareRowExclusiveLock 6
#define S_IRWXG (S_IRWXU >> 3)
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define EOH_HEADER_MAGIC (-1)
#define BKPIMAGE_IS_COMPRESSED 0x02
#define EADDRINUSE 98
#define IPPROTO_MH IPPROTO_MH
#define PRIx16 "x"
#define _POSIX_VDISABLE '\0'
#define HeapTupleHeaderSetCmin(tup,cid) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define INDOPTION_DESC 0x0001
#define INSTR_TIME_ADD(x,y) do { (x).tv_sec += (y).tv_sec; (x).tv_nsec += (y).tv_nsec; while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define __WCOREFLAG 0x80
#define HAVE_READLINE_READLINE_H 1
#define PRIx32 "x"
#define __O_DIRECTORY 040000
#define F_ULOCK 0
#define ERRCODE_DUPLICATE_SCHEMA MAKE_SQLSTATE('4','2','P','0','6')
#define SCNu8 "hhu"
#define forboth(cell1,list1,cell2,list2) for (ForBothState cell1 ##__state = {(list1), (list2), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), (cell1 != NULL && cell2 != NULL); cell1 ##__state.i++)
#define FRAMEOPTION_ROWS 0x00004
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define Anum_pg_dist_partition_partkey 3
#define CHAROID 18
#define XLOG_XACT_ASSIGNMENT 0x50
#define NUM_ATOMICS_SEMAPHORES 64
#define PROARGMODE_INOUT 'b'
#define NL_ARGMAX _POSIX_ARG_MAX
#define INT_LEAST8_MAX (127)
#define RelFileNodeEquals(node1,node2) ((node1).relNode == (node2).relNode && (node1).dbNode == (node2).dbNode && (node1).spcNode == (node2).spcNode)
#define CIDRARRAYOID 651
#define FLOAT8_FITS_IN_INT32(num) ((num) >= (float8) PG_INT32_MIN && (num) < -((float8) PG_INT32_MIN))
#define AF_KCM PF_KCM
#define HAVE_DECL_LLVMCREATEGDBREGISTRATIONLISTENER 1
#define IPPROTO_TP IPPROTO_TP
#define RSIZE_MAX_MEM ( 256UL << 20 )
#define ItemIdGetRedirect(itemId) ((itemId)->lp_off)
#define si_pkey _sifields._sigfault._bounds._pkey
#define XMLARRAYOID 143
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define ItemPointerSetBlockNumber(pointer,blockNumber) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber) )
#define Anum_pg_type_typmodout 21
#define AF_KEY PF_KEY
#define _FALLOC_H_ 
#define LOG2_NUM_LOCK_PARTITIONS 4
#define FPE_FLTSUB FPE_FLTSUB
#define INT_FAST16_WIDTH __WORDSIZE
#define FLOAT8_FITS_IN_INT64(num) ((num) >= (float8) PG_INT64_MIN && (num) < -((float8) PG_INT64_MIN))
#define CHAR_BIT __CHAR_BIT__
#define __attribute_pure__ __attribute__ ((__pure__))
#define DatumGetTextPSlice(X,m,n) ((text *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define ERRCODE_FDW_UNABLE_TO_ESTABLISH_CONNECTION MAKE_SQLSTATE('H','V','0','0','N')
#define __SLONGWORD_TYPE long int
#define PF_XDP 44
#define INT2ARRAYOID 1005
#define INDEX_NULL_MASK 0x8000
#define ItemIdIsNormal(itemId) ((itemId)->lp_flags == LP_NORMAL)
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define HAVE_RL_FILENAME_COMPLETION_FUNCTION 1
#define JSONBOID 3802
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define HAVE_IFADDRS_H 1
#define IS_VALID_JULIAN(y,m,d) (((y) > JULIAN_MINYEAR || ((y) == JULIAN_MINYEAR && ((m) >= JULIAN_MINMONTH))) && ((y) < JULIAN_MAXYEAR || ((y) == JULIAN_MAXYEAR && ((m) < JULIAN_MAXMONTH))))
#define _SIZE_T 
#define INT8RANGEARRAYOID 3927
#define RangeTableEntryFromNSItem(a) ((a)->p_rte)
#define ERRCODE_CONNECTION_EXCEPTION MAKE_SQLSTATE('0','8','0','0','0')
#define gettext_noop(x) (x)
#define JSONOID 114
#define XLogArchivingAlways() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode == ARCHIVE_MODE_ALWAYS)
#define PROARGMODE_TABLE 't'
#define AIO_PRIO_DELTA_MAX 20
#define SO_KEEPALIVE 9
#define LONGALIGN(LEN) TYPEALIGN(ALIGNOF_LONG, (LEN))
#define ACCEPT_TYPE_ARG1 int
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define ACCEPT_TYPE_ARG3 socklen_t
#define HAVE_SPECIALJOININFO_TYPEDEF 1
#define RELKIND_SEQUENCE 'S'
#define PG_GETARG_TIMESTAMPTZ(n) DatumGetTimestampTz(PG_GETARG_DATUM(n))
#define CITUS_NODE_TAG_START 1200
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define MEMSET_LOOP_LIMIT 1024
#define HeapTupleHeaderGetTypeId(tup) ( (tup)->t_choice.t_datum.datum_typeid )
#define SKEY_H 
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define islower_l(c,l) __islower_l ((c), (l))
#define ARR_NULLBITMAP(a) (ARR_HASNULL(a) ? (bits8 *) (((char *) (a)) + sizeof(ArrayType) + 2 * sizeof(int) * ARR_NDIM(a)) : (bits8 *) NULL)
#define AARR_ELEMTYPE(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.element_type : ARR_ELEMTYPE((ArrayType *) (a)))
#define LINE_MAX _POSIX2_LINE_MAX
#define NGROUPS_MAX 65536
#define EHOSTUNREACH 113
#define AGGSPLITOP_DESERIALIZE 0x08
#define SIGVTALRM 26
#define ILL_BADIADDR ILL_BADIADDR
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define DirectFunctionCall1(func,arg1) DirectFunctionCall1Coll(func, InvalidOid, arg1)
#define DirectFunctionCall2(func,arg1,arg2) DirectFunctionCall2Coll(func, InvalidOid, arg1, arg2)
#define DirectFunctionCall3(func,arg1,arg2,arg3) DirectFunctionCall3Coll(func, InvalidOid, arg1, arg2, arg3)
#define DirectFunctionCall4(func,arg1,arg2,arg3,arg4) DirectFunctionCall4Coll(func, InvalidOid, arg1, arg2, arg3, arg4)
#define DirectFunctionCall5(func,arg1,arg2,arg3,arg4,arg5) DirectFunctionCall5Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define DirectFunctionCall7(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7) DirectFunctionCall7Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define DirectFunctionCall8(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) DirectFunctionCall8Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define DirectFunctionCall9(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) DirectFunctionCall9Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define __USE_DYNAMIC_STACK_SIZE 1
#define CATALOG(name,oid,oidmacro) typedef struct CppConcat(FormData_,name)
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define __attribute_used__ __attribute__ ((__used__))
#define ACL_N_SIZE(N) (ARR_OVERHEAD_NONULLS(1) + ((N) * sizeof(AclItem)))
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define FORMAT_PROC_INVALID_AS_NULL 0x01
#define __LC_ALL 6
#define _SC_TRACE _SC_TRACE
#define EBADFD 77
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define HAVE_LIBXSLT 1
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define Anum_pg_collation_collcollate 8
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define ECONNRESET 104
#define _SC_FSYNC _SC_FSYNC
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define FD_CLOEXEC 1
#define fcGetArgValue(fc,n) ((fc)->args[n].value)
#define SCNoPTR __PRIPTR_PREFIX "o"
#define pg_spin_delay() pg_spin_delay_impl()
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define SEEK_CUR 1
#define SIG_ATOMIC_MAX (2147483647)
#define HAVE_LIBLZ4 1
#define ELNRNG 48
#define CURSOR_OPT_SCROLL 0x0002
#define INSTRUMENT_H 
#define IPV6_TRANSPARENT 75
#define PD_VALID_FLAG_BITS 0x0007
#define HeapTupleHasExternal(tuple) (((tuple)->t_data->t_infomask & HEAP_HASEXTERNAL) != 0)
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define ERRCODE_WINDOWING_ERROR MAKE_SQLSTATE('4','2','P','2','0')
#define HeapTupleNoNulls(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASNULL))
#define INT32_MAX (2147483647)
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define SRF_FIRSTCALL_INIT() init_MultiFuncCall(fcinfo)
#define _PATH_PROTOCOLS "/etc/protocols"
#define HAVE_ATOMICS 1
#define MACADDROID 829
#define isprint_l(c,l) __isprint_l ((c), (l))
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define NI_MAXHOST 1025
#define POSIX_FADV_SEQUENTIAL 2
#define XidGenLock (&MainLWLockArray[3].lock)
#define HAVE_WRITEV 1
#define _BITS_FLOATN_H 
#define ALIGNOF_SHORT 2
#define PG_SEQUENCE_H 
#define DOUBLEALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_DOUBLE, (LEN))
#define __error_t_defined 1
#define __SCHAR_WIDTH__ 8
#define HAVE_SYS_EPOLL_H 1
#define SPIN_H 
#define slist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), (type *) slist_head_element_off(lhead, offsetof(type, membername)))
#define __SAFE_STR_LIB_H__ 
#define ResetTupleHashIterator(htable,iter) InitTupleHashIterator(htable, iter)
#define POINTARRAYOID 1017
#define DT_CHR DT_CHR
#define SIGSEGV 11
#define be64toh(x) __bswap_64 (x)
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define C_COLLATION_OID 950
#define __INT_FAST32_TYPE__ long int
#define TIDOID 27
#define PG_HAVE_ATOMIC_TEST_SET_FLAG 
#define RELTRIGGER_H 
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define forboth_ptr_oid(var1,l1,var2,l2) for (ListCell *(var1 ## CellDoNotUse) = list_head(l1), *(var2 ## CellDoNotUse) = list_head(l2); (var1 ## CellDoNotUse) != NULL && (var2 ## CellDoNotUse) != NULL && (((var1) = lfirst(var1 ## CellDoNotUse)) || true) && (((var2) = lfirst_oid(var2 ## CellDoNotUse)) || true); var1 ## CellDoNotUse = lnext(l1, var1 ## CellDoNotUse), var2 ## CellDoNotUse = lnext(l2, var2 ## CellDoNotUse) )
#define SIG_DFL ((__sighandler_t) 0)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define SET_LOCKTAG_DATABASE_FROZEN_IDS(locktag,dboid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_DATABASE_FROZEN_IDS, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define STA_PPSFREQ 0x0002
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define ERRCODE_TOO_MANY_COLUMNS MAKE_SQLSTATE('5','4','0','1','1')
#define PQTRACE_SUPPRESS_TIMESTAMPS (1<<0)
#define _POSIX_MAX_INPUT 255
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define EADDRNOTAVAIL 99
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define Anum_pg_class_relpersistence 16
#define __FLT16_MANT_DIG__ 11
#define RTSuperEqualStrategyNumber 27
#define ETIME 62
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define Anum_pg_type_typbasetype 26
#define SAFE_STR_PASSWORD_MAX_LENGTH ( 32 )
#define PG_TS_CONFIG_H 
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define PGINVALID_SOCKET (-1)
#define F_SETLK64 6
#define HAVE__BUILTIN_CLZ 1
#define SA_STACK SA_ONSTACK
#define USECS_PER_MINUTE INT64CONST(60000000)
#define _ASM_GENERIC_INT_LL64_H 
#define __FLT32X_MIN_EXP__ (-1021)
#define Anum_pg_collation_collprovider 5
#define HeapTupleHeaderIndicatesMovedPartitions(tup) ItemPointerIndicatesMovedPartitions(&(tup)->t_ctid)
#define InHotStandby (standbyState >= STANDBY_SNAPSHOT_PENDING)
#define __ID_T_TYPE __U32_TYPE
#define ALIGNOF_INT 4
#define castNode(_type_,nodeptr) ((_type_ *) (nodeptr))
#define F_TLOCK 2
#define ESFMTTYP ( 411 )
#define ERRCODE_GENERATED_ALWAYS MAKE_SQLSTATE('4','2','8','C','9')
#define REGOPERATOROID 2204
#define BKPBLOCK_SAME_REL 0x80
#define F_GETLEASE 1025
#define MCXT_ALLOC_HUGE 0x01
#define SOL_RAW 255
#define PG_SNAPSHOTOID 5038
#define Anum_pg_type_typarray 15
#define SO_REUSEPORT 15
#define SA_NOMASK SA_NODEFER
#define INTERVAL_FULL_RANGE (0x7FFF)
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define TYPCATEGORY_BOOLEAN 'B'
#define Natts_pg_publication 9
#define REGBUF_STANDARD 0x08
#define CITUS_METADATA_DISTOBJECT_H 
#define AF_ATMSVC PF_ATMSVC
#define PG_DIAG_CONTEXT 'W'
#define DEFAULT_DYNAMIC_SHARED_MEMORY_TYPE DSM_IMPL_POSIX
#define SOL_RDS 276
#define HEAP2_XACT_MASK 0xE000
#define ERRCODE_INDICATOR_OVERFLOW MAKE_SQLSTATE('2','2','0','2','2')
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define MSG_TRUNC MSG_TRUNC
#define SizeForFunctionCallInfo(nargs) (offsetof(FunctionCallInfoBaseData, args) + sizeof(NullableDatum) * (nargs))
#define __f32(x) x ##f32
#define N_ACL_RIGHTS 12
#define HAVE__BUILTIN_CTZ 1
#define IPV6_XFRM_POLICY 35
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define __SI_ALIGNMENT 
#define __P(args) args
#define PG_KRB_SRVNAM "postgres"
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define EAI_NODATA -5
#define OffsetNumberNext(offsetNumber) ((OffsetNumber) (1 + (offsetNumber)))
#define PageIsValid(page) PointerIsValid(page)
#define AF_IEEE802154 PF_IEEE802154
#define make_simple_restrictinfo_compat(a,b) make_simple_restrictinfo(a, b)
#define RelationGetNamespace(relation) ((relation)->rd_rel->relnamespace)
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define DATE_END_JULIAN (2147483494)
#define __FLT32X_MANT_DIG__ 53
#define EUCLEAN 117
#define _POSIX_IPV6 200809L
#define PG_HAVE_ATOMIC_EXCHANGE_U32 
#define IP_MSFILTER 41
#define HASH_DIRSIZE 0x0004
#define EAI_OVERFLOW -12
#define ALLOCSET_SMALL_INITSIZE (1 * 1024)
#define ShareLock 5
#define _GCC_LIMITS_H_ 
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define IP_BLOCK_SOURCE 38
#define __S_IEXEC 0100
#define PG_MODULE_MAGIC extern PGDLLEXPORT const Pg_magic_struct *PG_MAGIC_FUNCTION_NAME(void); const Pg_magic_struct * PG_MAGIC_FUNCTION_NAME(void) { static const Pg_magic_struct Pg_magic_data = PG_MODULE_MAGIC_DATA; return &Pg_magic_data; } extern int no_such_variable
#define FIELDNO_AGGSTATE_CURAGGCONTEXT 14
#define XACT_H 
#define BKI_FORCE_NULL 
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define REGPROCOID 24
#define DEFAULT_XLOG_SEG_SIZE (16*1024*1024)
#define UINT_FAST32_MAX (18446744073709551615UL)
#define XactCompletionApplyFeedback(xinfo) ((xinfo & XACT_COMPLETION_APPLY_FEEDBACK) != 0)
#define INVALID_DISTRIBUTION_ARGUMENT_INDEX -1
#define ENODEV 19
#define INT16_MIN (-32767-1)
#define GUC_check_errdetail pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errdetail_string = format_elog_string
#define __stub_revoke 
#define ACLITEM_SET_PRIVS(item,privs) ((item).ai_privs = ((item).ai_privs & ~((AclMode) 0xFFFF)) | ((AclMode) (privs) & 0xFFFF))
#define USE_LIBXSLT 1
#define IS_PARTITIONED_REL(rel) ((rel)->part_scheme && (rel)->boundinfo && (rel)->nparts > 0 && (rel)->part_rels && !IS_DUMMY_REL(rel))
#define NAMEOID 19
#define __stub___compat_create_module 
#define SQL_STR_DOUBLE(ch,escape_backslash) ((ch) == '\'' || ((ch) == '\\' && (escape_backslash)))
#define RTPrefixStrategyNumber 28
#define foreach(cell,lst) for (ForEachState cell ##__state = {(lst), 0}; (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define EKEYEXPIRED 127
#define O_DIRECT __O_DIRECT
#define PG_COLLATION_H 
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define __UINT_LEAST64_TYPE__ long unsigned int
#define XACT_READ_COMMITTED 1
#define MINSIGSTKSZ SIGSTKSZ
#define _TIME_H 1
#define DT_REG DT_REG
#define SHAREDINVALSMGR_ID (-3)
#define __FLT_HAS_QUIET_NAN__ 1
#define ERRCODE_INVALID_ROW_COUNT_IN_RESULT_OFFSET_CLAUSE MAKE_SQLSTATE('2','2','0','1','X')
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define ERRCODE_INVALID_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','M')
#define ERRCODE_FDW_TABLE_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','R')
#define Natts_pg_proc 30
#define PF_IEEE802154 36
#define RECOVERY_SIGNAL_FILE "recovery.signal"
#define GUC_IS_NAME 0x0200
#define CStringGetDatum(X) PointerGetDatum(X)
#define DT_BLK DT_BLK
#define TypeRelation_Rowtype_Id 71
#define __FLT_HAS_INFINITY__ 1
#define InitToastSnapshot(snapshotdata,l,w) ((snapshotdata).snapshot_type = SNAPSHOT_TOAST, (snapshotdata).lsn = (l), (snapshotdata).whenTaken = (w))
#define MaxIndexTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(sizeof(IndexTupleData) + 1) + sizeof(ItemIdData))))
#define SO_SNDBUF 7
#define innerPlan(node) (((Plan *)(node))->righttree)
#define _BSD_PTRDIFF_T_ 
#define PRIXPTR __PRIPTR_PREFIX "X"
#define SCNx8 "hhx"
#define SIGXFSZ 25
#define EXE ""
#define CHECKPOINT_CAUSE_XLOG 0x0080
#define SIGHUP 1
#define Anum_pg_attribute_attcacheoff 8
#define _POSIX_BARRIERS 200809L
#define TYPCATEGORY_USER 'U'
#define Anum_pg_class_relispopulated 25
#define LP_DEAD 3
#define IP_MULTICAST_ALL 49
#define dlist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end, (iter).next = (iter).cur->next; (iter).cur != (iter).end; (iter).cur = (iter).next, (iter).next = (iter).cur->next)
#define JULIAN_MINDAY (24)
#define __CHAR16_TYPE__ short unsigned int
#define RELATION_IS_LOCAL(relation) ((relation)->rd_islocaltemp || (relation)->rd_createSubid != InvalidSubTransactionId)
#define PLACEMENTID_SEQUENCE_NAME "pg_dist_placement_placementid_seq"
#define PageGetMaxOffsetNumber(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData ? 0 : ((((PageHeader) (page))->pd_lower - SizeOfPageHeaderData) / sizeof(ItemIdData)))
#define HAVE_BIO_GET_DATA 1
#define AT_SYMLINK_NOFOLLOW 0x100
#define PF_PPPOX 24
#define type_is_array(typid) (get_element_type(typid) != InvalidOid)
#define __SIZE_WIDTH__ 64
#define SO_TIMESTAMPNS_NEW 64
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define RELKIND_MATVIEW 'm'
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define PG_HAVE_ATOMIC_READ_U32 
#define FIELDNO_FUNCTIONCALLINFODATA_ARGS 6
#define HAVE_WORKING_LINK 1
#define HAVE_GSSAPI_GSSAPI_H 1
#define lthird_oid(l) lfirst_oid(list_nth_cell(l, 2))
#define PG_SEMA_H 
#define __STDC_VERSION__ 199901L
#define MemSet(start,val,len) do { void *_vstart = (void *) (start); int _val = (val); Size _len = (len); if ((((uintptr_t) _vstart) & LONG_ALIGN_MASK) == 0 && (_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0)
#define lfirst_node(type,lc) castNode(type, lfirst(lc))
#define __NLINK_T_TYPE __U32_TYPE
#define SEEK_HOLE 4
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define __ARM_ARCH 8
#define UINTMAX_C(c) c ## UL
#define RM_MAX_ID (RM_NEXT_ID - 1)
#define AT_NO_AUTOMOUNT 0x800
#define PREDICATELOCK_MANAGER_LWLOCK_OFFSET (LOCK_MANAGER_LWLOCK_OFFSET + NUM_LOCK_PARTITIONS)
#define ERRCODE_CHECK_VIOLATION MAKE_SQLSTATE('2','3','5','1','4')
#define IS_SPECIAL_VARNO(varno) ((varno) >= INNER_VAR)
#define PGDLLIMPORT 
#define PRIuFAST64 __PRI64_PREFIX "u"
#define AttrNumberIsForUserDefinedAttr(attributeNumber) ((bool) ((attributeNumber) > 0))
#define _LINUX_LIMITS_H 
#define SIGSTOP 19
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define CLOCK_MONOTONIC 1
#define DatumGetVarCharPP(X) ((VarChar *) PG_DETOAST_DATUM_PACKED(X))
#define AARR_LBOUND(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.lbound : ARR_LBOUND((ArrayType *) (a)))
#define __FLT16_MAX_10_EXP__ 4
#define ERRCODE_EXCLUSION_VIOLATION MAKE_SQLSTATE('2','3','P','0','1')
#define Anum_pg_attribute_atthasdef 15
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define INTERVAL_MASK(b) (1 << (b))
#define EBADRQC 56
#define PROMOTE_SIGNAL_FILE "promote"
#define LockHashPartition(hashcode) ((hashcode) % NUM_LOCK_PARTITIONS)
#define PERFORM_DELETION_INTERNAL 0x0001
#define USE_ARMV8_CRC32C_WITH_RUNTIME_CHECK 1
#define HAVE_LOCALE_T 1
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define __KEY_T_TYPE __S32_TYPE
#define __SVE_VQ_MAX 512
#define INTMAX_WIDTH 64
#define __F_SETSIG 10
#define ERRCODE_NO_ADDITIONAL_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','2','0','0','1')
#define SEGV_PKUERR SEGV_PKUERR
#define DATERANGEOID 3912
#define S_IFSOCK __S_IFSOCK
#define VARDATA_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_data)
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define SCNuFAST64 __PRI64_PREFIX "u"
#define PG_HAVE_ATOMIC_FETCH_OR_U32 
#define MCXT_ALLOC_NO_OOM 0x02
#define false 0
#define IPV6_JOIN_GROUP 20
#define UINT_FAST32_WIDTH __WORDSIZE
#define __GNUC_VA_LIST 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define BlockIdSet(blockId,blockNumber) ( AssertMacro(PointerIsValid(blockId)), (blockId)->bi_hi = (blockNumber) >> 16, (blockId)->bi_lo = (blockNumber) & 0xffff )
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define DROP_REGULAR_TABLE_COMMAND "DROP TABLE IF EXISTS %s CASCADE"
#define PG_HAVE_ATOMIC_U32_SUPPORT 
#define SOL_RXRPC 272
#define __nlink_t_defined 
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define INTERVAL_TYPMOD(p,r) ((((r) & INTERVAL_RANGE_MASK) << 16) | ((p) & INTERVAL_PRECISION_MASK))
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define EOHPGetRODatum(eohptr) PointerGetDatum((eohptr)->eoh_ro_ptr)
#define __CLOCKID_T_TYPE __S32_TYPE
#define PG_HAVE_ATOMIC_FETCH_OR_U64 
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define ESOVRLP ( 404 )
#define shm_toc_estimate_chunk(e,sz) ((e)->space_for_chunks = add_size((e)->space_for_chunks, BUFFERALIGN(sz)))
#define CHECKPOINT_REQUESTED 0x0040
#define MACADDRARRAYOID 1040
#define ELIBEXEC 83
#define RWH_WRITE_LIFE_NOT_SET 0
#define UNSET_NULLABLE_FIELD(ptr,field) (ptr)->field = NULL; memset_struct_0((ptr)->__nullable_storage.field)
#define HAVE__STATIC_ASSERT 1
#define __INT_FAST64_WIDTH__ 64
#define __SVE_VQ_MIN 1
#define UTIME_NOW ((1l << 30) - 1l)
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define ERRCODE_NONSTANDARD_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','P','0','6')
#define TupIsNull(slot) ((slot) == NULL || TTS_EMPTY(slot))
#define _BITS_UIO_LIM_H 1
#define TTY_NAME_MAX 32
#define EAI_INTR -104
#define __LITTLE_ENDIAN 1234
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define SequenceRelidIndexId 5002
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define ANYENUMOID 3500
#define Anum_pg_proc_proargdefaults 24
#define TABLE_AM_HANDLEROID 269
#define HAVE_PPOLL 1
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define Anum_pg_index_indnkeyatts 4
#define PG_COPYRES_NOTICEHOOKS 0x08
#define S_IXUSR __S_IEXEC
#define ItemIdIsUsed(itemId) ((itemId)->lp_flags != LP_UNUSED)
#define PTRDIFF_WIDTH __WORDSIZE
#define ULLONG_WIDTH 64
#define STDIN_FILENO 0
#define S_IWOTH (S_IWGRP >> 3)
#define XLogRecGetOrigin(decoder) ((decoder)->record_origin)
#define UINT8_MAX (255)
#define TIMESTAMP_NOEND(j) do {(j) = DT_NOEND;} while (0)
#define ERRCODE_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('2','2','0','0','1')
#define VARSIZE_SHORT(PTR) VARSIZE_1B(PTR)
#define HAVE_PWRITE 1
#define RelationGetNumberOfAttributes(relation) ((relation)->rd_rel->relnatts)
#define MemSetAligned(start,val,len) do { long *_start = (long *) (start); int _val = (val); Size _len = (len); if ((_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_start, _val, _len); } while (0)
#define SECS_PER_DAY 86400
#define PF_ATMSVC 20
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define ITEMPTR_H 
#define __WNOTHREAD 0x20000000
#define AF_LLC PF_LLC
#define HEAP_XMAX_BITS (HEAP_XMAX_COMMITTED | HEAP_XMAX_INVALID | HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK | HEAP_XMAX_LOCK_ONLY)
#define CLOCK_PROCESS_CPUTIME_ID 2
#define ENETUNREACH 101
#define EXDEV 18
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define PRIxPTR __PRIPTR_PREFIX "x"
#define UINT32_C(c) c ## U
#define BGWORKER_H 
#define POSTGRES_EXT_H 
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define ERRCODE_FDW_INVALID_COLUMN_NUMBER MAKE_SQLSTATE('H','V','0','0','8')
#define HAVE_SYNCFS 1
#define PF_VSOCK 40
#define PG_RETURN_NULL() do { fcinfo->isnull = true; return (Datum) 0; } while (0)
#define ACL_DAT(ACL) ((AclItem *) ARR_DATA_PTR(ACL))
#define PARSE_NODE_H 
#define HAVE__BUILTIN_BSWAP16 1
#define HAVE_SETSID 1
#define WORKER_PARTITIONED_TABLE_SIZE_FUNCTION "worker_partitioned_table_size(%s)"
#define REGBUF_KEEP_DATA 0x10
#define _POSIX_TRACE -1
#define _NSIG (__SIGRTMAX + 1)
#define __WINT_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define SEM_VALUE_MAX (2147483647)
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define llast_oid(l) lfirst_oid(list_last_cell(l))
#define TSRANGEARRAYOID 3909
#define SOL_PACKET 263
#define MOD_TAI ADJ_TAI
#define HAVE__BUILTIN_BSWAP32 1
#define ITEMID_H 
#define HAVE_STRERROR_R 1
#define XLR_RMGR_INFO_MASK 0xF0
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define ERRCODE_UNDEFINED_PSTATEMENT MAKE_SQLSTATE('2','6','0','0','0')
#define __bitwise__ 
#define COORDINATOR_PROTOCOL_H 
#define ENOSPC 28
#define ENOEXEC 8
#define S_UNLOCK(lock) __sync_lock_release(lock)
#define FIELDNO_TUPLETABLESLOT_FLAGS 1
#define RTSuperStrategyNumber 26
#define ERRCODE_E_R_I_E_SRF_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','2')
#define EOK ( 0 )
#define SO_RCVBUF 8
#define SK_ISNULL 0x0001
#define PG_HAVE_ATOMIC_U64_SUPPORT 
#define HAVE__BUILTIN_BSWAP64 1
#define BUFFERALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_BUFFER, (LEN))
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define PageSetFull(page) (((PageHeader) (page))->pd_flags |= PD_PAGE_FULL)
#define __LDBL_MAX_10_EXP__ 4932
#define ACLITEMARRAYOID 1034
#define RELKIND_INDEX 'i'
#define ERRCODE_T_R_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('4','0','0','0','2')
#define EDOM 33
#define SCNuLEAST32 "u"
#define ENOSTR 60
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define att_align_datum(cur_offset,attalign,attlen,attdatum) ( ((attlen) == -1 && VARATT_IS_SHORT(DatumGetPointer(attdatum))) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define SIOCSPGRP 0x8902
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define Float8GetDatumFast(X) Float8GetDatum(X)
#define ERRCODE_ASSERT_FAILURE MAKE_SQLSTATE('P','0','0','0','4')
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define ESRCH 3
#define _SC_REGEXP _SC_REGEXP
#define EHOSTDOWN 112
#define _LFS_LARGEFILE 1
#define InvalidBlockNumber ((BlockNumber) 0xFFFFFFFF)
#define STA_CLK 0x8000
#define __wchar_t__ 
#define SEEK_END 2
#define OffsetNumberPrev(offsetNumber) ((OffsetNumber) (-1 + (offsetNumber)))
#define _POSIX2_LINE_MAX 2048
#define _ISOC99_SOURCE 1
#define ENFILE 23
#define TIMESTAMP_MASK(b) (1 << (b))
#define PQ_QUERY_PARAM_MAX_LIMIT 65535
#define WORKER_PARTITIONED_RELATION_SIZE_FUNCTION "worker_partitioned_relation_size(%s)"
#define __LC_NAME 8
#define ACL_USAGE (1<<8)
#define MAXALIGN64(LEN) TYPEALIGN64(MAXIMUM_ALIGNOF, (LEN))
#define PageAddItem(page,item,size,offsetNumber,overwrite,is_heap) PageAddItemExtended(page, item, size, offsetNumber, ((overwrite) ? PAI_OVERWRITE : 0) | ((is_heap) ? PAI_IS_HEAP : 0))
#define REGPROC_H 
#define ENOSYS 38
#define si_band _sifields._sigpoll.si_band
#define SA_RESTART 0x10000000
#define ERRCODE_SAVEPOINT_EXCEPTION MAKE_SQLSTATE('3','B','0','0','0')
#define MAXIMUM_ALIGNOF 8
#define FORMAT_TYPE_ALLOW_INVALID 0x02
#define FIELDNO_EXPRCONTEXT_SCANTUPLE 1
#define CHARCLASS_NAME_MAX 2048
#define _BITS_LOCALE_H 1
#define va_arg(v,l) __builtin_va_arg(v,l)
#define NODES_H 
#define slist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).prev = &(lhead)->head, (iter).cur = (iter).prev->next, (iter).next = (iter).cur ? (iter).cur->next : NULL; (iter).cur != NULL; (iter).prev = (iter).cur, (iter).cur = (iter).next, (iter).next = (iter).next ? (iter).next->next : NULL)
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define _THREAD_SHARED_TYPES_H 1
#define Anum_pg_type_typmodin 20
#define ERRCODE_GROUPING_ERROR MAKE_SQLSTATE('4','2','8','0','3')
#define __glibc_has_extension(ext) 0
#define OidFunctionCall0(functionId) OidFunctionCall0Coll(functionId, InvalidOid)
#define OidFunctionCall1(functionId,arg1) OidFunctionCall1Coll(functionId, InvalidOid, arg1)
#define OidFunctionCall2(functionId,arg1,arg2) OidFunctionCall2Coll(functionId, InvalidOid, arg1, arg2)
#define OidFunctionCall3(functionId,arg1,arg2,arg3) OidFunctionCall3Coll(functionId, InvalidOid, arg1, arg2, arg3)
#define OidFunctionCall4(functionId,arg1,arg2,arg3,arg4) OidFunctionCall4Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4)
#define OidFunctionCall5(functionId,arg1,arg2,arg3,arg4,arg5) OidFunctionCall5Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define OidFunctionCall7(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7) OidFunctionCall7Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define OidFunctionCall8(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) OidFunctionCall8Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define OidFunctionCall9(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) OidFunctionCall9Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define Trap(condition,errorType) ((void)true)
#define AT_STATX_SYNC_TYPE 0x6000
#define ItemIdIsValid(itemId) PointerIsValid(itemId)
#define FullTransactionIdPrecedesOrEquals(a,b) ((a).value <= (b).value)
#define makeBoolean(val) makeInteger(val)
#define ERRCODE_PROTOCOL_VIOLATION MAKE_SQLSTATE('0','8','P','0','1')
#define WORKER_PARTITIONED_RELATION_TOTAL_SIZE_FUNCTION "worker_partitioned_relation_total_size(%s)"
#define ERRCODE_E_R_E_CONTAINING_SQL_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','1')
#define __FP_FAST_FMAF32x 1
#define TAS(lock) tas(lock)
#define HEAP_TUPLE_HAS_MATCH HEAP_ONLY_TUPLE
#define __STDC_UTF_32__ 1
#define RTOldContainsStrategyNumber 13
#define ACL_GRANT_OPTION_FOR(privs) (((AclMode) (privs) & 0xFFFF) << 16)
#define HEAP_MOVED_IN 0x8000
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define PG_RETURN_TIMESTAMP(x) return TimestampGetDatum(x)
#define FATAL 22
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define HAVE_DECL_FDATASYNC 1
#define XLogRecGetTopXid(decoder) ((decoder)->toplevel_xid)
#define _BITS_SIGACTION_H 1
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define STA_PPSJITTER 0x0200
#define SO_BSDCOMPAT 14
#define LOCKDEFS_H_ 
#define PageXLogRecPtrSet(ptr,lsn) ((ptr).xlogid = (uint32) ((lsn) >> 32), (ptr).xrecoff = (uint32) (lsn))
#define _PATH_HOSTS "/etc/hosts"
#define UTIME_OMIT ((1l << 30) - 2l)
#define SPLICE_F_NONBLOCK 2
#define HEAP_XMIN_INVALID 0x0200
#define HEAP_HASOID_OLD 0x0008
#define SO_CNX_ADVICE 53
#define TimestampTzGetDatum(X) Int64GetDatum(X)
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define MULTI_PHYSICAL_PLANNER_H 
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define SIGRTMIN (__libc_current_sigrtmin ())
#define ItemPointerIndicatesMovedPartitions(pointer) ( ItemPointerGetOffsetNumber(pointer) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(pointer) == MovedPartitionsBlockNumber )
#define HAVE_GETOPT_LONG 1
#define slist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).cur = (lhead)->head.next; (iter).cur != NULL; (iter).cur = (iter).cur->next)
#define FRAMEOPTION_START_CURRENT_ROW 0x00200
#define VARATT_EXTERNAL_SET_SIZE_AND_COMPRESS_METHOD(toast_pointer,len,cm) do { Assert((cm) == TOAST_PGLZ_COMPRESSION_ID || (cm) == TOAST_LZ4_COMPRESSION_ID); ((toast_pointer).va_extinfo = (len) | ((uint32) (cm) << VARLENA_EXTSIZE_BITS)); } while (0)
#define InstrCountTuples2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->ntuples2 += (delta); } while (0)
#define ACLITEM_GET_RIGHTS(item) ((item).ai_privs)
#define PROC_IN_LOGICAL_DECODING 0x10
#define Anum_pg_attribute_attoptions 24
#define SO_PEERGROUPS 59
#define _POSIX_V6_ILP32_OFFBIG -1
#define _SC_INT_MAX _SC_INT_MAX
#define CLOG_TRUNCATE 0x10
#define DatumGetBool(X) ((bool) ((X) != 0))
#define ACCESS_RELATION_H 
#define PG_ARGISNULL(n) (fcinfo->args[n].isnull)
#define SIOCGSTAMPNS_OLD 0x8907
#define TYPEALIGN(ALIGNVAL,LEN) (((uintptr_t) (LEN) + ((ALIGNVAL) - 1)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define MinSizeOfXactRelfilenodes offsetof(xl_xact_relfilenodes, xnodes)
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define PageIsVerified(page,blkno) PageIsVerifiedExtended(page, blkno, PIV_LOG_WARNING | PIV_REPORT_STAT)
#define __LC_CTYPE 0
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define SO_TIMESTAMP_NEW 63
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define sigcontext_struct sigcontext
#define PG_DIAG_SEVERITY 'S'
#define Anum_pg_ts_config_cfgnamespace 3
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define ERRCODE_INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','4')
#define NodeSetTag(nodeptr,t) (((Node*)(nodeptr))->type = (t))
#define SIG_ERR ((__sighandler_t) -1)
#define AI_NUMERICHOST 0x0004
#define HAVE_HMAC_CTX_NEW 1
#define XLogStandbyInfoActive() (wal_level >= WAL_LEVEL_REPLICA)
#define __INO_T_MATCHES_INO64_T 1
#define XLOG_XACT_HAS_INFO 0x80
#define EAI_AGAIN -3
#define DELAY_CHKPT_START (1<<0)
#define MAX_TZDISP_HOUR 15
#define LONG_BIT 64
#define __GLIBC_USE_IEC_60559_EXT 1
#define FMGR_H 
#define __HAVE_FLOAT128 1
#define ECOMM 70
#define UINT_LEAST32_MAX (4294967295U)
#define HAVE_DECL_STRNLEN 1
#define ERRCODE_INVALID_CURSOR_DEFINITION MAKE_SQLSTATE('4','2','P','1','1')
#define SIZEOF_SIZE_T 8
#define PG_CACHE_LINE_SIZE 128
#define POLL_PRI POLL_PRI
#define RelationGetTargetBlock(relation) ( (relation)->rd_smgr != NULL ? (relation)->rd_smgr->smgr_targblock : InvalidBlockNumber )
#define SIGILL 4
#define dgettext(domainname,msgid) dcgettext (domainname, msgid, LC_MESSAGES)
#define forboth_ptr(var1,l1,var2,l2) for (ListCell *(var1 ## CellDoNotUse) = list_head(l1), *(var2 ## CellDoNotUse) = list_head(l2); (var1 ## CellDoNotUse) != NULL && (var2 ## CellDoNotUse) != NULL && (((var1) = lfirst(var1 ## CellDoNotUse)) || true) && (((var2) = lfirst(var2 ## CellDoNotUse)) || true); var1 ## CellDoNotUse = lnext(l1, var1 ## CellDoNotUse), var2 ## CellDoNotUse = lnext(l2, var2 ## CellDoNotUse) )
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define PG_HAVE_ATOMIC_FETCH_SUB_U32 
#define POLL_IN POLL_IN
#define __time_t_defined 1
#define _SC_INT_MIN _SC_INT_MIN
#define Anum_pg_proc_prosqlbody 28
#define TypeOidIndexId 2703
#define TIMESTAMP_H 
#define SIGINT 2
#define O_DIRECTORY __O_DIRECTORY
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define _THREAD_MUTEX_INTERNAL_H 1
#define STATUS_OK (0)
#define REGTYPEOID 2206
#define SIGIOT SIGABRT
#define SELECT_TRUE_QUERY "SELECT TRUE FROM %s LIMIT 1"
#define _POSIX_TIMER_MAX 32
#define PG_HAVE_ATOMIC_FETCH_SUB_U64 
#define DN_CREATE 0x00000004
#define PRIdFAST8 "d"
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define S_IXGRP (S_IXUSR >> 3)
#define __ATOMIC_CONSUME 1
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define Anum_pg_type_typelem 14
#define __GNUC_MINOR__ 3
#define PRIuLEAST8 "u"
#define PF_KEY 15
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define SK_ORDER_BY 0x0100
#define isalnum(c) __isctype((c), _ISalnum)
#define TSVECTORARRAYOID 3643
#define DSA_ALLOC_ZERO 0x04
#define PG_RETURN_TRANSACTIONID(x) return TransactionIdGetDatum(x)
#define ANYCOMPATIBLENONARRAYOID 5079
#define ERRCODE_INVALID_PASSWORD MAKE_SQLSTATE('2','8','P','0','1')
#define INT2VECTOROID 22
#define ALIGNOF_PG_INT128_TYPE 16
#define SCNx32 "x"
#define ERRCODE_FDW_UNABLE_TO_CREATE_REPLY MAKE_SQLSTATE('H','V','0','0','M')
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define LC_NAME __LC_NAME
#define SHORTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_SHORT, (LEN))
#define FullTransactionIdPrecedes(a,b) ((a).value < (b).value)
#define isascii_l(c,l) __isascii_l ((c), (l))
#define FRAMEOPTION_GROUPS 0x00008
#define ERRCODE_CARDINALITY_VIOLATION MAKE_SQLSTATE('2','1','0','0','0')
#define _DIRENT_H 1
#define ENOTRECOVERABLE 131
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define UCHAR_WIDTH 8
#define PG_GETARG_CSTRING(n) DatumGetCString(PG_GETARG_DATUM(n))
#define LOG_SERVER_ONLY 16
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define __sigstack_defined 1
#define INFO 17
#define SPLICE_F_MORE 4
#define MaxTransactionIdAttributeNumber (-4)
#define TopSubTransactionId ((SubTransactionId) 1)
#define __ino64_t_defined 
#define STA_UNSYNC 0x0040
#define AF_ISDN PF_ISDN
#define __clockid_t_defined 1
#define __fsblkcnt_t_defined 
#define XIDOID 28
#define dsa_pointer_atomic_read pg_atomic_read_u64
#define __UINT8_TYPE__ unsigned char
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define AutoFileLock (&MainLWLockArray[35].lock)
#define IPV6_2292HOPLIMIT 8
#define PRIdPTR __PRIPTR_PREFIX "d"
#define ENOENT 2
#define __LONG_MAX__ 0x7fffffffffffffffL
#define ERRCODE_WARNING_PRIVILEGE_NOT_REVOKED MAKE_SQLSTATE('0','1','0','0','6')
#define PRIx64 __PRI64_PREFIX "x"
#define IPV6_LEAVE_ANYCAST 28
#define __UINT32_TYPE__ unsigned int
#define pg_unreachable() __builtin_unreachable()
#define ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','3')
#define SizeOfXLogRecordDataHeaderLong (sizeof(uint8) + sizeof(uint32))
#define ERRCODE_UNDEFINED_FILE MAKE_SQLSTATE('5','8','P','0','1')
#define relpath(rnode,forknum) relpathbackend((rnode).node, (rnode).backend, forknum)
#define SPLICE_F_MOVE 1
#define HAVE_SYS_SIGNALFD_H 1
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define SO_INCOMING_CPU 49
#define __useconds_t_defined 
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define FIELDNO_EXPRSTATE_PARENT 11
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define __HAVE_DISTINCT_FLOAT64X 0
#define ERRCODE_DUPLICATE_CURSOR MAKE_SQLSTATE('4','2','P','0','3')
#define RelationIsPermanent(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_PERMANENT)
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define __SIZEOF_LONG_LONG__ 8
#define CITUS_REBALANCER_APPLICATION_NAME_PREFIX "citus_rebalancer gpid="
#define HAVE_SETENV 1
#define FRAMEOPTION_START_UNBOUNDED_FOLLOWING 0x00080
#define HASH_ELEM 0x0008
#define PageSetPageSizeAndVersion(page,size,version) ( AssertMacro(((size) & 0xFF00) == (size)), AssertMacro(((version) & 0x00FF) == (version)), ((PageHeader) (page))->pd_pagesize_version = (size) | (version) )
#define PG_HAVE_SPIN_DELAY 
#define _GCC_PTRDIFF_T 
#define SInvalReadLock (&MainLWLockArray[5].lock)
#define TAS_SPIN(lock) TAS(lock)
#define ELIBACC 79
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define __LDBL_DIG__ 33
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define __exctype(name) extern int name (int) __THROW
#define pg_attribute_always_inline __attribute__((always_inline)) inline
#define _SC_NZERO _SC_NZERO
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define S_IROTH (S_IRGRP >> 3)
#define RelationGetFillFactor(relation,defaultff) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->fillfactor : (defaultff))
#define HeapTupleHeaderXminCommitted(tup) ( ((tup)->t_infomask & HEAP_XMIN_COMMITTED) != 0 )
#define Anum_pg_index_indoption 18
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define X_OK 1
#define _NETDB_H 1
#define ERRCODE_DATA_CORRUPTED MAKE_SQLSTATE('X','X','0','0','1')
#define __S_ISGID 02000
#define IPV6_RTHDR 57
#define FunctionCallInvoke(fcinfo) ((* (fcinfo)->flinfo->fn_addr) (fcinfo))
#define PRIoFAST8 "o"
#define ERRCODE_CONFIG_FILE_ERROR MAKE_SQLSTATE('F','0','0','0','0')
#define DatumGetByteaPP(X) ((bytea *) PG_DETOAST_DATUM_PACKED(X))
#define FIELDNO_TUPLETABLESLOT_NVALID 2
#define nodeTag(nodeptr) (((const Node*)(nodeptr))->type)
#define SO_BUF_LOCK 72
#define PG_ATTRIBUTE_H 
#define RelationIsMapped(relation) (RELKIND_HAS_STORAGE((relation)->rd_rel->relkind) && ((relation)->rd_rel->relfilenode == InvalidOid))
#define PG_FUNCTION_INFO_V1(funcname) extern Datum funcname(PG_FUNCTION_ARGS); extern PGDLLEXPORT const Pg_finfo_record * CppConcat(pg_finfo_,funcname)(void); const Pg_finfo_record * CppConcat(pg_finfo_,funcname) (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable
#define BackgroundWorkerLock (&MainLWLockArray[33].lock)
#define SCNuFAST8 "hhu"
#define MAX_KILOBYTES INT_MAX
#define FPE_FLTUND FPE_FLTUND
#define FPE_FLTUNK FPE_FLTUNK
#define _(x) gettext(x)
