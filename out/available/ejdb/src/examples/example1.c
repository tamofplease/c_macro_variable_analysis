#define IW_HTOIL(num_) (num_)
#define IW_HTOIS(num_) (num_)
#define __DECL_SIMD_erff64 
#define __DECL_SIMD_hypot 
#define __SSP_STRONG__ 3
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define IWKV_RDONLY ((iwkv_openflags) 0x02U)
#define __LDBL_MANT_DIG__ 113
#define __DECL_SIMD_acoshf64 
#define M_SQRT1_2 0.70710678118654752440
#define M_PI_4 0.78539816339744830962
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define __ARM_SIZEOF_WCHAR_T 4
#define __DBL_DECIMAL_DIG__ 17
#define __ATOMIC_ACQUIRE 2
#define __DECL_SIMD_asinhl 
#define __FLT128_MAX_10_EXP__ 4932
#define isless(x,y) __builtin_isless(x, y)
#define __DECL_SIMD_cosf32x 
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define _T_WCHAR_ 
#define IWFSM_ALLOC_NO_OVERALLOCATE ((iwfs_fsm_aflags) 0x01U)
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define __DECL_SIMD_expm1f64x 
#define INT_LEAST16_MIN (-32767-1)
#define __CFLOAT64 _Complex _Float64
#define __stub___compat_get_kernel_syms 
#define __S64_TYPE long int
#define __FLT128_DIG__ 33
#define __DECL_SIMD_log1pf64x 
#define __stub_fchflags 
#define __DECL_SIMD_tanhf128 
#define __DECL_SIMD_erfcf128x 
#define __SQUAD_TYPE long int
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define __INTMAX_C(c) c ## L
#define _BITS_FLOATN_COMMON_H 
#define _BSD_SIZE_T_DEFINED_ 
#define __DECL_SIMD_atan2f16 
#define _VA_LIST_T_H 
#define __CHAR_BIT__ 8
#define __FSWORD_T_TYPE __SWORD_TYPE
#define FP_NAN 0
#define OFF_T_MAX ((off_t) ~(((uint64_t) 1) << (8 * sizeof(off_t) - 1)))
#define __attribute_pure__ __attribute__ ((__pure__))
#define __UINT8_MAX__ 0xff
#define __DECL_SIMD_tanhf32 
#define __DECL_SIMD_expf128 
#define iwlog_info2(IW_fmt) iwlog3(IWLOG_INFO, 0, __FILE__, __LINE__, (IW_fmt))
#define WCHAR_MAX __WCHAR_MAX
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define INT16_C(c) c
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define __DECL_SIMD_erfcf64x 
#define INT8_MAX (127)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define INVALIDHANDLE(h__) ((h__) < 0 || (h__) == UINT16_MAX)
#define PDP_ENDIAN __PDP_ENDIAN
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define __DECL_SIMD_sinf 
#define LC_ALL __LC_ALL
#define _XOPEN_SOURCE 700
#define __DECL_SIMD_atan2f128 
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define __DECL_SIMD_atan2f64 
#define IWFS_MMAP_SHARED ((iwfs_ext_mmap_opts_t) 0x00U)
#define INT32_MIN (-2147483647-1)
#define __DECL_SIMD_atanf 
#define __OFF_T_MATCHES_OFF64_T 1
#define iwlog_ecode_debug3(IW_ecode) 
#define IWDB_REALNUM_KEYS ((iwdb_flags_t) 0x10U)
#define __DECL_SIMD_atanh 
#define __DECL_SIMD_sinl 
#define __DECL_SIMD_powf 
#define __DECL_SIMD_exp2f 
#define __DECL_SIMD_powl 
#define __WCHAR_MAX__ 0xffffffffU
#define isgreaterequal(x,y) __builtin_isgreaterequal(x, y)
#define INT16_MAX (32767)
#define __DECL_SIMD_coshf128x 
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define IWFSM_CLEAR_TRIM ((iwfs_fsm_clrfalgs) 0x01U)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_IEC_559 2
#define JB_PTHREADS 1
#define __LITTLE_ENDIAN 1234
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define __FLT32X_DECIMAL_DIG__ 17
#define _IOFBF 0
#define __DECL_SIMD_erff64x 
#define __FLT_EVAL_METHOD__ 0
#define IW_WRITEBV(ptr_,v_,m_) static_assert(sizeof(v_) == 1, "Mismatch v_ size"); (v_) = (m_); memcpy(ptr_, &(v_), 1); (ptr_) += 1
#define _IO_USER_LOCK 0x8000
#define __DECL_SIMD_hypotf64 
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define __DECL_SIMD_log2 
#define JBL_PRINT_PRETTY ((jbl_print_flags_t) 0x01U)
#define IWP_RLOCK ((iwp_lockmode) 0x01U)
#define __FLT64_DECIMAL_DIG__ 17
#define __DECL_SIMD_hypotf 
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define __DECL_SIMD_hypotl 
#define JBL_VCMD_OK ((jbn_visitor_cmd_t) 0x00U)
#define __LC_CTYPE 0
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __HAVE_FLOAT64 1
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __DECL_SIMD_atanhf 
#define __DECL_SIMD_atanhl 
#define __DECL_SIMD_acosf16 
#define __DECL_SIMD_coshf32x 
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __UINT_FAST32_TYPE__ long unsigned int
#define __DECL_SIMD_expf32x 
#define M_E 2.7182818284590452354
#define bool _Bool
#define __CFLOAT128 _Complex _Float128
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define M_LOG10E 0.43429448190325182765
#define __GID_T_TYPE __U32_TYPE
#define UINT64_C(c) c ## UL
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN (-32767-1)
#define IW_WRITELLV(ptr_,v_,m_) static_assert(sizeof(v_) == 8, "Mismatch v_ size"); (v_) = (m_); (v_) = IW_HTOILL(v_); memcpy((ptr_), &(v_), 8); (ptr_) += 8
#define __FINITE_MATH_ONLY__ 0
#define IWFSM_ALLOC_NO_STATS ((iwfs_fsm_aflags) 0x08U)
#define __stub___compat_uselib 
#define __id_t_defined 
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define iwlog_ecode_info(IW_ecode,IW_fmt,...) iwlog2(IWLOG_INFO, (IW_ecode), __FILE__, __LINE__, (IW_fmt), ## __VA_ARGS__)
#define __FLT32X_MAX_EXP__ 1024
#define __DECL_SIMD_atanhf128 
#define __u_char_defined 
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __pid_t_defined 
#define IWFS_OTMP ((iwfs_omode) 0x20U)
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define __DECL_SIMD_sinhf128 
#define __DECL_SIMD_sincos 
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define _THREAD_MUTEX_INTERNAL_H 1
#define __LDBL_REDIR1(name,proto,alias) name proto
#define _BITS_TYPES_LOCALE_T_H 1
#define IW_WRITELV(ptr_,v_,m_) static_assert(sizeof(v_) == 4, "Mismatch v_ size"); (v_) = (m_); (v_) = IW_HTOIL(v_); memcpy(ptr_, &(v_), 4); (ptr_) += 4
#define INT_FAST8_MAX (127)
#define __DECL_SIMD_cbrtf128 
#define _WCHAR_T_DEFINED 
#define ZRET(ret__,val__) ({ __typeof__(val__) v__ = (val__); if (!v__) return ret__; v__; })
#define __INT8_C(c) c
#define _BITS_TYPES_H 1
#define _SYS_TIME_H 1
#define __DECL_SIMD_expf16 
#define __INT_LEAST8_WIDTH__ 8
#define __INTMAX_TYPE__ long int
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define __FP_LOGBNAN_IS_MIN 0
#define htobe16(x) __bswap_16 (x)
#define NFDBITS __NFDBITS
#define __SHRT_MAX__ 0x7fff
#define __STDC_ISO_10646__ 201706L
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __ARM_FEATURE_IDIV 1
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __FLT64X_MAX_10_EXP__ 4932
#define INVALID_HANDLE_VALUE (-1)
#define __DECL_SIMD_log10f 
#define IWDB_VNUM64_KEYS ((iwdb_flags_t) 0x20U)
#define __LDBL_IS_IEC_60559__ 2
#define __ARM_FP 14
#define INT_FAST16_MAX (9223372036854775807L)
#define __FLT64X_IS_IEC_60559__ 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define __DECL_SIMD_acosf64x 
#define __DECL_SIMD_erfcf16 
#define __DECL_SIMD_logf64x 
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define iwlog_info(IW_fmt,...) iwlog2(IWLOG_INFO, 0, __FILE__, __LINE__, (IW_fmt), ## __VA_ARGS__)
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define IW_STATIC 1
#define __WINT_TYPE__ unsigned int
#define __UINT_LEAST8_MAX__ 0xff
#define FP_ILOGBNAN 2147483647
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define __UINTMAX_TYPE__ long unsigned int
#define INT_LEAST8_MAX (127)
#define __HAVE_DISTINCT_FLOAT32X 0
#define _STDC_PREDEF_H 1
#define __linux 1
#define __DECL_SIMD_atan2f 
#define __DECL_SIMD_expm1f128 
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define HUGE_VALL (__builtin_huge_vall ())
#define __OPTIMIZE__ 1
#define __DECL_SIMD_log2f32x 
#define __MATHDECLX(type,function,suffix,args,attrib) __MATHDECL_1(type, function,suffix, args) __attribute__ (attrib); __MATHDECL_1(type, __CONCAT(__,function),suffix, args) __attribute__ (attrib)
#define __unix 1
#define __UINT32_MAX__ 0xffffffffU
#define __UID_T_TYPE __U32_TYPE
#define __DECL_SIMD_erfcf64 
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __AARCH64_CMODEL_SMALL__ 1
#define __SIZE_T 
#define __LDBL_MAX_EXP__ 16384
#define __DECL_SIMD_exp2f128 
#define __INT_FAST32_WIDTH__ 64
#define _ATFILE_SOURCE 1
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define M_PI_2 1.57079632679489661923
#define __FLT128_MIN_EXP__ (-16381)
#define __GNUC_VA_LIST 
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define RCIF(res__,rc__,rcv__,label__) if (res__) { rc__ = (rcv__); goto label__; }
#define __DECL_SIMD_powf128x 
#define __DECL_SIMD_tanhl 
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define UINT16_C(c) c
#define __always_inline __inline __attribute__ ((__always_inline__))
#define RCRET(rc__) if (__builtin_expect((!!(rc__)), 0)) return (rc__)
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __FLT128_MIN_10_EXP__ (-4931)
#define EJDB2_H 
#define __FLT32X_IS_IEC_60559__ 2
#define __KERNEL_STRICT_NAMES 
#define __DECL_SIMD_atanf128x 
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define __DECL_SIMD_expm1f32x 
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __WCHAR_MIN__ 0U
#define __INT64_C(c) c ## L
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __INT_WCHAR_T_H 
#define __DECL_SIMD_tanf64x 
#define __CFLOAT32 _Complex _Float32
#define _FORTIFY_SOURCE 2
#define __USE_FILE_OFFSET64 1
#define __DECL_SIMD_coshf64 
#define FP_NORMAL 4
#define _BITS_LIBM_SIMD_DECL_STUBS_H 1
#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#define IWFS_SYNCDEFAULT ((iwfs_sync_flags) 0x00U)
#define __DECL_SIMD_acosf 
#define IW_READLLV(ptr_,t_,m_) static_assert(sizeof(t_) == 8, "Mismatch t_ size"); (t_) = 0; memcpy(&(t_), ptr_, 8); (m_) = IW_ITOHLL(t_); (ptr_) += 8
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define __INT_FAST64_WIDTH__ 64
#define IWJSON_H 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _DEFAULT_SOURCE 1
#define IWCPU_SSE4_2 0x10
#define __USE_EXTERN_INLINES 1
#define __attribute_used__ __attribute__ ((__used__))
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define __LOCK_ALIGNMENT 
#define __FLT32X_MANT_DIG__ 53
#define __DECL_SIMD_asinhf128 
#define __USER_LABEL_PREFIX__ 
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define EJDB_IDX_UNIQUE ((ejdb_idx_mode_t) 0x01U)
#define _BITS_ENDIANNESS_H 1
#define __LC_MEASUREMENT 11
#define __FLT32_MAX_10_EXP__ 38
#define __GLIBC__ 2
#define __END_DECLS 
#define M_2_PI 0.63661977236758134308
#define FP_ILOGB0 (-2147483647)
#define __DECL_SIMD_powf64x 
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define __CONCAT(x,y) x ## y
#define __STDC_HOSTED__ 1
#define IWFS_OPEN_EXISTING ((iwfs_openstatus) 0x02U)
#define IWFSM_ALLOC_NO_EXTEND ((iwfs_fsm_aflags) 0x02U)
#define __SLONG32_TYPE int
#define _BITS_UINTN_IDENTITY_H 1
#define __MATH_TG(TG_ARG,FUNC,ARGS) (sizeof (TG_ARG) == sizeof (float) ? FUNC ## f ARGS : sizeof (TG_ARG) == sizeof (double) ? FUNC ARGS : FUNC ## l ARGS)
#define _SYS_SELECT_H 1
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __DECL_SIMD_coshf64x 
#define __DECL_SIMD_asinhf 
#define IW_DODEBUG(IW_expr_) 
#define __DECL_SIMD_cosf128 
#define IW_HTOILL(num_) (num_)
#define TMP_MAX 238328
#define ____mbstate_t_defined 1
#define __GNU_LIBRARY__ 6
#define __DECL_SIMD_log1pf32x 
#define __DBL_DIG__ 15
#define __FLT32_DIG__ 6
#define __f32x(x) x ##f32x
#define __RLIM_T_MATCHES_RLIM64_T 1
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define LC_COLLATE __LC_COLLATE
#define __WCHAR_MAX __WCHAR_MAX__
#define _IO_EOF_SEEN 0x0010
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define __DECL_SIMD_atanf64x 
#define JBL_PRINT_CODEPOINTS ((jbl_print_flags_t) 0x02U)
#define __SHRT_WIDTH__ 16
#define __f64x(x) x ##f64x
#define _STDIO_H 1
#define __FLT32_IS_IEC_60559__ 2
#define __DECL_SIMD_atanf64 
#define __DEV_T_TYPE __UQUAD_TYPE
#define __GLIBC_USE_ISOC2X 0
#define ___int_wchar_t_h 
#define IW_ARR_STATIC static
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define iwlog_ecode_verbose2(IW_ecode,IW_fmt) iwlog3(IWLOG_VERBOSE, (IW_ecode), __FILE__, __LINE__, (IW_fmt))
#define iwlog_ecode_verbose3(IW_ecode) iwlog3(IWLOG_VERBOSE, (IW_ecode), __FILE__, __LINE__, ""))
#define __nonnull(params) __attribute_nonnull__ (params)
#define le32toh(x) __uint32_identity (x)
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define __GLIBC_USE_IEC_60559_BFP_EXT 0
#define __FLT16_HAS_QUIET_NAN__ 1
#define __DECL_SIMD_logf32 
#define IWFS_DEFAULT_LOCKMODE (IWP_NOLOCK)
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define _WCHAR_T_ 
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define __USE_XOPEN2K 1
#define __FP_FAST_FMA 1
#define IWDB_COMPOUND_KEYS ((iwdb_flags_t) 0x40U)
#define _VA_LIST_DEFINED 
#define __FLT32X_HAS_INFINITY__ 1
#define __INT32_MAX__ 0x7fffffff
#define __DECL_SIMD_sincosf128 
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __SIZEOF_PTHREAD_COND_T 48
#define __FLT16_DIG__ 3
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __MATHCALLX(function,suffix,args,attrib) __MATHDECLX (_Mdouble_,function,suffix, args, attrib)
#define __STDC_IEC_559__ 1
#define IW_STR(s) #s
#define __UINT16_C(c) c
#define __DECL_SIMD_exp10f64x 
#define IWP_WLOCK ((iwp_lockmode) 0x02U)
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 2
#define __STDC_IEC_559_COMPLEX__ 1
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __DECL_SIMD_sincosf 
#define __DECL_SIMD_sincosl 
#define __gnu_linux__ 1
#define _FEATURES_H 1
#define __DECL_SIMD_hypotf128 
#define __INT16_MAX__ 0x7fff
#define _LARGEFILE_SOURCE 1
#define _ENDIAN_H 1
#define __FLT128_IS_IEC_60559__ 2
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define LC_TIME __LC_TIME
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define __DECL_SIMD_logf16 
#define __bool_true_false_are_defined 1
#define EJDB_IDX_STR ((ejdb_idx_mode_t) 0x04U)
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define _BSD_SIZE_T_ 
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define IW_MIN(x__,y__) ({ __typeof__(x__) x = (x__); __typeof__(y__) y = (y__); x < y ? x : y; })
#define __FLT16_MIN_EXP__ (-13)
#define __FLT64_MANT_DIG__ 53
#define __attribute_const__ __attribute__ ((__const__))
#define __va_list__ 
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define htobe32(x) __bswap_32 (x)
#define IW_READSV(ptr_,t_,m_) static_assert(sizeof(t_) == 2, "Mismatch t_ size"); (t_) = 0; memcpy(&(t_), ptr_, 2); (m_) = IW_ITOHS(t_); (ptr_) += 2
#define __FLT64X_MANT_DIG__ 113
#define __MATHCALL_VEC(function,suffix,args) __SIMD_DECL (__MATH_PRECNAME (function, suffix)) __MATHCALL (function, suffix, args)
#define IWFSM_ALLOC_DEFAULTS ((iwfs_fsm_aflags) 0x00U)
#define L_tmpnam 20
#define __DECL_SIMD_erff32x 
#define IW_CONSTRUCTOR __attribute__((constructor))
#define _T_PTRDIFF 
#define __DECL_SIMD_acosf128x 
#define __GNUC__ 11
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define __DECL_SIMD_sinf32x 
#define UINT_LEAST8_MAX (255)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define __DECL_SIMD_cbrtf16 
#define L_ctermid 9
#define __CFLOAT32X _Complex _Float32x
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __DECL_SIMD_acosf32x 
#define __DECL_SIMD_logf32x 
#define __daddr_t_defined 
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define IW_PATH_STR "/"
#define __LDBL_MIN_EXP__ (-16381)
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define __STRING(x) #x
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define __DECL_SIMD_atan2f128x 
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define __FLT64_MAX_10_EXP__ 308
#define __DECL_SIMD_erf 
#define __USE_ISOC99 1
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define RCA(v__,label__) RCGA(v__, label__)
#define RCB(label__,v__) RCGA(v__, label__)
#define IW_ARR_CONST const
#define RCN(label__,v__) if ((v__) < 0) { rc = iwrc_set_errno(IW_ERROR_ERRNO, errno); goto label__; }
#define __DECL_SIMD_sinhf16 
#define RCR(expr__) ({ iwrc rc__ = (expr__); RCRET(rc__); 0; })
#define RCT(label__,val__) ({ __typeof__(val__) v__ = (val__); if (v__) { rc = iwrc_set_errno(IW_ERROR_THREADING_ERRNO, v__); goto label__; } })
#define __FLT16_MAX_10_EXP__ 4
#define __DBL_IS_IEC_60559__ 2
#define _GCC_WCHAR_T 
#define _BITS_STDINT_UINTN_H 1
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define __DECL_SIMD_tanhf 
#define __DECL_SIMD_sinhf32 
#define __DBL_HAS_INFINITY__ 1
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ITIMER_PROF ITIMER_PROF
#define IWFS_OPEN_FAIL ((iwfs_openstatus) 0x00U)
#define __DECL_SIMD_log10f128 
#define UINT8_MAX (255)
#define __USE_XOPEN 1
#define __DECL_SIMD_erff128 
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define stdin stdin
#define _BITS_STDIO2_H 1
#define __DECL_SIMD_expf32 
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define __DECL_SIMD_tanf32x 
#define __DECL_SIMD_cos 
#define __DADDR_T_TYPE __S32_TYPE
#define JBL_VCMD_TERMINATE ((jbn_visitor_cmd_t) 0x01U)
#define __DECL_SIMD_powf16 
#define __INTPTR_WIDTH__ 64
#define __DECL_SIMD_hypotf64x 
#define IWFSM_STRICT ((iwfs_fsm_openflags) 0x02U)
#define be32toh(x) __bswap_32 (x)
#define __OFF64_T_TYPE __SQUAD_TYPE
#define islessgreater(x,y) __builtin_islessgreater(x, y)
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define __DECL_SIMD_powf32 
#define __HAVE_FLOAT128X 0
#define _SIZE_T_DEFINED 
#define __DECL_SIMD_asinh 
#define IWFSM_NO_TRIM_ON_CLOSE ((iwfs_fsm_openflags) 0x04U)
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define _WCHAR_T_DEFINED_ 
#define __DECL_SIMD_sinf64x 
#define IWFSM_SOLID_ALLOCATED_SPACE ((iwfs_fsm_aflags) 0x10U)
#define __f64(x) x ##f64
#define __USE_POSIX199506 1
#define __LDBL_HAS_DENORM__ 1
#define __DECL_SIMD_logf64 
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define LC_NAME_MASK (1 << __LC_NAME)
#define __stub_setlogin 
#define LC_TIME_MASK (1 << __LC_TIME)
#define __FLT128_HAS_INFINITY__ 1
#define LC_MESSAGES __LC_MESSAGES
#define __FLT32_DECIMAL_DIG__ 9
#define LC_ADDRESS __LC_ADDRESS
#define INFINITY (__builtin_inff ())
#define __DECL_SIMD_powf64 
#define _GCC_WRAP_STDINT_H 
#define iwlog_ecode_info2(IW_ecode,IW_fmt) iwlog3(IWLOG_INFO, (IW_ecode), __FILE__, __LINE__, (IW_fmt))
#define iwlog_ecode_info3(IW_ecode) iwlog3(IWLOG_INFO, (IW_ecode), __FILE__, __LINE__, ""))
#define __DECL_SIMD_acosf32 
#define true 1
#define __dev_t_defined 
#define __S32_TYPE int
#define ZGO(label__,val__) ({ __typeof__(val__) v__ = (val__); if (!v__) goto label__; v__; })
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define __DBL_MAX_EXP__ 1024
#define __DECL_SIMD_log10f128x 
#define __WCHAR_WIDTH__ 32
#define __BIT_TYPES_DEFINED__ 1
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define _BITS_WCHAR_H 1
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __DECL_SIMD_asinf128 
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __FLT16_DECIMAL_DIG__ 5
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define iwlog_ecode_error(IW_ecode,IW_fmt,...) iwlog2(IWLOG_ERROR, (IW_ecode), __FILE__, __LINE__, (IW_fmt), ## __VA_ARGS__)
#define _VA_LIST_ 
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define IWKV_VAL_INCREMENT ((iwkv_opflags) 0x10U)
#define __FLT_IS_IEC_60559__ 2
#define __DECL_SIMD_atanhf32 
#define RCONT(rc__) if (__builtin_expect((!!(rc__)), 0)) continue
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define __DECL_SIMD_atan2 
#define IW_DESTRUCTOR __attribute__((destructor))
#define __USECONDS_T_TYPE __U32_TYPE
#define _BITS_STDIO_H 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __DECL_SIMD_tanhf64x 
#define __glibc_objsize(__o) __bos (__o)
#define __HAVE_FLOAT16 0
#define IWFS_OCREATE ((iwfs_omode) 0x04U)
#define __FLT32_HAS_QUIET_NAN__ 1
#define _T_WCHAR 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define IWFS_OPEN_NEW ((iwfs_openstatus) 0x01U)
#define _WCHAR_T 
#define __SIG_ATOMIC_WIDTH__ 32
#define __ARM_ALIGN_MAX_PWR 28
#define __DECL_SIMD_cosf 
#define __DECL_SIMD_cosh 
#define __DECL_SIMD_cosl 
#define SIZE_MAX (18446744073709551615UL)
#define __SIZEOF_WINT_T__ 4
#define __DECL_SIMD_tanhf128x 
#define iwlog_error2(IW_fmt) iwlog3(IWLOG_ERROR, 0, __FILE__, __LINE__, (IW_fmt))
#define __DECL_SIMD_acosh 
#define __DECL_SIMD_acosl 
#define __DECL_SIMD_exp2f128x 
#define IWCPU_AVX2 0x40
#define __DECL_SIMD_expm1f128x 
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define __U16_TYPE unsigned short int
#define IWFSMFILE_H 
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX (4294967295u)
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define IWKV_TRUNC ((iwkv_openflags) 0x04U)
#define iwlog_ecode_warn2(IW_ecode,IW_fmt) iwlog3(IWLOG_WARN, (IW_ecode), __FILE__, __LINE__, (IW_fmt))
#define UINTPTR_MAX (18446744073709551615UL)
#define iwlog_warn2(IW_fmt) iwlog3(IWLOG_WARN, 0, __FILE__, __LINE__, (IW_fmt))
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define _PTRDIFF_T 
#define IWEXFILE_H 
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define EJDB_IDX_I64 ((ejdb_idx_mode_t) 0x08U)
#define __ARM_FP16_FORMAT_IEEE 1
#define MATH_ERREXCEPT 2
#define __DECL_SIMD_log10 
#define LC_MONETARY __LC_MONETARY
#define __DECL_SIMD_expf64 
#define __FLT_MIN_EXP__ (-125)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define _STRUCT_TIMESPEC 1
#define math_errhandling (MATH_ERRNO | MATH_ERREXCEPT)
#define M_LOG2E 1.4426950408889634074
#define __DECL_SIMD_log2f 
#define __DECL_SIMD_log2l 
#define OFF_T_MIN ((off_t) (((uint64_t) 1) << (8 * sizeof(off_t) - 1)))
#define isnan(x) __builtin_isnan (x)
#define UINT32_MAX (4294967295U)
#define __key_t_defined 
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define __uid_t_defined 
#define __flexarr []
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __THROWNL __attribute__ ((__nothrow__))
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __PTRDIFF_T 
#define __DECL_SIMD_expm1f16 
#define IWXSTR_H 
#define __HAVE_GENERIC_SELECTION 1
#define __FLT32X_MIN_EXP__ (-1021)
#define _LOCALE_H 1
#define LC_MEASUREMENT __LC_MEASUREMENT
#define __INT_FAST64_TYPE__ long int
#define __DECL_SIMD_exp10f32x 
#define __DECL_SIMD_atan2f64x 
#define __ARM_FP16_ARGS 1
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define _ANSI_STDDEF_H 
#define __DECL_SIMD_expm1f32 
#define __DECL_SIMD_cbrtf32 
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define __DECL_SIMD_logf128x 
#define WINT_MIN (0u)
#define EJDB_COLLECTION_NAME_MAX_LEN 255
#define __ARM_FEATURE_CLZ 1
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define __unix__ 1
#define __FP_LOGB0_IS_MIN 0
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __USE_XOPEN2KXSI 1
#define __DECL_SIMD_sinh 
#define __HAVE_DISTINCT_FLOAT64 0
#define __DECL_SIMD_asinf 
#define __DECL_SIMD_asinl 
#define __LP64__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __HAVE_FLOAT32X 1
#define __FLT_EVAL_METHOD_C99__ 0
#define __DECL_SIMD_coshf128 
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __USE_UNIX98 1
#define __MODE_T_TYPE __U32_TYPE
#define EOF (-1)
#define IWDLSNR_H 
#define JBL_VCMD_SKIP_NESTED ((jbn_visitor_cmd_t) 0x02U)
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define __FLT64_MIN_EXP__ (-1021)
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define IWRC(IW_act,IW_rc) { iwrc __iwrc = (IW_act); if (__iwrc) { if (!(IW_rc)) (IW_rc) = __iwrc; else iwlog3(IWLOG_ERROR, __iwrc, __FILE__, __LINE__, ""); } }
#define __DECL_SIMD_exp10f16 
#define __LDBL_DECIMAL_DIG__ 36
#define __DECL_SIMD_sincosf32 
#define IW_WRITESV(ptr_,v_,m_) static_assert(sizeof(v_) == 2, "Mismatch v_ size"); (v_) = (m_); (v_) = IW_HTOIS(v_); memcpy(ptr_, &(v_), 2); (ptr_) += 2
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __aarch64__ 1
#define IW_64 1
#define __DECL_SIMD_exp10f32 
#define __CFLOAT64X _Complex _Float64x
#define __FLT64_MIN_10_EXP__ (-307)
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define INT8_C(c) c
#define __FDS_BITS(set) ((set)->fds_bits)
#define __FLT64X_DECIMAL_DIG__ 36
#define __DECL_SIMD_acoshf64x 
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define RCBREAK(rc__) if (__builtin_expect((!!(rc__)), 0)) break
#define RCHECK(rc__,label__,expr__) rc__ = expr__; RCGO(rc__, label__)
#define __INTMAX_WIDTH__ 64
#define INT_LEAST32_MAX (2147483647)
#define __DECL_SIMD_sincosf128x 
#define __USE_LARGEFILE 1
#define CHECK(rc_) if (rc_) { iwlog_ecode_error3(rc_); return 1; }
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define __LDBL_HAS_INFINITY__ 1
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define IWKV_MAX_KVSZ 0xfffffff
#define __DECL_SIMD_sinhf64x 
#define __FLT_DIG__ 6
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define __DECL_SIMD_exp2f32 
#define __DEC_EVAL_METHOD__ 2
#define __DECL_SIMD_cbrtf64x 
#define __DECL_SIMD_sin 
#define __DECL_SIMD_expf64x 
#define __FLT_MANT_DIG__ 24
#define __DECL_SIMD_erfcf32 
#define IWRC3(IW_act,IW_rc,IW_lvl) { iwrc __iwrc = (IW_act); if (__iwrc) { if (!(IW_rc)) (IW_rc) = __iwrc; else iwlog3(IWLOG_ ## IW_lvl, __iwrc, __FILE__, __LINE__, ""); } }
#define INT_LEAST8_MIN (-128)
#define __FLT16_MIN_10_EXP__ (-4)
#define __VERSION__ "11.3.0"
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __UINT64_C(c) c ## UL
#define IWCPU_SSE4_1 0x8
#define _SYS_TYPES_H 1
#define _PTRDIFF_T_ 
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_CDEFS_H 1
#define IWFSM_NOLOCKS ((iwfs_fsm_openflags) 0x01U)
#define __DECL_SIMD_exp2f64 
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __GXX_ABI_VERSION 1016
#define islessequal(x,y) __builtin_islessequal(x, y)
#define __SIMD_DECL(function) __CONCAT (__DECL_SIMD_, function)
#define __USE_XOPEN2K8 1
#define __DECL_SIMD_hypotf32x 
#define htobe64(x) __bswap_64 (x)
#define __DECL_SIMD_exp2l 
#define _____fpos_t_defined 1
#define __WINT_MAX__ 0xffffffffU
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define _T_PTRDIFF_ 
#define IWPOOL_H 
#define __FLT128_MAX_EXP__ 16384
#define __INO_T_TYPE __ULONGWORD_TYPE
#define be16toh(x) __bswap_16 (x)
#define __DECL_SIMD_tanf128x 
#define IWP_H 
#define __LC_ALL 6
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define __MATH_DECLARE_LDOUBLE 1
#define _WCHAR_T_DECLARED 
#define __ssize_t_defined 
#define __FLT32_MANT_DIG__ 24
#define __DECL_SIMD_sinf128 
#define IW_LINE_SEP "\n"
#define __DECL_SIMD_hypotf32 
#define _STDDEF_H 
#define __AARCH64EL__ 1
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#define iwlog_verbose(IW_fmt,...) iwlog2(IWLOG_VERBOSE, 0, __FILE__, __LINE__, (IW_fmt), ## __VA_ARGS__)
#define __DECL_SIMD_log1p 
#define __DECL_SIMD_tanf16 
#define __SIZE_T__ 
#define __FLT16_MAX_EXP__ 16
#define __stub_gtty 
#define IWFS_MMAP_PRIVATE ((iwfs_ext_mmap_opts_t) 0x01U)
#define __DECL_SIMD_exp2f64x 
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define IW_INLINE static inline __attribute__((always_inline))
#define __DECL_SIMD_atanhf128x 
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define __DECL_SIMD_tanf32 
#define LC_PAPER __LC_PAPER
#define JQL_SILENT_ON_PARSE_ERROR ((jql_create_mode_t) 0x02U)
#define __LC_ADDRESS 9
#define __DECL_SIMD_log2f16 
#define __BIGGEST_ALIGNMENT__ 16
#define _SYS_SIZE_T_H 
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define INT32_MAX (2147483647)
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __INT32_C(c) c
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define IW_EXPORT __attribute__((visibility("default")))
#define __glibc_macro_warning1(message) _Pragma (#message)
#define IWCPU_SSE3 0x4
#define __wur __attribute_warn_unused_result__
#define __FLT128_HAS_DENORM__ 1
#define __DECL_SIMD_tanhf32x 
#define _BITS_FLOATN_H 
#define __DECL_SIMD_tanf64 
#define __SCHAR_WIDTH__ 8
#define __ORDER_PDP_ENDIAN__ 3412
#define __PDP_ENDIAN 3412
#define INT_FAST8_MIN (-128)
#define __ARM_64BIT_STATE 1
#define __DECL_SIMD_exp2 
#define __DECL_SIMD_logf 
#define __DECL_SIMD_logl 
#define __DECL_SIMD_tanhf16 
#define be64toh(x) __bswap_64 (x)
#define BYTE_ORDER __BYTE_ORDER
#define __INT_FAST32_TYPE__ long int
#define __have_pthread_attr_t 1
#define __DECL_SIMD_expl 
#define IWFSM_MAGICK 0x19cc7cc
#define __DECL_SIMD_log10f16 
#define _BITS_TYPESIZES_H 1
#define __DECL_SIMD_cbrtf128x 
#define htole32(x) __uint32_identity (x)
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define IWFSM_SYNC_BMAP ((iwfs_fsm_aflags) 0x20U)
#define _ANSI_STDARG_H_ 
#define SIG_ATOMIC_MIN (-2147483647-1)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#define __DECL_SIMD_sincosf64 
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define _STDARG_H 
#define _SIZET_ 
#define __need___va_list 
#define FOPEN_MAX 16
#define __SIZE_TYPE__ long unsigned int
#define M_2_SQRTPI 1.12837916709551257390
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define __DECL_SIMD_asinhf64x 
#define __DECL_SIMD_log1pf128x 
#define iwlog_ecode_warn(IW_ecode,IW_fmt,...) iwlog2(IWLOG_WARN, (IW_ecode), __FILE__, __LINE__, (IW_fmt), ## __VA_ARGS__)
#define IW_NORET __attribute__((noreturn))
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __FLT64X_DIG__ 33
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define __ARM_FEATURE_FMA 1
#define __INT8_TYPE__ signed char
#define IW_FILE_H 
#define __DECL_SIMD_coshf 
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define __DECL_SIMD_coshl 
#define LC_NUMERIC __LC_NUMERIC
#define EJDB_IDX_F64 ((ejdb_idx_mode_t) 0x10U)
#define __HAVE_DISTINCT_FLOAT128 0
#define __ELF__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __DECL_SIMD_coshf32 
#define __DECL_SIMD_log2f128 
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define __DECL_SIMD_asinf32x 
#define IWNUMBUF_SIZE 32
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define ITIMER_REAL ITIMER_REAL
#define __DECL_SIMD_asinhf16 
#define __FLT_RADIX__ 2
#define __DECL_SIMD_atan2f32x 
#define __INT_LEAST16_TYPE__ short int
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define _POSIX_C_SOURCE 200809L
#define __DECL_SIMD_exp10 
#define __LC_MESSAGES 5
#define __ARM_PCS_AAPCS64 1
#define __DECL_SIMD_acoshf128 
#define __DECL_SIMD_asinhf32 
#define __DECL_SIMD_hypotf128x 
#define __DECL_SIMD_tanh 
#define __DECL_SIMD_tanl 
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define __LDBL_REDIR(name,proto) name proto
#define __DECL_SIMD_atanl 
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define __INT_LEAST64_WIDTH__ 64
#define iwlog_warn(IW_fmt,...) iwlog2(IWLOG_WARN, 0, __FILE__, __LINE__, (IW_fmt), ## __VA_ARGS__)
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define M_PI 3.14159265358979323846
#define __DECL_SIMD_powf32x 
#define __DECL_SIMD_asinhf64 
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_IEC_60559_BFP__ 201404L
#define __DECL_SIMD_expm1f 
#define __DECL_SIMD_sinf128x 
#define __SIZEOF_PTRDIFF_T__ 8
#define SEEK_SET 0
#define SIZE_T_MAX ((size_t) -1)
#define __ATOMIC_RELAXED 0
#define IWFS_DEFAULT_FILEMODE 00666
#define HUGE_VALF (__builtin_huge_valf ())
#define __DECL_SIMD_expm1l 
#define __stub_sigreturn 
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define IWFS_OUNLINK ((iwfs_omode) 0x10U)
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define M_LN2 0.69314718055994530942
#define __restrict_arr __restrict
#define INTPTR_MIN (-9223372036854775807L-1)
#define __f32(x) x ##f32
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define __UWORD_TYPE unsigned long int
#define __LDBL_DIG__ 33
#define FP_SUBNORMAL 3
#define __LC_PAPER 7
#define IWKV_SYNC ((iwkv_opflags) 0x04U)
#define __FLT64_IS_IEC_60559__ 2
#define __MATHDECL_VEC(type,function,suffix,args) __SIMD_DECL (__MATH_PRECNAME (function, suffix)) __MATHDECL(type, function,suffix, args)
#define _SIZE_T_ 
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define __FLT16_IS_IEC_60559__ 2
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define __DECL_SIMD_log1pf128 
#define __DECL_SIMD_exp10f 
#define UINT_FAST32_MAX (18446744073709551615UL)
#define _WCHAR_T_H 
#define IWFSM_ALLOC_PAGE_ALIGNED ((iwfs_fsm_aflags) 0x04U)
#define IWCPU_AVX 0x20
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __DECL_SIMD_atanhf32x 
#define __stub___compat_create_module 
#define __DECL_SIMD_exp10l 
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define __DECL_SIMD_sinhf32x 
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define __DECL_SIMD_atanhf64x 
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __DECL_SIMD_asinhf128x 
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __USE_ISOC95 1
#define NULL ((void *)0)
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define __DECL_SIMD_atanf16 
#define __U64_TYPE unsigned long int
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define INT32_C(c) c
#define __FLT_MAX_10_EXP__ 38
#define FP_ZERO 2
#define _____fpos64_t_defined 1
#define __DECL_SIMD_cbrtf32x 
#define IW_ALLOC __attribute__((malloc)) __attribute__((warn_unused_result))
#define __DECL_SIMD_sinhf128x 
#define __DECL_SIMD_erfcf128 
#define IWCPU_SSE 0x1
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define UINT_LEAST16_MAX (65535)
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define va_copy(d,s) __builtin_va_copy(d,s)
#define __glibc_objsize0(__o) __bos0 (__o)
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DECL_SIMD_atanf32 
#define __DECL_SIMD_tanf 
#define iwlog_ecode_debug2(IW_ecode,IW_fmt) 
#define __DECL_SIMD_cosf64 
#define LC_CTYPE __LC_CTYPE
#define _BSD_PTRDIFF_T_ 
#define _BITS_PTHREADTYPES_COMMON_H 1
#define __DECL_SIMD_erff16 
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define __DBL_HAS_DENORM__ 1
#define fpclassify(x) __builtin_fpclassify (FP_NAN, FP_INFINITE, FP_NORMAL, FP_SUBNORMAL, FP_ZERO, x)
#define __UINT_FAST16_TYPE__ long unsigned int
#define IW_LLEN(l__) (sizeof(l__) - 1)
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define IOWOW_H 
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __CHAR16_TYPE__ short unsigned int
#define __FLT64X_MAX_EXP__ 16384
#define BIG_ENDIAN __BIG_ENDIAN
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define __SIZE_WIDTH__ 64
#define __BLKSIZE_T_TYPE __S32_TYPE
#define IW_DEPRECATED __attribute__((deprecated))
#define RCC(rc__,label__,expr__) RCHECK(rc__, label__, expr__)
#define WUR __attribute__((warn_unused_result))
#define __INT_LEAST16_MAX__ 0x7fff
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __stub_revoke 
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define IWFS_OTRUNC ((iwfs_omode) 0x08U)
#define __DECL_SIMD_powf128 
#define __DECL_SIMD_exp10f64 
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define htole16(x) __uint16_identity (x)
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __STDC_VERSION__ 201112L
#define IWFS_MMAP_RANDOM ((iwfs_ext_mmap_opts_t) 0x02U)
#define __DECL_SIMD_coshf16 
#define __DECL_SIMD_atanhf16 
#define __DECL_SIMD_acoshf 
#define __DECL_SIMD_acoshl 
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define __PMT(args) args
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define linux 1
#define IW_MAX(x__,y__) ({ __typeof__(x__) x = (x__); __typeof__(y__) y = (y__); x < y ? y : x; })
#define __DECL_SIMD_log2f32 
#define CLOCK_MONOTONIC 1
#define __DECL_SIMD_exp2f32x 
#define isgreater(x,y) __builtin_isgreater(x, y)
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define ____FILE_defined 1
#define _IOLBF 1
#define __DECL_SIMD_log10f64x 
#define htole64(x) __uint64_identity (x)
#define isfinite(x) __builtin_isfinite (x)
#define FP_FAST_FMA 1
#define isinf(x) __builtin_isinf_sign (x)
#define __USE_POSIX2 1
#define __DECL_SIMD_expm1f64 
#define __DECL_SIMD_log10l 
#define __FLT64X_MIN_EXP__ (-16381)
#define __FLT32_MIN_10_EXP__ (-37)
#define IWFSM_CUSTOM_HDR_DATA_OFFSET (4 + 1 + 8 + 8 + 8 + 4 + 8 + 32 + 4 )
#define __KEY_T_TYPE __S32_TYPE
#define __FLT32X_DIG__ 15
#define __UINT8_TYPE__ unsigned char
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define __timer_t_defined 1
#define __DECL_SIMD_asinf128x 
#define __DECL_SIMD_cbrtf 
#define __PTRDIFF_WIDTH__ 64
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define __DECL_SIMD_cbrtl 
#define __BEGIN_DECLS 
#define signbit(x) __builtin_signbit (x)
#define isnormal(x) __builtin_isnormal (x)
#define IW_READBV(ptr_,t_,m_) static_assert(sizeof(t_) == 1, "Mismatch t_ size"); (t_) = 0; memcpy(&(t_), ptr_, 1); (m_) = (t_); (ptr_) += 1
#define LC_TELEPHONE __LC_TELEPHONE
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define __DECL_SIMD_expf128x 
#define __FLT64_HAS_INFINITY__ 1
#define IW_ROUNDOWN(x_,v_) ((x_) - ((x_) & ((v_) - 1)))
#define RCGA(v__,label__) if (!(v__)) { rc = iwrc_set_errno(IW_ERROR_ALLOC, errno); goto label__; }
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define false 0
#define _GCC_MAX_ALIGN_T 
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define ____sigset_t_defined 
#define IWKV_NO_TRIM_ON_CLOSE ((iwkv_openflags) 0x08U)
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define le64toh(x) __uint64_identity (x)
#define FILENAME_MAX 4096
#define IW_LIKELY(x_) __builtin_expect(!!(x_), 1)
#define __nlink_t_defined 
#define IWFS_FDATASYNC ((iwfs_sync_flags) 0x01U)
#define __FLT16_MANT_DIG__ 11
#define __ino_t_defined 
#define __DECL_SIMD_asin 
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ unsigned int
#define __CLOCKID_T_TYPE __S32_TYPE
#define __DECL_SIMD_tan 
#define IW_CLEANUP(func__) __attribute__(cleanup(func__))
#define IWP_NBLOCK ((iwp_lockmode) 0x04U)
#define iwlog_ecode_error2(IW_ecode,IW_fmt) iwlog3(IWLOG_ERROR, (IW_ecode), __FILE__, __LINE__, (IW_fmt))
#define RCGO(rc__,label__) if (__builtin_expect((!!(rc__)), 0)) goto label__
#define IW_EXTERN_C_START 
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __ARM_ARCH_8A 1
#define __DECL_SIMD_acosf128 
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define __stub_chflags 
#define __DECL_SIMD_logf128 
#define __UQUAD_TYPE unsigned long int
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define __BYTE_ORDER __LITTLE_ENDIAN
#define __DECL_SIMD_asinhf32x 
#define __DECL_SIMD_asinf64x 
#define __DECL_SIMD_cosf16 
#define __USE_POSIX 1
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define BUFSIZ 8192
#define __FSID_T_TYPE struct { int __val[2]; }
#define __DECL_SIMD_log1pf16 
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX (9223372036854775807L)
#define isunordered(x,y) __builtin_isunordered(x, y)
#define __UINT_FAST64_TYPE__ long unsigned int
#define M_LN10 2.30258509299404568402
#define __LDBL_REDIR_DECL(name) 
#define IW_READLV(ptr_,t_,m_) static_assert(sizeof(t_) == 4, "Mismatch t_ size"); (t_) = 0; memcpy(&(t_), ptr_, 4); (m_) = IW_ITOHL(t_); (ptr_) += 4
#define UINT_FAST8_MAX (255)
#define __INT_MAX__ 0x7fffffff
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define __LC_COLLATE 3
#define INT8_MIN (-128)
#define __S16_TYPE short int
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define _T_SIZE_ 
#define __TIMESIZE 64
#define M_SQRT2 1.41421356237309504880
#define __DECL_SIMD_log1pf32 
#define __LC_NUMERIC 1
#define __DECL_SIMD_erfcf 
#define __INT64_TYPE__ long int
#define __FLT_MAX_EXP__ 128
#define __gid_t_defined 
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define UINT32_C(c) c ## U
#define __ORDER_BIG_ENDIAN__ 4321
#define _MATH_H 1
#define _IONBF 2
#define __ptr_t void *
#define __DECL_SIMD_sinhf64 
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define IWP_NOLOCK ((iwp_lockmode) 0x00U)
#define __clock_t_defined 1
#define __FP_FAST_FMAF32 1
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __GLIBC_MINOR__ 35
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define JB_HAVE_QSORT_R 1
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __intptr_t_defined 
#define __DECL_SIMD_acosf64 
#define __DECL_SIMD_expf 
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define JQL_KEEP_QUERY_ON_PARSE_ERROR ((jql_create_mode_t) 0x01U)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define FD_SETSIZE __FD_SETSIZE
#define IW_CLEANUP_FUNC(type__,func__) static inline void func__ ## _cc(type__ * p) { if (*p) { *p = func__(*p); } }
#define __DECL_SIMD_tanf128 
#define __DECL_SIMD_log 
#define stdout stdout
#define __WINT_WIDTH__ 32
#define __struct_FILE_defined 1
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define __INT_LEAST8_MAX__ 0x7f
#define __USE_POSIX199309 1
#define __DECL_SIMD_atan2f32 
#define __FLT32X_MAX_10_EXP__ 308
#define iwlog_debug2(IW_fmt) 
#define __DECL_SIMD_hypotf16 
#define MAXFLOAT 3.40282347e+38F
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define __LDBL_MAX_10_EXP__ 4932
#define JBN_VCMD_DELETE ((jbn_visitor_cmd_t) 0x04U)
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define __DECL_SIMD_cbrtf64 
#define __stub_stty 
#define __FLT32_MIN_EXP__ (-125)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define le16toh(x) __uint16_identity (x)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define __DECL_SIMD_erfl 
#define _LP64 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define __DECL_SIMD_erff128x 
#define IWCPU_AVX512F 0x80
#define __UINT8_C(c) c
#define NAN (__builtin_nanf (""))
#define __USE_XOPEN_EXTENDED 1
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define __INT_LEAST32_TYPE__ int
#define __wchar_t__ 
#define __DECL_SIMD_erff 
#define SEEK_END 2
#define __USE_POSIX_IMPLICITLY 1
#define __UINT64_TYPE__ long unsigned int
#define __stub___compat_query_module 
#define __ARM_NEON 1
#define IWPOOL_POOL_SIZ (8 * 1024)
#define __DECL_SIMD_sincosf64x 
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define JQL_H 
#define _STDDEF_H_ 
#define __LC_NAME 8
#define __stub___compat_bdflush 
#define __DECL_SIMD_acoshf32x 
#define __FLT128_HAS_QUIET_NAN__ 1
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define __DECL_SIMD_acos 
#define __UINT_FAST8_TYPE__ unsigned char
#define __INT_FAST8_TYPE__ signed char
#define __PID_T_TYPE __S32_TYPE
#define __DECL_SIMD_cosf32 
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _BITS_LOCALE_H 1
#define __DECL_SIMD_cosf64x 
#define va_arg(v,l) __builtin_va_arg(v,l)
#define __USE_ISOC11 1
#define __DECL_SIMD_log2f128x 
#define __DECL_SIMD_exp2f16 
#define _THREAD_SHARED_TYPES_H 1
#define __f128(x) x ##f128
#define __glibc_has_extension(ext) 0
#define __DECL_SIMD_erfc 
#define NDEBUG 1
#define __GNUC_STDC_INLINE__ 1
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define P_tmpdir "/tmp"
#define __DECL_SIMD_expm1 
#define __FLT64_HAS_DENORM__ 1
#define __HAVE_FLOAT32 1
#define __WORDSIZE_TIME64_COMPAT32 0
#define __HAVE_DISTINCT_FLOAT32 0
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define __FP_FAST_FMAF32x 1
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define UINT_FAST16_MAX (18446744073709551615UL)
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define __INT_FAST8_WIDTH__ 8
#define MAX(a_,b_) ((a_) > (b_) ? (a_) : (b_))
#define _SIZE_T 
#define _IO_ERR_SEEN 0x0020
#define __DECL_SIMD_sinf32 
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DECL_SIMD_atan2l 
#define __ULONG32_TYPE unsigned int
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __FLT64X_HAS_INFINITY__ 1
#define __BIG_ENDIAN 4321
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __suseconds_t_defined 
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define FP_FAST_FMAF 1
#define __fortify_function __extern_always_inline __attribute_artificial__
#define __DECL_SIMD_erfcf32x 
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define __off_t_defined 
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define IW_PATH_CHR '/'
#define IWLOG_H 
#define _FILE_OFFSET_BITS 64
#define __SIZEOF_WCHAR_T__ 4
#define unix 1
#define __DECL_SIMD_sinf64 
#define __mode_t_defined 
#define _GCC_SIZE_T 
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#define __INO64_T_TYPE __UQUAD_TYPE
#define __USE_XOPEN2K8XSI 1
#define IWFS_OWRITE ((iwfs_omode) 0x02U)
#define __DECL_SIMD_log10f32x 
#define __UINT32_C(c) c ## U
#define __DECL_SIMD_exp10f128 
#define IWKV_NO_OVERWRITE ((iwkv_opflags) 0x01U)
#define __size_t__ 
#define IW_SWAB16(num_) __builtin_bswap16(num_)
#define _BITS_TIME64_H 1
#define __WINT_MIN__ 0U
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __glibc_has_builtin(name) __has_builtin (name)
#define __ONCE_FLAG_INIT { 0 }
#define _PTRDIFF_T_DECLARED 
#define IW_ITOHLL(num_) (num_)
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define IW_SWAB32(num_) __builtin_bswap32(num_)
#define __PIC__ 2
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define __INO_T_MATCHES_INO64_T 1
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define __DECL_SIMD_pow 
#define MATH_ERRNO 1
#define LC_NAME __LC_NAME
#define FP_INFINITE 1
#define IW_UNLIKELY(x_) __builtin_expect(!!(x_), 0)
#define __DECL_SIMD_sinf16 
#define _VA_LIST 
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __GLIBC_USE_IEC_60559_EXT 0
#define __fsfilcnt_t_defined 
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define UINT_LEAST32_MAX (4294967295U)
#define iwlog_error(IW_fmt,...) iwlog2(IWLOG_ERROR, 0, __FILE__, __LINE__, (IW_fmt), ## __VA_ARGS__)
#define IW_SWAB64(num_) __builtin_bswap64(num_)
#define __DECL_SIMD_sinhf 
#define M_1_PI 0.31830988618379067154
#define __DECL_SIMD_sinhl 
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define UINTMAX_C(c) c ## UL
#define CLOCK_REALTIME 0
#define __DECL_SIMD_log10f32 
#define __DECL_SIMD_log2f64 
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define __DECL_SIMD_asinf64 
#define __INT32_TYPE__ int
#define __SIZEOF_DOUBLE__ 8
#define IWFS_DEFAULT_OMODE (IWFS_OCREATE)
#define __time_t_defined 1
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __INT_LEAST32_WIDTH__ 32
#define va_start(v,l) __builtin_va_start(v,l)
#define __DECL_SIMD_exp10f128x 
#define __SWORD_TYPE long int
#define IW_SOFT_INLINE static inline
#define __SIZEOF_FLOAT__ 4
#define __DECL_SIMD_exp 
#define IWKV_H 
#define __DECL_SIMD_log10f64 
#define _T_SIZE 
#define UINT8_C(c) c
#define IWKVD_PRINT_NO_LEVEVELS 0x1
#define __va_arg_pack() __builtin_va_arg_pack ()
#define IW_ITOHL(num_) (num_)
#define IW_ITOHS(num_) (num_)
#define __MATHREDIR(type,function,suffix,args,to) extern type __REDIRECT_NTH (__MATH_PRECNAME (function, suffix), args, to)
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define __GNUC_MINOR__ 3
#define __INT_FAST16_WIDTH__ 64
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DECL_SIMD_tanhf64 
#define IWCPU_SSE2 0x2
#define iwlog_ecode_error3(IW_ecode) iwlog3(IWLOG_ERROR, (IW_ecode), __FILE__, __LINE__, "")
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __LDBL_REDIR2_DECL(name) 
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define INTMAX_C(c) c ## L
#define __DECL_SIMD_erfcl 
#define __glibc_clang_prereq(maj,min) 0
#define BASEDEFS_H 
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define _STDINT_H 1
#define _RWLOCK_INTERNAL_H 
#define __DBL_MAX_10_EXP__ 308
#define __FILE_defined 1
#define UINT16_MAX (65535)
#define IW_XSTR(s) IW_STR(s)
#define iwlog_verbose2(IW_fmt) iwlog3(IWLOG_VERBOSE, 0, __FILE__, __LINE__, (IW_fmt))
#define __INT16_C(c) c
#define __WCHAR_T 
#define __ARM_ARCH_ISA_A64 1
#define __U32_TYPE unsigned int
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define __LC_MONETARY 4
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define IW_ERROR_START 70000
#define __PTRDIFF_TYPE__ long int
#define __LC_IDENTIFICATION 12
#define __DECL_SIMD_atanf32x 
#define __clockid_t_defined 1
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define IWFS_OREAD ((iwfs_omode) 0x01U)
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __size_t 
#define __ATOMIC_SEQ_CST 5
#define JB_HTTP 1
#define IWRC2(IW_act,IW_lvl) { iwrc __iwrc = (IW_act); if (__iwrc) { iwlog3(IWLOG_ ## IW_lvl, __iwrc, __FILE__, __LINE__, ""); } }
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define __DECL_SIMD_atanhf64 
#define __DECL_SIMD_sincosf16 
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define HUGE_VAL (__builtin_huge_val ())
#define __UINTPTR_TYPE__ long unsigned int
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __linux__ 1
#define iwlog_ecode_verbose(IW_ecode,IW_fmt,...) iwlog2(IWLOG_VERBOSE, (IW_ecode), __FILE__, __LINE__, (IW_fmt), ## __VA_ARGS__)
#define __LDBL_MIN_10_EXP__ (-4931)
#define IW_SENTINEL __attribute__((sentinel))
#define __useconds_t_defined 
#define __DECL_SIMD_sincosf32x 
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __LC_TELEPHONE 10
#define __HAVE_DISTINCT_FLOAT64X 0
#define MIN(a_,b_) ((a_) < (b_) ? (a_) : (b_))
#define __SIZEOF_LONG_LONG__ 8
#define __DECL_SIMD_cosf128x 
#define __USE_ATFILE 1
#define iwlog_debug(IW_fmt,...) 
#define __DECL_SIMD_log1pf 
#define IW_CLEANUP_DESTROY_FUNC(type__,func__) static inline void func__ ## _cc(type__ * p) { if (*p) { func__(*p); } }
#define __DECL_SIMD_log1pl 
#define _GCC_PTRDIFF_T 
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define iwlog_ecode_warn3(IW_ecode) iwlog3(IWLOG_WARN, (IW_ecode), __FILE__, __LINE__, "")
#define __DECL_SIMD_asinf16 
#define __FLT128_DECIMAL_DIG__ 36
#define __DECL_SIMD_log2f64x 
#define __DECL_SIMD_atanf128 
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __DECL_SIMD_acoshf16 
#define __DECL_SIMD_atan 
#define PTRDIFF_MAX (9223372036854775807L)
#define IW_EXTERN_C_END 
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define IW_ROUNDUP(x_,v_) (((x_) + (v_) - 1) & ~((v_) - 1))
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __DECL_SIMD_asinf32 
#define __FLT_MIN_10_EXP__ (-37)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define __DECL_SIMD_cbrt 
#define __DECL_SIMD_acoshf32 
#define __DECL_SIMD_erff32 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define INT_LEAST16_MAX (32767)
#define iwlog_ecode_debug(IW_ecode,IW_fmt,...) 
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __GLIBC_FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define __DECL_SIMD_acoshf128x 
#define __P(args) args
#define __FD_SETSIZE 1024
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define __SLONGWORD_TYPE long int
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
#define __fsblkcnt_t_defined 
#define __DECL_SIMD_log1pf64 
#define __GLIBC_USE_LIB_EXT2 0
#define IWKVD_PRINT_VALS 0x2
