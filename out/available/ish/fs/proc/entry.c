#define __S_IFBLK 0060000
#define _XOPEN_XPG3 1
#define _BITS_SCHED_H 1
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define SQLITE_MISUSE 21
#define SI_TIMER SI_TIMER
#define SQLITE_IOERR_DELETE_NOENT (SQLITE_IOERR | (23<<8))
#define __SSP_STRONG__ 3
#define S_ISCHR(mode) __S_ISTYPE((mode), __S_IFCHR)
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define O_WRONLY_ (1 << 0)
#define si_timerid _sifields._timer.si_tid
#define _BITS_SIGEVENT_CONSTS_H 1
#define __LDBL_MANT_DIG__ 113
#define FTS5_TOKENIZE_QUERY 0x0001
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define SIGIO_ 29
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define SIG_UNBLOCK_ 1
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define __ARM_SIZEOF_WCHAR_T 4
#define SQLITE_FCNTL_SYNC 21
#define __DBL_DECIMAL_DIG__ 17
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define __FLT128_MAX_10_EXP__ 4932
#define atomic_flag_test_and_set_explicit(PTR,MO) __atomic_test_and_set ((PTR), (MO))
#define SQLITE_CONSTRAINT_ROWID (SQLITE_CONSTRAINT |(10<<8))
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define __ASM_SIGCONTEXT_H 
#define SQLITE_GET_LOCKPROXYFILE SQLITE_FCNTL_GET_LOCKPROXYFILE
#define sa_sigaction __sigaction_handler.sa_sigaction
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __GCC_IEC_559_COMPLEX 2
#define __GNUC_VA_LIST 
#define atomic_is_lock_free(OBJ) __atomic_is_lock_free (sizeof (*(OBJ)), (OBJ))
#define SQLITE_WIN32_TEMP_DIRECTORY_TYPE 2
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define SQLITE_MUTEX_STATIC_VFS1 11
#define _REGX(n) union { dword_t e ##n ##x; word_t n ##x; struct { byte_t n ##l; byte_t n ##h; }; }
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define si_fd _sifields._sigpoll.si_fd
#define __UINT_LEAST8_TYPE__ unsigned char
#define _T_WCHAR_ 
#define __S_ISTYPE(mode,mask) (((mode) & __S_IFMT) == (mask))
#define SQLITE_IOCAP_ATOMIC16K 0x00000040
#define SQLITE_TESTCTRL_EXTRA_SCHEMA_CHECKS 29
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define NOT_WITHIN 0
#define INT_LEAST16_MIN (-32767-1)
#define __ASM_POSIX_TYPES_H 
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define SEGV_ACCERR_ 2
#define __CFLOAT64 _Complex _Float64
#define __stub___compat_get_kernel_syms 
#define si_arch _sifields._sigsys._arch
#define list_entry(item,type,member) container_of(item, type, member)
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define __S64_TYPE long int
#define _POSIX_PRIORITIZED_IO 200809L
#define __FLT128_DIG__ 33
#define SQLITE_VTAB_DIRECTONLY 3
#define SIGWINCH_ 28
#define __stub_fchflags 
#define SQLITE_CANTOPEN 14
#define __SQUAD_TYPE long int
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define _BITS_SIGINFO_CONSTS_H 1
#define SQLITE_DBSTATUS_CACHE_MISS 8
#define SIGBUS 7
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define _BITS_FLOATN_COMMON_H 
#define _BSD_SIZE_T_DEFINED_ 
#define SQLITE_PREPARE_NORMALIZE 0x02
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define PTHREAD_CANCELED ((void *) -1)
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define RLIM_INFINITY_ ((rlim_t_) -1)
#define FPE_FLTRES FPE_FLTRES
#define ILL_ILLTRP ILL_ILLTRP
#define SQLITE_SHM_SHARED 4
#define SQLITE_FCNTL_DATA_VERSION 35
#define _POSIX_PATH_MAX 256
#define SQLITE_IOCAP_ATOMIC32K 0x00000080
#define S_IRGRP (S_IRUSR >> 3)
#define atomic_compare_exchange_strong(PTR,VAL,DES) atomic_compare_exchange_strong_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __CHAR_BIT__ 8
#define SQLITE_CONSTRAINT_UNIQUE (SQLITE_CONSTRAINT | (8<<8))
#define __FSWORD_T_TYPE __SWORD_TYPE
#define SIGCHLD_ 17
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define SIGTTIN 21
#define _POSIX_TRACE -1
#define __attribute_pure__ __attribute__ ((__pure__))
#define __UINT8_MAX__ 0xff
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define SQLITE_DESERIALIZE_RESIZEABLE 2
#define KERNEL_MM_H 
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define COND_INITIALIZER ((cond_t) {PTHREAD_COND_INITIALIZER})
#define _XOPEN_UNIX 1
#define atomic_flag_test_and_set(PTR) __atomic_test_and_set ((PTR), __ATOMIC_SEQ_CST)
#define WCHAR_MAX __WCHAR_MAX
#define SQLITE_MUTEX_FAST 0
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define INT16_C(c) c
#define _SC_2_C_DEV _SC_2_C_DEV
#define si_pid _sifields._kill.si_pid
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define PIPE_BUF 4096
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define SQLITE_FCNTL_LAST_ERRNO 4
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define FS_H 
#define MISC_H 
#define SQLITE_CONFIG_PCACHE_HDRSZ 24
#define PDP_ENDIAN __PDP_ENDIAN
#define stderr stderr
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define SQLITE_TESTCTRL_FAULT_INSTALL 9
#define SQLITE_CHECKPOINT_PASSIVE 0
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define __stack_t_defined 1
#define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
#define __CFLOAT128 _Complex _Float128
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define _POSIX_TTY_NAME_MAX 9
#define INT32_MIN (-2147483647-1)
#define SI_DETHREAD SI_DETHREAD
#define __OFF_T_MATCHES_OFF64_T 1
#define MINSIGSTKSZ 5120
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define SQLITE_MUTEX_STATIC_MEM 3
#define __WCHAR_MAX__ 0xffffffffU
#define forceinline inline __attribute__((always_inline))
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define SQLITE_CONSTRAINT_DATATYPE (SQLITE_CONSTRAINT |(12<<8))
#define INT16_MAX (32767)
#define SQLITE_STATUS_SCRATCH_SIZE 8
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define SQLITE_BUSY_RECOVERY (SQLITE_BUSY | (1<<8))
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __S_IREAD 0400
#define _SYS_UCONTEXT_H 1
#define _POSIX_SYMLINK_MAX 255
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define SQLITE_ACCESS_READ 2
#define __GCC_IEC_559 2
#define SQLITE_IOERR_SHORT_READ (SQLITE_IOERR | (2<<8))
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define SQLITE_TESTCTRL_BYTEORDER 22
#define __LITTLE_ENDIAN 1234
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define _VA_LIST_ 
#define __FLT32X_DECIMAL_DIG__ 17
#define _IOFBF 0
#define __FLT_EVAL_METHOD__ 0
#define _POSIX_MQ_PRIO_MAX 32
#define SQLITE_CONFIG_MMAP_SIZE 22
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define SQLITE_IOERR_BLOCKED (SQLITE_IOERR | (11<<8))
#define _POSIX_NGROUPS_MAX 8
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define SQLITE_INDEX_CONSTRAINT_LT 16
#define SQLITE_CREATE_VTABLE 29
#define __FLT64_DECIMAL_DIG__ 17
#define _XOPEN_VERSION 700
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define SCHED_RR 2
#define SQLITE_IOERR_TRUNCATE (SQLITE_IOERR | (6<<8))
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __HAVE_FLOAT64 1
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 0x00000800
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define NSIG _NSIG
#define SQLITE_OPEN_EXCLUSIVE 0x00000010
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __ASSERT_VOID_CAST (void)
#define SQLITE_FCNTL_TEMPFILENAME 16
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define _SC_PIPE _SC_PIPE
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define SEGV_ACCERR SEGV_ACCERR
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define SQLITE_TESTCTRL_ISKEYWORD 16
#define SQLITE_ERROR 1
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define ILL_BADIADDR ILL_BADIADDR
#define O_TRUNC_ (1 << 9)
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __UINT_FAST32_TYPE__ long unsigned int
#define SIGPROF 27
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define MINSIGSTKSZ_ 2048
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define _CS_PATH _CS_PATH
#define __SVE_ZREGS_OFFSET 0
#define SQLITE_CONFIG_SINGLETHREAD 1
#define __COMPAR_FN_T 
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define __GID_T_TYPE __U32_TYPE
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define POLL_MSG POLL_MSG
#define SQLITE_WIN32_DATA_DIRECTORY_TYPE 1
#define UINT64_C(c) c ## UL
#define SIGQUIT_ 3
#define __DBL_MIN_10_EXP__ (-307)
#define SQLITE_CORRUPT_SEQUENCE (SQLITE_CORRUPT | (2<<8))
#define INT16_MIN (-32767-1)
#define TRACE__NOP(msg,...) use(__VA_ARGS__)
#define SQLITE_DESERIALIZE_FREEONCLOSE 1
#define __FINITE_MATH_ONLY__ 0
#define si_overrun _sifields._timer.si_overrun
#define __stub___compat_uselib 
#define __id_t_defined 
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define SIGXFSZ 25
#define EMU_H 
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define MAX_GROUPS 32
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define __FLT32X_MAX_EXP__ 1024
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define SQLITE_ALTER_TABLE 26
#define SQLITE_WARNING 28
#define __socklen_t_defined 
#define __u_char_defined 
#define SQLITE_EXTERN extern
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define WIFEXITED(status) __WIFEXITED (status)
#define SQLITE_MUTEX_STATIC_MEM2 4
#define unlikely(x) __builtin_expect((x), 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __pid_t_defined 
#define MAX_INPUT 255
#define __GNUC_PATCHLEVEL__ 0
#define SQLITE_OPEN_SHAREDCACHE 0x00020000
#define __FLT32_HAS_DENORM__ 1
#define SQLITE_READ 20
#define DT_SOCK DT_SOCK
#define S_IFBLK __S_IFBLK
#define _POSIX_TRACE_EVENT_FILTER -1
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define __CPU_SETSIZE 1024
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define SQLITE_STMTSTATUS_VM_STEP 4
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define DEV_H 
#define _THREAD_MUTEX_INTERNAL_H 1
#define PATH_MAX 4096
#define DEBUG_memory DEBUG_all
#define __LDBL_REDIR1(name,proto,alias) name proto
#define _BITS_TYPES_LOCALE_T_H 1
#define SQLITE3_TEXT 3
#define EOF (-1)
#define _POSIX_SPIN_LOCKS 200809L
#define SIG_DFL_ 0
#define INT_FAST8_MAX (127)
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define __S_IFMT 0170000
#define POLL_ERR POLL_ERR
#define __SI_SIGFAULT_ADDL 
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define __INT8_C(c) c
#define _BITS_TYPES_H 1
#define _SYS_TIME_H 1
#define rdtsc() ({ uint64_t tsc; __asm__ volatile("mrs %0, PMCCNTR_EL0" : "=r" (tsc)); tsc; })
#define _BITS_SYSMACROS_H 1
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define __INT_LEAST8_WIDTH__ 8
#define __INTMAX_TYPE__ long int
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define SQLITE_ACCESS_EXISTS 0
#define DEBUG_strace DEBUG_all
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define atomic_fetch_and_explicit(PTR,VAL,MO) __atomic_fetch_and ((PTR), (VAL), (MO))
#define htobe16(x) __bswap_16 (x)
#define _XBS5_LPBIG_OFFBIG -1
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define SQLITE_SCANSTAT_NVISIT 1
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define NFDBITS __NFDBITS
#define __SHRT_MAX__ 0x7fff
#define SQLITE_CHECKPOINT_TRUNCATE 3
#define __STDC_ISO_10646__ 201706L
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2
#define O_CREAT_ (1 << 6)
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define ILL_ILLOPC ILL_ILLOPC
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10
#define FPSIMD_MAGIC 0x46508001
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __FLT64X_MAX_10_EXP__ 4932
#define S_IXOTH (S_IXGRP >> 3)
#define RLIMIT_NPROC_ 6
#define SIGTTOU 22
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define _POSIX_SEM_NSEMS_MAX 256
#define SQLITE_CREATE_TEMP_VIEW 6
#define _POSIX_SYNCHRONIZED_IO 200809L
#define __LDBL_IS_IEC_60559__ 2
#define SQLITE_IOERR_FSYNC (SQLITE_IOERR | (4<<8))
#define __ARM_FP 14
#define INT_FAST16_MAX (9223372036854775807L)
#define __FLT64X_IS_IEC_60559__ 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define TIME_H 
#define SIGSTKFLT 16
#define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define _str(x) #x
#define SQLITE_TESTCTRL_SORTER_MMAP 24
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define SQLITE_STMTSTATUS_SORT 2
#define _POSIX_VERSION 200809L
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define NAME_MAX 255
#define __WINT_TYPE__ unsigned int
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define __UINT_LEAST8_MAX__ 0xff
#define SQLITE_INDEX_CONSTRAINT_EQ 2
#define SVE_MAGIC 0x53564501
#define SQLITE_INSERT 18
#define SF_RES (1 << 2)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define SQLITE_FCNTL_LOCKSTATE 1
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define SQLITE_CANTOPEN_SYMLINK (SQLITE_CANTOPEN | (6<<8))
#define __UINTMAX_TYPE__ long unsigned int
#define __HAVE_DISTINCT_FLOAT32X 0
#define SQLITE_IOCAP_ATOMIC 0x00000001
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_GENERIC_BITS_PER_LONG 
#define _STDC_PREDEF_H 1
#define TODO(msg,...) die("TODO: " msg, ##__VA_ARGS__)
#define CLOCK_MONOTONIC_COARSE 6
#define SVE_VL_MAX __SVE_VL_MAX
#define _POSIX_THREAD_CPUTIME 0
#define __linux 1
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define SQLITE_ROLLBACK 1
#define SQLITE_CREATE_TEMP_TABLE 4
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define P_EXEC (1 << 2)
#define si_int _sifields._rt.si_sigval.sival_int
#define SQLITE_OPEN_WAL 0x00080000
#define __CHAR_UNSIGNED__ 1
#define __UINT32_MAX__ 0xffffffffU
#define __UID_T_TYPE __U32_TYPE
#define SQLITE_FCNTL_ROLLBACK_ATOMIC_WRITE 33
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _POSIX_READER_WRITER_LOCKS 200809L
#define SQLITE_FCNTL_BUSYHANDLER 15
#define __AARCH64_CMODEL_SMALL__ 1
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define __SIZE_T 
#define SIGUSR1_ 10
#define _POSIX_PIPE_BUF 512
#define atomic_init(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_RELAXED)
#define __S_ISVTX 01000
#define __LDBL_MAX_EXP__ 16384
#define _BITS_POSIX_OPT_H 1
#define _SC_PII _SC_PII
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define __INT_FAST32_WIDTH__ 64
#define _ATFILE_SOURCE 1
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _SC_NETWORKING _SC_NETWORKING
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define SQLITE_FCNTL_HAS_MOVED 20
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define WUNTRACED 2
#define _SC_NL_NMAX _SC_NL_NMAX
#define _SC_SHELL _SC_SHELL
#define SQLITE_LOCKED 6
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define _POSIX_V6_LP64_OFF64 1
#define SA_RESETHAND_ 0x80000000
#define UINT16_C(c) c
#define __always_inline __inline __attribute__ ((__always_inline__))
#define CLOCK_REALTIME_ 0
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FD_SETSIZE 1024
#define O_NONBLOCK_ (1 << 11)
#define __FLT32X_IS_IEC_60559__ 2
#define __KERNEL_STRICT_NAMES 
#define SQLITE_FCNTL_MMAP_SIZE 18
#define EXIT_FAILURE 1
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define MAX_NAME 256
#define _POSIX_AIO_LISTIO_MAX 2
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __WCHAR_MIN__ 0U
#define ____mbstate_t_defined 1
#define LSEEK_SET 0
#define LSEEK_END 2
#define SQLITE_TESTCTRL_NEVER_CORRUPT 20
#define __INT64_C(c) c ## L
#define PTHREAD_KEYS_MAX 1024
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define SA_SIGINFO 4
#define AC_F 0
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define AC_X 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define SQLITE_DBSTATUS_CACHE_SPILL 12
#define __INT_WCHAR_T_H 
#define WSTOPPED 2
#define _POSIX_THREAD_THREADS_MAX 64
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define _SYS_USER_H 1
#define _POSIX_MQ_OPEN_MAX 8
#define __USE_FILE_OFFSET64 1
#define O_ACCMODE_ 3
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define SQLITE_CREATE_TABLE 2
#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#define _POSIX_LINK_MAX 8
#define SI_TIMER_ -2
#define SQLITE_CREATE_INDEX 1
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define SQLITE_VTAB_INNOCUOUS 2
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define sint(size) glue3(int,size,_t)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define __INT_FAST64_WIDTH__ 64
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _BITS_SIGINFO_ARCH_H 1
#define _DEFAULT_SOURCE 1
#define SQLITE_DROP_VTABLE 30
#define SQLITE_TOOBIG 18
#define ZF_FLAG (1 << 6)
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define __attribute_used__ __attribute__ ((__used__))
#define SQLITE_DROP_TEMP_TABLE 13
#define SQLITE_FCNTL_PDB 30
#define __LOCK_ALIGNMENT 
#define __FLT32X_MANT_DIG__ 53
#define _XOPEN_REALTIME_THREADS 1
#define _POSIX_CHILD_MAX 25
#define _ASM_GENERIC_INT_LL64_H 
#define O_RDONLY_ 0
#define _SC_VERSION _SC_VERSION
#define FIXME(msg,...) printk("FIXME " msg "\n", ##__VA_ARGS__)
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define SQLITE_CONFIG_SERIALIZED 3
#define SQLITE_MISMATCH 20
#define __USER_LABEL_PREFIX__ 
#define SCHED_OTHER 0
#define SQLITE_CDECL 
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define SQLITE_MUTEX_STATIC_OPEN 4
#define atomic_thread_fence(MO) __atomic_thread_fence (MO)
#define _BITS_ENDIANNESS_H 1
#define __FLT32_MAX_10_EXP__ 38
#define __GLIBC__ 2
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define __END_DECLS 
#define _STATBUF_ST_NSEC 
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define SIG_IGN_ 1
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define WCONTINUED 8
#define setjmp(env) _setjmp (env)
#define TRACE_verbose TRACE__NOP
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define LOCK_DEBUG 0
#define __BITS_PER_LONG 64
#define __SLONG32_TYPE int
#define _BITS_UINTN_IDENTITY_H 1
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define DT_WHT DT_WHT
#define _SYS_SELECT_H 1
#define _NSIG (__SIGRTMAX + 1)
#define SQLITE_DROP_TABLE 11
#define SQLITE_DBSTATUS_CACHE_WRITE 9
#define _XOPEN_ENH_I18N 1
#define __SSIZE_T_TYPE __SWORD_TYPE
#define _SC_LONG_BIT _SC_LONG_BIT
#define __jmp_buf_tag_defined 1
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define TMP_MAX 238328
#define SQLITE_LIMIT_WORKER_THREADS 11
#define SQLITE_PRAGMA 19
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define si_status _sifields._sigchld.si_status
#define SQLITE_VERSION "3.37.2"
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define DEBUG_all 0
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define __GNU_LIBRARY__ 6
#define __DBL_DIG__ 15
#define uint(size) glue3(uint,size,_t)
#define __FLT32_DIG__ 6
#define _POSIX_NO_TRUNC 1
#define __f32x(x) x ##f32x
#define SIGALRM_ 14
#define SQLITE_CONSTRAINT_PINNED (SQLITE_CONSTRAINT |(11<<8))
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define SQLITE_OPEN_READONLY 0x00000001
#define S_IFMT __S_IFMT
#define __RLIM_T_MATCHES_RLIM64_T 1
#define SEGV_PKUERR SEGV_PKUERR
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __WCHAR_MAX __WCHAR_MAX__
#define SS_DISABLE SS_DISABLE
#define MEM_PGDIR_SIZE (1 << 10)
#define _IO_EOF_SEEN 0x0010
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define _POSIX_SPAWN 200809L
#define __SHRT_WIDTH__ 16
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define SQLITE_DONE 101
#define SIGPROF_ 27
#define _XBS5_LP64_OFF64 1
#define __f64x(x) x ##f64x
#define SQLITE_REPLACE 5
#define SQLITE_SERIALIZE_NOCOPY 0x001
#define _STDIO_H 1
#define __SVE_NUM_ZREGS 32
#define __FLT32_IS_IEC_60559__ 2
#define SQLITE_CONFIG_WIN32_HEAPSIZE 23
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define SQLITE_LOCK_EXCLUSIVE 4
#define __DEV_T_TYPE __UQUAD_TYPE
#define SQLITE_TRACE_STMT 0x01
#define SS_ONSTACK_ 1
#define SQLITE_IOCAP_ATOMIC8K 0x00000020
#define __GLIBC_USE_ISOC2X 0
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define SIGIO SIGPOLL
#define ___int_wchar_t_h 
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define FD_H 
#define ILL_ILLADR ILL_ILLADR
#define SA_NODEFER_ 0x40000000
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __nonnull(params) __attribute_nonnull__ (params)
#define SQLITE_LIMIT_ATTACHED 7
#define atomic_load_explicit(PTR,MO) __extension__ ({ __auto_type __atomic_load_ptr = (PTR); __typeof__ ((void)0, *__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (MO)); __atomic_load_tmp; })
#define SQLITE_SHM_LOCK 2
#define le32toh(x) __uint32_identity (x)
#define SQLITE_DETACH 25
#define si_call_addr _sifields._sigsys._call_addr
#define SQLITE_INTERRUPT 9
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define SQLITE_INDEX_CONSTRAINT_GLOB 66
#define __GLIBC_USE_IEC_60559_BFP_EXT 0
#define P_COW (1 << 4)
#define __FLT16_HAS_QUIET_NAN__ 1
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define SQLITE_FCNTL_COMMIT_PHASETWO 22
#define SQLITE_FULL 13
#define SQLITE_MUTEX_STATIC_APP1 8
#define SQLITE_LAST_ERRNO SQLITE_FCNTL_LAST_ERRNO
#define st_ctime st_ctim.tv_sec
#define SQLITE_CONFIG_LOG 16
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define _ASSERT_H_DECLS 
#define _WCHAR_T_ 
#define SQLITE_ATTACH 24
#define list_for_each(list,item) for (item = (list)->next; item != (list); item = item->next)
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define FTS5_TOKENIZE_AUX 0x0008
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define __FP_FAST_FMA 1
#define SQLITE_FCNTL_PERSIST_WAL 10
#define SQLITE_IOERR_FSTAT (SQLITE_IOERR | (7<<8))
#define RLIMIT_RTTIME_ 15
#define _SC_PII_OSI _SC_PII_OSI
#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2
#define _VA_LIST_DEFINED 
#define __FLT32X_HAS_INFINITY__ 1
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define SQLITE_DBCONFIG_ENABLE_FTS3_TOKENIZER 1004
#define __INT32_MAX__ 0x7fffffff
#define SQLITE_SCANSTAT_EST 2
#define SQLITE_DBCONFIG_ENABLE_VIEW 1015
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __SIZEOF_PTHREAD_COND_T 48
#define __FLT16_DIG__ 3
#define O_NOCTTY_ (1 << 8)
#define _POSIX_V7_LPBIG_OFFBIG -1
#define STDOUT_FILENO 1
#define atomic_signal_fence(MO) __atomic_signal_fence (MO)
#define SQLITE_LOCKED_SHAREDCACHE (SQLITE_LOCKED | (1<<8))
#define SQLITE_READONLY 8
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __S_IFCHR 0020000
#define SQLITE_IOERR_SEEK (SQLITE_IOERR | (22<<8))
#define __STDC_IEC_559__ 1
#define FIOCLEX_ 0x5451
#define __UINT16_C(c) c
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define SQLITE_TRACE_PROFILE 0x02
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define SS_DISABLE_ 2
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 0
#define __STDC_IEC_559_COMPLEX__ 1
#define FIONCLEX_ 0x5450
#define BYTES_ROUND_UP(bytes) (PAGE_ROUND_UP(bytes) << PAGE_BITS)
#define SI_USER SI_USER
#define SQLITE_WARNING_AUTOINDEX (SQLITE_WARNING | (1<<8))
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define FPE_INTDIV FPE_INTDIV
#define __gnu_linux__ 1
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define __USE_XOPEN2K 1
#define __INT16_MAX__ 0x7fff
#define SEEK_SET 0
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define _ENDIAN_H 1
#define __FLT128_IS_IEC_60559__ 2
#define _BITS_SIGNUM_ARCH_H 1
#define SIGPWR_ 30
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __SI_MAX_SIZE 128
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define atomic_fetch_sub_explicit(PTR,VAL,MO) __atomic_fetch_sub ((PTR), (VAL), (MO))
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define atomic_store_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_store_ptr = (PTR); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (VAL); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (MO)); })
#define __S_IFIFO 0010000
#define __bool_true_false_are_defined 1
#define SQLITE_OPEN_DELETEONCLOSE 0x00000008
#define SQLITE_IOCAP_ATOMIC1K 0x00000004
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define _XBS5_ILP32_OFF32 -1
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define atomic_flag_clear(PTR) __atomic_clear ((PTR), __ATOMIC_SEQ_CST)
#define DELAYTIMER_MAX 2147483647
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define FTS5_TOKENIZE_PREFIX 0x0002
#define _BSD_SIZE_T_ 
#define S_ISDIR(mode) __S_ISTYPE((mode), __S_IFDIR)
#define __intptr_t_defined 
#define __FLT16_MIN_EXP__ (-13)
#define SQLITE_CONSTRAINT_TRIGGER (SQLITE_CONSTRAINT | (7<<8))
#define _POSIX_MAPPED_FILES 200809L
#define __FLT64_MANT_DIG__ 53
#define __attribute_const__ __attribute__ ((__const__))
#define SQLITE_INDEX_CONSTRAINT_ISNOT 69
#define SQLITE_SYNC_FULL 0x00003
#define __sig_atomic_t_defined 1
#define L_XTND SEEK_END
#define SQLITE_FCNTL_SIZE_LIMIT 36
#define SQLITE_READONLY_DBMOVED (SQLITE_READONLY | (4<<8))
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define make_attr(_type,thing) ((struct attr) {.type = attr_ ##_type, ._type = thing})
#define SQLITE_INDEX_CONSTRAINT_GT 4
#define SQLITE_LIMIT_SQL_LENGTH 1
#define htobe32(x) __bswap_32 (x)
#define __FLT64X_MANT_DIG__ 113
#define SQLITE_REINDEX 27
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define L_tmpnam 20
#define _DIRENT_HAVE_D_RECLEN 
#define AC_R 4
#define SQLITE_IOERR_MMAP (SQLITE_IOERR | (24<<8))
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define __f128(x) x ##f128
#define _T_PTRDIFF 
#define __GNUC__ 11
#define SQLITE_MUTEX_STATIC_PRNG 5
#define SQLITE_INDEX_CONSTRAINT_GE 32
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define SA_ONSTACK 0x08000000
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define UINT_LEAST8_MAX (255)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define ILL_BADSTK ILL_BADSTK
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define PF_FLAG (1 << 2)
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define SQLITE_FCNTL_CHUNK_SIZE 6
#define SQLITE_IOCAP_ATOMIC2K 0x00000008
#define __CFLOAT32X _Complex _Float32x
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define SQLITE_TESTCTRL_PENDING_BYTE 11
#define __cleanup_fct_attribute 
#define _LFS_ASYNCHRONOUS_IO 1
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define __daddr_t_defined 
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define SQLITE_IOERR_AUTH (SQLITE_IOERR | (28<<8))
#define SQLITE_READONLY_RECOVERY (SQLITE_READONLY | (1<<8))
#define RLIMIT_AS_ 9
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define SQLITE_LOCK_SHARED 1
#define DEBUG_verbose DEBUG_all
#define SQLITE_IOCAP_ATOMIC4K 0x00000010
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define SSIZE_MAX LONG_MAX
#define SQLITE_CORRUPT_INDEX (SQLITE_CORRUPT | (3<<8))
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 0x00001000
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __LDBL_MIN_EXP__ (-16381)
#define SIGXCPU_ 24
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define SQLITE_SYNC_NORMAL 0x00002
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define __STRING(x) #x
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define SQLITE_STATUS_PARSER_STACK 6
#define STDERR_FILENO 2
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define __ONCE_ALIGNMENT 
#define DEV_BLOCK 0
#define SQLITE_CONFIG_HEAP 8
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define __SI_ALIGNMENT 
#define __FLT64_MAX_10_EXP__ 308
#define __GLIBC_USE_LIB_EXT2 0
#define __USE_ISOC99 1
#define SA_NODEFER 0x40000000
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define __sigevent_t_defined 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define zero_init(type) ((type[1]){}[0])
#define SQLITE_DBCONFIG_RESET_DATABASE 1009
#define __FLT16_MAX_10_EXP__ 4
#define PARTLY_WITHIN 1
#define __DBL_IS_IEC_60559__ 2
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define ____sigval_t_defined 
#define _POSIX_CHOWN_RESTRICTED 0
#define _GCC_WCHAR_T 
#define FPE_FLTDIV FPE_FLTDIV
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define SQLITE_INDEX_CONSTRAINT_NE 68
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define be64toh(x) __bswap_64 (x)
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define SI_QUEUE SI_QUEUE
#define _POSIX_SIGQUEUE_MAX 32
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define SQLITE_CREATE_VIEW 8
#define __DBL_HAS_INFINITY__ 1
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define TRAP_TRACE_ 2
#define ELF_PRARGSZ (80)
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define ITIMER_PROF ITIMER_PROF
#define SQLITE_MUTEX_STATIC_VFS3 13
#define LIST_H 
#define SQLITE_DROP_INDEX 10
#define atomic_exchange(PTR,VAL) atomic_exchange_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define SQLITE_SHM_NLOCK 8
#define atomic_flag_clear_explicit(PTR,MO) __atomic_clear ((PTR), (MO))
#define SIGNAL_H 
#define UINT8_MAX (255)
#define stdin stdin
#define SIGQUIT 3
#define si_syscall _sifields._sigsys._syscall
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define SQLITE_READONLY_CANTLOCK (SQLITE_READONLY | (2<<8))
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define SQLITE_STMTSTATUS_AUTOINDEX 3
#define _SC_CLK_TCK _SC_CLK_TCK
#define __lldiv_t_defined 1
#define SQLITE_SHM_UNLOCK 1
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define SCHED_FIFO 1
#define __DADDR_T_TYPE __S32_TYPE
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define __INTPTR_WIDTH__ 64
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define fallthrough __attribute__((fallthrough))
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define SIGCONT_ 18
#define be32toh(x) __bswap_32 (x)
#define __OFF64_T_TYPE __SQUAD_TYPE
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define SQLITE_OPEN_SUBJOURNAL 0x00002000
#define __HAVE_FLOAT128X 0
#define FLOAT80_H 
#define _SIZE_T_DEFINED 
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define TRACE_debug TRACE__NOP
#define SQLITE_IOERR_GETTEMPPATH (SQLITE_IOERR | (25<<8))
#define SQLITE_CONFIG_MEMSTATUS 9
#define _WCHAR_T_DEFINED_ 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define SQLITE_READONLY_DIRECTORY (SQLITE_READONLY | (6<<8))
#define atomic_fetch_xor_explicit(PTR,VAL,MO) __atomic_fetch_xor ((PTR), (VAL), (MO))
#define _POSIX_REGEXP 1
#define __USE_POSIX199506 1
#define EMU_CPU_MEM_H 
#define __LDBL_HAS_DENORM__ 1
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define MEM_WRITE_PTRACE 2
#define SQLITE_CONFIG_STMTJRNL_SPILL 26
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define __CFLOAT32 _Complex _Float32
#define __stub_setlogin 
#define has_feature(x) 0
#define must_check __attribute__((warn_unused_result))
#define __FLT128_HAS_INFINITY__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define SQLITE_TESTCTRL_FIRST 5
#define SIGABRT 6
#define SS_ONSTACK SS_ONSTACK
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define SQLITE_ACCESS_READWRITE 1
#define _POSIX_MEMORY_PROTECTION 200809L
#define O_APPEND_ (1 << 10)
#define S_IFCHR __S_IFCHR
#define true 1
#define SA_RESETHAND 0x80000000
#define __dev_t_defined 
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define SEGV_MAPERR_ 1
#define __S32_TYPE int
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define SQLITE_BLOB 4
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define SQLITE_READONLY_CANTINIT (SQLITE_READONLY | (5<<8))
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define __DBL_MAX_EXP__ 1024
#define RLIMIT_FSIZE_ 1
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define __WCHAR_WIDTH__ 32
#define SQLITE_ERROR_RETRY (SQLITE_ERROR | (2<<8))
#define __BIT_TYPES_DEFINED__ 1
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SQLITE_NOTICE_RECOVER_WAL (SQLITE_NOTICE | (1<<8))
#define _BITS_WCHAR_H 1
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __FLT16_DECIMAL_DIG__ 5
#define atomic_fetch_or(PTR,VAL) __atomic_fetch_or ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define SQLITE_CONFIG_MEMDB_MAXSIZE 29
#define SQLITE_DROP_TEMP_INDEX 12
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define S_BLKSIZE 512
#define F_ULOCK 0
#define _POSIX_LOGIN_NAME_MAX 9
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define SQLITE_FCNTL_WIN32_AV_RETRY 9
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define SQLITE_CONSTRAINT_FUNCTION (SQLITE_CONSTRAINT | (4<<8))
#define __FLT_IS_IEC_60559__ 2
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define SQLITE_FCNTL_PRAGMA 14
#define FS_FIX_PATH_H 
#define SEGV_MAPERR SEGV_MAPERR
#define _POSIX_RE_DUP_MAX 255
#define SQLITE_CANTOPEN_NOTEMPDIR (SQLITE_CANTOPEN | (1<<8))
#define SIGKILL_ 9
#define RESOURCE_H 
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define SQLITE_SYNC_DATAONLY 0x00010
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __USECONDS_T_TYPE __U32_TYPE
#define RLIMIT_NOFILE_ 7
#define SQLITE_CORRUPT 11
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __SVE_NUM_PREGS 16
#define __glibc_objsize(__o) __bos (__o)
#define SQLITE_FCNTL_SYNC_OMITTED 8
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define P_RWX (P_READ | P_WRITE | P_EXEC)
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define SIGURG_ 23
#define FIONBIO_ 0x5421
#define FPE_FLTOVF FPE_FLTOVF
#define _LINUX_STDDEF_H 
#define __FLT32_HAS_QUIET_NAN__ 1
#define _T_WCHAR 
#define MAX_PID (1 << 15)
#define LEAK_DEBUG 0
#define SIGBUS_ 7
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define SQLITE_CONSTRAINT_CHECK (SQLITE_CONSTRAINT | (1<<8))
#define __SIZEOF_SIZE_T__ 8
#define _glue(a,b) a ##b
#define _WCHAR_T 
#define __SIG_ATOMIC_WIDTH__ 32
#define st_atime st_atim.tv_sec
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define SQLITE_MUTEX_STATIC_MAIN 2
#define debugger raise(SIGTRAP)
#define SQLITE_UTF16LE 2
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define SIG_BLOCK 0
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define SQLITE_IOERR_SHMSIZE (SQLITE_IOERR | (19<<8))
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define P_SHARED (1 << 7)
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define SQLITE_DBSTATUS_MAX 12
#define DTTOIF(dirtype) ((dirtype) << 12)
#define SIZE_MAX (18446744073709551615UL)
#define BUS_ADRALN BUS_ADRALN
#define __SIZEOF_WINT_T__ 4
#define __HAVE_FLOAT16 0
#define _SC_BASE _SC_BASE
#define list_first_entry(list,type,member) list_entry((list)->next, type, member)
#define SQLITE_OPEN_AUTOPROXY 0x00000020
#define SQLITE_TEXT 3
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define __SI_CLOCK_T __clock_t
#define SQLITE_CONSTRAINT 19
#define __U16_TYPE unsigned short int
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define CLD_EXITED CLD_EXITED
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX (4294967295u)
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define S_IWUSR __S_IWRITE
#define _POSIX_NAME_MAX 14
#define UINTPTR_MAX (18446744073709551615UL)
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define SQLITE_FCNTL_FILE_POINTER 7
#define SIGUSR2_ 12
#define _PTRDIFF_T 
#define SQLITE_CONFIG_SMALL_MALLOC 27
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define SQLITE_TESTCTRL_LAST 32
#define __ARM_FP16_FORMAT_IEEE 1
#define TRACE_memory TRACE__NOP
#define __WTERMSIG(status) ((status) & 0x7f)
#define SQLITE_OPEN_TEMP_DB 0x00000200
#define SQLITE_FCNTL_SIZE_HINT 5
#define _SC_PAGESIZE _SC_PAGESIZE
#define SQLITE_ROW 100
#define SQLITE_SOURCE_ID "2022-01-06 13:25:41 872ba256cbf61d9290b571c0e6d82a20c224ca3ad82971edc46b29818d5dalt1"
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define RLIMIT_SIGPENDING_ 11
#define atomic_exchange_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_val = (VAL); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_tmp; __atomic_exchange (__atomic_exchange_ptr, &__atomic_exchange_val, &__atomic_exchange_tmp, (MO)); __atomic_exchange_tmp; })
#define __FLT_MIN_EXP__ (-125)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define DF_FLAG (1 << 10)
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define WEXITED 4
#define SQLITE_DBCONFIG_DQS_DML 1013
#define ATOMIC_VAR_INIT(VALUE) (VALUE)
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define _STRUCT_TIMESPEC 1
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define __ASM_SVE_CONTEXT_H 
#define UINT32_MAX (4294967295U)
#define AC_W 2
#define __uid_t_defined 
#define SQLITE_INDEX_CONSTRAINT_LIKE 65
#define WNOHANG 1
#define alloca(size) __builtin_alloca (size)
#define _XOPEN_SHM 1
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __flexarr []
#define SQLITE_OPEN_MEMORY 0x00000080
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define _SC_LINE_MAX _SC_LINE_MAX
#define SQLITE_FUNCTION 31
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define SIGCHLD 17
#define atomic_fetch_add(PTR,VAL) __atomic_fetch_add ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __THROWNL __attribute__ ((__nothrow__))
#define SQLITE_STATUS_SCRATCH_USED 3
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __PTRDIFF_T 
#define _DIRENT_HAVE_D_OFF 
#define atomic_fetch_sub(PTR,VAL) __atomic_fetch_sub ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_WORD_BIT _SC_WORD_BIT
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define __HAVE_GENERIC_SELECTION 1
#define __FLT32X_MIN_EXP__ (-1021)
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define _POSIX_ADVISORY_INFO 200809L
#define _POSIX_CLOCKRES_MIN 20000000
#define __INT_FAST64_TYPE__ long int
#define SQLITE_UPDATE 23
#define SQLITE_MUTEX_STATIC_APP2 9
#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#define __ARM_FP16_ARGS 1
#define F_LOCK 1
#define _POSIX_SEMAPHORES 200809L
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define SQLITE_MUTEX_STATIC_APP3 10
#define L_ctermid 9
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define _ANSI_STDDEF_H 
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define WINT_MIN (0u)
#define _BITS_STDIO_LIM_H 1
#define atomic_fetch_and(PTR,VAL) __atomic_fetch_and ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define MAXNAMLEN NAME_MAX
#define SQLITE_CONFIG_SORTERREF_SIZE 28
#define htole32(x) __uint32_identity (x)
#define __ARM_FEATURE_CLZ 1
#define SQLITE_CANTOPEN_FULLPATH (SQLITE_CANTOPEN | (3<<8))
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define __unix__ 1
#define _XOPEN_XPG2 1
#define _STDATOMIC_H 
#define _XOPEN_XPG4 1
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define SQLITE_IOERR_SHMLOCK (SQLITE_IOERR | (20<<8))
#define __WCOREFLAG 0x80
#define _XOPEN_LEGACY 1
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define SQLITE_LIMIT_VARIABLE_NUMBER 9
#define __LP64__ 1
#define UTIME_NOW ((1l << 30) - 1l)
#define SQLITE_IOERR_CONVPATH (SQLITE_IOERR | (26<<8))
#define _SC_ARG_MAX _SC_ARG_MAX
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define __DBL_HAS_QUIET_NAN__ 1
#define __HAVE_FLOAT32X 1
#define SIGUSR1 10
#define __FLT_EVAL_METHOD_C99__ 0
#define _POSIX_IPV6 200809L
#define _POSIX_SYMLOOP_MAX 8
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __MODE_T_TYPE __U32_TYPE
#define CLOCK_REALTIME_ALARM 8
#define __S_IFREG 0100000
#define LOG_HANDLER_DPRINTF 1
#define SIGTRAP 5
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _BITS_STRUCT_STAT_H 1
#define SQLITE_DBCONFIG_LEGACY_ALTER_TABLE 1012
#define __FLT64_MIN_EXP__ (-1021)
#define SQLITE_FCNTL_WAL_BLOCK 24
#define RLIMIT_CPU_ 0
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define SQLITE_STMTSTATUS_REPREPARE 5
#define _CS_V6_ENV _CS_V6_ENV
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define CLOCK_PROCESS_CPUTIME_ID_ 2
#define __LDBL_DECIMAL_DIG__ 36
#define INT_LEAST8_MAX (127)
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __aarch64__ 1
#define SQLITE_LOCKED_VTAB (SQLITE_LOCKED | (2<<8))
#define _BITS_SETJMP_H 1
#define __CFLOAT64X _Complex _Float64x
#define __FLT64_MIN_10_EXP__ (-307)
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define INT8_C(c) c
#define __FDS_BITS(set) ((set)->__fds_bits)
#define SQLITE_IGNORE 2
#define SIGTTIN_ 21
#define DEFAULT_CHANNEL verbose
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1
#define WTERMSIG(status) __WTERMSIG (status)
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define si_pkey _sifields._sigfault._bounds._pkey
#define __FLT64X_DECIMAL_DIG__ 36
#define SQLITE_IOERR_COMMIT_ATOMIC (SQLITE_IOERR | (30<<8))
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define SQLITE_NOTADB 26
#define __INTMAX_WIDTH__ 64
#define INT_LEAST32_MAX (2147483647)
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define FPE_FLTSUB FPE_FLTSUB
#define ITIMER_REAL_ 0
#define LOGIN_NAME_MAX 256
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define SQLITE_DBCONFIG_MAINDBNAME 1000
#define __LDBL_HAS_INFINITY__ 1
#define SQLITE_TESTCTRL_PARSER_COVERAGE 26
#define list_next_entry(item,member) list_entry((item)->member.next, typeof(*(item)), member)
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define SQLITE_INTERNAL 2
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define si_addr _sifields._sigfault.si_addr
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define si_uid _sifields._kill.si_uid
#define SQLITE_DBCONFIG_DQS_DDL 1014
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define __FLT_DIG__ 6
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define _SIGNAL_H 
#define __NO_INLINE__ 1
#define SQLITE_DBSTATUS_SCHEMA_USED 2
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13
#define _POSIX_V7_ILP32_OFF32 -1
#define SQLITE_IOERR_LOCK (SQLITE_IOERR | (15<<8))
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define CLOCK_BOOTTIME_ALARM 9
#define __DEC_EVAL_METHOD__ 2
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define FIONREAD_ 0x541b
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define SQLITE_LIMIT_TRIGGER_DEPTH 10
#define printk ish_printk
#define S_ISLNK(mode) __S_ISTYPE((mode), __S_IFLNK)
#define SIGEV_THREAD SIGEV_THREAD
#define __FLT_MANT_DIG__ 24
#define FS_SOCKRESTART_H 
#define INT_LEAST8_MIN (-128)
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define __FLT16_MIN_10_EXP__ (-4)
#define __VERSION__ "11.3.0"
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define S_ISFIFO(mode) __S_ISTYPE((mode), __S_IFIFO)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __UINT64_C(c) c ## UL
#define _SYS_TYPES_H 1
#define _PTRDIFF_T_ 
#define SQLITE_CHECKPOINT_FULL 1
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_CDEFS_H 1
#define write_wrlock(lock) __write_wrlock(lock, __FILE__, __LINE__)
#define SQLITE_OPEN_MAIN_JOURNAL 0x00000800
#define TASK_H 
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define SQLITE_APICALL 
#define _POSIX_JOB_CONTROL 1
#define SQLITE_FCNTL_COMMIT_ATOMIC_WRITE 32
#define SIG_BLOCK_ 0
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __GXX_ABI_VERSION 1016
#define SIGILL_ 4
#define SQLITE_OPEN_EXRESCODE 0x02000000
#define __USE_XOPEN2K8 1
#define SIGINT_ 2
#define htobe64(x) __bswap_64 (x)
#define SIGSYS_ 31
#define __f64(x) x ##f64
#define DT_REG DT_REG
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define SQLITE_LOCK_NONE 0
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define SQLITE_CANTOPEN_CONVPATH (SQLITE_CANTOPEN | (4<<8))
#define __bitwise __bitwise__
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define __WINT_MAX__ 0xffffffffU
#define O_EXCL_ (1 << 7)
#define st_mtime st_mtim.tv_sec
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define __INT_LEAST32_MAX__ 0x7fffffff
#define AIO_PRIO_DELTA_MAX 20
#define SIGEV_NONE SIGEV_NONE
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define si_stime _sifields._sigchld.si_stime
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __ASM_GENERIC_POSIX_TYPES_H 
#define _T_PTRDIFF_ 
#define SQLITE_SCANSTAT_EXPLAIN 4
#define SQLITE_SCANSTAT_NLOOP 0
#define SIGVTALRM 26
#define O_DIRECTORY_ (1 << 16)
#define SQLITE_OK_LOAD_PERMANENTLY (SQLITE_OK | (1<<8))
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define __FLT128_MAX_EXP__ 16384
#define __INO_T_TYPE __ULONGWORD_TYPE
#define SQLITE_UTF16 4
#define SQLITE_IOERR_UNLOCK (SQLITE_IOERR | (8<<8))
#define SQLITE_ERROR_SNAPSHOT (SQLITE_ERROR | (3<<8))
#define be16toh(x) __bswap_16 (x)
#define DEV_CHAR 1
#define SIGXFSZ_ 25
#define SQLITE_STMTSTATUS_MEMUSED 99
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define SIGPOLL 29
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define RLIMIT_STACK_ 3
#define atomic_store(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define SI_ASYNCIO SI_ASYNCIO
#define SQLITE_DBCONFIG_TRUSTED_SCHEMA 1017
#define PF (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf)
#define __struct_tm_defined 1
#define _SC_TRACE _SC_TRACE
#define SIGSTOP_ 19
#define __ssize_t_defined 
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define _POSIX_STREAM_MAX 8
#define __FLT32_MANT_DIG__ 24
#define __sigval_t_defined 
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define SVE_VQ_MAX __SVE_VQ_MAX
#define _STDDEF_H 
#define __AARCH64EL__ 1
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define SQLITE_DROP_TRIGGER 16
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _DIRENT_MATCHES_DIRENT64 1
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#define SQLITE_DBSTATUS_CACHE_HIT 7
#define SQLITE_LIMIT_FUNCTION_ARG 6
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define _SC_FSYNC _SC_FSYNC
#define __S_IFDIR 0040000
#define _BITS_POSIX1_LIM_H 1
#define __SIZE_T__ 
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define __FLT16_MAX_EXP__ 16
#define __stub_gtty 
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define F80_INF ((float80) {.signif = 0x8000000000000000, .exp = 0x7fff, .sign = 0})
#define DEBUG_instr DEBUG_all
#define si_value _sifields._rt.si_sigval
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define MEM_READ 0
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define SQLITE_TXN_WRITE 2
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define SQLITE_TXN_READ 1
#define _SC_2_C_BIND _SC_2_C_BIND
#define _SC_MEMLOCK _SC_MEMLOCK
#define SQLITE_SYSAPI 
#define si_utime _sifields._sigchld.si_utime
#define SQLITE_DELETE 9
#define SQLITE_IOCAP_SEQUENTIAL 0x00000400
#define SQLITE_FCNTL_TRACE 19
#define __BIGGEST_ALIGNMENT__ 16
#define _SYS_SIZE_T_H 
#define SQLITE_FCNTL_ZIPVFS 25
#define SQLITE_OPEN_MAIN_DB 0x00000100
#define INT32_MAX (2147483647)
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __INT32_C(c) c
#define __S_IEXEC 0100
#define SQLITE_VERSION_NUMBER 3037002
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define SQLITE_COPY 0
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __wur 
#define SIGHUP 1
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define RUSAGE_SELF_ 0
#define SI_KERNEL_ 128
#define SQLITE_PROTOCOL 15
#define _STDNORETURN_H 
#define SQLITE_CONFIG_GETPCACHE 15
#define __FLT128_HAS_DENORM__ 1
#define CLOCK_REALTIME 0
#define SQLITE_IOCAP_IMMUTABLE 0x00002000
#define _BITS_TIME_H 1
#define SIG_UNBLOCK 1
#define SQLITE_CONSTRAINT_FOREIGNKEY (SQLITE_CONSTRAINT | (3<<8))
#define _POSIX_RTSIG_MAX 8
#define SQLITE_INTEGER 1
#define FPE_INTOVF FPE_INTOVF
#define SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE 1006
#define __SCHAR_WIDTH__ 8
#define __ORDER_PDP_ENDIAN__ 3412
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
#define INT_FAST8_MIN (-128)
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
#define SQLITE_CONFIG_PAGECACHE 7
#define __ARM_64BIT_STATE 1
#define SQLITE_IOERR_ACCESS (SQLITE_IOERR | (13<<8))
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define sa_handler __sigaction_handler.sa_handler
#define DT_CHR DT_CHR
#define SIGSEGV 11
#define SVE_VQ_MIN __SVE_VQ_MIN
#define FTS5_TOKENIZE_DOCUMENT 0x0004
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define BYTE_ORDER __BYTE_ORDER
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define __INT_FAST32_TYPE__ long int
#define __have_pthread_attr_t 1
#define SQLITE_INDEX_CONSTRAINT_IS 72
#define SQLITE_IOCAP_BATCH_ATOMIC 0x00004000
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define _POSIX_CPUTIME 0
#define __itimerspec_defined 1
#define bool _Bool
#define _SC_FD_MGMT _SC_FD_MGMT
#define _BITS_TYPESIZES_H 1
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define ILL_COPROC ILL_COPROC
#define S_IWGRP (S_IWUSR >> 3)
#define CF (cpu->cf)
#define SQLITE_CREATE_TRIGGER 7
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(status) __WSTOPSIG (status)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define _PC_PATH_MAX _PC_PATH_MAX
#define SQLITE_BUSY_TIMEOUT (SQLITE_BUSY | (3<<8))
#define SI_TKILL_ -6
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define RAND_MAX 2147483647
#define _POSIX_MAX_INPUT 255
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define _PC_LINK_MAX _PC_LINK_MAX
#define _SIZET_ 
#define superuser() (current != NULL && current->euid == 0)
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define FOPEN_MAX 16
#define __SIZE_TYPE__ long unsigned int
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define typecheck(type,x) ({type _x = x; x;})
#define SQLITE_TRANSIENT ((sqlite3_destructor_type)-1)
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define UTIL_TIMER_H 
#define XATTR_LIST_MAX 65536
#define FPE_CONDTRAP FPE_CONDTRAP
#define SQLITE_ANY 5
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define _SQLITE3RTREE_H_ 
#define SIG_ERR_ -1
#define SQLITE_CANTOPEN_ISDIR (SQLITE_CANTOPEN | (2<<8))
#define __FLT64X_DIG__ 33
#define list_for_each_safe(list,item,tmp) for (item = (list)->next, tmp = item->next; item != (list); item = tmp, tmp = item->next)
#define __ARM_FEATURE_FMA 1
#define MEMORY_H 
#define __INT8_TYPE__ signed char
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define SQLITE_SCANSTAT_SELECTID 5
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define SQLITE_OPEN_TEMP_JOURNAL 0x00001000
#define trylock(lock) trylock(lock, __FILE__, __LINE__)
#define SQLITE_DROP_TEMP_VIEW 15
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define __ELF__ 1
#define SQLITE_EXPERIMENTAL 
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define SIGTRAP_ 5
#define SQLITE_TRACE_CLOSE 0x08
#define CLOCK_THREAD_CPUTIME_ID 3
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define _POSIX_SPORADIC_SERVER -1
#define SQLITE_IOERR_NOMEM (SQLITE_IOERR | (12<<8))
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define SQLITE_CONFIG_GETMUTEX 11
#define bitfield unsigned int
#define SEGV_ACCADI SEGV_ACCADI
#define F_TLOCK 2
#define SQLITE_LIMIT_EXPR_DEPTH 3
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define __S_IWRITE 0200
#define SQLITE_DBCONFIG_LOOKASIDE 1001
#define SQLITE_TESTCTRL_INTERNAL_FUNCTIONS 17
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define __ARM_ARCH_PROFILE 65
#define __sched_priority sched_priority
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define SQLITE_OPEN_NOFOLLOW 0x01000000
#define minor(dev) gnu_dev_minor (dev)
#define _POSIX_C_SOURCE 200809L
#define SQLITE_TESTCTRL_PRNG_SEED 28
#define __ARM_PCS_AAPCS64 1
#define PTHREAD_STACK_MIN 131072
#define lock(lock) __lock(lock, __FILE__, __LINE__)
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _ALLOCA_H 1
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define SQLITE_OPEN_CREATE 0x00000004
#define _BITS_SIGTHREAD_H 1
#define SEGV_ADIDERR SEGV_ADIDERR
#define _DIRENT_HAVE_D_TYPE 
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define SQLITE_DETERMINISTIC 0x000000800
#define _SETJMP_H 1
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define BAD_PAGE 0x10000
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define CLOCK_MONOTONIC_RAW 4
#define SQLITE_DBSTATUS_DEFERRED_FKS 10
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define F_TEST 3
#define str(x) _str(x)
#define AF_OPS (1 << 3)
#define SIGCONT 18
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define __INT_LEAST64_WIDTH__ 64
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define _BITS_SIGSTACK_H 1
#define _POSIX_TIMEOUTS 200809L
#define FS_FAKEFS_API_H 
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define _LFS64_LARGEFILE 1
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_IEC_60559_BFP__ 201404L
#define SQLITE_CONSTRAINT_NOTNULL (SQLITE_CONSTRAINT | (5<<8))
#define S_IRUSR __S_IREAD
#define SIGPIPE 13
#define SQLITE_OPEN_NOMUTEX 0x00008000
#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3
#define SQLITE_ABORT_ROLLBACK (SQLITE_ABORT | (2<<8))
#define SIG_DFL ((__sighandler_t) 0)
#define _POSIX_HOST_NAME_MAX 255
#define __SIZEOF_PTRDIFF_T__ 8
#define _LFS64_ASYNCHRONOUS_IO 1
#define SQLITE_DESERIALIZE_READONLY 4
#define SQLITE_INDEX_CONSTRAINT_ISNULL 71
#define SQLITE_FORMAT 24
#define _CS_V7_ENV _CS_V7_ENV
#define _PC_VDISABLE _PC_VDISABLE
#define _LFS64_STDIO 1
#define SQLITE_CANTOPEN_DIRTYWAL (SQLITE_CANTOPEN | (5<<8))
#define __ATOMIC_RELAXED 0
#define SQLITE_FCNTL_CKPT_DONE 37
#define SIGFPE 8
#define __stub_sigreturn 
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define MEM_WRITE 1
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define SQLITE_MUTEX_STATIC_VFS2 12
#define CLOCK_TAI 11
#define ESR_MAGIC 0x45535201
#define SQLITE_CORRUPT_VTAB (SQLITE_CORRUPT | (1<<8))
#define P_GROWSDOWN (1 << 3)
#define SQLITE_CREATE_TEMP_TRIGGER 5
#define __restrict_arr __restrict
#define INTPTR_MIN (-9223372036854775807L-1)
#define SQLITE_DBCONFIG_MAX 1017
#define SQLITE_ERROR_MISSING_COLLSEQ (SQLITE_ERROR | (1<<8))
#define __f32(x) x ##f32
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define _POSIX_SHELL 1
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define OF (cpu->of)
#define __UWORD_TYPE unsigned long int
#define __LDBL_DIG__ 33
#define SQLITE_FCNTL_WIN32_GET_HANDLE 29
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define LIST_INITIALIZER(x) {.prev = &x, .next = &x}
#define W_OK 2
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __FLT64_IS_IEC_60559__ 2
#define _SIZE_T_ 
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __FLT16_IS_IEC_60559__ 2
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define DT_FIFO DT_FIFO
#define UINT_FAST32_MAX (18446744073709551615UL)
#define _WCHAR_T_H 
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define SQLITE_TESTCTRL_OPTIMIZATIONS 15
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define SQLITE_TESTCTRL_TRACEFLAGS 31
#define SQLITE_SET_LOCKPROXYFILE SQLITE_FCNTL_SET_LOCKPROXYFILE
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define SQLITE_TESTCTRL_PRNG_RESTORE 6
#define __WCLONE 0x80000000
#define SQLITE_IOERR_SHMOPEN (SQLITE_IOERR | (18<<8))
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define __stub___compat_create_module 
#define SA_NOMASK SA_NODEFER
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define SQLITE_CONFIG_SCRATCH 6
#define SQLITE_PREPARE_PERSISTENT 0x01
#define major(dev) gnu_dev_major (dev)
#define _POSIX_MONOTONIC_CLOCK 0
#define MAX_PATH 4096
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define S_ISVTX __S_ISVTX
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define POLL_OUT POLL_OUT
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __USE_ISOC95 1
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define PROC_CHILDREN(...) { .count = sizeof((struct proc_dir_entry[])__VA_ARGS__) / sizeof(struct proc_dir_entry), .entries = __VA_ARGS__ }
#define SQLITE_CALLBACK 
#define NULL ((void *)0)
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define atomic_compare_exchange_strong_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 0, (SUC), (FAIL)); })
#define __U64_TYPE unsigned long int
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define __FLT_HAS_QUIET_NAN__ 1
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003
#define SQLITE_SCHEMA 17
#define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)
#define _POSIX_TRACE_INHERIT -1
#define __FLT_MAX_10_EXP__ 38
#define _____fpos64_t_defined 1
#define _BITS_SS_FLAGS_H 1
#define SQLITE_IOERR_ROLLBACK_ATOMIC (SQLITE_IOERR | (31<<8))
#define SA_NOCLDWAIT 2
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define S_IXGRP (S_IXUSR >> 3)
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define UINT_LEAST16_MAX (65535)
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO _PC_SYNC_IO
#define TTY_NAME_MAX 32
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define __glibc_objsize0(__o) __bos0 (__o)
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define _POSIX_TIMERS 200809L
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define L_INCR SEEK_CUR
#define __unix 1
#define S_IFSOCK __S_IFSOCK
#define _BSD_PTRDIFF_T_ 
#define _BITS_PTHREADTYPES_COMMON_H 1
#define HOST_NAME_MAX 64
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define SQLITE_NOLFS 22
#define __DBL_HAS_DENORM__ 1
#define SQLITE_CONSTRAINT_PRIMARYKEY (SQLITE_CONSTRAINT | (6<<8))
#define __UINT_FAST16_TYPE__ long unsigned int
#define SQLITE_IOERR_CLOSE (SQLITE_IOERR | (16<<8))
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define SQLITE_SHM_EXCLUSIVE 8
#define _POSIX_RAW_SOCKETS 200809L
#define __FLT32X_HAS_QUIET_NAN__ 1
#define SQLITE_DBSTATUS_LOOKASIDE_USED 0
#define __CHAR16_TYPE__ short unsigned int
#define SQLITE_TESTCTRL_ONCE_RESET_THRESHOLD 19
#define __FLT64X_MAX_EXP__ 16384
#define UTIL_SYNC_H 
#define SQLITE_MUTEX_STATIC_LRU 6
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define __no_instrument_msan 
#define _STRINGS_H 1
#define SI_MESGQ SI_MESGQ
#define SIGFPE_ 8
#define __SIZE_WIDTH__ 64
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define O_CLOEXEC_ (1 << 19)
#define __BLKSIZE_T_TYPE __S32_TYPE
#define SQLITE_IOERR_BEGIN_ATOMIC (SQLITE_IOERR | (29<<8))
#define _WCHAR_T_DECLARED 
#define SIGTTOU_ 22
#define __INT_LEAST16_MAX__ 0x7fff
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define __stub_revoke 
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define SQLITE_IOCAP_ATOMIC512 0x00000002
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define TRACE_(chan,msg,...) glue(TRACE_, chan)(msg, ##__VA_ARGS__)
#define SQLITE_TESTCTRL_RESERVE 14
#define _XOPEN_REALTIME 1
#define SQLITE_INDEX_CONSTRAINT_REGEXP 67
#define ENGINE_JIT 1
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define htole16(x) __uint16_identity (x)
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define FULLY_WITHIN 2
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define SIGVTALRM_ 26
#define SQLITE_CONFIG_MUTEX 10
#define SEGV_BNDERR SEGV_BNDERR
#define SQLITE_STATUS_MALLOC_COUNT 9
#define __STDC_VERSION__ 201112L
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define DEBUG_debug DEBUG_all
#define DT_UNKNOWN DT_UNKNOWN
#define TIMER_ABSTIME 1
#define _SC_BARRIERS _SC_BARRIERS
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define __PMT(args) args
#define SQLITE_TESTCTRL_SCRATCHMALLOC 17
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define _POSIX_CLOCK_SELECTION 200809L
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define SQLITE_CONFIG_PMASZ 25
#define SIGSYS 31
#define _LINUX_LIMITS_H 
#define linux 1
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define _SC_2_VERSION _SC_2_VERSION
#define SIGSTOP 19
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define BYTES_ROUND_DOWN(bytes) (PAGE(bytes) << PAGE_BITS)
#define SA_NOCLDSTOP 1
#define CLOCK_MONOTONIC 1
#define _SC_IPV6 _SC_IPV6
#define SIGTERM_ 15
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define ____FILE_defined 1
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define _IOLBF 1
#define htole64(x) __uint64_identity (x)
#define SQLITE_INNOCUOUS 0x000200000
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define FPE_FLTINV FPE_FLTINV
#define _SC_STREAMS _SC_STREAMS
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define SQLITE_FCNTL_CKSM_FILE 41
#define __USE_POSIX2 1
#define SA_INTERRUPT 0x20000000
#define list_for_each_entry_safe(list,item,tmp,member) for (item = list_first_entry(list, typeof(*(item)), member), tmp = list_next_entry(item, member); &item->member != (list); item = tmp, tmp = list_next_entry(item, member))
#define __FLT64X_MIN_EXP__ (-16381)
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define noreturn _Noreturn
#define __FLT32_MIN_10_EXP__ (-37)
#define _SC_POLL _SC_POLL
#define __KEY_T_TYPE __S32_TYPE
#define sigev_notify_function _sigev_un._sigev_thread._function
#define __SVE_VQ_MAX 512
#define SQLITE_LIMIT_LENGTH 0
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define __FLT32X_DIG__ 15
#define __HAVE_DISTINCT_FLOAT128 0
#define __UINT8_TYPE__ unsigned char
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define __timer_t_defined 1
#define SVE_VL_MIN __SVE_VL_MIN
#define SQLITE_OPEN_READWRITE 0x00000002
#define __PTRDIFF_WIDTH__ 64
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define __BEGIN_DECLS 
#define _SC_PII_XTI _SC_PII_XTI
#define BITS_H 
#define SQLITE_STATUS_PAGECACHE_SIZE 7
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define _GETOPT_POSIX_H 1
#define FS_STAT_H 
#define SQLITE_FCNTL_JOURNAL_POINTER 28
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define _SC_SELECT _SC_SELECT
#define _SC_FIFO _SC_FIFO
#define CLD_STOPPED CLD_STOPPED
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define SQLITE_TRANSACTION 22
#define __FLT16_HAS_INFINITY__ 1
#define false 0
#define POLL_HUP POLL_HUP
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define _STRING_H 1
#define SA_STACK SA_ONSTACK
#define _GCC_MAX_ALIGN_T 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define BUS_ADRERR BUS_ADRERR
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define ____sigset_t_defined 
#define SIGSTKFLT_ 16
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define assert(expr) ((void) sizeof ((expr) ? 1 : 0), __extension__ ({ if (expr) ; else __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION); }))
#define SIGPIPE_ 13
#define le64toh(x) __uint64_identity (x)
#define TRACE_instr TRACE__NOP
#define FILENAME_MAX 4096
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define __nlink_t_defined 
#define SQLITE_MUTEX_STATIC_PMEM 7
#define __FLT16_MANT_DIG__ 11
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define __ino_t_defined 
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ unsigned int
#define __CLOCKID_T_TYPE __S32_TYPE
#define __SLONGWORD_TYPE long int
#define SQLITE_FCNTL_EXTERNAL_READER 40
#define SQLITE_MUTEX_STATIC_LRU2 7
#define _POSIX_MEMLOCK_RANGE 200809L
#define S_IEXEC S_IXUSR
#define S_ISBLK(mode) __S_ISTYPE((mode), __S_IFBLK)
#define atomic_fetch_or_explicit(PTR,VAL,MO) __atomic_fetch_or ((PTR), (VAL), (MO))
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __S_IFLNK 0120000
#define __ARM_ARCH_8A 1
#define TRACE__(msg,...) printk(msg, ##__VA_ARGS__)
#define SQLITE_IOERR_DIR_FSYNC (SQLITE_IOERR | (5<<8))
#define SQLITE_LIMIT_COMPOUND_SELECT 4
#define __stub_chflags 
#define __SVE_VQ_MIN 1
#define __UQUAD_TYPE unsigned long int
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define __BYTE_ORDER __LITTLE_ENDIAN
#define SQLITE_TESTCTRL_BITVEC_TEST 8
#define SQLITE_FAIL 3
#define __USE_POSIX 1
#define SEGV_MTESERR SEGV_MTESERR
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define PAGE_SIZE (1 << PAGE_BITS)
#define SQLITE_FCNTL_RESERVE_BYTES 38
#define SQLITE_TESTCTRL_EXPLAIN_STMT 19
#define SQLITE_DBCONFIG_ENABLE_FKEY 1002
#define BUFSIZ 8192
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define SQLITE_BUSY_SNAPSHOT (SQLITE_BUSY | (2<<8))
#define INT_FAST32_MAX (9223372036854775807L)
#define SQLITE_OPEN_FULLMUTEX 0x00010000
#define _POSIX_AIO_MAX 1
#define SQLITE_UTF16_ALIGNED 8
#define SQLITE_OPEN_SUPER_JOURNAL 0x00004000
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define __UINT_FAST64_TYPE__ long unsigned int
#define WNOWAIT 0x01000000
#define SQLITE_DBSTATUS_CACHE_USED 1
#define EXIT_SUCCESS 0
#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4
#define __LDBL_REDIR_DECL(name) 
#define _SC_2_PBS _SC_2_PBS
#define UINT_FAST8_MAX (255)
#define SIG_SETMASK_ 2
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define SF_FLAG (1 << 7)
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define RTSIG_MAX 32
#define _LINUX_POSIX_TYPES_H 
#define S_IWOTH (S_IWGRP >> 3)
#define INT8_MIN (-128)
#define si_band _sifields._sigpoll.si_band
#define S_IREAD S_IRUSR
#define SQLITE_SAVEPOINT 32
#define _BITS_SIGACTION_H 1
#define SQLITE_CONFIG_MULTITHREAD 2
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define SQLITE_IOERR_DIR_CLOSE (SQLITE_IOERR | (17<<8))
#define STDIN_FILENO 0
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define SI_ASYNCNL SI_ASYNCNL
#define _T_SIZE_ 
#define __TIMESIZE 64
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define atomic_fetch_xor(PTR,VAL) __atomic_fetch_xor ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __SIGRTMAX 64
#define SQLITE3_H 
#define SIGXCPU 24
#define __WNOTHREAD 0x20000000
#define SIGCLD SIGCHLD
#define BITS_SIZE(bits) ((((bits) - 1) / 8) + 1)
#define SQLITE_TESTCTRL_IMPOSTER 25
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define __INT64_TYPE__ long int
#define __FLT_MAX_EXP__ 128
#define CLOCK_PROCESS_CPUTIME_ID 2
#define _POSIX_BARRIERS 200809L
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define __ASSERT_FUNCTION __extension__ __PRETTY_FUNCTION__
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define __gid_t_defined 
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define UINT32_C(c) c ## U
#define SQLITE_READONLY_ROLLBACK (SQLITE_READONLY | (3<<8))
#define S_IFLNK __S_IFLNK
#define SQLITE_TXN_NONE 0
#define __ORDER_BIG_ENDIAN__ 4321
#define TRACE_strace TRACE__NOP
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define _IONBF 2
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define SIGTSTP_ 20
#define RLIMIT_MSGQUEUE_ 12
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define SQLITE_DBCONFIG_WRITABLE_SCHEMA 1011
#define SIGIOT_ 6
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_ILP32_OFF32 -1
#define SI_TKILL SI_TKILL
#define __SVE_VQ_BYTES 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define _POSIX_SEM_VALUE_MAX 32767
#define __FP_FAST_FMAF32 1
#define XATTR_SIZE_MAX 65536
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __GLIBC_MINOR__ 35
#define __UINT_LEAST32_TYPE__ unsigned int
#define _POSIX_FSYNC 200809L
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SEM_VALUE_MAX (2147483647)
#define _XBS5_ILP32_OFFBIG -1
#define CLOCK_BOOTTIME 7
#define P_WRITABLE(flags) (flags & P_WRITE && !(flags & P_COW))
#define ITIMER_VIRTUAL_ 1
#define SQLITE_CHECKPOINT_RESTART 2
#define __FD_ELT(d) ((d) / __NFDBITS)
#define POLL_PRI POLL_PRI
#define SQLITE_API 
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define SQLITE_ANALYZE 28
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define P_READ (1 << 0)
#define _BITS_STDINT_UINTN_H 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define BUS_OBJERR BUS_OBJERR
#define P_ANONYMOUS (1 << 6)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _POSIX_VDISABLE '\0'
#define SQLITE_FLOAT 2
#define FD_SETSIZE __FD_SETSIZE
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define SQLITE_DBSTATUS_STMT_USED 3
#define stdout stdout
#define AF (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af)
#define SQLITE_STATUS_MEMORY_USED 0
#define __WINT_WIDTH__ 32
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __struct_FILE_defined 1
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define SQLITE_DROP_TEMP_TRIGGER 14
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define __INT_LEAST8_MAX__ 0x7f
#define __USE_POSIX199309 1
#define SIGUSR2 12
#define __FLT32X_MAX_10_EXP__ 308
#define RLIMIT_LOCKS_ 10
#define STRACE(msg,...) TRACE_(strace, msg, ##__VA_ARGS__)
#define S_ISREG(mode) __S_ISTYPE((mode), __S_IFREG)
#define SQLITE_PERM 3
#define sched_priority sched_priority
#define __SIGRTMIN 32
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define SIGTSTP 20
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define __LDBL_MAX_10_EXP__ 4932
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define SQLITE_OK_SYMLINK (SQLITE_OK | (2<<8))
#define __W_CONTINUED 0xffff
#define _BITS_SIGNUM_GENERIC_H 1
#define SQLITE_OPEN_MASTER_JOURNAL 0x00004000
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define SA_ONESHOT SA_RESETHAND
#define __stub_stty 
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define __FLT32_MIN_EXP__ (-125)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define ZF_RES (1 << 1)
#define le16toh(x) __uint16_identity (x)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define XATTR_NAME_MAX 255
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define SIGSTKSZ 16384
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define _LP64 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define __UINT8_C(c) c
#define SQLITE_IOERR_CORRUPTFS (SQLITE_IOERR | (33<<8))
#define _BITS_STDINT_INTN_H 1
#define SQLITE_CONFIG_PCACHE 14
#define __FLT64_MAX_EXP__ 1024
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define __S_IFSOCK 0140000
#define SIGKILL 9
#define SQLITE_DENY 1
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define __INT_LEAST32_TYPE__ int
#define _SC_REGEXP _SC_REGEXP
#define _LFS_LARGEFILE 1
#define __wchar_t__ 
#define SEEK_END 2
#define __USE_POSIX_IMPLICITLY 1
#define __UINT64_TYPE__ long unsigned int
#define SQLITE_INDEX_CONSTRAINT_FUNCTION 150
#define SQLITE_DBCONFIG_LEGACY_FILE_FORMAT 1016
#define _PTHREAD_H 1
#define __stub___compat_query_module 
#define SQLITE_STATUS_PAGECACHE_USED 1
#define __ARM_NEON 1
#define SQLITE_STATUS_SCRATCH_OVERFLOW 4
#define RLIMIT_MEMLOCK_ 8
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define SQLITE_CONFIG_GETMALLOC 5
#define SQLITE_FCNTL_RBU 26
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define SQLITE_CONFIG_MALLOC 4
#define _SC_IOV_MAX _SC_IOV_MAX
#define _SC_PASS_MAX _SC_PASS_MAX
#define _STDDEF_H_ 
#define __S_ISUID 04000
#define __stub___compat_bdflush 
#define __FLT128_HAS_QUIET_NAN__ 1
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define SA_RESTART 0x10000000
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define SQLITE_LIMIT_VDBE_OP 5
#define CLOCK_REALTIME_COARSE_ 5
#define SI_USER_ 0
#define DT_DIR DT_DIR
#define PAGE_BITS 12
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define __UINT_FAST8_TYPE__ unsigned char
#define __INT_FAST8_TYPE__ signed char
#define TRACE(msg,...) TRACE_(DEFAULT_CHANNEL, msg, ##__VA_ARGS__)
#define SEGV_ADIPERR SEGV_ADIPERR
#define SIGILL 4
#define SQLITE_IOERR_WRITE (SQLITE_IOERR | (3<<8))
#define __PID_T_TYPE __S32_TYPE
#define DT_BLK DT_BLK
#define SQLITE_STATIC ((sqlite3_destructor_type)0)
#define P_WRITE (1 << 1)
#define SQLITE_CONSTRAINT_COMMITHOOK (SQLITE_CONSTRAINT | (2<<8))
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX _SC_AIO_MAX
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define SQLITE_TESTCTRL_PRNG_RESET 7
#define SQLITE_BUSY 5
#define va_arg(v,l) __builtin_va_arg(v,l)
#define PF_RES (1 << 0)
#define S_ISGID __S_ISGID
#define __USE_ISOC11 1
#define _PC_MAX_CANON _PC_MAX_CANON
#define _THREAD_SHARED_TYPES_H 1
#define ITIMER_PROF_ 2
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define __glibc_has_extension(ext) 0
#define CPU_OFFSET(field) offsetof(struct cpu_state, field)
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define _SC_TIMERS _SC_TIMERS
#define SQLITE_NULL 5
#define __GNUC_STDC_INLINE__ 1
#define _BITS_FLOATN_H 
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define P_tmpdir "/tmp"
#define __FLT64_HAS_DENORM__ 1
#define SQLITE_ABORT 4
#define __HAVE_FLOAT32 1
#define SQLITE_TESTCTRL_PRNG_SAVE 5
#define SQLITE_OPEN_PRIVATECACHE 0x00040000
#define __WORDSIZE_TIME64_COMPAT32 0
#define __HAVE_DISTINCT_FLOAT32 0
#define SQLITE_TESTCTRL_TUNE 32
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define list_for_each_entry(list,item,member) for (item = list_entry((list)->next, typeof(*item), member); &item->member != (list); item = list_entry(item->member.next, typeof(*item), member))
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define SQLITE_DBCONFIG_ENABLE_QPSG 1007
#define is_gcc(version) (__GNUC__ >= version)
#define __FP_FAST_FMAF32x 1
#define R_OK 4
#define PTHREAD_ONCE_INIT 0
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define UINT_FAST16_MAX (18446744073709551615UL)
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define _POSIX_MESSAGE_PASSING 200809L
#define SQLITE_CONFIG_PCACHE2 18
#define CLD_DUMPED CLD_DUMPED
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define _SIZE_T 
#define SQLITE_DIRECTONLY 0x000080000
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define _IO_ERR_SEEN 0x0020
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define AT_FDCWD_ -100
#define __ULONG32_TYPE unsigned int
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define SQLITE_IOCAP_ATOMIC64K 0x00000100
#define SQLITE_LIMIT_COLUMN 2
#define SQLITE_IOERR_DELETE (SQLITE_IOERR | (10<<8))
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __siginfo_t_defined 1
#define SQLITE_STMTSTATUS_RUN 6
#define use(...) __use(0, ##__VA_ARGS__)
#define RLIMIT_RTPRIO_ 14
#define UTIME_OMIT ((1l << 30) - 2l)
#define UTIL_DEBUG_H 
#define kill_dependency(Y) __extension__ ({ __auto_type __kill_dependency_tmp = (Y); __kill_dependency_tmp; })
#define TIME_UTC 1
#define __FLT64X_HAS_INFINITY__ 1
#define __BIG_ENDIAN 4321
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define SQLITE_IOERR_DATA (SQLITE_IOERR | (32<<8))
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __suseconds_t_defined 
#define RLIMIT_RSS_ 5
#define SQLITE_OK 0
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define SQLITE_IOCAP_SAFE_APPEND 0x00000200
#define SQLITE_TESTCTRL_RESULT_INTREAL 27
#define MQ_PRIO_MAX 32768
#define SQLITE_CONFIG_URI 17
#define __ASM_BITSPERLONG_H 
#define __fortify_function __extern_always_inline __attribute_artificial__
#define SQLITE_AUTH 23
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define __off_t_defined 
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define SI_KERNEL SI_KERNEL
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define _FILE_OFFSET_BITS 64
#define __SIZEOF_WCHAR_T__ 4
#define unix 1
#define S_IWRITE S_IWUSR
#define SIGPWR 30
#define _SCHED_H 1
#define posit assert
#define SF (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf)
#define _POSIX_REENTRANT_FUNCTIONS 1
#define SQLITE_STDCALL SQLITE_APICALL
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define SQLITE_FCNTL_BEGIN_ATOMIC_WRITE 31
#define _GCC_SIZE_T 
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define __INO64_T_TYPE __UQUAD_TYPE
#define L_SET SEEK_SET
#define _SYS_STAT_H 1
#define has_attribute __has_attribute
#define __UINT32_C(c) c ## U
#define _POSIX_V6_ILP32_OFFBIG -1
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define SQLITE_OPEN_URI 0x00000040
#define FTS5_TOKEN_COLOCATED 0x0001
#define SQLITE_NOTFOUND 12
#define _BITS_TIME64_H 1
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define __WINT_MIN__ 0U
#define RLIMIT_NICE_ 13
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __glibc_has_builtin(name) __has_builtin (name)
#define __ONCE_FLAG_INIT { 0 }
#define glue(a,b) _glue(a, b)
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define _PTRDIFF_T_DECLARED 
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define sigcontext_struct sigcontext
#define SQLITE_CREATE_TEMP_INDEX 3
#define _VA_LIST_T_H 
#define __INT8_MAX__ 0x7f
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define SIG_ERR ((__sighandler_t) -1)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define SQLITE_TESTCTRL_SEEK_COUNT 30
#define SQLITE_DBCONFIG_TRIGGER_EQP 1008
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define __INO_T_MATCHES_INO64_T 1
#define SQLITE_PREPARE_NO_VTAB 0x04
#define _REG(n) union { dword_t e ##n; word_t n; }
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SQLITE_OPEN_TRANSIENT_DB 0x00000400
#define __CHAR32_TYPE__ unsigned int
#define LOCK_INITIALIZER {PTHREAD_MUTEX_INITIALIZER, 0}
#define SQLITE_UTF8 1
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define __key_t_defined 
#define _PC_NAME_MAX _PC_NAME_MAX
#define POLL_IN POLL_IN
#define SQLITE_UTF16BE 3
#define atomic_compare_exchange_weak_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 1, (SUC), (FAIL)); })
#define _VA_LIST 
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __GLIBC_USE_IEC_60559_EXT 0
#define __fsfilcnt_t_defined 
#define LSEEK_CUR 1
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define SQLITE_RECURSIVE 33
#define RLIMIT_CORE_ 4
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define SQLITE_DBSTATUS_CACHE_USED_SHARED 11
#define UINT_LEAST32_MAX (4294967295U)
#define SQLITE_IOERR_SHMMAP (SQLITE_IOERR | (21<<8))
#define ZF (cpu->zf_res ? cpu->res == 0 : cpu->zf)
#define NGROUPS_MAX 65536
#define __va_list__ 
#define INT32_C(c) c
#define SQLITE_FCNTL_VFS_POINTER 27
#define atomic_fetch_add_explicit(PTR,VAL,MO) __atomic_fetch_add ((PTR), (VAL), (MO))
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define UINTMAX_C(c) c ## UL
#define _POSIX2_CHAR_TERM 200809L
#define MAX_CANON 255
#define _POSIX_ASYNC_IO 1
#define SQLITE_SCANSTAT_NAME 3
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define __INT32_TYPE__ int
#define _FTS5_H 
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define _ASSERT_H 1
#define __SIZEOF_DOUBLE__ 8
#define __time_t_defined 1
#define _SYS_SYSMACROS_H 1
#define _SC_INT_MIN _SC_INT_MIN
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __INT_LEAST32_WIDTH__ 32
#define __SI_ERRNO_THEN_CODE 1
#define va_start(v,l) __builtin_va_start(v,l)
#define ERRNO_DIE(msg) { perror(msg); abort(); }
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define __SWORD_TYPE long int
#define _PC_PRIO_IO _PC_PRIO_IO
#define SQLITE_IOERR_READ (SQLITE_IOERR | (1<<8))
#define SIGINT 2
#define RUSAGE_CHILDREN_ -1
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define __SIZEOF_FLOAT__ 4
#define RLIMIT_NLIMITS_ 16
#define SQLITE_AUTH_USER (SQLITE_AUTH | (1<<8))
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define FS_PROC_H 
#define AT_SYMLINK_NOFOLLOW_ 0x100
#define __ldiv_t_defined 1
#define _T_SIZE 
#define SIGIOT SIGABRT
#define UINT8_C(c) c
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define __va_arg_pack() __builtin_va_arg_pack ()
#define _POSIX_TIMER_MAX 32
#define S_IRWXG (S_IRWXU >> 3)
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define SQLITE_SUBTYPE 0x000100000
#define SQLITE_CONSTRAINT_VTAB (SQLITE_CONSTRAINT | (9<<8))
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define SQLITE_SELECT 21
#define __GNUC_MINOR__ 3
#define __strncpy_safe __attribute__((nonstring))
#define __INT_FAST16_WIDTH__ 64
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define SQLITE_FCNTL_WIN32_SET_HANDLE 23
#define _POSIX_V7_ILP32_OFFBIG -1
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define ILL_PRVREG ILL_PRVREG
#define SIGSEGV_ 11
#define __LDBL_REDIR2_DECL(name) 
#define atomic_load(PTR) atomic_load_explicit (PTR, __ATOMIC_SEQ_CST)
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define INTMAX_C(c) c ## L
#define SQLITE_RANGE 25
#define __glibc_clang_prereq(maj,min) 0
#define SQLITE_FCNTL_OVERWRITE 11
#define ILL_PRVOPC ILL_PRVOPC
#define _SC_SIGNALS _SC_SIGNALS
#define NUM_SIGS 64
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _STDINT_H 1
#define _RWLOCK_INTERNAL_H 
#define __DBL_MAX_10_EXP__ 308
#define __FILE_defined 1
#define SQLITE_IOERR_VNODE (SQLITE_IOERR | (27<<8))
#define SQLITE_CONFIG_GETPCACHE2 19
#define SQLITE_INDEX_CONSTRAINT_ISNOTNULL 70
#define UINT16_MAX (65535)
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8
#define S_ISUID __S_ISUID
#define _POSIX_TRACE_LOG -1
#define __INT16_C(c) c
#define _DIRENT_H 1
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define __ARM_ARCH_ISA_A64 1
#define __U32_TYPE unsigned int
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define MEM_PAGES (1 << 20)
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_THREADS _SC_THREADS
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define _GETOPT_CORE_H 1
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define SIG_IGN ((__sighandler_t) 1)
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define SQLITE_LOCK_PENDING 3
#define static_assert _Static_assert
#define SQLITE_STATUS_MALLOC_SIZE 5
#define __sigstack_defined 1
#define __PTRDIFF_TYPE__ long int
#define SA_SIGINFO_ 4
#define DT_LNK DT_LNK
#define AF_FLAG (1 << 4)
#define ATOMIC_FLAG_INIT { 0 }
#define __clockid_t_defined 1
#define SQLITE_NOTICE 27
#define __kernel_old_uid_t __kernel_old_uid_t
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define SIGRTMIN (__libc_current_sigrtmin ())
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define _BITS_STAT_H 1
#define __size_t 
#define CLOCK_MONOTONIC_ 1
#define __ATOMIC_SEQ_CST 5
#define SIGHUP_ 1
#define _POSIX_DELAYTIMER_MAX 32
#define SQLITE_TESTCTRL_ALWAYS 13
#define SQLITE_IOERR 10
#define SQLITE_MUTEX_RECURSIVE 1
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define SQLITE_CONFIG_SQLLOG 21
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define SQLITE_TESTCTRL_ISINIT 23
#define F80_NAN ((float80) {.signif = 0xc000000000000000, .exp = 0x7fff, .sign = 0})
#define SQLITE_FCNTL_VFSNAME 12
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define ITIMER_REAL ITIMER_REAL
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define RLIMIT_DATA_ 2
#define SQLITE_FCNTL_LOCK_TIMEOUT 34
#define _POSIX_MAX_CANON 255
#define SQLITE_CONFIG_LOOKASIDE 13
#define __UINTPTR_TYPE__ long unsigned int
#define SQLITE_DROP_VIEW 17
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define SQLITE_IOERR_RDLOCK (SQLITE_IOERR | (9<<8))
#define CLD_KILLED CLD_KILLED
#define _STATBUF_ST_RDEV 
#define SQLITE_TRACE_ROW 0x04
#define SIGTERM 15
#define SQLITE_INDEX_CONSTRAINT_LE 8
#define __bitwise__ 
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define makedev(maj,min) gnu_dev_makedev (maj, min)
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define SIGABRT_ 6
#define __linux__ 1
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define __LDBL_MIN_10_EXP__ (-4931)
#define FPE_FLTUNK FPE_FLTUNK
#define SQLITE_DEPRECATED 
#define __useconds_t_defined 
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define _SC_SPAWN _SC_SPAWN
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __SI_BAND_TYPE long int
#define O_RDWR_ (1 << 1)
#define __HAVE_DISTINCT_FLOAT64X 0
#define X_OK 1
#define SIG_SETMASK 2
#define __SIZEOF_LONG_LONG__ 8
#define SIGALRM 14
#define SQLITE_FCNTL_CKPT_START 39
#define __USE_ATFILE 1
#define SQLITE_MUTEX_STATIC_MASTER 2
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define _POSIX_OPEN_MAX 20
#define _GCC_PTRDIFF_T 
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define __FLT128_DECIMAL_DIG__ 36
#define _POSIX_THREAD_KEYS_MAX 128
#define SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION 1005
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define SQLITE_DBCONFIG_DEFENSIVE 1010
#define PTRDIFF_MAX (9223372036854775807L)
#define _SC_NZERO _SC_NZERO
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define SQLITE_TESTCTRL_ASSERT 12
#define S_IROTH (S_IRGRP >> 3)
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define SQLITE_INDEX_SCAN_UNIQUE 1
#define __POSIX2_THIS_VERSION 200809L
#define __WALL 0x40000000
#define SQLITE_TESTCTRL_VDBE_COVERAGE 21
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define TIMERS_MAX 16
#define __FLT_MIN_10_EXP__ (-37)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define _UNISTD_H 1
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _ASM_GENERIC_TYPES_H 
#define _POSIX_ARG_MAX 4096
#define F_OK 0
#define SQLITE_EMPTY 16
#define glue3(a,b,c) glue(a, glue(b, c))
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define __ORDER_LITTLE_ENDIAN__ 1234
#define INT_LEAST16_MAX (32767)
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define _POSIX_SAVED_IDS 1
#define _BITS_CPU_SET_H 1
#define __P(args) args
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define SQLITE_NOMEM 7
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define SQLITE_LOCK_RESERVED 2
#define atomic_compare_exchange_weak(PTR,VAL,DES) atomic_compare_exchange_weak_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define d_fileno d_ino
#define _XOPEN_XCU_VERSION 4
#define __ATOMIC_ACQ_REL 4
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define __fsblkcnt_t_defined 
#define FPE_FLTUND FPE_FLTUND
#define _STDLIB_H 1
#define __S_ISGID 02000
