#define __S_IFBLK 0060000
#define Anum_pg_index_indisready 12
#define SOL_LLC 268
#define BootstrapTransactionId ((TransactionId) 1)
#define __SSP_STRONG__ 3
#define __attr_access(x) __attribute__ ((__access__ x))
#define ERRCODE_INVALID_JSON_TEXT MAKE_SQLSTATE('2','2','0','3','2')
#define __DBL_MIN_EXP__ (-1021)
#define RELKIND_PARTITIONED_INDEX 'I'
#define EMULTIHOP 72
#define ERRCODE_AMBIGUOUS_COLUMN MAKE_SQLSTATE('4','2','7','0','2')
#define ERRCODE_DUPLICATE_ALIAS MAKE_SQLSTATE('4','2','7','1','2')
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define slist_check(head) ((void) (head))
#define STATUS_EOF (-2)
#define MAX_FORKNUM INIT_FORKNUM
#define AF_MAX PF_MAX
#define __CFLOAT32 _Complex _Float32
#define __UINT_LEAST16_MAX__ 0xffff
#define F_SET_RW_HINT 1036
#define IP_ROUTER_ALERT 5
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define IPV6_RECVPATHMTU 60
#define __FLT128_MAX_10_EXP__ 4932
#define OPCLASS_ITEM_STORAGETYPE 3
#define PVC_INCLUDE_PLACEHOLDERS 0x0010
#define BackendIdForTempRelations() (ParallelLeaderBackendId == InvalidBackendId ? MyBackendId : ParallelLeaderBackendId)
#define XLOG_MARK_UNIMPORTANT 0x02
#define ILIST_H 
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define USE_LLVM 1
#define _T_WCHAR_ 
#define RWH_WRITE_LIFE_SHORT 2
#define IS_VALID_DATE(d) ((DATETIME_MIN_JULIAN - POSTGRES_EPOCH_JDATE) <= (d) && (d) < (DATE_END_JULIAN - POSTGRES_EPOCH_JDATE))
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define NI_MAXSERV 32
#define ERRCODE_CONNECTION_DOES_NOT_EXIST MAKE_SQLSTATE('0','8','0','0','3')
#define restrict __restrict__
#define __CFLOAT64 _Complex _Float64
#define ERRCODE_RESERVED_NAME MAKE_SQLSTATE('4','2','9','3','9')
#define __S64_TYPE long int
#define _PRINTF_NAN_LEN_MAX 4
#define PG_BINARY_R "r"
#define __FLT_MAX_EXP__ 128
#define PG_BINARY_W "w"
#define __SQUAD_TYPE long int
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define ERRCODE_INVALID_ARGUMENT_FOR_NTILE MAKE_SQLSTATE('2','2','0','1','4')
#define _BSD_SIZE_T_DEFINED_ 
#define ERRCODE_SINGLETON_SQL_JSON_ITEM_REQUIRED MAKE_SQLSTATE('2','2','0','3','8')
#define CONFIGURE_ARGS " '--build=aarch64-linux-gnu' '--prefix=/usr' '--includedir=${prefix}/include' '--mandir=${prefix}/share/man' '--infodir=${prefix}/share/info' '--sysconfdir=/etc' '--localstatedir=/var' '--disable-option-checking' '--disable-silent-rules' '--libdir=${prefix}/lib/aarch64-linux-gnu' '--runstatedir=/run' '--disable-maintainer-mode' '--disable-dependency-tracking' '--with-tcl' '--with-perl' '--with-python' '--with-pam' '--with-openssl' '--with-libxml' '--with-libxslt' '--mandir=/usr/share/postgresql/14/man' '--docdir=/usr/share/doc/postgresql-doc-14' '--sysconfdir=/etc/postgresql-common' '--datarootdir=/usr/share/' '--datadir=/usr/share/postgresql/14' '--bindir=/usr/lib/postgresql/14/bin' '--libdir=/usr/lib/aarch64-linux-gnu/' '--libexecdir=/usr/lib/postgresql/' '--includedir=/usr/include/postgresql/' '--with-extra-version= (Ubuntu 14.5-0ubuntu0.22.04.1)' '--enable-nls' '--enable-thread-safety' '--enable-debug' '--enable-dtrace' '--disable-rpath' '--with-uuid=e2fs' '--with-gnu-ld' '--with-gssapi' '--with-ldap' '--with-pgport=5432' '--with-system-tzdata=/usr/share/zoneinfo' 'AWK=mawk' 'MKDIR_P=/bin/mkdir -p' 'PROVE=/usr/bin/prove' 'PYTHON=/usr/bin/python3' 'TAR=/bin/tar' 'XSLTPROC=xsltproc --nonet' 'CFLAGS=-g -O2 -flto=auto -ffat-lto-objects -flto=auto -ffat-lto-objects -fstack-protector-strong -Wformat -Werror=format-security' 'LDFLAGS=-Wl,-Bsymbolic-functions -flto=auto -ffat-lto-objects -flto=auto -Wl,-z,relro -Wl,-z,now' '--enable-tap-tests' '--with-icu' '--with-llvm' 'LLVM_CONFIG=/usr/bin/llvm-config-14' 'CLANG=/usr/bin/clang-14' '--with-lz4' '--with-systemd' '--with-selinux' 'build_alias=aarch64-linux-gnu' 'CPPFLAGS=-Wdate-time -D_FORTIFY_SOURCE=2' 'CXXFLAGS=-g -O2 -flto=auto -ffat-lto-objects -flto=auto -ffat-lto-objects -fstack-protector-strong -Wformat -Werror=format-security'"
#define __CHAR_BIT__ 8
#define SO_DOMAIN 39
#define HTUP_H 
#define USE_OPENSSL 1
#define SHORTALIGN(LEN) TYPEALIGN(ALIGNOF_SHORT, (LEN))
#define EREMCHG 78
#define RELKIND_PARTITIONED_TABLE 'p'
#define PG_VERSION_STR "PostgreSQL 14.5 (Ubuntu 14.5-0ubuntu0.22.04.1) on aarch64-unknown-linux-gnu, compiled by gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0, 64-bit"
#define EACCES 13
#define SOCK_RAW SOCK_RAW
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define EDESTADDRREQ 89
#define ERRCODE_NO_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','5')
#define ERRCODE_INVALID_TEXT_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','2')
#define SPLICE_F_GIFT 8
#define FIELDNO_NULLABLE_DATUM_DATUM 0
#define pg_attribute_cold __attribute__((cold))
#define ERRCODE_DATA_EXCEPTION MAKE_SQLSTATE('2','2','0','0','0')
#define PG_DIAG_STATEMENT_POSITION 'P'
#define PIPE_BUF 4096
#define PG_MINORVERSION_NUM 5
#define IP_TTL 2
#define UInt64GetDatum(X) ((Datum) (X))
#define IPV6_JOIN_ANYCAST 27
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define __USE_XOPEN2KXSI 1
#define RWH_WRITE_LIFE_EXTREME 5
#define BKPBLOCK_HAS_DATA 0x20
#define VARDATA(PTR) VARDATA_4B(PTR)
#define SOCK_RDM SOCK_RDM
#define Int8GetDatum(X) ((Datum) (X))
#define DT_LNK DT_LNK
#define ERRCODE_TRANSACTION_ROLLBACK MAKE_SQLSTATE('4','0','0','0','0')
#define PF_DECnet 12
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define HAVE_LINK 1
#define __ORDER_LITTLE_ENDIAN__ 1234
#define UINT_FAST16_WIDTH __WORDSIZE
#define IP_MAX_MEMBERSHIPS 20
#define HAVE_STRUCT_ADDRINFO 1
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define pg_attribute_printf(f,a) __attribute__((format(PG_PRINTF_ATTRIBUTE, f, a)))
#define ERRCODE_UNDEFINED_COLUMN MAKE_SQLSTATE('4','2','7','0','3')
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define _BITS_SOCKADDR_H 1
#define __gid_t_defined 
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define lsecond(l) lfirst(list_nth_cell(l, 1))
#define Anum_pg_index_indcheckxmin 11
#define PG_SOMAXCONN 10000
#define MCAST_LEAVE_SOURCE_GROUP 47
#define BKPBLOCK_WILL_INIT 0x40
#define __FLT32X_DECIMAL_DIG__ 17
#define IPV6_IPSEC_POLICY 34
#define __PIC__ 2
#define MovedPartitionsBlockNumber InvalidBlockNumber
#define _IO_USER_LOCK 0x8000
#define XLogLogicalInfoActive() (wal_level >= WAL_LEVEL_LOGICAL)
#define IPV6_2292HOPOPTS 3
#define ERRCODE_SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','4')
#define ACL_SELECT_FOR_UPDATE ACL_UPDATE
#define Max(x,y) ((x) > (y) ? (x) : (y))
#define Anum_pg_class_relrowsecurity 23
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define HAVE_SYSLOG 1
#define IPV6_PMTUDISC_PROBE 3
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define IP_FREEBIND 15
#define _POSIX_PATH_MAX 256
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define AF_IPX PF_IPX
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define __O_NOFOLLOW 0100000
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','5')
#define PG_INT128_TYPE __int128
#define Anum_pg_class_relname 2
#define MCAST_LEAVE_GROUP 45
#define SOL_BLUETOOTH 274
#define FD_SETSIZE __FD_SETSIZE
#define __CFLOAT128 _Complex _Float128
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define _ASM_GENERIC_ERRNO_BASE_H 
#define VARATT_IS_EXTERNAL_INDIRECT(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_INDIRECT)
#define __DBL_MIN_10_EXP__ (-307)
#define makeNode(_type_) ((_type_ *) newNode(sizeof(_type_),T_ ##_type_))
#define GAI_NOWAIT 1
#define ENOTTY 25
#define TRACE_SORT 1
#define _ISOC11_SOURCE 1
#define slist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, slist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define PARTITION_STRATEGY_RANGE 'r'
#define L_cuserid 9
#define Anum_pg_attribute_attalign 11
#define __u_char_defined 
#define UTIME_NOW ((1l << 30) - 1l)
#define HAVE_DECL_F_FULLFSYNC 0
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define __FLT64X_HAS_INFINITY__ 1
#define BKPBLOCK_HAS_IMAGE 0x10
#define IPV6_HOPOPTS 54
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define HAVE_INT64_TIMESTAMP 
#define Min(x,y) ((x) < (y) ? (x) : (y))
#define __INT_LEAST16_TYPE__ short int
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define SO_SECURITY_AUTHENTICATION 22
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define vsprintf pg_vsprintf
#define PG_MAJORVERSION_NUM 14
#define NameStr(name) ((name).data)
#define _BITS_TYPES_LOCALE_T_H 1
#define UINT8_WIDTH 8
#define MSG_WAITALL MSG_WAITALL
#define _WCHAR_T_DEFINED 
#define __O_NOATIME 01000000
#define USECS_PER_DAY INT64CONST(86400000000)
#define HAVE_INT_OPTERR 1
#define ENOMEM 12
#define __SIZEOF_LONG_LONG__ 8
#define SOL_TIPC 271
#define __INT_LEAST8_WIDTH__ 8
#define SO_INCOMING_NAPI_ID 56
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define h_addr h_addr_list[0]
#define __INT_LEAST8_MAX__ 0x7f
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define __stub_sigreturn 
#define for_each_cell(cell,lst,initcell) for (ForEachState cell ##__state = for_each_cell_setup(lst, initcell); (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define IN_CLASSB_NSHIFT 16
#define DEFAULT_BGWRITER_FLUSH_AFTER 64
#define PRS2LOCK_H 
#define __always_inline __inline __attribute__ ((__always_inline__))
#define NFDBITS __NFDBITS
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define S_IXOTH (S_IXGRP >> 3)
#define WCHAR_WIDTH 32
#define lfourth_oid(l) lfirst_oid(list_nth_cell(l, 3))
#define ItemIdSetRedirect(itemId,link) ( (itemId)->lp_flags = LP_REDIRECT, (itemId)->lp_off = (link), (itemId)->lp_len = 0 )
#define RelationIsPopulated(relation) ((relation)->rd_rel->relispopulated)
#define AT_STATX_SYNC_AS_STAT 0x0000
#define SOL_IPV6 41
#define __O_CLOEXEC 02000000
#define ENETRESET 102
#define IP_MTU 14
#define PG_VERSION_13 130000
#define PG_VERSION_14 140000
#define PG_VERSION_15 150000
#define __ARM_FP 14
#define AF_ROSE PF_ROSE
#define DatumGetUInt32(X) ((uint32) (X))
#define CHECKPOINT_WAIT 0x0020
#define __fortify_function __extern_always_inline __attribute_artificial__
#define LP_UNUSED 0
#define Anum_pg_class_reltuples 11
#define _RPC_NETDB_H 1
#define SOCK_DCCP SOCK_DCCP
#define NAME_MAX 255
#define CommandIdGetDatum(X) ((Datum) (X))
#define __UINT_LEAST8_MAX__ 0xff
#define Anum_pg_attribute_atthasmissing 16
#define PF_SECURITY 14
#define MaxAttrNumber 32767
#define IPV6_2292DSTOPTS 4
#define CppAsString2(x) CppAsString(x)
#define __UINTMAX_TYPE__ long unsigned int
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define PG_DIAG_TABLE_NAME 't'
#define __ASM_GENERIC_BITS_PER_LONG 
#define HAVE_DECL_PREADV 1
#define ENABLE_THREAD_SAFETY 1
#define HAVE_WCTYPE_H 1
#define RELATION_IS_OTHER_TEMP(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP && !(relation)->rd_islocaltemp)
#define sprintf pg_sprintf
#define DatumGetUInt64(X) ((uint64) (X))
#define pg_bswap16(x) __builtin_bswap16(x)
#define __linux 1
#define VARATT_IS_4B_C(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x02)
#define VARATT_IS_4B_U(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x00)
#define XLR_NORMAL_RDATAS 20
#define ERRCODE_SUCCESSFUL_COMPLETION MAKE_SQLSTATE('0','0','0','0','0')
#define AI_ADDRCONFIG 0x0020
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define _BITS_PTHREADTYPES_ARCH_H 1
#define HOURS_PER_DAY 24
#define FirstGenbkiObjectId 10000
#define __UINT32_MAX__ 0xffffffffU
#define ERRCODE_S_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','2')
#define __bool_true_false_are_defined 1
#define __TIMER_T_TYPE void *
#define ERRCODE_DATETIME_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','0','8')
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define __SIZE_T 
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define _POSIX_PIPE_BUF 512
#define ACL_INSERT (1<<0)
#define ALIGNOF_DOUBLE 8
#define PF_SNA 22
#define _ATFILE_SOURCE 1
#define F_EXLCK 4
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define MSG_FIN MSG_FIN
#define SO_NO_CHECK 11
#define UINT_FAST64_WIDTH 64
#define Anum_pg_attribute_attcompression 13
#define WUNTRACED 2
#define ERESTART 85
#define Anum_pg_publication_pubviaroot 9
#define EISNAM 120
#define pg_bswap64(x) __builtin_bswap64(x)
#define UINT16_C(c) c
#define BlockIdEquals(blockId1,blockId2) ((blockId1)->bi_hi == (blockId2)->bi_hi && (blockId1)->bi_lo == (blockId2)->bi_lo)
#define LOCK_READ 64
#define lfirst_node(type,lc) castNode(type, lfirst(lc))
#define Anum_pg_index_indpred 20
#define __f64x(x) x ##f64x
#define ENOMSG 42
#define RENAME_EXCHANGE (1 << 1)
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define qsort(a,b,c,d) pg_qsort(a,b,c,d)
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define AF_FILE PF_FILE
#define __SCHAR_MAX__ 0x7f
#define PG_IOLBF _IOLBF
#define __USE_KERNEL_IPV6_DEFS 0
#define __attribute_used__ __attribute__ ((__used__))
#define RelationHasReferenceCountZero(relation) ((bool)((relation)->rd_refcnt == 0))
#define VARATT_IS_EXTENDED(PTR) (!VARATT_IS_4B_U(PTR))
#define ERRCODE_INVALID_DATABASE_DEFINITION MAKE_SQLSTATE('4','2','P','1','2')
#define __KERNEL_STRICT_NAMES 
#define SYNC_METHOD_FSYNC 0
#define __INT64_C(c) c ## L
#define HAVE_TYPEOF 1
#define __CHAR16_TYPE__ short unsigned int
#define Anum_pg_class_relfrozenxid 29
#define ERRCODE_WITH_CHECK_OPTION_VIOLATION MAKE_SQLSTATE('4','4','0','0','0')
#define RelationGetRelationName(relation) (NameStr((relation)->rd_rel->relname))
#define FRAMEOPTION_EXCLUDE_GROUP 0x10000
#define DO_AGGSPLIT_SERIALIZE(as) (((as) & AGGSPLITOP_SERIALIZE) != 0)
#define AttributeRelationId 1249
#define CHECKPOINT_FLUSH_ALL 0x0010
#define dlist_check(head) ((void) (head))
#define LOG_DESTINATION_STDERR 1
#define __isascii(c) (((c) & ~0x7f) == 0)
#define __toascii(c) ((c) & 0x7f)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define SO_TIMESTAMP_OLD 29
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define BLCKSZ 8192
#define ClassTblspcRelfilenodeIndexId 3455
#define SizeOfXLogRecordBlockCompressHeader sizeof(XLogRecordBlockCompressHeader)
#define SOL_TLS 282
#define DatumGetCommandId(X) ((CommandId) (X))
#define XLOGRECORD_H 
#define RelationHasLocalCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option == VIEW_OPTION_CHECK_OPTION_LOCAL)
#define HAVE_INDEXOPTINFO_TYPEDEF 1
#define FIOSETOWN 0x8901
#define IS_VALID_TIMESTAMP(t) (MIN_TIMESTAMP <= (t) && (t) < END_TIMESTAMP)
#define ERRCODE_INSUFFICIENT_RESOURCES MAKE_SQLSTATE('5','3','0','0','0')
#define HAVE_DLOPEN 1
#define SO_LOCK_FILTER 44
#define TSROUND(j) (rint(((double) (j)) * TS_PREC_INV) / TS_PREC_INV)
#define RELKIND_COMPOSITE_TYPE 'c'
#define __LC_NUMERIC 1
#define IPPROTO_EGP IPPROTO_EGP
#define __USER_LABEL_PREFIX__ 
#define SO_DEBUG 1
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define SO_ATTACH_BPF 50
#define _BITS_ENDIANNESS_H 1
#define errcontext set_errcontext_domain(TEXTDOMAIN), errcontext_msg
#define __LC_MEASUREMENT 11
#define llast(l) lfirst(list_last_cell(l))
#define Anum_pg_attribute_attbyval 10
#define SCM_TIMESTAMPING_PKTINFO 58
#define __GLIBC__ 2
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define RENAME_NOREPLACE (1 << 0)
#define ERRCODE_FDW_INCONSISTENT_DESCRIPTOR_INFORMATION MAKE_SQLSTATE('H','V','0','2','1')
#define WCONTINUED 8
#define RelationUsesLocalBuffers(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP)
#define setjmp(env) _setjmp (env)
#define HAVE_READLINE_HISTORY_H 1
#define UINT_LEAST8_WIDTH 8
#define SizeOfXLogRecordBlockHeader (offsetof(XLogRecordBlockHeader, data_length) + sizeof(uint16))
#define ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('2','3','0','0','0')
#define ERRCODE_FDW_INVALID_STRING_LENGTH_OR_BUFFER_LENGTH MAKE_SQLSTATE('H','V','0','9','0')
#define ERRCODE_STACKED_DIAGNOSTICS_ACCESSED_WITHOUT_ACTIVE_HANDLER MAKE_SQLSTATE('0','Z','0','0','2')
#define _LARGEFILE64_SOURCE 1
#define __LDBL_HAS_INFINITY__ 1
#define _BITS_UINTN_IDENTITY_H 1
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define DatumGetUInt16(X) ((uint16) (X))
#define F_GETLK 5
#define __fsfilcnt_t_defined 
#define __FLT32X_HAS_DENORM__ 1
#define ERRCODE_FLOATING_POINT_EXCEPTION MAKE_SQLSTATE('2','2','P','0','1')
#define FRAMEOPTION_NONDEFAULT 0x00001
#define AF_PHONET PF_PHONET
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define INET_ADDRSTRLEN 16
#define _BITS_TYPESIZES_H 1
#define ACL_REFERENCES (1<<5)
#define ERRCODE_FDW_INVALID_COLUMN_NAME MAKE_SQLSTATE('H','V','0','0','7')
#define __GNU_LIBRARY__ 6
#define VARATT_IS_EXTERNAL(PTR) VARATT_IS_1B_E(PTR)
#define PG_ATTRIBUTE_D_H 
#define __FLT32_DIG__ 6
#define ERRCODE_INVALID_COLUMN_DEFINITION MAKE_SQLSTATE('4','2','6','1','1')
#define __RLIM_T_MATCHES_RLIM64_T 1
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define toascii(c) __toascii (c)
#define SO_TIMESTAMPING_OLD 37
#define ENOLINK 67
#define __HAVE_FLOAT128X 0
#define __FLT32_IS_IEC_60559__ 2
#define __GLIBC_MINOR__ 35
#define __stub_chflags 
#define PF_LLC 26
#define LOG_DESTINATION_CSVLOG 8
#define isblank_l(c,l) __isblank_l ((c), (l))
#define TransactionIdIsNormal(xid) ((xid) >= FirstNormalTransactionId)
#define s6_addr16 __in6_u.__u6_addr16
#define HAVE_SRANDOM 1
#define SO_BROADCAST 6
#define ERRCODE_INVALID_GRANT_OPERATION MAKE_SQLSTATE('0','L','P','0','1')
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __DEV_T_TYPE __UQUAD_TYPE
#define USECS_PER_SEC INT64CONST(1000000)
#define FD_H 
#define PACKAGE_TARNAME "postgresql"
#define XLogRecHasBlockRef(decoder,block_id) ((decoder)->blocks[block_id].in_use)
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __STDC_UTF_16__ 1
#define s6_addr32 __in6_u.__u6_addr32
#define le32toh(x) __uint32_identity (x)
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define ClassOidIndexId 2662
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define __O_LARGEFILE 0
#define NIL ((List *) NULL)
#define _POSIX_NAME_MAX 14
#define SCM_TXTIME SO_TXTIME
#define ERRCODE_PROGRAM_LIMIT_EXCEEDED MAKE_SQLSTATE('5','4','0','0','0')
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define DT_SOCK DT_SOCK
#define InvalidBackendId (-1)
#define CACHELINEALIGN(LEN) TYPEALIGN(PG_CACHE_LINE_SIZE, (LEN))
#define AttrNumberGetAttrOffset(attNum) ( AssertMacro(AttrNumberIsForUserDefinedAttr(attNum)), ((attNum) - 1) )
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define __WINT_MAX__ 0xffffffffU
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define Int64GetDatumFast(X) Int64GetDatum(X)
#define __FLT32X_HAS_INFINITY__ 1
#define SO_ACCEPTCONN 30
#define UINT32_WIDTH 32
#define __INT32_MAX__ 0x7fffffff
#define DatumGetObjectId(X) ((Oid) (X))
#define ERRCODE_RAISE_EXCEPTION MAKE_SQLSTATE('P','0','0','0','1')
#define __GLIBC_USE_DEPRECATED_GETS 0
#define HAVE_SECURITY_PAM_APPL_H 1
#define __INT_WIDTH__ 32
#define O_NDELAY O_NONBLOCK
#define __S_IFCHR 0020000
#define __SIZE_WIDTH__ 64
#define S_ISVTX __S_ISVTX
#define ERRCODE_IS_CATEGORY(ec) (((ec) & ~((1 << 12) - 1)) == 0)
#define BKI_ARRAY_DEFAULT(value) 
#define HAVE_POSIX_FALLOCATE 1
#define __STDC_IEC_559__ 1
#define MAKE_SQLSTATE(ch1,ch2,ch3,ch4,ch5) (PGSIXBIT(ch1) + (PGSIXBIT(ch2) << 6) + (PGSIXBIT(ch3) << 12) + (PGSIXBIT(ch4) << 18) + (PGSIXBIT(ch5) << 24))
#define SO_TYPE 3
#define __STDC_ISO_10646__ 201706L
#define CHECKPOINT_IS_SHUTDOWN 0x0001
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define AGGSPLITOP_SKIPFINAL 0x02
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define HEAP_MIN_FILLFACTOR 10
#define BoolIsValid(boolean) ((boolean) == false || (boolean) == true)
#define DatumGetChar(X) ((char) (X))
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define ERRCODE_INVALID_SQL_STATEMENT_NAME MAKE_SQLSTATE('2','6','0','0','0')
#define __USE_FORTIFY_LEVEL 2
#define SO_ATTACH_REUSEPORT_EBPF 52
#define LOCK_EX 2
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define TS_PREC_INV 1000000.0
#define XLogArchiveCommandSet() (XLogArchiveCommand[0] != '\0')
#define Anum_pg_index_indkey 15
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define Anum_pg_class_relacl 31
#define ERRCODE_E_R_I_E_EVENT_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','3')
#define _LARGEFILE_SOURCE 1
#define MAX_INPUT 255
#define __FLT128_IS_IEC_60559__ 2
#define ENABLE_NLS 1
#define ESTALE 116
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define LC_TIME __LC_TIME
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define IPV6_FREEBIND 78
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define __SIZEOF_FLOAT__ 4
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define ALIGNOF_LONG 8
#define OID_MAX UINT_MAX
#define _POSIX_LOGIN_NAME_MAX 9
#define __S_IFIFO 0010000
#define PTRDIFF_MAX (9223372036854775807L)
#define pg_attribute_packed() __attribute__((packed))
#define HAVE__BUILTIN_CONSTANT_P 1
#define PG_INDEX_H 
#define IP_ORIGDSTADDR 20
#define DELAYTIMER_MAX 2147483647
#define HAVE_STDLIB_H 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define dlist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->next)
#define IPV6_DSTOPTS 59
#define OPEN_SYNC_FLAG O_SYNC
#define dlist_tail_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) dlist_tail_element_off(lhead, offsetof(type, membername))))
#define BKI_SHARED_RELATION 
#define PGERROR 21
#define SOL_ICMPV6 58
#define FLOAT8PASSBYVAL true
#define __attribute_const__ __attribute__ ((__const__))
#define ERRCODE_FDW_REPLY_HANDLE MAKE_SQLSTATE('H','V','0','0','K')
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define SOL_PNPIPE 275
#define DO_AGGSPLIT_COMBINE(as) (((as) & AGGSPLITOP_COMBINE) != 0)
#define ERRCODE_NO_DATA_FOUND MAKE_SQLSTATE('P','0','0','0','2')
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define htobe32(x) __bswap_32 (x)
#define AF_BLUETOOTH PF_BLUETOOTH
#define pg_restrict __restrict__
#define L_tmpnam 20
#define _DIRENT_HAVE_D_RECLEN 
#define PG_DIAG_SCHEMA_NAME 's'
#define ___int_wchar_t_h 
#define UINT8_C(c) c
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define isascii(c) __isascii (c)
#define MINS_PER_HOUR 60
#define __GNUC__ 11
#define HAVE_DECL_POSIX_FADVISE 1
#define HAVE_GCC__SYNC_INT64_CAS 1
#define HAVE_SYS_TYPES_H 1
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define IPPROTO_TCP IPPROTO_TCP
#define HAVE_GCC__ATOMIC_INT32_CAS 1
#define PG_DIAG_SQLSTATE 'C'
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ERRCODE_T_R_STATEMENT_COMPLETION_UNKNOWN MAKE_SQLSTATE('4','0','0','0','3')
#define appendStringInfoCharMacro(str,ch) (((str)->len + 1 >= (str)->maxlen) ? appendStringInfoChar(str, ch) : (void)((str)->data[(str)->len] = (ch), (str)->data[++(str)->len] = '\0'))
#define PF_ISDN 34
#define OPENSSL_API_COMPAT 0x10001000L
#define POSIX_FADV_WILLNEED 3
#define HAVE_PTHREAD_BARRIER_WAIT 1
#define AF_NFC PF_NFC
#define HAVE_DECL_STRNLEN 1
#define BlockNumberIsValid(blockNumber) ((bool) ((BlockNumber) (blockNumber) != InvalidBlockNumber))
#define ERRCODE_WARNING_NULL_VALUE_ELIMINATED_IN_SET_FUNCTION MAKE_SQLSTATE('0','1','0','0','3')
#define LOCK_NB 4
#define TRANSAM_H 
#define __daddr_t_defined 
#define IP_HDRINCL 3
#define MSG_CTRUNC MSG_CTRUNC
#define HAVE_LZ4_H 1
#define EAI_MEMORY -10
#define ERRCODE_UNDEFINED_DATABASE MAKE_SQLSTATE('3','D','0','0','0')
#define UINT64CONST(x) (x ##UL)
#define MSG_PROXY MSG_PROXY
#define SO_DETACH_REUSEPORT_BPF 68
#define __BIGGEST_ALIGNMENT__ 16
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define IPV6_RECVHOPOPTS 53
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define ItemIdGetFlags(itemId) ((itemId)->lp_flags)
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define Anum_pg_attribute_attnum 6
#define __FLT64_MAX_10_EXP__ 308
#define list_make_ptr_cell(v) ((ListCell) {.ptr_value = (v)})
#define pg_ntoh16(x) pg_bswap16(x)
#define DLIST_STATIC_INIT(name) {{&(name).head, &(name).head}}
#define __GLIBC_USE_LIB_EXT2 1
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define Anum_pg_attribute_attndims 7
#define ERRCODE_NON_UNIQUE_KEYS_IN_A_JSON_OBJECT MAKE_SQLSTATE('2','2','0','3','7')
#define HAVE_GETRLIMIT 1
#define WTERMSIG(status) __WTERMSIG (status)
#define PVC_RECURSE_AGGREGATES 0x0002
#define ERRCODE_UNTERMINATED_C_STRING MAKE_SQLSTATE('2','2','0','2','4')
#define ERRCODE_ZERO_LENGTH_CHARACTER_STRING MAKE_SQLSTATE('2','2','0','0','F')
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define __DBL_IS_IEC_60559__ 2
#define AF_SECURITY PF_SECURITY
#define LOCK_RW 192
#define EXIT_SUCCESS 0
#define PrevProcessUtility_compat(a,b,c,d,e,f,g,h) PrevProcessUtility(a, b, c, d, e, f, g, h)
#define pg_ntoh32(x) pg_bswap32(x)
#define HAVE_STRTOULL 1
#define ERRCODE_AMBIGUOUS_ALIAS MAKE_SQLSTATE('4','2','P','0','9')
#define F_SETSIG __F_SETSIG
#define UINTMAX_WIDTH 64
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define PG_BSWAP_H 
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define VARATT_EXTERNAL_GET_COMPRESS_METHOD(toast_pointer) ((toast_pointer).va_extinfo >> VARLENA_EXTSIZE_BITS)
#define PG_VERSION_16 160000
#define SCM_CREDENTIALS SCM_CREDENTIALS
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define expand_function_arguments_compat(a,b,c,d) expand_function_arguments(a, b, c, d)
#define HAVE_FDATASYNC 1
#define IP_MTU_DISCOVER 10
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define _DIRENT_HAVE_D_TYPE 
#define PublicationObjectIndexId 6110
#define HAVE_STRTOLL 1
#define snprintf pg_snprintf
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define RAND_MAX 2147483647
#define XL_ROUTINE(...) &(XLogReaderRoutine){__VA_ARGS__}
#define HAVE_READLINK 1
#define _FEATURES_H 1
#define LOCK_UN 8
#define pg_ntoh64(x) pg_bswap64(x)
#define __DADDR_T_TYPE __S32_TYPE
#define Anum_pg_class_relforcerowsecurity 24
#define elog(elevel,...) ereport(elevel, errmsg_internal(__VA_ARGS__))
#define HAVE_SYS_UIO_H 1
#define PACKAGE_BUGREPORT "pgsql-bugs@lists.postgresql.org"
#define IPV6_UNICAST_IF 76
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define ERRCODE_RESTRICT_VIOLATION MAKE_SQLSTATE('2','3','0','0','1')
#define MAX_HANDLE_SZ 128
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define SIZE_WIDTH __WORDSIZE
#define __FD_SETSIZE 1024
#define h_errno (*__h_errno_location ())
#define lfourth(l) lfirst(list_nth_cell(l, 3))
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define DEVNULL "/dev/null"
#define ERRCODE_INVALID_TRANSACTION_STATE MAKE_SQLSTATE('2','5','0','0','0')
#define EBADMSG 74
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#define __LDBL_HAS_DENORM__ 1
#define ItemIdGetOffset(itemId) ((itemId)->lp_off)
#define Anum_pg_index_indislive 13
#define __S_IFREG 0100000
#define __SOCKADDR_ALLTYPES __SOCKADDR_ONETYPE (sockaddr) __SOCKADDR_ONETYPE (sockaddr_at) __SOCKADDR_ONETYPE (sockaddr_ax25) __SOCKADDR_ONETYPE (sockaddr_dl) __SOCKADDR_ONETYPE (sockaddr_eon) __SOCKADDR_ONETYPE (sockaddr_in) __SOCKADDR_ONETYPE (sockaddr_in6) __SOCKADDR_ONETYPE (sockaddr_inarp) __SOCKADDR_ONETYPE (sockaddr_ipx) __SOCKADDR_ONETYPE (sockaddr_iso) __SOCKADDR_ONETYPE (sockaddr_ns) __SOCKADDR_ONETYPE (sockaddr_un) __SOCKADDR_ONETYPE (sockaddr_x25)
#define AssertPendingSyncs_RelationCache() do {} while (0)
#define LC_TIME_MASK (1 << __LC_TIME)
#define PG_DIAG_INTERNAL_QUERY 'q'
#define boolVal(v) intVal(v)
#define LC_ADDRESS __LC_ADDRESS
#define _GCC_WRAP_STDINT_H 
#define POSIX_FADV_NORMAL 0
#define PG_VERSION_CONSTANTS 
#define DatumGetInt16(X) ((int16) (X))
#define ERRCODE_INVALID_TRANSACTION_TERMINATION MAKE_SQLSTATE('2','D','0','0','0')
#define S_IFCHR __S_IFCHR
#define __dev_t_defined 
#define LONGALIGN(LEN) TYPEALIGN(ALIGNOF_LONG, (LEN))
#define HAVE_SYS_UN_H 1
#define SO_DONTROUTE 5
#define __DBL_MAX_EXP__ 1024
#define ERRCODE_FDW_COLUMN_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','5')
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define HAVE_STRSIGNAL 1
#define __WCHAR_WIDTH__ 32
#define DatumGetInt32(X) ((int32) (X))
#define _BITS_WCHAR_H 1
#define IP_RECVERR 11
#define ERRCODE_SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED MAKE_SQLSTATE('2','5','0','0','7')
#define DEFAULT_PGSOCKET_DIR "/var/run/postgresql"
#define BKI_LOOKUP_OPT(catalog) 
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define ERRCODE_DUPLICATE_FUNCTION MAKE_SQLSTATE('4','2','7','2','3')
#define _VA_LIST_ 
#define isspace_l(c,l) __isspace_l ((c), (l))
#define ETOOMANYREFS 109
#define ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE MAKE_SQLSTATE('0','3','0','0','0')
#define PG_TRY() do { sigjmp_buf *_save_exception_stack = PG_exception_stack; ErrorContextCallback *_save_context_stack = error_context_stack; sigjmp_buf _local_sigjmp_buf; bool _do_rethrow = false; if (sigsetjmp(_local_sigjmp_buf, 0) == 0) { PG_exception_stack = &_local_sigjmp_buf
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define __FLT_IS_IEC_60559__ 2
#define MCAST_INCLUDE 1
#define _POSIX_MAX_CANON 255
#define COMMERROR LOG_SERVER_ONLY
#define PF_PHONET 35
#define FRAMEOPTION_RANGE 0x00002
#define USE_SYSV_SHARED_MEMORY 1
#define __USECONDS_T_TYPE __U32_TYPE
#define HAVE_GCC__ATOMIC_INT64_CAS 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define ERRCODE_CANNOT_CONNECT_NOW MAKE_SQLSTATE('5','7','P','0','3')
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define ENONET 64
#define EXFULL 54
#define _LINUX_STDDEF_H 
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define _STDARG_H 
#define ERRCODE_ESCAPE_CHARACTER_CONFLICT MAKE_SQLSTATE('2','2','0','0','B')
#define _T_WCHAR 
#define AF_AX25 PF_AX25
#define ATTNUM_H 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SO_COOKIE 57
#define CURSOR_OPT_GENERIC_PLAN 0x0200
#define _BITS_STDIO2_H 1
#define get_partition_parent_compat(a,b) get_partition_parent(a, b)
#define EQ_CRC32C(c1,c2) ((c1) == (c2))
#define ERRCODE_INVALID_OBJECT_DEFINITION MAKE_SQLSTATE('4','2','P','1','7')
#define DatumGetTransactionId(X) ((TransactionId) (X))
#define st_atime st_atim.tv_sec
#define PARTITION_STRATEGY_LIST 'l'
#define __stub___compat_uselib 
#define __INT_FAST8_TYPE__ signed char
#define __ARM_ALIGN_MAX_PWR 28
#define Anum_pg_class_relpartbound 33
#define _____fpos64_t_defined 1
#define __SIZEOF_WINT_T__ 4
#define EBUSY 16
#define FIELDNO_NULLABLE_DATUM_ISNULL 1
#define SOCK_PACKET SOCK_PACKET
#define ENOTNAM 118
#define ERRCODE_INSUFFICIENT_PRIVILEGE MAKE_SQLSTATE('4','2','5','0','1')
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define ERRCODE_QUERY_CANCELED MAKE_SQLSTATE('5','7','0','1','4')
#define __U16_TYPE unsigned short int
#define WINT_MAX (4294967295u)
#define ENOSPC 28
#define ClassNameNspIndexId 2663
#define F_SETLK 6
#define UINTPTR_MAX (18446744073709551615UL)
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#define ERRCODE_DIAGNOSTICS_EXCEPTION MAKE_SQLSTATE('0','Z','0','0','0')
#define linitial_oid(l) lfirst_oid(list_nth_cell(l, 0))
#define AF_ATMSVC PF_ATMSVC
#define VARDATA_COMPRESSED_GET_COMPRESS_METHOD(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_tcinfo >> VARLENA_EXTSIZE_BITS)
#define LC_MONETARY __LC_MONETARY
#define __ASM_GENERIC_POSIX_TYPES_H 
#define __USE_GNU 1
#define __FLT128_HAS_INFINITY__ 1
#define __FLT_MIN_EXP__ (-125)
#define JULIAN_MINMONTH (11)
#define lsecond_oid(l) lfirst_oid(list_nth_cell(l, 1))
#define WEXITED 4
#define F_GETOWN __F_GETOWN
#define IPV6_V6ONLY 26
#define AF_PPPOX PF_PPPOX
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define HAVE_UNISTD_H 1
#define Anum_pg_class_relowner 6
#define IPV6_RECVRTHDR 56
#define alloca(size) __builtin_alloca (size)
#define ERRCODE_INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION MAKE_SQLSTATE('2','2','0','1','G')
#define IP_MULTICAST_ALL 49
#define EPROTOTYPE 91
#define HAVE_SYS_IPC_H 1
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define HAVE_RL_COMPLETION_SUPPRESS_QUOTE 1
#define PF_IRDA 23
#define __THROWNL __attribute__ ((__nothrow__))
#define __WINT_WIDTH__ 32
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define fcSetArgExt(fc,n,val,is_null) (((fc)->args[n].isnull = (is_null)), ((fc)->args[n].value = (val)))
#define _DIRENT_HAVE_D_OFF 
#define va_end(v) __builtin_va_end(v)
#define INT_LEAST32_WIDTH 32
#define FASYNC O_ASYNC
#define VARHDRSZ_SHORT offsetof(varattrib_1b, va_data)
#define CHECKPOINT_IMMEDIATE 0x0004
#define _LOCALE_H 1
#define MAXALIGN_DOWN(LEN) TYPEALIGN_DOWN(MAXIMUM_ALIGNOF, (LEN))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define ERRCODE_READ_ONLY_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','6')
#define __ARM_FP16_ARGS 1
#define HAVE_PREAD 1
#define dlist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), (type *) dlist_head_element_off(lhead, offsetof(type, membername)))
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define ERRCODE_CHARACTER_NOT_IN_REPERTOIRE MAKE_SQLSTATE('2','2','0','2','1')
#define IPV6_RECVTCLASS 66
#define ERRCODE_PROTOCOL_VIOLATION MAKE_SQLSTATE('0','8','P','0','1')
#define __INT_LEAST32_MAX__ 0x7fffffff
#define O_RSYNC O_SYNC
#define WINT_MIN (0u)
#define LOCKOPTIONS_H 
#define MaxSizeOfXLogRecordBlockHeader (SizeOfXLogRecordBlockHeader + SizeOfXLogRecordBlockImageHeader + SizeOfXLogRecordBlockCompressHeader + sizeof(RelFileNode) + sizeof(BlockNumber))
#define VARATT_EXTERNAL_GET_EXTSIZE(toast_pointer) ((toast_pointer).va_extinfo & VARLENA_EXTSIZE_MASK)
#define __key_t_defined 
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define ERRCODE_UNDEFINED_PARAMETER MAKE_SQLSTATE('4','2','P','0','2')
#define __unix__ 1
#define IPV6_MTU 24
#define SO_RCVLOWAT 18
#define IPV6_RECVDSTOPTS 58
#define SIG_ATOMIC_WIDTH 32
#define CLASS_TUPLE_SIZE (offsetof(FormData_pg_class,relminmxid) + sizeof(TransactionId))
#define IPPROTO_MTP IPPROTO_MTP
#define ERRCODE_SQL_JSON_MEMBER_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','A')
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __INT16_TYPE__ short int
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x) != 0, 0)
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define __ASM_GENERIC_SOCKET_H 
#define __HAVE_FLOAT32X 1
#define __FLT_EVAL_METHOD_C99__ 0
#define __time_t_defined 1
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __USE_UNIX98 1
#define st_ctime st_ctim.tv_sec
#define DECLARE_TOAST(name,toastoid,indexoid) extern int no_such_variable
#define WINT_WIDTH 32
#define ERRCODE_CANT_CHANGE_RUNTIME_PARAM MAKE_SQLSTATE('5','5','P','0','2')
#define EOF (-1)
#define PG_END_TRY() } if (_do_rethrow) PG_RE_THROW(); PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack; } while (0)
#define TZDISP_LIMIT ((MAX_TZDISP_HOUR + 1) * SECS_PER_HOUR)
#define F_SEAL_SEAL 0x0001
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define InvalidTransactionId ((TransactionId) 0)
#define ItemPointerGetOffsetNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetOffsetNumberNoCheck(pointer) )
#define ESCAPE_STRING_SYNTAX 'E'
#define __FLT64_MIN_EXP__ (-1021)
#define ERRCODE_SQL_JSON_SCALAR_REQUIRED MAKE_SQLSTATE('2','2','0','3','F')
#define IPV6_RECVERR 25
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PF_MAX 46
#define AssertState(condition) ((void)true)
#define SIGNAL_ARGS int postgres_signal_arg
#define XLogRecGetDataLen(decoder) ((decoder)->main_data_len)
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define SEEK_DATA 3
#define IP_RECVTOS 13
#define SO_PEERSEC 31
#define SOL_DECNET 261
#define ERRCODE_UNDEFINED_FUNCTION MAKE_SQLSTATE('4','2','8','8','3')
#define __FDS_BITS(set) ((set)->fds_bits)
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define ERRCODE_L_E_INVALID_SPECIFICATION MAKE_SQLSTATE('0','F','0','0','1')
#define XLogRecPtrIsInvalid(r) ((r) == InvalidXLogRecPtr)
#define __FLT16_MIN_10_EXP__ (-4)
#define IP_TOS 1
#define INNER_VAR 65000
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define EIDRM 43
#define PF_ROSE 11
#define ECOMM 70
#define __BITS_PER_LONG 64
#define InvalidAttrNumber 0
#define VARATT_IS_EXTERNAL_NON_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && !VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SET_VARTAG_1B_E(PTR,tag) (((varattrib_1b_e *) (PTR))->va_header = 0x01, ((varattrib_1b_e *) (PTR))->va_tag = (tag))
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define PF_INET6 10
#define VARATT_CAN_MAKE_SHORT(PTR) (VARATT_IS_4B_U(PTR) && (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT) <= VARATT_SHORT_MAX)
#define __USE_POSIX2 1
#define IP_TRANSPARENT 19
#define XLogRecGetData(decoder) ((decoder)->main_data)
#define RelationSetTargetBlock(relation,targblock) do { RelationOpenSmgr(relation); (relation)->rd_smgr->smgr_targblock = (targblock); } while (0)
#define PG_TEMP_FILE_PREFIX "pgsql_tmp"
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ERRCODE_INTERNAL_ERROR MAKE_SQLSTATE('X','X','0','0','0')
#define FRAMEOPTION_END_UNBOUNDED_PRECEDING 0x00040
#define RelationRelationId 1259
#define __INT_LEAST32_WIDTH__ 32
#define ERRCODE_INVALID_ROW_COUNT_IN_LIMIT_CLAUSE MAKE_SQLSTATE('2','2','0','1','W')
#define IPV6_AUTOFLOWLABEL 70
#define IPV6_2292PKTINFO 2
#define HAVE_EXECINFO_H 1
#define AF_IUCV PF_IUCV
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define TransactionIdGetDatum(X) ((Datum) (X))
#define __VERSION__ "11.3.0"
#define IP_PKTINFO 8
#define __UINT64_C(c) c ## UL
#define ACL_CONNECT (1<<11)
#define INT64CONST(x) (x ##L)
#define _SYS_CDEFS_H 1
#define INDEX_MAX_KEYS 32
#define isprint(c) __isctype((c), _ISprint)
#define SET_VARSIZE_4B_C(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2) | 0x02)
#define RENAME_WHITEOUT (1 << 2)
#define ERRCODE_INVALID_XML_PROCESSING_INSTRUCTION MAKE_SQLSTATE('2','2','0','0','T')
#define lfourth_int(l) lfirst_int(list_nth_cell(l, 3))
#define AT_EACCESS 0x200
#define EBFONT 59
#define RELPATH_H 
#define HAVE_SYS_SEM_H 1
#define LSN_FORMAT_ARGS(lsn) (AssertVariableIsOfTypeMacro((lsn), XLogRecPtr), (uint32) ((lsn) >> 32)), ((uint32) (lsn))
#define PG_PORT_H 
#define _STDC_PREDEF_H 1
#define AF_INET PF_INET
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define HEAP_DEFAULT_FILLFACTOR 100
#define INT_FAST8_WIDTH 8
#define __INT_WCHAR_T_H 
#define PGDLLEXPORT 
#define SET_VARSIZE_COMPRESSED(PTR,len) SET_VARSIZE_4B_C(PTR, len)
#define PARTITION_STRATEGY_HASH 'h'
#define copyObject(obj) ((typeof(obj)) copyObjectImpl(obj))
#define HAVE_GCC__SYNC_INT32_CAS 1
#define SOCK_DGRAM SOCK_DGRAM
#define _____fpos_t_defined 1
#define DN_RENAME 0x00000010
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define ERRCODE_INDEX_CORRUPTED MAKE_SQLSTATE('X','X','0','0','2')
#define ENOTSOCK 88
#define __ARM_FEATURE_FMA 1
#define O_RDWR 02
#define ERRCODE_INVALID_ESCAPE_SEQUENCE MAKE_SQLSTATE('2','2','0','2','5')
#define _SYS_SOCKET_H 1
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _T_PTRDIFF_ 
#define MSG_CONFIRM MSG_CONFIRM
#define XATTR_LIST_MAX 65536
#define PF_FILE PF_LOCAL
#define ENOTDIR 20
#define Anum_pg_attribute_attcollation 22
#define __INT_FAST16_WIDTH__ 64
#define Anum_pg_publication_pubowner 3
#define BACKUP_LABEL_OLD "backup_label.old"
#define CURSOR_OPT_BINARY 0x0001
#define SOL_NFC 280
#define PARTDEFS_H 
#define ERRCODE_NULL_VALUE_NO_INDICATOR_PARAMETER MAKE_SQLSTATE('2','2','0','0','2')
#define ERRCODE_INVALID_COLUMN_REFERENCE MAKE_SQLSTATE('4','2','P','1','0')
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define VARSIZE_EXTERNAL(PTR) (VARHDRSZ_EXTERNAL + VARTAG_SIZE(VARTAG_EXTERNAL(PTR)))
#define _POSIX_STREAM_MAX 8
#define XLR_CHECK_CONSISTENCY 0x02
#define __FLT32_MANT_DIG__ 24
#define INTALIGN(LEN) TYPEALIGN(ALIGNOF_INT, (LEN))
#define isupper_l(c,l) __isupper_l ((c), (l))
#define ERRCODE_INDETERMINATE_COLLATION MAKE_SQLSTATE('4','2','P','2','2')
#define __STDC_IEC_60559_BFP__ 201404L
#define ACL_EXECUTE (1<<7)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define __S_IFDIR 0040000
#define USE_POSIX_FADVISE 
#define __SIZE_T__ 
#define __stub_gtty 
#define pg_analyze_and_rewrite_fixedparams(a,b,c,d,e) pg_analyze_and_rewrite(a, b, c, d, e)
#define XLogArchivingActive() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode > ARCHIVE_MODE_OFF)
#define O_DIRECTORY __O_DIRECTORY
#define SYNC_METHOD_FDATASYNC 1
#define IPPORT_RESERVED 1024
#define SEEK_HOLE 4
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define ItemIdGetLength(itemId) ((itemId)->lp_len)
#define MSG_BATCH MSG_BATCH
#define CHECKPOINT_CAUSE_XLOG 0x0080
#define LC_PAPER __LC_PAPER
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define AI_ALL 0x0010
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define FFSYNC O_FSYNC
#define __wur __attribute_warn_unused_result__
#define __FLT16_DIG__ 3
#define ELOOP 40
#define Anum_pg_attribute_atttypmod 9
#define SYNC_METHOD_FSYNC_WRITETHROUGH 3
#define fcGetArgValue(fc,n) ((fc)->args[n].value)
#define VARATT_IS_EXTERNAL_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define _POSIX_RTSIG_MAX 8
#define PARSENODES_H 
#define __off64_t_defined 
#define ERRCODE_INVALID_ROLE_SPECIFICATION MAKE_SQLSTATE('0','P','0','0','0')
#define __F_GETSIG 11
#define IN_CLASSB_MAX 65536
#define TABLESPACE_MAP "tablespace_map"
#define _SYS_SIZE_T_H 
#define __PDP_ENDIAN 3412
#define DT_NOBEGIN PG_INT64_MIN
#define _ISOC95_SOURCE 1
#define FullTransactionIdEquals(a,b) ((a).value == (b).value)
#define EL2HLT 51
#define __ARM_64BIT_STATE 1
#define SIZEOF_OFF_T 8
#define DEFAULT_SYNC_METHOD PLATFORM_DEFAULT_SYNC_METHOD
#define MAXPGPATH 1024
#define __socklen_t_defined 
#define s6_addr __in6_u.__u6_addr8
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define PF_ROUTE PF_NETLINK
#define __have_pthread_attr_t 1
#define VARSIZE_ANY_EXHDR(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR)-VARHDRSZ_EXTERNAL : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR)-VARHDRSZ_SHORT : VARSIZE_4B(PTR)-VARHDRSZ))
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define IPV6_HOPLIMIT 52
#define RELCACHE_INIT_FILENAME "pg_internal.init"
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define Anum_pg_attribute_attidentity 17
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define _STRUCT_TIMESPEC 1
#define IP_MULTICAST_TTL 33
#define IPPROTO_UDP IPPROTO_UDP
#define STDC_HEADERS 1
#define Int16GetDatum(X) ((Datum) (X))
#define ERRCODE_INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','3')
#define GENBKI_H 
#define RWH_WRITE_LIFE_MEDIUM 3
#define Anum_pg_class_relreplident 26
#define UINT16_WIDTH 16
#define HAVE_LONG_INT_64 1
#define __INT16_MAX__ 0x7fff
#define EKEYREJECTED 129
#define _BSD_SIZE_T_ 
#define HAVE_GETADDRINFO 1
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define VARATT_IS_1B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x01)
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define AF_KEY PF_KEY
#define ERRCODE_IN_FAILED_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','2')
#define SOL_SOCKET 1
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define XidFromFullTransactionId(x) ((uint32) (x).value)
#define __FLT32_MIN_EXP__ (-125)
#define Anum_pg_index_indrelid 2
#define FLOAT4_FITS_IN_INT16(num) ((num) >= (float4) PG_INT16_MIN && (num) < -((float4) PG_INT16_MIN))
#define PGSIXBIT(ch) (((ch) - '0') & 0x3F)
#define _POSIX_QLIMIT 1
#define SOL_NETBEUI 267
#define LC_NUMERIC __LC_NUMERIC
#define __HAVE_DISTINCT_FLOAT128 0
#define NOTICE 18
#define IPV6_PMTUDISC_DO 2
#define IPV6_PKTINFO 50
#define VARATT_IS_4B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x00)
#define OidIsValid(objectId) ((bool) ((objectId) != InvalidOid))
#define __F_GETOWN_EX 16
#define FLOAT4_FITS_IN_INT32(num) ((num) >= (float4) PG_INT32_MIN && (num) < -((float4) PG_INT32_MIN))
#define PG_MAJORVERSION "14"
#define RelFileNodeBackendEquals(node1,node2) ((node1).node.relNode == (node2).node.relNode && (node1).node.dbNode == (node2).node.dbNode && (node1).backend == (node2).backend && (node1).node.spcNode == (node2).node.spcNode)
#define SIOCGSTAMP_OLD 0x8906
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define Anum_pg_class_relnamespace 3
#define REPLICA_IDENTITY_FULL 'f'
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define TEXTDOMAIN NULL
#define OUTER_VAR 65001
#define ERRCODE_FDW_INVALID_OPTION_INDEX MAKE_SQLSTATE('H','V','0','0','C')
#define dlist_reverse_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->prev ? (iter).end->prev : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->prev)
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define _SYS_TYPES_H 1
#define O_NOATIME __O_NOATIME
#define SO_RXQ_OVFL 40
#define AI_V4MAPPED 0x0008
#define RelationIsUsedAsCatalogTable(relation) ((relation)->rd_options && ((relation)->rd_rel->relkind == RELKIND_RELATION || (relation)->rd_rel->relkind == RELKIND_MATVIEW) ? ((StdRdOptions *) (relation)->rd_options)->user_catalog_table : false)
#define SOL_IRDA 266
#define __ARM_ARCH_PROFILE 65
#define _T_SIZE 
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define RelFileNodeBackendIsTemp(rnode) ((rnode).backend != InvalidBackendId)
#define USE_REPL_SNPRINTF 1
#define SO_ERROR 4
#define XLR_SPECIAL_REL_UPDATE 0x01
#define _POSIX_C_SOURCE 200809L
#define list_make2_int(x1,x2) list_make2_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2))
#define IP_MULTICAST_IF 32
#define AF_SNA PF_SNA
#define IP_DROP_MEMBERSHIP 36
#define InvalidOffsetNumber ((OffsetNumber) 0)
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define IPV6_LEAVE_GROUP 21
#define INT64_MODIFIER "l"
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define ERRCODE_INVALID_CURSOR_STATE MAKE_SQLSTATE('2','4','0','0','0')
#define ENAVAIL 119
#define vprintf pg_vprintf
#define SO_SNDBUFFORCE 32
#define __LDBL_REDIR(name,proto) name proto
#define HAVE_DECL_STRTOULL 1
#define OffsetToPointer(base,offset) ((void *)((char *) base + offset))
#define ECONNRESET 104
#define PG_DIAG_CONTEXT 'W'
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define foreach(cell,lst) for (ForEachState cell ##__state = {(lst), 0}; (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define lthird_node(type,l) castNode(type, lthird(l))
#define __blksize_t_defined 
#define _PATH_SERVICES "/etc/services"
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define HAVE_UNSETENV 1
#define HAVE_TERMIOS_H 1
#define PF_NETBEUI 13
#define CURSOR_OPT_FAST_PLAN 0x0100
#define __WCHAR_MAX __WCHAR_MAX__
#define __GLIBC_USE_ISOC2X 1
#define XLogRecGetPrev(decoder) ((decoder)->decoded_record->xl_prev)
#define _ANSI_STDDEF_H 
#define ERRCODE_TOO_MANY_CONNECTIONS MAKE_SQLSTATE('5','3','3','0','0')
#define IP_PMTUDISC_WANT 1
#define IP_XFRM_POLICY 17
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define FUNC_MAX_ARGS 100
#define __iovec_defined 1
#define FALLOC_FL_KEEP_SIZE 0x01
#define InvalidRelation ((Relation) NULL)
#define ERRCODE_NOT_NULL_VIOLATION MAKE_SQLSTATE('2','3','5','0','2')
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define ObjectIdGetDatum(X) ((Datum) (X))
#define IN_CLASSA_MAX 128
#define LOCK_WRITE 128
#define STATUS_ERROR (-1)
#define RelationOpenSmgr(relation) do { if ((relation)->rd_smgr == NULL) smgrsetowner(&((relation)->rd_smgr), smgropen((relation)->rd_node, (relation)->rd_backend)); } while (0)
#define VARHDRSZ_EXTERNAL offsetof(varattrib_1b_e, va_data)
#define NAMEDATALEN 64
#define _XOPEN_SOURCE_EXTENDED 1
#define BKI_BOOTSTRAP 
#define Assert(condition) ((void)true)
#define ItemPointerSetBlockNumber(pointer,blockNumber) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber) )
#define SO_DETACH_FILTER 27
#define parse_analyze_varparams_compat(a,b,c,d,e) parse_analyze_varparams(a, b, c, d)
#define EAI_AGAIN -3
#define O_SYNC 04010000
#define AF_MPLS PF_MPLS
#define INT8_C(c) c
#define PF_IB 27
#define INT8_H 
#define ENOMEDIUM 123
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define __UWORD_TYPE unsigned long int
#define F_OFD_SETLK 37
#define HAVE_RL_RESET_SCREEN_SIZE 1
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define HAVE_SYS_PRCTL_H 1
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define PVC_INCLUDE_AGGREGATES 0x0001
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define USECS_PER_HOUR INT64CONST(3600000000)
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __O_DSYNC 010000
#define SQL_STR_DOUBLE(ch,escape_backslash) ((ch) == '\'' || ((ch) == '\\' && (escape_backslash)))
#define ERRCODE_FDW_INVALID_HANDLE MAKE_SQLSTATE('H','V','0','0','B')
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __timer_t_defined 1
#define HAVE_STRUCT_TM_TM_ZONE 1
#define __WCLONE 0x80000000
#define FRAMEOPTION_EXCLUSION (FRAMEOPTION_EXCLUDE_CURRENT_ROW | FRAMEOPTION_EXCLUDE_GROUP | FRAMEOPTION_EXCLUDE_TIES)
#define ERRCODE_FDW_INVALID_COLUMN_NUMBER MAKE_SQLSTATE('H','V','0','0','8')
#define ERRCODE_INVALID_SCHEMA_DEFINITION MAKE_SQLSTATE('4','2','P','1','5')
#define FETCH_ALL LONG_MAX
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define ItemPointerGetOffsetNumberNoCheck(pointer) ( (pointer)->ip_posid )
#define AssertMacro(condition) ((void)true)
#define PGDLLIMPORT 
#define EROFS 30
#define SIOCSPGRP 0x8902
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define AttributeNumberIsValid(attributeNumber) ((bool) ((attributeNumber) != InvalidAttrNumber))
#define HAVE_SYNC_FILE_RANGE 1
#define HAVE_IPV6 1
#define SO_BSDCOMPAT 14
#define HAVE__BUILTIN_UNREACHABLE 1
#define IPV6_RTHDRDSTOPTS 55
#define INT32_C(c) c
#define Anum_pg_class_reltablespace 9
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define LOG_DESTINATION_EVENTLOG 4
#define F_DUPFD_CLOEXEC 1030
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __WCHAR_T__ 
#define HAVE_LDAP_H 1
#define __SIZEOF_SIZE_T__ 8
#define InvalidOid ((Oid) 0)
#define __glibc_objsize0(__o) __bos0 (__o)
#define CHECKPOINT_END_OF_RECOVERY 0x0002
#define PG_INT8_MAX (0x7F)
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define XLogHintBitIsNeeded() (DataChecksumsEnabled() || wal_log_hints)
#define NI_DGRAM 16
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define CATVERSION_H 
#define __unix 1
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define _BITS_PTHREADTYPES_COMMON_H 1
#define IPV6_TCLASS 67
#define pgoff_t off_t
#define RelationGetRelid(relation) ((relation)->rd_id)
#define __UINT_FAST16_TYPE__ long unsigned int
#define FirstBootstrapObjectId 12000
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define ERRCODE_UNDEFINED_SCHEMA MAKE_SQLSTATE('3','F','0','0','0')
#define ERRCODE_SYSTEM_ERROR MAKE_SQLSTATE('5','8','0','0','0')
#define SizeOfXLogRecordDataHeaderShort (sizeof(uint8) * 2)
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define VA_ARGS_NARGS_(_01,_02,_03,_04,_05,_06,_07,_08,_09,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,N,...) (N)
#define TupleDescSize(src) (offsetof(struct TupleDescData, attrs) + (src)->natts * sizeof(FormData_pg_attribute))
#define Anum_pg_attribute_attacl 23
#define FKCONSTR_MATCH_FULL 'f'
#define __PRAGMA_REDEFINE_EXTNAME 1
#define list_make5_oid(x1,x2,x3,x4,x5) list_make5_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3), list_make_oid_cell(x4), list_make_oid_cell(x5))
#define __ss_aligntype unsigned long int
#define ItemPointerIsValid(pointer) ((bool) (PointerIsValid(pointer) && ((pointer)->ip_posid != 0)))
#define Anum_pg_attribute_attmissingval 26
#define __FLT16_DECIMAL_DIG__ 5
#define _STRINGS_H 1
#define __F_SETOWN 8
#define _VA_LIST_DEFINED 
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define __BLKSIZE_T_TYPE __S32_TYPE
#define PF_ECONET 19
#define __INT_LEAST16_MAX__ 0x7fff
#define linitial(l) lfirst(list_nth_cell(l, 0))
#define RELFILENODE_H 
#define PG_PUBLICATION_H 
#define UINT64_WIDTH 64
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define EDEADLK 35
#define RELKIND_SEQUENCE 'S'
#define XLogRecHasBlockImage(decoder,block_id) ((decoder)->blocks[block_id].has_image)
#define ERRCODE_CANNOT_COERCE MAKE_SQLSTATE('4','2','8','4','6')
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define SmgrIsTemp(smgr) RelFileNodeBackendIsTemp((smgr)->smgr_rnode)
#define __SIG_ATOMIC_WIDTH__ 32
#define HAVE_UNIX_SOCKETS 1
#define ERRCODE_E_R_I_E_INVALID_SQLSTATE_RETURNED MAKE_SQLSTATE('3','9','0','0','1')
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define htole16(x) __uint16_identity (x)
#define ERRCODE_TRIGGERED_ACTION_EXCEPTION MAKE_SQLSTATE('0','9','0','0','0')
#define MAXNAMLEN NAME_MAX
#define Anum_pg_class_relispartition 27
#define DT_UNKNOWN DT_UNKNOWN
#define XLR_BLOCK_ID_DATA_LONG 254
#define ERRCODE_TOO_MANY_ARGUMENTS MAKE_SQLSTATE('5','4','0','2','3')
#define __UINT8_MAX__ 0xff
#define htole32(x) __uint32_identity (x)
#define VARLENA_EXTSIZE_MASK ((1U << VARLENA_EXTSIZE_BITS) - 1)
#define PG_INT8_MIN (-0x7F-1)
#define HAVE_RL_COMPLETION_MATCHES 1
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define F_WRLCK 1
#define MONTHS_PER_YEAR 12
#define FirstNormalTransactionId ((TransactionId) 3)
#define strerror pg_strerror
#define PRS2_NEW_VARNO 2
#define NI_NUMERICSERV 2
#define linux 1
#define SOL_DCCP 269
#define AI_IDN 0x0040
#define TIMESTAMP_NOBEGIN(j) do {(j) = DT_NOBEGIN;} while (0)
#define ntohl(x) __bswap_32 (x)
#define ntohs(x) __bswap_16 (x)
#define BITS_PER_BITMAPWORD 64
#define ERRCODE_DUPLICATE_FILE MAKE_SQLSTATE('5','8','P','0','2')
#define ____FILE_defined 1
#define HAVE_DECL_STRLCAT 0
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define PDP_ENDIAN __PDP_ENDIAN
#define htole64(x) __uint64_identity (x)
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define HEAPTUPLESIZE MAXALIGN(sizeof(HeapTupleData))
#define Anum_pg_attribute_attnotnull 14
#define F_SETLKW 7
#define O_LARGEFILE __O_LARGEFILE
#define ERRCODE_IDLE_IN_TRANSACTION_SESSION_TIMEOUT MAKE_SQLSTATE('2','5','P','0','3')
#define HAVE__BUILTIN_FRAME_ADDRESS 1
#define ERRCODE_E_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','4')
#define __FLT32_MIN_10_EXP__ (-37)
#define MCAST_MSFILTER 48
#define __GNUC_MINOR__ 3
#define ShareUpdateExclusiveLock 4
#define IndexRelationGetNumberOfKeyAttributes(relation) ((relation)->rd_index->indnkeyatts)
#define ERRCODE_UNIQUE_VIOLATION MAKE_SQLSTATE('2','3','5','0','5')
#define ERRCODE_NAME_TOO_LONG MAKE_SQLSTATE('4','2','6','2','2')
#define ERRCODE_TOO_MANY_JSON_OBJECT_MEMBERS MAKE_SQLSTATE('2','2','0','3','E')
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define HAVE_LANGINFO_H 1
#define XLOG_INCLUDE_ORIGIN 0x01
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define HAVE_BIO_GET_DATA 1
#define FKCONSTR_ACTION_SETDEFAULT 'd'
#define VARHDRSZ_COMPRESSED offsetof(varattrib_4b, va_compressed.va_data)
#define LC_TELEPHONE __LC_TELEPHONE
#define ENAMETOOLONG 36
#define ERRCODE_DEPENDENT_OBJECTS_STILL_EXIST MAKE_SQLSTATE('2','B','P','0','1')
#define ERRCODE_FDW_OUT_OF_MEMORY MAKE_SQLSTATE('H','V','0','0','1')
#define ACL_UPDATE (1<<2)
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DBL_HAS_QUIET_NAN__ 1
#define XLogRecGetRmid(decoder) ((decoder)->decoded_record->xl_rmid)
#define SET_VARSIZE_SHORT(PTR,len) SET_VARSIZE_1B(PTR, len)
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define TIMESTAMP_IS_NOBEGIN(j) ((j) == DT_NOBEGIN)
#define IPPROTO_MPLS IPPROTO_MPLS
#define AF_VSOCK PF_VSOCK
#define ProcessUtility_compat(a,b,c,d,e,f,g,h) ProcessUtility(a, b, c, d, e, f, g, h)
#define __f128(x) x ##f128
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define pg_bswap32(x) __builtin_bswap32(x)
#define __FLT16_MANT_DIG__ 11
#define ESOCKTNOSUPPORT 94
#define VARDATA_COMPRESSED_GET_EXTSIZE(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_tcinfo & VARLENA_EXTSIZE_MASK)
#define __INTPTR_TYPE__ long int
#define EWOULDBLOCK EAGAIN
#define HAVE_UUID_UUID_H 1
#define __SLONGWORD_TYPE long int
#define HeapTupleIsValid(tuple) PointerIsValid(tuple)
#define POSTGRES_H 
#define IP_RECVTTL 12
#define __pic__ 2
#define lfirst(lc) ((lc)->ptr_value)
#define Anum_pg_class_relallvisible 12
#define ItemPointerSet(pointer,blockNumber,offNum) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber), (pointer)->ip_posid = offNum )
#define MaxOffsetNumber ((OffsetNumber) (BLCKSZ / sizeof(ItemIdData)))
#define RELPERSISTENCE_UNLOGGED 'u'
#define __S_IFLNK 0120000
#define __ARM_ARCH_8A 1
#define ERRCODE_LOCK_FILE_EXISTS MAKE_SQLSTATE('F','0','0','0','1')
#define ERRCODE_LOCK_NOT_AVAILABLE MAKE_SQLSTATE('5','5','P','0','3')
#define HAVE_INT128 1
#define QTW_EXAMINE_RTES_AFTER 0x20
#define list_make4_oid(x1,x2,x3,x4) list_make4_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3), list_make_oid_cell(x4))
#define EDOTDOT 73
#define list_make_oid_cell(v) ((ListCell) {.oid_value = (v)})
#define JULIAN_MINYEAR (-4713)
#define PF_SMC 43
#define __USE_POSIX 1
#define PG_CRC32C_H 
#define PF_NFC 39
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define RelationIsValid(relation) PointerIsValid(relation)
#define HAVE_RANDOM 1
#define INT_LEAST16_WIDTH 16
#define BUFSIZ 8192
#define HAVE_SHM_OPEN 1
#define SO_PEEK_OFF 42
#define DatumGetCString(X) ((char *) DatumGetPointer(X))
#define __LDBL_REDIR2_DECL(name) 
#define castNode(_type_,nodeptr) ((_type_ *) (nodeptr))
#define __FLT_MAX_10_EXP__ 38
#define _WCHAR_T_DECLARED 
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define WNOWAIT 0x01000000
#define MultiXactIdGetDatum(X) ((Datum) (X))
#define REPLICA_IDENTITY_NOTHING 'n'
#define PF_XDP 44
#define AF_ALG PF_ALG
#define for_each_from(cell,lst,N) for (ForEachState cell ##__state = for_each_from_setup(lst, N); (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define AF_QIPCRTR PF_QIPCRTR
#define ERRCODE_NOT_AN_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','L')
#define _FCNTL_H 1
#define IPV6_ADDR_PREFERENCES 72
#define FRAMEOPTION_START_OFFSET_FOLLOWING 0x02000
#define XLR_MAX_BLOCK_ID 32
#define __LC_COLLATE 3
#define CTE_INLINE_H 
#define __S16_TYPE short int
#define HAVE_DECL_STRLCPY 0
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define ERRCODE_T_R_SERIALIZATION_FAILURE MAKE_SQLSTATE('4','0','0','0','1')
#define EPROTONOSUPPORT 93
#define IndexRelationId 2610
#define _BITS_STDINT_INTN_H 1
#define __TIMESIZE 64
#define INVERT_COMPARE_RESULT(var) ((var) = ((var) < 0) ? 1 : -(var))
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define ERRCODE_INVALID_TIME_ZONE_DISPLACEMENT_VALUE MAKE_SQLSTATE('2','2','0','0','9')
#define BKI_SCHEMA_MACRO 
#define IN_CLASSC_NET 0xffffff00
#define fprintf pg_fprintf
#define InvalidFullTransactionId FullTransactionIdFromEpochAndXid(0, InvalidTransactionId)
#define LONG_ALIGN_MASK (sizeof(long) - 1)
#define ERRCODE_FDW_SCHEMA_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','Q')
#define __FLT16_HAS_QUIET_NAN__ 1
#define IP_PMTUDISC_OMIT 5
#define ERRCODE_FDW_INVALID_DATA_TYPE_DESCRIPTORS MAKE_SQLSTATE('H','V','0','0','6')
#define __cookie_io_functions_t_defined 1
#define Anum_pg_class_reloftype 5
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define IN_LOOPBACKNET 127
#define VARDATA_1B(PTR) (((varattrib_1b *) (PTR))->va_data)
#define PG_VERSION_COMPAT_H 
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define IPV6_DONTFRAG 62
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define TRY_AGAIN 2
#define HAVE_OPENSSL_INIT_SSL 1
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define Abs(x) ((x) >= 0 ? (x) : -(x))
#define PublicationNameIndexId 6111
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define _POSIX_SEM_VALUE_MAX 32767
#define linitial_int(l) lfirst_int(list_nth_cell(l, 0))
#define AF_ATMPVC PF_ATMPVC
#define LC_CTYPE __LC_CTYPE
#define __UINT_LEAST32_TYPE__ unsigned int
#define SET_VARSIZE(PTR,len) SET_VARSIZE_4B(PTR, len)
#define _CTYPE_H 1
#define AF_ASH PF_ASH
#define FNDELAY O_NDELAY
#define IPPROTO_GRE IPPROTO_GRE
#define VARATT_EXTERNAL_IS_COMPRESSED(toast_pointer) (VARATT_EXTERNAL_GET_EXTSIZE(toast_pointer) < (toast_pointer).va_rawsize - VARHDRSZ)
#define DOUBLEALIGN(LEN) TYPEALIGN(ALIGNOF_DOUBLE, (LEN))
#define __LDBL_MIN_EXP__ (-16381)
#define VARDATA_4B(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_data)
#define VARTAG_EXTERNAL(PTR) VARTAG_1B_E(PTR)
#define HAVE_RL_FILENAME_QUOTE_CHARACTERS 1
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define lsecond_int(l) lfirst_int(list_nth_cell(l, 1))
#define __BIT_TYPES_DEFINED__ 1
#define IPV6_RECVPKTINFO 49
#define PG_FINALLY() } else _do_rethrow = true; { PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack
#define stdout stdout
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define MSG_RST MSG_RST
#define IP_OPTIONS 4
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define __struct_FILE_defined 1
#define lfirst_int(lc) ((lc)->int_value)
#define INTPTR_WIDTH __WORDSIZE
#define SpecTokenOffsetNumber 0xfffe
#define __S_ISVTX 01000
#define VARDATA_ANY(PTR) (VARATT_IS_1B(PTR) ? VARDATA_1B(PTR) : VARDATA_4B(PTR))
#define __FLT32X_MAX_10_EXP__ 308
#define INT32_WIDTH 32
#define ERRCODE_SQL_JSON_OBJECT_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','C')
#define palloc0fast(sz) ( MemSetTest(0, sz) ? MemoryContextAllocZeroAligned(CurrentMemoryContext, sz) : MemoryContextAllocZero(CurrentMemoryContext, sz) )
#define ESRCH 3
#define ____mbstate_t_defined 1
#define PG_UINT64_MAX UINT64CONST(0xFFFFFFFFFFFFFFFF)
#define CURSOR_OPT_INSENSITIVE 0x0008
#define ROWID_VAR 65003
#define O_RDONLY 00
#define SO_RCVBUFFORCE 33
#define ERRCODE_INVALID_ARGUMENT_FOR_POWER_FUNCTION MAKE_SQLSTATE('2','2','0','1','F')
#define ERRCODE_WARNING_DEPRECATED_FEATURE MAKE_SQLSTATE('0','1','P','0','1')
#define IP_PMTUDISC 10
#define ERRCODE_DUPLICATE_TABLE MAKE_SQLSTATE('4','2','P','0','7')
#define EMSGSIZE 90
#define __ASM_POSIX_TYPES_H 
#define Anum_pg_class_reltype 4
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define RWH_WRITE_LIFE_NONE 1
#define InvalidCommandId (~(CommandId)0)
#define SOL_CAIF 278
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define ERRCODE_OBJECT_NOT_IN_PREREQUISITE_STATE MAKE_SQLSTATE('5','5','0','0','0')
#define _SIZET_ 
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define _LP64 1
#define SOL_RAW 255
#define MAXALIGN(LEN) TYPEALIGN(MAXIMUM_ALIGNOF, (LEN))
#define __UINT8_C(c) c
#define CURSOR_OPT_ASENSITIVE 0x0010
#define dlist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, dlist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE IPPROTO_NONE
#define TIMESTAMP_NOT_FINITE(j) (TIMESTAMP_IS_NOBEGIN(j) || TIMESTAMP_IS_NOEND(j))
#define __S_IFSOCK 0140000
#define __stub_stty 
#define foreach_current_index(cell) (cell ##__state.i)
#define list_make3_oid(x1,x2,x3) list_make3_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3))
#define __ASM_GENERIC_SOCKIOS_H 
#define __UINT64_TYPE__ long unsigned int
#define HAVE_STRUCT_SOCKADDR_UN 1
#define EAI_ADDRFAMILY -9
#define IsA(nodeptr,_type_) (nodeTag(nodeptr) == T_ ##_type_)
#define __stub___compat_query_module 
#define FirstCommandId ((CommandId) 0)
#define __ARM_NEON 1
#define newNode(size,tag) ({ Node *_result; AssertMacro((size) >= sizeof(Node)); _result = (Node *) palloc0fast(size); _result->type = (tag); _result; })
#define FRAMEOPTION_START_UNBOUNDED_PRECEDING 0x00020
#define ALL_CONNECTION_FAILURE_ERRNOS EPIPE: case ECONNRESET: case ECONNABORTED: case EHOSTDOWN: case EHOSTUNREACH: case ENETDOWN: case ENETRESET: case ENETUNREACH
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define SO_MEMINFO 55
#define LOG_SERVER_ONLY 16
#define ERRCODE_SQL_JSON_ARRAY_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','9')
#define ERRCODE_DUPLICATE_COLUMN MAKE_SQLSTATE('4','2','7','0','1')
#define __stub___compat_bdflush 
#define PG_TEXTDOMAIN(domain) (domain "-" PG_MAJORVERSION)
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define O_TRUNC 01000
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define PG_INDEX_D_H 
#define OIDCHARS 10
#define HAVE_DECL_LLVMGETHOSTCPUFEATURES 1
#define IPPROTO_IGMP IPPROTO_IGMP
#define PG_RE_THROW() pg_re_throw()
#define Anum_pg_publication_pubdelete 7
#define PF_IUCV 32
#define __PID_T_TYPE __S32_TYPE
#define IPV6_UNICAST_HOPS 16
#define _STATBUF_ST_NSEC 
#define HAVE_POLL 1
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define ENOTCONN 107
#define IN_CLASSB_NET 0xffff0000
#define ERRCODE_UNDEFINED_CURSOR MAKE_SQLSTATE('3','4','0','0','0')
#define AccessShareLock 1
#define XLOG_BLCKSZ 8192
#define VARATT_SHORT_MAX 0x7F
#define BlockIdGetBlockNumber(blockId) ( AssertMacro(BlockIdIsValid(blockId)), ((((BlockNumber) (blockId)->bi_hi) << 16) | ((BlockNumber) (blockId)->bi_lo)) )
#define S_IFLNK __S_IFLNK
#define _POSIX_UIO_MAXIOV 16
#define P_tmpdir "/tmp"
#define __FLT64_HAS_DENORM__ 1
#define MSG_TRYHARD MSG_DONTROUTE
#define HAVE_DECL_LLVMCREATEPERFJITEVENTLISTENER 1
#define __HAVE_FLOAT32 1
#define __WORDSIZE_TIME64_COMPAT32 0
#define EPFNOSUPPORT 96
#define HAVE_STDBOOL_H 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define IPV6_ROUTER_ALERT 22
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define __DBL_DECIMAL_DIG__ 17
#define RELKIND_TOASTVALUE 't'
#define _POSIX_MQ_PRIO_MAX 32
#define EAI_SYSTEM -11
#define ERRCODE_S_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('2','F','0','0','3')
#define PRS2_OLD_VARNO 1
#define ERRCODE_CONFIGURATION_LIMIT_EXCEEDED MAKE_SQLSTATE('5','3','4','0','0')
#define LP_REDIRECT 2
#define HAVE_IFADDRS_H 1
#define ItemPointerSetInvalid(pointer) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), InvalidBlockNumber), (pointer)->ip_posid = InvalidOffsetNumber )
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define linitial_node(type,l) castNode(type, linitial(l))
#define TABLESPACE_MAP_OLD "tablespace_map.old"
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define SOCK_STREAM SOCK_STREAM
#define REGBUF_WILL_INIT (0x04 | 0x02)
#define __BIG_ENDIAN 4321
#define XLOG_DEFS_H 
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_BITSPERLONG_H 
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define strVal(v) (((Value *)(v))->val.str)
#define ERRCODE_FDW_INVALID_OPTION_NAME MAKE_SQLSTATE('H','V','0','0','D')
#define XLR_BLOCK_ID_TOPLEVEL_XID 252
#define ENOTBLK 15
#define ERRCODE_SNAPSHOT_TOO_OLD MAKE_SQLSTATE('7','2','0','0','0')
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define __INTMAX_WIDTH__ 64
#define __mode_t_defined 
#define F_OFD_SETLKW 38
#define __ORDER_BIG_ENDIAN__ 4321
#define PLATFORM_DEFAULT_SYNC_METHOD SYNC_METHOD_FDATASYNC
#define USE_PREFETCH 
#define IP_RECVFRAGSIZE 25
#define __UINT32_C(c) c ## U
#define AI_CANONIDN 0x0080
#define EISCONN 106
#define ENABLE_GSS 1
#define S_IFMT __S_IFMT
#define OPCLASS_ITEM_OPERATOR 1
#define forfour(cell1,list1,cell2,list2,cell3,list3,cell4,list4) for (ForFourState cell1 ##__state = {(list1), (list2), (list3), (list4), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), multi_for_advance_cell(cell4, cell1 ##__state, l4, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL && cell4 != NULL); cell1 ##__state.i++)
#define IP_NODEFRAG 22
#define __ATOMIC_RELEASE 3
#define __glibc_has_builtin(name) __has_builtin (name)
#define SMGR_H 
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define AF_UNIX PF_UNIX
#define IP_RECVRETOPTS IP_RETOPTS
#define IPPROTO_COMP IPPROTO_COMP
#define EUSERS 87
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define HAVE_GETOPT_H 1
#define _VA_LIST_T_H 
#define DN_MODIFY 0x00000002
#define ItemIdSetDead(itemId) ( (itemId)->lp_flags = LP_DEAD, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define DN_DELETE 0x00000008
#define ENETDOWN 100
#define __UINT_FAST32_TYPE__ long unsigned int
#define VARSIZE_1B(PTR) ((((varattrib_1b *) (PTR))->va_header >> 1) & 0x7F)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define lthird(l) lfirst(list_nth_cell(l, 2))
#define O_NOFOLLOW __O_NOFOLLOW
#define F_SEAL_FUTURE_WRITE 0x0010
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define UInt8GetDatum(X) ((Datum) (X))
#define AF_CAIF PF_CAIF
#define list_make2_oid(x1,x2) list_make2_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2))
#define ItemPointerGetBlockNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetBlockNumberNoCheck(pointer) )
#define HAVE_GETHOSTBYNAME_R 1
#define ispunct(c) __isctype((c), _ISpunct)
#define DatumGetUInt8(X) ((uint8) (X))
#define HAVE_DECL_STRTOLL 1
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define HAVE_STRCHRNUL 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define HAVE__BUILTIN_POPCOUNT 1
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define __FP_FAST_FMA 1
#define ERRCODE_FDW_ERROR MAKE_SQLSTATE('H','V','0','0','0')
#define F_SET_FILE_RW_HINT 1038
#define PG_BINARY 0
#define __va_list__ 
#define SO_SNDLOWAT 19
#define VARSIZE_4B(PTR) ((((varattrib_4b *) (PTR))->va_4byte.va_header >> 2) & 0x3FFFFFFF)
#define IPV6_PATHMTU 61
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define ERFKILL 132
#define fcSetArgNull(fc,n) fcSetArgExt(fc, n, (Datum) 0, true)
#define ERRCODE_S_E_INVALID_SPECIFICATION MAKE_SQLSTATE('3','B','0','0','1')
#define FIN_CRC32C(crc) ((crc) ^= 0xFFFFFFFF)
#define __INT32_TYPE__ int
#define DN_MULTISHOT 0x80000000
#define WARNING_CLIENT_ONLY 20
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MANT_DIG__ 24
#define FuncnameGetCandidates_compat(a,b,c,d,e,f,g) FuncnameGetCandidates(a, b, c, d, e, f, g)
#define RelationIsScannable(relation) ((relation)->rd_rel->relispopulated)
#define IPV6_PMTUDISC_WANT 1
#define PG_LIST_H 
#define PF_APPLETALK 5
#define Anum_pg_attribute_attstattarget 4
#define __SWORD_TYPE long int
#define be16toh(x) __bswap_16 (x)
#define EL3HLT 46
#define DECLARE_ARRAY_FOREIGN_KEY_OPT(cols,reftbl,refcols) extern int no_such_variable
#define _BITS_POSIX1_LIM_H 1
#define Anum_pg_class_relminmxid 30
#define SO_GET_FILTER SO_ATTACH_FILTER
#define forthree(cell1,list1,cell2,list2,cell3,list3) for (ForThreeState cell1 ##__state = {(list1), (list2), (list3), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL); cell1 ##__state.i++)
#define MCAST_BLOCK_SOURCE 43
#define _DIRENT_MATCHES_DIRENT64 1
#define IN_CLASSA_NET 0xff000000
#define FullTransactionIdFollows(a,b) ((a).value > (b).value)
#define PG_USED_FOR_ASSERTS_ONLY pg_attribute_unused()
#define unvolatize(underlying_type,expr) (StaticAssertExpr(__builtin_types_compatible_p(__typeof(expr), volatile underlying_type), "wrong cast"), (underlying_type) (expr))
#define StoreInvalidTransactionId(dest) (*(dest) = InvalidTransactionId)
#define VARATT_CONVERTED_SHORT_SIZE(PTR) (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT)
#define REPLICA_IDENTITY_INDEX 'i'
#define ERRCODE_OUT_OF_MEMORY MAKE_SQLSTATE('5','3','2','0','0')
#define SO_MAX_PACING_RATE 47
#define __va_arg_pack() __builtin_va_arg_pack ()
#define DTTOIF(dirtype) ((dirtype) << 12)
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define __FLT32X_HAS_QUIET_NAN__ 1
#define FAPPEND O_APPEND
#define ERRCODE_INVALID_CHARACTER_VALUE_FOR_CAST MAKE_SQLSTATE('2','2','0','1','8')
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define ERRCODE_INVALID_TABLE_DEFINITION MAKE_SQLSTATE('4','2','P','1','6')
#define FirstNormalFullTransactionId FullTransactionIdFromEpochAndXid(0, FirstNormalTransactionId)
#define ELIBBAD 80
#define USE_PAM 1
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define ERRCODE_INVALID_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','1','9')
#define ESTRPIPE 86
#define __glibc_clang_prereq(maj,min) 0
#define ERRCODE_STATEMENT_TOO_COMPLEX MAKE_SQLSTATE('5','4','0','0','1')
#define PF_INET 2
#define __SC_THREAD_STACK_MIN_VALUE 75
#define TIMESTAMP_IS_NOEND(j) ((j) == DT_NOEND)
#define ECONNREFUSED 111
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ATTRIBUTE_IDENTITY_BY_DEFAULT 'd'
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define atooid(x) ((Oid) strtoul((x), NULL, 10))
#define Anum_pg_publication_pubupdate 6
#define _RWLOCK_INTERNAL_H 
#define UINT_FAST8_WIDTH 8
#define __DBL_MAX_10_EXP__ 308
#define UINT16_MAX (65535)
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define IPV6_MINHOPCOUNT 73
#define SO_ZEROCOPY 60
#define PF_MPLS 28
#define __USE_XOPEN_EXTENDED 1
#define XLogIsNeeded() (wal_level >= WAL_LEVEL_REPLICA)
#define __INT16_C(c) c
#define ACL_CREATE_TEMP (1<<10)
#define PF_RXRPC 33
#define __ARM_ARCH_ISA_A64 1
#define MemSetLoop(start,val,len) do { long * _start = (long *) (start); long * _stop = (long *) ((char *) _start + (Size) (len)); while (_start < _stop) *_start++ = 0; } while (0)
#define TIMEZONE_GLOBAL timezone
#define pg_attribute_format_arg(a) __attribute__((format_arg(a)))
#define ERRCODE_WARNING_IMPLICIT_ZERO_BIT_PADDING MAKE_SQLSTATE('0','1','0','0','8')
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define EREMOTEIO 121
#define __STDC__ 1
#define strtoi64(str,endptr,base) ((int64) strtol(str, endptr, base))
#define ERRCODE_FDW_DYNAMIC_PARAMETER_VALUE_NEEDED MAKE_SQLSTATE('H','V','0','0','2')
#define _NETINET_IN_H 1
#define __FLT32X_DIG__ 15
#define ERRCODE_SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION MAKE_SQLSTATE('4','2','0','0','0')
#define IP_UNICAST_IF 50
#define AccessExclusiveLock 8
#define __LC_IDENTIFICATION 12
#define EADV 68
#define FLEXIBLE_ARRAY_MEMBER 
#define __kernel_old_uid_t __kernel_old_uid_t
#define VARATT_NOT_PAD_BYTE(PTR) (*((uint8 *) (PTR)) != 0)
#define PF_ATMPVC 8
#define CATALOG_VERSION_NO 202107181
#define _BITS_STAT_H 1
#define intVal(v) (((Value *)(v))->val.ival)
#define __ARM_PCS_AAPCS64 1
#define HAVE_SYMLINK 1
#define InvalidSubTransactionId ((SubTransactionId) 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define EAI_SERVICE -8
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define AF_X25 PF_X25
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define ERRCODE_FDW_INVALID_USE_OF_NULL_POINTER MAKE_SQLSTATE('H','V','0','0','9')
#define PG_O_DIRECT O_DIRECT
#define MaxBlockNumber ((BlockNumber) 0xFFFFFFFE)
#define FD_CLOEXEC 1
#define ERRCODE_OPERATOR_INTERVENTION MAKE_SQLSTATE('5','7','0','0','0')
#define __UINTPTR_TYPE__ long unsigned int
#define _STATBUF_ST_RDEV 
#define BKI_LOOKUP(catalog) 
#define SO_RCVTIMEO_NEW 66
#define SOL_AAL 265
#define SHUT_RD SHUT_RD
#define VARLENA_EXTSIZE_BITS 30
#define O_PATH __O_PATH
#define __BITS_SOCKET_H 
#define TIMESTAMP_END_JULIAN (109203528)
#define BLOCK_H 
#define ERRCODE_INVALID_INDICATOR_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','1','0')
#define list_make1_oid(x1) list_make1_impl(T_OidList, list_make_oid_cell(x1))
#define ELOG_H 
#define ERRCODE_INVALID_FUNCTION_DEFINITION MAKE_SQLSTATE('4','2','P','1','3')
#define PG_UINT8_MAX (0xFF)
#define ERRCODE_FDW_INVALID_DATA_TYPE MAKE_SQLSTATE('H','V','0','0','4')
#define __FP_FAST_FMAF32x 1
#define PVC_RECURSE_WINDOWFUNCS 0x0008
#define IPV6_MULTICAST_ALL 29
#define Anum_pg_attribute_atttypid 3
#define __USE_ATFILE 1
#define XLogRecBlockImageApply(decoder,block_id) ((decoder)->blocks[block_id].apply_image)
#define _POSIX_OPEN_MAX 20
#define HAVE_GCC__SYNC_CHAR_TAS 1
#define DATETIME_MIN_JULIAN (0)
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define ERRCODE_TRIM_ERROR MAKE_SQLSTATE('2','2','0','2','7')
#define FIELDNO_HEAPTUPLEDATA_DATA 3
#define PG_TEMP_FILES_DIR "pgsql_tmp"
#define __FLT128_DECIMAL_DIG__ 36
#define ERRCODE_SUBSTRING_ERROR MAKE_SQLSTATE('2','2','0','1','1')
#define ERRCODE_E_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('3','8','0','0','3')
#define ENOTUNIQ 76
#define _PWD_H 1
#define list_make1(x1) list_make1_impl(T_List, list_make_ptr_cell(x1))
#define list_make2(x1,x2) list_make2_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2))
#define list_make3(x1,x2,x3) list_make3_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3))
#define list_make4(x1,x2,x3,x4) list_make4_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3), list_make_ptr_cell(x4))
#define list_make5(x1,x2,x3,x4,x5) list_make5_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3), list_make_ptr_cell(x4), list_make_ptr_cell(x5))
#define __FLT_DECIMAL_DIG__ 9
#define Anum_pg_publication_pubinsert 5
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define ERRCODE_INVALID_SQL_JSON_SUBSCRIPT MAKE_SQLSTATE('2','2','0','3','3')
#define __FLT_MIN_10_EXP__ (-37)
#define SOL_ALG 279
#define SHUT_WR SHUT_WR
#define AT_EMPTY_PATH 0x1000
#define __INT_LEAST64_WIDTH__ 64
#define INT_LEAST16_MAX (32767)
#define Anum_pg_index_indisunique 5
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define _GNU_SOURCE 1
#define Natts_pg_index 20
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define PG_DIAG_SEVERITY_NONLOCALIZED 'V'
#define __POSIX_FADV_DONTNEED 4
#define NI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("NI_IDN_USE_STD3_ASCII_RULES is deprecated") 128
#define PG_DIAG_CONSTRAINT_NAME 'n'
#define PG_CLASS_H 
#define AttributeRelidNameIndexId 2658
#define DAYS_PER_YEAR 365.25
#define BACKUP_LABEL_FILE "backup_label"
#define IndexIndrelidIndexId 2678
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define __U32_TYPE unsigned int
#define HAVE_SYS_SELECT_H 1
#define REGBUF_STANDARD 0x08
#define _STDLIB_H 1
#define IP_RECVERR_RFC4884 26
#define _BITS_FLOATN_COMMON_H 
#define IP_UNBLOCK_SOURCE 37
#define Anum_pg_publication_oid 1
#define IPV6_RTHDR_TYPE_0 0
#define __LC_MONETARY 4
#define CppAsString(identifier) #identifier
#define __FLT32X_MAX_EXP__ 1024
#define ____sigset_t_defined 
#define O_NOCTTY 0400
#define LONGALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_LONG, (LEN))
#define AIO_PRIO_DELTA_MAX 20
#define NO_ADDRESS NO_DATA
#define _STDBOOL_H 
#define __ARM_SIZEOF_WCHAR_T 4
#define HAVE_STRING_H 1
#define __ATOMIC_ACQUIRE 2
#define RELKIND_HAS_STORAGE(relkind) ((relkind) == RELKIND_RELATION || (relkind) == RELKIND_INDEX || (relkind) == RELKIND_SEQUENCE || (relkind) == RELKIND_TOASTVALUE || (relkind) == RELKIND_MATVIEW)
#define GAI_WAIT 0
#define IP_DEFAULT_MULTICAST_TTL 1
#define ItemPointerCopy(fromPointer,toPointer) ( AssertMacro(PointerIsValid(toPointer)), AssertMacro(PointerIsValid(fromPointer)), *(toPointer) = *(fromPointer) )
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define VARATT_IS_EXTERNAL_ONDISK(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_ONDISK)
#define LOG_DESTINATION_SYSLOG 2
#define DECLARE_FOREIGN_KEY(cols,reftbl,refcols) extern int no_such_variable
#define __uid_t_defined 
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define EUNATCH 49
#define SOL_ATM 264
#define _SETJMP_H 1
#define INT_LEAST16_MIN (-32767-1)
#define USE_ICU 1
#define AF_RDS PF_RDS
#define __flexarr []
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define BlockIdCopy(toBlockId,fromBlockId) ( AssertMacro(PointerIsValid(toBlockId)), AssertMacro(PointerIsValid(fromBlockId)), (toBlockId)->bi_hi = (fromBlockId)->bi_hi, (toBlockId)->bi_lo = (fromBlockId)->bi_lo )
#define _BITS_SETJMP_H 1
#define PG_INT32_MAX (0x7FFFFFFF)
#define __stub_fchflags 
#define __INTMAX_C(c) c ## L
#define IS_DIR_SEP(ch) ((ch) == '/')
#define O_ACCMODE 0003
#define ERRCODE_NO_DATA MAKE_SQLSTATE('0','2','0','0','0')
#define ERRCODE_INVALID_XML_COMMENT MAKE_SQLSTATE('2','2','0','0','S')
#define __FSWORD_T_TYPE __SWORD_TYPE
#define AF_XDP PF_XDP
#define ACCEPT_TYPE_ARG3 socklen_t
#define FIOGETOWN 0x8903
#define ERRCODE_UNDEFINED_OBJECT MAKE_SQLSTATE('4','2','7','0','4')
#define EAFNOSUPPORT 97
#define ERRCODE_DATATYPE_MISMATCH MAKE_SQLSTATE('4','2','8','0','4')
#define ERRCODE_INVALID_ARGUMENT_FOR_LOG MAKE_SQLSTATE('2','2','0','1','E')
#define _STDDEF_H_ 
#define EEXIST 17
#define ACCEPT_TYPE_RETURN int
#define S_IFSOCK __S_IFSOCK
#define USE_LIBXML 1
#define IPV6_PMTUDISC_INTERFACE 4
#define PG_DIAG_MESSAGE_PRIMARY 'M'
#define Anum_pg_attribute_attinhcount 21
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define DT_WHT DT_WHT
#define Anum_pg_class_relrewrite 28
#define INT16_C(c) c
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define NUM_ATOMICS_SEMAPHORES 64
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define EXIT_FAILURE 1
#define ENOEXEC 8
#define INT8_MAX (127)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define ERRCODE_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','1')
#define FRAMEOPTION_BETWEEN 0x00010
#define MQ_PRIO_MAX 32768
#define BKPIMAGE_HAS_HOLE 0x01
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define vsnprintf pg_vsnprintf
#define ERRCODE_TOO_MANY_ROWS MAKE_SQLSTATE('P','0','0','0','3')
#define LC_ALL __LC_ALL
#define _XOPEN_SOURCE 700
#define UINT_LEAST32_WIDTH 32
#define EILSEQ 84
#define ERRCODE_INVALID_TRANSACTION_INITIATION MAKE_SQLSTATE('0','B','0','0','0')
#define fcSetArg(fc,n,value) fcSetArgExt(fc, n, value, false)
#define ESPIPE 29
#define _POSIX_TTY_NAME_MAX 9
#define __USE_LARGEFILE 1
#define __PTRDIFF_TYPE__ long int
#define __OFF_T_MATCHES_OFF64_T 1
#define iscntrl(c) __isctype((c), _IScntrl)
#define SOL_PPPOL2TP 273
#define list_make5_int(x1,x2,x3,x4,x5) list_make5_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3), list_make_int_cell(x4), list_make_int_cell(x5))
#define RelationCreateStorage_compat(a,b,c) RelationCreateStorage(a, b)
#define AssertTransactionIdInAllowableRange(xid) ((void)true)
#define OPEN_DATASYNC_FLAG O_DSYNC
#define __WCHAR_MAX__ 0xffffffffU
#define AF_APPLETALK PF_APPLETALK
#define XLR_INFO_MASK 0x0F
#define AF_IB PF_IB
#define ERRCODE_ARRAY_ELEMENT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define SO_NETNS_COOKIE 71
#define INT16_MAX (32767)
#define InvalidXLogRecPtr 0
#define IPV6_NEXTHOP 9
#define relpathbackend(rnode,backend,forknum) GetRelationPath((rnode).dbNode, (rnode).spcNode, (rnode).relNode, backend, forknum)
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define AF_MCTP PF_MCTP
#define HAVE_PG_ATTRIBUTE_NORETURN 1
#define __S_IREAD 0400
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define RelationRelation_Rowtype_Id 83
#define Anum_pg_index_indexrelid 1
#define RMGR_H 
#define FRAMEOPTION_EXCLUDE_CURRENT_ROW 0x08000
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define XLOGINSERT_H 
#define F_GETOWN_EX __F_GETOWN_EX
#define ERRCODE_FOREIGN_KEY_VIOLATION MAKE_SQLSTATE('2','3','5','0','3')
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define BKPBLOCK_FORK_MASK 0x0F
#define WRITEBACK_MAX_PENDING_FLUSHES 256
#define PACKAGE_STRING "PostgreSQL 14.5"
#define _IOFBF 0
#define ERRCODE_DUPLICATE_DATABASE MAKE_SQLSTATE('4','2','P','0','4')
#define BKI_ROWTYPE_OID(oid,oidmacro) 
#define __FLT_EVAL_METHOD__ 0
#define ERRCODE_DATABASE_DROPPED MAKE_SQLSTATE('5','7','P','0','4')
#define pg_prevent_errno_in_scope() int __errno_location pg_attribute_unused()
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define ERRCODE_INVALID_SCHEMA_NAME MAKE_SQLSTATE('3','F','0','0','0')
#define ERRCODE_INDICATOR_OVERFLOW MAKE_SQLSTATE('2','2','0','2','2')
#define SO_SELECT_ERR_QUEUE 45
#define __FLT64_DECIMAL_DIG__ 17
#define VARATT_IS_1B_E(PTR) ((((varattrib_1b *) (PTR))->va_header) == 0x01)
#define F_GETPIPE_SZ 1032
#define __FLT128_HAS_QUIET_NAN__ 1
#define lengthof(array) (sizeof (array) / sizeof ((array)[0]))
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define SLIST_STATIC_INIT(name) {{NULL}}
#define ObjectAddressSet(addr,class_id,object_id) ObjectAddressSubSet(addr, class_id, object_id, 0)
#define AI_NUMERICSERV 0x0400
#define ItemPointerSetOffsetNumber(pointer,offsetNumber) ( AssertMacro(PointerIsValid(pointer)), (pointer)->ip_posid = (offsetNumber) )
#define FNONBLOCK O_NONBLOCK
#define XATTR_SIZE_MAX 65536
#define HAVE_POLL_H 1
#define MAX_TIMESTAMP_PRECISION 6
#define CharGetDatum(X) ((Datum) (X))
#define HAVE_LIBREADLINE 1
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define QTW_EXAMINE_RTES_BEFORE 0x10
#define VA_ARGS_NARGS(...) VA_ARGS_NARGS_(__VA_ARGS__, 63,62,61,60, 59,58,57,56,55,54,53,52,51,50, 49,48,47,46,45,44,43,42,41,40, 39,38,37,36,35,34,33,32,31,30, 29,28,27,26,25,24,23,22,21,20, 19,18,17,16,15,14,13,12,11,10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#define EOWNERDEAD 130
#define REWRITEMANIP_H 
#define PVC_RECURSE_PLACEHOLDERS 0x0020
#define NODEFUNCS_H 
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define HAVE_PTHREAD 1
#define SHUT_RDWR SHUT_RDWR
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define INT16_MIN (-32767-1)
#define SIZEOF_BOOL 1
#define HAVE_ASN1_STRING_GET0_DATA 1
#define __FINITE_MATH_ONLY__ 0
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define ERRCODE_E_R_I_E_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('3','9','0','0','4')
#define ERRCODE_INVALID_NAME MAKE_SQLSTATE('4','2','6','0','2')
#define TransactionIdStore(xid,dest) (*(dest) = (xid))
#define EBADE 52
#define EBADF 9
#define FALLOC_FL_ZERO_RANGE 0x10
#define EBADR 53
#define stats_compat(a,b,c,d,e) stats(a, b, c, d, e)
#define __pid_t_defined 
#define EL2NSYNC 45
#define ERANGE 34
#define ECANCELED 125
#define pg_attribute_hot __attribute__((hot))
#define SCM_SRCRT IPV6_RXSRCRT
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _THREAD_MUTEX_INTERNAL_H 1
#define __LDBL_REDIR1(name,proto,alias) name proto
#define MSG_MORE MSG_MORE
#define ERRCODE_EXTERNAL_ROUTINE_EXCEPTION MAKE_SQLSTATE('3','8','0','0','0')
#define __size_t 
#define NGROUPS_MAX 65536
#define RelationGetNumberOfAttributes(relation) ((relation)->rd_rel->relnatts)
#define INT_FAST8_MAX (127)
#define UNIX_EPOCH_JDATE 2440588
#define ETXTBSY 26
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define RelationGetTargetPageFreeSpace(relation,defaultff) (BLCKSZ * (100 - RelationGetFillFactor(relation, defaultff)) / 100)
#define INDOPTION_NULLS_FIRST 0x0002
#define EAI_INPROGRESS -100
#define MSG_PEEK MSG_PEEK
#define strtou64(str,endptr,base) ((uint64) strtoul(str, endptr, base))
#define EAI_CANCELED -101
#define htobe16(x) __bswap_16 (x)
#define ERRCODE_INVALID_FOREIGN_KEY MAKE_SQLSTATE('4','2','8','3','0')
#define __SHRT_MAX__ 0x7fff
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define USE_SYSTEMD 1
#define __ARM_FEATURE_IDIV 1
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define __FLT64X_MAX_10_EXP__ 4932
#define XLogArchivingAlways() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode == ARCHIVE_MODE_ALWAYS)
#define ERRCODE_INDETERMINATE_DATATYPE MAKE_SQLSTATE('4','2','P','1','8')
#define __clockid_t_defined 1
#define list_make4_int(x1,x2,x3,x4) list_make4_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3), list_make_int_cell(x4))
#define BACKENDID_H 
#define ACL_NO_RIGHTS 0
#define __LDBL_IS_IEC_60559__ 2
#define SO_RCVTIMEO_OLD 20
#define __CHAR32_TYPE__ unsigned int
#define IPV6_HDRINCL 36
#define NSS_BUFLEN_PASSWD 1024
#define ERRCODE_TRANSACTION_RESOLUTION_UNKNOWN MAKE_SQLSTATE('0','8','0','0','7')
#define HAVE_DECL_PWRITEV 1
#define __LITTLE_ENDIAN 1234
#define INDEX_VAR 65002
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define DECLARE_UNIQUE_INDEX_PKEY(name,oid,decl) extern int no_such_variable
#define ItemIdMarkDead(itemId) ( (itemId)->lp_flags = LP_DEAD )
#define htobe64(x) __bswap_64 (x)
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define UINTPTR_WIDTH __WORDSIZE
#define ERRCODE_T_R_DEADLOCK_DETECTED MAKE_SQLSTATE('4','0','P','0','1')
#define INT_FAST8_MIN (-128)
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define WCHAR_MIN __WCHAR_MIN
#define ERRCODE_E_R_I_E_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','1')
#define ERRCODE_PLPGSQL_ERROR MAKE_SQLSTATE('P','0','0','0','0')
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define PG_USE_STDBOOL 1
#define XLOGREADER_H 
#define floatVal(v) atof(((Value *)(v))->val.str)
#define __UID_T_TYPE __U32_TYPE
#define EDQUOT 122
#define fcGetArgNull(fc,n) ((fc)->args[n].isnull)
#define __AARCH64_CMODEL_SMALL__ 1
#define HAVE_GETIFADDRS 1
#define _POSIX_AIO_MAX 1
#define OffsetNumberIsValid(offsetNumber) ((bool) ((offsetNumber != InvalidOffsetNumber) && (offsetNumber <= MaxOffsetNumber)))
#define OPTIMIZER_H 
#define INT_FAST32_WIDTH __WORDSIZE
#define SO_WIFI_STATUS 41
#define HAVE_LDAP_INITIALIZE 1
#define NETDB_SUCCESS 0
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define __LDBL_MAX_EXP__ 16384
#define Anum_pg_index_indisreplident 14
#define PRIMNODES_H 
#define ENOTEMPTY 39
#define is_absolute_path(filename) ( IS_DIR_SEP((filename)[0]) )
#define UINT_FAST16_MAX (18446744073709551615UL)
#define ERRCODE_INTERVAL_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','1','5')
#define __WINT_MIN__ 0U
#define printf(...) pg_printf(__VA_ARGS__)
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define SECS_PER_MINUTE 60
#define __linux__ 1
#define F_SEAL_WRITE 0x0008
#define GetCTETargetList(cte) (AssertMacro(IsA((cte)->ctequery, Query)), ((Query *) (cte)->ctequery)->commandType == CMD_SELECT ? ((Query *) (cte)->ctequery)->targetList : ((Query *) (cte)->ctequery)->returningList)
#define ERRCODE_AMBIGUOUS_FUNCTION MAKE_SQLSTATE('4','2','7','2','5')
#define AF_NETROM PF_NETROM
#define TransactionIdAdvance(dest) do { (dest)++; if ((dest) < FirstNormalTransactionId) (dest) = FirstNormalTransactionId; } while(0)
#define SO_BPF_EXTENSIONS 48
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define standard_ProcessUtility_compat(a,b,c,d,e,f,g,h) standard_ProcessUtility(a, b, c, d, e, f, g, h)
#define htonl(x) __bswap_32 (x)
#define HAVE_GCC__SYNC_INT32_TAS 1
#define htons(x) __bswap_16 (x)
#define IPV6_MTU_DISCOVER 23
#define EAI_NONAME -2
#define _POSIX_AIO_LISTIO_MAX 2
#define QTW_IGNORE_CTE_SUBQUERIES 0x02
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define SO_REUSEADDR 2
#define __WCHAR_MIN__ 0U
#define VARATT_IS_SHORT(PTR) VARATT_IS_1B(PTR)
#define PG_UINT16_MAX (0xFFFF)
#define HAVE_LIBCRYPTO 1
#define CppConcat(x,y) x ##y
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define SET_VARSIZE_1B(PTR,len) (((varattrib_1b *) (PTR))->va_header = (((uint8) (len)) << 1) | 0x01)
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define F_RDLCK 0
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define _POSIX_THREAD_THREADS_MAX 64
#define O_APPEND 02000
#define __osockaddr_defined 1
#define _FORTIFY_SOURCE 2
#define Anum_pg_attribute_attrelid 1
#define __INT8_MAX__ 0x7f
#define DEF_PGPORT 5432
#define PG_DIAG_SOURCE_FUNCTION 'R'
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _POSIX_LINK_MAX 8
#define PointerIsValid(pointer) ((const void*)(pointer) != NULL)
#define VARTAG_IS_EXPANDED(tag) (((tag) & ~1) == VARTAG_EXPANDED_RO)
#define AF_TIPC PF_TIPC
#define pgproc_statusflags_compat(pgproc) ((pgproc)->statusFlags)
#define DO_AGGSPLIT_SKIPFINAL(as) (((as) & AGGSPLITOP_SKIPFINAL) != 0)
#define __UINT8_TYPE__ unsigned char
#define Anum_pg_attribute_attgenerated 18
#define isblank(c) __isctype((c), _ISblank)
#define _DEFAULT_SOURCE 1
#define _LINUX_POSIX_TYPES_H 
#define SO_MARK 36
#define ACL_CREATE (1<<9)
#define PointerGetDatum(X) ((Datum) (X))
#define __USE_EXTERN_INLINES 1
#define ERRCODE_DIVISION_BY_ZERO MAKE_SQLSTATE('2','2','0','1','2')
#define HAVE_DECL_RTLD_NOW 1
#define PinTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) IncrTupleDescRefCount(tupdesc); } while (0)
#define OBJECTADDRESS_H 
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define __LOCK_ALIGNMENT 
#define _POSIX_CHILD_MAX 25
#define ETIMEDOUT 110
#define HAVE__BUILTIN_TYPES_COMPATIBLE_P 1
#define ERRCODE_INVALID_AUTHORIZATION_SPECIFICATION MAKE_SQLSTATE('2','8','0','0','0')
#define __USE_GNU_GETTEXT 1
#define BITS_PER_BYTE 8
#define PG_INT64_MAX INT64CONST(0x7FFFFFFFFFFFFFFF)
#define XLR_NORMAL_MAX_BLOCK_ID 4
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define ENODATA 61
#define IPV6_AUTHHDR 10
#define ERRCODE_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('2','2','0','0','4')
#define MAX_RANDOM_VALUE PG_INT32_MAX
#define DN_ACCESS 0x00000001
#define __END_DECLS 
#define FKCONSTR_ACTION_SETNULL 'n'
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define __CONCAT(x,y) x ## y
#define Anum_pg_class_relkind 17
#define IPV6_RECVERR_RFC4884 31
#define HAVE_COMPUTED_GOTO 1
#define SET_VARTAG_EXTERNAL(PTR,tag) SET_VARTAG_1B_E(PTR, tag)
#define SizeOfXLogRecord (offsetof(XLogRecord, xl_crc) + sizeof(pg_crc32c))
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_HOSTED__ 1
#define _ALLOCA_H 1
#define Anum_pg_index_indclass 17
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define _SYS_SELECT_H 1
#define IndexRelationGetNumberOfAttributes(relation) ((relation)->rd_index->indnatts)
#define ERRCODE_COLLATION_MISMATCH MAKE_SQLSTATE('4','2','P','2','1')
#define RelationNeedsWAL(relation) (RelationIsPermanent(relation) && (XLogIsNeeded() || (relation->rd_createSubid == InvalidSubTransactionId && relation->rd_firstRelfilenodeSubid == InvalidSubTransactionId)))
#define HAVE_STDINT_H 1
#define PF_ALG 38
#define Anum_pg_index_indisexclusion 7
#define NUM_SPINLOCK_SEMAPHORES 128
#define ERRCODE_INVALID_CATALOG_NAME MAKE_SQLSTATE('3','D','0','0','0')
#define SCOPE_DELIMITER '%'
#define __jmp_buf_tag_defined 1
#define __LC_TELEPHONE 10
#define ACL_SELECT (1<<1)
#define PG_DIAG_INTERNAL_POSITION 'p'
#define IP_IPSEC_POLICY 16
#define IPPROTO_PIM IPPROTO_PIM
#define HAVE_INTTYPES_H 1
#define __DBL_DIG__ 15
#define Anum_pg_class_relisshared 15
#define PG_PRINTF_ATTRIBUTE gnu_printf
#define ERRCODE_DISK_FULL MAKE_SQLSTATE('5','3','1','0','0')
#define EINTR 4
#define __f32x(x) x ##f32x
#define AF_INET6 PF_INET6
#define SOL_NETLINK 270
#define UInt16GetDatum(X) ((Datum) (X))
#define PATH_MAX 4096
#define _IO_EOF_SEEN 0x0010
#define DEBUG1 14
#define DEBUG2 13
#define DEBUG3 12
#define DEBUG4 11
#define DEBUG5 10
#define __SHRT_WIDTH__ 16
#define Anum_pg_class_relchecks 19
#define SO_LINGER 13
#define Anum_pg_class_relfilenode 8
#define PG_INT64_MIN (-INT64CONST(0x7FFFFFFFFFFFFFFF) - 1)
#define TMP_MAX 238328
#define ALIGNOF_BUFFER 32
#define AF_WANPIPE PF_WANPIPE
#define PF_UNIX PF_LOCAL
#define ERRCODE_INVALID_REGULAR_EXPRESSION MAKE_SQLSTATE('2','2','0','1','B')
#define __FLT32_MAX_EXP__ 128
#define FLOAT4_FITS_IN_INT64(num) ((num) >= (float4) PG_INT64_MIN && (num) < -((float4) PG_INT64_MIN))
#define ERRCODE_IDLE_SESSION_TIMEOUT MAKE_SQLSTATE('5','7','P','0','5')
#define TupleDescAttr(tupdesc,i) (&(tupdesc)->attrs[(i)])
#define SECS_PER_YEAR (36525 * 864)
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC PF_UNSPEC
#define _SS_SIZE 128
#define NI_NOFQDN 4
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define PF_CAIF 37
#define O_TMPFILE __O_TMPFILE
#define RELPERSISTENCE_TEMP 't'
#define forfive(cell1,list1,cell2,list2,cell3,list3,cell4,list4,cell5,list5) for (ForFiveState cell1 ##__state = {(list1), (list2), (list3), (list4), (list5), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), multi_for_advance_cell(cell4, cell1 ##__state, l4, i), multi_for_advance_cell(cell5, cell1 ##__state, l5, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL && cell4 != NULL && cell5 != NULL); cell1 ##__state.i++)
#define PACKAGE_NAME "PostgreSQL"
#define PF_ASH 18
#define JULIAN_MAXYEAR (5874898)
#define EAI_IDN_ENCODE -105
#define DECLARE_UNIQUE_INDEX(name,oid,decl) extern int no_such_variable
#define ENOPKG 65
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define RTSIG_MAX 32
#define EPERM 1
#define _STDDEF_H 
#define EAI_FAMILY -6
#define VARSIZE(PTR) VARSIZE_4B(PTR)
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define lthird_int(l) lfirst_int(list_nth_cell(l, 2))
#define AssertVariableIsOfType(varname,typename) StaticAssertStmt(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename))
#define PF_AX25 3
#define __SIZEOF_PTRDIFF_T__ 8
#define AF_BRIDGE PF_BRIDGE
#define _BITS_FLOATN_H 
#define __SIZEOF_LONG__ 8
#define _IONBF 2
#define AGGSPLITOP_SERIALIZE 0x04
#define SO_DETACH_BPF SO_DETACH_FILTER
#define NameGetDatum(X) CStringGetDatum(NameStr(*(X)))
#define ERRCODE_S_R_E_FUNCTION_EXECUTED_NO_RETURN_STATEMENT MAKE_SQLSTATE('2','F','0','0','5')
#define PF_NETLINK 16
#define __UINT16_C(c) c
#define MovedPartitionsOffsetNumber 0xfffd
#define HAVE_LIBSELINUX 1
#define IP_MULTICAST_LOOP 34
#define NI_NAMEREQD 8
#define SOL_X25 262
#define AF_CAN PF_CAN
#define O_WRONLY 01
#define Anum_pg_class_reloptions 32
#define U64FromFullTransactionId(x) ((x).value)
#define __gnu_linux__ 1
#define O_EXCL 0200
#define _ENDIAN_H 1
#define INT_FAST16_MAX (9223372036854775807L)
#define SOL_IP 0
#define IPPROTO_PUP IPPROTO_PUP
#define ERRCODE_INVALID_BINARY_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','3')
#define ACL_TRUNCATE (1<<4)
#define OFF_H 
#define list_make_int_cell(v) ((ListCell) {.int_value = (v)})
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define ERRCODE_NON_NUMERIC_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','6')
#define islower(c) __isctype((c), _ISlower)
#define SYNC_FILE_RANGE_WRITE 2
#define WARNING 19
#define ENOSR 63
#define __USE_ISOC11 1
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define __FLT16_MIN_EXP__ (-13)
#define ERRCODE_FDW_NO_SCHEMAS MAKE_SQLSTATE('H','V','0','0','P')
#define _BITS_STRING_FORTIFIED_H 1
#define __FLT64_MANT_DIG__ 53
#define IPPROTO_IDP IPPROTO_IDP
#define HAVE_APPEND_HISTORY 1
#define __FLT64X_MANT_DIG__ 113
#define RelationGetDescr(relation) ((relation)->rd_att)
#define IPPROTO_IPIP IPPROTO_IPIP
#define HAVE_RL_FILENAME_QUOTING_FUNCTION 1
#define ELIBACC 79
#define PARTITION_MAX_KEYS 32
#define _T_PTRDIFF 
#define pg_noinline __attribute__((noinline))
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define __glibc_has_extension(ext) 0
#define IPV6_2292PKTOPTIONS 6
#define pg_attribute_noreturn() __attribute__((noreturn))
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define L_ctermid 9
#define PG_BINARY_A "a"
#define FRAMEOPTION_START_OFFSET (FRAMEOPTION_START_OFFSET_PRECEDING | FRAMEOPTION_START_OFFSET_FOLLOWING)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define pg_attribute_no_sanitize_alignment() __attribute__((no_sanitize("alignment")))
#define InvalidBuffer 0
#define ERRCODE_MORE_THAN_ONE_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','4')
#define isupper(c) __isctype((c), _ISupper)
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define SSIZE_MAX LONG_MAX
#define FRAMEOPTION_START_OFFSET_PRECEDING 0x00800
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ELNRNG 48
#define EAI_FAIL -4
#define DatumGetInt64(X) ((int64) (X))
#define AF_ROUTE PF_ROUTE
#define ERRCODE_SEQUENCE_GENERATOR_LIMIT_EXCEEDED MAKE_SQLSTATE('2','2','0','0','H')
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define _POSIX_HOST_NAME_MAX 255
#define Anum_pg_index_indisvalid 10
#define ACL_DELETE (1<<3)
#define RelationIsSecurityView(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options ? ((ViewOptions *) (relation)->rd_options)->security_barrier : false)
#define __USE_ISOC95 1
#define __USE_ISOC99 1
#define ERRCODE_DUPLICATE_JSON_OBJECT_KEY_VALUE MAKE_SQLSTATE('2','2','0','3','0')
#define O_FSYNC O_SYNC
#define ERRCODE_INVALID_ESCAPE_OCTET MAKE_SQLSTATE('2','2','0','0','D')
#define _POSIX_SEM_NSEMS_MAX 256
#define MSG_DONTROUTE MSG_DONTROUTE
#define HAVE_WORKING_LINK 1
#define relpathperm(rnode,forknum) relpathbackend(rnode, InvalidBackendId, forknum)
#define __FLT16_MAX_10_EXP__ 4
#define __GNUC_STDC_INLINE__ 1
#define __WCHAR_TYPE__ unsigned int
#define HAVE__BUILTIN_OP_OVERFLOW 1
#define Int32GetDatum(X) ((Datum) (X))
#define Anum_pg_class_relam 7
#define Anum_pg_attribute_attname 2
#define HAVE_FSEEKO 1
#define _STDIO_H 1
#define list_nth_node(type,list,n) castNode(type, list_nth(list, n))
#define ItemIdIsUsed(itemId) ((itemId)->lp_flags != LP_UNUSED)
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define C_H 
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define REGBUF_KEEP_DATA 0x10
#define _BITS_STDINT_UINTN_H 1
#define AttributeRelidNumIndexId 2659
#define QTW_IGNORE_RANGE_TABLE 0x08
#define ERRCODE_AMBIGUOUS_PARAMETER MAKE_SQLSTATE('4','2','P','0','8')
#define getObjectIdentity_compat(a,b) getObjectIdentity(a, b)
#define __DBL_HAS_INFINITY__ 1
#define dummyret void
#define Anum_pg_class_relhasindex 14
#define IPV6_PMTUDISC_OMIT 5
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define Anum_pg_class_reltoastrelid 13
#define MSG_FASTOPEN MSG_FASTOPEN
#define PF_NETROM 6
#define __USE_XOPEN 1
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define isspace(c) __isctype((c), _ISspace)
#define stdin stdin
#define RelationIsAccessibleInLogicalDecoding(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && (IsCatalogRelation(relation) || RelationIsUsedAsCatalogTable(relation)))
#define HAVE_SYS_SIGNALFD_H 1
#define REPLICA_IDENTITY_DEFAULT 'd'
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define ERRCODE_INVALID_TABLESAMPLE_ARGUMENT MAKE_SQLSTATE('2','2','0','2','H')
#define HAVE_INT_TIMEZONE 1
#define HAVE_STRNLEN 1
#define TransactionIdRetreat(dest) do { (dest)--; } while ((dest) < FirstNormalTransactionId)
#define IPV6_ORIGDSTADDR 74
#define VARTAG_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_tag)
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define StaticAssertStmt(condition,errmessage) do { _Static_assert(condition, errmessage); } while(0)
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IPPROTO_IPV6 IPPROTO_IPV6
#define Trap(condition,errorType) ((void)true)
#define be32toh(x) __bswap_32 (x)
#define PVC_INCLUDE_WINDOWFUNCS 0x0004
#define PGUNSIXBIT(val) (((val) & 0x3F) + '0')
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define IPPROTO_SCTP IPPROTO_SCTP
#define SO_PEERNAME 28
#define AF_ECONET PF_ECONET
#define __INT_FAST16_TYPE__ long int
#define NI_IDN 32
#define _SIZE_T_DEFINED 
#define ERRCODE_BAD_COPY_FILE_FORMAT MAKE_SQLSTATE('2','2','P','0','4')
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define list_make1_int(x1) list_make1_impl(T_IntList, list_make_int_cell(x1))
#define RelationGetNamespace(relation) ((relation)->rd_rel->relnamespace)
#define lsecond_node(type,l) castNode(type, lsecond(l))
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define _WCHAR_T_DEFINED_ 
#define isalpha(c) __isctype((c), _ISalpha)
#define ECHILD 10
#define SetTuplestoreDestReceiverParams_compat(a,b,c,d,e,f) SetTuplestoreDestReceiverParams(a, b, c, d, e, f)
#define BufferIsInvalid(buffer) ((buffer) == InvalidBuffer)
#define UINT_LEAST8_MAX (255)
#define SOL_XDP 283
#define HAVE_LINUX_EIDRM_BUG 
#define END_TIMESTAMP INT64CONST(9223371331200000000)
#define ERRCODE_WARNING_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','1','0','0','C')
#define LC_NAME_MASK (1 << __LC_NAME)
#define ItemPointerIndicatesMovedPartitions(pointer) ( ItemPointerGetOffsetNumber(pointer) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(pointer) == MovedPartitionsBlockNumber )
#define _POSIX_RE_DUP_MAX 255
#define FirstNormalObjectId 16384
#define F_GET_RW_HINT 1035
#define __stub_setlogin 
#define TransactionIdIsValid(xid) ((xid) != InvalidTransactionId)
#define LC_MESSAGES __LC_MESSAGES
#define SetListCellPtr(a,b) ((a)->ptr_value = (b))
#define PF_MCTP 45
#define Anum_pg_class_relhasrules 20
#define MemSetTest(val,len) ( ((len) & LONG_ALIGN_MASK) == 0 && (len) <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0 && (val) == 0 )
#define Natts_pg_attribute 26
#define RelationGetParallelWorkers(relation,defaultpw) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->parallel_workers : (defaultpw))
#define true 1
#define ERRCODE_WARNING_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('0','1','0','0','4')
#define EAI_SOCKTYPE -7
#define __S32_TYPE int
#define IS_OUTER_JOIN(jointype) (((1 << (jointype)) & ((1 << JOIN_LEFT) | (1 << JOIN_FULL) | (1 << JOIN_RIGHT) | (1 << JOIN_ANTI))) != 0)
#define relpath(rnode,forknum) relpathbackend((rnode).node, (rnode).backend, forknum)
#define IP_PKTOPTIONS 9
#define SPLICE_F_MOVE 1
#define ERRCODE_DUPLICATE_PSTATEMENT MAKE_SQLSTATE('4','2','P','0','5')
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __FLT64_MIN_10_EXP__ (-307)
#define ERRCODE_FDW_TOO_MANY_HANDLES MAKE_SQLSTATE('H','V','0','1','4')
#define VARATT_IS_COMPRESSED(PTR) VARATT_IS_4B_C(PTR)
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __toascii_l(c,l) ((l), __toascii (c))
#define _POSIX_DELAYTIMER_MAX 32
#define CHECKPOINT_FORCE 0x0008
#define AGGSPLITOP_COMBINE 0x01
#define _LIBINTL_H 1
#define Anum_pg_class_oid 1
#define F_GET_FILE_RW_HINT 1037
#define __HAVE_FLOAT16 0
#define IPV6_ADDRFORM 1
#define EREMOTE 66
#define ERRCODE_STRING_DATA_LENGTH_MISMATCH MAKE_SQLSTATE('2','2','0','2','6')
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define UINT_LEAST16_WIDTH 16
#define __FLT128_MAX_EXP__ 16384
#define pg_hton16(x) pg_bswap16(x)
#define SIZEOF_DATUM SIZEOF_VOID_P
#define VARTAG_SIZE(tag) ((tag) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : VARTAG_IS_EXPANDED(tag) ? sizeof(varatt_expanded) : (tag) == VARTAG_ONDISK ? sizeof(varatt_external) : TrapMacro(true, "unrecognized TOAST vartag"))
#define ERRCODE_SQL_ROUTINE_EXCEPTION MAKE_SQLSTATE('2','F','0','0','0')
#define IPPROTO_RSVP IPPROTO_RSVP
#define HAVE_HISTORY_TRUNCATE_FILE 1
#define SO_BINDTODEVICE 25
#define F_ADD_SEALS 1033
#define _PTRDIFF_T_DECLARED 
#define _BITS_STDIO_H 1
#define IP_PMTUDISC_PROBE 3
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __glibc_objsize(__o) __bos (__o)
#define pg_hton32(x) pg_bswap32(x)
#define DatumBigEndianToNative(x) pg_bswap64(x)
#define FRAMEOPTION_END_OFFSET_FOLLOWING 0x04000
#define ESRMNT 69
#define BlockIdIsValid(blockId) ((bool) PointerIsValid(blockId))
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 0
#define IPPROTO_AH IPPROTO_AH
#define RowShareLock 2
#define TrapMacro(condition,errorType) (true)
#define INT64_WIDTH 64
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define Int64GetDatum(X) ((Datum) (X))
#define MIN_TIMESTAMP INT64CONST(-211813488000000000)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define isalnum(c) __isctype((c), _ISalnum)
#define __HAVE_FLOAT64 1
#define Anum_pg_publication_puballtables 4
#define NO_RECOVERY 3
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define pg_hton64(x) pg_bswap64(x)
#define ItemIdIsDead(itemId) ((itemId)->lp_flags == LP_DEAD)
#define ERRCODE_FDW_OPTION_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','J')
#define BITMAPSET_H 
#define PG_DIAG_COLUMN_NAME 'c'
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX (18446744073709551615UL)
#define _PTRDIFF_T 
#define HAVE_BACKTRACE_SYMBOLS 1
#define MSG_WAITFORONE MSG_WAITFORONE
#define USE_FLOAT8_BYVAL 1
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define PF_UNSPEC 0
#define UINT64_C(c) c ## UL
#define BKI_FORCE_NOT_NULL 
#define BoolGetDatum(X) ((Datum) ((X) ? 1 : 0))
#define DEFAULT_BACKEND_FLUSH_AFTER 0
#define PGWARNING 19
#define F_SETLEASE 1024
#define strerror_r pg_strerror_r
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define _GCC_WCHAR_T 
#define dngettext(domainname,msgid1,msgid2,n) dcngettext (domainname, msgid1, msgid2, n, LC_MESSAGES)
#define HAVE_BIO_METH_NEW 1
#define AlterTableStmtObjType_compat(a) ((a)->objtype)
#define S_IWUSR __S_IWRITE
#define getObjectTypeDescription_compat(a,b) getObjectTypeDescription(a, b)
#define PF_X25 9
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define SO_PASSSEC 34
#define SIOCATMARK 0x8905
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define F_SETPIPE_SZ 1031
#define NETDB_INTERNAL -1
#define __ARM_FP16_FORMAT_IEEE 1
#define CHECKPOINT_CAUSE_TIME 0x0100
#define __WTERMSIG(status) ((status) & 0x7f)
#define ERRCODE_DATETIME_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','8')
#define ERRCODE_HELD_CURSOR_REQUIRES_SAME_ISOLATION_LEVEL MAKE_SQLSTATE('2','5','0','0','8')
#define CURSOR_OPT_HOLD 0x0020
#define foreach_delete_current(lst,cell) (cell ##__state.i--, (List *) (cell ##__state.l = list_delete_cell(lst, cell)))
#define PG_FUNCNAME_MACRO __func__
#define UINT_LEAST16_MAX (65535)
#define RELKIND_VIEW 'v'
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define SIZEOF_VOID_P 8
#define PF_BRIDGE 7
#define IP_PMTUDISC_DONT 0
#define RelationIsLogicallyLogged(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && (relation)->rd_rel->relkind != RELKIND_FOREIGN_TABLE && !IsCatalogRelation(relation))
#define ReleaseTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) DecrTupleDescRefCount(tupdesc); } while (0)
#define HAVE_FUNCNAME__FUNC 1
#define FirstNormalUnloggedLSN ((XLogRecPtr) 1000)
#define __useconds_t_defined 
#define pg_nodiscard __attribute__((warn_unused_result))
#define DEFAULT_EVENT_SOURCE "PostgreSQL"
#define CURSOR_OPT_PARALLEL_OK 0x0800
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define INT8_MIN (-128)
#define FILE_POSSIBLY_DELETED(err) ((err) == ENOENT)
#define ItemPointerSetMovedPartitions(pointer) ItemPointerSet((pointer), MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define AssertVariableIsOfTypeMacro(varname,typename) (StaticAssertExpr(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename)))
#define WNOHANG 1
#define MAX_INTERVAL_PRECISION 6
#define DEF_PGPORT_STR "5432"
#define PF_IPX 4
#define ItemIdSetUnused(itemId) ( (itemId)->lp_flags = LP_UNUSED, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define HOST_NOT_FOUND 1
#define FRAMEOPTION_END_OFFSET (FRAMEOPTION_END_OFFSET_PRECEDING | FRAMEOPTION_END_OFFSET_FOLLOWING)
#define __PTRDIFF_T 
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define ERRCODE_UNDEFINED_TABLE MAKE_SQLSTATE('4','2','P','0','1')
#define ENOCSI 50
#define HAVE_LIBSSL 1
#define pg_attribute_unused() __attribute__((unused))
#define __HAVE_GENERIC_SELECTION 1
#define F_GETFD 1
#define _POSIX_CLOCKRES_MIN 20000000
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define F_GETFL 3
#define LC_MEASUREMENT __LC_MEASUREMENT
#define F_LOCK 1
#define ShareRowExclusiveLock 6
#define PG_DIAG_DATATYPE_NAME 'd'
#define S_IRWXG (S_IRWXU >> 3)
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define HAVE_STRINGS_H 1
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define BKPIMAGE_IS_COMPRESSED 0x02
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define FRAMEOPTION_GROUPS 0x00008
#define EADDRINUSE 98
#define _VA_LIST 
#define IPPROTO_MH IPPROTO_MH
#define IN_CLASSA_NSHIFT 24
#define MCAST_UNBLOCK_SOURCE 44
#define HAVE_X509_GET_SIGNATURE_NID 1
#define AttrOffsetGetAttrNumber(attributeOffset) ((AttrNumber) (1 + (attributeOffset)))
#define __O_PATH 010000000
#define isxdigit(c) __isctype((c), _ISxdigit)
#define INDOPTION_DESC 0x0001
#define RelationCloseSmgr(relation) do { if ((relation)->rd_smgr != NULL) { smgrclose((relation)->rd_smgr); Assert((relation)->rd_smgr == NULL); } } while (0)
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define BeginCopyFrom_compat(a,b,c,d,e,f,g,h) BeginCopyFrom(a, b, c, d, e, f, g, h)
#define StaticAssertExpr(condition,errmessage) ((void) ({ StaticAssertStmt(condition, errmessage); true; }))
#define __WCOREFLAG 0x80
#define HAVE_READLINE_READLINE_H 1
#define __O_DIRECTORY 040000
#define SYNC_METHOD_OPEN_DSYNC 4
#define __isascii_l(c,l) ((l), __isascii (c))
#define ERRCODE_DUPLICATE_SCHEMA MAKE_SQLSTATE('4','2','P','0','6')
#define IPV6_MULTICAST_IF 17
#define INT8_WIDTH 8
#define forboth(cell1,list1,cell2,list2) for (ForBothState cell1 ##__state = {(list1), (list2), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), (cell1 != NULL && cell2 != NULL); cell1 ##__state.i++)
#define TZNAME_GLOBAL tzname
#define __ldiv_t_defined 1
#define _POSIX_SYMLOOP_MAX 8
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define SET_VARSIZE_4B(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2))
#define LOCK_MAND 32
#define HAVE_DECL_RTLD_GLOBAL 1
#define __MODE_T_TYPE __U32_TYPE
#define F_SETLKW64 7
#define BUFFERALIGN(LEN) TYPEALIGN(ALIGNOF_BUFFER, (LEN))
#define Anum_pg_index_indexprs 19
#define ERRCODE_EXTERNAL_ROUTINE_INVOCATION_EXCEPTION MAKE_SQLSTATE('3','9','0','0','0')
#define INTPTR_MIN (-9223372036854775807L-1)
#define HAVE_HMAC_CTX_FREE 1
#define EISDIR 21
#define __nonnull(params) __attribute_nonnull__ (params)
#define _BITS_STRUCT_STAT_H 1
#define DatumGetPointer(X) ((Pointer) (X))
#define ERRCODE_INVALID_XML_CONTENT MAKE_SQLSTATE('2','2','0','0','N')
#define HAVE_STRUCT_OPTION 1
#define F_GETSIG __F_GETSIG
#define O_DSYNC __O_DSYNC
#define BufferIsLocal(buffer) ((buffer) < 0)
#define INT_LEAST8_MAX (127)
#define __aarch64__ 1
#define RelFileNodeEquals(node1,node2) ((node1).relNode == (node2).relNode && (node1).dbNode == (node2).dbNode && (node1).spcNode == (node2).spcNode)
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __CFLOAT64X _Complex _Float64x
#define __CFLOAT32X _Complex _Float32x
#define FLOAT8_FITS_IN_INT32(num) ((num) >= (float8) PG_INT32_MIN && (num) < -((float8) PG_INT32_MIN))
#define AF_KCM PF_KCM
#define IPPROTO_TP IPPROTO_TP
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define ngettext(msgid1,msgid2,n) dngettext (NULL, msgid1, msgid2, n)
#define JULIAN_MAXMONTH (6)
#define SO_PROTOCOL 38
#define ERRCODE_INVALID_GRANTOR MAKE_SQLSTATE('0','L','0','0','0')
#define ItemIdGetRedirect(itemId) ((itemId)->lp_off)
#define __FLT64X_DECIMAL_DIG__ 36
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define IP_BIND_ADDRESS_NO_PORT 24
#define ERRCODE_WARNING_PRIVILEGE_NOT_GRANTED MAKE_SQLSTATE('0','1','0','0','7')
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX (2147483647)
#define _FALLOC_H_ 
#define PG_INT64_TYPE long int
#define INT_FAST16_WIDTH __WORDSIZE
#define FLOAT8_FITS_IN_INT64(num) ((num) >= (float8) PG_INT64_MIN && (num) < -((float8) PG_INT64_MIN))
#define LOGIN_NAME_MAX 256
#define unconstify(underlying_type,expr) (StaticAssertExpr(__builtin_types_compatible_p(__typeof(expr), const underlying_type), "wrong cast"), (underlying_type) (expr))
#define UINT_LEAST64_WIDTH 64
#define __attribute_pure__ __attribute__ ((__pure__))
#define EDEADLOCK EDEADLK
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define PG_VERSION_NUM 140005
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define ERRCODE_FDW_UNABLE_TO_ESTABLISH_CONNECTION MAKE_SQLSTATE('H','V','0','0','N')
#define XLogRecGetTotalLen(decoder) ((decoder)->decoded_record->xl_tot_len)
#define ERRCODE_SYNTAX_ERROR MAKE_SQLSTATE('4','2','6','0','1')
#define HAVE_SYS_RESOURCE_H 1
#define __FLT64X_IS_IEC_60559__ 2
#define ERRCODE_IO_ERROR MAKE_SQLSTATE('5','8','0','3','0')
#define HAVE_RL_FILENAME_COMPLETION_FUNCTION 1
#define __ptr_t void *
#define IS_VALID_JULIAN(y,m,d) (((y) > JULIAN_MINYEAR || ((y) == JULIAN_MINYEAR && ((m) >= JULIAN_MINMONTH))) && ((y) < JULIAN_MAXYEAR || ((y) == JULIAN_MAXYEAR && ((m) < JULIAN_MAXMONTH))))
#define PG_DIAG_MESSAGE_DETAIL 'D'
#define _SIZE_T 
#define MAX_CANON 255
#define __LDBL_DECIMAL_DIG__ 36
#define INT_LEAST8_MIN (-128)
#define RelationIsPermanent(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_PERMANENT)
#define ItemIdIsRedirected(itemId) ((itemId)->lp_flags == LP_REDIRECT)
#define errno (*__errno_location ())
#define FKCONSTR_ACTION_RESTRICT 'r'
#define RangeTableEntryFromNSItem(a) ((a)->p_rte)
#define ERRCODE_CONNECTION_EXCEPTION MAKE_SQLSTATE('0','8','0','0','0')
#define gettext_noop(x) (x)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define CURSOR_OPT_CUSTOM_PLAN 0x0400
#define _PTRDIFF_T_ 
#define HAVE_STDIO_H 1
#define SO_KEEPALIVE 9
#define F_GET_SEALS 1034
#define ACCEPT_TYPE_ARG1 int
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define DT_NOEND PG_INT64_MAX
#define HAVE_SPECIALJOININFO_TYPEDEF 1
#define ERRCODE_BRANCH_TRANSACTION_ALREADY_ACTIVE MAKE_SQLSTATE('2','5','0','0','2')
#define INT_LEAST64_WIDTH 64
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define MEMSET_LOOP_LIMIT 1024
#define __GXX_ABI_VERSION 1016
#define XLOG_INCLUDE_XID 0x04
#define UINTMAX_C(c) c ## UL
#define __USE_XOPEN2K8 1
#define closesocket close
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define va_start(v,l) __builtin_va_start(v,l)
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define islower_l(c,l) __islower_l ((c), (l))
#define ERROR 21
#define st_mtime st_mtim.tv_sec
#define __STRING(x) #x
#define SO_OOBINLINE 10
#define REGBUF_NO_IMAGE 0x02
#define PANIC 23
#define AGGSPLITOP_DESERIALIZE 0x08
#define PF_WANPIPE 25
#define NI_NUMERICHOST 1
#define __F_GETOWN 9
#define F_OFD_GETLK 36
#define EAI_ALLDONE -103
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define pull_varnos_compat(a,b) pull_varnos(a, b)
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define CATALOG(name,oid,oidmacro) typedef struct CppConcat(FormData_,name)
#define __INO_T_TYPE __ULONGWORD_TYPE
#define ERRCODE_FDW_UNABLE_TO_CREATE_EXECUTION MAKE_SQLSTATE('H','V','0','0','L')
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __F_SETOWN_EX 15
#define F_ULOCK 0
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define __LC_ALL 6
#define ItemIdIsNormal(itemId) ((itemId)->lp_flags == LP_NORMAL)
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define __ssize_t_defined 
#define EBADFD 77
#define HAVE_LIBXSLT 1
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define RELCACHE_H 
#define gettext(msgid) dgettext (NULL, msgid)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define Anum_pg_class_relnatts 18
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define PF_TIPC 30
#define SIG_ATOMIC_MAX (2147483647)
#define RELKIND_FOREIGN_TABLE 'f'
#define HAVE_LIBLZ4 1
#define IPV6_MULTICAST_HOPS 18
#define Anum_pg_class_relhassubclass 22
#define ACL_TRIGGER (1<<6)
#define __nlink_t_defined 
#define ERRCODE_INVALID_TABLESAMPLE_REPEAT MAKE_SQLSTATE('2','2','0','2','G')
#define IPV6_TRANSPARENT 75
#define IndexRelidIndexId 2679
#define VARSIZE_SHORT(PTR) VARSIZE_1B(PTR)
#define pg_backend_random pg_strong_random
#define ERRCODE_WINDOWING_ERROR MAKE_SQLSTATE('4','2','P','2','0')
#define __LC_ADDRESS 9
#define AT_FDCWD -100
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define ERRCODE_INVALID_CURSOR_NAME MAKE_SQLSTATE('3','4','0','0','0')
#define ereport(elevel,...) ereport_domain(elevel, TEXTDOMAIN, __VA_ARGS__)
#define ERRCODE_INVALID_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','2','3')
#define INT32_MAX (2147483647)
#define __INT32_C(c) c
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define _PATH_PROTOCOLS "/etc/protocols"
#define __glibc_macro_warning1(message) _Pragma (#message)
#define HAVE_ATOMICS 1
#define __S_IFMT 0170000
#define __STDC_IEC_559_COMPLEX__ 1
#define AI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("AI_IDN_USE_STD3_ASCII_RULES is deprecated") 0x0200
#define NI_MAXHOST 1025
#define OPCLASS_ITEM_FUNCTION 2
#define PointerIsAligned(pointer,type) (((uintptr_t)(pointer) % (sizeof (type))) == 0)
#define DN_ATTRIB 0x00000020
#define HAVE_WRITEV 1
#define __FLT32_DECIMAL_DIG__ 9
#define QTW_DONT_COPY_QUERY 0x40
#define DOUBLEALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_DOUBLE, (LEN))
#define __O_DIRECT 0200000
#define __error_t_defined 1
#define __FLT128_DIG__ 33
#define __SCHAR_WIDTH__ 8
#define HAVE_SYS_EPOLL_H 1
#define HAVE_GETOPT 1
#define DAYS_PER_MONTH 30
#define slist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), (type *) slist_head_element_off(lhead, offsetof(type, membername)))
#define XLOG_H 
#define IP_ADD_MEMBERSHIP 35
#define ERRCODE_INVALID_ARGUMENT_FOR_NTH_VALUE MAKE_SQLSTATE('2','2','0','1','6')
#define __FLT32_MAX_10_EXP__ 38
#define DT_CHR DT_CHR
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define PG_PUBLICATION_D_H 
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define ENOKEY 126
#define __INT_FAST32_TYPE__ long int
#define __ORDER_PDP_ENDIAN__ 3412
#define bool _Bool
#define DEFAULT_CHECKPOINT_FLUSH_AFTER 32
#define RELTRIGGER_H 
#define HAVE_SYS_STAT_H 1
#define S_IWGRP (S_IWUSR >> 3)
#define __FLT64_IS_IEC_60559__ 2
#define PG_INT16_MAX (0x7FFF)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define F_OK 0
#define isgraph(c) __isctype((c), _ISgraph)
#define RelationHasCascadedCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option == VIEW_OPTION_CHECK_OPTION_CASCADED)
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define Anum_pg_attribute_attfdwoptions 25
#define ERRCODE_TOO_MANY_COLUMNS MAKE_SQLSTATE('5','4','0','1','1')
#define PG_VERSION "14.5 (Ubuntu 14.5-0ubuntu0.22.04.1)"
#define _POSIX_MAX_INPUT 255
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define ESHUTDOWN 108
#define HAVE_SYS_SHM_H 1
#define INT32_MIN (-2147483647-1)
#define SO_SNDTIMEO_NEW 67
#define Anum_pg_class_relhastriggers 21
#define Anum_pg_class_relpersistence 16
#define AssertPointerAlignment(ptr,bndr) ((void)true)
#define AssertArg(condition) ((void)true)
#define LC_COLLATE __LC_COLLATE
#define ETIME 62
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define ERRCODE_ARRAY_SUBSCRIPT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define BUF_H 
#define F_SETOWN __F_SETOWN
#define INT_FAST64_WIDTH 64
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define HAVE_STRTOF 1
#define __FLT64X_DIG__ 33
#define FRAMEOPTION_END_CURRENT_ROW 0x00400
#define HAVE_LIBLDAP 1
#define PGINVALID_SOCKET (-1)
#define __INT8_TYPE__ signed char
#define __AARCH64EL__ 1
#define F_SETLK64 6
#define HAVE__BUILTIN_CLZ 1
#define XLogRecHasAnyBlockRefs(decoder) ((decoder)->max_block_id >= 0)
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define USECS_PER_MINUTE INT64CONST(60000000)
#define __FLT32X_MIN_EXP__ (-1021)
#define __ELF__ 1
#define PACKAGE_VERSION "14.5"
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define InHotStandby (standbyState >= STANDBY_SNAPSHOT_PENDING)
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define ALIGNOF_INT 4
#define RowExclusiveLock 3
#define isdigit(c) __isctype((c), _ISdigit)
#define ERRCODE_WRONG_OBJECT_TYPE MAKE_SQLSTATE('4','2','8','0','9')
#define ELIBSCN 81
#define F_TLOCK 2
#define ERRCODE_GENERATED_ALWAYS MAKE_SQLSTATE('4','2','8','C','9')
#define BKPBLOCK_SAME_REL 0x80
#define F_GETLEASE 1025
#define MCXT_ALLOC_HUGE 0x01
#define __FLT_RADIX__ 2
#define SO_REUSEPORT 15
#define PG_INT16_MIN (-0x7FFF-1)
#define F_UNLCK 2
#define _BITS_TIME64_H 1
#define AI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("AI_IDN_ALLOW_UNASSIGNED is deprecated") 0x0100
#define PG_INT32_MIN (-0x7FFFFFFF-1)
#define ERRCODE_S_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','4')
#define HAVE_USELOCALE 1
#define __LC_MESSAGES 5
#define Natts_pg_publication 9
#define EAI_BADFLAGS -1
#define USE_UNNAMED_POSIX_SEMAPHORES 1
#define _POSIX_ARG_MAX 4096
#define SOL_RDS 276
#define __UINT_FAST64_TYPE__ long unsigned int
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define FKCONSTR_ACTION_CASCADE 'c'
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define RELSEG_SIZE 131072
#define MSG_TRUNC MSG_TRUNC
#define RegProcedureIsValid(p) OidIsValid(p)
#define F_TEST 3
#define VARATT_EXTERNAL_SET_SIZE_AND_COMPRESS_METHOD(toast_pointer,len,cm) do { Assert((cm) == TOAST_PGLZ_COMPRESSION_ID || (cm) == TOAST_LZ4_COMPRESSION_ID); ((toast_pointer).va_extinfo = (len) | ((uint32) (cm) << VARLENA_EXTSIZE_BITS)); } while (0)
#define Anum_pg_attribute_attislocal 20
#define __f32(x) x ##f32
#define N_ACL_RIGHTS 12
#define SO_PREFER_BUSY_POLL 69
#define TYPEALIGN_DOWN(ALIGNVAL,LEN) (((uintptr_t) (LEN)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define HAVE__BUILTIN_CTZ 1
#define PG_DIAG_MESSAGE_HINT 'H'
#define O_CREAT 0100
#define TABLESPACE_VERSION_DIRECTORY "PG_" PG_MAJORVERSION "_" CppAsString2(CATALOG_VERSION_NO)
#define EOVERFLOW 75
#define S_IRUSR __S_IREAD
#define list_make3_int(x1,x2,x3) list_make3_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3))
#define AF_PACKET PF_PACKET
#define O_CLOEXEC __O_CLOEXEC
#define __SIZEOF_PTHREAD_COND_T 48
#define __P(args) args
#define SEEK_SET 0
#define PG_KRB_SRVNAM "postgres"
#define EAI_NODATA -5
#define OffsetNumberNext(offsetNumber) ((OffsetNumber) (1 + (offsetNumber)))
#define AF_IEEE802154 PF_IEEE802154
#define ERRCODE_FEATURE_NOT_SUPPORTED MAKE_SQLSTATE('0','A','0','0','0')
#define make_simple_restrictinfo_compat(a,b) make_simple_restrictinfo(a, b)
#define VARDATA_EXTERNAL(PTR) VARDATA_1B_E(PTR)
#define __f64(x) x ##f64
#define pg_pread pread
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define INT_LEAST8_WIDTH 8
#define ERRCODE_INVALID_DATETIME_FORMAT MAKE_SQLSTATE('2','2','0','0','7')
#define DATE_END_JULIAN (2147483494)
#define __FLT32X_MANT_DIG__ 53
#define ExclusiveLock 7
#define EUCLEAN 117
#define __restrict_arr __restrict
#define EpochFromFullTransactionId(x) ((uint32) ((x).value >> 32))
#define IP_MSFILTER 41
#define _EXTERN_INLINE __extern_inline
#define Anum_pg_index_indimmediate 8
#define unix 1
#define HAVE_GETPWUID_R 1
#define EAI_OVERFLOW -12
#define ShareLock 5
#define AttributeRelation_Rowtype_Id 75
#define __LC_PAPER 7
#define IP_BLOCK_SOURCE 38
#define __S_IEXEC 0100
#define W_OK 2
#define BKI_FORCE_NULL 
#define _SIZE_T_ 
#define lfirst_oid(lc) ((lc)->oid_value)
#define __FLT16_IS_IEC_60559__ 2
#define __FLT16_MAX_EXP__ 16
#define DEFAULT_XLOG_SEG_SIZE (16*1024*1024)
#define UINT_FAST32_MAX (18446744073709551615UL)
#define __S_IWRITE 0200
#define _WCHAR_T_H 
#define IP_RETOPTS 7
#define EPROTO 71
#define ENODEV 19
#define INT16_WIDTH 16
#define __stub_revoke 
#define USE_LIBXSLT 1
#define likely(x) __builtin_expect((x) != 0, 1)
#define __stub___compat_create_module 
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define for_both_cell(cell1,list1,initcell1,cell2,list2,initcell2) for (ForBothCellState cell1 ##__state = for_both_cell_setup(list1, initcell1, list2, initcell2); multi_for_advance_cell(cell1, cell1 ##__state, l1, i1), multi_for_advance_cell(cell2, cell1 ##__state, l2, i2), (cell1 != NULL && cell2 != NULL); cell1 ##__state.i1++, cell1 ##__state.i2++)
#define EKEYEXPIRED 127
#define O_DIRECT __O_DIRECT
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define ERRCODE_CONNECTION_FAILURE MAKE_SQLSTATE('0','8','0','0','6')
#define DT_REG DT_REG
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 6
#define ERRCODE_INVALID_ROW_COUNT_IN_RESULT_OFFSET_CLAUSE MAKE_SQLSTATE('2','2','0','1','X')
#define STRINGINFO_H 
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define ERRCODE_FDW_TABLE_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','R')
#define _PATH_NETWORKS "/etc/networks"
#define PF_IEEE802154 36
#define RECOVERY_SIGNAL_FILE "recovery.signal"
#define CStringGetDatum(X) PointerGetDatum(X)
#define DT_BLK DT_BLK
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define va_copy(d,s) __builtin_va_copy(d,s)
#define EHWPOISON 133
#define DECLARE_INDEX(name,oid,decl) extern int no_such_variable
#define __FLT_HAS_INFINITY__ 1
#define SO_SNDBUF 7
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define XLogRecGetXid(decoder) ((decoder)->decoded_record->xl_xid)
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define _BSD_PTRDIFF_T_ 
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define Anum_pg_index_indcollation 16
#define RELPERSISTENCE_PERMANENT 'p'
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define ERRCODE_TRIGGERED_DATA_CHANGE_VIOLATION MAKE_SQLSTATE('2','7','0','0','0')
#define Anum_pg_attribute_attcacheoff 8
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define LP_DEAD 3
#define FirstOffsetNumber ((OffsetNumber) 1)
#define ERRCODE_LOCATOR_EXCEPTION MAKE_SQLSTATE('0','F','0','0','0')
#define __INT_FAST32_WIDTH__ 64
#define dlist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end, (iter).next = (iter).cur->next; (iter).cur != (iter).end; (iter).cur = (iter).next, (iter).next = (iter).cur->next)
#define NULL ((void *)0)
#define JULIAN_MINDAY (24)
#define AF_IRDA PF_IRDA
#define HAVE__BOOL 1
#define RELATION_IS_LOCAL(relation) ((relation)->rd_islocaltemp || (relation)->rd_createSubid != InvalidSubTransactionId)
#define ObjectAddressSubSet(addr,class_id,object_id,object_sub_id) do { (addr).classId = (class_id); (addr).objectId = (object_id); (addr).objectSubId = (object_sub_id); } while (0)
#define AT_SYMLINK_NOFOLLOW 0x100
#define E2BIG 7
#define BIG_ENDIAN __BIG_ENDIAN
#define PF_PPPOX 24
#define SO_ATTACH_REUSEPORT_CBPF 51
#define O_ASYNC 020000
#define SO_TIMESTAMPNS_NEW 64
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define NO_DATA 4
#define AF_RXRPC PF_RXRPC
#define IPV6_XFRM_POLICY 35
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define RELKIND_MATVIEW 'm'
#define EL3RST 47
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define ERRCODE_UNSAFE_NEW_ENUM_VALUE_USAGE MAKE_SQLSTATE('5','5','P','0','4')
#define PF_QIPCRTR 42
#define Anum_pg_index_indnatts 3
#define HAVE_GSSAPI_GSSAPI_H 1
#define SOL_KCM 281
#define MCXT_ALLOC_ZERO 0x04
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define MSG_OOB MSG_OOB
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define FRAMEOPTION_DEFAULTS (FRAMEOPTION_RANGE | FRAMEOPTION_START_UNBOUNDED_PRECEDING | FRAMEOPTION_END_CURRENT_ROW)
#define __STDC_VERSION__ 199901L
#define MemSet(start,val,len) do { void *_vstart = (void *) (start); int _val = (val); Size _len = (len); if ((((uintptr_t) _vstart) & LONG_ALIGN_MASK) == 0 && (_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0)
#define ERRCODE_OBJECT_IN_USE MAKE_SQLSTATE('5','5','0','0','6')
#define FullTransactionIdIsNormal(x) FullTransactionIdFollowsOrEquals(x, FirstNormalFullTransactionId)
#define __NLINK_T_TYPE __U32_TYPE
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define Anum_pg_attribute_attlen 5
#define RM_MAX_ID (RM_NEXT_ID - 1)
#define __PMT(args) args
#define llast_int(l) lfirst_int(list_last_cell(l))
#define HAVE_INET_ATON 1
#define AF_SMC PF_SMC
#define AF_NETBEUI PF_NETBEUI
#define AT_NO_AUTOMOUNT 0x800
#define IPV6_2292RTHDR 5
#define POSTGRES_EXT_H 
#define ERRCODE_CHECK_VIOLATION MAKE_SQLSTATE('2','3','5','1','4')
#define Anum_pg_publication_pubtruncate 8
#define IS_SPECIAL_VARNO(varno) ((varno) >= INNER_VAR)
#define VALUE_H 
#define AttrNumberIsForUserDefinedAttr(attributeNumber) ((bool) ((attributeNumber) > 0))
#define _LINUX_LIMITS_H 
#define RELKIND_RELATION 'r'
#define HAVE_CLOCK_GETTIME 1
#define LP_NORMAL 1
#define BKPIMAGE_APPLY 0x04
#define ENXIO 6
#define IPV6_RTHDR_LOOSE 0
#define __FLT64_HAS_QUIET_NAN__ 1
#define ERRCODE_EXCLUSION_VIOLATION MAKE_SQLSTATE('2','3','P','0','1')
#define ERRCODE_DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST MAKE_SQLSTATE('2','B','0','0','0')
#define Anum_pg_attribute_atthasdef 15
#define F_GETLK64 5
#define EBADRQC 56
#define AT_STATX_FORCE_SYNC 0x2000
#define PROMOTE_SIGNAL_FILE "promote"
#define USE_ARMV8_CRC32C_WITH_RUNTIME_CHECK 1
#define HAVE_LOCALE_T 1
#define CURSOR_OPT_SCROLL 0x0002
#define __WALL 0x40000000
#define MCAST_JOIN_GROUP 42
#define INET6_ADDRSTRLEN 46
#define POSTGRES_EPOCH_JDATE 2451545
#define __KEY_T_TYPE __S32_TYPE
#define __F_SETSIG 10
#define ERRCODE_NO_ADDITIONAL_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','2','0','0','1')
#define ItemPointerGetBlockNumberNoCheck(pointer) ( BlockIdGetBlockNumber(&(pointer)->ip_blkid) )
#define PF_CAN 29
#define LOG 15
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define __stub___compat_get_kernel_syms 
#define IPV6_RECVFRAGSIZE 77
#define VARDATA_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_data)
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define __FLT64_HAS_INFINITY__ 1
#define MCXT_ALLOC_NO_OOM 0x02
#define false 0
#define IPV6_JOIN_GROUP 20
#define ERRCODE_INVALID_ARGUMENT_FOR_SQL_JSON_DATETIME_FUNCTION MAKE_SQLSTATE('2','2','0','3','1')
#define _STRING_H 1
#define UINT_FAST32_WIDTH __WORDSIZE
#define __GNUC_VA_LIST 
#define HAVE_DECL_LLVMORCGETSYMBOLADDRESSIN 0
#define F_SHLCK 8
#define IP_PASSSEC 18
#define HAVE_LIBM 1
#define BlockIdSet(blockId,blockNumber) ( AssertMacro(PointerIsValid(blockId)), (blockId)->bi_hi = (blockNumber) >> 16, (blockId)->bi_lo = (blockNumber) & 0xffff )
#define WSTOPPED 2
#define HAVE_LIBZ 1
#define ERRCODE_UNDEFINED_FILE MAKE_SQLSTATE('5','8','P','0','1')
#define ERRCODE_MOST_SPECIFIC_TYPE_MISMATCH MAKE_SQLSTATE('2','2','0','0','G')
#define ATTRIBUTE_IDENTITY_ALWAYS 'a'
#define FILENAME_MAX 4096
#define SOL_RXRPC 272
#define MaxLockMode 8
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define PublicationRelationId 6104
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define VARHDRSZ ((int32) sizeof(int32))
#define IPPROTO_RAW IPPROTO_RAW
#define HAVE_POSIX_FADVISE 1
#define __ino_t_defined 
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define __UINT16_TYPE__ short unsigned int
#define __CLOCKID_T_TYPE __S32_TYPE
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define USE_LDAP 1
#define Anum_pg_publication_pubname 2
#define ____sigval_t_defined 
#define CHECKPOINT_REQUESTED 0x0040
#define IPPROTO_ICMP IPPROTO_ICMP
#define ELIBEXEC 83
#define RWH_WRITE_LIFE_NOT_SET 0
#define FKCONSTR_MATCH_SIMPLE 's'
#define PG_DIAG_SOURCE_FILE 'F'
#define ERRCODE_TO_CATEGORY(ec) ((ec) & ((1 << 12) - 1))
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define HAVE__STATIC_ASSERT 1
#define _POSIX_MQ_OPEN_MAX 8
#define HAVE_DECL_LLVMCREATEGDBREGISTRATIONLISTENER 1
#define __INT_FAST64_WIDTH__ 64
#define __ARM_FEATURE_UNALIGNED 1
#define __UQUAD_TYPE unsigned long int
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ERRCODE_NONSTANDARD_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','P','0','6')
#define __BYTE_ORDER __LITTLE_ENDIAN
#define ALIGNOF_SHORT 2
#define TTY_NAME_MAX 32
#define EADDRNOTAVAIL 99
#define le64toh(x) __uint64_identity (x)
#define _NETDB_H 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define ERRCODE_SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','1')
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX (9223372036854775807L)
#define __FLT64X_MAX_EXP__ 16384
#define lfourth_node(type,l) castNode(type, lfourth(l))
#define XLR_BLOCK_ID_ORIGIN 253
#define HAVE_PPOLL 1
#define RelationGetPartitionDesc_compat(a,b) RelationGetPartitionDesc(a, b)
#define __LDBL_REDIR_DECL(name) 
#define Anum_pg_index_indnkeyatts 4
#define Anum_pg_class_relpages 10
#define NI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("NI_IDN_ALLOW_UNASSIGNED is deprecated") 64
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define BYTE_ORDER __BYTE_ORDER
#define PTRDIFF_WIDTH __WORDSIZE
#define XLogRecGetOrigin(decoder) ((decoder)->record_origin)
#define COMP_CRC32C(crc,data,len) ((crc) = pg_comp_crc32c((crc), (data), (len)))
#define UINT8_MAX (255)
#define TIMESTAMP_NOEND(j) do {(j) = DT_NOEND;} while (0)
#define ERRCODE_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('2','2','0','0','1')
#define __FILE_defined 1
#define SOL_IUCV 277
#define LOCKDEFS_H_ 
#define HAVE_PWRITE 1
#define _GCC_SIZE_T 
#define IPV6_RTHDR 57
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define MemSetAligned(start,val,len) do { long *_start = (long *) (start); int _val = (val); Size _len = (len); if ((_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_start, _val, _len); } while (0)
#define SECS_PER_DAY 86400
#define _T_SIZE_ 
#define IPV6_RECVHOPLIMIT 51
#define ERRCODE_WARNING MAKE_SQLSTATE('0','1','0','0','0')
#define ENOTRECOVERABLE 131
#define UINT_FAST8_MAX (255)
#define PF_ATMSVC 20
#define HAVE_EXPLICIT_BZERO 1
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define XLogRecGetInfo(decoder) ((decoder)->decoded_record->xl_info)
#define QTW_IGNORE_JOINALIASES 0x04
#define __WNOTHREAD 0x20000000
#define HAVE_LIBPAM 1
#define AF_LLC PF_LLC
#define __INT64_TYPE__ long int
#define ERRCODE_E_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','2')
#define EIO 5
#define SizeOfXLogRecordBlockImageHeader (offsetof(XLogRecordBlockImageHeader, bimg_info) + sizeof(uint8))
#define UINT64_FORMAT "%" INT64_MODIFIER "u"
#define ENETUNREACH 101
#define EXDEV 18
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define S_IRGRP (S_IRUSR >> 3)
#define UINT32_C(c) c ## U
#define _POSIX_SYMLINK_MAX 255
#define HAVE_SYNCFS 1
#define __FLT64X_MIN_10_EXP__ (-4931)
#define ERRCODE_INVALID_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','0','C')
#define PF_PACKET 17
#define HAVE__BUILTIN_BSWAP16 1
#define MSG_SYN MSG_SYN
#define HAVE_SETSID 1
#define __INO64_T_TYPE __UQUAD_TYPE
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __FP_FAST_FMAF32 1
#define BKI_DEFAULT(value) 
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __WINT_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define F_SEAL_GROW 0x0004
#define IS_HIGHBIT_SET(ch) ((unsigned char)(ch) & HIGHBIT)
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SEM_VALUE_MAX (2147483647)
#define HIGHBIT (0x80)
#define REL_H 
#define llast_oid(l) lfirst_oid(list_last_cell(l))
#define __intptr_t_defined 
#define SOL_PACKET 263
#define HAVE__BUILTIN_BSWAP32 1
#define ITEMID_H 
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define HAVE_STRERROR_R 1
#define ERRCODE_ADMIN_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','1')
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define XLR_RMGR_INFO_MASK 0xF0
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ERRCODE_UNDEFINED_PSTATEMENT MAKE_SQLSTATE('2','6','0','0','0')
#define AT_STATX_DONT_SYNC 0x4000
#define HAVE_PLANNERINFO_TYPEDEF 1
#define ERRCODE_UNTRANSLATABLE_CHARACTER MAKE_SQLSTATE('2','2','P','0','5')
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define ERRCODE_E_R_I_E_SRF_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','2')
#define __USE_POSIX199309 1
#define SO_RCVBUF 8
#define VARDATA_SHORT(PTR) VARDATA_1B(PTR)
#define HAVE_MKDTEMP 1
#define TransactionIdEquals(id1,id2) ((id1) == (id2))
#define __INT_LEAST32_TYPE__ int
#define HAVE__BUILTIN_BSWAP64 1
#define BUFFERALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_BUFFER, (LEN))
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define PG_CATCH() } else { PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack
#define ERRCODE_DUPLICATE_OBJECT MAKE_SQLSTATE('4','2','7','1','0')
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define _POSIX_SIGQUEUE_MAX 32
#define __LDBL_MAX_10_EXP__ 4932
#define __W_CONTINUED 0xffff
#define __ATOMIC_RELAXED 0
#define QTW_IGNORE_RT_SUBQUERIES 0x01
#define llast_node(type,l) castNode(type, llast(l))
#define CURSOR_OPT_NO_SCROLL 0x0004
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define RELKIND_INDEX 'i'
#define RelationIsMapped(relation) (RELKIND_HAS_STORAGE((relation)->rd_rel->relkind) && ((relation)->rd_rel->relfilenode == InvalidOid))
#define SCM_TIMESTAMPING_OPT_STATS 54
#define ERRCODE_T_R_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('4','0','0','0','2')
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define le16toh(x) __uint16_identity (x)
#define EDOM 33
#define XATTR_NAME_MAX 255
#define LOCK_SH 1
#define ENOSTR 60
#define MaxTransactionId ((TransactionId) 0xFFFFFFFF)
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define QTW_EXAMINE_SORTGROUP 0x80
#define HAVE_READV 1
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define Float8GetDatumFast(X) Float8GetDatum(X)
#define ERRCODE_ASSERT_FAILURE MAKE_SQLSTATE('P','0','0','0','4')
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define ECHRNG 44
#define EHOSTDOWN 112
#define InvalidBlockNumber ((BlockNumber) 0xFFFFFFFF)
#define RWH_WRITE_LIFE_LONG 4
#define __wchar_t__ 
#define FrozenTransactionId ((TransactionId) 2)
#define FullTransactionIdFollowsOrEquals(a,b) ((a).value >= (b).value)
#define SEEK_END 2
#define OffsetNumberPrev(offsetNumber) ((OffsetNumber) (-1 + (offsetNumber)))
#define USE_SSL 
#define PALLOC_H 
#define _ISOC99_SOURCE 1
#define ERRCODE_FDW_FUNCTION_SEQUENCE_ERROR MAKE_SQLSTATE('H','V','0','1','0')
#define DatumGetName(X) ((Name) DatumGetPointer(X))
#define ENOLCK 37
#define ENFILE 23
#define StaticAssertDecl(condition,errmessage) _Static_assert(condition, errmessage)
#define MSG_DONTWAIT MSG_DONTWAIT
#define RelationGetToastTupleTarget(relation,defaulttarg) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->toast_tuple_target : (defaulttarg))
#define JULIAN_MAXDAY (3)
#define PG_STRERROR_R_BUFLEN 256
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define __S_ISUID 04000
#define HAVE_UUID_E2FS 1
#define __LC_NAME 8
#define ACL_USAGE (1<<8)
#define MAXALIGN64(LEN) TYPEALIGN64(MAXIMUM_ALIGNOF, (LEN))
#define be64toh(x) __bswap_64 (x)
#define ENOSYS 38
#define ERRCODE_SAVEPOINT_EXCEPTION MAKE_SQLSTATE('3','B','0','0','0')
#define EXE ""
#define __LDBL_MIN_10_EXP__ (-4931)
#define MAXIMUM_ALIGNOF 8
#define AI_PASSIVE 0x0001
#define DT_DIR DT_DIR
#define __UINT_LEAST64_TYPE__ long unsigned int
#define PF_RDS 21
#define TUPDESC_H 
#define _BITS_LOCALE_H 1
#define Anum_pg_index_indisprimary 6
#define va_arg(v,l) __builtin_va_arg(v,l)
#define VARATT_IS_EXTERNAL_EXPANDED_RO(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RO)
#define NODES_H 
#define VARATT_IS_EXTERNAL_EXPANDED_RW(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RW)
#define slist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).prev = &(lhead)->head, (iter).cur = (iter).prev->next, (iter).next = (iter).cur ? (iter).cur->next : NULL; (iter).cur != NULL; (iter).prev = (iter).cur, (iter).cur = (iter).next, (iter).next = (iter).next ? (iter).next->next : NULL)
#define _THREAD_SHARED_TYPES_H 1
#define AT_REMOVEDIR 0x200
#define ERRCODE_GROUPING_ERROR MAKE_SQLSTATE('4','2','8','0','3')
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define AT_STATX_SYNC_TYPE 0x6000
#define ItemIdIsValid(itemId) PointerIsValid(itemId)
#define FullTransactionIdPrecedesOrEquals(a,b) ((a).value <= (b).value)
#define makeBoolean(val) makeInteger(val)
#define __HAVE_DISTINCT_FLOAT32 0
#define ENOTSUP EOPNOTSUPP
#define IP_CHECKSUM 23
#define ERRCODE_E_R_E_CONTAINING_SQL_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','1')
#define INIT_CRC32C(crc) ((crc) = 0xFFFFFFFF)
#define FullTransactionIdIsValid(x) TransactionIdIsValid(XidFromFullTransactionId(x))
#define HAVE_RL_COMPLETION_APPEND_CHARACTER 1
#define R_OK 4
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define SIZEOF_LONG 8
#define toascii_l(c,l) __toascii_l ((c), (l))
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define HAVE_NET_IF_H 1
#define AF_NETLINK PF_NETLINK
#define __INT_FAST8_WIDTH__ 8
#define pgstat_init_relation(r) pgstat_initstats(r)
#define FALLOC_FL_PUNCH_HOLE 0x02
#define ATTRIBUTE_GENERATED_STORED 's'
#define vfprintf pg_vfprintf
#define FKCONSTR_MATCH_PARTIAL 'p'
#define FATAL 22
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define NON_EXEC_STATIC static
#define XLogRecGetTopXid(decoder) ((decoder)->toplevel_xid)
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __ULONG32_TYPE unsigned int
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define _PATH_HOSTS "/etc/hosts"
#define UTIME_OMIT ((1l << 30) - 2l)
#define FOPEN_MAX 16
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __suseconds_t_defined 
#define SPLICE_F_NONBLOCK 2
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define __off_t_defined 
#define SO_CNX_ADVICE 53
#define HAVE_SPINLOCKS 1
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define SO_NOFCS 43
#define HAVE_GETOPT_LONG 1
#define FRAMEOPTION_START_CURRENT_ROW 0x00200
#define XLR_BLOCK_ID_DATA_SHORT 255
#define AF_LOCAL PF_LOCAL
#define __U64_TYPE unsigned long int
#define Anum_pg_attribute_attoptions 24
#define SO_PEERGROUPS 59
#define __USE_XOPEN2K8XSI 1
#define SO_SNDTIMEO_OLD 21
#define ERRCODE_CRASH_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','2')
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define slist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).cur = (lhead)->head.next; (iter).cur != NULL; (iter).cur = (iter).cur->next)
#define __size_t__ 
#define HAVE_LIBXML2 1
#define DatumGetBool(X) ((bool) ((X) != 0))
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define SIOCGSTAMPNS_OLD 0x8907
#define IP_MINTTL 21
#define TYPEALIGN(ALIGNVAL,LEN) (((uintptr_t) (LEN) + ((ALIGNVAL) - 1)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __ONCE_FLAG_INIT { 0 }
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define __LC_CTYPE 0
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define S_IWOTH (S_IWGRP >> 3)
#define SO_TIMESTAMP_NEW 63
#define SYNC_METHOD_OPEN 2
#define PG_DIAG_SEVERITY 'S'
#define AF_DECnet PF_DECnet
#define ERRCODE_INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','4')
#define __LONG_WIDTH__ 64
#define NodeSetTag(nodeptr,t) (((Node*)(nodeptr))->type = (t))
#define __STDLIB_MB_LEN_MAX 16
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define AI_NUMERICHOST 0x0004
#define ereport_domain(elevel,domain,...) do { pg_prevent_errno_in_scope(); if (__builtin_constant_p(elevel) && (elevel) >= ERROR ? errstart_cold(elevel, domain) : errstart(elevel, domain)) __VA_ARGS__, errfinish(__FILE__, __LINE__, PG_FUNCNAME_MACRO); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define HAVE_HMAC_CTX_NEW 1
#define ERRCODE_ERROR_IN_ASSIGNMENT MAKE_SQLSTATE('2','2','0','0','5')
#define XLogStandbyInfoActive() (wal_level >= WAL_LEVEL_REPLICA)
#define __INO_T_MATCHES_INO64_T 1
#define __POSIX_FADV_NOREUSE 5
#define PG_DIAG_SOURCE_LINE 'L'
#define ENOPROTOOPT 92
#define TYPEALIGN64(ALIGNVAL,LEN) (((uint64) (LEN) + ((ALIGNVAL) - 1)) & ~((uint64) ((ALIGNVAL) - 1)))
#define DO_AGGSPLIT_DESERIALIZE(as) (((as) & AGGSPLITOP_DESERIALIZE) != 0)
#define NormalTransactionIdFollows(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) > 0)
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define MAX_TZDISP_HOUR 15
#define EAI_NOTCANCELED -102
#define BKPBLOCK_FLAG_MASK 0xF0
#define HAVE_DECL_LLVMGETHOSTCPUNAME 1
#define __GLIBC_USE_IEC_60559_EXT 1
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define RelationHasCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option != VIEW_OPTION_CHECK_OPTION_NOT_SET)
#define UINT_LEAST32_MAX (4294967295U)
#define EMFILE 24
#define DECLARE_ARRAY_FOREIGN_KEY(cols,reftbl,refcols) extern int no_such_variable
#define HAVE_NETINET_TCP_H 1
#define F_NOTIFY 1026
#define SO_BUSY_POLL_BUDGET 70
#define isprint_l(c,l) __isprint_l ((c), (l))
#define FLOAT8_FITS_IN_INT16(num) ((num) >= (float8) PG_INT16_MIN && (num) < -((float8) PG_INT16_MIN))
#define ERRCODE_INVALID_CURSOR_DEFINITION MAKE_SQLSTATE('4','2','P','1','1')
#define SIZEOF_SIZE_T 8
#define PG_CACHE_LINE_SIZE 128
#define __lldiv_t_defined 1
#define _POSIX_NGROUPS_MAX 8
#define RelationGetTargetBlock(relation) ( (relation)->rd_smgr != NULL ? (relation)->rd_smgr->smgr_targblock : InvalidBlockNumber )
#define ERRCODE_INVALID_PSTATEMENT_DEFINITION MAKE_SQLSTATE('4','2','P','1','4')
#define pg_pwrite pwrite
#define MSG_EOR MSG_EOR
#define DATATYPE_TIMESTAMP_H 
#define dgettext(domainname,msgid) dcgettext (domainname, msgid, LC_MESSAGES)
#define VARSIZE_ANY(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR) : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR) : VARSIZE_4B(PTR)))
#define __STRINGS_FORTIFIED 1
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define STANDBY_SIGNAL_FILE "standby.signal"
#define ItemIdHasStorage(itemId) ((itemId)->lp_len != 0)
#define ENOBUFS 105
#define ERRCODE_INVALID_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','M')
#define REGBUF_FORCE_IMAGE 0x01
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IN_MULTICAST(a) IN_CLASSD(a)
#define Anum_pg_index_indisclustered 9
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define __SIZEOF_WCHAR_T__ 4
#define NormalTransactionIdPrecedes(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) < 0)
#define EFAULT 14
#define ERRCODE_SQL_JSON_NUMBER_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','B')
#define PF_KCM 41
#define STATUS_OK (0)
#define SCM_TIMESTAMP SO_TIMESTAMP
#define _POSIX_TIMER_MAX 32
#define FRAMEOPTION_END_OFFSET_PRECEDING 0x01000
#define DN_CREATE 0x00000004
#define S_IXGRP (S_IXUSR >> 3)
#define ERRCODE_FDW_INVALID_DESCRIPTOR_FIELD_IDENTIFIER MAKE_SQLSTATE('H','V','0','9','1')
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define QTW_IGNORE_RC_SUBQUERIES 0x03
#define __ATOMIC_CONSUME 1
#define SO_TIMESTAMPING_NEW 65
#define sigev_notify_function _sigev_un._sigev_thread._function
#define PF_KEY 15
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define ItemIdSetNormal(itemId,off,len) ( (itemId)->lp_flags = LP_NORMAL, (itemId)->lp_off = (off), (itemId)->lp_len = (len) )
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define INTMAX_C(c) c ## L
#define SOMAXCONN 4096
#define HAVE_GETRUSAGE 1
#define ERRCODE_INVALID_PASSWORD MAKE_SQLSTATE('2','8','P','0','1')
#define POSIX_FADV_RANDOM 1
#define ALIGNOF_PG_INT128_TYPE 16
#define ERRCODE_FDW_UNABLE_TO_CREATE_REPLY MAKE_SQLSTATE('H','V','0','0','M')
#define _STDINT_H 1
#define IN_CLASSC_NSHIFT 8
#define USE_LZ4 1
#define RelationGetForm(relation) ((relation)->rd_rel)
#define NoLock 0
#define S_ISUID __S_ISUID
#define LC_NAME __LC_NAME
#define SHORTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_SHORT, (LEN))
#define HAVE_DECL_FDATASYNC 1
#define FullTransactionIdPrecedes(a,b) ((a).value < (b).value)
#define isascii_l(c,l) __isascii_l ((c), (l))
#define Anum_pg_attribute_attstorage 12
#define ERRCODE_CARDINALITY_VIOLATION MAKE_SQLSTATE('2','1','0','0','0')
#define CREATE_SEQUENCE_COMMAND "CREATE SEQUENCE IF NOT EXISTS %s AS %s INCREMENT BY " INT64_FORMAT " MINVALUE " INT64_FORMAT " MAXVALUE " INT64_FORMAT " START WITH " INT64_FORMAT " CACHE " INT64_FORMAT " %sCYCLE"
#define _DIRENT_H 1
#define __WCHAR_T 
#define ERRCODE_TOO_MANY_JSON_ARRAY_ELEMENTS MAKE_SQLSTATE('2','2','0','3','D')
#define INT64_FORMAT "%" INT64_MODIFIER "d"
#define VARDATA_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_data)
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define Anum_pg_class_relispopulated 25
#define ELIBMAX 82
#define INFO 17
#define SPLICE_F_MORE 4
#define FRAMEOPTION_END_UNBOUNDED_FOLLOWING 0x00100
#define _ISOC2X_SOURCE 1
#define INTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_INT, (LEN))
#define TopSubTransactionId ((SubTransactionId) 1)
#define __ino64_t_defined 
#define PG_UINT32_MAX (0xFFFFFFFFU)
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define AF_ISDN PF_ISDN
#define Natts_pg_class 33
#define __FLT128_HAS_DENORM__ 1
#define IPV6_MULTICAST_LOOP 19
#define __ATOMIC_SEQ_CST 5
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define IPV6_2292HOPLIMIT 8
#define multi_for_advance_cell(cell,state,l,i) (cell = (state.l != NIL && state.i < state.l->length) ? &state.l->elements[state.i] : NULL)
#define ERRCODE_FDW_INVALID_ATTRIBUTE_VALUE MAKE_SQLSTATE('H','V','0','2','4')
#define ENOENT 2
#define ERRCODE_WARNING_PRIVILEGE_NOT_REVOKED MAKE_SQLSTATE('0','1','0','0','6')
#define F_SETFD 2
#define IPV6_LEAVE_ANYCAST 28
#define Anum_pg_attribute_attisdropped 19
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define FRAMEOPTION_EXCLUDE_TIES 0x20000
#define pg_unreachable() __builtin_unreachable()
#define ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','3')
#define SizeOfXLogRecordDataHeaderLong (sizeof(uint8) + sizeof(uint32))
#define PTHREAD_KEYS_MAX 1024
#define ATTRIBUTE_FIXED_PART_SIZE (offsetof(FormData_pg_attribute,attcollation) + sizeof(Oid))
#define EBADSLT 57
#define IPV6_PMTUDISC_DONT 0
#define SO_INCOMING_CPU 49
#define AI_CANONNAME 0x0002
#define EKEYREVOKED 128
#define __FLT64X_HAS_DENORM__ 1
#define F_SETFL 4
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define FRAMEOPTION_ROWS 0x00004
#define __HAVE_DISTINCT_FLOAT64X 0
#define ERRCODE_FDW_INVALID_STRING_FORMAT MAKE_SQLSTATE('H','V','0','0','A')
#define ERRCODE_INVALID_RECURSION MAKE_SQLSTATE('4','2','P','1','9')
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define PG_BACKEND_VERSIONSTR "postgres (PostgreSQL) " PG_VERSION "\n"
#define HAVE_SETENV 1
#define EHOSTUNREACH 113
#define __USE_DYNAMIC_STACK_SIZE 1
#define DT_FIFO DT_FIFO
#define UInt32GetDatum(X) ((Datum) (X))
#define FKCONSTR_ACTION_NOACTION 'a'
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define POSIX_FADV_SEQUENTIAL 2
#define FALLOC_FL_INSERT_RANGE 0x20
#define ERRCODE_CASE_NOT_FOUND MAKE_SQLSTATE('2','0','0','0','0')
#define _GCC_PTRDIFF_T 
#define PACKAGE_URL "https://www.postgresql.org/"
#define _POSIX_THREAD_KEYS_MAX 128
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define FORKNAMECHARS 4
#define __LDBL_DIG__ 33
#define DECLARE_FOREIGN_KEY_OPT(cols,reftbl,refcols) extern int no_such_variable
#define __exctype(name) extern int name (int) __THROW
#define pg_attribute_always_inline __attribute__((always_inline)) inline
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','1')
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define S_IROTH (S_IRGRP >> 3)
#define RelationGetTargetPageUsage(relation,defaultff) (BLCKSZ * RelationGetFillFactor(relation, defaultff) / 100)
#define RelationGetFillFactor(relation,defaultff) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->fillfactor : (defaultff))
#define Anum_pg_index_indoption 18
#define SO_TIMESTAMPNS_OLD 35
#define INTMAX_WIDTH 64
#define ___int_ptrdiff_t_h 
#define EAI_INTR -104
#define ERRCODE_DATA_CORRUPTED MAKE_SQLSTATE('X','X','0','0','1')
#define IP_PMTUDISC_INTERFACE 4
#define ITEMPTR_H 
#define PF_VSOCK 40
#define SECS_PER_HOUR 3600
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define lthird_oid(l) lfirst_oid(list_nth_cell(l, 2))
#define nodeTag(nodeptr) (((const Node*)(nodeptr))->type)
#define SO_BUF_LOCK 72
#define PG_CLASS_D_H 
#define SO_PRIORITY 12
#define pg_attribute_aligned(a) __attribute__((aligned(a)))
#define __USE_LARGEFILE64 1
#define PG_ATTRIBUTE_H 
#define F_SETOWN_EX __F_SETOWN_EX
#define ERRCODE_INVALID_PRECEDING_OR_FOLLOWING_SIZE MAKE_SQLSTATE('2','2','0','1','3')
#define PF_LOCAL 1
#define S_IFIFO __S_IFIFO
#define ERRCODE_CONFIG_FILE_ERROR MAKE_SQLSTATE('F','0','0','0','0')
#define __fsblkcnt_t_defined 
#define EMEDIUMTYPE 124
#define FRAMEOPTION_START_UNBOUNDED_FOLLOWING 0x00080
#define _(x) gettext(x)
#define X_OK 1
#define ERRCODE_DUPLICATE_CURSOR MAKE_SQLSTATE('4','2','P','0','3')
#define __S_ISGID 02000
