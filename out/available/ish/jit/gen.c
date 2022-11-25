#define v(op,src,dst,z) v_(op, src, dst,,z)
#define _BITS_SCHED_H 1
#define BTR(bit,val,z) lo(btr, val, bit, z)
#define BTS(bit,val,z) lo(bts, val, bit, z)
#define SI_TIMER SI_TIMER
#define __SSP_STRONG__ 3
#define __attr_access(x) __attribute__ ((__access__ x))
#define __DBL_MIN_EXP__ (-1021)
#define si_timerid _sifields._timer.si_tid
#define BUS_ADRALN BUS_ADRALN
#define FDIVR(src,dst) hhh(fpu_divr, src, dst)
#define _BITS_SIGEVENT_CONSTS_H 1
#define __LDBL_MANT_DIG__ 113
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define __ARM_SIZEOF_WCHAR_T 4
#define __DBL_DECIMAL_DIG__ 17
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define atomic_flag_test_and_set_explicit(PTR,MO) __atomic_test_and_set ((PTR), (MO))
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define __ASM_SIGCONTEXT_H 
#define sa_sigaction __sigaction_handler.sa_sigaction
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __GCC_IEC_559_COMPLEX 2
#define __GNUC_VA_LIST 
#define atomic_is_lock_free(OBJ) __atomic_is_lock_free (sizeof (*(OBJ)), (OBJ))
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define atomic_flag_clear_explicit(PTR,MO) __atomic_clear ((PTR), (MO))
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define si_fd _sifields._sigpoll.si_fd
#define __UINT_LEAST8_TYPE__ unsigned char
#define _T_WCHAR_ 
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define INT_LEAST16_MIN (-32767-1)
#define FRESTORE(val,z) h_write(fpu_restore, z)
#define __CFLOAT64 _Complex _Float64
#define __stub___compat_get_kernel_syms 
#define si_arch _sifields._sigsys._arch
#define list_entry(item,type,member) container_of(item, type, member)
#define FSUBRM(val,z) h_read(fpu_subrm, z)
#define BTC(bit,val,z) lo(btc, val, bit, z)
#define J_REL(cc,off) jcc(cc, fake_ip + off, fake_ip)
#define __S64_TYPE long int
#define PUSHF() g(pushf)
#define __FLT128_DIG__ 33
#define FCLEX() h(fpu_clex)
#define __stub_fchflags 
#define __SQUAD_TYPE long int
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define _BITS_SIGINFO_CONSTS_H 1
#define SIGBUS 7
#define __INTMAX_C(c) c ## L
#define _BITS_FLOATN_COMMON_H 
#define _BSD_SIZE_T_DEFINED_ 
#define PTHREAD_CANCELED ((void *) -1)
#define FPE_FLTRES FPE_FLTRES
#define ILL_ILLTRP ILL_ILLTRP
#define __CHAR_BIT__ 8
#define __FSWORD_T_TYPE __SWORD_TYPE
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define SIGTTIN 21
#define __attribute_pure__ __attribute__ ((__pure__))
#define __UINT8_MAX__ 0xff
#define COND_INITIALIZER ((cond_t) {PTHREAD_COND_INITIALIZER})
#define atomic_flag_test_and_set(PTR) __atomic_test_and_set ((PTR), __ATOMIC_SEQ_CST)
#define WCHAR_MAX __WCHAR_MAX
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define INT16_C(c) c
#define si_pid _sifields._kill.si_pid
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define MISC_H 
#define PDP_ENDIAN __PDP_ENDIAN
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define __stack_t_defined 1
#define __CFLOAT128 _Complex _Float128
#define READIMM16 READIMM_(imm, 16)
#define INT32_MIN (-2147483647-1)
#define SI_DETHREAD SI_DETHREAD
#define __OFF_T_MATCHES_OFF64_T 1
#define FISUB(val,z) h_read(fpu_isub, z)
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define INT_UNDEFINED 6
#define __WCHAR_MAX__ 0xffffffffU
#define forceinline inline __attribute__((always_inline))
#define INT16_MAX (32767)
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define FXAM() h(fpu_xam)
#define _SYS_UCONTEXT_H 1
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_IEC_559 2
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define FLD() hh(fpu_ld, st_i);
#define __LITTLE_ENDIAN 1234
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define __FLT32X_DECIMAL_DIG__ 17
#define _IOFBF 0
#define INT_GPF 13
#define __FLT_EVAL_METHOD__ 0
#define gagg(g,i,a,b) do { ga(g, i); GEN(a); GEN(b); } while (0)
#define _IO_USER_LOCK 0x8000
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define FLDC(what) hh(fpu_ldc, fconst_ ##what)
#define __FLT64_DECIMAL_DIG__ 17
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define SCHED_RR 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __HAVE_FLOAT64 1
#define NSIG _NSIG
#define EMU_GEN_H 
#define SEG_GS() seg_gs = true
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __ASSERT_VOID_CAST (void)
#define SEGV_ACCERR SEGV_ACCERR
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define TLB_BITS 10
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define ILL_BADIADDR ILL_BADIADDR
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __UINT_FAST32_TYPE__ long unsigned int
#define SIGPROF 27
#define FIST(dst,z) h_write(fpu_ist, z)
#define ATOMIC_ADC(src,dst,z) atomic_op(adc, src, dst, z)
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define bool _Bool
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define __SVE_ZREGS_OFFSET 0
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define POLL_MSG POLL_MSG
#define UINT64_C(c) c ## UL
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN (-32767-1)
#define TRACE__NOP(msg,...) use(__VA_ARGS__)
#define __FINITE_MATH_ONLY__ 0
#define si_overrun _sifields._timer.si_overrun
#define __stub___compat_uselib 
#define __id_t_defined 
#define SIGXFSZ 25
#define EMU_H 
#define FST() hh(fpu_st, st_i)
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define __FLT32X_MAX_EXP__ 1024
#define _BITS_SS_FLAGS_H 1
#define __u_char_defined 
#define WIFEXITED(status) __WIFEXITED (status)
#define FDIVRM(val,z) h_read(fpu_divrm, z)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __pid_t_defined 
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define MUL1(val,z) load(val, z); gz(mul, z)
#define ILL_BADSTK ILL_BADSTK
#define __CPU_SETSIZE 1024
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define INC(val,z) load(val, z); gz(inc, z); store(val, z)
#define __UINT_FAST8_MAX__ 0xff
#define READADDR _READIMM(addr_offset, 32)
#define __LEAF , __leaf__
#define _THREAD_MUTEX_INTERNAL_H 1
#define NEG(val,z) imm = 0; load(imm,z); op(sub, val,z); store(val,z)
#define __LDBL_REDIR1(name,proto,alias) name proto
#define _BITS_TYPES_LOCALE_T_H 1
#define INT_FAST8_MAX (127)
#define _WCHAR_T_DEFINED 
#define POLL_ERR POLL_ERR
#define __SI_SIGFAULT_ADDL 
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define __INT8_C(c) c
#define _BITS_TYPES_H 1
#define _SYS_TIME_H 1
#define rdtsc() ({ uint64_t tsc; __asm__ volatile("mrs %0, PMCCNTR_EL0" : "=r" (tsc)); tsc; })
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define vec_dst_size_xmm_modrm_reg 128
#define __INT_LEAST8_WIDTH__ 8
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define __INTMAX_TYPE__ long int
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define DEBUG_strace DEBUG_all
#define atomic_fetch_and_explicit(PTR,VAL,MO) __atomic_fetch_and ((PTR), (VAL), (MO))
#define htobe16(x) __bswap_16 (x)
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define NFDBITS __NFDBITS
#define __SHRT_MAX__ 0x7fff
#define __STDC_ISO_10646__ 201706L
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define ILL_ILLOPC ILL_ILLOPC
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __FLT64X_MAX_10_EXP__ 4932
#define FICOM(val,z) h_read(fpu_icom, z)
#define SIGTTOU 22
#define RDTSC h(helper_rdtsc)
#define __LDBL_IS_IEC_60559__ 2
#define FADDM(val,z) h_read(fpu_addm, z)
#define _REG(n) union { dword_t e ##n; word_t n; }
#define __ARM_FP 14
#define INT_FAST16_MAX (9223372036854775807L)
#define __FLT64X_IS_IEC_60559__ 2
#define SIGSTKFLT 16
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define _str(x) #x
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define __WINT_TYPE__ unsigned int
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define __UINT_LEAST8_MAX__ 0xff
#define READMODRM_MEM READMODRM; if (modrm.type == modrm_reg) UNDEFINED
#define SVE_MAGIC 0x53564501
#define SF_RES (1 << 2)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define DEBUG_instr DEBUG_all
#define __UINTMAX_TYPE__ long unsigned int
#define __HAVE_DISTINCT_FLOAT32X 0
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_GENERIC_BITS_PER_LONG 
#define _STDC_PREDEF_H 1
#define SET(cc,dst) ga(set, cond_ ##cc); store(dst, 8)
#define TODO(msg,...) die("TODO: " msg, ##__VA_ARGS__)
#define CLOCK_MONOTONIC_COARSE 6
#define SVE_VL_MAX __SVE_VL_MAX
#define READMODRM if (!modrm_decode32(&state->ip, tlb, &modrm)) SEGFAULT
#define ATOMIC_BTR(bit,val,z) lo(atomic_btr, val, bit, z)
#define __linux 1
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define si_int _sifields._rt.si_sigval.sival_int
#define __CHAR_UNSIGNED__ 1
#define __UINT32_MAX__ 0xffffffffU
#define __UID_T_TYPE __U32_TYPE
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __AARCH64_CMODEL_SMALL__ 1
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define __SIZE_T 
#define SIGUSR1 10
#define __LDBL_MAX_EXP__ 16384
#define __INT_FAST32_WIDTH__ 64
#define _ATFILE_SOURCE 1
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define __FLT128_MIN_EXP__ (-16381)
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define WUNTRACED 2
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define printk ish_printk
#define FCMOVNE(src) hh(fpu_cmovne, src)
#define UINT16_C(c) c
#define __always_inline __inline __attribute__ ((__always_inline__))
#define JMP(loc) load(loc, OP_SIZE); g(jmp_indir); end_block = true
#define INT_BOUND 5
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FD_SETSIZE 1024
#define __FLT32X_IS_IEC_60559__ 2
#define __KERNEL_STRICT_NAMES 
#define FIDIVR(val,z) h_read(fpu_idivr, z)
#define FSAVE(val,z) h_write(fpu_save, z)
#define EXIT_FAILURE 1
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __WCHAR_MIN__ 0U
#define __INT64_C(c) c ## L
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define SA_SIGINFO 4
#define FYL2X() h(fpu_yl2x)
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __INT_WCHAR_T_H 
#define WSTOPPED 2
#define __CFLOAT32 _Complex _Float32
#define FISUBR(val,z) h_read(fpu_isubr, z)
#define INT_OVERFLOW 4
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define _SYS_USER_H 1
#define __USE_FILE_OFFSET64 1
#define SHLD(count,extra,dst,z) load(dst,z); if (arg_ ##count == arg_reg_c) op(shld_cl, extra,z); else { op(shld_imm, extra,z); GEN(imm); } store(dst,z)
#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define __INT_FAST64_WIDTH__ 64
#define __PRAGMA_REDEFINE_EXTNAME 1
#define FCOM() hh(fpu_com, st_i)
#define _BITS_SIGINFO_ARCH_H 1
#define _DEFAULT_SOURCE 1
#define gag(g,i,a) do { ga(g, i); GEN(a); } while (0)
#define CMPXCHG8B(dst,z) g_addr(); gg(cmpxchg8b, state->orig_ip)
#define ZF_FLAG (1 << 6)
#define __attribute_used__ __attribute__ ((__used__))
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define __LOCK_ALIGNMENT 
#define __FLT32X_MANT_DIG__ 53
#define _ASM_GENERIC_INT_LL64_H 
#define los(o,src,dst,z) load(dst, z); op(o, src, z); store(dst, z)
#define FIXME(msg,...) printk("FIXME " msg "\n", ##__VA_ARGS__)
#define __USER_LABEL_PREFIX__ 
#define SCHED_OTHER 0
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define atomic_thread_fence(MO) __atomic_thread_fence (MO)
#define _BITS_ENDIANNESS_H 1
#define ATOMIC_DEC(val,z) op(atomic_dec, val, z)
#define __FLT32_MAX_10_EXP__ 38
#define __GLIBC__ 2
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define __END_DECLS 
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define __CONCAT(x,y) x ## y
#define WCONTINUED 8
#define setjmp(env) _setjmp (env)
#define TRACE_verbose TRACE__NOP
#define __STDC_HOSTED__ 1
#define LOCK_DEBUG 0
#define __BITS_PER_LONG 64
#define __SLONG32_TYPE int
#define _BITS_UINTN_IDENTITY_H 1
#define _SYS_SELECT_H 1
#define _NSIG (__SIGRTMAX + 1)
#define ggg(_g,a,b) do { g(_g); GEN(a); GEN(b); } while (0)
#define __SSIZE_T_TYPE __SWORD_TYPE
#define FMULM(val,z) h_read(fpu_mulm, z)
#define __jmp_buf_tag_defined 1
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define IDIV(val,z) load(val, z); gz(idiv, z)
#define TMP_MAX 238328
#define ____mbstate_t_defined 1
#define SIGURG 23
#define si_status _sifields._sigchld.si_status
#define DEBUG_all 0
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define __GNU_LIBRARY__ 6
#define __DBL_DIG__ 15
#define uint(size) glue3(uint,size,_t)
#define __FLT32_DIG__ 6
#define __f32x(x) x ##f32x
#define __RLIM_T_MATCHES_RLIM64_T 1
#define reg_ah reg_sp
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __WCHAR_MAX __WCHAR_MAX__
#define SS_DISABLE SS_DISABLE
#define _STDATOMIC_H 
#define _IO_EOF_SEEN 0x0010
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define ROR(count,val,z) los(ror, count, val, z)
#define __SHRT_WIDTH__ 16
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define __f64x(x) x ##f64x
#define MUL18(val,z) MUL1(val,z)
#define _STDIO_H 1
#define __SVE_NUM_ZREGS 32
#define __FLT32_IS_IEC_60559__ 2
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define __DEV_T_TYPE __UQUAD_TYPE
#define FDIV(src,dst) hhh(fpu_div, src, dst)
#define SA_ONSTACK 0x08000000
#define __GLIBC_USE_ISOC2X 0
#define SIGIO SIGPOLL
#define ___int_wchar_t_h 
#define ILL_ILLADR ILL_ILLADR
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define TEST(src,dst,z) lo(and, src, dst, z)
#define __nonnull(params) __attribute_nonnull__ (params)
#define atomic_load_explicit(PTR,MO) __extension__ ({ __auto_type __atomic_load_ptr = (PTR); __typeof__ ((void)0, *__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (MO)); __atomic_load_tmp; })
#define le32toh(x) __uint32_identity (x)
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define CLD g(cld)
#define __GLIBC_USE_IEC_60559_BFP_EXT 0
#define __FLT16_HAS_QUIET_NAN__ 1
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define IMUL3(times,src,dst,z) load(src, z); op(imul, times, z); store(dst, z)
#define CMP(src,dst,z) lo(sub, src, dst, z)
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define _ASSERT_H_DECLS 
#define ga(g,i) do { extern gadget_t g ##_gadgets[]; if (g ##_gadgets[i] == NULL) UNDEFINED; GEN(g ##_gadgets[i]); } while (0)
#define _WCHAR_T_ 
#define list_for_each(list,item) for (item = (list)->next; item != (list); item = item->next)
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define __FP_FAST_FMA 1
#define _VA_LIST_DEFINED 
#define __FLT32X_HAS_INFINITY__ 1
#define __INT32_MAX__ 0x7fffffff
#define FCOMI() hh(fpu_comi, st_i)
#define FCOMM(val,z) h_read(fpu_comm, z)
#define gg(_g,a) do { g(_g); GEN(a); } while (0)
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __SIZEOF_PTHREAD_COND_T 48
#define ATOMIC_OR(src,dst,z) atomic_op(or, src, dst, z)
#define __FLT16_DIG__ 3
#define FINISH return !end_block
#define atomic_signal_fence(MO) __atomic_signal_fence (MO)
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __STDC_IEC_559__ 1
#define __UINT16_C(c) c
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 0
#define __STDC_IEC_559_COMPLEX__ 1
#define SI_USER SI_USER
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define TLB_SIZE (1 << TLB_BITS)
#define JMP_REL(off) gg(jmp, fake_ip + off); jump_ips(-1, 0); end_block = true
#define FPE_INTDIV FPE_INTDIV
#define NOT(val,z) load(val,z); gz(not, z); store(val,z)
#define __gnu_linux__ 1
#define __USE_XOPEN2K 1
#define __INT16_MAX__ 0x7fff
#define SEEK_SET 0
#define _ENDIAN_H 1
#define __FLT128_IS_IEC_60559__ 2
#define _BITS_SIGNUM_ARCH_H 1
#define INT_DEBUG 1
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define FLDENV(val,z) h_write(fpu_ldenv, z)
#define __SI_MAX_SIZE 128
#define ATOMIC_CMPXCHG8B(dst,z) g_addr(); gg(atomic_cmpxchg8b, state->orig_ip)
#define atomic_fetch_sub_explicit(PTR,VAL,MO) __atomic_fetch_sub ((PTR), (VAL), (MO))
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define atomic_store_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_store_ptr = (PTR); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (VAL); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (MO)); })
#define __bool_true_false_are_defined 1
#define __FLT64X_MIN_10_EXP__ (-4931)
#define atomic_flag_clear(PTR) __atomic_clear ((PTR), __ATOMIC_SEQ_CST)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define _BSD_SIZE_T_ 
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define __FLT16_MIN_EXP__ (-13)
#define __FLT64_MANT_DIG__ 53
#define CVT ga(cvt, sz(oz))
#define __attribute_const__ __attribute__ ((__const__))
#define SAR(count,val,z) los(sar, count, val, z)
#define V_OP(op,src,dst,z) v(op, src, dst, z)
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define INT_NMI 2
#define htobe32(x) __bswap_32 (x)
#define __FLT64X_MANT_DIG__ 113
#define L_tmpnam 20
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define _T_PTRDIFF 
#define __GNUC__ 11
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define UINT_LEAST8_MAX (255)
#define UNDEFINED do { gggg(interrupt, INT_UNDEFINED, state->orig_ip, state->orig_ip); return false; } while (0)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define PF_FLAG (1 << 2)
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define FSCALE() h(fpu_scale)
#define __CFLOAT32X _Complex _Float32x
#define FSTCW(dst) if (arg_ ##dst == arg_reg_a) UNDEFINED; else h_write(fpu_stcw, 16)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __cleanup_fct_attribute 
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define __daddr_t_defined 
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define FXTRACT() h(fpu_xtract)
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define DEBUG_verbose DEBUG_all
#define FADD(src,dst) hhh(fpu_add, src, dst)
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define SIGXCPU 24
#define __LDBL_MIN_EXP__ (-16381)
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define VCOMPARE(src,dst,z) v(compare, src, dst,z)
#define INT_DIV 0
#define __STRING(x) #x
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define READIMMoz READIMM
#define GEN(thing) gen(state, (unsigned long) (thing))
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define __SI_ALIGNMENT 
#define __FLT64_MAX_10_EXP__ 308
#define __GLIBC_USE_LIB_EXT2 0
#define __USE_ISOC99 1
#define SA_NODEFER 0x40000000
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define __sigevent_t_defined 1
#define RCL(count,val,z) los(rcl, count, val, z)
#define RCR(count,val,z) los(rcr, count, val, z)
#define __FLT16_MAX_10_EXP__ 4
#define __DBL_IS_IEC_60559__ 2
#define ____sigval_t_defined 
#define _GCC_WCHAR_T 
#define FLDM(val,z) h_read(fpu_ldm, z)
#define FPE_FLTDIV FPE_FLTDIV
#define _BITS_STDINT_UINTN_H 1
#define SI_QUEUE SI_QUEUE
#define FRNDINT() h(fpu_rndint)
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define REG(byte) ((byte & 0b00111000) >> 3)
#define REP(op,z) strop(op, rep, z)
#define __DBL_HAS_INFINITY__ 1
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define ITIMER_PROF ITIMER_PROF
#define atomic_exchange(PTR,VAL) atomic_exchange_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define _REGX(n) union { dword_t e ##n ##x; word_t n ##x; struct { byte_t n ##l; byte_t n ##h; }; }
#define FDIVM(val,z) h_read(fpu_divm, z)
#define UINT8_MAX (255)
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define stdin stdin
#define SIGQUIT 3
#define si_syscall _sifields._sigsys._syscall
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define SCHED_FIFO 1
#define XOR(src,dst,z) los(xor, src, dst, z)
#define __DADDR_T_TYPE __S32_TYPE
#define DECLARE_LOCALS dword_t addr_offset = 0; bool end_block = false; bool seg_gs = false
#define __INTPTR_WIDTH__ 64
#define __ASM_POSIX_TYPES_H 
#define TLB_INDEX(addr) (((addr >> PAGE_BITS) & (TLB_SIZE - 1)) ^ (addr >> (PAGE_BITS + TLB_BITS)))
#define fallthrough __attribute__((fallthrough))
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define INT_SYSCALL 0x80
#define JIT_INITIAL_HASH_SIZE (1 << 10)
#define be32toh(x) __bswap_32 (x)
#define v_(op,src,dst,_imm,z) _v(arg_ ##src, arg_ ##dst, vec_ ##op ##z, _imm,z)
#define __OFF64_T_TYPE __SQUAD_TYPE
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define __HAVE_FLOAT128X 0
#define FLOAT80_H 
#define _SIZE_T_DEFINED 
#define TRACE_debug TRACE__NOP
#define _WCHAR_T_DEFINED_ 
#define CMPXCHG(src,dst,z) load(src, z); op(cmpxchg, dst, z)
#define has_imm_ false
#define atomic_fetch_xor_explicit(PTR,VAL,MO) __atomic_fetch_xor ((PTR), (VAL), (MO))
#define __f64(x) x ##f64
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define __USE_POSIX199506 1
#define EMU_CPU_MEM_H 
#define __LDBL_HAS_DENORM__ 1
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define MEM_WRITE_PTRACE 2
#define VMOV(src,dst,z) if (could_be_memory(arg_ ##dst) && modrm.type != modrm_reg) { v(merge, src, dst,z); } else { v(glue3(zero, vec_dst_size_ ##dst, _copy), src, dst,z); }
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define __stub_setlogin 
#define has_feature(x) 0
#define must_check __attribute__((warn_unused_result))
#define __FLT128_HAS_INFINITY__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define SIGABRT 6
#define SS_ONSTACK SS_ONSTACK
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define READIMM8 READIMM_(imm, 8); imm = (int8_t) (uint8_t) imm
#define true 1
#define SA_RESETHAND 0x80000000
#define __dev_t_defined 
#define __S32_TYPE int
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define __DBL_MAX_EXP__ 1024
#define _SYS_PROCFS_H 1
#define __WCHAR_WIDTH__ 32
#define __BIT_TYPES_DEFINED__ 1
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define FIDIV(val,z) h_read(fpu_idiv, z)
#define _BITS_WCHAR_H 1
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __FLT16_DECIMAL_DIG__ 5
#define atomic_fetch_or(PTR,VAL) __atomic_fetch_or ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define SAHF g(sahf)
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define SHL(count,val,z) los(shl, count, val, z)
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define __FLT_IS_IEC_60559__ 2
#define BUS_OBJERR BUS_OBJERR
#define ATOMIC_ADD(src,dst,z) atomic_op(add, src, dst, z)
#define FABS() h(fpu_abs)
#define SEGV_MAPERR SEGV_MAPERR
#define ggggg(_g,a,b,c,d) do { g(_g); GEN(a); GEN(b); GEN(c); GEN(d); } while (0)
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __USECONDS_T_TYPE __U32_TYPE
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define __SVE_NUM_PREGS 16
#define __glibc_objsize(__o) __bos (__o)
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define FPE_FLTOVF FPE_FLTOVF
#define _LINUX_STDDEF_H 
#define __FLT32_HAS_QUIET_NAN__ 1
#define _T_WCHAR 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define vec_dst_size_modrm_val 32
#define __SIZEOF_SIZE_T__ 8
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _glue(a,b) a ##b
#define _WCHAR_T 
#define __SIG_ATOMIC_WIDTH__ 32
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define debugger raise(SIGTRAP)
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define SIG_BLOCK 0
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define gggggg(_g,a,b,c,d,e) do { g(_g); GEN(a); GEN(b); GEN(c); GEN(d); GEN(e); } while (0)
#define SIZE_MAX (18446744073709551615UL)
#define __SIZEOF_WINT_T__ 4
#define VMOV_MERGE_REG(src,dst,z) if (modrm.type == modrm_reg || could_be_memory(arg_ ##dst)) { v(merge, src, dst,z); } else { v(glue3(zero, vec_dst_size_ ##dst, _copy), src, dst,z); }
#define list_first_entry(list,type,member) list_entry((list)->next, type, member)
#define JIT_BLOCK_INITIAL_CAPACITY 16
#define READIMM_(name,size) _READIMM(name, size); TRACE("imm %llx ", (long long) name)
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define __SI_CLOCK_T __clock_t
#define BSWAP(dst) ga(bswap, arg_ ##dst)
#define __U16_TYPE unsigned short int
#define CLD_EXITED CLD_EXITED
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX (4294967295u)
#define FCMOVBE(src) hh(fpu_cmovbe, src)
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define UINTPTR_MAX (18446744073709551615UL)
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define reg_bh reg_di
#define _PTRDIFF_T 
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define FPSIMD_MAGIC 0x46508001
#define __ARM_FP16_FORMAT_IEEE 1
#define TRACE_memory TRACE__NOP
#define __WTERMSIG(status) ((status) & 0x7f)
#define FLDCW(dst) if (arg_ ##dst == arg_reg_a) UNDEFINED; else h_read(fpu_ldcw, 16)
#define ROL(count,val,z) los(rol, count, val, z)
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define atomic_exchange_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_val = (VAL); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_tmp; __atomic_exchange (__atomic_exchange_ptr, &__atomic_exchange_val, &__atomic_exchange_tmp, (MO)); __atomic_exchange_tmp; })
#define __FLT_MIN_EXP__ (-125)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define DF_FLAG (1 << 10)
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define WEXITED 4
#define ATOMIC_VAR_INIT(VALUE) (VALUE)
#define _STRUCT_TIMESPEC 1
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define __ASM_SVE_CONTEXT_H 
#define UINT32_MAX (4294967295U)
#define __key_t_defined 
#define __uid_t_defined 
#define WNOHANG 1
#define alloca(size) __builtin_alloca (size)
#define __flexarr []
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define SIGCHLD 17
#define atomic_fetch_add(PTR,VAL) __atomic_fetch_add ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __THROWNL __attribute__ ((__nothrow__))
#define ATOMIC_SBB(src,dst,z) atomic_op(sbb, src, dst, z)
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __PTRDIFF_T 
#define atomic_fetch_sub(PTR,VAL) __atomic_fetch_sub ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __HAVE_GENERIC_SELECTION 1
#define __FLT32X_MIN_EXP__ (-1021)
#define FCMOVNB(src) hh(fpu_cmovnb, src)
#define __INT_FAST64_TYPE__ long int
#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#define __ARM_FP16_ARGS 1
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define L_ctermid 9
#define __FP_FAST_FMAF 1
#define jump_ips(off1,off2) state->jump_ip[0] = state->size + off1; if (off2 != 0) state->jump_ip[1] = state->size + off2
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define _ANSI_STDDEF_H 
#define FIADD(val,z) h_read(fpu_iadd, z)
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define _v(src,dst,helper,_imm,z) do { extern void gadget_vec_helper_read ##z ##_imm(void); extern void gadget_vec_helper_write ##z ##_imm(void); if (!gen_vec(src, dst, (void (*)()) helper, gadget_vec_helper_read ##z ##_imm, gadget_vec_helper_write ##z ##_imm, state, &modrm, imm, seg_gs, has_imm_ ##_imm)) return false; } while (0)
#define strop(op,rep,z) gag(op, sz(z) * size_count + rep_ ##rep, state->orig_ip)
#define WINT_MIN (0u)
#define _BITS_STDIO_LIM_H 1
#define atomic_fetch_and(PTR,VAL) __atomic_fetch_and ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define INT_DOUBLE 8
#define __ARM_FEATURE_CLZ 1
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define __unix__ 1
#define SEGV_MTESERR SEGV_MTESERR
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define CLOCK_REALTIME_COARSE 5
#define __WCOREFLAG 0x80
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x), 0)
#define __DBL_HAS_QUIET_NAN__ 1
#define __HAVE_FLOAT32X 1
#define __FLT_EVAL_METHOD_C99__ 0
#define fpu_ucomi fpu_comi
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define XCHG(src,dst,z) load(src, z); op(xchg, dst, z); store(src, z)
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __MODE_T_TYPE __U32_TYPE
#define CLOCK_REALTIME_ALARM 8
#define EOF (-1)
#define LOG_HANDLER_DPRINTF 1
#define SIGTRAP 5
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define st_0 0
#define __FLT64_MIN_EXP__ (-1021)
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define FPOP h(fpu_pop)
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define st_i modrm.rm_opcode
#define __LDBL_DECIMAL_DIG__ 36
#define reg_ch reg_bp
#define INT_LEAST8_MAX (127)
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __aarch64__ 1
#define _BITS_SETJMP_H 1
#define __CFLOAT64X _Complex _Float64x
#define __FLT64_MIN_10_EXP__ (-307)
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define INT8_C(c) c
#define __FDS_BITS(set) ((set)->__fds_bits)
#define DEFAULT_CHANNEL instr
#define si_pkey _sifields._sigfault._bounds._pkey
#define __FLT64X_DECIMAL_DIG__ 36
#define FSTENV(val,z) h_write(fpu_stenv, z)
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __INTMAX_WIDTH__ 64
#define INT_LEAST32_MAX (2147483647)
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define FPE_FLTSUB FPE_FLTSUB
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define __LDBL_HAS_INFINITY__ 1
#define CMOVN(cc,src,dst,z) do { gag(skip, cond_ ##cc, 0); int start = state->size; load(src, z); store(dst, z); state->block->code[start - 1] = (state->size - start) * sizeof(long); } while (0)
#define list_next_entry(item,member) list_entry((item)->member.next, typeof(*(item)), member)
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define si_addr _sifields._sigfault.si_addr
#define si_uid _sifields._kill.si_uid
#define __FLT_DIG__ 6
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define _SIGNAL_H 
#define __NO_INLINE__ 1
#define DEC(val,z) load(val, z); gz(dec, z); store(val, z)
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define CLOCK_BOOTTIME_ALARM 9
#define __DEC_EVAL_METHOD__ 2
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define __siginfo_t_defined 1
#define MODRM_H 
#define SIGEV_THREAD SIGEV_THREAD
#define __FLT_MANT_DIG__ 24
#define INT_LEAST8_MIN (-128)
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define __FLT16_MIN_10_EXP__ (-4)
#define __VERSION__ "11.3.0"
#define FCOS() h(fpu_cos)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __UINT64_C(c) c ## UL
#define _SYS_TYPES_H 1
#define _PTRDIFF_T_ 
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_CDEFS_H 1
#define write_wrlock(lock) __write_wrlock(lock, __FILE__, __LINE__)
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define ATOMIC_BTC(bit,val,z) lo(atomic_btc, val, bit, z)
#define DIV(val,z) load(val, z); gz(div, z)
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __GXX_ABI_VERSION 1016
#define sint(size) glue3(int,size,_t)
#define BT(bit,val,z) lo(bt, val, bit, z)
#define __USE_XOPEN2K8 1
#define htobe64(x) __bswap_64 (x)
#define _____fpos_t_defined 1
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __bitwise __bitwise__
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define __WINT_MAX__ 0xffffffffU
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define si_stime _sifields._sigchld.si_stime
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __ASM_GENERIC_POSIX_TYPES_H 
#define _T_PTRDIFF_ 
#define SIGVTALRM 26
#define FCMOVU(src) hh(fpu_cmovu, src)
#define __FLT128_MAX_EXP__ 16384
#define __INO_T_TYPE __ULONGWORD_TYPE
#define be16toh(x) __bswap_16 (x)
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define SIGPOLL 29
#define atomic_store(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define PF (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf)
#define __struct_tm_defined 1
#define __ssize_t_defined 
#define FUCOM() hh(fpu_ucom, st_i)
#define __FLT32_MANT_DIG__ 24
#define __sigval_t_defined 
#define FILD(val,z) h_read(fpu_ild, z)
#define SVE_VQ_MAX __SVE_VQ_MAX
#define _STDDEF_H 
#define __AARCH64EL__ 1
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#define PUSH(thing,z) load(thing, z); gg(push, state->orig_ip)
#define __SIZE_T__ 
#define __FLT16_MAX_EXP__ 16
#define _READIMM(name,size) do { state->ip += size/8; if (!tlb_read(tlb, state->ip - size/8, &name, size/8)) SEGFAULT; } while (0)
#define FSQRT() h(fpu_sqrt)
#define __stub_gtty 
#define F80_INF ((float80) {.signif = 0x8000000000000000, .exp = 0x7fff, .sign = 0})
#define si_value _sifields._rt.si_sigval
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define MEM_READ 0
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define si_utime _sifields._sigchld.si_utime
#define __BIGGEST_ALIGNMENT__ 16
#define _SYS_SIZE_T_H 
#define INT32_MAX (2147483647)
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __INT32_C(c) c
#define FSTSW(dst) if (arg_ ##dst == arg_reg_a) g(fstsw_ax); else UNDEFINED
#define JIT_H 
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __wur 
#define SIGHUP 1
#define _STDNORETURN_H 
#define __FLT128_HAS_DENORM__ 1
#define CLOCK_REALTIME 0
#define _BITS_TIME_H 1
#define SIG_UNBLOCK 1
#define FPE_INTOVF FPE_INTOVF
#define __SCHAR_WIDTH__ 8
#define IMUL1(val,z) load(val, z); gz(imul1, z)
#define __ORDER_PDP_ENDIAN__ 3412
#define IMUL2(val,reg,z) IMUL3(val, reg, reg, z)
#define __PDP_ENDIAN 3412
#define INT_FAST8_MIN (-128)
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
#define __ARM_64BIT_STATE 1
#define sa_handler __sigaction_handler.sa_handler
#define SIGSEGV 11
#define SVE_VQ_MIN __SVE_VQ_MIN
#define be64toh(x) __bswap_64 (x)
#define BYTE_ORDER __BYTE_ORDER
#define __INT_FAST32_TYPE__ long int
#define __have_pthread_attr_t 1
#define FSUBM(val,z) h_read(fpu_subm, z)
#define _BITS_TYPESIZES_H 1
#define FSUBR(src,dst) hhh(fpu_subr, src, dst)
#define ILL_COPROC ILL_COPROC
#define CMOV(cc,src,dst,z) do { gag(skipn, cond_ ##cc, 0); int start = state->size; load(src, z); store(dst, z); state->block->code[start - 1] = (state->size - start) * sizeof(long); } while (0)
#define CF (cpu->cf)
#define htole32(x) __uint32_identity (x)
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define WSTOPSIG(status) __WSTOPSIG (status)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#define RAND_MAX 2147483647
#define FTST() h(fpu_tst)
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define _SIZET_ 
#define READMODRM_NOMEM READMODRM; if (modrm.type != modrm_reg) UNDEFINED
#define FOPEN_MAX 16
#define __SIZE_TYPE__ long unsigned int
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define typecheck(type,x) ({type _x = x; x;})
#define FPE_CONDTRAP FPE_CONDTRAP
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define SBB(src,dst,z) los(sbb, src, dst, z)
#define __FLT64X_DIG__ 33
#define h_write(h,z) do { g_addr(); ggg(helper_write ##z, state->orig_ip, h ##z); } while (0)
#define list_for_each_safe(list,item,tmp) for (item = (list)->next, tmp = item->next; item != (list); item = tmp, tmp = item->next)
#define TRACEI(msg,...) TRACE(msg "\t", ##__VA_ARGS__)
#define __ARM_FEATURE_FMA 1
#define __INT8_TYPE__ signed char
#define SIGSTKSZ 16384
#define trylock(lock) trylock(lock, __FILE__, __LINE__)
#define INT_BREAKPOINT 3
#define __HAVE_DISTINCT_FLOAT128 0
#define __ELF__ 1
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define CLOCK_THREAD_CPUTIME_ID 3
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define __ASSERT_FUNCTION __extension__ __PRETTY_FUNCTION__
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define bitfield unsigned int
#define SEGV_ACCADI SEGV_ACCADI
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define ITIMER_REAL ITIMER_REAL
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define __ARM_ARCH_PROFILE 65
#define __sched_priority sched_priority
#define FXCH() hh(fpu_xch, st_i)
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define _POSIX_C_SOURCE 200809L
#define __ARM_PCS_AAPCS64 1
#define OF (cpu->of)
#define PTHREAD_STACK_MIN 131072
#define lock(lock) __lock(lock, __FILE__, __LINE__)
#define _ALLOCA_H 1
#define _BITS_SIGTHREAD_H 1
#define SEGV_ADIDERR SEGV_ADIDERR
#define ATOMIC_INC(val,z) op(atomic_inc, val, z)
#define fpu_ucom fpu_com
#define _SETJMP_H 1
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define __LDBL_REDIR(name,proto) name proto
#define CLOCK_MONOTONIC_RAW 4
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define str(x) _str(x)
#define AF_OPS (1 << 3)
#define SIGCONT 18
#define __FD_ELT(d) ((d) / __NFDBITS)
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define atomic_init(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_RELAXED)
#define __INT_LEAST64_WIDTH__ 64
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define _BITS_SIGSTACK_H 1
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_IEC_60559_BFP__ 201404L
#define INT_TIMER 32
#define SIGPIPE 13
#define store(thing,z) op(store, thing, z)
#define SIG_DFL ((__sighandler_t) 0)
#define __SIZEOF_PTRDIFF_T__ 8
#define SEGV_PKUERR SEGV_PKUERR
#define __ATOMIC_RELAXED 0
#define SIGFPE 8
#define __stub_sigreturn 
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define MEM_WRITE 1
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define FSTM(dst,z) h_write(fpu_stm, z)
#define CLOCK_TAI 11
#define ESR_MAGIC 0x45535201
#define __restrict_arr __restrict
#define INTPTR_MIN (-9223372036854775807L-1)
#define __f32(x) x ##f32
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define LIST_H 
#define __UWORD_TYPE unsigned long int
#define __LDBL_DIG__ 33
#define LIST_INITIALIZER(x) {.prev = &x, .next = &x}
#define __FLT64_IS_IEC_60559__ 2
#define _SIZE_T_ 
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __FLT16_IS_IEC_60559__ 2
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define UINT_FAST32_MAX (18446744073709551615UL)
#define _WCHAR_T_H 
#define POLL_OUT POLL_OUT
#define gggg(_g,a,b,c) do { g(_g); GEN(a); GEN(b); GEN(c); } while (0)
#define ATOMIC_CMPXCHG(src,dst,z) atomic_op(cmpxchg, src, dst, z)
#define F2XM1() h(fpu_2xm1)
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __WCLONE 0x80000000
#define __stub___compat_create_module 
#define SA_NOMASK SA_NODEFER
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define reg_dh reg_si
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __USE_ISOC95 1
#define MINSIGSTKSZ 5120
#define NULL ((void *)0)
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define atomic_compare_exchange_strong_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 0, (SUC), (FAIL)); })
#define __U64_TYPE unsigned long int
#define STR(op,z) strop(op, once, z)
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define __FLT_HAS_QUIET_NAN__ 1
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define INT32_C(c) c
#define __FLT_MAX_10_EXP__ 38
#define _____fpos64_t_defined 1
#define ADD(src,dst,z) los(add, src, dst, z)
#define SUB(src,dst,z) los(sub, src, dst, z)
#define SA_NOCLDWAIT 2
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define UINT_LEAST16_MAX (65535)
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define ATOMIC_AND(src,dst,z) atomic_op(and, src, dst, z)
#define SIGWINCH 28
#define __glibc_objsize0(__o) __bos0 (__o)
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define SIGALRM 14
#define jcc(cc,to,else) gagg(jmp, cond_ ##cc, to, else); jump_ips(-2, -1); end_block = true
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define __unix 1
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define has_imm__imm true
#define _BSD_PTRDIFF_T_ 
#define _BITS_PTHREADTYPES_COMMON_H 1
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define __DBL_HAS_DENORM__ 1
#define __UINT_FAST16_TYPE__ long unsigned int
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __CHAR16_TYPE__ short unsigned int
#define __FLT64X_MAX_EXP__ 16384
#define UTIL_SYNC_H 
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define SIGEV_NONE SIGEV_NONE
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define JN_REL(cc,off) jcc(cc, fake_ip, fake_ip + off)
#define __no_instrument_msan 
#define _STRINGS_H 1
#define SI_MESGQ SI_MESGQ
#define __SIZE_WIDTH__ 64
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define __BLKSIZE_T_TYPE __S32_TYPE
#define ATOMIC_XADD(src,dst,z) load(src, z); op(atomic_xadd, dst, z); store(src, z)
#define _WCHAR_T_DECLARED 
#define __INT_LEAST16_MAX__ 0x7fff
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define __stub_revoke 
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define FPREM() h(fpu_prem)
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define TRACE_(chan,msg,...) glue(TRACE_, chan)(msg, ##__VA_ARGS__)
#define ENGINE_JIT 1
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define htole16(x) __uint16_identity (x)
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define SEGV_BNDERR SEGV_BNDERR
#define __STDC_VERSION__ 201112L
#define DEBUG_debug DEBUG_all
#define hh(h,a) ggg(helper_1, h, a)
#define TIMER_ABSTIME 1
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define JCXZ_REL(off) ggg(jcxz, fake_ip + off, fake_ip); jump_ips(-2, -1); end_block = true
#define __PMT(args) args
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define WTERMSIG(status) __WTERMSIG (status)
#define AND(src,dst,z) los(and, src, dst, z)
#define SIGSYS 31
#define linux 1
#define SIGSTOP 19
#define SA_NOCLDSTOP 1
#define CLOCK_MONOTONIC 1
#define g_addr() gen_addr(state, &modrm, seg_gs)
#define V_OP_IMM(op,src,dst,z) v_imm(op, src, dst, z)
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define ____FILE_defined 1
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define _IOLBF 1
#define htole64(x) __uint64_identity (x)
#define FPE_FLTINV FPE_FLTINV
#define SEGFAULT do { gggg(interrupt, INT_GPF, state->orig_ip, tlb->segfault_addr); return false; } while (0)
#define FUCOMI() hh(fpu_ucomi, st_i)
#define h_read(h,z) do { g_addr(); ggg(helper_read ##z, state->orig_ip, h ##z); } while (0)
#define MAKE_OP(x,OP,op) case x+0x0: TRACEI(op " reg8, modrm8"); READMODRM; OP(modrm_reg, modrm_val,8); break; case x+0x1: TRACEI(op " reg, modrm"); READMODRM; OP(modrm_reg, modrm_val,oz); break; case x+0x2: TRACEI(op " modrm8, reg8"); READMODRM; OP(modrm_val, modrm_reg,8); break; case x+0x3: TRACEI(op " modrm, reg"); READMODRM; OP(modrm_val, modrm_reg,oz); break; case x+0x4: TRACEI(op " imm8, al\t"); READIMM8; OP(imm, reg_a,8); break; case x+0x5: TRACEI(op " imm, oax\t"); READIMM; OP(imm, reg_a,oz); break
#define __USE_POSIX2 1
#define SA_INTERRUPT 0x20000000
#define list_for_each_entry_safe(list,item,tmp,member) for (item = list_first_entry(list, typeof(*(item)), member), tmp = list_next_entry(item, member); &item->member != (list); item = tmp, tmp = list_next_entry(item, member))
#define __FLT64X_MIN_EXP__ (-16381)
#define noreturn _Noreturn
#define __FLT32_MIN_10_EXP__ (-37)
#define __KEY_T_TYPE __S32_TYPE
#define sigev_notify_function _sigev_un._sigev_thread._function
#define __SVE_VQ_MAX 512
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define __FLT32X_DIG__ 15
#define __UINT8_TYPE__ unsigned char
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define __timer_t_defined 1
#define SVE_VL_MIN __SVE_VL_MIN
#define INT_NONE -1
#define __PTRDIFF_WIDTH__ 64
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define __BEGIN_DECLS 
#define __HAVE_FLOAT16 0
#define atomic_compare_exchange_strong(PTR,VAL,DES) atomic_compare_exchange_strong_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define ATOMIC_XOR(src,dst,z) atomic_op(xor, src, dst, z)
#define CLD_STOPPED CLD_STOPPED
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define false 0
#define POLL_HUP POLL_HUP
#define _STRING_H 1
#define SA_STACK SA_ONSTACK
#define _GCC_MAX_ALIGN_T 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define BUS_ADRERR BUS_ADRERR
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define ____sigset_t_defined 
#define EMU_SSE_H 
#define XADD(src,dst,z) XCHG(src, dst,z); ADD(src, dst,z)
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define assert(expr) ((void) sizeof ((expr) ? 1 : 0), __extension__ ({ if (expr) ; else __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION); }))
#define le64toh(x) __uint64_identity (x)
#define TRACE_instr TRACE__NOP
#define FILENAME_MAX 4096
#define __nlink_t_defined 
#define oz OP_SIZE
#define __FLT16_MANT_DIG__ 11
#define __ino_t_defined 
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ unsigned int
#define __CLOCKID_T_TYPE __S32_TYPE
#define __SLONGWORD_TYPE long int
#define vec_dst_size_xmm_modrm_val 128
#define NO_CPU struct cpu_state *UNUSED(cpu)
#define CPUID() g(cpuid)
#define DECODER_RET static int
#define DEBUG_memory DEBUG_all
#define atomic_fetch_or_explicit(PTR,VAL,MO) __atomic_fetch_or ((PTR), (VAL), (MO))
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __ARM_ARCH_8A 1
#define TRACE__(msg,...) printk(msg, ##__VA_ARGS__)
#define __stub_chflags 
#define __SVE_VQ_MIN 1
#define __UQUAD_TYPE unsigned long int
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define SI_ASYNCIO SI_ASYNCIO
#define __BYTE_ORDER __LITTLE_ENDIAN
#define RET_NEAR(imm) ggg(ret, state->orig_ip, 4 + imm); end_block = true
#define FSUB(src,dst) hhh(fpu_sub, src, dst)
#define __USE_POSIX 1
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define BUFSIZ 8192
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX (9223372036854775807L)
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define __UINT_FAST64_TYPE__ long unsigned int
#define WNOWAIT 0x01000000
#define POPF() g(popf)
#define vec_dst_size_mm_modrm_reg 64
#define EXIT_SUCCESS 0
#define __LDBL_REDIR_DECL(name) 
#define READINSN _READIMM(insn, 8); TRACE("%02x ", insn)
#define UINT_FAST8_MAX (255)
#define __INT_MAX__ 0x7fffffff
#define _LINUX_POSIX_TYPES_H 
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define INT8_MIN (-128)
#define si_band _sifields._sigpoll.si_band
#define _BITS_SIGACTION_H 1
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define SI_ASYNCNL SI_ASYNCNL
#define __itimerspec_defined 1
#define _T_SIZE_ 
#define __TIMESIZE 64
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define atomic_fetch_xor(PTR,VAL) __atomic_fetch_xor ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __SIGRTMAX 64
#define __WNOTHREAD 0x20000000
#define SIGCLD SIGCHLD
#define __INT64_TYPE__ long int
#define __FLT_MAX_EXP__ 128
#define CLOCK_PROCESS_CPUTIME_ID 2
#define __gid_t_defined 
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define UINT32_C(c) c ## U
#define __ORDER_BIG_ENDIAN__ 4321
#define TRACE_strace TRACE__NOP
#define _IONBF 2
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define SI_TKILL SI_TKILL
#define __SVE_VQ_BYTES 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define __FP_FAST_FMAF32 1
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __GLIBC_MINOR__ 35
#define __UINT_LEAST32_TYPE__ unsigned int
#define SIGRTMIN (__libc_current_sigrtmin ())
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define atomic_op(type,src,dst,z) load(src, z); op(atomic_ ##type, dst, z)
#define CLOCK_BOOTTIME 7
#define REPNZ(op,z) strop(op, repnz, z)
#define __intptr_t_defined 
#define POLL_PRI POLL_PRI
#define INT_FPU 7
#define zero_init(type) ((type[1]){}[0])
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define FCMOVNU(src) hh(fpu_cmovnu, src)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define FD_SETSIZE __FD_SETSIZE
#define stdout stdout
#define AF (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af)
#define __WINT_WIDTH__ 32
#define __struct_FILE_defined 1
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define __INT_LEAST8_MAX__ 0x7f
#define __USE_POSIX199309 1
#define SIGUSR2 12
#define __FLT32X_MAX_10_EXP__ 308
#define STRACE(msg,...) TRACE_(strace, msg, ##__VA_ARGS__)
#define sched_priority sched_priority
#define __SIGRTMIN 32
#define load(thing,z) op(load, thing, z)
#define SIGTSTP 20
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define SF_FLAG (1 << 7)
#define __LDBL_MAX_10_EXP__ 4932
#define FMUL(src,dst) hhh(fpu_mul, src, dst)
#define _BITS_SIGNUM_GENERIC_H 1
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define SA_ONESHOT SA_RESETHAND
#define __stub_stty 
#define __FLT32_MIN_EXP__ (-125)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define ZF_RES (1 << 1)
#define le16toh(x) __uint16_identity (x)
#define fake_ip (state->ip | (1ul << 63))
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define POP(thing,z) gg(pop, state->orig_ip); state->orig_ip_extra = 1ul << 62; store(thing, z)
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define _LP64 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define si_call_addr _sifields._sigsys._call_addr
#define __UINT8_C(c) c
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define SIGKILL 9
#define __INT_LEAST32_TYPE__ int
#define __sig_atomic_t_defined 1
#define REPZ(op,z) strop(op, repz, z)
#define __wchar_t__ 
#define SEEK_END 2
#define __USE_POSIX_IMPLICITLY 1
#define __UINT64_TYPE__ long unsigned int
#define ATOMIC_SUB(src,dst,z) atomic_op(sub, src, dst, z)
#define _PTHREAD_H 1
#define __stub___compat_query_module 
#define __ARM_NEON 1
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define DECODER_PASS_ARGS state, tlb
#define _STDDEF_H_ 
#define TLB_PAGE(addr) (addr & 0xfffff000)
#define __stub___compat_bdflush 
#define TRACEIP() TRACE("%d %08x\t", current_pid(), state->ip)
#define __FLT128_HAS_QUIET_NAN__ 1
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define SA_RESTART 0x10000000
#define PAGE_BITS 12
#define RESTORE_IP state->ip = state->orig_ip
#define __UINT_FAST8_TYPE__ unsigned char
#define __INT_FAST8_TYPE__ signed char
#define TRACE(msg,...) TRACE_(DEFAULT_CHANNEL, msg, ##__VA_ARGS__)
#define SEGV_ADIPERR SEGV_ADIPERR
#define SIGILL 4
#define vec_dst_size_mm_modrm_val 64
#define __PID_T_TYPE __S32_TYPE
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define PAGE_SIZE (1 << PAGE_BITS)
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define PF_RES (1 << 0)
#define __USE_ISOC11 1
#define _THREAD_SHARED_TYPES_H 1
#define CPUID_H 
#define __f128(x) x ##f128
#define __glibc_has_extension(ext) 0
#define CPU_OFFSET(field) offsetof(struct cpu_state, field)
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define __GNUC_STDC_INLINE__ 1
#define _BITS_FLOATN_H 
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define P_tmpdir "/tmp"
#define __FLT64_HAS_DENORM__ 1
#define __HAVE_FLOAT32 1
#define __WORDSIZE_TIME64_COMPAT32 0
#define __HAVE_DISTINCT_FLOAT32 0
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define list_for_each_entry(list,item,member) for (item = list_entry((list)->next, typeof(*item), member); &item->member != (list); item = list_entry(item->member.next, typeof(*item), member))
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define is_gcc(version) (__GNUC__ >= version)
#define __FP_FAST_FMAF32x 1
#define PTHREAD_ONCE_INIT 0
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define UINT_FAST16_MAX (18446744073709551615UL)
#define __STDC_UTF_32__ 1
#define TLB_PAGE_EMPTY 1
#define FINCSTP() h(fpu_incstp)
#define __INT_FAST8_WIDTH__ 8
#define OR(src,dst,z) los(or, src, dst, z)
#define CLD_DUMPED CLD_DUMPED
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define _SIZE_T 
#define _IO_ERR_SEEN 0x0020
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define __ULONG32_TYPE unsigned int
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define use(...) __use(0, ##__VA_ARGS__)
#define UTIL_DEBUG_H 
#define FSIN() h(fpu_sin)
#define kill_dependency(Y) __extension__ ({ __auto_type __kill_dependency_tmp = (Y); __kill_dependency_tmp; })
#define TIME_UTC 1
#define __FLT64X_HAS_INFINITY__ 1
#define __BIG_ENDIAN 4321
#define STD g(std)
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __suseconds_t_defined 
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define __ASM_BITSPERLONG_H 
#define __fortify_function __extern_always_inline __attribute_artificial__
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define __off_t_defined 
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define RM(byte) ((byte & 0b00000111) >> 0)
#define SI_KERNEL SI_KERNEL
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define _FILE_OFFSET_BITS 64
#define __SIZEOF_WCHAR_T__ 4
#define unix 1
#define SIGPWR 30
#define _SCHED_H 1
#define posit assert
#define SF (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf)
#define hhh(h,a,b) gggg(helper_2, h, a, b)
#define __mode_t_defined 
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define _GCC_SIZE_T 
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#define __INO64_T_TYPE __UQUAD_TYPE
#define __W_CONTINUED 0xffff
#define has_attribute __has_attribute
#define __UINT32_C(c) c ## U
#define FIMUL(val,z) h_read(fpu_imul, z)
#define __size_t__ 
#define _BITS_TIME64_H 1
#define v_imm(op,src,dst,z) v_(op, src, dst, _imm,z)
#define __WINT_MIN__ 0U
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __glibc_has_builtin(name) __has_builtin (name)
#define __ONCE_FLAG_INIT { 0 }
#define glue(a,b) _glue(a, b)
#define READIMM READIMM_(imm, OP_SIZE)
#define _PTRDIFF_T_DECLARED 
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define sigcontext_struct sigcontext
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define SIG_ERR ((__sighandler_t) -1)
#define EMU_FPU_H 
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define __INO_T_MATCHES_INO64_T 1
#define INT(code) gggg(interrupt, (uint8_t) code, state->ip, 0); end_block = true
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define LOCK_INITIALIZER {PTHREAD_MUTEX_INITIALIZER, 0}
#define POLL_IN POLL_IN
#define atomic_compare_exchange_weak_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 1, (SUC), (FAIL)); })
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define __GLIBC_USE_IEC_60559_EXT 0
#define __fsfilcnt_t_defined 
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define GRP5_ATOMIC(val,z) switch (modrm.opcode) { case 0: TRACE("lock inc"); ATOMIC_INC(val,z); break; case 1: TRACE("lock dec"); ATOMIC_DEC(val,z); break; default: TRACE("undefined"); UNDEFINED; }
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define UINT_LEAST32_MAX (4294967295U)
#define ZF (cpu->zf_res ? cpu->res == 0 : cpu->zf)
#define atomic_fetch_add_explicit(PTR,VAL,MO) __atomic_fetch_add ((PTR), (VAL), (MO))
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define UINTMAX_C(c) c ## UL
#define __lldiv_t_defined 1
#define MOD(byte) ((byte & 0b11000000) >> 6)
#define BSR(src,dst,z) los(bsr, src, dst, z)
#define FCMOVNBE(src) hh(fpu_cmovnbe, src)
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define __INT32_TYPE__ int
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define _ASSERT_H 1
#define __SIZEOF_DOUBLE__ 8
#define __time_t_defined 1
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define ADC(src,dst,z) los(adc, src, dst, z)
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __INT_LEAST32_WIDTH__ 32
#define __SI_ERRNO_THEN_CODE 1
#define ERRNO_DIE(msg) { perror(msg); abort(); }
#define FCMOVB(src) hh(fpu_cmovb, src)
#define FCMOVE(src) hh(fpu_cmove, src)
#define __SWORD_TYPE long int
#define SIGINT 2
#define __SIZEOF_FLOAT__ 4
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define __ldiv_t_defined 1
#define _T_SIZE 
#define SIGIOT SIGABRT
#define UINT8_C(c) c
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define __va_arg_pack() __builtin_va_arg_pack ()
#define SHRD(count,extra,dst,z) load(dst,z); if (arg_ ##count == arg_reg_c) op(shrd_cl, extra,z); else { op(shrd_imm, extra,z); GEN(imm); } store(dst,z)
#define CALL_REL(off) do { gggggg(call, state->orig_ip, -1, fake_ip, fake_ip, fake_ip + off); state->block_patch_ip = state->size - 4; jump_ips(-2, -1); end_block = true; } while (0)
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define __ATOMIC_CONSUME 1
#define MOV(src,dst,z) load(src, z); store(dst, z)
#define __GNUC_MINOR__ 3
#define __strncpy_safe __attribute__((nonstring))
#define __INT_FAST16_WIDTH__ 64
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define JIT_CACHE_SIZE (1 << 10)
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define ILL_PRVREG ILL_PRVREG
#define __LDBL_REDIR2_DECL(name) 
#define atomic_load(PTR) atomic_load_explicit (PTR, __ATOMIC_SEQ_CST)
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define INTMAX_C(c) c ## L
#define ATOMIC_BTS(bit,val,z) lo(atomic_bts, val, bit, z)
#define __glibc_clang_prereq(maj,min) 0
#define ILL_PRVOPC ILL_PRVOPC
#define CALL(loc) do { load(loc, OP_SIZE); ggggg(call_indir, state->orig_ip, -1, fake_ip, fake_ip); state->block_patch_ip = state->size - 3; jump_ips(-1, 0); end_block = true; } while (0)
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define BAD_PAGE 0x10000
#define FCHS() h(fpu_chs)
#define _STDINT_H 1
#define _RWLOCK_INTERNAL_H 
#define __DBL_MAX_10_EXP__ 308
#define __FILE_defined 1
#define UINT16_MAX (65535)
#define __INT16_C(c) c
#define __ARM_ARCH_ISA_A64 1
#define __U32_TYPE unsigned int
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define DECODER_ARGS struct gen_state *state, struct tlb *tlb
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define SIG_IGN ((__sighandler_t) 1)
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define static_assert _Static_assert
#define __sigstack_defined 1
#define __PTRDIFF_TYPE__ long int
#define AF_FLAG (1 << 4)
#define ATOMIC_FLAG_INIT { 0 }
#define DECODER_NAME gen_step
#define __clockid_t_defined 1
#define __kernel_old_uid_t __kernel_old_uid_t
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __size_t 
#define __ATOMIC_SEQ_CST 5
#define TLB_H 
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define F80_NAN ((float80) {.signif = 0xc000000000000000, .exp = 0x7fff, .sign = 0})
#define JIT_PAGE_HASH_SIZE (1 << 10)
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define gz(g,z) ga(g, sz(z))
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define __UINTPTR_TYPE__ long unsigned int
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define CLD_KILLED CLD_KILLED
#define SIGTERM 15
#define FPATAN() h(fpu_patan)
#define __bitwise__ 
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __linux__ 1
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define __LDBL_MIN_10_EXP__ (-4931)
#define FPE_FLTUNK FPE_FLTUNK
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __SI_BAND_TYPE long int
#define __HAVE_DISTINCT_FLOAT64X 0
#define MOVSX(src,dst,zs,zd) load(src, zs); gz(sign_extend, zs); store(dst, zd)
#define CVTE ga(cvte, sz(oz))
#define SIG_SETMASK 2
#define __SIZEOF_LONG_LONG__ 8
#define __USE_ATFILE 1
#define _GCC_PTRDIFF_T 
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define lo(o,src,dst,z) load(dst, z); op(o, src, z)
#define PTRDIFF_MAX (9223372036854775807L)
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define __WALL 0x40000000
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define __FLT_MIN_10_EXP__ (-37)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define MOVZX(src,dst,zs,zd) load(src, zs); gz(zero_extend, zs); store(dst, zd)
#define _ASM_GENERIC_TYPES_H 
#define glue3(a,b,c) glue(a, glue(b, c))
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define __ORDER_LITTLE_ENDIAN__ 1234
#define INT_LEAST16_MAX (32767)
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define SETN(cc,dst) ga(setn, cond_ ##cc); store(dst, 8)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define op(type,thing,z) do { extern gadget_t type ##_gadgets[]; if (!gen_op(state, type ##_gadgets, arg_ ##thing, &modrm, &imm, z, seg_gs, addr_offset)) return false; } while (0)
#define _BITS_CPU_SET_H 1
#define __P(args) args
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define atomic_compare_exchange_weak(PTR,VAL,DES) atomic_compare_exchange_weak_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define __fsblkcnt_t_defined 
#define BSF(src,dst,z) los(bsf, src, dst, z)
#define FPE_FLTUND FPE_FLTUND
#define SHR(count,val,z) los(shr, count, val, z)
#define _STDLIB_H 1
#define g(g) do { extern void gadget_ ##g(void); GEN(gadget_ ##g); } while (0)
#define h(h) gg(helper_0, h)
