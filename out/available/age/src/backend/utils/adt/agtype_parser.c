#define __S_IFBLK 0060000
#define _XOPEN_XPG3 1
#define DatumGetByteaP(X) ((bytea *) PG_DETOAST_DATUM(X))
#define SOL_LLC 268
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define __DECL_SIMD_erff64 
#define __DECL_SIMD_acoshf64 
#define __SSP_STRONG__ 3
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define EMULTIHOP 72
#define ERRCODE_AMBIGUOUS_COLUMN MAKE_SQLSTATE('4','2','7','0','2')
#define ERRCODE_DUPLICATE_ALIAS MAKE_SQLSTATE('4','2','7','1','2')
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define AT_STATX_SYNC_AS_STAT 0x0000
#define STATUS_EOF (-2)
#define AF_MAX PF_MAX
#define _SC_PII _SC_PII
#define __UINT_LEAST16_MAX__ 0xffff
#define F_SET_RW_HINT 1036
#define SIGPIPE 13
#define IP_ROUTER_ALERT 5
#define FRAMEOPTION_NONDEFAULT 0x00001
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define __FLT128_MAX_10_EXP__ 4932
#define OPCLASS_ITEM_STORAGETYPE 3
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define isless(x,y) __builtin_isless(x, y)
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define __DECL_SIMD_cosf32x 
#define sa_sigaction __sigaction_handler.sa_sigaction
#define ADBC 18
#define ERRCODE_INVALID_ROLE_SPECIFICATION MAKE_SQLSTATE('0','P','0','0','0')
#define PG_GETARG_VARCHAR_PP(n) DatumGetVarCharPP(PG_GETARG_DATUM(n))
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define si_fd _sifields._sigpoll.si_fd
#define _GETOPT_CORE_H 1
#define USE_LLVM 1
#define _T_WCHAR_ 
#define IS_VALID_DATE(d) ((DATETIME_MIN_JULIAN - POSTGRES_EPOCH_JDATE) <= (d) && (d) < (DATE_END_JULIAN - POSTGRES_EPOCH_JDATE))
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define NI_MAXSERV 32
#define ERRCODE_CONNECTION_DOES_NOT_EXIST MAKE_SQLSTATE('0','8','0','0','3')
#define restrict __restrict__
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define ERRCODE_RESERVED_NAME MAKE_SQLSTATE('4','2','9','3','9')
#define __error_t_defined 1
#define M_PIl 3.141592653589793238462643383279502884L
#define LC_JISX0208_1978 0x90
#define ISSJISHEAD(c) (((c) >= 0x81 && (c) <= 0x9f) || ((c) >= 0xe0 && (c) <= 0xfc))
#define OIDVECTORARRAYOID 1013
#define _MATH_H 1
#define FIELDNO_FUNCTIONCALLINFODATA_ARGNULL 7
#define __S64_TYPE long int
#define _PRINTF_NAN_LEN_MAX 4
#define PG_BINARY_R "r"
#define __FLT_MAX_EXP__ 128
#define PG_BINARY_W "w"
#define __SQUAD_TYPE long int
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define PG_GETARG_EXPANDED_ARRAYX(n,metacache) DatumGetExpandedArrayX(PG_GETARG_DATUM(n), metacache)
#define PG_GETARG_VARLENA_PP(n) PG_DETOAST_DATUM_PACKED(PG_GETARG_DATUM(n))
#define ERRCODE_INVALID_ARGUMENT_FOR_NTILE MAKE_SQLSTATE('2','2','0','1','4')
#define _BSD_SIZE_T_DEFINED_ 
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define DATEORDER_MDY 2
#define __CHAR_BIT__ 8
#define iseqsig(x,y) __MATH_TG (__MATH_EVAL_FMT2 (x, y), __iseqsig, ((x), (y)))
#define SO_DOMAIN 39
#define M_LOG2Ef128 __f128 (1.442695040888963407359924681001892137)
#define SIGRTMIN (__libc_current_sigrtmin ())
#define HTUP_H 
#define USE_OPENSSL 1
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define SHORTALIGN(LEN) TYPEALIGN(ALIGNOF_SHORT, (LEN))
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define ARR_HASNULL(a) ((a)->dataoffset != 0)
#define lnext(lc) ((lc)->next)
#define EREMCHG 78
#define VARATT_IS_EXPANDED_HEADER(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_header == EOH_HEADER_MAGIC)
#define PG_VERSION_STR "PostgreSQL 11.18 (Ubuntu 11.18-1.pgdg22.04+1) on aarch64-unknown-linux-gnu, compiled by gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0, 64-bit"
#define pairingheap_reset(h) ((h)->ph_root = NULL)
#define SIGTTIN 21
#define __DECL_SIMD_hypot 
#define EACCES 13
#define M_1_PIf32x __f32x (0.318309886183790671537767526745028724)
#define __DECL_SIMD_atan2f32 
#define SOCK_RAW SOCK_RAW
#define NOW "now"
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define EDESTADDRREQ 89
#define _PC_LINK_MAX _PC_LINK_MAX
#define ERRCODE_INVALID_TEXT_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','2')
#define si_pid _sifields._kill.si_pid
#define ERRCODE_DATA_EXCEPTION MAKE_SQLSTATE('2','2','0','0','0')
#define PG_DIAG_STATEMENT_POSITION 'P'
#define __DECL_SIMD_erfcf64x 
#define INT8RANGEOID 3926
#define IP_TTL 2
#define DatumGetArrayTypeP(X) ((ArrayType *) PG_DETOAST_DATUM(X))
#define UInt64GetDatum(X) ((Datum) (X))
#define IPV6_JOIN_ANYCAST 27
#define stderr stderr
#define __DECL_SIMD_expf16 
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define RECORDARRAYOID 2287
#define __USE_XOPEN2KXSI 1
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define CASHOID 790
#define __DECL_SIMD_atan2f128 
#define RWH_WRITE_LIFE_EXTREME 5
#define VARDATA(PTR) VARDATA_4B(PTR)
#define SOCK_RDM SOCK_RDM
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define FP_FAST_FMA 1
#define Int8GetDatum(X) ((Datum) (X))
#define SECURITY_RESTRICTED_OPERATION 0x0002
#define ERRCODE_TRANSACTION_ROLLBACK MAKE_SQLSTATE('4','0','0','0','0')
#define OPCLASS_ITEM_OPERATOR 1
#define PF_DECnet 12
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define UINT_FAST16_WIDTH __WORDSIZE
#define IP_MAX_MEMBERSHIPS 20
#define __DECL_SIMD_sinl 
#define HAVE_STRUCT_ADDRINFO 1
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define PG_GETARG_BYTEA_P_SLICE(n,a,b) DatumGetByteaPSlice(PG_GETARG_DATUM(n),a,b)
#define pairingheap_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define pg_attribute_printf(f,a) __attribute__((format(PG_PRINTF_ATTRIBUTE, f, a)))
#define ERRCODE_UNDEFINED_COLUMN MAKE_SQLSTATE('4','2','7','0','3')
#define M_E 2.7182818284590452354
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define _BITS_SOCKADDR_H 1
#define InvalidSnapshot ((Snapshot) NULL)
#define _SYS_UCONTEXT_H 1
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define lsecond(l) lfirst(lnext(list_head(l)))
#define M_PI_2f64x __f64x (1.570796326794896619231321691639751442)
#define __DECL_SIMD_expm1f64x 
#define PG_SOMAXCONN 10000
#define USE_SQL_DATES 2
#define MCAST_LEAVE_SOURCE_GROUP 47
#define ACLITEM_SET_PRIVS_GOPTIONS(item,privs,goptions) ((item).ai_privs = ((AclMode) (privs) & 0xFFFF) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define __FLT32X_DECIMAL_DIG__ 17
#define PGNODETREEOID 194
#define PG_GETARG_BYTEA_PP(n) DatumGetByteaPP(PG_GETARG_DATUM(n))
#define IPV6_IPSEC_POLICY 34
#define __PIC__ 2
#define __DECL_SIMD_erff64x 
#define MovedPartitionsBlockNumber InvalidBlockNumber
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define DATEVAL_NOEND ((DateADT) PG_INT32_MAX)
#define IPV6_2292HOPOPTS 3
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define __DECL_SIMD_acosf32 
#define ERRCODE_SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','4')
#define ACL_SELECT_FOR_UPDATE ACL_UPDATE
#define Max(x,y) ((x) > (y) ? (x) : (y))
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define HAVE_SYSLOG 1
#define IPV6_PMTUDISC_PROBE 3
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define IP_FREEBIND 15
#define SIG_ERR ((__sighandler_t) -1)
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define SEGV_BNDERR SEGV_BNDERR
#define REGDICTIONARYOID 3769
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define AF_IPX PF_IPX
#define is_nonwindows_absolute_path(filename) ( IS_NONWINDOWS_DIR_SEP((filename)[0]) )
#define _POSIX_MEMLOCK 200809L
#define LC_TIBETAN_1_COLUMN 0xf1
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define _BITS_PTHREADTYPES_COMMON_H 1
#define IPV6_UNICAST_IF 76
#define __O_NOFOLLOW 0100000
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','5')
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define FmgrHookIsNeeded(fn_oid) (!needs_fmgr_hook ? false : (*needs_fmgr_hook)(fn_oid))
#define OIDOID 26
#define __DECL_SIMD_atanhl 
#define PG_INT128_TYPE __int128
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define __sigval_t_defined 
#define MCAST_LEAVE_GROUP 45
#define SOL_BLUETOOTH 274
#define HAVE_LIBLDAP 1
#define FD_SETSIZE __FD_SETSIZE
#define __CFLOAT128 _Complex _Float128
#define M_2_SQRTPIf32 __f32 (1.128379167095512573896158903121545172)
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define __GLIBC_FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define _CS_PATH _CS_PATH
#define _ASM_GENERIC_ERRNO_BASE_H 
#define VARATT_IS_EXTERNAL_INDIRECT(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_INDIRECT)
#define LC_JISX0201R 0x8a
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define __DBL_MIN_10_EXP__ (-307)
#define makeNode(_type_) ((_type_ *) newNode(sizeof(_type_),T_ ##_type_))
#define DTERR_INTERVAL_OVERFLOW (-4)
#define GAI_NOWAIT 1
#define ENOTTY 25
#define TRACE_SORT 1
#define LC_UNICODE_SUBSET 0xf4
#define M_LOG10Ef64x __f64x (0.434294481903251827651128918916605082)
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define __DECL_SIMD_log1pf128x 
#define PARTITION_STRATEGY_RANGE 'r'
#define L_cuserid 9
#define _CS_V6_ENV _CS_V6_ENV
#define Anum_pg_attribute_attalign 12
#define __DECL_SIMD_cosf128 
#define __u_char_defined 
#define unlikely(x) __builtin_expect((x) != 0, 0)
#define HAVE_DECL_F_FULLFSYNC 0
#define RWH_WRITE_LIFE_LONG 4
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define __FLT64X_HAS_INFINITY__ 1
#define IPV6_HOPOPTS 54
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define Anum_pg_type_typrelid 11
#define DatumGetTimeTzADTP(X) ((TimeTzADT *) DatumGetPointer(X))
#define _POSIX_TRACE_EVENT_FILTER -1
#define Min(x,y) ((x) < (y) ? (x) : (y))
#define __INT_LEAST16_TYPE__ short int
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define SNANF128 (__builtin_nansf128 (""))
#define Anum_pg_type_typcollation 27
#define SO_SECURITY_AUTHENTICATION 22
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define PG_RETURN_CSTRING(x) return CStringGetDatum(x)
#define NameStr(name) ((name).data)
#define _BITS_SIGNUM_ARCH_H 1
#define _BITS_TYPES_LOCALE_T_H 1
#define UINT8_WIDTH 8
#define MSG_WAITALL MSG_WAITALL
#define REGPROCEDUREARRAYOID 2207
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define __ASM_GENERIC_SOCKET_H 
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define _XOPEN_XCU_VERSION 4
#define __O_NOATIME 01000000
#define USECS_PER_DAY INT64CONST(86400000000)
#define POLL_ERR POLL_ERR
#define HAVE_INT_OPTERR 1
#define __SI_SIGFAULT_ADDL 
#define ENOMEM 12
#define BITARRAYOID 1561
#define SPLICE_F_GIFT 8
#define _SYS_TIME_H 1
#define __DECL_SIMD_atanhf128x 
#define SOL_TIPC 271
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define __INT_LEAST8_WIDTH__ 8
#define SO_INCOMING_NAPI_ID 56
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define h_addr h_addr_list[0]
#define __INT_LEAST8_MAX__ 0x7f
#define ACL_DELETE_CHR 'd'
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define __stub_sigreturn 
#define for_each_cell(cell,initcell) for ((cell) = (initcell); (cell) != NULL; (cell) = lnext(cell))
#define _XBS5_LPBIG_OFFBIG -1
#define IN_CLASSB_NSHIFT 16
#define DEFAULT_BGWRITER_FLUSH_AFTER 64
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define NFDBITS __NFDBITS
#define REGCLASSOID 2205
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define __UINT_FAST16_TYPE__ long unsigned int
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define S_IXOTH (S_IXGRP >> 3)
#define WCHAR_WIDTH 32
#define lfourth_oid(l) lfirst_oid(lnext(lnext(lnext(list_head(l)))))
#define ItemIdSetRedirect(itemId,link) ( (itemId)->lp_flags = LP_REDIRECT, (itemId)->lp_off = (link), (itemId)->lp_len = 0 )
#define SOL_IPV6 41
#define __O_CLOEXEC 02000000
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define IP_MTU 14
#define DATEARRAYOID 1182
#define __ARM_FP 14
#define AF_ROSE PF_ROSE
#define __DECL_SIMD_erfcf16 
#define DatumGetUInt32(X) ((uint32) (X))
#define __fortify_function __extern_always_inline __attribute_artificial__
#define LP_UNUSED 0
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define Anum_pg_type_typtypmod 25
#define __FP_LOGBNAN_IS_MIN 0
#define __DECL_SIMD_erfcf128x 
#define _RPC_NETDB_H 1
#define TZ_STRLEN_MAX 255
#define SVE_VQ_MIN __SVE_VQ_MIN
#define SOCK_DCCP SOCK_DCCP
#define CommandIdGetDatum(X) ((Datum) (X))
#define _POSIX_JOB_CONTROL 1
#define __UINT_LEAST8_MAX__ 0xff
#define Anum_pg_attribute_atthasmissing 15
#define PF_SECURITY 14
#define MaxAttrNumber 32767
#define ITIMER_REAL ITIMER_REAL
#define IPV6_2292DSTOPTS 4
#define CppAsString2(x) CppAsString(x)
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define PG_DIAG_TABLE_NAME 't'
#define __ASM_GENERIC_BITS_PER_LONG 
#define ARR_SIZE(a) VARSIZE(a)
#define DTK_TZ 4
#define ENABLE_THREAD_SAFETY 1
#define HAVE_WCTYPE_H 1
#define DatumGetUInt64(X) ((uint64) (X))
#define _POSIX_THREAD_CPUTIME 0
#define pg_bswap16(x) __builtin_bswap16(x)
#define __linux 1
#define VARATT_IS_4B_C(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x02)
#define PG_MAGIC_FUNCTION_NAME Pg_magic_func
#define AGG_CONTEXT_WINDOW 2
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define VARATT_IS_4B_U(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x00)
#define IS_LC1(c) ((unsigned char)(c) >= 0x81 && (unsigned char)(c) <= 0x8d)
#define VARCHAROID 1043
#define ERRCODE_SUCCESSFUL_COMPLETION MAKE_SQLSTATE('0','0','0','0','0')
#define AI_ADDRCONFIG 0x0020
#define si_int _sifields._rt.si_sigval.sival_int
#define TYPTYPE_ENUM 'e'
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define _BITS_PTHREADTYPES_ARCH_H 1
#define HOURS_PER_DAY 24
#define AGO 19
#define DTK_DAY 21
#define __DECL_SIMD_hypotf16 
#define __UINT32_MAX__ 0xffffffffU
#define ACL_DAT(ACL) ((AclItem *) ARR_DATA_PTR(ACL))
#define ERRCODE_S_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','2')
#define __bool_true_false_are_defined 1
#define _BITS_SS_FLAGS_H 1
#define __DECL_SIMD_erfcf64 
#define MAX_TIMESTAMP_PRECISION 6
#define ItemPointerGetBlockNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetBlockNumberNoCheck(pointer) )
#define ERRCODE_DATETIME_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','0','8')
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define __SIZE_T 
#define OffsetNumberMask (0xffff)
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define DatumGetHeapTupleHeaderCopy(X) ((HeapTupleHeader) PG_DETOAST_DATUM_COPY(X))
#define __S_ISVTX 01000
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define ALIGNOF_DOUBLE 8
#define __DECL_SIMD_exp2f128 
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define PF_SNA 22
#define M_PIf64x __f64x (3.141592653589793238462643383279502884)
#define _ATFILE_SOURCE 1
#define M_PI_2 1.57079632679489661923
#define FALLOC_FL_INSERT_RANGE 0x20
#define _SC_NETWORKING _SC_NETWORKING
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define MSG_FIN MSG_FIN
#define INT2OID 21
#define SO_NO_CHECK 11
#define UINT_FAST64_WIDTH 64
#define WUNTRACED 2
#define ERESTART 85
#define EISNAM 120
#define pg_bswap64(x) __builtin_bswap64(x)
#define _STATBUF_ST_RDEV 
#define UINT16_C(c) c
#define BlockIdEquals(blockId1,blockId2) ((blockId1)->bi_hi == (blockId2)->bi_hi && (blockId1)->bi_lo == (blockId2)->bi_lo)
#define LOCK_READ 64
#define ACL_UPDATE_CHR 'w'
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define __DECL_SIMD_acoshf64x 
#define ENOMSG 42
#define _PC_PRIO_IO _PC_PRIO_IO
#define RENAME_EXCHANGE (1 << 1)
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define qsort(a,b,c,d) pg_qsort(a,b,c,d)
#define __DECL_SIMD_expm1f32x 
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define AF_FILE PF_FILE
#define __SCHAR_MAX__ 0x7f
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define DTK_MILLISEC 29
#define PG_IOLBF _IOLBF
#define __USE_KERNEL_IPV6_DEFS 0
#define __attribute_used__ __attribute__ ((__used__))
#define VARATT_IS_EXTENDED(PTR) (!VARATT_IS_4B_U(PTR))
#define ERRCODE_INVALID_DATABASE_DEFINITION MAKE_SQLSTATE('4','2','P','1','2')
#define __KERNEL_STRICT_NAMES 
#define AGG_CONTEXT_AGGREGATE 1
#define DTK_AGO 5
#define __INT64_C(c) c ## L
#define HOUR 10
#define SA_SIGINFO 4
#define HAVE_TYPEOF 1
#define __CHAR16_TYPE__ short unsigned int
#define __DECL_SIMD_atanhf64x 
#define __CFLOAT32 _Complex _Float32
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define ERRCODE_WITH_CHECK_OPTION_VIOLATION MAKE_SQLSTATE('4','4','0','0','0')
#define HAVE_CRYPT 1
#define DTK_INVALID 7
#define FRAMEOPTION_EXCLUDE_GROUP 0x10000
#define DO_AGGSPLIT_SERIALIZE(as) (((as) & AGGSPLITOP_SERIALIZE) != 0)
#define _BITS_LIBM_SIMD_DECL_STUBS_H 1
#define PATHOID 602
#define AttributeRelationId 1249
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define __DECL_SIMD_expl 
#define RELTIMEARRAYOID 1024
#define LOG_DESTINATION_STDERR 1
#define __isascii(c) (((c) & ~0x7f) == 0)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define SO_TIMESTAMP_OLD 29
#define S_IRWXG (S_IRWXU >> 3)
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define BLCKSZ 8192
#define _BITS_SIGINFO_ARCH_H 1
#define __DECL_SIMD_exp 
#define PGNDISTINCTOID 3361
#define si_addr _sifields._sigfault.si_addr
#define SOL_TLS 282
#define DatumGetCommandId(X) ((CommandId) (X))
#define MINS_PER_HOUR 60
#define FIOSETOWN 0x8901
#define RELTIMEOID 703
#define PG_RETURN_ACL_P(x) PG_RETURN_POINTER(x)
#define IS_VALID_TIMESTAMP(t) (MIN_TIMESTAMP <= (t) && (t) < END_TIMESTAMP)
#define ERRCODE_INSUFFICIENT_RESOURCES MAKE_SQLSTATE('5','3','0','0','0')
#define HAVE_DLOPEN 1
#define SO_LOCK_FILTER 44
#define TSROUND(j) (rint(((double) (j)) * TS_PREC_INV) / TS_PREC_INV)
#define _ASM_GENERIC_INT_LL64_H 
#define LC_ISO8859_1 0x81
#define LC_ISO8859_2 0x82
#define LC_ISO8859_3 0x83
#define LC_ISO8859_4 0x84
#define LC_ISO8859_6 0x87
#define LC_ISO8859_7 0x86
#define LC_ISO8859_9 0x8d
#define __DECL_SIMD_asinhf128 
#define HAVE_BIO_GET_DATA 1
#define IPPROTO_EGP IPPROTO_EGP
#define __USER_LABEL_PREFIX__ 
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define errcontext set_errcontext_domain(TEXTDOMAIN), errcontext_msg
#define __LC_MEASUREMENT 11
#define llast(l) lfirst(list_tail(l))
#define Anum_pg_attribute_attbyval 10
#define SCM_TIMESTAMPING_PKTINFO 58
#define __GLIBC__ 2
#define _SC_POLL _SC_POLL
#define LC_JISX0208 0x92
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define RENAME_NOREPLACE (1 << 0)
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define ERRCODE_FDW_INCONSISTENT_DESCRIPTOR_INFORMATION MAKE_SQLSTATE('H','V','0','2','1')
#define WCONTINUED 8
#define setjmp(env) _setjmp (env)
#define UINT_LEAST8_WIDTH 8
#define JULIAN 4
#define ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('2','3','0','0','0')
#define ERRCODE_FDW_INVALID_STRING_LENGTH_OR_BUFFER_LENGTH MAKE_SQLSTATE('H','V','0','9','0')
#define NAN (__builtin_nanf (""))
#define BUFFERALIGN(LEN) TYPEALIGN(ALIGNOF_BUFFER, (LEN))
#define ERRCODE_STACKED_DIAGNOSTICS_ACCESSED_WITHOUT_ACTIVE_HANDLER MAKE_SQLSTATE('0','Z','0','0','2')
#define islessgreater(x,y) __builtin_islessgreater(x, y)
#define _LARGEFILE64_SOURCE 1
#define isascii(c) __isascii (c)
#define __DECL_SIMD_expm1f 
#define __LDBL_HAS_INFINITY__ 1
#define _BITS_UINTN_IDENTITY_H 1
#define TimestampGetDatum(X) Int64GetDatum(X)
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define DatumGetUInt16(X) ((uint16) (X))
#define ERRCODE_EXTERNAL_ROUTINE_INVOCATION_EXCEPTION MAKE_SQLSTATE('3','9','0','0','0')
#define __fsfilcnt_t_defined 
#define PG_RETURN_UINT16(x) return UInt16GetDatum(x)
#define ERRCODE_FLOATING_POINT_EXCEPTION MAKE_SQLSTATE('2','2','P','0','1')
#define AF_PHONET PF_PHONET
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define INET_ADDRSTRLEN 16
#define _BITS_TYPESIZES_H 1
#define ACL_REFERENCES (1<<5)
#define si_status _sifields._sigchld.si_status
#define ERRCODE_FDW_INVALID_COLUMN_NAME MAKE_SQLSTATE('H','V','0','0','7')
#define __GNU_LIBRARY__ 6
#define DatumGetAclP(X) ((Acl *) PG_DETOAST_DATUM(X))
#define VARATT_IS_EXTERNAL(PTR) VARATT_IS_1B_E(PTR)
#define PG_RETURN_UINT32(x) return UInt32GetDatum(x)
#define PG_ATTRIBUTE_D_H 
#define __FLT32_DIG__ 6
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define ERRCODE_INVALID_TRANSACTION_STATE MAKE_SQLSTATE('2','5','0','0','0')
#define __blkcnt_t_defined 
#define ERRCODE_INVALID_COLUMN_DEFINITION MAKE_SQLSTATE('4','2','6','1','1')
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define __DECL_SIMD_expm1l 
#define __RLIM_T_MATCHES_RLIM64_T 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define Anum_pg_type_typname 1
#define SO_TIMESTAMPING_OLD 37
#define ENOLINK 67
#define __HAVE_FLOAT128X 0
#define M_Ef128 __f128 (2.718281828459045235360287471352662498)
#define __FLT32_IS_IEC_60559__ 2
#define __GLIBC_MINOR__ 35
#define PF_LLC 26
#define F_SEAL_SEAL 0x0001
#define isblank_l(c,l) __isblank_l ((c), (l))
#define _XBS5_LP64_OFF64 1
#define repalloc_array(pointer,type,count) ((type *) repalloc(pointer, sizeof(type) * (count)))
#define POINTOID 600
#define s6_addr16 __in6_u.__u6_addr16
#define HAVE_SRANDOM 1
#define TMODULO(t,q,u) do { (q) = ((t) / (u)); if ((q) != 0) (t) -= ((q) * (u)); } while(0)
#define SO_BROADCAST 6
#define __SVE_NUM_ZREGS 32
#define ERRCODE_INVALID_GRANT_OPERATION MAKE_SQLSTATE('0','L','P','0','1')
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __DECL_SIMD_atanf64 
#define __DEV_T_TYPE __UQUAD_TYPE
#define USECS_PER_SEC INT64CONST(1000000)
#define DYNTZ 7
#define ACL_ALL_RIGHTS_FDW (ACL_USAGE)
#define MAXDATELEN 128
#define PG_RETURN_UINT64(x) return UInt64GetDatum(x)
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define SIGIO SIGPOLL
#define PACKAGE_TARNAME "postgresql"
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __STDC_UTF_16__ 1
#define s6_addr32 __in6_u.__u6_addr32
#define le32toh(x) __uint32_identity (x)
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define __O_LARGEFILE 0
#define NIL ((List *) NULL)
#define _POSIX_FSYNC 200809L
#define SCM_TXTIME SO_TXTIME
#define ERRCODE_PROGRAM_LIMIT_EXCEEDED MAKE_SQLSTATE('5','4','0','0','0')
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define SI_MESGQ SI_MESGQ
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define CACHELINEALIGN(LEN) TYPEALIGN(PG_CACHE_LINE_SIZE, (LEN))
#define AttrNumberGetAttrOffset(attNum) ( AssertMacro(AttrNumberIsForUserDefinedAttr(attNum)), ((attNum) - 1) )
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define PG_RETURN_CHAR(x) return CharGetDatum(x)
#define SECURITY_LOCAL_USERID_CHANGE 0x0001
#define Int64GetDatumFast(X) Int64GetDatum(X)
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define __FLT32X_HAS_INFINITY__ 1
#define Anum_pg_type_typispreferred 8
#define s6_addr __in6_u.__u6_addr8
#define UINT32_WIDTH 32
#define __INT32_MAX__ 0x7fffffff
#define DatumGetObjectId(X) ((Oid) (X))
#define ERRCODE_RAISE_EXCEPTION MAKE_SQLSTATE('P','0','0','0','1')
#define TYPCATEGORY_PSEUDOTYPE 'P'
#define __GLIBC_USE_DEPRECATED_GETS 0
#define HAVE_SECURITY_PAM_APPL_H 1
#define __DECL_SIMD_acoshf128 
#define PG_GETARG_INTERVAL_P(n) DatumGetIntervalP(PG_GETARG_DATUM(n))
#define __INT_WIDTH__ 32
#define SNANF64 (__builtin_nansf64 (""))
#define O_NDELAY O_NONBLOCK
#define __SIZE_WIDTH__ 64
#define S_ISVTX __S_ISVTX
#define ERRCODE_IS_CATEGORY(ec) (((ec) & ~((1 << 12) - 1)) == 0)
#define BOXARRAYOID 1020
#define FP_LLOGBNAN __FP_LONG_MAX
#define HAVE_POSIX_FALLOCATE 1
#define PG_RETURN_TIMESTAMPTZ(x) return TimestampTzGetDatum(x)
#define __STDC_IEC_559__ 1
#define MAKE_SQLSTATE(ch1,ch2,ch3,ch4,ch5) (PGSIXBIT(ch1) + (PGSIXBIT(ch2) << 6) + (PGSIXBIT(ch3) << 12) + (PGSIXBIT(ch4) << 18) + (PGSIXBIT(ch5) << 24))
#define isprint_l(c,l) __isprint_l ((c), (l))
#define SO_TYPE 3
#define __STDC_ISO_10646__ 201706L
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define _SC_NL_NMAX _SC_NL_NMAX
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define AGGSPLITOP_SKIPFINAL 0x02
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define __DECL_SIMD_erff32x 
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define BoolIsValid(boolean) ((boolean) == false || (boolean) == true)
#define DatumGetChar(X) ((char) (X))
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define ERRCODE_INVALID_SQL_STATEMENT_NAME MAKE_SQLSTATE('2','6','0','0','0')
#define __USE_FORTIFY_LEVEL 2
#define LOCK_EX 2
#define REGROLEOID 4096
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define UNKNOWNOID 705
#define PG_GETARG_OID(n) DatumGetObjectId(PG_GETARG_DATUM(n))
#define TS_PREC_INV 1000000.0
#define LSEGARRAYOID 1018
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define ERRCODE_E_R_I_E_EVENT_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','3')
#define _LARGEFILE_SOURCE 1
#define __FLT128_IS_IEC_60559__ 2
#define ENABLE_NLS 1
#define ESTALE 116
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __SI_MAX_SIZE 128
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define LC_TIME __LC_TIME
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define SEGV_ACCADI SEGV_ACCADI
#define IPV6_FREEBIND 78
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define __SIZEOF_FLOAT__ 4
#define __DECL_SIMD_logf16 
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define ALIGNOF_LONG 8
#define OID_MAX UINT_MAX
#define __S_IFIFO 0010000
#define PTRDIFF_MAX (9223372036854775807L)
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define FPSIMD_MAGIC 0x46508001
#define pg_attribute_packed() __attribute__((packed))
#define HAVE_DECL_VSNPRINTF 1
#define HAVE__BUILTIN_CONSTANT_P 1
#define _XBS5_ILP32_OFF32 -1
#define __ASM_SIGCONTEXT_H 
#define __DECL_SIMD_tanf32x 
#define _SC_THREADS _SC_THREADS
#define IP_ORIGDSTADDR 20
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define HAVE_STDLIB_H 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define IPV6_DSTOPTS 59
#define M_1_PIf64 __f64 (0.318309886183790671537767526745028724)
#define SOL_ICMPV6 58
#define FLOAT8PASSBYVAL true
#define __attribute_const__ __attribute__ ((__const__))
#define ERRCODE_INDETERMINATE_DATATYPE MAKE_SQLSTATE('4','2','P','1','8')
#define ERRCODE_FDW_REPLY_HANDLE MAKE_SQLSTATE('H','V','0','0','K')
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define DO_AGGSPLIT_COMBINE(as) (((as) & AGGSPLITOP_COMBINE) != 0)
#define ERRCODE_NO_DATA_FOUND MAKE_SQLSTATE('P','0','0','0','2')
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define HAVE_TZNAME 1
#define __DECL_SIMD_atanf64x 
#define AF_BLUETOOTH PF_BLUETOOTH
#define __DECL_SIMD_expm1f16 
#define SEGV_MTEAERR SEGV_MTEAERR
#define timestamptz_cmp_internal(dt1,dt2) timestamp_cmp_internal(dt1, dt2)
#define pg_restrict __restrict__
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define L_tmpnam 20
#define TRIGGEROID 2279
#define PG_GETARG_BPCHAR_P(n) DatumGetBpCharP(PG_GETARG_DATUM(n))
#define PG_DIAG_SCHEMA_NAME 's'
#define ___int_wchar_t_h 
#define UINT8_C(c) c
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define __GNUC__ 11
#define HAVE_DECL_POSIX_FADVISE 1
#define PG_VALID_ENCODING(_enc) ((_enc) >= 0 && (_enc) < _PG_LAST_ENCODING_)
#define LC_INDIAN_2_COLUMN 0xfb
#define HAVE_SYS_TYPES_H 1
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define IPPROTO_TCP IPPROTO_TCP
#define __DECL_SIMD_cbrtf16 
#define __DECL_SIMD_acoshf16 
#define HAVE_GCC__ATOMIC_INT32_CAS 1
#define PG_DIAG_SQLSTATE 'C'
#define F_RDLCK 0
#define PGDDLCOMMANDOID 32
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ERRCODE_T_R_STATEMENT_COMPLETION_UNKNOWN MAKE_SQLSTATE('4','0','0','0','3')
#define appendStringInfoCharMacro(str,ch) (((str)->len + 1 >= (str)->maxlen) ? appendStringInfoChar(str, ch) : (void)((str)->data[(str)->len] = (ch), (str)->data[++(str)->len] = '\0'))
#define JSONBARRAYOID 3807
#define EXPANDED_POINTER_SIZE (VARHDRSZ_EXTERNAL + sizeof(varatt_expanded))
#define PF_ISDN 34
#define HAVE_GETADDRINFO 1
#define TSM_HANDLEROID 3310
#define __DECL_SIMD_acosf32x 
#define POSIX_FADV_WILLNEED 3
#define AF_NFC PF_NFC
#define HAVE_DECL_STRNLEN 1
#define BlockNumberIsValid(blockNumber) ((bool) ((BlockNumber) (blockNumber) != InvalidBlockNumber))
#define ERRCODE_WARNING_NULL_VALUE_ELIMINATED_IN_SET_FUNCTION MAKE_SQLSTATE('0','1','0','0','3')
#define LOCK_NB 4
#define CSTRINGARRAYOID 1263
#define INT8OID 20
#define __daddr_t_defined 
#define IP_HDRINCL 3
#define MSG_CTRUNC MSG_CTRUNC
#define EAI_MEMORY -10
#define UINT64CONST(x) (x ##UL)
#define MSG_PROXY MSG_PROXY
#define SO_DETACH_REUSEPORT_BPF 68
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define M_PI_4l 0.785398163397448309615660845819875721L
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define sa_handler __sigaction_handler.sa_handler
#define IPV6_RECVHOPOPTS 53
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define PG_RETURN_NAME(x) return NameGetDatum(x)
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define ItemIdGetFlags(itemId) ((itemId)->lp_flags)
#define Anum_pg_attribute_attnum 6
#define __FLT64_MAX_10_EXP__ 308
#define pg_ntoh16(x) pg_bswap16(x)
#define M_LOG10Ef 0.43429448190325182765f
#define __GLIBC_USE_LIB_EXT2 1
#define M_LOG10El 0.434294481903251827651128918916605082L
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define __sigevent_t_defined 1
#define Anum_pg_attribute_attndims 7
#define HAVE_GETRLIMIT 1
#define WTERMSIG(status) __WTERMSIG (status)
#define ERRCODE_UNTERMINATED_C_STRING MAKE_SQLSTATE('2','2','0','2','4')
#define ERRCODE_ZERO_LENGTH_CHARACTER_STRING MAKE_SQLSTATE('2','2','0','0','F')
#define __INT_FAST16_WIDTH__ 64
#define __DBL_IS_IEC_60559__ 2
#define DatumGetTimestamp(X) ((Timestamp) DatumGetInt64(X))
#define AF_SECURITY PF_SECURITY
#define BufferIsLocal(buffer) ((buffer) < 0)
#define LOCK_RW 192
#define EXIT_SUCCESS 0
#define M_PIf32 __f32 (3.141592653589793238462643383279502884)
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define TYPTYPE_RANGE 'r'
#define PG_GETARG_ACL_P(n) DatumGetAclP(PG_GETARG_DATUM(n))
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define HAVE_STRTOULL 1
#define SI_QUEUE SI_QUEUE
#define ERRCODE_AMBIGUOUS_ALIAS MAKE_SQLSTATE('4','2','P','0','9')
#define F_SETSIG __F_SETSIG
#define UINTMAX_WIDTH 64
#define DTK_TOMORROW 15
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define PG_BSWAP_H 
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define __DECL_SIMD_sinhf32 
#define __DECL_SIMD_asinhf32x 
#define SEGV_PKUERR SEGV_PKUERR
#define SCM_CREDENTIALS SCM_CREDENTIALS
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define HAVE_FDATASYNC 1
#define IP_MTU_DISCOVER 10
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define PG_CACHE_LINE_SIZE 128
#define HAVE_STRTOLL 1
#define LC_SISHENG 0xa0
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define __DECL_SIMD_log10f128 
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define RAND_MAX 2147483647
#define M_SQRT2f64x __f64x (1.414213562373095048801688724209698079)
#define SIGQUIT 3
#define HAVE_READLINK 1
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define LOCK_UN 8
#define __DECL_SIMD_expf32 
#define FDW_HANDLEROID 3115
#define GTSVECTORARRAYOID 3644
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define pg_ntoh64(x) pg_bswap64(x)
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define DTK_DELTA 17
#define CIDROID 650
#define __DADDR_T_TYPE __S32_TYPE
#define elog(elevel,...) do { elog_start(__FILE__, __LINE__, PG_FUNCNAME_MACRO); elog_finish(elevel, __VA_ARGS__); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define __DECL_SIMD_sinhf64 
#define PACKAGE_BUGREPORT "pgsql-bugs@postgresql.org"
#define __DECL_SIMD_powf16 
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define LC_LAO 0xa7
#define TSRANGEOID 3908
#define ERRCODE_RESTRICT_VIOLATION MAKE_SQLSTATE('2','3','0','0','1')
#define MAX_HANDLE_SZ 128
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define ACL_ALL_RIGHTS_SEQUENCE (ACL_USAGE|ACL_SELECT|ACL_UPDATE)
#define SMGROID 210
#define SIZE_WIDTH __WORDSIZE
#define TYPTYPE_PSEUDO 'p'
#define __FD_SETSIZE 1024
#define h_errno (*__h_errno_location ())
#define __DECL_SIMD_powf32 
#define lfourth(l) lfirst(lnext(lnext(lnext(list_head(l)))))
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define SI_USER SI_USER
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define __DECL_SIMD_sinf64x 
#define DEVNULL "/dev/null"
#define EBADMSG 74
#define MakeExpandedObjectReadOnly(d,isnull,typlen) (((isnull) || (typlen) != -1) ? (d) : MakeExpandedObjectReadOnlyInternal(d))
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#define __DECL_SIMD_atanhf32 
#define __LDBL_HAS_DENORM__ 1
#define ItemIdGetOffset(itemId) ((itemId)->lp_off)
#define HAVE_UINTPTR_T 1
#define __S_IFREG 0100000
#define __SOCKADDR_ALLTYPES __SOCKADDR_ONETYPE (sockaddr) __SOCKADDR_ONETYPE (sockaddr_at) __SOCKADDR_ONETYPE (sockaddr_ax25) __SOCKADDR_ONETYPE (sockaddr_dl) __SOCKADDR_ONETYPE (sockaddr_eon) __SOCKADDR_ONETYPE (sockaddr_in) __SOCKADDR_ONETYPE (sockaddr_in6) __SOCKADDR_ONETYPE (sockaddr_inarp) __SOCKADDR_ONETYPE (sockaddr_ipx) __SOCKADDR_ONETYPE (sockaddr_iso) __SOCKADDR_ONETYPE (sockaddr_ns) __SOCKADDR_ONETYPE (sockaddr_un) __SOCKADDR_ONETYPE (sockaddr_x25)
#define DTK_MONTH 23
#define M_2_PIf64x __f64x (0.636619772367581343075535053490057448)
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define LC_TIME_MASK (1 << __LC_TIME)
#define PG_DIAG_INTERNAL_QUERY 'q'
#define SIGSTKFLT 16
#define LC_ADDRESS __LC_ADDRESS
#define SIGABRT 6
#define ACL_ALL_RIGHTS_COLUMN (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_REFERENCES)
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define POSIX_FADV_NORMAL 0
#define DatumGetInt16(X) ((int16) (X))
#define ERRCODE_INVALID_TRANSACTION_TERMINATION MAKE_SQLSTATE('2','D','0','0','0')
#define S_IFCHR __S_IFCHR
#define TIMEOID 1083
#define __dev_t_defined 
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define ISOTIME 23
#define _SC_IPV6 _SC_IPV6
#define HAVE_SYS_UN_H 1
#define SO_DONTROUTE 5
#define __DBL_MAX_EXP__ 1024
#define ERRCODE_FDW_COLUMN_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','5')
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define HAVE_STRSIGNAL 1
#define __WCHAR_WIDTH__ 32
#define FPE_INTDIV FPE_INTDIV
#define DatumGetInt32(X) ((int32) (X))
#define _BITS_WCHAR_H 1
#define IP_RECVERR 11
#define ERRCODE_SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED MAKE_SQLSTATE('2','5','0','0','7')
#define IGNORE_DTF 8
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define PG_GETARG_TEXT_PP(n) DatumGetTextPP(PG_GETARG_DATUM(n))
#define ERRCODE_DUPLICATE_FUNCTION MAKE_SQLSTATE('4','2','7','2','3')
#define _VA_LIST_ 
#define isspace_l(c,l) __isspace_l ((c), (l))
#define ETOOMANYREFS 109
#define TYPCATEGORY_INVALID '\0'
#define ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE MAKE_SQLSTATE('0','3','0','0','0')
#define PG_TRY() do { sigjmp_buf *save_exception_stack = PG_exception_stack; ErrorContextCallback *save_context_stack = error_context_stack; sigjmp_buf local_sigjmp_buf; if (sigsetjmp(local_sigjmp_buf, 0) == 0) { PG_exception_stack = &local_sigjmp_buf
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define __DECL_SIMD_sinf16 
#define __DECL_SIMD_log10f32 
#define __FLT_IS_IEC_60559__ 2
#define MCAST_INCLUDE 1
#define RWH_WRITE_LIFE_SHORT 2
#define IPV6_UNICAST_HOPS 16
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define COMMERROR LOG_SERVER_ONLY
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define PF_PHONET 35
#define FRAMEOPTION_RANGE 0x00002
#define __USECONDS_T_TYPE __U32_TYPE
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define HAVE_GCC__ATOMIC_INT64_CAS 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __DECL_SIMD_tanhf64x 
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define ERRCODE_CANNOT_CONNECT_NOW MAKE_SQLSTATE('5','7','P','0','3')
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define EXFULL 54
#define _LINUX_STDDEF_H 
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define _STDARG_H 
#define DTK_YEAR 25
#define ERRCODE_ESCAPE_CHARACTER_CONFLICT MAKE_SQLSTATE('2','2','0','0','B')
#define _T_WCHAR 
#define DTK_EPOCH 11
#define HAVE_EDITLINE_HISTORY_H 1
#define AF_AX25 PF_AX25
#define _PC_VDISABLE _PC_VDISABLE
#define ATTNUM_H 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define SO_COOKIE 57
#define CURSOR_OPT_GENERIC_PLAN 0x0040
#define _BITS_STDIO2_H 1
#define _SC_BARRIERS _SC_BARRIERS
#define ACL_EXECUTE_CHR 'X'
#define ERRCODE_INVALID_OBJECT_DEFINITION MAKE_SQLSTATE('4','2','P','1','7')
#define DatumGetTransactionId(X) ((TransactionId) (X))
#define st_atime st_atim.tv_sec
#define PARTITION_STRATEGY_LIST 'l'
#define __stub___compat_uselib 
#define __INT_FAST8_TYPE__ signed char
#define _POSIX_CPUTIME 0
#define si_stime _sifields._sigchld.si_stime
#define is_windows_absolute_path(filename) ( IS_WINDOWS_DIR_SEP((filename)[0]) || (isalpha((unsigned char) ((filename)[0])) && (filename)[1] == ':' && IS_WINDOWS_DIR_SEP((filename)[2])) )
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define O_TMPFILE __O_TMPFILE
#define __DECL_SIMD_cosl 
#define __DECL_SIMD_tanf128 
#define SNANL (__builtin_nansl (""))
#define EBUSY 16
#define AT_STATX_DONT_SYNC 0x4000
#define SOCK_PACKET SOCK_PACKET
#define __DECL_SIMD_expm1f128x 
#define ENOTNAM 118
#define ERRCODE_INSUFFICIENT_PRIVILEGE MAKE_SQLSTATE('4','2','5','0','1')
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define _LINUX_CLOSE_RANGE_H 
#define ERRCODE_QUERY_CANCELED MAKE_SQLSTATE('5','7','0','1','4')
#define __U16_TYPE unsigned short int
#define SO_SNDTIMEO_NEW 67
#define CLD_EXITED CLD_EXITED
#define LC_JISX0213_1 0x97
#define WINT_MAX (4294967295u)
#define UINTPTR_MAX (18446744073709551615UL)
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#define ERRCODE_DIAGNOSTICS_EXCEPTION MAKE_SQLSTATE('0','Z','0','0','0')
#define linitial_oid(l) lfirst_oid(list_head(l))
#define isnan(x) __builtin_isnan (x)
#define ItemIdSetUnused(itemId) ( (itemId)->lp_flags = LP_UNUSED, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define _SC_PIPE _SC_PIPE
#define AF_ATMSVC PF_ATMSVC
#define __LDBL_REDIR2_DECL(name) 
#define MATH_ERREXCEPT 2
#define __DECL_SIMD_log10 
#define LC_MONETARY __LC_MONETARY
#define __ASM_GENERIC_POSIX_TYPES_H 
#define _POSIX_SPORADIC_SERVER -1
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __USE_GNU 1
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define DYEAR "year"
#define __FLT_MIN_EXP__ (-125)
#define __DECL_SIMD_log1p 
#define JULIAN_MINMONTH (11)
#define lsecond_oid(l) lfirst_oid(lnext(list_head(l)))
#define AD 0
#define WEXITED 4
#define F_GETOWN __F_GETOWN
#define IPV6_V6ONLY 26
#define math_errhandling (MATH_ERRNO | MATH_ERREXCEPT)
#define PG_GET_COLLATION() (fcinfo->fncollation)
#define __DECL_SIMD_log2f 
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define __DECL_SIMD_log2l 
#define REGPROCEDUREOID 2202
#define AF_PPPOX PF_PPPOX
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define HAVE_UNISTD_H 1
#define IPV6_RECVRTHDR 56
#define alloca(size) __builtin_alloca (size)
#define SECOND 12
#define ERRCODE_INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION MAKE_SQLSTATE('2','2','0','1','G')
#define IP_MULTICAST_ALL 49
#define M_LN2f32x __f32x (0.693147180559945309417232121458176568)
#define HAVE_SYS_IPC_H 1
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define ERRCODE_LOCK_FILE_EXISTS MAKE_SQLSTATE('F','0','0','0','1')
#define PF_IRDA 23
#define SIGCHLD 17
#define __THROWNL __attribute__ ((__nothrow__))
#define __WINT_WIDTH__ 32
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define M_PI_2f64 __f64 (1.570796326794896619231321691639751442)
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define M_LN10f64x __f64x (2.302585092994045684017991454684364208)
#define INT_LEAST32_WIDTH 32
#define FASYNC O_ASYNC
#define VARHDRSZ_SHORT offsetof(varattrib_1b, va_data)
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define _LOCALE_H 1
#define MAXALIGN_DOWN(LEN) TYPEALIGN_DOWN(MAXIMUM_ALIGNOF, (LEN))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define ERRCODE_READ_ONLY_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','6')
#define __ARM_FP16_ARGS 1
#define PG_RETURN_BYTEA_P(x) PG_RETURN_POINTER(x)
#define DATEVAL_NOBEGIN ((DateADT) PG_INT32_MIN)
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define ERRCODE_CHARACTER_NOT_IN_REPERTOIRE MAKE_SQLSTATE('2','2','0','2','1')
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define IPV6_RECVTCLASS 66
#define ERRCODE_PROTOCOL_VIOLATION MAKE_SQLSTATE('0','8','P','0','1')
#define __INT_LEAST32_MAX__ 0x7fffffff
#define O_RSYNC O_SYNC
#define __DECL_SIMD_cbrtf32 
#define M_2_SQRTPIf64x __f64x (1.128379167095512573896158903121545172)
#define INFINITY (__builtin_inff ())
#define __DECL_SIMD_logf128x 
#define WINT_MIN (0u)
#define LOCKOPTIONS_H 
#define __STRINGS_FORTIFIED 1
#define EXPANDEDDATUM_H 
#define __key_t_defined 
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define ERRCODE_UNDEFINED_PARAMETER MAKE_SQLSTATE('4','2','P','0','2')
#define __unix__ 1
#define IPV6_MTU 24
#define SO_RCVLOWAT 18
#define __FP_LOGB0_IS_MIN 0
#define LC_ETHIOPIC 0xf5
#define si_arch _sifields._sigsys._arch
#define IPV6_RECVDSTOPTS 58
#define SIG_ATOMIC_WIDTH 32
#define M_PI_4f64x __f64x (0.785398163397448309615660845819875721)
#define JSONARRAYOID 199
#define __DECL_SIMD_powf64 
#define IPPROTO_MTP IPPROTO_MTP
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define __DECL_SIMD_sinh 
#define _XOPEN_LEGACY 1
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __INT16_TYPE__ short int
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define DTK_M(t) (0x01 << (t))
#define __LP64__ 1
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define DatumGetTimestampTz(X) ((TimestampTz) DatumGetInt64(X))
#define INT8ARRAYOID 1016
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define __FLT_EVAL_METHOD_C99__ 0
#define __DECL_SIMD_atan2l 
#define __DECL_SIMD_coshf128 
#define Anum_pg_type_typreceive 16
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __USE_UNIX98 1
#define st_ctime st_ctim.tv_sec
#define WINT_WIDTH 32
#define ERRCODE_CANT_CHANGE_RUNTIME_PARAM MAKE_SQLSTATE('5','5','P','0','2')
#define EOF (-1)
#define PG_END_TRY() } PG_exception_stack = save_exception_stack; error_context_stack = save_context_stack; } while (0)
#define DatumGetVarCharPSlice(X,m,n) ((VarChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define TZDISP_LIMIT ((MAX_TZDISP_HOUR + 1) * SECS_PER_HOUR)
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define ItemPointerGetOffsetNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetOffsetNumberNoCheck(pointer) )
#define ESCAPE_STRING_SYNTAX 'E'
#define __FLT64_MIN_EXP__ (-1021)
#define __DECL_SIMD_sinf 
#define IPV6_RECVERR 25
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PF_MAX 46
#define AssertState(condition) ((void)true)
#define SIGNAL_ARGS int postgres_signal_arg
#define SEEK_DATA 3
#define IP_RECVTOS 13
#define SO_PEERSEC 31
#define SOL_DECNET 261
#define ERRCODE_UNDEFINED_FUNCTION MAKE_SQLSTATE('4','2','8','8','3')
#define ABSTIMEARRAYOID 1023
#define list_make3_int(x1,x2,x3) lcons_int(x1, list_make2_int(x2, x3))
#define ABS_AFTER 21
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define __FDS_BITS(set) ((set)->fds_bits)
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define ERRCODE_L_E_INVALID_SPECIFICATION MAKE_SQLSTATE('0','F','0','0','1')
#define UNITS 17
#define XLogRecPtrIsInvalid(r) ((r) == InvalidXLogRecPtr)
#define __FLT16_MIN_10_EXP__ (-4)
#define IP_TOS 1
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define DatumGetBpCharP(X) ((BpChar *) PG_DETOAST_DATUM(X))
#define PG_NARGS() (fcinfo->nargs)
#define INNER_VAR 65000
#define TRAP_HWBKPT TRAP_HWBKPT
#define M_LOG10Ef32 __f32 (0.434294481903251827651128918916605082)
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __DECL_SIMD_log1pf64x 
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define EIDRM 43
#define PF_ROSE 11
#define WEEK 24
#define ECOMM 70
#define _PC_NAME_MAX _PC_NAME_MAX
#define __BITS_PER_LONG 64
#define BOOLOID 16
#define InvalidAttrNumber 0
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define VARATT_IS_EXTERNAL_NON_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && !VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SET_VARTAG_1B_E(PTR,tag) (((varattrib_1b_e *) (PTR))->va_header = 0x01, ((varattrib_1b_e *) (PTR))->va_tag = (tag))
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define lthird(l) lfirst(lnext(lnext(list_head(l))))
#define __DECL_SIMD_asinhf64x 
#define INTSTYLE_POSTGRES 0
#define _PC_MAX_CANON _PC_MAX_CANON
#define PF_INET6 10
#define palloc0_object(type) ((type *) palloc0(sizeof(type)))
#define VARATT_CAN_MAKE_SHORT(PTR) (VARATT_IS_4B_U(PTR) && (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT) <= VARATT_SHORT_MAX)
#define __USE_POSIX2 1
#define IP_TRANSPARENT 19
#define __DECL_SIMD_sinhf64x 
#define HAVE_WCHAR_H 1
#define M_LOG2Ef32x __f32x (1.442695040888963407359924681001892137)
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ERRCODE_INTERNAL_ERROR MAKE_SQLSTATE('X','X','0','0','0')
#define FRAMEOPTION_END_UNBOUNDED_PRECEDING 0x00040
#define AARR_HASNULL(a) (VARATT_IS_EXPANDED_HEADER(a) ? ((a)->xpn.dvalues != NULL ? (a)->xpn.dnulls != NULL : ARR_HASNULL((a)->xpn.fvalue)) : ARR_HASNULL((ArrayType *) (a)))
#define __DECL_SIMD_exp2f32 
#define DTK_TIME_M (DTK_M(HOUR) | DTK_M(MINUTE) | DTK_ALL_SECS_M)
#define _POSIX_V7_ILP32_OFF32 -1
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define NUMRANGEOID 3906
#define __INT_LEAST32_WIDTH__ 32
#define ERRCODE_INVALID_ROW_COUNT_IN_LIMIT_CLAUSE MAKE_SQLSTATE('2','2','0','1','W')
#define __DECL_SIMD_cbrtf64x 
#define __siginfo_t_defined 1
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define SIGEV_THREAD SIGEV_THREAD
#define CHECK_FOR_INTERRUPTS() do { if (INTERRUPTS_PENDING_CONDITION()) ProcessInterrupts(); } while(0)
#define IPV6_2292PKTINFO 2
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define AF_IUCV PF_IUCV
#define __DECL_SIMD_erfcf32 
#define __DECL_SIMD_atanh 
#define TransactionIdGetDatum(X) ((Datum) (X))
#define __VERSION__ "11.3.0"
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define FP_LLOGB0 (-__FP_LONG_MAX)
#define TXID_SNAPSHOTOID 2970
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define IP_PKTINFO 8
#define __UINT64_C(c) c ## UL
#define ACL_CONNECT (1<<11)
#define INT64CONST(x) (x ##L)
#define USE_XSD_DATES 4
#define _SYS_CDEFS_H 1
#define MemSet(start,val,len) do { void *_vstart = (void *) (start); int _val = (val); Size _len = (len); if ((((uintptr_t) _vstart) & LONG_ALIGN_MASK) == 0 && (_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0)
#define __DECL_SIMD_exp2f64 
#define INDEX_MAX_KEYS 32
#define isprint(c) __isctype((c), _ISprint)
#define SET_VARSIZE_4B_C(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2) | 0x02)
#define RENAME_WHITEOUT (1 << 2)
#define ERRCODE_INVALID_XML_PROCESSING_INSTRUCTION MAKE_SQLSTATE('2','2','0','0','T')
#define Anum_pg_type_typdefault 29
#define EBFONT 59
#define HAVE_SYS_SEM_H 1
#define issubnormal(x) (fpclassify (x) == FP_SUBNORMAL)
#define PG_PORT_H 
#define _POSIX_VERSION 200809L
#define _STDC_PREDEF_H 1
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define islessequal(x,y) __builtin_islessequal(x, y)
#define INT_FAST8_WIDTH 8
#define __INT_WCHAR_T_H 
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define PGDLLEXPORT 
#define SET_VARSIZE_COMPRESSED(PTR,len) SET_VARSIZE_4B_C(PTR, len)
#define __DECL_SIMD_hypotf32x 
#define PARTITION_STRATEGY_HASH 'h'
#define copyObject(obj) ((typeof(obj)) copyObjectImpl(obj))
#define HAVE_GCC__SYNC_INT32_CAS 1
#define SOCK_DGRAM SOCK_DGRAM
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define DN_RENAME 0x00000010
#define __bitwise __bitwise__
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define ERRCODE_INDEX_CORRUPTED MAKE_SQLSTATE('X','X','0','0','2')
#define DAY 3
#define __WINT_MAX__ 0xffffffffU
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define ENOTSOCK 88
#define __ARM_FEATURE_FMA 1
#define O_RDWR 02
#define ERRCODE_INVALID_ESCAPE_SEQUENCE MAKE_SQLSTATE('2','2','0','2','5')
#define palloc_object(type) ((type *) palloc(sizeof(type)))
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _T_PTRDIFF_ 
#define XMLOID 142
#define DA_D "ad"
#define MSG_CONFIRM MSG_CONFIRM
#define ABSTIMEOID 702
#define TRAP_TRACE TRAP_TRACE
#define M_SQRT2f32x __f32x (1.414213562373095048801688724209698079)
#define PF_FILE PF_LOCAL
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define ENOTDIR 20
#define Anum_pg_attribute_attcollation 20
#define __DECL_SIMD_tanf128x 
#define __DECL_SIMD_acoshf 
#define FPE_CONDTRAP FPE_CONDTRAP
#define SIGBUS 7
#define SOL_NFC 280
#define PARTDEFS_H 
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define ARR_OVERHEAD_NONULLS(ndims) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims))
#define TEXTOID 25
#define ERRCODE_NULL_VALUE_NO_INDICATOR_PARAMETER MAKE_SQLSTATE('2','2','0','0','2')
#define INTERRUPTS_PENDING_CONDITION() (unlikely(InterruptPending))
#define BOXOID 603
#define __DECL_SIMD_cos 
#define ERRCODE_INVALID_COLUMN_REFERENCE MAKE_SQLSTATE('4','2','P','1','0')
#define INT4ARRAYOID 1007
#define VARSIZE_EXTERNAL(PTR) (VARHDRSZ_EXTERNAL + VARTAG_SIZE(VARTAG_EXTERNAL(PTR)))
#define __FLT32_MANT_DIG__ 24
#define ACL_ALL_RIGHTS_TYPE (ACL_USAGE)
#define FP_INT_UPWARD 0
#define SVE_VQ_MAX __SVE_VQ_MAX
#define INTALIGN(LEN) TYPEALIGN(ALIGNOF_INT, (LEN))
#define isupper_l(c,l) __isupper_l ((c), (l))
#define ERRCODE_INDETERMINATE_COLLATION MAKE_SQLSTATE('4','2','P','2','2')
#define SIGINT 2
#define __DECL_SIMD_expf128 
#define __STDC_IEC_60559_BFP__ 201404L
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define ACL_EXECUTE (1<<7)
#define __DECL_SIMD_tanf16 
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define __S_IFDIR 0040000
#define USE_POSIX_FADVISE 
#define __SIZE_T__ 
#define RELSEG_SIZE 131072
#define __stub_gtty 
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define __DECL_SIMD_powf128 
#define _LFS64_ASYNCHRONOUS_IO 1
#define O_DIRECTORY __O_DIRECTORY
#define IP_PASSSEC 18
#define IPPORT_RESERVED 1024
#define SEEK_HOLE 4
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define si_utime _sifields._sigchld.si_utime
#define PG_GETARG_UINT16(n) DatumGetUInt16(PG_GETARG_DATUM(n))
#define ItemIdGetLength(itemId) ((itemId)->lp_len)
#define MSG_BATCH MSG_BATCH
#define __DECL_SIMD_tanf32 
#define LC_PAPER __LC_PAPER
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define DTZMOD 28
#define M_Ef64x __f64x (2.718281828459045235360287471352662498)
#define AI_ALL 0x0010
#define TIMEARRAYOID 1183
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define FFSYNC O_FSYNC
#define __DECL_SIMD_exp10f32x 
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define __wur __attribute_warn_unused_result__
#define SIGHUP 1
#define __FLT16_DIG__ 3
#define PG_GETARG_UINT32(n) DatumGetUInt32(PG_GETARG_DATUM(n))
#define ELOOP 40
#define Anum_pg_attribute_atttypmod 9
#define __FLT128_HAS_DENORM__ 1
#define VARATT_IS_EXTERNAL_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define __DECL_SIMD_logf32 
#define F_SETFL 4
#define SIG_UNBLOCK 1
#define MAX_TIME_PRECISION 6
#define __off64_t_defined 
#define __F_GETSIG 11
#define IN_CLASSB_MAX 65536
#define ACL_SELECT_CHR 'r'
#define __ORDER_PDP_ENDIAN__ 3412
#define _POSIX_TIMERS 200809L
#define _SYS_SIZE_T_H 
#define __PDP_ENDIAN 3412
#define DT_NOBEGIN PG_INT64_MIN
#define FunctionCall1(flinfo,arg1) FunctionCall1Coll(flinfo, InvalidOid, arg1)
#define FunctionCall2(flinfo,arg1,arg2) FunctionCall2Coll(flinfo, InvalidOid, arg1, arg2)
#define FunctionCall3(flinfo,arg1,arg2,arg3) FunctionCall3Coll(flinfo, InvalidOid, arg1, arg2, arg3)
#define FunctionCall4(flinfo,arg1,arg2,arg3,arg4) FunctionCall4Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4)
#define FunctionCall5(flinfo,arg1,arg2,arg3,arg4,arg5) FunctionCall5Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define FunctionCall6(flinfo,arg1,arg2,arg3,arg4,arg5,arg6) FunctionCall6Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define FunctionCall8(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) FunctionCall8Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define FunctionCall9(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) FunctionCall9Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define EL2HLT 51
#define __ARM_64BIT_STATE 1
#define LC_ASCII_RIGHT_TO_LEFT 0xa6
#define SIZEOF_OFF_T 8
#define DEFAULT_SYNC_METHOD PLATFORM_DEFAULT_SYNC_METHOD
#define POLL_PRI POLL_PRI
#define MAXPGPATH 1024
#define ACL_ALL_RIGHTS_TABLESPACE (ACL_CREATE)
#define __socklen_t_defined 
#define SO_ACCEPTCONN 30
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define PF_ROUTE PF_NETLINK
#define __have_pthread_attr_t 1
#define VARSIZE_ANY_EXHDR(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR)-VARHDRSZ_EXTERNAL : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR)-VARHDRSZ_SHORT : VARSIZE_4B(PTR)-VARHDRSZ))
#define _SC_FD_MGMT _SC_FD_MGMT
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define _XOPEN_VERSION 700
#define ILL_COPROC ILL_COPROC
#define USE_OPENSSL_RANDOM 1
#define RELCACHE_INIT_FILENAME "pg_internal.init"
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define Anum_pg_attribute_attidentity 16
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define _STRUCT_TIMESPEC 1
#define __FLT64X_HAS_DENORM__ 1
#define IPPROTO_UDP IPPROTO_UDP
#define STDC_HEADERS 1
#define M_2_SQRTPIf 1.12837916709551257390f
#define Int16GetDatum(X) ((Datum) (X))
#define ERRCODE_INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','3')
#define GENBKI_H 
#define SS_ONSTACK SS_ONSTACK
#define MILLENNIUM 27
#define RWH_WRITE_LIFE_MEDIUM 3
#define F_SETLK 6
#define UINT16_WIDTH 16
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define HAVE_LONG_INT_64 1
#define __INT16_MAX__ 0x7fff
#define EKEYREJECTED 129
#define _BSD_SIZE_T_ 
#define INETARRAYOID 1041
#define TYPCATEGORY_UNKNOWN 'X'
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define M_2_SQRTPI 1.12837916709551257390
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define VARATT_IS_1B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x01)
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define AF_KEY PF_KEY
#define ERRCODE_IN_FAILED_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','2')
#define OIDARRAYOID 1028
#define __DECL_SIMD_log2 
#define SOL_SOCKET 1
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __FLT32_MIN_EXP__ (-125)
#define AF_INET PF_INET
#define FLOAT4_FITS_IN_INT16(num) ((num) >= (float4) PG_INT16_MIN && (num) < -((float4) PG_INT16_MIN))
#define PGSIXBIT(ch) (((ch) - '0') & 0x3F)
#define PG_DETOAST_DATUM_COPY(datum) pg_detoast_datum_copy((struct varlena *) DatumGetPointer(datum))
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define SOL_NETBEUI 267
#define __DECL_SIMD_coshl 
#define LC_NUMERIC __LC_NUMERIC
#define DTK_HOUR 20
#define ERRCODE_UNDEFINED_DATABASE MAKE_SQLSTATE('3','D','0','0','0')
#define __HAVE_DISTINCT_FLOAT128 0
#define DTK_DOW 32
#define __DECL_SIMD_exp10f 
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define NOTICE 18
#define IPV6_PMTUDISC_DO 2
#define IPV6_PKTINFO 50
#define VARATT_IS_4B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x00)
#define DMILLENNIUM "millennium"
#define DTK_DOY 33
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define OidIsValid(objectId) ((bool) ((objectId) != InvalidOid))
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define __F_GETOWN_EX 16
#define SpecTokenOffsetNumber 0xfffe
#define PG_MAJORVERSION "11"
#define SIOCGSTAMP_OLD 0x8906
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define __DECL_SIMD_asinf32x 
#define OUTER_VAR 65001
#define ERRCODE_FDW_INVALID_OPTION_INDEX MAKE_SQLSTATE('H','V','0','0','C')
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define _SYS_TYPES_H 1
#define __DECL_SIMD_log10f64 
#define O_NOATIME __O_NOATIME
#define SO_RXQ_OVFL 40
#define __DECL_SIMD_asinhf16 
#define AI_V4MAPPED 0x0008
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define SOL_IRDA 266
#define MAXDIM 6
#define BKI_WITHOUT_OIDS 
#define HR24 2
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define DAGO "ago"
#define SO_ERROR 4
#define _POSIX_C_SOURCE 200809L
#define IP_MULTICAST_IF 32
#define ACL_NUM(ACL) (ARR_DIMS(ACL)[0])
#define IP_DROP_MEMBERSHIP 36
#define InvalidOffsetNumber ((OffsetNumber) 0)
#define HAVE_SSL_CLEAR_OPTIONS 1
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_LEAVE_GROUP 21
#define INT64_MODIFIER "l"
#define SEGV_ADIDERR SEGV_ADIDERR
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define ERRCODE_INVALID_CURSOR_STATE MAKE_SQLSTATE('2','4','0','0','0')
#define ENAVAIL 119
#define ACL_ID_PUBLIC 0
#define __DECL_SIMD_tanh 
#define SO_SNDBUFFORCE 32
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define __DECL_SIMD_exp2l 
#define INTERVALARRAYOID 1187
#define HAVE_DECL_STRTOULL 1
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define _POSIX_V7_LPBIG_OFFBIG -1
#define OffsetToPointer(base,offset) ((void *)((char *) base + offset))
#define PG_DIAG_CONTEXT 'W'
#define ACL_ALL_RIGHTS_FUNCTION (ACL_EXECUTE)
#define foreach(cell,l) for ((cell) = list_head(l); (cell) != NULL; (cell) = lnext(cell))
#define lthird_node(type,l) castNode(type, lthird(l))
#define __blksize_t_defined 
#define DMICROSEC "usecond"
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define O_SYNC 04010000
#define M_PI 3.14159265358979323846
#define __DECL_SIMD_asinhf64 
#define SOL_XDP 283
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define HAVE_UNSETENV 1
#define _LFS64_LARGEFILE 1
#define HAVE_TERMIOS_H 1
#define PF_NETBEUI 13
#define PG_RETURN_TIMETZADT_P(x) return TimeTzADTPGetDatum(x)
#define SO_MAX_PACING_RATE 47
#define __WCHAR_MAX __WCHAR_MAX__
#define __GLIBC_USE_ISOC2X 1
#define __DECL_SIMD_sinf128x 
#define _ANSI_STDDEF_H 
#define _CS_V7_ENV _CS_V7_ENV
#define ERRCODE_TOO_MANY_CONNECTIONS MAKE_SQLSTATE('5','3','3','0','0')
#define IP_PMTUDISC_WANT 1
#define IP_XFRM_POLICY 17
#define FUNC_MAX_ARGS 100
#define __iovec_defined 1
#define FALLOC_FL_KEEP_SIZE 0x01
#define ERRCODE_NOT_NULL_VIOLATION MAKE_SQLSTATE('2','3','5','0','2')
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define ObjectIdGetDatum(X) ((Datum) (X))
#define IN_CLASSA_MAX 128
#define STATUS_ERROR (-1)
#define VARHDRSZ_EXTERNAL offsetof(varattrib_1b_e, va_data)
#define NAMEDATALEN 64
#define _XOPEN_SOURCE_EXTENDED 1
#define ACLITEMARRAYOID 1034
#define ESR_MAGIC 0x45535201
#define IPV6_RECVPATHMTU 60
#define Assert(condition) ((void)true)
#define ItemPointerSetBlockNumber(pointer,blockNumber) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber) )
#define SO_DETACH_FILTER 27
#define LOCK_MAND 32
#define EAI_AGAIN -3
#define DTK_MICROSEC 30
#define __DECL_SIMD_atanf32x 
#define AF_MPLS PF_MPLS
#define INT8_C(c) c
#define PF_IB 27
#define ENOMEDIUM 123
#define LONGALIGN(LEN) TYPEALIGN(ALIGNOF_LONG, (LEN))
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define __UWORD_TYPE unsigned long int
#define TRAP_BRKPT TRAP_BRKPT
#define F_OFD_SETLK 37
#define MILLISECOND 13
#define TRAP_UNK TRAP_UNK
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __FLT64_IS_IEC_60559__ 2
#define __MATHDECL_VEC(type,function,suffix,args) __SIMD_DECL (__MATH_PRECNAME (function, suffix)) __MATHDECL(type, function,suffix, args)
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __AARCH64EL__ 1
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define USECS_PER_HOUR INT64CONST(3600000000)
#define __S_IFCHR 0020000
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define pairingheap_const_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, const pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((const type *) ((const char *) (ptr) - offsetof(type, membername))))
#define __O_DSYNC 010000
#define __DECL_SIMD_coshf 
#define ISODATE 22
#define ERRCODE_FDW_INVALID_HANDLE MAKE_SQLSTATE('H','V','0','0','B')
#define _XOPEN_ENH_I18N 1
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define LINEOID 628
#define __timer_t_defined 1
#define HAVE_STRUCT_TM_TM_ZONE 1
#define __WCLONE 0x80000000
#define VARSIZE_ANY(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR) : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR) : VARSIZE_4B(PTR)))
#define __DECL_SIMD_atanhf32x 
#define TYPCATEGORY_ARRAY 'A'
#define __DECL_SIMD_exp10l 
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define FP_INT_TONEAREST 4
#define FRAMEOPTION_EXCLUSION (FRAMEOPTION_EXCLUDE_CURRENT_ROW | FRAMEOPTION_EXCLUDE_GROUP | FRAMEOPTION_EXCLUDE_TIES)
#define SNANF32X (__builtin_nansf32x (""))
#define ERRCODE_FDW_INVALID_COLUMN_NUMBER MAKE_SQLSTATE('H','V','0','0','8')
#define DatumGetAclItemP(X) ((AclItem *) DatumGetPointer(X))
#define ERRCODE_INVALID_SCHEMA_DEFINITION MAKE_SQLSTATE('4','2','P','1','5')
#define SNAPSHOT_H 
#define FETCH_ALL LONG_MAX
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define AssertMacro(condition) ((void)true)
#define PGDLLIMPORT 
#define EROFS 30
#define SIOCSPGRP 0x8902
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define ACL_CREATE_CHR 'C'
#define AttributeNumberIsValid(attributeNumber) ((bool) ((attributeNumber) != InvalidAttrNumber))
#define __DECL_SIMD_cosf32 
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define HAVE_SYNC_FILE_RANGE 1
#define SIGSYS 31
#define HAVE_IPV6 1
#define SO_BSDCOMPAT 14
#define __DECL_SIMD_coshf128x 
#define __DECL_SIMD_atanf16 
#define HAVE__BUILTIN_UNREACHABLE 1
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define IPV6_RTHDRDSTOPTS 55
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define __DECL_SIMD_log2f32x 
#define INT32_C(c) c
#define _____fpos64_t_defined 1
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define LOG_DESTINATION_EVENTLOG 4
#define __DECL_SIMD_erfcf128 
#define __DECL_SIMD_asinf128 
#define ACLITEMOID 1033
#define F_DUPFD_CLOEXEC 1030
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __WCHAR_T__ 
#define HAVE_VSNPRINTF 1
#define HAVE_LDAP_H 1
#define __SIZEOF_SIZE_T__ 8
#define InvalidOid ((Oid) 0)
#define HAVE_CBRT 1
#define __glibc_objsize0(__o) __bos0 (__o)
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define PG_INT8_MAX (0x7F)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DECL_SIMD_atanf32 
#define NI_DGRAM 16
#define MCAST_UNBLOCK_SOURCE 44
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define TRAP_BRANCH TRAP_BRANCH
#define __DECL_SIMD_cosf64 
#define IPV6_TCLASS 67
#define pgoff_t off_t
#define fpclassify(x) __builtin_fpclassify (FP_NAN, FP_INFINITE, FP_NORMAL, FP_SUBNORMAL, FP_ZERO, x)
#define MINUTE 11
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define ERRCODE_UNDEFINED_SCHEMA MAKE_SQLSTATE('3','F','0','0','0')
#define ERRCODE_SYSTEM_ERROR MAKE_SQLSTATE('5','8','0','0','0')
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define TupleDescSize(src) (offsetof(struct tupleDesc, attrs) + (src)->natts * sizeof(FormData_pg_attribute))
#define _POSIX_RAW_SOCKETS 200809L
#define Anum_pg_attribute_attacl 21
#define Anum_pg_type_typnamespace 2
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define DatumGetTextPP(X) ((text *) PG_DETOAST_DATUM_PACKED(X))
#define FKCONSTR_MATCH_FULL 'f'
#define DTERR_FIELD_OVERFLOW (-2)
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define __PRAGMA_REDEFINE_EXTNAME 1
#define list_make5_oid(x1,x2,x3,x4,x5) lcons_oid(x1, list_make4_oid(x2, x3, x4, x5))
#define __ss_aligntype unsigned long int
#define ItemPointerIsValid(pointer) ((bool) (PointerIsValid(pointer) && ((pointer)->ip_posid != 0)))
#define va_end(v) __builtin_va_end(v)
#define SIGEV_NONE SIGEV_NONE
#define __FLT16_DECIMAL_DIG__ 5
#define Anum_pg_type_typnotnull 23
#define _STRINGS_H 1
#define __F_SETOWN 8
#define _VA_LIST_DEFINED 
#define __DECL_SIMD_cosf 
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define __BLKSIZE_T_TYPE __S32_TYPE
#define PF_ECONET 19
#define __INT_LEAST16_MAX__ 0x7fff
#define linitial(l) lfirst(list_head(l))
#define _SC_CLK_TCK _SC_CLK_TCK
#define __DBL_MAX_10_EXP__ 308
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define IS_LCPRV1_A_RANGE(c) ((unsigned char)(c) >= 0xa0 && (unsigned char)(c) <= 0xdf)
#define UINT64_WIDTH 64
#define __INT64_MAX__ 0x7fffffffffffffffL
#define __DECL_SIMD_erff128 
#define _BITS_ENDIAN_H 1
#define EDEADLK 35
#define ERRCODE_CANNOT_COERCE MAKE_SQLSTATE('4','2','8','4','6')
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define IsBootstrapProcessingMode() (Mode == BootstrapProcessing)
#define __SIG_ATOMIC_WIDTH__ 32
#define HAVE_UNIX_SOCKETS 1
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define ERRCODE_E_R_I_E_INVALID_SQLSTATE_RETURNED MAKE_SQLSTATE('3','9','0','0','1')
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define INT2VECTORARRAYOID 1006
#define htole16(x) __uint16_identity (x)
#define ERRCODE_TRIGGERED_ACTION_EXCEPTION MAKE_SQLSTATE('0','9','0','0','0')
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define __DECL_SIMD_sin 
#define __DECL_SIMD_coshf16 
#define ERRCODE_TOO_MANY_ARGUMENTS MAKE_SQLSTATE('5','4','0','2','3')
#define htole32(x) __uint32_identity (x)
#define PG_INT8_MIN (-0x7F-1)
#define HAVE_RL_COMPLETION_MATCHES 1
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define F_WRLCK 1
#define MONTHS_PER_YEAR 12
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define PRS2_NEW_VARNO 2
#define NI_NUMERICSERV 2
#define __DECL_SIMD_coshf32 
#define si_call_addr _sifields._sigsys._call_addr
#define __DECL_SIMD_sinhf 
#define linux 1
#define IsNormalProcessingMode() (Mode == NormalProcessing)
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define SOL_DCCP 269
#define AI_IDN 0x0040
#define TIMESTAMP_NOBEGIN(j) do {(j) = DT_NOBEGIN;} while (0)
#define ntohl(x) __bswap_32 (x)
#define SA_NOCLDSTOP 1
#define ntohs(x) __bswap_16 (x)
#define __DECL_SIMD_logl 
#define DATERANGEARRAYOID 3913
#define BITS_PER_BITMAPWORD 32
#define INTERNALOID 2281
#define __DECL_SIMD_exp2f32x 
#define isgreater(x,y) __builtin_isgreater(x, y)
#define ERRCODE_DUPLICATE_FILE MAKE_SQLSTATE('5','8','P','0','2')
#define REFCURSORARRAYOID 2201
#define ____FILE_defined 1
#define HAVE_DECL_STRLCAT 0
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define __DECL_SIMD_asinf 
#define ILL_PRVREG ILL_PRVREG
#define PDP_ENDIAN __PDP_ENDIAN
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define htole64(x) __uint64_identity (x)
#define LSEGOID 601
#define FPE_FLTINV FPE_FLTINV
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define F_SETLKW 7
#define SA_INTERRUPT 0x20000000
#define O_LARGEFILE __O_LARGEFILE
#define M_SQRT1_2f128 __f128 (0.707106781186547524400844362104849039)
#define ERRCODE_IDLE_IN_TRANSACTION_SESSION_TIMEOUT MAKE_SQLSTATE('2','5','P','0','3')
#define __DECL_SIMD_coshf64 
#define ERRCODE_E_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','4')
#define __FLT32_MIN_10_EXP__ (-37)
#define MCAST_MSFILTER 48
#define __GNUC_MINOR__ 3
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define __FLT32X_DIG__ 15
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define ERRCODE_UNIQUE_VIOLATION MAKE_SQLSTATE('2','3','5','0','5')
#define PG_VALID_FE_ENCODING(_enc) PG_VALID_ENCODING(_enc)
#define ERRCODE_NAME_TOO_LONG MAKE_SQLSTATE('4','2','6','2','2')
#define ERRCODE_FDW_INVALID_DATA_TYPE MAKE_SQLSTATE('H','V','0','0','4')
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define SVE_VL_MIN __SVE_VL_MIN
#define HAVE_LANGINFO_H 1
#define STDOUT_FILENO 1
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define _SC_PII_XTI _SC_PII_XTI
#define FKCONSTR_ACTION_SETDEFAULT 'd'
#define SA_NODEFER 0x40000000
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define pairingheap_is_singular(h) ((h)->ph_root && (h)->ph_root->first_child == NULL)
#define LC_TELEPHONE __LC_TELEPHONE
#define MIN_TIMESTAMP INT64CONST(-211813488000000000)
#define ENAMETOOLONG 36
#define ERRCODE_DEPENDENT_OBJECTS_STILL_EXIST MAKE_SQLSTATE('2','B','P','0','1')
#define ERRCODE_FDW_OUT_OF_MEMORY MAKE_SQLSTATE('H','V','0','0','1')
#define USE_ISO_DATES 1
#define TYPCATEGORY_STRING 'S'
#define ACL_UPDATE (1<<2)
#define CLD_STOPPED CLD_STOPPED
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DBL_HAS_QUIET_NAN__ 1
#define SET_VARSIZE_SHORT(PTR,len) SET_VARSIZE_1B(PTR, len)
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define TIMESTAMP_IS_NOBEGIN(j) ((j) == DT_NOBEGIN)
#define HAVE_STRONG_RANDOM 1
#define BPCHARARRAYOID 1014
#define IPPROTO_MPLS IPPROTO_MPLS
#define ERRCODE_INTERVAL_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','1','5')
#define HUGE_VAL_F64X (__builtin_huge_valf64x ())
#define AF_VSOCK PF_VSOCK
#define BUS_ADRERR BUS_ADRERR
#define DATE_IS_NOEND(j) ((j) == DATEVAL_NOEND)
#define ARR_DIMS(a) ((int *) (((char *) (a)) + sizeof(ArrayType)))
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define __f128(x) x ##f128
#define ACLITEM_SET_RIGHTS(item,rights) ((item).ai_privs = (AclMode) (rights))
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define _POSIX_V7_ILP32_OFFBIG -1
#define pg_bswap32(x) __builtin_bswap32(x)
#define TYPCATEGORY_RANGE 'R'
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define __FLT16_MANT_DIG__ 11
#define __MATHCALL_VEC(function,suffix,args) __SIMD_DECL (__MATH_PRECNAME (function, suffix)) __MATHCALL (function, suffix, args)
#define __DECL_SIMD_asin 
#define ESOCKTNOSUPPORT 94
#define TEXTDOMAIN NULL
#define AF_LOCAL PF_LOCAL
#define __INTPTR_TYPE__ long int
#define __WCHAR_TYPE__ unsigned int
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define __DECL_SIMD_tan 
#define HAVE_UUID_UUID_H 1
#define HAVE_INTPTR_T 1
#define HeapTupleIsValid(tuple) PointerIsValid(tuple)
#define Anum_pg_type_typacl 30
#define POSTGRES_H 
#define IP_RECVTTL 12
#define __pic__ 2
#define lfirst(lc) ((lc)->data.ptr_value)
#define MaxOffsetNumber ((OffsetNumber) (BLCKSZ / sizeof(ItemIdData)))
#define __S_IFLNK 0120000
#define __ARM_ARCH_8A 1
#define TSQUERYOID 3615
#define __stub_chflags 
#define ERRCODE_LOCK_NOT_AVAILABLE MAKE_SQLSTATE('5','5','P','0','3')
#define HAVE_INT128 1
#define FLOAT8OID 701
#define CURSOR_OPT_CUSTOM_PLAN 0x0080
#define list_make4_oid(x1,x2,x3,x4) lcons_oid(x1, list_make3_oid(x2, x3, x4))
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define EDOTDOT 73
#define __DECL_SIMD_asinf64x 
#define __DECL_SIMD_cosf16 
#define __FLT32_DECIMAL_DIG__ 9
#define __O_DIRECT 0200000
#define PF_SMC 43
#define __USE_POSIX 1
#define PF_NFC 39
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define HAVE_RANDOM 1
#define INT_LEAST16_WIDTH 16
#define REGNAMESPACEOID 4089
#define BUFSIZ 8192
#define M_SQRT2l 1.414213562373095048801688724209698079L
#define HAVE_SHM_OPEN 1
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define AG_AGTYPE_PARSER_H 
#define ACL_MODECHG_EQL 3
#define SO_PEEK_OFF 42
#define DatumGetCString(X) ((char *) DatumGetPointer(X))
#define isunordered(x,y) __builtin_isunordered(x, y)
#define castNode(_type_,nodeptr) ((_type_ *) (nodeptr))
#define __FLT_MAX_10_EXP__ 38
#define _WCHAR_T_DECLARED 
#define DATE_NOT_FINITE(j) (DATE_IS_NOBEGIN(j) || DATE_IS_NOEND(j))
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define WNOWAIT 0x01000000
#define M_LN10 2.30258509299404568402
#define DB_C "bc"
#define MultiXactIdGetDatum(X) ((Datum) (X))
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define AF_ALG PF_ALG
#define _SC_2_PBS _SC_2_PBS
#define AF_QIPCRTR PF_QIPCRTR
#define ERRCODE_NOT_AN_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','L')
#define _FCNTL_H 1
#define IPV6_ADDR_PREFERENCES 72
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define FRAMEOPTION_START_OFFSET_FOLLOWING 0x02000
#define DatumGetBpCharPP(X) ((BpChar *) PG_DETOAST_DATUM_PACKED(X))
#define __LC_COLLATE 3
#define DatumGetBpCharPCopy(X) ((BpChar *) PG_DETOAST_DATUM_COPY(X))
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define M_LN2f 0.69314718055994530942f
#define M_LN2l 0.693147180559945309417232121458176568L
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define _POSIX_ADVISORY_INFO 200809L
#define DTK_MILLENNIUM 28
#define HAVE_DECL_STRLCPY 0
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define ERRCODE_T_R_SERIALIZATION_FAILURE MAKE_SQLSTATE('4','0','0','0','1')
#define EPROTONOSUPPORT 93
#define TSRANGEARRAYOID 3909
#define _BITS_STDINT_INTN_H 1
#define __TIMESIZE 64
#define INVERT_COMPARE_RESULT(var) ((var) = ((var) < 0) ? 1 : -(var))
#define __DECL_SIMD_acosf16 
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define ERRCODE_INVALID_TIME_ZONE_DISPLACEMENT_VALUE MAKE_SQLSTATE('2','2','0','0','9')
#define BKI_SCHEMA_MACRO 
#define IN_CLASSC_NET 0xffffff00
#define M_SQRT2 1.41421356237309504880
#define __SIGRTMAX 64
#define LONG_ALIGN_MASK (sizeof(long) - 1)
#define __USE_LARGEFILE64 1
#define ERRCODE_FDW_SCHEMA_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','Q')
#define __FLT16_HAS_QUIET_NAN__ 1
#define IP_PMTUDISC_OMIT 5
#define ERRCODE_FDW_INVALID_DATA_TYPE_DESCRIPTORS MAKE_SQLSTATE('H','V','0','0','6')
#define SYNC_FILE_RANGE_WRITE 2
#define IsInitProcessingMode() (Mode == InitProcessing)
#define __cookie_io_functions_t_defined 1
#define __gid_t_defined 
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define IN_LOOPBACKNET 127
#define MONTH 1
#define VARDATA_1B(PTR) (((varattrib_1b *) (PTR))->va_data)
#define PointerIsAligned(pointer,type) (((uintptr_t)(pointer) % (sizeof (type))) == 0)
#define __DECL_SIMD_erfcl 
#define MICROSECOND 14
#define NETDB_SUCCESS 0
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define __DECL_SIMD_atanhf64 
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
#define __SVE_VQ_BYTES 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define TSVECTOROID 3614
#define linitial_int(l) lfirst_int(list_head(l))
#define AF_ATMPVC PF_ATMPVC
#define LC_CTYPE __LC_CTYPE
#define __UINT_LEAST32_TYPE__ unsigned int
#define SET_VARSIZE(PTR,len) SET_VARSIZE_4B(PTR, len)
#define _XBS5_ILP32_OFFBIG -1
#define _CTYPE_H 1
#define AF_ASH PF_ASH
#define FNDELAY O_NDELAY
#define IPPROTO_GRE IPPROTO_GRE
#define DOUBLEALIGN(LEN) TYPEALIGN(ALIGNOF_DOUBLE, (LEN))
#define __LDBL_MIN_EXP__ (-16381)
#define VARDATA_4B(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_data)
#define __DECL_SIMD_acosf64 
#define VARTAG_EXTERNAL(PTR) VARTAG_1B_E(PTR)
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define lsecond_int(l) lfirst_int(lnext(list_head(l)))
#define __BIT_TYPES_DEFINED__ 1
#define _POSIX_VDISABLE '\0'
#define __size_t 
#define USE_SYSV_SHARED_MEMORY 1
#define IPV6_RECVPKTINFO 49
#define __DECL_SIMD_log 
#define stdout stdout
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define MSG_RST MSG_RST
#define IP_OPTIONS 4
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define REGTYPEARRAYOID 2211
#define __struct_FILE_defined 1
#define Anum_pg_type_typanalyze 20
#define lfirst_int(lc) ((lc)->data.int_value)
#define INTPTR_WIDTH __WORDSIZE
#define HAVE_UTIME_H 1
#define DatumGetTextPCopy(X) ((text *) PG_DETOAST_DATUM_COPY(X))
#define ACL_INSERT (1<<0)
#define VARDATA_ANY(PTR) (VARATT_IS_1B(PTR) ? VARDATA_1B(PTR) : VARDATA_4B(PTR))
#define __FLT32X_MAX_10_EXP__ 308
#define INT32_WIDTH 32
#define palloc0fast(sz) ( MemSetTest(0, sz) ? MemoryContextAllocZeroAligned(CurrentMemoryContext, sz) : MemoryContextAllocZero(CurrentMemoryContext, sz) )
#define be64toh(x) __bswap_64 (x)
#define ____mbstate_t_defined 1
#define SO_ATTACH_REUSEPORT_EBPF 52
#define __SIGRTMIN 32
#define PG_UINT64_MAX UINT64CONST(0xFFFFFFFFFFFFFFFF)
#define CURSOR_OPT_INSENSITIVE 0x0008
#define O_RDONLY 00
#define SO_RCVBUFFORCE 33
#define __DECL_SIMD_powf32x 
#define ERRCODE_INVALID_ARGUMENT_FOR_POWER_FUNCTION MAKE_SQLSTATE('2','2','0','1','F')
#define _BITS_SIGNUM_GENERIC_H 1
#define DATETIME_H 
#define ERRCODE_WARNING_DEPRECATED_FEATURE MAKE_SQLSTATE('0','1','P','0','1')
#define IP_PMTUDISC 10
#define L_INCR SEEK_CUR
#define ERRCODE_DUPLICATE_TABLE MAKE_SQLSTATE('4','2','P','0','7')
#define EMSGSIZE 90
#define __ASM_POSIX_TYPES_H 
#define TYPCATEGORY_NETWORK 'I'
#define __DECL_SIMD_cbrtf64 
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define __INT_LEAST32_TYPE__ int
#define ANYNONARRAYOID 2776
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define PG_GETARG_DATEADT(n) DatumGetDateADT(PG_GETARG_DATUM(n))
#define RWH_WRITE_LIFE_NONE 1
#define InvalidCommandId (~(CommandId)0)
#define SOL_CAIF 278
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define ERRCODE_OBJECT_NOT_IN_PREREQUISITE_STATE MAKE_SQLSTATE('5','5','0','0','0')
#define _SIZET_ 
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define _LP64 1
#define ACL_OPTION_TO_PRIVS(privs) (((AclMode) (privs) >> 16) & 0xFFFF)
#define PG_RETURN_VARCHAR_P(x) PG_RETURN_POINTER(x)
#define MAXALIGN(LEN) TYPEALIGN(MAXIMUM_ALIGNOF, (LEN))
#define __UINT8_C(c) c
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE IPPROTO_NONE
#define TIMESTAMP_NOT_FINITE(j) (TIMESTAMP_IS_NOBEGIN(j) || TIMESTAMP_IS_NOEND(j))
#define __S_IFSOCK 0140000
#define __stub_stty 
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define list_make3_oid(x1,x2,x3) lcons_oid(x1, list_make2_oid(x2, x3))
#define __ASM_GENERIC_SOCKIOS_H 
#define LC_GB2312_80 0x91
#define DTERR_MD_FIELD_OVERFLOW (-3)
#define __UINT64_TYPE__ long unsigned int
#define TSTZRANGEARRAYOID 3911
#define EAI_ADDRFAMILY -9
#define IsA(nodeptr,_type_) (nodeTag(nodeptr) == T_ ##_type_)
#define FirstCommandId ((CommandId) 0)
#define __ARM_NEON 1
#define newNode(size,tag) ({ Node *_result; AssertMacro((size) >= sizeof(Node)); _result = (Node *) palloc0fast(size); _result->type = (tag); _result; })
#define FRAMEOPTION_START_UNBOUNDED_PRECEDING 0x00020
#define INTERVAL_TYPMOD(p,r) ((((r) & INTERVAL_RANGE_MASK) << 16) | ((p) & INTERVAL_PRECISION_MASK))
#define __DECL_SIMD_sincosf64x 
#define EARLY "-infinity"
#define POLYGONARRAYOID 1027
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define AccessExclusiveLock 8
#define HUGE_VAL_F64 (__builtin_huge_valf64 ())
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define SO_MEMINFO 55
#define FP_FAST_FMAF 1
#define LOG_SERVER_ONLY 16
#define _SC_IOV_MAX _SC_IOV_MAX
#define M_LOG10Ef128 __f128 (0.434294481903251827651128918916605082)
#define _SC_PASS_MAX _SC_PASS_MAX
#define _SC_LONG_BIT _SC_LONG_BIT
#define ACL_ALL_RIGHTS_STR "arwdDxtXUCTc"
#define ERRCODE_DUPLICATE_COLUMN MAKE_SQLSTATE('4','2','7','0','1')
#define PG_RETURN_ARRAYTYPE_P(x) PG_RETURN_POINTER(x)
#define __stack_t_defined 1
#define __stub___compat_bdflush 
#define PG_TEXTDOMAIN(domain) (domain "-" PG_MAJORVERSION)
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define O_TRUNC 01000
#define PF_WANPIPE 25
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define FLOAT4PASSBYVAL true
#define PG_RETURN_FLOAT8(x) return Float8GetDatum(x)
#define DTK_ALL_SECS_M (DTK_M(SECOND) | DTK_M(MILLISECOND) | DTK_M(MICROSECOND))
#define __DECL_SIMD_hypotf128x 
#define HAVE_DECL_LLVMGETHOSTCPUFEATURES 1
#define IPPROTO_IGMP IPPROTO_IGMP
#define F_DUPFD 0
#define __DECL_SIMD_acos 
#define HAVE_MEMMOVE 1
#define PG_RE_THROW() pg_re_throw()
#define PF_IUCV 32
#define __PID_T_TYPE __S32_TYPE
#define AI_CANONNAME 0x0002
#define DatumGetInt64(X) ((int64) (X))
#define _STATBUF_ST_NSEC 
#define HAVE_POLL 1
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __DECL_SIMD_cosf64x 
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define M_Ef32 __f32 (2.718281828459045235360287471352662498)
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define ENOTCONN 107
#define PG_RETURN_INTERVAL_P(x) return IntervalPGetDatum(x)
#define IN_CLASSB_NET 0xffff0000
#define __DECL_SIMD_log2f128x 
#define __DECL_SIMD_exp2f16 
#define ERRCODE_UNDEFINED_CURSOR MAKE_SQLSTATE('3','4','0','0','0')
#define XLOG_BLCKSZ 8192
#define TIMESTAMPARRAYOID 1115
#define M_2_SQRTPIl 1.128379167095512573896158903121545172L
#define VARATT_SHORT_MAX 0x7F
#define INTERVAL_RANGE(t) (((t) >> 16) & INTERVAL_RANGE_MASK)
#define BlockIdGetBlockNumber(blockId) ( AssertMacro(BlockIdIsValid(blockId)), ((((BlockNumber) (blockId)->bi_hi) << 16) | ((BlockNumber) (blockId)->bi_lo)) )
#define S_IFLNK __S_IFLNK
#define __DECL_SIMD_log10f 
#define P_tmpdir "/tmp"
#define TXID_SNAPSHOTARRAYOID 2949
#define __DECL_SIMD_expm1 
#define __FLT64_HAS_DENORM__ 1
#define MSG_TRYHARD MSG_DONTROUTE
#define HAVE_DECL_LLVMCREATEPERFJITEVENTLISTENER 1
#define _POSIX_MESSAGE_PASSING 200809L
#define __HAVE_FLOAT32 1
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define __WORDSIZE_TIME64_COMPAT32 0
#define EPFNOSUPPORT 96
#define PG_ENCODING_BE_LAST PG_KOI8U
#define HAVE_STDBOOL_H 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define IPV6_ROUTER_ALERT 22
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define SO_PEERNAME 28
#define M_1_PIf32 __f32 (0.318309886183790671537767526745028724)
#define STDERR_FILENO 2
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define L_XTND SEEK_END
#define __DBL_DECIMAL_DIG__ 17
#define AMPM 9
#define M_Ef64 __f64 (2.718281828459045235360287471352662498)
#define ERRCODE_S_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('2','F','0','0','3')
#define PRS2_OLD_VARNO 1
#define ERRCODE_CONFIGURATION_LIMIT_EXCEEDED MAKE_SQLSTATE('5','3','4','0','0')
#define LP_REDIRECT 2
#define ItemPointerSetInvalid(pointer) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), InvalidBlockNumber), (pointer)->ip_posid = InvalidOffsetNumber )
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define __DECL_SIMD_sinf32 
#define linitial_node(type,l) castNode(type, linitial(l))
#define INT_LEAST64_WIDTH 64
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define M_SQRT1_2f64 __f64 (0.707106781186547524400844362104849039)
#define TypeRelationId 1247
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define FP_INT_DOWNWARD 1
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define PG_GETARG_TIMESTAMP(n) DatumGetTimestamp(PG_GETARG_DATUM(n))
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define __DECL_SIMD_hypotf64 
#define SOCK_STREAM SOCK_STREAM
#define __BIG_ENDIAN 4321
#define XLOG_DEFS_H 
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define F_EXLCK 4
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_BITSPERLONG_H 
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define strVal(v) (((Value *)(v))->val.str)
#define ERRCODE_FDW_INVALID_OPTION_NAME MAKE_SQLSTATE('H','V','0','0','D')
#define LC_CNS11643_1 0x95
#define LC_CNS11643_2 0x96
#define LC_CNS11643_3 0xf6
#define LC_CNS11643_4 0xf7
#define LC_CNS11643_5 0xf8
#define LC_CNS11643_6 0xf9
#define ENOTBLK 15
#define HAVE_STRERROR_R 1
#define ERRCODE_SNAPSHOT_TOO_OLD MAKE_SQLSTATE('7','2','0','0','0')
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define SI_KERNEL SI_KERNEL
#define ACL_H 
#define __DECL_SIMD_log1pf32x 
#define M_LN10f128 __f128 (2.302585092994045684017991454684364208)
#define PG_GETARG_BYTEA_P(n) DatumGetByteaP(PG_GETARG_DATUM(n))
#define __DECL_SIMD_atanhf 
#define __INTMAX_WIDTH__ 64
#define INT4OID 23
#define _POSIX_REENTRANT_FUNCTIONS 1
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define F_OFD_SETLKW 38
#define __ORDER_BIG_ENDIAN__ 4321
#define PLATFORM_DEFAULT_SYNC_METHOD SYNC_METHOD_FDATASYNC
#define IPV6_AUTOFLOWLABEL 70
#define USE_PREFETCH 
#define IP_RECVFRAGSIZE 25
#define __DECL_SIMD_log10f32x 
#define __UINT32_C(c) c ## U
#define DTK_DECADE 26
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define AI_CANONIDN 0x0080
#define EISCONN 106
#define CHARARRAYOID 1002
#define EAI_SYSTEM -11
#define LC_KS5601 0x93
#define ENABLE_GSS 1
#define S_IFMT __S_IFMT
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define REGOPEROID 2203
#define PG_RETURN_HEAPTUPLEHEADER(x) return HeapTupleHeaderGetDatum(x)
#define IP_NODEFRAG 22
#define __ATOMIC_RELEASE 3
#define __glibc_has_builtin(name) __has_builtin (name)
#define _LFS_ASYNCHRONOUS_IO 1
#define Natts_pg_type 30
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define AF_UNIX PF_UNIX
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define IP_RECVRETOPTS IP_RETOPTS
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define _BITS_SIGCONTEXT_H 1
#define IPPROTO_COMP IPPROTO_COMP
#define EUSERS 87
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define HAVE_GETOPT_H 1
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define _VA_LIST_T_H 
#define DN_MODIFY 0x00000002
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define ItemIdSetDead(itemId) ( (itemId)->lp_flags = LP_DEAD, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define DN_DELETE 0x00000008
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define TYPCATEGORY_COMPOSITE 'C'
#define __UINT_FAST32_TYPE__ long unsigned int
#define VARSIZE_1B(PTR) ((((varattrib_1b *) (PTR))->va_header >> 1) & 0x7F)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define O_NOFOLLOW __O_NOFOLLOW
#define UNIX_EPOCH_JDATE 2440588
#define ERRCODE_INDICATOR_OVERFLOW MAKE_SQLSTATE('2','2','0','2','2')
#define __DECL_SIMD_erf 
#define DTK_ISODOW 37
#define F_SEAL_FUTURE_WRITE 0x0010
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define REGCLASSARRAYOID 2210
#define UInt8GetDatum(X) ((Datum) (X))
#define SVE_VL_MAX __SVE_VL_MAX
#define AF_CAIF PF_CAIF
#define list_make2_oid(x1,x2) lcons_oid(x1, list_make1_oid(x2))
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define TYPCATEGORY_GEOMETRIC 'G'
#define ispunct(c) __isctype((c), _ISpunct)
#define DatumGetUInt8(X) ((uint8) (X))
#define HAVE_DECL_STRTOLL 1
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define POLL_IN POLL_IN
#define SHORTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_SHORT, (LEN))
#define __stub___compat_query_module 
#define __DECL_SIMD_log10f16 
#define DTK_TZ_MINUTE 35
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define __FP_FAST_FMA 1
#define ERRCODE_FDW_ERROR MAKE_SQLSTATE('H','V','0','0','0')
#define F_SET_FILE_RW_HINT 1038
#define PG_BINARY 0
#define SA_NOCLDWAIT 2
#define __va_list__ 
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define VARSIZE_4B(PTR) ((((varattrib_4b *) (PTR))->va_4byte.va_header >> 2) & 0x3FFFFFFF)
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define IPV6_PATHMTU 61
#define FLOAT4_FITS_IN_INT32(num) ((num) >= (float4) PG_INT32_MIN && (num) < -((float4) PG_INT32_MIN))
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX_ASYNC_IO 1
#define PG_GETARG_ARRAYTYPE_P_COPY(n) DatumGetArrayTypePCopy(PG_GETARG_DATUM(n))
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define ERFKILL 132
#define ERRCODE_S_E_INVALID_SPECIFICATION MAKE_SQLSTATE('3','B','0','0','1')
#define __DECL_SIMD_asinf64 
#define PG_GETARG_TIMEADT(n) DatumGetTimeADT(PG_GETARG_DATUM(n))
#define __INT32_TYPE__ int
#define DN_MULTISHOT 0x80000000
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define HUGE_VAL (__builtin_huge_val ())
#define __SIZEOF_DOUBLE__ 8
#define DTERR_BAD_FORMAT (-1)
#define __FLT_MANT_DIG__ 24
#define PG_GETARG_BOOL(n) DatumGetBool(PG_GETARG_DATUM(n))
#define IPV6_PMTUDISC_WANT 1
#define PG_LIST_H 
#define PF_APPLETALK 5
#define Anum_pg_attribute_attstattarget 4
#define CIRCLEARRAYOID 719
#define EPROTOTYPE 91
#define ARR_NDIM(a) ((a)->ndim)
#define __SWORD_TYPE long int
#define REGROLEARRAYOID 4097
#define be16toh(x) __bswap_16 (x)
#define EL3HLT 46
#define MAX_MULTIBYTE_CHAR_LEN 4
#define CIDOID 29
#define SO_GET_FILTER SO_ATTACH_FILTER
#define forthree(cell1,list1,cell2,list2,cell3,list3) for ((cell1) = list_head(list1), (cell2) = list_head(list2), (cell3) = list_head(list3); (cell1) != NULL && (cell2) != NULL && (cell3) != NULL; (cell1) = lnext(cell1), (cell2) = lnext(cell2), (cell3) = lnext(cell3))
#define MCAST_BLOCK_SOURCE 43
#define IN_CLASSA_NET 0xff000000
#define FLOAT4_FITS_IN_INT64(num) ((num) >= (float4) PG_INT64_MIN && (num) < -((float4) PG_INT64_MIN))
#define LC_BIG5_1 0x98
#define LC_BIG5_2 0x99
#define ERRCODE_CARDINALITY_VIOLATION MAKE_SQLSTATE('2','1','0','0','0')
#define _T_SIZE 
#define VARATT_CONVERTED_SHORT_SIZE(PTR) (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT)
#define ERRCODE_OUT_OF_MEMORY MAKE_SQLSTATE('5','3','2','0','0')
#define CURSOR_OPT_FAST_PLAN 0x0020
#define __va_arg_pack() __builtin_va_arg_pack ()
#define ARR_OVERHEAD_WITHNULLS(ndims,nitems) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims) + ((nitems) + 7) / 8)
#define ACL_TRUNCATE_CHR 'D'
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define __FLT32X_HAS_QUIET_NAN__ 1
#define Anum_pg_attribute_attmissingval 24
#define ERRCODE_INVALID_CHARACTER_VALUE_FOR_CAST MAKE_SQLSTATE('2','2','0','1','8')
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define ERRCODE_INVALID_TABLE_DEFINITION MAKE_SQLSTATE('4','2','P','1','6')
#define HAVE_LONG_LONG_INT 1
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define __DECL_SIMD_tanhf64 
#define ELIBBAD 80
#define USE_PAM 1
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define TYPTYPE_COMPOSITE 'c'
#define SCM_TIMESTAMP SO_TIMESTAMP
#define ESTRPIPE 86
#define __glibc_clang_prereq(maj,min) 0
#define ERRCODE_STATEMENT_TOO_COMPLEX MAKE_SQLSTATE('5','4','0','0','1')
#define PF_INET 2
#define _SC_SIGNALS _SC_SIGNALS
#define TIMESTAMP_IS_NOEND(j) ((j) == DT_NOEND)
#define ECONNREFUSED 111
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ATTRIBUTE_IDENTITY_BY_DEFAULT 'd'
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define atooid(x) ((Oid) strtoul((x), NULL, 10))
#define ACL_MODECHG_ADD 1
#define _RWLOCK_INTERNAL_H 
#define UINT_FAST8_WIDTH 8
#define UINT16_MAX (65535)
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_MINHOPCOUNT 73
#define SO_ZEROCOPY 60
#define PF_MPLS 28
#define PF_RXRPC 33
#define __USE_XOPEN_EXTENDED 1
#define InvalidPid (-1)
#define _POSIX_TRACE_LOG -1
#define HAVE_UNSIGNED_LONG_LONG_INT 1
#define __INT16_C(c) c
#define ACL_CREATE_TEMP (1<<10)
#define ShareUpdateExclusiveLock 4
#define __MATH_EVAL_FMT2(x,y) ((x) + (y) + 0.0f)
#define __ARM_ARCH_ISA_A64 1
#define MemSetLoop(start,val,len) do { long * _start = (long *) (start); long * _stop = (long *) ((char *) _start + (Size) (len)); while (_start < _stop) *_start++ = 0; } while (0)
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define TIMEZONE_GLOBAL timezone
#define pg_attribute_format_arg(a) __attribute__((format_arg(a)))
#define ERRCODE_WARNING_IMPLICIT_ZERO_BIT_PADDING MAKE_SQLSTATE('0','1','0','0','8')
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SIG_IGN ((__sighandler_t) 1)
#define EREMOTEIO 121
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define ERRCODE_FDW_DYNAMIC_PARAMETER_VALUE_NEEDED MAKE_SQLSTATE('H','V','0','0','2')
#define DTK_STRING 1
#define _NETINET_IN_H 1
#define EEXIST 17
#define Anum_pg_attribute_attnotnull 13
#define ERRCODE_SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION MAKE_SQLSTATE('4','2','0','0','0')
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define M_SQRT2f128 __f128 (1.414213562373095048801688724209698079)
#define IP_UNICAST_IF 50
#define __LC_IDENTIFICATION 12
#define EADV 68
#define FLEXIBLE_ARRAY_MEMBER 
#define VARATT_NOT_PAD_BYTE(PTR) (*((uint8 *) (PTR)) != 0)
#define PF_ATMPVC 8
#define _BITS_STAT_H 1
#define intVal(v) (((Value *)(v))->val.ival)
#define InitFunctionCallInfoData(Fcinfo,Flinfo,Nargs,Collation,Context,Resultinfo) do { (Fcinfo).flinfo = (Flinfo); (Fcinfo).context = (Context); (Fcinfo).resultinfo = (Resultinfo); (Fcinfo).fncollation = (Collation); (Fcinfo).isnull = false; (Fcinfo).nargs = (Nargs); } while (0)
#define CURSOR_OPT_HOLD 0x0010
#define PG_GETARG_VARCHAR_P_SLICE(n,a,b) DatumGetVarCharPSlice(PG_GETARG_DATUM(n),a,b)
#define __ARM_PCS_AAPCS64 1
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define InvalidSubTransactionId ((SubTransactionId) 0)
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define INTSTYLE_ISO_8601 3
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define M_LOG2Ef64 __f64 (1.442695040888963407359924681001892137)
#define ENOPKG 65
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define AF_X25 PF_X25
#define Anum_pg_type_typtype 6
#define ERRCODE_FDW_INVALID_USE_OF_NULL_POINTER MAKE_SQLSTATE('H','V','0','0','9')
#define DTK_TODAY 14
#define MaxBlockNumber ((BlockNumber) 0xFFFFFFFE)
#define FD_CLOEXEC 1
#define ERRCODE_OPERATOR_INTERVENTION MAKE_SQLSTATE('5','7','0','0','0')
#define __UINTPTR_TYPE__ long unsigned int
#define ARRAY_H 
#define CLD_KILLED CLD_KILLED
#define SO_RCVTIMEO_NEW 66
#define __bitwise__ 
#define SOL_AAL 265
#define SHUT_RD SHUT_RD
#define O_PATH __O_PATH
#define __BITS_SOCKET_H 
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define TIMESTAMP_END_JULIAN (109203528)
#define _SC_SPAWN _SC_SPAWN
#define BLOCK_H 
#define __DECL_SIMD_asinhf32 
#define ERRCODE_INVALID_INDICATOR_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','1','0')
#define list_make1_oid(x1) lcons_oid(x1, NIL)
#define ELOG_H 
#define FLOAT8ARRAYOID 1022
#define REGCONFIGOID 3734
#define ERRCODE_INVALID_FUNCTION_DEFINITION MAKE_SQLSTATE('4','2','P','1','3')
#define PG_UINT8_MAX (0xFF)
#define TimeTzADTPGetDatum(X) PointerGetDatum(X)
#define SIG_SETMASK 2
#define INTERVAL_FULL_PRECISION (0xFFFF)
#define IPV6_MULTICAST_ALL 29
#define Anum_pg_attribute_atttypid 3
#define __USE_ATFILE 1
#define __DECL_SIMD_tanhf 
#define HAVE_GCC__SYNC_CHAR_TAS 1
#define __DECL_SIMD_tanhl 
#define DATETIME_MIN_JULIAN (0)
#define ERRCODE_TRIM_ERROR MAKE_SQLSTATE('2','2','0','2','7')
#define FIELDNO_HEAPTUPLEDATA_DATA 3
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define __DECL_SIMD_asinf16 
#define __FLT128_DECIMAL_DIG__ 36
#define OPAQUEOID 2282
#define ERRCODE_SUBSTRING_ERROR MAKE_SQLSTATE('2','2','0','1','1')
#define LOG_DESTINATION_CSVLOG 8
#define SNAN (__builtin_nans (""))
#define ERRCODE_E_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('3','8','0','0','3')
#define __DECL_SIMD_powf 
#define ENOTUNIQ 76
#define _PWD_H 1
#define list_make1(x1) lcons(x1, NIL)
#define list_make2(x1,x2) lcons(x1, list_make1(x2))
#define list_make3(x1,x2,x3) lcons(x1, list_make2(x2, x3))
#define list_make4(x1,x2,x3,x4) lcons(x1, list_make3(x2, x3, x4))
#define list_make5(x1,x2,x3,x4,x5) lcons(x1, list_make4(x2, x3, x4, x5))
#define __FLT_DECIMAL_DIG__ 9
#define SIGPROF 27
#define EOHPGetRWDatum(eohptr) PointerGetDatum((eohptr)->eoh_rw_ptr)
#define GetCTETargetList(cte) (AssertMacro(IsA((cte)->ctequery, Query)), ((Query *) (cte)->ctequery)->commandType == CMD_SELECT ? ((Query *) (cte)->ctequery)->targetList : ((Query *) (cte)->ctequery)->returningList)
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __DECL_SIMD_asinf32 
#define PG_RETURN_VOID() return (Datum) 0
#define DDECADE "decade"
#define __DECL_SIMD_logf64 
#define SOL_ALG 279
#define SHUT_WR SHUT_WR
#define __DECL_SIMD_cbrt 
#define __DECL_SIMD_acoshf32 
#define AT_EMPTY_PATH 0x1000
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _ASM_GENERIC_TYPES_H 
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define __INT_LEAST64_WIDTH__ 64
#define INT_LEAST16_MAX (32767)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define _GNU_SOURCE 1
#define _POSIX_SAVED_IDS 1
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define PG_DIAG_SEVERITY_NONLOCALIZED 'V'
#define IsPolymorphicType(typid) ((typid) == ANYELEMENTOID || (typid) == ANYARRAYOID || (typid) == ANYNONARRAYOID || (typid) == ANYENUMOID || (typid) == ANYRANGEOID)
#define __POSIX_FADV_DONTNEED 4
#define NI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("NI_IDN_USE_STD3_ASCII_RULES is deprecated") 128
#define PG_DIAG_CONSTRAINT_NAME 'n'
#define DAYS_PER_YEAR 365.25
#define DECADE 25
#define TYPCATEGORY_DATETIME 'D'
#define __DECL_SIMD_atan2 
#define __ATOMIC_ACQ_REL 4
#define __U32_TYPE unsigned int
#define HAVE_SYS_SELECT_H 1
#define _PGTIME_H 
#define _STDLIB_H 1
#define PG_GETARG_RAW_VARLENA_P(n) ((struct varlena *) PG_GETARG_POINTER(n))
#define IP_RECVERR_RFC4884 26
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define M_PIf 3.14159265358979323846f
#define __DECL_SIMD_cbrtl 
#define __DECL_SIMD_tanhf128 
#define _BITS_FLOATN_COMMON_H 
#define IP_UNBLOCK_SOURCE 37
#define _BITS_SIGINFO_CONSTS_H 1
#define IPV6_RTHDR_TYPE_0 0
#define LC_ISO8859_8 0x88
#define CppAsString(identifier) #identifier
#define __DECL_SIMD_coshf32x 
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define si_timerid _sifields._timer.si_tid
#define BUS_ADRALN BUS_ADRALN
#define LCPRV1_B 0x9b
#define _BITS_SIGEVENT_CONSTS_H 1
#define __FLT32X_MAX_EXP__ 1024
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define RESUME_CANCEL_INTERRUPTS() do { Assert(QueryCancelHoldoffCount > 0); QueryCancelHoldoffCount--; } while(0)
#define M_PI_4f32x __f32x (0.785398163397448309615660845819875721)
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define M_SQRT1_2 0.70710678118654752440
#define O_NOCTTY 0400
#define LONGALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_LONG, (LEN))
#define M_PI_4 0.78539816339744830962
#define iszero(x) (((__typeof (x)) (x)) == 0)
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define NO_ADDRESS NO_DATA
#define _STDBOOL_H 
#define AARR_DIMS(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.dims : ARR_DIMS((ArrayType *) (a)))
#define __ARM_SIZEOF_WCHAR_T 4
#define M_PI_2f32 __f32 (1.570796326794896619231321691639751442)
#define HAVE_STRING_H 1
#define __ATOMIC_ACQUIRE 2
#define Float4GetDatumFast(X) Float4GetDatum(X)
#define __DECL_SIMD_asinhf 
#define GAI_WAIT 0
#define IP_DEFAULT_MULTICAST_TTL 1
#define VARRAWSIZE_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_rawsize)
#define ANYRANGEOID 3831
#define LC_JISX0212 0x94
#define DATEORDER_DMY 1
#define ItemPointerCopy(fromPointer,toPointer) ( AssertMacro(PointerIsValid(toPointer)), AssertMacro(PointerIsValid(fromPointer)), *(toPointer) = *(fromPointer) )
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define VARATT_IS_EXTERNAL_ONDISK(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_ONDISK)
#define LOG_DESTINATION_SYSLOG 2
#define Anum_pg_type_typalign 21
#define __uid_t_defined 
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define EUNATCH 49
#define SOL_ATM 264
#define _SETJMP_H 1
#define INT_LEAST16_MIN (-32767-1)
#define USE_ICU 1
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define AF_RDS PF_RDS
#define __flexarr []
#define _SC_LINE_MAX _SC_LINE_MAX
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define ACL_TRIGGER_CHR 't'
#define BlockIdCopy(toBlockId,fromBlockId) ( AssertMacro(PointerIsValid(toBlockId)), AssertMacro(PointerIsValid(fromBlockId)), (toBlockId)->bi_hi = (fromBlockId)->bi_hi, (toBlockId)->bi_lo = (fromBlockId)->bi_lo )
#define _BITS_SETJMP_H 1
#define _POSIX_PRIORITIZED_IO 200809L
#define PG_DETOAST_DATUM_SLICE(datum,f,c) pg_detoast_datum_slice((struct varlena *) DatumGetPointer(datum), (int32) (f), (int32) (c))
#define __DECL_SIMD_coshf64x 
#define PG_INT32_MAX (0x7FFFFFFF)
#define __stub_fchflags 
#define PG_RETURN_OID(x) return ObjectIdGetDatum(x)
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define IS_DIR_SEP(ch) IS_NONWINDOWS_DIR_SEP(ch)
#define M_PI_4f128 __f128 (0.785398163397448309615660845819875721)
#define M_LN10f 2.30258509299404568402f
#define M_LN10l 2.302585092994045684017991454684364208L
#define __DECL_SIMD_tanhf16 
#define O_ACCMODE 0003
#define ERRCODE_NO_DATA MAKE_SQLSTATE('0','2','0','0','0')
#define ERRCODE_INVALID_XML_COMMENT MAKE_SQLSTATE('2','2','0','0','S')
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define __FSWORD_T_TYPE __SWORD_TYPE
#define SIG_HOLD ((__sighandler_t) 2)
#define AF_XDP PF_XDP
#define ACCEPT_TYPE_ARG3 socklen_t
#define FP_NAN 0
#define FIOGETOWN 0x8903
#define ERRCODE_UNDEFINED_OBJECT MAKE_SQLSTATE('4','2','7','0','4')
#define EAFNOSUPPORT 97
#define ERRCODE_DATATYPE_MISMATCH MAKE_SQLSTATE('4','2','8','0','4')
#define FKCONSTR_ACTION_NOACTION 'a'
#define ERRCODE_INVALID_ARGUMENT_FOR_LOG MAKE_SQLSTATE('2','2','0','1','E')
#define DTK_QUARTER 24
#define ACCEPT_TYPE_RETURN int
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define __DECL_SIMD_tanhf32 
#define S_IFSOCK __S_IFSOCK
#define VARBITOID 1562
#define USE_LIBXML 1
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define _XOPEN_UNIX 1
#define IPV6_PMTUDISC_INTERFACE 4
#define PG_DIAG_MESSAGE_PRIMARY 'M'
#define LC_TIS620 0x85
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define Anum_pg_attribute_attinhcount 19
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define INT16_C(c) c
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define NUM_ATOMICS_SEMAPHORES 64
#define _SC_2_C_DEV _SC_2_C_DEV
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define FMODULO(t,q,u) do { (q) = (((t) < 0) ? ceil((t) / (u)) : floor((t) / (u))); if ((q) != 0) (t) -= rint((q) * (u)); } while(0)
#define EXIT_FAILURE 1
#define ENOEXEC 8
#define DTK_CURRENT 8
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define ERRCODE_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','1')
#define FRAMEOPTION_BETWEEN 0x00010
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define _GETOPT_POSIX_H 1
#define ERRCODE_TOO_MANY_ROWS MAKE_SQLSTATE('P','0','0','0','3')
#define LC_ALL __LC_ALL
#define EA_MAGIC 689375833
#define _XOPEN_SOURCE 700
#define UINT_LEAST32_WIDTH 32
#define EILSEQ 84
#define ERRCODE_INVALID_TRANSACTION_INITIATION MAKE_SQLSTATE('0','B','0','0','0')
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ESPIPE 29
#define __USE_LARGEFILE 1
#define __PTRDIFF_TYPE__ long int
#define SI_DETHREAD SI_DETHREAD
#define MAXFLOAT 3.40282347e+38F
#define __OFF_T_MATCHES_OFF64_T 1
#define iscntrl(c) __isctype((c), _IScntrl)
#define list_make5_int(x1,x2,x3,x4,x5) lcons_int(x1, list_make4_int(x2, x3, x4, x5))
#define M_2_SQRTPIf128 __f128 (1.128379167095512573896158903121545172)
#define LCPRV1_A 0x9a
#define USE_STDBOOL 1
#define __DECL_SIMD_exp2f 
#define __DECL_SIMD_powl 
#define OPEN_DATASYNC_FLAG O_DSYNC
#define __WCHAR_MAX__ 0xffffffffU
#define AF_APPLETALK PF_APPLETALK
#define isgreaterequal(x,y) __builtin_isgreaterequal(x, y)
#define M_LOG2Ef 1.4426950408889634074f
#define SOL_PPPOL2TP 273
#define AF_IB PF_IB
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define ERRCODE_ARRAY_ELEMENT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define SO_NETNS_COOKIE 71
#define INT16_MAX (32767)
#define LANGUAGE_HANDLEROID 2280
#define InvalidXLogRecPtr 0
#define IPV6_NEXTHOP 9
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define DCURRENT "current"
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define AF_MCTP PF_MCTP
#define HAVE_PG_ATTRIBUTE_NORETURN 1
#define __S_IREAD 0400
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define NUMERICOID 1700
#define FRAMEOPTION_EXCLUDE_CURRENT_ROW 0x08000
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define F_GETOWN_EX __F_GETOWN_EX
#define ERRCODE_FOREIGN_KEY_VIOLATION MAKE_SQLSTATE('2','3','5','0','3')
#define TOMORROW "tomorrow"
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define PACKAGE_STRING "PostgreSQL 11.18"
#define _IOFBF 0
#define ERRCODE_DUPLICATE_DATABASE MAKE_SQLSTATE('4','2','P','0','4')
#define BKI_ROWTYPE_OID(oid,oidmacro) 
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define ERRCODE_DATABASE_DROPPED MAKE_SQLSTATE('5','7','P','0','4')
#define VARBITARRAYOID 1563
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define SIGPOLL 29
#define ERRCODE_INVALID_SCHEMA_NAME MAKE_SQLSTATE('3','F','0','0','0')
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define SO_SELECT_ERR_QUEUE 45
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define SIGXCPU 24
#define __FLT64_DECIMAL_DIG__ 17
#define VARATT_IS_1B_E(PTR) ((((varattrib_1b *) (PTR))->va_header) == 0x01)
#define TIMESTAMPTZOID 1184
#define __DECL_SIMD_hypotf 
#define F_GETPIPE_SZ 1032
#define __FLT128_HAS_QUIET_NAN__ 1
#define __DECL_SIMD_hypotl 
#define lengthof(array) (sizeof (array) / sizeof ((array)[0]))
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define TIMETZARRAYOID 1270
#define ObjectAddressSet(addr,class_id,object_id) ObjectAddressSubSet(addr, class_id, object_id, 0)
#define AI_NUMERICSERV 0x0400
#define UUIDOID 2950
#define FNONBLOCK O_NONBLOCK
#define HAVE_POLL_H 1
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define HAVE_SSL_GET_CURRENT_COMPRESSION 1
#define ANYELEMENTOID 2283
#define CharGetDatum(X) ((Datum) (X))
#define lfourth_int(l) lfirst_int(lnext(lnext(lnext(list_head(l)))))
#define HAVE_LIBREADLINE 1
#define ILL_BADIADDR ILL_BADIADDR
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __DECL_SIMD_sinf128 
#define EOWNERDEAD 130
#define __DECL_SIMD_expf32x 
#define M_LN2f64 __f64 (0.693147180559945309417232121458176568)
#define __DECL_SIMD_atan2f32x 
#define TINTERVALOID 704
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define HAVE_PTHREAD 1
#define SHUT_RDWR SHUT_RDWR
#define POLL_MSG POLL_MSG
#define INT16_MIN (-32767-1)
#define SIZEOF_BOOL 1
#define HAVE_ASN1_STRING_GET0_DATA 1
#define __FINITE_MATH_ONLY__ 0
#define si_overrun _sifields._timer.si_overrun
#define __sig_atomic_t_defined 1
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define ERRCODE_INVALID_NAME MAKE_SQLSTATE('4','2','6','0','2')
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define SO_SNDLOWAT 19
#define RWH_WRITE_LIFE_NOT_SET 0
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define FALLOC_FL_ZERO_RANGE 0x10
#define EBADR 53
#define DDAY "day"
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define __pid_t_defined 
#define EL2NSYNC 45
#define ERANGE 34
#define ECANCELED 125
#define TYPTYPE_DOMAIN 'd'
#define __DECL_SIMD_sinhf128 
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define SCM_SRCRT IPV6_RXSRCRT
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _THREAD_MUTEX_INTERNAL_H 1
#define __LDBL_REDIR1(name,proto,alias) name proto
#define MSG_MORE MSG_MORE
#define ERRCODE_EXTERNAL_ROUTINE_EXCEPTION MAKE_SQLSTATE('3','8','0','0','0')
#define _POSIX_SPIN_LOCKS 200809L
#define INT_FAST8_MAX (127)
#define __DECL_SIMD_cbrtf128 
#define ETXTBSY 26
#define _POSIX_SYNCHRONIZED_IO 200809L
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define AmBootstrapProcess() (MyAuxProcType == BootstrapProcess)
#define Anum_pg_type_typsend 17
#define SIGCONT 18
#define NSIG _NSIG
#define UNKNOWN_FIELD 31
#define EAI_INPROGRESS -100
#define MSG_PEEK MSG_PEEK
#define EAI_CANCELED -101
#define htobe16(x) __bswap_16 (x)
#define ERRCODE_INVALID_FOREIGN_KEY MAKE_SQLSTATE('4','2','8','3','0')
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define __SHRT_MAX__ 0x7fff
#define Anum_pg_type_typinput 14
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define USE_SYSTEMD 1
#define ILL_ILLOPC ILL_ILLOPC
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define Anum_pg_type_typcategory 7
#define __DECL_SIMD_atan2f16 
#define Anum_pg_type_typbyval 5
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define __FLT64X_MAX_10_EXP__ 4932
#define POLL_HUP POLL_HUP
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define SIGTTOU 22
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define __clockid_t_defined 1
#define list_make4_int(x1,x2,x3,x4) lcons_int(x1, list_make3_int(x2, x3, x4))
#define ACL_ALL_RIGHTS_FOREIGN_SERVER (ACL_USAGE)
#define Anum_pg_type_typdelim 10
#define ACL_NO_RIGHTS 0
#define __LDBL_IS_IEC_60559__ 2
#define SO_RCVTIMEO_OLD 20
#define __CHAR32_TYPE__ unsigned int
#define IPV6_HDRINCL 36
#define NSS_BUFLEN_PASSWD 1024
#define __DECL_SIMD_acosf64x 
#define MAXDATEFIELDS 25
#define __DECL_SIMD_logf64x 
#define ERRCODE_TRANSACTION_RESOLUTION_UNKNOWN MAKE_SQLSTATE('0','8','0','0','7')
#define __LITTLE_ENDIAN 1234
#define INDEX_VAR 65002
#define SVE_MAGIC 0x53564501
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define pg_hton64(x) pg_bswap64(x)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define INTSTYLE_POSTGRES_VERBOSE 1
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define M_PIf128 __f128 (3.141592653589793238462643383279502884)
#define ItemIdMarkDead(itemId) ( (itemId)->lp_flags = LP_DEAD )
#define ACL_USAGE_CHR 'U'
#define htobe64(x) __bswap_64 (x)
#define EINPROGRESS 115
#define TINTERVALARRAYOID 1025
#define __HAVE_DISTINCT_FLOAT32X 0
#define UINTPTR_WIDTH __WORDSIZE
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define DTK_WEEK 22
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define ERRCODE_T_R_DEADLOCK_DETECTED MAKE_SQLSTATE('4','0','P','0','1')
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define INT_FAST8_MIN (-128)
#define _UNISTD_H 1
#define TimeADTGetDatum(X) Int64GetDatum(X)
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define _ISOC95_SOURCE 1
#define WCHAR_MIN __WCHAR_MIN
#define ERRCODE_E_R_I_E_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','1')
#define ERRCODE_PLPGSQL_ERROR MAKE_SQLSTATE('P','0','0','0','0')
#define _NSIG (__SIGRTMAX + 1)
#define HUGE_VALF (__builtin_huge_valf ())
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define HUGE_VALL (__builtin_huge_vall ())
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define floatVal(v) atof(((Value *)(v))->val.str)
#define FP_INT_TOWARDZERO 2
#define __UID_T_TYPE __U32_TYPE
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define _POSIX_READER_WRITER_LOCKS 200809L
#define __AARCH64_CMODEL_SMALL__ 1
#define INTERVAL_FULL_RANGE (0x7FFF)
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define HAVE_GETIFADDRS 1
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define OffsetNumberIsValid(offsetNumber) ((bool) ((offsetNumber != InvalidOffsetNumber) && (offsetNumber <= MaxOffsetNumber)))
#define INT_FAST32_WIDTH __WORDSIZE
#define SO_WIFI_STATUS 41
#define HAVE_LDAP_INITIALIZE 1
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define YEAR 2
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define __LDBL_MAX_EXP__ 16384
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define PRIMNODES_H 
#define ENOTEMPTY 39
#define is_absolute_path(filename) is_nonwindows_absolute_path(filename)
#define M_LOG2El 1.442695040888963407359924681001892137L
#define ACLITEM_GET_PRIVS(item) ((item).ai_privs & 0xFFFF)
#define UINT_FAST16_MAX (18446744073709551615UL)
#define PG_RETURN_EXPANDED_ARRAY(x) PG_RETURN_DATUM(EOHPGetRWDatum(&(x)->hdr))
#define DatumGetTimeADT(X) ((TimeADT) DatumGetInt64(X))
#define __WINT_MIN__ 0U
#define __DECL_SIMD_cosh 
#define INVALID "invalid"
#define _SC_SHELL _SC_SHELL
#define ACL_ALL_RIGHTS_LARGEOBJECT (ACL_SELECT|ACL_UPDATE)
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define SECS_PER_MINUTE 60
#define PG_GETARG_FLOAT4(n) DatumGetFloat4(PG_GETARG_DATUM(n))
#define PG_GETARG_FLOAT8(n) DatumGetFloat8(PG_GETARG_DATUM(n))
#define __linux__ 1
#define F_SEAL_WRITE 0x0008
#define _SC_STREAMS _SC_STREAMS
#define DatumGetBpCharPSlice(X,m,n) ((BpChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define ERRCODE_AMBIGUOUS_FUNCTION MAKE_SQLSTATE('4','2','7','2','5')
#define AF_NETROM PF_NETROM
#define SO_BPF_EXTENSIONS 48
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define DatumGetByteaPCopy(X) ((bytea *) PG_DETOAST_DATUM_COPY(X))
#define htonl(x) __bswap_32 (x)
#define HAVE_GCC__SYNC_INT32_TAS 1
#define htons(x) __bswap_16 (x)
#define IPV6_MTU_DISCOVER 23
#define EAI_NONAME -2
#define DateADTGetDatum(X) Int32GetDatum(X)
#define IS_LCPRV2_B_RANGE(c) ((unsigned char)(c) >= 0xf5 && (unsigned char)(c) <= 0xfe)
#define LC_ARABIC_DIGIT 0xa4
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define PG_RETURN_TEXT_P(x) PG_RETURN_POINTER(x)
#define PG_FREE_IF_COPY(ptr,n) do { if ((Pointer) (ptr) != PG_GETARG_POINTER(n)) pfree(ptr); } while (0)
#define INTSTYLE_SQL_STANDARD 2
#define DatumGetAclPCopy(X) ((Acl *) PG_DETOAST_DATUM_COPY(X))
#define SO_REUSEADDR 2
#define Anum_pg_type_typlen 4
#define __WCHAR_MIN__ 0U
#define DTK_ZULU 16
#define __SIZEOF_WINT_T__ 4
#define M_PI_2f128 __f128 (1.570796326794896619231321691639751442)
#define VARATT_IS_SHORT(PTR) VARATT_IS_1B(PTR)
#define PG_UINT16_MAX (0xFFFF)
#define _BITS_SIGSTACK_H 1
#define IP_MULTICAST_TTL 33
#define HAVE_LIBCRYPTO 1
#define __MATHDECLX(type,function,suffix,args,attrib) __MATHDECL_1(type, function,suffix, args) __attribute__ (attrib); __MATHDECL_1(type, __CONCAT(__,function),suffix, args) __attribute__ (attrib)
#define __DECL_SIMD_erfcf32x 
#define CppConcat(x,y) x ##y
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define SET_VARSIZE_1B(PTR,len) (((varattrib_1b *) (PTR))->va_header = (((uint8) (len)) << 1) | 0x01)
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __DECL_SIMD_tanf64x 
#define O_APPEND 02000
#define __osockaddr_defined 1
#define _SYS_USER_H 1
#define _FORTIFY_SOURCE 2
#define Anum_pg_attribute_attrelid 1
#define __INT8_MAX__ 0x7f
#define DEF_PGPORT 5432
#define GTSVECTOROID 3642
#define PG_DIAG_SOURCE_FUNCTION 'R'
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define PointerIsValid(pointer) ((const void*)(pointer) != NULL)
#define __ldiv_t_defined 1
#define VARTAG_IS_EXPANDED(tag) (((tag) & ~1) == VARTAG_EXPANDED_RO)
#define AF_TIPC PF_TIPC
#define TIDARRAYOID 1010
#define DO_AGGSPLIT_SKIPFINAL(as) (((as) & AGGSPLITOP_SKIPFINAL) != 0)
#define M_LN10f32 __f32 (2.302585092994045684017991454684364208)
#define __DECL_SIMD_acosh 
#define __UINT8_TYPE__ unsigned char
#define __unix 1
#define isblank(c) __isctype((c), _ISblank)
#define _DEFAULT_SOURCE 1
#define _LINUX_POSIX_TYPES_H 
#define SO_MARK 36
#define ACL_CREATE (1<<9)
#define PointerGetDatum(X) ((Datum) (X))
#define __DECL_SIMD_acosl 
#define __USE_EXTERN_INLINES 1
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define AARR_NDIM(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.ndims : ARR_NDIM((ArrayType *) (a)))
#define ERRCODE_DIVISION_BY_ZERO MAKE_SQLSTATE('2','2','0','1','2')
#define PG_GETARG_EXPANDED_ARRAY(n) DatumGetExpandedArray(PG_GETARG_DATUM(n))
#define DTK_YESTERDAY 13
#define PinTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) IncrTupleDescRefCount(tupdesc); } while (0)
#define OBJECTADDRESS_H 
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define __LOCK_ALIGNMENT 
#define DTK_TIME 3
#define _XOPEN_REALTIME_THREADS 1
#define ETIMEDOUT 110
#define HAVE__BUILTIN_TYPES_COMPATIBLE_P 1
#define ERRCODE_INVALID_AUTHORIZATION_SPECIFICATION MAKE_SQLSTATE('2','8','0','0','0')
#define __SIMD_DECL(function) __CONCAT (__DECL_SIMD_, function)
#define __USE_GNU_GETTEXT 1
#define BITS_PER_BYTE 8
#define PG_INT64_MAX INT64CONST(0x7FFFFFFFFFFFFFFF)
#define __SI_ERRNO_THEN_CODE 1
#define ExclusiveLock 7
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define ENODATA 61
#define USE_GERMAN_DATES 3
#define IPV6_AUTHHDR 10
#define ERRCODE_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('2','2','0','0','4')
#define MAX_RANDOM_VALUE PG_INT32_MAX
#define DTK_LATE 10
#define DN_ACCESS 0x00000001
#define __END_DECLS 
#define FKCONSTR_ACTION_SETNULL 'n'
#define M_2_PI 0.63661977236758134308
#define FP_ILOGB0 (-2147483647)
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define RESERV 0
#define IPV6_RECVERR_RFC4884 31
#define HAVE_COMPUTED_GOTO 1
#define SET_VARTAG_EXTERNAL(PTR,tag) SET_VARTAG_1B_E(PTR, tag)
#define DATEORDER_YMD 0
#define MAX_CONVERSION_GROWTH 4
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_HOSTED__ 1
#define _ALLOCA_H 1
#define ACL_SIZE(ACL) ARR_SIZE(ACL)
#define REGOPERATORARRAYOID 2209
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define CURSOR_OPT_BINARY 0x0001
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define _SYS_SELECT_H 1
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define ERRCODE_COLLATION_MISMATCH MAKE_SQLSTATE('4','2','P','2','1')
#define __DECL_SIMD_exp2f128x 
#define HAVE_STDINT_H 1
#define PF_ALG 38
#define M_LN10f32x __f32x (2.302585092994045684017991454684364208)
#define TYPCATEGORY_BITSTRING 'V'
#define NUM_SPINLOCK_SEMAPHORES 128
#define ERRCODE_INVALID_CATALOG_NAME MAKE_SQLSTATE('3','D','0','0','0')
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define SCOPE_DELIMITER '%'
#define DHOUR "hour"
#define __jmp_buf_tag_defined 1
#define __LC_TELEPHONE 10
#define REGDICTIONARYARRAYOID 3770
#define ACL_SELECT (1<<1)
#define PG_DIAG_INTERNAL_POSITION 'p'
#define IP_IPSEC_POLICY 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define IPPROTO_PIM IPPROTO_PIM
#define DatumGetHeapTupleHeader(X) ((HeapTupleHeader) PG_DETOAST_DATUM(X))
#define HAVE_INTTYPES_H 1
#define __DBL_DIG__ 15
#define PG_PRINTF_ATTRIBUTE gnu_printf
#define ERRCODE_DISK_FULL MAKE_SQLSTATE('5','3','1','0','0')
#define EINTR 4
#define __f32x(x) x ##f32x
#define M_LOG10Ef64 __f64 (0.434294481903251827651128918916605082)
#define AF_INET6 PF_INET6
#define SOL_NETLINK 270
#define UInt16GetDatum(X) ((Datum) (X))
#define _IO_EOF_SEEN 0x0010
#define DEBUG1 14
#define DEBUG2 13
#define DEBUG3 12
#define DEBUG4 11
#define DEBUG5 10
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define _POSIX_SPAWN 200809L
#define __SHRT_WIDTH__ 16
#define __f64x(x) x ##f64x
#define SO_LINGER 13
#define INT4RANGEOID 3904
#define TYPCATEGORY_NUMERIC 'N'
#define PG_INT64_MIN (-INT64CONST(0x7FFFFFFFFFFFFFFF) - 1)
#define Anum_pg_type_typndims 26
#define TMP_MAX 238328
#define ALIGNOF_BUFFER 32
#define AF_WANPIPE PF_WANPIPE
#define PF_UNIX PF_LOCAL
#define ERRCODE_INVALID_REGULAR_EXPRESSION MAKE_SQLSTATE('2','2','0','1','B')
#define __FLT32_MAX_EXP__ 128
#define AmCheckpointerProcess() (MyAuxProcType == CheckpointerProcess)
#define EAI_SERVICE -8
#define SA_ONSTACK 0x08000000
#define DATEOID 1082
#define TupleDescAttr(tupdesc,i) (&(tupdesc)->attrs[(i)])
#define SECS_PER_YEAR (36525 * 864)
#define ILL_ILLADR ILL_ILLADR
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC PF_UNSPEC
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define _SS_SIZE 128
#define NI_NOFQDN 4
#define MAXTZLEN 10
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define __DECL_SIMD_exp2 
#define PF_CAIF 37
#define PG_ENCODING_IS_CLIENT_ONLY(_enc) ((_enc) > PG_ENCODING_BE_LAST && (_enc) < _PG_LAST_ENCODING_)
#define __DECL_SIMD_asinh 
#define le64toh(x) __uint64_identity (x)
#define PACKAGE_NAME "PostgreSQL"
#define PF_ASH 18
#define JULIAN_MAXYEAR (5874898)
#define HOLD_CANCEL_INTERRUPTS() (QueryCancelHoldoffCount++)
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define EAI_IDN_ENCODE -105
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define PATHARRAYOID 1019
#define _WCHAR_T_ 
#define EPERM 1
#define _STDDEF_H 
#define EAI_FAMILY -6
#define VARSIZE(PTR) VARSIZE_4B(PTR)
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define lthird_int(l) lfirst_int(lnext(lnext(list_head(l))))
#define AssertVariableIsOfType(varname,typename) StaticAssertStmt(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename))
#define MATH_ERRNO 1
#define PF_AX25 3
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __SIZEOF_PTRDIFF_T__ 8
#define AF_BRIDGE PF_BRIDGE
#define PG_GETARG_ANY_ARRAY_P(n) DatumGetAnyArrayP(PG_GETARG_DATUM(n))
#define HUGE_VAL_F32 (__builtin_huge_valf32 ())
#define _BITS_FLOATN_H 
#define INTERVAL_RANGE_MASK (0x7FFF)
#define LATE "infinity"
#define LC_IPA 0xa1
#define __SIZEOF_LONG__ 8
#define _IONBF 2
#define __MATHCALLX(function,suffix,args,attrib) __MATHDECLX (_Mdouble_,function,suffix, args, attrib)
#define LC_ARABIC_2_COLUMN 0xa8
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define AGGSPLITOP_SERIALIZE 0x04
#define iscanonical(x) ((void) (__typeof (x)) (x), 1)
#define SO_DETACH_BPF SO_DETACH_FILTER
#define NameGetDatum(X) CStringGetDatum(NameStr(*(X)))
#define toascii(c) __toascii (c)
#define PG_MAGIC_FUNCTION_NAME_STRING "Pg_magic_func"
#define ERRCODE_S_R_E_FUNCTION_EXECUTED_NO_RETURN_STATEMENT MAKE_SQLSTATE('2','F','0','0','5')
#define MACADDR8OID 774
#define PF_NETLINK 16
#define __UINT16_C(c) c
#define MovedPartitionsOffsetNumber 0xfffd
#define __DECL_SIMD_exp10f64x 
#define HAVE_LIBSELINUX 1
#define IP_MULTICAST_LOOP 34
#define IS_LCPRV1(c) ((unsigned char)(c) == LCPRV1_A || (unsigned char)(c) == LCPRV1_B)
#define M_LOG10Ef32x __f32x (0.434294481903251827651128918916605082)
#define NI_NAMEREQD 8
#define M_SQRT1_2f32x __f32x (0.707106781186547524400844362104849039)
#define si_syscall _sifields._sigsys._syscall
#define TIMETZOID 1266
#define SOL_X25 262
#define AF_CAN PF_CAN
#define O_WRONLY 01
#define __DECL_SIMD_sincosf 
#define __DECL_SIMD_sincosl 
#define __gnu_linux__ 1
#define __DECL_SIMD_hypotf128 
#define O_EXCL 0200
#define _ENDIAN_H 1
#define INT_FAST16_MAX (9223372036854775807L)
#define __HAVE_DISTINCT_FLOAT32 0
#define SOL_IP 0
#define IPPROTO_PUP IPPROTO_PUP
#define ERRCODE_INVALID_BINARY_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','3')
#define ACL_TRUNCATE (1<<4)
#define list_make2_int(x1,x2) lcons_int(x1, list_make1_int(x2))
#define OFF_H 
#define PG_O_DIRECT O_DIRECT
#define SECURITY_NOFORCE_RLS 0x0004
#define Anum_pg_type_typisdefined 9
#define AmBackgroundWriterProcess() (MyAuxProcType == BgWriterProcess)
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define PG_GETARG_POINTER(n) DatumGetPointer(PG_GETARG_DATUM(n))
#define DatumIsReadWriteExpandedObject(d,isnull,typlen) (((isnull) || (typlen) != -1) ? false : VARATT_IS_EXTERNAL_EXPANDED_RW(DatumGetPointer(d)))
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define islower(c) __isctype((c), _ISlower)
#define RESUME_INTERRUPTS() do { Assert(InterruptHoldoffCount > 0); InterruptHoldoffCount--; } while(0)
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define WARNING 19
#define ENOSR 63
#define st_mtime st_mtim.tv_sec
#define __USE_ISOC11 1
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define DTIMEZONE "timezone"
#define __FLT16_MIN_EXP__ (-13)
#define ERRCODE_FDW_NO_SCHEMAS MAKE_SQLSTATE('H','V','0','0','P')
#define Anum_pg_type_typowner 3
#define _POSIX_MAPPED_FILES 200809L
#define _BITS_STRING_FORTIFIED_H 1
#define __FLT64_MANT_DIG__ 53
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define ABS_BEFORE 20
#define IPPROTO_IDP IPPROTO_IDP
#define HAVE_APPEND_HISTORY 1
#define __FLT64X_MANT_DIG__ 113
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define IPPROTO_IPIP IPPROTO_IPIP
#define ELIBACC 79
#define PARTITION_MAX_KEYS 32
#define _T_PTRDIFF 
#define pg_noinline __attribute__((noinline))
#define __DECL_SIMD_acosf128x 
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define ACL_CREATE_TEMP_CHR 'T'
#define __glibc_has_extension(ext) 0
#define PQFORMAT_H 
#define IS_LCPRV2(c) ((unsigned char)(c) == LCPRV2_A || (unsigned char)(c) == LCPRV2_B)
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define PG_GETARG_ARRAYTYPE_P(n) DatumGetArrayTypeP(PG_GETARG_DATUM(n))
#define __DECL_SIMD_sinf32x 
#define IPV6_2292PKTOPTIONS 6
#define pg_attribute_noreturn() __attribute__((noreturn))
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define HAVE_UTIMES 1
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define _LFS64_STDIO 1
#define L_ctermid 9
#define PG_GETARG_CHAR(n) DatumGetChar(PG_GETARG_DATUM(n))
#define PG_BINARY_A "a"
#define FRAMEOPTION_START_OFFSET (FRAMEOPTION_START_OFFSET_PRECEDING | FRAMEOPTION_START_OFFSET_FOLLOWING)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define ACL_CONNECT_CHR 'c'
#define pg_attribute_no_sanitize_alignment() __attribute__((no_sanitize("alignment")))
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define InvalidBuffer 0
#define _SC_ARG_MAX _SC_ARG_MAX
#define isupper(c) __isctype((c), _ISupper)
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define INT4RANGEARRAYOID 3905
#define FRAMEOPTION_START_OFFSET_PRECEDING 0x00800
#define HAVE_SNPRINTF 1
#define SEEK_CUR 1
#define ELNRNG 48
#define EAI_FAIL -4
#define _SYS_SOCKET_H 1
#define AF_ROUTE PF_ROUTE
#define __DECL_SIMD_atan2f128x 
#define FP_INFINITE 1
#define ERRCODE_SEQUENCE_GENERATOR_LIMIT_EXCEEDED MAKE_SQLSTATE('2','2','0','0','H')
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define __SI_ALIGNMENT 
#define LC_UNICODE_SUBSET_2 0xf2
#define ACL_DELETE (1<<3)
#define isnormal(x) __builtin_isnormal (x)
#define TSTZRANGEOID 3910
#define __USE_ISOC95 1
#define ZULU "zulu"
#define HAVE_UTIME 1
#define O_FSYNC O_SYNC
#define ERRCODE_INVALID_ESCAPE_OCTET MAKE_SQLSTATE('2','2','0','0','D')
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define MSG_DONTROUTE MSG_DONTROUTE
#define HAVE_WORKING_LINK 1
#define __DECL_SIMD_atanhf16 
#define __FLT16_MAX_10_EXP__ 4
#define __GNUC_STDC_INLINE__ 1
#define DTK_SPECIAL 6
#define __DECL_SIMD_atanf128 
#define HAVE__BUILTIN_OP_OVERFLOW 1
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define TEXTARRAYOID 1009
#define Int32GetDatum(X) ((Datum) (X))
#define Anum_pg_attribute_attname 2
#define HAVE_FSEEKO 1
#define USE_POSTGRES_DATES 0
#define _STDIO_H 1
#define list_nth_node(type,list,n) castNode(type, list_nth(list, n))
#define ItemIdIsUsed(itemId) ((itemId)->lp_flags != LP_UNUSED)
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define XIDARRAYOID 1011
#define C_H 
#define DTK_DATE 2
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define FLOAT4OID 700
#define LINEARRAYOID 629
#define _BITS_STDINT_UINTN_H 1
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define ERRCODE_AMBIGUOUS_PARAMETER MAKE_SQLSTATE('4','2','P','0','8')
#define LC_ISO8859_15 0x8e
#define INTERVAL_PRECISION(t) ((t) & INTERVAL_PRECISION_MASK)
#define __DBL_HAS_INFINITY__ 1
#define dummyret void
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define _POSIX_CHOWN_RESTRICTED 0
#define IPV6_PMTUDISC_OMIT 5
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define M_PIf32x __f32x (3.141592653589793238462643383279502884)
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define MSG_FASTOPEN MSG_FASTOPEN
#define PF_NETROM 6
#define LCPRV2_A 0x9c
#define __USE_XOPEN 1
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define stdin stdin
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define ERRCODE_INVALID_TABLESAMPLE_ARGUMENT MAKE_SQLSTATE('2','2','0','2','H')
#define HAVE_INT_TIMEZONE 1
#define __DECL_SIMD_asinhf128x 
#define HAVE_STRNLEN 1
#define _SIGNAL_H 
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define IPV6_ORIGDSTADDR 74
#define DTK_CENTURY 27
#define IS_LCPRV2_A_RANGE(c) ((unsigned char)(c) >= 0xf0 && (unsigned char)(c) <= 0xf4)
#define HAVE_TM_ZONE 1
#define NAMEARRAYOID 1003
#define VARTAG_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_tag)
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define StaticAssertStmt(condition,errmessage) do { _Static_assert(condition, errmessage); } while(0)
#define _ISOC11_SOURCE 1
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define PG_TYPE_H 
#define PG_RETURN_FLOAT4(x) return Float4GetDatum(x)
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IPPROTO_IPV6 IPPROTO_IPV6
#define __DECL_SIMD_hypotf64x 
#define EAI_ALLDONE -103
#define Trap(condition,errorType) ((void)true)
#define be32toh(x) __bswap_32 (x)
#define PGUNSIXBIT(val) (((val) & 0x3F) + '0')
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define IPPROTO_SCTP IPPROTO_SCTP
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define AF_ECONET PF_ECONET
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define NI_IDN 32
#define _SIZE_T_DEFINED 
#define __DECL_SIMD_expm1f64 
#define EXTRA_MAGIC 0x45585401
#define ERRCODE_BAD_COPY_FILE_FORMAT MAKE_SQLSTATE('2','2','P','0','4')
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define list_make1_int(x1) lcons_int(x1, NIL)
#define lsecond_node(type,l) castNode(type, lsecond(l))
#define _WCHAR_T_DEFINED_ 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define isalpha(c) __isctype((c), _ISalpha)
#define ECHILD 10
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define M_2_SQRTPIf64 __f64 (1.128379167095512573896158903121545172)
#define BufferIsInvalid(buffer) ((buffer) == InvalidBuffer)
#define _POSIX_REGEXP 1
#define UINT_LEAST8_MAX (255)
#define START_CRIT_SECTION() (CritSectionCount++)
#define HAVE_LINUX_EIDRM_BUG 
#define END_TIMESTAMP INT64CONST(9223371331200000000)
#define ERRCODE_WARNING_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','1','0','0','C')
#define LC_NAME_MASK (1 << __LC_NAME)
#define DTERR_TZDISP_OVERFLOW (-5)
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define F_GET_RW_HINT 1035
#define __stub_setlogin 
#define PG_GETARG_HEAPTUPLEHEADER(n) DatumGetHeapTupleHeader(PG_GETARG_DATUM(n))
#define PG_GETARG_NAME(n) DatumGetName(PG_GETARG_DATUM(n))
#define __FLT128_HAS_INFINITY__ 1
#define LC_MESSAGES __LC_MESSAGES
#define PF_MCTP 45
#define ACLITEM_GET_RIGHTS(item) ((item).ai_privs)
#define MemSetTest(val,len) ( ((len) & LONG_ALIGN_MASK) == 0 && (len) <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0 && (val) == 0 )
#define _POSIX_MEMORY_PROTECTION 200809L
#define Natts_pg_attribute 24
#define PG_TYPE_D_H 
#define true 1
#define SA_RESETHAND 0x80000000
#define BKI_LOOKUP(catalog) 
#define ERRCODE_WARNING_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('0','1','0','0','4')
#define EAI_SOCKTYPE -7
#define __S32_TYPE int
#define IS_OUTER_JOIN(jointype) (((1 << (jointype)) & ((1 << JOIN_LEFT) | (1 << JOIN_FULL) | (1 << JOIN_RIGHT) | (1 << JOIN_ANTI))) != 0)
#define IP_PKTOPTIONS 9
#define PG_DETOAST_DATUM(datum) pg_detoast_datum((struct varlena *) DatumGetPointer(datum))
#define _SC_2_C_BIND _SC_2_C_BIND
#define ERRCODE_DUPLICATE_PSTATEMENT MAKE_SQLSTATE('4','2','P','0','5')
#define F_SETFD 2
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define LOCK_WRITE 128
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __FLT64_MIN_10_EXP__ (-307)
#define ERRCODE_FDW_TOO_MANY_HANDLES MAKE_SQLSTATE('H','V','0','1','4')
#define VARATT_IS_COMPRESSED(PTR) VARATT_IS_4B_C(PTR)
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define REGNAMESPACEARRAYOID 4090
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __toascii_l(c,l) ((l), __toascii (c))
#define AGGSPLITOP_COMBINE 0x01
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define _LIBINTL_H 1
#define CSTRINGOID 2275
#define F_GET_FILE_RW_HINT 1037
#define __HAVE_FLOAT16 0
#define IPV6_ADDRFORM 1
#define EREMOTE 66
#define ERRCODE_STRING_DATA_LENGTH_MISMATCH MAKE_SQLSTATE('2','2','0','2','6')
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define UINT_LEAST16_WIDTH 16
#define __FLT128_MAX_EXP__ 16384
#define pg_hton16(x) pg_bswap16(x)
#define SIZEOF_DATUM SIZEOF_VOID_P
#define VARTAG_SIZE(tag) ((tag) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : VARTAG_IS_EXPANDED(tag) ? sizeof(varatt_expanded) : (tag) == VARTAG_ONDISK ? sizeof(varatt_external) : TrapMacro(true, "unrecognized TOAST vartag"))
#define BUS_OBJERR BUS_OBJERR
#define ERRCODE_SQL_ROUTINE_EXCEPTION MAKE_SQLSTATE('2','F','0','0','0')
#define IPPROTO_RSVP IPPROTO_RSVP
#define PG_GETARG_BYTEA_P_COPY(n) DatumGetByteaPCopy(PG_GETARG_DATUM(n))
#define SEGV_MAPERR SEGV_MAPERR
#define pairingheap_is_empty(h) ((h)->ph_root == NULL)
#define HAVE_HISTORY_TRUNCATE_FILE 1
#define SO_BINDTODEVICE 25
#define F_ADD_SEALS 1033
#define _PTRDIFF_T_DECLARED 
#define _BITS_STDIO_H 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define IP_PMTUDISC_PROBE 3
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __glibc_objsize(__o) __bos (__o)
#define pg_hton32(x) pg_bswap32(x)
#define DatumBigEndianToNative(x) pg_bswap64(x)
#define FRAMEOPTION_END_OFFSET_FOLLOWING 0x04000
#define DTK_TZ_HOUR 34
#define __MATHREDIR(type,function,suffix,args,to) extern type __REDIRECT_NTH (__MATH_PRECNAME (function, suffix), args, to)
#define ESRMNT 69
#define LC_INDIAN_1_COLUMN 0xf0
#define BlockIdIsValid(blockId) ((bool) PointerIsValid(blockId))
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 0
#define _POSIX_MEMLOCK_RANGE 200809L
#define SA_NOMASK SA_NODEFER
#define _SC_2_VERSION _SC_2_VERSION
#define IPPROTO_AH IPPROTO_AH
#define BKI_BOOTSTRAP 
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define TrapMacro(condition,errorType) (true)
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define Int64GetDatum(X) ((Datum) (X))
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define isalnum(c) __isctype((c), _ISalnum)
#define __HAVE_FLOAT64 1
#define DATE_IS_NOBEGIN(j) ((j) == DATEVAL_NOBEGIN)
#define NO_RECOVERY 3
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define ItemIdIsDead(itemId) ((itemId)->lp_flags == LP_DEAD)
#define ERRCODE_FDW_OPTION_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','J')
#define BITMAPSET_H 
#define PG_DIAG_COLUMN_NAME 'c'
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX (18446744073709551615UL)
#define _SC_BASE _SC_BASE
#define _PTRDIFF_T 
#define __DECL_SIMD_acosf 
#define INETOID 869
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define MSG_WAITFORONE MSG_WAITFORONE
#define PF_UNSPEC 0
#define UINT64_C(c) c ## UL
#define BKI_FORCE_NOT_NULL 
#define BoolGetDatum(X) ((Datum) ((X) ? 1 : 0))
#define __LDBL_MIN_10_EXP__ (-4931)
#define DEFAULT_BACKEND_FLUSH_AFTER 0
#define __isascii_l(c,l) ((l), __isascii (c))
#define USE_FLOAT8_BYVAL 1
#define F_SETLEASE 1024
#define PG_GETARG_TEXT_P_SLICE(n,a,b) DatumGetTextPSlice(PG_GETARG_DATUM(n),a,b)
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define _GCC_WCHAR_T 
#define _SC_FIFO _SC_FIFO
#define dngettext(domainname,msgid1,msgid2,n) dcngettext (domainname, msgid1, msgid2, n, LC_MESSAGES)
#define HAVE_BIO_METH_NEW 1
#define __toascii(c) ((c) & 0x7f)
#define ItemPointerSetOffsetNumber(pointer,offsetNumber) ( AssertMacro(PointerIsValid(pointer)), (pointer)->ip_posid = (offsetNumber) )
#define S_IWUSR __S_IWRITE
#define PF_X25 9
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define MACADDRARRAYOID 1040
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define SO_PASSSEC 34
#define SIOCATMARK 0x8905
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define F_SETPIPE_SZ 1031
#define NETDB_INTERNAL -1
#define __ARM_FP16_FORMAT_IEEE 1
#define si_uid _sifields._kill.si_uid
#define __WTERMSIG(status) ((status) & 0x7f)
#define ERRCODE_DATETIME_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','8')
#define ERRCODE_HELD_CURSOR_REQUIRES_SAME_ISOLATION_LEVEL MAKE_SQLSTATE('2','5','0','0','8')
#define PG_USED_FOR_ASSERTS_ONLY pg_attribute_unused()
#define PG_GETARG_ACL_P_COPY(n) DatumGetAclPCopy(PG_GETARG_DATUM(n))
#define _SC_PAGESIZE _SC_PAGESIZE
#define PG_GETARG_BPCHAR_PP(n) DatumGetBpCharPP(PG_GETARG_DATUM(n))
#define PG_FUNCNAME_MACRO __func__
#define UINT_LEAST16_MAX (65535)
#define StrNCpy(dst,src,len) do { char * _dst = (dst); Size _len = (len); if (_len > 0) { strncpy(_dst, (src), _len); _dst[_len-1] = '\0'; } } while (0)
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define SIZEOF_VOID_P 8
#define PF_BRIDGE 7
#define IP_PMTUDISC_DONT 0
#define ReleaseTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) DecrTupleDescRefCount(tupdesc); } while (0)
#define HAVE_GETHOSTBYNAME_R 1
#define HAVE_FUNCNAME__FUNC 1
#define ANYARRAYOID 2277
#define __useconds_t_defined 
#define LC_VISCII_UPPER 0xa3
#define TimestampTzPlusMilliseconds(tz,ms) ((tz) + ((ms) * (int64) 1000))
#define M_LOG2E 1.4426950408889634074
#define __ASM_SVE_CONTEXT_H 
#define DEFAULT_EVENT_SOURCE "PostgreSQL"
#define CURSOR_OPT_PARALLEL_OK 0x0100
#define DMONTH "month"
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define INT8_MIN (-128)
#define ItemPointerSetMovedPartitions(pointer) ItemPointerSet((pointer), MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define AssertVariableIsOfTypeMacro(varname,typename) (StaticAssertExpr(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename)))
#define WNOHANG 1
#define MAX_INTERVAL_PRECISION 6
#define DEF_PGPORT_STR "5432"
#define PF_IPX 4
#define HOST_NOT_FOUND 1
#define ACL_N_SIZE(N) (ARR_OVERHEAD_NONULLS(1) + ((N) * sizeof(AclItem)))
#define FRAMEOPTION_END_OFFSET (FRAMEOPTION_END_OFFSET_PRECEDING | FRAMEOPTION_END_OFFSET_FOLLOWING)
#define SEGV_ACCERR SEGV_ACCERR
#define DatumGetIntervalP(X) ((Interval *) DatumGetPointer(X))
#define __PTRDIFF_T 
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define ERRCODE_UNDEFINED_TABLE MAKE_SQLSTATE('4','2','P','0','1')
#define ENOCSI 50
#define HAVE_LIBSSL 1
#define pg_attribute_unused() __attribute__((unused))
#define palloc0_array(type,count) ((type *) palloc0(sizeof(type) * (count)))
#define F_GETFD 1
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define DatumGetVarCharPP(X) ((VarChar *) PG_DETOAST_DATUM_PACKED(X))
#define F_GETFL 3
#define LC_MEASUREMENT __LC_MEASUREMENT
#define __DECL_SIMD_atan2f64x 
#define F_LOCK 1
#define _BITS_TYPES___LOCALE_T_H 1
#define ShareRowExclusiveLock 6
#define PG_DIAG_DATATYPE_NAME 'd'
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define EOH_HEADER_MAGIC (-1)
#define __DECL_SIMD_expm1f32 
#define HAVE_STRINGS_H 1
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define FRAMEOPTION_GROUPS 0x00008
#define EADDRINUSE 98
#define _VA_LIST 
#define IPPROTO_MH IPPROTO_MH
#define __DECL_SIMD_asinhl 
#define IN_CLASSA_NSHIFT 24
#define TIMESTAMPTZARRAYOID 1185
#define PG_RETURN_POINTER(x) return PointerGetDatum(x)
#define HAVE_X509_GET_SIGNATURE_NID 1
#define AttrOffsetGetAttrNumber(attributeOffset) ((AttrNumber) (1 + (attributeOffset)))
#define JSONBOID 3802
#define LC_ARABIC_1_COLUMN 0xa5
#define __O_PATH 010000000
#define isxdigit(c) __isctype((c), _ISxdigit)
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG4 1
#define __ARM_ARCH 8
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define StaticAssertExpr(condition,errmessage) ((void) ({ StaticAssertStmt(condition, errmessage); true; }))
#define __DECL_SIMD_sincosf128 
#define __WCOREFLAG 0x80
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define __O_DIRECTORY 040000
#define __DECL_SIMD_asinl 
#define ItemPointerSet(pointer,blockNumber,offNum) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber), (pointer)->ip_posid = offNum )
#define htobe32(x) __bswap_32 (x)
#define ERRCODE_DUPLICATE_SCHEMA MAKE_SQLSTATE('4','2','P','0','6')
#define IPV6_MULTICAST_IF 17
#define INT8_WIDTH 8
#define SIGUSR1 10
#define _POSIX_IPV6 200809L
#define USE_FLOAT4_BYVAL 1
#define forboth(cell1,list1,cell2,list2) for ((cell1) = list_head(list1), (cell2) = list_head(list2); (cell1) != NULL && (cell2) != NULL; (cell1) = lnext(cell1), (cell2) = lnext(cell2))
#define TZNAME_GLOBAL tzname
#define TODAY "today"
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define SET_VARSIZE_4B(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2))
#define PG_RETURN_DATUM(x) return (x)
#define __MODE_T_TYPE __U32_TYPE
#define F_SETLKW64 7
#define __DECL_SIMD_sincosf16 
#define F_GETLK 5
#define INTPTR_MIN (-9223372036854775807L-1)
#define SIGTRAP 5
#define EISDIR 21
#define __nonnull(params) __attribute_nonnull__ (params)
#define CHAROID 18
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _BITS_STRUCT_STAT_H 1
#define DatumGetPointer(X) ((Pointer) (X))
#define ERRCODE_INVALID_XML_CONTENT MAKE_SQLSTATE('2','2','0','0','N')
#define HAVE_STRUCT_OPTION 1
#define F_GETSIG __F_GETSIG
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define __SI_BAND_TYPE long int
#define __DECL_SIMD_atanhf128 
#define __DECL_SIMD_tanf64 
#define O_DSYNC __O_DSYNC
#define WRITEBACK_MAX_PENDING_FLUSHES 256
#define __DECL_SIMD_exp10f16 
#define __DECL_SIMD_sincosf32 
#define INT_LEAST8_MAX (127)
#define __aarch64__ 1
#define CIDRARRAYOID 651
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __CFLOAT64X _Complex _Float64x
#define __CFLOAT32X _Complex _Float32x
#define FLOAT8_FITS_IN_INT32(num) ((num) >= (float8) PG_INT32_MIN && (num) < -((float8) PG_INT32_MIN))
#define AF_KCM PF_KCM
#define IPPROTO_TP IPPROTO_TP
#define ngettext(msgid1,msgid2,n) dngettext (NULL, msgid1, msgid2, n)
#define JULIAN_MAXMONTH (6)
#define __DECL_SIMD_exp10f32 
#define SO_PROTOCOL 38
#define ERRCODE_INVALID_GRANTOR MAKE_SQLSTATE('0','L','0','0','0')
#define ItemIdGetRedirect(itemId) ((itemId)->lp_off)
#define STATUS_FOUND (1)
#define si_pkey _sifields._sigfault._bounds._pkey
#define XMLARRAYOID 143
#define __FLT64X_DECIMAL_DIG__ 36
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define IP_BIND_ADDRESS_NO_PORT 24
#define Anum_pg_type_typmodout 19
#define ERRCODE_WARNING_PRIVILEGE_NOT_GRANTED MAKE_SQLSTATE('0','1','0','0','7')
#define __DECL_SIMD_sincosf64 
#define __DBL_HAS_DENORM__ 1
#define ACL_GRANT_OPTION_FOR(privs) (((AclMode) (privs) & 0xFFFF) << 16)
#define INT_LEAST32_MAX (2147483647)
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define MISCADMIN_H 
#define FPE_FLTSUB FPE_FLTSUB
#define PG_INT64_TYPE long int
#define INT_FAST16_WIDTH __WORDSIZE
#define FLOAT8_FITS_IN_INT64(num) ((num) >= (float8) PG_INT64_MIN && (num) < -((float8) PG_INT64_MIN))
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define ItemPointerGetOffsetNumberNoCheck(pointer) ( (pointer)->ip_posid )
#define UINT_LEAST64_WIDTH 64
#define __attribute_pure__ __attribute__ ((__pure__))
#define EDEADLOCK EDEADLK
#define INTERVALOID 1186
#define PG_VERSION_NUM 110018
#define NUMERICARRAYOID 1231
#define DatumGetTextPSlice(X,m,n) ((text *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define ERRCODE_FDW_UNABLE_TO_ESTABLISH_CONNECTION MAKE_SQLSTATE('H','V','0','0','N')
#define SNANF64X (__builtin_nansf64x (""))
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define HAVE_EDITLINE_READLINE_H 1
#define M_1_PIf128 __f128 (0.318309886183790671537767526745028724)
#define ERRCODE_SYNTAX_ERROR MAKE_SQLSTATE('4','2','6','0','1')
#define HAVE_SYS_RESOURCE_H 1
#define ItemIdIsNormal(itemId) ((itemId)->lp_flags == LP_NORMAL)
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT64X_IS_IEC_60559__ 2
#define ERRCODE_IO_ERROR MAKE_SQLSTATE('5','8','0','3','0')
#define M_Ef32x __f32x (2.718281828459045235360287471352662498)
#define HAVE_RL_FILENAME_COMPLETION_FUNCTION 1
#define __ptr_t void *
#define __MATH_TG(TG_ARG,FUNC,ARGS) (sizeof (TG_ARG) == sizeof (float) ? FUNC ## f ARGS : sizeof (TG_ARG) == sizeof (double) ? FUNC ARGS : FUNC ## l ARGS)
#define HAVE_IFADDRS_H 1
#define IS_VALID_JULIAN(y,m,d) (((y) > JULIAN_MINYEAR || ((y) == JULIAN_MINYEAR && ((m) >= JULIAN_MINMONTH))) && ((y) < JULIAN_MAXYEAR || ((y) == JULIAN_MAXYEAR && ((m) < JULIAN_MAXMONTH))))
#define DatumGetVarCharP(X) ((VarChar *) PG_DETOAST_DATUM(X))
#define PG_DIAG_MESSAGE_DETAIL 'D'
#define _SIZE_T 
#define DTK_NUMBER 0
#define M_PIf64 __f64 (3.141592653589793238462643383279502884)
#define __LDBL_DECIMAL_DIG__ 36
#define INT8RANGEARRAYOID 3927
#define INT_LEAST8_MIN (-128)
#define ItemIdIsRedirected(itemId) ((itemId)->lp_flags == LP_REDIRECT)
#define errno (*__errno_location ())
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define FKCONSTR_ACTION_RESTRICT 'r'
#define ERRCODE_CONNECTION_EXCEPTION MAKE_SQLSTATE('0','8','0','0','0')
#define gettext_noop(x) (x)
#define PG_GETARG_TEXT_P(n) DatumGetTextP(PG_GETARG_DATUM(n))
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define JSONOID 114
#define _PTRDIFF_T_ 
#define HAVE_STDIO_H 1
#define IS_LCPRV1_B_RANGE(c) ((unsigned char)(c) >= 0xe0 && (unsigned char)(c) <= 0xef)
#define SO_KEEPALIVE 9
#define F_GET_SEALS 1034
#define ACCEPT_TYPE_ARG1 int
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define DT_NOEND PG_INT64_MAX
#define PG_GETARG_TIMETZADT_P(n) DatumGetTimeTzADTP(PG_GETARG_DATUM(n))
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define ERRCODE_BRANCH_TRANSACTION_ALREADY_ACTIVE MAKE_SQLSTATE('2','5','0','0','2')
#define TYPTYPE_BASE 'b'
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define MEMSET_LOOP_LIMIT 1024
#define __GXX_ABI_VERSION 1016
#define F_UNLCK 2
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define UINTMAX_C(c) c ## UL
#define __USE_XOPEN2K8 1
#define closesocket close
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define M_SQRT1_2f32 __f32 (0.707106781186547524400844362104849039)
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define islower_l(c,l) __islower_l ((c), (l))
#define ARR_NULLBITMAP(a) (ARR_HASNULL(a) ? (bits8 *) (((char *) (a)) + sizeof(ArrayType) + 2 * sizeof(int) * ARR_NDIM(a)) : (bits8 *) NULL)
#define AARR_ELEMTYPE(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.element_type : ARR_ELEMTYPE((ArrayType *) (a)))
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define ACL_ALL_RIGHTS_SCHEMA (ACL_USAGE|ACL_CREATE)
#define ENETDOWN 100
#define ERROR 20
#define __TIMER_T_TYPE void *
#define __STRING(x) #x
#define BPCHAROID 1042
#define SO_OOBINLINE 10
#define PANIC 22
#define AGGSPLITOP_DESERIALIZE 0x08
#define NI_NUMERICHOST 1
#define __F_GETOWN 9
#define SIGVTALRM 26
#define F_OFD_GETLK 36
#define PG_MODULE_MAGIC_DATA { sizeof(Pg_magic_struct), PG_VERSION_NUM / 100, FUNC_MAX_ARGS, INDEX_MAX_KEYS, NAMEDATALEN, FLOAT4PASSBYVAL, FLOAT8PASSBYVAL }
#define DirectFunctionCall1(func,arg1) DirectFunctionCall1Coll(func, InvalidOid, arg1)
#define DirectFunctionCall2(func,arg1,arg2) DirectFunctionCall2Coll(func, InvalidOid, arg1, arg2)
#define DirectFunctionCall3(func,arg1,arg2,arg3) DirectFunctionCall3Coll(func, InvalidOid, arg1, arg2, arg3)
#define DirectFunctionCall4(func,arg1,arg2,arg3,arg4) DirectFunctionCall4Coll(func, InvalidOid, arg1, arg2, arg3, arg4)
#define DirectFunctionCall5(func,arg1,arg2,arg3,arg4,arg5) DirectFunctionCall5Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define DirectFunctionCall6(func,arg1,arg2,arg3,arg4,arg5,arg6) DirectFunctionCall6Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define DirectFunctionCall7(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7) DirectFunctionCall7Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define DirectFunctionCall8(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) DirectFunctionCall8Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define DirectFunctionCall9(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) DirectFunctionCall9Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define CATALOG(name,oid,oidmacro) typedef struct CppConcat(FormData_,name)
#define __INO_T_TYPE __ULONGWORD_TYPE
#define __FLT_MIN_10_EXP__ (-37)
#define ERRCODE_FDW_UNABLE_TO_CREATE_EXECUTION MAKE_SQLSTATE('H','V','0','0','L')
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define __F_SETOWN_EX 15
#define F_ULOCK 0
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define __LC_ALL 6
#define _FALLOC_H_ 
#define __MATH_DECLARE_LDOUBLE 1
#define QUERYENVIRONMENT_H 
#define _SC_TRACE _SC_TRACE
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define __ssize_t_defined 
#define EBADFD 77
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define HAVE_LIBXSLT 1
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define _SC_FSYNC _SC_FSYNC
#define FPE_INTOVF FPE_INTOVF
#define __time_t_defined 1
#define RELCACHE_H 
#define gettext(msgid) dgettext (NULL, msgid)
#define __DECL_SIMD_hypotf32 
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define PF_TIPC 30
#define FLOAT8_FITS_IN_INT16(num) ((num) >= (float8) PG_INT16_MIN && (num) < -((float8) PG_INT16_MIN))
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define BITOID 1560
#define SIGURG 23
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define PG_GETARG_DATUM(n) (fcinfo->arg[n])
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define IPV6_MULTICAST_HOPS 18
#define CURSOR_OPT_SCROLL 0x0002
#define ACL_TRIGGER (1<<6)
#define REGCONFIGARRAYOID 3735
#define ERRCODE_INVALID_TABLESAMPLE_REPEAT MAKE_SQLSTATE('2','2','0','2','G')
#define IPV6_TRANSPARENT 75
#define PG_RETURN_INT16(x) return Int16GetDatum(x)
#define VARSIZE_SHORT(PTR) VARSIZE_1B(PTR)
#define ERRCODE_WINDOWING_ERROR MAKE_SQLSTATE('4','2','P','2','0')
#define __LC_ADDRESS 9
#define AT_FDCWD -100
#define ereport(elevel,rest) ereport_domain(elevel, TEXTDOMAIN, rest)
#define ERRCODE_INVALID_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','2','3')
#define INT32_MAX (2147483647)
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define __INT32_C(c) c
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define INTERVAL_PRECISION_MASK (0xFFFF)
#define _PATH_PROTOCOLS "/etc/protocols"
#define __glibc_macro_warning1(message) _Pragma (#message)
#define HAVE_ATOMICS 1
#define __S_IFMT 0170000
#define MACADDROID 829
#define PG_RETURN_INT32(x) return Int32GetDatum(x)
#define ACLITEM_SET_GOPTIONS(item,goptions) ((item).ai_privs = ((item).ai_privs & ~(((AclMode) 0xFFFF) << 16)) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define __STDC_IEC_559_COMPLEX__ 1
#define DTZ 6
#define AI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("AI_IDN_USE_STD3_ASCII_RULES is deprecated") 0x0200
#define NI_MAXHOST 1025
#define OPCLASS_ITEM_FUNCTION 2
#define __DECL_SIMD_tanhf32x 
#define DN_ATTRIB 0x00000020
#define SO_INCOMING_CPU 49
#define HUGE_VAL_F128 (__builtin_huge_valf128 ())
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define DOW 16
#define DOUBLEALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_DOUBLE, (LEN))
#define JULIAN_MINYEAR (-4713)
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FLT128_DIG__ 33
#define PG_MODULE_MAGIC extern PGDLLEXPORT const Pg_magic_struct *PG_MAGIC_FUNCTION_NAME(void); const Pg_magic_struct * PG_MAGIC_FUNCTION_NAME(void) { static const Pg_magic_struct Pg_magic_data = PG_MODULE_MAGIC_DATA; return &Pg_magic_data; } extern int no_such_variable
#define __SCHAR_WIDTH__ 8
#define HAVE_SYS_EPOLL_H 1
#define HAVE_GETOPT 1
#define DAYS_PER_MONTH 30
#define PGDEPENDENCIESOID 3402
#define IP_ADD_MEMBERSHIP 35
#define ERRCODE_INVALID_ARGUMENT_FOR_NTH_VALUE MAKE_SQLSTATE('2','2','0','1','6')
#define __FLT32_MAX_10_EXP__ 38
#define ILL_ILLTRP ILL_ILLTRP
#define PG_RETURN_INT64(x) return Int64GetDatum(x)
#define __DECL_SIMD_logf 
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define FP_ILOGBNAN 2147483647
#define ACL_ALL_RIGHTS_LANGUAGE (ACL_USAGE)
#define IS_LC2(c) ((unsigned char)(c) >= 0x90 && (unsigned char)(c) <= 0x99)
#define M_PI_2f 1.57079632679489661923f
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define M_PI_2l 1.570796326794896619231321691639751442L
#define ENOKEY 126
#define __DECL_SIMD_expf 
#define __INT_FAST32_TYPE__ long int
#define TIDOID 27
#define bool _Bool
#define PG_LSNARRAYOID 3221
#define HAVE_SYS_STAT_H 1
#define M_LOG2Ef32 __f32 (1.442695040888963407359924681001892137)
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define SNANF (__builtin_nansf (""))
#define S_IWGRP (S_IWUSR >> 3)
#define AM 0
#define __DECL_SIMD_cbrtf128x 
#define SIG_DFL ((__sighandler_t) 0)
#define PG_INT16_MAX (0x7FFF)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define F_OK 0
#define _PC_PATH_MAX _PC_PATH_MAX
#define isgraph(c) __isctype((c), _ISgraph)
#define __DECL_SIMD_acoshf32x 
#define M_PI_4f 0.78539816339744830962f
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define Anum_pg_attribute_attfdwoptions 23
#define ERRCODE_TOO_MANY_COLUMNS MAKE_SQLSTATE('5','4','0','1','1')
#define FPE_FLTDIV FPE_FLTDIV
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define DOY 15
#define PG_VERSION "11.18 (Ubuntu 11.18-1.pgdg22.04+1)"
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define REINDEXOPT_VERBOSE (1 << 0)
#define ESHUTDOWN 108
#define HAVE_SYS_SHM_H 1
#define INT32_MIN (-2147483647-1)
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define AssertPointerAlignment(ptr,bndr) ((void)true)
#define AssertArg(condition) ((void)true)
#define LC_COLLATE __LC_COLLATE
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define PG_RETURN_TIMEADT(x) return TimeADTGetDatum(x)
#define Anum_pg_type_typbasetype 24
#define BUF_H 
#define F_SETOWN __F_SETOWN
#define INT_FAST64_WIDTH 64
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define __FLT64X_DIG__ 33
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define FRAMEOPTION_END_CURRENT_ROW 0x00400
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define PGINVALID_SOCKET (-1)
#define __INT8_TYPE__ signed char
#define F_SETLK64 6
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define SA_STACK SA_ONSTACK
#define USECS_PER_MINUTE INT64CONST(60000000)
#define __FLT32X_MIN_EXP__ (-1021)
#define __ELF__ 1
#define IntervalPGetDatum(X) PointerGetDatum(X)
#define PACKAGE_VERSION "11.18"
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define PG_GETARG_TIMESTAMPTZ(n) DatumGetTimestampTz(PG_GETARG_DATUM(n))
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define _SC_AIO_MAX _SC_AIO_MAX
#define __DECL_SIMD_log2f128 
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define _SC_VERSION _SC_VERSION
#define ALIGNOF_INT 4
#define RowExclusiveLock 3
#define isdigit(c) __isctype((c), _ISdigit)
#define ERRCODE_WRONG_OBJECT_TYPE MAKE_SQLSTATE('4','2','8','0','9')
#define ELIBSCN 81
#define LC_ISO8859_5 0x8c
#define F_TLOCK 2
#define ERRCODE_GENERATED_ALWAYS MAKE_SQLSTATE('4','2','8','C','9')
#define REGOPERATOROID 2204
#define __SVE_ZREGS_OFFSET 0
#define F_GETLEASE 1025
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define M_2_PIf 0.63661977236758134308f
#define HAVE_DECL_SNPRINTF 1
#define M_2_PIl 0.636619772367581343075535053490057448L
#define MCXT_ALLOC_HUGE 0x01
#define ACL_ALL_RIGHTS_DATABASE (ACL_CREATE|ACL_CREATE_TEMP|ACL_CONNECT)
#define SOL_RAW 255
#define __FLT_RADIX__ 2
#define Anum_pg_type_typarray 13
#define SO_REUSEPORT 15
#define PG_INT16_MIN (-0x7FFF-1)
#define __DECL_SIMD_log2f64x 
#define _BITS_TIME64_H 1
#define AI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("AI_IDN_ALLOW_UNASSIGNED is deprecated") 0x0100
#define PG_INT32_MIN (-0x7FFFFFFF-1)
#define ERRCODE_S_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','4')
#define TYPCATEGORY_BOOLEAN 'B'
#define M_2_SQRTPIf32x __f32x (1.128379167095512573896158903121545172)
#define HAVE_USELOCALE 1
#define __LC_MESSAGES 5
#define EAI_BADFLAGS -1
#define PG_RETURN_DATEADT(x) return DateADTGetDatum(x)
#define USE_UNNAMED_POSIX_SEMAPHORES 1
#define palloc_array(type,count) ((type *) palloc(sizeof(type) * (count)))
#define _BITS_SIGTHREAD_H 1
#define CENTURY 26
#define SOL_RDS 276
#define __UINT_FAST64_TYPE__ long unsigned int
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define __DECL_SIMD_atanf 
#define __DECL_SIMD_atanl 
#define FKCONSTR_ACTION_CASCADE 'c'
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define MSG_TRUNC MSG_TRUNC
#define RegProcedureIsValid(p) OidIsValid(p)
#define F_TEST 3
#define Anum_pg_attribute_attislocal 18
#define M_LN10f64 __f64 (2.302585092994045684017991454684364208)
#define __f32(x) x ##f32
#define N_ACL_RIGHTS 12
#define SO_PREFER_BUSY_POLL 69
#define __DECL_SIMD_expm1f128 
#define TYPEALIGN_DOWN(ALIGNVAL,LEN) (((uintptr_t) (LEN)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define __DECL_SIMD_atanf128x 
#define INDEX_AM_HANDLEROID 325
#define _POSIX_TIMEOUTS 200809L
#define PG_DIAG_MESSAGE_HINT 'H'
#define __DECL_SIMD_erfcf 
#define DQUARTER "quarter"
#define EOVERFLOW 75
#define S_IRUSR __S_IREAD
#define FP_NORMAL 4
#define PG_RETURN_BPCHAR_P(x) PG_RETURN_POINTER(x)
#define AF_PACKET PF_PACKET
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define O_CLOEXEC __O_CLOEXEC
#define __SIZEOF_PTHREAD_COND_T 48
#define __P(args) args
#define SEEK_SET 0
#define PG_KRB_SRVNAM "postgres"
#define EAI_NODATA -5
#define OffsetNumberNext(offsetNumber) ((OffsetNumber) (1 + (offsetNumber)))
#define AF_IEEE802154 PF_IEEE802154
#define ERRCODE_FEATURE_NOT_SUPPORTED MAKE_SQLSTATE('0','A','0','0','0')
#define FunctionCall7(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7) FunctionCall7Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define BYTEAOID 17
#define VARDATA_EXTERNAL(PTR) VARDATA_1B_E(PTR)
#define __f64(x) x ##f64
#define LSNOID 3220
#define PG_GETARG_VARCHAR_P_COPY(n) DatumGetVarCharPCopy(PG_GETARG_DATUM(n))
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define ISSJISTAIL(c) (((c) >= 0x40 && (c) <= 0x7e) || ((c) >= 0x80 && (c) <= 0xfc))
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define INT_LEAST8_WIDTH 8
#define ERRCODE_INVALID_DATETIME_FORMAT MAKE_SQLSTATE('2','2','0','0','7')
#define DATE_END_JULIAN (2147483494)
#define ACL_REFERENCES_CHR 'x'
#define __FLT32X_MANT_DIG__ 53
#define EUCLEAN 117
#define __restrict_arr __restrict
#define IP_MSFILTER 41
#define _EXTERN_INLINE __extern_inline
#define unix 1
#define HAVE_GETPWUID_R 1
#define _POSIX_SHELL 1
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define EAI_OVERFLOW -12
#define ShareLock 5
#define AttributeRelation_Rowtype_Id 75
#define LC_VISCII_LOWER 0xa2
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define FP_SUBNORMAL 3
#define __LC_PAPER 7
#define IP_BLOCK_SOURCE 38
#define __S_IEXEC 0100
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define W_OK 2
#define BKI_FORCE_NULL 
#define _SIZE_T_ 
#define lfirst_oid(lc) ((lc)->data.oid_value)
#define __FLT16_IS_IEC_60559__ 2
#define __FLT16_MAX_EXP__ 16
#define REGPROCOID 24
#define __DECL_SIMD_log1pf128 
#define DEFAULT_XLOG_SEG_SIZE (16*1024*1024)
#define __DECL_SIMD_atan 
#define UINT_FAST32_MAX (18446744073709551615UL)
#define AGTYPE_ALPHANUMERIC_CHAR(c) (((c) >= 'a' && (c) <= 'z') || ((c) >= 'A' && (c) <= 'Z') || ((c) >= '0' && (c) <= '9') || (c) == '_' || IS_HIGHBIT_SET(c))
#define O_CREAT 0100
#define __S_IWRITE 0200
#define _WCHAR_T_H 
#define IP_RETOPTS 7
#define EPROTO 71
#define ENODEV 19
#define M_Ef 2.7182818284590452354f
#define POLL_OUT POLL_OUT
#define FP_ZERO 2
#define M_1_PIf64x __f64x (0.318309886183790671537767526745028724)
#define INT16_WIDTH 16
#define __stub_revoke 
#define USE_LIBXSLT 1
#define PG_GETARG_ACLITEM_P(n) DatumGetAclItemP(PG_GETARG_DATUM(n))
#define likely(x) __builtin_expect((x) != 0, 1)
#define __stub___compat_create_module 
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define SQL_STR_DOUBLE(ch,escape_backslash) ((ch) == '\'' || ((ch) == '\\' && (escape_backslash)))
#define for_both_cell(cell1,initcell1,cell2,initcell2) for ((cell1) = (initcell1), (cell2) = (initcell2); (cell1) != NULL && (cell2) != NULL; (cell1) = lnext(cell1), (cell2) = lnext(cell2))
#define _POSIX_MONOTONIC_CLOCK 0
#define SS2 0x8e
#define SS3 0x8f
#define EKEYEXPIRED 127
#define F_NOTIFY 1026
#define __DECL_SIMD_sinhf32x 
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define O_DIRECT __O_DIRECT
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define STATUS_WAITING (2)
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define HAVE_RAND_OPENSSL 1
#define NAMEOID 19
#define MINSIGSTKSZ SIGSTKSZ
#define LC_CNS11643_7 0xfa
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define ERRCODE_CONNECTION_FAILURE MAKE_SQLSTATE('0','8','0','0','6')
#define PG_RETURN_ACLITEM_P(x) PG_RETURN_POINTER(x)
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 6
#define ERRCODE_INVALID_ROW_COUNT_IN_RESULT_OFFSET_CLAUSE MAKE_SQLSTATE('2','2','0','1','X')
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define _POSIX_TRACE_INHERIT -1
#define STRINGINFO_H 
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define ERRCODE_INVALID_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','M')
#define ERRCODE_FDW_TABLE_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','R')
#define __DECL_SIMD_cbrtf32x 
#define __USE_ISOC99 1
#define _PATH_NETWORKS "/etc/networks"
#define PF_IEEE802154 36
#define ACLITEM_GET_GOPTIONS(item) (((item).ai_privs >> 16) & 0xFFFF)
#define CStringGetDatum(X) PointerGetDatum(X)
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define _PC_SYNC_IO _PC_SYNC_IO
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define TypeRelation_Rowtype_Id 71
#define M_El 2.718281828459045235360287471352662498L
#define _XOPEN_SHM 1
#define PG_GETARG_INT16(n) DatumGetInt16(PG_GETARG_DATUM(n))
#define EHWPOISON 133
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define __FLT_HAS_INFINITY__ 1
#define M_LOG2Ef64x __f64x (1.442695040888963407359924681001892137)
#define SO_SNDBUF 7
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define _BSD_PTRDIFF_T_ 
#define __DECL_SIMD_erff16 
#define DTK_MINUTE 19
#define SIGXFSZ 25
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define _BITS_ENDIANNESS_H 1
#define ERRCODE_TRIGGERED_DATA_CHANGE_VIOLATION MAKE_SQLSTATE('2','7','0','0','0')
#define Anum_pg_attribute_attcacheoff 8
#define _POSIX_BARRIERS 200809L
#define TYPCATEGORY_USER 'U'
#define M_1_PIf 0.31830988618379067154f
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define LP_DEAD 3
#define M_1_PIl 0.318309886183790671537767526745028724L
#define FirstOffsetNumber ((OffsetNumber) 1)
#define ERRCODE_LOCATOR_EXCEPTION MAKE_SQLSTATE('0','F','0','0','0')
#define PG_GETARG_INT32(n) DatumGetInt32(PG_GETARG_DATUM(n))
#define __INT_FAST32_WIDTH__ 64
#define NULL ((void *)0)
#define JULIAN_MINDAY (24)
#define RECORDOID 2249
#define AF_IRDA PF_IRDA
#define HAVE__BOOL 1
#define ObjectAddressSubSet(addr,class_id,object_id,object_sub_id) do { (addr).classId = (class_id); (addr).objectId = (object_id); (addr).objectSubId = (object_sub_id); } while (0)
#define AT_SYMLINK_NOFOLLOW 0x100
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define PF_PPPOX 24
#define SO_ATTACH_REUSEPORT_CBPF 51
#define O_ASYNC 020000
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define HAVE_STRERROR 1
#define SO_TIMESTAMPNS_NEW 64
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define NO_DATA 4
#define HAVE_SYMLINK 1
#define AF_RXRPC PF_RXRPC
#define IPV6_XFRM_POLICY 35
#define DTK_JULIAN 31
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define ACLITEM_SET_PRIVS(item,privs) ((item).ai_privs = ((item).ai_privs & ~((AclMode) 0xFFFF)) | ((AclMode) (privs) & 0xFFFF))
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define PG_GETARG_INT64(n) DatumGetInt64(PG_GETARG_DATUM(n))
#define EL3RST 47
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define LC_TIBETAN 0xfc
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define PF_QIPCRTR 42
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define SI_TKILL SI_TKILL
#define HAVE_GSSAPI_GSSAPI_H 1
#define SOL_KCM 281
#define MCXT_ALLOC_ZERO 0x04
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define MSG_OOB MSG_OOB
#define ERRCODE_E_R_I_E_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('3','9','0','0','4')
#define __DECL_SIMD_exp2f64x 
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define FRAMEOPTION_DEFAULTS (FRAMEOPTION_RANGE | FRAMEOPTION_START_UNBOUNDED_PRECEDING | FRAMEOPTION_END_CURRENT_ROW)
#define LC_JISX0201K 0x89
#define PG_GETARG_BPCHAR_P_SLICE(n,a,b) DatumGetBpCharPSlice(PG_GETARG_DATUM(n),a,b)
#define __STDC_VERSION__ 201710L
#define si_value _sifields._rt.si_sigval
#define ERRCODE_OBJECT_IN_USE MAKE_SQLSTATE('5','5','0','0','6')
#define __DECL_SIMD_sinhf16 
#define lfirst_node(type,lc) castNode(type, lfirst(lc))
#define __DECL_SIMD_expf64 
#define __DECL_SIMD_acoshl 
#define SO_DEBUG 1
#define __DECL_SIMD_log2f16 
#define ACL_ALL_RIGHTS_RELATION (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_DELETE|ACL_TRUNCATE|ACL_REFERENCES|ACL_TRIGGER)
#define M_LOG10E 0.43429448190325182765
#define __INT_FAST8_MAX__ 0x7f
#define Anum_pg_attribute_attlen 5
#define ILL_BADSTK ILL_BADSTK
#define __PMT(args) args
#define llast_int(l) lfirst_int(list_tail(l))
#define HAVE_INET_ATON 1
#define AF_SMC PF_SMC
#define AF_NETBEUI PF_NETBEUI
#define AT_NO_AUTOMOUNT 0x800
#define IPV6_2292RTHDR 5
#define POSTGRES_EXT_H 
#define ERRCODE_CHECK_VIOLATION MAKE_SQLSTATE('2','3','5','1','4')
#define ECONNRESET 104
#define IS_SPECIAL_VARNO(varno) ((varno) >= INNER_VAR)
#define VALUE_H 
#define AttrNumberIsForUserDefinedAttr(attributeNumber) ((bool) ((attributeNumber) > 0))
#define AF_SNA PF_SNA
#define __DECL_SIMD_log2f32 
#define LP_NORMAL 1
#define SIGSTOP 19
#define PG_WCHAR_H 
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define ENXIO 6
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define IPV6_RTHDR_LOOSE 0
#define AARR_LBOUND(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.lbound : ARR_LBOUND((ArrayType *) (a)))
#define PG_FUNCTION_ARGS FunctionCallInfo fcinfo
#define SIGALRM 14
#define __FLT64_HAS_QUIET_NAN__ 1
#define HAVE_ISINF 1
#define ERRCODE_EXCLUSION_VIOLATION MAKE_SQLSTATE('2','3','P','0','1')
#define __DECL_SIMD_log10f64x 
#define ERRCODE_DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST MAKE_SQLSTATE('2','B','0','0','0')
#define Anum_pg_attribute_atthasdef 14
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define F_GETLK64 5
#define INTERVAL_MASK(b) (1 << (b))
#define EBADRQC 56
#define isfinite(x) __builtin_isfinite (x)
#define AT_STATX_FORCE_SYNC 0x2000
#define DatumGetTextP(X) ((text *) PG_DETOAST_DATUM(X))
#define isinf(x) __builtin_isinf_sign (x)
#define USE_ARMV8_CRC32C_WITH_RUNTIME_CHECK 1
#define HAVE_LOCALE_T 1
#define __DECL_SIMD_log10l 
#define __WALL 0x40000000
#define MCAST_JOIN_GROUP 42
#define INET6_ADDRSTRLEN 46
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define POSTGRES_EPOCH_JDATE 2451545
#define __DECL_SIMD_log2f64 
#define __KEY_T_TYPE __S32_TYPE
#define __SVE_VQ_MAX 512
#define FAPPEND O_APPEND
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define __F_SETSIG 10
#define POLYGONOID 604
#define ERRCODE_NO_ADDITIONAL_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','2','0','0','1')
#define ItemPointerGetBlockNumberNoCheck(pointer) ( BlockIdGetBlockNumber(&(pointer)->ip_blkid) )
#define PF_CAN 29
#define LOG 15
#define __DECL_SIMD_asinf128x 
#define __DECL_SIMD_cbrtf 
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define signbit(x) __builtin_signbit (x)
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define __stub___compat_get_kernel_syms 
#define IPV6_RECVFRAGSIZE 77
#define DATERANGEOID 3912
#define VARDATA_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_data)
#define _SC_SELECT _SC_SELECT
#define M_PI_4f32 __f32 (0.785398163397448309615660845819875721)
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define __DECL_SIMD_expf128x 
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define __DECL_SIMD_sinf64 
#define __FLT64_HAS_INFINITY__ 1
#define PG_GETARG_HEAPTUPLEHEADER_COPY(n) DatumGetHeapTupleHeaderCopy(PG_GETARG_DATUM(n))
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define MCXT_ALLOC_NO_OOM 0x02
#define false 0
#define IPV6_JOIN_GROUP 20
#define M_SQRT1_2f64x __f64x (0.707106781186547524400844362104849039)
#define _STRING_H 1
#define UINT_FAST32_WIDTH __WORDSIZE
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define HAVE_DECL_LLVMORCGETSYMBOLADDRESSIN 0
#define F_SHLCK 8
#define EVTTRIGGEROID 3838
#define HAVE_LIBM 1
#define BYTEAARRAYOID 1001
#define BlockIdSet(blockId,blockNumber) ( AssertMacro(PointerIsValid(blockId)), (blockId)->bi_hi = (blockNumber) >> 16, (blockId)->bi_lo = (blockNumber) & 0xffff )
#define WSTOPPED 2
#define HAVE_LIBZ 1
#define ____sigset_t_defined 
#define ERRCODE_UNDEFINED_FILE MAKE_SQLSTATE('5','8','P','0','1')
#define ERRCODE_MOST_SPECIFIC_TYPE_MISMATCH MAKE_SQLSTATE('2','2','0','0','G')
#define _XOPEN_REALTIME 1
#define _SC_WORD_BIT _SC_WORD_BIT
#define ATTRIBUTE_IDENTITY_ALWAYS 'a'
#define _PATH_SERVICES "/etc/services"
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define FILENAME_MAX 4096
#define SOL_RXRPC 272
#define __nlink_t_defined 
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define IS_WINDOWS_DIR_SEP(ch) ((ch) == '/' || (ch) == '\\')
#define M_PI_4f64 __f64 (0.785398163397448309615660845819875721)
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define VARHDRSZ ((int32) sizeof(int32))
#define DATE_NOEND(j) ((j) = DATEVAL_NOEND)
#define IPPROTO_RAW IPPROTO_RAW
#define HAVE_POSIX_FADVISE 1
#define __ino_t_defined 
#define DTK_ISOYEAR 36
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define __UINT16_TYPE__ short unsigned int
#define EOHPGetRODatum(eohptr) PointerGetDatum((eohptr)->eoh_ro_ptr)
#define __CLOCKID_T_TYPE __S32_TYPE
#define ALIGNOF_PG_INT128_TYPE 16
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define __DECL_SIMD_sincosf128x 
#define USE_LDAP 1
#define ____sigval_t_defined 
#define DatumGetVarCharPCopy(X) ((VarChar *) PG_DETOAST_DATUM_COPY(X))
#define M_SQRT1_2f 0.70710678118654752440f
#define IPPROTO_ICMP IPPROTO_ICMP
#define M_LN2f128 __f128 (0.693147180559945309417232121458176568)
#define ELIBEXEC 83
#define FKCONSTR_MATCH_SIMPLE 's'
#define PG_DIAG_SOURCE_FILE 'F'
#define ERRCODE_TO_CATEGORY(ec) ((ec) & ((1 << 12) - 1))
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define HAVE__STATIC_ASSERT 1
#define HAVE_DECL_LLVMCREATEGDBREGISTRATIONLISTENER 1
#define __INT_FAST64_WIDTH__ 64
#define __DECL_SIMD_acosf128 
#define __DECL_SIMD_logf128 
#define __ARM_FEATURE_UNALIGNED 1
#define __SVE_VQ_MIN 1
#define UTIME_NOW ((1l << 30) - 1l)
#define MONEYARRAYOID 791
#define AmStartupProcess() (MyAuxProcType == StartupProcess)
#define __UQUAD_TYPE unsigned long int
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ERRCODE_NONSTANDARD_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','P','0','6')
#define SI_ASYNCIO SI_ASYNCIO
#define __BYTE_ORDER __LITTLE_ENDIAN
#define ALIGNOF_SHORT 2
#define __HAVE_GENERIC_SELECTION 1
#define YESTERDAY "yesterday"
#define INT64_WIDTH 64
#define EADDRNOTAVAIL 99
#define M_SQRT2f32 __f32 (1.414213562373095048801688724209698079)
#define ETIME 62
#define _NETDB_H 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define fmgr_info_set_expr(expr,finfo) ((finfo)->fn_expr = (expr))
#define M_SQRT1_2l 0.707106781186547524400844362104849039L
#define __FLT_DIG__ 6
#define NUMRANGEARRAYOID 3907
#define __DECL_SIMD_log1pf16 
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define ERRCODE_SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','1')
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX (9223372036854775807L)
#define M_2_PIf32 __f32 (0.636619772367581343075535053490057448)
#define __FLT64X_MAX_EXP__ 16384
#define lfourth_node(type,l) castNode(type, lfourth(l))
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define ANYENUMOID 3500
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define __LDBL_REDIR_DECL(name) 
#define NI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("NI_IDN_ALLOW_UNASSIGNED is deprecated") 64
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define AmWalReceiverProcess() (MyAuxProcType == WalReceiverProcess)
#define BYTE_ORDER __BYTE_ORDER
#define PTRDIFF_WIDTH __WORDSIZE
#define UINT8_MAX (255)
#define TIMESTAMP_NOEND(j) do {(j) = DT_NOEND;} while (0)
#define ERRCODE_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('2','2','0','0','1')
#define SOL_IUCV 277
#define LOCKDEFS_H_ 
#define DWEEK "week"
#define IPV6_RTHDR 57
#define STDIN_FILENO 0
#define SI_ASYNCNL SI_ASYNCNL
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define M_2_PIf64 __f64 (0.636619772367581343075535053490057448)
#define MemSetAligned(start,val,len) do { long *_start = (long *) (start); int _val = (val); Size _len = (len); if ((_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_start, _val, _len); } while (0)
#define DTK_NOW 12
#define SECS_PER_DAY 86400
#define _T_SIZE_ 
#define IPV6_RECVHOPLIMIT 51
#define ERRCODE_WARNING MAKE_SQLSTATE('0','1','0','0','0')
#define UINT_FAST8_MAX (255)
#define PF_ATMSVC 20
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define __DECL_SIMD_tanhf128x 
#define SIGILL 4
#define __WNOTHREAD 0x20000000
#define __LC_NUMERIC 1
#define __DECL_SIMD_acoshf128x 
#define HAVE_LIBPAM 1
#define __DECL_SIMD_log1pf64 
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define AF_LLC PF_LLC
#define __INT64_TYPE__ long int
#define ERRCODE_E_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','2')
#define EIO 5
#define GetProcessingMode() Mode
#define UINT64_FORMAT "%" INT64_MODIFIER "u"
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define ENETUNREACH 101
#define EXDEV 18
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define va_start(v,l) __builtin_va_start(v,l)
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define S_IRGRP (S_IRUSR >> 3)
#define UINT32_C(c) c ## U
#define __DECL_SIMD_powf64x 
#define HAVE_INT64_TIMESTAMP 
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define TYPCATEGORY_ENUM 'E'
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define pg_ntoh32(x) pg_bswap32(x)
#define PF_VSOCK 40
#define PG_RETURN_NULL() do { fcinfo->isnull = true; return (Datum) 0; } while (0)
#define ERRCODE_INVALID_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','0','C')
#define __DECL_SIMD_log1pf32 
#define FIELDNO_FUNCTIONCALLINFODATA_ARG 6
#define PF_PACKET 17
#define PARSE_NODE_H 
#define HAVE__BUILTIN_BSWAP16 1
#define MSG_SYN MSG_SYN
#define HAVE_SETSID 1
#define __INO64_T_TYPE __UQUAD_TYPE
#define _POSIX_V6_ILP32_OFF32 -1
#define IS_NONWINDOWS_DIR_SEP(ch) ((ch) == '/')
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define _POSIX_TRACE -1
#define __FP_FAST_FMAF32 1
#define ESRCH 3
#define BKI_DEFAULT(value) 
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define DTK_SECOND 18
#define HAVE_CLOCK_GETTIME 1
#define __WINT_TYPE__ unsigned int
#define EDQUOT 122
#define __SIZEOF_SHORT__ 2
#define F_SEAL_GROW 0x0004
#define IS_HIGHBIT_SET(ch) ((unsigned char)(ch) & HIGHBIT)
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define HIGHBIT (0x80)
#define llast_oid(l) lfirst_oid(list_tail(l))
#define __intptr_t_defined 
#define BKI_SHARED_RELATION 
#define SOL_PACKET 263
#define HAVE__BUILTIN_BSWAP32 1
#define ITEMID_H 
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define ERRCODE_ADMIN_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','1')
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ERRCODE_UNDEFINED_PSTATEMENT MAKE_SQLSTATE('2','6','0','0','0')
#define SIGCLD SIGCHLD
#define ENOSPC 28
#define ERRCODE_UNTRANSLATABLE_CHARACTER MAKE_SQLSTATE('2','2','P','0','5')
#define M_SQRT2f64 __f64 (1.414213562373095048801688724209698079)
#define __SVE_NUM_PREGS 16
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define HAVE_CRYPT_H 1
#define ERRCODE_E_R_I_E_SRF_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','2')
#define TOKMAXLEN 10
#define __USE_POSIX199309 1
#define DTK_DATE_M (DTK_M(YEAR) | DTK_M(MONTH) | DTK_M(DAY))
#define SO_RCVBUF 8
#define VARDATA_SHORT(PTR) VARDATA_1B(PTR)
#define BC 1
#define HAVE_MKDTEMP 1
#define AmWalWriterProcess() (MyAuxProcType == WalWriterProcess)
#define HAVE__BUILTIN_BSWAP64 1
#define BUFFERALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_BUFFER, (LEN))
#define SIGTSTP 20
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define PG_CATCH() } else { PG_exception_stack = save_exception_stack; error_context_stack = save_context_stack
#define ERRCODE_DUPLICATE_OBJECT MAKE_SQLSTATE('4','2','7','1','0')
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define FPE_FLTUNK FPE_FLTUNK
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define __LDBL_MAX_10_EXP__ 4932
#define _POSIX_SEMAPHORES 200809L
#define __W_CONTINUED 0xffff
#define __ATOMIC_RELAXED 0
#define llast_node(type,l) castNode(type, llast(l))
#define CURSOR_OPT_NO_SCROLL 0x0004
#define HAVE__VA_ARGS 1
#define ACL_MODECHG_DEL 2
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define ERRCODE_INVALID_CURSOR_NAME MAKE_SQLSTATE('3','4','0','0','0')
#define __DECL_SIMD_sinhf128x 
#define SA_ONESHOT SA_RESETHAND
#define L_SET SEEK_SET
#define SCM_TIMESTAMPING_OPT_STATS 54
#define ERRCODE_T_R_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('4','0','0','0','2')
#define HAVE_GCC__SYNC_INT64_CAS 1
#define le16toh(x) __uint16_identity (x)
#define EDOM 33
#define LOCK_SH 1
#define ENOSTR 60
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define __DECL_SIMD_erff128x 
#define _SYS_PROCFS_H 1
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define SetProcessingMode(mode) do { AssertArg((mode) == BootstrapProcessing || (mode) == InitProcessing || (mode) == NormalProcessing); Mode = (mode); } while(0)
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define Float8GetDatumFast(X) Float8GetDatum(X)
#define ERRCODE_ASSERT_FAILURE MAKE_SQLSTATE('P','0','0','0','4')
#define SIGKILL 9
#define TYPCATEGORY_TIMESPAN 'T'
#define PG_GETARG_VARCHAR_P(n) DatumGetVarCharP(PG_GETARG_DATUM(n))
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define ECHRNG 44
#define _SC_REGEXP _SC_REGEXP
#define EHOSTDOWN 112
#define _LFS_LARGEFILE 1
#define InvalidBlockNumber ((BlockNumber) 0xFFFFFFFF)
#define __wchar_t__ 
#define SEEK_END 2
#define OffsetNumberPrev(offsetNumber) ((OffsetNumber) (-1 + (offsetNumber)))
#define USE_SSL 
#define M_2_PIf128 __f128 (0.636619772367581343075535053490057448)
#define PALLOC_H 
#define _ISOC99_SOURCE 1
#define DatumGetDateADT(X) ((DateADT) DatumGetInt32(X))
#define ERRCODE_FDW_FUNCTION_SEQUENCE_ERROR MAKE_SQLSTATE('H','V','0','1','0')
#define DatumGetName(X) ((Name) DatumGetPointer(X))
#define ENOLCK 37
#define ENFILE 23
#define BOOLARRAYOID 1000
#define MSG_DONTWAIT MSG_DONTWAIT
#define TIMESTAMP_MASK(b) (1 << (b))
#define JULIAN_MAXDAY (3)
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __DECL_SIMD_atan2f64 
#define PG_VALID_BE_ENCODING(_enc) ((_enc) >= 0 && (_enc) <= PG_ENCODING_BE_LAST)
#define _STDDEF_H_ 
#define __S_ISUID 04000
#define HAVE_UUID_E2FS 1
#define __LC_NAME 8
#define HEAPTUPLESIZE MAXALIGN(sizeof(HeapTupleData))
#define ACL_USAGE (1<<8)
#define MAXALIGN64(LEN) TYPEALIGN64(MAXIMUM_ALIGNOF, (LEN))
#define ENOSYS 38
#define si_band _sifields._sigpoll.si_band
#define __DECL_SIMD_erfl 
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define SA_RESTART 0x10000000
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define ERRCODE_SAVEPOINT_EXCEPTION MAKE_SQLSTATE('3','B','0','0','0')
#define EXE ""
#define UUIDARRAYOID 2951
#define MAXIMUM_ALIGNOF 8
#define AI_PASSIVE 0x0001
#define __UINT_LEAST64_TYPE__ long unsigned int
#define TZ 5
#define ERRCODE_ARRAY_SUBSCRIPT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define PF_RDS 21
#define DCENTURY "century"
#define TUPDESC_H 
#define _BITS_LOCALE_H 1
#define ARR_DATA_OFFSET(a) (ARR_HASNULL(a) ? (a)->dataoffset : ARR_OVERHEAD_NONULLS(ARR_NDIM(a)))
#define __DECL_SIMD_tanf 
#define DEFAULT_PGSOCKET_DIR "/var/run/postgresql"
#define va_arg(v,l) __builtin_va_arg(v,l)
#define VARATT_IS_EXTERNAL_EXPANDED_RO(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RO)
#define NODES_H 
#define VARATT_IS_EXTERNAL_EXPANDED_RW(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RW)
#define _THREAD_SHARED_TYPES_H 1
#define Anum_pg_type_typmodin 18
#define AT_REMOVEDIR 0x200
#define ERRCODE_GROUPING_ERROR MAKE_SQLSTATE('4','2','8','0','3')
#define _SC_TIMERS _SC_TIMERS
#define __DECL_SIMD_erfc 
#define OidFunctionCall0(functionId) OidFunctionCall0Coll(functionId, InvalidOid)
#define OidFunctionCall1(functionId,arg1) OidFunctionCall1Coll(functionId, InvalidOid, arg1)
#define OidFunctionCall2(functionId,arg1,arg2) OidFunctionCall2Coll(functionId, InvalidOid, arg1, arg2)
#define OidFunctionCall3(functionId,arg1,arg2,arg3) OidFunctionCall3Coll(functionId, InvalidOid, arg1, arg2, arg3)
#define OidFunctionCall4(functionId,arg1,arg2,arg3,arg4) OidFunctionCall4Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4)
#define OidFunctionCall5(functionId,arg1,arg2,arg3,arg4,arg5) OidFunctionCall5Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define OidFunctionCall6(functionId,arg1,arg2,arg3,arg4,arg5,arg6) OidFunctionCall6Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define OidFunctionCall7(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7) OidFunctionCall7Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define OidFunctionCall8(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) OidFunctionCall8Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define OidFunctionCall9(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) OidFunctionCall9Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define AT_STATX_SYNC_TYPE 0x6000
#define ItemIdIsValid(itemId) PointerIsValid(itemId)
#define ENOTSUP EOPNOTSUPP
#define OPEN_SYNC_FLAG O_SYNC
#define IP_CHECKSUM 23
#define ERRCODE_E_R_E_CONTAINING_SQL_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','1')
#define __kernel_old_uid_t __kernel_old_uid_t
#define M_2_PIf32x __f32x (0.636619772367581343075535053490057448)
#define __FP_FAST_FMAF32x 1
#define R_OK 4
#define __FLT16_HAS_DENORM__ 1
#define VOIDOID 2278
#define SIZEOF_LONG 8
#define toascii_l(c,l) __toascii_l ((c), (l))
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define HAVE_NET_IF_H 1
#define RowShareLock 2
#define AF_NETLINK PF_NETLINK
#define __INT_FAST8_WIDTH__ 8
#define FALLOC_FL_PUNCH_HOLE 0x02
#define ANYOID 2276
#define CLD_DUMPED CLD_DUMPED
#define PG_RETURN_TIMESTAMP(x) return TimestampGetDatum(x)
#define FKCONSTR_MATCH_PARTIAL 'p'
#define __DECL_SIMD_atan2f 
#define FATAL 21
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define NON_EXEC_STATIC static
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __ULONG32_TYPE unsigned int
#define _BITS_SIGACTION_H 1
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define PM 1
#define _PATH_HOSTS "/etc/hosts"
#define UTIME_OMIT ((1l << 30) - 2l)
#define __DECL_SIMD_tanl 
#define FOPEN_MAX 16
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __suseconds_t_defined 
#define SPLICE_F_NONBLOCK 2
#define SIGFPE 8
#define PG_RETURN_BOOL(x) return BoolGetDatum(x)
#define __off_t_defined 
#define SO_CNX_ADVICE 53
#define HAVE_SPINLOCKS 1
#define TimestampTzGetDatum(X) Int64GetDatum(X)
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define PF_XDP 44
#define SO_NOFCS 43
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define ItemPointerIndicatesMovedPartitions(pointer) ( ItemPointerGetOffsetNumber(pointer) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(pointer) == MovedPartitionsBlockNumber )
#define HAVE_GETOPT_LONG 1
#define SIGPWR 30
#define FRAMEOPTION_START_CURRENT_ROW 0x00200
#define __DECL_SIMD_exp10 
#define _GCC_SIZE_T 
#define __U64_TYPE unsigned long int
#define Anum_pg_attribute_attoptions 22
#define SO_PEERGROUPS 59
#define __USE_XOPEN2K8XSI 1
#define SO_SNDTIMEO_OLD 21
#define SS_DISABLE SS_DISABLE
#define ERRCODE_CRASH_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','2')
#define __DECL_SIMD_exp10f128 
#define __DECL_SIMD_erff 
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define PG_GETARG_BPCHAR_P_COPY(n) DatumGetBpCharPCopy(PG_GETARG_DATUM(n))
#define _POSIX_V6_ILP32_OFFBIG -1
#define ITIMER_PROF ITIMER_PROF
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define HAVE_LIBXML2 1
#define DatumGetBool(X) ((bool) ((X) != 0))
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define PG_ARGISNULL(n) (fcinfo->argnull[n])
#define SIOCGSTAMPNS_OLD 0x8907
#define IP_MINTTL 21
#define TYPEALIGN(ALIGNVAL,LEN) (((uintptr_t) (LEN) + ((ALIGNVAL) - 1)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __ONCE_FLAG_INIT { 0 }
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define END_CRIT_SECTION() do { Assert(CritSectionCount > 0); CritSectionCount--; } while(0)
#define __LC_CTYPE 0
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define S_IWOTH (S_IWGRP >> 3)
#define REGOPERARRAYOID 2208
#define SO_TIMESTAMP_NEW 63
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define sigcontext_struct sigcontext
#define PG_DIAG_SEVERITY 'S'
#define HUGE_VAL_F32X (__builtin_huge_valf32x ())
#define SNANF32 (__builtin_nansf32 (""))
#define AF_DECnet PF_DECnet
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define FIELDNO_FUNCTIONCALLINFODATA_ISNULL 4
#define ERRCODE_INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','4')
#define __LONG_WIDTH__ 64
#define NodeSetTag(nodeptr,t) (((Node*)(nodeptr))->type = (t))
#define __STDLIB_MB_LEN_MAX 16
#define DTK_EARLY 9
#define LC_KOI8_R 0x8b
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define AI_NUMERICHOST 0x0004
#define ereport_domain(elevel,domain,rest) do { if (errstart(elevel, __FILE__, __LINE__, PG_FUNCNAME_MACRO, domain)) errfinish rest; if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define ERRCODE_ERROR_IN_ASSIGNMENT MAKE_SQLSTATE('2','2','0','0','5')
#define __DECL_SIMD_exp10f64 
#define __INO_T_MATCHES_INO64_T 1
#define __DECL_SIMD_log10f128x 
#define FPE_FLTRES FPE_FLTRES
#define __POSIX_FADV_NOREUSE 5
#define PG_DIAG_SOURCE_LINE 'L'
#define ENOPROTOOPT 92
#define TYPEALIGN64(ALIGNVAL,LEN) (((uint64) (LEN) + ((ALIGNVAL) - 1)) & ~((uint64) ((ALIGNVAL) - 1)))
#define __DECL_SIMD_pow 
#define issignaling(x) __MATH_TG ((x), __issignaling, (x))
#define DO_AGGSPLIT_DESERIALIZE(as) (((as) & AGGSPLITOP_DESERIALIZE) != 0)
#define PG_GETARG_VARLENA_P(n) PG_DETOAST_DATUM(PG_GETARG_DATUM(n))
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define MAX_TZDISP_HOUR 15
#define EAI_NOTCANCELED -102
#define SO_ATTACH_BPF 50
#define HAVE_DECL_LLVMGETHOSTCPUNAME 1
#define __GLIBC_USE_IEC_60559_EXT 1
#define FMGR_H 
#define TSQUERYARRAYOID 3645
#define __HAVE_FLOAT128 1
#define UINT_LEAST32_MAX (4294967295U)
#define EMFILE 24
#define ARR_LBOUND(a) ((int *) (((char *) (a)) + sizeof(ArrayType) + sizeof(int) * ARR_NDIM(a)))
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define HAVE_NETINET_TCP_H 1
#define SO_BUSY_POLL_BUDGET 70
#define M_PI_2f32x __f32x (1.570796326794896619231321691639751442)
#define ARR_DATA_PTR(a) (((char *) (a)) + ARR_DATA_OFFSET(a))
#define IPV6_HOPLIMIT 52
#define ERRCODE_INVALID_CURSOR_DEFINITION MAKE_SQLSTATE('4','2','P','1','1')
#define SIZEOF_SIZE_T 8
#define M_1_PI 0.31830988618379067154
#define MACADDR8ARRAYOID 775
#define __DECL_SIMD_sinhl 
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define Anum_pg_type_typstorage 22
#define __lldiv_t_defined 1
#define ERRCODE_INVALID_PSTATEMENT_DEFINITION MAKE_SQLSTATE('4','2','P','1','4')
#define MSG_EOR MSG_EOR
#define DATATYPE_TIMESTAMP_H 
#define dgettext(domainname,msgid) dcgettext (domainname, msgid, LC_MESSAGES)
#define PG_DETOAST_DATUM_PACKED(datum) pg_detoast_datum_packed((struct varlena *) DatumGetPointer(datum))
#define ItemIdHasStorage(itemId) ((itemId)->lp_len != 0)
#define ENOBUFS 105
#define REFCURSOROID 1790
#define ACLITEM_ALL_GOPTION_BITS ((AclMode) 0xFFFF << 16)
#define _SC_INT_MIN _SC_INT_MIN
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IN_MULTICAST(a) IN_CLASSD(a)
#define __DECL_SIMD_expf64x 
#define _POSIX_NO_TRUNC 1
#define TIMESTAMP_H 
#define AT_EACCESS 0x200
#define __DECL_SIMD_exp10f128x 
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define __SIZEOF_WCHAR_T__ 4
#define Anum_pg_type_typdefaultbin 28
#define Anum_pg_type_typoutput 15
#define EFAULT 14
#define ACL_INSERT_CHR 'a'
#define OIDVECTOROID 30
#define __DECL_SIMD_sincos 
#define PF_KCM 41
#define STATUS_OK (0)
#define M_LN2 0.69314718055994530942
#define REGTYPEOID 2206
#define SIGIOT SIGABRT
#define POINTARRAYOID 1017
#define EWOULDBLOCK EAGAIN
#define FRAMEOPTION_END_OFFSET_PRECEDING 0x01000
#define HAVE_RINT 1
#define DN_CREATE 0x00000004
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define HOLD_INTERRUPTS() (InterruptHoldoffCount++)
#define S_IXGRP (S_IXUSR >> 3)
#define ERRCODE_FDW_INVALID_DESCRIPTOR_FIELD_IDENTIFIER MAKE_SQLSTATE('H','V','0','9','1')
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define __ATOMIC_CONSUME 1
#define CIDARRAYOID 1012
#define SO_TIMESTAMPING_NEW 65
#define Anum_pg_type_typelem 12
#define sigev_notify_function _sigev_un._sigev_thread._function
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define EPOCH "epoch"
#define PF_KEY 15
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define ItemIdSetNormal(itemId,off,len) ( (itemId)->lp_flags = LP_NORMAL, (itemId)->lp_off = (off), (itemId)->lp_len = (len) )
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define M_SQRT2f 1.41421356237309504880f
#define DMINUTE "minute"
#define TSVECTORARRAYOID 3643
#define INTMAX_C(c) c ## L
#define SOMAXCONN 4096
#define HAVE_GETRUSAGE 1
#define ACLITEM_ALL_PRIV_BITS ((AclMode) 0xFFFF)
#define ILL_PRVOPC ILL_PRVOPC
#define ERRCODE_INVALID_PASSWORD MAKE_SQLSTATE('2','8','P','0','1')
#define POSIX_FADV_RANDOM 1
#define INT2VECTOROID 22
#define REGPROCARRAYOID 1008
#define ERRCODE_FDW_UNABLE_TO_CREATE_REPLY MAKE_SQLSTATE('H','V','0','0','M')
#define _STDINT_H 1
#define AccessShareLock 1
#define __FILE_defined 1
#define IN_CLASSC_NSHIFT 8
#define PG_GETARG_TEXT_P_COPY(n) DatumGetTextPCopy(PG_GETARG_DATUM(n))
#define LCPRV2_B 0x9d
#define FP_INT_TONEARESTFROMZERO 3
#define NoLock 0
#define SEGV_ADIPERR SEGV_ADIPERR
#define S_ISUID __S_ISUID
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define LC_NAME __LC_NAME
#define HAVE_DECL_FDATASYNC 1
#define isascii_l(c,l) __isascii_l ((c), (l))
#define Anum_pg_attribute_attstorage 11
#define isleap(y) (((y) % 4) == 0 && (((y) % 100) != 0 || ((y) % 400) == 0))
#define ERRCODE_INVALID_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','1','9')
#define __WCHAR_T 
#define DMILLISEC "msecond"
#define ENOTRECOVERABLE 131
#define INT64_FORMAT "%" INT64_MODIFIER "d"
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define PG_GETARG_CSTRING(n) DatumGetCString(PG_GETARG_DATUM(n))
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define SI_TIMER SI_TIMER
#define __LC_MONETARY 4
#define VARDATA_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_data)
#define PAIRINGHEAP_H 
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define ELIBMAX 82
#define __sigstack_defined 1
#define isspace(c) __isctype((c), _ISspace)
#define INFO 17
#define SPLICE_F_MORE 4
#define FRAMEOPTION_END_UNBOUNDED_FOLLOWING 0x00100
#define _ISOC2X_SOURCE 1
#define INTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_INT, (LEN))
#define TopSubTransactionId ((SubTransactionId) 1)
#define LC_UNICODE_SUBSET_3 0xf3
#define __ino64_t_defined 
#define PG_UINT32_MAX (0xFFFFFFFFU)
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define AF_ISDN PF_ISDN
#define __DECL_SIMD_logf32x 
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define VARCHARARRAYOID 1015
#define XIDOID 28
#define IPV6_MULTICAST_LOOP 19
#define __ATOMIC_SEQ_CST 5
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define IPV6_2292HOPLIMIT 8
#define CHECK_ENCODING_CONVERSION_ARGS(srcencoding,destencoding) check_encoding_conversion_args(PG_GETARG_INT32(0), PG_GETARG_INT32(1), PG_GETARG_INT32(4), (srcencoding), (destencoding))
#define CIRCLEOID 718
#define ERRCODE_FDW_INVALID_ATTRIBUTE_VALUE MAKE_SQLSTATE('H','V','0','2','4')
#define ENOENT 2
#define ERRCODE_WARNING_PRIVILEGE_NOT_REVOKED MAKE_SQLSTATE('0','1','0','0','6')
#define IPV6_LEAVE_ANYCAST 28
#define Anum_pg_attribute_attisdropped 17
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define FRAMEOPTION_EXCLUDE_TIES 0x20000
#define pg_unreachable() __builtin_unreachable()
#define ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','3')
#define ARR_ELEMTYPE(a) ((a)->elemtype)
#define SIGTERM 15
#define SPLICE_F_MOVE 1
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define ATTRIBUTE_FIXED_PART_SIZE (offsetof(FormData_pg_attribute,attcollation) + sizeof(Oid))
#define EBADSLT 57
#define IPV6_PMTUDISC_DONT 0
#define EKEYREVOKED 128
#define DatumGetByteaPSlice(X,m,n) ((bytea *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define __DECL_SIMD_sincosf32x 
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define FRAMEOPTION_ROWS 0x00004
#define __HAVE_DISTINCT_FLOAT64X 0
#define ERRCODE_FDW_INVALID_STRING_FORMAT MAKE_SQLSTATE('H','V','0','0','A')
#define ERRCODE_INVALID_RECURSION MAKE_SQLSTATE('4','2','P','1','9')
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define __SIZEOF_LONG_LONG__ 8
#define PG_BACKEND_VERSIONSTR "postgres (PostgreSQL) " PG_VERSION "\n"
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define EHOSTUNREACH 113
#define __USE_DYNAMIC_STACK_SIZE 1
#define UInt32GetDatum(X) ((Datum) (X))
#define __DECL_SIMD_cosf128x 
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define POSIX_FADV_SEQUENTIAL 2
#define __DECL_SIMD_log1pf 
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define DEFAULT_CHECKPOINT_FLUSH_AFTER 32
#define __DECL_SIMD_log1pl 
#define ERRCODE_CASE_NOT_FOUND MAKE_SQLSTATE('2','0','0','0','0')
#define _GCC_PTRDIFF_T 
#define PACKAGE_URL ""
#define M_LN2f32 __f32 (0.693147180559945309417232121458176568)
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define __LDBL_DIG__ 33
#define __exctype(name) extern int name (int) __THROW
#define pg_attribute_always_inline __attribute__((always_inline)) inline
#define _SC_NZERO _SC_NZERO
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','1')
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define INTERRUPTS_CAN_BE_PROCESSED() (InterruptHoldoffCount == 0 && CritSectionCount == 0 && QueryCancelHoldoffCount == 0)
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define S_IROTH (S_IRGRP >> 3)
#define SO_TIMESTAMPNS_OLD 35
#define __DECL_SIMD_powf128x 
#define __POSIX2_THIS_VERSION 200809L
#define INTMAX_WIDTH 64
#define ___int_ptrdiff_t_h 
#define DATE_NOBEGIN(j) ((j) = DATEVAL_NOBEGIN)
#define M_LN2f64x __f64x (0.693147180559945309417232121458176568)
#define INT2ARRAYOID 1005
#define EAI_INTR -104
#define ERRCODE_DATA_CORRUPTED MAKE_SQLSTATE('X','X','0','0','1')
#define IP_PMTUDISC_INTERFACE 4
#define ITEMPTR_H 
#define PARSENODES_H 
#define DSECOND "second"
#define SECS_PER_HOUR 3600
#define FunctionCallInvoke(fcinfo) ((* (fcinfo)->flinfo->fn_addr) (fcinfo))
#define __DECL_SIMD_erff32 
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define DatumGetArrayTypePCopy(X) ((ArrayType *) PG_DETOAST_DATUM_COPY(X))
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define DatumGetByteaPP(X) ((bytea *) PG_DETOAST_DATUM_PACKED(X))
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define lthird_oid(l) lfirst_oid(lnext(lnext(list_head(l))))
#define nodeTag(nodeptr) (((const Node*)(nodeptr))->type)
#define SO_BUF_LOCK 72
#define SO_PRIORITY 12
#define pg_attribute_aligned(a) __attribute__((aligned(a)))
#define PG_ATTRIBUTE_H 
#define DATE_H 
#define FLOAT4ARRAYOID 1021
#define F_SETOWN_EX __F_SETOWN_EX
#define ERRCODE_INVALID_PRECEDING_OR_FOLLOWING_SIZE MAKE_SQLSTATE('2','2','0','1','3')
#define PG_FUNCTION_INFO_V1(funcname) extern Datum funcname(PG_FUNCTION_ARGS); extern PGDLLEXPORT const Pg_finfo_record * CppConcat(pg_finfo_,funcname)(void); const Pg_finfo_record * CppConcat(pg_finfo_,funcname) (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable
#define PF_LOCAL 1
#define __FP_LONG_MAX 0x7fffffffffffffffL
#define __SLONGWORD_TYPE long int
#define S_IFIFO __S_IFIFO
#define ERRCODE_CONFIG_FILE_ERROR MAKE_SQLSTATE('F','0','0','0','0')
#define __fsblkcnt_t_defined 
#define FPE_FLTUND FPE_FLTUND
#define EMEDIUMTYPE 124
#define FRAMEOPTION_START_UNBOUNDED_FOLLOWING 0x00080
#define _(x) gettext(x)
#define X_OK 1
#define ERRCODE_DUPLICATE_CURSOR MAKE_SQLSTATE('4','2','P','0','3')
#define TIMESTAMPOID 1114
#define __S_ISGID 02000
