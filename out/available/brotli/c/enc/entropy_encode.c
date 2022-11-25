#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define BROTLI_64_BITS BROTLI_TARGET_64_BITS
#define BROTLI_ALIGNED(N) __attribute__((aligned(N)))
#define BROTLI_ARM_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_ARRAY_PARAM(name) 
#define BROTLI_BIG_ENDIAN 0
#define BROTLI_BOOL int
#define BROTLI_BSR32(x) (31u ^ (uint32_t)__builtin_clz(x))
#define BROTLI_CODE_LENGTH_CODES (BROTLI_REPEAT_ZERO_CODE_LENGTH + 1)
#define BROTLI_COMMON_API 
#define BROTLI_COMMON_CONSTANTS_H_ 
#define BROTLI_COMMON_PLATFORM_H_ 
#define BROTLI_COMMON_PORT_H_ 
#define BROTLI_COMMON_TYPES_H_ 
#define BROTLI_CONTEXT_MAP_MAX_RLE 16
#define BROTLI_DCHECK(x) 
#define BROTLI_DEC_API 
#define BROTLI_DISTANCE_ALPHABET_SIZE(NPOSTFIX,NDIRECT,MAXNBITS) ( BROTLI_NUM_DISTANCE_SHORT_CODES + (NDIRECT) + ((MAXNBITS) << ((NPOSTFIX) + 1)))
#define BROTLI_DISTANCE_CONTEXT_BITS 2
#define BROTLI_DUMP() (void)(0)
#define BROTLI_ENC_API 
#define BROTLI_ENC_ENTROPY_ENCODE_H_ 
#define BROTLI_ENC_EXTRA_API BROTLI_INTERNAL
#define BROTLI_FALSE 0
#define BROTLI_GNUC_HAS_ATTRIBUTE(attribute,major,minor,patch) __has_attribute(attribute)
#define BROTLI_GNUC_HAS_BUILTIN(builtin,major,minor,patch) __has_builtin(builtin)
#define BROTLI_GNUC_VERSION BROTLI_MAKE_VERSION(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
#define BROTLI_GNUC_VERSION_CHECK(major,minor,patch) (BROTLI_GNUC_VERSION >= BROTLI_MAKE_VERSION(major, minor, patch))
#define BROTLI_HAS_FEATURE(feature) __has_feature(feature)
#define BROTLI_HAS_UBFX (!!1)
#define BROTLI_HAVE_LOG2 1
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
#define BROTLI_LITERAL_CONTEXT_BITS 6
#define BROTLI_LITTLE_ENDIAN 1
#define BROTLI_LOG(x) 
#define BROTLI_MAKE_UINT64_T(high,low) ((((uint64_t)(high)) << 32) | low)
#define BROTLI_MAKE_VERSION(major,minor,revision) (((major) * 1000000) + ((minor) * 1000) + (revision))
#define BROTLI_MAX(T,A,B) (brotli_max_ ## T((A), (B)))
#define BROTLI_MAX_ALLOWED_DISTANCE 0x7FFFFFFC
#define BROTLI_MAX_BACKWARD_LIMIT(W) (((size_t)1 << (W)) - BROTLI_WINDOW_GAP)
#define BROTLI_MAX_BLOCK_TYPE_SYMBOLS (BROTLI_MAX_NUMBER_OF_BLOCK_TYPES + 2)
#define BROTLI_MAX_CONTEXT_MAP_SYMBOLS (BROTLI_MAX_NUMBER_OF_BLOCK_TYPES + BROTLI_CONTEXT_MAP_MAX_RLE)
#define BROTLI_MAX_DISTANCE 0x3FFFFFC
#define BROTLI_MAX_DISTANCE_BITS 24U
#define BROTLI_MAX_NDIRECT 120
#define BROTLI_MAX_NPOSTFIX 3
#define BROTLI_MAX_NUMBER_OF_BLOCK_TYPES 256
#define BROTLI_MAYBE_INLINE inline
#define BROTLI_MIN(T,A,B) (brotli_min_ ## T((A), (B)))
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
#define BROTLI_SIZE_MAX (~((size_t)0))
#define BROTLI_SUNPRO_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_SWAP(T,A,I,J) { T __brotli_swap_tmp = (A)[(I)]; (A)[(I)] = (A)[(J)]; (A)[(J)] = __brotli_swap_tmp; }
#define BROTLI_TARGET_64_BITS 1
#define BROTLI_TARGET_ARMV8_64 
#define BROTLI_TARGET_ARMV8_ANY 
#define BROTLI_TARGET_NEON 
#define BROTLI_TINYC_VERSION_CHECK(major,minor,patch) (0)
#define BROTLI_TI_VERSION_CHECK(major,minor,patch) (0)
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
#define BROTLI_WINDOW_GAP 16
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define HTONS(x) (x) = htons((__uint16_t)x)
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
#define MAX_HUFFMAN_BITS 16
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define NULL ((void*)0)
#define OS_MACOSX 1
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define PTRDIFF_MAX INTMAX_MAX
#define PTRDIFF_MIN INTMAX_MIN
#define RSIZE_MAX (SIZE_MAX >> 1)
#define SIG_ATOMIC_MAX INT32_MAX
#define SIG_ATOMIC_MIN INT32_MIN
#define SIZE_MAX UINTPTR_MAX
#define TO_BROTLI_BOOL(X) (!!(X) ? BROTLI_TRUE : BROTLI_FALSE)
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
#define WCHAR_MAX __WCHAR_MAX__
#define WCHAR_MIN (-WCHAR_MAX-1)
#define WINT_MAX INT32_MAX
#define WINT_MIN INT32_MIN
#define _ARM_ARCH_H 
#define _ARM_MACHTYPES_H_ 
#define _ARM__ENDIAN_H_ 
#define _BSD_ARM__TYPES_H_ 
#define _BSD_MACHINE_ENDIAN_H_ 
#define _BSD_MACHINE_TYPES_H_ 
#define _BSD_MACHINE__TYPES_H_ 
#define _CDEFS_H_ 
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define _DARWIN_FEATURE_ONLY_64_BIT_INODE 1
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define _DARWIN_FEATURE_ONLY_VERS_1050 1
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define _ERRNO_T 
#define _FORTIFY_SOURCE 2
#define _INT16_T 
#define _INT32_T 
#define _INT64_T 
#define _INT8_T 
#define _INTMAX_T 
#define _INTPTR_T 
#define _LP64 1
#define _MACHTYPES_H_ 
#define _OS_OSBYTEORDERARM_H 
#define _OS__OSBYTEORDER_H 
#define _PTRDIFF_T 
#define _QUAD_HIGHWORD 1
#define _QUAD_LOWWORD 0
#define _RSIZE_T 
#define _SECURE__COMMON_H_ 
#define _SECURE__STRINGS_H_ 
#define _SECURE__STRING_H_ 
#define _SIZE_T 
#define _SSIZE_T 
#define _STDINT_H_ 
#define _STRINGS_H_ 
#define _STRING_H_ 
#define _SYS__ENDIAN_H_ 
#define _SYS__PTHREAD_TYPES_H_ 
#define _SYS__TYPES_H_ 
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
#define __ARM_NEON 1
#define __ARM_NEON_FP 0xE
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
#define __DARWIN_NULL ((void *)0)
#define __DARWIN_ONLY_64_BIT_INO_T 1
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __DARWIN_ONLY_VERS_1050 1
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
#define __apple_build_version__ 13000027
#define __arm64 1
#define __arm64__ 1
#define __array_decay_dicards_count_in_parameters 
#define __block __attribute__((__blocks__(byref)))
#define __clang__ 1
#define __clang_major__ 13
#define __clang_minor__ 0
#define __clang_patchlevel__ 0
#define __clang_version__ "13.0.0 (clang-1300.0.27.3)"
#define __cold __attribute__((__cold__))
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __const const
#define __counted_by(N) 
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
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strlcat(dest,...) __builtin___strlcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strlcpy(dest,...) __builtin___strlcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
