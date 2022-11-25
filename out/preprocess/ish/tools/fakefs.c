# 0 "../tools/fakefs.c"
# 1 "/workspace/ish/build//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "../tools/fakefs.c"
# 1 "/usr/include/errno.h" 1 3 4
# 25 "/usr/include/errno.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 392 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/timesize.h" 1 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 393 "/usr/include/features.h" 2 3 4
# 486 "/usr/include/features.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 1 3 4
# 559 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 560 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/long-double.h" 1 3 4
# 561 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 2 3 4
# 487 "/usr/include/features.h" 2 3 4
# 510 "/usr/include/features.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 1 3 4




# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 6 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/gnu/stubs-lp64.h" 1 3 4
# 9 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 2 3 4
# 511 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/errno.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/aarch64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 2 "/usr/include/aarch64-linux-gnu/asm/errno.h" 2 3 4
# 2 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4









# 37 "/usr/include/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 52 "/usr/include/errno.h" 3 4

# 2 "../tools/fakefs.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 32 "/usr/include/fcntl.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/fcntl.h" 1 3 4
# 40 "/usr/include/aarch64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;
    __off_t l_start;
    __off_t l_len;
    __pid_t l_pid;
  };
# 61 "/usr/include/aarch64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 393 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 3 4

# 467 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 3 4

# 62 "/usr/include/aarch64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 50 "/usr/include/fcntl.h" 3 4
typedef __mode_t mode_t;







typedef __off64_t off_t;
# 69 "/usr/include/fcntl.h" 3 4
typedef __pid_t pid_t;





# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 1 3 4





# 1 "/usr/include/aarch64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/aarch64-linux-gnu/bits/endian.h" 2 3 4
# 7 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 8 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 2 3 4



struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 76 "/usr/include/fcntl.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/stat.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/stat.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/struct_stat.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/struct_stat.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/struct_stat.h" 2 3 4
# 44 "/usr/include/aarch64-linux-gnu/bits/struct_stat.h" 3 4
struct stat
  {
    __dev_t st_dev;
    __ino64_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    __dev_t __pad1;
    __off64_t st_size;
    __blksize_t st_blksize;
    int __pad2;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 79 "/usr/include/aarch64-linux-gnu/bits/struct_stat.h" 3 4
    int __glibc_reserved[2];
  };
# 26 "/usr/include/aarch64-linux-gnu/bits/stat.h" 2 3 4
# 79 "/usr/include/fcntl.h" 2 3 4
# 152 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...) __asm__ ("" "fcntl64");
# 184 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __asm__ ("" "open64")
     __attribute__ ((__nonnull__ (1)));
# 209 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...) __asm__ ("" "openat64")
                    __attribute__ ((__nonnull__ (2)));
# 230 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __asm__ ("" "creat64")
                  __attribute__ ((__nonnull__ (1)));
# 259 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__ ("" "lockf64");
# 277 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off64_t __offset, __off64_t __len, int __advise) __asm__ ("" "posix_fadvise64") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 298 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off64_t __offset, __off64_t __len) __asm__ ("" "posix_fallocate64")

                           ;
# 317 "/usr/include/fcntl.h" 3 4

# 3 "../tools/fakefs.c" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 1 3 4
# 203 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 195 "/usr/include/limits.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 2 3 4
# 81 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min-dynamic.h" 1 3 4
# 29 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min-dynamic.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min.h" 1 3 4
# 30 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min-dynamic.h" 2 3 4
# 82 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 196 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 200 "/usr/include/limits.h" 2 3 4
# 204 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/aarch64-linux-gnu/11/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 2 3 4
# 4 "../tools/fakefs.c" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdbool.h" 1 3 4
# 5 "../tools/fakefs.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/waitstatus.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 56 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/long-double.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 2 3 4
# 95 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 2 3 4
# 96 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 2 3 4
# 57 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 98 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 177 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 386 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/aarch64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;






typedef __ino64_t ino_t;
# 59 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;
# 74 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 103 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/aarch64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
# 144 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 145 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/select.h" 1 3 4
# 31 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/aarch64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{




  __time_t tv_sec;
  __suseconds_t tv_usec;

};
# 38 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4





typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4

# 102 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 127 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 153 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4

# 180 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;
# 205 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt_t;



typedef __fsblkcnt64_t fsblkcnt_t;



typedef __fsfilcnt64_t fsfilcnt_t;
# 227 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 45 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/atomic_wide_counter.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/atomic_wide_counter.h" 3 4
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 76 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;
# 58 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
  int __kind;




  int __spins;
  __pthread_list_t __list;
# 74 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 89 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  unsigned long int __pad1;
  unsigned long int __pad2;
  unsigned int __flags;
};
# 90 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[8];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[8];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[64];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[48];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[8];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4



# 396 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));


extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)))
    __attribute__ ((__malloc__ (__builtin_free, 1)));


extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__ (reallocarray, 1)));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 575 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
     __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 654 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 682 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 698 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __asm__ ("" "mkstemp64")
     __attribute__ ((__nonnull__ (1))) ;
# 720 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __asm__ ("" "mkstemps64")
                     __attribute__ ((__nonnull__ (1))) ;
# 738 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 791 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 808 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 828 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 848 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 880 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__read_only__, 2)));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3)))
  __attribute__ ((__access__ (__read_only__, 2)));






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 967 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1013 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1023 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1024 "/usr/include/stdlib.h" 2 3 4
# 1035 "/usr/include/stdlib.h" 3 4

# 6 "../tools/fakefs.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 4)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 80 "/usr/include/string.h" 3 4
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 1, 3)));



# 1 "/usr/include/aarch64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/aarch64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 173 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)))
     __attribute__ ((__access__ (__write_only__, 1, 3)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 293 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 407 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
# 458 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
# 489 "/usr/include/string.h" 3 4
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 539 "/usr/include/string.h" 3 4

# 7 "../tools/fakefs.c" 2
# 1 "/usr/include/aarch64-linux-gnu/sys/stat.h" 1 3 4
# 99 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/stat.h" 1 3 4
# 102 "/usr/include/aarch64-linux-gnu/sys/stat.h" 2 3 4
# 227 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "stat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (1, 2)));
extern int fstat (int __fd, struct stat *__buf) __asm__ ("" "fstat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));
# 279 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file, struct stat *__restrict __buf, int __flag) __asm__ ("" "fstatat64") __attribute__ ((__nothrow__ , __leaf__))


                 __attribute__ ((__nonnull__ (2, 3)));
# 327 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "lstat64") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 389 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 452 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 468 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4

# 8 "../tools/fakefs.c" 2
# 1 "/usr/include/archive.h" 1 3 4
# 42 "/usr/include/archive.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
} max_align_t;
# 43 "/usr/include/archive.h" 2 3 4
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/aarch64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/aarch64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4
# 52 "/usr/include/stdio.h" 3 4
typedef __gnuc_va_list va_list;
# 86 "/usr/include/stdio.h" 3 4
typedef __fpos64_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4
# 143 "/usr/include/stdio.h" 3 4
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 178 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);
# 192 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) __asm__ ("" "tmpfile64")
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 205 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 222 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (__builtin_free, 1)));






extern int fflush (FILE *__stream);
# 239 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 270 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename, const char *__restrict __modes) __asm__ ("" "fopen64")

  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
extern FILE *freopen (const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream) __asm__ ("" "freopen64")


  ;
# 293 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 308 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 328 "/usr/include/stdio.h" 3 4
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 403 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 434 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 459 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));





extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 513 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 538 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 549 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 565 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__access__ (__write_only__, 1, 2)));
# 632 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 702 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 744 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off64_t __off, int __whence) __asm__ ("" "fseeko64")

                  ;
extern __off64_t ftello (FILE *__stream) __asm__ ("" "ftello64");
# 768 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos) __asm__ ("" "fgetpos64")
                                          ;
extern int fsetpos (FILE *__stream, const fpos_t *__pos) __asm__ ("" "fsetpos64")
                                                          ;
# 786 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 823 "/usr/include/stdio.h" 3 4
extern int pclose (FILE *__stream);





extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (pclose, 1))) ;






extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1)));
# 867 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 885 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 902 "/usr/include/stdio.h" 3 4

# 44 "/usr/include/archive.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/time.h" 2 3 4





# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_tm.h" 1 3 4






struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4
# 48 "/usr/include/time.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 68 "/usr/include/time.h" 3 4




extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));



extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/time.h" 3 4
extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
# 116 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 132 "/usr/include/time.h" 3 4
extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
# 154 "/usr/include/time.h" 3 4
extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
# 179 "/usr/include/time.h" 3 4
extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));



extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
# 197 "/usr/include/time.h" 3 4
extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
# 217 "/usr/include/time.h" 3 4
extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;
# 249 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));

extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
# 262 "/usr/include/time.h" 3 4
extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 272 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);


extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));
# 311 "/usr/include/time.h" 3 4
extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);
# 326 "/usr/include/time.h" 3 4
extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));



extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));
# 364 "/usr/include/time.h" 3 4
extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));






extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 440 "/usr/include/time.h" 3 4

# 45 "/usr/include/archive.h" 2 3 4
# 56 "/usr/include/archive.h" 3 4
# 1 "/usr/include/inttypes.h" 1 3 4
# 27 "/usr/include/inttypes.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/aarch64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdint.h" 2 3 4
# 28 "/usr/include/inttypes.h" 2 3 4






typedef unsigned int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


# 57 "/usr/include/archive.h" 2 3 4
# 69 "/usr/include/archive.h" 3 4
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 309 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 342 "/usr/include/unistd.h" 3 4
extern __off64_t lseek (int __fd, __off64_t __offset, int __whence) __asm__ ("" "lseek64") __attribute__ ((__nothrow__ , __leaf__))

             ;
# 358 "/usr/include/unistd.h" 3 4
extern int close (int __fd);




extern void closefrom (int __lowfd) __attribute__ ((__nothrow__ , __leaf__));







extern ssize_t read (int __fd, void *__buf, size_t __nbytes)
    __attribute__ ((__access__ (__write_only__, 2, 3)));





extern ssize_t write (int __fd, const void *__buf, size_t __n)
    __attribute__ ((__access__ (__read_only__, 2, 3)));
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")


    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pwrite64")


    __attribute__ ((__access__ (__read_only__, 2, 3)));
# 437 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 452 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 464 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 489 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 531 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 545 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__))
    __attribute__ ((__access__ (__write_only__, 1)));




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 564 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 619 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/aarch64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT,


    _SC_MINSIGSTKSZ,


    _SC_SIGSTKSZ

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 631 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 682 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 2, 1)));
# 722 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 778 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));
# 799 "/usr/include/unistd.h" 3 4
extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)))
     __attribute__ ((__access__ (__write_only__, 2, 3)));



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)))
     __attribute__ ((__access__ (__write_only__, 2, 3)));





extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)))
     __attribute__ ((__access__ (__write_only__, 3, 4)));



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







# 1 "/usr/include/aarch64-linux-gnu/bits/getopt_posix.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/getopt_core.h" 3 4








extern char *optarg;
# 50 "/usr/include/aarch64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/aarch64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 28 "/usr/include/aarch64-linux-gnu/bits/getopt_posix.h" 2 3 4


# 49 "/usr/include/aarch64-linux-gnu/bits/getopt_posix.h" 3 4

# 904 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__read_only__, 1, 2)));



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
     __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__read_only__, 1, 2)));




extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 1002 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 1030 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off64_t __length) __asm__ ("" "truncate64") __attribute__ ((__nothrow__ , __leaf__))

                  __attribute__ ((__nonnull__ (1))) ;
# 1052 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off64_t __length) __asm__ ("" "ftruncate64") __attribute__ ((__nothrow__ , __leaf__))
                        ;
# 1070 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1091 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1150 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1159 "/usr/include/unistd.h" 3 4
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 1198 "/usr/include/unistd.h" 3 4
int getentropy (void *__buffer, size_t __length)
    __attribute__ ((__access__ (__write_only__, 1, 2)));
# 1218 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/unistd_ext.h" 1 3 4
# 1219 "/usr/include/unistd.h" 2 3 4


# 70 "/usr/include/archive.h" 2 3 4



typedef int64_t la_int64_t;
# 95 "/usr/include/archive.h" 3 4
typedef ssize_t la_ssize_t;
# 153 "/usr/include/archive.h" 3 4
 int archive_version_number(void);






 const char * archive_version_string(void);
# 169 "/usr/include/archive.h" 3 4
 const char * archive_version_details(void);






 const char * archive_zlib_version(void);
 const char * archive_liblzma_version(void);
 const char * archive_bzlib_version(void);
 const char * archive_liblz4_version(void);
 const char * archive_libzstd_version(void);


struct archive;
struct archive_entry;
# 222 "/usr/include/archive.h" 3 4
typedef la_ssize_t archive_read_callback(struct archive *,
       void *_client_data, const void **_buffer);






typedef la_int64_t archive_skip_callback(struct archive *,
       void *_client_data, la_int64_t request);





typedef la_int64_t archive_seek_callback(struct archive *,
    void *_client_data, la_int64_t offset, int whence);


typedef la_ssize_t archive_write_callback(struct archive *,
       void *_client_data,
       const void *_buffer, size_t _length);

typedef int archive_open_callback(struct archive *, void *_client_data);

typedef int archive_close_callback(struct archive *, void *_client_data);

typedef int archive_free_callback(struct archive *, void *_client_data);





typedef int archive_switch_callback(struct archive *, void *_client_data1,
       void *_client_data2);





typedef const char *archive_passphrase_callback(struct archive *,
       void *_client_data);
# 384 "/usr/include/archive.h" 3 4
 struct archive *archive_read_new(void);
# 395 "/usr/include/archive.h" 3 4
 int archive_read_support_compression_all(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_bzip2(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_compress(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_gzip(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_lzip(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_lzma(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_none(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_program(struct archive *,
       const char *command) __attribute__((deprecated));
 int archive_read_support_compression_program_signature
  (struct archive *, const char *,
   const void * , size_t) __attribute__((deprecated));

 int archive_read_support_compression_rpm(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_uu(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_xz(struct archive *)
  __attribute__((deprecated));


 int archive_read_support_filter_all(struct archive *);
 int archive_read_support_filter_by_code(struct archive *, int);
 int archive_read_support_filter_bzip2(struct archive *);
 int archive_read_support_filter_compress(struct archive *);
 int archive_read_support_filter_gzip(struct archive *);
 int archive_read_support_filter_grzip(struct archive *);
 int archive_read_support_filter_lrzip(struct archive *);
 int archive_read_support_filter_lz4(struct archive *);
 int archive_read_support_filter_lzip(struct archive *);
 int archive_read_support_filter_lzma(struct archive *);
 int archive_read_support_filter_lzop(struct archive *);
 int archive_read_support_filter_none(struct archive *);
 int archive_read_support_filter_program(struct archive *,
       const char *command);
 int archive_read_support_filter_program_signature
  (struct archive *, const char * ,
        const void * , size_t);
 int archive_read_support_filter_rpm(struct archive *);
 int archive_read_support_filter_uu(struct archive *);
 int archive_read_support_filter_xz(struct archive *);
 int archive_read_support_filter_zstd(struct archive *);

 int archive_read_support_format_7zip(struct archive *);
 int archive_read_support_format_all(struct archive *);
 int archive_read_support_format_ar(struct archive *);
 int archive_read_support_format_by_code(struct archive *, int);
 int archive_read_support_format_cab(struct archive *);
 int archive_read_support_format_cpio(struct archive *);
 int archive_read_support_format_empty(struct archive *);
 int archive_read_support_format_gnutar(struct archive *);
 int archive_read_support_format_iso9660(struct archive *);
 int archive_read_support_format_lha(struct archive *);
 int archive_read_support_format_mtree(struct archive *);
 int archive_read_support_format_rar(struct archive *);
 int archive_read_support_format_rar5(struct archive *);
 int archive_read_support_format_raw(struct archive *);
 int archive_read_support_format_tar(struct archive *);
 int archive_read_support_format_warc(struct archive *);
 int archive_read_support_format_xar(struct archive *);


 int archive_read_support_format_zip(struct archive *);



 int archive_read_support_format_zip_streamable(struct archive *);

 int archive_read_support_format_zip_seekable(struct archive *);





 int archive_read_set_format(struct archive *, int);
 int archive_read_append_filter(struct archive *, int);
 int archive_read_append_filter_program(struct archive *,
    const char *);
 int archive_read_append_filter_program_signature
    (struct archive *, const char *, const void * , size_t);


 int archive_read_set_open_callback(struct archive *,
    archive_open_callback *);
 int archive_read_set_read_callback(struct archive *,
    archive_read_callback *);
 int archive_read_set_seek_callback(struct archive *,
    archive_seek_callback *);
 int archive_read_set_skip_callback(struct archive *,
    archive_skip_callback *);
 int archive_read_set_close_callback(struct archive *,
    archive_close_callback *);

 int archive_read_set_switch_callback(struct archive *,
    archive_switch_callback *);


 int archive_read_set_callback_data(struct archive *, void *);

 int archive_read_set_callback_data2(struct archive *, void *,
    unsigned int);

 int archive_read_add_callback_data(struct archive *, void *,
    unsigned int);

 int archive_read_append_callback_data(struct archive *, void *);

 int archive_read_prepend_callback_data(struct archive *, void *);


 int archive_read_open1(struct archive *);


 int archive_read_open(struct archive *, void *_client_data,
       archive_open_callback *, archive_read_callback *,
       archive_close_callback *);
 int archive_read_open2(struct archive *, void *_client_data,
       archive_open_callback *, archive_read_callback *,
       archive_skip_callback *, archive_close_callback *);







 int archive_read_open_filename(struct archive *,
       const char *_filename, size_t _block_size);


 int archive_read_open_filenames(struct archive *,
       const char **_filenames, size_t _block_size);
 int archive_read_open_filename_w(struct archive *,
       const wchar_t *_filename, size_t _block_size);

 int archive_read_open_file(struct archive *,
       const char *_filename, size_t _block_size) __attribute__((deprecated));

 int archive_read_open_memory(struct archive *,
       const void * buff, size_t size);

 int archive_read_open_memory2(struct archive *a, const void *buff,
       size_t size, size_t read_size);

 int archive_read_open_fd(struct archive *, int _fd,
       size_t _block_size);


 int archive_read_open_FILE(struct archive *, FILE *_file);


 int archive_read_next_header(struct archive *,
       struct archive_entry **);


 int archive_read_next_header2(struct archive *,
       struct archive_entry *);





 la_int64_t archive_read_header_position(struct archive *);
# 584 "/usr/include/archive.h" 3 4
 int archive_read_has_encrypted_entries(struct archive *);





 int archive_read_format_capabilities(struct archive *);


 la_ssize_t archive_read_data(struct archive *,
        void *, size_t);


 la_int64_t archive_seek_data(struct archive *, la_int64_t, int);







 int archive_read_data_block(struct archive *a,
      const void **buff, size_t *size, la_int64_t *offset);







 int archive_read_data_skip(struct archive *);
 int archive_read_data_into_fd(struct archive *, int fd);





 int archive_read_set_format_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_read_set_filter_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_read_set_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_read_set_options(struct archive *_a,
       const char *opts);




 int archive_read_add_passphrase(struct archive *, const char *);
 int archive_read_set_passphrase_callback(struct archive *,
       void *client_data, archive_passphrase_callback *);
# 703 "/usr/include/archive.h" 3 4
 int archive_read_extract(struct archive *, struct archive_entry *,
       int flags);
 int archive_read_extract2(struct archive *, struct archive_entry *,
       struct archive * );
 void archive_read_extract_set_progress_callback(struct archive *,
       void (*_progress_func)(void *), void *_user_data);



 void archive_read_extract_set_skip_file(struct archive *,
       la_int64_t, la_int64_t);


 int archive_read_close(struct archive *);


 int archive_read_free(struct archive *);


 int archive_read_finish(struct archive *) __attribute__((deprecated));
# 740 "/usr/include/archive.h" 3 4
 struct archive *archive_write_new(void);
 int archive_write_set_bytes_per_block(struct archive *,
       int bytes_per_block);
 int archive_write_get_bytes_per_block(struct archive *);

 int archive_write_set_bytes_in_last_block(struct archive *,
       int bytes_in_last_block);
 int archive_write_get_bytes_in_last_block(struct archive *);



 int archive_write_set_skip_file(struct archive *,
    la_int64_t, la_int64_t);


 int archive_write_set_compression_bzip2(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_compress(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_gzip(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_lzip(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_lzma(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_none(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_program(struct archive *,
       const char *cmd) __attribute__((deprecated));
 int archive_write_set_compression_xz(struct archive *)
  __attribute__((deprecated));



 int archive_write_add_filter(struct archive *, int filter_code);
 int archive_write_add_filter_by_name(struct archive *,
       const char *name);
 int archive_write_add_filter_b64encode(struct archive *);
 int archive_write_add_filter_bzip2(struct archive *);
 int archive_write_add_filter_compress(struct archive *);
 int archive_write_add_filter_grzip(struct archive *);
 int archive_write_add_filter_gzip(struct archive *);
 int archive_write_add_filter_lrzip(struct archive *);
 int archive_write_add_filter_lz4(struct archive *);
 int archive_write_add_filter_lzip(struct archive *);
 int archive_write_add_filter_lzma(struct archive *);
 int archive_write_add_filter_lzop(struct archive *);
 int archive_write_add_filter_none(struct archive *);
 int archive_write_add_filter_program(struct archive *,
       const char *cmd);
 int archive_write_add_filter_uuencode(struct archive *);
 int archive_write_add_filter_xz(struct archive *);
 int archive_write_add_filter_zstd(struct archive *);



 int archive_write_set_format(struct archive *, int format_code);
 int archive_write_set_format_by_name(struct archive *,
       const char *name);

 int archive_write_set_format_7zip(struct archive *);
 int archive_write_set_format_ar_bsd(struct archive *);
 int archive_write_set_format_ar_svr4(struct archive *);
 int archive_write_set_format_cpio(struct archive *);
 int archive_write_set_format_cpio_bin(struct archive *);
 int archive_write_set_format_cpio_newc(struct archive *);
 int archive_write_set_format_cpio_odc(struct archive *);
 int archive_write_set_format_cpio_pwb(struct archive *);
 int archive_write_set_format_gnutar(struct archive *);
 int archive_write_set_format_iso9660(struct archive *);
 int archive_write_set_format_mtree(struct archive *);
 int archive_write_set_format_mtree_classic(struct archive *);

 int archive_write_set_format_pax(struct archive *);
 int archive_write_set_format_pax_restricted(struct archive *);
 int archive_write_set_format_raw(struct archive *);
 int archive_write_set_format_shar(struct archive *);
 int archive_write_set_format_shar_dump(struct archive *);
 int archive_write_set_format_ustar(struct archive *);
 int archive_write_set_format_v7tar(struct archive *);
 int archive_write_set_format_warc(struct archive *);
 int archive_write_set_format_xar(struct archive *);
 int archive_write_set_format_zip(struct archive *);
 int archive_write_set_format_filter_by_ext(struct archive *a, const char *filename);
 int archive_write_set_format_filter_by_ext_def(struct archive *a, const char *filename, const char * def_ext);
 int archive_write_zip_set_compression_deflate(struct archive *);
 int archive_write_zip_set_compression_store(struct archive *);

 int archive_write_open(struct archive *, void *,
       archive_open_callback *, archive_write_callback *,
       archive_close_callback *);
 int archive_write_open2(struct archive *, void *,
       archive_open_callback *, archive_write_callback *,
       archive_close_callback *, archive_free_callback *);
 int archive_write_open_fd(struct archive *, int _fd);
 int archive_write_open_filename(struct archive *, const char *_file);
 int archive_write_open_filename_w(struct archive *,
       const wchar_t *_file);

 int archive_write_open_file(struct archive *, const char *_file)
  __attribute__((deprecated));
 int archive_write_open_FILE(struct archive *, FILE *);


 int archive_write_open_memory(struct archive *,
   void *_buffer, size_t _buffSize, size_t *_used);





 int archive_write_header(struct archive *,
       struct archive_entry *);
 la_ssize_t archive_write_data(struct archive *,
       const void *, size_t);


 la_ssize_t archive_write_data_block(struct archive *,
        const void *, size_t, la_int64_t);

 int archive_write_finish_entry(struct archive *);
 int archive_write_close(struct archive *);



 int archive_write_fail(struct archive *);


 int archive_write_free(struct archive *);


 int archive_write_finish(struct archive *) __attribute__((deprecated));






 int archive_write_set_format_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_write_set_filter_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_write_set_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_write_set_options(struct archive *_a,
       const char *opts);




 int archive_write_set_passphrase(struct archive *_a, const char *p);
 int archive_write_set_passphrase_callback(struct archive *,
       void *client_data, archive_passphrase_callback *);
# 916 "/usr/include/archive.h" 3 4
 struct archive *archive_write_disk_new(void);

 int archive_write_disk_set_skip_file(struct archive *,
    la_int64_t, la_int64_t);


 int archive_write_disk_set_options(struct archive *,
       int flags);
# 941 "/usr/include/archive.h" 3 4
 int archive_write_disk_set_standard_lookup(struct archive *);





 int archive_write_disk_set_group_lookup(struct archive *,
    void * ,
    la_int64_t (*)(void *, const char *, la_int64_t),
    void (* )(void *));
 int archive_write_disk_set_user_lookup(struct archive *,
    void * ,
    la_int64_t (*)(void *, const char *, la_int64_t),
    void (* )(void *));
 la_int64_t archive_write_disk_gid(struct archive *, const char *, la_int64_t);
 la_int64_t archive_write_disk_uid(struct archive *, const char *, la_int64_t);






 struct archive *archive_read_disk_new(void);



 int archive_read_disk_set_symlink_logical(struct archive *);

 int archive_read_disk_set_symlink_physical(struct archive *);

 int archive_read_disk_set_symlink_hybrid(struct archive *);

 int archive_read_disk_entry_from_file(struct archive *,
    struct archive_entry *, int , const struct stat *);


 const char *archive_read_disk_gname(struct archive *, la_int64_t);
 const char *archive_read_disk_uname(struct archive *, la_int64_t);


 int archive_read_disk_set_standard_lookup(struct archive *);

 int archive_read_disk_set_gname_lookup(struct archive *,
    void * ,
    const char *(* )(void *, la_int64_t),
    void (* )(void *));
 int archive_read_disk_set_uname_lookup(struct archive *,
    void * ,
    const char *(* )(void *, la_int64_t),
    void (* )(void *));

 int archive_read_disk_open(struct archive *, const char *);
 int archive_read_disk_open_w(struct archive *, const wchar_t *);







 int archive_read_disk_descend(struct archive *);
 int archive_read_disk_can_descend(struct archive *);
 int archive_read_disk_current_filesystem(struct archive *);
 int archive_read_disk_current_filesystem_is_synthetic(struct archive *);
 int archive_read_disk_current_filesystem_is_remote(struct archive *);

 int archive_read_disk_set_atime_restored(struct archive *);
# 1030 "/usr/include/archive.h" 3 4
 int archive_read_disk_set_behavior(struct archive *,
      int flags);







 int archive_read_disk_set_matching(struct archive *,
      struct archive *_matching, void (*_excluded_func)
      (struct archive *, void *, struct archive_entry *),
      void *_client_data);
 int archive_read_disk_set_metadata_filter_callback(struct archive *,
      int (*_metadata_filter_func)(struct archive *, void *,
       struct archive_entry *), void *_client_data);



 int archive_free(struct archive *);
# 1060 "/usr/include/archive.h" 3 4
 int archive_filter_count(struct archive *);
 la_int64_t archive_filter_bytes(struct archive *, int);
 int archive_filter_code(struct archive *, int);
 const char * archive_filter_name(struct archive *, int);





 la_int64_t archive_position_compressed(struct archive *)
    __attribute__((deprecated));

 la_int64_t archive_position_uncompressed(struct archive *)
    __attribute__((deprecated));

 const char *archive_compression_name(struct archive *)
    __attribute__((deprecated));

 int archive_compression(struct archive *)
    __attribute__((deprecated));


 int archive_errno(struct archive *);
 const char *archive_error_string(struct archive *);
 const char *archive_format_name(struct archive *);
 int archive_format(struct archive *);
 void archive_clear_error(struct archive *);
 void archive_set_error(struct archive *, int _err,
       const char *fmt, ...) __attribute__((__format__ (__printf__, 3, 4)));
 void archive_copy_error(struct archive *dest,
       struct archive *src);
 int archive_file_count(struct archive *);




 struct archive *archive_match_new(void);
 int archive_match_free(struct archive *);







 int archive_match_excluded(struct archive *,
      struct archive_entry *);




 int archive_match_path_excluded(struct archive *,
      struct archive_entry *);

 int archive_match_set_inclusion_recursion(struct archive *, int);

 int archive_match_exclude_pattern(struct archive *, const char *);
 int archive_match_exclude_pattern_w(struct archive *,
      const wchar_t *);

 int archive_match_exclude_pattern_from_file(struct archive *,
      const char *, int _nullSeparator);
 int archive_match_exclude_pattern_from_file_w(struct archive *,
      const wchar_t *, int _nullSeparator);

 int archive_match_include_pattern(struct archive *, const char *);
 int archive_match_include_pattern_w(struct archive *,
      const wchar_t *);

 int archive_match_include_pattern_from_file(struct archive *,
      const char *, int _nullSeparator);
 int archive_match_include_pattern_from_file_w(struct archive *,
      const wchar_t *, int _nullSeparator);




 int archive_match_path_unmatched_inclusions(struct archive *);


 int archive_match_path_unmatched_inclusions_next(
      struct archive *, const char **);
 int archive_match_path_unmatched_inclusions_next_w(
      struct archive *, const wchar_t **);





 int archive_match_time_excluded(struct archive *,
      struct archive_entry *);
# 1167 "/usr/include/archive.h" 3 4
 int archive_match_include_time(struct archive *, int _flag,
      time_t _sec, long _nsec);

 int archive_match_include_date(struct archive *, int _flag,
      const char *_datestr);
 int archive_match_include_date_w(struct archive *, int _flag,
      const wchar_t *_datestr);

 int archive_match_include_file_time(struct archive *,
      int _flag, const char *_pathname);
 int archive_match_include_file_time_w(struct archive *,
      int _flag, const wchar_t *_pathname);

 int archive_match_exclude_entry(struct archive *,
      int _flag, struct archive_entry *);





 int archive_match_owner_excluded(struct archive *,
      struct archive_entry *);

 int archive_match_include_uid(struct archive *, la_int64_t);
 int archive_match_include_gid(struct archive *, la_int64_t);
 int archive_match_include_uname(struct archive *, const char *);
 int archive_match_include_uname_w(struct archive *,
      const wchar_t *);
 int archive_match_include_gname(struct archive *, const char *);
 int archive_match_include_gname_w(struct archive *,
      const wchar_t *);



 int archive_utility_string_sort(char **);
# 9 "../tools/fakefs.c" 2
# 1 "/usr/include/archive_entry.h" 1 3 4
# 44 "/usr/include/archive_entry.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 45 "/usr/include/archive_entry.h" 2 3 4
# 156 "/usr/include/archive_entry.h" 3 4
struct archive;
struct archive_entry;
# 204 "/usr/include/archive_entry.h" 3 4
 struct archive_entry *archive_entry_clear(struct archive_entry *);

 struct archive_entry *archive_entry_clone(struct archive_entry *);
 void archive_entry_free(struct archive_entry *);
 struct archive_entry *archive_entry_new(void);
# 217 "/usr/include/archive_entry.h" 3 4
 struct archive_entry *archive_entry_new2(struct archive *);
# 238 "/usr/include/archive_entry.h" 3 4
 time_t archive_entry_atime(struct archive_entry *);
 long archive_entry_atime_nsec(struct archive_entry *);
 int archive_entry_atime_is_set(struct archive_entry *);
 time_t archive_entry_birthtime(struct archive_entry *);
 long archive_entry_birthtime_nsec(struct archive_entry *);
 int archive_entry_birthtime_is_set(struct archive_entry *);
 time_t archive_entry_ctime(struct archive_entry *);
 long archive_entry_ctime_nsec(struct archive_entry *);
 int archive_entry_ctime_is_set(struct archive_entry *);
 dev_t archive_entry_dev(struct archive_entry *);
 int archive_entry_dev_is_set(struct archive_entry *);
 dev_t archive_entry_devmajor(struct archive_entry *);
 dev_t archive_entry_devminor(struct archive_entry *);
 mode_t archive_entry_filetype(struct archive_entry *);
 void archive_entry_fflags(struct archive_entry *,
       unsigned long * ,
       unsigned long * );
 const char *archive_entry_fflags_text(struct archive_entry *);
 la_int64_t archive_entry_gid(struct archive_entry *);
 const char *archive_entry_gname(struct archive_entry *);
 const char *archive_entry_gname_utf8(struct archive_entry *);
 const wchar_t *archive_entry_gname_w(struct archive_entry *);
 const char *archive_entry_hardlink(struct archive_entry *);
 const char *archive_entry_hardlink_utf8(struct archive_entry *);
 const wchar_t *archive_entry_hardlink_w(struct archive_entry *);
 la_int64_t archive_entry_ino(struct archive_entry *);
 la_int64_t archive_entry_ino64(struct archive_entry *);
 int archive_entry_ino_is_set(struct archive_entry *);
 mode_t archive_entry_mode(struct archive_entry *);
 time_t archive_entry_mtime(struct archive_entry *);
 long archive_entry_mtime_nsec(struct archive_entry *);
 int archive_entry_mtime_is_set(struct archive_entry *);
 unsigned int archive_entry_nlink(struct archive_entry *);
 const char *archive_entry_pathname(struct archive_entry *);
 const char *archive_entry_pathname_utf8(struct archive_entry *);
 const wchar_t *archive_entry_pathname_w(struct archive_entry *);
 mode_t archive_entry_perm(struct archive_entry *);
 dev_t archive_entry_rdev(struct archive_entry *);
 dev_t archive_entry_rdevmajor(struct archive_entry *);
 dev_t archive_entry_rdevminor(struct archive_entry *);
 const char *archive_entry_sourcepath(struct archive_entry *);
 const wchar_t *archive_entry_sourcepath_w(struct archive_entry *);
 la_int64_t archive_entry_size(struct archive_entry *);
 int archive_entry_size_is_set(struct archive_entry *);
 const char *archive_entry_strmode(struct archive_entry *);
 const char *archive_entry_symlink(struct archive_entry *);
 const char *archive_entry_symlink_utf8(struct archive_entry *);
 int archive_entry_symlink_type(struct archive_entry *);
 const wchar_t *archive_entry_symlink_w(struct archive_entry *);
 la_int64_t archive_entry_uid(struct archive_entry *);
 const char *archive_entry_uname(struct archive_entry *);
 const char *archive_entry_uname_utf8(struct archive_entry *);
 const wchar_t *archive_entry_uname_w(struct archive_entry *);
 int archive_entry_is_data_encrypted(struct archive_entry *);
 int archive_entry_is_metadata_encrypted(struct archive_entry *);
 int archive_entry_is_encrypted(struct archive_entry *);
# 304 "/usr/include/archive_entry.h" 3 4
 void archive_entry_set_atime(struct archive_entry *, time_t, long);
 void archive_entry_unset_atime(struct archive_entry *);



 void archive_entry_set_birthtime(struct archive_entry *, time_t, long);
 void archive_entry_unset_birthtime(struct archive_entry *);
 void archive_entry_set_ctime(struct archive_entry *, time_t, long);
 void archive_entry_unset_ctime(struct archive_entry *);
 void archive_entry_set_dev(struct archive_entry *, dev_t);
 void archive_entry_set_devmajor(struct archive_entry *, dev_t);
 void archive_entry_set_devminor(struct archive_entry *, dev_t);
 void archive_entry_set_filetype(struct archive_entry *, unsigned int);
 void archive_entry_set_fflags(struct archive_entry *,
     unsigned long , unsigned long );


 const char *archive_entry_copy_fflags_text(struct archive_entry *,
     const char *);
 const wchar_t *archive_entry_copy_fflags_text_w(struct archive_entry *,
     const wchar_t *);
 void archive_entry_set_gid(struct archive_entry *, la_int64_t);
 void archive_entry_set_gname(struct archive_entry *, const char *);
 void archive_entry_set_gname_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_gname(struct archive_entry *, const char *);
 void archive_entry_copy_gname_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_gname_utf8(struct archive_entry *, const char *);
 void archive_entry_set_hardlink(struct archive_entry *, const char *);
 void archive_entry_set_hardlink_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_hardlink(struct archive_entry *, const char *);
 void archive_entry_copy_hardlink_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_hardlink_utf8(struct archive_entry *, const char *);
 void archive_entry_set_ino(struct archive_entry *, la_int64_t);
 void archive_entry_set_ino64(struct archive_entry *, la_int64_t);
 void archive_entry_set_link(struct archive_entry *, const char *);
 void archive_entry_set_link_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_link(struct archive_entry *, const char *);
 void archive_entry_copy_link_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_link_utf8(struct archive_entry *, const char *);
 void archive_entry_set_mode(struct archive_entry *, mode_t);
 void archive_entry_set_mtime(struct archive_entry *, time_t, long);
 void archive_entry_unset_mtime(struct archive_entry *);
 void archive_entry_set_nlink(struct archive_entry *, unsigned int);
 void archive_entry_set_pathname(struct archive_entry *, const char *);
 void archive_entry_set_pathname_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_pathname(struct archive_entry *, const char *);
 void archive_entry_copy_pathname_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_pathname_utf8(struct archive_entry *, const char *);
 void archive_entry_set_perm(struct archive_entry *, mode_t);
 void archive_entry_set_rdev(struct archive_entry *, dev_t);
 void archive_entry_set_rdevmajor(struct archive_entry *, dev_t);
 void archive_entry_set_rdevminor(struct archive_entry *, dev_t);
 void archive_entry_set_size(struct archive_entry *, la_int64_t);
 void archive_entry_unset_size(struct archive_entry *);
 void archive_entry_copy_sourcepath(struct archive_entry *, const char *);
 void archive_entry_copy_sourcepath_w(struct archive_entry *, const wchar_t *);
 void archive_entry_set_symlink(struct archive_entry *, const char *);
 void archive_entry_set_symlink_type(struct archive_entry *, int);
 void archive_entry_set_symlink_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_symlink(struct archive_entry *, const char *);
 void archive_entry_copy_symlink_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_symlink_utf8(struct archive_entry *, const char *);
 void archive_entry_set_uid(struct archive_entry *, la_int64_t);
 void archive_entry_set_uname(struct archive_entry *, const char *);
 void archive_entry_set_uname_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_uname(struct archive_entry *, const char *);
 void archive_entry_copy_uname_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_uname_utf8(struct archive_entry *, const char *);
 void archive_entry_set_is_data_encrypted(struct archive_entry *, char is_encrypted);
 void archive_entry_set_is_metadata_encrypted(struct archive_entry *, char is_encrypted);
# 386 "/usr/include/archive_entry.h" 3 4
 const struct stat *archive_entry_stat(struct archive_entry *);
 void archive_entry_copy_stat(struct archive_entry *, const struct stat *);
# 396 "/usr/include/archive_entry.h" 3 4
 const void * archive_entry_mac_metadata(struct archive_entry *, size_t *);
 void archive_entry_copy_mac_metadata(struct archive_entry *, const void *, size_t);
# 410 "/usr/include/archive_entry.h" 3 4
 const unsigned char * archive_entry_digest(struct archive_entry *, int );
# 523 "/usr/include/archive_entry.h" 3 4
 void archive_entry_acl_clear(struct archive_entry *);
 int archive_entry_acl_add_entry(struct archive_entry *,
     int , int , int ,
     int , const char * );
 int archive_entry_acl_add_entry_w(struct archive_entry *,
     int , int , int ,
     int , const wchar_t * );






 int archive_entry_acl_reset(struct archive_entry *, int );
 int archive_entry_acl_next(struct archive_entry *, int ,
     int * , int * , int * ,
     int * , const char ** );
# 569 "/usr/include/archive_entry.h" 3 4
 wchar_t *archive_entry_acl_to_text_w(struct archive_entry *,
     la_ssize_t * , int );
 char *archive_entry_acl_to_text(struct archive_entry *,
     la_ssize_t * , int );
 int archive_entry_acl_from_text_w(struct archive_entry *,
     const wchar_t * , int );
 int archive_entry_acl_from_text(struct archive_entry *,
     const char * , int );






 const wchar_t *archive_entry_acl_text_w(struct archive_entry *,
      int ) __attribute__((deprecated));
 const char *archive_entry_acl_text(struct archive_entry *,
      int ) __attribute__((deprecated));


 int archive_entry_acl_types(struct archive_entry *);


 int archive_entry_acl_count(struct archive_entry *, int );



struct archive_acl;
 struct archive_acl *archive_entry_acl(struct archive_entry *);





 void archive_entry_xattr_clear(struct archive_entry *);
 void archive_entry_xattr_add_entry(struct archive_entry *,
     const char * , const void * ,
     size_t );






 int archive_entry_xattr_count(struct archive_entry *);
 int archive_entry_xattr_reset(struct archive_entry *);
 int archive_entry_xattr_next(struct archive_entry *,
     const char ** , const void ** , size_t *);





 void archive_entry_sparse_clear(struct archive_entry *);
 void archive_entry_sparse_add_entry(struct archive_entry *,
     la_int64_t , la_int64_t );






 int archive_entry_sparse_count(struct archive_entry *);
 int archive_entry_sparse_reset(struct archive_entry *);
 int archive_entry_sparse_next(struct archive_entry *,
     la_int64_t * , la_int64_t * );
# 664 "/usr/include/archive_entry.h" 3 4
struct archive_entry_linkresolver;
# 706 "/usr/include/archive_entry.h" 3 4
 struct archive_entry_linkresolver *archive_entry_linkresolver_new(void);
 void archive_entry_linkresolver_set_strategy(
 struct archive_entry_linkresolver *, int );
 void archive_entry_linkresolver_free(struct archive_entry_linkresolver *);
 void archive_entry_linkify(struct archive_entry_linkresolver *,
    struct archive_entry **, struct archive_entry **);
 struct archive_entry *archive_entry_partial_links(
    struct archive_entry_linkresolver *res, unsigned int *links);
# 10 "../tools/fakefs.c" 2


# 1 "../fs/fake-db.h" 1



# 1 "/usr/include/sqlite3.h" 1 3 4
# 35 "/usr/include/sqlite3.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 1 3 4
# 36 "/usr/include/sqlite3.h" 2 3 4
# 185 "/usr/include/sqlite3.h" 3 4
 extern const char sqlite3_version[];
 const char *sqlite3_libversion(void);
 const char *sqlite3_sourceid(void);
 int sqlite3_libversion_number(void);
# 213 "/usr/include/sqlite3.h" 3 4
 int sqlite3_compileoption_used(const char *zOptName);
 const char *sqlite3_compileoption_get(int N);
# 256 "/usr/include/sqlite3.h" 3 4
 int sqlite3_threadsafe(void);
# 272 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3 sqlite3;
# 301 "/usr/include/sqlite3.h" 3 4
  typedef long long int sqlite_int64;
  typedef unsigned long long int sqlite_uint64;

typedef sqlite_int64 sqlite3_int64;
typedef sqlite_uint64 sqlite3_uint64;
# 353 "/usr/include/sqlite3.h" 3 4
 int sqlite3_close(sqlite3*);
 int sqlite3_close_v2(sqlite3*);






typedef int (*sqlite3_callback)(void*,int,char**, char**);
# 425 "/usr/include/sqlite3.h" 3 4
 int sqlite3_exec(
  sqlite3*,
  const char *sql,
  int (*callback)(void*,int,char**,char**),
  void *,
  char **errmsg
);
# 722 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_file sqlite3_file;
struct sqlite3_file {
  const struct sqlite3_io_methods *pMethods;
};
# 821 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_io_methods sqlite3_io_methods;
struct sqlite3_io_methods {
  int iVersion;
  int (*xClose)(sqlite3_file*);
  int (*xRead)(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
  int (*xWrite)(sqlite3_file*, const void*, int iAmt, sqlite3_int64 iOfst);
  int (*xTruncate)(sqlite3_file*, sqlite3_int64 size);
  int (*xSync)(sqlite3_file*, int flags);
  int (*xFileSize)(sqlite3_file*, sqlite3_int64 *pSize);
  int (*xLock)(sqlite3_file*, int);
  int (*xUnlock)(sqlite3_file*, int);
  int (*xCheckReservedLock)(sqlite3_file*, int *pResOut);
  int (*xFileControl)(sqlite3_file*, int op, void *pArg);
  int (*xSectorSize)(sqlite3_file*);
  int (*xDeviceCharacteristics)(sqlite3_file*);

  int (*xShmMap)(sqlite3_file*, int iPg, int pgsz, int, void volatile**);
  int (*xShmLock)(sqlite3_file*, int offset, int n, int flags);
  void (*xShmBarrier)(sqlite3_file*);
  int (*xShmUnmap)(sqlite3_file*, int deleteFlag);

  int (*xFetch)(sqlite3_file*, sqlite3_int64 iOfst, int iAmt, void **pp);
  int (*xUnfetch)(sqlite3_file*, sqlite3_int64 iOfst, void *p);


};
# 1244 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_mutex sqlite3_mutex;
# 1254 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_api_routines sqlite3_api_routines;
# 1425 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_vfs sqlite3_vfs;
typedef void (*sqlite3_syscall_ptr)(void);
struct sqlite3_vfs {
  int iVersion;
  int szOsFile;
  int mxPathname;
  sqlite3_vfs *pNext;
  const char *zName;
  void *pAppData;
  int (*xOpen)(sqlite3_vfs*, const char *zName, sqlite3_file*,
               int flags, int *pOutFlags);
  int (*xDelete)(sqlite3_vfs*, const char *zName, int syncDir);
  int (*xAccess)(sqlite3_vfs*, const char *zName, int flags, int *pResOut);
  int (*xFullPathname)(sqlite3_vfs*, const char *zName, int nOut, char *zOut);
  void *(*xDlOpen)(sqlite3_vfs*, const char *zFilename);
  void (*xDlError)(sqlite3_vfs*, int nByte, char *zErrMsg);
  void (*(*xDlSym)(sqlite3_vfs*,void*, const char *zSymbol))(void);
  void (*xDlClose)(sqlite3_vfs*, void*);
  int (*xRandomness)(sqlite3_vfs*, int nByte, char *zOut);
  int (*xSleep)(sqlite3_vfs*, int microseconds);
  int (*xCurrentTime)(sqlite3_vfs*, double*);
  int (*xGetLastError)(sqlite3_vfs*, int, char *);




  int (*xCurrentTimeInt64)(sqlite3_vfs*, sqlite3_int64*);




  int (*xSetSystemCall)(sqlite3_vfs*, const char *zName, sqlite3_syscall_ptr);
  sqlite3_syscall_ptr (*xGetSystemCall)(sqlite3_vfs*, const char *zName);
  const char *(*xNextSystemCall)(sqlite3_vfs*, const char *zName);





};
# 1603 "/usr/include/sqlite3.h" 3 4
 int sqlite3_initialize(void);
 int sqlite3_shutdown(void);
 int sqlite3_os_init(void);
 int sqlite3_os_end(void);
# 1639 "/usr/include/sqlite3.h" 3 4
 int sqlite3_config(int, ...);
# 1658 "/usr/include/sqlite3.h" 3 4
 int sqlite3_db_config(sqlite3*, int op, ...);
# 1723 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_mem_methods sqlite3_mem_methods;
struct sqlite3_mem_methods {
  void *(*xMalloc)(int);
  void (*xFree)(void*);
  void *(*xRealloc)(void*,int);
  int (*xSize)(void*);
  int (*xRoundup)(int);
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  void *pAppData;
};
# 2427 "/usr/include/sqlite3.h" 3 4
 int sqlite3_extended_result_codes(sqlite3*, int onoff);
# 2489 "/usr/include/sqlite3.h" 3 4
 sqlite3_int64 sqlite3_last_insert_rowid(sqlite3*);
# 2499 "/usr/include/sqlite3.h" 3 4
 void sqlite3_set_last_insert_rowid(sqlite3*,sqlite3_int64);
# 2560 "/usr/include/sqlite3.h" 3 4
 int sqlite3_changes(sqlite3*);
 sqlite3_int64 sqlite3_changes64(sqlite3*);
# 2602 "/usr/include/sqlite3.h" 3 4
 int sqlite3_total_changes(sqlite3*);
 sqlite3_int64 sqlite3_total_changes64(sqlite3*);
# 2640 "/usr/include/sqlite3.h" 3 4
 void sqlite3_interrupt(sqlite3*);
# 2675 "/usr/include/sqlite3.h" 3 4
 int sqlite3_complete(const char *sql);
 int sqlite3_complete16(const void *sql);
# 2737 "/usr/include/sqlite3.h" 3 4
 int sqlite3_busy_handler(sqlite3*,int(*)(void*,int),void*);
# 2760 "/usr/include/sqlite3.h" 3 4
 int sqlite3_busy_timeout(sqlite3*, int ms);
# 2835 "/usr/include/sqlite3.h" 3 4
 int sqlite3_get_table(
  sqlite3 *db,
  const char *zSql,
  char ***pazResult,
  int *pnRow,
  int *pnColumn,
  char **pzErrmsg
);
 void sqlite3_free_table(char **result);
# 2885 "/usr/include/sqlite3.h" 3 4
 char *sqlite3_mprintf(const char*,...);
 char *sqlite3_vmprintf(const char*, va_list);
 char *sqlite3_snprintf(int,char*,const char*, ...);
 char *sqlite3_vsnprintf(int,char*,const char*, va_list);
# 2965 "/usr/include/sqlite3.h" 3 4
 void *sqlite3_malloc(int);
 void *sqlite3_malloc64(sqlite3_uint64);
 void *sqlite3_realloc(void*, int);
 void *sqlite3_realloc64(void*, sqlite3_uint64);
 void sqlite3_free(void*);
 sqlite3_uint64 sqlite3_msize(void*);
# 2995 "/usr/include/sqlite3.h" 3 4
 sqlite3_int64 sqlite3_memory_used(void);
 sqlite3_int64 sqlite3_memory_highwater(int resetFlag);
# 3019 "/usr/include/sqlite3.h" 3 4
 void sqlite3_randomness(int N, void *P);
# 3110 "/usr/include/sqlite3.h" 3 4
 int sqlite3_set_authorizer(
  sqlite3*,
  int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
  void *pUserData
);
# 3218 "/usr/include/sqlite3.h" 3 4
 void *sqlite3_trace(sqlite3*,
   void(*xTrace)(void*,const char*), void*);
 void *sqlite3_profile(sqlite3*,
   void(*xProfile)(void*,const char*,sqlite3_uint64), void*);
# 3309 "/usr/include/sqlite3.h" 3 4
 int sqlite3_trace_v2(
  sqlite3*,
  unsigned uMask,
  int(*xCallback)(unsigned,void*,void*,void*),
  void *pCtx
);
# 3348 "/usr/include/sqlite3.h" 3 4
 void sqlite3_progress_handler(sqlite3*, int, int(*)(void*), void*);
# 3620 "/usr/include/sqlite3.h" 3 4
 int sqlite3_open(
  const char *filename,
  sqlite3 **ppDb
);
 int sqlite3_open16(
  const void *filename,
  sqlite3 **ppDb
);
 int sqlite3_open_v2(
  const char *filename,
  sqlite3 **ppDb,
  int flags,
  const char *zVfs
);
# 3701 "/usr/include/sqlite3.h" 3 4
 const char *sqlite3_uri_parameter(const char *zFilename, const char *zParam);
 int sqlite3_uri_boolean(const char *zFile, const char *zParam, int bDefault);
 sqlite3_int64 sqlite3_uri_int64(const char*, const char*, sqlite3_int64);
 const char *sqlite3_uri_key(const char *zFilename, int N);
# 3733 "/usr/include/sqlite3.h" 3 4
 const char *sqlite3_filename_database(const char*);
 const char *sqlite3_filename_journal(const char*);
 const char *sqlite3_filename_wal(const char*);
# 3754 "/usr/include/sqlite3.h" 3 4
 sqlite3_file *sqlite3_database_file_object(const char*);
# 3801 "/usr/include/sqlite3.h" 3 4
 char *sqlite3_create_filename(
  const char *zDatabase,
  const char *zJournal,
  const char *zWal,
  int nParam,
  const char **azParam
);
 void sqlite3_free_filename(char*);
# 3862 "/usr/include/sqlite3.h" 3 4
 int sqlite3_errcode(sqlite3 *db);
 int sqlite3_extended_errcode(sqlite3 *db);
 const char *sqlite3_errmsg(sqlite3*);
 const void *sqlite3_errmsg16(sqlite3*);
 const char *sqlite3_errstr(int);
# 3892 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_stmt sqlite3_stmt;
# 3934 "/usr/include/sqlite3.h" 3 4
 int sqlite3_limit(sqlite3*, int id, int newVal);
# 4144 "/usr/include/sqlite3.h" 3 4
 int sqlite3_prepare(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare_v2(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare_v3(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare16(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
 int sqlite3_prepare16_v2(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
 int sqlite3_prepare16_v3(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
# 4230 "/usr/include/sqlite3.h" 3 4
 const char *sqlite3_sql(sqlite3_stmt *pStmt);
 char *sqlite3_expanded_sql(sqlite3_stmt *pStmt);
# 4279 "/usr/include/sqlite3.h" 3 4
 int sqlite3_stmt_readonly(sqlite3_stmt *pStmt);
# 4291 "/usr/include/sqlite3.h" 3 4
 int sqlite3_stmt_isexplain(sqlite3_stmt *pStmt);
# 4312 "/usr/include/sqlite3.h" 3 4
 int sqlite3_stmt_busy(sqlite3_stmt*);
# 4354 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_value sqlite3_value;
# 4368 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_context sqlite3_context;
# 4510 "/usr/include/sqlite3.h" 3 4
 int sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(*)(void*));
 int sqlite3_bind_blob64(sqlite3_stmt*, int, const void*, sqlite3_uint64,
                        void(*)(void*));
 int sqlite3_bind_double(sqlite3_stmt*, int, double);
 int sqlite3_bind_int(sqlite3_stmt*, int, int);
 int sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
 int sqlite3_bind_null(sqlite3_stmt*, int);
 int sqlite3_bind_text(sqlite3_stmt*,int,const char*,int,void(*)(void*));
 int sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(*)(void*));
 int sqlite3_bind_text64(sqlite3_stmt*, int, const char*, sqlite3_uint64,
                         void(*)(void*), unsigned char encoding);
 int sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);
 int sqlite3_bind_pointer(sqlite3_stmt*, int, void*, const char*,void(*)(void*));
 int sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);
 int sqlite3_bind_zeroblob64(sqlite3_stmt*, int, sqlite3_uint64);
# 4545 "/usr/include/sqlite3.h" 3 4
 int sqlite3_bind_parameter_count(sqlite3_stmt*);
# 4573 "/usr/include/sqlite3.h" 3 4
 const char *sqlite3_bind_parameter_name(sqlite3_stmt*, int);
# 4591 "/usr/include/sqlite3.h" 3 4
 int sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
# 4601 "/usr/include/sqlite3.h" 3 4
 int sqlite3_clear_bindings(sqlite3_stmt*);
# 4617 "/usr/include/sqlite3.h" 3 4
 int sqlite3_column_count(sqlite3_stmt *pStmt);
# 4646 "/usr/include/sqlite3.h" 3 4
 const char *sqlite3_column_name(sqlite3_stmt*, int N);
 const void *sqlite3_column_name16(sqlite3_stmt*, int N);
# 4691 "/usr/include/sqlite3.h" 3 4
 const char *sqlite3_column_database_name(sqlite3_stmt*,int);
 const void *sqlite3_column_database_name16(sqlite3_stmt*,int);
 const char *sqlite3_column_table_name(sqlite3_stmt*,int);
 const void *sqlite3_column_table_name16(sqlite3_stmt*,int);
 const char *sqlite3_column_origin_name(sqlite3_stmt*,int);
 const void *sqlite3_column_origin_name16(sqlite3_stmt*,int);
# 4728 "/usr/include/sqlite3.h" 3 4
 const char *sqlite3_column_decltype(sqlite3_stmt*,int);
 const void *sqlite3_column_decltype16(sqlite3_stmt*,int);
# 4813 "/usr/include/sqlite3.h" 3 4
 int sqlite3_step(sqlite3_stmt*);
# 4834 "/usr/include/sqlite3.h" 3 4
 int sqlite3_data_count(sqlite3_stmt *pStmt);
# 5077 "/usr/include/sqlite3.h" 3 4
 const void *sqlite3_column_blob(sqlite3_stmt*, int iCol);
 double sqlite3_column_double(sqlite3_stmt*, int iCol);
 int sqlite3_column_int(sqlite3_stmt*, int iCol);
 sqlite3_int64 sqlite3_column_int64(sqlite3_stmt*, int iCol);
 const unsigned char *sqlite3_column_text(sqlite3_stmt*, int iCol);
 const void *sqlite3_column_text16(sqlite3_stmt*, int iCol);
 sqlite3_value *sqlite3_column_value(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
 int sqlite3_column_type(sqlite3_stmt*, int iCol);
# 5114 "/usr/include/sqlite3.h" 3 4
 int sqlite3_finalize(sqlite3_stmt *pStmt);
# 5141 "/usr/include/sqlite3.h" 3 4
 int sqlite3_reset(sqlite3_stmt *pStmt);
# 5266 "/usr/include/sqlite3.h" 3 4
 int sqlite3_create_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
 int sqlite3_create_function16(
  sqlite3 *db,
  const void *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
 int sqlite3_create_function_v2(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void(*xDestroy)(void*)
);
 int sqlite3_create_window_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void (*xValue)(sqlite3_context*),
  void (*xInverse)(sqlite3_context*,int,sqlite3_value**),
  void(*xDestroy)(void*)
);
# 5404 "/usr/include/sqlite3.h" 3 4
 int sqlite3_aggregate_count(sqlite3_context*);
 int sqlite3_expired(sqlite3_stmt*);
 int sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);
 int sqlite3_global_recover(void);
 void sqlite3_thread_cleanup(void);
 int sqlite3_memory_alarm(void(*)(void*,sqlite3_int64,int),
                      void*,sqlite3_int64);
# 5541 "/usr/include/sqlite3.h" 3 4
 const void *sqlite3_value_blob(sqlite3_value*);
 double sqlite3_value_double(sqlite3_value*);
 int sqlite3_value_int(sqlite3_value*);
 sqlite3_int64 sqlite3_value_int64(sqlite3_value*);
 void *sqlite3_value_pointer(sqlite3_value*, const char*);
 const unsigned char *sqlite3_value_text(sqlite3_value*);
 const void *sqlite3_value_text16(sqlite3_value*);
 const void *sqlite3_value_text16le(sqlite3_value*);
 const void *sqlite3_value_text16be(sqlite3_value*);
 int sqlite3_value_bytes(sqlite3_value*);
 int sqlite3_value_bytes16(sqlite3_value*);
 int sqlite3_value_type(sqlite3_value*);
 int sqlite3_value_numeric_type(sqlite3_value*);
 int sqlite3_value_nochange(sqlite3_value*);
 int sqlite3_value_frombind(sqlite3_value*);
# 5567 "/usr/include/sqlite3.h" 3 4
 unsigned int sqlite3_value_subtype(sqlite3_value*);
# 5583 "/usr/include/sqlite3.h" 3 4
 sqlite3_value *sqlite3_value_dup(const sqlite3_value*);
 void sqlite3_value_free(sqlite3_value*);
# 5629 "/usr/include/sqlite3.h" 3 4
 void *sqlite3_aggregate_context(sqlite3_context*, int nBytes);
# 5644 "/usr/include/sqlite3.h" 3 4
 void *sqlite3_user_data(sqlite3_context*);
# 5656 "/usr/include/sqlite3.h" 3 4
 sqlite3 *sqlite3_context_db_handle(sqlite3_context*);
# 5715 "/usr/include/sqlite3.h" 3 4
 void *sqlite3_get_auxdata(sqlite3_context*, int N);
 void sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (*)(void*));
# 5733 "/usr/include/sqlite3.h" 3 4
typedef void (*sqlite3_destructor_type)(void*);
# 5883 "/usr/include/sqlite3.h" 3 4
 void sqlite3_result_blob(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_blob64(sqlite3_context*,const void*,
                           sqlite3_uint64,void(*)(void*));
 void sqlite3_result_double(sqlite3_context*, double);
 void sqlite3_result_error(sqlite3_context*, const char*, int);
 void sqlite3_result_error16(sqlite3_context*, const void*, int);
 void sqlite3_result_error_toobig(sqlite3_context*);
 void sqlite3_result_error_nomem(sqlite3_context*);
 void sqlite3_result_error_code(sqlite3_context*, int);
 void sqlite3_result_int(sqlite3_context*, int);
 void sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
 void sqlite3_result_null(sqlite3_context*);
 void sqlite3_result_text(sqlite3_context*, const char*, int, void(*)(void*));
 void sqlite3_result_text64(sqlite3_context*, const char*,sqlite3_uint64,
                           void(*)(void*), unsigned char encoding);
 void sqlite3_result_text16(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_text16le(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_text16be(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_value(sqlite3_context*, sqlite3_value*);
 void sqlite3_result_pointer(sqlite3_context*, void*,const char*,void(*)(void*));
 void sqlite3_result_zeroblob(sqlite3_context*, int n);
 int sqlite3_result_zeroblob64(sqlite3_context*, sqlite3_uint64 n);
# 5919 "/usr/include/sqlite3.h" 3 4
 void sqlite3_result_subtype(sqlite3_context*,unsigned int);
# 6002 "/usr/include/sqlite3.h" 3 4
 int sqlite3_create_collation(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
 int sqlite3_create_collation_v2(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*),
  void(*xDestroy)(void*)
);
 int sqlite3_create_collation16(
  sqlite3*,
  const void *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
# 6052 "/usr/include/sqlite3.h" 3 4
 int sqlite3_collation_needed(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const char*)
);
 int sqlite3_collation_needed16(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const void*)
);
# 6090 "/usr/include/sqlite3.h" 3 4
 int sqlite3_sleep(int);
# 6148 "/usr/include/sqlite3.h" 3 4
 extern char *sqlite3_temp_directory;
# 6185 "/usr/include/sqlite3.h" 3 4
 extern char *sqlite3_data_directory;
# 6206 "/usr/include/sqlite3.h" 3 4
 int sqlite3_win32_set_directory(
  unsigned long type,
  void *zValue
);
 int sqlite3_win32_set_directory8(unsigned long type, const char *zValue);
 int sqlite3_win32_set_directory16(unsigned long type, const void *zValue);
# 6244 "/usr/include/sqlite3.h" 3 4
 int sqlite3_get_autocommit(sqlite3*);
# 6257 "/usr/include/sqlite3.h" 3 4
 sqlite3 *sqlite3_db_handle(sqlite3_stmt*);
# 6289 "/usr/include/sqlite3.h" 3 4
 const char *sqlite3_db_filename(sqlite3 *db, const char *zDbName);
# 6299 "/usr/include/sqlite3.h" 3 4
 int sqlite3_db_readonly(sqlite3 *db, const char *zDbName);
# 6317 "/usr/include/sqlite3.h" 3 4
 int sqlite3_txn_state(sqlite3*,const char *zSchema);
# 6366 "/usr/include/sqlite3.h" 3 4
 sqlite3_stmt *sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt);
# 6415 "/usr/include/sqlite3.h" 3 4
 void *sqlite3_commit_hook(sqlite3*, int(*)(void*), void*);
 void *sqlite3_rollback_hook(sqlite3*, void(*)(void *), void*);
# 6476 "/usr/include/sqlite3.h" 3 4
 int sqlite3_autovacuum_pages(
  sqlite3 *db,
  unsigned int(*)(void*,const char*,unsigned int,unsigned int,unsigned int),
  void*,
  void(*)(void*)
);
# 6533 "/usr/include/sqlite3.h" 3 4
 void *sqlite3_update_hook(
  sqlite3*,
  void(*)(void *,int ,char const *,char const *,sqlite3_int64),
  void*
);
# 6578 "/usr/include/sqlite3.h" 3 4
 int sqlite3_enable_shared_cache(int);
# 6594 "/usr/include/sqlite3.h" 3 4
 int sqlite3_release_memory(int);
# 6608 "/usr/include/sqlite3.h" 3 4
 int sqlite3_db_release_memory(sqlite3*);
# 6674 "/usr/include/sqlite3.h" 3 4
 sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 N);
 sqlite3_int64 sqlite3_hard_heap_limit64(sqlite3_int64 N);
# 6686 "/usr/include/sqlite3.h" 3 4
 void sqlite3_soft_heap_limit(int N);
# 6758 "/usr/include/sqlite3.h" 3 4
 int sqlite3_table_column_metadata(
  sqlite3 *db,
  const char *zDbName,
  const char *zTableName,
  const char *zColumnName,
  char const **pzDataType,
  char const **pzCollSeq,
  int *pNotNull,
  int *pPrimaryKey,
  int *pAutoinc
);
# 6814 "/usr/include/sqlite3.h" 3 4
 int sqlite3_load_extension(
  sqlite3 *db,
  const char *zFile,
  const char *zProc,
  char **pzErrMsg
);
# 6846 "/usr/include/sqlite3.h" 3 4
 int sqlite3_enable_load_extension(sqlite3 *db, int onoff);
# 6884 "/usr/include/sqlite3.h" 3 4
 int sqlite3_auto_extension(void(*xEntryPoint)(void));
# 6896 "/usr/include/sqlite3.h" 3 4
 int sqlite3_cancel_auto_extension(void(*xEntryPoint)(void));







 void sqlite3_reset_auto_extension(void);
# 6918 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_vtab sqlite3_vtab;
typedef struct sqlite3_index_info sqlite3_index_info;
typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor;
typedef struct sqlite3_module sqlite3_module;
# 6939 "/usr/include/sqlite3.h" 3 4
struct sqlite3_module {
  int iVersion;
  int (*xCreate)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xConnect)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xBestIndex)(sqlite3_vtab *pVTab, sqlite3_index_info*);
  int (*xDisconnect)(sqlite3_vtab *pVTab);
  int (*xDestroy)(sqlite3_vtab *pVTab);
  int (*xOpen)(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor);
  int (*xClose)(sqlite3_vtab_cursor*);
  int (*xFilter)(sqlite3_vtab_cursor*, int idxNum, const char *idxStr,
                int argc, sqlite3_value **argv);
  int (*xNext)(sqlite3_vtab_cursor*);
  int (*xEof)(sqlite3_vtab_cursor*);
  int (*xColumn)(sqlite3_vtab_cursor*, sqlite3_context*, int);
  int (*xRowid)(sqlite3_vtab_cursor*, sqlite3_int64 *pRowid);
  int (*xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *);
  int (*xBegin)(sqlite3_vtab *pVTab);
  int (*xSync)(sqlite3_vtab *pVTab);
  int (*xCommit)(sqlite3_vtab *pVTab);
  int (*xRollback)(sqlite3_vtab *pVTab);
  int (*xFindFunction)(sqlite3_vtab *pVtab, int nArg, const char *zName,
                       void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
                       void **ppArg);
  int (*xRename)(sqlite3_vtab *pVtab, const char *zNew);


  int (*xSavepoint)(sqlite3_vtab *pVTab, int);
  int (*xRelease)(sqlite3_vtab *pVTab, int);
  int (*xRollbackTo)(sqlite3_vtab *pVTab, int);


  int (*xShadowName)(const char*);
};
# 7079 "/usr/include/sqlite3.h" 3 4
struct sqlite3_index_info {

  int nConstraint;
  struct sqlite3_index_constraint {
     int iColumn;
     unsigned char op;
     unsigned char usable;
     int iTermOffset;
  } *aConstraint;
  int nOrderBy;
  struct sqlite3_index_orderby {
     int iColumn;
     unsigned char desc;
  } *aOrderBy;

  struct sqlite3_index_constraint_usage {
    int argvIndex;
    unsigned char omit;
  } *aConstraintUsage;
  int idxNum;
  char *idxStr;
  int needToFreeIdxStr;
  int orderByConsumed;
  double estimatedCost;

  sqlite3_int64 estimatedRows;

  int idxFlags;

  sqlite3_uint64 colUsed;
};
# 7176 "/usr/include/sqlite3.h" 3 4
 int sqlite3_create_module(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData
);
 int sqlite3_create_module_v2(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData,
  void(*xDestroy)(void*)
);
# 7202 "/usr/include/sqlite3.h" 3 4
 int sqlite3_drop_modules(
  sqlite3 *db,
  const char **azKeep
);
# 7225 "/usr/include/sqlite3.h" 3 4
struct sqlite3_vtab {
  const sqlite3_module *pModule;
  int nRef;
  char *zErrMsg;

};
# 7249 "/usr/include/sqlite3.h" 3 4
struct sqlite3_vtab_cursor {
  sqlite3_vtab *pVtab;

};
# 7262 "/usr/include/sqlite3.h" 3 4
 int sqlite3_declare_vtab(sqlite3*, const char *zSQL);
# 7281 "/usr/include/sqlite3.h" 3 4
 int sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
# 7305 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_blob sqlite3_blob;
# 7390 "/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_open(
  sqlite3*,
  const char *zDb,
  const char *zTable,
  const char *zColumn,
  sqlite3_int64 iRow,
  int flags,
  sqlite3_blob **ppBlob
);
# 7423 "/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_reopen(sqlite3_blob *, sqlite3_int64);
# 7446 "/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_close(sqlite3_blob *);
# 7462 "/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_bytes(sqlite3_blob *);
# 7491 "/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
# 7533 "/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
# 7564 "/usr/include/sqlite3.h" 3 4
 sqlite3_vfs *sqlite3_vfs_find(const char *zVfsName);
 int sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
 int sqlite3_vfs_unregister(sqlite3_vfs*);
# 7682 "/usr/include/sqlite3.h" 3 4
 sqlite3_mutex *sqlite3_mutex_alloc(int);
 void sqlite3_mutex_free(sqlite3_mutex*);
 void sqlite3_mutex_enter(sqlite3_mutex*);
 int sqlite3_mutex_try(sqlite3_mutex*);
 void sqlite3_mutex_leave(sqlite3_mutex*);
# 7753 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_mutex_methods sqlite3_mutex_methods;
struct sqlite3_mutex_methods {
  int (*xMutexInit)(void);
  int (*xMutexEnd)(void);
  sqlite3_mutex *(*xMutexAlloc)(int);
  void (*xMutexFree)(sqlite3_mutex *);
  void (*xMutexEnter)(sqlite3_mutex *);
  int (*xMutexTry)(sqlite3_mutex *);
  void (*xMutexLeave)(sqlite3_mutex *);
  int (*xMutexHeld)(sqlite3_mutex *);
  int (*xMutexNotheld)(sqlite3_mutex *);
};
# 7796 "/usr/include/sqlite3.h" 3 4
 int sqlite3_mutex_held(sqlite3_mutex*);
 int sqlite3_mutex_notheld(sqlite3_mutex*);
# 7841 "/usr/include/sqlite3.h" 3 4
 sqlite3_mutex *sqlite3_db_mutex(sqlite3*);
# 7884 "/usr/include/sqlite3.h" 3 4
 int sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
# 7903 "/usr/include/sqlite3.h" 3 4
 int sqlite3_test_control(int op, ...);
# 7996 "/usr/include/sqlite3.h" 3 4
 int sqlite3_keyword_count(void);
 int sqlite3_keyword_name(int,const char**,int*);
 int sqlite3_keyword_check(const char*,int);
# 8016 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_str sqlite3_str;
# 8043 "/usr/include/sqlite3.h" 3 4
 sqlite3_str *sqlite3_str_new(sqlite3*);
# 8058 "/usr/include/sqlite3.h" 3 4
 char *sqlite3_str_finish(sqlite3_str*);
# 8092 "/usr/include/sqlite3.h" 3 4
 void sqlite3_str_appendf(sqlite3_str*, const char *zFormat, ...);
 void sqlite3_str_vappendf(sqlite3_str*, const char *zFormat, va_list);
 void sqlite3_str_append(sqlite3_str*, const char *zIn, int N);
 void sqlite3_str_appendall(sqlite3_str*, const char *zIn);
 void sqlite3_str_appendchar(sqlite3_str*, int N, char C);
 void sqlite3_str_reset(sqlite3_str*);
# 8128 "/usr/include/sqlite3.h" 3 4
 int sqlite3_str_errcode(sqlite3_str*);
 int sqlite3_str_length(sqlite3_str*);
 char *sqlite3_str_value(sqlite3_str*);
# 8158 "/usr/include/sqlite3.h" 3 4
 int sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag);
 int sqlite3_status64(
  int op,
  sqlite3_int64 *pCurrent,
  sqlite3_int64 *pHighwater,
  int resetFlag
);
# 8268 "/usr/include/sqlite3.h" 3 4
 int sqlite3_db_status(sqlite3*, int op, int *pCur, int *pHiwtr, int resetFlg);
# 8421 "/usr/include/sqlite3.h" 3 4
 int sqlite3_stmt_status(sqlite3_stmt*, int op,int resetFlg);
# 8497 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_pcache sqlite3_pcache;
# 8509 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_pcache_page sqlite3_pcache_page;
struct sqlite3_pcache_page {
  void *pBuf;
  void *pExtra;
};
# 8674 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_pcache_methods2 sqlite3_pcache_methods2;
struct sqlite3_pcache_methods2 {
  int iVersion;
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int szExtra, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  sqlite3_pcache_page *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, sqlite3_pcache_page*, int discard);
  void (*xRekey)(sqlite3_pcache*, sqlite3_pcache_page*,
      unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
  void (*xShrink)(sqlite3_pcache*);
};






typedef struct sqlite3_pcache_methods sqlite3_pcache_methods;
struct sqlite3_pcache_methods {
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  void *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, void*, int discard);
  void (*xRekey)(sqlite3_pcache*, void*, unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
};
# 8723 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_backup sqlite3_backup;
# 8911 "/usr/include/sqlite3.h" 3 4
 sqlite3_backup *sqlite3_backup_init(
  sqlite3 *pDest,
  const char *zDestName,
  sqlite3 *pSource,
  const char *zSourceName
);
 int sqlite3_backup_step(sqlite3_backup *p, int nPage);
 int sqlite3_backup_finish(sqlite3_backup *p);
 int sqlite3_backup_remaining(sqlite3_backup *p);
 int sqlite3_backup_pagecount(sqlite3_backup *p);
# 9037 "/usr/include/sqlite3.h" 3 4
 int sqlite3_unlock_notify(
  sqlite3 *pBlocked,
  void (*xNotify)(void **apArg, int nArg),
  void *pNotifyArg
);
# 9052 "/usr/include/sqlite3.h" 3 4
 int sqlite3_stricmp(const char *, const char *);
 int sqlite3_strnicmp(const char *, const char *, int);
# 9070 "/usr/include/sqlite3.h" 3 4
 int sqlite3_strglob(const char *zGlob, const char *zStr);
# 9093 "/usr/include/sqlite3.h" 3 4
 int sqlite3_strlike(const char *zGlob, const char *zStr, unsigned int cEsc);
# 9116 "/usr/include/sqlite3.h" 3 4
 void sqlite3_log(int iErrCode, const char *zFormat, ...);
# 9153 "/usr/include/sqlite3.h" 3 4
 void *sqlite3_wal_hook(
  sqlite3*,
  int(*)(void *,sqlite3*,const char*,int),
  void*
);
# 9188 "/usr/include/sqlite3.h" 3 4
 int sqlite3_wal_autocheckpoint(sqlite3 *db, int N);
# 9210 "/usr/include/sqlite3.h" 3 4
 int sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb);
# 9304 "/usr/include/sqlite3.h" 3 4
 int sqlite3_wal_checkpoint_v2(
  sqlite3 *db,
  const char *zDb,
  int eMode,
  int *pnLog,
  int *pnCkpt
);
# 9344 "/usr/include/sqlite3.h" 3 4
 int sqlite3_vtab_config(sqlite3*, int op, ...);
# 9422 "/usr/include/sqlite3.h" 3 4
 int sqlite3_vtab_on_conflict(sqlite3 *);
# 9448 "/usr/include/sqlite3.h" 3 4
 int sqlite3_vtab_nochange(sqlite3_context*);
# 9463 "/usr/include/sqlite3.h" 3 4
 const char *sqlite3_vtab_collation(sqlite3_index_info*,int);
# 9568 "/usr/include/sqlite3.h" 3 4
 int sqlite3_stmt_scanstatus(
  sqlite3_stmt *pStmt,
  int idx,
  int iScanStatusOp,
  void *pOut
);
# 9584 "/usr/include/sqlite3.h" 3 4
 void sqlite3_stmt_scanstatus_reset(sqlite3_stmt*);
# 9617 "/usr/include/sqlite3.h" 3 4
 int sqlite3_db_cacheflush(sqlite3*);
# 9743 "/usr/include/sqlite3.h" 3 4
 int sqlite3_system_errno(sqlite3*);
# 9765 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_snapshot {
  unsigned char hidden[48];
} sqlite3_snapshot;
# 9812 "/usr/include/sqlite3.h" 3 4
 int sqlite3_snapshot_get(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot **ppSnapshot
);
# 9861 "/usr/include/sqlite3.h" 3 4
 int sqlite3_snapshot_open(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot *pSnapshot
);
# 9878 "/usr/include/sqlite3.h" 3 4
 void sqlite3_snapshot_free(sqlite3_snapshot*);
# 9905 "/usr/include/sqlite3.h" 3 4
 int sqlite3_snapshot_cmp(
  sqlite3_snapshot *p1,
  sqlite3_snapshot *p2
);
# 9933 "/usr/include/sqlite3.h" 3 4
 int sqlite3_snapshot_recover(sqlite3 *db, const char *zDb);
# 9971 "/usr/include/sqlite3.h" 3 4
 unsigned char *sqlite3_serialize(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_int64 *piSize,
  unsigned int mFlags
);
# 10027 "/usr/include/sqlite3.h" 3 4
 int sqlite3_deserialize(
  sqlite3 *db,
  const char *zSchema,
  unsigned char *pData,
  sqlite3_int64 szDb,
  sqlite3_int64 szBuf,
  unsigned mFlags
);
# 10096 "/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;







  typedef double sqlite3_rtree_dbl;
# 10114 "/usr/include/sqlite3.h" 3 4
 int sqlite3_rtree_geometry_callback(
  sqlite3 *db,
  const char *zGeom,
  int (*xGeom)(sqlite3_rtree_geometry*, int, sqlite3_rtree_dbl*,int*),
  void *pContext
);






struct sqlite3_rtree_geometry {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void *);
};







 int sqlite3_rtree_query_callback(
  sqlite3 *db,
  const char *zQueryFunc,
  int (*xQueryFunc)(sqlite3_rtree_query_info*),
  void *pContext,
  void (*xDestructor)(void*)
);
# 10158 "/usr/include/sqlite3.h" 3 4
struct sqlite3_rtree_query_info {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void*);
  sqlite3_rtree_dbl *aCoord;
  unsigned int *anQueue;
  int nCoord;
  int iLevel;
  int mxLevel;
  sqlite3_int64 iRowid;
  sqlite3_rtree_dbl rParentScore;
  int eParentWithin;
  int eWithin;
  sqlite3_rtree_dbl rScore;

  sqlite3_value **apSqlParam;
};
# 11952 "/usr/include/sqlite3.h" 3 4
typedef struct Fts5ExtensionApi Fts5ExtensionApi;
typedef struct Fts5Context Fts5Context;
typedef struct Fts5PhraseIter Fts5PhraseIter;

typedef void (*fts5_extension_function)(
  const Fts5ExtensionApi *pApi,
  Fts5Context *pFts,
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
);

struct Fts5PhraseIter {
  const unsigned char *a;
  const unsigned char *b;
};
# 12180 "/usr/include/sqlite3.h" 3 4
struct Fts5ExtensionApi {
  int iVersion;

  void *(*xUserData)(Fts5Context*);

  int (*xColumnCount)(Fts5Context*);
  int (*xRowCount)(Fts5Context*, sqlite3_int64 *pnRow);
  int (*xColumnTotalSize)(Fts5Context*, int iCol, sqlite3_int64 *pnToken);

  int (*xTokenize)(Fts5Context*,
    const char *pText, int nText,
    void *pCtx,
    int (*xToken)(void*, int, const char*, int, int, int)
  );

  int (*xPhraseCount)(Fts5Context*);
  int (*xPhraseSize)(Fts5Context*, int iPhrase);

  int (*xInstCount)(Fts5Context*, int *pnInst);
  int (*xInst)(Fts5Context*, int iIdx, int *piPhrase, int *piCol, int *piOff);

  sqlite3_int64 (*xRowid)(Fts5Context*);
  int (*xColumnText)(Fts5Context*, int iCol, const char **pz, int *pn);
  int (*xColumnSize)(Fts5Context*, int iCol, int *pnToken);

  int (*xQueryPhrase)(Fts5Context*, int iPhrase, void *pUserData,
    int(*)(const Fts5ExtensionApi*,Fts5Context*,void*)
  );
  int (*xSetAuxdata)(Fts5Context*, void *pAux, void(*xDelete)(void*));
  void *(*xGetAuxdata)(Fts5Context*, int bClear);

  int (*xPhraseFirst)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*, int*);
  void (*xPhraseNext)(Fts5Context*, Fts5PhraseIter*, int *piCol, int *piOff);

  int (*xPhraseFirstColumn)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*);
  void (*xPhraseNextColumn)(Fts5Context*, Fts5PhraseIter*, int *piCol);
};
# 12414 "/usr/include/sqlite3.h" 3 4
typedef struct Fts5Tokenizer Fts5Tokenizer;
typedef struct fts5_tokenizer fts5_tokenizer;
struct fts5_tokenizer {
  int (*xCreate)(void*, const char **azArg, int nArg, Fts5Tokenizer **ppOut);
  void (*xDelete)(Fts5Tokenizer*);
  int (*xTokenize)(Fts5Tokenizer*,
      void *pCtx,
      int flags,
      const char *pText, int nText,
      int (*xToken)(
        void *pCtx,
        int tflags,
        const char *pToken,
        int nToken,
        int iStart,
        int iEnd
      )
  );
};
# 12451 "/usr/include/sqlite3.h" 3 4
typedef struct fts5_api fts5_api;
struct fts5_api {
  int iVersion;


  int (*xCreateTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_tokenizer *pTokenizer,
    void (*xDestroy)(void*)
  );


  int (*xFindTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void **ppContext,
    fts5_tokenizer *pTokenizer
  );


  int (*xCreateFunction)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_extension_function xFunction,
    void (*xDestroy)(void*)
  );
};
# 5 "../fs/fake-db.h" 2
# 1 "../fs/fix_path.h" 1




# 4 "../fs/fix_path.h"
static inline const char *fix_path(const char *path) {
    if (path[0] == '\0')
        return ".";
    if (path[0] == '/')
        path++;
    return path;
}
# 6 "../fs/fake-db.h" 2
# 1 "../misc.h" 1






# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4




# 69 "/usr/include/assert.h" 3 4
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 8 "../misc.h" 2

# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdnoreturn.h" 1 3 4
# 10 "../misc.h" 2
# 83 "../misc.h"

# 83 "../misc.h"
static inline void __use(int dummy __attribute__((unused)), ...) {}
# 105 "../misc.h"
typedef int64_t sqword_t;
typedef uint64_t qword_t;
typedef uint32_t dword_t;
typedef int32_t sdword_t;
typedef uint16_t word_t;
typedef uint8_t byte_t;

typedef dword_t addr_t;
typedef dword_t uint_t;
typedef sdword_t int_t;

typedef sdword_t pid_t_;
typedef dword_t uid_t_;
typedef word_t mode_t_;
typedef sqword_t off_t_;
typedef dword_t time_t_;
typedef dword_t clock_t_;
# 7 "../fs/fake-db.h" 2

struct fakefs_db {
    sqlite3 *db;
    struct {
        sqlite3_stmt *begin;
        sqlite3_stmt *commit;
        sqlite3_stmt *rollback;
        sqlite3_stmt *path_get_inode;
        sqlite3_stmt *path_read_stat;
        sqlite3_stmt *path_create_stat;
        sqlite3_stmt *path_create_path;
        sqlite3_stmt *inode_read_stat;
        sqlite3_stmt *inode_write_stat;
        sqlite3_stmt *path_link;
        sqlite3_stmt *path_unlink;
        sqlite3_stmt *path_rename;
        sqlite3_stmt *path_from_inode;
        sqlite3_stmt *try_cleanup_inode;
    } stmt;
    sqlite3_mutex *lock;
};

int fake_db_init(struct fakefs_db *fs, const char *db_path, int root_fd);
int fake_db_deinit(struct fakefs_db *fs);

void db_begin(struct fakefs_db *fs);
void db_commit(struct fakefs_db *fs);
void db_rollback(struct fakefs_db *fs);


# 36 "../fs/fake-db.h" 3 4
_Bool 
# 36 "../fs/fake-db.h"
    db_exec(struct fakefs_db *fs, sqlite3_stmt *stmt);
void db_reset(struct fakefs_db *fs, sqlite3_stmt *stmt);
void db_exec_reset(struct fakefs_db *fs, sqlite3_stmt *stmt);

struct ish_stat {
    uint32_t mode;
    uint32_t uid;
    uint32_t gid;
    uint32_t rdev;
};

typedef uint64_t inode_t;

inode_t path_get_inode(struct fakefs_db *fs, const char *path);

# 50 "../fs/fake-db.h" 3 4
_Bool 
# 50 "../fs/fake-db.h"
    path_read_stat(struct fakefs_db *fs, const char *path, struct ish_stat *stat, uint64_t *inode);
inode_t path_create(struct fakefs_db *fs, const char *path, struct ish_stat *stat);

void inode_read_stat(struct fakefs_db *fs, inode_t inode, struct ish_stat *stat);
void inode_write_stat(struct fakefs_db *fs, inode_t inode, struct ish_stat *stat);

void path_link(struct fakefs_db *fs, const char *src, const char *dst);
inode_t path_unlink(struct fakefs_db *fs, const char *path);
void path_rename(struct fakefs_db *fs, const char *src, const char *dst);
# 13 "../tools/fakefs.c" 2
# 1 "../fs/sqlutil.h" 1


# 1 "/usr/include/sqlite3.h" 1 3 4
# 4 "../fs/sqlutil.h" 2
# 14 "../tools/fakefs.c" 2
# 1 "../tools/fakefs.h" 1




struct fakefsify_error {
    int line;
    enum {
        ERR_ARCHIVE,
        ERR_SQLITE,
        ERR_POSIX,
        ERR_CANCELLED,
    } type;
    int code;
    char *message;
};

struct progress {
    void *cookie;
    void (*callback)(void *cookie, double progress, const char *message, 
# 19 "../tools/fakefs.h" 3 4
                                                                        _Bool 
# 19 "../tools/fakefs.h"
                                                                             *cancel_out);
};


# 22 "../tools/fakefs.h" 3 4
_Bool 
# 22 "../tools/fakefs.h"
    fakefs_import(const char *archive_path, const char *fs, struct fakefsify_error *err_out, struct progress progress);

# 23 "../tools/fakefs.h" 3 4
_Bool 
# 23 "../tools/fakefs.h"
    fakefs_export(const char *fs, const char *archive_path, struct fakefsify_error *err_out, struct progress progress);
# 15 "../tools/fakefs.c" 2
# 35 "../tools/fakefs.c"
static 
# 35 "../tools/fakefs.c" 3 4
      _Bool 
# 35 "../tools/fakefs.c"
           progress_update(struct progress *p, double progress, const char *message) {
    
# 36 "../tools/fakefs.c" 3 4
   _Bool 
# 36 "../tools/fakefs.c"
        cancelled = 
# 36 "../tools/fakefs.c" 3 4
                    0
# 36 "../tools/fakefs.c"
                         ;
    if (p && p->callback)
        p->callback(p->cookie, progress, message, &cancelled);
    return !cancelled;
}




static 
# 45 "../tools/fakefs.c" 3 4
      _Bool 
# 45 "../tools/fakefs.c"
           path_normalize(const char *path, char *out) {



    while (path[0] != '\0') {
        while (path[0] == '/')
            path++;
        if (path[0] == '\0')
            break;

        if (path[0] == '.' && path[1] == '.' && (path[2] == '\0' || path[2] == '/'))
            return 
# 56 "../tools/fakefs.c" 3 4
                  0
# 56 "../tools/fakefs.c"
                       ;
        if (path[0] == '.' && (path[1] == '\0' || path[1] == '/')) {
            path++;
        } else {
            *out++ = '/';
            while (path[0] != '/' && path[0] != '\0')
                *out++ = *path++;
        }
    }
    *out = '\0';
    return 
# 66 "../tools/fakefs.c" 3 4
          1
# 66 "../tools/fakefs.c"
              ;
}

static const char *schema = "create table meta (id integer unique default 0, db_inode integer); insert into meta (db_inode) values (0); create table stats (inode integer primary key, stat blob); create table paths (path blob primary key, inode integer references stats(inode)); create index inode_to_path on paths (inode, path); pragma user_version=3;"







 ;


# 79 "../tools/fakefs.c" 3 4
_Bool 
# 79 "../tools/fakefs.c"
    fakefs_import(const char *archive_path, const char *fs, struct fakefsify_error *err_out, struct progress p) {
    int err = mkdir(fs, 0777);
    if (err < 0)
        do { err_out->line = 82; err_out->type = ERR_POSIX; err_out->code = 
# 82 "../tools/fakefs.c" 3 4
       (*__errno_location ())
# 82 "../tools/fakefs.c"
       ; err_out->message = strdup(strerror(
# 82 "../tools/fakefs.c" 3 4
       (*__errno_location ())
# 82 "../tools/fakefs.c"
       )); return 
# 82 "../tools/fakefs.c" 3 4
       0
# 82 "../tools/fakefs.c"
       ; } while (0);


    char path_tmp[
# 85 "../tools/fakefs.c" 3 4
                 4096
# 85 "../tools/fakefs.c"
                         ];
    snprintf(path_tmp, sizeof(path_tmp), "%s/data", fs);
    err = mkdir(path_tmp, 0777);
    int root_fd = open(path_tmp, 
# 88 "../tools/fakefs.c" 3 4
                                00
# 88 "../tools/fakefs.c"
                                        );
    if (root_fd < 0)
        do { err_out->line = 90; err_out->type = ERR_POSIX; err_out->code = 
# 90 "../tools/fakefs.c" 3 4
       (*__errno_location ())
# 90 "../tools/fakefs.c"
       ; err_out->message = strdup(strerror(
# 90 "../tools/fakefs.c" 3 4
       (*__errno_location ())
# 90 "../tools/fakefs.c"
       )); return 
# 90 "../tools/fakefs.c" 3 4
       0
# 90 "../tools/fakefs.c"
       ; } while (0);


    snprintf(path_tmp, sizeof(path_tmp), "%s/meta.db", fs);
    sqlite3 *db;
    err = sqlite3_open_v2(path_tmp, &db, 
# 95 "../tools/fakefs.c" 3 4
                                        0x00000002 
# 95 "../tools/fakefs.c"
                                                              | 
# 95 "../tools/fakefs.c" 3 4
                                                                0x00000004
# 95 "../tools/fakefs.c"
                                                                                  , 
# 95 "../tools/fakefs.c" 3 4
                                                                                    ((void *)0)
# 95 "../tools/fakefs.c"
                                                                                        );
    if (err != 
# 96 "../tools/fakefs.c" 3 4
   0 
# 96 "../tools/fakefs.c"
   && err != 
# 96 "../tools/fakefs.c" 3 4
   100 
# 96 "../tools/fakefs.c"
   && err != 
# 96 "../tools/fakefs.c" 3 4
   101
# 96 "../tools/fakefs.c"
   ) do { err_out->line = 96; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 96 "../tools/fakefs.c" 3 4
   0
# 96 "../tools/fakefs.c"
   ; } while (0);
    err = sqlite3_exec(db, "pragma journal_mode=wal", 
# 97 "../tools/fakefs.c" 3 4
   ((void *)0)
# 97 "../tools/fakefs.c"
   , 
# 97 "../tools/fakefs.c" 3 4
   ((void *)0)
# 97 "../tools/fakefs.c"
   , 
# 97 "../tools/fakefs.c" 3 4
   ((void *)0)
# 97 "../tools/fakefs.c"
   ); if (err != 
# 97 "../tools/fakefs.c" 3 4
   0 
# 97 "../tools/fakefs.c"
   && err != 
# 97 "../tools/fakefs.c" 3 4
   100 
# 97 "../tools/fakefs.c"
   && err != 
# 97 "../tools/fakefs.c" 3 4
   101
# 97 "../tools/fakefs.c"
   ) do { err_out->line = 97; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 97 "../tools/fakefs.c" 3 4
   0
# 97 "../tools/fakefs.c"
   ; } while (0);
    err = sqlite3_exec(db, "begin", 
# 98 "../tools/fakefs.c" 3 4
   ((void *)0)
# 98 "../tools/fakefs.c"
   , 
# 98 "../tools/fakefs.c" 3 4
   ((void *)0)
# 98 "../tools/fakefs.c"
   , 
# 98 "../tools/fakefs.c" 3 4
   ((void *)0)
# 98 "../tools/fakefs.c"
   ); if (err != 
# 98 "../tools/fakefs.c" 3 4
   0 
# 98 "../tools/fakefs.c"
   && err != 
# 98 "../tools/fakefs.c" 3 4
   100 
# 98 "../tools/fakefs.c"
   && err != 
# 98 "../tools/fakefs.c" 3 4
   101
# 98 "../tools/fakefs.c"
   ) do { err_out->line = 98; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 98 "../tools/fakefs.c" 3 4
   0
# 98 "../tools/fakefs.c"
   ; } while (0);;
    err = sqlite3_exec(db, schema, 
# 99 "../tools/fakefs.c" 3 4
   ((void *)0)
# 99 "../tools/fakefs.c"
   , 
# 99 "../tools/fakefs.c" 3 4
   ((void *)0)
# 99 "../tools/fakefs.c"
   , 
# 99 "../tools/fakefs.c" 3 4
   ((void *)0)
# 99 "../tools/fakefs.c"
   ); if (err != 
# 99 "../tools/fakefs.c" 3 4
   0 
# 99 "../tools/fakefs.c"
   && err != 
# 99 "../tools/fakefs.c" 3 4
   100 
# 99 "../tools/fakefs.c"
   && err != 
# 99 "../tools/fakefs.c" 3 4
   101
# 99 "../tools/fakefs.c"
   ) do { err_out->line = 99; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 99 "../tools/fakefs.c" 3 4
   0
# 99 "../tools/fakefs.c"
   ; } while (0);;


    struct archive *archive = archive_read_new();
    if (archive == 
# 103 "../tools/fakefs.c" 3 4
                  ((void *)0)
# 103 "../tools/fakefs.c"
                      )
        do { err_out->line = 104; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 104 "../tools/fakefs.c" 3 4
       0
# 104 "../tools/fakefs.c"
       ; } while (0);
    archive_read_support_filter_gzip(archive);
    archive_read_support_format_tar(archive);
    if (archive_read_open_filename(archive, archive_path, 65536) != 
# 107 "../tools/fakefs.c" 3 4
                                                                   0
# 107 "../tools/fakefs.c"
                                                                             )
        do { err_out->line = 108; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 108 "../tools/fakefs.c" 3 4
       0
# 108 "../tools/fakefs.c"
       ; } while (0);

    struct stat real_stat;
    if (stat(archive_path, &real_stat) < 0)
        do { err_out->line = 112; err_out->type = ERR_POSIX; err_out->code = 
# 112 "../tools/fakefs.c" 3 4
       (*__errno_location ())
# 112 "../tools/fakefs.c"
       ; err_out->message = strdup(strerror(
# 112 "../tools/fakefs.c" 3 4
       (*__errno_location ())
# 112 "../tools/fakefs.c"
       )); return 
# 112 "../tools/fakefs.c" 3 4
       0
# 112 "../tools/fakefs.c"
       ; } while (0);
    size_t archive_bytes = real_stat.st_size;

    sqlite3_stmt *insert_stat = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "insert into stats (stat) values (?)", -1, &stmt, 
# 115 "../tools/fakefs.c" 3 4
                               ((void *)0)
# 115 "../tools/fakefs.c"
                               ); if (err != 
# 115 "../tools/fakefs.c" 3 4
                               0 
# 115 "../tools/fakefs.c"
                               && err != 
# 115 "../tools/fakefs.c" 3 4
                               100 
# 115 "../tools/fakefs.c"
                               && err != 
# 115 "../tools/fakefs.c" 3 4
                               101
# 115 "../tools/fakefs.c"
                               ) do { err_out->line = 115; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 115 "../tools/fakefs.c" 3 4
                               0
# 115 "../tools/fakefs.c"
                               ; } while (0); stmt; });
    sqlite3_stmt *insert_path = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "insert or replace into paths values (?, ?)", -1, &stmt, 
# 116 "../tools/fakefs.c" 3 4
                               ((void *)0)
# 116 "../tools/fakefs.c"
                               ); if (err != 
# 116 "../tools/fakefs.c" 3 4
                               0 
# 116 "../tools/fakefs.c"
                               && err != 
# 116 "../tools/fakefs.c" 3 4
                               100 
# 116 "../tools/fakefs.c"
                               && err != 
# 116 "../tools/fakefs.c" 3 4
                               101
# 116 "../tools/fakefs.c"
                               ) do { err_out->line = 116; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 116 "../tools/fakefs.c" 3 4
                               0
# 116 "../tools/fakefs.c"
                               ; } while (0); stmt; });
    sqlite3_stmt *insert_hardlink = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "insert or replace into paths values (?, (select inode from paths where path = ? limit 1))", -1, &stmt, 
# 117 "../tools/fakefs.c" 3 4
                                   ((void *)0)
# 117 "../tools/fakefs.c"
                                   ); if (err != 
# 117 "../tools/fakefs.c" 3 4
                                   0 
# 117 "../tools/fakefs.c"
                                   && err != 
# 117 "../tools/fakefs.c" 3 4
                                   100 
# 117 "../tools/fakefs.c"
                                   && err != 
# 117 "../tools/fakefs.c" 3 4
                                   101
# 117 "../tools/fakefs.c"
                                   ) do { err_out->line = 117; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 117 "../tools/fakefs.c" 3 4
                                   0
# 117 "../tools/fakefs.c"
                                   ; } while (0); stmt; });

    
# 119 "../tools/fakefs.c" 3 4
   _Bool 
# 119 "../tools/fakefs.c"
        archive_has_root = 
# 119 "../tools/fakefs.c" 3 4
                           0
# 119 "../tools/fakefs.c"
                                ;


    struct archive_entry *entry;
    while ((err = archive_read_next_header(archive, &entry)) == 
# 123 "../tools/fakefs.c" 3 4
                                                               0
# 123 "../tools/fakefs.c"
                                                                         ) {
        char entry_path[4096];
        if (!path_normalize(archive_entry_pathname(entry), entry_path)) {

            fprintf(
# 127 "../tools/fakefs.c" 3 4
                   stderr
# 127 "../tools/fakefs.c"
                         , "warning: skipped possible path traversal %s\n", archive_entry_pathname(entry));
            continue;
        }
        if (!progress_update(&p, (double) archive_filter_bytes(archive, -1) / archive_bytes, entry_path))
            do { err_out->line = 131; err_out->type = ERR_CANCELLED; err_out->code = 0; err_out->message = strdup(""); return 
# 131 "../tools/fakefs.c" 3 4
           0
# 131 "../tools/fakefs.c"
           ; } while (0);;
        if (strcmp(entry_path, "") == 0)
            archive_has_root = 
# 133 "../tools/fakefs.c" 3 4
                              1
# 133 "../tools/fakefs.c"
                                  ;

        const char *hardlink = archive_entry_hardlink(entry);
        if (hardlink) {
            char hardlink_path[4096];
            if (!path_normalize(hardlink, hardlink_path)) {
                fprintf(
# 139 "../tools/fakefs.c" 3 4
                       stderr
# 139 "../tools/fakefs.c"
                             , "warning: almost pwned by hardlink %s\n", hardlink);
                continue;
            }
            if (linkat(root_fd, fix_path(hardlink_path), root_fd, fix_path(entry_path), 0) < 0)
                do { err_out->line = 143; err_out->type = ERR_POSIX; err_out->code = 
# 143 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 143 "../tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 143 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 143 "../tools/fakefs.c"
               )); return 
# 143 "../tools/fakefs.c" 3 4
               0
# 143 "../tools/fakefs.c"
               ; } while (0);
            sqlite3_bind_blob64(insert_hardlink, 1, entry_path, strlen(entry_path), 
# 144 "../tools/fakefs.c" 3 4
                                                                                   ((sqlite3_destructor_type)-1)
# 144 "../tools/fakefs.c"
                                                                                                   );
            sqlite3_bind_blob64(insert_hardlink, 2, hardlink_path, strlen(hardlink_path), 
# 145 "../tools/fakefs.c" 3 4
                                                                                         ((sqlite3_destructor_type)-1)
# 145 "../tools/fakefs.c"
                                                                                                         );
            ({ err = sqlite3_step(insert_hardlink); if (err != 
# 146 "../tools/fakefs.c" 3 4
           0 
# 146 "../tools/fakefs.c"
           && err != 
# 146 "../tools/fakefs.c" 3 4
           100 
# 146 "../tools/fakefs.c"
           && err != 
# 146 "../tools/fakefs.c" 3 4
           101
# 146 "../tools/fakefs.c"
           ) do { err_out->line = 146; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 146 "../tools/fakefs.c" 3 4
           0
# 146 "../tools/fakefs.c"
           ; } while (0); err == 
# 146 "../tools/fakefs.c" 3 4
           100
# 146 "../tools/fakefs.c"
           ; }); err = sqlite3_reset(insert_hardlink); if (err != 
# 146 "../tools/fakefs.c" 3 4
           0 
# 146 "../tools/fakefs.c"
           && err != 
# 146 "../tools/fakefs.c" 3 4
           100 
# 146 "../tools/fakefs.c"
           && err != 
# 146 "../tools/fakefs.c" 3 4
           101
# 146 "../tools/fakefs.c"
           ) do { err_out->line = 146; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 146 "../tools/fakefs.c" 3 4
           0
# 146 "../tools/fakefs.c"
           ; } while (0);
            continue;
        }


        char *entry_path_copy = strdup(entry_path);
        char *slash = entry_path_copy;
        while ((slash = strchr(*slash ? slash + 1 : slash, '/')) != 
# 153 "../tools/fakefs.c" 3 4
                                                                   ((void *)0)
# 153 "../tools/fakefs.c"
                                                                       ) {
            *slash = '\0';
            int err = mkdirat(root_fd, fix_path(entry_path_copy), 0777);
            *slash = '/';
            if (err < 0) {
                if (
# 158 "../tools/fakefs.c" 3 4
                   (*__errno_location ()) 
# 158 "../tools/fakefs.c"
                         == 
# 158 "../tools/fakefs.c" 3 4
                            17
# 158 "../tools/fakefs.c"
                                  ) continue;
                do { err_out->line = 159; err_out->type = ERR_POSIX; err_out->code = 
# 159 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 159 "../tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 159 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 159 "../tools/fakefs.c"
               )); return 
# 159 "../tools/fakefs.c" 3 4
               0
# 159 "../tools/fakefs.c"
               ; } while (0);
            }
        }
        free(entry_path_copy);

        int fd = -1;
        if (archive_entry_filetype(entry) != 
# 165 "../tools/fakefs.c" 3 4
                                            ((mode_t)0040000)
# 165 "../tools/fakefs.c"
                                                    ) {
            fd = openat(root_fd, fix_path(entry_path), 
# 166 "../tools/fakefs.c" 3 4
                                                      01 
# 166 "../tools/fakefs.c"
                                                               | 
# 166 "../tools/fakefs.c" 3 4
                                                                 0100 
# 166 "../tools/fakefs.c"
                                                                         | 
# 166 "../tools/fakefs.c" 3 4
                                                                           01000
# 166 "../tools/fakefs.c"
                                                                                  , 0666);
            if (fd < 0) {
                if (
# 168 "../tools/fakefs.c" 3 4
                   (*__errno_location ()) 
# 168 "../tools/fakefs.c"
                         == 
# 168 "../tools/fakefs.c" 3 4
                            21
# 168 "../tools/fakefs.c"
                                  ) continue;
                do { err_out->line = 169; err_out->type = ERR_POSIX; err_out->code = 
# 169 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 169 "../tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 169 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 169 "../tools/fakefs.c"
               )); return 
# 169 "../tools/fakefs.c" 3 4
               0
# 169 "../tools/fakefs.c"
               ; } while (0);
            }
        }

        switch (archive_entry_filetype(entry)) {
            case 
# 174 "../tools/fakefs.c" 3 4
                ((mode_t)0040000)
# 174 "../tools/fakefs.c"
                        :
                err = mkdirat(root_fd, fix_path(entry_path), 0777);
                if (err < 0 && 
# 176 "../tools/fakefs.c" 3 4
                              (*__errno_location ()) 
# 176 "../tools/fakefs.c"
                                    != 
# 176 "../tools/fakefs.c" 3 4
                                       17
# 176 "../tools/fakefs.c"
                                             )
                    do { err_out->line = 177; err_out->type = ERR_POSIX; err_out->code = 
# 177 "../tools/fakefs.c" 3 4
                   (*__errno_location ())
# 177 "../tools/fakefs.c"
                   ; err_out->message = strdup(strerror(
# 177 "../tools/fakefs.c" 3 4
                   (*__errno_location ())
# 177 "../tools/fakefs.c"
                   )); return 
# 177 "../tools/fakefs.c" 3 4
                   0
# 177 "../tools/fakefs.c"
                   ; } while (0);
                break;
            case 
# 179 "../tools/fakefs.c" 3 4
                ((mode_t)0100000)
# 179 "../tools/fakefs.c"
                        :
                if (archive_read_data_into_fd(archive, fd) != 
# 180 "../tools/fakefs.c" 3 4
                                                             0
# 180 "../tools/fakefs.c"
                                                                       )
                    do { err_out->line = 181; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 181 "../tools/fakefs.c" 3 4
                   0
# 181 "../tools/fakefs.c"
                   ; } while (0);
                break;
            case 
# 183 "../tools/fakefs.c" 3 4
                ((mode_t)0120000)
# 183 "../tools/fakefs.c"
                        :
                err = (int) write(fd, archive_entry_symlink(entry), strlen(archive_entry_symlink(entry)));
                if (err < 0)
                    do { err_out->line = 186; err_out->type = ERR_POSIX; err_out->code = 
# 186 "../tools/fakefs.c" 3 4
                   (*__errno_location ())
# 186 "../tools/fakefs.c"
                   ; err_out->message = strdup(strerror(
# 186 "../tools/fakefs.c" 3 4
                   (*__errno_location ())
# 186 "../tools/fakefs.c"
                   )); return 
# 186 "../tools/fakefs.c" 3 4
                   0
# 186 "../tools/fakefs.c"
                   ; } while (0);
        }
        if (fd != -1)
            close(fd);

        struct ish_stat stat = {
            .mode = (uint32_t) archive_entry_mode(entry),
            .uid = (uint32_t) archive_entry_uid(entry),
            .gid = (uint32_t) archive_entry_gid(entry),
            .rdev = (uint32_t) archive_entry_rdev(entry),
        };
        sqlite3_bind_blob64(insert_stat, 1, &stat, sizeof(stat), 
# 197 "../tools/fakefs.c" 3 4
                                                                ((sqlite3_destructor_type)-1)
# 197 "../tools/fakefs.c"
                                                                                );
        ({ err = sqlite3_step(insert_stat); if (err != 
# 198 "../tools/fakefs.c" 3 4
       0 
# 198 "../tools/fakefs.c"
       && err != 
# 198 "../tools/fakefs.c" 3 4
       100 
# 198 "../tools/fakefs.c"
       && err != 
# 198 "../tools/fakefs.c" 3 4
       101
# 198 "../tools/fakefs.c"
       ) do { err_out->line = 198; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 198 "../tools/fakefs.c" 3 4
       0
# 198 "../tools/fakefs.c"
       ; } while (0); err == 
# 198 "../tools/fakefs.c" 3 4
       100
# 198 "../tools/fakefs.c"
       ; }); err = sqlite3_reset(insert_stat); if (err != 
# 198 "../tools/fakefs.c" 3 4
       0 
# 198 "../tools/fakefs.c"
       && err != 
# 198 "../tools/fakefs.c" 3 4
       100 
# 198 "../tools/fakefs.c"
       && err != 
# 198 "../tools/fakefs.c" 3 4
       101
# 198 "../tools/fakefs.c"
       ) do { err_out->line = 198; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 198 "../tools/fakefs.c" 3 4
       0
# 198 "../tools/fakefs.c"
       ; } while (0);
        sqlite3_bind_blob64(insert_path, 1, entry_path, strlen(entry_path), 
# 199 "../tools/fakefs.c" 3 4
                                                                           ((sqlite3_destructor_type)-1)
# 199 "../tools/fakefs.c"
                                                                                           );
        sqlite3_bind_int64(insert_path, 2, sqlite3_last_insert_rowid(db));
        ({ err = sqlite3_step(insert_path); if (err != 
# 201 "../tools/fakefs.c" 3 4
       0 
# 201 "../tools/fakefs.c"
       && err != 
# 201 "../tools/fakefs.c" 3 4
       100 
# 201 "../tools/fakefs.c"
       && err != 
# 201 "../tools/fakefs.c" 3 4
       101
# 201 "../tools/fakefs.c"
       ) do { err_out->line = 201; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 201 "../tools/fakefs.c" 3 4
       0
# 201 "../tools/fakefs.c"
       ; } while (0); err == 
# 201 "../tools/fakefs.c" 3 4
       100
# 201 "../tools/fakefs.c"
       ; }); err = sqlite3_reset(insert_path); if (err != 
# 201 "../tools/fakefs.c" 3 4
       0 
# 201 "../tools/fakefs.c"
       && err != 
# 201 "../tools/fakefs.c" 3 4
       100 
# 201 "../tools/fakefs.c"
       && err != 
# 201 "../tools/fakefs.c" 3 4
       101
# 201 "../tools/fakefs.c"
       ) do { err_out->line = 201; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 201 "../tools/fakefs.c" 3 4
       0
# 201 "../tools/fakefs.c"
       ; } while (0);
    }
    if (err != 
# 203 "../tools/fakefs.c" 3 4
              1
# 203 "../tools/fakefs.c"
                         )
        do { err_out->line = 204; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 204 "../tools/fakefs.c" 3 4
       0
# 204 "../tools/fakefs.c"
       ; } while (0);


    if (!archive_has_root) {
        struct ish_stat stat = {.mode = 0755};
        sqlite3_bind_blob64(insert_stat, 1, &stat, sizeof(stat), 
# 209 "../tools/fakefs.c" 3 4
                                                                ((sqlite3_destructor_type)-1)
# 209 "../tools/fakefs.c"
                                                                                );
        ({ err = sqlite3_step(insert_stat); if (err != 
# 210 "../tools/fakefs.c" 3 4
       0 
# 210 "../tools/fakefs.c"
       && err != 
# 210 "../tools/fakefs.c" 3 4
       100 
# 210 "../tools/fakefs.c"
       && err != 
# 210 "../tools/fakefs.c" 3 4
       101
# 210 "../tools/fakefs.c"
       ) do { err_out->line = 210; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 210 "../tools/fakefs.c" 3 4
       0
# 210 "../tools/fakefs.c"
       ; } while (0); err == 
# 210 "../tools/fakefs.c" 3 4
       100
# 210 "../tools/fakefs.c"
       ; }); err = sqlite3_reset(insert_stat); if (err != 
# 210 "../tools/fakefs.c" 3 4
       0 
# 210 "../tools/fakefs.c"
       && err != 
# 210 "../tools/fakefs.c" 3 4
       100 
# 210 "../tools/fakefs.c"
       && err != 
# 210 "../tools/fakefs.c" 3 4
       101
# 210 "../tools/fakefs.c"
       ) do { err_out->line = 210; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 210 "../tools/fakefs.c" 3 4
       0
# 210 "../tools/fakefs.c"
       ; } while (0);
        sqlite3_bind_blob64(insert_path, 1, "", 0, 
# 211 "../tools/fakefs.c" 3 4
                                                  ((sqlite3_destructor_type)-1)
# 211 "../tools/fakefs.c"
                                                                  );
        sqlite3_bind_int64(insert_path, 2, sqlite3_last_insert_rowid(db));
        ({ err = sqlite3_step(insert_path); if (err != 
# 213 "../tools/fakefs.c" 3 4
       0 
# 213 "../tools/fakefs.c"
       && err != 
# 213 "../tools/fakefs.c" 3 4
       100 
# 213 "../tools/fakefs.c"
       && err != 
# 213 "../tools/fakefs.c" 3 4
       101
# 213 "../tools/fakefs.c"
       ) do { err_out->line = 213; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 213 "../tools/fakefs.c" 3 4
       0
# 213 "../tools/fakefs.c"
       ; } while (0); err == 
# 213 "../tools/fakefs.c" 3 4
       100
# 213 "../tools/fakefs.c"
       ; }); err = sqlite3_reset(insert_path); if (err != 
# 213 "../tools/fakefs.c" 3 4
       0 
# 213 "../tools/fakefs.c"
       && err != 
# 213 "../tools/fakefs.c" 3 4
       100 
# 213 "../tools/fakefs.c"
       && err != 
# 213 "../tools/fakefs.c" 3 4
       101
# 213 "../tools/fakefs.c"
       ) do { err_out->line = 213; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 213 "../tools/fakefs.c" 3 4
       0
# 213 "../tools/fakefs.c"
       ; } while (0);
    }

    err = sqlite3_finalize(insert_stat); if (err != 
# 216 "../tools/fakefs.c" 3 4
   0 
# 216 "../tools/fakefs.c"
   && err != 
# 216 "../tools/fakefs.c" 3 4
   100 
# 216 "../tools/fakefs.c"
   && err != 
# 216 "../tools/fakefs.c" 3 4
   101
# 216 "../tools/fakefs.c"
   ) do { err_out->line = 216; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 216 "../tools/fakefs.c" 3 4
   0
# 216 "../tools/fakefs.c"
   ; } while (0);
    err = sqlite3_finalize(insert_path); if (err != 
# 217 "../tools/fakefs.c" 3 4
   0 
# 217 "../tools/fakefs.c"
   && err != 
# 217 "../tools/fakefs.c" 3 4
   100 
# 217 "../tools/fakefs.c"
   && err != 
# 217 "../tools/fakefs.c" 3 4
   101
# 217 "../tools/fakefs.c"
   ) do { err_out->line = 217; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 217 "../tools/fakefs.c" 3 4
   0
# 217 "../tools/fakefs.c"
   ; } while (0);
    err = sqlite3_finalize(insert_hardlink); if (err != 
# 218 "../tools/fakefs.c" 3 4
   0 
# 218 "../tools/fakefs.c"
   && err != 
# 218 "../tools/fakefs.c" 3 4
   100 
# 218 "../tools/fakefs.c"
   && err != 
# 218 "../tools/fakefs.c" 3 4
   101
# 218 "../tools/fakefs.c"
   ) do { err_out->line = 218; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 218 "../tools/fakefs.c" 3 4
   0
# 218 "../tools/fakefs.c"
   ; } while (0);
    err = sqlite3_exec(db, "commit", 
# 219 "../tools/fakefs.c" 3 4
   ((void *)0)
# 219 "../tools/fakefs.c"
   , 
# 219 "../tools/fakefs.c" 3 4
   ((void *)0)
# 219 "../tools/fakefs.c"
   , 
# 219 "../tools/fakefs.c" 3 4
   ((void *)0)
# 219 "../tools/fakefs.c"
   ); if (err != 
# 219 "../tools/fakefs.c" 3 4
   0 
# 219 "../tools/fakefs.c"
   && err != 
# 219 "../tools/fakefs.c" 3 4
   100 
# 219 "../tools/fakefs.c"
   && err != 
# 219 "../tools/fakefs.c" 3 4
   101
# 219 "../tools/fakefs.c"
   ) do { err_out->line = 219; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 219 "../tools/fakefs.c" 3 4
   0
# 219 "../tools/fakefs.c"
   ; } while (0);;
    sqlite3_close(db);
    close(root_fd);

    if (archive_read_free(archive) != 
# 223 "../tools/fakefs.c" 3 4
                                     0
# 223 "../tools/fakefs.c"
                                               )
        do { err_out->line = 224; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 224 "../tools/fakefs.c" 3 4
       0
# 224 "../tools/fakefs.c"
       ; } while (0);
    return 
# 225 "../tools/fakefs.c" 3 4
          1
# 225 "../tools/fakefs.c"
              ;
}


# 228 "../tools/fakefs.c" 3 4
_Bool 
# 228 "../tools/fakefs.c"
    fakefs_export(const char *fs, const char *archive_path, struct fakefsify_error *err_out, struct progress p) {

    struct archive *archive = archive_write_new();
    if (archive == 
# 231 "../tools/fakefs.c" 3 4
                  ((void *)0)
# 231 "../tools/fakefs.c"
                      )
        do { err_out->line = 232; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 232 "../tools/fakefs.c" 3 4
       0
# 232 "../tools/fakefs.c"
       ; } while (0);
    archive_write_add_filter_gzip(archive);
    archive_write_set_format_pax_restricted(archive);
    if (archive_write_open_filename(archive, archive_path) != 
# 235 "../tools/fakefs.c" 3 4
                                                             0
# 235 "../tools/fakefs.c"
                                                                       )
        do { err_out->line = 236; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 236 "../tools/fakefs.c" 3 4
       0
# 236 "../tools/fakefs.c"
       ; } while (0);


    char path_tmp[
# 239 "../tools/fakefs.c" 3 4
                 4096
# 239 "../tools/fakefs.c"
                         ];
    snprintf(path_tmp, sizeof(path_tmp), "%s/data", fs);
    int root_fd = open(path_tmp, 
# 241 "../tools/fakefs.c" 3 4
                                00
# 241 "../tools/fakefs.c"
                                        );
    if (root_fd < 0)
        do { err_out->line = 243; err_out->type = ERR_POSIX; err_out->code = 
# 243 "../tools/fakefs.c" 3 4
       (*__errno_location ())
# 243 "../tools/fakefs.c"
       ; err_out->message = strdup(strerror(
# 243 "../tools/fakefs.c" 3 4
       (*__errno_location ())
# 243 "../tools/fakefs.c"
       )); return 
# 243 "../tools/fakefs.c" 3 4
       0
# 243 "../tools/fakefs.c"
       ; } while (0);


    snprintf(path_tmp, sizeof(path_tmp), "%s/meta.db", fs);
    sqlite3 *db;
    int err = sqlite3_open_v2(path_tmp, &db, 
# 248 "../tools/fakefs.c" 3 4
                                            0x00000001
# 248 "../tools/fakefs.c"
                                                                , 
# 248 "../tools/fakefs.c" 3 4
                                                                  ((void *)0)
# 248 "../tools/fakefs.c"
                                                                      );
    if (err != 
# 249 "../tools/fakefs.c" 3 4
   0 
# 249 "../tools/fakefs.c"
   && err != 
# 249 "../tools/fakefs.c" 3 4
   100 
# 249 "../tools/fakefs.c"
   && err != 
# 249 "../tools/fakefs.c" 3 4
   101
# 249 "../tools/fakefs.c"
   ) do { err_out->line = 249; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 249 "../tools/fakefs.c" 3 4
   0
# 249 "../tools/fakefs.c"
   ; } while (0);
    err = sqlite3_exec(db, "begin", 
# 250 "../tools/fakefs.c" 3 4
   ((void *)0)
# 250 "../tools/fakefs.c"
   , 
# 250 "../tools/fakefs.c" 3 4
   ((void *)0)
# 250 "../tools/fakefs.c"
   , 
# 250 "../tools/fakefs.c" 3 4
   ((void *)0)
# 250 "../tools/fakefs.c"
   ); if (err != 
# 250 "../tools/fakefs.c" 3 4
   0 
# 250 "../tools/fakefs.c"
   && err != 
# 250 "../tools/fakefs.c" 3 4
   100 
# 250 "../tools/fakefs.c"
   && err != 
# 250 "../tools/fakefs.c" 3 4
   101
# 250 "../tools/fakefs.c"
   ) do { err_out->line = 250; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 250 "../tools/fakefs.c" 3 4
   0
# 250 "../tools/fakefs.c"
   ; } while (0);;

    sqlite3_stmt *count_stmt = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "select count(path) from paths", -1, &stmt, 
# 252 "../tools/fakefs.c" 3 4
                              ((void *)0)
# 252 "../tools/fakefs.c"
                              ); if (err != 
# 252 "../tools/fakefs.c" 3 4
                              0 
# 252 "../tools/fakefs.c"
                              && err != 
# 252 "../tools/fakefs.c" 3 4
                              100 
# 252 "../tools/fakefs.c"
                              && err != 
# 252 "../tools/fakefs.c" 3 4
                              101
# 252 "../tools/fakefs.c"
                              ) do { err_out->line = 252; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 252 "../tools/fakefs.c" 3 4
                              0
# 252 "../tools/fakefs.c"
                              ; } while (0); stmt; });
    ({ err = sqlite3_step(count_stmt); if (err != 
# 253 "../tools/fakefs.c" 3 4
   0 
# 253 "../tools/fakefs.c"
   && err != 
# 253 "../tools/fakefs.c" 3 4
   100 
# 253 "../tools/fakefs.c"
   && err != 
# 253 "../tools/fakefs.c" 3 4
   101
# 253 "../tools/fakefs.c"
   ) do { err_out->line = 253; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 253 "../tools/fakefs.c" 3 4
   0
# 253 "../tools/fakefs.c"
   ; } while (0); err == 
# 253 "../tools/fakefs.c" 3 4
   100
# 253 "../tools/fakefs.c"
   ; });
    int64_t paths_total = sqlite3_column_int64(count_stmt, 0);
    err = sqlite3_finalize(count_stmt); if (err != 
# 255 "../tools/fakefs.c" 3 4
   0 
# 255 "../tools/fakefs.c"
   && err != 
# 255 "../tools/fakefs.c" 3 4
   100 
# 255 "../tools/fakefs.c"
   && err != 
# 255 "../tools/fakefs.c" 3 4
   101
# 255 "../tools/fakefs.c"
   ) do { err_out->line = 255; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 255 "../tools/fakefs.c" 3 4
   0
# 255 "../tools/fakefs.c"
   ; } while (0);
    int64_t paths_done = 0;

    struct archive_entry_linkresolver *linkresolver = archive_entry_linkresolver_new();
    archive_entry_linkresolver_set_strategy(linkresolver, 
# 259 "../tools/fakefs.c" 3 4
                                                         (0x30000 | 3)
# 259 "../tools/fakefs.c"
                                                                                          );

    sqlite3_stmt *query = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "select path, inode, stat from paths, stats using (inode)", -1, &stmt, 
# 261 "../tools/fakefs.c" 3 4
                         ((void *)0)
# 261 "../tools/fakefs.c"
                         ); if (err != 
# 261 "../tools/fakefs.c" 3 4
                         0 
# 261 "../tools/fakefs.c"
                         && err != 
# 261 "../tools/fakefs.c" 3 4
                         100 
# 261 "../tools/fakefs.c"
                         && err != 
# 261 "../tools/fakefs.c" 3 4
                         101
# 261 "../tools/fakefs.c"
                         ) do { err_out->line = 261; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 261 "../tools/fakefs.c" 3 4
                         0
# 261 "../tools/fakefs.c"
                         ; } while (0); stmt; });
    while (({ err = sqlite3_step(query); if (err != 
# 262 "../tools/fakefs.c" 3 4
          0 
# 262 "../tools/fakefs.c"
          && err != 
# 262 "../tools/fakefs.c" 3 4
          100 
# 262 "../tools/fakefs.c"
          && err != 
# 262 "../tools/fakefs.c" 3 4
          101
# 262 "../tools/fakefs.c"
          ) do { err_out->line = 262; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 262 "../tools/fakefs.c" 3 4
          0
# 262 "../tools/fakefs.c"
          ; } while (0); err == 
# 262 "../tools/fakefs.c" 3 4
          100
# 262 "../tools/fakefs.c"
          ; })) {
        struct archive_entry *entry = archive_entry_new();

        const char *path_in_db = sqlite3_column_blob(query, 0);
        size_t path_len = sqlite3_column_bytes(query, 0);
        char *path = malloc(path_len + 2);
        path[0] = '.';
        memcpy(path + 1, path_in_db, path_len);
        path[path_len + 1] = '\0';
        archive_entry_set_pathname(entry, path);

        if (!progress_update(&p, (double) paths_done / paths_total, path))
            do { err_out->line = 274; err_out->type = ERR_CANCELLED; err_out->code = 0; err_out->message = strdup(""); return 
# 274 "../tools/fakefs.c" 3 4
           0
# 274 "../tools/fakefs.c"
           ; } while (0);;

        archive_entry_set_ino64(entry, sqlite3_column_int64(query, 1));
        struct ish_stat stat = *(struct ish_stat *) sqlite3_column_blob(query, 2);
        archive_entry_set_mode(entry, stat.mode);
        archive_entry_set_uid(entry, stat.uid);
        archive_entry_set_gid(entry, stat.gid);
        archive_entry_set_rdev(entry, stat.rdev);

        struct stat real_stat;
        if (fstatat(root_fd, path, &real_stat, 0) < 0) {
            if (
# 285 "../tools/fakefs.c" 3 4
               (*__errno_location ()) 
# 285 "../tools/fakefs.c"
                     == 
# 285 "../tools/fakefs.c" 3 4
                        2
# 285 "../tools/fakefs.c"
                              ) {
                printf("skipping %s\n", path);
                goto skip;
            }
            do { err_out->line = 289; err_out->type = ERR_POSIX; err_out->code = 
# 289 "../tools/fakefs.c" 3 4
           (*__errno_location ())
# 289 "../tools/fakefs.c"
           ; err_out->message = strdup(strerror(
# 289 "../tools/fakefs.c" 3 4
           (*__errno_location ())
# 289 "../tools/fakefs.c"
           )); return 
# 289 "../tools/fakefs.c" 3 4
           0
# 289 "../tools/fakefs.c"
           ; } while (0);
        }
        archive_entry_set_size(entry, real_stat.st_size);

        int fd = -1;
        
# 294 "../tools/fakefs.c" 3 4
       0170000
# 294 "../tools/fakefs.c"
             ;
        if (
# 295 "../tools/fakefs.c" 3 4
           ((((
# 295 "../tools/fakefs.c"
           stat.mode
# 295 "../tools/fakefs.c" 3 4
           )) & 0170000) == (0100000)) 
# 295 "../tools/fakefs.c"
                              || 
# 295 "../tools/fakefs.c" 3 4
                                 ((((
# 295 "../tools/fakefs.c"
                                 stat.mode
# 295 "../tools/fakefs.c" 3 4
                                 )) & 0170000) == (0120000))
# 295 "../tools/fakefs.c"
                                                   )
            fd = openat(root_fd, path, 
# 296 "../tools/fakefs.c" 3 4
                                      00
# 296 "../tools/fakefs.c"
                                              );
        if (
# 297 "../tools/fakefs.c" 3 4
           ((((
# 297 "../tools/fakefs.c"
           stat.mode
# 297 "../tools/fakefs.c" 3 4
           )) & 0170000) == (0120000))
# 297 "../tools/fakefs.c"
                             ) {
            char buf[4096 +1];
            ssize_t len = read(fd, buf, sizeof(buf)-1);
            if (len < 0)
                do { err_out->line = 301; err_out->type = ERR_POSIX; err_out->code = 
# 301 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 301 "../tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 301 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 301 "../tools/fakefs.c"
               )); return 
# 301 "../tools/fakefs.c" 3 4
               0
# 301 "../tools/fakefs.c"
               ; } while (0);
            buf[len] = '\0';
            archive_entry_set_symlink(entry, buf);
        }

        struct archive_entry *sparse;
        archive_entry_linkify(linkresolver, &entry, &sparse);
        if (entry != 
# 308 "../tools/fakefs.c" 3 4
                    ((void *)0)
# 308 "../tools/fakefs.c"
                        )
            archive_write_header(archive, entry);
        if (sparse != 
# 310 "../tools/fakefs.c" 3 4
                     ((void *)0)
# 310 "../tools/fakefs.c"
                         )
            archive_write_header(archive, sparse);

        if (
# 313 "../tools/fakefs.c" 3 4
           ((((
# 313 "../tools/fakefs.c"
           stat.mode
# 313 "../tools/fakefs.c" 3 4
           )) & 0170000) == (0100000)) 
# 313 "../tools/fakefs.c"
                              && archive_entry_size(entry) != 0) {
            char buf[8192];
            ssize_t len;
            while ((len = read(fd, buf, sizeof(buf))) > 0) {
                ssize_t written = archive_write_data(archive, buf, len);
                if (written < 0)
                    do { err_out->line = 319; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 319 "../tools/fakefs.c" 3 4
                   0
# 319 "../tools/fakefs.c"
                   ; } while (0);
                if (written != len)
                    printf("uh oh\n");
            }
            if (len < 0)
                do { err_out->line = 324; err_out->type = ERR_POSIX; err_out->code = 
# 324 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 324 "../tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 324 "../tools/fakefs.c" 3 4
               (*__errno_location ())
# 324 "../tools/fakefs.c"
               )); return 
# 324 "../tools/fakefs.c" 3 4
               0
# 324 "../tools/fakefs.c"
               ; } while (0);
        }
        if (fd != -1)
            close(fd);

    skip:
        paths_done++;
        free(path);
        archive_entry_free(entry);
    }

    err = sqlite3_finalize(query); if (err != 
# 335 "../tools/fakefs.c" 3 4
   0 
# 335 "../tools/fakefs.c"
   && err != 
# 335 "../tools/fakefs.c" 3 4
   100 
# 335 "../tools/fakefs.c"
   && err != 
# 335 "../tools/fakefs.c" 3 4
   101
# 335 "../tools/fakefs.c"
   ) do { err_out->line = 335; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 335 "../tools/fakefs.c" 3 4
   0
# 335 "../tools/fakefs.c"
   ; } while (0);
    archive_entry_linkresolver_free(linkresolver);
    sqlite3_close(db);
    close(root_fd);
    if (archive_write_close(archive) != 
# 339 "../tools/fakefs.c" 3 4
                                       0
# 339 "../tools/fakefs.c"
                                                 )
        do { err_out->line = 340; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 340 "../tools/fakefs.c" 3 4
       0
# 340 "../tools/fakefs.c"
       ; } while (0);
    archive_write_free(archive);
    return 
# 342 "../tools/fakefs.c" 3 4
          1
# 342 "../tools/fakefs.c"
              ;
}
