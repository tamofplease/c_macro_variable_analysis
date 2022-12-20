#define __S_IFBLK 0060000
#define SOL_LLC 268
#define _BITS_SCHED_H 1
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define __SSP_STRONG__ 3
#define ACL_DB_ATOU(_str_) (_str_ ? strtoul(_str_, (char **) NULL, 10) : 0)
#define __attr_access(x) __attribute__ ((__access__ x))
#define ACL_BINHASH_STAT_DUPLEX_KEY 2
#define __DBL_MIN_EXP__ (-1021)
#define EMULTIHOP 72
#define ACL_VBUF_FLAG_TIMEOUT (1<<2)
#define AF_MAX PF_MAX
#define _SC_PII _SC_PII
#define __CFLOAT32 _Complex _Float32
#define IFF_SLAVE IFF_SLAVE
#define __UINT_LEAST16_MAX__ 0xffff
#define acl_myrealloc(ptr,size) acl_realloc_glue(__FILE__, __LINE__, (ptr), size)
#define IP_ROUTER_ALERT 5
#define ACL_DEPRECATED_FOR(f) __attribute__((deprecated("Use " #f " instead")))
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define __FLT128_MAX_10_EXP__ 4932
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define ACL_JSON_T_OBJ (1 << 11)
#define ifr_name ifr_ifrn.ifrn_name
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define AUT_FLAG_LOOP_END 4
#define acl_spool_accept acl_ioctl_accept
#define _T_WCHAR_ 
#define _SC_IPV6 _SC_IPV6
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define NI_MAXSERV 32
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define _GCC_MAX_ALIGN_T 
#define acl_pthread_getspecific pthread_getspecific
#define ACL_EHOSTDOWN EHOSTDOWN
#define ACL_FHANDLE_O_MKDIR (1 << 2)
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define __S64_TYPE long int
#define IP_TOS 1
#define ACL_MDT_FLAG_SLICE_RTGC_OFF (1 << 13)
#define __SQUAD_TYPE long int
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _BSD_SIZE_T_DEFINED_ 
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define acl_myfree_fn acl_free_fn_glue
#define __CHAR_BIT__ 8
#define SO_DOMAIN 39
#define acl_debug(SECTION,LEVEL) !acl_do_debug((SECTION), (LEVEL)) ? (void) 0 : acl_msg_info
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define EREMCHG 78
#define SO_NOFCS 43
#define EACCES 13
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define IFF_ALLMULTI IFF_ALLMULTI
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define EDESTADDRREQ 89
#define __DADDR_T_TYPE __S32_TYPE
#define __LONG_WIDTH__ 64
#define IP_TTL 2
#define ACL_VSTREAM_FLAG_WRITE (1 << 1)
#define ACL_DEFINE_SUNX86_INCLUDE_H 
#define IPV6_JOIN_ANYCAST 27
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define SOCK_RDM SOCK_RDM
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define __INT32_C(c) c
#define ACL_APP_CTL_EXIT_FN ACL_MASTER_SERVER_EXIT
#define PF_DECnet 12
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define IP_MAX_MEMBERSHIPS 20
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define ACL_MASTER_FLOW_READ 3
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define ACL_DLL_FARPROC void*
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define acl_htable_foreach ACL_HTABLE_FOREACH
#define ACL_BINHASH_STAT_OK 0
#define ACL_RING_LAST(head) (acl_ring_pred(head) != (head) ? acl_ring_pred(head) : 0)
#define MCAST_LEAVE_SOURCE_GROUP 47
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 0
#define IPV6_IPSEC_POLICY 34
#define acl_pthread_attr_setdetachstate pthread_attr_setdetachstate
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define IPV6_2292HOPOPTS 3
#define ICMP_TYPE_ECHOREPLY 0
#define ifr_qlen ifr_ifru.ifru_ivalue
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define IPV6_PMTUDISC_PROBE 3
#define ACL_HASH_INCLUD_H 
#define SCHED_RR 2
#define ACL_XML2_IS_CDATA(x) (((x)->flag & ACL_XML2_F_CDATA))
#define ACL_HAS_FCNTL_LOCK 
#define ACL_FLOCK_STYLE_FLOCK 1
#define ACL_XML2_S_NXT 0
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define ACL_EVENT_SELECT 0
#define ACL_SCAN_FLAG_RECURSIVE (1 << 0)
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define __ASSERT_VOID_CAST (void)
#define IPV6_UNICAST_IF 76
#define __O_NOFOLLOW 0100000
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define ACL_MASTER_SERVER_ON_ACCEPT 17
#define MCAST_LEAVE_GROUP 45
#define SOL_BLUETOOTH 274
#define IFF_MULTICAST IFF_MULTICAST
#define __CFLOAT128 _Complex _Float128
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define _ASM_GENERIC_ERRNO_BASE_H 
#define ACL_FSTREAM(fp) ((fp)->fp)
#define acl_htable_reset_r acl_htable_reset
#define __DBL_MIN_10_EXP__ (-307)
#define ENOTTY 25
#define ACL_RING_PRED(c) ((c)->pred)
#define SO_ATTACH_REUSEPORT_CBPF 51
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define _CS_V6_ENV _CS_V6_ENV
#define __LP64__ 1
#define __U64_TYPE unsigned long int
#define ACL_APP_CTL_THREAD_EXIT_CTX ACL_MASTER_SERVER_THREAD_EXIT_CTX
#define __u_char_defined 
#define ACL_SLICE_FLAG_LP64_ALIGN (1 << 11)
#define ACL_JSON_T_STRING (1 << 5)
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define __FLT64X_HAS_INFINITY__ 1
#define IPV6_HOPOPTS 54
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define _POSIX_TRACE_EVENT_FILTER -1
#define __INT_LEAST16_TYPE__ short int
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define SO_SECURITY_AUTHENTICATION 22
#define ACL_MASTER_SERVER_CTX 24
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define h_addr h_addr_list[0]
#define MSG_WAITALL MSG_WAITALL
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define _XOPEN_XCU_VERSION 4
#define __O_NOATIME 01000000
#define ENOMEM 12
#define MSG_RST MSG_RST
#define _SYS_TIME_H 1
#define __ARM_64BIT_STATE 1
#define SOL_TIPC 271
#define _BITS_SOCKADDR_H 1
#define acl_spool_add acl_ioctl_add
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH _CS_PATH
#define ACL_RFC1035_TYPE_MINFO 14
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define IPV6_MULTICAST_IF 17
#define HAVE_MSGHDR_MSG_CONTROL 
#define _ACL_UCHAR_(c) ((unsigned char)(c))
#define IFF_PORTSEL IFF_PORTSEL
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define _XBS5_LPBIG_OFFBIG -1
#define IN_CLASSB_NSHIFT 16
#define DUP2 dup2
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define NFDBITS __NFDBITS
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define acl_spool_listen_ex acl_ioctl_listen_ex
#define S_IXOTH (S_IXGRP >> 3)
#define ACL_VSTREAM_SOCK(stream_ptr) ((stream_ptr)->fd.sock)
#define ACL_XML3_F_LEAF (1 << 4)
#define SOL_IPV6 41
#define __O_CLOEXEC 02000000
#define IP_MTU 14
#define ACL_ASTREAM_STATUS_OK 0
#define __ARM_FP 14
#define AF_ROSE PF_ROSE
#define ACL_VSTREAM_CLR_NS(x) ((x)->flag &= ~ACL_VSTREAM_FLAG_NS)
#define ACL_XML2_FLAG_XML_ENCODE (1 << 3)
#define _RPC_NETDB_H 1
#define ifr_netmask ifr_ifru.ifru_netmask
#define SOCK_DCCP SOCK_DCCP
#define _POSIX_JOB_CONTROL 1
#define __UINT_LEAST8_MAX__ 0xff
#define PF_SECURITY 14
#define IPV6_2292DSTOPTS 4
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define __ASM_GENERIC_BITS_PER_LONG 
#define ACL_MASTER_SERVER_ON_LISTEN 27
#define __CHAR32_TYPE__ unsigned int
#define _POSIX_THREAD_CPUTIME 0
#define __linux 1
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define ACL_AIO_CTL_END 0
#define AI_ADDRCONFIG 0x0020
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define ACL_XML3_S_LLT 1
#define _BITS_PTHREADTYPES_ARCH_H 1
#define ACL_IOCTL_INCLUDE_H 
#define __UINT32_MAX__ 0xffffffffU
#define ACL_MASTER_SERVER_DENY_INFO 25
#define ACL_SCAN_CTL_END 0
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define __SHRT_WIDTH__ 16
#define PF_SMC 43
#define __SIZE_T 
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define acl_stack_pop_tail acl_stack_pop
#define ACL_XML2_F_SELF_CL (1 << 3)
#define __S_ISVTX 01000
#define _BITS_POSIX_OPT_H 1
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define _ATFILE_SOURCE 1
#define MSG_CONFIRM MSG_CONFIRM
#define ACL_AIO_CTL_ACCEPT_FN 1
#define _SC_NETWORKING _SC_NETWORKING
#define F_EXLCK 4
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define MSG_FIN MSG_FIN
#define ACL_VSTREAM_CLR_US(x) ((x)->flag &= ~ACL_VSTREAM_FLAG_US)
#define SO_NO_CHECK 11
#define ifr_addr ifr_ifru.ifru_addr
#define PF_IEEE802154 36
#define ERESTART 85
#define ACL_DNS_ERR_UNPACK -15
#define EISNAM 120
#define UINT16_C(c) c
#define ACL_CFG_MACRO_INCLUDE_H 
#define ACL_CACHE_INCLUDE_H 
#define ENOKEY 126
#define ACL_CLOSE_ON_EXEC 1
#define ENOMSG 42
#define _PC_PRIO_IO _PC_PRIO_IO
#define EXIT_FAILURE 1
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define ACL_EVENT_XCPT (1 << 4)
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define AF_FILE PF_FILE
#define __SCHAR_MAX__ 0x7f
#define __USE_KERNEL_IPV6_DEFS 0
#define ACL_APP_CTL_CFG_STR ACL_MASTER_SERVER_STR_TABLE
#define __KERNEL_STRICT_NAMES 
#define __INT64_C(c) c ## L
#define SO_LINGER 13
#define __CHAR16_TYPE__ short unsigned int
#define SO_BROADCAST 6
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define ACL_APP_CTL_CFG_BOOL ACL_MASTER_SERVER_BOOL_TABLE
#define ACL_DNS_ERR_YX -6
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define __isascii(c) (((c) & ~0x7f) == 0)
#define __toascii(c) ((c) & 0x7f)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define ACL_VSTREAM_FLAG_BAD (ACL_VSTREAM_FLAG_ERR | ACL_VSTREAM_FLAG_EOF | ACL_VSTREAM_FLAG_TIMEOUT)
#define SO_TIMESTAMP_OLD 29
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define SOL_TLS 282
#define __attribute_used__ __attribute__ ((__used__))
#define S_IFMT __S_IFMT
#define FIOSETOWN 0x8901
#define AUT_STAT_BUSY 1
#define SO_LOCK_FILTER 44
#define _SC_VERSION _SC_VERSION
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define _ARPA_INET_H 1
#define IPPROTO_EGP IPPROTO_EGP
#define __USER_LABEL_PREFIX__ 
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define ACL_RFC1035_TYPE_AAAA 28
#define _BITS_ENDIANNESS_H 1
#define strrncmp acl_strrncmp
#define SCM_TIMESTAMPING_PKTINFO 58
#define ACL_IOCTL_CTL_EXIT_FN 6
#define __GLIBC__ 2
#define _SC_POLL _SC_POLL
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define ACL_MUTEX_MAXWAIT (~(unsigned int)0)
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define WCONTINUED 8
#define UINT8_MAX (255)
#define _IOT_ifconf _IOT(_IOTS(struct ifconf),1,0,0,0,0)
#define _LARGEFILE64_SOURCE 
#define __LDBL_HAS_INFINITY__ 1
#define _BITS_UINTN_IDENTITY_H 1
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define __fsfilcnt_t_defined 
#define __FP_FAST_FMAF32 1
#define ACL_VSTREAM_FLAG_SOCKPAIR (1 << 16)
#define AF_PHONET PF_PHONET
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define __FLT32_IS_IEC_60559__ 2
#define INET_ADDRSTRLEN 16
#define _BITS_TYPESIZES_H 1
#define TMP_MAX 238328
#define __GNU_LIBRARY__ 6
#define __FLT32_DIG__ 6
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define ACL_DNS_ERR_NO_SUPPORT -4
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define __RLIM_T_MATCHES_RLIM64_T 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define SO_TIMESTAMPING_OLD 37
#define ENOLINK 67
#define AF_WANPIPE PF_WANPIPE
#define ACL_YQUEUE_INCLUDE_H 
#define acl_binhash_iter_key ACL_BINHASH_ITER_KEY
#define PF_LLC 26
#define isblank_l(c,l) __isblank_l ((c), (l))
#define _XBS5_LP64_OFF64 1
#define ACL_DB_AUTO_COMMIT(_db_pool_) (_db_pool_ ? _db_pool_->db_info.auto_commit : 0)
#define ACL_MASTER_SERVER_ON_HANDSHAKE 19
#define s6_addr16 __in6_u.__u6_addr16
#define ACL_PTHREAD_POOL_DEF_THREADS 100
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __DEV_T_TYPE __UQUAD_TYPE
#define ACL_AIO_FLAG_DEAD (1 << 4)
#define ACL_VSTREAM_IS_MS(x) (((x)->flag & ACL_VSTREAM_FLAG_MS) != 0)
#define ACL_AIO_CTL_READ_HOOK_DEL 15
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __STDC_UTF_16__ 1
#define ACL_HOSTNAME_TYPE_SOA 4
#define __nonnull(params) __attribute_nonnull__ (params)
#define s6_addr32 __in6_u.__u6_addr32
#define ACL_TEST_MACRO_INCLUDE_H 
#define le32toh(x) __uint32_identity (x)
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __GLIBC_USE_IEC_60559_BFP_EXT 0
#define acl_binhash_foreach ACL_BINHASH_FOREACH
#define __O_LARGEFILE 0
#define ACL_AIO_CTL_STREAM 10
#define EDQUOT 122
#define SCM_TXTIME SO_TXTIME
#define ACL_XML3_S_MCMT 14
#define AT_SYMLINK_FOLLOW 0x400
#define st_ctime st_ctim.tv_sec
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define acl_vstream_ispipe(vp) ((vp)->pid != 0)
#define ACL_DEFINE_INCLUDE_H 
#define ACL_VSTREAM_SET_EOF(stream_ptr) do { ACL_VSTREAM *__stream_ptr = stream_ptr; __stream_ptr->flag |= ACL_VSTREAM_FLAG_EOF; } while (0)
#define ACL_RES_ERR_READ -101
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define __FLT32X_HAS_INFINITY__ 1
#define SO_ACCEPTCONN 30
#define __INT32_MAX__ 0x7fffffff
#define __GLIBC_USE_DEPRECATED_GETS 0
#define ACL_FIFO_INCLUDE_H 
#define _POSIX_V7_LPBIG_OFFBIG -1
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define ACL_VSTREAM_IN (&acl_vstream_fstd[0])
#define __INT_WIDTH__ 32
#define __S_IFCHR 0020000
#define acl_ring_last_appl ACL_RING_LAST_APPL
#define __SIZE_WIDTH__ 64
#define S_ISVTX __S_ISVTX
#define ENOLCK 37
#define __STDC_IEC_559__ 1
#define SO_TYPE 3
#define __STDC_ISO_10646__ 201706L
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define ACL_DNS_ERR_DENY -5
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 2
#define LOCK_EX 2
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define ACL_EMFILE EMFILE
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define _FEATURES_H 1
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define ACL_VSTREAM_IS_US(x) (((x)->flag & ACL_VSTREAM_FLAG_US) != 0)
#define __FLT128_IS_IEC_60559__ 2
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define ESTALE 116
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define IPV6_FREEBIND 78
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define ICMP_STATUS_UNREACH (1<<1)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define PTRDIFF_MAX (9223372036854775807L)
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define _XBS5_ILP32_OFF32 -1
#define VAR_AUT_LOG_PRINT 0x0001
#define IP_ORIGDSTADDR 20
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define F_OK 0
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define IPV6_DSTOPTS 59
#define __attribute_const__ __attribute__ ((__const__))
#define ACL_CACHE2_INCLUDE_H 
#define _REENTRANT 1
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define acl_pthread_attr_destroy pthread_attr_destroy
#define ACL_FILE_EOF (1 << 0)
#define htobe32(x) __bswap_32 (x)
#define AF_BLUETOOTH PF_BLUETOOTH
#define L_tmpnam 20
#define ___int_wchar_t_h 
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define isascii(c) __isascii (c)
#define __GNUC__ 11
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define IPPROTO_TCP IPPROTO_TCP
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ACL_SCANF(format_idx,arg_idx) __attribute__((__format__ (__scanf__, (format_idx), (arg_idx))))
#define PF_ISDN 34
#define POSIX_FADV_WILLNEED 3
#define ACL_SANE_INET_INCLUDE_H 
#define AF_NFC PF_NFC
#define LOCK_NB 4
#define __daddr_t_defined 
#define ACL_NETDB_INCLUDE_H 
#define ACL_BASE64_CODE_INCLUDE_H 
#define acl_fputc acl_putc
#define MSG_CTRUNC MSG_CTRUNC
#define EAI_MEMORY -10
#define MSG_PROXY MSG_PROXY
#define O_DSYNC __O_DSYNC
#define acl_stack_push acl_stack_append
#define ACL_MASTER_FLOW_WRITE 4
#define SO_DETACH_REUSEPORT_BPF 68
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define ACL_PATH_BSHELL "/bin/sh"
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define IPV6_RECVHOPOPTS 53
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define STDERR_FILENO 2
#define ACL_XML2_F_LEAF (1 << 4)
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define ACL_BINHASH_ITER_VALUE(iter) ((iter).ptr->value)
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define __FLT64_MAX_10_EXP__ 308
#define __GLIBC_USE_LIB_EXT2 0
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define WTERMSIG(status) __WTERMSIG (status)
#define ACL_MSG_INCLUDE_H 
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define acl_mycalloc(nmemb,size) acl_calloc_glue(__FILE__, __LINE__, nmemb, size)
#define __DBL_IS_IEC_60559__ 2
#define AF_SECURITY PF_SECURITY
#define __FLT32_HAS_INFINITY__ 1
#define ACL_INET_FLAG_FASTOPEN 1 << 2
#define pkt_chat host->chat
#define ACL_SEM_INCLUDE_H 
#define LOCK_SH 1
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define ACL_VSTREAM_PEER(stream_ptr) ((stream_ptr)->addr_peer ? (stream_ptr)->addr_peer : "")
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define IP_MTU_DISCOVER 10
#define ACL_MYMALLOC_INCLUDE_H 
#define ITIMER_PROF ITIMER_PROF
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define __USE_XOPEN2K 1
#define LOCK_UN 8
#define _SC_2_VERSION _SC_2_VERSION
#define ACL_INTERNAL_LOCK ACL_FLOCK_STYLE_FLOCK
#define ACL_VSTRING_INCLUDE_H 
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define ACL_EVENT_TIMEOUT ACL_EVENT_RW_TIMEOUT
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define __FD_SETSIZE 1024
#define ACL_DEBUG_EVENT (ACL_DEBUG_INTER_BASE + 4)
#define ACL_SPOOL_CTL_DELAY_SEC ACL_IOCTL_CTL_DELAY_SEC
#define ACL_VSTREAM_POPEN_SHELL 6
#define h_errno (*__h_errno_location ())
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define ACL_SINGLE_PARAMS_INCLUDE_H 
#define __FLT64_HAS_DENORM__ 1
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define EBADMSG 74
#define __USE_POSIX199506 1
#define __LDBL_HAS_DENORM__ 1
#define acl_mystr_strip acl_strstrip
#define ifr_map ifr_ifru.ifru_map
#define ACL_VSTREAM_BUFSIZE 4096
#define __S_IFREG 0100000
#define _GCC_WRAP_STDINT_H 
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define acl_vstream_fclose acl_vstream_close
#define POSIX_FADV_NORMAL 0
#define ACL_CONNECT_INCLUDE_H 
#define ACL_HTABLE_FLAG_KEY_LOWER (1 << 3)
#define S_IFCHR __S_IFCHR
#define __dev_t_defined 
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define B_TRUE 1
#define __cleanup_fct_attribute 
#define ACL_DEBUG_INTER_BASE 0
#define _IOT_ifreq_int _IOT(_IOTS(char),IFNAMSIZ,_IOTS(int),1,0,0)
#define SO_DONTROUTE 5
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define ACL_FOREACH(iter,container) for ((container)->iter_head(&(iter), (container)); (iter).ptr; (container)->iter_next(&(iter), (container)))
#define AUT_SET_STR(__test_line__,__name__,__value__) do { __value__ = aut_line_getvalue(__test_line__, __name__); if (__value__ == NULL) { printf("%s(%d): getvalue error for %s, line=%d\n", __FILE__, __LINE__, __name__, aut_line_number(__test_line__)); return (-1); } } while (0)
#define SO_PEERNAME 28
#define ACL_MASTER_STAT_AVAIL 1
#define ACL_HOST_PORT_INCLUDE_H 
#define IP_PMTUDISC_WANT 1
#define IP_RECVERR 11
#define ACL_XML2_S_MTXT 13
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define ACL_INET_FLAG_NONE 0
#define ACL_VSTREAM_IS_NS(x) (((x)->flag & ACL_VSTREAM_FLAG_NS) != 0)
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define isspace_l(c,l) __isspace_l ((c), (l))
#define ACL_RING_FOREACH_REVERSE(iter,head_ptr) for ((iter).ptr = acl_ring_pred((head_ptr)); (iter).ptr != (head_ptr); (iter).ptr = acl_ring_pred((iter).ptr))
#define ACL_EVENT_TIME (1 << 5)
#define acl_uint64 unsigned long long int
#define ETOOMANYREFS 109
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define __itimerspec_defined 1
#define __fortify_function __extern_always_inline __attribute_artificial__
#define acl_array_destroy acl_array_free
#define MCAST_INCLUDE 1
#define ACL_XML3_S_RTAG 8
#define IPV6_UNICAST_HOPS 16
#define AVL_AFTER (1)
#define __STD_AFX_INCLUDE_H__ 
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define PF_QIPCRTR 42
#define PF_PHONET 35
#define __USECONDS_T_TYPE __U32_TYPE
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define ACL_XML_FLAG_XML_DECODE (1 << 2)
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define ENONET 64
#define FD_CLOEXEC 1
#define _LINUX_STDDEF_H 
#define ACL_EHOSTUNREACH EHOSTUNREACH
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define ACL_XML_S_NXT 0
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define AF_AX25 PF_AX25
#define _PC_VDISABLE _PC_VDISABLE
#define SO_COOKIE 57
#define ACL_SET_UGID_INCLUDE_H 
#define _BITS_STDIO2_H 1
#define _SC_BARRIERS _SC_BARRIERS
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define st_atime st_atim.tv_sec
#define __stub___compat_uselib 
#define ACL_BITS_MASK_CLR(number,mask) (ACL_BITS_MASK_FD_BYTE((number), (mask)) &= ~ACL_BITS_MASK_FD_BIT(number))
#define _POSIX_CPUTIME 0
#define AVL_XBALANCE(n) ((int)(((n)->avl_pcb & 3) - 1))
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define __ARM_ALIGN_MAX_PWR 28
#define ACL_AIO_CTL_TIMEO_HOOK_ADD 20
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define ACL_IFCONF_INCLUDE_H 
#define SOL_DECNET 261
#define __SIZEOF_WINT_T__ 4
#define INT_LEAST16_MIN (-32767-1)
#define ACL_AIO_CTL_CONNECT_HOOK_DEL 23
#define ifr_flags ifr_ifru.ifru_flags
#define __f32x(x) x ##f32x
#define AVL_DATA2NODE(d,o) ((struct avl_node *)((uintptr_t)(d) + (o)))
#define ENOTNAM 118
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define __U16_TYPE unsigned short int
#define ACL_BINHASH_FLAG_SLICE3 (1 << 4)
#define ACL_IPLINK_INCLUDE_H 
#define _STDIO_H 1
#define ENOSPC 28
#define SUN_LEN(ptr) ((size_t) (((struct sockaddr_un *) 0)->sun_path) + strlen ((ptr)->sun_path))
#define UINTPTR_MAX (18446744073709551615UL)
#define _PTRDIFF_T 
#define ACL_RES_ERR_RTMO -102
#define acl_htable_delete_r acl_htable_delete
#define __ASM_GENERIC_POSIX_TYPES_H 
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define __INT_LEAST64_TYPE__ long int
#define __FLT_MIN_EXP__ (-125)
#define WEXITED 4
#define ACL_ENOBUFS ENOBUFS
#define F_GETOWN __F_GETOWN
#define IPV6_V6ONLY 26
#define IFF_DYNAMIC IFF_DYNAMIC
#define ACL_AIO_INCLUDE_H 
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define ACL_AIO_SET_CTX(stream_ptr,_ctx_) do { ACL_ASTREAM *__stream_ptr = stream_ptr; __stream_ptr->context = _ctx_; } while(0)
#define AF_PPPOX PF_PPPOX
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define IPV6_RECVRTHDR 56
#define alloca(size) __builtin_alloca (size)
#define ACL_VSTREAM_CTL_CTX ACL_VSTREAM_CTL_CONTEXT
#define IP_MULTICAST_ALL 49
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define acl_iter_info ACL_ITER_INFO
#define PF_IRDA 23
#define _POSIX_PTHREAD_SEMANTICS 1
#define __WINT_WIDTH__ 32
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define ACL_XML2_S_MCMT 14
#define ACL_XML_F_CDATA (1 << 5)
#define acl_unused __attribute__ ((__unused__))
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define FASYNC O_ASYNC
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define ifr_mtu ifr_ifru.ifru_mtu
#define IPV6_RECVHOPLIMIT 51
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define __ARM_FP16_ARGS 1
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define ENOBUFS 105
#define IPV6_RECVTCLASS 66
#define ACL_CFG_SET_ITEM_STR(_xcp_,_name_,_obj_) do { ACL_XINETD_CFG_PARSER *_tmp_xcp_ = _xcp_; const char *_ptr_; _ptr_ = acl_xinetd_cfg_get(_tmp_xcp_, _name_); if (_ptr_ && *_ptr_) { _obj_ = acl_mystrdup(_ptr_); if (_obj_ == NULL) acl_msg_fatal("%s(%d): acl_mystrdup error=%s for %s", __FILE__, __LINE__, strerror(errno), _ptr_); } } while (0);
#define _ANSI_STDDEF_H 
#define __INT_LEAST32_MAX__ 0x7fffffff
#define O_RSYNC O_SYNC
#define WINT_MIN (0u)
#define ACL_VBUF_TO_APPL(vbuf_ptr,app_type,vbuf_member) ((app_type *) (((char *) (vbuf_ptr)) - offsetof(app_type,vbuf_member)))
#define __key_t_defined 
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define ACL_VSTREAM_POPEN_END 0
#define __unix__ 1
#define ACL_VSTREAM_POPEN_ENV 5
#define SO_RCVLOWAT 18
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define IPV6_RECVDSTOPTS 58
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define AVL_SETCHILD(n,c) ((n)->avl_pcb = (uintptr_t)(((n)->avl_pcb & ~4) | ((c) << 2)))
#define IPPROTO_MTP IPPROTO_MTP
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define ACL_ISCNTRL(c) iscntrl(_ACL_UCHAR_(c))
#define _XOPEN_LEGACY 1
#define __HAVE_DISTINCT_FLOAT64 0
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define UTIME_NOW ((1l << 30) - 1l)
#define __ASM_GENERIC_SOCKET_H 
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define __FLT_EVAL_METHOD_C99__ 0
#define acl_mystrdup(str) acl_strdup_glue(__FILE__, __LINE__, (str))
#define ACL_RFC1035_TYPE_ALL 255
#define ACL_MASTER_LISTEN_FD 6
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define CLOCK_REALTIME_ALARM 8
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define ACL_DEFINE_BSD_INCLUDE_H 
#define ifr_newname ifr_ifru.ifru_newname
#define ACL_XML_S_MTAG 12
#define __FLT64_MIN_EXP__ (-1021)
#define acl_ring_foreach ACL_RING_FOREACH
#define IPV6_RECVERR 25
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PF_MAX 46
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define acl_mystr_trim acl_strtrim
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define IP_RECVTOS 13
#define SO_PEERSEC 31
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define isalnum(c) __isctype((c), _ISalnum)
#define __FDS_BITS(set) ((set)->__fds_bits)
#define ACL_XML2_S_CDATA 16
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define ACL_VBUF_FLAG_EOF (1<<1)
#define IFF_NOARP IFF_NOARP
#define ACL_PTHREAD_POOL_DEF_IDLE 0
#define __FLT16_MIN_10_EXP__ (-4)
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define ACL_RING_PREPEND(ring_in,entry_in) do { ACL_RING *ring_ptr = (ring_in), *entry_ptr = (entry_in); entry_ptr->pred = ring_ptr->pred; entry_ptr->succ = ring_ptr; entry_ptr->parent = ring_ptr->parent; ring_ptr->pred->succ = entry_ptr; ring_ptr->pred = entry_ptr; ring_ptr->parent->len++; } while (0)
#define ifr_data ifr_ifru.ifru_data
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define ACL_VBUF_INCLUDE_H 
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define EIDRM 43
#define PF_ROSE 11
#define ACL_MASTER_SERVER_THREAD_INIT 20
#define ACL_ENOMEM ENOMEM
#define _PC_NAME_MAX _PC_NAME_MAX
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define acl_fifo_pop acl_fifo_pop_front
#define ACL_RFC1035_TYPE_HINFO 13
#define PF_INET6 10
#define PATH_SEP_S "/"
#define ACL_VBUF_FLAG_ERR (1<<0)
#define __USE_POSIX2 1
#define IP_TRANSPARENT 19
#define acl_binhash_iter_value ACL_BINHASH_ITER_VALUE
#define ACL_APP_CTL_PRE_JAIL ACL_MASTER_SERVER_PRE_INIT
#define ACL_BTREE_INCLUDE_H 
#define ACL_VBUF_FLAG_FIXED (1<<3)
#define acl_vstring_fgets_nonl_bound(s,p,l) (acl_vstring_gets_nonl_bound((s), (p), (l)) == ACL_VSTREAM_EOF ? 0 : (s))
#define AUT_FLAG_LOOP_BEGIN 1
#define _POSIX_V7_ILP32_OFF32 -1
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define AVL_NODE2DATA(n,o) ((void *)((uintptr_t)(n) - (o)))
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define IPV6_AUTOFLOWLABEL 70
#define ACL_MASTER_SERVER_UNLIMITED 15
#define PF_APPLETALK 5
#define IPV6_2292PKTINFO 2
#define ACL_IPITEM ACL_DITEM
#define __FLT_MANT_DIG__ 24
#define AF_IUCV PF_IUCV
#define HAS_UINTPTR 
#define __VERSION__ "11.3.0"
#define ACL_VSTREAM_FLAG_MS (1 << 20)
#define __IOV_MAX 1024
#define ACL_AIO_FLAG_IOCP_CLOSE (1 << 0)
#define S_ISFIFO(mode) __S_ISTYPE((mode), __S_IFIFO)
#define IP_PKTINFO 8
#define __UINT64_C(c) c ## UL
#define ACL_ISPRINT(c) isprint(_ACL_UCHAR_(c))
#define _SYS_CDEFS_H 1
#define ACL_VSTREAM_FLAG_NS (1 << 22)
#define isprint(c) __isctype((c), _ISprint)
#define ACL_DB_ERR_CALLBACK 1
#define EBFONT 59
#define acl_xml_parse acl_xml_update
#define ACL_VSTREAM_TYPE_FILE (1 << 1)
#define ACL_AIO_CTL_KEEP_READ 13
#define AUT_FLAG_STOP 9
#define _POSIX_VERSION 200809L
#define _STDC_PREDEF_H 1
#define __INT_WCHAR_T_H 
#define ACL_JSON_T_A_STRING (1 << 0)
#define SOCK_DGRAM SOCK_DGRAM
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define ACL_EVENT_READ (1 << 0)
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define ENOTSOCK 88
#define __ARM_FEATURE_FMA 1
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define O_RDWR 02
#define _SYS_SOCKET_H 1
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define ACL_DBERR_INCLUDE_H 
#define _T_PTRDIFF_ 
#define ACL_VSTREAM_FLAG_RW (1 << 2)
#define ifc_buf ifc_ifcu.ifcu_buf
#define IFF_NOTRAILERS IFF_NOTRAILERS
#define PF_FILE PF_LOCAL
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define acl_pthread_attr_setstacksize pthread_attr_setstacksize
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define __FLT128_MAX_EXP__ 16384
#define ACL_JSON_T_PAIR (1 << 14)
#define __ACL_XMLCODE_INCLUDE_H__ 
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define ACL_ASTREAM_STATUS_CONNECT_TIMEOUT 3
#define __FLT32_MANT_DIG__ 24
#define ACL_VSTREAM_FLAG_US (1 << 21)
#define AUT_FLAG_LOOP_CONTINUE 3
#define __STDC_IEC_60559_BFP__ 201404L
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define __S_IFDIR 0040000
#define __SIZE_T__ 
#define __stub_gtty 
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define O_DIRECTORY __O_DIRECTORY
#define acl_htable_walk_r acl_htable_walk
#define acl_vstring_fgets(s,p) (acl_vstring_gets((s), (p)) == ACL_VSTREAM_EOF ? 0 : (s))
#define IPPORT_RESERVED 1024
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define ACL_CONFIG_STR_TABLE ACL_CFG_STR_TABLE
#define MSG_BATCH MSG_BATCH
#define ACL_XML_S_ATTR 9
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define AI_ALL 0x0010
#define acl_vbuf_timeout(v) ((v)->flags & ACL_VBUF_FLAG_TIMEOUT)
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define FFSYNC O_FSYNC
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define ACL_BINHASH_FLAG_KEY_REUSE (1 << 0)
#define S_IWRITE S_IWUSR
#define __wur __attribute_warn_unused_result__
#define __FLT16_DIG__ 3
#define ELOOP 40
#define AUT_FLAG_LOOP_BREAK 2
#define ACL_HOSTNAME_TYPE_TXT 6
#define __FLT128_HAS_DENORM__ 1
#define ACL_FHANDLE_O_EXCL (1 << 6)
#define F_SETFL 4
#define ACL_XML_S_MTXT 13
#define ACL_XML2_S_RGT 7
#define VAR_AUT_PAUSE "PAUSE"
#define acl_spool_iswset acl_ioctl_iswset
#define __off64_t_defined 
#define __F_GETSIG 11
#define acl_spool_enable_listen acl_ioctl_enable_listen
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define IN_CLASSB_MAX 65536
#define acl_spool_isset acl_ioctl_isset
#define __ORDER_PDP_ENDIAN__ 3412
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define EL2HLT 51
#define ACL_SOCKET_WBUF_SIZE 204800
#define VAR_AUT_ELSE "ELSE"
#define ACL_FLOCK_OP_BITS (ACL_FLOCK_OP_SHARED | ACL_FLOCK_OP_EXCLUSIVE | ACL_FLOCK_OP_NOWAIT)
#define __socklen_t_defined 
#define s6_addr __in6_u.__u6_addr8
#define _UNISTD_H 1
#define PF_ROUTE PF_NETLINK
#define __have_pthread_attr_t 1
#define ACL_EVENT_WMSG 3
#define ACL_XML3_F_META_CM (1 << 1)
#define ACL_FHANDLE_S_FLOCK_ON (1 << 0)
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define ACL_PTHREAD_PROCESS_PRIVATE 0
#define IPV6_HOPLIMIT 52
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define htole32(x) __uint32_identity (x)
#define O_RDONLY 00
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define _STRUCT_TIMESPEC 1
#define IPPROTO_UDP IPPROTO_UDP
#define ACL_VBUF_SPACE acl_vbuf_space
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define RAND_MAX 2147483647
#define ACL_XML2_F_CDATA (1 << 5)
#define ACL_AQUEUE_ERR_UNLOCK 2
#define ACL_PTHREAD_RWLOCK_H 
#define ACL_XML3_F_META_EM (1 << 2)
#define ACL_XML_S_RTAG 8
#define F_SETLK F_SETLK64
#define _SC_PIPE _SC_PIPE
#define acl_ring_foreach_reverse ACL_RING_FOREACH_REVERSE
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define __INT16_MAX__ 0x7fff
#define __THROWNL __attribute__ ((__nothrow__))
#define _BSD_SIZE_T_ 
#define __SIZE_TYPE__ long unsigned int
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define AF_KEY PF_KEY
#define acl_vbuf_error(v) ((v)->flags & ACL_VBUF_FLAG_BAD)
#define __FLT_IS_IEC_60559__ 2
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define ACL_EVENT_POLL 1
#define AF_INET PF_INET
#define IN_CLASSA_NET 0xff000000
#define ACL_DNS_INCLUDE_H 
#define F_WRLCK 1
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define VAR_AUT_LOG "LOG"
#define SOL_NETBEUI 267
#define __HAVE_DISTINCT_FLOAT128 0
#define IPV6_PMTUDISC_DO 2
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define ACL_DEBUG_INCLUDE_H 
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define __F_GETOWN_EX 16
#define ACL_IPLINK ACL_DLINK
#define SIOCGSTAMP_OLD 0x8906
#define ACL_AIO_CTL_WRITE_HOOK_DEL 17
#define IFF_LOOPBACK IFF_LOOPBACK
#define isupper_l(c,l) __isupper_l ((c), (l))
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define ACL_FLOCK_OP_NOWAIT 4
#define ACL_RFC1035_TYPE_PTR 12
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define ACL_MYLOG_INCLUDE_H 
#define F_SETLK64 6
#define AVL_SETBALANCE(n,b) ((n)->avl_pcb = (uintptr_t)((((n)->avl_pcb & ~3) | ((b) + 1))))
#define ACL_MASTER_SERVER_TIME_TABLE 4
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define _SYS_TYPES_H 1
#define ACL_VBUF_PRINT_INCLUDE_H 
#define ACL_METER_TIME_INCLUDE_H 
#define AI_V4MAPPED 0x0008
#define acl_pthread_mutex_init pthread_mutex_init
#define SOL_IRDA 266
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define __UINTMAX_C(c) c ## UL
#define O_SYNC 04010000
#define ACL_HTABLE_FLAG_MSLOOK (1 << 2)
#define SO_ERROR 4
#define IP_MULTICAST_IF 32
#define ACL_APP_CTL_THREAD_EXIT ACL_MASTER_SERVER_THREAD_EXIT
#define PTHREAD_STACK_MIN 131072
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_LEAVE_GROUP 21
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define ENAVAIL 119
#define ACL_VSTRING_LEN(vp) (size_t) ((vp)->vbuf.ptr - (vp)->vbuf.data)
#define SO_SNDBUFFORCE 32
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define ACL_VSTREAM_CLR_MS(x) ((x)->flag &= ~ACL_VSTREAM_FLAG_MS)
#define ACL_RFC1035_CLASS_CH 3
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define isprint_l(c,l) __isprint_l ((c), (l))
#define ACL_RFC1035_CLASS_CS 2
#define ACL_VSTREAM_ERRNO(stream_ptr) ((stream_ptr)->errnum)
#define ACL_HTABLE_CTL_HASH_FN 2
#define EMFILE 24
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define _PATH_SERVICES "/etc/services"
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define _LFS64_LARGEFILE 1
#define PF_NETBEUI 13
#define __GLIBC_USE_ISOC2X 0
#define ACL_XML3_F_META_QM (1 << 0)
#define ACL_MSGIO_INCLUDE_H 
#define ACL_VSTREAM_FLAG_CONNECTING (1 << 18)
#define _LFS64_ASYNCHRONOUS_IO 1
#define __va_arg_pack() __builtin_va_arg_pack ()
#define ACL_BITS_MASK_BYTE_COUNT(mask) ((mask)->data_len)
#define _BITS_WCHAR_H 1
#define IP_XFRM_POLICY 17
#define ACL_MASTER_SERVER_END 0
#define ACL_MASTER_STAT_SIGHUP_OK 2
#define __iovec_defined 1
#define ACL_IOCTL_CTL_THREAD_STACKSIZE 9
#define ACL_THREADS_PARAMS_INCLUDE_H 
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define AVL_NEXT(tree,node) avl_walk(tree, node, AVL_AFTER)
#define acl_pthread_mutexattr_destroy pthread_mutexattr_destroy
#define IN_CLASSA_MAX 128
#define AF_IPX PF_IPX
#define ACL_DEFINE_WIN32_INCLUDE_H 
#define ACL_DB_ERR_EMPTY 102
#define ACL_HTABLE_ITER_VALUE(iter) ((iter).ptr->value)
#define ACL_PATH_STDPATH "/usr/bin:/usr/sbin"
#define IPV6_RECVPATHMTU 60
#define SO_DETACH_FILTER 27
#define ACL_RFC1035_CLASS_HS 4
#define INTPTR_MIN (-9223372036854775807L-1)
#define AF_MPLS PF_MPLS
#define __CFLOAT32X _Complex _Float32x
#define INT8_C(c) c
#define ENOMEDIUM 123
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define ACL_RFC1035_CLASS_IN 1
#define __UWORD_TYPE unsigned long int
#define O_NDELAY O_NONBLOCK
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define ACL_VSTREAM_INCLUDE_H 
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __FLT32X_MIN_EXP__ (-1021)
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define ACL_XML3_S_ATTR 9
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __timer_t_defined 1
#define MSG_OOB MSG_OOB
#define ACL_VSTREAM_CTL_WRITE_FN 2
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define _SYS_STAT_H 1
#define ACL_BITS_MASK_ZERO(mask) memset((mask)->data, 0, (mask)->data_len);
#define ACL_HAS_FLOCK_LOCK 
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define ACL_DEFINE_LINUX_INCLUDE_H 
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define ACL_VSTREAM_NET_INCLUDE_H 
#define acl_spool_loop acl_ioctl_loop
#define ACL_AIO_PARAMS_INCLUDE_H 
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define SIOCSPGRP 0x8902
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define SO_ZEROCOPY 60
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define SO_BSDCOMPAT 14
#define ACL_ROOT_PATH "/bin:/usr/bin:/sbin:/usr/sbin"
#define ACL_FLOCK_STYLE_FCNTL 2
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define SO_BUSY_POLL_BUDGET 70
#define ACL_VBUF_FLAG_DBUF (1<<5)
#define F_DUPFD_CLOEXEC 1030
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __WCHAR_T__ 
#define _PC_MAX_CANON _PC_MAX_CANON
#define __SIZEOF_SIZE_T__ 8
#define __glibc_objsize0(__o) __bos0 (__o)
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __ASSERT_FUNCTION __extension__ __PRETTY_FUNCTION__
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define acl_ioctl_app_main acl_threads_server_main
#define ACL_DNS_OK_CACHE 1
#define ACL_MISC_INCLUDE_H 
#define ACL_IOCTL_CTL_INIT_FN 5
#define ACL_DBH_STATUS_NULL 0
#define ACL_AIO_CTL_READ_NESTED 11
#define NI_DGRAM 16
#define L_INCR SEEK_CUR
#define MCAST_UNBLOCK_SOURCE 44
#define IP_HDRINCL 3
#define ICMP_HOST_NEXT(head,curr) (acl_ring_succ(curr) != (head) ? RING_TO_HOST(acl_ring_succ(curr)) : NULL)
#define _BITS_PTHREADTYPES_COMMON_H 1
#define IPV6_TCLASS 67
#define EPROTOTYPE 91
#define __UINT_FAST16_TYPE__ long unsigned int
#define ACL_XML_INCLUDE_H 
#define ACL_DB_ERR_SELECT 100
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define acl_pthread_once pthread_once
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define ACL_FHANDLE_INCLUDE_H 
#define ACL_FHANDLE_S_MUTEX_ON (1 << 1)
#define _POSIX_RAW_SOCKETS 200809L
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __ss_aligntype unsigned long int
#define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define ACL_XML2_S_LTAG 5
#define acl_pthread_setspecific pthread_setspecific
#define __FLT16_DECIMAL_DIG__ 5
#define _STRINGS_H 1
#define __F_SETOWN 8
#define _VA_LIST_DEFINED 
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define ACL_FILEFD int
#define __ATOMIC_CONSUME 1
#define __BLKSIZE_T_TYPE __S32_TYPE
#define PF_ECONET 19
#define __INT_LEAST16_MAX__ 0x7fff
#define ACL_EXEC_COMMAND_INCLUDE_H 
#define acl_spool_connect acl_ioctl_connect
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define EDEADLK 35
#define acl_vstring_fgets_null(s,p) (acl_vstring_gets_null((s), (p)) == ACL_VSTREAM_EOF ? 0 : (s))
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define ACL_MASTER_STAT_START_ERR 5
#define __SIG_ATOMIC_WIDTH__ 32
#define ACL_SAFE_OPEN_H_INCLUDE_H 
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define INT64_MAX (__INT64_C(9223372036854775807))
#define htole16(x) __uint16_identity (x)
#define ACL_SPOOL_CTL_THREAD_IDLE ACL_IOCTL_CTL_THREAD_IDLE
#define __INT16_TYPE__ short int
#define ACL_TOKEN_F_PASS (1 << 1)
#define ACL_ACCESS_INCLUDE_H 
#define EDOM 33
#define ACL_DBSQL_INCLUDE_H 
#define _POSIX_FSYNC 200809L
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define ACL_PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define NI_NUMERICSERV 2
#define linux 1
#define SOL_DCCP 269
#define ACL_MASTER_SERVER_STR_TABLE 2
#define ntohl(x) __bswap_32 (x)
#define ntohs(x) __bswap_16 (x)
#define AVL_BEFORE (0)
#define ACL_ARGV_INCLUDE_H 
#define ACL_AVL_H 
#define ACL_XML_S_LLT 1
#define ____FILE_defined 1
#define ACL_RFC1035_TYPE_WKS 11
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define __HAVE_FLOAT16 0
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define _SC_NL_NMAX _SC_NL_NMAX
#define F_SETLKW F_SETLKW64
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define O_LARGEFILE __O_LARGEFILE
#define ALIGN_TYPE size_t
#define ACL_FHANDLE_F_LOCK (1 << 0)
#define ACL_ISASCII(c) isascii(_ACL_UCHAR_(c))
#define __FLT32_MIN_10_EXP__ (-37)
#define MCAST_MSFILTER 48
#define _LP64 1
#define __FLT32X_DIG__ 15
#define _VA_LIST_ 
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define ACL_XML_S_AVAL 10
#define _SC_PII_XTI _SC_PII_XTI
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define ACL_ISGRAPH(c) isgraph(_ACL_UCHAR_(c))
#define ACL_FOREACH_REVERSE(iter,container) for ((container)->iter_tail(&(iter), (container)); (iter).ptr; (container)->iter_prev(&(iter), (container)))
#define ENAMETOOLONG 36
#define _BITS_STDINT_INTN_H 1
#define SOCK_RAW SOCK_RAW
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DBL_HAS_QUIET_NAN__ 1
#define ACL_EVENT_ERROR ACL_EVENT_XCPT
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define acl_spool_ctl acl_ioctl_ctl
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define ACL_SOCKET_INVALID (int) -1
#define RING_TO_HOST(r) ((ICMP_HOST *) ((char *) (r) - offsetof(ICMP_HOST, host_ring)))
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define IPPROTO_MPLS IPPROTO_MPLS
#define ACL_VBUF_EOF (-1)
#define ACL_DBUF_POOL_INCLUDE_H 
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define le64toh(x) __uint64_identity (x)
#define PF_AX25 3
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define READ_RETURN(_x_) do { acl_aio_read(astream); return(_x_); } while (0)
#define __FLT16_MANT_DIG__ 11
#define ESOCKTNOSUPPORT 94
#define AUT_FLAG_IF 5
#define AF_LOCAL PF_LOCAL
#define __INTPTR_TYPE__ long int
#define __WCHAR_TYPE__ unsigned int
#define __SIZEOF_FLOAT__ 4
#define __SLONGWORD_TYPE long int
#define acl_pthread_cond_destroy pthread_cond_destroy
#define ACL_DO_GRIPE 1
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define ACL_ALLOCATOR_CTL_END 0
#define ACL_XML2_F_META (ACL_XML2_F_META_QM | ACL_XML2_F_META_CM | ACL_XML2_F_META_EM)
#define IP_RECVTTL 12
#define S_ISBLK(mode) __S_ISTYPE((mode), __S_IFBLK)
#define AUT_STAT_FREE 0
#define __pic__ 2
#define __S_IFLNK 0120000
#define __ARM_ARCH_8A 1
#define acl_spool_create acl_ioctl_create
#define __stub_chflags 
#define ACL_BITS_MASK_SET(number,mask) (ACL_BITS_MASK_FD_BYTE((number), (mask)) |= ACL_BITS_MASK_FD_BIT(number))
#define EDOTDOT 73
#define __FLT32_DECIMAL_DIG__ 9
#define __O_DIRECT 0200000
#define ACL_GETOPT_INCLUDE_H 
#define __USE_POSIX 1
#define PF_NFC 39
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define ACL_PASS_ON_EXEC 0
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define acl_htable_foreach_reverse ACL_HTABLE_FOREACH_REVERSE
#define ACL_VSTREAM_TYPE_SOCK (1 << 0)
#define ACL_MASTER_SERVER_EXIT 13
#define SO_PEEK_OFF 42
#define __FLT_MAX_10_EXP__ 38
#define ACL_HOSTNAME_TYPE_IPV4 0
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define ACL_HOSTNAME_TYPE_IPV6 1
#define ACL_DLL_INCLUDE_H 
#define ACL_MASTER_SERVER_EXIT_TIMER 26
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define WNOWAIT 0x01000000
#define ACL_RING_APPEND(ring_in,entry_in) do { ACL_RING *ring_ptr = (ring_in), *entry_ptr = (entry_in); entry_ptr->succ = ring_ptr->succ; entry_ptr->pred = ring_ptr; entry_ptr->parent = ring_ptr->parent; ring_ptr->succ->pred = entry_ptr; ring_ptr->succ = entry_ptr; ring_ptr->parent->len++; } while (0)
#define AF_ALG PF_ALG
#define AF_QIPCRTR PF_QIPCRTR
#define _FCNTL_H 1
#define IPV6_ADDR_PREFERENCES 72
#define ACL_VSTREAM_PUTC(ch,stream_ptr) ( (stream_ptr)->wbuf_size == 0 ? (acl_vstream_buffed_space((stream_ptr)), ((stream_ptr)->wbuf[(size_t) (stream_ptr)->wbuf_dlen++] = (ch))) : ((stream_ptr)->wbuf_dlen == stream_ptr->wbuf_size ? (acl_vstream_fflush((stream_ptr)) == ACL_VSTREAM_EOF ? ACL_VSTREAM_EOF : ((stream_ptr)->wbuf[(size_t) (stream_ptr)->wbuf_dlen++] = (ch))) : ((stream_ptr)->wbuf[(size_t) (stream_ptr)->wbuf_dlen++] = (ch))))
#define ACL_XML2_FLAG_MULTI_ROOT (1 << 0)
#define ACL_BITS_MASK_REALLOC(mask,nmax) do { size_t _byte_len = ACL_BITS_MASK_BYTES_NEEDED(nmax); size_t _old_len = (mask)->data_len; (mask)->data = (char*) acl_myrealloc((mask)->data, _byte_len); memset((mask)->data + _old_len, 0, _byte_len - _old_len); (mask)->data_len = _byte_len; } while (0)
#define S_IREAD S_IRUSR
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define __S16_TYPE short int
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define acl_spool_create_ex acl_ioctl_create_ex
#define EPROTONOSUPPORT 93
#define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
#define IFF_MASTER IFF_MASTER
#define __TIMESIZE 64
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define IN_CLASSC_NET 0xffffff00
#define POLLIN 0x001
#define ACL_RING_FOREACH(iter,head_ptr) for ((iter).ptr = acl_ring_succ((head_ptr)); (iter).ptr != (head_ptr); (iter).ptr = acl_ring_succ((iter).ptr))
#define __USE_LARGEFILE64 1
#define ACL_MEMPOOL_CTL_END 0
#define __FLT16_HAS_QUIET_NAN__ 1
#define IP_PMTUDISC_OMIT 5
#define ACL_SPOOL ACL_IOCTL
#define IPPROTO_NONE IPPROTO_NONE
#define __gid_t_defined 
#define ifr_broadaddr ifr_ifru.ifru_broadaddr
#define ACL_PTHREAD_PROCESS_SHARED 1
#define IN_LOOPBACKNET 127
#define ACL_TOKEN_TREE_WORD_MATCH(acl_token_tree_in,word_in,acl_token_out) { const unsigned char *_ptr = (const unsigned char*) word_in; ACL_TOKEN *_token_iter = acl_token_tree_in, *_token = NULL; while (*_ptr) { _token = _token_iter->tokens[*_ptr]; if (_token == NULL) break; _token_iter = _token; _ptr++; } if (_token && (_token->flag & ACL_TOKEN_F_STOP)) acl_token_out = _token; else acl_token_out = NULL; }
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define IPV6_DONTFRAG 62
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define TRY_AGAIN 2
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define AF_ATMPVC PF_ATMPVC
#define VAR_AUT_LOOP_BEGIN "LOOP_BEGIN"
#define __GLIBC_MINOR__ 35
#define _NET_IF_H 1
#define IFF_AUTOMEDIA IFF_AUTOMEDIA
#define __UINT_LEAST32_TYPE__ unsigned int
#define htole64(x) __uint64_identity (x)
#define _XBS5_ILP32_OFFBIG -1
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define CLOCK_BOOTTIME 7
#define _CTYPE_H 1
#define AF_ASH PF_ASH
#define FNDELAY O_NDELAY
#define IPPROTO_GRE IPPROTO_GRE
#define ACL_XML_FLAG_XML_ENCODE (1 << 3)
#define __LDBL_MIN_EXP__ (-16381)
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define ACL_AQUEUE_ERR_COND_WAIT 4
#define ACL_XML3_S_MEND 15
#define __BIT_TYPES_DEFINED__ 1
#define _POSIX_VDISABLE '\0'
#define ACL_VSTRING_SIZE(vp) ((vp)->vbuf.len)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define FD_SETSIZE __FD_SETSIZE
#define IPV6_RECVPKTINFO 49
#define ACL_AIO_CTL_LINE_LENGTH 5
#define stdout stdout
#define IP_OPTIONS 4
#define ACL_XML2_S_RTAG 8
#define __struct_FILE_defined 1
#define ACL_VSTREAM_FLAG_CONNECT (1 << 15)
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define __INT_LEAST8_MAX__ 0x7f
#define ACL_MASTER_XPORT_NAME_SOCK "sock"
#define ACL_IOCTL_CTL_DELAY_SEC 3
#define ACL_DEPRECATED __attribute__((__deprecated__))
#define ACL_JSON_T_NUMBER (1 << 6)
#define __FLT32X_MAX_10_EXP__ 308
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define ACL_MASTER_TYPE_INCLUDE_H 
#define ____mbstate_t_defined 1
#define ACL_VSTREAM_POPEN_UID 3
#define acl_xml2_parse acl_xml2_update
#define ACL_TRANSFER_FD_INCLUDE_H 
#define SO_ATTACH_REUSEPORT_EBPF 52
#define IPV6_PKTINFO 50
#define SO_RCVBUFFORCE 33
#define ACL_DNS_ERR_SVR -2
#define acl_mystrtok acl_strtok
#define ACL_NORETURN __attribute__((__noreturn__))
#define IP_PMTUDISC 10
#define EMSGSIZE 90
#define __ASM_POSIX_TYPES_H 
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define __INT_LEAST32_TYPE__ int
#define __FLT32_MIN_EXP__ (-125)
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define ACL_MASTER_SERVER_LOOP 12
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define ACL_AIO_CTL_CLOSE_HOOK_ADD 18
#define ACL_VALID_HOSTNAME_LEN 255
#define ACL_XML3_FLAG_MULTI_ROOT (1 << 0)
#define __UINT8_C(c) c
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define __S_IFSOCK 0140000
#define ACL_BITS_MAP_INCLUDE_H 
#define __stub_stty 
#define __ASM_GENERIC_SOCKIOS_H 
#define PF_SNA 22
#define acl_pthread_mutexattr_settype pthread_mutexattr_settype
#define SO_RXQ_OVFL 40
#define __USE_POSIX_IMPLICITLY 1
#define ACL_DNS_ERR_TIMEOUT -16
#define __UINT64_TYPE__ long unsigned int
#define _PTHREAD_H 1
#define SO_RCVTIMEO_NEW 66
#define __stub___compat_query_module 
#define __ARM_NEON 1
#define ACL_XML2_S_ATTR 9
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define SO_MEMINFO 55
#define _SC_IOV_MAX _SC_IOV_MAX
#define ACL_MASTER_GEN_NAME "GENERATION"
#define _SC_PASS_MAX _SC_PASS_MAX
#define ACL_MSGIO_OPEN 6
#define _SC_LONG_BIT _SC_LONG_BIT
#define SOCK_PACKET SOCK_PACKET
#define _POSIX_MAPPED_FILES 200809L
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 01000
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define ifc_req ifc_ifcu.ifcu_req
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define IPPROTO_IGMP IPPROTO_IGMP
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define EXPERIMENT 1
#define ACL_VSTREAM_OUT (&acl_vstream_fstd[1])
#define __PID_T_TYPE __S32_TYPE
#define acl_ring_first ACL_RING_FIRST
#define _STATBUF_ST_NSEC 
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define ACL_SPOOL_TIMER_FN ACL_IOCTL_TIMER_FN
#define _SC_AIO_MAX _SC_AIO_MAX
#define ACL_XML2_F_META_CM (1 << 1)
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define ENOTCONN 107
#define ACL_SLICE_INCLUDE_H 
#define _SYS_POLL_H 1
#define IN_CLASSB_NET 0xffff0000
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define ACL_JSON_T_LEAF (1 << 12)
#define ACL_ENOTCONN ENOTCONN
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define S_IFLNK __S_IFLNK
#define __DBL_MAX_10_EXP__ 308
#define P_tmpdir "/tmp"
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _POSIX_MESSAGE_PASSING 200809L
#define acl_spool_nworker acl_ioctl_nworker
#define POLLERR 0x008
#define __WORDSIZE_TIME64_COMPAT32 0
#define ACL_XML2_F_META_EM (1 << 2)
#define EPFNOSUPPORT 96
#define ESRMNT 69
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define IPV6_ROUTER_ALERT 22
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define ACL_TOKEN_TREE_MATCH(acl_token_tree_in,s_in,delim_in,delim_tab_in,acl_token_out) do { ACL_TOKEN *acl_token_iter = (acl_token_tree_in), *acl_token_tmp; (acl_token_out) = NULL; if (((const char*) delim_in)) { int _i; while (*(s_in)) { for (_i = 0; ((const char*) delim_in)[_i]; _i++) { if (*(s_in) == ((const char*) delim_in)[_i]) goto _END; } acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { if ((acl_token_out)) break; acl_token_iter = (acl_token_tree_in); acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { (s_in)++; continue; } } if ((acl_token_tmp->flag & ACL_TOKEN_F_STOP)) (acl_token_out) = acl_token_tmp; acl_token_iter = acl_token_tmp; (s_in)++; } _END: break; } else if (((char*) delim_tab_in)) { while (*(s_in)) { if (((char*) delim_tab_in)[*((const unsigned char*)(s_in))]) break; acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { if ((acl_token_out)) break; acl_token_iter = (acl_token_tree_in); acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { (s_in)++; continue; } } if ((acl_token_tmp->flag & ACL_TOKEN_F_STOP)) (acl_token_out) = acl_token_tmp; acl_token_iter = acl_token_tmp; (s_in)++; } } else { while (*(s_in)) { acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { if ((acl_token_out)) break; acl_token_iter = (acl_token_tree_in); acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { (s_in)++; continue; } } if ((acl_token_tmp->flag & ACL_TOKEN_F_STOP)) (acl_token_out) = acl_token_tmp; acl_token_iter = acl_token_tmp; (s_in)++; } } } while (0)
#define PTHREAD_ONCE_INIT 0
#define __DBL_DECIMAL_DIG__ 17
#define ACL_VALID_LABEL_LEN 63
#define ACL_HOSTNAME_TYPE_CNAME 2
#define ACL_SANE_SOCKET_INCLUDE_H 
#define __DEC_EVAL_METHOD__ 2
#define ACL_NET_INCLUDE_H 
#define _SIZE_T 
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define ACL_CHROOT_UID_INCLUDE_H 
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define SOCK_STREAM SOCK_STREAM
#define _SYS_UIO_H 1
#define TIME_UTC 1
#define __BIG_ENDIAN 4321
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define IFF_UP IFF_UP
#define ACL_VSTREAM_LOCAL(stream_ptr) ((stream_ptr)->addr_local ? (stream_ptr)->addr_local : "")
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define _FILE_OFFSET_BITS 64
#define __SIZEOF_WCHAR_T__ 4
#define ACL_DNS_ERR_EXIST -17
#define acl_htable_iter_value ACL_HTABLE_ITER_VALUE
#define __INTMAX_WIDTH__ 64
#define ACL_XML3_S_RLT 6
#define ACL_HAVE_NO_RWLOCK 
#define _POSIX_REENTRANT_FUNCTIONS 1
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define __ORDER_BIG_ENDIAN__ 4321
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define PF_WANPIPE 25
#define ACL_JSON_T_MEMBER (1 << 13)
#define ACL_ALLOCATOR_CTL_MIN_SIZE 1
#define INTPTR_MAX (9223372036854775807L)
#define _IOT_ifreq _IOT(_IOTS(char),IFNAMSIZ,_IOTS(char),16,0,0)
#define ACL_NON_BLOCKING 1
#define IP_RECVFRAGSIZE 25
#define ACL_VSTREAM_POPEN_ARGV 2
#define O_EXCL 0200
#define __UINT32_C(c) c ## U
#define acl_vstream_fgets acl_vstream_gets
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define ACL_AIO_FLAG_DELAY_CLOSE (1 << 3)
#define EISCONN 106
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define EAI_SYSTEM -11
#define S_ISLNK(mode) __S_ISTYPE((mode), __S_IFLNK)
#define INET6_ADDRSTRLEN 46
#define IP_NODEFRAG 22
#define acl_spool_enable_write acl_ioctl_enable_write
#define _LFS_ASYNCHRONOUS_IO 1
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define AF_UNIX PF_UNIX
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define IPPROTO_COMP IPPROTO_COMP
#define EUSERS 87
#define _VA_LIST_T_H 
#define ACL_BINHASH_STAT_INVAL 1
#define INT_FAST16_MAX (9223372036854775807L)
#define __PIC__ 2
#define S_ISUID __S_ISUID
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define ENETDOWN 100
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define __UINT_FAST32_TYPE__ long unsigned int
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define ACL_AIO_CTL_LISTEN_FN 2
#define O_NOFOLLOW __O_NOFOLLOW
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define ACL_HTABLE_FLAG_USE_LOCK (1 << 1)
#define AF_CAIF PF_CAIF
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define ispunct(c) __isctype((c), _ISpunct)
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define ACL_DNS_ERR_BUILD_REQ -18
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define ACL_JSON_T_ARRAY (1 << 10)
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define __FP_FAST_FMA 1
#define ACL_XML2_F_META_QM (1 << 0)
#define ACL_VSTREAM_SET_MS(x) ((x)->flag |= ACL_VSTREAM_FLAG_MS)
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __va_list__ 
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define AUT_LOOP_BREAK -100
#define SO_SNDLOWAT 19
#define ACL_RING_TO_APPL(ring_ptr,app_type,ring_member) ((app_type *) (((char *) (ring_ptr)) - offsetof(app_type,ring_member)))
#define IPV6_PATHMTU 61
#define UINTMAX_C(c) c ## UL
#define ACL_TRIGGER_BUF_SIZE 1024
#define _POSIX2_CHAR_TERM 200809L
#define ACL_VSTREAM_SET_NS(x) ((x)->flag |= ACL_VSTREAM_FLAG_NS)
#define _POSIX_ASYNC_IO 1
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define ERFKILL 132
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define __INT32_TYPE__ int
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define ACL_ISUPPER(c) isupper(_ACL_UCHAR_(c))
#define acl_binhash_foreach_reverse ACL_BINHASH_FOREACH_REVERSE
#define IPV6_PMTUDISC_WANT 1
#define _POSIX_C_SOURCE 200809L
#define __INT_LEAST32_WIDTH__ 32
#define va_start(v,l) __builtin_va_start(v,l)
#define __SWORD_TYPE long int
#define be16toh(x) __bswap_16 (x)
#define EL3HLT 46
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define ACL_VSTRING_RESET(vp) { (vp)->vbuf.ptr = (vp)->vbuf.data; acl_vbuf_clearerr(&(vp)->vbuf); }
#define SO_GET_FILTER SO_ATTACH_FILTER
#define MCAST_BLOCK_SOURCE 43
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define _T_SIZE 
#define ACL_XML2_S_RLT 6
#define UINT8_C(c) c
#define IP_PASSSEC 18
#define ACL_TOUPPER(c) toupper(_ACL_UCHAR_(c))
#define SO_MAX_PACING_RATE 47
#define _____fpos64_t_defined 1
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define ACL_BINHASH_STAT_NO_KEY 3
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define va_end(v) __builtin_va_end(v)
#define ACL_SCAN_FLAG_RMDIR (1 << 1)
#define AVL_PREV(tree,node) avl_walk(tree, node, AVL_BEFORE)
#define ACL_SOCKET int
#define __INT_FAST16_WIDTH__ 64
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define _POSIX_V7_ILP32_OFFBIG -1
#define __LDBL_REDIR2_DECL(name) 
#define ELIBBAD 80
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define _CS_V7_ENV _CS_V7_ENV
#define ESTRPIPE 86
#define __glibc_clang_prereq(maj,min) 0
#define PF_INET 2
#define _SC_SIGNALS _SC_SIGNALS
#define IP_DROP_MEMBERSHIP 36
#define ECONNREFUSED 111
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define ACL_MSGIO_QUIT 5
#define _RWLOCK_INTERNAL_H 
#define __CONST_SOCKADDR_ARG const struct sockaddr *
#define ACL_VSTREAM_SET_US(x) ((x)->flag |= ACL_VSTREAM_FLAG_US)
#define ACL_EINVAL EINVAL
#define UINT16_MAX (65535)
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_MINHOPCOUNT 73
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define PF_MPLS 28
#define ACL_DEBUG_MALLOC_INCLUDE_H 
#define __ASM_BITSPERLONG_H 
#define _POSIX_TRACE_LOG -1
#define __INT16_C(c) c
#define ACL_XML3_S_LTAG 5
#define PF_RXRPC 33
#define __ARM_ARCH_ISA_A64 1
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define _SC_THREADS _SC_THREADS
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define EREMOTEIO 121
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define _NETINET_IN_H 1
#define __PTRDIFF_TYPE__ long int
#define __USE_FILE_OFFSET64 1
#define ACL_XML3_S_MTXT 13
#define IP_UNICAST_IF 50
#define EADV 68
#define ACL_UNIX_INCLUDE_H 
#define ACL_ENETDOWN ENETDOWN
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define acl_pthread_pool_add acl_pthread_pool_add_one
#define _BITS_STAT_H 1
#define ACL_XML_F_SELF_CL (1 << 3)
#define ACL_TOKEN_F_STOP (1 << 0)
#define ACL_RFC1035_TYPE_MB 7
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define ACL_MEMPOOL_CTL_MUTEX 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define EAI_SERVICE -8
#define acl_pthread_mutex_destroy pthread_mutex_destroy
#define ENOPKG 65
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define AF_X25 PF_X25
#define _USE_FAST_MACRO 1
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define EXFULL 54
#define strrncasecmp acl_strrncasecmp
#define _STATBUF_ST_RDEV 
#define ACL_EVENT_WRITE (1 << 2)
#define SOL_AAL 265
#define SHUT_RD SHUT_RD
#define __linux__ 1
#define _SC_FIFO _SC_FIFO
#define ACL_MASTER_XPORT_NAME_INET "inet"
#define __BITS_SOCKET_H 
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define _SC_SPAWN _SC_SPAWN
#define ACL_VSTREAM_POPEN_GID 4
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define ACL_VSTREAM_CTL_READ_FN 1
#define __ICMP_PRIVATE_INCLUDE_H__ 
#define PF_CAN 29
#define IPV6_MULTICAST_ALL 29
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define ACL_SPOOL_CTL_THREAD_MAX ACL_IOCTL_CTL_THREAD_MAX
#define IPV6_XFRM_POLICY 35
#define __FLT128_DECIMAL_DIG__ 36
#define ACL_IOCTL_CTL_END 0
#define ACL_XML2_S_MEND 15
#define ENOTUNIQ 76
#define _GETOPT_CORE_H 1
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define ACL_MBOX_T_MPSC 1
#define ACL_XML_IS_CDATA(x) (((x)->flag & ACL_XML_F_CDATA))
#define _SC_STREAMS _SC_STREAMS
#define ACL_DNS_ERR_YXRR -7
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define ACL_VALID_HOSTNAME_INCLUDE_H 
#define __FLT_MIN_10_EXP__ (-37)
#define ACL_FILE_INCLUDE_H 
#define SOL_ALG 279
#define SHUT_WR SHUT_WR
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define __INT_LEAST64_WIDTH__ 64
#define INT_LEAST16_MAX (32767)
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define _GNU_SOURCE 
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define ACL_SLICE_FLAG_RTGC_OFF (1 << 10)
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define __P(args) args
#define ACL_INET_FLAG_REUSEPORT 1 << 1
#define _POSIX_BARRIERS 200809L
#define ACL_HTMLCODE_INCLUDE_H 
#define __ATOMIC_ACQ_REL 4
#define __U32_TYPE unsigned int
#define __LIB_ICMP_INCLUDE_H__ 
#define _STDLIB_H 1
#define IP_RECVERR_RFC4884 26
#define _T_WCHAR 
#define _BITS_FLOATN_COMMON_H 
#define IP_UNBLOCK_SOURCE 37
#define IPV6_RTHDR_TYPE_0 0
#define ACL_DNS_FLAG_CHECK_DNS_NET (1 << 2)
#define S_ISCHR(mode) __S_ISTYPE((mode), __S_IFCHR)
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define ACL_EVENT_FD_IDLE 0
#define __FLT32X_MAX_EXP__ 1024
#define ____sigset_t_defined 
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define SO_BPF_EXTENSIONS 48
#define O_NOCTTY 0400
#define ACL_SANE_BASENAME_INCLUDE_H 
#define acl_pthread_mutex_trylock pthread_mutex_trylock
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define NO_ADDRESS NO_DATA
#define __ARM_SIZEOF_WCHAR_T 4
#define __ATOMIC_ACQUIRE 2
#define IP_DEFAULT_MULTICAST_TTL 1
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define ACL_BITS_MASK_FREE(mask) acl_myfree((mask)->data)
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __uid_t_defined 
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define __S_ISTYPE(mode,mask) (((mode) & __S_IFMT) == (mask))
#define EUNATCH 49
#define SOL_ATM 264
#define ICMP_TYPE_ECHO 8
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define __flexarr []
#define _SC_LINE_MAX _SC_LINE_MAX
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define ACL_API 
#define _SCHED_H 1
#define ACL_RING_LAST_APPL(head,app_type,ring_member) (acl_ring_pred(head) != (head) ? ACL_RING_TO_APPL(acl_ring_pred(head), app_type, ring_member) : 0)
#define _POSIX_PRIORITIZED_IO 200809L
#define __stub_fchflags 
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define ACL_VBUF_FLAG_SLICE (1<<4)
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define PTHREAD_CANCELED ((void *) -1)
#define _BITS_TIME_H 1
#define O_ACCMODE 0003
#define ACL_MASTER_SERVER_SIGHUP 28
#define __FSWORD_T_TYPE __SWORD_TYPE
#define AF_XDP PF_XDP
#define FIOGETOWN 0x8903
#define __WCHAR_MAX__ 0xffffffffU
#define EAFNOSUPPORT 97
#define ACL_JSON_T_ELEMENT (1 << 15)
#define ACL_XML2_S_MTAG 12
#define _STDDEF_H_ 
#define EEXIST 17
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define S_IFSOCK __S_IFSOCK
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define IPV6_PMTUDISC_INTERFACE 4
#define ACL_MASTER_CONF_INCLUDE_H 
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define ACL_FMT_I64D "%lld"
#define acl_ring_last ACL_RING_LAST
#define INT16_C(c) c
#define __WINT_MAX__ 0xffffffffU
#define ACL_FMT_I64U "%llu"
#define _SC_2_C_DEV _SC_2_C_DEV
#define ACL_ENETUNREACH ENETUNREACH
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define ACL_APP_CTL_INIT_FN ACL_MASTER_SERVER_POST_INIT
#define ACL_ITERATOR_INCLUDE_H 
#define INT8_MAX (127)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define _GETOPT_POSIX_H 1
#define ACL_SAFE_INCLUDE_H 
#define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
#define acl_vstring_fgets_nonl(s,p) (acl_vstring_gets_nonl((s), (p)) == ACL_VSTREAM_EOF ? 0 : (s))
#define EILSEQ 84
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ESPIPE 29
#define ACL_EINTR EINTR
#define ACL_LINUX 
#define __SOCKADDR_ARG struct sockaddr *__restrict
#define __OFF_T_MATCHES_OFF64_T 1
#define iscntrl(c) __isctype((c), _IScntrl)
#define ACL_TEST_VAR_INCLUDE_H 
#define acl_getc acl_fgetc
#define ACL_PROCESS_INCLUDE_H 
#define ACL_DNS_ERR_NXRR -8
#define ifr_metric ifr_ifru.ifru_ivalue
#define AF_IB PF_IB
#define AF_APPLETALK PF_APPLETALK
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define SOL_PPPOL2TP 273
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define SO_NETNS_COOKIE 71
#define INT16_MAX (32767)
#define IPV6_NEXTHOP 9
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define ACL_APP_CTL_ON_SIGHUP ACL_MASTER_SERVER_SIGHUP
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define AF_MCTP PF_MCTP
#define __S_IREAD 0400
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
#define ACL_XML3_IS_COMMENT(x) (((x)->flag & ACL_XML3_F_META_CM))
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define ACL_DNS_ERR_NO_EXIST -3
#define _IOFBF 0
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define ACL_VSTRING_CTL_END 0
#define ACL_TEST_GLOBAL_INCLUDE_H 
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define ACL_LISTEN_INCLUDE_H 
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define acl_ring_pred ACL_RING_PRED
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define ACL_PTHREAD_ONCE_INIT PTHREAD_ONCE_INIT
#define ACL_DB_DEBUG_MEM (1<<0)
#define SO_SELECT_ERR_QUEUE 45
#define ACL_IOCTL_CTL_THREAD_IDLE 2
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define __FLT64_DECIMAL_DIG__ 17
#define ACL_VSTREAM_TYPE_LISTEN (1 << 2)
#define ACL_WATCHDOG_INCLUDE_H 
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define AI_NUMERICSERV 0x0400
#define ACL_ISSPACE(c) isspace(_ACL_UCHAR_(c))
#define FNONBLOCK O_NONBLOCK
#define ACL_RFC1035_MAXHOSTNAMESZ 256
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define ACL_VSTREAM_FLAG_ERR (1 << 10)
#define _SYS_UN_H 1
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define EOWNERDEAD 130
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define SHUT_RDWR SHUT_RDWR
#define UINT64_C(c) c ## UL
#define INT16_MIN (-32767-1)
#define __FINITE_MATH_ONLY__ 0
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define ACL_BITS_MASK_FD_BIT(number) (1 << ((number) % ACL_BITS_MASK_NBBY))
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define __sched_priority sched_priority
#define ACL_MDT_FLAG_KMR (1 << 1)
#define EBADE 52
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define EBADR 53
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define SOL_PACKET 263
#define ACL_RFC1035_TYPE_CNAME 5
#define ACL_PATH_MAILDIR "/var/mail"
#define __pid_t_defined 
#define EL2NSYNC 45
#define ERANGE 34
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define ECANCELED 125
#define ACL_MASTER_SERVER_PRE_INIT 10
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define ACL_XML_FLAG_IGNORE_SLASH (1 << 1)
#define SCM_SRCRT IPV6_RXSRCRT
#define VAR_AUT_LOOP_BREAK "LOOP_BREAK"
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _THREAD_MUTEX_INTERNAL_H 1
#define __LDBL_REDIR1(name,proto,alias) name proto
#define MSG_MORE MSG_MORE
#define __size_t 
#define acl_vstring_fgets_bound(s,p,l) (acl_vstring_gets_bound((s), (p), (l)) == ACL_VSTREAM_EOF ? 0 : (s))
#define INT_FAST8_MAX (127)
#define ACL_ISALNUM(c) isalnum(_ACL_UCHAR_(c))
#define acl_array_insert acl_array_succ_insert
#define ETXTBSY 26
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define __FLT128_MANT_DIG__ 113
#define __HAVE_FLOAT128X 0
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define ACL_BINHASH_FLAG_SLICE1 (1 << 2)
#define ACL_XML3_S_AVAL 10
#define SO_INCOMING_NAPI_ID 56
#define MSG_PEEK MSG_PEEK
#define htobe16(x) __bswap_16 (x)
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define __SHRT_MAX__ 0x7fff
#define POLLRDBAND 0x080
#define acl_vstring_avail(vp) ((vp)->vbuf.len - ((vp)->vbuf.ptr - (vp)->vbuf.data))
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define __ARM_FEATURE_IDIV 1
#define ACL_SCAN_DIR_INCLUDE_H 
#define __FLT64X_MAX_10_EXP__ 4932
#define ACL_MBOX_T_SPSC 0
#define ACL_ECONNRESET ECONNRESET
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define AVL_INDEX2NODE(x) ((avl_node_t *)((x) & ~1))
#define __LDBL_IS_IEC_60559__ 2
#define SO_RCVTIMEO_OLD 20
#define ACL_USERNAME_INCLUDE_H 
#define IPV6_HDRINCL 36
#define ACL_CORE_LIMIT_INCLUDE_H 
#define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define __LITTLE_ENDIAN 1234
#define IFNAMSIZ IF_NAMESIZE
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define ENOTBLK 15
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define htobe64(x) __bswap_64 (x)
#define ACL_MASTER_SERVER_POST_INIT 11
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define ACL_DEBUG_WQ (ACL_DEBUG_INTER_BASE + 1)
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define INT_FAST8_MIN (-128)
#define CLOCK_MONOTONIC_COARSE 6
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define WCHAR_MIN __WCHAR_MIN
#define ACL_AQUEUE_ERR_TIMEOUT 3
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define __blksize_t_defined 
#define acl_pthread_detach pthread_detach
#define ACL_VSTREAM_TYPE_LISTEN_IOCP (1 << 5)
#define ACL_HAS_POLL 
#define __UID_T_TYPE __U32_TYPE
#define _POSIX_READER_WRITER_LOCKS 200809L
#define PF_ATMPVC 8
#define __AARCH64_CMODEL_SMALL__ 1
#define SO_WIFI_STATUS 41
#define NETDB_SUCCESS 0
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define ACL_IOSTUFF_INCLUDE_H 
#define __LDBL_MAX_EXP__ 16384
#define ENOTEMPTY 39
#define UINT_FAST16_MAX (18446744073709551615UL)
#define ACL_AIO_SET_TIMEOUT(stream_ptr,_timeo_) do { ACL_ASTREAM *__stream_ptr = stream_ptr; __stream_ptr->timeout = _timeo_; } while(0)
#define ACL_JSON_T_DOUBLE (1 << 9)
#define __WINT_MIN__ 0U
#define _SC_SHELL _SC_SHELL
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define AF_NETROM PF_NETROM
#define ACL_AQUEUE_INCLUDE_H 
#define ACL_STDLIB_INCLUDE_H 
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define ACL_MEMDB_INCLUDE_H 
#define htonl(x) __bswap_32 (x)
#define ACL_INET_FLAG_EXCLUSIVE 1 << 3
#define ACL_VSTREAM_GETC(stream_ptr) ( (stream_ptr)->read_cnt > 0 ? (stream_ptr)->read_cnt--, (stream_ptr)->offset++, *(stream_ptr)->read_ptr++: (stream_ptr)->sys_getc((stream_ptr)))
#define htons(x) __bswap_16 (x)
#define IPV6_MTU_DISCOVER 23
#define EAI_NONAME -2
#define ACL_BINHASH_FOREACH(iter,table_ptr) if (table_ptr) for((void) acl_binhash_iter_head((table_ptr), &iter); (iter).ptr; (void) acl_binhash_iter_next(&iter))
#define PF_IUCV 32
#define ACL_VSTREAM_ERR (&acl_vstream_fstd[2])
#define _POSIX_SPIN_LOCKS 200809L
#define EALREADY 114
#define _SC_SELECT _SC_SELECT
#define SO_REUSEADDR 2
#define __WCHAR_MIN__ 0U
#define ACL_HOSTNAME_TYPE_MX 3
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_SYNCHRONIZED_IO 200809L
#define ACL_CONFIG_INT_TABLE ACL_CFG_INT_TABLE
#define ACL_HOSTNAME_TYPE_NS 5
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define ACL_SLICE_FLAG_GC1 (1 << 0)
#define ACL_SLICE_FLAG_GC2 (1 << 1)
#define __ATOMIC_SEQ_CST 5
#define O_APPEND 02000
#define __osockaddr_defined 1
#define _FORTIFY_SOURCE 2
#define acl_mymemdup(ptr,len) acl_memdup_glue(__FILE__, __LINE__, (ptr), len)
#define __INT8_MAX__ 0x7f
#define ACL_VSTREAM_TYPE_LISTEN_UNIX (1 << 4)
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#define __ldiv_t_defined 1
#define ACL_SPOOL_INCLUDE_H 
#define _IOT_ifreq_short _IOT(_IOTS(char),IFNAMSIZ,_IOTS(short),1,0,0)
#define AF_TIPC PF_TIPC
#define acl_pthread_join pthread_join
#define __unix 1
#define isblank(c) __isctype((c), _ISblank)
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define ACL_XML3_S_LCH 3
#define _DEFAULT_SOURCE 1
#define _LINUX_POSIX_TYPES_H 
#define SO_MARK 36
#define __USE_EXTERN_INLINES 1
#define ACL_FIFO_ITER_VALUE(iter) ((iter).ptr->data)
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define __LOCK_ALIGNMENT 
#define ACL_VSTREAM_CTL_CACHE_SEEK 7
#define _XOPEN_REALTIME_THREADS 1
#define ETIMEDOUT 110
#define ___int_ptrdiff_t_h 
#define SCHED_OTHER 0
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define ACL_MASTER_STAT_START_OK 4
#define ENODATA 61
#define IPV6_AUTHHDR 10
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define EXIT_SUCCESS 0
#define __END_DECLS 
#define ACL_VSTREAM_BFRD_CNT(stream_ptr) ((stream_ptr) == NULL ? -1 : (stream_ptr)->read_cnt)
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define IPV6_RECVERR_RFC4884 31
#define ACL_XML3_S_LGT 2
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _ALLOCA_H 1
#define ACL_HTABLE_STAT_INVAL 1
#define __BITS_PER_LONG 64
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define ACL_JSON_T_A_NUMBER (1 << 1)
#define _SYS_SELECT_H 1
#define PF_ALG 38
#define ACL_MDT_FLAG_DMR (1 << 2)
#define _XOPEN_ENH_I18N 1
#define acl_myfree(_ptr_) do { if (_ptr_) { acl_free_glue(__FILE__, __LINE__, (_ptr_)); (_ptr_) = NULL; } } while (0)
#define __jmp_buf_tag_defined 1
#define ACL_VSTREAM_FLAG_TIMEOUT (1 << 12)
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define ACL_VSTREAM_TYPE_UNIX (1 << 8)
#define IP_IPSEC_POLICY 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define IPPROTO_PIM IPPROTO_PIM
#define ifr_bandwidth ifr_ifru.ifru_ivalue
#define acl_vbuf_eof(v) ((v)->flags & ACL_VBUF_FLAG_EOF)
#define ACL_AIO_CTL_TIMEO_HOOK_DEL 21
#define __DBL_DIG__ 15
#define ACL_RFC1035_TYPE_NULL 10
#define ACL_VSTREAM_FLAG_TAGYES (1 << 17)
#define ACL_SET_EUGID_INCLUDE_H 
#define EINTR 4
#define AF_PACKET PF_PACKET
#define AF_INET6 PF_INET6
#define SOL_NETLINK 270
#define INT32_MIN (-2147483647-1)
#define __WCHAR_MAX __WCHAR_MAX__
#define ACL_UNIX 
#define _IO_EOF_SEEN 0x0010
#define _POSIX_SPAWN 200809L
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define __f64x(x) x ##f64x
#define AVL_INDEX2CHILD(x) ((x) & 1)
#define ACL_HTABLE_INCLUDE_H 
#define PF_UNIX PF_LOCAL
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define ACL_RES_USE_TCP 1
#define ifr_dstaddr ifr_ifru.ifru_dstaddr
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC PF_UNSPEC
#define ACL_DEBUG_THR_POOL (ACL_DEBUG_INTER_BASE + 3)
#define _SS_SIZE 128
#define NI_NOFQDN 4
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define ACL_EVENT_FD_BUSY 1
#define PF_CAIF 37
#define ACL_HAS_PTHREAD 
#define PF_ASH 18
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define ACL_XML_S_MEND 15
#define _ASSERT_H_DECLS 
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define ACL_MASTER_CLASS_PRIVATE "private"
#define ACL_TEST_STRUCT_INCLUDE_H 
#define EPERM 1
#define _STDDEF_H 
#define EAI_FAMILY -6
#define ACL_DEBUG_PROCTL (ACL_DEBUG_INTER_BASE + 2)
#define ACL_RES_ERR_NULL -103
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define ACL_BINHASH_FLAG_SLICE_RTGC_OFF (1 << 1)
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __SIZEOF_PTRDIFF_T__ 8
#define AF_BRIDGE PF_BRIDGE
#define ICMP_MIN 8
#define acl_mystrndup(str,len) acl_strndup_glue(__FILE__, __LINE__, (str), len)
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _IONBF 2
#define ACL_AQUEUE_ERR_LOCK 1
#define ACL_AIO_CTL_WRITE_NESTED 12
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define POLLRDNORM 0x040
#define toascii(c) __toascii (c)
#define PF_NETLINK 16
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define __UINT16_C(c) c
#define ACL_DB_OK 0
#define IP_MULTICAST_LOOP 34
#define NI_NAMEREQD 8
#define SOL_X25 262
#define AF_CAN PF_CAN
#define ACL_METER_TIME(info) acl_meter_time(__FILE__, __LINE__, info)
#define O_WRONLY 01
#define ACL_MASTER_XPORT_NAME_UNIX "unix"
#define __gnu_linux__ 1
#define ACL_ISLOWER(c) islower(_ACL_UCHAR_(c))
#define ACL_TOLOWER(c) tolower(_ACL_UCHAR_(c))
#define _ENDIAN_H 1
#define SOL_IP 0
#define IPPROTO_PUP IPPROTO_PUP
#define __FLT_MAX_EXP__ 128
#define ACL_ECONNABORTED ECONNABORTED
#define ACL_WRITEABLE_CHECK 1
#define ACL_TCP_CTL_INCLUDE_H 
#define ACL_VSTREAM_POPEN_EXPORT 8
#define __LIB_ICMP_TYPE_INCLUDE_H__ 
#define ACL_MASTER_SERVER_ON_CLOSE 16
#define ACL_FILE_HANDLE int
#define ENOSR 63
#define __USE_ISOC11 1
#define S_ISDIR(mode) __S_ISTYPE((mode), __S_IFDIR)
#define SO_BINDTODEVICE 25
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define ACL_YPIPI_CINLUDE_H 
#define ACL_RING_FIRST(head) (acl_ring_succ(head) != (head) ? acl_ring_succ(head) : 0)
#define __FLT16_MIN_EXP__ (-13)
#define ifr_hwaddr ifr_ifru.ifru_hwaddr
#define __stub___compat_bdflush 
#define _BITS_STRING_FORTIFIED_H 1
#define __FLT64_MANT_DIG__ 53
#define IPPROTO_IDP IPPROTO_IDP
#define ACL_HEX_CODE_INCLUDE_H 
#define acl_fifo_push_info acl_fifo_push_info_back
#define acl_mymalloc(size) acl_malloc_glue(__FILE__, __LINE__, size)
#define ACL_APP_CTL_THREAD_INIT_CTX ACL_MASTER_SERVER_THREAD_INIT_CTX
#define ACL_VSTREAM_PATH(stream_ptr) ((stream_ptr)->path ? (stream_ptr)->path : "")
#define __FLT64X_MANT_DIG__ 113
#define IPPROTO_IPIP IPPROTO_IPIP
#define AUT_FLAG_ELIF 7
#define ACL_TIMED_WAIT_INCLUDE_H 
#define ELIBACC 79
#define _T_PTRDIFF 
#define __glibc_has_extension(ext) 0
#define acl_spool_free acl_ioctl_free
#define UINT_LEAST8_MAX (255)
#define IPV6_2292PKTOPTIONS 6
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define _LFS64_STDIO 1
#define L_ctermid 9
#define ACL_APP_CTL_THREAD_INIT ACL_MASTER_SERVER_THREAD_INIT
#define ACL_VSTREAM_FLAG_DEFER_FREE (1 << 4)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define ACL_XML2_S_AVAL 10
#define acl_htable_stat_r acl_htable_stat
#define ACL_ALLOCATOR_INCLUDE_H 
#define ACL_EAGAIN EAGAIN
#define ACL_ARRAY_INCLUDE_H 
#define _SC_ARG_MAX _SC_ARG_MAX
#define isupper(c) __isctype((c), _ISupper)
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define VAR_AUT_ENDIF "ENDIF"
#define acl_spool_start acl_ioctl_start
#define ACL_VSTREAM_CTL_CONTEXT 6
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ELNRNG 48
#define EAI_FAIL -4
#define ACL_RFC1035_TYPE_A 1
#define ICMP_STATUS_INIT 0
#define ACL_PTHREAD_POOL_INCLUDE_H 
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define NI_MAXHOST 1025
#define __USE_ISOC95 1
#define _TIME_H 1
#define __USE_ISOC99 1
#define O_FSYNC O_SYNC
#define __UINT16_TYPE__ short unsigned int
#define __UINTPTR_TYPE__ long unsigned int
#define MSG_DONTROUTE MSG_DONTROUTE
#define __FLT16_MAX_10_EXP__ 4
#define __GNUC_STDC_INLINE__ 1
#define ACL_AQUEUE_ERR_COND_SIGNALE 5
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define _XOPEN_VERSION 700
#define ACL_EVENT_ACCEPT (1 << 1)
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _BITS_STDINT_UINTN_H 1
#define WINT_MAX (4294967295u)
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define __DBL_HAS_INFINITY__ 1
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define IPV6_PMTUDISC_OMIT 5
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define ECOMM 70
#define ICMP_CODE_EXTRA 16
#define ACL_XML_S_MCMT 14
#define MSG_FASTOPEN MSG_FASTOPEN
#define PF_NETROM 6
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define isspace(c) __isctype((c), _ISspace)
#define stdin stdin
#define AUT_FLAG_ELSE 6
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define acl_foreach_reverse ACL_FOREACH_REVERSE
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define _SC_CLK_TCK _SC_CLK_TCK
#define SCHED_FIFO 1
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define IPV6_ORIGDSTADDR 74
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define ACL_APP_CTL_ON_TIMEOUT ACL_MASTER_SERVER_ON_TIMEOUT
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define ACL_MASTER_SERVER_INT_TABLE 1
#define ACL_IOCTL_CTL_THREAD_MAX 1
#define IPPROTO_IPV6 IPPROTO_IPV6
#define ACL_TOKEN_WIDTH 256
#define acl_xml3_parse acl_xml3_update
#define be32toh(x) __bswap_32 (x)
#define acl_assert assert
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define IPPROTO_SCTP IPPROTO_SCTP
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define AF_ECONET PF_ECONET
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define ACL_ISDIGIT(c) isdigit(_ACL_UCHAR_(c))
#define _SIZE_T_DEFINED 
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define ACL_ECONNREFUSED ECONNREFUSED
#define _WCHAR_T_DEFINED_ 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define acl_vstream_get_char acl_vstream_getc
#define isalpha(c) __isctype((c), _ISalpha)
#define _POSIX_NO_TRUNC 1
#define ECHILD 10
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define _POSIX_REGEXP 1
#define __CFLOAT64X _Complex _Float64x
#define ACL_MASTER_STATUS_FD 5
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define ACL_JSON_T_BOOL (1 << 7)
#define ACL_MEM_SLICE_INCLUDE_H 
#define ACL_XML2_FLAG_IGNORE_SLASH (1 << 1)
#define __stub_setlogin 
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define ACL_SCAN_CTL_RMDIR_FN 3
#define __O_DSYNC 010000
#define _POSIX_MEMORY_PROTECTION 200809L
#define EAI_SOCKTYPE -7
#define ACL_DNS_ERR_NO_AUTH -9
#define __S32_TYPE int
#define IP_PKTOPTIONS 9
#define __ACL_MASTER_PROTO_INCLUDE_H__ 
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __FLT64_MIN_10_EXP__ (-307)
#define SOL_SOCKET 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __ACL_MASTER_FLOW_INCLUDED_H__ 
#define ACL_EVENT_NULL_CONTEXT ((char *) 0)
#define __toascii_l(c,l) ((l), __toascii (c))
#define ACL_XML3_S_MTAG 12
#define ACL_VSTREAM_CTL_FD 4
#define ACL_DNS_ERR_NOT_ZONE -10
#define ACL_FHANDLE_O_MLOCK (1 << 1)
#define ACL_OPEN_LOCK_INCLUDE_H 
#define PDP_ENDIAN __PDP_ENDIAN
#define IPV6_ADDRFORM 1
#define EREMOTE 66
#define S_BLKSIZE 512
#define acl_stat stat64
#define ACL_MASTER_SERVER_THREAD_EXIT_CTX 23
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define ACL_MASTER_STAT_TAKEN 0
#define ACL_VSTREAM_FLAG_RDSHORT (1 << 13)
#define ACL_FLOCK_OP_SHARED 1
#define ACL_USE_PATHS_H 
#define IPPROTO_RSVP IPPROTO_RSVP
#define ACL_MEMPOOL_CTL_DISABLE 2
#define __HAVE_FLOAT32 1
#define ACL_SPOOL_NOTIFY_FN ACL_IOCTL_NOTIFY_FN
#define _PTRDIFF_T_DECLARED 
#define _BITS_STDIO_H 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define IP_PMTUDISC_PROBE 3
#define __glibc_objsize(__o) __bos (__o)
#define acl_htable_iter_key ACL_HTABLE_ITER_KEY
#define acl_pthread_mutex_unlock pthread_mutex_unlock
#define ACL_SLICE_FLAG_OFF (0)
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 0
#define ACL_EISCONN EISCONN
#define IFF_POINTOPOINT IFF_POINTOPOINT
#define AF_RDS PF_RDS
#define IPPROTO_AH IPPROTO_AH
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define __HAVE_FLOAT64 1
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define IFHWADDRLEN 6
#define NO_RECOVERY 3
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define ACL_RFC1035_TYPE_SOA 6
#define ACL_VSTREAM_EOF (-1)
#define acl_vstream_fwrite acl_vstream_writen
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX (18446744073709551615UL)
#define _SC_BASE _SC_BASE
#define ACL_ETIMEDOUT ETIMEDOUT
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define MSG_WAITFORONE MSG_WAITFORONE
#define PF_UNSPEC 0
#define __LDBL_MIN_10_EXP__ (-4931)
#define __kernel_old_uid_t __kernel_old_uid_t
#define ACL_JSON_T_A_NULL (1 << 3)
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define _GCC_WCHAR_T 
#define __FLT32_MAX_EXP__ 128
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define S_IWUSR __S_IWRITE
#define PF_MCTP 45
#define PF_X25 9
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define ACL_APP_CTL_CFG_INT ACL_MASTER_SERVER_INT_TABLE
#define SO_PASSSEC 34
#define SIOCATMARK 0x8905
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define NETDB_INTERNAL -1
#define __ARM_FP16_FORMAT_IEEE 1
#define ACL_VSTREAM_CTL_PATH 3
#define __WTERMSIG(status) ((status) & 0x7f)
#define ACL_NORMAL_EXIT_STATUS(status) !(status)
#define _SC_PAGESIZE _SC_PAGESIZE
#define UINT_LEAST16_MAX (65535)
#define ACL_FILE_INVALID (int) -1
#define ifa_dstaddr ifa_ifu.ifu_dstaddr
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define IP_PMTUDISC_DONT 0
#define POLLNVAL 0x020
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define acl_pthread_cond_signal pthread_cond_signal
#define F_SHLCK 8
#define __useconds_t_defined 
#define ACL_EWOULDBLOCK EWOULDBLOCK
#define ACL_AIO_CTL_READ_HOOK_ADD 14
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define acl_spool_listen acl_ioctl_listen
#define INT8_MIN (-128)
#define _POSIX_SHELL 1
#define WNOHANG 1
#define _XOPEN_SHM 1
#define PF_IPX 4
#define HOST_NOT_FOUND 1
#define __PTRDIFF_T 
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define ENOCSI 50
#define _SC_WORD_BIT _SC_WORD_BIT
#define AUT_RETURN_ERROR(__test_line__) do { printf("%s(%d): %s error, line=%d\n", __FILE__, __LINE__, aut_line_cmdname(__test_line__), aut_line_number(__test_line__)); return (-1); } while (0)
#define __HAVE_GENERIC_SELECTION 1
#define _POSIX_ADVISORY_INFO 200809L
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define F_GETFL 3
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define ACL_AIO_FLAG_FLUSH_CLOSE (1 << 5)
#define ACL_VSTREAM_FLAG_EOF (1 << 11)
#define F_LOCK 1
#define _BITS_TYPES___LOCALE_T_H 1
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define ACL_XML_S_RLT 6
#define VAR_AUT_LOOP_CONTINUE "LOOP_CONTINUE"
#define SOL_NFC 280
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define ACL_DB_ERR_UPDATE 101
#define __STDC_UTF_32__ 1
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define EADDRINUSE 98
#define _VA_LIST 
#define IPPROTO_MH IPPROTO_MH
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define ACL_SCAN_CTL_FN 1
#define __INT_FAST8_MAX__ 0x7f
#define acl_ring_to_appl ACL_RING_TO_APPL
#define IFF_BROADCAST IFF_BROADCAST
#define isxdigit(c) __isctype((c), _ISxdigit)
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __WCOREFLAG 0x80
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define ACL_VSTREAM_CTL_END 0
#define ACL_ITER_INFO(iter,container) (container)->iter_info(&(iter), (container))
#define __O_DIRECTORY 040000
#define __S_ISUID 04000
#define __isascii_l(c,l) ((l), __isascii (c))
#define ACL_DB_ERR_ALLOC 105
#define __restrict_arr __restrict
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define ACL_FIONREAD_IN_TERMIOS_H 
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define __MODE_T_TYPE __U32_TYPE
#define F_SETLKW64 7
#define LIB_ACL_INCLUDE_H 
#define F_GETLK F_GETLK64
#define ACL_VSTREAM_FLAG_READ (1 << 0)
#define ACL_XML_FLAG_MULTI_ROOT (1 << 0)
#define EISDIR 21
#define ACL_VBUF_CHARAT(v,offset) ((int) (v).data[offset])
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _BITS_STRUCT_STAT_H 1
#define ACL_APP_CTL_DENY_INFO ACL_MASTER_DENY_INFO
#define ACL_MASTER_SERVER_ON_BIND ACL_MASTER_SERVER_ON_LISTEN
#define acl_vbuf_clearerr(v) ((v)->flags &= ~ACL_VBUF_FLAG_BAD)
#define INT_LEAST8_MAX (127)
#define ACL_CODE_INCLUDE_H 
#define __aarch64__ 1
#define ACL_VSTREAM_POPEN_INCLUDE_H 
#define ACL_JSON_FLAG_PART_WORD (1 << 0)
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define ACL_DNS_FLAG_ALLOC (1 << 0)
#define AF_KCM PF_KCM
#define IPPROTO_TP IPPROTO_TP
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define SO_PROTOCOL 38
#define ACL_SLICE_FLAG_GC3 (1 << 2)
#define ACL_XML3_S_TXT 11
#define ACL_MASTER_STAT_SIGHUP_ERR 3
#define ACL_XML_S_RGT 7
#define ACL_HTABLE_STAT_OK 0
#define __FLT64X_DECIMAL_DIG__ 36
#define ACL_STRINGOPS_INCLUDE_H 
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define IP_BIND_ADDRESS_NO_PORT 24
#define ACL_MASTER_SERVER_ON_TIMEOUT 18
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX (2147483647)
#define ACL_READLINE_INCLUDE_H 
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define ACL_BITS_MASK_NBBY (8)
#define AVL_MKINDEX(n,c) ((avl_index_t)(n) | (c))
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define __attribute_pure__ __attribute__ ((__pure__))
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define ACL_TOKEN_F_DENY (1 << 2)
#define ACL_DLINK_INCLUDE 
#define ACL_APP_CTL_ON_ACCEPT ACL_MASTER_SERVER_ON_ACCEPT
#define PF_XDP 44
#define ACL_JSON_T_A_BOOL (1 << 2)
#define ACL_AQUEUE_ERR_UNKNOWN -1
#define ACL_INIT_INCLUDE_H 
#define __FLT64X_IS_IEC_60559__ 2
#define CLOCK_BOOTTIME_ALARM 9
#define ECONNABORTED 103
#define __SIZEOF_DOUBLE__ 8
#define __LDBL_DECIMAL_DIG__ 36
#define INT_LEAST8_MIN (-128)
#define ACL_VSTREAM_CTL_TIMEOUT 5
#define errno (*__errno_location ())
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define acl_vstring_str(vp) ((char *) (vp)->vbuf.data)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define _PTRDIFF_T_ 
#define ACL_MAKE_DIRS_INCLUDE_H 
#define SO_KEEPALIVE 9
#define ACL_MBOX_INCLUDE_H 
#define __ACL_DEFINE_MACOSX_INCLUDE_H__ 
#define ACL_VSTREAM_SET_FILE(stream_ptr,_fh) do { ACL_VSTREAM *__stream_ptr = stream_ptr; __stream_ptr->fd.h_file = _fh; } while (0)
#define acl_vstream_ftimeout(stream_ptr) ((stream_ptr)->flag & ACL_VSTREAM_FLAG_TIMEOUT)
#define acl_pthread_cond_timedwait pthread_cond_timedwait
#define ACL_EINPROGRESS EINPROGRESS
#define INT_LEAST32_MIN (-2147483647-1)
#define __ssize_t_defined 
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __GXX_ABI_VERSION 1016
#define ifr_slave ifr_ifru.ifru_slave
#define __ACL_UDP_PARAMS_INCLUDE_H_ 
#define F_UNLCK 2
#define UIO_MAXIOV __IOV_MAX
#define __USE_XOPEN2K8 1
#define ACL_VSTREAM_FLAG_CLIENT (1 << 14)
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define islower_l(c,l) __islower_l ((c), (l))
#define __UQUAD_TYPE unsigned long int
#define ACL_RES_USE_UDP 0
#define st_mtime st_mtim.tv_sec
#define ACL_MSGIO_EXCEPT 2
#define __STRING(x) #x
#define SO_OOBINLINE 10
#define EHOSTUNREACH 113
#define NI_NUMERICHOST 1
#define __F_GETOWN 9
#define ifa_broadaddr ifa_ifu.ifu_broadaddr
#define EBUSY 16
#define __INO_T_TYPE __ULONGWORD_TYPE
#define islower(c) __isctype((c), _ISlower)
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __F_SETOWN_EX 15
#define F_ULOCK 0
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define __struct_tm_defined 1
#define _SC_TRACE _SC_TRACE
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define EBADFD 77
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define _SC_FSYNC _SC_FSYNC
#define ACL_TOKEN_TREE_INCLUDE_H 
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#define PF_BRIDGE 7
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define ACL_SPOOL_CTL_DELAY_USEC ACL_IOCTL_CTL_DELAY_USEC
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define PF_TIPC 30
#define ACL_MASTER_XPORT_NAME_FIFO "fifo"
#define ACL_EVENT_RW_TIMEOUT (1 << 6)
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define ACL_VSTREAM_FLAG_PREREAD (1 << 19)
#define ACL_MSGIO_OK 0
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define IPV6_MULTICAST_HOPS 18
#define __nlink_t_defined 
#define _SC_2_C_BIND _SC_2_C_BIND
#define IPV6_TRANSPARENT 75
#define ACL_MSGIO_ON_MSG(id,callback,arg) do { acl_msgio_reg(NULL, id, callback, arg); } while(0)
#define ACL_MEM_HOOK_INCLUDE_H 
#define AT_FDCWD -100
#define _SYS_SIZE_T_H 
#define INT32_MAX (2147483647)
#define __USE_ATFILE 1
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define ACL_VSTREAM_POPEN_COMMAND 1
#define ACL_ASTREAM_STATUS_CONNECT_ERROR 2
#define _PATH_PROTOCOLS "/etc/protocols"
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __S_IFMT 0170000
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define __STDC_IEC_559_COMPLEX__ 1
#define acl_int64 long long int
#define CLOCK_REALTIME 0
#define acl_spool_disable_readwrite acl_ioctl_disable_readwrite
#define SO_INCOMING_CPU 49
#define _BITS_FLOATN_H 
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define ACL_RFC1035_TYPE_AXFR 252
#define __FLT128_DIG__ 33
#define __SCHAR_WIDTH__ 8
#define ACL_VSTREAM_TYPE_INET4 (1 << 6)
#define ACL_VSTREAM_TYPE_INET6 (1 << 7)
#define IP_ADD_MEMBERSHIP 35
#define __FLT32_MAX_10_EXP__ 38
#define ACL_GBCODE_INCLUDE_H 
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define ACL_XINETD_CFG_INCLUDE_H 
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define IF_NAMESIZE 16
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define __INT_FAST32_TYPE__ long int
#define AF_ROUTE PF_ROUTE
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define S_IWGRP (S_IWUSR >> 3)
#define ACL_MASTER_SERVER_API_INCLUDE_H 
#define __FLT64_IS_IEC_60559__ 2
#define ACL_JSON_T_A_DOUBLE (1 << 4)
#define ACL_BINHASH_ITER_KEY(iter) ((iter).ptr->key.c_key)
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define _PC_PATH_MAX _PC_PATH_MAX
#define isgraph(c) __isctype((c), _ISgraph)
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#define ACL_AIO_CTL_CONNECT_HOOK_ADD 22
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define _PC_LINK_MAX _PC_LINK_MAX
#define ESHUTDOWN 108
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define SO_SNDTIMEO_NEW 67
#define ICMP_STATUS_TIMEOUT (1<<2)
#define ACL_ETIME ETIME
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define POLLWRBAND 0x200
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define ACL_XML_S_LTAG 5
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define F_SETOWN __F_SETOWN
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define __FLT64X_DIG__ 33
#define ACL_XML3_FLAG_IGNORE_SLASH (1 << 1)
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define __INT8_TYPE__ signed char
#define __AARCH64EL__ 1
#define acl_foreach ACL_FOREACH
#define ACL_VBUF_FLAG_BAD (ACL_VBUF_FLAG_ERR | ACL_VBUF_FLAG_EOF | ACL_VBUF_FLAG_TIMEOUT)
#define __ELF__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define ACL_XML_F_META_CM (1 << 1)
#define ACL_MALLOC_INCLUDE_H 
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define _BITS_BYTESWAP_H 1
#define __suseconds_t_defined 
#define __ID_T_TYPE __U32_TYPE
#define isdigit(c) __isctype((c), _ISdigit)
#define ELIBSCN 81
#define F_TLOCK 2
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define SOL_RAW 255
#define ACL_XML_F_META_EM (1 << 2)
#define ACL_VBUF_TERM(v) ((v)->ptr < (v)->data + (v)->len ? *(v)->ptr = 0 : ACL_VBUF_SPACE((v), 1), *(v)->ptr = 0)
#define __FLT_RADIX__ 2
#define SO_REUSEPORT 15
#define AUT_SET_INT(__test_line__,__name__,__value__) do { const char *__ptr__; __ptr__ = aut_line_getvalue(__test_line__, __name__); if (__ptr__ == NULL) { printf("%s(%d): getvalue error for %s, line=%d\n", __FILE__, __LINE__, __name__, aut_line_number(__test_line__)); return (-1); } __value__ = atoi(__ptr__); } while (0)
#define ACL_TRIGGER_REQ_WAKEUP 'W'
#define ACL_PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define __stub_sigreturn 
#define _BITS_TIME64_H 1
#define POLLOUT 0x004
#define EAI_BADFLAGS -1
#define ACL_RFC1035_TYPE_MD 3
#define ACL_RFC1035_TYPE_MF 4
#define ACL_RFC1035_TYPE_MG 8
#define ACL_RFC1035_TYPE_MR 9
#define ACL_RFC1035_TYPE_MX 15
#define ACL_BITS_MASK_FD_BYTE(number,mask) (((unsigned char *) (mask)->data)[(number) / ACL_BITS_MASK_NBBY])
#define AUT_OBJ_OUTER 0
#define AF_ATMSVC PF_ATMSVC
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define SOL_RDS 276
#define BUFSIZ 8192
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define ACL_RFC1035_TYPE_NS 2
#define CLOCK_MONOTONIC_RAW 4
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define ACL_MASK_ADDR_H_INCLUDED 
#define MSG_TRUNC MSG_TRUNC
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define AF_VSOCK PF_VSOCK
#define __f32(x) x ##f32
#define ICMP_MAX_PACKET 1024
#define SO_PREFER_BUSY_POLL 69
#define ACL_AQUEUE_OK 0
#define ACL_MASTER_SERVER_BOOL_TABLE 3
#define VAR_AUT_LOG_FPRINT 0x0010
#define _POSIX_TIMEOUTS 200809L
#define ACL_XML_S_LEM 4
#define ACL_FHANDLE_PATH(x) (ACL_VSTREAM_PATH((x)->fp))
#define EOVERFLOW 75
#define S_IRUSR __S_IREAD
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define ACL_AIO_CTL_CTX 3
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define O_CLOEXEC __O_CLOEXEC
#define __SIZEOF_PTHREAD_COND_T 48
#define ACL_XML3_S_LEM 4
#define SEEK_SET 0
#define ACL_MYCHOWN_INCLUDE_H 
#define AF_IEEE802154 PF_IEEE802154
#define ACL_SCAN_CTL_CTX 2
#define ACL_TOKEN_F_UTF8 (1 << 3)
#define __f64(x) x ##f64
#define ACL_HTABLE_CTL_END 0
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define ACL_DLL_HANDLE void*
#define ACL_ISPUNCT(c) ispunct(_ACL_UCHAR_(c))
#define __FLT32X_MANT_DIG__ 53
#define CLOCK_TAI 11
#define acl_fifo_foreach ACL_FIFO_FOREACH
#define EUCLEAN 117
#define _POSIX_IPV6 200809L
#define acl_vstream_buffed_fwrite acl_vstream_buffed_writen
#define IP_MSFILTER 41
#define _EXTERN_INLINE __extern_inline
#define unix 1
#define ACL_VSTREAM_POPEN_WAITPID_FN 7
#define EAI_OVERFLOW -12
#define ACL_RING_FIRST_APPL(head,app_type,ring_member) (acl_ring_succ(head) != (head) ? ACL_RING_TO_APPL(acl_ring_succ(head), app_type, ring_member) : 0)
#define IP_BLOCK_SOURCE 38
#define __S_IEXEC 0100
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define acl_spool_request_timer acl_ioctl_request_timer
#define W_OK 2
#define _SIZE_T_ 
#define __FLT16_IS_IEC_60559__ 2
#define ACL_AIO_CTL_CLOSE_HOOK_DEL 19
#define __FLT16_MAX_EXP__ 16
#define UINT_FAST32_MAX (18446744073709551615UL)
#define O_CREAT 0100
#define __S_IWRITE 0200
#define ACL_IF_VSTREAM_ERR(stream_ptr) ((stream_ptr)->flag & ACL_VSTREAM_FLAG_BAD)
#define _WCHAR_T_H 
#define IP_RETOPTS 7
#define EPROTO 71
#define ENODEV 19
#define __stub_revoke 
#define _POSIX_CHOWN_RESTRICTED 0
#define __ARM_PCS_AAPCS64 1
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define __stub___compat_create_module 
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define _POSIX_MONOTONIC_CLOCK 0
#define ACL_RING_INCLUDE_H 
#define EKEYEXPIRED 127
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 6
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define _POSIX_TRACE_INHERIT -1
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define ACL_RING_DETACH(entry_in) do { ACL_RING *succ, *pred, *entry_ptr = (entry_in); succ = entry_ptr->succ; pred = entry_ptr->pred; if (succ != NULL && pred != NULL) { pred->succ = succ; succ->pred = pred; entry_ptr->parent->len--; entry_ptr->succ = entry_ptr->pred = NULL; } } while (0)
#define ACL_DBPOOL_INCLUDE_H 
#define _PATH_NETWORKS "/etc/networks"
#define WUNTRACED 2
#define SO_CNX_ADVICE 53
#define ACL_PTHREAD_MUTEX_RECURSIVE PTHREAD_MUTEX_RECURSIVE_NP
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define ACL_JSON_INCLUDE_H 
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO _PC_SYNC_IO
#define va_copy(d,s) __builtin_va_copy(d,s)
#define acl_vstring_end(vp) ((char *) (vp)->vbuf.ptr)
#define EHWPOISON 133
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define __FLT_HAS_INFINITY__ 1
#define ACL_EVENT_NULL_TYPE 0
#define SO_SNDBUF 7
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define ACL_XML2_S_TXT 11
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define _BSD_PTRDIFF_T_ 
#define acl_vstream_readline acl_vstream_gets
#define VAR_AUT_GOTO "GOTO"
#define ACL_CFG_SET_ITEM_INT(_xcp_,_name_,_obj_,_def_) do { ACL_XINETD_CFG_PARSER *_tmp_xcp_ = _xcp_; const char *_ptr_; _ptr_ = acl_xinetd_cfg_get(_tmp_xcp_, _name_); if (_ptr_ && *_ptr_) { _obj_ = atoi(_ptr_); if (_obj_ <= 0) _obj_ = _def_; } else _obj_ = _def_; } while (0);
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define ACL_SPOOL_CTL_END ACL_IOCTL_CTL_END
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define acl_pthread_self pthread_self
#define ACL_XML3_F_META (ACL_XML3_F_META_QM | ACL_XML3_F_META_CM | ACL_XML3_F_META_EM)
#define __INT_FAST32_WIDTH__ 64
#define NULL ((void *)0)
#define AF_IRDA PF_IRDA
#define SO_DEBUG 1
#define AVL_XPARENT(n) ((struct avl_node *)((n)->avl_pcb & ~7))
#define ACL_XML3_INCLUDE_H 
#define AT_SYMLINK_NOFOLLOW 0x100
#define E2BIG 7
#define BIG_ENDIAN __BIG_ENDIAN
#define PF_PPPOX 24
#define O_ASYNC 020000
#define SO_TIMESTAMPNS_NEW 64
#define _WCHAR_T_DECLARED 
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define NO_DATA 4
#define ACL_HTABLE_FOREACH_REVERSE(iter,table_ptr) if (table_ptr) for((void) acl_htable_iter_tail((table_ptr), &iter); (iter).ptr; (void) acl_htable_iter_prev(&iter))
#define AF_RXRPC PF_RXRPC
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define EL3RST 47
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define POLLHUP 0x010
#define ACL_DBH_STATUS_READY 1
#define ACL_VSTRING_ADDCH(vp,ch) ACL_VBUF_PUT(&(vp)->vbuf, ch)
#define ACL_PATH_DEFPATH "/usr/bin"
#define ACL_RES_ERR_CONN -104
#define ACL_BINHASH_FLAG_SLICE2 (1 << 3)
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define ACL_LOADCFG_INCLUDE_H 
#define SOL_KCM 281
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define PATH_SEP_C '/'
#define ACL_AVL_IMPL_H 
#define __STDC_VERSION__ 201710L
#define ACL_XML2_FLAG_XML_DECODE (1 << 2)
#define ENOTDIR 20
#define AVL_XCHILD(n) (((n)->avl_pcb >> 2) & 1)
#define __WCLONE 0x80000000
#define TIMER_ABSTIME 1
#define ACL_VBUF_FLAG_MMAP (1<<6)
#define ACL_XML_S_TXT 11
#define __ARM_ARCH 8
#define __PMT(args) args
#define AF_SMC PF_SMC
#define AF_NETBEUI PF_NETBEUI
#define IPV6_2292RTHDR 5
#define __ACL_PTHREAD_INCLUDE_H__ 
#define ECONNRESET 104
#define ACL_VSTRING_BASE64_CODE_INCLUDE_H 
#define ACL_XML2_S_LCH 3
#define AF_SNA PF_SNA
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define ENXIO 6
#define CLOCK_MONOTONIC 1
#define ACL_XML_F_META_QM (1 << 0)
#define IPV6_RTHDR_LOOSE 0
#define ACL_RFC1035_TYPE_TXT 16
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define ICMP_MIN_PACKET 32
#define ifr_ifindex ifr_ifru.ifru_ivalue
#define CLOCK_THREAD_CPUTIME_ID 3
#define F_GETLK64 5
#define EBADRQC 56
#define ACL_XML2_S_LEM 4
#define ACL_VSPRINTF_INCLUDE_H 
#define L_XTND SEEK_END
#define __WALL 0x40000000
#define MCAST_JOIN_GROUP 42
#define acl_ring_succ ACL_RING_SUCC
#define ACL_DONT_GRIPE 0
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define __ACL_RFC1035_INCLUDE_H__ 
#define IN_CLASSA_NSHIFT 24
#define VAR_AUT_STOP "STOP"
#define __KEY_T_TYPE __S32_TYPE
#define FAPPEND O_APPEND
#define __F_SETSIG 10
#define POLLWRNORM 0x100
#define ACL_XML2_S_LGT 2
#define ACL_URLCODE_INCLUDE_H 
#define ACL_BITS_MASK_ALLOC(mask,nmax) do { size_t _byte_len = ACL_BITS_MASK_BYTES_NEEDED(nmax); (mask)->data = (char*) acl_mymalloc(_byte_len); memset((mask)->data, 0, _byte_len); (mask)->data_len = _byte_len; } while (0)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define __stub___compat_get_kernel_syms 
#define IPV6_RECVFRAGSIZE 77
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define __FLT64_HAS_INFINITY__ 1
#define IPV6_JOIN_GROUP 20
#define ICMP_STATUS_OK 1
#define _STRING_H 1
#define __GNUC_VA_LIST 
#define WSTOPPED 2
#define ACL_XML_F_LEAF (1 << 4)
#define ACL_EXPERIMENT_INCLUDE_H 
#define _XOPEN_REALTIME 1
#define assert(expr) ((void) sizeof ((expr) ? 1 : 0), __extension__ ({ if (expr) ; else __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION); }))
#define ACL_TRACE_INCLUDE_H 
#define ACL_FHANDLE_O_DIRECT (1 << 4)
#define FILENAME_MAX 4096
#define SOL_RXRPC 272
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define acl_fstat fstat64
#define IPPROTO_RAW IPPROTO_RAW
#define __ino_t_defined 
#define ACL_XML2_IS_COMMENT(x) (((x)->flag & ACL_XML2_F_META_CM))
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define __CLOCKID_T_TYPE __S32_TYPE
#define ACL_VSTREAM_FLAG_CACHE_SEEK (1 << 3)
#define ACL_XML2_S_LLT 1
#define ACL_PTHREAD_RWLOCK_INITIALIZER NULL
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define _POSIX_MEMLOCK_RANGE 200809L
#define IPPROTO_ICMP IPPROTO_ICMP
#define S_IEXEC S_IXUSR
#define ACL_VSTREAM_SET_RWTIMO(stream_ptr,_rw_timeo) do { ACL_VSTREAM *__stream_ptr = stream_ptr; __stream_ptr->rw_timeout = _rw_timeo; } while (0)
#define ACL_MASTER_SERVER_THREAD_INIT_CTX 21
#define ELIBEXEC 83
#define ACL_MSGIO_CONNECT_TIMEOUT 4
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define acl_pthread_key_create pthread_key_create
#define ACL_BITS_MASK_BYTES_NEEDED(len) (size_t) (((acl_int64) (len) + (ACL_BITS_MASK_NBBY - 1)) / ACL_BITS_MASK_NBBY)
#define __INT_FAST64_WIDTH__ 64
#define ACL_PRINT_CHAR(x) ((((x) >= 'a' && (x) <='z') || ((x) >= 'A' && (x) <= 'Z') || ((x) >= '0' && (x) <= '9') || (x) == ';' || (x) == '!' || (x) == ':' || (x) == ',' || (x) == '.' || (x) == '@' || (x) == '#' || (x) == '$' || (x) == '%' || (x) == '^' || (x) == '&' || (x) == '*' || (x) == '(' || (x) == ')' || (x) == '-' || (x) == '=' || (x) == '|' || (x) == '\\' || (x) == '[' || (x) == ']' || (x) == '{' || (x) == '}' || (x) == '\'' || (x) == '"') ? (x) : '-')
#define ACL_ISALPHA(c) isalpha(_ACL_UCHAR_(c))
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ACL_HTABLE_FOREACH(iter,table_ptr) if (table_ptr) for((void) acl_htable_iter_head((table_ptr), &iter); (iter).ptr; (void) acl_htable_iter_next(&iter))
#define __BYTE_ORDER __LITTLE_ENDIAN
#define _BITS_UIO_LIM_H 1
#define ACL_VSTREAM_SET_SOCK(stream_ptr,_fd) do { ACL_VSTREAM *__stream_ptr = stream_ptr; __stream_ptr->fd.sock = _fd; } while (0)
#define ACL_TIMER_INCLUDE_H 
#define ACL_XML_S_LCH 3
#define EADDRNOTAVAIL 99
#define ETIME 62
#define _NETDB_H 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define ACL_MASTER_CLASS_PUBLIC "public"
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define INT_FAST32_MAX (9223372036854775807L)
#define ACL_PTHREAD_KEYS_MAX PTHREAD_KEYS_MAX
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define EBADF 9
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define __UINT_FAST64_TYPE__ long unsigned int
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define ACL_BLOCKING 0
#define _SC_2_PBS _SC_2_PBS
#define __LDBL_REDIR_DECL(name) 
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define F_GETFD 1
#define BYTE_ORDER __BYTE_ORDER
#define AUT_FLAG_ENDIF 8
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define ACL_AIO_CTL_WRITE_HOOK_ADD 16
#define SOL_IUCV 277
#define ACL_VBUF_PUT(v,c) ((v)->ptr < (v)->data + (v)->len ? (int) (*(v)->ptr++ = (c)) : acl_vbuf_put((v),(c)))
#define acl_fifo_iter_value ACL_FIFO_ITER_VALUE
#define IPV6_RTHDR 57
#define ACL_XML_S_LGT 2
#define STDIN_FILENO 0
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define _BITS_TYPES_LOCALE_T_H 1
#define acl_mystr_truncate_byln acl_strtrunc_byln
#define __CPU_SETSIZE 1024
#define ENOTRECOVERABLE 131
#define UINT_FAST8_MAX (255)
#define PF_ATMSVC 20
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define __WNOTHREAD 0x20000000
#define ACL_MASTER_SERVER_SOLITARY 14
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define AF_LLC PF_LLC
#define IFF_PROMISC IFF_PROMISC
#define __INT64_TYPE__ long int
#define EIO 5
#define CLOCK_PROCESS_CPUTIME_ID 2
#define ACL_ASTREAM_STATUS_INVALID -1
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define ENETUNREACH 101
#define EXDEV 18
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define ACL_DNS_OK 0
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define S_IRGRP (S_IRUSR >> 3)
#define UINT32_C(c) c ## U
#define ACL_THREAD_INCLUDE_H 
#define ACL_XML3_F_SELF_CL (1 << 3)
#define PF_PACKET 17
#define MSG_SYN MSG_SYN
#define __INO64_T_TYPE __UQUAD_TYPE
#define _POSIX_V6_ILP32_OFF32 -1
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define _POSIX_TRACE -1
#define ACL_MASTER_SERVER_THREAD_EXIT 22
#define ACL_FIFO_FOREACH_REVERSE(iter,fifo_ptr) for ((iter).ptr = (fifo_ptr)->tail; (iter).ptr; (iter).ptr = (iter).ptr->prev)
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define SO_DETACH_BPF SO_DETACH_FILTER
#define __WINT_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define STDOUT_FILENO 1
#define ACL_FLOCK_OP_EXCLUSIVE 2
#define __intptr_t_defined 
#define acl_spool_enable_read acl_ioctl_enable_read
#define ACL_TOKEN_F_NONE 0
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define acl_spool_cancel_timer acl_ioctl_cancel_timer
#define ACL_XML_S_CDATA 16
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ACL_MSGIO_USER 1000
#define ENOEXEC 8
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define EOF (-1)
#define ACL_MYDB_INCLUDE_H 
#define __USE_POSIX199309 1
#define SO_RCVBUF 8
#define S_ISREG(mode) __S_ISTYPE((mode), __S_IFREG)
#define ACL_MDT_FLAG_SLICE1 (1 << 10)
#define ACL_MDT_FLAG_SLICE2 (1 << 11)
#define ACL_MDT_FLAG_SLICE3 (1 << 12)
#define sched_priority sched_priority
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __LDBL_MAX_10_EXP__ 4932
#define ACL_TLS_OUT_OF_INDEXES 0xffffffff
#define acl_pthread_create pthread_create
#define _POSIX_SEMAPHORES 200809L
#define IFF_DEBUG IFF_DEBUG
#define __ATOMIC_RELAXED 0
#define ACL_XML_IS_COMMENT(x) (((x)->flag & ACL_XML_F_META_CM))
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define ACL_DBH_STATUS_INUSE 2
#define ACL_UNUSED __attribute__((__unused__))
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define SCM_TIMESTAMPING_OPT_STATS 54
#define EROFS 30
#define ACL_VSTRING_VSTREAM_INCLUDE_H 
#define le16toh(x) __uint16_identity (x)
#define VAR_AUT_IF "IF"
#define ENOSTR 60
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define ACL_DB_ERR_AFFECTED 104
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define ACL_ATOMIC_INCLUDE_H 
#define ESRCH 3
#define ACL_ADDR_SEP '|'
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define SOL_CAIF 278
#define acl_json_create_leaf acl_json_create_text
#define ECHRNG 44
#define _SC_REGEXP _SC_REGEXP
#define EHOSTDOWN 112
#define VAR_AUT_SLEEP "SLEEP"
#define _LFS_LARGEFILE 1
#define __wchar_t__ 
#define ACL_DB_ERR_STORE 103
#define ACL_SYS_PATCH_INCLUDE_H 
#define SEEK_END 2
#define ACL_HTABLE_STAT_DUPLEX_KEY 2
#define ACL_XML3_S_NXT 0
#define S_IWOTH (S_IWGRP >> 3)
#define ACL_DNS_ERR_FMT -1
#define ENFILE 23
#define ACL_MASTER_XPORT_NAME_UDP "udp"
#define ACL_VSTRING_AT_OFFSET(vp,offset) { (vp)->vbuf.ptr = (vp)->vbuf.data + (offset); }
#define SO_SNDTIMEO_OLD 21
#define MSG_DONTWAIT MSG_DONTWAIT
#define __ATOMIC_RELEASE 3
#define __ICMP_INCLUDE_H__ 
#define ACL_PROCTL_INCLUDE_H 
#define ACL_VSTRING_SPACE(vp,len) ACL_VBUF_SPACE(&(vp)->vbuf, len)
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define _XOPEN_UNIX 1
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define be64toh(x) __bswap_64 (x)
#define ENOSYS 38
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define IFF_RUNNING IFF_RUNNING
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define ACL_MDT_FLAG_UNI (1 << 0)
#define AI_PASSIVE 0x0001
#define ACL_SOCKET_RBUF_SIZE 204800
#define __INT_FAST8_TYPE__ signed char
#define PF_RDS 21
#define _SC_TIMERS _SC_TIMERS
#define va_arg(v,l) __builtin_va_arg(v,l)
#define _THREAD_SHARED_TYPES_H 1
#define AT_REMOVEDIR 0x200
#define __f128(x) x ##f128
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define SO_BUF_LOCK 72
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define _POSIX_SAVED_IDS 1
#define ACL_CONFIG_INT64_TABLE ACL_CFG_INT64_TABLE
#define __HAVE_DISTINCT_FLOAT32 0
#define ENOTSUP EOPNOTSUPP
#define IP_CHECKSUM 23
#define SO_PRIORITY 12
#define __FP_FAST_FMAF32x 1
#define R_OK 4
#define __FLT16_HAS_DENORM__ 1
#define toascii_l(c,l) __toascii_l ((c), (l))
#define _BITS_STDIO_LIM_H 1
#define AF_NETLINK PF_NETLINK
#define __INT_FAST8_WIDTH__ 8
#define ACL_HTABLE_FLAG_KEY_REUSE (1 << 0)
#define ACL_MYMASTER_INCLUDE_H 
#define EDEADLOCK EDEADLK
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define ACL_BINHASH_FOREACH_REVERSE(iter,table_ptr) if (table_ptr) for((void) acl_binhash_iter_tail((table_ptr), &iter); (iter).ptr; (void) acl_binhash_iter_prev(&iter))
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __ULONG32_TYPE unsigned int
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define _PATH_HOSTS "/etc/hosts"
#define UTIME_OMIT ((1l << 30) - 2l)
#define acl_pthread_mutexattr_init pthread_mutexattr_init
#define ACL_MASTER_SERVER_INT64_TABLE 6
#define FOPEN_MAX 16
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define ACL_SPOOL_WORKER_FN ACL_IOCTL_WORKER_FN
#define POLLPRI 0x002
#define ACL_APP_CTL_ON_CLOSE ACL_MASTER_SERVER_ON_CLOSE
#define __off_t_defined 
#define _POSIX_V6_ILP32_OFFBIG -1
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define ACL_FHANDLE_O_SYNC (1 << 5)
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define acl_spool_isrset acl_ioctl_isrset
#define ACL_XML_F_META (ACL_XML_F_META_QM | ACL_XML_F_META_CM | ACL_XML_F_META_EM)
#define ACL_HTABLE_ITER_KEY(iter) ((iter).ptr->key.c_key)
#define _GCC_SIZE_T 
#define ACL_VSTREAM_FILE(stream_ptr) ((stream_ptr)->fd.h_file)
#define acl_fifo_push acl_fifo_push_back
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define ACL_APP_CTL_CFG_INT64 ACL_MASTER_SERVER_INT64_TABLE
#define ACL_EVENTS_H_INCLUDED 
#define ACL_ARGV_END ((char *) 0)
#define acl_pthread_cond_wait pthread_cond_wait
#define __W_CONTINUED 0xffff
#define L_SET SEEK_SET
#define SO_PEERGROUPS 59
#define ACL_SPLIT_AT_INCLUDE_H 
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define acl_mystrline acl_strline
#define ACL_FHANDLE_O_FLOCK (1 << 0)
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define IPV6_RTHDRDSTOPTS 55
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define ACL_MASTER_SERVER_RAW_TABLE 5
#define SIOCGSTAMPNS_OLD 0x8907
#define IP_MINTTL 21
#define ACL_IOCTL_CTL_EXIT_CTX 8
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __POSIX_FADV_DONTNEED 4
#define __ONCE_FLAG_INIT { 0 }
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define ACL_FLOCK_INCLUDE_H 
#define ACL_XML3_S_RGT 7
#define SO_TIMESTAMP_NEW 63
#define isascii_l(c,l) __isascii_l ((c), (l))
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define ACL_PREPARE_COMPILE 1
#define AF_DECnet PF_DECnet
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define __STDLIB_MB_LEN_MAX 16
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define AI_NUMERICHOST 0x0004
#define __S_IFIFO 0010000
#define IP_FREEBIND 15
#define VAR_AUT_ITEM_COUNT "COUNT"
#define __INO_T_MATCHES_INO64_T 1
#define ACL_VSTREAM_TYPE_LISTEN_INET (1 << 3)
#define __POSIX_FADV_NOREUSE 5
#define EAI_AGAIN -3
#define ENOPROTOOPT 92
#define ACL_HTABLE_CTL_RWLOCK 1
#define ACL_ENV_INCLUDE_H 
#define ACL_IOCTL_CTL_DELAY_USEC 4
#define SO_ATTACH_BPF 50
#define __GLIBC_USE_IEC_60559_EXT 0
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define UINT_LEAST32_MAX (4294967295U)
#define INT32_C(c) c
#define _BITS_SETJMP_H 1
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define AUT_OBJ_INNER 1
#define __lldiv_t_defined 1
#define ACL_FHANDLE_O_NOATIME (1 << 3)
#define MSG_EOR MSG_EOR
#define __STRINGS_FORTIFIED 1
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define _ASSERT_H 1
#define ACL_RFC1035_TYPE_MAILA 253
#define ACL_RFC1035_TYPE_MAILB 253
#define __time_t_defined 1
#define _SC_INT_MIN _SC_INT_MIN
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define ACL_RES_ERR_SEND -100
#define IN_MULTICAST(a) IN_CLASSD(a)
#define ACL_FPATH(fp) ACL_VSTREAM_PATH((fp)->fp)
#define AT_EACCESS 0x200
#define _T_SIZE_ 
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define ACL_ASTREAM_STATUS_NS_ERROR 1
#define EFAULT 14
#define AVL_SETPARENT(n,p) ((n)->avl_pcb = (((n)->avl_pcb & 7) | (uintptr_t)(p)))
#define ACL_FIFO_FOREACH(iter,fifo_ptr) for ((iter).ptr = (fifo_ptr)->head; (iter).ptr; (iter).ptr = (iter).ptr->next)
#define ACL_VSTRING_TERMINATE(vp) ACL_VBUF_TERM(&(vp)->vbuf)
#define ACL_IOCTL_CTL_INIT_CTX 7
#define ACL_EVENT_CONNECT (1 << 3)
#define ACL_MSGIO_TIMEOUT 1
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define ACL_EVENT_KERNEL 2
#define acl_ring_first_appl ACL_RING_FIRST_APPL
#define PF_KCM 41
#define ACL_CHUNK_CHAIN_INCLUDE_H 
#define ACL_APP_CTL_END ACL_MASTER_SERVER_END
#define acl_pthread_mutex_lock pthread_mutex_lock
#define ACL_SAFE_STRNCPY(_obj,_src,_size) do { if (_size > 0) { size_t _n = strlen(_src); _n = _n > (size_t ) _size - 1? (size_t) _size - 1 : _n; memcpy(_obj, _src, _n); _obj[_n] = 0; } } while (0)
#define EWOULDBLOCK EAGAIN
#define S_IRWXG (S_IRWXU >> 3)
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define S_IXGRP (S_IXUSR >> 3)
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define ACL_AIO_FLAG_ISRD (1 << 1)
#define SO_TIMESTAMPING_NEW 65
#define ACL_ALLOCATOR_CTL_MAX_SIZE 2
#define __GNUC_MINOR__ 3
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define PF_KEY 15
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define acl_pthread_cond_init pthread_cond_init
#define VAR_AUT_LOOP_END "LOOP_END"
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define INTMAX_C(c) c ## L
#define POSIX_FADV_RANDOM 1
#define ACL_FLOCK_OP_NONE 0
#define _STDINT_H 1
#define __FILE_defined 1
#define IN_CLASSC_NSHIFT 8
#define ACL_DNS_FLAG_CHECK_DNS_IP (1 << 1)
#define ACL_AIO_CTL_TIMEOUT 4
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define SCM_TIMESTAMP SO_TIMESTAMP
#define ACL_STACK_INCLUDE_H 
#define SOL_ICMPV6 58
#define ACL_DEFINE_UNIX_INCLUDE_H 
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define ACL_CONFIG_BOOL_TABLE ACL_CFG_BOOL_TABLE
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define ELIBMAX 82
#define static_assert _Static_assert
#define ACL_MASTER_SERVER_ON_UNBIND 29
#define ACL_AIO_FLAG_ISWR (1 << 2)
#define ACL_RES_INCLUDE_H 
#define SOMAXCONN 4096
#define ACL_UNIT_TEST_INCLUDE_H 
#define acl_spool_enable_connect acl_ioctl_enable_connect
#define __ino64_t_defined 
#define ACL_MDT_FLAG_NUL (0)
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define AF_ISDN PF_ISDN
#define __clockid_t_defined 1
#define ICMP_API 
#define ACL_MASTER_SERVER_IN_FLOW_DELAY 8
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define acl_pthread_cond_broadcast pthread_cond_broadcast
#define IPV6_MULTICAST_LOOP 19
#define __UINT8_TYPE__ unsigned char
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define IPV6_2292HOPLIMIT 8
#define ACL_XML2_INCLUDE_H 
#define ENOENT 2
#define F_SETFD 2
#define IPV6_LEAVE_ANYCAST 28
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define ITIMER_REAL ITIMER_REAL
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define PF_IB 27
#define __glibc_has_builtin(name) __has_builtin (name)
#define _POSIX_TIMERS 200809L
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define EBADSLT 57
#define IPV6_PMTUDISC_DONT 0
#define AI_CANONNAME 0x0002
#define EKEYREVOKED 128
#define IP_MULTICAST_TTL 33
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define __HAVE_DISTINCT_FLOAT64X 0
#define __SIZEOF_LONG_LONG__ 8
#define ACL_BINHASH_INCLUDE_H 
#define EKEYREJECTED 129
#define POSIX_FADV_SEQUENTIAL 2
#define ACL_PRINTF(format_idx,arg_idx) __attribute__((__format__ (__printf__, (format_idx), (arg_idx))))
#define _GCC_PTRDIFF_T 
#define __O_PATH 010000000
#define ACL_RING_SUCC(c) ((c)->succ)
#define ACL_VSTRING_SKIP(vp) { while ((vp)->vbuf.ptr < (vp)->vbuf.data + (vp)->vbuf.len && *(vp)->vbuf.ptr) { (vp)->vbuf.ptr++; } }
#define WSTOPSIG(status) __WSTOPSIG (status)
#define B_FALSE 0
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define ACL_MSGIO_CONNECT 3
#define __LDBL_DIG__ 33
#define __exctype(name) extern int name (int) __THROW
#define _SC_NZERO _SC_NZERO
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define S_IROTH (S_IRGRP >> 3)
#define ACL_MYSTRING_INCLUDE_H 
#define ACL_VSTRING_CTL_MAXLEN 1
#define SO_TIMESTAMPNS_OLD 35
#define __POSIX2_THIS_VERSION 200809L
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define acl_pthread_attr_init pthread_attr_init
#define X_OK 1
#define ACL_JSON_FLAG_ADD_SPACE (1 << 1)
#define SOL_XDP 283
#define IP_PMTUDISC_INTERFACE 4
#define PF_VSOCK 40
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define ACL_JSON_T_NULL (1 << 8)
#define _BITS_CPU_SET_H 1
#define acl_fifo_foreach_reverse ACL_FIFO_FOREACH_REVERSE
#define PF_LOCAL 1
#define IPV6_MTU 24
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define IP_RECVRETOPTS IP_RETOPTS
#define __fsblkcnt_t_defined 
#define ACL_INET_FLAG_NBLOCK 1
#define EMEDIUMTYPE 124
#define ACL_BITS_MASK_ISSET(number,mask) (ACL_BITS_MASK_FD_BYTE((number), (mask)) & ACL_BITS_MASK_FD_BIT(number))
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define __S_ISGID 02000
