#define __S_IFBLK 0060000
#define _RANGES_UNINITIALIZED_H 1
#define sa_sigaction __sigaction_handler.sa_sigaction
#define _GLIBCXX_DEPRECATED_SUGGEST(ALT) __attribute__ ((__deprecated__ ("use '" ALT "' instead")))
#define setbit(a,i) ((a)[(i)/NBBY] |= 1<<((i)%NBBY))
#define _BITS_SCHED_H 1
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define SYS_nanosleep __NR_nanosleep
#define __SSP_STRONG__ 3
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define EMULTIHOP 72
#define __cpp_attributes 200809L
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define AT_STATX_SYNC_AS_STAT 0x0000
#define __FLT_HAS_INFINITY__ 1
#define SYS_openat2 __NR_openat2
#define SYS_rt_sigpending __NR_rt_sigpending
#define _SC_PII _SC_PII
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define SYS_rseq __NR_rseq
#define _GLIBCXX_MAX_SIZE_TYPE_H 1
#define __CFLOAT32 _Complex float
#define SCNu32 "u"
#define __UINT_LEAST16_MAX__ 0xffff
#define F_SET_RW_HINT 1036
#define MNTOPT_RO "ro"
#define __FLT128_MAX_10_EXP__ 4932
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define RE_DUP_MAX (0x7fff)
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define STATX_ATTR_AUTOMOUNT 0x00001000
#define _GLIBCXX_USE_FCHMOD 1
#define NOMINMAX 
#define __cpp_lib_destroying_delete 201806L
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define si_fd _sifields._sigpoll.si_fd
#define __NR_mkdirat 34
#define _T_WCHAR_ 
#define _SC_IPV6 _SC_IPV6
#define __NR_remap_file_pages 234
#define RWH_WRITE_LIFE_SHORT 2
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define __NR_io_uring_enter 426
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex double
#define _GCC_MAX_ALIGN_T 
#define M_KEEP 4
#define _GLIBCXX_NESTED_EXCEPTION_H 1
#define si_arch _sifields._sigsys._arch
#define __NR_openat 56
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define __S64_TYPE long int
#define _PRINTF_NAN_LEN_MAX 4
#define SYS_sched_get_priority_min __NR_sched_get_priority_min
#define MDBX_PURE_FUNCTION __attribute__((__pure__))
#define __SQUAD_TYPE long int
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _BITS_SIGINFO_CONSTS_H 1
#define SYS_request_key __NR_request_key
#define SIGBUS 7
#define __GNU_LIBRARY__ 6
#define __cpp_aggregate_paren_init 201902L
#define NL_NMAX INT_MAX
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define _GLIBCXX_HAVE_ATANL 1
#define ST_WRITE ST_WRITE
#define __CHAR_BIT__ 8
#define _PSTL_STRING_CONCAT(x,y) x #y
#define __NR_timerfd_settime 86
#define __glibcxx_requires_sorted_set_pred(_First1,_Last1,_First2,_Pred) 
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define EREMCHG 78
#define MDBX_MAP_RESIZED MDBX_MAP_RESIZED_is_deprecated()
#define SIGTTIN 21
#define EACCES 13
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define __CORRECT_ISO_CPP_STRINGS_H_PROTO 
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define _STRINGFWD_H 1
#define _GLIBCXX_ATOMICITY_H 1
#define ST_SYNCHRONOUS ST_SYNCHRONOUS
#define __cpp_lib_bind_front 201907L
#define EDESTADDRREQ 89
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define SPECULUM_CURSORS 1
#define si_pid _sifields._kill.si_pid
#define _GLIBCXX_HAVE_WRITEV 1
#define MDBX_CXX01_CONSTEXPR constexpr
#define _GLIBCXX_END_NAMESPACE_LDBL 
#define PIPE_BUF 4096
#define _PSTL_PRAGMA_SIMD_ORDERED_MONOTONIC_2ARGS(PRM1,PRM2) 
#define _PSTL_VERSION_PATCH (_PSTL_VERSION % 10)
#define stderr stderr
#define _GLIBCXX14_CONSTEXPR constexpr
#define bswap16(v) __builtin_bswap16(v)
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define __USE_XOPEN2KXSI 1
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define __cpp_static_assert 201411L
#define _PATH_SENDMAIL "/usr/sbin/sendmail"
#define is_byteorder_be() (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
#define SYS_open_tree __NR_open_tree
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define __INT32_C(c) c
#define _PSTL_PRAGMA_SIMD_SCAN(PRM) 
#define __NR_pkey_mprotect 288
#define SYS_statfs __NR_statfs
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define UINT_FAST16_WIDTH __WORDSIZE
#define SYS_clock_getres __NR_clock_getres
#define pthread_cleanup_push_defer_np(routine,arg) do { __pthread_cleanup_class __clframe (routine, arg); __clframe.__defer ()
#define VALGRIND_CREATE_MEMPOOL(h,r,z) 
#define __NR_mlockall 230
#define PRIXFAST32 __PRIPTR_PREFIX "X"
#define _GLIBCXX_ATOMIC_LOCK_FREE_H 1
#define __NR_pidfd_send_signal 424
#define __NR_finit_module 273
#define __CLANG_PREREQ(maj,min) (0)
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define CLONE_NEWUTS 0x04000000
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __cpp_lib_transformation_trait_aliases 201304
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 0
#define __nothrow noexcept(true)
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define __NR_fsopen 430
#define __cpp_binary_literals 201304L
#define _CPP_TYPE_TRAITS_H 1
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define __NR_read 63
#define SYS_mq_timedreceive __NR_mq_timedreceive
#define SYS_inotify_init1 __NR_inotify_init1
#define _XOPEN_VERSION 700
#define __cpp_noexcept_function_type 201510L
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define SCHED_RR 2
#define _GLIBCXX_PACKAGE_NAME "package-unused"
#define MDBX_VERSION_MAJOR 0
#define LONG_WIDTH __WORDSIZE
#define SEGV_BNDERR SEGV_BNDERR
#define __cpp_lib_exchange_function 201304
#define __PDP_ENDIAN 3412
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __ASSERT_VOID_CAST static_cast<void>
#define PRIdFAST64 __PRI64_PREFIX "d"
#define MDBX_LOCKING_POSIX1988 1988
#define __O_NOFOLLOW 0100000
#define CLONE_NEWNET 0x40000000
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define MREMAP_MAYMOVE 1
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define _GLIBCXX_HAVE_STDALIGN_H 1
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define __NR_sendmmsg 269
#define __sigval_t_defined 
#define SIGPROF 27
#define SYS_mount_setattr __NR_mount_setattr
#define __NR_timerfd_create 85
#define __CFLOAT128 _Complex long double
#define __NR_sched_setscheduler 119
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __SVE_ZREGS_OFFSET 0
#define __cpp_lib_node_extract 201606
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define _PSTL_PRAGMA_MESSAGE_IMPL(x) _PSTL_PRAGMA(message(_PSTL_STRING_CONCAT(_PSTL_PRAGMA_LOCATION, x)))
#define SYS_semop __NR_semop
#define __DBL_MIN_10_EXP__ (-307)
#define __ARCH_WANT_SYS_CLONE3 
#define ENOTTY 25
#define _ALLOCATED_PTR_H 1
#define _GLIBCXX_FILESYSTEM 1
#define PRIi32 "i"
#define __cold __attribute__((__cold__)) __optimize("Os")
#define MOD_NANO ADJ_NANO
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define __NR_set_tid_address 96
#define L_cuserid 9
#define _CS_V6_ENV _CS_V6_ENV
#define __LP64__ 1
#define _HAS_EXCEPTIONS 1
#define __NR_fdatasync 83
#define __u_char_defined 
#define unlikely(cond) __builtin_expect(!!(cond), 0)
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define WTMPX_FILENAME _PATH_WTMPX
#define __GNUC_PATCHLEVEL__ 0
#define _GLIBCXX_STD_A std
#define __FLT32_HAS_DENORM__ 1
#define __FLT64X_HAS_INFINITY__ 1
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define __NR_copy_file_range 285
#define __ASM_SVE_CONTEXT_H 
#define _POSIX_TRACE_EVENT_FILTER -1
#define __INT_LEAST16_TYPE__ short int
#define mdbx_free free
#define _GLIBCXX11_DEPRECATED_SUGGEST(ALT) _GLIBCXX_DEPRECATED_SUGGEST(ALT)
#define MNTOPT_DEFAULTS "defaults"
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define NGROUPS NGROUPS_MAX
#define __HAVE_DISTINCT_FLOAT32 0
#define _BITS_TYPES_LOCALE_T_H 1
#define _LIMITS_H___ 
#define CLONE_NEWCGROUP 0x02000000
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define __O_NOATIME 01000000
#define __SI_SIGFAULT_ADDL 
#define _LOCALE_FWD_H 1
#define ENOMEM 12
#define MNTOPT_RW "rw"
#define __STDC_CONSTANT_MACROS 
#define SPLICE_F_GIFT 8
#define _SYS_TIME_H 1
#define __cpp_unicode_characters 201411L
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH _CS_PATH
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define __NR_mq_unlink 181
#define __USE_ATFILE 1
#define __cpp_capture_star_this 201603L
#define roundup(x,y) (__builtin_constant_p (y) && powerof2 (y) ? (((x) + (y) - 1) & ~((y) - 1)) : ((((x) + ((y) - 1)) / (y)) * (y)))
#define _XBS5_LPBIG_OFFBIG -1
#define MFD_HUGETLB 4U
#define _GLIBCXX_HAVE_ENDIAN_H 1
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define NFDBITS __NFDBITS
#define __noinline __attribute__((__noinline__))
#define __NR_sched_getscheduler 120
#define MDBX_NORETURN __attribute__((__noreturn__))
#define SCNd8 "hhd"
#define __NR_fremovexattr 16
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define __cpp_impl_coroutine 201902L
#define __NR_faccessat 48
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define _PATH_KLOG "/proc/kmsg"
#define S_IXOTH (S_IXGRP >> 3)
#define MDBX_ALIGNAS(N) alignas(N)
#define _GLIBCXX_CXX_ALLOCATOR_H 1
#define WCHAR_WIDTH 32
#define __O_CLOEXEC 02000000
#define O_CLOEXEC __O_CLOEXEC
#define __cpp_lib_is_final 201402L
#define _PATH_VARRUN "/var/run/"
#define __ARM_FP 14
#define _PSTL_CPP11_STD_ROTATE_BROKEN ((__GLIBCXX__ && __GLIBCXX__ < 20150716) || (_MSC_VER && _MSC_VER < 1800))
#define MAP_SHARED_VALIDATE 0x03
#define SIGSTKFLT 16
#define STATX_GID 0x00000010U
#define __MALLOC_DEPRECATED __attribute_deprecated__
#define __fortify_function __extern_always_inline __attribute_artificial__
#define SYS_semctl __NR_semctl
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define __cpp_lib_integer_comparison_functions 202002L
#define SCNd16 "hd"
#define _BITS_WCTYPE_WCHAR_H 1
#define howmany(x,y) (((x) + ((y) - 1)) / (y))
#define NAME_MAX 255
#define __mbstate_t_defined 1
#define __NR_sendmsg 211
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define _POSIX_JOB_CONTROL 1
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define CPU_CLR(cpu,cpusetp) __CPU_CLR_S (cpu, sizeof (cpu_set_t), cpusetp)
#define STATX_ATTR_VERITY 0x00100000
#define SYS_memfd_secret __NR_memfd_secret
#define __ARCH_WANT_MEMFD_SECRET 
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define __NR_sysinfo 179
#define __ASM_GENERIC_BITS_PER_LONG 
#define SYS_epoll_ctl __NR_epoll_ctl
#define sigcontext_struct sigcontext
#define SCNd32 "d"
#define _GLIBCXX_NODISCARD [[__nodiscard__]]
#define _POSIX_THREAD_CPUTIME 0
#define __NR_preadv 69
#define __linux 1
#define UTMPX_FILE _PATH_UTMPX
#define __NR_exit 93
#define __GTHREAD_RECURSIVE_MUTEX_INIT PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define SYS_fspick __NR_fspick
#define SYS_sendfile __NR_sendfile
#define _GLIBCXX_HAVE_SYS_TIME_H 1
#define si_int _sifields._rt.si_sigval.sival_int
#define _GLIBCXX_HAVE_LIBINTL_H 1
#define __CHAR_UNSIGNED__ 1
#define _OSTREAM_INSERT_H 1
#define __cpp_lib_constexpr_utility 201811L
#define SYS_accept __NR_accept
#define _BITS_PTHREADTYPES_ARCH_H 1
#define SYS_clock_adjtime __NR_clock_adjtime
#define SYS_recvmmsg __NR_recvmmsg
#define __UINT32_MAX__ 0xffffffffU
#define ST_NODIRATIME ST_NODIRATIME
#define __GXX_EXPERIMENTAL_CXX0X__ 1
#define _BITS_SS_FLAGS_H 1
#define __SHRT_WIDTH__ 16
#define __SIZE_T 
#define _POSIX_PIPE_BUF 512
#define __S_ISVTX 01000
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define __NR_timerfd_gettime 87
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define _ATFILE_SOURCE 1
#define CPU_ISSET(cpu,cpusetp) __CPU_ISSET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define IPC_STAT 2
#define __glibcxx_assert(cond) do { __glibcxx_constexpr_assert(cond); } while (false)
#define SCNuLEAST16 "hu"
#define _SC_NETWORKING _SC_NETWORKING
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define SYS_getuid __NR_getuid
#define UINT_FAST64_WIDTH 64
#define WUNTRACED 2
#define ERESTART 85
#define MDBX_STRING_TETRAD(str) MDBX_TETRAD(str[0], str[1], str[2], str[3])
#define __cpp_lib_unwrap_ref 201811L
#define _HASH_BYTES_H 1
#define PRIiFAST64 __PRI64_PREFIX "i"
#define NZERO 20
#define EISNAM 120
#define UINT16_C(c) c
#define _GLIBCXX_HAVE_MEMALIGN 1
#define _PSTL_PRAGMA(x) _Pragma(#x)
#define SCNo8 "hho"
#define ENOKEY 126
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ENOMSG 42
#define _PC_PRIO_IO _PC_PRIO_IO
#define EXIT_FAILURE 1
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define SYS_setpgid __NR_setpgid
#define SYS_setuid __NR_setuid
#define _GLIBCXX_MEMORY 1
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __SCHAR_MAX__ 0x7f
#define __NR_semget 190
#define __SC_COMP(_nr,_sys,_comp) __SYSCALL(_nr, _sys)
#define SYS_clock_gettime __NR_clock_gettime
#define CLONE_THREAD 0x00010000
#define __NR_nfsservctl 42
#define SYS_timer_settime __NR_timer_settime
#define __KERNEL_STRICT_NAMES 
#define SCNxFAST16 __PRIPTR_PREFIX "x"
#define __NR3264_fstatfs 44
#define __INT64_C(c) c ## L
#define __NR_setsockopt 208
#define __NR_io_destroy 1
#define _GLIBCXX_CONST __attribute__ ((__const__))
#define __NR_request_key 218
#define _EXT_NUMERIC_TRAITS 1
#define STA_PPSWANDER 0x0400
#define __S_IFLNK 0120000
#define UTMPX_FILENAME _PATH_UTMPX
#define NEW_TIME 3
#define SYS_clock_nanosleep __NR_clock_nanosleep
#define _GLIBCXX_HAVE_AT_QUICK_EXIT 1
#define SCNoFAST64 __PRI64_PREFIX "o"
#define SYS_fchown __NR_fchown
#define __NR_epoll_pwait 22
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define _STL_TREE_H 1
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define __toascii(c) ((c) & 0x7f)
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __NR_epoll_ctl 21
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define _BITS_SIGINFO_ARCH_H 1
#define si_addr _sifields._sigfault.si_addr
#define __attribute_used__ __attribute__ ((__used__))
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define S_IFMT __S_IFMT
#define _SYS_PARAM_H 1
#define __NR_mincore 232
#define _ASM_GENERIC_INT_LL64_H 
#define PRIuFAST16 __PRIPTR_PREFIX "u"
#define _SC_VERSION _SC_VERSION
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define __wint_t_defined 1
#define MDBX_LOCKING_BENAPHORE 1995
#define __USER_LABEL_PREFIX__ 
#define SYS_pidfd_open __NR_pidfd_open
#define _GLIBCXX_NUM_FACETS 14
#define MDBX_ENABLE_MADVISE 1
#define MDBX_NOTHROW_CONST_FUNCTION __attribute__((__const__, __nothrow__))
#define SCNx8 "hhx"
#define _GLIBCXX_USE_PTHREAD_RWLOCK_T 1
#define __LC_MEASUREMENT 11
#define __NR_restart_syscall 128
#define __NR_process_vm_readv 270
#define AT_SYMLINK_NOFOLLOW 0x100
#define __NR_getpeername 205
#define __NR_clock_settime 112
#define __GLIBC__ 2
#define _SC_POLL _SC_POLL
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define MDBX_PNL_PREALLOC_FOR_RADIXSORT 1
#define PRIuFAST32 __PRIPTR_PREFIX "u"
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define WCONTINUED 8
#define UINT8_MAX (255)
#define __NR3264_fstat 80
#define _STL_ALGO_H 1
#define CANBSIZ MAX_CANON
#define _LARGEFILE64_SOURCE 1
#define SIGRTMAX (__libc_current_sigrtmax ())
#define PRIxSIZE PRIxPTR
#define __LDBL_HAS_INFINITY__ 1
#define _BITS_UINTN_IDENTITY_H 1
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define _GLIBCXX_DEBUG_ASSERTIONS_H 1
#define _POSIX_SEM_VALUE_MAX 32767
#define SYS_gettid __NR_gettid
#define STATX_NLINK 0x00000004U
#define __FP_FAST_FMAF32 1
#define __cpp_lib_span 202002L
#define MADV_NORMAL 0
#define _BITS_TYPESIZES_H 1
#define TMP_MAX 238328
#define _GLIBCXX_HAVE_LIMIT_VMEM 0
#define __EXCEPTION__ 
#define _GLIBCXX_USE_C99_STDINT_TR1 1
#define __NR_setreuid 145
#define __NR_renameat 38
#define _GLIBCXX_CODECVT_SPECIALIZATION(_NAME,_ELEM) _GLIBCXX_CODECVT_SPECIALIZATION2(__ ## _NAME ## _base, _ELEM); template<unsigned long _Maxcode, codecvt_mode _Mode> class _NAME<_ELEM, _Maxcode, _Mode> : public __ ## _NAME ## _base<_ELEM> { public: explicit _NAME(size_t __refs = 0) : __ ## _NAME ## _base<_ELEM>(std::min(_Maxcode, 0x10fffful), _Mode, __refs) { } }
#define _BSD_SIZE_T_DEFINED_ 
#define __FLT32_DIG__ 6
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define __RLIM_T_MATCHES_RLIM64_T 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define MAP_FAILED ((void *) -1)
#define _GLIBCXX_NUMBERS 1
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define SS_DISABLE SS_DISABLE
#define ENOLINK 67
#define MDBX_TRUST_RTC 0
#define __HAVE_FLOAT128 1
#define __GXX_WEAK__ 1
#define __FLT32_IS_IEC_60559__ 2
#define __GLIBC_MINOR__ 35
#define _RANGES_UTIL_H 1
#define _XBS5_LP64_OFF64 1
#define SYS_prctl __NR_prctl
#define RENAME_NOREPLACE (1 << 0)
#define __SVE_NUM_ZREGS 32
#define SYS_timer_delete __NR_timer_delete
#define __NR_mount 40
#define __SSIZE_T_TYPE __SWORD_TYPE
#define SYS_lookup_dcookie __NR_lookup_dcookie
#define __DEV_T_TYPE __UQUAD_TYPE
#define __cpp_size_t_suffix 202011L
#define _GLIBCXX_ALGORITHMFWD_H 1
#define _GLIBCXX_BEGIN_NAMESPACE_ALGO 
#define SIGIO SIGPOLL
#define _GLIBCXX_HAVE_STRING_H 1
#define le32toh(x) __uint32_identity (x)
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define ARRAY_END(array) (&array[ARRAY_LENGTH(array)])
#define _GLIBCXX_HAVE_GETIPINFO 1
#define _GLIBCXX_HAVE_POLL 1
#define CPU_SETSIZE __CPU_SETSIZE
#define _POSIX_NAME_MAX 14
#define __cpp_threadsafe_static_init 200806L
#define _GLIBCXX_USE_CHAR8_T 1
#define __N(msgid) (msgid)
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define st_ctime st_ctim.tv_sec
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define __ARCH_WANT_TIME32_SYSCALLS 
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define _BITS_STRUCT_STAT_H 1
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define _VA_LIST_DEFINED 
#define __FLT32X_HAS_INFINITY__ 1
#define UINT32_WIDTH 32
#define __INT32_MAX__ 0x7fffffff
#define _PSTL_CPP14_INTEGER_SEQUENCE_PRESENT (_MSC_VER >= 1900 || __cplusplus >= 201402L)
#define __GLIBC_USE_DEPRECATED_GETS 0
#define _GLIBCXX_UNORDERED_MAP 1
#define VALGRIND_CHECK_MEM_IS_DEFINED(a,s) (0)
#define _POSIX_V7_LPBIG_OFFBIG -1
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define MNTOPT_SUID "suid"
#define __INT_WIDTH__ 32
#define CPU_XOR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, ^)
#define __S_IFCHR 0020000
#define __NR_pidfd_open 434
#define __SIZE_WIDTH__ 64
#define S_ISVTX __S_ISVTX
#define __STDC_ISO_10646__ 201706L
#define PRIX64 __PRI64_PREFIX "X"
#define MADV_DONTFORK 10
#define __NR_semtimedop 192
#define __NR_syslog 116
#define _SC_NL_NMAX _SC_NL_NMAX
#define __PTRDIFF_WIDTH__ 64
#define SEM_VALUE_MAX (2147483647)
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define __NR_prctl 167
#define _GLIBCXX_HAVE_MODFF 1
#define _GLIBCXX_HAVE_MODFL 1
#define __optimize(ops) __attribute__((__optimize__(ops)))
#define PRIoLEAST16 "o"
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) fct __THROW
#define __USE_FORTIFY_LEVEL 2
#define LOCK_EX 2
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define _GLIBCXX_HAVE_HYPOTF 1
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define _GLIBCXX_HAVE_HYPOTL 1
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define __NR_close 57
#define _LARGEFILE_SOURCE 1
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define __FLT128_IS_IEC_60559__ 2
#define __glibcxx_requires_heap(_First,_Last) 
#define _GLIBCXX_CPU_DEFINES 1
#define ESTALE 116
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __SI_MAX_SIZE 128
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define LC_TIME __LC_TIME
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define SEGV_ACCADI SEGV_ACCADI
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define __NR_statx 291
#define _POSIX_LOGIN_NAME_MAX 9
#define SIG_ATOMIC_MIN (-2147483647-1)
#define FPSIMD_MAGIC 0x46508001
#define _XBS5_ILP32_OFF32 -1
#define __cpp_using_enum 201907L
#define __ASM_SIGCONTEXT_H 
#define FNDELAY O_NDELAY
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define F_OK 0
#define SIZE_WIDTH __WORDSIZE
#define DELAYTIMER_MAX 2147483647
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define _GLIBXX_STREAMBUF 1
#define PRIuFAST8 "u"
#define __cpp_lib_constexpr_string 201811L
#define ADJ_MICRO 0x1000
#define __NR_sendfile __NR3264_sendfile
#define _GLIBCXX_HAVE_VFWSCANF 1
#define __NR_ftruncate __NR3264_ftruncate
#define __attribute_const__ __attribute__ ((__const__))
#define __THROW noexcept (true)
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SYS_recvfrom __NR_recvfrom
#define _POSIX_NO_TRUNC 1
#define MDBX_PGWALK_META ((const char *)((ptrdiff_t)-2))
#define __glibcxx_requires_heap_pred(_First,_Last,_Pred) 
#define _GLIBCXX_HAVE_POWF 1
#define MDBX_TXN_CHECKOWNER_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_TXN_CHECKOWNER)
#define __USE_GNU_GETTEXT 1
#define SYS_mount __NR_mount
#define L_tmpnam 20
#define ___int_wchar_t_h 
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define __GNUC__ 11
#define __GXX_RTTI 1
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define __NR_memfd_secret 447
#define SYS_keyctl __NR_keyctl
#define POSIX_MADV_DONTNEED 4
#define _GLIBCXX_USE_GET_NPROCS 1
#define __OFF64_T_TYPE __SQUAD_TYPE
#define _GLIBCXX_HAVE_STRERROR_L 1
#define _GLIBCXX_HAVE_STRERROR_R 1
#define MCL_ONFAULT 4
#define POSIX_FADV_WILLNEED 3
#define __NR_setpgid 154
#define _GLIBCXX_HAVE_LOGF 1
#define LOCK_NB 4
#define __daddr_t_defined 
#define INT8_WIDTH 8
#define __NR_unlinkat 35
#define __NR_io_submit 2
#define MDBX_NOTHROW_PURE_FUNCTION __attribute__((__pure__, __nothrow__))
#define mdbx_calloc calloc
#define __NR_socketpair 199
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define _GLIBCXX_HAVE_LOGL 1
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define __STDC_UTF_16__ 1
#define sa_handler __sigaction_handler.sa_handler
#define LONG_MAX __LONG_MAX__
#define SYS_getresuid __NR_getresuid
#define __NR_sched_getaffinity 123
#define __SVE_VQ_BYTES 16
#define STDERR_FILENO 2
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define SYS_readahead __NR_readahead
#define __LC_MESSAGES 5
#define PRIuMAX __PRI64_PREFIX "u"
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define _GLIBCXX_POSTYPES_H 1
#define pthread_cleanup_pop(execute) __clframe.__setdoit (execute); } while (0)
#define __FLT64_MAX_10_EXP__ 308
#define __BIG_ENDIAN 4321
#define _STL_CONSTRUCT_H 1
#define SYS_rt_sigprocmask __NR_rt_sigprocmask
#define __cpp_lib_clamp 201603
#define PRIdLEAST32 "d"
#define PROT_WRITE 0x2
#define PRIoLEAST64 __PRI64_PREFIX "o"
#define __GLIBC_USE_LIB_EXT2 1
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define __NR_acct 89
#define WTERMSIG(status) __WTERMSIG (status)
#define _GLIBCXX_HAVE_S_ISREG 1
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define __NR_msync 227
#define __DBL_IS_IEC_60559__ 2
#define __NR_setsid 157
#define STA_PPSTIME 0x0004
#define __FLT32_HAS_INFINITY__ 1
#define EXIT_SUCCESS 0
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define _GLIBCXX_PREDEFINED_OPS_H 1
#define __GTHREADS_CXX0X 1
#define SI_QUEUE SI_QUEUE
#define __NR_clock_adjtime 266
#define UINTMAX_WIDTH 64
#define _POSIX_SIGQUEUE_MAX 32
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define _SYS_MMAN_H 1
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define __STDCPP_MATH_SPEC_FUNCS__ 201003L
#define SEGV_PKUERR SEGV_PKUERR
#define SYS_close __NR_close
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define PRIdLEAST64 __PRI64_PREFIX "d"
#define _GLIBCXX_CWCHAR 1
#define ITIMER_PROF ITIMER_PROF
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define SYS_statx __NR_statx
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define PRId8 "d"
#define _GLIBCXX_END_NAMESPACE_ALGO 
#define _GLIBCXX_HAVE_ATOMIC_LOCK_POLICY 1
#define PRIiFAST32 __PRIPTR_PREFIX "i"
#define __NR_io_setup 0
#define CLONE_NEWNS 0x00020000
#define si_syscall _sifields._sigsys._syscall
#define SYS_getrusage __NR_getrusage
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define _PSTL_UDR_PRESENT 1
#define __cpp_fold_expressions 201603L
#define _GLIBCXX_QUOTED_STRING_H 1
#define NL_LANGMAX _POSIX2_LINE_MAX
#define __glibcxx_requires_partitioned_upper(_First,_Last,_Value) 
#define SYS_setgid __NR_setgid
#define __DADDR_T_TYPE __S32_TYPE
#define _GLIBCXX_HAVE_UCHAR_H 1
#define SYS_pwritev2 __NR_pwritev2
#define USER_PROCESS 7
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define MAX_HANDLE_SZ 128
#define __cpp_lib_jthread 201911L
#define _GLIBCXX_HAVE_QUICK_EXIT 1
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define LONG_MIN (-LONG_MAX - 1L)
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define FALLOC_FL_INSERT_RANGE 0x20
#define __FD_SETSIZE 1024
#define _PATH_MOUNTED "/etc/mtab"
#define _PATH_UTMPX _PATH_UTMP
#define _GLIBCXX_PACKAGE__GLIBCXX_VERSION "version-unused"
#define _LINUX_STAT_H 
#define MDBX_CXX01_CONSTEXPR_VAR constexpr
#define SYS_pidfd_getfd __NR_pidfd_getfd
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define __FLT64_HAS_DENORM__ 1
#define SI_USER SI_USER
#define PRIi8 "i"
#define EBADMSG 74
#define SYS_brk __NR_brk
#define WAIT_MYPGRP 0
#define __UT_LINESIZE 32
#define POLL_PRI POLL_PRI
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __LDBL_HAS_DENORM__ 1
#define __NR_move_mount 429
#define CLONE_PARENT 0x00008000
#define SCNiLEAST16 "hi"
#define _PSTL_PRAGMA_SIMD_REDUCTION(PRM) _PSTL_PRAGMA(omp simd reduction(PRM))
#define MDBX_LOCKING MDBX_LOCKING_POSIX2008
#define __S_IFREG 0100000
#define SYS_getitimer __NR_getitimer
#define _GLIBCXX11_USE_C99_STDIO 1
#define _GLIBCXX_USE_PTHREAD_RWLOCK_CLOCKLOCK 1
#define LC_TIME_MASK (1 << __LC_TIME)
#define __cplusplus 202100L
#define __cpp_ref_qualifiers 200710L
#define _GLIBCXX_HAVE_WCSTOF 1
#define LC_ADDRESS __LC_ADDRESS
#define SIGABRT 6
#define SYS_mbind __NR_mbind
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define POSIX_FADV_NORMAL 0
#define _GLIBCXX20_DEPRECATED_SUGGEST(ALT) _GLIBCXX_DEPRECATED_SUGGEST(ALT)
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define __NR_removexattr 14
#define S_IFCHR __S_IFCHR
#define SYS_getegid __NR_getegid
#define SCNiLEAST32 "i"
#define EBFONT 59
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define _PSTL_ASSERT_MSG(_Condition,_Message) __glibcxx_assert(_Condition)
#define MADV_COLD 20
#define MDBX_MMAP_INCOHERENT_FILE_WRITE 0
#define SYS_epoll_create1 __NR_epoll_create1
#define __cleanup_fct_attribute 
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define CPU_ALLOC(count) __CPU_ALLOC (count)
#define _PSTL_STRING_AUX(x) #x
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define __WCHAR_WIDTH__ 32
#define __BIT_TYPES_DEFINED__ 1
#define SEGV_ADIDERR SEGV_ADIDERR
#define _BITS_WCHAR_H 1
#define _GLIBCXX20_DEPRECATED(MSG) [[deprecated(MSG)]]
#define SYS_syslog __NR_syslog
#define __gthrw2(name,name2,type) 
#define MDBX_LOCKING_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_LOCKING)
#define STATX_ATIME 0x00000020U
#define __NR_signalfd4 74
#define __gthrw_(name) name
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define SYS_getpgid __NR_getpgid
#define M_GRAIN 3
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define PRIo8 "o"
#define SCNiLEAST64 __PRI64_PREFIX "i"
#define __NR_rt_sigtimedwait 137
#define SYS_sched_setattr __NR_sched_setattr
#define ETOOMANYREFS 109
#define _POSIX_TZNAME_MAX 6
#define __itimerspec_defined 1
#define _POSIX_SSIZE_MAX 32767
#define SYS_timer_gettime __NR_timer_gettime
#define __NR_shmat 196
#define SCNdLEAST16 "hd"
#define _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY 1
#define _EXT_TYPE_TRAITS 1
#define SYS_sched_getaffinity __NR_sched_getaffinity
#define __ARM_FP_FAST 1
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define SCNdFAST16 __PRIPTR_PREFIX "d"
#define _POSIX_MAX_CANON 255
#define SYS_inotify_add_watch __NR_inotify_add_watch
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define __NR_process_mrelease 448
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define __USECONDS_T_TYPE __U32_TYPE
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define SYS_clone3 __NR_clone3
#define __cpp_lib_has_unique_object_representations 201606
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define FD_CLOEXEC 1
#define _LINUX_STDDEF_H 
#define _BASIC_STRING_TCC 1
#define _STDARG_H 
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define _PC_VDISABLE _PC_VDISABLE
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define _BITS_STDIO2_H 1
#define _SC_BARRIERS _SC_BARRIERS
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define MAXHOSTNAMELEN 64
#define st_atime st_atim.tv_sec
#define __stub___compat_uselib 
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define _POSIX_CPUTIME 0
#define SYS_rt_tgsigqueueinfo __NR_rt_tgsigqueueinfo
#define si_stime _sifields._sigchld.si_stime
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define SYS_getresgid __NR_getresgid
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define WCOREDUMP(status) __WCOREDUMP (status)
#define __glibcxx_min_b(T,B) (__glibcxx_signed_b (T,B) ? -__glibcxx_max_b (T,B) - 1 : (T)0)
#define __USE_POSIX 1
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define O_TMPFILE __O_TMPFILE
#define PRIu8 "u"
#define __cpp_lib_map_try_emplace 201411
#define _STL_RELOPS_H 1
#define __SIZEOF_WINT_T__ 4
#define _PTR_TRAITS_H 1
#define __cpp_lib_sample 201603
#define _STL_STACK_H 1
#define __f32x(x) x
#define errno (*__errno_location ())
#define _SHARED_PTR_H 1
#define ENOTNAM 118
#define INT32_MIN (-2147483647-1)
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define _LINUX_CLOSE_RANGE_H 
#define __cpp_initializer_lists 200806L
#define __U16_TYPE unsigned short int
#define __NR_munmap 215
#define __glibcxx_requires_can_increment(_First,_Size) 
#define CLD_EXITED CLD_EXITED
#define SYS_pkey_mprotect __NR_pkey_mprotect
#define _GLIBCXX_HAVE_SYS_PARAM_H 1
#define _STDIO_H 1
#define WINT_MAX (4294967295u)
#define __cpp_lib_is_invocable 201703
#define POSIX_MADV_NORMAL 0
#define _BITS_POSIX2_LIM_H 1
#define _PSTL_ICC_18_OMP_SIMD_BROKEN (__INTEL_COMPILER == 1800)
#define UINTPTR_MAX (18446744073709551615UL)
#define _GLIBCXX_HAVE_ARPA_INET_H 1
#define MADV_DODUMP 17
#define PRIx8 "x"
#define _PTRDIFF_T 
#define _MOVE_H 1
#define __cpp_hex_float 201603L
#define _GLIBCXX_MOVE(__val) std::move(__val)
#define __ASM_GENERIC_POSIX_TYPES_H 
#define __hot __attribute__((__hot__)) __optimize("O3")
#define SYS_landlock_restrict_self __NR_landlock_restrict_self
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define _GLIBCXX_TXN_SAFE 
#define __FLT_MIN_EXP__ (-125)
#define _GLIBCXX_ARRAY 1
#define _NEW 
#define is_byteorder_le() (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
#define WEXITED 4
#define F_GETOWN __F_GETOWN
#define __FLT16_MANT_DIG__ 11
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define SYS_faccessat2 __NR_faccessat2
#define __NR_chroot 51
#define MFD_CLOEXEC 1U
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define _SYS_SINGLE_THREADED_H 
#define __NR_lgetxattr 9
#define SYS_newfstatat __NR_newfstatat
#define powerof2(x) ((((x) - 1) & (x)) == 0)
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define __NR_msgget 186
#define _GLIBCXX_USE_STD_SPEC_FUNCS 1
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define alloca(size) __builtin_alloca (size)
#define PTHREAD_ATTR_NO_SIGMASK_NP (-1)
#define __cpp_lib_transparent_operators 201510
#define NOGROUP (-1)
#define RWF_HIPRI 0x00000001
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define __cpp_enumerator_attributes 201411L
#define PRIX16 "X"
#define __NR_futex 98
#define __cpp_lib_bit_cast 201806L
#define __cpp_lib_byte 201603
#define __THROWNL __THROW
#define _GLIBCXX_BEGIN_NAMESPACE_CXX11 namespace __cxx11 {
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define __cpp_lambdas 200907L
#define NBBY CHAR_BIT
#define SYS_pidfd_send_signal __NR_pidfd_send_signal
#define PKEY_DISABLE_ACCESS 0x1
#define FASYNC O_ASYNC
#define _GLIBCXX_HAVE_SINHF 1
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define _GLIBCXX_HAVE_SINHL 1
#define _LOCALE_H 1
#define __cpp_lib_atomic_value_initialization 201911L
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define _ISTREAM_TCC 1
#define ADJ_TIMECONST 0x0020
#define MDBX_DEPRECATED __attribute__((__deprecated__))
#define _GLIBCXX_HAVE_SQRTF 1
#define _STREAMBUF_TCC 1
#define _GLIBCXX_HAVE_SQRTL 1
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define SYS_eventfd2 __NR_eventfd2
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INT_LEAST32_MAX__ 0x7fffffff
#define O_RSYNC O_SYNC
#define __NR_statfs __NR3264_statfs
#define _GLIBCXX_USE_DEV_RANDOM 1
#define WINT_MIN (0u)
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define STATX_BLOCKS 0x00000400U
#define mdbx_strdup strdup
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define SCNu64 __PRI64_PREFIX "u"
#define __unix__ 1
#define MDBX_DEBUG 0
#define _UNORDERED_SET_H 
#define SIG_ATOMIC_WIDTH 32
#define CLOCK_REALTIME_COARSE 5
#define __glibcxx_requires_nonempty() 
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define _XOPEN_LEGACY 1
#define _GLIBCXX_ATOMIC_WAIT_H 1
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define UTIME_NOW ((1l << 30) - 1l)
#define __NR_eventfd2 19
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define __FLT_EVAL_METHOD_C99__ 0
#define W_EXITCODE(ret,sig) __W_EXITCODE (ret, sig)
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SYS_ioprio_get __NR_ioprio_get
#define __USE_UNIX98 1
#define MDBX_CXX17_CONSTEXPR constexpr
#define SYS_process_vm_readv __NR_process_vm_readv
#define WINT_WIDTH 32
#define CLOCK_REALTIME_ALARM 8
#define _GLIBCXX_CODECVT 1
#define RWF_NOWAIT 0x00000008
#define F_SEAL_SEAL 0x0001
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define MAP_FILE 0
#define __NR_getcpu 168
#define __FLT64_MIN_EXP__ (-1021)
#define SYS_getsid __NR_getsid
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define SYS_unshare __NR_unshare
#define _GLIBCXX_USE_C99_INTTYPES_WCHAR_T_TR1 1
#define __NR_pipe2 59
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define CHAR_MAX UCHAR_MAX
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __NR_add_key 217
#define _GLIBCXX_HAVE_SETENV 1
#define STATX_ATTR_APPEND 0x00000020
#define SYS_epoll_pwait2 __NR_epoll_pwait2
#define FPE_INTDIV FPE_INTDIV
#define SEEK_DATA 3
#define __cpp_lib_gcd_lcm 201606
#define __NR_tee 77
#define SYS_close_range __NR_close_range
#define _PSTL_CPP17_EXECUTION_POLICIES_PRESENT (_MSC_VER >= 1912)
#define _GLIBCXX_PACKAGE_URL ""
#define IPC_RMID 0
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define __NR_symlinkat 36
#define __USE_POSIX199309 1
#define __FDS_BITS(set) ((set)->fds_bits)
#define DEFINE_ENUM_FLAG_OPERATORS(ENUM) extern "C++" { MDBX_NOSANITIZE_ENUM MDBX_CXX01_CONSTEXPR ENUM operator|(ENUM a, ENUM b) { return ENUM(unsigned(a) | unsigned(b)); } MDBX_NOSANITIZE_ENUM MDBX_CXX14_CONSTEXPR ENUM &operator|=(ENUM &a, ENUM b) { return a = a | b; } MDBX_NOSANITIZE_ENUM MDBX_CXX01_CONSTEXPR ENUM operator&(ENUM a, ENUM b) { return ENUM(unsigned(a) & unsigned(b)); } MDBX_NOSANITIZE_ENUM MDBX_CXX01_CONSTEXPR ENUM operator&(ENUM a, unsigned b) { return ENUM(unsigned(a) & b); } MDBX_NOSANITIZE_ENUM MDBX_CXX01_CONSTEXPR ENUM operator&(unsigned a, ENUM b) { return ENUM(a & unsigned(b)); } MDBX_NOSANITIZE_ENUM MDBX_CXX14_CONSTEXPR ENUM &operator&=(ENUM &a, ENUM b) { return a = a & b; } MDBX_NOSANITIZE_ENUM MDBX_CXX14_CONSTEXPR ENUM &operator&=(ENUM &a, unsigned b) { return a = a & b; } MDBX_CXX01_CONSTEXPR unsigned operator~(ENUM a) { return ~unsigned(a); } MDBX_NOSANITIZE_ENUM MDBX_CXX01_CONSTEXPR ENUM operator^(ENUM a, ENUM b) { return ENUM(unsigned(a) ^ unsigned(b)); } MDBX_NOSANITIZE_ENUM MDBX_CXX14_CONSTEXPR ENUM &operator^=(ENUM &a, ENUM b) { return a = a ^ b; } }
#define SYS_io_cancel __NR_io_cancel
#define _GLIBCXX_HAVE_SYS_SOCKET_H 1
#define __FLT16_MIN_10_EXP__ (-4)
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define TRAP_HWBKPT TRAP_HWBKPT
#define _GLIBCXX_ATOMIC_BUILTINS 1
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define MADV_REMOVE 9
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define EIDRM 43
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define _GLIBCXX_FS_OPS_H 1
#define _PC_NAME_MAX _PC_NAME_MAX
#define __NR_mmap __NR3264_mmap
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define __CORRECT_ISO_CPP_WCHAR_H_PROTO 
#define _PC_MAX_CANON _PC_MAX_CANON
#define __glibcxx_requires_non_empty_range(_First,_Last) 
#define __cpp_lib_memory_resource 201603L
#define ADJ_NANO 0x2000
#define CLONE_CHILD_SETTID 0x01000000
#define _EXT_ALLOC_TRAITS_H 1
#define RWF_APPEND 0x00000010
#define _GLIBCXX_ABI_TAG_CXX11 __attribute ((__abi_tag__ ("cxx11")))
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define _GLIBCXX_HAVE_ISWBLANK 1
#define CLONE_PARENT_SETTID 0x00100000
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define _SYS_IPC_H 1
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define __NR3264_sendfile 71
#define ADJ_STATUS 0x0010
#define _POSIX_V7_ILP32_OFF32 -1
#define SYS_io_uring_enter __NR_io_uring_enter
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define SYS_io_submit __NR_io_submit
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define _GLIBCXX_HAVE_ALIGNED_ALLOC 1
#define __siginfo_t_defined 1
#define CPU_SET(cpu,cpusetp) __CPU_SET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define __cpp_lib_atomic_ref 201806L
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define __NR_rt_sigprocmask 135
#define __cpp_lib_coroutine 201902L
#define SIGEV_THREAD SIGEV_THREAD
#define CHAR_MIN 0
#define SYS_futex __NR_futex
#define MOUNTED _PATH_MOUNTED
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define SYS_sched_getattr __NR_sched_getattr
#define _GLIBCXX11_USE_C99_STDLIB 1
#define __IOV_MAX 1024
#define PRIuPTR __PRIPTR_PREFIX "u"
#define S_ISFIFO(mode) __S_ISTYPE((mode), __S_IFIFO)
#define __NR_fspick 433
#define __UINT64_C(c) c ## UL
#define PRIXLEAST16 "X"
#define _SYS_CDEFS_H 1
#define SYS_chdir __NR_chdir
#define ILL_ILLTRP ILL_ILLTRP
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define RENAME_WHITEOUT (1 << 2)
#define __cpp_lib_make_reverse_iterator 201402
#define MDBX_TRUST_RTC_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_TRUST_RTC)
#define AT_EACCESS 0x200
#define LLONG_MIN (-LLONG_MAX-1)
#define __dev_t_defined 
#define _INITIALIZER_LIST 
#define MADV_DOFORK 11
#define _POSIX_VERSION 200809L
#define _STDC_PREDEF_H 1
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define SYS_setns __NR_setns
#define _GLIBCXX_PACKAGE_BUGREPORT ""
#define INT_FAST8_WIDTH 8
#define __NR_sched_yield 124
#define __INT_WCHAR_T_H 
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define _STL_MULTIMAP_H 1
#define __cpp_decltype_auto 201304L
#define __cpp_lib_robust_nonmodifying_seq_ops 201304
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define __NR_munlock 229
#define DN_RENAME 0x00000010
#define __bitwise __bitwise__
#define _GLIBCXX_HAVE_SYMLINK 1
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define _GLIBCXX_HAS_NESTED_TYPE(_NTYPE) template<typename _Tp, typename = __void_t<>> struct __has_ ##_NTYPE : false_type { }; template<typename _Tp> struct __has_ ##_NTYPE<_Tp, __void_t<typename _Tp::_NTYPE>> : true_type { };
#define ENOTSOCK 88
#define LC_MONETARY __LC_MONETARY
#define __ARM_FEATURE_FMA 1
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define O_RDWR 02
#define _GLIBCXX_NATIVE_THREAD_ID pthread_self()
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _T_PTRDIFF_ 
#define __FLT_MAX_EXP__ 128
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define __FLT128_MAX_EXP__ 16384
#define PRIXLEAST64 __PRI64_PREFIX "X"
#define __NR_setuid 146
#define _GLIBCXX_BEGIN_NAMESPACE_CONTAINER 
#define FPE_CONDTRAP FPE_CONDTRAP
#define MDBX_CXX17_NOEXCEPT noexcept
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define SCHED_ISO 4
#define _GLIBCXX_UTILITY 1
#define EMPTY 0
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define __FLT32_MANT_DIG__ 24
#define _GLIBCXX_STDLIB_H 1
#define SVE_VQ_MAX __SVE_VQ_MAX
#define _STL_HEAP_H 1
#define __NR_llistxattr 12
#define PRIX8 "X"
#define __O_LARGEFILE 0
#define SYS_perf_event_open __NR_perf_event_open
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define __S_IFDIR 0040000
#define __SIZE_T__ 
#define SYS_acct __NR_acct
#define MADV_WILLNEED 3
#define SYS_sysinfo __NR_sysinfo
#define __stub_gtty 
#define MAP_HUGE_SHIFT 26
#define si_value _sifields._rt.si_sigval
#define __NR_fchown 55
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define O_DIRECTORY __O_DIRECTORY
#define _GLIBCXX_HAVE_USELOCALE 1
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define si_utime _sifields._sigchld.si_utime
#define SYS_sched_setparam __NR_sched_setparam
#define LC_PAPER __LC_PAPER
#define _GLIBCXX_HAVE_TGMATH_H 1
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define FFSYNC O_FSYNC
#define __NR_sched_setattr 274
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define S_IWRITE S_IWUSR
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP) } }
#define _GLIBCXX_DEQUE 1
#define _GLIBCXX_USE_C99_STDLIB _GLIBCXX11_USE_C99_STDLIB
#define __wur __attribute_warn_unused_result__
#define __FLT16_DIG__ 3
#define NL_TEXTMAX INT_MAX
#define LC_CTYPE __LC_CTYPE
#define SCNiLEAST8 "hhi"
#define __cpp_lib_atomic_is_always_lock_free 201603
#define __NR_process_madvise 440
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_RECURSIVE_NP) } }
#define CPU_COUNT_S(setsize,cpusetp) __CPU_COUNT_S (setsize, cpusetp)
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX INT_MAX
#define ATOMIC_CHAR8_T_LOCK_FREE __GCC_ATOMIC_CHAR8_T_LOCK_FREE
#define PROT_GROWSUP 0x02000000
#define _GLIBCXX_VERSION_INCLUDED 
#define _POSIX_RTSIG_MAX 8
#define __glibcxx_requires_partitioned_lower(_First,_Last,_Value) 
#define SYS_timerfd_create __NR_timerfd_create
#define _STL_ALGOBASE_H 1
#define PROT_MTE 0x20
#define __NR_umask 166
#define __off64_t_defined 
#define __F_GETSIG 11
#define __NR_getrandom 278
#define _GLIBCXX_NUM_CATEGORIES 6
#define __NR_setdomainname 162
#define _GLIBCXX_USE_C99_INTTYPES_TR1 1
#define __ORDER_PDP_ENDIAN__ 3412
#define __glibcxx_requires_sorted_set(_First1,_Last1,_First2) 
#define _POSIX_MEMLOCK 200809L
#define _ISOC95_SOURCE 1
#define EL2HLT 51
#define __cpp_nested_namespace_definitions 201411L
#define __ARM_64BIT_STATE 1
#define SVE_VQ_MIN __SVE_VQ_MIN
#define STATX_MTIME 0x00000040U
#define ACCOUNTING 9
#define __cpp_constinit 201907L
#define __cpp_lib_interpolate 201902L
#define __socklen_t_defined 
#define __NR_fstatfs __NR3264_fstatfs
#define _UNISTD_H 1
#define SYS_shmctl __NR_shmctl
#define MDBX_ASSUME_MALLOC_OVERHEAD (__SIZEOF_POINTER__ * 2u)
#define __have_pthread_attr_t 1
#define _GLIBCXX_HAVE_LIMIT_DATA 1
#define __STDC_FORMAT_MACROS 1
#define SYS_msgsnd __NR_msgsnd
#define SYS_pwritev __NR_pwritev
#define SYS_setresuid __NR_setresuid
#define SCNi8 "hhi"
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define __NR_fcntl __NR3264_fcntl
#define ILL_COPROC ILL_COPROC
#define _GLIBCXX_CTIME 1
#define __NR_readlinkat 78
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define __INT_FAST8_MAX__ 0x7f
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define _STRUCT_TIMESPEC 1
#define __SC_COMP_3264(_nr,_32,_64,_comp) __SC_3264(_nr, _32, _64)
#define ADJ_OFFSET 0x0001
#define VALGRIND_DESTROY_MEMPOOL(h) 
#define RAND_MAX 2147483647
#define SYS_getgroups __NR_getgroups
#define SS_ONSTACK SS_ONSTACK
#define SYS_nfsservctl __NR_nfsservctl
#define SYS_munlockall __NR_munlockall
#define RWH_WRITE_LIFE_MEDIUM 3
#define SYS_mq_timedsend __NR_mq_timedsend
#define __NR_mq_open 180
#define _CHAR_TRAITS_H 1
#define F_SETLK 6
#define _SC_PIPE _SC_PIPE
#define UINT16_WIDTH 16
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define __INT16_MAX__ 0x7fff
#define EKEYREJECTED 129
#define _GLIBCXX_CCTYPE 1
#define _BSD_SIZE_T_ 
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define SYS_io_destroy __NR_io_destroy
#define __DBL_MAX_EXP__ 1024
#define __FLT_IS_IEC_60559__ 2
#define SYS_fsconfig __NR_fsconfig
#define SYS_bind __NR_bind
#define _PSTL_CPP14_MAKE_REVERSE_ITERATOR_PRESENT (_MSC_VER >= 1900 || __cplusplus >= 201402L || __cpp_lib_make_reverse_iterator == 201402)
#define _GLIBCXX_HAVE_LIMIT_AS 1
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define _POSIX_QLIMIT 1
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define __GNUG__ 11
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define SYS_dup3 __NR_dup3
#define LC_NUMERIC __LC_NUMERIC
#define __NR_umount2 39
#define SYS_timer_create __NR_timer_create
#define __cpp_digit_separators 201309L
#define __HAVE_DISTINCT_FLOAT128 0
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define CLOCK_THREAD_CPUTIME_ID 3
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define STA_MODE 0x4000
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define __F_GETOWN_EX 16
#define SYS_mincore __NR_mincore
#define SYS_settimeofday __NR_settimeofday
#define _GLIBCXX_DEBUG_MACRO_SWITCH_H 1
#define _ASM_GENERIC_TYPES_H 
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ERRORCHECK_NP) } }
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define SYS_setsockopt __NR_setsockopt
#define MDBX_STRINGIFY(x) MDBX_STRINGIFY_HELPER(x)
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define O_NOATIME __O_NOATIME
#define _PATH_SHADOW "/etc/shadow"
#define IOV_MAX __IOV_MAX
#define _LOCALE_CLASSES_H 1
#define SYS_fchownat __NR_fchownat
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define SCHED_RESET_ON_FORK 0x40000000
#define __UINTMAX_C(c) c ## UL
#define _GLIBCXX_USE_LSTAT 1
#define _PATH_UTMP "/var/run/utmp"
#define O_SYNC 04010000
#define _POSIX_C_SOURCE 200809L
#define MDBX_ASSERT_CXX20_CONCEPT_SATISFIED(CONCEPT,TYPE) static_assert(CONCEPT<TYPE>)
#define _LOCALE_CLASSES_TCC 1
#define MAP_LOCKED 0x02000
#define __WCHAR_UNSIGNED__ 1
#define SYS_inotify_rm_watch __NR_inotify_rm_watch
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define __cpp_lib_type_trait_variable_templates 201510L
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define __NR_sched_rr_get_interval 127
#define MDBX_ENV_CHECKPID 0
#define _SC_THREADS _SC_THREADS
#define htobe32(x) __bswap_32 (x)
#define __isascii(c) (((c) & ~0x7f) == 0)
#define ENAVAIL 119
#define SYS_socket __NR_socket
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define _GLIBCXX_CXX_CONFIG_H 1
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define __USE_DYNAMIC_STACK_SIZE 1
#define SIGCONT 18
#define MADV_FREE 8
#define ELOOP 40
#define PRIu16 "u"
#define POSIX_MADV_SEQUENTIAL 2
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define __cpp_constexpr 201907L
#define _SC_SELECT _SC_SELECT
#define SYS_pwrite64 __NR_pwrite64
#define F_SETSIG __F_SETSIG
#define MAP_SYNC 0x80000
#define __NR_getxattr 8
#define __NR_newfstatat __NR3264_fstatat
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define SYS_fcntl __NR_fcntl
#define _LFS64_LARGEFILE 1
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __WCHAR_MAX __WCHAR_MAX__
#define __GLIBC_USE_ISOC2X 1
#define _LFS64_ASYNCHRONOUS_IO 1
#define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ADAPTIVE_NP) } }
#define __cpp_lib_shared_ptr_weak_type 201606
#define _ANSI_STDDEF_H 
#define PRIu32 "u"
#define __va_arg_pack() __builtin_va_arg_pack ()
#define SYS_msync __NR_msync
#define _LFS64_STDIO 1
#define __NR3264_ftruncate 46
#define __iovec_defined 1
#define FALLOC_FL_KEEP_SIZE 0x01
#define __cpp_lib_allocator_traits_is_always_equal 201411
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define LOCK_WRITE 128
#define SIGFPE 8
#define _XOPEN_SOURCE_EXTENDED 1
#define _VECTOR_TCC 1
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define __NR_setfsuid 151
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define SYS_bpf __NR_bpf
#define _PATH_DEFPATH "/usr/bin:/bin"
#define _GLIBCXX_END_NAMESPACE_VERSION 
#define ESR_MAGIC 0x45535201
#define SCNoMAX __PRI64_PREFIX "o"
#define LOCK_MAND 32
#define _PSTL_PRAGMA_MESSAGE_POLICIES(x) 
#define _GLIBCXX_USE_UTIMENSAT 1
#define INT8_C(c) c
#define ESTRPIPE 86
#define ENOMEDIUM 123
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _STL_UNINITIALIZED_H 1
#define DN_CREATE 0x00000004
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __NR_getsid 156
#define __USE_MISC 1
#define _BASIC_STRING_H 1
#define TRAP_BRKPT TRAP_BRKPT
#define SYS_llistxattr __NR_llistxattr
#define F_OFD_SETLK 37
#define TRAP_UNK TRAP_UNK
#define O_NDELAY O_NONBLOCK
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __FLT64_IS_IEC_60559__ 2
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __AARCH64EL__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define SCNo64 __PRI64_PREFIX "o"
#define CLONE_NEWPID 0x20000000
#define _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(A) 
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define _ALIGNED_BUFFER_H 1
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define __cpp_lib_polymorphic_allocator 201902L
#define SYS_recvmsg __NR_recvmsg
#define _GLIBCXX_HAVE_ACOSF 1
#define SCHED_BATCH 3
#define STA_FLL 0x0008
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define PRIxLEAST16 "x"
#define _GLIBCXX_HAVE_BUILTIN_IS_CONSTANT_EVALUATED 1
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __timer_t_defined 1
#define __WCLONE 0x80000000
#define SYS_read __NR_read
#define _SYS_STAT_H 1
#define __ARCH_WANT_SET_GET_RLIMIT 
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define _GLIBCXX_END_NAMESPACE_CXX11 }
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define _GLIBCXX_ICONV_CONST 
#define _GLIBCXX_OSTREAM 1
#define MREMAP_DONTUNMAP 4
#define PRIxLEAST32 "x"
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define EROFS 30
#define __NR_fchmodat 53
#define __FLT32_MAX_10_EXP__ 38
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define ADJ_FREQUENCY 0x0002
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define __cpp_lib_remove_cvref 201711L
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define INT32_C(c) c
#define _GLIBCXX_HAVE_FLOORF 1
#define _____fpos64_t_defined 1
#define _GLIBCXX_HAVE_FLOORL 1
#define SHRT_WIDTH 16
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define __NR_sync 81
#define _GLIBCXX_CWCTYPE 1
#define __NR_sched_setaffinity 122
#define S_IXGRP (S_IXUSR >> 3)
#define F_DUPFD_CLOEXEC 1030
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __WCHAR_T__ 
#define TTY_NAME_MAX 32
#define ELIBACC 79
#define __cpp_lib_array_constexpr 201811L
#define __glibc_objsize0(__o) __bos0 (__o)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __NR_move_pages 239
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __NR_utimensat 88
#define _POSIX_TIMERS 200809L
#define PRIxLEAST64 __PRI64_PREFIX "x"
#define PRIxFAST16 __PRIPTR_PREFIX "x"
#define __NR_sched_getattr 275
#define L_INCR SEEK_CUR
#define __unix 1
#define TRAP_BRANCH TRAP_BRANCH
#define __cpp_lib_unordered_map_try_emplace 201411
#define _SYS_WAIT_H 1
#define _BITS_PTHREADTYPES_COMMON_H 1
#define _GLIBCXX_NUM_CXX11_FACETS (_GLIBCXX_USE_DUAL_ABI ? 8 : 0)
#define _GLIBCXX_CDTOR_CALLABI 
#define __S_IFMT 0170000
#define _LIBINTL_H 1
#define __UINT_FAST16_TYPE__ long unsigned int
#define __cpp_lib_constexpr_memory 201811L
#define _MEMORYFWD_H 1
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define _POSIX_RAW_SOCKETS 200809L
#define _GLIBCXX_BITS_STD_ABS_H 
#define PRIxFAST32 __PRIPTR_PREFIX "x"
#define __PRAGMA_REDEFINE_EXTNAME 1
#define va_end(v) __builtin_va_end(v)
#define __glibcxx_signed_b(T,B) ((T)(-1) < 0)
#define __NR_setgroups 159
#define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
#define MADV_UNMERGEABLE 13
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define _STRINGS_H 1
#define __NR_keyctl 219
#define SI_MESGQ SI_MESGQ
#define __F_SETOWN 8
#define PRIX32 "X"
#define MDBX_CXX14_CONSTEXPR_VAR constexpr
#define SYS_getpeername __NR_getpeername
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define CLONE_VFORK 0x00004000
#define __BLKSIZE_T_TYPE __S32_TYPE
#define __INT_LEAST16_MAX__ 0x7fff
#define container_of(ptr,type,member) ((type *)((char *)(ptr) - offsetof(type, member)))
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define UCHAR_WIDTH 8
#define UINT64_WIDTH 64
#define __INT64_MAX__ 0x7fffffffffffffffL
#define SYS_shmat __NR_shmat
#define _BITS_ENDIAN_H 1
#define EDEADLK 35
#define __glibcxx_requires_can_decrement_range(_First1,_Last1,_First2) 
#define _GLIBCXX_MANGLE_SIZE_T m
#define STATX_MODE 0x00000002U
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define MDBX_USE_COPYFILERANGE 1
#define __FAST_MATH__ 1
#define _XOPEN_REALTIME 1
#define __SIG_ATOMIC_WIDTH__ 32
#define _GLIBCXX_RELEASE 11
#define __unreachable() __builtin_unreachable()
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define PRIxFAST64 __PRI64_PREFIX "x"
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define htole16(x) __uint16_identity (x)
#define SIGCHLD 17
#define _GLIBCXX_HAVE_FCNTL_H 1
#define _PATH_MNTTAB "/etc/fstab"
#define _GLIBCXX_SYMVER_GNU 1
#define __INT16_TYPE__ short int
#define PRIiLEAST16 "i"
#define MLOCK_ONFAULT 1U
#define bswap32(v) __builtin_bswap32(v)
#define SYS_timerfd_settime __NR_timerfd_settime
#define __NR_ioctl 29
#define EDOM 33
#define ADJ_SETOFFSET 0x0100
#define MDBX_ENV_CHECKPID_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_ENV_CHECKPID)
#define __glibcxx_requires_irreflexive_pred2(_First,_Last,_Pred) 
#define htole32(x) __uint32_identity (x)
#define _POSIX_FSYNC 200809L
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define F_WRLCK 1
#define F_GET_FILE_RW_HINT 1037
#define MDBX_CXX20_CONCEPT(CONCEPT,NAME) CONCEPT NAME
#define __cpp_guaranteed_copy_elision 201606L
#define _GLIBCXX_ERASE_IF_H 1
#define SIGSYS 31
#define CSIGNAL 0x000000ff
#define linux 1
#define MOD_MICRO ADJ_MICRO
#define SA_NOCLDSTOP 1
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define SYS_gettimeofday __NR_gettimeofday
#define SCNdMAX __PRI64_PREFIX "d"
#define __cpp_lib_hypot 201603
#define ____FILE_defined 1
#define _IOLBF 1
#define ILL_PRVREG ILL_PRVREG
#define __HAVE_FLOAT16 0
#define htole64(x) __uint64_identity (x)
#define FPE_FLTINV FPE_FLTINV
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define MAP_FIXED_NOREPLACE 0x100000
#define __GLIBCXX__ 20220421
#define F_SETLKW 7
#define __USE_POSIX2 1
#define __NR_kill 129
#define SA_INTERRUPT 0x20000000
#define __cpp_lib_constexpr_algorithms 201806L
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define MOD_ESTERROR ADJ_ESTERROR
#define O_LARGEFILE __O_LARGEFILE
#define _GLIBCXX_HAVE_LDEXPF 1
#define _GLIBCXX_HAVE_LDEXPL 1
#define SYS_getrlimit __NR_getrlimit
#define __FLT32_MIN_10_EXP__ (-37)
#define __GNUC_MINOR__ 3
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define _LP64 1
#define IPC_EXCL 02000
#define __FLT32X_DIG__ 15
#define _VA_LIST_ 
#define _GLIBCXX_CONCEPTS 1
#define __UINT8_TYPE__ unsigned char
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __NR_mq_timedreceive 183
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define _SC_PII_XTI _SC_PII_XTI
#define _GLIBCXX_HAVE_TRUNCATE 1
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define __NR_recvmsg 212
#define _PSTL_GCC_VERSION (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)
#define LC_TELEPHONE __LC_TELEPHONE
#define PRIXLEAST8 "X"
#define ENAMETOOLONG 36
#define __NR_fsmount 432
#define EFBIG 27
#define SYS_fsetxattr __NR_fsetxattr
#define CLD_STOPPED CLD_STOPPED
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DBL_HAS_QUIET_NAN__ 1
#define BOOL_WIDTH 1
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define MDBX_USE_OFDLOCKS_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_USE_OFDLOCKS)
#define __FLT16_HAS_INFINITY__ 1
#define CLONE_PIDFD 0x00001000
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define _GLIBCXX_FWDREF(_Tp) _Tp&&
#define __STDCPP_DEFAULT_NEW_ALIGNMENT__ 16
#define SA_STACK SA_ONSTACK
#define BUS_ADRERR BUS_ADRERR
#define CPU_CLR_S(cpu,setsize,cpusetp) __CPU_CLR_S (cpu, setsize, cpusetp)
#define CONCAT(a,b) a ##b
#define SYS_flock __NR_flock
#define __GXX_MERGED_TYPEINFO_NAMES 0
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define SYS_open_by_handle_at __NR_open_by_handle_at
#define _BACKWARD_AUTO_PTR_H 1
#define le64toh(x) __uint64_identity (x)
#define _GLIBCXX_MAKE_MOVE_IF_NOEXCEPT_ITERATOR(_Iter) std::__make_move_if_noexcept_iterator(_Iter)
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define CPU_AND(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, &)
#define __NR_clone3 435
#define __INTPTR_TYPE__ long int
#define MDBX_IF_CONSTEXPR constexpr
#define __WCHAR_TYPE__ unsigned int
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define __SIZEOF_FLOAT__ 4
#define __SLONGWORD_TYPE long int
#define _GLIBCXX_PACKAGE_TARNAME "libstdc++"
#define SYS_memfd_create __NR_memfd_create
#define __cpp_range_based_for 201603L
#define MNTTYPE_NFS "nfs"
#define S_ISBLK(mode) __S_ISTYPE((mode), __S_IFBLK)
#define __NR_dup3 24
#define SYS_move_pages __NR_move_pages
#define ARRAY_LENGTH(array) (sizeof(::__ArraySizeHelper(array)))
#define _GLIBCXX_IOSFWD 1
#define __ARM_ARCH_8A 1
#define __NR_userfaultfd 282
#define __NR_personality 92
#define __NR_flistxattr 13
#define __stub_chflags 
#define SCNxPTR __PRIPTR_PREFIX "x"
#define __NR_get_robust_list 100
#define M_TOP_PAD -2
#define _GLIBCXX_USE_CXX11_ABI 1
#define _GLIBCXX_CSTDARG 1
#define __cpp_nontype_template_parameter_class 201806L
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define __cpp_concepts 201907L
#define EDOTDOT 73
#define __cpp_decltype 200707L
#define _GLIBCXX_USE_C99 1
#define __FLT32_DECIMAL_DIG__ 9
#define __O_DIRECT 0200000
#define _CODECVT_H 1
#define _GLIBCXX_DEFAULT_ABI_TAG _GLIBCXX_ABI_TAG_CXX11
#define SYS_lremovexattr __NR_lremovexattr
#define __NR_geteuid 175
#define SYS_fallocate __NR_fallocate
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define CLONE_NEWIPC 0x08000000
#define INT_LEAST16_WIDTH 16
#define BUFSIZ 8192
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define SYS_pivot_root __NR_pivot_root
#define _WCTYPE_H 1
#define _DEQUE_TCC 1
#define __LDBL_REDIR2_DECL(name) 
#define _GLIBCXX_SYMVER 1
#define __FLT_MAX_10_EXP__ 38
#define _OSTREAM_TCC 1
#define _WCHAR_T_DECLARED 
#define CLONE_UNTRACED 0x00800000
#define MAP_SHARED 0x01
#define __cpp_lib_enable_shared_from_this 201603
#define __NR_getcwd 17
#define WNOWAIT 0x01000000
#define PRIXFAST8 "X"
#define _PSTL_UDS_PRESENT (__INTEL_COMPILER >= 1900 && __INTEL_COMPILER_BUILD_DATE >= 20180626)
#define __ASM_GENERIC_PARAM_H 
#define _GLIBCXX_HAVE_STRTOF 1
#define SYS_semget __NR_semget
#define _SC_2_PBS _SC_2_PBS
#define _FCNTL_H 1
#define __NR_clone 220
#define SCNoFAST16 __PRIPTR_PREFIX "o"
#define __LC_COLLATE 3
#define __STDCPP_THREADS__ 1
#define S_IREAD S_IRUSR
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define PRIoMAX __PRI64_PREFIX "o"
#define EPROTONOSUPPORT 93
#define _SYS_SENDFILE_H 1
#define UINT_MAX (INT_MAX * 2U + 1U)
#define ADJ_TICK 0x4000
#define __TIMESIZE 64
#define SYS_ppoll __NR_ppoll
#define __GCC_ATOMIC_CHAR8_T_LOCK_FREE 2
#define SYS_execveat __NR_execveat
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define SCNoFAST32 __PRIPTR_PREFIX "o"
#define __SIGRTMAX 64
#define __USE_LARGEFILE64 1
#define __FLT16_HAS_QUIET_NAN__ 1
#define SYNC_FILE_RANGE_WRITE 2
#define _GLIBCXX_HAVE_STRXFRM_L 1
#define __cookie_io_functions_t_defined 1
#define __gid_t_defined 
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define __gthrw(name) __gthrw2(__gthrw_ ## name,name,name)
#define _GLIBCXX_HAVE_STDINT_H 1
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define _GLIBCXX_FULLY_DYNAMIC_STRING 0
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define _POSIX2_EXPR_NEST_MAX 32
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define SYS_io_pgetevents __NR_io_pgetevents
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define _GLIBCXX_HAVE_FENV_H 1
#define SCNd64 __PRI64_PREFIX "d"
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define _GLIBCXX_HAVE_DIRENT_H 1
#define _GLIBCXX_DEBUG_PEDASSERT(_Condition) 
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define __S_IFSOCK 0140000
#define __UINT_LEAST32_TYPE__ unsigned int
#define ADJ_OFFSET_SS_READ 0xa001
#define SCNu16 "hu"
#define _XBS5_ILP32_OFFBIG -1
#define __NR_prlimit64 261
#define CLOCK_BOOTTIME 7
#define _CTYPE_H 1
#define __sigset_t_defined 1
#define PRIiSIZE PRIiPTR
#define __LDBL_MIN_EXP__ (-16381)
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define SYS_mlock2 __NR_mlock2
#define __NR_dup 23
#define SYS_fanotify_mark __NR_fanotify_mark
#define SYS_timer_getoverrun __NR_timer_getoverrun
#define _GLIBCXX_HAVE_EXPL 1
#define _STL_VECTOR_H 1
#define _POSIX_VDISABLE '\0'
#define __NR_sched_get_priority_min 126
#define F_GETLK64 5
#define FD_SETSIZE __FD_SETSIZE
#define stdout stdout
#define _SC_SIGNALS _SC_SIGNALS
#define NL_SETMAX INT_MAX
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define __struct_FILE_defined 1
#define __cpp_template_auto 201606L
#define INTPTR_WIDTH __WORDSIZE
#define __INT_LEAST8_MAX__ 0x7f
#define SIGUSR1 10
#define _GLIBCXX_STACK 1
#define NODEV ((dev_t) -1)
#define __FLT32X_MAX_10_EXP__ 308
#define LOCK_SH 1
#define ____mbstate_t_defined 1
#define STATX__RESERVED 0x80000000U
#define CPU_SET_S(cpu,setsize,cpusetp) __CPU_SET_S (cpu, setsize, cpusetp)
#define STA_NANO 0x2000
#define __SIGRTMIN 32
#define MAP_GROWSDOWN 0x00100
#define __cpp_lib_launder 201606
#define O_RDONLY 00
#define LIBMDBX_API_TYPE LIBMDBX_API
#define CPU_ISSET_S(cpu,setsize,cpusetp) __CPU_ISSET_S (cpu, setsize, cpusetp)
#define PRIxFAST8 "x"
#define _GLIBCXX_RANGE_ACCESS_H 1
#define _BITS_SIGNUM_GENERIC_H 1
#define EMSGSIZE 90
#define __ASM_POSIX_TYPES_H 
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define SCNo32 "o"
#define __FLT32_MIN_EXP__ (-125)
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define RWH_WRITE_LIFE_NONE 1
#define PRIXFAST64 __PRI64_PREFIX "X"
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define STATX_ATTR_COMPRESSED 0x00000004
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define CPU_EQUAL(cpusetp1,cpusetp2) __CPU_EQUAL_S (sizeof (cpu_set_t), cpusetp1, cpusetp2)
#define SYS_readlinkat __NR_readlinkat
#define AT_STATX_FORCE_SYNC 0x2000
#define SYS_socketpair __NR_socketpair
#define __UINT8_C(c) c
#define _GLIBCXX_HAVE_CEILF 1
#define _GLIBCXX_HAVE_CEILL 1
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define MOD_MAXERROR ADJ_MAXERROR
#define MDBX_CXX14_CONSTEXPR constexpr
#define __stub_stty 
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define SEGV_MAPERR SEGV_MAPERR
#define __has_feature(x) (0)
#define _PTHREAD_H 1
#define __stub___compat_query_module 
#define __NR_clock_nanosleep 115
#define MNTTYPE_SWAP "swap"
#define _PSTL_EXECUTION_POLICY_DEFS_H 
#define __ARM_NEON 1
#define __REDIRECT_NTH(name,proto,alias) name proto __THROW __asm__ (__ASMNAME (#alias))
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define EAGAIN 11
#define _SC_IOV_MAX _SC_IOV_MAX
#define SYS_sched_getscheduler __NR_sched_getscheduler
#define _SC_PASS_MAX _SC_PASS_MAX
#define SYS_kcmp __NR_kcmp
#define W_STOPCODE(sig) __W_STOPCODE (sig)
#define _GLIBCXX_READ_MEM_BARRIER __atomic_thread_fence (__ATOMIC_ACQUIRE)
#define SCNiFAST8 "hhi"
#define __PRI64_PREFIX "l"
#define _SC_LONG_BIT _SC_LONG_BIT
#define __stack_t_defined 1
#define BOOT_TIME 2
#define _POSIX_MAPPED_FILES 200809L
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 01000
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define VALGRIND_ENABLE_ADDR_ERROR_REPORTING_IN_RANGE(a,s) 
#define SYS_mq_unlink __NR_mq_unlink
#define __NR_setxattr 5
#define _GLIBCXX_GTHRW(name) __gthrw(pthread_ ## name); static inline int __glibcxx_ ## name (pthread_rwlock_t *__rwlock) { if (__gthread_active_p ()) return __gthrw_(pthread_ ## name) (__rwlock); else return 0; }
#define _GLIBCXX_ASAN_ANNOTATE_BEFORE_DEALLOC 
#define SYS_delete_module __NR_delete_module
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define SIGILL 4
#define __cpp_alias_templates 200704L
#define VALGRIND_MAKE_MEM_DEFINED(a,s) 
#define STATX_ATTR_IMMUTABLE 0x00000010
#define __cpp_lib_null_iterators 201304L
#define _STATBUF_ST_NSEC 
#define _GLIBCXX_USE_ST_MTIM 1
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __NR_renameat2 276
#define ENOTCONN 107
#define STA_PPSFREQ 0x0002
#define _STL_BVECTOR_H 1
#define __NR_fsconfig 431
#define PRIdLEAST8 "d"
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define _PATH_BSHELL "/bin/sh"
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define _PATH_VARTMP "/var/tmp/"
#define __cpp_lib_chrono_udls 201304
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define S_IFLNK __S_IFLNK
#define __NR_syscalls 449
#define SYS_rt_sigsuspend __NR_rt_sigsuspend
#define _POSIX_UIO_MAXIOV 16
#define _PSTL_PAR_BACKEND_SERIAL 
#define SYS_unlinkat __NR_unlinkat
#define P_tmpdir "/tmp"
#define __cpp_lib_is_scoped_enum 202011L
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _POSIX_MESSAGE_PASSING 200809L
#define __cpp_lib_make_unique 201304
#define __NR_memfd_create 279
#define __NR_mprotect 226
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define __WORDSIZE_TIME64_COMPAT32 0
#define _SYS_FILE_H 1
#define EPFNOSUPPORT 96
#define INT_WIDTH 32
#define ESRMNT 69
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define CPU_FREE(cpuset) __CPU_FREE (cpuset)
#define MADV_RANDOM 1
#define _GLIBCXX_HAVE_AS_SYMVER_DIRECTIVE 1
#define PTHREAD_ONCE_INIT 0
#define __DBL_DECIMAL_DIG__ 17
#define SYS_getppid __NR_getppid
#define __cpp_lib_assume_aligned 201811L
#define _GLIBCXX_CINTTYPES 1
#define SYS_setdomainname __NR_setdomainname
#define _PSTL_PRAGMA_DECLARE_REDUCTION(NAME,OP) _PSTL_PRAGMA(omp declare reduction(NAME:OP : omp_out(omp_in)) initializer(omp_priv = omp_orig))
#define _POSIX_MQ_PRIO_MAX 32
#define MDBX_DISABLE_PAGECHECKS 0
#define _PSTL_GLUE_ALGORITHM_DEFS_H 
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define _SIZE_T 
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define INT_LEAST64_WIDTH 64
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define MDBX_LOCKING_WIN32FILES -1
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __DBL_NORM_MAX__ double(1.79769313486231570814527423731704357e+308L)
#define M_MMAP_THRESHOLD -3
#define _BACKWARD_BINDERS_H 1
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define __cpp_lib_is_aggregate 201703
#define _GLIBCXX_RANGES_BASE_H 1
#define F_EXLCK 4
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define UINT16_MAX (65535)
#define __NR_fsync 82
#define BOOL_MAX 1
#define NCARGS 131072
#define __glibcxx_requires_string(_String) 
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define SI_KERNEL SI_KERNEL
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define PRIdFAST16 __PRIPTR_PREFIX "d"
#define _STL_MULTISET_H 1
#define __INTMAX_WIDTH__ 64
#define SCNxFAST64 __PRI64_PREFIX "x"
#define _POSIX_REENTRANT_FUNCTIONS 1
#define __NR_fallocate 47
#define _GLIBCXX98_USE_C99_WCHAR 1
#define _GLIBCXX_NOTHROW _GLIBCXX_USE_NOEXCEPT
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define _GLIBCXX_ATOMIC_BASE_H 1
#define __ORDER_BIG_ENDIAN__ 4321
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define STATX_ATTR_DAX 0x00200000
#define __UINT64_TYPE__ long unsigned int
#define CHAR_WIDTH 8
#define MDBX_CPU_WRITEBACK_INCOHERENT 1
#define _GLIBCXX_USE_SCHED_YIELD 1
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define EISCONN 106
#define __cpp_lib_source_location 201907L
#define S_ISLNK(mode) __S_ISTYPE((mode), __S_IFLNK)
#define F_ADD_SEALS 1033
#define _GLIBCXX_HAVE_ATANF 1
#define SCNiMAX __PRI64_PREFIX "i"
#define _GLIBCXX_HAVE_LC_MESSAGES 1
#define __ATOMIC_RELEASE 3
#define __glibc_has_builtin(name) __has_builtin (name)
#define _LFS_ASYNCHRONOUS_IO 1
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define CPU_OR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, |)
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define EUSERS 87
#define _VA_LIST_T_H 
#define __cpp_lib_latch 201907L
#define INT_FAST16_MAX (9223372036854775807L)
#define _SHARED_PTR_ATOMIC_H 1
#define DN_MODIFY 0x00000002
#define CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) __CPU_EQUAL_S (setsize, cpusetp1, cpusetp2)
#define STATX_ATTR_NODUMP 0x00000040
#define __PIC__ 2
#define _PATH_DEV "/dev/"
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define ENETDOWN 100
#define __UINT_FAST32_TYPE__ long unsigned int
#define _LINUX_PARAM_H 
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define _PSTL_CPP14_VARIABLE_TEMPLATES_PRESENT (!__INTEL_COMPILER || __INTEL_COMPILER >= 1700) && (_MSC_FULL_VER >= 190023918 || __cplusplus >= 201402L)
#define O_NOFOLLOW __O_NOFOLLOW
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define _GLIBCXX_HAVE_EXCEPTION_PTR_SINCE_GCC46 1
#define POLL_ERR POLL_ERR
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define F_SEAL_FUTURE_WRITE 0x0010
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SVE_VL_MAX __SVE_VL_MAX
#define _GLIBCXX_BEGIN_EXTERN_C extern "C" {
#define __NR3264_fadvise64 223
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define _CONCEPT_CHECK_H 1
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define _GLIBCXX_HAVE_NETINET_IN_H 1
#define __cpp_lib_atomic_wait 201907L
#define __cpp_lib_math_special_functions 201603L
#define __fsfilcnt_t_defined 
#define SYS_fchmod __NR_fchmod
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define __FP_FAST_FMA 1
#define SYS_sync_file_range __NR_sync_file_range
#define F_SET_FILE_RW_HINT 1038
#define _GLIBCXX_ATOMIC_WORD_H 1
#define _GLIBCXX98_USE_C99_STDIO 1
#define SA_NOCLDWAIT 2
#define __va_list__ 
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define __cpp_lib_nonmember_container_access 201411
#define _PATH_DEVNULL "/dev/null"
#define SYS_sethostname __NR_sethostname
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX_ASYNC_IO 1
#define SYS_remap_file_pages __NR_remap_file_pages
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define ERFKILL 132
#define SYS_munlock __NR_munlock
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
#define __cpp_lib_filesystem 201703
#define __INT32_TYPE__ int
#define DN_MULTISHOT 0x80000000
#define MAP_FIXED 0x10
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define _GLIBCXX_USE_LFS 1
#define __SIZEOF_DOUBLE__ 8
#define __cpp_exceptions 199711L
#define __NR_listxattr 11
#define SYS_symlinkat __NR_symlinkat
#define __cpp_lib_endian 201907L
#define __INT_LEAST32_WIDTH__ 32
#define EPROTOTYPE 91
#define __SWORD_TYPE long int
#define __NR_fadvise64 __NR3264_fadvise64
#define be16toh(x) __bswap_16 (x)
#define __NR_shmctl 195
#define EL3HLT 46
#define __cpp_lib_string_contains 202011L
#define __NR_getegid 177
#define _BITS_POSIX1_LIM_H 1
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define SYS_vhangup __NR_vhangup
#define __NR_getgid 176
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define SEM_FAILED ((sem_t *) 0)
#define SYS_capset __NR_capset
#define _T_SIZE 
#define UINT8_C(c) c
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define __GTHREAD_ONCE_INIT PTHREAD_ONCE_INIT
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define _GLIBCXX_CSTDINT 1
#define __cpp_lib_barrier 201907L
#define __GLIBCXX_TYPE_INT_N_0 __int128
#define SVE_VL_MIN __SVE_VL_MIN
#define __INT_FAST16_WIDTH__ 64
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define _POSIX_V7_ILP32_OFFBIG -1
#define _GLIBCXX_MAKE_MOVE_ITERATOR(_Iter) std::make_move_iterator(_Iter)
#define ELIBBAD 80
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define _CS_V7_ENV _CS_V7_ENV
#define __glibc_clang_prereq(maj,min) 0
#define __SC_THREAD_STACK_MIN_VALUE 75
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define _GLIBCXX17_DEPRECATED [[__deprecated__]]
#define ECONNREFUSED 111
#define _XOPEN_LIM_H 1
#define si_call_addr _sifields._sigsys._call_addr
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define _GLIBCXX_STDC_HEADERS 1
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _ASM_GENERIC_ERRNO_H 
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define _RWLOCK_INTERNAL_H 
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define UINT_FAST8_WIDTH 8
#define __DBL_MAX_10_EXP__ 308
#define __hidden __attribute__((__visibility__("hidden")))
#define _NODE_HANDLE 1
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define __NR_mount_setattr 442
#define __NR_ioprio_get 31
#define __USE_XOPEN_EXTENDED 1
#define __ASM_BITSPERLONG_H 
#define _POSIX_TRACE_LOG -1
#define _BITS_STRING_FORTIFIED_H 1
#define __INT16_C(c) c
#define MDBX_64BIT_CAS_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_64BIT_CAS)
#define __ASM_PARAM_H 
#define __ARM_ARCH_ISA_A64 1
#define _PATH_DEVDB "/var/run/dev.db"
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define MS_INVALIDATE 2
#define MAP_HUGE_MASK 0x3f
#define _GLIBCXX_HAVE_SYS_IOCTL_H 1
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SIG_IGN ((__sighandler_t) 1)
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define _GLIBCXX_HAVE_VWSCANF 1
#define __NR_capset 91
#define CLONE_SYSVSEM 0x00040000
#define _GLIBCXX_USE_C99_CTYPE_TR1 1
#define __PTRDIFF_TYPE__ long int
#define __VERSION__ "11.3.0"
#define EADV 68
#define SYS_getrandom __NR_getrandom
#define __NR_setpriority 140
#define SIGRTMIN (__libc_current_sigrtmin ())
#define SYS_ioprio_set __NR_ioprio_set
#define _BITS_STAT_H 1
#define __cpp_lib_is_constant_evaluated 201811L
#define SCNoLEAST8 "hho"
#define CPU_AND_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, &)
#define __EXCEPTIONS 1
#define SYS_fremovexattr __NR_fremovexattr
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define SYS_mq_getsetattr __NR_mq_getsetattr
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define __NR_ppoll 73
#define ENOPKG 65
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define _BITS_FLOATN_H 
#define _PSTL_PRAGMA_SIMD_EARLYEXIT 
#define __throw_exception_again throw
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define SYS_sendmsg __NR_sendmsg
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define STA_PLL 0x0001
#define __NR_getrusage 165
#define MADV_POPULATE_WRITE 23
#define _GLIBCXX_FS_PATH_H 1
#define __SYSCALL(x,y) 
#define EXFULL 54
#define _GLIBCXX_NUM_LBDL_ALT128_FACETS (4 + (_GLIBCXX_USE_DUAL_ABI ? 2 : 0))
#define __STDC_LIMIT_MACROS 
#define __UINTPTR_TYPE__ long unsigned int
#define SYS_utimensat __NR_utimensat
#define SYS_mq_notify __NR_mq_notify
#define MDBX_DPL_PREALLOC_FOR_RADIXSORT 1
#define _GLIBCXX_INLINE_VERSION 0
#define CLD_KILLED CLD_KILLED
#define __NR_arch_specific_syscall 244
#define _STATBUF_ST_RDEV 
#define __cpp_lib_bool_constant 201505
#define __bitwise__ 
#define __NR_vmsplice 75
#define __SVE_NUM_PREGS 16
#define _GLIBCXX_DOUBLE_IS_IEEE_BINARY64 1
#define __cpp_lib_tuples_by_type 201304
#define __LDBL_MIN_10_EXP__ (-4931)
#define O_PATH __O_PATH
#define _SC_FIFO _SC_FIFO
#define _PATH_TMP "/tmp/"
#define _GLIBCXX_ERROR_CONSTANTS 1
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define SYS_readv __NR_readv
#define SCNxLEAST16 "hx"
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define SIG_SETMASK 2
#define SYS_mremap __NR_mremap
#define _GLIBCXX_VERBOSE 1
#define MDBX_CXX11_CONSTEXPR_VAR constexpr
#define _GLIBCXX_HAVE_ISINFF 1
#define __cpp_user_defined_literals 200809L
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define _GLIBCXX_HAVE_ISINFL 1
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define _GLIBCXX_USE_PTHREAD_MUTEX_CLOCKLOCK 1
#define SYS_setxattr __NR_setxattr
#define _POSIX_OPEN_MAX 20
#define __cpp_lib_atomic_float 201711L
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define __NR_writev 66
#define __FLT128_DECIMAL_DIG__ 36
#define SYS_process_madvise __NR_process_madvise
#define ENOTUNIQ 76
#define _STL_MAP_H 1
#define PTRDIFF_MAX (9223372036854775807L)
#define _GETOPT_CORE_H 1
#define SCNdFAST32 __PRIPTR_PREFIX "d"
#define __FLT_DECIMAL_DIG__ 9
#define _CXXABI_INIT_EXCEPTION_H 1
#define PRIo32 "o"
#define __cpp_lib_constexpr_char_traits 201811L
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __NR_tgkill 131
#define __FLT_MIN_10_EXP__ (-37)
#define _RANGES_ALGO_H 1
#define MDBX_NOSANITIZE_ENUM __attribute((__no_sanitize__("enum")))
#define RUN_LVL 1
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define __FLT16_DECIMAL_DIG__ 5
#define _GLIBCXX11_USE_C99_WCHAR 1
#define __INT_LEAST64_WIDTH__ 64
#define _GLIBCXX11_DEPRECATED _GLIBCXX_DEPRECATED
#define INT_LEAST16_MAX (32767)
#define PRIoLEAST8 "o"
#define ASAN_UNPOISON_MEMORY_REGION(addr,size) ((void)(addr), (void)(size))
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define _GNU_SOURCE 1
#define SCNuLEAST32 "u"
#define _POSIX_SAVED_IDS 1
#define __P(args) args
#define SYS_getsockopt __NR_getsockopt
#define _POSIX_BARRIERS 200809L
#define MDBX_VERSION_MINOR 11
#define RWF_DSYNC 0x00000002
#define _GLIBCXX17_CONSTEXPR constexpr
#define __ATOMIC_ACQ_REL 4
#define __U32_TYPE unsigned int
#define _GLIBCXX_HAVE_EXECINFO_H 1
#define __NR_tkill 130
#define _GLIBCXX_USE_INT128 1
#define _STDLIB_H 1
#define _T_WCHAR 
#define _EXCEPTION_PTR_H 
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define _GLIBCXX98_USE_C99_MATH 1
#define _GLIBCXX_HAVE_SYS_SDT_H 1
#define _BITS_FLOATN_COMMON_H 
#define __NR_mq_getsetattr 185
#define S_ISCHR(mode) __S_ISTYPE((mode), __S_IFCHR)
#define _GLIBCXX_HAVE_BUILTIN_IS_SAME 1
#define _STL_PAIR_H 1
#define CLONE_SETTLS 0x00080000
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define si_timerid _sifields._timer.si_tid
#define _BITS_SIGEVENT_CONSTS_H 1
#define __FLT32X_MAX_EXP__ 1024
#define ____sigset_t_defined 
#define SYS_ftruncate __NR_ftruncate
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define __cpp_nontype_template_parameter_auto 201606L
#define _PATH_CSHELL "/bin/csh"
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define _GLIBCXX_PARSE_NUMBERS_H 1
#define O_NOCTTY 0400
#define AIO_PRIO_DELTA_MAX 20
#define __NR_connect 203
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define SYS_lgetxattr __NR_lgetxattr
#define __ARM_SIZEOF_WCHAR_T 4
#define __NR_init_module 105
#define __ATOMIC_ACQUIRE 2
#define __glibcxx_requires_valid_range(_First,_Last) 
#define _POSIX2_BC_SCALE_MAX 99
#define _GLIBCXX_MOVE_BACKWARD3(_Tp,_Up,_Vp) std::move_backward(_Tp, _Up, _Vp)
#define __NR_delete_module 106
#define __ARM_FEATURE_UNALIGNED 1
#define ACTOR_ID_MAX INT16_MAX
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __GCC_IEC_559_COMPLEX 0
#define SYS_linkat __NR_linkat
#define __uid_t_defined 
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __cpp_aggregate_nsdmi 201304L
#define LLONG_WIDTH 64
#define __UINT_LEAST8_TYPE__ unsigned char
#define __S_ISTYPE(mode,mask) (((mode) & __S_IFMT) == (mask))
#define EUNATCH 49
#define PRIXMAX __PRI64_PREFIX "X"
#define INT_LEAST16_MIN (-32767-1)
#define __flexarr []
#define _SC_LINE_MAX _SC_LINE_MAX
#define _SCHED_H 1
#define _BITS_SETJMP_H 1
#define __NR_name_to_handle_at 264
#define __cpp_impl_three_way_comparison 201907L
#define __stub_fchflags 
#define SYS_reboot __NR_reboot
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define _GLIBCXX_CLOCALE 1
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define PTHREAD_CANCELED ((void *) -1)
#define _BITS_TIME_H 1
#define _GLIBCXX_TXN_SAFE_DYN 
#define O_ACCMODE 0003
#define SYS_rt_sigreturn __NR_rt_sigreturn
#define _PSTL_PRAGMA_DECLARE_SIMD _PSTL_PRAGMA(omp declare simd)
#define SYS_setitimer __NR_setitimer
#define __FSWORD_T_TYPE __SWORD_TYPE
#define SIG_HOLD ((__sighandler_t) 2)
#define __WCHAR_MAX__ 0xffffffffU
#define EAFNOSUPPORT 97
#define SYS_msgctl __NR_msgctl
#define _STDDEF_H_ 
#define SYS_sync __NR_sync
#define _COMPARE 
#define __cpp_lib_chrono 201611
#define EEXIST 17
#define __cpp_designated_initializers 201707L
#define __must_check_result __attribute__((__warn_unused_result__))
#define _GLIBCXX_HAVE_PLATFORM_WAIT 1
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define _GLIBCXX_HAVE_LOCALE_H 1
#define S_IFSOCK __S_IFSOCK
#define VALGRIND_DISABLE_ADDR_ERROR_REPORTING_IN_RANGE(a,s) 
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define __S_ISUID 04000
#define __cpp_lib_string_view 201803L
#define _IOS_BASE_H 1
#define _GLIBCXX_HAVE_SOCKATMARK 1
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define INT16_C(c) c
#define __WINT_MAX__ 0xffffffffU
#define _SC_2_C_DEV _SC_2_C_DEV
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define __SIZEOF_PTHREAD_ATTR_T 64
#define INT8_MAX (127)
#define __cpp_lib_constexpr_complex 201711L
#define CLD_TRAPPED CLD_TRAPPED
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define __cpp_lib_constexpr_dynamic_alloc 201907L
#define MQ_PRIO_MAX 32768
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define STATX_BASIC_STATS 0x000007ffU
#define _GETOPT_POSIX_H 1
#define LC_ALL __LC_ALL
#define _XOPEN_SOURCE 700
#define _POSIX2_BC_DIM_MAX 2048
#define UINT_LEAST32_WIDTH 32
#define EILSEQ 84
#define __cpp_lib_atomic_flag_test 201907L
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define REGISTER_TESTCASE(NAME) static registry::factory<testcase_ ##NAME> gRegister_ ##NAME( ac_ ##NAME, MDBX_STRINGIFY(NAME))
#define ESPIPE 29
#define SYS_tkill __NR_tkill
#define RENAME_EXCHANGE (1 << 1)
#define __cpp_lib_is_nothrow_convertible 201806L
#define _POSIX_TTY_NAME_MAX 9
#define __USE_LARGEFILE 1
#define _GLIBCXX_USE_WEAK_REF __GXX_WEAK__
#define SCNxFAST8 "hhx"
#define SI_DETHREAD SI_DETHREAD
#define __NR_waitid 95
#define __GTHREAD_MUTEX_INIT_FUNCTION __gthread_mutex_init_function
#define SYS_get_mempolicy __NR_get_mempolicy
#define __OFF_T_MATCHES_OFF64_T 1
#define __NR_rt_sigqueueinfo 138
#define __NR_nanosleep 101
#define _PATH_VI "/usr/bin/vi"
#define PRIdMAX __PRI64_PREFIX "d"
#define _GLIBCXX_USE_RANDOM_TR1 1
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define ST_IMMUTABLE ST_IMMUTABLE
#define __cpp_lib_shared_ptr_arrays 201611L
#define SYS_kexec_file_load __NR_kexec_file_load
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define _CXXABI_FORCED_H 1
#define INT16_MAX (32767)
#define __STDC__ 1
#define MADV_MERGEABLE 12
#define __cpp_lib_any 201606L
#define _WCHAR_T 
#define _GLIBCXX_USE_LONG_LONG 1
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __S_IREAD 0400
#define ADJ_ESTERROR 0x0008
#define EHOSTUNREACH 113
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
#define __NR_shmdt 197
#define __GCC_IEC_559 0
#define SYS_adjtimex __NR_adjtimex
#define F_GETOWN_EX __F_GETOWN_EX
#define _IOFBF 0
#define LOCK_READ 64
#define __dll_export __attribute__((__visibility__("default")))
#define _STL_SET_H 1
#define _POSIX2_BC_STRING_MAX 1000
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define SYS_removexattr __NR_removexattr
#define _GLIBCXX_PSEUDO_VISIBILITY(V) 
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define SIGXCPU 24
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 1
#define _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(A) 
#define SYS_preadv __NR_preadv
#define F_GETPIPE_SZ 1032
#define IPC_NOWAIT 04000
#define _GLIBCXX_LT_OBJDIR ".libs/"
#define __has_warning(x) (0)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __cpp_lib_constexpr_string_view 201811L
#define MDBX_64BIT_ATOMIC_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_64BIT_ATOMIC)
#define FNONBLOCK O_NONBLOCK
#define XATTR_SIZE_MAX 65536
#define _PATH_STDPATH "/usr/bin:/bin:/usr/sbin:/sbin"
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define __cpp_variadic_templates 200704L
#define SCHED_DEADLINE 6
#define ILL_BADIADDR ILL_BADIADDR
#define _GLIBCXX_HAVE_CDTOR_CALLABI 0
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __NR_quotactl_fd 443
#define EOWNERDEAD 130
#define _GLIBCXX_USE_C99_COMPLEX_TR1 1
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define __NR_epoll_pwait2 441
#define __NR_gettid 178
#define _UNIQUE_PTR_H 1
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define SYS_vmsplice __NR_vmsplice
#define POLL_MSG POLL_MSG
#define _GLIBCXX_HAVE_FABSF 1
#define INT16_MIN (-32767-1)
#define __FINITE_MATH_ONLY__ 1
#define si_overrun _sifields._timer.si_overrun
#define __sig_atomic_t_defined 1
#define _PSTL_PRAGMA_SIMD_INCLUSIVE_SCAN(PRM) 
#define _BITS_ERRNO_H 1
#define SYS_signalfd4 __NR_signalfd4
#define __cpp_variable_templates 201304L
#define __cpp_lib_integral_constant_callable 201304
#define _GLIBCXX_GTHREAD_USE_WEAK 0
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define MOD_TIMECONST ADJ_TIMECONST
#define _GLIBCXX_CHRONO 1
#define __sched_priority sched_priority
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define FALLOC_FL_ZERO_RANGE 0x10
#define SIGEV_NONE SIGEV_NONE
#define __LC_IDENTIFICATION 12
#define __NR_setregid 143
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define SYS_lsetxattr __NR_lsetxattr
#define STA_PPSERROR 0x0800
#define __pid_t_defined 
#define ERANGE 34
#define ECANCELED 125
#define _GLIBCXX_BEGIN_NAMESPACE_VERSION 
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define IPC_SET 1
#define bswap64(v) __builtin_bswap64(v)
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define __DBL_DENORM_MIN__ double(4.94065645841246544176568792868221372e-324L)
#define SYS_move_mount __NR_move_mount
#define __NR_membarrier 283
#define _THREAD_MUTEX_INTERNAL_H 1
#define LIBMDBX_INLINE_API(TYPE,NAME,ARGS) static __inline TYPE NAME ARGS
#define __LDBL_REDIR1(name,proto,alias) name proto
#define __cpp_lib_erase_if 202002L
#define SHRT_MAX __SHRT_MAX__
#define __size_t 
#define EOF (-1)
#define NGROUPS_MAX 65536
#define _GLIBCXX_HAVE_FREXPF 1
#define _GLIBCXX_HAVE_FREXPL 1
#define MDBX_CXX20_LIKELY [[likely]]
#define INT_FAST8_MAX (127)
#define MOD_STATUS ADJ_STATUS
#define _GLIBCXX_PURE __attribute__ ((__pure__))
#define ETXTBSY 26
#define __NR_io_pgetevents 292
#define __NR_listen 201
#define __HAVE_FLOAT128X 0
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define __GXX_TYPEINFO_EQUALITY_INLINE 1
#define RWH_WRITE_LIFE_EXTREME 5
#define _GLIBCXX_HAVE_COSHF 1
#define _GLIBCXX_HAVE_COSHL 1
#define NSIG _NSIG
#define SYS_getgid __NR_getgid
#define __cpp_variadic_using 201611L
#define SYS_fchdir __NR_fchdir
#define __NR_io_uring_register 427
#define SYS_shmdt __NR_shmdt
#define htobe16(x) __bswap_16 (x)
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define _GLIBCXX_FUNCTIONAL 1
#define _PSTL_PRAGMA_FORCEINLINE 
#define __SHRT_MAX__ 0x7fff
#define SYS_fsmount __NR_fsmount
#define SYS_openat __NR_openat
#define STA_UNSYNC 0x0040
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define SYS_pread64 __NR_pread64
#define _GLIBCXX_USE_C99_COMPLEX _GLIBCXX11_USE_C99_COMPLEX
#define ILL_ILLOPC ILL_ILLOPC
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define _BASIC_IOS_H 1
#define __FLT64X_MAX_10_EXP__ 4932
#define _GLIBCXX_STDEXCEPT 1
#define __cpp_if_constexpr 201606L
#define _TYPEINFO 
#define __cpp_lib_string_udls 201304
#define MAP_TYPE 0x0f
#define SIGTTOU 22
#define INVALID_HANDLE_VALUE (-1)
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define PRIuLEAST8 "u"
#define __NR_bind 200
#define _GLIBCXX_USE_C99_STDIO _GLIBCXX11_USE_C99_STDIO
#define __NR_mlock2 284
#define __LDBL_IS_IEC_60559__ 2
#define _GLIBCXX_HAVE_STRUCT_DIRENT_D_TYPE 1
#define _GLIBCXX_NOEXCEPT_IF(...) noexcept(__VA_ARGS__)
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define _BASIC_IOS_TCC 1
#define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)
#define _SYS_STATVFS_H 1
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define __LITTLE_ENDIAN 1234
#define SCNi64 __PRI64_PREFIX "i"
#define MAP_EXECUTABLE 0x01000
#define __cpp_lib_complex_udls 201309
#define SVE_MAGIC 0x53564501
#define __NR_semctl 191
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define __cpp_lib_concepts 202002L
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define __cpp_lib_lcm 201606
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define _GLIBCXX_HAVE_MODF 1
#define htobe64(x) __bswap_64 (x)
#define __USE_ISOCXX11 1
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define UINTPTR_WIDTH __WORDSIZE
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _BITS_ENDIANNESS_H 1
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define SYS_epoll_pwait __NR_epoll_pwait
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define __NR_setrlimit 164
#define INT_FAST8_MIN (-128)
#define MDBX_MMAP_INCOHERENT_CPU_CACHE 0
#define CLOCK_MONOTONIC_COARSE 6
#define MDBX_LOCKNAME "/mdbx.lck"
#define CPU_OR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, |)
#define WCHAR_MIN __WCHAR_MIN
#define __PRIPTR_PREFIX "l"
#define __stub_sigreturn 
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define SYS_membarrier __NR_membarrier
#define __NR_mq_notify 184
#define __blksize_t_defined 
#define SCNo16 "ho"
#define ____gwchar_t_defined 1
#define _GLIBCXX_USE_FCHMODAT 1
#define MADV_SEQUENTIAL 2
#define SYS_geteuid __NR_geteuid
#define __UID_T_TYPE __U32_TYPE
#define SYS_flistxattr __NR_flistxattr
#define PRIxPTR __PRIPTR_PREFIX "x"
#define _POSIX_READER_WRITER_LOCKS 200809L
#define EDQUOT 122
#define CLONE_SIGHAND 0x00000800
#define _PSTL_USAGE_WARNINGS 0
#define __AARCH64_CMODEL_SMALL__ 1
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define _GLIBCXX98_USE_C99_COMPLEX 1
#define EXEC_PAGESIZE 65536
#define _POSIX_AIO_MAX 1
#define INT_FAST32_WIDTH __WORDSIZE
#define PROT_GROWSDOWN 0x01000000
#define __cpp_inheriting_constructors 201511L
#define SCHED_IDLE 5
#define __NR_shmget 194
#define __LDBL_MAX_EXP__ 16384
#define _GLIBCXX_HAVE_STRTOLD 1
#define MDBX_STRINGIFY_HELPER(x) #x
#define __NR_pkey_free 290
#define MDBX_64BIT_CAS 1
#define ENOTEMPTY 39
#define __glibcxx_function_requires(...) 
#define UINT_FAST16_MAX (18446744073709551615UL)
#define ENOTBLK 15
#define __WINT_MIN__ 0U
#define SYS_renameat __NR_renameat
#define _SC_SHELL _SC_SHELL
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define _STREAMBUF_ITERATOR_H 1
#define __linux__ 1
#define F_SEAL_WRITE 0x0008
#define __cpp_lib_semaphore 201907L
#define __cpp_lib_ranges 202106L
#define MDBX_OSX_WANNA_SPEED 1
#define __ARCH_WANT_RENAMEAT 
#define _PATH_DRUM "/dev/drum"
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define MOD_CLKB ADJ_TICK
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define _GCC_PTRDIFF_T 
#define _PATH_RWHODIR "/var/spool/rwho"
#define ADJ_MAXERROR 0x0004
#define _POSIX_AIO_LISTIO_MAX 2
#define __NR_inotify_init1 26
#define __glibcxx_requires_sorted_pred(_First,_Last,_Pred) 
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define __NR_rt_sigaction 134
#define EALREADY 114
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define MADV_DONTNEED 4
#define PRIiMAX __PRI64_PREFIX "i"
#define __WCHAR_MIN__ 0U
#define __NR_inotify_add_watch 27
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_SYNCHRONIZED_IO 200809L
#define _FUNCTEXCEPT_H 1
#define UINT_WIDTH 32
#define PRIxLEAST8 "x"
#define __NTH(fct) __LEAF_ATTR fct __THROW
#define __cpp_impl_destroying_delete 201806L
#define _GLIBCXX_IOS 1
#define _GLIBCXX_HAVE_LINK 1
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define _POSIX_THREAD_THREADS_MAX 64
#define __ATOMIC_SEQ_CST 5
#define O_APPEND 02000
#define _POSIX_TIMEOUTS 200809L
#define _SYS_USER_H 1
#define _FORTIFY_SOURCE 2
#define __NR_fanotify_init 262
#define __INT8_MAX__ 0x7f
#define MAXPATHLEN PATH_MAX
#define MDBX_USE_SENDFILE 1
#define _BITS_TIMEX_H 1
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __NR_lremovexattr 15
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _POSIX_LINK_MAX 8
#define _GLIBCXX_HAVE_LIMIT_FSIZE 1
#define _GLIBCXX_HAVE_ATAN2F 1
#define _GLIBCXX_HAVE_ATAN2L 1
#define COLL_WEIGHTS_MAX 255
#define _GLIBCXX_USE_SENDFILE 1
#define __NR_pwritev 70
#define _LOCALE_FACETS_H 1
#define __NR3264_statfs 43
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define _DEFAULT_SOURCE 1
#define _LINUX_POSIX_TYPES_H 
#define __USE_EXTERN_INLINES 1
#define MADV_HUGEPAGE 14
#define SYS_splice __NR_splice
#define __LOCK_ALIGNMENT 
#define __NR_setresuid 147
#define _XOPEN_REALTIME_THREADS 1
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define _GLIBCXX_HAVE_POWL 1
#define ETIMEDOUT 110
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define __cpp_aligned_new 201606L
#define SCNx32 "x"
#define SCHED_OTHER 0
#define SYS_semtimedop __NR_semtimedop
#define __SI_ERRNO_THEN_CODE 1
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define SYS_dup __NR_dup
#define MDBX_PRINTF_ARGS(format_index,first_arg) __attribute__((__format__(__printf__, format_index, first_arg)))
#define ENODATA 61
#define _GLIBCXX_HAVE_TANL 1
#define PRIuLEAST32 "u"
#define _GLIBCXX_HAVE_LINUX_RANDOM_H 1
#define PRIdSIZE PRIdPTR
#define _GLIBCXX_USE_C99_FENV_TR1 1
#define SCNdFAST64 __PRI64_PREFIX "d"
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define DN_ACCESS 0x00000001
#define _GLIBCXX_USE_C11_UCHAR_CXX11 1
#define __END_DECLS }
#define __NR_perf_event_open 241
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define __NR_vhangup 58
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _ALLOCA_H 1
#define MDBX_STD_FILESYSTEM_PATH ::mdbx::filesystem::path
#define SYS_getsockname __NR_getsockname
#define LOGIN_PROCESS 6
#define __BITS_PER_LONG 64
#define _STL_DEQUE_H 1
#define __SLONG32_TYPE int
#define SCNuLEAST64 __PRI64_PREFIX "u"
#define __NO_MATH_ERRNO__ 1
#define __extern_C extern "C"
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define _SYS_SELECT_H 1
#define _POSIX_THREAD_KEYS_MAX 128
#define PRIuLEAST64 __PRI64_PREFIX "u"
#define _XOPEN_ENH_I18N 1
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define __jmp_buf_tag_defined 1
#define __LC_TELEPHONE 10
#define _GLIBCXX_STD_FUNCTION_H 1
#define _PATH_WTMPX _PATH_WTMP
#define SA_SIGINFO 4
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define __NR_clock_getres 114
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define STATX_UID 0x00000008U
#define __NR_exit_group 94
#define __DBL_DIG__ 15
#define clrbit(a,i) ((a)[(i)/NBBY] &= ~(1<<((i)%NBBY)))
#define EINTR 4
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define PATH_MAX 4096
#define __cpp_char8_t 201811L
#define SHRT_MIN (-SHRT_MAX - 1)
#define _GLIBCXX_C_LOCALE_GNU 1
#define _IO_EOF_SEEN 0x0010
#define __NR_set_mempolicy 237
#define _POSIX_SPAWN 200809L
#define _GLIBCXX_HAVE_ISNANF 1
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define _GLIBCXX_HAVE_ISNANL 1
#define MADV_WIPEONFORK 18
#define __f64x(x) x ##l
#define SYS_rt_sigaction __NR_rt_sigaction
#define MDBX_CXX20_UNLIKELY [[unlikely]]
#define _INTTYPES_H 1
#define si_status _sifields._sigchld.si_status
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define __WORDSIZE 64
#define __FLT32_MAX_EXP__ 128
#define __cpp_lib_shared_timed_mutex 201402L
#define __NR_wait4 260
#define _GLIBCXX_BIT 1
#define _GLIBCXX_HAVE_FMODF 1
#define _SYS_UIO_H 1
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define _PATH_CONSOLE "/dev/console"
#define __cpp_lib_three_way_comparison 201907L
#define ILL_ILLADR ILL_ILLADR
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define PROT_NONE 0x0
#define _GLIBCXX_HAVE_LINUX_TYPES_H 1
#define _PATH_KMEM "/dev/kmem"
#define SIGQUIT 3
#define __NR_getpgid 155
#define SCHAR_WIDTH 8
#define mdbx_realloc realloc
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define _GLIBCXX_HAVE_FMODL 1
#define MDBX_TXN_CHECKOWNER 1
#define __CHAR8_TYPE__ unsigned char
#define SYS_fsopen __NR_fsopen
#define _GLIBCXX_FS_DIR_H 1
#define _NEW_ALLOCATOR_H 1
#define _GLIBCXX_USE_CLOCK_REALTIME 1
#define SYS_chroot __NR_chroot
#define MADV_DONTDUMP 16
#define _PATH_PRESERVE "/var/lib"
#define MDBX_64BIT_ATOMIC 1
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define va_arg(v,l) __builtin_va_arg(v,l)
#define RTSIG_MAX 32
#define EPERM 1
#define _STDDEF_H 
#define __NR_rt_sigpending 136
#define __glibcxx_digits_b(T,B) (B - __glibcxx_signed_b (T,B))
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __SIZEOF_PTRDIFF_T__ 8
#define SCNoLEAST16 "ho"
#define _PSTL_PRAGMA_SIMD_ORDERED_MONOTONIC(PRM) 
#define __NR_kexec_file_load 294
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _IONBF 2
#define _GLIBCXX_HAVE_SYS_STAT_H 1
#define _SYS_UCONTEXT_H 1
#define M_NLBLKS 2
#define PRIoFAST16 __PRIPTR_PREFIX "o"
#define DEV_BSIZE 512
#define __UINT16_C(c) c
#define STA_DEL 0x0020
#define SCNoLEAST32 "o"
#define SYS_pselect6 __NR_pselect6
#define SCNuMAX __PRI64_PREFIX "u"
#define _POSIX2_RE_DUP_MAX 255
#define _GLIBCXX_SYSTEM_ERROR 1
#define MADV_PAGEOUT 21
#define PRIoFAST32 __PRIPTR_PREFIX "o"
#define STA_FREQHOLD 0x0080
#define O_WRONLY 01
#define IPC_PRIVATE ((__key_t) 0)
#define _GLIBCXX_HAVE_SYS_UIO_H 1
#define __gnu_linux__ 1
#define O_EXCL 0200
#define _GLIBCXX_GCC_GTHR_POSIX_H 
#define _ENDIAN_H 1
#define _BITS_SIGNUM_ARCH_H 1
#define __NR_fstat __NR3264_fstat
#define PRIiFAST16 __PRIPTR_PREFIX "i"
#define __catch(X) catch(X)
#define _PSTL_ALGORITHM_FORWARD_DECLARED 1
#define mdbx_malloc malloc
#define __NR_timer_settime 110
#define STATX_SIZE 0x00000200U
#define SYS_quotactl __NR_quotactl
#define SCNdLEAST32 "d"
#define SYS_fanotify_init __NR_fanotify_init
#define __UQUAD_TYPE unsigned long int
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define __glibcxx_requires_cond(_Cond,_Msg) 
#define __NR_io_uring_setup 425
#define SYS_fadvise64 __NR_fadvise64
#define ENOSR 63
#define PRIoFAST64 __PRI64_PREFIX "o"
#define __USE_ISOC11 1
#define S_ISDIR(mode) __S_ISTYPE((mode), __S_IFDIR)
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define __FLT16_MIN_EXP__ (-13)
#define _GLIBCXX_HAVE_FABSL 1
#define PRIi64 __PRI64_PREFIX "i"
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define _STATFS_F_NAMELEN 
#define _PSTL_PRAGMA_SIMD _PSTL_PRAGMA(omp simd)
#define __FLT64_MANT_DIG__ 53
#define _SYS_STATFS_H 1
#define SCNiFAST64 __PRI64_PREFIX "i"
#define _SHARED_PTR_BASE_H 1
#define SCNdLEAST64 __PRI64_PREFIX "d"
#define SIGCLD SIGCHLD
#define _LOCALE_FACETS_NONIO_TCC 1
#define __FLT64X_MANT_DIG__ 113
#define F_SETLEASE 1024
#define __NR_times 153
#define SYS_wait4 __NR_wait4
#define __fallthrough [[fallthrough]]
#define __cpp_lib_raw_memory_algorithms 201606L
#define _T_PTRDIFF 
#define SYS_pipe2 __NR_pipe2
#define _GLIBCXX_CLIMITS 1
#define __glibc_has_extension(ext) 0
#define _RANGES_CMP_H 1
#define __UWORD_TYPE unsigned long int
#define __cpp_consteval 201811L
#define __pie__ 2
#define CLONE_FILES 0x00000400
#define __cpp_delegating_constructors 200604L
#define L_ctermid 9
#define __cpp_lib_logical_traits 201510
#define _GLIBCXX98_USE_C99_STDLIB 1
#define SYS_mlockall __NR_mlockall
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define SYS_times __NR_times
#define MDBX_FORCE_ASSERTIONS 0
#define MDBX_TETRAD(a,b,c,d) ((uint32_t)(a) << 24 | (uint32_t)(b) << 16 | (uint32_t)(c) << 8 | (d))
#define assert_perror(errnum) (__ASSERT_VOID_CAST (0))
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define __NR_recvfrom 207
#define SYS_connect __NR_connect
#define _PATH_SHELLS "/etc/shells"
#define _SC_ARG_MAX _SC_ARG_MAX
#define _HASHTABLE_POLICY_H 1
#define ESOCKTNOSUPPORT 94
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define _PATH_NOLOGIN "/etc/nologin"
#define _GLIBCXX_USE_CONSTEXPR constexpr
#define _GLIBCXX_HAVE_POSIX_MEMALIGN 1
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define SSIZE_MAX LONG_MAX
#define _GLIBCXX_RES_LIMITS 1
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ELNRNG 48
#define __NR_write 64
#define _STREAM_ITERATOR_H 1
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define _POSIX_HOST_NAME_MAX 255
#define __NR_getppid 173
#define _GLIBCXX_NAMESPACE_LDBL 
#define __USE_ISOC95 1
#define CONSTEXPR_ENUM_FLAGS_OPERATIONS 1
#define __USE_ISOC99 1
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define O_FSYNC O_SYNC
#define __NR_lseek __NR3264_lseek
#define _POSIX_SEM_NSEMS_MAX 256
#define __UINT16_TYPE__ short unsigned int
#define __BYTE_ORDER __LITTLE_ENDIAN
#define __FLT16_MAX_10_EXP__ 4
#define __GNUC_STDC_INLINE__ 1
#define _GLIBCXX_LOCALE 1
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define ____sigval_t_defined 
#define _GLIBCXX_HAVE_ICONV 1
#define __isctype_f(type) __extern_inline int is ##type (int __c) __THROW { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _IS ##type; }
#define MOD_FREQUENCY ADJ_FREQUENCY
#define ULLONG_WIDTH 64
#define FPE_FLTDIV FPE_FLTDIV
#define __DBL_MAX__ double(1.79769313486231570814527423731704357e+308L)
#define __NR_timer_getoverrun 109
#define _BITS_STDINT_UINTN_H 1
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define _GLIBCXX_STDIO_SEEK_CUR 1
#define MAP_ANON MAP_ANONYMOUS
#define __glibcxx_requires_irreflexive2(_First,_Last) 
#define __cpp_raw_strings 200710L
#define PKEY_DISABLE_WRITE 0x2
#define LIBMDBX_VERINFO_API __dll_export
#define __DBL_HAS_INFINITY__ 1
#define SYS_fsync __NR_fsync
#define _GLIBCXX_STDIO_EOF -1
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define WEOF (0xffffffffu)
#define __NR_close_range 436
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define _GLIBCXX_USE_CLOCK_MONOTONIC 1
#define LONG_BIT 64
#define _GLIBCXX_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_NAMESPACE_CXX11
#define ECOMM 70
#define _POSIX_NGROUPS_MAX 8
#define _GLIBCXX_USE_NOEXCEPT noexcept
#define __NR_pidfd_getfd 438
#define __glibcxx_requires_subscript(_N) 
#define __USE_XOPEN 1
#define __NR_unshare 97
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define stdin stdin
#define SYS_sched_setscheduler __NR_sched_setscheduler
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define SYS_clock_settime __NR_clock_settime
#define EWOULDBLOCK EAGAIN
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define __FLT_MANT_DIG__ 24
#define __NR_getgroups 158
#define _GLIBCXX_MAP 1
#define _SC_CLK_TCK _SC_CLK_TCK
#define __glibcxx_max_b(T,B) (__glibcxx_signed_b (T,B) ? (((((T)1 << (__glibcxx_digits_b (T,B) - 1)) - 1) << 1) + 1) : ~(T)0)
#define __NR_swapoff 225
#define _PATH_UNIX "/boot/vmlinux"
#define SCHED_FIFO 1
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define IPC_INFO 3
#define _POSIX_PATH_MAX 256
#define MAP_NORESERVE 0x04000
#define _ISOC11_SOURCE 1
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define __NR_ioprio_set 30
#define SYS_swapon __NR_swapon
#define SYS_write __NR_write
#define _ITERATOR_CONCEPTS_H 1
#define _GLIBCXX_HAVE_SINCOSF 1
#define _GLIBCXX_HAVE_SINCOSL 1
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define be32toh(x) __bswap_32 (x)
#define MS_SYNC 4
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define MDBX_LOGGER_DONTCHANGE ((MDBX_debug_func *)(intptr_t)-1)
#define _SIZE_T_DEFINED 
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define _WCHAR_T_DEFINED_ 
#define ECHILD 10
#define SCNdFAST8 "hhd"
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define _STL_RAW_STORAGE_ITERATOR_H 1
#define _POSIX_REGEXP 1
#define __f64(x) x
#define UINT_LEAST8_MAX (255)
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define SYS_set_robust_list __NR_set_robust_list
#define __NR_getitimer 102
#define LC_NAME_MASK (1 << __LC_NAME)
#define MDBX_EPSILON ((MDBX_val *)((ptrdiff_t)-1))
#define __NR_inotify_rm_watch 28
#define _POSIX_RE_DUP_MAX 255
#define __cpp_lib_addressof_constexpr 201603
#define F_GET_RW_HINT 1035
#define __stub_setlogin 
#define __cpp_lib_variant 202102L
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define LC_MESSAGES __LC_MESSAGES
#define _LOCALE_CONV_H 1
#define _STL_ITERATOR_BASE_TYPES_H 1
#define __O_DSYNC 010000
#define PRIiFAST8 "i"
#define _POSIX_MEMORY_PROTECTION 200809L
#define _GLIBCXX_HAVE_SYS_IPC_H 1
#define _LOCALE_FACETS_NONIO_H 1
#define __NR_truncate __NR3264_truncate
#define _PSTL_PRAGMA_VECTOR_UNALIGNED 
#define SYS_setfsuid __NR_setfsuid
#define __NR_getuid 174
#define SA_RESETHAND 0x80000000
#define __DEPRECATED 1
#define VALGRIND_MAKE_MEM_NOACCESS(a,s) 
#define __NR_setresgid 149
#define __S32_TYPE int
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define F_SETFD 2
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define __cpp_rvalue_references 200610L
#define __FLT64_MIN_10_EXP__ (-307)
#define __GLIBC_LINUX_VERSION_CODE 331776
#define __NR_mremap 216
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __NR_getresuid 148
#define __cpp_lib_make_from_tuple 201606
#define __NR_rseq 293
#define _POSIX_DELAYTIMER_MAX 32
#define SYS_lseek __NR_lseek
#define _USES_ALLOCATOR_H 1
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define EREMOTE 66
#define __NR_sigaltstack 132
#define __Wpedantic_format_voidptr(ARG) __Wpedantic_format_voidptr(ARG)
#define S_BLKSIZE 512
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define UINT_LEAST16_WIDTH 16
#define VALGRIND_MEMPOOL_FREE(h,a) 
#define _SSTREAM_TCC 1
#define __cpp_lib_shared_mutex 201505L
#define BUS_OBJERR BUS_OBJERR
#define MADV_KEEPONFORK 19
#define MDBX_OSX_WANNA_DURABILITY 0
#define _GLIBCXX_HAVE_POSIX_SEMAPHORE 1
#define __NR_reboot 142
#define __NR_socket 198
#define SYS_fdatasync __NR_fdatasync
#define __HAVE_FLOAT32 1
#define __NR_io_getevents 4
#define SYS_setfsgid __NR_setfsgid
#define _PTRDIFF_T_DECLARED 
#define _BITS_STDIO_H 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __glibc_objsize(__o) __bos (__o)
#define PDP_ENDIAN __PDP_ENDIAN
#define HAVE_cxx17_std_string_view 1
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_QUIET_NAN__ 1
#define SYS_add_key __NR_add_key
#define SYS_sendmmsg __NR_sendmmsg
#define __NR_process_vm_writev 271
#define _GLIBCXX_HAVE___CXA_THREAD_ATEXIT_IMPL 1
#define __NR_msgctl 187
#define __NR3264_truncate 45
#define STATX_ATTR_ENCRYPTED 0x00000800
#define __NR3264_fcntl 25
#define DEAD_PROCESS 8
#define SYS_writev __NR_writev
#define __cpp_lib_quoted_string_io 201304
#define __SIZEOF_SIZE_T__ 8
#define _GLIBCXX_ATOMIC 1
#define STATIC_ASSERT_MSG(expr,msg) switch (0) {case 0:case (expr):;}
#define _WCHAR_H 1
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define SYS_sched_setaffinity __NR_sched_setaffinity
#define O_NONBLOCK 04000
#define SCNiPTR __PRIPTR_PREFIX "i"
#define __HAVE_FLOAT64 1
#define MDBX_INTERNAL_FUNC 
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define __cpp_rvalue_reference 200610L
#define __cpp_lib_to_array 201907L
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define SYS_name_to_handle_at __NR_name_to_handle_at
#define __cpp_nsdmi 200809L
#define SIG_UNBLOCK 1
#define MB_LEN_MAX 16
#define SYS_msgrcv __NR_msgrcv
#define __NR_getpriority 141
#define _GLIBCXX_HAVE_INT64_T_LONG 1
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX (18446744073709551615UL)
#define PRIiLEAST32 "i"
#define _SC_BASE _SC_BASE
#define SYS_msgget __NR_msgget
#define __NO_CTYPE 1
#define PRIiLEAST64 __PRI64_PREFIX "i"
#define __NR_timer_delete 111
#define __CORRECT_ISO_CPP_STRING_H_PROTO 
#define __NR_getpid 172
#define SYS_fchmodat __NR_fchmodat
#define UINT64_C(c) c ## UL
#define SYS_rt_sigqueueinfo __NR_rt_sigqueueinfo
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define EL2NSYNC 45
#define _GLIBCXX_HAVE_NETINET_TCP_H 1
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define _GCC_WCHAR_T 
#define __NR_rt_sigsuspend 133
#define ETIME 62
#define pthread_cleanup_push(routine,arg) do { __pthread_cleanup_class __clframe (routine, arg)
#define S_IWUSR __S_IWRITE
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define SYS_execve __NR_execve
#define __HAVE_FLOATN_NOT_TYPEDEF 0
#define MDBX_UNLIKELY(cond) __builtin_expect(!!(cond), 0)
#define __cpp_lib_bitops 201907L
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define F_SETPIPE_SZ 1031
#define _GLIBCXX_IOMANIP 1
#define ADJ_TAI 0x0080
#define __ARM_FP16_FORMAT_IEEE 1
#define si_uid _sifields._kill.si_uid
#define __WTERMSIG(status) ((status) & 0x7f)
#define _GLIBCXX_HAS_GTHREADS 1
#define __NR_epoll_create1 20
#define M_CHECK_ACTION -5
#define _SC_PAGESIZE _SC_PAGESIZE
#define __NR_mq_timedsend 182
#define SYS_sendto __NR_sendto
#define UINT_LEAST16_MAX (65535)
#define SYS_sched_yield __NR_sched_yield
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define __NR_shutdown 210
#define MDBX_USE_OFDLOCKS 1
#define F_SHLCK 8
#define __useconds_t_defined 
#define __UT_HOSTSIZE 256
#define UINT32_MAX (4294967295U)
#define LIBMDBX_H 
#define INT8_MIN (-128)
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define WNOHANG 1
#define __cpp_lib_result_of_sfinae 201210
#define _POSIX2_BC_BASE_MAX 99
#define MDBX_ENABLE_PGOP_STAT 1
#define SEGV_ACCERR SEGV_ACCERR
#define SYS_quotactl_fd __NR_quotactl_fd
#define __PTRDIFF_T 
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define ENOCSI 50
#define PRIoLEAST32 "o"
#define _SC_WORD_BIT _SC_WORD_BIT
#define __pic__ 2
#define __NR_msgrcv 188
#define __HAVE_GENERIC_SELECTION 0
#define _POSIX_ADVISORY_INFO 200809L
#define STA_PPSSIGNAL 0x0100
#define F_GETFL 3
#define LC_MEASUREMENT __LC_MEASUREMENT
#define __NR_open_tree 428
#define F_LOCK 1
#define _STATFS_F_FLAGS 
#define _GLIBCXX_STRING_VIEW_TCC 1
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define SCNuLEAST8 "hhu"
#define _SC_SPAWN _SC_SPAWN
#define __NR_getsockname 204
#define __NR_pselect6 72
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define VALGRIND_MEMPOOL_CHANGE(h,a,b,s) 
#define __DBL_MIN__ double(2.22507385850720138309023271733240406e-308L)
#define EADDRINUSE 98
#define _VA_LIST 
#define _GLIBCXX_STRING_VIEW 1
#define _GLIBCXX_HAVE_SYS_SEM_H 1
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define PRIx16 "x"
#define SYS_landlock_create_ruleset __NR_landlock_create_ruleset
#define _GLIBCXX_HOSTED 1
#define HAVE_STRUCT_IOVEC 1
#define M_TRIM_THRESHOLD -1
#define __O_PATH 010000000
#define isclr(a,i) (((a)[(i)/NBBY] & (1<<((i)%NBBY))) == 0)
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define __F_SETOWN_EX 15
#define _GLIBCXX_CODECVT_SPECIALIZATION2(_NAME,_ELEM) template<> class _NAME<_ELEM> : public codecvt<_ELEM, char, mbstate_t> { public: typedef _ELEM intern_type; typedef char extern_type; typedef mbstate_t state_type; protected: _NAME(unsigned long __maxcode, codecvt_mode __mode, size_t __refs) : codecvt(__refs), _M_maxcode(__maxcode), _M_mode(__mode) { } virtual ~_NAME(); virtual result do_out(state_type& __state, const intern_type* __from, const intern_type* __from_end, const intern_type*& __from_next, extern_type* __to, extern_type* __to_end, extern_type*& __to_next) const; virtual result do_unshift(state_type& __state, extern_type* __to, extern_type* __to_end, extern_type*& __to_next) const; virtual result do_in(state_type& __state, const extern_type* __from, const extern_type* __from_end, const extern_type*& __from_next, intern_type* __to, intern_type* __to_end, intern_type*& __to_next) const; virtual int do_encoding() const throw(); virtual bool do_always_noconv() const throw(); virtual int do_length(state_type&, const extern_type* __from, const extern_type* __end, size_t __max) const; virtual int do_max_length() const throw(); private: unsigned long _M_maxcode; codecvt_mode _M_mode; }
#define VALGRIND_MAKE_MEM_UNDEFINED(a,s) 
#define _PATH_LASTLOG "/var/log/lastlog"
#define SYS_set_mempolicy __NR_set_mempolicy
#define __WCOREFLAG 0x80
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define PRIx32 "x"
#define __O_DIRECTORY 040000
#define MDBX_WORDBITS 64
#define SCNu8 "hhu"
#define __restrict_arr 
#define SYS_set_tid_address __NR_set_tid_address
#define _USES_ALLOCATOR_ARGS 1
#define SYS_rt_sigtimedwait __NR_rt_sigtimedwait
#define __ldiv_t_defined 1
#define _POSIX_SYMLOOP_MAX 8
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define __MODE_T_TYPE __U32_TYPE
#define __cpp_lib_is_swappable 201603
#define F_SETLKW64 7
#define THREAD_CALL 
#define F_GETLK 5
#define INTPTR_MIN (-9223372036854775807L-1)
#define __NR_sched_get_priority_max 125
#define PROT_EXEC 0x4
#define SIGTRAP 5
#define EISDIR 21
#define _GLIBCXX_HAVE_STRINGS_H 1
#define __nonnull(params) __attribute_nonnull__ (params)
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define CPU_ZERO(cpusetp) __CPU_ZERO_S (sizeof (cpu_set_t), cpusetp)
#define F_GETSIG __F_GETSIG
#define __GTHREAD_TIME_INIT {0,0}
#define SYS_copy_file_range __NR_copy_file_range
#define PRIx64 __PRI64_PREFIX "x"
#define O_DSYNC __O_DSYNC
#define __NR_msgsnd 189
#define ST_MANDLOCK ST_MANDLOCK
#define _GLIBCXX_USE_DEPRECATED 1
#define __NR_mbind 235
#define __NR3264_fstatat 79
#define NL_ARGMAX _POSIX_ARG_MAX
#define CPU_XOR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, ^)
#define INT_LEAST8_MAX (127)
#define __aarch64__ 1
#define __NR_quotactl 60
#define _GLIBCXX_DEBUG_ONLY(_Statement) 
#define __cpp_lib_bounded_array_traits 201902L
#define _GLIBCXX_HAVE_BUILTIN_LAUNDER 1
#define __CFLOAT64X _Complex long double
#define _GLIBCXX_NUM_UNICODE_FACETS 4
#define __CFLOAT32X _Complex double
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define __NR_fchdir 50
#define __ARM_FP16_ARGS 1
#define __has_extension(x) (0)
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define _PATH_MAILDIR "/var/mail"
#define __glibcxx_digits10_b(T,B) (__glibcxx_digits_b (T,B) * 643L / 2136)
#define si_pkey _sifields._sigfault._bounds._pkey
#define __FLT64X_DECIMAL_DIG__ 36
#define _GLIBCXX_HAVE_SYS_SYSINFO_H 1
#define __cpp_lib_constexpr_iterator 201811L
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define __NR_mlock 228
#define MDBX_ENVCOPY_WRITEBUF 1048576u
#define __DBL_HAS_DENORM__ 1
#define __NR_sched_getparam 121
#define INT_LEAST32_MAX (2147483647)
#define __NR_timer_gettime 108
#define STA_INS 0x0010
#define PROT_READ 0x1
#define FPE_FLTSUB FPE_FLTSUB
#define SCNoFAST8 "hho"
#define INT_FAST16_WIDTH __WORDSIZE
#define M_MXFAST 1
#define LOGIN_NAME_MAX 256
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define __NR_landlock_create_ruleset 444
#define CHAR_BIT __CHAR_BIT__
#define UINT_LEAST64_WIDTH 64
#define __attribute_pure__ __attribute__ ((__pure__))
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define __NR_pwrite64 68
#define _GLIBCXX_HAVE_SINCOS 1
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define MDBX_CXX20_CONSTEXPR inline
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define __glibcxx_requires_sorted(_First,_Last) 
#define __cpp_lib_invoke 201411L
#define XCONCAT(a,b) CONCAT(a,b)
#define SYS_clone __NR_clone
#define __NR_pivot_root 41
#define __FLT64X_IS_IEC_60559__ 2
#define SYS_mkdirat __NR_mkdirat
#define __cpp_deduction_guides 201907L
#define MAX_INPUT 255
#define CLOCK_BOOTTIME_ALARM 9
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define _SYSCALL_H 1
#define __NR_linkat 37
#define MAX_CANON 255
#define __LDBL_DECIMAL_DIG__ 36
#define _GLIBCXX_CHARCONV_H 1
#define _GLIBCXX_HAVE_COMPLEX_H 1
#define INT_LEAST8_MIN (-128)
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define _GLIBCXX17_INLINE inline
#define _GLIBCXX_HAVE_INT64_T 1
#define PRIu64 __PRI64_PREFIX "u"
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __USE_GNU 1
#define _PATH_VARDB "/var/lib/misc/"
#define __cpp_lib_parallel_algorithm 201603L
#define MOD_OFFSET ADJ_OFFSET
#define _PTRDIFF_T_ 
#define _GLIBCXX_HAVE_TANHF 1
#define _GLIBCXX_HAVE_TANHL 1
#define F_GET_SEALS 1034
#define pthread_cleanup_pop_restore_np(execute) __clframe.__restore (); __clframe.__setdoit (execute); } while (0)
#define S_IFDIR __S_IFDIR
#define _PATHS_H_ 
#define __SVE_VQ_MIN 1
#define SYS_getpriority __NR_getpriority
#define SCNi16 "hi"
#define SYS_setgroups __NR_setgroups
#define _ISwbit(bit) ((bit) < 8 ? (int) ((1UL << (bit)) << 24) : ((bit) < 16 ? (int) ((1UL << (bit)) << 8) : ((bit) < 24 ? (int) ((1UL << (bit)) >> 8) : (int) ((1UL << (bit)) >> 24))))
#define PRIdLEAST16 "d"
#define NDEBUG 1
#define __stub___compat_bdflush 
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __GXX_ABI_VERSION 1016
#define EBADFD 77
#define F_UNLCK 2
#define UIO_MAXIOV __IOV_MAX
#define __cpp_lib_to_chars 201611L
#define __USE_XOPEN2K8 1
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define SCNi32 "i"
#define SYS_timerfd_gettime __NR_timerfd_gettime
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define __cpp_lib_constexpr_tuple 201811L
#define _GLIBCXX_THROW(_EXC) 
#define ST_NOEXEC ST_NOEXEC
#define st_mtime st_mtim.tv_sec
#define __PID_T_TYPE __S32_TYPE
#define LINE_MAX _POSIX2_LINE_MAX
#define __STRING(x) #x
#define _GLIBCXX_USE_PTHREAD_COND_CLOCKWAIT 1
#define __F_GETOWN 9
#define SIGVTALRM 26
#define F_OFD_GETLK 36
#define __NR_munlockall 231
#define __cpp_lib_optional 202106L
#define __statx_timestamp_defined 1
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _GLIBCXX_CSTDDEF 1
#define EBUSY 16
#define SYS_tee __NR_tee
#define __INO_T_TYPE __ULONGWORD_TYPE
#define SYS_setresgid __NR_setresgid
#define __NR_madvise 233
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define TRAP_TRACE TRAP_TRACE
#define F_ULOCK 0
#define __cpp_conditional_explicit 201806L
#define __LC_ALL 6
#define _FALLOC_H_ 
#define __struct_tm_defined 1
#define _SC_TRACE _SC_TRACE
#define _GLIBCXX_HAVE_HYPOT 1
#define __ssize_t_defined 
#define SYS_mlock __NR_mlock
#define _PSTL_VERSION_MINOR ((_PSTL_VERSION % 1000) / 10)
#define _SC_FSYNC _SC_FSYNC
#define SYS_umask __NR_umask
#define __NR_pread64 67
#define FPE_INTOVF FPE_INTOVF
#define MDBX_LOCKING_SYSV 5
#define FIXME "FIXME: " __FILE__ ", " MDBX_STRINGIFY(__LINE__)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define MDBX_CACHELINE_SIZE 64
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define SCNoPTR __PRIPTR_PREFIX "o"
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define __NR_getrlimit 163
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define __NR_accept4 242
#define __cpp_lib_generic_unordered_lookup 201811L
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define MDBX_OSX_SPEED_INSTEADOF_DURABILITY MDBX_OSX_WANNA_DURABILITY
#define __nlink_t_defined 
#define _SC_2_C_BIND _SC_2_C_BIND
#define PRIo16 "o"
#define _PSTL_ASSERT(_Condition) __glibcxx_assert(_Condition)
#define __glibcxx_requires_string_len(_String,_Len) 
#define __LC_ADDRESS 9
#define AT_FDCWD -100
#define _SYS_SIZE_T_H 
#define _STL_ITERATOR_BASE_FUNCS_H 1
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define _GLIBCXX11_USE_C99_COMPLEX 1
#define INT32_MAX (2147483647)
#define __NR_sync_file_range 84
#define _GLIBCXX17_DEPRECATED_SUGGEST(ALT) _GLIBCXX_DEPRECATED_SUGGEST(ALT)
#define __cpp_aggregate_bases 201603L
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define __glibc_macro_warning1(message) _Pragma (#message)
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define CLOCK_REALTIME 0
#define DN_ATTRIB 0x00000020
#define M_PERTURB -6
#define SYS_mmap __NR_mmap
#define SYS_getcpu __NR_getcpu
#define _GLIBCXX_USE_UTIME 1
#define _GLIBCXX_NOEXCEPT noexcept
#define __NR_adjtimex 171
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define _GLIBCXX_WEAK_DEFINITION 
#define __error_t_defined 1
#define __FLT128_DIG__ 33
#define _GLIBCXX_WRITE_MEM_BARRIER __atomic_thread_fence (__ATOMIC_RELEASE)
#define __SCHAR_WIDTH__ 8
#define M_ARENA_MAX -8
#define __NR_open_by_handle_at 265
#define __cpp_lib_to_address 201711L
#define __cpp_lib_int_pow2 202002L
#define SYS_restart_syscall __NR_restart_syscall
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define __cpp_lib_constexpr_functional 201907L
#define SYS_ptrace __NR_ptrace
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define __INT_FAST32_TYPE__ long int
#define ST_RELATIME ST_RELATIME
#define _GLIBCXX_NOEXCEPT_QUAL noexcept (_NE)
#define _GLIBCXX_BEGIN_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_BEGIN_NAMESPACE_CXX11
#define PRIiLEAST8 "i"
#define SYS_renameat2 __NR_renameat2
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define DN_DELETE 0x00000008
#define S_IWGRP (S_IWUSR >> 3)
#define ST_RDONLY ST_RDONLY
#define __GTHREAD_MUTEX_INIT PTHREAD_MUTEX_INITIALIZER
#define SCNxFAST32 __PRIPTR_PREFIX "x"
#define SIG_DFL ((__sighandler_t) 0)
#define _GLIBCXX_USE_C99_MATH_TR1 1
#define _GLIBCXX_HAVE_POLL_H 1
#define _GLIBCXX_USE_C99_MATH _GLIBCXX11_USE_C99_MATH
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define _PC_PATH_MAX _PC_PATH_MAX
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define __glibcxx_requires_irreflexive(_First,_Last) 
#define __flatten __attribute__((__flatten__))
#define _PSTL_PRAGMA_MESSAGE(x) 
#define __NR_getdents64 61
#define _POSIX_MAX_INPUT 255
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define _PC_LINK_MAX _PC_LINK_MAX
#define _PSTL_VERSION_MAJOR (_PSTL_VERSION / 1000)
#define ESHUTDOWN 108
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define SYS_getdents64 __NR_getdents64
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define MAP_STACK 0x20000
#define _GLIBCXX_MOVE3(_Tp,_Up,_Vp) std::move(_Tp, _Up, _Vp)
#define __cpp_rtti 199711L
#define _UNORDERED_MAP_H 
#define LC_COLLATE __LC_COLLATE
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define SYS_getxattr __NR_getxattr
#define _PSTL_EARLYEXIT_PRESENT (__INTEL_COMPILER >= 1800)
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define F_SETOWN __F_SETOWN
#define MADV_HWPOISON 100
#define XATTR_LIST_MAX 65536
#define INT_FAST64_WIDTH 64
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define _GLIBCXX_ALIGN_H 1
#define __NR_kcmp 272
#define __FLT64X_DIG__ 33
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define MADV_POPULATE_READ 22
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define __INT8_TYPE__ signed char
#define _ALLOCATOR_H 1
#define F_SETLK64 6
#define __NR_setfsgid 152
#define MAP_POPULATE 0x08000
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define SYS_seccomp __NR_seccomp
#define __ELF__ 1
#define THREAD_RESULT void *
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define __NR_mknodat 33
#define _SC_AIO_MAX _SC_AIO_MAX
#define PRIxMAX __PRI64_PREFIX "x"
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define __cpp_lib_boyer_moore_searcher 201603
#define _STL_FUNCTION_H 1
#define ELIBSCN 81
#define F_TLOCK 2
#define MDBX_LOCK_SUFFIX "-lck"
#define SYS_shutdown __NR_shutdown
#define _GLIBCXX_HAVE_MBSTATE_T 1
#define F_GETLEASE 1025
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define _PSTL_PRAGMA_LOCATION " [Parallel STL message]: "
#define SYS_shmget __NR_shmget
#define __FLT_RADIX__ 2
#define RUNNING_ON_VALGRIND (0)
#define __NR_landlock_add_rule 445
#define SA_NOMASK SA_NODEFER
#define _BITS_TIME64_H 1
#define __GLIBCXX_BITSIZE_INT_N_0 128
#define SCNdPTR __PRIPTR_PREFIX "d"
#define _ENABLE_SPECIAL_MEMBERS_H 1
#define __ARM_PCS_AAPCS64 1
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define _BITS_SIGTHREAD_H 1
#define _GLIBCXX_FLOAT_IS_IEEE_BINARY32 1
#define _POSIX_ARG_MAX 4096
#define MNTOPT_NOAUTO "noauto"
#define MDBX_LIKELY(cond) __builtin_expect(!!(cond), 1)
#define BUS_ADRALN BUS_ADRALN
#define __NR_openat2 437
#define _GLIBCXX_NO_OBSOLETE_ISINF_ISNAN_DYNAMIC __GLIBC_PREREQ(2,23)
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define SCNx16 "hx"
#define CLOCK_MONOTONIC_RAW 4
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define MDBX_CONST_FUNCTION __attribute__((__const__))
#define SCNxLEAST32 "x"
#define SYS_faccessat __NR_faccessat
#define __f32(x) x ##f
#define _GLIBCXX_HAVE_DLFCN_H 1
#define _GLIBCXX_EXTERN_TEMPLATE 1
#define SYS_process_mrelease __NR_process_mrelease
#define _GLIBCXX_HAVE_LIMIT_RSS 1
#define _BITS_SIGSTACK_H 1
#define SYS_syncfs __NR_syncfs
#define _GLIBCXX_USE_DUAL_ABI 1
#define EOVERFLOW 75
#define _GLIBCXX_HAVE_TIMESPEC_GET 1
#define S_IRUSR __S_IREAD
#define SYS_setsid __NR_setsid
#define SIGPIPE 13
#define __S_IWRITE 0200
#define SYS_get_robust_list __NR_get_robust_list
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define _GLIBCXX_HAVE_BUILTIN_HAS_UNIQ_OBJ_REP 1
#define SYS_exit_group __NR_exit_group
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SIZEOF_PTHREAD_COND_T 48
#define SEEK_SET 0
#define __NR_clock_gettime 113
#define _GLIBCXX_CSTDIO 1
#define __NR_getsockopt 209
#define _GLIBCXX_VISIBILITY(V) __attribute__ ((__visibility__ (#V)))
#define SYS_setpriority __NR_setpriority
#define NOFILE 256
#define _GLIBCXX_HAVE_COSF 1
#define MDBX_PNL_ASCENDING 0
#define SCNxLEAST64 __PRI64_PREFIX "x"
#define _GLIBCXX_HAVE_COSL 1
#define __NR_accept 202
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define _GLIBCXX_HAVE_UTIME_H 1
#define INT_LEAST8_WIDTH 8
#define __FLT32X_MANT_DIG__ 53
#define SYS_capget __NR_capget
#define SCNx64 __PRI64_PREFIX "x"
#define CLOCK_TAI 11
#define EUCLEAN 117
#define _POSIX_IPV6 200809L
#define _STATFS_F_FRSIZE 
#define SYS_listxattr __NR_listxattr
#define MNTTYPE_IGNORE "ignore"
#define _SIGNAL_H 
#define _POSIX_SHELL 1
#define SYS_getpid __NR_getpid
#define _GCC_LIMITS_H_ 
#define __LDBL_DIG__ 33
#define _GLIBCXX_INVOKE_H 1
#define __LC_PAPER 7
#define __S_IEXEC 0100
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define W_OK 2
#define _SIZE_T_ 
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define __FLT16_IS_IEC_60559__ 2
#define SYS_fstat __NR_fstat
#define __FLT16_MAX_EXP__ 16
#define _GLIBCXX_END_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_END_NAMESPACE_CXX11
#define UINT_FAST32_MAX (18446744073709551615UL)
#define O_CREAT 0100
#define _WCHAR_T_H 
#define SYS_setrlimit __NR_setrlimit
#define _PSTL_HIDE_FROM_ABI_POP 
#define EPROTO 71
#define ENODEV 19
#define POLL_OUT POLL_OUT
#define SYS_setregid __NR_setregid
#define INT16_WIDTH 16
#define __stub_revoke 
#define _POSIX_CHOWN_RESTRICTED 0
#define _GLIBCXX_HAVE_VSWSCANF 1
#define INT_MAX __INT_MAX__
#define likely(cond) __builtin_expect(!!(cond), 1)
#define __stub___compat_create_module 
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define MNTOPT_NOSUID "nosuid"
#define RWF_SYNC 0x00000004
#define _POSIX_MONOTONIC_CLOCK 0
#define __off_t_defined 
#define EKEYEXPIRED 127
#define __NR_pkey_alloc 289
#define SYS_io_uring_register __NR_io_uring_register
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define O_DIRECT __O_DIRECT
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define SYS_userfaultfd __NR_userfaultfd
#define SYS_personality __NR_personality
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __UINT_LEAST64_TYPE__ long unsigned int
#define MINSIGSTKSZ SIGSTKSZ
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define __FLT_HAS_QUIET_NAN__ 1
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define _HASHTABLE_H 1
#define _POSIX_TRACE_INHERIT -1
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO _PC_SYNC_IO
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define _XOPEN_SHM 1
#define EHWPOISON 133
#define _GLIBCXX_NORETURN __attribute__ ((__noreturn__))
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define _PATH_GSHADOW "/etc/gshadow"
#define STATIC_ASSERT(expr) STATIC_ASSERT_MSG(expr, #expr)
#define CPU_ZERO_S(setsize,cpusetp) __CPU_ZERO_S (setsize, cpusetp)
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define _MALLOC_H 1
#define __cpp_lib_integer_sequence 201304
#define _GLIBCXX_REFWRAP_H 1
#define _BSD_PTRDIFF_T_ 
#define PRIXPTR __PRIPTR_PREFIX "X"
#define __cpp_unicode_literals 200710L
#define SIGXFSZ 25
#define MFD_ALLOW_SEALING 2U
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define SIGHUP 1
#define ST_NOATIME ST_NOATIME
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define SYS_ioctl __NR_ioctl
#define __cpp_lib_type_identity 201806L
#define __INT_FAST32_WIDTH__ 64
#define __statx_defined 1
#define NULL __null
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define __CHAR16_TYPE__ short unsigned int
#define __FLT64X_MAX_EXP__ 16384
#define _GLIBCXX_END_EXTERN_C }
#define _GLIBCXX_HAVE_WCHAR_H 1
#define _GLIBCXX_NAMESPACE_CXX11 __cxx11::
#define E2BIG 7
#define __id_t_defined 
#define BIG_ENDIAN __BIG_ENDIAN
#define _GLIBCXX_HAVE_SINF 1
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define MAP_PRIVATE 0x02
#define _GLIBCXX_HAVE_SINL 1
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define _GLIBCXX_SET 1
#define O_ASYNC 020000
#define _PATH_WTMP "/var/log/wtmp"
#define __WINT_WIDTH__ 32
#define INT_MIN (-INT_MAX - 1)
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define CLONE_NEWUSER 0x10000000
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define _GLIBCXX_RATIO 1
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define SYS_waitid __NR_waitid
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define TIME_UTC 1
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define EL3RST 47
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define SI_TKILL SI_TKILL
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define _UTMPX_H 1
#define __cpp_structured_bindings 201606L
#define ENOTDIR 20
#define __cpp_lib_generic_associative_lookup 201304
#define SEEK_HOLE 4
#define SYS_madvise __NR_madvise
#define TIMER_ABSTIME 1
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define __WCHAR_MB_LEN_MAX 16
#define __INO64_T_TYPE __UQUAD_TYPE
#define __ARM_ARCH 8
#define UINTMAX_C(c) c ## UL
#define ILL_BADSTK ILL_BADSTK
#define __PMT(args) args
#define ATOMIC_FLAG_INIT { 0 }
#define _SYS_TYPES_H 1
#define AT_NO_AUTOMOUNT 0x800
#define ECONNRESET 104
#define __cpp_sized_deallocation 201309L
#define ST_NODEV ST_NODEV
#define SYS_io_uring_setup __NR_io_uring_setup
#define _STL_TEMPBUF_H 1
#define _GLIBCXX_HAVE_SYMVER_SYMBOL_RENAMING_RUNTIME_SUPPORT 1
#define _GLIBCXX_GCC_GTHR_H 
#define _LINUX_LIMITS_H 
#define _SC_2_VERSION _SC_2_VERSION
#define SIGSTOP 19
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define _GLIBCXX_DEBUG_ASSERT(_Condition) 
#define ENXIO 6
#define CLOCK_MONOTONIC 1
#define MAP_DENYWRITE 0x00800
#define __NR_landlock_restrict_self 446
#define __cpp_lib_scoped_lock 201703
#define SIGALRM 14
#define __FLT64_HAS_QUIET_NAN__ 1
#define _GLIBCXX_HAVE_WCTYPE_H 1
#define __cpp_lib_not_fn 201603
#define __SC_3264(_nr,_32,_64) __SYSCALL(_nr, _64)
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define SYS_io_setup __NR_io_setup
#define _BITS_UIO_EXT_H 1
#define _SC_STREAMS _SC_STREAMS
#define EBADRQC 56
#define INT_LEAST32_WIDTH 32
#define SYS_prlimit64 __NR_prlimit64
#define _GLIBCXX_ALGORITHM 1
#define L_XTND SEEK_END
#define __WALL 0x40000000
#define SCNuFAST32 __PRIPTR_PREFIX "u"
#define MCL_CURRENT 1
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define __try try
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define _GLIBCXX_ISTREAM 1
#define _GLIBCXX_USE_TMPNAM 1
#define __KEY_T_TYPE __S32_TYPE
#define __SVE_VQ_MAX 512
#define FAPPEND O_APPEND
#define __F_SETSIG 10
#define MDBX_CONSTEXPR_ASSERT(expr) void(0)
#define _GLIBCXX_NUMERIC_LIMITS 1
#define __BEGIN_DECLS extern "C" {
#define __NR_rt_tgsigqueueinfo 240
#define __LDBL_MANT_DIG__ 113
#define ___int_ptrdiff_t_h 
#define __stub___compat_get_kernel_syms 
#define __NR_seccomp 277
#define __NR_rt_sigreturn 139
#define MDBX_PGWALK_MAIN ((const char *)((ptrdiff_t)0))
#define _GLIBCXX_HAVE_INTTYPES_H 1
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define _GLIBCXX_HAVE_FINITEF 1
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1)
#define SCNuFAST64 __PRI64_PREFIX "u"
#define MS_ASYNC 1
#define SYS_landlock_add_rule __NR_landlock_add_rule
#define __FLT64_HAS_INFINITY__ 1
#define _GLIBCXX_CSTDLIB 1
#define VALGRIND_CHECK_MEM_IS_ADDRESSABLE(a,s) (0)
#define POLL_HUP POLL_HUP
#define _STRING_H 1
#define UINT_FAST32_WIDTH __WORDSIZE
#define __GNUC_VA_LIST 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define WSTOPPED 2
#define _GLIBCXX_HAVE_FINITEL 1
#define SCNuFAST16 __PRIPTR_PREFIX "u"
#define __MALLOC_HOOK_VOLATILE volatile
#define __cpp_nontype_template_args 201911L
#define assert(expr) (__ASSERT_VOID_CAST (0))
#define __NR_get_mempolicy 236
#define FILENAME_MAX 4096
#define CLONE_FS 0x00000200
#define __cpp_return_type_deduction 201304L
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define __cpp_lib_is_null_pointer 201309
#define __ino_t_defined 
#define __NR_readahead 213
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define __CLOCKID_T_TYPE __S32_TYPE
#define _GLIBCXX_HAVE_BUILTIN_IS_AGGREGATE 1
#define SYS_migrate_pages __NR_migrate_pages
#define _GLIBCXX_FS_FWD_H 1
#define PRIiPTR __PRIPTR_PREFIX "i"
#define _POSIX_MEMLOCK_RANGE 200809L
#define _PSTL_GLUE_MEMORY_DEFS_H 
#define SYS_exit __NR_exit
#define S_IEXEC S_IXUSR
#define ELIBEXEC 83
#define RWH_WRITE_LIFE_NOT_SET 0
#define MDBX_UNALIGNED_OK 4
#define __cpp_runtime_arrays 198712L
#define SCNoLEAST64 __PRI64_PREFIX "o"
#define __NR_io_cancel 3
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define _POSIX_MQ_OPEN_MAX 8
#define __INT_FAST64_WIDTH__ 64
#define _GLIBCXX_ITERATOR 1
#define CLONE_IO 0x80000000
#define __NR_setitimer 103
#define SI_ASYNCIO SI_ASYNCIO
#define SYS_fstatfs __NR_fstatfs
#define _BITS_UIO_LIM_H 1
#define __NR_execve 221
#define CPU_COUNT(cpusetp) __CPU_COUNT_S (sizeof (cpu_set_t), cpusetp)
#define INT64_WIDTH 64
#define EADDRNOTAVAIL 99
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define STATX_ALL 0x00000fffU
#define SYS_umount2 __NR_umount2
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define __NR_timer_create 107
#define INT_FAST32_MAX (9223372036854775807L)
#define MCL_FUTURE 2
#define SYS_mq_open __NR_mq_open
#define _GLIBCXX_CONSTEXPR constexpr
#define _GLIBCXX_USE_WCHAR_T 1
#define PRIXFAST16 __PRIPTR_PREFIX "X"
#define _PSTL_CONFIG_H 
#define MDBX_CXX17_FALLTHROUGH [[fallthrough]]
#define SYS_process_vm_writev __NR_process_vm_writev
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define LOCK_RW 192
#define __UINT_FAST64_TYPE__ long unsigned int
#define __glibcxx_class_requires(_a,_b) 
#define __cpp_constexpr_in_decltype 201711L
#define __cpp_inline_variables 201606L
#define __NR_settimeofday 170
#define SYS_sigaltstack __NR_sigaltstack
#define __NR_fsetxattr 7
#define __LDBL_REDIR_DECL(name) 
#define MDBX_WITHOUT_MSVC_CRT 1
#define _GLIBCXX_FORWARD(_Tp,__val) std::forward<_Tp>(__val)
#define PRIdFAST32 __PRIPTR_PREFIX "d"
#define UINT_FAST8_MAX (255)
#define _GLIBCXX_DARWIN_USE_64_BIT_INODE 1
#define _GLIBCXX_HAVE_MEMORY_H 1
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define __NR_setgid 144
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define F_GETFD 1
#define BYTE_ORDER __BYTE_ORDER
#define __NR_lookup_dcookie 18
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define MDBX_FAKE_SPILL_WRITEMAP 1
#define F_OFD_SETLKW 38
#define si_band _sifields._sigpoll.si_band
#define STDIN_FILENO 0
#define SI_ASYNCNL SI_ASYNCNL
#define _POSIX_CLOCKRES_MIN 20000000
#define _GLIBCXX_SHARED_MUTEX 1
#define __NR_getresgid 150
#define _T_SIZE_ 
#define LLONG_MAX __LONG_LONG_MAX__
#define UINT_LEAST8_WIDTH 8
#define ENOTRECOVERABLE 131
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define _PSTL_VERSION 12000
#define __cpp_lib_to_underlying 202102L
#define __WNOTHREAD 0x20000000
#define __LC_NUMERIC 1
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define __INT64_TYPE__ long int
#define _GLIBCXX_STRING 1
#define EIO 5
#define F_NOTIFY 1026
#define CLOCK_PROCESS_CPUTIME_ID 2
#define MDBX_LOCKING_POSIX2001 2001
#define ITIMER_REAL ITIMER_REAL
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define __glibcxx_integral_traps true
#define ENETUNREACH 101
#define EXDEV 18
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define va_start(v,l) __builtin_va_start(v,l)
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define _GLIBCXX_USE_SC_NPROCESSORS_ONLN 1
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define S_IRGRP (S_IRUSR >> 3)
#define SYS_preadv2 __NR_preadv2
#define UINT32_C(c) c ## U
#define _POSIX_SYMLINK_MAX 255
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __glibcxx_requires_can_increment_range(_First1,_Last1,_First2) 
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define _POSIX_V6_ILP32_OFF32 -1
#define MDBX_USE_SYNCFILERANGE 1
#define AT_EMPTY_PATH 0x1000
#define _GLIBCXX_HAVE_STDBOOL_H 1
#define __NR_pwritev2 287
#define __NR_chdir 49
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define SYS_kill __NR_kill
#define _POSIX_TRACE -1
#define _NSIG (__SIGRTMAX + 1)
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define CLONE_DETACHED 0x00400000
#define __WINT_TYPE__ unsigned int
#define __NR_fgetxattr 10
#define __SIZEOF_SHORT__ 2
#define F_SEAL_GROW 0x0004
#define STDOUT_FILENO 1
#define _GLIBCXX_CXX_LOCALE_H 1
#define _GLIBCXX_CERRNO 1
#define __intptr_t_defined 
#define MOD_TAI ADJ_TAI
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define SYS_fgetxattr __NR_fgetxattr
#define SIGPOLL 29
#define EBADR 53
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define EREMOTEIO 121
#define _GLIBCXX_NOEXCEPT_PARM , bool _NE
#define isset(a,i) ((a)[(i)/NBBY] & (1<<((i)%NBBY)))
#define MDBX_ENABLE_REFUND 1
#define WCOREFLAG __WCOREFLAG
#define AT_STATX_DONT_SYNC 0x4000
#define ENOSPC 28
#define ENOEXEC 8
#define SCNuPTR __PRIPTR_PREFIX "u"
#define INIT_PROCESS 5
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __THROWNL __asm__ (__ASMNAME (#alias))
#define CLONE_VM 0x00000100
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define S_ISREG(mode) __S_ISTYPE((mode), __S_IFREG)
#define SYS_finit_module __NR_finit_module
#define __glibcxx_requires_partitioned_upper_pred(_First,_Last,_Value,_Pred) 
#define sched_priority sched_priority
#define __NR_uname 160
#define _GLIBCXX_HAVE_LOG10F 1
#define _GLIBCXX_HAVE_LOG10L 1
#define SIGTSTP 20
#define STATX_MNT_ID 0x00001000U
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define PRIXLEAST32 "X"
#define __cpp_lib_execution 201902L
#define _GLIBCXX_TYPE_TRAITS 1
#define __UT_NAMESIZE 32
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __LDBL_MAX_10_EXP__ 4932
#define __NR_bpf 280
#define _POSIX_SEMAPHORES 200809L
#define MDBX_PGWALK_GC ((const char *)((ptrdiff_t)-1))
#define __W_CONTINUED 0xffff
#define __ATOMIC_RELAXED 0
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define MADV_NOHUGEPAGE 15
#define __DBL_EPSILON__ double(2.22044604925031308084726333618164062e-16L)
#define PTRDIFF_WIDTH __WORDSIZE
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define SA_ONESHOT SA_RESETHAND
#define _GLIBCXX_HAVE_GETS 1
#define _CONCURRENCE_H 1
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define __GTHREAD_HAS_COND 1
#define __NR_fchmod 52
#define XATTR_NAME_MAX 255
#define __NR_kexec_load 104
#define INT32_WIDTH 32
#define ENOSTR 60
#define _LOCALE_FACETS_TCC 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define __cpp_lib_gcd 201606
#define M_MMAP_MAX -4
#define __NR_set_robust_list 99
#define __NR_brk 214
#define CLONE_PTRACE 0x00002000
#define MNTTAB _PATH_MNTTAB
#define SIGKILL 9
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define ESRCH 3
#define __GTHREADS 1
#define __INT_LEAST32_TYPE__ int
#define ST_NOSUID ST_NOSUID
#define ECHRNG 44
#define _SC_REGEXP _SC_REGEXP
#define EHOSTDOWN 112
#define _GLIBCXX_MEMORY_RESOURCE 1
#define _LFS_LARGEFILE 1
#define STA_CLK 0x8000
#define RWH_WRITE_LIFE_LONG 4
#define __wchar_t__ 
#define SEEK_END 2
#define _GLIBCXX_USE_TBB_PAR_BACKEND __has_include(<tbb/tbb.h>)
#define _FUNCTIONAL_HASH_H 1
#define __ARCH_WANT_NEW_STAT 
#define _POSIX2_LINE_MAX 2048
#define _PATH_TTY "/dev/tty"
#define _STDALIGN_H 
#define _ISOC99_SOURCE 1
#define SCNiFAST16 __PRIPTR_PREFIX "i"
#define _GLIBCXX_VECTOR 1
#define ENOLCK 37
#define ENFILE 23
#define _STRING_CONVERSIONS_H 1
#define HZ 100
#define _PSTL_USE_NONTEMPORAL_STORES_IF_ALLOWED 
#define SYS_pkey_free __NR_pkey_free
#define _PATH_MAN "/usr/share/man"
#define _GLIBCXX_STD_C std
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define SCNdLEAST8 "hhd"
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define _XOPEN_UNIX 1
#define __LC_NAME 8
#define USHRT_WIDTH 16
#define SCNiFAST32 __PRIPTR_PREFIX "i"
#define be64toh(x) __bswap_64 (x)
#define ENOSYS 38
#define __NR_sendto 206
#define __NR_lsetxattr 6
#define MDBX_INTERNAL_VAR extern
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define _EXCEPTION_DEFINES_H 1
#define SA_RESTART 0x10000000
#define SYS_munmap __NR_munmap
#define _GLIBCXX_STDIO_SEEK_END 2
#define __INT_FAST8_TYPE__ signed char
#define TRACE(...) __noop(__VA_ARGS__)
#define SYS_getcwd __NR_getcwd
#define CHARCLASS_NAME_MAX 2048
#define _GLIBCXX_HAVE_TANF 1
#define _BITS_LOCALE_H 1
#define _GLIBCXX_USE_NLS 1
#define SYS_io_getevents __NR_io_getevents
#define _GLIBCXX_HAVE_STDLIB_H 1
#define __NR_execveat 281
#define _PATH_MEM "/dev/mem"
#define _THREAD_SHARED_TYPES_H 1
#define AT_REMOVEDIR 0x200
#define __f128(x) x ##l
#define _SC_TIMERS _SC_TIMERS
#define __UINT32_C(c) c ## U
#define SCNxMAX __PRI64_PREFIX "x"
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define AT_STATX_SYNC_TYPE 0x6000
#define __cpp_lib_list_remove_return_type 201806L
#define _GLIBCXX_DEPRECATED __attribute__ ((__deprecated__))
#define ENOTSUP EOPNOTSUPP
#define SYS_sched_getparam __NR_sched_getparam
#define _PSTL_HIDE_FROM_ABI_PUSH 
#define ATOMIC_VAR_INIT(_VI) { _VI }
#define __kernel_old_uid_t __kernel_old_uid_t
#define __FP_FAST_FMAF32x 1
#define R_OK 4
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define __INT_FAST8_WIDTH__ 8
#define FALLOC_FL_PUNCH_HOLE 0x02
#define __GTHREAD_COND_INIT PTHREAD_COND_INITIALIZER
#define EDEADLOCK EDEADLK
#define _GLIBCXX_TUPLE 1
#define CLD_DUMPED CLD_DUMPED
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define __cpp_lib_make_obj_using_allocator 201811L
#define _GLIBCXX_USE_GETTIMEOFDAY 1
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define SYS_uname __NR_uname
#define __ULONG32_TYPE unsigned int
#define ULONG_WIDTH __WORDSIZE
#define _BITS_SIGACTION_H 1
#define STA_PPSJITTER 0x0200
#define _GLIBCXX_FAST_MATH 1
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define _GXX_NULLPTR_T 
#define UTIME_OMIT ((1l << 30) - 2l)
#define ASAN_POISON_MEMORY_REGION(addr,size) ((void)(addr), (void)(size))
#define __glibcxx_class_requires2(_a,_b,_c) 
#define __glibcxx_class_requires3(_a,_b,_c,_d) 
#define __glibcxx_class_requires4(_a,_b,_c,_d,_e) 
#define CLONE_CHILD_CLEARTID 0x00200000
#define FOPEN_MAX 16
#define PRIuLEAST16 "u"
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __prefetch(ptr) __builtin_prefetch(ptr)
#define __suseconds_t_defined 
#define SPLICE_F_NONBLOCK 2
#define _GLIBCXX_HAVE_LINUX_FUTEX 1
#define WTMPX_FILE _PATH_WTMPX
#define STATX_ATTR_MOUNT_ROOT 0x00002000
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define __NR_fchownat 54
#define _SEMAPHORE_H 1
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define SYS_kexec_load __NR_kexec_load
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define unix 1
#define SIGPWR 30
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define STATX_CTIME 0x00000080U
#define __NR_gettimeofday 169
#define _PSTL_CPP14_2RANGE_MISMATCH_EQUAL_PRESENT (_MSC_VER >= 1900 || __cplusplus >= 201300L || __cpp_lib_robust_nonmodifying_seq_ops == 201304)
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define _GCC_SIZE_T 
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define _STL_ITERATOR_H 1
#define __cpp_lib_shift 201806L
#define VALGRIND_MEMPOOL_ALLOC(h,a,s) 
#define __U64_TYPE unsigned long int
#define L_SET SEEK_SET
#define _LIBC_LIMITS_H_ 1
#define __USE_XOPEN2K8XSI 1
#define __glibcxx_constexpr_assert(cond) if (__builtin_is_constant_evaluated() && !bool(cond)) __builtin_unreachable()
#define __cpp_namespace_attributes 201411L
#define OLD_TIME 4
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _GLIBCXX_BITS_UNIFORM_INT_DIST_H 
#define _POSIX_V6_ILP32_OFFBIG -1
#define MDBX_CXX11_CONSTEXPR constexpr
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define __SIZEOF_SEM_T 32
#define MAP_HUGETLB 0x40000
#define __cpp_constexpr_dynamic_alloc 201907L
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define CPU_ALLOC_SIZE(count) __CPU_ALLOC_SIZE (count)
#define __cpp_lib_tuple_element_t 201402L
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __POSIX_FADV_DONTNEED 4
#define __cpp_lib_ssize 201902L
#define __ONCE_FLAG_INIT { 0 }
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define __LC_CTYPE 0
#define POSIX_MADV_WILLNEED 3
#define S_IWOTH (S_IWGRP >> 3)
#define __NR_splice 76
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define __cpp_lib_char8_t 201907L
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define __LONG_WIDTH__ 64
#define __STDLIB_MB_LEN_MAX 16
#define SIG_ERR ((__sighandler_t) -1)
#define __S_IFIFO 0010000
#define __INO_T_MATCHES_INO64_T 1
#define _GLIBCXX_HAVE_FLOAT_H 1
#define FPE_FLTRES FPE_FLTRES
#define __POSIX_FADV_NOREUSE 5
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 92
#define __cpp_lib_void_t 201411
#define _GLIBCXX_HAVE_READLINK 1
#define IPC_CREAT 01000
#define _GLIBCXX_USE_ALLOCATOR_NEW 1
#define __GLIBC_USE_IEC_60559_EXT 1
#define __NR_semop 193
#define __blkcnt_t_defined 
#define STA_CLOCKERR 0x1000
#define UINT_LEAST32_MAX (4294967295U)
#define EMFILE 24
#define __NR_fanotify_mark 263
#define __NR3264_mmap 222
#define __cpp_lib_apply 201603
#define SCNxLEAST8 "hhx"
#define SA_NODEFER 0x40000000
#define F_SETOWN_EX __F_SETOWN_EX
#define __lldiv_t_defined 1
#define PRIo64 __PRI64_PREFIX "o"
#define SYS_truncate __NR_truncate
#define _GLIBCXX_HAVE_SYS_TYPES_H 1
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define _GLIBCXX_HAVE_EXPF 1
#define _GLIBCXX_HAVE_NETDB_H 1
#define _PSTL_MONOTONIC_PRESENT (__INTEL_COMPILER >= 1800)
#define __STRINGS_FORTIFIED 1
#define _POSIX_PRIORITIZED_IO 200809L
#define SYS_setreuid __NR_setreuid
#define _ASSERT_H 1
#define __NR_migrate_pages 238
#define ENOBUFS 105
#define __time_t_defined 1
#define __cpp_init_captures 201803L
#define _SC_INT_MIN _SC_INT_MIN
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
#define SYS_tgkill __NR_tgkill
#define PRIuSIZE PRIuPTR
#define _GLIBCXX_UNORDERED_SET 1
#define __NR_preadv2 286
#define __NR_ptrace 117
#define __INTMAX_TYPE__ long int
#define _GLIBCXX11_USE_C99_MATH 1
#define __SIZEOF_WCHAR_T__ 4
#define SIGINT 2
#define EFAULT 14
#define SYS_init_module __NR_init_module
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define SIGIOT SIGABRT
#define WORD_BIT 32
#define _PSTL_PRAGMA_SIMD_EXCLUSIVE_SCAN(PRM) 
#define _POSIX_TIMER_MAX 32
#define PRIdFAST8 "d"
#define S_IRWXG (S_IRWXU >> 3)
#define _GLIBCXX_HAVE_TLS 1
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define _GLIBCXX_HAVE_ACOSL 1
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define _GLIBCXX_CSTRING 1
#define __ATOMIC_CONSUME 1
#define __NR_recvmmsg 243
#define __cpp_lib_incomplete_container_elements 201505
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __gwchar_t wchar_t
#define sigev_notify_function _sigev_un._sigev_thread._function
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define WAIT_ANY (-1)
#define __PIE__ 2
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define INTMAX_C(c) c ## L
#define __key_t_defined 
#define ILL_PRVOPC ILL_PRVOPC
#define __cpp_lib_syncbuf 201803L
#define _BITS_IPCTYPES_H 1
#define _PSTL_STRING(x) _PSTL_STRING_AUX(x)
#define SYS_accept4 __NR_accept4
#define POSIX_FADV_RANDOM 1
#define __cpp_template_template_args 201611L
#define _GTHREAD_USE_MUTEX_TIMEDLOCK 1
#define __NR_sched_setparam 118
#define _STDINT_H 1
#define __FILE_defined 1
#define MDBX_DATANAME "/mdbx.dat"
#define _MNTENT_H 1
#define __SI_ALIGNMENT 
#define SEGV_ADIPERR SEGV_ADIPERR
#define S_ISUID __S_ISUID
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define LC_NAME __LC_NAME
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MDBX_LOCKING_POSIX2008 2008
#define __CPU_SETSIZE 1024
#define _GLIBCXX_HAVE_SYS_RESOURCE_H 1
#define POLL_IN POLL_IN
#define UINT8_WIDTH 8
#define _GLIBCXX_USE_REALPATH 1
#define ST_APPEND ST_APPEND
#define VALGRIND_MEMPOOL_TRIM(h,a,s) 
#define __cpp_generic_lambdas 201707L
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define SYS_mprotect __NR_mprotect
#define SI_TIMER SI_TIMER
#define __LC_MONETARY 4
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define ELIBMAX 82
#define __noop(...) do {} while(0)
#define __sigstack_defined 1
#define STATX_BTIME 0x00000800U
#define _GLIBCXX_SSTREAM 1
#define SPLICE_F_MORE 4
#define _GLIBCXX_END_NAMESPACE_CONTAINER 
#define _ISOC2X_SOURCE 1
#define _GLIBCXX20_CONSTEXPR constexpr
#define _GLIBCXX_ALWAYS_INLINE inline __attribute__((__always_inline__))
#define __cpp_lib_uncaught_exceptions 201411L
#define __NR_setns 268
#define __ino64_t_defined 
#define PRIi16 "i"
#define __clockid_t_defined 1
#define _GLIBCXX_BEGIN_NAMESPACE_LDBL 
#define __SIZEOF_POINTER__ 8
#define _GLIBCXX_USE_C99_WCHAR _GLIBCXX11_USE_C99_WCHAR
#define __NR_faccessat2 439
#define __anonymous_struct_extension__ __extension__
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define STATX_INO 0x00000100U
#define PROT_BTI 0x10
#define PRIdPTR __PRIPTR_PREFIX "d"
#define ENOENT 2
#define __EXCEPTION_H 1
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define PRId16 "d"
#define __NR3264_lseek 62
#define PRIuFAST64 __PRI64_PREFIX "u"
#define MDBX_CONFIG_H "/libmdbx/build/config.h"
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define SIGTERM 15
#define SPLICE_F_MOVE 1
#define PTHREAD_KEYS_MAX 1024
#define SYS_listen __NR_listen
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define EBADSLT 57
#define EMEDIUMTYPE 124
#define EKEYREVOKED 128
#define _GLIBCXX_THROW_OR_ABORT(_EXC) (throw (_EXC))
#define F_SETFL 4
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define __NR_sethostname 161
#define PRId32 "d"
#define SYS_swapoff __NR_swapoff
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define __SI_BAND_TYPE long int
#define MAP_ANONYMOUS 0x20
#define __NR_swapon 224
#define __HAVE_DISTINCT_FLOAT64X 0
#define MIN(a,b) (((a)<(b))?(a):(b))
#define LOCK_UN 8
#define M_ARENA_TEST -7
#define __cpp_lib_math_constants 201907L
#define __SIZEOF_LONG_LONG__ 8
#define MAP_NONBLOCK 0x10000
#define __NR_syncfs 267
#define _GLIBCXX_HAVE_ASINF 1
#define _GLIBCXX_HAVE_ASINL 1
#define POSIX_FADV_SEQUENTIAL 2
#define STATX_TYPE 0x00000001U
#define PRIoPTR __PRIPTR_PREFIX "o"
#define MDBX_MAYBE_UNUSED [[maybe_unused]]
#define SYS_pkey_alloc __NR_pkey_alloc
#define _GLIBCXX_HAVE_SYS_STATVFS_H 1
#define SYS_sched_rr_get_interval __NR_sched_rr_get_interval
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define LIBMDBX_API 
#define __exctype(name) extern int name (int) __THROW
#define PRId64 __PRI64_PREFIX "d"
#define _SC_NZERO _SC_NZERO
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define __dll_import 
#define S_IROTH (S_IRGRP >> 3)
#define POSIX_MADV_RANDOM 1
#define _GLIBCXX_PACKAGE_STRING "package-unused version-unused"
#define _RANGES_ALGOBASE_H 1
#define __POSIX2_THIS_VERSION 200809L
#define INTMAX_WIDTH 64
#define __glibcxx_requires_irreflexive_pred(_First,_Last,_Pred) 
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define MREMAP_FIXED 2
#define __NR_flock 32
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __NR_capget 90
#define _GLIBCXX_USE_NANOSLEEP 1
#define _GLIBCXX_MUTEX_H 1
#define _GLIBCXX_HAVE_FINITE 1
#define __glibcxx_requires_partitioned_lower_pred(_First,_Last,_Value,_Pred) 
#define __cpp_lib_starts_ends_with 201711L
#define PRIoFAST8 "o"
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define _GLIBCXX_HAVE_UNISTD_H 1
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __NR_readv 65
#define SYS_mknodat __NR_mknodat
#define __cpp_lib_constexpr_numeric 201911L
#define xMDBX_TOOLS 
#define _BITS_CPU_SET_H 1
#define SYS_sched_get_priority_max __NR_sched_get_priority_max
#define _XOPEN_XCU_VERSION 4
#define __cpp_lib_as_const 201510
#define S_IFIFO __S_IFIFO
#define SCNuFAST8 "hhu"
#define __WCHAR_T 
#define __fsblkcnt_t_defined 
#define _ALLOC_TRAITS_H 1
#define FPE_FLTUND FPE_FLTUND
#define FPE_FLTUNK FPE_FLTUNK
#define _GLIBCXX_OS_DEFINES 1
#define X_OK 1
#define MAXSYMLINKS 20
#define __S_ISGID 02000
