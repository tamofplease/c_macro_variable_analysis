#define __S_IFBLK 0060000
#define sa_sigaction __sigaction_handler.sa_sigaction
#define STATX_ATTR_AUTOMOUNT 0x00001000
#define _BITS_SCHED_H 1
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define __SSP_STRONG__ 3
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define EMULTIHOP 72
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define AT_STATX_SYNC_AS_STAT 0x0000
#define __SI_SIGFAULT_ADDL 
#define __UINT_LEAST16_MAX__ 0xffff
#define __FLT128_MAX_10_EXP__ 4932
#define STATX_UID 0x00000008U
#define RE_DUP_MAX (0x7fff)
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define atomic_is_lock_free(OBJ) __atomic_is_lock_free (sizeof (*(OBJ)), (OBJ))
#define MAX_GC1OVPAGE(pagesize) (PAGEROOM(pagesize) / sizeof(pgno_t) - 1)
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define PRIxLEAST64 __PRI64_PREFIX "x"
#define si_fd _sifields._sigpoll.si_fd
#define _T_WCHAR_ 
#define _SC_IPV6 _SC_IPV6
#define STATX_ATIME 0x00000020U
#define atomic_fetch_or(PTR,VAL) __atomic_fetch_or ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define RWH_WRITE_LIFE_SHORT 2
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define M_KEEP 4
#define setbit(a,i) ((a)[(i)/NBBY] |= 1<<((i)%NBBY))
#define si_arch _sifields._sigsys._arch
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define __S64_TYPE long int
#define _PRINTF_NAN_LEN_MAX 4
#define MDBX_PURE_FUNCTION __attribute__((__pure__))
#define __SQUAD_TYPE long int
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _BITS_SIGINFO_CONSTS_H 1
#define SIGBUS 7
#define _BSD_SIZE_T_DEFINED_ 
#define NL_NMAX INT_MAX
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define __CHAR_BIT__ 8
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define EREMCHG 78
#define IPC_CREAT 01000
#define C_RETIRING 0x400
#define SIGTTIN 21
#define EACCES 13
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define atomic_fetch_or_explicit(PTR,VAL,MO) __atomic_fetch_or ((PTR), (VAL), (MO))
#define EDESTADDRREQ 89
#define si_pid _sifields._kill.si_pid
#define PIPE_BUF 4096
#define __HAVE_FLOAT16 0
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define SORT_CMP_SWAP(TYPE,CMP,a,b) do { const TYPE swap_tmp = (a); const bool swap_cmp = CMP(swap_tmp, b); (a) = swap_cmp ? swap_tmp : b; (b) = swap_cmp ? b : swap_tmp; } while (0)
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define __INT32_C(c) c
#define MDBX_LOCK_FORMAT (MDBX_CLOCK_SIGN * 27733 + (unsigned)sizeof(MDBX_reader) * 13 + (unsigned)offsetof(MDBX_reader, mr_snapshot_pages_used) * 251 + (unsigned)offsetof(MDBX_lockinfo, mti_oldest_reader) * 83 + (unsigned)offsetof(MDBX_lockinfo, mti_numreaders) * 37 + (unsigned)offsetof(MDBX_lockinfo, mti_readers) * 29)
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define UINT_FAST16_WIDTH __WORDSIZE
#define MDBX_UNALIGNED_OK 4
#define _PATH_WTMPX _PATH_WTMP
#define pthread_cleanup_push_defer_np(routine,arg) do { struct __pthread_cleanup_frame __clframe __attribute__ ((__cleanup__ (__pthread_cleanup_routine))) = { .__cancel_routine = (routine), .__cancel_arg = (arg), .__do_it = 1 }; (void) pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED, &__clframe.__cancel_type)
#define VALGRIND_CREATE_MEMPOOL(h,r,z) 
#define EDQUOT 122
#define __CLANG_PREREQ(maj,min) (0)
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define CLONE_NEWUTS 0x04000000
#define __gid_t_defined 
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 0
#define __nothrow __attribute__((__nothrow__))
#define DKEY(x) mdbx_dump_val(x, _kbuf, DKBUF_MAX * 2 + 1)
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define MDBX_DEPRECATED __attribute__((__deprecated__))
#define STA_DEL 0x0020
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define _XOPEN_VERSION 700
#define LIBMDBX_VERINFO_API __dll_export
#define SCHED_RR 2
#define MDBX_VERSION_MAJOR 0
#define LONG_WIDTH __WORDSIZE
#define SIG_ERR ((__sighandler_t) -1)
#define MIN_TXNID UINT64_C(1)
#define __FLT_RADIX__ 2
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define __ASSERT_VOID_CAST (void)
#define MDBX_LOCKING_POSIX1988 1988
#define __O_NOFOLLOW 0100000
#define CLONE_NEWNET 0x40000000
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define __sigval_t_defined 
#define SIGPROF 27
#define bool _Bool
#define __CFLOAT128 _Complex _Float128
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define DKEY_DEBUG(x) ("-")
#define __SIG_ATOMIC_TYPE__ int
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __SVE_ZREGS_OFFSET 0
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define LIBMDBX_API_TYPE 
#define __DBL_MIN_10_EXP__ (-307)
#define ENOTTY 25
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define _ISOC11_SOURCE 1
#define __cold __attribute__((__cold__)) __optimize("Os")
#define MOD_NANO ADJ_NANO
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define L_cuserid 9
#define _CS_V6_ENV _CS_V6_ENV
#define __u_char_defined 
#define C_INITIALIZED 0x01
#define WTMPX_FILENAME _PATH_WTMPX
#define RWH_WRITE_LIFE_LONG 4
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define __FLT64X_HAS_INFINITY__ 1
#define IEEE754_DOUBLE_EXPONENTA_BIAS 0x3FF
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define _BITS_SIGTHREAD_H 1
#define _POSIX_TRACE_EVENT_FILTER -1
#define __INT_LEAST16_TYPE__ short int
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define NGROUPS NGROUPS_MAX
#define _BITS_TYPES_LOCALE_T_H 1
#define UINT8_WIDTH 8
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define SCNdLEAST8 "hhd"
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define _XOPEN_XCU_VERSION 4
#define __O_NOATIME 01000000
#define MNTOPT_RO "ro"
#define ENOMEM 12
#define MNTOPT_RW "rw"
#define __STDC_CONSTANT_MACROS 1
#define SPLICE_F_GIFT 8
#define _SYS_TIME_H 1
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH _CS_PATH
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define __stub_sigreturn 
#define _XBS5_LPBIG_OFFBIG -1
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define NFDBITS __NFDBITS
#define __noinline __attribute__((__noinline__))
#define MDBX_NORETURN __attribute__((__noreturn__))
#define SCNd8 "hhd"
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define S_IXOTH (S_IXGRP >> 3)
#define MDBX_ALIGNAS(N) alignas(N)
#define WCHAR_WIDTH 32
#define F_BIGDATA 0x01
#define __O_CLOEXEC 02000000
#define __ARM_FP 14
#define NL_ARGMAX _POSIX_ARG_MAX
#define SIGSTKFLT 16
#define MDBX_PNL_FIRST(pl) ((pl)[1])
#define __MALLOC_DEPRECATED __attribute_deprecated__
#define __fortify_function __extern_always_inline __attribute_artificial__
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define SCNd16 "hd"
#define howmany(x,y) (((x) + ((y) - 1)) / (y))
#define NAME_MAX 255
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define _POSIX_JOB_CONTROL 1
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define CPU_CLR(cpu,cpusetp) __CPU_CLR_S (cpu, sizeof (cpu_set_t), cpusetp)
#define F_ISSET(w,f) (((w) & (f)) == (f))
#define STATX_ATTR_VERITY 0x00100000
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define __ASM_GENERIC_BITS_PER_LONG 
#define SCNd32 "d"
#define _POSIX_THREAD_CPUTIME 0
#define __linux 1
#define UTMPX_FILE _PATH_UTMPX
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define si_int _sifields._rt.si_sigval.sival_int
#define __CHAR_UNSIGNED__ 1
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __UINT32_MAX__ 0xffffffffU
#define _BITS_SS_FLAGS_H 1
#define __SHRT_WIDTH__ 16
#define __SIZE_T 
#define _POSIX_PIPE_BUF 512
#define __S_ISVTX 01000
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define _SC_PII _SC_PII
#define MDBX_END_NAMES { "committed", "empty-commit", "abort", "reset", "reset-tmp", "fail-begin", "fail-beginchild" }
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define _ATFILE_SOURCE 1
#define CPU_ISSET(cpu,cpusetp) __CPU_ISSET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define IPC_STAT 2
#define SCNuLEAST16 "hu"
#define _SC_NETWORKING _SC_NETWORKING
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define __FLT128_MIN_EXP__ (-16381)
#define UINT_FAST64_WIDTH 64
#define WUNTRACED 2
#define ERESTART 85
#define MDBX_STRING_TETRAD(str) MDBX_TETRAD(str[0], str[1], str[2], str[3])
#define NZERO 20
#define EISNAM 120
#define UINT16_C(c) c
#define SCNuLEAST32 "u"
#define CLONE_SETTLS 0x00080000
#define SCNo8 "hho"
#define ENOKEY 126
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ENOMSG 42
#define _PC_PRIO_IO _PC_PRIO_IO
#define EXIT_FAILURE 1
#define RENAME_EXCHANGE (1 << 1)
#define MDBX_PNL_SIZE(pl) ((pl)[0])
#define MDBX_PNL_GRANULATE 1024
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define MDBX_PNL_INITIAL (MDBX_PNL_GRANULATE - 2 - MDBX_ASSUME_MALLOC_OVERHEAD / sizeof(pgno_t))
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define MDBX_ALLOC_ALL (MDBX_ALLOC_CACHE | MDBX_ALLOC_GC | MDBX_ALLOC_NEW)
#define _PATH_DRUM "/dev/drum"
#define __KERNEL_STRICT_NAMES 
#define SCNxFAST16 __PRIPTR_PREFIX "x"
#define __INT64_C(c) c ## L
#define POSIX_MADV_SEQUENTIAL 2
#define SA_SIGINFO 4
#define STA_PPSWANDER 0x0400
#define __CFLOAT32 _Complex _Float32
#define MIN_MAPSIZE (MIN_PAGESIZE * MIN_PAGENO)
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define UTMPX_FILENAME _PATH_UTMPX
#define NEW_TIME 3
#define SIGN_IS_STEADY(sign) ((sign) > MDBX_DATASIGN_WEAK)
#define SCNoFAST64 __PRI64_PREFIX "o"
#define MDBX_ENV_CHECKPID_AUTO 
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define S_IRWXG (S_IRWXU >> 3)
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define SCNu8 "hhu"
#define F_SET_RW_HINT 1036
#define _BITS_SIGINFO_ARCH_H 1
#define si_addr _sifields._sigfault.si_addr
#define __attribute_used__ __attribute__ ((__used__))
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define SCNxFAST64 __PRI64_PREFIX "x"
#define _PATH_DEVNULL "/dev/null"
#define S_IFMT __S_IFMT
#define _SYS_PARAM_H 1
#define CLOCK_REALTIME 0
#define _ASM_GENERIC_INT_LL64_H 
#define PRIuFAST16 __PRIPTR_PREFIX "u"
#define _SC_VERSION _SC_VERSION
#define MDBX_ENV_TXKEY UINT32_C(0x10000000)
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define MDBX_LOCKING_BENAPHORE 1995
#define __USER_LABEL_PREFIX__ 
#define MDBX_ENABLE_MADVISE 1
#define MDBX_NOTHROW_CONST_FUNCTION __attribute__((__const__, __nothrow__))
#define SCNx8 "hhx"
#define _BITS_ENDIANNESS_H 1
#define __GLIBC__ 2
#define _SC_POLL _SC_POLL
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define MDBX_PNL_PREALLOC_FOR_RADIXSORT 1
#define PRIuFAST32 __PRIPTR_PREFIX "u"
#define _PATH_SHELLS "/etc/shells"
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define WCONTINUED 8
#define UINT_LEAST8_WIDTH 8
#define E2BIG 7
#define CANBSIZ MAX_CANON
#define __clock_t_defined 1
#define __LDBL_HAS_INFINITY__ 1
#define _BITS_UINTN_IDENTITY_H 1
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define __dll_export __attribute__((__visibility__("default")))
#define STATX_NLINK 0x00000004U
#define __FP_FAST_FMAF32 1
#define P_LOOSE 0x4000
#define __FLT32_IS_IEC_60559__ 2
#define _BITS_TYPESIZES_H 1
#define MDBX_NOTHROW_PURE_FUNCTION __attribute__((__pure__, __nothrow__))
#define PROT_EXEC 0x4
#define si_status _sifields._sigchld.si_status
#define __GNU_LIBRARY__ 6
#define __FLT32_DIG__ 6
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define MS_ASYNC 1
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define __RLIM_T_MATCHES_RLIM64_T 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define MAP_FAILED ((void *) -1)
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define _HAS_EXCEPTIONS 1
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define SS_DISABLE SS_DISABLE
#define _STDATOMIC_H 
#define ENOLINK 67
#define MDBX_DATASIGN_NONE 0u
#define SORT_INNER(TYPE,CMP,begin,end,len) switch (len) { default: __unreachable(); case 0: case 1: break; case 2: SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); break; case 3: SORT_NETWORK_3(TYPE, CMP, begin); break; case 4: SORT_NETWORK_4(TYPE, CMP, begin); break; case 5: SORT_NETWORK_5(TYPE, CMP, begin); break; case 6: SORT_NETWORK_6(TYPE, CMP, begin); break; case 7: SORT_NETWORK_7(TYPE, CMP, begin); break; case 8: SORT_NETWORK_8(TYPE, CMP, begin); break; case 9: SORT_NETWORK_9(TYPE, CMP, begin); break; case 10: SORT_NETWORK_10(TYPE, CMP, begin); break; case 11: SORT_NETWORK_11(TYPE, CMP, begin); break; case 12: SORT_NETWORK_12(TYPE, CMP, begin); break; case 13: SORT_NETWORK_13(TYPE, CMP, begin); break; case 14: SORT_NETWORK_14(TYPE, CMP, begin); break; case 15: SORT_NETWORK_15(TYPE, CMP, begin); break; case 16: SORT_NETWORK_16(TYPE, CMP, begin); break; }
#define ILL_COPROC ILL_COPROC
#define RENAME_NOREPLACE (1 << 0)
#define __SVE_NUM_ZREGS 32
#define __SSIZE_T_TYPE __SWORD_TYPE
#define DBI_AUDITED 0x40
#define __DEV_T_TYPE __UQUAD_TYPE
#define nullptr NULL
#define P_SPILLED 0x2000
#define SIGIO SIGPOLL
#define __STDC_UTF_16__ 1
#define IS_SUBP(p) (((p)->mp_flags & P_SUBP) != 0)
#define le32toh(x) __uint32_identity (x)
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define ARRAY_END(array) (&array[ARRAY_LENGTH(array)])
#define __O_LARGEFILE 0
#define CPU_SETSIZE __CPU_SETSIZE
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define MDBX_INTERNAL_VAR static
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define _VA_LIST_DEFINED 
#define __FLT32X_HAS_INFINITY__ 1
#define UINT32_WIDTH 32
#define __INT32_MAX__ 0x7fffffff
#define __GLIBC_USE_DEPRECATED_GETS 0
#define _POSIX_V7_LPBIG_OFFBIG -1
#define __INT_WIDTH__ 32
#define CPU_XOR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, ^)
#define atomic_flag_test_and_set(PTR) __atomic_test_and_set ((PTR), __ATOMIC_SEQ_CST)
#define __SIZE_WIDTH__ 64
#define S_ISVTX __S_ISVTX
#define __STDC_ISO_10646__ 201706L
#define MOD_MICRO ADJ_MICRO
#define _SC_NL_NMAX _SC_NL_NMAX
#define IPC_EXCL 02000
#define __PTRDIFF_WIDTH__ 64
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define _SYS_SENDFILE_H 1
#define __optimize(ops) __attribute__((__optimize__(ops)))
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 2
#define LOCK_EX 2
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define CPU_EQUAL(cpusetp1,cpusetp2) __CPU_EQUAL_S (sizeof (cpu_set_t), cpusetp1, cpusetp2)
#define PROT_MTE 0x20
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define _ANSI_STDARG_H_ 
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define _LARGEFILE_SOURCE 1
#define MAX_INPUT 255
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define __FLT128_IS_IEC_60559__ 2
#define ESTALE 116
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define SEGV_ACCADI SEGV_ACCADI
#define C_RECLAIMING 0x20
#define MDBX_CACHELINE_SIZE 64
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define MDBX_THREAD_RTHC_REGISTERED 1
#define PTRDIFF_MAX (9223372036854775807L)
#define FPSIMD_MAGIC 0x46508001
#define _XBS5_ILP32_OFF32 -1
#define __ASM_SIGCONTEXT_H 
#define PRIX8 "X"
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define DELAYTIMER_MAX 2147483647
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define PRIuFAST8 "u"
#define P_INVALID (~(pgno_t)0)
#define MMAP_OPTION_SEMAPHORE 2
#define __attribute_const__ __attribute__ ((__const__))
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define MDBX_SHRINK_ALLOWED UINT32_C(0x40000000)
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define htobe32(x) __bswap_32 (x)
#define MDBX_TXN_CHECKOWNER_CONFIG MDBX_STRINGIFY(MDBX_TXN_CHECKOWNER)
#define SEGV_MTEAERR SEGV_MTEAERR
#define L_tmpnam 20
#define ___int_wchar_t_h 
#define ST_WRITE ST_WRITE
#define MADV_WIPEONFORK 18
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define LIBMDBX_INTERNALS 
#define POSIX_MADV_DONTNEED 4
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define __CFLOAT32X _Complex _Float32x
#define MCL_ONFAULT 4
#define POSIX_FADV_WILLNEED 3
#define MAP_HASSEMAPHORE 0
#define PRIoLEAST32 "o"
#define __daddr_t_defined 
#define PRIdLEAST16 "d"
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define sa_handler __sigaction_handler.sa_handler
#define LONG_MAX __LONG_MAX__
#define STDERR_FILENO 2
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define INT32_WIDTH 32
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define __FLT64_MAX_10_EXP__ 308
#define UCHAR_WIDTH 8
#define PRIdLEAST32 "d"
#define PROT_WRITE 0x2
#define PRIoLEAST64 __PRI64_PREFIX "o"
#define __GLIBC_USE_LIB_EXT2 1
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define PRIi64 __PRI64_PREFIX "i"
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define _UTSNAME_SYSNAME_LENGTH _UTSNAME_LENGTH
#define MDBX_ALLOC_FAKE 16
#define __DBL_IS_IEC_60559__ 2
#define STA_PPSTIME 0x0004
#define __FLT32_HAS_INFINITY__ 1
#define LOCK_RW 192
#define EXIT_SUCCESS 0
#define UINT64_WIDTH 64
#define SAFE64_INVALID_THRESHOLD UINT64_C(0xffffFFFF00000000)
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define PRIiFAST16 __PRIPTR_PREFIX "i"
#define SI_QUEUE SI_QUEUE
#define UINTMAX_WIDTH 64
#define UINT_LEAST8_MAX (255)
#define MNTTAB _PATH_MNTTAB
#define _POSIX_SIGQUEUE_MAX 32
#define LOCK_SH 1
#define _SYS_MMAN_H 1
#define DB_USABLE_FLAGS (DB_PERSISTENT_FLAGS | MDBX_CREATE | MDBX_DB_ACCEDE)
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define PRIdLEAST64 __PRI64_PREFIX "d"
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define ITIMER_PROF ITIMER_PROF
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define PRId8 "d"
#define PRIiFAST32 __PRIPTR_PREFIX "i"
#define CLONE_NEWNS 0x00020000
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define NL_LANGMAX _POSIX2_LINE_MAX
#define DVAL(x) mdbx_dump_val(x, _kbuf + DKBUF_MAX * 2 + 1, DKBUF_MAX * 2 + 1)
#define _SC_2_VERSION _SC_2_VERSION
#define MDBX_MAP_RESIZED MDBX_MAP_RESIZED_is_deprecated()
#define __DADDR_T_TYPE __S32_TYPE
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define MAX_HANDLE_SZ 128
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define LONG_MIN (-LONG_MAX - 1L)
#define FALLOC_FL_INSERT_RANGE 0x20
#define PRIiFAST64 __PRI64_PREFIX "i"
#define __FD_SETSIZE 1024
#define _PATH_MOUNTED "/etc/mtab"
#define _LINUX_STAT_H 
#define mdbx_free free
#define MDBX_CXX01_CONSTEXPR_VAR const
#define _XBS5_LP64_OFF64 1
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define SI_USER SI_USER
#define PRIi8 "i"
#define EBADMSG 74
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __LDBL_HAS_DENORM__ 1
#define MDBX_ENV_ACTIVE UINT32_C(0x20000000)
#define CLONE_PARENT 0x00008000
#define SCNiLEAST16 "hi"
#define MDBX_LOCKING MDBX_LOCKING_POSIX2008
#define __S_IFREG 0100000
#define UNALIGNED_POKE_8(ptr,struct,field,value) poke_u8((uint8_t *)(ptr) + offsetof(struct, field), value)
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define POSIX_FADV_NORMAL 0
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define S_IFCHR __S_IFCHR
#define SCNiLEAST32 "i"
#define EBFONT 59
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define __S_ISTYPE(mode,mask) (((mode) & __S_IFMT) == (mask))
#define __cleanup_fct_attribute 
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define CPU_ALLOC(count) __CPU_ALLOC (count)
#define __DBL_MAX_EXP__ 1024
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define __WCHAR_WIDTH__ 32
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define SEGV_ADIDERR SEGV_ADIDERR
#define _BITS_WCHAR_H 1
#define MDBX_LOCKING_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_LOCKING)
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define PRIo8 "o"
#define SCNiLEAST64 __PRI64_PREFIX "i"
#define CLONE_PIDFD 0x00001000
#define ETOOMANYREFS 109
#define _POSIX_TZNAME_MAX 6
#define __itimerspec_defined 1
#define _POSIX_SSIZE_MAX 32767
#define SA_RESTART 0x10000000
#define _PATH_BSHELL "/bin/sh"
#define __ARM_FP_FAST 1
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define SCNdFAST16 __PRIPTR_PREFIX "d"
#define _POSIX_MAX_CANON 255
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define __USECONDS_T_TYPE __U32_TYPE
#define MDBX_PGWALK_MAIN ((const char *)((ptrdiff_t)0))
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define EXFULL 54
#define DKBUF_MAX 511
#define _LINUX_STDDEF_H 
#define SCNdFAST32 __PRIPTR_PREFIX "d"
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define _PC_VDISABLE _PC_VDISABLE
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define OFF_T_MAX ((sizeof(off_t) > 4 ? INT64_MAX : INT32_MAX) & ~(size_t)0xffff)
#define _SC_BARRIERS _SC_BARRIERS
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define __SIG_ATOMIC_WIDTH__ 32
#define MAXHOSTNAMELEN 64
#define st_atime st_atim.tv_sec
#define __stub___compat_uselib 
#define RWH_WRITE_LIFE_NOT_SET 0
#define _POSIX_CPUTIME 0
#define si_stime _sifields._sigchld.si_stime
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define __PRIPTR_PREFIX "l"
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define O_TMPFILE __O_TMPFILE
#define PRIu8 "u"
#define __SIZEOF_WINT_T__ 4
#define __anonymous_struct_extension__ __extension__
#define PRIxLEAST8 "x"
#define SCNdFAST64 __PRI64_PREFIX "d"
#define __f32x(x) x ##f32x
#define _PATH_CONSOLE "/dev/console"
#define ENOTNAM 118
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define INITIAL_TXNID (MIN_TXNID + NUM_METAS - 1)
#define _LINUX_CLOSE_RANGE_H 
#define __U16_TYPE unsigned short int
#define CLD_EXITED CLD_EXITED
#define SCNu32 "u"
#define _STDIO_H 1
#define WINT_MAX (4294967295u)
#define ENOSPC 28
#define MDBX_MC_LIVE UINT32_C(0xFE05D5B1)
#define POSIX_MADV_NORMAL 0
#define _BITS_POSIX2_LIM_H 1
#define _POSIX_NAME_MAX 14
#define MDBX_TXN_DIRTY 0x04
#define UINTPTR_MAX (18446744073709551615UL)
#define PRIx8 "x"
#define _PTRDIFF_T 
#define DN_MULTISHOT 0x80000000
#define __ASM_GENERIC_POSIX_TYPES_H 
#define __hot __attribute__((__hot__)) __optimize("O3")
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define __FLT_MIN_EXP__ (-125)
#define MDBX_FATAL_ERROR UINT32_C(0x80000000)
#define WEXITED 4
#define F_GETOWN __F_GETOWN
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define MFD_CLOEXEC 1U
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define powerof2(x) ((((x) - 1) & (x)) == 0)
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define alloca(size) __builtin_alloca (size)
#define PTHREAD_ATTR_NO_SIGMASK_NP (-1)
#define RWF_HIPRI 0x00000001
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define _STATBUF_ST_BLKSIZE 
#define IS_MODIFIABLE(txn,p) ((p)->mp_txnid == (txn)->mt_front)
#define SORT_NETWORK_3(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); } while (0)
#define SORT_NETWORK_4(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); } while (0)
#define SORT_NETWORK_5(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); } while (0)
#define SORT_NETWORK_7(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); } while (0)
#define SORT_NETWORK_9(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); } while (0)
#define __THROWNL __attribute__ ((__nothrow__))
#define __WINT_WIDTH__ 32
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define atomic_fetch_sub(PTR,VAL) __atomic_fetch_sub ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define NBBY CHAR_BIT
#define INT_LEAST32_WIDTH 32
#define PKEY_DISABLE_ACCESS 0x1
#define FASYNC O_ASYNC
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define _NSIG (__SIGRTMAX + 1)
#define ADJ_TIMECONST 0x0020
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __struct_FILE_defined 1
#define _BITS_SIGNUM_ARCH_H 1
#define __INT_LEAST32_MAX__ 0x7fffffff
#define ASAN_POISON_MEMORY_REGION(addr,size) ((void)(addr), (void)(size))
#define MDBX_BUILD_SOURCERY d8797a55c55b5b0b920ac6e230d5563977eb23c86542d570a245d0841b6beb2c_v0_11_6_39_gbb8f4318_dirty
#define WINT_MIN (0u)
#define MAX_TXNID (SAFE64_INVALID_THRESHOLD - 1)
#define __STRINGS_FORTIFIED 1
#define __key_t_defined 
#define SCNxFAST32 __PRIPTR_PREFIX "x"
#define STATX_BLOCKS 0x00000400U
#define mdbx_strdup strdup
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define __unix__ 1
#define SIG_ATOMIC_WIDTH 32
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define __USE_XOPEN2KXSI 1
#define _PATH_SENDMAIL "/usr/sbin/sendmail"
#define _XOPEN_LEGACY 1
#define ST_NODEV ST_NODEV
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define UTIME_NOW ((1l << 30) - 1l)
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define __FLT_EVAL_METHOD_C99__ 0
#define _UTSNAME_MACHINE_LENGTH _UTSNAME_LENGTH
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __USE_UNIX98 1
#define st_ctime st_ctim.tv_sec
#define MDBX_PNL_DISORDERED(first,last) ((first) <= (last))
#define DB_PERSISTENT_FLAGS (MDBX_REVERSEKEY | MDBX_DUPSORT | MDBX_INTEGERKEY | MDBX_DUPFIXED | MDBX_INTEGERDUP | MDBX_REVERSEDUP)
#define WINT_WIDTH 32
#define CLOCK_REALTIME_ALARM 8
#define F_SEAL_SEAL 0x0001
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define TXN_DBI_CHANGED(txn,dbi) ((txn)->mt_dbiseqs[dbi] != (txn)->mt_env->me_dbiseqs[dbi])
#define __FLT64_MIN_EXP__ (-1021)
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define CHAR_MAX UCHAR_MAX
#define THREAD_RESULT void *
#define STATX_ATTR_APPEND 0x00000020
#define FPE_INTDIV FPE_INTDIV
#define SEEK_DATA 3
#define SIZE_WIDTH __WORDSIZE
#define PRIxPTR __PRIPTR_PREFIX "x"
#define MDBX_MMAP_INCOHERENT_FILE_WRITE 0
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define __FDS_BITS(set) ((set)->fds_bits)
#define DEFINE_ENUM_FLAG_OPERATORS(ENUM) 
#define CLONE_PARENT_SETTID 0x00100000
#define __FLT16_MIN_10_EXP__ (-4)
#define WTERMSIG(status) __WTERMSIG (status)
#define MAP_CONCEAL 0
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define TRAP_HWBKPT TRAP_HWBKPT
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IEEE754_DOUBLE_MANTISSA_MASK UINT64_C(0x000FFFFFFFFFFFFF)
#define EIDRM 43
#define ECOMM 70
#define UNALIGNED_POKE_16(ptr,struct,field,value) unaligned_poke_u16(1, (char *)(ptr) + offsetof(struct, field), value)
#define MADV_DONTDUMP 16
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define _POSIX_THREADS 200809L
#define _PC_MAX_CANON _PC_MAX_CANON
#define MDBX_SPLIT_REPLACE MDBX_APPENDDUP
#define ADJ_NANO 0x2000
#define CLONE_CHILD_SETTID 0x01000000
#define INT64_WIDTH 64
#define __USE_POSIX2 1
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define PRIuSIZE PRIuPTR
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define MDBX_TXN_HAS_CHILD 0x10
#define ADJ_STATUS 0x0010
#define _POSIX_V7_ILP32_OFF32 -1
#define RWF_NOWAIT 0x00000008
#define MADV_HWPOISON 100
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define DP_SORT_CMP(first,last) ((first).pgno < (last).pgno)
#define __siginfo_t_defined 1
#define _SYS_UIO_H 1
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define SCNiMAX __PRI64_PREFIX "i"
#define CHAR_MIN 0
#define MOUNTED _PATH_MOUNTED
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define __FLT64_IS_IEC_60559__ 2
#define MDBX_MRESIZE_MAY_MOVE 0x00000100
#define __VERSION__ "11.3.0"
#define SCNoLEAST8 "hho"
#define __IOV_MAX 1024
#define PRIuPTR __PRIPTR_PREFIX "u"
#define S_ISFIFO(mode) __S_ISTYPE((mode), __S_IFIFO)
#define PRIXLEAST16 "X"
#define _SYS_CDEFS_H 1
#define ILL_ILLTRP ILL_ILLTRP
#define RENAME_WHITEOUT (1 << 2)
#define MDBX_TRUST_RTC_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_TRUST_RTC)
#define AT_EACCESS 0x200
#define __dev_t_defined 
#define _POSIX_VERSION 200809L
#define _STDC_PREDEF_H 1
#define _PATHS_H_ 
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define PRIXLEAST32 "X"
#define INT_FAST8_WIDTH 8
#define __INT_WCHAR_T_H 
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define MDBX_VERSION_MINOR 11
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define _UTSNAME_VERSION_LENGTH _UTSNAME_LENGTH
#define DN_RENAME 0x00000010
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define ENOTSOCK 88
#define __ARM_FEATURE_FMA 1
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define O_RDWR 02
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _T_PTRDIFF_ 
#define MAP_TRYFIXED 0
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define __FLT128_MAX_EXP__ 16384
#define PRIXLEAST64 __PRI64_PREFIX "X"
#define mt_next_pgno mt_geo.next
#define __alignof_is_defined 1
#define CPU_SET_S(cpu,setsize,cpusetp) __CPU_SET_S (cpu, setsize, cpusetp)
#define SIGPOLL 29
#define MDBX_CXX17_NOEXCEPT 
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define atomic_store(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define SCHED_ISO 4
#define mdbx_ensure(env,expr) mdbx_ensure_msg(env, expr, #expr)
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define MDBX_ASAN_POISON_MEMORY_REGION(addr,size) do { mdbx_trace("POISON_MEMORY_REGION(%p, %zu) at %u", (void *)(addr), (size_t)(size), __LINE__); ASAN_POISON_MEMORY_REGION(addr, size); } while (0)
#define __FLT32_MANT_DIG__ 24
#define SEGV_ACCERR SEGV_ACCERR
#define SVE_VQ_MAX __SVE_VQ_MAX
#define __HAVE_DISTINCT_FLOAT32X 0
#define MDBX_TXN_FINISHED 0x01
#define __S_IFDIR 0040000
#define __SIZE_T__ 
#define VALGRIND_MEMPOOL_TRIM(h,a,s) 
#define __stub_gtty 
#define MAP_HUGE_SHIFT 26
#define si_value _sifields._rt.si_sigval
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define O_DIRECTORY __O_DIRECTORY
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define P_OVERFLOW 0x04
#define si_utime _sifields._sigchld.si_utime
#define IS_LEAF2(p) unlikely(((p)->mp_flags & P_LEAF2) != 0)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define FFSYNC O_FSYNC
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define TXNID_SORT_CMP(first,last) ((first) > (last))
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP) } }
#define __wur __attribute_warn_unused_result__
#define __FLT16_DIG__ 3
#define NL_TEXTMAX INT_MAX
#define ELOOP 40
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_RECURSIVE_NP) } }
#define CPU_COUNT_S(setsize,cpusetp) __CPU_COUNT_S (setsize, cpusetp)
#define SORT_NETWORK_11(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[8]); } while (0)
#define SORT_NETWORK_13(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); } while (0)
#define SORT_NETWORK_14(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[12], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); } while (0)
#define SORT_NETWORK_15(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[12], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[12], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[13], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); } while (0)
#define _POSIX_RTSIG_MAX 8
#define __off64_t_defined 
#define __F_GETSIG 11
#define PRIdFAST16 __PRIPTR_PREFIX "d"
#define MDBX_DPL_UNSORTED_BACKLOG 16
#define MDBX_CXX01_CONSTEXPR __inline
#define __ORDER_PDP_ENDIAN__ 3412
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define EL2HLT 51
#define STATX_MNT_ID 0x00001000U
#define __ARM_64BIT_STATE 1
#define SVE_VQ_MIN __SVE_VQ_MIN
#define STATX_MTIME 0x00000040U
#define ACCOUNTING 9
#define __socklen_t_defined 
#define _UNISTD_H 1
#define MDBX_ASSUME_MALLOC_OVERHEAD (__SIZEOF_POINTER__ * 2u)
#define __have_pthread_attr_t 1
#define __STDC_FORMAT_MACROS 1
#define SCNi8 "hhi"
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define RTHC_INITIAL_LIMIT 16
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define __INT_FAST8_MAX__ 0x7f
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define MDBX_MAYBE_UNUSED __attribute__((__unused__))
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define _STRUCT_TIMESPEC 1
#define S_IREAD S_IRUSR
#define ADJ_OFFSET 0x0001
#define VALGRIND_DESTROY_MEMPOOL(h) 
#define RAND_MAX 2147483647
#define NUM_METAS 3
#define SS_ONSTACK SS_ONSTACK
#define RWH_WRITE_LIFE_MEDIUM 3
#define __need___va_list 
#define F_SETLK F_SETLK64
#define _SC_PIPE _SC_PIPE
#define UINT16_WIDTH 16
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define __INT16_MAX__ 0x7fff
#define EKEYREJECTED 129
#define _BSD_SIZE_T_ 
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define __FLT_IS_IEC_60559__ 2
#define _SYS_IPC_H 1
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define FPE_CONDTRAP FPE_CONDTRAP
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define _POSIX_QLIMIT 1
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define UNALIGNED_PEEK_8(ptr,struct,field) peek_u8((const uint8_t *)(ptr) + offsetof(struct, field))
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define __HAVE_DISTINCT_FLOAT128 0
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define MDBX_TXN_BLOCKED (MDBX_TXN_FINISHED | MDBX_TXN_ERROR | MDBX_TXN_HAS_CHILD)
#define CLOCK_THREAD_CPUTIME_ID 3
#define SEM_FAILED ((sem_t *) 0)
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define STA_MODE 0x4000
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define MDBX_LOCK_MAGIC ((MDBX_MAGIC << 8) + MDBX_LOCK_VERSION)
#define __F_GETOWN_EX 16
#define PROT_BTI 0x10
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ERRORCHECK_NP) } }
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define ADJ_OFFSET_SS_READ 0xa001
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define O_NOATIME __O_NOATIME
#define _PATH_SHADOW "/etc/shadow"
#define IOV_MAX __IOV_MAX
#define C_SUB 0x04
#define __ARM_ARCH_PROFILE 65
#define _T_SIZE 
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define SCHED_RESET_ON_FORK 0x40000000
#define __UINTMAX_C(c) c ## UL
#define O_SYNC 04010000
#define _POSIX_C_SOURCE 200809L
#define PAGETYPE(p) ((p)->mp_flags & (P_BRANCH | P_LEAF | P_LEAF2 | P_OVERFLOW))
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define VALGRIND_MAKE_MEM_UNDEFINED(a,s) 
#define F_SEAL_FUTURE_WRITE 0x0010
#define ENAVAIL 119
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define SIGCONT 18
#define MADV_FREE 8
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define PRIu16 "u"
#define _PC_NAME_MAX _PC_NAME_MAX
#define _LP64 1
#define __blksize_t_defined 
#define atomic_init(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_RELAXED)
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define EMFILE 24
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define F_SETSIG __F_SETSIG
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define _LFS64_LARGEFILE 1
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __WCHAR_MAX __WCHAR_MAX__
#define __GLIBC_USE_ISOC2X 1
#define DBI_USRVALID 0x20
#define __INT8_MAX__ 0x7f
#define _LFS64_ASYNCHRONOUS_IO 1
#define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ADAPTIVE_NP) } }
#define IPC_PRIVATE ((__key_t) 0)
#define _ANSI_STDDEF_H 
#define PRIu32 "u"
#define __va_arg_pack() __builtin_va_arg_pack ()
#define _LFS64_STDIO 1
#define __iovec_defined 1
#define FALLOC_FL_KEEP_SIZE 0x01
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define LOCK_WRITE 128
#define CPU_ZERO(cpusetp) __CPU_ZERO_S (sizeof (cpu_set_t), cpusetp)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define MDBX_DISABLE_GNU_SOURCE 0
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define _PATH_DEFPATH "/usr/bin:/bin"
#define ESR_MAGIC 0x45535201
#define HAVE_STRUCT_IOVEC 1
#define MDBX_DATA_MAGIC_LEGACY_COMPAT ((MDBX_MAGIC << 8) + MDBX_PNL_ASCENDING * 64 + 2)
#define SCNoMAX __PRI64_PREFIX "o"
#define LOCK_MAND 32
#define INTPTR_MIN (-9223372036854775807L-1)
#define INT8_C(c) c
#define ENOMEDIUM 123
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define DVAL_DEBUG(x) ("-")
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define PRIu64 __PRI64_PREFIX "u"
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define __UWORD_TYPE unsigned long int
#define TRAP_BRKPT TRAP_BRKPT
#define F_OFD_SETLK 37
#define TRAP_UNK TRAP_UNK
#define O_NDELAY O_NONBLOCK
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __AARCH64EL__ 1
#define MAP_POPULATE 0x08000
#define __FLT32X_MIN_EXP__ (-1021)
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define MADV_DOFORK 11
#define __S_IFCHR 0020000
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define RUNNING_ON_VALGRIND (0)
#define SCHED_BATCH 3
#define STA_FLL 0x0008
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define PRIxLEAST16 "x"
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __timer_t_defined 1
#define __WCLONE 0x80000000
#define SHRT_MAX __SHRT_MAX__
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define me_lfd me_lck_mmap.fd
#define MREMAP_DONTUNMAP 4
#define PRIxLEAST32 "x"
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define EROFS 30
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define ADJ_FREQUENCY 0x0002
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define INT32_C(c) c
#define MDBX_STRINGIFY_HELPER(x) #x
#define CURSOR_STACK 32
#define SHRT_WIDTH 16
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define S_IXGRP (S_IXUSR >> 3)
#define F_DUPFD_CLOEXEC 1030
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define C_UNTRACK 0x10
#define TTY_NAME_MAX 32
#define ELIBACC 79
#define __glibc_objsize0(__o) __bos0 (__o)
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define _POSIX_TIMERS 200809L
#define DBI_FRESH MDBX_DBI_FRESH
#define PRIxFAST16 __PRIPTR_PREFIX "x"
#define L_INCR SEEK_CUR
#define MDBX_LOCK_VERSION 4
#define __unix 1
#define TRAP_BRANCH TRAP_BRANCH
#define MDBX_THREAD_RTHC_ZERO 0
#define _BITS_PTHREADTYPES_COMMON_H 1
#define PRIX16 "X"
#define __UINT_FAST16_TYPE__ long unsigned int
#define DBI_CREAT MDBX_DBI_CREAT
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define _POSIX_RAW_SOCKETS 200809L
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define PRIxFAST32 __PRIPTR_PREFIX "x"
#define __PRAGMA_REDEFINE_EXTNAME 1
#define va_end(v) __builtin_va_end(v)
#define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
#define MADV_UNMERGEABLE 13
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define __FLT16_DECIMAL_DIG__ 5
#define _STRINGS_H 1
#define MDBX_PGWALK_GC ((const char *)((ptrdiff_t)-1))
#define SI_MESGQ SI_MESGQ
#define __F_SETOWN 8
#define PRIX32 "X"
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define MDBX_TXL_GRANULATE 32
#define __ATOMIC_CONSUME 1
#define __BLKSIZE_T_TYPE __S32_TYPE
#define __INT_LEAST16_MAX__ 0x7fff
#define container_of(ptr,type,member) ((type *)((char *)(ptr) - offsetof(type, member)))
#define pthread_cleanup_pop(execute) __clframe.__do_it = (execute); } while (0)
#define MDBX_DPL_GAP_FOR_EDGING 2
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define EDEADLK 35
#define STATX_MODE 0x00000002U
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define MDBX_USE_COPYFILERANGE 1
#define __FAST_MATH__ 1
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define PRIxFAST64 __PRI64_PREFIX "x"
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define htole16(x) __uint16_identity (x)
#define SIGCHLD 17
#define _PATH_MNTTAB "/etc/fstab"
#define _PATH_UTMPX _PATH_UTMP
#define MDBX_DEBUG 0
#define __INT16_TYPE__ short int
#define ENV_CHANGEABLE_FLAGS (MDBX_SAFE_NOSYNC | MDBX_NOMETASYNC | MDBX_DEPRECATED_MAPASYNC | MDBX_NOMEMINIT | MDBX_COALESCE | MDBX_PAGEPERTURB | MDBX_ACCEDE)
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define PRIX64 __PRI64_PREFIX "X"
#define SEGV_BNDERR SEGV_BNDERR
#define MAX_PAGESIZE MDBX_MAX_PAGESIZE
#define ADJ_SETOFFSET 0x0100
#define MDBX_ENV_CHECKPID_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_ENV_CHECKPID)
#define IS_BRANCH(p) (((p)->mp_flags & P_BRANCH) != 0)
#define htole32(x) __uint32_identity (x)
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define F_WRLCK 1
#define XATTR_NAME_MAX 255
#define PAGEHDRSZ ((unsigned)offsetof(MDBX_page, mp_ptrs))
#define SIGSYS 31
#define CSIGNAL 0x000000ff
#define linux 1
#define ENXIO 6
#define SA_NOCLDSTOP 1
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define SCNdMAX __PRI64_PREFIX "d"
#define PAGEROOM(pagesize) ((pagesize)-PAGEHDRSZ)
#define ____FILE_defined 1
#define _IOLBF 1
#define ILL_PRVREG ILL_PRVREG
#define PDP_ENDIAN __PDP_ENDIAN
#define htole64(x) __uint64_identity (x)
#define OLD_TIME 4
#define FPE_FLTINV FPE_FLTINV
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define MDBX_THREAD_RTHC_COUNTED 2
#define SA_INTERRUPT 0x20000000
#define MOD_ESTERROR ADJ_ESTERROR
#define O_LARGEFILE __O_LARGEFILE
#define __FLT32_MIN_10_EXP__ (-37)
#define MDBX_END_UPDATE 0x10
#define __GNUC_MINOR__ 3
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define __FLT32X_DIG__ 15
#define _VA_LIST_ 
#define __EXCEPTIONS 1
#define __UINT8_TYPE__ unsigned char
#define SCNuFAST16 __PRIPTR_PREFIX "u"
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define _SC_PII_XTI _SC_PII_XTI
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define PRIXLEAST8 "X"
#define ENAMETOOLONG 36
#define CLD_STOPPED CLD_STOPPED
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DBL_HAS_QUIET_NAN__ 1
#define BOOL_WIDTH 1
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define MDBX_USE_OFDLOCKS_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_USE_OFDLOCKS)
#define DKBUF char _kbuf[DKBUF_MAX * 4 + 2]
#define __FLT16_HAS_INFINITY__ 1
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define SA_STACK SA_ONSTACK
#define BUS_ADRERR BUS_ADRERR
#define CPU_CLR_S(cpu,setsize,cpusetp) __CPU_CLR_S (cpu, setsize, cpusetp)
#define CONCAT(a,b) a ##b
#define EVEN(n) (((n) + 1U) & -2)
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define MAX_MAPSIZE MAX_MAPSIZE64
#define MDBX_READERS_LIMIT 32767
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define __FLT16_MANT_DIG__ 11
#define RWF_DSYNC 0x00000002
#define __bitwise __bitwise__
#define __WCHAR_TYPE__ unsigned int
#define SCNuPTR __PRIPTR_PREFIX "u"
#define __SIZEOF_FLOAT__ 4
#define __SLONGWORD_TYPE long int
#define MDBX_BUILD_FLAGS " -fexceptions -fno-semantic-interposition -fno-common -ggdb -Wno-unknown-pragmas -ffunction-sections -fdata-sections -Wall -Wextra -flto -fno-fat-lto-objects -fuse-linker-plugin -flto-odr-type-merging -O3 -DNDEBUG LIBMDBX_EXPORTS MDBX_BUILD_SHARED_LIBRARY=1 -ffast-math -fvisibility=hidden"
#define C_EOF 0x02
#define __S_IFMT 0170000
#define MDBX_BUILD_COMPILER "cc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
#define S_ISBLK(mode) __S_ISTYPE((mode), __S_IFBLK)
#define __pic__ 2
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define __S_IFLNK 0120000
#define __ARM_ARCH_8A 1
#define IPC_SET 1
#define __stub_chflags 
#define SCNxPTR __PRIPTR_PREFIX "x"
#define M_TOP_PAD -2
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define EDOTDOT 73
#define MAX_WRITE UINT32_C(0x3fff0000)
#define __FLT32_DECIMAL_DIG__ 9
#define __O_DIRECT 0200000
#define MADV_COLD 20
#define __USE_POSIX 1
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define CLONE_NEWIPC 0x08000000
#define BUFSIZ 8192
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define P_LEAF2 0x20
#define VALGRIND_MAKE_MEM_NOACCESS(a,s) 
#define __FLT_MAX_10_EXP__ 38
#define _WCHAR_T_DECLARED 
#define MAP_SYNC 0x80000
#define CLONE_UNTRACED 0x00800000
#define MAP_SHARED 0x01
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define WNOWAIT 0x01000000
#define PRIXFAST8 "X"
#define _PATH_UTMP "/var/run/utmp"
#define __ASM_GENERIC_PARAM_H 
#define mdbx_log_enabled(msg) (msg < MDBX_LOG_VERBOSE && msg <= mdbx_loglevel)
#define _SC_2_PBS _SC_2_PBS
#define P_BRANCH 0x01
#define MDBX_USE_SYNCFILERANGE 1
#define _FCNTL_H 1
#define SCNoFAST16 __PRIPTR_PREFIX "o"
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define PRIXMAX __PRI64_PREFIX "X"
#define EPROTONOSUPPORT 93
#define UINT_MAX (INT_MAX * 2U + 1U)
#define ADJ_TICK 0x4000
#define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
#define _BITS_STDINT_INTN_H 1
#define __TIMESIZE 64
#define RADIXSORT_IMPL(NAME,TYPE,EXTRACT_KEY,BUFFER_PREALLOCATED,END_GAP) __hot static bool NAME ##_radixsort(TYPE *const begin, const unsigned length) { TYPE *tmp; if (BUFFER_PREALLOCATED) { tmp = begin + length + END_GAP; } else { tmp = mdbx_malloc(sizeof(TYPE) * length); if (unlikely(!tmp)) return false; } unsigned key_shift = 0, key_diff_mask; do { struct { unsigned a[256], b[256]; } counters; memset(&counters, 0, sizeof(counters)); key_diff_mask = 0; unsigned prev_key = EXTRACT_KEY(begin) >> key_shift; TYPE *r = begin, *end = begin + length; do { const unsigned key = EXTRACT_KEY(r) >> key_shift; counters.a[key & 255]++; counters.b[(key >> 8) & 255]++; key_diff_mask |= prev_key ^ key; prev_key = key; } while (++r != end); unsigned ta = 0, tb = 0; for (unsigned i = 0; i < 256; ++i) { const unsigned ia = counters.a[i]; counters.a[i] = ta; ta += ia; const unsigned ib = counters.b[i]; counters.b[i] = tb; tb += ib; } r = begin; do { const unsigned key = EXTRACT_KEY(r) >> key_shift; tmp[counters.a[key & 255]++] = *r; } while (++r != end); if (unlikely(key_diff_mask < 256)) { memcpy(begin, tmp, (char *)end - (char *)begin); break; } end = (r = tmp) + length; do { const unsigned key = EXTRACT_KEY(r) >> key_shift; begin[counters.b[(key >> 8) & 255]++] = *r; } while (++r != end); key_shift += 16; } while (key_diff_mask >> 16); if (!(BUFFER_PREALLOCATED)) mdbx_free(tmp); return true; }
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define SCNoFAST32 __PRIPTR_PREFIX "o"
#define __SIGRTMAX 64
#define SIGCLD SIGCHLD
#define __USE_LARGEFILE64 1
#define __FLT16_HAS_QUIET_NAN__ 1
#define SCNuMAX __PRI64_PREFIX "u"
#define __FLT_MAX_EXP__ 128
#define SYNC_FILE_RANGE_WRITE 2
#define __ASM_SVE_CONTEXT_H 
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define MOD_MAXERROR ADJ_MAXERROR
#define MDBX_DISABLE_PAGECHECKS 0
#define _PATH_MAILDIR "/var/mail"
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define ST_NODIRATIME ST_NODIRATIME
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __SVE_VQ_BYTES 16
#define SCNd64 __PRI64_PREFIX "d"
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define _STATFS_F_FRSIZE 
#define _POSIX_SEM_VALUE_MAX 32767
#define __GLIBC_MINOR__ 35
#define __UINT_LEAST32_TYPE__ unsigned int
#define SIGRTMIN (__libc_current_sigrtmin ())
#define SCNu16 "hu"
#define _XBS5_ILP32_OFFBIG -1
#define CLOCK_BOOTTIME 7
#define FNDELAY O_NDELAY
#define PRIiSIZE PRIiPTR
#define __LDBL_MIN_EXP__ (-16381)
#define CMP2INT(a,b) (((b) > (a)) ? -1 : (a) > (b))
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define MDBX_DATASIGN_WEAK 1u
#define __BIT_TYPES_DEFINED__ 1
#define _POSIX_VDISABLE '\0'
#define FD_SETSIZE __FD_SETSIZE
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define stdout stdout
#define NL_SETMAX INT_MAX
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define INTPTR_WIDTH __WORDSIZE
#define __INT_LEAST8_MAX__ 0x7f
#define SIGUSR1 10
#define mdbx_debug_extra_print(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_EXTRA)) mdbx_debug_log(MDBX_LOG_EXTRA, NULL, 0, fmt, __VA_ARGS__); } while (0)
#define __FLT32X_MAX_10_EXP__ 308
#define alignas _Alignas
#define STATX__RESERVED 0x80000000U
#define STA_NANO 0x2000
#define __SIGRTMIN 32
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define MAP_GROWSDOWN 0x00100
#define SHIFT_MDBX_NODUPDATA_TO_MDBX_NOOVERWRITE 1
#define O_RDONLY 00
#define MAIN_DBI 1
#define mdbx_error(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_ERROR)) mdbx_debug_log(MDBX_LOG_ERROR, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define CPU_ISSET_S(cpu,setsize,cpusetp) __CPU_ISSET_S (cpu, setsize, cpusetp)
#define SCNu64 __PRI64_PREFIX "u"
#define _BITS_SIGNUM_GENERIC_H 1
#define EMSGSIZE 90
#define MDBX_ENABLE_PGOP_STAT 1
#define __ASM_POSIX_TYPES_H 
#define __stub_stty 
#define __FLT32_MIN_EXP__ (-125)
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define RWH_WRITE_LIFE_NONE 1
#define MDBX_PS_MODIFY 1
#define _SIZET_ 
#define STATX_ATTR_COMPRESSED 0x00000004
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define __UINT8_C(c) c
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define __cookie_io_functions_t_defined 1
#define __S_IFSOCK 0140000
#define MAP_HUGE_MASK 0x3f
#define __UINT64_TYPE__ long unsigned int
#define __has_feature(x) (0)
#define _PTHREAD_H 1
#define __stub___compat_query_module 
#define __ARM_NEON 1
#define _SC_REGEXP _SC_REGEXP
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define F_SETLKW F_SETLKW64
#define MADV_POPULATE_WRITE 23
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define _SC_IOV_MAX _SC_IOV_MAX
#define _SC_PASS_MAX _SC_PASS_MAX
#define SCNiFAST8 "hhi"
#define __PRI64_PREFIX "l"
#define _SC_LONG_BIT _SC_LONG_BIT
#define __stack_t_defined 1
#define _POSIX_MAPPED_FILES 200809L
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 01000
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define MDBX_PS_LAST 8
#define __Wpedantic_format_voidptr(ARG) __Wpedantic_format_voidptr(ARG)
#define IEEE754_DOUBLE_MANTISSA_SIZE 52
#define F_DUPFD 0
#define MDBX_ASAN_UNPOISON_MEMORY_REGION(addr,size) do { mdbx_trace("UNPOISON_MEMORY_REGION(%p, %zu) at %u", (void *)(addr), (size_t)(size), __LINE__); ASAN_UNPOISON_MEMORY_REGION(addr, size); } while (0)
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define SEGV_ADIPERR SEGV_ADIPERR
#define PRIiMAX __PRI64_PREFIX "i"
#define TXN_FLAGS (MDBX_TXN_FINISHED | MDBX_TXN_ERROR | MDBX_TXN_DIRTY | MDBX_TXN_SPILLS | MDBX_TXN_HAS_CHILD)
#define __PID_T_TYPE __S32_TYPE
#define STATX_ATTR_IMMUTABLE 0x00000010
#define _STATBUF_ST_NSEC 
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX _SC_AIO_MAX
#define __FLT64_HAS_DENORM__ 1
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define ENOTCONN 107
#define STA_PPSFREQ 0x0002
#define PRIdLEAST8 "d"
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define _PATH_VARTMP "/var/tmp/"
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define S_IFLNK __S_IFLNK
#define _POSIX_UIO_MAXIOV 16
#define P_tmpdir "/tmp"
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _POSIX_MESSAGE_PASSING 200809L
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define __WORDSIZE_TIME64_COMPAT32 0
#define EPFNOSUPPORT 96
#define INT_WIDTH 32
#define ESRMNT 69
#define DEAD_PROCESS 8
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define MADV_RANDOM 1
#define LIBMDBX_H 
#define _POSIX2_BC_BASE_MAX 99
#define PTHREAD_ONCE_INIT 0
#define __DBL_DECIMAL_DIG__ 17
#define MDBX_PS_ROOTONLY 2
#define _POSIX_MQ_PRIO_MAX 32
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define _SIZE_T 
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define INT_LEAST64_WIDTH 64
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define MNTOPT_NOAUTO "noauto"
#define CPU_SET(cpu,cpusetp) __CPU_SET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define MDBX_DATANAME "/mdbx.dat"
#define MDBX_PGWALK_META ((const char *)((ptrdiff_t)-2))
#define SA_NOMASK SA_NODEFER
#define __BIG_ENDIAN 4321
#define F_EXLCK 4
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_BITSPERLONG_H 
#define BOOL_MAX 1
#define stderr stderr
#define NCARGS 131072
#define MDBX_TXN_SPILLS 0x08
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define SI_KERNEL SI_KERNEL
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define _FILE_OFFSET_BITS 64
#define __SIZEOF_WCHAR_T__ 4
#define __INTMAX_WIDTH__ 64
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _POSIX_REENTRANT_FUNCTIONS 1
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define F_OFD_SETLKW 38
#define __ORDER_BIG_ENDIAN__ 4321
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define STATX_ATTR_DAX 0x00200000
#define C_SKIPORD 0x800
#define __UINT32_C(c) c ## U
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define MDBX_PNL_END(pl) (&(pl)[MDBX_PNL_SIZE(pl) + 1])
#define PRIdFAST32 __PRIPTR_PREFIX "d"
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define EISCONN 106
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define S_ISLNK(mode) __S_ISTYPE((mode), __S_IFLNK)
#define SIGEV_THREAD SIGEV_THREAD
#define __ATOMIC_RELEASE 3
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define CPU_OR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, |)
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define EUSERS 87
#define _VA_LIST_T_H 
#define ST_SYNCHRONOUS ST_SYNCHRONOUS
#define DN_MODIFY 0x00000002
#define CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) __CPU_EQUAL_S (setsize, cpusetp1, cpusetp2)
#define STATX_ATTR_NODUMP 0x00000040
#define __PIC__ 2
#define _PATH_DEV "/dev/"
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define PRIdFAST64 __PRI64_PREFIX "d"
#define __UINT_FAST32_TYPE__ long unsigned int
#define _LINUX_PARAM_H 
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define O_NOFOLLOW __O_NOFOLLOW
#define POLL_ERR POLL_ERR
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SVE_VL_MAX __SVE_VL_MAX
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define MDBX_LOCKING_AUTO 
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define MDBX_LOCKING_POSIX2001 2001
#define __fsfilcnt_t_defined 
#define me_map me_dxb_mmap.dxb
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define __FP_FAST_FMA 1
#define MDBX_PNL_LEAST(pl) MDBX_PNL_LAST(pl)
#define F_SET_FILE_RW_HINT 1038
#define SA_NOCLDWAIT 2
#define __va_list__ 
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX_ASYNC_IO 1
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define ERFKILL 132
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define P_BAD 0x10
#define __INT32_TYPE__ int
#define MAP_FIXED 0x10
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MANT_DIG__ 24
#define MDBX_PNL_ASCENDING 0
#define __INT_LEAST32_WIDTH__ 32
#define va_start(v,l) __builtin_va_start(v,l)
#define EPROTOTYPE 91
#define __SWORD_TYPE long int
#define MCL_CURRENT 1
#define be16toh(x) __bswap_16 (x)
#define EL3HLT 46
#define _BITS_POSIX1_LIM_H 1
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define MIN_PAGENO NUM_METAS
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define UINT8_C(c) c
#define _____fpos64_t_defined 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define FAPPEND O_APPEND
#define SVE_VL_MIN __SVE_VL_MIN
#define __INT_FAST16_WIDTH__ 64
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define _POSIX_V7_ILP32_OFFBIG -1
#define PRIiLEAST8 "i"
#define __LDBL_REDIR2_DECL(name) 
#define ELIBBAD 80
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define _CS_V7_ENV _CS_V7_ENV
#define ESTRPIPE 86
#define SORT_IMPL(NAME,EXPECT_LOW_CARDINALITY_OR_PRESORTED,TYPE,CMP) static __inline bool NAME ##_is_sorted(const TYPE *first, const TYPE *last) { while (++first <= last) if (CMP(first[0], first[-1])) return false; return true; } typedef struct { TYPE *lo, *hi; } NAME ##_stack; static __hot void NAME(TYPE *const begin, TYPE *const end) { NAME ##_stack stack[sizeof(unsigned) * CHAR_BIT], *top = stack; TYPE *hi = end - 1; TYPE *lo = begin; while (true) { const ptrdiff_t len = hi - lo; if (len < 16) { SORT_INNER(TYPE, CMP, lo, hi + 1, len + 1); if (unlikely(top == stack)) break; SORT_POP(lo, hi); continue; } TYPE *mid = lo + (len >> 1); SORT_CMP_SWAP(TYPE, CMP, *lo, *mid); SORT_CMP_SWAP(TYPE, CMP, *mid, *hi); SORT_CMP_SWAP(TYPE, CMP, *lo, *mid); TYPE *right = hi - 1; TYPE *left = lo + 1; while (1) { while (CMP(*left, *mid)) ++left; while (CMP(*mid, *right)) --right; if (unlikely(left > right)) { if (EXPECT_LOW_CARDINALITY_OR_PRESORTED) { if (NAME ##_is_sorted(lo, right)) lo = right + 1; if (NAME ##_is_sorted(left, hi)) hi = left; } break; } SORT_SWAP(TYPE, *left, *right); mid = (mid == left) ? right : (mid == right) ? left : mid; ++left; --right; } if (right - lo > hi - left) { SORT_PUSH(lo, right); lo = left; } else { SORT_PUSH(left, hi); hi = right; } } if (mdbx_audit_enabled()) { for (TYPE *scan = begin + 1; scan < end; ++scan) assert(CMP(scan[-1], scan[0])); } }
#define __glibc_clang_prereq(maj,min) 0
#define _SC_SIGNALS _SC_SIGNALS
#define ECONNREFUSED 111
#define _XOPEN_LIM_H 1
#define si_call_addr _sifields._sigsys._call_addr
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define _RWLOCK_INTERNAL_H 
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define UINT_FAST8_WIDTH 8
#define __DBL_MAX_10_EXP__ 308
#define __hidden __attribute__((__visibility__("hidden")))
#define UINT16_MAX (65535)
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define __USE_XOPEN_EXTENDED 1
#define _POSIX_TRACE_LOG -1
#define __INT16_C(c) c
#define MDBX_64BIT_CAS_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_64BIT_CAS)
#define __ASM_PARAM_H 
#define __ARM_ARCH_ISA_A64 1
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define _STATFS_F_NAMELEN 
#define MS_INVALIDATE 2
#define _SC_THREADS _SC_THREADS
#define C_DEL 0x08
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SIG_IGN ((__sighandler_t) 1)
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define METAPAGE_END(env) METAPAGE(env, NUM_METAS)
#define __PTRDIFF_TYPE__ long int
#define mdbx_warning(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_WARN)) mdbx_debug_log(MDBX_LOG_WARN, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define __USE_FILE_OFFSET64 1
#define errno (*__errno_location ())
#define EADV 68
#define CORE_DBS 2
#define METAPAGE(env,n) page_meta(pgno2page(env, n))
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define _BITS_STAT_H 1
#define CPU_AND_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, &)
#define MAX_MAPSIZE32 UINT32_C(0x7f000000)
#define IEEE754_DOUBLE_EXPONENTA_MAX 0x7FF
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define SORT_NETWORK_6(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); } while (0)
#define MDBX_LOCKING_WIN32FILES -1
#define ENOPKG 65
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define _BITS_FLOATN_H 
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define NODE_ADD_FLAGS (F_DUPDATA | F_SUBDATA | MDBX_RESERVE | MDBX_APPEND)
#define STA_PLL 0x0001
#define __STDC_LIMIT_MACROS 1
#define atomic_thread_fence(MO) __atomic_thread_fence (MO)
#define __UINTPTR_TYPE__ long unsigned int
#define MDBX_DPL_PREALLOC_FOR_RADIXSORT 1
#define IPC_INFO 3
#define CLD_KILLED CLD_KILLED
#define _STATBUF_ST_RDEV 
#define roundup(x,y) (__builtin_constant_p (y) && powerof2 (y) ? (((x) + (y) - 1) & ~((y) - 1)) : ((((x) + ((y) - 1)) / (y)) * (y)))
#define __bitwise__ 
#define __SVE_NUM_PREGS 16
#define __LDBL_MIN_10_EXP__ (-4931)
#define O_PATH __O_PATH
#define _SC_FIFO _SC_FIFO
#define LINEAR_SEARCH_CASE(N) case N: if (dl->items[dl->length - N + 1].pgno == pgno) return dl->length - N + 1; __fallthrough
#define MAX_MAPSIZE64 ((MAX_PAGENO + 1) * (uint64_t)MAX_PAGESIZE)
#define isset(a,i) ((a)[(i)/NBBY] & (1<<((i)%NBBY)))
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define _SC_SPAWN _SC_SPAWN
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define SCNoLEAST64 __PRI64_PREFIX "o"
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define MDBX_PNL_EXTRACT_KEY(ptr) (P_INVALID - *(ptr))
#define SIG_SETMASK 2
#define MDBX_CXX11_CONSTEXPR_VAR const
#define PRIo16 "o"
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define _POSIX_OPEN_MAX 20
#define _POSIX_LOGIN_NAME_MAX 9
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define __FLT128_DECIMAL_DIG__ 36
#define ENV_CHANGELESS_FLAGS (MDBX_NOSUBDIR | MDBX_RDONLY | MDBX_WRITEMAP | MDBX_NOTLS | MDBX_NORDAHEAD | MDBX_LIFORECLAIM | MDBX_EXCLUSIVE)
#define IS_OVERFLOW(p) unlikely(((p)->mp_flags & P_OVERFLOW) != 0)
#define ENOTUNIQ 76
#define _GETOPT_CORE_H 1
#define _MALLOC_H 1
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define SIG_ATOMIC_MIN (-2147483647-1)
#define F_SUBDATA 0x02
#define _SC_STREAMS _SC_STREAMS
#define __WALL 0x40000000
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define PRIoMAX __PRI64_PREFIX "o"
#define __FLT_MIN_10_EXP__ (-37)
#define RUN_LVL 1
#define AT_EMPTY_PATH 0x1000
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _ASM_GENERIC_TYPES_H 
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define MDBX_PNL_ORDERED(first,last) ((first) > (last))
#define INT_LEAST16_MAX (32767)
#define ASAN_UNPOISON_MEMORY_REGION(addr,size) ((void)(addr), (void)(size))
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define _GNU_SOURCE 
#define _POSIX_SAVED_IDS 1
#define PRIxMAX __PRI64_PREFIX "x"
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define __P(args) args
#define MDBX_BUILD_SHARED_LIBRARY 1
#define _POSIX_BARRIERS 200809L
#define __alignas_is_defined 1
#define PRIXFAST16 __PRIPTR_PREFIX "X"
#define __ATOMIC_ACQ_REL 4
#define __U32_TYPE unsigned int
#define MEGABYTE ((size_t)1 << 20)
#define __UINT64_C(c) c ## UL
#define DB_VALID 0x8000
#define _POSIX2_LINE_MAX 2048
#define _STDLIB_H 1
#define _T_WCHAR 
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define _BITS_FLOATN_COMMON_H 
#define PRIXFAST32 __PRIPTR_PREFIX "X"
#define S_ISCHR(mode) __S_ISTYPE((mode), __S_IFCHR)
#define mdbx_trace(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_TRACE)) mdbx_debug_log(MDBX_LOG_TRACE, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define si_timerid _sifields._timer.si_tid
#define __FLT32X_MAX_EXP__ 1024
#define ____sigset_t_defined 
#define MFD_ALLOW_SEALING 2U
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define _PATH_CSHELL "/bin/csh"
#define _PATH_KLOG "/proc/kmsg"
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define M_NLBLKS 2
#define MDBX_RUNTIME_FLAGS_INIT ((MDBX_DEBUG) > 0) * MDBX_DBG_ASSERT + ((MDBX_DEBUG) > 1) * MDBX_DBG_AUDIT
#define O_NOCTTY 0400
#define AIO_PRIO_DELTA_MAX 20
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define IS_SPILLED(txn,p) ((p)->mp_txnid == (txn)->mt_txnid)
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define __ARM_SIZEOF_WCHAR_T 4
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define atomic_flag_test_and_set_explicit(PTR,MO) __atomic_test_and_set ((PTR), (MO))
#define SIGALRM 14
#define PRIXFAST64 __PRI64_PREFIX "X"
#define M_MMAP_THRESHOLD -3
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 0
#define __uid_t_defined 
#define atomic_flag_clear_explicit(PTR,MO) __atomic_clear ((PTR), (MO))
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define LLONG_WIDTH 64
#define __UINT_LEAST8_TYPE__ unsigned char
#define EUNATCH 49
#define INT_LEAST16_MIN (-32767-1)
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define __flexarr []
#define _SC_LINE_MAX _SC_LINE_MAX
#define SEGV_PKUERR SEGV_PKUERR
#define _SCHED_H 1
#define RTSIG_MAX 32
#define MDBX_USE_OFDLOCKS_AUTO 
#define _BITS_SETJMP_H 1
#define _POSIX_PRIORITIZED_IO 200809L
#define __stub_fchflags 
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define PTHREAD_CANCELED ((void *) -1)
#define _BITS_TIME_H 1
#define O_ACCMODE 0003
#define __FSWORD_T_TYPE __SWORD_TYPE
#define SIG_HOLD ((__sighandler_t) 2)
#define EAFNOSUPPORT 97
#define atomic_compare_exchange_strong_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 0, (SUC), (FAIL)); })
#define _STDDEF_H_ 
#define _BITS_STDIO2_H 1
#define __must_check_result __attribute__((__warn_unused_result__))
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define VALGRIND_DISABLE_ADDR_ERROR_REPORTING_IN_RANGE(a,s) 
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define __flatten __attribute__((__flatten__))
#define __S_ISUID 04000
#define PRIiLEAST16 "i"
#define INT16_C(c) c
#define __WINT_MAX__ 0xffffffffU
#define _SC_2_C_DEV _SC_2_C_DEV
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define MDBX_CXX14_CONSTEXPR __inline
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define MQ_PRIO_MAX 32768
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define STATX_BASIC_STATS 0x000007ffU
#define MDBX_CPU_WRITEBACK_INCOHERENT 1
#define _GETOPT_POSIX_H 1
#define XCURSOR_INITED(mc) ((mc)->mc_xcursor && ((mc)->mc_xcursor->mx_cursor.mc_flags & C_INITIALIZED))
#define _XOPEN_SOURCE 700
#define _POSIX2_BC_DIM_MAX 2048
#define UINT_LEAST32_WIDTH 32
#define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
#define EILSEQ 84
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ESPIPE 29
#define _POSIX_TTY_NAME_MAX 9
#define __USE_LARGEFILE 1
#define SI_DETHREAD SI_DETHREAD
#define __OFF_T_MATCHES_OFF64_T 1
#define PRIdMAX __PRI64_PREFIX "d"
#define __WCHAR_MAX__ 0xffffffffU
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define _SYS_UTSNAME_H 1
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define INT16_MAX (32767)
#define atomic_sub32(p,v) atomic_add32(p, 0 - (v))
#define MADV_MERGEABLE 12
#define SCHED_IDLE 5
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __S_IREAD 0400
#define ADJ_ESTERROR 0x0008
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
#define __GCC_IEC_559 0
#define F_GETOWN_EX __F_GETOWN_EX
#define CLONE_THREAD 0x00010000
#define MDBX_c11a_ro(type,ptr) (&(ptr)->c11a)
#define _IOFBF 0
#define MDBX_c11a_rw(type,ptr) (&(ptr)->c11a)
#define LOCK_READ 64
#define _POSIX2_BC_STRING_MAX 1000
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define SIGXCPU 24
#define __FLT64_DECIMAL_DIG__ 17
#define atomic_exchange(PTR,VAL) atomic_exchange_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define F_GETPIPE_SZ 1032
#define ADJ_MICRO 0x1000
#define __has_warning(x) (0)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define FNONBLOCK O_NONBLOCK
#define XATTR_SIZE_MAX 65536
#define _UTSNAME_RELEASE_LENGTH _UTSNAME_LENGTH
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define SCHED_DEADLINE 6
#define ILL_BADIADDR ILL_BADIADDR
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define EOWNERDEAD 130
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define POLL_MSG POLL_MSG
#define INT16_MIN (-32767-1)
#define __FINITE_MATH_ONLY__ 1
#define si_overrun _sifields._timer.si_overrun
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define MOD_TIMECONST ADJ_TIMECONST
#define __sched_priority sched_priority
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define FALLOC_FL_ZERO_RANGE 0x10
#define SIGEV_NONE SIGEV_NONE
#define EBADR 53
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define STA_PPSERROR 0x0800
#define __pid_t_defined 
#define EL2NSYNC 45
#define ERANGE 34
#define ECANCELED 125
#define _PATH_UNIX "/boot/vmlinux"
#define __SCHAR_MAX__ 0x7f
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _THREAD_MUTEX_INTERNAL_H 1
#define LIBMDBX_INLINE_API(TYPE,NAME,ARGS) LIBMDBX_API TYPE NAME ARGS; static __inline TYPE __inline_ ##NAME ARGS
#define __LDBL_REDIR1(name,proto,alias) name proto
#define NGROUPS_MAX 65536
#define INT_FAST8_MAX (127)
#define MOD_STATUS ADJ_STATUS
#define ETXTBSY 26
#define mdbx_tassert(txn,expr) mdbx_assert((txn)->mt_env, expr)
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define RWH_WRITE_LIFE_EXTREME 5
#define NSIG _NSIG
#define atomic_fetch_and_explicit(PTR,VAL,MO) __atomic_fetch_and ((PTR), (VAL), (MO))
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define htobe16(x) __bswap_16 (x)
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define __SHRT_MAX__ 0x7fff
#define STA_UNSYNC 0x0040
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define ILL_ILLOPC ILL_ILLOPC
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define mdbx_audit_enabled() (0)
#define __FLT64X_MAX_10_EXP__ 4932
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define MDBX_MT_SIGNATURE UINT32_C(0x93D53A31)
#define MAP_TYPE 0x0f
#define SIGTTOU 22
#define INVALID_HANDLE_VALUE (-1)
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define EEXIST 17
#define __LDBL_IS_IEC_60559__ 2
#define _BITS_IPCTYPES_H 1
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)
#define _SYS_STATVFS_H 1
#define NOGROUP (-1)
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define __LITTLE_ENDIAN 1234
#define MAP_EXECUTABLE 0x01000
#define SVE_MAGIC 0x53564501
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define MAX_PAGENO UINT32_C(0x7FFFffff)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define ENOTBLK 15
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define me_lazy_fd me_dxb_mmap.fd
#define htobe64(x) __bswap_64 (x)
#define EINPROGRESS 115
#define UINTPTR_WIDTH __WORDSIZE
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define INT_FAST8_MIN (-128)
#define CLOCK_MONOTONIC_COARSE 6
#define MDBX_END_FREE 0x20
#define CPU_OR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, |)
#define WCHAR_MIN __WCHAR_MIN
#define MDBX_WORDBITS 64
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define MAP_NOSYNC 0
#define SCNo16 "ho"
#define ____gwchar_t_defined 1
#define __UID_T_TYPE __U32_TYPE
#define _POSIX_READER_WRITER_LOCKS 200809L
#define CLONE_SIGHAND 0x00000800
#define __AARCH64_CMODEL_SMALL__ 1
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define EXEC_PAGESIZE 65536
#define _POSIX_AIO_MAX 1
#define INT_FAST32_WIDTH __WORDSIZE
#define PROT_GROWSDOWN 0x01000000
#define MDBX_PS_FIRST 4
#define __LDBL_MAX_EXP__ 16384
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define mdbx_fatal(fmt,...) mdbx_debug_log(MDBX_LOG_FATAL, __func__, __LINE__, fmt "\n", __VA_ARGS__);
#define SCNo32 "o"
#define MDBX_64BIT_CAS 1
#define ENOTEMPTY 39
#define UINT_FAST16_MAX (18446744073709551615UL)
#define PRIdSIZE PRIdPTR
#define __WINT_MIN__ 0U
#define _SC_SHELL _SC_SHELL
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define __linux__ 1
#define F_SEAL_WRITE 0x0008
#define xMDBX_ALLOY 1
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define MOD_CLKB ADJ_TICK
#define __FLT128_MIN_10_EXP__ (-4931)
#define DBI_DIRTY MDBX_DBI_DIRTY
#define __FLT32X_IS_IEC_60559__ 2
#define SCNo64 __PRI64_PREFIX "o"
#define _PATH_RWHODIR "/var/spool/rwho"
#define ADJ_MAXERROR 0x0004
#define _POSIX_AIO_LISTIO_MAX 2
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define _SC_SELECT _SC_SELECT
#define __WCHAR_MIN__ 0U
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_SYNCHRONIZED_IO 200809L
#define UINT_WIDTH 32
#define SHIFT_MDBX_APPENDDUP_TO_MDBX_APPEND 1
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define _POSIX_THREAD_THREADS_MAX 64
#define O_APPEND 02000
#define _SYS_USER_H 1
#define _FORTIFY_SOURCE 2
#define INVALID_TXNID UINT64_MAX
#define MDBX_DATA_VERSION 3
#define MAXPATHLEN PATH_MAX
#define _BITS_SIGEVENT_CONSTS_H 1
#define MDBX_USE_SENDFILE 1
#define _BITS_TIMEX_H 1
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _POSIX_LINK_MAX 8
#define M_PERTURB -6
#define INTMAX_WIDTH 64
#define COLL_WEIGHTS_MAX 255
#define SHIFT_INTEGERDUP_TO_INTEGERKEY 2
#define UIO_MAXIOV __IOV_MAX
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define _DEFAULT_SOURCE 1
#define _LINUX_POSIX_TYPES_H 
#define __USE_EXTERN_INLINES 1
#define PRIuLEAST16 "u"
#define __LOCK_ALIGNMENT 
#define _XOPEN_REALTIME_THREADS 1
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define ETIMEDOUT 110
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __GNUC__ 11
#define SCHED_OTHER 0
#define __SI_ERRNO_THEN_CODE 1
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define EMPTY 0
#define MDBX_PRINTF_ARGS(format_index,first_arg) __attribute__((__format__(__printf__, format_index, first_arg)))
#define ENODATA 61
#define PRIuLEAST32 "u"
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define DN_ACCESS 0x00000001
#define __END_DECLS 
#define _SYS_FILE_H 1
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _ALLOCA_H 1
#define LOGIN_PROCESS 6
#define __BITS_PER_LONG 64
#define __SLONG32_TYPE int
#define SCNuLEAST64 __PRI64_PREFIX "u"
#define __NO_MATH_ERRNO__ 1
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define _SYS_SELECT_H 1
#define S_IRUSR __S_IREAD
#define POSIX_MADV_WILLNEED 3
#define PRIuLEAST64 __PRI64_PREFIX "u"
#define __prefetch(ptr) __builtin_prefetch(ptr)
#define _XOPEN_ENH_I18N 1
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define __jmp_buf_tag_defined 1
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define mdbx_verbose(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_VERBOSE)) mdbx_debug_log(MDBX_LOG_VERBOSE, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define clrbit(a,i) ((a)[(i)/NBBY] &= ~(1<<((i)%NBBY)))
#define EINTR 4
#define PATH_MAX 4096
#define SHRT_MIN (-SHRT_MAX - 1)
#define STA_CLOCKERR 0x1000
#define _IO_EOF_SEEN 0x0010
#define _POSIX_SPAWN 200809L
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define __f64x(x) x ##f64x
#define MDBX_NOSANITIZE_ENUM __attribute((__no_sanitize__("enum")))
#define TMP_MAX 238328
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define __FLT32_MAX_EXP__ 128
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define P_ILL_BITS (~(P_BRANCH | P_LEAF | P_LEAF2 | P_OVERFLOW | P_SPILLED))
#define ILL_ILLADR ILL_ILLADR
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define PROT_NONE 0x0
#define _PATH_KMEM "/dev/kmem"
#define SIGQUIT 3
#define MDBX_DPL_RESERVE_GAP (MDBX_DPL_GAP_FOR_MERGESORT + MDBX_DPL_GAP_FOR_EDGING)
#define SCHAR_WIDTH 8
#define ST_MANDLOCK ST_MANDLOCK
#define mdbx_realloc realloc
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define MDBX_TXN_CHECKOWNER 1
#define _PATH_PRESERVE "/var/lib"
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define MDBX_64BIT_ATOMIC 1
#define MADV_REMOVE 9
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define __UT_HOSTSIZE 256
#define EPERM 1
#define _STDDEF_H 
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __SIZEOF_PTRDIFF_T__ 8
#define MDBX_STRINGIFY(x) MDBX_STRINGIFY_HELPER(x)
#define SCNoLEAST16 "ho"
#define atomic_signal_fence(MO) __atomic_signal_fence (MO)
#define PROT_GROWSUP 0x02000000
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _IONBF 2
#define _SYS_UCONTEXT_H 1
#define MFD_HUGETLB 4U
#define PRIoFAST16 __PRIPTR_PREFIX "o"
#define DEV_BSIZE 512
#define __UINT16_C(c) c
#define MAP_PRIVATE 0x02
#define VALGRIND_MAKE_MEM_DEFINED(a,s) 
#define SCNoLEAST32 "o"
#define _POSIX2_RE_DUP_MAX 255
#define MADV_PAGEOUT 21
#define SCNdLEAST16 "hd"
#define __restrict_arr __restrict
#define PRIoFAST32 __PRIPTR_PREFIX "o"
#define STA_FREQHOLD 0x0080
#define O_WRONLY 01
#define __gnu_linux__ 1
#define O_EXCL 0200
#define _ENDIAN_H 1
#define INT_FAST16_MAX (9223372036854775807L)
#define PRIoLEAST16 "o"
#define atomic_fetch_sub_explicit(PTR,VAL,MO) __atomic_fetch_sub ((PTR), (VAL), (MO))
#define mdbx_malloc malloc
#define STATX_SIZE 0x00000200U
#define MDBX_DATA_MAGIC ((MDBX_MAGIC << 8) + MDBX_PNL_ASCENDING * 64 + MDBX_DATA_VERSION)
#define SCNdLEAST32 "d"
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define atomic_flag_clear(PTR) __atomic_clear ((PTR), __ATOMIC_SEQ_CST)
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define MDBX_OSX_WANNA_DURABILITY 0
#define ST_IMMUTABLE ST_IMMUTABLE
#define ENOSR 63
#define PRIoFAST64 __PRI64_PREFIX "o"
#define __USE_ISOC11 1
#define S_ISDIR(mode) __S_ISTYPE((mode), __S_IFDIR)
#define MADV_NORMAL 0
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define __FLT16_MIN_EXP__ (-13)
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define _BITS_STRING_FORTIFIED_H 1
#define __FLT64_MANT_DIG__ 53
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define SCNxFAST8 "hhx"
#define SCNiFAST64 __PRI64_PREFIX "i"
#define SCNdLEAST64 __PRI64_PREFIX "d"
#define __FLT64X_MANT_DIG__ 113
#define F_SETLEASE 1024
#define MDBX_MMAP_INCOHERENT_CPU_CACHE 0
#define _T_PTRDIFF 
#define sched_priority sched_priority
#define __glibc_has_extension(ext) 0
#define atomic_store_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_store_ptr = (PTR); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (VAL); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (MO)); })
#define atomic_fetch_and(PTR,VAL) __atomic_fetch_and ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define CLONE_FILES 0x00000400
#define L_ctermid 9
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define MDBX_FORCE_ASSERTIONS 0
#define pthread_cleanup_push(routine,arg) do { struct __pthread_cleanup_frame __clframe __attribute__ ((__cleanup__ (__pthread_cleanup_routine))) = { .__cancel_routine = (routine), .__cancel_arg = (arg), .__do_it = 1 };
#define assert_perror(errnum) (__ASSERT_VOID_CAST (0))
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define ESOCKTNOSUPPORT 94
#define DBI_VALID 0x10
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define _PATH_NOLOGIN "/etc/nologin"
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define SSIZE_MAX LONG_MAX
#define MDBX_ME_SIGNATURE UINT32_C(0x9A899641)
#define DBI_STALE MDBX_DBI_STALE
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ELNRNG 48
#define __SI_MAX_SIZE 128
#define __INTPTR_TYPE__ long int
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define _POSIX_HOST_NAME_MAX 255
#define MNTOPT_SUID "suid"
#define __USE_ISOC95 1
#define CONSTEXPR_ENUM_FLAGS_OPERATIONS 1
#define __USE_ISOC99 1
#define O_FSYNC O_SYNC
#define _POSIX_SEM_NSEMS_MAX 256
#define __UINT16_TYPE__ short unsigned int
#define __FLT16_MAX_10_EXP__ 4
#define __GNUC_STDC_INLINE__ 1
#define VALGRIND_CHECK_MEM_IS_ADDRESSABLE(a,s) (0)
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define MOD_FREQUENCY ADJ_FREQUENCY
#define ULLONG_WIDTH 64
#define FPE_FLTDIV FPE_FLTDIV
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _BITS_STDINT_UINTN_H 1
#define DEFAULT_MAPSIZE MEGABYTE
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define MAP_ANON MAP_ANONYMOUS
#define USER_PROCESS 7
#define __DBL_HAS_INFINITY__ 1
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define MDBX_END_SLOT 0x80
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define LONG_BIT 64
#define _POSIX_NGROUPS_MAX 8
#define __USE_XOPEN 1
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define stdin stdin
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define MDBX_ENV_CHECKPID 0
#define EWOULDBLOCK EAGAIN
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define mdbx_notice(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_NOTICE)) mdbx_debug_log(MDBX_LOG_NOTICE, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define _SC_CLK_TCK _SC_CLK_TCK
#define SCHED_FIFO 1
#define _ISOC2X_SOURCE 1
#define _POSIX_PATH_MAX 256
#define PRIi32 "i"
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define MDBX_ALLOC_GC 2
#define UNALIGNED_PEEK_16(ptr,struct,field) unaligned_peek_u16(1, (const char *)(ptr) + offsetof(struct, field))
#define _PATH_DEVDB "/var/run/dev.db"
#define RWF_APPEND 0x00000010
#define be32toh(x) __bswap_32 (x)
#define SORT_POP(low,high) do { --top; low = top->lo; high = top->hi; } while (0)
#define MS_SYNC 4
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define MDBX_LOGGER_DONTCHANGE ((MDBX_debug_func *)(intptr_t)-1)
#define MDBX_END_OPMASK 0x0F
#define __HAVE_FLOAT128X 0
#define _SIZE_T_DEFINED 
#define _WCHAR_T_DEFINED_ 
#define __extern_C 
#define UNALIGNED_PEEK_32(ptr,struct,field) unaligned_peek_u32(1, (const char *)(ptr) + offsetof(struct, field))
#define _POSIX_NO_TRUNC 1
#define ECHILD 10
#define SCNdFAST8 "hhd"
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define atomic_fetch_xor_explicit(PTR,VAL,MO) __atomic_fetch_xor ((PTR), (VAL), (MO))
#define _POSIX_REGEXP 1
#define __f64(x) x ##f64
#define IS_LEAF(p) (((p)->mp_flags & P_LEAF) != 0)
#define DN_CREATE 0x00000004
#define MDBX_TETRAD(a,b,c,d) ((uint32_t)(a) << 24 | (uint32_t)(b) << 16 | (uint32_t)(c) << 8 | (d))
#define _POSIX_RE_DUP_MAX 255
#define F_GET_RW_HINT 1035
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define __O_DSYNC 010000
#define _POSIX_MEMORY_PROTECTION 200809L
#define SA_RESETHAND 0x80000000
#define UNALIGNED_PEEK_64(ptr,struct,field) unaligned_peek_u64(1, (const char *)(ptr) + offsetof(struct, field))
#define __S32_TYPE int
#define NL_MSGMAX INT_MAX
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define F_SETFD 2
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define C_GCFREEZE 0x40
#define __FLT64_MIN_10_EXP__ (-307)
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define BOOT_TIME 2
#define MAP_LOCKED 0x02000
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define _POSIX_DELAYTIMER_MAX 32
#define F_GET_FILE_RW_HINT 1037
#define XCURSOR_REFRESH(mc,mp,ki) do { MDBX_page *xr_pg = (mp); MDBX_node *xr_node = page_node(xr_pg, ki); if ((node_flags(xr_node) & (F_DUPDATA | F_SUBDATA)) == F_DUPDATA) (mc)->mc_xcursor->mx_cursor.mc_pg[0] = node_data(xr_node); } while (0)
#define EREMOTE 66
#define S_BLKSIZE 512
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define UINT_LEAST16_WIDTH 16
#define BUS_OBJERR BUS_OBJERR
#define MADV_KEEPONFORK 19
#define SEGV_MAPERR SEGV_MAPERR
#define VALGRIND_ENABLE_ADDR_ERROR_REPORTING_IN_RANGE(a,s) 
#define __HAVE_FLOAT32 1
#define IS_FROZEN(txn,p) ((p)->mp_txnid < (txn)->mt_txnid)
#define F_ADD_SEALS 1033
#define _PTRDIFF_T_DECLARED 
#define SIBLING_LEFT 0
#define _BITS_STDIO_H 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __glibc_objsize(__o) __bos (__o)
#define STATX_GID 0x00000010U
#define __FLT32_HAS_QUIET_NAN__ 1
#define STATX_ATTR_ENCRYPTED 0x00000800
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __SIZEOF_SIZE_T__ 8
#define mdbx_assert(env,expr) do { if (mdbx_assert_enabled()) mdbx_ensure(env, expr); } while (0)
#define __unreachable() __builtin_unreachable()
#define STATIC_ASSERT_MSG(expr,msg) _Static_assert(expr, msg)
#define SORT_SWAP(TYPE,a,b) do { const TYPE swap_tmp = (a); (a) = (b); (b) = swap_tmp; } while (0)
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define SCNiPTR __PRIPTR_PREFIX "i"
#define __HAVE_FLOAT64 1
#define MDBX_INTERNAL_FUNC static
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX (18446744073709551615UL)
#define PRIiLEAST32 "i"
#define _SC_BASE _SC_BASE
#define UINT64_C(c) c ## UL
#define __kernel_old_uid_t __kernel_old_uid_t
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define DDBI(mc) (((mc)->mc_flags & C_SUB) ? -(int)(mc)->mc_dbi : (int)(mc)->mc_dbi)
#define IEEE754_DOUBLE_MANTISSA_AMAX UINT64_C(0x001FFFFFFFFFFFFF)
#define _GCC_WCHAR_T 
#define S_IWUSR __S_IWRITE
#define PRIiFAST8 "i"
#define SHIFT_REVERSEDUP_TO_REVERSEKEY 5
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define IS_VALID(txn,p) ((p)->mp_txnid <= (txn)->mt_front)
#define PRIiLEAST64 __PRI64_PREFIX "i"
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define F_SETPIPE_SZ 1031
#define ADJ_TAI 0x0080
#define __ARM_FP16_FORMAT_IEEE 1
#define si_uid _sifields._kill.si_uid
#define __WTERMSIG(status) ((status) & 0x7f)
#define M_CHECK_ACTION -5
#define _SC_PAGESIZE _SC_PAGESIZE
#define UINT_LEAST16_MAX (65535)
#define F_UNLCK 2
#define atomic_exchange_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_val = (VAL); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_tmp; __atomic_exchange (__atomic_exchange_ptr, &__atomic_exchange_val, &__atomic_exchange_tmp, (MO)); __atomic_exchange_tmp; })
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define MDBX_USE_OFDLOCKS 1
#define F_SHLCK 8
#define __useconds_t_defined 
#define UINT32_MAX (4294967295U)
#define INT8_MIN (-128)
#define WNOHANG 1
#define CLOCK_TAI 11
#define MDBX_RADIXSORT_THRESHOLD 333
#define _XOPEN_SHM 1
#define atomic_fetch_add(PTR,VAL) __atomic_fetch_add ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __PTRDIFF_T 
#define ENOCSI 50
#define _SC_WORD_BIT _SC_WORD_BIT
#define __HAVE_GENERIC_SELECTION 1
#define MCL_FUTURE 2
#define F_GETFD 1
#define STA_PPSSIGNAL 0x0100
#define _POSIX_CLOCKRES_MIN 20000000
#define F_GETFL 3
#define F_LOCK 1
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define SCNuLEAST8 "hhu"
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define EADDRINUSE 98
#define _VA_LIST 
#define _BITS_STDIO_LIM_H 1
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define PRIx16 "x"
#define M_TRIM_THRESHOLD -1
#define LOCK_NB 4
#define __O_PATH 010000000
#define isclr(a,i) (((a)[(i)/NBBY] & (1<<((i)%NBBY))) == 0)
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __struct_tm_defined 1
#define EUCLEAN 117
#define __WCOREFLAG 0x80
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define PRIx32 "x"
#define __O_DIRECTORY 040000
#define _UTSNAME_DOMAIN_LENGTH _UTSNAME_LENGTH
#define MDBX_PNL_LAST(pl) ((pl)[MDBX_PNL_SIZE(pl)])
#define _SC_ARG_MAX _SC_ARG_MAX
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define INT8_WIDTH 8
#define _POSIX_IPV6 200809L
#define _POSIX_SYMLOOP_MAX 8
#define MDBX_BUILD_TIMESTAMP "2022-12-20T07:42:42Z"
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define _LARGEFILE64_SOURCE 1
#define __MODE_T_TYPE __U32_TYPE
#define F_SETLKW64 7
#define THREAD_CALL 
#define F_GETLK F_GETLK64
#define SIGTRAP 5
#define MDBX_TRUST_RTC 0
#define EISDIR 21
#define __nonnull(params) __attribute_nonnull__ (params)
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _BITS_STRUCT_STAT_H 1
#define F_GETSIG __F_GETSIG
#define PRIx64 __PRI64_PREFIX "x"
#define MDBX_MC_WAIT4EOT UINT32_C(0x90E297A7)
#define O_DSYNC __O_DSYNC
#define MAP_SHARED_VALIDATE 0x03
#define CPU_XOR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, ^)
#define INT_LEAST8_MAX (127)
#define __aarch64__ 1
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define MAP_NORESERVE 0x04000
#define __CFLOAT64X _Complex _Float64x
#define __ARM_FP16_ARGS 1
#define __has_extension(x) (0)
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define si_pkey _sifields._sigfault._bounds._pkey
#define __FLT64X_DECIMAL_DIG__ 36
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define MDBX_ENVCOPY_WRITEBUF 1048576u
#define ST_NOATIME ST_NOATIME
#define INT_LEAST32_MAX (2147483647)
#define _PATH_WTMP "/var/log/wtmp"
#define STA_INS 0x0010
#define FPE_FLTSUB FPE_FLTSUB
#define STATIC_ASSERT(expr) STATIC_ASSERT_MSG(expr, #expr)
#define INT_FAST16_WIDTH __WORDSIZE
#define M_MXFAST 1
#define LOGIN_NAME_MAX 256
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define PKEY_DISABLE_WRITE 0x2
#define CHAR_BIT __CHAR_BIT__
#define UINT_LEAST64_WIDTH 64
#define __attribute_pure__ __attribute__ ((__pure__))
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define XCONCAT(a,b) CONCAT(a,b)
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT64X_IS_IEC_60559__ 2
#define CLOCK_BOOTTIME_ALARM 9
#define PRIuMAX __PRI64_PREFIX "u"
#define MAX_CANON 255
#define __LDBL_DECIMAL_DIG__ 36
#define INT_LEAST8_MIN (-128)
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __USE_GNU 1
#define _PATH_VARDB "/var/lib/misc/"
#define MOD_OFFSET ADJ_OFFSET
#define _PTRDIFF_T_ 
#define F_GET_SEALS 1034
#define pthread_cleanup_pop_restore_np(execute) (void) pthread_setcanceltype (__clframe.__cancel_type, NULL); __clframe.__do_it = (execute); } while (0)
#define __SVE_VQ_MIN 1
#define SCNi16 "hi"
#define NDEBUG 1
#define __stub___compat_bdflush 
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define IS_SHADOWED(txn,p) ((p)->mp_txnid > (txn)->mt_txnid)
#define __USE_XOPEN2K8 1
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define SCNi32 "i"
#define mdbx_calloc calloc
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define __UQUAD_TYPE unsigned long int
#define xMDBX_DEBUG_SPILLING 0
#define ENETDOWN 100
#define ST_NOEXEC ST_NOEXEC
#define st_mtime st_mtim.tv_sec
#define LINE_MAX _POSIX2_LINE_MAX
#define __STRING(x) #x
#define __F_GETOWN 9
#define SIGVTALRM 26
#define F_OFD_GETLK 36
#define __statx_timestamp_defined 1
#define EBUSY 16
#define VALGRIND_MEMPOOL_FREE(h,a) 
#define __INO_T_TYPE __ULONGWORD_TYPE
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define TRAP_TRACE TRAP_TRACE
#define __F_SETOWN_EX 15
#define SCNi64 __PRI64_PREFIX "i"
#define F_ULOCK 0
#define _FALLOC_H_ 
#define _STATFS_F_FLAGS 
#define _SC_TRACE _SC_TRACE
#define _POSIX2_EXPR_NEST_MAX 32
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define alignof _Alignof
#define __ssize_t_defined 
#define EBADFD 77
#define PRIuLEAST8 "u"
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define MDBX_TXN_ERROR 0x02
#define _SC_FSYNC _SC_FSYNC
#define MDBX_TRUST_RTC_AUTO 
#define FPE_INTOVF FPE_INTOVF
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define FD_CLOEXEC 1
#define SCNoPTR __PRIPTR_PREFIX "o"
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define _BITS_UIO_EXT_H 1
#define __GXX_ABI_VERSION 1016
#define __nlink_t_defined 
#define _SC_2_C_BIND _SC_2_C_BIND
#define AT_FDCWD -100
#define _SYS_SIZE_T_H 
#define _SYS_STATFS_H 1
#define INT32_MAX (2147483647)
#define __USE_ATFILE 1
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define __glibc_macro_warning1(message) _Pragma (#message)
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define MDBX_COMMIT_PAGES 64
#define DN_ATTRIB 0x00000020
#define MADV_DODUMP 17
#define STATX_TYPE 0x00000001U
#define __error_t_defined 1
#define __FLT128_DIG__ 33
#define __SCHAR_WIDTH__ 8
#define SCNiLEAST8 "hhi"
#define M_ARENA_MAX -8
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define MDBX_PGL_LIMIT ((size_t)MAX_PAGENO)
#define __FLT32_MAX_10_EXP__ 38
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define ATOMIC_VAR_INIT(VALUE) (VALUE)
#define __INT_FAST32_TYPE__ long int
#define ST_RELATIME ST_RELATIME
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define DN_DELETE 0x00000008
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define S_IWGRP (S_IWUSR >> 3)
#define ST_RDONLY ST_RDONLY
#define SIG_DFL ((__sighandler_t) 0)
#define MADV_DONTFORK 10
#define F_OK 0
#define _PC_PATH_MAX _PC_PATH_MAX
#define _POSIX_MAX_INPUT 255
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define _PC_LINK_MAX _PC_LINK_MAX
#define EDOM 33
#define ESHUTDOWN 108
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define INT32_MIN (-2147483647-1)
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define MAP_STACK 0x20000
#define _PATH_STDPATH "/usr/bin:/bin:/usr/sbin:/sbin"
#define ETIME 62
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define UINT_FAST32_MAX (18446744073709551615UL)
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define F_SETOWN __F_SETOWN
#define P_META 0x08
#define XATTR_LIST_MAX 65536
#define INT_FAST64_WIDTH 64
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define __FLT64X_DIG__ 33
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define MADV_POPULATE_READ 22
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define __INT8_TYPE__ signed char
#define F_SETLK64 6
#define __ELF__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define MDBX_TXN_RO_BEGIN_FLAGS (MDBX_TXN_RDONLY | MDBX_TXN_RDONLY_PREPARE)
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define mdbx_EXPORTS 1
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define _UTSNAME_NODENAME_LENGTH _UTSNAME_LENGTH
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define ELIBSCN 81
#define F_TLOCK 2
#define MDBX_END_EOTDONE 0x40
#define F_GETLEASE 1025
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define INT_LEAST16_WIDTH 16
#define ENV_INTERNAL_FLAGS (MDBX_FATAL_ERROR | MDBX_ENV_ACTIVE | MDBX_ENV_TXKEY)
#define SCNoFAST8 "hho"
#define _BITS_TIME64_H 1
#define _POSIX_FSYNC 200809L
#define CLONE_NEWPID 0x20000000
#define SCNdPTR __PRIPTR_PREFIX "d"
#define __SC_THREAD_STACK_MIN_VALUE 75
#define __ARM_PCS_AAPCS64 1
#define SCNxLEAST16 "hx"
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define _POSIX_ARG_MAX 4096
#define F_DUPDATA 0x04
#define MADV_WILLNEED 3
#define BUS_ADRALN BUS_ADRALN
#define __UINT_FAST64_TYPE__ long unsigned int
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define SCNx16 "hx"
#define CLOCK_MONOTONIC_RAW 4
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define MDBX_CONST_FUNCTION __attribute__((__const__))
#define _ISOC95_SOURCE 1
#define SCNxLEAST32 "x"
#define __f32(x) x ##f32
#define _BITS_SIGSTACK_H 1
#define _POSIX_TIMEOUTS 200809L
#define __FLT_DIG__ 6
#define SCNx32 "x"
#define EOVERFLOW 75
#define SIGPIPE 13
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define O_CLOEXEC __O_CLOEXEC
#define __SIZEOF_PTHREAD_COND_T 48
#define C_UPDATING 0x200
#define SEEK_SET 0
#define xMDBX_TXNID_STEP 1u
#define SYS_NMLN _UTSNAME_LENGTH
#define MDBX_CXX14_CONSTEXPR_VAR const
#define NOFILE 256
#define SCNxLEAST64 __PRI64_PREFIX "x"
#define __sig_atomic_t_defined 1
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define INT_LEAST8_WIDTH 8
#define MADV_DONTNEED 4
#define __FLT32X_MANT_DIG__ 53
#define SCNx64 __PRI64_PREFIX "x"
#define _PATH_LASTLOG "/var/log/lastlog"
#define __stub_setlogin 
#define SORT_PUSH(low,high) do { top->lo = (low); top->hi = (high); ++top; } while (0)
#define MNTTYPE_IGNORE "ignore"
#define MDBX_OSX_WANNA_SPEED 1
#define _SIGNAL_H 
#define _POSIX_SHELL 1
#define IEEE754_DOUBLE_IMPLICIT_LEAD UINT64_C(0x0010000000000000)
#define EVEN_FLOOR(n) ((n) & ~(size_t)1)
#define _GCC_LIMITS_H_ 
#define __S_IEXEC 0100
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define W_OK 2
#define PROT_READ 0x1
#define true (1)
#define _SIZE_T_ 
#define MDBX_PNL_MOST(pl) MDBX_PNL_FIRST(pl)
#define __FLT16_IS_IEC_60559__ 2
#define __FLT16_MAX_EXP__ 16
#define O_CREAT 0100
#define __S_IWRITE 0200
#define _WCHAR_T_H 
#define EPROTO 71
#define ENODEV 19
#define POLL_OUT POLL_OUT
#define INT16_WIDTH 16
#define __stub_revoke 
#define _POSIX_CHOWN_RESTRICTED 0
#define MDBX_BUILD_TYPE "Release"
#define PRIoFAST8 "o"
#define INT_MAX __INT_MAX__
#define likely(cond) __builtin_expect(!!(cond), 1)
#define __stub___compat_create_module 
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define MNTOPT_NOSUID "nosuid"
#define RWF_SYNC 0x00000004
#define _POSIX_MONOTONIC_CLOCK 0
#define P_LEAF 0x02
#define EKEYEXPIRED 127
#define MDBX_ENABLE_REFUND 1
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __UINT_LEAST64_TYPE__ long unsigned int
#define MINSIGSTKSZ SIGSTKSZ
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define __FLT_HAS_QUIET_NAN__ 1
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define mm_psize mm_dbs[FREE_DBI].md_xsize
#define _POSIX_TRACE_INHERIT -1
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define MDBX_DATA_MAGIC_LEGACY_DEVEL ((MDBX_MAGIC << 8) + 255)
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO _PC_SYNC_IO
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define EHWPOISON 133
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define __FLT_HAS_INFINITY__ 1
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define CPU_ZERO_S(setsize,cpusetp) __CPU_ZERO_S (setsize, cpusetp)
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define S_IFSOCK __S_IFSOCK
#define DB_INTERNAL_FLAGS DB_VALID
#define _BSD_PTRDIFF_T_ 
#define PRIXPTR __PRIPTR_PREFIX "X"
#define SIGXFSZ 25
#define MDBX_TXL_INITIAL (MDBX_TXL_GRANULATE - 2 - MDBX_ASSUME_MALLOC_OVERHEAD / sizeof(txnid_t))
#define MDBX_TXL_MAX ((1u << 17) - 2 - MDBX_ASSUME_MALLOC_OVERHEAD / sizeof(txnid_t))
#define MNTOPT_DEFAULTS "defaults"
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define SIGHUP 1
#define __DBL_HAS_DENORM__ 1
#define __INT_FAST32_WIDTH__ 64
#define __statx_defined 1
#define NULL ((void *)0)
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define _XOPEN_SOURCE_EXTENDED 1
#define __CHAR16_TYPE__ short unsigned int
#define AT_SYMLINK_NOFOLLOW 0x100
#define MNTTYPE_NFS "nfs"
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define MDBX_DPL_EXTRACT_KEY(ptr) ((ptr)->pgno)
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define O_ASYNC 020000
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define INT_MIN (-INT_MAX - 1)
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define CLONE_NEWUSER 0x10000000
#define PRIo32 "o"
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define EL3RST 47
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define FREE_DBI 0
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define SI_TKILL SI_TKILL
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define _INTTYPES_H 1
#define _UTMPX_H 1
#define __STDC_VERSION__ 201112L
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define SORT_NETWORK_8(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); } while (0)
#define ENOTDIR 20
#define PRIxSIZE PRIxPTR
#define SEEK_HOLE 4
#define TIMER_ABSTIME 1
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define P_FROZEN 0x8000
#define __ARM_ARCH 8
#define UINTMAX_C(c) c ## UL
#define ILL_BADSTK ILL_BADSTK
#define __PMT(args) args
#define _SYS_TYPES_H 1
#define AT_NO_AUTOMOUNT 0x800
#define ECONNRESET 104
#define MDBX_PNL_IS_EMPTY(pl) (MDBX_PNL_SIZE(pl) == 0)
#define MDBX_LOCK_SUFFIX "-lck"
#define _LINUX_LIMITS_H 
#define _PATH_VARRUN "/var/run/"
#define SIGSTOP 19
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define MAP_FIXED_NOREPLACE 0x100000
#define CLOCK_MONOTONIC 1
#define MDBX_IS_ERROR(rc) ((rc) != MDBX_RESULT_TRUE && (rc) != MDBX_RESULT_FALSE)
#define MDBX_ALLOC_NEW 4
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define MAP_DENYWRITE 0x00800
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define ST_NOSUID ST_NOSUID
#define F_GETLK64 5
#define EBADRQC 56
#define PRIaPGNO PRIu32
#define AT_STATX_FORCE_SYNC 0x2000
#define L_XTND SEEK_END
#define SCNuFAST32 __PRIPTR_PREFIX "u"
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define __KEY_T_TYPE __S32_TYPE
#define __SVE_VQ_MAX 512
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define __F_SETSIG 10
#define CLONE_SYSVSEM 0x00040000
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define ___int_ptrdiff_t_h 
#define __stub___compat_get_kernel_syms 
#define atomic_compare_exchange_strong(PTR,VAL,DES) atomic_compare_exchange_strong_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define MAP_FILE 0
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define SCNuFAST64 __PRI64_PREFIX "u"
#define mdbx_flush_incoherent_cpu_writeback() mdbx_memory_barrier()
#define __FLT64_HAS_INFINITY__ 1
#define false (0)
#define POLL_HUP POLL_HUP
#define _STRING_H 1
#define UINT_FAST32_WIDTH __WORDSIZE
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define DKBUF_DEBUG ((void)(0))
#define WSTOPPED 2
#define __MALLOC_HOOK_VOLATILE volatile
#define _XOPEN_REALTIME 1
#define MLOCK_ONFAULT 1U
#define assert(expr) mdbx_assert(NULL, expr)
#define mdbx_assert_enabled() (0)
#define UNALIGNED_POKE_32(ptr,struct,field,value) unaligned_poke_u32(1, (char *)(ptr) + offsetof(struct, field), value)
#define mdbx_ensure_msg(env,expr,msg) do { if (unlikely(!(expr))) mdbx_assert_fail(env, msg, __func__, __LINE__); } while (0)
#define FILENAME_MAX 4096
#define CLONE_FS 0x00000200
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define __ino_t_defined 
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define __CLOCKID_T_TYPE __S32_TYPE
#define PRIiPTR __PRIPTR_PREFIX "i"
#define ____sigval_t_defined 
#define _POSIX_MEMLOCK_RANGE 200809L
#define __LP64__ 1
#define S_IEXEC S_IXUSR
#define mdbx_sourcery_anchor XCONCAT(mdbx_sourcery_, MDBX_BUILD_SOURCERY)
#define ELIBEXEC 83
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define _POSIX_MQ_OPEN_MAX 8
#define UNALIGNED_POKE_64(ptr,struct,field,value) unaligned_poke_u64(1, (char *)(ptr) + offsetof(struct, field), value)
#define __INT_FAST64_WIDTH__ 64
#define MDBX_ALLOC_CACHE 1
#define CLONE_IO 0x80000000
#define VALGRIND_CHECK_MEM_IS_DEFINED(a,s) (0)
#define unlikely(cond) __builtin_expect(!!(cond), 0)
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define SI_ASYNCIO SI_ASYNCIO
#define __BYTE_ORDER __LITTLE_ENDIAN
#define _BITS_UIO_LIM_H 1
#define P_SUBP 0x40
#define CPU_COUNT(cpusetp) __CPU_COUNT_S (sizeof (cpu_set_t), cpusetp)
#define EADDRNOTAVAIL 99
#define le64toh(x) __uint64_identity (x)
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define VALGRIND_MEMPOOL_CHANGE(h,a,b,s) 
#define STATX_ALL 0x00000fffU
#define MDBX_LOCKING_SYSV 5
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define INT_FAST32_MAX (9223372036854775807L)
#define _PATH_GSHADOW "/etc/gshadow"
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define MDBX_OSX_SPEED_INSTEADOF_DURABILITY 0
#define LIBMDBX_EXPORTS 1
#define __LDBL_REDIR_DECL(name) 
#define MDBX_WITHOUT_MSVC_CRT 0
#define UINT_FAST8_MAX (255)
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define _POSIX_ADVISORY_INFO 200809L
#define BYTE_ORDER __BYTE_ORDER
#define PTRDIFF_WIDTH __WORDSIZE
#define MDBX_FAKE_SPILL_WRITEMAP 1
#define si_band _sifields._sigpoll.si_band
#define UINT8_MAX (255)
#define MDBX_BUILD_TARGET "aarch64-linux-gnu-Linux"
#define _BITS_SIGACTION_H 1
#define STDIN_FILENO 0
#define SI_ASYNCNL SI_ASYNCNL
#define MDBX_MRESIZE_MAY_UNMAP 0x00000200
#define DEFAULT_READERS 61
#define _T_SIZE_ 
#define LLONG_MAX __LONG_LONG_MAX__
#define __CPU_SETSIZE 1024
#define ENOTRECOVERABLE 131
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define atomic_fetch_xor(PTR,VAL) __atomic_fetch_xor ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __WNOTHREAD 0x20000000
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define __INT64_TYPE__ long int
#define EIO 5
#define F_NOTIFY 1026
#define CLOCK_PROCESS_CPUTIME_ID 2
#define ITIMER_REAL ITIMER_REAL
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define ENETUNREACH 101
#define EXDEV 18
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define S_IRGRP (S_IRUSR >> 3)
#define UINT32_C(c) c ## U
#define _POSIX_SYMLINK_MAX 255
#define mdbx_cassert(mc,expr) mdbx_assert((mc)->mc_txn->mt_env, expr)
#define CLONE_NEWCGROUP 0x02000000
#define LTO_ENABLED 
#define __INO64_T_TYPE __UQUAD_TYPE
#define _POSIX_V6_ILP32_OFF32 -1
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define _POSIX_TRACE -1
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define CLONE_DETACHED 0x00400000
#define __WINT_TYPE__ unsigned int
#define MB_LEN_MAX 16
#define __SIZEOF_SHORT__ 2
#define F_SEAL_GROW 0x0004
#define STDOUT_FILENO 1
#define SEM_VALUE_MAX (2147483647)
#define MDBX_TXN_RW_BEGIN_FLAGS (MDBX_TXN_NOMETASYNC | MDBX_TXN_NOSYNC | MDBX_TXN_TRY)
#define __intptr_t_defined 
#define BRANCH_NODE_MAX(pagesize) (EVEN_FLOOR((PAGEROOM(pagesize) - sizeof(indx_t) - NODESIZE) / (3 - 1) - sizeof(indx_t)))
#define INIT_PROCESS 5
#define MOD_TAI ADJ_TAI
#define DP_SEARCH_CMP(dp,id) ((dp).pgno < (id))
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define EREMOTEIO 121
#define _PATH_TMP "/tmp/"
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define AT_STATX_DONT_SYNC 0x4000
#define ENOEXEC 8
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define CLONE_VM 0x00000100
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define EOF (-1)
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __USE_POSIX199309 1
#define __INT_LEAST64_WIDTH__ 64
#define O_DIRECT __O_DIRECT
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define S_ISREG(mode) __S_ISTYPE((mode), __S_IFREG)
#define MDBX_NO_ROOT (MDBX_LAST_ADDED_ERRCODE + 10)
#define SIGTSTP 20
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define __UT_NAMESIZE 32
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define __LDBL_MAX_10_EXP__ 4932
#define _POSIX_SEMAPHORES 200809L
#define __W_CONTINUED 0xffff
#define __ATOMIC_RELAXED 0
#define MADV_NOHUGEPAGE 15
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define SA_ONESHOT SA_RESETHAND
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define MDBX_MC_READY4CLOSE UINT32_C(0x2817A047)
#define MDBX_DPL_GAP_FOR_MERGESORT MDBX_DPL_UNSORTED_BACKLOG
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define ENOSTR 60
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define M_MMAP_MAX -4
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define CLONE_PTRACE 0x00002000
#define SIGKILL 9
#define WITH_CURSOR_TRACKING(mn,act) do { mdbx_cassert(&(mn), mn.mc_txn->mt_cursors != NULL ); mdbx_cassert(&(mn), !cursor_is_tracked(&(mn))); MDBX_cursor mc_dummy; MDBX_cursor **tracking_head = &(mn).mc_txn->mt_cursors[mn.mc_dbi]; MDBX_cursor *tracked = &(mn); if ((mn).mc_flags & C_SUB) { mc_dummy.mc_flags = C_INITIALIZED; mc_dummy.mc_top = 0; mc_dummy.mc_snum = 0; mc_dummy.mc_xcursor = (MDBX_xcursor *)&(mn); tracked = &mc_dummy; } tracked->mc_next = *tracking_head; *tracking_head = tracked; { act; } *tracking_head = tracked->mc_next; } while (0)
#define ESRCH 3
#define __INT_LEAST32_TYPE__ int
#define CHAR_WIDTH 8
#define ECHRNG 44
#define EHOSTDOWN 112
#define _LFS_LARGEFILE 1
#define STA_CLK 0x8000
#define __wchar_t__ 
#define SEEK_END 2
#define LEAF_NODE_MAX(pagesize) (EVEN_FLOOR(PAGEROOM(pagesize) / 2) - sizeof(indx_t))
#define _PATH_TTY "/dev/tty"
#define S_IWOTH (S_IWGRP >> 3)
#define _STDALIGN_H 
#define _ISOC99_SOURCE 1
#define SCNiFAST16 __PRIPTR_PREFIX "i"
#define SIBLING_RIGHT 2
#define PRIoLEAST8 "o"
#define ENOLCK 37
#define ENFILE 23
#define HZ 100
#define _PATH_MAN "/usr/share/man"
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define _XOPEN_UNIX 1
#define USHRT_WIDTH 16
#define SCNiFAST32 __PRIPTR_PREFIX "i"
#define MDBX_64BIT_ATOMIC_CONFIG "AUTO=" MDBX_STRINGIFY(MDBX_64BIT_ATOMIC)
#define be64toh(x) __bswap_64 (x)
#define ENOSYS 38
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define NODESIZE offsetof(MDBX_node, mn_data)
#define M_GRAIN 3
#define MADV_SEQUENTIAL 2
#define __INT_FAST8_TYPE__ signed char
#define _SC_TIMERS _SC_TIMERS
#define CHARCLASS_NAME_MAX 2048
#define _SEMAPHORE_H 1
#define CPU_FREE(cpuset) __CPU_FREE (cpuset)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define MDBX_PNL_ALLOCLEN(pl) ((pl)[-1])
#define _PATH_MEM "/dev/mem"
#define _THREAD_SHARED_TYPES_H 1
#define MIN_PAGESIZE MDBX_MIN_PAGESIZE
#define AT_REMOVEDIR 0x200
#define __f128(x) x ##f128
#define SCNxMAX __PRI64_PREFIX "x"
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define ENV_USABLE_FLAGS (ENV_CHANGEABLE_FLAGS | ENV_CHANGELESS_FLAGS)
#define AT_STATX_SYNC_TYPE 0x6000
#define __HAVE_DISTINCT_FLOAT32 0
#define ENOTSUP EOPNOTSUPP
#define MMAP_OPTION_TRUNCATE 1
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define MREMAP_MAYMOVE 1
#define __FP_FAST_FMAF32x 1
#define R_OK 4
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define FALLOC_FL_PUNCH_HOLE 0x02
#define MAX(a,b) (((a)>(b))?(a):(b))
#define EDEADLOCK EDEADLK
#define CLD_DUMPED CLD_DUMPED
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define PRIxFAST8 "x"
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __ULONG32_TYPE unsigned int
#define FIXME "FIXME: " __FILE__ ", " MDBX_STRINGIFY(__LINE__)
#define STA_PPSJITTER 0x0200
#define si_syscall _sifields._sigsys._syscall
#define UTIME_OMIT ((1l << 30) - 2l)
#define O_RSYNC O_SYNC
#define kill_dependency(Y) __extension__ ({ __auto_type __kill_dependency_tmp = (Y); __kill_dependency_tmp; })
#define CLONE_CHILD_CLEARTID 0x00200000
#define FOPEN_MAX 16
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __suseconds_t_defined 
#define SPLICE_F_NONBLOCK 2
#define WTMPX_FILE _PATH_WTMPX
#define SIGFPE 8
#define STATX_ATTR_MOUNT_ROOT 0x00002000
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define __off_t_defined 
#define __fallthrough __attribute__((__fallthrough__))
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define unix 1
#define S_IWRITE S_IWUSR
#define SIGPWR 30
#define STATX_CTIME 0x00000080U
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define _GCC_SIZE_T 
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define VALGRIND_MEMPOOL_ALLOC(h,a,s) 
#define __U64_TYPE unsigned long int
#define L_SET SEEK_SET
#define _LIBC_LIMITS_H_ 1
#define __USE_XOPEN2K8XSI 1
#define _SYS_STAT_H 1
#define MDBX_HAVE_C11ATOMICS 
#define CPU_AND(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, &)
#define mdbx_debug(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_DEBUG)) mdbx_debug_log(MDBX_LOG_DEBUG, __func__, __LINE__, fmt "\n", __VA_ARGS__); } while (0)
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define ULONG_WIDTH __WORDSIZE
#define _POSIX_V6_ILP32_OFFBIG -1
#define MDBX_CXX11_CONSTEXPR __inline
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define __SIZEOF_SEM_T 32
#define MAP_HUGETLB 0x40000
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define CPU_ALLOC_SIZE(count) __CPU_ALLOC_SIZE (count)
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define __POSIX_FADV_DONTNEED 4
#define __ONCE_FLAG_INIT { 0 }
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define sigcontext_struct sigcontext
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define __LONG_WIDTH__ 64
#define __STDLIB_MB_LEN_MAX 16
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define RTHC_ENVLIST_END ((MDBX_env *)((uintptr_t)50459))
#define __S_IFIFO 0010000
#define __INO_T_MATCHES_INO64_T 1
#define FPE_FLTRES FPE_FLTRES
#define __POSIX_FADV_NOREUSE 5
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 92
#define atomic_compare_exchange_weak_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 1, (SUC), (FAIL)); })
#define MDBX_DEPRECATED_MAPASYNC UINT32_C(0x100000)
#define __GLIBC_USE_IEC_60559_EXT 1
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define UINT_LEAST32_MAX (4294967295U)
#define SCNxLEAST8 "hhx"
#define atomic_fetch_add_explicit(PTR,VAL,MO) __atomic_fetch_add ((PTR), (VAL), (MO))
#define SA_NODEFER 0x40000000
#define F_SETOWN_EX __F_SETOWN_EX
#define __lldiv_t_defined 1
#define PRIo64 __PRI64_PREFIX "o"
#define POLL_PRI POLL_PRI
#define NODEV ((dev_t) -1)
#define SIGILL 4
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define _ASSERT_H 1
#define ENOBUFS 105
#define __time_t_defined 1
#define _SC_INT_MIN _SC_INT_MIN
#define IPC_RMID 0
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define _PATH_VI "/usr/bin/vi"
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define __INTMAX_TYPE__ long int
#define SIGINT 2
#define EFAULT 14
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define MDBX_CLOCK_SIGN UINT32_C(0x8017)
#define SIGIOT SIGABRT
#define WORD_BIT 32
#define META_IS_STEADY(meta) SIGN_IS_STEADY(unaligned_peek_u64_volatile(4, (meta)->mm_datasync_sign))
#define _POSIX_TIMER_MAX 32
#define PRIdFAST8 "d"
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define MDBX_MAGIC UINT64_C( 0x59659DBDEF4C11)
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define CLONE_VFORK 0x00004000
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define sigev_notify_function _sigev_un._sigev_thread._function
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define ____mbstate_t_defined 1
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define PRIoPTR __PRIPTR_PREFIX "o"
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define atomic_load(PTR) atomic_load_explicit (PTR, __ATOMIC_SEQ_CST)
#define INTMAX_C(c) c ## L
#define IPC_NOWAIT 04000
#define ILL_PRVOPC ILL_PRVOPC
#define POSIX_FADV_RANDOM 1
#define SEARCH_IMPL(NAME,TYPE_LIST,TYPE_ARG,CMP) static __always_inline const TYPE_LIST *NAME( const TYPE_LIST *first, unsigned length, const TYPE_ARG item) { const TYPE_LIST *const begin = first, *const end = begin + length; while (length > 3) { const unsigned whole = length; length >>= 1; const TYPE_LIST *const middle = first + length; const unsigned left = whole - length - 1; const bool cmp = CMP(*middle, item); length = cmp ? left : length; first = cmp ? middle + 1 : first; } switch (length) { case 3: if (!CMP(*first, item)) break; ++first; __fallthrough ; case 2: if (!CMP(*first, item)) break; ++first; __fallthrough ; case 1: if (!CMP(*first, item)) break; ++first; __fallthrough ; case 0: break; default: __unreachable(); } if (mdbx_audit_enabled()) { for (const TYPE_LIST *scan = begin; scan < first; ++scan) assert(CMP(*scan, item)); for (const TYPE_LIST *scan = first; scan < end; ++scan) assert(!CMP(*scan, item)); (void)begin, (void)end; } return first; }
#define _STDINT_H 1
#define __FILE_defined 1
#define _MNTENT_H 1
#define __SI_ALIGNMENT 
#define S_ISUID __S_ISUID
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define MDBX_LOCKING_POSIX2008 2008
#define MDBX_PNL_BEGIN(pl) (&(pl)[1])
#define POLL_IN POLL_IN
#define MDBX_NOSPILL 0x8000
#define _LIMITS_H___ 
#define ST_APPEND ST_APPEND
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define SI_TIMER SI_TIMER
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define ELIBMAX 82
#define __noop(...) do {} while(0)
#define static_assert _Static_assert
#define __sigstack_defined 1
#define STATX_BTIME 0x00000800U
#define SPLICE_F_MORE 4
#define __ino64_t_defined 
#define ATOMIC_FLAG_INIT { 0 }
#define PRIi16 "i"
#define __clockid_t_defined 1
#define __fsblkcnt_t_defined 
#define MDBX_LOCKNAME "/mdbx.lck"
#define SORT_NETWORK_10(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); } while (0)
#define __size_t 
#define __FLT128_HAS_DENORM__ 1
#define __ATOMIC_SEQ_CST 5
#define SORT_NETWORK_12(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[8]); } while (0)
#define STATX_INO 0x00000100U
#define PRIdPTR __PRIPTR_PREFIX "d"
#define ENOENT 2
#define atomic_load_explicit(PTR,MO) __extension__ ({ __auto_type __atomic_load_ptr = (PTR); __typeof__ ((void)0, *__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (MO)); __atomic_load_tmp; })
#define SORT_NETWORK_16(TYPE,CMP,begin) do { SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[1]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[12], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[14], begin[15]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[12], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[3]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[13], begin[15]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[15]); SORT_CMP_SWAP(TYPE, CMP, begin[0], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[15]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[13], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[11]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[2]); SORT_CMP_SWAP(TYPE, CMP, begin[4], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[1], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[14]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[2], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[13]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[10], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[5]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[9]); SORT_CMP_SWAP(TYPE, CMP, begin[3], begin[4]); SORT_CMP_SWAP(TYPE, CMP, begin[5], begin[6]); SORT_CMP_SWAP(TYPE, CMP, begin[7], begin[8]); SORT_CMP_SWAP(TYPE, CMP, begin[9], begin[10]); SORT_CMP_SWAP(TYPE, CMP, begin[11], begin[12]); SORT_CMP_SWAP(TYPE, CMP, begin[6], begin[7]); SORT_CMP_SWAP(TYPE, CMP, begin[8], begin[9]); } while (0)
#define FPE_FLTUND FPE_FLTUND
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define PRId16 "d"
#define PRIuFAST64 __PRI64_PREFIX "u"
#define MDBX_CONFIG_H "/libmdbx/build/config.h"
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define __glibc_has_builtin(name) __has_builtin (name)
#define MDBX_EPSILON ((MDBX_val *)((ptrdiff_t)-1))
#define MADV_HUGEPAGE 14
#define SIGTERM 15
#define SPLICE_F_MOVE 1
#define PTHREAD_KEYS_MAX 1024
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define EBADSLT 57
#define __WCHAR_T__ 
#define EMEDIUMTYPE 124
#define EKEYREVOKED 128
#define F_SETFL 4
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define PRId32 "d"
#define mdbx_debug_extra(fmt,...) do { if (mdbx_log_enabled(MDBX_LOG_EXTRA)) mdbx_debug_log(MDBX_LOG_EXTRA, __func__, __LINE__, fmt, __VA_ARGS__); } while (0)
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define _LFS_ASYNCHRONOUS_IO 1
#define __SI_BAND_TYPE long int
#define MAP_ANONYMOUS 0x20
#define __HAVE_DISTINCT_FLOAT64X 0
#define MIN(a,b) (((a)<(b))?(a):(b))
#define LOCK_UN 8
#define M_ARENA_TEST -7
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define __SIZEOF_LONG_LONG__ 8
#define MAP_NONBLOCK 0x10000
#define EHOSTUNREACH 113
#define __USE_DYNAMIC_STACK_SIZE 1
#define C_COPYING 0x100
#define POSIX_FADV_SEQUENTIAL 2
#define SIG_UNBLOCK 1
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define _GCC_PTRDIFF_T 
#define _POSIX_THREAD_KEYS_MAX 128
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define mt_end_pgno mt_geo.now
#define __LDBL_DIG__ 33
#define MNTTYPE_SWAP "swap"
#define LIBMDBX_API __dll_export
#define MDBX_PNL_SIZEOF(pl) ((MDBX_PNL_SIZE(pl) + 1) * sizeof(pgno_t))
#define PRId64 __PRI64_PREFIX "d"
#define _SC_NZERO _SC_NZERO
#define __UT_LINESIZE 32
#define __dll_import 
#define S_IROTH (S_IRGRP >> 3)
#define POSIX_MADV_RANDOM 1
#define __POSIX2_THIS_VERSION 200809L
#define __ldiv_t_defined 1
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define MREMAP_FIXED 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define MDBX_ALLOC_SLOT 8
#define _BITS_CPU_SET_H 1
#define atomic_compare_exchange_weak(PTR,VAL,DES) atomic_compare_exchange_weak_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define S_IFIFO __S_IFIFO
#define SCNuFAST8 "hhu"
#define __WCHAR_T 
#define PRIaTXN PRIi64
#define _UTSNAME_LENGTH 65
#define FPE_FLTUNK FPE_FLTUNK
#define X_OK 1
#define MAXSYMLINKS 20
#define __S_ISGID 02000
