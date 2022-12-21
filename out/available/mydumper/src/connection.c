#define sa_sigaction __sigaction_handler.sa_sigaction
#define _BITS_SCHED_H 1
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define __G_VERSION_MACROS_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_30_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __SSP_STRONG__ 3
#define G_LOG_LEVEL_USER_SHIFT (8)
#define __attr_access(x) __attribute__ ((__access__ x))
#define __G_DATE_H__ 
#define g_dataset_get_data(l,k) (g_dataset_id_get_data ((l), g_quark_try_string (k)))
#define __DBL_MIN_EXP__ (-1021)
#define g_array_insert_val(a,i,v) g_array_insert_vals (a, i, &(v), 1)
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_44_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define EMULTIHOP 72
#define G_GINT64_MODIFIER "l"
#define CR_SHARED_MEMORY_CONNECTION 2037
#define _SC_PII _SC_PII
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define PCRE_CONFIG_UTF32 12
#define __UINT_LEAST16_MAX__ 0xffff
#define G_SIZEOF_MEMBER(struct_type,member) GLIB_AVAILABLE_MACRO_IN_2_64 sizeof (((struct_type *) 0)->member)
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define __FLT128_MAX_10_EXP__ 4932
#define g_newa(struct_type,n_structs) ((struct_type*) g_alloca (sizeof (struct_type) * (gsize) (n_structs)))
#define RE_DUP_MAX (0x7fff)
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define GLIB_DEPRECATED_TYPE_IN_2_34_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define G_CAN_INLINE 
#define g_ascii_isupper(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_UPPER) != 0)
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define PARTITION_EXPR_CHAR_LEN 2048
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define si_fd _sifields._sigpoll.si_fd
#define _T_WCHAR_ 
#define _SC_IPV6 _SC_IPV6
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define CR_SERVER_LOST_EXTENDED 2055
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define si_arch _sifields._sigsys._arch
#define __S64_TYPE long int
#define GLIB_DEPRECATED_ENUMERATOR G_DEPRECATED
#define __SQUAD_TYPE long int
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _BITS_SIGINFO_CONSTS_H 1
#define SIGBUS 7
#define __GNU_LIBRARY__ 6
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define __CHAR_BIT__ 8
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define EREMCHG 78
#define g_atomic_int_set(atomic,newval) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); gint gais_temp = (gint) (newval); (void) (0 ? *(atomic) ^ (newval) : 1); __atomic_store ((gint *)(atomic), &gais_temp, __ATOMIC_SEQ_CST); }))
#define SIGTTIN 21
#define PCRE_STUDY_JIT_PARTIAL_SOFT_COMPILE 0x0002
#define EACCES 13
#define g_assert_cmpint(n1,cmp,n2) G_STMT_START { gint64 __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'i'); } G_STMT_END
#define g_uint_checked_mul(dest,a,b) (!__builtin_mul_overflow(a, b, dest))
#define CR_ERROR 0
#define G_OS_UNIX 
#define G_GNUC_NULL_TERMINATED __attribute__((__sentinel__))
#define EDESTADDRREQ 89
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define __DADDR_T_TYPE __S32_TYPE
#define si_pid _sifields._kill.si_pid
#define PCRE_CONFIG_UTF16 10
#define PIPE_BUF 4096
#define PCRE_CONFIG_UNICODE_PROPERTIES 6
#define G_GSSIZE_MODIFIER "l"
#define G_VARIANT_TYPE_STRING ((const GVariantType *) "s")
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define GLIB_DEPRECATED_MACRO_IN_2_52_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define PCRE_INFO_JITSIZE 17
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_66_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define __INT32_C(c) c
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define G_LOG_DOMAIN ((gchar*) 0)
#define MULTIPLE_KEY_FLAG 8
#define GLIB_VERSION_CUR_STABLE (G_ENCODE_VERSION (GLIB_MAJOR_VERSION, GLIB_MINOR_VERSION))
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define __G_SLIST_H__ 
#define CR_UNKNOWN_HOST 2005
#define G_VARIANT_TYPE_DICT_ENTRY ((const GVariantType *) "{?*}")
#define CR_CONNECTION_ERROR 2002
#define GLIB_DEPRECATED_TYPE_IN_2_56_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define g_ascii_isalpha(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_ALPHA) != 0)
#define g_ptr_array_index(array,index_) ((array)->pdata)[index_]
#define CR_NAMEDPIPE_CONNECTION 2015
#define g_ntohl(val) (GUINT32_FROM_BE (val))
#define g_ntohs(val) (GUINT16_FROM_BE (val))
#define __FLT32X_DECIMAL_DIG__ 17
#define MYSQL_ERRMSG_SIZE 512
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define CR_CONN_UNKNOW_PROTOCOL 2047
#define GULONG_TO_LE(val) ((gulong) GUINT64_TO_LE (val))
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define __G_REL_H__ 
#define _XOPEN_VERSION 700
#define SCHED_RR 2
#define G_URI_RESERVED_CHARS_ALLOWED_IN_PATH G_URI_RESERVED_CHARS_ALLOWED_IN_PATH_ELEMENT "/"
#define PCRE_AUTO_CALLOUT 0x00004000
#define G_IEEE754_FLOAT_BIAS (127)
#define _POSIX_PATH_MAX 256
#define SEGV_BNDERR SEGV_BNDERR
#define PCRE_NEWLINE_CRLF 0x00300000
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define FIELD_TYPE_TIME MYSQL_TYPE_TIME
#define GLIB_DEPRECATED_IN_2_42_FOR(f) GLIB_DEPRECATED_FOR(f)
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define __sigval_t_defined 
#define SIGPROF 27
#define G_GNUC_NO_INLINE __attribute__ ((__noinline__))
#define ERRMSG_INCLUDED 
#define G_GSIZE_MODIFIER "l"
#define g_assert_cmpvariant(v1,v2) G_STMT_START { GVariant *__v1 = (v1), *__v2 = (v2); if (!g_variant_equal (__v1, __v2)) { gchar *__s1, *__s2, *__msg; __s1 = g_variant_print (__v1, TRUE); __s2 = g_variant_print (__v2, TRUE); __msg = g_strdup_printf ("assertion failed (" #v1 " == " #v2 "): %s does not equal %s", __s1, __s2); g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, __msg); g_free (__s1); g_free (__s2); g_free (__msg); } } G_STMT_END
#define __CFLOAT128 _Complex _Float128
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define g_main_quit(loop) g_main_loop_quit(loop) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_quit)
#define __SVE_ZREGS_OFFSET 0
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define __DBL_MIN_10_EXP__ (-307)
#define g_test_add(testpath,Fixture,tdata,fsetup,ftest,fteardown) G_STMT_START { void (*add_vtable) (const char*, gsize, gconstpointer, void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer)) = (void (*) (const gchar *, gsize, gconstpointer, void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer))) g_test_add_vtable; add_vtable (testpath, sizeof (Fixture), tdata, fsetup, ftest, fteardown); } G_STMT_END
#define ENOTTY 25
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define g_atomic_pointer_and(atomic,val) (G_GNUC_EXTENSION ({ gsize *gapa_atomic = (gsize *) (atomic); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gsize)); (void) (0 ? (gpointer) *(atomic) : NULL); (void) (0 ? (val) ^ (val) : 1); (gsize) __atomic_fetch_and (gapa_atomic, (val), __ATOMIC_SEQ_CST); }))
#define _CS_V6_ENV _CS_V6_ENV
#define CLIENT_PLUGIN_AUTH_LENENC_CLIENT_DATA (1UL << 21)
#define __socklen_t_defined 
#define __u_char_defined 
#define G_LOG_FATAL_MASK (G_LOG_FLAG_RECURSION | G_LOG_LEVEL_ERROR)
#define GLIB_VAR _GLIB_EXTERN
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define __FLT64X_HAS_INFINITY__ 1
#define IS_SESSION_STATE_TYPE(T) (((int)(T) >= SESSION_TRACK_BEGIN) && ((T) <= SESSION_TRACK_END))
#define si_stime _sifields._sigchld.si_stime
#define __ASM_SVE_CONTEXT_H 
#define _POSIX_TRACE_EVENT_FILTER -1
#define __INT_LEAST16_TYPE__ short int
#define CR_CONN_HOST_ERROR 2003
#define SQLSTATE_LENGTH 5
#define _GLIB_HAVE_BUILTIN_OVERFLOW_CHECKS 
#define g_return_val_if_fail(expr,val) G_STMT_START { if (G_LIKELY (expr)) { } else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, #expr); return (val); } } G_STMT_END
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define _BITS_TYPES_LOCALE_T_H 1
#define _LIMITS_H___ 
#define G_PASTE(identifier1,identifier2) G_PASTE_ARGS (identifier1, identifier2)
#define CR_KERBEROS_USER_NOT_FOUND 2067
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define SIGHUP 1
#define __SI_SIGFAULT_ADDL 
#define GET_FIXED_FIELDS_FLAG (1 << 18)
#define ENOMEM 12
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SYS_TIME_H 1
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH _CS_PATH
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define PCRE_ERROR_NULLWSLIMIT (-22)
#define _ERRNO_H 1
#define GINT32_FROM_LE(val) (GINT32_TO_LE (val))
#define __stub_sigreturn 
#define g_clear_handle_id(tag_ptr,clear_func) G_STMT_START { G_STATIC_ASSERT (sizeof *(tag_ptr) == sizeof (guint)); guint *_tag_ptr = (guint *) (tag_ptr); guint _handle_id; _handle_id = *_tag_ptr; if (_handle_id > 0) { *_tag_ptr = 0; clear_func (_handle_id); } } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_56
#define _XBS5_LPBIG_OFFBIG -1
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define NFDBITS __NFDBITS
#define __INO_T_MATCHES_INO64_T 1
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define ECONNABORTED 103
#define GUINT_TO_BE(val) ((guint) GUINT32_TO_BE (val))
#define FIELD_TYPE_DECIMAL MYSQL_TYPE_DECIMAL
#define GLIB_DEPRECATED_IN_2_64_FOR(f) GLIB_DEPRECATED_FOR(f)
#define DT_CHR DT_CHR
#define GLIB_SYSDEF_AF_INET6 10
#define g_renew(struct_type,mem,n_structs) _G_RENEW (struct_type, mem, n_structs, realloc)
#define __ARM_FP 14
#define SIGSTKFLT 16
#define CR_NO_DATA 2051
#define PCRE_PRERELEASE 
#define __fortify_function __extern_always_inline __attribute_artificial__
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define NAME_MAX 255
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define DBL_MANT_DIG __DBL_MANT_DIG__
#define __G_CONVERT_H__ 
#define G_ALIGNOF(type) _Alignof (type) GLIB_AVAILABLE_MACRO_IN_2_60
#define __UINTMAX_TYPE__ long unsigned int
#define __ASM_GENERIC_BITS_PER_LONG 
#define G_GOFFSET_MODIFIER G_GINT64_MODIFIER
#define _POSIX_THREAD_CPUTIME 0
#define __linux 1
#define G_END_DECLS 
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define PCRE_ERROR_BADNEWLINE (-23)
#define PCRE_ERROR_BADCOUNT (-15)
#define __CHAR_UNSIGNED__ 1
#define _BITS_PTHREADTYPES_ARCH_H 1
#define GLIB_DEPRECATED_TYPE_IN_2_28 GLIB_DEPRECATED_TYPE
#define GINT64_FROM_BE(val) (GINT64_TO_BE (val))
#define __UINT32_MAX__ 0xffffffffU
#define _BITS_SS_FLAGS_H 1
#define GLIB_DEPRECATED_TYPE_IN_2_30 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_32 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_36 GLIB_DEPRECATED_TYPE
#define __SIZE_T 
#define g_test_assert_expected_messages() g_test_assert_expected_messages_internal (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC)
#define _POSIX_PIPE_BUF 512
#define PCRE_EXTRA_MATCH_LIMIT_RECURSION 0x0010
#define LDBL_MANT_DIG __LDBL_MANT_DIG__
#define _POSIX_VDISABLE '\0'
#define g_datalist_remove_no_notify(dl,k) g_datalist_id_remove_no_notify ((dl), g_quark_try_string (k))
#define SIGUSR1 10
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define GLIB_DEPRECATED_TYPE_IN_2_40 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_44 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_48 GLIB_DEPRECATED_TYPE
#define _ATFILE_SOURCE 1
#define PCRE_INFO_FIRSTTABLE 5
#define _SC_NETWORKING _SC_NETWORKING
#define __FLT128_MIN_EXP__ (-16381)
#define __GREFCOUNT_H__ 
#define g_dataset_remove_no_notify(l,k) g_dataset_id_remove_no_notify ((l), g_quark_try_string (k))
#define GLIB_DEPRECATED_TYPE_IN_2_50 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_52 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_54 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_56 GLIB_DEPRECATED_TYPE
#define WUNTRACED 2
#define GLIB_DEPRECATED_TYPE_IN_2_32_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define CLIENT_ALL_FLAGS (CLIENT_LONG_PASSWORD | CLIENT_FOUND_ROWS | CLIENT_LONG_FLAG | CLIENT_CONNECT_WITH_DB | CLIENT_NO_SCHEMA | CLIENT_COMPRESS | CLIENT_ODBC | CLIENT_LOCAL_FILES | CLIENT_IGNORE_SPACE | CLIENT_PROTOCOL_41 | CLIENT_INTERACTIVE | CLIENT_SSL | CLIENT_IGNORE_SIGPIPE | CLIENT_TRANSACTIONS | CLIENT_RESERVED | CLIENT_RESERVED2 | CLIENT_MULTI_STATEMENTS | CLIENT_MULTI_RESULTS | CLIENT_PS_MULTI_RESULTS | CLIENT_SSL_VERIFY_SERVER_CERT | CLIENT_REMEMBER_OPTIONS | CLIENT_PLUGIN_AUTH | CLIENT_CONNECT_ATTRS | CLIENT_PLUGIN_AUTH_LENENC_CLIENT_DATA | CLIENT_CAN_HANDLE_EXPIRED_PASSWORDS | CLIENT_SESSION_TRACK | CLIENT_DEPRECATE_EOF | CLIENT_OPTIONAL_RESULTSET_METADATA | CLIENT_ZSTD_COMPRESSION_ALGORITHM | CLIENT_QUERY_ATTRIBUTES | MULTI_FACTOR_AUTHENTICATION)
#define g_datalist_set_data_full(dl,k,d,f) g_datalist_id_set_data_full ((dl), g_quark_from_string (k), (d), (f))
#define g_dirname g_path_get_dirname GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_path_get_dirname)
#define EISNAM 120
#define UINT16_C(c) c
#define GLIB_DEPRECATED_TYPE_IN_2_60 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_62 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_64 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_66 GLIB_DEPRECATED_TYPE
#define GLIB_DEPRECATED_TYPE_IN_2_68 GLIB_DEPRECATED_TYPE
#define GUINT_TO_LE(val) ((guint) GUINT32_TO_LE (val))
#define PCRE_INFO_DEFAULT_TABLES 11
#define g_date_days_in_month g_date_get_days_in_month GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_days_in_month)
#define g_atomic_int_or(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (val) : 1); (guint) __atomic_fetch_or ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define ENOKEY 126
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define g_assert(expr) G_STMT_START { if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #expr); } G_STMT_END
#define ENOMSG 42
#define _PC_PRIO_IO _PC_PRIO_IO
#define EXIT_FAILURE 1
#define GLIB_DEPRECATED_TYPE_IN_2_70 GLIB_DEPRECATED_TYPE
#define __INT_LEAST16_WIDTH__ 16
#define PCRE_ERROR_BADOFFSET (-24)
#define G_STATIC_MUTEX_INIT { NULL, PTHREAD_MUTEX_INITIALIZER } GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_mutex_init)
#define _SIZE_T_DEFINED_ 
#define PCRE_NEWLINE_CR 0x00100000
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __SCHAR_MAX__ 0x7f
#define G_PRIORITY_DEFAULT 0
#define g_static_mutex_trylock(mutex) g_mutex_trylock (g_static_mutex_get_mutex (mutex)) GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_mutex_trylock)
#define _POSIX_V6_ILP32_OFF32 -1
#define __KERNEL_STRICT_NAMES 
#define __INT64_C(c) c ## L
#define FLT_TRUE_MIN __FLT_DENORM_MIN__
#define G_GINT32_MODIFIER ""
#define SA_SIGINFO 4
#define G_LN10 2.3025850929940456840179914546843642076011014886288
#define MYSQL_CLIENT_TRACE_PLUGIN_INTERFACE_VERSION 0x0200
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define G_MAXSHORT SHRT_MAX
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define g_autolist(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_LIST_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_LIST_TYPENAME(TypeName)
#define IS_NUM(t) (((t) <= MYSQL_TYPE_INT24 && (t) != MYSQL_TYPE_TIMESTAMP) || (t) == MYSQL_TYPE_YEAR || (t) == MYSQL_TYPE_NEWDECIMAL)
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define NET_ERROR_SOCKET_NOT_WRITABLE 4
#define PCRE_DOLLAR_ENDONLY 0x00000020
#define GINT64_FROM_LE(val) (GINT64_TO_LE (val))
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define PCRE_INFO_LASTLITERAL 6
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define _BITS_SIGINFO_ARCH_H 1
#define si_addr _sifields._sigfault.si_addr
#define G_INLINE_FUNC static inline GLIB_DEPRECATED_MACRO_IN_2_48_FOR(static inline)
#define CR_NO_STMT_METADATA 2052
#define __attribute_used__ __attribute__ ((__used__))
#define g_test_trap_assert_passed() g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 0, 0)
#define __G_MARKUP_H__ 
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_64_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define G_ASCII_DTOSTR_BUF_SIZE (29 + 10)
#define _ASM_GENERIC_INT_LL64_H 
#define PCRE_DOTALL 0x00000004
#define _SC_VERSION _SC_VERSION
#define MB_LEN_MAX 16
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define __USER_LABEL_PREFIX__ 
#define FIELD_TYPE_DATE MYSQL_TYPE_DATE
#define _BITS_ENDIANNESS_H 1
#define g_assert_false(expr) G_STMT_START { if G_LIKELY (!(expr)) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should be FALSE"); } G_STMT_END
#define __INT16_TYPE__ short int
#define __G_HOOK_H__ 
#define __GLIBC__ 2
#define _SC_POLL _SC_POLL
#define PCRE_NEWLINE_LF 0x00200000
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define G_ENCODE_VERSION(major,minor) ((major) << 16 | (minor) << 8)
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define G_HAVE_GROWING_STACK 0
#define WCONTINUED 8
#define BLOB_FLAG 16
#define CR_SHARED_MEMORY_MAP_ERROR 2043
#define PCRE_NO_UTF32_CHECK 0x00002000
#define __LDBL_HAS_INFINITY__ 1
#define _BITS_UINTN_IDENTITY_H 1
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define CR_ERROR_FIRST 2000
#define CR_SSL_FIPS_MODE_ERR 2064
#define __FP_FAST_FMAF32 1
#define MYSQL_CLIENT_AUTHENTICATION_PLUGIN_INTERFACE_VERSION 0x0200
#define GLIB_DEPRECATED_MACRO_FOR(f) _GLIB_GNUC_DO_PRAGMA(GCC warning G_STRINGIFY (Deprecated pre-processor symbol: replace with #f))
#define G_KEY_FILE_DESKTOP_KEY_MIME_TYPE "MimeType"
#define _FLOAT_H___ 
#define g_test_undefined() (g_test_config_vars->test_undefined)
#define PCRE_ERROR_BADMODE (-28)
#define MYSQL_CLIENT_reserved1 0
#define _BSD_SIZE_T_DEFINED_ 
#define __FLT32_DIG__ 6
#define G_BIG_ENDIAN 4321
#define G_DEFINE_EXTENDED_ERROR(ErrorType,error_type) static inline ErrorType ## Private * error_type ## _get_private (const GError *error) { const gsize sa = 2 * sizeof (gsize); const gsize as = (sizeof (ErrorType ## Private) + (sa - 1)) & -sa; g_return_val_if_fail (error != NULL, NULL); g_return_val_if_fail (error->domain == error_type ## _quark (), NULL); return (ErrorType ## Private *) (((guint8 *)error) - as); } static void g_error_with_ ## error_type ## _private_init (GError *error) { ErrorType ## Private *priv = error_type ## _get_private (error); error_type ## _private_init (priv); } static void g_error_with_ ## error_type ## _private_copy (const GError *src_error, GError *dest_error) { const ErrorType ## Private *src_priv = error_type ## _get_private (src_error); ErrorType ## Private *dest_priv = error_type ## _get_private (dest_error); error_type ## _private_copy (src_priv, dest_priv); } static void g_error_with_ ## error_type ## _private_clear (GError *error) { ErrorType ## Private *priv = error_type ## _get_private (error); error_type ## _private_clear (priv); } GQuark error_type ## _quark (void) { static GQuark q; static gsize initialized = 0; if (g_once_init_enter (&initialized)) { q = g_error_domain_register_static (#ErrorType, sizeof (ErrorType ## Private), g_error_with_ ## error_type ## _private_init, g_error_with_ ## error_type ## _private_copy, g_error_with_ ## error_type ## _private_clear); g_once_init_leave (&initialized, 1); } return q; }
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define __RLIM_T_MATCHES_RLIM64_T 1
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define GLIB_DEPRECATED_IN_2_40_FOR(f) GLIB_DEPRECATED_FOR(f)
#define SS_DISABLE SS_DISABLE
#define ENOLINK 67
#define __SSIZE_T_TYPE __SWORD_TYPE
#define PCRE_INFO_NAMECOUNT 8
#define PCRE_ERROR_SHORTUTF8 (-25)
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_26 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_28 
#define G_ALLOCATOR_LIST 1
#define __SVE_NUM_ZREGS 32
#define __DEV_T_TYPE __UQUAD_TYPE
#define g_ascii_islower(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_LOWER) != 0)
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_30 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_32 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_34 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_38 
#define GLIB_MINOR_VERSION 72
#define SIGIO SIGPOLL
#define g_list_previous(list) ((list) ? (((GList *)(list))->prev) : NULL)
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define DBL_HAS_SUBNORM __DBL_HAS_DENORM__
#define __STDC_UTF_16__ 1
#define g_assert_not_reached() G_STMT_START { g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, NULL); } G_STMT_END
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_40 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_42 
#define le32toh(x) __uint32_identity (x)
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_48 
#define PART_KEY_FLAG 16384
#define INDEX_COMMENT_MAXLEN 1024
#define __GLIBC_USE_IEC_60559_BFP_EXT 0
#define g_string_sprintfa g_string_append_printf GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_string_append_printf)
#define GLIB_DEPRECATED_MACRO_IN_2_72_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __G_HOST_UTILS_H__ 
#define _POSIX_NAME_MAX 14
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_50 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_54 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_56 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_58 
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_60 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_62 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_64 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_66 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_68 
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define __G_LIB_H__ 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_70 
#define __FLT32X_HAS_INFINITY__ 1
#define __INT32_MAX__ 0x7fffffff
#define PCRE_UTF32_ERR0 0
#define PCRE_UTF32_ERR1 1
#define PCRE_UTF32_ERR2 2
#define PCRE_UTF32_ERR3 3
#define __GLIBC_USE_DEPRECATED_GETS 0
#define _POSIX_V7_LPBIG_OFFBIG -1
#define g_test_initialized() (g_test_config_vars->test_initialized)
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __INT_WIDTH__ 32
#define __G_QUEUE_H__ 
#define __G_CACHE_H__ 
#define __STDC_IEC_559__ 1
#define GLIB_SYSDEF_POLLOUT =4
#define __STDC_ISO_10646__ 201706L
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define _SC_NL_NMAX _SC_NL_NMAX
#define GLIB_AVAILABLE_TYPE_IN_2_26 
#define GLIB_AVAILABLE_TYPE_IN_2_28 
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define FIELD_TYPES_INCLUDED 
#define G_PRIORITY_HIGH_IDLE 100
#define MYSQL_CLIENT_TRACE_PLUGIN 3
#define __G_LIST_H__ 
#define PCRE_NOTEMPTY_ATSTART 0x10000000
#define __DECIMAL_DIG__ 36
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define GLIB_AVAILABLE_TYPE_IN_2_30 
#define GLIB_AVAILABLE_TYPE_IN_2_32 
#define _BITS_ERRNO_H 1
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 2
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define __G_SPAWN_H__ 
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define CLIENT_CAN_HANDLE_EXPIRED_PASSWORDS (1UL << 22)
#define GLIB_AVAILABLE_TYPE_IN_2_40 
#define G_VARIANT_TYPE_BYTESTRING_ARRAY ((const GVariantType *) "aay")
#define GLIB_AVAILABLE_TYPE_IN_2_42 
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define GLIB_AVAILABLE_TYPE_IN_2_44 
#define GLIB_AVAILABLE_TYPE_IN_2_46 
#define GLIB_AVAILABLE_TYPE_IN_2_48 
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define __FLT128_IS_IEC_60559__ 2
#define TIMESTAMP_FLAG 1024
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define CLIENT_ERRMAP 2
#define G_KEY_FILE_DESKTOP_TYPE_LINK "Link"
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define SEGV_ACCADI SEGV_ACCADI
#define GLIB_AVAILABLE_TYPE_IN_2_50 
#define GLIB_AVAILABLE_TYPE_IN_2_52 
#define WSTOPSIG(status) __WSTOPSIG (status)
#define GLIB_AVAILABLE_TYPE_IN_2_54 
#define GLIB_AVAILABLE_TYPE_IN_2_56 
#define MYSQL_VERSION_ID 80031
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define g_alloca0(size) ((size) == 0 ? NULL : memset (g_alloca (size), 0, (size)))
#define _POSIX_LOGIN_NAME_MAX 9
#define PCRE_NOTEOL 0x00000100
#define SIG_ATOMIC_MIN (-2147483647-1)
#define PTRDIFF_MAX (9223372036854775807L)
#define FPSIMD_MAGIC 0x46508001
#define REFRESH_READ_LOCK 16384
#define GLIB_AVAILABLE_TYPE_IN_2_60 
#define GLIB_AVAILABLE_TYPE_IN_2_62 
#define __ASM_SIGCONTEXT_H 
#define GLIB_AVAILABLE_TYPE_IN_2_68 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define DELAYTIMER_MAX 2147483647
#define __LDBL_HAS_QUIET_NAN__ 1
#define GLIB_AVAILABLE_TYPE_IN_2_70 
#define GLIB_AVAILABLE_TYPE_IN_2_72 
#define g_assert_cmpfloat_with_epsilon(n1,n2,epsilon) G_STMT_START { double __n1 = (n1), __n2 = (n2), __epsilon = (epsilon); if (G_APPROX_VALUE (__n1, __n2, __epsilon)) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " == " #n2 " (+/- " #epsilon ")", __n1, "==", __n2, 'f'); } G_STMT_END
#define __attribute_const__ __attribute__ ((__const__))
#define CR_NAMEDPIPESETSTATE_ERROR 2018
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define _POSIX_NO_TRUNC 1
#define g_critical(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, __VA_ARGS__)
#define __INT_LEAST16_MAX__ 0x7fff
#define htobe32(x) __bswap_32 (x)
#define G_MAXUINT8 ((guint8) 0xff)
#define ECHILD 10
#define L_tmpnam 20
#define _DIRENT_HAVE_D_RECLEN 
#define ___int_wchar_t_h 
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define G_MAXINT16 ((gint16) 0x7fff)
#define LDBL_MIN_EXP __LDBL_MIN_EXP__
#define __GNUC__ 11
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define ILL_BADSTK ILL_BADSTK
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define __OFF64_T_TYPE __SQUAD_TYPE
#define g_node_prev_sibling(node) ((node) ? ((GNode*) (node))->prev : NULL)
#define G_MAXINT32 ((gint32) 0x7fffffff)
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_36 
#define GLIB_SYSDEF_AF_INET 2
#define __daddr_t_defined 
#define RELYING_PARTY_ID_LENGTH 255
#define __G_OPTION_H__ 
#define __GLIB_TYPEOF_H__ 
#define G_APPROX_VALUE(a,b,epsilon) (((a) > (b) ? (a) - (b) : (b) - (a)) < (epsilon))
#define G_STATIC_ASSERT_EXPR(expr) ((void) sizeof (char[(expr) ? 1 : -1]))
#define G_CSET_A_2_Z "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define GLIB_DEPRECATED_TYPE_IN_2_30_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define sa_handler __sigaction_handler.sa_handler
#define LONG_MAX __LONG_MAX__
#define STDERR_FILENO 2
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define G_MAXINT64 G_GINT64_CONSTANT(0x7fffffffffffffff)
#define g_ascii_isdigit(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_DIGIT) != 0)
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define __FLT64_MAX_10_EXP__ 308
#define __GLIBC_USE_LIB_EXT2 0
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define g_uint64_checked_add(dest,a,b) (!__builtin_add_overflow(a, b, dest))
#define WTERMSIG(status) __WTERMSIG (status)
#define CLIENT_SSL_VERIFY_SERVER_CERT (1UL << 30)
#define __G_ATOMIC_H__ 
#define _GLIB_AUTOPTR_LIST_TYPENAME(TypeName) TypeName ##_listautoptr
#define CR_INVALID_PARAMETER_NO 2034
#define __DBL_IS_IEC_60559__ 2
#define g_random_boolean() ((g_random_int () & (1 << 15)) != 0)
#define __FLT32_HAS_INFINITY__ 1
#define _POSIX_CHOWN_RESTRICTED 0
#define EXIT_SUCCESS 0
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_44 
#define GLIB_DEPRECATED_MACRO_IN_2_28_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define SI_QUEUE SI_QUEUE
#define _POSIX_SIGQUEUE_MAX 32
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define GUINT32_SWAP_LE_BE_CONSTANT(val) ((guint32) ( (((guint32) (val) & (guint32) 0x000000ffU) << 24) | (((guint32) (val) & (guint32) 0x0000ff00U) << 8) | (((guint32) (val) & (guint32) 0x00ff0000U) >> 8) | (((guint32) (val) & (guint32) 0xff000000U) >> 24)))
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#define ITIMER_PROF ITIMER_PROF
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_60 
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_62 
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_64 
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_66 
#define DBL_DECIMAL_DIG __DBL_DECIMAL_DIG__
#define RAND_MAX 2147483647
#define si_syscall _sifields._sigsys._syscall
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define MAX_SMALLINT_WIDTH 5
#define PCRE_MINOR 39
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_70 
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_72 
#define _SC_2_VERSION _SC_2_VERSION
#define MAX_TINYINT_WIDTH 3
#define g_slice_free_chain(type,mem_chain,next) G_STMT_START { if (1) g_slice_free_chain_with_offset (sizeof (type), (mem_chain), G_STRUCT_OFFSET (type, next)); else (void) ((type*) 0 == (mem_chain)); } G_STMT_END
#define g_scanner_foreach_symbol(scanner,func,data) G_STMT_START { g_scanner_scope_foreach_symbol ((scanner), 0, (func), (data)); } G_STMT_END GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_scanner_scope_foreach_symbol)
#define EDEADLK 35
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define CR_LOAD_DATA_LOCAL_INFILE_REJECTED 2068
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define MYSQL_PLUGIN_AUTH_COMMON_INCLUDED 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_44 
#define _POSIX_ASYNC_IO 1
#define LONG_MIN (-LONG_MAX - 1L)
#define G_MAXUSHORT USHRT_MAX
#define __FD_SETSIZE 1024
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_34_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define G_SEARCHPATH_SEPARATOR_S ":"
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_62_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define _XBS5_LP64_OFF64 1
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define __FLT64_HAS_DENORM__ 1
#define SI_USER SI_USER
#define GLIB_UNAVAILABLE_TYPE(maj,min) G_UNAVAILABLE(maj,min)
#define EBADMSG 74
#define NET_ERROR_SOCKET_RECOVERABLE 1
#define FLT_MIN_10_EXP __FLT_MIN_10_EXP__
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __LDBL_HAS_DENORM__ 1
#define HAVE_MYSQL_REAL_CONNECT 
#define G_KEY_FILE_DESKTOP_KEY_CATEGORIES "Categories"
#define __CFLOAT32 _Complex _Float32
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define GLIB_DEPRECATED_TYPE_IN_2_52_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define g_strstrip(string) g_strchomp (g_strchug (string))
#define GINT_TO_BE(val) ((gint) GINT32_TO_BE (val))
#define SIGABRT 6
#define SS_ONSTACK SS_ONSTACK
#define CLD_CONTINUED CLD_CONTINUED
#define PCRE_ERROR_UNKNOWN_NODE (-5)
#define GLIB_USING_SYSTEM_PRINTF 
#define SIGSTKSZ 16384
#define G_LN2 0.69314718055994530941723212145817656807550013436026
#define EBFONT 59
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define CR_NAMEDPIPEWAIT_ERROR 2016
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define GLIB_SYSDEF_MSG_OOB 1
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _BITS_WCHAR_H 1
#define g_clear_slist(slist_ptr,destroy) G_STMT_START { GSList *_slist; _slist = *(slist_ptr); if (_slist) { *slist_ptr = NULL; if ((destroy) != NULL) g_slist_free_full (_slist, (destroy)); else g_slist_free (_slist); } } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_64
#define ERFKILL 132
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define G_GNUC_BEGIN_IGNORE_DEPRECATIONS _Pragma ("GCC diagnostic push") _Pragma ("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _VA_LIST_ 
#define ETOOMANYREFS 109
#define _POSIX_TZNAME_MAX 6
#define __itimerspec_defined 1
#define _POSIX_SSIZE_MAX 32767
#define LOCAL_HOST "localhost"
#define G_DATE_BAD_DAY 0U
#define PCRE_MAJOR 8
#define _POSIX_RE_DUP_MAX 255
#define _POSIX_MAX_CANON 255
#define g_utf8_next_char(p) (char *)((p) + g_utf8_skip[*(const guchar *)(p)])
#define GUINT64_SWAP_LE_BE_CONSTANT(val) ((guint64) ( (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00000000000000ffU)) << 56) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x000000000000ff00U)) << 40) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x0000000000ff0000U)) << 24) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00000000ff000000U)) << 8) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x000000ff00000000U)) >> 8) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x0000ff0000000000U)) >> 24) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00ff000000000000U)) >> 40) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0xff00000000000000U)) >> 56)))
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define __USECONDS_T_TYPE __U32_TYPE
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define CR_AUTH_PLUGIN_ERR 2061
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define G_GUINT16_FORMAT "hu"
#define PCRE_ERROR_BADUTF16 (-10)
#define GLIB_SYSDEF_MSG_PEEK 2
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define EXFULL 54
#define _LINUX_STDDEF_H 
#define _STDARG_H 
#define AUTH_PLUGIN_DATA_PART_1_LENGTH 8
#define CR_MIN_ERROR 2000
#define _T_WCHAR 
#define g_atomic_rc_box_dup(block_size,mem_block) ((glib_typeof (mem_block)) (g_atomic_rc_box_dup) (block_size, mem_block))
#define G_SHELL_ERROR g_shell_error_quark ()
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define GLIB_DEPRECATED_MACRO_IN_2_70_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define _BITS_STDIO2_H 1
#define _SC_BARRIERS _SC_BARRIERS
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define __stub___compat_uselib 
#define _POSIX_CPUTIME 0
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define g_debug(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, __VA_ARGS__)
#define GINT_TO_LE(val) ((gint) GINT32_TO_LE (val))
#define __SIZEOF_WINT_T__ 4
#define INT_LEAST16_MIN (-32767-1)
#define MYSQL_CLIENT_PLUGIN_HEADER int type; unsigned int interface_version; const char *name; const char *author; const char *desc; unsigned int version[3]; const char *license; void *mysql_api; int (*init)(char *, size_t, int, va_list); int (*deinit)(void); int (*options)(const char *option, const void *); int (*get_options)(const char *option, void *);
#define g_scanner_add_symbol(scanner,symbol,value) G_STMT_START { g_scanner_scope_add_symbol ((scanner), 0, (symbol), (value)); } G_STMT_END GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_scanner_scope_add_symbol)
#define SERVER_STATUS_CLEAR_SET (SERVER_QUERY_NO_GOOD_INDEX_USED | SERVER_QUERY_NO_INDEX_USED | SERVER_MORE_RESULTS_EXISTS | SERVER_STATUS_METADATA_CHANGED | SERVER_QUERY_WAS_SLOW | SERVER_STATUS_DB_DROPPED | SERVER_STATUS_CURSOR_EXISTS | SERVER_STATUS_LAST_ROW_SENT | SERVER_SESSION_STATE_CHANGED)
#define __f32x(x) x ##f32x
#define g_atomic_pointer_xor(atomic,val) (G_GNUC_EXTENSION ({ gsize *gapx_atomic = (gsize *) (atomic); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gsize)); (void) (0 ? (gpointer) *(atomic) : NULL); (void) (0 ? (val) ^ (val) : 1); (gsize) __atomic_fetch_xor (gapx_atomic, (val), __ATOMIC_SEQ_CST); }))
#define INT32_MIN (-2147483647-1)
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define G_BOOKMARK_FILE_ERROR (g_bookmark_file_error_quark ())
#define __U16_TYPE unsigned short int
#define CLD_EXITED CLD_EXITED
#define CLIENT_PLUGIN_AUTH (1UL << 19)
#define _STDIO_H 1
#define G_KEY_FILE_ERROR g_key_file_error_quark()
#define __G_QSORT_H__ 
#define _BITS_POSIX2_LIM_H 1
#define PCRE_NOTEMPTY 0x00000400
#define UINTPTR_MAX (18446744073709551615UL)
#define NOT_SECONDARY_FLAG (1 << 29)
#define __CFLOAT64X _Complex _Float64x
#define __INT32_TYPE__ int
#define _PTRDIFF_T 
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_52 
#define GLIB_DEPRECATED_TYPE_FOR(f) G_DEPRECATED_FOR(f)
#define __ASM_GENERIC_POSIX_TYPES_H 
#define G_MINLONG LONG_MIN
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define G_E 2.7182818284590452353602874713526624977572470937000
#define __FLT_MIN_EXP__ (-125)
#define CR_FILE_NAME_TOO_LONG 2063
#define CLIENT_DEPRECATE_EOF (1UL << 24)
#define WEXITED 4
#define G_URI_RESERVED_CHARS_ALLOWED_IN_USERINFO G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS ":"
#define GLIB_DEPRECATED_IN_2_60_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define CLIENT_NET_RETRY_COUNT 1
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define G_KEY_FILE_DESKTOP_KEY_NOT_SHOW_IN "NotShowIn"
#define CR_NO_RESULT_SET 2053
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define alloca(size) __builtin_alloca (size)
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define htole16(x) __uint16_identity (x)
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define G_PI_2 1.5707963267948966192313216916397514420985846996876
#define G_PI_4 0.78539816339744830961566084581987572104929234984378
#define EKEYREJECTED 129
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define _DIRENT_HAVE_D_OFF 
#define CR_MANDATORY_TRACKER_NOT_FOUND 2071
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define net_new_transaction(net) ((net)->pkt_nr = 0)
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define FIELD_TYPE_ENUM MYSQL_TYPE_ENUM
#define _NSIG (__SIGRTMAX + 1)
#define PCRE_UCP 0x20000000
#define G_USEC_PER_SEC 1000000
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define G_QUEUE_INIT { NULL, NULL, 0 }
#define PCRE_UTF16_ERR1 1
#define _BITS_SIGNUM_ARCH_H 1
#define __INT_LEAST32_MAX__ 0x7fffffff
#define PCRE_DFA_SHORTEST 0x00010000
#define CLIENT_OPTIONAL_RESULTSET_METADATA (1UL << 25)
#define WINT_MIN (0u)
#define G_IS_DIR_SEPARATOR(c) ((c) == G_DIR_SEPARATOR)
#define G_GNUC_UNUSED __attribute__ ((__unused__))
#define __G_THREAD_H__ 
#define __key_t_defined 
#define CLIENT_NO_SCHEMA 16
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define __unix__ 1
#define _GLIB_AUTOPTR_LIST_FUNC_NAME(TypeName) glib_listautoptr_cleanup_ ##TypeName
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_46 
#define G_STR_DELIMITERS "_-|> <."
#define CR_SSL_CONNECTION_ERROR 2026
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define GUINT32_TO_BE(val) (GUINT32_SWAP_LE_BE (val))
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define _GCC_WRAP_STDINT_H 
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define G_MAXUINT16 ((guint16) 0xffff)
#define __LP64__ 1
#define FIELD_TYPE_TINY MYSQL_TYPE_TINY
#define G_OS_INFO_KEY_ID GLIB_AVAILABLE_MACRO_IN_2_64 "ID"
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define __FLT_EVAL_METHOD_C99__ 0
#define _POSIX_JOB_CONTROL 1
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define PCRE_ERROR_BADUTF8 (-10)
#define g_test_trap_assert_stderr_unmatched(serrpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 5, serrpattern)
#define CLOCK_REALTIME_ALARM 8
#define G_MAXUINT32 ((guint32) 0xffffffff)
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define __FLT64_MIN_EXP__ (-1021)
#define USERNAME_CHAR_LENGTH 32
#define G_GINT64_FORMAT "li"
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define FIELD_TYPE_TIMESTAMP MYSQL_TYPE_TIMESTAMP
#define PCRE_EXTENDED 0x00000008
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define CHAR_MAX UCHAR_MAX
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define PCRE_CONFIG_MATCH_LIMIT_RECURSION 7
#define FPE_INTDIV FPE_INTDIV
#define GLIB_DEPRECATED_MACRO_IN_2_26_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define G_THREADS_IMPL_POSIX 
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define __USE_POSIX199309 1
#define __FDS_BITS(set) ((set)->__fds_bits)
#define _mysql_com_h 
#define G_MAXUINT64 G_GUINT64_CONSTANT(0xffffffffffffffff)
#define CLIENT_NET_WRITE_TIMEOUT 365 * 24 * 3600
#define PCRE_CONFIG_LINK_SIZE 2
#define __FLT16_MIN_10_EXP__ (-4)
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define g_assert_true(expr) G_STMT_START { if G_LIKELY (expr) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should be TRUE"); } G_STMT_END
#define G_NUMBER_PARSER_ERROR (g_number_parser_error_quark ())
#define G_GNUC_EXTENSION __extension__
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define EIDRM 43
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define g_array_prepend_val(a,v) g_array_prepend_vals (a, &(v), 1)
#define _PC_NAME_MAX _PC_NAME_MAX
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define G_MAXUINT UINT_MAX
#define NET_READ_TIMEOUT 30
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define __G_UTILS_H__ 
#define _POSIX_THREADS 200809L
#define _PC_MAX_CANON _PC_MAX_CANON
#define FIELD_TYPE_BLOB MYSQL_TYPE_BLOB
#define __USE_POSIX2 1
#define PCRE_INFO_JIT 16
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define g_rc_box_dup(block_size,mem_block) ((glib_typeof (mem_block)) (g_rc_box_dup) (block_size, mem_block))
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define _POSIX_V7_ILP32_OFF32 -1
#define EMSGSIZE 90
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_60_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define G_GNUC_ALLOC_SIZE(x) __attribute__((__alloc_size__(x)))
#define PCRE_UNGREEDY 0x00000200
#define __siginfo_t_defined 1
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define SIGEV_THREAD SIGEV_THREAD
#define CHAR_MIN 0
#define G_SPAWN_EXIT_ERROR g_spawn_exit_error_quark ()
#define FIELD_FLAGS_COLUMN_FORMAT_MASK (3 << FIELD_FLAGS_COLUMN_FORMAT)
#define PCRE_INFO_RECURSIONLIMIT 24
#define __VERSION__ "11.3.0"
#define __UINT64_C(c) c ## UL
#define G_MAXSSIZE G_MAXLONG
#define CR_WRONG_LICENSE 2028
#define _SYS_CDEFS_H 1
#define ILL_ILLTRP ILL_ILLTRP
#define GLIB_DEPRECATED_TYPE_IN_2_50_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define GUINT_TO_POINTER(u) ((gpointer) (gulong) (u))
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define PCRE_UTF8_ERR10 10
#define PCRE_UTF8_ERR4 4
#define GLIB_AVAILABLE_IN_ALL _GLIB_EXTERN
#define G_OS_INFO_KEY_HOME_URL GLIB_AVAILABLE_MACRO_IN_2_64 "HOME_URL"
#define __dev_t_defined 
#define _POSIX_VERSION 200809L
#define _STDC_PREDEF_H 1
#define G_VARIANT_TYPE_BOOLEAN ((const GVariantType *) "b")
#define __INT_WCHAR_T_H 
#define REFRESH_HOSTS 8
#define g_slist_free1 g_slist_free_1
#define PCRE_UTF8_ERR16 16
#define G_VARIANT_TYPE_UINT16 ((const GVariantType *) "q")
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define __bitwise __bitwise__
#define _SC_TIMERS _SC_TIMERS
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define GLIB_DEPRECATED_MACRO_IN_2_48_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define ENOTSOCK 88
#define __ARM_FEATURE_FMA 1
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _GLIB_DEFINE_AUTOPTR_CHAINUP(ModuleObjName,ParentName) _GLIB_DEFINE_AUTOPTR_CLEANUP_FUNCS(ModuleObjName, ParentName, _GLIB_AUTOPTR_CLEAR_FUNC_NAME(ParentName))
#define __G_DEPRECATED_MAIN_H__ 
#define _T_PTRDIFF_ 
#define _mysql_h 
#define TABLESPACE_COMMENT_MAXLEN 2048
#define CLIENT_QUERY_ATTRIBUTES (1UL << 27)
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define G_VARIANT_TYPE_UINT32 ((const GVariantType *) "u")
#define __FLT128_MAX_EXP__ 16384
#define MYSQL_VIO struct Vio *
#define REFRESH_THREADS 32
#define GLIB_AVAILABLE_MACRO_IN_2_26 
#define GLIB_AVAILABLE_MACRO_IN_2_28 
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define UNIQUE_FLAG 65536
#define GLIB_AVAILABLE_MACRO_IN_2_30 
#define GLIB_AVAILABLE_MACRO_IN_2_32 
#define GLIB_AVAILABLE_MACRO_IN_2_34 
#define g_htonl(val) (GUINT32_TO_BE (val))
#define GLIB_AVAILABLE_MACRO_IN_2_36 
#define GLIB_AVAILABLE_MACRO_IN_2_38 
#define _POSIX_STREAM_MAX 8
#define G_ALLOCATOR_NODE 3
#define CR_SHARED_MEMORY_CONNECT_SET_ERROR 2046
#define __FLT32_MANT_DIG__ 24
#define SVE_VQ_MAX __SVE_VQ_MAX
#define GLIB_AVAILABLE_MACRO_IN_2_44 
#define GLIB_AVAILABLE_MACRO_IN_2_46 
#define G_VARIANT_TYPE_UINT64 ((const GVariantType *) "t")
#define G_GINT64_CONSTANT(val) (val ##L)
#define __STDC_IEC_60559_BFP__ 201404L
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define GLIB_AVAILABLE_MACRO_IN_2_50 
#define GLIB_AVAILABLE_MACRO_IN_2_52 
#define GLIB_AVAILABLE_MACRO_IN_2_54 
#define GLIB_AVAILABLE_MACRO_IN_2_56 
#define GLIB_AVAILABLE_MACRO_IN_2_58 
#define __SIZE_T__ 
#define __stub_gtty 
#define GUINT64_TO_LE(val) ((guint64) (val))
#define si_value _sifields._rt.si_sigval
#define PCRE_STUDY_JIT_COMPILE 0x0001
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define GLIB_AVAILABLE_MACRO_IN_2_60 
#define GLIB_AVAILABLE_MACRO_IN_2_62 
#define GLIB_AVAILABLE_MACRO_IN_2_64 
#define G_GNUC_CONST __attribute__ ((__const__))
#define G_KEY_FILE_DESKTOP_KEY_VERSION "Version"
#define CR_COMPRESSION_WRONGLY_CONFIGURED 2066
#define si_utime _sifields._sigchld.si_utime
#define GLIB_AVAILABLE_MACRO_IN_2_72 
#define GINT_FROM_BE(val) (GINT_TO_BE (val))
#define GLIB_DEPRECATED_IN_2_38_FOR(f) GLIB_DEPRECATED_FOR(f)
#define MAX_CHAR_WIDTH 255
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define __wur __attribute_warn_unused_result__
#define IS_LONGDATA(t) ((t) >= MYSQL_TYPE_TINY_BLOB && (t) <= MYSQL_TYPE_STRING)
#define __FLT16_DIG__ 3
#define __G_MEM_H__ 
#define CR_COMMANDS_OUT_OF_SYNC 2014
#define TIMER_ABSTIME 1
#define g_assert_no_error(err) G_STMT_START { if (err) g_assertion_message_error (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #err, err, 0, 0); } G_STMT_END
#define __FLT128_HAS_DENORM__ 1
#define G_LOCK(name) g_mutex_lock (&G_LOCK_NAME (name))
#define FLT_DIG __FLT_DIG__
#define _POSIX_RTSIG_MAX 8
#define CR_OK_AUTH_IN_SANDBOX_MODE -3
#define G_NODE_IS_ROOT(node) (((GNode*) (node))->parent == NULL && ((GNode*) (node))->prev == NULL && ((GNode*) (node))->next == NULL)
#define SIGTSTP 20
#define g_once_init_enter(location) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(location) == sizeof (gpointer)); (void) (0 ? (gpointer) *(location) : NULL); (!g_atomic_pointer_get (location) && g_once_init_enter (location)); }))
#define PCRE_ERROR_BADMAGIC (-4)
#define __ORDER_PDP_ENDIAN__ 3412
#define GLIB_AVAILABLE_ENUMERATOR_IN_2_72 
#define G_HOOK_FLAG_USER_SHIFT (4)
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define CLIENT_SSL 2048
#define EL2HLT 51
#define __ARM_64BIT_STATE 1
#define SVE_VQ_MIN __SVE_VQ_MIN
#define LDBL_MIN_10_EXP __LDBL_MIN_10_EXP__
#define G_GNUC_FUNCTION "" GLIB_DEPRECATED_MACRO_IN_2_26_FOR(G_STRFUNC)
#define BYTE_ORDER __BYTE_ORDER
#define FIELD_TYPE_NEWDATE MYSQL_TYPE_NEWDATE
#define CLOCK_MONOTONIC_COARSE 6
#define g_datalist_id_remove_data(dl,q) g_datalist_id_set_data ((dl), (q), NULL)
#define __have_pthread_attr_t 1
#define G_VARIANT_TYPE_HANDLE ((const GVariantType *) "h")
#define FIELD_IS_DROPPED (1 << 26)
#define FLT_MAX_10_EXP __FLT_MAX_10_EXP__
#define ILL_COPROC ILL_COPROC
#define __G_QUARK_H__ 
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define GLIB_SYSDEF_POLLERR =8
#define __G_MACROS_H__ 
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_34 GLIB_DEPRECATED_ENUMERATOR
#define _STRUCT_TIMESPEC 1
#define __G_TYPES_H__ 
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define MYSQL_UNIX_ADDR "/var/run/mysqld/mysqld.sock"
#define ECANCELED 125
#define _SC_PIPE _SC_PIPE
#define _mysql_time_h_ 
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define __INT16_MAX__ 0x7fff
#define __THROWNL __attribute__ ((__nothrow__))
#define _BSD_SIZE_T_ 
#define NET_ERROR_SOCKET_UNUSABLE 2
#define __INT8_TYPE__ signed char
#define PCRE_ERROR_RECURSELOOP (-26)
#define __SIZE_TYPE__ long unsigned int
#define CLIENT_TRANSACTIONS 8192
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define __FLT_IS_IEC_60559__ 2
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_70_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define g_static_mutex_lock(mutex) g_mutex_lock (g_static_mutex_get_mutex (mutex)) GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_mutex_lock)
#define FPE_CONDTRAP FPE_CONDTRAP
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __FLT32_MIN_EXP__ (-125)
#define packet_error (~(unsigned long)0)
#define GINT_FROM_LE(val) (GINT_TO_LE (val))
#define G_VARIANT_TYPE_OBJECT_PATH_ARRAY ((const GVariantType *) "ao")
#define CR_DEPRECATED_COMPRESSION_NOT_SUPPORTED 2065
#define G_STRUCT_MEMBER_P(struct_p,struct_offset) ((gpointer) ((guint8*) (struct_p) + (glong) (struct_offset)))
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define G_KEY_FILE_DESKTOP_TYPE_APPLICATION "Application"
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define MYSQL_SERVER_VERSION "8.0.31"
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define G_KEY_FILE_DESKTOP_KEY_STARTUP_NOTIFY "StartupNotify"
#define CLOCK_THREAD_CPUTIME_ID 3
#define PCRE_INFO_FIRSTCHAR 4
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define GUINT32_SWAP_LE_BE(val) ((guint32) __builtin_bswap32 ((guint32) (val)))
#define _BITS_STRING_FORTIFIED_H 1
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define G_VA_COPY va_copy
#define G_KEY_FILE_DESKTOP_KEY_TERMINAL "Terminal"
#define __ARM_ARCH_PROFILE 65
#define GLIB_SYSDEF_AF_UNIX 1
#define MYSQL_LONG_DATA_HEADER 6
#define G_WIN32_DLLMAIN_FOR_DLL_NAME(static,dll_name) GLIB_DEPRECATED_MACRO_IN_2_26
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define G_OS_INFO_KEY_SUPPORT_URL GLIB_AVAILABLE_MACRO_IN_2_64 "SUPPORT_URL"
#define G_GUINT32_FORMAT "u"
#define _POSIX_C_SOURCE 200809L
#define CR_CANT_GET_SESSION_DATA 2073
#define g_autofree _GLIB_CLEANUP(g_autoptr_cleanup_generic_gfree)
#define MYSQL_PORT 3306
#define PTHREAD_STACK_MIN 131072
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define __G_TIMER_H__ 
#define GLIB_HAVE_ALLOCA_H 
#define PCRE_ERROR_JIT_BADOPTION (-31)
#define G_STRINGIFY_ARG(contents) #contents
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define __LDBL_REDIR(name,proto) name proto
#define _ASM_GENERIC_ERRNO_BASE_H 
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_38_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define ECONNRESET 104
#define SIGCONT 18
#define G_ALLOC_ONLY 1
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define MYSQL_SHUTDOWN_KILLABLE_LOCK_TABLE (unsigned char)(1 << 2)
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define CR_SHARED_MEMORY_EVENT_ERROR 2044
#define G_MININT INT_MIN
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define _SC_SELECT _SC_SELECT
#define G_KEY_FILE_DESKTOP_KEY_NAME "Name"
#define g_macro__has_builtin __has_builtin
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define _LFS64_LARGEFILE 1
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __GLIBC_USE_ISOC2X 0
#define G_OPTION_ERROR (g_option_error_quark ())
#define g_info(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_INFO, __VA_ARGS__)
#define _LFS64_ASYNCHRONOUS_IO 1
#define GLIB_AVAILABLE_MACRO_IN_2_42 
#define _ANSI_STDDEF_H 
#define GLIB_DEPRECATED_TYPE_IN_2_28_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define CR_SERVER_LOST 2013
#define __G_TREE_H__ 
#define __va_arg_pack() __builtin_va_arg_pack ()
#define _LFS64_STDIO 1
#define G_LOCK_EXTERN(name) extern GMutex G_LOCK_NAME (name)
#define G_STRFUNC ((const char*) (__func__))
#define g_abort() abort ()
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define G_MODULE_SUFFIX "so"
#define __HAVE_DISTINCT_FLOAT128 0
#define GSIZE_TO_POINTER(s) ((gpointer) (gsize) (s))
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define ESR_MAGIC 0x45535201
#define INTPTR_MIN (-9223372036854775807L-1)
#define G_KEY_FILE_DESKTOP_KEY_DBUS_ACTIVATABLE "DBusActivatable"
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __INT_FAST8_WIDTH__ 8
#define EBUSY 16
#define __UWORD_TYPE unsigned long int
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_26 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_28 GLIB_DEPRECATED_ENUMERATOR
#define DBL_MIN_10_EXP __DBL_MIN_10_EXP__
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define G_GNUC_INTERNAL __attribute__((visibility("hidden")))
#define __FLT64_IS_IEC_60559__ 2
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __AARCH64EL__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_32 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_38 GLIB_DEPRECATED_ENUMERATOR
#define __G_BITLOCK_H__ 
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_40 GLIB_DEPRECATED_ENUMERATOR
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_44 GLIB_DEPRECATED_ENUMERATOR
#define __timer_t_defined 1
#define __WCLONE 0x80000000
#define CONFIG_H 
#define CLIENT_CONNECT_WITH_DB 8
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define SHRT_MAX __SHRT_MAX__
#define G_UNICODE_COMBINING_MARK G_UNICODE_SPACING_MARK GLIB_DEPRECATED_MACRO_IN_2_30_FOR(G_UNICODE_SPACING_MARK)
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define PCRE_INFO_REQUIREDCHAR 21
#define INT_LEAST16_MAX (32767)
#define g_bit_nth_lsf(mask,nth_bit) g_bit_nth_lsf_impl(mask, nth_bit)
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define G_MAXSIZE G_MAXULONG
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_54 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_56 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_58 GLIB_DEPRECATED_ENUMERATOR
#define si_int _sifields._rt.si_sigval.sival_int
#define g_test_perf() (g_test_config_vars->test_perf)
#define GLIB_MICRO_VERSION 4
#define __FLT64_DIG__ 15
#define EROFS 30
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_60 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_62 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_64 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_66 GLIB_DEPRECATED_ENUMERATOR
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_68 GLIB_DEPRECATED_ENUMERATOR
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define G_TIME_SPAN_DAY (G_GINT64_CONSTANT (86400000000))
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define PCRE_JAVASCRIPT_COMPAT 0x02000000
#define GLIB_DEPRECATED_MACRO_IN_2_46_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define INT32_C(c) c
#define _____fpos64_t_defined 1
#define MYSQL_SHUTDOWN_KILLABLE_UPDATE (unsigned char)(1 << 3)
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define ELIBACC 79
#define __glibc_objsize0(__o) __bos0 (__o)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define G_KEY_FILE_DESKTOP_KEY_ONLY_SHOW_IN "OnlyShowIn"
#define _POSIX_TIMERS 200809L
#define G_DATALIST_FLAGS_MASK 0x3
#define L_INCR SEEK_CUR
#define __unix 1
#define g_assert_nonnull(expr) G_STMT_START { if G_LIKELY ((expr) != NULL) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should not be NULL"); } G_STMT_END
#define _BITS_PTHREADTYPES_COMMON_H 1
#define __UINT_FAST16_TYPE__ long unsigned int
#define SCRAMBLE_LENGTH 20
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define _POSIX_RAW_SOCKETS 200809L
#define G_SOURCE_CONTINUE TRUE
#define __PRAGMA_REDEFINE_EXTNAME 1
#define SIGEV_NONE SIGEV_NONE
#define G_MINOFFSET G_MININT64
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define __FLT16_DECIMAL_DIG__ 5
#define _STRINGS_H 1
#define SI_MESGQ SI_MESGQ
#define _VA_LIST_DEFINED 
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define g_uint_checked_add(dest,a,b) (!__builtin_add_overflow(a, b, dest))
#define __BLKSIZE_T_TYPE __S32_TYPE
#define G_MINDOUBLE DBL_MIN
#define G_KEY_FILE_DESKTOP_KEY_NO_DISPLAY "NoDisplay"
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define GLIB_DEPRECATED_TYPE_IN_2_26 GLIB_DEPRECATED_TYPE
#define __SIG_ATOMIC_WIDTH__ 32
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define SIGCHLD 17
#define G_VARIANT_TYPE_ANY ((const GVariantType *) "*")
#define G_VARIANT_TYPE_STRING_ARRAY ((const GVariantType *) "as")
#define MAXNAMLEN NAME_MAX
#define g_main_is_running(loop) g_main_loop_is_running(loop) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_is_running)
#define GLIB_DEPRECATED_IN_2_36_FOR(f) GLIB_DEPRECATED_FOR(f)
#define GUINT16_SWAP_LE_PDP(val) ((guint16) (val))
#define DBL_EPSILON __DBL_EPSILON__
#define PCRE_CONFIG_STACKRECURSE 5
#define GLIB_DEPRECATED_TYPE_IN_2_70_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define G_UNAVAILABLE(maj,min) __attribute__((deprecated("Not available before " #maj "." #min)))
#define DT_UNKNOWN DT_UNKNOWN
#define g_node_first_child(node) ((node) ? ((GNode*) (node))->children : NULL)
#define __G_UUID_H__ 
#define htole32(x) __uint32_identity (x)
#define _POSIX_FSYNC 200809L
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define CR_INSECURE_API_ERR 2062
#define PCRE_INFO_HASCRORLF 14
#define __G_DATASET_H__ 
#define SIGSYS 31
#define linux 1
#define G_VARIANT_TYPE_BASIC ((const GVariantType *) "?")
#define PCRE_ERROR_BADUTF8_OFFSET (-11)
#define FLT_EPSILON __FLT_EPSILON__
#define SA_NOCLDSTOP 1
#define __WCHAR_MIN __WCHAR_MIN__
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define GLIB_DEPRECATED_MACRO_IN_2_68_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define ____FILE_defined 1
#define PDP_ENDIAN __PDP_ENDIAN
#define G_STMT_END while (0)
#define htole64(x) __uint64_identity (x)
#define G_KEY_FILE_DESKTOP_KEY_URL "URL"
#define FPE_FLTINV FPE_FLTINV
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define SA_INTERRUPT 0x20000000
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define EREMOTE 66
#define g_new0(struct_type,n_structs) _G_NEW (struct_type, n_structs, malloc0)
#define __FLT32_MIN_10_EXP__ (-37)
#define g_dataset_id_set_data(l,k,d) g_dataset_id_set_data_full ((l), (k), (d), NULL)
#define __GNUC_MINOR__ 3
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define _LP64 1
#define __FLT32X_DIG__ 15
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define G_DEPRECATED_FOR(f) __attribute__((__deprecated__("Use '" #f "' instead")))
#define PCRE_CONFIG_MATCH_LIMIT 4
#define __PTRDIFF_WIDTH__ 64
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define _SC_PII_XTI _SC_PII_XTI
#define MAX_MEDIUMINT_WIDTH 8
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define GLIB_SIZEOF_SIZE_T 8
#define ENAMETOOLONG 36
#define GUINT64_TO_BE(val) (GUINT64_SWAP_LE_BE (val))
#define _BITS_STDINT_INTN_H 1
#define CLD_STOPPED CLD_STOPPED
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DBL_HAS_QUIET_NAN__ 1
#define G_OS_INFO_KEY_NAME GLIB_AVAILABLE_MACRO_IN_2_64 "NAME"
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define PCRE_INFO_JCHANGED 13
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define G_REGEX_ERROR g_regex_error_quark ()
#define g_hash_table_freeze(hash_table) ((void)0) GLIB_DEPRECATED_MACRO_IN_2_26
#define G_OS_INFO_KEY_PRIVACY_POLICY_URL GLIB_AVAILABLE_MACRO_IN_2_64 "PRIVACY_POLICY_URL"
#define BUS_ADRERR BUS_ADRERR
#define G_STRLOC __FILE__ ":" G_STRINGIFY (__LINE__)
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define FRM_GCOL_HEADER_SIZE 4
#define GLIB_VERSION_2_26 (G_ENCODE_VERSION (2, 26))
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define G_TIME_SPAN_MILLISECOND (G_GINT64_CONSTANT (1000))
#define le64toh(x) __uint64_identity (x)
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define PCRE_ERROR_INTERNAL (-14)
#define __FLT16_MANT_DIG__ 11
#define __cleanup_fct_attribute 
#define GLIB_DEPRECATED_IN_2_58_FOR(f) GLIB_DEPRECATED_FOR(f)
#define ESOCKTNOSUPPORT 94
#define __INTPTR_TYPE__ long int
#define __G_THREADPOOL_H__ 
#define __WCHAR_TYPE__ unsigned int
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define __SIZEOF_FLOAT__ 4
#define __SLONGWORD_TYPE long int
#define PCRE_FIRSTLINE 0x00040000
#define MYSQL_BASE_VERSION "mysqld-8.0"
#define ATEXIT(proc) g_ATEXIT(proc) GLIB_DEPRECATED_MACRO_IN_2_32
#define __pic__ 2
#define __ARM_ARCH_8A 1
#define __stub_chflags 
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define EDOTDOT 73
#define __FLT32_DECIMAL_DIG__ 9
#define __USE_POSIX 1
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define g_once(once,func,arg) ((__atomic_load_n (&(once)->status, __ATOMIC_ACQUIRE) == G_ONCE_STATUS_READY) ? (once)->retval : g_once_impl ((once), (func), (arg)))
#define BUFSIZ 8192
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define GLIB_DEPRECATED_TYPE_IN_2_34 GLIB_DEPRECATED_TYPE
#define __LDBL_REDIR2_DECL(name) 
#define __FLT_MAX_10_EXP__ 38
#define _WCHAR_T_DECLARED 
#define PCRE_CONFIG_BSR 8
#define FIELD_TYPE_NULL MYSQL_TYPE_NULL
#define GLIB_MAJOR_VERSION 2
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_36_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define WNOWAIT 0x01000000
#define g_test_verbose() (g_test_config_vars->test_verbose)
#define GLIB_DEPRECATED_TYPE_IN_2_38 GLIB_DEPRECATED_TYPE
#define _SC_2_PBS _SC_2_PBS
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define GUINT16_TO_BE(val) (GUINT16_SWAP_LE_BE (val))
#define EPROTONOSUPPORT 93
#define g_test_trap_assert_stderr(serrpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 4, serrpattern)
#define UINT_MAX (INT_MAX * 2U + 1U)
#define __TIMESIZE 64
#define g_node_next_sibling(node) ((node) ? ((GNode*) (node))->next : NULL)
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define __SIGRTMAX 64
#define _IOLBF 1
#define SIGCLD SIGCHLD
#define __FLT16_HAS_QUIET_NAN__ 1
#define __FLT_MAX_EXP__ 128
#define G_PI 3.1415926535897932384626433832795028841971693993751
#define LDBL_MAX_10_EXP __LDBL_MAX_10_EXP__
#define __gid_t_defined 
#define GUINT32_TO_LE(val) ((guint32) (val))
#define g_macro__has_feature(x) 0
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define LDBL_MAX_EXP __LDBL_MAX_EXP__
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define __ptr_t void *
#define ___int_size_t_h 
#define G_PDP_ENDIAN 3412
#define _POSIX_TRACE_INHERIT -1
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define _POSIX2_EXPR_NEST_MAX 32
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __SVE_VQ_BYTES 16
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define _POSIX_SEM_VALUE_MAX 32767
#define G_DATE_BAD_YEAR 0U
#define PCRE_INFO_NAMEENTRYSIZE 7
#define __GLIBC_MINOR__ 35
#define CR_OK_HANDSHAKE_COMPLETE -2
#define REFRESH_STATUS 16
#define __UINT_LEAST32_TYPE__ unsigned int
#define g_test_queue_unref(gobject) g_test_queue_destroy (g_object_unref, gobject)
#define SIGRTMIN (__libc_current_sigrtmin ())
#define G_PASTE_ARGS(identifier1,identifier2) identifier1 ## identifier2
#define _XBS5_ILP32_OFFBIG -1
#define CLOCK_BOOTTIME 7
#define __LDBL_MIN_EXP__ (-16381)
#define GLIB_AVAILABLE_TYPE_IN_2_34 
#define g_main_pending() g_main_context_pending (NULL) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_context_pending)
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define GLIB_AVAILABLE_TYPE_IN_2_36 
#define __BIT_TYPES_DEFINED__ 1
#define G_HAVE_GNUC_VARARGS 1
#define GLIB_AVAILABLE_TYPE_IN_2_38 
#define FD_SETSIZE __FD_SETSIZE
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define stdout stdout
#define __WINT_WIDTH__ 32
#define __struct_FILE_defined 1
#define g_autoslist(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_SLIST_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_SLIST_TYPENAME(TypeName)
#define g_date_monday_weeks_in_year g_date_get_monday_weeks_in_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_monday_weeks_in_year)
#define __INT_LEAST8_MAX__ 0x7f
#define CR_CANT_READ_CHARSET 2019
#define MYSQL_RPL_SKIP_HEARTBEAT (1 << 17)
#define __FLT32X_MAX_10_EXP__ 308
#define ____mbstate_t_defined 1
#define GLIB_DEPRECATED_MACRO_IN_2_44_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __SIGRTMIN 32
#define REFRESH_USER_RESOURCES 0x80000L
#define FIELD_TYPE_LONG_BLOB MYSQL_TYPE_LONG_BLOB
#define g_ascii_isspace(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_SPACE) != 0)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_58_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define REFRESH_FOR_EXPORT 0x100000L
#define PCRE_INFO_REQUIREDCHARFLAGS 22
#define G_VARIANT_TYPE_SIGNATURE ((const GVariantType *) "g")
#define PCRE_NEWLINE_ANY 0x00400000
#define NAME_CHAR_LEN 64
#define ECONNREFUSED 111
#define _BITS_SIGNUM_GENERIC_H 1
#define GUINT16_TO_LE(val) ((guint16) (val))
#define GLIB_AVAILABLE_IN_2_62 _GLIB_EXTERN
#define __ASM_POSIX_TYPES_H 
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define g_atomic_int_dec_and_test(atomic) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ *(atomic) : 1); __atomic_fetch_sub ((atomic), 1, __ATOMIC_SEQ_CST) == 1; }))
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define G_ALLOCATOR_SLIST 2
#define __UINT8_C(c) c
#define TABLE_COMMENT_INLINE_MAXLEN 180
#define GLIB_DEPRECATED_TYPE_IN_2_48_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define G_PID_FORMAT "i"
#define __stub_stty 
#define G_POLLFD_FORMAT "%d"
#define GLIB_UNAVAILABLE(maj,min) G_UNAVAILABLE(maj,min) _GLIB_EXTERN
#define NUM_FLAG 32768
#define __USE_POSIX_IMPLICITLY 1
#define __UINT64_TYPE__ long unsigned int
#define GLIB_DEPRECATED_IN_2_44_FOR(f) GLIB_DEPRECATED_FOR(f)
#define PCRE_CONFIG_JITTARGET 11
#define _PTHREAD_H 1
#define G_GINT16_FORMAT "hi"
#define MYSQL_AUTODETECT_CHARSET_NAME "auto"
#define __ARM_NEON 1
#define __G_TRASH_STACK_H__ 
#define G_KEY_FILE_DESKTOP_KEY_GENERIC_NAME "GenericName"
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define PCRE_EXTRA_TABLES 0x0008
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define _SC_IOV_MAX _SC_IOV_MAX
#define G_KEY_FILE_DESKTOP_TYPE_DIRECTORY "Directory"
#define _SC_PASS_MAX _SC_PASS_MAX
#define GUINT16_FROM_BE(val) (GUINT16_TO_BE (val))
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define _SC_LONG_BIT _SC_LONG_BIT
#define __stack_t_defined 1
#define _POSIX_MAPPED_FILES 200809L
#define CR_SHARED_MEMORY_CONNECT_MAP_ERROR 2041
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define SIGXCPU 24
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define GLIB_DEPRECATED_IN_2_34_FOR(f) GLIB_DEPRECATED_FOR(f)
#define PCRE_ERROR_CALLOUT (-9)
#define g_static_mutex_unlock(mutex) g_mutex_unlock (g_static_mutex_get_mutex (mutex)) GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_mutex_unlock)
#define GLIB_SYSDEF_POLLIN =1
#define PCRE_ERROR_UNKNOWN_OPCODE (-5)
#define ENUM_FLAG 256
#define GLIB_AVAILABLE_IN_2_38 _GLIB_EXTERN
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define IS_NOT_NULL(n) ((n)&NOT_NULL_FLAG)
#define SEGV_ADIPERR SEGV_ADIPERR
#define __PID_T_TYPE __S32_TYPE
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX _SC_AIO_MAX
#define SCRAMBLED_PASSWORD_CHAR_LENGTH (SCRAMBLE_LENGTH * 2 + 1)
#define G_TIME_SPAN_SECOND (G_GINT64_CONSTANT (1000000))
#define CLIENT_PS_MULTI_RESULTS (1UL << 18)
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define G_HOOK_IS_UNLINKED(hook) (G_HOOK (hook)->next == NULL && G_HOOK (hook)->prev == NULL && G_HOOK (hook)->hook_id == 0 && G_HOOK (hook)->ref_count == 0)
#define __GNUC_STDC_INLINE__ 1
#define GLIB_CHECK_VERSION(major,minor,micro) (GLIB_MAJOR_VERSION > (major) || (GLIB_MAJOR_VERSION == (major) && GLIB_MINOR_VERSION > (minor)) || (GLIB_MAJOR_VERSION == (major) && GLIB_MINOR_VERSION == (minor) && GLIB_MICRO_VERSION >= (micro)))
#define P_tmpdir "/tmp"
#define CLAMP(x,low,high) (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _POSIX_MESSAGE_PASSING 200809L
#define SEGV_ADIDERR SEGV_ADIDERR
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define __WORDSIZE_TIME64_COMPAT32 0
#define EPFNOSUPPORT 96
#define GLIB_DEPRECATED_MACRO_IN_2_66_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define ESRMNT 69
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define EHOSTDOWN 112
#define FIELD_TYPE_VAR_STRING MYSQL_TYPE_VAR_STRING
#define _POSIX2_BC_BASE_MAX 99
#define PTHREAD_ONCE_INIT 0
#define __DBL_DECIMAL_DIG__ 17
#define GENERATED_COLUMN_EXPRESSION_MAXLEN 65535 - FRM_GCOL_HEADER_SIZE
#define DBL_MAX_10_EXP __DBL_MAX_10_EXP__
#define _POSIX_MQ_PRIO_MAX 32
#define FIELD_FLAGS_COLUMN_FORMAT 24
#define __G_VERSION_H__ 
#define g_error(...) G_STMT_START { g_log (G_LOG_DOMAIN, G_LOG_LEVEL_ERROR, __VA_ARGS__); for (;;) ; } G_STMT_END
#define G_MAXINT INT_MAX
#define __DEC_EVAL_METHOD__ 2
#define _SIZE_T 
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define FLT_DECIMAL_DIG __FLT_DECIMAL_DIG__
#define __gnu_linux__ 1
#define g_atomic_int_compare_and_exchange(atomic,oldval,newval) (G_GNUC_EXTENSION ({ gint gaicae_oldval = (oldval); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (newval) ^ (oldval) : 1); __atomic_compare_exchange_n ((atomic), (void *) (&(gaicae_oldval)), (newval), FALSE, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST) ? TRUE : FALSE; }))
#define G_CSET_LATINC "\300\301\302\303\304\305\306" "\307\310\311\312\313\314\315\316\317\320" "\321\322\323\324\325\326" "\330\331\332\333\334\335\336"
#define SA_NOMASK SA_NODEFER
#define G_CSET_LATINS "\337\340\341\342\343\344\345\346" "\347\350\351\352\353\354\355\356\357\360" "\361\362\363\364\365\366" "\370\371\372\373\374\375\376\377"
#define __BIG_ENDIAN 4321
#define __G_ARRAY_H__ 
#define G_ANALYZER_ANALYZING 0
#define g_newa0(struct_type,n_structs) ((struct_type*) g_alloca0 (sizeof (struct_type) * (gsize) (n_structs)))
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define G_PRIORITY_HIGH -100
#define ENOTBLK 15
#define PCRE_ERROR_RECURSIONLIMIT (-21)
#define MYSQL_COUNT_ERROR (~(uint64_t)0)
#define FIELD_TYPE_LONG MYSQL_TYPE_LONG
#define SI_KERNEL SI_KERNEL
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define g_message(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_MESSAGE, __VA_ARGS__)
#define __SIZEOF_WCHAR_T__ 4
#define __INTMAX_WIDTH__ 64
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define GUINT16_FROM_LE(val) (GUINT16_TO_LE (val))
#define _POSIX_REENTRANT_FUNCTIONS 1
#define PCRE_EXP_DECL extern
#define G_GNUC_ALLOC_SIZE2(x,y) __attribute__((__alloc_size__(x,y)))
#define __mode_t_defined 
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define __ORDER_BIG_ENDIAN__ 4321
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define G_BREAKPOINT() G_STMT_START{ raise (SIGTRAP); }G_STMT_END
#define G_GNUC_STRFTIME(format_idx) __attribute__((__format__ (gnu_strftime, format_idx, 0))) GLIB_AVAILABLE_MACRO_IN_2_60
#define GUINT16_SWAP_LE_BE(val) (GUINT16_SWAP_LE_BE_CONSTANT (val))
#define MYSQL_STMT_HEADER 4
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define MAX_INPUT 255
#define EISCONN 106
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define CR_DATA_TRUNCATED 2032
#define GPOINTER_TO_SIZE(p) ((gsize) (p))
#define GLIB_DEPRECATED_IN_2_56_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __ATOMIC_RELEASE 3
#define _LFS_ASYNCHRONOUS_IO 1
#define G_CSET_DIGITS "0123456789"
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define g_size_checked_mul(dest,a,b) (!__builtin_mul_overflow(a, b, dest))
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define FLT_MANT_DIG __FLT_MANT_DIG__
#define EUSERS 87
#define _VA_LIST_T_H 
#define PCRE_INFO_NAMETABLE 9
#define INT_FAST16_MAX (9223372036854775807L)
#define __PIC__ 2
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define ENETDOWN 100
#define __UINT_FAST32_TYPE__ long unsigned int
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define REFRESH_SLAVE REFRESH_REPLICA
#define POLL_ERR POLL_ERR
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define G_MAXFLOAT FLT_MAX
#define SVE_VL_MAX __SVE_VL_MAX
#define PCRE_ERROR_PARTIAL (-12)
#define ESTALE 116
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __stub___compat_query_module 
#define __fsfilcnt_t_defined 
#define __FP_FAST_FMA 1
#define GLIB_DEPRECATED_TYPE G_DEPRECATED
#define GLIB_UNAVAILABLE_STATIC_INLINE(maj,min) G_UNAVAILABLE(maj,min)
#define SA_NOCLDWAIT 2
#define __va_list__ 
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define UINTMAX_C(c) c ## UL
#define _POSIX2_CHAR_TERM 200809L
#define G_GNUC_PURE __attribute__((__pure__))
#define G_MAXLONG LONG_MAX
#define GLIB_DEPRECATED_TYPE_IN_2_58 GLIB_DEPRECATED_TYPE
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define g_pointer_bit_unlock(address,lock_bit) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(address) == sizeof (gpointer)); g_pointer_bit_unlock ((address), (lock_bit)); }))
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define CLIENT_BASIC_FLAGS (CLIENT_ALL_FLAGS & ~(CLIENT_SSL | CLIENT_COMPRESS | CLIENT_SSL_VERIFY_SERVER_CERT | CLIENT_ZSTD_COMPRESSION_ALGORITHM))
#define GSSIZE_TO_BE(val) ((gssize) GINT64_TO_BE (val))
#define CR_DNS_SRV_LOOKUP_FAILED 2070
#define PCRE_CONFIG_JIT 9
#define __SIZEOF_DOUBLE__ 8
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define __INT_LEAST32_WIDTH__ 32
#define va_start(v,l) __builtin_va_start(v,l)
#define G_SOURCE_REMOVE FALSE
#define EPROTOTYPE 91
#define G_HOOK_IS_VALID(hook) (G_HOOK (hook)->hook_id != 0 && (G_HOOK_FLAGS (hook) & G_HOOK_FLAG_ACTIVE))
#define __SWORD_TYPE long int
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define be16toh(x) __bswap_16 (x)
#define G_IO_CHANNEL_ERROR g_io_channel_error_quark()
#define EL3HLT 46
#define _BITS_POSIX1_LIM_H 1
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define ERESTART 85
#define GLIB_AVAILABLE_MACRO_IN_2_66 
#define _DIRENT_MATCHES_DIRENT64 1
#define CR_SHARED_MEMORY_FILE_MAP_ERROR 2042
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define g_mem_chunk_create(type,x,y) (g_mem_chunk_new (NULL, sizeof (type), 0, 0))
#define _T_SIZE 
#define UINT8_C(c) c
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define g_rc_box_new(type) ((type *) g_rc_box_alloc (sizeof (type)))
#define PCRE_DATE 2016-06-14
#define g_main_iteration(may_block) g_main_context_iteration (NULL, may_block) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_context_iteration)
#define DTTOIF(dirtype) ((dirtype) << 12)
#define g_bit_nth_msf(mask,nth_bit) g_bit_nth_msf_impl(mask, nth_bit)
#define CLIENT_MULTI_QUERIES CLIENT_MULTI_STATEMENTS
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define va_end(v) __builtin_va_end(v)
#define POLL_IN POLL_IN
#define SVE_VL_MIN __SVE_VL_MIN
#define __INT_FAST16_WIDTH__ 64
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define _POSIX_V7_ILP32_OFFBIG -1
#define FIELD_IN_ADD_INDEX (1 << 20)
#define ILL_PRVREG ILL_PRVREG
#define ELIBBAD 80
#define G_LOCK_DEFINE_STATIC(name) static G_LOCK_DEFINE (name)
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define G_KEY_FILE_DESKTOP_GROUP "Desktop Entry"
#define _CS_V7_ENV _CS_V7_ENV
#define ESTRPIPE 86
#define __glibc_clang_prereq(maj,min) 0
#define GLIB_DEPRECATED G_DEPRECATED _GLIB_EXTERN
#define _SC_SIGNALS _SC_SIGNALS
#define si_call_addr _sifields._sigsys._call_addr
#define G_HOOK_ACTIVE(hook) ((G_HOOK_FLAGS (hook) & G_HOOK_FLAG_ACTIVE) != 0)
#define __G_VARIANT_TYPE_H__ 
#define UINT64_C(c) c ## UL
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define __G_RAND_H__ 
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define _RWLOCK_INTERNAL_H 
#define __DBL_MAX_10_EXP__ 308
#define g_atomic_int_get(atomic) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); gint gaig_temp; (void) (0 ? *(atomic) ^ *(atomic) : 1); __atomic_load ((gint *)(atomic), &gaig_temp, __ATOMIC_SEQ_CST); (gint) gaig_temp; }))
#define ENOLCK 37
#define UINT16_MAX (65535)
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define G_TIME_SPAN_MINUTE (G_GINT64_CONSTANT (60000000))
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define GLIB_DEPRECATED_MACRO_IN_2_26 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_28 GLIB_DEPRECATED_MACRO
#define __ASM_BITSPERLONG_H 
#define _POSIX_TRACE_LOG -1
#define __INT16_C(c) c
#define G_KEY_FILE_DESKTOP_KEY_STARTUP_WM_CLASS "StartupWMClass"
#define CR_PROBE_SLAVE_STATUS 2022
#define __ARM_ARCH_ISA_A64 1
#define G_DATE_BAD_JULIAN 0U
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define GLIB_DEPRECATED_MACRO_IN_2_30 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_32 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_34 GLIB_DEPRECATED_MACRO
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SIG_IGN ((__sighandler_t) 1)
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define GLIB_DEPRECATED_MACRO_IN_2_40 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_42 GLIB_DEPRECATED_MACRO
#define EEXIST 17
#define GLIB_DEPRECATED_MACRO_IN_2_44 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_46 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_48 GLIB_DEPRECATED_MACRO
#define __PTRDIFF_TYPE__ long int
#define G_GSIZE_FORMAT "lu"
#define GLIB_DEPRECATED_IN_2_62_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __G_CHECKSUM_H__ 
#define DT_LNK DT_LNK
#define errno (*__errno_location ())
#define EL2NSYNC 45
#define GLIB_DEPRECATED_MACRO_IN_2_50 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_54 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_56 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_58 GLIB_DEPRECATED_MACRO
#define MULTI_FACTOR_AUTHENTICATION (1UL << 28)
#define GSSIZE_TO_LE(val) ((gssize) GINT64_TO_LE (val))
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define GLIB_DEPRECATED_MACRO_IN_2_62 GLIB_DEPRECATED_MACRO
#define __G_MESSAGES_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_68 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_56_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define LICENSE GPL
#define G_STATIC_REC_MUTEX_INIT { G_STATIC_MUTEX_INIT, 0, { 0 } } GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_rec_mutex_init)
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define _GLIB_AUTOPTR_SLIST_FUNC_NAME(TypeName) glib_slistautoptr_cleanup_ ##TypeName
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define PCRE_ERROR_UNSET (-33)
#define ENOPKG 65
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define GLIB_DEPRECATED_MACRO_IN_2_70 GLIB_DEPRECATED_MACRO
#define GLIB_DEPRECATED_MACRO_IN_2_72 GLIB_DEPRECATED_MACRO
#define G_UNICHAR_MAX_DECOMPOSITION_LENGTH 18
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define g_string_sprintf g_string_printf GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_string_printf)
#define __UINTPTR_TYPE__ long unsigned int
#define CLD_KILLED CLD_KILLED
#define CR_LOAD_DATA_LOCAL_INFILE_REALPATH_FAIL 2069
#define __SVE_NUM_PREGS 16
#define CR_NO_PARAMETERS_EXISTS 2033
#define _SC_FIFO _SC_FIFO
#define GLIB_DEPRECATED_MACRO_IN_2_36 GLIB_DEPRECATED_MACRO
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define __G_REGEX_H__ 
#define PCRE_INFO_FIRSTBYTE 4
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define g_test_quick() (g_test_config_vars->test_quick)
#define SIG_SETMASK 2
#define g_scanner_thaw_symbol_table(scanner) ((void)0) GLIB_DEPRECATED_MACRO_IN_2_26
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define _POSIX_OPEN_MAX 20
#define DBL_MIN_EXP __DBL_MIN_EXP__
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define __FLT128_DECIMAL_DIG__ 36
#define NET_ERROR_UNSET 0
#define G_NORETURN_FUNCPTR __attribute__ ((__noreturn__)) GLIB_AVAILABLE_MACRO_IN_2_68
#define g_test_quiet() (g_test_config_vars->test_quiet)
#define ENOTUNIQ 76
#define __FLT_DECIMAL_DIG__ 9
#define G_OS_INFO_KEY_VERSION_ID GLIB_AVAILABLE_MACRO_IN_2_64 "VERSION_ID"
#define G_KEY_FILE_DESKTOP_KEY_ACTIONS "Actions"
#define __WALL 0x40000000
#define GLIB_DEPRECATED_IN_2_32_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __FLT_MIN_10_EXP__ (-37)
#define G_ANALYZER_NORETURN 
#define FLT_MAX __FLT_MAX__
#define __G_ASYNCQUEUE_H__ 
#define _ASM_GENERIC_TYPES_H 
#define g_assert_cmpstr(s1,cmp,s2) G_STMT_START { const char *__s1 = (s1), *__s2 = (s2); if (g_strcmp0 (__s1, __s2) cmp 0) ; else g_assertion_message_cmpstr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #s1 " " #cmp " " #s2, __s1, #cmp, __s2); } G_STMT_END
#define __INT_LEAST64_WIDTH__ 64
#define PCRE_EXTRA_MATCH_LIMIT 0x0002
#define G_CONST_RETURN const GLIB_DEPRECATED_MACRO_IN_2_30_FOR(const)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define _GLIB_GNUC_DO_PRAGMA(x) _Pragma(G_STRINGIFY (x))
#define g_atomic_pointer_set(atomic,newval) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); glib_typeof ((atomic)) gaps_temp_atomic = (atomic); glib_typeof (*(atomic)) gaps_temp_newval = (newval); (void) (0 ? (gpointer) * (atomic) : NULL); __atomic_store (gaps_temp_atomic, &gaps_temp_newval, __ATOMIC_SEQ_CST); }))
#define g_atomic_pointer_add(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); (void) (0 ? (gpointer) *(atomic) : NULL); (void) (0 ? (val) ^ (val) : 1); (gssize) __atomic_fetch_add ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define __P(args) args
#define g_macro__has_attribute __has_attribute
#define d_fileno d_ino
#define GLIB_DEPRECATED_MACRO_IN_2_38 GLIB_DEPRECATED_MACRO
#define __ATOMIC_ACQ_REL 4
#define g_node_prepend_data(parent,data) g_node_prepend ((parent), g_node_new (data))
#define __U32_TYPE unsigned int
#define _STDLIB_H 1
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define COMP_HEADER_SIZE 3
#define G_LOCK_DEFINE(name) GMutex G_LOCK_NAME (name)
#define GLIB_DEPRECATED_MACRO_IN_2_64_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define _BITS_FLOATN_COMMON_H 
#define SI_TIMER SI_TIMER
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define si_timerid _sifields._timer.si_tid
#define _BITS_SIGEVENT_CONSTS_H 1
#define __FLT32X_MAX_EXP__ 1024
#define ____sigset_t_defined 
#define g_return_val_if_reached(val) G_STMT_START { g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, "file %s: line %d (%s): should not be reached", __FILE__, __LINE__, G_STRFUNC); return (val); } G_STMT_END
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define _PC_VDISABLE _PC_VDISABLE
#define AIO_PRIO_DELTA_MAX 20
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define _STDBOOL_H 
#define __ARM_SIZEOF_WCHAR_T 4
#define GUINT32_SWAP_BE_PDP(val) ((guint32) ( (((guint32) (val) & (guint32) 0x00ff00ffU) << 8) | (((guint32) (val) & (guint32) 0xff00ff00U) >> 8)))
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define _XBS5_ILP32_OFF32 -1
#define g_pointer_bit_trylock(address,lock_bit) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(address) == sizeof (gpointer)); g_pointer_bit_trylock ((address), (lock_bit)); }))
#define GLIB_DEPRECATED_TYPE_IN_2_68_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define NET_WAIT_TIMEOUT 8 * 60 * 60
#define GLIB_AVAILABLE_TYPE_IN_2_64 
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __GCC_IEC_559_COMPLEX 2
#define LDBL_HAS_SUBNORM __LDBL_HAS_DENORM__
#define ENAVAIL 119
#define G_VARIANT_TYPE_INT32 ((const GVariantType *) "i")
#define FIELD_TYPE_STRING MYSQL_TYPE_STRING
#define __uid_t_defined 
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define CR_UNKNOWN_ERROR 2000
#define __UINT_LEAST8_TYPE__ unsigned char
#define FLT_MIN __FLT_MIN__
#define EUNATCH 49
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define __flexarr []
#define _SC_LINE_MAX _SC_LINE_MAX
#define SEGV_PKUERR SEGV_PKUERR
#define GLIB_UNAVAILABLE_ENUMERATOR(maj,min) G_UNAVAILABLE(maj,min)
#define _SCHED_H 1
#define G_GNUC_SCANF(format_idx,arg_idx) __attribute__((__format__ (gnu_scanf, format_idx, arg_idx)))
#define _BITS_SETJMP_H 1
#define _POSIX_PRIORITIZED_IO 200809L
#define __stub_fchflags 
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define G_VARIANT_TYPE_INT64 ((const GVariantType *) "x")
#define GLIB_VERSION_PREV_STABLE (G_ENCODE_VERSION (GLIB_MAJOR_VERSION, GLIB_MINOR_VERSION - 2))
#define g_main_new(is_running) g_main_loop_new (NULL, is_running) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_new)
#define PTHREAD_CANCELED ((void *) -1)
#define _BITS_TIME_H 1
#define GLIB_DEPRECATED_IN_2_54_FOR(f) GLIB_DEPRECATED_FOR(f)
#define LOCAL_INFILE_ERROR_LEN 512
#define TRUE (!FALSE)
#define __FSWORD_T_TYPE __SWORD_TYPE
#define PCRE_STUDY_EXTRA_NEEDED 0x0008
#define EAFNOSUPPORT 97
#define MYSQL_NO_DATA 100
#define _STDDEF_H_ 
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define GUINT16_SWAP_BE_PDP(val) (GUINT16_SWAP_LE_BE (val))
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define _XOPEN_UNIX 1
#define MYSQL_USERNAME_LENGTH 96
#define G_MAXOFFSET G_MAXINT64
#define CLIENT_MULTI_STATEMENTS (1UL << 16)
#define _GLIB_EXTERN extern
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define GLIB_DEPRECATED_TYPE_IN_2_26_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define DT_WHT DT_WHT
#define INT16_C(c) c
#define __WINT_MAX__ 0xffffffffU
#define G_MAXDOUBLE DBL_MAX
#define _SC_2_C_DEV _SC_2_C_DEV
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define GINT64_TO_BE(val) ((gint64) GUINT64_SWAP_LE_BE (val))
#define CAN_CLIENT_COMPRESS CLIENT_COMPRESS
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define G_VARIANT_TYPE_DICTIONARY ((const GVariantType *) "a{?*}")
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define g_list_next(list) ((list) ? (((GList *)(list))->next) : NULL)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define G_GINT32_FORMAT "i"
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define MQ_PRIO_MAX 32768
#define _GETOPT_POSIX_H 1
#define __sigstack_defined 1
#define _POSIX2_BC_DIM_MAX 2048
#define EILSEQ 84
#define PCRE_ERROR_DFA_WSSIZE (-19)
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ESPIPE 29
#define INT64_C(c) c ## L
#define _POSIX_TTY_NAME_MAX 9
#define ECOMM 70
#define SI_DETHREAD SI_DETHREAD
#define G_GOFFSET_CONSTANT(val) G_GINT64_CONSTANT(val)
#define __OFF_T_MATCHES_OFF64_T 1
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_32_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define AUTO_INCREMENT_FLAG 512
#define g_scanner_remove_symbol(scanner,symbol) G_STMT_START { g_scanner_scope_remove_symbol ((scanner), 0, (symbol)); } G_STMT_END GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_scanner_scope_remove_symbol)
#define __WCHAR_MAX__ 0xffffffffU
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define STDCALL 
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define INT16_MAX (32767)
#define FIELD_IS_RENAMED (1 << 21)
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define G_GUINT64_CONSTANT(val) (val ##UL)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_IEC_559 2
#define g_atomic_rc_box_new(type) ((type *) g_atomic_rc_box_alloc (sizeof (type)))
#define g_static_mutex_get_mutex g_static_mutex_get_mutex_impl GLIB_DEPRECATED_MACRO_IN_2_32
#define g_steal_pointer(pp) ((glib_typeof (*pp)) (g_steal_pointer) (pp))
#define g_memmove(dest,src,len) G_STMT_START { memmove ((dest), (src), (len)); } G_STMT_END GLIB_DEPRECATED_MACRO_IN_2_40_FOR(memmove)
#define _IOFBF 0
#define _POSIX2_BC_STRING_MAX 1000
#define __FLT_EVAL_METHOD__ 0
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define G_GNUC_PRINTF(format_idx,arg_idx) __attribute__((__format__ (gnu_printf, format_idx, arg_idx)))
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define SYSTEM_CHARSET_MBMAXLEN 3
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define __FLT64_DECIMAL_DIG__ 17
#define CR_MALFORMED_PACKET 2027
#define g_autoqueue(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_QUEUE_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_QUEUE_TYPENAME(TypeName)
#define LDBL_MAX __LDBL_MAX__
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __FLT128_HAS_QUIET_NAN__ 1
#define MYSQL_SHUTDOWN_KILLABLE_TRANS (unsigned char)(1 << 1)
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define XATTR_SIZE_MAX 65536
#define _mysql_version_h 
#define LIBMYSQL_VERSION_ID 80031
#define MAX_BLOB_WIDTH 16777216
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define CLIENT_LOCAL_FILES 128
#define ILL_BADIADDR ILL_BADIADDR
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define G_KEY_FILE_DESKTOP_KEY_HIDDEN "Hidden"
#define DT_FIFO DT_FIFO
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define POLL_MSG POLL_MSG
#define PCRE_CASELESS 0x00000001
#define INT16_MIN (-32767-1)
#define __FINITE_MATH_ONLY__ 0
#define si_overrun _sifields._timer.si_overrun
#define __id_t_defined 
#define G_VARIANT_DICT_INIT(asv) { { { asv, 3488698669u , { 0, } } } }
#define G_MININT8 ((gint8) (-G_MAXINT8 - 1))
#define PCRE_INFO_MATCH_EMPTY 25
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __sched_priority sched_priority
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define __FLT64_HAS_INFINITY__ 1
#define G_STRUCT_MEMBER(member_type,struct_p,struct_offset) (*(member_type*) G_STRUCT_MEMBER_P ((struct_p), (struct_offset)))
#define G_KEY_FILE_DESKTOP_KEY_TYPE "Type"
#define GLIB_VERSION_2_36 (G_ENCODE_VERSION (2, 36))
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define GLIB_DEPRECATED_MACRO_IN_2_40_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __pid_t_defined 
#define EADV 68
#define ERANGE 34
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_54_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define CR_PROBE_MASTER_CONNECT 2025
#define G_VARIANT_TYPE_DOUBLE ((const GVariantType *) "d")
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _THREAD_MUTEX_INTERNAL_H 1
#define LDBL_DECIMAL_DIG __LDBL_DECIMAL_DIG__
#define __LDBL_REDIR1(name,proto,alias) name proto
#define PCRE_INFO_MAXLOOKBEHIND 18
#define G_HAVE_GINT64 1
#define ONLY_KILL_QUERY 1
#define NGROUPS_MAX 65536
#define GLIB_DEPRECATED_MACRO_IN_2_52 GLIB_DEPRECATED_MACRO
#define ETXTBSY 26
#define GUINT16_SWAP_LE_BE_CONSTANT(val) ((guint16) ( (guint16) ((guint16) (val) >> 8) | (guint16) ((guint16) (val) << 8)))
#define __HAVE_FLOAT128X 0
#define GLIB_DEPRECATED_TYPE_IN_2_44_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define GSIZE_FROM_BE(val) (GSIZE_TO_BE (val))
#define NSIG _NSIG
#define g_assert_null(expr) G_STMT_START { if G_LIKELY ((expr) == NULL) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should be NULL"); } G_STMT_END
#define GLIB_VERSION_MIN_REQUIRED (GLIB_VERSION_CUR_STABLE)
#define TABLE_COMMENT_MAXLEN 2048
#define g_date_day_of_year g_date_get_day_of_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_day_of_year)
#define htobe16(x) __bswap_16 (x)
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define __SHRT_MAX__ 0x7fff
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define ILL_ILLOPC ILL_ILLOPC
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define G_GINT16_MODIFIER "h"
#define __FLT64X_MAX_10_EXP__ 4932
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define PCRE_SPTR16 const PCRE_UCHAR16 *
#define SIGTTOU 22
#define G_THREADS_ENABLED 
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define GLIB_SYSDEF_POLLNVAL =32
#define REFRESH_PERSIST 0x400000L
#define __LDBL_IS_IEC_60559__ 2
#define SET_FLAG 2048
#define GLIB_DEPRECATED_IN_2_30_FOR(f) GLIB_DEPRECATED_FOR(f)
#define _G_NEW(struct_type,n_structs,func) (struct_type *) (G_GNUC_EXTENSION ({ gsize __n = (gsize) (n_structs); gsize __s = sizeof (struct_type); gpointer __p; if (__s == 1) __p = g_ ##func (__n); else if (__builtin_constant_p (__n) && (__s == 0 || __n <= G_MAXSIZE / __s)) __p = g_ ##func (__n * __s); else __p = g_ ##func ##_n (__n, __s); __p; }))
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define G_GNUC_END_IGNORE_DEPRECATIONS _Pragma ("GCC diagnostic pop")
#define PCRE_SPTR32 const PCRE_UCHAR32 *
#define G_MINSHORT SHRT_MIN
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define __LITTLE_ENDIAN 1234
#define __G_BYTES_H__ 
#define g_assert_cmpfloat(n1,cmp,n2) G_STMT_START { long double __n1 = (long double) (n1), __n2 = (long double) (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'f'); } G_STMT_END
#define SVE_MAGIC 0x53564501
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define CLIENT_IGNORE_SIGPIPE 4096
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define GULONG_FROM_BE(val) (GULONG_TO_BE (val))
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define G_KEY_FILE_DESKTOP_KEY_ICON "Icon"
#define htobe64(x) __bswap_64 (x)
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define GINT16_TO_BE(val) ((gint16) GUINT16_SWAP_LE_BE (val))
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define INT_FAST8_MIN (-128)
#define _UNISTD_H 1
#define PCRE_ERROR_BADOPTION (-3)
#define G_TEST_OPTION_ISOLATE_DIRS "isolate_dirs"
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define GLIB_DEPRECATED_MACRO_IN_2_62_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define G_HOOK(hook) ((GHook*) (hook))
#define __UID_T_TYPE __U32_TYPE
#define _POSIX_READER_WRITER_LOCKS 200809L
#define _PCRE_H 
#define EDQUOT 122
#define __AARCH64_CMODEL_SMALL__ 1
#define _POSIX_AIO_MAX 1
#define MYSQL_VERSION_STR MYSQL_SERVER_VERSION
#define GSIZE_FROM_LE(val) (GSIZE_TO_LE (val))
#define __LDBL_MAX_EXP__ 16384
#define ENOTEMPTY 39
#define UINT_FAST16_MAX (18446744073709551615UL)
#define GLIB_DEPRECATED_TYPE_IN_2_66_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __WINT_MIN__ 0U
#define SA_STACK SA_ONSTACK
#define CR_VERSION_ERROR 2007
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define _SC_SHELL _SC_SHELL
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define __G_DIR_H__ 
#define g_rand_boolean(rand_) ((g_rand_int (rand_) & (1 << 15)) != 0)
#define __linux__ 1
#define NET_ERROR_SOCKET_NOT_READABLE 3
#define GLIB_DEPRECATED_MACRO_IN_2_42_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define FIELD_TYPE_SHORT MYSQL_TYPE_SHORT
#define _connection_h 
#define _POSIX_AIO_LISTIO_MAX 2
#define G_GINTPTR_MODIFIER "l"
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define g_node_insert_data_after(parent,sibling,data) g_node_insert_after ((parent), (sibling), g_node_new (data))
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define __G_KEY_FILE_H__ 
#define __WCHAR_MIN__ 0U
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_SYNCHRONIZED_IO 200809L
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define GULONG_FROM_LE(val) (GULONG_TO_LE (val))
#define GLIB_VERSION_2_28 (G_ENCODE_VERSION (2, 28))
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define SESSION_TRACK_END SESSION_TRACK_TRANSACTION_STATE
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define _POSIX_THREAD_THREADS_MAX 64
#define g_return_if_fail(expr) G_STMT_START { if (G_LIKELY (expr)) { } else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, #expr); return; } } G_STMT_END
#define G_STMT_START do
#define G_GNUC_FORMAT(arg_idx) __attribute__ ((__format_arg__ (arg_idx)))
#define CR_UNUSED_1 2049
#define _SYS_USER_H 1
#define _FORTIFY_SOURCE 2
#define __INT8_MAX__ 0x7f
#define GLIB_DEPRECATED_MACRO_IN_2_64 GLIB_DEPRECATED_MACRO
#define _SC_BASE _SC_BASE
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#define _POSIX_LINK_MAX 8
#define GLIB_DEPRECATED_MACRO_IN_2_66 GLIB_DEPRECATED_MACRO
#define COLL_WEIGHTS_MAX 255
#define CLIENT_LONG_PASSWORD 1
#define DBL_DIG __DBL_DIG__
#define PCRE_BSR_ANYCRLF 0x00800000
#define _DEFAULT_SOURCE 1
#define _LINUX_POSIX_TYPES_H 
#define g_warn_if_fail(expr) do { if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #expr); } while (0)
#define __USE_EXTERN_INLINES 1
#define __LOCK_ALIGNMENT 
#define _XOPEN_REALTIME_THREADS 1
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define ETIMEDOUT 110
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_30_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define SCHED_OTHER 0
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define PCRE_INFO_OPTIONS 0
#define g_slice_new0(type) (type *) (G_GNUC_EXTENSION ({ gsize __s = sizeof (type); gpointer __p; __p = g_slice_alloc (__s); memset (__p, 0, __s); __p; }))
#define ENODATA 61
#define GLIB_DEPRECATED_IN_2_52_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __G_STRINGCHUNK_H__ 
#define g_autoptr(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_TYPENAME(TypeName)
#define __END_DECLS 
#define COLUMN_COMMENT_MAXLEN 1024
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define GLIB_SIZEOF_SSIZE_T 8
#define CLIENT_NET_READ_TIMEOUT 365 * 24 * 3600
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _ALLOCA_H 1
#define REFRESH_FAST 32768
#define PCRE_DFA_RESTART 0x00020000
#define __BITS_PER_LONG 64
#define __SLONG32_TYPE int
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define _SYS_SELECT_H 1
#define g_chunk_new0(type,chunk) ((type *) g_mem_chunk_alloc0 (chunk))
#define g_ascii_isprint(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_PRINT) != 0)
#define G_STATIC_RW_LOCK_INIT { G_STATIC_MUTEX_INIT, NULL, NULL, 0, FALSE, 0, 0 } GLIB_DEPRECATED_MACRO_IN_2_32_FOR(g_rw_lock_init)
#define _XOPEN_ENH_I18N 1
#define g_array_index(a,t,i) (((t*) (void *) (a)->data) [(i)])
#define __jmp_buf_tag_defined 1
#define g_atomic_rc_box_new0(type) ((type *) g_atomic_rc_box_alloc0 (sizeof (type)))
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define CR_OK -1
#define DECIMAL_DIG __DECIMAL_DIG__
#define g_string_append_c(gstr,c) g_string_append_c_inline (gstr, c)
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define REFRESH_ENGINE_LOG 512
#define EINTR 4
#define G_URI_RESERVED_CHARS_GENERIC_DELIMITERS ":/?#[]@"
#define __WCHAR_MAX __WCHAR_MAX__
#define PATH_MAX 4096
#define SHRT_MIN (-SHRT_MAX - 1)
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define _IO_EOF_SEEN 0x0010
#define GLIB_SIZEOF_VOID_P 8
#define _POSIX_SPAWN 200809L
#define G_NORETURN __attribute__ ((__noreturn__))
#define __SHRT_WIDTH__ 16
#define __f64x(x) x ##f64x
#define G_VARIANT_TYPE_VARIANT ((const GVariantType *) "v")
#define g_node_insert_data(parent,position,data) g_node_insert ((parent), (position), g_node_new (data))
#define GLIB_AVAILABLE_TYPE_IN_2_66 
#define CLIENT_FOUND_ROWS 2
#define TMP_MAX 238328
#define si_status _sifields._sigchld.si_status
#define __FLT32_IS_IEC_60559__ 2
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define __WORDSIZE 64
#define NET_WRITE_TIMEOUT 60
#define _GLIB_AUTOPTR_QUEUE_TYPENAME(TypeName) TypeName ##_queueautoptr
#define __FLT32_MAX_EXP__ 128
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define PCRE_INFO_FIRSTCHARACTER 19
#define ENOTCONN 107
#define ILL_ILLADR ILL_ILLADR
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define SIGQUIT 3
#define REFRESH_LOG 2
#define G_MININT16 ((gint16) (-G_MAXINT16 - 1))
#define CR_NEW_STMT_METADATA 2057
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define ER_WARN_DATA_TRUNCATED WARN_DATA_TRUNCATED
#define PCRE_INFO_BACKREFMAX 3
#define ENOTNAM 118
#define G_OPTION_REMAINING ""
#define G_MEM_ALIGN GLIB_SIZEOF_LONG
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_52_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define REFRESH_ERROR_LOG 256
#define CR_PROBE_SLAVE_CONNECT 2024
#define G_MININT32 ((gint32) (-G_MAXINT32 - 1))
#define RTSIG_MAX 32
#define EPERM 1
#define _STDDEF_H 
#define PCRE_PARTIAL_HARD 0x08000000
#define LIBMYSQL_VERSION "8.0.31"
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __SIZEOF_PTRDIFF_T__ 8
#define _BITS_FLOATN_H 
#define FIELD_TYPE_YEAR MYSQL_TYPE_YEAR
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _IONBF 2
#define PCRE_EXTRA_STUDY_DATA 0x0001
#define _SYS_UCONTEXT_H 1
#define PCRE_CONFIG_PARENS_LIMIT 13
#define G_HOOK_FLAGS(hook) (G_HOOK (hook)->flags)
#define MY_LIST_INCLUDED 
#define G_MININT64 ((gint64) (-G_MAXINT64 - G_GINT64_CONSTANT(1)))
#define __UINT16_C(c) c
#define ELOOP 40
#define PCRE_ERROR_BADUTF16_OFFSET (-11)
#define CR_EMBEDDED_CONNECTION 2021
#define _POSIX2_RE_DUP_MAX 255
#define GLIB_DEPRECATED_IN_2_48 GLIB_DEPRECATED
#define g_date_month g_date_get_month GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_month)
#define _ENDIAN_H 1
#define CLIENT_SESSION_TRACK (1UL << 23)
#define G_SPAWN_ERROR g_spawn_error_quark ()
#define __SI_ERRNO_THEN_CODE 1
#define G_VARIANT_TYPE_UNIT ((const GVariantType *) "()")
#define ZEROFILL_FLAG 64
#define _SC_THREADS _SC_THREADS
#define g_try_renew(struct_type,mem,n_structs) _G_RENEW (struct_type, mem, n_structs, try_realloc)
#define __bool_true_false_are_defined 1
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define _GLIB_CLEANUP(func) __attribute__((cleanup(func)))
#define ENOSR 63
#define g_ascii_isxdigit(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_XDIGIT) != 0)
#define __USE_ISOC11 1
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define __FLT16_MIN_EXP__ (-13)
#define g_assert_cmpmem(m1,l1,m2,l2) G_STMT_START { gconstpointer __m1 = m1, __m2 = m2; int __l1 = l1, __l2 = l2; if (__l1 != 0 && __m1 == NULL) g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #l1 " == 0 || " #m1 " != NULL)"); else if (__l2 != 0 && __m2 == NULL) g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #l2 " == 0 || " #m2 " != NULL)"); else if (__l1 != __l2) g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #l1 " (len(" #m1 ")) == " #l2 " (len(" #m2 "))", (long double) __l1, "==", (long double) __l2, 'i'); else if (__l1 != 0 && __m2 != NULL && memcmp (__m1, __m2, __l1) != 0) g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #m1 " == " #m2 ")"); } G_STMT_END
#define PCRE_NO_START_OPTIMISE 0x04000000
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define __FLT64_MANT_DIG__ 53
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define g_atomic_int_add(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (val) : 1); (gint) __atomic_fetch_add ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define FLT_MIN_EXP __FLT_MIN_EXP__
#define SIGIOT SIGABRT
#define __FLT64X_MANT_DIG__ 113
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define MYSQL_CLIENT_AUTHENTICATION_PLUGIN 2
#define __G_PRIMES_H__ 
#define g_pointer_bit_lock(address,lock_bit) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(address) == sizeof (gpointer)); g_pointer_bit_lock ((address), (lock_bit)); }))
#define _T_PTRDIFF 
#define __glibc_has_extension(ext) 0
#define GLIB_DEPRECATED_MACRO_IN_2_60_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define UINT_LEAST8_MAX (255)
#define __pie__ 2
#define L_ctermid 9
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define g_date_sunday_weeks_in_year g_date_get_sunday_weeks_in_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_sunday_weeks_in_year)
#define MYSQL_CLIENT_reserved2 1
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define _SC_ARG_MAX _SC_ARG_MAX
#define __timeval_defined 1
#define W_OK 2
#define DT_BLK DT_BLK
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define SSIZE_MAX LONG_MAX
#define GLIB_DEPRECATED_TYPE_IN_2_64_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ELNRNG 48
#define __SI_MAX_SIZE 128
#define g_bit_storage(number) g_bit_storage_impl(number)
#define CLIENT_PROTOCOL_41 512
#define __ONCE_ALIGNMENT 
#define PCRE_NO_START_OPTIMIZE 0x04000000
#define PCRE_DUPNAMES 0x00080000
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define _POSIX_HOST_NAME_MAX 255
#define g_slice_dup(type,mem) (1 ? (type*) g_slice_copy (sizeof (type), (mem)) : ((void) ((type*) 0 == (mem)), (type*) 0))
#define G_OS_INFO_KEY_VERSION GLIB_AVAILABLE_MACRO_IN_2_64 "VERSION"
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define PCRE_INFO_MATCHLIMIT 23
#define _POSIX_SEM_NSEMS_MAX 256
#define __UINT16_TYPE__ short unsigned int
#define DT_SOCK DT_SOCK
#define __FLT16_MAX_10_EXP__ 4
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define ____sigval_t_defined 
#define _GCC_WCHAR_T 
#define FPE_FLTDIV FPE_FLTDIV
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define PCRE_MULTILINE 0x00000002
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define GLIB_DEPRECATED_IN_2_50_FOR(f) GLIB_DEPRECATED_FOR(f)
#define GLONG_FROM_BE(val) (GLONG_TO_BE (val))
#define __DBL_HAS_INFINITY__ 1
#define g_assert_cmpstrv(strv1,strv2) G_STMT_START { const char * const *__strv1 = (const char * const *) (strv1); const char * const *__strv2 = (const char * const *) (strv2); if (!__strv1 || !__strv2) { if (__strv1) { g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #strv1 " == " #strv2 "): " #strv2 " is NULL, but " #strv1 " is not"); } else if (__strv2) { g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #strv1 " == " #strv2 "): " #strv1 " is NULL, but " #strv2 " is not"); } } else { guint __l1 = g_strv_length ((char **) __strv1); guint __l2 = g_strv_length ((char **) __strv2); if (__l1 != __l2) { char *__msg; __msg = g_strdup_printf ("assertion failed (" #strv1 " == " #strv2 "): length %u does not equal length %u", __l1, __l2); g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, __msg); g_free (__msg); } else { guint __i; for (__i = 0; __i < __l1; __i++) { if (g_strcmp0 (__strv1[__i], __strv2[__i]) != 0) { g_assertion_message_cmpstrv (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #strv1 " == " #strv2, __strv1, __strv2, __i); } } } } } G_STMT_END
#define CLIENT_REMEMBER_OPTIONS (1UL << 31)
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define __suseconds_t_defined 
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define MYSQL_CLIENT_PLUGIN_INCLUDED 
#define _POSIX_NGROUPS_MAX 8
#define FIELD_TYPE_MEDIUM_BLOB MYSQL_TYPE_MEDIUM_BLOB
#define stdin stdin
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_28_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define MYSQL_CLIENT_PLUGIN_AUTHOR_ORACLE "Oracle Corporation"
#define PCRE_EXTRA_CALLOUT_DATA 0x0004
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define G_PRIVATE_INIT(notify) { NULL, (notify), { NULL, NULL } }
#define __FLT_MANT_DIG__ 24
#define _SC_CLK_TCK _SC_CLK_TCK
#define CR_AUTH_USER_CREDENTIALS 1
#define SCHED_FIFO 1
#define G_VARIANT_TYPE_INT16 ((const GVariantType *) "n")
#define CR_NET_PACKET_TOO_LARGE 2020
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define MAX_PACKET_LENGTH (256L * 256L * 256L - 1)
#define FIELD_TYPE_INTERVAL MYSQL_TYPE_ENUM
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define GLIB_DEPRECATED_IN_2_56 GLIB_DEPRECATED
#define __G_MAPPED_FILE_H__ 
#define REFRESH_OPTIMIZER_COSTS 0x200000L
#define be32toh(x) __bswap_32 (x)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define _SIZE_T_DEFINED 
#define G_GNUC_DEPRECATED __attribute__((__deprecated__))
#define PCRE_ANCHORED 0x00000010
#define _WCHAR_T_DEFINED_ 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define _POSIX_REGEXP 1
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define g_atomic_pointer_compare_and_exchange(atomic,oldval,newval) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof (oldval) == sizeof (gpointer)); gpointer gapcae_oldval = (gpointer)(oldval); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); (void) (0 ? (gpointer) *(atomic) : NULL); __atomic_compare_exchange_n ((atomic), (void *) (&(gapcae_oldval)), (newval), FALSE, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST) ? TRUE : FALSE; }))
#define __stub_setlogin 
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_40_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define CR_PARAMS_NOT_BOUND 2031
#define PCRE_UTF16 0x00000800
#define _POSIX_MEMORY_PROTECTION 200809L
#define true 1
#define SA_RESETHAND 0x80000000
#define __G_ALLOCATOR_H__ 
#define __sig_atomic_t_defined 1
#define __S32_TYPE int
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define _SC_2_C_BIND _SC_2_C_BIND
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define GLONG_FROM_LE(val) (GLONG_TO_LE (val))
#define __FLT64_MIN_10_EXP__ (-307)
#define G_GSSIZE_FORMAT "li"
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define FLT_HAS_SUBNORM __FLT_HAS_DENORM__
#define PCRE_ERROR_MATCHLIMIT (-8)
#define FIELD_TYPE_DOUBLE MYSQL_TYPE_DOUBLE
#define _POSIX_DELAYTIMER_MAX 32
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define GINT16_FROM_LE(val) (GINT16_TO_LE (val))
#define G_GOFFSET_FORMAT G_GINT64_FORMAT
#define GLIB_DEPRECATED_IN_2_72_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define __HAVE_FLOAT16 0
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define g_datalist_id_set_data(dl,q,d) g_datalist_id_set_data_full ((dl), (q), (d), NULL)
#define G_STRUCT_OFFSET(struct_type,member) ((glong) offsetof (struct_type, member))
#define g_macro__has_extension(x) 0
#define BUS_OBJERR BUS_OBJERR
#define REFRESH_TABLES 4
#define __G_POLL_H__ 
#define SEGV_MAPERR SEGV_MAPERR
#define G_TIME_SPAN_HOUR (G_GINT64_CONSTANT (3600000000))
#define __HAVE_FLOAT32 1
#define G_STATIC_ASSERT(expr) _Static_assert (expr, "Expression evaluates to false")
#define _GLIB_AUTOPTR_CLEAR_FUNC_NAME(TypeName) glib_autoptr_clear_ ##TypeName
#define GINT32_FROM_BE(val) (GINT32_TO_BE (val))
#define _PTRDIFF_T_DECLARED 
#define NET_HEADER_SIZE 4
#define _BITS_STDIO_H 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define __glibc_objsize(__o) __bos (__o)
#define G_GINTPTR_FORMAT "li"
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define g_test_slow() (!g_test_config_vars->test_quick)
#define mysql_library_init mysql_server_init
#define __FLT32_HAS_QUIET_NAN__ 1
#define G_DEFINE_QUARK(QN,q_n) GQuark q_n ##_quark (void) { static GQuark q; if G_UNLIKELY (q == 0) q = g_quark_from_static_string (#QN); return q; }
#define __SIZEOF_SIZE_T__ 8
#define g_return_if_reached() G_STMT_START { g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, "file %s: line %d (%s): should not be reached", __FILE__, __LINE__, G_STRFUNC); return; } G_STMT_END
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _WCHAR_T 
#define PCRE_NEVER_UTF 0x00010000
#define __HAVE_FLOAT64 1
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_50_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define CR_UNSUPPORTED_PARAM_TYPE 2036
#define FIELD_TYPE_INT24 MYSQL_TYPE_INT24
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define g_rc_box_acquire(mem_block) ((glib_typeof (mem_block)) (g_rc_box_acquire) (mem_block))
#define FIELD_FLAGS_STORAGE_MEDIA_MASK (3 << FIELD_FLAGS_STORAGE_MEDIA)
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX (18446744073709551615UL)
#define FIELD_FLAGS_STORAGE_MEDIA 22
#define __G_IOCHANNEL_H__ 
#define PCRE_BSR_UNICODE 0x01000000
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define GLIB_VERSION_2_30 (G_ENCODE_VERSION (2, 30))
#define GLIB_VERSION_2_32 (G_ENCODE_VERSION (2, 32))
#define GLIB_VERSION_2_34 (G_ENCODE_VERSION (2, 34))
#define GLIB_VERSION_2_38 (G_ENCODE_VERSION (2, 38))
#define __LDBL_MIN_10_EXP__ (-4931)
#define GLIB_SYSDEF_POLLHUP =16
#define CLIENT_INTERACTIVE 1024
#define GINT32_TO_BE(val) ((gint32) GUINT32_SWAP_LE_BE (val))
#define GLIB_DEPRECATED_TYPE_IN_2_40_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define PCRE_CONFIG_POSIX_MALLOC_THRESHOLD 3
#define CLIENT_CAPABILITY_EXTENSION (1UL << 29)
#define GLIB_VERSION_2_40 (G_ENCODE_VERSION (2, 40))
#define GLIB_VERSION_2_42 (G_ENCODE_VERSION (2, 42))
#define GLIB_VERSION_2_44 (G_ENCODE_VERSION (2, 44))
#define GLIB_VERSION_2_46 (G_ENCODE_VERSION (2, 46))
#define CR_SHARED_MEMORY_CONNECT_ANSWER_ERROR 2039
#define GLIB_VERSION_2_48 (G_ENCODE_VERSION (2, 48))
#define list_rest(a) ((a)->next)
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define EKEYREVOKED 128
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define G_VARIANT_PARSE_ERROR (g_variant_parse_error_quark ())
#define g_node_insert_data_before(parent,sibling,data) g_node_insert_before ((parent), (sibling), g_node_new (data))
#define GLIB_VERSION_2_50 (G_ENCODE_VERSION (2, 50))
#define GLIB_VERSION_2_52 (G_ENCODE_VERSION (2, 52))
#define GLIB_VERSION_2_54 (G_ENCODE_VERSION (2, 54))
#define GLIB_VERSION_2_56 (G_ENCODE_VERSION (2, 56))
#define GLIB_VERSION_2_58 (G_ENCODE_VERSION (2, 58))
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __ARM_FP16_FORMAT_IEEE 1
#define si_uid _sifields._kill.si_uid
#define __WTERMSIG(status) ((status) & 0x7f)
#define GLIB_VERSION_2_60 (G_ENCODE_VERSION (2, 60))
#define GLIB_VERSION_2_62 (G_ENCODE_VERSION (2, 62))
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define GLIB_VERSION_2_64 (G_ENCODE_VERSION (2, 64))
#define GLIB_VERSION_2_66 (G_ENCODE_VERSION (2, 66))
#define GLIB_VERSION_2_68 (G_ENCODE_VERSION (2, 68))
#define _SC_PAGESIZE _SC_PAGESIZE
#define UINT_LEAST16_MAX (65535)
#define GLIB_DEPRECATED_MACRO_IN_2_38_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define GLIB_VERSION_2_70 (G_ENCODE_VERSION (2, 70))
#define GLIB_VERSION_2_72 (G_ENCODE_VERSION (2, 72))
#define CLIENT_ODBC 64
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define _PC_LINK_MAX _PC_LINK_MAX
#define __useconds_t_defined 
#define UINT32_MAX (4294967295U)
#define __G_SCANNER_H__ 
#define _POSIX_SHELL 1
#define WNOHANG 1
#define DBL_TRUE_MIN __DBL_DENORM_MIN__
#define _XOPEN_SHM 1
#define CR_NAMEDPIPEOPEN_ERROR 2017
#define SEGV_ACCERR SEGV_ACCERR
#define __PTRDIFF_T 
#define _SC_WORD_BIT _SC_WORD_BIT
#define __HAVE_GENERIC_SELECTION 1
#define _POSIX_ADVISORY_INFO 200809L
#define _POSIX_CLOCKRES_MIN 20000000
#define g_new(struct_type,n_structs) _G_NEW (struct_type, n_structs, malloc)
#define _SC_SPAWN _SC_SPAWN
#define g_datalist_set_data(dl,k,d) g_datalist_set_data_full ((dl), (k), (d), NULL)
#define g_alloca(size) alloca (size)
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define EADDRINUSE 98
#define _VA_LIST 
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define __PIE__ 2
#define __INT_FAST8_MAX__ 0x7f
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_72_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define GPOINTER_TO_INT(p) ((gint) (glong) (p))
#define _POSIX_TIMER_MAX 32
#define G_MINFLOAT FLT_MIN
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define GINT32_TO_LE(val) ((gint32) (val))
#define EXPLICIT_NULL_FLAG (1 << 27)
#define __WCOREFLAG 0x80
#define g_hash_table_thaw(hash_table) ((void)0) GLIB_DEPRECATED_MACRO_IN_2_26
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define CR_DUPLICATE_CONNECTION_ATTR 2060
#define GLIB_DEPRECATED_IN_2_28_FOR(f) GLIB_DEPRECATED_FOR(f)
#define G_MAXULONG ULONG_MAX
#define G_MINSSIZE G_MINLONG
#define MYSQL_SHUTDOWN_KILLABLE_CONNECT (unsigned char)(1 << 0)
#define my_socket_defined 
#define __restrict_arr __restrict
#define __G_DEPRECATED_THREAD_H__ 
#define FLT_RADIX __FLT_RADIX__
#define GLIB_DEPRECATED_TYPE_IN_2_62_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define _POSIX_SYMLOOP_MAX 8
#define PCRE_INFO_CAPTURECOUNT 2
#define CR_SHARED_MEMORY_CONNECT_ABANDONED_ERROR 2045
#define G_ALLOC_AND_FREE 2
#define PCRE_NOTBOL 0x00000080
#define G_GNUC_MALLOC __attribute__ ((__malloc__))
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define __MODE_T_TYPE __U32_TYPE
#define SERVER_VERSION_LENGTH 60
#define __G_ALLOCA_H__ 
#define SIGTRAP 5
#define EISDIR 21
#define __nonnull(params) __attribute_nonnull__ (params)
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define G_GNUC_CHECK_VERSION(major,minor) ((__GNUC__ > (major)) || ((__GNUC__ == (major)) && (__GNUC_MINOR__ >= (minor))))
#define PCRE_ERROR_SHORTUTF16 (-25)
#define INT_LEAST8_MAX (127)
#define __aarch64__ 1
#define GLIB_SIZEOF_LONG 8
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __CFLOAT32X _Complex _Float32x
#define __ARM_FP16_ARGS 1
#define INT8_C(c) c
#define g_size_checked_add(dest,a,b) (!__builtin_add_overflow(a, b, dest))
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define GLONG_TO_BE(val) ((glong) GINT64_TO_BE (val))
#define g_main_set_poll_func(func) g_main_context_set_poll_func (NULL, func) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_context_set_poll_func)
#define G_GUINT64_FORMAT "lu"
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define PCRE_UTF8_ERR11 11
#define PCRE_UTF8_ERR13 13
#define PCRE_UTF8_ERR14 14
#define PCRE_UTF8_ERR15 15
#define PCRE_UTF8_ERR17 17
#define PCRE_UTF8_ERR18 18
#define PCRE_UTF8_ERR19 19
#define __FLT64X_DECIMAL_DIG__ 36
#define GLIB_AVAILABLE_IN_2_26 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_28 _GLIB_EXTERN
#define __HAVE_DISTINCT_FLOAT64X 0
#define PCRE_ERROR_DFA_UITEM (-16)
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX (2147483647)
#define PCRE_UTF8_ERR21 21
#define PCRE_UTF8_ERR22 22
#define GLIB_AVAILABLE_IN_2_32 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_34 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_36 _GLIB_EXTERN
#define FPE_FLTSUB FPE_FLTSUB
#define G_DIR_SEPARATOR_S "/"
#define MYSQL_RPL_GTID (1 << 16)
#define LOGIN_NAME_MAX 256
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define CHAR_BIT __CHAR_BIT__
#define GLIB_AVAILABLE_IN_2_40 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_42 _GLIB_EXTERN
#define __attribute_pure__ __attribute__ ((__pure__))
#define GLIB_AVAILABLE_IN_2_44 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_46 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_48 _GLIB_EXTERN
#define __G_NODE_H__ 
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define PCRE_ERROR_NOMEMORY (-6)
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define GLIB_AVAILABLE_IN_2_50 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_52 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_54 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_56 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_58 _GLIB_EXTERN
#define MAX_INT_WIDTH 10
#define __FLT64X_IS_IEC_60559__ 2
#define GLIB_AVAILABLE_IN_2_60 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_64 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_66 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_68 _GLIB_EXTERN
#define BINARY_FLAG 128
#define CLOCK_BOOTTIME_ALARM 9
#define CR_FETCH_CANCELED 2050
#define GPOINTER_TO_UINT(p) ((guint) (gulong) (p))
#define GLIB_AVAILABLE_IN_2_70 _GLIB_EXTERN
#define GLIB_AVAILABLE_IN_2_72 _GLIB_EXTERN
#define REFRESH_RELAY_LOG 2048
#define G_DIR_SEPARATOR '/'
#define MAX_CANON 255
#define __LDBL_DECIMAL_DIG__ 36
#define CR_IPSOCK_ERROR 2004
#define INT_LEAST8_MIN (-128)
#define CR_MAX_ERROR 2999
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define g_date_monday_week_of_year g_date_get_monday_week_of_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_monday_week_of_year)
#define G_URI_RESERVED_CHARS_ALLOWED_IN_PATH_ELEMENT G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS ":@"
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define _PTRDIFF_T_ 
#define G_LOG_2_BASE_10 (0.30102999566398119521)
#define g_slist_next(slist) ((slist) ? (((GSList *)(slist))->next) : NULL)
#define __DBL_MANT_DIG__ 53
#define CHALLENGE_LENGTH 32
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define glib_typeof(t) __typeof__ (t)
#define __stub___compat_bdflush 
#define G_GNUC_FALLTHROUGH __attribute__((fallthrough)) GLIB_AVAILABLE_MACRO_IN_2_60
#define INT_LEAST32_MIN (-2147483647-1)
#define __ssize_t_defined 
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define GLONG_TO_LE(val) ((glong) GINT64_TO_LE (val))
#define __USE_XOPEN2K8 1
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define __USE_MISC 1
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define __UQUAD_TYPE unsigned long int
#define FIELD_TYPE_NEWDECIMAL MYSQL_TYPE_NEWDECIMAL
#define G_VARIANT_TYPE_MAYBE ((const GVariantType *) "m*")
#define G_DEFINE_AUTO_CLEANUP_CLEAR_FUNC(TypeName,func) G_GNUC_BEGIN_IGNORE_DEPRECATIONS static G_GNUC_UNUSED inline void _GLIB_AUTO_FUNC_NAME(TypeName) (TypeName *_ptr) { (func) (_ptr); } G_GNUC_END_IGNORE_DEPRECATIONS
#define __ULONG32_TYPE unsigned int
#define g_htons(val) (GUINT16_TO_BE (val))
#define LINE_MAX _POSIX2_LINE_MAX
#define EREMOTEIO 121
#define __STRING(x) #x
#define GLIB_DEPRECATED_IN_2_70_FOR(f) GLIB_DEPRECATED_FOR(f)
#define SIGVTALRM 26
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define g_atomic_int_inc(atomic) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ *(atomic) : 1); (void) __atomic_fetch_add ((atomic), 1, __ATOMIC_SEQ_CST); }))
#define G_CONVERT_ERROR g_convert_error_quark()
#define __INO_T_TYPE __ULONGWORD_TYPE
#define g_atomic_rc_box_acquire(mem_block) ((glib_typeof (mem_block)) (g_atomic_rc_box_acquire) (mem_block))
#define GSSIZE_FROM_BE(val) (GSSIZE_TO_BE (val))
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define g_test_trap_assert_stdout(soutpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 2, soutpattern)
#define F_ULOCK 0
#define G_IEEE754_DOUBLE_BIAS (1023)
#define mysql_library_end mysql_server_end
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define g_node_append_data(parent,data) g_node_insert_before ((parent), NULL, g_node_new (data))
#define __struct_tm_defined 1
#define _SC_TRACE _SC_TRACE
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define EBADFD 77
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SC_FSYNC _SC_FSYNC
#define __G_BOOKMARK_FILE_H__ 
#define FPE_INTOVF FPE_INTOVF
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define g_try_new(struct_type,n_structs) _G_NEW (struct_type, n_structs, try_malloc)
#define PCRE_ERROR_BADENDIANNESS (-29)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#define GLIB_DEPRECATED_ENUMERATOR_FOR(f) G_DEPRECATED_FOR(f)
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define CR_SERVER_GONE_ERROR 2006
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define CLIENT_ZSTD_COMPRESSION_ALGORITHM (1UL << 26)
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define PCRE_UTF8_ERR12 12
#define __nlink_t_defined 
#define CR_ERROR_LAST 2073
#define PCRE_EXTRA 0x00000040
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define FIELD_TYPE_LONGLONG MYSQL_TYPE_LONGLONG
#define G_VARIANT_BUILDER_INIT(variant_type) { { { 2942751021u , variant_type, { 0, } } } }
#define GLIB_DEPRECATED_MACRO_IN_2_50_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define _SYS_SIZE_T_H 
#define INT32_MAX (2147483647)
#define __USE_ATFILE 1
#define G_VARIANT_TYPE_BYTE ((const GVariantType *) "y")
#define G_STRINGIFY(macro_or_string) G_STRINGIFY_ARG (macro_or_string)
#define EOWNERDEAD 130
#define si_pkey _sifields._sigfault._bounds._pkey
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define __bitwise__ 
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define __glibc_macro_warning1(message) _Pragma (#message)
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define __STDC_IEC_559_COMPLEX__ 1
#define FIELD_TYPE_DATETIME MYSQL_TYPE_DATETIME
#define CLOCK_REALTIME 0
#define g_test_trap_assert_failed() g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 1, 0)
#define CR_OUT_OF_MEMORY 2008
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define CR_SOCKET_CREATE_ERROR 2001
#define __G_COMPLETION_H__ 
#define __FLT128_DIG__ 33
#define __SCHAR_WIDTH__ 8
#define NULL_LENGTH ((unsigned long)~0)
#define MYSQL_COMPILATION_COMMENT_SERVER "(Ubuntu)"
#define __FLT32_MAX_10_EXP__ 38
#define _GLIB_AUTOPTR_TYPENAME(TypeName) TypeName ##_autoptr
#define GULONG_TO_BE(val) ((gulong) GUINT64_TO_BE (val))
#define FIELD_IS_INVISIBLE (1 << 30)
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define GLIB_DEPRECATED_MACRO_IN_2_36_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define GSSIZE_FROM_LE(val) (GSSIZE_TO_LE (val))
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define G_OS_INFO_KEY_VERSION_CODENAME GLIB_AVAILABLE_MACRO_IN_2_64 "VERSION_CODENAME"
#define __INT_FAST32_TYPE__ long int
#define MYSQL_CONFIG_NAME "my"
#define __G_ENVIRON_H__ 
#define bool _Bool
#define G_GNUC_DEPRECATED_FOR(f) __attribute__((deprecated("Use " #f " instead"))) GLIB_AVAILABLE_MACRO_IN_2_26
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define _mysql_command_h 
#define g_ascii_isalnum(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_ALNUM) != 0)
#define SIG_DFL ((__sighandler_t) 0)
#define CLIENT_LONG_FLAG 4
#define USERNAME_CHAR_LENGTH_STR "32"
#define F_OK 0
#define _PC_PATH_MAX _PC_PATH_MAX
#define __GXX_ABI_VERSION 1016
#define _POSIX_MAX_INPUT 255
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define PCRE_NEWLINE_ANYCRLF 0x00500000
#define GLIB_AVAILABLE_MACRO_IN_2_40 
#define EADDRNOTAVAIL 99
#define ESHUTDOWN 108
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define G_VARIANT_TYPE(type_string) (g_variant_type_checked_ ((type_string)))
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define GUINT32_FROM_BE(val) (GUINT32_TO_BE (val))
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define GLIB_SYSDEF_POLLPRI =2
#define WITH_SSL 
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define G_DEFINE_AUTO_CLEANUP_FREE_FUNC(TypeName,func,none) G_GNUC_BEGIN_IGNORE_DEPRECATIONS static G_GNUC_UNUSED inline void _GLIB_AUTO_FUNC_NAME(TypeName) (TypeName *_ptr) { if (*_ptr != none) (func) (*_ptr); } G_GNUC_END_IGNORE_DEPRECATIONS
#define XATTR_LIST_MAX 65536
#define g_date_julian g_date_get_julian GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_julian)
#define GLIB_AVAILABLE_MACRO_IN_2_48 
#define __FLT64X_DIG__ 33
#define MYSQL_PORT_DEFAULT 0
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define GUINT_FROM_BE(val) (GUINT_TO_BE (val))
#define G_MAXINT8 ((gint8) 0x7f)
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define G_DEPRECATED __attribute__((__deprecated__))
#define G_FILE_ERROR g_file_error_quark ()
#define __ELF__ 1
#define g_hook_append(hook_list,hook) g_hook_insert_before ((hook_list), NULL, (hook))
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define g_assert_error(err,dom,c) G_STMT_START { if (!err || (err)->domain != dom || (err)->code != c) g_assertion_message_error (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #err, err, dom, c); } G_STMT_END
#define G_VARIANT_TYPE_VARDICT ((const GVariantType *) "a{sv}")
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define GLIB_DEPRECATED_IN_2_26_FOR(f) GLIB_DEPRECATED_FOR(f)
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define ELIBSCN 81
#define F_TLOCK 2
#define GLIB_DEPRECATED_TYPE_IN_2_60_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define CONNECT_STRING_MAXLEN 1024
#define __FLT_RADIX__ 2
#define CR_LOCALHOST_CONNECTION 2010
#define MYSQL_PERSIST_CONFIG_NAME "mysqld-auto"
#define FIELD_TYPE_TINY_BLOB MYSQL_TYPE_TINY_BLOB
#define PCRE_UTF8 0x00000800
#define g_main_destroy(loop) g_main_loop_unref(loop) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_unref)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_30 GLIB_DEPRECATED_ENUMERATOR
#define _BITS_TIME64_H 1
#define _G_BOOLEAN_EXPR(expr) G_GNUC_EXTENSION ({ int _g_boolean_var_; if (expr) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; })
#define REFRESH_BINARY_LOG 1024
#define g_date_day g_date_get_day GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_day)
#define __G_SLICE_H__ 
#define __ARM_PCS_AAPCS64 1
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_36 GLIB_DEPRECATED_ENUMERATOR
#define _POSIX_ARG_MAX 4096
#define G_OS_INFO_KEY_BUG_REPORT_URL GLIB_AVAILABLE_MACRO_IN_2_64 "BUG_REPORT_URL"
#define BUS_ADRALN BUS_ADRALN
#define GLIB_DEPRECATED_MACRO_IN_2_58_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define g_ascii_ispunct(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_PUNCT) != 0)
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define UINT_FAST32_MAX (18446744073709551615UL)
#define PCRE_ERROR_NULL (-2)
#define CLOCK_MONOTONIC_RAW 4
#define REFRESH_GENERAL_LOG 4096
#define G_NODE_IS_LEAF(node) (((GNode*) (node))->children == NULL)
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define GLIB_AVAILABLE_TYPE_IN_2_58 
#define GLIB_DEPRECATED_IN_2_26 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_28 GLIB_DEPRECATED
#define INTMAX_C(c) c ## L
#define __f32(x) x ##f32
#define FLT_ROUNDS 1
#define G_GNUC_NO_INSTRUMENT __attribute__ ((__no_instrument_function__))
#define GUINT32_FROM_LE(val) (GUINT32_TO_LE (val))
#define _BITS_SIGSTACK_H 1
#define _POSIX_TIMEOUTS 200809L
#define GLIB_DEPRECATED_IN_2_30 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_32 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_34 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_36 GLIB_DEPRECATED
#define __FLT_DIG__ 6
#define GLIB_DEPRECATED_IN_2_38 GLIB_DEPRECATED
#define EOVERFLOW 75
#define SIGPIPE 13
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define G_SOURCE_FUNC(f) ((GSourceFunc) (void (*)(void)) (f)) GLIB_AVAILABLE_MACRO_IN_2_58
#define DBL_MAX __DBL_MAX__
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SI_ALIGNMENT 
#define __SIZEOF_PTHREAD_COND_T 48
#define GLIB_DEPRECATED_IN_2_40 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_42 GLIB_DEPRECATED
#define _WCHAR_T_H 
#define GLIB_DEPRECATED_IN_2_44 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_46 GLIB_DEPRECATED
#define SEEK_SET 0
#define GUINT_FROM_LE(val) (GUINT_TO_LE (val))
#define GLIB_DEPRECATED_IN_2_50 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_52 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_54 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_58 GLIB_DEPRECATED
#define IS_PRI_KEY(n) ((n)&PRI_KEY_FLAG)
#define __f64(x) x ##f64
#define PCRE_ERROR_DFA_RECURSE (-20)
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define __G_MAIN_H__ 
#define GLIB_DEPRECATED_IN_2_60 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_62 GLIB_DEPRECATED
#define _GLIB_AUTO_FUNC_NAME(TypeName) glib_auto_cleanup_ ##TypeName
#define GLIB_DEPRECATED_IN_2_64 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_66 GLIB_DEPRECATED
#define __FLT32X_MANT_DIG__ 53
#define GLIB_DEPRECATED_IN_2_68 GLIB_DEPRECATED
#define CLOCK_TAI 11
#define g_atomic_int_xor(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (val) : 1); (guint) __atomic_fetch_xor ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define NOT_NULL_FLAG 1
#define EUCLEAN 117
#define _POSIX_IPV6 200809L
#define GLIB_DEPRECATED_IN_2_70 GLIB_DEPRECATED
#define GLIB_DEPRECATED_IN_2_72 GLIB_DEPRECATED
#define _SIGNAL_H 
#define mysql_end_client_plugin }
#define _GCC_LIMITS_H_ 
#define G_LOCK_NAME(name) g__ ## name ## _lock
#define GLIB_DEPRECATED_IN_2_48_FOR(f) GLIB_DEPRECATED_FOR(f)
#define _SIZE_T_ 
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define __FLT16_IS_IEC_60559__ 2
#define __FLT16_MAX_EXP__ 16
#define __G_BASE64_H__ 
#define EPROTO 71
#define ENODEV 19
#define POLL_OUT POLL_OUT
#define G_BEGIN_DECLS 
#define __stub_revoke 
#define INT_MAX __INT_MAX__
#define __stub___compat_create_module 
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define LDBL_MIN __LDBL_MIN__
#define GUINT64_FROM_BE(val) (GUINT64_TO_BE (val))
#define __G_UNICODE_H__ 
#define g_atomic_int_and(atomic,val) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gint)); (void) (0 ? *(atomic) ^ (val) : 1); (guint) __atomic_fetch_and ((atomic), (val), __ATOMIC_SEQ_CST); }))
#define _POSIX_MONOTONIC_CLOCK 0
#define PCRE_NO_AUTO_POSSESS 0x00020000
#define EKEYEXPIRED 127
#define CLIENT_COMPRESS 32
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define DBL_MIN __DBL_MIN__
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __USE_ISOC95 1
#define G_KEY_FILE_DESKTOP_KEY_TRY_EXEC "TryExec"
#define MINSIGSTKSZ 5120
#define g_array_append_val(a,v) g_array_append_vals (a, &(v), 1)
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define DT_REG DT_REG
#define __FLT_HAS_QUIET_NAN__ 1
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define g_date_year g_date_get_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_year)
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define CR_INVALID_FACTOR_NO 2072
#define PCRE_UTF16_ERR0 0
#define PCRE_UTF16_ERR2 2
#define PCRE_UTF16_ERR3 3
#define __USE_ISOC99 1
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO _PC_SYNC_IO
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define EHWPOISON 133
#define __FLT_HAS_INFINITY__ 1
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define USE_HEARTBEAT_EVENT_V2 (1 << 1)
#define _BSD_PTRDIFF_T_ 
#define SIGXFSZ 25
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define _XOPEN_LEGACY 1
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define g_uint64_checked_mul(dest,a,b) (!__builtin_mul_overflow(a, b, dest))
#define PCRE_NO_UTF16_CHECK 0x00002000
#define __INT_FAST32_WIDTH__ 64
#define NULL ((void *)0)
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define CR_NO_PREPARE_STMT 2030
#define __CHAR16_TYPE__ short unsigned int
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define PCRE_UTF8_ERR20 20
#define GROUP_FLAG 32768
#define __W_CONTINUED 0xffff
#define __SIZE_WIDTH__ 64
#define g_warn_if_reached() do { g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, NULL); } while (0)
#define MAX_BIGINT_WIDTH 20
#define INT_MIN (-INT_MAX - 1)
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define CLIENT_RESERVED2 32768
#define _DIRENT_HAVE_D_TYPE 
#define ENOMEDIUM 123
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_48 GLIB_DEPRECATED_ENUMERATOR
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define EL3RST 47
#define FIELD_TYPE_CHAR MYSQL_TYPE_TINY
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define REFRESH_REPLICA 64
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define G_OS_INFO_KEY_PRETTY_NAME GLIB_AVAILABLE_MACRO_IN_2_64 "PRETTY_NAME"
#define SI_TKILL SI_TKILL
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define g_ascii_isgraph(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_GRAPH) != 0)
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define PCRE_INFO_OKPARTIAL 12
#define CR_SHARED_MEMORY_CONNECT_FILE_MAP_ERROR 2040
#define GUINT64_FROM_LE(val) (GUINT64_TO_LE (val))
#define __STDC_VERSION__ 201710L
#define PCRE_UTF8_ERR0 0
#define PCRE_UTF8_ERR1 1
#define PCRE_UTF8_ERR2 2
#define PCRE_UTF8_ERR3 3
#define PCRE_UTF8_ERR5 5
#define PCRE_UTF8_ERR6 6
#define PCRE_UTF8_ERR7 7
#define PCRE_UTF8_ERR8 8
#define PCRE_UTF8_ERR9 9
#define g_once_init_leave(location,result) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(location) == sizeof (gpointer)); 0 ? (void) (*(location) = (result)) : (void) 0; g_once_init_leave ((location), (gsize) (result)); }))
#define ENOTDIR 20
#define __ARM_ARCH 8
#define g_dataset_remove_data(l,k) g_dataset_id_set_data ((l), g_quark_try_string (k), NULL)
#define __PMT(args) args
#define g_list_free1 g_list_free_1
#define _SYS_TYPES_H 1
#define mysql_declare_client_plugin(X) MYSQL_PLUGIN_EXPORT st_mysql_client_plugin_ ##X _mysql_client_plugin_declaration_ = { MYSQL_CLIENT_ ##X ##_PLUGIN, MYSQL_CLIENT_ ##X ##_PLUGIN_INTERFACE_VERSION,
#define GLIB_AVAILABLE_IN_2_30 _GLIB_EXTERN
#define g_clear_pointer(pp,destroy) G_STMT_START { G_STATIC_ASSERT (sizeof *(pp) == sizeof (gpointer)); glib_typeof ((pp)) _pp = (pp); glib_typeof (*(pp)) _ptr = *_pp; *_pp = NULL; if (_ptr) (destroy) (_ptr); } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_34
#define _LINUX_LIMITS_H 
#define NAME_LEN (NAME_CHAR_LEN * SYSTEM_CHARSET_MBMAXLEN)
#define g_atomic_pointer_get(atomic) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); glib_typeof (*(atomic)) gapg_temp_newval; glib_typeof ((atomic)) gapg_temp_atomic = (atomic); __atomic_load (gapg_temp_atomic, &gapg_temp_newval, __ATOMIC_SEQ_CST); gapg_temp_newval; }))
#define SIGSTOP 19
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define ENXIO 6
#define CLOCK_MONOTONIC 1
#define SIGALRM 14
#define __FLT64_HAS_QUIET_NAN__ 1
#define G_DEBUG_HERE() g_log_structured (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, "CODE_FILE", __FILE__, "CODE_LINE", G_STRINGIFY (__LINE__), "CODE_FUNC", G_STRFUNC, "MESSAGE", "%" G_GINT64_FORMAT ": %s", g_get_monotonic_time (), G_STRLOC)
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define LDBL_EPSILON __LDBL_EPSILON__
#define GLIB_DEPRECATED_MACRO_IN_2_34_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define _SC_STREAMS _SC_STREAMS
#define __G_ERROR_H__ 
#define EBADRQC 56
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_48_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define LOCAL_HOST_NAMEDPIPE "."
#define g_chunk_new(type,chunk) ((type *) g_mem_chunk_alloc (chunk))
#define PCRE_EXTRA_EXECUTABLE_JIT 0x0040
#define L_XTND SEEK_END
#define NO_DEFAULT_VALUE_FLAG 4096
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define __KEY_T_TYPE __S32_TYPE
#define __SVE_VQ_MAX 512
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define G_SEARCHPATH_SEPARATOR ':'
#define G_VARIANT_TYPE_TUPLE ((const GVariantType *) "r")
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define __G_CHARSET_H__ 
#define __G_PATTERN_H__ 
#define GLIB_DEPRECATED_TYPE_IN_2_38_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define ___int_ptrdiff_t_h 
#define CR_WRONG_HOST_INFO 2009
#define __stub___compat_get_kernel_syms 
#define PCRE_EXTRA_MARK 0x0020
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define G_GNUC_NORETURN __attribute__ ((__noreturn__))
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define ENOCSI 50
#define PCRE_NO_UTF8_CHECK 0x00002000
#define false 0
#define POLL_HUP POLL_HUP
#define _STRING_H 1
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define WSTOPPED 2
#define GLIB_AVAILABLE_MACRO_IN_2_68 
#define _XOPEN_REALTIME 1
#define g_scanner_freeze_symbol_table(scanner) ((void)0) GLIB_DEPRECATED_MACRO_IN_2_26
#define G_GNUC_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define g_dataset_set_data_full(l,k,d,f) g_dataset_id_set_data_full ((l), g_quark_from_string (k), (d), (f))
#define FILENAME_MAX 4096
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define __ino_t_defined 
#define __CLOCKID_T_TYPE __S32_TYPE
#define G_N_ELEMENTS(arr) (sizeof (arr) / sizeof ((arr)[0]))
#define __G_SHELL_H__ 
#define FALSE (0)
#define GUINT64_SWAP_LE_BE(val) ((guint64) __builtin_bswap64 ((guint64) (val)))
#define g_auto(TypeName) _GLIB_CLEANUP(_GLIB_AUTO_FUNC_NAME(TypeName)) TypeName
#define g_test_rand_bit() (0 != (g_test_rand_int() & (1 << 15)))
#define _POSIX_MEMLOCK_RANGE 200809L
#define _GLIB_DEFINE_AUTOPTR_CLEANUP_FUNCS(TypeName,ParentName,cleanup) typedef TypeName *_GLIB_AUTOPTR_TYPENAME(TypeName); typedef GList *_GLIB_AUTOPTR_LIST_TYPENAME(TypeName); typedef GSList *_GLIB_AUTOPTR_SLIST_TYPENAME(TypeName); typedef GQueue *_GLIB_AUTOPTR_QUEUE_TYPENAME(TypeName); G_GNUC_BEGIN_IGNORE_DEPRECATIONS static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_CLEAR_FUNC_NAME(TypeName) (TypeName *_ptr) { if (_ptr) (cleanup) ((ParentName *) _ptr); } static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_FUNC_NAME(TypeName) (TypeName **_ptr) { _GLIB_AUTOPTR_CLEAR_FUNC_NAME(TypeName) (*_ptr); } static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_LIST_FUNC_NAME(TypeName) (GList **_l) { g_list_free_full (*_l, (GDestroyNotify) (void(*)(void)) cleanup); } static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_SLIST_FUNC_NAME(TypeName) (GSList **_l) { g_slist_free_full (*_l, (GDestroyNotify) (void(*)(void)) cleanup); } static G_GNUC_UNUSED inline void _GLIB_AUTOPTR_QUEUE_FUNC_NAME(TypeName) (GQueue **_q) { if (*_q) g_queue_free_full (*_q, (GDestroyNotify) (void(*)(void)) cleanup); } G_GNUC_END_IGNORE_DEPRECATIONS
#define G_GUINTPTR_FORMAT "lu"
#define ELIBEXEC 83
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define _POSIX_MQ_OPEN_MAX 8
#define __INT_FAST64_WIDTH__ 64
#define __ARM_FEATURE_UNALIGNED 1
#define __SVE_VQ_MIN 1
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_50 GLIB_DEPRECATED_ENUMERATOR
#define SI_ASYNCIO SI_ASYNCIO
#define __BYTE_ORDER __LITTLE_ENDIAN
#define CLIENT_IGNORE_SPACE 256
#define REFRESH_SLOW_LOG 8192
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_52 GLIB_DEPRECATED_ENUMERATOR
#define g_datalist_remove_data(dl,k) g_datalist_id_set_data ((dl), g_quark_try_string (k), NULL)
#define TTY_NAME_MAX 32
#define ETIME 62
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define IS_BLOB(n) ((n)&BLOB_FLAG)
#define __FSID_T_TYPE struct { int __val[2]; }
#define UNSIGNED_FLAG 32
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __G_STRFUNCS_H__ 
#define GLIB_DEPRECATED_MACRO_IN_2_56_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define g_ATEXIT(proc) (atexit (proc)) GLIB_DEPRECATED_MACRO_IN_2_32
#define G_STATIC_PRIVATE_INIT { 0 } GLIB_DEPRECATED_MACRO_IN_2_32_FOR(G_PRIVATE_INIT)
#define INT_FAST32_MAX (9223372036854775807L)
#define PCRE_ERROR_DFA_UMLIMIT (-18)
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define PCRE_INFO_FIRSTCHARACTERFLAGS 20
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define __G_FILEUTILS_H__ 
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define __UINT_FAST64_TYPE__ long unsigned int
#define __G_DATE_TIME_H__ 
#define G_ATOMIC_LOCK_FREE 
#define GLIB_UNAVAILABLE_MACRO(maj,min) _GLIB_GNUC_DO_PRAGMA(GCC warning G_STRINGIFY (Not available before maj.min))
#define _G_RENEW(struct_type,mem,n_structs,func) (struct_type *) (G_GNUC_EXTENSION ({ gsize __n = (gsize) (n_structs); gsize __s = sizeof (struct_type); gpointer __p = (gpointer) (mem); if (__s == 1) __p = g_ ##func (__p, __n); else if (__builtin_constant_p (__n) && (__s == 0 || __n <= G_MAXSIZE / __s)) __p = g_ ##func (__p, __n * __s); else __p = g_ ##func ##_n (__p, __n, __s); __p; }))
#define CR_AUTH_PLUGIN_ERROR 3
#define __LDBL_REDIR_DECL(name) 
#define G_LIKELY(expr) (__builtin_expect (_G_BOOLEAN_EXPR(expr), 1))
#define __INT_MAX__ 0x7fffffff
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define INT8_MIN (-128)
#define si_band _sifields._sigpoll.si_band
#define g_ascii_iscntrl(c) ((g_ascii_table[(guchar) (c)] & G_ASCII_CNTRL) != 0)
#define UINT8_MAX (255)
#define DBL_MAX_EXP __DBL_MAX_EXP__
#define GINT16_TO_LE(val) ((gint16) (val))
#define STDIN_FILENO 0
#define SI_ASYNCNL SI_ASYNCNL
#define PCRE_ERROR_BADUTF32 (-10)
#define GLIB_DEPRECATED_TYPE_IN_2_54_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define _T_SIZE_ 
#define EBADR 53
#define __G_STRING_H__ 
#define LLONG_MAX __LONG_LONG_MAX__
#define ENOTRECOVERABLE 131
#define UINT_FAST8_MAX (255)
#define PROXY_FLAG 0
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define CR_NULL_POINTER 2029
#define G_VARIANT_TYPE_ARRAY ((const GVariantType *) "a*")
#define __WNOTHREAD 0x20000000
#define PCRE_ERROR_NOSUBSTRING (-7)
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define __INT64_TYPE__ long int
#define EIO 5
#define CLOCK_PROCESS_CPUTIME_ID 2
#define MYSQL_COMPILATION_COMMENT "(Ubuntu)"
#define G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS "!$&'()*+,;="
#define ITIMER_REAL ITIMER_REAL
#define FLT_MAX_EXP __FLT_MAX_EXP__
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define ENETUNREACH 101
#define EXDEV 18
#define GLIB_DEPRECATED_MACRO _GLIB_GNUC_DO_PRAGMA(GCC warning "Deprecated pre-processor symbol")
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define UINT32_C(c) c ## U
#define _POSIX_SYMLINK_MAX 255
#define G_ONCE_INIT { G_ONCE_STATUS_NOTCALLED, NULL }
#define ABS(a) (((a) < 0) ? -(a) : (a))
#define FIELD_IN_PART_FUNC_FLAG (1 << 19)
#define __INO64_T_TYPE __UQUAD_TYPE
#define G_HAVE_GNUC_VISIBILITY 1
#define _GLIB_AUTOPTR_SLIST_TYPENAME(TypeName) TypeName ##_slistautoptr
#define GLIB_DEPRECATED_IN_2_46_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __G_VARIANT_H__ 
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __UINT32_C(c) c ## U
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _POSIX_TRACE -1
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __GLIBCONFIG_H__ 
#define __WINT_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define STDOUT_FILENO 1
#define SEM_VALUE_MAX (2147483647)
#define G_KEY_FILE_DESKTOP_KEY_EXEC "Exec"
#define __intptr_t_defined 
#define g_test_trap_assert_stdout_unmatched(soutpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 3, soutpattern)
#define CR_INVALID_BUFFER_USE 2035
#define CLIENT_MULTI_RESULTS (1UL << 17)
#define PRI_KEY_FLAG 2
#define _BITS_STDINT_UINTN_H 1
#define CR_INVALID_CONN_HANDLE 2048
#define SIGPOLL 29
#define GLIB_AVAILABLE_MACRO_IN_2_70 
#define MYSQL_ADMIN_PORT 33062
#define F_LOCK 1
#define __G_TEST_UTILS_H__ 
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define g_clear_list(list_ptr,destroy) G_STMT_START { GList *_list; _list = *(list_ptr); if (_list) { *list_ptr = NULL; if ((destroy) != NULL) g_list_free_full (_list, (destroy)); else g_list_free (_list); } } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_64
#define ENOSPC 28
#define ENOEXEC 8
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define g_date_sunday_week_of_year g_date_get_sunday_week_of_year GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_sunday_week_of_year)
#define EOF (-1)
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define BINCMP_FLAG 131072
#define PROTOCOL_VERSION 10
#define G_MARKUP_ERROR g_markup_error_quark ()
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define GINT_TO_POINTER(i) ((gpointer) (glong) (i))
#define sched_priority sched_priority
#define PCRE_STUDY_JIT_PARTIAL_HARD_COMPILE 0x0004
#define GLIB_DEPRECATED_FOR(f) G_DEPRECATED_FOR(f) _GLIB_EXTERN
#define g_dataset_set_data(l,k,d) g_dataset_set_data_full ((l), (k), (d), NULL)
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __LDBL_MAX_10_EXP__ 4932
#define _POSIX_SEMAPHORES 200809L
#define G_VARIANT_TYPE_OBJECT_PATH ((const GVariantType *) "o")
#define __ATOMIC_RELAXED 0
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __G_TIME_ZONE_H__ 
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define SA_ONESHOT SA_RESETHAND
#define L_SET SEEK_SET
#define CR_AUTH_PLUGIN_CANNOT_LOAD 2059
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define EDOM 33
#define XATTR_NAME_MAX 255
#define ENOSTR 60
#define MY_COMPRESS_INCLUDED 
#define _LIBC_LIMITS_H_ 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define __G_GETTEXT_H__ 
#define SIGKILL 9
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define ESRCH 3
#define __INT_LEAST32_TYPE__ int
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define ECHRNG 44
#define _SC_REGEXP _SC_REGEXP
#define MYSQL_SERVER_SUFFIX_DEF "-0ubuntu0.22.04.1"
#define _LFS_LARGEFILE 1
#define __wchar_t__ 
#define SEEK_END 2
#define SESSION_TRACK_BEGIN SESSION_TRACK_SYSTEM_VARIABLES
#define PCRE_CONFIG_NEWLINE 1
#define _POSIX2_LINE_MAX 2048
#define PCRE_INFO_SIZE 1
#define ENFILE 23
#define g_node_append(parent,node) g_node_insert_before ((parent), NULL, (node))
#define G_URI_ERROR (g_uri_error_quark ()) GLIB_AVAILABLE_MACRO_IN_2_66
#define g_rc_box_new0(type) ((type *) g_rc_box_alloc0 (sizeof (type)))
#define _GLIB_AUTOPTR_FUNC_NAME(TypeName) glib_autoptr_cleanup_ ##TypeName
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define GLIB_DEPRECATED_IN_2_68_FOR(f) GLIB_DEPRECATED_FOR(f)
#define G_SQRT2 1.4142135623730950488016887242096980785696718753769
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define be64toh(x) __bswap_64 (x)
#define g_slice_free(type,mem) G_STMT_START { if (1) g_slice_free1 (sizeof (type), (mem)); else (void) ((type*) 0 == (mem)); } G_STMT_END
#define ENOSYS 38
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define SA_RESTART 0x10000000
#define DT_DIR DT_DIR
#define PCRE_UTF32 0x00000800
#define __INT_FAST8_TYPE__ signed char
#define EMEDIUMTYPE 124
#define CHARCLASS_NAME_MAX 2048
#define __G_STRVBUILDER_H__ 
#define CR_AUTH_HANDSHAKE 2
#define FIELD_TYPE_BIT MYSQL_TYPE_BIT
#define va_arg(v,l) __builtin_va_arg(v,l)
#define _THREAD_SHARED_TYPES_H 1
#define __f128(x) x ##f128
#define g_chunk_free(mem,mem_chunk) (g_mem_chunk_free (mem_chunk, mem))
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define _POSIX_SAVED_IDS 1
#define G_PRIORITY_LOW 300
#define PCRE_SPTR const char *
#define __HAVE_DISTINCT_FLOAT32 0
#define ENOTSUP EOPNOTSUPP
#define __kernel_old_uid_t __kernel_old_uid_t
#define __FP_FAST_FMAF32x 1
#define R_OK 4
#define _BITS_SIGTHREAD_H 1
#define GLIB_DEPRECATED_MACRO_IN_2_32_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define EDEADLOCK EDEADLK
#define CLD_DUMPED CLD_DUMPED
#define GSIZE_TO_BE(val) ((gsize) GUINT64_TO_BE (val))
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define USERNAME_LENGTH (USERNAME_CHAR_LENGTH * SYSTEM_CHARSET_MBMAXLEN)
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define CR_NOT_IMPLEMENTED 2054
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define G_HAVE_ISO_VARARGS 1
#define GLIB_DEPRECATED_MACRO_IN_2_60 GLIB_DEPRECATED_MACRO
#define g_assert_cmpuint(n1,cmp,n2) G_STMT_START { guint64 __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'i'); } G_STMT_END
#define CR_SERVER_HANDSHAKE_ERR 2012
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define G_HOOK_IN_CALL(hook) ((G_HOOK_FLAGS (hook) & G_HOOK_FLAG_IN_CALL) != 0)
#define FOPEN_MAX 16
#define G_TRYLOCK(name) g_mutex_trylock (&G_LOCK_NAME (name))
#define SIGFPE 8
#define GLIB_DEPRECATED_TYPE_IN_2_36_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define __off_t_defined 
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define g_assert_no_errno(expr) G_STMT_START { int __ret, __errsv; errno = 0; __ret = expr; __errsv = errno; if (__ret < 0) { gchar *__msg; __msg = g_strdup_printf ("assertion failed (" #expr " >= 0): errno %i: %s", __errsv, g_strerror (__errsv)); g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, __msg); g_free (__msg); } } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_66
#define mysql_reload(mysql) mysql_refresh((mysql), REFRESH_GRANT)
#define G_THREAD_ERROR g_thread_error_quark ()
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define unix 1
#define SIGPWR 30
#define _BITS_TYPESIZES_H 1
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define _GCC_SIZE_T 
#define PCRE_ERROR_NOMATCH (-1)
#define GINT64_TO_LE(val) ((gint64) (val))
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define __U64_TYPE unsigned long int
#define MYSQL_CLIENT_MAX_PLUGINS 4
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _XOPEN_XCU_VERSION 4
#define _POSIX_V6_ILP32_OFFBIG -1
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define G_KEY_FILE_DESKTOP_KEY_COMMENT "Comment"
#define REFRESH_GRANT 1
#define CR_TCP_CONNECTION 2011
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define CR_SHARED_MEMORY_CONNECT_REQUEST_ERROR 2038
#define PCRE_NO_AUTO_CAPTURE 0x00001000
#define G_GNUC_MAY_ALIAS __attribute__((may_alias))
#define __TIME64_T_TYPE __TIME_T_TYPE
#define _POSIX_BARRIERS 200809L
#define __ONCE_FLAG_INIT { 0 }
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define sigcontext_struct sigcontext
#define g_warning(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_WARNING, __VA_ARGS__)
#define CLIENT_CONNECT_ATTRS (1UL << 20)
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define __LONG_WIDTH__ 64
#define __STDLIB_MB_LEN_MAX 16
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define SIG_ERR ((__sighandler_t) -1)
#define __G_BACKTRACE_H__ 
#define GLIB_DEPRECATED_TYPE_IN_2_72_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define ON_UPDATE_NOW_FLAG 8192
#define G_LITTLE_ENDIAN 1234
#define FPE_FLTRES FPE_FLTRES
#define PCRE_INFO_MINLENGTH 15
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 92
#define G_PRIORITY_DEFAULT_IDLE 200
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_70 GLIB_DEPRECATED_ENUMERATOR
#define TABLE_PARTITION_COMMENT_MAXLEN 1024
#define WINT_MAX (4294967295u)
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_72 GLIB_DEPRECATED_ENUMERATOR
#define __GLIBC_USE_IEC_60559_EXT 0
#define GSIZE_TO_LE(val) ((gsize) GUINT64_TO_LE (val))
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define FIELD_TYPE_GEOMETRY MYSQL_TYPE_GEOMETRY
#define UINT_LEAST32_MAX (4294967295U)
#define EMFILE 24
#define GLIB_DEPRECATED_MACRO_IN_2_54_FOR(f) GLIB_DEPRECATED_MACRO_FOR(f)
#define PCRE_UCHAR16 unsigned short
#define CR_STMT_CLOSED 2056
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_68_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __fsblkcnt_t_defined 
#define SA_NODEFER 0x40000000
#define g_warning_once(...) G_STMT_START { static int G_PASTE (_GWarningOnceBoolean, __LINE__) = 0; if (g_atomic_int_compare_and_exchange (&G_PASTE (_GWarningOnceBoolean, __LINE__), 0, 1)) g_warning (__VA_ARGS__); } G_STMT_END GLIB_AVAILABLE_MACRO_IN_2_64
#define __lldiv_t_defined 1
#define POLL_PRI POLL_PRI
#define PCRE_ERROR_BADPARTIAL (-13)
#define SIGILL 4
#define g_atomic_pointer_or(atomic,val) (G_GNUC_EXTENSION ({ gsize *gapo_atomic = (gsize *) (atomic); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gpointer)); G_STATIC_ASSERT (sizeof *(atomic) == sizeof (gsize)); (void) (0 ? (gpointer) *(atomic) : NULL); (void) (0 ? (val) ^ (val) : 1); (gsize) __atomic_fetch_or (gapo_atomic, (val), __ATOMIC_SEQ_CST); }))
#define CR_PROBE_SLAVE_HOSTS 2023
#define __STRINGS_FORTIFIED 1
#define PCRE_CONFIG_UTF8 0
#define PCRE_UCHAR32 unsigned int
#define ENOBUFS 105
#define g_assert_cmphex(n1,cmp,n2) G_STMT_START { guint64 __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'x'); } G_STMT_END
#define __time_t_defined 1
#define _SC_INT_MIN _SC_INT_MIN
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define PCRE_ERROR_JIT_STACKLIMIT (-27)
#define PCRE_PARTIAL 0x00008000
#define PCRE_INFO_STUDYSIZE 10
#define GLIB_DEPRECATED_TYPE_IN_2_58_FOR(f) GLIB_DEPRECATED_TYPE_FOR(f)
#define GLIB_SYSDEF_MSG_DONTROUTE 4
#define __INTMAX_TYPE__ long int
#define SIGINT 2
#define EFAULT 14
#define g_dataset_id_remove_data(l,k) g_dataset_id_set_data ((l), (k), NULL)
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define g_test_thorough() (!g_test_config_vars->test_quick)
#define GLIB_AVAILABLE_STATIC_INLINE_IN_2_68 
#define PCRE_UTF16_ERR4 4
#define EWOULDBLOCK EAGAIN
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define GLIB_VERSION_MAX_ALLOWED (GLIB_VERSION_CUR_STABLE)
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define __ATOMIC_CONSUME 1
#define sigev_notify_function _sigev_un._sigev_thread._function
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define GLIB_DEPRECATED_TYPE_IN_2_72 GLIB_DEPRECATED_TYPE
#define G_OPTION_ENTRY_NULL GLIB_AVAILABLE_MACRO_IN_2_70 { NULL, 0, 0, 0, NULL, NULL, NULL }
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define ILL_PRVOPC ILL_PRVOPC
#define _STDINT_H 1
#define __FILE_defined 1
#define G_UNLOCK(name) g_mutex_unlock (&G_LOCK_NAME (name))
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define __CPU_SETSIZE 1024
#define FILENAME_CHARSET_MBMAXLEN 5
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define _DIRENT_H 1
#define g_thread_supported() (1) GLIB_DEPRECATED_MACRO_IN_2_32
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define FIELD_TYPE_FLOAT MYSQL_TYPE_FLOAT
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define _GETOPT_CORE_H 1
#define G_DEFINE_AUTOPTR_CLEANUP_FUNC(TypeName,func) _GLIB_DEFINE_AUTOPTR_CLEANUP_FUNCS(TypeName, TypeName, func)
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define ELIBMAX 82
#define G_GNUC_PRETTY_FUNCTION "" GLIB_DEPRECATED_MACRO_IN_2_26_FOR(G_STRFUNC)
#define g_main_run(loop) g_main_loop_run(loop) GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_main_loop_run)
#define GINT16_FROM_BE(val) (GINT16_TO_BE (val))
#define UDF_REGISTRATION_TYPES_H 
#define __clockid_t_defined 1
#define __size_t 
#define __ATOMIC_SEQ_CST 5
#define _BITS_SIGACTION_H 1
#define __UINT8_TYPE__ unsigned char
#define UNIQUE_KEY_FLAG 4
#define g_try_new0(struct_type,n_structs) _G_NEW (struct_type, n_structs, try_malloc0)
#define __G_HASH_H__ 
#define ENOENT 2
#define LDBL_DIG __LDBL_DIG__
#define __G_SEQUENCE_H__ 
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define MYSQL_DATA_TRUNCATED 101
#define g_date_weekday g_date_get_weekday GLIB_DEPRECATED_MACRO_IN_2_26_FOR(g_date_get_weekday)
#define __G_HMAC_H__ 
#define PCRE_ERROR_DFA_BADRESTART (-30)
#define REFRESH_MASTER 128
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define __glibc_has_builtin(name) __has_builtin (name)
#define SIGTERM 15
#define G_UNLIKELY(expr) (__builtin_expect (_G_BOOLEAN_EXPR(expr), 0))
#define PTHREAD_KEYS_MAX 1024
#define GLIB_DEPRECATED_ENUMERATOR_IN_2_26_FOR(f) GLIB_DEPRECATED_ENUMERATOR_FOR(f)
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define EBADSLT 57
#define __WCHAR_T__ 
#define G_CSET_a_2_z "abcdefghijklmnopqrstuvwxyz"
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define VERSION "0.13.1-1"
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define __SI_BAND_TYPE long int
#define MYSQL_PLUGIN_EXPORT 
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define _BITS_SIGCONTEXT_H 1
#define __SIZEOF_LONG_LONG__ 8
#define _GLIB_AUTOPTR_QUEUE_FUNC_NAME(TypeName) glib_queueautoptr_cleanup_ ##TypeName
#define EHOSTUNREACH 113
#define SIG_UNBLOCK 1
#define _GCC_PTRDIFF_T 
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define _POSIX_THREAD_KEYS_MAX 128
#define G_BYTE_ORDER G_LITTLE_ENDIAN
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define G_VARIANT_TYPE_BYTESTRING ((const GVariantType *) "ay")
#define __LDBL_DIG__ 33
#define GUINT32_SWAP_LE_PDP(val) ((guint32) ( (((guint32) (val) & (guint32) 0x0000ffffU) << 16) | (((guint32) (val) & (guint32) 0xffff0000U) >> 16)))
#define _SC_NZERO _SC_NZERO
#define GLIB_DEPRECATED_IN_2_66_FOR(f) GLIB_DEPRECATED_FOR(f)
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define INT_FAST8_MAX (127)
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define __POSIX2_THIS_VERSION 200809L
#define __ldiv_t_defined 1
#define CLIENT_RESERVED 16384
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define PCRE_ERROR_BADLENGTH (-32)
#define LDBL_TRUE_MIN __LDBL_DENORM_MIN__
#define g_slice_new(type) ((type*) g_slice_alloc (sizeof (type)))
#define G_OS_INFO_KEY_DOCUMENTATION_URL GLIB_AVAILABLE_MACRO_IN_2_64 "DOCUMENTATION_URL"
#define PCRE_PARTIAL_SOFT 0x00008000
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define _BITS_CPU_SET_H 1
#define FIELD_TYPE_SET MYSQL_TYPE_SET
#define CR_ALREADY_CONNECTED 2058
#define MAX_AUTH_FACTORS 3
#define G_KEY_FILE_DESKTOP_KEY_PATH "Path"
#define __WCHAR_T 
#define FPE_FLTUND FPE_FLTUND
#define FPE_FLTUNK FPE_FLTUNK
#define X_OK 1
#define PCRE_ERROR_DFA_UCOND (-17)
