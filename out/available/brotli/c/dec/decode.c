#define BADSIG SIG_ERR
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define BROTLI_64_BITS BROTLI_TARGET_64_BITS
#define BROTLI_ABI_VERSION 0x1009000
#define BROTLI_ALIGNED(N) __attribute__((aligned(N)))
#define BROTLI_ARM_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_ARRAY_PARAM(name) 
#define BROTLI_BIG_ENDIAN 0
#define BROTLI_BOOL int
#define BROTLI_BSR32(x) (31u ^ (uint32_t)__builtin_clz(x))
#define BROTLI_CODE_LENGTH_CODES (BROTLI_REPEAT_ZERO_CODE_LENGTH + 1)
#define BROTLI_COMMON_API 
#define BROTLI_COMMON_CONSTANTS_H_ 
#define BROTLI_COMMON_CONTEXT_H_ 
#define BROTLI_COMMON_DICTIONARY_H_ 
#define BROTLI_COMMON_PLATFORM_H_ 
#define BROTLI_COMMON_PORT_H_ 
#define BROTLI_COMMON_SHARED_DICTIONARY_H_ 
#define BROTLI_COMMON_SHARED_DICTIONARY_INTERNAL_H_ 
#define BROTLI_COMMON_TRANSFORM_H_ 
#define BROTLI_COMMON_TYPES_H_ 
#define BROTLI_COMMON_VERSION_H_ 
#define BROTLI_CONTEXT(P1,P2,LUT) ((LUT)[P1] | ((LUT) + 256)[P2])
#define BROTLI_CONTEXT_LUT(MODE) (&_kBrotliContextLookupTable[(MODE) << 9])
#define BROTLI_CONTEXT_MAP_MAX_RLE 16
#define BROTLI_DCHECK(x) 
#define BROTLI_DECODER_ALLOC(S,L) S->alloc_func(S->memory_manager_opaque, L)
#define BROTLI_DECODER_ERROR_CODES_LIST(BROTLI_ERROR_CODE,SEPARATOR) BROTLI_ERROR_CODE(_, NO_ERROR, 0) SEPARATOR BROTLI_ERROR_CODE(_, SUCCESS, 1) SEPARATOR BROTLI_ERROR_CODE(_, NEEDS_MORE_INPUT, 2) SEPARATOR BROTLI_ERROR_CODE(_, NEEDS_MORE_OUTPUT, 3) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, EXUBERANT_NIBBLE, -1) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, RESERVED, -2) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, EXUBERANT_META_NIBBLE, -3) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, SIMPLE_HUFFMAN_ALPHABET, -4) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, SIMPLE_HUFFMAN_SAME, -5) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, CL_SPACE, -6) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, HUFFMAN_SPACE, -7) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, CONTEXT_MAP_REPEAT, -8) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, BLOCK_LENGTH_1, -9) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, BLOCK_LENGTH_2, -10) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, TRANSFORM, -11) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, DICTIONARY, -12) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, WINDOW_BITS, -13) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, PADDING_1, -14) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, PADDING_2, -15) SEPARATOR BROTLI_ERROR_CODE(_ERROR_FORMAT_, DISTANCE, -16) SEPARATOR BROTLI_ERROR_CODE(_ERROR_, COMPOUND_DICTIONARY, -18) SEPARATOR BROTLI_ERROR_CODE(_ERROR_, DICTIONARY_NOT_SET, -19) SEPARATOR BROTLI_ERROR_CODE(_ERROR_, INVALID_ARGUMENTS, -20) SEPARATOR BROTLI_ERROR_CODE(_ERROR_ALLOC_, CONTEXT_MODES, -21) SEPARATOR BROTLI_ERROR_CODE(_ERROR_ALLOC_, TREE_GROUPS, -22) SEPARATOR BROTLI_ERROR_CODE(_ERROR_ALLOC_, CONTEXT_MAP, -25) SEPARATOR BROTLI_ERROR_CODE(_ERROR_ALLOC_, RING_BUFFER_1, -26) SEPARATOR BROTLI_ERROR_CODE(_ERROR_ALLOC_, RING_BUFFER_2, -27) SEPARATOR BROTLI_ERROR_CODE(_ERROR_ALLOC_, BLOCK_TYPE_TREES, -30) SEPARATOR BROTLI_ERROR_CODE(_ERROR_, UNREACHABLE, -31)
#define BROTLI_DECODER_FREE(S,X) { S->free_func(S->memory_manager_opaque, X); X = NULL; }
#define BROTLI_DEC_API 
#define BROTLI_DEC_BIT_READER_H_ 
#define BROTLI_DEC_DECODE_H_ 
#define BROTLI_DEC_HUFFMAN_H_ 
#define BROTLI_DEC_PREFIX_H_ 
#define BROTLI_DEC_STATE_H_ 
#define BROTLI_DISTANCE_ALPHABET_SIZE(NPOSTFIX,NDIRECT,MAXNBITS) ( BROTLI_NUM_DISTANCE_SHORT_CODES + (NDIRECT) + ((MAXNBITS) << ((NPOSTFIX) + 1)))
#define BROTLI_DISTANCE_CONTEXT_BITS 2
#define BROTLI_DUMP() (void)(0)
#define BROTLI_ENC_API 
#define BROTLI_ENC_EXTRA_API BROTLI_INTERNAL
#define BROTLI_FAILURE(CODE) (BROTLI_DUMP(), CODE)
#define BROTLI_FALSE 0
#define BROTLI_GNUC_HAS_ATTRIBUTE(attribute,major,minor,patch) __has_attribute(attribute)
#define BROTLI_GNUC_HAS_BUILTIN(builtin,major,minor,patch) __has_builtin(builtin)
#define BROTLI_GNUC_VERSION BROTLI_MAKE_VERSION(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
#define BROTLI_GNUC_VERSION_CHECK(major,minor,patch) (BROTLI_GNUC_VERSION >= BROTLI_MAKE_VERSION(major, minor, patch))
#define BROTLI_HAS_FEATURE(feature) __has_feature(feature)
#define BROTLI_HAS_UBFX (!!1)
#define BROTLI_HAVE_LOG2 1
#define BROTLI_HC_ADJUST_TABLE_INDEX(H,V) H += (V)
#define BROTLI_HC_FAST_LOAD_BITS(H) (H->bits)
#define BROTLI_HC_FAST_LOAD_VALUE(H) (H->value)
#define BROTLI_HC_MARK_TABLE_FOR_FAST_LOAD(H) 
#define BROTLI_HUFFMAN_MAX_CODE_LENGTH 15
#define BROTLI_HUFFMAN_MAX_CODE_LENGTH_CODE_LENGTH 5
#define BROTLI_HUFFMAN_MAX_SIZE_258 632
#define BROTLI_HUFFMAN_MAX_SIZE_26 396
#define BROTLI_HUFFMAN_MAX_SIZE_272 646
#define BROTLI_IAR_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_IBM_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_INITIAL_REPEATED_CODE_LENGTH 8
#define BROTLI_INLINE BROTLI_MAYBE_INLINE __attribute__((__always_inline__))
#define BROTLI_INTEL_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_INTERNAL __attribute__ ((visibility ("hidden")))
#define BROTLI_IS_CONSTANT(x) (!!__builtin_constant_p(x))
#define BROTLI_LARGE_MAX_DISTANCE_BITS 62U
#define BROTLI_LARGE_MAX_WBITS 30
#define BROTLI_LARGE_MIN_WBITS 10
#define BROTLI_LAST_ERROR_CODE BROTLI_DECODER_ERROR_UNREACHABLE
#define BROTLI_LITERAL_CONTEXT_BITS 6
#define BROTLI_LITTLE_ENDIAN 1
#define BROTLI_LOG(x) 
#define BROTLI_LOG_ARRAY_INDEX(array_name,idx) BROTLI_LOG(("[%s] %s[%lu] = %lu\n", __func__, #array_name, (unsigned long)(idx), (unsigned long)array_name[idx]))
#define BROTLI_LOG_UINT(name) BROTLI_LOG(("[%s] %s = %lu\n", __func__, #name, (unsigned long)(name)))
#define BROTLI_MAKE_UINT64_T(high,low) ((((uint64_t)(high)) << 32) | low)
#define BROTLI_MAKE_VERSION(major,minor,revision) (((major) * 1000000) + ((minor) * 1000) + (revision))
#define BROTLI_MAX(T,A,B) (brotli_max_ ## T((A), (B)))
#define BROTLI_MAX_ALLOWED_DISTANCE 0x7FFFFFFC
#define BROTLI_MAX_BACKWARD_LIMIT(W) (((size_t)1 << (W)) - BROTLI_WINDOW_GAP)
#define BROTLI_MAX_BLOCK_TYPE_SYMBOLS (BROTLI_MAX_NUMBER_OF_BLOCK_TYPES + 2)
#define BROTLI_MAX_CONTEXT_MAP_SYMBOLS (BROTLI_MAX_NUMBER_OF_BLOCK_TYPES + BROTLI_CONTEXT_MAP_MAX_RLE)
#define BROTLI_MAX_DICTIONARY_WORD_LENGTH 24
#define BROTLI_MAX_DISTANCE 0x3FFFFFC
#define BROTLI_MAX_DISTANCE_BITS 24U
#define BROTLI_MAX_NDIRECT 120
#define BROTLI_MAX_NPOSTFIX 3
#define BROTLI_MAX_NUMBER_OF_BLOCK_TYPES 256
#define BROTLI_MAYBE_INLINE inline
#define BROTLI_MIN(T,A,B) (brotli_min_ ## T((A), (B)))
#define BROTLI_MIN_DICTIONARY_WORD_LENGTH 4
#define BROTLI_MSVC_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_NOINLINE __attribute__((__noinline__))
#define BROTLI_NUM_BLOCK_LEN_SYMBOLS 26
#define BROTLI_NUM_COMMAND_SYMBOLS 704
#define BROTLI_NUM_DISTANCE_SHORT_CODES 16
#define BROTLI_NUM_DISTANCE_SYMBOLS BROTLI_DISTANCE_ALPHABET_SIZE( BROTLI_MAX_NDIRECT, BROTLI_MAX_NPOSTFIX, BROTLI_LARGE_MAX_DISTANCE_BITS)
#define BROTLI_NUM_INS_COPY_CODES 24
#define BROTLI_NUM_LITERAL_SYMBOLS 256
#define BROTLI_PGI_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_PREDICT_FALSE(x) (__builtin_expect(x, 0))
#define BROTLI_PREDICT_TRUE(x) (__builtin_expect(!!(x), 1))
#define BROTLI_PUBLIC __attribute__ ((visibility ("default")))
#define BROTLI_RBIT(x) BrotliRBit(x)
#define BROTLI_REPEAT_4(X) {X; X; X; X;}
#define BROTLI_REPEAT_5(X) {X; X; X; X; X;}
#define BROTLI_REPEAT_6(X) {X; X; X; X; X; X;}
#define BROTLI_REPEAT_PREVIOUS_CODE_LENGTH 16
#define BROTLI_REPEAT_ZERO_CODE_LENGTH 17
#define BROTLI_RESTRICT restrict
#define BROTLI_SHORT_FILL_BIT_WINDOW_READ (sizeof(brotli_reg_t) >> 1)
#define BROTLI_SIZE_MAX (~((size_t)0))
#define BROTLI_SUNPRO_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_SWAP(T,A,I,J) { T __brotli_swap_tmp = (A)[(I)]; (A)[(I)] = (A)[(J)]; (A)[(J)] = __brotli_swap_tmp; }
#define BROTLI_TARGET_64_BITS 1
#define BROTLI_TARGET_ARMV8_64 
#define BROTLI_TARGET_ARMV8_ANY 
#define BROTLI_TARGET_NEON 
#define BROTLI_TINYC_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_TI_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_TRANSFORMS_MAX_CUT_OFF BROTLI_TRANSFORM_OMIT_LAST_9
#define BROTLI_TRANSFORM_PREFIX(T,I) (&(T)->prefix_suffix[ (T)->prefix_suffix_map[BROTLI_TRANSFORM_PREFIX_ID(T, I)]])
#define BROTLI_TRANSFORM_PREFIX_ID(T,I) ((T)->transforms[((I) * 3) + 0])
#define BROTLI_TRANSFORM_SUFFIX(T,I) (&(T)->prefix_suffix[ (T)->prefix_suffix_map[BROTLI_TRANSFORM_SUFFIX_ID(T, I)]])
#define BROTLI_TRANSFORM_SUFFIX_ID(T,I) ((T)->transforms[((I) * 3) + 2])
#define BROTLI_TRANSFORM_TYPE(T,I) ((T)->transforms[((I) * 3) + 1])
#define BROTLI_TRUE 1
#define BROTLI_TZCNT64 __builtin_ctzll
#define BROTLI_UINT32_MAX (~((uint32_t)0))
#define BROTLI_UNALIGNED_LOAD16LE BrotliUnalignedRead16
#define BROTLI_UNALIGNED_LOAD32LE BrotliUnalignedRead32
#define BROTLI_UNALIGNED_LOAD64LE BrotliUnalignedRead64
#define BROTLI_UNALIGNED_READ_FAST (!!1)
#define BROTLI_UNALIGNED_STORE64LE BrotliUnalignedWrite64
#define BROTLI_UNUSED(X) (void)(X)
#define BROTLI_UNUSED_FUNCTION static BROTLI_INLINE __attribute__ ((unused))
#define BROTLI_VERSION 0x1000009
#define BROTLI_WINDOW_GAP 16
#define BUS_ADRALN 1
#define BUS_ADRERR 2
#define BUS_NOOP 0
#define BUS_OBJERR 3
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define BrotliDecoderState BrotliDecoderStateInternal
#define BrotliSharedDictionary BrotliSharedDictionaryInternal
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define CLD_CONTINUED 6
#define CLD_DUMPED 3
#define CLD_EXITED 1
#define CLD_KILLED 2
#define CLD_NOOP 0
#define CLD_STOPPED 5
#define CLD_TRAPPED 4
#define CPUMON_MAKE_FATAL 0x1000
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define FOOTPRINT_INTERVAL_RESET 0x1
#define FPE_FLTDIV 1
#define FPE_FLTINV 5
#define FPE_FLTOVF 2
#define FPE_FLTRES 4
#define FPE_FLTSUB 6
#define FPE_FLTUND 3
#define FPE_INTDIV 7
#define FPE_INTOVF 8
#define FPE_NOOP 0
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define HTONS(x) (x) = htons((__uint16_t)x)
#define HUFFMAN_TABLE_BITS 8U
#define HUFFMAN_TABLE_MASK 0xFF
#define ILL_BADSTK 8
#define ILL_COPROC 7
#define ILL_ILLADR 5
#define ILL_ILLOPC 1
#define ILL_ILLOPN 4
#define ILL_ILLTRP 2
#define ILL_NOOP 0
#define ILL_PRVOPC 3
#define ILL_PRVREG 6
#define INT16_C(v) (v)
#define INT16_MAX 32767
#define INT16_MIN -32768
#define INT32_C(v) (v)
#define INT32_MAX 2147483647
#define INT32_MIN (-INT32_MAX-1)
#define INT64_C(v) (v ## LL)
#define INT64_MAX 9223372036854775807LL
#define INT64_MIN (-INT64_MAX-1)
#define INT8_C(v) (v)
#define INT8_MAX 127
#define INT8_MIN -128
#define INTMAX_C(v) (v ## L)
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define INTMAX_MIN (-INTMAX_MAX-1)
#define INTPTR_MAX 9223372036854775807L
#define INTPTR_MIN (-INTPTR_MAX-1)
#define INT_FAST16_MAX INT16_MAX
#define INT_FAST16_MIN INT16_MIN
#define INT_FAST32_MAX INT32_MAX
#define INT_FAST32_MIN INT32_MIN
#define INT_FAST64_MAX INT64_MAX
#define INT_FAST64_MIN INT64_MIN
#define INT_FAST8_MAX INT8_MAX
#define INT_FAST8_MIN INT8_MIN
#define INT_LEAST16_MAX INT16_MAX
#define INT_LEAST16_MIN INT16_MIN
#define INT_LEAST32_MAX INT32_MAX
#define INT_LEAST32_MIN INT32_MIN
#define INT_LEAST64_MAX INT64_MAX
#define INT_LEAST64_MIN INT64_MIN
#define INT_LEAST8_MAX INT8_MAX
#define INT_LEAST8_MIN INT8_MIN
#define IOPOL_APPLICATION IOPOL_STANDARD
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define IOPOL_ATIME_UPDATES_OFF 1
#define IOPOL_DEFAULT 0
#define IOPOL_IMPORTANT 1
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define IOPOL_PASSIVE 2
#define IOPOL_SCOPE_DARWIN_BG 2
#define IOPOL_SCOPE_PROCESS 0
#define IOPOL_SCOPE_THREAD 1
#define IOPOL_STANDARD 5
#define IOPOL_THROTTLE 3
#define IOPOL_TYPE_DISK 0
#define IOPOL_TYPE_VFS_ALLOW_LOW_SPACE_WRITES 9
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define IOPOL_UTILITY 4
#define IOPOL_VFS_ALLOW_LOW_SPACE_WRITES_OFF 0
#define IOPOL_VFS_ALLOW_LOW_SPACE_WRITES_ON 1
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define MAC_OS_VERSION_11_0 110000
#define MAC_OS_VERSION_12_0 120000
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_15_1 101501
#define MAC_OS_X_VERSION_10_16 101600
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_5 1050
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define MB_CUR_MAX __mb_cur_max
#define MINSIGSTKSZ 32768
#define NSIG __DARWIN_NSIG
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define NULL ((void*)0)
#define OS_MACOSX 1
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define POLL_ERR 4
#define POLL_HUP 6
#define POLL_IN 1
#define POLL_MSG 3
#define POLL_OUT 2
#define POLL_PRI 5
#define PRIO_DARWIN_BG 0x1000
#define PRIO_DARWIN_NONUI 0x1001
#define PRIO_DARWIN_PROCESS 4
#define PRIO_DARWIN_THREAD 3
#define PRIO_MAX 20
#define PRIO_MIN -20
#define PRIO_PGRP 1
#define PRIO_PROCESS 0
#define PRIO_USER 2
#define PTRDIFF_MAX INTMAX_MAX
#define PTRDIFF_MIN INTMAX_MIN
#define RAND_MAX 0x7fffffff
#define RLIMIT_AS 5
#define RLIMIT_CORE 4
#define RLIMIT_CPU 0
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define RLIMIT_DATA 2
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define RLIMIT_FSIZE 1
#define RLIMIT_MEMLOCK 6
#define RLIMIT_NOFILE 8
#define RLIMIT_NPROC 7
#define RLIMIT_RSS RLIMIT_AS
#define RLIMIT_STACK 3
#define RLIMIT_THREAD_CPULIMITS 0x3
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define RLIM_NLIMITS 9
#define RLIM_SAVED_CUR RLIM_INFINITY
#define RLIM_SAVED_MAX RLIM_INFINITY
#define RSIZE_MAX (SIZE_MAX >> 1)
#define RUSAGE_CHILDREN -1
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V1 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define RUSAGE_SELF 0
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define SA_64REGSET 0x0200
#define SA_NOCLDSTOP 0x0008
#define SA_NOCLDWAIT 0x0020
#define SA_NODEFER 0x0010
#define SA_ONSTACK 0x0001
#define SA_RESETHAND 0x0004
#define SA_RESTART 0x0002
#define SA_SIGINFO 0x0040
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define SA_USERTRAMP 0x0100
#define SEGV_ACCERR 2
#define SEGV_MAPERR 1
#define SEGV_NOOP 0
#define SHARED_BROTLI_MAX_COMPOUND_DICTS 15
#define SHARED_BROTLI_MAX_DICTIONARY_WORD_LENGTH 31
#define SHARED_BROTLI_MIN_DICTIONARY_WORD_LENGTH 4
#define SHARED_BROTLI_NUM_DICTIONARY_CONTEXTS 64
#define SIGABRT 6
#define SIGALRM 14
#define SIGBUS 10
#define SIGCHLD 20
#define SIGCONT 19
#define SIGEMT 7
#define SIGEV_NONE 0
#define SIGEV_SIGNAL 1
#define SIGEV_THREAD 3
#define SIGFPE 8
#define SIGHUP 1
#define SIGILL 4
#define SIGINFO 29
#define SIGINT 2
#define SIGIO 23
#define SIGIOT SIGABRT
#define SIGKILL 9
#define SIGPIPE 13
#define SIGPROF 27
#define SIGQUIT 3
#define SIGSEGV 11
#define SIGSTKSZ 131072
#define SIGSTOP 17
#define SIGSYS 12
#define SIGTERM 15
#define SIGTRAP 5
#define SIGTSTP 18
#define SIGTTIN 21
#define SIGTTOU 22
#define SIGURG 16
#define SIGUSR1 30
#define SIGUSR2 31
#define SIGVTALRM 26
#define SIGWINCH 28
#define SIGXCPU 24
#define SIGXFSZ 25
#define SIG_ATOMIC_MAX INT32_MAX
#define SIG_ATOMIC_MIN INT32_MIN
#define SIG_BLOCK 1
#define SIG_DFL (void (*)(int))0
#define SIG_ERR ((void (*)(int))-1)
#define SIG_HOLD (void (*)(int))5
#define SIG_IGN (void (*)(int))1
#define SIG_SETMASK 3
#define SIG_UNBLOCK 2
#define SIZE_MAX UINTPTR_MAX
#define SI_ASYNCIO 0x10004
#define SI_MESGQ 0x10005
#define SI_QUEUE 0x10002
#define SI_TIMER 0x10003
#define SI_USER 0x10001
#define SS_DISABLE 0x0004
#define SS_ONSTACK 0x0001
#define SV_INTERRUPT SA_RESTART
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define SV_NODEFER SA_NODEFER
#define SV_ONSTACK SA_ONSTACK
#define SV_RESETHAND SA_RESETHAND
#define SV_SIGINFO SA_SIGINFO
#define TO_BROTLI_BOOL(X) (!!(X) ? BROTLI_TRUE : BROTLI_FALSE)
#define TRAP_BRKPT 1
#define TRAP_TRACE 2
#define UINT16_C(v) (v)
#define UINT16_MAX 65535
#define UINT32_C(v) (v ## U)
#define UINT32_MAX 4294967295U
#define UINT64_C(v) (v ## ULL)
#define UINT64_MAX 18446744073709551615ULL
#define UINT8_C(v) (v)
#define UINT8_MAX 255
#define UINTMAX_C(v) (v ## UL)
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define UINTPTR_MAX 18446744073709551615UL
#define UINT_FAST16_MAX UINT16_MAX
#define UINT_FAST32_MAX UINT32_MAX
#define UINT_FAST64_MAX UINT64_MAX
#define UINT_FAST8_MAX UINT8_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define UINT_LEAST64_MAX UINT64_MAX
#define UINT_LEAST8_MAX UINT8_MAX
#define USER_ADDR_NULL ((user_addr_t) 0)
#define WAIT_ANY (-1)
#define WAIT_MYPGRP 0
#define WAKEMON_DISABLE 0x02
#define WAKEMON_ENABLE 0x01
#define WAKEMON_GET_PARAMS 0x04
#define WAKEMON_MAKE_FATAL 0x10
#define WAKEMON_SET_DEFAULTS 0x08
#define WCHAR_MAX __WCHAR_MAX__
#define WCHAR_MIN (-WCHAR_MAX-1)
#define WCONTINUED 0x00000010
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define WCOREFLAG 0200
#define WEXITED 0x00000004
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define WINT_MAX INT32_MAX
#define WINT_MIN INT32_MIN
#define WNOHANG 0x00000001
#define WNOWAIT 0x00000020
#define WSTOPPED 0x00000008
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define WTERMSIG(x) (_WSTATUS(x))
#define WUNTRACED 0x00000002
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define _ALLOCA_H_ 
#define _ARM_ARCH_H 
#define _ARM_MACHTYPES_H_ 
#define _ARM_SIGNAL_ 1
#define _ARM__ENDIAN_H_ 
#define _BSD_ARM__TYPES_H_ 
#define _BSD_MACHINE_ENDIAN_H_ 
#define _BSD_MACHINE_SIGNAL_H_ 
#define _BSD_MACHINE_TYPES_H_ 
#define _BSD_MACHINE__MCONTEXT_H_ 
#define _BSD_MACHINE__TYPES_H_ 
#define _CDEFS_H_ 
#define _CT_RUNE_T 
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define _DARWIN_FEATURE_ONLY_64_BIT_INODE 1
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define _DARWIN_FEATURE_ONLY_VERS_1050 1
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define _DEV_T 
#define _ERRNO_T 
#define _FORTIFY_SOURCE 2
#define _ID_T 
#define _INT16_T 
#define _INT32_T 
#define _INT64_T 
#define _INT8_T 
#define _INTMAX_T 
#define _INTPTR_T 
#define _LP64 1
#define _MACHTYPES_H_ 
#define _MACH_ARM__STRUCTS_H_ 
#define _MACH_MACHINE__STRUCTS_H_ 
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define _MCONTEXT_T 
#define _MODE_T 
#define _OS_OSBYTEORDERARM_H 
#define _OS__OSBYTEORDER_H 
#define _PID_T 
#define _PTHREAD_ATTR_T 
#define _PTRDIFF_T 
#define _QUAD_HIGHWORD 1
#define _QUAD_LOWWORD 0
#define _RLIMIT_POSIX_FLAG 0x1000
#define _RSIZE_T 
#define _RUNE_T 
#define _SECURE__COMMON_H_ 
#define _SECURE__STRINGS_H_ 
#define _SECURE__STRING_H_ 
#define _SIGSET_T 
#define _SIZE_T 
#define _SSIZE_T 
#define _STDINT_H_ 
#define _STDLIB_H_ 
#define _STRINGS_H_ 
#define _STRING_H_ 
#define _STRUCT_ARM_CPMU_STATE64 struct __darwin_arm_cpmu_state64
#define _STRUCT_ARM_DEBUG_STATE32 struct __darwin_arm_debug_state32
#define _STRUCT_ARM_DEBUG_STATE64 struct __darwin_arm_debug_state64
#define _STRUCT_ARM_EXCEPTION_STATE struct __darwin_arm_exception_state
#define _STRUCT_ARM_EXCEPTION_STATE64 struct __darwin_arm_exception_state64
#define _STRUCT_ARM_LEGACY_DEBUG_STATE struct __arm_legacy_debug_state
#define _STRUCT_ARM_NEON_STATE struct __darwin_arm_neon_state
#define _STRUCT_ARM_NEON_STATE64 struct __darwin_arm_neon_state64
#define _STRUCT_ARM_PAGEIN_STATE struct __arm_pagein_state
#define _STRUCT_ARM_THREAD_STATE struct __darwin_arm_thread_state
#define _STRUCT_ARM_THREAD_STATE64 struct __darwin_arm_thread_state64
#define _STRUCT_ARM_VFP_STATE struct __darwin_arm_vfp_state
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define _STRUCT_TIMEVAL struct timeval
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define _SYS_RESOURCE_H_ 
#define _SYS_SIGNAL_H_ 
#define _SYS_WAIT_H_ 
#define _SYS__ENDIAN_H_ 
#define _SYS__PTHREAD_TYPES_H_ 
#define _SYS__TYPES_H_ 
#define _UID_T 
#define _UINT16_T 
#define _UINT32_T 
#define _UINT64_T 
#define _UINT8_T 
#define _UINTMAX_T 
#define _UINTPTR_T 
#define _USE_FORTIFY_LEVEL 2
#define _U_INT16_T 
#define _U_INT32_T 
#define _U_INT64_T 
#define _U_INT8_T 
#define _WCHAR_T 
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define _WSTOPPED 0177
#define _W_INT(w) (*(int *)&(w))
#define __AARCH64EL__ 1
#define __AARCH64_CMODEL_SMALL__ 1
#define __AARCH64_SIMD__ 1
#define __API_A(x) __attribute__((availability(__API_AVAILABLE_PLATFORM_##x)))
#define __API_APPLY_TO any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)
#define __API_AVAILABLE(...) __API_AVAILABLE_GET_MACRO(__VA_ARGS__,__API_AVAILABLE7, __API_AVAILABLE6, __API_AVAILABLE5, __API_AVAILABLE4, __API_AVAILABLE3, __API_AVAILABLE2, __API_AVAILABLE1, 0)(__VA_ARGS__)
#define __API_AVAILABLE1(x) __API_A(x)
#define __API_AVAILABLE2(x,y) __API_A(x) __API_A(y)
#define __API_AVAILABLE3(x,y,z) __API_A(x) __API_A(y) __API_A(z)
#define __API_AVAILABLE4(x,y,z,t) __API_A(x) __API_A(y) __API_A(z) __API_A(t)
#define __API_AVAILABLE5(x,y,z,t,b) __API_A(x) __API_A(y) __API_A(z) __API_A(t) __API_A(b)
#define __API_AVAILABLE6(x,y,z,t,b,m) __API_A(x) __API_A(y) __API_A(z) __API_A(t) __API_A(b) __API_A(m)
#define __API_AVAILABLE7(x,y,z,t,b,m,d) __API_A(x) __API_A(y) __API_A(z) __API_A(t) __API_A(b) __API_A(m) __API_A(d)
#define __API_AVAILABLE_BEGIN(...) _Pragma("clang attribute push") __API_AVAILABLE_BEGIN_GET_MACRO(__VA_ARGS__,__API_AVAILABLE_BEGIN7, __API_AVAILABLE_BEGIN6, __API_AVAILABLE_BEGIN5, __API_AVAILABLE_BEGIN4, __API_AVAILABLE_BEGIN3, __API_AVAILABLE_BEGIN2, __API_AVAILABLE_BEGIN1, 0)(__VA_ARGS__)
#define __API_AVAILABLE_BEGIN1(a) __API_A_BEGIN(a)
#define __API_AVAILABLE_BEGIN2(a,b) __API_A_BEGIN(a) __API_A_BEGIN(b)
#define __API_AVAILABLE_BEGIN3(a,b,c) __API_A_BEGIN(a) __API_A_BEGIN(b) __API_A_BEGIN(c)
#define __API_AVAILABLE_BEGIN4(a,b,c,d) __API_A_BEGIN(a) __API_A_BEGIN(b) __API_A_BEGIN(c) __API_A_BEGIN(d)
#define __API_AVAILABLE_BEGIN5(a,b,c,d,e) __API_A_BEGIN(a) __API_A_BEGIN(b) __API_A_BEGIN(c) __API_A_BEGIN(d) __API_A_BEGIN(e)
#define __API_AVAILABLE_BEGIN6(a,b,c,d,e,f) __API_A_BEGIN(a) __API_A_BEGIN(b) __API_A_BEGIN(c) __API_A_BEGIN(d) __API_A_BEGIN(e) __API_A_BEGIN(f)
#define __API_AVAILABLE_BEGIN7(a,b,c,d,e,f,g) __API_A_BEGIN(a) __API_A_BEGIN(b) __API_A_BEGIN(c) __API_A_BEGIN(d) __API_A_BEGIN(e) __API_A_BEGIN(f) __API_A_BEGIN(g)
#define __API_AVAILABLE_BEGIN_GET_MACRO(_1,_2,_3,_4,_5,_6,_7,NAME,...) NAME
#define __API_AVAILABLE_END _Pragma("clang attribute pop")
#define __API_AVAILABLE_GET_MACRO(_1,_2,_3,_4,_5,_6,_7,NAME,...) NAME
#define __API_AVAILABLE_PLATFORM_driverkit(x) driverkit,introduced=x
#define __API_AVAILABLE_PLATFORM_ios(x) ios,introduced=x
#define __API_AVAILABLE_PLATFORM_macCatalyst(x) macCatalyst,introduced=x
#define __API_AVAILABLE_PLATFORM_macos(x) macos,introduced=x
#define __API_AVAILABLE_PLATFORM_macosx(x) macosx,introduced=x
#define __API_AVAILABLE_PLATFORM_tvos(x) tvos,introduced=x
#define __API_AVAILABLE_PLATFORM_uikitformac(x) uikitformac,introduced=x
#define __API_AVAILABLE_PLATFORM_watchos(x) watchos,introduced=x
#define __API_A_BEGIN(x) _Pragma(__API_RANGE_STRINGIFY (clang attribute (__attribute__((availability(__API_AVAILABLE_PLATFORM_##x))), apply_to = __API_APPLY_TO)))
#define __API_D(msg,x) __attribute__((availability(__API_DEPRECATED_PLATFORM_##x,message=msg)))
#define __API_DEPRECATED(...) __API_DEPRECATED_MSG_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_MSG8,__API_DEPRECATED_MSG7,__API_DEPRECATED_MSG6,__API_DEPRECATED_MSG5,__API_DEPRECATED_MSG4,__API_DEPRECATED_MSG3,__API_DEPRECATED_MSG2,__API_DEPRECATED_MSG1, 0)(__VA_ARGS__)
#define __API_DEPRECATED_BEGIN(...) _Pragma("clang attribute push") __API_DEPRECATED_BEGIN_MSG_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_BEGIN_MSG8,__API_DEPRECATED_BEGIN_MSG7, __API_DEPRECATED_BEGIN_MSG6, __API_DEPRECATED_BEGIN_MSG5, __API_DEPRECATED_BEGIN_MSG4, __API_DEPRECATED_BEGIN_MSG3, __API_DEPRECATED_BEGIN_MSG2, __API_DEPRECATED_BEGIN_MSG1, 0)(__VA_ARGS__)
#define __API_DEPRECATED_BEGIN_MSG2(msg,a) __API_D_BEGIN(msg,a)
#define __API_DEPRECATED_BEGIN_MSG3(msg,a,b) __API_D_BEGIN(msg,a) __API_D_BEGIN(msg,b)
#define __API_DEPRECATED_BEGIN_MSG4(msg,a,b,c) __API_D_BEGIN(msg,a) __API_D_BEGIN(msg,b) __API_D_BEGIN(msg,c)
#define __API_DEPRECATED_BEGIN_MSG5(msg,a,b,c,d) __API_D_BEGIN(msg,a) __API_D_BEGIN(msg,b) __API_D_BEGIN(msg,c) __API_D_BEGIN(msg,d)
#define __API_DEPRECATED_BEGIN_MSG6(msg,a,b,c,d,e) __API_D_BEGIN(msg,a) __API_D_BEGIN(msg,b) __API_D_BEGIN(msg,c) __API_D_BEGIN(msg,d) __API_D_BEGIN(msg,e)
#define __API_DEPRECATED_BEGIN_MSG7(msg,a,b,c,d,e,f) __API_D_BEGIN(msg,a) __API_D_BEGIN(msg,b) __API_D_BEGIN(msg,c) __API_D_BEGIN(msg,d) __API_D_BEGIN(msg,e) __API_D_BEGIN(msg,f)
#define __API_DEPRECATED_BEGIN_MSG8(msg,a,b,c,d,e,f,g) __API_D_BEGIN(msg,a) __API_D_BEGIN(msg,b) __API_D_BEGIN(msg,c) __API_D_BEGIN(msg,d) __API_D_BEGIN(msg,e) __API_D_BEGIN(msg,f) __API_D_BEGIN(msg,g)
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) NAME
#define __API_DEPRECATED_BEGIN_REP2(rep,a) __API_R_BEGIN(rep,a)
#define __API_DEPRECATED_BEGIN_REP3(rep,a,b) __API_R_BEGIN(rep,a) __API_R_BEGIN(rep,b)
#define __API_DEPRECATED_BEGIN_REP4(rep,a,b,c) __API_R_BEGIN(rep,a) __API_R_BEGIN(rep,b) __API_R_BEGIN(rep,c)
#define __API_DEPRECATED_BEGIN_REP5(rep,a,b,c,d) __API_R_BEGIN(rep,a) __API_R_BEGIN(rep,b) __API_R_BEGIN(rep,c) __API_R_BEGIN(rep,d)
#define __API_DEPRECATED_BEGIN_REP6(rep,a,b,c,d,e) __API_R_BEGIN(rep,a) __API_R_BEGIN(rep,b) __API_R_BEGIN(rep,c) __API_R_BEGIN(rep,d) __API_R_BEGIN(rep,e)
#define __API_DEPRECATED_BEGIN_REP7(rep,a,b,c,d,e,f) __API_R_BEGIN(rep,a) __API_R_BEGIN(rep,b) __API_R_BEGIN(rep,c) __API_R_BEGIN(rep,d) __API_R_BEGIN(rep,e) __API_R_BEGIN(rep,f)
#define __API_DEPRECATED_BEGIN_REP8(rep,a,b,c,d,e,f,g) __API_R_BEGIN(rep,a) __API_R_BEGIN(rep,b) __API_R_BEGIN(rep,c) __API_R_BEGIN(rep,d) __API_R_BEGIN(rep,e) __API_R_BEGIN(rep,f) __API_R_BEGIN(rep,g)
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO(_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) NAME
#define __API_DEPRECATED_END _Pragma("clang attribute pop")
#define __API_DEPRECATED_MSG2(msg,x) __API_D(msg,x)
#define __API_DEPRECATED_MSG3(msg,x,y) __API_D(msg,x) __API_D(msg,y)
#define __API_DEPRECATED_MSG4(msg,x,y,z) __API_DEPRECATED_MSG3(msg,x,y) __API_D(msg,z)
#define __API_DEPRECATED_MSG5(msg,x,y,z,t) __API_DEPRECATED_MSG4(msg,x,y,z) __API_D(msg,t)
#define __API_DEPRECATED_MSG6(msg,x,y,z,t,b) __API_DEPRECATED_MSG5(msg,x,y,z,t) __API_D(msg,b)
#define __API_DEPRECATED_MSG7(msg,x,y,z,t,b,m) __API_DEPRECATED_MSG6(msg,x,y,z,t,b) __API_D(msg,m)
#define __API_DEPRECATED_MSG8(msg,x,y,z,t,b,m,d) __API_DEPRECATED_MSG7(msg,x,y,z,t,b,m) __API_D(msg,d)
#define __API_DEPRECATED_MSG_GET_MACRO(_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) NAME
#define __API_DEPRECATED_PLATFORM_driverkit(x,y) driverkit,introduced=x,deprecated=y
#define __API_DEPRECATED_PLATFORM_ios(x,y) ios,introduced=x,deprecated=y
#define __API_DEPRECATED_PLATFORM_macCatalyst(x,y) macCatalyst,introduced=x,deprecated=y
#define __API_DEPRECATED_PLATFORM_macos(x,y) macos,introduced=x,deprecated=y
#define __API_DEPRECATED_PLATFORM_macosx(x,y) macosx,introduced=x,deprecated=y
#define __API_DEPRECATED_PLATFORM_tvos(x,y) tvos,introduced=x,deprecated=y
#define __API_DEPRECATED_PLATFORM_uikitformac(x) uikitformac,introduced=x,deprecated=y
#define __API_DEPRECATED_PLATFORM_watchos(x,y) watchos,introduced=x,deprecated=y
#define __API_DEPRECATED_REP2(rep,x) __API_R(rep,x)
#define __API_DEPRECATED_REP3(rep,x,y) __API_R(rep,x) __API_R(rep,y)
#define __API_DEPRECATED_REP4(rep,x,y,z) __API_DEPRECATED_REP3(rep,x,y) __API_R(rep,z)
#define __API_DEPRECATED_REP5(rep,x,y,z,t) __API_DEPRECATED_REP4(rep,x,y,z) __API_R(rep,t)
#define __API_DEPRECATED_REP6(rep,x,y,z,t,b) __API_DEPRECATED_REP5(rep,x,y,z,t) __API_R(rep,b)
#define __API_DEPRECATED_REP7(rep,x,y,z,t,b,m) __API_DEPRECATED_REP6(rep,x,y,z,t,b) __API_R(rep,m)
#define __API_DEPRECATED_REP8(rep,x,y,z,t,b,m,d) __API_DEPRECATED_REP7(rep,x,y,z,t,b,m) __API_R(rep,d)
#define __API_DEPRECATED_REP_GET_MACRO(_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) NAME
#define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1, 0)(__VA_ARGS__)
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) _Pragma("clang attribute push") __API_DEPRECATED_BEGIN_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_BEGIN_REP8,__API_DEPRECATED_BEGIN_REP7, __API_DEPRECATED_BEGIN_REP6, __API_DEPRECATED_BEGIN_REP5, __API_DEPRECATED_BEGIN_REP4, __API_DEPRECATED_BEGIN_REP3, __API_DEPRECATED_BEGIN_REP2, __API_DEPRECATED_BEGIN_REP1, 0)(__VA_ARGS__)
#define __API_DEPRECATED_WITH_REPLACEMENT_END _Pragma("clang attribute pop")
#define __API_D_BEGIN(msg,x) _Pragma(__API_RANGE_STRINGIFY (clang attribute (__attribute__((availability(__API_DEPRECATED_PLATFORM_##x,message=msg))), apply_to = __API_APPLY_TO)))
#define __API_R(rep,x) __attribute__((availability(__API_DEPRECATED_PLATFORM_##x,replacement=rep)))
#define __API_RANGE_STRINGIFY(x) __API_RANGE_STRINGIFY2(x)
#define __API_RANGE_STRINGIFY2(x) #x
#define __API_R_BEGIN(rep,x) _Pragma(__API_RANGE_STRINGIFY (clang attribute (__attribute__((availability(__API_DEPRECATED_PLATFORM_##x,replacement=rep))), apply_to = __API_APPLY_TO)))
#define __API_TO_BE_DEPRECATED 100000
#define __API_U(x) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##x)))
#define __API_UNAVAILABLE(...) __API_UNAVAILABLE_GET_MACRO(__VA_ARGS__,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1, 0)(__VA_ARGS__)
#define __API_UNAVAILABLE1(x) __API_U(x)
#define __API_UNAVAILABLE2(x,y) __API_U(x) __API_U(y)
#define __API_UNAVAILABLE3(x,y,z) __API_UNAVAILABLE2(x,y) __API_U(z)
#define __API_UNAVAILABLE4(x,y,z,t) __API_UNAVAILABLE3(x,y,z) __API_U(t)
#define __API_UNAVAILABLE5(x,y,z,t,b) __API_UNAVAILABLE4(x,y,z,t) __API_U(b)
#define __API_UNAVAILABLE6(x,y,z,t,b,m) __API_UNAVAILABLE5(x,y,z,t,b) __API_U(m)
#define __API_UNAVAILABLE7(x,y,z,t,b,m,d) __API_UNAVAILABLE6(x,y,z,t,b,m) __API_U(d)
#define __API_UNAVAILABLE_BEGIN(...) _Pragma("clang attribute push") __API_UNAVAILABLE_BEGIN_GET_MACRO(__VA_ARGS__,__API_UNAVAILABLE_BEGIN7,__API_UNAVAILABLE_BEGIN6, __API_UNAVAILABLE_BEGIN5, __API_UNAVAILABLE_BEGIN4, __API_UNAVAILABLE_BEGIN3, __API_UNAVAILABLE_BEGIN2, __API_UNAVAILABLE_BEGIN1, 0)(__VA_ARGS__)
#define __API_UNAVAILABLE_BEGIN1(a) __API_U_BEGIN(a)
#define __API_UNAVAILABLE_BEGIN2(a,b) __API_U_BEGIN(a) __API_U_BEGIN(b)
#define __API_UNAVAILABLE_BEGIN3(a,b,c) __API_U_BEGIN(a) __API_U_BEGIN(b) __API_U_BEGIN(c)
#define __API_UNAVAILABLE_BEGIN4(a,b,c,d) __API_U_BEGIN(a) __API_U_BEGIN(b) __API_U_BEGIN(c) __API_U_BEGIN(d)
#define __API_UNAVAILABLE_BEGIN5(a,b,c,d,e) __API_U_BEGIN(a) __API_U_BEGIN(b) __API_U_BEGIN(c) __API_U_BEGIN(d) __API_U_BEGIN(e)
#define __API_UNAVAILABLE_BEGIN6(a,b,c,d,e,f) __API_U_BEGIN(a) __API_U_BEGIN(b) __API_U_BEGIN(c) __API_U_BEGIN(d) __API_U_BEGIN(e) __API_U_BEGIN(f)
#define __API_UNAVAILABLE_BEGIN7(a,b,c,d,e,f) __API_U_BEGIN(a) __API_U_BEGIN(b) __API_U_BEGIN(c) __API_U_BEGIN(d) __API_U_BEGIN(e) __API_U_BEGIN(f) __API_U_BEGIN(g)
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(_1,_2,_3,_4,_5,_6,_7,NAME,...) NAME
#define __API_UNAVAILABLE_END _Pragma("clang attribute pop")
#define __API_UNAVAILABLE_GET_MACRO(_1,_2,_3,_4,_5,_6,_7,NAME,...) NAME
#define __API_UNAVAILABLE_PLATFORM_driverkit driverkit,unavailable
#define __API_UNAVAILABLE_PLATFORM_ios ios,unavailable
#define __API_UNAVAILABLE_PLATFORM_macCatalyst macCatalyst,unavailable
#define __API_UNAVAILABLE_PLATFORM_macos macos,unavailable
#define __API_UNAVAILABLE_PLATFORM_macosx macosx,unavailable
#define __API_UNAVAILABLE_PLATFORM_tvos tvos,unavailable
#define __API_UNAVAILABLE_PLATFORM_uikitformac(x) uikitformac,unavailable
#define __API_UNAVAILABLE_PLATFORM_watchos watchos,unavailable
#define __API_U_BEGIN(x) _Pragma(__API_RANGE_STRINGIFY (clang attribute (__attribute__((availability(__API_UNAVAILABLE_PLATFORM_##x))), apply_to = __API_APPLY_TO)))
#define __APPLE_API_EVOLVING 
#define __APPLE_API_OBSOLETE 
#define __APPLE_API_PRIVATE 
#define __APPLE_API_STABLE 
#define __APPLE_API_STANDARD 
#define __APPLE_API_UNSTABLE 
#define __APPLE_CC__ 6000
#define __APPLE__ 1
#define __ARM64_ARCH_8__ 1
#define __ARM_64BIT_STATE 1
#define __ARM_ACLE 200
#define __ARM_ALIGN_MAX_STACK_PWR 4
#define __ARM_ARCH 8
#define __ARM_ARCH_8_3__ 1
#define __ARM_ARCH_8_4__ 1
#define __ARM_ARCH_8_5__ 1
#define __ARM_ARCH_ISA_A64 1
#define __ARM_ARCH_PROFILE 'A'
#define __ARM_FEATURE_ATOMICS 1
#define __ARM_FEATURE_CLZ 1
#define __ARM_FEATURE_COMPLEX 1
#define __ARM_FEATURE_CRC32 1
#define __ARM_FEATURE_CRYPTO 1
#define __ARM_FEATURE_DIRECTED_ROUNDING 1
#define __ARM_FEATURE_DIV 1
#define __ARM_FEATURE_DOTPROD 1
#define __ARM_FEATURE_FMA 1
#define __ARM_FEATURE_FP16FML 1
#define __ARM_FEATURE_FP16_SCALAR_ARITHMETIC 1
#define __ARM_FEATURE_FP16_VECTOR_ARITHMETIC 1
#define __ARM_FEATURE_IDIV 1
#define __ARM_FEATURE_JCVT 1
#define __ARM_FEATURE_LDREX 0xF
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define __ARM_FEATURE_QRDMX 1
#define __ARM_FEATURE_UNALIGNED 1
#define __ARM_FP 0xE
#define __ARM_FP16_ARGS 1
#define __ARM_FP16_FORMAT_IEEE 1
#define __ARM_MCONTEXT_H_ 
#define __ARM_NEON 1
#define __ARM_NEON_FP 0xE
#define __ARM_NEON_H 
#define __ARM_NEON__ 1
#define __ARM_PCS_AAPCS64 1
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define __ARM_SIZEOF_WCHAR_T 4
#define __ASSUME_PTR_ABI_SINGLE_BEGIN __ptrcheck_abi_assume_single()
#define __ASSUME_PTR_ABI_SINGLE_END __ptrcheck_abi_assume_unsafe_indexable()
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __ATOMIC_RELAXED 0
#define __ATOMIC_RELEASE 3
#define __ATOMIC_SEQ_CST 5
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated(_msg)))
#define __AVAILABILITY_INTERNAL_REGULAR 
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define __AVAILABILITY_INTERNAL__ 
#define __AVAILABILITY_INTERNAL__IPHONE_COMPAT_VERSION __attribute__((availability(ios,unavailable)))
#define __AVAILABILITY_INTERNAL__IPHONE_COMPAT_VERSION_DEP__IPHONE_COMPAT_VERSION __attribute__((availability(ios,unavailable)))
#define __AVAILABILITY_INTERNAL__IPHONE_COMPAT_VERSION_DEP__IPHONE_COMPAT_VERSION_MSG(_msg) __attribute__((availability(ios,unavailable)))
#define __AVAILABILITY_INTERNAL__IPHONE_NA __attribute__((availability(ios,unavailable)))
#define __AVAILABILITY_INTERNAL__IPHONE_NA_DEP__IPHONE_NA __attribute__((availability(ios,unavailable)))
#define __AVAILABILITY_INTERNAL__IPHONE_NA_DEP__IPHONE_NA_MSG(_msg) __attribute__((availability(ios,unavailable)))
#define __AVAILABILITY_INTERNAL__IPHONE_NA__IPHONE_NA __attribute__((availability(ios,unavailable)))
#define __AVAILABILITY_INTERNAL__MAC_10_0 __attribute__((availability(macosx,introduced=10.0)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_0 __attribute__((availability(macosx,introduced=10.0,deprecated=10.0)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_0_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.0,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.0,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.0,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.0,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.0,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.0,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.0,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.0,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.0,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.0,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.0,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.0,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.0,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.0,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_13_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.13,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_2 __attribute__((availability(macosx,introduced=10.0,deprecated=10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_3 __attribute__((availability(macosx,introduced=10.0,deprecated=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_4 __attribute__((availability(macosx,introduced=10.0,deprecated=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_5 __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_5_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_6 __attribute__((availability(macosx,introduced=10.0,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_6_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.6,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.0,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.7,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.0,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.8,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.0)))
#define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.0)))
#define __AVAILABILITY_INTERNAL__MAC_10_1 __attribute__((availability(macosx,introduced=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_10 __attribute__((availability(macosx,introduced=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.10,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.10,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.10,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.10,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.10,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.10,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.10,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.10,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.10,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.10,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.10,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.10,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.10,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_13_4 __attribute__((availability(macosx,introduced=10.10,deprecated=10.13.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_13_MSG(_msg) __attribute__((availability(macosx,introduced=10.10,deprecated=10.13,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_11 __attribute__((availability(macosx,introduced=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.11,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.11,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.11,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.11,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.11,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.11,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.11,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.11,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.11,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.11,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.11,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.11,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.11,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.11,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.11,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.11,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.11,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_12 __attribute__((availability(macosx,introduced=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_2_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.12.2,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_2_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.12.2,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_2_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.12.2,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_2_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.12.2,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_2_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_2_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_4_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.12.4,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_4_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.12.4,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_4_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_4_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.12,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.12,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.12,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.12,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.12,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.12,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.12,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.12,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.12,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_13_4 __attribute__((availability(macosx,introduced=10.12,deprecated=10.13.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_13_MSG(_msg) __attribute__((availability(macosx,introduced=10.12,deprecated=10.13,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_14 __attribute__((availability(macosx,introduced=10.12,deprecated=10.14)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_13 __attribute__((availability(macosx,introduced=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_13_4 __attribute__((availability(macosx,introduced=10.13.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_14 __attribute__((availability(macosx,introduced=10.14)))
#define __AVAILABILITY_INTERNAL__MAC_10_14_DEP__MAC_10_14 __attribute__((availability(macosx,introduced=10.14,deprecated=10.14)))
#define __AVAILABILITY_INTERNAL__MAC_10_15 __attribute__((availability(macosx,introduced=10.15)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.1,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.1,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.1,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.1,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.1,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.1,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.1,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.1,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.1,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.1,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.1,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.1,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_2 __attribute__((availability(macosx,introduced=10.1,deprecated=10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_3 __attribute__((availability(macosx,introduced=10.1,deprecated=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_4 __attribute__((availability(macosx,introduced=10.1,deprecated=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_5 __attribute__((availability(macosx,introduced=10.1,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_5_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.5,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_6 __attribute__((availability(macosx,introduced=10.1,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_6_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.6,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.1,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.7,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.1,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.8,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.1,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_2 __attribute__((availability(macosx,introduced=10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.2,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.2,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.2,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.2,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.2,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.2,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.2,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_2 __attribute__((availability(macosx,introduced=10.2,deprecated=10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_3 __attribute__((availability(macosx,introduced=10.2,deprecated=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_4 __attribute__((availability(macosx,introduced=10.2,deprecated=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_5 __attribute__((availability(macosx,introduced=10.2,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_5_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.5,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_6 __attribute__((availability(macosx,introduced=10.2,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_6_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.6,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.2,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.7,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.2,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.8,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.2,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3 __attribute__((availability(macosx,introduced=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.3,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.3,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.3,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.3,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.3,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.3,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.3,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_3 __attribute__((availability(macosx,introduced=10.3,deprecated=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_4 __attribute__((availability(macosx,introduced=10.3,deprecated=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_5 __attribute__((availability(macosx,introduced=10.3,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_5_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.5,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_6 __attribute__((availability(macosx,introduced=10.3,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_6_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.6,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.3,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.7,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.3,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.8,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.3,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_4 __attribute__((availability(macosx,introduced=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.4,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.4,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.4,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.4,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.4,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.4,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.4,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_4 __attribute__((availability(macosx,introduced=10.4,deprecated=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_5 __attribute__((availability(macosx,introduced=10.4,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_5_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.5,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_6 __attribute__((availability(macosx,introduced=10.4,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_6_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.6,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.4,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.7,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.4,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.8,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.4,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_5 __attribute__((availability(macosx,introduced=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEPRECATED__MAC_10_7 __attribute__((availability(macosx,introduced=10.5.DEPRECATED..MAC.10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.5,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.5,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.5,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.5,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.5,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.5,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_5 __attribute__((availability(macosx,introduced=10.5,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_5_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.5,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_6 __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_6_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.5,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.7,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.5,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.8,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.5,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_6 __attribute__((availability(macosx,introduced=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.6,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.6,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.6,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.6,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.6,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.6,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.6,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_6 __attribute__((availability(macosx,introduced=10.6,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_6_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.6,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.6,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.7,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.6,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.8,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.6,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_7 __attribute__((availability(macosx,introduced=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.7,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.7,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.7,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.7,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.7,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.7,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_13_2 __attribute__((availability(macosx,introduced=10.7,deprecated=10.13.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.7,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.7,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.7,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.8,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.7,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_8 __attribute__((availability(macosx,introduced=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.8,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.8,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.8,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.8,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.8,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.8,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.8,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.8,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.8,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.8,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_9 __attribute__((availability(macosx,introduced=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.9,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.9,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.9,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.10.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.9,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.10.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.10,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.9,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.3,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.11,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.9,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.1,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.2,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.4,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.12,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.9,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_14 __attribute__((availability(macosx,introduced=10.9,deprecated=10.14)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.9,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.9,message=_msg)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_NA __attribute__((availability(macosx,unavailable)))
#define __AVAILABILITY_INTERNAL__MAC_NA_DEP__MAC_NA __attribute__((availability(macosx,unavailable)))
#define __AVAILABILITY_INTERNAL__MAC_NA_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,unavailable)))
#define __AVAILABILITY_VERSIONS__ 
#define __AVAILABILITY__ 
#define __BEGIN_DECLS 
#define __BIGGEST_ALIGNMENT__ 8
#define __BLOCKS__ 1
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __CHAR16_TYPE__ unsigned short
#define __CHAR32_TYPE__ unsigned int
#define __CHAR_BIT__ 8
#define __CLANG_ATOMIC_BOOL_LOCK_FREE 2
#define __CLANG_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __CLANG_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __CLANG_ATOMIC_CHAR_LOCK_FREE 2
#define __CLANG_ATOMIC_INT_LOCK_FREE 2
#define __CLANG_ATOMIC_LLONG_LOCK_FREE 2
#define __CLANG_ATOMIC_LONG_LOCK_FREE 2
#define __CLANG_ATOMIC_POINTER_LOCK_FREE 2
#define __CLANG_ATOMIC_SHORT_LOCK_FREE 2
#define __CLANG_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __CLANG_MAX_ALIGN_T_DEFINED 
#define __CLANG_STDINT_H 
#define __CONCAT(x,y) x ## y
#define __CONSTANT_CFSTRINGS__ 1
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_64_BIT_INO_T 1
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_##_mac(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_12_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_12_1(x) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_12_2(x) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_12_3(x) 
#define __DARWIN_BIG_ENDIAN 4321
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __DARWIN_C_ANSI 010000L
#define __DARWIN_C_FULL 900000L
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_LITTLE_ENDIAN 1234
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __DARWIN_NON_CANCELABLE 0
#define __DARWIN_NO_LONG_LONG 0
#define __DARWIN_NSIG 32
#define __DARWIN_NULL ((void *)0)
#define __DARWIN_ONLY_64_BIT_INO_T 1
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __DARWIN_ONLY_VERS_1050 1
#define __DARWIN_OPAQUE_ARM_THREAD_STATE64 0
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define __DARWIN_OS_INLINE static inline
#define __DARWIN_PDP_ENDIAN 3412
#define __DARWIN_SUF_1050 
#define __DARWIN_SUF_64_BIT_INO_T 
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define __DARWIN_SUF_NON_CANCELABLE 
#define __DARWIN_SUF_UNIX03 
#define __DARWIN_UNIX03 1
#define __DARWIN_VERS_1050 1
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_DENORM_MIN__ 4.9406564584124654e-324
#define __DBL_DIG__ 15
#define __DBL_EPSILON__ 2.2204460492503131e-16
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __DBL_MANT_DIG__ 53
#define __DBL_MAX_10_EXP__ 308
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX__ 1.7976931348623157e+308
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN__ 2.2250738585072014e-308
#define __DECIMAL_DIG__ __LDBL_DECIMAL_DIG__
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define __DRIVERKIT_19_0 190000
#define __DRIVERKIT_20_0 200000
#define __DRIVERKIT_21_0 210000
#define __DYNAMIC__ 1
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define __END_DECLS 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 120000
#define __ENVIRONMENT_OS_VERSION_MIN_REQUIRED__ 120000
#define __FBSDID(s) 
#define __FINITE_MATH_ONLY__ 0
#define __FLT16_DECIMAL_DIG__ 5
#define __FLT16_DENORM_MIN__ 5.9604644775390625e-8F16
#define __FLT16_DIG__ 3
#define __FLT16_EPSILON__ 9.765625e-4F16
#define __FLT16_HAS_DENORM__ 1
#define __FLT16_HAS_INFINITY__ 1
#define __FLT16_HAS_QUIET_NAN__ 1
#define __FLT16_MANT_DIG__ 11
#define __FLT16_MAX_10_EXP__ 4
#define __FLT16_MAX_EXP__ 16
#define __FLT16_MAX__ 6.5504e+4F16
#define __FLT16_MIN_10_EXP__ (-4)
#define __FLT16_MIN_EXP__ (-13)
#define __FLT16_MIN__ 6.103515625e-5F16
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_DENORM_MIN__ 1.40129846e-45F
#define __FLT_DIG__ 6
#define __FLT_EPSILON__ 1.19209290e-7F
#define __FLT_EVAL_METHOD__ 0
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FLT_MANT_DIG__ 24
#define __FLT_MAX_10_EXP__ 38
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX__ 3.40282347e+38F
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN__ 1.17549435e-38F
#define __FLT_RADIX__ 2
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __GNUC_STDC_INLINE__ 1
#define __GNUC__ 4
#define __GXX_ABI_VERSION 1002
#define __IDSTRING(name,string) static const char name[] __used = string
#define __INT16_C_SUFFIX__ 
#define __INT16_FMTd__ "hd"
#define __INT16_FMTi__ "hi"
#define __INT16_MAX__ 32767
#define __INT16_TYPE__ short
#define __INT32_C_SUFFIX__ 
#define __INT32_FMTd__ "d"
#define __INT32_FMTi__ "i"
#define __INT32_MAX__ 2147483647
#define __INT32_TYPE__ int
#define __INT64_C_SUFFIX__ LL
#define __INT64_FMTd__ "lld"
#define __INT64_FMTi__ "lli"
#define __INT64_MAX__ 9223372036854775807LL
#define __INT64_TYPE__ long long int
#define __INT8_C_SUFFIX__ 
#define __INT8_FMTd__ "hhd"
#define __INT8_FMTi__ "hhi"
#define __INT8_MAX__ 127
#define __INT8_TYPE__ signed char
#define __INTMAX_C_SUFFIX__ L
#define __INTMAX_FMTd__ "ld"
#define __INTMAX_FMTi__ "li"
#define __INTMAX_MAX__ 9223372036854775807L
#define __INTMAX_TYPE__ long int
#define __INTMAX_WIDTH__ 64
#define __INTPTR_FMTd__ "ld"
#define __INTPTR_FMTi__ "li"
#define __INTPTR_MAX__ 9223372036854775807L
#define __INTPTR_TYPE__ long int
#define __INTPTR_WIDTH__ 64
#define __INT_FAST16_FMTd__ "hd"
#define __INT_FAST16_FMTi__ "hi"
#define __INT_FAST16_MAX__ 32767
#define __INT_FAST16_TYPE__ short
#define __INT_FAST32_FMTd__ "d"
#define __INT_FAST32_FMTi__ "i"
#define __INT_FAST32_MAX__ 2147483647
#define __INT_FAST32_TYPE__ int
#define __INT_FAST64_FMTd__ "lld"
#define __INT_FAST64_FMTi__ "lli"
#define __INT_FAST64_MAX__ 9223372036854775807LL
#define __INT_FAST64_TYPE__ long long int
#define __INT_FAST8_FMTd__ "hhd"
#define __INT_FAST8_FMTi__ "hhi"
#define __INT_FAST8_MAX__ 127
#define __INT_FAST8_TYPE__ signed char
#define __INT_LEAST16_FMTd__ "hd"
#define __INT_LEAST16_FMTi__ "hi"
#define __INT_LEAST16_MAX__ 32767
#define __INT_LEAST16_TYPE__ short
#define __INT_LEAST32_FMTd__ "d"
#define __INT_LEAST32_FMTi__ "i"
#define __INT_LEAST32_MAX__ 2147483647
#define __INT_LEAST32_TYPE__ int
#define __INT_LEAST64_FMTd__ "lld"
#define __INT_LEAST64_FMTi__ "lli"
#define __INT_LEAST64_MAX__ 9223372036854775807LL
#define __INT_LEAST64_TYPE__ long long int
#define __INT_LEAST8_FMTd__ "hhd"
#define __INT_LEAST8_FMTi__ "hhi"
#define __INT_LEAST8_MAX__ 127
#define __INT_LEAST8_TYPE__ signed char
#define __INT_MAX__ 2147483647
#define __IOS_AVAILABLE(_vers) __OS_AVAILABILITY(ios,introduced=_vers)
#define __IOS_DEPRECATED(_start,_dep,_msg) __IOS_AVAILABLE(_start) __OS_AVAILABILITY_MSG(ios,deprecated=_dep,_msg)
#define __IOS_EXTENSION_UNAVAILABLE(_msg) __OS_AVAILABILITY_MSG(ios_app_extension,unavailable,_msg)
#define __IOS_PROHIBITED __OS_AVAILABILITY(ios,unavailable)
#define __IOS_UNAVAILABLE __OS_AVAILABILITY(ios,unavailable)
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __IPHONE_14_6 140600
#define __IPHONE_14_7 140700
#define __IPHONE_14_8 140800
#define __IPHONE_15_0 150000
#define __IPHONE_15_1 150100
#define __IPHONE_15_2 150200
#define __IPHONE_15_3 150300
#define __IPHONE_15_4 150400
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_2 80200
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_DIG__ 15
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_MAX_10_EXP__ 308
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LITTLE_ENDIAN__ 1
#define __LONG_LONG_MAX__ 9223372036854775807LL
#define __LONG_MAX__ 9223372036854775807L
#define __LP64__ 1
#define __MACH__ 1
#define __MAC_10_0 1000
#define __MAC_10_1 1010
#define __MAC_10_10 101000
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define __MAC_10_11 101100
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define __MAC_10_12 101200
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define __MAC_10_13 101300
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __MAC_10_14 101400
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define __MAC_10_15 101500
#define __MAC_10_15_1 101501
#define __MAC_10_15_4 101504
#define __MAC_10_16 101600
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_5 1050
#define __MAC_10_6 1060
#define __MAC_10_7 1070
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define __MAC_11_3 110300
#define __MAC_11_4 110400
#define __MAC_11_5 110500
#define __MAC_11_6 110600
#define __MAC_12_0 120000
#define __MAC_12_1 120100
#define __MAC_12_2 120200
#define __MAC_12_3 120300
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_12_3
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define __NO_INLINE__ 1
#define __OBJC_BOOL_IS_BOOL 1
#define __OPENCL_MEMORY_SCOPE_ALL_SVM_DEVICES 3
#define __OPENCL_MEMORY_SCOPE_DEVICE 2
#define __OPENCL_MEMORY_SCOPE_SUB_GROUP 4
#define __OPENCL_MEMORY_SCOPE_WORK_GROUP 1
#define __OPENCL_MEMORY_SCOPE_WORK_ITEM 0
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_PDP_ENDIAN__ 3412
#define __OSX_AVAILABLE(_vers) __OS_AVAILABILITY(macosx,introduced=_vers)
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) __AVAILABILITY_INTERNAL##_osxIntro##_DEP##_osxDep
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) __AVAILABILITY_INTERNAL##_osxIntro##_DEP##_osxDep##_MSG(_msg)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) __AVAILABILITY_INTERNAL##_osx
#define __OSX_DEPRECATED(_start,_dep,_msg) __OSX_AVAILABLE(_start) __OS_AVAILABILITY_MSG(macosx,deprecated=_dep,_msg)
#define __OSX_EXTENSION_UNAVAILABLE(_msg) __OS_AVAILABILITY_MSG(macosx_app_extension,unavailable,_msg)
#define __OSX_UNAVAILABLE __OS_AVAILABILITY(macosx,unavailable)
#define __OS_AVAILABILITY(_target,_availability) __attribute__((availability(_target,_availability)))
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) __attribute__((availability(_target,_availability,message=_msg)))
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __P(protos) protos
#define __PIC__ 2
#define __POINTER_WIDTH__ 64
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_##ver
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define __PTHREAD_ATTR_SIZE__ 56
#define __PTHREAD_CONDATTR_SIZE__ 8
#define __PTHREAD_COND_SIZE__ 40
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define __PTHREAD_MUTEX_SIZE__ 56
#define __PTHREAD_ONCE_SIZE__ 8
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define __PTHREAD_RWLOCK_SIZE__ 192
#define __PTHREAD_SIZE__ 8176
#define __PTRDIFF_FMTd__ "ld"
#define __PTRDIFF_FMTi__ "li"
#define __PTRDIFF_MAX__ 9223372036854775807L
#define __PTRDIFF_TYPE__ long int
#define __PTRDIFF_WIDTH__ 64
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __REGISTER_PREFIX__ 
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __SCHAR_MAX__ 127
#define __SHRT_MAX__ 32767
#define __SIG_ATOMIC_MAX__ 2147483647
#define __SIG_ATOMIC_WIDTH__ 32
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_INT128__ 16
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_LONG__ 8
#define __SIZEOF_POINTER__ 8
#define __SIZEOF_PTRDIFF_T__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_SIZE_T__ 8
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZE_FMTX__ "lX"
#define __SIZE_FMTo__ "lo"
#define __SIZE_FMTu__ "lu"
#define __SIZE_FMTx__ "lx"
#define __SIZE_MAX__ 18446744073709551615UL
#define __SIZE_TYPE__ long unsigned int
#define __SIZE_WIDTH__ 64
#define __SPI_AVAILABLE(...) 
#define __SPI_DEPRECATED(...) 
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define __SSP__ 1
#define __STDC_HOSTED__ 1
#define __STDC_NO_THREADS__ 1
#define __STDC_UTF_16__ 1
#define __STDC_UTF_32__ 1
#define __STDC_VERSION__ 201710L
#define __STDC_WANT_LIB_EXT1__ 1
#define __STDC__ 1
#define __STDDEF_H 
#define __STRING(x) #x
#define __SWIFT_UNAVAILABLE __OS_AVAILABILITY(swift,unavailable)
#define __SWIFT_UNAVAILABLE_MSG(_msg) __OS_AVAILABILITY_MSG(swift,unavailable,_msg)
#define __SYS_APPLEAPIOPTS_H__ 
#define __TVOS_10_0 100000
#define __TVOS_10_0_1 100001
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define __TVOS_11_3 110300
#define __TVOS_11_4 110400
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define __TVOS_14_0 140000
#define __TVOS_14_1 140100
#define __TVOS_14_2 140200
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __TVOS_14_6 140600
#define __TVOS_14_7 140700
#define __TVOS_15_0 150000
#define __TVOS_15_1 150100
#define __TVOS_15_2 150200
#define __TVOS_15_3 150300
#define __TVOS_15_4 150400
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define __TVOS_AVAILABLE(_vers) __OS_AVAILABILITY(tvos,introduced=_vers)
#define __TVOS_DEPRECATED(_start,_dep,_msg) __TVOS_AVAILABLE(_start) __OS_AVAILABILITY_MSG(tvos,deprecated=_dep,_msg)
#define __TVOS_PROHIBITED __OS_AVAILABILITY(tvos,unavailable)
#define __TVOS_UNAVAILABLE __OS_AVAILABILITY(tvos,unavailable)
#define __TYPES_H_ 
#define __UINT16_C_SUFFIX__ 
#define __UINT16_FMTX__ "hX"
#define __UINT16_FMTo__ "ho"
#define __UINT16_FMTu__ "hu"
#define __UINT16_FMTx__ "hx"
#define __UINT16_MAX__ 65535
#define __UINT16_TYPE__ unsigned short
#define __UINT32_C_SUFFIX__ U
#define __UINT32_FMTX__ "X"
#define __UINT32_FMTo__ "o"
#define __UINT32_FMTu__ "u"
#define __UINT32_FMTx__ "x"
#define __UINT32_MAX__ 4294967295U
#define __UINT32_TYPE__ unsigned int
#define __UINT64_C_SUFFIX__ ULL
#define __UINT64_FMTX__ "llX"
#define __UINT64_FMTo__ "llo"
#define __UINT64_FMTu__ "llu"
#define __UINT64_FMTx__ "llx"
#define __UINT64_MAX__ 18446744073709551615ULL
#define __UINT64_TYPE__ long long unsigned int
#define __UINT8_C_SUFFIX__ 
#define __UINT8_FMTX__ "hhX"
#define __UINT8_FMTo__ "hho"
#define __UINT8_FMTu__ "hhu"
#define __UINT8_FMTx__ "hhx"
#define __UINT8_MAX__ 255
#define __UINT8_TYPE__ unsigned char
#define __UINTMAX_C_SUFFIX__ UL
#define __UINTMAX_FMTX__ "lX"
#define __UINTMAX_FMTo__ "lo"
#define __UINTMAX_FMTu__ "lu"
#define __UINTMAX_FMTx__ "lx"
#define __UINTMAX_MAX__ 18446744073709551615UL
#define __UINTMAX_TYPE__ long unsigned int
#define __UINTMAX_WIDTH__ 64
#define __UINTPTR_FMTX__ "lX"
#define __UINTPTR_FMTo__ "lo"
#define __UINTPTR_FMTu__ "lu"
#define __UINTPTR_FMTx__ "lx"
#define __UINTPTR_MAX__ 18446744073709551615UL
#define __UINTPTR_TYPE__ long unsigned int
#define __UINTPTR_WIDTH__ 64
#define __UINT_FAST16_FMTX__ "hX"
#define __UINT_FAST16_FMTo__ "ho"
#define __UINT_FAST16_FMTu__ "hu"
#define __UINT_FAST16_FMTx__ "hx"
#define __UINT_FAST16_MAX__ 65535
#define __UINT_FAST16_TYPE__ unsigned short
#define __UINT_FAST32_FMTX__ "X"
#define __UINT_FAST32_FMTo__ "o"
#define __UINT_FAST32_FMTu__ "u"
#define __UINT_FAST32_FMTx__ "x"
#define __UINT_FAST32_MAX__ 4294967295U
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_FMTX__ "llX"
#define __UINT_FAST64_FMTo__ "llo"
#define __UINT_FAST64_FMTu__ "llu"
#define __UINT_FAST64_FMTx__ "llx"
#define __UINT_FAST64_MAX__ 18446744073709551615ULL
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __UINT_FAST8_FMTX__ "hhX"
#define __UINT_FAST8_FMTo__ "hho"
#define __UINT_FAST8_FMTu__ "hhu"
#define __UINT_FAST8_FMTx__ "hhx"
#define __UINT_FAST8_MAX__ 255
#define __UINT_FAST8_TYPE__ unsigned char
#define __UINT_LEAST16_FMTX__ "hX"
#define __UINT_LEAST16_FMTo__ "ho"
#define __UINT_LEAST16_FMTu__ "hu"
#define __UINT_LEAST16_FMTx__ "hx"
#define __UINT_LEAST16_MAX__ 65535
#define __UINT_LEAST16_TYPE__ unsigned short
#define __UINT_LEAST32_FMTX__ "X"
#define __UINT_LEAST32_FMTo__ "o"
#define __UINT_LEAST32_FMTu__ "u"
#define __UINT_LEAST32_FMTx__ "x"
#define __UINT_LEAST32_MAX__ 4294967295U
#define __UINT_LEAST32_TYPE__ unsigned int
#define __UINT_LEAST64_FMTX__ "llX"
#define __UINT_LEAST64_FMTo__ "llo"
#define __UINT_LEAST64_FMTu__ "llu"
#define __UINT_LEAST64_FMTx__ "llx"
#define __UINT_LEAST64_MAX__ 18446744073709551615ULL
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __UINT_LEAST8_FMTX__ "hhX"
#define __UINT_LEAST8_FMTo__ "hho"
#define __UINT_LEAST8_FMTu__ "hhu"
#define __UINT_LEAST8_FMTx__ "hhx"
#define __UINT_LEAST8_MAX__ 255
#define __UINT_LEAST8_TYPE__ unsigned char
#define __USER_LABEL_PREFIX__ _
#define __VERSION__ "Apple LLVM 13.0.0 (clang-1300.0.27.3)"
#define __WATCHOS_1_0 10000
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_1_1 30101
#define __WATCHOS_3_2 30200
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_2 50200
#define __WATCHOS_5_3 50300
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define __WATCHOS_7_5 70500
#define __WATCHOS_7_6 70600
#define __WATCHOS_8_0 80000
#define __WATCHOS_8_1 80100
#define __WATCHOS_8_3 80300
#define __WATCHOS_8_4 80400
#define __WATCHOS_8_5 80500
#define __WATCHOS_AVAILABLE(_vers) __OS_AVAILABILITY(watchos,introduced=_vers)
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) __WATCHOS_AVAILABLE(_start) __OS_AVAILABILITY_MSG(watchos,deprecated=_dep,_msg)
#define __WATCHOS_PROHIBITED __OS_AVAILABILITY(watchos,unavailable)
#define __WATCHOS_UNAVAILABLE __OS_AVAILABILITY(watchos,unavailable)
#define __WCHAR_MAX__ 2147483647
#define __WCHAR_TYPE__ int
#define __WCHAR_WIDTH__ 32
#define __WINT_MAX__ 2147483647
#define __WINT_TYPE__ int
#define __WINT_WIDTH__ 32
#define __WORDSIZE 64
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __aarch64__ 1
#define __abortlike __dead2 __cold __not_tail_called
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define __alloca(size) __builtin_alloca(size)
#define __apple_build_version__ 13000027
#define __arm64 1
#define __arm64__ 1
#define __array_decay_dicards_count_in_parameters 
#define __block __attribute__((__blocks__(byref)))
#define __bsearch_noescape __attribute__((__noescape__))
#define __clang__ 1
#define __clang_major__ 13
#define __clang_minor__ 0
#define __clang_patchlevel__ 0
#define __clang_version__ "13.0.0 (clang-1300.0.27.3)"
#define __cold __attribute__((__cold__))
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __const const
#define __counted_by(N) 
#define __darwin_arm_thread_state64_get_fp(ts) ((ts).__fp)
#define __darwin_arm_thread_state64_get_lr(ts) ((ts).__lr)
#define __darwin_arm_thread_state64_get_lr_fptr(ts) ((void*)(uintptr_t)((ts).__lr))
#define __darwin_arm_thread_state64_get_pc(ts) ((ts).__pc)
#define __darwin_arm_thread_state64_get_pc_fptr(ts) ((void*)(uintptr_t)((ts).__pc))
#define __darwin_arm_thread_state64_get_sp(ts) ((ts).__sp)
#define __darwin_arm_thread_state64_ptrauth_strip(ts) (void)(ts)
#define __darwin_arm_thread_state64_set_fp(ts,ptr) ((ts).__fp = (uintptr_t)(ptr))
#define __darwin_arm_thread_state64_set_lr_fptr(ts,fptr) ((ts).__lr = (uintptr_t)(fptr))
#define __darwin_arm_thread_state64_set_pc_fptr(ts,fptr) ((ts).__pc = (uintptr_t)(fptr))
#define __darwin_arm_thread_state64_set_sp(ts,ptr) ((ts).__sp = (uintptr_t)(ptr))
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __dead 
#define __dead2 __attribute__((__noreturn__))
#define __deprecated __attribute__((__deprecated__))
#define __deprecated_enum_msg(_msg) __deprecated_msg(_msg)
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __disable_tail_calls __attribute__((__disable_tail_calls__))
#define __ended_by(E) 
#define __enum_closed __attribute__((__enum_extensibility__(closed)))
#define __enum_closed_decl(_name,_type,...) typedef enum : _type __VA_ARGS__ __enum_closed _name
#define __enum_decl(_name,_type,...) typedef enum : _type __VA_ARGS__ __enum_open _name
#define __enum_open __attribute__((__enum_extensibility__(open)))
#define __enum_options __attribute__((__flag_enum__))
#define __exported __attribute__((__visibility__("default")))
#define __exported_pop _Pragma("GCC visibility pop")
#define __exported_push _Pragma("GCC visibility push(default)")
#define __has_ptrcheck 0
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define __header_bidi_indexable 
#define __header_indexable 
#define __header_inline inline
#define __kernel_data_semantics 
#define __kernel_dual_semantics 
#define __kernel_ptr_semantics 
#define __kpi_deprecated(_msg) 
#define __kpi_deprecated_arm64_macos_unavailable 
#define __kpi_unavailable 
#define __llvm__ 1
#define __nonnull _Nonnull
#define __not_tail_called __attribute__((__not_tail_called__))
#define __null_unspecified _Null_unspecified
#define __nullable _Nullable
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define __options_closed_decl(_name,_type,...) typedef enum : _type __VA_ARGS__ __enum_closed __enum_options _name
#define __options_decl(_name,_type,...) typedef enum : _type __VA_ARGS__ __enum_open __enum_options _name
#define __osloglike(fmtarg,firstvararg) __attribute__((__format__ (__os_log__, fmtarg, firstvararg)))
#define __pic__ 2
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __ptrcheck_abi_assume_single() 
#define __ptrcheck_abi_assume_unsafe_indexable() 
#define __pure 
#define __pure2 __attribute__((__const__))
#define __restrict restrict
#define __result_use_check __attribute__((__warn_unused_result__))
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __signed signed
#define __single 
#define __sized_by(N) 
#define __sort_noescape __attribute__((__noescape__))
#define __stateful_pure __attribute__((__pure__))
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __strong 
#define __swift_compiler_version_at_least(...) 1
#define __swift_unavailable(_msg) __attribute__((__availability__(swift, unavailable, message=_msg)))
#define __unavailable __attribute__((__unavailable__))
#define __unreachable_ok_pop _Pragma("clang diagnostic pop")
#define __unreachable_ok_push _Pragma("clang diagnostic push") _Pragma("clang diagnostic ignored \"-Wunreachable-code\"")
#define __unsafe_forge_bidi_indexable(T,P,S) ((T)(P))
#define __unsafe_forge_single(T,P) ((T)(P))
#define __unsafe_indexable 
#define __unsafe_unretained 
#define __unused __attribute__((__unused__))
#define __used __attribute__((__used__))
#define __volatile volatile
#define __weak __attribute__((objc_gc(weak)))
#define alloca(size) __alloca(size)
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define brotli_reg_t uint64_t
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define htons(x) __DARWIN_OSSwapInt16(x)
#define memccpy(dest,...) __builtin___memccpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define offsetof(t,d) __builtin_offsetof(t, d)
#define ru_first ru_ixrss
#define ru_last ru_nivcsw
#define sa_handler __sigaction_u.__sa_handler
#define sa_sigaction __sigaction_u.__sa_sigaction
#define sigmask(m) (1 << ((m)-1))
#define splat_lane_f16(__p0,__p1) __extension__ ({ float16x4_t __s0 = __p0; float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 8); __ret; })
#define splat_lane_f32(__p0,__p1) __extension__ ({ float32x2_t __s0 = __p0; float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 9); __ret; })
#define splat_lane_f64(__p0,__p1) __extension__ ({ float64x1_t __s0 = __p0; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 10); __ret; })
#define splat_lane_p16(__p0,__p1) __extension__ ({ poly16x4_t __s0 = __p0; poly16x4_t __ret; __ret = (poly16x4_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 5); __ret; })
#define splat_lane_p64(__p0,__p1) __extension__ ({ poly64x1_t __s0 = __p0; poly64x1_t __ret; __ret = (poly64x1_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 6); __ret; })
#define splat_lane_p8(__p0,__p1) __extension__ ({ poly8x8_t __s0 = __p0; poly8x8_t __ret; __ret = (poly8x8_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 4); __ret; })
#define splat_lane_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 1); __ret; })
#define splat_lane_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 2); __ret; })
#define splat_lane_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 3); __ret; })
#define splat_lane_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 0); __ret; })
#define splat_lane_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 17); __ret; })
#define splat_lane_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 18); __ret; })
#define splat_lane_u64(__p0,__p1) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 19); __ret; })
#define splat_lane_u8(__p0,__p1) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_splat_lane_v((int8x8_t)__s0, __p1, 16); __ret; })
#define splat_laneq_f16(__p0,__p1) __extension__ ({ float16x8_t __s0 = __p0; float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 40); __ret; })
#define splat_laneq_f32(__p0,__p1) __extension__ ({ float32x4_t __s0 = __p0; float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 41); __ret; })
#define splat_laneq_f64(__p0,__p1) __extension__ ({ float64x2_t __s0 = __p0; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 42); __ret; })
#define splat_laneq_p16(__p0,__p1) __extension__ ({ poly16x8_t __s0 = __p0; poly16x4_t __ret; __ret = (poly16x4_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 37); __ret; })
#define splat_laneq_p64(__p0,__p1) __extension__ ({ poly64x2_t __s0 = __p0; poly64x1_t __ret; __ret = (poly64x1_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 38); __ret; })
#define splat_laneq_p8(__p0,__p1) __extension__ ({ poly8x16_t __s0 = __p0; poly8x8_t __ret; __ret = (poly8x8_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 36); __ret; })
#define splat_laneq_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 33); __ret; })
#define splat_laneq_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 34); __ret; })
#define splat_laneq_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 35); __ret; })
#define splat_laneq_s8(__p0,__p1) __extension__ ({ int8x16_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 32); __ret; })
#define splat_laneq_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 49); __ret; })
#define splat_laneq_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 50); __ret; })
#define splat_laneq_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 51); __ret; })
#define splat_laneq_u8(__p0,__p1) __extension__ ({ uint8x16_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_splat_laneq_v((int8x16_t)__s0, __p1, 48); __ret; })
#define splatq_lane_f16(__p0,__p1) __extension__ ({ float16x4_t __s0 = __p0; float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 8); __ret; })
#define splatq_lane_f32(__p0,__p1) __extension__ ({ float32x2_t __s0 = __p0; float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 9); __ret; })
#define splatq_lane_f64(__p0,__p1) __extension__ ({ float64x1_t __s0 = __p0; float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 10); __ret; })
#define splatq_lane_p16(__p0,__p1) __extension__ ({ poly16x4_t __s0 = __p0; poly16x8_t __ret; __ret = (poly16x8_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 5); __ret; })
#define splatq_lane_p64(__p0,__p1) __extension__ ({ poly64x1_t __s0 = __p0; poly64x2_t __ret; __ret = (poly64x2_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 6); __ret; })
#define splatq_lane_p8(__p0,__p1) __extension__ ({ poly8x8_t __s0 = __p0; poly8x16_t __ret; __ret = (poly8x16_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 4); __ret; })
#define splatq_lane_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 1); __ret; })
#define splatq_lane_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 2); __ret; })
#define splatq_lane_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 3); __ret; })
#define splatq_lane_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 0); __ret; })
#define splatq_lane_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 17); __ret; })
#define splatq_lane_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 18); __ret; })
#define splatq_lane_u64(__p0,__p1) __extension__ ({ uint64x1_t __s0 = __p0; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 19); __ret; })
#define splatq_lane_u8(__p0,__p1) __extension__ ({ uint8x8_t __s0 = __p0; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_splatq_lane_v((int8x8_t)__s0, __p1, 16); __ret; })
#define splatq_laneq_f16(__p0,__p1) __extension__ ({ float16x8_t __s0 = __p0; float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 40); __ret; })
#define splatq_laneq_f32(__p0,__p1) __extension__ ({ float32x4_t __s0 = __p0; float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 41); __ret; })
#define splatq_laneq_f64(__p0,__p1) __extension__ ({ float64x2_t __s0 = __p0; float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 42); __ret; })
#define splatq_laneq_p16(__p0,__p1) __extension__ ({ poly16x8_t __s0 = __p0; poly16x8_t __ret; __ret = (poly16x8_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 37); __ret; })
#define splatq_laneq_p64(__p0,__p1) __extension__ ({ poly64x2_t __s0 = __p0; poly64x2_t __ret; __ret = (poly64x2_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 38); __ret; })
#define splatq_laneq_p8(__p0,__p1) __extension__ ({ poly8x16_t __s0 = __p0; poly8x16_t __ret; __ret = (poly8x16_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 36); __ret; })
#define splatq_laneq_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 33); __ret; })
#define splatq_laneq_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 34); __ret; })
#define splatq_laneq_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 35); __ret; })
#define splatq_laneq_s8(__p0,__p1) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 32); __ret; })
#define splatq_laneq_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 49); __ret; })
#define splatq_laneq_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 50); __ret; })
#define splatq_laneq_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 51); __ret; })
#define splatq_laneq_u8(__p0,__p1) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_splatq_laneq_v((int8x16_t)__s0, __p1, 48); __ret; })
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strlcat(dest,...) __builtin___strlcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strlcpy(dest,...) __builtin___strlcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define sv_onstack sv_flags
#define vcmla_lane_f16(__p0_201,__p1_201,__p2_201,__p3_201) __extension__ ({ float16x4_t __s0_201 = __p0_201; float16x4_t __s1_201 = __p1_201; float16x4_t __s2_201 = __p2_201; float16x4_t __ret_201; float16x4_t __reint_201 = __s2_201; uint32x2_t __reint1_201 = (uint32x2_t) {vget_lane_u32(*(uint32x2_t *) &__reint_201, __p3_201), vget_lane_u32(*(uint32x2_t *) &__reint_201, __p3_201)}; __ret_201 = vcmla_f16(__s0_201, __s1_201, *(float16x4_t *) &__reint1_201); __ret_201; })
#define vcmla_lane_f32(__p0_169,__p1_169,__p2_169,__p3_169) __extension__ ({ float32x2_t __s0_169 = __p0_169; float32x2_t __s1_169 = __p1_169; float32x2_t __s2_169 = __p2_169; float32x2_t __ret_169; float32x2_t __reint_169 = __s2_169; uint64x1_t __reint1_169 = (uint64x1_t) {vget_lane_u64(*(uint64x1_t *) &__reint_169, __p3_169)}; __ret_169 = vcmla_f32(__s0_169, __s1_169, *(float32x2_t *) &__reint1_169); __ret_169; })
#define vcmla_lane_f64(__p0_233,__p1_233,__p2_233,__p3_233) __extension__ ({ float64x1_t __s0_233 = __p0_233; float64x1_t __s1_233 = __p1_233; float64x1_t __s2_233 = __p2_233; float64x1_t __ret_233; float64x1_t __reint_233 = __s2_233; uint64x2_t __reint1_233 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_233, __p3_233), vgetq_lane_u64(*(uint64x2_t *) &__reint_233, __p3_233)}; __ret_233 = vcmla_f64(__s0_233, __s1_233, *(float64x1_t *) &__reint1_233); __ret_233; })
#define vcmla_laneq_f16(__p0_205,__p1_205,__p2_205,__p3_205) __extension__ ({ float16x4_t __s0_205 = __p0_205; float16x4_t __s1_205 = __p1_205; float16x8_t __s2_205 = __p2_205; float16x4_t __ret_205; float16x8_t __reint_205 = __s2_205; uint32x2_t __reint1_205 = (uint32x2_t) {vgetq_lane_u32(*(uint32x4_t *) &__reint_205, __p3_205), vgetq_lane_u32(*(uint32x4_t *) &__reint_205, __p3_205)}; __ret_205 = vcmla_f16(__s0_205, __s1_205, *(float16x4_t *) &__reint1_205); __ret_205; })
#define vcmla_laneq_f32(__p0_173,__p1_173,__p2_173,__p3_173) __extension__ ({ float32x2_t __s0_173 = __p0_173; float32x2_t __s1_173 = __p1_173; float32x4_t __s2_173 = __p2_173; float32x2_t __ret_173; float32x4_t __reint_173 = __s2_173; uint64x1_t __reint1_173 = (uint64x1_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_173, __p3_173)}; __ret_173 = vcmla_f32(__s0_173, __s1_173, *(float32x2_t *) &__reint1_173); __ret_173; })
#define vcmla_laneq_f64(__p0_236,__p1_236,__p2_236,__p3_236) __extension__ ({ float64x1_t __s0_236 = __p0_236; float64x1_t __s1_236 = __p1_236; float64x2_t __s2_236 = __p2_236; float64x1_t __ret_236; float64x2_t __reint_236 = __s2_236; uint64x2_t __reint1_236 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_236, __p3_236), vgetq_lane_u64(*(uint64x2_t *) &__reint_236, __p3_236)}; __ret_236 = vcmla_f64(__s0_236, __s1_236, *(float64x1_t *) &__reint1_236); __ret_236; })
#define vcmla_rot180_lane_f16(__p0_209,__p1_209,__p2_209,__p3_209) __extension__ ({ float16x4_t __s0_209 = __p0_209; float16x4_t __s1_209 = __p1_209; float16x4_t __s2_209 = __p2_209; float16x4_t __ret_209; float16x4_t __reint_209 = __s2_209; uint32x2_t __reint1_209 = (uint32x2_t) {vget_lane_u32(*(uint32x2_t *) &__reint_209, __p3_209), vget_lane_u32(*(uint32x2_t *) &__reint_209, __p3_209)}; __ret_209 = vcmla_rot180_f16(__s0_209, __s1_209, *(float16x4_t *) &__reint1_209); __ret_209; })
#define vcmla_rot180_lane_f32(__p0_177,__p1_177,__p2_177,__p3_177) __extension__ ({ float32x2_t __s0_177 = __p0_177; float32x2_t __s1_177 = __p1_177; float32x2_t __s2_177 = __p2_177; float32x2_t __ret_177; float32x2_t __reint_177 = __s2_177; uint64x1_t __reint1_177 = (uint64x1_t) {vget_lane_u64(*(uint64x1_t *) &__reint_177, __p3_177)}; __ret_177 = vcmla_rot180_f32(__s0_177, __s1_177, *(float32x2_t *) &__reint1_177); __ret_177; })
#define vcmla_rot180_lane_f64(__p0_240,__p1_240,__p2_240,__p3_240) __extension__ ({ float64x1_t __s0_240 = __p0_240; float64x1_t __s1_240 = __p1_240; float64x1_t __s2_240 = __p2_240; float64x1_t __ret_240; float64x1_t __reint_240 = __s2_240; uint64x2_t __reint1_240 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_240, __p3_240), vgetq_lane_u64(*(uint64x2_t *) &__reint_240, __p3_240)}; __ret_240 = vcmla_rot180_f64(__s0_240, __s1_240, *(float64x1_t *) &__reint1_240); __ret_240; })
#define vcmla_rot180_laneq_f16(__p0_213,__p1_213,__p2_213,__p3_213) __extension__ ({ float16x4_t __s0_213 = __p0_213; float16x4_t __s1_213 = __p1_213; float16x8_t __s2_213 = __p2_213; float16x4_t __ret_213; float16x8_t __reint_213 = __s2_213; uint32x2_t __reint1_213 = (uint32x2_t) {vgetq_lane_u32(*(uint32x4_t *) &__reint_213, __p3_213), vgetq_lane_u32(*(uint32x4_t *) &__reint_213, __p3_213)}; __ret_213 = vcmla_rot180_f16(__s0_213, __s1_213, *(float16x4_t *) &__reint1_213); __ret_213; })
#define vcmla_rot180_laneq_f32(__p0_181,__p1_181,__p2_181,__p3_181) __extension__ ({ float32x2_t __s0_181 = __p0_181; float32x2_t __s1_181 = __p1_181; float32x4_t __s2_181 = __p2_181; float32x2_t __ret_181; float32x4_t __reint_181 = __s2_181; uint64x1_t __reint1_181 = (uint64x1_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_181, __p3_181)}; __ret_181 = vcmla_rot180_f32(__s0_181, __s1_181, *(float32x2_t *) &__reint1_181); __ret_181; })
#define vcmla_rot180_laneq_f64(__p0_243,__p1_243,__p2_243,__p3_243) __extension__ ({ float64x1_t __s0_243 = __p0_243; float64x1_t __s1_243 = __p1_243; float64x2_t __s2_243 = __p2_243; float64x1_t __ret_243; float64x2_t __reint_243 = __s2_243; uint64x2_t __reint1_243 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_243, __p3_243), vgetq_lane_u64(*(uint64x2_t *) &__reint_243, __p3_243)}; __ret_243 = vcmla_rot180_f64(__s0_243, __s1_243, *(float64x1_t *) &__reint1_243); __ret_243; })
#define vcmla_rot270_lane_f16(__p0_217,__p1_217,__p2_217,__p3_217) __extension__ ({ float16x4_t __s0_217 = __p0_217; float16x4_t __s1_217 = __p1_217; float16x4_t __s2_217 = __p2_217; float16x4_t __ret_217; float16x4_t __reint_217 = __s2_217; uint32x2_t __reint1_217 = (uint32x2_t) {vget_lane_u32(*(uint32x2_t *) &__reint_217, __p3_217), vget_lane_u32(*(uint32x2_t *) &__reint_217, __p3_217)}; __ret_217 = vcmla_rot270_f16(__s0_217, __s1_217, *(float16x4_t *) &__reint1_217); __ret_217; })
#define vcmla_rot270_lane_f32(__p0_185,__p1_185,__p2_185,__p3_185) __extension__ ({ float32x2_t __s0_185 = __p0_185; float32x2_t __s1_185 = __p1_185; float32x2_t __s2_185 = __p2_185; float32x2_t __ret_185; float32x2_t __reint_185 = __s2_185; uint64x1_t __reint1_185 = (uint64x1_t) {vget_lane_u64(*(uint64x1_t *) &__reint_185, __p3_185)}; __ret_185 = vcmla_rot270_f32(__s0_185, __s1_185, *(float32x2_t *) &__reint1_185); __ret_185; })
#define vcmla_rot270_lane_f64(__p0_247,__p1_247,__p2_247,__p3_247) __extension__ ({ float64x1_t __s0_247 = __p0_247; float64x1_t __s1_247 = __p1_247; float64x1_t __s2_247 = __p2_247; float64x1_t __ret_247; float64x1_t __reint_247 = __s2_247; uint64x2_t __reint1_247 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_247, __p3_247), vgetq_lane_u64(*(uint64x2_t *) &__reint_247, __p3_247)}; __ret_247 = vcmla_rot270_f64(__s0_247, __s1_247, *(float64x1_t *) &__reint1_247); __ret_247; })
#define vcmla_rot270_laneq_f16(__p0_221,__p1_221,__p2_221,__p3_221) __extension__ ({ float16x4_t __s0_221 = __p0_221; float16x4_t __s1_221 = __p1_221; float16x8_t __s2_221 = __p2_221; float16x4_t __ret_221; float16x8_t __reint_221 = __s2_221; uint32x2_t __reint1_221 = (uint32x2_t) {vgetq_lane_u32(*(uint32x4_t *) &__reint_221, __p3_221), vgetq_lane_u32(*(uint32x4_t *) &__reint_221, __p3_221)}; __ret_221 = vcmla_rot270_f16(__s0_221, __s1_221, *(float16x4_t *) &__reint1_221); __ret_221; })
#define vcmla_rot270_laneq_f32(__p0_189,__p1_189,__p2_189,__p3_189) __extension__ ({ float32x2_t __s0_189 = __p0_189; float32x2_t __s1_189 = __p1_189; float32x4_t __s2_189 = __p2_189; float32x2_t __ret_189; float32x4_t __reint_189 = __s2_189; uint64x1_t __reint1_189 = (uint64x1_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_189, __p3_189)}; __ret_189 = vcmla_rot270_f32(__s0_189, __s1_189, *(float32x2_t *) &__reint1_189); __ret_189; })
#define vcmla_rot270_laneq_f64(__p0_250,__p1_250,__p2_250,__p3_250) __extension__ ({ float64x1_t __s0_250 = __p0_250; float64x1_t __s1_250 = __p1_250; float64x2_t __s2_250 = __p2_250; float64x1_t __ret_250; float64x2_t __reint_250 = __s2_250; uint64x2_t __reint1_250 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_250, __p3_250), vgetq_lane_u64(*(uint64x2_t *) &__reint_250, __p3_250)}; __ret_250 = vcmla_rot270_f64(__s0_250, __s1_250, *(float64x1_t *) &__reint1_250); __ret_250; })
#define vcmla_rot90_lane_f16(__p0_225,__p1_225,__p2_225,__p3_225) __extension__ ({ float16x4_t __s0_225 = __p0_225; float16x4_t __s1_225 = __p1_225; float16x4_t __s2_225 = __p2_225; float16x4_t __ret_225; float16x4_t __reint_225 = __s2_225; uint32x2_t __reint1_225 = (uint32x2_t) {vget_lane_u32(*(uint32x2_t *) &__reint_225, __p3_225), vget_lane_u32(*(uint32x2_t *) &__reint_225, __p3_225)}; __ret_225 = vcmla_rot90_f16(__s0_225, __s1_225, *(float16x4_t *) &__reint1_225); __ret_225; })
#define vcmla_rot90_lane_f32(__p0_193,__p1_193,__p2_193,__p3_193) __extension__ ({ float32x2_t __s0_193 = __p0_193; float32x2_t __s1_193 = __p1_193; float32x2_t __s2_193 = __p2_193; float32x2_t __ret_193; float32x2_t __reint_193 = __s2_193; uint64x1_t __reint1_193 = (uint64x1_t) {vget_lane_u64(*(uint64x1_t *) &__reint_193, __p3_193)}; __ret_193 = vcmla_rot90_f32(__s0_193, __s1_193, *(float32x2_t *) &__reint1_193); __ret_193; })
#define vcmla_rot90_lane_f64(__p0_254,__p1_254,__p2_254,__p3_254) __extension__ ({ float64x1_t __s0_254 = __p0_254; float64x1_t __s1_254 = __p1_254; float64x1_t __s2_254 = __p2_254; float64x1_t __ret_254; float64x1_t __reint_254 = __s2_254; uint64x2_t __reint1_254 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_254, __p3_254), vgetq_lane_u64(*(uint64x2_t *) &__reint_254, __p3_254)}; __ret_254 = vcmla_rot90_f64(__s0_254, __s1_254, *(float64x1_t *) &__reint1_254); __ret_254; })
#define vcmla_rot90_laneq_f16(__p0_229,__p1_229,__p2_229,__p3_229) __extension__ ({ float16x4_t __s0_229 = __p0_229; float16x4_t __s1_229 = __p1_229; float16x8_t __s2_229 = __p2_229; float16x4_t __ret_229; float16x8_t __reint_229 = __s2_229; uint32x2_t __reint1_229 = (uint32x2_t) {vgetq_lane_u32(*(uint32x4_t *) &__reint_229, __p3_229), vgetq_lane_u32(*(uint32x4_t *) &__reint_229, __p3_229)}; __ret_229 = vcmla_rot90_f16(__s0_229, __s1_229, *(float16x4_t *) &__reint1_229); __ret_229; })
#define vcmla_rot90_laneq_f32(__p0_197,__p1_197,__p2_197,__p3_197) __extension__ ({ float32x2_t __s0_197 = __p0_197; float32x2_t __s1_197 = __p1_197; float32x4_t __s2_197 = __p2_197; float32x2_t __ret_197; float32x4_t __reint_197 = __s2_197; uint64x1_t __reint1_197 = (uint64x1_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_197, __p3_197)}; __ret_197 = vcmla_rot90_f32(__s0_197, __s1_197, *(float32x2_t *) &__reint1_197); __ret_197; })
#define vcmla_rot90_laneq_f64(__p0_257,__p1_257,__p2_257,__p3_257) __extension__ ({ float64x1_t __s0_257 = __p0_257; float64x1_t __s1_257 = __p1_257; float64x2_t __s2_257 = __p2_257; float64x1_t __ret_257; float64x2_t __reint_257 = __s2_257; uint64x2_t __reint1_257 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_257, __p3_257), vgetq_lane_u64(*(uint64x2_t *) &__reint_257, __p3_257)}; __ret_257 = vcmla_rot90_f64(__s0_257, __s1_257, *(float64x1_t *) &__reint1_257); __ret_257; })
#define vcmlaq_lane_f16(__p0_203,__p1_203,__p2_203,__p3_203) __extension__ ({ float16x8_t __s0_203 = __p0_203; float16x8_t __s1_203 = __p1_203; float16x4_t __s2_203 = __p2_203; float16x8_t __ret_203; float16x4_t __reint_203 = __s2_203; uint32x4_t __reint1_203 = (uint32x4_t) {vget_lane_u32(*(uint32x2_t *) &__reint_203, __p3_203), vget_lane_u32(*(uint32x2_t *) &__reint_203, __p3_203), vget_lane_u32(*(uint32x2_t *) &__reint_203, __p3_203), vget_lane_u32(*(uint32x2_t *) &__reint_203, __p3_203)}; __ret_203 = vcmlaq_f16(__s0_203, __s1_203, *(float16x8_t *) &__reint1_203); __ret_203; })
#define vcmlaq_lane_f32(__p0_171,__p1_171,__p2_171,__p3_171) __extension__ ({ float32x4_t __s0_171 = __p0_171; float32x4_t __s1_171 = __p1_171; float32x2_t __s2_171 = __p2_171; float32x4_t __ret_171; float32x2_t __reint_171 = __s2_171; uint64x2_t __reint1_171 = (uint64x2_t) {vget_lane_u64(*(uint64x1_t *) &__reint_171, __p3_171), vget_lane_u64(*(uint64x1_t *) &__reint_171, __p3_171)}; __ret_171 = vcmlaq_f32(__s0_171, __s1_171, *(float32x4_t *) &__reint1_171); __ret_171; })
#define vcmlaq_lane_f64(__p0_234,__p1_234,__p2_234,__p3_234) __extension__ ({ float64x2_t __s0_234 = __p0_234; float64x2_t __s1_234 = __p1_234; float64x1_t __s2_234 = __p2_234; float64x2_t __ret_234; float64x1_t __reint_234 = __s2_234; uint64x2_t __reint1_234 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_234, __p3_234), vgetq_lane_u64(*(uint64x2_t *) &__reint_234, __p3_234)}; __ret_234 = vcmlaq_f64(__s0_234, __s1_234, *(float64x2_t *) &__reint1_234); __ret_234; })
#define vcmlaq_laneq_f16(__p0_207,__p1_207,__p2_207,__p3_207) __extension__ ({ float16x8_t __s0_207 = __p0_207; float16x8_t __s1_207 = __p1_207; float16x8_t __s2_207 = __p2_207; float16x8_t __ret_207; float16x8_t __reint_207 = __s2_207; uint32x4_t __reint1_207 = (uint32x4_t) {vgetq_lane_u32(*(uint32x4_t *) &__reint_207, __p3_207), vgetq_lane_u32(*(uint32x4_t *) &__reint_207, __p3_207), vgetq_lane_u32(*(uint32x4_t *) &__reint_207, __p3_207), vgetq_lane_u32(*(uint32x4_t *) &__reint_207, __p3_207)}; __ret_207 = vcmlaq_f16(__s0_207, __s1_207, *(float16x8_t *) &__reint1_207); __ret_207; })
#define vcmlaq_laneq_f32(__p0_175,__p1_175,__p2_175,__p3_175) __extension__ ({ float32x4_t __s0_175 = __p0_175; float32x4_t __s1_175 = __p1_175; float32x4_t __s2_175 = __p2_175; float32x4_t __ret_175; float32x4_t __reint_175 = __s2_175; uint64x2_t __reint1_175 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_175, __p3_175), vgetq_lane_u64(*(uint64x2_t *) &__reint_175, __p3_175)}; __ret_175 = vcmlaq_f32(__s0_175, __s1_175, *(float32x4_t *) &__reint1_175); __ret_175; })
#define vcmlaq_laneq_f64(__p0_238,__p1_238,__p2_238,__p3_238) __extension__ ({ float64x2_t __s0_238 = __p0_238; float64x2_t __s1_238 = __p1_238; float64x2_t __s2_238 = __p2_238; float64x2_t __ret_238; float64x2_t __reint_238 = __s2_238; uint64x2_t __reint1_238 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_238, __p3_238), vgetq_lane_u64(*(uint64x2_t *) &__reint_238, __p3_238)}; __ret_238 = vcmlaq_f64(__s0_238, __s1_238, *(float64x2_t *) &__reint1_238); __ret_238; })
#define vcmlaq_rot180_lane_f16(__p0_211,__p1_211,__p2_211,__p3_211) __extension__ ({ float16x8_t __s0_211 = __p0_211; float16x8_t __s1_211 = __p1_211; float16x4_t __s2_211 = __p2_211; float16x8_t __ret_211; float16x4_t __reint_211 = __s2_211; uint32x4_t __reint1_211 = (uint32x4_t) {vget_lane_u32(*(uint32x2_t *) &__reint_211, __p3_211), vget_lane_u32(*(uint32x2_t *) &__reint_211, __p3_211), vget_lane_u32(*(uint32x2_t *) &__reint_211, __p3_211), vget_lane_u32(*(uint32x2_t *) &__reint_211, __p3_211)}; __ret_211 = vcmlaq_rot180_f16(__s0_211, __s1_211, *(float16x8_t *) &__reint1_211); __ret_211; })
#define vcmlaq_rot180_lane_f32(__p0_179,__p1_179,__p2_179,__p3_179) __extension__ ({ float32x4_t __s0_179 = __p0_179; float32x4_t __s1_179 = __p1_179; float32x2_t __s2_179 = __p2_179; float32x4_t __ret_179; float32x2_t __reint_179 = __s2_179; uint64x2_t __reint1_179 = (uint64x2_t) {vget_lane_u64(*(uint64x1_t *) &__reint_179, __p3_179), vget_lane_u64(*(uint64x1_t *) &__reint_179, __p3_179)}; __ret_179 = vcmlaq_rot180_f32(__s0_179, __s1_179, *(float32x4_t *) &__reint1_179); __ret_179; })
#define vcmlaq_rot180_lane_f64(__p0_241,__p1_241,__p2_241,__p3_241) __extension__ ({ float64x2_t __s0_241 = __p0_241; float64x2_t __s1_241 = __p1_241; float64x1_t __s2_241 = __p2_241; float64x2_t __ret_241; float64x1_t __reint_241 = __s2_241; uint64x2_t __reint1_241 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_241, __p3_241), vgetq_lane_u64(*(uint64x2_t *) &__reint_241, __p3_241)}; __ret_241 = vcmlaq_rot180_f64(__s0_241, __s1_241, *(float64x2_t *) &__reint1_241); __ret_241; })
#define vcmlaq_rot180_laneq_f16(__p0_215,__p1_215,__p2_215,__p3_215) __extension__ ({ float16x8_t __s0_215 = __p0_215; float16x8_t __s1_215 = __p1_215; float16x8_t __s2_215 = __p2_215; float16x8_t __ret_215; float16x8_t __reint_215 = __s2_215; uint32x4_t __reint1_215 = (uint32x4_t) {vgetq_lane_u32(*(uint32x4_t *) &__reint_215, __p3_215), vgetq_lane_u32(*(uint32x4_t *) &__reint_215, __p3_215), vgetq_lane_u32(*(uint32x4_t *) &__reint_215, __p3_215), vgetq_lane_u32(*(uint32x4_t *) &__reint_215, __p3_215)}; __ret_215 = vcmlaq_rot180_f16(__s0_215, __s1_215, *(float16x8_t *) &__reint1_215); __ret_215; })
#define vcmlaq_rot180_laneq_f32(__p0_183,__p1_183,__p2_183,__p3_183) __extension__ ({ float32x4_t __s0_183 = __p0_183; float32x4_t __s1_183 = __p1_183; float32x4_t __s2_183 = __p2_183; float32x4_t __ret_183; float32x4_t __reint_183 = __s2_183; uint64x2_t __reint1_183 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_183, __p3_183), vgetq_lane_u64(*(uint64x2_t *) &__reint_183, __p3_183)}; __ret_183 = vcmlaq_rot180_f32(__s0_183, __s1_183, *(float32x4_t *) &__reint1_183); __ret_183; })
#define vcmlaq_rot180_laneq_f64(__p0_245,__p1_245,__p2_245,__p3_245) __extension__ ({ float64x2_t __s0_245 = __p0_245; float64x2_t __s1_245 = __p1_245; float64x2_t __s2_245 = __p2_245; float64x2_t __ret_245; float64x2_t __reint_245 = __s2_245; uint64x2_t __reint1_245 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_245, __p3_245), vgetq_lane_u64(*(uint64x2_t *) &__reint_245, __p3_245)}; __ret_245 = vcmlaq_rot180_f64(__s0_245, __s1_245, *(float64x2_t *) &__reint1_245); __ret_245; })
#define vcmlaq_rot270_lane_f16(__p0_219,__p1_219,__p2_219,__p3_219) __extension__ ({ float16x8_t __s0_219 = __p0_219; float16x8_t __s1_219 = __p1_219; float16x4_t __s2_219 = __p2_219; float16x8_t __ret_219; float16x4_t __reint_219 = __s2_219; uint32x4_t __reint1_219 = (uint32x4_t) {vget_lane_u32(*(uint32x2_t *) &__reint_219, __p3_219), vget_lane_u32(*(uint32x2_t *) &__reint_219, __p3_219), vget_lane_u32(*(uint32x2_t *) &__reint_219, __p3_219), vget_lane_u32(*(uint32x2_t *) &__reint_219, __p3_219)}; __ret_219 = vcmlaq_rot270_f16(__s0_219, __s1_219, *(float16x8_t *) &__reint1_219); __ret_219; })
#define vcmlaq_rot270_lane_f32(__p0_187,__p1_187,__p2_187,__p3_187) __extension__ ({ float32x4_t __s0_187 = __p0_187; float32x4_t __s1_187 = __p1_187; float32x2_t __s2_187 = __p2_187; float32x4_t __ret_187; float32x2_t __reint_187 = __s2_187; uint64x2_t __reint1_187 = (uint64x2_t) {vget_lane_u64(*(uint64x1_t *) &__reint_187, __p3_187), vget_lane_u64(*(uint64x1_t *) &__reint_187, __p3_187)}; __ret_187 = vcmlaq_rot270_f32(__s0_187, __s1_187, *(float32x4_t *) &__reint1_187); __ret_187; })
#define vcmlaq_rot270_lane_f64(__p0_248,__p1_248,__p2_248,__p3_248) __extension__ ({ float64x2_t __s0_248 = __p0_248; float64x2_t __s1_248 = __p1_248; float64x1_t __s2_248 = __p2_248; float64x2_t __ret_248; float64x1_t __reint_248 = __s2_248; uint64x2_t __reint1_248 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_248, __p3_248), vgetq_lane_u64(*(uint64x2_t *) &__reint_248, __p3_248)}; __ret_248 = vcmlaq_rot270_f64(__s0_248, __s1_248, *(float64x2_t *) &__reint1_248); __ret_248; })
#define vcmlaq_rot270_laneq_f16(__p0_223,__p1_223,__p2_223,__p3_223) __extension__ ({ float16x8_t __s0_223 = __p0_223; float16x8_t __s1_223 = __p1_223; float16x8_t __s2_223 = __p2_223; float16x8_t __ret_223; float16x8_t __reint_223 = __s2_223; uint32x4_t __reint1_223 = (uint32x4_t) {vgetq_lane_u32(*(uint32x4_t *) &__reint_223, __p3_223), vgetq_lane_u32(*(uint32x4_t *) &__reint_223, __p3_223), vgetq_lane_u32(*(uint32x4_t *) &__reint_223, __p3_223), vgetq_lane_u32(*(uint32x4_t *) &__reint_223, __p3_223)}; __ret_223 = vcmlaq_rot270_f16(__s0_223, __s1_223, *(float16x8_t *) &__reint1_223); __ret_223; })
#define vcmlaq_rot270_laneq_f32(__p0_191,__p1_191,__p2_191,__p3_191) __extension__ ({ float32x4_t __s0_191 = __p0_191; float32x4_t __s1_191 = __p1_191; float32x4_t __s2_191 = __p2_191; float32x4_t __ret_191; float32x4_t __reint_191 = __s2_191; uint64x2_t __reint1_191 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_191, __p3_191), vgetq_lane_u64(*(uint64x2_t *) &__reint_191, __p3_191)}; __ret_191 = vcmlaq_rot270_f32(__s0_191, __s1_191, *(float32x4_t *) &__reint1_191); __ret_191; })
#define vcmlaq_rot270_laneq_f64(__p0_252,__p1_252,__p2_252,__p3_252) __extension__ ({ float64x2_t __s0_252 = __p0_252; float64x2_t __s1_252 = __p1_252; float64x2_t __s2_252 = __p2_252; float64x2_t __ret_252; float64x2_t __reint_252 = __s2_252; uint64x2_t __reint1_252 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_252, __p3_252), vgetq_lane_u64(*(uint64x2_t *) &__reint_252, __p3_252)}; __ret_252 = vcmlaq_rot270_f64(__s0_252, __s1_252, *(float64x2_t *) &__reint1_252); __ret_252; })
#define vcmlaq_rot90_lane_f16(__p0_227,__p1_227,__p2_227,__p3_227) __extension__ ({ float16x8_t __s0_227 = __p0_227; float16x8_t __s1_227 = __p1_227; float16x4_t __s2_227 = __p2_227; float16x8_t __ret_227; float16x4_t __reint_227 = __s2_227; uint32x4_t __reint1_227 = (uint32x4_t) {vget_lane_u32(*(uint32x2_t *) &__reint_227, __p3_227), vget_lane_u32(*(uint32x2_t *) &__reint_227, __p3_227), vget_lane_u32(*(uint32x2_t *) &__reint_227, __p3_227), vget_lane_u32(*(uint32x2_t *) &__reint_227, __p3_227)}; __ret_227 = vcmlaq_rot90_f16(__s0_227, __s1_227, *(float16x8_t *) &__reint1_227); __ret_227; })
#define vcmlaq_rot90_lane_f32(__p0_195,__p1_195,__p2_195,__p3_195) __extension__ ({ float32x4_t __s0_195 = __p0_195; float32x4_t __s1_195 = __p1_195; float32x2_t __s2_195 = __p2_195; float32x4_t __ret_195; float32x2_t __reint_195 = __s2_195; uint64x2_t __reint1_195 = (uint64x2_t) {vget_lane_u64(*(uint64x1_t *) &__reint_195, __p3_195), vget_lane_u64(*(uint64x1_t *) &__reint_195, __p3_195)}; __ret_195 = vcmlaq_rot90_f32(__s0_195, __s1_195, *(float32x4_t *) &__reint1_195); __ret_195; })
#define vcmlaq_rot90_lane_f64(__p0_255,__p1_255,__p2_255,__p3_255) __extension__ ({ float64x2_t __s0_255 = __p0_255; float64x2_t __s1_255 = __p1_255; float64x1_t __s2_255 = __p2_255; float64x2_t __ret_255; float64x1_t __reint_255 = __s2_255; uint64x2_t __reint1_255 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_255, __p3_255), vgetq_lane_u64(*(uint64x2_t *) &__reint_255, __p3_255)}; __ret_255 = vcmlaq_rot90_f64(__s0_255, __s1_255, *(float64x2_t *) &__reint1_255); __ret_255; })
#define vcmlaq_rot90_laneq_f16(__p0_231,__p1_231,__p2_231,__p3_231) __extension__ ({ float16x8_t __s0_231 = __p0_231; float16x8_t __s1_231 = __p1_231; float16x8_t __s2_231 = __p2_231; float16x8_t __ret_231; float16x8_t __reint_231 = __s2_231; uint32x4_t __reint1_231 = (uint32x4_t) {vgetq_lane_u32(*(uint32x4_t *) &__reint_231, __p3_231), vgetq_lane_u32(*(uint32x4_t *) &__reint_231, __p3_231), vgetq_lane_u32(*(uint32x4_t *) &__reint_231, __p3_231), vgetq_lane_u32(*(uint32x4_t *) &__reint_231, __p3_231)}; __ret_231 = vcmlaq_rot90_f16(__s0_231, __s1_231, *(float16x8_t *) &__reint1_231); __ret_231; })
#define vcmlaq_rot90_laneq_f32(__p0_199,__p1_199,__p2_199,__p3_199) __extension__ ({ float32x4_t __s0_199 = __p0_199; float32x4_t __s1_199 = __p1_199; float32x4_t __s2_199 = __p2_199; float32x4_t __ret_199; float32x4_t __reint_199 = __s2_199; uint64x2_t __reint1_199 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_199, __p3_199), vgetq_lane_u64(*(uint64x2_t *) &__reint_199, __p3_199)}; __ret_199 = vcmlaq_rot90_f32(__s0_199, __s1_199, *(float32x4_t *) &__reint1_199); __ret_199; })
#define vcmlaq_rot90_laneq_f64(__p0_259,__p1_259,__p2_259,__p3_259) __extension__ ({ float64x2_t __s0_259 = __p0_259; float64x2_t __s1_259 = __p1_259; float64x2_t __s2_259 = __p2_259; float64x2_t __ret_259; float64x2_t __reint_259 = __s2_259; uint64x2_t __reint1_259 = (uint64x2_t) {vgetq_lane_u64(*(uint64x2_t *) &__reint_259, __p3_259), vgetq_lane_u64(*(uint64x2_t *) &__reint_259, __p3_259)}; __ret_259 = vcmlaq_rot90_f64(__s0_259, __s1_259, *(float64x2_t *) &__reint1_259); __ret_259; })
#define vcopy_lane_f32(__p0_376,__p1_376,__p2_376,__p3_376) __extension__ ({ float32x2_t __s0_376 = __p0_376; float32x2_t __s2_376 = __p2_376; float32x2_t __ret_376; __ret_376 = vset_lane_f32(vget_lane_f32(__s2_376, __p3_376), __s0_376, __p1_376); __ret_376; })
#define vcopy_lane_f64(__p0_930,__p1_930,__p2_930,__p3_930) __extension__ ({ float64x1_t __s0_930 = __p0_930; float64x1_t __s2_930 = __p2_930; float64x1_t __ret_930; __ret_930 = vset_lane_f64(vget_lane_f64(__s2_930, __p3_930), __s0_930, __p1_930); __ret_930; })
#define vcopy_lane_p16(__p0_365,__p1_365,__p2_365,__p3_365) __extension__ ({ poly16x4_t __s0_365 = __p0_365; poly16x4_t __s2_365 = __p2_365; poly16x4_t __ret_365; __ret_365 = vset_lane_p16(vget_lane_p16(__s2_365, __p3_365), __s0_365, __p1_365); __ret_365; })
#define vcopy_lane_p64(__p0_929,__p1_929,__p2_929,__p3_929) __extension__ ({ poly64x1_t __s0_929 = __p0_929; poly64x1_t __s2_929 = __p2_929; poly64x1_t __ret_929; __ret_929 = vset_lane_p64(vget_lane_p64(__s2_929, __p3_929), __s0_929, __p1_929); __ret_929; })
#define vcopy_lane_p8(__p0_363,__p1_363,__p2_363,__p3_363) __extension__ ({ poly8x8_t __s0_363 = __p0_363; poly8x8_t __s2_363 = __p2_363; poly8x8_t __ret_363; __ret_363 = vset_lane_p8(vget_lane_p8(__s2_363, __p3_363), __s0_363, __p1_363); __ret_363; })
#define vcopy_lane_s16(__p0_381,__p1_381,__p2_381,__p3_381) __extension__ ({ int16x4_t __s0_381 = __p0_381; int16x4_t __s2_381 = __p2_381; int16x4_t __ret_381; __ret_381 = vset_lane_s16(vget_lane_s16(__s2_381, __p3_381), __s0_381, __p1_381); __ret_381; })
#define vcopy_lane_s32(__p0_378,__p1_378,__p2_378,__p3_378) __extension__ ({ int32x2_t __s0_378 = __p0_378; int32x2_t __s2_378 = __p2_378; int32x2_t __ret_378; __ret_378 = vset_lane_s32(vget_lane_s32(__s2_378, __p3_378), __s0_378, __p1_378); __ret_378; })
#define vcopy_lane_s64(__p0_380,__p1_380,__p2_380,__p3_380) __extension__ ({ int64x1_t __s0_380 = __p0_380; int64x1_t __s2_380 = __p2_380; int64x1_t __ret_380; __ret_380 = vset_lane_s64(vget_lane_s64(__s2_380, __p3_380), __s0_380, __p1_380); __ret_380; })
#define vcopy_lane_s8(__p0_374,__p1_374,__p2_374,__p3_374) __extension__ ({ int8x8_t __s0_374 = __p0_374; int8x8_t __s2_374 = __p2_374; int8x8_t __ret_374; __ret_374 = vset_lane_s8(vget_lane_s8(__s2_374, __p3_374), __s0_374, __p1_374); __ret_374; })
#define vcopy_lane_u16(__p0_372,__p1_372,__p2_372,__p3_372) __extension__ ({ uint16x4_t __s0_372 = __p0_372; uint16x4_t __s2_372 = __p2_372; uint16x4_t __ret_372; __ret_372 = vset_lane_u16(vget_lane_u16(__s2_372, __p3_372), __s0_372, __p1_372); __ret_372; })
#define vcopy_lane_u32(__p0_369,__p1_369,__p2_369,__p3_369) __extension__ ({ uint32x2_t __s0_369 = __p0_369; uint32x2_t __s2_369 = __p2_369; uint32x2_t __ret_369; __ret_369 = vset_lane_u32(vget_lane_u32(__s2_369, __p3_369), __s0_369, __p1_369); __ret_369; })
#define vcopy_lane_u64(__p0_371,__p1_371,__p2_371,__p3_371) __extension__ ({ uint64x1_t __s0_371 = __p0_371; uint64x1_t __s2_371 = __p2_371; uint64x1_t __ret_371; __ret_371 = vset_lane_u64(vget_lane_u64(__s2_371, __p3_371), __s0_371, __p1_371); __ret_371; })
#define vcopy_lane_u8(__p0_367,__p1_367,__p2_367,__p3_367) __extension__ ({ uint8x8_t __s0_367 = __p0_367; uint8x8_t __s2_367 = __p2_367; uint8x8_t __ret_367; __ret_367 = vset_lane_u8(vget_lane_u8(__s2_367, __p3_367), __s0_367, __p1_367); __ret_367; })
#define vcopy_laneq_f32(__p0_419,__p1_419,__p2_419,__p3_419) __extension__ ({ float32x2_t __s0_419 = __p0_419; float32x4_t __s2_419 = __p2_419; float32x2_t __ret_419; __ret_419 = vset_lane_f32(vgetq_lane_f32(__s2_419, __p3_419), __s0_419, __p1_419); __ret_419; })
#define vcopy_laneq_f64(__p0_937,__p1_937,__p2_937,__p3_937) __extension__ ({ float64x1_t __s0_937 = __p0_937; float64x2_t __s2_937 = __p2_937; float64x1_t __ret_937; __ret_937 = vset_lane_f64(vgetq_lane_f64(__s2_937, __p3_937), __s0_937, __p1_937); __ret_937; })
#define vcopy_laneq_p16(__p0_407,__p1_407,__p2_407,__p3_407) __extension__ ({ poly16x4_t __s0_407 = __p0_407; poly16x8_t __s2_407 = __p2_407; poly16x4_t __ret_407; __ret_407 = vset_lane_p16(vgetq_lane_p16(__s2_407, __p3_407), __s0_407, __p1_407); __ret_407; })
#define vcopy_laneq_p64(__p0_935,__p1_935,__p2_935,__p3_935) __extension__ ({ poly64x1_t __s0_935 = __p0_935; poly64x2_t __s2_935 = __p2_935; poly64x1_t __ret_935; __ret_935 = vset_lane_p64(vgetq_lane_p64(__s2_935, __p3_935), __s0_935, __p1_935); __ret_935; })
#define vcopy_laneq_p8(__p0_405,__p1_405,__p2_405,__p3_405) __extension__ ({ poly8x8_t __s0_405 = __p0_405; poly8x16_t __s2_405 = __p2_405; poly8x8_t __ret_405; __ret_405 = vset_lane_p8(vgetq_lane_p8(__s2_405, __p3_405), __s0_405, __p1_405); __ret_405; })
#define vcopy_laneq_s16(__p0_425,__p1_425,__p2_425,__p3_425) __extension__ ({ int16x4_t __s0_425 = __p0_425; int16x8_t __s2_425 = __p2_425; int16x4_t __ret_425; __ret_425 = vset_lane_s16(vgetq_lane_s16(__s2_425, __p3_425), __s0_425, __p1_425); __ret_425; })
#define vcopy_laneq_s32(__p0_421,__p1_421,__p2_421,__p3_421) __extension__ ({ int32x2_t __s0_421 = __p0_421; int32x4_t __s2_421 = __p2_421; int32x2_t __ret_421; __ret_421 = vset_lane_s32(vgetq_lane_s32(__s2_421, __p3_421), __s0_421, __p1_421); __ret_421; })
#define vcopy_laneq_s64(__p0_423,__p1_423,__p2_423,__p3_423) __extension__ ({ int64x1_t __s0_423 = __p0_423; int64x2_t __s2_423 = __p2_423; int64x1_t __ret_423; __ret_423 = vset_lane_s64(vgetq_lane_s64(__s2_423, __p3_423), __s0_423, __p1_423); __ret_423; })
#define vcopy_laneq_s8(__p0_417,__p1_417,__p2_417,__p3_417) __extension__ ({ int8x8_t __s0_417 = __p0_417; int8x16_t __s2_417 = __p2_417; int8x8_t __ret_417; __ret_417 = vset_lane_s8(vgetq_lane_s8(__s2_417, __p3_417), __s0_417, __p1_417); __ret_417; })
#define vcopy_laneq_u16(__p0_415,__p1_415,__p2_415,__p3_415) __extension__ ({ uint16x4_t __s0_415 = __p0_415; uint16x8_t __s2_415 = __p2_415; uint16x4_t __ret_415; __ret_415 = vset_lane_u16(vgetq_lane_u16(__s2_415, __p3_415), __s0_415, __p1_415); __ret_415; })
#define vcopy_laneq_u32(__p0_411,__p1_411,__p2_411,__p3_411) __extension__ ({ uint32x2_t __s0_411 = __p0_411; uint32x4_t __s2_411 = __p2_411; uint32x2_t __ret_411; __ret_411 = vset_lane_u32(vgetq_lane_u32(__s2_411, __p3_411), __s0_411, __p1_411); __ret_411; })
#define vcopy_laneq_u64(__p0_413,__p1_413,__p2_413,__p3_413) __extension__ ({ uint64x1_t __s0_413 = __p0_413; uint64x2_t __s2_413 = __p2_413; uint64x1_t __ret_413; __ret_413 = vset_lane_u64(vgetq_lane_u64(__s2_413, __p3_413), __s0_413, __p1_413); __ret_413; })
#define vcopy_laneq_u8(__p0_409,__p1_409,__p2_409,__p3_409) __extension__ ({ uint8x8_t __s0_409 = __p0_409; uint8x16_t __s2_409 = __p2_409; uint8x8_t __ret_409; __ret_409 = vset_lane_u8(vgetq_lane_u8(__s2_409, __p3_409), __s0_409, __p1_409); __ret_409; })
#define vcopyq_lane_f32(__p0_355,__p1_355,__p2_355,__p3_355) __extension__ ({ float32x4_t __s0_355 = __p0_355; float32x2_t __s2_355 = __p2_355; float32x4_t __ret_355; __ret_355 = vsetq_lane_f32(vget_lane_f32(__s2_355, __p3_355), __s0_355, __p1_355); __ret_355; })
#define vcopyq_lane_f64(__p0_927,__p1_927,__p2_927,__p3_927) __extension__ ({ float64x2_t __s0_927 = __p0_927; float64x1_t __s2_927 = __p2_927; float64x2_t __ret_927; __ret_927 = vsetq_lane_f64(vget_lane_f64(__s2_927, __p3_927), __s0_927, __p1_927); __ret_927; })
#define vcopyq_lane_p16(__p0_343,__p1_343,__p2_343,__p3_343) __extension__ ({ poly16x8_t __s0_343 = __p0_343; poly16x4_t __s2_343 = __p2_343; poly16x8_t __ret_343; __ret_343 = vsetq_lane_p16(vget_lane_p16(__s2_343, __p3_343), __s0_343, __p1_343); __ret_343; })
#define vcopyq_lane_p64(__p0_925,__p1_925,__p2_925,__p3_925) __extension__ ({ poly64x2_t __s0_925 = __p0_925; poly64x1_t __s2_925 = __p2_925; poly64x2_t __ret_925; __ret_925 = vsetq_lane_p64(vget_lane_p64(__s2_925, __p3_925), __s0_925, __p1_925); __ret_925; })
#define vcopyq_lane_p8(__p0_341,__p1_341,__p2_341,__p3_341) __extension__ ({ poly8x16_t __s0_341 = __p0_341; poly8x8_t __s2_341 = __p2_341; poly8x16_t __ret_341; __ret_341 = vsetq_lane_p8(vget_lane_p8(__s2_341, __p3_341), __s0_341, __p1_341); __ret_341; })
#define vcopyq_lane_s16(__p0_361,__p1_361,__p2_361,__p3_361) __extension__ ({ int16x8_t __s0_361 = __p0_361; int16x4_t __s2_361 = __p2_361; int16x8_t __ret_361; __ret_361 = vsetq_lane_s16(vget_lane_s16(__s2_361, __p3_361), __s0_361, __p1_361); __ret_361; })
#define vcopyq_lane_s32(__p0_357,__p1_357,__p2_357,__p3_357) __extension__ ({ int32x4_t __s0_357 = __p0_357; int32x2_t __s2_357 = __p2_357; int32x4_t __ret_357; __ret_357 = vsetq_lane_s32(vget_lane_s32(__s2_357, __p3_357), __s0_357, __p1_357); __ret_357; })
#define vcopyq_lane_s64(__p0_359,__p1_359,__p2_359,__p3_359) __extension__ ({ int64x2_t __s0_359 = __p0_359; int64x1_t __s2_359 = __p2_359; int64x2_t __ret_359; __ret_359 = vsetq_lane_s64(vget_lane_s64(__s2_359, __p3_359), __s0_359, __p1_359); __ret_359; })
#define vcopyq_lane_s8(__p0_353,__p1_353,__p2_353,__p3_353) __extension__ ({ int8x16_t __s0_353 = __p0_353; int8x8_t __s2_353 = __p2_353; int8x16_t __ret_353; __ret_353 = vsetq_lane_s8(vget_lane_s8(__s2_353, __p3_353), __s0_353, __p1_353); __ret_353; })
#define vcopyq_lane_u16(__p0_351,__p1_351,__p2_351,__p3_351) __extension__ ({ uint16x8_t __s0_351 = __p0_351; uint16x4_t __s2_351 = __p2_351; uint16x8_t __ret_351; __ret_351 = vsetq_lane_u16(vget_lane_u16(__s2_351, __p3_351), __s0_351, __p1_351); __ret_351; })
#define vcopyq_lane_u32(__p0_347,__p1_347,__p2_347,__p3_347) __extension__ ({ uint32x4_t __s0_347 = __p0_347; uint32x2_t __s2_347 = __p2_347; uint32x4_t __ret_347; __ret_347 = vsetq_lane_u32(vget_lane_u32(__s2_347, __p3_347), __s0_347, __p1_347); __ret_347; })
#define vcopyq_lane_u64(__p0_349,__p1_349,__p2_349,__p3_349) __extension__ ({ uint64x2_t __s0_349 = __p0_349; uint64x1_t __s2_349 = __p2_349; uint64x2_t __ret_349; __ret_349 = vsetq_lane_u64(vget_lane_u64(__s2_349, __p3_349), __s0_349, __p1_349); __ret_349; })
#define vcopyq_lane_u8(__p0_345,__p1_345,__p2_345,__p3_345) __extension__ ({ uint8x16_t __s0_345 = __p0_345; uint8x8_t __s2_345 = __p2_345; uint8x16_t __ret_345; __ret_345 = vsetq_lane_u8(vget_lane_u8(__s2_345, __p3_345), __s0_345, __p1_345); __ret_345; })
#define vcopyq_laneq_f32(__p0_397,__p1_397,__p2_397,__p3_397) __extension__ ({ float32x4_t __s0_397 = __p0_397; float32x4_t __s2_397 = __p2_397; float32x4_t __ret_397; __ret_397 = vsetq_lane_f32(vgetq_lane_f32(__s2_397, __p3_397), __s0_397, __p1_397); __ret_397; })
#define vcopyq_laneq_f64(__p0_933,__p1_933,__p2_933,__p3_933) __extension__ ({ float64x2_t __s0_933 = __p0_933; float64x2_t __s2_933 = __p2_933; float64x2_t __ret_933; __ret_933 = vsetq_lane_f64(vgetq_lane_f64(__s2_933, __p3_933), __s0_933, __p1_933); __ret_933; })
#define vcopyq_laneq_p16(__p0_385,__p1_385,__p2_385,__p3_385) __extension__ ({ poly16x8_t __s0_385 = __p0_385; poly16x8_t __s2_385 = __p2_385; poly16x8_t __ret_385; __ret_385 = vsetq_lane_p16(vgetq_lane_p16(__s2_385, __p3_385), __s0_385, __p1_385); __ret_385; })
#define vcopyq_laneq_p64(__p0_931,__p1_931,__p2_931,__p3_931) __extension__ ({ poly64x2_t __s0_931 = __p0_931; poly64x2_t __s2_931 = __p2_931; poly64x2_t __ret_931; __ret_931 = vsetq_lane_p64(vgetq_lane_p64(__s2_931, __p3_931), __s0_931, __p1_931); __ret_931; })
#define vcopyq_laneq_p8(__p0_383,__p1_383,__p2_383,__p3_383) __extension__ ({ poly8x16_t __s0_383 = __p0_383; poly8x16_t __s2_383 = __p2_383; poly8x16_t __ret_383; __ret_383 = vsetq_lane_p8(vgetq_lane_p8(__s2_383, __p3_383), __s0_383, __p1_383); __ret_383; })
#define vcopyq_laneq_s16(__p0_403,__p1_403,__p2_403,__p3_403) __extension__ ({ int16x8_t __s0_403 = __p0_403; int16x8_t __s2_403 = __p2_403; int16x8_t __ret_403; __ret_403 = vsetq_lane_s16(vgetq_lane_s16(__s2_403, __p3_403), __s0_403, __p1_403); __ret_403; })
#define vcopyq_laneq_s32(__p0_399,__p1_399,__p2_399,__p3_399) __extension__ ({ int32x4_t __s0_399 = __p0_399; int32x4_t __s2_399 = __p2_399; int32x4_t __ret_399; __ret_399 = vsetq_lane_s32(vgetq_lane_s32(__s2_399, __p3_399), __s0_399, __p1_399); __ret_399; })
#define vcopyq_laneq_s64(__p0_401,__p1_401,__p2_401,__p3_401) __extension__ ({ int64x2_t __s0_401 = __p0_401; int64x2_t __s2_401 = __p2_401; int64x2_t __ret_401; __ret_401 = vsetq_lane_s64(vgetq_lane_s64(__s2_401, __p3_401), __s0_401, __p1_401); __ret_401; })
#define vcopyq_laneq_s8(__p0_395,__p1_395,__p2_395,__p3_395) __extension__ ({ int8x16_t __s0_395 = __p0_395; int8x16_t __s2_395 = __p2_395; int8x16_t __ret_395; __ret_395 = vsetq_lane_s8(vgetq_lane_s8(__s2_395, __p3_395), __s0_395, __p1_395); __ret_395; })
#define vcopyq_laneq_u16(__p0_393,__p1_393,__p2_393,__p3_393) __extension__ ({ uint16x8_t __s0_393 = __p0_393; uint16x8_t __s2_393 = __p2_393; uint16x8_t __ret_393; __ret_393 = vsetq_lane_u16(vgetq_lane_u16(__s2_393, __p3_393), __s0_393, __p1_393); __ret_393; })
#define vcopyq_laneq_u32(__p0_389,__p1_389,__p2_389,__p3_389) __extension__ ({ uint32x4_t __s0_389 = __p0_389; uint32x4_t __s2_389 = __p2_389; uint32x4_t __ret_389; __ret_389 = vsetq_lane_u32(vgetq_lane_u32(__s2_389, __p3_389), __s0_389, __p1_389); __ret_389; })
#define vcopyq_laneq_u64(__p0_391,__p1_391,__p2_391,__p3_391) __extension__ ({ uint64x2_t __s0_391 = __p0_391; uint64x2_t __s2_391 = __p2_391; uint64x2_t __ret_391; __ret_391 = vsetq_lane_u64(vgetq_lane_u64(__s2_391, __p3_391), __s0_391, __p1_391); __ret_391; })
#define vcopyq_laneq_u8(__p0_387,__p1_387,__p2_387,__p3_387) __extension__ ({ uint8x16_t __s0_387 = __p0_387; uint8x16_t __s2_387 = __p2_387; uint8x16_t __ret_387; __ret_387 = vsetq_lane_u8(vgetq_lane_u8(__s2_387, __p3_387), __s0_387, __p1_387); __ret_387; })
#define vcreate_f16(__p0) __extension__ ({ float16x4_t __ret; uint64_t __promote = __p0; __ret = (float16x4_t)(__promote); __ret; })
#define vcreate_f32(__p0) __extension__ ({ float32x2_t __ret; uint64_t __promote = __p0; __ret = (float32x2_t)(__promote); __ret; })
#define vcreate_f64(__p0) __extension__ ({ float64x1_t __ret; uint64_t __promote = __p0; __ret = (float64x1_t)(__promote); __ret; })
#define vcreate_p16(__p0) __extension__ ({ poly16x4_t __ret; uint64_t __promote = __p0; __ret = (poly16x4_t)(__promote); __ret; })
#define vcreate_p64(__p0) __extension__ ({ poly64x1_t __ret; uint64_t __promote = __p0; __ret = (poly64x1_t)(__promote); __ret; })
#define vcreate_p8(__p0) __extension__ ({ poly8x8_t __ret; uint64_t __promote = __p0; __ret = (poly8x8_t)(__promote); __ret; })
#define vcreate_s16(__p0) __extension__ ({ int16x4_t __ret; uint64_t __promote = __p0; __ret = (int16x4_t)(__promote); __ret; })
#define vcreate_s32(__p0) __extension__ ({ int32x2_t __ret; uint64_t __promote = __p0; __ret = (int32x2_t)(__promote); __ret; })
#define vcreate_s64(__p0) __extension__ ({ int64x1_t __ret; uint64_t __promote = __p0; __ret = (int64x1_t)(__promote); __ret; })
#define vcreate_s8(__p0) __extension__ ({ int8x8_t __ret; uint64_t __promote = __p0; __ret = (int8x8_t)(__promote); __ret; })
#define vcreate_u16(__p0) __extension__ ({ uint16x4_t __ret; uint64_t __promote = __p0; __ret = (uint16x4_t)(__promote); __ret; })
#define vcreate_u32(__p0) __extension__ ({ uint32x2_t __ret; uint64_t __promote = __p0; __ret = (uint32x2_t)(__promote); __ret; })
#define vcreate_u64(__p0) __extension__ ({ uint64x1_t __ret; uint64_t __promote = __p0; __ret = (uint64x1_t)(__promote); __ret; })
#define vcreate_u8(__p0) __extension__ ({ uint8x8_t __ret; uint64_t __promote = __p0; __ret = (uint8x8_t)(__promote); __ret; })
#define vcvt_n_f16_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_vcvt_n_f16_v((int8x8_t)__s0, __p1, 1); __ret; })
#define vcvt_n_f16_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_vcvt_n_f16_v((int8x8_t)__s0, __p1, 17); __ret; })
#define vcvt_n_f32_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_vcvt_n_f32_v((int8x8_t)__s0, __p1, 2); __ret; })
#define vcvt_n_f32_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_vcvt_n_f32_v((int8x8_t)__s0, __p1, 18); __ret; })
#define vcvt_n_f64_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vcvt_n_f64_v((int8x8_t)__s0, __p1, 3); __ret; })
#define vcvt_n_f64_u64(__p0,__p1) __extension__ ({ uint64x1_t __s0 = __p0; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vcvt_n_f64_v((int8x8_t)__s0, __p1, 19); __ret; })
#define vcvt_n_s16_f16(__p0,__p1) __extension__ ({ float16x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vcvt_n_s16_v((int8x8_t)__s0, __p1, 1); __ret; })
#define vcvt_n_s32_f32(__p0,__p1) __extension__ ({ float32x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vcvt_n_s32_v((int8x8_t)__s0, __p1, 2); __ret; })
#define vcvt_n_s64_f64(__p0,__p1) __extension__ ({ float64x1_t __s0 = __p0; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vcvt_n_s64_v((int8x8_t)__s0, __p1, 3); __ret; })
#define vcvt_n_u16_f16(__p0,__p1) __extension__ ({ float16x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vcvt_n_u16_v((int8x8_t)__s0, __p1, 17); __ret; })
#define vcvt_n_u32_f32(__p0,__p1) __extension__ ({ float32x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vcvt_n_u32_v((int8x8_t)__s0, __p1, 18); __ret; })
#define vcvt_n_u64_f64(__p0,__p1) __extension__ ({ float64x1_t __s0 = __p0; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vcvt_n_u64_v((int8x8_t)__s0, __p1, 19); __ret; })
#define vcvtd_n_f64_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; float64_t __ret; __ret = (float64_t) __builtin_neon_vcvtd_n_f64_s64(__s0, __p1); __ret; })
#define vcvtd_n_f64_u64(__p0,__p1) __extension__ ({ uint64_t __s0 = __p0; float64_t __ret; __ret = (float64_t) __builtin_neon_vcvtd_n_f64_u64(__s0, __p1); __ret; })
#define vcvtd_n_s64_f64(__p0,__p1) __extension__ ({ float64_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vcvtd_n_s64_f64(__s0, __p1); __ret; })
#define vcvtd_n_u64_f64(__p0,__p1) __extension__ ({ float64_t __s0 = __p0; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vcvtd_n_u64_f64(__s0, __p1); __ret; })
#define vcvtq_n_f16_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_vcvtq_n_f16_v((int8x16_t)__s0, __p1, 33); __ret; })
#define vcvtq_n_f16_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_vcvtq_n_f16_v((int8x16_t)__s0, __p1, 49); __ret; })
#define vcvtq_n_f32_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_vcvtq_n_f32_v((int8x16_t)__s0, __p1, 34); __ret; })
#define vcvtq_n_f32_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_vcvtq_n_f32_v((int8x16_t)__s0, __p1, 50); __ret; })
#define vcvtq_n_f64_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_vcvtq_n_f64_v((int8x16_t)__s0, __p1, 35); __ret; })
#define vcvtq_n_f64_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_vcvtq_n_f64_v((int8x16_t)__s0, __p1, 51); __ret; })
#define vcvtq_n_s16_f16(__p0,__p1) __extension__ ({ float16x8_t __s0 = __p0; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vcvtq_n_s16_v((int8x16_t)__s0, __p1, 33); __ret; })
#define vcvtq_n_s32_f32(__p0,__p1) __extension__ ({ float32x4_t __s0 = __p0; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vcvtq_n_s32_v((int8x16_t)__s0, __p1, 34); __ret; })
#define vcvtq_n_s64_f64(__p0,__p1) __extension__ ({ float64x2_t __s0 = __p0; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vcvtq_n_s64_v((int8x16_t)__s0, __p1, 35); __ret; })
#define vcvtq_n_u16_f16(__p0,__p1) __extension__ ({ float16x8_t __s0 = __p0; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vcvtq_n_u16_v((int8x16_t)__s0, __p1, 49); __ret; })
#define vcvtq_n_u32_f32(__p0,__p1) __extension__ ({ float32x4_t __s0 = __p0; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vcvtq_n_u32_v((int8x16_t)__s0, __p1, 50); __ret; })
#define vcvtq_n_u64_f64(__p0,__p1) __extension__ ({ float64x2_t __s0 = __p0; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vcvtq_n_u64_v((int8x16_t)__s0, __p1, 51); __ret; })
#define vcvts_n_f32_s32(__p0,__p1) __extension__ ({ int32_t __s0 = __p0; float32_t __ret; __ret = (float32_t) __builtin_neon_vcvts_n_f32_s32(__s0, __p1); __ret; })
#define vcvts_n_f32_u32(__p0,__p1) __extension__ ({ uint32_t __s0 = __p0; float32_t __ret; __ret = (float32_t) __builtin_neon_vcvts_n_f32_u32(__s0, __p1); __ret; })
#define vcvts_n_s32_f32(__p0,__p1) __extension__ ({ float32_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vcvts_n_s32_f32(__s0, __p1); __ret; })
#define vcvts_n_u32_f32(__p0,__p1) __extension__ ({ float32_t __s0 = __p0; uint32_t __ret; __ret = (uint32_t) __builtin_neon_vcvts_n_u32_f32(__s0, __p1); __ret; })
#define vdot_lane_s32(__p0_267,__p1_267,__p2_267,__p3_267) __extension__ ({ int32x2_t __s0_267 = __p0_267; int8x8_t __s1_267 = __p1_267; int8x8_t __s2_267 = __p2_267; int32x2_t __ret_267; int8x8_t __reint_267 = __s2_267; int32x2_t __reint1_267 = splat_lane_s32(*(int32x2_t *) &__reint_267, __p3_267); __ret_267 = vdot_s32(__s0_267, __s1_267, *(int8x8_t *) &__reint1_267); __ret_267; })
#define vdot_lane_u32(__p0_265,__p1_265,__p2_265,__p3_265) __extension__ ({ uint32x2_t __s0_265 = __p0_265; uint8x8_t __s1_265 = __p1_265; uint8x8_t __s2_265 = __p2_265; uint32x2_t __ret_265; uint8x8_t __reint_265 = __s2_265; uint32x2_t __reint1_265 = splat_lane_u32(*(uint32x2_t *) &__reint_265, __p3_265); __ret_265 = vdot_u32(__s0_265, __s1_265, *(uint8x8_t *) &__reint1_265); __ret_265; })
#define vdot_laneq_s32(__p0_275,__p1_275,__p2_275,__p3_275) __extension__ ({ int32x2_t __s0_275 = __p0_275; int8x8_t __s1_275 = __p1_275; int8x16_t __s2_275 = __p2_275; int32x2_t __ret_275; int8x16_t __reint_275 = __s2_275; int32x2_t __reint1_275 = splat_laneq_s32(*(int32x4_t *) &__reint_275, __p3_275); __ret_275 = vdot_s32(__s0_275, __s1_275, *(int8x8_t *) &__reint1_275); __ret_275; })
#define vdot_laneq_u32(__p0_273,__p1_273,__p2_273,__p3_273) __extension__ ({ uint32x2_t __s0_273 = __p0_273; uint8x8_t __s1_273 = __p1_273; uint8x16_t __s2_273 = __p2_273; uint32x2_t __ret_273; uint8x16_t __reint_273 = __s2_273; uint32x2_t __reint1_273 = splat_laneq_u32(*(uint32x4_t *) &__reint_273, __p3_273); __ret_273 = vdot_u32(__s0_273, __s1_273, *(uint8x8_t *) &__reint1_273); __ret_273; })
#define vdotq_lane_s32(__p0_263,__p1_263,__p2_263,__p3_263) __extension__ ({ int32x4_t __s0_263 = __p0_263; int8x16_t __s1_263 = __p1_263; int8x8_t __s2_263 = __p2_263; int32x4_t __ret_263; int8x8_t __reint_263 = __s2_263; int32x4_t __reint1_263 = splatq_lane_s32(*(int32x2_t *) &__reint_263, __p3_263); __ret_263 = vdotq_s32(__s0_263, __s1_263, *(int8x16_t *) &__reint1_263); __ret_263; })
#define vdotq_lane_u32(__p0_261,__p1_261,__p2_261,__p3_261) __extension__ ({ uint32x4_t __s0_261 = __p0_261; uint8x16_t __s1_261 = __p1_261; uint8x8_t __s2_261 = __p2_261; uint32x4_t __ret_261; uint8x8_t __reint_261 = __s2_261; uint32x4_t __reint1_261 = splatq_lane_u32(*(uint32x2_t *) &__reint_261, __p3_261); __ret_261 = vdotq_u32(__s0_261, __s1_261, *(uint8x16_t *) &__reint1_261); __ret_261; })
#define vdotq_laneq_s32(__p0_271,__p1_271,__p2_271,__p3_271) __extension__ ({ int32x4_t __s0_271 = __p0_271; int8x16_t __s1_271 = __p1_271; int8x16_t __s2_271 = __p2_271; int32x4_t __ret_271; int8x16_t __reint_271 = __s2_271; int32x4_t __reint1_271 = splatq_laneq_s32(*(int32x4_t *) &__reint_271, __p3_271); __ret_271 = vdotq_s32(__s0_271, __s1_271, *(int8x16_t *) &__reint1_271); __ret_271; })
#define vdotq_laneq_u32(__p0_269,__p1_269,__p2_269,__p3_269) __extension__ ({ uint32x4_t __s0_269 = __p0_269; uint8x16_t __s1_269 = __p1_269; uint8x16_t __s2_269 = __p2_269; uint32x4_t __ret_269; uint8x16_t __reint_269 = __s2_269; uint32x4_t __reint1_269 = splatq_laneq_u32(*(uint32x4_t *) &__reint_269, __p3_269); __ret_269 = vdotq_u32(__s0_269, __s1_269, *(uint8x16_t *) &__reint1_269); __ret_269; })
#define vdup_lane_f16(__p0_435,__p1_435) __extension__ ({ float16x4_t __s0_435 = __p0_435; float16x4_t __ret_435; __ret_435 = splat_lane_f16(__s0_435, __p1_435); __ret_435; })
#define vdup_lane_f32(__p0_35,__p1_35) __extension__ ({ float32x2_t __s0_35 = __p0_35; float32x2_t __ret_35; __ret_35 = splat_lane_f32(__s0_35, __p1_35); __ret_35; })
#define vdup_lane_f64(__p0_434,__p1_434) __extension__ ({ float64x1_t __s0_434 = __p0_434; float64x1_t __ret_434; __ret_434 = splat_lane_f64(__s0_434, __p1_434); __ret_434; })
#define vdup_lane_p16(__p0_2,__p1_2) __extension__ ({ poly16x4_t __s0_2 = __p0_2; poly16x4_t __ret_2; __ret_2 = splat_lane_p16(__s0_2, __p1_2); __ret_2; })
#define vdup_lane_p64(__p0_427,__p1_427) __extension__ ({ poly64x1_t __s0_427 = __p0_427; poly64x1_t __ret_427; __ret_427 = splat_lane_p64(__s0_427, __p1_427); __ret_427; })
#define vdup_lane_p8(__p0_0,__p1_0) __extension__ ({ poly8x8_t __s0_0 = __p0_0; poly8x8_t __ret_0; __ret_0 = splat_lane_p8(__s0_0, __p1_0); __ret_0; })
#define vdup_lane_s16(__p0_40,__p1_40) __extension__ ({ int16x4_t __s0_40 = __p0_40; int16x4_t __ret_40; __ret_40 = splat_lane_s16(__s0_40, __p1_40); __ret_40; })
#define vdup_lane_s32(__p0_37,__p1_37) __extension__ ({ int32x2_t __s0_37 = __p0_37; int32x2_t __ret_37; __ret_37 = splat_lane_s32(__s0_37, __p1_37); __ret_37; })
#define vdup_lane_s64(__p0_39,__p1_39) __extension__ ({ int64x1_t __s0_39 = __p0_39; int64x1_t __ret_39; __ret_39 = splat_lane_s64(__s0_39, __p1_39); __ret_39; })
#define vdup_lane_s8(__p0_33,__p1_33) __extension__ ({ int8x8_t __s0_33 = __p0_33; int8x8_t __ret_33; __ret_33 = splat_lane_s8(__s0_33, __p1_33); __ret_33; })
#define vdup_lane_u16(__p0_31,__p1_31) __extension__ ({ uint16x4_t __s0_31 = __p0_31; uint16x4_t __ret_31; __ret_31 = splat_lane_u16(__s0_31, __p1_31); __ret_31; })
#define vdup_lane_u32(__p0_28,__p1_28) __extension__ ({ uint32x2_t __s0_28 = __p0_28; uint32x2_t __ret_28; __ret_28 = splat_lane_u32(__s0_28, __p1_28); __ret_28; })
#define vdup_lane_u64(__p0_30,__p1_30) __extension__ ({ uint64x1_t __s0_30 = __p0_30; uint64x1_t __ret_30; __ret_30 = splat_lane_u64(__s0_30, __p1_30); __ret_30; })
#define vdup_lane_u8(__p0_26,__p1_26) __extension__ ({ uint8x8_t __s0_26 = __p0_26; uint8x8_t __ret_26; __ret_26 = splat_lane_u8(__s0_26, __p1_26); __ret_26; })
#define vdup_laneq_f16(__p0_485,__p1_485) __extension__ ({ float16x8_t __s0_485 = __p0_485; float16x4_t __ret_485; __ret_485 = splat_laneq_f16(__s0_485, __p1_485); __ret_485; })
#define vdup_laneq_f32(__p0_483,__p1_483) __extension__ ({ float32x4_t __s0_483 = __p0_483; float32x2_t __ret_483; __ret_483 = splat_laneq_f32(__s0_483, __p1_483); __ret_483; })
#define vdup_laneq_f64(__p0_481,__p1_481) __extension__ ({ float64x2_t __s0_481 = __p0_481; float64x1_t __ret_481; __ret_481 = splat_laneq_f64(__s0_481, __p1_481); __ret_481; })
#define vdup_laneq_p16(__p0_441,__p1_441) __extension__ ({ poly16x8_t __s0_441 = __p0_441; poly16x4_t __ret_441; __ret_441 = splat_laneq_p16(__s0_441, __p1_441); __ret_441; })
#define vdup_laneq_p64(__p0_439,__p1_439) __extension__ ({ poly64x2_t __s0_439 = __p0_439; poly64x1_t __ret_439; __ret_439 = splat_laneq_p64(__s0_439, __p1_439); __ret_439; })
#define vdup_laneq_p8(__p0_437,__p1_437) __extension__ ({ poly8x16_t __s0_437 = __p0_437; poly8x8_t __ret_437; __ret_437 = splat_laneq_p8(__s0_437, __p1_437); __ret_437; })
#define vdup_laneq_s16(__p0_491,__p1_491) __extension__ ({ int16x8_t __s0_491 = __p0_491; int16x4_t __ret_491; __ret_491 = splat_laneq_s16(__s0_491, __p1_491); __ret_491; })
#define vdup_laneq_s32(__p0_487,__p1_487) __extension__ ({ int32x4_t __s0_487 = __p0_487; int32x2_t __ret_487; __ret_487 = splat_laneq_s32(__s0_487, __p1_487); __ret_487; })
#define vdup_laneq_s64(__p0_489,__p1_489) __extension__ ({ int64x2_t __s0_489 = __p0_489; int64x1_t __ret_489; __ret_489 = splat_laneq_s64(__s0_489, __p1_489); __ret_489; })
#define vdup_laneq_s8(__p0_479,__p1_479) __extension__ ({ int8x16_t __s0_479 = __p0_479; int8x8_t __ret_479; __ret_479 = splat_laneq_s8(__s0_479, __p1_479); __ret_479; })
#define vdup_laneq_u16(__p0_477,__p1_477) __extension__ ({ uint16x8_t __s0_477 = __p0_477; uint16x4_t __ret_477; __ret_477 = splat_laneq_u16(__s0_477, __p1_477); __ret_477; })
#define vdup_laneq_u32(__p0_473,__p1_473) __extension__ ({ uint32x4_t __s0_473 = __p0_473; uint32x2_t __ret_473; __ret_473 = splat_laneq_u32(__s0_473, __p1_473); __ret_473; })
#define vdup_laneq_u64(__p0_475,__p1_475) __extension__ ({ uint64x2_t __s0_475 = __p0_475; uint64x1_t __ret_475; __ret_475 = splat_laneq_u64(__s0_475, __p1_475); __ret_475; })
#define vdup_laneq_u8(__p0_471,__p1_471) __extension__ ({ uint8x16_t __s0_471 = __p0_471; uint8x8_t __ret_471; __ret_471 = splat_laneq_u8(__s0_471, __p1_471); __ret_471; })
#define vdup_n_f16(__p0) __extension__ ({ float16_t __s0 = __p0; float16x4_t __ret; __ret = (float16x4_t) {__s0, __s0, __s0, __s0}; __ret; })
#define vdupb_lane_p8(__p0,__p1) __extension__ ({ poly8x8_t __s0 = __p0; poly8_t __ret; __ret = (poly8_t) __builtin_neon_vdupb_lane_i8((poly8x8_t)__s0, __p1); __ret; })
#define vdupb_lane_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vdupb_lane_i8((int8x8_t)__s0, __p1); __ret; })
#define vdupb_lane_u8(__p0,__p1) __extension__ ({ uint8x8_t __s0 = __p0; uint8_t __ret; __ret = (uint8_t) __builtin_neon_vdupb_lane_i8((int8x8_t)__s0, __p1); __ret; })
#define vdupb_laneq_p8(__p0,__p1) __extension__ ({ poly8x16_t __s0 = __p0; poly8_t __ret; __ret = (poly8_t) __builtin_neon_vdupb_laneq_i8((poly8x16_t)__s0, __p1); __ret; })
#define vdupb_laneq_s8(__p0,__p1) __extension__ ({ int8x16_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vdupb_laneq_i8((int8x16_t)__s0, __p1); __ret; })
#define vdupb_laneq_u8(__p0,__p1) __extension__ ({ uint8x16_t __s0 = __p0; uint8_t __ret; __ret = (uint8_t) __builtin_neon_vdupb_laneq_i8((int8x16_t)__s0, __p1); __ret; })
#define vdupd_lane_f64(__p0,__p1) __extension__ ({ float64x1_t __s0 = __p0; float64_t __ret; __ret = (float64_t) __builtin_neon_vdupd_lane_f64((float64x1_t)__s0, __p1); __ret; })
#define vdupd_lane_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vdupd_lane_i64((int64x1_t)__s0, __p1); __ret; })
#define vdupd_lane_u64(__p0,__p1) __extension__ ({ uint64x1_t __s0 = __p0; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vdupd_lane_i64((int64x1_t)__s0, __p1); __ret; })
#define vdupd_laneq_f64(__p0,__p1) __extension__ ({ float64x2_t __s0 = __p0; float64_t __ret; __ret = (float64_t) __builtin_neon_vdupd_laneq_f64((float64x2_t)__s0, __p1); __ret; })
#define vdupd_laneq_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vdupd_laneq_i64((int64x2_t)__s0, __p1); __ret; })
#define vdupd_laneq_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vdupd_laneq_i64((int64x2_t)__s0, __p1); __ret; })
#define vduph_lane_f16(__p0,__p1) __extension__ ({ float16x4_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vduph_lane_f16((float16x4_t)__s0, __p1); __ret; })
#define vduph_lane_p16(__p0,__p1) __extension__ ({ poly16x4_t __s0 = __p0; poly16_t __ret; __ret = (poly16_t) __builtin_neon_vduph_lane_i16((poly16x4_t)__s0, __p1); __ret; })
#define vduph_lane_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vduph_lane_i16((int16x4_t)__s0, __p1); __ret; })
#define vduph_lane_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; uint16_t __ret; __ret = (uint16_t) __builtin_neon_vduph_lane_i16((int16x4_t)__s0, __p1); __ret; })
#define vduph_laneq_f16(__p0,__p1) __extension__ ({ float16x8_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vduph_laneq_f16((float16x8_t)__s0, __p1); __ret; })
#define vduph_laneq_p16(__p0,__p1) __extension__ ({ poly16x8_t __s0 = __p0; poly16_t __ret; __ret = (poly16_t) __builtin_neon_vduph_laneq_i16((poly16x8_t)__s0, __p1); __ret; })
#define vduph_laneq_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vduph_laneq_i16((int16x8_t)__s0, __p1); __ret; })
#define vduph_laneq_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint16_t __ret; __ret = (uint16_t) __builtin_neon_vduph_laneq_i16((int16x8_t)__s0, __p1); __ret; })
#define vdupq_lane_f16(__p0_432,__p1_432) __extension__ ({ float16x4_t __s0_432 = __p0_432; float16x8_t __ret_432; __ret_432 = splatq_lane_f16(__s0_432, __p1_432); __ret_432; })
#define vdupq_lane_f32(__p0_18,__p1_18) __extension__ ({ float32x2_t __s0_18 = __p0_18; float32x4_t __ret_18; __ret_18 = splatq_lane_f32(__s0_18, __p1_18); __ret_18; })
#define vdupq_lane_f64(__p0_430,__p1_430) __extension__ ({ float64x1_t __s0_430 = __p0_430; float64x2_t __ret_430; __ret_430 = splatq_lane_f64(__s0_430, __p1_430); __ret_430; })
#define vdupq_lane_p16(__p0_6,__p1_6) __extension__ ({ poly16x4_t __s0_6 = __p0_6; poly16x8_t __ret_6; __ret_6 = splatq_lane_p16(__s0_6, __p1_6); __ret_6; })
#define vdupq_lane_p64(__p0_428,__p1_428) __extension__ ({ poly64x1_t __s0_428 = __p0_428; poly64x2_t __ret_428; __ret_428 = splatq_lane_p64(__s0_428, __p1_428); __ret_428; })
#define vdupq_lane_p8(__p0_4,__p1_4) __extension__ ({ poly8x8_t __s0_4 = __p0_4; poly8x16_t __ret_4; __ret_4 = splatq_lane_p8(__s0_4, __p1_4); __ret_4; })
#define vdupq_lane_s16(__p0_24,__p1_24) __extension__ ({ int16x4_t __s0_24 = __p0_24; int16x8_t __ret_24; __ret_24 = splatq_lane_s16(__s0_24, __p1_24); __ret_24; })
#define vdupq_lane_s32(__p0_20,__p1_20) __extension__ ({ int32x2_t __s0_20 = __p0_20; int32x4_t __ret_20; __ret_20 = splatq_lane_s32(__s0_20, __p1_20); __ret_20; })
#define vdupq_lane_s64(__p0_22,__p1_22) __extension__ ({ int64x1_t __s0_22 = __p0_22; int64x2_t __ret_22; __ret_22 = splatq_lane_s64(__s0_22, __p1_22); __ret_22; })
#define vdupq_lane_s8(__p0_16,__p1_16) __extension__ ({ int8x8_t __s0_16 = __p0_16; int8x16_t __ret_16; __ret_16 = splatq_lane_s8(__s0_16, __p1_16); __ret_16; })
#define vdupq_lane_u16(__p0_14,__p1_14) __extension__ ({ uint16x4_t __s0_14 = __p0_14; uint16x8_t __ret_14; __ret_14 = splatq_lane_u16(__s0_14, __p1_14); __ret_14; })
#define vdupq_lane_u32(__p0_10,__p1_10) __extension__ ({ uint32x2_t __s0_10 = __p0_10; uint32x4_t __ret_10; __ret_10 = splatq_lane_u32(__s0_10, __p1_10); __ret_10; })
#define vdupq_lane_u64(__p0_12,__p1_12) __extension__ ({ uint64x1_t __s0_12 = __p0_12; uint64x2_t __ret_12; __ret_12 = splatq_lane_u64(__s0_12, __p1_12); __ret_12; })
#define vdupq_lane_u8(__p0_8,__p1_8) __extension__ ({ uint8x8_t __s0_8 = __p0_8; uint8x16_t __ret_8; __ret_8 = splatq_lane_u8(__s0_8, __p1_8); __ret_8; })
#define vdupq_laneq_f16(__p0_463,__p1_463) __extension__ ({ float16x8_t __s0_463 = __p0_463; float16x8_t __ret_463; __ret_463 = splatq_laneq_f16(__s0_463, __p1_463); __ret_463; })
#define vdupq_laneq_f32(__p0_461,__p1_461) __extension__ ({ float32x4_t __s0_461 = __p0_461; float32x4_t __ret_461; __ret_461 = splatq_laneq_f32(__s0_461, __p1_461); __ret_461; })
#define vdupq_laneq_f64(__p0_459,__p1_459) __extension__ ({ float64x2_t __s0_459 = __p0_459; float64x2_t __ret_459; __ret_459 = splatq_laneq_f64(__s0_459, __p1_459); __ret_459; })
#define vdupq_laneq_p16(__p0_447,__p1_447) __extension__ ({ poly16x8_t __s0_447 = __p0_447; poly16x8_t __ret_447; __ret_447 = splatq_laneq_p16(__s0_447, __p1_447); __ret_447; })
#define vdupq_laneq_p64(__p0_445,__p1_445) __extension__ ({ poly64x2_t __s0_445 = __p0_445; poly64x2_t __ret_445; __ret_445 = splatq_laneq_p64(__s0_445, __p1_445); __ret_445; })
#define vdupq_laneq_p8(__p0_443,__p1_443) __extension__ ({ poly8x16_t __s0_443 = __p0_443; poly8x16_t __ret_443; __ret_443 = splatq_laneq_p8(__s0_443, __p1_443); __ret_443; })
#define vdupq_laneq_s16(__p0_469,__p1_469) __extension__ ({ int16x8_t __s0_469 = __p0_469; int16x8_t __ret_469; __ret_469 = splatq_laneq_s16(__s0_469, __p1_469); __ret_469; })
#define vdupq_laneq_s32(__p0_465,__p1_465) __extension__ ({ int32x4_t __s0_465 = __p0_465; int32x4_t __ret_465; __ret_465 = splatq_laneq_s32(__s0_465, __p1_465); __ret_465; })
#define vdupq_laneq_s64(__p0_467,__p1_467) __extension__ ({ int64x2_t __s0_467 = __p0_467; int64x2_t __ret_467; __ret_467 = splatq_laneq_s64(__s0_467, __p1_467); __ret_467; })
#define vdupq_laneq_s8(__p0_457,__p1_457) __extension__ ({ int8x16_t __s0_457 = __p0_457; int8x16_t __ret_457; __ret_457 = splatq_laneq_s8(__s0_457, __p1_457); __ret_457; })
#define vdupq_laneq_u16(__p0_455,__p1_455) __extension__ ({ uint16x8_t __s0_455 = __p0_455; uint16x8_t __ret_455; __ret_455 = splatq_laneq_u16(__s0_455, __p1_455); __ret_455; })
#define vdupq_laneq_u32(__p0_451,__p1_451) __extension__ ({ uint32x4_t __s0_451 = __p0_451; uint32x4_t __ret_451; __ret_451 = splatq_laneq_u32(__s0_451, __p1_451); __ret_451; })
#define vdupq_laneq_u64(__p0_453,__p1_453) __extension__ ({ uint64x2_t __s0_453 = __p0_453; uint64x2_t __ret_453; __ret_453 = splatq_laneq_u64(__s0_453, __p1_453); __ret_453; })
#define vdupq_laneq_u8(__p0_449,__p1_449) __extension__ ({ uint8x16_t __s0_449 = __p0_449; uint8x16_t __ret_449; __ret_449 = splatq_laneq_u8(__s0_449, __p1_449); __ret_449; })
#define vdupq_n_f16(__p0) __extension__ ({ float16_t __s0 = __p0; float16x8_t __ret; __ret = (float16x8_t) {__s0, __s0, __s0, __s0, __s0, __s0, __s0, __s0}; __ret; })
#define vdups_lane_f32(__p0,__p1) __extension__ ({ float32x2_t __s0 = __p0; float32_t __ret; __ret = (float32_t) __builtin_neon_vdups_lane_f32((float32x2_t)__s0, __p1); __ret; })
#define vdups_lane_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vdups_lane_i32((int32x2_t)__s0, __p1); __ret; })
#define vdups_lane_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; uint32_t __ret; __ret = (uint32_t) __builtin_neon_vdups_lane_i32((int32x2_t)__s0, __p1); __ret; })
#define vdups_laneq_f32(__p0,__p1) __extension__ ({ float32x4_t __s0 = __p0; float32_t __ret; __ret = (float32_t) __builtin_neon_vdups_laneq_f32((float32x4_t)__s0, __p1); __ret; })
#define vdups_laneq_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vdups_laneq_i32((int32x4_t)__s0, __p1); __ret; })
#define vdups_laneq_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint32_t __ret; __ret = (uint32_t) __builtin_neon_vdups_laneq_i32((int32x4_t)__s0, __p1); __ret; })
#define vext_f16(__p0,__p1,__p2) __extension__ ({ float16x4_t __s0 = __p0; float16x4_t __s1 = __p1; float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 8); __ret; })
#define vext_f32(__p0,__p1,__p2) __extension__ ({ float32x2_t __s0 = __p0; float32x2_t __s1 = __p1; float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 9); __ret; })
#define vext_f64(__p0,__p1,__p2) __extension__ ({ float64x1_t __s0 = __p0; float64x1_t __s1 = __p1; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 10); __ret; })
#define vext_p16(__p0,__p1,__p2) __extension__ ({ poly16x4_t __s0 = __p0; poly16x4_t __s1 = __p1; poly16x4_t __ret; __ret = (poly16x4_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 5); __ret; })
#define vext_p64(__p0,__p1,__p2) __extension__ ({ poly64x1_t __s0 = __p0; poly64x1_t __s1 = __p1; poly64x1_t __ret; __ret = (poly64x1_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 6); __ret; })
#define vext_p8(__p0,__p1,__p2) __extension__ ({ poly8x8_t __s0 = __p0; poly8x8_t __s1 = __p1; poly8x8_t __ret; __ret = (poly8x8_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 4); __ret; })
#define vext_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vext_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vext_s64(__p0,__p1,__p2) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __s1 = __p1; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); __ret; })
#define vext_s8(__p0,__p1,__p2) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __s1 = __p1; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); __ret; })
#define vext_u16(__p0,__p1,__p2) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __s1 = __p1; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); __ret; })
#define vext_u32(__p0,__p1,__p2) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __s1 = __p1; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); __ret; })
#define vext_u64(__p0,__p1,__p2) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __s1 = __p1; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); __ret; })
#define vext_u8(__p0,__p1,__p2) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __s1 = __p1; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); __ret; })
#define vextq_f16(__p0,__p1,__p2) __extension__ ({ float16x8_t __s0 = __p0; float16x8_t __s1 = __p1; float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 40); __ret; })
#define vextq_f32(__p0,__p1,__p2) __extension__ ({ float32x4_t __s0 = __p0; float32x4_t __s1 = __p1; float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 41); __ret; })
#define vextq_f64(__p0,__p1,__p2) __extension__ ({ float64x2_t __s0 = __p0; float64x2_t __s1 = __p1; float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 42); __ret; })
#define vextq_p16(__p0,__p1,__p2) __extension__ ({ poly16x8_t __s0 = __p0; poly16x8_t __s1 = __p1; poly16x8_t __ret; __ret = (poly16x8_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 37); __ret; })
#define vextq_p64(__p0,__p1,__p2) __extension__ ({ poly64x2_t __s0 = __p0; poly64x2_t __s1 = __p1; poly64x2_t __ret; __ret = (poly64x2_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 38); __ret; })
#define vextq_p8(__p0,__p1,__p2) __extension__ ({ poly8x16_t __s0 = __p0; poly8x16_t __s1 = __p1; poly8x16_t __ret; __ret = (poly8x16_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 36); __ret; })
#define vextq_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); __ret; })
#define vextq_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); __ret; })
#define vextq_s64(__p0,__p1,__p2) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __s1 = __p1; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); __ret; })
#define vextq_s8(__p0,__p1,__p2) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __s1 = __p1; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); __ret; })
#define vextq_u16(__p0,__p1,__p2) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __s1 = __p1; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); __ret; })
#define vextq_u32(__p0,__p1,__p2) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __s1 = __p1; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); __ret; })
#define vextq_u64(__p0,__p1,__p2) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __s1 = __p1; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); __ret; })
#define vextq_u8(__p0,__p1,__p2) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __s1 = __p1; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); __ret; })
#define vfma_lane_f16(__p0,__p1,__p2,__p3) __extension__ ({ float16x4_t __s0 = __p0; float16x4_t __s1 = __p1; float16x4_t __s2 = __p2; float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_vfma_lane_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x8_t)__s2, __p3, 8); __ret; })
#define vfma_lane_f32(__p0,__p1,__p2,__p3) __extension__ ({ float32x2_t __s0 = __p0; float32x2_t __s1 = __p1; float32x2_t __s2 = __p2; float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_vfma_lane_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x8_t)__s2, __p3, 9); __ret; })
#define vfma_lane_f64(__p0,__p1,__p2,__p3) __extension__ ({ float64x1_t __s0 = __p0; float64x1_t __s1 = __p1; float64x1_t __s2 = __p2; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vfma_lane_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x8_t)__s2, __p3, 10); __ret; })
#define vfma_laneq_f16(__p0,__p1,__p2,__p3) __extension__ ({ float16x4_t __s0 = __p0; float16x4_t __s1 = __p1; float16x8_t __s2 = __p2; float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_vfma_laneq_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x16_t)__s2, __p3, 8); __ret; })
#define vfma_laneq_f32(__p0,__p1,__p2,__p3) __extension__ ({ float32x2_t __s0 = __p0; float32x2_t __s1 = __p1; float32x4_t __s2 = __p2; float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_vfma_laneq_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x16_t)__s2, __p3, 9); __ret; })
#define vfma_laneq_f64(__p0,__p1,__p2,__p3) __extension__ ({ float64x1_t __s0 = __p0; float64x1_t __s1 = __p1; float64x2_t __s2 = __p2; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vfma_laneq_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x16_t)__s2, __p3, 10); __ret; })
#define vfma_n_f16(__p0,__p1,__p2) __extension__ ({ float16x4_t __s0 = __p0; float16x4_t __s1 = __p1; float16_t __s2 = __p2; float16x4_t __ret; __ret = vfma_f16(__s0, __s1, (float16x4_t) {__s2, __s2, __s2, __s2}); __ret; })
#define vfmad_lane_f64(__p0,__p1,__p2,__p3) __extension__ ({ float64_t __s0 = __p0; float64_t __s1 = __p1; float64x1_t __s2 = __p2; float64_t __ret; __ret = (float64_t) __builtin_neon_vfmad_lane_f64(__s0, __s1, (float64x1_t)__s2, __p3); __ret; })
#define vfmad_laneq_f64(__p0,__p1,__p2,__p3) __extension__ ({ float64_t __s0 = __p0; float64_t __s1 = __p1; float64x2_t __s2 = __p2; float64_t __ret; __ret = (float64_t) __builtin_neon_vfmad_laneq_f64(__s0, __s1, (float64x2_t)__s2, __p3); __ret; })
#define vfmah_lane_f16(__p0,__p1,__p2,__p3) __extension__ ({ float16_t __s0 = __p0; float16_t __s1 = __p1; float16x4_t __s2 = __p2; float16_t __ret; __ret = (float16_t) __builtin_neon_vfmah_lane_f16(__s0, __s1, (float16x4_t)__s2, __p3); __ret; })
#define vfmah_laneq_f16(__p0,__p1,__p2,__p3) __extension__ ({ float16_t __s0 = __p0; float16_t __s1 = __p1; float16x8_t __s2 = __p2; float16_t __ret; __ret = (float16_t) __builtin_neon_vfmah_laneq_f16(__s0, __s1, (float16x8_t)__s2, __p3); __ret; })
#define vfmaq_lane_f16(__p0,__p1,__p2,__p3) __extension__ ({ float16x8_t __s0 = __p0; float16x8_t __s1 = __p1; float16x4_t __s2 = __p2; float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_vfmaq_lane_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x8_t)__s2, __p3, 40); __ret; })
#define vfmaq_lane_f32(__p0,__p1,__p2,__p3) __extension__ ({ float32x4_t __s0 = __p0; float32x4_t __s1 = __p1; float32x2_t __s2 = __p2; float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_vfmaq_lane_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x8_t)__s2, __p3, 41); __ret; })
#define vfmaq_lane_f64(__p0,__p1,__p2,__p3) __extension__ ({ float64x2_t __s0 = __p0; float64x2_t __s1 = __p1; float64x1_t __s2 = __p2; float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_vfmaq_lane_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x8_t)__s2, __p3, 42); __ret; })
#define vfmaq_laneq_f16(__p0,__p1,__p2,__p3) __extension__ ({ float16x8_t __s0 = __p0; float16x8_t __s1 = __p1; float16x8_t __s2 = __p2; float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_vfmaq_laneq_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x16_t)__s2, __p3, 40); __ret; })
#define vfmaq_laneq_f32(__p0,__p1,__p2,__p3) __extension__ ({ float32x4_t __s0 = __p0; float32x4_t __s1 = __p1; float32x4_t __s2 = __p2; float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_vfmaq_laneq_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x16_t)__s2, __p3, 41); __ret; })
#define vfmaq_laneq_f64(__p0,__p1,__p2,__p3) __extension__ ({ float64x2_t __s0 = __p0; float64x2_t __s1 = __p1; float64x2_t __s2 = __p2; float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_vfmaq_laneq_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x16_t)__s2, __p3, 42); __ret; })
#define vfmaq_n_f16(__p0,__p1,__p2) __extension__ ({ float16x8_t __s0 = __p0; float16x8_t __s1 = __p1; float16_t __s2 = __p2; float16x8_t __ret; __ret = vfmaq_f16(__s0, __s1, (float16x8_t) {__s2, __s2, __s2, __s2, __s2, __s2, __s2, __s2}); __ret; })
#define vfmas_lane_f32(__p0,__p1,__p2,__p3) __extension__ ({ float32_t __s0 = __p0; float32_t __s1 = __p1; float32x2_t __s2 = __p2; float32_t __ret; __ret = (float32_t) __builtin_neon_vfmas_lane_f32(__s0, __s1, (float32x2_t)__s2, __p3); __ret; })
#define vfmas_laneq_f32(__p0,__p1,__p2,__p3) __extension__ ({ float32_t __s0 = __p0; float32_t __s1 = __p1; float32x4_t __s2 = __p2; float32_t __ret; __ret = (float32_t) __builtin_neon_vfmas_laneq_f32(__s0, __s1, (float32x4_t)__s2, __p3); __ret; })
#define vfmlal_lane_high_f16(__p0_871,__p1_871,__p2_871,__p3_871) __extension__ ({ float32x2_t __s0_871 = __p0_871; float16x4_t __s1_871 = __p1_871; float16x4_t __s2_871 = __p2_871; float32x2_t __ret_871; __ret_871 = vfmlal_high_f16(__s0_871, __s1_871, (float16x4_t) {vget_lane_f16(__s2_871, __p3_871), vget_lane_f16(__s2_871, __p3_871), vget_lane_f16(__s2_871, __p3_871), vget_lane_f16(__s2_871, __p3_871)}); __ret_871; })
#define vfmlal_lane_low_f16(__p0_875,__p1_875,__p2_875,__p3_875) __extension__ ({ float32x2_t __s0_875 = __p0_875; float16x4_t __s1_875 = __p1_875; float16x4_t __s2_875 = __p2_875; float32x2_t __ret_875; __ret_875 = vfmlal_low_f16(__s0_875, __s1_875, (float16x4_t) {vget_lane_f16(__s2_875, __p3_875), vget_lane_f16(__s2_875, __p3_875), vget_lane_f16(__s2_875, __p3_875), vget_lane_f16(__s2_875, __p3_875)}); __ret_875; })
#define vfmlal_laneq_high_f16(__p0_879,__p1_879,__p2_879,__p3_879) __extension__ ({ float32x2_t __s0_879 = __p0_879; float16x4_t __s1_879 = __p1_879; float16x8_t __s2_879 = __p2_879; float32x2_t __ret_879; __ret_879 = vfmlal_high_f16(__s0_879, __s1_879, (float16x4_t) {vgetq_lane_f16(__s2_879, __p3_879), vgetq_lane_f16(__s2_879, __p3_879), vgetq_lane_f16(__s2_879, __p3_879), vgetq_lane_f16(__s2_879, __p3_879)}); __ret_879; })
#define vfmlal_laneq_low_f16(__p0_883,__p1_883,__p2_883,__p3_883) __extension__ ({ float32x2_t __s0_883 = __p0_883; float16x4_t __s1_883 = __p1_883; float16x8_t __s2_883 = __p2_883; float32x2_t __ret_883; __ret_883 = vfmlal_low_f16(__s0_883, __s1_883, (float16x4_t) {vgetq_lane_f16(__s2_883, __p3_883), vgetq_lane_f16(__s2_883, __p3_883), vgetq_lane_f16(__s2_883, __p3_883), vgetq_lane_f16(__s2_883, __p3_883)}); __ret_883; })
#define vfmlalq_lane_high_f16(__p0_869,__p1_869,__p2_869,__p3_869) __extension__ ({ float32x4_t __s0_869 = __p0_869; float16x8_t __s1_869 = __p1_869; float16x4_t __s2_869 = __p2_869; float32x4_t __ret_869; __ret_869 = vfmlalq_high_f16(__s0_869, __s1_869, (float16x8_t) {vget_lane_f16(__s2_869, __p3_869), vget_lane_f16(__s2_869, __p3_869), vget_lane_f16(__s2_869, __p3_869), vget_lane_f16(__s2_869, __p3_869), vget_lane_f16(__s2_869, __p3_869), vget_lane_f16(__s2_869, __p3_869), vget_lane_f16(__s2_869, __p3_869), vget_lane_f16(__s2_869, __p3_869)}); __ret_869; })
#define vfmlalq_lane_low_f16(__p0_873,__p1_873,__p2_873,__p3_873) __extension__ ({ float32x4_t __s0_873 = __p0_873; float16x8_t __s1_873 = __p1_873; float16x4_t __s2_873 = __p2_873; float32x4_t __ret_873; __ret_873 = vfmlalq_low_f16(__s0_873, __s1_873, (float16x8_t) {vget_lane_f16(__s2_873, __p3_873), vget_lane_f16(__s2_873, __p3_873), vget_lane_f16(__s2_873, __p3_873), vget_lane_f16(__s2_873, __p3_873), vget_lane_f16(__s2_873, __p3_873), vget_lane_f16(__s2_873, __p3_873), vget_lane_f16(__s2_873, __p3_873), vget_lane_f16(__s2_873, __p3_873)}); __ret_873; })
#define vfmlalq_laneq_high_f16(__p0_877,__p1_877,__p2_877,__p3_877) __extension__ ({ float32x4_t __s0_877 = __p0_877; float16x8_t __s1_877 = __p1_877; float16x8_t __s2_877 = __p2_877; float32x4_t __ret_877; __ret_877 = vfmlalq_high_f16(__s0_877, __s1_877, (float16x8_t) {vgetq_lane_f16(__s2_877, __p3_877), vgetq_lane_f16(__s2_877, __p3_877), vgetq_lane_f16(__s2_877, __p3_877), vgetq_lane_f16(__s2_877, __p3_877), vgetq_lane_f16(__s2_877, __p3_877), vgetq_lane_f16(__s2_877, __p3_877), vgetq_lane_f16(__s2_877, __p3_877), vgetq_lane_f16(__s2_877, __p3_877)}); __ret_877; })
#define vfmlalq_laneq_low_f16(__p0_881,__p1_881,__p2_881,__p3_881) __extension__ ({ float32x4_t __s0_881 = __p0_881; float16x8_t __s1_881 = __p1_881; float16x8_t __s2_881 = __p2_881; float32x4_t __ret_881; __ret_881 = vfmlalq_low_f16(__s0_881, __s1_881, (float16x8_t) {vgetq_lane_f16(__s2_881, __p3_881), vgetq_lane_f16(__s2_881, __p3_881), vgetq_lane_f16(__s2_881, __p3_881), vgetq_lane_f16(__s2_881, __p3_881), vgetq_lane_f16(__s2_881, __p3_881), vgetq_lane_f16(__s2_881, __p3_881), vgetq_lane_f16(__s2_881, __p3_881), vgetq_lane_f16(__s2_881, __p3_881)}); __ret_881; })
#define vfmlsl_lane_high_f16(__p0_887,__p1_887,__p2_887,__p3_887) __extension__ ({ float32x2_t __s0_887 = __p0_887; float16x4_t __s1_887 = __p1_887; float16x4_t __s2_887 = __p2_887; float32x2_t __ret_887; __ret_887 = vfmlsl_high_f16(__s0_887, __s1_887, (float16x4_t) {vget_lane_f16(__s2_887, __p3_887), vget_lane_f16(__s2_887, __p3_887), vget_lane_f16(__s2_887, __p3_887), vget_lane_f16(__s2_887, __p3_887)}); __ret_887; })
#define vfmlsl_lane_low_f16(__p0_891,__p1_891,__p2_891,__p3_891) __extension__ ({ float32x2_t __s0_891 = __p0_891; float16x4_t __s1_891 = __p1_891; float16x4_t __s2_891 = __p2_891; float32x2_t __ret_891; __ret_891 = vfmlsl_low_f16(__s0_891, __s1_891, (float16x4_t) {vget_lane_f16(__s2_891, __p3_891), vget_lane_f16(__s2_891, __p3_891), vget_lane_f16(__s2_891, __p3_891), vget_lane_f16(__s2_891, __p3_891)}); __ret_891; })
#define vfmlsl_laneq_high_f16(__p0_895,__p1_895,__p2_895,__p3_895) __extension__ ({ float32x2_t __s0_895 = __p0_895; float16x4_t __s1_895 = __p1_895; float16x8_t __s2_895 = __p2_895; float32x2_t __ret_895; __ret_895 = vfmlsl_high_f16(__s0_895, __s1_895, (float16x4_t) {vgetq_lane_f16(__s2_895, __p3_895), vgetq_lane_f16(__s2_895, __p3_895), vgetq_lane_f16(__s2_895, __p3_895), vgetq_lane_f16(__s2_895, __p3_895)}); __ret_895; })
#define vfmlsl_laneq_low_f16(__p0_899,__p1_899,__p2_899,__p3_899) __extension__ ({ float32x2_t __s0_899 = __p0_899; float16x4_t __s1_899 = __p1_899; float16x8_t __s2_899 = __p2_899; float32x2_t __ret_899; __ret_899 = vfmlsl_low_f16(__s0_899, __s1_899, (float16x4_t) {vgetq_lane_f16(__s2_899, __p3_899), vgetq_lane_f16(__s2_899, __p3_899), vgetq_lane_f16(__s2_899, __p3_899), vgetq_lane_f16(__s2_899, __p3_899)}); __ret_899; })
#define vfmlslq_lane_high_f16(__p0_885,__p1_885,__p2_885,__p3_885) __extension__ ({ float32x4_t __s0_885 = __p0_885; float16x8_t __s1_885 = __p1_885; float16x4_t __s2_885 = __p2_885; float32x4_t __ret_885; __ret_885 = vfmlslq_high_f16(__s0_885, __s1_885, (float16x8_t) {vget_lane_f16(__s2_885, __p3_885), vget_lane_f16(__s2_885, __p3_885), vget_lane_f16(__s2_885, __p3_885), vget_lane_f16(__s2_885, __p3_885), vget_lane_f16(__s2_885, __p3_885), vget_lane_f16(__s2_885, __p3_885), vget_lane_f16(__s2_885, __p3_885), vget_lane_f16(__s2_885, __p3_885)}); __ret_885; })
#define vfmlslq_lane_low_f16(__p0_889,__p1_889,__p2_889,__p3_889) __extension__ ({ float32x4_t __s0_889 = __p0_889; float16x8_t __s1_889 = __p1_889; float16x4_t __s2_889 = __p2_889; float32x4_t __ret_889; __ret_889 = vfmlslq_low_f16(__s0_889, __s1_889, (float16x8_t) {vget_lane_f16(__s2_889, __p3_889), vget_lane_f16(__s2_889, __p3_889), vget_lane_f16(__s2_889, __p3_889), vget_lane_f16(__s2_889, __p3_889), vget_lane_f16(__s2_889, __p3_889), vget_lane_f16(__s2_889, __p3_889), vget_lane_f16(__s2_889, __p3_889), vget_lane_f16(__s2_889, __p3_889)}); __ret_889; })
#define vfmlslq_laneq_high_f16(__p0_893,__p1_893,__p2_893,__p3_893) __extension__ ({ float32x4_t __s0_893 = __p0_893; float16x8_t __s1_893 = __p1_893; float16x8_t __s2_893 = __p2_893; float32x4_t __ret_893; __ret_893 = vfmlslq_high_f16(__s0_893, __s1_893, (float16x8_t) {vgetq_lane_f16(__s2_893, __p3_893), vgetq_lane_f16(__s2_893, __p3_893), vgetq_lane_f16(__s2_893, __p3_893), vgetq_lane_f16(__s2_893, __p3_893), vgetq_lane_f16(__s2_893, __p3_893), vgetq_lane_f16(__s2_893, __p3_893), vgetq_lane_f16(__s2_893, __p3_893), vgetq_lane_f16(__s2_893, __p3_893)}); __ret_893; })
#define vfmlslq_laneq_low_f16(__p0_897,__p1_897,__p2_897,__p3_897) __extension__ ({ float32x4_t __s0_897 = __p0_897; float16x8_t __s1_897 = __p1_897; float16x8_t __s2_897 = __p2_897; float32x4_t __ret_897; __ret_897 = vfmlslq_low_f16(__s0_897, __s1_897, (float16x8_t) {vgetq_lane_f16(__s2_897, __p3_897), vgetq_lane_f16(__s2_897, __p3_897), vgetq_lane_f16(__s2_897, __p3_897), vgetq_lane_f16(__s2_897, __p3_897), vgetq_lane_f16(__s2_897, __p3_897), vgetq_lane_f16(__s2_897, __p3_897), vgetq_lane_f16(__s2_897, __p3_897), vgetq_lane_f16(__s2_897, __p3_897)}); __ret_897; })
#define vfms_lane_f16(__p0_285,__p1_285,__p2_285,__p3_285) __extension__ ({ float16x4_t __s0_285 = __p0_285; float16x4_t __s1_285 = __p1_285; float16x4_t __s2_285 = __p2_285; float16x4_t __ret_285; __ret_285 = vfma_lane_f16(__s0_285, -__s1_285, __s2_285, __p3_285); __ret_285; })
#define vfms_lane_f32(__p0_501,__p1_501,__p2_501,__p3_501) __extension__ ({ float32x2_t __s0_501 = __p0_501; float32x2_t __s1_501 = __p1_501; float32x2_t __s2_501 = __p2_501; float32x2_t __ret_501; __ret_501 = vfma_lane_f32(__s0_501, -__s1_501, __s2_501, __p3_501); __ret_501; })
#define vfms_lane_f64(__p0_500,__p1_500,__p2_500,__p3_500) __extension__ ({ float64x1_t __s0_500 = __p0_500; float64x1_t __s1_500 = __p1_500; float64x1_t __s2_500 = __p2_500; float64x1_t __ret_500; __ret_500 = vfma_lane_f64(__s0_500, -__s1_500, __s2_500, __p3_500); __ret_500; })
#define vfms_laneq_f16(__p0_291,__p1_291,__p2_291,__p3_291) __extension__ ({ float16x4_t __s0_291 = __p0_291; float16x4_t __s1_291 = __p1_291; float16x8_t __s2_291 = __p2_291; float16x4_t __ret_291; __ret_291 = vfma_laneq_f16(__s0_291, -__s1_291, __s2_291, __p3_291); __ret_291; })
#define vfms_laneq_f32(__p0_513,__p1_513,__p2_513,__p3_513) __extension__ ({ float32x2_t __s0_513 = __p0_513; float32x2_t __s1_513 = __p1_513; float32x4_t __s2_513 = __p2_513; float32x2_t __ret_513; __ret_513 = vfma_laneq_f32(__s0_513, -__s1_513, __s2_513, __p3_513); __ret_513; })
#define vfms_laneq_f64(__p0_511,__p1_511,__p2_511,__p3_511) __extension__ ({ float64x1_t __s0_511 = __p0_511; float64x1_t __s1_511 = __p1_511; float64x2_t __s2_511 = __p2_511; float64x1_t __ret_511; __ret_511 = vfma_laneq_f64(__s0_511, -__s1_511, __s2_511, __p3_511); __ret_511; })
#define vfms_n_f16(__p0,__p1,__p2) __extension__ ({ float16x4_t __s0 = __p0; float16x4_t __s1 = __p1; float16_t __s2 = __p2; float16x4_t __ret; __ret = vfma_f16(__s0, -__s1, (float16x4_t) {__s2, __s2, __s2, __s2}); __ret; })
#define vfmsd_lane_f64(__p0_493,__p1_493,__p2_493,__p3_493) __extension__ ({ float64_t __s0_493 = __p0_493; float64_t __s1_493 = __p1_493; float64x1_t __s2_493 = __p2_493; float64_t __ret_493; __ret_493 = vfmad_lane_f64(__s0_493, -__s1_493, __s2_493, __p3_493); __ret_493; })
#define vfmsd_laneq_f64(__p0_503,__p1_503,__p2_503,__p3_503) __extension__ ({ float64_t __s0_503 = __p0_503; float64_t __s1_503 = __p1_503; float64x2_t __s2_503 = __p2_503; float64_t __ret_503; __ret_503 = vfmad_laneq_f64(__s0_503, -__s1_503, __s2_503, __p3_503); __ret_503; })
#define vfmsh_lane_f16(__p0_281,__p1_281,__p2_281,__p3_281) __extension__ ({ float16_t __s0_281 = __p0_281; float16_t __s1_281 = __p1_281; float16x4_t __s2_281 = __p2_281; float16_t __ret_281; __ret_281 = vfmah_lane_f16(__s0_281, -__s1_281, __s2_281, __p3_281); __ret_281; })
#define vfmsh_laneq_f16(__p0_287,__p1_287,__p2_287,__p3_287) __extension__ ({ float16_t __s0_287 = __p0_287; float16_t __s1_287 = __p1_287; float16x8_t __s2_287 = __p2_287; float16_t __ret_287; __ret_287 = vfmah_laneq_f16(__s0_287, -__s1_287, __s2_287, __p3_287); __ret_287; })
#define vfmsq_lane_f16(__p0_283,__p1_283,__p2_283,__p3_283) __extension__ ({ float16x8_t __s0_283 = __p0_283; float16x8_t __s1_283 = __p1_283; float16x4_t __s2_283 = __p2_283; float16x8_t __ret_283; __ret_283 = vfmaq_lane_f16(__s0_283, -__s1_283, __s2_283, __p3_283); __ret_283; })
#define vfmsq_lane_f32(__p0_498,__p1_498,__p2_498,__p3_498) __extension__ ({ float32x4_t __s0_498 = __p0_498; float32x4_t __s1_498 = __p1_498; float32x2_t __s2_498 = __p2_498; float32x4_t __ret_498; __ret_498 = vfmaq_lane_f32(__s0_498, -__s1_498, __s2_498, __p3_498); __ret_498; })
#define vfmsq_lane_f64(__p0_496,__p1_496,__p2_496,__p3_496) __extension__ ({ float64x2_t __s0_496 = __p0_496; float64x2_t __s1_496 = __p1_496; float64x1_t __s2_496 = __p2_496; float64x2_t __ret_496; __ret_496 = vfmaq_lane_f64(__s0_496, -__s1_496, __s2_496, __p3_496); __ret_496; })
#define vfmsq_laneq_f16(__p0_289,__p1_289,__p2_289,__p3_289) __extension__ ({ float16x8_t __s0_289 = __p0_289; float16x8_t __s1_289 = __p1_289; float16x8_t __s2_289 = __p2_289; float16x8_t __ret_289; __ret_289 = vfmaq_laneq_f16(__s0_289, -__s1_289, __s2_289, __p3_289); __ret_289; })
#define vfmsq_laneq_f32(__p0_509,__p1_509,__p2_509,__p3_509) __extension__ ({ float32x4_t __s0_509 = __p0_509; float32x4_t __s1_509 = __p1_509; float32x4_t __s2_509 = __p2_509; float32x4_t __ret_509; __ret_509 = vfmaq_laneq_f32(__s0_509, -__s1_509, __s2_509, __p3_509); __ret_509; })
#define vfmsq_laneq_f64(__p0_507,__p1_507,__p2_507,__p3_507) __extension__ ({ float64x2_t __s0_507 = __p0_507; float64x2_t __s1_507 = __p1_507; float64x2_t __s2_507 = __p2_507; float64x2_t __ret_507; __ret_507 = vfmaq_laneq_f64(__s0_507, -__s1_507, __s2_507, __p3_507); __ret_507; })
#define vfmsq_n_f16(__p0,__p1,__p2) __extension__ ({ float16x8_t __s0 = __p0; float16x8_t __s1 = __p1; float16_t __s2 = __p2; float16x8_t __ret; __ret = vfmaq_f16(__s0, -__s1, (float16x8_t) {__s2, __s2, __s2, __s2, __s2, __s2, __s2, __s2}); __ret; })
#define vfmss_lane_f32(__p0_494,__p1_494,__p2_494,__p3_494) __extension__ ({ float32_t __s0_494 = __p0_494; float32_t __s1_494 = __p1_494; float32x2_t __s2_494 = __p2_494; float32_t __ret_494; __ret_494 = vfmas_lane_f32(__s0_494, -__s1_494, __s2_494, __p3_494); __ret_494; })
#define vfmss_laneq_f32(__p0_505,__p1_505,__p2_505,__p3_505) __extension__ ({ float32_t __s0_505 = __p0_505; float32_t __s1_505 = __p1_505; float32x4_t __s2_505 = __p2_505; float32_t __ret_505; __ret_505 = vfmas_laneq_f32(__s0_505, -__s1_505, __s2_505, __p3_505); __ret_505; })
#define vget_lane_f16(__p0_835,__p1_835) __extension__ ({ float16x4_t __s0_835 = __p0_835; float16_t __ret_835; float16x4_t __reint_835 = __s0_835; int16_t __reint1_835 = vget_lane_s16(*(int16x4_t *) &__reint_835, __p1_835); __ret_835 = *(float16_t *) &__reint1_835; __ret_835; })
#define vget_lane_f32(__p0,__p1) __extension__ ({ float32x2_t __s0 = __p0; float32_t __ret; __ret = (float32_t) __builtin_neon_vget_lane_f32((float32x2_t)__s0, __p1); __ret; })
#define vget_lane_f64(__p0,__p1) __extension__ ({ float64x1_t __s0 = __p0; float64_t __ret; __ret = (float64_t) __builtin_neon_vget_lane_f64((float64x1_t)__s0, __p1); __ret; })
#define vget_lane_p16(__p0,__p1) __extension__ ({ poly16x4_t __s0 = __p0; poly16_t __ret; __ret = (poly16_t) __builtin_neon_vget_lane_i16((poly16x4_t)__s0, __p1); __ret; })
#define vget_lane_p64(__p0,__p1) __extension__ ({ poly64x1_t __s0 = __p0; poly64_t __ret; __ret = (poly64_t) __builtin_neon_vget_lane_i64((poly64x1_t)__s0, __p1); __ret; })
#define vget_lane_p8(__p0,__p1) __extension__ ({ poly8x8_t __s0 = __p0; poly8_t __ret; __ret = (poly8_t) __builtin_neon_vget_lane_i8((poly8x8_t)__s0, __p1); __ret; })
#define vget_lane_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vget_lane_i16((int16x4_t)__s0, __p1); __ret; })
#define vget_lane_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vget_lane_i32((int32x2_t)__s0, __p1); __ret; })
#define vget_lane_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vget_lane_i64((int64x1_t)__s0, __p1); __ret; })
#define vget_lane_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vget_lane_i8((int8x8_t)__s0, __p1); __ret; })
#define vget_lane_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; uint16_t __ret; __ret = (uint16_t) __builtin_neon_vget_lane_i16((int16x4_t)__s0, __p1); __ret; })
#define vget_lane_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; uint32_t __ret; __ret = (uint32_t) __builtin_neon_vget_lane_i32((int32x2_t)__s0, __p1); __ret; })
#define vget_lane_u64(__p0,__p1) __extension__ ({ uint64x1_t __s0 = __p0; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vget_lane_i64((int64x1_t)__s0, __p1); __ret; })
#define vget_lane_u8(__p0,__p1) __extension__ ({ uint8x8_t __s0 = __p0; uint8_t __ret; __ret = (uint8_t) __builtin_neon_vget_lane_i8((int8x8_t)__s0, __p1); __ret; })
#define vgetq_lane_f16(__p0_838,__p1_838) __extension__ ({ float16x8_t __s0_838 = __p0_838; float16_t __ret_838; float16x8_t __reint_838 = __s0_838; int16_t __reint1_838 = vgetq_lane_s16(*(int16x8_t *) &__reint_838, __p1_838); __ret_838 = *(float16_t *) &__reint1_838; __ret_838; })
#define vgetq_lane_f32(__p0,__p1) __extension__ ({ float32x4_t __s0 = __p0; float32_t __ret; __ret = (float32_t) __builtin_neon_vgetq_lane_f32((float32x4_t)__s0, __p1); __ret; })
#define vgetq_lane_f64(__p0,__p1) __extension__ ({ float64x2_t __s0 = __p0; float64_t __ret; __ret = (float64_t) __builtin_neon_vgetq_lane_f64((float64x2_t)__s0, __p1); __ret; })
#define vgetq_lane_p16(__p0,__p1) __extension__ ({ poly16x8_t __s0 = __p0; poly16_t __ret; __ret = (poly16_t) __builtin_neon_vgetq_lane_i16((poly16x8_t)__s0, __p1); __ret; })
#define vgetq_lane_p64(__p0,__p1) __extension__ ({ poly64x2_t __s0 = __p0; poly64_t __ret; __ret = (poly64_t) __builtin_neon_vgetq_lane_i64((poly64x2_t)__s0, __p1); __ret; })
#define vgetq_lane_p8(__p0,__p1) __extension__ ({ poly8x16_t __s0 = __p0; poly8_t __ret; __ret = (poly8_t) __builtin_neon_vgetq_lane_i8((poly8x16_t)__s0, __p1); __ret; })
#define vgetq_lane_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vgetq_lane_i16((int16x8_t)__s0, __p1); __ret; })
#define vgetq_lane_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vgetq_lane_i32((int32x4_t)__s0, __p1); __ret; })
#define vgetq_lane_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vgetq_lane_i64((int64x2_t)__s0, __p1); __ret; })
#define vgetq_lane_s8(__p0,__p1) __extension__ ({ int8x16_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vgetq_lane_i8((int8x16_t)__s0, __p1); __ret; })
#define vgetq_lane_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint16_t __ret; __ret = (uint16_t) __builtin_neon_vgetq_lane_i16((int16x8_t)__s0, __p1); __ret; })
#define vgetq_lane_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint32_t __ret; __ret = (uint32_t) __builtin_neon_vgetq_lane_i32((int32x4_t)__s0, __p1); __ret; })
#define vgetq_lane_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vgetq_lane_i64((int64x2_t)__s0, __p1); __ret; })
#define vgetq_lane_u8(__p0,__p1) __extension__ ({ uint8x16_t __s0 = __p0; uint8_t __ret; __ret = (uint8_t) __builtin_neon_vgetq_lane_i8((int8x16_t)__s0, __p1); __ret; })
#define vld1_dup_f16(__p0) __extension__ ({ float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_vld1_dup_v(__p0, 8); __ret; })
#define vld1_dup_f32(__p0) __extension__ ({ float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_vld1_dup_v(__p0, 9); __ret; })
#define vld1_dup_f64(__p0) __extension__ ({ float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vld1_dup_v(__p0, 10); __ret; })
#define vld1_dup_p16(__p0) __extension__ ({ poly16x4_t __ret; __ret = (poly16x4_t) __builtin_neon_vld1_dup_v(__p0, 5); __ret; })
#define vld1_dup_p64(__p0) __extension__ ({ poly64x1_t __ret; __ret = (poly64x1_t) __builtin_neon_vld1_dup_v(__p0, 6); __ret; })
#define vld1_dup_p8(__p0) __extension__ ({ poly8x8_t __ret; __ret = (poly8x8_t) __builtin_neon_vld1_dup_v(__p0, 4); __ret; })
#define vld1_dup_s16(__p0) __extension__ ({ int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vld1_dup_v(__p0, 1); __ret; })
#define vld1_dup_s32(__p0) __extension__ ({ int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vld1_dup_v(__p0, 2); __ret; })
#define vld1_dup_s64(__p0) __extension__ ({ int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vld1_dup_v(__p0, 3); __ret; })
#define vld1_dup_s8(__p0) __extension__ ({ int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vld1_dup_v(__p0, 0); __ret; })
#define vld1_dup_u16(__p0) __extension__ ({ uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vld1_dup_v(__p0, 17); __ret; })
#define vld1_dup_u32(__p0) __extension__ ({ uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vld1_dup_v(__p0, 18); __ret; })
#define vld1_dup_u64(__p0) __extension__ ({ uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vld1_dup_v(__p0, 19); __ret; })
#define vld1_dup_u8(__p0) __extension__ ({ uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vld1_dup_v(__p0, 16); __ret; })
#define vld1_f16(__p0) __extension__ ({ float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_vld1_v(__p0, 8); __ret; })
#define vld1_f16_x2(__p0) __extension__ ({ float16x4x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 8); __ret; })
#define vld1_f16_x3(__p0) __extension__ ({ float16x4x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 8); __ret; })
#define vld1_f16_x4(__p0) __extension__ ({ float16x4x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 8); __ret; })
#define vld1_f32(__p0) __extension__ ({ float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_vld1_v(__p0, 9); __ret; })
#define vld1_f32_x2(__p0) __extension__ ({ float32x2x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 9); __ret; })
#define vld1_f32_x3(__p0) __extension__ ({ float32x2x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 9); __ret; })
#define vld1_f32_x4(__p0) __extension__ ({ float32x2x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 9); __ret; })
#define vld1_f64(__p0) __extension__ ({ float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vld1_v(__p0, 10); __ret; })
#define vld1_f64_x2(__p0) __extension__ ({ float64x1x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 10); __ret; })
#define vld1_f64_x3(__p0) __extension__ ({ float64x1x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 10); __ret; })
#define vld1_f64_x4(__p0) __extension__ ({ float64x1x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 10); __ret; })
#define vld1_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x4_t __s1 = __p1; float16x4_t __ret; __ret = (float16x4_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 8); __ret; })
#define vld1_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x2_t __s1 = __p1; float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 9); __ret; })
#define vld1_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x1_t __s1 = __p1; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 10); __ret; })
#define vld1_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x4_t __s1 = __p1; poly16x4_t __ret; __ret = (poly16x4_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 5); __ret; })
#define vld1_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x1_t __s1 = __p1; poly64x1_t __ret; __ret = (poly64x1_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 6); __ret; })
#define vld1_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x8_t __s1 = __p1; poly8x8_t __ret; __ret = (poly8x8_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 4); __ret; })
#define vld1_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vld1_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vld1_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x1_t __s1 = __p1; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 3); __ret; })
#define vld1_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x8_t __s1 = __p1; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 0); __ret; })
#define vld1_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x4_t __s1 = __p1; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 17); __ret; })
#define vld1_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x2_t __s1 = __p1; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 18); __ret; })
#define vld1_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x1_t __s1 = __p1; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 19); __ret; })
#define vld1_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x8_t __s1 = __p1; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 16); __ret; })
#define vld1_p16(__p0) __extension__ ({ poly16x4_t __ret; __ret = (poly16x4_t) __builtin_neon_vld1_v(__p0, 5); __ret; })
#define vld1_p16_x2(__p0) __extension__ ({ poly16x4x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 5); __ret; })
#define vld1_p16_x3(__p0) __extension__ ({ poly16x4x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 5); __ret; })
#define vld1_p16_x4(__p0) __extension__ ({ poly16x4x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 5); __ret; })
#define vld1_p64(__p0) __extension__ ({ poly64x1_t __ret; __ret = (poly64x1_t) __builtin_neon_vld1_v(__p0, 6); __ret; })
#define vld1_p64_x2(__p0) __extension__ ({ poly64x1x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 6); __ret; })
#define vld1_p64_x3(__p0) __extension__ ({ poly64x1x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 6); __ret; })
#define vld1_p64_x4(__p0) __extension__ ({ poly64x1x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 6); __ret; })
#define vld1_p8(__p0) __extension__ ({ poly8x8_t __ret; __ret = (poly8x8_t) __builtin_neon_vld1_v(__p0, 4); __ret; })
#define vld1_p8_x2(__p0) __extension__ ({ poly8x8x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 4); __ret; })
#define vld1_p8_x3(__p0) __extension__ ({ poly8x8x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 4); __ret; })
#define vld1_p8_x4(__p0) __extension__ ({ poly8x8x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 4); __ret; })
#define vld1_s16(__p0) __extension__ ({ int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vld1_v(__p0, 1); __ret; })
#define vld1_s16_x2(__p0) __extension__ ({ int16x4x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 1); __ret; })
#define vld1_s16_x3(__p0) __extension__ ({ int16x4x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 1); __ret; })
#define vld1_s16_x4(__p0) __extension__ ({ int16x4x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 1); __ret; })
#define vld1_s32(__p0) __extension__ ({ int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vld1_v(__p0, 2); __ret; })
#define vld1_s32_x2(__p0) __extension__ ({ int32x2x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 2); __ret; })
#define vld1_s32_x3(__p0) __extension__ ({ int32x2x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 2); __ret; })
#define vld1_s32_x4(__p0) __extension__ ({ int32x2x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 2); __ret; })
#define vld1_s64(__p0) __extension__ ({ int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vld1_v(__p0, 3); __ret; })
#define vld1_s64_x2(__p0) __extension__ ({ int64x1x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 3); __ret; })
#define vld1_s64_x3(__p0) __extension__ ({ int64x1x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 3); __ret; })
#define vld1_s64_x4(__p0) __extension__ ({ int64x1x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 3); __ret; })
#define vld1_s8(__p0) __extension__ ({ int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vld1_v(__p0, 0); __ret; })
#define vld1_s8_x2(__p0) __extension__ ({ int8x8x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 0); __ret; })
#define vld1_s8_x3(__p0) __extension__ ({ int8x8x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 0); __ret; })
#define vld1_s8_x4(__p0) __extension__ ({ int8x8x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 0); __ret; })
#define vld1_u16(__p0) __extension__ ({ uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vld1_v(__p0, 17); __ret; })
#define vld1_u16_x2(__p0) __extension__ ({ uint16x4x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 17); __ret; })
#define vld1_u16_x3(__p0) __extension__ ({ uint16x4x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 17); __ret; })
#define vld1_u16_x4(__p0) __extension__ ({ uint16x4x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 17); __ret; })
#define vld1_u32(__p0) __extension__ ({ uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vld1_v(__p0, 18); __ret; })
#define vld1_u32_x2(__p0) __extension__ ({ uint32x2x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 18); __ret; })
#define vld1_u32_x3(__p0) __extension__ ({ uint32x2x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 18); __ret; })
#define vld1_u32_x4(__p0) __extension__ ({ uint32x2x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 18); __ret; })
#define vld1_u64(__p0) __extension__ ({ uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vld1_v(__p0, 19); __ret; })
#define vld1_u64_x2(__p0) __extension__ ({ uint64x1x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 19); __ret; })
#define vld1_u64_x3(__p0) __extension__ ({ uint64x1x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 19); __ret; })
#define vld1_u64_x4(__p0) __extension__ ({ uint64x1x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 19); __ret; })
#define vld1_u8(__p0) __extension__ ({ uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vld1_v(__p0, 16); __ret; })
#define vld1_u8_x2(__p0) __extension__ ({ uint8x8x2_t __ret; __builtin_neon_vld1_x2_v(&__ret, __p0, 16); __ret; })
#define vld1_u8_x3(__p0) __extension__ ({ uint8x8x3_t __ret; __builtin_neon_vld1_x3_v(&__ret, __p0, 16); __ret; })
#define vld1_u8_x4(__p0) __extension__ ({ uint8x8x4_t __ret; __builtin_neon_vld1_x4_v(&__ret, __p0, 16); __ret; })
#define vld1q_dup_f16(__p0) __extension__ ({ float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_vld1q_dup_v(__p0, 40); __ret; })
#define vld1q_dup_f32(__p0) __extension__ ({ float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_vld1q_dup_v(__p0, 41); __ret; })
#define vld1q_dup_f64(__p0) __extension__ ({ float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_vld1q_dup_v(__p0, 42); __ret; })
#define vld1q_dup_p16(__p0) __extension__ ({ poly16x8_t __ret; __ret = (poly16x8_t) __builtin_neon_vld1q_dup_v(__p0, 37); __ret; })
#define vld1q_dup_p64(__p0) __extension__ ({ poly64x2_t __ret; __ret = (poly64x2_t) __builtin_neon_vld1q_dup_v(__p0, 38); __ret; })
#define vld1q_dup_p8(__p0) __extension__ ({ poly8x16_t __ret; __ret = (poly8x16_t) __builtin_neon_vld1q_dup_v(__p0, 36); __ret; })
#define vld1q_dup_s16(__p0) __extension__ ({ int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vld1q_dup_v(__p0, 33); __ret; })
#define vld1q_dup_s32(__p0) __extension__ ({ int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vld1q_dup_v(__p0, 34); __ret; })
#define vld1q_dup_s64(__p0) __extension__ ({ int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vld1q_dup_v(__p0, 35); __ret; })
#define vld1q_dup_s8(__p0) __extension__ ({ int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vld1q_dup_v(__p0, 32); __ret; })
#define vld1q_dup_u16(__p0) __extension__ ({ uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vld1q_dup_v(__p0, 49); __ret; })
#define vld1q_dup_u32(__p0) __extension__ ({ uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vld1q_dup_v(__p0, 50); __ret; })
#define vld1q_dup_u64(__p0) __extension__ ({ uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vld1q_dup_v(__p0, 51); __ret; })
#define vld1q_dup_u8(__p0) __extension__ ({ uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vld1q_dup_v(__p0, 48); __ret; })
#define vld1q_f16(__p0) __extension__ ({ float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_vld1q_v(__p0, 40); __ret; })
#define vld1q_f16_x2(__p0) __extension__ ({ float16x8x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 40); __ret; })
#define vld1q_f16_x3(__p0) __extension__ ({ float16x8x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 40); __ret; })
#define vld1q_f16_x4(__p0) __extension__ ({ float16x8x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 40); __ret; })
#define vld1q_f32(__p0) __extension__ ({ float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_vld1q_v(__p0, 41); __ret; })
#define vld1q_f32_x2(__p0) __extension__ ({ float32x4x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 41); __ret; })
#define vld1q_f32_x3(__p0) __extension__ ({ float32x4x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 41); __ret; })
#define vld1q_f32_x4(__p0) __extension__ ({ float32x4x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 41); __ret; })
#define vld1q_f64(__p0) __extension__ ({ float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_vld1q_v(__p0, 42); __ret; })
#define vld1q_f64_x2(__p0) __extension__ ({ float64x2x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 42); __ret; })
#define vld1q_f64_x3(__p0) __extension__ ({ float64x2x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 42); __ret; })
#define vld1q_f64_x4(__p0) __extension__ ({ float64x2x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 42); __ret; })
#define vld1q_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x8_t __s1 = __p1; float16x8_t __ret; __ret = (float16x8_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 40); __ret; })
#define vld1q_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x4_t __s1 = __p1; float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 41); __ret; })
#define vld1q_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x2_t __s1 = __p1; float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 42); __ret; })
#define vld1q_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x8_t __s1 = __p1; poly16x8_t __ret; __ret = (poly16x8_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 37); __ret; })
#define vld1q_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x2_t __s1 = __p1; poly64x2_t __ret; __ret = (poly64x2_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 38); __ret; })
#define vld1q_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x16_t __s1 = __p1; poly8x16_t __ret; __ret = (poly8x16_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 36); __ret; })
#define vld1q_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 33); __ret; })
#define vld1q_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 34); __ret; })
#define vld1q_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x2_t __s1 = __p1; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 35); __ret; })
#define vld1q_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x16_t __s1 = __p1; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 32); __ret; })
#define vld1q_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x8_t __s1 = __p1; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 49); __ret; })
#define vld1q_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x4_t __s1 = __p1; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 50); __ret; })
#define vld1q_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x2_t __s1 = __p1; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 51); __ret; })
#define vld1q_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x16_t __s1 = __p1; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 48); __ret; })
#define vld1q_p16(__p0) __extension__ ({ poly16x8_t __ret; __ret = (poly16x8_t) __builtin_neon_vld1q_v(__p0, 37); __ret; })
#define vld1q_p16_x2(__p0) __extension__ ({ poly16x8x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 37); __ret; })
#define vld1q_p16_x3(__p0) __extension__ ({ poly16x8x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 37); __ret; })
#define vld1q_p16_x4(__p0) __extension__ ({ poly16x8x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 37); __ret; })
#define vld1q_p64(__p0) __extension__ ({ poly64x2_t __ret; __ret = (poly64x2_t) __builtin_neon_vld1q_v(__p0, 38); __ret; })
#define vld1q_p64_x2(__p0) __extension__ ({ poly64x2x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 38); __ret; })
#define vld1q_p64_x3(__p0) __extension__ ({ poly64x2x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 38); __ret; })
#define vld1q_p64_x4(__p0) __extension__ ({ poly64x2x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 38); __ret; })
#define vld1q_p8(__p0) __extension__ ({ poly8x16_t __ret; __ret = (poly8x16_t) __builtin_neon_vld1q_v(__p0, 36); __ret; })
#define vld1q_p8_x2(__p0) __extension__ ({ poly8x16x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 36); __ret; })
#define vld1q_p8_x3(__p0) __extension__ ({ poly8x16x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 36); __ret; })
#define vld1q_p8_x4(__p0) __extension__ ({ poly8x16x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 36); __ret; })
#define vld1q_s16(__p0) __extension__ ({ int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vld1q_v(__p0, 33); __ret; })
#define vld1q_s16_x2(__p0) __extension__ ({ int16x8x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 33); __ret; })
#define vld1q_s16_x3(__p0) __extension__ ({ int16x8x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 33); __ret; })
#define vld1q_s16_x4(__p0) __extension__ ({ int16x8x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 33); __ret; })
#define vld1q_s32(__p0) __extension__ ({ int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vld1q_v(__p0, 34); __ret; })
#define vld1q_s32_x2(__p0) __extension__ ({ int32x4x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 34); __ret; })
#define vld1q_s32_x3(__p0) __extension__ ({ int32x4x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 34); __ret; })
#define vld1q_s32_x4(__p0) __extension__ ({ int32x4x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 34); __ret; })
#define vld1q_s64(__p0) __extension__ ({ int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vld1q_v(__p0, 35); __ret; })
#define vld1q_s64_x2(__p0) __extension__ ({ int64x2x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 35); __ret; })
#define vld1q_s64_x3(__p0) __extension__ ({ int64x2x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 35); __ret; })
#define vld1q_s64_x4(__p0) __extension__ ({ int64x2x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 35); __ret; })
#define vld1q_s8(__p0) __extension__ ({ int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vld1q_v(__p0, 32); __ret; })
#define vld1q_s8_x2(__p0) __extension__ ({ int8x16x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 32); __ret; })
#define vld1q_s8_x3(__p0) __extension__ ({ int8x16x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 32); __ret; })
#define vld1q_s8_x4(__p0) __extension__ ({ int8x16x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 32); __ret; })
#define vld1q_u16(__p0) __extension__ ({ uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vld1q_v(__p0, 49); __ret; })
#define vld1q_u16_x2(__p0) __extension__ ({ uint16x8x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 49); __ret; })
#define vld1q_u16_x3(__p0) __extension__ ({ uint16x8x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 49); __ret; })
#define vld1q_u16_x4(__p0) __extension__ ({ uint16x8x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 49); __ret; })
#define vld1q_u32(__p0) __extension__ ({ uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vld1q_v(__p0, 50); __ret; })
#define vld1q_u32_x2(__p0) __extension__ ({ uint32x4x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 50); __ret; })
#define vld1q_u32_x3(__p0) __extension__ ({ uint32x4x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 50); __ret; })
#define vld1q_u32_x4(__p0) __extension__ ({ uint32x4x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 50); __ret; })
#define vld1q_u64(__p0) __extension__ ({ uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vld1q_v(__p0, 51); __ret; })
#define vld1q_u64_x2(__p0) __extension__ ({ uint64x2x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 51); __ret; })
#define vld1q_u64_x3(__p0) __extension__ ({ uint64x2x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 51); __ret; })
#define vld1q_u64_x4(__p0) __extension__ ({ uint64x2x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 51); __ret; })
#define vld1q_u8(__p0) __extension__ ({ uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vld1q_v(__p0, 48); __ret; })
#define vld1q_u8_x2(__p0) __extension__ ({ uint8x16x2_t __ret; __builtin_neon_vld1q_x2_v(&__ret, __p0, 48); __ret; })
#define vld1q_u8_x3(__p0) __extension__ ({ uint8x16x3_t __ret; __builtin_neon_vld1q_x3_v(&__ret, __p0, 48); __ret; })
#define vld1q_u8_x4(__p0) __extension__ ({ uint8x16x4_t __ret; __builtin_neon_vld1q_x4_v(&__ret, __p0, 48); __ret; })
#define vld2_dup_f16(__p0) __extension__ ({ float16x4x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 8); __ret; })
#define vld2_dup_f32(__p0) __extension__ ({ float32x2x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 9); __ret; })
#define vld2_dup_f64(__p0) __extension__ ({ float64x1x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 10); __ret; })
#define vld2_dup_p16(__p0) __extension__ ({ poly16x4x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 5); __ret; })
#define vld2_dup_p64(__p0) __extension__ ({ poly64x1x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 6); __ret; })
#define vld2_dup_p8(__p0) __extension__ ({ poly8x8x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 4); __ret; })
#define vld2_dup_s16(__p0) __extension__ ({ int16x4x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 1); __ret; })
#define vld2_dup_s32(__p0) __extension__ ({ int32x2x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 2); __ret; })
#define vld2_dup_s64(__p0) __extension__ ({ int64x1x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 3); __ret; })
#define vld2_dup_s8(__p0) __extension__ ({ int8x8x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 0); __ret; })
#define vld2_dup_u16(__p0) __extension__ ({ uint16x4x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 17); __ret; })
#define vld2_dup_u32(__p0) __extension__ ({ uint32x2x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 18); __ret; })
#define vld2_dup_u64(__p0) __extension__ ({ uint64x1x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 19); __ret; })
#define vld2_dup_u8(__p0) __extension__ ({ uint8x8x2_t __ret; __builtin_neon_vld2_dup_v(&__ret, __p0, 16); __ret; })
#define vld2_f16(__p0) __extension__ ({ float16x4x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 8); __ret; })
#define vld2_f32(__p0) __extension__ ({ float32x2x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 9); __ret; })
#define vld2_f64(__p0) __extension__ ({ float64x1x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 10); __ret; })
#define vld2_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x4x2_t __s1 = __p1; float16x4x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 8); __ret; })
#define vld2_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x2x2_t __s1 = __p1; float32x2x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 9); __ret; })
#define vld2_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x1x2_t __s1 = __p1; float64x1x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 10); __ret; })
#define vld2_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x4x2_t __s1 = __p1; poly16x4x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 5); __ret; })
#define vld2_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x1x2_t __s1 = __p1; poly64x1x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 6); __ret; })
#define vld2_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x8x2_t __s1 = __p1; poly8x8x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 4); __ret; })
#define vld2_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4x2_t __s1 = __p1; int16x4x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 1); __ret; })
#define vld2_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2x2_t __s1 = __p1; int32x2x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 2); __ret; })
#define vld2_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x1x2_t __s1 = __p1; int64x1x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 3); __ret; })
#define vld2_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x8x2_t __s1 = __p1; int8x8x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 0); __ret; })
#define vld2_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x4x2_t __s1 = __p1; uint16x4x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 17); __ret; })
#define vld2_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x2x2_t __s1 = __p1; uint32x2x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 18); __ret; })
#define vld2_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x1x2_t __s1 = __p1; uint64x1x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 19); __ret; })
#define vld2_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x8x2_t __s1 = __p1; uint8x8x2_t __ret; __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 16); __ret; })
#define vld2_p16(__p0) __extension__ ({ poly16x4x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 5); __ret; })
#define vld2_p64(__p0) __extension__ ({ poly64x1x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 6); __ret; })
#define vld2_p8(__p0) __extension__ ({ poly8x8x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 4); __ret; })
#define vld2_s16(__p0) __extension__ ({ int16x4x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 1); __ret; })
#define vld2_s32(__p0) __extension__ ({ int32x2x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 2); __ret; })
#define vld2_s64(__p0) __extension__ ({ int64x1x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 3); __ret; })
#define vld2_s8(__p0) __extension__ ({ int8x8x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 0); __ret; })
#define vld2_u16(__p0) __extension__ ({ uint16x4x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 17); __ret; })
#define vld2_u32(__p0) __extension__ ({ uint32x2x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 18); __ret; })
#define vld2_u64(__p0) __extension__ ({ uint64x1x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 19); __ret; })
#define vld2_u8(__p0) __extension__ ({ uint8x8x2_t __ret; __builtin_neon_vld2_v(&__ret, __p0, 16); __ret; })
#define vld2q_dup_f16(__p0) __extension__ ({ float16x8x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 40); __ret; })
#define vld2q_dup_f32(__p0) __extension__ ({ float32x4x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 41); __ret; })
#define vld2q_dup_f64(__p0) __extension__ ({ float64x2x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 42); __ret; })
#define vld2q_dup_p16(__p0) __extension__ ({ poly16x8x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 37); __ret; })
#define vld2q_dup_p64(__p0) __extension__ ({ poly64x2x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 38); __ret; })
#define vld2q_dup_p8(__p0) __extension__ ({ poly8x16x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 36); __ret; })
#define vld2q_dup_s16(__p0) __extension__ ({ int16x8x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 33); __ret; })
#define vld2q_dup_s32(__p0) __extension__ ({ int32x4x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 34); __ret; })
#define vld2q_dup_s64(__p0) __extension__ ({ int64x2x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 35); __ret; })
#define vld2q_dup_s8(__p0) __extension__ ({ int8x16x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 32); __ret; })
#define vld2q_dup_u16(__p0) __extension__ ({ uint16x8x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 49); __ret; })
#define vld2q_dup_u32(__p0) __extension__ ({ uint32x4x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 50); __ret; })
#define vld2q_dup_u64(__p0) __extension__ ({ uint64x2x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 51); __ret; })
#define vld2q_dup_u8(__p0) __extension__ ({ uint8x16x2_t __ret; __builtin_neon_vld2q_dup_v(&__ret, __p0, 48); __ret; })
#define vld2q_f16(__p0) __extension__ ({ float16x8x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 40); __ret; })
#define vld2q_f32(__p0) __extension__ ({ float32x4x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 41); __ret; })
#define vld2q_f64(__p0) __extension__ ({ float64x2x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 42); __ret; })
#define vld2q_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x8x2_t __s1 = __p1; float16x8x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 40); __ret; })
#define vld2q_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x4x2_t __s1 = __p1; float32x4x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 41); __ret; })
#define vld2q_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x2x2_t __s1 = __p1; float64x2x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 42); __ret; })
#define vld2q_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x8x2_t __s1 = __p1; poly16x8x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 37); __ret; })
#define vld2q_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x2x2_t __s1 = __p1; poly64x2x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 38); __ret; })
#define vld2q_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x16x2_t __s1 = __p1; poly8x16x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 36); __ret; })
#define vld2q_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8x2_t __s1 = __p1; int16x8x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 33); __ret; })
#define vld2q_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4x2_t __s1 = __p1; int32x4x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 34); __ret; })
#define vld2q_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x2x2_t __s1 = __p1; int64x2x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 35); __ret; })
#define vld2q_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x16x2_t __s1 = __p1; int8x16x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 32); __ret; })
#define vld2q_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x8x2_t __s1 = __p1; uint16x8x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 49); __ret; })
#define vld2q_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x4x2_t __s1 = __p1; uint32x4x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 50); __ret; })
#define vld2q_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x2x2_t __s1 = __p1; uint64x2x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 51); __ret; })
#define vld2q_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x16x2_t __s1 = __p1; uint8x16x2_t __ret; __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 48); __ret; })
#define vld2q_p16(__p0) __extension__ ({ poly16x8x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 37); __ret; })
#define vld2q_p64(__p0) __extension__ ({ poly64x2x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 38); __ret; })
#define vld2q_p8(__p0) __extension__ ({ poly8x16x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 36); __ret; })
#define vld2q_s16(__p0) __extension__ ({ int16x8x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 33); __ret; })
#define vld2q_s32(__p0) __extension__ ({ int32x4x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 34); __ret; })
#define vld2q_s64(__p0) __extension__ ({ int64x2x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 35); __ret; })
#define vld2q_s8(__p0) __extension__ ({ int8x16x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 32); __ret; })
#define vld2q_u16(__p0) __extension__ ({ uint16x8x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 49); __ret; })
#define vld2q_u32(__p0) __extension__ ({ uint32x4x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 50); __ret; })
#define vld2q_u64(__p0) __extension__ ({ uint64x2x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 51); __ret; })
#define vld2q_u8(__p0) __extension__ ({ uint8x16x2_t __ret; __builtin_neon_vld2q_v(&__ret, __p0, 48); __ret; })
#define vld3_dup_f16(__p0) __extension__ ({ float16x4x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 8); __ret; })
#define vld3_dup_f32(__p0) __extension__ ({ float32x2x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 9); __ret; })
#define vld3_dup_f64(__p0) __extension__ ({ float64x1x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 10); __ret; })
#define vld3_dup_p16(__p0) __extension__ ({ poly16x4x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 5); __ret; })
#define vld3_dup_p64(__p0) __extension__ ({ poly64x1x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 6); __ret; })
#define vld3_dup_p8(__p0) __extension__ ({ poly8x8x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 4); __ret; })
#define vld3_dup_s16(__p0) __extension__ ({ int16x4x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 1); __ret; })
#define vld3_dup_s32(__p0) __extension__ ({ int32x2x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 2); __ret; })
#define vld3_dup_s64(__p0) __extension__ ({ int64x1x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 3); __ret; })
#define vld3_dup_s8(__p0) __extension__ ({ int8x8x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 0); __ret; })
#define vld3_dup_u16(__p0) __extension__ ({ uint16x4x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 17); __ret; })
#define vld3_dup_u32(__p0) __extension__ ({ uint32x2x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 18); __ret; })
#define vld3_dup_u64(__p0) __extension__ ({ uint64x1x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 19); __ret; })
#define vld3_dup_u8(__p0) __extension__ ({ uint8x8x3_t __ret; __builtin_neon_vld3_dup_v(&__ret, __p0, 16); __ret; })
#define vld3_f16(__p0) __extension__ ({ float16x4x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 8); __ret; })
#define vld3_f32(__p0) __extension__ ({ float32x2x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 9); __ret; })
#define vld3_f64(__p0) __extension__ ({ float64x1x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 10); __ret; })
#define vld3_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x4x3_t __s1 = __p1; float16x4x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 8); __ret; })
#define vld3_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x2x3_t __s1 = __p1; float32x2x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 9); __ret; })
#define vld3_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x1x3_t __s1 = __p1; float64x1x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 10); __ret; })
#define vld3_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x4x3_t __s1 = __p1; poly16x4x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 5); __ret; })
#define vld3_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x1x3_t __s1 = __p1; poly64x1x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 6); __ret; })
#define vld3_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x8x3_t __s1 = __p1; poly8x8x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 4); __ret; })
#define vld3_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4x3_t __s1 = __p1; int16x4x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 1); __ret; })
#define vld3_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2x3_t __s1 = __p1; int32x2x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 2); __ret; })
#define vld3_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x1x3_t __s1 = __p1; int64x1x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 3); __ret; })
#define vld3_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x8x3_t __s1 = __p1; int8x8x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 0); __ret; })
#define vld3_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x4x3_t __s1 = __p1; uint16x4x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 17); __ret; })
#define vld3_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x2x3_t __s1 = __p1; uint32x2x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 18); __ret; })
#define vld3_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x1x3_t __s1 = __p1; uint64x1x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 19); __ret; })
#define vld3_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x8x3_t __s1 = __p1; uint8x8x3_t __ret; __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 16); __ret; })
#define vld3_p16(__p0) __extension__ ({ poly16x4x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 5); __ret; })
#define vld3_p64(__p0) __extension__ ({ poly64x1x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 6); __ret; })
#define vld3_p8(__p0) __extension__ ({ poly8x8x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 4); __ret; })
#define vld3_s16(__p0) __extension__ ({ int16x4x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 1); __ret; })
#define vld3_s32(__p0) __extension__ ({ int32x2x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 2); __ret; })
#define vld3_s64(__p0) __extension__ ({ int64x1x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 3); __ret; })
#define vld3_s8(__p0) __extension__ ({ int8x8x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 0); __ret; })
#define vld3_u16(__p0) __extension__ ({ uint16x4x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 17); __ret; })
#define vld3_u32(__p0) __extension__ ({ uint32x2x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 18); __ret; })
#define vld3_u64(__p0) __extension__ ({ uint64x1x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 19); __ret; })
#define vld3_u8(__p0) __extension__ ({ uint8x8x3_t __ret; __builtin_neon_vld3_v(&__ret, __p0, 16); __ret; })
#define vld3q_dup_f16(__p0) __extension__ ({ float16x8x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 40); __ret; })
#define vld3q_dup_f32(__p0) __extension__ ({ float32x4x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 41); __ret; })
#define vld3q_dup_f64(__p0) __extension__ ({ float64x2x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 42); __ret; })
#define vld3q_dup_p16(__p0) __extension__ ({ poly16x8x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 37); __ret; })
#define vld3q_dup_p64(__p0) __extension__ ({ poly64x2x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 38); __ret; })
#define vld3q_dup_p8(__p0) __extension__ ({ poly8x16x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 36); __ret; })
#define vld3q_dup_s16(__p0) __extension__ ({ int16x8x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 33); __ret; })
#define vld3q_dup_s32(__p0) __extension__ ({ int32x4x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 34); __ret; })
#define vld3q_dup_s64(__p0) __extension__ ({ int64x2x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 35); __ret; })
#define vld3q_dup_s8(__p0) __extension__ ({ int8x16x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 32); __ret; })
#define vld3q_dup_u16(__p0) __extension__ ({ uint16x8x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 49); __ret; })
#define vld3q_dup_u32(__p0) __extension__ ({ uint32x4x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 50); __ret; })
#define vld3q_dup_u64(__p0) __extension__ ({ uint64x2x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 51); __ret; })
#define vld3q_dup_u8(__p0) __extension__ ({ uint8x16x3_t __ret; __builtin_neon_vld3q_dup_v(&__ret, __p0, 48); __ret; })
#define vld3q_f16(__p0) __extension__ ({ float16x8x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 40); __ret; })
#define vld3q_f32(__p0) __extension__ ({ float32x4x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 41); __ret; })
#define vld3q_f64(__p0) __extension__ ({ float64x2x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 42); __ret; })
#define vld3q_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x8x3_t __s1 = __p1; float16x8x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 40); __ret; })
#define vld3q_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x4x3_t __s1 = __p1; float32x4x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 41); __ret; })
#define vld3q_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x2x3_t __s1 = __p1; float64x2x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 42); __ret; })
#define vld3q_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x8x3_t __s1 = __p1; poly16x8x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 37); __ret; })
#define vld3q_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x2x3_t __s1 = __p1; poly64x2x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 38); __ret; })
#define vld3q_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x16x3_t __s1 = __p1; poly8x16x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 36); __ret; })
#define vld3q_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8x3_t __s1 = __p1; int16x8x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 33); __ret; })
#define vld3q_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4x3_t __s1 = __p1; int32x4x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 34); __ret; })
#define vld3q_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x2x3_t __s1 = __p1; int64x2x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 35); __ret; })
#define vld3q_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x16x3_t __s1 = __p1; int8x16x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 32); __ret; })
#define vld3q_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x8x3_t __s1 = __p1; uint16x8x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 49); __ret; })
#define vld3q_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x4x3_t __s1 = __p1; uint32x4x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 50); __ret; })
#define vld3q_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x2x3_t __s1 = __p1; uint64x2x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 51); __ret; })
#define vld3q_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x16x3_t __s1 = __p1; uint8x16x3_t __ret; __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 48); __ret; })
#define vld3q_p16(__p0) __extension__ ({ poly16x8x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 37); __ret; })
#define vld3q_p64(__p0) __extension__ ({ poly64x2x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 38); __ret; })
#define vld3q_p8(__p0) __extension__ ({ poly8x16x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 36); __ret; })
#define vld3q_s16(__p0) __extension__ ({ int16x8x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 33); __ret; })
#define vld3q_s32(__p0) __extension__ ({ int32x4x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 34); __ret; })
#define vld3q_s64(__p0) __extension__ ({ int64x2x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 35); __ret; })
#define vld3q_s8(__p0) __extension__ ({ int8x16x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 32); __ret; })
#define vld3q_u16(__p0) __extension__ ({ uint16x8x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 49); __ret; })
#define vld3q_u32(__p0) __extension__ ({ uint32x4x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 50); __ret; })
#define vld3q_u64(__p0) __extension__ ({ uint64x2x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 51); __ret; })
#define vld3q_u8(__p0) __extension__ ({ uint8x16x3_t __ret; __builtin_neon_vld3q_v(&__ret, __p0, 48); __ret; })
#define vld4_dup_f16(__p0) __extension__ ({ float16x4x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 8); __ret; })
#define vld4_dup_f32(__p0) __extension__ ({ float32x2x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 9); __ret; })
#define vld4_dup_f64(__p0) __extension__ ({ float64x1x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 10); __ret; })
#define vld4_dup_p16(__p0) __extension__ ({ poly16x4x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 5); __ret; })
#define vld4_dup_p64(__p0) __extension__ ({ poly64x1x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 6); __ret; })
#define vld4_dup_p8(__p0) __extension__ ({ poly8x8x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 4); __ret; })
#define vld4_dup_s16(__p0) __extension__ ({ int16x4x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 1); __ret; })
#define vld4_dup_s32(__p0) __extension__ ({ int32x2x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 2); __ret; })
#define vld4_dup_s64(__p0) __extension__ ({ int64x1x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 3); __ret; })
#define vld4_dup_s8(__p0) __extension__ ({ int8x8x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 0); __ret; })
#define vld4_dup_u16(__p0) __extension__ ({ uint16x4x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 17); __ret; })
#define vld4_dup_u32(__p0) __extension__ ({ uint32x2x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 18); __ret; })
#define vld4_dup_u64(__p0) __extension__ ({ uint64x1x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 19); __ret; })
#define vld4_dup_u8(__p0) __extension__ ({ uint8x8x4_t __ret; __builtin_neon_vld4_dup_v(&__ret, __p0, 16); __ret; })
#define vld4_f16(__p0) __extension__ ({ float16x4x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 8); __ret; })
#define vld4_f32(__p0) __extension__ ({ float32x2x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 9); __ret; })
#define vld4_f64(__p0) __extension__ ({ float64x1x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 10); __ret; })
#define vld4_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x4x4_t __s1 = __p1; float16x4x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 8); __ret; })
#define vld4_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x2x4_t __s1 = __p1; float32x2x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 9); __ret; })
#define vld4_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x1x4_t __s1 = __p1; float64x1x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 10); __ret; })
#define vld4_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x4x4_t __s1 = __p1; poly16x4x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 5); __ret; })
#define vld4_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x1x4_t __s1 = __p1; poly64x1x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 6); __ret; })
#define vld4_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x8x4_t __s1 = __p1; poly8x8x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 4); __ret; })
#define vld4_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4x4_t __s1 = __p1; int16x4x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 1); __ret; })
#define vld4_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2x4_t __s1 = __p1; int32x2x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 2); __ret; })
#define vld4_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x1x4_t __s1 = __p1; int64x1x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 3); __ret; })
#define vld4_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x8x4_t __s1 = __p1; int8x8x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 0); __ret; })
#define vld4_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x4x4_t __s1 = __p1; uint16x4x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 17); __ret; })
#define vld4_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x2x4_t __s1 = __p1; uint32x2x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 18); __ret; })
#define vld4_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x1x4_t __s1 = __p1; uint64x1x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 19); __ret; })
#define vld4_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x8x4_t __s1 = __p1; uint8x8x4_t __ret; __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 16); __ret; })
#define vld4_p16(__p0) __extension__ ({ poly16x4x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 5); __ret; })
#define vld4_p64(__p0) __extension__ ({ poly64x1x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 6); __ret; })
#define vld4_p8(__p0) __extension__ ({ poly8x8x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 4); __ret; })
#define vld4_s16(__p0) __extension__ ({ int16x4x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 1); __ret; })
#define vld4_s32(__p0) __extension__ ({ int32x2x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 2); __ret; })
#define vld4_s64(__p0) __extension__ ({ int64x1x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 3); __ret; })
#define vld4_s8(__p0) __extension__ ({ int8x8x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 0); __ret; })
#define vld4_u16(__p0) __extension__ ({ uint16x4x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 17); __ret; })
#define vld4_u32(__p0) __extension__ ({ uint32x2x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 18); __ret; })
#define vld4_u64(__p0) __extension__ ({ uint64x1x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 19); __ret; })
#define vld4_u8(__p0) __extension__ ({ uint8x8x4_t __ret; __builtin_neon_vld4_v(&__ret, __p0, 16); __ret; })
#define vld4q_dup_f16(__p0) __extension__ ({ float16x8x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 40); __ret; })
#define vld4q_dup_f32(__p0) __extension__ ({ float32x4x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 41); __ret; })
#define vld4q_dup_f64(__p0) __extension__ ({ float64x2x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 42); __ret; })
#define vld4q_dup_p16(__p0) __extension__ ({ poly16x8x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 37); __ret; })
#define vld4q_dup_p64(__p0) __extension__ ({ poly64x2x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 38); __ret; })
#define vld4q_dup_p8(__p0) __extension__ ({ poly8x16x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 36); __ret; })
#define vld4q_dup_s16(__p0) __extension__ ({ int16x8x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 33); __ret; })
#define vld4q_dup_s32(__p0) __extension__ ({ int32x4x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 34); __ret; })
#define vld4q_dup_s64(__p0) __extension__ ({ int64x2x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 35); __ret; })
#define vld4q_dup_s8(__p0) __extension__ ({ int8x16x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 32); __ret; })
#define vld4q_dup_u16(__p0) __extension__ ({ uint16x8x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 49); __ret; })
#define vld4q_dup_u32(__p0) __extension__ ({ uint32x4x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 50); __ret; })
#define vld4q_dup_u64(__p0) __extension__ ({ uint64x2x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 51); __ret; })
#define vld4q_dup_u8(__p0) __extension__ ({ uint8x16x4_t __ret; __builtin_neon_vld4q_dup_v(&__ret, __p0, 48); __ret; })
#define vld4q_f16(__p0) __extension__ ({ float16x8x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 40); __ret; })
#define vld4q_f32(__p0) __extension__ ({ float32x4x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 41); __ret; })
#define vld4q_f64(__p0) __extension__ ({ float64x2x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 42); __ret; })
#define vld4q_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x8x4_t __s1 = __p1; float16x8x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 40); __ret; })
#define vld4q_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x4x4_t __s1 = __p1; float32x4x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 41); __ret; })
#define vld4q_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x2x4_t __s1 = __p1; float64x2x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 42); __ret; })
#define vld4q_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x8x4_t __s1 = __p1; poly16x8x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 37); __ret; })
#define vld4q_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x2x4_t __s1 = __p1; poly64x2x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 38); __ret; })
#define vld4q_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x16x4_t __s1 = __p1; poly8x16x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 36); __ret; })
#define vld4q_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8x4_t __s1 = __p1; int16x8x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 33); __ret; })
#define vld4q_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4x4_t __s1 = __p1; int32x4x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 34); __ret; })
#define vld4q_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x2x4_t __s1 = __p1; int64x2x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 35); __ret; })
#define vld4q_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x16x4_t __s1 = __p1; int8x16x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 32); __ret; })
#define vld4q_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x8x4_t __s1 = __p1; uint16x8x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 49); __ret; })
#define vld4q_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x4x4_t __s1 = __p1; uint32x4x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 50); __ret; })
#define vld4q_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x2x4_t __s1 = __p1; uint64x2x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 51); __ret; })
#define vld4q_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x16x4_t __s1 = __p1; uint8x16x4_t __ret; __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 48); __ret; })
#define vld4q_p16(__p0) __extension__ ({ poly16x8x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 37); __ret; })
#define vld4q_p64(__p0) __extension__ ({ poly64x2x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 38); __ret; })
#define vld4q_p8(__p0) __extension__ ({ poly8x16x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 36); __ret; })
#define vld4q_s16(__p0) __extension__ ({ int16x8x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 33); __ret; })
#define vld4q_s32(__p0) __extension__ ({ int32x4x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 34); __ret; })
#define vld4q_s64(__p0) __extension__ ({ int64x2x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 35); __ret; })
#define vld4q_s8(__p0) __extension__ ({ int8x16x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 32); __ret; })
#define vld4q_u16(__p0) __extension__ ({ uint16x8x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 49); __ret; })
#define vld4q_u32(__p0) __extension__ ({ uint32x4x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 50); __ret; })
#define vld4q_u64(__p0) __extension__ ({ uint64x2x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 51); __ret; })
#define vld4q_u8(__p0) __extension__ ({ uint8x16x4_t __ret; __builtin_neon_vld4q_v(&__ret, __p0, 48); __ret; })
#define vldrq_p128(__p0) __extension__ ({ poly128_t __ret; __ret = (poly128_t) __builtin_neon_vldrq_p128(__p0); __ret; })
#define vmaxnmv_f16(__p0) __extension__ ({ float16x4_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vmaxnmv_f16((int8x8_t)__s0); __ret; })
#define vmaxnmvq_f16(__p0) __extension__ ({ float16x8_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vmaxnmvq_f16((int8x16_t)__s0); __ret; })
#define vmaxv_f16(__p0) __extension__ ({ float16x4_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vmaxv_f16((int8x8_t)__s0); __ret; })
#define vmaxvq_f16(__p0) __extension__ ({ float16x8_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vmaxvq_f16((int8x16_t)__s0); __ret; })
#define vminnmv_f16(__p0) __extension__ ({ float16x4_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vminnmv_f16((int8x8_t)__s0); __ret; })
#define vminnmvq_f16(__p0) __extension__ ({ float16x8_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vminnmvq_f16((int8x16_t)__s0); __ret; })
#define vminv_f16(__p0) __extension__ ({ float16x4_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vminv_f16((int8x8_t)__s0); __ret; })
#define vminvq_f16(__p0) __extension__ ({ float16x8_t __s0 = __p0; float16_t __ret; __ret = (float16_t) __builtin_neon_vminvq_f16((int8x16_t)__s0); __ret; })
#define vmla_lane_f32(__p0_56,__p1_56,__p2_56,__p3_56) __extension__ ({ float32x2_t __s0_56 = __p0_56; float32x2_t __s1_56 = __p1_56; float32x2_t __s2_56 = __p2_56; float32x2_t __ret_56; __ret_56 = __s0_56 + __s1_56 * splat_lane_f32(__s2_56, __p3_56); __ret_56; })
#define vmla_lane_s16(__p0_60,__p1_60,__p2_60,__p3_60) __extension__ ({ int16x4_t __s0_60 = __p0_60; int16x4_t __s1_60 = __p1_60; int16x4_t __s2_60 = __p2_60; int16x4_t __ret_60; __ret_60 = __s0_60 + __s1_60 * splat_lane_s16(__s2_60, __p3_60); __ret_60; })
#define vmla_lane_s32(__p0_58,__p1_58,__p2_58,__p3_58) __extension__ ({ int32x2_t __s0_58 = __p0_58; int32x2_t __s1_58 = __p1_58; int32x2_t __s2_58 = __p2_58; int32x2_t __ret_58; __ret_58 = __s0_58 + __s1_58 * splat_lane_s32(__s2_58, __p3_58); __ret_58; })
#define vmla_lane_u16(__p0_54,__p1_54,__p2_54,__p3_54) __extension__ ({ uint16x4_t __s0_54 = __p0_54; uint16x4_t __s1_54 = __p1_54; uint16x4_t __s2_54 = __p2_54; uint16x4_t __ret_54; __ret_54 = __s0_54 + __s1_54 * splat_lane_u16(__s2_54, __p3_54); __ret_54; })
#define vmla_lane_u32(__p0_52,__p1_52,__p2_52,__p3_52) __extension__ ({ uint32x2_t __s0_52 = __p0_52; uint32x2_t __s1_52 = __p1_52; uint32x2_t __s2_52 = __p2_52; uint32x2_t __ret_52; __ret_52 = __s0_52 + __s1_52 * splat_lane_u32(__s2_52, __p3_52); __ret_52; })
#define vmla_laneq_f32(__p0_529,__p1_529,__p2_529,__p3_529) __extension__ ({ float32x2_t __s0_529 = __p0_529; float32x2_t __s1_529 = __p1_529; float32x4_t __s2_529 = __p2_529; float32x2_t __ret_529; __ret_529 = __s0_529 + __s1_529 * splat_laneq_f32(__s2_529, __p3_529); __ret_529; })
#define vmla_laneq_s16(__p0_533,__p1_533,__p2_533,__p3_533) __extension__ ({ int16x4_t __s0_533 = __p0_533; int16x4_t __s1_533 = __p1_533; int16x8_t __s2_533 = __p2_533; int16x4_t __ret_533; __ret_533 = __s0_533 + __s1_533 * splat_laneq_s16(__s2_533, __p3_533); __ret_533; })
#define vmla_laneq_s32(__p0_531,__p1_531,__p2_531,__p3_531) __extension__ ({ int32x2_t __s0_531 = __p0_531; int32x2_t __s1_531 = __p1_531; int32x4_t __s2_531 = __p2_531; int32x2_t __ret_531; __ret_531 = __s0_531 + __s1_531 * splat_laneq_s32(__s2_531, __p3_531); __ret_531; })
#define vmla_laneq_u16(__p0_527,__p1_527,__p2_527,__p3_527) __extension__ ({ uint16x4_t __s0_527 = __p0_527; uint16x4_t __s1_527 = __p1_527; uint16x8_t __s2_527 = __p2_527; uint16x4_t __ret_527; __ret_527 = __s0_527 + __s1_527 * splat_laneq_u16(__s2_527, __p3_527); __ret_527; })
#define vmla_laneq_u32(__p0_525,__p1_525,__p2_525,__p3_525) __extension__ ({ uint32x2_t __s0_525 = __p0_525; uint32x2_t __s1_525 = __p1_525; uint32x4_t __s2_525 = __p2_525; uint32x2_t __ret_525; __ret_525 = __s0_525 + __s1_525 * splat_laneq_u32(__s2_525, __p3_525); __ret_525; })
#define vmlal_high_lane_s16(__p0_541,__p1_541,__p2_541,__p3_541) __extension__ ({ int32x4_t __s0_541 = __p0_541; int16x8_t __s1_541 = __p1_541; int16x4_t __s2_541 = __p2_541; int32x4_t __ret_541; __ret_541 = __s0_541 + vmull_s16(vget_high_s16(__s1_541), splat_lane_s16(__s2_541, __p3_541)); __ret_541; })
#define vmlal_high_lane_s32(__p0_539,__p1_539,__p2_539,__p3_539) __extension__ ({ int64x2_t __s0_539 = __p0_539; int32x4_t __s1_539 = __p1_539; int32x2_t __s2_539 = __p2_539; int64x2_t __ret_539; __ret_539 = __s0_539 + vmull_s32(vget_high_s32(__s1_539), splat_lane_s32(__s2_539, __p3_539)); __ret_539; })
#define vmlal_high_lane_u16(__p0_537,__p1_537,__p2_537,__p3_537) __extension__ ({ uint32x4_t __s0_537 = __p0_537; uint16x8_t __s1_537 = __p1_537; uint16x4_t __s2_537 = __p2_537; uint32x4_t __ret_537; __ret_537 = __s0_537 + vmull_u16(vget_high_u16(__s1_537), splat_lane_u16(__s2_537, __p3_537)); __ret_537; })
#define vmlal_high_lane_u32(__p0_535,__p1_535,__p2_535,__p3_535) __extension__ ({ uint64x2_t __s0_535 = __p0_535; uint32x4_t __s1_535 = __p1_535; uint32x2_t __s2_535 = __p2_535; uint64x2_t __ret_535; __ret_535 = __s0_535 + vmull_u32(vget_high_u32(__s1_535), splat_lane_u32(__s2_535, __p3_535)); __ret_535; })
#define vmlal_high_laneq_s16(__p0_549,__p1_549,__p2_549,__p3_549) __extension__ ({ int32x4_t __s0_549 = __p0_549; int16x8_t __s1_549 = __p1_549; int16x8_t __s2_549 = __p2_549; int32x4_t __ret_549; __ret_549 = __s0_549 + vmull_s16(vget_high_s16(__s1_549), splat_laneq_s16(__s2_549, __p3_549)); __ret_549; })
#define vmlal_high_laneq_s32(__p0_547,__p1_547,__p2_547,__p3_547) __extension__ ({ int64x2_t __s0_547 = __p0_547; int32x4_t __s1_547 = __p1_547; int32x4_t __s2_547 = __p2_547; int64x2_t __ret_547; __ret_547 = __s0_547 + vmull_s32(vget_high_s32(__s1_547), splat_laneq_s32(__s2_547, __p3_547)); __ret_547; })
#define vmlal_high_laneq_u16(__p0_545,__p1_545,__p2_545,__p3_545) __extension__ ({ uint32x4_t __s0_545 = __p0_545; uint16x8_t __s1_545 = __p1_545; uint16x8_t __s2_545 = __p2_545; uint32x4_t __ret_545; __ret_545 = __s0_545 + vmull_u16(vget_high_u16(__s1_545), splat_laneq_u16(__s2_545, __p3_545)); __ret_545; })
#define vmlal_high_laneq_u32(__p0_543,__p1_543,__p2_543,__p3_543) __extension__ ({ uint64x2_t __s0_543 = __p0_543; uint32x4_t __s1_543 = __p1_543; uint32x4_t __s2_543 = __p2_543; uint64x2_t __ret_543; __ret_543 = __s0_543 + vmull_u32(vget_high_u32(__s1_543), splat_laneq_u32(__s2_543, __p3_543)); __ret_543; })
#define vmlal_lane_s16(__p0_847,__p1_847,__p2_847,__p3_847) __extension__ ({ int32x4_t __s0_847 = __p0_847; int16x4_t __s1_847 = __p1_847; int16x4_t __s2_847 = __p2_847; int32x4_t __ret_847; __ret_847 = __s0_847 + vmull_s16(__s1_847, splat_lane_s16(__s2_847, __p3_847)); __ret_847; })
#define vmlal_lane_s32(__p0_845,__p1_845,__p2_845,__p3_845) __extension__ ({ int64x2_t __s0_845 = __p0_845; int32x2_t __s1_845 = __p1_845; int32x2_t __s2_845 = __p2_845; int64x2_t __ret_845; __ret_845 = __s0_845 + vmull_s32(__s1_845, splat_lane_s32(__s2_845, __p3_845)); __ret_845; })
#define vmlal_lane_u16(__p0_843,__p1_843,__p2_843,__p3_843) __extension__ ({ uint32x4_t __s0_843 = __p0_843; uint16x4_t __s1_843 = __p1_843; uint16x4_t __s2_843 = __p2_843; uint32x4_t __ret_843; __ret_843 = __s0_843 + vmull_u16(__s1_843, splat_lane_u16(__s2_843, __p3_843)); __ret_843; })
#define vmlal_lane_u32(__p0_841,__p1_841,__p2_841,__p3_841) __extension__ ({ uint64x2_t __s0_841 = __p0_841; uint32x2_t __s1_841 = __p1_841; uint32x2_t __s2_841 = __p2_841; uint64x2_t __ret_841; __ret_841 = __s0_841 + vmull_u32(__s1_841, splat_lane_u32(__s2_841, __p3_841)); __ret_841; })
#define vmlal_laneq_s16(__p0_557,__p1_557,__p2_557,__p3_557) __extension__ ({ int32x4_t __s0_557 = __p0_557; int16x4_t __s1_557 = __p1_557; int16x8_t __s2_557 = __p2_557; int32x4_t __ret_557; __ret_557 = __s0_557 + vmull_s16(__s1_557, splat_laneq_s16(__s2_557, __p3_557)); __ret_557; })
#define vmlal_laneq_s32(__p0_555,__p1_555,__p2_555,__p3_555) __extension__ ({ int64x2_t __s0_555 = __p0_555; int32x2_t __s1_555 = __p1_555; int32x4_t __s2_555 = __p2_555; int64x2_t __ret_555; __ret_555 = __s0_555 + vmull_s32(__s1_555, splat_laneq_s32(__s2_555, __p3_555)); __ret_555; })
#define vmlal_laneq_u16(__p0_553,__p1_553,__p2_553,__p3_553) __extension__ ({ uint32x4_t __s0_553 = __p0_553; uint16x4_t __s1_553 = __p1_553; uint16x8_t __s2_553 = __p2_553; uint32x4_t __ret_553; __ret_553 = __s0_553 + vmull_u16(__s1_553, splat_laneq_u16(__s2_553, __p3_553)); __ret_553; })
#define vmlal_laneq_u32(__p0_551,__p1_551,__p2_551,__p3_551) __extension__ ({ uint64x2_t __s0_551 = __p0_551; uint32x2_t __s1_551 = __p1_551; uint32x4_t __s2_551 = __p2_551; uint64x2_t __ret_551; __ret_551 = __s0_551 + vmull_u32(__s1_551, splat_laneq_u32(__s2_551, __p3_551)); __ret_551; })
#define vmlaq_lane_f32(__p0_46,__p1_46,__p2_46,__p3_46) __extension__ ({ float32x4_t __s0_46 = __p0_46; float32x4_t __s1_46 = __p1_46; float32x2_t __s2_46 = __p2_46; float32x4_t __ret_46; __ret_46 = __s0_46 + __s1_46 * splatq_lane_f32(__s2_46, __p3_46); __ret_46; })
#define vmlaq_lane_s16(__p0_50,__p1_50,__p2_50,__p3_50) __extension__ ({ int16x8_t __s0_50 = __p0_50; int16x8_t __s1_50 = __p1_50; int16x4_t __s2_50 = __p2_50; int16x8_t __ret_50; __ret_50 = __s0_50 + __s1_50 * splatq_lane_s16(__s2_50, __p3_50); __ret_50; })
#define vmlaq_lane_s32(__p0_48,__p1_48,__p2_48,__p3_48) __extension__ ({ int32x4_t __s0_48 = __p0_48; int32x4_t __s1_48 = __p1_48; int32x2_t __s2_48 = __p2_48; int32x4_t __ret_48; __ret_48 = __s0_48 + __s1_48 * splatq_lane_s32(__s2_48, __p3_48); __ret_48; })
#define vmlaq_lane_u16(__p0_44,__p1_44,__p2_44,__p3_44) __extension__ ({ uint16x8_t __s0_44 = __p0_44; uint16x8_t __s1_44 = __p1_44; uint16x4_t __s2_44 = __p2_44; uint16x8_t __ret_44; __ret_44 = __s0_44 + __s1_44 * splatq_lane_u16(__s2_44, __p3_44); __ret_44; })
#define vmlaq_lane_u32(__p0_42,__p1_42,__p2_42,__p3_42) __extension__ ({ uint32x4_t __s0_42 = __p0_42; uint32x4_t __s1_42 = __p1_42; uint32x2_t __s2_42 = __p2_42; uint32x4_t __ret_42; __ret_42 = __s0_42 + __s1_42 * splatq_lane_u32(__s2_42, __p3_42); __ret_42; })
#define vmlaq_laneq_f32(__p0_519,__p1_519,__p2_519,__p3_519) __extension__ ({ float32x4_t __s0_519 = __p0_519; float32x4_t __s1_519 = __p1_519; float32x4_t __s2_519 = __p2_519; float32x4_t __ret_519; __ret_519 = __s0_519 + __s1_519 * splatq_laneq_f32(__s2_519, __p3_519); __ret_519; })
#define vmlaq_laneq_s16(__p0_523,__p1_523,__p2_523,__p3_523) __extension__ ({ int16x8_t __s0_523 = __p0_523; int16x8_t __s1_523 = __p1_523; int16x8_t __s2_523 = __p2_523; int16x8_t __ret_523; __ret_523 = __s0_523 + __s1_523 * splatq_laneq_s16(__s2_523, __p3_523); __ret_523; })
#define vmlaq_laneq_s32(__p0_521,__p1_521,__p2_521,__p3_521) __extension__ ({ int32x4_t __s0_521 = __p0_521; int32x4_t __s1_521 = __p1_521; int32x4_t __s2_521 = __p2_521; int32x4_t __ret_521; __ret_521 = __s0_521 + __s1_521 * splatq_laneq_s32(__s2_521, __p3_521); __ret_521; })
#define vmlaq_laneq_u16(__p0_517,__p1_517,__p2_517,__p3_517) __extension__ ({ uint16x8_t __s0_517 = __p0_517; uint16x8_t __s1_517 = __p1_517; uint16x8_t __s2_517 = __p2_517; uint16x8_t __ret_517; __ret_517 = __s0_517 + __s1_517 * splatq_laneq_u16(__s2_517, __p3_517); __ret_517; })
#define vmlaq_laneq_u32(__p0_515,__p1_515,__p2_515,__p3_515) __extension__ ({ uint32x4_t __s0_515 = __p0_515; uint32x4_t __s1_515 = __p1_515; uint32x4_t __s2_515 = __p2_515; uint32x4_t __ret_515; __ret_515 = __s0_515 + __s1_515 * splatq_laneq_u32(__s2_515, __p3_515); __ret_515; })
#define vmls_lane_f32(__p0_76,__p1_76,__p2_76,__p3_76) __extension__ ({ float32x2_t __s0_76 = __p0_76; float32x2_t __s1_76 = __p1_76; float32x2_t __s2_76 = __p2_76; float32x2_t __ret_76; __ret_76 = __s0_76 - __s1_76 * splat_lane_f32(__s2_76, __p3_76); __ret_76; })
#define vmls_lane_s16(__p0_80,__p1_80,__p2_80,__p3_80) __extension__ ({ int16x4_t __s0_80 = __p0_80; int16x4_t __s1_80 = __p1_80; int16x4_t __s2_80 = __p2_80; int16x4_t __ret_80; __ret_80 = __s0_80 - __s1_80 * splat_lane_s16(__s2_80, __p3_80); __ret_80; })
#define vmls_lane_s32(__p0_78,__p1_78,__p2_78,__p3_78) __extension__ ({ int32x2_t __s0_78 = __p0_78; int32x2_t __s1_78 = __p1_78; int32x2_t __s2_78 = __p2_78; int32x2_t __ret_78; __ret_78 = __s0_78 - __s1_78 * splat_lane_s32(__s2_78, __p3_78); __ret_78; })
#define vmls_lane_u16(__p0_74,__p1_74,__p2_74,__p3_74) __extension__ ({ uint16x4_t __s0_74 = __p0_74; uint16x4_t __s1_74 = __p1_74; uint16x4_t __s2_74 = __p2_74; uint16x4_t __ret_74; __ret_74 = __s0_74 - __s1_74 * splat_lane_u16(__s2_74, __p3_74); __ret_74; })
#define vmls_lane_u32(__p0_72,__p1_72,__p2_72,__p3_72) __extension__ ({ uint32x2_t __s0_72 = __p0_72; uint32x2_t __s1_72 = __p1_72; uint32x2_t __s2_72 = __p2_72; uint32x2_t __ret_72; __ret_72 = __s0_72 - __s1_72 * splat_lane_u32(__s2_72, __p3_72); __ret_72; })
#define vmls_laneq_f32(__p0_573,__p1_573,__p2_573,__p3_573) __extension__ ({ float32x2_t __s0_573 = __p0_573; float32x2_t __s1_573 = __p1_573; float32x4_t __s2_573 = __p2_573; float32x2_t __ret_573; __ret_573 = __s0_573 - __s1_573 * splat_laneq_f32(__s2_573, __p3_573); __ret_573; })
#define vmls_laneq_s16(__p0_577,__p1_577,__p2_577,__p3_577) __extension__ ({ int16x4_t __s0_577 = __p0_577; int16x4_t __s1_577 = __p1_577; int16x8_t __s2_577 = __p2_577; int16x4_t __ret_577; __ret_577 = __s0_577 - __s1_577 * splat_laneq_s16(__s2_577, __p3_577); __ret_577; })
#define vmls_laneq_s32(__p0_575,__p1_575,__p2_575,__p3_575) __extension__ ({ int32x2_t __s0_575 = __p0_575; int32x2_t __s1_575 = __p1_575; int32x4_t __s2_575 = __p2_575; int32x2_t __ret_575; __ret_575 = __s0_575 - __s1_575 * splat_laneq_s32(__s2_575, __p3_575); __ret_575; })
#define vmls_laneq_u16(__p0_571,__p1_571,__p2_571,__p3_571) __extension__ ({ uint16x4_t __s0_571 = __p0_571; uint16x4_t __s1_571 = __p1_571; uint16x8_t __s2_571 = __p2_571; uint16x4_t __ret_571; __ret_571 = __s0_571 - __s1_571 * splat_laneq_u16(__s2_571, __p3_571); __ret_571; })
#define vmls_laneq_u32(__p0_569,__p1_569,__p2_569,__p3_569) __extension__ ({ uint32x2_t __s0_569 = __p0_569; uint32x2_t __s1_569 = __p1_569; uint32x4_t __s2_569 = __p2_569; uint32x2_t __ret_569; __ret_569 = __s0_569 - __s1_569 * splat_laneq_u32(__s2_569, __p3_569); __ret_569; })
#define vmlsl_high_lane_s16(__p0_585,__p1_585,__p2_585,__p3_585) __extension__ ({ int32x4_t __s0_585 = __p0_585; int16x8_t __s1_585 = __p1_585; int16x4_t __s2_585 = __p2_585; int32x4_t __ret_585; __ret_585 = __s0_585 - vmull_s16(vget_high_s16(__s1_585), splat_lane_s16(__s2_585, __p3_585)); __ret_585; })
#define vmlsl_high_lane_s32(__p0_583,__p1_583,__p2_583,__p3_583) __extension__ ({ int64x2_t __s0_583 = __p0_583; int32x4_t __s1_583 = __p1_583; int32x2_t __s2_583 = __p2_583; int64x2_t __ret_583; __ret_583 = __s0_583 - vmull_s32(vget_high_s32(__s1_583), splat_lane_s32(__s2_583, __p3_583)); __ret_583; })
#define vmlsl_high_lane_u16(__p0_581,__p1_581,__p2_581,__p3_581) __extension__ ({ uint32x4_t __s0_581 = __p0_581; uint16x8_t __s1_581 = __p1_581; uint16x4_t __s2_581 = __p2_581; uint32x4_t __ret_581; __ret_581 = __s0_581 - vmull_u16(vget_high_u16(__s1_581), splat_lane_u16(__s2_581, __p3_581)); __ret_581; })
#define vmlsl_high_lane_u32(__p0_579,__p1_579,__p2_579,__p3_579) __extension__ ({ uint64x2_t __s0_579 = __p0_579; uint32x4_t __s1_579 = __p1_579; uint32x2_t __s2_579 = __p2_579; uint64x2_t __ret_579; __ret_579 = __s0_579 - vmull_u32(vget_high_u32(__s1_579), splat_lane_u32(__s2_579, __p3_579)); __ret_579; })
#define vmlsl_high_laneq_s16(__p0_593,__p1_593,__p2_593,__p3_593) __extension__ ({ int32x4_t __s0_593 = __p0_593; int16x8_t __s1_593 = __p1_593; int16x8_t __s2_593 = __p2_593; int32x4_t __ret_593; __ret_593 = __s0_593 - vmull_s16(vget_high_s16(__s1_593), splat_laneq_s16(__s2_593, __p3_593)); __ret_593; })
#define vmlsl_high_laneq_s32(__p0_591,__p1_591,__p2_591,__p3_591) __extension__ ({ int64x2_t __s0_591 = __p0_591; int32x4_t __s1_591 = __p1_591; int32x4_t __s2_591 = __p2_591; int64x2_t __ret_591; __ret_591 = __s0_591 - vmull_s32(vget_high_s32(__s1_591), splat_laneq_s32(__s2_591, __p3_591)); __ret_591; })
#define vmlsl_high_laneq_u16(__p0_589,__p1_589,__p2_589,__p3_589) __extension__ ({ uint32x4_t __s0_589 = __p0_589; uint16x8_t __s1_589 = __p1_589; uint16x8_t __s2_589 = __p2_589; uint32x4_t __ret_589; __ret_589 = __s0_589 - vmull_u16(vget_high_u16(__s1_589), splat_laneq_u16(__s2_589, __p3_589)); __ret_589; })
#define vmlsl_high_laneq_u32(__p0_587,__p1_587,__p2_587,__p3_587) __extension__ ({ uint64x2_t __s0_587 = __p0_587; uint32x4_t __s1_587 = __p1_587; uint32x4_t __s2_587 = __p2_587; uint64x2_t __ret_587; __ret_587 = __s0_587 - vmull_u32(vget_high_u32(__s1_587), splat_laneq_u32(__s2_587, __p3_587)); __ret_587; })
#define vmlsl_lane_s16(__p0_855,__p1_855,__p2_855,__p3_855) __extension__ ({ int32x4_t __s0_855 = __p0_855; int16x4_t __s1_855 = __p1_855; int16x4_t __s2_855 = __p2_855; int32x4_t __ret_855; __ret_855 = __s0_855 - vmull_s16(__s1_855, splat_lane_s16(__s2_855, __p3_855)); __ret_855; })
#define vmlsl_lane_s32(__p0_853,__p1_853,__p2_853,__p3_853) __extension__ ({ int64x2_t __s0_853 = __p0_853; int32x2_t __s1_853 = __p1_853; int32x2_t __s2_853 = __p2_853; int64x2_t __ret_853; __ret_853 = __s0_853 - vmull_s32(__s1_853, splat_lane_s32(__s2_853, __p3_853)); __ret_853; })
#define vmlsl_lane_u16(__p0_851,__p1_851,__p2_851,__p3_851) __extension__ ({ uint32x4_t __s0_851 = __p0_851; uint16x4_t __s1_851 = __p1_851; uint16x4_t __s2_851 = __p2_851; uint32x4_t __ret_851; __ret_851 = __s0_851 - vmull_u16(__s1_851, splat_lane_u16(__s2_851, __p3_851)); __ret_851; })
#define vmlsl_lane_u32(__p0_849,__p1_849,__p2_849,__p3_849) __extension__ ({ uint64x2_t __s0_849 = __p0_849; uint32x2_t __s1_849 = __p1_849; uint32x2_t __s2_849 = __p2_849; uint64x2_t __ret_849; __ret_849 = __s0_849 - vmull_u32(__s1_849, splat_lane_u32(__s2_849, __p3_849)); __ret_849; })
#define vmlsl_laneq_s16(__p0_601,__p1_601,__p2_601,__p3_601) __extension__ ({ int32x4_t __s0_601 = __p0_601; int16x4_t __s1_601 = __p1_601; int16x8_t __s2_601 = __p2_601; int32x4_t __ret_601; __ret_601 = __s0_601 - vmull_s16(__s1_601, splat_laneq_s16(__s2_601, __p3_601)); __ret_601; })
#define vmlsl_laneq_s32(__p0_599,__p1_599,__p2_599,__p3_599) __extension__ ({ int64x2_t __s0_599 = __p0_599; int32x2_t __s1_599 = __p1_599; int32x4_t __s2_599 = __p2_599; int64x2_t __ret_599; __ret_599 = __s0_599 - vmull_s32(__s1_599, splat_laneq_s32(__s2_599, __p3_599)); __ret_599; })
#define vmlsl_laneq_u16(__p0_597,__p1_597,__p2_597,__p3_597) __extension__ ({ uint32x4_t __s0_597 = __p0_597; uint16x4_t __s1_597 = __p1_597; uint16x8_t __s2_597 = __p2_597; uint32x4_t __ret_597; __ret_597 = __s0_597 - vmull_u16(__s1_597, splat_laneq_u16(__s2_597, __p3_597)); __ret_597; })
#define vmlsl_laneq_u32(__p0_595,__p1_595,__p2_595,__p3_595) __extension__ ({ uint64x2_t __s0_595 = __p0_595; uint32x2_t __s1_595 = __p1_595; uint32x4_t __s2_595 = __p2_595; uint64x2_t __ret_595; __ret_595 = __s0_595 - vmull_u32(__s1_595, splat_laneq_u32(__s2_595, __p3_595)); __ret_595; })
#define vmlsq_lane_f32(__p0_66,__p1_66,__p2_66,__p3_66) __extension__ ({ float32x4_t __s0_66 = __p0_66; float32x4_t __s1_66 = __p1_66; float32x2_t __s2_66 = __p2_66; float32x4_t __ret_66; __ret_66 = __s0_66 - __s1_66 * splatq_lane_f32(__s2_66, __p3_66); __ret_66; })
#define vmlsq_lane_s16(__p0_70,__p1_70,__p2_70,__p3_70) __extension__ ({ int16x8_t __s0_70 = __p0_70; int16x8_t __s1_70 = __p1_70; int16x4_t __s2_70 = __p2_70; int16x8_t __ret_70; __ret_70 = __s0_70 - __s1_70 * splatq_lane_s16(__s2_70, __p3_70); __ret_70; })
#define vmlsq_lane_s32(__p0_68,__p1_68,__p2_68,__p3_68) __extension__ ({ int32x4_t __s0_68 = __p0_68; int32x4_t __s1_68 = __p1_68; int32x2_t __s2_68 = __p2_68; int32x4_t __ret_68; __ret_68 = __s0_68 - __s1_68 * splatq_lane_s32(__s2_68, __p3_68); __ret_68; })
#define vmlsq_lane_u16(__p0_64,__p1_64,__p2_64,__p3_64) __extension__ ({ uint16x8_t __s0_64 = __p0_64; uint16x8_t __s1_64 = __p1_64; uint16x4_t __s2_64 = __p2_64; uint16x8_t __ret_64; __ret_64 = __s0_64 - __s1_64 * splatq_lane_u16(__s2_64, __p3_64); __ret_64; })
#define vmlsq_lane_u32(__p0_62,__p1_62,__p2_62,__p3_62) __extension__ ({ uint32x4_t __s0_62 = __p0_62; uint32x4_t __s1_62 = __p1_62; uint32x2_t __s2_62 = __p2_62; uint32x4_t __ret_62; __ret_62 = __s0_62 - __s1_62 * splatq_lane_u32(__s2_62, __p3_62); __ret_62; })
#define vmlsq_laneq_f32(__p0_563,__p1_563,__p2_563,__p3_563) __extension__ ({ float32x4_t __s0_563 = __p0_563; float32x4_t __s1_563 = __p1_563; float32x4_t __s2_563 = __p2_563; float32x4_t __ret_563; __ret_563 = __s0_563 - __s1_563 * splatq_laneq_f32(__s2_563, __p3_563); __ret_563; })
#define vmlsq_laneq_s16(__p0_567,__p1_567,__p2_567,__p3_567) __extension__ ({ int16x8_t __s0_567 = __p0_567; int16x8_t __s1_567 = __p1_567; int16x8_t __s2_567 = __p2_567; int16x8_t __ret_567; __ret_567 = __s0_567 - __s1_567 * splatq_laneq_s16(__s2_567, __p3_567); __ret_567; })
#define vmlsq_laneq_s32(__p0_565,__p1_565,__p2_565,__p3_565) __extension__ ({ int32x4_t __s0_565 = __p0_565; int32x4_t __s1_565 = __p1_565; int32x4_t __s2_565 = __p2_565; int32x4_t __ret_565; __ret_565 = __s0_565 - __s1_565 * splatq_laneq_s32(__s2_565, __p3_565); __ret_565; })
#define vmlsq_laneq_u16(__p0_561,__p1_561,__p2_561,__p3_561) __extension__ ({ uint16x8_t __s0_561 = __p0_561; uint16x8_t __s1_561 = __p1_561; uint16x8_t __s2_561 = __p2_561; uint16x8_t __ret_561; __ret_561 = __s0_561 - __s1_561 * splatq_laneq_u16(__s2_561, __p3_561); __ret_561; })
#define vmlsq_laneq_u32(__p0_559,__p1_559,__p2_559,__p3_559) __extension__ ({ uint32x4_t __s0_559 = __p0_559; uint32x4_t __s1_559 = __p1_559; uint32x4_t __s2_559 = __p2_559; uint32x4_t __ret_559; __ret_559 = __s0_559 - __s1_559 * splatq_laneq_u32(__s2_559, __p3_559); __ret_559; })
#define vmov_n_f16(__p0) __extension__ ({ float16_t __s0 = __p0; float16x4_t __ret; __ret = (float16x4_t) {__s0, __s0, __s0, __s0}; __ret; })
#define vmovq_n_f16(__p0) __extension__ ({ float16_t __s0 = __p0; float16x8_t __ret; __ret = (float16x8_t) {__s0, __s0, __s0, __s0, __s0, __s0, __s0, __s0}; __ret; })
#define vmul_lane_f16(__p0_279,__p1_279,__p2_279) __extension__ ({ float16x4_t __s0_279 = __p0_279; float16x4_t __s1_279 = __p1_279; float16x4_t __ret_279; __ret_279 = __s0_279 * splat_lane_f16(__s1_279, __p2_279); __ret_279; })
#define vmul_lane_f32(__p0_96,__p1_96,__p2_96) __extension__ ({ float32x2_t __s0_96 = __p0_96; float32x2_t __s1_96 = __p1_96; float32x2_t __ret_96; __ret_96 = __s0_96 * splat_lane_f32(__s1_96, __p2_96); __ret_96; })
#define vmul_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x1_t __s0 = __p0; float64x1_t __s1 = __p1; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vmul_lane_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 10); __ret; })
#define vmul_lane_s16(__p0_100,__p1_100,__p2_100) __extension__ ({ int16x4_t __s0_100 = __p0_100; int16x4_t __s1_100 = __p1_100; int16x4_t __ret_100; __ret_100 = __s0_100 * splat_lane_s16(__s1_100, __p2_100); __ret_100; })
#define vmul_lane_s32(__p0_98,__p1_98,__p2_98) __extension__ ({ int32x2_t __s0_98 = __p0_98; int32x2_t __s1_98 = __p1_98; int32x2_t __ret_98; __ret_98 = __s0_98 * splat_lane_s32(__s1_98, __p2_98); __ret_98; })
#define vmul_lane_u16(__p0_94,__p1_94,__p2_94) __extension__ ({ uint16x4_t __s0_94 = __p0_94; uint16x4_t __s1_94 = __p1_94; uint16x4_t __ret_94; __ret_94 = __s0_94 * splat_lane_u16(__s1_94, __p2_94); __ret_94; })
#define vmul_lane_u32(__p0_92,__p1_92,__p2_92) __extension__ ({ uint32x2_t __s0_92 = __p0_92; uint32x2_t __s1_92 = __p1_92; uint32x2_t __ret_92; __ret_92 = __s0_92 * splat_lane_u32(__s1_92, __p2_92); __ret_92; })
#define vmul_laneq_f16(__p0_295,__p1_295,__p2_295) __extension__ ({ float16x4_t __s0_295 = __p0_295; float16x8_t __s1_295 = __p1_295; float16x4_t __ret_295; __ret_295 = __s0_295 * splat_laneq_f16(__s1_295, __p2_295); __ret_295; })
#define vmul_laneq_f32(__p0_646,__p1_646,__p2_646) __extension__ ({ float32x2_t __s0_646 = __p0_646; float32x4_t __s1_646 = __p1_646; float32x2_t __ret_646; __ret_646 = __s0_646 * splat_laneq_f32(__s1_646, __p2_646); __ret_646; })
#define vmul_laneq_f64(__p0,__p1,__p2) __extension__ ({ float64x1_t __s0 = __p0; float64x2_t __s1 = __p1; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vmul_laneq_v((int8x8_t)__s0, (int8x16_t)__s1, __p2, 10); __ret; })
#define vmul_laneq_s16(__p0_650,__p1_650,__p2_650) __extension__ ({ int16x4_t __s0_650 = __p0_650; int16x8_t __s1_650 = __p1_650; int16x4_t __ret_650; __ret_650 = __s0_650 * splat_laneq_s16(__s1_650, __p2_650); __ret_650; })
#define vmul_laneq_s32(__p0_648,__p1_648,__p2_648) __extension__ ({ int32x2_t __s0_648 = __p0_648; int32x4_t __s1_648 = __p1_648; int32x2_t __ret_648; __ret_648 = __s0_648 * splat_laneq_s32(__s1_648, __p2_648); __ret_648; })
#define vmul_laneq_u16(__p0_644,__p1_644,__p2_644) __extension__ ({ uint16x4_t __s0_644 = __p0_644; uint16x8_t __s1_644 = __p1_644; uint16x4_t __ret_644; __ret_644 = __s0_644 * splat_laneq_u16(__s1_644, __p2_644); __ret_644; })
#define vmul_laneq_u32(__p0_642,__p1_642,__p2_642) __extension__ ({ uint32x2_t __s0_642 = __p0_642; uint32x4_t __s1_642 = __p1_642; uint32x2_t __ret_642; __ret_642 = __s0_642 * splat_laneq_u32(__s1_642, __p2_642); __ret_642; })
#define vmul_n_f16(__p0,__p1) __extension__ ({ float16x4_t __s0 = __p0; float16_t __s1 = __p1; float16x4_t __ret; __ret = __s0 * (float16x4_t) {__s1, __s1, __s1, __s1}; __ret; })
#define vmuld_lane_f64(__p0_621,__p1_621,__p2_621) __extension__ ({ float64_t __s0_621 = __p0_621; float64x1_t __s1_621 = __p1_621; float64_t __ret_621; __ret_621 = __s0_621 * vget_lane_f64(__s1_621, __p2_621); __ret_621; })
#define vmuld_laneq_f64(__p0_626,__p1_626,__p2_626) __extension__ ({ float64_t __s0_626 = __p0_626; float64x2_t __s1_626 = __p1_626; float64_t __ret_626; __ret_626 = __s0_626 * vgetq_lane_f64(__s1_626, __p2_626); __ret_626; })
#define vmulh_lane_f16(__p0_901,__p1_901,__p2_901) __extension__ ({ float16_t __s0_901 = __p0_901; float16x4_t __s1_901 = __p1_901; float16_t __ret_901; __ret_901 = __s0_901 * vget_lane_f16(__s1_901, __p2_901); __ret_901; })
#define vmulh_laneq_f16(__p0_903,__p1_903,__p2_903) __extension__ ({ float16_t __s0_903 = __p0_903; float16x8_t __s1_903 = __p1_903; float16_t __ret_903; __ret_903 = __s0_903 * vgetq_lane_f16(__s1_903, __p2_903); __ret_903; })
#define vmull_high_lane_s16(__p0_658,__p1_658,__p2_658) __extension__ ({ int16x8_t __s0_658 = __p0_658; int16x4_t __s1_658 = __p1_658; int32x4_t __ret_658; __ret_658 = vmull_s16(vget_high_s16(__s0_658), splat_lane_s16(__s1_658, __p2_658)); __ret_658; })
#define vmull_high_lane_s32(__p0_656,__p1_656,__p2_656) __extension__ ({ int32x4_t __s0_656 = __p0_656; int32x2_t __s1_656 = __p1_656; int64x2_t __ret_656; __ret_656 = vmull_s32(vget_high_s32(__s0_656), splat_lane_s32(__s1_656, __p2_656)); __ret_656; })
#define vmull_high_lane_u16(__p0_654,__p1_654,__p2_654) __extension__ ({ uint16x8_t __s0_654 = __p0_654; uint16x4_t __s1_654 = __p1_654; uint32x4_t __ret_654; __ret_654 = vmull_u16(vget_high_u16(__s0_654), splat_lane_u16(__s1_654, __p2_654)); __ret_654; })
#define vmull_high_lane_u32(__p0_652,__p1_652,__p2_652) __extension__ ({ uint32x4_t __s0_652 = __p0_652; uint32x2_t __s1_652 = __p1_652; uint64x2_t __ret_652; __ret_652 = vmull_u32(vget_high_u32(__s0_652), splat_lane_u32(__s1_652, __p2_652)); __ret_652; })
#define vmull_high_laneq_s16(__p0_666,__p1_666,__p2_666) __extension__ ({ int16x8_t __s0_666 = __p0_666; int16x8_t __s1_666 = __p1_666; int32x4_t __ret_666; __ret_666 = vmull_s16(vget_high_s16(__s0_666), splat_laneq_s16(__s1_666, __p2_666)); __ret_666; })
#define vmull_high_laneq_s32(__p0_664,__p1_664,__p2_664) __extension__ ({ int32x4_t __s0_664 = __p0_664; int32x4_t __s1_664 = __p1_664; int64x2_t __ret_664; __ret_664 = vmull_s32(vget_high_s32(__s0_664), splat_laneq_s32(__s1_664, __p2_664)); __ret_664; })
#define vmull_high_laneq_u16(__p0_662,__p1_662,__p2_662) __extension__ ({ uint16x8_t __s0_662 = __p0_662; uint16x8_t __s1_662 = __p1_662; uint32x4_t __ret_662; __ret_662 = vmull_u16(vget_high_u16(__s0_662), splat_laneq_u16(__s1_662, __p2_662)); __ret_662; })
#define vmull_high_laneq_u32(__p0_660,__p1_660,__p2_660) __extension__ ({ uint32x4_t __s0_660 = __p0_660; uint32x4_t __s1_660 = __p1_660; uint64x2_t __ret_660; __ret_660 = vmull_u32(vget_high_u32(__s0_660), splat_laneq_u32(__s1_660, __p2_660)); __ret_660; })
#define vmull_lane_s16(__p0_108,__p1_108,__p2_108) __extension__ ({ int16x4_t __s0_108 = __p0_108; int16x4_t __s1_108 = __p1_108; int32x4_t __ret_108; __ret_108 = vmull_s16(__s0_108, splat_lane_s16(__s1_108, __p2_108)); __ret_108; })
#define vmull_lane_s32(__p0_106,__p1_106,__p2_106) __extension__ ({ int32x2_t __s0_106 = __p0_106; int32x2_t __s1_106 = __p1_106; int64x2_t __ret_106; __ret_106 = vmull_s32(__s0_106, splat_lane_s32(__s1_106, __p2_106)); __ret_106; })
#define vmull_lane_u16(__p0_104,__p1_104,__p2_104) __extension__ ({ uint16x4_t __s0_104 = __p0_104; uint16x4_t __s1_104 = __p1_104; uint32x4_t __ret_104; __ret_104 = vmull_u16(__s0_104, splat_lane_u16(__s1_104, __p2_104)); __ret_104; })
#define vmull_lane_u32(__p0_102,__p1_102,__p2_102) __extension__ ({ uint32x2_t __s0_102 = __p0_102; uint32x2_t __s1_102 = __p1_102; uint64x2_t __ret_102; __ret_102 = vmull_u32(__s0_102, splat_lane_u32(__s1_102, __p2_102)); __ret_102; })
#define vmull_laneq_s16(__p0_674,__p1_674,__p2_674) __extension__ ({ int16x4_t __s0_674 = __p0_674; int16x8_t __s1_674 = __p1_674; int32x4_t __ret_674; __ret_674 = vmull_s16(__s0_674, splat_laneq_s16(__s1_674, __p2_674)); __ret_674; })
#define vmull_laneq_s32(__p0_672,__p1_672,__p2_672) __extension__ ({ int32x2_t __s0_672 = __p0_672; int32x4_t __s1_672 = __p1_672; int64x2_t __ret_672; __ret_672 = vmull_s32(__s0_672, splat_laneq_s32(__s1_672, __p2_672)); __ret_672; })
#define vmull_laneq_u16(__p0_670,__p1_670,__p2_670) __extension__ ({ uint16x4_t __s0_670 = __p0_670; uint16x8_t __s1_670 = __p1_670; uint32x4_t __ret_670; __ret_670 = vmull_u16(__s0_670, splat_laneq_u16(__s1_670, __p2_670)); __ret_670; })
#define vmull_laneq_u32(__p0_668,__p1_668,__p2_668) __extension__ ({ uint32x2_t __s0_668 = __p0_668; uint32x4_t __s1_668 = __p1_668; uint64x2_t __ret_668; __ret_668 = vmull_u32(__s0_668, splat_laneq_u32(__s1_668, __p2_668)); __ret_668; })
#define vmulq_lane_f16(__p0_277,__p1_277,__p2_277) __extension__ ({ float16x8_t __s0_277 = __p0_277; float16x4_t __s1_277 = __p1_277; float16x8_t __ret_277; __ret_277 = __s0_277 * splatq_lane_f16(__s1_277, __p2_277); __ret_277; })
#define vmulq_lane_f32(__p0_86,__p1_86,__p2_86) __extension__ ({ float32x4_t __s0_86 = __p0_86; float32x2_t __s1_86 = __p1_86; float32x4_t __ret_86; __ret_86 = __s0_86 * splatq_lane_f32(__s1_86, __p2_86); __ret_86; })
#define vmulq_lane_f64(__p0_624,__p1_624,__p2_624) __extension__ ({ float64x2_t __s0_624 = __p0_624; float64x1_t __s1_624 = __p1_624; float64x2_t __ret_624; __ret_624 = __s0_624 * splatq_lane_f64(__s1_624, __p2_624); __ret_624; })
#define vmulq_lane_s16(__p0_90,__p1_90,__p2_90) __extension__ ({ int16x8_t __s0_90 = __p0_90; int16x4_t __s1_90 = __p1_90; int16x8_t __ret_90; __ret_90 = __s0_90 * splatq_lane_s16(__s1_90, __p2_90); __ret_90; })
#define vmulq_lane_s32(__p0_88,__p1_88,__p2_88) __extension__ ({ int32x4_t __s0_88 = __p0_88; int32x2_t __s1_88 = __p1_88; int32x4_t __ret_88; __ret_88 = __s0_88 * splatq_lane_s32(__s1_88, __p2_88); __ret_88; })
#define vmulq_lane_u16(__p0_84,__p1_84,__p2_84) __extension__ ({ uint16x8_t __s0_84 = __p0_84; uint16x4_t __s1_84 = __p1_84; uint16x8_t __ret_84; __ret_84 = __s0_84 * splatq_lane_u16(__s1_84, __p2_84); __ret_84; })
#define vmulq_lane_u32(__p0_82,__p1_82,__p2_82) __extension__ ({ uint32x4_t __s0_82 = __p0_82; uint32x2_t __s1_82 = __p1_82; uint32x4_t __ret_82; __ret_82 = __s0_82 * splatq_lane_u32(__s1_82, __p2_82); __ret_82; })
#define vmulq_laneq_f16(__p0_293,__p1_293,__p2_293) __extension__ ({ float16x8_t __s0_293 = __p0_293; float16x8_t __s1_293 = __p1_293; float16x8_t __ret_293; __ret_293 = __s0_293 * splatq_laneq_f16(__s1_293, __p2_293); __ret_293; })
#define vmulq_laneq_f32(__p0_636,__p1_636,__p2_636) __extension__ ({ float32x4_t __s0_636 = __p0_636; float32x4_t __s1_636 = __p1_636; float32x4_t __ret_636; __ret_636 = __s0_636 * splatq_laneq_f32(__s1_636, __p2_636); __ret_636; })
#define vmulq_laneq_f64(__p0_634,__p1_634,__p2_634) __extension__ ({ float64x2_t __s0_634 = __p0_634; float64x2_t __s1_634 = __p1_634; float64x2_t __ret_634; __ret_634 = __s0_634 * splatq_laneq_f64(__s1_634, __p2_634); __ret_634; })
#define vmulq_laneq_s16(__p0_640,__p1_640,__p2_640) __extension__ ({ int16x8_t __s0_640 = __p0_640; int16x8_t __s1_640 = __p1_640; int16x8_t __ret_640; __ret_640 = __s0_640 * splatq_laneq_s16(__s1_640, __p2_640); __ret_640; })
#define vmulq_laneq_s32(__p0_638,__p1_638,__p2_638) __extension__ ({ int32x4_t __s0_638 = __p0_638; int32x4_t __s1_638 = __p1_638; int32x4_t __ret_638; __ret_638 = __s0_638 * splatq_laneq_s32(__s1_638, __p2_638); __ret_638; })
#define vmulq_laneq_u16(__p0_632,__p1_632,__p2_632) __extension__ ({ uint16x8_t __s0_632 = __p0_632; uint16x8_t __s1_632 = __p1_632; uint16x8_t __ret_632; __ret_632 = __s0_632 * splatq_laneq_u16(__s1_632, __p2_632); __ret_632; })
#define vmulq_laneq_u32(__p0_630,__p1_630,__p2_630) __extension__ ({ uint32x4_t __s0_630 = __p0_630; uint32x4_t __s1_630 = __p1_630; uint32x4_t __ret_630; __ret_630 = __s0_630 * splatq_laneq_u32(__s1_630, __p2_630); __ret_630; })
#define vmulq_n_f16(__p0,__p1) __extension__ ({ float16x8_t __s0 = __p0; float16_t __s1 = __p1; float16x8_t __ret; __ret = __s0 * (float16x8_t) {__s1, __s1, __s1, __s1, __s1, __s1, __s1, __s1}; __ret; })
#define vmuls_lane_f32(__p0_622,__p1_622,__p2_622) __extension__ ({ float32_t __s0_622 = __p0_622; float32x2_t __s1_622 = __p1_622; float32_t __ret_622; __ret_622 = __s0_622 * vget_lane_f32(__s1_622, __p2_622); __ret_622; })
#define vmuls_laneq_f32(__p0_628,__p1_628,__p2_628) __extension__ ({ float32_t __s0_628 = __p0_628; float32x4_t __s1_628 = __p1_628; float32_t __ret_628; __ret_628 = __s0_628 * vgetq_lane_f32(__s1_628, __p2_628); __ret_628; })
#define vmulx_lane_f16(__p0_299,__p1_299,__p2_299) __extension__ ({ float16x4_t __s0_299 = __p0_299; float16x4_t __s1_299 = __p1_299; float16x4_t __ret_299; __ret_299 = vmulx_f16(__s0_299, splat_lane_f16(__s1_299, __p2_299)); __ret_299; })
#define vmulx_lane_f32(__p0_683,__p1_683,__p2_683) __extension__ ({ float32x2_t __s0_683 = __p0_683; float32x2_t __s1_683 = __p1_683; float32x2_t __ret_683; __ret_683 = vmulx_f32(__s0_683, splat_lane_f32(__s1_683, __p2_683)); __ret_683; })
#define vmulx_lane_f64(__p0_939,__p1_939,__p2_939) __extension__ ({ float64x1_t __s0_939 = __p0_939; float64x1_t __s1_939 = __p1_939; float64x1_t __ret_939; float64_t __x_939 = vget_lane_f64(__s0_939, 0); float64_t __y_939 = vget_lane_f64(__s1_939, __p2_939); float64_t __z_939 = vmulxd_f64(__x_939, __y_939); __ret_939 = vset_lane_f64(__z_939, __s0_939, __p2_939); __ret_939; })
#define vmulx_laneq_f16(__p0_303,__p1_303,__p2_303) __extension__ ({ float16x4_t __s0_303 = __p0_303; float16x8_t __s1_303 = __p1_303; float16x4_t __ret_303; __ret_303 = vmulx_f16(__s0_303, splat_laneq_f16(__s1_303, __p2_303)); __ret_303; })
#define vmulx_laneq_f32(__p0_693,__p1_693,__p2_693) __extension__ ({ float32x2_t __s0_693 = __p0_693; float32x4_t __s1_693 = __p1_693; float32x2_t __ret_693; __ret_693 = vmulx_f32(__s0_693, splat_laneq_f32(__s1_693, __p2_693)); __ret_693; })
#define vmulx_laneq_f64(__p0_940,__p1_940,__p2_940) __extension__ ({ float64x1_t __s0_940 = __p0_940; float64x2_t __s1_940 = __p1_940; float64x1_t __ret_940; float64_t __x_940 = vget_lane_f64(__s0_940, 0); float64_t __y_940 = vgetq_lane_f64(__s1_940, __p2_940); float64_t __z_940 = vmulxd_f64(__x_940, __y_940); __ret_940 = vset_lane_f64(__z_940, __s0_940, 0); __ret_940; })
#define vmulx_n_f16(__p0,__p1) __extension__ ({ float16x4_t __s0 = __p0; float16_t __s1 = __p1; float16x4_t __ret; __ret = vmulx_f16(__s0, (float16x4_t) {__s1, __s1, __s1, __s1}); __ret; })
#define vmulxd_lane_f64(__p0_676,__p1_676,__p2_676) __extension__ ({ float64_t __s0_676 = __p0_676; float64x1_t __s1_676 = __p1_676; float64_t __ret_676; __ret_676 = vmulxd_f64(__s0_676, vget_lane_f64(__s1_676, __p2_676)); __ret_676; })
#define vmulxd_laneq_f64(__p0_685,__p1_685,__p2_685) __extension__ ({ float64_t __s0_685 = __p0_685; float64x2_t __s1_685 = __p1_685; float64_t __ret_685; __ret_685 = vmulxd_f64(__s0_685, vgetq_lane_f64(__s1_685, __p2_685)); __ret_685; })
#define vmulxh_lane_f16(__p0,__p1,__p2) __extension__ ({ float16_t __s0 = __p0; float16x4_t __s1 = __p1; float16_t __ret; __ret = (float16_t) __builtin_neon_vmulxh_lane_f16(__s0, (float16x4_t)__s1, __p2); __ret; })
#define vmulxh_laneq_f16(__p0,__p1,__p2) __extension__ ({ float16_t __s0 = __p0; float16x8_t __s1 = __p1; float16_t __ret; __ret = (float16_t) __builtin_neon_vmulxh_laneq_f16(__s0, (float16x8_t)__s1, __p2); __ret; })
#define vmulxq_lane_f16(__p0_297,__p1_297,__p2_297) __extension__ ({ float16x8_t __s0_297 = __p0_297; float16x4_t __s1_297 = __p1_297; float16x8_t __ret_297; __ret_297 = vmulxq_f16(__s0_297, splatq_lane_f16(__s1_297, __p2_297)); __ret_297; })
#define vmulxq_lane_f32(__p0_681,__p1_681,__p2_681) __extension__ ({ float32x4_t __s0_681 = __p0_681; float32x2_t __s1_681 = __p1_681; float32x4_t __ret_681; __ret_681 = vmulxq_f32(__s0_681, splatq_lane_f32(__s1_681, __p2_681)); __ret_681; })
#define vmulxq_lane_f64(__p0_679,__p1_679,__p2_679) __extension__ ({ float64x2_t __s0_679 = __p0_679; float64x1_t __s1_679 = __p1_679; float64x2_t __ret_679; __ret_679 = vmulxq_f64(__s0_679, splatq_lane_f64(__s1_679, __p2_679)); __ret_679; })
#define vmulxq_laneq_f16(__p0_301,__p1_301,__p2_301) __extension__ ({ float16x8_t __s0_301 = __p0_301; float16x8_t __s1_301 = __p1_301; float16x8_t __ret_301; __ret_301 = vmulxq_f16(__s0_301, splatq_laneq_f16(__s1_301, __p2_301)); __ret_301; })
#define vmulxq_laneq_f32(__p0_691,__p1_691,__p2_691) __extension__ ({ float32x4_t __s0_691 = __p0_691; float32x4_t __s1_691 = __p1_691; float32x4_t __ret_691; __ret_691 = vmulxq_f32(__s0_691, splatq_laneq_f32(__s1_691, __p2_691)); __ret_691; })
#define vmulxq_laneq_f64(__p0_689,__p1_689,__p2_689) __extension__ ({ float64x2_t __s0_689 = __p0_689; float64x2_t __s1_689 = __p1_689; float64x2_t __ret_689; __ret_689 = vmulxq_f64(__s0_689, splatq_laneq_f64(__s1_689, __p2_689)); __ret_689; })
#define vmulxq_n_f16(__p0,__p1) __extension__ ({ float16x8_t __s0 = __p0; float16_t __s1 = __p1; float16x8_t __ret; __ret = vmulxq_f16(__s0, (float16x8_t) {__s1, __s1, __s1, __s1, __s1, __s1, __s1, __s1}); __ret; })
#define vmulxs_lane_f32(__p0_677,__p1_677,__p2_677) __extension__ ({ float32_t __s0_677 = __p0_677; float32x2_t __s1_677 = __p1_677; float32_t __ret_677; __ret_677 = vmulxs_f32(__s0_677, vget_lane_f32(__s1_677, __p2_677)); __ret_677; })
#define vmulxs_laneq_f32(__p0_687,__p1_687,__p2_687) __extension__ ({ float32_t __s0_687 = __p0_687; float32x4_t __s1_687 = __p1_687; float32_t __ret_687; __ret_687 = vmulxs_f32(__s0_687, vgetq_lane_f32(__s1_687, __p2_687)); __ret_687; })
#define vqdmlal_high_lane_s16(__p0_697,__p1_697,__p2_697,__p3_697) __extension__ ({ int32x4_t __s0_697 = __p0_697; int16x8_t __s1_697 = __p1_697; int16x4_t __s2_697 = __p2_697; int32x4_t __ret_697; __ret_697 = vqdmlal_s16(__s0_697, vget_high_s16(__s1_697), splat_lane_s16(__s2_697, __p3_697)); __ret_697; })
#define vqdmlal_high_lane_s32(__p0_695,__p1_695,__p2_695,__p3_695) __extension__ ({ int64x2_t __s0_695 = __p0_695; int32x4_t __s1_695 = __p1_695; int32x2_t __s2_695 = __p2_695; int64x2_t __ret_695; __ret_695 = vqdmlal_s32(__s0_695, vget_high_s32(__s1_695), splat_lane_s32(__s2_695, __p3_695)); __ret_695; })
#define vqdmlal_high_laneq_s16(__p0_701,__p1_701,__p2_701,__p3_701) __extension__ ({ int32x4_t __s0_701 = __p0_701; int16x8_t __s1_701 = __p1_701; int16x8_t __s2_701 = __p2_701; int32x4_t __ret_701; __ret_701 = vqdmlal_s16(__s0_701, vget_high_s16(__s1_701), splat_laneq_s16(__s2_701, __p3_701)); __ret_701; })
#define vqdmlal_high_laneq_s32(__p0_699,__p1_699,__p2_699,__p3_699) __extension__ ({ int64x2_t __s0_699 = __p0_699; int32x4_t __s1_699 = __p1_699; int32x4_t __s2_699 = __p2_699; int64x2_t __ret_699; __ret_699 = vqdmlal_s32(__s0_699, vget_high_s32(__s1_699), splat_laneq_s32(__s2_699, __p3_699)); __ret_699; })
#define vqdmlal_lane_s16(__p0_112,__p1_112,__p2_112,__p3_112) __extension__ ({ int32x4_t __s0_112 = __p0_112; int16x4_t __s1_112 = __p1_112; int16x4_t __s2_112 = __p2_112; int32x4_t __ret_112; __ret_112 = vqdmlal_s16(__s0_112, __s1_112, splat_lane_s16(__s2_112, __p3_112)); __ret_112; })
#define vqdmlal_lane_s32(__p0_110,__p1_110,__p2_110,__p3_110) __extension__ ({ int64x2_t __s0_110 = __p0_110; int32x2_t __s1_110 = __p1_110; int32x2_t __s2_110 = __p2_110; int64x2_t __ret_110; __ret_110 = vqdmlal_s32(__s0_110, __s1_110, splat_lane_s32(__s2_110, __p3_110)); __ret_110; })
#define vqdmlal_laneq_s16(__p0_705,__p1_705,__p2_705,__p3_705) __extension__ ({ int32x4_t __s0_705 = __p0_705; int16x4_t __s1_705 = __p1_705; int16x8_t __s2_705 = __p2_705; int32x4_t __ret_705; __ret_705 = vqdmlal_s16(__s0_705, __s1_705, splat_laneq_s16(__s2_705, __p3_705)); __ret_705; })
#define vqdmlal_laneq_s32(__p0_703,__p1_703,__p2_703,__p3_703) __extension__ ({ int64x2_t __s0_703 = __p0_703; int32x2_t __s1_703 = __p1_703; int32x4_t __s2_703 = __p2_703; int64x2_t __ret_703; __ret_703 = vqdmlal_s32(__s0_703, __s1_703, splat_laneq_s32(__s2_703, __p3_703)); __ret_703; })
#define vqdmlalh_lane_s16(__p0,__p1,__p2,__p3) __extension__ ({ int32_t __s0 = __p0; int16_t __s1 = __p1; int16x4_t __s2 = __p2; int32_t __ret; __ret = (int32_t) __builtin_neon_vqdmlalh_lane_s16(__s0, __s1, __s2, __p3); __ret; })
#define vqdmlalh_laneq_s16(__p0,__p1,__p2,__p3) __extension__ ({ int32_t __s0 = __p0; int16_t __s1 = __p1; int16x8_t __s2 = __p2; int32_t __ret; __ret = (int32_t) __builtin_neon_vqdmlalh_laneq_s16(__s0, __s1, __s2, __p3); __ret; })
#define vqdmlals_lane_s32(__p0,__p1,__p2,__p3) __extension__ ({ int64_t __s0 = __p0; int32_t __s1 = __p1; int32x2_t __s2 = __p2; int64_t __ret; __ret = (int64_t) __builtin_neon_vqdmlals_lane_s32(__s0, __s1, __s2, __p3); __ret; })
#define vqdmlals_laneq_s32(__p0,__p1,__p2,__p3) __extension__ ({ int64_t __s0 = __p0; int32_t __s1 = __p1; int32x4_t __s2 = __p2; int64_t __ret; __ret = (int64_t) __builtin_neon_vqdmlals_laneq_s32(__s0, __s1, __s2, __p3); __ret; })
#define vqdmlsl_high_lane_s16(__p0_709,__p1_709,__p2_709,__p3_709) __extension__ ({ int32x4_t __s0_709 = __p0_709; int16x8_t __s1_709 = __p1_709; int16x4_t __s2_709 = __p2_709; int32x4_t __ret_709; __ret_709 = vqdmlsl_s16(__s0_709, vget_high_s16(__s1_709), splat_lane_s16(__s2_709, __p3_709)); __ret_709; })
#define vqdmlsl_high_lane_s32(__p0_707,__p1_707,__p2_707,__p3_707) __extension__ ({ int64x2_t __s0_707 = __p0_707; int32x4_t __s1_707 = __p1_707; int32x2_t __s2_707 = __p2_707; int64x2_t __ret_707; __ret_707 = vqdmlsl_s32(__s0_707, vget_high_s32(__s1_707), splat_lane_s32(__s2_707, __p3_707)); __ret_707; })
#define vqdmlsl_high_laneq_s16(__p0_713,__p1_713,__p2_713,__p3_713) __extension__ ({ int32x4_t __s0_713 = __p0_713; int16x8_t __s1_713 = __p1_713; int16x8_t __s2_713 = __p2_713; int32x4_t __ret_713; __ret_713 = vqdmlsl_s16(__s0_713, vget_high_s16(__s1_713), splat_laneq_s16(__s2_713, __p3_713)); __ret_713; })
#define vqdmlsl_high_laneq_s32(__p0_711,__p1_711,__p2_711,__p3_711) __extension__ ({ int64x2_t __s0_711 = __p0_711; int32x4_t __s1_711 = __p1_711; int32x4_t __s2_711 = __p2_711; int64x2_t __ret_711; __ret_711 = vqdmlsl_s32(__s0_711, vget_high_s32(__s1_711), splat_laneq_s32(__s2_711, __p3_711)); __ret_711; })
#define vqdmlsl_lane_s16(__p0_116,__p1_116,__p2_116,__p3_116) __extension__ ({ int32x4_t __s0_116 = __p0_116; int16x4_t __s1_116 = __p1_116; int16x4_t __s2_116 = __p2_116; int32x4_t __ret_116; __ret_116 = vqdmlsl_s16(__s0_116, __s1_116, splat_lane_s16(__s2_116, __p3_116)); __ret_116; })
#define vqdmlsl_lane_s32(__p0_114,__p1_114,__p2_114,__p3_114) __extension__ ({ int64x2_t __s0_114 = __p0_114; int32x2_t __s1_114 = __p1_114; int32x2_t __s2_114 = __p2_114; int64x2_t __ret_114; __ret_114 = vqdmlsl_s32(__s0_114, __s1_114, splat_lane_s32(__s2_114, __p3_114)); __ret_114; })
#define vqdmlsl_laneq_s16(__p0_717,__p1_717,__p2_717,__p3_717) __extension__ ({ int32x4_t __s0_717 = __p0_717; int16x4_t __s1_717 = __p1_717; int16x8_t __s2_717 = __p2_717; int32x4_t __ret_717; __ret_717 = vqdmlsl_s16(__s0_717, __s1_717, splat_laneq_s16(__s2_717, __p3_717)); __ret_717; })
#define vqdmlsl_laneq_s32(__p0_715,__p1_715,__p2_715,__p3_715) __extension__ ({ int64x2_t __s0_715 = __p0_715; int32x2_t __s1_715 = __p1_715; int32x4_t __s2_715 = __p2_715; int64x2_t __ret_715; __ret_715 = vqdmlsl_s32(__s0_715, __s1_715, splat_laneq_s32(__s2_715, __p3_715)); __ret_715; })
#define vqdmlslh_lane_s16(__p0,__p1,__p2,__p3) __extension__ ({ int32_t __s0 = __p0; int16_t __s1 = __p1; int16x4_t __s2 = __p2; int32_t __ret; __ret = (int32_t) __builtin_neon_vqdmlslh_lane_s16(__s0, __s1, __s2, __p3); __ret; })
#define vqdmlslh_laneq_s16(__p0,__p1,__p2,__p3) __extension__ ({ int32_t __s0 = __p0; int16_t __s1 = __p1; int16x8_t __s2 = __p2; int32_t __ret; __ret = (int32_t) __builtin_neon_vqdmlslh_laneq_s16(__s0, __s1, __s2, __p3); __ret; })
#define vqdmlsls_lane_s32(__p0,__p1,__p2,__p3) __extension__ ({ int64_t __s0 = __p0; int32_t __s1 = __p1; int32x2_t __s2 = __p2; int64_t __ret; __ret = (int64_t) __builtin_neon_vqdmlsls_lane_s32(__s0, __s1, __s2, __p3); __ret; })
#define vqdmlsls_laneq_s32(__p0,__p1,__p2,__p3) __extension__ ({ int64_t __s0 = __p0; int32_t __s1 = __p1; int32x4_t __s2 = __p2; int64_t __ret; __ret = (int64_t) __builtin_neon_vqdmlsls_laneq_s32(__s0, __s1, __s2, __p3); __ret; })
#define vqdmulh_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vqdmulh_lane_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vqdmulh_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vqdmulh_lane_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vqdmulh_laneq_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s0 = __p0; int16x8_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vqdmulh_laneq_v((int8x8_t)__s0, (int8x16_t)__s1, __p2, 1); __ret; })
#define vqdmulh_laneq_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s0 = __p0; int32x4_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vqdmulh_laneq_v((int8x8_t)__s0, (int8x16_t)__s1, __p2, 2); __ret; })
#define vqdmulhh_lane_s16(__p0_721,__p1_721,__p2_721) __extension__ ({ int16_t __s0_721 = __p0_721; int16x4_t __s1_721 = __p1_721; int16_t __ret_721; __ret_721 = vqdmulhh_s16(__s0_721, vget_lane_s16(__s1_721, __p2_721)); __ret_721; })
#define vqdmulhh_laneq_s16(__p0_725,__p1_725,__p2_725) __extension__ ({ int16_t __s0_725 = __p0_725; int16x8_t __s1_725 = __p1_725; int16_t __ret_725; __ret_725 = vqdmulhh_s16(__s0_725, vgetq_lane_s16(__s1_725, __p2_725)); __ret_725; })
#define vqdmulhq_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s0 = __p0; int16x4_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vqdmulhq_lane_v((int8x16_t)__s0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vqdmulhq_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s0 = __p0; int32x2_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vqdmulhq_lane_v((int8x16_t)__s0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vqdmulhq_laneq_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vqdmulhq_laneq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); __ret; })
#define vqdmulhq_laneq_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vqdmulhq_laneq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); __ret; })
#define vqdmulhs_lane_s32(__p0_719,__p1_719,__p2_719) __extension__ ({ int32_t __s0_719 = __p0_719; int32x2_t __s1_719 = __p1_719; int32_t __ret_719; __ret_719 = vqdmulhs_s32(__s0_719, vget_lane_s32(__s1_719, __p2_719)); __ret_719; })
#define vqdmulhs_laneq_s32(__p0_723,__p1_723,__p2_723) __extension__ ({ int32_t __s0_723 = __p0_723; int32x4_t __s1_723 = __p1_723; int32_t __ret_723; __ret_723 = vqdmulhs_s32(__s0_723, vgetq_lane_s32(__s1_723, __p2_723)); __ret_723; })
#define vqdmull_high_lane_s16(__p0_729,__p1_729,__p2_729) __extension__ ({ int16x8_t __s0_729 = __p0_729; int16x4_t __s1_729 = __p1_729; int32x4_t __ret_729; __ret_729 = vqdmull_s16(vget_high_s16(__s0_729), splat_lane_s16(__s1_729, __p2_729)); __ret_729; })
#define vqdmull_high_lane_s32(__p0_727,__p1_727,__p2_727) __extension__ ({ int32x4_t __s0_727 = __p0_727; int32x2_t __s1_727 = __p1_727; int64x2_t __ret_727; __ret_727 = vqdmull_s32(vget_high_s32(__s0_727), splat_lane_s32(__s1_727, __p2_727)); __ret_727; })
#define vqdmull_high_laneq_s16(__p0_733,__p1_733,__p2_733) __extension__ ({ int16x8_t __s0_733 = __p0_733; int16x8_t __s1_733 = __p1_733; int32x4_t __ret_733; __ret_733 = vqdmull_s16(vget_high_s16(__s0_733), splat_laneq_s16(__s1_733, __p2_733)); __ret_733; })
#define vqdmull_high_laneq_s32(__p0_731,__p1_731,__p2_731) __extension__ ({ int32x4_t __s0_731 = __p0_731; int32x4_t __s1_731 = __p1_731; int64x2_t __ret_731; __ret_731 = vqdmull_s32(vget_high_s32(__s0_731), splat_laneq_s32(__s1_731, __p2_731)); __ret_731; })
#define vqdmull_lane_s16(__p0_120,__p1_120,__p2_120) __extension__ ({ int16x4_t __s0_120 = __p0_120; int16x4_t __s1_120 = __p1_120; int32x4_t __ret_120; __ret_120 = vqdmull_s16(__s0_120, splat_lane_s16(__s1_120, __p2_120)); __ret_120; })
#define vqdmull_lane_s32(__p0_118,__p1_118,__p2_118) __extension__ ({ int32x2_t __s0_118 = __p0_118; int32x2_t __s1_118 = __p1_118; int64x2_t __ret_118; __ret_118 = vqdmull_s32(__s0_118, splat_lane_s32(__s1_118, __p2_118)); __ret_118; })
#define vqdmull_laneq_s16(__p0_745,__p1_745,__p2_745) __extension__ ({ int16x4_t __s0_745 = __p0_745; int16x8_t __s1_745 = __p1_745; int32x4_t __ret_745; __ret_745 = vqdmull_s16(__s0_745, splat_laneq_s16(__s1_745, __p2_745)); __ret_745; })
#define vqdmull_laneq_s32(__p0_743,__p1_743,__p2_743) __extension__ ({ int32x2_t __s0_743 = __p0_743; int32x4_t __s1_743 = __p1_743; int64x2_t __ret_743; __ret_743 = vqdmull_s32(__s0_743, splat_laneq_s32(__s1_743, __p2_743)); __ret_743; })
#define vqdmullh_lane_s16(__p0_737,__p1_737,__p2_737) __extension__ ({ int16_t __s0_737 = __p0_737; int16x4_t __s1_737 = __p1_737; int32_t __ret_737; __ret_737 = vqdmullh_s16(__s0_737, vget_lane_s16(__s1_737, __p2_737)); __ret_737; })
#define vqdmullh_laneq_s16(__p0_741,__p1_741,__p2_741) __extension__ ({ int16_t __s0_741 = __p0_741; int16x8_t __s1_741 = __p1_741; int32_t __ret_741; __ret_741 = vqdmullh_s16(__s0_741, vgetq_lane_s16(__s1_741, __p2_741)); __ret_741; })
#define vqdmulls_lane_s32(__p0_735,__p1_735,__p2_735) __extension__ ({ int32_t __s0_735 = __p0_735; int32x2_t __s1_735 = __p1_735; int64_t __ret_735; __ret_735 = vqdmulls_s32(__s0_735, vget_lane_s32(__s1_735, __p2_735)); __ret_735; })
#define vqdmulls_laneq_s32(__p0_739,__p1_739,__p2_739) __extension__ ({ int32_t __s0_739 = __p0_739; int32x4_t __s1_739 = __p1_739; int64_t __ret_739; __ret_739 = vqdmulls_s32(__s0_739, vgetq_lane_s32(__s1_739, __p2_739)); __ret_739; })
#define vqrdmlah_lane_s16(__p0_315,__p1_315,__p2_315,__p3_315) __extension__ ({ int16x4_t __s0_315 = __p0_315; int16x4_t __s1_315 = __p1_315; int16x4_t __s2_315 = __p2_315; int16x4_t __ret_315; __ret_315 = vqadd_s16(__s0_315, vqrdmulh_s16(__s1_315, splat_lane_s16(__s2_315, __p3_315))); __ret_315; })
#define vqrdmlah_lane_s32(__p0_313,__p1_313,__p2_313,__p3_313) __extension__ ({ int32x2_t __s0_313 = __p0_313; int32x2_t __s1_313 = __p1_313; int32x2_t __s2_313 = __p2_313; int32x2_t __ret_313; __ret_313 = vqadd_s32(__s0_313, vqrdmulh_s32(__s1_313, splat_lane_s32(__s2_313, __p3_313))); __ret_313; })
#define vqrdmlah_laneq_s16(__p0_331,__p1_331,__p2_331,__p3_331) __extension__ ({ int16x4_t __s0_331 = __p0_331; int16x4_t __s1_331 = __p1_331; int16x8_t __s2_331 = __p2_331; int16x4_t __ret_331; __ret_331 = vqadd_s16(__s0_331, vqrdmulh_s16(__s1_331, splat_laneq_s16(__s2_331, __p3_331))); __ret_331; })
#define vqrdmlah_laneq_s32(__p0_329,__p1_329,__p2_329,__p3_329) __extension__ ({ int32x2_t __s0_329 = __p0_329; int32x2_t __s1_329 = __p1_329; int32x4_t __s2_329 = __p2_329; int32x2_t __ret_329; __ret_329 = vqadd_s32(__s0_329, vqrdmulh_s32(__s1_329, splat_laneq_s32(__s2_329, __p3_329))); __ret_329; })
#define vqrdmlahh_lane_s16(__p0_911,__p1_911,__p2_911,__p3_911) __extension__ ({ int16_t __s0_911 = __p0_911; int16_t __s1_911 = __p1_911; int16x4_t __s2_911 = __p2_911; int16_t __ret_911; __ret_911 = vqaddh_s16(__s0_911, vqrdmulhh_s16(__s1_911, vget_lane_s16(__s2_911, __p3_911))); __ret_911; })
#define vqrdmlahh_laneq_s16(__p0_915,__p1_915,__p2_915,__p3_915) __extension__ ({ int16_t __s0_915 = __p0_915; int16_t __s1_915 = __p1_915; int16x8_t __s2_915 = __p2_915; int16_t __ret_915; __ret_915 = vqaddh_s16(__s0_915, vqrdmulhh_s16(__s1_915, vgetq_lane_s16(__s2_915, __p3_915))); __ret_915; })
#define vqrdmlahq_lane_s16(__p0_311,__p1_311,__p2_311,__p3_311) __extension__ ({ int16x8_t __s0_311 = __p0_311; int16x8_t __s1_311 = __p1_311; int16x4_t __s2_311 = __p2_311; int16x8_t __ret_311; __ret_311 = vqaddq_s16(__s0_311, vqrdmulhq_s16(__s1_311, splatq_lane_s16(__s2_311, __p3_311))); __ret_311; })
#define vqrdmlahq_lane_s32(__p0_309,__p1_309,__p2_309,__p3_309) __extension__ ({ int32x4_t __s0_309 = __p0_309; int32x4_t __s1_309 = __p1_309; int32x2_t __s2_309 = __p2_309; int32x4_t __ret_309; __ret_309 = vqaddq_s32(__s0_309, vqrdmulhq_s32(__s1_309, splatq_lane_s32(__s2_309, __p3_309))); __ret_309; })
#define vqrdmlahq_laneq_s16(__p0_327,__p1_327,__p2_327,__p3_327) __extension__ ({ int16x8_t __s0_327 = __p0_327; int16x8_t __s1_327 = __p1_327; int16x8_t __s2_327 = __p2_327; int16x8_t __ret_327; __ret_327 = vqaddq_s16(__s0_327, vqrdmulhq_s16(__s1_327, splatq_laneq_s16(__s2_327, __p3_327))); __ret_327; })
#define vqrdmlahq_laneq_s32(__p0_325,__p1_325,__p2_325,__p3_325) __extension__ ({ int32x4_t __s0_325 = __p0_325; int32x4_t __s1_325 = __p1_325; int32x4_t __s2_325 = __p2_325; int32x4_t __ret_325; __ret_325 = vqaddq_s32(__s0_325, vqrdmulhq_s32(__s1_325, splatq_laneq_s32(__s2_325, __p3_325))); __ret_325; })
#define vqrdmlahs_lane_s32(__p0_909,__p1_909,__p2_909,__p3_909) __extension__ ({ int32_t __s0_909 = __p0_909; int32_t __s1_909 = __p1_909; int32x2_t __s2_909 = __p2_909; int32_t __ret_909; __ret_909 = vqadds_s32(__s0_909, vqrdmulhs_s32(__s1_909, vget_lane_s32(__s2_909, __p3_909))); __ret_909; })
#define vqrdmlahs_laneq_s32(__p0_913,__p1_913,__p2_913,__p3_913) __extension__ ({ int32_t __s0_913 = __p0_913; int32_t __s1_913 = __p1_913; int32x4_t __s2_913 = __p2_913; int32_t __ret_913; __ret_913 = vqadds_s32(__s0_913, vqrdmulhs_s32(__s1_913, vgetq_lane_s32(__s2_913, __p3_913))); __ret_913; })
#define vqrdmlsh_lane_s16(__p0_323,__p1_323,__p2_323,__p3_323) __extension__ ({ int16x4_t __s0_323 = __p0_323; int16x4_t __s1_323 = __p1_323; int16x4_t __s2_323 = __p2_323; int16x4_t __ret_323; __ret_323 = vqsub_s16(__s0_323, vqrdmulh_s16(__s1_323, splat_lane_s16(__s2_323, __p3_323))); __ret_323; })
#define vqrdmlsh_lane_s32(__p0_321,__p1_321,__p2_321,__p3_321) __extension__ ({ int32x2_t __s0_321 = __p0_321; int32x2_t __s1_321 = __p1_321; int32x2_t __s2_321 = __p2_321; int32x2_t __ret_321; __ret_321 = vqsub_s32(__s0_321, vqrdmulh_s32(__s1_321, splat_lane_s32(__s2_321, __p3_321))); __ret_321; })
#define vqrdmlsh_laneq_s16(__p0_339,__p1_339,__p2_339,__p3_339) __extension__ ({ int16x4_t __s0_339 = __p0_339; int16x4_t __s1_339 = __p1_339; int16x8_t __s2_339 = __p2_339; int16x4_t __ret_339; __ret_339 = vqsub_s16(__s0_339, vqrdmulh_s16(__s1_339, splat_laneq_s16(__s2_339, __p3_339))); __ret_339; })
#define vqrdmlsh_laneq_s32(__p0_337,__p1_337,__p2_337,__p3_337) __extension__ ({ int32x2_t __s0_337 = __p0_337; int32x2_t __s1_337 = __p1_337; int32x4_t __s2_337 = __p2_337; int32x2_t __ret_337; __ret_337 = vqsub_s32(__s0_337, vqrdmulh_s32(__s1_337, splat_laneq_s32(__s2_337, __p3_337))); __ret_337; })
#define vqrdmlshh_lane_s16(__p0_919,__p1_919,__p2_919,__p3_919) __extension__ ({ int16_t __s0_919 = __p0_919; int16_t __s1_919 = __p1_919; int16x4_t __s2_919 = __p2_919; int16_t __ret_919; __ret_919 = vqsubh_s16(__s0_919, vqrdmulhh_s16(__s1_919, vget_lane_s16(__s2_919, __p3_919))); __ret_919; })
#define vqrdmlshh_laneq_s16(__p0_923,__p1_923,__p2_923,__p3_923) __extension__ ({ int16_t __s0_923 = __p0_923; int16_t __s1_923 = __p1_923; int16x8_t __s2_923 = __p2_923; int16_t __ret_923; __ret_923 = vqsubh_s16(__s0_923, vqrdmulhh_s16(__s1_923, vgetq_lane_s16(__s2_923, __p3_923))); __ret_923; })
#define vqrdmlshq_lane_s16(__p0_319,__p1_319,__p2_319,__p3_319) __extension__ ({ int16x8_t __s0_319 = __p0_319; int16x8_t __s1_319 = __p1_319; int16x4_t __s2_319 = __p2_319; int16x8_t __ret_319; __ret_319 = vqsubq_s16(__s0_319, vqrdmulhq_s16(__s1_319, splatq_lane_s16(__s2_319, __p3_319))); __ret_319; })
#define vqrdmlshq_lane_s32(__p0_317,__p1_317,__p2_317,__p3_317) __extension__ ({ int32x4_t __s0_317 = __p0_317; int32x4_t __s1_317 = __p1_317; int32x2_t __s2_317 = __p2_317; int32x4_t __ret_317; __ret_317 = vqsubq_s32(__s0_317, vqrdmulhq_s32(__s1_317, splatq_lane_s32(__s2_317, __p3_317))); __ret_317; })
#define vqrdmlshq_laneq_s16(__p0_335,__p1_335,__p2_335,__p3_335) __extension__ ({ int16x8_t __s0_335 = __p0_335; int16x8_t __s1_335 = __p1_335; int16x8_t __s2_335 = __p2_335; int16x8_t __ret_335; __ret_335 = vqsubq_s16(__s0_335, vqrdmulhq_s16(__s1_335, splatq_laneq_s16(__s2_335, __p3_335))); __ret_335; })
#define vqrdmlshq_laneq_s32(__p0_333,__p1_333,__p2_333,__p3_333) __extension__ ({ int32x4_t __s0_333 = __p0_333; int32x4_t __s1_333 = __p1_333; int32x4_t __s2_333 = __p2_333; int32x4_t __ret_333; __ret_333 = vqsubq_s32(__s0_333, vqrdmulhq_s32(__s1_333, splatq_laneq_s32(__s2_333, __p3_333))); __ret_333; })
#define vqrdmlshs_lane_s32(__p0_917,__p1_917,__p2_917,__p3_917) __extension__ ({ int32_t __s0_917 = __p0_917; int32_t __s1_917 = __p1_917; int32x2_t __s2_917 = __p2_917; int32_t __ret_917; __ret_917 = vqsubs_s32(__s0_917, vqrdmulhs_s32(__s1_917, vget_lane_s32(__s2_917, __p3_917))); __ret_917; })
#define vqrdmlshs_laneq_s32(__p0_921,__p1_921,__p2_921,__p3_921) __extension__ ({ int32_t __s0_921 = __p0_921; int32_t __s1_921 = __p1_921; int32x4_t __s2_921 = __p2_921; int32_t __ret_921; __ret_921 = vqsubs_s32(__s0_921, vqrdmulhs_s32(__s1_921, vgetq_lane_s32(__s2_921, __p3_921))); __ret_921; })
#define vqrdmulh_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vqrdmulh_lane_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vqrdmulh_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vqrdmulh_lane_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vqrdmulh_laneq_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s0 = __p0; int16x8_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vqrdmulh_laneq_v((int8x8_t)__s0, (int8x16_t)__s1, __p2, 1); __ret; })
#define vqrdmulh_laneq_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s0 = __p0; int32x4_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vqrdmulh_laneq_v((int8x8_t)__s0, (int8x16_t)__s1, __p2, 2); __ret; })
#define vqrdmulhh_lane_s16(__p0_749,__p1_749,__p2_749) __extension__ ({ int16_t __s0_749 = __p0_749; int16x4_t __s1_749 = __p1_749; int16_t __ret_749; __ret_749 = vqrdmulhh_s16(__s0_749, vget_lane_s16(__s1_749, __p2_749)); __ret_749; })
#define vqrdmulhh_laneq_s16(__p0_753,__p1_753,__p2_753) __extension__ ({ int16_t __s0_753 = __p0_753; int16x8_t __s1_753 = __p1_753; int16_t __ret_753; __ret_753 = vqrdmulhh_s16(__s0_753, vgetq_lane_s16(__s1_753, __p2_753)); __ret_753; })
#define vqrdmulhq_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s0 = __p0; int16x4_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vqrdmulhq_lane_v((int8x16_t)__s0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vqrdmulhq_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s0 = __p0; int32x2_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vqrdmulhq_lane_v((int8x16_t)__s0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vqrdmulhq_laneq_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vqrdmulhq_laneq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); __ret; })
#define vqrdmulhq_laneq_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vqrdmulhq_laneq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); __ret; })
#define vqrdmulhs_lane_s32(__p0_747,__p1_747,__p2_747) __extension__ ({ int32_t __s0_747 = __p0_747; int32x2_t __s1_747 = __p1_747; int32_t __ret_747; __ret_747 = vqrdmulhs_s32(__s0_747, vget_lane_s32(__s1_747, __p2_747)); __ret_747; })
#define vqrdmulhs_laneq_s32(__p0_751,__p1_751,__p2_751) __extension__ ({ int32_t __s0_751 = __p0_751; int32x4_t __s1_751 = __p1_751; int32_t __ret_751; __ret_751 = vqrdmulhs_s32(__s0_751, vgetq_lane_s32(__s1_751, __p2_751)); __ret_751; })
#define vqrshrn_high_n_s16(__p0_765,__p1_765,__p2_765) __extension__ ({ int8x8_t __s0_765 = __p0_765; int16x8_t __s1_765 = __p1_765; int8x16_t __ret_765; __ret_765 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_765), (int8x8_t)(vqrshrn_n_s16(__s1_765, __p2_765)))); __ret_765; })
#define vqrshrn_high_n_s32(__p0_761,__p1_761,__p2_761) __extension__ ({ int16x4_t __s0_761 = __p0_761; int32x4_t __s1_761 = __p1_761; int16x8_t __ret_761; __ret_761 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_761), (int16x4_t)(vqrshrn_n_s32(__s1_761, __p2_761)))); __ret_761; })
#define vqrshrn_high_n_s64(__p0_763,__p1_763,__p2_763) __extension__ ({ int32x2_t __s0_763 = __p0_763; int64x2_t __s1_763 = __p1_763; int32x4_t __ret_763; __ret_763 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_763), (int32x2_t)(vqrshrn_n_s64(__s1_763, __p2_763)))); __ret_763; })
#define vqrshrn_high_n_u16(__p0_759,__p1_759,__p2_759) __extension__ ({ uint8x8_t __s0_759 = __p0_759; uint16x8_t __s1_759 = __p1_759; uint8x16_t __ret_759; __ret_759 = (uint8x16_t)(vcombine_u8((uint8x8_t)(__s0_759), (uint8x8_t)(vqrshrn_n_u16(__s1_759, __p2_759)))); __ret_759; })
#define vqrshrn_high_n_u32(__p0_755,__p1_755,__p2_755) __extension__ ({ uint16x4_t __s0_755 = __p0_755; uint32x4_t __s1_755 = __p1_755; uint16x8_t __ret_755; __ret_755 = (uint16x8_t)(vcombine_u16((uint16x4_t)(__s0_755), (uint16x4_t)(vqrshrn_n_u32(__s1_755, __p2_755)))); __ret_755; })
#define vqrshrn_high_n_u64(__p0_757,__p1_757,__p2_757) __extension__ ({ uint32x2_t __s0_757 = __p0_757; uint64x2_t __s1_757 = __p1_757; uint32x4_t __ret_757; __ret_757 = (uint32x4_t)(vcombine_u32((uint32x2_t)(__s0_757), (uint32x2_t)(vqrshrn_n_u64(__s1_757, __p2_757)))); __ret_757; })
#define vqrshrn_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 0); __ret; })
#define vqrshrn_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 1); __ret; })
#define vqrshrn_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 2); __ret; })
#define vqrshrn_n_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 16); __ret; })
#define vqrshrn_n_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 17); __ret; })
#define vqrshrn_n_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 18); __ret; })
#define vqrshrnd_n_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vqrshrnd_n_s64(__s0, __p1); __ret; })
#define vqrshrnd_n_u64(__p0,__p1) __extension__ ({ uint64_t __s0 = __p0; uint32_t __ret; __ret = (uint32_t) __builtin_neon_vqrshrnd_n_u64(__s0, __p1); __ret; })
#define vqrshrnh_n_s16(__p0,__p1) __extension__ ({ int16_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vqrshrnh_n_s16(__s0, __p1); __ret; })
#define vqrshrnh_n_u16(__p0,__p1) __extension__ ({ uint16_t __s0 = __p0; uint8_t __ret; __ret = (uint8_t) __builtin_neon_vqrshrnh_n_u16(__s0, __p1); __ret; })
#define vqrshrns_n_s32(__p0,__p1) __extension__ ({ int32_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vqrshrns_n_s32(__s0, __p1); __ret; })
#define vqrshrns_n_u32(__p0,__p1) __extension__ ({ uint32_t __s0 = __p0; uint16_t __ret; __ret = (uint16_t) __builtin_neon_vqrshrns_n_u32(__s0, __p1); __ret; })
#define vqrshrun_high_n_s16(__p0_771,__p1_771,__p2_771) __extension__ ({ int8x8_t __s0_771 = __p0_771; int16x8_t __s1_771 = __p1_771; int8x16_t __ret_771; __ret_771 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_771), (int8x8_t)(vqrshrun_n_s16(__s1_771, __p2_771)))); __ret_771; })
#define vqrshrun_high_n_s32(__p0_767,__p1_767,__p2_767) __extension__ ({ int16x4_t __s0_767 = __p0_767; int32x4_t __s1_767 = __p1_767; int16x8_t __ret_767; __ret_767 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_767), (int16x4_t)(vqrshrun_n_s32(__s1_767, __p2_767)))); __ret_767; })
#define vqrshrun_high_n_s64(__p0_769,__p1_769,__p2_769) __extension__ ({ int32x2_t __s0_769 = __p0_769; int64x2_t __s1_769 = __p1_769; int32x4_t __ret_769; __ret_769 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_769), (int32x2_t)(vqrshrun_n_s64(__s1_769, __p2_769)))); __ret_769; })
#define vqrshrun_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vqrshrun_n_v((int8x16_t)__s0, __p1, 16); __ret; })
#define vqrshrun_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vqrshrun_n_v((int8x16_t)__s0, __p1, 17); __ret; })
#define vqrshrun_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vqrshrun_n_v((int8x16_t)__s0, __p1, 18); __ret; })
#define vqrshrund_n_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vqrshrund_n_s64(__s0, __p1); __ret; })
#define vqrshrunh_n_s16(__p0,__p1) __extension__ ({ int16_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vqrshrunh_n_s16(__s0, __p1); __ret; })
#define vqrshruns_n_s32(__p0,__p1) __extension__ ({ int32_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vqrshruns_n_s32(__s0, __p1); __ret; })
#define vqshl_n_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 1); __ret; })
#define vqshl_n_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 2); __ret; })
#define vqshl_n_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 3); __ret; })
#define vqshl_n_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 0); __ret; })
#define vqshl_n_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 17); __ret; })
#define vqshl_n_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 18); __ret; })
#define vqshl_n_u64(__p0,__p1) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 19); __ret; })
#define vqshl_n_u8(__p0,__p1) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 16); __ret; })
#define vqshlb_n_s8(__p0,__p1) __extension__ ({ int8_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vqshlb_n_s8(__s0, __p1); __ret; })
#define vqshlb_n_u8(__p0,__p1) __extension__ ({ uint8_t __s0 = __p0; uint8_t __ret; __ret = (uint8_t) __builtin_neon_vqshlb_n_u8(__s0, __p1); __ret; })
#define vqshld_n_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vqshld_n_s64(__s0, __p1); __ret; })
#define vqshld_n_u64(__p0,__p1) __extension__ ({ uint64_t __s0 = __p0; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vqshld_n_u64(__s0, __p1); __ret; })
#define vqshlh_n_s16(__p0,__p1) __extension__ ({ int16_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vqshlh_n_s16(__s0, __p1); __ret; })
#define vqshlh_n_u16(__p0,__p1) __extension__ ({ uint16_t __s0 = __p0; uint16_t __ret; __ret = (uint16_t) __builtin_neon_vqshlh_n_u16(__s0, __p1); __ret; })
#define vqshlq_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 33); __ret; })
#define vqshlq_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 34); __ret; })
#define vqshlq_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 35); __ret; })
#define vqshlq_n_s8(__p0,__p1) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 32); __ret; })
#define vqshlq_n_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 49); __ret; })
#define vqshlq_n_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 50); __ret; })
#define vqshlq_n_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 51); __ret; })
#define vqshlq_n_u8(__p0,__p1) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 48); __ret; })
#define vqshls_n_s32(__p0,__p1) __extension__ ({ int32_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vqshls_n_s32(__s0, __p1); __ret; })
#define vqshls_n_u32(__p0,__p1) __extension__ ({ uint32_t __s0 = __p0; uint32_t __ret; __ret = (uint32_t) __builtin_neon_vqshls_n_u32(__s0, __p1); __ret; })
#define vqshlu_n_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vqshlu_n_v((int8x8_t)__s0, __p1, 17); __ret; })
#define vqshlu_n_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vqshlu_n_v((int8x8_t)__s0, __p1, 18); __ret; })
#define vqshlu_n_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vqshlu_n_v((int8x8_t)__s0, __p1, 19); __ret; })
#define vqshlu_n_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vqshlu_n_v((int8x8_t)__s0, __p1, 16); __ret; })
#define vqshlub_n_s8(__p0,__p1) __extension__ ({ int8_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vqshlub_n_s8(__s0, __p1); __ret; })
#define vqshlud_n_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vqshlud_n_s64(__s0, __p1); __ret; })
#define vqshluh_n_s16(__p0,__p1) __extension__ ({ int16_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vqshluh_n_s16(__s0, __p1); __ret; })
#define vqshluq_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vqshluq_n_v((int8x16_t)__s0, __p1, 49); __ret; })
#define vqshluq_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vqshluq_n_v((int8x16_t)__s0, __p1, 50); __ret; })
#define vqshluq_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vqshluq_n_v((int8x16_t)__s0, __p1, 51); __ret; })
#define vqshluq_n_s8(__p0,__p1) __extension__ ({ int8x16_t __s0 = __p0; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vqshluq_n_v((int8x16_t)__s0, __p1, 48); __ret; })
#define vqshlus_n_s32(__p0,__p1) __extension__ ({ int32_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vqshlus_n_s32(__s0, __p1); __ret; })
#define vqshrn_high_n_s16(__p0_783,__p1_783,__p2_783) __extension__ ({ int8x8_t __s0_783 = __p0_783; int16x8_t __s1_783 = __p1_783; int8x16_t __ret_783; __ret_783 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_783), (int8x8_t)(vqshrn_n_s16(__s1_783, __p2_783)))); __ret_783; })
#define vqshrn_high_n_s32(__p0_779,__p1_779,__p2_779) __extension__ ({ int16x4_t __s0_779 = __p0_779; int32x4_t __s1_779 = __p1_779; int16x8_t __ret_779; __ret_779 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_779), (int16x4_t)(vqshrn_n_s32(__s1_779, __p2_779)))); __ret_779; })
#define vqshrn_high_n_s64(__p0_781,__p1_781,__p2_781) __extension__ ({ int32x2_t __s0_781 = __p0_781; int64x2_t __s1_781 = __p1_781; int32x4_t __ret_781; __ret_781 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_781), (int32x2_t)(vqshrn_n_s64(__s1_781, __p2_781)))); __ret_781; })
#define vqshrn_high_n_u16(__p0_777,__p1_777,__p2_777) __extension__ ({ uint8x8_t __s0_777 = __p0_777; uint16x8_t __s1_777 = __p1_777; uint8x16_t __ret_777; __ret_777 = (uint8x16_t)(vcombine_u8((uint8x8_t)(__s0_777), (uint8x8_t)(vqshrn_n_u16(__s1_777, __p2_777)))); __ret_777; })
#define vqshrn_high_n_u32(__p0_773,__p1_773,__p2_773) __extension__ ({ uint16x4_t __s0_773 = __p0_773; uint32x4_t __s1_773 = __p1_773; uint16x8_t __ret_773; __ret_773 = (uint16x8_t)(vcombine_u16((uint16x4_t)(__s0_773), (uint16x4_t)(vqshrn_n_u32(__s1_773, __p2_773)))); __ret_773; })
#define vqshrn_high_n_u64(__p0_775,__p1_775,__p2_775) __extension__ ({ uint32x2_t __s0_775 = __p0_775; uint64x2_t __s1_775 = __p1_775; uint32x4_t __ret_775; __ret_775 = (uint32x4_t)(vcombine_u32((uint32x2_t)(__s0_775), (uint32x2_t)(vqshrn_n_u64(__s1_775, __p2_775)))); __ret_775; })
#define vqshrn_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 0); __ret; })
#define vqshrn_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 1); __ret; })
#define vqshrn_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 2); __ret; })
#define vqshrn_n_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 16); __ret; })
#define vqshrn_n_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 17); __ret; })
#define vqshrn_n_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 18); __ret; })
#define vqshrnd_n_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vqshrnd_n_s64(__s0, __p1); __ret; })
#define vqshrnd_n_u64(__p0,__p1) __extension__ ({ uint64_t __s0 = __p0; uint32_t __ret; __ret = (uint32_t) __builtin_neon_vqshrnd_n_u64(__s0, __p1); __ret; })
#define vqshrnh_n_s16(__p0,__p1) __extension__ ({ int16_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vqshrnh_n_s16(__s0, __p1); __ret; })
#define vqshrnh_n_u16(__p0,__p1) __extension__ ({ uint16_t __s0 = __p0; uint8_t __ret; __ret = (uint8_t) __builtin_neon_vqshrnh_n_u16(__s0, __p1); __ret; })
#define vqshrns_n_s32(__p0,__p1) __extension__ ({ int32_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vqshrns_n_s32(__s0, __p1); __ret; })
#define vqshrns_n_u32(__p0,__p1) __extension__ ({ uint32_t __s0 = __p0; uint16_t __ret; __ret = (uint16_t) __builtin_neon_vqshrns_n_u32(__s0, __p1); __ret; })
#define vqshrun_high_n_s16(__p0_789,__p1_789,__p2_789) __extension__ ({ int8x8_t __s0_789 = __p0_789; int16x8_t __s1_789 = __p1_789; int8x16_t __ret_789; __ret_789 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_789), (int8x8_t)(vqshrun_n_s16(__s1_789, __p2_789)))); __ret_789; })
#define vqshrun_high_n_s32(__p0_785,__p1_785,__p2_785) __extension__ ({ int16x4_t __s0_785 = __p0_785; int32x4_t __s1_785 = __p1_785; int16x8_t __ret_785; __ret_785 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_785), (int16x4_t)(vqshrun_n_s32(__s1_785, __p2_785)))); __ret_785; })
#define vqshrun_high_n_s64(__p0_787,__p1_787,__p2_787) __extension__ ({ int32x2_t __s0_787 = __p0_787; int64x2_t __s1_787 = __p1_787; int32x4_t __ret_787; __ret_787 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_787), (int32x2_t)(vqshrun_n_s64(__s1_787, __p2_787)))); __ret_787; })
#define vqshrun_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vqshrun_n_v((int8x16_t)__s0, __p1, 16); __ret; })
#define vqshrun_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vqshrun_n_v((int8x16_t)__s0, __p1, 17); __ret; })
#define vqshrun_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vqshrun_n_v((int8x16_t)__s0, __p1, 18); __ret; })
#define vqshrund_n_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; int32_t __ret; __ret = (int32_t) __builtin_neon_vqshrund_n_s64(__s0, __p1); __ret; })
#define vqshrunh_n_s16(__p0,__p1) __extension__ ({ int16_t __s0 = __p0; int8_t __ret; __ret = (int8_t) __builtin_neon_vqshrunh_n_s16(__s0, __p1); __ret; })
#define vqshruns_n_s32(__p0,__p1) __extension__ ({ int32_t __s0 = __p0; int16_t __ret; __ret = (int16_t) __builtin_neon_vqshruns_n_s32(__s0, __p1); __ret; })
#define vrshr_n_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 1); __ret; })
#define vrshr_n_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 2); __ret; })
#define vrshr_n_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 3); __ret; })
#define vrshr_n_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 0); __ret; })
#define vrshr_n_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 17); __ret; })
#define vrshr_n_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 18); __ret; })
#define vrshr_n_u64(__p0,__p1) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 19); __ret; })
#define vrshr_n_u8(__p0,__p1) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 16); __ret; })
#define vrshrd_n_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vrshrd_n_s64(__s0, __p1); __ret; })
#define vrshrd_n_u64(__p0,__p1) __extension__ ({ uint64_t __s0 = __p0; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vrshrd_n_u64(__s0, __p1); __ret; })
#define vrshrn_high_n_s16(__p0_801,__p1_801,__p2_801) __extension__ ({ int8x8_t __s0_801 = __p0_801; int16x8_t __s1_801 = __p1_801; int8x16_t __ret_801; __ret_801 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_801), (int8x8_t)(vrshrn_n_s16(__s1_801, __p2_801)))); __ret_801; })
#define vrshrn_high_n_s32(__p0_797,__p1_797,__p2_797) __extension__ ({ int16x4_t __s0_797 = __p0_797; int32x4_t __s1_797 = __p1_797; int16x8_t __ret_797; __ret_797 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_797), (int16x4_t)(vrshrn_n_s32(__s1_797, __p2_797)))); __ret_797; })
#define vrshrn_high_n_s64(__p0_799,__p1_799,__p2_799) __extension__ ({ int32x2_t __s0_799 = __p0_799; int64x2_t __s1_799 = __p1_799; int32x4_t __ret_799; __ret_799 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_799), (int32x2_t)(vrshrn_n_s64(__s1_799, __p2_799)))); __ret_799; })
#define vrshrn_high_n_u16(__p0_795,__p1_795,__p2_795) __extension__ ({ uint8x8_t __s0_795 = __p0_795; uint16x8_t __s1_795 = __p1_795; uint8x16_t __ret_795; __ret_795 = (uint8x16_t)(vcombine_u8((uint8x8_t)(__s0_795), (uint8x8_t)(vrshrn_n_u16(__s1_795, __p2_795)))); __ret_795; })
#define vrshrn_high_n_u32(__p0_791,__p1_791,__p2_791) __extension__ ({ uint16x4_t __s0_791 = __p0_791; uint32x4_t __s1_791 = __p1_791; uint16x8_t __ret_791; __ret_791 = (uint16x8_t)(vcombine_u16((uint16x4_t)(__s0_791), (uint16x4_t)(vrshrn_n_u32(__s1_791, __p2_791)))); __ret_791; })
#define vrshrn_high_n_u64(__p0_793,__p1_793,__p2_793) __extension__ ({ uint32x2_t __s0_793 = __p0_793; uint64x2_t __s1_793 = __p1_793; uint32x4_t __ret_793; __ret_793 = (uint32x4_t)(vcombine_u32((uint32x2_t)(__s0_793), (uint32x2_t)(vrshrn_n_u64(__s1_793, __p2_793)))); __ret_793; })
#define vrshrn_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 0); __ret; })
#define vrshrn_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 1); __ret; })
#define vrshrn_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 2); __ret; })
#define vrshrn_n_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 16); __ret; })
#define vrshrn_n_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 17); __ret; })
#define vrshrn_n_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 18); __ret; })
#define vrshrq_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 33); __ret; })
#define vrshrq_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 34); __ret; })
#define vrshrq_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 35); __ret; })
#define vrshrq_n_s8(__p0,__p1) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 32); __ret; })
#define vrshrq_n_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 49); __ret; })
#define vrshrq_n_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 50); __ret; })
#define vrshrq_n_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 51); __ret; })
#define vrshrq_n_u8(__p0,__p1) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 48); __ret; })
#define vrsra_n_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vrsra_n_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vrsra_n_s64(__p0,__p1,__p2) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __s1 = __p1; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); __ret; })
#define vrsra_n_s8(__p0,__p1,__p2) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __s1 = __p1; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); __ret; })
#define vrsra_n_u16(__p0,__p1,__p2) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __s1 = __p1; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); __ret; })
#define vrsra_n_u32(__p0,__p1,__p2) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __s1 = __p1; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); __ret; })
#define vrsra_n_u64(__p0,__p1,__p2) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __s1 = __p1; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); __ret; })
#define vrsra_n_u8(__p0,__p1,__p2) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __s1 = __p1; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); __ret; })
#define vrsrad_n_s64(__p0,__p1,__p2) __extension__ ({ int64_t __s0 = __p0; int64_t __s1 = __p1; int64_t __ret; __ret = (int64_t) __builtin_neon_vrsrad_n_s64(__s0, __s1, __p2); __ret; })
#define vrsrad_n_u64(__p0,__p1,__p2) __extension__ ({ uint64_t __s0 = __p0; uint64_t __s1 = __p1; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vrsrad_n_u64(__s0, __s1, __p2); __ret; })
#define vrsraq_n_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); __ret; })
#define vrsraq_n_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); __ret; })
#define vrsraq_n_s64(__p0,__p1,__p2) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __s1 = __p1; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); __ret; })
#define vrsraq_n_s8(__p0,__p1,__p2) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __s1 = __p1; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); __ret; })
#define vrsraq_n_u16(__p0,__p1,__p2) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __s1 = __p1; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); __ret; })
#define vrsraq_n_u32(__p0,__p1,__p2) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __s1 = __p1; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); __ret; })
#define vrsraq_n_u64(__p0,__p1,__p2) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __s1 = __p1; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); __ret; })
#define vrsraq_n_u8(__p0,__p1,__p2) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __s1 = __p1; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); __ret; })
#define vset_lane_f16(__p0_857,__p1_857,__p2_857) __extension__ ({ float16_t __s0_857 = __p0_857; float16x4_t __s1_857 = __p1_857; float16x4_t __ret_857; float16_t __reint_857 = __s0_857; float16x4_t __reint1_857 = __s1_857; int16x4_t __reint2_857 = vset_lane_s16(*(int16_t *) &__reint_857, *(int16x4_t *) &__reint1_857, __p2_857); __ret_857 = *(float16x4_t *) &__reint2_857; __ret_857; })
#define vset_lane_f32(__p0,__p1,__p2) __extension__ ({ float32_t __s0 = __p0; float32x2_t __s1 = __p1; float32x2_t __ret; __ret = (float32x2_t) __builtin_neon_vset_lane_f32(__s0, (float32x2_t)__s1, __p2); __ret; })
#define vset_lane_f64(__p0,__p1,__p2) __extension__ ({ float64_t __s0 = __p0; float64x1_t __s1 = __p1; float64x1_t __ret; __ret = (float64x1_t) __builtin_neon_vset_lane_f64(__s0, (float64x1_t)__s1, __p2); __ret; })
#define vset_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16_t __s0 = __p0; poly16x4_t __s1 = __p1; poly16x4_t __ret; __ret = (poly16x4_t) __builtin_neon_vset_lane_i16(__s0, (poly16x4_t)__s1, __p2); __ret; })
#define vset_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64_t __s0 = __p0; poly64x1_t __s1 = __p1; poly64x1_t __ret; __ret = (poly64x1_t) __builtin_neon_vset_lane_i64(__s0, (poly64x1_t)__s1, __p2); __ret; })
#define vset_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8_t __s0 = __p0; poly8x8_t __s1 = __p1; poly8x8_t __ret; __ret = (poly8x8_t) __builtin_neon_vset_lane_i8(__s0, (poly8x8_t)__s1, __p2); __ret; })
#define vset_lane_s16(__p0,__p1,__p2) __extension__ ({ int16_t __s0 = __p0; int16x4_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vset_lane_i16(__s0, (int16x4_t)__s1, __p2); __ret; })
#define vset_lane_s32(__p0,__p1,__p2) __extension__ ({ int32_t __s0 = __p0; int32x2_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vset_lane_i32(__s0, (int32x2_t)__s1, __p2); __ret; })
#define vset_lane_s64(__p0,__p1,__p2) __extension__ ({ int64_t __s0 = __p0; int64x1_t __s1 = __p1; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vset_lane_i64(__s0, (int64x1_t)__s1, __p2); __ret; })
#define vset_lane_s8(__p0,__p1,__p2) __extension__ ({ int8_t __s0 = __p0; int8x8_t __s1 = __p1; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vset_lane_i8(__s0, (int8x8_t)__s1, __p2); __ret; })
#define vset_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16_t __s0 = __p0; uint16x4_t __s1 = __p1; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vset_lane_i16(__s0, (int16x4_t)__s1, __p2); __ret; })
#define vset_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32_t __s0 = __p0; uint32x2_t __s1 = __p1; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vset_lane_i32(__s0, (int32x2_t)__s1, __p2); __ret; })
#define vset_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64_t __s0 = __p0; uint64x1_t __s1 = __p1; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vset_lane_i64(__s0, (int64x1_t)__s1, __p2); __ret; })
#define vset_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8_t __s0 = __p0; uint8x8_t __s1 = __p1; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vset_lane_i8(__s0, (int8x8_t)__s1, __p2); __ret; })
#define vsetq_lane_f16(__p0_859,__p1_859,__p2_859) __extension__ ({ float16_t __s0_859 = __p0_859; float16x8_t __s1_859 = __p1_859; float16x8_t __ret_859; float16_t __reint_859 = __s0_859; float16x8_t __reint1_859 = __s1_859; int16x8_t __reint2_859 = vsetq_lane_s16(*(int16_t *) &__reint_859, *(int16x8_t *) &__reint1_859, __p2_859); __ret_859 = *(float16x8_t *) &__reint2_859; __ret_859; })
#define vsetq_lane_f32(__p0,__p1,__p2) __extension__ ({ float32_t __s0 = __p0; float32x4_t __s1 = __p1; float32x4_t __ret; __ret = (float32x4_t) __builtin_neon_vsetq_lane_f32(__s0, (float32x4_t)__s1, __p2); __ret; })
#define vsetq_lane_f64(__p0,__p1,__p2) __extension__ ({ float64_t __s0 = __p0; float64x2_t __s1 = __p1; float64x2_t __ret; __ret = (float64x2_t) __builtin_neon_vsetq_lane_f64(__s0, (float64x2_t)__s1, __p2); __ret; })
#define vsetq_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16_t __s0 = __p0; poly16x8_t __s1 = __p1; poly16x8_t __ret; __ret = (poly16x8_t) __builtin_neon_vsetq_lane_i16(__s0, (poly16x8_t)__s1, __p2); __ret; })
#define vsetq_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64_t __s0 = __p0; poly64x2_t __s1 = __p1; poly64x2_t __ret; __ret = (poly64x2_t) __builtin_neon_vsetq_lane_i64(__s0, (poly64x2_t)__s1, __p2); __ret; })
#define vsetq_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8_t __s0 = __p0; poly8x16_t __s1 = __p1; poly8x16_t __ret; __ret = (poly8x16_t) __builtin_neon_vsetq_lane_i8(__s0, (poly8x16_t)__s1, __p2); __ret; })
#define vsetq_lane_s16(__p0,__p1,__p2) __extension__ ({ int16_t __s0 = __p0; int16x8_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vsetq_lane_i16(__s0, (int16x8_t)__s1, __p2); __ret; })
#define vsetq_lane_s32(__p0,__p1,__p2) __extension__ ({ int32_t __s0 = __p0; int32x4_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vsetq_lane_i32(__s0, (int32x4_t)__s1, __p2); __ret; })
#define vsetq_lane_s64(__p0,__p1,__p2) __extension__ ({ int64_t __s0 = __p0; int64x2_t __s1 = __p1; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vsetq_lane_i64(__s0, (int64x2_t)__s1, __p2); __ret; })
#define vsetq_lane_s8(__p0,__p1,__p2) __extension__ ({ int8_t __s0 = __p0; int8x16_t __s1 = __p1; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vsetq_lane_i8(__s0, (int8x16_t)__s1, __p2); __ret; })
#define vsetq_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16_t __s0 = __p0; uint16x8_t __s1 = __p1; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vsetq_lane_i16(__s0, (int16x8_t)__s1, __p2); __ret; })
#define vsetq_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32_t __s0 = __p0; uint32x4_t __s1 = __p1; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vsetq_lane_i32(__s0, (int32x4_t)__s1, __p2); __ret; })
#define vsetq_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64_t __s0 = __p0; uint64x2_t __s1 = __p1; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vsetq_lane_i64(__s0, (int64x2_t)__s1, __p2); __ret; })
#define vsetq_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8_t __s0 = __p0; uint8x16_t __s1 = __p1; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vsetq_lane_i8(__s0, (int8x16_t)__s1, __p2); __ret; })
#define vshl_n_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 1); __ret; })
#define vshl_n_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 2); __ret; })
#define vshl_n_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 3); __ret; })
#define vshl_n_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 0); __ret; })
#define vshl_n_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 17); __ret; })
#define vshl_n_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 18); __ret; })
#define vshl_n_u64(__p0,__p1) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 19); __ret; })
#define vshl_n_u8(__p0,__p1) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 16); __ret; })
#define vshld_n_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vshld_n_s64(__s0, __p1); __ret; })
#define vshld_n_u64(__p0,__p1) __extension__ ({ uint64_t __s0 = __p0; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vshld_n_u64(__s0, __p1); __ret; })
#define vshll_high_n_s16(__p0_813,__p1_813) __extension__ ({ int16x8_t __s0_813 = __p0_813; int32x4_t __ret_813; __ret_813 = (int32x4_t)(vshll_n_s16(vget_high_s16(__s0_813), __p1_813)); __ret_813; })
#define vshll_high_n_s32(__p0_811,__p1_811) __extension__ ({ int32x4_t __s0_811 = __p0_811; int64x2_t __ret_811; __ret_811 = (int64x2_t)(vshll_n_s32(vget_high_s32(__s0_811), __p1_811)); __ret_811; })
#define vshll_high_n_s8(__p0_809,__p1_809) __extension__ ({ int8x16_t __s0_809 = __p0_809; int16x8_t __ret_809; __ret_809 = (int16x8_t)(vshll_n_s8(vget_high_s8(__s0_809), __p1_809)); __ret_809; })
#define vshll_high_n_u16(__p0_807,__p1_807) __extension__ ({ uint16x8_t __s0_807 = __p0_807; uint32x4_t __ret_807; __ret_807 = (uint32x4_t)(vshll_n_u16(vget_high_u16(__s0_807), __p1_807)); __ret_807; })
#define vshll_high_n_u32(__p0_805,__p1_805) __extension__ ({ uint32x4_t __s0_805 = __p0_805; uint64x2_t __ret_805; __ret_805 = (uint64x2_t)(vshll_n_u32(vget_high_u32(__s0_805), __p1_805)); __ret_805; })
#define vshll_high_n_u8(__p0_803,__p1_803) __extension__ ({ uint8x16_t __s0_803 = __p0_803; uint16x8_t __ret_803; __ret_803 = (uint16x8_t)(vshll_n_u8(vget_high_u8(__s0_803), __p1_803)); __ret_803; })
#define vshll_n_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 34); __ret; })
#define vshll_n_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 35); __ret; })
#define vshll_n_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 33); __ret; })
#define vshll_n_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 50); __ret; })
#define vshll_n_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 51); __ret; })
#define vshll_n_u8(__p0,__p1) __extension__ ({ uint8x8_t __s0 = __p0; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 49); __ret; })
#define vshlq_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 33); __ret; })
#define vshlq_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 34); __ret; })
#define vshlq_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 35); __ret; })
#define vshlq_n_s8(__p0,__p1) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 32); __ret; })
#define vshlq_n_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 49); __ret; })
#define vshlq_n_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 50); __ret; })
#define vshlq_n_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 51); __ret; })
#define vshlq_n_u8(__p0,__p1) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 48); __ret; })
#define vshr_n_s16(__p0,__p1) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 1); __ret; })
#define vshr_n_s32(__p0,__p1) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 2); __ret; })
#define vshr_n_s64(__p0,__p1) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 3); __ret; })
#define vshr_n_s8(__p0,__p1) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 0); __ret; })
#define vshr_n_u16(__p0,__p1) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 17); __ret; })
#define vshr_n_u32(__p0,__p1) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 18); __ret; })
#define vshr_n_u64(__p0,__p1) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 19); __ret; })
#define vshr_n_u8(__p0,__p1) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 16); __ret; })
#define vshrd_n_s64(__p0,__p1) __extension__ ({ int64_t __s0 = __p0; int64_t __ret; __ret = (int64_t) __builtin_neon_vshrd_n_s64(__s0, __p1); __ret; })
#define vshrd_n_u64(__p0,__p1) __extension__ ({ uint64_t __s0 = __p0; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vshrd_n_u64(__s0, __p1); __ret; })
#define vshrn_high_n_s16(__p0_825,__p1_825,__p2_825) __extension__ ({ int8x8_t __s0_825 = __p0_825; int16x8_t __s1_825 = __p1_825; int8x16_t __ret_825; __ret_825 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_825), (int8x8_t)(vshrn_n_s16(__s1_825, __p2_825)))); __ret_825; })
#define vshrn_high_n_s32(__p0_821,__p1_821,__p2_821) __extension__ ({ int16x4_t __s0_821 = __p0_821; int32x4_t __s1_821 = __p1_821; int16x8_t __ret_821; __ret_821 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_821), (int16x4_t)(vshrn_n_s32(__s1_821, __p2_821)))); __ret_821; })
#define vshrn_high_n_s64(__p0_823,__p1_823,__p2_823) __extension__ ({ int32x2_t __s0_823 = __p0_823; int64x2_t __s1_823 = __p1_823; int32x4_t __ret_823; __ret_823 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_823), (int32x2_t)(vshrn_n_s64(__s1_823, __p2_823)))); __ret_823; })
#define vshrn_high_n_u16(__p0_819,__p1_819,__p2_819) __extension__ ({ uint8x8_t __s0_819 = __p0_819; uint16x8_t __s1_819 = __p1_819; uint8x16_t __ret_819; __ret_819 = (uint8x16_t)(vcombine_u8((uint8x8_t)(__s0_819), (uint8x8_t)(vshrn_n_u16(__s1_819, __p2_819)))); __ret_819; })
#define vshrn_high_n_u32(__p0_815,__p1_815,__p2_815) __extension__ ({ uint16x4_t __s0_815 = __p0_815; uint32x4_t __s1_815 = __p1_815; uint16x8_t __ret_815; __ret_815 = (uint16x8_t)(vcombine_u16((uint16x4_t)(__s0_815), (uint16x4_t)(vshrn_n_u32(__s1_815, __p2_815)))); __ret_815; })
#define vshrn_high_n_u64(__p0_817,__p1_817,__p2_817) __extension__ ({ uint32x2_t __s0_817 = __p0_817; uint64x2_t __s1_817 = __p1_817; uint32x4_t __ret_817; __ret_817 = (uint32x4_t)(vcombine_u32((uint32x2_t)(__s0_817), (uint32x2_t)(vshrn_n_u64(__s1_817, __p2_817)))); __ret_817; })
#define vshrn_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 0); __ret; })
#define vshrn_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 1); __ret; })
#define vshrn_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 2); __ret; })
#define vshrn_n_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 16); __ret; })
#define vshrn_n_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 17); __ret; })
#define vshrn_n_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 18); __ret; })
#define vshrq_n_s16(__p0,__p1) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 33); __ret; })
#define vshrq_n_s32(__p0,__p1) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 34); __ret; })
#define vshrq_n_s64(__p0,__p1) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 35); __ret; })
#define vshrq_n_s8(__p0,__p1) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 32); __ret; })
#define vshrq_n_u16(__p0,__p1) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 49); __ret; })
#define vshrq_n_u32(__p0,__p1) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 50); __ret; })
#define vshrq_n_u64(__p0,__p1) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 51); __ret; })
#define vshrq_n_u8(__p0,__p1) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 48); __ret; })
#define vsli_n_p16(__p0,__p1,__p2) __extension__ ({ poly16x4_t __s0 = __p0; poly16x4_t __s1 = __p1; poly16x4_t __ret; __ret = (poly16x4_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 5); __ret; })
#define vsli_n_p64(__p0,__p1,__p2) __extension__ ({ poly64x1_t __s0 = __p0; poly64x1_t __s1 = __p1; poly64x1_t __ret; __ret = (poly64x1_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 6); __ret; })
#define vsli_n_p8(__p0,__p1,__p2) __extension__ ({ poly8x8_t __s0 = __p0; poly8x8_t __s1 = __p1; poly8x8_t __ret; __ret = (poly8x8_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 4); __ret; })
#define vsli_n_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vsli_n_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vsli_n_s64(__p0,__p1,__p2) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __s1 = __p1; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); __ret; })
#define vsli_n_s8(__p0,__p1,__p2) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __s1 = __p1; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); __ret; })
#define vsli_n_u16(__p0,__p1,__p2) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __s1 = __p1; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); __ret; })
#define vsli_n_u32(__p0,__p1,__p2) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __s1 = __p1; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); __ret; })
#define vsli_n_u64(__p0,__p1,__p2) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __s1 = __p1; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); __ret; })
#define vsli_n_u8(__p0,__p1,__p2) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __s1 = __p1; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); __ret; })
#define vslid_n_s64(__p0,__p1,__p2) __extension__ ({ int64_t __s0 = __p0; int64_t __s1 = __p1; int64_t __ret; __ret = (int64_t) __builtin_neon_vslid_n_s64(__s0, __s1, __p2); __ret; })
#define vslid_n_u64(__p0,__p1,__p2) __extension__ ({ uint64_t __s0 = __p0; uint64_t __s1 = __p1; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vslid_n_u64(__s0, __s1, __p2); __ret; })
#define vsliq_n_p16(__p0,__p1,__p2) __extension__ ({ poly16x8_t __s0 = __p0; poly16x8_t __s1 = __p1; poly16x8_t __ret; __ret = (poly16x8_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 37); __ret; })
#define vsliq_n_p64(__p0,__p1,__p2) __extension__ ({ poly64x2_t __s0 = __p0; poly64x2_t __s1 = __p1; poly64x2_t __ret; __ret = (poly64x2_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 38); __ret; })
#define vsliq_n_p8(__p0,__p1,__p2) __extension__ ({ poly8x16_t __s0 = __p0; poly8x16_t __s1 = __p1; poly8x16_t __ret; __ret = (poly8x16_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 36); __ret; })
#define vsliq_n_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); __ret; })
#define vsliq_n_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); __ret; })
#define vsliq_n_s64(__p0,__p1,__p2) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __s1 = __p1; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); __ret; })
#define vsliq_n_s8(__p0,__p1,__p2) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __s1 = __p1; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); __ret; })
#define vsliq_n_u16(__p0,__p1,__p2) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __s1 = __p1; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); __ret; })
#define vsliq_n_u32(__p0,__p1,__p2) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __s1 = __p1; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); __ret; })
#define vsliq_n_u64(__p0,__p1,__p2) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __s1 = __p1; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); __ret; })
#define vsliq_n_u8(__p0,__p1,__p2) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __s1 = __p1; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); __ret; })
#define vsra_n_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vsra_n_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vsra_n_s64(__p0,__p1,__p2) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __s1 = __p1; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); __ret; })
#define vsra_n_s8(__p0,__p1,__p2) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __s1 = __p1; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); __ret; })
#define vsra_n_u16(__p0,__p1,__p2) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __s1 = __p1; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); __ret; })
#define vsra_n_u32(__p0,__p1,__p2) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __s1 = __p1; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); __ret; })
#define vsra_n_u64(__p0,__p1,__p2) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __s1 = __p1; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); __ret; })
#define vsra_n_u8(__p0,__p1,__p2) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __s1 = __p1; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); __ret; })
#define vsrad_n_s64(__p0,__p1,__p2) __extension__ ({ int64_t __s0 = __p0; int64_t __s1 = __p1; int64_t __ret; __ret = (int64_t) __builtin_neon_vsrad_n_s64(__s0, __s1, __p2); __ret; })
#define vsrad_n_u64(__p0,__p1,__p2) __extension__ ({ uint64_t __s0 = __p0; uint64_t __s1 = __p1; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vsrad_n_u64(__s0, __s1, __p2); __ret; })
#define vsraq_n_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); __ret; })
#define vsraq_n_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); __ret; })
#define vsraq_n_s64(__p0,__p1,__p2) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __s1 = __p1; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); __ret; })
#define vsraq_n_s8(__p0,__p1,__p2) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __s1 = __p1; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); __ret; })
#define vsraq_n_u16(__p0,__p1,__p2) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __s1 = __p1; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); __ret; })
#define vsraq_n_u32(__p0,__p1,__p2) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __s1 = __p1; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); __ret; })
#define vsraq_n_u64(__p0,__p1,__p2) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __s1 = __p1; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); __ret; })
#define vsraq_n_u8(__p0,__p1,__p2) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __s1 = __p1; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); __ret; })
#define vsri_n_p16(__p0,__p1,__p2) __extension__ ({ poly16x4_t __s0 = __p0; poly16x4_t __s1 = __p1; poly16x4_t __ret; __ret = (poly16x4_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 5); __ret; })
#define vsri_n_p64(__p0,__p1,__p2) __extension__ ({ poly64x1_t __s0 = __p0; poly64x1_t __s1 = __p1; poly64x1_t __ret; __ret = (poly64x1_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 6); __ret; })
#define vsri_n_p8(__p0,__p1,__p2) __extension__ ({ poly8x8_t __s0 = __p0; poly8x8_t __s1 = __p1; poly8x8_t __ret; __ret = (poly8x8_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 4); __ret; })
#define vsri_n_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s0 = __p0; int16x4_t __s1 = __p1; int16x4_t __ret; __ret = (int16x4_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); __ret; })
#define vsri_n_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s0 = __p0; int32x2_t __s1 = __p1; int32x2_t __ret; __ret = (int32x2_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); __ret; })
#define vsri_n_s64(__p0,__p1,__p2) __extension__ ({ int64x1_t __s0 = __p0; int64x1_t __s1 = __p1; int64x1_t __ret; __ret = (int64x1_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); __ret; })
#define vsri_n_s8(__p0,__p1,__p2) __extension__ ({ int8x8_t __s0 = __p0; int8x8_t __s1 = __p1; int8x8_t __ret; __ret = (int8x8_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); __ret; })
#define vsri_n_u16(__p0,__p1,__p2) __extension__ ({ uint16x4_t __s0 = __p0; uint16x4_t __s1 = __p1; uint16x4_t __ret; __ret = (uint16x4_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); __ret; })
#define vsri_n_u32(__p0,__p1,__p2) __extension__ ({ uint32x2_t __s0 = __p0; uint32x2_t __s1 = __p1; uint32x2_t __ret; __ret = (uint32x2_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); __ret; })
#define vsri_n_u64(__p0,__p1,__p2) __extension__ ({ uint64x1_t __s0 = __p0; uint64x1_t __s1 = __p1; uint64x1_t __ret; __ret = (uint64x1_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); __ret; })
#define vsri_n_u8(__p0,__p1,__p2) __extension__ ({ uint8x8_t __s0 = __p0; uint8x8_t __s1 = __p1; uint8x8_t __ret; __ret = (uint8x8_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); __ret; })
#define vsrid_n_s64(__p0,__p1,__p2) __extension__ ({ int64_t __s0 = __p0; int64_t __s1 = __p1; int64_t __ret; __ret = (int64_t) __builtin_neon_vsrid_n_s64(__s0, __s1, __p2); __ret; })
#define vsrid_n_u64(__p0,__p1,__p2) __extension__ ({ uint64_t __s0 = __p0; uint64_t __s1 = __p1; uint64_t __ret; __ret = (uint64_t) __builtin_neon_vsrid_n_u64(__s0, __s1, __p2); __ret; })
#define vsriq_n_p16(__p0,__p1,__p2) __extension__ ({ poly16x8_t __s0 = __p0; poly16x8_t __s1 = __p1; poly16x8_t __ret; __ret = (poly16x8_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 37); __ret; })
#define vsriq_n_p64(__p0,__p1,__p2) __extension__ ({ poly64x2_t __s0 = __p0; poly64x2_t __s1 = __p1; poly64x2_t __ret; __ret = (poly64x2_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 38); __ret; })
#define vsriq_n_p8(__p0,__p1,__p2) __extension__ ({ poly8x16_t __s0 = __p0; poly8x16_t __s1 = __p1; poly8x16_t __ret; __ret = (poly8x16_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 36); __ret; })
#define vsriq_n_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s0 = __p0; int16x8_t __s1 = __p1; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); __ret; })
#define vsriq_n_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s0 = __p0; int32x4_t __s1 = __p1; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); __ret; })
#define vsriq_n_s64(__p0,__p1,__p2) __extension__ ({ int64x2_t __s0 = __p0; int64x2_t __s1 = __p1; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); __ret; })
#define vsriq_n_s8(__p0,__p1,__p2) __extension__ ({ int8x16_t __s0 = __p0; int8x16_t __s1 = __p1; int8x16_t __ret; __ret = (int8x16_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); __ret; })
#define vsriq_n_u16(__p0,__p1,__p2) __extension__ ({ uint16x8_t __s0 = __p0; uint16x8_t __s1 = __p1; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); __ret; })
#define vsriq_n_u32(__p0,__p1,__p2) __extension__ ({ uint32x4_t __s0 = __p0; uint32x4_t __s1 = __p1; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); __ret; })
#define vsriq_n_u64(__p0,__p1,__p2) __extension__ ({ uint64x2_t __s0 = __p0; uint64x2_t __s1 = __p1; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); __ret; })
#define vsriq_n_u8(__p0,__p1,__p2) __extension__ ({ uint8x16_t __s0 = __p0; uint8x16_t __s1 = __p1; uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); __ret; })
#define vst1_f16(__p0,__p1) __extension__ ({ float16x4_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 8); })
#define vst1_f16_x2(__p0,__p1) __extension__ ({ float16x4x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 8); })
#define vst1_f16_x3(__p0,__p1) __extension__ ({ float16x4x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 8); })
#define vst1_f16_x4(__p0,__p1) __extension__ ({ float16x4x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 8); })
#define vst1_f32(__p0,__p1) __extension__ ({ float32x2_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 9); })
#define vst1_f32_x2(__p0,__p1) __extension__ ({ float32x2x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 9); })
#define vst1_f32_x3(__p0,__p1) __extension__ ({ float32x2x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 9); })
#define vst1_f32_x4(__p0,__p1) __extension__ ({ float32x2x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 9); })
#define vst1_f64(__p0,__p1) __extension__ ({ float64x1_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 10); })
#define vst1_f64_x2(__p0,__p1) __extension__ ({ float64x1x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 10); })
#define vst1_f64_x3(__p0,__p1) __extension__ ({ float64x1x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 10); })
#define vst1_f64_x4(__p0,__p1) __extension__ ({ float64x1x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 10); })
#define vst1_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x4_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 8); })
#define vst1_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x2_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 9); })
#define vst1_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x1_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 10); })
#define vst1_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x4_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 5); })
#define vst1_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x1_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 6); })
#define vst1_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x8_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 4); })
#define vst1_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 1); })
#define vst1_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 2); })
#define vst1_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x1_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 3); })
#define vst1_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x8_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 0); })
#define vst1_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x4_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 17); })
#define vst1_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x2_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 18); })
#define vst1_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x1_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 19); })
#define vst1_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x8_t __s1 = __p1; __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 16); })
#define vst1_p16(__p0,__p1) __extension__ ({ poly16x4_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 5); })
#define vst1_p16_x2(__p0,__p1) __extension__ ({ poly16x4x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 5); })
#define vst1_p16_x3(__p0,__p1) __extension__ ({ poly16x4x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 5); })
#define vst1_p16_x4(__p0,__p1) __extension__ ({ poly16x4x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 5); })
#define vst1_p64(__p0,__p1) __extension__ ({ poly64x1_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 6); })
#define vst1_p64_x2(__p0,__p1) __extension__ ({ poly64x1x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 6); })
#define vst1_p64_x3(__p0,__p1) __extension__ ({ poly64x1x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 6); })
#define vst1_p64_x4(__p0,__p1) __extension__ ({ poly64x1x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 6); })
#define vst1_p8(__p0,__p1) __extension__ ({ poly8x8_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 4); })
#define vst1_p8_x2(__p0,__p1) __extension__ ({ poly8x8x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 4); })
#define vst1_p8_x3(__p0,__p1) __extension__ ({ poly8x8x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 4); })
#define vst1_p8_x4(__p0,__p1) __extension__ ({ poly8x8x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 4); })
#define vst1_s16(__p0,__p1) __extension__ ({ int16x4_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 1); })
#define vst1_s16_x2(__p0,__p1) __extension__ ({ int16x4x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 1); })
#define vst1_s16_x3(__p0,__p1) __extension__ ({ int16x4x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 1); })
#define vst1_s16_x4(__p0,__p1) __extension__ ({ int16x4x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 1); })
#define vst1_s32(__p0,__p1) __extension__ ({ int32x2_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 2); })
#define vst1_s32_x2(__p0,__p1) __extension__ ({ int32x2x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 2); })
#define vst1_s32_x3(__p0,__p1) __extension__ ({ int32x2x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 2); })
#define vst1_s32_x4(__p0,__p1) __extension__ ({ int32x2x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 2); })
#define vst1_s64(__p0,__p1) __extension__ ({ int64x1_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 3); })
#define vst1_s64_x2(__p0,__p1) __extension__ ({ int64x1x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 3); })
#define vst1_s64_x3(__p0,__p1) __extension__ ({ int64x1x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 3); })
#define vst1_s64_x4(__p0,__p1) __extension__ ({ int64x1x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 3); })
#define vst1_s8(__p0,__p1) __extension__ ({ int8x8_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 0); })
#define vst1_s8_x2(__p0,__p1) __extension__ ({ int8x8x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 0); })
#define vst1_s8_x3(__p0,__p1) __extension__ ({ int8x8x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 0); })
#define vst1_s8_x4(__p0,__p1) __extension__ ({ int8x8x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 0); })
#define vst1_u16(__p0,__p1) __extension__ ({ uint16x4_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 17); })
#define vst1_u16_x2(__p0,__p1) __extension__ ({ uint16x4x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 17); })
#define vst1_u16_x3(__p0,__p1) __extension__ ({ uint16x4x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 17); })
#define vst1_u16_x4(__p0,__p1) __extension__ ({ uint16x4x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 17); })
#define vst1_u32(__p0,__p1) __extension__ ({ uint32x2_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 18); })
#define vst1_u32_x2(__p0,__p1) __extension__ ({ uint32x2x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 18); })
#define vst1_u32_x3(__p0,__p1) __extension__ ({ uint32x2x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 18); })
#define vst1_u32_x4(__p0,__p1) __extension__ ({ uint32x2x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 18); })
#define vst1_u64(__p0,__p1) __extension__ ({ uint64x1_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 19); })
#define vst1_u64_x2(__p0,__p1) __extension__ ({ uint64x1x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 19); })
#define vst1_u64_x3(__p0,__p1) __extension__ ({ uint64x1x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 19); })
#define vst1_u64_x4(__p0,__p1) __extension__ ({ uint64x1x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 19); })
#define vst1_u8(__p0,__p1) __extension__ ({ uint8x8_t __s1 = __p1; __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 16); })
#define vst1_u8_x2(__p0,__p1) __extension__ ({ uint8x8x2_t __s1 = __p1; __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 16); })
#define vst1_u8_x3(__p0,__p1) __extension__ ({ uint8x8x3_t __s1 = __p1; __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 16); })
#define vst1_u8_x4(__p0,__p1) __extension__ ({ uint8x8x4_t __s1 = __p1; __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 16); })
#define vst1q_f16(__p0,__p1) __extension__ ({ float16x8_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 40); })
#define vst1q_f16_x2(__p0,__p1) __extension__ ({ float16x8x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 40); })
#define vst1q_f16_x3(__p0,__p1) __extension__ ({ float16x8x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 40); })
#define vst1q_f16_x4(__p0,__p1) __extension__ ({ float16x8x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 40); })
#define vst1q_f32(__p0,__p1) __extension__ ({ float32x4_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 41); })
#define vst1q_f32_x2(__p0,__p1) __extension__ ({ float32x4x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 41); })
#define vst1q_f32_x3(__p0,__p1) __extension__ ({ float32x4x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 41); })
#define vst1q_f32_x4(__p0,__p1) __extension__ ({ float32x4x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 41); })
#define vst1q_f64(__p0,__p1) __extension__ ({ float64x2_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 42); })
#define vst1q_f64_x2(__p0,__p1) __extension__ ({ float64x2x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 42); })
#define vst1q_f64_x3(__p0,__p1) __extension__ ({ float64x2x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 42); })
#define vst1q_f64_x4(__p0,__p1) __extension__ ({ float64x2x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 42); })
#define vst1q_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x8_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 40); })
#define vst1q_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x4_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 41); })
#define vst1q_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x2_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 42); })
#define vst1q_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x8_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 37); })
#define vst1q_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x2_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 38); })
#define vst1q_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x16_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 36); })
#define vst1q_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 33); })
#define vst1q_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 34); })
#define vst1q_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x2_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 35); })
#define vst1q_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x16_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 32); })
#define vst1q_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x8_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 49); })
#define vst1q_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x4_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 50); })
#define vst1q_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x2_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 51); })
#define vst1q_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x16_t __s1 = __p1; __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 48); })
#define vst1q_p16(__p0,__p1) __extension__ ({ poly16x8_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 37); })
#define vst1q_p16_x2(__p0,__p1) __extension__ ({ poly16x8x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 37); })
#define vst1q_p16_x3(__p0,__p1) __extension__ ({ poly16x8x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 37); })
#define vst1q_p16_x4(__p0,__p1) __extension__ ({ poly16x8x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 37); })
#define vst1q_p64(__p0,__p1) __extension__ ({ poly64x2_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 38); })
#define vst1q_p64_x2(__p0,__p1) __extension__ ({ poly64x2x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 38); })
#define vst1q_p64_x3(__p0,__p1) __extension__ ({ poly64x2x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 38); })
#define vst1q_p64_x4(__p0,__p1) __extension__ ({ poly64x2x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 38); })
#define vst1q_p8(__p0,__p1) __extension__ ({ poly8x16_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 36); })
#define vst1q_p8_x2(__p0,__p1) __extension__ ({ poly8x16x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 36); })
#define vst1q_p8_x3(__p0,__p1) __extension__ ({ poly8x16x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 36); })
#define vst1q_p8_x4(__p0,__p1) __extension__ ({ poly8x16x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 36); })
#define vst1q_s16(__p0,__p1) __extension__ ({ int16x8_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 33); })
#define vst1q_s16_x2(__p0,__p1) __extension__ ({ int16x8x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 33); })
#define vst1q_s16_x3(__p0,__p1) __extension__ ({ int16x8x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 33); })
#define vst1q_s16_x4(__p0,__p1) __extension__ ({ int16x8x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 33); })
#define vst1q_s32(__p0,__p1) __extension__ ({ int32x4_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 34); })
#define vst1q_s32_x2(__p0,__p1) __extension__ ({ int32x4x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 34); })
#define vst1q_s32_x3(__p0,__p1) __extension__ ({ int32x4x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 34); })
#define vst1q_s32_x4(__p0,__p1) __extension__ ({ int32x4x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 34); })
#define vst1q_s64(__p0,__p1) __extension__ ({ int64x2_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 35); })
#define vst1q_s64_x2(__p0,__p1) __extension__ ({ int64x2x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 35); })
#define vst1q_s64_x3(__p0,__p1) __extension__ ({ int64x2x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 35); })
#define vst1q_s64_x4(__p0,__p1) __extension__ ({ int64x2x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 35); })
#define vst1q_s8(__p0,__p1) __extension__ ({ int8x16_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 32); })
#define vst1q_s8_x2(__p0,__p1) __extension__ ({ int8x16x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 32); })
#define vst1q_s8_x3(__p0,__p1) __extension__ ({ int8x16x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 32); })
#define vst1q_s8_x4(__p0,__p1) __extension__ ({ int8x16x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 32); })
#define vst1q_u16(__p0,__p1) __extension__ ({ uint16x8_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 49); })
#define vst1q_u16_x2(__p0,__p1) __extension__ ({ uint16x8x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 49); })
#define vst1q_u16_x3(__p0,__p1) __extension__ ({ uint16x8x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 49); })
#define vst1q_u16_x4(__p0,__p1) __extension__ ({ uint16x8x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 49); })
#define vst1q_u32(__p0,__p1) __extension__ ({ uint32x4_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 50); })
#define vst1q_u32_x2(__p0,__p1) __extension__ ({ uint32x4x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 50); })
#define vst1q_u32_x3(__p0,__p1) __extension__ ({ uint32x4x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 50); })
#define vst1q_u32_x4(__p0,__p1) __extension__ ({ uint32x4x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 50); })
#define vst1q_u64(__p0,__p1) __extension__ ({ uint64x2_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 51); })
#define vst1q_u64_x2(__p0,__p1) __extension__ ({ uint64x2x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 51); })
#define vst1q_u64_x3(__p0,__p1) __extension__ ({ uint64x2x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 51); })
#define vst1q_u64_x4(__p0,__p1) __extension__ ({ uint64x2x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 51); })
#define vst1q_u8(__p0,__p1) __extension__ ({ uint8x16_t __s1 = __p1; __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 48); })
#define vst1q_u8_x2(__p0,__p1) __extension__ ({ uint8x16x2_t __s1 = __p1; __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 48); })
#define vst1q_u8_x3(__p0,__p1) __extension__ ({ uint8x16x3_t __s1 = __p1; __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 48); })
#define vst1q_u8_x4(__p0,__p1) __extension__ ({ uint8x16x4_t __s1 = __p1; __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 48); })
#define vst2_f16(__p0,__p1) __extension__ ({ float16x4x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 8); })
#define vst2_f32(__p0,__p1) __extension__ ({ float32x2x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 9); })
#define vst2_f64(__p0,__p1) __extension__ ({ float64x1x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 10); })
#define vst2_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x4x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 8); })
#define vst2_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x2x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 9); })
#define vst2_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x1x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 10); })
#define vst2_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x4x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 5); })
#define vst2_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x1x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 6); })
#define vst2_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x8x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 4); })
#define vst2_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 1); })
#define vst2_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 2); })
#define vst2_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x1x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 3); })
#define vst2_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x8x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 0); })
#define vst2_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x4x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 17); })
#define vst2_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x2x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 18); })
#define vst2_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x1x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 19); })
#define vst2_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x8x2_t __s1 = __p1; __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 16); })
#define vst2_p16(__p0,__p1) __extension__ ({ poly16x4x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 5); })
#define vst2_p64(__p0,__p1) __extension__ ({ poly64x1x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 6); })
#define vst2_p8(__p0,__p1) __extension__ ({ poly8x8x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 4); })
#define vst2_s16(__p0,__p1) __extension__ ({ int16x4x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 1); })
#define vst2_s32(__p0,__p1) __extension__ ({ int32x2x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 2); })
#define vst2_s64(__p0,__p1) __extension__ ({ int64x1x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 3); })
#define vst2_s8(__p0,__p1) __extension__ ({ int8x8x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 0); })
#define vst2_u16(__p0,__p1) __extension__ ({ uint16x4x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 17); })
#define vst2_u32(__p0,__p1) __extension__ ({ uint32x2x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 18); })
#define vst2_u64(__p0,__p1) __extension__ ({ uint64x1x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 19); })
#define vst2_u8(__p0,__p1) __extension__ ({ uint8x8x2_t __s1 = __p1; __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 16); })
#define vst2q_f16(__p0,__p1) __extension__ ({ float16x8x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 40); })
#define vst2q_f32(__p0,__p1) __extension__ ({ float32x4x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 41); })
#define vst2q_f64(__p0,__p1) __extension__ ({ float64x2x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 42); })
#define vst2q_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x8x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 40); })
#define vst2q_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x4x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 41); })
#define vst2q_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x2x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 42); })
#define vst2q_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x8x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 37); })
#define vst2q_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x2x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 38); })
#define vst2q_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x16x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 36); })
#define vst2q_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 33); })
#define vst2q_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 34); })
#define vst2q_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x2x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 35); })
#define vst2q_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x16x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 32); })
#define vst2q_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x8x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 49); })
#define vst2q_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x4x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 50); })
#define vst2q_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x2x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 51); })
#define vst2q_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x16x2_t __s1 = __p1; __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 48); })
#define vst2q_p16(__p0,__p1) __extension__ ({ poly16x8x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 37); })
#define vst2q_p64(__p0,__p1) __extension__ ({ poly64x2x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 38); })
#define vst2q_p8(__p0,__p1) __extension__ ({ poly8x16x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 36); })
#define vst2q_s16(__p0,__p1) __extension__ ({ int16x8x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 33); })
#define vst2q_s32(__p0,__p1) __extension__ ({ int32x4x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 34); })
#define vst2q_s64(__p0,__p1) __extension__ ({ int64x2x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 35); })
#define vst2q_s8(__p0,__p1) __extension__ ({ int8x16x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 32); })
#define vst2q_u16(__p0,__p1) __extension__ ({ uint16x8x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 49); })
#define vst2q_u32(__p0,__p1) __extension__ ({ uint32x4x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 50); })
#define vst2q_u64(__p0,__p1) __extension__ ({ uint64x2x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 51); })
#define vst2q_u8(__p0,__p1) __extension__ ({ uint8x16x2_t __s1 = __p1; __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 48); })
#define vst3_f16(__p0,__p1) __extension__ ({ float16x4x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 8); })
#define vst3_f32(__p0,__p1) __extension__ ({ float32x2x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 9); })
#define vst3_f64(__p0,__p1) __extension__ ({ float64x1x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 10); })
#define vst3_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x4x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 8); })
#define vst3_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x2x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 9); })
#define vst3_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x1x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 10); })
#define vst3_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x4x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 5); })
#define vst3_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x1x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 6); })
#define vst3_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x8x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 4); })
#define vst3_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 1); })
#define vst3_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 2); })
#define vst3_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x1x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 3); })
#define vst3_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x8x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 0); })
#define vst3_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x4x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 17); })
#define vst3_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x2x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 18); })
#define vst3_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x1x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 19); })
#define vst3_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x8x3_t __s1 = __p1; __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 16); })
#define vst3_p16(__p0,__p1) __extension__ ({ poly16x4x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 5); })
#define vst3_p64(__p0,__p1) __extension__ ({ poly64x1x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 6); })
#define vst3_p8(__p0,__p1) __extension__ ({ poly8x8x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 4); })
#define vst3_s16(__p0,__p1) __extension__ ({ int16x4x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 1); })
#define vst3_s32(__p0,__p1) __extension__ ({ int32x2x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 2); })
#define vst3_s64(__p0,__p1) __extension__ ({ int64x1x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 3); })
#define vst3_s8(__p0,__p1) __extension__ ({ int8x8x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 0); })
#define vst3_u16(__p0,__p1) __extension__ ({ uint16x4x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 17); })
#define vst3_u32(__p0,__p1) __extension__ ({ uint32x2x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 18); })
#define vst3_u64(__p0,__p1) __extension__ ({ uint64x1x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 19); })
#define vst3_u8(__p0,__p1) __extension__ ({ uint8x8x3_t __s1 = __p1; __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 16); })
#define vst3q_f16(__p0,__p1) __extension__ ({ float16x8x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 40); })
#define vst3q_f32(__p0,__p1) __extension__ ({ float32x4x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 41); })
#define vst3q_f64(__p0,__p1) __extension__ ({ float64x2x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 42); })
#define vst3q_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x8x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 40); })
#define vst3q_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x4x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 41); })
#define vst3q_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x2x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 42); })
#define vst3q_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x8x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 37); })
#define vst3q_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x2x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 38); })
#define vst3q_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x16x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 36); })
#define vst3q_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 33); })
#define vst3q_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 34); })
#define vst3q_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x2x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 35); })
#define vst3q_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x16x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 32); })
#define vst3q_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x8x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 49); })
#define vst3q_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x4x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 50); })
#define vst3q_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x2x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 51); })
#define vst3q_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x16x3_t __s1 = __p1; __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 48); })
#define vst3q_p16(__p0,__p1) __extension__ ({ poly16x8x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 37); })
#define vst3q_p64(__p0,__p1) __extension__ ({ poly64x2x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 38); })
#define vst3q_p8(__p0,__p1) __extension__ ({ poly8x16x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 36); })
#define vst3q_s16(__p0,__p1) __extension__ ({ int16x8x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 33); })
#define vst3q_s32(__p0,__p1) __extension__ ({ int32x4x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 34); })
#define vst3q_s64(__p0,__p1) __extension__ ({ int64x2x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 35); })
#define vst3q_s8(__p0,__p1) __extension__ ({ int8x16x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 32); })
#define vst3q_u16(__p0,__p1) __extension__ ({ uint16x8x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 49); })
#define vst3q_u32(__p0,__p1) __extension__ ({ uint32x4x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 50); })
#define vst3q_u64(__p0,__p1) __extension__ ({ uint64x2x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 51); })
#define vst3q_u8(__p0,__p1) __extension__ ({ uint8x16x3_t __s1 = __p1; __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 48); })
#define vst4_f16(__p0,__p1) __extension__ ({ float16x4x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 8); })
#define vst4_f32(__p0,__p1) __extension__ ({ float32x2x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 9); })
#define vst4_f64(__p0,__p1) __extension__ ({ float64x1x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 10); })
#define vst4_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x4x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 8); })
#define vst4_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x2x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 9); })
#define vst4_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x1x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 10); })
#define vst4_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x4x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 5); })
#define vst4_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x1x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 6); })
#define vst4_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x8x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 4); })
#define vst4_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x4x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 1); })
#define vst4_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x2x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 2); })
#define vst4_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x1x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 3); })
#define vst4_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x8x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 0); })
#define vst4_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x4x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 17); })
#define vst4_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x2x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 18); })
#define vst4_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x1x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 19); })
#define vst4_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x8x4_t __s1 = __p1; __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 16); })
#define vst4_p16(__p0,__p1) __extension__ ({ poly16x4x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 5); })
#define vst4_p64(__p0,__p1) __extension__ ({ poly64x1x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 6); })
#define vst4_p8(__p0,__p1) __extension__ ({ poly8x8x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 4); })
#define vst4_s16(__p0,__p1) __extension__ ({ int16x4x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 1); })
#define vst4_s32(__p0,__p1) __extension__ ({ int32x2x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 2); })
#define vst4_s64(__p0,__p1) __extension__ ({ int64x1x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 3); })
#define vst4_s8(__p0,__p1) __extension__ ({ int8x8x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 0); })
#define vst4_u16(__p0,__p1) __extension__ ({ uint16x4x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 17); })
#define vst4_u32(__p0,__p1) __extension__ ({ uint32x2x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 18); })
#define vst4_u64(__p0,__p1) __extension__ ({ uint64x1x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 19); })
#define vst4_u8(__p0,__p1) __extension__ ({ uint8x8x4_t __s1 = __p1; __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 16); })
#define vst4q_f16(__p0,__p1) __extension__ ({ float16x8x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 40); })
#define vst4q_f32(__p0,__p1) __extension__ ({ float32x4x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 41); })
#define vst4q_f64(__p0,__p1) __extension__ ({ float64x2x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 42); })
#define vst4q_lane_f16(__p0,__p1,__p2) __extension__ ({ float16x8x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 40); })
#define vst4q_lane_f32(__p0,__p1,__p2) __extension__ ({ float32x4x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 41); })
#define vst4q_lane_f64(__p0,__p1,__p2) __extension__ ({ float64x2x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 42); })
#define vst4q_lane_p16(__p0,__p1,__p2) __extension__ ({ poly16x8x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 37); })
#define vst4q_lane_p64(__p0,__p1,__p2) __extension__ ({ poly64x2x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 38); })
#define vst4q_lane_p8(__p0,__p1,__p2) __extension__ ({ poly8x16x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 36); })
#define vst4q_lane_s16(__p0,__p1,__p2) __extension__ ({ int16x8x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 33); })
#define vst4q_lane_s32(__p0,__p1,__p2) __extension__ ({ int32x4x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 34); })
#define vst4q_lane_s64(__p0,__p1,__p2) __extension__ ({ int64x2x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 35); })
#define vst4q_lane_s8(__p0,__p1,__p2) __extension__ ({ int8x16x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 32); })
#define vst4q_lane_u16(__p0,__p1,__p2) __extension__ ({ uint16x8x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 49); })
#define vst4q_lane_u32(__p0,__p1,__p2) __extension__ ({ uint32x4x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 50); })
#define vst4q_lane_u64(__p0,__p1,__p2) __extension__ ({ uint64x2x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 51); })
#define vst4q_lane_u8(__p0,__p1,__p2) __extension__ ({ uint8x16x4_t __s1 = __p1; __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 48); })
#define vst4q_p16(__p0,__p1) __extension__ ({ poly16x8x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 37); })
#define vst4q_p64(__p0,__p1) __extension__ ({ poly64x2x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 38); })
#define vst4q_p8(__p0,__p1) __extension__ ({ poly8x16x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 36); })
#define vst4q_s16(__p0,__p1) __extension__ ({ int16x8x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 33); })
#define vst4q_s32(__p0,__p1) __extension__ ({ int32x4x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 34); })
#define vst4q_s64(__p0,__p1) __extension__ ({ int64x2x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 35); })
#define vst4q_s8(__p0,__p1) __extension__ ({ int8x16x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 32); })
#define vst4q_u16(__p0,__p1) __extension__ ({ uint16x8x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 49); })
#define vst4q_u32(__p0,__p1) __extension__ ({ uint32x4x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 50); })
#define vst4q_u64(__p0,__p1) __extension__ ({ uint64x2x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 51); })
#define vst4q_u8(__p0,__p1) __extension__ ({ uint8x16x4_t __s1 = __p1; __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 48); })
#define vstrq_p128(__p0,__p1) __extension__ ({ poly128_t __s1 = __p1; __builtin_neon_vstrq_p128(__p0, __s1); })
#define vsudot_laneq_s32(__p0_829,__p1_829,__p2_829,__p3_829) __extension__ ({ int32x2_t __s0_829 = __p0_829; int8x8_t __s1_829 = __p1_829; uint8x16_t __s2_829 = __p2_829; int32x2_t __ret_829; uint8x16_t __reint_829 = __s2_829; __ret_829 = vusdot_s32(__s0_829, (uint8x8_t)(splat_laneq_s32(*(int32x4_t *) &__reint_829, __p3_829)), __s1_829); __ret_829; })
#define vsudotq_laneq_s32(__p0_827,__p1_827,__p2_827,__p3_827) __extension__ ({ int32x4_t __s0_827 = __p0_827; int8x16_t __s1_827 = __p1_827; uint8x16_t __s2_827 = __p2_827; int32x4_t __ret_827; uint8x16_t __reint_827 = __s2_827; __ret_827 = vusdotq_s32(__s0_827, (uint8x16_t)(splatq_laneq_s32(*(int32x4_t *) &__reint_827, __p3_827)), __s1_827); __ret_827; })
#define vusdot_laneq_s32(__p0_833,__p1_833,__p2_833,__p3_833) __extension__ ({ int32x2_t __s0_833 = __p0_833; uint8x8_t __s1_833 = __p1_833; int8x16_t __s2_833 = __p2_833; int32x2_t __ret_833; int8x16_t __reint_833 = __s2_833; __ret_833 = vusdot_s32(__s0_833, __s1_833, (int8x8_t)(splat_laneq_s32(*(int32x4_t *) &__reint_833, __p3_833))); __ret_833; })
#define vusdotq_laneq_s32(__p0_831,__p1_831,__p2_831,__p3_831) __extension__ ({ int32x4_t __s0_831 = __p0_831; uint8x16_t __s1_831 = __p1_831; int8x16_t __s2_831 = __p2_831; int32x4_t __ret_831; int8x16_t __reint_831 = __s2_831; __ret_831 = vusdotq_s32(__s0_831, __s1_831, (int8x16_t)(splatq_laneq_s32(*(int32x4_t *) &__reint_831, __p3_831))); __ret_831; })
#define w_coredump w_T.w_Coredump
#define w_retcode w_T.w_Retcode
#define w_stopsig w_S.w_Stopsig
#define w_stopval w_S.w_Stopval
#define w_termsig w_T.w_Termsig
