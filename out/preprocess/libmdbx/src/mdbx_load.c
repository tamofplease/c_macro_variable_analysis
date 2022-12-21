# 0 "/libmdbx/src/mdbx_load.c"
# 1 "/libmdbx/build//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "/libmdbx/src/mdbx_load.c"
# 24 "/libmdbx/src/mdbx_load.c"
# 1 "/libmdbx/src/internals.h" 1
# 14 "/libmdbx/src/internals.h"
       

# 1 "/libmdbx/build/config.h" 1
# 17 "/libmdbx/src/internals.h" 2
# 130 "/libmdbx/src/internals.h"
# 1 "/libmdbx/src/../mdbx.h" 1
# 68 "/libmdbx/src/../mdbx.h"
       
# 172 "/libmdbx/src/../mdbx.h"
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 173 "/libmdbx/src/../mdbx.h" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 209 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 415 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
} max_align_t;
# 174 "/libmdbx/src/../mdbx.h" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
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
# 34 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
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
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


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
# 175 "/libmdbx/src/../mdbx.h" 2
# 191 "/libmdbx/src/../mdbx.h"
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4
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








extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern char *program_invocation_name;
extern char *program_invocation_short_name;

# 1 "/usr/include/aarch64-linux-gnu/bits/types/error_t.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/bits/types/error_t.h" 3 4
typedef int error_t;
# 49 "/usr/include/errno.h" 2 3 4




# 192 "/libmdbx/src/../mdbx.h" 2
# 1 "/usr/include/pthread.h" 1 3 4
# 22 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 29 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 30 "/usr/include/sched.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 32 "/usr/include/sched.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 1 3 4





# 1 "/usr/include/aarch64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/aarch64-linux-gnu/bits/endian.h" 2 3 4
# 7 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 2 3 4




struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 33 "/usr/include/sched.h" 2 3 4





typedef __pid_t pid_t;




# 1 "/usr/include/aarch64-linux-gnu/bits/sched.h" 1 3 4
# 76 "/usr/include/aarch64-linux-gnu/bits/sched.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_sched_param.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/types/struct_sched_param.h" 3 4
struct sched_param
{
  int sched_priority;
};
# 77 "/usr/include/aarch64-linux-gnu/bits/sched.h" 2 3 4





extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) __attribute__ ((__nothrow__ , __leaf__));


extern int unshare (int __flags) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getcpu (void) __attribute__ ((__nothrow__ , __leaf__));


extern int getcpu (unsigned int *, unsigned int *) __attribute__ ((__nothrow__ , __leaf__));


extern int setns (int __fd, int __nstype) __attribute__ ((__nothrow__ , __leaf__));



# 44 "/usr/include/sched.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/cpu-set.h" 1 3 4
# 32 "/usr/include/aarch64-linux-gnu/bits/cpu-set.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 115 "/usr/include/aarch64-linux-gnu/bits/cpu-set.h" 3 4


extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
     __attribute__ ((__nothrow__ , __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ , __leaf__));


# 45 "/usr/include/sched.h" 2 3 4









extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_yield (void) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));



extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ , __leaf__));
# 130 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));



# 23 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/time.h" 1 3 4
# 73 "/usr/include/aarch64-linux-gnu/bits/time.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/timex.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/bits/timex.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{




  __time_t tv_sec;
  __suseconds_t tv_usec;

};
# 23 "/usr/include/aarch64-linux-gnu/bits/timex.h" 2 3 4



struct timex
{
# 58 "/usr/include/aarch64-linux-gnu/bits/timex.h" 3 4
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;

};
# 74 "/usr/include/aarch64-linux-gnu/bits/time.h" 2 3 4




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __attribute__ ((__nothrow__ , __leaf__));
# 90 "/usr/include/aarch64-linux-gnu/bits/time.h" 3 4

# 34 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 38 "/usr/include/time.h" 2 3 4

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






# 1 "/usr/include/aarch64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 47 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 48 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 60 "/usr/include/time.h" 3 4
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
# 61 "/usr/include/time.h" 2 3 4











extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));



extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/time.h" 3 4
extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));




extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));






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
# 387 "/usr/include/time.h" 3 4
extern int timespec_getres (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 413 "/usr/include/time.h" 3 4
extern int getdate_err;
# 422 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 436 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);



# 24 "/usr/include/pthread.h" 2 3 4


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
# 27 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/setjmp.h" 1 3 4
# 30 "/usr/include/aarch64-linux-gnu/bits/setjmp.h" 3 4
__extension__ typedef unsigned long long __jmp_buf [22];
# 28 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 31 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct___jmp_buf_tag.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/types/struct___jmp_buf_tag.h" 3 4
struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };
# 32 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min-dynamic.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min-dynamic.h" 3 4

extern long int __sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));

# 34 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 104 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 124 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 159 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 197 "/usr/include/pthread.h" 3 4





extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) __attribute__ ((__nothrow__ , __leaf__));
# 233 "/usr/include/pthread.h" 3 4
extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);
# 243 "/usr/include/pthread.h" 3 4
extern int pthread_clockjoin_np (pthread_t __th, void **__thread_return,
                                 clockid_t __clockid,
     const struct timespec *__abstime);
# 269 "/usr/include/pthread.h" 3 4
extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__ , __leaf__));



extern pthread_t pthread_self (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_setsigmask_np (pthread_attr_t *__attr,
           const __sigset_t *sigmask);




extern int pthread_attr_getsigmask_np (const pthread_attr_t *__attr,
           __sigset_t *sigmask);







extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setconcurrency (int __level) __attribute__ ((__nothrow__ , __leaf__));



extern int pthread_yield (void) __attribute__ ((__nothrow__ , __leaf__));

extern int pthread_yield (void) __asm__ ("" "sched_yield") __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("pthread_yield is deprecated, use sched_yield instead")))
                                                      ;







extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 509 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 521 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




struct __cancel_jmp_buf_tag
{
  __jmp_buf __cancel_jmp_buf;
  int __mask_was_saved;
};

typedef struct
{
  struct __cancel_jmp_buf_tag __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 557 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
# 624 "/usr/include/pthread.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void
__pthread_cleanup_routine (struct __pthread_cleanup_frame *__frame)
{
  if (__frame->__do_it)
    __frame->__cancel_routine (__frame->__cancel_arg);
}
# 766 "/usr/include/pthread.h" 3 4
extern int __sigsetjmp_cancel (struct __cancel_jmp_buf_tag __env[1], int __savemask) __asm__ ("" "__sigsetjmp") __attribute__ ((__nothrow__))


                     __attribute__ ((__returns_twice__));
# 781 "/usr/include/pthread.h" 3 4
extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 817 "/usr/include/pthread.h" 3 4
extern int pthread_mutex_clocklock (pthread_mutex_t *__restrict __mutex,
        clockid_t __clockid,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
# 835 "/usr/include/pthread.h" 3 4
extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_consistent_np (pthread_mutex_t *) __asm__ ("" "pthread_mutex_consistent") __attribute__ ((__nothrow__ , __leaf__))
                                __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__deprecated__ ("pthread_mutex_consistent_np is deprecated, use pthread_mutex_consistent")))
                                                                         ;
# 874 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_getrobust_np (pthread_mutexattr_t *, int *) __asm__ ("" "pthread_mutexattr_getrobust") __attribute__ ((__nothrow__ , __leaf__))

                                   __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__deprecated__ ("pthread_mutexattr_getrobust_np is deprecated, use pthread_mutexattr_getrobust")))
                                                                               ;






extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *, int) __asm__ ("" "pthread_mutexattr_setrobust") __attribute__ ((__nothrow__ , __leaf__))

                                   __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__deprecated__ ("pthread_mutexattr_setrobust_np is deprecated, use pthread_mutexattr_setrobust")))
                                                                               ;
# 967 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 1004 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_clockrdlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
# 1023 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 1051 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_clockwrlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
# 1071 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 1145 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 1171 "/usr/include/pthread.h" 3 4
extern int pthread_cond_clockwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       __clockid_t __clock_id,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 4)));
# 1194 "/usr/include/pthread.h" 3 4
extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1230 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1297 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__access__ (__none__, 2)));




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 1332 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) __attribute__ ((__nothrow__ , __leaf__));




extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) pthread_equal (pthread_t __thread1, pthread_t __thread2)
{
  return __thread1 == __thread2;
}



# 193 "/libmdbx/src/../mdbx.h" 2
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




typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;







typedef __off64_t off_t;




typedef __off64_t off64_t;
# 103 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 134 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 145 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;







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






typedef __sigset_t sigset_t;
# 34 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4
# 49 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 59 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





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
# 150 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/select2.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/select2.h" 3 4
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
  __attribute__((__warning__ ("bit outside of fd_set selected")));
# 151 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4



# 180 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;
# 205 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt_t;



typedef __fsblkcnt64_t fsblkcnt_t;



typedef __fsfilcnt64_t fsfilcnt_t;





typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
# 230 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

# 194 "/libmdbx/src/../mdbx.h" 2
# 1 "/usr/include/aarch64-linux-gnu/sys/uio.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/sys/uio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_iovec.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/types/struct_iovec.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/types/struct_iovec.h" 2 3 4


struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 24 "/usr/include/aarch64-linux-gnu/sys/uio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/uio_lim.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/sys/uio.h" 2 3 4







# 41 "/usr/include/aarch64-linux-gnu/sys/uio.h" 3 4
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));
# 52 "/usr/include/aarch64-linux-gnu/sys/uio.h" 3 4
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));
# 86 "/usr/include/aarch64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count, __off64_t __offset) __asm__ ("" "preadv64")


  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count, __off64_t __offset) __asm__ ("" "pwritev64")


  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));
# 110 "/usr/include/aarch64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv64 (int __fd, const struct iovec *__iovec, int __count,
    __off64_t __offset)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));
# 123 "/usr/include/aarch64-linux-gnu/sys/uio.h" 3 4
extern ssize_t pwritev64 (int __fd, const struct iovec *__iovec, int __count,
     __off64_t __offset)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));
# 143 "/usr/include/aarch64-linux-gnu/sys/uio.h" 3 4
extern ssize_t pwritev2 (int __fd, const struct iovec *__iovec, int __count, __off64_t __offset, int __flags) __asm__ ("" "pwritev64v2")



  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));
extern ssize_t preadv2 (int __fd, const struct iovec *__iovec, int __count, __off64_t __offset, int __flags) __asm__ ("" "preadv64v2")



  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));
# 161 "/usr/include/aarch64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv64v2 (int __fp, const struct iovec *__iovec,
      int __count, __off64_t __offset,
      int ___flags)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));


extern ssize_t pwritev64v2 (int __fd, const struct iovec *__iodev,
       int __count, __off64_t __offset,
       int __flags)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 2, 3)));








# 1 "/usr/include/aarch64-linux-gnu/bits/uio-ext.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/uio-ext.h" 3 4



extern ssize_t process_vm_readv (pid_t __pid, const struct iovec *__lvec,
     unsigned long int __liovcnt,
     const struct iovec *__rvec,
     unsigned long int __riovcnt,
     unsigned long int __flags)
  __attribute__ ((__nothrow__ , __leaf__));


extern ssize_t process_vm_writev (pid_t __pid, const struct iovec *__lvec,
      unsigned long int __liovcnt,
      const struct iovec *__rvec,
      unsigned long int __riovcnt,
      unsigned long int __flags)
  __attribute__ ((__nothrow__ , __leaf__));
# 51 "/usr/include/aarch64-linux-gnu/bits/uio-ext.h" 3 4

# 180 "/usr/include/aarch64-linux-gnu/sys/uio.h" 2 3 4
# 195 "/libmdbx/src/../mdbx.h" 2


# 196 "/libmdbx/src/../mdbx.h"
typedef int mdbx_filehandle_t;
typedef pid_t mdbx_pid_t;
typedef pthread_t mdbx_tid_t;
typedef mode_t mdbx_mode_t;
# 613 "/libmdbx/src/../mdbx.h"
extern __attribute__((__visibility__("default"))) const struct MDBX_version_info {
  uint8_t major;
  uint8_t minor;
  uint16_t release;
  uint32_t revision;
  struct {
    const char *datetime;
    const char *tree;
    const char *commit;
    const char *describe;
  } git;
  const char *sourcery;
} mdbx_version;




extern __attribute__((__visibility__("default"))) const struct MDBX_build_info {
  const char *datetime;
  const char *target;
  const char *options;
  const char *compiler;
  const char *flags;
} mdbx_build;
# 692 "/libmdbx/src/../mdbx.h"
typedef struct MDBX_env MDBX_env;
# 703 "/libmdbx/src/../mdbx.h"
typedef struct MDBX_txn MDBX_txn;
# 715 "/libmdbx/src/../mdbx.h"
typedef uint32_t MDBX_dbi;






typedef struct MDBX_cursor MDBX_cursor;
# 760 "/libmdbx/src/../mdbx.h"
typedef struct iovec MDBX_val;


enum MDBX_constants {

  MDBX_MAX_DBI = 32765U,


  MDBX_MAXDATASIZE = 0x7fff0000U,


  MDBX_MIN_PAGESIZE = 256,


  MDBX_MAX_PAGESIZE = 65536,
};
# 797 "/libmdbx/src/../mdbx.h"
enum MDBX_log_level_t {



  MDBX_LOG_FATAL = 0,





  MDBX_LOG_ERROR = 1,





  MDBX_LOG_WARN = 2,





  MDBX_LOG_NOTICE = 3,




  MDBX_LOG_VERBOSE = 4,




  MDBX_LOG_DEBUG = 5,




  MDBX_LOG_TRACE = 6,




  MDBX_LOG_EXTRA = 7,






  MDBX_LOG_DONTCHANGE = -1
};

typedef enum MDBX_log_level_t MDBX_log_level_t;







enum MDBX_debug_flags_t {
  MDBX_DBG_NONE = 0,




  MDBX_DBG_ASSERT = 1,



  MDBX_DBG_AUDIT = 2,



  MDBX_DBG_JITTER = 4,



  MDBX_DBG_DUMP = 8,


  MDBX_DBG_LEGACY_MULTIOPEN = 16,


  MDBX_DBG_LEGACY_OVERLAP = 32,




  MDBX_DBG_DONT_UPGRADE = 64,







  MDBX_DBG_DONTCHANGE = -1
};

typedef enum MDBX_debug_flags_t MDBX_debug_flags_t;
# 908 "/libmdbx/src/../mdbx.h"
typedef void MDBX_debug_func(MDBX_log_level_t loglevel, const char *function,
                             int line, const char *fmt,
                             va_list args) ;







 int mdbx_setup_debug(MDBX_log_level_t log_level,
                                 MDBX_debug_flags_t debug_flags,
                                 MDBX_debug_func *logger);







typedef void MDBX_assert_func(const MDBX_env *env, const char *msg,
                              const char *function,
                              unsigned line) ;
# 941 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_assert(MDBX_env *env, MDBX_assert_func *func);
# 952 "/libmdbx/src/../mdbx.h"
 const char *mdbx_dump_val(const MDBX_val *key, char *const buf,
                                      const size_t bufsize);


 void mdbx_panic(const char *fmt, ...) __attribute__((__format__(__printf__, 1, 2)));







enum MDBX_env_flags_t {
  MDBX_ENV_DEFAULTS = 0,
# 983 "/libmdbx/src/../mdbx.h"
  MDBX_NOSUBDIR = 0x4000U,
# 1001 "/libmdbx/src/../mdbx.h"
  MDBX_RDONLY = 0x20000U,
# 1031 "/libmdbx/src/../mdbx.h"
  MDBX_EXCLUSIVE = 0x400000U,
# 1046 "/libmdbx/src/../mdbx.h"
  MDBX_ACCEDE = 0x40000000U,
# 1077 "/libmdbx/src/../mdbx.h"
  MDBX_WRITEMAP = 0x80000U,
# 1100 "/libmdbx/src/../mdbx.h"
  MDBX_NOTLS = 0x200000U,
# 1121 "/libmdbx/src/../mdbx.h"
  MDBX_NORDAHEAD = 0x800000U,
# 1144 "/libmdbx/src/../mdbx.h"
  MDBX_NOMEMINIT = 0x1000000U,
# 1156 "/libmdbx/src/../mdbx.h"
  MDBX_COALESCE = 0x2000000U,
# 1180 "/libmdbx/src/../mdbx.h"
  MDBX_LIFORECLAIM = 0x4000000U,


  MDBX_PAGEPERTURB = 0x8000000U,
# 1237 "/libmdbx/src/../mdbx.h"
  MDBX_SYNC_DURABLE = 0,
# 1255 "/libmdbx/src/../mdbx.h"
  MDBX_NOMETASYNC = 0x40000U,
# 1306 "/libmdbx/src/../mdbx.h"
  MDBX_SAFE_NOSYNC = 0x10000U,






  MDBX_MAPASYNC = MDBX_SAFE_NOSYNC,
# 1356 "/libmdbx/src/../mdbx.h"
  MDBX_UTTERLY_NOSYNC = MDBX_SAFE_NOSYNC | 0x100000U,


};


typedef enum MDBX_env_flags_t MDBX_env_flags_t;
# 1371 "/libmdbx/src/../mdbx.h"
enum MDBX_txn_flags_t {




  MDBX_TXN_READWRITE = 0,





  MDBX_TXN_RDONLY = MDBX_RDONLY,
# 1391 "/libmdbx/src/../mdbx.h"
  MDBX_TXN_RDONLY_PREPARE = MDBX_RDONLY | MDBX_NOMEMINIT,





  MDBX_TXN_TRY = 0x10000000U,



  MDBX_TXN_NOMETASYNC = MDBX_NOMETASYNC,



  MDBX_TXN_NOSYNC = MDBX_SAFE_NOSYNC
};

typedef enum MDBX_txn_flags_t MDBX_txn_flags_t;
# 1417 "/libmdbx/src/../mdbx.h"
enum MDBX_db_flags_t {

  MDBX_DB_DEFAULTS = 0,


  MDBX_REVERSEKEY = 0x02U,


  MDBX_DUPSORT = 0x04U,






  MDBX_INTEGERKEY = 0x08U,



  MDBX_DUPFIXED = 0x10U,




  MDBX_INTEGERDUP = 0x20U,


  MDBX_REVERSEDUP = 0x40U,


  MDBX_CREATE = 0x40000U,
# 1459 "/libmdbx/src/../mdbx.h"
  MDBX_DB_ACCEDE = MDBX_ACCEDE
};


typedef enum MDBX_db_flags_t MDBX_db_flags_t;
# 1472 "/libmdbx/src/../mdbx.h"
enum MDBX_put_flags_t {

  MDBX_UPSERT = 0,


  MDBX_NOOVERWRITE = 0x10U,




  MDBX_NODUPDATA = 0x20U,





  MDBX_CURRENT = 0x40U,




  MDBX_ALLDUPS = 0x80U,



  MDBX_RESERVE = 0x10000U,



  MDBX_APPEND = 0x20000U,




  MDBX_APPENDDUP = 0x40000U,



  MDBX_MULTIPLE = 0x80000U
};


typedef enum MDBX_put_flags_t MDBX_put_flags_t;







enum MDBX_copy_flags_t {
  MDBX_CP_DEFAULTS = 0,



  MDBX_CP_COMPACT = 1u,


  MDBX_CP_FORCE_DYNAMIC_SIZE = 2u
};


typedef enum MDBX_copy_flags_t MDBX_copy_flags_t;
# 1543 "/libmdbx/src/../mdbx.h"
enum MDBX_cursor_op {

  MDBX_FIRST,


  MDBX_FIRST_DUP,


  MDBX_GET_BOTH,



  MDBX_GET_BOTH_RANGE,


  MDBX_GET_CURRENT,




  MDBX_GET_MULTIPLE,


  MDBX_LAST,


  MDBX_LAST_DUP,


  MDBX_NEXT,


  MDBX_NEXT_DUP,




  MDBX_NEXT_MULTIPLE,


  MDBX_NEXT_NODUP,


  MDBX_PREV,


  MDBX_PREV_DUP,


  MDBX_PREV_NODUP,


  MDBX_SET,


  MDBX_SET_KEY,


  MDBX_SET_RANGE,



  MDBX_PREV_MULTIPLE,
# 1619 "/libmdbx/src/../mdbx.h"
  MDBX_SET_LOWERBOUND,
# 1633 "/libmdbx/src/../mdbx.h"
  MDBX_SET_UPPERBOUND
};


typedef enum MDBX_cursor_op MDBX_cursor_op;







enum MDBX_error_t {

  MDBX_SUCCESS = 0,


  MDBX_RESULT_FALSE = MDBX_SUCCESS,


  MDBX_RESULT_TRUE = -1,


  MDBX_KEYEXIST = -30799,


  MDBX_FIRST_LMDB_ERRCODE = MDBX_KEYEXIST,


  MDBX_NOTFOUND = -30798,


  MDBX_PAGE_NOTFOUND = -30797,


  MDBX_CORRUPTED = -30796,



  MDBX_PANIC = -30795,


  MDBX_VERSION_MISMATCH = -30794,


  MDBX_INVALID = -30793,


  MDBX_MAP_FULL = -30792,


  MDBX_DBS_FULL = -30791,


  MDBX_READERS_FULL = -30790,


  MDBX_TXN_FULL = -30788,



  MDBX_CURSOR_FULL = -30787,


  MDBX_PAGE_FULL = -30786,
# 1706 "/libmdbx/src/../mdbx.h"
  MDBX_UNABLE_EXTEND_MAPSIZE = -30785,
# 1716 "/libmdbx/src/../mdbx.h"
  MDBX_INCOMPATIBLE = -30784,



  MDBX_BAD_RSLOT = -30783,



  MDBX_BAD_TXN = -30782,



  MDBX_BAD_VALSIZE = -30781,



  MDBX_BAD_DBI = -30780,


  MDBX_PROBLEM = -30779,


  MDBX_LAST_LMDB_ERRCODE = MDBX_PROBLEM,



  MDBX_BUSY = -30778,


  MDBX_FIRST_ADDED_ERRCODE = MDBX_BUSY,


  MDBX_EMULTIVAL = -30421,




  MDBX_EBADSIGN = -30420,



  MDBX_WANNA_RECOVERY = -30419,


  MDBX_EKEYMISMATCH = -30418,



  MDBX_TOO_LARGE = -30417,



  MDBX_THREAD_MISMATCH = -30416,


  MDBX_TXN_OVERLAPPING = -30415,


  MDBX_LAST_ADDED_ERRCODE = MDBX_TXN_OVERLAPPING,
# 1790 "/libmdbx/src/../mdbx.h"
  MDBX_ENODATA = 
# 1790 "/libmdbx/src/../mdbx.h" 3 4
                61
# 1790 "/libmdbx/src/../mdbx.h"
                       ,



  MDBX_EINVAL = 
# 1794 "/libmdbx/src/../mdbx.h" 3 4
               22
# 1794 "/libmdbx/src/../mdbx.h"
                     ,
  MDBX_EACCESS = 
# 1795 "/libmdbx/src/../mdbx.h" 3 4
                13
# 1795 "/libmdbx/src/../mdbx.h"
                      ,
  MDBX_ENOMEM = 
# 1796 "/libmdbx/src/../mdbx.h" 3 4
               12
# 1796 "/libmdbx/src/../mdbx.h"
                     ,
  MDBX_EROFS = 
# 1797 "/libmdbx/src/../mdbx.h" 3 4
              30
# 1797 "/libmdbx/src/../mdbx.h"
                   ,
  MDBX_ENOSYS = 
# 1798 "/libmdbx/src/../mdbx.h" 3 4
               38
# 1798 "/libmdbx/src/../mdbx.h"
                     ,
  MDBX_EIO = 
# 1799 "/libmdbx/src/../mdbx.h" 3 4
            5
# 1799 "/libmdbx/src/../mdbx.h"
               ,
  MDBX_EPERM = 
# 1800 "/libmdbx/src/../mdbx.h" 3 4
              1
# 1800 "/libmdbx/src/../mdbx.h"
                   ,
  MDBX_EINTR = 
# 1801 "/libmdbx/src/../mdbx.h" 3 4
              4
# 1801 "/libmdbx/src/../mdbx.h"
                   ,
  MDBX_ENOFILE = 
# 1802 "/libmdbx/src/../mdbx.h" 3 4
                2
# 1802 "/libmdbx/src/../mdbx.h"
                      ,
  MDBX_EREMOTE = 
# 1803 "/libmdbx/src/../mdbx.h" 3 4
                15


# 1805 "/libmdbx/src/../mdbx.h"
};


typedef enum MDBX_error_t MDBX_error_t;






 static __inline int MDBX_MAP_RESIZED_is_deprecated() {
  return MDBX_UNABLE_EXTEND_MAPSIZE;
}
# 1838 "/libmdbx/src/../mdbx.h"
 const char *mdbx_strerror(int errnum);
# 1864 "/libmdbx/src/../mdbx.h"
 const char *mdbx_strerror_r(int errnum, char *buf, size_t buflen);
__attribute__((__pure__, __nothrow__)) const char *mdbx_liberr2str(int errnum);
# 1896 "/libmdbx/src/../mdbx.h"
 int mdbx_env_create(MDBX_env **penv);


enum MDBX_option_t {
# 1908 "/libmdbx/src/../mdbx.h"
  MDBX_opt_max_db,
# 1924 "/libmdbx/src/../mdbx.h"
  MDBX_opt_max_readers,





  MDBX_opt_sync_bytes,





  MDBX_opt_sync_period,
# 1955 "/libmdbx/src/../mdbx.h"
  MDBX_opt_rp_augment_limit,
# 1968 "/libmdbx/src/../mdbx.h"
  MDBX_opt_loose_limit,
# 1982 "/libmdbx/src/../mdbx.h"
  MDBX_opt_dp_reserve_limit,
# 1996 "/libmdbx/src/../mdbx.h"
  MDBX_opt_txn_dp_limit,



  MDBX_opt_txn_dp_initial,
# 2016 "/libmdbx/src/../mdbx.h"
  MDBX_opt_spill_max_denominator,
# 2032 "/libmdbx/src/../mdbx.h"
  MDBX_opt_spill_min_denominator,
# 2055 "/libmdbx/src/../mdbx.h"
  MDBX_opt_spill_parent4child_denominator,
# 2066 "/libmdbx/src/../mdbx.h"
  MDBX_opt_merge_threshold_16dot16_percent,
};


typedef enum MDBX_option_t MDBX_option_t;
# 2083 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_option(MDBX_env *env, const MDBX_option_t option,
                                    uint64_t value);
# 2096 "/libmdbx/src/../mdbx.h"
 int mdbx_env_get_option(const MDBX_env *env,
                                    const MDBX_option_t option,
                                    uint64_t *pvalue);
# 2171 "/libmdbx/src/../mdbx.h"
 int mdbx_env_open(MDBX_env *env, const char *pathname,
                              MDBX_env_flags_t flags, mdbx_mode_t mode);




enum MDBX_env_delete_mode_t {






  MDBX_ENV_JUST_DELETE = 0,


  MDBX_ENV_ENSURE_UNUSED = 1,


  MDBX_ENV_WAIT_FOR_UNUSED = 2,
};


typedef enum MDBX_env_delete_mode_t MDBX_env_delete_mode_t;
# 2214 "/libmdbx/src/../mdbx.h"
 int mdbx_env_delete(const char *pathname,
                                MDBX_env_delete_mode_t mode);
# 2248 "/libmdbx/src/../mdbx.h"
 int mdbx_env_copy(MDBX_env *env, const char *dest,
                              MDBX_copy_flags_t flags);
# 2274 "/libmdbx/src/../mdbx.h"
 int mdbx_env_copy2fd(MDBX_env *env, mdbx_filehandle_t fd,
                                 MDBX_copy_flags_t flags);




struct MDBX_stat {
  uint32_t ms_psize;

  uint32_t ms_depth;
  uint64_t ms_branch_pages;
  uint64_t ms_leaf_pages;
  uint64_t ms_overflow_pages;
  uint64_t ms_entries;
  uint64_t ms_mod_txnid;
};


typedef struct MDBX_stat MDBX_stat;
# 2314 "/libmdbx/src/../mdbx.h"
 int mdbx_env_stat_ex(const MDBX_env *env, const MDBX_txn *txn,
                                 MDBX_stat *stat, size_t bytes);




 int mdbx_env_stat (const MDBX_env *env, MDBX_stat *stat, size_t bytes); static __inline int __inline_mdbx_env_stat (const MDBX_env *env, MDBX_stat *stat, size_t bytes)

                                                   {
  return mdbx_env_stat_ex(env, 
# 2323 "/libmdbx/src/../mdbx.h" 3 4
                              ((void *)0)
# 2323 "/libmdbx/src/../mdbx.h"
                                  , stat, bytes);
}




struct MDBX_envinfo {
  struct {
    uint64_t lower;
    uint64_t upper;
    uint64_t current;
    uint64_t shrink;
    uint64_t grow;
  } mi_geo;
  uint64_t mi_mapsize;
  uint64_t mi_last_pgno;
  uint64_t mi_recent_txnid;
  uint64_t mi_latter_reader_txnid;
  uint64_t mi_self_latter_reader_txnid;

  uint64_t mi_meta0_txnid, mi_meta0_sign;
  uint64_t mi_meta1_txnid, mi_meta1_sign;
  uint64_t mi_meta2_txnid, mi_meta2_sign;
  uint32_t mi_maxreaders;
  uint32_t mi_numreaders;
  uint32_t mi_dxb_pagesize;
  uint32_t mi_sys_pagesize;
# 2359 "/libmdbx/src/../mdbx.h"
  struct {
    struct {
      uint64_t x, y;
    } current, meta0, meta1, meta2;
  } mi_bootid;


  uint64_t mi_unsync_volume;

  uint64_t mi_autosync_threshold;

  uint32_t mi_since_sync_seconds16dot16;


  uint32_t mi_autosync_period_seconds16dot16;


  uint32_t mi_since_reader_check_seconds16dot16;


  uint32_t mi_mode;






  struct {
    uint64_t newly;
    uint64_t cow;
    uint64_t clone;

    uint64_t split;
    uint64_t merge;
    uint64_t spill;
    uint64_t unspill;
    uint64_t wops;

  } mi_pgop_stat;
};


typedef struct MDBX_envinfo MDBX_envinfo;
# 2423 "/libmdbx/src/../mdbx.h"
 int mdbx_env_info_ex(const MDBX_env *env, const MDBX_txn *txn,
                                 MDBX_envinfo *info, size_t bytes);



 int mdbx_env_info (const MDBX_env *env, MDBX_envinfo *info, size_t bytes); static __inline int __inline_mdbx_env_info (const MDBX_env *env, MDBX_envinfo *info, size_t bytes)

                                                   {
  return mdbx_env_info_ex(env, 
# 2431 "/libmdbx/src/../mdbx.h" 3 4
                              ((void *)0)
# 2431 "/libmdbx/src/../mdbx.h"
                                  , info, bytes);
}
# 2469 "/libmdbx/src/../mdbx.h"
 int mdbx_env_sync_ex(MDBX_env *env, _Bool force, _Bool nonblock);




 int mdbx_env_sync (MDBX_env * env); static __inline int __inline_mdbx_env_sync (MDBX_env * env) {
  return mdbx_env_sync_ex(env, (1), (0));
}




 int mdbx_env_sync_poll (MDBX_env * env); static __inline int __inline_mdbx_env_sync_poll (MDBX_env * env) {
  return mdbx_env_sync_ex(env, (0), (1));
}
# 2508 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_syncbytes (MDBX_env * env, size_t threshold); static __inline int __inline_mdbx_env_set_syncbytes (MDBX_env * env, size_t threshold)
                                                       {
  return mdbx_env_set_option(env, MDBX_opt_sync_bytes, threshold);
}
# 2527 "/libmdbx/src/../mdbx.h"
 int mdbx_env_get_syncbytes (const MDBX_env *env, size_t *threshold); static __inline int __inline_mdbx_env_get_syncbytes (const MDBX_env *env, size_t *threshold)
                                                             {
  int rc = MDBX_EINVAL;
  if (threshold) {
    uint64_t proxy = 0;
    rc = mdbx_env_get_option(env, MDBX_opt_sync_bytes, &proxy);



    *threshold = (size_t)proxy;
  }
  return rc;
}
# 2571 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_syncperiod (MDBX_env * env, unsigned seconds_16dot16); static __inline int __inline_mdbx_env_set_syncperiod (MDBX_env * env, unsigned seconds_16dot16)
                                                               {
  return mdbx_env_set_option(env, MDBX_opt_sync_period, seconds_16dot16);
}
# 2592 "/libmdbx/src/../mdbx.h"
 int mdbx_env_get_syncperiod (const MDBX_env *env, unsigned *period_seconds_16dot16); static __inline int __inline_mdbx_env_get_syncperiod (const MDBX_env *env, unsigned *period_seconds_16dot16)
                                                                            {
  int rc = MDBX_EINVAL;
  if (period_seconds_16dot16) {
    uint64_t proxy = 0;
    rc = mdbx_env_get_option(env, MDBX_opt_sync_period, &proxy);



    *period_seconds_16dot16 = (unsigned)proxy;
  }
  return rc;
}
# 2644 "/libmdbx/src/../mdbx.h"
 int mdbx_env_close_ex(MDBX_env *env, _Bool dont_sync);




 int mdbx_env_close (MDBX_env * env); static __inline int __inline_mdbx_env_close (MDBX_env * env) {
  return mdbx_env_close_ex(env, (0));
}
# 2673 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_flags(MDBX_env *env, MDBX_env_flags_t flags,
                                   _Bool onoff);
# 2686 "/libmdbx/src/../mdbx.h"
 int mdbx_env_get_flags(const MDBX_env *env, unsigned *flags);
# 2699 "/libmdbx/src/../mdbx.h"
 int mdbx_env_get_path(const MDBX_env *env, const char **dest);
# 2713 "/libmdbx/src/../mdbx.h"
 int mdbx_env_get_fd(const MDBX_env *env, mdbx_filehandle_t *fd);
# 2909 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_geometry(MDBX_env *env, intptr_t size_lower,
                                      intptr_t size_now, intptr_t size_upper,
                                      intptr_t growth_step,
                                      intptr_t shrink_threshold,
                                      intptr_t pagesize);



 int mdbx_env_set_mapsize (MDBX_env * env, size_t size); static __inline int __inline_mdbx_env_set_mapsize (MDBX_env * env, size_t size)
                                                                  {
  return mdbx_env_set_geometry(env, size, size, size, -1, -1, -1);
}
# 2937 "/libmdbx/src/../mdbx.h"
 int mdbx_is_readahead_reasonable(size_t volume,
                                             intptr_t redundancy);



__attribute__((__const__, __nothrow__)) intptr_t mdbx_limits_pgsize_min (void); static __inline intptr_t __inline_mdbx_limits_pgsize_min (void)
                                                       {
  return MDBX_MIN_PAGESIZE;
}



__attribute__((__const__, __nothrow__)) intptr_t mdbx_limits_pgsize_max (void); static __inline intptr_t __inline_mdbx_limits_pgsize_max (void)
                                                       {
  return MDBX_MAX_PAGESIZE;
}




__attribute__((__const__, __nothrow__)) intptr_t
mdbx_limits_dbsize_min(intptr_t pagesize);




__attribute__((__const__, __nothrow__)) intptr_t
mdbx_limits_dbsize_max(intptr_t pagesize);





__attribute__((__const__, __nothrow__)) intptr_t
mdbx_limits_keysize_max(intptr_t pagesize, MDBX_db_flags_t flags);





__attribute__((__const__, __nothrow__)) intptr_t
mdbx_limits_valsize_max(intptr_t pagesize, MDBX_db_flags_t flags);




__attribute__((__const__, __nothrow__)) intptr_t
mdbx_limits_txnsize_max(intptr_t pagesize);
# 3009 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_maxreaders (MDBX_env * env, unsigned readers); static __inline int __inline_mdbx_env_set_maxreaders (MDBX_env * env, unsigned readers)
                                                       {
  return mdbx_env_set_option(env, MDBX_opt_max_readers, readers);
}
# 3025 "/libmdbx/src/../mdbx.h"
 int mdbx_env_get_maxreaders (const MDBX_env *env, unsigned *readers); static __inline int __inline_mdbx_env_get_maxreaders (const MDBX_env *env, unsigned *readers)
                                                             {
  int rc = MDBX_EINVAL;
  if (readers) {
    uint64_t proxy = 0;
    rc = mdbx_env_get_option(env, MDBX_opt_max_readers, &proxy);
    *readers = (unsigned)proxy;
  }
  return rc;
}
# 3057 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_maxdbs (MDBX_env * env, MDBX_dbi dbs); static __inline int __inline_mdbx_env_set_maxdbs (MDBX_env * env, MDBX_dbi dbs) {
  return mdbx_env_set_option(env, MDBX_opt_max_db, dbs);
}
# 3071 "/libmdbx/src/../mdbx.h"
 int mdbx_env_get_maxdbs (const MDBX_env *env, MDBX_dbi *dbs); static __inline int __inline_mdbx_env_get_maxdbs (const MDBX_env *env, MDBX_dbi *dbs)
                                                         {
  int rc = MDBX_EINVAL;
  if (dbs) {
    uint64_t proxy = 0;
    rc = mdbx_env_get_option(env, MDBX_opt_max_db, &proxy);
    *dbs = (MDBX_dbi)proxy;
  }
  return rc;
}





__attribute__((__pure__, __nothrow__)) size_t mdbx_default_pagesize(void);
# 3102 "/libmdbx/src/../mdbx.h"
 int mdbx_get_sysraminfo(intptr_t *page_size, intptr_t *total_pages,
                                    intptr_t *avail_pages);
# 3114 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) int
mdbx_env_get_maxkeysize_ex(const MDBX_env *env, MDBX_db_flags_t flags);
# 3126 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) int
mdbx_env_get_maxvalsize_ex(const MDBX_env *env, MDBX_db_flags_t flags);




__attribute__((__pure__, __nothrow__)) int
mdbx_env_get_maxkeysize(const MDBX_env *env);
# 3144 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_userctx(MDBX_env *env, void *ctx);
# 3154 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) void *
mdbx_env_get_userctx(const MDBX_env *env);
# 3216 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_begin_ex(MDBX_env *env, MDBX_txn *parent,
                                  MDBX_txn_flags_t flags, MDBX_txn **txn,
                                  void *context);
# 3274 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_begin (MDBX_env * env, MDBX_txn *parent, MDBX_txn_flags_t flags, MDBX_txn **txn); static __inline int __inline_mdbx_txn_begin (MDBX_env * env, MDBX_txn *parent, MDBX_txn_flags_t flags, MDBX_txn **txn)

                                     {
  return mdbx_txn_begin_ex(env, parent, flags, txn, 
# 3277 "/libmdbx/src/../mdbx.h" 3 4
                                                   ((void *)0)
# 3277 "/libmdbx/src/../mdbx.h"
                                                       );
}
# 3290 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_set_userctx(MDBX_txn *txn, void *ctx);
# 3302 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) void *
mdbx_txn_get_userctx(const MDBX_txn *txn);




struct MDBX_txn_info {


  uint64_t txn_id;





  uint64_t txn_reader_lag;



  uint64_t txn_space_used;


  uint64_t txn_space_limit_soft;



  uint64_t txn_space_limit_hard;







  uint64_t txn_space_retired;






  uint64_t txn_space_leftover;






  uint64_t txn_space_dirty;
};


typedef struct MDBX_txn_info MDBX_txn_info;
# 3370 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_info(const MDBX_txn *txn, MDBX_txn_info *info,
                              _Bool scan_rlt);





__attribute__((__pure__, __nothrow__)) MDBX_env *
mdbx_txn_env(const MDBX_txn *txn);
# 3389 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) int mdbx_txn_flags(const MDBX_txn *txn);
# 3402 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) uint64_t
mdbx_txn_id(const MDBX_txn *txn);




struct MDBX_commit_latency {


  uint32_t preparation;

  uint32_t gc;

  uint32_t audit;


  uint32_t write;


  uint32_t sync;

  uint32_t ending;

  uint32_t whole;
};


typedef struct MDBX_commit_latency MDBX_commit_latency;







 int mdbx_txn_commit_ex(MDBX_txn *txn, MDBX_commit_latency *latency);
# 3476 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_commit (MDBX_txn * txn); static __inline int __inline_mdbx_txn_commit (MDBX_txn * txn) {
  return mdbx_txn_commit_ex(txn, 
# 3477 "/libmdbx/src/../mdbx.h" 3 4
                                ((void *)0)
# 3477 "/libmdbx/src/../mdbx.h"
                                    );
}
# 3513 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_abort(MDBX_txn *txn);
# 3526 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_break(MDBX_txn *txn);
# 3560 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_reset(MDBX_txn *txn);
# 3582 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_renew(MDBX_txn *txn);
# 3594 "/libmdbx/src/../mdbx.h"
struct MDBX_canary {
  uint64_t x, y, z, v;
};


typedef struct MDBX_canary MDBX_canary;
# 3620 "/libmdbx/src/../mdbx.h"
 int mdbx_canary_put(MDBX_txn *txn, const MDBX_canary *canary);
# 3632 "/libmdbx/src/../mdbx.h"
 int mdbx_canary_get(const MDBX_txn *txn, MDBX_canary *canary);
# 3654 "/libmdbx/src/../mdbx.h"
typedef int(MDBX_cmp_func)(const MDBX_val *a,
                           const MDBX_val *b) ;
# 3746 "/libmdbx/src/../mdbx.h"
 int mdbx_dbi_open(MDBX_txn *txn, const char *name,
                              MDBX_db_flags_t flags, MDBX_dbi *dbi);
# 3764 "/libmdbx/src/../mdbx.h"
 int
mdbx_dbi_open_ex(MDBX_txn *txn, const char *name, MDBX_db_flags_t flags,
                 MDBX_dbi *dbi, MDBX_cmp_func *keycmp, MDBX_cmp_func *datacmp);
# 3779 "/libmdbx/src/../mdbx.h"
__attribute__((__const__, __nothrow__)) uint64_t
mdbx_key_from_jsonInteger(const int64_t json_integer);

__attribute__((__const__, __nothrow__)) uint64_t
mdbx_key_from_double(const double ieee754_64bit);

__attribute__((__pure__, __nothrow__)) uint64_t
mdbx_key_from_ptrdouble(const double *const ieee754_64bit);

__attribute__((__const__, __nothrow__)) uint32_t
mdbx_key_from_float(const float ieee754_32bit);

__attribute__((__pure__, __nothrow__)) uint32_t
mdbx_key_from_ptrfloat(const float *const ieee754_32bit);

__attribute__((__const__, __nothrow__)) uint64_t mdbx_key_from_int64 (const int64_t i64); static __inline uint64_t __inline_mdbx_key_from_int64 (const int64_t i64)
                                                                    {
  return 0x8000000000000000UL + i64;
}

__attribute__((__const__, __nothrow__)) uint32_t mdbx_key_from_int32 (const int32_t i32); static __inline uint32_t __inline_mdbx_key_from_int32 (const int32_t i32)
                                                                    {
  return 0x80000000U + i32;
}







__attribute__((__pure__, __nothrow__)) int64_t
mdbx_jsonInteger_from_key(const MDBX_val);

__attribute__((__pure__, __nothrow__)) double
mdbx_double_from_key(const MDBX_val);

__attribute__((__pure__, __nothrow__)) float
mdbx_float_from_key(const MDBX_val);

__attribute__((__pure__, __nothrow__)) int32_t
mdbx_int32_from_key(const MDBX_val);

__attribute__((__pure__, __nothrow__)) int64_t
mdbx_int64_from_key(const MDBX_val);
# 3840 "/libmdbx/src/../mdbx.h"
 int mdbx_dbi_stat(MDBX_txn *txn, MDBX_dbi dbi, MDBX_stat *stat,
                              size_t bytes);
# 3858 "/libmdbx/src/../mdbx.h"
 int mdbx_dbi_dupsort_depthmask(MDBX_txn *txn, MDBX_dbi dbi,
                                           uint32_t *mask);




enum MDBX_dbi_state_t {

  MDBX_DBI_DIRTY = 0x01,

  MDBX_DBI_STALE = 0x02,

  MDBX_DBI_FRESH = 0x04,

  MDBX_DBI_CREAT = 0x08,
};


typedef enum MDBX_dbi_state_t MDBX_dbi_state_t;
# 3890 "/libmdbx/src/../mdbx.h"
 int mdbx_dbi_flags_ex(MDBX_txn *txn, MDBX_dbi dbi, unsigned *flags,
                                  unsigned *state);



 int mdbx_dbi_flags (MDBX_txn * txn, MDBX_dbi dbi, unsigned *flags); static __inline int __inline_mdbx_dbi_flags (MDBX_txn * txn, MDBX_dbi dbi, unsigned *flags)
                                                                    {
  unsigned state;
  return mdbx_dbi_flags_ex(txn, dbi, flags, &state);
}
# 3923 "/libmdbx/src/../mdbx.h"
 int mdbx_dbi_close(MDBX_env *env, MDBX_dbi dbi);
# 3936 "/libmdbx/src/../mdbx.h"
 int mdbx_drop(MDBX_txn *txn, MDBX_dbi dbi, _Bool del);
# 3967 "/libmdbx/src/../mdbx.h"
 int mdbx_get(MDBX_txn *txn, MDBX_dbi dbi, const MDBX_val *key,
                         MDBX_val *data);
# 4000 "/libmdbx/src/../mdbx.h"
 int mdbx_get_ex(MDBX_txn *txn, MDBX_dbi dbi, MDBX_val *key,
                            MDBX_val *data, size_t *values_count);
# 4031 "/libmdbx/src/../mdbx.h"
 int mdbx_get_equal_or_great(MDBX_txn *txn, MDBX_dbi dbi,
                                        MDBX_val *key, MDBX_val *data);
# 4115 "/libmdbx/src/../mdbx.h"
 int mdbx_put(MDBX_txn *txn, MDBX_dbi dbi, const MDBX_val *key,
                         MDBX_val *data, MDBX_put_flags_t flags);
# 4161 "/libmdbx/src/../mdbx.h"
 int mdbx_replace(MDBX_txn *txn, MDBX_dbi dbi, const MDBX_val *key,
                             MDBX_val *new_data, MDBX_val *old_data,
                             MDBX_put_flags_t flags);

typedef int (*MDBX_preserve_func)(void *context, MDBX_val *target,
                                  const void *src, size_t bytes);
 int mdbx_replace_ex(MDBX_txn *txn, MDBX_dbi dbi,
                                const MDBX_val *key, MDBX_val *new_data,
                                MDBX_val *old_data, MDBX_put_flags_t flags,
                                MDBX_preserve_func preserver,
                                void *preserver_context);
# 4198 "/libmdbx/src/../mdbx.h"
 int mdbx_del(MDBX_txn *txn, MDBX_dbi dbi, const MDBX_val *key,
                         const MDBX_val *data);
# 4223 "/libmdbx/src/../mdbx.h"
 MDBX_cursor *mdbx_cursor_create(void *context);
# 4234 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_set_userctx(MDBX_cursor *cursor, void *ctx);
# 4245 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) void *
mdbx_cursor_get_userctx(const MDBX_cursor *cursor);
# 4273 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_bind(MDBX_txn *txn, MDBX_cursor *cursor,
                                 MDBX_dbi dbi);
# 4306 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_open(MDBX_txn *txn, MDBX_dbi dbi,
                                 MDBX_cursor **cursor);
# 4323 "/libmdbx/src/../mdbx.h"
 void mdbx_cursor_close(MDBX_cursor *cursor);
# 4348 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_renew(MDBX_txn *txn, MDBX_cursor *cursor);





__attribute__((__pure__, __nothrow__)) MDBX_txn *
mdbx_cursor_txn(const MDBX_cursor *cursor);





 MDBX_dbi mdbx_cursor_dbi(const MDBX_cursor *cursor);
# 4373 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_copy(const MDBX_cursor *src, MDBX_cursor *dest);
# 4396 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_get(MDBX_cursor *cursor, MDBX_val *key,
                                MDBX_val *data, MDBX_cursor_op op);
# 4432 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_get_batch(MDBX_cursor *cursor, size_t *count,
                                      MDBX_val *pairs, size_t limit,
                                      MDBX_cursor_op op);
# 4516 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_put(MDBX_cursor *cursor, const MDBX_val *key,
                                MDBX_val *data, MDBX_put_flags_t flags);
# 4549 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_del(MDBX_cursor *cursor, MDBX_put_flags_t flags);
# 4566 "/libmdbx/src/../mdbx.h"
 int mdbx_cursor_count(const MDBX_cursor *cursor, size_t *pcount);
# 4580 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) int
mdbx_cursor_eof(const MDBX_cursor *cursor);
# 4594 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) int
mdbx_cursor_on_first(const MDBX_cursor *cursor);
# 4608 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) int
mdbx_cursor_on_last(const MDBX_cursor *cursor);
# 4655 "/libmdbx/src/../mdbx.h"
 int mdbx_estimate_distance(const MDBX_cursor *first,
                                       const MDBX_cursor *last,
                                       ptrdiff_t *distance_items);
# 4679 "/libmdbx/src/../mdbx.h"
 int mdbx_estimate_move(const MDBX_cursor *cursor, MDBX_val *key,
                                   MDBX_val *data, MDBX_cursor_op move_op,
                                   ptrdiff_t *distance_items);
# 4707 "/libmdbx/src/../mdbx.h"
 int mdbx_estimate_range(MDBX_txn *txn, MDBX_dbi dbi,
                                    MDBX_val *begin_key, MDBX_val *begin_data,
                                    MDBX_val *end_key, MDBX_val *end_data,
                                    ptrdiff_t *distance_items);
# 4749 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) int mdbx_is_dirty(const MDBX_txn *txn,
                                                         const void *ptr);
# 4773 "/libmdbx/src/../mdbx.h"
 int mdbx_dbi_sequence(MDBX_txn *txn, MDBX_dbi dbi, uint64_t *result,
                                  uint64_t increment);
# 4791 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) int mdbx_cmp(const MDBX_txn *txn,
                                                    MDBX_dbi dbi,
                                                    const MDBX_val *a,
                                                    const MDBX_val *b);



__attribute__((__const__, __nothrow__)) MDBX_cmp_func *
mdbx_get_keycmp(MDBX_db_flags_t flags);
# 4816 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) int mdbx_dcmp(const MDBX_txn *txn,
                                                     MDBX_dbi dbi,
                                                     const MDBX_val *a,
                                                     const MDBX_val *b);



__attribute__((__const__, __nothrow__)) MDBX_cmp_func *
mdbx_get_datacmp(MDBX_db_flags_t flags);
# 4851 "/libmdbx/src/../mdbx.h"
typedef int(MDBX_reader_list_func)(void *ctx, int num, int slot, mdbx_pid_t pid,
                                   mdbx_tid_t thread, uint64_t txnid,
                                   uint64_t lag, size_t bytes_used,
                                   size_t bytes_retained) ;
# 4867 "/libmdbx/src/../mdbx.h"
 int mdbx_reader_list(const MDBX_env *env,
                                 MDBX_reader_list_func *func, void *ctx);
# 4878 "/libmdbx/src/../mdbx.h"
 int mdbx_reader_check(MDBX_env *env, int *dead);
# 4892 "/libmdbx/src/../mdbx.h"
 int mdbx_txn_straggler(const MDBX_txn *txn,
                                                   int *percent);
# 4913 "/libmdbx/src/../mdbx.h"
 int mdbx_thread_register(const MDBX_env *env);
# 4928 "/libmdbx/src/../mdbx.h"
 int mdbx_thread_unregister(const MDBX_env *env);
# 5001 "/libmdbx/src/../mdbx.h"
typedef int(MDBX_hsr_func)(const MDBX_env *env, const MDBX_txn *txn,
                           mdbx_pid_t pid, mdbx_tid_t tid, uint64_t laggard,
                           unsigned gap, size_t space,
                           int retry) ;
# 5023 "/libmdbx/src/../mdbx.h"
 int mdbx_env_set_hsr(MDBX_env *env, MDBX_hsr_func *hsr_callback);
# 5036 "/libmdbx/src/../mdbx.h"
__attribute__((__pure__, __nothrow__)) MDBX_hsr_func *
mdbx_env_get_hsr(const MDBX_env *env);
# 5047 "/libmdbx/src/../mdbx.h"
enum MDBX_page_type_t {
  MDBX_page_broken,
  MDBX_page_meta,
  MDBX_page_large,
  MDBX_page_branch,
  MDBX_page_leaf,
  MDBX_page_dupfixed_leaf,
  MDBX_subpage_leaf,
  MDBX_subpage_dupfixed_leaf,
  MDBX_subpage_broken,
};

typedef enum MDBX_page_type_t MDBX_page_type_t;
# 5070 "/libmdbx/src/../mdbx.h"
typedef int MDBX_pgvisitor_func(
    const uint64_t pgno, const unsigned number, void *const ctx, const int deep,
    const char *const dbi, const size_t page_size, const MDBX_page_type_t type,
    const MDBX_error_t err, const size_t nentries, const size_t payload_bytes,
    const size_t header_bytes, const size_t unused_bytes) ;


 int mdbx_env_pgwalk(MDBX_txn *txn, MDBX_pgvisitor_func *visitor,
                                void *ctx, _Bool dont_check_keys_ordering);







 int mdbx_env_open_for_recovery(MDBX_env *env, const char *pathname,
                                           unsigned target_meta,
                                           _Bool writeable);






 int mdbx_env_turn_for_recovery(MDBX_env *env, unsigned target_meta);
# 131 "/libmdbx/src/internals.h" 2
# 1 "/libmdbx/src/defs.h" 1
# 15 "/libmdbx/src/defs.h"
       
# 256 "/libmdbx/src/defs.h"
    __attribute__((__unused__)) __attribute__((__pure__)) static __inline const void*
        __Wpedantic_format_voidptr(const void* ptr) {return ptr;}
# 132 "/libmdbx/src/internals.h" 2
# 201 "/libmdbx/src/internals.h"
# 1 "/libmdbx/src/osal.h" 1
# 17 "/libmdbx/src/osal.h"
       
# 47 "/libmdbx/src/osal.h"
# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4

# 34 "/usr/include/inttypes.h" 3 4
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


# 48 "/libmdbx/src/osal.h" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 49 "/libmdbx/src/osal.h" 2

# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
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
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64 strtof64 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float128 strtof128 (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float32x strtof32x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64x strtof64x (const char *__restrict __nptr,
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




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 233 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 275 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 317 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64 strtof64_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float128 strtof128_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float32x strtof32x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64x strtof64x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 361 "/usr/include/stdlib.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}


__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}
# 386 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 402 "/usr/include/stdlib.h" 3 4
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
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) __attribute__ ((__warn_unused_result__));






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
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
     __attribute__ ((__alloc_size__ (2))) __attribute__ ((__warn_unused_result__));



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 682 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 698 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __asm__ ("" "mkstemp64")
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 720 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __asm__ ("" "mkstemps64")
                     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 738 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 752 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __asm__ ("" "mkostemp64")
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 773 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags) __asm__ ("" "mkostemps64")

     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 791 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) __attribute__ ((__warn_unused_result__));





extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__malloc__))
     __attribute__ ((__malloc__ (__builtin_free, 1))) __attribute__ ((__warn_unused_result__));
# 808 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));


# 1 "/usr/include/aarch64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/aarch64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (const void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 {

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"

   return (void *) __p;

#pragma GCC diagnostic pop

 }
    }

  return ((void *)0);
}
# 834 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
# 880 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




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






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 967 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));







extern int posix_openpt (int __oflag) __attribute__ ((__warn_unused_result__));







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 2, 3)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1023 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/stdlib-float.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
# 1024 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/stdlib.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/stdlib.h" 3 4
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) __asm__ ("" "realpath") __attribute__ ((__nothrow__ , __leaf__))

                                                 __attribute__ ((__warn_unused_result__));
extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("" "__realpath_chk") __attribute__ ((__nothrow__ , __leaf__))


                                                __attribute__ ((__warn_unused_result__))
     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")))
                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) realpath (const char *__restrict __name, char *__restrict __resolved)
{
  size_t sz = __builtin_object_size (__resolved, 2 > 1);

  if (sz == (size_t) -1)
    return __realpath_alias (__name, __resolved);





  return __realpath_chk (__name, __resolved, sz);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ptsname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ptsname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")))
                   ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ptsname_r (int __fd, char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ptsname_r_alias (__fd, __buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1))))

                           ;
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) __asm__ ("" "wctomb") __attribute__ ((__nothrow__ , __leaf__))
              __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__nothrow__ , __leaf__)) wctomb (char *__s, wchar_t __wchar)
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1
      && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) __asm__ ("" "mbstowcs") __attribute__ ((__nothrow__ , __leaf__))



    __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__mbstowcs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len)

{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) ? __mbstowcs_alias (__dst, __src, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) ? __mbstowcs_chk_warn (__dst, __src, __len, (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t))) : __mbstowcs_chk (__dst, __src, __len, (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))))

                           ;
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) __asm__ ("" "wcstombs") __attribute__ ((__nothrow__ , __leaf__))



  __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__wcstombs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len)

{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) ? __wcstombs_alias (__dst, __src, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) ? __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1)) : __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1))))

                         ;
}
# 1028 "/usr/include/stdlib.h" 2 3 4








# 51 "/libmdbx/src/osal.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 53 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







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


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };



# 1 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 265 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 3 4
enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 354 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/linux/falloc.h" 1 3 4
# 355 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 2 3 4



struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};
# 393 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 3 4





extern __ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    __attribute__ ((__nothrow__ , __leaf__));






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern __ssize_t vmsplice (int __fdout, const struct iovec *__iov,
      size_t __count, unsigned int __flags);





extern __ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
    __off64_t *__offout, size_t __len,
    unsigned int __flags);





extern __ssize_t tee (int __fdin, int __fdout, size_t __len,
        unsigned int __flags);
# 440 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 3 4
extern int fallocate (int __fd, int __mode, __off64_t __offset, __off64_t __len) __asm__ ("" "fallocate64")

                     ;





extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) __attribute__ ((__nothrow__ , __leaf__));





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);




# 62 "/usr/include/aarch64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 78 "/usr/include/fcntl.h" 3 4
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




struct stat64
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
# 117 "/usr/include/aarch64-linux-gnu/bits/struct_stat.h" 3 4
    int __glibc_reserved[2];
  };
# 26 "/usr/include/aarch64-linux-gnu/bits/stat.h" 2 3 4
# 79 "/usr/include/fcntl.h" 2 3 4
# 152 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...) __asm__ ("" "fcntl64");





extern int fcntl64 (int __fd, int __cmd, ...);
# 184 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __asm__ ("" "open64")
     __attribute__ ((__nonnull__ (1)));





extern int open64 (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 209 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...) __asm__ ("" "openat64")
                    __attribute__ ((__nonnull__ (2)));





extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 230 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __asm__ ("" "creat64")
                  __attribute__ ((__nonnull__ (1)));





extern int creat64 (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 259 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__ ("" "lockf64");





extern int lockf64 (int __fd, int __cmd, off64_t __len);
# 277 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off64_t __offset, __off64_t __len, int __advise) __asm__ ("" "posix_fadvise64") __attribute__ ((__nothrow__ , __leaf__))

                      ;





extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 298 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off64_t __offset, __off64_t __len) __asm__ ("" "posix_fallocate64")

                           ;





extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);







# 1 "/usr/include/aarch64-linux-gnu/bits/fcntl2.h" 1 3 4
# 30 "/usr/include/aarch64-linux-gnu/bits/fcntl2.h" 3 4
extern int __open_2 (const char *__path, int __oflag) __asm__ ("" "__open64_2")
                     __attribute__ ((__nonnull__ (1)));
extern int __open_alias (const char *__path, int __oflag, ...) __asm__ ("" "open64")
                 __attribute__ ((__nonnull__ (1)));

extern void __open_too_many_args (void) __attribute__((__error__ ("open can be called either with 2 or 3 arguments, not more")))
                                                                  ;
extern void __open_missing_mode (void) __attribute__((__error__ ("open with O_CREAT or O_TMPFILE in second argument needs 3 arguments")))
                                                                            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
open (const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __open_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 040000)) == (020000000 | 040000)) && __builtin_va_arg_pack_len () < 1)
 {
   __open_missing_mode ();
   return __open_2 (__path, __oflag);
 }
      return __open_alias (__path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __open_2 (__path, __oflag);

  return __open_alias (__path, __oflag, __builtin_va_arg_pack ());
}



extern int __open64_2 (const char *__path, int __oflag) __attribute__ ((__nonnull__ (1)));
extern int __open64_alias (const char *__path, int __oflag, ...) __asm__ ("" "open64")
                   __attribute__ ((__nonnull__ (1)));
extern void __open64_too_many_args (void) __attribute__((__error__ ("open64 can be called either with 2 or 3 arguments, not more")))
                                                                    ;
extern void __open64_missing_mode (void) __attribute__((__error__ ("open64 with O_CREAT or O_TMPFILE in second argument needs 3 arguments")))
                                                                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
open64 (const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __open64_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 040000)) == (020000000 | 040000)) && __builtin_va_arg_pack_len () < 1)
 {
   __open64_missing_mode ();
   return __open64_2 (__path, __oflag);
 }
      return __open64_alias (__path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __open64_2 (__path, __oflag);

  return __open64_alias (__path, __oflag, __builtin_va_arg_pack ());
}
# 104 "/usr/include/aarch64-linux-gnu/bits/fcntl2.h" 3 4
extern int __openat_2 (int __fd, const char *__path, int __oflag) __asm__ ("" "__openat64_2")

     __attribute__ ((__nonnull__ (2)));
extern int __openat_alias (int __fd, const char *__path, int __oflag, ...) __asm__ ("" "openat64")

     __attribute__ ((__nonnull__ (2)));

extern void __openat_too_many_args (void) __attribute__((__error__ ("openat can be called either with 3 or 4 arguments, not more")))
                                                                    ;
extern void __openat_missing_mode (void) __attribute__((__error__ ("openat with O_CREAT or O_TMPFILE in third argument needs 4 arguments")))
                                                                             ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
openat (int __fd, const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __openat_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 040000)) == (020000000 | 040000)) && __builtin_va_arg_pack_len () < 1)
 {
   __openat_missing_mode ();
   return __openat_2 (__fd, __path, __oflag);
 }
      return __openat_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __openat_2 (__fd, __path, __oflag);

  return __openat_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
}



extern int __openat64_2 (int __fd, const char *__path, int __oflag)
     __attribute__ ((__nonnull__ (2)));
extern int __openat64_alias (int __fd, const char *__path, int __oflag, ...) __asm__ ("" "openat64")

     __attribute__ ((__nonnull__ (2)));
extern void __openat64_too_many_args (void) __attribute__((__error__ ("openat64 can be called either with 3 or 4 arguments, not more")))
                                                                      ;
extern void __openat64_missing_mode (void) __attribute__((__error__ ("openat64 with O_CREAT or O_TMPFILE in third argument needs 4 arguments")))
                                                                               ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
openat64 (int __fd, const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __openat64_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 040000)) == (020000000 | 040000)) && __builtin_va_arg_pack_len () < 1)
 {
   __openat64_missing_mode ();
   return __openat64_2 (__fd, __path, __oflag);
 }
      return __openat64_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __openat64_2 (__fd, __path, __oflag);

  return __openat64_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
}
# 315 "/usr/include/fcntl.h" 2 3 4



# 54 "/libmdbx/src/osal.h" 2
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
# 162 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 196 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 200 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 204 "/usr/include/limits.h" 2 3 4
# 204 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/aarch64-linux-gnu/11/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 2 3 4
# 55 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4





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


# 1 "/usr/include/aarch64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4
# 86 "/usr/include/stdio.h" 3 4
typedef __fpos64_t fpos_t;


typedef __fpos64_t fpos64_t;
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
# 170 "/usr/include/stdio.h" 3 4
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));






extern int fclose (FILE *__stream);
# 192 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) __asm__ ("" "tmpfile64")
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));






extern FILE *tmpfile64 (void)
   __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));



extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 222 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__malloc__ (__builtin_free, 1)));






extern int fflush (FILE *__stream);
# 239 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 249 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 270 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename, const char *__restrict __modes) __asm__ ("" "fopen64")

  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern FILE *freopen (const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream) __asm__ ("" "freopen64")


  __attribute__ ((__warn_unused_result__));






extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
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





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 434 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                          __attribute__ ((__warn_unused_result__));
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                         __attribute__ ((__warn_unused_result__));
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 459 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));





extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));
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
     __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
# 615 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
# 632 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 691 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 702 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




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







extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));







extern void perror (const char *__s);




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 823 "/usr/include/stdio.h" 3 4
extern int pclose (FILE *__stream);





extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (pclose, 1))) __attribute__ ((__warn_unused_result__));






extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1)));





extern char *cuserid (char *__s)
  __attribute__ ((__access__ (__write_only__, 1)));




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 885 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);




# 1 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 1 3 4
# 46 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0010) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0020) != 0);
}
# 892 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/stdio2.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3)));
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      const char *__restrict __format,
      __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) sprintf (char *__restrict __s, const char *__restrict __fmt, ...)
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt,
      __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsprintf (char *__restrict __s, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, const char *__restrict __format,
      ...) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, const char *__restrict __format,
       __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) snprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, ...)

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt,
       __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsnprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
     __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vfprintf (FILE *__restrict __stream,
   const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}


extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}





extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vdprintf (int __fd, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}




extern int __asprintf_chk (char **__restrict __ptr, int __flag,
      const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4))) __attribute__ ((__warn_unused_result__));
extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
       const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0))) __attribute__ ((__warn_unused_result__));
extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
     int __flag, const char *__restrict __format,
     ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
      int __flag,
      const char *__restrict __format,
      __gnuc_va_list __args)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)
{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) __asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)

{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_printf (struct obstack *__restrict __obstack, const char *__restrict __fmt, ...)

{
  return __obstack_printf_chk (__obstack, 2 - 1, __fmt,
          __builtin_va_arg_pack ());
}
# 214 "/usr/include/aarch64-linux-gnu/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vasprintf (char **__restrict __ptr, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __vasprintf_chk (__ptr, 2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_vprintf (struct obstack *__restrict __obstack, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __obstack_vprintf_chk (__obstack, 2 - 1, __fmt,
    __ap);
}
# 248 "/usr/include/aarch64-linux-gnu/bits/stdio2.h" 3 4
extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream)
    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 3)));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets")


    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2))) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__s, 2 > 1);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && (((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_alias (__s, __n, __stream);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && !(((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_chk_warn (__s, sz, __n, __stream);
  return __fgets_chk (__s, sz, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread")


            __attribute__ ((__warn_unused_result__));
extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__ptr, 0);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && (((long unsigned int) (__n)) <= (sz) / (__size))))
    return __fread_alias (__ptr, __size, __n, __stream);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && !(((long unsigned int) (__n)) <= (sz) / (__size))))
    return __fread_chk_warn (__ptr, sz, __size, __n, __stream);
  return __fread_chk (__ptr, sz, __size, __n, __stream);
}


extern char *__fgets_unlocked_chk (char *__restrict __s, size_t __size,
       int __n, FILE *__restrict __stream)
    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 3)));
extern char *__fgets_unlocked_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets_unlocked")


    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *__fgets_unlocked_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_unlocked_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets_unlocked called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2))) char *
fgets_unlocked (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__s, 2 > 1);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && (((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_unlocked_alias (__s, __n, __stream);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && !(((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_unlocked_chk_warn (__s, sz, __n, __stream);
  return __fgets_unlocked_chk (__s, sz, __n, __stream);
}




extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked")


                     __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")))
                                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__ptr, 0);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && (((long unsigned int) (__n)) <= (sz) / (__size))))
    {

      if (__builtin_constant_p (__size)
   && __builtin_constant_p (__n)
   && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
   && __size * __n <= 8)
 {
   size_t __cnt = __size * __n;
   char *__cptr = (char *) __ptr;
   if (__cnt == 0)
     return 0;

   for (; __cnt > 0; --__cnt)
     {
       int __c = getc_unlocked (__stream);
       if (__c == (-1))
  break;
       *__cptr++ = __c;
     }
   return (__cptr - (char *) __ptr) / __size;
 }

      return __fread_unlocked_alias (__ptr, __size, __n, __stream);
    }
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && !(((long unsigned int) (__n)) <= (sz) / (__size))))
    return __fread_unlocked_chk_warn (__ptr, sz, __size, __n, __stream);
  return __fread_unlocked_chk (__ptr, sz, __size, __n, __stream);

}
# 895 "/usr/include/stdio.h" 2 3 4








# 56 "/libmdbx/src/osal.h" 2
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
# 120 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 133 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)))
      __attribute__ ((__access__ (__read_only__, 1, 3)));





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
# 286 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





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
# 380 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)))
    __attribute__ ((__access__ (__read_only__, 1, 2)))
    __attribute__ ((__access__ (__read_only__, 3, 4)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));




extern const char *strerrordesc_np (int __err) __attribute__ ((__nothrow__ , __leaf__));

extern const char *strerrorname_np (int __err) __attribute__ ((__nothrow__ , __leaf__));





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








# 1 "/usr/include/aarch64-linux-gnu/bits/strings_fortified.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/bits/strings_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bcopy (const void *__src, void *__dest, size_t __len)
{
  (void) __builtin___memmove_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bzero (void *__dest, size_t __len)
{
  (void) __builtin___memset_chk (__dest, '\0', __len,
     __builtin_object_size (__dest, 0));
}
# 145 "/usr/include/strings.h" 2 3 4
# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));



extern const char *sigabbrev_np (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern const char *sigdescr_np (int __sig) __attribute__ ((__nothrow__ , __leaf__));



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




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__read_write__, 1, 2)));
# 527 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







# 1 "/usr/include/aarch64-linux-gnu/bits/string_fortified.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___memcpy_chk (__dest, __src, __len,
     __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memmove (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) mempcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___mempcpy_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 0));
}
# 56 "/usr/include/aarch64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memset (void *__dest, int __ch, size_t __len)
{
  return __builtin___memset_chk (__dest, __ch, __len,
     __builtin_object_size (__dest, 0));
}




void __explicit_bzero_chk (void *__dest, size_t __len, size_t __destlen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__write_only__, 1, 2)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) explicit_bzero (void *__dest, size_t __len)
{
  __explicit_bzero_chk (__dest, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncpy_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpncpy (char *__dest, const char *__src, size_t __n)
{
  return __builtin___stpncpy_chk (__dest, __src, __n,
      __builtin_object_size (__dest, 2 > 1));
}
# 127 "/usr/include/aarch64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcat (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncat (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncat_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 2 > 1));
}
# 536 "/usr/include/string.h" 2 3 4




# 57 "/libmdbx/src/osal.h" 2




# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdalign.h" 1 3 4
# 62 "/libmdbx/src/osal.h" 2
# 100 "/libmdbx/src/osal.h"
# 1 "/usr/include/malloc.h" 1 3 4
# 24 "/usr/include/malloc.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 25 "/usr/include/malloc.h" 2 3 4
# 36 "/usr/include/malloc.h" 3 4



extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__));


extern void *calloc (size_t __nmemb, size_t __size)
__attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) __attribute__ ((__warn_unused_result__));






extern void *realloc (void *__ptr, size_t __size)
__attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));






extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2, 3)))
  __attribute__ ((__malloc__ (__builtin_free, 1)));


extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


extern void *memalign (size_t __alignment, size_t __size)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
  __attribute__ ((__alloc_size__ (2))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__malloc__ (__builtin_free, 1)));


extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__malloc__ (__builtin_free, 1)));



extern void *pvalloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__malloc__ (__builtin_free, 1)));



struct mallinfo
{
  int arena;
  int ordblks;
  int smblks;
  int hblks;
  int hblkhd;
  int usmblks;
  int fsmblks;
  int uordblks;
  int fordblks;
  int keepcost;
};




struct mallinfo2
{
  size_t arena;
  size_t ordblks;
  size_t smblks;
  size_t hblks;
  size_t hblkhd;
  size_t usmblks;
  size_t fsmblks;
  size_t uordblks;
  size_t fordblks;
  size_t keepcost;
};


extern struct mallinfo mallinfo (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern struct mallinfo2 mallinfo2 (void) __attribute__ ((__nothrow__ , __leaf__));
# 144 "/usr/include/malloc.h" 3 4
extern int mallopt (int __param, int __val) __attribute__ ((__nothrow__ , __leaf__));



extern int malloc_trim (size_t __pad) __attribute__ ((__nothrow__ , __leaf__));



extern size_t malloc_usable_size (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


extern void malloc_stats (void) __attribute__ ((__nothrow__ , __leaf__));


extern int malloc_info (int __options, FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));


# 101 "/libmdbx/src/osal.h" 2


# 1 "/usr/include/mntent.h" 1 3 4
# 23 "/usr/include/mntent.h" 3 4
# 1 "/usr/include/paths.h" 1 3 4
# 24 "/usr/include/mntent.h" 2 3 4
# 48 "/usr/include/mntent.h" 3 4



struct mntent
  {
    char *mnt_fsname;
    char *mnt_dir;
    char *mnt_type;
    char *mnt_opts;
    int mnt_freq;
    int mnt_passno;
  };




extern FILE *setmntent (const char *__file, const char *__mode) __attribute__ ((__nothrow__ , __leaf__));




extern struct mntent *getmntent (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern struct mntent *getmntent_r (FILE *__restrict __stream,
       struct mntent *__restrict __result,
       char *__restrict __buffer,
       int __bufsize) __attribute__ ((__nothrow__ , __leaf__));




extern int addmntent (FILE *__restrict __stream,
        const struct mntent *__restrict __mnt) __attribute__ ((__nothrow__ , __leaf__));


extern int endmntent (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern char *hasmntopt (const struct mntent *__mnt,
   const char *__opt) __attribute__ ((__nothrow__ , __leaf__));



# 104 "/libmdbx/src/osal.h" 2
# 124 "/libmdbx/src/osal.h"
# 1 "/usr/include/aarch64-linux-gnu/sys/sendfile.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/sys/sendfile.h" 3 4

# 37 "/usr/include/aarch64-linux-gnu/sys/sendfile.h" 3 4
extern ssize_t sendfile (int __out_fd, int __in_fd, __off64_t *__offset, size_t __count) __asm__ ("" "sendfile64") __attribute__ ((__nothrow__ , __leaf__))

                                ;





extern ssize_t sendfile64 (int __out_fd, int __in_fd, __off64_t *__offset,
      size_t __count) __attribute__ ((__nothrow__ , __leaf__));



# 125 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/aarch64-linux-gnu/sys/statfs.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/sys/statfs.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/statfs.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/statfs.h" 3 4
struct statfs
  {
    __fsword_t f_type;
    __fsword_t f_bsize;







    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;

    __fsid_t f_fsid;
    __fsword_t f_namelen;
    __fsword_t f_frsize;
    __fsword_t f_flags;
    __fsword_t f_spare[4];
  };


struct statfs64
  {
    __fsword_t f_type;
    __fsword_t f_bsize;
    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;
    __fsid_t f_fsid;
    __fsword_t f_namelen;
    __fsword_t f_frsize;
    __fsword_t f_flags;
    __fsword_t f_spare[4];
  };
# 26 "/usr/include/aarch64-linux-gnu/sys/statfs.h" 2 3 4









extern int statfs (const char *__file, struct statfs *__buf) __asm__ ("" "statfs64") __attribute__ ((__nothrow__ , __leaf__))

                __attribute__ ((__nonnull__ (1, 2)));





extern int statfs64 (const char *__file, struct statfs64 *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 54 "/usr/include/aarch64-linux-gnu/sys/statfs.h" 3 4
extern int fstatfs (int __fildes, struct statfs *__buf) __asm__ ("" "fstatfs64") __attribute__ ((__nothrow__ , __leaf__))
                 __attribute__ ((__nonnull__ (2)));





extern int fstatfs64 (int __fildes, struct statfs64 *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 126 "/libmdbx/src/osal.h" 2
# 135 "/libmdbx/src/osal.h"
# 1 "/usr/include/utmpx.h" 1 3 4
# 22 "/usr/include/utmpx.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/sys/time.h" 1 3 4
# 34 "/usr/include/aarch64-linux-gnu/sys/time.h" 3 4

# 52 "/usr/include/aarch64-linux-gnu/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };
# 67 "/usr/include/aarch64-linux-gnu/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    void *__restrict __tz) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 86 "/usr/include/aarch64-linux-gnu/sys/time.h" 3 4
extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ , __leaf__));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ , __leaf__));
# 114 "/usr/include/aarch64-linux-gnu/sys/time.h" 3 4
enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };




typedef enum __itimer_which __itimer_which_t;







extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ , __leaf__));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ , __leaf__));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 189 "/usr/include/aarch64-linux-gnu/sys/time.h" 3 4
extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));
# 214 "/usr/include/aarch64-linux-gnu/sys/time.h" 3 4
extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));
# 258 "/usr/include/aarch64-linux-gnu/sys/time.h" 3 4

# 23 "/usr/include/utmpx.h" 2 3 4
# 31 "/usr/include/utmpx.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/utmpx.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/utmpx.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/utmpx.h" 2 3 4
# 42 "/usr/include/aarch64-linux-gnu/bits/utmpx.h" 3 4
struct __exit_status
  {

    short int e_termination;
    short int e_exit;




  };



struct utmpx
{
  short int ut_type;
  __pid_t ut_pid;
  char ut_line[32]
    __attribute__ ((__nonstring__));
  char ut_id[4]
    __attribute__ ((__nonstring__));
  char ut_user[32]
    __attribute__ ((__nonstring__));
  char ut_host[256]
    __attribute__ ((__nonstring__));
  struct __exit_status ut_exit;
# 81 "/usr/include/aarch64-linux-gnu/bits/utmpx.h" 3 4
  long int ut_session;
  struct timeval ut_tv;

  __int32_t ut_addr_v6[4];
  char __glibc_reserved[20];
};
# 32 "/usr/include/utmpx.h" 2 3 4
# 43 "/usr/include/utmpx.h" 3 4
struct utmp;









extern void setutxent (void);





extern void endutxent (void);





extern struct utmpx *getutxent (void);





extern struct utmpx *getutxid (const struct utmpx *__id);





extern struct utmpx *getutxline (const struct utmpx *__line);





extern struct utmpx *pututxline (const struct utmpx *__utmpx);
# 93 "/usr/include/utmpx.h" 3 4
extern int utmpxname (const char *__file);







extern void updwtmpx (const char *__wtmpx_file,
        const struct utmpx *__utmpx);
# 111 "/usr/include/utmpx.h" 3 4
extern void getutmp (const struct utmpx *__utmpx,
       struct utmp *__utmp);







extern void getutmpx (const struct utmp *__utmp, struct utmpx *__utmpx);



# 136 "/libmdbx/src/osal.h" 2
# 232 "/libmdbx/src/osal.h"
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
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int execveat (int __fd, const char *__path, char *const __argv[],
                     char *const __envp[], int __flags)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
# 342 "/usr/include/unistd.h" 3 4
extern __off64_t lseek (int __fd, __off64_t __offset, int __whence) __asm__ ("" "lseek64") __attribute__ ((__nothrow__ , __leaf__))

             ;





extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ , __leaf__));






extern int close (int __fd);




extern void closefrom (int __lowfd) __attribute__ ((__nothrow__ , __leaf__));







extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));





extern ssize_t write (int __fd, const void *__buf, size_t __n) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__read_only__, 2, 3)));
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")

               __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pwrite64")

                __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__read_only__, 2, 3)));
# 422 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__read_only__, 2, 3)));







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 531 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ , __leaf__));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 1)));




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern char **__environ;

extern char **environ;





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




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




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




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 1)));


extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t _Fork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__access__ (__write_only__, 2, 3)));



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) __attribute__ ((__warn_unused_result__));




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__access__ (__write_only__, 2, 3)));





extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__))
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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 1, 2)));



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 1, 2)));




extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) __attribute__ ((__nothrow__ , __leaf__));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 1030 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off64_t __length) __asm__ ("" "truncate64") __attribute__ ((__nothrow__ , __leaf__))

                  __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1052 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off64_t __length) __asm__ ("" "ftruncate64") __attribute__ ((__nothrow__ , __leaf__))
                   __attribute__ ((__warn_unused_result__));





extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 1070 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1091 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1142 "/usr/include/unistd.h" 3 4
ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
    int __outfd, __off64_t *__poutoff,
    size_t __length, unsigned int __flags);





extern int fdatasync (int __fildes);
# 1159 "/usr/include/unistd.h" 3 4
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));







extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)))
    __attribute__ ((__access__ (__read_only__, 1, 3)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
# 1198 "/usr/include/unistd.h" 3 4
int getentropy (void *__buffer, size_t __length) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
# 1208 "/usr/include/unistd.h" 3 4
extern int close_range (unsigned int __fd, unsigned int __max_fd,
   int __flags) __attribute__ ((__nothrow__ , __leaf__));




# 1 "/usr/include/aarch64-linux-gnu/bits/unistd.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/unistd.h" 3 4
extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
      size_t __buflen)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __read_alias (int __fd, void *__buf, size_t __nbytes) __asm__ ("" "read")

  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __read_chk_warn (int __fd, void *__buf, size_t __nbytes, size_t __buflen) __asm__ ("" "__read_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("read called with bigger length than size of " "the destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
read (int __fd, void *__buf, size_t __nbytes)
{
  return ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && (((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __read_alias (__fd, __buf, __nbytes) : ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && !(((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __read_chk_warn (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0)) : __read_chk (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0))))

                           ;
}


extern ssize_t __pread_chk (int __fd, void *__buf, size_t __nbytes,
       __off_t __offset, size_t __bufsize)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __pread64_chk (int __fd, void *__buf, size_t __nbytes,
         __off64_t __offset, size_t __bufsize)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __pread_alias (int __fd, void *__buf, size_t __nbytes, __off_t __offset) __asm__ ("" "pread")


  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __pread64_alias (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")


  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __pread_chk_warn (int __fd, void *__buf, size_t __nbytes, __off_t __offset, size_t __bufsize) __asm__ ("" "__pread_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread called with bigger length than size of " "the destination buffer")))
                                  ;
extern ssize_t __pread64_chk_warn (int __fd, void *__buf, size_t __nbytes, __off64_t __offset, size_t __bufsize) __asm__ ("" "__pread64_chk")



     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread64 called with bigger length than size of " "the destination buffer")))
                                  ;
# 79 "/usr/include/aarch64-linux-gnu/bits/unistd.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
{
  return ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && (((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread64_alias (__fd, __buf, __nbytes, __offset) : ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && !(((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread64_chk_warn (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0)) : __pread64_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0))))

                                     ;
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread64 (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
{
  return ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && (((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread64_alias (__fd, __buf, __nbytes, __offset) : ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && !(((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread64_chk_warn (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0)) : __pread64_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0))))

                                     ;
}




extern ssize_t __readlink_chk (const char *__restrict __path,
          char *__restrict __buf, size_t __len,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __readlink_alias (const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlink") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __readlink_chk_warn (const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlink_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlink called with bigger length " "than size of destination buffer")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlink (const char *__restrict __path, char *__restrict __buf, size_t __len)

{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __readlink_alias (__path, __buf, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __readlink_chk_warn (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1)) : __readlink_chk (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1))))

                          ;
}



extern ssize_t __readlinkat_chk (int __fd, const char *__restrict __path,
     char *__restrict __buf, size_t __len,
     size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 3, 4)));
extern ssize_t __readlinkat_alias (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlinkat") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 3, 4)));
extern ssize_t __readlinkat_chk_warn (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlinkat_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlinkat called with bigger " "length than size of destination " "buffer")))

                ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlinkat (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len)

{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __readlinkat_alias (__fd, __path, __buf, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __readlinkat_chk_warn (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1)) : __readlinkat_chk (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1))))

                                ;
}


extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__getcwd_alias (char *__buf, size_t __size) __asm__ ("" "getcwd") __attribute__ ((__nothrow__ , __leaf__))
                                              __attribute__ ((__warn_unused_result__));
extern char *__getcwd_chk_warn (char *__buf, size_t __size, size_t __buflen) __asm__ ("" "__getcwd_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getcwd caller with bigger length than size of " "destination buffer")))
                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getcwd (char *__buf, size_t __size)
{
  return ((((__typeof (__size)) 0 < (__typeof (__size)) -1 || (__builtin_constant_p (__size) && (__size) > 0)) && __builtin_constant_p ((((long unsigned int) (__size)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__size)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getcwd_alias (__buf, __size) : ((((__typeof (__size)) 0 < (__typeof (__size)) -1 || (__builtin_constant_p (__size) && (__size) > 0)) && __builtin_constant_p ((((long unsigned int) (__size)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__size)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getcwd_chk_warn (__buf, __size, __builtin_object_size (__buf, 2 > 1)) : __getcwd_chk (__buf, __size, __builtin_object_size (__buf, 2 > 1))))

                   ;
}


extern char *__getwd_chk (char *__buf, size_t buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *__getwd_warn (char *__buf) __asm__ ("" "getwd") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use getcwd instead, as getwd " "doesn't specify buffer size")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getwd (char *__buf)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    return __getwd_chk (__buf, __builtin_object_size (__buf, 2 > 1));
  return __getwd_warn (__buf);
}


extern size_t __confstr_chk (int __name, char *__buf, size_t __len,
        size_t __buflen) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 2, 3)));
extern size_t __confstr_alias (int __name, char *__buf, size_t __len) __asm__ ("" "confstr") __attribute__ ((__nothrow__ , __leaf__))

   __attribute__ ((__access__ (__write_only__, 2, 3)));
extern size_t __confstr_chk_warn (int __name, char *__buf, size_t __len, size_t __buflen) __asm__ ("" "__confstr_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__((__warning__ ("confstr called with bigger length than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) confstr (int __name, char *__buf, size_t __len)
{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __confstr_alias (__name, __buf, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __confstr_chk_warn (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1)) : __confstr_chk (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1))))

                          ;
}


extern int __getgroups_chk (int __size, __gid_t __list[], size_t __listlen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 1)));
extern int __getgroups_alias (int __size, __gid_t __list[]) __asm__ ("" "getgroups") __attribute__ ((__nothrow__ , __leaf__))
                 __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 1)));
extern int __getgroups_chk_warn (int __size, __gid_t __list[], size_t __listlen) __asm__ ("" "__getgroups_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getgroups called with bigger group count than what " "can fit into destination buffer")))
                                           ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getgroups (int __size, __gid_t __list[])
{
  return ((((__typeof (__size)) 0 < (__typeof (__size)) -1 || (__builtin_constant_p (__size) && (__size) > 0)) && __builtin_constant_p ((((long unsigned int) (__size)) <= (__builtin_object_size (__list, 2 > 1)) / (sizeof (__gid_t)))) && (((long unsigned int) (__size)) <= (__builtin_object_size (__list, 2 > 1)) / (sizeof (__gid_t)))) ? __getgroups_alias (__size, __list) : ((((__typeof (__size)) 0 < (__typeof (__size)) -1 || (__builtin_constant_p (__size) && (__size) > 0)) && __builtin_constant_p ((((long unsigned int) (__size)) <= (__builtin_object_size (__list, 2 > 1)) / (sizeof (__gid_t)))) && !(((long unsigned int) (__size)) <= (__builtin_object_size (__list, 2 > 1)) / (sizeof (__gid_t)))) ? __getgroups_chk_warn (__size, __list, __builtin_object_size (__list, 2 > 1)) : __getgroups_chk (__size, __list, __builtin_object_size (__list, 2 > 1))))

                    ;
}


extern int __ttyname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)))
   __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int __ttyname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ttyname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ttyname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ttyname_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ttyname_r (int __fd, char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ttyname_r_alias (__fd, __buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ttyname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __ttyname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1))))

                           ;
}



extern int __getlogin_r_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __getlogin_r_alias (char *__buf, size_t __buflen) __asm__ ("" "getlogin_r")
                     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getlogin_r_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("getlogin_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
getlogin_r (char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getlogin_r_alias (__buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getlogin_r_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __getlogin_r_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1))))

                     ;
}




extern int __gethostname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __gethostname_alias (char *__buf, size_t __buflen) __asm__ ("" "gethostname") __attribute__ ((__nothrow__ , __leaf__))

  __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __gethostname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__gethostname_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("gethostname called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) gethostname (char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __gethostname_alias (__buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __gethostname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __gethostname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1))))

                     ;
}




extern int __getdomainname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __getdomainname_alias (char *__buf, size_t __buflen) __asm__ ("" "getdomainname") __attribute__ ((__nothrow__ , __leaf__))

                     __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __getdomainname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getdomainname_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getdomainname called with bigger " "buflen than size of destination " "buffer")))

                    ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getdomainname (char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getdomainname_alias (__buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getdomainname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __getdomainname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1))))

                     ;
}
# 1215 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/unistd_ext.h" 1 3 4
# 34 "/usr/include/aarch64-linux-gnu/bits/unistd_ext.h" 3 4
extern __pid_t gettid (void) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/linux/close_range.h" 1 3 4
# 39 "/usr/include/aarch64-linux-gnu/bits/unistd_ext.h" 2 3 4
# 1219 "/usr/include/unistd.h" 2 3 4


# 233 "/libmdbx/src/osal.h" 2





# 1 "/usr/include/semaphore.h" 1 3 4
# 28 "/usr/include/semaphore.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/semaphore.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/bits/semaphore.h" 3 4
typedef union
{
  char __size[32];
  long long int __align;
} sem_t;
# 29 "/usr/include/semaphore.h" 2 3 4






extern int sem_init (sem_t *__sem, int __pshared, unsigned int __value)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sem_destroy (sem_t *__sem) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern sem_t *sem_open (const char *__name, int __oflag, ...)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sem_close (sem_t *__sem) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sem_unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int sem_wait (sem_t *__sem) __attribute__ ((__nonnull__ (1)));







extern int sem_timedwait (sem_t *__restrict __sem,
     const struct timespec *__restrict __abstime)
  __attribute__ ((__nonnull__ (1, 2)));
# 81 "/usr/include/semaphore.h" 3 4
extern int sem_clockwait (sem_t *__restrict __sem,
     clockid_t clock,
     const struct timespec *__restrict __abstime)
  __attribute__ ((__nonnull__ (1, 3)));
# 100 "/usr/include/semaphore.h" 3 4
extern int sem_trywait (sem_t *__sem) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sem_post (sem_t *__sem) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sem_getvalue (sem_t *__restrict __sem, int *__restrict __sval)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



# 239 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/signal.h" 1 3 4
# 27 "/usr/include/signal.h" 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/signum-generic.h" 1 3 4
# 76 "/usr/include/aarch64-linux-gnu/bits/signum-generic.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/signum-arch.h" 1 3 4
# 77 "/usr/include/aarch64-linux-gnu/bits/signum-generic.h" 2 3 4
# 31 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/sig_atomic_t.h" 1 3 4







typedef __sig_atomic_t sig_atomic_t;
# 33 "/usr/include/signal.h" 2 3 4
# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/siginfo_t.h" 1 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/siginfo_t.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/types/__sigval_t.h" 3 4
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 7 "/usr/include/aarch64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 16 "/usr/include/aarch64-linux-gnu/bits/types/siginfo_t.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/siginfo-arch.h" 1 3 4
# 17 "/usr/include/aarch64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 36 "/usr/include/aarch64-linux-gnu/bits/types/siginfo_t.h" 3 4
typedef struct
  {
    int si_signo;

    int si_errno;

    int si_code;





    int __pad0;


    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     __sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     __sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
    
     short int si_addr_lsb;
     union
       {

  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;

  __uint32_t _pkey;
       } _bounds;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;



 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;

      } _sifields;
  } siginfo_t ;
# 58 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/siginfo-consts.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/bits/siginfo-consts.h" 3 4
enum
{
  SI_ASYNCNL = -60,
  SI_DETHREAD = -7,

  SI_TKILL,
  SI_SIGIO,

  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,





  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
# 66 "/usr/include/aarch64-linux-gnu/bits/siginfo-consts.h" 3 4
};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK,

  ILL_BADIADDR

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB,

  FPE_FLTUNK = 14,

  FPE_CONDTRAP

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR,

  SEGV_BNDERR,

  SEGV_PKUERR,

  SEGV_ACCADI,

  SEGV_ADIDERR,

  SEGV_ADIPERR,

  SEGV_MTEAERR,

  SEGV_MTESERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};




enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE,

  TRAP_BRANCH,

  TRAP_HWBKPT,

  TRAP_UNK

};




enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};





# 1 "/usr/include/aarch64-linux-gnu/bits/siginfo-consts-arch.h" 1 3 4
# 214 "/usr/include/aarch64-linux-gnu/bits/siginfo-consts.h" 2 3 4
# 59 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/types/sigval_t.h" 1 3 4
# 16 "/usr/include/aarch64-linux-gnu/bits/types/sigval_t.h" 3 4
typedef __sigval_t sigval_t;
# 63 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/types/sigevent_t.h" 1 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 22 "/usr/include/aarch64-linux-gnu/bits/types/sigevent_t.h" 3 4
typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
# 67 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/sigevent-consts.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/sigevent-consts.h" 3 4
enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4


};
# 68 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));






extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 112 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));



extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));



extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 151 "/usr/include/signal.h" 3 4
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause")
  __attribute__ ((__deprecated__ ("Use the sigsuspend function instead")));
# 173 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 188 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (const sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




# 1 "/usr/include/aarch64-linux-gnu/bits/sigaction.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 230 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));







extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));







extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));
# 292 "/usr/include/signal.h" 3 4
extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));







# 1 "/usr/include/aarch64-linux-gnu/bits/sigcontext.h" 1 3 4
# 30 "/usr/include/aarch64-linux-gnu/bits/sigcontext.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/asm/sigcontext.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/asm/sigcontext.h" 3 4
# 1 "/usr/include/linux/types.h" 1 3 4




# 1 "/usr/include/aarch64-linux-gnu/asm/types.h" 1 3 4
# 1 "/usr/include/asm-generic/types.h" 1 3 4






# 1 "/usr/include/asm-generic/int-ll64.h" 1 3 4
# 12 "/usr/include/asm-generic/int-ll64.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/asm/bitsperlong.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/asm/bitsperlong.h" 2 3 4
# 13 "/usr/include/asm-generic/int-ll64.h" 2 3 4







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 8 "/usr/include/asm-generic/types.h" 2 3 4
# 2 "/usr/include/aarch64-linux-gnu/asm/types.h" 2 3 4
# 6 "/usr/include/linux/types.h" 2 3 4



# 1 "/usr/include/linux/posix_types.h" 1 3 4




# 1 "/usr/include/linux/stddef.h" 1 3 4
# 6 "/usr/include/linux/posix_types.h" 2 3 4
# 25 "/usr/include/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/usr/include/aarch64-linux-gnu/asm/posix_types.h" 1 3 4




typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;


# 1 "/usr/include/asm-generic/posix_types.h" 1 3 4
# 15 "/usr/include/asm-generic/posix_types.h" 3 4
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;



typedef unsigned int __kernel_mode_t;



typedef int __kernel_pid_t;



typedef int __kernel_ipc_pid_t;



typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;



typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
# 59 "/usr/include/asm-generic/posix_types.h" 3 4
typedef unsigned int __kernel_old_dev_t;
# 72 "/usr/include/asm-generic/posix_types.h" 3 4
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;




typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 10 "/usr/include/aarch64-linux-gnu/asm/posix_types.h" 2 3 4
# 37 "/usr/include/linux/posix_types.h" 2 3 4
# 10 "/usr/include/linux/types.h" 2 3 4
# 24 "/usr/include/linux/types.h" 3 4
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 47 "/usr/include/linux/types.h" 3 4
typedef unsigned __poll_t;
# 23 "/usr/include/aarch64-linux-gnu/asm/sigcontext.h" 2 3 4





struct sigcontext {
 __u64 fault_address;

 __u64 regs[31];
 __u64 sp;
 __u64 pc;
 __u64 pstate;

 __u8 __reserved[4096] __attribute__((__aligned__(16)));
};
# 66 "/usr/include/aarch64-linux-gnu/asm/sigcontext.h" 3 4
struct _aarch64_ctx {
 __u32 magic;
 __u32 size;
};



struct fpsimd_context {
 struct _aarch64_ctx head;
 __u32 fpsr;
 __u32 fpcr;
 __uint128_t vregs[32];
};
# 92 "/usr/include/aarch64-linux-gnu/asm/sigcontext.h" 3 4
struct esr_context {
 struct _aarch64_ctx head;
 __u64 esr;
};
# 125 "/usr/include/aarch64-linux-gnu/asm/sigcontext.h" 3 4
struct extra_context {
 struct _aarch64_ctx head;
 __u64 datap;
 __u32 size;
 __u32 __reserved[3];
};



struct sve_context {
 struct _aarch64_ctx head;
 __u16 vl;
 __u16 __reserved[3];
};



# 1 "/usr/include/aarch64-linux-gnu/asm/sve_context.h" 1 3 4
# 143 "/usr/include/aarch64-linux-gnu/asm/sigcontext.h" 2 3 4
# 31 "/usr/include/aarch64-linux-gnu/bits/sigcontext.h" 2 3 4



# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/bits/sigcontext.h" 2 3 4
# 302 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 312 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/stack_t.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/types/stack_t.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/types/stack_t.h" 2 3 4


typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 314 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/sys/ucontext.h" 1 3 4
# 36 "/usr/include/aarch64-linux-gnu/sys/ucontext.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/sys/user.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/sys/user.h" 3 4
struct user_regs_struct
{
  unsigned long long regs[31];
  unsigned long long sp;
  unsigned long long pc;
  unsigned long long pstate;
};

struct user_fpsimd_struct
{
  __uint128_t vregs[32];
  unsigned int fpsr;
  unsigned int fpcr;
};
# 36 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 2 3 4




# 1 "/usr/include/aarch64-linux-gnu/bits/procfs.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/procfs.h" 3 4
typedef __uint64_t elf_greg_t;






typedef elf_greg_t elf_gregset_t[(sizeof (struct user_regs_struct) / sizeof (elf_greg_t))];


typedef struct user_fpsimd_struct elf_fpregset_t;
# 41 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/procfs-id.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/procfs-id.h" 3 4
typedef unsigned int __pr_uid_t;
typedef unsigned int __pr_gid_t;
# 45 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 2 3 4




struct elf_siginfo
  {
    int si_signo;
    int si_code;
    int si_errno;
  };
# 63 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 3 4
struct elf_prstatus
  {
    struct elf_siginfo pr_info;
    short int pr_cursig;
    unsigned long int pr_sigpend;
    unsigned long int pr_sighold;
    __pid_t pr_pid;
    __pid_t pr_ppid;
    __pid_t pr_pgrp;
    __pid_t pr_sid;
    struct timeval pr_utime;
    struct timeval pr_stime;
    struct timeval pr_cutime;
    struct timeval pr_cstime;
    elf_gregset_t pr_reg;
    int pr_fpvalid;
  };




struct elf_prpsinfo
  {
    char pr_state;
    char pr_sname;
    char pr_zomb;
    char pr_nice;
    unsigned long int pr_flag;
    __pr_uid_t pr_uid;
    __pr_gid_t pr_gid;
    int pr_pid, pr_ppid, pr_pgrp, pr_sid;

    char pr_fname[16];
    char pr_psargs[(80)];
  };






typedef void *psaddr_t;

# 1 "/usr/include/aarch64-linux-gnu/bits/procfs-prregset.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/procfs-prregset.h" 3 4
typedef elf_gregset_t __prgregset_t;
typedef elf_fpregset_t __prfpregset_t;
# 107 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 2 3 4


typedef __prgregset_t prgregset_t;
typedef __prfpregset_t prfpregset_t;



typedef __pid_t lwpid_t;


typedef struct elf_prstatus prstatus_t;
typedef struct elf_prpsinfo prpsinfo_t;





# 1 "/usr/include/aarch64-linux-gnu/bits/procfs-extra.h" 1 3 4
# 125 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 2 3 4
# 37 "/usr/include/aarch64-linux-gnu/sys/ucontext.h" 2 3 4


typedef elf_greg_t greg_t;


typedef elf_gregset_t gregset_t;


typedef elf_fpregset_t fpregset_t;






typedef struct
  {
    unsigned long long int fault_address;
    unsigned long long int regs[31];
    unsigned long long int sp;
    unsigned long long int pc;
    unsigned long long int pstate;




    unsigned char __reserved[4096] __attribute__ ((__aligned__ (16)));
  } mcontext_t;


typedef struct ucontext_t
  {
    unsigned long uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    sigset_t uc_sigmask;
    mcontext_t uc_mcontext;
  } ucontext_t;
# 317 "/usr/include/signal.h" 2 3 4







extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use sigaction with SA_RESTART instead")));

# 1 "/usr/include/aarch64-linux-gnu/bits/sigstack.h" 1 3 4
# 328 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/sigstksz.h" 1 3 4
# 329 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/ss_flags.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/ss_flags.h" 3 4
enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 330 "/usr/include/signal.h" 2 3 4



extern int sigaltstack (const stack_t *__restrict __ss,
   stack_t *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));




# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_sigstack.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/types/struct_sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };
# 340 "/usr/include/signal.h" 2 3 4







extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));






extern int sighold (int __sig) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use the sigprocmask function instead")));


extern int sigrelse (int __sig) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use the sigprocmask function instead")));


extern int sigignore (int __sig) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use the signal function instead")));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use the signal and sigprocmask functions instead")))
                                                        ;






# 1 "/usr/include/aarch64-linux-gnu/bits/sigthread.h" 1 3 4
# 31 "/usr/include/aarch64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__ , __leaf__));
# 377 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));





# 1 "/usr/include/aarch64-linux-gnu/bits/signal_ext.h" 1 3 4
# 29 "/usr/include/aarch64-linux-gnu/bits/signal_ext.h" 3 4
extern int tgkill (__pid_t __tgid, __pid_t __tid, int __signal);
# 392 "/usr/include/signal.h" 2 3 4


# 240 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/aarch64-linux-gnu/sys/file.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/sys/file.h" 3 4

# 50 "/usr/include/aarch64-linux-gnu/sys/file.h" 3 4
extern int flock (int __fd, int __operation) __attribute__ ((__nothrow__ , __leaf__));



# 241 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/aarch64-linux-gnu/sys/ipc.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/sys/ipc.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/ipctypes.h" 1 3 4
# 32 "/usr/include/aarch64-linux-gnu/bits/ipctypes.h" 3 4
typedef int __ipc_pid_t;
# 25 "/usr/include/aarch64-linux-gnu/sys/ipc.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/ipc.h" 1 3 4
# 40 "/usr/include/aarch64-linux-gnu/bits/ipc.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/ipc-perm.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/ipc-perm.h" 3 4
struct ipc_perm
{
  __key_t __key;
  __uid_t uid;
  __gid_t gid;
  __uid_t cuid;
  __gid_t cgid;
  __mode_t mode;
  unsigned short int __seq;
  unsigned short int __pad2;
  __syscall_ulong_t __glibc_reserved1;
  __syscall_ulong_t __glibc_reserved2;
};
# 41 "/usr/include/aarch64-linux-gnu/bits/ipc.h" 2 3 4
# 26 "/usr/include/aarch64-linux-gnu/sys/ipc.h" 2 3 4
# 47 "/usr/include/aarch64-linux-gnu/sys/ipc.h" 3 4



extern key_t ftok (const char *__pathname, int __proj_id) __attribute__ ((__nothrow__ , __leaf__));


# 242 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/aarch64-linux-gnu/sys/mman.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/sys/mman.h" 2 3 4
# 41 "/usr/include/aarch64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mman.h" 1 3 4
# 29 "/usr/include/aarch64-linux-gnu/bits/mman.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mman-map-flags-generic.h" 1 3 4
# 30 "/usr/include/aarch64-linux-gnu/bits/mman.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/mman-linux.h" 1 3 4
# 117 "/usr/include/aarch64-linux-gnu/bits/mman-linux.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mman-shared.h" 1 3 4
# 47 "/usr/include/aarch64-linux-gnu/bits/mman-shared.h" 3 4




int memfd_create (const char *__name, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));



int mlock2 (const void *__addr, size_t __length, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));





int pkey_alloc (unsigned int __flags, unsigned int __access_rights) __attribute__ ((__nothrow__ , __leaf__));



int pkey_set (int __key, unsigned int __access_rights) __attribute__ ((__nothrow__ , __leaf__));



int pkey_get (int __key) __attribute__ ((__nothrow__ , __leaf__));



int pkey_free (int __key) __attribute__ ((__nothrow__ , __leaf__));



int pkey_mprotect (void *__addr, size_t __len, int __prot, int __pkey) __attribute__ ((__nothrow__ , __leaf__));


# 118 "/usr/include/aarch64-linux-gnu/bits/mman-linux.h" 2 3 4
# 33 "/usr/include/aarch64-linux-gnu/bits/mman.h" 2 3 4
# 42 "/usr/include/aarch64-linux-gnu/sys/mman.h" 2 3 4





# 61 "/usr/include/aarch64-linux-gnu/sys/mman.h" 3 4
extern void * mmap (void *__addr, size_t __len, int __prot, int __flags, int __fd, __off64_t __offset) __asm__ ("" "mmap64") __attribute__ ((__nothrow__ , __leaf__))


                ;





extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) __attribute__ ((__nothrow__ , __leaf__));




extern int munmap (void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mprotect (void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__ , __leaf__));







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));



extern int posix_madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));




extern int mlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));


extern int munlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mlockall (int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern int munlockall (void) __attribute__ ((__nothrow__ , __leaf__));







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     __attribute__ ((__nothrow__ , __leaf__));
# 133 "/usr/include/aarch64-linux-gnu/sys/mman.h" 3 4
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) __attribute__ ((__nothrow__ , __leaf__));



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) __attribute__ ((__nothrow__ , __leaf__));




extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);


# 243 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/aarch64-linux-gnu/sys/param.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/sys/param.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/sys/param.h" 2 3 4


# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/sys/param.h" 2 3 4




# 1 "/usr/include/aarch64-linux-gnu/bits/param.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/param.h" 3 4
# 1 "/usr/include/linux/param.h" 1 3 4




# 1 "/usr/include/aarch64-linux-gnu/asm/param.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/asm/param.h" 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/asm/param.h" 2 3 4
# 6 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/aarch64-linux-gnu/bits/param.h" 2 3 4
# 32 "/usr/include/aarch64-linux-gnu/sys/param.h" 2 3 4
# 244 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/aarch64-linux-gnu/sys/stat.h" 1 3 4
# 99 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/stat.h" 1 3 4
# 102 "/usr/include/aarch64-linux-gnu/sys/stat.h" 2 3 4
# 227 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "stat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (1, 2)));
extern int fstat (int __fd, struct stat *__buf) __asm__ ("" "fstat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));
# 240 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 279 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file, struct stat *__restrict __buf, int __flag) __asm__ ("" "fstatat64") __attribute__ ((__nothrow__ , __leaf__))


                 __attribute__ ((__nonnull__ (2, 3)));
# 291 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 327 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "lstat64") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1, 2)));







extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ , __leaf__));



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
# 465 "/usr/include/aarch64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/statx.h" 1 3 4
# 31 "/usr/include/aarch64-linux-gnu/bits/statx.h" 3 4
# 1 "/usr/include/linux/stat.h" 1 3 4
# 56 "/usr/include/linux/stat.h" 3 4
struct statx_timestamp {
 __s64 tv_sec;
 __u32 tv_nsec;
 __s32 __reserved;
};
# 99 "/usr/include/linux/stat.h" 3 4
struct statx {

 __u32 stx_mask;
 __u32 stx_blksize;
 __u64 stx_attributes;

 __u32 stx_nlink;
 __u32 stx_uid;
 __u32 stx_gid;
 __u16 stx_mode;
 __u16 __spare0[1];

 __u64 stx_ino;
 __u64 stx_size;
 __u64 stx_blocks;
 __u64 stx_attributes_mask;

 struct statx_timestamp stx_atime;
 struct statx_timestamp stx_btime;
 struct statx_timestamp stx_ctime;
 struct statx_timestamp stx_mtime;

 __u32 stx_rdev_major;
 __u32 stx_rdev_minor;
 __u32 stx_dev_major;
 __u32 stx_dev_minor;

 __u64 stx_mnt_id;
 __u64 __spare2;

 __u64 __spare3[12];

};
# 32 "/usr/include/aarch64-linux-gnu/bits/statx.h" 2 3 4







# 1 "/usr/include/aarch64-linux-gnu/bits/statx-generic.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/statx-generic.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_statx_timestamp.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/statx-generic.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_statx.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/statx-generic.h" 2 3 4
# 57 "/usr/include/aarch64-linux-gnu/bits/statx-generic.h" 3 4



int statx (int __dirfd, const char *__restrict __path, int __flags,
           unsigned int __mask, struct statx *__restrict __buf)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 5)));


# 40 "/usr/include/aarch64-linux-gnu/bits/statx.h" 2 3 4
# 466 "/usr/include/aarch64-linux-gnu/sys/stat.h" 2 3 4



# 245 "/libmdbx/src/osal.h" 2
# 1 "/usr/include/aarch64-linux-gnu/sys/statvfs.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/sys/statvfs.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/statvfs.h" 1 3 4
# 29 "/usr/include/aarch64-linux-gnu/bits/statvfs.h" 3 4
struct statvfs
  {
    unsigned long int f_bsize;
    unsigned long int f_frsize;
# 41 "/usr/include/aarch64-linux-gnu/bits/statvfs.h" 3 4
    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;
    __fsfilcnt64_t f_favail;

    unsigned long int f_fsid;



    unsigned long int f_flag;
    unsigned long int f_namemax;
    int __f_spare[6];
  };


struct statvfs64
  {
    unsigned long int f_bsize;
    unsigned long int f_frsize;
    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;
    __fsfilcnt64_t f_favail;
    unsigned long int f_fsid;



    unsigned long int f_flag;
    unsigned long int f_namemax;
    int __f_spare[6];
  };




enum
{
  ST_RDONLY = 1,

  ST_NOSUID = 2


  ,
  ST_NODEV = 4,

  ST_NOEXEC = 8,

  ST_SYNCHRONOUS = 16,

  ST_MANDLOCK = 64,

  ST_WRITE = 128,

  ST_APPEND = 256,

  ST_IMMUTABLE = 512,

  ST_NOATIME = 1024,

  ST_NODIRATIME = 2048,

  ST_RELATIME = 4096


};
# 26 "/usr/include/aarch64-linux-gnu/sys/statvfs.h" 2 3 4
# 47 "/usr/include/aarch64-linux-gnu/sys/statvfs.h" 3 4

# 56 "/usr/include/aarch64-linux-gnu/sys/statvfs.h" 3 4
extern int statvfs (const char *__restrict __file, struct statvfs *__restrict __buf) __asm__ ("" "statvfs64") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1, 2)));





extern int statvfs64 (const char *__restrict __file,
        struct statvfs64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 77 "/usr/include/aarch64-linux-gnu/sys/statvfs.h" 3 4
extern int fstatvfs (int __fildes, struct statvfs *__buf) __asm__ ("" "fstatvfs64") __attribute__ ((__nothrow__ , __leaf__))
                  __attribute__ ((__nonnull__ (2)));





extern int fstatvfs64 (int __fildes, struct statvfs64 *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 246 "/libmdbx/src/osal.h" 2


# 247 "/libmdbx/src/osal.h"
typedef pthread_t mdbx_thread_t;
typedef pthread_key_t mdbx_thread_key_t;



typedef struct {
  pthread_mutex_t mutex;
  pthread_cond_t cond[2];
} mdbx_condpair_t;
typedef pthread_mutex_t mdbx_fastmutex_t;
# 444 "/libmdbx/src/osal.h"
__attribute__((__unused__)) __attribute__((__const__, __nothrow__)) static __inline size_t
mdbx_syspagesize(void) {





  return sysconf(
# 451 "/libmdbx/src/osal.h" 3 4
                _SC_PAGESIZE
# 451 "/libmdbx/src/osal.h"
                             );

}

typedef struct mdbx_mmap_param {
  union {
    void *address;
    uint8_t *dxb;
    struct MDBX_lockinfo *lck;
  };
  mdbx_filehandle_t fd;
  size_t limit;
  size_t current;
  uint64_t filesize ;



} mdbx_mmap_t;

typedef union bin128 {
  __extension__ struct { uint64_t x, y; };
  __extension__ struct { uint32_t a, b, c, d; };
} bin128_t;
# 487 "/libmdbx/src/osal.h"
__attribute__((__unused__)) void mdbx_osal_jitter(_Bool tiny);
__attribute__((__unused__)) static __inline void mdbx_jitter4testing(_Bool tiny);
# 501 "/libmdbx/src/osal.h"
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdatomic.h" 1 3 4
# 29 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdatomic.h" 3 4

# 29 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdatomic.h" 3 4
typedef enum
  {
    memory_order_relaxed = 0,
    memory_order_consume = 1,
    memory_order_acquire = 2,
    memory_order_release = 3,
    memory_order_acq_rel = 4,
    memory_order_seq_cst = 5
  } memory_order;


typedef _Atomic _Bool atomic_bool;
typedef _Atomic char atomic_char;
typedef _Atomic signed char atomic_schar;
typedef _Atomic unsigned char atomic_uchar;
typedef _Atomic short atomic_short;
typedef _Atomic unsigned short atomic_ushort;
typedef _Atomic int atomic_int;
typedef _Atomic unsigned int atomic_uint;
typedef _Atomic long atomic_long;
typedef _Atomic unsigned long atomic_ulong;
typedef _Atomic long long atomic_llong;
typedef _Atomic unsigned long long atomic_ullong;
typedef _Atomic short unsigned int atomic_char16_t;
typedef _Atomic unsigned int atomic_char32_t;
typedef _Atomic unsigned int atomic_wchar_t;
typedef _Atomic signed char atomic_int_least8_t;
typedef _Atomic unsigned char atomic_uint_least8_t;
typedef _Atomic short int atomic_int_least16_t;
typedef _Atomic short unsigned int atomic_uint_least16_t;
typedef _Atomic int atomic_int_least32_t;
typedef _Atomic unsigned int atomic_uint_least32_t;
typedef _Atomic long int atomic_int_least64_t;
typedef _Atomic long unsigned int atomic_uint_least64_t;
typedef _Atomic signed char atomic_int_fast8_t;
typedef _Atomic unsigned char atomic_uint_fast8_t;
typedef _Atomic long int atomic_int_fast16_t;
typedef _Atomic long unsigned int atomic_uint_fast16_t;
typedef _Atomic long int atomic_int_fast32_t;
typedef _Atomic long unsigned int atomic_uint_fast32_t;
typedef _Atomic long int atomic_int_fast64_t;
typedef _Atomic long unsigned int atomic_uint_fast64_t;
typedef _Atomic long int atomic_intptr_t;
typedef _Atomic long unsigned int atomic_uintptr_t;
typedef _Atomic long unsigned int atomic_size_t;
typedef _Atomic long int atomic_ptrdiff_t;
typedef _Atomic long int atomic_intmax_t;
typedef _Atomic long unsigned int atomic_uintmax_t;
# 92 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdatomic.h" 3 4
extern void atomic_thread_fence (memory_order);

extern void atomic_signal_fence (memory_order);
# 218 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdatomic.h" 3 4
typedef _Atomic struct
{

  _Bool __val;



} atomic_flag;




extern _Bool atomic_flag_test_and_set (volatile atomic_flag *);


extern _Bool atomic_flag_test_and_set_explicit (volatile atomic_flag *,
      memory_order);



extern void atomic_flag_clear (volatile atomic_flag *);

extern void atomic_flag_clear_explicit (volatile atomic_flag *, memory_order);
# 502 "/libmdbx/src/osal.h" 2
# 532 "/libmdbx/src/osal.h"

# 532 "/libmdbx/src/osal.h"
__attribute__((__unused__)) static __inline void mdbx_compiler_barrier(void) {

  __asm__ __volatile__("" ::: "memory");
# 550 "/libmdbx/src/osal.h"
}

__attribute__((__unused__)) static __inline void mdbx_memory_barrier(void) {

  
# 554 "/libmdbx/src/osal.h" 3 4
 __atomic_thread_fence (
# 554 "/libmdbx/src/osal.h"
 memory_order_seq_cst
# 554 "/libmdbx/src/osal.h" 3 4
 )
# 554 "/libmdbx/src/osal.h"
                                          ;
# 582 "/libmdbx/src/osal.h"
}
# 592 "/libmdbx/src/osal.h"
__attribute__((__unused__))
    __attribute__((__format__(__printf__, 2, 3))) int mdbx_asprintf(char **strp, const char *fmt, ...);
 int mdbx_vasprintf(char **strp, const char *fmt, va_list ap);
# 608 "/libmdbx/src/osal.h"
extern uint32_t mdbx_linux_kernel_version;
extern _Bool mdbx_RunningOnWSL1 ;






__attribute__((__unused__)) static __inline int mdbx_get_errno(void) {



  int rc = 
# 620 "/libmdbx/src/osal.h" 3 4
          (*__errno_location ())
# 620 "/libmdbx/src/osal.h"
               ;

  return rc;
}


 int mdbx_memalign_alloc(size_t alignment, size_t bytes,
                                           void **result);


 void mdbx_memalign_free(void *ptr);


 int mdbx_condpair_init(mdbx_condpair_t *condpair);
 int mdbx_condpair_lock(mdbx_condpair_t *condpair);
 int mdbx_condpair_unlock(mdbx_condpair_t *condpair);
 int mdbx_condpair_signal(mdbx_condpair_t *condpair,
                                            _Bool part);
 int mdbx_condpair_wait(mdbx_condpair_t *condpair, _Bool part);
 int mdbx_condpair_destroy(mdbx_condpair_t *condpair);

 int mdbx_fastmutex_init(mdbx_fastmutex_t *fastmutex);
 int mdbx_fastmutex_acquire(mdbx_fastmutex_t *fastmutex);
 int mdbx_fastmutex_release(mdbx_fastmutex_t *fastmutex);
 int mdbx_fastmutex_destroy(mdbx_fastmutex_t *fastmutex);

 int mdbx_pwritev(mdbx_filehandle_t fd, struct iovec *iov,
                                    int iovcnt, uint64_t offset,
                                    size_t expected_written);
 int mdbx_pread(mdbx_filehandle_t fd, void *buf, size_t count,
                                  uint64_t offset);
 int mdbx_pwrite(mdbx_filehandle_t fd, const void *buf,
                                   size_t count, uint64_t offset);
 int mdbx_write(mdbx_filehandle_t fd, const void *buf,
                                  size_t count);

 int
mdbx_thread_create(mdbx_thread_t *thread,
                   void *( *start_routine)(void *),
                   void *arg);
 int mdbx_thread_join(mdbx_thread_t thread);

enum mdbx_syncmode_bits {
  MDBX_SYNC_NONE = 0,
  MDBX_SYNC_DATA = 1,
  MDBX_SYNC_SIZE = 2,
  MDBX_SYNC_IODQ = 4
};

 int mdbx_fsync(mdbx_filehandle_t fd,
                                  const enum mdbx_syncmode_bits mode_bits);
 int mdbx_ftruncate(mdbx_filehandle_t fd, uint64_t length);
 int mdbx_fseek(mdbx_filehandle_t fd, uint64_t pos);
 int mdbx_filesize(mdbx_filehandle_t fd, uint64_t *length);

enum mdbx_openfile_purpose {
  MDBX_OPEN_DXB_READ = 0,
  MDBX_OPEN_DXB_LAZY = 1,
  MDBX_OPEN_DXB_DSYNC = 2,
  MDBX_OPEN_LCK = 3,
  MDBX_OPEN_COPY = 4,
  MDBX_OPEN_DELETE = 5
};

 int mdbx_openfile(const enum mdbx_openfile_purpose purpose,
                                     const MDBX_env *env, const char *pathname,
                                     mdbx_filehandle_t *fd,
                                     mdbx_mode_t unix_mode_bits);
 int mdbx_closefile(mdbx_filehandle_t fd);
 int mdbx_removefile(const char *pathname);
 int mdbx_removedirectory(const char *pathname);
 int mdbx_is_pipe(mdbx_filehandle_t fd);
 int mdbx_lockfile(mdbx_filehandle_t fd, _Bool wait);



 int mdbx_mmap(const int flags, mdbx_mmap_t *map,
                                 const size_t must, const size_t limit,
                                 const unsigned options);
 int mdbx_munmap(mdbx_mmap_t *map);


 int mdbx_mresize(const int flags, mdbx_mmap_t *map,
                                    size_t size, size_t limit);
# 714 "/libmdbx/src/osal.h"
 int mdbx_msync(mdbx_mmap_t *map, size_t offset,
                                  size_t length,
                                  enum mdbx_syncmode_bits mode_bits);
 int mdbx_check_fs_rdonly(mdbx_filehandle_t handle,
                                            const char *pathname, int err);

__attribute__((__unused__)) static __inline uint32_t mdbx_getpid(void) {
  _Static_assert(sizeof(mdbx_pid_t) <= sizeof(uint32_t), "sizeof(mdbx_pid_t) <= sizeof(uint32_t)");



  return getpid();

}

__attribute__((__unused__)) static __inline uintptr_t mdbx_thread_self(void) {
  mdbx_tid_t thunk;
  _Static_assert(sizeof(uintptr_t) >= sizeof(thunk), "sizeof(uintptr_t) >= sizeof(thunk)");



  thunk = pthread_self();

  return (uintptr_t)thunk;
}

 uint64_t mdbx_osal_monotime(void);
 uint64_t
mdbx_osal_16dot16_to_monotime(uint32_t seconds_16dot16);
 uint32_t mdbx_osal_monotime_to_16dot16(uint64_t monotime);

 bin128_t mdbx_osal_bootid(void);
# 761 "/libmdbx/src/osal.h"
 int mdbx_lck_init(MDBX_env *env,
                                     MDBX_env *inprocess_neighbor,
                                     int global_uniqueness_flag);
# 782 "/libmdbx/src/osal.h"
 int mdbx_lck_destroy(MDBX_env *env,
                                        MDBX_env *inprocess_neighbor);
# 797 "/libmdbx/src/osal.h"
 int mdbx_lck_seize(MDBX_env *env);
# 810 "/libmdbx/src/osal.h"
 int mdbx_lck_downgrade(MDBX_env *env);



 int mdbx_rdt_lock(MDBX_env *env);


 void mdbx_rdt_unlock(MDBX_env *env);





 int mdbx_txn_lock(MDBX_env *env, _Bool dont_wait);




 void mdbx_txn_unlock(MDBX_env *env);





 int mdbx_rpid_set(MDBX_env *env);





 int mdbx_rpid_clear(MDBX_env *env);
# 850 "/libmdbx/src/osal.h"
 int mdbx_rpid_check(MDBX_env *env, uint32_t pid);
# 202 "/libmdbx/src/internals.h" 2



extern const char *const mdbx_sourcery_d8797a55c55b5b0b920ac6e230d5563977eb23c86542d570a245d0841b6beb2c_v0_11_6_39_gbb8f4318_dirty;


# 1 "/libmdbx/src/options.h" 1
# 209 "/libmdbx/src/internals.h" 2
# 218 "/libmdbx/src/internals.h"
enum MDBX_memory_order {
  mo_Relaxed,
  mo_AcquireRelease,
  mo_SequentialConsistency
};

typedef union {
  volatile uint32_t weak;

  volatile _Atomic uint32_t c11a;

} MDBX_atomic_uint32_t;

typedef union {
  volatile uint64_t weak;

  volatile _Atomic uint64_t c11a;
# 247 "/libmdbx/src/internals.h"
} MDBX_atomic_uint64_t;
# 263 "/libmdbx/src/internals.h"
static 
# 263 "/libmdbx/src/internals.h" 3 4
      __inline __attribute__ ((__always_inline__)) 
# 263 "/libmdbx/src/internals.h"
                      memory_order mo_c11_store(enum MDBX_memory_order fence) {
  switch (fence) {
  default:
    
# 266 "/libmdbx/src/internals.h" 3 4
   ((void) (0))
# 266 "/libmdbx/src/internals.h"
                ;
    __builtin_unreachable();
  case mo_Relaxed:
    return memory_order_relaxed;
  case mo_AcquireRelease:
    return memory_order_release;
  case mo_SequentialConsistency:
    return memory_order_seq_cst;
  }
}

static 
# 277 "/libmdbx/src/internals.h" 3 4
      __inline __attribute__ ((__always_inline__)) 
# 277 "/libmdbx/src/internals.h"
                      memory_order mo_c11_load(enum MDBX_memory_order fence) {
  switch (fence) {
  default:
    
# 280 "/libmdbx/src/internals.h" 3 4
   ((void) (0))
# 280 "/libmdbx/src/internals.h"
                ;
    __builtin_unreachable();
  case mo_Relaxed:
    return memory_order_relaxed;
  case mo_AcquireRelease:
    return memory_order_acquire;
  case mo_SequentialConsistency:
    return memory_order_seq_cst;
  }
}




__attribute__((__unused__)) static 
# 294 "/libmdbx/src/internals.h" 3 4
                        __inline __attribute__ ((__always_inline__)) 
# 294 "/libmdbx/src/internals.h"
                                        void
mdbx_memory_fence(enum MDBX_memory_order order, _Bool write) {

  
# 297 "/libmdbx/src/internals.h" 3 4
 __atomic_thread_fence (
# 297 "/libmdbx/src/internals.h"
 write ? mo_c11_store(order) : mo_c11_load(order)
# 297 "/libmdbx/src/internals.h" 3 4
 )
# 297 "/libmdbx/src/internals.h"
                                                                      ;






}

__attribute__((__unused__)) static 
# 306 "/libmdbx/src/internals.h" 3 4
                        __inline __attribute__ ((__always_inline__)) 
# 306 "/libmdbx/src/internals.h"
                                        uint32_t
atomic_store32(MDBX_atomic_uint32_t *p, const uint32_t value,
               enum MDBX_memory_order order) {
  _Static_assert(sizeof(MDBX_atomic_uint32_t) == 4, "sizeof(MDBX_atomic_uint32_t) == 4");

  
# 311 "/libmdbx/src/internals.h" 3 4
 ((void) (0))
# 311 "/libmdbx/src/internals.h"
                                                       ;
  
# 312 "/libmdbx/src/internals.h" 3 4
 __extension__ ({ __auto_type __atomic_store_ptr = (
# 312 "/libmdbx/src/internals.h"
 (&(p)->c11a)
# 312 "/libmdbx/src/internals.h" 3 4
 ); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (
# 312 "/libmdbx/src/internals.h"
 value
# 312 "/libmdbx/src/internals.h" 3 4
 ); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (
# 312 "/libmdbx/src/internals.h"
 mo_c11_store(order)
# 312 "/libmdbx/src/internals.h" 3 4
 )); })
# 312 "/libmdbx/src/internals.h"
                                                                             ;






  return value;
}

__attribute__((__unused__)) static 
# 322 "/libmdbx/src/internals.h" 3 4
                        __inline __attribute__ ((__always_inline__)) 
# 322 "/libmdbx/src/internals.h"
                                        uint32_t
atomic_load32(const MDBX_atomic_uint32_t *p, enum MDBX_memory_order order) {
  _Static_assert(sizeof(MDBX_atomic_uint32_t) == 4, "sizeof(MDBX_atomic_uint32_t) == 4");

  
# 326 "/libmdbx/src/internals.h" 3 4
 ((void) (0))
# 326 "/libmdbx/src/internals.h"
                                                       ;
  return 
# 327 "/libmdbx/src/internals.h" 3 4
        __extension__ ({ __auto_type __atomic_load_ptr = (
# 327 "/libmdbx/src/internals.h"
        (&(p)->c11a)
# 327 "/libmdbx/src/internals.h" 3 4
        ); __typeof__ ((void)0, *__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (
# 327 "/libmdbx/src/internals.h"
        mo_c11_load(order)
# 327 "/libmdbx/src/internals.h" 3 4
        )); __atomic_load_tmp; })
# 327 "/libmdbx/src/internals.h"
                                                                           ;







}
# 366 "/libmdbx/src/internals.h"
typedef uint32_t pgno_t;
typedef MDBX_atomic_uint32_t atomic_pgno_t;







typedef uint64_t txnid_t;
typedef MDBX_atomic_uint64_t atomic_txnid_t;
# 395 "/libmdbx/src/internals.h"
typedef uint16_t indx_t;





#pragma pack(push, 4)


typedef struct MDBX_db {
  uint16_t md_flags;
  uint16_t md_depth;
  uint32_t md_xsize;
  pgno_t md_root;
  pgno_t md_branch_pages;
  pgno_t md_leaf_pages;
  pgno_t md_overflow_pages;
  uint64_t md_seq;
  uint64_t md_entries;
  uint64_t md_mod_txnid;
} MDBX_db;


typedef struct MDBX_geo {
  uint16_t grow_pv;

  uint16_t shrink_pv;

  pgno_t lower;
  pgno_t upper;
  pgno_t now;
  pgno_t next;

} MDBX_geo;




typedef struct MDBX_meta {


  uint32_t mm_magic_and_version[2];


  uint32_t mm_txnid_a[2];

  uint16_t mm_extra_flags;
  uint8_t mm_validator_id;

  uint8_t mm_extra_pagehdr;


  MDBX_geo mm_geo;

  MDBX_db mm_dbs[2];


  MDBX_canary mm_canary;






  uint32_t mm_datasync_sign[2];


  uint32_t mm_txnid_b[2];





  uint32_t mm_pages_retired[2];






  bin128_t mm_bootid;

} MDBX_meta;

#pragma pack(1)
# 498 "/libmdbx/src/internals.h"
typedef struct MDBX_page {
  union {





    uint64_t mp_txnid;
    struct MDBX_page *mp_next;
  };
  uint16_t mp_leaf2_ksize;
# 520 "/libmdbx/src/internals.h"
  uint16_t mp_flags;
  union {
    uint32_t mp_pages;
    __extension__ struct {
      indx_t mp_lower;
      indx_t mp_upper;
    };
  };
  pgno_t mp_pgno;



  indx_t mp_ptrs[] ;

} MDBX_page;




#pragma pack(pop)




typedef struct {
  MDBX_atomic_uint64_t newly;
  MDBX_atomic_uint64_t cow;
  MDBX_atomic_uint64_t clone;

  MDBX_atomic_uint64_t split;
  MDBX_atomic_uint64_t merge;
  MDBX_atomic_uint64_t spill;
  MDBX_atomic_uint64_t unspill;
  MDBX_atomic_uint64_t
      wops;
} MDBX_pgop_stat_t;
# 572 "/libmdbx/src/internals.h"
typedef pthread_mutex_t mdbx_ipclock_t;
# 581 "/libmdbx/src/internals.h"
 int mdbx_ipclock_stub(mdbx_ipclock_t *ipc);
 int mdbx_ipclock_destroy(mdbx_ipclock_t *ipc);
# 624 "/libmdbx/src/internals.h"
typedef struct MDBX_reader {






  MDBX_atomic_uint64_t mr_txnid;
# 643 "/libmdbx/src/internals.h"
  MDBX_atomic_uint64_t mr_tid;


  MDBX_atomic_uint32_t mr_pid;



  atomic_pgno_t mr_snapshot_pages_used;



  MDBX_atomic_uint64_t mr_snapshot_pages_retired;
} MDBX_reader;


typedef struct MDBX_lockinfo {


  uint64_t mti_magic_and_version;


  uint32_t mti_os_and_format;


  MDBX_atomic_uint32_t mti_envmode;



  atomic_pgno_t mti_autosync_threshold;



  MDBX_atomic_uint32_t mti_meta_sync_txnid;






  MDBX_atomic_uint64_t mti_autosync_period;


  MDBX_atomic_uint64_t mti_bait_uniqueness;

  
# 687 "/libmdbx/src/internals.h" 3 4
 _Alignas
# 687 "/libmdbx/src/internals.h"
 (64)




  MDBX_pgop_stat_t mti_pgop_stat;


  
# 695 "/libmdbx/src/internals.h" 3 4
 _Alignas
# 695 "/libmdbx/src/internals.h"
 (64)



  mdbx_ipclock_t mti_wlock;


  atomic_txnid_t mti_oldest_reader;




  MDBX_atomic_uint64_t mti_sync_timestamp;


  atomic_pgno_t mti_unsynced_pages;


  atomic_pgno_t mti_discarded_tail;


  MDBX_atomic_uint64_t mti_reader_check_timestamp;


  pgno_t mti_readahead_anchor;

  
# 721 "/libmdbx/src/internals.h" 3 4
 _Alignas
# 721 "/libmdbx/src/internals.h"
 (64)



  mdbx_ipclock_t mti_rlock;





  MDBX_atomic_uint32_t mti_numreaders;
  MDBX_atomic_uint32_t mti_readers_refresh_flag;



  
# 736 "/libmdbx/src/internals.h" 3 4
 _Alignas
# 736 "/libmdbx/src/internals.h"
 (64)
  MDBX_reader mti_readers[] ;

} MDBX_lockinfo;
# 802 "/libmdbx/src/internals.h"
typedef pgno_t *MDBX_PNL;
# 813 "/libmdbx/src/internals.h"
typedef txnid_t *MDBX_TXL;


typedef struct MDBX_dp {
  MDBX_page *ptr;
  pgno_t pgno;
  union {
    unsigned extra;
    __extension__ struct {
      unsigned multi : 1;
      unsigned lru : 31;
    };
  };
} MDBX_dp;


typedef struct MDBX_dpl {
  unsigned sorted;
  unsigned length;
  unsigned detent;


  MDBX_dp items[] ;

} MDBX_dpl;
# 874 "/libmdbx/src/internals.h"
typedef struct MDBX_dbx {
  MDBX_val md_name;
  MDBX_cmp_func *md_cmp;
  MDBX_cmp_func *md_dcmp;
  size_t md_klen_min, md_klen_max;
  size_t md_vlen_min,
      md_vlen_max;
} MDBX_dbx;



struct MDBX_txn {

  uint32_t mt_signature;
# 916 "/libmdbx/src/internals.h"
  uint32_t mt_flags;

  MDBX_txn *mt_parent;

  MDBX_txn *mt_child;
  MDBX_geo mt_geo;
# 930 "/libmdbx/src/internals.h"
  txnid_t mt_txnid;
  txnid_t mt_front;

  MDBX_env *mt_env;

  MDBX_dbx *mt_dbxs;

  MDBX_db *mt_dbs;

  unsigned *mt_dbiseqs;
# 950 "/libmdbx/src/internals.h"
  uint8_t *mt_dbistate;



  MDBX_dbi mt_numdbs;
  size_t mt_owner;
  MDBX_canary mt_canary;
  void *mt_userctx;
  MDBX_cursor **mt_cursors;

  union {
    struct {

      MDBX_reader *reader;
    } to;
    struct {

      pgno_t *reclaimed_pglist;
      txnid_t last_reclaimed;

      pgno_t loose_refund_wl ;





      unsigned dirtyroom;

      unsigned dirtylru;

      MDBX_dpl *dirtylist;

      MDBX_TXL lifo_reclaimed;

      MDBX_PNL retired_pages;


      MDBX_page *loose_pages;

      unsigned loose_count;



      MDBX_PNL spill_pages;
      unsigned spill_least_removed;
    } tw;
  };
};







struct MDBX_xcursor;
# 1014 "/libmdbx/src/internals.h"
struct MDBX_cursor {



  uint32_t mc_signature;

  MDBX_dbi mc_dbi;

  MDBX_cursor *mc_next;

  MDBX_cursor *mc_backup;

  struct MDBX_xcursor *mc_xcursor;

  MDBX_txn *mc_txn;

  MDBX_db *mc_db;

  MDBX_dbx *mc_dbx;

  uint8_t *mc_dbistate;
  unsigned mc_snum;
  unsigned mc_top;
# 1053 "/libmdbx/src/internals.h"
  unsigned mc_flags;
  MDBX_page *mc_pg[32];
  indx_t mc_ki[32];
};





typedef struct MDBX_xcursor {

  MDBX_cursor mx_cursor;

  MDBX_db mx_db;

  MDBX_dbx mx_dbx;
} MDBX_xcursor;

typedef struct MDBX_cursor_couple {
  MDBX_cursor outer;
  void *mc_userctx;
  MDBX_xcursor inner;
} MDBX_cursor_couple;


struct MDBX_env {


  MDBX_atomic_uint32_t me_signature;
# 1091 "/libmdbx/src/internals.h"
  uint32_t me_flags;
  mdbx_mmap_t me_dxb_mmap;


  mdbx_filehandle_t me_dsync_fd;
  mdbx_mmap_t me_lck_mmap;

  struct MDBX_lockinfo *me_lck;

  unsigned me_psize;
  unsigned me_leaf_nodemax;
  uint8_t me_psize2log;
  int8_t me_stuck_meta;
  uint16_t me_merge_threshold,
      me_merge_threshold_gc;

  unsigned me_os_psize;
  unsigned me_maxreaders;
  MDBX_dbi me_maxdbs;
  uint32_t me_pid;
  mdbx_thread_key_t me_txkey;
  char *me_pathname;
  void *me_pbuf;
  MDBX_txn *me_txn0;

  MDBX_dbx *me_dbxs;
  uint16_t *me_dbflags;
  unsigned *me_dbiseqs;
  unsigned
      me_maxgc_ov1page;
  uint32_t me_live_reader;
  void *me_userctx;
  MDBX_hsr_func *me_hsr_callback;

  struct {
    unsigned dp_reserve_limit;
    unsigned rp_augment_limit;
    unsigned dp_limit;
    unsigned dp_initial;
    uint8_t dp_loose_limit;
    uint8_t spill_max_denominator;
    uint8_t spill_min_denominator;
    uint8_t spill_parent4child_denominator;
    unsigned merge_threshold_16dot16_percent;
    union {
      unsigned all;

      struct {
        unsigned dp_limit : 1;
      } non_auto;
    } flags;
  } me_options;




  struct {
    size_t lower;
    size_t upper;
    size_t now;
    size_t grow;
    size_t shrink;
  } me_dbgeo;
# 1162 "/libmdbx/src/internals.h"
  MDBX_env *me_lcklist_next;



  MDBX_txn *me_txn;
  mdbx_fastmutex_t me_dbi_lock;
  MDBX_dbi me_numdbs;

  MDBX_page *me_dp_reserve;
  unsigned me_dp_reserve_len;

  MDBX_PNL me_retired_pages;






  mdbx_fastmutex_t me_remap_guard;
# 1203 "/libmdbx/src/internals.h"
  MDBX_atomic_uint64_t
      x_lckless_stub[(sizeof(MDBX_lockinfo) + 64 - 1) /
                     sizeof(MDBX_atomic_uint64_t)];
};
# 1215 "/libmdbx/src/internals.h"
extern uint8_t mdbx_runtime_flags;
extern uint8_t mdbx_loglevel;
extern MDBX_debug_func *mdbx_debug_logger;

__attribute__((__unused__)) static __inline void mdbx_jitter4testing(_Bool tiny) {




  (void)tiny;

}

 void __attribute__((__format__(__printf__, 4, 5)))
    mdbx_debug_log(int level, const char *function, int line, const char *fmt,
                   ...) __attribute__((__format__(__printf__, 4, 5)));
 void mdbx_debug_log_va(int level, const char *function,
                                          int line, const char *fmt,
                                          va_list args);
# 1255 "/libmdbx/src/internals.h"
void mdbx_assert_fail(const MDBX_env *env, const char *msg, const char *func,
                      int line);
# 1351 "/libmdbx/src/internals.h"
__attribute__((__unused__)) static __inline void
mdbx_flush_incoherent_mmap(void *addr, size_t nbytes, const intptr_t pagesize) {
# 1361 "/libmdbx/src/internals.h"
  (void)pagesize;
# 1375 "/libmdbx/src/internals.h"
  (void)addr;
  (void)nbytes;

}




 int mdbx_cleanup_dead_readers(MDBX_env *env, int rlocked,
                                                 int *dead);
 int mdbx_rthc_alloc(mdbx_thread_key_t *key,
                                       MDBX_reader *begin, MDBX_reader *end);
 void mdbx_rthc_remove(const mdbx_thread_key_t key);

 void mdbx_rthc_global_init(void);
 void mdbx_rthc_global_dtor(void);
 void mdbx_rthc_thread_dtor(void *ptr);
# 1463 "/libmdbx/src/internals.h"
typedef struct MDBX_node {

  union {
    uint32_t mn_dsize;
    uint32_t mn_pgno32;
  };
  uint8_t mn_flags;
  uint8_t mn_extra;
  uint16_t mn_ksize;
# 1492 "/libmdbx/src/internals.h"
  uint8_t mn_data[] ;

} MDBX_node;
# 1538 "/libmdbx/src/internals.h"
__attribute__((__unused__)) __attribute__((__const__, __nothrow__)) static __inline pgno_t
int64pgno(int64_t i64) {
  if (__builtin_expect(!!(i64 >= (int64_t)3 && i64 <= (int64_t)0x7FFFffffU + 1), 1))
    return (pgno_t)i64;
  return (i64 < (int64_t)3) ? 3 : 0x7FFFffffU;
}

__attribute__((__unused__)) __attribute__((__const__, __nothrow__)) static __inline pgno_t
pgno_add(size_t base, size_t augend) {
  
# 1547 "/libmdbx/src/internals.h" 3 4
 ((void) (0))
# 1547 "/libmdbx/src/internals.h"
                                                      ;
  return int64pgno(base + augend);
}

__attribute__((__unused__)) __attribute__((__const__, __nothrow__)) static __inline pgno_t
pgno_sub(size_t base, size_t subtrahend) {
  
# 1553 "/libmdbx/src/internals.h" 3 4
 ((void) (0))
                                 
# 1554 "/libmdbx/src/internals.h"
                                ;
  return int64pgno(base - subtrahend);
}

__attribute__((__unused__)) __attribute__((__const__, __nothrow__)) static 
# 1558 "/libmdbx/src/internals.h" 3 4
                                                    __inline __attribute__ ((__always_inline__)) 
# 1558 "/libmdbx/src/internals.h"
                                                                    _Bool
is_powerof2(size_t x) {
  return (x & (x - 1)) == 0;
}

__attribute__((__unused__)) __attribute__((__const__, __nothrow__)) static 
# 1563 "/libmdbx/src/internals.h" 3 4
                                                    __inline __attribute__ ((__always_inline__)) 
# 1563 "/libmdbx/src/internals.h"
                                                                    size_t
floor_powerof2(size_t value, size_t granularity) {
  
# 1565 "/libmdbx/src/internals.h" 3 4
 ((void) (0))
# 1565 "/libmdbx/src/internals.h"
                                 ;
  return value & ~(granularity - 1);
}

__attribute__((__unused__)) __attribute__((__const__, __nothrow__)) static 
# 1569 "/libmdbx/src/internals.h" 3 4
                                                    __inline __attribute__ ((__always_inline__)) 
# 1569 "/libmdbx/src/internals.h"
                                                                    size_t
ceil_powerof2(size_t value, size_t granularity) {
  return floor_powerof2(value + granularity - 1, granularity);
}

__attribute__((__unused__)) __attribute__((__const__, __nothrow__)) static unsigned
log2n_powerof2(size_t value) {
  
# 1576 "/libmdbx/src/internals.h" 3 4
 ((void) (0))
# 1576 "/libmdbx/src/internals.h"
                                                             ;
  
# 1577 "/libmdbx/src/internals.h" 3 4
 ((void) (0))
# 1577 "/libmdbx/src/internals.h"
                                           ;

  return __builtin_ctzl(value);
# 1590 "/libmdbx/src/internals.h"
}
# 1604 "/libmdbx/src/internals.h"
__attribute__((__unused__)) static void static_checks(void) {
  _Static_assert(
# 1605 "/libmdbx/src/internals.h" 3 4
 (32767) 
# 1605 "/libmdbx/src/internals.h"
 - 2 == MDBX_MAX_DBI, "Oops, MDBX_MAX_DBI or CORE_DBS?")
                                                      ;
  _Static_assert((unsigned)(MDBX_DB_ACCEDE | MDBX_CREATE) == ((((MDBX_REVERSEKEY | MDBX_DUPSORT | MDBX_INTEGERKEY | MDBX_DUPFIXED | MDBX_INTEGERDUP | MDBX_REVERSEDUP) | MDBX_CREATE | MDBX_DB_ACCEDE) | 0x8000) & (((MDBX_SAFE_NOSYNC | MDBX_NOMETASYNC | 0x100000U | MDBX_NOMEMINIT | MDBX_COALESCE | MDBX_PAGEPERTURB | MDBX_ACCEDE) | (MDBX_NOSUBDIR | MDBX_RDONLY | MDBX_WRITEMAP | MDBX_NOTLS | MDBX_NORDAHEAD | MDBX_LIFORECLAIM | MDBX_EXCLUSIVE)) | (0x80000000U | 0x20000000U | 0x10000000U))), "Oops, some flags overlapped or wrong")


                                                           ;
  _Static_assert(((0x80000000U | 0x20000000U | 0x10000000U) & ((MDBX_SAFE_NOSYNC | MDBX_NOMETASYNC | 0x100000U | MDBX_NOMEMINIT | MDBX_COALESCE | MDBX_PAGEPERTURB | MDBX_ACCEDE) | (MDBX_NOSUBDIR | MDBX_RDONLY | MDBX_WRITEMAP | MDBX_NOTLS | MDBX_NORDAHEAD | MDBX_LIFORECLAIM | MDBX_EXCLUSIVE))) == 0, "Oops, some flags overlapped or wrong")
                                                           ;
}
# 25 "/libmdbx/src/mdbx_load.c" 2

# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 108 "/usr/include/ctype.h" 3 4
extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));




extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));




extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ , __leaf__));






extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 206 "/usr/include/ctype.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
# 251 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 327 "/usr/include/ctype.h" 3 4

# 27 "/libmdbx/src/mdbx_load.c" 2
# 40 "/libmdbx/src/mdbx_load.c"

# 40 "/libmdbx/src/mdbx_load.c"
static volatile sig_atomic_t user_break;
static void signal_handler(int sig) {
  (void)sig;
  user_break = 1;
}



static char *prog;
static _Bool quiet = (0);
static size_t lineno;
static void error(const char *func, int rc) {
  if (!quiet) {
    if (lineno)
      fprintf(
# 54 "/libmdbx/src/mdbx_load.c" 3 4
             stderr
# 54 "/libmdbx/src/mdbx_load.c"
                   , "%s: at input line %" 
# 54 "/libmdbx/src/mdbx_load.c" 3 4
                                           "l" "i" 
# 54 "/libmdbx/src/mdbx_load.c"
                                                    ": %s() error %d, %s\n",
              prog, lineno, func, rc, mdbx_strerror(rc));
    else
      fprintf(
# 57 "/libmdbx/src/mdbx_load.c" 3 4
             stderr
# 57 "/libmdbx/src/mdbx_load.c"
                   , "%s: %s() error %d %s\n", prog, func, rc,
              mdbx_strerror(rc));
  }
}

static char *valstr(char *line, const char *item) {
  const size_t len = strlen(item);
  if (strncmp(line, item, len) != 0)
    return 
# 65 "/libmdbx/src/mdbx_load.c" 3 4
          ((void *)0)
# 65 "/libmdbx/src/mdbx_load.c"
                 ;
  if (line[len] != '=') {
    if (line[len] > ' ')
      return 
# 68 "/libmdbx/src/mdbx_load.c" 3 4
            ((void *)0)
# 68 "/libmdbx/src/mdbx_load.c"
                   ;
    if (!quiet)
      fprintf(
# 70 "/libmdbx/src/mdbx_load.c" 3 4
             stderr
# 70 "/libmdbx/src/mdbx_load.c"
                   ,
              "%s: line %" 
# 71 "/libmdbx/src/mdbx_load.c" 3 4
                          "l" "i" 
# 71 "/libmdbx/src/mdbx_load.c"
                                   ": unexpected line format for '%s'\n", prog,
              lineno, item);
    exit(
# 73 "/libmdbx/src/mdbx_load.c" 3 4
        1
# 73 "/libmdbx/src/mdbx_load.c"
                    );
  }
  char *ptr = strchr(line, '\n');
  if (ptr)
    *ptr = '\0';
  return line + len + 1;
}

static _Bool valnum(char *line, const char *item, uint64_t *value) {
  char *str = valstr(line, item);
  if (!str)
    return (0);

  char *end = 
# 86 "/libmdbx/src/mdbx_load.c" 3 4
             ((void *)0)
# 86 "/libmdbx/src/mdbx_load.c"
                    ;
  *value = strtoull(str, &end, 0);
  if (end && *end) {
    if (!quiet)
      fprintf(
# 90 "/libmdbx/src/mdbx_load.c" 3 4
             stderr
# 90 "/libmdbx/src/mdbx_load.c"
                   ,
              "%s: line %" 
# 91 "/libmdbx/src/mdbx_load.c" 3 4
                          "l" "i" 
# 91 "/libmdbx/src/mdbx_load.c"
                                   ": unexpected number format for '%s'\n",
              prog, lineno, item);
    exit(
# 93 "/libmdbx/src/mdbx_load.c" 3 4
        1
# 93 "/libmdbx/src/mdbx_load.c"
                    );
  }
  return (1);
}

static _Bool valbool(char *line, const char *item, _Bool *value) {
  uint64_t u64;
  if (!valnum(line, item, &u64))
    return (0);

  if (u64 > 1) {
    if (!quiet)
      fprintf(
# 105 "/libmdbx/src/mdbx_load.c" 3 4
             stderr
# 105 "/libmdbx/src/mdbx_load.c"
                   , "%s: line %" 
# 105 "/libmdbx/src/mdbx_load.c" 3 4
                                  "l" "i" 
# 105 "/libmdbx/src/mdbx_load.c"
                                           ": unexpected value for '%s'\n",
              prog, lineno, item);
    exit(
# 107 "/libmdbx/src/mdbx_load.c" 3 4
        1
# 107 "/libmdbx/src/mdbx_load.c"
                    );
  }
  *value = u64 != 0;
  return (1);
}



static char *subname = 
# 115 "/libmdbx/src/mdbx_load.c" 3 4
                      ((void *)0)
# 115 "/libmdbx/src/mdbx_load.c"
                             ;
static int dbi_flags;
static txnid_t txnid;
static uint64_t sequence;
static MDBX_canary canary;
static MDBX_envinfo envinfo;




static int mode = 4;

static MDBX_val kbuf, dbuf;



typedef struct flagbit {
  unsigned bit;
  unsigned len;
  char *name;
} flagbit;



flagbit dbflags[] = {
    {MDBX_REVERSEKEY, (sizeof("reversekey") - 1), "reversekey"}, {MDBX_DUPSORT, (sizeof("duplicates") - 1), "duplicates"},
    {MDBX_DUPSORT, (sizeof("dupsort") - 1), "dupsort"}, {MDBX_INTEGERKEY, (sizeof("integerkey") - 1), "integerkey"},
    {MDBX_DUPFIXED, (sizeof("dupfixed") - 1), "dupfixed"}, {MDBX_INTEGERDUP, (sizeof("integerdup") - 1), "integerdup"},
    {MDBX_REVERSEDUP, (sizeof("reversedup") - 1), "reversedup"}, {0, 0, 
# 143 "/libmdbx/src/mdbx_load.c" 3 4
                                              ((void *)0)
# 143 "/libmdbx/src/mdbx_load.c"
                                                     }};

static int readhdr(void) {

  if (subname) {
    free(subname);
    subname = 
# 149 "/libmdbx/src/mdbx_load.c" 3 4
             ((void *)0)
# 149 "/libmdbx/src/mdbx_load.c"
                    ;
  }
  dbi_flags = 0;
  txnid = 0;
  sequence = 0;

  while ((1)) {
    
# 156 "/libmdbx/src/mdbx_load.c" 3 4
   (*__errno_location ()) 
# 156 "/libmdbx/src/mdbx_load.c"
         = 0;
    if (fgets(dbuf.iov_base, (int)dbuf.iov_len, 
# 157 "/libmdbx/src/mdbx_load.c" 3 4
                                               stdin
# 157 "/libmdbx/src/mdbx_load.c"
                                                    ) == 
# 157 "/libmdbx/src/mdbx_load.c" 3 4
                                                         ((void *)0)
# 157 "/libmdbx/src/mdbx_load.c"
                                                                )
      return 
# 158 "/libmdbx/src/mdbx_load.c" 3 4
            (*__errno_location ()) 
# 158 "/libmdbx/src/mdbx_load.c"
                  ? 
# 158 "/libmdbx/src/mdbx_load.c" 3 4
                    (*__errno_location ()) 
# 158 "/libmdbx/src/mdbx_load.c"
                          : 
# 158 "/libmdbx/src/mdbx_load.c" 3 4
                            (-1)
# 158 "/libmdbx/src/mdbx_load.c"
                               ;
    if (user_break)
      return MDBX_EINTR;

    lineno++;
    uint64_t u64;

    if (valnum(dbuf.iov_base, "VERSION", &u64)) {
      if (u64 != 3) {
        if (!quiet)
          fprintf(
# 168 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 168 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 169 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 169 "/libmdbx/src/mdbx_load.c"
                                       ": unsupported value %" 
# 169 "/libmdbx/src/mdbx_load.c" 3 4
                                                               "l" "u"
                  
# 170 "/libmdbx/src/mdbx_load.c"
                 " for %s\n",
                  prog, lineno, u64, "VERSION");
        exit(
# 172 "/libmdbx/src/mdbx_load.c" 3 4
            1
# 172 "/libmdbx/src/mdbx_load.c"
                        );
      }
      continue;
    }

    if (valnum(dbuf.iov_base, "db_pagesize", &u64)) {
      if (!(mode & 4) && envinfo.mi_dxb_pagesize != u64) {
        if (!quiet)
          fprintf(
# 180 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 180 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 181 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 181 "/libmdbx/src/mdbx_load.c"
                                       ": ignore value %" 
# 181 "/libmdbx/src/mdbx_load.c" 3 4
                                                          "l" "u"
                  
# 182 "/libmdbx/src/mdbx_load.c"
                 " for '%s' in non-global context\n",
                  prog, lineno, u64, "db_pagesize");
      } else if (u64 < MDBX_MIN_PAGESIZE || u64 > MDBX_MAX_PAGESIZE) {
        if (!quiet)
          fprintf(
# 186 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 186 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 187 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 187 "/libmdbx/src/mdbx_load.c"
                                       ": ignore unsupported value %" 
# 187 "/libmdbx/src/mdbx_load.c" 3 4
                                                                      "l" "u"
                  
# 188 "/libmdbx/src/mdbx_load.c"
                 " for %s\n",
                  prog, lineno, u64, "db_pagesize");
      } else
        envinfo.mi_dxb_pagesize = (uint32_t)u64;
      continue;
    }

    char *str = valstr(dbuf.iov_base, "format");
    if (str) {
      if (strcmp(str, "print") == 0) {
        mode |= 1;
        continue;
      }
      if (strcmp(str, "bytevalue") == 0) {
        mode &= ~1;
        continue;
      }
      if (!quiet)
        fprintf(
# 206 "/libmdbx/src/mdbx_load.c" 3 4
               stderr
# 206 "/libmdbx/src/mdbx_load.c"
                     ,
                "%s: line %" 
# 207 "/libmdbx/src/mdbx_load.c" 3 4
                            "l" "i" 
# 207 "/libmdbx/src/mdbx_load.c"
                                     ": unsupported value '%s' for %s\n", prog,
                lineno, str, "format");
      exit(
# 209 "/libmdbx/src/mdbx_load.c" 3 4
          1
# 209 "/libmdbx/src/mdbx_load.c"
                      );
    }

    str = valstr(dbuf.iov_base, "database");
    if (str) {
      if (*str) {
        free(subname);
        subname = strdup(str);
        if (!subname) {
          if (!quiet)
            perror("strdup()");
          exit(
# 220 "/libmdbx/src/mdbx_load.c" 3 4
              1
# 220 "/libmdbx/src/mdbx_load.c"
                          );
        }
      }
      continue;
    }

    str = valstr(dbuf.iov_base, "type");
    if (str) {
      if (strcmp(str, "btree") != 0) {
        if (!quiet)
          fprintf(
# 230 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 230 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 231 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 231 "/libmdbx/src/mdbx_load.c"
                                       ": unsupported value '%s' for %s\n",
                  prog, lineno, str, "type");
        free(subname);
        exit(
# 234 "/libmdbx/src/mdbx_load.c" 3 4
            1
# 234 "/libmdbx/src/mdbx_load.c"
                        );
      }
      continue;
    }

    if (valnum(dbuf.iov_base, "mapaddr", &u64)) {
      if (u64) {
        if (!quiet)
          fprintf(
# 242 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 242 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 243 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 243 "/libmdbx/src/mdbx_load.c"
                                       ": ignore unsupported value 0x%" 
# 243 "/libmdbx/src/mdbx_load.c" 3 4
                                                                        "l" "x"
                  
# 244 "/libmdbx/src/mdbx_load.c"
                 " for %s\n",
                  prog, lineno, u64, "mapaddr");
      }
      continue;
    }

    if (valnum(dbuf.iov_base, "mapsize", &u64)) {
      if (!(mode & 4)) {
        if (!quiet)
          fprintf(
# 253 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 253 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 254 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 254 "/libmdbx/src/mdbx_load.c"
                                       ": ignore value %" 
# 254 "/libmdbx/src/mdbx_load.c" 3 4
                                                          "l" "u"
                  
# 255 "/libmdbx/src/mdbx_load.c"
                 " for '%s' in non-global context\n",
                  prog, lineno, u64, "mapsize");
      } else if (u64 < (MDBX_MIN_PAGESIZE * 3) || u64 > ((0x7FFFffffU + 1) * (uint64_t)MDBX_MAX_PAGESIZE)) {
        if (!quiet)
          fprintf(
# 259 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 259 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 260 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 260 "/libmdbx/src/mdbx_load.c"
                                       ": ignore unsupported value 0x%" 
# 260 "/libmdbx/src/mdbx_load.c" 3 4
                                                                        "l" "x"
                  
# 261 "/libmdbx/src/mdbx_load.c"
                 " for %s\n",
                  prog, lineno, u64, "mapsize");
      } else
        envinfo.mi_mapsize = (size_t)u64;
      continue;
    }

    if (valnum(dbuf.iov_base, "maxreaders", &u64)) {
      if (!(mode & 4)) {
        if (!quiet)
          fprintf(
# 271 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 271 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 272 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 272 "/libmdbx/src/mdbx_load.c"
                                       ": ignore value %" 
# 272 "/libmdbx/src/mdbx_load.c" 3 4
                                                          "l" "u"
                  
# 273 "/libmdbx/src/mdbx_load.c"
                 " for '%s' in non-global context\n",
                  prog, lineno, u64, "maxreaders");
      } else if (u64 < 1 || u64 > 32767) {
        if (!quiet)
          fprintf(
# 277 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 277 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 278 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 278 "/libmdbx/src/mdbx_load.c"
                                       ": ignore unsupported value 0x%" 
# 278 "/libmdbx/src/mdbx_load.c" 3 4
                                                                        "l" "x"
                  
# 279 "/libmdbx/src/mdbx_load.c"
                 " for %s\n",
                  prog, lineno, u64, "maxreaders");
      } else
        envinfo.mi_maxreaders = (int)u64;
      continue;
    }

    if (valnum(dbuf.iov_base, "txnid", &u64)) {
      if (u64 < 1UL || u64 > (0xffffFFFF00000000UL - 1)) {
        if (!quiet)
          fprintf(
# 289 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 289 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 290 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 290 "/libmdbx/src/mdbx_load.c"
                                       ": ignore unsupported value 0x%" 
# 290 "/libmdbx/src/mdbx_load.c" 3 4
                                                                        "l" "x"
                  
# 291 "/libmdbx/src/mdbx_load.c"
                 " for %s\n",
                  prog, lineno, u64, "txnid");
      } else
        txnid = u64;
      continue;
    }

    if (valnum(dbuf.iov_base, "sequence", &u64)) {
      sequence = u64;
      continue;
    }

    str = valstr(dbuf.iov_base, "geometry");
    if (str) {
      if (!(mode & 4)) {
        if (!quiet)
          fprintf(
# 307 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 307 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 308 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 308 "/libmdbx/src/mdbx_load.c"
                                       ": ignore values %s"
                  " for '%s' in non-global context\n",
                  prog, lineno, str, "geometry");
      } else if (sscanf(str,
                        "l%" 
# 312 "/libmdbx/src/mdbx_load.c" 3 4
                            "l" "u" 
# 312 "/libmdbx/src/mdbx_load.c"
                                   ",c%" 
# 312 "/libmdbx/src/mdbx_load.c" 3 4
                                         "l" "u" 
# 312 "/libmdbx/src/mdbx_load.c"
                                                ",u%" 
# 312 "/libmdbx/src/mdbx_load.c" 3 4
                                                      "l" "u" 
# 312 "/libmdbx/src/mdbx_load.c"
                                                             ",s%" 
# 312 "/libmdbx/src/mdbx_load.c" 3 4
                                                                   "l" "u"
                        
# 313 "/libmdbx/src/mdbx_load.c"
                       ",g%" 
# 313 "/libmdbx/src/mdbx_load.c" 3 4
                             "l" "u"
# 313 "/libmdbx/src/mdbx_load.c"
                                   ,
                        &envinfo.mi_geo.lower, &envinfo.mi_geo.current,
                        &envinfo.mi_geo.upper, &envinfo.mi_geo.shrink,
                        &envinfo.mi_geo.grow) != 5) {
        if (!quiet)
          fprintf(
# 318 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 318 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 319 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 319 "/libmdbx/src/mdbx_load.c"
                                       ": unexpected line format for '%s'\n",
                  prog, lineno, "geometry");
        exit(
# 321 "/libmdbx/src/mdbx_load.c" 3 4
            1
# 321 "/libmdbx/src/mdbx_load.c"
                        );
      }
      continue;
    }

    str = valstr(dbuf.iov_base, "canary");
    if (str) {
      if (!(mode & 4)) {
        if (!quiet)
          fprintf(
# 330 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 330 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 331 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 331 "/libmdbx/src/mdbx_load.c"
                                       ": ignore values %s"
                  " for '%s' in non-global context\n",
                  prog, lineno, str, "canary");
      } else if (sscanf(str, "v%" 
# 334 "/libmdbx/src/mdbx_load.c" 3 4
                                 "l" "u" 
# 334 "/libmdbx/src/mdbx_load.c"
                                        ",x%" 
# 334 "/libmdbx/src/mdbx_load.c" 3 4
                                              "l" "u" 
# 334 "/libmdbx/src/mdbx_load.c"
                                                     ",y%" 
# 334 "/libmdbx/src/mdbx_load.c" 3 4
                                                           "l" "u" 
# 334 "/libmdbx/src/mdbx_load.c"
                                                                  ",z%" 
# 334 "/libmdbx/src/mdbx_load.c" 3 4
                                                                        "l" "u"
# 334 "/libmdbx/src/mdbx_load.c"
                                                                              ,
                        &canary.v, &canary.x, &canary.y, &canary.z) != 4) {
        if (!quiet)
          fprintf(
# 337 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 337 "/libmdbx/src/mdbx_load.c"
                       ,
                  "%s: line %" 
# 338 "/libmdbx/src/mdbx_load.c" 3 4
                              "l" "i" 
# 338 "/libmdbx/src/mdbx_load.c"
                                       ": unexpected line format for '%s'\n",
                  prog, lineno, "canary");
        exit(
# 340 "/libmdbx/src/mdbx_load.c" 3 4
            1
# 340 "/libmdbx/src/mdbx_load.c"
                        );
      }
      continue;
    }

    for (int i = 0; dbflags[i].bit; i++) {
      _Bool value = (0);
      if (valbool(dbuf.iov_base, dbflags[i].name, &value)) {
        if (value)
          dbi_flags |= dbflags[i].bit;
        else
          dbi_flags &= ~dbflags[i].bit;
        goto next;
      }
    }

    str = valstr(dbuf.iov_base, "HEADER");
    if (str) {
      if (strcmp(str, "END") == 0)
        return MDBX_SUCCESS;
    }

    if (!quiet)
      fprintf(
# 363 "/libmdbx/src/mdbx_load.c" 3 4
             stderr
# 363 "/libmdbx/src/mdbx_load.c"
                   ,
              "%s: line %" 
# 364 "/libmdbx/src/mdbx_load.c" 3 4
                          "l" "i" 
# 364 "/libmdbx/src/mdbx_load.c"
                                   ": unrecognized keyword ignored: %s\n",
              prog, lineno, (char *)dbuf.iov_base);
  next:;
  }
  return 
# 368 "/libmdbx/src/mdbx_load.c" 3 4
        (-1)
# 368 "/libmdbx/src/mdbx_load.c"
           ;
}

static int badend(void) {
  if (!quiet)
    fprintf(
# 373 "/libmdbx/src/mdbx_load.c" 3 4
           stderr
# 373 "/libmdbx/src/mdbx_load.c"
                 , "%s: line %" 
# 373 "/libmdbx/src/mdbx_load.c" 3 4
                                "l" "i" 
# 373 "/libmdbx/src/mdbx_load.c"
                                         ": unexpected end of input\n", prog,
            lineno);
  return 
# 375 "/libmdbx/src/mdbx_load.c" 3 4
        (*__errno_location ()) 
# 375 "/libmdbx/src/mdbx_load.c"
              ? 
# 375 "/libmdbx/src/mdbx_load.c" 3 4
                (*__errno_location ()) 
# 375 "/libmdbx/src/mdbx_load.c"
                      : MDBX_ENODATA;
}

static __inline int unhex(unsigned char *c2) {
  int x, c;
  x = *c2++ & 0x4f;
  if (x & 0x40)
    x -= 55;
  c = x << 4;
  x = *c2 & 0x4f;
  if (x & 0x40)
    x -= 55;
  c |= x;
  return c;
}

__attribute__((__hot__)) __attribute__((__optimize__("O3"))) static int readline(MDBX_val *out, MDBX_val *buf) {
  unsigned char *c1, *c2, *end;
  size_t len, l2;
  int c;

  if (user_break)
    return MDBX_EINTR;

  
# 399 "/libmdbx/src/mdbx_load.c" 3 4
 (*__errno_location ()) 
# 399 "/libmdbx/src/mdbx_load.c"
       = 0;
  if (!(mode & 2)) {
    c = fgetc(
# 401 "/libmdbx/src/mdbx_load.c" 3 4
             stdin
# 401 "/libmdbx/src/mdbx_load.c"
                  );
    if (c == 
# 402 "/libmdbx/src/mdbx_load.c" 3 4
            (-1)
# 402 "/libmdbx/src/mdbx_load.c"
               )
      return 
# 403 "/libmdbx/src/mdbx_load.c" 3 4
            (*__errno_location ()) 
# 403 "/libmdbx/src/mdbx_load.c"
                  ? 
# 403 "/libmdbx/src/mdbx_load.c" 3 4
                    (*__errno_location ()) 
# 403 "/libmdbx/src/mdbx_load.c"
                          : 
# 403 "/libmdbx/src/mdbx_load.c" 3 4
                            (-1)
# 403 "/libmdbx/src/mdbx_load.c"
                               ;
    if (c != ' ') {
      lineno++;
      
# 406 "/libmdbx/src/mdbx_load.c" 3 4
     (*__errno_location ()) 
# 406 "/libmdbx/src/mdbx_load.c"
           = 0;
      if (fgets(buf->iov_base, (int)buf->iov_len, 
# 407 "/libmdbx/src/mdbx_load.c" 3 4
                                                 stdin
# 407 "/libmdbx/src/mdbx_load.c"
                                                      )) {
        if (c == 'D' && !strncmp(buf->iov_base, "ATA=END", (sizeof("ATA=END") - 1)))
          return 
# 409 "/libmdbx/src/mdbx_load.c" 3 4
                (-1)
# 409 "/libmdbx/src/mdbx_load.c"
                   ;
      }
      return badend();
    }
  }
  if (fgets(buf->iov_base, (int)buf->iov_len, 
# 414 "/libmdbx/src/mdbx_load.c" 3 4
                                             stdin
# 414 "/libmdbx/src/mdbx_load.c"
                                                  ) == 
# 414 "/libmdbx/src/mdbx_load.c" 3 4
                                                       ((void *)0)
# 414 "/libmdbx/src/mdbx_load.c"
                                                              )
    return 
# 415 "/libmdbx/src/mdbx_load.c" 3 4
          (*__errno_location ()) 
# 415 "/libmdbx/src/mdbx_load.c"
                ? 
# 415 "/libmdbx/src/mdbx_load.c" 3 4
                  (*__errno_location ()) 
# 415 "/libmdbx/src/mdbx_load.c"
                        : 
# 415 "/libmdbx/src/mdbx_load.c" 3 4
                          (-1)
# 415 "/libmdbx/src/mdbx_load.c"
                             ;
  lineno++;

  c1 = buf->iov_base;
  len = strlen((char *)c1);
  l2 = len;


  while (c1[len - 1] != '\n') {
    buf->iov_base = realloc(buf->iov_base, buf->iov_len * 2);
    if (!buf->iov_base) {
      if (!quiet)
        fprintf(
# 427 "/libmdbx/src/mdbx_load.c" 3 4
               stderr
# 427 "/libmdbx/src/mdbx_load.c"
                     ,
                "%s: line %" 
# 428 "/libmdbx/src/mdbx_load.c" 3 4
                            "l" "i" 
# 428 "/libmdbx/src/mdbx_load.c"
                                     ": out of memory, line too long\n", prog,
                lineno);
      return MDBX_ENOMEM;
    }
    c1 = buf->iov_base;
    c1 += l2;
    
# 434 "/libmdbx/src/mdbx_load.c" 3 4
   (*__errno_location ()) 
# 434 "/libmdbx/src/mdbx_load.c"
         = 0;
    if (fgets((char *)c1, (int)buf->iov_len + 1, 
# 435 "/libmdbx/src/mdbx_load.c" 3 4
                                                stdin
# 435 "/libmdbx/src/mdbx_load.c"
                                                     ) == 
# 435 "/libmdbx/src/mdbx_load.c" 3 4
                                                          ((void *)0)
# 435 "/libmdbx/src/mdbx_load.c"
                                                                 )
      return 
# 436 "/libmdbx/src/mdbx_load.c" 3 4
            (*__errno_location ()) 
# 436 "/libmdbx/src/mdbx_load.c"
                  ? 
# 436 "/libmdbx/src/mdbx_load.c" 3 4
                    (*__errno_location ()) 
# 436 "/libmdbx/src/mdbx_load.c"
                          : 
# 436 "/libmdbx/src/mdbx_load.c" 3 4
                            (-1)
# 436 "/libmdbx/src/mdbx_load.c"
                               ;
    buf->iov_len *= 2;
    len = strlen((char *)c1);
    l2 += len;
  }
  c1 = c2 = buf->iov_base;
  len = l2;
  c1[--len] = '\0';
  end = c1 + len;

  if (mode & 1) {
    while (c2 < end) {
      if (__builtin_expect(!!(*c2 == '\\'), 0)) {
        if (c2[1] == '\\') {
          *c1++ = '\\';
        } else {
          if (c2 + 3 > end || !
# 452 "/libmdbx/src/mdbx_load.c" 3 4
                              ((*__ctype_b_loc ())[(int) ((
# 452 "/libmdbx/src/mdbx_load.c"
                              c2[1]
# 452 "/libmdbx/src/mdbx_load.c" 3 4
                              ))] & (unsigned short int) _ISxdigit) 
# 452 "/libmdbx/src/mdbx_load.c"
                                              || !
# 452 "/libmdbx/src/mdbx_load.c" 3 4
                                                  ((*__ctype_b_loc ())[(int) ((
# 452 "/libmdbx/src/mdbx_load.c"
                                                  c2[2]
# 452 "/libmdbx/src/mdbx_load.c" 3 4
                                                  ))] & (unsigned short int) _ISxdigit)
# 452 "/libmdbx/src/mdbx_load.c"
                                                                 )
            return badend();
          *c1++ = (char)unhex(++c2);
        }
        c2 += 2;
      } else {

        *c1++ = *c2++;
      }
    }
  } else {

    if (len & 1)
      return badend();
    while (c2 < end) {
      if (!
# 467 "/libmdbx/src/mdbx_load.c" 3 4
          ((*__ctype_b_loc ())[(int) ((
# 467 "/libmdbx/src/mdbx_load.c"
          *c2
# 467 "/libmdbx/src/mdbx_load.c" 3 4
          ))] & (unsigned short int) _ISxdigit) 
# 467 "/libmdbx/src/mdbx_load.c"
                        || !
# 467 "/libmdbx/src/mdbx_load.c" 3 4
                            ((*__ctype_b_loc ())[(int) ((
# 467 "/libmdbx/src/mdbx_load.c"
                            c2[1]
# 467 "/libmdbx/src/mdbx_load.c" 3 4
                            ))] & (unsigned short int) _ISxdigit)
# 467 "/libmdbx/src/mdbx_load.c"
                                           )
        return badend();
      *c1++ = (char)unhex(c2);
      c2 += 2;
    }
  }
  c2 = out->iov_base = buf->iov_base;
  out->iov_len = c1 - c2;

  return MDBX_SUCCESS;
}

static void usage(void) {
  fprintf(
# 480 "/libmdbx/src/mdbx_load.c" 3 4
         stderr
# 480 "/libmdbx/src/mdbx_load.c"
               ,
          "usage: %s "
          "[-V] [-q] [-a] [-f file] [-s name] [-N] [-p] [-T] [-r] [-n] dbpath\n"
          "  -V\t\tprint version and exit\n"
          "  -q\t\tbe quiet\n"
          "  -a\t\tappend records in input order (required for custom "
          "comparators)\n"
          "  -f file\tread from file instead of stdin\n"
          "  -s name\tload into specified named subDB\n"
          "  -N\t\tdon't overwrite existing records when loading, just skip "
          "ones\n"
          "  -p\t\tpurge subDB before loading\n"
          "  -T\t\tread plaintext\n"
          "  -r\t\trescue mode (ignore errors to load corrupted DB dump)\n"
          "  -n\t\tdon't use subdirectory for newly created database "
          "(MDBX_NOSUBDIR)\n",
          prog);
  exit(
# 497 "/libmdbx/src/mdbx_load.c" 3 4
      1
# 497 "/libmdbx/src/mdbx_load.c"
                  );
}

static int equal_or_greater(const MDBX_val *a, const MDBX_val *b) {
  return (a->iov_len == b->iov_len &&
          memcmp(a->iov_base, b->iov_base, a->iov_len) == 0)
             ? 0
             : 1;
}

int main(int argc, char *argv[]) {
  int i, rc;
  MDBX_env *env = 
# 509 "/libmdbx/src/mdbx_load.c" 3 4
                 ((void *)0)
# 509 "/libmdbx/src/mdbx_load.c"
                        ;
  MDBX_txn *txn = 
# 510 "/libmdbx/src/mdbx_load.c" 3 4
                 ((void *)0)
# 510 "/libmdbx/src/mdbx_load.c"
                        ;
  MDBX_cursor *mc = 
# 511 "/libmdbx/src/mdbx_load.c" 3 4
                   ((void *)0)
# 511 "/libmdbx/src/mdbx_load.c"
                          ;
  MDBX_dbi dbi;
  char *envname = 
# 513 "/libmdbx/src/mdbx_load.c" 3 4
                 ((void *)0)
# 513 "/libmdbx/src/mdbx_load.c"
                        ;
  int envflags = MDBX_SAFE_NOSYNC | MDBX_ACCEDE, putflags = MDBX_UPSERT;
  _Bool rescue = (0);
  _Bool purge = (0);

  prog = argv[0];
  if (argc < 2)
    usage();

  while ((i = getopt(argc, argv,
                     "a"
                     "f:"
                     "n"
                     "s:"
                     "N"
                     "p"
                     "T"
                     "V"
                     "r"
                     "q")) != 
# 532 "/libmdbx/src/mdbx_load.c" 3 4
                             (-1)
# 532 "/libmdbx/src/mdbx_load.c"
                                ) {
    switch (i) {
    case 'V':
      printf("mdbx_load version %d.%d.%d.%d\n"
             " - source: %s %s, commit %s, tree %s\n"
             " - anchor: %s\n"
             " - build: %s for %s by %s\n"
             " - flags: %s\n"
             " - options: %s\n",
             mdbx_version.major, mdbx_version.minor, mdbx_version.release,
             mdbx_version.revision, mdbx_version.git.describe,
             mdbx_version.git.datetime, mdbx_version.git.commit,
             mdbx_version.git.tree, mdbx_sourcery_d8797a55c55b5b0b920ac6e230d5563977eb23c86542d570a245d0841b6beb2c_v0_11_6_39_gbb8f4318_dirty, mdbx_build.datetime,
             mdbx_build.target, mdbx_build.compiler, mdbx_build.flags,
             mdbx_build.options);
      return 
# 547 "/libmdbx/src/mdbx_load.c" 3 4
            0
# 547 "/libmdbx/src/mdbx_load.c"
                        ;
    case 'a':
      putflags |= MDBX_APPEND;
      break;
    case 'f':
      if (freopen(optarg, "r", 
# 552 "/libmdbx/src/mdbx_load.c" 3 4
                              stdin
# 552 "/libmdbx/src/mdbx_load.c"
                                   ) == 
# 552 "/libmdbx/src/mdbx_load.c" 3 4
                                        ((void *)0)
# 552 "/libmdbx/src/mdbx_load.c"
                                               ) {
        if (!quiet)
          fprintf(
# 554 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 554 "/libmdbx/src/mdbx_load.c"
                       , "%s: %s: open: %s\n", prog, optarg,
                  mdbx_strerror(
# 555 "/libmdbx/src/mdbx_load.c" 3 4
                               (*__errno_location ())
# 555 "/libmdbx/src/mdbx_load.c"
                                    ));
        exit(
# 556 "/libmdbx/src/mdbx_load.c" 3 4
            1
# 556 "/libmdbx/src/mdbx_load.c"
                        );
      }
      break;
    case 'n':
      envflags |= MDBX_NOSUBDIR;
      break;
    case 's':
      subname = strdup(optarg);
      break;
    case 'N':
      putflags |= MDBX_NOOVERWRITE | MDBX_NODUPDATA;
      break;
    case 'p':
      purge = (1);
      break;
    case 'T':
      mode |= 2 | 1;
      break;
    case 'q':
      quiet = (1);
      break;
    case 'r':
      rescue = (1);
      break;
    default:
      usage();
    }
  }

  if (optind != argc - 1)
    usage();





  signal(
# 592 "/libmdbx/src/mdbx_load.c" 3 4
        13
# 592 "/libmdbx/src/mdbx_load.c"
               , signal_handler);


  signal(
# 595 "/libmdbx/src/mdbx_load.c" 3 4
        1
# 595 "/libmdbx/src/mdbx_load.c"
              , signal_handler);

  signal(
# 597 "/libmdbx/src/mdbx_load.c" 3 4
        2
# 597 "/libmdbx/src/mdbx_load.c"
              , signal_handler);
  signal(
# 598 "/libmdbx/src/mdbx_load.c" 3 4
        15
# 598 "/libmdbx/src/mdbx_load.c"
               , signal_handler);


  envname = argv[optind];
  if (!quiet)
    printf("mdbx_load %s (%s, T-%s)\nRunning for %s...\n",
           mdbx_version.git.describe, mdbx_version.git.datetime,
           mdbx_version.git.tree, envname);
  fflush(
# 606 "/libmdbx/src/mdbx_load.c" 3 4
        ((void *)0)
# 606 "/libmdbx/src/mdbx_load.c"
               );

  dbuf.iov_len = 4096;
  dbuf.iov_base = malloc(dbuf.iov_len);
  if (!dbuf.iov_base) {
    rc = MDBX_ENOMEM;
    error("value-buffer", rc);
    goto env_close;
  }


  if (!(mode & 2)) {
    rc = readhdr();
    if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
      if (rc == 
# 620 "/libmdbx/src/mdbx_load.c" 3 4
               (-1)
# 620 "/libmdbx/src/mdbx_load.c"
                  )
        rc = MDBX_ENODATA;
      error("readheader", rc);
      goto env_close;
    }
  }

  rc = mdbx_env_create(&env);
  if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
    error("mdbx_env_create", rc);
    return 
# 630 "/libmdbx/src/mdbx_load.c" 3 4
          1
# 630 "/libmdbx/src/mdbx_load.c"
                      ;
  }

  mdbx_env_set_maxdbs(env, 2);
  if (envinfo.mi_maxreaders) {
    rc = mdbx_env_set_maxreaders(env, envinfo.mi_maxreaders);
    if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
      error("mdbx_env_set_maxreaders", rc);
      goto env_close;
    }
  }

  if (envinfo.mi_geo.current | envinfo.mi_mapsize) {
    if (envinfo.mi_geo.current) {
      rc = mdbx_env_set_geometry(
          env, (intptr_t)envinfo.mi_geo.lower, (intptr_t)envinfo.mi_geo.current,
          (intptr_t)envinfo.mi_geo.upper, (intptr_t)envinfo.mi_geo.shrink,
          (intptr_t)envinfo.mi_geo.grow,
          envinfo.mi_dxb_pagesize ? (intptr_t)envinfo.mi_dxb_pagesize : -1);
    } else {
      if (envinfo.mi_mapsize > ((0x7FFFffffU + 1) * (uint64_t)MDBX_MAX_PAGESIZE)) {
        if (!quiet)
          fprintf(
              
# 653 "/libmdbx/src/mdbx_load.c" 3 4
             stderr
# 653 "/libmdbx/src/mdbx_load.c"
                   ,
              "Database size is too large for current system (mapsize=%" 
# 654 "/libmdbx/src/mdbx_load.c" 3 4
                                                                        "l" "u"
              
# 655 "/libmdbx/src/mdbx_load.c"
             " is great than system-limit %zu)\n",
              envinfo.mi_mapsize, (size_t)((0x7FFFffffU + 1) * (uint64_t)MDBX_MAX_PAGESIZE));
        goto env_close;
      }
      rc = mdbx_env_set_geometry(
          env, (intptr_t)envinfo.mi_mapsize, (intptr_t)envinfo.mi_mapsize,
          (intptr_t)envinfo.mi_mapsize, 0, 0,
          envinfo.mi_dxb_pagesize ? (intptr_t)envinfo.mi_dxb_pagesize : -1);
    }
    if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
      error("mdbx_env_set_geometry", rc);
      goto env_close;
    }
  }

  rc = mdbx_env_open(env, envname, envflags, 0664);
  if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
    error("mdbx_env_open", rc);
    goto env_close;
  }

  kbuf.iov_len = mdbx_env_get_maxvalsize_ex(env, 0) + 1;
  if (kbuf.iov_len >= 
# 677 "/libmdbx/src/mdbx_load.c" 3 4
                     (9223372036854775807L) 
# 677 "/libmdbx/src/mdbx_load.c"
                                / 2) {
    if (!quiet)
      fprintf(
# 679 "/libmdbx/src/mdbx_load.c" 3 4
             stderr
# 679 "/libmdbx/src/mdbx_load.c"
                   , "mdbx_env_get_maxkeysize() failed, returns %zu\n",
              kbuf.iov_len);
    goto env_close;
  }

  kbuf.iov_base = malloc(kbuf.iov_len);
  if (!kbuf.iov_base) {
    rc = MDBX_ENOMEM;
    error("key-buffer", rc);
    goto env_close;
  }

  while (rc == MDBX_SUCCESS) {
    if (user_break) {
      rc = MDBX_EINTR;
      break;
    }

    rc = mdbx_txn_begin(env, 
# 697 "/libmdbx/src/mdbx_load.c" 3 4
                            ((void *)0)
# 697 "/libmdbx/src/mdbx_load.c"
                                   , 0, &txn);
    if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
      error("mdbx_txn_begin", rc);
      goto env_close;
    }

    if (mode & 4) {
      mode -= 4;
      if (canary.v | canary.x | canary.y | canary.z) {
        rc = mdbx_canary_put(txn, &canary);
        if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
          error("mdbx_canary_put", rc);
          goto txn_abort;
        }
      }
    }

    const char *const dbi_name = subname ? subname : "@MAIN";
    rc =
        mdbx_dbi_open_ex(txn, subname, dbi_flags | MDBX_CREATE, &dbi,
                         (putflags & MDBX_APPEND) ? equal_or_greater : 
# 717 "/libmdbx/src/mdbx_load.c" 3 4
                                                                      ((void *)0)
# 717 "/libmdbx/src/mdbx_load.c"
                                                                             ,
                         (putflags & MDBX_APPEND) ? equal_or_greater : 
# 718 "/libmdbx/src/mdbx_load.c" 3 4
                                                                      ((void *)0)
# 718 "/libmdbx/src/mdbx_load.c"
                                                                             );
    if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
      error("mdbx_dbi_open_ex", rc);
      goto txn_abort;
    }

    uint64_t present_sequence;
    rc = mdbx_dbi_sequence(txn, dbi, &present_sequence, 0);
    if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
      error("mdbx_dbi_sequence", rc);
      goto txn_abort;
    }
    if (present_sequence > sequence) {
      if (!quiet)
        fprintf(
# 732 "/libmdbx/src/mdbx_load.c" 3 4
               stderr
# 732 "/libmdbx/src/mdbx_load.c"
                     ,
                "present sequence for '%s' value (%" 
# 733 "/libmdbx/src/mdbx_load.c" 3 4
                                                    "l" "u"
                
# 734 "/libmdbx/src/mdbx_load.c"
               ") is greater than loaded (%" 
# 734 "/libmdbx/src/mdbx_load.c" 3 4
                                             "l" "u" 
# 734 "/libmdbx/src/mdbx_load.c"
                                                    ")\n",
                dbi_name, present_sequence, sequence);
      rc = MDBX_RESULT_TRUE;
      goto txn_abort;
    }
    if (present_sequence < sequence) {
      rc = mdbx_dbi_sequence(txn, dbi, 
# 740 "/libmdbx/src/mdbx_load.c" 3 4
                                      ((void *)0)
# 740 "/libmdbx/src/mdbx_load.c"
                                             , sequence - present_sequence);
      if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
        error("mdbx_dbi_sequence", rc);
        goto txn_abort;
      }
    }

    if (purge) {
      rc = mdbx_drop(txn, dbi, (0));
      if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
        error("mdbx_drop", rc);
        goto txn_abort;
      }
    }

    if (putflags & MDBX_APPEND)
      putflags = (dbi_flags & MDBX_DUPSORT) ? putflags | MDBX_APPENDDUP
                                            : putflags & ~MDBX_APPENDDUP;

    rc = mdbx_cursor_open(txn, dbi, &mc);
    if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
      error("mdbx_cursor_open", rc);
      goto txn_abort;
    }

    int batch = 0;
    while (rc == MDBX_SUCCESS) {
      MDBX_val key, data;
      rc = readline(&key, &kbuf);
      if (rc == 
# 769 "/libmdbx/src/mdbx_load.c" 3 4
               (-1)
# 769 "/libmdbx/src/mdbx_load.c"
                  )
        break;

      if (rc == MDBX_SUCCESS)
        rc = readline(&data, &dbuf);
      if (rc) {
        if (!quiet)
          fprintf(
# 776 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 776 "/libmdbx/src/mdbx_load.c"
                       , "%s: line %" 
# 776 "/libmdbx/src/mdbx_load.c" 3 4
                                      "l" "i" 
# 776 "/libmdbx/src/mdbx_load.c"
                                               ": failed to read key value\n",
                  prog, lineno);
        goto txn_abort;
      }

      rc = mdbx_cursor_put(mc, &key, &data, putflags);
      if (rc == MDBX_KEYEXIST && putflags)
        continue;
      if (rc == MDBX_BAD_VALSIZE && rescue) {
        if (!quiet)
          fprintf(
# 786 "/libmdbx/src/mdbx_load.c" 3 4
                 stderr
# 786 "/libmdbx/src/mdbx_load.c"
                       , "%s: skip line %" 
# 786 "/libmdbx/src/mdbx_load.c" 3 4
                                           "l" "i" 
# 786 "/libmdbx/src/mdbx_load.c"
                                                    ": due %s\n", prog, lineno,
                  mdbx_strerror(rc));
        continue;
      }
      if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
        error("mdbx_cursor_put", rc);
        goto txn_abort;
      }
      batch++;

      MDBX_txn_info txn_info;
      rc = mdbx_txn_info(txn, &txn_info, (0));
      if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
        error("mdbx_txn_info", rc);
        goto txn_abort;
      }

      if (batch == 10000 || txn_info.txn_space_dirty > ((size_t)1 << 20) * 256) {
        rc = mdbx_txn_commit(txn);
        if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
          error("mdbx_txn_commit", rc);
          goto env_close;
        }
        batch = 0;

        rc = mdbx_txn_begin(env, 
# 811 "/libmdbx/src/mdbx_load.c" 3 4
                                ((void *)0)
# 811 "/libmdbx/src/mdbx_load.c"
                                       , 0, &txn);
        if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
          error("mdbx_txn_begin", rc);
          goto env_close;
        }
        rc = mdbx_cursor_bind(txn, mc, dbi);
        if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
          error("mdbx_cursor_bind", rc);
          goto txn_abort;
        }
      }
    }

    mdbx_cursor_close(mc);
    mc = 
# 825 "/libmdbx/src/mdbx_load.c" 3 4
        ((void *)0)
# 825 "/libmdbx/src/mdbx_load.c"
               ;
    rc = mdbx_txn_commit(txn);
    txn = 
# 827 "/libmdbx/src/mdbx_load.c" 3 4
         ((void *)0)
# 827 "/libmdbx/src/mdbx_load.c"
                ;
    if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
      error("mdbx_txn_commit", rc);
      goto env_close;
    }
    if (subname) {
      
# 833 "/libmdbx/src/mdbx_load.c" 3 4
     ((void) (0))
# 833 "/libmdbx/src/mdbx_load.c"
                            ;
      rc = mdbx_dbi_close(env, dbi);
      if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0)) {
        error("mdbx_dbi_close", rc);
        goto env_close;
      }
    } else {
      
# 840 "/libmdbx/src/mdbx_load.c" 3 4
     ((void) (0))
# 840 "/libmdbx/src/mdbx_load.c"
                            ;
    }


    if (!(mode & 2))
      rc = readhdr();
    else if (ferror(
# 846 "/libmdbx/src/mdbx_load.c" 3 4
                   stdin
# 846 "/libmdbx/src/mdbx_load.c"
                        ) || feof(
# 846 "/libmdbx/src/mdbx_load.c" 3 4
                                  stdin
# 846 "/libmdbx/src/mdbx_load.c"
                                       ))
      break;
  }

  switch (rc) {
  case 
# 851 "/libmdbx/src/mdbx_load.c" 3 4
      (-1)
# 851 "/libmdbx/src/mdbx_load.c"
         :
    rc = MDBX_SUCCESS;
  case MDBX_SUCCESS:
    break;
  case MDBX_EINTR:
    if (!quiet)
      fprintf(
# 857 "/libmdbx/src/mdbx_load.c" 3 4
             stderr
# 857 "/libmdbx/src/mdbx_load.c"
                   , "Interrupted by signal/user\n");
    break;
  default:
    if (__builtin_expect(!!(rc != MDBX_SUCCESS), 0))
      error("readline", rc);
  }

txn_abort:
  mdbx_cursor_close(mc);
  mdbx_txn_abort(txn);
env_close:
  mdbx_env_close(env);
  free(kbuf.iov_base);
  free(dbuf.iov_base);

  return rc ? 
# 872 "/libmdbx/src/mdbx_load.c" 3 4
             1 
# 872 "/libmdbx/src/mdbx_load.c"
                          : 
# 872 "/libmdbx/src/mdbx_load.c" 3 4
                            0
# 872 "/libmdbx/src/mdbx_load.c"
                                        ;
}
