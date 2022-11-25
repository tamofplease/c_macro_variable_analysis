#define __S_IFBLK 0060000
#define sa_sigaction __sigaction_handler.sa_sigaction
#define TCP_KEEPCNT 6
#define _BITS_SCHED_H 1
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define SYS_nanosleep __NR_nanosleep
#define SQLITE_MISUSE 21
#define SYS_statfs __NR_statfs
#define __SSP_STRONG__ 3
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define SYS_setns __NR_setns
#define EMULTIHOP 72
#define __NR_seccomp 277
#define AF_MAX PF_MAX
#define SYS_openat2 __NR_openat2
#define SYS_rt_sigpending __NR_rt_sigpending
#define _SC_PII _SC_PII
#define _EOPNOTSUPP -95
#define TCP_CONGESTION 13
#define __UINT_LEAST16_MAX__ 0xffff
#define _ETIME -62
#define SQLITE_FCNTL_SYNC 21
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define __FLT128_MAX_10_EXP__ 4932
#define SQLITE_CONSTRAINT_ROWID (SQLITE_CONSTRAINT |(10<<8))
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define SQLITE_PREPARE_NORMALIZE 0x02
#define atomic_is_lock_free(OBJ) __atomic_is_lock_free (sizeof (*(OBJ)), (OBJ))
#define SQLITE_WIN32_TEMP_DIRECTORY_TYPE 2
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define SQLITE_MUTEX_STATIC_VFS1 11
#define SQLITE_MUTEX_STATIC_VFS2 12
#define SQLITE_MUTEX_STATIC_VFS3 13
#define _REGX(n) union { dword_t e ##n ##x; word_t n ##x; struct { byte_t n ##l; byte_t n ##h; }; }
#define CALLS_H 
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define si_fd _sifields._sigpoll.si_fd
#define __NR_mkdirat 34
#define _T_WCHAR_ 
#define atomic_fetch_or(PTR,VAL) __atomic_fetch_or ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define SQLITE_TESTCTRL_SEEK_COUNT 30
#define stdout stdout
#define _IONBF 2
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define __NR_io_uring_enter 426
#define _ASM_GENERIC_IOCTL_H 
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define SYS_rt_sigtimedwait __NR_rt_sigtimedwait
#define TCP_CORK 3
#define si_arch _sifields._sigsys._arch
#define __S64_TYPE long int
#define SQLITE_VTAB_DIRECTONLY 3
#define SYS_sched_get_priority_min __NR_sched_get_priority_min
#define __SQUAD_TYPE long int
#define _EISCONN -106
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _BITS_SIGINFO_CONSTS_H 1
#define SYS_request_key __NR_request_key
#define SIGBUS 7
#define __GNU_LIBRARY__ 6
#define SOL_LLC 268
#define __NR_getpgid 155
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define RLIM_INFINITY_ ((rlim_t_) -1)
#define SQLITE_FCNTL_DATA_VERSION 35
#define SQLITE_IOCAP_ATOMIC32K 0x00000080
#define __CHAR_BIT__ 8
#define SO_DOMAIN 39
#define SYS_inotify_rm_watch __NR_inotify_rm_watch
#define __NR_timerfd_settime 86
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define EREMCHG 78
#define __NR_semop 193
#define SIGTTIN 21
#define __NR_swapoff 225
#define EACCES 13
#define DEBUG_debug DEBUG_all
#define SQLITE_GET_LOCKPROXYFILE SQLITE_FCNTL_GET_LOCKPROXYFILE
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define SYS_flock __NR_flock
#define PTRACE_SINGLESTEP_ 9
#define EDESTADDRREQ 89
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define si_pid _sifields._kill.si_pid
#define PIPE_BUF 4096
#define IP_TTL 2
#define SIGSTKSZ 16384
#define MISC_H 
#define __HAVE_FLOAT16 0
#define stderr stderr
#define SQLITE_TESTCTRL_FAULT_INSTALL 9
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define __NR_fdatasync 83
#define SOCK_RDM SOCK_RDM
#define __NR_ioprio_get 31
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define __INT32_C(c) c
#define __NR_setpriority 140
#define PF_DECnet 12
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define IP_MAX_MEMBERSHIPS 20
#define SYS_clock_getres __NR_clock_getres
#define SIGHUP_ 1
#define MS_READONLY_ (1 << 0)
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define SQLITE_CHECKPOINT_PASSIVE 0
#define EDQUOT 122
#define SQLITE_IOERR_BLOCKED (SQLITE_IOERR | (11<<8))
#define __NR_pidfd_send_signal 424
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define SQLITE_BUSY_RECOVERY (SQLITE_BUSY | (1<<8))
#define SYS_io_uring_register __NR_io_uring_register
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define SQLITE_CANTOPEN_SYMLINK (SQLITE_CANTOPEN | (6<<8))
#define MCAST_LEAVE_SOURCE_GROUP 47
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 0
#define IPV6_IPSEC_POLICY 34
#define _ENOPROTOOPT -92
#define __NR_accept 202
#define TCPI_OPT_TIMESTAMPS 1
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define __NR_fsopen 430
#define SYS_fsopen __NR_fsopen
#define SYS_chroot __NR_chroot
#define _ESHUTDOWN -108
#define IPV6_2292HOPOPTS 3
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define __NR_read 63
#define SQLITE_CREATE_VTABLE 29
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define SIGXCPU_ 24
#define _XOPEN_VERSION 700
#define _EUSERS -87
#define IP_FREEBIND 15
#define SCHED_RR 2
#define SYS_lgetxattr __NR_lgetxattr
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define _ESRCH -3
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define AF_IPX PF_IPX
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define __ASSERT_VOID_CAST (void)
#define IPV6_UNICAST_IF 76
#define SQLITE_FCNTL_TEMPFILENAME 16
#define __O_NOFOLLOW 0100000
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define SYS_setresgid __NR_setresgid
#define __NR_sendmmsg 269
#define O_TRUNC_ (1 << 9)
#define __sigval_t_defined 
#define SYS_fanotify_init __NR_fanotify_init
#define SIGPROF 27
#define _ENAMETOOLONG -36
#define __NR_timerfd_create 85
#define bool _Bool
#define __CFLOAT128 _Complex _Float128
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __SVE_ZREGS_OFFSET 0
#define SQLITE_CONFIG_SINGLETHREAD 1
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define SYS_semop __NR_semop
#define __DBL_MIN_10_EXP__ (-307)
#define __ARCH_WANT_SYS_CLONE3 
#define ENOTTY 25
#define TRACE__NOP(msg,...) use(__VA_ARGS__)
#define NUM_SIGS 64
#define SQLITE_CONSTRAINT 19
#define SO_ATTACH_REUSEPORT_CBPF 51
#define SQLITE_READONLY_RECOVERY (SQLITE_READONLY | (1<<8))
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define __NR_set_tid_address 96
#define SQLITE_CONSTRAINT_FUNCTION (SQLITE_CONSTRAINT | (4<<8))
#define _CS_V6_ENV _CS_V6_ENV
#define SQLITE_ALTER_TABLE 26
#define __u_char_defined 
#define SQLITE_EXTERN extern
#define UTIME_NOW ((1l << 30) - 1l)
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define SQLITE_READ 20
#define __FLT64X_HAS_INFINITY__ 1
#define SYS_inotify_add_watch __NR_inotify_add_watch
#define IPV6_HOPOPTS 54
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define __NR_copy_file_range 285
#define __ASM_SVE_CONTEXT_H 
#define _POSIX_TRACE_EVENT_FILTER -1
#define __INT_LEAST16_TYPE__ short int
#define SO_SECURITY_AUTHENTICATION 22
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define DEV_H 
#define _BITS_TYPES_LOCALE_T_H 1
#define MSG_WAITALL MSG_WAITALL
#define SQLITE3_TEXT 3
#define _ELIBEXEC -83
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define SQLITE_DBCONFIG_ENABLE_QPSG 1007
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define _XOPEN_XCU_VERSION 4
#define __O_NOATIME 01000000
#define __SI_SIGFAULT_ADDL 
#define ENOMEM 12
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SYS_TIME_H 1
#define AF_INET6_ PF_INET6_
#define rdtsc() ({ uint64_t tsc; __asm__ volatile("mrs %0, PMCCNTR_EL0" : "=r" (tsc)); tsc; })
#define SOL_TIPC 271
#define _BITS_SOCKADDR_H 1
#define _EOVERFLOW -75
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH _CS_PATH
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define DEBUG_strace DEBUG_all
#define _ERRNO_H 1
#define _XBS5_LP64_OFF64 1
#define __NR_mq_unlink 181
#define __USE_ATFILE 1
#define __stub_sigreturn 
#define TCP_REPAIR 19
#define _XBS5_LPBIG_OFFBIG -1
#define IN_CLASSB_NSHIFT 16
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define __always_inline __inline __attribute__ ((__always_inline__))
#define SQLITE_SCANSTAT_NVISIT 1
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define NFDBITS __NFDBITS
#define IOC_IN (_IOC_WRITE << _IOC_DIRSHIFT)
#define __NR_sched_getscheduler 120
#define _EDQUOT -122
#define __NR_fremovexattr 16
#define TCPI_OPT_ECN 8
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define S_IXOTH (S_IXGRP >> 3)
#define __NR_statx 291
#define SOL_IPV6 41
#define __O_CLOEXEC 02000000
#define O_CLOEXEC __O_CLOEXEC
#define IP_MTU 14
#define __ARM_FP 14
#define _EEXIST -17
#define AF_ROSE PF_ROSE
#define TIME_H 
#define SIGSTKFLT 16
#define SQLITE_NOTICE_RECOVER_WAL (SQLITE_NOTICE | (1<<8))
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define __fortify_function __extern_always_inline __attribute_artificial__
#define _str(x) #x
#define SYS_semctl __NR_semctl
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define SQLITE_FCNTL_SIZE_HINT 5
#define SOCK_DCCP SOCK_DCCP
#define NAME_MAX 255
#define _EAGAIN -11
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define __UINT_LEAST8_MAX__ 0xff
#define SQLITE_FCNTL_LOCKSTATE 1
#define IPV6_2292DSTOPTS 4
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define __NR_sysinfo 179
#define __ASM_GENERIC_BITS_PER_LONG 
#define _ENOPKG -65
#define SYS_epoll_ctl __NR_epoll_ctl
#define __NR_getrandom 278
#define TODO(msg,...) die("TODO: " msg, ##__VA_ARGS__)
#define __CHAR32_TYPE__ unsigned int
#define _POSIX_THREAD_CPUTIME 0
#define __linux 1
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define TH_RST 0x04
#define _ETXTBSY -26
#define SYS_fspick __NR_fspick
#define si_int _sifields._rt.si_sigval.sival_int
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define SYS_accept __NR_accept
#define SYS_clock_adjtime __NR_clock_adjtime
#define SYS_recvmmsg __NR_recvmmsg
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define _BITS_SS_FLAGS_H 1
#define SOCK_NONBLOCK_ 0x800
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define __SHRT_WIDTH__ 16
#define __SIZE_T 
#define _POSIX_PIPE_BUF 512
#define __S_ISVTX 01000
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define __NR_timerfd_gettime 87
#define SOL_TCP 6
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define PF_SNA 22
#define _ATFILE_SOURCE 1
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
#define SQLITE_DIRECTONLY 0x000080000
#define _SC_NETWORKING _SC_NETWORKING
#define F_EXLCK 4
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define MSG_FIN MSG_FIN
#define SO_NO_CHECK 11
#define SYS_ptrace __NR_ptrace
#define WUNTRACED 2
#define ERESTART 85
#define SIGTTOU_ 22
#define EISNAM 120
#define TCP_COOKIE_MAX 16
#define TCP_TX_DELAY 37
#define UINT16_C(c) c
#define BYTE_ORDER __BYTE_ORDER
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define ENOMSG 42
#define _PC_PRIO_IO _PC_PRIO_IO
#define __NR_mq_notify 184
#define EXIT_FAILURE 1
#define _IOC_NONE 0U
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define SYS_setpgid __NR_setpgid
#define SYS_setuid __NR_setuid
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define AF_FILE PF_FILE
#define __SCHAR_MAX__ 0x7f
#define __NR_semget 190
#define __SC_COMP(_nr,_sys,_comp) __SYSCALL(_nr, _sys)
#define _IOC_TYPEBITS 8
#define __NR_nfsservctl 42
#define __USE_KERNEL_IPV6_DEFS 0
#define SYS_timer_settime __NR_timer_settime
#define __KERNEL_STRICT_NAMES 
#define SQLITE_TESTCTRL_NEVER_CORRUPT 20
#define __INT64_C(c) c ## L
#define __NR_io_destroy 1
#define SA_SIGINFO 4
#define AC_F 0
#define _EPROTOTYPE -91
#define SQLITE_LOCK_EXCLUSIVE 4
#define AC_W 2
#define AC_X 1
#define TCP_REPAIR_OFF 0
#define __CHAR16_TYPE__ short unsigned int
#define __INT_FAST32_TYPE__ long int
#define __CFLOAT32 _Complex _Float32
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define SYS_clock_nanosleep __NR_clock_nanosleep
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define SYS_fchown __NR_fchown
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define SYS_fsmount __NR_fsmount
#define SQLITE_VTAB_INNOCUOUS 2
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define SQLITE_INDEX_CONSTRAINT_LIKE 65
#define SO_TIMESTAMP_OLD 29
#define _SC_2_UPE _SC_2_UPE
#define EADDRINUSE 98
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define __ATOMIC_CONSUME 1
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define _BITS_SIGINFO_ARCH_H 1
#define si_addr _sifields._sigfault.si_addr
#define SOL_TLS 282
#define ZF_FLAG (1 << 6)
#define __attribute_used__ __attribute__ ((__used__))
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define S_IFMT __S_IFMT
#define TCP_COOKIE_MIN 8
#define FIOSETOWN 0x8901
#define SQLITE_FCNTL_PDB 30
#define CLOCK_REALTIME 0
#define SO_LOCK_FILTER 44
#define _ASM_GENERIC_INT_LL64_H 
#define SO_DOMAIN_ 39
#define O_RDONLY_ 0
#define _SC_VERSION _SC_VERSION
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define IPPROTO_EGP IPPROTO_EGP
#define __USER_LABEL_PREFIX__ 
#define __MODE_T_TYPE __U32_TYPE
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define SYS_pidfd_open __NR_pidfd_open
#define SQLITE_MUTEX_STATIC_OPEN 4
#define _BITS_ENDIANNESS_H 1
#define __NR_restart_syscall 128
#define SCM_TIMESTAMPING_PKTINFO 58
#define __NR_process_vm_readv 270
#define __NR_getpeername 205
#define __GLIBC__ 2
#define _SC_POLL _SC_POLL
#define IP_ROUTER_ALERT 5
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define MSG_TRUNC_ 0x20
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define WCONTINUED 8
#define setjmp(env) _setjmp (env)
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define _IOC_TYPECHECK(t) (sizeof(t))
#define TCPOLEN_TIMESTAMP 10
#define FTS5_TOKEN_COLOCATED 0x0001
#define __LDBL_HAS_INFINITY__ 1
#define _EPFNOSUPPORT -96
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define F_GETLK F_GETLK64
#define __fsfilcnt_t_defined 
#define __NR_landlock_create_ruleset 444
#define __FP_FAST_FMAF32 1
#define AF_PHONET PF_PHONET
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define INET_ADDRSTRLEN 16
#define TCP_LINGER2 8
#define __NR_sched_get_priority_max 125
#define __NR_renameat 38
#define _BSD_SIZE_T_DEFINED_ 
#define _ELIBBAD -80
#define __FLT32_DIG__ 6
#define SQLITE_UTF16BE 3
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define __RLIM_T_MATCHES_RLIM64_T 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __NR_lsetxattr 6
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define SS_DISABLE SS_DISABLE
#define SO_TIMESTAMPING_OLD 37
#define ENOLINK 67
#define LOCK_NB_ 4
#define SIGCHLD_ 17
#define __FLT32_IS_IEC_60559__ 2
#define _IOC_SIZESHIFT (_IOC_TYPESHIFT+_IOC_TYPEBITS)
#define PF_LLC 26
#define SYS_vhangup __NR_vhangup
#define O_CREAT_ (1 << 6)
#define s6_addr16 __in6_u.__u6_addr16
#define ILL_COPROC ILL_COPROC
#define SYS_prctl __NR_prctl
#define SO_BROADCAST 6
#define __SVE_NUM_ZREGS 32
#define _EILSEQ -84
#define SYS_timer_delete __NR_timer_delete
#define __NR_mount 40
#define __SSIZE_T_TYPE __SWORD_TYPE
#define SYS_lookup_dcookie __NR_lookup_dcookie
#define __DEV_T_TYPE __UQUAD_TYPE
#define SQLITE_TRACE_STMT 0x01
#define _ESPIPE -29
#define SIGIO SIGPOLL
#define FD_H 
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __STDC_UTF_16__ 1
#define SQLITE_LIMIT_WORKER_THREADS 11
#define S_IFREG __S_IFREG
#define MMAP_ANONYMOUS 0x20
#define le32toh(x) __uint32_identity (x)
#define SQLITE_INTERRUPT 9
#define __GLIBC_USE_IEC_60559_BFP_EXT 0
#define __O_LARGEFILE 0
#define _POSIX_NAME_MAX 14
#define SCM_TXTIME SO_TXTIME
#define SQLITE_FULL 13
#define AT_SYMLINK_FOLLOW 0x400
#define st_ctime st_ctim.tv_sec
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define DT_SOCK DT_SOCK
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define __ARCH_WANT_TIME32_SYSCALLS 
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define FTS5_TOKENIZE_AUX 0x0008
#define __NR_clone 220
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define SQLITE_OPEN_NOFOLLOW 0x01000000
#define SQLITE_FCNTL_PERSIST_WAL 10
#define SQLITE_IOERR_FSTAT (SQLITE_IOERR | (7<<8))
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define _VA_LIST_DEFINED 
#define __FLT32X_HAS_INFINITY__ 1
#define FTS5_TOKENIZE_DOCUMENT 0x0004
#define s6_addr __in6_u.__u6_addr8
#define __INT32_MAX__ 0x7fffffff
#define __GLIBC_USE_DEPRECATED_GETS 0
#define _POSIX_V7_LPBIG_OFFBIG -1
#define IP_MTU_DISCOVER_ 10
#define __INT_WIDTH__ 32
#define __S_IFCHR 0020000
#define atomic_flag_test_and_set(PTR) __atomic_test_and_set ((PTR), __ATOMIC_SEQ_CST)
#define __SIZE_WIDTH__ 64
#define S_ISVTX __S_ISVTX
#define __STDC_IEC_559__ 1
#define SO_TYPE 3
#define __STDC_ISO_10646__ 201706L
#define __NR_semtimedop 192
#define __NR_syslog 116
#define _SC_NL_NMAX _SC_NL_NMAX
#define KERNEL_PTRACE_H 
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define __NR_remap_file_pages 234
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define SIGCLD SIGCHLD
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 0
#define SQLITE_TESTCTRL_IMPOSTER 25
#define LOCK_EX 2
#define _EADV -68
#define BYTES_ROUND_UP(bytes) (PAGE_ROUND_UP(bytes) << PAGE_BITS)
#define F_DUPFD 0
#define IP_RETOPTS_ 7
#define SQLITE_WARNING_AUTOINDEX (SQLITE_WARNING | (1<<8))
#define TCPOPT_MAXSEG 2
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define __NR_close 57
#define MAX_INPUT 255
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define __FLT128_IS_IEC_60559__ 2
#define ESTALE 116
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __SI_MAX_SIZE 128
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define SYS_pidfd_getfd __NR_pidfd_getfd
#define SEGV_ACCADI SEGV_ACCADI
#define IPV6_FREEBIND 78
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define _POSIX_LOGIN_NAME_MAX 9
#define SYS_process_madvise __NR_process_madvise
#define PF_INET6_ 10
#define SQLITE_OPEN_DELETEONCLOSE 0x00000008
#define FPSIMD_MAGIC 0x46508001
#define _XBS5_ILP32_OFF32 -1
#define __ASM_SIGCONTEXT_H 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define DELAYTIMER_MAX 2147483647
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define IPV6_DSTOPTS 59
#define __NR_sendfile __NR3264_sendfile
#define __NR_wait4 260
#define __NR_ftruncate __NR3264_ftruncate
#define SYS_copy_file_range __NR_copy_file_range
#define UNAME_LENGTH 65
#define SOL_ICMPV6 58
#define __attribute_const__ __attribute__ ((__const__))
#define SQLITE_INDEX_CONSTRAINT_EQ 2
#define SQLITE_FCNTL_SIZE_LIMIT 36
#define SQLITE_READONLY_DBMOVED (SQLITE_READONLY | (4<<8))
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define make_attr(_type,thing) ((struct attr) {.type = attr_ ##_type, ._type = thing})
#define SQLITE_LIMIT_SQL_LENGTH 1
#define SQLITE_CONFIG_SERIALIZED 3
#define SYS_mount __NR_mount
#define AF_BLUETOOTH PF_BLUETOOTH
#define L_tmpnam 20
#define _DIRENT_HAVE_D_RECLEN 
#define ___int_wchar_t_h 
#define AC_R 4
#define _EREMOTEIO -121
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define __GNUC__ 11
#define SQLITE_INDEX_CONSTRAINT_GE 32
#define SQLITE_DBCONFIG_ENABLE_FTS3_TOKENIZER 1004
#define SQLITE_CONSTRAINT_TRIGGER (SQLITE_CONSTRAINT | (7<<8))
#define SQLITE_IOCAP_ATOMIC1K 0x00000004
#define SQLITE_INDEX_CONSTRAINT_GT 4
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define __NR_memfd_secret 447
#define SYS_keyctl __NR_keyctl
#define SYS_memfd_secret __NR_memfd_secret
#define SYS_setpriority __NR_setpriority
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define __OFF64_T_TYPE __SQUAD_TYPE
#define SQLITE_FCNTL_CHUNK_SIZE 6
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define SQLITE_IOCAP_ATOMIC2K 0x00000008
#define PF_ISDN 34
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define POSIX_FADV_WILLNEED 3
#define AF_NFC PF_NFC
#define SQLITE_INDEX_CONSTRAINT_IS 72
#define LOCK_NB 4
#define __daddr_t_defined 
#define __NR_unlinkat 35
#define MSG_CTRUNC MSG_CTRUNC
#define SYS_clone __NR_clone
#define __NR_pivot_root 41
#define SQLITE_LOCK_SHARED 1
#define SYS_getpriority __NR_getpriority
#define SQLITE_IOCAP_ATOMIC4K 0x00000010
#define SQLITE_CORRUPT_INDEX (SQLITE_CORRUPT | (3<<8))
#define __NR_socketpair 199
#define MSG_PROXY MSG_PROXY
#define SO_DETACH_REUSEPORT_BPF 68
#define __NR_lremovexattr 15
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define SQLITE_SYNC_NORMAL 0x00002
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define sa_handler __sigaction_handler.sa_handler
#define IPV6_RECVHOPOPTS 53
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define SQLITE_STATUS_PARSER_STACK 6
#define STDERR_FILENO 2
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define SYS_readahead __NR_readahead
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define DEV_BLOCK 0
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define __FLT64_MAX_10_EXP__ 308
#define SQLITE_INDEX_CONSTRAINT_LE 8
#define SQLITE_INDEX_CONSTRAINT_LT 16
#define __GLIBC_USE_LIB_EXT2 0
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define SYS_mq_open __NR_mq_open
#define WTERMSIG(status) __WTERMSIG (status)
#define _EHOSTDOWN -112
#define GRND_INSECURE 0x0004
#define __DBL_IS_IEC_60559__ 2
#define _POSIX_REGEXP 1
#define __FLT32_HAS_INFINITY__ 1
#define EXIT_SUCCESS 0
#define __NR_times 153
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define SQLITE_IOCAP_ATOMIC8K 0x00000020
#define __NR_clock_adjtime 266
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define SQLITE_CREATE_VIEW 8
#define SYS_close __NR_close
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define IP_MTU_DISCOVER 10
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#define _DIRENT_HAVE_D_TYPE 
#define ITIMER_PROF ITIMER_PROF
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define user_put(addr,var) user_write(addr, &(var), sizeof(var))
#define SYS_statx __NR_statx
#define SQLITE_IGNORE 2
#define AF_RXRPC PF_RXRPC
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _SS_SIZE 128
#define __NR_setrlimit 164
#define __NR_io_setup 0
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define LOCK_UN 8
#define SQLITE_FCNTL_CKPT_START 39
#define SYS_clock_gettime __NR_clock_gettime
#define SQLITE_SHM_UNLOCK 1
#define SYS_setgid __NR_setgid
#define __DADDR_T_TYPE __S32_TYPE
#define SQLITE_IOERR_NOMEM (SQLITE_IOERR | (12<<8))
#define SYS_pwritev2 __NR_pwritev2
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define SQLITE_DONE 101
#define fallthrough __attribute__((fallthrough))
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define __FD_SETSIZE 1024
#define SQLITE_SCHEMA 17
#define SQLITE_CONFIG_MMAP_SIZE 22
#define SQLITE_PRAGMA 19
#define FLOAT80_H 
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define SQLITE_IOERR_GETTEMPPATH (SQLITE_IOERR | (25<<8))
#define SQLITE_CONFIG_MEMSTATUS 9
#define __FLT64_HAS_DENORM__ 1
#define SI_USER SI_USER
#define FS_H 
#define EBADMSG 74
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __LDBL_HAS_DENORM__ 1
#define SQLITE_CHECKPOINT_RESTART 2
#define SQLITE_READONLY_DIRECTORY (SQLITE_READONLY | (6<<8))
#define __S_IFREG 0100000
#define AT_SYMLINK_NOFOLLOW_ 0x100
#define __NR_statfs __NR3264_statfs
#define must_check __attribute__((warn_unused_result))
#define SIGABRT 6
#define SYS_mbind __NR_mbind
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define POSIX_FADV_NORMAL 0
#define _IOC_SIZE(nr) (((nr) >> _IOC_SIZESHIFT) & _IOC_SIZEMASK)
#define S_IFCHR __S_IFCHR
#define __dev_t_defined 
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define SEGV_MAPERR_ 1
#define SQLITE_BLOB 4
#define _SC_IPV6 _SC_IPV6
#define __cleanup_fct_attribute 
#define SYS_get_mempolicy __NR_get_mempolicy
#define SQLITE_READONLY_CANTINIT (SQLITE_READONLY | (5<<8))
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define SO_DONTROUTE 5
#define __DBL_MAX_EXP__ 1024
#define RLIMIT_FSIZE_ 1
#define SYS_setsockopt __NR_setsockopt
#define __WCHAR_WIDTH__ 32
#define SI_KERNEL_ 128
#define SO_PEERNAME 28
#define _BITS_WCHAR_H 1
#define IP_RECVERR 11
#define GRND_RANDOM 0x0002
#define SYS_nfsservctl __NR_nfsservctl
#define __NR_signalfd4 74
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define SYS_getpgid __NR_getpgid
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _VA_LIST_ 
#define __NR_rt_sigtimedwait 137
#define SYS_sched_setattr __NR_sched_setattr
#define ETOOMANYREFS 109
#define P_EXEC (1 << 2)
#define _POSIX_TZNAME_MAX 6
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define __itimerspec_defined 1
#define _POSIX_SSIZE_MAX 32767
#define MSG_CTRUNC_ 0x8
#define SQLITE_FCNTL_PRAGMA 14
#define MCAST_INCLUDE 1
#define SQLITE_LOCKED_VTAB (SQLITE_LOCKED | (2<<8))
#define SYS_sched_getaffinity __NR_sched_getaffinity
#define _POSIX_RE_DUP_MAX 255
#define _POSIX_MAX_CANON 255
#define SQLITE_CANTOPEN_NOTEMPDIR (SQLITE_CANTOPEN | (1<<8))
#define IPV6_UNICAST_HOPS 16
#define RESOURCE_H 
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define __NR_dup 23
#define __NR_process_mrelease 448
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define PF_PHONET 35
#define __USECONDS_T_TYPE __U32_TYPE
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define SQLITE_INDEX_CONSTRAINT_ISNOTNULL 70
#define SYS_clone3 __NR_clone3
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define FD_CLOEXEC 1
#define _LINUX_STDDEF_H 
#define _STDNORETURN_H 
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define _STDARG_H 
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define AF_AX25 PF_AX25
#define _PC_VDISABLE _PC_VDISABLE
#define LEAK_DEBUG 0
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define SO_COOKIE 57
#define _SC_BARRIERS _SC_BARRIERS
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define _glue(a,b) a ##b
#define st_atime st_atim.tv_sec
#define RLIMIT_MSGQUEUE_ 12
#define __stub___compat_uselib 
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define _POSIX_CPUTIME 0
#define _EAFNOSUPPORT -97
#define SYS_rt_tgsigqueueinfo __NR_rt_tgsigqueueinfo
#define SO_PEERSEC 31
#define si_stime _sifields._sigchld.si_stime
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define SYS_getresgid __NR_getresgid
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define SQLITE_IOERR_SHMSIZE (SQLITE_IOERR | (19<<8))
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define SIGILL_ 4
#define __SIZEOF_WINT_T__ 4
#define RLIMIT_DATA_ 2
#define list_first_entry(list,type,member) list_entry((list)->next, type, member)
#define SYS_symlinkat __NR_symlinkat
#define ENOTNAM 118
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define __U16_TYPE unsigned short int
#define __NR_munmap 215
#define CLD_EXITED CLD_EXITED
#define SYS_pkey_mprotect __NR_pkey_mprotect
#define _STDIO_H 1
#define SIGUSR1_ 10
#define TCP_CC_INFO 26
#define _EDOM -33
#define UINTPTR_MAX (18446744073709551615UL)
#define SQLITE_FCNTL_FILE_POINTER 7
#define SIGUSR2_ 12
#define SYS_rt_sigqueueinfo __NR_rt_sigqueueinfo
#define TRACE_memory TRACE__NOP
#define __ASM_GENERIC_POSIX_TYPES_H 
#define PTRACE_POKEDATA_ 5
#define SQLITE_SOURCE_ID "2022-01-06 13:25:41 872ba256cbf61d9290b571c0e6d82a20c224ca3ad82971edc46b29818d5dalt1"
#define SYS_landlock_restrict_self __NR_landlock_restrict_self
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define SYS_fchownat __NR_fchownat
#define __FLT_MIN_EXP__ (-125)
#define SYS_getcwd __NR_getcwd
#define WEXITED 4
#define SQLITE_DBCONFIG_DQS_DML 1013
#define ATOMIC_VAR_INIT(VALUE) (VALUE)
#define F_GETOWN __F_GETOWN
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define _IOC_WRITE 1U
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define __NR_chroot 51
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define __NR_lgetxattr 9
#define TCP_FASTOPEN_CONNECT 30
#define SQLITE_STATUS_MEMORY_USED 0
#define __NR_msgget 186
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define IPV6_RECVRTHDR 56
#define alloca(size) __builtin_alloca (size)
#define IP_MULTICAST_ALL 49
#define SQLITE_OPEN_MEMORY 0x00000080
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define __NR_futex 98
#define PF_IRDA 23
#define EKEYREJECTED 129
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define _DIRENT_HAVE_D_OFF 
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define __NR_migrate_pages 238
#define MCAST_LEAVE_GROUP 45
#define FASYNC O_ASYNC
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define __NR_getresgid 150
#define IPV6_RECVHOPLIMIT 51
#define __NR_faccessat2 439
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define _NSIG (__SIGRTMAX + 1)
#define __ARM_FP16_ARGS 1
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define SYS_eventfd2 __NR_eventfd2
#define SQLITE_MUTEX_STATIC_APP3 10
#define SYS_swapoff __NR_swapoff
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define IPV6_RECVTCLASS 66
#define _BITS_SIGNUM_ARCH_H 1
#define __INT_LEAST32_MAX__ 0x7fffffff
#define O_RSYNC O_SYNC
#define WINT_MIN (0u)
#define SQLITE_CONFIG_STMTJRNL_SPILL 26
#define __key_t_defined 
#define SQLITE_CONSTRAINT_VTAB (SQLITE_CONSTRAINT | (9<<8))
#define __NR_getsockname 204
#define SQLITE_CANTOPEN_FULLPATH (SQLITE_CANTOPEN | (3<<8))
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define TH_SYN 0x02
#define __unix__ 1
#define __FDS_BITS(set) ((set)->__fds_bits)
#define IPV6_MTU 24
#define SO_RCVLOWAT 18
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define IPPROTO_MTP IPPROTO_MTP
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define TCP_COOKIE_TRANSACTIONS 15
#define _XOPEN_LEGACY 1
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x), 0)
#define SQLITE_IOERR_CONVPATH (SQLITE_IOERR | (26<<8))
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define SQLITE_TESTCTRL_PRNG_SAVE 5
#define __FLT_EVAL_METHOD_C99__ 0
#define _ENOTBLK -15
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SYS_ioprio_get __NR_ioprio_get
#define CLOCK_REALTIME_ALARM 8
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define SQLITE_FCNTL_COMMIT_PHASETWO 22
#define __NR_getcpu 168
#define __FLT64_MIN_EXP__ (-1021)
#define __NR_sched_getaffinity 123
#define IPV6_RECVERR 25
#define SYS_getsid __NR_getsid
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PF_MAX 46
#define __NR_pipe2 59
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define SYS_epoll_pwait2 __NR_epoll_pwait2
#define FPE_INTDIV FPE_INTDIV
#define __NR_getsid 156
#define IP_RECVTOS 13
#define __NR_tee 77
#define SOL_DECNET 261
#define SQLITE_FCNTL_ROLLBACK_ATOMIC_WRITE 33
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define SYS_io_cancel __NR_io_cancel
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define _IOR(type,nr,size) _IOC(_IOC_READ,(type),(nr),(_IOC_TYPECHECK(size)))
#define __FLT16_MIN_10_EXP__ (-4)
#define IP_TOS 1
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define EIDRM 43
#define PF_ROSE 11
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define SQLITE_TESTCTRL_TUNE 32
#define __NR_mmap __NR3264_mmap
#define _IOC(dir,type,nr,size) (((dir) << _IOC_DIRSHIFT) | ((type) << _IOC_TYPESHIFT) | ((nr) << _IOC_NRSHIFT) | ((size) << _IOC_SIZESHIFT))
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define _POSIX_THREADS 200809L
#define _PC_MAX_CANON _PC_MAX_CANON
#define PF_INET6 10
#define __USE_POSIX2 1
#define IP_TRANSPARENT 19
#define PF_INET_ 2
#define GRND_NONBLOCK 0x0001
#define IP_RECVTTL 12
#define PF_SECURITY 14
#define SYS_faccessat2 __NR_faccessat2
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define __NR_getcwd 17
#define RNDADDENTROPY _IOW( 'R', 0x03, int [2] )
#define TCP_ZEROCOPY_RECEIVE 35
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define SYS_io_pgetevents __NR_io_pgetevents
#define __NR3264_sendfile 71
#define _POSIX_V7_ILP32_OFF32 -1
#define SIGTTIN_ 21
#define SYS_io_submit __NR_io_submit
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define FIONREAD_ 0x541b
#define __siginfo_t_defined 1
#define SQLITE_AUTH 23
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define __NR_rt_sigprocmask 135
#define IPV6_AUTOFLOWLABEL 70
#define SIGEV_THREAD SIGEV_THREAD
#define IPV6_2292PKTINFO 2
#define SYS_futex __NR_futex
#define AF_IUCV PF_IUCV
#define SO_PROTOCOL_ 38
#define SYS_brk __NR_brk
#define SYS_sched_getattr __NR_sched_getattr
#define __VERSION__ "11.3.0"
#define _EMULTIHOP -72
#define SYS_setfsuid __NR_setfsuid
#define __NR3264_fstatat 79
#define __NR_fspick 433
#define IP_PKTINFO 8
#define __UINT64_C(c) c ## UL
#define _SYS_CDEFS_H 1
#define SYS_chdir __NR_chdir
#define ILL_ILLTRP ILL_ILLTRP
#define TCP_ULP 31
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define SQLITE_LIMIT_EXPR_DEPTH 3
#define SQLITE_OPEN_MAIN_JOURNAL 0x00000800
#define TASK_H 
#define s6_addr32 __in6_u.__u6_addr32
#define SQLITE_MUTEX_STATIC_MEM2 4
#define ILL_BADSTK ILL_BADSTK
#define EBFONT 59
#define _POSIX_VERSION 200809L
#define TCP_MAX_WINSHIFT 14
#define _STDC_PREDEF_H 1
#define TCP_REPAIR_OFF_NO_WP -1
#define RTSIG_MAX 32
#define TCP_COOKIE_OUT_NEVER (1 << 1)
#define SQLITE_OPEN_EXRESCODE 0x02000000
#define __NR_sched_yield 124
#define IP_RECVTTL_ 12
#define __INT_WCHAR_T_H 
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define sint(size) glue3(int,size,_t)
#define SYS_getsockopt __NR_getsockopt
#define __O_PATH 010000000
#define SIGINT_ 2
#define htobe64(x) __bswap_64 (x)
#define SS_ONSTACK_ 1
#define SQLITE_LOCK_NONE 0
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define __NR_munlock 229
#define __bitwise __bitwise__
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define ENOTSOCK 88
#define __ARM_FEATURE_FMA 1
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define O_RDWR 02
#define SYS_pipe2 __NR_pipe2
#define _SYS_SOCKET_H 1
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _T_PTRDIFF_ 
#define FPE_FLTRES FPE_FLTRES
#define SYS_sched_setscheduler __NR_sched_setscheduler
#define MSG_CONFIRM MSG_CONFIRM
#define __NR3264_fstatfs 44
#define PF_FILE PF_LOCAL
#define O_DIRECTORY_ (1 << 16)
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define __FLT128_MAX_EXP__ 16384
#define SQLITE_IOERR_UNLOCK (SQLITE_IOERR | (8<<8))
#define SOCKADDR_DATA_MAX 108
#define DEV_CHAR 1
#define __NR_setuid 146
#define SQLITE_INDEX_SCAN_UNIQUE 1
#define SIGPOLL 29
#define SOL_NFC 280
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define atomic_store(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define SQLITE_DBCONFIG_TRUSTED_SCHEMA 1017
#define SO_LINGER_ 13
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define __FLT32_MANT_DIG__ 24
#define SVE_VQ_MAX __SVE_VQ_MAX
#define SIGINT 2
#define _ECHILD -10
#define SQLITE_DROP_TRIGGER 16
#define __STDC_IEC_60559_BFP__ 201404L
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define __S_IFDIR 0040000
#define SO_KEEPALIVE_ 9
#define __SIZE_T__ 
#define SYS_acct __NR_acct
#define SYS_sysinfo __NR_sysinfo
#define __stub_gtty 
#define si_value _sifields._rt.si_sigval
#define __NR_fchown 55
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define O_DIRECTORY __O_DIRECTORY
#define IOCSIZE_MASK (_IOC_SIZEMASK << _IOC_SIZESHIFT)
#define IP_PASSSEC 18
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define __NR_vmsplice 75
#define si_utime _sifields._sigchld.si_utime
#define MSG_BATCH MSG_BATCH
#define SYS_sched_setparam __NR_sched_setparam
#define TCP_CONGESTION_ 13
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define SQLITE_CONFIG_MALLOC 4
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _IOW(type,nr,size) _IOC(_IOC_WRITE,(type),(nr),(_IOC_TYPECHECK(size)))
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define SQLITE_VERSION_NUMBER 3037002
#define __NR_sched_setattr 274
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define SQLITE_CONFIG_PAGECACHE 7
#define __wur 
#define __blkcnt_t_defined 
#define __FLT16_DIG__ 3
#define O_RDWR_ (1 << 1)
#define ELOOP 40
#define __NR_process_madvise 440
#define __FLT128_HAS_DENORM__ 1
#define SIG_UNBLOCK 1
#define SQLITE_CONSTRAINT_FOREIGNKEY (SQLITE_CONSTRAINT | (3<<8))
#define _POSIX_RTSIG_MAX 8
#define PTRACE_GETFPREGS_ 14
#define SYS_timerfd_create __NR_timerfd_create
#define SQLITE_INTEGER 1
#define __F_GETSIG 11
#define SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE 1006
#define IN_CLASSB_MAX 65536
#define __ORDER_PDP_ENDIAN__ 3412
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define SQLITE_DBSTATUS_DEFERRED_FKS 10
#define _NETINET_TCP_H 1
#define EL2HLT 51
#define __ARM_64BIT_STATE 1
#define SQLITE_FCNTL_TRACE 19
#define SVE_VQ_MIN __SVE_VQ_MIN
#define __NR_sendmsg 211
#define MS_NOEXEC_ (1 << 3)
#define __socklen_t_defined 
#define SI_TIMER_ -2
#define _UNISTD_H 1
#define PF_ROUTE PF_NETLINK
#define SYS_shmctl __NR_shmctl
#define __have_pthread_attr_t 1
#define SQLITE_TOOBIG 18
#define SYS_msgsnd __NR_msgsnd
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define IPV6_PMTUDISC_PROBE 3
#define SQLITE_IOERR_SHMMAP (SQLITE_IOERR | (21<<8))
#define IPV6_HOPLIMIT 52
#define __NR_readlinkat 78
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define __INT_FAST8_MAX__ 0x7f
#define SO_ERROR_ 4
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define SI_TKILL_ -6
#define IPPROTO_UDP IPPROTO_UDP
#define RAND_MAX 2147483647
#define SYS_getgroups __NR_getgroups
#define SQLITE_IOCAP_ATOMIC512 0x00000002
#define SS_ONSTACK SS_ONSTACK
#define ECANCELED 125
#define _IOC_DIRBITS 2
#define __NR_mq_open 180
#define F_SETLK F_SETLK64
#define _SC_PIPE _SC_PIPE
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define __INT16_MAX__ 0x7fff
#define __THROWNL __attribute__ ((__nothrow__))
#define _BSD_SIZE_T_ 
#define __SIZE_TYPE__ long unsigned int
#define SYS_io_destroy __NR_io_destroy
#define SYS_pwritev __NR_pwritev
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define AF_KEY PF_KEY
#define __FLT_IS_IEC_60559__ 2
#define SYS_bind __NR_bind
#define SQLITE_TRANSIENT ((sqlite3_destructor_type)-1)
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define UTIL_TIMER_H 
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define FPE_CONDTRAP FPE_CONDTRAP
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define _SQLITE3RTREE_H_ 
#define AF_INET PF_INET
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define TCPI_OPT_SACK 2
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define SQLITE_SCANSTAT_SELECTID 5
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define SOL_NETBEUI 267
#define SYS_dup3 __NR_dup3
#define trylock(lock) trylock(lock, __FILE__, __LINE__)
#define __NR_umount2 39
#define SYS_timer_create __NR_timer_create
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define SQLITE_FCNTL_WIN32_GET_HANDLE 29
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define __ARCH_WANT_SET_GET_RLIMIT 
#define SQLITE_TRACE_CLOSE 0x08
#define CLOCK_THREAD_CPUTIME_ID 3
#define IPV6_PMTUDISC_DO 2
#define IPV6_PKTINFO 50
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define __F_GETOWN_EX 16
#define SYS_mincore __NR_mincore
#define SYS_settimeofday __NR_settimeofday
#define _EPIPE -32
#define SIOCGSTAMP_OLD 0x8906
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define TCP_THIN_DUPACK 17
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define _SYS_TYPES_H 1
#define PTRACE_CONT_ 7
#define SO_RXQ_OVFL 40
#define SQLITE_TESTCTRL_INTERNAL_FUNCTIONS 17
#define SOL_IRDA 266
#define __FLT32X_MIN_10_EXP__ (-307)
#define __ARM_ARCH_PROFILE 65
#define SQLITE_ERROR_SNAPSHOT (SQLITE_ERROR | (3<<8))
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define O_SYNC 04010000
#define AF_SECURITY PF_SECURITY
#define minor(dev) gnu_dev_minor (dev)
#define _POSIX_C_SOURCE 200809L
#define IP_MULTICAST_IF 32
#define PF_ALG 38
#define PTHREAD_STACK_MIN 131072
#define SQLITE_DROP_VIEW 17
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_LEAVE_GROUP 21
#define __NR_sched_rr_get_interval 127
#define SQLITE_DBCONFIG_DEFENSIVE 1010
#define SEGV_ADIDERR SEGV_ADIDERR
#define SQLITE_CONFIG_MEMDB_MAXSIZE 29
#define SQLITE_CREATE_INDEX 1
#define ENAVAIL 119
#define SQLITE_DETERMINISTIC 0x000000800
#define SO_SNDBUFFORCE 32
#define SYS_socket __NR_socket
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define SYS_kexec_file_load __NR_kexec_file_load
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define EMU_H 
#define AF_OPS (1 << 3)
#define SIGCONT 18
#define _PC_NAME_MAX _PC_NAME_MAX
#define SQLITE_CDECL 
#define __blksize_t_defined 
#define atomic_init(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_RELAXED)
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define ZF (cpu->zf_res ? cpu->res == 0 : cpu->zf)
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define IOC_OUT (_IOC_READ << _IOC_DIRSHIFT)
#define __NR_bpf 280
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define SYS_fcntl __NR_fcntl
#define _LFS64_LARGEFILE 1
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define SYS_sched_setaffinity __NR_sched_setaffinity
#define __GLIBC_USE_ISOC2X 0
#define SQLITE_ABORT_ROLLBACK (SQLITE_ABORT | (2<<8))
#define use(...) __use(0, ##__VA_ARGS__)
#define _LFS64_ASYNCHRONOUS_IO 1
#define _ANSI_STDDEF_H 
#define __va_arg_pack() __builtin_va_arg_pack ()
#define IP_PMTUDISC_WANT 1
#define IP_XFRM_POLICY 17
#define PARTLY_WITHIN 1
#define __iovec_defined 1
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define CMSG_NEXT_(cmsg) ((uint8_t *)(cmsg) + CMSG_LEN_(cmsg))
#define SQLITE_IOERR_CORRUPTFS (SQLITE_IOERR | (33<<8))
#define IN_CLASSA_MAX 128
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define SYS_tgkill __NR_tgkill
#define SYS_sendmmsg __NR_sendmmsg
#define SYS_bpf __NR_bpf
#define ESR_MAGIC 0x45535201
#define IPV6_RECVPATHMTU 60
#define SQLITE_CORRUPT_VTAB (SQLITE_CORRUPT | (1<<8))
#define SO_DETACH_FILTER 27
#define SQLITE_READONLY 8
#define INTPTR_MIN (-9223372036854775807L-1)
#define INT8_C(c) c
#define SQLITE_ERROR_MISSING_COLLSEQ (SQLITE_ERROR | (1<<8))
#define SO_REUSEADDR_ 2
#define ENOMEDIUM 123
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define EBUSY 16
#define __UWORD_TYPE unsigned long int
#define __NR_mount_setattr 442
#define _EISDIR -21
#define F80_INF ((float80) {.signif = 0x8000000000000000, .exp = 0x7fff, .sign = 0})
#define O_NDELAY O_NONBLOCK
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define RNDZAPENTCNT _IO( 'R', 0x04 )
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __FLT64_IS_IEC_60559__ 2
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __AARCH64EL__ 1
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define SYS_recvmsg __NR_recvmsg
#define SQLITE_TESTCTRL_OPTIMIZATIONS 15
#define SQLITE_TESTCTRL_TRACEFLAGS 31
#define SQLITE_SET_LOCKPROXYFILE SQLITE_FCNTL_SET_LOCKPROXYFILE
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __timer_t_defined 1
#define MSG_OOB MSG_OOB
#define TCP_CM_INQ TCP_INQ
#define __WCLONE 0x80000000
#define SYS_read __NR_read
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define SQLITE_CONFIG_SCRATCH 6
#define SYS_semget __NR_semget
#define major(dev) gnu_dev_major (dev)
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define SOCK_CLOEXEC_ 0x80000
#define __NR_fchmodat 53
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define SIGSYS 31
#define SQLITE_CALLBACK 
#define RLIMIT_RTTIME_ 15
#define SO_BSDCOMPAT 14
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define IPV6_RTHDRDSTOPTS 55
#define _STDATOMIC_H 
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define INT32_C(c) c
#define _____fpos64_t_defined 1
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define __NR_set_mempolicy 237
#define __NR_sched_setaffinity 122
#define MSG_DONTWAIT_ 0x40
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __WCHAR_T__ 
#define ELIBACC 79
#define _EREMOTE -66
#define __glibc_objsize0(__o) __bos0 (__o)
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __ASSERT_FUNCTION __extension__ __PRETTY_FUNCTION__
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define _POSIX_TIMERS 200809L
#define __NR3264_fcntl 25
#define __NR_exit 93
#define SYS_sync __NR_sync
#define IPV6_JOIN_ANYCAST 27
#define MS_SILENT_ (1 << 15)
#define L_INCR SEEK_CUR
#define MCAST_UNBLOCK_SOURCE 44
#define SOCK_RAW_ 3
#define IP_HDRINCL 3
#define _BITS_PTHREADTYPES_COMMON_H 1
#define IPV6_TCLASS 67
#define __S_IFMT 0170000
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define __UINT_FAST16_TYPE__ long unsigned int
#define _LINUX_IOCTL_H 
#define SQLITE_IOERR_CLOSE (SQLITE_IOERR | (16<<8))
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define _POSIX_RAW_SOCKETS 200809L
#define __HAVE_DISTINCT_FLOAT128 0
#define UTIL_SYNC_H 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __ss_aligntype unsigned long int
#define SQLITE_TESTCTRL_PARSER_COVERAGE 26
#define __NR_setgroups 159
#define SIGEV_NONE SIGEV_NONE
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define __NR_keyctl 219
#define SI_MESGQ SI_MESGQ
#define __F_SETOWN 8
#define SYS_getpeername __NR_getpeername
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define __BLKSIZE_T_TYPE __S32_TYPE
#define PF_ECONET 19
#define _EXDEV -18
#define __INT_LEAST16_MAX__ 0x7fff
#define AF_MPLS PF_MPLS
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define __NR_io_getevents 4
#define SYS_restart_syscall __NR_restart_syscall
#define EDEADLK 35
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __NR_move_pages 239
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define PTRACE_TRACEME_ 0
#define __NR_setgid 144
#define TRACE_(chan,msg,...) glue(TRACE_, chan)(msg, ##__VA_ARGS__)
#define SO_TIMESTAMPING_NEW 65
#define ENGINE_JIT 1
#define __SIG_ATOMIC_WIDTH__ 32
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define htole16(x) __uint16_identity (x)
#define SIGCHLD 17
#define __NR_close_range 436
#define SIGSEGV_ 11
#define MAXNAMLEN NAME_MAX
#define __INT16_TYPE__ short int
#define __NR_utimensat 88
#define FULLY_WITHIN 2
#define SQLITE_CONFIG_LOG 16
#define SEGV_BNDERR SEGV_BNDERR
#define SYS_getitimer __NR_getitimer
#define SYS_timerfd_settime __NR_timerfd_settime
#define DT_UNKNOWN DT_UNKNOWN
#define TH_FIN 0x01
#define SYS_setreuid __NR_setreuid
#define htole32(x) __uint32_identity (x)
#define TCP_MAXSEG 2
#define DEFAULT_CHANNEL verbose
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define F_WRLCK 1
#define SQLITE_IOERR_COMMIT_ATOMIC (SQLITE_IOERR | (30<<8))
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define SQLITE_CONFIG_PMASZ 25
#define SQLITE_EXPERIMENTAL 
#define linux 1
#define SOL_DCCP 269
#define BYTES_ROUND_DOWN(bytes) (PAGE(bytes) << PAGE_BITS)
#define SA_NOCLDSTOP 1
#define SYS_pivot_root __NR_pivot_root
#define SIGTERM_ 15
#define SYS_gettimeofday __NR_gettimeofday
#define ____FILE_defined 1
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define ILL_PRVREG ILL_PRVREG
#define PDP_ENDIAN __PDP_ENDIAN
#define __NR_mknodat 33
#define htole64(x) __uint64_identity (x)
#define SQLITE_INNOCUOUS 0x000200000
#define FPE_FLTINV FPE_FLTINV
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define _EBADFD -77
#define SQLITE_FCNTL_CKSM_FILE 41
#define F_SETLKW F_SETLKW64
#define __NR_arch_specific_syscall 244
#define __NR_kill 129
#define SA_INTERRUPT 0x20000000
#define list_for_each_entry_safe(list,item,tmp,member) for (item = list_first_entry(list, typeof(*(item)), member), tmp = list_next_entry(item, member); &item->member != (list); item = tmp, tmp = list_next_entry(item, member))
#define SYS_getrlimit __NR_getrlimit
#define __FLT32_MIN_10_EXP__ (-37)
#define MCAST_MSFILTER 48
#define __GNUC_MINOR__ 3
#define __NR_mlock2 284
#define SQLITE_LIMIT_LENGTH 0
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define _ECONNRESET -104
#define __FLT32X_DIG__ 15
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define SQLITE_MUTEX_RECURSIVE 1
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define SYS_waitid __NR_waitid
#define __NR_mq_timedreceive 183
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define BITS_H 
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define __NR_recvmsg 212
#define SYS_fdatasync __NR_fdatasync
#define ENAMETOOLONG 36
#define SQLITE_MUTEX_STATIC_MEM 3
#define __INT_FAST16_WIDTH__ 64
#define SOCK_RAW SOCK_RAW
#define CLD_STOPPED CLD_STOPPED
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DBL_HAS_QUIET_NAN__ 1
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define RNDGETENTCNT _IOR( 'R', 0x00, int )
#define IPPROTO_MPLS IPPROTO_MPLS
#define _ETOOMANYREFS -109
#define SA_STACK SA_ONSTACK
#define __NR_setreuid 145
#define BUS_ADRERR BUS_ADRERR
#define list_entry(item,type,member) container_of(item, type, member)
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define IPV6_RTHDR_LOOSE 0
#define SIGSTKFLT_ 16
#define TCPOLEN_SACK_PERMITTED 2
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define SYS_gettid __NR_gettid
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define SIGPIPE_ 13
#define SYS_open_by_handle_at __NR_open_by_handle_at
#define le64toh(x) __uint64_identity (x)
#define SYS_adjtimex __NR_adjtimex
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define __FLT16_MANT_DIG__ 11
#define __NR_clone3 435
#define ESOCKTNOSUPPORT 94
#define AF_LOCAL PF_LOCAL
#define __INTPTR_TYPE__ long int
#define __WCHAR_TYPE__ unsigned int
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define __SIZEOF_FLOAT__ 4
#define __SLONGWORD_TYPE long int
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define SOMAXCONN 4096
#define SYS_memfd_create __NR_memfd_create
#define SQLITE_FORMAT 24
#define IPV6_V6ONLY 26
#define DEBUG_memory DEBUG_all
#define atomic_fetch_or_explicit(PTR,VAL,MO) __atomic_fetch_or ((PTR), (VAL), (MO))
#define SQLITE_DBCONFIG_MAINDBNAME 1000
#define SQLITE_STMTSTATUS_SORT 2
#define SYS_move_pages __NR_move_pages
#define __S_IFLNK 0120000
#define __ARM_ARCH_8A 1
#define __NR_userfaultfd 282
#define __NR_personality 92
#define __NR_flistxattr 13
#define __stub_chflags 
#define __NR_get_robust_list 100
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define EDOTDOT 73
#define __FLT32_DECIMAL_DIG__ 9
#define __O_DIRECT 0200000
#define PF_SMC 43
#define SQLITE_FAIL 3
#define __USE_POSIX 1
#define __NR_geteuid 175
#define PF_NFC 39
#define SYS_fallocate __NR_fallocate
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define TCPOLEN_MAXSEG 4
#define bitfield unsigned int
#define SQLITE_DBCONFIG_ENABLE_FKEY 1002
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define BUFSIZ 8192
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define SO_PEEK_OFF 42
#define SQLITE_BUSY_SNAPSHOT (SQLITE_BUSY | (2<<8))
#define __NR_msync 227
#define SYS_getppid __NR_getppid
#define __LDBL_REDIR2_DECL(name) 
#define SQLITE_UTF16_ALIGNED 8
#define __FLT_MAX_10_EXP__ 38
#define SQLITE_OPEN_SUPER_JOURNAL 0x00004000
#define _WCHAR_T_DECLARED 
#define WNOWAIT 0x01000000
#define SQLITE_DBSTATUS_CACHE_USED 1
#define AF_ALG PF_ALG
#define _SC_2_PBS _SC_2_PBS
#define AF_QIPCRTR PF_QIPCRTR
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define _ERESTART -85
#define _FCNTL_H 1
#define IPV6_ADDR_PREFERENCES 72
#define __NR3264_ftruncate 46
#define SQLITE_CONFIG_MULTITHREAD 2
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define SQLITE_ROLLBACK 1
#define EPROTONOSUPPORT 93
#define _BITS_STDINT_INTN_H 1
#define __TIMESIZE 64
#define __NR_setsockopt 208
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define SYS_ppoll __NR_ppoll
#define _IOC_NRMASK ((1 << _IOC_NRBITS)-1)
#define SYS_execveat __NR_execveat
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define IN_CLASSC_NET 0xffffff00
#define __SIGRTMAX 64
#define SQLITE_STATUS_PAGECACHE_SIZE 7
#define BITS_SIZE(bits) ((((bits) - 1) / 8) + 1)
#define __FLT16_HAS_QUIET_NAN__ 1
#define IP_PMTUDISC_OMIT 5
#define SQLITE_OPEN_CREATE 0x00000004
#define __WINT_MAX__ 0xffffffffU
#define __FLT_MAX_EXP__ 128
#define __gid_t_defined 
#define IN_LOOPBACKNET 127
#define SQLITE_OPEN_TEMP_DB 0x00000200
#define SQLITE_READONLY_ROLLBACK (SQLITE_READONLY | (3<<8))
#define SQLITE_TXN_NONE 0
#define SQLITE_FCNTL_RESERVE_BYTES 38
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define CMSG_NXTHDR_(cmsg,mhdr_end) ((cmsg)->len < sizeof (struct cmsghdr_) || CMSG_LEN_(cmsg) + sizeof(struct cmsghdr_) >= (size_t) (mhdr_end - (uint8_t *)(cmsg)) ? NULL : (struct cmsghdr_ *)CMSG_NEXT_(cmsg))
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define __NR_mq_timedsend 182
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define SQLITE_DBCONFIG_WRITABLE_SCHEMA 1011
#define SIGIOT_ 6
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define IPV6_DONTFRAG 62
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define SYS_open_tree __NR_open_tree
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4
#define __SVE_VQ_BYTES 16
#define __clock_t_defined 1
#define _POSIX_SEM_VALUE_MAX 32767
#define AF_ATMPVC PF_ATMPVC
#define __GLIBC_MINOR__ 35
#define __UINT_LEAST32_TYPE__ unsigned int
#define SIGRTMIN (__libc_current_sigrtmin ())
#define _IOC_DIRMASK ((1 << _IOC_DIRBITS)-1)
#define _XBS5_ILP32_OFFBIG -1
#define CLOCK_BOOTTIME 7
#define AF_ASH PF_ASH
#define FNDELAY O_NDELAY
#define IPPROTO_GRE IPPROTO_GRE
#define PTRACE_GETSIGINFO_ 0x4202
#define __LDBL_MIN_EXP__ (-16381)
#define zero_init(type) ((type[1]){}[0])
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define MMAP_SHARED 0x1
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define SYS_fanotify_mark __NR_fanotify_mark
#define SYS_timer_getoverrun __NR_timer_getoverrun
#define P_ANONYMOUS (1 << 6)
#define _EDOTDOT -73
#define __BIT_TYPES_DEFINED__ 1
#define _POSIX_VDISABLE '\0'
#define __size_t 
#define SQLITE_UTF16LE 2
#define __NR_sched_get_priority_min 126
#define F_GETLK64 5
#define FD_SETSIZE __FD_SETSIZE
#define IPV6_RECVPKTINFO 49
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define SQLITE_TESTCTRL_EXTRA_SCHEMA_CHECKS 29
#define SQLITE_IOERR_SHMOPEN (SQLITE_IOERR | (18<<8))
#define IP_OPTIONS 4
#define __struct_FILE_defined 1
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define __INT_LEAST8_MAX__ 0x7f
#define SIGUSR1 10
#define STRACE(msg,...) TRACE_(strace, msg, ##__VA_ARGS__)
#define _IOC_READ 2U
#define __FLT32X_MAX_10_EXP__ 308
#define ESRCH 3
#define ____mbstate_t_defined 1
#define _ELOOP -40
#define SO_ATTACH_REUSEPORT_EBPF 52
#define __SIGRTMIN 32
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define O_RDONLY 00
#define TCP_FASTOPEN 23
#define SIG_ERR_ -1
#define SO_RCVBUFFORCE 33
#define PF_AX25 3
#define SYS_msync __NR_msync
#define _BITS_SIGNUM_GENERIC_H 1
#define __NR_setfsuid 151
#define IP_PMTUDISC 10
#define EMSGSIZE 90
#define __ASM_POSIX_TYPES_H 
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define __stub_stty 
#define __FLT32_MIN_EXP__ (-125)
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define __NR_getgroups 158
#define ZF_RES (1 << 1)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define __NR_getresuid 148
#define _LP64 1
#define SYS_readlinkat __NR_readlinkat
#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18
#define TCP_MSS_DEFAULT 536U
#define TCP_KEEPINTVL 5
#define SYS_socketpair __NR_socketpair
#define __UINT8_C(c) c
#define SQLITE_SAVEPOINT 32
#define EFBIG 27
#define SQLITE_CONFIG_PCACHE 14
#define SYS_io_uring_enter __NR_io_uring_enter
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE IPPROTO_NONE
#define IPPROTO_RSVP IPPROTO_RSVP
#define __S_IFSOCK 0140000
#define P_WRITABLE(flags) (flags & P_WRITE && !(flags & P_COW))
#define __ASM_GENERIC_SOCKIOS_H 
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define __USE_POSIX_IMPLICITLY 1
#define __UINT64_TYPE__ long unsigned int
#define _PTHREAD_H 1
#define BAD_PAGE 0x10000
#define __stub___compat_query_module 
#define TCP_REPAIR_OPTIONS 22
#define __NR_clock_nanosleep 115
#define __ARM_NEON 1
#define __NR_pkey_free 290
#define RLIMIT_MEMLOCK_ 8
#define _EPROTO -71
#define _ENODEV -19
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define SQLITE_CONFIG_GETMALLOC 5
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define SO_MEMINFO 55
#define _SC_IOV_MAX _SC_IOV_MAX
#define SYS_sched_getscheduler __NR_sched_getscheduler
#define _SC_PASS_MAX _SC_PASS_MAX
#define SYS_kcmp __NR_kcmp
#define _SC_LONG_BIT _SC_LONG_BIT
#define SOCK_PACKET SOCK_PACKET
#define __stack_t_defined 1
#define _POSIX_MAPPED_FILES 200809L
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 01000
#define PF_WANPIPE 25
#define SYS_mq_unlink __NR_mq_unlink
#define __NR_setxattr 5
#define SQLITE_LOCK_RESERVED 2
#define MMAP_PRIVATE 0x2
#define IPPROTO_IGMP IPPROTO_IGMP
#define _LFS_LARGEFILE 1
#define SYS_delete_module __NR_delete_module
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define SEGV_ADIPERR SEGV_ADIPERR
#define _IOC_DIRSHIFT (_IOC_SIZESHIFT+_IOC_SIZEBITS)
#define __PID_T_TYPE __S32_TYPE
#define __NR_reboot 142
#define P_WRITE (1 << 1)
#define SQLITE_CONSTRAINT_COMMITHOOK (SQLITE_CONSTRAINT | (2<<8))
#define _STATBUF_ST_NSEC 
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __NR_renameat2 276
#define _SC_AIO_MAX _SC_AIO_MAX
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define ENOTCONN 107
#define SQLITE_TESTCTRL_PRNG_RESET 7
#define SQLITE_BUSY 5
#define SQLITE_ATTACH 24
#define __NR_fsconfig 431
#define SO_RCVBUF_ 8
#define IN_CLASSB_NET 0xffff0000
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define TRACE_instr TRACE__NOP
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define S_IFLNK __S_IFLNK
#define __NR_syscalls 449
#define SYS_unlinkat __NR_unlinkat
#define P_tmpdir "/tmp"
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _POSIX_MESSAGE_PASSING 200809L
#define SQLITE_ABORT 4
#define SYS_fsconfig __NR_fsconfig
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define __WORDSIZE_TIME64_COMPAT32 0
#define __NR_sigaltstack 132
#define ESRMNT 69
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define list_for_each_entry(list,item,member) for (item = list_entry((list)->next, typeof(*item), member); &item->member != (list); item = list_entry(item->member.next, typeof(*item), member))
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define IPV6_ROUTER_ALERT 22
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define is_gcc(version) (__GNUC__ >= version)
#define PTHREAD_ONCE_INIT 0
#define __DBL_DECIMAL_DIG__ 17
#define _POSIX_MQ_PRIO_MAX 32
#define __NR_epoll_ctl 21
#define SQLITE_CONFIG_PCACHE2 18
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define _SIZE_T 
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define SQLITE_CONFIG_GETPCACHE2 19
#define AT_FDCWD_ -100
#define SQLITE_INSERT 18
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define SQLITE_IOCAP_ATOMIC64K 0x00000100
#define SQLITE_LIMIT_COLUMN 2
#define __NR_recvfrom 207
#define LOCK_INITIALIZER {PTHREAD_MUTEX_INITIALIZER, 0}
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define EXTRA_MAGIC 0x45585401
#define SYS_getrandom __NR_getrandom
#define SOCK_STREAM SOCK_STREAM
#define SA_NOMASK SA_NODEFER
#define uint(size) glue3(uint,size,_t)
#define __BIG_ENDIAN 4321
#define SQLITE_IOERR_DATA (SQLITE_IOERR | (32<<8))
#define _IOC_NRBITS 8
#define __NR_openat 56
#define SQLITE_IOCAP_SAFE_APPEND 0x00000200
#define SQLITE_DROP_TEMP_INDEX 12
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_BITSPERLONG_H 
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define __NR_fsync 82
#define SYS_close_range __NR_close_range
#define MSG_PEEK_ 0x2
#define SI_KERNEL SI_KERNEL
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define _FILE_OFFSET_BITS 64
#define __SIZEOF_WCHAR_T__ 4
#define _STRUCT_TIMESPEC 1
#define __INTMAX_WIDTH__ 64
#define __NR_rt_tgsigqueueinfo 240
#define _POSIX_REENTRANT_FUNCTIONS 1
#define __NR_fallocate 47
#define SQLITE_STDCALL SQLITE_APICALL
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define SO_ACCEPTCONN 30
#define _ENETDOWN -100
#define __ORDER_BIG_ENDIAN__ 4321
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define SQLITE_DBCONFIG_LEGACY_FILE_FORMAT 1016
#define IP_RECVFRAGSIZE 25
#define __UINT32_C(c) c ## U
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define EISCONN 106
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define SQLITE_OPEN_URI 0x00000040
#define SQLITE_IOERR_READ (SQLITE_IOERR | (1<<8))
#define SQLITE_NOTFOUND 12
#define __NR_recvmmsg 243
#define TCP_DEFER_ACCEPT 9
#define IP_NODEFRAG 22
#define __ATOMIC_RELEASE 3
#define __glibc_has_builtin(name) __has_builtin (name)
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define AF_UNIX PF_UNIX
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define TCPOPT_SACK_PERMITTED 4
#define IPPROTO_COMP IPPROTO_COMP
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define _EADDRNOTAVAIL -99
#define EUSERS 87
#define SQLITE_CREATE_TEMP_INDEX 3
#define _ENOTEMPTY -39
#define _ELIBSCN -81
#define TCP_FASTOPEN_KEY 33
#define _VA_LIST_T_H 
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
#define __PIC__ 2
#define PTRACE_SETFPREGS_ 15
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define ENETDOWN 100
#define __UINT_FAST32_TYPE__ long unsigned int
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define __NR_removexattr 14
#define O_NOFOLLOW __O_NOFOLLOW
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define POLL_ERR POLL_ERR
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define __NR_faccessat 48
#define SQLITE_PREPARE_NO_VTAB 0x04
#define _REG(n) union { dword_t e ##n; word_t n; }
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define _EBUSY -16
#define SVE_VL_MAX __SVE_VL_MAX
#define AF_CAIF PF_CAIF
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define SYS_lremovexattr __NR_lremovexattr
#define SQLITE_DROP_TEMP_TABLE 13
#define SQLITE_DBCONFIG_DQS_DDL 1014
#define SYS_fchmod __NR_fchmod
#define SQLITE_RECURSIVE 33
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define _IO(type,nr) _IOC(_IOC_NONE,(type),(nr),0)
#define __FP_FAST_FMA 1
#define SYS_sync_file_range __NR_sync_file_range
#define SA_NOCLDWAIT 2
#define __va_list__ 
#define SO_SNDLOWAT 19
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define IPV6_PATHMTU 61
#define __NR_fstatfs __NR3264_fstatfs
#define SYS_sethostname __NR_sethostname
#define _POSIX2_CHAR_TERM 200809L
#define SO_ERROR 4
#define SYS_remap_file_pages __NR_remap_file_pages
#define __NR_kexec_load 104
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define ERFKILL 132
#define SYS_munlock __NR_munlock
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define SQLITE_TEXT 3
#define __INT32_TYPE__ int
#define _FTS5_H 
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define _EROFS -30
#define __SIZEOF_DOUBLE__ 8
#define __NR_listxattr 11
#define __FLT_MANT_DIG__ 24
#define IPV6_PMTUDISC_WANT 1
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK 5
#define EPROTOTYPE 91
#define __SWORD_TYPE long int
#define __NR_fadvise64 __NR3264_fadvise64
#define be16toh(x) __bswap_16 (x)
#define __NR_shmctl 195
#define EL3HLT 46
#define __NR_getegid 177
#define SQLITE_DBSTATUS_CACHE_HIT 7
#define _BITS_POSIX1_LIM_H 1
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define __NR_getgid 176
#define SO_GET_FILTER SO_ATTACH_FILTER
#define MCAST_BLOCK_SOURCE 43
#define _DIRENT_MATCHES_DIRENT64 1
#define IN_CLASSA_NET 0xff000000
#define FS_PROC_H 
#define SYS_capset __NR_capset
#define _T_SIZE 
#define UINT8_C(c) c
#define SO_MAX_PACING_RATE 47
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define DTTOIF(dirtype) ((dirtype) << 12)
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define va_end(v) __builtin_va_end(v)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define SQLITE_CONFIG_MUTEX 10
#define _EUCLEAN -117
#define SVE_VL_MIN __SVE_VL_MIN
#define __strncpy_safe __attribute__((nonstring))
#define SQLITE_FCNTL_WIN32_SET_HANDLE 23
#define IPV6_TCLASS_ 67
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define _POSIX_V7_ILP32_OFFBIG -1
#define ELIBBAD 80
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define SQLITE_RANGE 25
#define _CS_V7_ENV _CS_V7_ENV
#define ESTRPIPE 86
#define __glibc_clang_prereq(maj,min) 0
#define PF_INET 2
#define SQLITE_DBSTATUS_STMT_USED 3
#define _SC_SIGNALS _SC_SIGNALS
#define IP_DROP_MEMBERSHIP 36
#define ECONNREFUSED 111
#define si_call_addr _sifields._sigsys._call_addr
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define _ENODATA -61
#define _RWLOCK_INTERNAL_H 
#define __CONST_SOCKADDR_ARG const struct sockaddr *
#define __DBL_MAX_10_EXP__ 308
#define UINT16_MAX (65535)
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define SO_ZEROCOPY 60
#define PF_MPLS 28
#define _POSIX_TRACE_LOG -1
#define RLIMIT_CORE_ 4
#define __INT16_C(c) c
#define TCP_SAVED_SYN 28
#define PF_RXRPC 33
#define __ARM_ARCH_ISA_A64 1
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define _SC_THREADS _SC_THREADS
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SIG_IGN ((__sighandler_t) 1)
#define _ENETRESET -102
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define __NR_capset 91
#define _NETINET_IN_H 1
#define SQLITE_LOCK_PENDING 3
#define EEXIST 17
#define __PTRDIFF_TYPE__ long int
#define __USE_FILE_OFFSET64 1
#define IP_UNICAST_IF 50
#define DT_LNK DT_LNK
#define AF_FLAG (1 << 4)
#define SYS_lsetxattr __NR_lsetxattr
#define EADV 68
#define MEMORY_H 
#define __kernel_old_uid_t __kernel_old_uid_t
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define PF_ATMPVC 8
#define SYS_ioprio_set __NR_ioprio_set
#define SYS_fremovexattr __NR_fremovexattr
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define SYS_mq_getsetattr __NR_mq_getsetattr
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define __NR_ppoll 73
#define ENOPKG 65
#define SQLITE_FCNTL_VFSNAME 12
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define AF_X25 PF_X25
#define SYS_sendmsg __NR_sendmsg
#define __NR_getrusage 165
#define IPV6_MTU_DISCOVER 23
#define SQLITE_CREATE_TEMP_TABLE 4
#define SYS_rt_sigprocmask __NR_rt_sigprocmask
#define atomic_thread_fence(MO) __atomic_thread_fence (MO)
#define __UINTPTR_TYPE__ long unsigned int
#define SYS_mq_notify __NR_mq_notify
#define TH_URG 0x20
#define CLD_KILLED CLD_KILLED
#define _STATBUF_ST_RDEV 
#define SQLITE_TRACE_ROW 0x04
#define SO_RCVTIMEO_NEW 66
#define __bitwise__ 
#define __NR_socket 198
#define __SVE_NUM_PREGS 16
#define SHUT_RD SHUT_RD
#define SYS_fchmodat __NR_fchmodat
#define __LDBL_MIN_10_EXP__ (-4931)
#define _SC_FIFO _SC_FIFO
#define SQLITE_DEPRECATED 
#define __BITS_SOCKET_H 
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define _SC_SPAWN _SC_SPAWN
#define SYS_readv __NR_readv
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define SIG_SETMASK 2
#define __NR_finit_module 273
#define IPV6_MULTICAST_ALL 29
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define SQLITE_MUTEX_STATIC_MASTER 2
#define EROFS 30
#define _POSIX_OPEN_MAX 20
#define RLIMIT_RSS_ 5
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define __FLT128_DECIMAL_DIG__ 36
#define SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION 1005
#define ENOTUNIQ 76
#define PTRDIFF_MAX (9223372036854775807L)
#define _LINUX_RANDOM_H 
#define __FLT_DECIMAL_DIG__ 9
#define _SC_STREAMS _SC_STREAMS
#define __WALL 0x40000000
#define SQLITE_TESTCTRL_VDBE_COVERAGE 21
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __NR_tgkill 131
#define __FLT_MIN_10_EXP__ (-37)
#define RLIMIT_AS_ 9
#define SOL_ALG 279
#define SHUT_WR SHUT_WR
#define SYS_mq_timedsend __NR_mq_timedsend
#define _ENOTDIR -20
#define __FLT16_DECIMAL_DIG__ 5
#define _ASM_GENERIC_TYPES_H 
#define __INT_LEAST64_WIDTH__ 64
#define SQLITE_EMPTY 16
#define SOL_AAL 265
#define SYS_getresuid __NR_getresuid
#define INT_LEAST16_MAX (32767)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define _POSIX_SAVED_IDS 1
#define SQLITE_STATUS_SCRATCH_USED 3
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define __P(args) args
#define _POSIX_BARRIERS 200809L
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define __U32_TYPE unsigned int
#define SYS_mount_setattr __NR_mount_setattr
#define __NR_tkill 130
#define _STDLIB_H 1
#define _T_WCHAR 
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define SYS_rseq __NR_rseq
#define __NR_waitid 95
#define _BITS_FLOATN_COMMON_H 
#define IP_UNBLOCK_SOURCE 37
#define IPV6_RTHDR_TYPE_0 0
#define SQLITE_IOERR_DELETE_NOENT (SQLITE_IOERR | (23<<8))
#define __NR_mq_getsetattr 185
#define _SC_PII_XTI _SC_PII_XTI
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define O_WRONLY_ (1 << 0)
#define si_timerid _sifields._timer.si_tid
#define _BITS_SIGEVENT_CONSTS_H 1
#define __FLT32X_MAX_EXP__ 1024
#define ____sigset_t_defined 
#define SYS_ftruncate __NR_ftruncate
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define FTS5_TOKENIZE_QUERY 0x0001
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define O_NOCTTY 0400
#define AIO_PRIO_DELTA_MAX 20
#define SYS_getuid __NR_getuid
#define __NR_connect 203
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define __NR_epoll_pwait 22
#define _STDBOOL_H 
#define __ARM_SIZEOF_WCHAR_T 4
#define SYS_mlock2 __NR_mlock2
#define __NR_init_module 105
#define __ATOMIC_ACQUIRE 2
#define TCPI_OPT_SYN_DATA 32
#define __NR_delete_module 106
#define atomic_flag_test_and_set_explicit(PTR,MO) __atomic_test_and_set ((PTR), (MO))
#define TCPOPT_WINDOW 3
#define _ENOLCK -37
#define _ENFILE -23
#define IP_DEFAULT_MULTICAST_TTL 1
#define SIGALRM 14
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __GCC_IEC_559_COMPLEX 2
#define __uid_t_defined 
#define atomic_flag_clear_explicit(PTR,MO) __atomic_clear ((PTR), (MO))
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define SQLITE_CONFIG_URI 17
#define EUNATCH 49
#define SOL_ATM 264
#define _ENOSYS -38
#define INT_LEAST16_MIN (-32767-1)
#define SYS_newfstatat __NR_newfstatat
#define __flexarr []
#define _SC_LINE_MAX _SC_LINE_MAX
#define SEGV_PKUERR SEGV_PKUERR
#define _SCHED_H 1
#define __NR_mlockall 230
#define _BITS_SETJMP_H 1
#define __NR_name_to_handle_at 264
#define _POSIX_PRIORITIZED_IO 200809L
#define __stub_fchflags 
#define SQLITE_CANTOPEN 14
#define SYS_reboot __NR_reboot
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define __NR_pidfd_open 434
#define PTRACE_PEEKUSER_ 3
#define PTHREAD_CANCELED ((void *) -1)
#define _BITS_TIME_H 1
#define __NR_setdomainname 162
#define O_ACCMODE 0003
#define SQLITE_IOERR_ACCESS (SQLITE_IOERR | (13<<8))
#define SYS_swapon __NR_swapon
#define SYS_rt_sigreturn __NR_rt_sigreturn
#define SYS_setitimer __NR_setitimer
#define atomic_compare_exchange_strong(PTR,VAL,DES) atomic_compare_exchange_strong_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __FSWORD_T_TYPE __SWORD_TYPE
#define SIGNAL_H 
#define AF_XDP PF_XDP
#define makedev(maj,min) gnu_dev_makedev (maj, min)
#define __NR_getxattr 8
#define FIOGETOWN 0x8903
#define EAFNOSUPPORT 97
#define SQLITE_STATIC ((sqlite3_destructor_type)0)
#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1
#define atomic_compare_exchange_strong_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 0, (SUC), (FAIL)); })
#define SYS_msgctl __NR_msgctl
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define __NR3264_fadvise64 223
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define S_IFSOCK __S_IFSOCK
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define IPV6_PMTUDISC_INTERFACE 4
#define static_assert _Static_assert
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define DT_WHT DT_WHT
#define _ENOSTR -60
#define INT16_C(c) c
#define _SC_2_C_DEV _SC_2_C_DEV
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define RLIMIT_LOCKS_ 10
#define SYS_mremap __NR_mremap
#define SQLITE_FCNTL_LAST_ERRNO 4
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define SQLITE_CONFIG_PCACHE_HDRSZ 24
#define MQ_PRIO_MAX 32768
#define _GETOPT_POSIX_H 1
#define EILSEQ 84
#define __NR_shmat 196
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ESPIPE 29
#define SYS_tkill __NR_tkill
#define _POSIX_TTY_NAME_MAX 9
#define ECOMM 70
#define SI_DETHREAD SI_DETHREAD
#define __OFF_T_MATCHES_OFF64_T 1
#define __NR_rt_sigqueueinfo 138
#define __NR_nanosleep 101
#define __NR_fsmount 432
#define __WCHAR_MAX__ 0xffffffffU
#define AF_APPLETALK PF_APPLETALK
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define SOL_PPPOL2TP 273
#define AF_IB PF_IB
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define SO_NETNS_COOKIE 71
#define INT16_MAX (32767)
#define SQLITE_STATUS_SCRATCH_SIZE 8
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define AF_MCTP PF_MCTP
#define __S_IREAD 0400
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define SQLITE_IOERR 10
#define __NR_shmdt 197
#define SQLITE_ACCESS_READ 2
#define __GCC_IEC_559 2
#define SQLITE_IOERR_SHORT_READ (SQLITE_IOERR | (2<<8))
#define SO_PEERCRED 17
#define SQLITE_TESTCTRL_BYTEORDER 22
#define __NR_fanotify_init 262
#define _IOFBF 0
#define __NR3264_statfs 43
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define SYS_removexattr __NR_removexattr
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define SO_SELECT_ERR_QUEUE 45
#define __FLT64_DECIMAL_DIG__ 17
#define SYS_preadv __NR_preadv
#define IP_TTL_ 2
#define _EDESTADDRREQ -89
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __NR_swapon 224
#define _EFBIG -27
#define SYS_msgrcv __NR_msgrcv
#define FNONBLOCK O_NONBLOCK
#define XATTR_SIZE_MAX 65536
#define SQLITE_CONFIG_GETMUTEX 11
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define SQLITE_TESTCTRL_ISKEYWORD 16
#define SQLITE_ERROR 1
#define _IOC_TYPE(nr) (((nr) >> _IOC_TYPESHIFT) & _IOC_TYPEMASK)
#define ILL_BADIADDR ILL_BADIADDR
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define EOWNERDEAD 130
#define SIG_UNBLOCK_ 1
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define _EMFILE -24
#define __NR_gettid 178
#define _IOR_BAD(type,nr,size) _IOC(_IOC_READ,(type),(nr),sizeof(size))
#define O_ACCMODE_ 3
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define SYS_vmsplice __NR_vmsplice
#define SHUT_RDWR SHUT_RDWR
#define POLL_MSG POLL_MSG
#define SIGQUIT_ 3
#define SQLITE_MUTEX_STATIC_LRU 6
#define INT16_MIN (-32767-1)
#define __FINITE_MATH_ONLY__ 0
#define AT_EACCESS 0x200
#define si_overrun _sifields._timer.si_overrun
#define __id_t_defined 
#define SYS_signalfd4 __NR_signalfd4
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define __sched_priority sched_priority
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define SQLITE_WARNING 28
#define EBADR 53
#define __NR_setregid 143
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define __pid_t_defined 
#define EL2NSYNC 45
#define ERANGE 34
#define SQLITE_OPEN_SHAREDCACHE 0x00020000
#define _EFAULT -14
#define SQLITE_NULL 5
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define SCM_SRCRT IPV6_RXSRCRT
#define SYS_shmat __NR_shmat
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define IPV6_NEXTHOP 9
#define __NR_membarrier 283
#define _THREAD_MUTEX_INTERNAL_H 1
#define __LDBL_REDIR1(name,proto,alias) name proto
#define NGROUPS_MAX 65536
#define INT_FAST8_MAX (127)
#define SOCK_DGRAM_ 2
#define SYS_shmdt __NR_shmdt
#define ETXTBSY 26
#define __NR_io_pgetevents 292
#define __HAVE_FLOAT128X 0
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define EALREADY 114
#define SYS_inotify_init1 __NR_inotify_init1
#define NSIG _NSIG
#define _ENETUNREACH -101
#define SYS_fchdir __NR_fchdir
#define __NR_io_uring_register 427
#define SQLITE_ACCESS_EXISTS 0
#define MEM_PAGES (1 << 20)
#define SO_INCOMING_NAPI_ID 56
#define MSG_PEEK MSG_PEEK
#define atomic_fetch_and_explicit(PTR,VAL,MO) __atomic_fetch_and ((PTR), (VAL), (MO))
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define htobe16(x) __bswap_16 (x)
#define _ENOTSOCK -88
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define __NR_request_key 218
#define __SHRT_MAX__ 0x7fff
#define SQLITE_CHECKPOINT_TRUNCATE 3
#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define SYS_pread64 __NR_pread64
#define ILL_ILLOPC ILL_ILLOPC
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define __FLT64X_MAX_10_EXP__ 4932
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define SIGTTOU 22
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define __NR_bind 200
#define __f32(x) x ##f32
#define __LDBL_IS_IEC_60559__ 2
#define SO_RCVTIMEO_OLD 20
#define _ERANGE -34
#define IPV6_HDRINCL 36
#define SQLITE_TESTCTRL_SORTER_MMAP 24
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define __LITTLE_ENDIAN 1234
#define SYS_process_vm_readv __NR_process_vm_readv
#define SVE_MAGIC 0x53564501
#define __NR_semctl 191
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define SF_RES (1 << 2)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define O_EXCL_ (1 << 7)
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define SIG_DFL_ 0
#define _ENOENT -2
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define SYS_epoll_pwait __NR_epoll_pwait
#define INT_FAST8_MIN (-128)
#define CLOCK_MONOTONIC_COARSE 6
#define FFSYNC O_FSYNC
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define SQLITE_MUTEX_STATIC_PRNG 5
#define WCHAR_MIN __WCHAR_MIN
#define _BITS_TYPES_H 1
#define _ENOTSUP _EOPNOTSUPP
#define SYS_geteuid __NR_geteuid
#define __UID_T_TYPE __U32_TYPE
#define SYS_flistxattr __NR_flistxattr
#define _POSIX_READER_WRITER_LOCKS 200809L
#define SQLITE_FCNTL_BUSYHANDLER 15
#define SQLITE_DBSTATUS_CACHE_USED_SHARED 11
#define _POSIX_FSYNC 200809L
#define __AARCH64_CMODEL_SMALL__ 1
#define _POSIX_AIO_MAX 1
#define SO_WIFI_STATUS 41
#define SIGTSTP_ 20
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define __NR_prlimit64 261
#define __LDBL_MAX_EXP__ 16384
#define CLOCK_PROCESS_CPUTIME_ID_ 2
#define IPV6_MINHOPCOUNT 73
#define SQLITE_DENY 1
#define ENOTEMPTY 39
#define __NR_ioctl 29
#define UINT_FAST16_MAX (18446744073709551615UL)
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define ENOTBLK 15
#define _BITS_STAT_H 1
#define __WINT_MIN__ 0U
#define RLIMIT_NLIMITS_ 16
#define _SC_SHELL _SC_SHELL
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define printk ish_printk
#define TCP_REPAIR_QUEUE 20
#define SA_RESETHAND_ 0x80000000
#define __linux__ 1
#define SYS_recvfrom __NR_recvfrom
#define AF_NETROM PF_NETROM
#define __ARCH_WANT_RENAMEAT 
#define SO_BPF_EXTENSIONS 48
#define CLOCK_REALTIME_ 0
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define IP_RECVTOS_ 13
#define MAX_NAME 256
#define _POSIX_AIO_LISTIO_MAX 2
#define __NR_inotify_init1 26
#define PF_IUCV 32
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define __NR_rt_sigaction 134
#define SYS_getgid __NR_getgid
#define _SC_SELECT _SC_SELECT
#define IOC_INOUT ((_IOC_WRITE|_IOC_READ) << _IOC_DIRSHIFT)
#define SO_REUSEADDR 2
#define __WCHAR_MIN__ 0U
#define AF_VSOCK PF_VSOCK
#define __NR_inotify_add_watch 27
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_SYNCHRONIZED_IO 200809L
#define SYS_get_robust_list __NR_get_robust_list
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define SQLITE_DBSTATUS_CACHE_SPILL 12
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define _POSIX_THREAD_THREADS_MAX 64
#define O_APPEND 02000
#define __osockaddr_defined 1
#define __NR_fcntl __NR3264_fcntl
#define _SYS_USER_H 1
#define MSG_WAITALL_ 0x100
#define __INT8_MAX__ 0x7f
#define SQLITE_DROP_INDEX 10
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define SQLITE_CREATE_TABLE 2
#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#define _POSIX_LINK_MAX 8
#define __ldiv_t_defined 1
#define SIGKILL_ 9
#define AF_TIPC PF_TIPC
#define TCPI_OPT_ECN_SEEN 16
#define __UINT8_TYPE__ unsigned char
#define __unix 1
#define __NR_pwritev 70
#define __NR_quotactl 60
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define _DEFAULT_SOURCE 1
#define SQLITE_DROP_VTABLE 30
#define _LINUX_POSIX_TYPES_H 
#define SO_MARK 36
#define SQLITE_SCANSTAT_NAME 3
#define SYS_splice __NR_splice
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define __LOCK_ALIGNMENT 
#define _WCHAR_T_DEFINED_ 
#define __NR_setresuid 147
#define _XOPEN_REALTIME_THREADS 1
#define _POSIX_CHILD_MAX 25
#define SQLITE_TESTCTRL_ALWAYS 13
#define ETIMEDOUT 110
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __NR_adjtimex 171
#define SYS_llistxattr __NR_llistxattr
#define __USE_XOPEN2K8 1
#define SQLITE_MISMATCH 20
#define SCHED_OTHER 0
#define __SI_ERRNO_THEN_CODE 1
#define SYS_listen __NR_listen
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define SYS_dup __NR_dup
#define SQLITE_ANY 5
#define ENODATA 61
#define IPV6_AUTHHDR 10
#define CLOCK_MONOTONIC_ 1
#define _ENOBUFS -105
#define __END_DECLS 
#define _POSIX_ASYNC_IO 1
#define __NR_perf_event_open 241
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define SIG_IGN_ 1
#define IPV6_RECVERR_RFC4884 31
#define EMU_CPU_MEM_H 
#define TRACE_verbose TRACE__NOP
#define O_APPEND_ (1 << 10)
#define __NR_vhangup 58
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _ALLOCA_H 1
#define TCP_WINDOW_CLAMP 10
#define __BITS_PER_LONG 64
#define CPU_OFFSET(field) offsetof(struct cpu_state, field)
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define SQLITE_DROP_TABLE 11
#define _XOPEN_ENH_I18N 1
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define __jmp_buf_tag_defined 1
#define __NR_prctl 167
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define _EACCES -13
#define IP_IPSEC_POLICY 16
#define __NR_clock_getres 114
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define TCP_INQ 36
#define DEBUG_all 0
#define IPPROTO_PIM IPPROTO_PIM
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define __NR_exit_group 94
#define SQLITE_DBSTATUS_CACHE_MISS 8
#define __DBL_DIG__ 15
#define __NR_timer_delete 111
#define TIME_UTC 1
#define forceinline inline __attribute__((always_inline))
#define EINTR 4
#define __f32x(x) x ##f32x
#define SQLITE_CONSTRAINT_PINNED (SQLITE_CONSTRAINT |(11<<8))
#define AF_INET6 PF_INET6
#define SQLITE_CONFIG_WIN32_HEAPSIZE 23
#define SQLITE_OPEN_MASTER_JOURNAL 0x00004000
#define SQLITE_CORRUPT_SEQUENCE (SQLITE_CORRUPT | (2<<8))
#define SQLITE_STATUS_SCRATCH_OVERFLOW 4
#define FTS5_TOKENIZE_PREFIX 0x0002
#define SOL_NETLINK 270
#define __WCHAR_MAX __WCHAR_MAX__
#define PATH_MAX 4096
#define AF_INET_ PF_INET_
#define MEM_PGDIR_SIZE (1 << 10)
#define IPV6_V6ONLY_ 26
#define _IO_EOF_SEEN 0x0010
#define _POSIX_SPAWN 200809L
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define SOCK_DGRAM SOCK_DGRAM
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define __f64x(x) x ##f64x
#define SQLITE_REPLACE 5
#define SYS_rt_sigaction __NR_rt_sigaction
#define SO_LINGER 13
#define ICMP6_FILTER_ 1
#define TMP_MAX 238328
#define si_status _sifields._sigchld.si_status
#define AF_WANPIPE PF_WANPIPE
#define PF_UNIX PF_LOCAL
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define SQLITE_DETACH 25
#define __FLT32_MAX_EXP__ 128
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define _EMLINK -31
#define ILL_ILLADR ILL_ILLADR
#define _ELIBMAX -82
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC PF_UNSPEC
#define SQLITE_DBCONFIG_RESET_DATABASE 1009
#define SIGQUIT 3
#define SYS_epoll_create1 __NR_epoll_create1
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define SQLITE_INDEX_CONSTRAINT_GLOB 66
#define P_COW (1 << 4)
#define PF_CAIF 37
#define SO_PEERCRED_ 17
#define PF_ASH 18
#define SQLITE_MUTEX_STATIC_APP1 8
#define SQLITE_MUTEX_STATIC_APP2 9
#define SQLITE_LAST_ERRNO SQLITE_FCNTL_LAST_ERRNO
#define F_DUPFD_CLOEXEC 1030
#define SQLITE_CONFIG_HEAP 8
#define _ASSERT_H_DECLS 
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define ITIMER_REAL_ 0
#define _WCHAR_T_ 
#define list_for_each(list,item) for (item = (list)->next; item != (list); item = item->next)
#define EPERM 1
#define SQLITE_FCNTL_BEGIN_ATOMIC_WRITE 31
#define _STDDEF_H 
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define O_NONBLOCK_ (1 << 11)
#define __NR_rt_sigpending 136
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __SIZEOF_PTRDIFF_T__ 8
#define AF_BRIDGE PF_BRIDGE
#define _IOC_NR(nr) (((nr) >> _IOC_NRSHIFT) & _IOC_NRMASK)
#define SOL_XDP 283
#define atomic_signal_fence(MO) __atomic_signal_fence (MO)
#define SQLITE_LOCKED_SHAREDCACHE (SQLITE_LOCKED | (1<<8))
#define __SIZEOF_LONG__ 8
#define SQLITE_IOERR_SEEK (SQLITE_IOERR | (22<<8))
#define _SYS_UCONTEXT_H 1
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define SO_DETACH_BPF SO_DETACH_FILTER
#define PF_NETLINK 16
#define __UINT16_C(c) c
#define SQLITE_TRACE_PROFILE 0x02
#define SQLITE_SERIALIZE_NOCOPY 0x001
#define IP_MULTICAST_LOOP 34
#define SS_DISABLE_ 2
#define si_syscall _sifields._sigsys._syscall
#define FIONCLEX_ 0x5450
#define AF_CAN PF_CAN
#define O_WRONLY 01
#define __gnu_linux__ 1
#define MAX_GROUPS 32
#define O_EXCL 0200
#define _ENDIAN_H 1
#define SQLITE_FCNTL_COMMIT_ATOMIC_WRITE 32
#define INT_FAST16_MAX (9223372036854775807L)
#define SOL_IP 0
#define IPPROTO_PUP IPPROTO_PUP
#define __NR_clock_gettime 113
#define SQLITE_SHM_LOCK 2
#define atomic_fetch_sub_explicit(PTR,VAL,MO) __atomic_fetch_sub ((PTR), (VAL), (MO))
#define SQLITE_FCNTL_VFS_POINTER 27
#define SQLITE_IOERR_AUTH (SQLITE_IOERR | (28<<8))
#define _ENOTTY -25
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define atomic_flag_clear(PTR) __atomic_clear ((PTR), __ATOMIC_SEQ_CST)
#define ENOSR 63
#define __USE_ISOC11 1
#define SO_BINDTODEVICE 25
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define __FLT16_MIN_EXP__ (-13)
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define __FLT64_MANT_DIG__ 53
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define IPPROTO_IDP IPPROTO_IDP
#define SQLITE_INDEX_CONSTRAINT_ISNOT 69
#define SQLITE_SYNC_FULL 0x00003
#define SYS_linkat __NR_linkat
#define SYS_sendfile __NR_sendfile
#define __SOCKADDR_ARG struct sockaddr *__restrict
#define _IOW_BAD(type,nr,size) _IOC(_IOC_WRITE,(type),(nr),sizeof(size))
#define __FLT64X_MANT_DIG__ 113
#define SQLITE_REINDEX 27
#define SQLITE_DBCONFIG_MAX 1017
#define IPPROTO_IPIP IPPROTO_IPIP
#define SYS_wait4 __NR_wait4
#define LSEEK_END 2
#define SQLITE_IOERR_MMAP (SQLITE_IOERR | (24<<8))
#define _T_PTRDIFF 
#define sched_priority sched_priority
#define PTRACE_KILL_ 8
#define __glibc_has_extension(ext) 0
#define atomic_store_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_store_ptr = (PTR); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (VAL); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (MO)); })
#define IPV6_2292PKTOPTIONS 6
#define _ENOMEM -12
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define SO_TIMESTAMP_ 29
#define _LFS64_STDIO 1
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define PF_FLAG (1 << 2)
#define L_ctermid 9
#define _IOC_TYPEMASK ((1 << _IOC_TYPEBITS)-1)
#define has_feature(x) 0
#define _ECONNREFUSED -111
#define SYS_mlockall __NR_mlockall
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define IPPROTO_TCP IPPROTO_TCP
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define __ino_t_defined 
#define SYS_connect __NR_connect
#define _SC_ARG_MAX _SC_ARG_MAX
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define SI_USER_ 0
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define SQLITE_APICALL 
#define SEGV_MTESERR SEGV_MTESERR
#define SSIZE_MAX LONG_MAX
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 0x00001000
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ELNRNG 48
#define RNDCLEARPOOL _IO( 'R', 0x06 )
#define __NR_readahead 213
#define AF_ROUTE PF_ROUTE
#define PTRACE_EVENT_FORK_ 1
#define _EINPROGRESS -115
#define __NR_write 64
#define LOCK_SH 1
#define __ONCE_ALIGNMENT 
#define SO_OOBINLINE 10
#define __NR_sync 81
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define __SI_ALIGNMENT 
#define __NR_getppid 173
#define __USE_ISOC95 1
#define __USE_ISOC99 1
#define _IOC_DIR(nr) (((nr) >> _IOC_DIRSHIFT) & _IOC_DIRMASK)
#define O_FSYNC O_SYNC
#define __NR_lseek __NR3264_lseek
#define _POSIX_SEM_NSEMS_MAX 256
#define __UINT16_TYPE__ short unsigned int
#define MSG_DONTROUTE MSG_DONTROUTE
#define __FLT16_MAX_10_EXP__ 4
#define __GNUC_STDC_INLINE__ 1
#define PTRACE_PEEKTEXT_ 1
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define ____sigval_t_defined 
#define SQLITE_LIMIT_COMPOUND_SELECT 4
#define FPE_FLTDIV FPE_FLTDIV
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define SYS_rt_sigsuspend __NR_rt_sigsuspend
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define WINT_MAX (4294967295u)
#define TCP_QUICKACK 12
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define SQLITE_SHM_NLOCK 8
#define __DBL_HAS_INFINITY__ 1
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define IPV6_PMTUDISC_OMIT 5
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define RNDADDTOENTCNT _IOW( 'R', 0x01, int )
#define _POSIX_NGROUPS_MAX 8
#define MSG_FASTOPEN MSG_FASTOPEN
#define _EREMCHG -78
#define __NR_kcmp 272
#define __NR_pidfd_getfd 438
#define PF_NETROM 6
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define stdin stdin
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define SYS_clock_settime __NR_clock_settime
#define _POSIX_TIMER_MAX 32
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define _EHOSTUNREACH -113
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define _SC_CLK_TCK _SC_CLK_TCK
#define SCHED_FIFO 1
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define IPV6_ORIGDSTADDR 74
#define _POSIX_PATH_MAX 256
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define __NR_ioprio_set 30
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IPPROTO_IPV6 IPPROTO_IPV6
#define _ESRMNT -69
#define __SYSCALL(x,y) 
#define SIGCONT_ 18
#define be32toh(x) __bswap_32 (x)
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define IPPROTO_SCTP IPPROTO_SCTP
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define AF_ECONET PF_ECONET
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define SQLITE_OPEN_SUBJOURNAL 0x00002000
#define glue(a,b) _glue(a, b)
#define _SIZE_T_DEFINED 
#define TRACE_debug TRACE__NOP
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define _EISNAM -120
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define SYS_getsockname __NR_getsockname
#define _POSIX_NO_TRUNC 1
#define ECHILD 10
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define SQLITE_LIMIT_ATTACHED 7
#define atomic_fetch_xor_explicit(PTR,VAL,MO) __atomic_fetch_xor ((PTR), (VAL), (MO))
#define _EIO -5
#define __f64(x) x ##f64
#define UINT_LEAST8_MAX (255)
#define SYS_set_robust_list __NR_set_robust_list
#define SOL_X25 262
#define MEM_WRITE_PTRACE 2
#define _EBADF -9
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define __stub_setlogin 
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define __NR_landlock_add_rule 445
#define __O_DSYNC 010000
#define _IOC_NRSHIFT 0
#define SQLITE_ACCESS_READWRITE 1
#define _POSIX_MEMORY_PROTECTION 200809L
#define O_CLOEXEC_ (1 << 19)
#define __NR_truncate __NR3264_truncate
#define true 1
#define __NR_getuid 174
#define SA_RESETHAND 0x80000000
#define __sig_atomic_t_defined 1
#define SQLITE_OPEN_WAL 0x00080000
#define __NR_setresgid 149
#define __NR_sched_setparam 118
#define __S32_TYPE int
#define IP_PKTOPTIONS 9
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define SYS_write __NR_write
#define SQLITE_OK_LOAD_PERMANENTLY (SQLITE_OK | (1<<8))
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __FLT64_MIN_10_EXP__ (-307)
#define SOL_SOCKET 1
#define __GLIBC_LINUX_VERSION_CODE 331776
#define __NR_mremap 216
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define SQLITE_ERROR_RETRY (SQLITE_ERROR | (2<<8))
#define SQLITE_OPEN_PRIVATECACHE 0x00040000
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SYS_add_key __NR_add_key
#define __NR_rseq 293
#define _POSIX_DELAYTIMER_MAX 32
#define SYS_lseek __NR_lseek
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define IPV6_ADDRFORM 1
#define EREMOTE 66
#define _BITS_SYSMACROS_H 1
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define SQLITE_FCNTL_WIN32_AV_RETRY 9
#define EPFNOSUPPORT 96
#define TCP_REPAIR_ON 1
#define BUS_OBJERR BUS_OBJERR
#define __NR_kexec_file_load 294
#define SEGV_MAPERR SEGV_MAPERR
#define __HAVE_FLOAT32 1
#define SYS_setfsgid __NR_setfsgid
#define _PTRDIFF_T_DECLARED 
#define SQLITE_CORRUPT 11
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define IP_PMTUDISC_PROBE 3
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __glibc_objsize(__o) __bos (__o)
#define SQLITE_FCNTL_WAL_BLOCK 24
#define TCP_NOTSENT_LOWAT 25
#define P_RWX (P_READ | P_WRITE | P_EXEC)
#define SYS_setxattr __NR_setxattr
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 0
#define TCP_KEEPIDLE 4
#define __NR_process_vm_writev 271
#define __NR_msgctl 187
#define __NR3264_truncate 45
#define _SC_2_VERSION _SC_2_VERSION
#define SYS_writev __NR_writev
#define AF_RDS PF_RDS
#define IPPROTO_AH IPPROTO_AH
#define __SIZEOF_SIZE_T__ 8
#define TTY_NAME_MAX 32
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define __HAVE_FLOAT64 1
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define SQLITE_MUTEX_STATIC_MAIN 2
#define debugger raise(SIGTRAP)
#define __NR_mprotect 226
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define SYS_name_to_handle_at __NR_name_to_handle_at
#define __NR_getpriority 141
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX (18446744073709551615UL)
#define _SC_BASE _SC_BASE
#define _PTRDIFF_T 
#define MSG_WAITFORONE MSG_WAITFORONE
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define PF_UNSPEC 0
#define UINT64_C(c) c ## UL
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define KERNEL_MM_H 
#define TCPOPT_SACK 5
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define SYS_times __NR_times
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define _GCC_WCHAR_T 
#define IPV6_UNICAST_HOPS_ 16
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define S_IWUSR __S_IWRITE
#define PF_MCTP 45
#define EKEYREVOKED 128
#define PF_X25 9
#define TRAP_TRACE_ 2
#define _IOC_SIZEMASK ((1 << _IOC_SIZEBITS)-1)
#define SYS_mq_timedreceive __NR_mq_timedreceive
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define SO_PASSSEC 34
#define SIOCATMARK 0x8905
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __NR_madvise 233
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define SQLITE_TESTCTRL_LAST 32
#define __ARM_FP16_FORMAT_IEEE 1
#define si_uid _sifields._kill.si_uid
#define __WTERMSIG(status) ((status) & 0x7f)
#define __NR_epoll_create1 20
#define _SC_PAGESIZE _SC_PAGESIZE
#define SYS_sendto __NR_sendto
#define UINT_LEAST16_MAX (65535)
#define R_OK 4
#define F_UNLCK 2
#define atomic_exchange_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_val = (VAL); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_tmp; __atomic_exchange (__atomic_exchange_ptr, &__atomic_exchange_val, &__atomic_exchange_tmp, (MO)); __atomic_exchange_tmp; })
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define RLIMIT_STACK_ 3
#define _EMSGSIZE -90
#define PF_BRIDGE 7
#define IP_PMTUDISC_DONT 0
#define DF_FLAG (1 << 10)
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define SO_TYPE_ 3
#define __NR_shutdown 210
#define F_SHLCK 8
#define TH_ACK 0x10
#define SQLITE_CHECKPOINT_FULL 1
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define INT8_MIN (-128)
#define _POSIX_SHELL 1
#define WNOHANG 1
#define SQLITE_IOERR_ROLLBACK_ATOMIC (SQLITE_IOERR | (31<<8))
#define _XOPEN_SHM 1
#define __NR_sched_getattr 275
#define RLIMIT_SIGPENDING_ 11
#define PF_IPX 4
#define SQLITE_FUNCTION 31
#define SEGV_ACCERR SEGV_ACCERR
#define SYS_quotactl_fd __NR_quotactl_fd
#define __PTRDIFF_T 
#define ENOCSI 50
#define _SC_WORD_BIT _SC_WORD_BIT
#define __pic__ 2
#define __NR_msgrcv 188
#define SQLITE_IOERR_TRUNCATE (SQLITE_IOERR | (6<<8))
#define F_GETFD 1
#define _POSIX_CLOCKRES_MIN 20000000
#define F_GETFL 3
#define __NR_open_tree 428
#define TCP_INFO_ 11
#define SQLITE_UPDATE 23
#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#define F_LOCK 1
#define _BITS_TYPES___LOCALE_T_H 1
#define PTRACE_SETOPTIONS_ 0x4200
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define __NR_fanotify_mark 263
#define IOCSIZE_SHIFT (_IOC_SIZESHIFT)
#define TCP_SAVE_SYN 27
#define __NR_pselect6 72
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define _POSIX_SOURCE 1
#define _VA_LIST 
#define IPPROTO_MH IPPROTO_MH
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define _STDDEF_H_ 
#define IN_CLASSA_NSHIFT 24
#define _ESOCKTNOSUPPORT -94
#define SYS_landlock_create_ruleset __NR_landlock_create_ruleset
#define SQLITE_STATUS_MALLOC_SIZE 5
#define SQLITE_FCNTL_ZIPVFS 25
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define SQLITE_CONSTRAINT_UNIQUE (SQLITE_CONSTRAINT | (8<<8))
#define SYS_set_mempolicy __NR_set_mempolicy
#define SQLITE_IOERR_SHMLOCK (SQLITE_IOERR | (20<<8))
#define __WCOREFLAG 0x80
#define TCP_MD5SIG_MAXKEYLEN 80
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define RNDGETPOOL _IOR( 'R', 0x02, int [2] )
#define __O_DIRECTORY 040000
#define htobe32(x) __bswap_32 (x)
#define __S_ISUID 04000
#define IPV6_MULTICAST_IF 17
#define _ENOTCONN -107
#define ITIMER_VIRTUAL_ 1
#define SYS_fsetxattr __NR_fsetxattr
#define __restrict_arr __restrict
#define __INT_FAST8_WIDTH__ 8
#define SYS_set_tid_address __NR_set_tid_address
#define IP_HDRINCL_ 3
#define _POSIX_SYMLOOP_MAX 8
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define _ESTALE -116
#define F_SETLKW64 7
#define LOG_HANDLER_DPRINTF 1
#define SIGTRAP 5
#define EISDIR 21
#define __nonnull(params) __attribute_nonnull__ (params)
#define SQLITE_PERM 3
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _BITS_STRUCT_STAT_H 1
#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2
#define SQLITE_DBCONFIG_LEGACY_ALTER_TABLE 1012
#define SYS_setdomainname __NR_setdomainname
#define SQLITE_IOERR_DIR_CLOSE (SQLITE_IOERR | (17<<8))
#define O_DSYNC __O_DSYNC
#define __NR_acct 89
#define SOL_SOCKET_ 1
#define __NR_mbind 235
#define INT_LEAST8_MAX (127)
#define __aarch64__ 1
#define LOCK_DEBUG 0
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __CFLOAT64X _Complex _Float64x
#define TCPOPT_EOL 0
#define __CFLOAT32X _Complex _Float32x
#define AF_KCM PF_KCM
#define __NR_fchdir 50
#define IPPROTO_TP IPPROTO_TP
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define atomic_fetch_and(PTR,VAL) __atomic_fetch_and ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define SIGPWR_ 30
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define SO_PROTOCOL 38
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define si_pkey _sifields._sigfault._bounds._pkey
#define __FLT64X_DECIMAL_DIG__ 36
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define IP_BIND_ADDRESS_NO_PORT 24
#define __NR_mlock 228
#define __NR_unshare 97
#define _EPROTONOSUPPORT -93
#define __NR_umask 166
#define SQLITE_NOTADB 26
#define __DBL_HAS_DENORM__ 1
#define __NR_sched_getparam 121
#define INT_LEAST32_MAX (2147483647)
#define __NR_timer_gettime 108
#define SQLITE_TESTCTRL_PRNG_SEED 28
#define FPE_FLTSUB FPE_FLTSUB
#define DEBUG_verbose DEBUG_all
#define LOGIN_NAME_MAX 256
#define SQLITE_TESTCTRL_PRNG_RESTORE 6
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define SQLITE_SHM_SHARED 4
#define __attribute_pure__ __attribute__ ((__pure__))
#define _EINTR -4
#define list_next_entry(item,member) list_entry((item)->member.next, typeof(*(item)), member)
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define SQLITE_INTERNAL 2
#define __NR_pwrite64 68
#define SIGALRM_ 14
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define PF_XDP 44
#define __NO_INLINE__ 1
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13
#define __NR_io_submit 2
#define MSG_RST MSG_RST
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT64X_IS_IEC_60559__ 2
#define MSG_OOB_ 0x1
#define SQLITE_IOERR_LOCK (SQLITE_IOERR | (15<<8))
#define SYS_mkdirat __NR_mkdirat
#define CLOCK_BOOTTIME_ALARM 9
#define SQLITE_CREATE_TRIGGER 7
#define SQLITE_LIMIT_TRIGGER_DEPTH 10
#define _SYSCALL_H 1
#define CMSG_LEN_(cmsg) (((cmsg)->len + sizeof(dword_t) - 1) & ~(dword_t)(sizeof(dword_t) - 1))
#define MAX_CANON 255
#define INT_LEAST8_MIN (-128)
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define P_SHARED (1 << 7)
#define errno (*__errno_location ())
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define TCPOLEN_WINDOW 3
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define FS_SOCKRESTART_H 
#define _PTRDIFF_T_ 
#define AF_LOCAL_ PF_LOCAL_
#define SQLITE_IOCAP_ATOMIC16K 0x00000040
#define SO_KEEPALIVE 9
#define write_wrlock(lock) __write_wrlock(lock, __FILE__, __LINE__)
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define __SVE_VQ_MIN 1
#define SYS_setgroups __NR_setgroups
#define SQLITE_DESERIALIZE_FREEONCLOSE 1
#define SIG_BLOCK_ 0
#define __stub___compat_bdflush 
#define _EPERM -1
#define SYS_membarrier __NR_membarrier
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __GXX_ABI_VERSION 1016
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define va_start(v,l) __builtin_va_start(v,l)
#define SYS_timerfd_gettime __NR_timerfd_gettime
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define _IOWR_BAD(type,nr,size) _IOC(_IOC_READ|_IOC_WRITE,(type),(nr),sizeof(size))
#define SQLITE_CANTOPEN_CONVPATH (SQLITE_CANTOPEN | (4<<8))
#define __UQUAD_TYPE unsigned long int
#define __NR_dup3 24
#define __SC_3264(_nr,_32,_64) __SYSCALL(_nr, _64)
#define st_mtime st_mtim.tv_sec
#define __ULONG32_TYPE unsigned int
#define __STRING(x) #x
#define SQLITE_INDEX_CONSTRAINT_FUNCTION 150
#define SQLITE_SCANSTAT_EXPLAIN 4
#define __F_GETOWN 9
#define SIGVTALRM 26
#define _IOC_TYPESHIFT (_IOC_NRSHIFT+_IOC_NRBITS)
#define O_NOCTTY_ (1 << 8)
#define __NR_munlockall 231
#define __NR_getitimer 102
#define SYS_sched_yield __NR_sched_yield
#define SYS_tee __NR_tee
#define _ENOLINK -67
#define __INO_T_TYPE __ULONGWORD_TYPE
#define user_get_task(task,addr,var) user_read_task(task, addr, &(var), sizeof(var))
#define SQLITE_STMTSTATUS_MEMUSED 99
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define __F_SETOWN_EX 15
#define F_ULOCK 0
#define SI_ASYNCIO SI_ASYNCIO
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define __struct_tm_defined 1
#define _SC_TRACE _SC_TRACE
#define __LDBL_DECIMAL_DIG__ 36
#define __ssize_t_defined 
#define EBADFD 77
#define SYS_mlock __NR_mlock
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define _SC_FSYNC _SC_FSYNC
#define SYS_umask __NR_umask
#define TCP_FASTOPEN_NO_COOKIE 34
#define __NR_pread64 67
#define FPE_INTOVF FPE_INTOVF
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SQLITE_LIMIT_FUNCTION_ARG 6
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define EXFULL 54
#define SQLITE_CREATE_TEMP_TRIGGER 5
#define LOCK_UN_ 8
#define _ESTRPIPE -86
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define _ENOSR -63
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define __NR_accept4 242
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define MEM_READ 0
#define IPV6_MULTICAST_HOPS 18
#define SQLITE_TXN_WRITE 2
#define SQLITE_TXN_READ 1
#define SOL_BLUETOOTH 274
#define __NR_execve 221
#define IPV6_TRANSPARENT 75
#define TCP_COOKIE_PAIR_SIZE (2*TCP_COOKIE_MAX)
#define SQLITE_DELETE 9
#define TCP_MSS_DESIRED 1220U
#define SQLITE_ANALYZE 28
#define AT_FDCWD -100
#define _SYS_SIZE_T_H 
#define SQLITE_OPEN_MAIN_DB 0x00000100
#define INT32_MAX (2147483647)
#define __NR_sync_file_range 84
#define FIOCLEX_ 0x5451
#define SQLITE_COPY 0
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define SQLITE_OPEN_READONLY 0x00000001
#define __NR_splice 76
#define __NR_getpid 172
#define __glibc_macro_warning1(message) _Pragma (#message)
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define __STDC_IEC_559_COMPLEX__ 1
#define RUSAGE_CHILDREN_ -1
#define TCP_USER_TIMEOUT 18
#define SQLITE_PROTOCOL 15
#define __NR3264_lseek 62
#define RLIMIT_NPROC_ 6
#define SO_INCOMING_CPU 49
#define SYS_mmap __NR_mmap
#define LIST_INITIALIZER(x) {.prev = &x, .next = &x}
#define __FLT128_DIG__ 33
#define SIGWINCH_ 28
#define __SCHAR_WIDTH__ 8
#define __NR_open_by_handle_at 265
#define TH_PUSH 0x08
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
#define IP_ADD_MEMBERSHIP 35
#define __FLT32_MAX_10_EXP__ 38
#define TCP_DEFER_ACCEPT_ 9
#define TCPOPT_TIMESTAMP 8
#define DT_CHR DT_CHR
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define ENOKEY 126
#define UTIME_OMIT ((1l << 30) - 2l)
#define MINSIGSTKSZ_ 2048
#define SQLITE_IOCAP_BATCH_ATOMIC 0x00004000
#define MS_NOSUID_ (1 << 1)
#define SYS_renameat2 __NR_renameat2
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define S_IWGRP (S_IWUSR >> 3)
#define SIG_DFL ((__sighandler_t) 0)
#define _ENONET -64
#define __NR_mincore 232
#define SIG_ATOMIC_MIN (-2147483647-1)
#define F_OK 0
#define _PC_PATH_MAX _PC_PATH_MAX
#define SQLITE_BUSY_TIMEOUT (SQLITE_BUSY | (3<<8))
#define SQLITE_TESTCTRL_PENDING_BYTE 11
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#define __NR_getdents64 61
#define _POSIX_MAX_INPUT 255
#define IPV6_RECVDSTOPTS 58
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define _PC_LINK_MAX _PC_LINK_MAX
#define ESHUTDOWN 108
#define INT32_MIN (-2147483647-1)
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define SO_SNDTIMEO_NEW 67
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define __NR_rt_sigreturn 139
#define SYS_unshare __NR_unshare
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define SYS_getxattr __NR_getxattr
#define typecheck(type,x) ({type _x = x; x;})
#define atomic_exchange(PTR,VAL) atomic_exchange_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define F_SETOWN __F_SETOWN
#define SQLITE_TESTCTRL_FIRST 5
#define XATTR_LIST_MAX 65536
#define _ECOMM -70
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define _ENOTUNIQ -76
#define SQLITE_CANTOPEN_ISDIR (SQLITE_CANTOPEN | (2<<8))
#define __FLT64X_DIG__ 33
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define TCP_S_DATA_IN (1 << 2)
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define __INT8_TYPE__ signed char
#define F_SETLK64 6
#define __NR_setfsgid 152
#define SQLITE_OPEN_TEMP_JOURNAL 0x00001000
#define SQLITE_OPEN_NOMUTEX 0x00008000
#define SQLITE_DROP_TEMP_VIEW 15
#define __FLT32X_MIN_EXP__ (-1021)
#define __ELF__ 1
#define SIGTRAP_ 5
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define _ECANCELED -125
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define ELIBSCN 81
#define F_TLOCK 2
#define SYS_shutdown __NR_shutdown
#define TCP_MD5SIG_FLAG_PREFIX 1
#define SQLITE_IOERR_DIR_FSYNC (SQLITE_IOERR | (5<<8))
#define SYS_shmget __NR_shmget
#define SOL_RAW 255
#define SQLITE_DBCONFIG_LOOKASIDE 1001
#define __FLT_RADIX__ 2
#define SO_REUSEPORT 15
#define SQLITE_CONFIG_SORTERREF_SIZE 28
#define _BITS_TIME64_H 1
#define TCP_SYNCNT 7
#define LIST_H 
#define __ARM_PCS_AAPCS64 1
#define lock(lock) __lock(lock, __FILE__, __LINE__)
#define _IOWR(type,nr,size) _IOC(_IOC_READ|_IOC_WRITE,(type),(nr),(_IOC_TYPECHECK(size)))
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define _POSIX_ARG_MAX 4096
#define __NR_clock_settime 112
#define BUS_ADRALN BUS_ADRALN
#define AF_ATMSVC PF_ATMSVC
#define atomic_compare_exchange_weak(PTR,VAL,DES) atomic_compare_exchange_weak_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __NR_openat2 437
#define _SETJMP_H 1
#define SO_BROADCAST_ 6
#define SOL_RDS 276
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#define CLOCK_MONOTONIC_RAW 4
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define MSG_TRUNC MSG_TRUNC
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define str(x) _str(x)
#define SYS_faccessat __NR_faccessat
#define SO_PREFER_BUSY_POLL 69
#define SYS_process_mrelease __NR_process_mrelease
#define SYS_perf_event_open __NR_perf_event_open
#define _BITS_SIGSTACK_H 1
#define _POSIX_TIMEOUTS 200809L
#define FS_FAKEFS_API_H 
#define SYS_syncfs __NR_syncfs
#define EOVERFLOW 75
#define SQLITE_CONSTRAINT_NOTNULL (SQLITE_CONSTRAINT | (5<<8))
#define S_IRUSR __S_IREAD
#define SYS_setsid __NR_setsid
#define SIGPIPE 13
#define AF_PPPOX PF_PPPOX
#define AF_PACKET PF_PACKET
#define LOCK_SH_ 1
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define SYS_exit_group __NR_exit_group
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define __SIZEOF_PTHREAD_COND_T 48
#define SQLITE_DESERIALIZE_READONLY 4
#define SEEK_SET 0
#define SQLITE_INDEX_CONSTRAINT_ISNULL 71
#define __NR_getsockopt 209
#define SQLITE_CANTOPEN_DIRTYWAL (SQLITE_CANTOPEN | (5<<8))
#define AF_IEEE802154 PF_IEEE802154
#define SEGV_ACCERR_ 2
#define SQLITE_FCNTL_CKPT_DONE 37
#define __NR_epoll_pwait2 441
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define MEM_WRITE 1
#define SYS_SOCK_H 
#define LSEEK_SET 0
#define __FLT32X_MANT_DIG__ 53
#define SYS_capget __NR_capget
#define CLOCK_TAI 11
#define SQLITE_DBSTATUS_CACHE_WRITE 9
#define P_GROWSDOWN (1 << 3)
#define EUCLEAN 117
#define PF_TIPC 30
#define _POSIX_IPV6 200809L
#define SQLITE_WIN32_DATA_DIRECTORY_TYPE 1
#define SYS_listxattr __NR_listxattr
#define IP_MSFILTER 41
#define _SIGNAL_H 
#define TCP_MD5SIG_EXT 32
#define __NR_linkat 37
#define SYS_getpid __NR_getpid
#define SYS_fadvise64 __NR_fadvise64
#define IP_BLOCK_SOURCE 38
#define __S_IEXEC 0100
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define W_OK 2
#define _EBADMSG -74
#define _SIZE_T_ 
#define __FLT16_IS_IEC_60559__ 2
#define SYS_fstat __NR_fstat
#define __FLT16_MAX_EXP__ 16
#define UINT_FAST32_MAX (18446744073709551615UL)
#define O_CREAT 0100
#define __S_IWRITE 0200
#define _WCHAR_T_H 
#define SYS_setrlimit __NR_setrlimit
#define IP_RETOPTS 7
#define EPROTO 71
#define ENODEV 19
#define POLL_OUT POLL_OUT
#define SYS_setregid __NR_setregid
#define __stub_revoke 
#define _POSIX_CHOWN_RESTRICTED 0
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define __stub___compat_create_module 
#define SQLITE_PREPARE_PERSISTENT 0x01
#define _POSIX_MONOTONIC_CLOCK 0
#define EKEYEXPIRED 127
#define __NR_pkey_alloc 289
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define SQLITE_CONSTRAINT_CHECK (SQLITE_CONSTRAINT | (1<<8))
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define SYS_userfaultfd __NR_userfaultfd
#define SYS_personality __NR_personality
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define FIONBIO_ 0x5421
#define __UINT_LEAST64_TYPE__ long unsigned int
#define PROC_CHILDREN(...) { .count = sizeof((struct proc_dir_entry[])__VA_ARGS__) / sizeof(struct proc_dir_entry), .entries = __VA_ARGS__ }
#define PTRACE_SETREGS_ 13
#define MINSIGSTKSZ 5120
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define DT_REG DT_REG
#define __U64_TYPE unsigned long int
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 6
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define _POSIX_TRACE_INHERIT -1
#define SQLITE_DBSTATUS_MAX 12
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define SIGSYS_ 31
#define PF_IEEE802154 36
#define SYS_getegid __NR_getegid
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define PF_LOCAL_ 1
#define DT_BLK DT_BLK
#define IP_MULTICAST_TTL 33
#define _PC_SYNC_IO _PC_SYNC_IO
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define EHWPOISON 133
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define __FLT_HAS_INFINITY__ 1
#define SO_SNDBUF 7
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define _BSD_PTRDIFF_T_ 
#define __NR_sched_setscheduler 119
#define SIGXFSZ 25
#define MCAST_JOIN_SOURCE_GROUP 46
#define SIGHUP 1
#define SQLITE_NOLFS 22
#define SQLITE_CONSTRAINT_PRIMARYKEY (SQLITE_CONSTRAINT | (6<<8))
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define SQLITE_IOERR_FSYNC (SQLITE_IOERR | (4<<8))
#define SYS_ioctl __NR_ioctl
#define __ARCH_WANT_MEMFD_SECRET 
#define __INT_FAST32_WIDTH__ 64
#define SQLITE_SHM_EXCLUSIVE 8
#define NULL ((void *)0)
#define SQLITE_DBSTATUS_LOOKASIDE_USED 0
#define AF_IRDA PF_IRDA
#define SQLITE_TESTCTRL_ONCE_RESET_THRESHOLD 19
#define AT_SYMLINK_NOFOLLOW 0x100
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define SIGPROF_ 27
#define PF_PPPOX 24
#define _BITS_ERRNO_H 1
#define __NR_symlinkat 36
#define __no_instrument_msan 
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define O_ASYNC 020000
#define __WINT_WIDTH__ 32
#define SQLITE_IOERR_BEGIN_ATOMIC (SQLITE_IOERR | (29<<8))
#define SO_TIMESTAMPNS_NEW 64
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define SQLITE_IOCAP_ATOMIC 0x00000001
#define IPV6_XFRM_POLICY 35
#define SQLITE_READONLY_CANTLOCK (SQLITE_READONLY | (2<<8))
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define SA_NODEFER_ 0x40000000
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define NOT_WITHIN 0
#define SYS_quotactl __NR_quotactl
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define EL3RST 47
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define PF_QIPCRTR 42
#define SQLITE_TESTCTRL_RESERVE 14
#define SQLITE_INDEX_CONSTRAINT_REGEXP 67
#define SQLITE_OPEN_AUTOPROXY 0x00000020
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define SI_TKILL SI_TKILL
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define SOL_KCM 281
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define _ETIMEDOUT -110
#define _ENOEXEC -8
#define SYS_mknodat __NR_mknodat
#define SIGVTALRM_ 26
#define SQLITE_STATUS_MALLOC_COUNT 9
#define __STDC_VERSION__ 201112L
#define SYS_ERRNO_H 
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define SYS_utimensat __NR_utimensat
#define _ENOTNAM -118
#define ENOTDIR 20
#define SO_DEBUG 1
#define SYS_madvise __NR_madvise
#define TIMER_ABSTIME 1
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define __ARM_ARCH 8
#define UINTMAX_C(c) c ## UL
#define SCM_RIGHTS_ 1
#define __PMT(args) args
#define FS_FIX_PATH_H 
#define AF_SMC PF_SMC
#define AF_NETBEUI PF_NETBEUI
#define IPV6_2292RTHDR 5
#define ECONNRESET 104
#define SYS_io_uring_setup __NR_io_uring_setup
#define SQLITE_TESTCTRL_SCRATCHMALLOC 17
#define atomic_fetch_add(PTR,VAL) __atomic_fetch_add ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define _LINUX_LIMITS_H 
#define AF_SNA PF_SNA
#define SIGSTOP 19
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define ENXIO 6
#define CLOCK_MONOTONIC 1
#define TCP_COOKIE_IN_ALWAYS (1 << 0)
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define SYS_io_setup __NR_io_setup
#define TRACE(msg,...) TRACE_(DEFAULT_CHANNEL, msg, ##__VA_ARGS__)
#define _ENOSPC -28
#define EBADRQC 56
#define SQLITE_CONFIG_LOOKASIDE 13
#define SQLITE_IOERR_WRITE (SQLITE_IOERR | (3<<8))
#define user_put_task(task,addr,var) user_write_task(task, addr, &(var), sizeof(var))
#define SQLITE_CREATE_TEMP_VIEW 6
#define L_XTND SEEK_END
#define MCAST_JOIN_GROUP 42
#define INET6_ADDRSTRLEN 46
#define noreturn _Noreturn
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define __KEY_T_TYPE __S32_TYPE
#define __SVE_VQ_MAX 512
#define FAPPEND O_APPEND
#define _SC_2_C_BIND _SC_2_C_BIND
#define __F_SETSIG 10
#define SO_SNDBUF_ 7
#define PF_CAN 29
#define SQLITE_OPEN_READWRITE 0x00000002
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define __stub___compat_get_kernel_syms 
#define IPV6_RECVFRAGSIZE 77
#define FS_STAT_H 
#define SQLITE_FCNTL_JOURNAL_POINTER 28
#define atomic_fetch_sub(PTR,VAL) __atomic_fetch_sub ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define SYS_move_mount __NR_move_mount
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 0x00000800
#define __NR_quotactl_fd 443
#define SYS_landlock_add_rule __NR_landlock_add_rule
#define __FLT64_HAS_INFINITY__ 1
#define SQLITE_TRANSACTION 22
#define false 0
#define IPV6_JOIN_GROUP 20
#define POLL_HUP POLL_HUP
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3
#define WSTOPPED 2
#define IP_TOS_ 1
#define _XOPEN_REALTIME 1
#define SQLITE_FCNTL_MMAP_SIZE 18
#define assert(expr) ((void) sizeof ((expr) ? 1 : 0), __extension__ ({ if (expr) ; else __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION); }))
#define __NR_get_mempolicy 236
#define SYS_msgget __NR_msgget
#define FILENAME_MAX 4096
#define SOL_RXRPC 272
#define __nlink_t_defined 
#define SQLITE_MUTEX_STATIC_PMEM 7
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define SYS_seccomp __NR_seccomp
#define IPPROTO_RAW IPPROTO_RAW
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define __CLOCKID_T_TYPE __S32_TYPE
#define SYS_semtimedop __NR_semtimedop
#define SYS_migrate_pages __NR_migrate_pages
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define SQLITE_FCNTL_EXTERNAL_READER 40
#define MS_NODEV_ (1 << 2)
#define list_for_each_safe(list,item,tmp) for (item = (list)->next, tmp = item->next; item != (list); item = tmp, tmp = item->next)
#define __NR_writev 66
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define SQLITE_MUTEX_STATIC_LRU2 7
#define _POSIX_MEMLOCK_RANGE 200809L
#define SYS_exit __NR_exit
#define IPPROTO_ICMP IPPROTO_ICMP
#define ELIBEXEC 83
#define __NR_io_cancel 3
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __NR_msgsnd 189
#define _POSIX_MQ_OPEN_MAX 8
#define __INT_FAST64_WIDTH__ 64
#define TRACE__(msg,...) printk(msg, ##__VA_ARGS__)
#define SQLITE_UTF8 1
#define TCP_NODELAY_ 1
#define __NR_setitimer 103
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define SYS_fstatfs __NR_fstatfs
#define __BYTE_ORDER __LITTLE_ENDIAN
#define RUSAGE_SELF_ 0
#define __HAVE_GENERIC_SELECTION 1
#define SQLITE_TESTCTRL_BITVEC_TEST 8
#define _EINVAL -22
#define _EADDRINUSE -98
#define EADDRNOTAVAIL 99
#define ETIME 62
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define SYS_pidfd_send_signal __NR_pidfd_send_signal
#define SQLITE_TESTCTRL_EXPLAIN_STMT 19
#define SYS_umount2 __NR_umount2
#define __FLT_DIG__ 6
#define __NR_timer_create 107
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define INT_FAST32_MAX (9223372036854775807L)
#define SQLITE_IOCAP_IMMUTABLE 0x00002000
#define SYS_process_vm_writev __NR_process_vm_writev
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define __UINT_FAST64_TYPE__ long unsigned int
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define __NR_settimeofday 170
#define SYS_sigaltstack __NR_sigaltstack
#define __NR_fsetxattr 7
#define __LDBL_REDIR_DECL(name) 
#define UINT_FAST8_MAX (255)
#define SIG_SETMASK_ 2
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define _POSIX_ADVISORY_INFO 200809L
#define __NR_lookup_dcookie 18
#define S_IWOTH (S_IWGRP >> 3)
#define __NR_newfstatat __NR3264_fstatat
#define si_band _sifields._sigpoll.si_band
#define UINT8_MAX (255)
#define __ASM_GENERIC_SOCKET_H 
#define SOL_IUCV 277
#define _BITS_SIGACTION_H 1
#define IPV6_RTHDR 57
#define STDIN_FILENO 0
#define SI_ASYNCNL SI_ASYNCNL
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define _T_SIZE_ 
#define __CPU_SETSIZE 1024
#define ENOTRECOVERABLE 131
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define atomic_fetch_xor(PTR,VAL) __atomic_fetch_xor ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __WNOTHREAD 0x20000000
#define _EALREADY -114
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define AF_LLC PF_LLC
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define __INT64_TYPE__ long int
#define EIO 5
#define CLOCK_PROCESS_CPUTIME_ID 2
#define ITIMER_REAL ITIMER_REAL
#define SQLITE_CONSTRAINT_DATATYPE (SQLITE_CONSTRAINT |(12<<8))
#define ENETUNREACH 101
#define EXDEV 18
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define IP_ORIGDSTADDR 20
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define S_IRGRP (S_IRUSR >> 3)
#define SYS_preadv2 __NR_preadv2
#define UINT32_C(c) c ## U
#define _POSIX_SYMLINK_MAX 255
#define SQLITE_OPEN_FULLMUTEX 0x00010000
#define TRACE_strace TRACE__NOP
#define SQLITE_VERSION "3.37.2"
#define SQLITE_INDEX_CONSTRAINT_NE 68
#define PF_PACKET 17
#define MSG_SYN MSG_SYN
#define __INO64_T_TYPE __UQUAD_TYPE
#define _POSIX_V6_ILP32_OFF32 -1
#define SF_FLAG (1 << 7)
#define __NR_pwritev2 287
#define __NR_chdir 49
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define SYS_kill __NR_kill
#define SQLITE_LIMIT_VARIABLE_NUMBER 9
#define _POSIX_TRACE -1
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __WINT_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define STDOUT_FILENO 1
#define SEM_VALUE_MAX (2147483647)
#define __intptr_t_defined 
#define SQLITE_API 
#define SOL_PACKET 263
#define SQLITE_SCANSTAT_NLOOP 0
#define SYS_fgetxattr __NR_fgetxattr
#define user_get(addr,var) user_read(addr, &(var), sizeof(var))
#define P_READ (1 << 0)
#define _BITS_STDINT_UINTN_H 1
#define __NR_move_mount 429
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define EREMOTEIO 121
#define PF_NETBEUI 13
#define ENOSPC 28
#define SI_QUEUE SI_QUEUE
#define AF (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af)
#define ENOEXEC 8
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define SQLITE_DROP_TEMP_TRIGGER 14
#define SYS_setresuid __NR_setresuid
#define EOF (-1)
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __USE_POSIX199309 1
#define SO_RCVBUF 8
#define SYS_finit_module __NR_finit_module
#define TCP_TIMESTAMP 24
#define __INT_LEAST32_TYPE__ int
#define __NR_uname 160
#define SIGTSTP 20
#define __SIZEOF_INT128__ 16
#define CF (cpu->cf)
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define SQLITE_STMTSTATUS_AUTOINDEX 3
#define _EBFONT -59
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define TCP_MAXWIN 65535
#define _POSIX_SIGQUEUE_MAX 32
#define __LDBL_MAX_10_EXP__ 4932
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define _POSIX_SEMAPHORES 200809L
#define SQLITE_OK_SYMLINK (SQLITE_OK | (2<<8))
#define __ATOMIC_RELAXED 0
#define glue3(a,b,c) glue(a, glue(b, c))
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define SA_ONESHOT SA_RESETHAND
#define SCM_TIMESTAMPING_OPT_STATS 54
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define le16toh(x) __uint16_identity (x)
#define EDOM 33
#define XATTR_NAME_MAX 255
#define ENOSTR 60
#define __NR_rt_sigsuspend 133
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define SIOCSPGRP 0x8902
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define __NR_brk 214
#define _POSIX_JOB_CONTROL 1
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define SIGKILL 9
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define SOL_CAIF 278
#define ECHRNG 44
#define _SC_REGEXP _SC_REGEXP
#define __wchar_t__ 
#define SQLITE_AUTH_USER (SQLITE_AUTH | (1<<8))
#define SEEK_END 2
#define __ARCH_WANT_NEW_STAT 
#define COND_INITIALIZER ((cond_t) {PTHREAD_COND_INITIALIZER})
#define SYS_openat __NR_openat
#define ENOLCK 37
#define ENFILE 23
#define SYS_pkey_free __NR_pkey_free
#define SQLITE_FCNTL_RBU 26
#define MSG_DONTWAIT MSG_DONTWAIT
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define SQLITE_DESERIALIZE_RESIZEABLE 2
#define _XOPEN_UNIX 1
#define SQLITE_OPEN_EXCLUSIVE 0x00000010
#define be64toh(x) __bswap_64 (x)
#define _IOC_SIZEBITS 14
#define ENOSYS 38
#define __NR_sendto 206
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define SA_RESTART 0x10000000
#define SIGURG_ 23
#define CLOCK_REALTIME_COARSE_ 5
#define DT_DIR DT_DIR
#define PAGE_BITS 12
#define SYS_munmap __NR_munmap
#define PF_LOCAL 1
#define __INT_FAST8_TYPE__ signed char
#define SQLITE_FCNTL_HAS_MOVED 20
#define TCP_INFO 11
#define PF_RDS 21
#define EHOSTDOWN 112
#define PTRACE_POKETEXT_ 4
#define SYS_io_getevents __NR_io_getevents
#define va_arg(v,l) __builtin_va_arg(v,l)
#define PF_RES (1 << 0)
#define SQLITE_SCANSTAT_EST 2
#define __NR_execveat 281
#define SYS_fsync __NR_fsync
#define __NR_fstat __NR3264_fstat
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define __NR_io_uring_setup 425
#define _THREAD_SHARED_TYPES_H 1
#define ITIMER_PROF_ 2
#define AT_REMOVEDIR 0x200
#define __f128(x) x ##f128
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define _SC_TIMERS _SC_TIMERS
#define _BITS_FLOATN_H 
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define SYS_execve __NR_execve
#define __NR_add_key 217
#define __NR_inotify_rm_watch 28
#define LOCK_EX_ 2
#define PTRACE_GETREGS_ 12
#define __HAVE_DISTINCT_FLOAT32 0
#define ENOTSUP EOPNOTSUPP
#define SQLITE_FCNTL_SYNC_OMITTED 8
#define SYS_sched_getparam __NR_sched_getparam
#define IP_CHECKSUM 23
#define SQLITE_IOCAP_SEQUENTIAL 0x00000400
#define __FP_FAST_FMAF32x 1
#define _BITS_SIGTHREAD_H 1
#define SQLITE_TESTCTRL_ASSERT 12
#define __FLT16_HAS_DENORM__ 1
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define AF_NETLINK PF_NETLINK
#define OF (cpu->of)
#define EDEADLOCK EDEADLK
#define CLD_DUMPED CLD_DUMPED
#define _BITS_UINTN_IDENTITY_H 1
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define SYS_uname __NR_uname
#define TCP_QUEUE_SEQ 21
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5
#define PF (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf)
#define FIXME(msg,...) printk("FIXME " msg "\n", ##__VA_ARGS__)
#define SQLITE_IOERR_DELETE (SQLITE_IOERR | (10<<8))
#define UTIL_DEBUG_H 
#define SQLITE_ROW 100
#define kill_dependency(Y) __extension__ ({ __auto_type __kill_dependency_tmp = (Y); __kill_dependency_tmp; })
#define FOPEN_MAX 16
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __NR_timer_getoverrun 109
#define __suseconds_t_defined 
#define SQLITE_OK 0
#define SQLITE_TESTCTRL_RESULT_INTREAL 27
#define SIGFPE 8
#define SYS_renameat __NR_renameat
#define SQLITE_UTF16 4
#define __NR_fchownat 54
#define __off_t_defined 
#define SO_CNX_ADVICE 53
#define TCP_MSS 512
#define SYS_kexec_load __NR_kexec_load
#define SQLITE_STMTSTATUS_RUN 6
#define SO_NOFCS 43
#define SIGSTOP_ 19
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define unix 1
#define SIGPWR 30
#define _BITS_TYPESIZES_H 1
#define __NR_gettimeofday 169
#define posit assert
#define SF (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf)
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define _GCC_SIZE_T 
#define SQLITE3_H 
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define __NR_landlock_restrict_self 446
#define SYS_prlimit64 __NR_prlimit64
#define __NR_pkey_mprotect 288
#define __W_CONTINUED 0xffff
#define L_SET SEEK_SET
#define SO_PEERGROUPS 59
#define SO_SNDTIMEO_OLD 21
#define has_attribute __has_attribute
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _POSIX_V6_ILP32_OFFBIG -1
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define _SYS_SELECT_H 1
#define __NR3264_mmap 222
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __NR_eventfd2 19
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define SIOCGSTAMPNS_OLD 0x8907
#define RLIMIT_NICE_ 13
#define IP_MINTTL 21
#define __TIME64_T_TYPE __TIME_T_TYPE
#define PTRACE_PEEKDATA_ 2
#define __POSIX_FADV_DONTNEED 4
#define SYS_munlockall __NR_munlockall
#define __ONCE_FLAG_INIT { 0 }
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define SO_TIMESTAMP_NEW 63
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define sigcontext_struct sigcontext
#define AF_DECnet PF_DECnet
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define __LONG_WIDTH__ 64
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define SIG_ERR ((__sighandler_t) -1)
#define __S_IFIFO 0010000
#define SYS_pwrite64 __NR_pwrite64
#define SQLITE_DBCONFIG_TRIGGER_EQP 1008
#define __INO_T_MATCHES_INO64_T 1
#define __POSIX_FADV_NOREUSE 5
#define SQLITE_OPEN_TRANSIENT_DB 0x00000400
#define SOCK_STREAM_ 1
#define ENOPROTOOPT 92
#define SQLITE_CONFIG_SMALL_MALLOC 27
#define MMAP_FIXED 0x10
#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003
#define atomic_compare_exchange_weak_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 1, (SUC), (FAIL)); })
#define SO_ATTACH_BPF 50
#define __GLIBC_USE_IEC_60559_EXT 0
#define LSEEK_CUR 1
#define __HAVE_FLOAT128 1
#define UINT_LEAST32_MAX (4294967295U)
#define EMFILE 24
#define __NR_preadv 69
#define _ENAVAIL -119
#define SO_BUSY_POLL_BUDGET 70
#define atomic_fetch_add_explicit(PTR,VAL,MO) __atomic_fetch_add ((PTR), (VAL), (MO))
#define __NR_listen 201
#define SA_NODEFER 0x40000000
#define __lldiv_t_defined 1
#define POLL_PRI POLL_PRI
#define SYS_truncate __NR_truncate
#define SYS_syslog __NR_syslog
#define SIGILL 4
#define SYS_timer_gettime __NR_timer_gettime
#define __NR_memfd_create 279
#define MSG_EOR MSG_EOR
#define MSG_MORE MSG_MORE
#define MAX_PID (1 << 15)
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define _ASSERT_H 1
#define ENOBUFS 105
#define MAX_PATH 4096
#define __time_t_defined 1
#define _SYS_SYSMACROS_H 1
#define RLIMIT_CPU_ 0
#define _SC_INT_MIN _SC_INT_MIN
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IN_MULTICAST(a) IN_CLASSD(a)
#define SQLITE_DBSTATUS_SCHEMA_USED 2
#define ERRNO_DIE(msg) { perror(msg); abort(); }
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define __NR_preadv2 286
#define __NR_ptrace 117
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define __NR_llistxattr 12
#define EFAULT 14
#define SYS_init_module __NR_init_module
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define __SC_COMP_3264(_nr,_32,_64,_comp) __SC_3264(_nr, _32, _64)
#define PF_KCM 41
#define SQLITE_SYSAPI 
#define SQLITE_DBCONFIG_ENABLE_VIEW 1015
#define SIGIOT SIGABRT
#define SYS_getcpu __NR_getcpu
#define SIGIO_ 29
#define EWOULDBLOCK EAGAIN
#define S_IRWXG (S_IRWXU >> 3)
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define SIGBUS_ 7
#define S_IXGRP (S_IXUSR >> 3)
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8
#define SIGFPE_ 8
#define SQLITE_SUBTYPE 0x000100000
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define SQLITE_SELECT 21
#define sigev_notify_function _sigev_un._sigev_thread._function
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define PF_KEY 15
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define TCPI_OPT_WSCALE 4
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define atomic_load(PTR) atomic_load_explicit (PTR, __ATOMIC_SEQ_CST)
#define INTMAX_C(c) c ## L
#define SQLITE_FCNTL_OVERWRITE 11
#define ILL_PRVOPC ILL_PRVOPC
#define TCPOPT_NOP 1
#define SYS_accept4 __NR_accept4
#define POSIX_FADV_RANDOM 1
#define _E2BIG -7
#define SQLITE_LIMIT_VDBE_OP 5
#define _STDINT_H 1
#define PAGE_SIZE (1 << PAGE_BITS)
#define FPE_FLTUNK FPE_FLTUNK
#define __FILE_defined 1
#define IN_CLASSC_NSHIFT 8
#define SQLITE_IOERR_VNODE (SQLITE_IOERR | (27<<8))
#define _POSIX_HOST_NAME_MAX 255
#define TCP_REPAIR_WINDOW 29
#define S_ISUID __S_ISUID
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define DEBUG_instr DEBUG_all
#define POLL_IN POLL_IN
#define _DIRENT_H 1
#define SCM_TIMESTAMP SO_TIMESTAMP
#define SQLITE_STATUS_PAGECACHE_USED 1
#define SIGABRT_ 6
#define SQLITE_NOMEM 7
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define _GETOPT_CORE_H 1
#define SYS_mprotect __NR_mprotect
#define SI_TIMER SI_TIMER
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define TCP_THIN_LINEAR_TIMEOUTS 16
#define ELIBMAX 82
#define PF_ATMSVC 20
#define __sigstack_defined 1
#define SA_SIGINFO_ 4
#define __NR3264_fstat 80
#define SQLITE_CONFIG_GETPCACHE 15
#define SQLITE_SYNC_DATAONLY 0x00010
#define SQLITE_STMTSTATUS_VM_STEP 4
#define __NR_setns 268
#define ATOMIC_FLAG_INIT { 0 }
#define AF_ISDN PF_ISDN
#define __clockid_t_defined 1
#define SQLITE_NOTICE 27
#define __NR_shmget 194
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define IPV6_MULTICAST_LOOP 19
#define __ATOMIC_SEQ_CST 5
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define SQLITE_LOCKED 6
#define SQLITE_STMTSTATUS_REPREPARE 5
#define IPV6_2292HOPLIMIT 8
#define SQLITE_CONFIG_SQLLOG 21
#define ENOENT 2
#define __NR_fgetxattr 10
#define atomic_load_explicit(PTR,MO) __extension__ ({ __auto_type __atomic_load_ptr = (PTR); __typeof__ ((void)0, *__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (MO)); __atomic_load_tmp; })
#define __NR_fchmod 52
#define TCP_S_DATA_OUT (1 << 3)
#define _ELIBACC -79
#define SQLITE_TESTCTRL_ISINIT 23
#define F80_NAN ((float80) {.signif = 0xc000000000000000, .exp = 0x7fff, .sign = 0})
#define SQLITE_MUTEX_FAST 0
#define F_SETFD 2
#define superuser() (current != NULL && current->euid == 0)
#define IPV6_LEAVE_ANYCAST 28
#define __NR_timer_settime 110
#define __UINT32_TYPE__ unsigned int
#define SQLITE_FCNTL_LOCK_TIMEOUT 34
#define SO_BUSY_POLL 46
#define PF_IB 27
#define SYS_sched_rr_get_interval __NR_sched_rr_get_interval
#define SYS_getrusage __NR_getrusage
#define _ENXIO -6
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define SQLITE_IOERR_RDLOCK (SQLITE_IOERR | (9<<8))
#define SIGTERM 15
#define PTHREAD_KEYS_MAX 1024
#define RLIMIT_NOFILE_ 7
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define EBADSLT 57
#define IPV6_PMTUDISC_DONT 0
#define __FLT64X_HAS_DENORM__ 1
#define __useconds_t_defined 
#define F_SETFL 4
#define __FD_ELT(d) ((d) / __NFDBITS)
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define __NR_sethostname 161
#define IPV6_RTHDR_STRICT 1
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define _LFS_ASYNCHRONOUS_IO 1
#define __SI_BAND_TYPE long int
#define __HAVE_DISTINCT_FLOAT64X 0
#define _BITS_SIGCONTEXT_H 1
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define __SIZEOF_LONG_LONG__ 8
#define EHOSTUNREACH 113
#define DT_FIFO DT_FIFO
#define __NR_syncfs 267
#define POSIX_FADV_SEQUENTIAL 2
#define __NR_setsid 157
#define SYS_pkey_alloc __NR_pkey_alloc
#define _GCC_PTRDIFF_T 
#define SYS_getdents64 __NR_getdents64
#define _POSIX_THREAD_KEYS_MAX 128
#define _EDEADLK -35
#define _ECONNABORTED -103
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define __LDBL_DIG__ 33
#define _SC_NZERO _SC_NZERO
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define S_IROTH (S_IRGRP >> 3)
#define RNDRESEEDCRNG _IO( 'R', 0x07 )
#define SO_TIMESTAMPNS_OLD 35
#define MSG_EOR_ 0x80
#define __POSIX2_THIS_VERSION 200809L
#define ___int_ptrdiff_t_h 
#define __NR_setpgid 154
#define TIMERS_MAX 16
#define SYS_pselect6 __NR_pselect6
#define __NR_flock 32
#define SIGXFSZ_ 25
#define __NR_capget 90
#define IP_PMTUDISC_INTERFACE 4
#define RLIMIT_RTPRIO_ 14
#define IP_RECVERR_RFC4884 26
#define PF_VSOCK 40
#define SQLITE_FLOAT 2
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __NR_readv 65
#define SO_BUF_LOCK 72
#define SO_PRIORITY 12
#define _BITS_CPU_SET_H 1
#define __NR_getrlimit 163
#define __NR_set_robust_list 99
#define SYS_sched_get_priority_max __NR_sched_get_priority_max
#define __S_ISGID 02000
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define TCP_MD5SIG 14
#define TCP_NODELAY 1
#define IP_RECVRETOPTS IP_RETOPTS
#define __fsblkcnt_t_defined 
#define FPE_FLTUND FPE_FLTUND
#define EMEDIUMTYPE 124
#define X_OK 1
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
