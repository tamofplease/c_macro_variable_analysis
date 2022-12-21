#define __S_IFBLK 0060000
#define _XOPEN_XPG3 1
#define STATX_ATTR_AUTOMOUNT 0x00001000
#define _BITS_SCHED_H 1
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define SI_TIMER SI_TIMER
#define PRIXFAST32 __PRIPTR_PREFIX "X"
#define __SSP_STRONG__ 3
#define S_ISCHR(mode) __S_ISTYPE((mode), __S_IFCHR)
#define MDBX_MC_WAIT4EOT UINT32_C(0x90E297A7)
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define CLONE_SETTLS 0x00080000
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define si_timerid _sifields._timer.si_tid
#define BUS_ADRALN BUS_ADRALN
#define __LDBL_MANT_DIG__ 113
#define MFD_ALLOW_SEALING 2U
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define AT_STATX_SYNC_AS_STAT 0x0000
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define DDBI(mc) (((mc)->mc_flags & C_SUB) ? -(int)(mc)->mc_dbi : (int)(mc)->mc_dbi)
#define __UINT_LEAST16_MAX__ 0xffff
#define __ARM_SIZEOF_WCHAR_T 4
#define SIGPIPE 13
#define __DBL_DECIMAL_DIG__ 17
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define MNTOPT_RO "ro"
#define __FLT128_MAX_10_EXP__ 4932
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define _POSIX_CPUTIME 0
#define __off64_t_defined 
#define sa_sigaction __sigaction_handler.sa_sigaction
#define PRIXFAST64 __PRI64_PREFIX "X"
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 0
#define SCNiFAST8 "hhi"
#define MDBX_PNL_INITIAL (MDBX_PNL_GRANULATE - 2 - MDBX_ASSUME_MALLOC_OVERHEAD / sizeof(pgno_t))
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define atomic_flag_clear_explicit(PTR,MO) __atomic_clear ((PTR), (MO))
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define si_fd _sifields._sigpoll.si_fd
#define __UINT_LEAST8_TYPE__ unsigned char
#define atomic_fetch_sub(PTR,VAL) __atomic_fetch_sub ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define _T_WCHAR_ 
#define _SC_IPV6 _SC_IPV6
#define EUNATCH 49
#define RWH_WRITE_LIFE_SHORT 2
#define L_cuserid 9
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define SCNuMAX __PRI64_PREFIX "u"
#define INT_LEAST16_MIN (-32767-1)
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define IS_BRANCH(p) (((p)->mp_flags & P_BRANCH) != 0)
#define setbit(a,i) ((a)[(i)/NBBY] |= 1<<((i)%NBBY))
#define ENOCSI 50
#define __stub___compat_get_kernel_syms 
#define si_arch _sifields._sigsys._arch
#define _POSIX_CLOCK_SELECTION 200809L
#define __S64_TYPE long int
#define MDBX_USE_OFDLOCKS_AUTO 
#define _PRINTF_NAN_LEN_MAX 4
#define _POSIX_PRIORITIZED_IO 200809L
#define __FLT128_DIG__ 33
#define __stub_fchflags 
#define __SQUAD_TYPE long int
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define _BITS_SIGINFO_CONSTS_H 1
#define SIGBUS 7
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define _BITS_FLOATN_COMMON_H 
#define __GNU_LIBRARY__ 6
#define NL_NMAX INT_MAX
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define PTHREAD_CANCELED ((void *) -1)
#define ILL_ILLTRP ILL_ILLTRP
#define AT_STATX_FORCE_SYNC 0x2000
#define si_pid _sifields._kill.si_pid
#define S_IRGRP (S_IRUSR >> 3)
#define __CHAR_BIT__ 8
#define __FSWORD_T_TYPE __SWORD_TYPE
#define EAFNOSUPPORT 97
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define EREMCHG 78
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define DKBUF char _kbuf[DKBUF_MAX * 4 + 2]
#define SIGTTIN 21
#define __noop(...) do {} while(0)
#define __must_check_result __attribute__((__warn_unused_result__))
#define __attribute_pure__ __attribute__ ((__pure__))
#define EACCES 13
#define __UINT8_MAX__ 0xff
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define __unreachable() __builtin_unreachable()
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define atomic_flag_test_and_set(PTR) __atomic_test_and_set ((PTR), __ATOMIC_SEQ_CST)
#define ST_SYNCHRONOUS ST_SYNCHRONOUS
#define WCHAR_MAX __WCHAR_MAX
#define NL_LANGMAX _POSIX2_LINE_MAX
#define DKBUF_DEBUG ((void)(0))
#define EDESTADDRREQ 89
#define INT16_C(c) c
#define SPLICE_F_GIFT 8
#define _SC_2_C_DEV _SC_2_C_DEV
#define IOV_MAX __IOV_MAX
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define _SC_BARRIERS _SC_BARRIERS
#define PIPE_BUF 4096
#define MDBX_CXX14_CONSTEXPR __inline
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define P_LOOSE 0x4000
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define STATX_BASIC_STATS 0x000007ffU
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define clrbit(a,i) ((a)[(i)/NBBY] &= ~(1<<((i)%NBBY)))
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define __stack_t_defined 1
#define _XOPEN_SOURCE 700
#define _POSIX2_BC_DIM_MAX 2048
#define UINT_LEAST32_WIDTH 32
#define __CFLOAT128 _Complex _Float128
#define EILSEQ 84
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ESPIPE 29
#define RENAME_EXCHANGE (1 << 1)
#define __STDLIB_MB_LEN_MAX 16
#define PRIxSIZE PRIxPTR
#define _POSIX_TTY_NAME_MAX 9
#define INT32_MIN (-2147483647-1)
#define STATX_BTIME 0x00000800U
#define MDBX_CACHELINE_SIZE 64
#define SCNxFAST8 "hhx"
#define SI_DETHREAD SI_DETHREAD
#define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
#define EPERM 1
#define __OFF_T_MATCHES_OFF64_T 1
#define EMLINK 31
#define UINT_FAST16_WIDTH __WORDSIZE
#define _PATH_VI "/usr/bin/vi"
#define PRIdMAX __PRI64_PREFIX "d"
#define __WCHAR_MAX__ 0xffffffffU
#define pthread_cleanup_push_defer_np(routine,arg) do { struct __pthread_cleanup_frame __clframe __attribute__ ((__cleanup__ (__pthread_cleanup_routine))) = { .__cancel_routine = (routine), .__cancel_arg = (arg), .__do_it = 1 }; (void) pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED, &__clframe.__cancel_type)
#define MDBX_PNL_ASCENDING 0
#define VALGRIND_CREATE_MEMPOOL(h,r,z) 
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define INT16_MAX (32767)
#define __CLANG_PREREQ(maj,min) (0)
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define MADV_MERGEABLE 12
#define __STATFS_MATCHES_STATFS64 1
#define SCHED_IDLE 5
#define _STDIO_H 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define mdbx_warning(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_WARN)) mdbx_debug_log(MDBX_LOG_WARN, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define __S_IREAD 0400
#define _SYS_UCONTEXT_H 1
#define __ASM_SVE_CONTEXT_H 
#define ADJ_ESTERROR 0x0008
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_IEC_559 0
#define F_GETOWN_EX __F_GETOWN_EX
#define __LITTLE_ENDIAN 1234
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 0
#define _IOFBF 0
#define _POSIX2_BC_STRING_MAX 1000
#define __FLT_EVAL_METHOD__ 0
#define EL3RST 47
#define _POSIX_MQ_PRIO_MAX 32
#define si_addr _sifields._sigfault.si_addr
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define MDBX_DEPRECATED 
#define STA_DEL 0x0020
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define INT_LEAST32_WIDTH 32
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define SCNiPTR __PRIPTR_PREFIX "i"
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define __FLT64_DECIMAL_DIG__ 17
#define LIBMDBX_VERINFO_API __dll_export
#define F_GETPIPE_SZ 1032
#define _POSIX_ASYNC_IO 1
#define _SC_2_VERSION _SC_2_VERSION
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define SCHED_RR 2
#define ST_NODEV ST_NODEV
#define SCNu64 __PRI64_PREFIX "u"
#define MDBX_VERSION_MAJOR 0
#define __has_warning(x) (0)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define LONG_WIDTH __WORDSIZE
#define __HAVE_FLOAT64 1
#define _POSIX_PATH_MAX 256
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define NSIG _NSIG
#define MDBX_64BIT_ATOMIC_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_64BIT_ATOMIC)
#define FNONBLOCK O_NONBLOCK
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define WSTOPPED 2
#define __ASSERT_VOID_CAST (void)
#define PRIdFAST64 __PRI64_PREFIX "d"
#define CLONE_NEWNET 0x40000000
#define _SC_PIPE _SC_PIPE
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define atomic_fetch_add(PTR,VAL) __atomic_fetch_add ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define __SIGEV_MAX_SIZE 64
#define PRIXPTR __PRIPTR_PREFIX "X"
#define ILL_BADIADDR ILL_BADIADDR
#define P_INVALID (~(pgno_t)0)
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __UINT_FAST32_TYPE__ long unsigned int
#define SIGPROF 27
#define DKEY_DEBUG(x) ("-")
#define EOWNERDEAD 130
#define _LINUX_PARAM_H 
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define bool _Bool
#define MDBX_ENABLE_REFUND 1
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define mdbx_sourcery_anchor XCONCAT(mdbx_sourcery_, MDBX_BUILD_SOURCERY)
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define _CS_PATH _CS_PATH
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define __SVE_ZREGS_OFFSET 0
#define MADV_POPULATE_WRITE 23
#define __COMPAR_FN_T 
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define __GID_T_TYPE __U32_TYPE
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define POLL_MSG POLL_MSG
#define UINT64_C(c) c ## UL
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN (-32767-1)
#define ENOTTY 25
#define __FINITE_MATH_ONLY__ 1
#define si_overrun _sifields._timer.si_overrun
#define __stub___compat_uselib 
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define SIGXFSZ 25
#define PRIi32 "i"
#define __cold __attribute__((__cold__)) __optimize("Os")
#define __flatten __attribute__((__flatten__))
#define MOD_TIMECONST ADJ_TIMECONST
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define MDBX_RUNTIME_FLAGS_INIT ((MDBX_DEBUG) > 0) * MDBX_DBG_ASSERT + ((MDBX_DEBUG) > 1) * MDBX_DBG_AUDIT
#define __FLT32X_MAX_EXP__ 1024
#define INVALID_TXNID UINT64_MAX
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define _HAS_EXCEPTIONS 1
#define FALLOC_FL_ZERO_RANGE 0x10
#define __socklen_t_defined 
#define O_EXCL 0200
#define __u_char_defined 
#define C_INITIALIZED 0x01
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define WIFEXITED(status) __WIFEXITED (status)
#define UTIME_NOW ((1l << 30) - 1l)
#define STA_PPSERROR 0x0800
#define MAIN_DBI 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __pid_t_defined 
#define MAX_INPUT 255
#define EADV 68
#define ERANGE 34
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define ECANCELED 125
#define _PATH_UNIX "/boot/vmlinux"
#define S_IFBLK __S_IFBLK
#define _POSIX_TRACE_EVENT_FILTER -1
#define mdbx_free free
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define __CPU_SETSIZE 1024
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __Wpedantic_format_voidptr(ARG) __Wpedantic_format_voidptr(ARG)
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define _THREAD_MUTEX_INTERNAL_H 1
#define PATH_MAX 4096
#define LIBMDBX_INLINE_API(TYPE,NAME,ARGS) LIBMDBX_API TYPE NAME ARGS; static __inline TYPE __inline_ ##NAME ARGS
#define __LDBL_REDIR1(name,proto,alias) name proto
#define SHRT_MAX __SHRT_MAX__
#define _BITS_TYPES_LOCALE_T_H 1
#define UINT8_WIDTH 8
#define MDBX_USE_OFDLOCKS_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_USE_OFDLOCKS)
#define _POSIX_SPIN_LOCKS 200809L
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define SCNdLEAST8 "hhd"
#define mdbx_verbose(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_VERBOSE)) mdbx_debug_log(MDBX_LOG_VERBOSE, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define INT_FAST8_MAX (127)
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define O_ACCMODE 0003
#define __O_NOATIME 01000000
#define MOD_STATUS ADJ_STATUS
#define MDBX_TXN_HAS_CHILD 0x10
#define ETXTBSY 26
#define _BITS_STRING_FORTIFIED_H 1
#define ENOMEM 12
#define MNTOPT_RW "rw"
#define __HAVE_FLOAT128X 0
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define __STDC_CONSTANT_MACROS 1
#define __INT8_C(c) c
#define _BITS_TYPES_H 1
#define _SYS_TIME_H 1
#define SCNxLEAST32 "x"
#define RWH_WRITE_LIFE_EXTREME 5
#define __INT_LEAST8_WIDTH__ 8
#define __INTMAX_TYPE__ long int
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define ST_WRITE ST_WRITE
#define htobe16(x) __bswap_16 (x)
#define _XBS5_LPBIG_OFFBIG -1
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define NFDBITS __NFDBITS
#define __noinline __attribute__((__noinline__))
#define __SHRT_MAX__ 0x7fff
#define __STDC_ISO_10646__ 201706L
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define MDBX_NORETURN __attribute__((__noreturn__))
#define SCNd8 "hhd"
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define __ARM_FEATURE_IDIV 1
#define CLONE_NEWUTS 0x04000000
#define O_LARGEFILE __O_LARGEFILE
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __FLT64X_MAX_10_EXP__ 4932
#define mdbx_fatal(fmt,...) mdbx_debug_log(MDBX_LOG_FATAL, __func__, __LINE__, fmt "\n", __VA_ARGS__);
#define _PATH_KLOG "/proc/kmsg"
#define S_IXOTH (S_IXGRP >> 3)
#define MDBX_ALIGNAS(N) alignas(N)
#define SIGTTOU 22
#define EKEYREJECTED 129
#define si_call_addr _sifields._sigsys._call_addr
#define INVALID_HANDLE_VALUE (-1)
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define _POSIX_SEM_NSEMS_MAX 256
#define _PATH_MAILDIR "/var/mail"
#define _POSIX_SYNCHRONIZED_IO 200809L
#define __O_CLOEXEC 02000000
#define __LDBL_IS_IEC_60559__ 2
#define RWF_NOWAIT 0x00000008
#define __ARM_FP 14
#define INT_FAST16_MAX (9223372036854775807L)
#define __FLT64X_IS_IEC_60559__ 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define MAP_SHARED_VALIDATE 0x03
#define SIGSTKFLT 16
#define MDBX_PNL_FIRST(pl) ((pl)[1])
#define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
#define __MALLOC_DEPRECATED __attribute_deprecated__
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define atomic_fetch_and_explicit(PTR,VAL,MO) __atomic_fetch_and ((PTR), (VAL), (MO))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define _SYS_STATVFS_H 1
#define SCNd16 "hd"
#define _POSIX_VERSION 200809L
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define NAME_MAX 255
#define __WINT_TYPE__ unsigned int
#define mdbx_cassert(mc,expr) mdbx_assert((mc)->mc_txn->mt_env, expr)
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define CPU_CLR(cpu,cpusetp) __CPU_CLR_S (cpu, sizeof (cpu_set_t), cpusetp)
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define SVE_MAGIC 0x53564501
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define __POSIX_FADV_NOREUSE 5
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define _PATHS_H_ 
#define __UINTMAX_TYPE__ long unsigned int
#define EINPROGRESS 115
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define UINTPTR_WIDTH __WORDSIZE
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_GENERIC_BITS_PER_LONG 
#define _PATH_DRUM "/dev/drum"
#define _STDC_PREDEF_H 1
#define EL3HLT 46
#define MDBX_MMAP_INCOHERENT_CPU_CACHE 0
#define CLOCK_MONOTONIC_COARSE 6
#define SVE_VL_MAX __SVE_VL_MAX
#define _POSIX_THREAD_CPUTIME 0
#define __linux 1
#define UTMPX_FILE _PATH_UTMPX
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define CPU_OR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, |)
#define __PRIPTR_PREFIX "l"
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __OPTIMIZE__ 1
#define si_int _sifields._rt.si_sigval.sival_int
#define __f32(x) x ##f32
#define PRIi8 "i"
#define __CHAR_UNSIGNED__ 1
#define ____gwchar_t_defined 1
#define __UINT32_MAX__ 0xffffffffU
#define ST_NODIRATIME ST_NODIRATIME
#define __UID_T_TYPE __U32_TYPE
#define PRIxPTR __PRIPTR_PREFIX "x"
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _POSIX_READER_WRITER_LOCKS 200809L
#define MADV_WILLNEED 3
#define __AARCH64_CMODEL_SMALL__ 1
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define _BITS_UINTN_IDENTITY_H 1
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_AIO_MAX 1
#define __SIZE_T 
#define INT_FAST32_WIDTH __WORDSIZE
#define DEV_BSIZE 512
#define PROT_GROWSDOWN 0x01000000
#define _POSIX_PIPE_BUF 512
#define atomic_init(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_RELAXED)
#define __S_ISVTX 01000
#define __LDBL_MAX_EXP__ 16384
#define _SC_PII _SC_PII
#define SCNo32 "o"
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define SCHED_RESET_ON_FORK 0x40000000
#define __INT_FAST32_WIDTH__ 64
#define _ATFILE_SOURCE 1
#define CPU_ISSET(cpu,cpusetp) __CPU_ISSET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define LTO_ENABLED 
#define IPC_STAT 2
#define SCNuLEAST16 "hu"
#define _SC_NETWORKING _SC_NETWORKING
#define PRIXLEAST32 "X"
#define __FLT128_MIN_EXP__ (-16381)
#define __GNUC_VA_LIST 
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define PRIdSIZE PRIdPTR
#define UINT_FAST64_WIDTH 64
#define INT_LEAST8_WIDTH 8
#define PRIxFAST8 "x"
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define WUNTRACED 2
#define ERESTART 85
#define MDBX_STRING_TETRAD(str) MDBX_TETRAD(str[0], str[1], str[2], str[3])
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define MAX_PAGENO UINT32_C(0x7FFFffff)
#define _POSIX_V6_LP64_OFF64 1
#define NZERO 20
#define F_SEAL_WRITE 0x0008
#define UINT16_C(c) c
#define PRIu8 "u"
#define __always_inline __inline __attribute__ ((__always_inline__))
#define ST_NOATIME ST_NOATIME
#define SCNo8 "hho"
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define MOD_CLKB ADJ_TICK
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FD_SETSIZE 1024
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define MDBX_FAKE_SPILL_WRITEMAP 1
#define __FLT32X_IS_IEC_60559__ 2
#define __KERNEL_STRICT_NAMES 
#define SCNo64 __PRI64_PREFIX "o"
#define ENOMSG 42
#define S_IRWXG (S_IRWXU >> 3)
#define EXIT_FAILURE 1
#define SCNxFAST16 __PRIPTR_PREFIX "x"
#define ADJ_MAXERROR 0x0004
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define MDBX_NOSANITIZE_ENUM __attribute((__no_sanitize__("enum")))
#define _POSIX_AIO_LISTIO_MAX 2
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define CLONE_SYSVSEM 0x00040000
#define CLONE_THREAD 0x00010000
#define __WCHAR_MIN__ 0U
#define SA_NOMASK SA_NODEFER
#define __INT64_C(c) c ## L
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define SA_SIGINFO 4
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define STA_PPSWANDER 0x0400
#define __INT_WCHAR_T_H 
#define CONCAT(a,b) a ##b
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define _POSIX_THREAD_THREADS_MAX 64
#define MDBX_PNL_MOST(pl) MDBX_PNL_FIRST(pl)
#define ST_RELATIME ST_RELATIME
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define _SYS_USER_H 1
#define _POSIX_MQ_OPEN_MAX 8
#define UTMPX_FILENAME _PATH_UTMPX
#define _FORTIFY_SOURCE 2
#define __USE_FILE_OFFSET64 1
#define MDBX_DATA_VERSION 3
#define _SC_TIMERS _SC_TIMERS
#define MS_SYNC 4
#define MAXPATHLEN PATH_MAX
#define SIGN_IS_STEADY(sign) ((sign) > MDBX_DATASIGN_WEAK)
#define _SIGNAL_H 
#define MDBX_USE_SENDFILE 1
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define _BITS_TIMEX_H 1
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define MDBX_c11a_rw(type,ptr) (&(ptr)->c11a)
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _POSIX_LINK_MAX 8
#define M_PERTURB -6
#define MDBX_ENV_CHECKPID_AUTO 
#define _CS_V6_ENV _CS_V6_ENV
#define PRIxFAST32 __PRIPTR_PREFIX "x"
#define F_SETSIG __F_SETSIG
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define SI_USER SI_USER
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define EMULTIHOP 72
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define F_SET_RW_HINT 1036
#define __INT_FAST64_WIDTH__ 64
#define MAX_MAPSIZE32 UINT32_C(0x7f000000)
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _BITS_SIGINFO_ARCH_H 1
#define _DEFAULT_SOURCE 1
#define POLL_ERR POLL_ERR
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define __USE_EXTERN_INLINES 1
#define DN_MODIFY 0x00000002
#define __attribute_used__ __attribute__ ((__used__))
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define PRIuLEAST16 "u"
#define SCNxFAST64 __PRI64_PREFIX "x"
#define MDBX_DEBUG 0
#define _SYS_PARAM_H 1
#define __LOCK_ALIGNMENT 
#define __FLT32X_MANT_DIG__ 53
#define _XOPEN_REALTIME_THREADS 1
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define ETIMEDOUT 110
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define _ASM_GENERIC_INT_LL64_H 
#define PRIuFAST16 __PRIPTR_PREFIX "u"
#define _SC_VERSION _SC_VERSION
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define MDBX_ENV_TXKEY UINT32_C(0x10000000)
#define SCNx32 "x"
#define MDBX_LOCKING_BENAPHORE 1995
#define __USER_LABEL_PREFIX__ 
#define SCHED_OTHER 0
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define MDBX_PGL_LIMIT ((size_t)MAX_PAGENO)
#define MDBX_ENABLE_MADVISE 1
#define CHAR_BIT __CHAR_BIT__
#define MDBX_NOTHROW_CONST_FUNCTION __attribute__((__const__, __nothrow__))
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define F_OFD_SETLK 37
#define MDBX_PRINTF_ARGS(format_index,first_arg) __attribute__((__format__(__printf__, format_index, first_arg)))
#define ENODATA 61
#define CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) __CPU_EQUAL_S (setsize, cpusetp1, cpusetp2)
#define SCNx8 "hhx"
#define _BITS_ENDIANNESS_H 1
#define PRIuLEAST32 "u"
#define _PATH_STDPATH "/usr/bin:/bin:/usr/sbin:/sbin"
#define __F_SETOWN_EX 15
#define __FLT32_MAX_10_EXP__ 38
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define __GLIBC__ 2
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define __END_DECLS 
#define MAP_PRIVATE 0x02
#define _STATBUF_ST_NSEC 
#define PRIuFAST32 __PRIPTR_PREFIX "u"
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define _PATH_SHELLS "/etc/shells"
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define WCONTINUED 8
#define si_status _sifields._sigchld.si_status
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define MNTTYPE_NFS "nfs"
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define CANBSIZ MAX_CANON
#define STATX_INO 0x00000100U
#define VALGRIND_MEMPOOL_TRIM(h,a,s) 
#define __BITS_PER_LONG 64
#define THREAD_RESULT void *
#define __SLONG32_TYPE int
#define MDBX_LOCKING_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_LOCKING)
#define SCNuLEAST64 __PRI64_PREFIX "u"
#define __NO_MATH_ERRNO__ 1
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define F_GETLK F_GETLK64
#define _UNISTD_H 1
#define PRIuLEAST64 __PRI64_PREFIX "u"
#define STATX_NLINK 0x00000004U
#define _XOPEN_ENH_I18N 1
#define MADV_NORMAL 0
#define __SSIZE_T_TYPE __SWORD_TYPE
#define _SC_LONG_BIT _SC_LONG_BIT
#define __jmp_buf_tag_defined 1
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define TMP_MAX 238328
#define __O_NOFOLLOW 0100000
#define FPE_FLTDIV FPE_FLTDIV
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define DBI_AUDITED 0x40
#define _PATH_DEVNULL "/dev/null"
#define STATX_UID 0x00000008U
#define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
#define ILL_ILLOPN ILL_ILLOPN
#define _BSD_SIZE_T_DEFINED_ 
#define SCNi32 "i"
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define __FLT32_DIG__ 6
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define MS_ASYNC 1
#define EINTR 4
#define _POSIX_NO_TRUNC 1
#define __f32x(x) x ##f32x
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define CLOCK_REALTIME_COARSE 5
#define __RLIM_T_MATCHES_RLIM64_T 1
#define MAP_FAILED ((void *) -1)
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define __WCHAR_MAX __WCHAR_MAX__
#define SS_DISABLE SS_DISABLE
#define ENOLINK 67
#define STA_CLOCKERR 0x1000
#define _IO_EOF_SEEN 0x0010
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define ECHILD 10
#define MADV_UNMERGEABLE 13
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define __SHRT_WIDTH__ 16
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define F_SEAL_SEAL 0x0001
#define _XBS5_LP64_OFF64 1
#define __f64x(x) x ##f64x
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define _INTTYPES_H 1
#define RENAME_NOREPLACE (1 << 0)
#define __SVE_NUM_ZREGS 32
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define __FLT32_IS_IEC_60559__ 2
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define __DEV_T_TYPE __UQUAD_TYPE
#define POLL_PRI POLL_PRI
#define atomic_flag_test_and_set_explicit(PTR,MO) __atomic_test_and_set ((PTR), (MO))
#define SA_ONSTACK 0x08000000
#define STATX__RESERVED 0x80000000U
#define __GLIBC_USE_ISOC2X 1
#define nullptr NULL
#define _SYS_UIO_H 1
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define SIGIO SIGPOLL
#define ENOTCONN 107
#define ___int_wchar_t_h 
#define ILL_ILLADR ILL_ILLADR
#define AT_FDCWD -100
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define DN_ACCESS 0x00000001
#define __nonnull(params) __attribute_nonnull__ (params)
#define IS_SUBP(p) (((p)->mp_flags & P_SUBP) != 0)
#define _PATH_KMEM "/dev/kmem"
#define atomic_store_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_store_ptr = (PTR); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (VAL); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (MO)); })
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define POSIX_FADV_RANDOM 1
#define _SYS_STATFS_H 1
#define IS_LEAF(p) (((p)->mp_flags & P_LEAF) != 0)
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define ARRAY_END(array) (&array[ARRAY_LENGTH(array)])
#define __FLT16_HAS_QUIET_NAN__ 1
#define __O_LARGEFILE 0
#define MDBX_TXN_CHECKOWNER 1
#define RE_DUP_MAX (0x7fff)
#define CPU_SETSIZE __CPU_SETSIZE
#define MDBX_PNL_SIZE(pl) ((pl)[0])
#define F_DUPFD_CLOEXEC 1030
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define _PATH_PRESERVE "/var/lib"
#define _POSIX_DELAYTIMER_MAX 32
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define MDBX_64BIT_ATOMIC 1
#define MADV_REMOVE 9
#define _WCHAR_T_ 
#define __UT_HOSTSIZE 256
#define F_SEAL_GROW 0x0004
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define __F_SETOWN 8
#define __FP_FAST_FMA 1
#define CPU_OR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, |)
#define MADV_WIPEONFORK 18
#define _SC_PII_OSI _SC_PII_OSI
#define _VA_LIST_DEFINED 
#define __FLT32X_HAS_INFINITY__ 1
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define UINT32_WIDTH 32
#define __INT32_MAX__ 0x7fffffff
#define PRIX32 "X"
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __SIZEOF_PTHREAD_COND_T 48
#define MDBX_STRINGIFY(x) MDBX_STRINGIFY_HELPER(x)
#define SCNoLEAST16 "ho"
#define __FLT16_DIG__ 3
#define _POSIX_V7_LPBIG_OFFBIG -1
#define MDBX_MT_SIGNATURE UINT32_C(0x93D53A31)
#define STDOUT_FILENO 1
#define atomic_signal_fence(MO) __atomic_signal_fence (MO)
#define _PATH_LASTLOG "/var/log/lastlog"
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __S_IFCHR 0020000
#define FILENAME_MAX 4096
#define O_ASYNC 020000
#define DKEY(x) mdbx_dump_val(x, _kbuf, DKBUF_MAX * 2 + 1)
#define M_NLBLKS 2
#define PRIoFAST16 __PRIPTR_PREFIX "o"
#define mt_end_pgno mt_geo.now
#define PRIX64 __PRI64_PREFIX "X"
#define MADV_DONTFORK 10
#define MOD_MICRO ADJ_MICRO
#define IPC_EXCL 02000
#define __UINT16_C(c) c
#define ELOOP 40
#define SEM_VALUE_MAX (2147483647)
#define VALGRIND_MAKE_MEM_DEFINED(a,s) 
#define mdbx_assert_enabled() (0)
#define NUM_METAS 3
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define _SYS_SENDFILE_H 1
#define __optimize(ops) __attribute__((__optimize__(ops)))
#define __DECIMAL_DIG__ 36
#define _POSIX2_RE_DUP_MAX 255
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 2
#define LOCK_EX 2
#define F_ISSET(w,f) (((w) & (f)) == (f))
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define CPU_EQUAL(cpusetp1,cpusetp2) __CPU_EQUAL_S (sizeof (cpu_set_t), cpusetp1, cpusetp2)
#define MDBX_TXN_DIRTY 0x04
#define MAP_TYPE 0x0f
#define PRIoFAST32 __PRIPTR_PREFIX "o"
#define STA_FREQHOLD 0x0080
#define EIO 5
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define FPE_INTDIV FPE_INTDIV
#define __gnu_linux__ 1
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define __USE_XOPEN2K 1
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define __INT16_MAX__ 0x7fff
#define SEEK_SET 0
#define _LARGEFILE_SOURCE 1
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define _ENDIAN_H 1
#define __FLT128_IS_IEC_60559__ 2
#define _BITS_SIGNUM_ARCH_H 1
#define ESTALE 116
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define ST_NOEXEC ST_NOEXEC
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define MDBX_COMMIT_PAGES 64
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define C_RECLAIMING 0x20
#define atomic_fetch_sub_explicit(PTR,VAL,MO) __atomic_fetch_sub ((PTR), (VAL), (MO))
#define ENOTSOCK 88
#define IS_SHADOWED(txn,p) ((p)->mp_txnid > (txn)->mt_txnid)
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define STATX_SIZE 0x00000200U
#define MDBX_DATA_MAGIC ((MDBX_MAGIC << 8) + MDBX_PNL_ASCENDING * 64 + MDBX_DATA_VERSION)
#define SCNdLEAST32 "d"
#define __S_IFIFO 0010000
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define _XBS5_ILP32_OFF32 -1
#define WCHAR_WIDTH 32
#define _POSIX_SIGQUEUE_MAX 32
#define VALGRIND_MEMPOOL_CHANGE(h,a,b,s) 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define SYNC_FILE_RANGE_WRITE 2
#define DELAYTIMER_MAX 2147483647
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define ST_IMMUTABLE ST_IMMUTABLE
#define ENOSR 63
#define PRIoFAST64 __PRI64_PREFIX "o"
#define C_SUB 0x04
#define _BSD_SIZE_T_ 
#define S_ISDIR(mode) __S_ISTYPE((mode), __S_IFDIR)
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define ADJ_MICRO 0x1000
#define __FLT16_MIN_EXP__ (-13)
#define atomic_is_lock_free(OBJ) __atomic_is_lock_free (sizeof (*(OBJ)), (OBJ))
#define PRIi64 __PRI64_PREFIX "i"
#define _POSIX_MAPPED_FILES 200809L
#define _STATFS_F_NAMELEN 
#define __FLT64_MANT_DIG__ 53
#define __attribute_const__ __attribute__ ((__const__))
#define __sig_atomic_t_defined 1
#define _NSIG (__SIGRTMAX + 1)
#define L_XTND SEEK_END
#define _PC_PATH_MAX _PC_PATH_MAX
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define MDBX_SHRINK_ALLOWED UINT32_C(0x40000000)
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define PAGETYPE(p) ((p)->mp_flags & (P_BRANCH | P_LEAF | P_LEAF2 | P_OVERFLOW))
#define kill_dependency(Y) __extension__ ({ __auto_type __kill_dependency_tmp = (Y); __kill_dependency_tmp; })
#define SCNdLEAST64 __PRI64_PREFIX "d"
#define htobe32(x) __bswap_32 (x)
#define MDBX_TXN_CHECKOWNER_CONFIG MDBX_STRINGIFY(MDBX_TXN_CHECKOWNER)
#define __FLT64X_MANT_DIG__ 113
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define MDBX_c11a_ro(type,ptr) (&(ptr)->c11a)
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define L_tmpnam 20
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define _T_PTRDIFF 
#define __GNUC__ 11
#define PRId16 "d"
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define __pie__ 2
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define PRIoLEAST16 "o"
#define UINT_LEAST8_MAX (255)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define CLONE_FILES 0x00000400
#define STATX_GID 0x00000010U
#define F_BIGDATA 0x01
#define LIBMDBX_INTERNALS 
#define POSIX_MADV_DONTNEED 4
#define _PATH_VARTMP "/var/tmp/"
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define _BITS_POSIX2_LIM_H 1
#define __CFLOAT32X _Complex _Float32x
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __cleanup_fct_attribute 
#define MDBX_FORCE_ASSERTIONS 0
#define MDBX_TETRAD(a,b,c,d) ((uint32_t)(a) << 24 | (uint32_t)(b) << 16 | (uint32_t)(c) << 8 | (d))
#define _LFS_ASYNCHRONOUS_IO 1
#define POSIX_FADV_WILLNEED 3
#define assert_perror(errnum) (__ASSERT_VOID_CAST (0))
#define CMP2INT(a,b) (((b) > (a)) ? -1 : (a) > (b))
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define __daddr_t_defined 
#define RWF_DSYNC 0x00000002
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define _PATH_NOLOGIN "/etc/nologin"
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define PRIdLEAST16 "d"
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define ADJ_OFFSET 0x0001
#define MDBX_ME_SIGNATURE UINT32_C(0x9A899641)
#define DBI_STALE MDBX_DBI_STALE
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __LDBL_MIN_EXP__ (-16381)
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define ELNRNG 48
#define _STDATOMIC_H 
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define __STRING(x) #x
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define LONG_MAX __LONG_MAX__
#define container_of(ptr,type,member) ((type *)((char *)(ptr) - offsetof(type, member)))
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define LOCK_SH 1
#define PRIuMAX __PRI64_PREFIX "u"
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define __ONCE_ALIGNMENT 
#define _IONBF 2
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define _POSIX_HOST_NAME_MAX 255
#define MDBX_CXX14_CONSTEXPR_VAR const
#define __FLT64_MAX_10_EXP__ 308
#define PRIdLEAST32 "d"
#define CHAR_MIN 0
#define __GLIBC_USE_LIB_EXT2 1
#define CONSTEXPR_ENUM_FLAGS_OPERATIONS 1
#define __USE_ISOC99 1
#define SA_NODEFER 0x40000000
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define O_FSYNC O_SYNC
#define __sigevent_t_defined 1
#define RENAME_WHITEOUT (1 << 2)
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __FLT16_MAX_10_EXP__ 4
#define VALGRIND_CHECK_MEM_IS_ADDRESSABLE(a,s) (0)
#define __DBL_IS_IEC_60559__ 2
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define ____sigval_t_defined 
#define NOFILE 256
#define MDBX_ENV_ACTIVE UINT32_C(0x20000000)
#define STA_PPSTIME 0x0004
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define LOCK_RW 192
#define _GCC_WCHAR_T 
#define ULLONG_WIDTH 64
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define UINT64_WIDTH 64
#define SAFE64_INVALID_THRESHOLD UINT64_C(0xffffFFFF00000000)
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define _BITS_STDINT_UINTN_H 1
#define PRIiFAST16 __PRIPTR_PREFIX "i"
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define SI_QUEUE SI_QUEUE
#define UINTMAX_WIDTH 64
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define _SYS_MMAN_H 1
#define MAP_ANON MAP_ANONYMOUS
#define MDBX_OSX_WANNA_SPEED 1
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define mdbx_trace(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_TRACE)) mdbx_debug_log(MDBX_LOG_TRACE, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define __DBL_HAS_INFINITY__ 1
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define PRIdLEAST64 __PRI64_PREFIX "d"
#define ITIMER_PROF ITIMER_PROF
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define LONG_BIT 64
#define _POSIX_NGROUPS_MAX 8
#define PRId8 "d"
#define mdbx_notice(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_NOTICE)) mdbx_debug_log(MDBX_LOG_NOTICE, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define UINT8_MAX (255)
#define __USE_XOPEN 1
#define PRIiFAST32 __PRIPTR_PREFIX "i"
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define stdin stdin
#define SIGQUIT 3
#define CLONE_NEWNS 0x00020000
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define MDBX_ENV_CHECKPID 0
#define _POSIX_TIMER_MAX 32
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define P_ILL_BITS (~(P_BRANCH | P_LEAF | P_LEAF2 | P_OVERFLOW | P_SPILLED))
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define _SC_CLK_TCK _SC_CLK_TCK
#define MDBX_DPL_PREALLOC_FOR_RADIXSORT 1
#define _POSIX2_CHAR_TERM 200809L
#define SPLICE_F_NONBLOCK 2
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define ENV_USABLE_FLAGS (ENV_CHANGEABLE_FLAGS | ENV_CHANGELESS_FLAGS)
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define SCHED_FIFO 1
#define MDBX_MAP_RESIZED MDBX_MAP_RESIZED_is_deprecated()
#define S_ISREG(mode) __S_ISTYPE((mode), __S_IFREG)
#define __DADDR_T_TYPE __S32_TYPE
#define SCNxLEAST64 __PRI64_PREFIX "x"
#define ENOSYS 38
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define EDEADLK 35
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define _ISOC11_SOURCE 1
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define MAX_HANDLE_SZ 128
#define PTHREAD_ATTR_NO_SIGMASK_NP (-1)
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define _PATH_DEVDB "/var/run/dev.db"
#define LONG_MIN (-LONG_MAX - 1L)
#define CPU_COUNT_S(setsize,cpusetp) __CPU_COUNT_S (setsize, cpusetp)
#define FALLOC_FL_INSERT_RANGE 0x20
#define PRIiFAST64 __PRI64_PREFIX "i"
#define __SI_MAX_SIZE 128
#define be32toh(x) __bswap_32 (x)
#define __nothrow __attribute__((__nothrow__))
#define _PATH_MOUNTED "/etc/mtab"
#define MAX_MAPSIZE64 ((MAX_PAGENO + 1) * (uint64_t)MAX_PAGESIZE)
#define __OFF64_T_TYPE __SQUAD_TYPE
#define _LINUX_STAT_H 
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define MDBX_CXX01_CONSTEXPR_VAR const
#define MDBX_LOGGER_DONTCHANGE ((MDBX_debug_func *)(intptr_t)-1)
#define _SIZE_T_DEFINED 
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define POSIX_MADV_NORMAL 0
#define _WCHAR_T_DEFINED_ 
#define __extern_C 
#define SCNdFAST8 "hhd"
#define EBADMSG 74
#define atomic_fetch_xor_explicit(PTR,VAL,MO) __atomic_fetch_xor ((PTR), (VAL), (MO))
#define _POSIX_REGEXP 1
#define __f64(x) x ##f64
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define __USE_POSIX199506 1
#define ST_MANDLOCK ST_MANDLOCK
#define __LDBL_HAS_DENORM__ 1
#define _POSIX_BARRIERS 200809L
#define __statx_timestamp_defined 1
#define ECOMM 70
#define CLONE_PARENT 0x00008000
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define WTMPX_FILE _PATH_WTMPX
#define CPU_XOR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, ^)
#define pthread_cleanup_push(routine,arg) do { struct __pthread_cleanup_frame __clframe __attribute__ ((__cleanup__ (__pthread_cleanup_routine))) = { .__cancel_routine = (routine), .__cancel_arg = (arg), .__do_it = 1 };
#define _POSIX_RE_DUP_MAX 255
#define __CFLOAT32 _Complex _Float32
#define mdbx_realloc realloc
#define __stub_setlogin 
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define STATX_MODE 0x00000002U
#define SIGABRT 6
#define SS_ONSTACK SS_ONSTACK
#define _GCC_WRAP_STDINT_H 
#define SCNoLEAST64 __PRI64_PREFIX "o"
#define _POSIX_MEMORY_PROTECTION 200809L
#define POSIX_FADV_NORMAL 0
#define SCNiLEAST16 "hi"
#define P_BAD 0x10
#define S_IFCHR __S_IFCHR
#define true (1)
#define SCNiLEAST32 "i"
#define SA_RESETHAND 0x80000000
#define EBFONT 59
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define EXEC_PAGESIZE 65536
#define __S32_TYPE int
#define MADV_COLD 20
#define TRAP_UNK TRAP_UNK
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define LOCK_WRITE 128
#define CPU_ALLOC(count) __CPU_ALLOC (count)
#define __DBL_MAX_EXP__ 1024
#define F_WRLCK 1
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define BOOT_TIME 2
#define __WCHAR_WIDTH__ 32
#define __BIT_TYPES_DEFINED__ 1
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define MAP_LOCKED 0x02000
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define _BITS_WCHAR_H 1
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define PTHREAD_KEYS_MAX 1024
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define MDBX_MAGIC UINT64_C( 0x59659DBDEF4C11)
#define MDBX_USE_COPYFILERANGE 1
#define ERFKILL 132
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __FLT16_DECIMAL_DIG__ 5
#define atomic_fetch_or(PTR,VAL) __atomic_fetch_or ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define F_GET_FILE_RW_HINT 1037
#define mm_psize mm_dbs[FREE_DBI].md_xsize
#define M_GRAIN 3
#define EREMOTE 66
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _VA_LIST_ 
#define S_BLKSIZE 512
#define PRIo8 "o"
#define SCNiLEAST64 __PRI64_PREFIX "i"
#define atomic_store(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define CLONE_PIDFD 0x00001000
#define ETOOMANYREFS 109
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define EPFNOSUPPORT 96
#define UINT_LEAST16_WIDTH 16
#define VALGRIND_MEMPOOL_FREE(h,a) 
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define __FLT_IS_IEC_60559__ 2
#define MADV_KEEPONFORK 19
#define SCNdLEAST16 "hd"
#define INT_WIDTH 32
#define MDBX_OSX_WANNA_DURABILITY 0
#define SEGV_MAPERR SEGV_MAPERR
#define _PATH_BSHELL "/bin/sh"
#define __ARM_FP_FAST 1
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define VALGRIND_ENABLE_ADDR_ERROR_REPORTING_IN_RANGE(a,s) 
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define IPC_CREAT 01000
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define IS_FROZEN(txn,p) ((p)->mp_txnid < (txn)->mt_txnid)
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define MDBX_LOCKING MDBX_LOCKING_POSIX2008
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __USECONDS_T_TYPE __U32_TYPE
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define _BITS_STDIO_H 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __SVE_NUM_PREGS 16
#define FREE_DBI 0
#define __glibc_objsize(__o) __bos (__o)
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define PDP_ENDIAN __PDP_ENDIAN
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define ESRMNT 69
#define ENONET 64
#define STA_PLL 0x0001
#define MDBX_MRESIZE_MAY_MOVE 0x00000100
#define _LINUX_STDDEF_H 
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define __FLT32_HAS_QUIET_NAN__ 1
#define _T_WCHAR 
#define STATX_ATTR_ENCRYPTED 0x00000800
#define COLL_WEIGHTS_MAX 255
#define _PC_VDISABLE _PC_VDISABLE
#define DEAD_PROCESS 8
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define MDBX_BUILD_COMPILER "cc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
#define EBADSLT 57
#define __SIZEOF_SIZE_T__ 8
#define mdbx_assert(env,expr) do { if (mdbx_assert_enabled()) mdbx_ensure(env, expr); } while (0)
#define PRIiLEAST16 "i"
#define STATIC_ASSERT_MSG(expr,msg) _Static_assert(expr, msg)
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define __SIG_ATOMIC_WIDTH__ 32
#define MAXHOSTNAMELEN 64
#define MDBX_INTERNAL_FUNC 
#define st_atime st_atim.tv_sec
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define MDBX_DISABLE_GNU_SOURCE 0
#define MMAP_OPTION_TRUNCATE 1
#define _IO_USER_LOCK 0x8000
#define O_APPEND 02000
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define SIG_BLOCK 0
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define MDBX_ENV_CHECKPID_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_ENV_CHECKPID)
#define SIZE_MAX (18446744073709551615UL)
#define __SIZEOF_WINT_T__ 4
#define PRIxLEAST8 "x"
#define PRIiLEAST32 "i"
#define _SC_BASE _SC_BASE
#define SCNdFAST64 __PRI64_PREFIX "d"
#define F_GET_RW_HINT 1035
#define _PATH_CONSOLE "/dev/console"
#define CPU_AND_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, &)
#define MAP_NORESERVE 0x04000
#define ENOTNAM 118
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define __SI_CLOCK_T __clock_t
#define _LINUX_CLOSE_RANGE_H 
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define MADV_DONTNEED 4
#define STATX_MTIME 0x00000040U
#define __U16_TYPE unsigned short int
#define F_SETLEASE 1024
#define CLD_EXITED CLD_EXITED
#define SCNu32 "u"
#define MNTOPT_DEFAULTS "defaults"
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX (4294967295u)
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define MDBX_MC_LIVE UINT32_C(0xFE05D5B1)
#define S_IWUSR __S_IWRITE
#define PRIiFAST8 "i"
#define UINTPTR_MAX (18446744073709551615UL)
#define M_KEEP 4
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define IS_VALID(txn,p) ((p)->mp_txnid <= (txn)->mt_front)
#define PRIx8 "x"
#define DEFAULT_READERS 61
#define _PTRDIFF_T 
#define PRIxFAST64 __PRI64_PREFIX "x"
#define PRIiLEAST64 __PRI64_PREFIX "i"
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define F_SETPIPE_SZ 1031
#define MREMAP_MAYMOVE 1
#define __ARM_FP16_FORMAT_IEEE 1
#define MCL_FUTURE 2
#define __WTERMSIG(status) ((status) & 0x7f)
#define MFD_HUGETLB 4U
#define M_CHECK_ACTION -5
#define MDBX_ASSUME_MALLOC_OVERHEAD (__SIZEOF_POINTER__ * 2u)
#define _SC_PAGESIZE _SC_PAGESIZE
#define C_GCFREEZE 0x40
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define __USE_GNU 1
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define F_UNLCK 2
#define UINT16_WIDTH 16
#define atomic_exchange_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_val = (VAL); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_tmp; __atomic_exchange (__atomic_exchange_ptr, &__atomic_exchange_val, &__atomic_exchange_tmp, (MO)); __atomic_exchange_tmp; })
#define __FLT_MIN_EXP__ (-125)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define MAP_FIXED 0x10
#define STATX_ATIME 0x00000020U
#define __PIE__ 2
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define WEXITED 4
#define MDBX_USE_OFDLOCKS 1
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define _STRUCT_TIMESPEC 1
#define __useconds_t_defined 
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define MIN_MAPSIZE (MIN_PAGESIZE * MIN_PAGENO)
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define _POSIX_SYMLINK_MAX 255
#define UINT32_MAX (4294967295U)
#define __key_t_defined 
#define _GCC_LIMITS_H_ 
#define __uid_t_defined 
#define WNOHANG 1
#define alloca(size) __builtin_alloca (size)
#define MDBX_RADIXSORT_THRESHOLD 333
#define _BITS_STRUCT_STAT_H 1
#define _POSIX2_BC_BASE_MAX 99
#define RWF_HIPRI 0x00000001
#define NL_SETMAX INT_MAX
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __flexarr []
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define SIGHUP 1
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define SIGCHLD 17
#define AT_SYMLINK_NOFOLLOW 0x100
#define __THROWNL __attribute__ ((__nothrow__))
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __PTRDIFF_T 
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define _SC_WORD_BIT _SC_WORD_BIT
#define NBBY CHAR_BIT
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define __HAVE_GENERIC_SELECTION 1
#define __FLT32X_MIN_EXP__ (-1021)
#define PKEY_DISABLE_ACCESS 0x1
#define F_GETFD 1
#define STA_PPSSIGNAL 0x0100
#define _POSIX_CLOCKRES_MIN 20000000
#define F_GETFL 3
#define __INT_FAST64_TYPE__ long int
#define ADJ_TIMECONST 0x0020
#define __ARM_FP16_ARGS 1
#define F_LOCK 1
#define _POSIX_SEMAPHORES 200809L
#define MDBX_PNL_END(pl) (&(pl)[MDBX_PNL_SIZE(pl) + 1])
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define MDBX_PNL_ORDERED(first,last) ((first) > (last))
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define ENOBUFS 105
#define howmany(x,y) (((x) + ((y) - 1)) / (y))
#define _POSIX_ADVISORY_INFO 200809L
#define __struct_FILE_defined 1
#define SCNuLEAST8 "hhu"
#define _ANSI_STDDEF_H 
#define ADJ_TAI 0x0080
#define ASAN_POISON_MEMORY_REGION(addr,size) ((void)(addr), (void)(size))
#define ENOTEMPTY 39
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define _SC_STREAMS _SC_STREAMS
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define MDBX_BUILD_SOURCERY d8797a55c55b5b0b920ac6e230d5563977eb23c86542d570a245d0841b6beb2c_v0_11_6_39_gbb8f4318_dirty
#define EADDRINUSE 98
#define _VA_LIST 
#define atomic_fetch_and(PTR,VAL) __atomic_fetch_and ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define le32toh(x) __uint32_identity (x)
#define PRIx16 "x"
#define mdbx_strdup strdup
#define __ARM_FEATURE_CLZ 1
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define LOCK_NB 4
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define __unix__ 1
#define mdbx_debug_extra(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_EXTRA)) mdbx_debug_log(MDBX_LOG_EXTRA, __func__, __LINE__, fmt, __VA_ARGS__); } while (0)
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG4 1
#define mdbx_audit_enabled() (0)
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define SIG_ATOMIC_WIDTH 32
#define __SIZEOF_POINTER__ 8
#define MAP_EXECUTABLE 0x01000
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define EUCLEAN 117
#define ATOMIC_FLAG_INIT { 0 }
#define MDBX_MC_READY4CLOSE UINT32_C(0x2817A047)
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define __USE_XOPEN2KXSI 1
#define _PATH_SENDMAIL "/usr/sbin/sendmail"
#define __WCOREFLAG 0x80
#define _XOPEN_LEGACY 1
#define PRIx32 "x"
#define __HAVE_DISTINCT_FLOAT64 0
#define __O_DIRECTORY 040000
#define __LP64__ 1
#define _XOPEN_UNIX 1
#define unlikely(cond) __builtin_expect(!!(cond), 0)
#define MDBX_WORDBITS 64
#define SCNu8 "hhu"
#define __DBL_HAS_QUIET_NAN__ 1
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define SIGUSR1 10
#define __FLT_EVAL_METHOD_C99__ 0
#define _POSIX_IPV6 200809L
#define _POSIX_SYMLOOP_MAX 8
#define MDBX_LOCKING_POSIX1988 1988
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __USE_UNIX98 1
#define st_ctime st_ctim.tv_sec
#define _POSIX_TRACE -1
#define LOCK_MAND 32
#define DB_PERSISTENT_FLAGS (MDBX_REVERSEKEY | MDBX_DUPSORT | MDBX_INTEGERKEY | MDBX_DUPFIXED | MDBX_INTEGERDUP | MDBX_REVERSEDUP)
#define MDBX_BUILD_TIMESTAMP "2022-12-20T07:42:42Z"
#define WINT_WIDTH 32
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __MODE_T_TYPE __U32_TYPE
#define CLOCK_REALTIME_ALARM 8
#define __S_IFREG 0100000
#define EOF (-1)
#define THREAD_CALL 
#define EDOM 33
#define _BITS_SIGEVENT_CONSTS_H 1
#define SIGTRAP 5
#define MDBX_TRUST_RTC 0
#define EISDIR 21
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define MDBX_INTERNAL_VAR extern
#define INT_FAST64_WIDTH 64
#define F_GETSIG __F_GETSIG
#define __FLT64_MIN_EXP__ (-1021)
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define PRIx64 __PRI64_PREFIX "x"
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define O_DSYNC __O_DSYNC
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define DBI_VALID 0x10
#define CHAR_MAX UCHAR_MAX
#define __LDBL_DECIMAL_DIG__ 36
#define NL_ARGMAX _POSIX_ARG_MAX
#define STATX_ATTR_APPEND 0x00000020
#define INT_LEAST8_MAX (127)
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define SEEK_DATA 3
#define __aarch64__ 1
#define _BITS_SETJMP_H 1
#define FALLOC_FL_PUNCH_HOLE 0x02
#define SIZE_WIDTH __WORDSIZE
#define __CFLOAT64X _Complex _Float64x
#define MDBX_MMAP_INCOHERENT_FILE_WRITE 0
#define __FLT64_MIN_10_EXP__ (-307)
#define P_SPILLED 0x2000
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define INT8_C(c) c
#define __has_extension(x) (0)
#define __FDS_BITS(set) ((set)->fds_bits)
#define CLONE_PARENT_SETTID 0x00100000
#define _PATH_CSHELL "/bin/csh"
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define si_pkey _sifields._sigfault._bounds._pkey
#define __FLT64X_DECIMAL_DIG__ 36
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define TRAP_HWBKPT TRAP_HWBKPT
#define MDBX_ENVCOPY_WRITEBUF 1048576u
#define __HAVE_DISTINCT_FLOAT64X 0
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __INTMAX_WIDTH__ 64
#define INT_LEAST32_MAX (2147483647)
#define _PATH_WTMP "/var/log/wtmp"
#define ILL_ILLOPC ILL_ILLOPC
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define __USE_LARGEFILE 1
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define __F_GETSIG 11
#define INT_FAST16_WIDTH __WORDSIZE
#define MADV_DONTDUMP 16
#define M_MXFAST 1
#define L_ctermid 9
#define LOGIN_NAME_MAX 256
#define __hot __attribute__((__hot__)) __optimize("O3")
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define PKEY_DISABLE_WRITE 0x2
#define __LDBL_HAS_INFINITY__ 1
#define UINT_LEAST64_WIDTH 64
#define EDEADLOCK EDEADLK
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define ADJ_NANO 0x2000
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define si_uid _sifields._kill.si_uid
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define __FLT_DIG__ 6
#define XCONCAT(a,b) CONCAT(a,b)
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define CLD_DUMPED CLD_DUMPED
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define __ASM_SIGCONTEXT_H 
#define CORE_DBS 2
#define ADJ_STATUS 0x0010
#define _POSIX_V7_ILP32_OFF32 -1
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define MDBX_PURE_FUNCTION __attribute__((__pure__))
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define CLOCK_BOOTTIME_ALARM 9
#define _POSIX_SEM_VALUE_MAX 32767
#define __DEC_EVAL_METHOD__ 2
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define CPU_SET(cpu,cpusetp) __CPU_SET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define ECONNABORTED 103
#define F_SUBDATA 0x02
#define SCNiMAX __PRI64_PREFIX "i"
#define VALGRIND_MAKE_MEM_NOACCESS(a,s) 
#define xMDBX_DEBUG_SPILLING 0
#define __FLT_MANT_DIG__ 24
#define MOUNTED _PATH_MOUNTED
#define me_lazy_fd me_dxb_mmap.fd
#define INT_LEAST8_MIN (-128)
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define __FLT16_MIN_10_EXP__ (-4)
#define __VERSION__ "11.3.0"
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define SCNoLEAST8 "hho"
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define __IOV_MAX 1024
#define S_ISFIFO(mode) __S_ISTYPE((mode), __S_IFIFO)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define _PATH_VARDB "/var/lib/misc/"
#define __UINT64_C(c) c ## UL
#define DBI_USRVALID 0x20
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define MOD_OFFSET ADJ_OFFSET
#define _SYS_TYPES_H 1
#define _PTRDIFF_T_ 
#define PRIXLEAST16 "X"
#define SCNx16 "hx"
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_CDEFS_H 1
#define F_GET_SEALS 1034
#define MCL_ONFAULT 4
#define pthread_cleanup_pop_restore_np(execute) (void) pthread_setcanceltype (__clframe.__cancel_type, NULL); __clframe.__do_it = (execute); } while (0)
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define MDBX_TRUST_RTC_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_TRUST_RTC)
#define SCNi16 "hi"
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define _POSIX_JOB_CONTROL 1
#define INT_LEAST64_WIDTH 64
#define sigev_notify_function _sigev_un._sigev_thread._function
#define M_TOP_PAD -2
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __GXX_ABI_VERSION 1016
#define INT_FAST8_WIDTH 8
#define ENOENT 2
#define __USE_XOPEN2K8 1
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define htobe64(x) __bswap_64 (x)
#define alignas _Alignas
#define mdbx_calloc calloc
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _____fpos_t_defined 1
#define SVE_VL_MIN __SVE_VL_MIN
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define SCHED_DEADLINE 6
#define DN_RENAME 0x00000010
#define __bitwise __bitwise__
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define __WINT_MAX__ 0xffffffffU
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define st_mtime st_mtim.tv_sec
#define O_RDWR 02
#define __INT_LEAST32_MAX__ 0x7fffffff
#define LINE_MAX _POSIX2_LINE_MAX
#define AIO_PRIO_DELTA_MAX 20
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define si_stime _sifields._sigchld.si_stime
#define EHOSTUNREACH 113
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __ASM_GENERIC_POSIX_TYPES_H 
#define _T_PTRDIFF_ 
#define __F_GETOWN 9
#define SIGVTALRM 26
#define F_OFD_GETLK 36
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define __FLT128_MAX_EXP__ 16384
#define PRIXLEAST64 __PRI64_PREFIX "X"
#define __INO_T_TYPE __ULONGWORD_TYPE
#define be16toh(x) __bswap_16 (x)
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define CPU_SET_S(cpu,setsize,cpusetp) __CPU_SET_S (cpu, setsize, cpusetp)
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define atomic_load_explicit(PTR,MO) __extension__ ({ __auto_type __atomic_load_ptr = (PTR); __typeof__ ((void)0, *__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (MO)); __atomic_load_tmp; })
#define TRAP_TRACE TRAP_TRACE
#define SIGPOLL 29
#define MDBX_CXX17_NOEXCEPT 
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define SCNi64 __PRI64_PREFIX "i"
#define F_ULOCK 0
#define SI_ASYNCIO SI_ASYNCIO
#define SCHED_ISO 4
#define TRAP_BRKPT TRAP_BRKPT
#define _FALLOC_H_ 
#define _STATFS_F_FLAGS 
#define mdbx_ensure(env,expr) mdbx_ensure_msg(env, expr, #expr)
#define __struct_tm_defined 1
#define _SC_TRACE _SC_TRACE
#define alignof _Alignof
#define __ssize_t_defined 
#define EBADFD 77
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define MDBX_TXN_ERROR 0x02
#define _POSIX_STREAM_MAX 8
#define MDBX_ASAN_POISON_MEMORY_REGION(addr,size) do { mdbx_trace("POISON_MEMORY_REGION(%p, %zu) at %u", (void *)(addr), (size_t)(size), __LINE__); ASAN_POISON_MEMORY_REGION(addr, size); } while (0)
#define __FLT32_MANT_DIG__ 24
#define __sigval_t_defined 
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define MDBX_TRUST_RTC_AUTO 
#define SVE_VQ_MAX __SVE_VQ_MAX
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define PRIX8 "X"
#define _STDDEF_H 
#define __AARCH64EL__ 1
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define EISNAM 120
#define STA_PPSJITTER 0x0200
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define EXFULL 54
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define SCNoPTR __PRIPTR_PREFIX "o"
#define _SC_FSYNC _SC_FSYNC
#define __S_IFDIR 0040000
#define __SIZE_T__ 
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define __FLT16_MAX_EXP__ 16
#define __stub_gtty 
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define SEEK_CUR 1
#define MAP_HUGE_SHIFT 26
#define si_value _sifields._rt.si_sigval
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define EFAULT 14
#define SSIZE_MAX LONG_MAX
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define MADV_DOFORK 11
#define _SC_2_C_BIND _SC_2_C_BIND
#define RWH_WRITE_LIFE_NONE 1
#define si_utime _sifields._sigchld.si_utime
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define IS_LEAF2(p) unlikely(((p)->mp_flags & P_LEAF2) != 0)
#define FPE_FLTRES FPE_FLTRES
#define _POSIX_QLIMIT 1
#define MDBX_FATAL_ERROR UINT32_C(0x80000000)
#define __BIGGEST_ALIGNMENT__ 16
#define _SYS_SIZE_T_H 
#define INT32_MAX (2147483647)
#define __INT32_C(c) c
#define __S_IEXEC 0100
#define FFSYNC O_FSYNC
#define __ASM_POSIX_TYPES_H 
#define FPSIMD_MAGIC 0x46508001
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define MDBX_PNL_GRANULATE 1024
#define MADV_DODUMP 17
#define SHRT_MIN (-SHRT_MAX - 1)
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP) } }
#define MAP_GROWSDOWN 0x00100
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __wur __attribute_warn_unused_result__
#define PRIX16 "X"
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_RECURSIVE_NP) } }
#define __FLT128_HAS_DENORM__ 1
#define CLOCK_REALTIME 0
#define MDBX_DATA_MAGIC_LEGACY_DEVEL ((MDBX_MAGIC << 8) + 255)
#define DN_ATTRIB 0x00000020
#define _BITS_TIME_H 1
#define SIG_UNBLOCK 1
#define _POSIX_RTSIG_MAX 8
#define STATX_TYPE 0x00000001U
#define PROT_MTE 0x20
#define FPE_INTOVF FPE_INTOVF
#define __O_DIRECT 0200000
#define SIGPWR 30
#define __error_t_defined 1
#define PRIoLEAST32 "o"
#define __SCHAR_WIDTH__ 8
#define MDBX_CXX01_CONSTEXPR __inline
#define SCNiLEAST8 "hhi"
#define M_ARENA_MAX -8
#define __ORDER_PDP_ENDIAN__ 3412
#define PROT_READ 0x1
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define POSIX_MADV_WILLNEED 3
#define _ISOC95_SOURCE 1
#define INT_FAST8_MIN (-128)
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define EL2HLT 51
#define __ARM_64BIT_STATE 1
#define SCHAR_WIDTH 8
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define sa_handler __sigaction_handler.sa_handler
#define SIGSEGV 11
#define SVE_VQ_MIN __SVE_VQ_MIN
#define ACCOUNTING 9
#define be64toh(x) __bswap_64 (x)
#define BYTE_ORDER __BYTE_ORDER
#define ENOKEY 126
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define ATOMIC_VAR_INIT(VALUE) (VALUE)
#define __INT_FAST32_TYPE__ long int
#define __have_pthread_attr_t 1
#define __STDC_FORMAT_MACROS 1
#define PRIiLEAST8 "i"
#define SCNi8 "hhi"
#define _BITS_TYPESIZES_H 1
#define _XOPEN_VERSION 700
#define MNTTAB _PATH_MNTTAB
#define DN_DELETE 0x00000008
#define ILL_COPROC ILL_COPROC
#define O_NOCTTY 0400
#define S_IWGRP (S_IWUSR >> 3)
#define SCNxFAST32 __PRIPTR_PREFIX "x"
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define htole32(x) __uint32_identity (x)
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define O_RDONLY 00
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define MIN_PAGENO NUM_METAS
#define WSTOPSIG(status) __WSTOPSIG (status)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define F_OK 0
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define NGROUPS NGROUPS_MAX
#define VALGRIND_DESTROY_MEMPOOL(h) 
#define RAND_MAX 2147483647
#define _POSIX_SPAWN 200809L
#define _POSIX_MAX_INPUT 255
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define SCNdFAST32 __PRIPTR_PREFIX "d"
#define C_UNTRACK 0x10
#define F_SHLCK 8
#define _SIZET_ 
#define RWH_WRITE_LIFE_MEDIUM 3
#define EADDRNOTAVAIL 99
#define ESHUTDOWN 108
#define __need___va_list 
#define F_SETLK F_SETLK64
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define __S_IWRITE 0200
#define FOPEN_MAX 16
#define F_SEAL_SHRINK 0x0002
#define ST_RDONLY ST_RDONLY
#define __SIZE_TYPE__ long unsigned int
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define _SYS_IPC_H 1
#define atomic_exchange(PTR,VAL) atomic_exchange_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define F_SETOWN __F_SETOWN
#define MADV_HWPOISON 100
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define P_META 0x08
#define XATTR_LIST_MAX 65536
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define FPE_CONDTRAP FPE_CONDTRAP
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define NODE_ADD_FLAGS (F_DUPDATA | F_SUBDATA | MDBX_RESERVE | MDBX_APPEND)
#define __FLT64X_DIG__ 33
#define __ARM_FEATURE_FMA 1
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define MADV_POPULATE_READ 22
#define __INT8_TYPE__ signed char
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define MFD_CLOEXEC 1U
#define __HAVE_DISTINCT_FLOAT128 0
#define __ELF__ 1
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define MDBX_TXN_BLOCKED (MDBX_TXN_FINISHED | MDBX_TXN_ERROR | MDBX_TXN_HAS_CHILD)
#define CLOCK_THREAD_CPUTIME_ID 3
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define STA_INS 0x0010
#define SEM_FAILED ((sem_t *) 0)
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define STA_MODE 0x4000
#define S_ISGID __S_ISGID
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define MDBX_LOCK_MAGIC ((MDBX_MAGIC << 8) + MDBX_LOCK_VERSION)
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define UIO_MAXIOV __IOV_MAX
#define __F_GETOWN_EX 16
#define PROT_BTI 0x10
#define _BITS_BYTESWAP_H 1
#define _ASM_GENERIC_TYPES_H 
#define __ID_T_TYPE __U32_TYPE
#define ELIBSCN 81
#define SEGV_ACCADI SEGV_ACCADI
#define F_TLOCK 2
#define MDBX_TXN_FINISHED 0x01
#define ADJ_OFFSET_SS_READ 0xa001
#define F_GETLEASE 1025
#define INT8_WIDTH 8
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define O_NOATIME __O_NOATIME
#define CPU_ISSET_S(cpu,setsize,cpusetp) __CPU_ISSET_S (cpu, setsize, cpusetp)
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define SIG_HOLD ((__sighandler_t) 2)
#define __ARM_ARCH_PROFILE 65
#define __sched_priority sched_priority
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define STATIC_ASSERT(expr) STATIC_ASSERT_MSG(expr, #expr)
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define mt_next_pgno mt_geo.next
#define _POSIX_C_SOURCE 200809L
#define SCNdPTR __PRIPTR_PREFIX "d"
#define __SC_THREAD_STACK_MIN_VALUE 75
#define __ARM_PCS_AAPCS64 1
#define FPE_FLTSUB FPE_FLTSUB
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define VALGRIND_MAKE_MEM_UNDEFINED(a,s) 
#define SCNxLEAST16 "hx"
#define _ALLOCA_H 1
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define _BITS_SIGTHREAD_H 1
#define _BITS_SIGCONTEXT_H 1
#define _POSIX_ARG_MAX 4096
#define STATX_ATTR_VERITY 0x00100000
#define F_DUPDATA 0x04
#define RUNNING_ON_VALGRIND (0)
#define ENAVAIL 119
#define MDBX_OSX_SPEED_INSTEADOF_DURABILITY 0
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define META_IS_STEADY(meta) SIGN_IS_STEADY(unaligned_peek_u64_volatile(4, (meta)->mm_datasync_sign))
#define CLOCK_MONOTONIC_RAW 4
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define NL_TEXTMAX INT_MAX
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define F_TEST 3
#define MDBX_CONST_FUNCTION __attribute__((__const__))
#define ENV_CHANGELESS_FLAGS (MDBX_NOSUBDIR | MDBX_RDONLY | MDBX_WRITEMAP | MDBX_NOTLS | MDBX_NORDAHEAD | MDBX_LIFORECLAIM | MDBX_EXCLUSIVE)
#define __MALLOC_HOOK_VOLATILE volatile
#define SIGCONT 18
#define MDBX_HAVE_C11ATOMICS 
#define MADV_FREE 8
#define PRIu16 "u"
#define ENOSTR 60
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define __INT_LEAST64_WIDTH__ 64
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define __cookie_io_functions_t_defined 1
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define _BITS_SIGSTACK_H 1
#define O_SYNC 04010000
#define _POSIX_TIMEOUTS 200809L
#define LIBMDBX_API_TYPE 
#define MNTOPT_SUID "suid"
#define MAP_SYNC 0x80000
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define powerof2(x) ((((x) - 1) & (x)) == 0)
#define _LFS64_LARGEFILE 1
#define EOVERFLOW 75
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define S_IRUSR __S_IREAD
#define F_SETLK64 6
#define BUS_ADRERR BUS_ADRERR
#define CLONE_NEWCGROUP 0x02000000
#define SCHED_BATCH 3
#define SIG_DFL ((__sighandler_t) 0)
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define O_CLOEXEC __O_CLOEXEC
#define __SIZEOF_PTRDIFF_T__ 8
#define _BITS_STDIO2_H 1
#define _LFS64_ASYNCHRONOUS_IO 1
#define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ADAPTIVE_NP) } }
#define C_UPDATING 0x200
#define IPC_PRIVATE ((__key_t) 0)
#define PRIu32 "u"
#define _CS_V7_ENV _CS_V7_ENV
#define xMDBX_TXNID_STEP 1u
#define _LFS64_STDIO 1
#define __ATOMIC_RELAXED 0
#define CSIGNAL 0x000000ff
#define __iovec_defined 1
#define FALLOC_FL_KEEP_SIZE 0x01
#define SIGFPE 8
#define CPU_ZERO(cpusetp) __CPU_ZERO_S (sizeof (cpu_set_t), cpusetp)
#define __stub_sigreturn 
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define _PATH_DEFPATH "/usr/bin:/bin"
#define SCNx64 __PRI64_PREFIX "x"
#define CLOCK_TAI 11
#define ESR_MAGIC 0x45535201
#define HAVE_STRUCT_IOVEC 1
#define __restrict_arr __restrict
#define _STATFS_F_FRSIZE 
#define INTPTR_MIN (-9223372036854775807L-1)
#define MNTTYPE_IGNORE "ignore"
#define EPROTO 71
#define ENOMEDIUM 123
#define _SC_LINE_MAX _SC_LINE_MAX
#define DVAL_DEBUG(x) ("-")
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define PRIu64 __PRI64_PREFIX "u"
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define CLD_CONTINUED CLD_CONTINUED
#define EBUSY 16
#define __UWORD_TYPE unsigned long int
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define __LDBL_DIG__ 33
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define O_NDELAY O_NONBLOCK
#define W_OK 2
#define STA_FLL 0x0008
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __FLT64_IS_IEC_60559__ 2
#define _SIZE_T_ 
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define mdbx_flush_incoherent_cpu_writeback() mdbx_memory_barrier()
#define __FLT16_IS_IEC_60559__ 2
#define MAP_POPULATE 0x08000
#define MNTOPT_NOAUTO "noauto"
#define EMPTY 0
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define CLONE_NEWPID 0x20000000
#define O_DIRECTORY __O_DIRECTORY
#define UINT_FAST32_MAX (18446744073709551615UL)
#define O_CREAT 0100
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define _WCHAR_T_H 
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define __O_DSYNC 010000
#define ENODEV 19
#define LIBMDBX_API 
#define PRIxLEAST16 "x"
#define BOOL_MAX 1
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define MDBX_BUILD_TYPE "Release"
#define __WCLONE 0x80000000
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define INT_MAX __INT_MAX__
#define __dev_t_defined 
#define likely(cond) __builtin_expect(!!(cond), 1)
#define __stub___compat_create_module 
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define EMSGSIZE 90
#define RWF_SYNC 0x00000004
#define _POSIX_MONOTONIC_CLOCK 0
#define P_LEAF 0x02
#define EKEYEXPIRED 127
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define MREMAP_DONTUNMAP 4
#define PRIxLEAST32 "x"
#define _POSIX_CHOWN_RESTRICTED 0
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define S_ISVTX __S_ISVTX
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define EROFS 30
#define POLL_OUT POLL_OUT
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __USE_ISOC95 1
#define ADJ_FREQUENCY 0x0002
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define me_lfd me_lck_mmap.fd
#define MINSIGSTKSZ SIGSTKSZ
#define NULL ((void *)0)
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define atomic_compare_exchange_strong_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 0, (SUC), (FAIL)); })
#define CLONE_NEWIPC 0x08000000
#define __U64_TYPE unsigned long int
#define SEGV_MTEAERR SEGV_MTEAERR
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define __FLT_HAS_QUIET_NAN__ 1
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define S_ISLNK(mode) __S_ISTYPE((mode), __S_IFLNK)
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define INT32_C(c) c
#define _POSIX_TRACE_INHERIT -1
#define __FLT_MAX_10_EXP__ 38
#define MDBX_STRINGIFY_HELPER(x) #x
#define CURSOR_STACK 32
#define _____fpos64_t_defined 1
#define _BITS_SS_FLAGS_H 1
#define OLD_TIME 4
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define SA_NOCLDWAIT 2
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define PROT_GROWSUP 0x02000000
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define UINT_LEAST16_MAX (65535)
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO _PC_SYNC_IO
#define STA_PPSFREQ 0x0002
#define ELIBACC 79
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define C_RETIRING 0x400
#define __glibc_objsize0(__o) __bos0 (__o)
#define _XOPEN_SHM 1
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define EHWPOISON 133
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define _POSIX_TIMERS 200809L
#define PRIxLEAST64 __PRI64_PREFIX "x"
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define INT16_WIDTH 16
#define PRIxFAST16 __PRIPTR_PREFIX "x"
#define L_INCR SEEK_CUR
#define __unix 1
#define TRAP_BRANCH TRAP_BRANCH
#define _BSD_PTRDIFF_T_ 
#define _BITS_PTHREADTYPES_COMMON_H 1
#define SCNo16 "ho"
#define MDBX_TXL_INITIAL (MDBX_TXL_GRANULATE - 2 - MDBX_ASSUME_MALLOC_OVERHEAD / sizeof(txnid_t))
#define HOST_NAME_MAX 64
#define MDBX_TXL_MAX ((1u << 17) - 2 - MDBX_ASSUME_MALLOC_OVERHEAD / sizeof(txnid_t))
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define __DBL_HAS_DENORM__ 1
#define __UINT_FAST16_TYPE__ long unsigned int
#define IS_SPILLED(txn,p) ((p)->mp_txnid == (txn)->mt_txnid)
#define __statx_defined 1
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define _POSIX_RAW_SOCKETS 200809L
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define __CHAR16_TYPE__ short unsigned int
#define __FLT64X_MAX_EXP__ 16384
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define STATX_ATTR_NODUMP 0x00000040
#define E2BIG 7
#define MDBX_MAYBE_UNUSED __attribute__((__unused__))
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define SIGEV_NONE SIGEV_NONE
#define __dll_import 
#define FPE_FLTOVF FPE_FLTOVF
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define _STRINGS_H 1
#define SI_MESGQ SI_MESGQ
#define ENV_INTERNAL_FLAGS (MDBX_FATAL_ERROR | MDBX_ENV_ACTIVE | MDBX_ENV_TXKEY)
#define __SIZE_WIDTH__ 64
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define MDBX_TXL_GRANULATE 32
#define CLONE_VFORK 0x00004000
#define __BLKSIZE_T_TYPE __S32_TYPE
#define _WCHAR_T_DECLARED 
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define DVAL(x) mdbx_dump_val(x, _kbuf + DKBUF_MAX * 2 + 1, DKBUF_MAX * 2 + 1)
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define CLONE_NEWUSER 0x10000000
#define IS_OVERFLOW(p) unlikely(((p)->mp_flags & P_OVERFLOW) != 0)
#define FD_CLOEXEC 1
#define __stub_revoke 
#define pthread_cleanup_pop(execute) __clframe.__do_it = (execute); } while (0)
#define UCHAR_WIDTH 8
#define PRIo32 "o"
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define __FAST_MATH__ 1
#define _XOPEN_REALTIME 1
#define MDBX_DATASIGN_NONE 0u
#define CPU_ZERO_S(setsize,cpusetp) __CPU_ZERO_S (setsize, cpusetp)
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define DEFINE_ENUM_FLAG_OPERATORS(ENUM) 
#define htole16(x) __uint16_identity (x)
#define _PATH_UTMPX _PATH_UTMP
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define stderr stderr
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define _UTMPX_H 1
#define SEGV_BNDERR SEGV_BNDERR
#define MAX_PAGESIZE MDBX_MAX_PAGESIZE
#define __STDC_VERSION__ 201112L
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define ENOTDIR 20
#define roundup(x,y) (__builtin_constant_p (y) && powerof2 (y) ? (((x) + (y) - 1) & ~((y) - 1)) : ((((x) + ((y) - 1)) / (y)) * (y)))
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define SEEK_HOLE 4
#define ADJ_SETOFFSET 0x0100
#define TIMER_ABSTIME 1
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define P_FROZEN 0x8000
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define _POSIX_FSYNC 200809L
#define ILL_BADSTK ILL_BADSTK
#define __PMT(args) args
#define F_SETLKW64 7
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define STATX_ATTR_COMPRESSED 0x00000004
#define AT_NO_AUTOMOUNT 0x800
#define PAGEHDRSZ ((unsigned)offsetof(MDBX_page, mp_ptrs))
#define PRIuFAST8 "u"
#define ECONNRESET 104
#define MDBX_LOCKING_POSIX2001 2001
#define WTERMSIG(status) __WTERMSIG (status)
#define MDBX_PNL_IS_EMPTY(pl) (MDBX_PNL_SIZE(pl) == 0)
#define MDBX_LOCK_SUFFIX "-lck"
#define EIDRM 43
#define SIGSYS 31
#define PRIuFAST64 __PRI64_PREFIX "u"
#define _LINUX_LIMITS_H 
#define linux 1
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define _PATH_VARRUN "/var/run/"
#define O_TMPFILE __O_TMPFILE
#define __S_ISTYPE(mode,mask) (((mode) & __S_IFMT) == (mask))
#define SIGSTOP 19
#define CLONE_CHILD_SETTID 0x01000000
#define ENXIO 6
#define SA_NOCLDSTOP 1
#define CLOCK_MONOTONIC 1
#define MAP_DENYWRITE 0x00800
#define SCNdMAX __PRI64_PREFIX "d"
#define SIGILL 4
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define ST_NOSUID ST_NOSUID
#define ____FILE_defined 1
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define _BITS_UIO_EXT_H 1
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define MOD_NANO ADJ_NANO
#define htole64(x) __uint64_identity (x)
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define FPE_FLTINV FPE_FLTINV
#define F_GETLK64 5
#define MDBX_CPU_WRITEBACK_INCOHERENT 1
#define EBADRQC 56
#define PRIaPGNO PRIu32
#define _SC_NL_NMAX _SC_NL_NMAX
#define MAP_FIXED_NOREPLACE 0x100000
#define CHAR_WIDTH 8
#define F_SETLKW F_SETLKW64
#define __USE_POSIX2 1
#define SA_INTERRUPT 0x20000000
#define SCNuFAST32 __PRIPTR_PREFIX "u"
#define MCL_CURRENT 1
#define __FLT64X_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define VALGRIND_DISABLE_ADDR_ERROR_REPORTING_IN_RANGE(a,s) 
#define __FLT32_MIN_10_EXP__ (-37)
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define NOGROUP (-1)
#define __KEY_T_TYPE __S32_TYPE
#define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)
#define __SVE_VQ_MAX 512
#define FAPPEND O_APPEND
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define __F_SETSIG 10
#define __FLT32X_DIG__ 15
#define __UINT8_TYPE__ unsigned char
#define SCNuFAST16 __PRIPTR_PREFIX "u"
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define __timer_t_defined 1
#define __PTRDIFF_WIDTH__ 64
#define MDBX_PNL_LAST(pl) ((pl)[MDBX_PNL_SIZE(pl)])
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define __BEGIN_DECLS 
#define _SC_PII_XTI _SC_PII_XTI
#define __HAVE_FLOAT16 0
#define _GETOPT_POSIX_H 1
#define atomic_compare_exchange_strong(PTR,VAL,DES) atomic_compare_exchange_strong_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define PRIXLEAST8 "X"
#define MDBX_PGWALK_MAIN ((const char *)((ptrdiff_t)0))
#define ENAMETOOLONG 36
#define _SC_SELECT _SC_SELECT
#define MIN_TXNID UINT64_C(1)
#define _SC_FIFO _SC_FIFO
#define CLD_STOPPED CLD_STOPPED
#define SHRT_WIDTH 16
#define SCNuFAST64 __PRI64_PREFIX "u"
#define BOOL_WIDTH 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define PRIuLEAST8 "u"
#define false (0)
#define POLL_HUP POLL_HUP
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define _STRING_H 1
#define UINT_FAST32_WIDTH __WORDSIZE
#define IS_MODIFIABLE(txn,p) ((p)->mp_txnid == (txn)->mt_front)
#define SA_STACK SA_ONSTACK
#define _GCC_MAX_ALIGN_T 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define _PC_LINK_MAX _PC_LINK_MAX
#define UINT_WIDTH 32
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define CLONE_VM 0x00000100
#define ____sigset_t_defined 
#define EVEN(n) (((n) + 1U) & -2)
#define F_GETOWN __F_GETOWN
#define MDBX_READERS_LIMIT 32767
#define MLOCK_ONFAULT 1U
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define assert(expr) (__ASSERT_VOID_CAST (0))
#define le64toh(x) __uint64_identity (x)
#define POSIX_MADV_SEQUENTIAL 2
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define _POSIX_NAME_MAX 14
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define _SC_POLL _SC_POLL
#define __nlink_t_defined 
#define __FLT16_MANT_DIG__ 11
#define CPU_AND(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, &)
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define __ino_t_defined 
#define ESOCKTNOSUPPORT 94
#define __INTPTR_TYPE__ long int
#define MDBX_IS_ERROR(rc) ((rc) != MDBX_RESULT_TRUE && (rc) != MDBX_RESULT_FALSE)
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ unsigned int
#define __CLOCKID_T_TYPE __S32_TYPE
#define STATX_ATTR_DAX 0x00200000
#define __SLONGWORD_TYPE long int
#define DEFAULT_MAPSIZE MEGABYTE
#define MDBX_BUILD_FLAGS " -fexceptions -fno-semantic-interposition -fno-common -ggdb -Wno-unknown-pragmas -ffunction-sections -fdata-sections -Wall -Wextra -flto -fno-fat-lto-objects -fuse-linker-plugin -flto-odr-type-merging -O3 -DNDEBUG LIBMDBX_EXPORTS MDBX_BUILD_SHARED_LIBRARY=1 -ffast-math -fvisibility=hidden"
#define C_EOF 0x02
#define PRIiPTR __PRIPTR_PREFIX "i"
#define PRIoMAX __PRI64_PREFIX "o"
#define _POSIX_MEMLOCK_RANGE 200809L
#define S_IEXEC S_IXUSR
#define CLONE_SIGHAND 0x00000800
#define _SC_ARG_MAX _SC_ARG_MAX
#define S_ISBLK(mode) __S_ISTYPE((mode), __S_IFBLK)
#define ELIBEXEC 83
#define RWH_WRITE_LIFE_NOT_SET 0
#define atomic_fetch_or_explicit(PTR,VAL,MO) __atomic_fetch_or ((PTR), (VAL), (MO))
#define __pic__ 2
#define MDBX_UNALIGNED_OK 4
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define SCNoLEAST32 "o"
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define _SC_SHELL _SC_SHELL
#define __S_IFLNK 0120000
#define __ARM_ARCH_8A 1
#define IPC_SET 1
#define mdbx_debug(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_DEBUG)) mdbx_debug_log(MDBX_LOG_DEBUG, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define __stub_chflags 
#define CLONE_IO 0x80000000
#define SCNxPTR __PRIPTR_PREFIX "x"
#define VALGRIND_CHECK_MEM_IS_DEFINED(a,s) (0)
#define __SVE_VQ_MIN 1
#define __UQUAD_TYPE unsigned long int
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define EDOTDOT 73
#define SIGUSR2 12
#define __BYTE_ORDER __LITTLE_ENDIAN
#define MAX_WRITE UINT32_C(0x3fff0000)
#define _BITS_UIO_LIM_H 1
#define P_SUBP 0x40
#define __ASM_GENERIC_PARAM_H 
#define CPU_COUNT(cpusetp) __CPU_COUNT_S (sizeof (cpu_set_t), cpusetp)
#define __USE_POSIX 1
#define ETIME 62
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define INT_LEAST16_WIDTH 16
#define MDBX_TXN_RO_BEGIN_FLAGS (MDBX_TXN_RDONLY | MDBX_TXN_RDONLY_PREPARE)
#define STATX_ALL 0x00000fffU
#define BUFSIZ 8192
#define MDBX_LOCKING_SYSV 5
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define __FSID_T_TYPE struct { int __val[2]; }
#define SCNdFAST16 __PRIPTR_PREFIX "d"
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define _LIBC_LIMITS_H_ 1
#define __FLT32_HAS_INFINITY__ 1
#define TTY_NAME_MAX 32
#define MDBX_LOCK_FORMAT (MDBX_CLOCK_SIGN * 27733 + (unsigned)sizeof(MDBX_reader) * 13 + (unsigned)offsetof(MDBX_reader, mr_snapshot_pages_used) * 251 + (unsigned)offsetof(MDBX_lockinfo, mti_oldest_reader) * 83 + (unsigned)offsetof(MDBX_lockinfo, mti_numreaders) * 37 + (unsigned)offsetof(MDBX_lockinfo, mti_readers) * 29)
#define INT_FAST32_MAX (9223372036854775807L)
#define __LDBL_REDIR2_DECL(name) 
#define P_OVERFLOW 0x04
#define _PATH_GSHADOW "/etc/gshadow"
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define __UINT_FAST64_TYPE__ long unsigned int
#define CLONE_UNTRACED 0x00800000
#define MAP_SHARED 0x01
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define WNOWAIT 0x01000000
#define SCNxMAX __PRI64_PREFIX "x"
#define PRIXFAST8 "X"
#define _PATH_UTMP "/var/run/utmp"
#define VALGRIND_MEMPOOL_ALLOC(h,a,s) 
#define EXIT_SUCCESS 0
#define __LDBL_REDIR_DECL(name) 
#define MDBX_WITHOUT_MSVC_CRT 0
#define mdbx_log_enabled(msg) (msg < MDBX_LOG_VERBOSE && msg <= mdbx_loglevel)
#define MOD_FREQUENCY ADJ_FREQUENCY
#define _SC_2_PBS _SC_2_PBS
#define UINT_FAST8_MAX (255)
#define MAP_FILE 0
#define P_BRANCH 0x01
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define _FCNTL_H 1
#define RTSIG_MAX 32
#define PTRDIFF_WIDTH __WORDSIZE
#define _LINUX_POSIX_TYPES_H 
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define INT8_MIN (-128)
#define si_band _sifields._sigpoll.si_band
#define MDBX_BUILD_TARGET "aarch64-linux-gnu-Linux"
#define S_IREAD S_IRUSR
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define __UT_LINESIZE 32
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define PRIXMAX __PRI64_PREFIX "X"
#define EPROTONOSUPPORT 93
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define __itimerspec_defined 1
#define _T_SIZE_ 
#define EBADR 53
#define EFBIG 27
#define __TIMESIZE 64
#define LLONG_MAX __LONG_LONG_MAX__
#define UINT_LEAST8_WIDTH 8
#define ENOTRECOVERABLE 131
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define _LIMITS_H___ 
#define atomic_fetch_xor(PTR,VAL) __atomic_fetch_xor ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define SCNoFAST32 __PRIPTR_PREFIX "o"
#define __SIGRTMAX 64
#define SIGXCPU 24
#define __WNOTHREAD 0x20000000
#define __USE_LARGEFILE64 1
#define CLONE_PTRACE 0x00002000
#define STDIN_FILENO 0
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define __INT64_TYPE__ long int
#define __FLT_MAX_EXP__ 128
#define F_NOTIFY 1026
#define CLOCK_PROCESS_CPUTIME_ID 2
#define __POSIX_FADV_DONTNEED 4
#define FPE_FLTUNK FPE_FLTUNK
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define __gid_t_defined 
#define ENETUNREACH 101
#define EXDEV 18
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define UINT32_C(c) c ## U
#define S_IFLNK __S_IFLNK
#define PRIxMAX __PRI64_PREFIX "x"
#define __ORDER_BIG_ENDIAN__ 4321
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define MDBX_DISABLE_PAGECHECKS 0
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_ILP32_OFF32 -1
#define SI_TKILL SI_TKILL
#define __SVE_VQ_BYTES 16
#define SCNd64 __PRI64_PREFIX "d"
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define MDBX_PNL_PREALLOC_FOR_RADIXSORT 1
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define __dll_export __attribute__((__visibility__("default")))
#define __FP_FAST_FMAF32 1
#define XATTR_SIZE_MAX 65536
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __GLIBC_MINOR__ 35
#define CLONE_DETACHED 0x00400000
#define __UINT_LEAST32_TYPE__ unsigned int
#define MB_LEN_MAX 16
#define EDQUOT 122
#define ENV_CHANGEABLE_FLAGS (MDBX_SAFE_NOSYNC | MDBX_NOMETASYNC | MDBX_DEPRECATED_MAPASYNC | MDBX_NOMEMINIT | MDBX_COALESCE | MDBX_PAGEPERTURB | MDBX_ACCEDE)
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SCNu16 "hu"
#define MDBX_TXN_RW_BEGIN_FLAGS (MDBX_TXN_NOMETASYNC | MDBX_TXN_NOSYNC | MDBX_TXN_TRY)
#define _XBS5_ILP32_OFFBIG -1
#define CLOCK_BOOTTIME 7
#define SIGKILL 9
#define FNDELAY O_NDELAY
#define __intptr_t_defined 
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define PRIiSIZE PRIiPTR
#define INIT_PROCESS 5
#define MOD_TAI ADJ_TAI
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define MADV_PAGEOUT 21
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define BUS_OBJERR BUS_OBJERR
#define MDBX_DATASIGN_WEAK 1u
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _POSIX_VDISABLE '\0'
#define EREMOTEIO 121
#define _PATH_TMP "/tmp/"
#define FD_SETSIZE __FD_SETSIZE
#define SIGCLD SIGCHLD
#define AT_STATX_DONT_SYNC 0x4000
#define ENOSPC 28
#define stdout stdout
#define ENOEXEC 8
#define __WINT_WIDTH__ 32
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define INTPTR_WIDTH __WORDSIZE
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define __INT_LEAST8_MAX__ 0x7f
#define __USE_POSIX199309 1
#define O_DIRECT __O_DIRECT
#define __FLT32X_MAX_10_EXP__ 308
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define _BITS_POSIX_OPT_H 1
#define MDBX_NO_ROOT (MDBX_LAST_ADDED_ERRCODE + 10)
#define STA_NANO 0x2000
#define sched_priority sched_priority
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define __SIGRTMIN 32
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define __SI_SIGFAULT_ADDL 
#define SIGTSTP 20
#define STATX_MNT_ID 0x00001000U
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define mdbx_error(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_ERROR)) mdbx_debug_log(MDBX_LOG_ERROR, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define __UT_NAMESIZE 32
#define __LDBL_MAX_10_EXP__ 4932
#define CLONE_FS 0x00000200
#define ECONNREFUSED 111
#define MDBX_PGWALK_GC ((const char *)((ptrdiff_t)-1))
#define _BITS_SIGNUM_GENERIC_H 1
#define P_LEAF2 0x20
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define MADV_NOHUGEPAGE 15
#define _PATH_SHADOW "/etc/shadow"
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define MDBX_ENABLE_PGOP_STAT 1
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define SA_ONESHOT SA_RESETHAND
#define __stub_stty 
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define __FLT32_MIN_EXP__ (-125)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define XATTR_NAME_MAX 255
#define SCNuLEAST32 "u"
#define mdbx_ensure_msg(env,expr,msg) do { if (unlikely(!(expr))) mdbx_assert_fail(env, msg, __func__, __LINE__); } while (0)
#define MDBX_LOCK_VERSION 4
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define INT32_WIDTH 32
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define _LP64 1
#define DB_USABLE_FLAGS (DB_PERSISTENT_FLAGS | MDBX_CREATE | MDBX_DB_ACCEDE)
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define M_MMAP_MAX -4
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define __UINT8_C(c) c
#define MAX(a,b) (((a)>(b))?(a):(b))
#define _SYS_FILE_H 1
#define __alignas_is_defined 1
#define _BITS_STDINT_INTN_H 1
#define SCNoFAST16 __PRIPTR_PREFIX "o"
#define __FLT64_MAX_EXP__ 1024
#define MOD_MAXERROR ADJ_MAXERROR
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define __S_IFSOCK 0140000
#define ESRCH 3
#define __INT_LEAST32_TYPE__ int
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define ECHRNG 44
#define WTMPX_FILENAME _PATH_WTMPX
#define EHOSTDOWN 112
#define _LFS_LARGEFILE 1
#define STA_CLK 0x8000
#define RWH_WRITE_LIFE_LONG 4
#define __wchar_t__ 
#define MAP_HUGE_MASK 0x3f
#define SEEK_END 2
#define __UINT64_TYPE__ long unsigned int
#define __has_feature(x) (0)
#define _PTHREAD_H 1
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define __stub___compat_query_module 
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define _PATH_TTY "/dev/tty"
#define S_IWOTH (S_IWGRP >> 3)
#define __ARM_NEON 1
#define SEGV_PKUERR SEGV_PKUERR
#define _ISOC99_SOURCE 1
#define SCNiFAST16 __PRIPTR_PREFIX "i"
#define _PATH_RWHODIR "/var/spool/rwho"
#define ENOLCK 37
#define USER_PROCESS 7
#define atomic_flag_clear(PTR) __atomic_clear ((PTR), __ATOMIC_SEQ_CST)
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define HZ 100
#define _ASM_GENERIC_ERRNO_H 
#define MDBX_64BIT_CAS 1
#define _SC_MEMLOCK _SC_MEMLOCK
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define _SC_IOV_MAX _SC_IOV_MAX
#define LOGIN_PROCESS 6
#define _SC_PASS_MAX _SC_PASS_MAX
#define _LARGEFILE64_SOURCE 1
#define __PRI64_PREFIX "l"
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define _STDDEF_H_ 
#define __S_ISUID 04000
#define MDBX_CLOCK_SIGN UINT32_C(0x8017)
#define __stub___compat_bdflush 
#define USHRT_WIDTH 16
#define SCNiFAST32 __PRIPTR_PREFIX "i"
#define _SC_REGEXP _SC_REGEXP
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 01000
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define SA_RESTART 0x10000000
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define F_DUPFD 0
#define MADV_SEQUENTIAL 2
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define __UINT_FAST8_TYPE__ unsigned char
#define atomic_compare_exchange_weak(PTR,VAL,DES) atomic_compare_exchange_weak_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __INT_FAST8_TYPE__ signed char
#define _IOLBF 1
#define MNTOPT_NOSUID "nosuid"
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define PRIiMAX __PRI64_PREFIX "i"
#define TXN_FLAGS (MDBX_TXN_FINISHED | MDBX_TXN_ERROR | MDBX_TXN_DIRTY | MDBX_TXN_SPILLS | MDBX_TXN_HAS_CHILD)
#define __PID_T_TYPE __S32_TYPE
#define STATX_ATTR_IMMUTABLE 0x00000010
#define CHARCLASS_NAME_MAX 2048
#define _SEMAPHORE_H 1
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX _SC_AIO_MAX
#define O_WRONLY 01
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define INT64_WIDTH 64
#define va_arg(v,l) __builtin_va_arg(v,l)
#define MDBX_PNL_ALLOCLEN(pl) ((pl)[-1])
#define PRIdLEAST8 "d"
#define __USE_ISOC11 1
#define _PATH_MEM "/dev/mem"
#define _PC_MAX_CANON _PC_MAX_CANON
#define _THREAD_SHARED_TYPES_H 1
#define AT_REMOVEDIR 0x200
#define SCNiFAST64 __PRI64_PREFIX "i"
#define __f128(x) x ##f128
#define __glibc_has_extension(ext) 0
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define MAP_STACK 0x20000
#define mdbx_debug_extra_print(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_EXTRA)) mdbx_debug_log(MDBX_LOG_EXTRA, NULL, 0, fmt, __VA_ARGS__); } while (0)
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define NDEBUG 1
#define __GNUC_STDC_INLINE__ 1
#define _BITS_FLOATN_H 
#define _POSIX_UIO_MAXIOV 16
#define P_tmpdir "/tmp"
#define NEW_TIME 3
#define AT_STATX_SYNC_TYPE 0x6000
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define __FLT64_HAS_DENORM__ 1
#define _POSIX_SHELL 1
#define __HAVE_FLOAT32 1
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define MDBX_USE_SYNCFILERANGE 1
#define SEGV_ADIDERR SEGV_ADIDERR
#define __WORDSIZE_TIME64_COMPAT32 0
#define __HAVE_DISTINCT_FLOAT32 0
#define ENOTSUP EOPNOTSUPP
#define __STRINGS_FORTIFIED 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define SCNoFAST8 "hho"
#define _POSIX_MESSAGE_PASSING 200809L
#define CPU_FREE(cpuset) __CPU_FREE (cpuset)
#define __FP_FAST_FMAF32x 1
#define STDERR_FILENO 2
#define R_OK 4
#define MADV_RANDOM 1
#define LIBMDBX_H 
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define PTHREAD_ONCE_INIT 0
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define UINT_FAST16_MAX (18446744073709551615UL)
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define __INT_FAST8_WIDTH__ 8
#define __USE_XOPEN_EXTENDED 1
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define _SIZE_T 
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define atomic_thread_fence(MO) __atomic_thread_fence (MO)
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define __ULONG32_TYPE unsigned int
#define ULONG_WIDTH __WORDSIZE
#define MDBX_LOCKING_WIN32FILES -1
#define SCNuPTR __PRIPTR_PREFIX "u"
#define si_syscall _sifields._sigsys._syscall
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __siginfo_t_defined 1
#define DBI_FRESH MDBX_DBI_FRESH
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define UTIME_OMIT ((1l << 30) - 2l)
#define O_RSYNC O_SYNC
#define MDBX_PGWALK_META ((const char *)((ptrdiff_t)-2))
#define CLONE_CHILD_CLEARTID 0x00200000
#define __FLT64X_HAS_INFINITY__ 1
#define __BIG_ENDIAN 4321
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __suseconds_t_defined 
#define LOCK_READ 64
#define PROT_NONE 0x0
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define F_EXLCK 4
#define MQ_PRIO_MAX 32768
#define __ASM_BITSPERLONG_H 
#define __fortify_function __extern_always_inline __attribute_artificial__
#define FIXME "FIXME: " __FILE__ ", " MDBX_STRINGIFY(__LINE__)
#define STATX_ATTR_MOUNT_ROOT 0x00002000
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define __off_t_defined 
#define NCARGS 131072
#define ENOTBLK 15
#define __fallthrough __attribute__((__fallthrough__))
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define MDBX_TXN_SPILLS 0x08
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define SI_KERNEL SI_KERNEL
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define _FILE_OFFSET_BITS 64
#define __SIZEOF_WCHAR_T__ 4
#define unix 1
#define S_IWRITE S_IWUSR
#define MIN_PAGESIZE MDBX_MIN_PAGESIZE
#define PRIdFAST16 __PRIPTR_PREFIX "d"
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ERRORCHECK_NP) } }
#define _SCHED_H 1
#define STATX_CTIME 0x00000080U
#define DBI_DIRTY MDBX_DBI_DIRTY
#define _POSIX_REENTRANT_FUNCTIONS 1
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define F_OFD_SETLKW 38
#define _GCC_SIZE_T 
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define __INO64_T_TYPE __UQUAD_TYPE
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define __W_CONTINUED 0xffff
#define L_SET SEEK_SET
#define __USE_XOPEN2K8XSI 1
#define _SYS_STAT_H 1
#define S_IXGRP (S_IXUSR >> 3)
#define C_SKIPORD 0x800
#define __UINT32_C(c) c ## U
#define PRIdFAST32 __PRIPTR_PREFIX "d"
#define EISCONN 106
#define _POSIX_V6_ILP32_OFFBIG -1
#define MDBX_CXX11_CONSTEXPR __inline
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define _SYS_SELECT_H 1
#define F_ADD_SEALS 1033
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define MAP_HUGETLB 0x40000
#define SIGEV_THREAD SIGEV_THREAD
#define CPU_ALLOC_SIZE(count) __CPU_ALLOC_SIZE (count)
#define _BITS_TIME64_H 1
#define __WINT_MIN__ 0U
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __glibc_has_builtin(name) __has_builtin (name)
#define __ONCE_FLAG_INIT { 0 }
#define _PTRDIFF_T_DECLARED 
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define sigcontext_struct sigcontext
#define EUSERS 87
#define SI_ASYNCNL SI_ASYNCNL
#define _VA_LIST_T_H 
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __prefetch(ptr) __builtin_prefetch(ptr)
#define _PATH_WTMPX _PATH_WTMP
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define __PIC__ 2
#define _PATH_DEV "/dev/"
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define SIG_ERR ((__sighandler_t) -1)
#define ENETDOWN 100
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define O_NOFOLLOW __O_NOFOLLOW
#define MDBX_MRESIZE_MAY_UNMAP 0x00000200
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define PROT_WRITE 0x2
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define __INO_T_MATCHES_INO64_T 1
#define F_SEAL_FUTURE_WRITE 0x0010
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 92
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define MDBX_LOCKING_AUTO 
#define _POSIX2_EXPR_NEST_MAX 32
#define _PC_NAME_MAX _PC_NAME_MAX
#define POLL_IN POLL_IN
#define atomic_compare_exchange_weak_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 1, (SUC), (FAIL)); })
#define MDBX_DEPRECATED_MAPASYNC UINT32_C(0x100000)
#define WINT_MIN (0u)
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __GLIBC_USE_IEC_60559_EXT 1
#define __fsfilcnt_t_defined 
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define __blkcnt_t_defined 
#define me_map me_dxb_mmap.dxb
#define __HAVE_FLOAT128 1
#define PRId32 "d"
#define MDBX_PNL_DISORDERED(first,last) ((first) <= (last))
#define __ASM_PARAM_H 
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define MDBX_PNL_LEAST(pl) MDBX_PNL_LAST(pl)
#define UINT_LEAST32_MAX (4294967295U)
#define CPU_XOR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, ^)
#define EMFILE 24
#define F_SET_FILE_RW_HINT 1038
#define SCNoMAX __PRI64_PREFIX "o"
#define NGROUPS_MAX 65536
#define __va_list__ 
#define SCNxLEAST8 "hhx"
#define atomic_fetch_add_explicit(PTR,VAL,MO) __atomic_fetch_add ((PTR), (VAL), (MO))
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define LLONG_WIDTH 64
#define MDBX_LOCKING_POSIX2008 2008
#define UINTMAX_C(c) c ## UL
#define __lldiv_t_defined 1
#define UINT_MAX (INT_MAX * 2U + 1U)
#define MAX_CANON 255
#define MAX_TXNID (SAFE64_INVALID_THRESHOLD - 1)
#define NODEV ((dev_t) -1)
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define ADJ_TICK 0x4000
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define PRIaTXN PRIi64
#define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
#define DN_MULTISHOT 0x80000000
#define __INT32_TYPE__ int
#define PRIuPTR __PRIPTR_PREFIX "u"
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define _ASSERT_H 1
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define __SIZEOF_DOUBLE__ 8
#define _POSIX_TRACE_LOG -1
#define __time_t_defined 1
#define _SC_INT_MIN _SC_INT_MIN
#define IPC_RMID 0
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define DB_INTERNAL_FLAGS DB_VALID
#define RWF_APPEND 0x00000010
#define _XOPEN_SOURCE_EXTENDED 1
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define PRIuSIZE PRIuPTR
#define __INT_LEAST32_WIDTH__ 32
#define __SI_ERRNO_THEN_CODE 1
#define va_start(v,l) __builtin_va_start(v,l)
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define EPROTOTYPE 91
#define AT_EACCESS 0x200
#define __SWORD_TYPE long int
#define _PC_PRIO_IO _PC_PRIO_IO
#define PROT_EXEC 0x4
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define SIGINT 2
#define _BITS_POSIX1_LIM_H 1
#define __SIZEOF_FLOAT__ 4
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define __ldiv_t_defined 1
#define mdbx_tassert(txn,expr) mdbx_assert((txn)->mt_env, expr)
#define _T_SIZE 
#define SIGIOT SIGABRT
#define UINT8_C(c) c
#define MDBX_PNL_BEGIN(pl) (&(pl)[1])
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define __va_arg_pack() __builtin_va_arg_pack ()
#define EWOULDBLOCK EAGAIN
#define __HAVE_DISTINCT_FLOAT32X 0
#define DN_CREATE 0x00000004
#define PRIdFAST8 "d"
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __GNUC_MINOR__ 3
#define __INT_FAST16_WIDTH__ 64
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define ____mbstate_t_defined 1
#define CPU_CLR_S(cpu,setsize,cpusetp) __CPU_CLR_S (cpu, setsize, cpusetp)
#define _POSIX_V7_ILP32_OFFBIG -1
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define PRIoPTR __PRIPTR_PREFIX "o"
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define ILL_PRVREG ILL_PRVREG
#define _PATH_MNTTAB "/etc/fstab"
#define ELIBBAD 80
#define atomic_load(PTR) atomic_load_explicit (PTR, __ATOMIC_SEQ_CST)
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define INTMAX_C(c) c ## L
#define IPC_NOWAIT 04000
#define ESTRPIPE 86
#define __glibc_clang_prereq(maj,min) 0
#define ILL_PRVOPC ILL_PRVOPC
#define _SC_SIGNALS _SC_SIGNALS
#define _BITS_IPCTYPES_H 1
#define _XOPEN_LIM_H 1
#define MDBX_NOSPILL 0x8000
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define EAGAIN 11
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define _STDINT_H 1
#define _RWLOCK_INTERNAL_H 
#define UINT_FAST8_WIDTH 8
#define __DBL_MAX_10_EXP__ 308
#define __FILE_defined 1
#define __hidden __attribute__((__visibility__("hidden")))
#define MDBX_DATANAME "/mdbx.dat"
#define _MNTENT_H 1
#define UINT16_MAX (65535)
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define __SI_ALIGNMENT 
#define SEGV_ADIPERR SEGV_ADIPERR
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define S_ISUID __S_ISUID
#define MMAP_OPTION_SEMAPHORE 2
#define SCNuFAST8 "hhu"
#define __INT16_C(c) c
#define MDBX_64BIT_CAS_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_64BIT_CAS)
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define __ARM_ARCH_ISA_A64 1
#define __U32_TYPE unsigned int
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define INITIAL_TXNID (MIN_TXNID + NUM_METAS - 1)
#define ST_APPEND ST_APPEND
#define S_IFMT __S_IFMT
#define MS_INVALIDATE 2
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_THREADS _SC_THREADS
#define C_DEL 0x08
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define MAX_MAPSIZE MAX_MAPSIZE64
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define ENFILE 23
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define ELIBMAX 82
#define EEXIST 17
#define static_assert _Static_assert
#define __sigstack_defined 1
#define __PTRDIFF_TYPE__ long int
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define SPLICE_F_MORE 4
#define _ISOC2X_SOURCE 1
#define errno (*__errno_location ())
#define FASYNC O_ASYNC
#define EL2NSYNC 45
#define __ino64_t_defined 
#define STATX_BLOCKS 0x00000400U
#define STA_UNSYNC 0x0040
#define PRIi16 "i"
#define __clockid_t_defined 1
#define __kernel_old_uid_t __kernel_old_uid_t
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define MDBX_LOCKNAME "/mdbx.lck"
#define SIGRTMIN (__libc_current_sigrtmin ())
#define M_MMAP_THRESHOLD -3
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define _BITS_STAT_H 1
#define __size_t 
#define __ATOMIC_SEQ_CST 5
#define _BITS_SIGACTION_H 1
#define __EXCEPTIONS 1
#define __anonymous_struct_extension__ __extension__
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define PRIdPTR __PRIPTR_PREFIX "d"
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define NL_MSGMAX INT_MAX
#define ENOPKG 65
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define F_SETFD 2
#define ITIMER_REAL ITIMER_REAL
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define _POSIX_MAX_CANON 255
#define __STDC_LIMIT_MACROS 1
#define __UINTPTR_TYPE__ long unsigned int
#define DKBUF_MAX 511
#define MDBX_CONFIG_H "/libmdbx/build/config.h"
#define M_TRIM_THRESHOLD -1
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define IPC_INFO 3
#define CLD_KILLED CLD_KILLED
#define MDBX_EPSILON ((MDBX_val *)((ptrdiff_t)-1))
#define _STATBUF_ST_RDEV 
#define MADV_HUGEPAGE 14
#define SIGTERM 15
#define SPLICE_F_MOVE 1
#define __bitwise__ 
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __linux__ 1
#define MAXSYMLINKS 20
#define __LDBL_MIN_10_EXP__ (-4931)
#define O_PATH __O_PATH
#define EMEDIUMTYPE 124
#define EKEYREVOKED 128
#define isset(a,i) ((a)[(i)/NBBY] & (1<<((i)%NBBY)))
#define F_SETFL 4
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define mdbx_malloc malloc
#define _SC_SPAWN _SC_SPAWN
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define __SI_BAND_TYPE long int
#define MAP_ANONYMOUS 0x20
#define DBI_CREAT MDBX_DBI_CREAT
#define MDBX_NOTHROW_PURE_FUNCTION __attribute__((__pure__, __nothrow__))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define LOCK_UN 8
#define M_ARENA_TEST -7
#define X_OK 1
#define SIG_SETMASK 2
#define __SIZEOF_LONG_LONG__ 8
#define MAP_NONBLOCK 0x10000
#define SIGALRM 14
#define __USE_DYNAMIC_STACK_SIZE 1
#define MDBX_CXX11_CONSTEXPR_VAR const
#define C_COPYING 0x100
#define PRIo16 "o"
#define __USE_ATFILE 1
#define POSIX_FADV_SEQUENTIAL 2
#define _PATH_MAN "/usr/share/man"
#define _POSIX_OPEN_MAX 20
#define _POSIX_LOGIN_NAME_MAX 9
#define WORD_BIT 32
#define _GCC_PTRDIFF_T 
#define __alignof_is_defined 1
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define __O_PATH 010000000
#define __FLT128_DECIMAL_DIG__ 36
#define _POSIX_THREAD_KEYS_MAX 128
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define SEGV_ACCERR SEGV_ACCERR
#define MNTTYPE_SWAP "swap"
#define ENOTUNIQ 76
#define MDBX_PNL_SIZEOF(pl) ((MDBX_PNL_SIZE(pl) + 1) * sizeof(pgno_t))
#define PRId64 __PRI64_PREFIX "d"
#define PTRDIFF_MAX (9223372036854775807L)
#define _SC_NZERO _SC_NZERO
#define MDBX_ASAN_UNPOISON_MEMORY_REGION(addr,size) do { mdbx_trace("UNPOISON_MEMORY_REGION(%p, %zu) at %u", (void *)(addr), (size_t)(size), __LINE__); ASAN_UNPOISON_MEMORY_REGION(addr, size); } while (0)
#define _GETOPT_CORE_H 1
#define _MALLOC_H 1
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define S_IROTH (S_IRGRP >> 3)
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define POSIX_MADV_RANDOM 1
#define MOD_ESTERROR ADJ_ESTERROR
#define SCNoFAST64 __PRI64_PREFIX "o"
#define __POSIX2_THIS_VERSION 200809L
#define __WALL 0x40000000
#define MDBX_DATA_MAGIC_LEGACY_COMPAT ((MDBX_MAGIC << 8) + MDBX_PNL_ASCENDING * 64 + 2)
#define INTMAX_WIDTH 64
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define S_IFSOCK __S_IFSOCK
#define __FLT_MIN_10_EXP__ (-37)
#define MREMAP_FIXED 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define RUN_LVL 1
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define SCNd32 "d"
#define isclr(a,i) (((a)[(i)/NBBY] & (1<<((i)%NBBY))) == 0)
#define AT_EMPTY_PATH 0x1000
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define __S_IFMT 0170000
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define SIG_IGN ((__sighandler_t) 1)
#define __ORDER_LITTLE_ENDIAN__ 1234
#define PRIoFAST8 "o"
#define INT_LEAST16_MAX (32767)
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define _STDALIGN_H 
#define PRIoLEAST8 "o"
#define ASAN_UNPOISON_MEMORY_REGION(addr,size) ((void)(addr), (void)(size))
#define PRIoLEAST64 __PRI64_PREFIX "o"
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define EOPNOTSUPP 95
#define _GNU_SOURCE 
#define xMDBX_TOOLS 
#define _POSIX_SAVED_IDS 1
#define _BITS_CPU_SET_H 1
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define __P(args) args
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_SETOWN_EX __F_SETOWN_EX
#define PRIo64 __PRI64_PREFIX "o"
#define PRIXFAST16 __PRIPTR_PREFIX "X"
#define MDBX_VERSION_MINOR 11
#define __S_ISGID 02000
#define __SIZEOF_SEM_T 32
#define _XOPEN_XCU_VERSION 4
#define __ATOMIC_ACQ_REL 4
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define MEGABYTE ((size_t)1 << 20)
#define __fsblkcnt_t_defined 
#define FPE_FLTUND FPE_FLTUND
#define DB_VALID 0x8000
#define _POSIX2_LINE_MAX 2048
#define _STDLIB_H 1
