#define G_PRIVATE_INIT(notify) { NULL, (notify), { NULL, NULL } }
#define G_LOCK_DEFINE(name) GMutex G_LOCK_NAME (name)
#define __G_VERSION_MACROS_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_30_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __SSP_STRONG__ 3
#define G_LOG_LEVEL_USER_SHIFT (8)
#define __attr_access(x) __attribute__ ((__access__ x))
#define __G_DATE_H__ 
#define __DBL_MIN_EXP__ (-1021)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_44_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define si_timerid _sifields._timer.si_tid
#define GLIB_HAVE_ALLOCA_H 
#define _BITS_SIGEVENT_CONSTS_H 1
#define __LDBL_MANT_DIG__ 113
#define g_return_val_if_reached(val) G_STMT_START { g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, "file %s: line %d (%s): should not be reached", __FILE__, __LINE__, G_STRFUNC); return (val); } G_STMT_END
#define _FLOAT_H___ 
#define G_NODE_IS_ROOT(node) (((GNode*) (node))->parent == NULL && ((GNode*) (node))->prev == NULL && ((GNode*) (node))->next == NULL)
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define G_VARIANT_TYPE_DICT_ENTRY ((const GVariantType *) "{?*}")
#define G_GINT64_MODIFIER "l"
#define EOWNERDEAD 130
#define AIO_PRIO_DELTA_MAX 20
#define g_new0(struct_type,n_structs) _G_NEW (struct_type, n_structs, malloc0)
#define __UINT_LEAST16_MAX__ 0xffff
#define __ARM_SIZEOF_WCHAR_T 4
#define SIGPIPE 13
#define GUINT32_SWAP_BE_PDP(val) ((guint32) ( (((guint32) (val) & (guint32) 0x00ff00ffU) << 8) | (((guint32) (val) & (guint32) 0xff00ff00U) >> 8)))
#define __DBL_DECIMAL_DIG__ 17
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define G_SIZEOF_MEMBER(struct_type,member) GLIB_AVAILABLE_MACRO_IN_2_64 sizeof (((struct_type *) 0)->member)
#define __FLT128_MAX_10_EXP__ 4932
#define g_pointer_bit_trylock(address,lock_bit) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(address) == sizeof (gpointer)); g_pointer_bit_trylock ((address), (lock_bit)); }))
#define g_newa(struct_type,n_structs) ((struct_type*) g_alloca (sizeof (struct_type) * (gsize) (n_structs)))
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define G_KEY_FILE_DESKTOP_KEY_ONLY_SHOW_IN "OnlyShowIn"
#define __ASM_SIGCONTEXT_H 
#define sa_sigaction __sigaction_handler.sa_sigaction
#define __G_PATTERN_H__ 
#define GLIB_DEPRECATED_TYPE_IN_2_34_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __GCC_IEC_559_COMPLEX 2
#define G_CAN_INLINE 
#define LDBL_HAS_SUBNORM __LDBL_HAS_DENORM__
#define G_KEY_FILE_DESKTOP_TYPE_LINK "Link"
#define g_ascii_isupper(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_UPPER) != 0)
#define G_VARIANT_TYPE_INT32 ((const GVariantType *) "i")
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define __G_COMPLETION_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_64_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define si_fd _sifields._sigpoll.si_fd
#define __UINT_LEAST8_TYPE__ unsigned char
#define FLT_MIN __FLT_MIN__
#define _T_WCHAR_ 
#define g_atomic_int_or(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (val) : 1); (guint) __atomic_fetch_or ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define __CFLOAT64 _Complex _Float64
#define CHAR_BIT __CHAR_BIT__
#define g_strstrip(string) g_strchomp (g_strchug (string))
#define __stub___compat_get_kernel_syms 
#define si_arch _sifields._sigsys._arch
#define GLIB_UNAVAILABLE_ENUMERATOR(maj,min) G_UNAVAILABLE(maj,min)
#define __S64_TYPE long int
#define __FLT128_DIG__ 33
#define __stub_fchflags 
#define g_slist_next(slist) ((slist) ? (((GSList *)(slist))->next) : NULL)
#define __SQUAD_TYPE long int
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define _BITS_SIGINFO_CONSTS_H 1
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define SIGBUS 7
#define GLIB_DEPRECATED_TYPE_IN_2_44_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __INTMAX_C(c) c ## L
#define __GNU_LIBRARY__ 6
#define GLIB_VERSION_PREV_STABLE (G_ENCODE_VERSION (GLIB_MAJOR_VERSION, GLIB_MINOR_VERSION - 2))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define GLIB_DEPRECATED_IN_2_54_FOR(f) GLIB_DEPRECATED_FOR(f)
#define ILL_ILLTRP ILL_ILLTRP
#define TRUE (!FALSE)
#define __CHAR_BIT__ 8
#define __FSWORD_T_TYPE __SWORD_TYPE
#define GLIB_AVAILABLE_IN_2_42 _GLIB_EXTERN
#define EREMCHG 78
#define __G_QUEUE_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_42 GLIB_DEPRECATED_MACRO
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define SIGTTIN 21
#define g_assert_cmpvariant(v1,v2) G_STMT_START { GVariant *__v1 = (v1), *__v2 = (v2); if (!g_variant_equal (__v1, __v2)) { gchar *__s1, *__s2, *__msg; __s1 = g_variant_print (__v1, TRUE); __s2 = g_variant_print (__v2, TRUE); __msg = g_strdup_printf ("assertion failed (" #v1 " == " #v2 "): %s does not equal %s", __s1, __s2); g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, __msg); g_free (__s1); g_free (__s2); g_free (__msg); } } G_STMT_END
#define __attribute_pure__ __attribute__ ((__pure__))
#define EACCES 13
#define __UINT8_MAX__ 0xff
#define G_OS_UNIX 
#define G_MAXOFFSET G_MAXINT64
#define GLIB_DEPRECATED_MACRO_IN_2_46 GLIB_DEPRECATED_MACRO
#define _GLIB_EXTERN extern
#define G_GNUC_NULL_TERMINATED __attribute__((__sentinel__))
#define GLIB_DEPRECATED_TYPE_IN_2_50_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define EIDRM 43
#define __G_SCANNER_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_48 GLIB_DEPRECATED_MACRO
#define G_MAXDOUBLE DBL_MAX
#define g_slice_free_chain(type,mem_chain,next) G_STMT_START { if (1) g_slice_free_chain_with_offset (sizeof (type), (mem_chain), G_STRUCT_OFFSET (type, next)); else (void) ((type*) 0 == (mem_chain)); } G_STMT_END
#define g_once_init_enter(location) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(location) == sizeof (gpointer)); (void) (0 ? (gpointer) *(location) : NULL); (!g_atomic_pointer_get (location) && g_once_init_enter (location)); }))
#define LDBL_MIN_EXP __LDBL_MIN_EXP__
#define si_pid _sifields._kill.si_pid
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define GLIB_DEPRECATED_IN_2_68_FOR(f) GLIB_DEPRECATED_FOR(f)
#define PIPE_BUF 4096
#define G_VARIANT_TYPE_DICTIONARY ((const GVariantType *) "a{?*}")
#define ENOEXEC 8
#define G_VARIANT_BUILDER_INIT(variant_type) { { { 2942751021u , variant_type, { 0, } } } }
#define G_VARIANT_TYPE_INT64 ((const GVariantType *) "x")
#define CLD_TRAPPED CLD_TRAPPED
#define G_GINT32_FORMAT "i"
#define G_VARIANT_TYPE_STRING ((const GVariantType *) "s")
#define MQ_PRIO_MAX 32768
#define __G_UUID_H__ 
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define EL2HLT 51
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define __stack_t_defined 1
#define _POSIX2_BC_DIM_MAX 2048
#define GLIB_DEPRECATED_MACRO_IN_2_52_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __CFLOAT128 _Complex _Float128
#define EILSEQ 84
#define ESPIPE 29
#define __STDLIB_MB_LEN_MAX 16
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_66_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define g_node_first_child(node) ((node) ? ((GNode*) (node))->children : NULL)
#define _POSIX_TTY_NAME_MAX 9
#define ECOMM 70
#define SI_DETHREAD SI_DETHREAD
#define G_GOFFSET_CONSTANT(val) G_GINT64_CONSTANT(val)
#define EPERM 1
#define __OFF_T_MATCHES_OFF64_T 1
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_32_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define g_scanner_remove_symbol(scanner,symbol) G_STMT_START { g_scanner_scope_remove_symbol ((scanner), 0, (symbol)); } G_STMT_END GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_scanner_scope_remove_symbol)
#define _BITS_SCHED_H 1
#define GLIB_AVAILABLE_TYPE_IN_2_42 
#define G_LOG_DOMAIN ((gchar*) 0)
#define __WCHAR_MAX__ 0xffffffffU
#define _BITS_FLOATN_COMMON_H 
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define ENOSR 63
#define GLIB_VERSION_CUR_STABLE (G_ENCODE_VERSION (GLIB_MAJOR_VERSION, GLIB_MINOR_VERSION))
#define g_return_if_fail(expr) G_STMT_START { if (G_LIKELY (expr)) { } else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, #expr); return; } } G_STMT_END
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define G_GUINT64_CONSTANT(val) (val ##UL)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define GLIB_DEPRECATED_TYPE_IN_2_56_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define g_ascii_isalpha(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_ALPHA) != 0)
#define __GCC_IEC_559 2
#define ENOANO 55
#define g_ntohl(val) (GUINT32_FROM_BE (val))
#define g_static_mutex_get_mutex g_static_mutex_get_mutex_impl GLIB_DEPRECATED_MACRO_IN_2_32
#define g_ntohs(val) (GUINT16_FROM_BE (val))
#define __LITTLE_ENDIAN 1234
#define __FLT32X_DECIMAL_DIG__ 17
#define _POSIX2_BC_STRING_MAX 1000
#define g_scanner_foreach_symbol(scanner,func,data) G_STMT_START { g_scanner_scope_foreach_symbol ((scanner), 0, (func), (data)); } G_STMT_END GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_scanner_scope_foreach_symbol)
#define G_URI_ERROR (g_uri_error_quark ()) GLIB_AVAILABLE_MACRO_IN_2_66
#define __FLT_EVAL_METHOD__ 0
#define _POSIX_MQ_PRIO_MAX 32
#define g_critical(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, __VA_ARGS__)
#define G_GNUC_PRINTF(format_idx,arg_idx) __attribute__((__format__ (gnu_printf, format_idx, arg_idx)))
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define G_DEFINE_EXTENDED_ERROR(ErrorType,error_type) static inline ErrorType ## Private * error_type ## _get_private (const GError *error) { const gsize sa = 2 * sizeof (gsize); const gsize as = (sizeof (ErrorType ## Private) + (sa - 1)) & -sa; g_return_val_if_fail (error != NULL, NULL); g_return_val_if_fail (error->domain == error_type ## _quark (), NULL); return (ErrorType ## Private *) (((guint8 *)error) - as); } static void g_error_with_ ## error_type ## _private_init (GError *error) { ErrorType ## Private *priv = error_type ## _get_private (error); error_type ## _private_init (priv); } static void g_error_with_ ## error_type ## _private_copy (const GError *src_error, GError *dest_error) { const ErrorType ## Private *src_priv = error_type ## _get_private (src_error); ErrorType ## Private *dest_priv = error_type ## _get_private (dest_error); error_type ## _private_copy (src_priv, dest_priv); } static void g_error_with_ ## error_type ## _private_clear (GError *error) { ErrorType ## Private *priv = error_type ## _get_private (error); error_type ## _private_clear (priv); } GQuark error_type ## _quark (void) { static GQuark q; static gsize initialized = 0; if (g_once_init_enter (&initialized)) { q = g_error_domain_register_static (#ErrorType, sizeof (ErrorType ## Private), g_error_with_ ## error_type ## _private_init, g_error_with_ ## error_type ## _private_copy, g_error_with_ ## error_type ## _private_clear); g_once_init_leave (&initialized, 1); } return q; }
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define GULONG_TO_LE(val) ((gulong) GUINT64_TO_LE (val))
#define __G_REL_H__ 
#define __FLT64_DECIMAL_DIG__ 17
#define LDBL_MAX __LDBL_MAX__
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_38_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define SCHED_RR 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __HAVE_FLOAT64 1
#define _POSIX_PATH_MAX 256
#define __G_CACHE_H__ 
#define NSIG _NSIG
#define g_autoslist(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_SLIST_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_SLIST_TYPENAME(TypeName)
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define G_VARIANT_TYPE(type_string) (g_variant_type_checked_ ((type_string)))
#define G_SOURCE_REMOVE FALSE
#define g_array_insert_val(a,i,v) g_array_insert_vals (a, i, &(v), 1)
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define g_pointer_bit_lock(address,lock_bit) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(address) == sizeof (gpointer)); g_pointer_bit_lock ((address), (lock_bit)); }))
#define ILL_BADIADDR ILL_BADIADDR
#define GLIB_AVAILABLE_TYPE_IN_2_70 
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __UINT_FAST32_TYPE__ long unsigned int
#define SIGPROF 27
#define G_KEY_FILE_DESKTOP_KEY_HIDDEN "Hidden"
#define DT_REG DT_REG
#define __G_BACKTRACE_H__ 
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define __SVE_ZREGS_OFFSET 0
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define POLL_MSG POLL_MSG
#define GLIB_VERSION_2_32 (G_ENCODE_VERSION (2, 32))
#define __DBL_MIN_10_EXP__ (-307)
#define g_test_add(testpath,Fixture,tdata,fsetup,ftest,fteardown) G_STMT_START { void (*add_vtable) (const char*, gsize, gconstpointer, void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer)) = (void (*) (const gchar *, gsize, gconstpointer, void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer))) g_test_add_vtable; add_vtable (testpath, sizeof (Fixture), tdata, fsetup, ftest, fteardown); } G_STMT_END
#define __G_SLIST_H__ 
#define __FINITE_MATH_ONLY__ 0
#define si_overrun _sifields._timer.si_overrun
#define __stub___compat_uselib 
#define G_MINFLOAT FLT_MIN
#define __G_VERSION_H__ 
#define __id_t_defined 
#define SIGXFSZ 25
#define G_MININT8 ((gint8) (-G_MAXINT8 - 1))
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define g_atomic_pointer_and(atomic,val) (G_GNUC_EXTENSION ({ gsize *gapa_atomic = (gsize *) (atomic); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gsize)); (void) (0 ? (gpointer) *(atomic) : NULL); (void) (0 ? (val) ^ (val) : 1); (gsize) __atomic_fetch_and (gapa_atomic, (val), __ATOMIC_SEQ_CST); }))
#define EDOM 33
#define __FLT32X_MAX_EXP__ 1024
#define EBADE 52
#define EBADF 9
#define __G_DATE_TIME_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_40_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define G_GINTPTR_MODIFIER "l"
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __pid_t_defined 
#define GLIB_VAR _GLIB_EXTERN
#define __GNUC_PATCHLEVEL__ 0
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_54_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __FLT32_HAS_DENORM__ 1
#define _POSIX_SYMLINK_MAX 255
#define GLIB_VERSION_2_38 (G_ENCODE_VERSION (2, 38))
#define __CPU_SETSIZE 1024
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define _GLIB_HAVE_BUILTIN_OVERFLOW_CHECKS 
#define g_return_val_if_fail(expr,val) G_STMT_START { if (G_LIKELY (expr)) { } else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, #expr); return (val); } } G_STMT_END
#define G_VARIANT_TYPE_DOUBLE ((const GVariantType *) "d")
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define _THREAD_MUTEX_INTERNAL_H 1
#define PATH_MAX 4096
#define LDBL_DECIMAL_DIG __LDBL_DECIMAL_DIG__
#define __LDBL_REDIR1(name,proto,alias) name proto
#define g_macro__has_feature(x) 0
#define _BITS_TYPES_LOCALE_T_H 1
#define _LIMITS_H___ 
#define GLIB_DEPRECATED_MACRO_IN_2_50 GLIB_DEPRECATED_MACRO
#define _WCHAR_T_DEFINED 
#define POLL_ERR POLL_ERR
#define __SI_SIGFAULT_ADDL 
#define GUINT16_SWAP_LE_BE_CONSTANT(val) ((guint16) ( (guint16) ((guint16) (val) >> 8) | (guint16) ((guint16) (val) << 8)))
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define __INT8_C(c) c
#define _BITS_TYPES_H 1
#define _SYS_TIME_H 1
#define GSIZE_FROM_BE(val) (GSIZE_TO_BE (val))
#define ENOLINK 67
#define g_node_insert_data_after(parent,sibling,data) g_node_insert_after ((parent), (sibling), g_node_new (data))
#define __INT_LEAST8_WIDTH__ 8
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define __INTMAX_TYPE__ long int
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define GINT32_FROM_LE(val) (GINT32_TO_LE (val))
#define g_date_day_of_year g_date_get_day_of_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_day_of_year)
#define g_assert_cmpfloat(n1,cmp,n2) G_STMT_START { long double __n1 = (long double) (n1), __n2 = (long double) (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'f'); } G_STMT_END
#define htobe16(x) __bswap_16 (x)
#define g_test_assert_expected_messages() g_test_assert_expected_messages_internal (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC)
#define g_slice_new0(type) (type *) (G_GNUC_EXTENSION ({ gsize __s = sizeof (type); gpointer __p; __p = g_slice_alloc (__s); memset (__p, 0, __s); __p; }))
#define NFDBITS __NFDBITS
#define __SHRT_MAX__ 0x7fff
#define __STDC_ISO_10646__ 201706L
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __INO_T_MATCHES_INO64_T 1
#define G_KEY_FILE_DESKTOP_KEY_TYPE "Type"
#define ILL_ILLOPC ILL_ILLOPC
#define __ARM_FEATURE_IDIV 1
#define g_static_mutex_trylock(mutex) g_mutex_trylock (g_static_mutex_get_mutex (mutex)) GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_mutex_trylock)
#define ILL_ILLOPN ILL_ILLOPN
#define __CFLOAT64X _Complex _Float64x
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __FLT64X_MAX_10_EXP__ 4932
#define ECONNABORTED 103
#define GUINT_TO_BE(val) ((guint) GUINT32_TO_BE (val))
#define SIGTTOU 22
#define EKEYREJECTED 129
#define _POSIX_SEM_NSEMS_MAX 256
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define GLIB_DEPRECATED_IN_2_64_FOR(f) GLIB_DEPRECATED_FOR(f)
#define EEXIST 17
#define __LDBL_IS_IEC_60559__ 2
#define GLIB_SYSDEF_AF_INET6 10
#define g_renew(struct_type,mem,n_structs) _G_RENEW (struct_type, mem, n_structs, realloc)
#define __ARM_FP 14
#define __FLT64X_IS_IEC_60559__ 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define GLIB_DEPRECATED_IN_2_30_FOR(f) GLIB_DEPRECATED_FOR(f)
#define SIGSTKFLT 16
#define _G_NEW(struct_type,n_structs,func) (struct_type *) (G_GNUC_EXTENSION ({ gsize __n = (gsize) (n_structs); gsize __s = sizeof (struct_type); gpointer __p; if (__s == 1) __p = g_ ##func (__n); else if (__builtin_constant_p (__n) && (__s == 0 || __n <= G_MAXSIZE / __s)) __p = g_ ##func (__n * __s); else __p = g_ ##func ##_n (__n, __s); __p; }))
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define G_GNUC_END_IGNORE_DEPRECATIONS _Pragma ("GCC diagnostic pop")
#define G_KEY_FILE_DESKTOP_KEY_VERSION "Version"
#define g_list_free1 g_list_free_1
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define G_MINSHORT SHRT_MIN
#define ENOPROTOOPT 92
#define GLIB_DEPRECATED_IN_2_70_FOR(f) GLIB_DEPRECATED_FOR(f)
#define NAME_MAX 255
#define __WINT_TYPE__ unsigned int
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define DBL_MANT_DIG __DBL_MANT_DIG__
#define SVE_MAGIC 0x53564501
#define __G_CONVERT_H__ 
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define GULONG_FROM_BE(val) (GULONG_TO_BE (val))
#define WIFEXITED(status) __WIFEXITED (status)
#define G_KEY_FILE_DESKTOP_KEY_ICON "Icon"
#define G_ALIGNOF(type) _Alignof (type) GLIB_AVAILABLE_MACRO_IN_2_60
#define __UINTMAX_TYPE__ long unsigned int
#define EINPROGRESS 115
#define _STRING_H 1
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_GENERIC_BITS_PER_LONG 
#define _STDC_PREDEF_H 1
#define CLOCK_MONOTONIC_COARSE 6
#define G_GOFFSET_MODIFIER G_GINT64_MODIFIER
#define SVE_VL_MAX __SVE_VL_MAX
#define __linux 1
#define G_MODULE_SUFFIX "so"
#define G_TEST_OPTION_ISOLATE_DIRS "isolate_dirs"
#define GLIB_AVAILABLE_IN_2_66 _GLIB_EXTERN
#define _NSIG (__SIGRTMAX + 1)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __OPTIMIZE__ 1
#define _DIRENT_MATCHES_DIRENT64 1
#define GLIB_DEPRECATED_MACRO_IN_2_62_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define si_int _sifields._rt.si_sigval.sival_int
#define __f32(x) x ##f32
#define __CHAR_UNSIGNED__ 1
#define EUSERS 87
#define G_REGEX_ERROR g_regex_error_quark ()
#define ESTALE 116
#define GLIB_DEPRECATED_TYPE_IN_2_28 GLIB_DEPRECATED_TYPE
#define GINT64_FROM_BE(val) (GINT64_TO_BE (val))
#define g_ptr_array_index(array,index_) ((array)->pdata)[index_]
#define __UINT32_MAX__ 0xffffffffU
#define __UID_T_TYPE __U32_TYPE
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __AARCH64_CMODEL_SMALL__ 1
#define GLIB_DEPRECATED_TYPE_IN_2_30 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_32 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_34 GLIB_DEPRECATED_TYPE
#define _POSIX_AIO_MAX 1
#define GLIB_DEPRECATED_TYPE_IN_2_36 GLIB_DEPRECATED_TYPE
#define __SIZE_T 
#define GLIB_DEPRECATED_MACRO_IN_2_36_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define _POSIX_PIPE_BUF 512
#define GSIZE_FROM_LE(val) (GSIZE_TO_LE (val))
#define LDBL_MANT_DIG __LDBL_MANT_DIG__
#define g_datalist_remove_no_notify(dl,k) g_datalist_id_remove_no_notify ((dl), g_quark_try_string (k))
#define SIGUSR1 10
#define __LDBL_MAX_EXP__ 16384
#define GUINT64_TO_LE(val) ((guint64) (val))
#define _POSIX2_EXPR_NEST_MAX 32
#define __INT_FAST32_WIDTH__ 64
#define _ATFILE_SOURCE 1
#define GSSIZE_FROM_LE(val) (GSSIZE_TO_LE (val))
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_26 
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __FLT128_MIN_EXP__ (-16381)
#define __GNUC_VA_LIST 
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_66_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define GLIB_DEPRECATED_TYPE_IN_2_50 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_52 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_54 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_56 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_58 GLIB_DEPRECATED_TYPE
#define WUNTRACED 2
#define GLIB_DEPRECATED_TYPE_IN_2_32_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define g_datalist_set_data_full(dl,k,d,f) g_datalist_id_set_data_full ((dl), g_quark_from_string (k), (d), (f))
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define g_dirname g_path_get_dirname GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_path_get_dirname)
#define __G_DIR_H__ 
#define g_rand_boolean(rand_) ((g_rand_int (rand_) & (1 << 15)) != 0)
#define GLIB_DEPRECATED_TYPE_IN_2_60 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_62 GLIB_DEPRECATED_TYPE
#define __always_inline __inline __attribute__ ((__always_inline__))
#define GLIB_DEPRECATED_TYPE_IN_2_64 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_66 GLIB_DEPRECATED_TYPE
#define FPE_FLTRES FPE_FLTRES
#define _BITS_TIME64_H 1
#define __G_PRIMES_H__ 
#define GUINT_TO_LE(val) ((guint) GUINT32_TO_LE (val))
#define g_date_days_in_month g_date_get_days_in_month GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_days_in_month)
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FD_SETSIZE 1024
#define G_SPAWN_ERROR g_spawn_error_quark ()
#define __FLT32X_IS_IEC_60559__ 2
#define __KERNEL_STRICT_NAMES 
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ENOMSG 42
#define EXIT_FAILURE 1
#define __INT_LEAST16_WIDTH__ 16
#define g_clear_handle_id(tag_ptr,clear_func) G_STMT_START { G_STATIC_ASSERT (sizeof *(tag_ptr) == sizeof (guint)); guint *_tag_ptr = (guint *) (tag_ptr); guint _handle_id; _handle_id = *_tag_ptr; if (_handle_id > 0) { *_tag_ptr = 0; clear_func (_handle_id); } } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_56
#define G_STATIC_MUTEX_INIT { NULL, PTHREAD_MUTEX_INITIALIZER } GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_mutex_init)
#define _SIZE_T_DEFINED_ 
#define _POSIX_AIO_LISTIO_MAX 2
#define G_VARIANT_TYPE_ANY ((const GVariantType *) "*")
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define ERANGE 34
#define G_PRIORITY_DEFAULT 0
#define ENFILE 23
#define __G_KEY_FILE_H__ 
#define __WCHAR_MIN__ 0U
#define G_VARIANT_TYPE_VARIANT ((const GVariantType *) "v")
#define SA_NOMASK SA_NODEFER
#define SI_TIMER SI_TIMER
#define g_rc_box_new0(type) ((type *) g_rc_box_alloc0 (sizeof (type)))
#define _BITS_SIGSTACK_H 1
#define __INT64_C(c) c ## L
#define FLT_TRUE_MIN __FLT_DENORM_MIN__
#define G_GINT32_MODIFIER ""
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define SA_SIGINFO 4
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define G_LN10 2.3025850929940456840179914546843642076011014886288
#define __INT_WCHAR_T_H 
#define WSTOPPED 2
#define _POSIX_THREAD_THREADS_MAX 64
#define _GLIB_CLEANUP(func) __attribute__((cleanup(func)))
#define __CFLOAT32 _Complex _Float32
#define G_STMT_START do
#define G_GNUC_FORMAT(arg_idx) __attribute__ ((__format_arg__ (arg_idx)))
#define _SYS_USER_H 1
#define _POSIX_MQ_OPEN_MAX 8
#define _FORTIFY_SOURCE 2
#define G_LOG_FATAL_MASK (G_LOG_FLAG_RECURSION | G_LOG_LEVEL_ERROR)
#define G_SEARCHPATH_SEPARATOR_S ":"
#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#define _POSIX_LINK_MAX 8
#define GLIB_DEPRECATED_MACRO_IN_2_66 GLIB_DEPRECATED_MACRO
#define COLL_WEIGHTS_MAX 255
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define G_VARIANT_TYPE_SIGNATURE ((const GVariantType *) "g")
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define EMULTIHOP 72
#define DBL_DIG __DBL_DIG__
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define GLIB_DEPRECATED_IN_2_46_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __INT_FAST64_WIDTH__ 64
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _BITS_SIGINFO_ARCH_H 1
#define _DEFAULT_SOURCE 1
#define g_warn_if_fail(expr) do { if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #expr); } while (0)
#define GLIB_DEPRECATED_IN_2_36 GLIB_DEPRECATED
#define __G_VARIANT_H__ 
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_60_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __USE_EXTERN_INLINES 1
#define __attribute_used__ __attribute__ ((__used__))
#define __LOCK_ALIGNMENT 
#define __FLT32X_MANT_DIG__ 53
#define EMSGSIZE 90
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define ETIMEDOUT 110
#define _ASM_GENERIC_INT_LL64_H 
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_30_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __USER_LABEL_PREFIX__ 
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define G_HAVE_GINT64 1
#define CLOCK_REALTIME_ALARM 8
#define g_main_run(loop) g_main_loop_run(loop) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_run)
#define DT_BLK DT_BLK
#define ENODATA 61
#define _BITS_ENDIANNESS_H 1
#define GLIB_DEPRECATED_IN_2_52_FOR(f) GLIB_DEPRECATED_FOR(f)
#define g_assert_false(expr) G_STMT_START { if G_LIKELY (!(expr)) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should be FALSE"); } G_STMT_END
#define __FLT32_MAX_10_EXP__ 38
#define G_DEBUG_HERE() g_log_structured (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, "CODE_FILE", __FILE__, "CODE_LINE", G_STRINGIFY (__LINE__), "CODE_FUNC", G_STRFUNC, "MESSAGE", "%" G_GINT64_FORMAT ": %s", g_get_monotonic_time (), G_STRLOC)
#define g_autoptr(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_TYPENAME(TypeName)
#define __GLIBC__ 2
#define G_SEARCHPATH_SEPARATOR ':'
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define __END_DECLS 
#define G_URI_RESERVED_CHARS_ALLOWED_IN_PATH G_URI_RESERVED_CHARS_ALLOWED_IN_PATH_ELEMENT "/"
#define __G_HASH_H__ 
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_62_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __CONCAT(x,y) x ## y
#define WCONTINUED 8
#define __STDC_HOSTED__ 1
#define EDEADLOCK EDEADLK
#define __BITS_PER_LONG 64
#define __SLONG32_TYPE int
#define _BITS_UINTN_IDENTITY_H 1
#define DT_WHT DT_WHT
#define g_scanner_freeze_symbol_table(scanner) ((void)0) GLIB_DEPRECATED_MACRO_IN_2_26
#define _SYS_SELECT_H 1
#define g_chunk_new0(type,chunk) ((type *) g_mem_chunk_alloc0 (chunk))
#define g_ascii_isprint(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_PRINT) != 0)
#define GLIB_DEPRECATED_MACRO_FOR(f) _GLIB_GNUC_DO_PRAGMA(GCC warning G_STRINGIFY (Deprecated pre-processor symbol: replace with #f))
#define G_KEY_FILE_DESKTOP_KEY_MIME_TYPE "MimeType"
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __jmp_buf_tag_defined 1
#define _BITS_TYPESIZES_H 1
#define _BITS_CPU_SET_H 1
#define g_atomic_rc_box_new0(type) ((type *) g_atomic_rc_box_alloc0 (sizeof (type)))
#define FPE_FLTDIV FPE_FLTDIV
#define SIGURG 23
#define si_status _sifields._sigchld.si_status
#define __G_RAND_H__ 
#define DECIMAL_DIG __DECIMAL_DIG__
#define g_string_append_c(gstr,c) g_string_append_c_inline (gstr, c)
#define ENOTTY 25
#define _BSD_SIZE_T_DEFINED_ 
#define __DBL_DIG__ 15
#define __FLT32_DIG__ 6
#define EINTR 4
#define __f32x(x) x ##f32x
#define G_VARIANT_TYPE_UINT16 ((const GVariantType *) "q")
#define __RLIM_T_MATCHES_RLIM64_T 1
#define G_URI_RESERVED_CHARS_GENERIC_DELIMITERS ":/?#[]@"
#define SEGV_PKUERR SEGV_PKUERR
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define GLIB_DEPRECATED_IN_2_40_FOR(f) GLIB_DEPRECATED_FOR(f)
#define SS_DISABLE SS_DISABLE
#define g_utf8_next_char(p) (char *)((p) + g_utf8_skip[*(const guchar *)(p)])
#define g_string_sprintf g_string_printf GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_string_printf)
#define EBFONT 59
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define GLIB_SIZEOF_VOID_P 8
#define G_NORETURN __attribute__ ((__noreturn__))
#define __SHRT_WIDTH__ 16
#define __f64x(x) x ##f64x
#define g_node_insert_data(parent,position,data) g_node_insert ((parent), (position), g_node_new (data))
#define ILL_COPROC ILL_COPROC
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_28 
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define GLIB_VERSION_2_42 (G_ENCODE_VERSION (2, 42))
#define __SVE_NUM_ZREGS 32
#define g_ascii_isdigit(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_DIGIT) != 0)
#define __FLT32_IS_IEC_60559__ 2
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define __DEV_T_TYPE __UQUAD_TYPE
#define _GLIB_AUTOPTR_QUEUE_TYPENAME(TypeName) TypeName ##_queueautoptr
#define SA_ONSTACK 0x08000000
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_30 
#define __GLIBC_USE_ISOC2X 0
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_32 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_34 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_38 
#define SIGIO SIGPOLL
#define g_list_previous(list) ((list) ? (((GList *)(list))->prev) : NULL)
#define ___int_wchar_t_h 
#define G_GSSIZE_MODIFIER "l"
#define DBL_HAS_SUBNORM __DBL_HAS_DENORM__
#define ILL_ILLADR ILL_ILLADR
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __nonnull(params) __attribute_nonnull__ (params)
#define EHOSTUNREACH 113
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_40 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_44 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_46 
#define G_TIME_SPAN_SECOND (G_GINT64_CONSTANT (1000000))
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_48 
#define G_MININT16 ((gint16) (-G_MAXINT16 - 1))
#define si_call_addr _sifields._sigsys._call_addr
#define SIGILL 4
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define __GLIBC_USE_IEC_60559_BFP_EXT 0
#define G_VARIANT_TYPE_BYTESTRING_ARRAY ((const GVariantType *) "aay")
#define __FLT16_HAS_QUIET_NAN__ 1
#define g_chunk_free(mem,mem_chunk) (g_mem_chunk_free (mem_chunk, mem))
#define g_string_sprintfa g_string_append_printf GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_string_append_printf)
#define RE_DUP_MAX (0x7fff)
#define ENOTNAM 118
#define __G_HOST_UTILS_H__ 
#define _POSIX_NAME_MAX 14
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_50 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_52 
#define le64toh(x) __uint64_identity (x)
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_54 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_56 
#define GLIB_AVAILABLE_IN_2_72 _GLIB_EXTERN
#define G_OPTION_ERROR (g_option_error_quark ())
#define g_atomic_rc_box_dup(block_size,mem_block) ((glib_typeof (mem_block)) (g_atomic_rc_box_dup) (block_size, mem_block))
#define DBL_MAX __DBL_MAX__
#define __SI_HAVE_SIGSYS 1
#define __sched_priority sched_priority
#define GLIB_DEPRECATED_TYPE_IN_2_68_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define g_atomic_rc_box_new(type) ((type *) g_atomic_rc_box_alloc (sizeof (type)))
#define G_MEM_ALIGN GLIB_SIZEOF_LONG
#define g_atomic_pointer_xor(atomic,val) (G_GNUC_EXTENSION ({ gsize *gapx_atomic = (gsize *) (atomic); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gsize)); (void) (0 ? (gpointer) *(atomic) : NULL); (void) (0 ? (val) ^ (val) : 1); (gsize) __atomic_fetch_xor (gapx_atomic, (val), __ATOMIC_SEQ_CST); }))
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_52_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define _WCHAR_T_ 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_60 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_62 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_64 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_66 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_68 
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define G_VARIANT_TYPE_OBJECT_PATH ((const GVariantType *) "o")
#define RTSIG_MAX 32
#define EBADFD 77
#define __FP_FAST_FMA 1
#define __G_LIB_H__ 
#define _VA_LIST_DEFINED 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_70 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_72 
#define __FLT32X_HAS_INFINITY__ 1
#define __INT32_MAX__ 0x7fffffff
#define SEGV_ACCERR SEGV_ACCERR
#define GLIB_DEPRECATED_MACRO_IN_2_70 GLIB_DEPRECATED_MACRO
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __SIZEOF_PTHREAD_COND_T 48
#define G_PRIORITY_HIGH -100
#define __FLT16_DIG__ 3
#define G_PASTE_ARGS(identifier1,identifier2) identifier1 ## identifier2
#define EUCLEAN 117
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define EXFULL 54
#define __STDC_IEC_559__ 1
#define G_HOOK_FLAGS(hook) (G_HOOK (hook)->flags)
#define g_ascii_islower(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_LOWER) != 0)
#define __UINT16_C(c) c
#define GLIB_AVAILABLE_TYPE_IN_2_26 
#define GLIB_AVAILABLE_TYPE_IN_2_28 
#define GLIB_DEPRECATED_MACRO_IN_2_48_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define G_UNICHAR_MAX_DECOMPOSITION_LENGTH 18
#define GLIB_UNAVAILABLE_STATIC_INLINE(maj,min) G_UNAVAILABLE(maj,min)
#define __G_LIST_H__ 
#define __DECIMAL_DIG__ 36
#define _POSIX2_RE_DUP_MAX 255
#define GLIB_AVAILABLE_TYPE_IN_2_30 
#define GLIB_AVAILABLE_TYPE_IN_2_32 
#define G_VARIANT_DICT_INIT(asv) { { { asv, 3488698669u , { 0, } } } }
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 2
#define __STDC_IEC_559_COMPLEX__ 1
#define __G_SPAWN_H__ 
#define SI_USER SI_USER
#define EIO 5
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define GULONG_FROM_LE(val) (GULONG_TO_LE (val))
#define __gnu_linux__ 1
#define __G_POLL_H__ 
#define __USE_XOPEN2K 1
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define __INT16_MAX__ 0x7fff
#define _ENDIAN_H 1
#define __FLT128_IS_IEC_60559__ 2
#define _BITS_SIGNUM_ARCH_H 1
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define G_VARIANT_TYPE_UNIT ((const GVariantType *) "()")
#define GLIB_AVAILABLE_TYPE_IN_2_50 
#define GLIB_AVAILABLE_TYPE_IN_2_52 
#define GLIB_AVAILABLE_TYPE_IN_2_54 
#define GLIB_AVAILABLE_TYPE_IN_2_56 
#define ENOTSOCK 88
#define GLIB_DEPRECATED_IN_2_62_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __G_SHELL_H__ 
#define g_try_renew(struct_type,mem,n_structs) _G_RENEW (struct_type, mem, n_structs, try_realloc)
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define GLIB_AVAILABLE_TYPE_IN_2_62 
#define GLIB_AVAILABLE_TYPE_IN_2_64 
#define GLIB_AVAILABLE_TYPE_IN_2_68 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define DELAYTIMER_MAX 2147483647
#define __LDBL_HAS_QUIET_NAN__ 1
#define g_ascii_isxdigit(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_XDIGIT) != 0)
#define _BSD_SIZE_T_ 
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define __FLT16_MIN_EXP__ (-13)
#define GLIB_AVAILABLE_TYPE_IN_2_72 
#define g_assert_cmpmem(m1,l1,m2,l2) G_STMT_START { gconstpointer __m1 = m1, __m2 = m2; int __l1 = l1, __l2 = l2; if (__l1 != 0 && __m1 == NULL) g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #l1 " == 0 || " #m1 " != NULL)"); else if (__l2 != 0 && __m2 == NULL) g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #l2 " == 0 || " #m2 " != NULL)"); else if (__l1 != __l2) g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #l1 " (len(" #m1 ")) == " #l2 " (len(" #m2 "))", (long double) __l1, "==", (long double) __l2, 'i'); else if (__l1 != 0 && __m2 != NULL && memcmp (__m1, __m2, __l1) != 0) g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #m1 " == " #m2 ")"); } G_STMT_END
#define G_SQRT2 1.4142135623730950488016887242096980785696718753769
#define g_date_sunday_week_of_year g_date_get_sunday_week_of_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_sunday_week_of_year)
#define __FLT64_MANT_DIG__ 53
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define __attribute_const__ __attribute__ ((__const__))
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define g_atomic_int_add(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (val) : 1); (gint) __atomic_fetch_add ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define FLT_MIN_EXP __FLT_MIN_EXP__
#define __FLT64X_MANT_DIG__ 113
#define g_slice_free(type,mem) G_STMT_START { if (1) g_slice_free1 (sizeof (type), (mem)); else (void) ((type*) 0 == (mem)); } G_STMT_END
#define _DIRENT_HAVE_D_RECLEN 
#define ELIBACC 79
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define G_MAXINT16 ((gint16) 0x7fff)
#define _T_PTRDIFF 
#define __GNUC__ 11
#define __G_MARKUP_H__ 
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define __pie__ 2
#define GLIB_DEPRECATED_MACRO_IN_2_60_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __G_FILEUTILS_H__ 
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define g_memmove(dest,src,len) G_STMT_START { memmove ((dest), (src), (len)); } G_STMT_END GLIB_DEPRECATED_MACRO_IN_2_40_FOR(memmove)
#define g_assert_cmpint(n1,cmp,n2) G_STMT_START { gint64 __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'i'); } G_STMT_END
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define __CFLOAT32X _Complex _Float32x
#define GLIB_DEPRECATED_MACRO_IN_2_40 GLIB_DEPRECATED_MACRO
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define g_mem_chunk_create(type,x,y) (g_mem_chunk_new (NULL, sizeof (type), 0, 0))
#define g_date_sunday_weeks_in_year g_date_get_sunday_weeks_in_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_sunday_weeks_in_year)
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define __ino_t_defined 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_36 
#define GLIB_SYSDEF_AF_INET 2
#define __G_TREE_H__ 
#define __daddr_t_defined 
#define ESOCKTNOSUPPORT 94
#define __timeval_defined 1
#define G_APPROX_VALUE(a,b,epsilon) (((a) > (b) ? (a) - (b) : (b) - (a)) < (epsilon))
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define SSIZE_MAX LONG_MAX
#define GLIB_DEPRECATED_TYPE_IN_2_64_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define G_CSET_A_2_Z "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define __LDBL_MIN_EXP__ (-16381)
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define g_atomic_rc_box_acquire(mem_block) ((glib_typeof (mem_block)) (g_atomic_rc_box_acquire) (mem_block))
#define ELNRNG 48
#define __SI_MAX_SIZE 128
#define G_KEY_FILE_DESKTOP_KEY_PATH "Path"
#define G_CSET_a_2_z "abcdefghijklmnopqrstuvwxyz"
#define GLIB_DEPRECATED_TYPE_IN_2_30_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __STRING(x) #x
#define LONG_MAX __LONG_MAX__
#define __SVE_VQ_BYTES 16
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define g_bit_storage(number) g_bit_storage_impl(number)
#define G_MAXSHORT SHRT_MAX
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define __ONCE_ALIGNMENT 
#define G_MAXINT64 G_GINT64_CONSTANT(0x7fffffffffffffff)
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define _POSIX_HOST_NAME_MAX 255
#define G_STRFUNC ((const char*) (__func__))
#define __FLT64_MAX_10_EXP__ 308
#define g_slice_dup(type,mem) (1 ? (type*) g_slice_copy (sizeof (type), (mem)) : ((void) ((type*) 0 == (mem)), (type*) 0))
#define CHAR_MIN 0
#define __USE_ISOC99 1
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define SA_NODEFER 0x40000000
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define LDBL_MAX_10_EXP __LDBL_MAX_10_EXP__
#define g_uint64_checked_add(dest,a,b) (!__builtin_add_overflow(a, b, dest))
#define __FLT16_MAX_10_EXP__ 4
#define __DBL_IS_IEC_60559__ 2
#define ____sigval_t_defined 
#define g_date_monday_weeks_in_year g_date_get_monday_weeks_in_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_monday_weeks_in_year)
#define _GCC_WCHAR_T 
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_44 
#define GLIB_DEPRECATED_MACRO_IN_2_28_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define ENOCSI 50
#define be64toh(x) __bswap_64 (x)
#define SI_QUEUE SI_QUEUE
#define _POSIX_SIGQUEUE_MAX 32
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define G_KEY_FILE_DESKTOP_KEY_CATEGORIES "Categories"
#define GLIB_DEPRECATED_IN_2_50_FOR(f) GLIB_DEPRECATED_FOR(f)
#define EISNAM 120
#define __DBL_HAS_INFINITY__ 1
#define GUINT32_SWAP_LE_BE_CONSTANT(val) ((guint32) ( (((guint32) (val) & (guint32) 0x000000ffU) << 24) | (((guint32) (val) & (guint32) 0x0000ff00U) << 8) | (((guint32) (val) & (guint32) 0x00ff0000U) >> 8) | (((guint32) (val) & (guint32) 0xff000000U) >> 24)))
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define GLIB_VERSION_2_48 (G_ENCODE_VERSION (2, 48))
#define _POSIX_NGROUPS_MAX 8
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_60 
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_62 
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_66 
#define DBL_DECIMAL_DIG __DBL_DECIMAL_DIG__
#define RAND_MAX 2147483647
#define __G_QSORT_H__ 
#define GINT16_FROM_BE(val) (GINT16_TO_BE (val))
#define SIGVTALRM 26
#define SIGQUIT 3
#define g_test_undefined() (g_test_config_vars->test_undefined)
#define GLIB_AVAILABLE_TYPE_IN_2_38 
#define _FEATURES_H 1
#define _BITS_SIGCONTEXT_H 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_70 
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_72 
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define GLIB_DEPRECATED_IN_2_50 GLIB_DEPRECATED
#define SCHED_FIFO 1
#define G_VARIANT_TYPE_INT16 ((const GVariantType *) "n")
#define __DADDR_T_TYPE __S32_TYPE
#define EADDRNOTAVAIL 99
#define GLIB_DEPRECATED_TYPE_IN_2_54_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define ENOSYS 38
#define EDEADLK 35
#define __INTPTR_WIDTH__ 64
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define EPIPE 32
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_42 
#define __ASM_POSIX_TYPES_H 
#define GLIB_DEPRECATED_IN_2_56 GLIB_DEPRECATED
#define LONG_MIN (-LONG_MAX - 1L)
#define G_MAXUSHORT USHRT_MAX
#define be32toh(x) __bswap_32 (x)
#define g_autolist(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_LIST_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_LIST_TYPENAME(TypeName)
#define __OFF64_T_TYPE __SQUAD_TYPE
#define G_ENCODE_VERSION(major,minor) ((major) << 16 | (minor) << 8)
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define _BITS_SETJMP_H 1
#define __HAVE_FLOAT128X 0
#define _SIZE_T_DEFINED 
#define G_GNUC_DEPRECATED __attribute__((__deprecated__))
#define _WCHAR_T_DEFINED_ 
#define CLAMP(x,low,high) (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))
#define GLIB_CHECK_VERSION(major,minor,micro) (GLIB_MAJOR_VERSION > (major) || (GLIB_MAJOR_VERSION == (major) && GLIB_MINOR_VERSION > (minor)) || (GLIB_MAJOR_VERSION == (major) && GLIB_MINOR_VERSION == (minor) && GLIB_MICRO_VERSION >= (micro)))
#define GLIB_UNAVAILABLE_TYPE(maj,min) G_UNAVAILABLE(maj,min)
#define EBADMSG 74
#define FLT_MIN_10_EXP __FLT_MIN_10_EXP__
#define __f64(x) x ##f64
#define __USE_POSIX199506 1
#define GLIB_SIZEOF_SSIZE_T 8
#define __LDBL_HAS_DENORM__ 1
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define _POSIX_RE_DUP_MAX 255
#define g_atomic_pointer_compare_and_exchange(atomic,oldval,newval) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof (oldval) == sizeof (gpointer)); gpointer gapcae_oldval = (gpointer)(oldval); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); (void) (0 ? (gpointer) *(atomic) : NULL); __atomic_compare_exchange_n ((atomic), (void *) (&(gapcae_oldval)), (newval), FALSE, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST) ? TRUE : FALSE; }))
#define __stub_setlogin 
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_40_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define GLIB_DEPRECATED_TYPE_IN_2_52_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define __FLT128_HAS_INFINITY__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define GINT_TO_BE(val) ((gint) GINT32_TO_BE (val))
#define g_dataset_get_data(l,k) (g_dataset_id_get_data ((l), g_quark_try_string (k)))
#define SIGABRT 6
#define SS_ONSTACK SS_ONSTACK
#define CLD_CONTINUED CLD_CONTINUED
#define ETOOMANYREFS 109
#define GLIB_USING_SYSTEM_PRINTF 
#define G_GINT16_MODIFIER "h"
#define ENOMEM 12
#define G_LN2 0.69314718055994530941723212145817656807550013436026
#define SA_RESETHAND 0x80000000
#define __dev_t_defined 
#define GLIB_MINOR_VERSION 72
#define __S32_TYPE int
#define g_test_trap_assert_failed() g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 1, 0)
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define GLIB_SYSDEF_MSG_OOB 1
#define GLONG_FROM_LE(val) (GLONG_TO_LE (val))
#define __DBL_MAX_EXP__ 1024
#define ENOLCK 37
#define G_UNLIKELY(expr) (__builtin_expect (_G_BOOLEAN_EXPR(expr), 0))
#define _SYS_PROCFS_H 1
#define __WCHAR_WIDTH__ 32
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define _POSIX_DELAYTIMER_MAX 32
#define _GLIB_AUTO_FUNC_NAME(TypeName) glib_auto_cleanup_ ##TypeName
#define PTHREAD_KEYS_MAX 1024
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define g_clear_slist(slist_ptr,destroy) G_STMT_START { GSList *_slist; _slist = *(slist_ptr); if (_slist) { *slist_ptr = NULL; if ((destroy) != NULL) g_slist_free_full (_slist, (destroy)); else g_slist_free (_slist); } } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_64
#define ERFKILL 132
#define GLIB_DEPRECATED_TYPE_IN_2_26 GLIB_DEPRECATED_TYPE
#define __FLT16_DECIMAL_DIG__ 5
#define GINT16_FROM_LE(val) (GINT16_TO_LE (val))
#define GLIB_DEPRECATED_IN_2_72_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define GLIB_VERSION_2_50 (G_ENCODE_VERSION (2, 50))
#define G_GNUC_BEGIN_IGNORE_DEPRECATIONS _Pragma ("GCC diagnostic push") _Pragma ("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#define _VA_LIST_ 
#define DBL_MIN_EXP __DBL_MIN_EXP__
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define EPFNOSUPPORT 96
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define g_datalist_id_set_data(dl,q,d) g_datalist_id_set_data_full ((dl), (q), (d), NULL)
#define G_STRUCT_OFFSET(struct_type,member) ((glong) offsetof (struct_type, member))
#define g_macro__has_extension(x) 0
#define __FLT_IS_IEC_60559__ 2
#define BUS_OBJERR BUS_OBJERR
#define __G_TIMER_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_42_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define ENOTSUP EOPNOTSUPP
#define G_DATE_BAD_DAY 0U
#define GLIB_AVAILABLE_TYPE_IN_2_34 
#define g_date_year g_date_get_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_year)
#define SEGV_MAPERR SEGV_MAPERR
#define G_TIME_SPAN_HOUR (G_GINT64_CONSTANT (3600000000))
#define GUINT64_SWAP_LE_BE_CONSTANT(val) ((guint64) ( (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00000000000000ffU)) << 56) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x000000000000ff00U)) << 40) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x0000000000ff0000U)) << 24) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00000000ff000000U)) << 8) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x000000ff00000000U)) >> 8) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x0000ff0000000000U)) >> 24) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00ff000000000000U)) >> 40) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0xff00000000000000U)) >> 56)))
#define G_VARIANT_PARSE_ERROR (g_variant_parse_error_quark ())
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define G_STATIC_ASSERT(expr) _Static_assert (expr, "Expression evaluates to false")
#define _GLIB_AUTOPTR_CLEAR_FUNC_NAME(TypeName) glib_autoptr_clear_ ##TypeName
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define GINT32_FROM_BE(val) (GINT32_TO_BE (val))
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __SVE_NUM_PREGS 16
#define __glibc_objsize(__o) __bos (__o)
#define GLIB_DEPRECATED_MACRO_IN_2_66_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define G_GINTPTR_FORMAT "li"
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define G_GUINT16_FORMAT "hu"
#define GLIB_SYSDEF_MSG_PEEK 2
#define __USECONDS_T_TYPE __U32_TYPE
#define __HAVE_FLOAT16 0
#define g_node_insert_data_before(parent,sibling,data) g_node_insert_before ((parent), (sibling), g_node_new (data))
#define g_test_slow() (!g_test_config_vars->test_quick)
#define ESRMNT 69
#define g_steal_pointer(pp) ((glib_typeof (*pp)) (g_steal_pointer) (pp))
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define _LINUX_STDDEF_H 
#define G_NORETURN_FUNCPTR __attribute__ ((__noreturn__)) GLIB_AVAILABLE_MACRO_IN_2_68
#define __FLT32_HAS_QUIET_NAN__ 1
#define _T_WCHAR 
#define GLIB_SYSDEF_AF_UNIX 1
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define G_SHELL_ERROR g_shell_error_quark ()
#define EBADSLT 57
#define __SIZEOF_SIZE_T__ 8
#define g_ascii_isspace(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_SPACE) != 0)
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _WCHAR_T 
#define __SIG_ATOMIC_WIDTH__ 32
#define GLIB_VERSION_2_52 (G_ENCODE_VERSION (2, 52))
#define g_node_next_sibling(node) ((node) ? ((GNode*) (node))->next : NULL)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_50_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define si_syscall _sifields._sigsys._syscall
#define SIG_BLOCK 0
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define g_rc_box_acquire(mem_block) ((glib_typeof (mem_block)) (g_rc_box_acquire) (mem_block))
#define GINT_TO_LE(val) ((gint) GINT32_TO_LE (val))
#define G_GNUC_UNUSED __attribute__ ((__unused__))
#define g_warning_once(...) G_STMT_START { static int G_PASTE (_GWarningOnceBoolean, __LINE__) = 0; if (g_atomic_int_compare_and_exchange (&G_PASTE (_GWarningOnceBoolean, __LINE__), 0, 1)) g_warning (__VA_ARGS__); } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_64
#define GLIB_VERSION_2_56 (G_ENCODE_VERSION (2, 56))
#define BUS_ADRALN BUS_ADRALN
#define __SIZEOF_WINT_T__ 4
#define __G_IOCHANNEL_H__ 
#define errno (*__errno_location ())
#define G_WIN32_DLLMAIN_FOR_DLL_NAME(static,dll_name) GLIB_DEPRECATED_MACRO_IN_2_26
#define GLIB_VERSION_2_30 (G_ENCODE_VERSION (2, 30))
#define GLIB_VERSION_2_34 (G_ENCODE_VERSION (2, 34))
#define GLIB_VERSION_2_36 (G_ENCODE_VERSION (2, 36))
#define __LONG_LONG_WIDTH__ 64
#define __SI_CLOCK_T __clock_t
#define GLIB_SYSDEF_POLLHUP =16
#define EADV 68
#define __U16_TYPE unsigned short int
#define GINT32_TO_BE(val) ((gint32) GUINT32_SWAP_LE_BE (val))
#define CLD_EXITED CLD_EXITED
#define GLIB_DEPRECATED_TYPE_IN_2_40_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define GLIB_VERSION_2_40 (G_ENCODE_VERSION (2, 40))
#define __FLT32_MAX_EXP__ 128
#define GLIB_VERSION_2_44 (G_ENCODE_VERSION (2, 44))
#define GLIB_VERSION_2_46 (G_ENCODE_VERSION (2, 46))
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define GLIB_DEPRECATED_IN_2_60 GLIB_DEPRECATED
#define _BITS_POSIX2_LIM_H 1
#define g_assert_cmpstr(s1,cmp,s2) G_STMT_START { const char *__s1 = (s1), *__s2 = (s2); if (g_strcmp0 (__s1, __s2) cmp 0) ; else g_assertion_message_cmpstr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #s1 " " #cmp " " #s2, __s1, #cmp, __s2); } G_STMT_END
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define GLIB_VERSION_2_54 (G_ENCODE_VERSION (2, 54))
#define _PTRDIFF_T 
#define GLIB_VERSION_2_58 (G_ENCODE_VERSION (2, 58))
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define GLIB_DEPRECATED_TYPE_FOR(f) G_DEPRECATED_FOR(f)
#define FPSIMD_MAGIC 0x46508001
#define __ARM_FP16_FORMAT_IEEE 1
#define si_uid _sifields._kill.si_uid
#define __WTERMSIG(status) ((status) & 0x7f)
#define G_OPTION_REMAINING ""
#define GLIB_VERSION_2_60 (G_ENCODE_VERSION (2, 60))
#define GLIB_VERSION_2_62 (G_ENCODE_VERSION (2, 62))
#define GLIB_VERSION_2_64 (G_ENCODE_VERSION (2, 64))
#define GLIB_VERSION_2_66 (G_ENCODE_VERSION (2, 66))
#define GLIB_VERSION_2_68 (G_ENCODE_VERSION (2, 68))
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define G_E 2.7182818284590452353602874713526624977572470937000
#define GLIB_DEPRECATED_MACRO_IN_2_38_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __FLT_MIN_EXP__ (-125)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define GLIB_VERSION_2_70 (G_ENCODE_VERSION (2, 70))
#define g_assert_not_reached() G_STMT_START { g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, NULL); } G_STMT_END
#define GLIB_VERSION_2_72 (G_ENCODE_VERSION (2, 72))
#define SIGSTKSZ 16384
#define __PIE__ 2
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define WEXITED 4
#define G_URI_RESERVED_CHARS_ALLOWED_IN_USERINFO G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS ":"
#define _STRUCT_TIMESPEC 1
#define GLIB_DEPRECATED_IN_2_60_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define g_assert_cmpstrv(strv1,strv2) G_STMT_START { const char * const *__strv1 = (const char * const *) (strv1); const char * const *__strv2 = (const char * const *) (strv2); if (!__strv1 || !__strv2) { if (__strv1) { g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #strv1 " == " #strv2 "): " #strv2 " is NULL, but " #strv1 " is not"); } else if (__strv2) { g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #strv1 " == " #strv2 "): " #strv1 " is NULL, but " #strv2 " is not"); } } else { guint __l1 = g_strv_length ((char **) __strv1); guint __l2 = g_strv_length ((char **) __strv2); if (__l1 != __l2) { char *__msg; __msg = g_strdup_printf ("assertion failed (" #strv1 " == " #strv2 "): length %u does not equal length %u", __l1, __l2); g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, __msg); g_free (__msg); } else { guint __i; for (__i = 0; __i < __l1; __i++) { if (g_strcmp0 (__strv1[__i], __strv2[__i]) != 0) { g_assertion_message_cmpstrv (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #strv1 " == " #strv2, __strv1, __strv2, __i); } } } } } G_STMT_END
#define ENAVAIL 119
#define G_KEY_FILE_DESKTOP_KEY_NOT_SHOW_IN "NotShowIn"
#define __ASM_SVE_CONTEXT_H 
#define __uid_t_defined 
#define WNOHANG 1
#define alloca(size) __builtin_alloca (size)
#define DBL_TRUE_MIN __DBL_DENORM_MIN__
#define _POSIX2_BC_BASE_MAX 99
#define __flexarr []
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define G_PI_2 1.5707963267948966192313216916397514420985846996876
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define SIGCHLD 17
#define __THROWNL __attribute__ ((__nothrow__))
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __PTRDIFF_T 
#define _DIRENT_HAVE_D_OFF 
#define EREMOTE 66
#define __HAVE_GENERIC_SELECTION 1
#define __FLT32X_MIN_EXP__ (-1021)
#define GINT64_FROM_LE(val) (GINT64_TO_LE (val))
#define _POSIX_CLOCKRES_MIN 20000000
#define DT_LNK DT_LNK
#define __INT_FAST64_TYPE__ long int
#define GLIB_DEPRECATED_TYPE_IN_2_36_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __ARM_FP16_ARGS 1
#define g_new(struct_type,n_structs) _G_NEW (struct_type, n_structs, malloc)
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define ENOBUFS 105
#define _ANSI_STDDEF_H 
#define g_datalist_set_data(dl,k,d) g_datalist_set_data_full ((dl), (k), (d), NULL)
#define G_THREAD_ERROR g_thread_error_quark ()
#define ENOTEMPTY 39
#define g_alloca(size) alloca (size)
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define EADDRINUSE 98
#define _VA_LIST 
#define MAXNAMLEN NAME_MAX
#define __G_THREAD_H__ 
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define htole32(x) __uint32_identity (x)
#define g_main_is_running(loop) g_main_loop_is_running(loop) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_is_running)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_72_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __ARM_FEATURE_CLZ 1
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define GPOINTER_TO_INT(p) ((gint) (glong) (p))
#define EAFNOSUPPORT 97
#define g_node_append_data(parent,data) g_node_insert_before ((parent), NULL, g_node_new (data))
#define __unix__ 1
#define SEGV_MTESERR SEGV_MTESERR
#define _GLIB_AUTOPTR_LIST_FUNC_NAME(TypeName) glib_listautoptr_cleanup_ ##TypeName
#define G_STR_DELIMITERS "_-|> <."
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define GINT32_TO_LE(val) ((gint32) (val))
#define CLOCK_REALTIME_COARSE 5
#define GUINT32_TO_BE(val) (GUINT32_SWAP_LE_BE (val))
#define g_size_checked_add(dest,a,b) (!__builtin_add_overflow(a, b, dest))
#define __WCOREFLAG 0x80
#define GLIB_DEPRECATED_IN_2_28_FOR(f) GLIB_DEPRECATED_FOR(f)
#define GLIB_DEPRECATED_IN_2_36_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define G_MAXUINT16 ((guint16) 0xffff)
#define __LP64__ 1
#define G_MINSSIZE G_MINLONG
#define G_OS_INFO_KEY_ID GLIB_AVAILABLE_MACRO_IN_2_64 "ID"
#define __DBL_HAS_QUIET_NAN__ 1
#define G_NODE_IS_LEAF(node) (((GNode*) (node))->children == NULL)
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define __FLT_EVAL_METHOD_C99__ 0
#define G_MAXUINT8 ((guint8) 0xff)
#define __G_BYTES_H__ 
#define FLT_RADIX __FLT_RADIX__
#define GLIB_DEPRECATED_TYPE_IN_2_62_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define _POSIX_SYMLOOP_MAX 8
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define G_ALLOC_AND_FREE 2
#define G_IEEE754_DOUBLE_BIAS (1023)
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __MODE_T_TYPE __U32_TYPE
#define __G_ALLOCA_H__ 
#define SIGTRAP 5
#define EISDIR 21
#define G_MAXUINT32 ((guint32) 0xffffffff)
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define G_GNUC_NO_INLINE __attribute__ ((__noinline__))
#define __FLT64_MIN_EXP__ (-1021)
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define g_warn_if_reached() do { g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, NULL); } while (0)
#define G_GNUC_CHECK_VERSION(major,minor) ((__GNUC__ > (major)) || ((__GNUC__ == (major)) && (__GNUC_MINOR__ >= (minor))))
#define G_STATIC_ASSERT_EXPR(expr) ((void) sizeof (char[(expr) ? 1 : -1]))
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define CHAR_MAX UCHAR_MAX
#define __LDBL_DECIMAL_DIG__ 36
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define FPE_INTDIV FPE_INTDIV
#define __aarch64__ 1
#define GLIB_SIZEOF_LONG 8
#define GLIB_DEPRECATED_MACRO_IN_2_26_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __FLT64_MIN_10_EXP__ (-307)
#define G_THREADS_IMPL_POSIX 
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define ERESTART 85
#define g_main_destroy(loop) g_main_loop_unref(loop) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_unref)
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define __FDS_BITS(set) ((set)->__fds_bits)
#define GLONG_TO_BE(val) ((glong) GINT64_TO_BE (val))
#define G_MAXUINT64 G_GUINT64_CONSTANT(0xffffffffffffffff)
#define g_main_set_poll_func(func) g_main_context_set_poll_func (NULL, func) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_context_set_poll_func)
#define G_GUINT64_FORMAT "lu"
#define EBADR 53
#define si_pkey _sifields._sigfault._bounds._pkey
#define __FLT64X_DECIMAL_DIG__ 36
#define GLIB_AVAILABLE_IN_2_26 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_28 _GLIB_EXTERN
#define G_GNUC_EXTENSION __extension__
#define G_PI 3.1415926535897932384626433832795028841971693993751
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define GLIB_AVAILABLE_TYPE_IN_2_60 
#define __INTMAX_WIDTH__ 64
#define GLIB_AVAILABLE_IN_2_34 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_36 _GLIB_EXTERN
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define g_array_prepend_val(a,v) g_array_prepend_vals (a, &(v), 1)
#define G_DIR_SEPARATOR_S "/"
#define G_MAXUINT UINT_MAX
#define SCHED_OTHER 0
#define LOGIN_NAME_MAX 256
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define G_MAXINT INT_MAX
#define __LDBL_HAS_INFINITY__ 1
#define GLIB_AVAILABLE_IN_2_40 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_44 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_46 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_48 _GLIB_EXTERN
#define __G_NODE_H__ 
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define si_addr _sifields._sigfault.si_addr
#define GLIB_AVAILABLE_IN_2_50 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_52 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_54 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_56 _GLIB_EXTERN
#define __G_TIME_ZONE_H__ 
#define __FLT_DIG__ 6
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define _SIGNAL_H 
#define g_rc_box_dup(block_size,mem_block) ((glib_typeof (mem_block)) (g_rc_box_dup) (block_size, mem_block))
#define GUINT32_TO_LE(val) ((guint32) (val))
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define GLIB_AVAILABLE_IN_2_60 _GLIB_EXTERN
#define GLIB_SYSDEF_POLLNVAL =32
#define GLIB_AVAILABLE_IN_2_64 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_68 _GLIB_EXTERN
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define MAX_INPUT 255
#define CLOCK_BOOTTIME_ALARM 9
#define G_GNUC_ALLOC_SIZE(x) __attribute__((__alloc_size__(x)))
#define __DEC_EVAL_METHOD__ 2
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define __siginfo_t_defined 1
#define GPOINTER_TO_UINT(p) ((guint) (gulong) (p))
#define GLIB_AVAILABLE_IN_2_70 _GLIB_EXTERN
#define __FLT_MANT_DIG__ 24
#define G_SPAWN_EXIT_ERROR g_spawn_exit_error_quark ()
#define __FLT16_MIN_10_EXP__ (-4)
#define __VERSION__ "11.3.0"
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __UINT64_C(c) c ## UL
#define G_MAXSSIZE G_MAXLONG
#define g_info(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_INFO, __VA_ARGS__)
#define G_INLINE_FUNC static inline GLIB_DEPRECATED_MACRO_IN_2_48_FOR(static inline)
#define _SYS_TYPES_H 1
#define _PTRDIFF_T_ 
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_CDEFS_H 1
#define G_LOG_2_BASE_10 (0.30102999566398119521)
#define G_GNUC_SCANF(format_idx,arg_idx) __attribute__((__format__ (gnu_scanf, format_idx, arg_idx)))
#define GUINT_TO_POINTER(u) ((gpointer) (gulong) (u))
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define GLIB_AVAILABLE_IN_ALL _GLIB_EXTERN
#define glib_typeof(t) __typeof__ (t)
#define ILL_BADSTK ILL_BADSTK
#define G_OS_INFO_KEY_HOME_URL GLIB_AVAILABLE_MACRO_IN_2_64 "HOME_URL"
#define G_HOOK_IS_VALID(hook) (G_HOOK (hook)->hook_id != 0 && (G_HOOK_FLAGS (hook) & G_HOOK_FLAG_ACTIVE))
#define G_GNUC_FALLTHROUGH __attribute__((fallthrough)) GLIB_AVAILABLE_MACRO_IN_2_60
#define __ssize_t_defined 
#define __GXX_ABI_VERSION 1016
#define G_VARIANT_TYPE_BOOLEAN ((const GVariantType *) "b")
#define __SWORD_TYPE long int
#define GLONG_TO_LE(val) ((glong) GINT64_TO_LE (val))
#define ENOENT 2
#define __USE_XOPEN2K8 1
#define htobe64(x) __bswap_64 (x)
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define G_VARIANT_TYPE_BASIC ((const GVariantType *) "?")
#define __bitwise __bitwise__
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define __WINT_MAX__ 0xffffffffU
#define G_VARIANT_TYPE_MAYBE ((const GVariantType *) "m*")
#define ENETDOWN 100
#define G_DEFINE_AUTO_CLEANUP_CLEAR_FUNC(TypeName,func) G_GNUC_BEGIN_IGNORE_DEPRECATIONS static G_GNUC_UNUSED inline void _GLIB_AUTO_FUNC_NAME(TypeName) (TypeName *_ptr) { (func) (_ptr); } G_GNUC_END_IGNORE_DEPRECATIONS
#define __INT_LEAST32_MAX__ 0x7fffffff
#define LINE_MAX _POSIX2_LINE_MAX
#define G_ALLOCATOR_SLIST 2
#define SIGEV_NONE SIGEV_NONE
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define si_stime _sifields._sigchld.si_stime
#define _GLIB_DEFINE_AUTOPTR_CHAINUP(ModuleObjName,ParentName) _GLIB_DEFINE_AUTOPTR_CLEANUP_FUNCS(ModuleObjName, ParentName, _GLIB_AUTOPTR_CLEAR_FUNC_NAME(ParentName))
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __ASM_GENERIC_POSIX_TYPES_H 
#define _T_PTRDIFF_ 
#define g_main_pending() g_main_context_pending (NULL) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_context_pending)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_28_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define g_assert_true(expr) G_STMT_START { if G_LIKELY (expr) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should be TRUE"); } G_STMT_END
#define g_atomic_int_inc(atomic) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ *(atomic) : 1); (void) __atomic_fetch_add ((atomic), 1, __ATOMIC_SEQ_CST); }))
#define EBUSY 16
#define G_VARIANT_TYPE_UINT32 ((const GVariantType *) "u")
#define __FLT128_MAX_EXP__ 16384
#define __G_DEPRECATED_THREAD_H__ 
#define __INO_T_TYPE __ULONGWORD_TYPE
#define be16toh(x) __bswap_16 (x)
#define EKEYEXPIRED 127
#define GSSIZE_FROM_BE(val) (GSSIZE_TO_BE (val))
#define GLIB_AVAILABLE_MACRO_IN_2_26 
#define GLIB_AVAILABLE_MACRO_IN_2_28 
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define g_test_trap_assert_stdout(soutpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 2, soutpattern)
#define G_GNUC_MALLOC __attribute__ ((__malloc__))
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define __struct_tm_defined 1
#define GLIB_AVAILABLE_MACRO_IN_2_30 
#define GLIB_AVAILABLE_MACRO_IN_2_32 
#define GLIB_AVAILABLE_MACRO_IN_2_34 
#define g_htonl(val) (GUINT32_TO_BE (val))
#define GLIB_AVAILABLE_MACRO_IN_2_36 
#define GLIB_AVAILABLE_MACRO_IN_2_38 
#define g_htons(val) (GUINT16_TO_BE (val))
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define _POSIX_STREAM_MAX 8
#define G_ALLOCATOR_NODE 3
#define __FLT32_MANT_DIG__ 24
#define __G_BOOKMARK_FILE_H__ 
#define __sigval_t_defined 
#define SVE_VQ_MAX __SVE_VQ_MAX
#define g_date_julian g_date_get_julian GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_julian)
#define GLIB_AVAILABLE_MACRO_IN_2_44 
#define _GCC_LIMITS_H_ 
#define GLIB_AVAILABLE_MACRO_IN_2_46 
#define G_VARIANT_TYPE_UINT64 ((const GVariantType *) "t")
#define _STDDEF_H 
#define __AARCH64EL__ 1
#define G_UNAVAILABLE(maj,min) __attribute__((deprecated("Not available before " #maj "." #min)))
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#define GLIB_AVAILABLE_MACRO_IN_2_50 
#define GLIB_AVAILABLE_MACRO_IN_2_52 
#define GLIB_AVAILABLE_MACRO_IN_2_54 
#define GLIB_AVAILABLE_MACRO_IN_2_56 
#define GLIB_AVAILABLE_MACRO_IN_2_58 
#define __SIZE_T__ 
#define __FLT16_MAX_EXP__ 16
#define __stub_gtty 
#define si_value _sifields._rt.si_sigval
#define __NLINK_T_TYPE __U32_TYPE
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define le32toh(x) __uint32_identity (x)
#define EFAULT 14
#define GLIB_AVAILABLE_MACRO_IN_2_60 
#define GLIB_AVAILABLE_MACRO_IN_2_62 
#define GLIB_AVAILABLE_MACRO_IN_2_64 
#define G_GNUC_CONST __attribute__ ((__const__))
#define DBL_MIN_10_EXP __DBL_MIN_10_EXP__
#define G_LOCK(name) g_mutex_lock (&G_LOCK_NAME (name))
#define __SIGRTMIN 32
#define G_VARIANT_TYPE_ARRAY ((const GVariantType *) "a*")
#define GLIB_DEPRECATED_MACRO_IN_2_50_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define GLIB_AVAILABLE_MACRO_IN_2_70 
#define GLIB_AVAILABLE_MACRO_IN_2_72 
#define FLT_DECIMAL_DIG __FLT_DECIMAL_DIG__
#define __BIGGEST_ALIGNMENT__ 16
#define _SYS_SIZE_T_H 
#define GLIB_DEPRECATED_IN_2_38_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define G_VARIANT_TYPE_BYTE ((const GVariantType *) "y")
#define __INT32_C(c) c
#define G_STRINGIFY(macro_or_string) G_STRINGIFY_ARG (macro_or_string)
#define SHRT_MIN (-SHRT_MAX - 1)
#define __G_TEST_UTILS_H__ 
#define __glibc_macro_warning1(message) _Pragma (#message)
#define GLIB_DEPRECATED_TYPE_IN_2_72_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __wur __attribute_warn_unused_result__
#define SIGHUP 1
#define G_VARIANT_TYPE_BYTESTRING ((const GVariantType *) "ay")
#define PTHREAD_CANCELED ((void *) -1)
#define G_KEY_FILE_DESKTOP_KEY_COMMENT "Comment"
#define g_assert_no_error(err) G_STMT_START { if (err) g_assertion_message_error (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #err, err, 0, 0); } G_STMT_END
#define __FLT128_HAS_DENORM__ 1
#define CLOCK_REALTIME 0
#define FLT_DIG __FLT_DIG__
#define _BITS_TIME_H 1
#define SIG_UNBLOCK 1
#define _POSIX_RTSIG_MAX 8
#define FPE_INTOVF FPE_INTOVF
#define EWOULDBLOCK EAGAIN
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __SCHAR_WIDTH__ 8
#define __ORDER_PDP_ENDIAN__ 3412
#define G_HOOK_FLAG_USER_SHIFT (4)
#define __PDP_ENDIAN 3412
#define _GLIB_AUTOPTR_TYPENAME(TypeName) TypeName ##_autoptr
#define __ARM_64BIT_STATE 1
#define g_assert_cmpuint(n1,cmp,n2) G_STMT_START { guint64 __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'i'); } G_STMT_END
#define sa_handler __sigaction_handler.sa_handler
#define DT_CHR DT_CHR
#define EMLINK 31
#define SVE_VQ_MIN __SVE_VQ_MIN
#define LDBL_MIN_10_EXP __LDBL_MIN_10_EXP__
#define g_dataset_set_data(l,k,d) g_dataset_set_data_full ((l), (k), (d), NULL)
#define BYTE_ORDER __BYTE_ORDER
#define ENOKEY 126
#define G_OS_INFO_KEY_VERSION_CODENAME GLIB_AVAILABLE_MACRO_IN_2_64 "VERSION_CODENAME"
#define __INT_FAST32_TYPE__ long int
#define __have_pthread_attr_t 1
#define G_VARIANT_TYPE_HANDLE ((const GVariantType *) "h")
#define __G_ENVIRON_H__ 
#define G_GNUC_DEPRECATED_FOR(f) __attribute__((deprecated("Use " #f " instead"))) GLIB_AVAILABLE_MACRO_IN_2_26
#define FLT_MAX_10_EXP __FLT_MAX_10_EXP__
#define g_slist_free1 g_slist_free_1
#define __G_QUARK_H__ 
#define GLIB_SYSDEF_POLLERR =8
#define __G_MACROS_H__ 
#define G_GSSIZE_FORMAT "li"
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define __G_TYPES_H__ 
#define G_NUMBER_PARSER_ERROR (g_number_parser_error_quark ())
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_64_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define G_ASCII_DTOSTR_BUF_SIZE (29 + 10)
#define _POSIX_MAX_INPUT 255
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define __G_BITLOCK_H__ 
#define ECANCELED 125
#define _SIZET_ 
#define GLIB_AVAILABLE_MACRO_IN_2_40 
#define ESHUTDOWN 108
#define G_MAXINT32 ((gint32) 0x7fffffff)
#define GLIB_AVAILABLE_MACRO_IN_2_42 
#define GUINT32_FROM_BE(val) (GUINT32_TO_BE (val))
#define g_random_boolean() ((g_random_int () & (1 << 15)) != 0)
#define __SIZE_TYPE__ long unsigned int
#define g_list_next(list) ((list) ? (((GList *)(list))->next) : NULL)
#define G_DEPRECATED __attribute__((__deprecated__))
#define ETIME 62
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define GLIB_SYSDEF_POLLPRI =2
#define G_DEFINE_AUTO_CLEANUP_FREE_FUNC(TypeName,func,none) G_GNUC_BEGIN_IGNORE_DEPRECATIONS static G_GNUC_UNUSED inline void _GLIB_AUTO_FUNC_NAME(TypeName) (TypeName *_ptr) { if (*_ptr != none) (func) (*_ptr); } G_GNUC_END_IGNORE_DEPRECATIONS
#define XATTR_LIST_MAX 65536
#define FPE_CONDTRAP FPE_CONDTRAP
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define GLIB_AVAILABLE_MACRO_IN_2_48 
#define GINT_FROM_LE(val) (GINT_TO_LE (val))
#define __FLT64X_DIG__ 33
#define G_CSET_LATINS "\337\340\341\342\343\344\345\346" "\347\350\351\352\353\354\355\356\357\360" "\361\362\363\364\365\366" "\370\371\372\373\374\375\376\377"
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_70_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define G_VARIANT_TYPE_OBJECT_PATH_ARRAY ((const GVariantType *) "ao")
#define __ARM_FEATURE_FMA 1
#define G_GNUC_FUNCTION "" GLIB_DEPRECATED_MACRO_IN_2_26_FOR(G_STRFUNC)
#define GUINT_FROM_BE(val) (GUINT_TO_BE (val))
#define g_main_new(is_running) g_main_loop_new (NULL, is_running) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_new)
#define g_assert_cmpfloat_with_epsilon(n1,n2,epsilon) G_STMT_START { double __n1 = (n1), __n2 = (n2), __epsilon = (epsilon); if (G_APPROX_VALUE (__n1, __n2, __epsilon)) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " == " #n2 " (+/- " #epsilon ")", __n1, "==", __n2, 'f'); } G_STMT_END
#define G_MAXINT8 ((gint8) 0x7f)
#define __INT8_TYPE__ signed char
#define G_FILE_ERROR g_file_error_quark ()
#define EL3HLT 46
#define g_autoqueue(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_QUEUE_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_QUEUE_TYPENAME(TypeName)
#define G_KEY_FILE_DESKTOP_TYPE_APPLICATION "Application"
#define __HAVE_DISTINCT_FLOAT128 0
#define __ELF__ 1
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define G_KEY_FILE_DESKTOP_KEY_STARTUP_NOTIFY "StartupNotify"
#define g_hook_append(hook_list,hook) g_hook_insert_before ((hook_list), NULL, (hook))
#define CLOCK_THREAD_CPUTIME_ID 3
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define GLIB_AVAILABLE_IN_2_32 _GLIB_EXTERN
#define G_QUEUE_INIT { NULL, NULL, 0 }
#define __G_STRVBUILDER_H__ 
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define G_USEC_PER_SEC 1000000
#define GUINT32_SWAP_LE_BE(val) ((guint32) __builtin_bswap32 ((guint32) (val)))
#define GLIB_DEPRECATED_IN_2_26_FOR(f) GLIB_DEPRECATED_FOR(f)
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define ELIBSCN 81
#define G_CSET_DIGITS "0123456789"
#define G_TRYLOCK(name) g_mutex_trylock (&G_LOCK_NAME (name))
#define GLIB_AVAILABLE_IN_2_38 _GLIB_EXTERN
#define GLIB_DEPRECATED_TYPE_IN_2_60_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define __FLT_RADIX__ 2
#define g_clear_list(list_ptr,destroy) G_STMT_START { GList *_list; _list = *(list_ptr); if (_list) { *list_ptr = NULL; if ((destroy) != NULL) g_list_free_full (_list, (destroy)); else g_list_free (_list); } } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_64
#define G_KEY_FILE_DESKTOP_KEY_TERMINAL "Terminal"
#define G_KEY_FILE_DESKTOP_KEY_DBUS_ACTIVATABLE "DBusActivatable"
#define __INT_LEAST16_TYPE__ short int
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define __UINTMAX_C(c) c ## UL
#define G_OS_INFO_KEY_SUPPORT_URL GLIB_AVAILABLE_MACRO_IN_2_64 "SUPPORT_URL"
#define G_GUINT32_FORMAT "u"
#define _G_BOOLEAN_EXPR(expr) G_GNUC_EXTENSION ({ int _g_boolean_var_; if (expr) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; })
#define _POSIX_C_SOURCE 200809L
#define g_date_day g_date_get_day GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_day)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_34 GLIB_DEPRECATED_ENUMERATOR
#define __G_SLICE_H__ 
#define __ARM_PCS_AAPCS64 1
#define g_autofree _GLIB_CLEANUP(g_autoptr_cleanup_generic_gfree)
#define FPE_FLTSUB FPE_FLTSUB
#define PTHREAD_STACK_MIN 131072
#define _ALLOCA_H 1
#define _BITS_SIGTHREAD_H 1
#define _POSIX_ARG_MAX 4096
#define _DIRENT_HAVE_D_TYPE 
#define htobe32(x) __bswap_32 (x)
#define G_OS_INFO_KEY_DOCUMENTATION_URL GLIB_AVAILABLE_MACRO_IN_2_64 "DOCUMENTATION_URL"
#define EPROTO 71
#define SIGCONT 18
#define g_test_rand_bit() (0 != (g_test_rand_int() & (1 << 15)))
#define g_main_iteration(may_block) g_main_context_iteration (NULL, may_block) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_context_iteration)
#define g_ascii_ispunct(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_PUNCT) != 0)
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define G_STRINGIFY_ARG(contents) #contents
#define __LDBL_REDIR(name,proto) name proto
#define CLOCK_MONOTONIC_RAW 4
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define ECONNRESET 104
#define GLIB_AVAILABLE_TYPE_IN_2_58 
#define G_PASTE(identifier1,identifier2) G_PASTE_ARGS (identifier1, identifier2)
#define GLIB_DEPRECATED_IN_2_26 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_28 GLIB_DEPRECATED
#define G_KEY_FILE_DESKTOP_GROUP "Desktop Entry"
#define ELOOP 40
#define ENOSTR 60
#define FLT_ROUNDS 1
#define __blksize_t_defined 
#define __INT_LEAST64_WIDTH__ 64
#define G_GNUC_NO_INSTRUMENT __attribute__ ((__no_instrument_function__))
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define EMFILE 24
#define GUINT32_FROM_LE(val) (GUINT32_TO_LE (val))
#define GLIB_DEPRECATED_IN_2_30 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_32 GLIB_DEPRECATED
#define g_macro__has_builtin __has_builtin
#define GLIB_DEPRECATED_IN_2_34 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_38 GLIB_DEPRECATED
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define EOVERFLOW 75
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_IEC_60559_BFP__ 201404L
#define _ASM_GENERIC_ERRNO_H 
#define BUS_ADRERR BUS_ADRERR
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SI_ALIGNMENT 
#define __SIZEOF_PTRDIFF_T__ 8
#define GLIB_DEPRECATED_IN_2_42 GLIB_DEPRECATED
#define __G_BASE64_H__ 
#define GLIB_DEPRECATED_IN_2_44 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_46 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_48 GLIB_DEPRECATED
#define GLIB_DEPRECATED_TYPE_IN_2_28_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define G_MINLONG LONG_MIN
#define GLIB_DEPRECATED_ENUMERATOR_FOR(f) G_DEPRECATED_FOR(f)
#define GUINT_FROM_LE(val) (GUINT_TO_LE (val))
#define __ATOMIC_RELAXED 0
#define g_clear_pointer(pp,destroy) G_STMT_START { G_STATIC_ASSERT (sizeof *(pp) == sizeof (gpointer)); glib_typeof ((pp)) _pp = (pp); glib_typeof (*(pp)) _ptr = *_pp; *_pp = NULL; if (_ptr) (destroy) (_ptr); } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_34
#define g_abort() abort ()
#define ENOTCONN 107
#define GLIB_DEPRECATED_IN_2_52 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_54 GLIB_DEPRECATED
#define __G_OPTION_H__ 
#define GLIB_DEPRECATED_IN_2_58 GLIB_DEPRECATED
#define EXDEV 18
#define __stub_sigreturn 
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define G_ALLOC_ONLY 1
#define GSIZE_TO_POINTER(s) ((gpointer) (gsize) (s))
#define GLIB_DEPRECATED_IN_2_62 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_64 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_66 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_68 GLIB_DEPRECATED
#define CLOCK_TAI 11
#define ESR_MAGIC 0x45535201
#define g_atomic_int_xor(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (val) : 1); (guint) __atomic_fetch_xor ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define g_hash_table_thaw(hash_table) ((void)0) GLIB_DEPRECATED_MACRO_IN_2_26
#define __restrict_arr __restrict
#define ESTRPIPE 86
#define GLIB_DEPRECATED_IN_2_70 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_72 GLIB_DEPRECATED
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define G_CONVERT_ERROR g_convert_error_quark()
#define __UWORD_TYPE unsigned long int
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define __LDBL_DIG__ 33
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_26 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_28 GLIB_DEPRECATED_ENUMERATOR
#define G_LOCK_NAME(name) g__ ## name ## _lock
#define g_ATEXIT(proc) (atexit (proc)) GLIB_DEPRECATED_MACRO_IN_2_32
#define GLIB_DEPRECATED_IN_2_48_FOR(f) GLIB_DEPRECATED_FOR(f)
#define G_GNUC_INTERNAL __attribute__((visibility("hidden")))
#define __FLT64_IS_IEC_60559__ 2
#define _SIZE_T_ 
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define __FLT16_IS_IEC_60559__ 2
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_30 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_32 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_36 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_38 GLIB_DEPRECATED_ENUMERATOR
#define _WCHAR_T_H 
#define ENODEV 19
#define POLL_OUT POLL_OUT
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_40 GLIB_DEPRECATED_ENUMERATOR
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_44 GLIB_DEPRECATED_ENUMERATOR
#define g_test_trap_assert_stderr_unmatched(serrpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 5, serrpattern)
#define __WCLONE 0x80000000
#define INT_MAX __INT_MAX__
#define G_OPTION_ENTRY_NULL GLIB_AVAILABLE_MACRO_IN_2_70 { NULL, 0, 0, 0, NULL, NULL, NULL }
#define __stub___compat_create_module 
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define g_bit_nth_lsf(mask,nth_bit) g_bit_nth_lsf_impl(mask, nth_bit)
#define LDBL_MIN __LDBL_MIN__
#define GLIB_VERSION_MAX_ALLOWED (GLIB_VERSION_CUR_STABLE)
#define G_MAXSIZE G_MAXULONG
#define GUINT64_FROM_BE(val) (GUINT64_TO_BE (val))
#define G_KEY_FILE_DESKTOP_KEY_NO_DISPLAY "NoDisplay"
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_54 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_56 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_58 GLIB_DEPRECATED_ENUMERATOR
#define __GLIB_TYPEOF_H__ 
#define __G_MESSAGES_H__ 
#define ABS(a) (((a) < 0) ? -(a) : (a))
#define GLIB_MICRO_VERSION 4
#define __FLT64_DIG__ 15
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define DBL_MIN __DBL_MIN__
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_62 GLIB_DEPRECATED_ENUMERATOR
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_66 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_68 GLIB_DEPRECATED_ENUMERATOR
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __USE_ISOC95 1
#define G_KEY_FILE_DESKTOP_KEY_TRY_EXEC "TryExec"
#define MINSIGSTKSZ 5120
#define NULL ((void *)0)
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define g_slice_new(type) ((type*) g_slice_alloc (sizeof (type)))
#define __U64_TYPE unsigned long int
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define __FLT_HAS_QUIET_NAN__ 1
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define _SYS_UCONTEXT_H 1
#define g_date_weekday g_date_get_weekday GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_weekday)
#define g_date_month g_date_get_month GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_month)
#define GLIB_DEPRECATED_MACRO_IN_2_46_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_70 GLIB_DEPRECATED_ENUMERATOR
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define __FLT_MAX_10_EXP__ 38
#define G_MININT INT_MIN
#define DTTOIF(dirtype) ((dirtype) << 12)
#define G_OS_INFO_KEY_VERSION GLIB_AVAILABLE_MACRO_IN_2_64 "VERSION"
#define EREMOTEIO 121
#define GLIB_DEPRECATED G_DEPRECATED _GLIB_EXTERN
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_26_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define __glibc_objsize0(__o) __bos0 (__o)
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define EHWPOISON 133
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define G_URI_RESERVED_CHARS_ALLOWED_IN_PATH_ELEMENT G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS ":@"
#define SIGALRM 14
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define G_DATALIST_FLAGS_MASK 0x3
#define __unix 1
#define g_assert_nonnull(expr) G_STMT_START { if G_LIKELY ((expr) != NULL) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should not be NULL"); } G_STMT_END
#define GUINT16_SWAP_BE_PDP(val) (GUINT16_SWAP_LE_BE (val))
#define _BSD_PTRDIFF_T_ 
#define _BITS_PTHREADTYPES_COMMON_H 1
#define EPROTOTYPE 91
#define GLIB_DEPRECATED_MACRO_IN_2_70_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __G_STRING_H__ 
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define __DBL_HAS_DENORM__ 1
#define __UINT_FAST16_TYPE__ long unsigned int
#define g_atomic_pointer_get(atomic) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); glib_typeof (*(atomic)) gapg_temp_newval; glib_typeof ((atomic)) gapg_temp_atomic = (atomic); __atomic_load (gapg_temp_atomic, &gapg_temp_newval, __ATOMIC_SEQ_CST); gapg_temp_newval; }))
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define g_uint64_checked_mul(dest,a,b) (!__builtin_mul_overflow(a, b, dest))
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define G_IEEE754_FLOAT_BIAS (127)
#define __CHAR16_TYPE__ short unsigned int
#define __FLT64X_MAX_EXP__ 16384
#define E2BIG 7
#define EFBIG 27
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define GLIB_DEPRECATED_IN_2_66_FOR(f) GLIB_DEPRECATED_FOR(f)
#define G_MINOFFSET G_MININT64
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define _STRINGS_H 1
#define SI_MESGQ SI_MESGQ
#define __SIZE_WIDTH__ 64
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define g_uint_checked_add(dest,a,b) (!__builtin_add_overflow(a, b, dest))
#define __BLKSIZE_T_TYPE __S32_TYPE
#define G_MINDOUBLE DBL_MIN
#define _WCHAR_T_DECLARED 
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __stub_revoke 
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define g_try_new0(struct_type,n_structs) _G_NEW (struct_type, n_structs, try_malloc0)
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define g_rc_box_new(type) ((type *) g_rc_box_alloc (sizeof (type)))
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define g_debug(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, __VA_ARGS__)
#define G_OS_INFO_KEY_PRETTY_NAME GLIB_AVAILABLE_MACRO_IN_2_64 "PRETTY_NAME"
#define __INT_LEAST64_TYPE__ long int
#define __G_STRINGCHUNK_H__ 
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define htole16(x) __uint16_identity (x)
#define g_ascii_isgraph(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_GRAPH) != 0)
#define G_VARIANT_TYPE_STRING_ARRAY ((const GVariantType *) "as")
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define SIGSTOP 19
#define GUINT16_SWAP_LE_PDP(val) ((guint16) (val))
#define GUINT64_FROM_LE(val) (GUINT64_TO_LE (val))
#define SEGV_BNDERR SEGV_BNDERR
#define __STDC_VERSION__ 201710L
#define DBL_EPSILON __DBL_EPSILON__
#define g_once_init_leave(location,result) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(location) == sizeof (gpointer)); 0 ? (void) (*(location) = (result)) : (void) 0; g_once_init_leave ((location), (gsize) (result)); }))
#define ENOTDIR 20
#define GLIB_DEPRECATED_TYPE_IN_2_70_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define DT_UNKNOWN DT_UNKNOWN
#define TIMER_ABSTIME 1
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define EDQUOT 122
#define __PMT(args) args
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define G_PI_4 0.78539816339744830961566084581987572104929234984378
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define GLIB_DEPRECATED_TYPE_IN_2_48_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define G_GNUC_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define GLIB_DEPRECATED_MACRO_IN_2_72_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define WTERMSIG(status) __WTERMSIG (status)
#define __G_DATASET_H__ 
#define GLIB_AVAILABLE_IN_2_30 _GLIB_EXTERN
#define SIGSYS 31
#define _LINUX_LIMITS_H 
#define linux 1
#define g_uint_checked_mul(dest,a,b) (!__builtin_mul_overflow(a, b, dest))
#define G_SOURCE_CONTINUE TRUE
#define SIGSEGV 11
#define ENXIO 6
#define GLIB_MAJOR_VERSION 2
#define FLT_EPSILON __FLT_EPSILON__
#define SA_NOCLDSTOP 1
#define __G_ATOMIC_H__ 
#define CLOCK_MONOTONIC 1
#define GLIB_DEPRECATED_MACRO_IN_2_68_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __G_ALLOCATOR_H__ 
#define EUNATCH 49
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define LDBL_EPSILON __LDBL_EPSILON__
#define G_STMT_END while (0)
#define htole64(x) __uint64_identity (x)
#define G_KEY_FILE_DESKTOP_KEY_URL "URL"
#define FPE_FLTINV FPE_FLTINV
#define G_KEY_FILE_DESKTOP_KEY_ACTIONS "Actions"
#define __G_ERROR_H__ 
#define G_MAXULONG ULONG_MAX
#define G_MININT64 ((gint64) (-G_MAXINT64 - G_GINT64_CONSTANT(1)))
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_48_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define g_chunk_new(type,chunk) ((type *) g_mem_chunk_alloc (chunk))
#define GLIB_UNAVAILABLE_MACRO(maj,min) _GLIB_GNUC_DO_PRAGMA(GCC warning G_STRINGIFY (Not available before maj.min))
#define __USE_POSIX2 1
#define SA_INTERRUPT 0x20000000
#define g_test_verbose() (g_test_config_vars->test_verbose)
#define _BITS_SS_FLAGS_H 1
#define _GLIB_AUTOPTR_LIST_TYPENAME(TypeName) TypeName ##_listautoptr
#define __FLT64X_MIN_EXP__ (-16381)
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define __FLT32_MIN_10_EXP__ (-37)
#define g_dataset_id_set_data(l,k,d) g_dataset_id_set_data_full ((l), (k), (d), NULL)
#define __KEY_T_TYPE __S32_TYPE
#define sigev_notify_function _sigev_un._sigev_thread._function
#define __SVE_VQ_MAX 512
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define __FLT32X_DIG__ 15
#define __UINT8_TYPE__ unsigned char
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define G_DEPRECATED_FOR(f) __attribute__((__deprecated__("Use '" #f "' instead")))
#define __timer_t_defined 1
#define SVE_VL_MIN __SVE_VL_MIN
#define G_STATIC_REC_MUTEX_INIT { G_STATIC_MUTEX_INIT, 0, { 0 } } GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_rec_mutex_init)
#define __PTRDIFF_WIDTH__ 64
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define __BEGIN_DECLS 
#define DT_DIR DT_DIR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_48 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_TYPE_IN_2_38_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define PDP_ENDIAN __PDP_ENDIAN
#define G_DIR_SEPARATOR '/'
#define GLIB_SIZEOF_SIZE_T 8
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define ENAMETOOLONG 36
#define G_GNUC_NORETURN __attribute__ ((__noreturn__))
#define G_DATE_BAD_YEAR 0U
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define CLD_STOPPED CLD_STOPPED
#define __FLT64_HAS_INFINITY__ 1
#define G_OS_INFO_KEY_NAME GLIB_AVAILABLE_MACRO_IN_2_64 "NAME"
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define G_MININT32 ((gint32) (-G_MAXINT32 - 1))
#define POLL_HUP POLL_HUP
#define GINT16_TO_BE(val) ((gint16) GUINT16_SWAP_LE_BE (val))
#define G_PRIORITY_HIGH_IDLE 100
#define g_hash_table_freeze(hash_table) ((void)0) GLIB_DEPRECATED_MACRO_IN_2_26
#define SA_STACK SA_ONSTACK
#define _GCC_MAX_ALIGN_T 
#define G_KEY_FILE_DESKTOP_TYPE_DIRECTORY "Directory"
#define G_OS_INFO_KEY_PRIVACY_POLICY_URL GLIB_AVAILABLE_MACRO_IN_2_64 "PRIVACY_POLICY_URL"
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define GLIB_AVAILABLE_MACRO_IN_2_68 
#define G_STRLOC __FILE__ ":" G_STRINGIFY (__LINE__)
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define g_dataset_set_data_full(l,k,d,f) g_dataset_id_set_data_full ((l), g_quark_from_string (k), (d), (f))
#define G_TIME_SPAN_MILLISECOND (G_GINT64_CONSTANT (1000))
#define g_scanner_thaw_symbol_table(scanner) ((void)0) GLIB_DEPRECATED_MACRO_IN_2_26
#define __FLT16_MANT_DIG__ 11
#define GLIB_DEPRECATED_IN_2_58_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __INTPTR_TYPE__ long int
#define __G_THREADPOOL_H__ 
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ unsigned int
#define __CLOCKID_T_TYPE __S32_TYPE
#define GUINT16_FROM_LE(val) (GUINT16_TO_LE (val))
#define G_N_ELEMENTS(arr) (sizeof (arr) / sizeof ((arr)[0]))
#define __SLONGWORD_TYPE long int
#define __G_HOOK_H__ 
#define FALSE (0)
#define GUINT64_SWAP_LE_BE(val) ((guint64) __builtin_bswap64 ((guint64) (val)))
#define g_auto(TypeName) _GLIB_CLEANUP(_GLIB_AUTO_FUNC_NAME(TypeName)) TypeName
#define _GLIB_DEFINE_AUTOPTR_CLEANUP_FUNCS(TypeName,ParentName,cleanup) typedef TypeName *_GLIB_AUTOPTR_TYPENAME(TypeName); typedef GList *_GLIB_AUTOPTR_LIST_TYPENAME(TypeName); typedef GSList *_GLIB_AUTOPTR_SLIST_TYPENAME(TypeName); typedef GQueue *_GLIB_AUTOPTR_QUEUE_TYPENAME(TypeName); G_GNUC_BEGIN_IGNORE_DEPRECATIONS static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_CLEAR_FUNC_NAME(TypeName) (TypeName *_ptr) { if (_ptr) (cleanup) ((ParentName *) _ptr); } static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_FUNC_NAME(TypeName) (TypeName **_ptr) { _GLIB_AUTOPTR_CLEAR_FUNC_NAME(TypeName) (*_ptr); } static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_LIST_FUNC_NAME(TypeName) (GList **_l) { g_list_free_full (*_l, (GDestroyNotify) (void(*)(void)) cleanup); } static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_SLIST_FUNC_NAME(TypeName) (GSList **_l) { g_slist_free_full (*_l, (GDestroyNotify) (void(*)(void)) cleanup); } static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_QUEUE_FUNC_NAME(TypeName) (GQueue **_q) { if (*_q) g_queue_free_full (*_q, (GDestroyNotify) (void(*)(void)) cleanup); } G_GNUC_END_IGNORE_DEPRECATIONS
#define ATEXIT(proc) g_ATEXIT(proc) GLIB_DEPRECATED_MACRO_IN_2_32
#define G_GUINTPTR_FORMAT "lu"
#define ELIBEXEC 83
#define __pic__ 2
#define GLIB_AVAILABLE_IN_2_58 _GLIB_EXTERN
#define GLIB_SYSDEF_POLLIN =1
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define SEGV_ADIPERR SEGV_ADIPERR
#define __ARM_ARCH_8A 1
#define __stub_chflags 
#define g_node_prev_sibling(node) ((node) ? ((GNode*) (node))->prev : NULL)
#define __SVE_VQ_MIN 1
#define __UQUAD_TYPE unsigned long int
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_50 GLIB_DEPRECATED_ENUMERATOR
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define SI_ASYNCIO SI_ASYNCIO
#define EDOTDOT 73
#define __BYTE_ORDER __LITTLE_ENDIAN
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_52 GLIB_DEPRECATED_ENUMERATOR
#define EDESTADDRREQ 89
#define g_datalist_remove_data(dl,k) g_datalist_id_set_data ((dl), g_quark_try_string (k), NULL)
#define TTY_NAME_MAX 32
#define __USE_POSIX 1
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define g_once(once,func,arg) ((__atomic_load_n (&(once)->status, __ATOMIC_ACQUIRE) == G_ONCE_STATUS_READY) ? (once)->retval : g_once_impl ((once), (func), (arg)))
#define G_HOOK_IS_UNLINKED(hook) (G_HOOK (hook)->next == NULL && G_HOOK (hook)->prev == NULL && G_HOOK (hook)->hook_id == 0 && G_HOOK (hook)->ref_count == 0)
#define GLIB_AVAILABLE_TYPE_IN_2_66 
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __G_STRFUNCS_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_56_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __FLT32_HAS_INFINITY__ 1
#define g_dataset_remove_no_notify(l,k) g_dataset_id_remove_no_notify ((l), g_quark_try_string (k))
#define G_STATIC_PRIVATE_INIT { 0 } GLIB_DEPRECATED_MACRO_IN_2_32_FOR(G_PRIVATE_INIT)
#define g_test_trap_assert_passed() g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 0, 0)
#define __LDBL_REDIR2_DECL(name) 
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define __UINT_FAST64_TYPE__ long unsigned int
#define G_ATOMIC_LOCK_FREE 
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_36_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define WNOWAIT 0x01000000
#define GLIB_DEPRECATED_TYPE_IN_2_38 GLIB_DEPRECATED_TYPE
#define _G_RENEW(struct_type,mem,n_structs,func) (struct_type *) (G_GNUC_EXTENSION ({ gsize __n = (gsize) (n_structs); gsize __s = sizeof (struct_type); gpointer __p = (gpointer) (mem); if (__s == 1) __p = g_ ##func (__p, __n); else if (__builtin_constant_p (__n) && (__s == 0 || __n <= G_MAXSIZE / __s)) __p = g_ ##func (__p, __n * __s); else __p = g_ ##func ##_n (__p, __n, __s); __p; }))
#define __G_CHARSET_H__ 
#define g_array_index(a,t,i) (((t*) (void *) (a)->data) [(i)])
#define EXIT_SUCCESS 0
#define __LDBL_REDIR_DECL(name) 
#define ELIBBAD 80
#define G_LIKELY(expr) (__builtin_expect (_G_BOOLEAN_EXPR(expr), 1))
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_58 
#define __INT_MAX__ 0x7fffffff
#define G_ANALYZER_NORETURN 
#define _LINUX_POSIX_TYPES_H 
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define si_band _sifields._sigpoll.si_band
#define G_STRUCT_MEMBER(member_type,struct_p,struct_offset) (*(member_type*) G_STRUCT_MEMBER_P ((struct_p), (struct_offset)))
#define DBL_MAX_EXP __DBL_MAX_EXP__
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define GINT16_TO_LE(val) ((gint16) (val))
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define SI_ASYNCNL SI_ASYNCNL
#define GUINT16_TO_BE(val) (GUINT16_SWAP_LE_BE (val))
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define UINT_MAX (INT_MAX * 2U + 1U)
#define __itimerspec_defined 1
#define _T_SIZE_ 
#define __TIMESIZE 64
#define LLONG_MAX __LONG_LONG_MAX__
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define __SIGRTMAX 64
#define g_ascii_isalnum(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_ALNUM) != 0)
#define SIGXCPU 24
#define G_UNICODE_COMBINING_MARK G_UNICODE_SPACING_MARK GLIB_DEPRECATED_MACRO_IN_2_30_FOR(G_UNICODE_SPACING_MARK)
#define __WNOTHREAD 0x20000000
#define __INT64_TYPE__ long int
#define __FLT_MAX_EXP__ 128
#define CLOCK_PROCESS_CPUTIME_ID 2
#define G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS "!$&'()*+,;="
#define FLT_MAX_EXP __FLT_MAX_EXP__
#define __gid_t_defined 
#define ENETUNREACH 101
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define G_GSIZE_MODIFIER "l"
#define __ORDER_BIG_ENDIAN__ 4321
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define G_ONCE_INIT { G_ONCE_STATUS_NOTCALLED, NULL }
#define LDBL_MAX_EXP __LDBL_MAX_EXP__
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define G_PDP_ENDIAN 3412
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define __u_char_defined 
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __G_DEPRECATED_MAIN_H__ 
#define G_HAVE_GNUC_VISIBILITY 1
#define SI_TKILL SI_TKILL
#define _GLIB_AUTOPTR_SLIST_TYPENAME(TypeName) TypeName ##_slistautoptr
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __clock_t_defined 1
#define _POSIX_SEM_VALUE_MAX 32767
#define __FP_FAST_FMAF32 1
#define ESRCH 3
#define XATTR_SIZE_MAX 65536
#define __GLIBCONFIG_H__ 
#define __GLIBC_MINOR__ 35
#define GLIB_SYSDEF_POLLOUT =4
#define __UINT_LEAST32_TYPE__ unsigned int
#define g_test_queue_unref(gobject) g_test_queue_destroy (g_object_unref, gobject)
#define MB_LEN_MAX 16
#define SIGRTMIN (__libc_current_sigrtmin ())
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SEM_VALUE_MAX (2147483647)
#define G_BIG_ENDIAN 4321
#define CLOCK_BOOTTIME 7
#define G_KEY_FILE_DESKTOP_KEY_EXEC "Exec"
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define POLL_PRI POLL_PRI
#define g_test_trap_assert_stdout_unmatched(soutpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 3, soutpattern)
#define GLIB_DEPRECATED_MACRO_IN_2_58_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define g_array_append_val(a,v) g_array_append_vals (a, &(v), 1)
#define GLIB_AVAILABLE_TYPE_IN_2_36 
#define SIGPOLL 29
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define G_HAVE_GNUC_VARARGS 1
#define _POSIX_MAX_CANON 255
#define FD_SETSIZE __FD_SETSIZE
#define g_return_if_reached() G_STMT_START { g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, "file %s: line %d (%s): should not be reached", __FILE__, __LINE__, G_STRFUNC); return; } G_STMT_END
#define SIGCLD SIGCHLD
#define ENOSPC 28
#define __WINT_WIDTH__ 32
#define GLIB_DEPRECATED_MACRO _GLIB_GNUC_DO_PRAGMA(GCC warning "Deprecated pre-processor symbol")
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define __INT_LEAST8_MAX__ 0x7f
#define __USE_POSIX199309 1
#define SIGUSR2 12
#define __FLT32X_MAX_10_EXP__ 308
#define G_MARKUP_ERROR g_markup_error_quark ()
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define GINT_TO_POINTER(i) ((gpointer) (glong) (i))
#define G_VA_COPY va_copy
#define GLIB_DEPRECATED_MACRO_IN_2_44_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define sched_priority sched_priority
#define GLIB_DEPRECATED_FOR(f) G_DEPRECATED_FOR(f) _GLIB_EXTERN
#define SIGTSTP 20
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_58_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define GINT_FROM_BE(val) (GINT_TO_BE (val))
#define ECHILD 10
#define __LDBL_MAX_10_EXP__ 4932
#define ECONNREFUSED 111
#define __W_CONTINUED 0xffff
#define _BITS_SIGNUM_GENERIC_H 1
#define GUINT16_TO_LE(val) ((guint16) (val))
#define GLIB_AVAILABLE_IN_2_62 _GLIB_EXTERN
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define SA_ONESHOT SA_RESETHAND
#define __stub_stty 
#define __FLT32_MIN_EXP__ (-125)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define XATTR_NAME_MAX 255
#define g_atomic_int_dec_and_test(atomic) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ *(atomic) : 1); __atomic_fetch_sub ((atomic), 1, __ATOMIC_SEQ_CST) == 1; }))
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define _LP64 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define G_STRUCT_MEMBER_P(struct_p,struct_offset) ((gpointer) ((guint8*) (struct_p) + (glong) (struct_offset)))
#define __UINT8_C(c) c
#define __G_GETTEXT_H__ 
#define G_HOOK_ACTIVE(hook) ((G_HOOK_FLAGS (hook) & G_HOOK_FLAG_ACTIVE) != 0)
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define G_PID_FORMAT "i"
#define SIGKILL 9
#define g_assert_error(err,dom,c) G_STMT_START { if (!err || (err)->domain != dom || (err)->code != c) g_assertion_message_error (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #err, err, dom, c); } G_STMT_END
#define __INT_LEAST32_TYPE__ int
#define G_POLLFD_FORMAT "%d"
#define __sig_atomic_t_defined 1
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_60 GLIB_DEPRECATED_ENUMERATOR
#define __wchar_t__ 
#define ENOMEDIUM 123
#define __USE_POSIX_IMPLICITLY 1
#define __UINT64_TYPE__ long unsigned int
#define GLIB_DEPRECATED_TYPE_IN_2_40 GLIB_DEPRECATED_TYPE
#define g_size_checked_mul(dest,a,b) (!__builtin_mul_overflow(a, b, dest))
#define G_GINT16_FORMAT "hi"
#define __stub___compat_query_module 
#define GLIB_DEPRECATED_TYPE G_DEPRECATED
#define EL3RST 47
#define __ARM_NEON 1
#define __G_TRASH_STACK_H__ 
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_64 GLIB_DEPRECATED_ENUMERATOR
#define __G_UTILS_H__ 
#define g_node_append(parent,node) g_node_insert_before ((parent), NULL, (node))
#define ECHRNG 44
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define GLIB_DEPRECATED_TYPE_IN_2_44 GLIB_DEPRECATED_TYPE
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define GUINT16_FROM_BE(val) (GUINT16_TO_BE (val))
#define _GLIB_AUTOPTR_FUNC_NAME(TypeName) glib_autoptr_cleanup_ ##TypeName
#define _STDDEF_H_ 
#define GLIB_DEPRECATED_TYPE_IN_2_48 GLIB_DEPRECATED_TYPE
#define GINT64_TO_BE(val) ((gint64) GUINT64_SWAP_LE_BE (val))
#define G_HOOK(hook) ((GHook*) (hook))
#define __stub___compat_bdflush 
#define __FLT128_HAS_QUIET_NAN__ 1
#define GLIB_DEPRECATED_IN_2_34_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define SA_RESTART 0x10000000
#define GLIB_VERSION_MIN_REQUIRED (GLIB_VERSION_CUR_STABLE)
#define g_static_mutex_unlock(mutex) g_mutex_unlock (g_static_mutex_get_mutex (mutex)) GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_mutex_unlock)
#define GLIB_DEPRECATED_IN_2_42_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __UINT_FAST8_TYPE__ unsigned char
#define __INT_FAST8_TYPE__ signed char
#define __PID_T_TYPE __S32_TYPE
#define g_ascii_iscntrl(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_CNTRL) != 0)
#define CHARCLASS_NAME_MAX 2048
#define GLONG_FROM_BE(val) (GLONG_TO_BE (val))
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define g_pointer_bit_unlock(address,lock_bit) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(address) == sizeof (gpointer)); g_pointer_bit_unlock ((address), (lock_bit)); }))
#define g_atomic_pointer_or(atomic,val) (G_GNUC_EXTENSION ({ gsize *gapo_atomic = (gsize *) (atomic); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gsize)); (void) (0 ? (gpointer) *(atomic) : NULL); (void) (0 ? (val) ^ (val) : 1); (gsize) __atomic_fetch_or (gapo_atomic, (val), __ATOMIC_SEQ_CST); }))
#define va_arg(v,l) __builtin_va_arg(v,l)
#define __USE_ISOC11 1
#define g_assert_null(expr) G_STMT_START { if G_LIKELY ((expr) == NULL) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should be NULL"); } G_STMT_END
#define g_atomic_int_set(atomic,newval) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); gint gais_temp = (gint) (newval); (void) (0 ? *(atomic) ^ (newval) : 1); __atomic_store ((gint *)(atomic), &gais_temp, __ATOMIC_SEQ_CST); }))
#define _THREAD_SHARED_TYPES_H 1
#define __f128(x) x ##f128
#define __glibc_has_extension(ext) 0
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define G_VARIANT_TYPE_VARDICT ((const GVariantType *) "a{sv}")
#define EKEYREVOKED 128
#define __GNUC_STDC_INLINE__ 1
#define _BITS_FLOATN_H 
#define G_PRIORITY_LOW 300
#define _BITS_ERRNO_H 1
#define __FLT64_HAS_DENORM__ 1
#define __HAVE_FLOAT32 1
#define SEGV_ADIDERR SEGV_ADIDERR
#define __WORDSIZE_TIME64_COMPAT32 0
#define __HAVE_DISTINCT_FLOAT32 0
#define G_IS_DIR_SEPARATOR(c) ((c) == G_DIR_SEPARATOR)
#define __STRINGS_FORTIFIED 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define g_atomic_int_get(atomic) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); gint gaig_temp; (void) (0 ? *(atomic) ^ *(atomic) : 1); __atomic_load ((gint *)(atomic), &gaig_temp, __ATOMIC_SEQ_CST); (gint) gaig_temp; }))
#define GLIB_DEPRECATED_ENUMERATOR G_DEPRECATED
#define __kernel_old_uid_t __kernel_old_uid_t
#define EHOSTDOWN 112
#define __FP_FAST_FMAF32x 1
#define GLIB_DEPRECATED_MACRO_IN_2_32_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define PTHREAD_ONCE_INIT 0
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define __STDC_UTF_32__ 1
#define DBL_MAX_10_EXP __DBL_MAX_10_EXP__
#define __INT_FAST8_WIDTH__ 8
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define g_error(...) G_STMT_START { g_log (G_LOG_DOMAIN, G_LOG_LEVEL_ERROR, __VA_ARGS__); for (;;) ; } G_STMT_END
#define CLD_DUMPED CLD_DUMPED
#define GSIZE_TO_BE(val) ((gsize) GUINT64_TO_BE (val))
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define _SIZE_T 
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define G_HAVE_ISO_VARARGS 1
#define __ULONG32_TYPE unsigned int
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define GLIB_AVAILABLE_TYPE_IN_2_40 
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define g_atomic_int_compare_and_exchange(atomic,oldval,newval) (G_GNUC_EXTENSION ({ gint gaicae_oldval = (oldval); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (newval) ^ (oldval) : 1); __atomic_compare_exchange_n ((atomic), (void *) (&(gaicae_oldval)), (newval), FALSE, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST) ? TRUE : FALSE; }))
#define G_HOOK_IN_CALL(hook) ((G_HOOK_FLAGS (hook) & G_HOOK_FLAG_IN_CALL) != 0)
#define GLIB_UNAVAILABLE(maj,min) G_UNAVAILABLE(maj,min) _GLIB_EXTERN
#define TIME_UTC 1
#define GLIB_DEPRECATED_MACRO_IN_2_34_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __FLT64X_HAS_INFINITY__ 1
#define __BIG_ENDIAN 4321
#define __G_ARRAY_H__ 
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __suseconds_t_defined 
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define G_ANALYZER_ANALYZING 0
#define g_newa0(struct_type,n_structs) ((struct_type*) g_alloca0 (sizeof (struct_type) * (gsize) (n_structs)))
#define SIGFPE 8
#define GLIB_AVAILABLE_TYPE_IN_2_44 
#define __ASM_BITSPERLONG_H 
#define __fortify_function __extern_always_inline __attribute_artificial__
#define G_BEGIN_DECLS 
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define __off_t_defined 
#define EISCONN 106
#define GLIB_AVAILABLE_TYPE_IN_2_46 
#define ENOTBLK 15
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define g_assert_no_errno(expr) G_STMT_START { int __ret, __errsv; errno = 0; __ret = expr; __errsv = errno; if (__ret < 0) { gchar *__msg; __msg = g_strdup_printf ("assertion failed (" #expr " >= 0): errno %i: %s", __errsv, g_strerror (__errsv)); g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, __msg); g_free (__msg); } } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_66
#define SI_KERNEL SI_KERNEL
#define __GREFCOUNT_H__ 
#define g_message(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_MESSAGE, __VA_ARGS__)
#define __SIZEOF_WCHAR_T__ 4
#define unix 1
#define GLIB_AVAILABLE_TYPE_IN_2_48 
#define G_TIME_SPAN_DAY (G_GINT64_CONSTANT (86400000000))
#define SIGPWR 30
#define EMEDIUMTYPE 124
#define G_KEY_FILE_DESKTOP_KEY_NAME "Name"
#define G_GNUC_ALLOC_SIZE2(x,y) __attribute__((__alloc_size__(x,y)))
#define __mode_t_defined 
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define _GCC_SIZE_T 
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#define GINT64_TO_LE(val) ((gint64) (val))
#define __INO64_T_TYPE __UQUAD_TYPE
#define GUINT64_TO_BE(val) (GUINT64_SWAP_LE_BE (val))
#define G_BREAKPOINT() G_STMT_START{ raise (SIGTRAP); }G_STMT_END
#define G_GNUC_STRFTIME(format_idx) __attribute__((__format__ (gnu_strftime, format_idx, 0))) GLIB_AVAILABLE_MACRO_IN_2_60
#define _LIBC_LIMITS_H_ 1
#define SHRT_MAX __SHRT_MAX__
#define g_assert(expr) G_STMT_START { if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #expr); } G_STMT_END
#define GUINT16_SWAP_LE_BE(val) (GUINT16_SWAP_LE_BE_CONSTANT (val))
#define G_UNLOCK(name) g_mutex_unlock (&G_LOCK_NAME (name))
#define __UINT32_C(c) c ## U
#define EALREADY 114
#define g_datalist_id_remove_data(dl,q) g_datalist_id_set_data ((dl), (q), NULL)
#define ITIMER_PROF ITIMER_PROF
#define __size_t__ 
#define g_static_mutex_lock(mutex) g_mutex_lock (g_static_mutex_get_mutex (mutex)) GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_mutex_lock)
#define GPOINTER_TO_SIZE(p) ((gsize) (p))
#define SIGEV_THREAD SIGEV_THREAD
#define GLIB_DEPRECATED_IN_2_56_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __WINT_MIN__ 0U
#define __TIME64_T_TYPE __TIME_T_TYPE
#define g_macro__has_attribute __has_attribute
#define __ONCE_FLAG_INIT { 0 }
#define G_BOOKMARK_FILE_ERROR (g_bookmark_file_error_quark ())
#define _PTRDIFF_T_DECLARED 
#define DT_SOCK DT_SOCK
#define FLT_MANT_DIG __FLT_MANT_DIG__
#define sigcontext_struct sigcontext
#define _VA_LIST_T_H 
#define g_warning(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_WARNING, __VA_ARGS__)
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define SIG_ERR ((__sighandler_t) -1)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define G_LITTLE_ENDIAN 1234
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define GLIB_DEPRECATED_IN_2_40 GLIB_DEPRECATED
#define G_MAXFLOAT FLT_MAX
#define __CHAR32_TYPE__ unsigned int
#define G_END_DECLS 
#define G_PRIORITY_DEFAULT_IDLE 200
#define __key_t_defined 
#define POLL_IN POLL_IN
#define G_KEY_FILE_ERROR g_key_file_error_quark()
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_72 GLIB_DEPRECATED_ENUMERATOR
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __GLIBC_USE_IEC_60559_EXT 0
#define __fsfilcnt_t_defined 
#define EPROTONOSUPPORT 93
#define GSIZE_TO_LE(val) ((gsize) GUINT64_TO_LE (val))
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define ETXTBSY 26
#define G_HAVE_GROWING_STACK 0
#define GLIB_DEPRECATED_MACRO_IN_2_54_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define EBADRQC 56
#define NGROUPS_MAX 65536
#define SA_NOCLDWAIT 2
#define __va_list__ 
#define __G_MEM_H__ 
#define G_STATIC_RW_LOCK_INIT { G_STATIC_MUTEX_INIT, NULL, NULL, 0, FALSE, 0, 0 } GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_rw_lock_init)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_68_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define g_test_trap_assert_stderr(serrpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 4, serrpattern)
#define g_dataset_remove_data(l,k) g_dataset_id_set_data ((l), g_quark_try_string (k), NULL)
#define __lldiv_t_defined 1
#define GLIB_DEPRECATED_TYPE_IN_2_26_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define G_GNUC_PURE __attribute__((__pure__))
#define MAX_CANON 255
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_34_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define g_test_perf() (g_test_config_vars->test_perf)
#define G_MAXLONG LONG_MAX
#define g_atomic_int_and(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (val) : 1); (guint) __atomic_fetch_and ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define GSSIZE_TO_BE(val) ((gssize) GINT64_TO_BE (val))
#define __INT32_TYPE__ int
#define __SIZEOF_DOUBLE__ 8
#define g_assert_cmphex(n1,cmp,n2) G_STMT_START { guint64 __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'x'); } G_STMT_END
#define __time_t_defined 1
#define G_GINT64_FORMAT "li"
#define ____sigset_t_defined 
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_64 
#define __INT_LEAST32_WIDTH__ 32
#define __SI_ERRNO_THEN_CODE 1
#define va_start(v,l) __builtin_va_start(v,l)
#define GLIB_DEPRECATED_TYPE_IN_2_58_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define GLIB_SYSDEF_MSG_DONTROUTE 4
#define G_IO_CHANNEL_ERROR g_io_channel_error_quark()
#define SIGINT 2
#define G_GINT64_CONSTANT(val) (val ##L)
#define _BITS_POSIX1_LIM_H 1
#define __SIZEOF_FLOAT__ 4
#define g_dataset_id_remove_data(l,k) g_dataset_id_set_data ((l), (k), NULL)
#define g_try_new(struct_type,n_structs) _G_NEW (struct_type, n_structs, try_malloc)
#define g_test_thorough() (!g_test_config_vars->test_quick)
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_68 
#define GLIB_AVAILABLE_MACRO_IN_2_66 
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define FLT_HAS_SUBNORM __FLT_HAS_DENORM__
#define _T_SIZE 
#define SIGIOT SIGABRT
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define __va_arg_pack() __builtin_va_arg_pack ()
#define _POSIX_TIMER_MAX 32
#define __HAVE_DISTINCT_FLOAT32X 0
#define g_bit_nth_msf(mask,nth_bit) g_bit_nth_msf_impl(mask, nth_bit)
#define GLIB_DEPRECATED_TYPE_IN_2_70 GLIB_DEPRECATED_TYPE
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define __GNUC_MINOR__ 3
#define __INT_FAST16_WIDTH__ 64
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define GLIB_DEPRECATED_TYPE_IN_2_72 GLIB_DEPRECATED_TYPE
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define ILL_PRVREG ILL_PRVREG
#define g_main_quit(loop) g_main_loop_quit(loop) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_quit)
#define G_LOCK_DEFINE_STATIC(name) static G_LOCK_DEFINE (name)
#define G_SOURCE_FUNC(f) ((GSourceFunc) (void (*)(void)) (f)) GLIB_AVAILABLE_MACRO_IN_2_58
#define __glibc_clang_prereq(maj,min) 0
#define ILL_PRVOPC ILL_PRVOPC
#define __nlink_t_defined 
#define __G_VARIANT_TYPE_H__ 
#define GLIB_DEPRECATED_IN_2_44_FOR(f) GLIB_DEPRECATED_FOR(f)
#define EAGAIN 11
#define __BIT_TYPES_DEFINED__ 1
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define _RWLOCK_INTERNAL_H 
#define SEGV_ACCADI SEGV_ACCADI
#define __DBL_MAX_10_EXP__ 308
#define G_TIME_SPAN_MINUTE (G_GINT64_CONSTANT (60000000))
#define GLIB_DEPRECATED_MACRO_IN_2_26 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_28 GLIB_DEPRECATED_MACRO
#define SIG_DFL ((__sighandler_t) 0)
#define _BITS_STRING_FORTIFIED_H 1
#define __INT16_C(c) c
#define G_KEY_FILE_DESKTOP_KEY_STARTUP_WM_CLASS "StartupWMClass"
#define _DIRENT_H 1
#define g_thread_supported() (1) GLIB_DEPRECATED_MACRO_IN_2_32
#define g_node_prepend_data(parent,data) g_node_prepend ((parent), g_node_new (data))
#define __ARM_ARCH_ISA_A64 1
#define ENOTRECOVERABLE 131
#define __U32_TYPE unsigned int
#define G_DATE_BAD_JULIAN 0U
#define GLIB_DEPRECATED_MACRO_IN_2_30 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_32 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_34 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_38 GLIB_DEPRECATED_MACRO
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define SIG_IGN ((__sighandler_t) 1)
#define G_DEFINE_AUTOPTR_CLEANUP_FUNC(TypeName,func) _GLIB_DEFINE_AUTOPTR_CLEANUP_FUNCS(TypeName, TypeName, func)
#define __STDC__ 1
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define ELIBMAX 82
#define GLIB_DEPRECATED_MACRO_IN_2_44 GLIB_DEPRECATED_MACRO
#define __sigstack_defined 1
#define __PTRDIFF_TYPE__ long int
#define G_GSIZE_FORMAT "lu"
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define __G_CHECKSUM_H__ 
#define G_GNUC_PRETTY_FUNCTION "" GLIB_DEPRECATED_MACRO_IN_2_26_FOR(G_STRFUNC)
#define EL2NSYNC 45
#define GLIB_DEPRECATED_MACRO_IN_2_52 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_54 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_56 GLIB_DEPRECATED_MACRO
#define __G_MAIN_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_58 GLIB_DEPRECATED_MACRO
#define __clockid_t_defined 1
#define GSSIZE_TO_LE(val) ((gssize) GINT64_TO_LE (val))
#define __G_MAPPED_FILE_H__ 
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __size_t 
#define G_KEY_FILE_DESKTOP_KEY_GENERIC_NAME "GenericName"
#define _GLIB_GNUC_DO_PRAGMA(x) _Pragma(G_STRINGIFY (x))
#define GLIB_DEPRECATED_MACRO_IN_2_60 GLIB_DEPRECATED_MACRO
#define __ATOMIC_SEQ_CST 5
#define GLIB_DEPRECATED_MACRO_IN_2_62 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_64 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_68 GLIB_DEPRECATED_MACRO
#define _BITS_SIGACTION_H 1
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_56_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define GLIB_VERSION_2_26 (G_ENCODE_VERSION (2, 26))
#define G_VARIANT_TYPE_TUPLE ((const GVariantType *) "r")
#define _GLIB_AUTOPTR_SLIST_FUNC_NAME(TypeName) glib_slistautoptr_cleanup_ ##TypeName
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define ENOPKG 65
#define g_date_monday_week_of_year g_date_get_monday_week_of_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_monday_week_of_year)
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define GLIB_DEPRECATED_MACRO_IN_2_72 GLIB_DEPRECATED_MACRO
#define LDBL_DIG __LDBL_DIG__
#define __G_SEQUENCE_H__ 
#define ITIMER_REAL ITIMER_REAL
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define __G_UNICODE_H__ 
#define GLIB_VERSION_2_28 (G_ENCODE_VERSION (2, 28))
#define G_THREADS_ENABLED 
#define __UINTPTR_TYPE__ long unsigned int
#define __G_HMAC_H__ 
#define G_ALLOCATOR_LIST 1
#define GULONG_TO_BE(val) ((gulong) GUINT64_TO_BE (val))
#define _PTHREAD_H 1
#define __glibc_has_builtin(name) __has_builtin (name)
#define CLD_KILLED CLD_KILLED
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define SIGTERM 15
#define G_GOFFSET_FORMAT G_GINT64_FORMAT
#define __bitwise__ 
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __linux__ 1
#define __LDBL_MIN_10_EXP__ (-4931)
#define FPE_FLTUNK FPE_FLTUNK
#define GLIB_DEPRECATED_MACRO_IN_2_36 GLIB_DEPRECATED_MACRO
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define __G_REGEX_H__ 
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __SI_BAND_TYPE long int
#define __HAVE_DISTINCT_FLOAT64X 0
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define g_test_quick() (g_test_config_vars->test_quick)
#define SIG_SETMASK 2
#define __SIZEOF_LONG_LONG__ 8
#define _GLIB_AUTOPTR_QUEUE_FUNC_NAME(TypeName) glib_queueautoptr_cleanup_ ##TypeName
#define DT_FIFO DT_FIFO
#define g_alloca0(size) ((size) == 0 ? NULL : memset (g_alloca (size), 0, (size)))
#define __USE_ATFILE 1
#define EROFS 30
#define _POSIX_OPEN_MAX 20
#define _POSIX_LOGIN_NAME_MAX 9
#define _GCC_PTRDIFF_T 
#define G_CSET_LATINC "\300\301\302\303\304\305\306" "\307\310\311\312\313\314\315\316\317\320" "\321\322\323\324\325\326" "\330\331\332\333\334\335\336"
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define __FLT128_DECIMAL_DIG__ 36
#define _POSIX_THREAD_KEYS_MAX 128
#define G_LOCK_EXTERN(name) extern GMutex G_LOCK_NAME (name)
#define G_BYTE_ORDER G_LITTLE_ENDIAN
#define __WORDSIZE 64
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define GUINT32_SWAP_LE_PDP(val) ((guint32) ( (((guint32) (val) & (guint32) 0x0000ffffU) << 16) | (((guint32) (val) & (guint32) 0xffff0000U) >> 16)))
#define si_utime _sifields._sigchld.si_utime
#define g_test_quiet() (g_test_config_vars->test_quiet)
#define ENOTUNIQ 76
#define _BITS_PTHREADTYPES_ARCH_H 1
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define GLIB_DEPRECATED_TYPE_IN_2_68 GLIB_DEPRECATED_TYPE
#define g_test_initialized() (g_test_config_vars->test_initialized)
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define G_OS_INFO_KEY_VERSION_ID GLIB_AVAILABLE_MACRO_IN_2_64 "VERSION_ID"
#define __WALL 0x40000000
#define GLIB_DEPRECATED_IN_2_32_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __ldiv_t_defined 1
#define ___int_ptrdiff_t_h 
#define __cleanup_fct_attribute 
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __FLT_MIN_10_EXP__ (-37)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define LDBL_TRUE_MIN __LDBL_DENORM_MIN__
#define FLT_MAX __FLT_MAX__
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define __G_ASYNCQUEUE_H__ 
#define _ASM_GENERIC_TYPES_H 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define G_CONST_RETURN const GLIB_DEPRECATED_MACRO_IN_2_30_FOR(const)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define EOPNOTSUPP 95
#define g_atomic_pointer_set(atomic,newval) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); glib_typeof ((atomic)) gaps_temp_atomic = (atomic); glib_typeof (*(atomic)) gaps_temp_newval = (newval); (void) (0 ? (gpointer) * (atomic) : NULL); __atomic_store (gaps_temp_atomic, &gaps_temp_newval, __ATOMIC_SEQ_CST); }))
#define g_atomic_pointer_add(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); (void) (0 ? (gpointer) *(atomic) : NULL); (void) (0 ? (val) ^ (val) : 1); (gssize) __atomic_fetch_add ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define __P(args) args
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define G_GNUC_MAY_ALIAS __attribute__((may_alias))
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define g_scanner_add_symbol(scanner,symbol,value) G_STMT_START { g_scanner_scope_add_symbol ((scanner), 0, (symbol), (value)); } G_STMT_END GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_scanner_scope_add_symbol)
#define _SCHED_H 1
#define d_fileno d_ino
#define G_DEFINE_QUARK(QN,q_n) GQuark q_n ##_quark (void) { static GQuark q; if G_UNLIKELY (q == 0) q = g_quark_from_static_string (#QN); return q; }
#define G_OS_INFO_KEY_BUG_REPORT_URL GLIB_AVAILABLE_MACRO_IN_2_64 "BUG_REPORT_URL"
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define __fsblkcnt_t_defined 
#define FPE_FLTUND FPE_FLTUND
#define _POSIX2_LINE_MAX 2048
#define _STDLIB_H 1
#define __GLIBC_USE_LIB_EXT2 0
