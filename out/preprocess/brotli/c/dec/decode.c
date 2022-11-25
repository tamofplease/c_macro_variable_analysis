# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 391 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2






# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h" 1
# 15 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/port.h" 1
# 16 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h" 2
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/shared_dictionary.h" 1
# 13 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/shared_dictionary.h"
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/types.h" 1
# 15 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/types.h"
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/stddef.h" 1 3
# 35 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/stddef.h" 3
typedef long int ptrdiff_t;
# 46 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/stddef.h" 3
typedef long unsigned int size_t;
# 74 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/stddef.h" 3
typedef int wchar_t;
# 102 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/stddef.h" 3
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/__stddef_max_align_t.h" 1 3
# 16 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/__stddef_max_align_t.h" 3
typedef long double max_align_t;
# 103 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/stddef.h" 2 3
# 16 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/types.h" 2
# 27 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/types.h"
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/stdint.h" 1 3
# 52 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/stdint.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 1 3 4
# 18 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/cdefs.h" 1 3 4
# 659 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 660 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/cdefs.h" 2 3 4
# 725 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 726 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/cdefs.h" 2 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/_types.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/_types.h" 1 3 4
# 15 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/_types.h" 2 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types.h" 2 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types.h" 2 3 4
# 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/types.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/types.h" 1 3 4
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_u_int8_t.h" 3 4
typedef unsigned char u_int8_t;
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_u_int16_t.h" 3 4
typedef unsigned short u_int16_t;
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_u_int32_t.h" 3 4
typedef unsigned int u_int32_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_u_int64_t.h" 3 4
typedef unsigned long long u_int64_t;
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/types.h" 2 3 4


typedef int64_t register_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/types.h" 2 3 4




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/types.h" 3 4
typedef u_int64_t syscall_arg_t;
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/types.h" 2 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdint.h" 2 3 4
# 53 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/stdint.h" 2 3
# 28 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/types.h" 2
# 71 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/types.h"
typedef void* (*brotli_alloc_func)(void* opaque, size_t size);
# 81 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/types.h"
typedef void (*brotli_free_func)(void* opaque, void* address);
# 14 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/shared_dictionary.h" 2
# 30 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/shared_dictionary.h"
typedef struct BrotliSharedDictionaryStruct BrotliSharedDictionary;




typedef enum BrotliSharedDictionaryType {

  BROTLI_SHARED_DICTIONARY_RAW = 0,

  BROTLI_SHARED_DICTIONARY_SERIALIZED = 1
} BrotliSharedDictionaryType;
# 59 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/shared_dictionary.h"
                  BrotliSharedDictionary* BrotliSharedDictionaryCreateInstance(
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque);






                  void BrotliSharedDictionaryDestroyInstance(
    BrotliSharedDictionary* dict);
# 89 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/shared_dictionary.h"
                  int BrotliSharedDictionaryAttach(
    BrotliSharedDictionary* dict, BrotliSharedDictionaryType type,
    size_t data_size, const uint8_t data[]);
# 17 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h" 2
# 29 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
typedef struct BrotliDecoderStateStruct BrotliDecoderState;





typedef enum {

  BROTLI_DECODER_RESULT_ERROR = 0,

  BROTLI_DECODER_RESULT_SUCCESS = 1,

  BROTLI_DECODER_RESULT_NEEDS_MORE_INPUT = 2,

  BROTLI_DECODER_RESULT_NEEDS_MORE_OUTPUT = 3
} BrotliDecoderResult;
# 114 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
typedef enum {



  BROTLI_DECODER_NO_ERROR = 0 , BROTLI_DECODER_SUCCESS = 1 , BROTLI_DECODER_NEEDS_MORE_INPUT = 2 , BROTLI_DECODER_NEEDS_MORE_OUTPUT = 3 , BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_NIBBLE = -1 , BROTLI_DECODER_ERROR_FORMAT_RESERVED = -2 , BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_META_NIBBLE = -3 , BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_ALPHABET = -4 , BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_SAME = -5 , BROTLI_DECODER_ERROR_FORMAT_CL_SPACE = -6 , BROTLI_DECODER_ERROR_FORMAT_HUFFMAN_SPACE = -7 , BROTLI_DECODER_ERROR_FORMAT_CONTEXT_MAP_REPEAT = -8 , BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_1 = -9 , BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_2 = -10 , BROTLI_DECODER_ERROR_FORMAT_TRANSFORM = -11 , BROTLI_DECODER_ERROR_FORMAT_DICTIONARY = -12 , BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS = -13 , BROTLI_DECODER_ERROR_FORMAT_PADDING_1 = -14 , BROTLI_DECODER_ERROR_FORMAT_PADDING_2 = -15 , BROTLI_DECODER_ERROR_FORMAT_DISTANCE = -16 , BROTLI_DECODER_ERROR_COMPOUND_DICTIONARY = -18 , BROTLI_DECODER_ERROR_DICTIONARY_NOT_SET = -19 , BROTLI_DECODER_ERROR_INVALID_ARGUMENTS = -20 , BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MODES = -21 , BROTLI_DECODER_ERROR_ALLOC_TREE_GROUPS = -22 , BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MAP = -25 , BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_1 = -26 , BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_2 = -27 , BROTLI_DECODER_ERROR_ALLOC_BLOCK_TYPE_TREES = -30 , BROTLI_DECODER_ERROR_UNREACHABLE = -31
} BrotliDecoderErrorCode;
# 133 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
typedef enum BrotliDecoderParameter {






  BROTLI_DECODER_PARAM_DISABLE_RING_BUFFER_REALLOCATION = 0,



  BROTLI_DECODER_PARAM_LARGE_WINDOW = 1
} BrotliDecoderParameter;
# 156 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               int BrotliDecoderSetParameter(
    BrotliDecoderState* state, BrotliDecoderParameter param, uint32_t value);
# 177 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               int BrotliDecoderAttachDictionary(
    BrotliDecoderState* state, BrotliSharedDictionaryType type,
    size_t data_size, const uint8_t data[]);
# 199 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               BrotliDecoderState* BrotliDecoderCreateInstance(
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque);






               void BrotliDecoderDestroyInstance(BrotliDecoderState* state);
# 226 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               BrotliDecoderResult BrotliDecoderDecompress(
    size_t encoded_size,
    const uint8_t encoded_buffer[],
    size_t* decoded_size,
    uint8_t decoded_buffer[]);
# 270 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               BrotliDecoderResult BrotliDecoderDecompressStream(
  BrotliDecoderState* state, size_t* available_in, const uint8_t** next_in,
  size_t* available_out, uint8_t** next_out, size_t* total_out);
# 281 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               int BrotliDecoderHasMoreOutput(
    const BrotliDecoderState* state);
# 312 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               const uint8_t* BrotliDecoderTakeOutput(
    BrotliDecoderState* state, size_t* size);
# 325 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               int BrotliDecoderIsUsed(const BrotliDecoderState* state);
# 335 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               int BrotliDecoderIsFinished(
    const BrotliDecoderState* state);
# 349 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/include/brotli/decode.h"
               BrotliDecoderErrorCode BrotliDecoderGetErrorCode(
    const BrotliDecoderState* state);




               const char* BrotliDecoderErrorString(BrotliDecoderErrorCode c);






               uint32_t BrotliDecoderVersion(void);
# 8 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 1 3 4
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/Availability.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/Availability.h" 2 3 4
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 2 3 4
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 2 3 4








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/signal.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/signal.h" 1 3 4
# 17 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/signal.h" 3 4
typedef int sig_atomic_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/signal.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 2 3 4
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/_mcontext.h" 1 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/machine/_structs.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/machine/_structs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 1 3 4
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_exception_state
{
 __uint32_t __exception;
 __uint32_t __fsr;
 __uint32_t __far;
};
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_exception_state64
{
 __uint64_t __far;
 __uint32_t __esr;
 __uint32_t __exception;
};
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_thread_state
{
 __uint32_t __r[13];
 __uint32_t __sp;
 __uint32_t __lr;
 __uint32_t __pc;
 __uint32_t __cpsr;
};
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_thread_state64
{
 __uint64_t __x[29];
 __uint64_t __fp;
 __uint64_t __lr;
 __uint64_t __sp;
 __uint64_t __pc;
 __uint32_t __cpsr;
 __uint32_t __pad;
};
# 433 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_vfp_state
{
 __uint32_t __r[64];
 __uint32_t __fpscr;
};
# 452 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_neon_state64
{
 __uint128_t __v[32];
 __uint32_t __fpsr;
 __uint32_t __fpcr;
};

struct __darwin_arm_neon_state
{
 __uint128_t __v[16];
 __uint32_t __fpsr;
 __uint32_t __fpcr;
};
# 523 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __arm_pagein_state
{
 int __pagein_error;
};
# 560 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __arm_legacy_debug_state
{
 __uint32_t __bvr[16];
 __uint32_t __bcr[16];
 __uint32_t __wvr[16];
 __uint32_t __wcr[16];
};
# 583 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_debug_state32
{
 __uint32_t __bvr[16];
 __uint32_t __bcr[16];
 __uint32_t __wvr[16];
 __uint32_t __wcr[16];
 __uint64_t __mdscr_el1;
};


struct __darwin_arm_debug_state64
{
 __uint64_t __bvr[16];
 __uint64_t __bcr[16];
 __uint64_t __wvr[16];
 __uint64_t __wcr[16];
 __uint64_t __mdscr_el1;
};
# 625 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_cpmu_state64
{
 __uint64_t __ctrs[16];
};
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/mach/machine/_structs.h" 2 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_arm_exception_state __es;
 struct __darwin_arm_thread_state __ss;
 struct __darwin_arm_vfp_state __fs;
};
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_arm_exception_state64 __es;
 struct __darwin_arm_thread_state64 __ss;
 struct __darwin_arm_neon_state64 __ns;
};
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_ucontext.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 156 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
     void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 390 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/signal.h" 3 4
    void(*signal(int, void (*)(int)))(int);
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/resource.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/resource.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

struct rusage_info_v4 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
};

struct rusage_info_v5 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
};

typedef struct rusage_info_v5 rusage_info_current;
# 411 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 446 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 511 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 2 3 4
# 186 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/endian.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/endian.h" 1 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_endian.h" 1 3 4
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/arm/OSByteOrder.h" 1 3 4








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/arch.h" 1 3 4
# 10 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/arm/OSByteOrder.h" 2 3 4



static inline
uint16_t
_OSSwapInt16(
 uint16_t _data
 )
{

 return (uint16_t)(_data << 8 | _data >> 8);
}

static inline
uint32_t
_OSSwapInt32(
 uint32_t _data
 )
{

 _data = __builtin_bswap32(_data);





 return _data;
}

static inline
uint64_t
_OSSwapInt64(
 uint64_t _data
 )
{

 return __builtin_bswap64(_data);
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
}



struct _OSUnalignedU16 {
 volatile uint16_t __val;
} __attribute__((__packed__));

struct _OSUnalignedU32 {
 volatile uint32_t __val;
} __attribute__((__packed__));

struct _OSUnalignedU64 {
 volatile uint64_t __val;
} __attribute__((__packed__));
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
uint16_t
OSReadSwapInt16(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt16(((struct _OSUnalignedU16 *)((uintptr_t)_base + _offset))->__val);
}
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
uint32_t
OSReadSwapInt32(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt32(((struct _OSUnalignedU32 *)((uintptr_t)_base + _offset))->__val);
}
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
uint64_t
OSReadSwapInt64(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt64(((struct _OSUnalignedU64 *)((uintptr_t)_base + _offset))->__val);
}
# 156 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
void
OSWriteSwapInt16(
 volatile void * _base,
 uintptr_t _offset,
 uint16_t _data
 )
{
 ((struct _OSUnalignedU16 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt16(_data);
}
# 180 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
void
OSWriteSwapInt32(
 volatile void * _base,
 uintptr_t _offset,
 uint32_t _data
 )
{
 ((struct _OSUnalignedU32 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt32(_data);
}
# 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
void
OSWriteSwapInt64(
 volatile void * _base,
 uintptr_t _offset,
 uint64_t _data
 )
{
 ((struct _OSUnalignedU64 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt64(_data);
}
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_endian.h" 2 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/arm/endian.h" 2 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/machine/endian.h" 2 3 4
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
      w_Coredump:1,
      w_Retcode:8,
      w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
      w_Stopsig:8,
      w_Filler:16;






 } w_S;
};
# 248 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/alloca.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/alloca.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/alloca.h" 2 3 4


void *alloca(size_t);
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4
# 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/malloc/_malloc.h" 1 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/malloc/_malloc.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/malloc/_malloc.h" 2 3 4



void *malloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void *calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
void free(void *);
void *realloc(void *__ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

void *valloc(size_t) __attribute__((alloc_size(1)));




void *aligned_alloc(size_t __alignment, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) __attribute__((availability(macosx,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));

int posix_memalign(void **__memptr, size_t __alignment, size_t __size) __attribute__((availability(macosx,introduced=10.6)));
# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4


void abort(void) __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int) __attribute__((__const__));
int atexit(void (* _Nonnull)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (* _Nonnull __compar)(const void *, const void *));

div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));

char *getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);


int mblen(const char *__s, size_t __n);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);

void qsort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));
int rand(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

void srand(unsigned) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *__str, char **__endptr, int __base);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *__str, char **__endptr, int __base);

unsigned long
  strtoul(const char *__str, char **__endptr, int __base);

unsigned long long
  strtoull(const char *__str, char **__endptr, int __base);


__attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")))
__attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
int system(const char *) __asm("_" "system" );


size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
long nrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int posix_openpt(int);
char *ptsname(int);


int ptsname_r(int fildes, char *buffer, size_t buflen) __attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(tvos,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3)));


int putenv(char *) __asm("_" "putenv" );
long random(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int rand_r(unsigned *) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 254 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 255 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 2 3 4


uint32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int )
    __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(macosx,deprecated=10.12,message="use arc4random_stir")))
    __attribute__((availability(ios,introduced=2.0))) __attribute__((availability(ios,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(tvos,introduced=2.0))) __attribute__((availability(tvos,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(watchos,introduced=1.0))) __attribute__((availability(watchos,deprecated=3.0,message="use arc4random_stir")));
void arc4random_buf(void * __buf, size_t __nbytes) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
uint32_t
  arc4random_uniform(uint32_t __upper_bound) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^ _Nonnull)(void)) __attribute__((availability(macosx,introduced=10.6)));
# 277 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 3 4
void *bsearch_b(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" ) __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);
void setprogname(const char *);
# 311 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/stdlib.h" 3 4
int heapsort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));

int heapsort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));

int mergesort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

void psort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *))
     __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* _Nonnull __compar)(void *, const void *, const void *))
     __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* _Nonnull __compar)(void *, const void *, const void *));
int radixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
int rpmatch(const char *)
 __attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int sradixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *__ptr, size_t __size) __attribute__((alloc_size(2)));
long long
 strtonum(const char *__numstr, long long __minval, long long __maxval, const char **__errstrp)
 __attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));

long long
  strtoq(const char *__str, char **__endptr, int __base);
unsigned long long
  strtouq(const char *__str, char **__endptr, int __base);

extern char *suboptarg;
# 10 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 2 3 4




void *memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void *memcpy(void *__dst, const void *__src, size_t __n);
void *memmove(void *__dst, const void *__src, size_t __len);
void *memset(void *__b, int __c, size_t __len);
char *strcat(char *__s1, const char *__s2);
char *strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *strcpy(char *__dst, const char *__src);
size_t strcspn(const char *__s, const char *__charset);
char *strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *strncat(char *__s1, const char *__s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char *strncpy(char *__dst, const char *__src, size_t __n);
char *strpbrk(const char *__s, const char *__charset);
char *strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char *strstr(const char *__big, const char *__little);
char *strtok(char *__str, const char *__sep);
size_t strxfrm(char *__s1, const char *__s2, size_t __n);
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 3 4
char *strtok_r(char *__str, const char *__sep, char **__lasts);
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 3 4
int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 3 4
char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int __sig);







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 2 3 4


errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) __attribute__((availability(macosx,introduced=10.9)));







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 2 3 4


void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);


void swab(const void * restrict, void * restrict, ssize_t);

__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);

__attribute__((availability(macosx,introduced=11.0))) __attribute__((availability(ios,introduced=14.0)))
__attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)))
int strsignal_r(int __sig, char *__strsignalbuf, size_t __buflen);








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/strings.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/strings.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/strings.h" 2 3 4




int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 1 3 4
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/strings.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/secure/_strings.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/secure/_strings.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/secure/_common.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/secure/_strings.h" 2 3 4
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/secure/_string.h" 1 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/string.h" 2 3 4
# 11 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2

# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/constants.h" 1
# 18 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/constants.h"
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/platform.h" 1
# 281 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/platform.h"
static inline __attribute__((__always_inline__)) uint16_t BrotliUnalignedRead16(const void* p) {
  uint16_t t;
  __builtin___memcpy_chk (&t, p, sizeof t, __builtin_object_size (&t, 0));
  return t;
}
static inline __attribute__((__always_inline__)) uint32_t BrotliUnalignedRead32(const void* p) {
  uint32_t t;
  __builtin___memcpy_chk (&t, p, sizeof t, __builtin_object_size (&t, 0));
  return t;
}
static inline __attribute__((__always_inline__)) uint64_t BrotliUnalignedRead64(const void* p) {
  uint64_t t;
  __builtin___memcpy_chk (&t, p, sizeof t, __builtin_object_size (&t, 0));
  return t;
}
static inline __attribute__((__always_inline__)) void BrotliUnalignedWrite64(void* p, uint64_t v) {
  __builtin___memcpy_chk (p, &v, sizeof v, __builtin_object_size (p, 0));
}
# 374 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/platform.h"
static inline __attribute__((__always_inline__)) void* BROTLI_UNALIGNED_LOAD_PTR(const void* p) {
  void* v;
  __builtin___memcpy_chk (&v, p, sizeof(void*), __builtin_object_size (&v, 0));
  return v;
}

static inline __attribute__((__always_inline__)) void BROTLI_UNALIGNED_STORE_PTR(void* p, const void* v) {
  __builtin___memcpy_chk (p, &v, sizeof(void*), __builtin_object_size (p, 0));
}
# 423 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/platform.h"
static inline __attribute__((__always_inline__)) uint64_t BrotliRBit(uint64_t input) {
  uint64_t output;
  __asm__("rbit %0, %1\n" : "=r"(output) : "r"(input));
  return output;
}
# 445 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/platform.h"
static inline __attribute__((__always_inline__)) double brotli_min_double (double a, double b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) double brotli_max_double (double a, double b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_min_float (float a, float b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_max_float (float a, float b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_min_int (int a, int b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_max_int (int a, int b) { return a > b ? a : b; }
static inline __attribute__((__always_inline__)) size_t brotli_min_size_t (size_t a, size_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) size_t brotli_max_size_t (size_t a, size_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_min_uint32_t (uint32_t a, uint32_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_max_uint32_t (uint32_t a, uint32_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_min_uint8_t (uint8_t a, uint8_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_max_uint8_t (uint8_t a, uint8_t b) { return a > b ? a : b; }
# 488 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/platform.h"
                  void* BrotliDefaultAllocFunc(void* opaque, size_t size);


                  void BrotliDefaultFreeFunc(void* opaque, void* address);

static inline __attribute__((__always_inline__)) __attribute__ ((unused)) void BrotliSuppressUnusedFunctions(void) {
  (void)(&BrotliSuppressUnusedFunctions);
  (void)(&BrotliUnalignedRead16);
  (void)(&BrotliUnalignedRead32);
  (void)(&BrotliUnalignedRead64);
  (void)(&BrotliUnalignedWrite64);
  (void)(&BrotliUnalignedRead16);
  (void)(&BrotliUnalignedRead32);
  (void)(&BrotliUnalignedRead64);
  (void)(&BrotliUnalignedWrite64);
  (void)(&BROTLI_UNALIGNED_LOAD_PTR);
  (void)(&BROTLI_UNALIGNED_STORE_PTR);
  (void)(&BrotliRBit);
  (void)(&brotli_min_double);
  (void)(&brotli_max_double);
  (void)(&brotli_min_float);
  (void)(&brotli_max_float);
  (void)(&brotli_min_int);
  (void)(&brotli_max_int);
  (void)(&brotli_min_size_t);
  (void)(&brotli_max_size_t);
  (void)(&brotli_min_uint32_t);
  (void)(&brotli_max_uint32_t);
  (void)(&brotli_min_uint8_t);
  (void)(&brotli_max_uint8_t);
  (void)(&BrotliDefaultAllocFunc);
  (void)(&BrotliDefaultFreeFunc);



}
# 19 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/constants.h" 2
# 106 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/constants.h"
typedef struct BrotliDistanceCodeLimit {
  uint32_t max_alphabet_size;
  uint32_t max_distance;
} BrotliDistanceCodeLimit;
# 128 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/constants.h"
static inline __attribute__((__always_inline__)) __attribute__ ((unused)) BrotliDistanceCodeLimit BrotliCalculateDistanceCodeLimit(
    uint32_t max_distance, uint32_t npostfix, uint32_t ndirect) {
  BrotliDistanceCodeLimit result;


  (void)(&BrotliCalculateDistanceCodeLimit);
  if (max_distance <= ndirect) {

    result.max_alphabet_size = max_distance + 16;
    result.max_distance = max_distance;
    return result;
  } else {

    uint32_t forbidden_distance = max_distance + 1;

    uint32_t offset = forbidden_distance - ndirect - 1;
    uint32_t ndistbits = 0;
    uint32_t tmp;
    uint32_t half;
    uint32_t group;

    uint32_t postfix = (1u << npostfix) - 1;
    uint32_t extra;
    uint32_t start;

    offset = (offset >> npostfix) + 4;

    tmp = offset / 2;

    while (tmp != 0) {ndistbits++; tmp = tmp >> 1;}

    ndistbits--;

    half = (offset >> ndistbits) & 1;

    group = ((ndistbits - 1) << 1) | half;

    if (group == 0) {

      result.max_alphabet_size = ndirect + 16;
      result.max_distance = ndirect;
      return result;
    }

    group--;

    ndistbits = (group >> 1) + 1;

    extra = (1u << ndistbits) - 1;

    start = (1u << (ndistbits + 1)) - 4;

    start += (group & 1) << ndistbits;

    result.max_alphabet_size = ((group << npostfix) | postfix) + ndirect +
        16 + 1;

    result.max_distance = ((start + extra) << npostfix) + postfix + ndirect + 1;
    return result;
  }
}



typedef struct {
  uint16_t offset;
  uint8_t nbits;
} BrotliPrefixCodeRange;


                  extern const BrotliPrefixCodeRange
    _kBrotliPrefixCodeRanges[26];
# 13 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/context.h" 1
# 94 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/context.h"
typedef enum ContextType {
  CONTEXT_LSB6 = 0,
  CONTEXT_MSB6 = 1,
  CONTEXT_UTF8 = 2,
  CONTEXT_SIGNED = 3
} ContextType;



                  extern const uint8_t _kBrotliContextLookupTable[2048];

typedef const uint8_t* ContextLut;
# 14 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/dictionary.h" 1
# 19 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/dictionary.h"
typedef struct BrotliDictionary {
# 30 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/dictionary.h"
  uint8_t size_bits_by_length[32];


  uint32_t offsets_by_length[32];


  size_t data_size;




  const uint8_t* data;
} BrotliDictionary;

                  const BrotliDictionary* BrotliGetDictionary(void);
# 55 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/dictionary.h"
                  void BrotliSetDictionaryData(const uint8_t* data);
# 15 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2

# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/shared_dictionary_internal.h" 1
# 16 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/shared_dictionary_internal.h"
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/transform.h" 1
# 18 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/transform.h"
enum BrotliWordTransformType {
  BROTLI_TRANSFORM_IDENTITY = 0,
  BROTLI_TRANSFORM_OMIT_LAST_1 = 1,
  BROTLI_TRANSFORM_OMIT_LAST_2 = 2,
  BROTLI_TRANSFORM_OMIT_LAST_3 = 3,
  BROTLI_TRANSFORM_OMIT_LAST_4 = 4,
  BROTLI_TRANSFORM_OMIT_LAST_5 = 5,
  BROTLI_TRANSFORM_OMIT_LAST_6 = 6,
  BROTLI_TRANSFORM_OMIT_LAST_7 = 7,
  BROTLI_TRANSFORM_OMIT_LAST_8 = 8,
  BROTLI_TRANSFORM_OMIT_LAST_9 = 9,
  BROTLI_TRANSFORM_UPPERCASE_FIRST = 10,
  BROTLI_TRANSFORM_UPPERCASE_ALL = 11,
  BROTLI_TRANSFORM_OMIT_FIRST_1 = 12,
  BROTLI_TRANSFORM_OMIT_FIRST_2 = 13,
  BROTLI_TRANSFORM_OMIT_FIRST_3 = 14,
  BROTLI_TRANSFORM_OMIT_FIRST_4 = 15,
  BROTLI_TRANSFORM_OMIT_FIRST_5 = 16,
  BROTLI_TRANSFORM_OMIT_FIRST_6 = 17,
  BROTLI_TRANSFORM_OMIT_FIRST_7 = 18,
  BROTLI_TRANSFORM_OMIT_FIRST_8 = 19,
  BROTLI_TRANSFORM_OMIT_FIRST_9 = 20,
  BROTLI_TRANSFORM_SHIFT_FIRST = 21,
  BROTLI_TRANSFORM_SHIFT_ALL = 22,
  BROTLI_NUM_TRANSFORM_TYPES
};



typedef struct BrotliTransforms {
  uint16_t prefix_suffix_size;

  const uint8_t* prefix_suffix;
  const uint16_t* prefix_suffix_map;
  uint32_t num_transforms;

  const uint8_t* transforms;


  const uint8_t* params;



  int16_t cutOffTransforms[BROTLI_TRANSFORM_OMIT_LAST_9 + 1];
} BrotliTransforms;
# 75 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/transform.h"
                  const BrotliTransforms* BrotliGetTransforms(void);

                  int BrotliTransformDictionaryWord(
    uint8_t* dst, const uint8_t* word, int len,
    const BrotliTransforms* transforms, int transform_idx);
# 17 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/shared_dictionary_internal.h" 2





struct BrotliSharedDictionaryStruct {

  uint32_t num_prefix;
  size_t prefix_size[15];
  const uint8_t* prefix[15];




  int context_based;

  uint8_t context_map[64];


  uint8_t num_dictionaries;


  const BrotliDictionary* words[64];


  const BrotliTransforms* transforms[64];


  uint8_t num_word_lists;


  BrotliDictionary* words_instances;



  uint8_t num_transform_lists;



  BrotliTransforms* transforms_instances;



  uint16_t* prefix_suffix_maps;


  brotli_alloc_func alloc_func;
  brotli_free_func free_func;
  void* memory_manager_opaque;
};

typedef struct BrotliSharedDictionaryStruct BrotliSharedDictionaryInternal;
# 17 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2

# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/../common/version.h" 1
# 19 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/bit_reader.h" 1
# 25 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/bit_reader.h"
__attribute__ ((visibility ("hidden"))) extern const uint32_t kBrotliBitMask[33];

static inline __attribute__((__always_inline__)) uint32_t BitMask(uint32_t n) {
  if ((!!__builtin_constant_p(n)) || (!!1)) {


    return ~((0xFFFFFFFFu) << n);
  } else {
    return kBrotliBitMask[n];
  }
}

typedef struct {
  uint64_t val_;
  uint32_t bit_pos_;
  const uint8_t* next_in;
  size_t avail_in;
} BrotliBitReader;

typedef struct {
  uint64_t val_;
  uint32_t bit_pos_;
  const uint8_t* next_in;
  size_t avail_in;
} BrotliBitReaderState;


__attribute__ ((visibility ("hidden"))) void BrotliInitBitReader(BrotliBitReader* const br);






__attribute__ ((visibility ("hidden"))) int BrotliWarmupBitReader(BrotliBitReader* const br);




__attribute__ ((visibility ("hidden"))) __attribute__((__noinline__)) int BrotliSafeReadBits32Slow(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val);

static inline __attribute__((__always_inline__)) void BrotliBitReaderSaveState(
    BrotliBitReader* const from, BrotliBitReaderState* to) {
  to->val_ = from->val_;
  to->bit_pos_ = from->bit_pos_;
  to->next_in = from->next_in;
  to->avail_in = from->avail_in;
}

static inline __attribute__((__always_inline__)) void BrotliBitReaderRestoreState(
    BrotliBitReader* const to, BrotliBitReaderState* from) {
  to->val_ = from->val_;
  to->bit_pos_ = from->bit_pos_;
  to->next_in = from->next_in;
  to->avail_in = from->avail_in;
}

static inline __attribute__((__always_inline__)) uint32_t BrotliGetAvailableBits(
    const BrotliBitReader* br) {
  return (1 ? 64 : 32) - br->bit_pos_;
}




static inline __attribute__((__always_inline__)) size_t BrotliGetRemainingBytes(BrotliBitReader* br) {
  static const size_t kCap = (size_t)1 << 30;
  if (br->avail_in > kCap) return kCap;
  return br->avail_in + (BrotliGetAvailableBits(br) >> 3);
}



static inline __attribute__((__always_inline__)) int BrotliCheckInputAmount(
    BrotliBitReader* const br, size_t num) {
  return (!!(br->avail_in >= num) ? 1 : 0);
}





static inline __attribute__((__always_inline__)) void BrotliFillBitWindow(
    BrotliBitReader* const br, uint32_t n_bits) {

  if ((!!1) && (!!__builtin_constant_p(n_bits)) &&
      (n_bits <= 8)) {
    uint32_t bit_pos = br->bit_pos_;
    if (bit_pos >= 56) {
      br->val_ =
          (br->val_ >> 56) | (BrotliUnalignedRead64(br->next_in) << 8);
      br->bit_pos_ =
          bit_pos ^ 56;
      br->avail_in -= 7;
      br->next_in += 7;
    }
  } else if ((!!1) && (!!__builtin_constant_p(n_bits)) &&
             (n_bits <= 16)) {
    uint32_t bit_pos = br->bit_pos_;
    if (bit_pos >= 48) {
      br->val_ =
          (br->val_ >> 48) | (BrotliUnalignedRead64(br->next_in) << 16);
      br->bit_pos_ =
          bit_pos ^ 48;
      br->avail_in -= 6;
      br->next_in += 6;
    }
  } else {
    uint32_t bit_pos = br->bit_pos_;
    if (bit_pos >= 32) {
      br->val_ = (br->val_ >> 32) |
                 (((uint64_t)BrotliUnalignedRead32(br->next_in)) << 32);
      br->bit_pos_ =
          bit_pos ^ 32;
      br->avail_in -= (sizeof(uint64_t) >> 1);
      br->next_in += (sizeof(uint64_t) >> 1);
    }
  }
# 168 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/bit_reader.h"
}



static inline __attribute__((__always_inline__)) void BrotliFillBitWindow16(BrotliBitReader* const br) {
  BrotliFillBitWindow(br, 17);
}



static inline __attribute__((__always_inline__)) int BrotliPullByte(BrotliBitReader* const br) {
  if (br->avail_in == 0) {
    return 0;
  }
  br->val_ >>= 8;

  br->val_ |= ((uint64_t)*br->next_in) << 56;



  br->bit_pos_ -= 8;
  --br->avail_in;
  ++br->next_in;
  return 1;
}



static inline __attribute__((__always_inline__)) uint64_t BrotliGetBitsUnmasked(
    BrotliBitReader* const br) {
  return br->val_ >> br->bit_pos_;
}



static inline __attribute__((__always_inline__)) uint32_t BrotliGet16BitsUnmasked(
    BrotliBitReader* const br) {
  BrotliFillBitWindow(br, 16);
  return (uint32_t)BrotliGetBitsUnmasked(br);
}



static inline __attribute__((__always_inline__)) uint32_t BrotliGetBits(
    BrotliBitReader* const br, uint32_t n_bits) {
  BrotliFillBitWindow(br, n_bits);
  return (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(n_bits);
}



static inline __attribute__((__always_inline__)) int BrotliSafeGetBits(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  while (BrotliGetAvailableBits(br) < n_bits) {
    if (!BrotliPullByte(br)) {
      return 0;
    }
  }
  *val = (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(n_bits);
  return 1;
}


static inline __attribute__((__always_inline__)) void BrotliDropBits(
    BrotliBitReader* const br, uint32_t n_bits) {
  br->bit_pos_ += n_bits;
}

static inline __attribute__((__always_inline__)) void BrotliBitReaderUnload(BrotliBitReader* br) {
  uint32_t unused_bytes = BrotliGetAvailableBits(br) >> 3;
  uint32_t unused_bits = unused_bytes << 3;
  br->avail_in += unused_bytes;
  br->next_in -= unused_bytes;
  if (unused_bits == sizeof(br->val_) << 3) {
    br->val_ = 0;
  } else {
    br->val_ <<= unused_bits;
  }
  br->bit_pos_ += unused_bits;
}



static inline __attribute__((__always_inline__)) void BrotliTakeBits(
  BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  *val = (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(n_bits);

                                                                    ;
  BrotliDropBits(br, n_bits);
}




static inline __attribute__((__always_inline__)) uint32_t BrotliReadBits24(
    BrotliBitReader* const br, uint32_t n_bits) {
                             ;
  if (1 || (n_bits <= 16)) {
    uint32_t val;
    BrotliFillBitWindow(br, n_bits);
    BrotliTakeBits(br, n_bits, &val);
    return val;
  } else {
    uint32_t low_val;
    uint32_t high_val;
    BrotliFillBitWindow(br, 16);
    BrotliTakeBits(br, 16, &low_val);
    BrotliFillBitWindow(br, 8);
    BrotliTakeBits(br, n_bits - 16, &high_val);
    return low_val | (high_val << 16);
  }
}


static inline __attribute__((__always_inline__)) uint32_t BrotliReadBits32(
    BrotliBitReader* const br, uint32_t n_bits) {
                             ;
  if (1 || (n_bits <= 16)) {
    uint32_t val;
    BrotliFillBitWindow(br, n_bits);
    BrotliTakeBits(br, n_bits, &val);
    return val;
  } else {
    uint32_t low_val;
    uint32_t high_val;
    BrotliFillBitWindow(br, 16);
    BrotliTakeBits(br, 16, &low_val);
    BrotliFillBitWindow(br, 16);
    BrotliTakeBits(br, n_bits - 16, &high_val);
    return low_val | (high_val << 16);
  }
}




static inline __attribute__((__always_inline__)) int BrotliSafeReadBits(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
                             ;
  while (BrotliGetAvailableBits(br) < n_bits) {
    if (!BrotliPullByte(br)) {
      return 0;
    }
  }
  BrotliTakeBits(br, n_bits, val);
  return 1;
}


static inline __attribute__((__always_inline__)) int BrotliSafeReadBits32(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
                             ;
  if (1 || (n_bits <= 24)) {
    while (BrotliGetAvailableBits(br) < n_bits) {
      if (!BrotliPullByte(br)) {
        return 0;
      }
    }
    BrotliTakeBits(br, n_bits, val);
    return 1;
  } else {
    return BrotliSafeReadBits32Slow(br, n_bits, val);
  }
}



static inline __attribute__((__always_inline__)) int BrotliJumpToByteBoundary(BrotliBitReader* br) {
  uint32_t pad_bits_count = BrotliGetAvailableBits(br) & 0x7;
  uint32_t pad_bits = 0;
  if (pad_bits_count != 0) {
    BrotliTakeBits(br, pad_bits_count, &pad_bits);
  }
  return (!!(pad_bits == 0) ? 1 : 0);
}




static inline __attribute__((__always_inline__)) void BrotliCopyBytes(uint8_t* dest,
                                          BrotliBitReader* br, size_t num) {
  while (BrotliGetAvailableBits(br) >= 8 && num > 0) {
    *dest = (uint8_t)BrotliGetBitsUnmasked(br);
    BrotliDropBits(br, 8);
    ++dest;
    --num;
  }
  __builtin___memcpy_chk (dest, br->next_in, num, __builtin_object_size (dest, 0));
  br->avail_in -= num;
  br->next_in += num;
}
# 20 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/huffman.h" 1
# 39 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/huffman.h"
typedef struct {
  uint8_t bits;
  uint16_t value;
} HuffmanCode;

static inline __attribute__((__always_inline__)) HuffmanCode ConstructHuffmanCode(const uint8_t bits,
    const uint16_t value) {
  HuffmanCode h;
  h.bits = bits;
  h.value = value;
  return h;
}
# 92 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/huffman.h"
__attribute__ ((visibility ("hidden"))) void BrotliBuildCodeLengthsHuffmanTable(HuffmanCode* root_table,
    const uint8_t* const code_lengths, uint16_t* count);



__attribute__ ((visibility ("hidden"))) uint32_t BrotliBuildHuffmanTable(HuffmanCode* root_table,
    int root_bits, const uint16_t* const symbol_lists, uint16_t* count);





__attribute__ ((visibility ("hidden"))) uint32_t BrotliBuildSimpleHuffmanTable(HuffmanCode* table,
    int root_bits, uint16_t* symbols, uint32_t num_symbols);




typedef struct {
  HuffmanCode** htrees;
  HuffmanCode* codes;
  uint16_t alphabet_size_max;
  uint16_t alphabet_size_limit;
  uint16_t num_htrees;
} HuffmanTreeGroup;
# 21 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/prefix.h" 1
# 17 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/prefix.h"
typedef struct CmdLutElement {
  uint8_t insert_len_extra_bits;
  uint8_t copy_len_extra_bits;
  int8_t distance_code;
  uint8_t context;
  uint16_t insert_len_offset;
  uint16_t copy_len_offset;
} CmdLutElement;

static const CmdLutElement kCmdLut[704] = {
  { 0x00, 0x00, 0, 0x00, 0x0000, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0000, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0000, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0001, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0001, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0001, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0002, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0002, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0002, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0003, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0003, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0003, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0004, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0004, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0004, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0005, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0005, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0005, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0009 },
  { 0x01, 0x00, 0, 0x00, 0x0006, 0x0002 },
  { 0x01, 0x00, 0, 0x01, 0x0006, 0x0003 },
  { 0x01, 0x00, 0, 0x02, 0x0006, 0x0004 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0005 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0006 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0007 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0008 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0009 },
  { 0x01, 0x00, 0, 0x00, 0x0008, 0x0002 },
  { 0x01, 0x00, 0, 0x01, 0x0008, 0x0003 },
  { 0x01, 0x00, 0, 0x02, 0x0008, 0x0004 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0005 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0006 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0007 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0008 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0009 },
  { 0x00, 0x01, 0, 0x03, 0x0000, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0000, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0000, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0000, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0000, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0000, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0000, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0000, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0001, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0001, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0001, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0001, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0001, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0001, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0001, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0001, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0002, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0002, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0002, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0002, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0002, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0002, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0002, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0002, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0003, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0003, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0003, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0003, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0003, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0003, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0003, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0003, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0004, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0004, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0004, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0004, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0004, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0004, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0004, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0004, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0005, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0005, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0005, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0005, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0005, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0005, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0005, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0005, 0x0036 },
  { 0x01, 0x01, 0, 0x03, 0x0006, 0x000a },
  { 0x01, 0x01, 0, 0x03, 0x0006, 0x000c },
  { 0x01, 0x02, 0, 0x03, 0x0006, 0x000e },
  { 0x01, 0x02, 0, 0x03, 0x0006, 0x0012 },
  { 0x01, 0x03, 0, 0x03, 0x0006, 0x0016 },
  { 0x01, 0x03, 0, 0x03, 0x0006, 0x001e },
  { 0x01, 0x04, 0, 0x03, 0x0006, 0x0026 },
  { 0x01, 0x04, 0, 0x03, 0x0006, 0x0036 },
  { 0x01, 0x01, 0, 0x03, 0x0008, 0x000a },
  { 0x01, 0x01, 0, 0x03, 0x0008, 0x000c },
  { 0x01, 0x02, 0, 0x03, 0x0008, 0x000e },
  { 0x01, 0x02, 0, 0x03, 0x0008, 0x0012 },
  { 0x01, 0x03, 0, 0x03, 0x0008, 0x0016 },
  { 0x01, 0x03, 0, 0x03, 0x0008, 0x001e },
  { 0x01, 0x04, 0, 0x03, 0x0008, 0x0026 },
  { 0x01, 0x04, 0, 0x03, 0x0008, 0x0036 },
  { 0x00, 0x00, -1, 0x00, 0x0000, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0000, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0000, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0001, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0001, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0001, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0002, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0002, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0002, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0003, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0003, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0003, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0004, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0004, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0004, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0005, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0005, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0005, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0009 },
  { 0x01, 0x00, -1, 0x00, 0x0006, 0x0002 },
  { 0x01, 0x00, -1, 0x01, 0x0006, 0x0003 },
  { 0x01, 0x00, -1, 0x02, 0x0006, 0x0004 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0005 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0006 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0007 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0008 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0009 },
  { 0x01, 0x00, -1, 0x00, 0x0008, 0x0002 },
  { 0x01, 0x00, -1, 0x01, 0x0008, 0x0003 },
  { 0x01, 0x00, -1, 0x02, 0x0008, 0x0004 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0005 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0006 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0007 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0008 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0009 },
  { 0x00, 0x01, -1, 0x03, 0x0000, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0000, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0000, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0000, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0000, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0000, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0000, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0000, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0001, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0001, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0001, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0001, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0001, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0001, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0001, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0001, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0002, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0002, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0002, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0002, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0002, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0002, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0002, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0002, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0003, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0003, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0003, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0003, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0003, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0003, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0003, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0003, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0004, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0004, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0004, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0004, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0004, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0004, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0004, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0004, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0005, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0005, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0005, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0005, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0005, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0005, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0005, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0005, 0x0036 },
  { 0x01, 0x01, -1, 0x03, 0x0006, 0x000a },
  { 0x01, 0x01, -1, 0x03, 0x0006, 0x000c },
  { 0x01, 0x02, -1, 0x03, 0x0006, 0x000e },
  { 0x01, 0x02, -1, 0x03, 0x0006, 0x0012 },
  { 0x01, 0x03, -1, 0x03, 0x0006, 0x0016 },
  { 0x01, 0x03, -1, 0x03, 0x0006, 0x001e },
  { 0x01, 0x04, -1, 0x03, 0x0006, 0x0026 },
  { 0x01, 0x04, -1, 0x03, 0x0006, 0x0036 },
  { 0x01, 0x01, -1, 0x03, 0x0008, 0x000a },
  { 0x01, 0x01, -1, 0x03, 0x0008, 0x000c },
  { 0x01, 0x02, -1, 0x03, 0x0008, 0x000e },
  { 0x01, 0x02, -1, 0x03, 0x0008, 0x0012 },
  { 0x01, 0x03, -1, 0x03, 0x0008, 0x0016 },
  { 0x01, 0x03, -1, 0x03, 0x0008, 0x001e },
  { 0x01, 0x04, -1, 0x03, 0x0008, 0x0026 },
  { 0x01, 0x04, -1, 0x03, 0x0008, 0x0036 },
  { 0x02, 0x00, -1, 0x00, 0x000a, 0x0002 },
  { 0x02, 0x00, -1, 0x01, 0x000a, 0x0003 },
  { 0x02, 0x00, -1, 0x02, 0x000a, 0x0004 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0005 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0006 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0007 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0008 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0009 },
  { 0x02, 0x00, -1, 0x00, 0x000e, 0x0002 },
  { 0x02, 0x00, -1, 0x01, 0x000e, 0x0003 },
  { 0x02, 0x00, -1, 0x02, 0x000e, 0x0004 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0005 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0006 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0007 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0008 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0009 },
  { 0x03, 0x00, -1, 0x00, 0x0012, 0x0002 },
  { 0x03, 0x00, -1, 0x01, 0x0012, 0x0003 },
  { 0x03, 0x00, -1, 0x02, 0x0012, 0x0004 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0005 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0006 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0007 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0008 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0009 },
  { 0x03, 0x00, -1, 0x00, 0x001a, 0x0002 },
  { 0x03, 0x00, -1, 0x01, 0x001a, 0x0003 },
  { 0x03, 0x00, -1, 0x02, 0x001a, 0x0004 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0005 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0006 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0007 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0008 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0009 },
  { 0x04, 0x00, -1, 0x00, 0x0022, 0x0002 },
  { 0x04, 0x00, -1, 0x01, 0x0022, 0x0003 },
  { 0x04, 0x00, -1, 0x02, 0x0022, 0x0004 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0005 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0006 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0007 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0008 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0009 },
  { 0x04, 0x00, -1, 0x00, 0x0032, 0x0002 },
  { 0x04, 0x00, -1, 0x01, 0x0032, 0x0003 },
  { 0x04, 0x00, -1, 0x02, 0x0032, 0x0004 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0005 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0006 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0007 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0008 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0009 },
  { 0x05, 0x00, -1, 0x00, 0x0042, 0x0002 },
  { 0x05, 0x00, -1, 0x01, 0x0042, 0x0003 },
  { 0x05, 0x00, -1, 0x02, 0x0042, 0x0004 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0005 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0006 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0007 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0008 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0009 },
  { 0x05, 0x00, -1, 0x00, 0x0062, 0x0002 },
  { 0x05, 0x00, -1, 0x01, 0x0062, 0x0003 },
  { 0x05, 0x00, -1, 0x02, 0x0062, 0x0004 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0005 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0006 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0007 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0008 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0009 },
  { 0x02, 0x01, -1, 0x03, 0x000a, 0x000a },
  { 0x02, 0x01, -1, 0x03, 0x000a, 0x000c },
  { 0x02, 0x02, -1, 0x03, 0x000a, 0x000e },
  { 0x02, 0x02, -1, 0x03, 0x000a, 0x0012 },
  { 0x02, 0x03, -1, 0x03, 0x000a, 0x0016 },
  { 0x02, 0x03, -1, 0x03, 0x000a, 0x001e },
  { 0x02, 0x04, -1, 0x03, 0x000a, 0x0026 },
  { 0x02, 0x04, -1, 0x03, 0x000a, 0x0036 },
  { 0x02, 0x01, -1, 0x03, 0x000e, 0x000a },
  { 0x02, 0x01, -1, 0x03, 0x000e, 0x000c },
  { 0x02, 0x02, -1, 0x03, 0x000e, 0x000e },
  { 0x02, 0x02, -1, 0x03, 0x000e, 0x0012 },
  { 0x02, 0x03, -1, 0x03, 0x000e, 0x0016 },
  { 0x02, 0x03, -1, 0x03, 0x000e, 0x001e },
  { 0x02, 0x04, -1, 0x03, 0x000e, 0x0026 },
  { 0x02, 0x04, -1, 0x03, 0x000e, 0x0036 },
  { 0x03, 0x01, -1, 0x03, 0x0012, 0x000a },
  { 0x03, 0x01, -1, 0x03, 0x0012, 0x000c },
  { 0x03, 0x02, -1, 0x03, 0x0012, 0x000e },
  { 0x03, 0x02, -1, 0x03, 0x0012, 0x0012 },
  { 0x03, 0x03, -1, 0x03, 0x0012, 0x0016 },
  { 0x03, 0x03, -1, 0x03, 0x0012, 0x001e },
  { 0x03, 0x04, -1, 0x03, 0x0012, 0x0026 },
  { 0x03, 0x04, -1, 0x03, 0x0012, 0x0036 },
  { 0x03, 0x01, -1, 0x03, 0x001a, 0x000a },
  { 0x03, 0x01, -1, 0x03, 0x001a, 0x000c },
  { 0x03, 0x02, -1, 0x03, 0x001a, 0x000e },
  { 0x03, 0x02, -1, 0x03, 0x001a, 0x0012 },
  { 0x03, 0x03, -1, 0x03, 0x001a, 0x0016 },
  { 0x03, 0x03, -1, 0x03, 0x001a, 0x001e },
  { 0x03, 0x04, -1, 0x03, 0x001a, 0x0026 },
  { 0x03, 0x04, -1, 0x03, 0x001a, 0x0036 },
  { 0x04, 0x01, -1, 0x03, 0x0022, 0x000a },
  { 0x04, 0x01, -1, 0x03, 0x0022, 0x000c },
  { 0x04, 0x02, -1, 0x03, 0x0022, 0x000e },
  { 0x04, 0x02, -1, 0x03, 0x0022, 0x0012 },
  { 0x04, 0x03, -1, 0x03, 0x0022, 0x0016 },
  { 0x04, 0x03, -1, 0x03, 0x0022, 0x001e },
  { 0x04, 0x04, -1, 0x03, 0x0022, 0x0026 },
  { 0x04, 0x04, -1, 0x03, 0x0022, 0x0036 },
  { 0x04, 0x01, -1, 0x03, 0x0032, 0x000a },
  { 0x04, 0x01, -1, 0x03, 0x0032, 0x000c },
  { 0x04, 0x02, -1, 0x03, 0x0032, 0x000e },
  { 0x04, 0x02, -1, 0x03, 0x0032, 0x0012 },
  { 0x04, 0x03, -1, 0x03, 0x0032, 0x0016 },
  { 0x04, 0x03, -1, 0x03, 0x0032, 0x001e },
  { 0x04, 0x04, -1, 0x03, 0x0032, 0x0026 },
  { 0x04, 0x04, -1, 0x03, 0x0032, 0x0036 },
  { 0x05, 0x01, -1, 0x03, 0x0042, 0x000a },
  { 0x05, 0x01, -1, 0x03, 0x0042, 0x000c },
  { 0x05, 0x02, -1, 0x03, 0x0042, 0x000e },
  { 0x05, 0x02, -1, 0x03, 0x0042, 0x0012 },
  { 0x05, 0x03, -1, 0x03, 0x0042, 0x0016 },
  { 0x05, 0x03, -1, 0x03, 0x0042, 0x001e },
  { 0x05, 0x04, -1, 0x03, 0x0042, 0x0026 },
  { 0x05, 0x04, -1, 0x03, 0x0042, 0x0036 },
  { 0x05, 0x01, -1, 0x03, 0x0062, 0x000a },
  { 0x05, 0x01, -1, 0x03, 0x0062, 0x000c },
  { 0x05, 0x02, -1, 0x03, 0x0062, 0x000e },
  { 0x05, 0x02, -1, 0x03, 0x0062, 0x0012 },
  { 0x05, 0x03, -1, 0x03, 0x0062, 0x0016 },
  { 0x05, 0x03, -1, 0x03, 0x0062, 0x001e },
  { 0x05, 0x04, -1, 0x03, 0x0062, 0x0026 },
  { 0x05, 0x04, -1, 0x03, 0x0062, 0x0036 },
  { 0x00, 0x05, -1, 0x03, 0x0000, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0000, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0000, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0000, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0000, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0000, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0000, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0000, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0001, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0001, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0001, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0001, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0001, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0001, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0001, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0001, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0002, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0002, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0002, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0002, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0002, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0002, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0002, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0002, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0003, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0003, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0003, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0003, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0003, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0003, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0003, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0003, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0004, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0004, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0004, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0004, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0004, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0004, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0004, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0004, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0005, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0005, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0005, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0005, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0005, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0005, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0005, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0005, 0x0846 },
  { 0x01, 0x05, -1, 0x03, 0x0006, 0x0046 },
  { 0x01, 0x05, -1, 0x03, 0x0006, 0x0066 },
  { 0x01, 0x06, -1, 0x03, 0x0006, 0x0086 },
  { 0x01, 0x07, -1, 0x03, 0x0006, 0x00c6 },
  { 0x01, 0x08, -1, 0x03, 0x0006, 0x0146 },
  { 0x01, 0x09, -1, 0x03, 0x0006, 0x0246 },
  { 0x01, 0x0a, -1, 0x03, 0x0006, 0x0446 },
  { 0x01, 0x18, -1, 0x03, 0x0006, 0x0846 },
  { 0x01, 0x05, -1, 0x03, 0x0008, 0x0046 },
  { 0x01, 0x05, -1, 0x03, 0x0008, 0x0066 },
  { 0x01, 0x06, -1, 0x03, 0x0008, 0x0086 },
  { 0x01, 0x07, -1, 0x03, 0x0008, 0x00c6 },
  { 0x01, 0x08, -1, 0x03, 0x0008, 0x0146 },
  { 0x01, 0x09, -1, 0x03, 0x0008, 0x0246 },
  { 0x01, 0x0a, -1, 0x03, 0x0008, 0x0446 },
  { 0x01, 0x18, -1, 0x03, 0x0008, 0x0846 },
  { 0x06, 0x00, -1, 0x00, 0x0082, 0x0002 },
  { 0x06, 0x00, -1, 0x01, 0x0082, 0x0003 },
  { 0x06, 0x00, -1, 0x02, 0x0082, 0x0004 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0005 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0006 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0007 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0008 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0009 },
  { 0x07, 0x00, -1, 0x00, 0x00c2, 0x0002 },
  { 0x07, 0x00, -1, 0x01, 0x00c2, 0x0003 },
  { 0x07, 0x00, -1, 0x02, 0x00c2, 0x0004 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0005 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0006 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0007 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0008 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0009 },
  { 0x08, 0x00, -1, 0x00, 0x0142, 0x0002 },
  { 0x08, 0x00, -1, 0x01, 0x0142, 0x0003 },
  { 0x08, 0x00, -1, 0x02, 0x0142, 0x0004 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0005 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0006 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0007 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0008 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0009 },
  { 0x09, 0x00, -1, 0x00, 0x0242, 0x0002 },
  { 0x09, 0x00, -1, 0x01, 0x0242, 0x0003 },
  { 0x09, 0x00, -1, 0x02, 0x0242, 0x0004 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0005 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0006 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0007 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0008 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0009 },
  { 0x0a, 0x00, -1, 0x00, 0x0442, 0x0002 },
  { 0x0a, 0x00, -1, 0x01, 0x0442, 0x0003 },
  { 0x0a, 0x00, -1, 0x02, 0x0442, 0x0004 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0005 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0006 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0007 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0008 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0009 },
  { 0x0c, 0x00, -1, 0x00, 0x0842, 0x0002 },
  { 0x0c, 0x00, -1, 0x01, 0x0842, 0x0003 },
  { 0x0c, 0x00, -1, 0x02, 0x0842, 0x0004 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0005 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0006 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0007 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0008 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0009 },
  { 0x0e, 0x00, -1, 0x00, 0x1842, 0x0002 },
  { 0x0e, 0x00, -1, 0x01, 0x1842, 0x0003 },
  { 0x0e, 0x00, -1, 0x02, 0x1842, 0x0004 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0005 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0006 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0007 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0008 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0009 },
  { 0x18, 0x00, -1, 0x00, 0x5842, 0x0002 },
  { 0x18, 0x00, -1, 0x01, 0x5842, 0x0003 },
  { 0x18, 0x00, -1, 0x02, 0x5842, 0x0004 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0005 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0006 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0007 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0008 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0009 },
  { 0x02, 0x05, -1, 0x03, 0x000a, 0x0046 },
  { 0x02, 0x05, -1, 0x03, 0x000a, 0x0066 },
  { 0x02, 0x06, -1, 0x03, 0x000a, 0x0086 },
  { 0x02, 0x07, -1, 0x03, 0x000a, 0x00c6 },
  { 0x02, 0x08, -1, 0x03, 0x000a, 0x0146 },
  { 0x02, 0x09, -1, 0x03, 0x000a, 0x0246 },
  { 0x02, 0x0a, -1, 0x03, 0x000a, 0x0446 },
  { 0x02, 0x18, -1, 0x03, 0x000a, 0x0846 },
  { 0x02, 0x05, -1, 0x03, 0x000e, 0x0046 },
  { 0x02, 0x05, -1, 0x03, 0x000e, 0x0066 },
  { 0x02, 0x06, -1, 0x03, 0x000e, 0x0086 },
  { 0x02, 0x07, -1, 0x03, 0x000e, 0x00c6 },
  { 0x02, 0x08, -1, 0x03, 0x000e, 0x0146 },
  { 0x02, 0x09, -1, 0x03, 0x000e, 0x0246 },
  { 0x02, 0x0a, -1, 0x03, 0x000e, 0x0446 },
  { 0x02, 0x18, -1, 0x03, 0x000e, 0x0846 },
  { 0x03, 0x05, -1, 0x03, 0x0012, 0x0046 },
  { 0x03, 0x05, -1, 0x03, 0x0012, 0x0066 },
  { 0x03, 0x06, -1, 0x03, 0x0012, 0x0086 },
  { 0x03, 0x07, -1, 0x03, 0x0012, 0x00c6 },
  { 0x03, 0x08, -1, 0x03, 0x0012, 0x0146 },
  { 0x03, 0x09, -1, 0x03, 0x0012, 0x0246 },
  { 0x03, 0x0a, -1, 0x03, 0x0012, 0x0446 },
  { 0x03, 0x18, -1, 0x03, 0x0012, 0x0846 },
  { 0x03, 0x05, -1, 0x03, 0x001a, 0x0046 },
  { 0x03, 0x05, -1, 0x03, 0x001a, 0x0066 },
  { 0x03, 0x06, -1, 0x03, 0x001a, 0x0086 },
  { 0x03, 0x07, -1, 0x03, 0x001a, 0x00c6 },
  { 0x03, 0x08, -1, 0x03, 0x001a, 0x0146 },
  { 0x03, 0x09, -1, 0x03, 0x001a, 0x0246 },
  { 0x03, 0x0a, -1, 0x03, 0x001a, 0x0446 },
  { 0x03, 0x18, -1, 0x03, 0x001a, 0x0846 },
  { 0x04, 0x05, -1, 0x03, 0x0022, 0x0046 },
  { 0x04, 0x05, -1, 0x03, 0x0022, 0x0066 },
  { 0x04, 0x06, -1, 0x03, 0x0022, 0x0086 },
  { 0x04, 0x07, -1, 0x03, 0x0022, 0x00c6 },
  { 0x04, 0x08, -1, 0x03, 0x0022, 0x0146 },
  { 0x04, 0x09, -1, 0x03, 0x0022, 0x0246 },
  { 0x04, 0x0a, -1, 0x03, 0x0022, 0x0446 },
  { 0x04, 0x18, -1, 0x03, 0x0022, 0x0846 },
  { 0x04, 0x05, -1, 0x03, 0x0032, 0x0046 },
  { 0x04, 0x05, -1, 0x03, 0x0032, 0x0066 },
  { 0x04, 0x06, -1, 0x03, 0x0032, 0x0086 },
  { 0x04, 0x07, -1, 0x03, 0x0032, 0x00c6 },
  { 0x04, 0x08, -1, 0x03, 0x0032, 0x0146 },
  { 0x04, 0x09, -1, 0x03, 0x0032, 0x0246 },
  { 0x04, 0x0a, -1, 0x03, 0x0032, 0x0446 },
  { 0x04, 0x18, -1, 0x03, 0x0032, 0x0846 },
  { 0x05, 0x05, -1, 0x03, 0x0042, 0x0046 },
  { 0x05, 0x05, -1, 0x03, 0x0042, 0x0066 },
  { 0x05, 0x06, -1, 0x03, 0x0042, 0x0086 },
  { 0x05, 0x07, -1, 0x03, 0x0042, 0x00c6 },
  { 0x05, 0x08, -1, 0x03, 0x0042, 0x0146 },
  { 0x05, 0x09, -1, 0x03, 0x0042, 0x0246 },
  { 0x05, 0x0a, -1, 0x03, 0x0042, 0x0446 },
  { 0x05, 0x18, -1, 0x03, 0x0042, 0x0846 },
  { 0x05, 0x05, -1, 0x03, 0x0062, 0x0046 },
  { 0x05, 0x05, -1, 0x03, 0x0062, 0x0066 },
  { 0x05, 0x06, -1, 0x03, 0x0062, 0x0086 },
  { 0x05, 0x07, -1, 0x03, 0x0062, 0x00c6 },
  { 0x05, 0x08, -1, 0x03, 0x0062, 0x0146 },
  { 0x05, 0x09, -1, 0x03, 0x0062, 0x0246 },
  { 0x05, 0x0a, -1, 0x03, 0x0062, 0x0446 },
  { 0x05, 0x18, -1, 0x03, 0x0062, 0x0846 },
  { 0x06, 0x01, -1, 0x03, 0x0082, 0x000a },
  { 0x06, 0x01, -1, 0x03, 0x0082, 0x000c },
  { 0x06, 0x02, -1, 0x03, 0x0082, 0x000e },
  { 0x06, 0x02, -1, 0x03, 0x0082, 0x0012 },
  { 0x06, 0x03, -1, 0x03, 0x0082, 0x0016 },
  { 0x06, 0x03, -1, 0x03, 0x0082, 0x001e },
  { 0x06, 0x04, -1, 0x03, 0x0082, 0x0026 },
  { 0x06, 0x04, -1, 0x03, 0x0082, 0x0036 },
  { 0x07, 0x01, -1, 0x03, 0x00c2, 0x000a },
  { 0x07, 0x01, -1, 0x03, 0x00c2, 0x000c },
  { 0x07, 0x02, -1, 0x03, 0x00c2, 0x000e },
  { 0x07, 0x02, -1, 0x03, 0x00c2, 0x0012 },
  { 0x07, 0x03, -1, 0x03, 0x00c2, 0x0016 },
  { 0x07, 0x03, -1, 0x03, 0x00c2, 0x001e },
  { 0x07, 0x04, -1, 0x03, 0x00c2, 0x0026 },
  { 0x07, 0x04, -1, 0x03, 0x00c2, 0x0036 },
  { 0x08, 0x01, -1, 0x03, 0x0142, 0x000a },
  { 0x08, 0x01, -1, 0x03, 0x0142, 0x000c },
  { 0x08, 0x02, -1, 0x03, 0x0142, 0x000e },
  { 0x08, 0x02, -1, 0x03, 0x0142, 0x0012 },
  { 0x08, 0x03, -1, 0x03, 0x0142, 0x0016 },
  { 0x08, 0x03, -1, 0x03, 0x0142, 0x001e },
  { 0x08, 0x04, -1, 0x03, 0x0142, 0x0026 },
  { 0x08, 0x04, -1, 0x03, 0x0142, 0x0036 },
  { 0x09, 0x01, -1, 0x03, 0x0242, 0x000a },
  { 0x09, 0x01, -1, 0x03, 0x0242, 0x000c },
  { 0x09, 0x02, -1, 0x03, 0x0242, 0x000e },
  { 0x09, 0x02, -1, 0x03, 0x0242, 0x0012 },
  { 0x09, 0x03, -1, 0x03, 0x0242, 0x0016 },
  { 0x09, 0x03, -1, 0x03, 0x0242, 0x001e },
  { 0x09, 0x04, -1, 0x03, 0x0242, 0x0026 },
  { 0x09, 0x04, -1, 0x03, 0x0242, 0x0036 },
  { 0x0a, 0x01, -1, 0x03, 0x0442, 0x000a },
  { 0x0a, 0x01, -1, 0x03, 0x0442, 0x000c },
  { 0x0a, 0x02, -1, 0x03, 0x0442, 0x000e },
  { 0x0a, 0x02, -1, 0x03, 0x0442, 0x0012 },
  { 0x0a, 0x03, -1, 0x03, 0x0442, 0x0016 },
  { 0x0a, 0x03, -1, 0x03, 0x0442, 0x001e },
  { 0x0a, 0x04, -1, 0x03, 0x0442, 0x0026 },
  { 0x0a, 0x04, -1, 0x03, 0x0442, 0x0036 },
  { 0x0c, 0x01, -1, 0x03, 0x0842, 0x000a },
  { 0x0c, 0x01, -1, 0x03, 0x0842, 0x000c },
  { 0x0c, 0x02, -1, 0x03, 0x0842, 0x000e },
  { 0x0c, 0x02, -1, 0x03, 0x0842, 0x0012 },
  { 0x0c, 0x03, -1, 0x03, 0x0842, 0x0016 },
  { 0x0c, 0x03, -1, 0x03, 0x0842, 0x001e },
  { 0x0c, 0x04, -1, 0x03, 0x0842, 0x0026 },
  { 0x0c, 0x04, -1, 0x03, 0x0842, 0x0036 },
  { 0x0e, 0x01, -1, 0x03, 0x1842, 0x000a },
  { 0x0e, 0x01, -1, 0x03, 0x1842, 0x000c },
  { 0x0e, 0x02, -1, 0x03, 0x1842, 0x000e },
  { 0x0e, 0x02, -1, 0x03, 0x1842, 0x0012 },
  { 0x0e, 0x03, -1, 0x03, 0x1842, 0x0016 },
  { 0x0e, 0x03, -1, 0x03, 0x1842, 0x001e },
  { 0x0e, 0x04, -1, 0x03, 0x1842, 0x0026 },
  { 0x0e, 0x04, -1, 0x03, 0x1842, 0x0036 },
  { 0x18, 0x01, -1, 0x03, 0x5842, 0x000a },
  { 0x18, 0x01, -1, 0x03, 0x5842, 0x000c },
  { 0x18, 0x02, -1, 0x03, 0x5842, 0x000e },
  { 0x18, 0x02, -1, 0x03, 0x5842, 0x0012 },
  { 0x18, 0x03, -1, 0x03, 0x5842, 0x0016 },
  { 0x18, 0x03, -1, 0x03, 0x5842, 0x001e },
  { 0x18, 0x04, -1, 0x03, 0x5842, 0x0026 },
  { 0x18, 0x04, -1, 0x03, 0x5842, 0x0036 },
  { 0x06, 0x05, -1, 0x03, 0x0082, 0x0046 },
  { 0x06, 0x05, -1, 0x03, 0x0082, 0x0066 },
  { 0x06, 0x06, -1, 0x03, 0x0082, 0x0086 },
  { 0x06, 0x07, -1, 0x03, 0x0082, 0x00c6 },
  { 0x06, 0x08, -1, 0x03, 0x0082, 0x0146 },
  { 0x06, 0x09, -1, 0x03, 0x0082, 0x0246 },
  { 0x06, 0x0a, -1, 0x03, 0x0082, 0x0446 },
  { 0x06, 0x18, -1, 0x03, 0x0082, 0x0846 },
  { 0x07, 0x05, -1, 0x03, 0x00c2, 0x0046 },
  { 0x07, 0x05, -1, 0x03, 0x00c2, 0x0066 },
  { 0x07, 0x06, -1, 0x03, 0x00c2, 0x0086 },
  { 0x07, 0x07, -1, 0x03, 0x00c2, 0x00c6 },
  { 0x07, 0x08, -1, 0x03, 0x00c2, 0x0146 },
  { 0x07, 0x09, -1, 0x03, 0x00c2, 0x0246 },
  { 0x07, 0x0a, -1, 0x03, 0x00c2, 0x0446 },
  { 0x07, 0x18, -1, 0x03, 0x00c2, 0x0846 },
  { 0x08, 0x05, -1, 0x03, 0x0142, 0x0046 },
  { 0x08, 0x05, -1, 0x03, 0x0142, 0x0066 },
  { 0x08, 0x06, -1, 0x03, 0x0142, 0x0086 },
  { 0x08, 0x07, -1, 0x03, 0x0142, 0x00c6 },
  { 0x08, 0x08, -1, 0x03, 0x0142, 0x0146 },
  { 0x08, 0x09, -1, 0x03, 0x0142, 0x0246 },
  { 0x08, 0x0a, -1, 0x03, 0x0142, 0x0446 },
  { 0x08, 0x18, -1, 0x03, 0x0142, 0x0846 },
  { 0x09, 0x05, -1, 0x03, 0x0242, 0x0046 },
  { 0x09, 0x05, -1, 0x03, 0x0242, 0x0066 },
  { 0x09, 0x06, -1, 0x03, 0x0242, 0x0086 },
  { 0x09, 0x07, -1, 0x03, 0x0242, 0x00c6 },
  { 0x09, 0x08, -1, 0x03, 0x0242, 0x0146 },
  { 0x09, 0x09, -1, 0x03, 0x0242, 0x0246 },
  { 0x09, 0x0a, -1, 0x03, 0x0242, 0x0446 },
  { 0x09, 0x18, -1, 0x03, 0x0242, 0x0846 },
  { 0x0a, 0x05, -1, 0x03, 0x0442, 0x0046 },
  { 0x0a, 0x05, -1, 0x03, 0x0442, 0x0066 },
  { 0x0a, 0x06, -1, 0x03, 0x0442, 0x0086 },
  { 0x0a, 0x07, -1, 0x03, 0x0442, 0x00c6 },
  { 0x0a, 0x08, -1, 0x03, 0x0442, 0x0146 },
  { 0x0a, 0x09, -1, 0x03, 0x0442, 0x0246 },
  { 0x0a, 0x0a, -1, 0x03, 0x0442, 0x0446 },
  { 0x0a, 0x18, -1, 0x03, 0x0442, 0x0846 },
  { 0x0c, 0x05, -1, 0x03, 0x0842, 0x0046 },
  { 0x0c, 0x05, -1, 0x03, 0x0842, 0x0066 },
  { 0x0c, 0x06, -1, 0x03, 0x0842, 0x0086 },
  { 0x0c, 0x07, -1, 0x03, 0x0842, 0x00c6 },
  { 0x0c, 0x08, -1, 0x03, 0x0842, 0x0146 },
  { 0x0c, 0x09, -1, 0x03, 0x0842, 0x0246 },
  { 0x0c, 0x0a, -1, 0x03, 0x0842, 0x0446 },
  { 0x0c, 0x18, -1, 0x03, 0x0842, 0x0846 },
  { 0x0e, 0x05, -1, 0x03, 0x1842, 0x0046 },
  { 0x0e, 0x05, -1, 0x03, 0x1842, 0x0066 },
  { 0x0e, 0x06, -1, 0x03, 0x1842, 0x0086 },
  { 0x0e, 0x07, -1, 0x03, 0x1842, 0x00c6 },
  { 0x0e, 0x08, -1, 0x03, 0x1842, 0x0146 },
  { 0x0e, 0x09, -1, 0x03, 0x1842, 0x0246 },
  { 0x0e, 0x0a, -1, 0x03, 0x1842, 0x0446 },
  { 0x0e, 0x18, -1, 0x03, 0x1842, 0x0846 },
  { 0x18, 0x05, -1, 0x03, 0x5842, 0x0046 },
  { 0x18, 0x05, -1, 0x03, 0x5842, 0x0066 },
  { 0x18, 0x06, -1, 0x03, 0x5842, 0x0086 },
  { 0x18, 0x07, -1, 0x03, 0x5842, 0x00c6 },
  { 0x18, 0x08, -1, 0x03, 0x5842, 0x0146 },
  { 0x18, 0x09, -1, 0x03, 0x5842, 0x0246 },
  { 0x18, 0x0a, -1, 0x03, 0x5842, 0x0446 },
  { 0x18, 0x18, -1, 0x03, 0x5842, 0x0846 },
};
# 22 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2
# 1 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/state.h" 1
# 115 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/state.h"
typedef enum {
  BROTLI_STATE_UNINITED,
  BROTLI_STATE_LARGE_WINDOW_BITS,
  BROTLI_STATE_INITIALIZE,
  BROTLI_STATE_METABLOCK_BEGIN,
  BROTLI_STATE_METABLOCK_HEADER,
  BROTLI_STATE_METABLOCK_HEADER_2,
  BROTLI_STATE_CONTEXT_MODES,
  BROTLI_STATE_COMMAND_BEGIN,
  BROTLI_STATE_COMMAND_INNER,
  BROTLI_STATE_COMMAND_POST_DECODE_LITERALS,
  BROTLI_STATE_COMMAND_POST_WRAP_COPY,
  BROTLI_STATE_UNCOMPRESSED,
  BROTLI_STATE_METADATA,
  BROTLI_STATE_COMMAND_INNER_WRITE,
  BROTLI_STATE_METABLOCK_DONE,
  BROTLI_STATE_COMMAND_POST_WRITE_1,
  BROTLI_STATE_COMMAND_POST_WRITE_2,
  BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_HEADER,
  BROTLI_STATE_HUFFMAN_CODE_0,
  BROTLI_STATE_HUFFMAN_CODE_1,
  BROTLI_STATE_HUFFMAN_CODE_2,
  BROTLI_STATE_HUFFMAN_CODE_3,
  BROTLI_STATE_CONTEXT_MAP_1,
  BROTLI_STATE_CONTEXT_MAP_2,
  BROTLI_STATE_TREE_GROUP,
  BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_BODY,
  BROTLI_STATE_DONE
} BrotliRunningState;

typedef enum {
  BROTLI_STATE_METABLOCK_HEADER_NONE,
  BROTLI_STATE_METABLOCK_HEADER_EMPTY,
  BROTLI_STATE_METABLOCK_HEADER_NIBBLES,
  BROTLI_STATE_METABLOCK_HEADER_SIZE,
  BROTLI_STATE_METABLOCK_HEADER_UNCOMPRESSED,
  BROTLI_STATE_METABLOCK_HEADER_RESERVED,
  BROTLI_STATE_METABLOCK_HEADER_BYTES,
  BROTLI_STATE_METABLOCK_HEADER_METADATA
} BrotliRunningMetablockHeaderState;

typedef enum {
  BROTLI_STATE_UNCOMPRESSED_NONE,
  BROTLI_STATE_UNCOMPRESSED_WRITE
} BrotliRunningUncompressedState;

typedef enum {
  BROTLI_STATE_TREE_GROUP_NONE,
  BROTLI_STATE_TREE_GROUP_LOOP
} BrotliRunningTreeGroupState;

typedef enum {
  BROTLI_STATE_CONTEXT_MAP_NONE,
  BROTLI_STATE_CONTEXT_MAP_READ_PREFIX,
  BROTLI_STATE_CONTEXT_MAP_HUFFMAN,
  BROTLI_STATE_CONTEXT_MAP_DECODE,
  BROTLI_STATE_CONTEXT_MAP_TRANSFORM
} BrotliRunningContextMapState;

typedef enum {
  BROTLI_STATE_HUFFMAN_NONE,
  BROTLI_STATE_HUFFMAN_SIMPLE_SIZE,
  BROTLI_STATE_HUFFMAN_SIMPLE_READ,
  BROTLI_STATE_HUFFMAN_SIMPLE_BUILD,
  BROTLI_STATE_HUFFMAN_COMPLEX,
  BROTLI_STATE_HUFFMAN_LENGTH_SYMBOLS
} BrotliRunningHuffmanState;

typedef enum {
  BROTLI_STATE_DECODE_UINT8_NONE,
  BROTLI_STATE_DECODE_UINT8_SHORT,
  BROTLI_STATE_DECODE_UINT8_LONG
} BrotliRunningDecodeUint8State;

typedef enum {
  BROTLI_STATE_READ_BLOCK_LENGTH_NONE,
  BROTLI_STATE_READ_BLOCK_LENGTH_SUFFIX
} BrotliRunningReadBlockLengthState;


typedef struct BrotliDecoderCompoundDictionary {
  int num_chunks;
  int total_size;
  int br_index;
  int br_offset;
  int br_length;
  int br_copied;
  const uint8_t* chunks[16];
  int chunk_offsets[16];
  int block_bits;
  uint8_t block_map[256];
} BrotliDecoderCompoundDictionary;

typedef struct BrotliMetablockHeaderArena {
  BrotliRunningTreeGroupState substate_tree_group;
  BrotliRunningContextMapState substate_context_map;
  BrotliRunningHuffmanState substate_huffman;

  uint32_t sub_loop_counter;

  uint32_t repeat_code_len;
  uint32_t prev_code_len;


  uint32_t symbol;
  uint32_t repeat;
  uint32_t space;


  HuffmanCode table[32];

  uint16_t* symbol_lists;

  uint16_t symbols_lists_array[15 + 1 +
                               704];

  int next_symbol[32];
  uint8_t code_length_code_lengths[(17 + 1)];

  uint16_t code_length_histo[16];


  int htree_index;
  HuffmanCode* next;


  uint32_t context_index;
  uint32_t max_run_length_prefix;
  uint32_t code;
  HuffmanCode context_map_table[646];
} BrotliMetablockHeaderArena;

typedef struct BrotliMetablockBodyArena {
  uint8_t dist_extra_bits[544];
  uint32_t dist_offset[544];
} BrotliMetablockBodyArena;

struct BrotliDecoderStateStruct {
  BrotliRunningState state;


  int loop_counter;

  BrotliBitReader br;

  brotli_alloc_func alloc_func;
  brotli_free_func free_func;
  void* memory_manager_opaque;



  union {
    uint64_t u64;
    uint8_t u8[8];
  } buffer;
  uint32_t buffer_length;

  int pos;
  int max_backward_distance;
  int max_distance;
  int ringbuffer_size;
  int ringbuffer_mask;
  int dist_rb_idx;
  int dist_rb[4];
  int error_code;
  uint8_t* ringbuffer;
  uint8_t* ringbuffer_end;
  HuffmanCode* htree_command;
  const uint8_t* context_lookup;
  uint8_t* context_map_slice;
  uint8_t* dist_context_map_slice;



  HuffmanTreeGroup literal_hgroup;
  HuffmanTreeGroup insert_copy_hgroup;
  HuffmanTreeGroup distance_hgroup;
  HuffmanCode* block_type_trees;
  HuffmanCode* block_len_trees;


  int trivial_literal_context;


  int distance_context;
  int meta_block_remaining_len;
  uint32_t block_length_index;
  uint32_t block_length[3];
  uint32_t num_block_types[3];
  uint32_t block_type_rb[6];
  uint32_t distance_postfix_bits;
  uint32_t num_direct_distance_codes;
  uint32_t num_dist_htrees;
  uint8_t* dist_context_map;
  HuffmanCode* literal_htree;
  uint8_t dist_htree_index;

  int copy_length;
  int distance_code;


  size_t rb_roundtrips;
  size_t partial_pos_out;


  uint32_t mtf_upper_bound;
  uint32_t mtf[64 + 1];




  uint64_t used_input;


  BrotliRunningMetablockHeaderState substate_metablock_header;
  BrotliRunningUncompressedState substate_uncompressed;
  BrotliRunningDecodeUint8State substate_decode_uint8;
  BrotliRunningReadBlockLengthState substate_read_block_length;

  unsigned int is_last_metablock : 1;
  unsigned int is_uncompressed : 1;
  unsigned int is_metadata : 1;
  unsigned int should_wrap_ringbuffer : 1;
  unsigned int canny_ringbuffer_allocation : 1;
  unsigned int large_window : 1;
  unsigned int size_nibbles : 8;
  uint32_t window_bits;

  int new_ringbuffer_size;

  uint32_t num_literal_htrees;
  uint8_t* context_map;
  uint8_t* context_modes;

  BrotliSharedDictionaryInternal* dictionary;
  BrotliDecoderCompoundDictionary* compound_dictionary;

  uint32_t trivial_literal_contexts[8];

  union {
    BrotliMetablockHeaderArena header;
    BrotliMetablockBodyArena body;
  } arena;
};

typedef struct BrotliDecoderStateStruct BrotliDecoderStateInternal;


__attribute__ ((visibility ("hidden"))) int BrotliDecoderStateInit(BrotliDecoderStateInternal* s,
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque);
__attribute__ ((visibility ("hidden"))) void BrotliDecoderStateCleanup(BrotliDecoderStateInternal* s);
__attribute__ ((visibility ("hidden"))) void BrotliDecoderStateMetablockBegin(BrotliDecoderStateInternal* s);
__attribute__ ((visibility ("hidden"))) void BrotliDecoderStateCleanupAfterMetablock(
    BrotliDecoderStateInternal* s);
__attribute__ ((visibility ("hidden"))) int BrotliDecoderHuffmanTreeGroupInit(
    BrotliDecoderStateInternal* s, HuffmanTreeGroup* group, uint32_t alphabet_size_max,
    uint32_t alphabet_size_limit, uint32_t ntrees);
# 23 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2


# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 1 3
# 42 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
typedef float float32_t;
typedef __fp16 float16_t;

typedef double float64_t;



typedef uint8_t poly8_t;
typedef uint16_t poly16_t;
typedef uint64_t poly64_t;
typedef __uint128_t poly128_t;





typedef __attribute__((neon_vector_type(8))) int8_t int8x8_t;
typedef __attribute__((neon_vector_type(16))) int8_t int8x16_t;
typedef __attribute__((neon_vector_type(4))) int16_t int16x4_t;
typedef __attribute__((neon_vector_type(8))) int16_t int16x8_t;
typedef __attribute__((neon_vector_type(2))) int32_t int32x2_t;
typedef __attribute__((neon_vector_type(4))) int32_t int32x4_t;
typedef __attribute__((neon_vector_type(1))) int64_t int64x1_t;
typedef __attribute__((neon_vector_type(2))) int64_t int64x2_t;
typedef __attribute__((neon_vector_type(8))) uint8_t uint8x8_t;
typedef __attribute__((neon_vector_type(16))) uint8_t uint8x16_t;
typedef __attribute__((neon_vector_type(4))) uint16_t uint16x4_t;
typedef __attribute__((neon_vector_type(8))) uint16_t uint16x8_t;
typedef __attribute__((neon_vector_type(2))) uint32_t uint32x2_t;
typedef __attribute__((neon_vector_type(4))) uint32_t uint32x4_t;
typedef __attribute__((neon_vector_type(1))) uint64_t uint64x1_t;
typedef __attribute__((neon_vector_type(2))) uint64_t uint64x2_t;
typedef __attribute__((neon_vector_type(4))) float16_t float16x4_t;
typedef __attribute__((neon_vector_type(8))) float16_t float16x8_t;
typedef __attribute__((neon_vector_type(2))) float32_t float32x2_t;
typedef __attribute__((neon_vector_type(4))) float32_t float32x4_t;

typedef __attribute__((neon_vector_type(1))) float64_t float64x1_t;
typedef __attribute__((neon_vector_type(2))) float64_t float64x2_t;

typedef __attribute__((neon_polyvector_type(8))) poly8_t poly8x8_t;
typedef __attribute__((neon_polyvector_type(16))) poly8_t poly8x16_t;
typedef __attribute__((neon_polyvector_type(4))) poly16_t poly16x4_t;
typedef __attribute__((neon_polyvector_type(8))) poly16_t poly16x8_t;
typedef __attribute__((neon_polyvector_type(1))) poly64_t poly64x1_t;
typedef __attribute__((neon_polyvector_type(2))) poly64_t poly64x2_t;

typedef struct int8x8x2_t {
  int8x8_t val[2];
} int8x8x2_t;

typedef struct int8x16x2_t {
  int8x16_t val[2];
} int8x16x2_t;

typedef struct int16x4x2_t {
  int16x4_t val[2];
} int16x4x2_t;

typedef struct int16x8x2_t {
  int16x8_t val[2];
} int16x8x2_t;

typedef struct int32x2x2_t {
  int32x2_t val[2];
} int32x2x2_t;

typedef struct int32x4x2_t {
  int32x4_t val[2];
} int32x4x2_t;

typedef struct int64x1x2_t {
  int64x1_t val[2];
} int64x1x2_t;

typedef struct int64x2x2_t {
  int64x2_t val[2];
} int64x2x2_t;

typedef struct uint8x8x2_t {
  uint8x8_t val[2];
} uint8x8x2_t;

typedef struct uint8x16x2_t {
  uint8x16_t val[2];
} uint8x16x2_t;

typedef struct uint16x4x2_t {
  uint16x4_t val[2];
} uint16x4x2_t;

typedef struct uint16x8x2_t {
  uint16x8_t val[2];
} uint16x8x2_t;

typedef struct uint32x2x2_t {
  uint32x2_t val[2];
} uint32x2x2_t;

typedef struct uint32x4x2_t {
  uint32x4_t val[2];
} uint32x4x2_t;

typedef struct uint64x1x2_t {
  uint64x1_t val[2];
} uint64x1x2_t;

typedef struct uint64x2x2_t {
  uint64x2_t val[2];
} uint64x2x2_t;

typedef struct float16x4x2_t {
  float16x4_t val[2];
} float16x4x2_t;

typedef struct float16x8x2_t {
  float16x8_t val[2];
} float16x8x2_t;

typedef struct float32x2x2_t {
  float32x2_t val[2];
} float32x2x2_t;

typedef struct float32x4x2_t {
  float32x4_t val[2];
} float32x4x2_t;


typedef struct float64x1x2_t {
  float64x1_t val[2];
} float64x1x2_t;

typedef struct float64x2x2_t {
  float64x2_t val[2];
} float64x2x2_t;


typedef struct poly8x8x2_t {
  poly8x8_t val[2];
} poly8x8x2_t;

typedef struct poly8x16x2_t {
  poly8x16_t val[2];
} poly8x16x2_t;

typedef struct poly16x4x2_t {
  poly16x4_t val[2];
} poly16x4x2_t;

typedef struct poly16x8x2_t {
  poly16x8_t val[2];
} poly16x8x2_t;

typedef struct poly64x1x2_t {
  poly64x1_t val[2];
} poly64x1x2_t;

typedef struct poly64x2x2_t {
  poly64x2_t val[2];
} poly64x2x2_t;

typedef struct int8x8x3_t {
  int8x8_t val[3];
} int8x8x3_t;

typedef struct int8x16x3_t {
  int8x16_t val[3];
} int8x16x3_t;

typedef struct int16x4x3_t {
  int16x4_t val[3];
} int16x4x3_t;

typedef struct int16x8x3_t {
  int16x8_t val[3];
} int16x8x3_t;

typedef struct int32x2x3_t {
  int32x2_t val[3];
} int32x2x3_t;

typedef struct int32x4x3_t {
  int32x4_t val[3];
} int32x4x3_t;

typedef struct int64x1x3_t {
  int64x1_t val[3];
} int64x1x3_t;

typedef struct int64x2x3_t {
  int64x2_t val[3];
} int64x2x3_t;

typedef struct uint8x8x3_t {
  uint8x8_t val[3];
} uint8x8x3_t;

typedef struct uint8x16x3_t {
  uint8x16_t val[3];
} uint8x16x3_t;

typedef struct uint16x4x3_t {
  uint16x4_t val[3];
} uint16x4x3_t;

typedef struct uint16x8x3_t {
  uint16x8_t val[3];
} uint16x8x3_t;

typedef struct uint32x2x3_t {
  uint32x2_t val[3];
} uint32x2x3_t;

typedef struct uint32x4x3_t {
  uint32x4_t val[3];
} uint32x4x3_t;

typedef struct uint64x1x3_t {
  uint64x1_t val[3];
} uint64x1x3_t;

typedef struct uint64x2x3_t {
  uint64x2_t val[3];
} uint64x2x3_t;

typedef struct float16x4x3_t {
  float16x4_t val[3];
} float16x4x3_t;

typedef struct float16x8x3_t {
  float16x8_t val[3];
} float16x8x3_t;

typedef struct float32x2x3_t {
  float32x2_t val[3];
} float32x2x3_t;

typedef struct float32x4x3_t {
  float32x4_t val[3];
} float32x4x3_t;


typedef struct float64x1x3_t {
  float64x1_t val[3];
} float64x1x3_t;

typedef struct float64x2x3_t {
  float64x2_t val[3];
} float64x2x3_t;


typedef struct poly8x8x3_t {
  poly8x8_t val[3];
} poly8x8x3_t;

typedef struct poly8x16x3_t {
  poly8x16_t val[3];
} poly8x16x3_t;

typedef struct poly16x4x3_t {
  poly16x4_t val[3];
} poly16x4x3_t;

typedef struct poly16x8x3_t {
  poly16x8_t val[3];
} poly16x8x3_t;

typedef struct poly64x1x3_t {
  poly64x1_t val[3];
} poly64x1x3_t;

typedef struct poly64x2x3_t {
  poly64x2_t val[3];
} poly64x2x3_t;

typedef struct int8x8x4_t {
  int8x8_t val[4];
} int8x8x4_t;

typedef struct int8x16x4_t {
  int8x16_t val[4];
} int8x16x4_t;

typedef struct int16x4x4_t {
  int16x4_t val[4];
} int16x4x4_t;

typedef struct int16x8x4_t {
  int16x8_t val[4];
} int16x8x4_t;

typedef struct int32x2x4_t {
  int32x2_t val[4];
} int32x2x4_t;

typedef struct int32x4x4_t {
  int32x4_t val[4];
} int32x4x4_t;

typedef struct int64x1x4_t {
  int64x1_t val[4];
} int64x1x4_t;

typedef struct int64x2x4_t {
  int64x2_t val[4];
} int64x2x4_t;

typedef struct uint8x8x4_t {
  uint8x8_t val[4];
} uint8x8x4_t;

typedef struct uint8x16x4_t {
  uint8x16_t val[4];
} uint8x16x4_t;

typedef struct uint16x4x4_t {
  uint16x4_t val[4];
} uint16x4x4_t;

typedef struct uint16x8x4_t {
  uint16x8_t val[4];
} uint16x8x4_t;

typedef struct uint32x2x4_t {
  uint32x2_t val[4];
} uint32x2x4_t;

typedef struct uint32x4x4_t {
  uint32x4_t val[4];
} uint32x4x4_t;

typedef struct uint64x1x4_t {
  uint64x1_t val[4];
} uint64x1x4_t;

typedef struct uint64x2x4_t {
  uint64x2_t val[4];
} uint64x2x4_t;

typedef struct float16x4x4_t {
  float16x4_t val[4];
} float16x4x4_t;

typedef struct float16x8x4_t {
  float16x8_t val[4];
} float16x8x4_t;

typedef struct float32x2x4_t {
  float32x2_t val[4];
} float32x2x4_t;

typedef struct float32x4x4_t {
  float32x4_t val[4];
} float32x4x4_t;


typedef struct float64x1x4_t {
  float64x1_t val[4];
} float64x1x4_t;

typedef struct float64x2x4_t {
  float64x2_t val[4];
} float64x2x4_t;


typedef struct poly8x8x4_t {
  poly8x8_t val[4];
} poly8x8x4_t;

typedef struct poly8x16x4_t {
  poly8x16_t val[4];
} poly8x16x4_t;

typedef struct poly16x4x4_t {
  poly16x4_t val[4];
} poly16x4x4_t;

typedef struct poly16x8x4_t {
  poly16x8_t val[4];
} poly16x8x4_t;

typedef struct poly64x1x4_t {
  poly64x1_t val[4];
} poly64x1x4_t;

typedef struct poly64x2x4_t {
  poly64x2_t val[4];
} poly64x2x4_t;
# 1728 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vabdq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 1750 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vabdq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 1772 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vabdq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 1794 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vabdq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 1816 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vabdq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 1833 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vabdq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 1855 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vabdq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 1877 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vabd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 1899 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vabd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 1921 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vabd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 1943 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vabd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 1965 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vabd_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 1982 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vabd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 2004 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vabd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 2026 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vabsq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 32);
  return __ret;
}
# 2042 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vabsq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 2058 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vabsq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 34);
  return __ret;
}
# 2074 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vabsq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 33);
  return __ret;
}
# 2090 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vabs_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vabs_v((int8x8_t)__p0, 0);
  return __ret;
}
# 2106 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vabs_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vabs_v((int8x8_t)__p0, 9);
  return __ret;
}
# 2122 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vabs_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vabs_v((int8x8_t)__p0, 2);
  return __ret;
}
# 2138 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vabs_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vabs_v((int8x8_t)__p0, 1);
  return __ret;
}
# 2154 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2171 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2188 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vaddq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2205 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2222 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2239 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vaddq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2256 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2273 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vaddq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2290 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2307 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2324 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2340 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vadd_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2363 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2380 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vadd_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2397 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2413 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vadd_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 2436 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vaddhn_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 17);
  return __ret;
}
# 2458 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vaddhn_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 18);
  return __ret;
}
# 2480 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vaddhn_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 16);
  return __ret;
}
# 2502 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vaddhn_s32(int32x4_t __p0, int32x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 1);
  return __ret;
}
# 2524 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vaddhn_s64(int64x2_t __p0, int64x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 2);
  return __ret;
}
# 2546 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vaddhn_s16(int16x8_t __p0, int16x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 0);
  return __ret;
}
# 2568 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vandq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2585 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vandq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2602 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vandq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2619 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vandq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2636 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vandq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2653 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vandq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2670 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vandq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2687 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vandq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2704 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vand_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2721 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vand_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2737 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vand_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vand_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2760 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vand_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2777 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vand_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2793 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vand_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vand_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
# 2816 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vbicq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2833 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vbicq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2850 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vbicq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2867 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vbicq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2884 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vbicq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2901 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vbicq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2918 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vbicq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2935 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vbicq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2952 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vbic_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2969 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vbic_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 2985 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vbic_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vbic_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 3008 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vbic_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 3025 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vbic_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 3041 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vbic_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vbic_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
# 3064 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vbsl_p8(uint8x8_t __p0, poly8x8_t __p1, poly8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 4);
  return __ret;
}
# 3082 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vbsl_p16(uint16x4_t __p0, poly16x4_t __p1, poly16x4_t __p2) {
  poly16x4_t __ret;
  __ret = (poly16x4_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 5);
  return __ret;
}
# 3100 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vbslq_p8(uint8x16_t __p0, poly8x16_t __p1, poly8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 36);
  return __ret;
}
# 3118 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vbslq_p16(uint16x8_t __p0, poly16x8_t __p1, poly16x8_t __p2) {
  poly16x8_t __ret;
  __ret = (poly16x8_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 37);
  return __ret;
}
# 3136 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vbslq_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 48);
  return __ret;
}
# 3154 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vbslq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
# 3172 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vbslq_u64(uint64x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 51);
  return __ret;
}
# 3190 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vbslq_u16(uint16x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 49);
  return __ret;
}
# 3208 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vbslq_s8(uint8x16_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 32);
  return __ret;
}
# 3226 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vbslq_f32(uint32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 3244 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vbslq_s32(uint32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 34);
  return __ret;
}
# 3262 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vbslq_s64(uint64x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 35);
  return __ret;
}
# 3280 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vbslq_s16(uint16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 33);
  return __ret;
}
# 3298 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vbsl_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 16);
  return __ret;
}
# 3316 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vbsl_u32(uint32x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 18);
  return __ret;
}
# 3333 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vbsl_u64(uint64x1_t __p0, uint64x1_t __p1, uint64x1_t __p2) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vbsl_u16(uint16x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 17);
  return __ret;
}
# 3357 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vbsl_s8(uint8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 0);
  return __ret;
}
# 3375 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vbsl_f32(uint32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 3393 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vbsl_s32(uint32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 2);
  return __ret;
}
# 3410 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vbsl_s64(uint64x1_t __p0, int64x1_t __p1, int64x1_t __p2) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vbsl_s16(uint16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 1);
  return __ret;
}
# 3434 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcageq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcageq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 3451 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcage_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcage_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 3468 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcagtq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcagtq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 3485 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcagt_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcagt_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 3502 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcaleq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcaleq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 3519 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcale_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcale_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 3536 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcaltq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcaltq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 3553 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcalt_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcalt_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 3570 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vceq_p8(poly8x8_t __p0, poly8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 == __p1);
  return __ret;
}
# 3587 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vceqq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 == __p1);
  return __ret;
}
# 3604 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vceqq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 == __p1);
  return __ret;
}
# 3621 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vceqq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 == __p1);
  return __ret;
}
# 3638 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vceqq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 == __p1);
  return __ret;
}
# 3655 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vceqq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 == __p1);
  return __ret;
}
# 3672 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vceqq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 == __p1);
  return __ret;
}
# 3689 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vceqq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 == __p1);
  return __ret;
}
# 3706 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vceqq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 == __p1);
  return __ret;
}
# 3723 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vceq_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 == __p1);
  return __ret;
}
# 3740 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vceq_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 == __p1);
  return __ret;
}
# 3757 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vceq_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 == __p1);
  return __ret;
}
# 3774 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vceq_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 == __p1);
  return __ret;
}
# 3791 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vceq_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 == __p1);
  return __ret;
}
# 3808 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vceq_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 == __p1);
  return __ret;
}
# 3825 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vceq_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 == __p1);
  return __ret;
}
# 3842 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcgeq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 >= __p1);
  return __ret;
}
# 3859 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgeq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 >= __p1);
  return __ret;
}
# 3876 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgeq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 >= __p1);
  return __ret;
}
# 3893 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcgeq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 >= __p1);
  return __ret;
}
# 3910 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgeq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 >= __p1);
  return __ret;
}
# 3927 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgeq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 >= __p1);
  return __ret;
}
# 3944 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgeq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 >= __p1);
  return __ret;
}
# 3961 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcge_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 >= __p1);
  return __ret;
}
# 3978 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcge_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 >= __p1);
  return __ret;
}
# 3995 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcge_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 >= __p1);
  return __ret;
}
# 4012 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcge_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 >= __p1);
  return __ret;
}
# 4029 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcge_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 >= __p1);
  return __ret;
}
# 4046 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcge_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 >= __p1);
  return __ret;
}
# 4063 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcge_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 >= __p1);
  return __ret;
}
# 4080 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcgtq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 > __p1);
  return __ret;
}
# 4097 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgtq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 > __p1);
  return __ret;
}
# 4114 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgtq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 > __p1);
  return __ret;
}
# 4131 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcgtq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 > __p1);
  return __ret;
}
# 4148 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgtq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 > __p1);
  return __ret;
}
# 4165 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgtq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 > __p1);
  return __ret;
}
# 4182 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgtq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 > __p1);
  return __ret;
}
# 4199 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcgt_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 > __p1);
  return __ret;
}
# 4216 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcgt_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 > __p1);
  return __ret;
}
# 4233 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcgt_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 > __p1);
  return __ret;
}
# 4250 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcgt_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 > __p1);
  return __ret;
}
# 4267 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcgt_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 > __p1);
  return __ret;
}
# 4284 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcgt_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 > __p1);
  return __ret;
}
# 4301 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcgt_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 > __p1);
  return __ret;
}
# 4318 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcleq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 <= __p1);
  return __ret;
}
# 4335 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcleq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 <= __p1);
  return __ret;
}
# 4352 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcleq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 <= __p1);
  return __ret;
}
# 4369 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcleq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 <= __p1);
  return __ret;
}
# 4386 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcleq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 <= __p1);
  return __ret;
}
# 4403 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcleq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 <= __p1);
  return __ret;
}
# 4420 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcleq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 <= __p1);
  return __ret;
}
# 4437 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcle_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 <= __p1);
  return __ret;
}
# 4454 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcle_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 <= __p1);
  return __ret;
}
# 4471 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcle_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 <= __p1);
  return __ret;
}
# 4488 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcle_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 <= __p1);
  return __ret;
}
# 4505 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcle_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 <= __p1);
  return __ret;
}
# 4522 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcle_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 <= __p1);
  return __ret;
}
# 4539 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcle_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 <= __p1);
  return __ret;
}
# 4556 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vclsq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vclsq_v((int8x16_t)__p0, 32);
  return __ret;
}
# 4572 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vclsq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vclsq_v((int8x16_t)__p0, 34);
  return __ret;
}
# 4588 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vclsq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vclsq_v((int8x16_t)__p0, 33);
  return __ret;
}
# 4604 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vcls_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vcls_v((int8x8_t)__p0, 0);
  return __ret;
}
# 4620 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vcls_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcls_v((int8x8_t)__p0, 2);
  return __ret;
}
# 4636 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vcls_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vcls_v((int8x8_t)__p0, 1);
  return __ret;
}
# 4652 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcltq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 < __p1);
  return __ret;
}
# 4669 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcltq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 < __p1);
  return __ret;
}
# 4686 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcltq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 < __p1);
  return __ret;
}
# 4703 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcltq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 < __p1);
  return __ret;
}
# 4720 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcltq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 < __p1);
  return __ret;
}
# 4737 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcltq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 < __p1);
  return __ret;
}
# 4754 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcltq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 < __p1);
  return __ret;
}
# 4771 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vclt_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 < __p1);
  return __ret;
}
# 4788 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vclt_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 < __p1);
  return __ret;
}
# 4805 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vclt_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 < __p1);
  return __ret;
}
# 4822 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vclt_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 < __p1);
  return __ret;
}
# 4839 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vclt_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 < __p1);
  return __ret;
}
# 4856 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vclt_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 < __p1);
  return __ret;
}
# 4873 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vclt_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 < __p1);
  return __ret;
}
# 4890 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vclzq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 4906 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vclzq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 4922 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vclzq_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 4938 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vclzq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 32);
  return __ret;
}
# 4954 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vclzq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 34);
  return __ret;
}
# 4970 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vclzq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 33);
  return __ret;
}
# 4986 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vclz_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vclz_v((int8x8_t)__p0, 16);
  return __ret;
}
# 5002 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vclz_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vclz_v((int8x8_t)__p0, 18);
  return __ret;
}
# 5018 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vclz_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vclz_v((int8x8_t)__p0, 17);
  return __ret;
}
# 5034 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vclz_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vclz_v((int8x8_t)__p0, 0);
  return __ret;
}
# 5050 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vclz_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vclz_v((int8x8_t)__p0, 2);
  return __ret;
}
# 5066 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vclz_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vclz_v((int8x8_t)__p0, 1);
  return __ret;
}
# 5082 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vcnt_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vcnt_v((int8x8_t)__p0, 4);
  return __ret;
}
# 5098 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vcntq_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vcntq_v((int8x16_t)__p0, 36);
  return __ret;
}
# 5114 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcntq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vcntq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 5130 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vcntq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vcntq_v((int8x16_t)__p0, 32);
  return __ret;
}
# 5146 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcnt_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vcnt_v((int8x8_t)__p0, 16);
  return __ret;
}
# 5162 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vcnt_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vcnt_v((int8x8_t)__p0, 0);
  return __ret;
}
# 5178 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vcombine_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
# 5195 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vcombine_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
# 5212 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcombine_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
# 5234 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcombine_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3);
  return __ret;
}
# 5256 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcombine_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1);
  return __ret;
}
# 5271 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcombine_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
# 5293 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vcombine_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
# 5315 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcombine_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3);
  return __ret;
}
# 5337 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcombine_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
# 5359 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vcombine_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3);
  return __ret;
}
# 5381 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vcombine_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1);
  return __ret;
}
# 5396 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vcombine_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
# 5490 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcvtq_f32_u32(uint32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcvtq_f32_v((int8x16_t)__p0, 50);
  return __ret;
}
# 5506 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcvtq_f32_s32(int32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcvtq_f32_v((int8x16_t)__p0, 34);
  return __ret;
}
# 5522 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcvt_f32_u32(uint32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcvt_f32_v((int8x8_t)__p0, 18);
  return __ret;
}
# 5538 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcvt_f32_s32(int32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcvt_f32_v((int8x8_t)__p0, 2);
  return __ret;
}
# 5698 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vcvtq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
# 5714 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vcvt_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvt_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
# 5730 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcvtq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
# 5746 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcvt_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvt_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
# 6132 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vdup_n_p8(poly8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 6147 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vdup_n_p16(poly16_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 6162 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vdupq_n_p8(poly8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 6177 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vdupq_n_p16(poly16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 6192 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vdupq_n_u8(uint8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 6207 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vdupq_n_u32(uint32_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 6222 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vdupq_n_u64(uint64_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) {__p0, __p0};
  return __ret;
}
# 6237 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vdupq_n_u16(uint16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 6252 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vdupq_n_s8(int8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 6267 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vdupq_n_f32(float32_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 6299 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vdupq_n_s32(int32_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 6314 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vdupq_n_s64(int64_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) {__p0, __p0};
  return __ret;
}
# 6329 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vdupq_n_s16(int16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 6344 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vdup_n_u8(uint8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 6359 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vdup_n_u32(uint32_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) {__p0, __p0};
  return __ret;
}
# 6373 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vdup_n_u64(uint64_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) {__p0};
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vdup_n_u16(uint16_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 6394 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vdup_n_s8(int8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 6409 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vdup_n_f32(float32_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) {__p0, __p0};
  return __ret;
}
# 6441 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vdup_n_s32(int32_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) {__p0, __p0};
  return __ret;
}
# 6455 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vdup_n_s64(int64_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) {__p0};
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vdup_n_s16(int16_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 6476 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t veorq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6493 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t veorq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6510 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t veorq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6527 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t veorq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6544 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t veorq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6561 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t veorq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6578 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t veorq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6595 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t veorq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6612 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t veor_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6629 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t veor_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6645 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t veor_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t veor_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6668 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t veor_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6685 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t veor_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 6701 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t veor_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t veor_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
# 7158 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vget_high_p8(poly8x16_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
# 7179 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vget_high_p16(poly16x8_t __p0) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 4, 5, 6, 7);
  return __ret;
}
# 7195 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vget_high_u8(uint8x16_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
# 7216 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vget_high_u32(uint32x4_t __p0) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 2, 3);
  return __ret;
}
# 7237 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vget_high_u64(uint64x2_t __p0) {
  uint64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1);
  return __ret;
}
# 7252 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vget_high_u16(uint16x8_t __p0) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 4, 5, 6, 7);
  return __ret;
}
# 7273 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vget_high_s8(int8x16_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
# 7294 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vget_high_f32(float32x4_t __p0) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 2, 3);
  return __ret;
}
# 7315 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vget_high_f16(float16x8_t __p0) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 4, 5, 6, 7);
  return __ret;
}
# 7336 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vget_high_s32(int32x4_t __p0) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 2, 3);
  return __ret;
}
# 7357 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vget_high_s64(int64x2_t __p0) {
  int64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1);
  return __ret;
}
# 7372 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vget_high_s16(int16x8_t __p0) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 4, 5, 6, 7);
  return __ret;
}
# 7865 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vget_low_p8(poly8x16_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
# 7881 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vget_low_p16(poly16x8_t __p0) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3);
  return __ret;
}
# 7897 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vget_low_u8(uint8x16_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
# 7913 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vget_low_u32(uint32x4_t __p0) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1);
  return __ret;
}
# 7929 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vget_low_u64(uint64x2_t __p0) {
  uint64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0);
  return __ret;
}
# 7944 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vget_low_u16(uint16x8_t __p0) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3);
  return __ret;
}
# 7960 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vget_low_s8(int8x16_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
# 7976 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vget_low_f32(float32x4_t __p0) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1);
  return __ret;
}
# 7992 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vget_low_f16(float16x8_t __p0) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3);
  return __ret;
}
# 8008 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vget_low_s32(int32x4_t __p0) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1);
  return __ret;
}
# 8024 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vget_low_s64(int64x2_t __p0) {
  int64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0);
  return __ret;
}
# 8039 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vget_low_s16(int16x8_t __p0) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3);
  return __ret;
}
# 8055 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vhaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 8072 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vhaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 8089 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vhaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 8106 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vhaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 8123 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vhaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 8140 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vhaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 8157 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vhadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 8174 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vhadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 8191 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vhadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 8208 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vhadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 8225 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vhadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 8242 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vhadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 8259 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vhsubq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 8276 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vhsubq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 8293 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vhsubq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 8310 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vhsubq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 8327 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vhsubq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 8344 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vhsubq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 8361 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vhsub_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 8378 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vhsub_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 8395 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vhsub_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 8412 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vhsub_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 8429 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vhsub_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 8446 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vhsub_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 13757 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vmaxq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 13774 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmaxq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 13791 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmaxq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 13808 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vmaxq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 13825 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmaxq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 13842 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmaxq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 13859 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmaxq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 13876 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vmax_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 13893 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmax_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 13910 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmax_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 13927 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vmax_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 13944 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmax_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 13961 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmax_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 13978 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmax_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 13995 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vminq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 14012 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vminq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 14029 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vminq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 14046 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vminq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 14063 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vminq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 14080 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vminq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 14097 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vminq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 14114 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vmin_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 14131 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmin_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 14148 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmin_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 14165 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vmin_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 14182 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmin_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 14199 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmin_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 14216 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmin_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 14233 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vmlaq_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14251 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlaq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14269 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmlaq_u16(uint16x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14287 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vmlaq_s8(int8x16_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14305 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmlaq_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14323 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlaq_s32(int32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14341 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmlaq_s16(int16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14359 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vmla_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14377 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmla_u32(uint32x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14395 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmla_u16(uint16x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14413 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vmla_s8(int8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14431 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmla_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14449 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmla_s32(int32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14467 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmla_s16(int16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 14725 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlaq_n_u32(uint32x4_t __p0, uint32x4_t __p1, uint32_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + __p1 * (uint32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 14742 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmlaq_n_u16(uint16x8_t __p0, uint16x8_t __p1, uint16_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + __p1 * (uint16x8_t) {__p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2};
  return __ret;
}
# 14759 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmlaq_n_f32(float32x4_t __p0, float32x4_t __p1, float32_t __p2) {
  float32x4_t __ret;
  __ret = __p0 + __p1 * (float32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 14776 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlaq_n_s32(int32x4_t __p0, int32x4_t __p1, int32_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + __p1 * (int32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 14793 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmlaq_n_s16(int16x8_t __p0, int16x8_t __p1, int16_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + __p1 * (int16x8_t) {__p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2};
  return __ret;
}
# 14810 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmla_n_u32(uint32x2_t __p0, uint32x2_t __p1, uint32_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 + __p1 * (uint32x2_t) {__p2, __p2};
  return __ret;
}
# 14827 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmla_n_u16(uint16x4_t __p0, uint16x4_t __p1, uint16_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 + __p1 * (uint16x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 14844 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmla_n_f32(float32x2_t __p0, float32x2_t __p1, float32_t __p2) {
  float32x2_t __ret;
  __ret = __p0 + __p1 * (float32x2_t) {__p2, __p2};
  return __ret;
}
# 14861 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmla_n_s32(int32x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int32x2_t __ret;
  __ret = __p0 + __p1 * (int32x2_t) {__p2, __p2};
  return __ret;
}
# 14878 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmla_n_s16(int16x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int16x4_t __ret;
  __ret = __p0 + __p1 * (int16x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 14895 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vmlsq_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 14913 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlsq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 14931 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmlsq_u16(uint16x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 14949 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vmlsq_s8(int8x16_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 14967 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmlsq_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 14985 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlsq_s32(int32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 15003 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmlsq_s16(int16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 15021 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vmls_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 15039 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmls_u32(uint32x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 15057 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmls_u16(uint16x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 15075 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vmls_s8(int8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 15093 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmls_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 15111 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmls_s32(int32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 15129 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmls_s16(int16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 15387 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlsq_n_u32(uint32x4_t __p0, uint32x4_t __p1, uint32_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 - __p1 * (uint32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 15404 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmlsq_n_u16(uint16x8_t __p0, uint16x8_t __p1, uint16_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 - __p1 * (uint16x8_t) {__p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2};
  return __ret;
}
# 15421 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmlsq_n_f32(float32x4_t __p0, float32x4_t __p1, float32_t __p2) {
  float32x4_t __ret;
  __ret = __p0 - __p1 * (float32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 15438 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlsq_n_s32(int32x4_t __p0, int32x4_t __p1, int32_t __p2) {
  int32x4_t __ret;
  __ret = __p0 - __p1 * (int32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 15455 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmlsq_n_s16(int16x8_t __p0, int16x8_t __p1, int16_t __p2) {
  int16x8_t __ret;
  __ret = __p0 - __p1 * (int16x8_t) {__p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2};
  return __ret;
}
# 15472 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmls_n_u32(uint32x2_t __p0, uint32x2_t __p1, uint32_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 - __p1 * (uint32x2_t) {__p2, __p2};
  return __ret;
}
# 15489 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmls_n_u16(uint16x4_t __p0, uint16x4_t __p1, uint16_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 - __p1 * (uint16x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 15506 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmls_n_f32(float32x2_t __p0, float32x2_t __p1, float32_t __p2) {
  float32x2_t __ret;
  __ret = __p0 - __p1 * (float32x2_t) {__p2, __p2};
  return __ret;
}
# 15523 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmls_n_s32(int32x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int32x2_t __ret;
  __ret = __p0 - __p1 * (int32x2_t) {__p2, __p2};
  return __ret;
}
# 15540 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmls_n_s16(int16x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int16x4_t __ret;
  __ret = __p0 - __p1 * (int16x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
# 15557 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vmov_n_p8(poly8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 15572 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vmov_n_p16(poly16_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 15587 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vmovq_n_p8(poly8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 15602 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vmovq_n_p16(poly16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 15617 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vmovq_n_u8(uint8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 15632 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmovq_n_u32(uint32_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 15647 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmovq_n_u64(uint64_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) {__p0, __p0};
  return __ret;
}
# 15662 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmovq_n_u16(uint16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 15677 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vmovq_n_s8(int8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 15692 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmovq_n_f32(float32_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 15724 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmovq_n_s32(int32_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 15739 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmovq_n_s64(int64_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) {__p0, __p0};
  return __ret;
}
# 15754 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmovq_n_s16(int16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 15769 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vmov_n_u8(uint8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 15784 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmov_n_u32(uint32_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) {__p0, __p0};
  return __ret;
}
# 15798 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vmov_n_u64(uint64_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) {__p0};
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmov_n_u16(uint16_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 15819 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vmov_n_s8(int8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
# 15834 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmov_n_f32(float32_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) {__p0, __p0};
  return __ret;
}
# 15866 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmov_n_s32(int32_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) {__p0, __p0};
  return __ret;
}
# 15880 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vmov_n_s64(int64_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) {__p0};
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmov_n_s16(int16_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
# 15901 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmovl_u8(uint8x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 49);
  return __ret;
}
# 15922 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmovl_u32(uint32x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 51);
  return __ret;
}
# 15943 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmovl_u16(uint16x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 50);
  return __ret;
}
# 15964 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmovl_s8(int8x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 33);
  return __ret;
}
# 15985 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmovl_s32(int32x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 35);
  return __ret;
}
# 16006 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmovl_s16(int16x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 34);
  return __ret;
}
# 16027 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmovn_u32(uint32x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 17);
  return __ret;
}
# 16048 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmovn_u64(uint64x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 18);
  return __ret;
}
# 16069 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vmovn_u16(uint16x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 16);
  return __ret;
}
# 16090 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmovn_s32(int32x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 1);
  return __ret;
}
# 16111 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmovn_s64(int64x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 2);
  return __ret;
}
# 16132 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vmovn_s16(int16x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 0);
  return __ret;
}
# 16153 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vmulq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16170 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmulq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16187 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmulq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16204 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vmulq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16221 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmulq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16238 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmulq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16255 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmulq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16272 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vmul_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16289 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmul_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16306 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmul_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16323 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vmul_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16340 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmul_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16357 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmul_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16374 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmul_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 16391 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vmul_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vmul_v((int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
# 16408 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vmulq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vmulq_v((int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
# 16635 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmulq_n_u32(uint32x4_t __p0, uint32_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 * (uint32x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
# 16651 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmulq_n_u16(uint16x8_t __p0, uint16_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 * (uint16x8_t) {__p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1};
  return __ret;
}
# 16667 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmulq_n_f32(float32x4_t __p0, float32_t __p1) {
  float32x4_t __ret;
  __ret = __p0 * (float32x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
# 16683 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmulq_n_s32(int32x4_t __p0, int32_t __p1) {
  int32x4_t __ret;
  __ret = __p0 * (int32x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
# 16699 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmulq_n_s16(int16x8_t __p0, int16_t __p1) {
  int16x8_t __ret;
  __ret = __p0 * (int16x8_t) {__p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1};
  return __ret;
}
# 16715 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmul_n_u32(uint32x2_t __p0, uint32_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 * (uint32x2_t) {__p1, __p1};
  return __ret;
}
# 16731 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmul_n_u16(uint16x4_t __p0, uint16_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 * (uint16x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
# 16747 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmul_n_f32(float32x2_t __p0, float32_t __p1) {
  float32x2_t __ret;
  __ret = __p0 * (float32x2_t) {__p1, __p1};
  return __ret;
}
# 16763 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmul_n_s32(int32x2_t __p0, int32_t __p1) {
  int32x2_t __ret;
  __ret = __p0 * (int32x2_t) {__p1, __p1};
  return __ret;
}
# 16779 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmul_n_s16(int16x4_t __p0, int16_t __p1) {
  int16x4_t __ret;
  __ret = __p0 * (int16x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
# 16795 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vmull_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly16x8_t __ret;
  __ret = (poly16x8_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 37);
  return __ret;
}
# 16817 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmull_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 49);
  return __ret;
}
# 16839 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmull_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 51);
  return __ret;
}
# 16861 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmull_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 50);
  return __ret;
}
# 16883 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmull_s8(int8x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 33);
  return __ret;
}
# 16905 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmull_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 35);
  return __ret;
}
# 16927 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmull_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 34);
  return __ret;
}
# 17033 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmull_n_u32(uint32x2_t __p0, uint32_t __p1) {
  uint64x2_t __ret;
  __ret = vmull_u32(__p0, (uint32x2_t) {__p1, __p1});
  return __ret;
}
# 17054 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmull_n_u16(uint16x4_t __p0, uint16_t __p1) {
  uint32x4_t __ret;
  __ret = vmull_u16(__p0, (uint16x4_t) {__p1, __p1, __p1, __p1});
  return __ret;
}
# 17075 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmull_n_s32(int32x2_t __p0, int32_t __p1) {
  int64x2_t __ret;
  __ret = vmull_s32(__p0, (int32x2_t) {__p1, __p1});
  return __ret;
}
# 17096 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmull_n_s16(int16x4_t __p0, int16_t __p1) {
  int32x4_t __ret;
  __ret = vmull_s16(__p0, (int16x4_t) {__p1, __p1, __p1, __p1});
  return __ret;
}
# 17117 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vmvn_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17133 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vmvnq_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17149 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vmvnq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17165 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmvnq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17181 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmvnq_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17197 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vmvnq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17213 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmvnq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17229 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmvnq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17245 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vmvn_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17261 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vmvn_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17277 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vmvn_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17293 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vmvn_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17309 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vmvn_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17325 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vmvn_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = ~__p0;
  return __ret;
}
# 17341 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vnegq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = -__p0;
  return __ret;
}
# 17357 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vnegq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = -__p0;
  return __ret;
}
# 17373 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vnegq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = -__p0;
  return __ret;
}
# 17389 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vnegq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = -__p0;
  return __ret;
}
# 17405 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vneg_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = -__p0;
  return __ret;
}
# 17421 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vneg_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = -__p0;
  return __ret;
}
# 17437 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vneg_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = -__p0;
  return __ret;
}
# 17453 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vneg_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = -__p0;
  return __ret;
}
# 17469 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vornq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17486 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vornq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17503 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vornq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17520 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vornq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17537 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vornq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17554 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vornq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17571 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vornq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17588 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vornq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17605 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vorn_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17622 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vorn_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17638 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vorn_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vorn_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17661 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vorn_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17678 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vorn_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17694 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vorn_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vorn_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
# 17717 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vorrq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17734 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vorrq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17751 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vorrq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17768 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vorrq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17785 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vorrq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17802 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vorrq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17819 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vorrq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17836 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vorrq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17853 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vorr_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17870 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vorr_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17886 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vorr_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vorr_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17909 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vorr_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17926 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vorr_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17942 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vorr_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vorr_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
# 17965 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vpadalq_u8(uint16x8_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 17982 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vpadalq_u32(uint64x2_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 17999 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vpadalq_u16(uint32x4_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 18016 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vpadalq_s8(int16x8_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 18033 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vpadalq_s32(int64x2_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
# 18050 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vpadalq_s16(int32x4_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 18067 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vpadal_u8(uint16x4_t __p0, uint8x8_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 18084 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vpadal_u32(uint64x1_t __p0, uint32x2_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
# 18099 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vpadal_u16(uint32x2_t __p0, uint16x4_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 18116 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vpadal_s8(int16x4_t __p0, int8x8_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 18133 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vpadal_s32(int64x1_t __p0, int32x2_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}
# 18148 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vpadal_s16(int32x2_t __p0, int16x4_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 18165 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vpadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 18182 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vpadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 18199 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vpadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 18216 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vpadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 18233 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vpadd_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 18250 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vpadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 18267 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vpadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 18284 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vpaddlq_u8(uint8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 18300 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vpaddlq_u32(uint32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 18316 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vpaddlq_u16(uint16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 18332 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vpaddlq_s8(int8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 33);
  return __ret;
}
# 18348 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vpaddlq_s32(int32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 35);
  return __ret;
}
# 18364 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vpaddlq_s16(int16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 34);
  return __ret;
}
# 18380 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vpaddl_u8(uint8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 17);
  return __ret;
}
# 18396 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vpaddl_u32(uint32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 19);
  return __ret;
}
# 18411 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vpaddl_u16(uint16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 18);
  return __ret;
}
# 18427 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vpaddl_s8(int8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 1);
  return __ret;
}
# 18443 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vpaddl_s32(int32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 3);
  return __ret;
}
# 18458 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vpaddl_s16(int16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 2);
  return __ret;
}
# 18474 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vpmax_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 18491 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vpmax_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 18508 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vpmax_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 18525 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vpmax_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 18542 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vpmax_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 18559 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vpmax_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 18576 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vpmax_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 18593 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vpmin_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 18610 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vpmin_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 18627 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vpmin_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 18644 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vpmin_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 18661 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vpmin_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 18678 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vpmin_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 18695 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vpmin_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 18712 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqabsq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqabsq_v((int8x16_t)__p0, 32);
  return __ret;
}
# 18728 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqabsq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqabsq_v((int8x16_t)__p0, 34);
  return __ret;
}
# 18744 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqabsq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqabsq_v((int8x16_t)__p0, 33);
  return __ret;
}
# 18760 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqabs_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqabs_v((int8x8_t)__p0, 0);
  return __ret;
}
# 18776 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqabs_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqabs_v((int8x8_t)__p0, 2);
  return __ret;
}
# 18792 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqabs_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqabs_v((int8x8_t)__p0, 1);
  return __ret;
}
# 18808 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 18825 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vqaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 18842 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vqaddq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 18859 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vqaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 18876 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 18893 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 18915 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqaddq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
# 18932 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 18954 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 18971 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vqadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 18987 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vqadd_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vqadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 19010 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 19027 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 19048 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vqadd_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 19076 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmlal_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqdmlal_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 35);
  return __ret;
}
# 19099 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmlal_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmlal_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 34);
  return __ret;
}
# 19170 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmlal_n_s32(int64x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlal_s32(__p0, __p1, (int32x2_t) {__p2, __p2});
  return __ret;
}
# 19192 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmlal_n_s16(int32x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlal_s16(__p0, __p1, (int16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
# 19214 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmlsl_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqdmlsl_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 35);
  return __ret;
}
# 19237 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmlsl_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmlsl_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 34);
  return __ret;
}
# 19308 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmlsl_n_s32(int64x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlsl_s32(__p0, __p1, (int32x2_t) {__p2, __p2});
  return __ret;
}
# 19330 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmlsl_n_s16(int32x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlsl_s16(__p0, __p1, (int16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
# 19352 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmulhq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmulhq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 19374 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqdmulhq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqdmulhq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 19396 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqdmulh_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqdmulh_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 19418 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqdmulh_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqdmulh_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 19440 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmulhq_n_s32(int32x4_t __p0, int32_t __p1) {
  int32x4_t __ret;
  __ret = vqdmulhq_s32(__p0, (int32x4_t) {__p1, __p1, __p1, __p1});
  return __ret;
}
# 19456 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqdmulhq_n_s16(int16x8_t __p0, int16_t __p1) {
  int16x8_t __ret;
  __ret = vqdmulhq_s16(__p0, (int16x8_t) {__p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1});
  return __ret;
}
# 19472 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqdmulh_n_s32(int32x2_t __p0, int32_t __p1) {
  int32x2_t __ret;
  __ret = vqdmulh_s32(__p0, (int32x2_t) {__p1, __p1});
  return __ret;
}
# 19488 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqdmulh_n_s16(int16x4_t __p0, int16_t __p1) {
  int16x4_t __ret;
  __ret = vqdmulh_s16(__p0, (int16x4_t) {__p1, __p1, __p1, __p1});
  return __ret;
}
# 19504 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmull_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqdmull_v((int8x8_t)__p0, (int8x8_t)__p1, 35);
  return __ret;
}
# 19526 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmull_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmull_v((int8x8_t)__p0, (int8x8_t)__p1, 34);
  return __ret;
}
# 19590 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmull_n_s32(int32x2_t __p0, int32_t __p1) {
  int64x2_t __ret;
  __ret = vqdmull_s32(__p0, (int32x2_t) {__p1, __p1});
  return __ret;
}
# 19611 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmull_n_s16(int16x4_t __p0, int16_t __p1) {
  int32x4_t __ret;
  __ret = vqdmull_s16(__p0, (int16x4_t) {__p1, __p1, __p1, __p1});
  return __ret;
}
# 19632 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vqmovn_u32(uint32x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 17);
  return __ret;
}
# 19653 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vqmovn_u64(uint64x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 18);
  return __ret;
}
# 19674 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqmovn_u16(uint16x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 16);
  return __ret;
}
# 19695 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqmovn_s32(int32x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 1);
  return __ret;
}
# 19716 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqmovn_s64(int64x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 2);
  return __ret;
}
# 19737 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqmovn_s16(int16x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 0);
  return __ret;
}
# 19758 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vqmovun_s32(int32x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqmovun_v((int8x16_t)__p0, 17);
  return __ret;
}
# 19779 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vqmovun_s64(int64x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqmovun_v((int8x16_t)__p0, 18);
  return __ret;
}
# 19800 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqmovun_s16(int16x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqmovun_v((int8x16_t)__p0, 16);
  return __ret;
}
# 19821 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqnegq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqnegq_v((int8x16_t)__p0, 32);
  return __ret;
}
# 19837 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqnegq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqnegq_v((int8x16_t)__p0, 34);
  return __ret;
}
# 19853 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqnegq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqnegq_v((int8x16_t)__p0, 33);
  return __ret;
}
# 19869 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqneg_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqneg_v((int8x8_t)__p0, 0);
  return __ret;
}
# 19885 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqneg_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqneg_v((int8x8_t)__p0, 2);
  return __ret;
}
# 19901 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqneg_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqneg_v((int8x8_t)__p0, 1);
  return __ret;
}
# 19917 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqrdmulhq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqrdmulhq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 19939 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqrdmulhq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqrdmulhq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 19961 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqrdmulh_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqrdmulh_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 19983 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqrdmulh_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqrdmulh_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 20005 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqrdmulhq_n_s32(int32x4_t __p0, int32_t __p1) {
  int32x4_t __ret;
  __ret = vqrdmulhq_s32(__p0, (int32x4_t) {__p1, __p1, __p1, __p1});
  return __ret;
}
# 20021 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqrdmulhq_n_s16(int16x8_t __p0, int16_t __p1) {
  int16x8_t __ret;
  __ret = vqrdmulhq_s16(__p0, (int16x8_t) {__p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1});
  return __ret;
}
# 20037 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqrdmulh_n_s32(int32x2_t __p0, int32_t __p1) {
  int32x2_t __ret;
  __ret = vqrdmulh_s32(__p0, (int32x2_t) {__p1, __p1});
  return __ret;
}
# 20053 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqrdmulh_n_s16(int16x4_t __p0, int16_t __p1) {
  int16x4_t __ret;
  __ret = vqrdmulh_s16(__p0, (int16x4_t) {__p1, __p1, __p1, __p1});
  return __ret;
}
# 20069 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqrshlq_u8(uint8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 20086 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vqrshlq_u32(uint32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 20103 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vqrshlq_u64(uint64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 20120 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vqrshlq_u16(uint16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 20137 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqrshlq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 20154 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqrshlq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 20171 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqrshlq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
# 20188 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqrshlq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 20205 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqrshl_u8(uint8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 20222 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vqrshl_u32(uint32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 20238 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vqrshl_u64(uint64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vqrshl_u16(uint16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 20261 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqrshl_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 20278 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqrshl_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 20294 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vqrshl_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqrshl_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 20533 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqshlq_u8(uint8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 20550 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vqshlq_u32(uint32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 20567 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vqshlq_u64(uint64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 20584 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vqshlq_u16(uint16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 20601 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqshlq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 20618 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqshlq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 20635 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqshlq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
# 20652 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqshlq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 20669 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqshl_u8(uint8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 20686 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vqshl_u32(uint32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 20702 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vqshl_u64(uint64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vqshl_u16(uint16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 20725 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqshl_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 20742 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqshl_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 20758 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vqshl_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqshl_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 21393 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqsubq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 21410 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vqsubq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 21427 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vqsubq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 21444 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vqsubq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 21461 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqsubq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 21478 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqsubq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 21500 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqsubq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
# 21517 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqsubq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 21539 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqsub_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 21556 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vqsub_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 21572 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vqsub_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vqsub_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 21595 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqsub_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 21612 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqsub_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 21633 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vqsub_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqsub_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 21661 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vraddhn_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 17);
  return __ret;
}
# 21683 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vraddhn_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 18);
  return __ret;
}
# 21705 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vraddhn_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 16);
  return __ret;
}
# 21727 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vraddhn_s32(int32x4_t __p0, int32x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 1);
  return __ret;
}
# 21749 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vraddhn_s64(int64x2_t __p0, int64x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 2);
  return __ret;
}
# 21771 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vraddhn_s16(int16x8_t __p0, int16x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 0);
  return __ret;
}
# 21793 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vrecpeq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vrecpeq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 21809 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrecpeq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrecpeq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 21825 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vrecpe_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrecpe_v((int8x8_t)__p0, 18);
  return __ret;
}
# 21841 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrecpe_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrecpe_v((int8x8_t)__p0, 9);
  return __ret;
}
# 21857 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrecpsq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrecpsq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 21874 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrecps_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrecps_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 21891 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vrev16_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
# 21907 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vrev16q_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14);
  return __ret;
}
# 21923 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vrev16q_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14);
  return __ret;
}
# 21939 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vrev16q_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14);
  return __ret;
}
# 21955 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vrev16_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
# 21971 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vrev16_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
# 21987 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vrev32_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
# 22003 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vrev32_p16(poly16x4_t __p0) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
# 22019 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vrev32q_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4, 11, 10, 9, 8, 15, 14, 13, 12);
  return __ret;
}
# 22035 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vrev32q_p16(poly16x8_t __p0) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
# 22051 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vrev32q_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4, 11, 10, 9, 8, 15, 14, 13, 12);
  return __ret;
}
# 22067 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vrev32q_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
# 22083 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vrev32q_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4, 11, 10, 9, 8, 15, 14, 13, 12);
  return __ret;
}
# 22099 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vrev32q_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
# 22115 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vrev32_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
# 22131 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vrev32_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
# 22147 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vrev32_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
# 22163 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vrev32_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
# 22179 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vrev64_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0);
  return __ret;
}
# 22195 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vrev64_p16(poly16x4_t __p0) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0);
  return __ret;
}
# 22211 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vrev64q_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8);
  return __ret;
}
# 22227 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vrev64q_p16(poly16x8_t __p0) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
# 22243 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vrev64q_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8);
  return __ret;
}
# 22259 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vrev64q_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
# 22275 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vrev64q_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
# 22291 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vrev64q_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8);
  return __ret;
}
# 22307 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrev64q_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
# 22323 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vrev64q_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
# 22339 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vrev64q_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
# 22355 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vrev64_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0);
  return __ret;
}
# 22371 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vrev64_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0);
  return __ret;
}
# 22387 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vrev64_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0);
  return __ret;
}
# 22403 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vrev64_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0);
  return __ret;
}
# 22419 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrev64_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0);
  return __ret;
}
# 22435 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vrev64_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0);
  return __ret;
}
# 22451 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vrev64_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0);
  return __ret;
}
# 22467 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vrhaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 22484 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vrhaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 22501 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vrhaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 22518 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vrhaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 22535 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vrhaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 22552 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vrhaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 22569 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vrhadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 22586 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vrhadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 22603 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vrhadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 22620 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vrhadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 22637 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vrhadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 22654 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vrhadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 22671 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vrshlq_u8(uint8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 22688 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vrshlq_u32(uint32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 22705 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vrshlq_u64(uint64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 22722 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vrshlq_u16(uint16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 22739 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vrshlq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 22756 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vrshlq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 22773 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vrshlq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
# 22790 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vrshlq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 22807 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vrshl_u8(uint8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 22824 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vrshl_u32(uint32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 22840 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vrshl_u64(uint64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vrshl_u16(uint16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 22863 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vrshl_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 22880 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vrshl_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 22896 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vrshl_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vrshl_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 23327 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vrsqrteq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vrsqrteq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 23343 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrsqrteq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrsqrteq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 23359 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vrsqrte_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrsqrte_v((int8x8_t)__p0, 18);
  return __ret;
}
# 23375 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrsqrte_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrsqrte_v((int8x8_t)__p0, 9);
  return __ret;
}
# 23391 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrsqrtsq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrsqrtsq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 23408 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrsqrts_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrsqrts_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 23733 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vrsubhn_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 17);
  return __ret;
}
# 23755 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vrsubhn_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 18);
  return __ret;
}
# 23777 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vrsubhn_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 16);
  return __ret;
}
# 23799 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vrsubhn_s32(int32x4_t __p0, int32x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 1);
  return __ret;
}
# 23821 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vrsubhn_s64(int64x2_t __p0, int64x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 2);
  return __ret;
}
# 23843 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vrsubhn_s16(int16x8_t __p0, int16x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 0);
  return __ret;
}
# 24419 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vshlq_u8(uint8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 24436 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vshlq_u32(uint32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 24453 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vshlq_u64(uint64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 24470 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vshlq_u16(uint16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 24487 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vshlq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 24504 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vshlq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 24521 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vshlq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
# 24538 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vshlq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 24555 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vshl_u8(uint8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 24572 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vshl_u32(uint32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 24588 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vshl_u64(uint64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vshl_u16(uint16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 24611 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vshl_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 24628 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vshl_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 24644 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vshl_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vshl_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 29703 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vsubq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29720 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsubq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29737 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vsubq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29754 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vsubq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29771 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vsubq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29788 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vsubq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29805 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vsubq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29822 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vsubq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29839 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vsubq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29856 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vsub_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29873 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vsub_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29889 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vsub_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vsub_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29912 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vsub_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29929 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vsub_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29946 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vsub_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29962 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vsub_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vsub_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 29985 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vsubhn_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 17);
  return __ret;
}
# 30007 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vsubhn_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 18);
  return __ret;
}
# 30029 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vsubhn_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 16);
  return __ret;
}
# 30051 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vsubhn_s32(int32x4_t __p0, int32x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 1);
  return __ret;
}
# 30073 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vsubhn_s64(int64x2_t __p0, int64x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 2);
  return __ret;
}
# 30095 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vsubhn_s16(int16x8_t __p0, int16x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 0);
  return __ret;
}
# 30117 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vsubl_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = vmovl_u8(__p0) - vmovl_u8(__p1);
  return __ret;
}
# 30134 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vsubl_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = vmovl_u32(__p0) - vmovl_u32(__p1);
  return __ret;
}
# 30151 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsubl_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = vmovl_u16(__p0) - vmovl_u16(__p1);
  return __ret;
}
# 30168 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vsubl_s8(int8x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = vmovl_s8(__p0) - vmovl_s8(__p1);
  return __ret;
}
# 30185 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vsubl_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = vmovl_s32(__p0) - vmovl_s32(__p1);
  return __ret;
}
# 30202 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vsubl_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = vmovl_s16(__p0) - vmovl_s16(__p1);
  return __ret;
}
# 30219 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vsubw_u8(uint16x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 - vmovl_u8(__p1);
  return __ret;
}
# 30236 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vsubw_u32(uint64x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 - vmovl_u32(__p1);
  return __ret;
}
# 30253 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsubw_u16(uint32x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 - vmovl_u16(__p1);
  return __ret;
}
# 30270 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vsubw_s8(int16x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 - vmovl_s8(__p1);
  return __ret;
}
# 30287 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vsubw_s32(int64x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 - vmovl_s32(__p1);
  return __ret;
}
# 30304 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vsubw_s16(int32x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 - vmovl_s16(__p1);
  return __ret;
}
# 30321 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtbl1_p8(poly8x8_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbl1_v((int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
# 30338 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtbl1_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbl1_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 30355 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtbl1_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbl1_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 30372 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtbl2_p8(poly8x8x2_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbl2_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p1, 4);
  return __ret;
}
# 30391 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtbl2_u8(uint8x8x2_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbl2_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p1, 16);
  return __ret;
}
# 30410 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtbl2_s8(int8x8x2_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbl2_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p1, 0);
  return __ret;
}
# 30429 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtbl3_p8(poly8x8x3_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbl3_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p1, 4);
  return __ret;
}
# 30449 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtbl3_u8(uint8x8x3_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbl3_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p1, 16);
  return __ret;
}
# 30469 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtbl3_s8(int8x8x3_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbl3_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p1, 0);
  return __ret;
}
# 30489 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtbl4_p8(poly8x8x4_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbl4_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p0.val[3], (int8x8_t)__p1, 4);
  return __ret;
}
# 30510 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtbl4_u8(uint8x8x4_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbl4_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p0.val[3], (int8x8_t)__p1, 16);
  return __ret;
}
# 30531 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtbl4_s8(int8x8x4_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbl4_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p0.val[3], (int8x8_t)__p1, 0);
  return __ret;
}
# 30552 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtbx1_p8(poly8x8_t __p0, poly8x8_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbx1_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 4);
  return __ret;
}
# 30570 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtbx1_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbx1_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 16);
  return __ret;
}
# 30588 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtbx1_s8(int8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbx1_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 0);
  return __ret;
}
# 30606 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtbx2_p8(poly8x8_t __p0, poly8x8x2_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbx2_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p2, 4);
  return __ret;
}
# 30626 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtbx2_u8(uint8x8_t __p0, uint8x8x2_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbx2_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p2, 16);
  return __ret;
}
# 30646 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtbx2_s8(int8x8_t __p0, int8x8x2_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbx2_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p2, 0);
  return __ret;
}
# 30666 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtbx3_p8(poly8x8_t __p0, poly8x8x3_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbx3_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p2, 4);
  return __ret;
}
# 30687 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtbx3_u8(uint8x8_t __p0, uint8x8x3_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbx3_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p2, 16);
  return __ret;
}
# 30708 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtbx3_s8(int8x8_t __p0, int8x8x3_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbx3_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p2, 0);
  return __ret;
}
# 30729 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtbx4_p8(poly8x8_t __p0, poly8x8x4_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbx4_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p1.val[3], (int8x8_t)__p2, 4);
  return __ret;
}
# 30751 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtbx4_u8(uint8x8_t __p0, uint8x8x4_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbx4_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p1.val[3], (int8x8_t)__p2, 16);
  return __ret;
}
# 30773 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtbx4_s8(int8x8_t __p0, int8x8x4_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbx4_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p1.val[3], (int8x8_t)__p2, 0);
  return __ret;
}
# 30795 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8x2_t vtrn_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
# 30814 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4x2_t vtrn_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 5);
  return __ret;
}
# 30833 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16x2_t vtrnq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
# 30852 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8x2_t vtrnq_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 37);
  return __ret;
}
# 30871 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16x2_t vtrnq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 30890 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4x2_t vtrnq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 30909 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8x2_t vtrnq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 30928 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16x2_t vtrnq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 30947 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4x2_t vtrnq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 30966 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4x2_t vtrnq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 30985 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8x2_t vtrnq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 31004 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8x2_t vtrn_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 31023 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2x2_t vtrn_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 31042 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4x2_t vtrn_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 31061 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8x2_t vtrn_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 31080 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2x2_t vtrn_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 31099 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2x2_t vtrn_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 31118 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4x2_t vtrn_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 31137 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtst_p8(poly8x8_t __p0, poly8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 31154 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vtst_p16(poly16x4_t __p0, poly16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 31171 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vtstq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 31188 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vtstq_p16(poly16x8_t __p0, poly16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 31205 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vtstq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 31222 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vtstq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 31239 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vtstq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 31256 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vtstq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 31273 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vtstq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 31290 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vtstq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 31307 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtst_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 31324 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vtst_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 31341 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vtst_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 31358 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtst_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 31375 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vtst_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 31392 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vtst_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 31409 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8x2_t vuzp_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
# 31428 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4x2_t vuzp_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 5);
  return __ret;
}
# 31447 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16x2_t vuzpq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
# 31466 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8x2_t vuzpq_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 37);
  return __ret;
}
# 31485 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16x2_t vuzpq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 31504 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4x2_t vuzpq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 31523 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8x2_t vuzpq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 31542 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16x2_t vuzpq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 31561 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4x2_t vuzpq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 31580 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4x2_t vuzpq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 31599 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8x2_t vuzpq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 31618 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8x2_t vuzp_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 31637 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2x2_t vuzp_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 31656 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4x2_t vuzp_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 31675 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8x2_t vuzp_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 31694 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2x2_t vuzp_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 31713 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2x2_t vuzp_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 31732 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4x2_t vuzp_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 31751 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8x2_t vzip_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
# 31770 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4x2_t vzip_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 5);
  return __ret;
}
# 31789 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16x2_t vzipq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
# 31808 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8x2_t vzipq_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 37);
  return __ret;
}
# 31827 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16x2_t vzipq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 31846 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4x2_t vzipq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 31865 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8x2_t vzipq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 31884 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16x2_t vzipq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 31903 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4x2_t vzipq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 31922 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4x2_t vzipq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 31941 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8x2_t vzipq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 31960 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8x2_t vzip_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 31979 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2x2_t vzip_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 31998 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4x2_t vzip_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 32017 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8x2_t vzip_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 32036 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2x2_t vzip_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 32055 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2x2_t vzip_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 32074 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4x2_t vzip_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 33688 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vcvt_f16_f32(float32x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcvt_f16_f32((int8x16_t)__p0, 41);
  return __ret;
}
# 33709 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcvt_f32_f16(float16x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcvt_f32_f16((int8x8_t)__p0, 8);
  return __ret;
}
# 34636 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vcvtaq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtaq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
# 34652 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vcvta_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvta_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
# 34668 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcvtaq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtaq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
# 34684 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcvta_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvta_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
# 34700 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vcvtmq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtmq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
# 34716 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vcvtm_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvtm_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
# 34732 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcvtmq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtmq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
# 34748 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcvtm_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvtm_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
# 34764 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vcvtnq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtnq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
# 34780 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vcvtn_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvtn_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
# 34796 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcvtnq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtnq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
# 34812 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcvtn_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvtn_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
# 34828 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vcvtpq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtpq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
# 34844 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vcvtp_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvtp_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
# 34860 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcvtpq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtpq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
# 34876 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcvtp_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvtp_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
# 34894 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vaesdq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vaesdq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 34911 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vaeseq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vaeseq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 34928 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vaesimcq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vaesimcq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 34944 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vaesmcq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vaesmcq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 34960 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsha1cq_u32(uint32x4_t __p0, uint32_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1cq_u32(__p0, __p1, __p2);
  return __ret;
}
# 34976 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vsha1h_u32(uint32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vsha1h_u32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsha1mq_u32(uint32x4_t __p0, uint32_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1mq_u32(__p0, __p1, __p2);
  return __ret;
}
# 34999 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsha1pq_u32(uint32x4_t __p0, uint32_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1pq_u32(__p0, __p1, __p2);
  return __ret;
}
# 35016 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsha1su0q_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1su0q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
# 35034 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsha1su1q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1su1q_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 35051 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsha256hq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha256hq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
# 35069 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsha256h2q_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha256h2q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
# 35087 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsha256su0q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha256su0q_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 35104 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsha256su1q_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha256su1q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
# 35124 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrndq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 35140 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrnd_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrnd_v((int8x8_t)__p0, 9);
  return __ret;
}
# 35156 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrndaq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndaq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 35172 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrnda_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrnda_v((int8x8_t)__p0, 9);
  return __ret;
}
# 35188 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrndiq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndiq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 35204 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrndi_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndi_v((int8x8_t)__p0, 9);
  return __ret;
}
# 35220 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrndmq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndmq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 35236 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrndm_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndm_v((int8x8_t)__p0, 9);
  return __ret;
}
# 35252 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrndnq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndnq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 35268 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrndn_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndn_v((int8x8_t)__p0, 9);
  return __ret;
}
# 35283 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vrndns_f32(float32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrndns_f32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrndpq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndpq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 35305 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrndp_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndp_v((int8x8_t)__p0, 9);
  return __ret;
}
# 35321 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vrndxq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndxq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 35337 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vrndx_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndx_v((int8x8_t)__p0, 9);
  return __ret;
}
# 35355 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrndq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrndq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 35371 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrnd_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrnd_v((int8x8_t)__p0, 8);
  return __ret;
}
# 35387 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrndaq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrndaq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 35403 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrnda_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrnda_v((int8x8_t)__p0, 8);
  return __ret;
}
# 35419 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrndmq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrndmq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 35435 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrndm_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrndm_v((int8x8_t)__p0, 8);
  return __ret;
}
# 35451 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrndnq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrndnq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 35467 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrndn_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrndn_v((int8x8_t)__p0, 8);
  return __ret;
}
# 35483 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrndpq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrndpq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 35499 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrndp_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrndp_v((int8x8_t)__p0, 8);
  return __ret;
}
# 35515 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrndxq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrndxq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 35531 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrndx_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrndx_v((int8x8_t)__p0, 8);
  return __ret;
}
# 35549 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmaxnmq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 35566 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmaxnm_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vmaxnm_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 35583 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vminnmq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 35600 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vminnm_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vminnm_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 35619 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vmaxnmq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 35636 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vmaxnm_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vmaxnm_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 35653 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vminnmq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 35670 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vminnm_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vminnm_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 35689 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vcvtaq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtaq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
# 35704 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vcvta_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvta_s64_v((int8x8_t)__p0, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcvtaq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtaq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
# 35725 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcvta_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvta_u64_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vcvtmq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtmq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
# 35746 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vcvtm_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvtm_s64_v((int8x8_t)__p0, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcvtmq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtmq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
# 35767 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcvtm_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvtm_u64_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vcvtnq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtnq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
# 35788 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vcvtn_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvtn_s64_v((int8x8_t)__p0, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcvtnq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtnq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
# 35809 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcvtn_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvtn_u64_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vcvtpq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtpq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
# 35830 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vcvtp_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvtp_s64_v((int8x8_t)__p0, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcvtpq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtpq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
# 35851 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcvtp_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvtp_u64_v((int8x8_t)__p0, 19);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_p64(poly64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_p16(poly16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_u8(uint8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_u32(uint32x2_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_u64(uint64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_u16(uint16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_s8(int8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_f64(float64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_f32(float32x2_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_f16(float16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_s32(int32x2_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_s64(int64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vreinterpret_p8_s16(int16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_p8(poly8x8_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_p16(poly16x4_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_u8(uint8x8_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_u32(uint32x2_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_u64(uint64x1_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_u16(uint16x4_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_s8(int8x8_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_f64(float64x1_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_f32(float32x2_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_f16(float16x4_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_s32(int32x2_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_s64(int64x1_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vreinterpret_p64_s16(int16x4_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_p8(poly8x8_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_p64(poly64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_u8(uint8x8_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_u32(uint32x2_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_u64(uint64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_u16(uint16x4_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_s8(int8x8_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_f64(float64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_f32(float32x2_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_f16(float16x4_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_s32(int32x2_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_s64(int64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vreinterpret_p16_s16(int16x4_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_p128(poly128_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_p64(poly64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_p16(poly16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_u8(uint8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_u32(uint32x4_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_u64(uint64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_u16(uint16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_s8(int8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_f64(float64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_f32(float32x4_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_f16(float16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_s32(int32x4_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_s64(int64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vreinterpretq_p8_s16(int16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_p8(poly8x16_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_p64(poly64x2_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_p16(poly16x8_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_u8(uint8x16_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_u32(uint32x4_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_u64(uint64x2_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_u16(uint16x8_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_s8(int8x16_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_f64(float64x2_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_f32(float32x4_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_f16(float16x8_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_s32(int32x4_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_s64(int64x2_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vreinterpretq_p128_s16(int16x8_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_p8(poly8x16_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_p128(poly128_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_p16(poly16x8_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_u8(uint8x16_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_u32(uint32x4_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_u64(uint64x2_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_u16(uint16x8_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_s8(int8x16_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_f64(float64x2_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_f32(float32x4_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_f16(float16x8_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_s32(int32x4_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_s64(int64x2_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vreinterpretq_p64_s16(int16x8_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_p8(poly8x16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_p128(poly128_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_p64(poly64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_u8(uint8x16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_u32(uint32x4_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_u64(uint64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_u16(uint16x8_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_s8(int8x16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_f64(float64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_f32(float32x4_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_f16(float16x8_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_s32(int32x4_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_s64(int64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vreinterpretq_p16_s16(int16x8_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_p8(poly8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_p128(poly128_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_p64(poly64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_p16(poly16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_u32(uint32x4_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_u64(uint64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_u16(uint16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_f64(float64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_f32(float32x4_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_f16(float16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_s32(int32x4_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_s64(int64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vreinterpretq_u8_s16(int16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_p8(poly8x16_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_p128(poly128_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_p64(poly64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_p16(poly16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_u8(uint8x16_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_u64(uint64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_u16(uint16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_s8(int8x16_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_f64(float64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_f16(float16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_s64(int64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vreinterpretq_u32_s16(int16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_p8(poly8x16_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_p128(poly128_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_p64(poly64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_p16(poly16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_u8(uint8x16_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_u32(uint32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_u16(uint16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_s8(int8x16_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_f32(float32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_f16(float16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_s32(int32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vreinterpretq_u64_s16(int16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_p8(poly8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_p128(poly128_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_p64(poly64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_p16(poly16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_u8(uint8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_u32(uint32x4_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_u64(uint64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_s8(int8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_f64(float64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_f32(float32x4_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_s32(int32x4_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_s64(int64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vreinterpretq_u16_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_p8(poly8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_p128(poly128_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_p64(poly64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_p16(poly16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_u8(uint8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_u32(uint32x4_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_u64(uint64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_u16(uint16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_f64(float64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_f32(float32x4_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_f16(float16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_s32(int32x4_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_s64(int64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vreinterpretq_s8_s16(int16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_p8(poly8x16_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_p128(poly128_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_p64(poly64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_p16(poly16x8_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_u8(uint8x16_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_u32(uint32x4_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_u64(uint64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_u16(uint16x8_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_s8(int8x16_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_f32(float32x4_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_f16(float16x8_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_s32(int32x4_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_s64(int64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vreinterpretq_f64_s16(int16x8_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_p8(poly8x16_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_p128(poly128_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_p64(poly64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_p16(poly16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_u8(uint8x16_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_u32(uint32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_u64(uint64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_u16(uint16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_s8(int8x16_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_f64(float64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_f16(float16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_s32(int32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_s64(int64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vreinterpretq_f32_s16(int16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_p8(poly8x16_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_p128(poly128_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_p64(poly64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_p16(poly16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_u8(uint8x16_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_u32(uint32x4_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_u64(uint64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_u16(uint16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_s8(int8x16_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_f64(float64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_f32(float32x4_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_s32(int32x4_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_s64(int64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vreinterpretq_f16_s16(int16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_p8(poly8x16_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_p128(poly128_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_p64(poly64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_p16(poly16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_u8(uint8x16_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_u32(uint32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_u64(uint64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_u16(uint16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_s8(int8x16_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_f64(float64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_f16(float16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_s64(int64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vreinterpretq_s32_s16(int16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_p8(poly8x16_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_p128(poly128_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_p64(poly64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_p16(poly16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_u8(uint8x16_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_u32(uint32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_u64(uint64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_u16(uint16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_s8(int8x16_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_f32(float32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_f16(float16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_s32(int32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vreinterpretq_s64_s16(int16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_p8(poly8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_p128(poly128_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_p64(poly64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_p16(poly16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_u8(uint8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_u32(uint32x4_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_u64(uint64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_u16(uint16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_s8(int8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_f64(float64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_f32(float32x4_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_f16(float16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_s32(int32x4_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vreinterpretq_s16_s64(int64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_p8(poly8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_p64(poly64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_p16(poly16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_u32(uint32x2_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_u64(uint64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_u16(uint16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_f64(float64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_f32(float32x2_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_f16(float16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_s32(int32x2_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_s64(int64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vreinterpret_u8_s16(int16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_p8(poly8x8_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_p64(poly64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_p16(poly16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_u8(uint8x8_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_u64(uint64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_u16(uint16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_s8(int8x8_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_f64(float64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_f16(float16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_s64(int64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vreinterpret_u32_s16(int16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_p8(poly8x8_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_p64(poly64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_p16(poly16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_u8(uint8x8_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_u32(uint32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_u16(uint16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_s8(int8x8_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_f32(float32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_f16(float16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_s32(int32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vreinterpret_u64_s16(int16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_p8(poly8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_p64(poly64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_p16(poly16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_u8(uint8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_u32(uint32x2_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_u64(uint64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_s8(int8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_f64(float64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_f32(float32x2_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_s32(int32x2_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_s64(int64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vreinterpret_u16_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_p8(poly8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_p64(poly64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_p16(poly16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_u8(uint8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_u32(uint32x2_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_u64(uint64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_u16(uint16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_f64(float64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_f32(float32x2_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_f16(float16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_s32(int32x2_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_s64(int64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vreinterpret_s8_s16(int16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_p8(poly8x8_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_p64(poly64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_p16(poly16x4_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_u8(uint8x8_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_u32(uint32x2_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_u64(uint64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_u16(uint16x4_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_s8(int8x8_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_f32(float32x2_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_f16(float16x4_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_s32(int32x2_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_s64(int64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vreinterpret_f64_s16(int16x4_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_p8(poly8x8_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_p64(poly64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_p16(poly16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_u8(uint8x8_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_u32(uint32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_u64(uint64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_u16(uint16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_s8(int8x8_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_f64(float64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_f16(float16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_s32(int32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_s64(int64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vreinterpret_f32_s16(int16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_p8(poly8x8_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_p64(poly64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_p16(poly16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_u8(uint8x8_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_u32(uint32x2_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_u64(uint64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_u16(uint16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_s8(int8x8_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_f64(float64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_f32(float32x2_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_s32(int32x2_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_s64(int64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vreinterpret_f16_s16(int16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_p8(poly8x8_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_p64(poly64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_p16(poly16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_u8(uint8x8_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_u32(uint32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_u64(uint64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_u16(uint16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_s8(int8x8_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_f64(float64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_f16(float16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_s64(int64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vreinterpret_s32_s16(int16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_p8(poly8x8_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_p64(poly64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_p16(poly16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_u8(uint8x8_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_u32(uint32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_u64(uint64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_u16(uint16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_s8(int8x8_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_f32(float32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_f16(float16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_s32(int32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vreinterpret_s64_s16(int16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_p8(poly8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_p64(poly64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_p16(poly16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_u8(uint8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_u32(uint32x2_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_u64(uint64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_u16(uint16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_s8(int8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_f64(float64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_f32(float32x2_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_f16(float16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_s32(int32x2_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vreinterpret_s16_s64(int64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}



static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrndq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 37834 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrnd_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrnd_v((int8x8_t)__p0, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrndaq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndaq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 37855 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrnda_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrnda_v((int8x8_t)__p0, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrndiq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndiq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 37876 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrndi_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndi_v((int8x8_t)__p0, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrndmq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndmq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 37897 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrndm_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndm_v((int8x8_t)__p0, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrndnq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndnq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 37918 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrndn_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndn_v((int8x8_t)__p0, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrndpq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndpq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 37939 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrndp_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndp_v((int8x8_t)__p0, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrndxq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndxq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 37960 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrndx_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndx_v((int8x8_t)__p0, 10);
  return __ret;
}



static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vmaxnmq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 37984 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vmaxnm_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmaxnm_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vminnmq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 38006 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vminnm_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vminnm_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
# 40365 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcadd_rot270_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcadd_rot270_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 40382 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcadd_rot90_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcadd_rot90_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 40399 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcaddq_rot270_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcaddq_rot270_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 40416 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcaddq_rot90_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcaddq_rot90_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 40433 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcmlaq_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcmlaq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 40456 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcmla_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcmla_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 40591 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcmlaq_rot180_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcmlaq_rot180_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 40614 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcmla_rot180_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcmla_rot180_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 40749 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcmlaq_rot270_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcmlaq_rot270_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 40772 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcmla_rot270_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcmla_rot270_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 40907 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcmlaq_rot90_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcmlaq_rot90_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 40930 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcmla_rot90_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcmla_rot90_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 41067 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vcadd_rot270_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcadd_rot270_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 41084 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vcadd_rot90_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcadd_rot90_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 41101 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcaddq_rot270_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vcaddq_rot270_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 41118 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcaddq_rot90_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vcaddq_rot90_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 41135 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcmlaq_f16(float16x8_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vcmlaq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 40);
  return __ret;
}
# 41158 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vcmla_f16(float16x4_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcmla_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 8);
  return __ret;
}
# 41293 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcmlaq_rot180_f16(float16x8_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vcmlaq_rot180_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 40);
  return __ret;
}
# 41316 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vcmla_rot180_f16(float16x4_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcmla_rot180_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 8);
  return __ret;
}
# 41451 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcmlaq_rot270_f16(float16x8_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vcmlaq_rot270_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 40);
  return __ret;
}
# 41474 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vcmla_rot270_f16(float16x4_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcmla_rot270_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 8);
  return __ret;
}
# 41609 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcmlaq_rot90_f16(float16x8_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vcmlaq_rot90_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 40);
  return __ret;
}
# 41632 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vcmla_rot90_f16(float16x4_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcmla_rot90_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 8);
  return __ret;
}
# 41769 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcaddq_rot270_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcaddq_rot270_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 41786 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcaddq_rot90_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcaddq_rot90_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 41803 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcmlaq_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcmlaq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 42);
  return __ret;
}
# 41825 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vcmla_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vcmla_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 10);
  return __ret;
}
# 41921 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcmlaq_rot180_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcmlaq_rot180_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 42);
  return __ret;
}
# 41943 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vcmla_rot180_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vcmla_rot180_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 10);
  return __ret;
}
# 42039 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcmlaq_rot270_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcmlaq_rot270_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 42);
  return __ret;
}
# 42061 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vcmla_rot270_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vcmla_rot270_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 10);
  return __ret;
}
# 42157 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcmlaq_rot90_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcmlaq_rot90_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 42);
  return __ret;
}
# 42179 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vcmla_rot90_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vcmla_rot90_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 10);
  return __ret;
}
# 42277 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vdotq_u32(uint32x4_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vdotq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
# 42300 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vdotq_s32(int32x4_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vdotq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 34);
  return __ret;
}
# 42323 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vdot_u32(uint32x2_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vdot_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 18);
  return __ret;
}
# 42346 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vdot_s32(int32x2_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vdot_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 2);
  return __ret;
}
# 42597 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vfmaq_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vfmaq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 42620 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vfma_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vfma_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 42643 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vfmaq_n_f32(float32x4_t __p0, float32x4_t __p1, float32_t __p2) {
  float32x4_t __ret;
  __ret = vfmaq_f32(__p0, __p1, (float32x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
# 42660 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vfma_n_f32(float32x2_t __p0, float32x2_t __p1, float32_t __p2) {
  float32x2_t __ret;
  __ret = vfma_f32(__p0, __p1, (float32x2_t) {__p2, __p2});
  return __ret;
}
# 42677 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vfmsq_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = vfmaq_f32(__p0, -__p1, __p2);
  return __ret;
}
# 42695 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vfms_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = vfma_f32(__p0, -__p1, __p2);
  return __ret;
}
# 42715 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vfmlalq_high_f16(float32x4_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vfmlalq_high_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 42738 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vfmlal_high_f16(float32x2_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vfmlal_high_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 42761 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vfmlalq_low_f16(float32x4_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vfmlalq_low_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 42784 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vfmlal_low_f16(float32x2_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vfmlal_low_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 42807 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vfmlslq_high_f16(float32x4_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vfmlslq_high_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 42830 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vfmlsl_high_f16(float32x2_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vfmlsl_high_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 42853 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vfmlslq_low_f16(float32x4_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vfmlslq_low_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
# 42876 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vfmlsl_low_f16(float32x2_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vfmlsl_low_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
# 42901 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vabdq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 42918 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vabd_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 42935 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vabsq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 42951 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vabs_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vabs_v((int8x8_t)__p0, 8);
  return __ret;
}
# 42967 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vaddq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 42984 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vadd_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 43001 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vbslq_f16(uint16x8_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 40);
  return __ret;
}
# 43019 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vbsl_f16(uint16x4_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 8);
  return __ret;
}
# 43037 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcageq_f16(float16x8_t __p0, float16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcageq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 43054 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcage_f16(float16x4_t __p0, float16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcage_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 43071 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcagtq_f16(float16x8_t __p0, float16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcagtq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 43088 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcagt_f16(float16x4_t __p0, float16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcagt_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 43105 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcaleq_f16(float16x8_t __p0, float16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcaleq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 43122 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcale_f16(float16x4_t __p0, float16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcale_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 43139 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcaltq_f16(float16x8_t __p0, float16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcaltq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 43156 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcalt_f16(float16x4_t __p0, float16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcalt_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 43173 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vceqq_f16(float16x8_t __p0, float16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 == __p1);
  return __ret;
}
# 43190 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vceq_f16(float16x4_t __p0, float16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 == __p1);
  return __ret;
}
# 43207 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vceqzq_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43223 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vceqz_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43239 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgeq_f16(float16x8_t __p0, float16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 >= __p1);
  return __ret;
}
# 43256 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcge_f16(float16x4_t __p0, float16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 >= __p1);
  return __ret;
}
# 43273 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgezq_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43289 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcgez_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43305 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgtq_f16(float16x8_t __p0, float16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 > __p1);
  return __ret;
}
# 43322 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcgt_f16(float16x4_t __p0, float16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 > __p1);
  return __ret;
}
# 43339 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgtzq_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43355 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcgtz_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43371 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcleq_f16(float16x8_t __p0, float16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 <= __p1);
  return __ret;
}
# 43388 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcle_f16(float16x4_t __p0, float16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 <= __p1);
  return __ret;
}
# 43405 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vclezq_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43421 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vclez_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vclez_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43437 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcltq_f16(float16x8_t __p0, float16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 < __p1);
  return __ret;
}
# 43454 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vclt_f16(float16x4_t __p0, float16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 < __p1);
  return __ret;
}
# 43471 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcltzq_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43487 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcltz_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43503 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcvtq_f16_u16(uint16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vcvtq_f16_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43519 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcvtq_f16_s16(int16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vcvtq_f16_v((int8x16_t)__p0, 33);
  return __ret;
}
# 43535 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vcvt_f16_u16(uint16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcvt_f16_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43551 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vcvt_f16_s16(int16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcvt_f16_v((int8x8_t)__p0, 1);
  return __ret;
}
# 43711 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vcvtq_s16_f16(float16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vcvtq_s16_v((int8x16_t)__p0, 33);
  return __ret;
}
# 43727 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vcvt_s16_f16(float16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vcvt_s16_v((int8x8_t)__p0, 1);
  return __ret;
}
# 43743 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcvtq_u16_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcvtq_u16_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43759 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcvt_u16_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcvt_u16_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43775 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vcvtaq_s16_f16(float16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vcvtaq_s16_v((int8x16_t)__p0, 33);
  return __ret;
}
# 43791 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vcvta_s16_f16(float16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vcvta_s16_v((int8x8_t)__p0, 1);
  return __ret;
}
# 43807 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcvtaq_u16_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcvtaq_u16_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43823 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcvta_u16_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcvta_u16_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43839 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vcvtmq_s16_f16(float16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vcvtmq_s16_v((int8x16_t)__p0, 33);
  return __ret;
}
# 43855 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vcvtm_s16_f16(float16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vcvtm_s16_v((int8x8_t)__p0, 1);
  return __ret;
}
# 43871 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcvtmq_u16_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcvtmq_u16_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43887 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcvtm_u16_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcvtm_u16_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43903 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vcvtnq_s16_f16(float16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vcvtnq_s16_v((int8x16_t)__p0, 33);
  return __ret;
}
# 43919 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vcvtn_s16_f16(float16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vcvtn_s16_v((int8x8_t)__p0, 1);
  return __ret;
}
# 43935 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcvtnq_u16_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcvtnq_u16_v((int8x16_t)__p0, 49);
  return __ret;
}
# 43951 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcvtn_u16_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcvtn_u16_v((int8x8_t)__p0, 17);
  return __ret;
}
# 43967 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vcvtpq_s16_f16(float16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vcvtpq_s16_v((int8x16_t)__p0, 33);
  return __ret;
}
# 43983 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vcvtp_s16_f16(float16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vcvtp_s16_v((int8x8_t)__p0, 1);
  return __ret;
}
# 43999 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcvtpq_u16_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcvtpq_u16_v((int8x16_t)__p0, 49);
  return __ret;
}
# 44015 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcvtp_u16_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcvtp_u16_v((int8x8_t)__p0, 17);
  return __ret;
}
# 44073 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vfmaq_f16(float16x8_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vfmaq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 40);
  return __ret;
}
# 44096 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vfma_f16(float16x4_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vfma_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 8);
  return __ret;
}
# 44119 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vfmsq_f16(float16x8_t __p0, float16x8_t __p1, float16x8_t __p2) {
  float16x8_t __ret;
  __ret = vfmaq_f16(__p0, -__p1, __p2);
  return __ret;
}
# 44137 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vfms_f16(float16x4_t __p0, float16x4_t __p1, float16x4_t __p2) {
  float16x4_t __ret;
  __ret = vfma_f16(__p0, -__p1, __p2);
  return __ret;
}
# 44155 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vmaxq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 44172 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vmax_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44189 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vminq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 44206 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vmin_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44223 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vmulq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 44240 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vmul_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 44339 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vnegq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = -__p0;
  return __ret;
}
# 44355 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vneg_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = -__p0;
  return __ret;
}
# 44371 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vpadd_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44388 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vpmax_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44405 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vpmin_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44422 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrecpeq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrecpeq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 44438 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrecpe_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrecpe_v((int8x8_t)__p0, 8);
  return __ret;
}
# 44454 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrecpsq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrecpsq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 44471 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrecps_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrecps_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44488 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrev64q_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
# 44504 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrev64_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0);
  return __ret;
}
# 44520 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrsqrteq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrsqrteq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 44536 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrsqrte_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrsqrte_v((int8x8_t)__p0, 8);
  return __ret;
}
# 44552 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrsqrtsq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrsqrtsq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 44569 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrsqrts_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrsqrts_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44586 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vsubq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 44603 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vsub_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 44620 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8x2_t vtrnq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 44639 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4x2_t vtrn_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44658 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8x2_t vuzpq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 44677 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4x2_t vuzp_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44696 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8x2_t vzipq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 44715 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4x2_t vzip_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 44736 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vdivq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}
# 44753 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vdiv_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}
# 45398 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vmulxq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vmulxq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 45420 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vmulx_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vmulx_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 45604 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vpaddq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 45621 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vpmaxq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 45638 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vpmaxnmq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vpmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 45655 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vpmaxnm_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vpmaxnm_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 45672 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vpminq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 45689 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vpminnmq_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vpminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 40);
  return __ret;
}
# 45706 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vpminnm_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vpminnm_v((int8x8_t)__p0, (int8x8_t)__p1, 8);
  return __ret;
}
# 45723 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vrndiq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vrndiq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 45739 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vrndi_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vrndi_v((int8x8_t)__p0, 8);
  return __ret;
}
# 45755 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vsqrtq_f16(float16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t) __builtin_neon_vsqrtq_v((int8x16_t)__p0, 40);
  return __ret;
}
# 45771 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vsqrt_f16(float16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vsqrt_v((int8x8_t)__p0, 8);
  return __ret;
}
# 45787 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vtrn1q_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
# 45804 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vtrn1_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
# 45821 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vtrn2q_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
# 45838 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vtrn2_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
# 45855 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vuzp1q_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
# 45872 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vuzp1_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
# 45889 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vuzp2q_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
# 45906 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vuzp2_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
# 45923 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vzip1q_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
# 45940 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vzip1_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
# 45957 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vzip2q_f16(float16x8_t __p0, float16x8_t __p1) {
  float16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
# 45974 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x4_t vzip2_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
# 46147 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqrdmlahq_s32(int32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = vqaddq_s32(__p0, vqrdmulhq_s32(__p1, __p2));
  return __ret;
}
# 46165 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqrdmlahq_s16(int16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = vqaddq_s16(__p0, vqrdmulhq_s16(__p1, __p2));
  return __ret;
}
# 46183 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqrdmlah_s32(int32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = vqadd_s32(__p0, vqrdmulh_s32(__p1, __p2));
  return __ret;
}
# 46201 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqrdmlah_s16(int16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = vqadd_s16(__p0, vqrdmulh_s16(__p1, __p2));
  return __ret;
}
# 46315 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqrdmlshq_s32(int32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = vqsubq_s32(__p0, vqrdmulhq_s32(__p1, __p2));
  return __ret;
}
# 46333 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqrdmlshq_s16(int16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = vqsubq_s16(__p0, vqrdmulhq_s16(__p1, __p2));
  return __ret;
}
# 46351 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vqrdmlsh_s32(int32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = vqsub_s32(__p0, vqrdmulh_s32(__p1, __p2));
  return __ret;
}
# 46369 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vqrdmlsh_s16(int16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = vqsub_s16(__p0, vqrdmulh_s16(__p1, __p2));
  return __ret;
}
# 46679 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vabdq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 46695 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vabd_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vabdd_f64(float64_t __p0, float64_t __p1) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vabdd_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vabds_f32(float32_t __p0, float32_t __p1) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vabds_f32(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vabsq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 46727 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vabsq_s64(int64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 35);
  return __ret;
}
# 46742 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vabs_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vabs_v((int8x8_t)__p0, 10);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vabs_s64(int64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vabs_v((int8x8_t)__p0, 3);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vabsd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vabsd_s64(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vaddq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
# 46774 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vadd_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vaddd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vaddd_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vaddd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vaddd_s64(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vaddhn_high_u32(uint16x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vaddhn_u32(__p1, __p2));
  return __ret;
}
# 46808 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vaddhn_high_u64(uint32x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vaddhn_u64(__p1, __p2));
  return __ret;
}
# 46826 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vaddhn_high_u16(uint8x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vaddhn_u16(__p1, __p2));
  return __ret;
}
# 46844 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vaddhn_high_s32(int16x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vaddhn_s32(__p1, __p2));
  return __ret;
}
# 46862 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vaddhn_high_s64(int32x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vaddhn_s64(__p1, __p2));
  return __ret;
}
# 46880 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vaddhn_high_s16(int8x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vaddhn_s16(__p1, __p2));
  return __ret;
}
# 46898 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vaddlvq_u8(uint8x16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vaddlvq_u8(__p0);
  return __ret;
}
# 46913 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vaddlvq_u32(uint32x4_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vaddlvq_u32(__p0);
  return __ret;
}
# 46928 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vaddlvq_u16(uint16x8_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vaddlvq_u16(__p0);
  return __ret;
}
# 46943 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vaddlvq_s8(int8x16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vaddlvq_s8(__p0);
  return __ret;
}
# 46958 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vaddlvq_s32(int32x4_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vaddlvq_s32(__p0);
  return __ret;
}
# 46973 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vaddlvq_s16(int16x8_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vaddlvq_s16(__p0);
  return __ret;
}
# 46988 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vaddlv_u8(uint8x8_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vaddlv_u8(__p0);
  return __ret;
}
# 47003 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vaddlv_u32(uint32x2_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vaddlv_u32(__p0);
  return __ret;
}
# 47018 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vaddlv_u16(uint16x4_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vaddlv_u16(__p0);
  return __ret;
}
# 47033 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vaddlv_s8(int8x8_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vaddlv_s8(__p0);
  return __ret;
}
# 47048 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vaddlv_s32(int32x2_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vaddlv_s32(__p0);
  return __ret;
}
# 47063 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vaddlv_s16(int16x4_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vaddlv_s16(__p0);
  return __ret;
}
# 47078 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vaddvq_u8(uint8x16_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vaddvq_u8(__p0);
  return __ret;
}
# 47093 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vaddvq_u32(uint32x4_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vaddvq_u32(__p0);
  return __ret;
}
# 47108 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vaddvq_u64(uint64x2_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vaddvq_u64(__p0);
  return __ret;
}
# 47123 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vaddvq_u16(uint16x8_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vaddvq_u16(__p0);
  return __ret;
}
# 47138 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vaddvq_s8(int8x16_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vaddvq_s8(__p0);
  return __ret;
}
# 47153 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vaddvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vaddvq_f64(__p0);
  return __ret;
}
# 47168 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vaddvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vaddvq_f32(__p0);
  return __ret;
}
# 47183 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vaddvq_s32(int32x4_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vaddvq_s32(__p0);
  return __ret;
}
# 47198 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vaddvq_s64(int64x2_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vaddvq_s64(__p0);
  return __ret;
}
# 47213 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vaddvq_s16(int16x8_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vaddvq_s16(__p0);
  return __ret;
}
# 47228 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vaddv_u8(uint8x8_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vaddv_u8(__p0);
  return __ret;
}
# 47243 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vaddv_u32(uint32x2_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vaddv_u32(__p0);
  return __ret;
}
# 47258 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vaddv_u16(uint16x4_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vaddv_u16(__p0);
  return __ret;
}
# 47273 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vaddv_s8(int8x8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vaddv_s8(__p0);
  return __ret;
}
# 47288 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vaddv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vaddv_f32(__p0);
  return __ret;
}
# 47303 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vaddv_s32(int32x2_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vaddv_s32(__p0);
  return __ret;
}
# 47318 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vaddv_s16(int16x4_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vaddv_s16(__p0);
  return __ret;
}
# 47332 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vbsl_p64(uint64x1_t __p0, poly64x1_t __p1, poly64x1_t __p2) {
  poly64x1_t __ret;
  __ret = (poly64x1_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 6);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vbslq_p64(uint64x2_t __p0, poly64x2_t __p1, poly64x2_t __p2) {
  poly64x2_t __ret;
  __ret = (poly64x2_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 38);
  return __ret;
}
# 47356 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vbslq_f64(uint64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 42);
  return __ret;
}
# 47373 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vbsl_f64(uint64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcageq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcageq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 47395 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcage_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcage_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcaged_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcaged_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcages_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcages_f32(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcagtq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcagtq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 47427 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcagt_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcagt_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcagtd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcagtd_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcagts_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcagts_f32(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcaleq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcaleq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 47459 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcale_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcale_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcaled_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcaled_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcales_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcales_f32(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcaltq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcaltq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 47491 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcalt_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcalt_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcaltd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcaltd_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcalts_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcalts_f32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vceq_p64(poly64x1_t __p0, poly64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 == __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vceqq_p64(poly64x2_t __p0, poly64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 == __p1);
  return __ret;
}
# 47529 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vceqq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 == __p1);
  return __ret;
}
# 47546 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vceqq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 == __p1);
  return __ret;
}
# 47563 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vceqq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 == __p1);
  return __ret;
}
# 47579 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vceq_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 == __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vceq_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 == __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vceq_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 == __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vceqd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqd_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vceqd_s64(int64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqd_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vceqd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqd_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vceqs_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vceqs_f32(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vceqz_p8(poly8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 16);
  return __ret;
}
# 47630 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vceqz_p64(poly64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vceqzq_p8(poly8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 47652 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vceqzq_p64(poly64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 47668 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vceqzq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 47684 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vceqzq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 47700 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vceqzq_u64(uint64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 47716 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vceqzq_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 47732 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vceqzq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 47748 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vceqzq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 47764 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vceqzq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 47780 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vceqzq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 47796 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vceqzq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 47812 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vceqzq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 47828 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vceqz_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 16);
  return __ret;
}
# 47844 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vceqz_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 18);
  return __ret;
}
# 47859 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vceqz_u64(uint64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vceqz_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 17);
  return __ret;
}
# 47881 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vceqz_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 16);
  return __ret;
}
# 47896 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vceqz_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vceqz_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 18);
  return __ret;
}
# 47918 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vceqz_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 18);
  return __ret;
}
# 47933 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vceqz_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vceqz_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 17);
  return __ret;
}
# 47954 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vceqzd_u64(uint64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqzd_u64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vceqzd_s64(int64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqzd_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vceqzd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqzd_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vceqzs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vceqzs_f32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgeq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 >= __p1);
  return __ret;
}
# 47992 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgeq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 >= __p1);
  return __ret;
}
# 48009 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgeq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 >= __p1);
  return __ret;
}
# 48025 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcge_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 >= __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcge_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 >= __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcge_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 >= __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcged_s64(int64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcged_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcged_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcged_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcged_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcged_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcges_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcges_f32(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcgezq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 48077 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgezq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 48093 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgezq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 48109 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgezq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 48125 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgezq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 48141 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgezq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 48157 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcgez_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 16);
  return __ret;
}
# 48172 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcgez_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcgez_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 18);
  return __ret;
}
# 48194 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcgez_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 18);
  return __ret;
}
# 48209 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcgez_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcgez_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 17);
  return __ret;
}
# 48230 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcgezd_s64(int64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgezd_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcgezd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgezd_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcgezs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcgezs_f32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgtq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 > __p1);
  return __ret;
}
# 48263 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgtq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 > __p1);
  return __ret;
}
# 48280 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgtq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 > __p1);
  return __ret;
}
# 48296 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcgt_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 > __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcgt_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 > __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcgt_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 > __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcgtd_s64(int64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgtd_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcgtd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgtd_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcgtd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgtd_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcgts_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcgts_f32(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcgtzq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 48348 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgtzq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 48364 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgtzq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 48380 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcgtzq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 48396 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcgtzq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 48412 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcgtzq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 48428 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcgtz_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 16);
  return __ret;
}
# 48443 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcgtz_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcgtz_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 18);
  return __ret;
}
# 48465 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcgtz_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 18);
  return __ret;
}
# 48480 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcgtz_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcgtz_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 17);
  return __ret;
}
# 48501 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcgtzd_s64(int64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgtzd_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcgtzd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgtzd_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcgtzs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcgtzs_f32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcleq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 <= __p1);
  return __ret;
}
# 48534 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcleq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 <= __p1);
  return __ret;
}
# 48551 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcleq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 <= __p1);
  return __ret;
}
# 48567 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcle_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 <= __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcle_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 <= __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcle_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 <= __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcled_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcled_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcled_s64(int64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcled_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcled_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcled_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcles_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcles_f32(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vclezq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 48619 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vclezq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 48635 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vclezq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 48651 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vclezq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 48667 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vclezq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 48683 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vclezq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 48699 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vclez_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vclez_v((int8x8_t)__p0, 16);
  return __ret;
}
# 48714 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vclez_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vclez_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vclez_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vclez_v((int8x8_t)__p0, 18);
  return __ret;
}
# 48736 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vclez_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vclez_v((int8x8_t)__p0, 18);
  return __ret;
}
# 48751 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vclez_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vclez_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vclez_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vclez_v((int8x8_t)__p0, 17);
  return __ret;
}
# 48772 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vclezd_s64(int64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vclezd_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vclezd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vclezd_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vclezs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vclezs_f32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcltq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 < __p1);
  return __ret;
}
# 48805 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcltq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 < __p1);
  return __ret;
}
# 48822 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcltq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 < __p1);
  return __ret;
}
# 48838 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vclt_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 < __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vclt_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 < __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vclt_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 < __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcltd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcltd_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcltd_s64(int64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcltd_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcltd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcltd_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vclts_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vclts_f32(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vcltzq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 48890 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcltzq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 48906 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcltzq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 48922 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vcltzq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 50);
  return __ret;
}
# 48938 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcltzq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 51);
  return __ret;
}
# 48954 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vcltzq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 49);
  return __ret;
}
# 48970 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vcltz_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 16);
  return __ret;
}
# 48985 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcltz_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcltz_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 18);
  return __ret;
}
# 49007 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vcltz_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 18);
  return __ret;
}
# 49022 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcltz_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vcltz_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 17);
  return __ret;
}
# 49043 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcltzd_s64(int64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcltzd_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcltzd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcltzd_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcltzs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcltzs_f32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vcombine_p64(poly64x1_t __p0, poly64x1_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1);
  return __ret;
}
# 49074 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcombine_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1);
  return __ret;
}
# 49990 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vcvts_f32_s32(int32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vcvts_f32_s32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vcvts_f32_u32(uint32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vcvts_f32_u32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcvt_f32_f64(float64x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcvt_f32_f64((int8x16_t)__p0, 9);
  return __ret;
}
# 50021 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vcvtd_f64_s64(int64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vcvtd_f64_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vcvtd_f64_u64(uint64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vcvtd_f64_u64(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcvtq_f64_u64(uint64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcvtq_f64_v((int8x16_t)__p0, 51);
  return __ret;
}
# 50048 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcvtq_f64_s64(int64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcvtq_f64_v((int8x16_t)__p0, 35);
  return __ret;
}
# 50063 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vcvt_f64_u64(uint64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vcvt_f64_v((int8x8_t)__p0, 19);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vcvt_f64_s64(int64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vcvt_f64_v((int8x8_t)__p0, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcvt_f64_f32(float32x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcvt_f64_f32((int8x8_t)__p0, 42);
  return __ret;
}
# 50095 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float16x8_t vcvt_high_f16_f32(float16x4_t __p0, float32x4_t __p1) {
  float16x8_t __ret;
  __ret = vcombine_f16(__p0, vcvt_f16_f32(__p1));
  return __ret;
}
# 50112 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcvt_high_f32_f16(float16x8_t __p0) {
  float32x4_t __ret;
  __ret = vcvt_f32_f16(vget_high_f16(__p0));
  return __ret;
}
# 50128 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcvt_high_f32_f64(float32x2_t __p0, float64x2_t __p1) {
  float32x4_t __ret;
  __ret = vcombine_f32(__p0, vcvt_f32_f64(__p1));
  return __ret;
}
# 50145 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vcvt_high_f64_f32(float32x4_t __p0) {
  float64x2_t __ret;
  __ret = vcvt_f64_f32(vget_high_f32(__p0));
  return __ret;
}
# 50304 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vcvts_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvts_s32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vcvtd_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtd_s64_f64(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vcvtq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
# 50330 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vcvt_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvt_s64_v((int8x8_t)__p0, 3);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcvts_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvts_u32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcvtd_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtd_u64_f64(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vcvtq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
# 50361 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vcvt_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvt_u64_v((int8x8_t)__p0, 19);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vcvtas_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtas_s32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vcvtad_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtad_s64_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcvtas_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtas_u32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcvtad_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtad_u64_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vcvtms_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtms_s32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vcvtmd_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtmd_s64_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcvtms_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtms_u32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcvtmd_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtmd_u64_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vcvtns_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtns_s32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vcvtnd_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtnd_s64_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcvtns_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtns_u32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcvtnd_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtnd_u64_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vcvtps_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtps_s32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vcvtpd_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtpd_s64_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vcvtps_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtps_u32_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vcvtpd_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtpd_u64_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vcvtxd_f32_f64(float64_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vcvtxd_f32_f64(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vcvtx_f32_f64(float64x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcvtx_f32_v((int8x16_t)__p0, 42);
  return __ret;
}
# 50473 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vcvtx_high_f32_f64(float32x2_t __p0, float64x2_t __p1) {
  float32x4_t __ret;
  __ret = vcombine_f32(__p0, vcvtx_f32_f64(__p1));
  return __ret;
}
# 50490 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vdivq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}
# 50507 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vdivq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}
# 50523 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vdiv_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vdiv_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}
# 51502 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vdup_n_p64(poly64_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t) {__p0};
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vdupq_n_p64(poly64_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t) {__p0, __p0};
  return __ret;
}
# 51523 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vdupq_n_f64(float64_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) {__p0, __p0};
  return __ret;
}
# 51537 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vdup_n_f64(float64_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) {__p0};
  return __ret;
}
# 51599 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vfmaq_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vfmaq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 42);
  return __ret;
}
# 51621 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vfma_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vfma_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 10);
  return __ret;
}
# 51950 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vfmaq_n_f64(float64x2_t __p0, float64x2_t __p1, float64_t __p2) {
  float64x2_t __ret;
  __ret = vfmaq_f64(__p0, __p1, (float64x2_t) {__p2, __p2});
  return __ret;
}
# 51966 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vfma_n_f64(float64x1_t __p0, float64x1_t __p1, float64_t __p2) {
  float64x1_t __ret;
  __ret = vfma_f64(__p0, __p1, (float64x1_t) {__p2});
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vfmsq_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = vfmaq_f64(__p0, -__p1, __p2);
  return __ret;
}
# 51989 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vfms_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = vfma_f64(__p0, -__p1, __p2);
  return __ret;
}
# 52238 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vfmsq_n_f64(float64x2_t __p0, float64x2_t __p1, float64_t __p2) {
  float64x2_t __ret;
  __ret = vfmaq_f64(__p0, -__p1, (float64x2_t) {__p2, __p2});
  return __ret;
}
# 52255 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vfmsq_n_f32(float32x4_t __p0, float32x4_t __p1, float32_t __p2) {
  float32x4_t __ret;
  __ret = vfmaq_f32(__p0, -__p1, (float32x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
# 52271 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vfms_n_f64(float64x1_t __p0, float64x1_t __p1, float64_t __p2) {
  float64x1_t __ret;
  __ret = vfma_f64(__p0, -__p1, (float64x1_t) {__p2});
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vfms_n_f32(float32x2_t __p0, float32x2_t __p1, float32_t __p2) {
  float32x2_t __ret;
  __ret = vfma_f32(__p0, -__p1, (float32x2_t) {__p2, __p2});
  return __ret;
}
# 52294 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vget_high_p64(poly64x2_t __p0) {
  poly64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1);
  return __ret;
}
# 52314 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vget_high_f64(float64x2_t __p0) {
  float64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1);
  return __ret;
}
# 52387 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vget_low_p64(poly64x2_t __p0) {
  poly64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0);
  return __ret;
}
# 52402 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vget_low_f64(float64x2_t __p0) {
  float64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0);
  return __ret;
}
# 53648 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vmaxq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 53664 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vmax_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vmaxnmvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vmaxnmvq_f64(__p0);
  return __ret;
}
# 53685 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vmaxnmvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmaxnmvq_f32(__p0);
  return __ret;
}
# 53700 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vmaxnmv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmaxnmv_f32(__p0);
  return __ret;
}
# 53715 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vmaxvq_u8(uint8x16_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vmaxvq_u8(__p0);
  return __ret;
}
# 53730 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vmaxvq_u32(uint32x4_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vmaxvq_u32(__p0);
  return __ret;
}
# 53745 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vmaxvq_u16(uint16x8_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vmaxvq_u16(__p0);
  return __ret;
}
# 53760 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vmaxvq_s8(int8x16_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vmaxvq_s8(__p0);
  return __ret;
}
# 53775 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vmaxvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vmaxvq_f64(__p0);
  return __ret;
}
# 53790 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vmaxvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmaxvq_f32(__p0);
  return __ret;
}
# 53805 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vmaxvq_s32(int32x4_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vmaxvq_s32(__p0);
  return __ret;
}
# 53820 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vmaxvq_s16(int16x8_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vmaxvq_s16(__p0);
  return __ret;
}
# 53835 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vmaxv_u8(uint8x8_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vmaxv_u8(__p0);
  return __ret;
}
# 53850 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vmaxv_u32(uint32x2_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vmaxv_u32(__p0);
  return __ret;
}
# 53865 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vmaxv_u16(uint16x4_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vmaxv_u16(__p0);
  return __ret;
}
# 53880 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vmaxv_s8(int8x8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vmaxv_s8(__p0);
  return __ret;
}
# 53895 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vmaxv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmaxv_f32(__p0);
  return __ret;
}
# 53910 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vmaxv_s32(int32x2_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vmaxv_s32(__p0);
  return __ret;
}
# 53925 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vmaxv_s16(int16x4_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vmaxv_s16(__p0);
  return __ret;
}
# 53940 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vminq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 53956 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vmin_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vminnmvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vminnmvq_f64(__p0);
  return __ret;
}
# 53977 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vminnmvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vminnmvq_f32(__p0);
  return __ret;
}
# 53992 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vminnmv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vminnmv_f32(__p0);
  return __ret;
}
# 54007 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vminvq_u8(uint8x16_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vminvq_u8(__p0);
  return __ret;
}
# 54022 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vminvq_u32(uint32x4_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vminvq_u32(__p0);
  return __ret;
}
# 54037 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vminvq_u16(uint16x8_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vminvq_u16(__p0);
  return __ret;
}
# 54052 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vminvq_s8(int8x16_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vminvq_s8(__p0);
  return __ret;
}
# 54067 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vminvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vminvq_f64(__p0);
  return __ret;
}
# 54082 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vminvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vminvq_f32(__p0);
  return __ret;
}
# 54097 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vminvq_s32(int32x4_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vminvq_s32(__p0);
  return __ret;
}
# 54112 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vminvq_s16(int16x8_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vminvq_s16(__p0);
  return __ret;
}
# 54127 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vminv_u8(uint8x8_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vminv_u8(__p0);
  return __ret;
}
# 54142 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vminv_u32(uint32x2_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vminv_u32(__p0);
  return __ret;
}
# 54157 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vminv_u16(uint16x4_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vminv_u16(__p0);
  return __ret;
}
# 54172 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vminv_s8(int8x8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vminv_s8(__p0);
  return __ret;
}
# 54187 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vminv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vminv_f32(__p0);
  return __ret;
}
# 54202 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vminv_s32(int32x2_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vminv_s32(__p0);
  return __ret;
}
# 54217 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vminv_s16(int16x4_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vminv_s16(__p0);
  return __ret;
}
# 54232 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vmlaq_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 54249 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vmla_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
# 54783 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vmlsq_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 54800 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vmls_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
# 55333 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x1_t vmov_n_p64(poly64_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t) {__p0};
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vmovq_n_p64(poly64_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t) {__p0, __p0};
  return __ret;
}
# 55354 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vmovq_n_f64(float64_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) {__p0, __p0};
  return __ret;
}
# 55368 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vmov_n_f64(float64_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) {__p0};
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmovl_high_u8(uint8x16_t __p0_603) {
  uint16x8_t __ret_603;
  uint8x8_t __a1_603 = vget_high_u8(__p0_603);
  __ret_603 = (uint16x8_t)(__extension__ ({ uint8x8_t __s0 = __a1_603; uint16x8_t __ret; __ret = (uint16x8_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, 0, 49); __ret; }));
  return __ret_603;
}
# 55398 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmovl_high_u32(uint32x4_t __p0_606) {
  uint64x2_t __ret_606;
  uint32x2_t __a1_606 = vget_high_u32(__p0_606);
  __ret_606 = (uint64x2_t)(__extension__ ({ uint32x2_t __s0 = __a1_606; uint64x2_t __ret; __ret = (uint64x2_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, 0, 51); __ret; }));
  return __ret_606;
}
# 55422 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmovl_high_u16(uint16x8_t __p0_609) {
  uint32x4_t __ret_609;
  uint16x4_t __a1_609 = vget_high_u16(__p0_609);
  __ret_609 = (uint32x4_t)(__extension__ ({ uint16x4_t __s0 = __a1_609; uint32x4_t __ret; __ret = (uint32x4_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, 0, 50); __ret; }));
  return __ret_609;
}
# 55446 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmovl_high_s8(int8x16_t __p0_612) {
  int16x8_t __ret_612;
  int8x8_t __a1_612 = vget_high_s8(__p0_612);
  __ret_612 = (int16x8_t)(__extension__ ({ int8x8_t __s0 = __a1_612; int16x8_t __ret; __ret = (int16x8_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, 0, 33); __ret; }));
  return __ret_612;
}
# 55470 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmovl_high_s32(int32x4_t __p0_615) {
  int64x2_t __ret_615;
  int32x2_t __a1_615 = vget_high_s32(__p0_615);
  __ret_615 = (int64x2_t)(__extension__ ({ int32x2_t __s0 = __a1_615; int64x2_t __ret; __ret = (int64x2_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, 0, 35); __ret; }));
  return __ret_615;
}
# 55494 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmovl_high_s16(int16x8_t __p0_618) {
  int32x4_t __ret_618;
  int16x4_t __a1_618 = vget_high_s16(__p0_618);
  __ret_618 = (int32x4_t)(__extension__ ({ int16x4_t __s0 = __a1_618; int32x4_t __ret; __ret = (int32x4_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, 0, 34); __ret; }));
  return __ret_618;
}
# 55518 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmovn_high_u32(uint16x4_t __p0, uint32x4_t __p1) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vmovn_u32(__p1));
  return __ret;
}
# 55535 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmovn_high_u64(uint32x2_t __p0, uint64x2_t __p1) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vmovn_u64(__p1));
  return __ret;
}
# 55552 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vmovn_high_u16(uint8x8_t __p0, uint16x8_t __p1) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vmovn_u16(__p1));
  return __ret;
}
# 55569 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmovn_high_s32(int16x4_t __p0, int32x4_t __p1) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vmovn_s32(__p1));
  return __ret;
}
# 55586 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmovn_high_s64(int32x2_t __p0, int64x2_t __p1) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vmovn_s64(__p1));
  return __ret;
}
# 55603 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vmovn_high_s16(int8x8_t __p0, int16x8_t __p1) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vmovn_s16(__p1));
  return __ret;
}
# 55620 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vmulq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 55636 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vmul_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
# 55982 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vmul_n_f64(float64x1_t __p0, float64_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmul_n_f64((float64x1_t)__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vmulq_n_f64(float64x2_t __p0, float64_t __p1) {
  float64x2_t __ret;
  __ret = __p0 * (float64x2_t) {__p1, __p1};
  return __ret;
}
# 56003 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vmull_p64(poly64_t __p0, poly64_t __p1) {
  poly128_t __ret;
  __ret = (poly128_t) __builtin_neon_vmull_p64(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vmull_high_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly16x8_t __ret;
  __ret = vmull_p8(vget_high_p8(__p0), vget_high_p8(__p1));
  return __ret;
}
# 56026 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmull_high_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = vmull_u8(vget_high_u8(__p0), vget_high_u8(__p1));
  return __ret;
}
# 56043 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmull_high_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = vmull_u32(vget_high_u32(__p0), vget_high_u32(__p1));
  return __ret;
}
# 56060 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmull_high_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = vmull_u16(vget_high_u16(__p0), vget_high_u16(__p1));
  return __ret;
}
# 56077 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmull_high_s8(int8x16_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = vmull_s8(vget_high_s8(__p0), vget_high_s8(__p1));
  return __ret;
}
# 56094 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmull_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vmull_s32(vget_high_s32(__p0), vget_high_s32(__p1));
  return __ret;
}
# 56111 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmull_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vmull_s16(vget_high_s16(__p0), vget_high_s16(__p1));
  return __ret;
}
# 56128 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly128_t vmull_high_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly128_t __ret;
  __ret = vmull_p64((poly64_t)(vget_high_p64(__p0)), (poly64_t)(vget_high_p64(__p1)));
  return __ret;
}
# 56312 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmull_high_n_u32(uint32x4_t __p0, uint32_t __p1) {
  uint64x2_t __ret;
  __ret = vmull_n_u32(vget_high_u32(__p0), __p1);
  return __ret;
}
# 56328 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmull_high_n_u16(uint16x8_t __p0, uint16_t __p1) {
  uint32x4_t __ret;
  __ret = vmull_n_u16(vget_high_u16(__p0), __p1);
  return __ret;
}
# 56344 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmull_high_n_s32(int32x4_t __p0, int32_t __p1) {
  int64x2_t __ret;
  __ret = vmull_n_s32(vget_high_s32(__p0), __p1);
  return __ret;
}
# 56360 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmull_high_n_s16(int16x8_t __p0, int16_t __p1) {
  int32x4_t __ret;
  __ret = vmull_n_s16(vget_high_s16(__p0), __p1);
  return __ret;
}
# 56460 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vmulxq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vmulxq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 56482 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vmulxq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vmulxq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 56503 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vmulx_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmulx_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vmulx_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vmulx_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 56530 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vmulxd_f64(float64_t __p0, float64_t __p1) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vmulxd_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vmulxs_f32(float32_t __p0, float32_t __p1) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmulxs_f32(__p0, __p1);
  return __ret;
}
# 56730 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vnegq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = -__p0;
  return __ret;
}
# 56746 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vnegq_s64(int64x2_t __p0) {
  int64x2_t __ret;
  __ret = -__p0;
  return __ret;
}
# 56761 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vneg_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = -__p0;
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vneg_s64(int64x1_t __p0) {
  int64x1_t __ret;
  __ret = -__p0;
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vnegd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vnegd_s64(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vpaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 56794 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vpaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 56811 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vpaddq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 56828 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vpaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 56845 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vpaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 56862 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vpaddq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 56879 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vpaddq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 56896 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vpaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 56913 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vpaddq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
# 56930 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vpaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 56947 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vpaddd_u64(uint64x2_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vpaddd_u64(__p0);
  return __ret;
}
# 56962 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vpaddd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpaddd_f64(__p0);
  return __ret;
}
# 56977 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vpaddd_s64(int64x2_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vpaddd_s64(__p0);
  return __ret;
}
# 56992 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vpadds_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpadds_f32(__p0);
  return __ret;
}
# 57007 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vpmaxq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 57024 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vpmaxq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 57041 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vpmaxq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 57058 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vpmaxq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 57075 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vpmaxq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 57092 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vpmaxq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 57109 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vpmaxq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 57126 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vpmaxq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 57143 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vpmaxqd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpmaxqd_f64(__p0);
  return __ret;
}
# 57158 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vpmaxs_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpmaxs_f32(__p0);
  return __ret;
}
# 57173 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vpmaxnmq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 57190 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vpmaxnmq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 57207 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vpmaxnm_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpmaxnm_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 57224 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vpmaxnmqd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpmaxnmqd_f64(__p0);
  return __ret;
}
# 57239 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vpmaxnms_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpmaxnms_f32(__p0);
  return __ret;
}
# 57254 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vpminq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 57271 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vpminq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 57288 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vpminq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 57305 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vpminq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 57322 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vpminq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 57339 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vpminq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 57356 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vpminq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 57373 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vpminq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 57390 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vpminqd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpminqd_f64(__p0);
  return __ret;
}
# 57405 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vpmins_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpmins_f32(__p0);
  return __ret;
}
# 57420 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vpminnmq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 57437 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vpminnmq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
# 57454 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vpminnm_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpminnm_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
# 57471 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vpminnmqd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpminnmqd_f64(__p0);
  return __ret;
}
# 57486 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vpminnms_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpminnms_f32(__p0);
  return __ret;
}
# 57501 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqabsq_s64(int64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqabsq_v((int8x16_t)__p0, 35);
  return __ret;
}
# 57516 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vqabs_s64(int64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqabs_v((int8x8_t)__p0, 3);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vqabsb_s8(int8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqabsb_s8(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqabss_s32(int32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqabss_s32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vqabsd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqabsd_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqabsh_s16(int16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqabsh_s16(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vqaddb_u8(uint8_t __p0, uint8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqaddb_u8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vqadds_u32(uint32_t __p0, uint32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqadds_u32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vqaddd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vqaddd_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vqaddh_u16(uint16_t __p0, uint16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqaddh_u16(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vqaddb_s8(int8_t __p0, int8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqaddb_s8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqadds_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqadds_s32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vqaddd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqaddd_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqaddh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqaddh_s16(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vqdmlals_s32(int64_t __p0, int32_t __p1, int32_t __p2) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqdmlals_s32(__p0, __p1, __p2);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqdmlalh_s16(int32_t __p0, int16_t __p1, int16_t __p2) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqdmlalh_s16(__p0, __p1, __p2);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmlal_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlal_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
# 57610 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmlal_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlal_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
# 57724 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmlal_high_n_s32(int64x2_t __p0, int32x4_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlal_n_s32(__p0, vget_high_s32(__p1), __p2);
  return __ret;
}
# 57741 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmlal_high_n_s16(int32x4_t __p0, int16x8_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlal_n_s16(__p0, vget_high_s16(__p1), __p2);
  return __ret;
}
# 57889 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vqdmlsls_s32(int64_t __p0, int32_t __p1, int32_t __p2) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqdmlsls_s32(__p0, __p1, __p2);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqdmlslh_s16(int32_t __p0, int16_t __p1, int16_t __p2) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqdmlslh_s16(__p0, __p1, __p2);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmlsl_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlsl_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
# 57918 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmlsl_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlsl_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
# 58032 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmlsl_high_n_s32(int64x2_t __p0, int32x4_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlsl_n_s32(__p0, vget_high_s32(__p1), __p2);
  return __ret;
}
# 58049 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmlsl_high_n_s16(int32x4_t __p0, int16x8_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlsl_n_s16(__p0, vget_high_s16(__p1), __p2);
  return __ret;
}
# 58197 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqdmulhs_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqdmulhs_s32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqdmulhh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqdmulhh_s16(__p0, __p1);
  return __ret;
}
# 58451 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vqdmulls_s32(int32_t __p0, int32_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqdmulls_s32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqdmullh_s16(int16_t __p0, int16_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqdmullh_s16(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmull_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vqdmull_s32(vget_high_s32(__p0), vget_high_s32(__p1));
  return __ret;
}
# 58479 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmull_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vqdmull_s16(vget_high_s16(__p0), vget_high_s16(__p1));
  return __ret;
}
# 58580 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqdmull_high_n_s32(int32x4_t __p0, int32_t __p1) {
  int64x2_t __ret;
  __ret = vqdmull_n_s32(vget_high_s32(__p0), __p1);
  return __ret;
}
# 58596 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqdmull_high_n_s16(int16x8_t __p0, int16_t __p1) {
  int32x4_t __ret;
  __ret = vqdmull_n_s16(vget_high_s16(__p0), __p1);
  return __ret;
}
# 58729 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqmovns_s32(int32_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqmovns_s32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqmovnd_s64(int64_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqmovnd_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vqmovnh_s16(int16_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqmovnh_s16(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vqmovns_u32(uint32_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqmovns_u32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vqmovnd_u64(uint64_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqmovnd_u64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vqmovnh_u16(uint16_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqmovnh_u16(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vqmovn_high_u32(uint16x4_t __p0, uint32x4_t __p1) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vqmovn_u32(__p1));
  return __ret;
}
# 58777 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vqmovn_high_u64(uint32x2_t __p0, uint64x2_t __p1) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vqmovn_u64(__p1));
  return __ret;
}
# 58794 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqmovn_high_u16(uint8x8_t __p0, uint16x8_t __p1) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vqmovn_u16(__p1));
  return __ret;
}
# 58811 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vqmovn_high_s32(int16x4_t __p0, int32x4_t __p1) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vqmovn_s32(__p1));
  return __ret;
}
# 58828 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vqmovn_high_s64(int32x2_t __p0, int64x2_t __p1) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vqmovn_s64(__p1));
  return __ret;
}
# 58845 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqmovn_high_s16(int8x8_t __p0, int16x8_t __p1) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vqmovn_s16(__p1));
  return __ret;
}
# 58861 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vqmovuns_s32(int32_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqmovuns_s32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vqmovund_s64(int64_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqmovund_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vqmovunh_s16(int16_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqmovunh_s16(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vqmovun_high_s32(uint16x4_t __p0, int32x4_t __p1) {
  uint16x8_t __ret;
  __ret = vcombine_u16((uint16x4_t)(__p0), vqmovun_s32(__p1));
  return __ret;
}
# 58894 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vqmovun_high_s64(uint32x2_t __p0, int64x2_t __p1) {
  uint32x4_t __ret;
  __ret = vcombine_u32((uint32x2_t)(__p0), vqmovun_s64(__p1));
  return __ret;
}
# 58911 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqmovun_high_s16(uint8x8_t __p0, int16x8_t __p1) {
  uint8x16_t __ret;
  __ret = vcombine_u8((uint8x8_t)(__p0), vqmovun_s16(__p1));
  return __ret;
}
# 58928 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vqnegq_s64(int64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqnegq_v((int8x16_t)__p0, 35);
  return __ret;
}
# 58943 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vqneg_s64(int64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqneg_v((int8x8_t)__p0, 3);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vqnegb_s8(int8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqnegb_s8(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqnegs_s32(int32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqnegs_s32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vqnegd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqnegd_s64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqnegh_s16(int16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqnegh_s16(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqrdmulhs_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqrdmulhs_s32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqrdmulhh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqrdmulhh_s16(__p0, __p1);
  return __ret;
}
# 59222 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vqrshlb_u8(uint8_t __p0, int8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqrshlb_u8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vqrshls_u32(uint32_t __p0, int32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqrshls_u32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vqrshld_u64(uint64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vqrshld_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vqrshlh_u16(uint16_t __p0, int16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqrshlh_u16(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vqrshlb_s8(int8_t __p0, int8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqrshlb_s8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqrshls_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqrshls_s32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vqrshld_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqrshld_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqrshlh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqrshlh_s16(__p0, __p1);
  return __ret;
}
# 59505 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vqshlb_u8(uint8_t __p0, int8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqshlb_u8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vqshls_u32(uint32_t __p0, int32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqshls_u32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vqshld_u64(uint64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vqshld_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vqshlh_u16(uint16_t __p0, int16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqshlh_u16(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vqshlb_s8(int8_t __p0, int8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqshlb_s8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqshls_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqshls_s32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vqshld_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqshld_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqshlh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqshlh_s16(__p0, __p1);
  return __ret;
}
# 59860 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vqsubb_u8(uint8_t __p0, uint8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqsubb_u8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vqsubs_u32(uint32_t __p0, uint32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqsubs_u32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vqsubd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vqsubd_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vqsubh_u16(uint16_t __p0, uint16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqsubh_u16(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vqsubb_s8(int8_t __p0, int8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqsubb_s8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqsubs_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqsubs_s32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vqsubd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqsubd_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqsubh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqsubh_s16(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vqtbl1_p8(poly8x16_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbl1_v((int8x16_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
# 59918 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vqtbl1q_p8(poly8x16_t __p0, uint8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbl1q_v((int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
# 59935 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqtbl1q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbl1q_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 59952 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqtbl1q_s8(int8x16_t __p0, uint8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbl1q_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 59969 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqtbl1_u8(uint8x16_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbl1_v((int8x16_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 59986 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqtbl1_s8(int8x16_t __p0, uint8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbl1_v((int8x16_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 60003 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vqtbl2_p8(poly8x16x2_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbl2_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x8_t)__p1, 4);
  return __ret;
}
# 60022 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vqtbl2q_p8(poly8x16x2_t __p0, uint8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbl2q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p1, 36);
  return __ret;
}
# 60041 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqtbl2q_u8(uint8x16x2_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbl2q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p1, 48);
  return __ret;
}
# 60060 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqtbl2q_s8(int8x16x2_t __p0, uint8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbl2q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p1, 32);
  return __ret;
}
# 60079 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqtbl2_u8(uint8x16x2_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbl2_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x8_t)__p1, 16);
  return __ret;
}
# 60098 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqtbl2_s8(int8x16x2_t __p0, uint8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbl2_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x8_t)__p1, 0);
  return __ret;
}
# 60117 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vqtbl3_p8(poly8x16x3_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbl3_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x8_t)__p1, 4);
  return __ret;
}
# 60137 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vqtbl3q_p8(poly8x16x3_t __p0, uint8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbl3q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p1, 36);
  return __ret;
}
# 60157 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqtbl3q_u8(uint8x16x3_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbl3q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p1, 48);
  return __ret;
}
# 60177 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqtbl3q_s8(int8x16x3_t __p0, uint8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbl3q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p1, 32);
  return __ret;
}
# 60197 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqtbl3_u8(uint8x16x3_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbl3_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x8_t)__p1, 16);
  return __ret;
}
# 60217 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqtbl3_s8(int8x16x3_t __p0, uint8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbl3_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x8_t)__p1, 0);
  return __ret;
}
# 60237 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vqtbl4_p8(poly8x16x4_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbl4_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x8_t)__p1, 4);
  return __ret;
}
# 60258 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vqtbl4q_p8(poly8x16x4_t __p0, uint8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbl4q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x16_t)__p1, 36);
  return __ret;
}
# 60279 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqtbl4q_u8(uint8x16x4_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbl4q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x16_t)__p1, 48);
  return __ret;
}
# 60300 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqtbl4q_s8(int8x16x4_t __p0, uint8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbl4q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x16_t)__p1, 32);
  return __ret;
}
# 60321 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqtbl4_u8(uint8x16x4_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbl4_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x8_t)__p1, 16);
  return __ret;
}
# 60342 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqtbl4_s8(int8x16x4_t __p0, uint8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbl4_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x8_t)__p1, 0);
  return __ret;
}
# 60363 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vqtbx1_p8(poly8x8_t __p0, poly8x16_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbx1_v((int8x8_t)__p0, (int8x16_t)__p1, (int8x8_t)__p2, 4);
  return __ret;
}
# 60381 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vqtbx1q_p8(poly8x16_t __p0, poly8x16_t __p1, uint8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbx1q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 36);
  return __ret;
}
# 60399 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqtbx1q_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbx1q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 48);
  return __ret;
}
# 60417 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqtbx1q_s8(int8x16_t __p0, int8x16_t __p1, uint8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbx1q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 32);
  return __ret;
}
# 60435 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqtbx1_u8(uint8x8_t __p0, uint8x16_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbx1_v((int8x8_t)__p0, (int8x16_t)__p1, (int8x8_t)__p2, 16);
  return __ret;
}
# 60453 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqtbx1_s8(int8x8_t __p0, int8x16_t __p1, uint8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbx1_v((int8x8_t)__p0, (int8x16_t)__p1, (int8x8_t)__p2, 0);
  return __ret;
}
# 60471 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vqtbx2_p8(poly8x8_t __p0, poly8x16x2_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbx2_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x8_t)__p2, 4);
  return __ret;
}
# 60491 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vqtbx2q_p8(poly8x16_t __p0, poly8x16x2_t __p1, uint8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbx2q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p2, 36);
  return __ret;
}
# 60511 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqtbx2q_u8(uint8x16_t __p0, uint8x16x2_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbx2q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p2, 48);
  return __ret;
}
# 60531 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqtbx2q_s8(int8x16_t __p0, int8x16x2_t __p1, uint8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbx2q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p2, 32);
  return __ret;
}
# 60551 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqtbx2_u8(uint8x8_t __p0, uint8x16x2_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbx2_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x8_t)__p2, 16);
  return __ret;
}
# 60571 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqtbx2_s8(int8x8_t __p0, int8x16x2_t __p1, uint8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbx2_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x8_t)__p2, 0);
  return __ret;
}
# 60591 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vqtbx3_p8(poly8x8_t __p0, poly8x16x3_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbx3_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x8_t)__p2, 4);
  return __ret;
}
# 60612 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vqtbx3q_p8(poly8x16_t __p0, poly8x16x3_t __p1, uint8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbx3q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p2, 36);
  return __ret;
}
# 60633 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqtbx3q_u8(uint8x16_t __p0, uint8x16x3_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbx3q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p2, 48);
  return __ret;
}
# 60654 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqtbx3q_s8(int8x16_t __p0, int8x16x3_t __p1, uint8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbx3q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p2, 32);
  return __ret;
}
# 60675 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqtbx3_u8(uint8x8_t __p0, uint8x16x3_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbx3_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x8_t)__p2, 16);
  return __ret;
}
# 60696 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqtbx3_s8(int8x8_t __p0, int8x16x3_t __p1, uint8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbx3_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x8_t)__p2, 0);
  return __ret;
}
# 60717 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vqtbx4_p8(poly8x8_t __p0, poly8x16x4_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbx4_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x8_t)__p2, 4);
  return __ret;
}
# 60739 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vqtbx4q_p8(poly8x16_t __p0, poly8x16x4_t __p1, uint8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbx4q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x16_t)__p2, 36);
  return __ret;
}
# 60761 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vqtbx4q_u8(uint8x16_t __p0, uint8x16x4_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbx4q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x16_t)__p2, 48);
  return __ret;
}
# 60783 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vqtbx4q_s8(int8x16_t __p0, int8x16x4_t __p1, uint8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbx4q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x16_t)__p2, 32);
  return __ret;
}
# 60805 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vqtbx4_u8(uint8x8_t __p0, uint8x16x4_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbx4_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x8_t)__p2, 16);
  return __ret;
}
# 60827 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vqtbx4_s8(int8x8_t __p0, int8x16x4_t __p1, uint8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbx4_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x8_t)__p2, 0);
  return __ret;
}
# 60849 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vraddhn_high_u32(uint16x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vraddhn_u32(__p1, __p2));
  return __ret;
}
# 60867 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vraddhn_high_u64(uint32x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vraddhn_u64(__p1, __p2));
  return __ret;
}
# 60885 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vraddhn_high_u16(uint8x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vraddhn_u16(__p1, __p2));
  return __ret;
}
# 60903 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vraddhn_high_s32(int16x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vraddhn_s32(__p1, __p2));
  return __ret;
}
# 60921 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vraddhn_high_s64(int32x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vraddhn_s64(__p1, __p2));
  return __ret;
}
# 60939 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vraddhn_high_s16(int8x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vraddhn_s16(__p1, __p2));
  return __ret;
}
# 60957 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vrbit_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vrbit_v((int8x8_t)__p0, 4);
  return __ret;
}
# 60973 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vrbitq_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vrbitq_v((int8x16_t)__p0, 36);
  return __ret;
}
# 60989 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vrbitq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vrbitq_v((int8x16_t)__p0, 48);
  return __ret;
}
# 61005 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vrbitq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vrbitq_v((int8x16_t)__p0, 32);
  return __ret;
}
# 61021 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vrbit_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vrbit_v((int8x8_t)__p0, 16);
  return __ret;
}
# 61037 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vrbit_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vrbit_v((int8x8_t)__p0, 0);
  return __ret;
}
# 61053 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrecpeq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrecpeq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 61068 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrecpe_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrecpe_v((int8x8_t)__p0, 10);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vrecped_f64(float64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrecped_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vrecpes_f32(float32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrecpes_f32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrecpsq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrecpsq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 61100 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrecps_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrecps_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vrecpsd_f64(float64_t __p0, float64_t __p1) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrecpsd_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vrecpss_f32(float32_t __p0, float32_t __p1) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrecpss_f32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vrecpxd_f64(float64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrecpxd_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vrecpxs_f32(float32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrecpxs_f32(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vrshld_u64(uint64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vrshld_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vrshld_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vrshld_s64(__p0, __p1);
  return __ret;
}
# 61274 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrsqrteq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrsqrteq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 61289 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrsqrte_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrsqrte_v((int8x8_t)__p0, 10);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vrsqrted_f64(float64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrsqrted_f64(__p0);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vrsqrtes_f32(float32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrsqrtes_f32(__p0);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vrsqrtsq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrsqrtsq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
# 61321 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vrsqrts_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrsqrts_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64_t vrsqrtsd_f64(float64_t __p0, float64_t __p1) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrsqrtsd_f64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32_t vrsqrtss_f32(float32_t __p0, float32_t __p1) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrsqrtss_f32(__p0, __p1);
  return __ret;
}
# 61351 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vrsubhn_high_u32(uint16x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vrsubhn_u32(__p1, __p2));
  return __ret;
}
# 61369 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vrsubhn_high_u64(uint32x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vrsubhn_u64(__p1, __p2));
  return __ret;
}
# 61387 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vrsubhn_high_u16(uint8x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vrsubhn_u16(__p1, __p2));
  return __ret;
}
# 61405 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vrsubhn_high_s32(int16x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vrsubhn_s32(__p1, __p2));
  return __ret;
}
# 61423 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vrsubhn_high_s64(int32x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vrsubhn_s64(__p1, __p2));
  return __ret;
}
# 61441 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vrsubhn_high_s16(int8x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vrsubhn_s16(__p1, __p2));
  return __ret;
}
# 61526 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vshld_u64(uint64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vshld_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vshld_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vshld_s64(__p0, __p1);
  return __ret;
}
# 61836 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8_t vsqaddb_u8(uint8_t __p0, int8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vsqaddb_u8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32_t vsqadds_u32(uint32_t __p0, int32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vsqadds_u32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vsqaddd_u64(uint64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vsqaddd_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16_t vsqaddh_u16(uint16_t __p0, int16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vsqaddh_u16(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vsqaddq_u8(uint8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vsqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
# 61874 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsqaddq_u32(uint32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
# 61891 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vsqaddq_u64(uint64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vsqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 61908 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vsqaddq_u16(uint16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vsqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
# 61925 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vsqadd_u8(uint8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vsqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
# 61942 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vsqadd_u32(uint32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vsqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
# 61958 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vsqadd_u64(uint64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vsqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vsqadd_u16(uint16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vsqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
# 61981 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vsqrtq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vsqrtq_v((int8x16_t)__p0, 42);
  return __ret;
}
# 61997 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vsqrtq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vsqrtq_v((int8x16_t)__p0, 41);
  return __ret;
}
# 62012 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vsqrt_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vsqrt_v((int8x8_t)__p0, 10);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vsqrt_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vsqrt_v((int8x8_t)__p0, 9);
  return __ret;
}
# 62881 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vsubd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vsubd_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vsubd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vsubd_s64(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vsubq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
# 62908 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x1_t vsub_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vsubhn_high_u32(uint16x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vsubhn_u32(__p1, __p2));
  return __ret;
}
# 62932 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsubhn_high_u64(uint32x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vsubhn_u64(__p1, __p2));
  return __ret;
}
# 62950 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vsubhn_high_u16(uint8x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vsubhn_u16(__p1, __p2));
  return __ret;
}
# 62968 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vsubhn_high_s32(int16x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vsubhn_s32(__p1, __p2));
  return __ret;
}
# 62986 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vsubhn_high_s64(int32x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vsubhn_s64(__p1, __p2));
  return __ret;
}
# 63004 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vsubhn_high_s16(int8x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vsubhn_s16(__p1, __p2));
  return __ret;
}
# 63022 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vsubl_high_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = vmovl_high_u8(__p0) - vmovl_high_u8(__p1);
  return __ret;
}
# 63039 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vsubl_high_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = vmovl_high_u32(__p0) - vmovl_high_u32(__p1);
  return __ret;
}
# 63056 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsubl_high_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = vmovl_high_u16(__p0) - vmovl_high_u16(__p1);
  return __ret;
}
# 63073 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vsubl_high_s8(int8x16_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = vmovl_high_s8(__p0) - vmovl_high_s8(__p1);
  return __ret;
}
# 63090 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vsubl_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vmovl_high_s32(__p0) - vmovl_high_s32(__p1);
  return __ret;
}
# 63107 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vsubl_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vmovl_high_s16(__p0) - vmovl_high_s16(__p1);
  return __ret;
}
# 63124 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vsubw_high_u8(uint16x8_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 - vmovl_high_u8(__p1);
  return __ret;
}
# 63141 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vsubw_high_u32(uint64x2_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 - vmovl_high_u32(__p1);
  return __ret;
}
# 63158 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vsubw_high_u16(uint32x4_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 - vmovl_high_u16(__p1);
  return __ret;
}
# 63175 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vsubw_high_s8(int16x8_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = __p0 - vmovl_high_s8(__p1);
  return __ret;
}
# 63192 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vsubw_high_s32(int64x2_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = __p0 - vmovl_high_s32(__p1);
  return __ret;
}
# 63209 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vsubw_high_s16(int32x4_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = __p0 - vmovl_high_s16(__p1);
  return __ret;
}
# 63278 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtrn1_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
# 63295 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vtrn1_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
# 63312 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vtrn1q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 2, 18, 4, 20, 6, 22, 8, 24, 10, 26, 12, 28, 14, 30);
  return __ret;
}
# 63329 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vtrn1q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 63346 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vtrn1q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
# 63363 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vtrn1q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 2, 18, 4, 20, 6, 22, 8, 24, 10, 26, 12, 28, 14, 30);
  return __ret;
}
# 63380 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vtrn1q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
# 63397 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vtrn1q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 63414 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vtrn1q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
# 63431 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vtrn1q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 2, 18, 4, 20, 6, 22, 8, 24, 10, 26, 12, 28, 14, 30);
  return __ret;
}
# 63448 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vtrn1q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 63465 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vtrn1q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
# 63482 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vtrn1q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
# 63499 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vtrn1q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 63516 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vtrn1q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
# 63533 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtrn1_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
# 63550 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vtrn1_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 63567 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vtrn1_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
# 63584 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtrn1_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
# 63601 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vtrn1_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 63618 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vtrn1_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 63635 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vtrn1_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
# 63652 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vtrn2_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
# 63669 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vtrn2_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
# 63686 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vtrn2q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 17, 3, 19, 5, 21, 7, 23, 9, 25, 11, 27, 13, 29, 15, 31);
  return __ret;
}
# 63703 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vtrn2q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 63720 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vtrn2q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
# 63737 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vtrn2q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 17, 3, 19, 5, 21, 7, 23, 9, 25, 11, 27, 13, 29, 15, 31);
  return __ret;
}
# 63754 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vtrn2q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
# 63771 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vtrn2q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 63788 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vtrn2q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
# 63805 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vtrn2q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 17, 3, 19, 5, 21, 7, 23, 9, 25, 11, 27, 13, 29, 15, 31);
  return __ret;
}
# 63822 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vtrn2q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 63839 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vtrn2q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
# 63856 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vtrn2q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
# 63873 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vtrn2q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 63890 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vtrn2q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
# 63907 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vtrn2_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
# 63924 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vtrn2_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 63941 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vtrn2_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
# 63958 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vtrn2_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
# 63975 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vtrn2_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 63992 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vtrn2_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 64009 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vtrn2_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
# 64025 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vtst_p64(poly64x1_t __p0, poly64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vtstq_p64(poly64x2_t __p0, poly64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 64048 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vtstq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 64065 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vtstq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
# 64081 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vtst_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x1_t vtst_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vtstd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vtstd_u64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64_t vtstd_s64(int64_t __p0, int64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vtstd_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8_t vuqaddb_s8(int8_t __p0, uint8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vuqaddb_s8(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vuqadds_s32(int32_t __p0, uint32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vuqadds_s32(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64_t vuqaddd_s64(int64_t __p0, uint64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vuqaddd_s64(__p0, __p1);
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vuqaddh_s16(int16_t __p0, uint16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vuqaddh_s16(__p0, __p1);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vuqaddq_s8(int8x16_t __p0, uint8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vuqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
# 64139 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vuqaddq_s32(int32x4_t __p0, uint32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vuqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
# 64156 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vuqaddq_s64(int64x2_t __p0, uint64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vuqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
# 64173 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vuqaddq_s16(int16x8_t __p0, uint16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vuqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
# 64190 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vuqadd_s8(int8x8_t __p0, uint8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vuqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
# 64207 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vuqadd_s32(int32x2_t __p0, uint32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vuqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
# 64223 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x1_t vuqadd_s64(int64x1_t __p0, uint64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vuqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}

static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vuqadd_s16(int16x4_t __p0, uint16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vuqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
# 64298 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vuzp1_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
# 64315 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vuzp1_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
# 64332 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vuzp1q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30);
  return __ret;
}
# 64349 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vuzp1q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 64366 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vuzp1q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
# 64383 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vuzp1q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30);
  return __ret;
}
# 64400 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vuzp1q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
# 64417 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vuzp1q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 64434 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vuzp1q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
# 64451 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vuzp1q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30);
  return __ret;
}
# 64468 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vuzp1q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 64485 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vuzp1q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
# 64502 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vuzp1q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
# 64519 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vuzp1q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 64536 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vuzp1q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
# 64553 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vuzp1_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
# 64570 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vuzp1_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 64587 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vuzp1_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
# 64604 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vuzp1_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
# 64621 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vuzp1_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 64638 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vuzp1_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 64655 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vuzp1_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
# 64672 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vuzp2_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
# 64689 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vuzp2_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
# 64706 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vuzp2q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31);
  return __ret;
}
# 64723 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vuzp2q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 64740 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vuzp2q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
# 64757 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vuzp2q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31);
  return __ret;
}
# 64774 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vuzp2q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
# 64791 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vuzp2q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 64808 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vuzp2q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
# 64825 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vuzp2q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31);
  return __ret;
}
# 64842 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vuzp2q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 64859 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vuzp2q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
# 64876 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vuzp2q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
# 64893 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vuzp2q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 64910 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vuzp2q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
# 64927 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vuzp2_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
# 64944 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vuzp2_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 64961 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vuzp2_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
# 64978 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vuzp2_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
# 64995 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vuzp2_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 65012 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vuzp2_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 65029 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vuzp2_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
# 65046 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vzip1_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
# 65063 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vzip1_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
# 65080 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vzip1q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 1, 17, 2, 18, 3, 19, 4, 20, 5, 21, 6, 22, 7, 23);
  return __ret;
}
# 65097 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vzip1q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 65114 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vzip1q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
# 65131 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vzip1q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 1, 17, 2, 18, 3, 19, 4, 20, 5, 21, 6, 22, 7, 23);
  return __ret;
}
# 65148 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vzip1q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
# 65165 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vzip1q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 65182 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vzip1q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
# 65199 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vzip1q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 1, 17, 2, 18, 3, 19, 4, 20, 5, 21, 6, 22, 7, 23);
  return __ret;
}
# 65216 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vzip1q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 65233 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vzip1q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
# 65250 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vzip1q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
# 65267 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vzip1q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 65284 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vzip1q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
# 65301 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vzip1_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
# 65318 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vzip1_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 65335 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vzip1_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
# 65352 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vzip1_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
# 65369 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vzip1_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 65386 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vzip1_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
# 65403 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vzip1_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
# 65420 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x8_t vzip2_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
# 65437 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x4_t vzip2_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
# 65454 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly8x16_t vzip2q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 8, 24, 9, 25, 10, 26, 11, 27, 12, 28, 13, 29, 14, 30, 15, 31);
  return __ret;
}
# 65471 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly64x2_t vzip2q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 65488 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) poly16x8_t vzip2q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
# 65505 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vzip2q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 8, 24, 9, 25, 10, 26, 11, 27, 12, 28, 13, 29, 14, 30, 15, 31);
  return __ret;
}
# 65522 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vzip2q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
# 65539 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vzip2q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 65556 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vzip2q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
# 65573 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vzip2q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 8, 24, 9, 25, 10, 26, 11, 27, 12, 28, 13, 29, 14, 30, 15, 31);
  return __ret;
}
# 65590 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float64x2_t vzip2q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 65607 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x4_t vzip2q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
# 65624 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vzip2q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
# 65641 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vzip2q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 65658 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vzip2q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
# 65675 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vzip2_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
# 65692 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vzip2_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 65709 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vzip2_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
# 65726 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vzip2_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
# 65743 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) float32x2_t vzip2_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 65760 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vzip2_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
# 65777 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vzip2_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
# 65795 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x16_t vabaq_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = __p0 + vabdq_u8(__p1, __p2);
  return __ret;
}
# 65813 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vabaq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + vabdq_u32(__p1, __p2);
  return __ret;
}
# 65831 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vabaq_u16(uint16x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + vabdq_u16(__p1, __p2);
  return __ret;
}
# 65849 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x16_t vabaq_s8(int8x16_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = __p0 + vabdq_s8(__p1, __p2);
  return __ret;
}
# 65867 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vabaq_s32(int32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + vabdq_s32(__p1, __p2);
  return __ret;
}
# 65885 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vabaq_s16(int16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + vabdq_s16(__p1, __p2);
  return __ret;
}
# 65903 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint8x8_t vaba_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = __p0 + vabd_u8(__p1, __p2);
  return __ret;
}
# 65921 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x2_t vaba_u32(uint32x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 + vabd_u32(__p1, __p2);
  return __ret;
}
# 65939 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x4_t vaba_u16(uint16x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 + vabd_u16(__p1, __p2);
  return __ret;
}
# 65957 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int8x8_t vaba_s8(int8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = __p0 + vabd_s8(__p1, __p2);
  return __ret;
}
# 65975 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x2_t vaba_s32(int32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = __p0 + vabd_s32(__p1, __p2);
  return __ret;
}
# 65993 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x4_t vaba_s16(int16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = __p0 + vabd_s16(__p1, __p2);
  return __ret;
}
# 66011 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vabdl_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(vmovl_u8((uint8x8_t)(vabd_u8(__p0, __p1))));
  return __ret;
}
# 66033 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vabdl_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(vmovl_u32((uint32x2_t)(vabd_u32(__p0, __p1))));
  return __ret;
}
# 66055 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vabdl_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(vmovl_u16((uint16x4_t)(vabd_u16(__p0, __p1))));
  return __ret;
}
# 66077 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vabdl_s8(int8x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t)(vmovl_u8((uint8x8_t)(vabd_s8(__p0, __p1))));
  return __ret;
}
# 66099 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vabdl_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t)(vmovl_u32((uint32x2_t)(vabd_s32(__p0, __p1))));
  return __ret;
}
# 66121 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vabdl_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t)(vmovl_u16((uint16x4_t)(vabd_s16(__p0, __p1))));
  return __ret;
}
# 66143 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vaddl_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = vmovl_u8(__p0) + vmovl_u8(__p1);
  return __ret;
}
# 66160 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vaddl_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = vmovl_u32(__p0) + vmovl_u32(__p1);
  return __ret;
}
# 66177 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vaddl_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = vmovl_u16(__p0) + vmovl_u16(__p1);
  return __ret;
}
# 66194 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vaddl_s8(int8x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = vmovl_s8(__p0) + vmovl_s8(__p1);
  return __ret;
}
# 66211 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vaddl_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = vmovl_s32(__p0) + vmovl_s32(__p1);
  return __ret;
}
# 66228 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vaddl_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = vmovl_s16(__p0) + vmovl_s16(__p1);
  return __ret;
}
# 66245 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vaddw_u8(uint16x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 + vmovl_u8(__p1);
  return __ret;
}
# 66262 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vaddw_u32(uint64x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 + vmovl_u32(__p1);
  return __ret;
}
# 66279 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vaddw_u16(uint32x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 + vmovl_u16(__p1);
  return __ret;
}
# 66296 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vaddw_s8(int16x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 + vmovl_s8(__p1);
  return __ret;
}
# 66313 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vaddw_s32(int64x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 + vmovl_s32(__p1);
  return __ret;
}
# 66330 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vaddw_s16(int32x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 + vmovl_s16(__p1);
  return __ret;
}
# 66405 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmlal_u8(uint16x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + vmull_u8(__p1, __p2);
  return __ret;
}
# 66428 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmlal_u32(uint64x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 + vmull_u32(__p1, __p2);
  return __ret;
}
# 66451 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlal_u16(uint32x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + vmull_u16(__p1, __p2);
  return __ret;
}
# 66474 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmlal_s8(int16x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + vmull_s8(__p1, __p2);
  return __ret;
}
# 66497 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmlal_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = __p0 + vmull_s32(__p1, __p2);
  return __ret;
}
# 66520 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlal_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + vmull_s16(__p1, __p2);
  return __ret;
}
# 66639 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmlal_n_u32(uint64x2_t __p0, uint32x2_t __p1, uint32_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 + vmull_u32(__p1, (uint32x2_t) {__p2, __p2});
  return __ret;
}
# 66661 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlal_n_u16(uint32x4_t __p0, uint16x4_t __p1, uint16_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + vmull_u16(__p1, (uint16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
# 66683 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmlal_n_s32(int64x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = __p0 + vmull_s32(__p1, (int32x2_t) {__p2, __p2});
  return __ret;
}
# 66705 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlal_n_s16(int32x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + vmull_s16(__p1, (int16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
# 66727 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmlsl_u8(uint16x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 - vmull_u8(__p1, __p2);
  return __ret;
}
# 66750 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmlsl_u32(uint64x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 - vmull_u32(__p1, __p2);
  return __ret;
}
# 66773 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlsl_u16(uint32x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 - vmull_u16(__p1, __p2);
  return __ret;
}
# 66796 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmlsl_s8(int16x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 - vmull_s8(__p1, __p2);
  return __ret;
}
# 66819 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmlsl_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = __p0 - vmull_s32(__p1, __p2);
  return __ret;
}
# 66842 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlsl_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 - vmull_s16(__p1, __p2);
  return __ret;
}
# 66961 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmlsl_n_u32(uint64x2_t __p0, uint32x2_t __p1, uint32_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 - vmull_u32(__p1, (uint32x2_t) {__p2, __p2});
  return __ret;
}
# 66983 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlsl_n_u16(uint32x4_t __p0, uint16x4_t __p1, uint16_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 - vmull_u16(__p1, (uint16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
# 67005 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmlsl_n_s32(int64x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = __p0 - vmull_s32(__p1, (int32x2_t) {__p2, __p2});
  return __ret;
}
# 67027 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlsl_n_s16(int32x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = __p0 - vmull_s16(__p1, (int16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
# 67711 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqrdmlahs_s32(int32_t __p0, int32_t __p1, int32_t __p2) {
  int32_t __ret;
  __ret = vqadds_s32(__p0, vqrdmulhs_s32(__p1, __p2));
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqrdmlahh_s16(int16_t __p0, int16_t __p1, int16_t __p2) {
  int16_t __ret;
  __ret = vqaddh_s16(__p0, vqrdmulhh_s16(__p1, __p2));
  return __ret;
}
# 67805 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32_t vqrdmlshs_s32(int32_t __p0, int32_t __p1, int32_t __p2) {
  int32_t __ret;
  __ret = vqsubs_s32(__p0, vqrdmulhs_s32(__p1, __p2));
  return __ret;
}
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16_t vqrdmlshh_s16(int16_t __p0, int16_t __p1, int16_t __p2) {
  int16_t __ret;
  __ret = vqsubh_s16(__p0, vqrdmulhh_s16(__p1, __p2));
  return __ret;
}
# 67902 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vabdl_high_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = vabdl_u8(vget_high_u8(__p0), vget_high_u8(__p1));
  return __ret;
}
# 67919 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vabdl_high_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = vabdl_u32(vget_high_u32(__p0), vget_high_u32(__p1));
  return __ret;
}
# 67936 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vabdl_high_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = vabdl_u16(vget_high_u16(__p0), vget_high_u16(__p1));
  return __ret;
}
# 67953 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vabdl_high_s8(int8x16_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = vabdl_s8(vget_high_s8(__p0), vget_high_s8(__p1));
  return __ret;
}
# 67970 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vabdl_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vabdl_s32(vget_high_s32(__p0), vget_high_s32(__p1));
  return __ret;
}
# 67987 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vabdl_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vabdl_s16(vget_high_s16(__p0), vget_high_s16(__p1));
  return __ret;
}
# 68004 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vaddl_high_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = vmovl_high_u8(__p0) + vmovl_high_u8(__p1);
  return __ret;
}
# 68021 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vaddl_high_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = vmovl_high_u32(__p0) + vmovl_high_u32(__p1);
  return __ret;
}
# 68038 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vaddl_high_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = vmovl_high_u16(__p0) + vmovl_high_u16(__p1);
  return __ret;
}
# 68055 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vaddl_high_s8(int8x16_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = vmovl_high_s8(__p0) + vmovl_high_s8(__p1);
  return __ret;
}
# 68072 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vaddl_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vmovl_high_s32(__p0) + vmovl_high_s32(__p1);
  return __ret;
}
# 68089 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vaddl_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vmovl_high_s16(__p0) + vmovl_high_s16(__p1);
  return __ret;
}
# 68106 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vaddw_high_u8(uint16x8_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 + vmovl_high_u8(__p1);
  return __ret;
}
# 68123 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vaddw_high_u32(uint64x2_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 + vmovl_high_u32(__p1);
  return __ret;
}
# 68140 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vaddw_high_u16(uint32x4_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 + vmovl_high_u16(__p1);
  return __ret;
}
# 68157 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vaddw_high_s8(int16x8_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = __p0 + vmovl_high_s8(__p1);
  return __ret;
}
# 68174 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vaddw_high_s32(int64x2_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = __p0 + vmovl_high_s32(__p1);
  return __ret;
}
# 68191 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vaddw_high_s16(int32x4_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = __p0 + vmovl_high_s16(__p1);
  return __ret;
}
# 68342 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmlal_high_u8(uint16x8_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint16x8_t __ret;
  __ret = vmlal_u8(__p0, vget_high_u8(__p1), vget_high_u8(__p2));
  return __ret;
}
# 68360 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmlal_high_u32(uint64x2_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint64x2_t __ret;
  __ret = vmlal_u32(__p0, vget_high_u32(__p1), vget_high_u32(__p2));
  return __ret;
}
# 68378 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlal_high_u16(uint32x4_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint32x4_t __ret;
  __ret = vmlal_u16(__p0, vget_high_u16(__p1), vget_high_u16(__p2));
  return __ret;
}
# 68396 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmlal_high_s8(int16x8_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int16x8_t __ret;
  __ret = vmlal_s8(__p0, vget_high_s8(__p1), vget_high_s8(__p2));
  return __ret;
}
# 68414 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmlal_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vmlal_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
# 68432 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlal_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vmlal_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
# 68450 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmlal_high_n_u32(uint64x2_t __p0, uint32x4_t __p1, uint32_t __p2) {
  uint64x2_t __ret;
  __ret = vmlal_n_u32(__p0, vget_high_u32(__p1), __p2);
  return __ret;
}
# 68467 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlal_high_n_u16(uint32x4_t __p0, uint16x8_t __p1, uint16_t __p2) {
  uint32x4_t __ret;
  __ret = vmlal_n_u16(__p0, vget_high_u16(__p1), __p2);
  return __ret;
}
# 68484 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmlal_high_n_s32(int64x2_t __p0, int32x4_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vmlal_n_s32(__p0, vget_high_s32(__p1), __p2);
  return __ret;
}
# 68501 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlal_high_n_s16(int32x4_t __p0, int16x8_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vmlal_n_s16(__p0, vget_high_s16(__p1), __p2);
  return __ret;
}
# 68518 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vmlsl_high_u8(uint16x8_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint16x8_t __ret;
  __ret = vmlsl_u8(__p0, vget_high_u8(__p1), vget_high_u8(__p2));
  return __ret;
}
# 68536 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmlsl_high_u32(uint64x2_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint64x2_t __ret;
  __ret = vmlsl_u32(__p0, vget_high_u32(__p1), vget_high_u32(__p2));
  return __ret;
}
# 68554 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlsl_high_u16(uint32x4_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint32x4_t __ret;
  __ret = vmlsl_u16(__p0, vget_high_u16(__p1), vget_high_u16(__p2));
  return __ret;
}
# 68572 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vmlsl_high_s8(int16x8_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int16x8_t __ret;
  __ret = vmlsl_s8(__p0, vget_high_s8(__p1), vget_high_s8(__p2));
  return __ret;
}
# 68590 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmlsl_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vmlsl_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
# 68608 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlsl_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vmlsl_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
# 68626 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vmlsl_high_n_u32(uint64x2_t __p0, uint32x4_t __p1, uint32_t __p2) {
  uint64x2_t __ret;
  __ret = vmlsl_n_u32(__p0, vget_high_u32(__p1), __p2);
  return __ret;
}
# 68643 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vmlsl_high_n_u16(uint32x4_t __p0, uint16x8_t __p1, uint16_t __p2) {
  uint32x4_t __ret;
  __ret = vmlsl_n_u16(__p0, vget_high_u16(__p1), __p2);
  return __ret;
}
# 68660 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vmlsl_high_n_s32(int64x2_t __p0, int32x4_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vmlsl_n_s32(__p0, vget_high_s32(__p1), __p2);
  return __ret;
}
# 68677 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vmlsl_high_n_s16(int32x4_t __p0, int16x8_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vmlsl_n_s16(__p0, vget_high_s16(__p1), __p2);
  return __ret;
}
# 68730 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vabal_u8(uint16x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + vabdl_u8(__p1, __p2);
  return __ret;
}
# 68753 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vabal_u32(uint64x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 + vabdl_u32(__p1, __p2);
  return __ret;
}
# 68776 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vabal_u16(uint32x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + vabdl_u16(__p1, __p2);
  return __ret;
}
# 68799 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vabal_s8(int16x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + vabdl_s8(__p1, __p2);
  return __ret;
}
# 68822 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vabal_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = __p0 + vabdl_s32(__p1, __p2);
  return __ret;
}
# 68845 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vabal_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + vabdl_s16(__p1, __p2);
  return __ret;
}
# 68869 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint16x8_t vabal_high_u8(uint16x8_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint16x8_t __ret;
  __ret = vabal_u8(__p0, vget_high_u8(__p1), vget_high_u8(__p2));
  return __ret;
}
# 68887 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint64x2_t vabal_high_u32(uint64x2_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint64x2_t __ret;
  __ret = vabal_u32(__p0, vget_high_u32(__p1), vget_high_u32(__p2));
  return __ret;
}
# 68905 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) uint32x4_t vabal_high_u16(uint32x4_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint32x4_t __ret;
  __ret = vabal_u16(__p0, vget_high_u16(__p1), vget_high_u16(__p2));
  return __ret;
}
# 68923 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int16x8_t vabal_high_s8(int16x8_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int16x8_t __ret;
  __ret = vabal_s8(__p0, vget_high_s8(__p1), vget_high_s8(__p2));
  return __ret;
}
# 68941 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int64x2_t vabal_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vabal_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
# 68959 "/Library/Developer/CommandLineTools/usr/lib/clang/13.0.0/include/arm_neon.h" 3
static __inline__ __attribute__((__always_inline__, __nodebug__)) int32x4_t vabal_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vabal_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
# 26 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c" 2
# 47 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
static const uint32_t kRingBufferWriteAheadSlack = 542;

static const uint8_t kCodeLengthCodeOrder[(17 + 1)] = {
  1, 2, 3, 4, 0, 5, 17, 6, 16, 7, 8, 9, 10, 11, 12, 13, 14, 15,
};


static const uint8_t kCodeLengthPrefixLength[16] = {
  2, 2, 2, 3, 2, 2, 2, 4, 2, 2, 2, 3, 2, 2, 2, 4,
};

static const uint8_t kCodeLengthPrefixValue[16] = {
  0, 4, 3, 2, 0, 4, 3, 1, 0, 4, 3, 2, 0, 4, 3, 5,
};

int BrotliDecoderSetParameter(
    BrotliDecoderStateInternal* state, BrotliDecoderParameter p, uint32_t value) {
  if (state->state != BROTLI_STATE_UNINITED) return 0;
  switch (p) {
    case BROTLI_DECODER_PARAM_DISABLE_RING_BUFFER_REALLOCATION:
      state->canny_ringbuffer_allocation = !!value ? 0 : 1;
      return 1;

    case BROTLI_DECODER_PARAM_LARGE_WINDOW:
      state->large_window = (!!(!!value) ? 1 : 0);
      return 1;

    default: return 0;
  }
}

BrotliDecoderStateInternal* BrotliDecoderCreateInstance(
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque) {
  BrotliDecoderStateInternal* state = 0;
  if (!alloc_func && !free_func) {
    state = (BrotliDecoderStateInternal*)malloc(sizeof(BrotliDecoderStateInternal));
  } else if (alloc_func && free_func) {
    state = (BrotliDecoderStateInternal*)alloc_func(opaque, sizeof(BrotliDecoderStateInternal));
  }
  if (state == 0) {
    (void)(0);
    return 0;
  }
  if (!BrotliDecoderStateInit(state, alloc_func, free_func, opaque)) {
    (void)(0);
    if (!alloc_func && !free_func) {
      free(state);
    } else if (alloc_func && free_func) {
      free_func(opaque, state);
    }
    return 0;
  }
  return state;
}


void BrotliDecoderDestroyInstance(BrotliDecoderStateInternal* state) {
  if (!state) {
    return;
  } else {
    brotli_free_func free_func = state->free_func;
    void* opaque = state->memory_manager_opaque;
    BrotliDecoderStateCleanup(state);
    free_func(opaque, state);
  }
}


static __attribute__((__noinline__)) BrotliDecoderResult SaveErrorCode(
    BrotliDecoderStateInternal* s, BrotliDecoderErrorCode e, size_t consumed_input) {
  s->error_code = (int)e;
  s->used_input += consumed_input;
  switch (e) {
    case BROTLI_DECODER_SUCCESS:
      return BROTLI_DECODER_RESULT_SUCCESS;

    case BROTLI_DECODER_NEEDS_MORE_INPUT:
      return BROTLI_DECODER_RESULT_NEEDS_MORE_INPUT;

    case BROTLI_DECODER_NEEDS_MORE_OUTPUT:
      return BROTLI_DECODER_RESULT_NEEDS_MORE_OUTPUT;

    default:
      return BROTLI_DECODER_RESULT_ERROR;
  }
}



static BrotliDecoderErrorCode DecodeWindowBits(BrotliDecoderStateInternal* s,
                                               BrotliBitReader* br) {
  uint32_t n;
  int large_window = s->large_window;
  s->large_window = 0;
  BrotliTakeBits(br, 1, &n);
  if (n == 0) {
    s->window_bits = 16;
    return BROTLI_DECODER_SUCCESS;
  }
  BrotliTakeBits(br, 3, &n);
  if (n != 0) {
    s->window_bits = 17 + n;
    return BROTLI_DECODER_SUCCESS;
  }
  BrotliTakeBits(br, 3, &n);
  if (n == 1) {
    if (large_window) {
      BrotliTakeBits(br, 1, &n);
      if (n == 1) {
        return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS);
      }
      s->large_window = 1;
      return BROTLI_DECODER_SUCCESS;
    } else {
      return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS);
    }
  }
  if (n != 0) {
    s->window_bits = 8 + n;
    return BROTLI_DECODER_SUCCESS;
  }
  s->window_bits = 17;
  return BROTLI_DECODER_SUCCESS;
}

static inline __attribute__((__always_inline__)) void memmove16(uint8_t* dst, uint8_t* src) {

  __extension__ ({ uint8x16_t __s1 = __extension__ ({ uint8x16_t __ret; __ret = (uint8x16_t) __builtin_neon_vld1q_v(src, 48); __ret; }); __builtin_neon_vst1q_v(dst, (int8x16_t)__s1, 48); });





}


static __attribute__((__noinline__)) BrotliDecoderErrorCode DecodeVarLenUint8(
    BrotliDecoderStateInternal* s, BrotliBitReader* br, uint32_t* value) {
  uint32_t bits;
  switch (s->substate_decode_uint8) {
    case BROTLI_STATE_DECODE_UINT8_NONE:
      if ((__builtin_expect(!BrotliSafeReadBits(br, 1, &bits), 0))) {
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if (bits == 0) {
        *value = 0;
        return BROTLI_DECODER_SUCCESS;
      }


    case BROTLI_STATE_DECODE_UINT8_SHORT:
      if ((__builtin_expect(!BrotliSafeReadBits(br, 3, &bits), 0))) {
        s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_SHORT;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if (bits == 0) {
        *value = 1;
        s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_NONE;
        return BROTLI_DECODER_SUCCESS;
      }

      *value = bits;


    case BROTLI_STATE_DECODE_UINT8_LONG:
      if ((__builtin_expect(!BrotliSafeReadBits(br, *value, &bits), 0))) {
        s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_LONG;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      *value = (1U << *value) + bits;
      s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_NONE;
      return BROTLI_DECODER_SUCCESS;

    default:
      return
          ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
  }
}


static BrotliDecoderErrorCode __attribute__((__noinline__)) DecodeMetaBlockLength(
    BrotliDecoderStateInternal* s, BrotliBitReader* br) {
  uint32_t bits;
  int i;
  for (;;) {
    switch (s->substate_metablock_header) {
      case BROTLI_STATE_METABLOCK_HEADER_NONE:
        if (!BrotliSafeReadBits(br, 1, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        s->is_last_metablock = bits ? 1 : 0;
        s->meta_block_remaining_len = 0;
        s->is_uncompressed = 0;
        s->is_metadata = 0;
        if (!s->is_last_metablock) {
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NIBBLES;
          break;
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_EMPTY;


      case BROTLI_STATE_METABLOCK_HEADER_EMPTY:
        if (!BrotliSafeReadBits(br, 1, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        if (bits) {
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
          return BROTLI_DECODER_SUCCESS;
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NIBBLES;


      case BROTLI_STATE_METABLOCK_HEADER_NIBBLES:
        if (!BrotliSafeReadBits(br, 2, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        s->size_nibbles = (uint8_t)(bits + 4);
        s->loop_counter = 0;
        if (bits == 3) {
          s->is_metadata = 1;
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_RESERVED;
          break;
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_SIZE;


      case BROTLI_STATE_METABLOCK_HEADER_SIZE:
        i = s->loop_counter;
        for (; i < (int)s->size_nibbles; ++i) {
          if (!BrotliSafeReadBits(br, 4, &bits)) {
            s->loop_counter = i;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          if (i + 1 == (int)s->size_nibbles && s->size_nibbles > 4 &&
              bits == 0) {
            return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_NIBBLE);
          }
          s->meta_block_remaining_len |= (int)(bits << (i * 4));
        }
        s->substate_metablock_header =
            BROTLI_STATE_METABLOCK_HEADER_UNCOMPRESSED;


      case BROTLI_STATE_METABLOCK_HEADER_UNCOMPRESSED:
        if (!s->is_last_metablock) {
          if (!BrotliSafeReadBits(br, 1, &bits)) {
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          s->is_uncompressed = bits ? 1 : 0;
        }
        ++s->meta_block_remaining_len;
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
        return BROTLI_DECODER_SUCCESS;

      case BROTLI_STATE_METABLOCK_HEADER_RESERVED:
        if (!BrotliSafeReadBits(br, 1, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        if (bits != 0) {
          return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_RESERVED);
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_BYTES;


      case BROTLI_STATE_METABLOCK_HEADER_BYTES:
        if (!BrotliSafeReadBits(br, 2, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        if (bits == 0) {
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
          return BROTLI_DECODER_SUCCESS;
        }
        s->size_nibbles = (uint8_t)bits;
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_METADATA;


      case BROTLI_STATE_METABLOCK_HEADER_METADATA:
        i = s->loop_counter;
        for (; i < (int)s->size_nibbles; ++i) {
          if (!BrotliSafeReadBits(br, 8, &bits)) {
            s->loop_counter = i;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          if (i + 1 == (int)s->size_nibbles && s->size_nibbles > 1 &&
              bits == 0) {
            return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_META_NIBBLE);

          }
          s->meta_block_remaining_len |= (int)(bits << (i * 8));
        }
        ++s->meta_block_remaining_len;
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
        return BROTLI_DECODER_SUCCESS;

      default:
        return
            ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
    }
  }
}





static inline __attribute__((__always_inline__)) uint32_t DecodeSymbol(uint32_t bits,
                                           const HuffmanCode* table,
                                           BrotliBitReader* br) {
                                           ;
  table += (bits & 0xFF);
  if ((table->bits) > 8U) {
    uint32_t nbits = (table->bits) - 8U;
    BrotliDropBits(br, 8U);
    table += ((table->value) + ((bits >> 8U) & BitMask(nbits)));


  }
  BrotliDropBits(br, (table->bits));
  return (table->value);
}



static inline __attribute__((__always_inline__)) uint32_t ReadSymbol(const HuffmanCode* table,
                                         BrotliBitReader* br) {
  return DecodeSymbol(BrotliGet16BitsUnmasked(br), table, br);
}



static __attribute__((__noinline__)) int SafeDecodeSymbol(
    const HuffmanCode* table, BrotliBitReader* br, uint32_t* result) {
  uint32_t val;
  uint32_t available_bits = BrotliGetAvailableBits(br);
                                           ;
  if (available_bits == 0) {
    if ((table->bits) == 0) {
      *result = (table->value);
      return 1;
    }
    return 0;
  }
  val = (uint32_t)BrotliGetBitsUnmasked(br);
  table += (val & 0xFF);
  if ((table->bits) <= 8U) {
    if ((table->bits) <= available_bits) {
      BrotliDropBits(br, (table->bits));
      *result = (table->value);
      return 1;
    } else {
      return 0;
    }
  }
  if (available_bits <= 8U) {
    return 0;
  }


  val = (val & BitMask((table->bits))) >> 8U;
  available_bits -= 8U;
  table += ((table->value) + val);
  if (available_bits < (table->bits)) {
    return 0;
  }

  BrotliDropBits(br, 8U + (table->bits));
  *result = (table->value);
  return 1;
}

static inline __attribute__((__always_inline__)) int SafeReadSymbol(
    const HuffmanCode* table, BrotliBitReader* br, uint32_t* result) {
  uint32_t val;
  if ((__builtin_expect(!!(BrotliSafeGetBits(br, 15, &val)), 1))) {
    *result = DecodeSymbol(val, table, br);
    return 1;
  }
  return SafeDecodeSymbol(table, br, result);
}


static inline __attribute__((__always_inline__)) void PreloadSymbol(int safe,
                                        const HuffmanCode* table,
                                        BrotliBitReader* br,
                                        uint32_t* bits,
                                        uint32_t* value) {
  if (safe) {
    return;
  }
                                           ;
  table += (BrotliGetBits(br, 8U));
  *bits = (table->bits);
  *value = (table->value);
}



static inline __attribute__((__always_inline__)) uint32_t ReadPreloadedSymbol(const HuffmanCode* table,
                                                  BrotliBitReader* br,
                                                  uint32_t* bits,
                                                  uint32_t* value) {
  uint32_t result = *value;
  if ((__builtin_expect(*bits > 8U, 0))) {
    uint32_t val = BrotliGet16BitsUnmasked(br);
    const HuffmanCode* ext = table + (val & 0xFF) + *value;
    uint32_t mask = BitMask((*bits - 8U));
                                           ;
    BrotliDropBits(br, 8U);
    ext += ((val >> 8U) & mask);
    BrotliDropBits(br, (ext->bits));
    result = (ext->value);
  } else {
    BrotliDropBits(br, *bits);
  }
  PreloadSymbol(0, table, br, bits, value);
  return result;
}

static inline __attribute__((__always_inline__)) uint32_t Log2Floor(uint32_t x) {
  uint32_t result = 0;
  while (x) {
    x >>= 1;
    ++result;
  }
  return result;
}




static BrotliDecoderErrorCode ReadSimpleHuffmanSymbols(
    uint32_t alphabet_size_max, uint32_t alphabet_size_limit,
    BrotliDecoderStateInternal* s) {

  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  uint32_t max_bits = Log2Floor(alphabet_size_max - 1);
  uint32_t i = h->sub_loop_counter;
  uint32_t num_symbols = h->symbol;
  while (i <= num_symbols) {
    uint32_t v;
    if ((__builtin_expect(!BrotliSafeReadBits(br, max_bits, &v), 0))) {
      h->sub_loop_counter = i;
      h->substate_huffman = BROTLI_STATE_HUFFMAN_SIMPLE_READ;
      return BROTLI_DECODER_NEEDS_MORE_INPUT;
    }
    if (v >= alphabet_size_limit) {
      return
          ((void)(0), BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_ALPHABET);
    }
    h->symbols_lists_array[i] = (uint16_t)v;
                                              ;
    ++i;
  }

  for (i = 0; i < num_symbols; ++i) {
    uint32_t k = i + 1;
    for (; k <= num_symbols; ++k) {
      if (h->symbols_lists_array[i] == h->symbols_lists_array[k]) {
        return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_SAME);
      }
    }
  }

  return BROTLI_DECODER_SUCCESS;
}







static inline __attribute__((__always_inline__)) void ProcessSingleCodeLength(uint32_t code_len,
    uint32_t* symbol, uint32_t* repeat, uint32_t* space,
    uint32_t* prev_code_len, uint16_t* symbol_lists,
    uint16_t* code_length_histo, int* next_symbol) {
  *repeat = 0;
  if (code_len != 0) {
    symbol_lists[next_symbol[code_len]] = (uint16_t)(*symbol);
    next_symbol[code_len] = (int)(*symbol);
    *prev_code_len = code_len;
    *space -= 32768U >> code_len;
    code_length_histo[code_len]++;

                                     ;
  }
  (*symbol)++;
}
# 547 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
static inline __attribute__((__always_inline__)) void ProcessRepeatedCodeLength(uint32_t code_len,
    uint32_t repeat_delta, uint32_t alphabet_size, uint32_t* symbol,
    uint32_t* repeat, uint32_t* space, uint32_t* prev_code_len,
    uint32_t* repeat_code_len, uint16_t* symbol_lists,
    uint16_t* code_length_histo, int* next_symbol) {
  uint32_t old_repeat;
  uint32_t extra_bits = 3;
  uint32_t new_len = 0;
  if (code_len == 16) {
    new_len = *prev_code_len;
    extra_bits = 2;
  }
  if (*repeat_code_len != new_len) {
    *repeat = 0;
    *repeat_code_len = new_len;
  }
  old_repeat = *repeat;
  if (*repeat > 0) {
    *repeat -= 2;
    *repeat <<= extra_bits;
  }
  *repeat += repeat_delta + 3U;
  repeat_delta = *repeat - old_repeat;
  if (*symbol + repeat_delta > alphabet_size) {
    (void)(0);
    *symbol = alphabet_size;
    *space = 0xFFFFF;
    return;
  }

                                                                              ;
  if (*repeat_code_len != 0) {
    unsigned last = *symbol + repeat_delta;
    int next = next_symbol[*repeat_code_len];
    do {
      symbol_lists[next] = (uint16_t)*symbol;
      next = (int)*symbol;
    } while (++(*symbol) != last);
    next_symbol[*repeat_code_len] = next;
    *space -= repeat_delta << (15 - *repeat_code_len);
    code_length_histo[*repeat_code_len] =
        (uint16_t)(code_length_histo[*repeat_code_len] + repeat_delta);
  } else {
    *symbol += repeat_delta;
  }
}


static BrotliDecoderErrorCode ReadSymbolCodeLengths(
    uint32_t alphabet_size, BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  uint32_t symbol = h->symbol;
  uint32_t repeat = h->repeat;
  uint32_t space = h->space;
  uint32_t prev_code_len = h->prev_code_len;
  uint32_t repeat_code_len = h->repeat_code_len;
  uint16_t* symbol_lists = h->symbol_lists;
  uint16_t* code_length_histo = h->code_length_histo;
  int* next_symbol = h->next_symbol;
  if (!BrotliWarmupBitReader(br)) {
    return BROTLI_DECODER_NEEDS_MORE_INPUT;
  }
  while (symbol < alphabet_size && space > 0) {
    const HuffmanCode* p = h->table;
    uint32_t code_len;
                                         ;
    if (!BrotliCheckInputAmount(br, (sizeof(uint64_t) >> 1))) {
      h->symbol = symbol;
      h->repeat = repeat;
      h->prev_code_len = prev_code_len;
      h->repeat_code_len = repeat_code_len;
      h->space = space;
      return BROTLI_DECODER_NEEDS_MORE_INPUT;
    }
    BrotliFillBitWindow16(br);
    p += (BrotliGetBitsUnmasked(br) & BitMask(5));

    BrotliDropBits(br, (p->bits));
    code_len = (p->value);
    if (code_len < 16) {
      ProcessSingleCodeLength(code_len, &symbol, &repeat, &space,
          &prev_code_len, symbol_lists, code_length_histo, next_symbol);
    } else {
      uint32_t extra_bits =
          (code_len == 16) ? 2 : 3;
      uint32_t repeat_delta =
          (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(extra_bits);
      BrotliDropBits(br, extra_bits);
      ProcessRepeatedCodeLength(code_len, repeat_delta, alphabet_size,
          &symbol, &repeat, &space, &prev_code_len, &repeat_code_len,
          symbol_lists, code_length_histo, next_symbol);
    }
  }
  h->space = space;
  return BROTLI_DECODER_SUCCESS;
}

static BrotliDecoderErrorCode SafeReadSymbolCodeLengths(
    uint32_t alphabet_size, BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  int get_byte = 0;
  while (h->symbol < alphabet_size && h->space > 0) {
    const HuffmanCode* p = h->table;
    uint32_t code_len;
    uint32_t available_bits;
    uint32_t bits = 0;
                                         ;
    if (get_byte && !BrotliPullByte(br)) return BROTLI_DECODER_NEEDS_MORE_INPUT;
    get_byte = 0;
    available_bits = BrotliGetAvailableBits(br);
    if (available_bits != 0) {
      bits = (uint32_t)BrotliGetBitsUnmasked(br);
    }
    p += (bits & BitMask(5));

    if ((p->bits) > available_bits) {
      get_byte = 1;
      continue;
    }
    code_len = (p->value);
    if (code_len < 16) {
      BrotliDropBits(br, (p->bits));
      ProcessSingleCodeLength(code_len, &h->symbol, &h->repeat, &h->space,
          &h->prev_code_len, h->symbol_lists, h->code_length_histo,
          h->next_symbol);
    } else {
      uint32_t extra_bits = code_len - 14U;
      uint32_t repeat_delta = (bits >> (p->bits)) &
          BitMask(extra_bits);
      if (available_bits < (p->bits) + extra_bits) {
        get_byte = 1;
        continue;
      }
      BrotliDropBits(br, (p->bits) + extra_bits);
      ProcessRepeatedCodeLength(code_len, repeat_delta, alphabet_size,
          &h->symbol, &h->repeat, &h->space, &h->prev_code_len,
          &h->repeat_code_len, h->symbol_lists, h->code_length_histo,
          h->next_symbol);
    }
  }
  return BROTLI_DECODER_SUCCESS;
}



static BrotliDecoderErrorCode ReadCodeLengthCodeLengths(BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  uint32_t num_codes = h->repeat;
  unsigned space = h->space;
  uint32_t i = h->sub_loop_counter;
  for (; i < (17 + 1); ++i) {
    const uint8_t code_len_idx = kCodeLengthCodeOrder[i];
    uint32_t ix;
    uint32_t v;
    if ((__builtin_expect(!BrotliSafeGetBits(br, 4, &ix), 0))) {
      uint32_t available_bits = BrotliGetAvailableBits(br);
      if (available_bits != 0) {
        ix = BrotliGetBitsUnmasked(br) & 0xF;
      } else {
        ix = 0;
      }
      if (kCodeLengthPrefixLength[ix] > available_bits) {
        h->sub_loop_counter = i;
        h->repeat = num_codes;
        h->space = space;
        h->substate_huffman = BROTLI_STATE_HUFFMAN_COMPLEX;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
    }
    v = kCodeLengthPrefixValue[ix];
    BrotliDropBits(br, kCodeLengthPrefixLength[ix]);
    h->code_length_code_lengths[code_len_idx] = (uint8_t)v;
                                                                     ;
    if (v != 0) {
      space = space - (32U >> v);
      ++num_codes;
      ++h->code_length_histo[v];
      if (space - 1U >= 32U) {

        break;
      }
    }
  }
  if (!(num_codes == 1 || space == 0)) {
    return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_CL_SPACE);
  }
  return BROTLI_DECODER_SUCCESS;
}
# 750 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
static BrotliDecoderErrorCode ReadHuffmanCode(uint32_t alphabet_size_max,
                                              uint32_t alphabet_size_limit,
                                              HuffmanCode* table,
                                              uint32_t* opt_table_size,
                                              BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;

  for (;;) {
    switch (h->substate_huffman) {
      case BROTLI_STATE_HUFFMAN_NONE:
        if (!BrotliSafeReadBits(br, 2, &h->sub_loop_counter)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
                                            ;



        if (h->sub_loop_counter != 1) {
          h->space = 32;
          h->repeat = 0;
          __builtin___memset_chk (&h->code_length_histo[0], 0, sizeof(h->code_length_histo[0]) * (5 + 1), __builtin_object_size (&h->code_length_histo[0], 0));

          __builtin___memset_chk (&h->code_length_code_lengths[0], 0, sizeof(h->code_length_code_lengths), __builtin_object_size (&h->code_length_code_lengths[0], 0));

          h->substate_huffman = BROTLI_STATE_HUFFMAN_COMPLEX;
          continue;
        }


      case BROTLI_STATE_HUFFMAN_SIMPLE_SIZE:

        if (!BrotliSafeReadBits(br, 2, &h->symbol)) {
          h->substate_huffman = BROTLI_STATE_HUFFMAN_SIMPLE_SIZE;
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        h->sub_loop_counter = 0;


      case BROTLI_STATE_HUFFMAN_SIMPLE_READ: {
        BrotliDecoderErrorCode result =
            ReadSimpleHuffmanSymbols(alphabet_size_max, alphabet_size_limit, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }
      }


      case BROTLI_STATE_HUFFMAN_SIMPLE_BUILD: {
        uint32_t table_size;
        if (h->symbol == 3) {
          uint32_t bits;
          if (!BrotliSafeReadBits(br, 1, &bits)) {
            h->substate_huffman = BROTLI_STATE_HUFFMAN_SIMPLE_BUILD;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          h->symbol += bits;
        }
                                  ;
        table_size = BrotliBuildSimpleHuffmanTable(
            table, 8U, h->symbols_lists_array, h->symbol);
        if (opt_table_size) {
          *opt_table_size = table_size;
        }
        h->substate_huffman = BROTLI_STATE_HUFFMAN_NONE;
        return BROTLI_DECODER_SUCCESS;
      }


      case BROTLI_STATE_HUFFMAN_COMPLEX: {
        uint32_t i;
        BrotliDecoderErrorCode result = ReadCodeLengthCodeLengths(s);
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }
        BrotliBuildCodeLengthsHuffmanTable(h->table,
                                           h->code_length_code_lengths,
                                           h->code_length_histo);
        __builtin___memset_chk (&h->code_length_histo[0], 0, sizeof(h->code_length_histo), __builtin_object_size (&h->code_length_histo[0], 0));
        for (i = 0; i <= 15; ++i) {
          h->next_symbol[i] = (int)i - (15 + 1);
          h->symbol_lists[h->next_symbol[i]] = 0xFFFF;
        }

        h->symbol = 0;
        h->prev_code_len = 8;
        h->repeat = 0;
        h->repeat_code_len = 0;
        h->space = 32768;
        h->substate_huffman = BROTLI_STATE_HUFFMAN_LENGTH_SYMBOLS;
      }


      case BROTLI_STATE_HUFFMAN_LENGTH_SYMBOLS: {
        uint32_t table_size;
        BrotliDecoderErrorCode result = ReadSymbolCodeLengths(
            alphabet_size_limit, s);
        if (result == BROTLI_DECODER_NEEDS_MORE_INPUT) {
          result = SafeReadSymbolCodeLengths(alphabet_size_limit, s);
        }
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }

        if (h->space != 0) {
                                                                       ;
          return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_HUFFMAN_SPACE);
        }
        table_size = BrotliBuildHuffmanTable(
            table, 8U, h->symbol_lists, h->code_length_histo);
        if (opt_table_size) {
          *opt_table_size = table_size;
        }
        h->substate_huffman = BROTLI_STATE_HUFFMAN_NONE;
        return BROTLI_DECODER_SUCCESS;
      }

      default:
        return
            ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
    }
  }
}


static inline __attribute__((__always_inline__)) uint32_t ReadBlockLength(const HuffmanCode* table,
                                              BrotliBitReader* br) {
  uint32_t code;
  uint32_t nbits;
  code = ReadSymbol(table, br);
  nbits = _kBrotliPrefixCodeRanges[code].nbits;
  return _kBrotliPrefixCodeRanges[code].offset + BrotliReadBits24(br, nbits);
}



static inline __attribute__((__always_inline__)) int SafeReadBlockLength(
    BrotliDecoderStateInternal* s, uint32_t* result, const HuffmanCode* table,
    BrotliBitReader* br) {
  uint32_t index;
  if (s->substate_read_block_length == BROTLI_STATE_READ_BLOCK_LENGTH_NONE) {
    if (!SafeReadSymbol(table, br, &index)) {
      return 0;
    }
  } else {
    index = s->block_length_index;
  }
  {
    uint32_t bits;
    uint32_t nbits = _kBrotliPrefixCodeRanges[index].nbits;
    uint32_t offset = _kBrotliPrefixCodeRanges[index].offset;
    if (!BrotliSafeReadBits(br, nbits, &bits)) {
      s->block_length_index = index;
      s->substate_read_block_length = BROTLI_STATE_READ_BLOCK_LENGTH_SUFFIX;
      return 0;
    }
    *result = offset + bits;
    s->substate_read_block_length = BROTLI_STATE_READ_BLOCK_LENGTH_NONE;
    return 1;
  }
}
# 926 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
static __attribute__((__noinline__)) void InverseMoveToFrontTransform(
    uint8_t* v, uint32_t v_len, BrotliDecoderStateInternal* state) {

  uint32_t i = 1;
  uint32_t upper_bound = state->mtf_upper_bound;
  uint32_t* mtf = &state->mtf[1];
  uint8_t* mtf_u8 = (uint8_t*)mtf;

  const uint8_t b0123[4] = {0, 1, 2, 3};
  uint32_t pattern;
  __builtin___memcpy_chk (&pattern, &b0123, 4, __builtin_object_size (&pattern, 0));


  mtf[0] = pattern;
  do {
    pattern += 0x04040404;
    mtf[i] = pattern;
    i++;
  } while (i <= upper_bound);


  upper_bound = 0;
  for (i = 0; i < v_len; ++i) {
    int index = v[i];
    uint8_t value = mtf_u8[index];
    upper_bound |= v[i];
    v[i] = value;
    mtf_u8[-1] = value;
    do {
      index--;
      mtf_u8[index + 1] = mtf_u8[index];
    } while (index >= 0);
  }

  state->mtf_upper_bound = upper_bound >> 2;
}


static BrotliDecoderErrorCode HuffmanTreeGroupDecode(
    HuffmanTreeGroup* group, BrotliDecoderStateInternal* s) {
  BrotliMetablockHeaderArena* h = &s->arena.header;
  if (h->substate_tree_group != BROTLI_STATE_TREE_GROUP_LOOP) {
    h->next = group->codes;
    h->htree_index = 0;
    h->substate_tree_group = BROTLI_STATE_TREE_GROUP_LOOP;
  }
  while (h->htree_index < group->num_htrees) {
    uint32_t table_size;
    BrotliDecoderErrorCode result = ReadHuffmanCode(group->alphabet_size_max,
        group->alphabet_size_limit, h->next, &table_size, s);
    if (result != BROTLI_DECODER_SUCCESS) return result;
    group->htrees[h->htree_index] = h->next;
    h->next += table_size;
    ++h->htree_index;
  }
  h->substate_tree_group = BROTLI_STATE_TREE_GROUP_NONE;
  return BROTLI_DECODER_SUCCESS;
}
# 993 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
static BrotliDecoderErrorCode DecodeContextMap(uint32_t context_map_size,
                                               uint32_t* num_htrees,
                                               uint8_t** context_map_arg,
                                               BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliDecoderErrorCode result = BROTLI_DECODER_SUCCESS;
  BrotliMetablockHeaderArena* h = &s->arena.header;

  switch ((int)h->substate_context_map) {
    case BROTLI_STATE_CONTEXT_MAP_NONE:
      result = DecodeVarLenUint8(s, br, num_htrees);
      if (result != BROTLI_DECODER_SUCCESS) {
        return result;
      }
      (*num_htrees)++;
      h->context_index = 0;
                                       ;
                                  ;
      *context_map_arg =
          (uint8_t*)s->alloc_func(s->memory_manager_opaque, (size_t)context_map_size);
      if (*context_map_arg == 0) {
        return ((void)(0), BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MAP);
      }
      if (*num_htrees <= 1) {
        __builtin___memset_chk (*context_map_arg, 0, (size_t)context_map_size, __builtin_object_size (*context_map_arg, 0));
        return BROTLI_DECODER_SUCCESS;
      }
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_READ_PREFIX;


    case BROTLI_STATE_CONTEXT_MAP_READ_PREFIX: {
      uint32_t bits;


      if (!BrotliSafeGetBits(br, 5, &bits)) {
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if ((bits & 1) != 0) {
        h->max_run_length_prefix = (bits >> 1) + 1;
        BrotliDropBits(br, 5);
      } else {
        h->max_run_length_prefix = 0;
        BrotliDropBits(br, 1);
      }
                                               ;
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_HUFFMAN;
    }


    case BROTLI_STATE_CONTEXT_MAP_HUFFMAN: {
      uint32_t alphabet_size = *num_htrees + h->max_run_length_prefix;
      result = ReadHuffmanCode(alphabet_size, alphabet_size,
                               h->context_map_table, ((void*)0), s);
      if (result != BROTLI_DECODER_SUCCESS) return result;
      h->code = 0xFFFF;
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_DECODE;
    }


    case BROTLI_STATE_CONTEXT_MAP_DECODE: {
      uint32_t context_index = h->context_index;
      uint32_t max_run_length_prefix = h->max_run_length_prefix;
      uint8_t* context_map = *context_map_arg;
      uint32_t code = h->code;
      int skip_preamble = (code != 0xFFFF);
      while (context_index < context_map_size || skip_preamble) {
        if (!skip_preamble) {
          if (!SafeReadSymbol(h->context_map_table, br, &code)) {
            h->code = 0xFFFF;
            h->context_index = context_index;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
                               ;

          if (code == 0) {
            context_map[context_index++] = 0;
            continue;
          }
          if (code > max_run_length_prefix) {
            context_map[context_index++] =
                (uint8_t)(code - max_run_length_prefix);
            continue;
          }
        } else {
          skip_preamble = 0;
        }

        {
          uint32_t reps;
          if (!BrotliSafeReadBits(br, code, &reps)) {
            h->code = code;
            h->context_index = context_index;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          reps += 1U << code;
                               ;
          if (context_index + reps > context_map_size) {
            return
                ((void)(0), BROTLI_DECODER_ERROR_FORMAT_CONTEXT_MAP_REPEAT);
          }
          do {
            context_map[context_index++] = 0;
          } while (--reps);
        }
      }
    }


    case BROTLI_STATE_CONTEXT_MAP_TRANSFORM: {
      uint32_t bits;
      if (!BrotliSafeReadBits(br, 1, &bits)) {
        h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_TRANSFORM;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if (bits != 0) {
        InverseMoveToFrontTransform(*context_map_arg, context_map_size, s);
      }
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_NONE;
      return BROTLI_DECODER_SUCCESS;
    }

    default:
      return
          ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
  }
}



static inline __attribute__((__always_inline__)) int DecodeBlockTypeAndLength(
    int safe, BrotliDecoderStateInternal* s, int tree_type) {
  uint32_t max_block_type = s->num_block_types[tree_type];
  const HuffmanCode* type_tree = &s->block_type_trees[
      tree_type * 632];
  const HuffmanCode* len_tree = &s->block_len_trees[
      tree_type * 396];
  BrotliBitReader* br = &s->br;
  uint32_t* ringbuffer = &s->block_type_rb[tree_type * 2];
  uint32_t block_type;
  if (max_block_type <= 1) {
    return 0;
  }


  if (!safe) {
    block_type = ReadSymbol(type_tree, br);
    s->block_length[tree_type] = ReadBlockLength(len_tree, br);
  } else {
    BrotliBitReaderState memento;
    BrotliBitReaderSaveState(br, &memento);
    if (!SafeReadSymbol(type_tree, br, &block_type)) return 0;
    if (!SafeReadBlockLength(s, &s->block_length[tree_type], len_tree, br)) {
      s->substate_read_block_length = BROTLI_STATE_READ_BLOCK_LENGTH_NONE;
      BrotliBitReaderRestoreState(br, &memento);
      return 0;
    }
  }

  if (block_type == 1) {
    block_type = ringbuffer[1] + 1;
  } else if (block_type == 0) {
    block_type = ringbuffer[0];
  } else {
    block_type -= 2;
  }
  if (block_type >= max_block_type) {
    block_type -= max_block_type;
  }
  ringbuffer[0] = ringbuffer[1];
  ringbuffer[1] = block_type;
  return 1;
}

static inline __attribute__((__always_inline__)) void DetectTrivialLiteralBlockTypes(
    BrotliDecoderStateInternal* s) {
  size_t i;
  for (i = 0; i < 8; ++i) s->trivial_literal_contexts[i] = 0;
  for (i = 0; i < s->num_block_types[0]; i++) {
    size_t offset = i << 6;
    size_t error = 0;
    size_t sample = s->context_map[offset];
    size_t j;
    for (j = 0; j < (1u << 6);) {
      {{ error |= s->context_map[offset + j++] ^ sample; }; { error |= s->context_map[offset + j++] ^ sample; }; { error |= s->context_map[offset + j++] ^ sample; }; { error |= s->context_map[offset + j++] ^ sample; };}
    }
    if (error == 0) {
      s->trivial_literal_contexts[i >> 5] |= 1u << (i & 31);
    }
  }
}

static inline __attribute__((__always_inline__)) void PrepareLiteralDecoding(BrotliDecoderStateInternal* s) {
  uint8_t context_mode;
  size_t trivial;
  uint32_t block_type = s->block_type_rb[1];
  uint32_t context_offset = block_type << 6;
  s->context_map_slice = s->context_map + context_offset;
  trivial = s->trivial_literal_contexts[block_type >> 5];
  s->trivial_literal_context = (trivial >> (block_type & 31)) & 1;
  s->literal_htree = s->literal_hgroup.htrees[s->context_map_slice[0]];
  context_mode = s->context_modes[block_type] & 3;
  s->context_lookup = (&_kBrotliContextLookupTable[(context_mode) << 9]);
}



static inline __attribute__((__always_inline__)) int DecodeLiteralBlockSwitchInternal(
    int safe, BrotliDecoderStateInternal* s) {
  if (!DecodeBlockTypeAndLength(safe, s, 0)) {
    return 0;
  }
  PrepareLiteralDecoding(s);
  return 1;
}

static void __attribute__((__noinline__)) DecodeLiteralBlockSwitch(BrotliDecoderStateInternal* s) {
  DecodeLiteralBlockSwitchInternal(0, s);
}

static int __attribute__((__noinline__)) SafeDecodeLiteralBlockSwitch(
    BrotliDecoderStateInternal* s) {
  return DecodeLiteralBlockSwitchInternal(1, s);
}



static inline __attribute__((__always_inline__)) int DecodeCommandBlockSwitchInternal(
    int safe, BrotliDecoderStateInternal* s) {
  if (!DecodeBlockTypeAndLength(safe, s, 1)) {
    return 0;
  }
  s->htree_command = s->insert_copy_hgroup.htrees[s->block_type_rb[3]];
  return 1;
}

static void __attribute__((__noinline__)) DecodeCommandBlockSwitch(BrotliDecoderStateInternal* s) {
  DecodeCommandBlockSwitchInternal(0, s);
}

static int __attribute__((__noinline__)) SafeDecodeCommandBlockSwitch(
    BrotliDecoderStateInternal* s) {
  return DecodeCommandBlockSwitchInternal(1, s);
}



static inline __attribute__((__always_inline__)) int DecodeDistanceBlockSwitchInternal(
    int safe, BrotliDecoderStateInternal* s) {
  if (!DecodeBlockTypeAndLength(safe, s, 2)) {
    return 0;
  }
  s->dist_context_map_slice = s->dist_context_map +
      (s->block_type_rb[5] << 2);
  s->dist_htree_index = s->dist_context_map_slice[s->distance_context];
  return 1;
}

static void __attribute__((__noinline__)) DecodeDistanceBlockSwitch(BrotliDecoderStateInternal* s) {
  DecodeDistanceBlockSwitchInternal(0, s);
}

static int __attribute__((__noinline__)) SafeDecodeDistanceBlockSwitch(
    BrotliDecoderStateInternal* s) {
  return DecodeDistanceBlockSwitchInternal(1, s);
}

static size_t UnwrittenBytes(const BrotliDecoderStateInternal* s, int wrap) {
  size_t pos = wrap && s->pos > s->ringbuffer_size ?
      (size_t)s->ringbuffer_size : (size_t)(s->pos);
  size_t partial_pos_rb = (s->rb_roundtrips * (size_t)s->ringbuffer_size) + pos;
  return partial_pos_rb - s->partial_pos_out;
}




static BrotliDecoderErrorCode __attribute__((__noinline__)) WriteRingBuffer(
    BrotliDecoderStateInternal* s, size_t* available_out, uint8_t** next_out,
    size_t* total_out, int force) {
  uint8_t* start =
      s->ringbuffer + (s->partial_pos_out & (size_t)s->ringbuffer_mask);
  size_t to_write = UnwrittenBytes(s, 1);
  size_t num_written = *available_out;
  if (num_written > to_write) {
    num_written = to_write;
  }
  if (s->meta_block_remaining_len < 0) {
    return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_1);
  }
  if (next_out && !*next_out) {
    *next_out = start;
  } else {
    if (next_out) {
      __builtin___memcpy_chk (*next_out, start, num_written, __builtin_object_size (*next_out, 0));
      *next_out += num_written;
    }
  }
  *available_out -= num_written;
                           ;
                              ;
  s->partial_pos_out += num_written;
  if (total_out) {
    *total_out = s->partial_pos_out;
  }
  if (num_written < to_write) {
    if (s->ringbuffer_size == (1 << s->window_bits) || force) {
      return BROTLI_DECODER_NEEDS_MORE_OUTPUT;
    } else {
      return BROTLI_DECODER_SUCCESS;
    }
  }

  if (s->ringbuffer_size == (1 << s->window_bits) &&
      s->pos >= s->ringbuffer_size) {
    s->pos -= s->ringbuffer_size;
    s->rb_roundtrips++;
    s->should_wrap_ringbuffer = (size_t)s->pos != 0 ? 1 : 0;
  }
  return BROTLI_DECODER_SUCCESS;
}

static void __attribute__((__noinline__)) WrapRingBuffer(BrotliDecoderStateInternal* s) {
  if (s->should_wrap_ringbuffer) {
    __builtin___memcpy_chk (s->ringbuffer, s->ringbuffer_end, (size_t)s->pos, __builtin_object_size (s->ringbuffer, 0));
    s->should_wrap_ringbuffer = 0;
  }
}
# 1328 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
static int __attribute__((__noinline__)) BrotliEnsureRingBuffer(
    BrotliDecoderStateInternal* s) {
  uint8_t* old_ringbuffer = s->ringbuffer;
  if (s->ringbuffer_size == s->new_ringbuffer_size) {
    return 1;
  }

  s->ringbuffer = (uint8_t*)s->alloc_func(s->memory_manager_opaque, (size_t)(s->new_ringbuffer_size) + kRingBufferWriteAheadSlack);

  if (s->ringbuffer == 0) {

    s->ringbuffer = old_ringbuffer;
    return 0;
  }
  s->ringbuffer[s->new_ringbuffer_size - 2] = 0;
  s->ringbuffer[s->new_ringbuffer_size - 1] = 0;

  if (!!old_ringbuffer) {
    __builtin___memcpy_chk (s->ringbuffer, old_ringbuffer, (size_t)s->pos, __builtin_object_size (s->ringbuffer, 0));
    { s->free_func(s->memory_manager_opaque, old_ringbuffer); old_ringbuffer = ((void*)0); };
  }

  s->ringbuffer_size = s->new_ringbuffer_size;
  s->ringbuffer_mask = s->new_ringbuffer_size - 1;
  s->ringbuffer_end = s->ringbuffer + s->ringbuffer_size;

  return 1;
}

static BrotliDecoderErrorCode __attribute__((__noinline__)) CopyUncompressedBlockToOutput(
    size_t* available_out, uint8_t** next_out, size_t* total_out,
    BrotliDecoderStateInternal* s) {

  if (!BrotliEnsureRingBuffer(s)) {
    return ((void)(0), BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_1);
  }


  for (;;) {
    switch (s->substate_uncompressed) {
      case BROTLI_STATE_UNCOMPRESSED_NONE: {
        int nbytes = (int)BrotliGetRemainingBytes(&s->br);
        if (nbytes > s->meta_block_remaining_len) {
          nbytes = s->meta_block_remaining_len;
        }
        if (s->pos + nbytes > s->ringbuffer_size) {
          nbytes = s->ringbuffer_size - s->pos;
        }

        BrotliCopyBytes(&s->ringbuffer[s->pos], &s->br, (size_t)nbytes);
        s->pos += nbytes;
        s->meta_block_remaining_len -= nbytes;
        if (s->pos < 1 << s->window_bits) {
          if (s->meta_block_remaining_len == 0) {
            return BROTLI_DECODER_SUCCESS;
          }
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        s->substate_uncompressed = BROTLI_STATE_UNCOMPRESSED_WRITE;
      }


      case BROTLI_STATE_UNCOMPRESSED_WRITE: {
        BrotliDecoderErrorCode result;
        result = WriteRingBuffer(
            s, available_out, next_out, total_out, 0);
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }
        if (s->ringbuffer_size == 1 << s->window_bits) {
          s->max_distance = s->max_backward_distance;
        }
        s->substate_uncompressed = BROTLI_STATE_UNCOMPRESSED_NONE;
        break;
      }
    }
  }
                  ;
}

static int AttachCompoundDictionary(
    BrotliDecoderStateInternal* state, const uint8_t* data, size_t size) {
  BrotliDecoderCompoundDictionary* addon = state->compound_dictionary;
  if (state->state != BROTLI_STATE_UNINITED) return 0;
  if (!addon) {
    addon = (BrotliDecoderCompoundDictionary*)state->alloc_func(state->memory_manager_opaque, sizeof(BrotliDecoderCompoundDictionary));

    if (!addon) return 0;
    addon->num_chunks = 0;
    addon->total_size = 0;
    addon->br_length = 0;
    addon->br_copied = 0;
    addon->block_bits = -1;
    addon->chunk_offsets[0] = 0;
    state->compound_dictionary = addon;
  }
  if (addon->num_chunks == 15) return 0;
  addon->chunks[addon->num_chunks] = data;
  addon->num_chunks++;
  addon->total_size += (int)size;
  addon->chunk_offsets[addon->num_chunks] = addon->total_size;
  return 1;
}

static void EnsureCoumpoundDictionaryInitialized(BrotliDecoderStateInternal* state) {
  BrotliDecoderCompoundDictionary* addon = state->compound_dictionary;

  int block_bits = 8;
  int cursor = 0;
  int index = 0;
  if (addon->block_bits != -1) return;
  while (((addon->total_size - 1) >> block_bits) != 0) block_bits++;
  block_bits -= 8;
  addon->block_bits = block_bits;
  while (cursor < addon->total_size) {
    while (addon->chunk_offsets[index + 1] < cursor) index++;
    addon->block_map[cursor >> block_bits] = (uint8_t)index;
    cursor += 1 << block_bits;
  }
}

static int InitializeCompoundDictionaryCopy(BrotliDecoderStateInternal* s,
    int address, int length) {
  BrotliDecoderCompoundDictionary* addon = s->compound_dictionary;
  int index;
  EnsureCoumpoundDictionaryInitialized(s);
  index = addon->block_map[address >> addon->block_bits];
  while (address >= addon->chunk_offsets[index + 1]) index++;
  if (addon->total_size < address + length) return 0;

  s->dist_rb[s->dist_rb_idx & 3] = s->distance_code;
  ++s->dist_rb_idx;
  s->meta_block_remaining_len -= length;
  addon->br_index = index;
  addon->br_offset = address - addon->chunk_offsets[index];
  addon->br_length = length;
  addon->br_copied = 0;
  return 1;
}

static int GetCompoundDictionarySize(BrotliDecoderStateInternal* s) {
  return s->compound_dictionary ? s->compound_dictionary->total_size : 0;
}

static int CopyFromCompoundDictionary(BrotliDecoderStateInternal* s, int pos) {
  BrotliDecoderCompoundDictionary* addon = s->compound_dictionary;
  int orig_pos = pos;
  while (addon->br_length != addon->br_copied) {
    uint8_t* copy_dst = &s->ringbuffer[pos];
    const uint8_t* copy_src =
        addon->chunks[addon->br_index] + addon->br_offset;
    int space = s->ringbuffer_size - pos;
    int rem_chunk_length = (addon->chunk_offsets[addon->br_index + 1] -
        addon->chunk_offsets[addon->br_index]) - addon->br_offset;
    int length = addon->br_length - addon->br_copied;
    if (length > rem_chunk_length) length = rem_chunk_length;
    if (length > space) length = space;
    __builtin___memcpy_chk (copy_dst, copy_src, (size_t)length, __builtin_object_size (copy_dst, 0));
    pos += length;
    addon->br_offset += length;
    addon->br_copied += length;
    if (length == rem_chunk_length) {
      addon->br_index++;
      addon->br_offset = 0;
    }
    if (pos == s->ringbuffer_size) break;
  }
  return pos - orig_pos;
}

int BrotliDecoderAttachDictionary(
    BrotliDecoderStateInternal* state, BrotliSharedDictionaryType type,
    size_t data_size, const uint8_t data[]) {
  uint32_t i;
  uint32_t num_prefix_before = state->dictionary->num_prefix;
  if (state->state != BROTLI_STATE_UNINITED) return 0;
  if (!BrotliSharedDictionaryAttach(state->dictionary, type, data_size, data)) {
    return 0;
  }
  for (i = num_prefix_before; i < state->dictionary->num_prefix; i++) {
    if (!AttachCompoundDictionary(
        state, state->dictionary->prefix[i],
        state->dictionary->prefix_size[i])) {
      return 0;
    }
  }
  return 1;
}







static void __attribute__((__noinline__)) BrotliCalculateRingBufferSize(
    BrotliDecoderStateInternal* s) {
  int window_size = 1 << s->window_bits;
  int new_ringbuffer_size = window_size;


  int min_size = s->ringbuffer_size ? s->ringbuffer_size : 1024;
  int output_size;


  if (s->ringbuffer_size == window_size) {
    return;
  }


  if (s->is_metadata) {
    return;
  }

  if (!s->ringbuffer) {
    output_size = 0;
  } else {
    output_size = s->pos;
  }
  output_size += s->meta_block_remaining_len;
  min_size = min_size < output_size ? output_size : min_size;

  if (!!s->canny_ringbuffer_allocation) {



    while ((new_ringbuffer_size >> 1) >= min_size) {
      new_ringbuffer_size >>= 1;
    }
  }

  s->new_ringbuffer_size = new_ringbuffer_size;
}


static BrotliDecoderErrorCode ReadContextModes(BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  int i = s->loop_counter;

  while (i < (int)s->num_block_types[0]) {
    uint32_t bits;
    if (!BrotliSafeReadBits(br, 2, &bits)) {
      s->loop_counter = i;
      return BROTLI_DECODER_NEEDS_MORE_INPUT;
    }
    s->context_modes[i] = (uint8_t)bits;
                                               ;
    i++;
  }
  return BROTLI_DECODER_SUCCESS;
}

static inline __attribute__((__always_inline__)) void TakeDistanceFromRingBuffer(BrotliDecoderStateInternal* s) {
  int offset = s->distance_code - 3;
  if (s->distance_code <= 3) {

    s->distance_context = 1 >> s->distance_code;
    s->distance_code = s->dist_rb[(s->dist_rb_idx - offset) & 3];
    s->dist_rb_idx -= s->distance_context;
  } else {
    int index_delta = 3;
    int delta;
    int base = s->distance_code - 10;
    if (s->distance_code < 10) {
      base = s->distance_code - 4;
    } else {
      index_delta = 2;
    }

    delta = ((0x605142 >> (4 * base)) & 0xF) - 3;
    s->distance_code = s->dist_rb[(s->dist_rb_idx + index_delta) & 0x3] + delta;
    if (s->distance_code <= 0) {


      s->distance_code = 0x7FFFFFFF;
    }
  }
}

static inline __attribute__((__always_inline__)) int SafeReadBits(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  if (n_bits != 0) {
    return BrotliSafeReadBits(br, n_bits, val);
  } else {
    *val = 0;
    return 1;
  }
}

static inline __attribute__((__always_inline__)) int SafeReadBits32(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  if (n_bits != 0) {
    return BrotliSafeReadBits32(br, n_bits, val);
  } else {
    *val = 0;
    return 1;
  }
}
# 1694 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
static void CalculateDistanceLut(BrotliDecoderStateInternal* s) {
  BrotliMetablockBodyArena* b = &s->arena.body;
  uint32_t npostfix = s->distance_postfix_bits;
  uint32_t ndirect = s->num_direct_distance_codes;
  uint32_t alphabet_size_limit = s->distance_hgroup.alphabet_size_limit;
  uint32_t postfix = 1u << npostfix;
  uint32_t j;
  uint32_t bits = 1;
  uint32_t half = 0;


  uint32_t i = 16;


  for (j = 0; j < ndirect; ++j) {
    b->dist_extra_bits[i] = 0;
    b->dist_offset[i] = j + 1;
    ++i;
  }


  while (i < alphabet_size_limit) {
    uint32_t base = ndirect + ((((2 + half) << bits) - 4) << npostfix) + 1;

    for (j = 0; j < postfix; ++j) {
      b->dist_extra_bits[i] = (uint8_t)bits;
      b->dist_offset[i] = base + j;
      ++i;
    }
    bits = bits + half;
    half = half ^ 1;
  }
}


static inline __attribute__((__always_inline__)) int ReadDistanceInternal(
    int safe, BrotliDecoderStateInternal* s, BrotliBitReader* br) {
  BrotliMetablockBodyArena* b = &s->arena.body;
  uint32_t code;
  uint32_t bits;
  BrotliBitReaderState memento;
  HuffmanCode* distance_tree = s->distance_hgroup.htrees[s->dist_htree_index];
  if (!safe) {
    code = ReadSymbol(distance_tree, br);
  } else {
    BrotliBitReaderSaveState(br, &memento);
    if (!SafeReadSymbol(distance_tree, br, &code)) {
      return 0;
    }
  }
  --s->block_length[2];


  s->distance_context = 0;
  if ((code & ~0xFu) == 0) {
    s->distance_code = (int)code;
    TakeDistanceFromRingBuffer(s);
    return 1;
  }
  if (!safe) {
    bits = BrotliReadBits32(br, b->dist_extra_bits[code]);
  } else {
    if (!SafeReadBits32(br, b->dist_extra_bits[code], &bits)) {
      ++s->block_length[2];
      BrotliBitReaderRestoreState(br, &memento);
      return 0;
    }
  }
  s->distance_code =
      (int)(b->dist_offset[code] + (bits << s->distance_postfix_bits));
  return 1;
}

static inline __attribute__((__always_inline__)) void ReadDistance(
    BrotliDecoderStateInternal* s, BrotliBitReader* br) {
  ReadDistanceInternal(0, s, br);
}

static inline __attribute__((__always_inline__)) int SafeReadDistance(
    BrotliDecoderStateInternal* s, BrotliBitReader* br) {
  return ReadDistanceInternal(1, s, br);
}

static inline __attribute__((__always_inline__)) int ReadCommandInternal(
    int safe, BrotliDecoderStateInternal* s, BrotliBitReader* br, int* insert_length) {
  uint32_t cmd_code;
  uint32_t insert_len_extra = 0;
  uint32_t copy_length;
  CmdLutElement v;
  BrotliBitReaderState memento;
  if (!safe) {
    cmd_code = ReadSymbol(s->htree_command, br);
  } else {
    BrotliBitReaderSaveState(br, &memento);
    if (!SafeReadSymbol(s->htree_command, br, &cmd_code)) {
      return 0;
    }
  }
  v = kCmdLut[cmd_code];
  s->distance_code = v.distance_code;
  s->distance_context = v.context;
  s->dist_htree_index = s->dist_context_map_slice[s->distance_context];
  *insert_length = v.insert_len_offset;
  if (!safe) {
    if ((__builtin_expect(v.insert_len_extra_bits != 0, 0))) {
      insert_len_extra = BrotliReadBits24(br, v.insert_len_extra_bits);
    }
    copy_length = BrotliReadBits24(br, v.copy_len_extra_bits);
  } else {
    if (!SafeReadBits(br, v.insert_len_extra_bits, &insert_len_extra) ||
        !SafeReadBits(br, v.copy_len_extra_bits, &copy_length)) {
      BrotliBitReaderRestoreState(br, &memento);
      return 0;
    }
  }
  s->copy_length = (int)copy_length + v.copy_len_offset;
  --s->block_length[1];
  *insert_length += (int)insert_len_extra;
  return 1;
}

static inline __attribute__((__always_inline__)) void ReadCommand(
    BrotliDecoderStateInternal* s, BrotliBitReader* br, int* insert_length) {
  ReadCommandInternal(0, s, br, insert_length);
}

static inline __attribute__((__always_inline__)) int SafeReadCommand(
    BrotliDecoderStateInternal* s, BrotliBitReader* br, int* insert_length) {
  return ReadCommandInternal(1, s, br, insert_length);
}

static inline __attribute__((__always_inline__)) int CheckInputAmount(
    int safe, BrotliBitReader* const br, size_t num) {
  if (safe) {
    return 1;
  }
  return BrotliCheckInputAmount(br, num);
}
# 1845 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
static inline __attribute__((__always_inline__)) BrotliDecoderErrorCode ProcessCommandsInternal(
    int safe, BrotliDecoderStateInternal* s) {
  int pos = s->pos;
  int i = s->loop_counter;
  BrotliDecoderErrorCode result = BROTLI_DECODER_SUCCESS;
  BrotliBitReader* br = &s->br;
  int compound_dictionary_size = GetCompoundDictionarySize(s);

  if (!CheckInputAmount(safe, br, 28)) {
    result = BROTLI_DECODER_NEEDS_MORE_INPUT;
    goto saveStateAndReturn;
  }
  if (!safe) {
    (void)(BrotliWarmupBitReader(br));
  }


  if (s->state == BROTLI_STATE_COMMAND_BEGIN) {
    goto CommandBegin;
  } else if (s->state == BROTLI_STATE_COMMAND_INNER) {
    goto CommandInner;
  } else if (s->state == BROTLI_STATE_COMMAND_POST_DECODE_LITERALS) {
    goto CommandPostDecodeLiterals;
  } else if (s->state == BROTLI_STATE_COMMAND_POST_WRAP_COPY) {
    goto CommandPostWrapCopy;
  } else {
    return ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
  }

CommandBegin:
  if (safe) {
    s->state = BROTLI_STATE_COMMAND_BEGIN;
  }
  if (!CheckInputAmount(safe, br, 28)) {
    s->state = BROTLI_STATE_COMMAND_BEGIN;
    result = BROTLI_DECODER_NEEDS_MORE_INPUT;
    goto saveStateAndReturn;
  }
  if ((__builtin_expect(s->block_length[1] == 0, 0))) {
    { if (safe) { if (!SafeDecodeCommandBlockSwitch(s)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { DecodeCommandBlockSwitch(s); } };
    goto CommandBegin;
  }

  { if (safe) { if (!SafeReadCommand(s, br, &i)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { ReadCommand(s, br, &i); } };

                                      ;
  if (i == 0) {
    goto CommandPostDecodeLiterals;
  }
  s->meta_block_remaining_len -= i;

CommandInner:
  if (safe) {
    s->state = BROTLI_STATE_COMMAND_INNER;
  }

  if (s->trivial_literal_context) {
    uint32_t bits;
    uint32_t value;
    PreloadSymbol(safe, s->literal_htree, br, &bits, &value);
    do {
      if (!CheckInputAmount(safe, br, 28)) {
        s->state = BROTLI_STATE_COMMAND_INNER;
        result = BROTLI_DECODER_NEEDS_MORE_INPUT;
        goto saveStateAndReturn;
      }
      if ((__builtin_expect(s->block_length[0] == 0, 0))) {
        { if (safe) { if (!SafeDecodeLiteralBlockSwitch(s)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { DecodeLiteralBlockSwitch(s); } };
        PreloadSymbol(safe, s->literal_htree, br, &bits, &value);
        if (!s->trivial_literal_context) goto CommandInner;
      }
      if (!safe) {
        s->ringbuffer[pos] =
            (uint8_t)ReadPreloadedSymbol(s->literal_htree, br, &bits, &value);
      } else {
        uint32_t literal;
        if (!SafeReadSymbol(s->literal_htree, br, &literal)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          goto saveStateAndReturn;
        }
        s->ringbuffer[pos] = (uint8_t)literal;
      }
      --s->block_length[0];
                                                ;
      ++pos;
      if ((__builtin_expect(pos == s->ringbuffer_size, 0))) {
        s->state = BROTLI_STATE_COMMAND_INNER_WRITE;
        --i;
        goto saveStateAndReturn;
      }
    } while (--i != 0);
  } else {
    uint8_t p1 = s->ringbuffer[(pos - 1) & s->ringbuffer_mask];
    uint8_t p2 = s->ringbuffer[(pos - 2) & s->ringbuffer_mask];
    do {
      const HuffmanCode* hc;
      uint8_t context;
      if (!CheckInputAmount(safe, br, 28)) {
        s->state = BROTLI_STATE_COMMAND_INNER;
        result = BROTLI_DECODER_NEEDS_MORE_INPUT;
        goto saveStateAndReturn;
      }
      if ((__builtin_expect(s->block_length[0] == 0, 0))) {
        { if (safe) { if (!SafeDecodeLiteralBlockSwitch(s)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { DecodeLiteralBlockSwitch(s); } };
        if (s->trivial_literal_context) goto CommandInner;
      }
      context = ((s->context_lookup)[p1] | ((s->context_lookup) + 256)[p2]);
                              ;
      hc = s->literal_hgroup.htrees[s->context_map_slice[context]];
      p2 = p1;
      if (!safe) {
        p1 = (uint8_t)ReadSymbol(hc, br);
      } else {
        uint32_t literal;
        if (!SafeReadSymbol(hc, br, &literal)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          goto saveStateAndReturn;
        }
        p1 = (uint8_t)literal;
      }
      s->ringbuffer[pos] = p1;
      --s->block_length[0];
                                                    ;
                                                                     ;
      ++pos;
      if ((__builtin_expect(pos == s->ringbuffer_size, 0))) {
        s->state = BROTLI_STATE_COMMAND_INNER_WRITE;
        --i;
        goto saveStateAndReturn;
      }
    } while (--i != 0);
  }
                                              ;
  if ((__builtin_expect(s->meta_block_remaining_len <= 0, 0))) {
    s->state = BROTLI_STATE_METABLOCK_DONE;
    goto saveStateAndReturn;
  }

CommandPostDecodeLiterals:
  if (safe) {
    s->state = BROTLI_STATE_COMMAND_POST_DECODE_LITERALS;
  }
  if (s->distance_code >= 0) {

    s->distance_context = s->distance_code ? 0 : 1;
    --s->dist_rb_idx;
    s->distance_code = s->dist_rb[s->dist_rb_idx & 3];
  } else {

    if ((__builtin_expect(s->block_length[2] == 0, 0))) {
      { if (safe) { if (!SafeDecodeDistanceBlockSwitch(s)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { DecodeDistanceBlockSwitch(s); } };
    }
    { if (safe) { if (!SafeReadDistance(s, br)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { ReadDistance(s, br); } };
  }

                                     ;
  if (s->max_distance != s->max_backward_distance) {
    s->max_distance =
        (pos < s->max_backward_distance) ? pos : s->max_backward_distance;
  }
  i = s->copy_length;


  if (s->distance_code > s->max_distance) {



    if (s->distance_code > 0x7FFFFFFC) {


                                                                 ;
      return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_DISTANCE);
    }
    if (s->distance_code - s->max_distance - 1 < compound_dictionary_size) {
      int address = compound_dictionary_size -
          (s->distance_code - s->max_distance);
      if (!InitializeCompoundDictionaryCopy(s, address, i)) {
        return ((void)(0), BROTLI_DECODER_ERROR_COMPOUND_DICTIONARY);
      }
      pos += CopyFromCompoundDictionary(s, pos);
      if (pos >= s->ringbuffer_size) {
        s->state = BROTLI_STATE_COMMAND_POST_WRITE_1;
        goto saveStateAndReturn;
      }
    } else if (i >= 4 &&
               i <= 31) {
      uint8_t p1 = s->ringbuffer[(pos - 1) & s->ringbuffer_mask];
      uint8_t p2 = s->ringbuffer[(pos - 2) & s->ringbuffer_mask];
      uint8_t dict_id = s->dictionary->context_based ?
          s->dictionary->context_map[((s->context_lookup)[p1] | ((s->context_lookup) + 256)[p2])]
          : 0;
      const BrotliDictionary* words = s->dictionary->words[dict_id];
      const BrotliTransforms* transforms = s->dictionary->transforms[dict_id];
      int offset = (int)words->offsets_by_length[i];
      uint32_t shift = words->size_bits_by_length[i];
      int address =
          s->distance_code - s->max_distance - 1 - compound_dictionary_size;
      int mask = (int)BitMask(shift);
      int word_idx = address & mask;
      int transform_idx = address >> shift;

      s->dist_rb_idx += s->distance_context;
      offset += word_idx * i;


      if ((transform_idx >= (int)transforms->num_transforms ||
          words->size_bits_by_length[i] == 0) &&
          s->dictionary->num_dictionaries > 1) {
        uint8_t dict_id2;
        int dist_remaining = address -
            (int)(((1u << shift) & ~1u)) * (int)transforms->num_transforms;
        for (dict_id2 = 0; dict_id2 < s->dictionary->num_dictionaries;
            dict_id2++) {
          const BrotliDictionary* words2 = s->dictionary->words[dict_id2];
          if (dict_id2 != dict_id && words2->size_bits_by_length[i] != 0) {
            const BrotliTransforms* transforms2 =
                s->dictionary->transforms[dict_id2];
            uint32_t shift2 = words2->size_bits_by_length[i];
            int num = (int)((1u << shift2) & ~1u) *
                (int)transforms2->num_transforms;
            if (dist_remaining < num) {
              dict_id = dict_id2;
              words = words2;
              transforms = transforms2;
              address = dist_remaining;
              shift = shift2;
              mask = (int)BitMask(shift);
              word_idx = address & mask;
              transform_idx = address >> shift;
              offset = (int)words->offsets_by_length[i] + word_idx * i;
              break;
            }
            dist_remaining -= num;
          }
        }
      }
      if ((__builtin_expect(words->size_bits_by_length[i] == 0, 0))) {


                                                                   ;
        return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_DICTIONARY);
      }
      if ((__builtin_expect(!words->data, 0))) {
        return ((void)(0), BROTLI_DECODER_ERROR_DICTIONARY_NOT_SET);
      }
      if (transform_idx < (int)transforms->num_transforms) {
        const uint8_t* word = &words->data[offset];
        int len = i;
        if (transform_idx == transforms->cutOffTransforms[0]) {
          __builtin___memcpy_chk (&s->ringbuffer[pos], word, (size_t)len, __builtin_object_size (&s->ringbuffer[pos], 0));

                                 ;
        } else {
          len = BrotliTransformDictionaryWord(&s->ringbuffer[pos], word, len,
              transforms, transform_idx);


                                                                        ;
          if (len == 0 && s->distance_code <= 120) {
                                                                              ;
            return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_TRANSFORM);
          }
        }
        pos += len;
        s->meta_block_remaining_len -= len;
        if (pos >= s->ringbuffer_size) {
          s->state = BROTLI_STATE_COMMAND_POST_WRITE_1;
          goto saveStateAndReturn;
        }
      } else {


                                                                   ;
        return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_TRANSFORM);
      }
    } else {


                                                                 ;
      return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_DICTIONARY);
    }
  } else {
    int src_start = (pos - s->distance_code) & s->ringbuffer_mask;
    uint8_t* copy_dst = &s->ringbuffer[pos];
    uint8_t* copy_src = &s->ringbuffer[src_start];
    int dst_end = pos + i;
    int src_end = src_start + i;

    s->dist_rb[s->dist_rb_idx & 3] = s->distance_code;
    ++s->dist_rb_idx;
    s->meta_block_remaining_len -= i;



    memmove16(copy_dst, copy_src);
    if (src_end > pos && dst_end > src_start) {

      goto CommandPostWrapCopy;
    }
    if (dst_end >= s->ringbuffer_size || src_end >= s->ringbuffer_size) {

      goto CommandPostWrapCopy;
    }
    pos += i;
    if (i > 16) {
      if (i > 32) {
        __builtin___memcpy_chk (copy_dst + 16, copy_src + 16, (size_t)(i - 16), __builtin_object_size (copy_dst + 16, 0));
      } else {


        memmove16(copy_dst + 16, copy_src + 16);
      }
    }
  }
                                              ;
  if (s->meta_block_remaining_len <= 0) {

    s->state = BROTLI_STATE_METABLOCK_DONE;
    goto saveStateAndReturn;
  } else {
    goto CommandBegin;
  }
CommandPostWrapCopy:
  {
    int wrap_guard = s->ringbuffer_size - pos;
    while (--i >= 0) {
      s->ringbuffer[pos] =
          s->ringbuffer[(pos - s->distance_code) & s->ringbuffer_mask];
      ++pos;
      if ((__builtin_expect(--wrap_guard == 0, 0))) {
        s->state = BROTLI_STATE_COMMAND_POST_WRITE_2;
        goto saveStateAndReturn;
      }
    }
  }
  if (s->meta_block_remaining_len <= 0) {

    s->state = BROTLI_STATE_METABLOCK_DONE;
    goto saveStateAndReturn;
  } else {
    goto CommandBegin;
  }

saveStateAndReturn:
  s->pos = pos;
  s->loop_counter = i;
  return result;
}



static __attribute__((__noinline__)) BrotliDecoderErrorCode ProcessCommands(
    BrotliDecoderStateInternal* s) {
  return ProcessCommandsInternal(0, s);
}

static __attribute__((__noinline__)) BrotliDecoderErrorCode SafeProcessCommands(
    BrotliDecoderStateInternal* s) {
  return ProcessCommandsInternal(1, s);
}

BrotliDecoderResult BrotliDecoderDecompress(
    size_t encoded_size,
    const uint8_t encoded_buffer[],
    size_t* decoded_size,
    uint8_t decoded_buffer[]) {
  BrotliDecoderStateInternal s;
  BrotliDecoderResult result;
  size_t total_out = 0;
  size_t available_in = encoded_size;
  const uint8_t* next_in = encoded_buffer;
  size_t available_out = *decoded_size;
  uint8_t* next_out = decoded_buffer;
  if (!BrotliDecoderStateInit(&s, 0, 0, 0)) {
    return BROTLI_DECODER_RESULT_ERROR;
  }
  result = BrotliDecoderDecompressStream(
      &s, &available_in, &next_in, &available_out, &next_out, &total_out);
  *decoded_size = total_out;
  BrotliDecoderStateCleanup(&s);
  if (result != BROTLI_DECODER_RESULT_SUCCESS) {
    result = BROTLI_DECODER_RESULT_ERROR;
  }
  return result;
}
# 2242 "/Users/tamofplease/Workspace/research/c_macro_variable_analysis/out/cloned_projects/brotli/c/dec/decode.c"
BrotliDecoderResult BrotliDecoderDecompressStream(
    BrotliDecoderStateInternal* s, size_t* available_in, const uint8_t** next_in,
    size_t* available_out, uint8_t** next_out, size_t* total_out) {
  BrotliDecoderErrorCode result = BROTLI_DECODER_SUCCESS;
  BrotliBitReader* br = &s->br;
  size_t input_size = *available_in;



  if (total_out) {
    *total_out = s->partial_pos_out;
  }

  if ((int)s->error_code < 0) {
    return BROTLI_DECODER_RESULT_ERROR;
  }
  if (*available_out && (!next_out || !*next_out)) {
    return SaveErrorCode(s, (((void)(0), BROTLI_DECODER_ERROR_INVALID_ARGUMENTS)), input_size - *available_in);

  }
  if (!*available_out) next_out = 0;
  if (s->buffer_length == 0) {
    br->avail_in = *available_in;
    br->next_in = *next_in;
  } else {



    result = BROTLI_DECODER_NEEDS_MORE_INPUT;
    br->next_in = &s->buffer.u8[0];
  }

  for (;;) {
    if (result != BROTLI_DECODER_SUCCESS) {

      if (result == BROTLI_DECODER_NEEDS_MORE_INPUT) {
        if (s->ringbuffer != 0) {
          BrotliDecoderErrorCode intermediate_result = WriteRingBuffer(s,
              available_out, next_out, total_out, 1);

          if ((int)intermediate_result < 0) {
            result = intermediate_result;
            break;
          }
        }
        if (s->buffer_length != 0) {
          if (br->avail_in == 0) {



            s->buffer_length = 0;

            result = BROTLI_DECODER_SUCCESS;
            br->avail_in = *available_in;
            br->next_in = *next_in;
            continue;
          } else if (*available_in != 0) {


            result = BROTLI_DECODER_SUCCESS;
            s->buffer.u8[s->buffer_length] = **next_in;
            s->buffer_length++;
            br->avail_in = s->buffer_length;
            (*next_in)++;
            (*available_in)--;

            continue;
          }

          break;
        } else {

          *next_in = br->next_in;
          *available_in = br->avail_in;
          while (*available_in) {
            s->buffer.u8[s->buffer_length] = **next_in;
            s->buffer_length++;
            (*next_in)++;
            (*available_in)--;
          }
          break;
        }

      }



      if (s->buffer_length != 0) {


        s->buffer_length = 0;
      } else {



        BrotliBitReaderUnload(br);
        *available_in = br->avail_in;
        *next_in = br->next_in;
      }
      break;
    }
    switch (s->state) {
      case BROTLI_STATE_UNINITED:

        if (!BrotliWarmupBitReader(br)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }

        result = DecodeWindowBits(s, br);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        if (s->large_window) {
          s->state = BROTLI_STATE_LARGE_WINDOW_BITS;
          break;
        }
        s->state = BROTLI_STATE_INITIALIZE;
        break;

      case BROTLI_STATE_LARGE_WINDOW_BITS:
        if (!BrotliSafeReadBits(br, 6, &s->window_bits)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }
        if (s->window_bits < 10 ||
            s->window_bits > 30) {
          result = ((void)(0), BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS);
          break;
        }
        s->state = BROTLI_STATE_INITIALIZE;


      case BROTLI_STATE_INITIALIZE:
                                       ;

        s->max_backward_distance = (1 << s->window_bits) - 16;


        s->block_type_trees = (HuffmanCode*)s->alloc_func(s->memory_manager_opaque, sizeof(HuffmanCode) * 3 * (632 + 396));


        if (s->block_type_trees == 0) {
          result = ((void)(0), BROTLI_DECODER_ERROR_ALLOC_BLOCK_TYPE_TREES);
          break;
        }
        s->block_len_trees =
            s->block_type_trees + 3 * 632;

        s->state = BROTLI_STATE_METABLOCK_BEGIN;


      case BROTLI_STATE_METABLOCK_BEGIN:
        BrotliDecoderStateMetablockBegin(s);
                               ;
        s->state = BROTLI_STATE_METABLOCK_HEADER;


      case BROTLI_STATE_METABLOCK_HEADER:
        result = DecodeMetaBlockLength(s, br);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
                                             ;
                                                    ;
                                       ;
                                           ;
        if (s->is_metadata || s->is_uncompressed) {
          if (!BrotliJumpToByteBoundary(br)) {
            result = ((void)(0), BROTLI_DECODER_ERROR_FORMAT_PADDING_1);
            break;
          }
        }
        if (s->is_metadata) {
          s->state = BROTLI_STATE_METADATA;
          break;
        }
        if (s->meta_block_remaining_len == 0) {
          s->state = BROTLI_STATE_METABLOCK_DONE;
          break;
        }
        BrotliCalculateRingBufferSize(s);
        if (s->is_uncompressed) {
          s->state = BROTLI_STATE_UNCOMPRESSED;
          break;
        }
        s->state = BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_HEADER;


      case BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_HEADER: {
        BrotliMetablockHeaderArena* h = &s->arena.header;
        s->loop_counter = 0;

        h->sub_loop_counter = 0;

        h->symbol_lists =
            &h->symbols_lists_array[15 + 1];
        h->substate_huffman = BROTLI_STATE_HUFFMAN_NONE;
        h->substate_tree_group = BROTLI_STATE_TREE_GROUP_NONE;
        h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_NONE;
        s->state = BROTLI_STATE_HUFFMAN_CODE_0;
      }


      case BROTLI_STATE_HUFFMAN_CODE_0:
        if (s->loop_counter >= 3) {
          s->state = BROTLI_STATE_METABLOCK_HEADER_2;
          break;
        }

        result = DecodeVarLenUint8(s, br, &s->num_block_types[s->loop_counter]);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        s->num_block_types[s->loop_counter]++;
                                                            ;
        if (s->num_block_types[s->loop_counter] < 2) {
          s->loop_counter++;
          break;
        }
        s->state = BROTLI_STATE_HUFFMAN_CODE_1;


      case BROTLI_STATE_HUFFMAN_CODE_1: {
        uint32_t alphabet_size = s->num_block_types[s->loop_counter] + 2;
        int tree_offset = s->loop_counter * 632;
        result = ReadHuffmanCode(alphabet_size, alphabet_size,
            &s->block_type_trees[tree_offset], ((void*)0), s);
        if (result != BROTLI_DECODER_SUCCESS) break;
        s->state = BROTLI_STATE_HUFFMAN_CODE_2;
      }


      case BROTLI_STATE_HUFFMAN_CODE_2: {
        uint32_t alphabet_size = 26;
        int tree_offset = s->loop_counter * 396;
        result = ReadHuffmanCode(alphabet_size, alphabet_size,
            &s->block_len_trees[tree_offset], ((void*)0), s);
        if (result != BROTLI_DECODER_SUCCESS) break;
        s->state = BROTLI_STATE_HUFFMAN_CODE_3;
      }


      case BROTLI_STATE_HUFFMAN_CODE_3: {
        int tree_offset = s->loop_counter * 396;
        if (!SafeReadBlockLength(s, &s->block_length[s->loop_counter],
            &s->block_len_trees[tree_offset], br)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }
                                                         ;
        s->loop_counter++;
        s->state = BROTLI_STATE_HUFFMAN_CODE_0;
        break;
      }

      case BROTLI_STATE_UNCOMPRESSED: {
        result = CopyUncompressedBlockToOutput(
            available_out, next_out, total_out, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        s->state = BROTLI_STATE_METABLOCK_DONE;
        break;
      }

      case BROTLI_STATE_METADATA:
        for (; s->meta_block_remaining_len > 0; --s->meta_block_remaining_len) {
          uint32_t bits;

          if (!BrotliSafeReadBits(br, 8, &bits)) {
            result = BROTLI_DECODER_NEEDS_MORE_INPUT;
            break;
          }
        }
        if (result == BROTLI_DECODER_SUCCESS) {
          s->state = BROTLI_STATE_METABLOCK_DONE;
        }
        break;

      case BROTLI_STATE_METABLOCK_HEADER_2: {
        uint32_t bits;
        if (!BrotliSafeReadBits(br, 6, &bits)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }
        s->distance_postfix_bits = bits & BitMask(2);
        bits >>= 2;
        s->num_direct_distance_codes = bits << s->distance_postfix_bits;
                                                     ;
                                                 ;
        s->context_modes =
            (uint8_t*)s->alloc_func(s->memory_manager_opaque, (size_t)s->num_block_types[0]);
        if (s->context_modes == 0) {
          result = ((void)(0), BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MODES);
          break;
        }
        s->loop_counter = 0;
        s->state = BROTLI_STATE_CONTEXT_MODES;
      }


      case BROTLI_STATE_CONTEXT_MODES:
        result = ReadContextModes(s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        s->state = BROTLI_STATE_CONTEXT_MAP_1;


      case BROTLI_STATE_CONTEXT_MAP_1:
        result = DecodeContextMap(
            s->num_block_types[0] << 6,
            &s->num_literal_htrees, &s->context_map, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        DetectTrivialLiteralBlockTypes(s);
        s->state = BROTLI_STATE_CONTEXT_MAP_2;


      case BROTLI_STATE_CONTEXT_MAP_2: {
        uint32_t npostfix = s->distance_postfix_bits;
        uint32_t ndirect = s->num_direct_distance_codes;
        uint32_t distance_alphabet_size_max = ( 16 + (ndirect) + ((24U) << ((npostfix) + 1)));

        uint32_t distance_alphabet_size_limit = distance_alphabet_size_max;
        int allocation_success = 1;
        if (s->large_window) {
          BrotliDistanceCodeLimit limit = BrotliCalculateDistanceCodeLimit(
              0x7FFFFFFC, npostfix, ndirect);
          distance_alphabet_size_max = ( 16 + (ndirect) + ((62U) << ((npostfix) + 1)));

          distance_alphabet_size_limit = limit.max_alphabet_size;
        }
        result = DecodeContextMap(
            s->num_block_types[2] << 2,
            &s->num_dist_htrees, &s->dist_context_map, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        allocation_success &= BrotliDecoderHuffmanTreeGroupInit(
            s, &s->literal_hgroup, 256,
            256, s->num_literal_htrees);
        allocation_success &= BrotliDecoderHuffmanTreeGroupInit(
            s, &s->insert_copy_hgroup, 704,
            704, s->num_block_types[1]);
        allocation_success &= BrotliDecoderHuffmanTreeGroupInit(
            s, &s->distance_hgroup, distance_alphabet_size_max,
            distance_alphabet_size_limit, s->num_dist_htrees);
        if (!allocation_success) {
          return SaveErrorCode(s, (((void)(0), BROTLI_DECODER_ERROR_ALLOC_TREE_GROUPS)), input_size - *available_in);

        }
        s->loop_counter = 0;
        s->state = BROTLI_STATE_TREE_GROUP;
      }


      case BROTLI_STATE_TREE_GROUP: {
        HuffmanTreeGroup* hgroup = ((void*)0);
        switch (s->loop_counter) {
          case 0: hgroup = &s->literal_hgroup; break;
          case 1: hgroup = &s->insert_copy_hgroup; break;
          case 2: hgroup = &s->distance_hgroup; break;
          default: return SaveErrorCode(s, (((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE)), input_size - *available_in);

        }
        result = HuffmanTreeGroupDecode(hgroup, s);
        if (result != BROTLI_DECODER_SUCCESS) break;
        s->loop_counter++;
        if (s->loop_counter < 3) {
          break;
        }
        s->state = BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_BODY;
      }


      case BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_BODY:
        PrepareLiteralDecoding(s);
        s->dist_context_map_slice = s->dist_context_map;
        s->htree_command = s->insert_copy_hgroup.htrees[0];
        if (!BrotliEnsureRingBuffer(s)) {
          result = ((void)(0), BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_2);
          break;
        }
        CalculateDistanceLut(s);
        s->state = BROTLI_STATE_COMMAND_BEGIN;


      case BROTLI_STATE_COMMAND_BEGIN:

      case BROTLI_STATE_COMMAND_INNER:

      case BROTLI_STATE_COMMAND_POST_DECODE_LITERALS:

      case BROTLI_STATE_COMMAND_POST_WRAP_COPY:
        result = ProcessCommands(s);
        if (result == BROTLI_DECODER_NEEDS_MORE_INPUT) {
          result = SafeProcessCommands(s);
        }
        break;

      case BROTLI_STATE_COMMAND_INNER_WRITE:

      case BROTLI_STATE_COMMAND_POST_WRITE_1:

      case BROTLI_STATE_COMMAND_POST_WRITE_2:
        result = WriteRingBuffer(
            s, available_out, next_out, total_out, 0);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        WrapRingBuffer(s);
        if (s->ringbuffer_size == 1 << s->window_bits) {
          s->max_distance = s->max_backward_distance;
        }
        if (s->state == BROTLI_STATE_COMMAND_POST_WRITE_1) {
          BrotliDecoderCompoundDictionary* addon = s->compound_dictionary;
          if (addon && (addon->br_length != addon->br_copied)) {
            s->pos += CopyFromCompoundDictionary(s, s->pos);
            if (s->pos >= s->ringbuffer_size) continue;
          }
          if (s->meta_block_remaining_len == 0) {

            s->state = BROTLI_STATE_METABLOCK_DONE;
          } else {
            s->state = BROTLI_STATE_COMMAND_BEGIN;
          }
          break;
        } else if (s->state == BROTLI_STATE_COMMAND_POST_WRITE_2) {
          s->state = BROTLI_STATE_COMMAND_POST_WRAP_COPY;
        } else {
          if (s->loop_counter == 0) {
            if (s->meta_block_remaining_len == 0) {
              s->state = BROTLI_STATE_METABLOCK_DONE;
            } else {
              s->state = BROTLI_STATE_COMMAND_POST_DECODE_LITERALS;
            }
            break;
          }
          s->state = BROTLI_STATE_COMMAND_INNER;
        }
        break;

      case BROTLI_STATE_METABLOCK_DONE:
        if (s->meta_block_remaining_len < 0) {
          result = ((void)(0), BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_2);
          break;
        }
        BrotliDecoderStateCleanupAfterMetablock(s);
        if (!s->is_last_metablock) {
          s->state = BROTLI_STATE_METABLOCK_BEGIN;
          break;
        }
        if (!BrotliJumpToByteBoundary(br)) {
          result = ((void)(0), BROTLI_DECODER_ERROR_FORMAT_PADDING_2);
          break;
        }
        if (s->buffer_length == 0) {
          BrotliBitReaderUnload(br);
          *available_in = br->avail_in;
          *next_in = br->next_in;
        }
        s->state = BROTLI_STATE_DONE;


      case BROTLI_STATE_DONE:
        if (s->ringbuffer != 0) {
          result = WriteRingBuffer(
              s, available_out, next_out, total_out, 1);
          if (result != BROTLI_DECODER_SUCCESS) {
            break;
          }
        }
        return SaveErrorCode(s, (result), input_size - *available_in);
    }
  }
  return SaveErrorCode(s, (result), input_size - *available_in);

}

int BrotliDecoderHasMoreOutput(const BrotliDecoderStateInternal* s) {

  if ((int)s->error_code < 0) {
    return 0;
  }
  return (!!(s->ringbuffer != 0 && UnwrittenBytes(s, 0) != 0) ? 1 : 0);

}

const uint8_t* BrotliDecoderTakeOutput(BrotliDecoderStateInternal* s, size_t* size) {
  uint8_t* result = 0;
  size_t available_out = *size ? *size : 1u << 24;
  size_t requested_out = available_out;
  BrotliDecoderErrorCode status;
  if ((s->ringbuffer == 0) || ((int)s->error_code < 0)) {
    *size = 0;
    return 0;
  }
  WrapRingBuffer(s);
  status = WriteRingBuffer(s, &available_out, &result, 0, 1);

  if (status == BROTLI_DECODER_SUCCESS ||
      status == BROTLI_DECODER_NEEDS_MORE_OUTPUT) {
    *size = requested_out - available_out;
  } else {


    if ((int)status < 0) SaveErrorCode(s, status, 0);
    *size = 0;
    result = 0;
  }
  return result;
}

int BrotliDecoderIsUsed(const BrotliDecoderStateInternal* s) {
  return (!!(s->state != BROTLI_STATE_UNINITED || BrotliGetAvailableBits(&s->br) != 0) ? 1 : 0);

}

int BrotliDecoderIsFinished(const BrotliDecoderStateInternal* s) {
  return (!!(s->state == BROTLI_STATE_DONE) ? 1 : 0) &&
      !BrotliDecoderHasMoreOutput(s);
}

BrotliDecoderErrorCode BrotliDecoderGetErrorCode(const BrotliDecoderStateInternal* s) {
  return (BrotliDecoderErrorCode)s->error_code;
}

const char* BrotliDecoderErrorString(BrotliDecoderErrorCode c) {
  switch (c) {



    case BROTLI_DECODER_NO_ERROR: return "NO_ERROR"; case BROTLI_DECODER_SUCCESS: return "SUCCESS"; case BROTLI_DECODER_NEEDS_MORE_INPUT: return "NEEDS_MORE_INPUT"; case BROTLI_DECODER_NEEDS_MORE_OUTPUT: return "NEEDS_MORE_OUTPUT"; case BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_NIBBLE: return "EXUBERANT_NIBBLE"; case BROTLI_DECODER_ERROR_FORMAT_RESERVED: return "RESERVED"; case BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_META_NIBBLE: return "EXUBERANT_META_NIBBLE"; case BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_ALPHABET: return "SIMPLE_HUFFMAN_ALPHABET"; case BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_SAME: return "SIMPLE_HUFFMAN_SAME"; case BROTLI_DECODER_ERROR_FORMAT_CL_SPACE: return "CL_SPACE"; case BROTLI_DECODER_ERROR_FORMAT_HUFFMAN_SPACE: return "HUFFMAN_SPACE"; case BROTLI_DECODER_ERROR_FORMAT_CONTEXT_MAP_REPEAT: return "CONTEXT_MAP_REPEAT"; case BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_1: return "BLOCK_LENGTH_1"; case BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_2: return "BLOCK_LENGTH_2"; case BROTLI_DECODER_ERROR_FORMAT_TRANSFORM: return "TRANSFORM"; case BROTLI_DECODER_ERROR_FORMAT_DICTIONARY: return "DICTIONARY"; case BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS: return "WINDOW_BITS"; case BROTLI_DECODER_ERROR_FORMAT_PADDING_1: return "PADDING_1"; case BROTLI_DECODER_ERROR_FORMAT_PADDING_2: return "PADDING_2"; case BROTLI_DECODER_ERROR_FORMAT_DISTANCE: return "DISTANCE"; case BROTLI_DECODER_ERROR_COMPOUND_DICTIONARY: return "COMPOUND_DICTIONARY"; case BROTLI_DECODER_ERROR_DICTIONARY_NOT_SET: return "DICTIONARY_NOT_SET"; case BROTLI_DECODER_ERROR_INVALID_ARGUMENTS: return "INVALID_ARGUMENTS"; case BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MODES: return "CONTEXT_MODES"; case BROTLI_DECODER_ERROR_ALLOC_TREE_GROUPS: return "TREE_GROUPS"; case BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MAP: return "CONTEXT_MAP"; case BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_1: return "RING_BUFFER_1"; case BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_2: return "RING_BUFFER_2"; case BROTLI_DECODER_ERROR_ALLOC_BLOCK_TYPE_TREES: return "BLOCK_TYPE_TREES"; case BROTLI_DECODER_ERROR_UNREACHABLE: return "UNREACHABLE";


    default: return "INVALID";
  }
}

uint32_t BrotliDecoderVersion(void) {
  return 0x1000009;
}
