#define __S_IFBLK 0060000
#define L_XTND SEEK_END
#define TCP_WINDOW_CLAMP 10
#define STATX_ATTR_AUTOMOUNT 0x00001000
#define _BITS_SCHED_H 1
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define IPV6_RTHDR_TYPE_0 0
#define SI_TIMER SI_TIMER
#define __SSP_STRONG__ 3
#define S_ISCHR(mode) __S_ISTYPE((mode), __S_IFCHR)
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define si_timerid _sifields._timer.si_tid
#define BUS_ADRALN BUS_ADRALN
#define _BITS_SIGEVENT_CONSTS_H 1
#define __LDBL_MANT_DIG__ 113
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define AT_STATX_SYNC_AS_STAT 0x0000
#define LM_ID_NEWLM -1
#define TCP_CONGESTION 13
#define PRIO_MIN -20
#define UINT8_MAX (255)
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define IFF_POINTOPOINT IFF_POINTOPOINT
#define NO_ADDRESS NO_DATA
#define IFF_SLAVE IFF_SLAVE
#define __UINT_LEAST16_MAX__ 0xffff
#define F_SET_RW_HINT 1036
#define DEPRECATED_FOR(f) __attribute__((deprecated("Use " #f " instead")))
#define __ARM_SIZEOF_WCHAR_T 4
#define CPU_ALLOC(count) __CPU_ALLOC (count)
#define IP_ROUTER_ALERT 5
#define __DBL_DECIMAL_DIG__ 17
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define MSG_BATCH MSG_BATCH
#define __FLT128_MAX_10_EXP__ 4932
#define TCPOPT_WINDOW 3
#define GAI_WAIT 0
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define IP_DEFAULT_MULTICAST_TTL 1
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define __off64_t_defined 
#define sa_sigaction __sigaction_handler.sa_sigaction
#define ifr_bandwidth ifr_ifru.ifru_ivalue
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __GCC_IEC_559_COMPLEX 2
#define TCPI_OPT_WSCALE 4
#define AF_APPLETALK PF_APPLETALK
#define RTLD_NOW 0x00002
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define si_fd _sifields._sigpoll.si_fd
#define __UINT_LEAST8_TYPE__ unsigned char
#define __INIT_H__ 
#define _T_WCHAR_ 
#define __S_ISTYPE(mode,mask) (((mode) & __S_IFMT) == (mask))
#define _SC_IPV6 _SC_IPV6
#define EUNATCH 49
#define SOL_ATM 264
#define RWH_WRITE_LIFE_SHORT 2
#define EPOLLWRBAND EPOLLWRBAND
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define NI_MAXSERV 32
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define CHAR_BIT __CHAR_BIT__
#define FIBER_ENETDOWN ENETDOWN
#define TCP_CORK 3
#define SO_KEEPALIVE 9
#define AF_PPPOX PF_PPPOX
#define _NETINET_IN_H 1
#define ENOCSI 50
#define __stub___compat_get_kernel_syms 
#define SO_SNDBUF 7
#define si_arch _sifields._sigsys._arch
#define RTSIG_MAX 32
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define __S64_TYPE long int
#define _PRINTF_NAN_LEN_MAX 4
#define _POSIX_PRIORITIZED_IO 200809L
#define __FLT128_DIG__ 33
#define DLFO_STRUCT_HAS_EH_DBASE 0
#define __stub_fchflags 
#define __SQUAD_TYPE long int
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define _BITS_SIGINFO_CONSTS_H 1
#define SIGBUS 7
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define _BITS_FLOATN_COMMON_H 
#define _BSD_SIZE_T_DEFINED_ 
#define SOL_LLC 268
#define NL_NMAX INT_MAX
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define IP_ORIGDSTADDR 20
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define IP_NODEFRAG 22
#define ILL_ILLTRP ILL_ILLTRP
#define __rusage_defined 1
#define S_IRGRP (S_IRUSR >> 3)
#define IP_UNBLOCK_SOURCE 37
#define __CHAR_BIT__ 8
#define __FSWORD_T_TYPE __SWORD_TYPE
#define SOL_RDS 276
#define EAFNOSUPPORT 97
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define EREMCHG 78
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define SIGTTIN 21
#define EEXIST 17
#define _POSIX_TRACE -1
#define __attribute_pure__ __attribute__ ((__pure__))
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define EACCES 13
#define __UINT8_MAX__ 0xff
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define IFF_ALLMULTI IFF_ALLMULTI
#define IPPROTO_UDP IPPROTO_UDP
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define IPV6_PMTUDISC_INTERFACE 4
#define TCP_ULP 31
#define WCHAR_MAX __WCHAR_MAX
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define EDESTADDRREQ 89
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define SPLICE_F_GIFT 8
#define LONG_BIT 64
#define _SC_2_C_DEV _SC_2_C_DEV
#define si_pid _sifields._kill.si_pid
#define IOV_MAX __IOV_MAX
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define RLIMIT_NOFILE RLIMIT_NOFILE
#define TCP_ZEROCOPY_RECEIVE 35
#define PIPE_BUF 4096
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define IP_TTL 2
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define IN_CLASSB_MAX 65536
#define CLD_TRAPPED CLD_TRAPPED
#define pthread_cleanup_pop_restore_np(execute) do { } while (0); } while (0); __pthread_unregister_cancel_restore (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define __HAVE_FLOAT16 0
#define stderr stderr
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define STATX_BASIC_STATS 0x000007ffU
#define __cleanup_fct_attribute 
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define __stack_t_defined 1
#define _XOPEN_SOURCE 700
#define _POSIX2_BC_DIM_MAX 2048
#define SO_RXQ_OVFL 40
#define EILSEQ 84
#define TCP_KEEPCNT 6
#define IPPROTO_ICMP IPPROTO_ICMP
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ESPIPE 29
#define SOCK_RDM SOCK_RDM
#define __STDLIB_MB_LEN_MAX 16
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define _POSIX_TTY_NAME_MAX 9
#define ECOMM 70
#define STATX_BTIME 0x00000800U
#define SI_DETHREAD SI_DETHREAD
#define EPERM 1
#define __OFF_T_MATCHES_OFF64_T 1
#define iscntrl(c) __isctype((c), _IScntrl)
#define EMLINK 31
#define UINT_FAST16_WIDTH __WORDSIZE
#define IP_MAX_MEMBERSHIPS 20
#define IPV6_PMTUDISC_WANT 1
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define __WCHAR_MAX__ 0xffffffffU
#define pthread_cleanup_push_defer_np(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel_defer (&__cancel_buf); do {
#define SOL_PPPOL2TP 273
#define AF_IB PF_IB
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define SO_NETNS_COOKIE 71
#define INT16_MAX (32767)
#define RLIMIT_AS RLIMIT_AS
#define IPV6_NEXTHOP 9
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define EAI_INTR -104
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __S_IREAD 0400
#define _POSIX_SYMLINK_MAX 255
#define ADJ_ESTERROR 0x0008
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define LM_ID_BASE 0
#define __GCC_IEC_559 2
#define F_GETOWN_EX __F_GETOWN_EX
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define MCAST_LEAVE_SOURCE_GROUP 47
#define __LITTLE_ENDIAN 1234
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 0
#define _IOFBF 0
#define IFF_MASTER IFF_MASTER
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define SO_BSDCOMPAT 14
#define __FLT_EVAL_METHOD__ 0
#define EAI_NONAME -2
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define AF_INET6 PF_INET6
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define UINT_WIDTH 32
#define STA_DEL 0x0020
#define IPV6_2292HOPOPTS 3
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define INT_LEAST32_WIDTH 32
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define SO_SELECT_ERR_QUEUE 45
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define __FLT64_DECIMAL_DIG__ 17
#define EAI_SERVICE -8
#define _XOPEN_VERSION 700
#define CPU_AND_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, &)
#define F_GETPIPE_SZ 1032
#define SCHED_RR 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define LONG_WIDTH __WORDSIZE
#define __HAVE_FLOAT64 1
#define SEGV_BNDERR SEGV_BNDERR
#define PRINTF(format_idx,arg_idx) __attribute__((__format__ (__printf__, (format_idx), (arg_idx))))
#define NSIG _NSIG
#define IP_UNICAST_IF 50
#define FNONBLOCK O_NONBLOCK
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define __ASSERT_VOID_CAST (void)
#define IPV6_UNICAST_IF 76
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define CLONE_NEWNET 0x40000000
#define _SC_PIPE _SC_PIPE
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define _SYS_EPOLL_H 1
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define ILL_BADIADDR ILL_BADIADDR
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __UINT_FAST32_TYPE__ long unsigned int
#define SIGPROF 27
#define SOL_BLUETOOTH 274
#define IFF_MULTICAST IFF_MULTICAST
#define EOWNERDEAD 130
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define EBADSLT 57
#define __CFLOAT128 _Complex _Float128
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define _CS_PATH _CS_PATH
#define CPU_OR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, |)
#define __SVE_ZREGS_OFFSET 0
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define POLL_MSG POLL_MSG
#define UINT64_C(c) c ## UL
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN (-32767-1)
#define GAI_NOWAIT 1
#define ENOTTY 25
#define __FINITE_MATH_ONLY__ 0
#define si_overrun _sifields._timer.si_overrun
#define __stub___compat_uselib 
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define SO_ATTACH_REUSEPORT_CBPF 51
#define SIGXFSZ 25
#define ifr_newname ifr_ifru.ifru_newname
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define MOD_TIMECONST ADJ_TIMECONST
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define __FLT32X_MAX_EXP__ 1024
#define h_addr h_addr_list[0]
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define SOCK_RAW SOCK_RAW
#define __socklen_t_defined 
#define O_EXCL 0200
#define RUSAGE_CHILDREN RUSAGE_CHILDREN
#define __u_char_defined 
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define POLLRDHUP 0x2000
#define STA_PPSERROR 0x0800
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __pid_t_defined 
#define EADV 68
#define ERANGE 34
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define ECANCELED 125
#define IPV6_HOPOPTS 54
#define AF_FILE PF_FILE
#define S_IFBLK __S_IFBLK
#define FIBER_ECONNABORTED ECONNABORTED
#define _POSIX_TRACE_EVENT_FILTER -1
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define SO_SECURITY_AUTHENTICATION 22
#define SCM_SRCRT IPV6_RXSRCRT
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define _THREAD_MUTEX_INTERNAL_H 1
#define PATH_MAX 4096
#define __LDBL_REDIR1(name,proto,alias) name proto
#define SHRT_MAX __SHRT_MAX__
#define _BITS_TYPES_LOCALE_T_H 1
#define UINT8_WIDTH 8
#define MSG_WAITALL MSG_WAITALL
#define _POSIX_SPIN_LOCKS 200809L
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define FD_CLOEXEC 1
#define __ASM_GENERIC_SOCKET_H 
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define O_ACCMODE 0003
#define __O_NOATIME 01000000
#define MOD_STATUS ADJ_STATUS
#define POLL_ERR POLL_ERR
#define ETXTBSY 26
#define __SI_SIGFAULT_ADDL 
#define _BITS_STRING_FORTIFIED_H 1
#define ENOMEM 12
#define RWF_NOWAIT 0x00000008
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define __INT8_C(c) c
#define _BITS_TYPES_H 1
#define _SYS_TIME_H 1
#define RWH_WRITE_LIFE_EXTREME 5
#define EPOLLEXCLUSIVE EPOLLEXCLUSIVE
#define __INT_LEAST8_WIDTH__ 8
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define __INTMAX_TYPE__ long int
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define SO_INCOMING_NAPI_ID 56
#define IFF_PORTSEL IFF_PORTSEL
#define MSG_PEEK MSG_PEEK
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define htobe16(x) __bswap_16 (x)
#define _XBS5_LPBIG_OFFBIG -1
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define NO_RECOVERY 3
#define TCPOPT_SACK_PERMITTED 4
#define NFDBITS __NFDBITS
#define __SHRT_MAX__ 0x7fff
#define __STDC_ISO_10646__ 201706L
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define RLIMIT_NLIMITS __RLIMIT_NLIMITS
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __FLT64X_MAX_10_EXP__ 4932
#define IPPROTO_IDP IPPROTO_IDP
#define S_IXOTH (S_IXGRP >> 3)
#define SIGTTOU 22
#define __THROWNL __attribute__ ((__nothrow__))
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define _POSIX_SEM_NSEMS_MAX 256
#define SOL_IPV6 41
#define IN_CLASSC_NET 0xffffff00
#define _POSIX_SYNCHRONIZED_IO 200809L
#define __O_CLOEXEC 02000000
#define __LDBL_IS_IEC_60559__ 2
#define IP_MTU 14
#define SO_RCVTIMEO_OLD 20
#define IFF_AUTOMEDIA IFF_AUTOMEDIA
#define IPV6_HDRINCL 36
#define __ARM_FP 14
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define AF_ROSE PF_ROSE
#define __FLT64X_IS_IEC_60559__ 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SO_LINGER 13
#define SIGSTKFLT 16
#define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define _POSIX2_BC_BASE_MAX 99
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define _RPC_NETDB_H 1
#define _POSIX_VERSION 200809L
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define SOCK_DCCP SOCK_DCCP
#define NAME_MAX 255
#define __WINT_TYPE__ unsigned int
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define CPU_CLR(cpu,cpusetp) __CPU_CLR_S (cpu, sizeof (cpu_set_t), cpusetp)
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define IFNAMSIZ IF_NAMESIZE
#define SVE_MAGIC 0x53564501
#define CLONE_THREAD 0x00010000
#define __POSIX_FADV_NOREUSE 5
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define PF_SECURITY 14
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define EAI_CANCELED -101
#define STATX_ATTR_VERITY 0x00100000
#define TCP_REPAIR_OFF_NO_WP -1
#define IPV6_2292DSTOPTS 4
#define __UINTMAX_TYPE__ long unsigned int
#define EINPROGRESS 115
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define __HAVE_DISTINCT_FLOAT32X 0
#define UINTPTR_WIDTH __WORDSIZE
#define FIBER_ENOMEM ENOMEM
#define SHUT_WR SHUT_WR
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define __ASM_GENERIC_BITS_PER_LONG 
#define _STDC_PREDEF_H 1
#define EL3HLT 46
#define CLOCK_MONOTONIC_COARSE 6
#define SVE_VL_MAX __SVE_VL_MAX
#define SO_PREFER_BUSY_POLL 69
#define _POSIX_THREAD_CPUTIME 0
#define __linux 1
#define SIOCSPGRP 0x8902
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define AF_CAIF PF_CAIF
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define TH_RST 0x04
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __OPTIMIZE__ 1
#define HAS_POLL 
#define AI_ADDRCONFIG 0x0020
#define si_int _sifields._rt.si_sigval.sival_int
#define IN_CLASSB_NSHIFT 16
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define PF_KEY 15
#define AF_X25 PF_X25
#define AF_MAX PF_MAX
#define __UINT32_MAX__ 0xffffffffU
#define __GETTIMEOFDAY_HEAD_H__ 
#define __UID_T_TYPE __U32_TYPE
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _POSIX_READER_WRITER_LOCKS 200809L
#define PF_ATMPVC 8
#define SO_TIMESTAMP_OLD 29
#define __AARCH64_CMODEL_SMALL__ 1
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define __SIZE_T 
#define WINT_MAX (4294967295u)
#define SO_WIFI_STATUS 41
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define _POSIX_PIPE_BUF 512
#define __S_ISVTX 01000
#define __LDBL_MAX_EXP__ 16384
#define _BITS_POSIX_OPT_H 1
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define _SC_PII _SC_PII
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define __INT_FAST32_WIDTH__ 64
#define _ATFILE_SOURCE 1
#define AF_MCTP PF_MCTP
#define CPU_ISSET(cpu,cpusetp) __CPU_ISSET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define F_EXLCK 4
#define __FLT128_MIN_EXP__ (-16381)
#define __GNUC_VA_LIST 
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define MSG_FIN MSG_FIN
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define TCP_COOKIE_OUT_NEVER (1 << 1)
#define UINT_FAST64_WIDTH 64
#define FIBER_EISCONN EISCONN
#define ifr_addr ifr_ifru.ifru_addr
#define INT_LEAST8_WIDTH 8
#define WUNTRACED 2
#define _SC_SHELL _SC_SHELL
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define IFF_NOARP IFF_NOARP
#define _POSIX_V6_LP64_OFF64 1
#define NZERO 20
#define IF_NAMESIZE 16
#define F_SEAL_WRITE 0x0008
#define UINT16_C(c) c
#define LLONG_WIDTH 64
#define __always_inline __inline __attribute__ ((__always_inline__))
#define AF_NETROM PF_NETROM
#define SO_BPF_EXTENSIONS 48
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define MOD_CLKB ADJ_TICK
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FD_SETSIZE 1024
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define ifr_slave ifr_ifru.ifru_slave
#define __FLT32X_IS_IEC_60559__ 2
#define __KERNEL_STRICT_NAMES 
#define ENOMSG 42
#define EXIT_FAILURE 1
#define RENAME_EXCHANGE (1 << 1)
#define TCPOPT_SACK 5
#define ADJ_MAXERROR 0x0004
#define ifa_dstaddr ifa_ifu.ifu_dstaddr
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define IPV6_MTU_DISCOVER 23
#define _POSIX_AIO_LISTIO_MAX 2
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define PF_IUCV 32
#define __SCHAR_MAX__ 0x7f
#define SIG_HOLD ((__sighandler_t) 2)
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define CLONE_SYSVSEM 0x00040000
#define RLIMIT_OFILE __RLIMIT_OFILE
#define SO_REUSEADDR 2
#define __WCHAR_MIN__ 0U
#define DEPRECATED __attribute__((__deprecated__))
#define __USE_KERNEL_IPV6_DEFS 0
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define AF_VSOCK PF_VSOCK
#define MCAST_JOIN_GROUP 42
#define _POSIX_V6_ILP32_OFF32 -1
#define __INT64_C(c) c ## L
#define PTHREAD_KEYS_MAX 1024
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define FIBER_ENOBUFS ENOBUFS
#define SA_SIGINFO 4
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define STA_PPSWANDER 0x0400
#define __INT_WCHAR_T_H 
#define WSTOPPED 2
#define SO_BROADCAST 6
#define _POSIX_THREAD_THREADS_MAX 64
#define __CFLOAT32 _Complex _Float32
#define __EPOLL_PACKED 
#define __osockaddr_defined 1
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define _SYS_USER_H 1
#define _POSIX_MQ_OPEN_MAX 8
#define _FORTIFY_SOURCE 2
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define _BITS_TIMEX_H 1
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _POSIX_LINK_MAX 8
#define s6_addr __in6_u.__u6_addr8
#define AF_XDP PF_XDP
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define AF_TIPC PF_TIPC
#define AF_WANPIPE PF_WANPIPE
#define F_SETSIG __F_SETSIG
#define __isascii(c) (((c) & ~0x7f) == 0)
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define __toascii(c) ((c) & 0x7f)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define EMULTIHOP 72
#define POLLWRNORM 0x100
#define RENAME_WHITEOUT (1 << 2)
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define isblank(c) __isctype((c), _ISblank)
#define __INT_FAST64_WIDTH__ 64
#define WINT_WIDTH 32
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _BITS_SIGINFO_ARCH_H 1
#define _DEFAULT_SOURCE 1
#define SOL_TLS 282
#define IPPROTO_SCTP IPPROTO_SCTP
#define ERESTART 85
#define __USE_EXTERN_INLINES 1
#define DN_MODIFY 0x00000002
#define RLIMIT_LOCKS __RLIMIT_LOCKS
#define __attribute_used__ __attribute__ ((__used__))
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define FIOSETOWN 0x8901
#define __LOCK_ALIGNMENT 
#define IPPROTO_MTP IPPROTO_MTP
#define __FLT32X_MANT_DIG__ 53
#define _XOPEN_REALTIME_THREADS 1
#define _POSIX_CHILD_MAX 25
#define ETIMEDOUT 110
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define _ASM_GENERIC_INT_LL64_H 
#define TCP_REPAIR_ON 1
#define _SC_VERSION _SC_VERSION
#define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
#define CLONE_IO 0x80000000
#define _ARPA_INET_H 1
#define EPOLL_CTL_DEL 2
#define AF_SMC PF_SMC
#define __USER_LABEL_PREFIX__ 
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define F_OFD_SETLK 37
#define ENODATA 61
#define CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) __CPU_EQUAL_S (setsize, cpusetp1, cpusetp2)
#define _BITS_ENDIANNESS_H 1
#define SCM_TIMESTAMPING_PKTINFO 58
#define __F_SETOWN_EX 15
#define __FLT32_MAX_10_EXP__ 38
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define STATX_ATTR_NODUMP 0x00000040
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define __GLIBC__ 2
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define DN_ACCESS 0x00000001
#define __END_DECLS 
#define _STATBUF_ST_NSEC 
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define MOD_FREQUENCY ADJ_FREQUENCY
#define WCONTINUED 8
#define setjmp(env) _setjmp (env)
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define CLONE_VFORK 0x00004000
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define _IOT_ifconf _IOT(_IOTS(struct ifconf),1,0,0,0,0)
#define __BITS_PER_LONG 64
#define RLIM_SAVED_CUR RLIM_INFINITY
#define __SLONG32_TYPE int
#define _BITS_UINTN_IDENTITY_H 1
#define DL_CALL_FCT(fctp,args) (_dl_mcount_wrapper_check ((void *) (fctp)), (*(fctp)) args)
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define F_GETLK 5
#define _SYS_SELECT_H 1
#define _POSIX_THREAD_KEYS_MAX 128
#define RLIMIT_CPU RLIMIT_CPU
#define STATX_NLINK 0x00000004U
#define PF_ALG 38
#define SCHED_IDLE 5
#define SO_MARK 36
#define _XOPEN_ENH_I18N 1
#define AF_PHONET PF_PHONET
#define CPU_ZERO(cpusetp) __CPU_ZERO_S (sizeof (cpu_set_t), cpusetp)
#define __SSIZE_T_TYPE __SWORD_TYPE
#define _SC_LONG_BIT _SC_LONG_BIT
#define SCOPE_DELIMITER '%'
#define __jmp_buf_tag_defined 1
#define PRIO_PROCESS PRIO_PROCESS
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define TCP_LINGER2 8
#define TMP_MAX 238328
#define ____mbstate_t_defined 1
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define si_status _sifields._sigchld.si_status
#define IP_IPSEC_POLICY 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define TCP_INQ 36
#define IPPROTO_PIM IPPROTO_PIM
#define STATX_UID 0x00000008U
#define __GNU_LIBRARY__ 6
#define EPOLLIN EPOLLIN
#define __DBL_DIG__ 15
#define __FLT32_DIG__ 6
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define EINTR 4
#define _POSIX_NO_TRUNC 1
#define __f32x(x) x ##f32x
#define AF_PACKET PF_PACKET
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define S_IFMT __S_IFMT
#define __RLIM_T_MATCHES_RLIM64_T 1
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define SS_DISABLE SS_DISABLE
#define ENOLINK 67
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define _IO_EOF_SEEN 0x0010
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define FIBER_EHOSTUNREACH EHOSTUNREACH
#define ECHILD 10
#define TCP_CC_INFO 26
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define TCP_REPAIR 19
#define _POSIX_SPAWN 200809L
#define __SHRT_WIDTH__ 16
#define SOCK_DGRAM SOCK_DGRAM
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define PF_LLC 26
#define F_SEAL_SEAL 0x0001
#define isblank_l(c,l) __isblank_l ((c), (l))
#define _XBS5_LP64_OFF64 1
#define __f64x(x) x ##f64x
#define CLONE_DETACHED 0x00400000
#define s6_addr16 __in6_u.__u6_addr16
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define _GCC_WCHAR_T 
#define RENAME_NOREPLACE (1 << 0)
#define __SVE_NUM_ZREGS 32
#define __FLT32_IS_IEC_60559__ 2
#define PF_UNIX PF_LOCAL
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define __DEV_T_TYPE __UQUAD_TYPE
#define SA_ONSTACK 0x08000000
#define __GLIBC_USE_ISOC2X 1
#define _SYS_UIO_H 1
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define SIGIO SIGPOLL
#define ___int_wchar_t_h 
#define RLIMIT_CORE RLIMIT_CORE
#define ILL_ILLADR ILL_ILLADR
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define __nonnull(params) __attribute_nonnull__ (params)
#define s6_addr32 __in6_u.__u6_addr32
#define SO_PEERCRED 17
#define le32toh(x) __uint32_identity (x)
#define si_call_addr _sifields._sigsys._call_addr
#define TCP_COOKIE_MIN 8
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define RLIMIT_STACK RLIMIT_STACK
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define __FLT16_HAS_QUIET_NAN__ 1
#define __O_LARGEFILE 0
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define PF_CAIF 37
#define CPU_SETSIZE __CPU_SETSIZE
#define EDQUOT 122
#define SCM_TXTIME SO_TXTIME
#define PF_ASH 18
#define error_again(x) ((x) == FIBER_EAGAIN)
#define F_DUPFD_CLOEXEC 1030
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define st_ctime st_ctim.tv_sec
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define _ASSERT_H_DECLS 
#define TCP_REPAIR_OFF 0
#define _WCHAR_T_ 
#define EAI_OVERFLOW -12
#define CLONE_NEWUTS 0x04000000
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define RLIMIT_RTPRIO __RLIMIT_RTPRIO
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define IPPROTO_ESP IPPROTO_ESP
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define __F_SETOWN 8
#define __FP_FAST_FMA 1
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define IP_PMTUDISC_OMIT 5
#define EAI_FAMILY -6
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define _VA_LIST_DEFINED 
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define __FLT32X_HAS_INFINITY__ 1
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define SO_ACCEPTCONN 30
#define UINT32_WIDTH 32
#define __INT32_MAX__ 0x7fffffff
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __SIZEOF_PTHREAD_COND_T 48
#define AF_BRIDGE PF_BRIDGE
#define UINT16_WIDTH 16
#define __FLT16_DIG__ 3
#define ifc_buf ifc_ifcu.ifcu_buf
#define _POSIX_V7_LPBIG_OFFBIG -1
#define STDOUT_FILENO 1
#define EUCLEAN 117
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __S_IFCHR 0020000
#define O_ASYNC 020000
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define __STDC_IEC_559__ 1
#define SO_DETACH_BPF SO_DETACH_FILTER
#define NL_TEXTMAX INT_MAX
#define SO_TYPE 3
#define FIBER_EVENT_POLL 1
#define MOD_MICRO ADJ_MICRO
#define __UINT16_C(c) c
#define ELOOP 40
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define RTLD_GLOBAL 0x00100
#define POLLRDBAND 0x080
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define _SYS_SENDFILE_H 1
#define NI_NAMEREQD 8
#define __DECIMAL_DIG__ 36
#define _POSIX2_RE_DUP_MAX 255
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 2
#define __STDC_IEC_559_COMPLEX__ 1
#define LOCK_EX 2
#define SOL_X25 262
#define AF_CAN PF_CAN
#define SI_USER SI_USER
#define STA_FREQHOLD 0x0080
#define EIO 5
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define IPV6_XFRM_POLICY 35
#define FPE_INTDIV FPE_INTDIV
#define __gnu_linux__ 1
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define __USE_XOPEN2K 1
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define __INT16_MAX__ 0x7fff
#define _LARGEFILE_SOURCE 1
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define _ENDIAN_H 1
#define __FLT128_IS_IEC_60559__ 2
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define _BITS_SIGNUM_ARCH_H 1
#define SOL_IP 0
#define ESTALE 116
#define IPPROTO_PUP IPPROTO_PUP
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __SI_MAX_SIZE 128
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define SCHED_ISO 4
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define IPV6_FREEBIND 78
#define ENOTSOCK 88
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define STATX_SIZE 0x00000200U
#define __S_IFIFO 0010000
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define _XBS5_ILP32_OFF32 -1
#define __ASM_SIGCONTEXT_H 
#define _SC_THREADS _SC_THREADS
#define _CS_V6_ENV _CS_V6_ENV
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define SYNC_FILE_RANGE_WRITE 2
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define ENOSR 63
#define _BSD_SIZE_T_ 
#define S_ISDIR(mode) __S_ISTYPE((mode), __S_IFDIR)
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define ADJ_MICRO 0x1000
#define __intptr_t_defined 
#define __FLT16_MIN_EXP__ (-13)
#define AI_CANONNAME 0x0002
#define ifr_hwaddr ifr_ifru.ifru_hwaddr
#define _POSIX_MAPPED_FILES 200809L
#define SOL_ICMPV6 58
#define __FLT64_MANT_DIG__ 53
#define __attribute_const__ __attribute__ ((__const__))
#define _REENTRANT 1
#define _PC_PATH_MAX _PC_PATH_MAX
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define IP_OPTIONS 4
#define O_NOCTTY 0400
#define __FLT64X_MANT_DIG__ 113
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define AF_BLUETOOTH PF_BLUETOOTH
#define IPPROTO_IPIP IPPROTO_IPIP
#define _POSIX_CPUTIME 0
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define L_tmpnam 20
#define WORD_BIT 32
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define isascii(c) __isascii (c)
#define toascii(c) __toascii (c)
#define __GNUC__ 11
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define CLONE_FILES 0x00000400
#define IPV6_2292PKTOPTIONS 6
#define IP_XFRM_POLICY 17
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define L_ctermid 9
#define _BITS_POSIX2_LIM_H 1
#define IPPROTO_RAW IPPROTO_RAW
#define __CFLOAT32X _Complex _Float32x
#define PF_ISDN 34
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define _LFS_ASYNCHRONOUS_IO 1
#define POSIX_FADV_WILLNEED 3
#define assert_perror(errnum) (!(errnum) ? __ASSERT_VOID_CAST (0) : __assert_perror_fail ((errnum), __FILE__, __LINE__, __ASSERT_FUNCTION))
#define IPPROTO_TCP IPPROTO_TCP
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define AF_NFC PF_NFC
#define FIBER_ENETUNREACH ENETUNREACH
#define LOCK_NB 4
#define EAI_BADFLAGS -1
#define __daddr_t_defined 
#define isupper(c) __isctype((c), _ISupper)
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define ESOCKTNOSUPPORT 94
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define MSG_CTRUNC MSG_CTRUNC
#define EAI_MEMORY -10
#define RLIMIT_SIGPENDING __RLIMIT_SIGPENDING
#define IPV6_MTU 24
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define ADJ_OFFSET 0x0001
#define MSG_PROXY MSG_PROXY
#define PRIO_PGRP PRIO_PGRP
#define SO_DETACH_REUSEPORT_BPF 68
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __LDBL_MIN_EXP__ (-16381)
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ELNRNG 48
#define EAI_FAIL -4
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define __STRING(x) #x
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define LONG_MAX __LONG_MAX__
#define IPV6_RECVHOPOPTS 53
#define STDERR_FILENO 2
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define __ONCE_ALIGNMENT 
#define SO_OOBINLINE 10
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define __SI_ALIGNMENT 
#define __FLT64_MAX_10_EXP__ 308
#define PF_IB 27
#define NI_MAXHOST 1025
#define CHAR_MIN 0
#define __GLIBC_USE_LIB_EXT2 1
#define __USE_ISOC99 1
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define O_FSYNC O_SYNC
#define __sigevent_t_defined 1
#define MSG_DONTROUTE MSG_DONTROUTE
#define FIBER_EVENT_IO_URING 4
#define __FLT16_MAX_10_EXP__ 4
#define __DBL_IS_IEC_60559__ 2
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define ____sigval_t_defined 
#define STA_PPSTIME 0x0004
#define LOCK_RW 192
#define _STDIO_H 1
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define AF_SECURITY PF_SECURITY
#define CPU_XOR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, ^)
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define be64toh(x) __bswap_64 (x)
#define IPV6_IPSEC_POLICY 34
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define SI_QUEUE SI_QUEUE
#define UINTMAX_WIDTH 64
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define SO_MAX_PACING_RATE 47
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define NI_NUMERICHOST 1
#define __DBL_HAS_INFINITY__ 1
#define IPV6_DSTOPTS 59
#define SCM_CREDENTIALS SCM_CREDENTIALS
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define IP_MTU_DISCOVER 10
#define IPV6_PMTUDISC_OMIT 5
#define ITIMER_PROF ITIMER_PROF
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define IPPROTO_TP IPPROTO_TP
#define AF_RXRPC PF_RXRPC
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define MSG_FASTOPEN MSG_FASTOPEN
#define PF_NETROM 6
#define __USE_XOPEN 1
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define isspace(c) __isctype((c), _ISspace)
#define stdin stdin
#define SIGQUIT 3
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define si_syscall _sifields._sigsys._syscall
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_STDIO2_H 1
#define _POSIX_TIMER_MAX 32
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define _SC_CLK_TCK _SC_CLK_TCK
#define _POSIX2_CHAR_TERM 200809L
#define SPLICE_F_NONBLOCK 2
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define SCHED_FIFO 1
#define USHRT_WIDTH 16
#define __DADDR_T_TYPE __S32_TYPE
#define EDOM 33
#define CLONE_SIGHAND 0x00000800
#define ENOSYS 38
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define IPV6_ORIGDSTADDR 74
#define EDEADLK 35
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define _ISOC11_SOURCE 1
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define __ASM_POSIX_TYPES_H 
#define TCP_MSS 512
#define MAX_HANDLE_SZ 128
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define PTHREAD_ATTR_NO_SIGMASK_NP (-1)
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define LONG_MIN (-LONG_MAX - 1L)
#define CPU_COUNT_S(setsize,cpusetp) __CPU_COUNT_S (setsize, cpusetp)
#define EAI_ALLDONE -103
#define CPU_OR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, |)
#define FALLOC_FL_INSERT_RANGE 0x20
#define SIZE_WIDTH __WORDSIZE
#define be32toh(x) __bswap_32 (x)
#define TCP_FASTOPEN 23
#define __OFF64_T_TYPE __SQUAD_TYPE
#define AF_ECONET PF_ECONET
#define _LINUX_STAT_H 
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define __HAVE_FLOAT128X 0
#define _SIZE_T_DEFINED 
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define SCHAR_WIDTH 8
#define _WCHAR_T_DEFINED_ 
#define fiber_unused __attribute__ ((__unused__))
#define isalpha(c) __isctype((c), _ISalpha)
#define EBADMSG 74
#define MSG_TRYHARD MSG_DONTROUTE
#define SOL_NFC 280
#define _POSIX_REGEXP 1
#define __f64(x) x ##f64
#define __USE_POSIX199506 1
#define __LDBL_HAS_DENORM__ 1
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define _POSIX_BARRIERS 200809L
#define __statx_timestamp_defined 1
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define CLONE_PARENT 0x00008000
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define PF_SMC 43
#define ifr_map ifr_ifru.ifru_map
#define CPU_XOR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, ^)
#define TCPI_OPT_TIMESTAMPS 1
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define __stub_setlogin 
#define CLONE_SETTLS 0x00080000
#define POLLWRBAND 0x200
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define SA_NODEFER 0x40000000
#define __FLT32_DECIMAL_DIG__ 9
#define NI_NOFQDN 4
#define SIGABRT 6
#define SS_ONSTACK SS_ONSTACK
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define __O_DSYNC 010000
#define _POSIX_MEMORY_PROTECTION 200809L
#define POSIX_FADV_NORMAL 0
#define ifa_broadaddr ifa_ifu.ifu_broadaddr
#define S_IFCHR __S_IFCHR
#define SA_RESETHAND 0x80000000
#define __dev_t_defined 
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define EAI_SOCKTYPE -7
#define __S32_TYPE int
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define LOCK_WRITE 128
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __DBL_MAX_EXP__ 1024
#define SOL_SOCKET 1
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define __WCHAR_WIDTH__ 32
#define __BIT_TYPES_DEFINED__ 1
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define FIBER_ENOTCONN ENOTCONN
#define IP_PMTUDISC_WANT 1
#define IP_RECVERR 11
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define STATX_ATIME 0x00000020U
#define ERFKILL 132
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __FLT16_DECIMAL_DIG__ 5
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define F_GET_FILE_RW_HINT 1037
#define IPV6_ADDRFORM 1
#define EREMOTE 66
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _VA_LIST_ 
#define isspace_l(c,l) __isspace_l ((c), (l))
#define S_BLKSIZE 512
#define CLONE_PIDFD 0x00001000
#define _POSIX_LOGIN_NAME_MAX 9
#define ETOOMANYREFS 109
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define TCP_COOKIE_MAX 16
#define MSG_MORE MSG_MORE
#define EPFNOSUPPORT 96
#define UINT_LEAST16_WIDTH 16
#define _POSIX_TZNAME_MAX 6
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define _POSIX_SSIZE_MAX 32767
#define __FLT_IS_IEC_60559__ 2
#define BUS_OBJERR BUS_OBJERR
#define _POSIX_RE_DUP_MAX 255
#define _POSIX_MAX_CANON 255
#define IPV6_UNICAST_HOPS 16
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define __STD_AFX_INCLUDE_H__ 
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define POLLHUP 0x010
#define PF_PHONET 35
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __USECONDS_T_TYPE __U32_TYPE
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define _BITS_STDIO_H 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __SVE_NUM_PREGS 16
#define __glibc_objsize(__o) __bos (__o)
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define IP_RECVTOS 13
#define TCP_NOTSENT_LOWAT 25
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define PDP_ENDIAN __PDP_ENDIAN
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define ESRMNT 69
#define ENONET 64
#define STA_PLL 0x0001
#define EPOLLRDBAND EPOLLRDBAND
#define _LINUX_STDDEF_H 
#define ifr_metric ifr_ifru.ifru_ivalue
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 0
#define _T_WCHAR 
#define ILL_ILLOPC ILL_ILLOPC
#define STATX_ATTR_ENCRYPTED 0x00000800
#define AF_AX25 PF_AX25
#define SA_NOMASK SA_NODEFER
#define __SOCKADDR_ALLTYPES __SOCKADDR_ONETYPE (sockaddr) __SOCKADDR_ONETYPE (sockaddr_at) __SOCKADDR_ONETYPE (sockaddr_ax25) __SOCKADDR_ONETYPE (sockaddr_dl) __SOCKADDR_ONETYPE (sockaddr_eon) __SOCKADDR_ONETYPE (sockaddr_in) __SOCKADDR_ONETYPE (sockaddr_in6) __SOCKADDR_ONETYPE (sockaddr_inarp) __SOCKADDR_ONETYPE (sockaddr_ipx) __SOCKADDR_ONETYPE (sockaddr_iso) __SOCKADDR_ONETYPE (sockaddr_ns) __SOCKADDR_ONETYPE (sockaddr_un) __SOCKADDR_ONETYPE (sockaddr_x25)
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define SO_COOKIE 57
#define AF_RDS PF_RDS
#define SYS_UNIX 
#define IPPROTO_AH IPPROTO_AH
#define __SIZEOF_SIZE_T__ 8
#define DLFO_EH_SEGMENT_TYPE PT_GNU_EH_FRAME
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define _SC_BARRIERS _SC_BARRIERS
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define __SIG_ATOMIC_WIDTH__ 32
#define st_atime st_atim.tv_sec
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define _XOPEN_SOURCE_EXTENDED 1
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define INT_FAST64_WIDTH 64
#define SO_PEERSEC 31
#define O_APPEND 02000
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define SIG_BLOCK 0
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define SIG_UNBLOCK 1
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define O_TMPFILE __O_TMPFILE
#define SOL_DECNET 261
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define SIZE_MAX (18446744073709551615UL)
#define __SIZEOF_WINT_T__ 4
#define _SC_BASE _SC_BASE
#define ifr_flags ifr_ifru.ifru_flags
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define AT_STATX_DONT_SYNC 0x4000
#define MSG_WAITFORONE MSG_WAITFORONE
#define SOCK_PACKET SOCK_PACKET
#define F_GET_RW_HINT 1035
#define _MSG_INCLUDE_H_ 
#define PF_UNSPEC 0
#define ENOTNAM 118
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define _BITS_WCHAR_H 1
#define _LINUX_CLOSE_RANGE_H 
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define STATX_MTIME 0x00000040U
#define __U16_TYPE unsigned short int
#define _IOT_ifreq_int _IOT(_IOTS(char),IFNAMSIZ,_IOTS(int),1,0,0)
#define F_SETLEASE 1024
#define CLD_EXITED CLD_EXITED
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define IFHWADDRLEN 6
#define __FLT32_MAX_EXP__ 128
#define _SC_FIFO _SC_FIFO
#define SIOCATMARK 0x8905
#define RTLD_NODELETE 0x01000
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define S_IWUSR __S_IWRITE
#define PF_MCTP 45
#define _POSIX_NAME_MAX 14
#define UINTPTR_MAX (18446744073709551615UL)
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define STRDUP strdup
#define FIBER_EINVAL EINVAL
#define DN_MULTISHOT 0x80000000
#define SO_PASSSEC 34
#define PF_X25 9
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define F_SETPIPE_SZ 1031
#define __ARM_FP16_FORMAT_IEEE 1
#define NETDB_INTERNAL -1
#define si_uid _sifields._kill.si_uid
#define __WTERMSIG(status) ((status) & 0x7f)
#define _SC_PAGESIZE _SC_PAGESIZE
#define SO_DONTROUTE 5
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define __USE_GNU 1
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define EPOLLONESHOT EPOLLONESHOT
#define F_UNLCK 2
#define __FLT_MIN_EXP__ (-125)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _SS_SIZE 128
#define EL3RST 47
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define WEXITED 4
#define EPOLLMSG EPOLLMSG
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define _STRUCT_TIMESPEC 1
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define TH_ACK 0x10
#define __ASM_SVE_CONTEXT_H 
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define __key_t_defined 
#define RTLD_NEXT ((void *) -1l)
#define FIBER_ETIME ETIME
#define __uid_t_defined 
#define WNOHANG 1
#define alloca(size) __builtin_alloca (size)
#define IFF_RUNNING IFF_RUNNING
#define INT_FAST32_MAX (9223372036854775807L)
#define _XOPEN_SHM 1
#define RWF_HIPRI 0x00000001
#define NL_SETMAX INT_MAX
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __flexarr []
#define PF_IPX 4
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define SIGHUP 1
#define HOST_NOT_FOUND 1
#define _SC_LINE_MAX _SC_LINE_MAX
#define INT_WIDTH 32
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define SIGCHLD 17
#define _POSIX_PTHREAD_SEMANTICS 1
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_WORD_BIT _SC_WORD_BIT
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define EPOLLWAKEUP EPOLLWAKEUP
#define WCHAR_WIDTH 32
#define __HAVE_GENERIC_SELECTION 1
#define __FLT32X_MIN_EXP__ (-1021)
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define F_GETFD 1
#define STA_PPSSIGNAL 0x0100
#define ifr_mtu ifr_ifru.ifru_mtu
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define SO_TIMESTAMPNS_OLD 35
#define F_GETFL 3
#define FIBER_ECONNREFUSED ECONNREFUSED
#define __INT_FAST64_TYPE__ long int
#define ADJ_TIMECONST 0x0020
#define __ARM_FP16_ARGS 1
#define F_LOCK 1
#define _POSIX_SEMAPHORES 200809L
#define SCHED_RESET_ON_FORK 0x40000000
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define ENOBUFS 105
#define _POSIX_ADVISORY_INFO 200809L
#define __WCHAR_MAX __WCHAR_MAX__
#define ADJ_TAI 0x0080
#define O_RSYNC O_SYNC
#define _POSIX_QLIMIT 1
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define ENOTEMPTY 39
#define TCP_SAVE_SYN 27
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define _SC_STREAMS _SC_STREAMS
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define EADDRINUSE 98
#define _VA_LIST 
#define IPPROTO_MH IPPROTO_MH
#define INT_LEAST64_WIDTH 64
#define __ARM_FEATURE_CLZ 1
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define POLLNVAL 0x020
#define INVALID_SOCKET -1
#define isxdigit(c) __isctype((c), _ISxdigit)
#define TH_SYN 0x02
#define __unix__ 1
#define SEGV_MTESERR SEGV_MTESERR
#define SO_RCVLOWAT 18
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define SIG_ATOMIC_WIDTH 32
#define __SIZEOF_POINTER__ 8
#define TCP_MD5SIG_EXT 32
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define F_SETLKW64 7
#define FIBER_EVENT_WMSG 3
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define __USE_XOPEN2KXSI 1
#define TCP_COOKIE_TRANSACTIONS 15
#define __WCOREFLAG 0x80
#define TCP_MD5SIG_MAXKEYLEN 80
#define _XOPEN_LEGACY 1
#define UNUSED __attribute__((__unused__))
#define __HAVE_DISTINCT_FLOAT64 0
#define __O_DIRECTORY 040000
#define __SIGEV_MAX_SIZE 64
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define SOL_NETLINK 270
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define __LP64__ 1
#define _XOPEN_UNIX 1
#define _POSIX2_BC_STRING_MAX 1000
#define UTIME_NOW ((1l << 30) - 1l)
#define __isascii_l(c,l) ((l), __isascii (c))
#define _SC_ARG_MAX _SC_ARG_MAX
#define RLIMIT_MSGQUEUE __RLIMIT_MSGQUEUE
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define __DBL_HAS_QUIET_NAN__ 1
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define SIGUSR1 10
#define _POSIX_CLOCKRES_MIN 20000000
#define __S_IEXEC 0100
#define __FLT_EVAL_METHOD_C99__ 0
#define _POSIX_IPV6 200809L
#define _POSIX_SYMLOOP_MAX 8
#define TCP_FASTOPEN_KEY 33
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define __USE_UNIX98 1
#define LOCK_MAND 32
#define IPPROTO_EGP IPPROTO_EGP
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __MODE_T_TYPE __U32_TYPE
#define CLOCK_REALTIME_ALARM 8
#define __S_IFREG 0100000
#define AF_LLC PF_LLC
#define SIGTRAP 5
#define _SYS_RESOURCE_H 1
#define EISDIR 21
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define _BITS_STRUCT_STAT_H 1
#define RTLD_LOCAL 0
#define F_GETSIG __F_GETSIG
#define __FLT64_MIN_EXP__ (-1021)
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define IPV6_RECVERR 25
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define O_DSYNC __O_DSYNC
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define h_errno (*__h_errno_location ())
#define CHAR_MAX UCHAR_MAX
#define CLONE_NEWCGROUP 0x02000000
#define IFF_PROMISC IFF_PROMISC
#define __LDBL_DECIMAL_DIG__ 36
#define EPOLLWRNORM EPOLLWRNORM
#define NL_ARGMAX _POSIX_ARG_MAX
#define STATX_ATTR_APPEND 0x00000020
#define INT_LEAST8_MAX (127)
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define SEEK_DATA 3
#define __aarch64__ 1
#define _BITS_SETJMP_H 1
#define INT_FAST16_MAX (9223372036854775807L)
#define FALLOC_FL_PUNCH_HOLE 0x02
#define __CFLOAT64X _Complex _Float64x
#define TCPOPT_EOL 0
#define __FLT64_MIN_10_EXP__ (-307)
#define AF_KCM PF_KCM
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define EPOLL_CTL_ADD 1
#define FIBER_BASE_INCLUDE_H 
#define INT8_C(c) c
#define __FDS_BITS(set) ((set)->fds_bits)
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define SCANF(format_idx,arg_idx) __attribute__((__format__ (__scanf__, (format_idx), (arg_idx))))
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define si_pkey _sifields._sigfault._bounds._pkey
#define __FLT64X_DECIMAL_DIG__ 36
#define IP_BIND_ADDRESS_NO_PORT 24
#define TRAP_HWBKPT TRAP_HWBKPT
#define CLONE_PARENT_SETTID 0x00100000
#define ifr_data ifr_ifru.ifru_data
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __INTMAX_WIDTH__ 64
#define INT_LEAST32_MAX (2147483647)
#define SO_RCVBUF 8
#define F_WRLCK 1
#define PF_ROSE 11
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define __USE_LARGEFILE 1
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define __F_GETSIG 11
#define INT_FAST16_WIDTH __WORDSIZE
#define _PC_NAME_MAX _PC_NAME_MAX
#define SCHED_OTHER 0
#define LOGIN_NAME_MAX 256
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define __LDBL_HAS_INFINITY__ 1
#define _PC_MAX_CANON _PC_MAX_CANON
#define EDEADLOCK EDEADLK
#define PF_INET6 10
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define ADJ_NANO 0x2000
#define IP_TRANSPARENT 19
#define si_addr _sifields._sigfault.si_addr
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define SO_PROTOCOL 38
#define SOL_TCP 6
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define PF_XDP 44
#define __FLT_DIG__ 6
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define UINT_LEAST32_WIDTH 32
#define _SIGNAL_H 
#define UINT_FAST32_MAX (18446744073709551615UL)
#define RLIM_INFINITY ((__rlim_t) -1)
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define EAI_NOTCANCELED -102
#define ADJ_STATUS 0x0010
#define _POSIX_V7_ILP32_OFF32 -1
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define MAX_INPUT 255
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define CLOCK_BOOTTIME_ALARM 9
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define __DEC_EVAL_METHOD__ 2
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define __siginfo_t_defined 1
#define CPU_SET(cpu,cpusetp) __CPU_SET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define ECONNABORTED 103
#define SIGEV_THREAD SIGEV_THREAD
#define PF_APPLETALK 5
#define IPV6_2292PKTINFO 2
#define __FLT_MANT_DIG__ 24
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define AF_IUCV PF_IUCV
#define INT_LEAST8_MIN (-128)
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define __FLT16_MIN_10_EXP__ (-4)
#define __VERSION__ "11.3.0"
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define __IOV_MAX 1024
#define S_ISFIFO(mode) __S_ISTYPE((mode), __S_IFIFO)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define IP_PKTINFO 8
#define __UINT64_C(c) c ## UL
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define MOD_OFFSET ADJ_OFFSET
#define _SYS_TYPES_H 1
#define DLFO_STRUCT_HAS_EH_COUNT 0
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_CDEFS_H 1
#define F_GET_SEALS 1034
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define isprint(c) __isctype((c), _ISprint)
#define _NSIG (__SIGRTMAX + 1)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define __SVE_VQ_MIN 1
#define PTRDIFF_MAX (9223372036854775807L)
#define MCAST_MSFILTER 48
#define _POSIX_JOB_CONTROL 1
#define EBFONT 59
#define AF_INET PF_INET
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define INT_LEAST32_MIN (-2147483647-1)
#define TCP_MD5SIG_FLAG_PREFIX 1
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __GXX_ABI_VERSION 1016
#define INT_FAST8_WIDTH 8
#define ENOENT 2
#define __USE_XOPEN2K8 1
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define htobe64(x) __bswap_64 (x)
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define islower_l(c,l) __islower_l ((c), (l))
#define SCHED_DEADLINE 6
#define DN_RENAME 0x00000010
#define TCP_S_DATA_IN (1 << 2)
#define __bitwise __bitwise__
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define __WINT_MAX__ 0xffffffffU
#define IFF_BROADCAST IFF_BROADCAST
#define st_mtime st_mtim.tv_sec
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define O_RDWR 02
#define __INT_LEAST32_MAX__ 0x7fffffff
#define LINE_MAX _POSIX2_LINE_MAX
#define MCAST_BLOCK_SOURCE 43
#define AIO_PRIO_DELTA_MAX 20
#define SIGEV_NONE SIGEV_NONE
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define si_stime _sifields._sigchld.si_stime
#define EHOSTUNREACH 113
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define PF_WANPIPE 25
#define __ASM_GENERIC_POSIX_TYPES_H 
#define __F_GETOWN 9
#define PF_INET 2
#define SIGVTALRM 26
#define F_OFD_GETLK 36
#define IFF_NOTRAILERS IFF_NOTRAILERS
#define XATTR_LIST_MAX 65536
#define PF_FILE PF_LOCAL
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define TCP_QUEUE_SEQ 21
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define __FLT128_MAX_EXP__ 16384
#define __DEFINE_INCLUDE_H__ 
#define IPPROTO_DCCP IPPROTO_DCCP
#define __INO_T_TYPE __ULONGWORD_TYPE
#define islower(c) __isctype((c), _ISlower)
#define be16toh(x) __bswap_16 (x)
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define CPU_SET_S(cpu,setsize,cpusetp) __CPU_SET_S (cpu, setsize, cpusetp)
#define _NETDB_H 1
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define TRAP_TRACE TRAP_TRACE
#define SIGPOLL 29
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define EPOLLRDNORM EPOLLRDNORM
#define F_ULOCK 0
#define TRAP_BRKPT TRAP_BRKPT
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define _FALLOC_H_ 
#define __struct_tm_defined 1
#define _SC_TRACE _SC_TRACE
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define __ssize_t_defined 
#define EBADFD 77
#define _POSIX_STREAM_MAX 8
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define __FLT32_MANT_DIG__ 24
#define __sigval_t_defined 
#define SVE_VQ_MAX __SVE_VQ_MAX
#define _GCC_LIMITS_H_ 
#define __AARCH64EL__ 1
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define PF_KCM 41
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define EISNAM 120
#define PF_BRIDGE 7
#define STA_PPSJITTER 0x0200
#define SIOCGPGRP 0x8904
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define EXFULL 54
#define IP_PKTOPTIONS 9
#define _SC_FSYNC _SC_FSYNC
#define __S_IFDIR 0040000
#define _BITS_POSIX1_LIM_H 1
#define __SIZE_T__ 
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define __FLT16_MAX_EXP__ 16
#define __stub_gtty 
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define _LFS64_ASYNCHRONOUS_IO 1
#define si_value _sifields._rt.si_sigval
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define IPV6_MULTICAST_HOPS 18
#define EFAULT 14
#define SSIZE_MAX LONG_MAX
#define IP_PASSSEC 18
#define IPPORT_RESERVED 1024
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define _SC_2_C_BIND _SC_2_C_BIND
#define FIBER_API 
#define si_utime _sifields._sigchld.si_utime
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define TCP_COOKIE_PAIR_SIZE (2*TCP_COOKIE_MAX)
#define TCP_MSS_DESIRED 1220U
#define AT_FDCWD -100
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define __BIGGEST_ALIGNMENT__ 16
#define _SYS_SIZE_T_H 
#define AI_ALL 0x0010
#define INT32_MAX (2147483647)
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __INT32_C(c) c
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define FFSYNC O_FSYNC
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP) } }
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define MSG_SYN MSG_SYN
#define _PATH_PROTOCOLS "/etc/protocols"
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __wur __attribute_warn_unused_result__
#define __S_IFMT 0170000
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define AI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("AI_IDN_USE_STD3_ASCII_RULES is deprecated") 0x0200
#define TCP_USER_TIMEOUT 18
#define PTHREAD_CANCELED ((void *) -1)
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define POLLMSG 0x400
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_RECURSIVE_NP) } }
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX INT_MAX
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define DN_ATTRIB 0x00000020
#define SO_INCOMING_CPU 49
#define _BITS_FLOATN_H 
#define _POSIX_PATH_MAX 256
#define _POSIX_RTSIG_MAX 8
#define STATX_TYPE 0x00000001U
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define FPE_INTOVF FPE_INTOVF
#define __O_DIRECT 0200000
#define __error_t_defined 1
#define __SCHAR_WIDTH__ 8
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define __ORDER_PDP_ENDIAN__ 3412
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define TH_PUSH 0x08
#define RWF_DSYNC 0x00000002
#define _ISOC95_SOURCE 1
#define _NETINET_TCP_H 1
#define INT_FAST8_MIN (-128)
#define EL2HLT 51
#define IP_ADD_MEMBERSHIP 35
#define RLIM64_INFINITY 0xffffffffffffffffuLL
#define __ARM_64BIT_STATE 1
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define sa_handler __sigaction_handler.sa_handler
#define TCPOPT_TIMESTAMP 8
#define SIGSEGV 11
#define SVE_VQ_MIN __SVE_VQ_MIN
#define isupper_l(c,l) __isupper_l ((c), (l))
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define BYTE_ORDER __BYTE_ORDER
#define ENOKEY 126
#define LIKELY(x) __builtin_expect(!!(x), 1)
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define PF_ROUTE PF_NETLINK
#define __INT_FAST32_TYPE__ long int
#define __have_pthread_attr_t 1
#define TCPI_OPT_ECN 8
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define AF_ROUTE PF_ROUTE
#define _SC_FD_MGMT _SC_FD_MGMT
#define _BITS_TYPESIZES_H 1
#define IPV6_PMTUDISC_PROBE 3
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define DN_DELETE 0x00000008
#define ILL_COPROC ILL_COPROC
#define S_IWGRP (S_IWUSR >> 3)
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define htole32(x) __uint32_identity (x)
#define SIG_DFL ((__sighandler_t) 0)
#define O_RDONLY 00
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define F_OK 0
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define FIBER_EAGAIN EAGAIN
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define UCHAR_WIDTH 8
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define FPE_FLTDIV FPE_FLTDIV
#define RAND_MAX 2147483647
#define ifr_dstaddr ifr_ifru.ifru_dstaddr
#define _POSIX_MAX_INPUT 255
#define IPV6_RECVDSTOPTS 58
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define TCP_TX_DELAY 37
#define F_SHLCK 8
#define _SIZET_ 
#define RWH_WRITE_LIFE_MEDIUM 3
#define EADDRNOTAVAIL 99
#define ESHUTDOWN 108
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define SO_SNDTIMEO_NEW 67
#define F_SETLK 6
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define NI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("NI_IDN_USE_STD3_ASCII_RULES is deprecated") 128
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define SO_BINDTODEVICE 25
#define FOPEN_MAX 16
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define GETPID getpid
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define TCP_MAXSEG 2
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define F_SETOWN __F_SETOWN
#define PF_VSOCK 40
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IFF_DYNAMIC IFF_DYNAMIC
#define _IOT_ifreq_short _IOT(_IOTS(char),IFNAMSIZ,_IOTS(short),1,0,0)
#define EPOLLERR EPOLLERR
#define SO_PRIORITY 12
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define FPE_CONDTRAP FPE_CONDTRAP
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define __FLT64X_DIG__ 33
#define IN_CLASSA_NET 0xff000000
#define TCP_KEEPINTVL 5
#define __ARM_FEATURE_FMA 1
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define TCPI_OPT_SACK 2
#define __INT8_TYPE__ signed char
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define F_SETLK64 6
#define SOL_NETBEUI 267
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define COLL_WEIGHTS_MAX 255
#define __HAVE_DISTINCT_FLOAT128 0
#define __ELF__ 1
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define CLOCK_THREAD_CPUTIME_ID 3
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define STA_INS 0x0010
#define IPV6_PKTINFO 50
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define STA_MODE 0x4000
#define POLLREMOVE 0x1000
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define UIO_MAXIOV __IOV_MAX
#define __F_GETOWN_EX 16
#define __ASSERT_FUNCTION __extension__ __PRETTY_FUNCTION__
#define SIOCGSTAMP_OLD 0x8906
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define PF_NETLINK 16
#define TCPOLEN_TIMESTAMP 10
#define MCAST_UNBLOCK_SOURCE 44
#define isdigit(c) __isctype((c), _ISdigit)
#define ELIBSCN 81
#define F_TLOCK 2
#define _UCONTEXT_H 1
#define ADJ_OFFSET_SS_READ 0xa001
#define TCP_THIN_DUPACK 17
#define _BITS_TIME_H 1
#define __CPU_SETSIZE 1024
#define F_GETLEASE 1025
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define O_NOATIME __O_NOATIME
#define SO_DOMAIN 39
#define SOL_RAW 255
#define __S_IWRITE 0200
#define AI_V4MAPPED 0x0008
#define INT_LEAST16_WIDTH 16
#define __FLT_RADIX__ 2
#define SO_REUSEPORT 15
#define __INT_LEAST16_TYPE__ short int
#define SO_NO_CHECK 11
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define SO_ERROR 4
#define _POSIX_C_SOURCE 200809L
#define TCP_SYNCNT 7
#define IP_MULTICAST_IF 32
#define CLONE_NEWPID 0x20000000
#define __ARM_PCS_AAPCS64 1
#define FPE_FLTSUB FPE_FLTSUB
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define INT32_C(c) c
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _ALLOCA_H 1
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define IPV6_LEAVE_GROUP 21
#define _BITS_SIGCONTEXT_H 1
#define SEGV_ADIDERR SEGV_ADIDERR
#define htobe32(x) __bswap_32 (x)
#define SO_PEERNAME 28
#define AF_ATMSVC PF_ATMSVC
#define TCP_MAXWIN 65535
#define ENAVAIL 119
#define _SETJMP_H 1
#define SO_SNDBUFFORCE 32
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define IP_RETOPTS 7
#define __LDBL_REDIR(name,proto) name proto
#define CLOCK_MONOTONIC_RAW 4
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define MSG_TRUNC MSG_TRUNC
#define F_TEST 3
#define SIGCONT 18
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define ENOSTR 60
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define __INT_LEAST64_WIDTH__ 64
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define EPROTO 71
#define _SC_SELECT _SC_SELECT
#define _BITS_SIGSTACK_H 1
#define O_SYNC 04010000
#define IP_FREEBIND 15
#define _POSIX_TIMEOUTS 200809L
#define WINAPI 
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define _LFS64_LARGEFILE 1
#define EOVERFLOW 75
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_IEC_60559_BFP__ 201404L
#define S_IRUSR __S_IREAD
#define SIGPIPE 13
#define __toascii_l(c,l) ((l), __toascii (c))
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define FIOGETOWN 0x8903
#define SCHED_BATCH 3
#define O_CLOEXEC __O_CLOEXEC
#define __SIZEOF_PTRDIFF_T__ 8
#define SEGV_PKUERR SEGV_PKUERR
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define ifr_name ifr_ifrn.ifrn_name
#define SEEK_SET 0
#define _CS_V7_ENV _CS_V7_ENV
#define RWF_APPEND 0x00000010
#define _PC_VDISABLE _PC_VDISABLE
#define _LFS64_STDIO 1
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define __ATOMIC_RELAXED 0
#define CSIGNAL 0x000000ff
#define AF_IEEE802154 PF_IEEE802154
#define __iovec_defined 1
#define FALLOC_FL_KEEP_SIZE 0x01
#define ACL_FIBER_ATTR_SHARE_STACK (unsigned) 1 << 0
#define IFF_UP IFF_UP
#define IN_CLASSA_MAX 128
#define RLIMIT_NPROC __RLIMIT_NPROC
#define SO_TXTIME 61
#define __stub_sigreturn 
#define __INDIRECT_RETURN 
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define CLOCK_TAI 11
#define ESR_MAGIC 0x45535201
#define IPV6_RECVPATHMTU 60
#define SO_DETACH_FILTER 27
#define PF_TIPC 30
#define __restrict_arr __restrict
#define EAI_AGAIN -3
#define EAI_NODATA -5
#define IP_MSFILTER 41
#define _EXTERN_INLINE __extern_inline
#define __f32(x) x ##f32
#define ENOMEDIUM 123
#define PF_IRDA 23
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define _POSIX_SHELL 1
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define PTHREAD_INCLUDE_H 
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define EBUSY 16
#define __UWORD_TYPE unsigned long int
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define __LDBL_DIG__ 33
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define IP_BLOCK_SOURCE 38
#define TRAP_UNK TRAP_UNK
#define O_NDELAY O_NONBLOCK
#define W_OK 2
#define ENODEV 19
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __FLT64_IS_IEC_60559__ 2
#define _SIZE_T_ 
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define RLIMIT_RSS __RLIMIT_RSS
#define __FLT16_IS_IEC_60559__ 2
#define NI_NUMERICSERV 2
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define RLIMIT_MEMLOCK __RLIMIT_MEMLOCK
#define AF_ATMPVC PF_ATMPVC
#define INT8_MAX (127)
#define O_CREAT 0100
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define _WCHAR_T_H 
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define STA_FLL 0x0008
#define POLL_OUT POLL_OUT
#define TCPI_OPT_SYN_DATA 32
#define IPV6_AUTOFLOWLABEL 70
#define BOOL_MAX 1
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define _POSIX_NGROUPS_MAX 8
#define MSG_OOB MSG_OOB
#define TCP_CM_INQ TCP_INQ
#define __WCLONE 0x80000000
#define INT_MAX __INT_MAX__
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define __stub___compat_create_module 
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define EMSGSIZE 90
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define _POSIX_MONOTONIC_CLOCK 0
#define EKEYEXPIRED 127
#define PF_PACKET 17
#define _POSIX_CHOWN_RESTRICTED 0
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define S_ISVTX __S_ISVTX
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define EROFS 30
#define AF_UNSPEC PF_UNSPEC
#define IP_PMTUDISC_DONT 0
#define AF_NETLINK PF_NETLINK
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __USE_ISOC95 1
#define ADJ_FREQUENCY 0x0002
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define SIGSYS 31
#define MINSIGSTKSZ SIGSTKSZ
#define NULL ((void *)0)
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define FIBER_EWOULDBLOCK EWOULDBLOCK
#define CLONE_NEWIPC 0x08000000
#define __U64_TYPE unsigned long int
#define IPV6_PMTUDISC_DO 2
#define IPV6_RTHDRDSTOPTS 55
#define __FLT_HAS_QUIET_NAN__ 1
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define IP_RECVOPTS 6
#define _SYS_UCONTEXT_H 1
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)
#define _POSIX_TRACE_INHERIT -1
#define __FLT_MAX_10_EXP__ 38
#define _POSIX_DELAYTIMER_MAX 32
#define _____fpos64_t_defined 1
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define _PATH_NETWORKS "/etc/networks"
#define PF_IEEE802154 36
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define S_IXGRP (S_IXUSR >> 3)
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO _PC_SYNC_IO
#define INT64_WIDTH 64
#define ELIBACC 79
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define __glibc_objsize0(__o) __bos0 (__o)
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define EHWPOISON 133
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define LOCK_READ 64
#define SIGALRM 14
#define _POSIX_TIMERS 200809L
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define INT16_WIDTH 16
#define NI_DGRAM 16
#define IPV6_JOIN_ANYCAST 27
#define _SC_SIGNALS _SC_SIGNALS
#define L_INCR SEEK_CUR
#define __unix 1
#define IP_MULTICAST_ALL 49
#define TRAP_BRANCH TRAP_BRANCH
#define S_IFSOCK __S_IFSOCK
#define IP_HDRINCL 3
#define _BITS_PTHREADTYPES_COMMON_H 1
#define IPV6_TCLASS 67
#define _POSIX_MQ_PRIO_MAX 32
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define HOST_NAME_MAX 64
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define __DBL_HAS_DENORM__ 1
#define SCM_TIMESTAMPING_OPT_STATS 54
#define __UINT_FAST16_TYPE__ long unsigned int
#define __statx_defined 1
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define _POSIX_RAW_SOCKETS 200809L
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define AF_IRDA PF_IRDA
#define __CHAR16_TYPE__ short unsigned int
#define __FLT64X_MAX_EXP__ 16384
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define __ss_aligntype unsigned long int
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
#define FPE_FLTOVF FPE_FLTOVF
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define PF_PPPOX 24
#define _STRINGS_H 1
#define SI_MESGQ SI_MESGQ
#define AI_IDN 0x0040
#define __SIZE_WIDTH__ 64
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define __BLKSIZE_T_TYPE __S32_TYPE
#define PF_ECONET 19
#define SO_TIMESTAMPNS_NEW 64
#define _WCHAR_T_DECLARED 
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define AF_MPLS PF_MPLS
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __stub_revoke 
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define IP_MINTTL 21
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define EAI_IDN_ENCODE -105
#define AF_KEY PF_KEY
#define STATX_MODE 0x00000002U
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define PF_QIPCRTR 42
#define _XOPEN_REALTIME 1
#define CPU_ZERO_S(setsize,cpusetp) __CPU_ZERO_S (setsize, cpusetp)
#define IPV6_AUTHHDR 10
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define htole16(x) __uint16_identity (x)
#define SOL_KCM 281
#define CLONE_PTRACE 0x00002000
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define SIGSTOP 19
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define __STDC_VERSION__ 199901L
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define __BITS_SOCKET_H 
#define ENOTDIR 20
#define SO_DEBUG 1
#define SEEK_HOLE 4
#define ADJ_SETOFFSET 0x0100
#define TIMER_ABSTIME 1
#define TH_FIN 0x01
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define _POSIX_FSYNC 200809L
#define ILL_BADSTK ILL_BADSTK
#define __PMT(args) args
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define IFF_LOOPBACK IFF_LOOPBACK
#define AF_NETBEUI PF_NETBEUI
#define AT_NO_AUTOMOUNT 0x800
#define IPV6_2292RTHDR 5
#define FPSIMD_MAGIC 0x46508001
#define RUSAGE_SELF RUSAGE_SELF
#define IPPROTO_NONE IPPROTO_NONE
#define ECONNRESET 104
#define _POSIX_CLOCK_SELECTION 200809L
#define WTERMSIG(status) __WTERMSIG (status)
#define RLIM_NLIMITS __RLIM_NLIMITS
#define EIDRM 43
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define _LINUX_LIMITS_H 
#define AF_SNA PF_SNA
#define linux 1
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define SOL_DCCP 269
#define _SC_2_VERSION _SC_2_VERSION
#define RE_DUP_MAX (0x7fff)
#define TCPOLEN_SACK_PERMITTED 2
#define ENXIO 6
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define CLONE_CHILD_SETTID 0x01000000
#define ntohl(x) __bswap_32 (x)
#define SA_NOCLDSTOP 1
#define CLOCK_MONOTONIC 1
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define TCP_COOKIE_IN_ALWAYS (1 << 0)
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define ____FILE_defined 1
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define MOD_NANO ADJ_NANO
#define htole64(x) __uint64_identity (x)
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define FPE_FLTINV FPE_FLTINV
#define F_GETLK64 5
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define EBADRQC 56
#define htonl(x) __bswap_32 (x)
#define _SC_NL_NMAX _SC_NL_NMAX
#define CHAR_WIDTH 8
#define F_SETLKW 7
#define __USE_POSIX2 1
#define SA_INTERRUPT 0x20000000
#define O_LARGEFILE __O_LARGEFILE
#define NL_LANGMAX _POSIX2_LINE_MAX
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define _BITS_SS_FLAGS_H 1
#define IP_PMTUDISC_DO 2
#define __FLT64X_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define __FLT32_MIN_10_EXP__ (-37)
#define _SC_POLL _SC_POLL
#define IN_CLASSA_NSHIFT 24
#define INET6_ADDRSTRLEN 46
#define __KEY_T_TYPE __S32_TYPE
#define LINUX 
#define ntohs(x) __bswap_16 (x)
#define sigev_notify_function _sigev_un._sigev_thread._function
#define __SVE_VQ_MAX 512
#define FAPPEND O_APPEND
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define TCP_REPAIR_QUEUE 20
#define __F_SETSIG 10
#define __FLT32X_DIG__ 15
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define __UINT8_TYPE__ unsigned char
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define __timer_t_defined 1
#define SVE_VL_MIN __SVE_VL_MIN
#define _DLFCN_H 1
#define __PTRDIFF_WIDTH__ 64
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define __BEGIN_DECLS 
#define _SC_PII_XTI _SC_PII_XTI
#define SCM_RIGHTS SCM_RIGHTS
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define IPV6_RECVFRAGSIZE 77
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define ENAMETOOLONG 36
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define CLD_STOPPED CLD_STOPPED
#define SHRT_WIDTH 16
#define BOOL_WIDTH 1
#define ifr_netmask ifr_ifru.ifru_netmask
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define INT_FAST8_MAX (127)
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define IPV6_JOIN_GROUP 20
#define POLL_HUP POLL_HUP
#define _NET_IF_H 1
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define _STRING_H 1
#define UINT_FAST32_WIDTH __WORDSIZE
#define AI_NUMERICSERV 0x0400
#define IPPROTO_MPLS IPPROTO_MPLS
#define SA_STACK SA_ONSTACK
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define _PC_LINK_MAX _PC_LINK_MAX
#define BUS_ADRERR BUS_ADRERR
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define CLONE_VM 0x00000100
#define ____sigset_t_defined 
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define F_GETOWN __F_GETOWN
#define AT_SYMLINK_NOFOLLOW 0x100
#define CLONE_NEWNS 0x00020000
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define assert(expr) ((void) sizeof ((expr) ? 1 : 0), __extension__ ({ if (expr) ; else __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION); }))
#define le64toh(x) __uint64_identity (x)
#define _PATH_SERVICES "/etc/services"
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define EPOLLHUP EPOLLHUP
#define FILENAME_MAX 4096
#define SOL_RXRPC 272
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define MSG_RST MSG_RST
#define __FLT16_MANT_DIG__ 11
#define L_cuserid 9
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define RLIMIT_NICE __RLIMIT_NICE
#define __sched_priority sched_priority
#define __ino_t_defined 
#define AF_LOCAL PF_LOCAL
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ unsigned int
#define __CLOCKID_T_TYPE __S32_TYPE
#define __SLONGWORD_TYPE long int
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define _POSIX_MEMLOCK_RANGE 200809L
#define S_IEXEC S_IXUSR
#define IP_RECVTTL 12
#define _BITS_STDINT_UINTN_H 1
#define S_ISBLK(mode) __S_ISTYPE((mode), __S_IFBLK)
#define ELIBEXEC 83
#define RWH_WRITE_LIFE_NOT_SET 0
#define IP_MULTICAST_LOOP 34
#define __pic__ 2
#define UINT_LEAST16_MAX (65535)
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define SEGV_ADIPERR SEGV_ADIPERR
#define __S_IFLNK 0120000
#define __ARM_ARCH_8A 1
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define INT8_WIDTH 8
#define __stub_chflags 
#define __UQUAD_TYPE unsigned long int
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define IPPROTO_IPV6 IPPROTO_IPV6
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define SI_ASYNCIO SI_ASYNCIO
#define EDOTDOT 73
#define SIGUSR2 12
#define __BYTE_ORDER __LITTLE_ENDIAN
#define __MEMORY_HEAD_H__ 
#define _BITS_UIO_LIM_H 1
#define CPU_COUNT(cpusetp) __CPU_COUNT_S (sizeof (cpu_set_t), cpusetp)
#define _POSIX_UIO_MAXIOV 16
#define STA_PPSFREQ 0x0002
#define __USE_POSIX 1
#define PF_NFC 39
#define ETIME 62
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define TCPOLEN_MAXSEG 4
#define RUSAGE_THREAD RUSAGE_THREAD
#define STATX_ALL 0x00000fffU
#define BUFSIZ 8192
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define __FSID_T_TYPE struct { int __val[2]; }
#define RLIMIT_RTTIME __RLIMIT_RTTIME
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define SO_PEEK_OFF 42
#define __FLT32_HAS_INFINITY__ 1
#define TTY_NAME_MAX 32
#define IPV6_TRANSPARENT 75
#define _POSIX_AIO_MAX 1
#define EBADE 52
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define __UINT_FAST64_TYPE__ long unsigned int
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define CLONE_UNTRACED 0x00800000
#define WNOWAIT 0x01000000
#define FIBER_EHOSTDOWN EHOSTDOWN
#define IPV6_PATHMTU 61
#define FIBER_EVENT_KERNEL 0
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define EXIT_SUCCESS 0
#define __LDBL_REDIR_DECL(name) 
#define ELIBBAD 80
#define AF_ALG PF_ALG
#define _SC_2_PBS _SC_2_PBS
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define AF_QIPCRTR PF_QIPCRTR
#define UINT_FAST8_MAX (255)
#define NI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("NI_IDN_ALLOW_UNASSIGNED is deprecated") 64
#define __mode_t_defined 
#define FALLOC_FL_ZERO_RANGE 0x10
#define UINT_FAST8_WIDTH 8
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define INT_FAST32_WIDTH __WORDSIZE
#define _FCNTL_H 1
#define IN_MULTICAST(a) IN_CLASSD(a)
#define IPV6_ADDR_PREFERENCES 72
#define PTRDIFF_WIDTH __WORDSIZE
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define _LINUX_POSIX_TYPES_H 
#define ULLONG_WIDTH 64
#define FIBER_ETIMEDOUT ETIMEDOUT
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define INT8_MIN (-128)
#define si_band _sifields._sigpoll.si_band
#define SO_ZEROCOPY 60
#define S_IREAD S_IRUSR
#define SOL_IUCV 277
#define _BITS_SIGACTION_H 1
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define TCP_MAX_WINSHIFT 14
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define EPROTONOSUPPORT 93
#define UINT_MAX (INT_MAX * 2U + 1U)
#define __itimerspec_defined 1
#define _T_SIZE_ 
#define EBADR 53
#define EFBIG 27
#define __TIMESIZE 64
#define PF_AX25 3
#define LLONG_MAX __LONG_LONG_MAX__
#define UINT_LEAST8_WIDTH 8
#define IPV6_RECVHOPLIMIT 51
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define ENOTRECOVERABLE 131
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define _LIMITS_H___ 
#define PF_ATMSVC 20
#define INT_LEAST16_MIN (-32767-1)
#define POLLIN 0x001
#define INT16_C(c) c
#define SIGILL 4
#define __SIGRTMAX 64
#define SIGXCPU 24
#define __WNOTHREAD 0x20000000
#define sched_priority sched_priority
#define __USE_LARGEFILE64 1
#define UINT64_WIDTH 64
#define STDIN_FILENO 0
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define __INT64_TYPE__ long int
#define PF_MPLS 28
#define __FLT_MAX_EXP__ 128
#define F_NOTIFY 1026
#define CLOCK_PROCESS_CPUTIME_ID 2
#define __POSIX_FADV_DONTNEED 4
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define __cookie_io_functions_t_defined 1
#define __gid_t_defined 
#define ENETUNREACH 101
#define ifr_broadaddr ifr_ifru.ifru_broadaddr
#define EXDEV 18
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define IN_LOOPBACKNET 127
#define O_DIRECTORY __O_DIRECTORY
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define IPV6_MULTICAST_IF 17
#define UINT32_C(c) c ## U
#define S_IFLNK __S_IFLNK
#define EPOLLOUT EPOLLOUT
#define __ORDER_BIG_ENDIAN__ 4321
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define _IONBF 2
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define ESTRPIPE 86
#define NETDB_SUCCESS 0
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define _POSIX_REALTIME_SIGNALS 200809L
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define FPE_FLTRES FPE_FLTRES
#define SI_TKILL SI_TKILL
#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#define IPV6_RTHDR_LOOSE 0
#define __SVE_VQ_BYTES 16
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define _POSIX_SEM_VALUE_MAX 32767
#define __FP_FAST_FMAF32 1
#define XATTR_SIZE_MAX 65536
#define __GLIBC_MINOR__ 35
#define __UINT_LEAST32_TYPE__ unsigned int
#define MB_LEN_MAX 16
#define __SIZEOF_SHORT__ 2
#define F_SEAL_GROW 0x0004
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SEM_VALUE_MAX (2147483647)
#define _XBS5_ILP32_OFFBIG -1
#define CLOCK_BOOTTIME 7
#define _CTYPE_H 1
#define AF_ASH PF_ASH
#define FNDELAY O_NDELAY
#define IPPROTO_GRE IPPROTO_GRE
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define POLL_PRI POLL_PRI
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define SOL_PACKET 263
#define MOD_TAI ADJ_TAI
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define USE_FAST_RING 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define MSG_CONFIRM MSG_CONFIRM
#define EPOLL_CTL_MOD 3
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _POSIX_VDISABLE '\0'
#define FD_SETSIZE __FD_SETSIZE
#define IPV6_RECVPKTINFO 49
#define SIGCLD SIGCHLD
#define ENOSPC 28
#define stdout stdout
#define ENOEXEC 8
#define __WINT_WIDTH__ 32
#define FIBER_ECONNRESET ECONNRESET
#define __struct_FILE_defined 1
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define INTPTR_WIDTH __WORDSIZE
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define EOF (-1)
#define DELAYTIMER_MAX 2147483647
#define __INT_LEAST8_MAX__ 0x7f
#define __USE_POSIX199309 1
#define O_DIRECT __O_DIRECT
#define __FLT32X_MAX_10_EXP__ 308
#define INT32_WIDTH 32
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define RLIMIT_DATA RLIMIT_DATA
#define S_ISREG(mode) __S_ISTYPE((mode), __S_IFREG)
#define ESRCH 3
#define STATX__RESERVED 0x80000000U
#define STA_NANO 0x2000
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define TCP_QUICKACK 12
#define SO_ATTACH_REUSEPORT_EBPF 52
#define __SIGRTMIN 32
#define SIGTSTP 20
#define STATX_MNT_ID 0x00001000U
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define NORETURN __attribute__((__noreturn__))
#define SO_RCVBUFFORCE 33
#define _POSIX_SIGQUEUE_MAX 32
#define __LDBL_MAX_10_EXP__ 4932
#define CLONE_FS 0x00000200
#define ECONNREFUSED 111
#define IFF_DEBUG IFF_DEBUG
#define _BITS_SIGNUM_GENERIC_H 1
#define SOL_XDP 283
#define IP_PMTUDISC 10
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define TCP_KEEPIDLE 4
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define SA_ONESHOT SA_RESETHAND
#define __stub_stty 
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define __FLT32_MIN_EXP__ (-125)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define RWH_WRITE_LIFE_NONE 1
#define le16toh(x) __uint16_identity (x)
#define SOL_CAIF 278
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define STATX_ATTR_COMPRESSED 0x00000004
#define MCAST_INCLUDE 1
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define LOCK_SH 1
#define CPU_EQUAL(cpusetp1,cpusetp2) __CPU_EQUAL_S (sizeof (cpu_set_t), cpusetp1, cpusetp2)
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define _LP64 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define TCP_MSS_DEFAULT 536U
#define AT_STATX_FORCE_SYNC 0x2000
#define POSIX_FADV_RANDOM 1
#define _IOT_ifreq _IOT(_IOTS(char),IFNAMSIZ,_IOTS(char),16,0,0)
#define EPOLLET EPOLLET
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define __UINT8_C(c) c
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define MOD_MAXERROR ADJ_MAXERROR
#define IPPROTO_RSVP IPPROTO_RSVP
#define __S_IFSOCK 0140000
#define SIGKILL 9
#define TCP_FASTOPEN_CONNECT 30
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define __INT_LEAST32_TYPE__ int
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define ECHRNG 44
#define __sig_atomic_t_defined 1
#define EHOSTDOWN 112
#define TCP_INFO 11
#define _LFS_LARGEFILE 1
#define PF_SNA 22
#define STA_CLK 0x8000
#define RWH_WRITE_LIFE_LONG 4
#define __wchar_t__ 
#define SEGV_MAPERR SEGV_MAPERR
#define SEEK_END 2
#define __UINT64_TYPE__ long unsigned int
#define EAI_ADDRFAMILY -9
#define _PTHREAD_H 1
#define __stub___compat_query_module 
#define TCP_REPAIR_OPTIONS 22
#define S_IWOTH (S_IWGRP >> 3)
#define __ARM_NEON 1
#define _ISOC99_SOURCE 1
#define NO_DATA 4
#define ENOLCK 37
#define _SC_REGEXP _SC_REGEXP
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define _ASM_GENERIC_ERRNO_H 
#define MSG_DONTWAIT MSG_DONTWAIT
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define SO_MEMINFO 55
#define _SC_IOV_MAX _SC_IOV_MAX
#define EPOLL_CLOEXEC EPOLL_CLOEXEC
#define _SC_PASS_MAX _SC_PASS_MAX
#define _LARGEFILE64_SOURCE 1
#define __S_ISUID 04000
#define __stub___compat_bdflush 
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define RLIM_SAVED_MAX RLIM_INFINITY
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 01000
#define ifc_req ifc_ifcu.ifcu_req
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define SA_RESTART 0x10000000
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define IPPROTO_IGMP IPPROTO_IGMP
#define __ASM_GENERIC_SOCKIOS_H 
#define F_DUPFD 0
#define __O_NOFOLLOW 0100000
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define __UINT_FAST8_TYPE__ unsigned char
#define __INT_FAST8_TYPE__ signed char
#define PF_RDS 21
#define __PID_T_TYPE __S32_TYPE
#define STATX_ATTR_IMMUTABLE 0x00000010
#define CHARCLASS_NAME_MAX 2048
#define IPV6_RECVTCLASS 66
#define TCPOPT_MAXSEG 2
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX _SC_AIO_MAX
#define O_WRONLY 01
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define ENOTCONN 107
#define RUSAGE_LWP RUSAGE_THREAD
#define va_arg(v,l) __builtin_va_arg(v,l)
#define _SYS_POLL_H 1
#define RTLD_DEFAULT ((void *) 0)
#define S_ISGID __S_ISGID
#define __USE_ISOC11 1
#define IN_CLASSB_NET 0xffff0000
#define UINT_LEAST64_WIDTH 64
#define _THREAD_SHARED_TYPES_H 1
#define AT_REMOVEDIR 0x200
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define __f128(x) x ##f128
#define __glibc_has_extension(ext) 0
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define _SC_TIMERS _SC_TIMERS
#define __GNUC_STDC_INLINE__ 1
#define SOL_IRDA 266
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define P_tmpdir "/tmp"
#define AT_STATX_SYNC_TYPE 0x6000
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define __FLT64_HAS_DENORM__ 1
#define EPOLLRDHUP EPOLLRDHUP
#define __HAVE_FLOAT32 1
#define POLLERR 0x008
#define __WORDSIZE_TIME64_COMPAT32 0
#define __HAVE_DISTINCT_FLOAT32 0
#define ENOTSUP EOPNOTSUPP
#define __STRINGS_FORTIFIED 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define IP_CHECKSUM 23
#define isalnum(c) __isctype((c), _ISalnum)
#define IN_CLASSC_NSHIFT 8
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define IPV6_ROUTER_ALERT 22
#define __kernel_old_uid_t __kernel_old_uid_t
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define _POSIX_MESSAGE_PASSING 200809L
#define CPU_FREE(cpuset) __CPU_FREE (cpuset)
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define __FP_FAST_FMAF32x 1
#define R_OK 4
#define _BITS_SIGTHREAD_H 1
#define PTHREAD_ONCE_INIT 0
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define UINT_FAST16_MAX (18446744073709551615UL)
#define toascii_l(c,l) __toascii_l ((c), (l))
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define __INT_FAST8_WIDTH__ 8
#define __USE_XOPEN_EXTENDED 1
#define IPV6_RECVRTHDR 56
#define CLD_DUMPED CLD_DUMPED
#define _SIZE_T 
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define __ULONG32_TYPE unsigned int
#define ULONG_WIDTH __WORDSIZE
#define _SC_NETWORKING _SC_NETWORKING
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _PATH_HOSTS "/etc/hosts"
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define __SI_CLOCK_T __clock_t
#define UTIME_OMIT ((1l << 30) - 2l)
#define SOCK_STREAM SOCK_STREAM
#define AI_CANONIDN 0x0080
#define CLONE_CHILD_CLEARTID 0x00200000
#define TIME_UTC 1
#define __FLT64X_HAS_INFINITY__ 1
#define __BIG_ENDIAN 4321
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __suseconds_t_defined 
#define POLLPRI 0x002
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define TCPI_OPT_ECN_SEEN 16
#define SIGFPE 8
#define ifr_ifindex ifr_ifru.ifru_ivalue
#define MQ_PRIO_MAX 32768
#define __ASM_BITSPERLONG_H 
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define __fortify_function __extern_always_inline __attribute_artificial__
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define STATX_ATTR_MOUNT_ROOT 0x00002000
#define SHRT_MIN (-SHRT_MAX - 1)
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define __off_t_defined 
#define SO_CNX_ADVICE 53
#define ENOTBLK 15
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define SO_NOFCS 43
#define SI_KERNEL SI_KERNEL
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define __SIZEOF_WCHAR_T__ 4
#define unix 1
#define S_IWRITE S_IWUSR
#define PF_MAX 46
#define SIGPWR 30
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ERRORCHECK_NP) } }
#define _SCHED_H 1
#define FPE_FLTUNK FPE_FLTUNK
#define STATX_CTIME 0x00000080U
#define _POSIX_REENTRANT_FUNCTIONS 1
#define IP_MULTICAST_TTL 33
#define FIBER_EINPROGRESS EINPROGRESS
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define F_OFD_SETLKW 38
#define _GCC_SIZE_T 
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define IPV6_RECVERR_RFC4884 31
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define __INO64_T_TYPE __UQUAD_TYPE
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define INT32_MIN (-2147483647-1)
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define STATX_ATTR_DAX 0x00200000
#define __W_CONTINUED 0xffff
#define L_SET SEEK_SET
#define SO_PEERGROUPS 59
#define _LIBC_LIMITS_H_ 1
#define __USE_XOPEN2K8XSI 1
#define _SYS_STAT_H 1
#define MCAST_LEAVE_GROUP 45
#define SO_SNDTIMEO_OLD 21
#define CPU_AND(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, &)
#define IP_RECVFRAGSIZE 25
#define _BITS_UIO_EXT_H 1
#define __UINT32_C(c) c ## U
#define EISCONN 106
#define _POSIX_V6_ILP32_OFFBIG -1
#define EAI_SYSTEM -11
#define S_ISLNK(mode) __S_ISTYPE((mode), __S_IFLNK)
#define __size_t__ 
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define F_ADD_SEALS 1033
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ADAPTIVE_NP) } }
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define CPU_ALLOC_SIZE(count) __CPU_ALLOC_SIZE (count)
#define TCP_DEFER_ACCEPT 9
#define _BITS_TIME64_H 1
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _SC_INT_MAX _SC_INT_MAX
#define SO_TIMESTAMPING_OLD 37
#define __WINT_MIN__ 0U
#define SIOCGSTAMPNS_OLD 0x8907
#define _GETOPT_POSIX_H 1
#define __TIME64_T_TYPE __TIME_T_TYPE
#define TCP_MD5SIG 14
#define __glibc_has_builtin(name) __has_builtin (name)
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define __ONCE_FLAG_INIT { 0 }
#define AI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("AI_IDN_ALLOW_UNASSIGNED is deprecated") 0x0100
#define AF_UNIX PF_UNIX
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define IPV6_DONTFRAG 62
#define HAS_EPOLL 
#define IP_RECVRETOPTS IP_RETOPTS
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define SO_TIMESTAMP_NEW 63
#define IPPROTO_COMP IPPROTO_COMP
#define sigcontext_struct sigcontext
#define EUSERS 87
#define SI_ASYNCNL SI_ASYNCNL
#define ACL_PREPARE_COMPILE 1
#define _VA_LIST_T_H 
#define AF_DECnet PF_DECnet
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define _SYS_SOCKET_H 1
#define __PIC__ 2
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define SIG_ERR ((__sighandler_t) -1)
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define TCP_NODELAY 1
#define ENETDOWN 100
#define AI_NUMERICHOST 0x0004
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define ifr_qlen ifr_ifru.ifru_ivalue
#define O_NOFOLLOW __O_NOFOLLOW
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define FIBER_EINTR EINTR
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define __INO_T_MATCHES_INO64_T 1
#define F_SEAL_FUTURE_WRITE 0x0010
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 92
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define _POSIX2_EXPR_NEST_MAX 32
#define ispunct(c) __isctype((c), _ISpunct)
#define POLL_IN POLL_IN
#define SO_ATTACH_BPF 50
#define WINT_MIN (0u)
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __GLIBC_USE_IEC_60559_EXT 1
#define __fsfilcnt_t_defined 
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define STA_CLOCKERR 0x1000
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define UINT_LEAST32_MAX (4294967295U)
#define EMFILE 24
#define F_SET_FILE_RW_HINT 1038
#define IP_PMTUDISC_PROBE 3
#define NGROUPS_MAX 65536
#define SA_NOCLDWAIT 2
#define __va_list__ 
#define SO_BUSY_POLL_BUDGET 70
#define isprint_l(c,l) __isprint_l ((c), (l))
#define SHUT_RDWR SHUT_RDWR
#define IPV6_HOPLIMIT 52
#define SO_SNDLOWAT 19
#define IPV6_V6ONLY 26
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define SCM_TIMESTAMP SO_TIMESTAMP
#define UINTMAX_C(c) c ## UL
#define __lldiv_t_defined 1
#define RTLD_NOLOAD 0x00004
#define MAX_CANON 255
#define _POSIX_ASYNC_IO 1
#define POLLOUT 0x004
#define CLOCK_REALTIME 0
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define ADJ_TICK 0x4000
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define MSG_EOR MSG_EOR
#define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
#define __INT32_TYPE__ int
#define IPV6_CHECKSUM 7
#define AI_PASSIVE 0x0001
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define _ASSERT_H 1
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define __SIZEOF_DOUBLE__ 8
#define __time_t_defined 1
#define _SC_INT_MIN _SC_INT_MIN
#define IPV6_RTHDR_STRICT 1
#define TCP_SAVED_SYN 28
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define EPOLLPRI EPOLLPRI
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __INT_LEAST32_WIDTH__ 32
#define __SI_ERRNO_THEN_CODE 1
#define va_start(v,l) __builtin_va_start(v,l)
#define EPROTOTYPE 91
#define AT_EACCESS 0x200
#define INTPTR_MIN (-9223372036854775807L-1)
#define __SWORD_TYPE long int
#define _PC_PRIO_IO _PC_PRIO_IO
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define SIGINT 2
#define RTLD_BINDING_MASK 0x3
#define IP_TOS 1
#define __SIZEOF_FLOAT__ 4
#define CLONE_NEWUSER 0x10000000
#define SO_GET_FILTER SO_ATTACH_FILTER
#define USE_BOOST_JMP 1
#define FIBER_EVENT_SELECT 2
#define INTMAX_WIDTH 64
#define _T_SIZE 
#define SIGIOT SIGABRT
#define UINT8_C(c) c
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define __va_arg_pack() __builtin_va_arg_pack ()
#define EWOULDBLOCK EAGAIN
#define DN_CREATE 0x00000004
#define S_IRWXG (S_IRWXU >> 3)
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define HAS_SELECT 
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define SO_TIMESTAMPING_NEW 65
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __GNUC_MINOR__ 3
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define __INT_FAST16_WIDTH__ 64
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define CPU_CLR_S(cpu,setsize,cpusetp) __CPU_CLR_S (cpu, setsize, cpusetp)
#define _POSIX_V7_ILP32_OFFBIG -1
#define TRY_AGAIN 2
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define ILL_PRVREG ILL_PRVREG
#define __LDBL_REDIR2_DECL(name) 
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define INTMAX_C(c) c ## L
#define RTLD_DEEPBIND 0x00008
#define __glibc_clang_prereq(maj,min) 0
#define ILL_PRVOPC ILL_PRVOPC
#define __SC_THREAD_STACK_MIN_VALUE 75
#define __nlink_t_defined 
#define TCPOPT_NOP 1
#define IP_DROP_MEMBERSHIP 36
#define _XOPEN_LIM_H 1
#define PF_RXRPC 33
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define EAGAIN 11
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define _STDINT_H 1
#define _RWLOCK_INTERNAL_H 
#define SEGV_ACCADI SEGV_ACCADI
#define __DBL_MAX_10_EXP__ 308
#define __FILE_defined 1
#define POLLRDNORM 0x040
#define UINT16_MAX (65535)
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_MINHOPCOUNT 73
#define _POSIX_HOST_NAME_MAX 255
#define TCP_REPAIR_WINDOW 29
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define S_ISUID __S_ISUID
#define _POSIX_TRACE_LOG -1
#define isascii_l(c,l) __isascii_l ((c), (l))
#define __INT16_C(c) c
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define __ARM_ARCH_ISA_A64 1
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define __U32_TYPE unsigned int
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define SIG_IGN ((__sighandler_t) 1)
#define EREMOTEIO 121
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define ENFILE 23
#define TCP_TIMESTAMP 24
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define TCP_THIN_LINEAR_TIMEOUTS 16
#define ELIBMAX 82
#define static_assert _Static_assert
#define __sigstack_defined 1
#define __PTRDIFF_TYPE__ long int
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define SPLICE_F_MORE 4
#define _ISOC2X_SOURCE 1
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define SOMAXCONN 4096
#define errno (*__errno_location ())
#define FASYNC O_ASYNC
#define EL2NSYNC 45
#define RLIMIT_FSIZE RLIMIT_FSIZE
#define __ino64_t_defined 
#define STATX_BLOCKS 0x00000400U
#define SOL_TIPC 271
#define STA_UNSYNC 0x0040
#define AF_ISDN PF_ISDN
#define __clockid_t_defined 1
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define SIGRTMIN (__libc_current_sigrtmin ())
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define _BITS_STAT_H 1
#define __size_t 
#define IPV6_MULTICAST_LOOP 19
#define _BITS_SOCKADDR_H 1
#define __ATOMIC_SEQ_CST 5
#define TCPOLEN_WINDOW 3
#define htons(x) __bswap_16 (x)
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define STATX_INO 0x00000100U
#define IPV6_2292HOPLIMIT 8
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define TCP_S_DATA_OUT (1 << 3)
#define ENOPKG 65
#define FIBER_DEFINE_INCLUDE_H 
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define X_OK 1
#define _USE_FAST_MACRO 1
#define F_SETFD 2
#define IPV6_LEAVE_ANYCAST 28
#define ITIMER_REAL ITIMER_REAL
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define __UINTPTR_TYPE__ long unsigned int
#define TH_URG 0x20
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define RWF_SYNC 0x00000004
#define CLD_KILLED CLD_KILLED
#define NI_IDN 32
#define _STATBUF_ST_RDEV 
#define SIGTERM 15
#define SPLICE_F_MOVE 1
#define SO_RCVTIMEO_NEW 66
#define __bitwise__ 
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define PRIO_USER PRIO_USER
#define SOL_AAL 265
#define SHUT_RD SHUT_RD
#define __linux__ 1
#define IPV6_PMTUDISC_DONT 0
#define __LDBL_MIN_10_EXP__ (-4931)
#define O_PATH __O_PATH
#define EMEDIUMTYPE 124
#define EKEYREVOKED 128
#define __useconds_t_defined 
#define F_SETFL 4
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define STATX_GID 0x00000010U
#define _SC_SPAWN _SC_SPAWN
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define __SI_BAND_TYPE long int
#define INET_ADDRSTRLEN 16
#define SO_LOCK_FILTER 44
#define __HAVE_DISTINCT_FLOAT64X 0
#define LOCK_UN 8
#define PF_DECnet 12
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define SIG_SETMASK 2
#define __SIZEOF_LONG_LONG__ 8
#define __USE_DYNAMIC_STACK_SIZE 1
#define AF_IPX PF_IPX
#define PF_CAN 29
#define CPU_ISSET_S(cpu,setsize,cpusetp) __CPU_ISSET_S (cpu, setsize, cpusetp)
#define IPV6_MULTICAST_ALL 29
#define __USE_ATFILE 1
#define EKEYREJECTED 129
#define POSIX_FADV_SEQUENTIAL 2
#define _POSIX_OPEN_MAX 20
#define TCP_FASTOPEN_NO_COOKIE 34
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define isgraph(c) __isctype((c), _ISgraph)
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define EAI_INPROGRESS -100
#define PRIO_MAX 20
#define __O_PATH 010000000
#define __FLT128_DECIMAL_DIG__ 36
#define PF_NETBEUI 13
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define UINT_LEAST8_MAX (255)
#define SEGV_ACCERR SEGV_ACCERR
#define ENOTUNIQ 76
#define __exctype(name) extern int name (int) __THROW
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define _SC_NZERO _SC_NZERO
#define _GETOPT_CORE_H 1
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define SIG_ATOMIC_MIN (-2147483647-1)
#define S_IROTH (S_IRGRP >> 3)
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define MOD_ESTERROR ADJ_ESTERROR
#define __POSIX2_THIS_VERSION 200809L
#define __WALL 0x40000000
#define __ldiv_t_defined 1
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define __FLT_MIN_10_EXP__ (-37)
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SOL_ALG 279
#define IP_PMTUDISC_INTERFACE 4
#define RTLD_LAZY 0x00001
#define _UNISTD_H 1
#define AT_EMPTY_PATH 0x1000
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _ASM_GENERIC_TYPES_H 
#define _POSIX_ARG_MAX 4096
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define IPV6_RTHDR 57
#define __ORDER_LITTLE_ENDIAN__ 1234
#define INT_LEAST16_MAX (32767)
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define ACL_WRITEABLE_CHECK 1
#define EOPNOTSUPP 95
#define _GNU_SOURCE 
#define SO_BUF_LOCK 72
#define _POSIX_SAVED_IDS 1
#define _BITS_CPU_SET_H 1
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define __P(args) args
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define F_SETOWN_EX __F_SETOWN_EX
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define PF_LOCAL 1
#define __S_ISGID 02000
#define _XOPEN_XCU_VERSION 4
#define __ATOMIC_ACQ_REL 4
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define __fsblkcnt_t_defined 
#define FPE_FLTUND FPE_FLTUND
#define XATTR_NAME_MAX 255
#define _POSIX2_LINE_MAX 2048
#define _STDLIB_H 1
#define IP_RECVERR_RFC4884 26
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
