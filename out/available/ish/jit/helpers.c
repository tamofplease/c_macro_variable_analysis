#define __SSP_STRONG__ 3
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define __LDBL_MANT_DIG__ 113
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define __ARM_SIZEOF_WCHAR_T 4
#define __DBL_DECIMAL_DIG__ 17
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define _REGX(n) union { dword_t e ##n ##x; word_t n ##x; struct { byte_t n ##l; byte_t n ##h; }; }
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define _T_WCHAR_ 
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define INT_LEAST16_MIN (-32767-1)
#define __stub___compat_get_kernel_syms 
#define __S64_TYPE long int
#define __FLT128_DIG__ 33
#define __stub_fchflags 
#define __SQUAD_TYPE long int
#define __INTMAX_C(c) c ## L
#define _BSD_SIZE_T_DEFINED_ 
#define __CHAR_BIT__ 8
#define __FSWORD_T_TYPE __SWORD_TYPE
#define __attribute_pure__ __attribute__ ((__pure__))
#define __UINT8_MAX__ 0xff
#define WCHAR_MAX __WCHAR_MAX
#define INT16_C(c) c
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define INT8_MAX (127)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define MISC_H 
#define PDP_ENDIAN __PDP_ENDIAN
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define INT32_MIN (-2147483647-1)
#define __OFF_T_MATCHES_OFF64_T 1
#define __WCHAR_MAX__ 0xffffffffU
#define forceinline inline __attribute__((always_inline))
#define INT16_MAX (32767)
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_IEC_559 2
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define __LITTLE_ENDIAN 1234
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT_EVAL_METHOD__ 0
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define __FLT64_DECIMAL_DIG__ 17
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __ASSERT_VOID_CAST (void)
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __UINT_FAST32_TYPE__ long unsigned int
#define bool _Bool
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define __GID_T_TYPE __U32_TYPE
#define UINT64_C(c) c ## UL
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN (-32767-1)
#define __FINITE_MATH_ONLY__ 0
#define __stub___compat_uselib 
#define __id_t_defined 
#define EMU_H 
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define __FLT32X_MAX_EXP__ 1024
#define __u_char_defined 
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __pid_t_defined 
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define _THREAD_MUTEX_INTERNAL_H 1
#define __LDBL_REDIR1(name,proto,alias) name proto
#define _BITS_TYPES_LOCALE_T_H 1
#define INT_FAST8_MAX (127)
#define _WCHAR_T_DEFINED 
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define __INT8_C(c) c
#define _BITS_TYPES_H 1
#define rdtsc() ({ uint64_t tsc; __asm__ volatile("mrs %0, PMCCNTR_EL0" : "=r" (tsc)); tsc; })
#define __INT_LEAST8_WIDTH__ 8
#define __INTMAX_TYPE__ long int
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define htobe16(x) __bswap_16 (x)
#define NFDBITS __NFDBITS
#define __SHRT_MAX__ 0x7fff
#define __STDC_ISO_10646__ 201706L
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __ARM_FEATURE_IDIV 1
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __FLT64X_MAX_10_EXP__ 4932
#define __LDBL_IS_IEC_60559__ 2
#define __ARM_FP 14
#define INT_FAST16_MAX (9223372036854775807L)
#define __FLT64X_IS_IEC_60559__ 2
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define _str(x) #x
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define __WINT_TYPE__ unsigned int
#define __UINT_LEAST8_MAX__ 0xff
#define SF_RES (1 << 2)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define __UINTMAX_TYPE__ long unsigned int
#define _STDC_PREDEF_H 1
#define CLOCK_MONOTONIC_COARSE 6
#define __linux 1
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __CHAR_UNSIGNED__ 1
#define __UINT32_MAX__ 0xffffffffU
#define __UID_T_TYPE __U32_TYPE
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __AARCH64_CMODEL_SMALL__ 1
#define __SIZE_T 
#define __LDBL_MAX_EXP__ 16384
#define __INT_FAST32_WIDTH__ 64
#define _ATFILE_SOURCE 1
#define __FLT128_MIN_EXP__ (-16381)
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define UINT16_C(c) c
#define __always_inline __inline __attribute__ ((__always_inline__))
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FD_SETSIZE 1024
#define __FLT32X_IS_IEC_60559__ 2
#define __KERNEL_STRICT_NAMES 
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __WCHAR_MIN__ 0U
#define __INT64_C(c) c ## L
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __INT_WCHAR_T_H 
#define __USE_FILE_OFFSET64 1
#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#define sint(size) glue3(int,size,_t)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define __INT_FAST64_WIDTH__ 64
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _DEFAULT_SOURCE 1
#define ZF_FLAG (1 << 6)
#define __attribute_used__ __attribute__ ((__used__))
#define __LOCK_ALIGNMENT 
#define __FLT32X_MANT_DIG__ 53
#define __USER_LABEL_PREFIX__ 
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define _BITS_ENDIANNESS_H 1
#define __FLT32_MAX_10_EXP__ 38
#define __GLIBC__ 2
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define __CONCAT(x,y) x ## y
#define __STDC_HOSTED__ 1
#define CPU_OFFSET(field) offsetof(struct cpu_state, field)
#define __SLONG32_TYPE int
#define _BITS_UINTN_IDENTITY_H 1
#define _SYS_SELECT_H 1
#define __SSIZE_T_TYPE __SWORD_TYPE
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define __GNU_LIBRARY__ 6
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define __FLT32_DIG__ 6
#define __RLIM_T_MATCHES_RLIM64_T 1
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __WCHAR_MAX __WCHAR_MAX__
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define __SHRT_WIDTH__ 16
#define __FLT32_IS_IEC_60559__ 2
#define __DEV_T_TYPE __UQUAD_TYPE
#define __GLIBC_USE_ISOC2X 0
#define ___int_wchar_t_h 
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __nonnull(params) __attribute_nonnull__ (params)
#define le32toh(x) __uint32_identity (x)
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define __GLIBC_USE_IEC_60559_BFP_EXT 0
#define __FLT16_HAS_QUIET_NAN__ 1
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define _ASSERT_H_DECLS 
#define _WCHAR_T_ 
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define __FP_FAST_FMA 1
#define __FLT32X_HAS_INFINITY__ 1
#define __INT32_MAX__ 0x7fffffff
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __SIZEOF_PTHREAD_COND_T 48
#define __FLT16_DIG__ 3
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __STDC_IEC_559__ 1
#define __UINT16_C(c) c
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 0
#define __STDC_IEC_559_COMPLEX__ 1
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __gnu_linux__ 1
#define __USE_XOPEN2K 1
#define __INT16_MAX__ 0x7fff
#define _ENDIAN_H 1
#define __FLT128_IS_IEC_60559__ 2
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __bool_true_false_are_defined 1
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define _BSD_SIZE_T_ 
#define __intptr_t_defined 
#define __FLT16_MIN_EXP__ (-13)
#define __FLT64_MANT_DIG__ 53
#define __attribute_const__ __attribute__ ((__const__))
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define htobe32(x) __bswap_32 (x)
#define __FLT64X_MANT_DIG__ 113
#define _T_PTRDIFF 
#define __GNUC__ 11
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define UINT_LEAST8_MAX (255)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define PF_FLAG (1 << 2)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __daddr_t_defined 
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define __LDBL_MIN_EXP__ (-16381)
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define __STRING(x) #x
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define __FLT64_MAX_10_EXP__ 308
#define __GLIBC_USE_LIB_EXT2 0
#define __USE_ISOC99 1
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define zero_init(type) ((type[1]){}[0])
#define __FLT16_MAX_10_EXP__ 4
#define __DBL_IS_IEC_60559__ 2
#define _GCC_WCHAR_T 
#define be64toh(x) __bswap_64 (x)
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define __DBL_HAS_INFINITY__ 1
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define UINT8_MAX (255)
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define _FEATURES_H 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __DADDR_T_TYPE __S32_TYPE
#define __INTPTR_WIDTH__ 64
#define fallthrough __attribute__((fallthrough))
#define be32toh(x) __bswap_32 (x)
#define __OFF64_T_TYPE __SQUAD_TYPE
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define FLOAT80_H 
#define _SIZE_T_DEFINED 
#define _WCHAR_T_DEFINED_ 
#define __USE_POSIX199506 1
#define EMU_CPU_MEM_H 
#define __LDBL_HAS_DENORM__ 1
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define MEM_WRITE_PTRACE 2
#define __stub_setlogin 
#define has_feature(x) 0
#define must_check __attribute__((warn_unused_result))
#define __FLT128_HAS_INFINITY__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define _GCC_WRAP_STDINT_H 
#define true 1
#define __dev_t_defined 
#define __S32_TYPE int
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define __BIT_TYPES_DEFINED__ 1
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define _BITS_WCHAR_H 1
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __FLT16_DECIMAL_DIG__ 5
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define __FLT_IS_IEC_60559__ 2
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __USECONDS_T_TYPE __U32_TYPE
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __glibc_objsize(__o) __bos (__o)
#define __FLT32_HAS_QUIET_NAN__ 1
#define _T_WCHAR 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define _glue(a,b) a ##b
#define _WCHAR_T 
#define __SIG_ATOMIC_WIDTH__ 32
#define __ARM_ALIGN_MAX_PWR 28
#define SIZE_MAX (18446744073709551615UL)
#define __SIZEOF_WINT_T__ 4
#define __LONG_LONG_WIDTH__ 64
#define __U16_TYPE unsigned short int
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX (4294967295u)
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define UINTPTR_MAX (18446744073709551615UL)
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define _PTRDIFF_T 
#define __ARM_FP16_FORMAT_IEEE 1
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define __FLT_MIN_EXP__ (-125)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define DF_FLAG (1 << 10)
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define _STRUCT_TIMESPEC 1
#define UINT32_MAX (4294967295U)
#define __key_t_defined 
#define __uid_t_defined 
#define __flexarr []
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __THROWNL __attribute__ ((__nothrow__))
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __PTRDIFF_T 
#define __HAVE_GENERIC_SELECTION 1
#define __FLT32X_MIN_EXP__ (-1021)
#define __INT_FAST64_TYPE__ long int
#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#define __ARM_FP16_ARGS 1
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define _ANSI_STDDEF_H 
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define WINT_MIN (0u)
#define __ARM_FEATURE_CLZ 1
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define __unix__ 1
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define CLOCK_REALTIME_COARSE 5
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x), 0)
#define __DBL_HAS_QUIET_NAN__ 1
#define __FLT_EVAL_METHOD_C99__ 0
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __MODE_T_TYPE __U32_TYPE
#define CLOCK_REALTIME_ALARM 8
#define LOG_HANDLER_DPRINTF 1
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define __FLT64_MIN_EXP__ (-1021)
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define __LDBL_DECIMAL_DIG__ 36
#define INT_LEAST8_MAX (127)
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __aarch64__ 1
#define __FLT64_MIN_10_EXP__ (-307)
#define INT8_C(c) c
#define __FDS_BITS(set) ((set)->__fds_bits)
#define __FLT64X_DECIMAL_DIG__ 36
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __INTMAX_WIDTH__ 64
#define INT_LEAST32_MAX (2147483647)
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define __LDBL_HAS_INFINITY__ 1
#define __FLT_DIG__ 6
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define __NO_INLINE__ 1
#define CLOCK_BOOTTIME_ALARM 9
#define __DEC_EVAL_METHOD__ 2
#define __FLT_MANT_DIG__ 24
#define INT_LEAST8_MIN (-128)
#define __FLT16_MIN_10_EXP__ (-4)
#define __VERSION__ "11.3.0"
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __UINT64_C(c) c ## UL
#define _SYS_TYPES_H 1
#define _PTRDIFF_T_ 
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_CDEFS_H 1
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __GXX_ABI_VERSION 1016
#define __USE_XOPEN2K8 1
#define htobe64(x) __bswap_64 (x)
#define __WINT_MAX__ 0xffffffffU
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define _T_PTRDIFF_ 
#define __FLT128_MAX_EXP__ 16384
#define __INO_T_TYPE __ULONGWORD_TYPE
#define be16toh(x) __bswap_16 (x)
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define PF (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf)
#define __struct_tm_defined 1
#define __ssize_t_defined 
#define __FLT32_MANT_DIG__ 24
#define _STDDEF_H 
#define __AARCH64EL__ 1
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#define __SIZE_T__ 
#define __FLT16_MAX_EXP__ 16
#define __stub_gtty 
#define F80_INF ((float80) {.signif = 0x8000000000000000, .exp = 0x7fff, .sign = 0})
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define MEM_READ 0
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define __BIGGEST_ALIGNMENT__ 16
#define _SYS_SIZE_T_H 
#define INT32_MAX (2147483647)
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __INT32_C(c) c
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __wur 
#define UINT_FAST32_MAX (18446744073709551615UL)
#define _STDNORETURN_H 
#define __FLT128_HAS_DENORM__ 1
#define CLOCK_REALTIME 0
#define _BITS_TIME_H 1
#define __SCHAR_WIDTH__ 8
#define __ORDER_PDP_ENDIAN__ 3412
#define __PDP_ENDIAN 3412
#define INT_FAST8_MIN (-128)
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
#define __ARM_64BIT_STATE 1
#define BYTE_ORDER __BYTE_ORDER
#define __INT_FAST32_TYPE__ long int
#define __have_pthread_attr_t 1
#define _BITS_TYPESIZES_H 1
#define CF (cpu->cf)
#define htole32(x) __uint32_identity (x)
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define SIG_ATOMIC_MIN (-2147483647-1)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define _SIZET_ 
#define __SIZE_TYPE__ long unsigned int
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define typecheck(type,x) ({type _x = x; x;})
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __FLT64X_DIG__ 33
#define __ARM_FEATURE_FMA 1
#define __INT8_TYPE__ signed char
#define __ELF__ 1
#define CLOCK_THREAD_CPUTIME_ID 3
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __ASSERT_FUNCTION __extension__ __PRETTY_FUNCTION__
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define bitfield unsigned int
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define _POSIX_C_SOURCE 200809L
#define __ARM_PCS_AAPCS64 1
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define __LDBL_REDIR(name,proto) name proto
#define CLOCK_MONOTONIC_RAW 4
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define str(x) _str(x)
#define AF_OPS (1 << 3)
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define __INT_LEAST64_WIDTH__ 64
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_IEC_60559_BFP__ 201404L
#define __SIZEOF_PTRDIFF_T__ 8
#define __ATOMIC_RELAXED 0
#define CPUID_H 
#define __stub_sigreturn 
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define MEM_WRITE 1
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define CLOCK_TAI 11
#define __restrict_arr __restrict
#define INTPTR_MIN (-9223372036854775807L-1)
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define OF (cpu->of)
#define __UWORD_TYPE unsigned long int
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define __LDBL_DIG__ 33
#define __FLT64_IS_IEC_60559__ 2
#define _SIZE_T_ 
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __FLT16_IS_IEC_60559__ 2
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define _WCHAR_T_H 
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __stub___compat_create_module 
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __USE_ISOC95 1
#define NULL ((void *)0)
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define __U64_TYPE unsigned long int
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define INT32_C(c) c
#define __FLT_MAX_10_EXP__ 38
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define UINT_LEAST16_MAX (65535)
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define __glibc_objsize0(__o) __bos0 (__o)
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __unix 1
#define _BSD_PTRDIFF_T_ 
#define _BITS_PTHREADTYPES_COMMON_H 1
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define __DBL_HAS_DENORM__ 1
#define __UINT_FAST16_TYPE__ long unsigned int
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __CHAR16_TYPE__ short unsigned int
#define __FLT64X_MAX_EXP__ 16384
#define BIG_ENDIAN __BIG_ENDIAN
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define __no_instrument_msan 
#define __SIZE_WIDTH__ 64
#define __BLKSIZE_T_TYPE __S32_TYPE
#define _WCHAR_T_DECLARED 
#define __INT_LEAST16_MAX__ 0x7fff
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define __stub_revoke 
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define ENGINE_JIT 1
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define htole16(x) __uint16_identity (x)
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __STDC_VERSION__ 201112L
#define TIMER_ABSTIME 1
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define __PMT(args) args
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define linux 1
#define CLOCK_MONOTONIC 1
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define htole64(x) __uint64_identity (x)
#define __USE_POSIX2 1
#define __FLT64X_MIN_EXP__ (-16381)
#define noreturn _Noreturn
#define __FLT32_MIN_10_EXP__ (-37)
#define __KEY_T_TYPE __S32_TYPE
#define __FLT32X_DIG__ 15
#define __UINT8_TYPE__ unsigned char
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define __timer_t_defined 1
#define __PTRDIFF_WIDTH__ 64
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define __BEGIN_DECLS 
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define false 0
#define _GCC_MAX_ALIGN_T 
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define ____sigset_t_defined 
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define assert(expr) ((void) sizeof ((expr) ? 1 : 0), __extension__ ({ if (expr) ; else __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION); }))
#define le64toh(x) __uint64_identity (x)
#define __nlink_t_defined 
#define __FLT16_MANT_DIG__ 11
#define __ino_t_defined 
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ unsigned int
#define __CLOCKID_T_TYPE __S32_TYPE
#define __SLONGWORD_TYPE long int
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __ARM_ARCH_8A 1
#define __stub_chflags 
#define __UQUAD_TYPE unsigned long int
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define __BYTE_ORDER __LITTLE_ENDIAN
#define __USE_POSIX 1
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX (9223372036854775807L)
#define __UINT_FAST64_TYPE__ long unsigned int
#define __LDBL_REDIR_DECL(name) 
#define UINT_FAST8_MAX (255)
#define __INT_MAX__ 0x7fffffff
#define SF_FLAG (1 << 7)
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define INT8_MIN (-128)
#define __S16_TYPE short int
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define __itimerspec_defined 1
#define _T_SIZE_ 
#define __TIMESIZE 64
#define __INT64_TYPE__ long int
#define __FLT_MAX_EXP__ 128
#define CLOCK_PROCESS_CPUTIME_ID 2
#define __gid_t_defined 
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define UINT32_C(c) c ## U
#define __ORDER_BIG_ENDIAN__ 4321
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define __FP_FAST_FMAF32 1
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __GLIBC_MINOR__ 35
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define CLOCK_BOOTTIME 7
#define __FD_ELT(d) ((d) / __NFDBITS)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define _BITS_STDINT_UINTN_H 1
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define FD_SETSIZE __FD_SETSIZE
#define AF (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af)
#define __WINT_WIDTH__ 32
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define __INT_LEAST8_MAX__ 0x7f
#define __USE_POSIX199309 1
#define __FLT32X_MAX_10_EXP__ 308
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define __LDBL_MAX_10_EXP__ 4932
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define __stub_stty 
#define __FLT32_MIN_EXP__ (-125)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define ZF_RES (1 << 1)
#define le16toh(x) __uint16_identity (x)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _LP64 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define __UINT8_C(c) c
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define __INT_LEAST32_TYPE__ int
#define __wchar_t__ 
#define __USE_POSIX_IMPLICITLY 1
#define __UINT64_TYPE__ long unsigned int
#define __stub___compat_query_module 
#define __ARM_NEON 1
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define _STDDEF_H_ 
#define __stub___compat_bdflush 
#define __FLT128_HAS_QUIET_NAN__ 1
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define PAGE_BITS 12
#define __UINT_FAST8_TYPE__ unsigned char
#define __INT_FAST8_TYPE__ signed char
#define __PID_T_TYPE __S32_TYPE
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define PAGE_SIZE (1 << PAGE_BITS)
#define PF_RES (1 << 0)
#define __USE_ISOC11 1
#define _THREAD_SHARED_TYPES_H 1
#define __glibc_has_extension(ext) 0
#define __GNUC_STDC_INLINE__ 1
#define __FLT64_HAS_DENORM__ 1
#define __WORDSIZE_TIME64_COMPAT32 0
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define is_gcc(version) (__GNUC__ >= version)
#define __FP_FAST_FMAF32x 1
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define UINT_FAST16_MAX (18446744073709551615UL)
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define _SIZE_T 
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __ULONG32_TYPE unsigned int
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define use(...) __use(0, ##__VA_ARGS__)
#define uint(size) glue3(uint,size,_t)
#define __FLT64X_HAS_INFINITY__ 1
#define __BIG_ENDIAN 4321
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __suseconds_t_defined 
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define __fortify_function __extern_always_inline __attribute_artificial__
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define __off_t_defined 
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define _FILE_OFFSET_BITS 64
#define __SIZEOF_WCHAR_T__ 4
#define unix 1
#define posit assert
#define SF (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf)
#define __mode_t_defined 
#define _GCC_SIZE_T 
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#define __INO64_T_TYPE __UQUAD_TYPE
#define has_attribute __has_attribute
#define __UINT32_C(c) c ## U
#define __size_t__ 
#define _BITS_TIME64_H 1
#define __WINT_MIN__ 0U
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __glibc_has_builtin(name) __has_builtin (name)
#define __ONCE_FLAG_INIT { 0 }
#define glue(a,b) _glue(a, b)
#define _PTRDIFF_T_DECLARED 
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define __INO_T_MATCHES_INO64_T 1
#define _REG(n) union { dword_t e ##n; word_t n; }
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __GLIBC_USE_IEC_60559_EXT 0
#define __fsfilcnt_t_defined 
#define __blkcnt_t_defined 
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define UINT_LEAST32_MAX (4294967295U)
#define ZF (cpu->zf_res ? cpu->res == 0 : cpu->zf)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define UINTMAX_C(c) c ## UL
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define __INT32_TYPE__ int
#define _ASSERT_H 1
#define __SIZEOF_DOUBLE__ 8
#define __time_t_defined 1
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __INT_LEAST32_WIDTH__ 32
#define __SWORD_TYPE long int
#define __SIZEOF_FLOAT__ 4
#define _T_SIZE 
#define UINT8_C(c) c
#define __va_arg_pack() __builtin_va_arg_pack ()
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define __ATOMIC_CONSUME 1
#define __GNUC_MINOR__ 3
#define __strncpy_safe __attribute__((nonstring))
#define __INT_FAST16_WIDTH__ 64
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __LDBL_REDIR2_DECL(name) 
#define INTMAX_C(c) c ## L
#define __glibc_clang_prereq(maj,min) 0
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define BAD_PAGE 0x10000
#define _STDINT_H 1
#define _RWLOCK_INTERNAL_H 
#define __DBL_MAX_10_EXP__ 308
#define UINT16_MAX (65535)
#define __INT16_C(c) c
#define __ARM_ARCH_ISA_A64 1
#define __U32_TYPE unsigned int
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define __STDC__ 1
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define static_assert _Static_assert
#define __PTRDIFF_TYPE__ long int
#define AF_FLAG (1 << 4)
#define __clockid_t_defined 1
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __size_t 
#define __ATOMIC_SEQ_CST 5
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define F80_NAN ((float80) {.signif = 0xc000000000000000, .exp = 0x7fff, .sign = 0})
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define __UINTPTR_TYPE__ long unsigned int
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __linux__ 1
#define __LDBL_MIN_10_EXP__ (-4931)
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __SIZEOF_LONG_LONG__ 8
#define __USE_ATFILE 1
#define _GCC_PTRDIFF_T 
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define PTRDIFF_MAX (9223372036854775807L)
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __FLT_MIN_10_EXP__ (-37)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define glue3(a,b,c) glue(a, glue(b, c))
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define __ORDER_LITTLE_ENDIAN__ 1234
#define INT_LEAST16_MAX (32767)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __P(args) args
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define __fsblkcnt_t_defined 
