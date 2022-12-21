# 0 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c"
# 1 "/citus//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c"
# 12 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c"
# 1 "/usr/include/postgresql/14/server/postgres.h" 1
# 46 "/usr/include/postgresql/14/server/postgres.h"
# 1 "/usr/include/postgresql/14/server/c.h" 1
# 49 "/usr/include/postgresql/14/server/c.h"
# 1 "/usr/include/postgresql/14/server/postgres_ext.h" 1
# 26 "/usr/include/postgresql/14/server/postgres_ext.h"
# 1 "/usr/include/postgresql/14/server/pg_config_ext.h" 1
# 27 "/usr/include/postgresql/14/server/postgres_ext.h" 2




typedef unsigned int Oid;
# 47 "/usr/include/postgresql/14/server/postgres_ext.h"
typedef long int pg_int64;
# 50 "/usr/include/postgresql/14/server/c.h" 2




# 1 "/usr/include/postgresql/14/server/pg_config.h" 1
# 55 "/usr/include/postgresql/14/server/c.h" 2
# 1 "/usr/include/postgresql/14/server/pg_config_manual.h" 1
# 56 "/usr/include/postgresql/14/server/c.h" 2
# 1 "/usr/include/postgresql/14/server/pg_config_os.h" 1
# 57 "/usr/include/postgresql/14/server/c.h" 2


# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
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
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4

# 209 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4

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
# 39 "/usr/include/stdio.h" 2 3 4
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





typedef __gnuc_va_list va_list;
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;






typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;




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
# 188 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
# 200 "/usr/include/stdio.h" 3 4
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
# 258 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 283 "/usr/include/stdio.h" 3 4
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
# 431 "/usr/include/stdio.h" 2 3 4



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
# 736 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 760 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 779 "/usr/include/stdio.h" 3 4
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








# 60 "/usr/include/postgresql/14/server/c.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 321 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/waitstatus.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 59 "/usr/include/stdlib.h" 3 4
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
# 273 "/usr/include/stdlib.h" 3 4
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
# 274 "/usr/include/stdlib.h" 2 3 4

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




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/aarch64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 130 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





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
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/aarch64-linux-gnu/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
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

# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 11 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4
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






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 219 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





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
# 695 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 705 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 717 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 727 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 738 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 749 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 759 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 769 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 781 "/usr/include/stdlib.h" 3 4
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








# 61 "/usr/include/postgresql/14/server/c.h" 2
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




# 62 "/usr/include/postgresql/14/server/c.h" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 63 "/usr/include/postgresql/14/server/c.h" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 1 3 4
# 64 "/usr/include/postgresql/14/server/c.h" 2



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
# 68 "/usr/include/postgresql/14/server/c.h" 2

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




# 70 "/usr/include/postgresql/14/server/c.h" 2



# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4


# 51 "/usr/include/locale.h" 3 4
struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 118 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));
# 141 "/usr/include/locale.h" 3 4
extern locale_t newlocale (int __category_mask, const char *__locale,
      locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
# 176 "/usr/include/locale.h" 3 4
extern locale_t duplocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern locale_t uselocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));








# 74 "/usr/include/postgresql/14/server/c.h" 2

# 1 "/usr/include/libintl.h" 1 3 4
# 34 "/usr/include/libintl.h" 3 4





extern char *gettext (const char *__msgid)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format_arg__ (1)));



extern char *dgettext (const char *__domainname, const char *__msgid)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format_arg__ (2)));
extern char *__dgettext (const char *__domainname, const char *__msgid)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format_arg__ (2)));



extern char *dcgettext (const char *__domainname,
   const char *__msgid, int __category)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format_arg__ (2)));
extern char *__dcgettext (const char *__domainname,
     const char *__msgid, int __category)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format_arg__ (2)));




extern char *ngettext (const char *__msgid1, const char *__msgid2,
         unsigned long int __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));



extern char *dngettext (const char *__domainname, const char *__msgid1,
   const char *__msgid2, unsigned long int __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));



extern char *dcngettext (const char *__domainname, const char *__msgid1,
    const char *__msgid2, unsigned long int __n,
    int __category)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));





extern char *textdomain (const char *__domainname) __attribute__ ((__nothrow__ , __leaf__));



extern char *bindtextdomain (const char *__domainname,
        const char *__dirname) __attribute__ ((__nothrow__ , __leaf__));



extern char *bind_textdomain_codeset (const char *__domainname,
          const char *__codeset) __attribute__ ((__nothrow__ , __leaf__));







# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 101 "/usr/include/libintl.h" 2 3 4
# 121 "/usr/include/libintl.h" 3 4

# 76 "/usr/include/postgresql/14/server/c.h" 2
# 340 "/usr/include/postgresql/14/server/c.h"

# 340 "/usr/include/postgresql/14/server/c.h"
typedef void (*pg_funcptr_t) (void);
# 387 "/usr/include/postgresql/14/server/c.h"
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdbool.h" 1 3 4
# 388 "/usr/include/postgresql/14/server/c.h" 2
# 418 "/usr/include/postgresql/14/server/c.h"
typedef char *Pointer;
# 427 "/usr/include/postgresql/14/server/c.h"
typedef signed char int8;
typedef signed short int16;
typedef signed int int32;
# 439 "/usr/include/postgresql/14/server/c.h"
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;






typedef uint8 bits8;
typedef uint16 bits16;
typedef uint32 bits32;
# 459 "/usr/include/postgresql/14/server/c.h"
typedef long int int64;


typedef unsigned long int uint64;
# 498 "/usr/include/postgresql/14/server/c.h"
typedef __int128 int128

   __attribute__((aligned(8)))

     ;

typedef unsigned __int128 uint128

   __attribute__((aligned(8)))

     ;
# 540 "/usr/include/postgresql/14/server/c.h"
typedef size_t Size;
# 549 "/usr/include/postgresql/14/server/c.h"
typedef unsigned int Index;
# 559 "/usr/include/postgresql/14/server/c.h"
typedef signed int Offset;




typedef float float4;
typedef double float8;
# 584 "/usr/include/postgresql/14/server/c.h"
typedef Oid regproc;
typedef regproc RegProcedure;

typedef uint32 TransactionId;

typedef uint32 LocalTransactionId;

typedef uint32 SubTransactionId;





typedef TransactionId MultiXactId;

typedef uint32 MultiXactOffset;

typedef uint32 CommandId;
# 621 "/usr/include/postgresql/14/server/c.h"
struct varlena
{
 char vl_len_[4];
 char vl_dat[];
};
# 634 "/usr/include/postgresql/14/server/c.h"
typedef struct varlena bytea;
typedef struct varlena text;
typedef struct varlena BpChar;
typedef struct varlena VarChar;
# 649 "/usr/include/postgresql/14/server/c.h"
typedef struct
{
 int32 vl_len_;
 int ndim;
 int32 dataoffset;
 Oid elemtype;
 int dim1;
 int lbound1;
 int16 values[];
} int2vector;

typedef struct
{
 int32 vl_len_;
 int ndim;
 int32 dataoffset;
 Oid elemtype;
 int dim1;
 int lbound1;
 Oid values[];
} oidvector;





typedef struct nameData
{
 char data[64];
} NameData;
typedef NameData *Name;
# 888 "/usr/include/postgresql/14/server/c.h"
extern void ExceptionalCondition(const char *conditionName,
         const char *errorType,
         const char *fileName, int lineNumber) __attribute__((noreturn));
# 1139 "/usr/include/postgresql/14/server/c.h"
typedef union PGAlignedBlock
{
 char data[8192];
 double force_align_d;
 int64 force_align_i64;
} PGAlignedBlock;


typedef union PGAlignedXLogBlock
{
 char data[8192];
 double force_align_d;
 int64 force_align_i64;
} PGAlignedXLogBlock;
# 1362 "/usr/include/postgresql/14/server/c.h"
# 1 "/usr/include/postgresql/14/server/port.h" 1
# 16 "/usr/include/postgresql/14/server/port.h"
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

# 17 "/usr/include/postgresql/14/server/port.h" 2
# 1 "/usr/include/netdb.h" 1 3 4
# 27 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/netinet/in.h" 1 3 4
# 23 "/usr/include/netinet/in.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/sys/socket.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_iovec.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/types/struct_iovec.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/types/struct_iovec.h" 2 3 4


struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 27 "/usr/include/aarch64-linux-gnu/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 29 "/usr/include/aarch64-linux-gnu/sys/socket.h" 2 3 4




# 1 "/usr/include/aarch64-linux-gnu/bits/socket.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/socket.h" 2 3 4





typedef __socklen_t socklen_t;




# 1 "/usr/include/aarch64-linux-gnu/bits/socket_type.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/socket_type.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
# 39 "/usr/include/aarch64-linux-gnu/bits/socket.h" 2 3 4
# 177 "/usr/include/aarch64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/sockaddr.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 178 "/usr/include/aarch64-linux-gnu/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 193 "/usr/include/aarch64-linux-gnu/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,



    MSG_TRYHARD = MSG_DONTROUTE,


    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_BATCH = 0x40000,

    MSG_ZEROCOPY = 0x4000000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
# 307 "/usr/include/aarch64-linux-gnu/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__ , __leaf__));




extern __inline __attribute__ ((__gnu_inline__)) struct cmsghdr *
__attribute__ ((__nothrow__ , __leaf__)) __cmsg_nxthdr (struct msghdr *__mhdr, struct cmsghdr *__cmsg)
{
  if ((size_t) __cmsg->cmsg_len < sizeof (struct cmsghdr))

    return (struct cmsghdr *) 0;

  __cmsg = (struct cmsghdr *) ((unsigned char *) __cmsg
          + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)));
  if ((unsigned char *) (__cmsg + 1) > ((unsigned char *) __mhdr->msg_control
     + __mhdr->msg_controllen)
      || ((unsigned char *) __cmsg + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
   > ((unsigned char *) __mhdr->msg_control + __mhdr->msg_controllen)))

    return (struct cmsghdr *) 0;
  return __cmsg;
}




enum
  {
    SCM_RIGHTS = 0x01


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};




# 1 "/usr/include/aarch64-linux-gnu/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4




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




# 1 "/usr/include/aarch64-linux-gnu/asm/bitsperlong.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/asm/bitsperlong.h" 2 3 4
# 6 "/usr/include/asm-generic/posix_types.h" 2 3 4
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
# 6 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 2 "/usr/include/aarch64-linux-gnu/asm/sockios.h" 2 3 4
# 7 "/usr/include/asm-generic/socket.h" 2 3 4
# 2 "/usr/include/aarch64-linux-gnu/asm/socket.h" 2 3 4
# 357 "/usr/include/aarch64-linux-gnu/bits/socket.h" 2 3 4






struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 34 "/usr/include/aarch64-linux-gnu/sys/socket.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_osockaddr.h" 1 3 4





struct osockaddr
{
  unsigned short int sa_family;
  unsigned char sa_data[14];
};
# 37 "/usr/include/aarch64-linux-gnu/sys/socket.h" 2 3 4




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
# 79 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
typedef union { struct sockaddr *__restrict __sockaddr__; struct sockaddr_at *__restrict __sockaddr_at__; struct sockaddr_ax25 *__restrict __sockaddr_ax25__; struct sockaddr_dl *__restrict __sockaddr_dl__; struct sockaddr_eon *__restrict __sockaddr_eon__; struct sockaddr_in *__restrict __sockaddr_in__; struct sockaddr_in6 *__restrict __sockaddr_in6__; struct sockaddr_inarp *__restrict __sockaddr_inarp__; struct sockaddr_ipx *__restrict __sockaddr_ipx__; struct sockaddr_iso *__restrict __sockaddr_iso__; struct sockaddr_ns *__restrict __sockaddr_ns__; struct sockaddr_un *__restrict __sockaddr_un__; struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __SOCKADDR_ARG __attribute__ ((__transparent_union__));


typedef union { const struct sockaddr *__restrict __sockaddr__; const struct sockaddr_at *__restrict __sockaddr_at__; const struct sockaddr_ax25 *__restrict __sockaddr_ax25__; const struct sockaddr_dl *__restrict __sockaddr_dl__; const struct sockaddr_eon *__restrict __sockaddr_eon__; const struct sockaddr_in *__restrict __sockaddr_in__; const struct sockaddr_in6 *__restrict __sockaddr_in6__; const struct sockaddr_inarp *__restrict __sockaddr_inarp__; const struct sockaddr_ipx *__restrict __sockaddr_ipx__; const struct sockaddr_iso *__restrict __sockaddr_iso__; const struct sockaddr_ns *__restrict __sockaddr_ns__; const struct sockaddr_un *__restrict __sockaddr_un__; const struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __CONST_SOCKADDR_ARG __attribute__ ((__transparent_union__));





struct mmsghdr
  {
    struct msghdr msg_hdr;
    unsigned int msg_len;

  };






extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ , __leaf__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ , __leaf__));


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     __attribute__ ((__nothrow__ , __leaf__));


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));
# 126 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);
# 163 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, __SOCKADDR_ARG __addr,
    socklen_t *__restrict __addr_len);
# 174 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);
# 195 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern int sendmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags);
# 216 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
# 235 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags,
       struct timespec *__tmo);
# 255 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ , __leaf__));
# 277 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ , __leaf__));
# 296 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ , __leaf__));
# 306 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern int accept (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__restrict __addr_len);






extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
      socklen_t *__restrict __addr_len, int __flags);
# 324 "/usr/include/aarch64-linux-gnu/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ , __leaf__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ , __leaf__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ , __leaf__));





# 1 "/usr/include/aarch64-linux-gnu/bits/socket2.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/socket2.h" 3 4
extern ssize_t __recv_chk (int __fd, void *__buf, size_t __n, size_t __buflen,
      int __flags);
extern ssize_t __recv_alias (int __fd, void *__buf, size_t __n, int __flags) __asm__ ("" "recv")
                          ;
extern ssize_t __recv_chk_warn (int __fd, void *__buf, size_t __n, size_t __buflen, int __flags) __asm__ ("" "__recv_chk")


     __attribute__((__warning__ ("recv called with bigger length than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) ssize_t
recv (int __fd, void *__buf, size_t __n, int __flags)
{
  size_t sz = __builtin_object_size (__buf, 0);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && (((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __recv_alias (__fd, __buf, __n, __flags);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && !(((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __recv_chk_warn (__fd, __buf, __n, sz, __flags);
  return __recv_chk (__fd, __buf, __n, sz, __flags);
}

extern ssize_t __recvfrom_chk (int __fd, void *__restrict __buf, size_t __n,
          size_t __buflen, int __flags,
          __SOCKADDR_ARG __addr,
          socklen_t *__restrict __addr_len);
extern ssize_t __recvfrom_alias (int __fd, void *__restrict __buf, size_t __n, int __flags, __SOCKADDR_ARG __addr, socklen_t *__restrict __addr_len) __asm__ ("" "recvfrom")


                                                   ;
extern ssize_t __recvfrom_chk_warn (int __fd, void *__restrict __buf, size_t __n, size_t __buflen, int __flags, __SOCKADDR_ARG __addr, socklen_t *__restrict __addr_len) __asm__ ("" "__recvfrom_chk")




     __attribute__((__warning__ ("recvfrom called with bigger length than size of " "destination buffer")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) ssize_t
recvfrom (int __fd, void *__restrict __buf, size_t __n, int __flags,
   __SOCKADDR_ARG __addr, socklen_t *__restrict __addr_len)
{
  size_t sz = __builtin_object_size (__buf, 0);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && (((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __recvfrom_alias (__fd, __buf, __n, __flags, __addr, __addr_len);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && !(((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __recvfrom_chk_warn (__fd, __buf, __n, sz, __flags, __addr,
    __addr_len);
  return __recvfrom_chk (__fd, __buf, __n, sz, __flags, __addr, __addr_len);
}
# 344 "/usr/include/aarch64-linux-gnu/sys/socket.h" 2 3 4



# 24 "/usr/include/netinet/in.h" 2 3 4






typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


# 1 "/usr/include/aarch64-linux-gnu/bits/in.h" 1 3 4
# 143 "/usr/include/aarch64-linux-gnu/bits/in.h" 3 4
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
# 38 "/usr/include/netinet/in.h" 2 3 4


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_MPLS = 137,

    IPPROTO_ETHERNET = 143,

    IPPROTO_RAW = 255,

    IPPROTO_MPTCP = 262,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
# 219 "/usr/include/netinet/in.h" 3 4
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];
 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];
      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
# 245 "/usr/include/netinet/in.h" 3 4
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr)
      - (sizeof (unsigned short int))
      - sizeof (in_port_t)
      - sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
# 382 "/usr/include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




# 1 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 1 3 4
# 394 "/usr/include/netinet/in.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 395 "/usr/include/netinet/in.h" 2 3 4
# 510 "/usr/include/netinet/in.h" 3 4
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) __attribute__ ((__nothrow__ , __leaf__));


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     __attribute__ ((__nothrow__ , __leaf__));
# 540 "/usr/include/netinet/in.h" 3 4
struct cmsghdr;



struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };


struct ip6_mtuinfo
  {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
  };



extern int inet6_option_space (int __nbytes)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_init (void *__bp, struct cmsghdr **__cmsgp,
         int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_append (struct cmsghdr *__cmsg,
    const uint8_t *__typep, int __multx,
    int __plusy) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern uint8_t *inet6_option_alloc (struct cmsghdr *__cmsg, int __datalen,
        int __multx, int __plusy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_next (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_find (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int inet6_opt_init (void *__extbuf, socklen_t __extlen) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_append (void *__extbuf, socklen_t __extlen, int __offset,
        uint8_t __type, socklen_t __len, uint8_t __align,
        void **__databufp) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_finish (void *__extbuf, socklen_t __extlen, int __offset)
     __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_set_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_next (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t *__typep, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_find (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t __type, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_get_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ , __leaf__));



extern socklen_t inet6_rth_space (int __type, int __segments) __attribute__ ((__nothrow__ , __leaf__));
extern void *inet6_rth_init (void *__bp, socklen_t __bp_len, int __type,
        int __segments) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_rth_add (void *__bp, const struct in6_addr *__addr) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_rth_reverse (const void *__in, void *__out) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_rth_segments (const void *__bp) __attribute__ ((__nothrow__ , __leaf__));
extern struct in6_addr *inet6_rth_getaddr (const void *__bp, int __index)
     __attribute__ ((__nothrow__ , __leaf__));





extern int getipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t *__fmode,
    uint32_t *__numsrc, struct in_addr *__slist)
     __attribute__ ((__nothrow__ , __leaf__));


extern int setipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t __fmode,
    uint32_t __numsrc,
    const struct in_addr *__slist)
     __attribute__ ((__nothrow__ , __leaf__));



extern int getsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t *__fmode,
       uint32_t *__numsrc,
       struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ , __leaf__));


extern int setsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t __fmode,
       uint32_t __numsrc,
       const struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ , __leaf__));



# 28 "/usr/include/netdb.h" 2 3 4




# 1 "/usr/include/rpc/netdb.h" 1 3 4
# 42 "/usr/include/rpc/netdb.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 43 "/usr/include/rpc/netdb.h" 2 3 4



struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) __attribute__ ((__nothrow__ , __leaf__));
extern void endrpcent (void) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbyname (const char *__name) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbynumber (int __number) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcent (void) __attribute__ ((__nothrow__ , __leaf__));


extern int getrpcbyname_r (const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));



# 33 "/usr/include/netdb.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/types/sigevent_t.h" 1 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/sigevent_t.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/types/__sigval_t.h" 3 4
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 7 "/usr/include/aarch64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
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
# 37 "/usr/include/netdb.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/netdb.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/netdb.h" 3 4
struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
# 41 "/usr/include/netdb.h" 2 3 4
# 51 "/usr/include/netdb.h" 3 4








extern int *__h_errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 90 "/usr/include/netdb.h" 3 4
extern void herror (const char *__str) __attribute__ ((__nothrow__ , __leaf__));


extern const char *hstrerror (int __err_num) __attribute__ ((__nothrow__ , __leaf__));




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;



};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (const void *__addr, __socklen_t __len,
          int __type);





extern struct hostent *gethostbyname (const char *__name);
# 153 "/usr/include/netdb.h" 3 4
extern struct hostent *gethostbyname2 (const char *__name, int __af);
# 165 "/usr/include/netdb.h" 3 4
extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop);

extern int gethostbyaddr_r (const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname_r (const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname2_r (const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop);
# 196 "/usr/include/netdb.h" 3 4
extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (const char *__name);
# 235 "/usr/include/netdb.h" 3 4
extern int getnetent_r (struct netent *__restrict __result_buf,
   char *__restrict __buf, size_t __buflen,
   struct netent **__restrict __result,
   int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);

extern int getnetbyname_r (const char *__restrict __name,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (const char *__name, const char *__proto);






extern struct servent *getservbyport (int __port, const char *__proto);
# 306 "/usr/include/netdb.h" 3 4
extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result);

extern int getservbyname_r (const char *__restrict __name,
       const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);

extern int getservbyport_r (int __port, const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (const char *__name);





extern struct protoent *getprotobynumber (int __proto);
# 372 "/usr/include/netdb.h" 3 4
extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result);

extern int getprotobyname_r (const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result);
# 393 "/usr/include/netdb.h" 3 4
extern int setnetgrent (const char *__netgroup);







extern void endnetgrent (void);
# 410 "/usr/include/netdb.h" 3 4
extern int getnetgrent (char **__restrict __hostp,
   char **__restrict __userp,
   char **__restrict __domainp);
# 421 "/usr/include/netdb.h" 3 4
extern int innetgr (const char *__netgroup, const char *__host,
      const char *__user, const char *__domain);







extern int getnetgrent_r (char **__restrict __hostp,
     char **__restrict __userp,
     char **__restrict __domainp,
     char *__restrict __buffer, size_t __buflen);
# 449 "/usr/include/netdb.h" 3 4
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   const char *__restrict __locuser,
   const char *__restrict __remuser,
   const char *__restrict __cmd, int *__restrict __fd2p);
# 461 "/usr/include/netdb.h" 3 4
extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
      const char *__restrict __locuser,
      const char *__restrict __remuser,
      const char *__restrict __cmd, int *__restrict __fd2p,
      sa_family_t __af);
# 477 "/usr/include/netdb.h" 3 4
extern int rexec (char **__restrict __ahost, int __rport,
    const char *__restrict __name,
    const char *__restrict __pass,
    const char *__restrict __cmd, int *__restrict __fd2p);
# 489 "/usr/include/netdb.h" 3 4
extern int rexec_af (char **__restrict __ahost, int __rport,
       const char *__restrict __name,
       const char *__restrict __pass,
       const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af);
# 503 "/usr/include/netdb.h" 3 4
extern int ruserok (const char *__rhost, int __suser,
      const char *__remuser, const char *__locuser);
# 513 "/usr/include/netdb.h" 3 4
extern int ruserok_af (const char *__rhost, int __suser,
         const char *__remuser, const char *__locuser,
         sa_family_t __af);
# 526 "/usr/include/netdb.h" 3 4
extern int iruserok (uint32_t __raddr, int __suser,
       const char *__remuser, const char *__locuser);
# 537 "/usr/include/netdb.h" 3 4
extern int iruserok_af (const void *__raddr, int __suser,
   const char *__remuser, const char *__locuser,
   sa_family_t __af);
# 549 "/usr/include/netdb.h" 3 4
extern int rresvport (int *__alport);
# 558 "/usr/include/netdb.h" 3 4
extern int rresvport_af (int *__alport, sa_family_t __af);






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};



struct gaicb
{
  const char *ar_name;
  const char *ar_service;
  const struct addrinfo *ar_request;
  struct addrinfo *ar_result;

  int __return;
  int __glibc_reserved[5];
};
# 660 "/usr/include/netdb.h" 3 4
extern int getaddrinfo (const char *__restrict __name,
   const char *__restrict __service,
   const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) __attribute__ ((__nothrow__ , __leaf__));


extern const char *gai_strerror (int __ecode) __attribute__ ((__nothrow__ , __leaf__));





extern int getnameinfo (const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, int __flags);
# 690 "/usr/include/netdb.h" 3 4
extern int getaddrinfo_a (int __mode, struct gaicb *__list[__restrict],
     int __ent, struct sigevent *__restrict __sig);
# 701 "/usr/include/netdb.h" 3 4
extern int gai_suspend (const struct gaicb *const __list[], int __ent,
   const struct timespec *__timeout);
# 716 "/usr/include/netdb.h" 3 4
extern int gai_error (struct gaicb *__req) __attribute__ ((__nothrow__ , __leaf__));


extern int gai_cancel (struct gaicb *__gaicbp) __attribute__ ((__nothrow__ , __leaf__));



# 18 "/usr/include/postgresql/14/server/port.h" 2
# 1 "/usr/include/pwd.h" 1 3 4
# 27 "/usr/include/pwd.h" 3 4





# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 33 "/usr/include/pwd.h" 2 3 4
# 49 "/usr/include/pwd.h" 3 4
struct passwd
{
  char *pw_name;
  char *pw_passwd;

  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
# 72 "/usr/include/pwd.h" 3 4
extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
# 94 "/usr/include/pwd.h" 3 4
extern struct passwd *fgetpwent (FILE *__stream) __attribute__ ((__nonnull__ (1)));







extern int putpwent (const struct passwd *__restrict __p,
       FILE *__restrict __f);






extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (const char *__name) __attribute__ ((__nonnull__ (1)));
# 139 "/usr/include/pwd.h" 3 4
extern int getpwent_r (struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
    __attribute__ ((__nonnull__ (1, 2, 4)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));


extern int getpwuid_r (__uid_t __uid,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
    __attribute__ ((__nonnull__ (2, 3, 5)))
    __attribute__ ((__access__ (__write_only__, 3, 4)));

extern int getpwnam_r (const char *__restrict __name,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
    __attribute__ ((__nonnull__ (1, 2, 3, 5)))
    __attribute__ ((__access__ (__write_only__, 3, 4)));
# 169 "/usr/include/pwd.h" 3 4
extern int fgetpwent_r (FILE *__restrict __stream,
   struct passwd *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct passwd **__restrict __result)
    __attribute__ ((__nonnull__ (1, 2, 3, 5)))
    __attribute__ ((__access__ (__write_only__, 3, 4)));
# 188 "/usr/include/pwd.h" 3 4
extern int getpw (__uid_t __uid, char *__buffer);



# 19 "/usr/include/postgresql/14/server/port.h" 2
# 31 "/usr/include/postgresql/14/server/port.h"

# 31 "/usr/include/postgresql/14/server/port.h"
typedef int pgsocket;
# 41 "/usr/include/postgresql/14/server/port.h"
extern 
# 41 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 41 "/usr/include/postgresql/14/server/port.h"
           pg_set_noblock(pgsocket sock);
extern 
# 42 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 42 "/usr/include/postgresql/14/server/port.h"
           pg_set_block(pgsocket sock);



extern 
# 46 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 46 "/usr/include/postgresql/14/server/port.h"
           has_drive_prefix(const char *filename);
extern char *first_dir_separator(const char *filename);
extern char *last_dir_separator(const char *filename);
extern char *first_path_var_separator(const char *pathlist);
extern void join_path_components(char *ret_path,
         const char *head, const char *tail);
extern void canonicalize_path(char *path);
extern void make_native_path(char *path);
extern void cleanup_path(char *path);
extern 
# 55 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 55 "/usr/include/postgresql/14/server/port.h"
           path_contains_parent_reference(const char *path);
extern 
# 56 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 56 "/usr/include/postgresql/14/server/port.h"
           path_is_relative_and_below_cwd(const char *path);
extern 
# 57 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 57 "/usr/include/postgresql/14/server/port.h"
           path_is_prefix_of_path(const char *path1, const char *path2);
extern char *make_absolute_path(const char *path);
extern const char *get_progname(const char *argv0);
extern void get_share_path(const char *my_exec_path, char *ret_path);
extern void get_etc_path(const char *my_exec_path, char *ret_path);
extern void get_include_path(const char *my_exec_path, char *ret_path);
extern void get_pkginclude_path(const char *my_exec_path, char *ret_path);
extern void get_includeserver_path(const char *my_exec_path, char *ret_path);
extern void get_lib_path(const char *my_exec_path, char *ret_path);
extern void get_pkglib_path(const char *my_exec_path, char *ret_path);
extern void get_locale_path(const char *my_exec_path, char *ret_path);
extern void get_doc_path(const char *my_exec_path, char *ret_path);
extern void get_html_path(const char *my_exec_path, char *ret_path);
extern void get_man_path(const char *my_exec_path, char *ret_path);
extern 
# 71 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 71 "/usr/include/postgresql/14/server/port.h"
           get_home_path(char *ret_path);
extern void get_parent_directory(char *path);


extern char **pgfnames(const char *path);
extern void pgfnames_cleanup(char **filenames);
# 125 "/usr/include/postgresql/14/server/port.h"
extern void set_pglocale_pgservice(const char *argv0, const char *app);


extern int validate_exec(const char *path);
extern int find_my_exec(const char *argv0, char *retpath);
extern int find_other_exec(const char *argv0, const char *target,
       const char *versionstr, char *retpath);
extern char *pipe_read_line(char *cmd, char *line, int maxsize);
# 151 "/usr/include/postgresql/14/server/port.h"
extern void pg_usleep(long microsec);


extern int pg_strcasecmp(const char *s1, const char *s2);
extern int pg_strncasecmp(const char *s1, const char *s2, size_t n);
extern unsigned char pg_toupper(unsigned char ch);
extern unsigned char pg_tolower(unsigned char ch);
extern unsigned char pg_ascii_toupper(unsigned char ch);
extern unsigned char pg_ascii_tolower(unsigned char ch);
# 198 "/usr/include/postgresql/14/server/port.h"
extern int pg_vsnprintf(char *str, size_t count, const char *fmt, va_list args);
extern int pg_snprintf(char *str, size_t count, const char *fmt,...) __attribute__((format(gnu_printf, 3, 4)));
extern int pg_vsprintf(char *str, const char *fmt, va_list args);
extern int pg_sprintf(char *str, const char *fmt,...) __attribute__((format(gnu_printf, 2, 3)));
extern int pg_vfprintf(FILE *stream, const char *fmt, va_list args);
extern int pg_fprintf(FILE *stream, const char *fmt,...) __attribute__((format(gnu_printf, 2, 3)));
extern int pg_vprintf(const char *fmt, va_list args);
extern int pg_printf(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
# 225 "/usr/include/postgresql/14/server/port.h"
extern int pg_strfromd(char *str, size_t count, int precision, double value);


extern char *pg_strerror(int errnum);



extern char *pg_strerror_r(int errnum, char *buf, size_t buflen);




extern const char *pg_strsignal(int signum);

extern int pclose_check(FILE *stream);
# 284 "/usr/include/postgresql/14/server/port.h"
extern 
# 284 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 284 "/usr/include/postgresql/14/server/port.h"
           rmtree(const char *path, 
# 284 "/usr/include/postgresql/14/server/port.h" 3 4
                                    _Bool 
# 284 "/usr/include/postgresql/14/server/port.h"
                                         rmtopdir);
# 359 "/usr/include/postgresql/14/server/port.h"
extern double pg_erand48(unsigned short xseed[3]);
extern long pg_lrand48(void);
extern long pg_jrand48(unsigned short xseed[3]);
extern void pg_srand48(long seed);


extern int fls(int mask);





extern int getpeereid(int sock, uid_t *uid, gid_t *gid);
# 438 "/usr/include/postgresql/14/server/port.h"
extern size_t strlcat(char *dst, const char *src, size_t siz);



extern size_t strlcpy(char *dst, const char *src, size_t siz);
# 490 "/usr/include/postgresql/14/server/port.h"
extern int pqGetpwuid(uid_t uid, struct passwd *resultbuf, char *buffer,
        size_t buflen, struct passwd **result);


extern int pqGethostbyname(const char *name,
       struct hostent *resultbuf,
       char *buffer, size_t buflen,
       struct hostent **result,
       int *herrno);

extern void pg_qsort(void *base, size_t nel, size_t elsize,
      int (*cmp) (const void *, const void *));
extern int pg_qsort_strcmp(const void *a, const void *b);



typedef int (*qsort_arg_comparator) (const void *a, const void *b, void *arg);

extern void qsort_arg(void *base, size_t nel, size_t elsize,
       qsort_arg_comparator cmp, void *arg);

extern void qsort_interruptible(void *base, size_t nel, size_t elsize,
        qsort_arg_comparator cmp, void *arg);

extern void *bsearch_arg(const void *key, const void *base,
       size_t nmemb, size_t size,
       int (*compar) (const void *, const void *, void *),
       void *arg);


extern int pg_get_encoding_from_locale(const char *ctype, 
# 520 "/usr/include/postgresql/14/server/port.h" 3 4
                                                         _Bool 
# 520 "/usr/include/postgresql/14/server/port.h"
                                                              write_message);






extern char *pg_inet_net_ntop(int af, const void *src, int bits,
         char *dst, size_t size);


extern void pg_strong_random_init(void);
extern 
# 532 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 532 "/usr/include/postgresql/14/server/port.h"
           pg_strong_random(void *buf, size_t len);
# 541 "/usr/include/postgresql/14/server/port.h"
extern int pg_check_dir(const char *dir);


extern int pg_mkdir_p(char *path, int omode);


typedef void (*pqsigfunc) (int signo);
extern pqsigfunc pqsignal(int signo, pqsigfunc func);


extern char *escape_single_quotes_ascii(const char *src);


extern char *wait_result_to_str(int exit_status);
extern 
# 555 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 555 "/usr/include/postgresql/14/server/port.h"
           wait_result_is_signal(int exit_status, int signum);
extern 
# 556 "/usr/include/postgresql/14/server/port.h" 3 4
      _Bool 
# 556 "/usr/include/postgresql/14/server/port.h"
           wait_result_is_any_signal(int exit_status, 
# 556 "/usr/include/postgresql/14/server/port.h" 3 4
                                                      _Bool 
# 556 "/usr/include/postgresql/14/server/port.h"
                                                           include_command_not_found);
# 1363 "/usr/include/postgresql/14/server/c.h" 2
# 47 "/usr/include/postgresql/14/server/postgres.h" 2
# 1 "/usr/include/postgresql/14/server/utils/elog.h" 1
# 17 "/usr/include/postgresql/14/server/utils/elog.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/setjmp.h" 1 3 4
# 30 "/usr/include/aarch64-linux-gnu/bits/setjmp.h" 3 4

# 30 "/usr/include/aarch64-linux-gnu/bits/setjmp.h" 3 4
__extension__ typedef unsigned long long __jmp_buf [22];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct___jmp_buf_tag.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/types/struct___jmp_buf_tag.h" 3 4
struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };
# 31 "/usr/include/setjmp.h" 2 3 4

typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));




extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 54 "/usr/include/setjmp.h" 3 4
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));





extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 80 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));





# 1 "/usr/include/aarch64-linux-gnu/bits/setjmp2.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/setjmp2.h" 3 4
extern void longjmp (struct __jmp_buf_tag __env[1], int __val) __asm__ ("" "__longjmp_chk") __attribute__ ((__nothrow__))

                        __attribute__ ((__noreturn__));
extern void _longjmp (struct __jmp_buf_tag __env[1], int __val) __asm__ ("" "__longjmp_chk") __attribute__ ((__nothrow__))

                        __attribute__ ((__noreturn__));
extern void siglongjmp (struct __jmp_buf_tag __env[1], int __val) __asm__ ("" "__longjmp_chk") __attribute__ ((__nothrow__))

                        __attribute__ ((__noreturn__));
# 88 "/usr/include/setjmp.h" 2 3 4



# 18 "/usr/include/postgresql/14/server/utils/elog.h" 2
# 73 "/usr/include/postgresql/14/server/utils/elog.h"
# 1 "/usr/include/postgresql/14/server/utils/errcodes.h" 1
# 74 "/usr/include/postgresql/14/server/utils/elog.h" 2
# 162 "/usr/include/postgresql/14/server/utils/elog.h"

# 162 "/usr/include/postgresql/14/server/utils/elog.h"
extern 
# 162 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
      _Bool 
# 162 "/usr/include/postgresql/14/server/utils/elog.h"
           message_level_is_interesting(int elevel);

extern 
# 164 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
      _Bool 
# 164 "/usr/include/postgresql/14/server/utils/elog.h"
           errstart(int elevel, const char *domain);
extern __attribute__((cold)) 
# 165 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
                        _Bool 
# 165 "/usr/include/postgresql/14/server/utils/elog.h"
                             errstart_cold(int elevel, const char *domain);
extern void errfinish(const char *filename, int lineno, const char *funcname);

extern int errcode(int sqlerrcode);

extern int errcode_for_file_access(void);
extern int errcode_for_socket_access(void);

extern int errmsg(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
extern int errmsg_internal(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errmsg_plural(const char *fmt_singular, const char *fmt_plural,
        unsigned long n,...) __attribute__((format(gnu_printf, 1, 4))) __attribute__((format(gnu_printf, 2, 4)));

extern int errdetail(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
extern int errdetail_internal(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errdetail_log(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errdetail_log_plural(const char *fmt_singular,
         const char *fmt_plural,
         unsigned long n,...) __attribute__((format(gnu_printf, 1, 4))) __attribute__((format(gnu_printf, 2, 4)));

extern int errdetail_plural(const char *fmt_singular, const char *fmt_plural,
        unsigned long n,...) __attribute__((format(gnu_printf, 1, 4))) __attribute__((format(gnu_printf, 2, 4)));

extern int errhint(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errhint_plural(const char *fmt_singular, const char *fmt_plural,
         unsigned long n,...) __attribute__((format(gnu_printf, 1, 4))) __attribute__((format(gnu_printf, 2, 4)));
# 206 "/usr/include/postgresql/14/server/utils/elog.h"
extern int set_errcontext_domain(const char *domain);

extern int errcontext_msg(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errhidestmt(
# 210 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
                      _Bool 
# 210 "/usr/include/postgresql/14/server/utils/elog.h"
                           hide_stmt);
extern int errhidecontext(
# 211 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
                         _Bool 
# 211 "/usr/include/postgresql/14/server/utils/elog.h"
                              hide_ctx);

extern int errbacktrace(void);

extern int errposition(int cursorpos);

extern int internalerrposition(int cursorpos);
extern int internalerrquery(const char *query);

extern int err_generic_string(int field, const char *str);

extern int geterrcode(void);
extern int geterrposition(void);
extern int getinternalerrposition(void);
# 238 "/usr/include/postgresql/14/server/utils/elog.h"
extern void pre_format_elog_string(int errnumber, const char *domain);
extern char *format_elog_string(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));




typedef struct ErrorContextCallback
{
 struct ErrorContextCallback *previous;
 void (*callback) (void *arg);
 void *arg;
} ErrorContextCallback;

extern ErrorContextCallback *error_context_stack;
# 358 "/usr/include/postgresql/14/server/utils/elog.h"
extern sigjmp_buf *PG_exception_stack;
# 369 "/usr/include/postgresql/14/server/utils/elog.h"
typedef struct ErrorData
{
 int elevel;
 
# 372 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
_Bool 
# 372 "/usr/include/postgresql/14/server/utils/elog.h"
      output_to_server;
 
# 373 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
_Bool 
# 373 "/usr/include/postgresql/14/server/utils/elog.h"
      output_to_client;
 
# 374 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
_Bool 
# 374 "/usr/include/postgresql/14/server/utils/elog.h"
      hide_stmt;
 
# 375 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
_Bool 
# 375 "/usr/include/postgresql/14/server/utils/elog.h"
      hide_ctx;
 const char *filename;
 int lineno;
 const char *funcname;
 const char *domain;
 const char *context_domain;
 int sqlerrcode;
 char *message;
 char *detail;
 char *detail_log;
 char *hint;
 char *context;
 char *backtrace;
 const char *message_id;
 char *schema_name;
 char *table_name;
 char *column_name;
 char *datatype_name;
 char *constraint_name;
 int cursorpos;
 int internalpos;
 char *internalquery;
 int saved_errno;


 struct MemoryContextData *assoc_context;
} ErrorData;

extern void EmitErrorReport(void);
extern ErrorData *CopyErrorData(void);
extern void FreeErrorData(ErrorData *edata);
extern void FlushErrorState(void);
extern void ReThrowError(ErrorData *edata) __attribute__((noreturn));
extern void ThrowErrorData(ErrorData *edata);
extern void pg_re_throw(void) __attribute__((noreturn));

extern char *GetErrorContextStack(void);


typedef void (*emit_log_hook_type) (ErrorData *edata);
extern emit_log_hook_type emit_log_hook;




typedef enum
{
 PGERROR_TERSE,
 PGERROR_DEFAULT,
 PGERROR_VERBOSE
} PGErrorVerbosity;

extern int Log_error_verbosity;
extern char *Log_line_prefix;
extern int Log_destination;
extern char *Log_destination_string;
extern 
# 431 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
      _Bool 
# 431 "/usr/include/postgresql/14/server/utils/elog.h"
           syslog_sequence_numbers;
extern 
# 432 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
      _Bool 
# 432 "/usr/include/postgresql/14/server/utils/elog.h"
           syslog_split_messages;
# 441 "/usr/include/postgresql/14/server/utils/elog.h"
extern void DebugFileOpen(void);
extern char *unpack_sql_state(int sql_state);
extern 
# 443 "/usr/include/postgresql/14/server/utils/elog.h" 3 4
      _Bool 
# 443 "/usr/include/postgresql/14/server/utils/elog.h"
           in_error_recursion_trouble(void);


extern void set_syslog_parameters(const char *ident, int facility);







extern void write_stderr(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
# 48 "/usr/include/postgresql/14/server/postgres.h" 2
# 1 "/usr/include/postgresql/14/server/utils/palloc.h" 1
# 36 "/usr/include/postgresql/14/server/utils/palloc.h"
typedef struct MemoryContextData *MemoryContext;
# 45 "/usr/include/postgresql/14/server/utils/palloc.h"
typedef void (*MemoryContextCallbackFunction) (void *arg);

typedef struct MemoryContextCallback
{
 MemoryContextCallbackFunction func;
 void *arg;
 struct MemoryContextCallback *next;
} MemoryContextCallback;






extern MemoryContext CurrentMemoryContext;
# 71 "/usr/include/postgresql/14/server/utils/palloc.h"
extern void *MemoryContextAlloc(MemoryContext context, Size size);
extern void *MemoryContextAllocZero(MemoryContext context, Size size);
extern void *MemoryContextAllocZeroAligned(MemoryContext context, Size size);
extern void *MemoryContextAllocExtended(MemoryContext context,
          Size size, int flags);

extern void *palloc(Size size);
extern void *palloc0(Size size);
extern void *palloc_extended(Size size, int flags);
extern __attribute__((warn_unused_result)) void *repalloc(void *pointer, Size size);
extern void pfree(void *pointer);
# 97 "/usr/include/postgresql/14/server/utils/palloc.h"
extern void *MemoryContextAllocHuge(MemoryContext context, Size size);
extern __attribute__((warn_unused_result)) void *repalloc_huge(void *pointer, Size size);
# 108 "/usr/include/postgresql/14/server/utils/palloc.h"
static inline MemoryContext
MemoryContextSwitchTo(MemoryContext context)
{
 MemoryContext old = CurrentMemoryContext;

 CurrentMemoryContext = context;
 return old;
}



extern void MemoryContextRegisterResetCallback(MemoryContext context,
              MemoryContextCallback *cb);





extern char *MemoryContextStrdup(MemoryContext context, const char *string);
extern char *pstrdup(const char *in);
extern char *pnstrdup(const char *in, Size len);

extern char *pchomp(const char *in);


extern char *psprintf(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
extern size_t pvsnprintf(char *buf, size_t len, const char *fmt, va_list args) __attribute__((format(gnu_printf, 3, 0)));
# 49 "/usr/include/postgresql/14/server/postgres.h" 2
# 69 "/usr/include/postgresql/14/server/postgres.h"
typedef struct varatt_external
{
 int32 va_rawsize;
 uint32 va_extinfo;

 Oid va_valueid;
 Oid va_toastrelid;
} varatt_external;
# 94 "/usr/include/postgresql/14/server/postgres.h"
typedef struct varatt_indirect
{
 struct varlena *pointer;
} varatt_indirect;
# 109 "/usr/include/postgresql/14/server/postgres.h"
typedef struct ExpandedObjectHeader ExpandedObjectHeader;

typedef struct varatt_expanded
{
 ExpandedObjectHeader *eohptr;
} varatt_expanded;






typedef enum vartag_external
{
 VARTAG_INDIRECT = 1,
 VARTAG_EXPANDED_RO = 2,
 VARTAG_EXPANDED_RW = 3,
 VARTAG_ONDISK = 18
} vartag_external;
# 148 "/usr/include/postgresql/14/server/postgres.h"
typedef union
{
 struct
 {
  uint32 va_header;
  char va_data[];
 } va_4byte;
 struct
 {
  uint32 va_header;
  uint32 va_tcinfo;

  char va_data[];
 } va_compressed;
} varattrib_4b;

typedef struct
{
 uint8 va_header;
 char va_data[];
} varattrib_1b;


typedef struct
{
 uint8 va_header;
 uint8 va_tag;
 char va_data[];
} varattrib_1b_e;
# 411 "/usr/include/postgresql/14/server/postgres.h"
typedef uintptr_t Datum;







typedef struct NullableDatum
{

 Datum value;

 
# 424 "/usr/include/postgresql/14/server/postgres.h" 3 4
_Bool 
# 424 "/usr/include/postgresql/14/server/postgres.h"
      isnull;

} NullableDatum;
# 707 "/usr/include/postgresql/14/server/postgres.h"
static inline float4
DatumGetFloat4(Datum X)
{
 union
 {
  int32 value;
  float4 retval;
 } myunion;

 myunion.value = ((int32) (X));
 return myunion.retval;
}





static inline Datum
Float4GetDatum(float4 X)
{
 union
 {
  float4 value;
  int32 retval;
 } myunion;

 myunion.value = X;
 return ((Datum) (myunion.retval));
}
# 745 "/usr/include/postgresql/14/server/postgres.h"
static inline float8
DatumGetFloat8(Datum X)
{
 union
 {
  int64 value;
  float8 retval;
 } myunion;

 myunion.value = ((int64) (X));
 return myunion.retval;
}
# 770 "/usr/include/postgresql/14/server/postgres.h"
static inline Datum
Float8GetDatum(float8 X)
{
 union
 {
  float8 value;
  int64 retval;
 } myunion;

 myunion.value = X;
 return ((Datum) (myunion.retval));
}
# 13 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c" 2
# 1 "/usr/include/postgresql/14/server/miscadmin.h" 1
# 26 "/usr/include/postgresql/14/server/miscadmin.h"
# 1 "/usr/include/signal.h" 1 3 4
# 27 "/usr/include/signal.h" 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/signum-generic.h" 1 3 4
# 76 "/usr/include/aarch64-linux-gnu/bits/signum-generic.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/signum-arch.h" 1 3 4
# 77 "/usr/include/aarch64-linux-gnu/bits/signum-generic.h" 2 3 4
# 31 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/sig_atomic_t.h" 1 3 4








# 8 "/usr/include/aarch64-linux-gnu/bits/types/sig_atomic_t.h" 3 4
typedef __sig_atomic_t sig_atomic_t;
# 33 "/usr/include/signal.h" 2 3 4
# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/siginfo_t.h" 1 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
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
# 20 "/usr/include/asm-generic/int-ll64.h" 3 4
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
# 33 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 3 4
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

# 34 "/usr/include/aarch64-linux-gnu/sys/procfs.h" 2 3 4

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
# 24 "/usr/include/aarch64-linux-gnu/bits/sigstksz.h" 3 4
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
# 339 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 350 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ , __leaf__));






extern int close (int __fd);




extern void closefrom (int __lowfd) __attribute__ ((__nothrow__ , __leaf__));







extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));





extern ssize_t write (int __fd, const void *__buf, size_t __n) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__read_only__, 2, 3)));
# 389 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) __attribute__ ((__warn_unused_result__))
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
# 1026 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1038 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1049 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 1059 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 1070 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1091 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1114 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) __attribute__ ((__warn_unused_result__));
# 1124 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) __attribute__ ((__warn_unused_result__));
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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread (int __fd, void *__buf, size_t __nbytes, __off_t __offset)
{
  return ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && (((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread_alias (__fd, __buf, __nbytes, __offset) : ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && !(((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread_chk_warn (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0)) : __pread_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0))))

                                     ;
}
# 89 "/usr/include/aarch64-linux-gnu/bits/unistd.h" 3 4
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


# 25 "/usr/include/aarch64-linux-gnu/bits/sigstksz.h" 2 3 4
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


# 27 "/usr/include/postgresql/14/server/miscadmin.h" 2

# 1 "/usr/include/postgresql/14/server/datatype/timestamp.h" 1
# 38 "/usr/include/postgresql/14/server/datatype/timestamp.h"

# 38 "/usr/include/postgresql/14/server/datatype/timestamp.h"
typedef int64 Timestamp;
typedef int64 TimestampTz;
typedef int64 TimeOffset;
typedef int32 fsec_t;

typedef struct
{
 TimeOffset time;

 int32 day;
 int32 month;
} Interval;
# 29 "/usr/include/postgresql/14/server/miscadmin.h" 2
# 1 "/usr/include/postgresql/14/server/pgtime.h" 1
# 23 "/usr/include/postgresql/14/server/pgtime.h"
typedef int64 pg_time_t;

struct pg_tm
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

typedef struct pg_tz pg_tz;
typedef struct pg_tzenum pg_tzenum;






extern struct pg_tm *pg_localtime(const pg_time_t *timep, const pg_tz *tz);
extern struct pg_tm *pg_gmtime(const pg_time_t *timep);
extern int pg_next_dst_boundary(const pg_time_t *timep,
         long int *before_gmtoff,
         int *before_isdst,
         pg_time_t *boundary,
         long int *after_gmtoff,
         int *after_isdst,
         const pg_tz *tz);
extern 
# 57 "/usr/include/postgresql/14/server/pgtime.h" 3 4
      _Bool 
# 57 "/usr/include/postgresql/14/server/pgtime.h"
           pg_interpret_timezone_abbrev(const char *abbrev,
           const pg_time_t *timep,
           long int *gmtoff,
           int *isdst,
           const pg_tz *tz);
extern 
# 62 "/usr/include/postgresql/14/server/pgtime.h" 3 4
      _Bool 
# 62 "/usr/include/postgresql/14/server/pgtime.h"
           pg_get_timezone_offset(const pg_tz *tz, long int *gmtoff);
extern const char *pg_get_timezone_name(pg_tz *tz);
extern 
# 64 "/usr/include/postgresql/14/server/pgtime.h" 3 4
      _Bool 
# 64 "/usr/include/postgresql/14/server/pgtime.h"
           pg_tz_acceptable(pg_tz *tz);



extern size_t pg_strftime(char *s, size_t max, const char *format,
        const struct pg_tm *tm);



extern pg_tz *session_timezone;
extern pg_tz *log_timezone;

extern void pg_timezone_initialize(void);
extern pg_tz *pg_tzset(const char *tzname);
extern pg_tz *pg_tzset_offset(long gmtoffset);

extern pg_tzenum *pg_tzenumerate_start(void);
extern pg_tz *pg_tzenumerate_next(pg_tzenum *dir);
extern void pg_tzenumerate_end(pg_tzenum *dir);
# 30 "/usr/include/postgresql/14/server/miscadmin.h" 2
# 90 "/usr/include/postgresql/14/server/miscadmin.h"
extern volatile sig_atomic_t InterruptPending;
extern volatile sig_atomic_t QueryCancelPending;
extern volatile sig_atomic_t ProcDiePending;
extern volatile sig_atomic_t IdleInTransactionSessionTimeoutPending;
extern volatile sig_atomic_t IdleSessionTimeoutPending;
extern volatile sig_atomic_t ProcSignalBarrierPending;
extern volatile sig_atomic_t LogMemoryContextPending;

extern volatile sig_atomic_t CheckClientConnectionPending;
extern volatile sig_atomic_t ClientConnectionLost;


extern volatile uint32 InterruptHoldoffCount;
extern volatile uint32 QueryCancelHoldoffCount;
extern volatile uint32 CritSectionCount;


extern void ProcessInterrupts(void);
# 163 "/usr/include/postgresql/14/server/miscadmin.h"
extern pid_t PostmasterPid;
extern 
# 164 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                  _Bool 
# 164 "/usr/include/postgresql/14/server/miscadmin.h"
                       IsPostmasterEnvironment;
extern 
# 165 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                  _Bool 
# 165 "/usr/include/postgresql/14/server/miscadmin.h"
                       IsUnderPostmaster;
extern 
# 166 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                  _Bool 
# 166 "/usr/include/postgresql/14/server/miscadmin.h"
                       IsBackgroundWorker;
extern 
# 167 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                  _Bool 
# 167 "/usr/include/postgresql/14/server/miscadmin.h"
                       IsBinaryUpgrade;

extern 
# 169 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                  _Bool 
# 169 "/usr/include/postgresql/14/server/miscadmin.h"
                       ExitOnAnyError;

extern char *DataDir;
extern int data_directory_mode;

extern int NBuffers;
extern int MaxBackends;
extern int MaxConnections;
extern int max_worker_processes;
extern int max_parallel_workers;

extern int MyProcPid;
extern pg_time_t MyStartTime;
extern TimestampTz MyStartTimestamp;
extern struct Port *MyProcPort;
extern struct Latch *MyLatch;
extern int32 MyCancelKey;
extern int MyPMChildSlot;

extern char OutputFileName[];
extern char my_exec_path[];
extern char pkglib_path[];
# 201 "/usr/include/postgresql/14/server/miscadmin.h"
extern Oid MyDatabaseId;

extern Oid MyDatabaseTableSpace;
# 239 "/usr/include/postgresql/14/server/miscadmin.h"
extern int DateStyle;
extern int DateOrder;
# 254 "/usr/include/postgresql/14/server/miscadmin.h"
extern int IntervalStyle;



extern 
# 258 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 258 "/usr/include/postgresql/14/server/miscadmin.h"
           enableFsync;
extern 
# 259 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                  _Bool 
# 259 "/usr/include/postgresql/14/server/miscadmin.h"
                       allowSystemTableMods;
extern int work_mem;
extern double hash_mem_multiplier;
extern int maintenance_work_mem;
extern int max_parallel_maintenance_workers;

extern int VacuumCostPageHit;
extern int VacuumCostPageMiss;
extern int VacuumCostPageDirty;
extern int VacuumCostLimit;
extern double VacuumCostDelay;

extern int64 VacuumPageHit;
extern int64 VacuumPageMiss;
extern int64 VacuumPageDirty;

extern int VacuumCostBalance;
extern 
# 276 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 276 "/usr/include/postgresql/14/server/miscadmin.h"
           VacuumCostActive;
# 288 "/usr/include/postgresql/14/server/miscadmin.h"
typedef char *pg_stack_base_t;


extern pg_stack_base_t set_stack_base(void);
extern void restore_stack_base(pg_stack_base_t base);
extern void check_stack_depth(void);
extern 
# 294 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 294 "/usr/include/postgresql/14/server/miscadmin.h"
           stack_is_too_deep(void);


extern void PreventCommandIfReadOnly(const char *cmdname);
extern void PreventCommandIfParallelMode(const char *cmdname);
extern void PreventCommandDuringRecovery(const char *cmdname);


extern int trace_recovery_messages;
extern int trace_recovery(int trace_level);
# 315 "/usr/include/postgresql/14/server/miscadmin.h"
extern char *DatabasePath;


extern void InitPostmasterChild(void);
extern void InitStandaloneProcess(const char *argv0);
extern void SwitchToSharedLatch(void);
extern void SwitchBackToLocalLatch(void);

typedef enum BackendType
{
 B_INVALID = 0,
 B_AUTOVAC_LAUNCHER,
 B_AUTOVAC_WORKER,
 B_BACKEND,
 B_BG_WORKER,
 B_BG_WRITER,
 B_CHECKPOINTER,
 B_STARTUP,
 B_WAL_RECEIVER,
 B_WAL_SENDER,
 B_WAL_WRITER,
 B_ARCHIVER,
 B_STATS_COLLECTOR,
 B_LOGGER,
} BackendType;

extern BackendType MyBackendType;

extern const char *GetBackendTypeDesc(BackendType backendType);

extern void SetDatabasePath(const char *path);
extern void checkDataDir(void);
extern void SetDataDir(const char *dir);
extern void ChangeToDataDir(void);

extern char *GetUserNameFromId(Oid roleid, 
# 350 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                                          _Bool 
# 350 "/usr/include/postgresql/14/server/miscadmin.h"
                                               noerr);
extern Oid GetUserId(void);
extern Oid GetOuterUserId(void);
extern Oid GetSessionUserId(void);
extern Oid GetAuthenticatedUserId(void);
extern void GetUserIdAndSecContext(Oid *userid, int *sec_context);
extern void SetUserIdAndSecContext(Oid userid, int sec_context);
extern 
# 357 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 357 "/usr/include/postgresql/14/server/miscadmin.h"
           InLocalUserIdChange(void);
extern 
# 358 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 358 "/usr/include/postgresql/14/server/miscadmin.h"
           InSecurityRestrictedOperation(void);
extern 
# 359 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 359 "/usr/include/postgresql/14/server/miscadmin.h"
           InNoForceRLSOperation(void);
extern void GetUserIdAndContext(Oid *userid, 
# 360 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                                            _Bool 
# 360 "/usr/include/postgresql/14/server/miscadmin.h"
                                                 *sec_def_context);
extern void SetUserIdAndContext(Oid userid, 
# 361 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                                           _Bool 
# 361 "/usr/include/postgresql/14/server/miscadmin.h"
                                                sec_def_context);
extern void InitializeSessionUserId(const char *rolename, Oid useroid);
extern void InitializeSessionUserIdStandalone(void);
extern void SetSessionAuthorization(Oid userid, 
# 364 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                                               _Bool 
# 364 "/usr/include/postgresql/14/server/miscadmin.h"
                                                    is_superuser);
extern Oid GetCurrentRoleId(void);
extern void SetCurrentRoleId(Oid roleid, 
# 366 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                                        _Bool 
# 366 "/usr/include/postgresql/14/server/miscadmin.h"
                                             is_superuser);


extern 
# 369 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 369 "/usr/include/postgresql/14/server/miscadmin.h"
           superuser(void);
extern 
# 370 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 370 "/usr/include/postgresql/14/server/miscadmin.h"
           superuser_arg(Oid roleid);
# 397 "/usr/include/postgresql/14/server/miscadmin.h"
typedef enum ProcessingMode
{
 BootstrapProcessing,
 InitProcessing,
 NormalProcessing
} ProcessingMode;

extern ProcessingMode Mode;
# 427 "/usr/include/postgresql/14/server/miscadmin.h"
typedef enum
{
 NotAnAuxProcess = -1,
 CheckerProcess = 0,
 BootstrapProcess,
 StartupProcess,
 BgWriterProcess,
 ArchiverProcess,
 CheckpointerProcess,
 WalWriterProcess,
 WalReceiverProcess,

 NUM_AUXPROCTYPES
} AuxProcType;

extern AuxProcType MyAuxProcType;
# 459 "/usr/include/postgresql/14/server/miscadmin.h"
extern void pg_split_opts(char **argv, int *argcp, const char *optstr);
extern void InitializeMaxBackends(void);
extern void InitPostgres(const char *in_dbname, Oid dboid, const char *username,
       Oid useroid, char *out_dbname, 
# 462 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                                     _Bool 
# 462 "/usr/include/postgresql/14/server/miscadmin.h"
                                          override_allow_connections);
extern void BaseInit(void);


extern 
# 466 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 466 "/usr/include/postgresql/14/server/miscadmin.h"
           IgnoreSystemIndexes;
extern 
# 467 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                  _Bool 
# 467 "/usr/include/postgresql/14/server/miscadmin.h"
                       process_shared_preload_libraries_in_progress;
extern char *session_preload_libraries_string;
extern char *shared_preload_libraries_string;
extern char *local_preload_libraries_string;

extern void CreateDataDirLockFile(
# 472 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                                 _Bool 
# 472 "/usr/include/postgresql/14/server/miscadmin.h"
                                      amPostmaster);
extern void CreateSocketLockFile(const char *socketfile, 
# 473 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
                                                        _Bool 
# 473 "/usr/include/postgresql/14/server/miscadmin.h"
                                                             amPostmaster,
         const char *socketDir);
extern void TouchSocketLockFiles(void);
extern void AddToDataDirLockFile(int target_line, const char *str);
extern 
# 477 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 477 "/usr/include/postgresql/14/server/miscadmin.h"
           RecheckDataDirLockFile(void);
extern void ValidatePgVersion(const char *path);
extern void process_shared_preload_libraries(void);
extern void process_session_preload_libraries(void);
extern void pg_bindtextdomain(const char *domain);
extern 
# 482 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 482 "/usr/include/postgresql/14/server/miscadmin.h"
           has_rolreplication(Oid roleid);


extern 
# 485 "/usr/include/postgresql/14/server/miscadmin.h" 3 4
      _Bool 
# 485 "/usr/include/postgresql/14/server/miscadmin.h"
           BackupInProgress(void);
extern void CancelBackup(void);


extern size_t get_hash_memory_limit(void);
extern int get_hash_mem(void);
# 14 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c" 2
# 1 "/usr/include/postgresql/14/server/funcapi.h" 1
# 20 "/usr/include/postgresql/14/server/funcapi.h"
# 1 "/usr/include/postgresql/14/server/access/tupdesc.h" 1
# 17 "/usr/include/postgresql/14/server/access/tupdesc.h"
# 1 "/usr/include/postgresql/14/server/access/attnum.h" 1
# 21 "/usr/include/postgresql/14/server/access/attnum.h"
typedef int16 AttrNumber;
# 18 "/usr/include/postgresql/14/server/access/tupdesc.h" 2
# 1 "/usr/include/postgresql/14/server/catalog/pg_attribute.h" 1
# 25 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
# 1 "/usr/include/postgresql/14/server/catalog/genbki.h" 1
# 26 "/usr/include/postgresql/14/server/catalog/pg_attribute.h" 2
# 1 "/usr/include/postgresql/14/server/catalog/pg_attribute_d.h" 1
# 27 "/usr/include/postgresql/14/server/catalog/pg_attribute.h" 2
# 37 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
typedef struct FormData_pg_attribute
{
 Oid attrelid ;

 NameData attname;
# 53 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
 Oid atttypid ;
# 62 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
 int32 attstattarget ;





 int16 attlen;
# 83 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
 int16 attnum;





 int32 attndims;
# 98 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
 int32 attcacheoff ;







 int32 atttypmod ;





 
# 112 "/usr/include/postgresql/14/server/catalog/pg_attribute.h" 3 4
_Bool 
# 112 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
      attbyval;





 char attalign;







 char attstorage;
# 136 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
 char attcompression ;


 
# 139 "/usr/include/postgresql/14/server/catalog/pg_attribute.h" 3 4
_Bool 
# 139 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
      attnotnull;


 
# 142 "/usr/include/postgresql/14/server/catalog/pg_attribute.h" 3 4
_Bool 
# 142 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
      atthasdef ;


 
# 145 "/usr/include/postgresql/14/server/catalog/pg_attribute.h" 3 4
_Bool 
# 145 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
      atthasmissing ;


 char attidentity ;


 char attgenerated ;


 
# 154 "/usr/include/postgresql/14/server/catalog/pg_attribute.h" 3 4
_Bool 
# 154 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
      attisdropped ;
# 165 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
 
# 165 "/usr/include/postgresql/14/server/catalog/pg_attribute.h" 3 4
_Bool 
# 165 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
      attislocal ;


 int32 attinhcount ;


 Oid attcollation ;
# 191 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
} FormData_pg_attribute;
# 207 "/usr/include/postgresql/14/server/catalog/pg_attribute.h"
typedef FormData_pg_attribute *Form_pg_attribute;

extern int no_such_variable;

extern int no_such_variable;
# 19 "/usr/include/postgresql/14/server/access/tupdesc.h" 2
# 1 "/usr/include/postgresql/14/server/nodes/pg_list.h" 1
# 40 "/usr/include/postgresql/14/server/nodes/pg_list.h"
# 1 "/usr/include/postgresql/14/server/nodes/nodes.h" 1
# 26 "/usr/include/postgresql/14/server/nodes/nodes.h"
typedef enum NodeTag
{
 T_Invalid = 0,




 T_IndexInfo,
 T_ExprContext,
 T_ProjectionInfo,
 T_JunkFilter,
 T_OnConflictSetState,
 T_ResultRelInfo,
 T_EState,
 T_TupleTableSlot,




 T_Plan,
 T_Result,
 T_ProjectSet,
 T_ModifyTable,
 T_Append,
 T_MergeAppend,
 T_RecursiveUnion,
 T_BitmapAnd,
 T_BitmapOr,
 T_Scan,
 T_SeqScan,
 T_SampleScan,
 T_IndexScan,
 T_IndexOnlyScan,
 T_BitmapIndexScan,
 T_BitmapHeapScan,
 T_TidScan,
 T_TidRangeScan,
 T_SubqueryScan,
 T_FunctionScan,
 T_ValuesScan,
 T_TableFuncScan,
 T_CteScan,
 T_NamedTuplestoreScan,
 T_WorkTableScan,
 T_ForeignScan,
 T_CustomScan,
 T_Join,
 T_NestLoop,
 T_MergeJoin,
 T_HashJoin,
 T_Material,
 T_Memoize,
 T_Sort,
 T_IncrementalSort,
 T_Group,
 T_Agg,
 T_WindowAgg,
 T_Unique,
 T_Gather,
 T_GatherMerge,
 T_Hash,
 T_SetOp,
 T_LockRows,
 T_Limit,

 T_NestLoopParam,
 T_PlanRowMark,
 T_PartitionPruneInfo,
 T_PartitionedRelPruneInfo,
 T_PartitionPruneStepOp,
 T_PartitionPruneStepCombine,
 T_PlanInvalItem,






 T_PlanState,
 T_ResultState,
 T_ProjectSetState,
 T_ModifyTableState,
 T_AppendState,
 T_MergeAppendState,
 T_RecursiveUnionState,
 T_BitmapAndState,
 T_BitmapOrState,
 T_ScanState,
 T_SeqScanState,
 T_SampleScanState,
 T_IndexScanState,
 T_IndexOnlyScanState,
 T_BitmapIndexScanState,
 T_BitmapHeapScanState,
 T_TidScanState,
 T_TidRangeScanState,
 T_SubqueryScanState,
 T_FunctionScanState,
 T_TableFuncScanState,
 T_ValuesScanState,
 T_CteScanState,
 T_NamedTuplestoreScanState,
 T_WorkTableScanState,
 T_ForeignScanState,
 T_CustomScanState,
 T_JoinState,
 T_NestLoopState,
 T_MergeJoinState,
 T_HashJoinState,
 T_MaterialState,
 T_MemoizeState,
 T_SortState,
 T_IncrementalSortState,
 T_GroupState,
 T_AggState,
 T_WindowAggState,
 T_UniqueState,
 T_GatherState,
 T_GatherMergeState,
 T_HashState,
 T_SetOpState,
 T_LockRowsState,
 T_LimitState,




 T_Alias,
 T_RangeVar,
 T_TableFunc,
 T_Expr,
 T_Var,
 T_Const,
 T_Param,
 T_Aggref,
 T_GroupingFunc,
 T_WindowFunc,
 T_SubscriptingRef,
 T_FuncExpr,
 T_NamedArgExpr,
 T_OpExpr,
 T_DistinctExpr,
 T_NullIfExpr,
 T_ScalarArrayOpExpr,
 T_BoolExpr,
 T_SubLink,
 T_SubPlan,
 T_AlternativeSubPlan,
 T_FieldSelect,
 T_FieldStore,
 T_RelabelType,
 T_CoerceViaIO,
 T_ArrayCoerceExpr,
 T_ConvertRowtypeExpr,
 T_CollateExpr,
 T_CaseExpr,
 T_CaseWhen,
 T_CaseTestExpr,
 T_ArrayExpr,
 T_RowExpr,
 T_RowCompareExpr,
 T_CoalesceExpr,
 T_MinMaxExpr,
 T_SQLValueFunction,
 T_XmlExpr,
 T_NullTest,
 T_BooleanTest,
 T_CoerceToDomain,
 T_CoerceToDomainValue,
 T_SetToDefault,
 T_CurrentOfExpr,
 T_NextValueExpr,
 T_InferenceElem,
 T_TargetEntry,
 T_RangeTblRef,
 T_JoinExpr,
 T_FromExpr,
 T_OnConflictExpr,
 T_IntoClause,
# 215 "/usr/include/postgresql/14/server/nodes/nodes.h"
 T_ExprState,
 T_WindowFuncExprState,
 T_SetExprState,
 T_SubPlanState,
 T_DomainConstraintState,




 T_PlannerInfo,
 T_PlannerGlobal,
 T_RelOptInfo,
 T_IndexOptInfo,
 T_ForeignKeyOptInfo,
 T_ParamPathInfo,
 T_Path,
 T_IndexPath,
 T_BitmapHeapPath,
 T_BitmapAndPath,
 T_BitmapOrPath,
 T_TidPath,
 T_TidRangePath,
 T_SubqueryScanPath,
 T_ForeignPath,
 T_CustomPath,
 T_NestPath,
 T_MergePath,
 T_HashPath,
 T_AppendPath,
 T_MergeAppendPath,
 T_GroupResultPath,
 T_MaterialPath,
 T_MemoizePath,
 T_UniquePath,
 T_GatherPath,
 T_GatherMergePath,
 T_ProjectionPath,
 T_ProjectSetPath,
 T_SortPath,
 T_IncrementalSortPath,
 T_GroupPath,
 T_UpperUniquePath,
 T_AggPath,
 T_GroupingSetsPath,
 T_MinMaxAggPath,
 T_WindowAggPath,
 T_SetOpPath,
 T_RecursiveUnionPath,
 T_LockRowsPath,
 T_ModifyTablePath,
 T_LimitPath,

 T_EquivalenceClass,
 T_EquivalenceMember,
 T_PathKey,
 T_PathTarget,
 T_RestrictInfo,
 T_IndexClause,
 T_PlaceHolderVar,
 T_SpecialJoinInfo,
 T_AppendRelInfo,
 T_RowIdentityVarInfo,
 T_PlaceHolderInfo,
 T_MinMaxAggInfo,
 T_PlannerParamItem,
 T_RollupData,
 T_GroupingSetData,
 T_StatisticExtInfo,




 T_MemoryContext,
 T_AllocSetContext,
 T_SlabContext,
 T_GenerationContext,




 T_Value,
 T_Integer,
 T_Float,
 T_String,
 T_BitString,
 T_Null,




 T_List,
 T_IntList,
 T_OidList,




 T_ExtensibleNode,




 T_RawStmt,
 T_Query,
 T_PlannedStmt,
 T_InsertStmt,
 T_DeleteStmt,
 T_UpdateStmt,
 T_SelectStmt,
 T_ReturnStmt,
 T_PLAssignStmt,
 T_AlterTableStmt,
 T_AlterTableCmd,
 T_AlterDomainStmt,
 T_SetOperationStmt,
 T_GrantStmt,
 T_GrantRoleStmt,
 T_AlterDefaultPrivilegesStmt,
 T_ClosePortalStmt,
 T_ClusterStmt,
 T_CopyStmt,
 T_CreateStmt,
 T_DefineStmt,
 T_DropStmt,
 T_TruncateStmt,
 T_CommentStmt,
 T_FetchStmt,
 T_IndexStmt,
 T_CreateFunctionStmt,
 T_AlterFunctionStmt,
 T_DoStmt,
 T_RenameStmt,
 T_RuleStmt,
 T_NotifyStmt,
 T_ListenStmt,
 T_UnlistenStmt,
 T_TransactionStmt,
 T_ViewStmt,
 T_LoadStmt,
 T_CreateDomainStmt,
 T_CreatedbStmt,
 T_DropdbStmt,
 T_VacuumStmt,
 T_ExplainStmt,
 T_CreateTableAsStmt,
 T_CreateSeqStmt,
 T_AlterSeqStmt,
 T_VariableSetStmt,
 T_VariableShowStmt,
 T_DiscardStmt,
 T_CreateTrigStmt,
 T_CreatePLangStmt,
 T_CreateRoleStmt,
 T_AlterRoleStmt,
 T_DropRoleStmt,
 T_LockStmt,
 T_ConstraintsSetStmt,
 T_ReindexStmt,
 T_CheckPointStmt,
 T_CreateSchemaStmt,
 T_AlterDatabaseStmt,
 T_AlterDatabaseSetStmt,
 T_AlterRoleSetStmt,
 T_CreateConversionStmt,
 T_CreateCastStmt,
 T_CreateOpClassStmt,
 T_CreateOpFamilyStmt,
 T_AlterOpFamilyStmt,
 T_PrepareStmt,
 T_ExecuteStmt,
 T_DeallocateStmt,
 T_DeclareCursorStmt,
 T_CreateTableSpaceStmt,
 T_DropTableSpaceStmt,
 T_AlterObjectDependsStmt,
 T_AlterObjectSchemaStmt,
 T_AlterOwnerStmt,
 T_AlterOperatorStmt,
 T_AlterTypeStmt,
 T_DropOwnedStmt,
 T_ReassignOwnedStmt,
 T_CompositeTypeStmt,
 T_CreateEnumStmt,
 T_CreateRangeStmt,
 T_AlterEnumStmt,
 T_AlterTSDictionaryStmt,
 T_AlterTSConfigurationStmt,
 T_CreateFdwStmt,
 T_AlterFdwStmt,
 T_CreateForeignServerStmt,
 T_AlterForeignServerStmt,
 T_CreateUserMappingStmt,
 T_AlterUserMappingStmt,
 T_DropUserMappingStmt,
 T_AlterTableSpaceOptionsStmt,
 T_AlterTableMoveAllStmt,
 T_SecLabelStmt,
 T_CreateForeignTableStmt,
 T_ImportForeignSchemaStmt,
 T_CreateExtensionStmt,
 T_AlterExtensionStmt,
 T_AlterExtensionContentsStmt,
 T_CreateEventTrigStmt,
 T_AlterEventTrigStmt,
 T_RefreshMatViewStmt,
 T_ReplicaIdentityStmt,
 T_AlterSystemStmt,
 T_CreatePolicyStmt,
 T_AlterPolicyStmt,
 T_CreateTransformStmt,
 T_CreateAmStmt,
 T_CreatePublicationStmt,
 T_AlterPublicationStmt,
 T_CreateSubscriptionStmt,
 T_AlterSubscriptionStmt,
 T_DropSubscriptionStmt,
 T_CreateStatsStmt,
 T_AlterCollationStmt,
 T_CallStmt,
 T_AlterStatsStmt,




 T_A_Expr,
 T_ColumnRef,
 T_ParamRef,
 T_A_Const,
 T_FuncCall,
 T_A_Star,
 T_A_Indices,
 T_A_Indirection,
 T_A_ArrayExpr,
 T_ResTarget,
 T_MultiAssignRef,
 T_TypeCast,
 T_CollateClause,
 T_SortBy,
 T_WindowDef,
 T_RangeSubselect,
 T_RangeFunction,
 T_RangeTableSample,
 T_RangeTableFunc,
 T_RangeTableFuncCol,
 T_TypeName,
 T_ColumnDef,
 T_IndexElem,
 T_StatsElem,
 T_Constraint,
 T_DefElem,
 T_RangeTblEntry,
 T_RangeTblFunction,
 T_TableSampleClause,
 T_WithCheckOption,
 T_SortGroupClause,
 T_GroupingSet,
 T_WindowClause,
 T_ObjectWithArgs,
 T_AccessPriv,
 T_CreateOpClassItem,
 T_TableLikeClause,
 T_FunctionParameter,
 T_LockingClause,
 T_RowMarkClause,
 T_XmlSerialize,
 T_WithClause,
 T_InferClause,
 T_OnConflictClause,
 T_CTESearchClause,
 T_CTECycleClause,
 T_CommonTableExpr,
 T_RoleSpec,
 T_TriggerTransition,
 T_PartitionElem,
 T_PartitionSpec,
 T_PartitionBoundSpec,
 T_PartitionRangeDatum,
 T_PartitionCmd,
 T_VacuumRelation,




 T_IdentifySystemCmd,
 T_BaseBackupCmd,
 T_CreateReplicationSlotCmd,
 T_DropReplicationSlotCmd,
 T_StartReplicationCmd,
 T_TimeLineHistoryCmd,
 T_SQLCmd,
# 514 "/usr/include/postgresql/14/server/nodes/nodes.h"
 T_TriggerData,
 T_EventTriggerData,
 T_ReturnSetInfo,
 T_WindowObjectData,
 T_TIDBitmap,
 T_InlineCodeBlock,
 T_FdwRoutine,
 T_IndexAmRoutine,
 T_TableAmRoutine,
 T_TsmRoutine,
 T_ForeignKeyCacheInfo,
 T_CallContext,
 T_SupportRequestSimplify,
 T_SupportRequestSelectivity,
 T_SupportRequestCost,
 T_SupportRequestRows,
 T_SupportRequestIndexCondition
} NodeTag;







typedef struct Node
{
 NodeTag type;
} Node;
# 620 "/usr/include/postgresql/14/server/nodes/nodes.h"
struct Bitmapset;
struct StringInfoData;

extern void outNode(struct StringInfoData *str, const void *obj);
extern void outToken(struct StringInfoData *str, const char *s);
extern void outBitmapset(struct StringInfoData *str,
       const struct Bitmapset *bms);
extern void outDatum(struct StringInfoData *str, uintptr_t value,
      int typlen, 
# 628 "/usr/include/postgresql/14/server/nodes/nodes.h" 3 4
                 _Bool 
# 628 "/usr/include/postgresql/14/server/nodes/nodes.h"
                      typbyval);
extern char *nodeToString(const void *obj);
extern char *bmsToString(const struct Bitmapset *bms);




extern void *stringToNode(const char *str);



extern struct Bitmapset *readBitmapset(void);
extern uintptr_t readDatum(
# 640 "/usr/include/postgresql/14/server/nodes/nodes.h" 3 4
                          _Bool 
# 640 "/usr/include/postgresql/14/server/nodes/nodes.h"
                               typbyval);
extern 
# 641 "/usr/include/postgresql/14/server/nodes/nodes.h" 3 4
      _Bool 
# 641 "/usr/include/postgresql/14/server/nodes/nodes.h"
           *readBoolCols(int numCols);
extern int *readIntCols(int numCols);
extern Oid *readOidCols(int numCols);
extern int16 *readAttrNumberCols(int numCols);




extern void *copyObjectImpl(const void *obj);
# 661 "/usr/include/postgresql/14/server/nodes/nodes.h"
extern 
# 661 "/usr/include/postgresql/14/server/nodes/nodes.h" 3 4
      _Bool 
# 661 "/usr/include/postgresql/14/server/nodes/nodes.h"
           equal(const void *a, const void *b);
# 672 "/usr/include/postgresql/14/server/nodes/nodes.h"
typedef double Selectivity;
typedef double Cost;
# 682 "/usr/include/postgresql/14/server/nodes/nodes.h"
typedef enum CmdType
{
 CMD_UNKNOWN,
 CMD_SELECT,
 CMD_UPDATE,
 CMD_INSERT,
 CMD_DELETE,
 CMD_UTILITY,

 CMD_NOTHING

} CmdType;
# 706 "/usr/include/postgresql/14/server/nodes/nodes.h"
typedef enum JoinType
{




 JOIN_INNER,
 JOIN_LEFT,
 JOIN_FULL,
 JOIN_RIGHT,
# 726 "/usr/include/postgresql/14/server/nodes/nodes.h"
 JOIN_SEMI,
 JOIN_ANTI,





 JOIN_UNIQUE_OUTER,
 JOIN_UNIQUE_INNER




} JoinType;
# 768 "/usr/include/postgresql/14/server/nodes/nodes.h"
typedef enum AggStrategy
{
 AGG_PLAIN,
 AGG_SORTED,
 AGG_HASHED,
 AGG_MIXED
} AggStrategy;
# 790 "/usr/include/postgresql/14/server/nodes/nodes.h"
typedef enum AggSplit
{

 AGGSPLIT_SIMPLE = 0,

 AGGSPLIT_INITIAL_SERIAL = 0x02 | 0x04,

 AGGSPLIT_FINAL_DESERIAL = 0x01 | 0x08
} AggSplit;
# 812 "/usr/include/postgresql/14/server/nodes/nodes.h"
typedef enum SetOpCmd
{
 SETOPCMD_INTERSECT,
 SETOPCMD_INTERSECT_ALL,
 SETOPCMD_EXCEPT,
 SETOPCMD_EXCEPT_ALL
} SetOpCmd;

typedef enum SetOpStrategy
{
 SETOP_SORTED,
 SETOP_HASHED
} SetOpStrategy;







typedef enum OnConflictAction
{
 ONCONFLICT_NONE,
 ONCONFLICT_NOTHING,
 ONCONFLICT_UPDATE
} OnConflictAction;







typedef enum LimitOption
{
 LIMIT_OPTION_COUNT,
 LIMIT_OPTION_WITH_TIES,
 LIMIT_OPTION_DEFAULT,
} LimitOption;
# 41 "/usr/include/postgresql/14/server/nodes/pg_list.h" 2


typedef union ListCell
{
 void *ptr_value;
 int int_value;
 Oid oid_value;
} ListCell;

typedef struct List
{
 NodeTag type;
 int length;
 int max_length;
 ListCell *elements;

 ListCell initial_elements[];

} List;
# 70 "/usr/include/postgresql/14/server/nodes/pg_list.h"
typedef struct ForEachState
{
 const List *l;
 int i;
} ForEachState;

typedef struct ForBothState
{
 const List *l1;
 const List *l2;
 int i;
} ForBothState;

typedef struct ForBothCellState
{
 const List *l1;
 const List *l2;
 int i1;
 int i2;
} ForBothCellState;

typedef struct ForThreeState
{
 const List *l1;
 const List *l2;
 const List *l3;
 int i;
} ForThreeState;

typedef struct ForFourState
{
 const List *l1;
 const List *l2;
 const List *l3;
 const List *l4;
 int i;
} ForFourState;

typedef struct ForFiveState
{
 const List *l1;
 const List *l2;
 const List *l3;
 const List *l4;
 const List *l5;
 int i;
} ForFiveState;







static inline ListCell *
list_head(const List *l)
{
 return l ? &l->elements[0] : 
# 127 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
                             ((void *)0)
# 127 "/usr/include/postgresql/14/server/nodes/pg_list.h"
                                 ;
}


static inline ListCell *
list_tail(const List *l)
{
 return l ? &l->elements[l->length - 1] : 
# 134 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
                                         ((void *)0)
# 134 "/usr/include/postgresql/14/server/nodes/pg_list.h"
                                             ;
}


static inline ListCell *
list_second_cell(const List *l)
{
 if (l && l->length >= 2)
  return &l->elements[1];
 else
  return 
# 144 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
        ((void *)0)
# 144 "/usr/include/postgresql/14/server/nodes/pg_list.h"
            ;
}


static inline int
list_length(const List *l)
{
 return l ? l->length : 0;
}
# 255 "/usr/include/postgresql/14/server/nodes/pg_list.h"
static inline ListCell *
list_nth_cell(const List *list, int n)
{
 ((void)
# 258 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
1
# 258 "/usr/include/postgresql/14/server/nodes/pg_list.h"
);
 ((void)
# 259 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
1
# 259 "/usr/include/postgresql/14/server/nodes/pg_list.h"
);
 return &list->elements[n];
}




static inline ListCell *
list_last_cell(const List *list)
{
 ((void)
# 269 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
1
# 269 "/usr/include/postgresql/14/server/nodes/pg_list.h"
);
 return &list->elements[list->length - 1];
}





static inline void *
list_nth(const List *list, int n)
{
 ((void)
# 280 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
1
# 280 "/usr/include/postgresql/14/server/nodes/pg_list.h"
);
 return ((list_nth_cell(list, n))->ptr_value);
}





static inline int
list_nth_int(const List *list, int n)
{
 ((void)
# 291 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
1
# 291 "/usr/include/postgresql/14/server/nodes/pg_list.h"
);
 return ((list_nth_cell(list, n))->int_value);
}





static inline Oid
list_nth_oid(const List *list, int n)
{
 ((void)
# 302 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
1
# 302 "/usr/include/postgresql/14/server/nodes/pg_list.h"
);
 return ((list_nth_cell(list, n))->oid_value);
}






static inline int
list_cell_number(const List *l, const ListCell *c)
{
 ((void)
# 314 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
1
# 314 "/usr/include/postgresql/14/server/nodes/pg_list.h"
);
 return c - l->elements;
}




static inline ListCell *
lnext(const List *l, const ListCell *c)
{
 ((void)
# 324 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
1
# 324 "/usr/include/postgresql/14/server/nodes/pg_list.h"
);
 c++;
 if (c < &l->elements[l->length])
  return (ListCell *) c;
 else
  return 
# 329 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
        ((void *)0)
# 329 "/usr/include/postgresql/14/server/nodes/pg_list.h"
            ;
}
# 401 "/usr/include/postgresql/14/server/nodes/pg_list.h"
static inline ForEachState
for_each_from_setup(const List *lst, int N)
{
 ForEachState r = {lst, N};

 ((void)
# 406 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
1
# 406 "/usr/include/postgresql/14/server/nodes/pg_list.h"
);
 return r;
}
# 425 "/usr/include/postgresql/14/server/nodes/pg_list.h"
static inline ForEachState
for_each_cell_setup(const List *lst, const ListCell *initcell)
{
 ForEachState r = {lst,
 initcell ? list_cell_number(lst, initcell) : list_length(lst)};

 return r;
}
# 476 "/usr/include/postgresql/14/server/nodes/pg_list.h"
static inline ForBothCellState
for_both_cell_setup(const List *list1, const ListCell *initcell1,
     const List *list2, const ListCell *initcell2)
{
 ForBothCellState r = {list1, list2,
  initcell1 ? list_cell_number(list1, initcell1) : list_length(list1),
 initcell2 ? list_cell_number(list2, initcell2) : list_length(list2)};

 return r;
}
# 529 "/usr/include/postgresql/14/server/nodes/pg_list.h"
extern List *list_make1_impl(NodeTag t, ListCell datum1);
extern List *list_make2_impl(NodeTag t, ListCell datum1, ListCell datum2);
extern List *list_make3_impl(NodeTag t, ListCell datum1, ListCell datum2,
        ListCell datum3);
extern List *list_make4_impl(NodeTag t, ListCell datum1, ListCell datum2,
        ListCell datum3, ListCell datum4);
extern List *list_make5_impl(NodeTag t, ListCell datum1, ListCell datum2,
        ListCell datum3, ListCell datum4,
        ListCell datum5);

extern __attribute__((warn_unused_result)) List *lappend(List *list, void *datum);
extern __attribute__((warn_unused_result)) List *lappend_int(List *list, int datum);
extern __attribute__((warn_unused_result)) List *lappend_oid(List *list, Oid datum);

extern __attribute__((warn_unused_result)) List *list_insert_nth(List *list, int pos, void *datum);
extern __attribute__((warn_unused_result)) List *list_insert_nth_int(List *list, int pos, int datum);
extern __attribute__((warn_unused_result)) List *list_insert_nth_oid(List *list, int pos, Oid datum);

extern __attribute__((warn_unused_result)) List *lcons(void *datum, List *list);
extern __attribute__((warn_unused_result)) List *lcons_int(int datum, List *list);
extern __attribute__((warn_unused_result)) List *lcons_oid(Oid datum, List *list);

extern __attribute__((warn_unused_result)) List *list_concat(List *list1, const List *list2);
extern __attribute__((warn_unused_result)) List *list_concat_copy(const List *list1, const List *list2);

extern __attribute__((warn_unused_result)) List *list_truncate(List *list, int new_size);

extern 
# 556 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
      _Bool 
# 556 "/usr/include/postgresql/14/server/nodes/pg_list.h"
           list_member(const List *list, const void *datum);
extern 
# 557 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
      _Bool 
# 557 "/usr/include/postgresql/14/server/nodes/pg_list.h"
           list_member_ptr(const List *list, const void *datum);
extern 
# 558 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
      _Bool 
# 558 "/usr/include/postgresql/14/server/nodes/pg_list.h"
           list_member_int(const List *list, int datum);
extern 
# 559 "/usr/include/postgresql/14/server/nodes/pg_list.h" 3 4
      _Bool 
# 559 "/usr/include/postgresql/14/server/nodes/pg_list.h"
           list_member_oid(const List *list, Oid datum);

extern __attribute__((warn_unused_result)) List *list_delete(List *list, void *datum);
extern __attribute__((warn_unused_result)) List *list_delete_ptr(List *list, void *datum);
extern __attribute__((warn_unused_result)) List *list_delete_int(List *list, int datum);
extern __attribute__((warn_unused_result)) List *list_delete_oid(List *list, Oid datum);
extern __attribute__((warn_unused_result)) List *list_delete_first(List *list);
extern __attribute__((warn_unused_result)) List *list_delete_last(List *list);
extern __attribute__((warn_unused_result)) List *list_delete_first_n(List *list, int n);
extern __attribute__((warn_unused_result)) List *list_delete_nth_cell(List *list, int n);
extern __attribute__((warn_unused_result)) List *list_delete_cell(List *list, ListCell *cell);

extern List *list_union(const List *list1, const List *list2);
extern List *list_union_ptr(const List *list1, const List *list2);
extern List *list_union_int(const List *list1, const List *list2);
extern List *list_union_oid(const List *list1, const List *list2);

extern List *list_intersection(const List *list1, const List *list2);
extern List *list_intersection_int(const List *list1, const List *list2);



extern List *list_difference(const List *list1, const List *list2);
extern List *list_difference_ptr(const List *list1, const List *list2);
extern List *list_difference_int(const List *list1, const List *list2);
extern List *list_difference_oid(const List *list1, const List *list2);

extern __attribute__((warn_unused_result)) List *list_append_unique(List *list, void *datum);
extern __attribute__((warn_unused_result)) List *list_append_unique_ptr(List *list, void *datum);
extern __attribute__((warn_unused_result)) List *list_append_unique_int(List *list, int datum);
extern __attribute__((warn_unused_result)) List *list_append_unique_oid(List *list, Oid datum);

extern __attribute__((warn_unused_result)) List *list_concat_unique(List *list1, const List *list2);
extern __attribute__((warn_unused_result)) List *list_concat_unique_ptr(List *list1, const List *list2);
extern __attribute__((warn_unused_result)) List *list_concat_unique_int(List *list1, const List *list2);
extern __attribute__((warn_unused_result)) List *list_concat_unique_oid(List *list1, const List *list2);

extern void list_deduplicate_oid(List *list);

extern void list_free(List *list);
extern void list_free_deep(List *list);

extern __attribute__((warn_unused_result)) List *list_copy(const List *list);
extern __attribute__((warn_unused_result)) List *list_copy_tail(const List *list, int nskip);
extern __attribute__((warn_unused_result)) List *list_copy_deep(const List *oldlist);

typedef int (*list_sort_comparator) (const ListCell *a, const ListCell *b);
extern void list_sort(List *list, list_sort_comparator cmp);

extern int list_int_cmp(const ListCell *p1, const ListCell *p2);
extern int list_oid_cmp(const ListCell *p1, const ListCell *p2);
# 20 "/usr/include/postgresql/14/server/access/tupdesc.h" 2


typedef struct AttrDefault
{
 AttrNumber adnum;
 char *adbin;
} AttrDefault;

typedef struct ConstrCheck
{
 char *ccname;
 char *ccbin;
 
# 32 "/usr/include/postgresql/14/server/access/tupdesc.h" 3 4
_Bool 
# 32 "/usr/include/postgresql/14/server/access/tupdesc.h"
      ccvalid;
 
# 33 "/usr/include/postgresql/14/server/access/tupdesc.h" 3 4
_Bool 
# 33 "/usr/include/postgresql/14/server/access/tupdesc.h"
      ccnoinherit;
} ConstrCheck;


typedef struct TupleConstr
{
 AttrDefault *defval;
 ConstrCheck *check;
 struct AttrMissing *missing;
 uint16 num_defval;
 uint16 num_check;
 
# 44 "/usr/include/postgresql/14/server/access/tupdesc.h" 3 4
_Bool 
# 44 "/usr/include/postgresql/14/server/access/tupdesc.h"
      has_not_null;
 
# 45 "/usr/include/postgresql/14/server/access/tupdesc.h" 3 4
_Bool 
# 45 "/usr/include/postgresql/14/server/access/tupdesc.h"
      has_generated_stored;
} TupleConstr;
# 79 "/usr/include/postgresql/14/server/access/tupdesc.h"
typedef struct TupleDescData
{
 int natts;
 Oid tdtypeid;
 int32 tdtypmod;
 int tdrefcount;
 TupleConstr *constr;

 FormData_pg_attribute attrs[];
} TupleDescData;
typedef struct TupleDescData *TupleDesc;




extern TupleDesc CreateTemplateTupleDesc(int natts);

extern TupleDesc CreateTupleDesc(int natts, Form_pg_attribute *attrs);

extern TupleDesc CreateTupleDescCopy(TupleDesc tupdesc);

extern TupleDesc CreateTupleDescCopyConstr(TupleDesc tupdesc);





extern void TupleDescCopy(TupleDesc dst, TupleDesc src);

extern void TupleDescCopyEntry(TupleDesc dst, AttrNumber dstAttno,
          TupleDesc src, AttrNumber srcAttno);

extern void FreeTupleDesc(TupleDesc tupdesc);

extern void IncrTupleDescRefCount(TupleDesc tupdesc);
extern void DecrTupleDescRefCount(TupleDesc tupdesc);
# 128 "/usr/include/postgresql/14/server/access/tupdesc.h"
extern 
# 128 "/usr/include/postgresql/14/server/access/tupdesc.h" 3 4
      _Bool 
# 128 "/usr/include/postgresql/14/server/access/tupdesc.h"
           equalTupleDescs(TupleDesc tupdesc1, TupleDesc tupdesc2);

extern uint32 hashTupleDesc(TupleDesc tupdesc);

extern void TupleDescInitEntry(TupleDesc desc,
          AttrNumber attributeNumber,
          const char *attributeName,
          Oid oidtypeid,
          int32 typmod,
          int attdim);

extern void TupleDescInitBuiltinEntry(TupleDesc desc,
           AttrNumber attributeNumber,
           const char *attributeName,
           Oid oidtypeid,
           int32 typmod,
           int attdim);

extern void TupleDescInitEntryCollation(TupleDesc desc,
          AttrNumber attributeNumber,
          Oid collationid);

extern TupleDesc BuildDescForRelation(List *schema);

extern TupleDesc BuildDescFromLists(List *names, List *types, List *typmods, List *collations);
# 21 "/usr/include/postgresql/14/server/funcapi.h" 2
# 1 "/usr/include/postgresql/14/server/executor/executor.h" 1
# 17 "/usr/include/postgresql/14/server/executor/executor.h"
# 1 "/usr/include/postgresql/14/server/executor/execdesc.h" 1
# 18 "/usr/include/postgresql/14/server/executor/execdesc.h"
# 1 "/usr/include/postgresql/14/server/nodes/execnodes.h" 1
# 17 "/usr/include/postgresql/14/server/nodes/execnodes.h"
# 1 "/usr/include/postgresql/14/server/access/tupconvert.h" 1
# 17 "/usr/include/postgresql/14/server/access/tupconvert.h"
# 1 "/usr/include/postgresql/14/server/access/attmap.h" 1
# 18 "/usr/include/postgresql/14/server/access/attmap.h"
# 1 "/usr/include/postgresql/14/server/access/tupdesc.h" 1
# 19 "/usr/include/postgresql/14/server/access/attmap.h" 2
# 34 "/usr/include/postgresql/14/server/access/attmap.h"
typedef struct AttrMap
{
 AttrNumber *attnums;
 int maplen;
} AttrMap;

extern AttrMap *make_attrmap(int maplen);
extern void free_attrmap(AttrMap *map);


extern AttrMap *build_attrmap_by_name(TupleDesc indesc,
           TupleDesc outdesc);
extern AttrMap *build_attrmap_by_name_if_req(TupleDesc indesc,
            TupleDesc outdesc);
extern AttrMap *build_attrmap_by_position(TupleDesc indesc,
            TupleDesc outdesc,
            const char *msg);
# 18 "/usr/include/postgresql/14/server/access/tupconvert.h" 2
# 1 "/usr/include/postgresql/14/server/access/htup.h" 1
# 17 "/usr/include/postgresql/14/server/access/htup.h"
# 1 "/usr/include/postgresql/14/server/storage/itemptr.h" 1
# 17 "/usr/include/postgresql/14/server/storage/itemptr.h"
# 1 "/usr/include/postgresql/14/server/storage/block.h" 1
# 31 "/usr/include/postgresql/14/server/storage/block.h"
typedef uint32 BlockNumber;
# 53 "/usr/include/postgresql/14/server/storage/block.h"
typedef struct BlockIdData
{
 uint16 bi_hi;
 uint16 bi_lo;
} BlockIdData;

typedef BlockIdData *BlockId;
# 18 "/usr/include/postgresql/14/server/storage/itemptr.h" 2
# 1 "/usr/include/postgresql/14/server/storage/off.h" 1
# 17 "/usr/include/postgresql/14/server/storage/off.h"
# 1 "/usr/include/postgresql/14/server/storage/itemid.h" 1
# 25 "/usr/include/postgresql/14/server/storage/itemid.h"
typedef struct ItemIdData
{
 unsigned lp_off:15,
    lp_flags:2,
    lp_len:15;
} ItemIdData;

typedef ItemIdData *ItemId;
# 47 "/usr/include/postgresql/14/server/storage/itemid.h"
typedef uint16 ItemOffset;
typedef uint16 ItemLength;
# 18 "/usr/include/postgresql/14/server/storage/off.h" 2






typedef uint16 OffsetNumber;
# 19 "/usr/include/postgresql/14/server/storage/itemptr.h" 2
# 36 "/usr/include/postgresql/14/server/storage/itemptr.h"
typedef struct ItemPointerData
{
 BlockIdData ip_blkid;
 OffsetNumber ip_posid;
}



   __attribute__((packed))
   __attribute__((aligned(2)))

ItemPointerData;

typedef ItemPointerData *ItemPointer;
# 203 "/usr/include/postgresql/14/server/storage/itemptr.h"
extern 
# 203 "/usr/include/postgresql/14/server/storage/itemptr.h" 3 4
      _Bool 
# 203 "/usr/include/postgresql/14/server/storage/itemptr.h"
           ItemPointerEquals(ItemPointer pointer1, ItemPointer pointer2);
extern int32 ItemPointerCompare(ItemPointer arg1, ItemPointer arg2);
extern void ItemPointerInc(ItemPointer pointer);
extern void ItemPointerDec(ItemPointer pointer);
# 18 "/usr/include/postgresql/14/server/access/htup.h" 2



typedef struct HeapTupleHeaderData HeapTupleHeaderData;

typedef HeapTupleHeaderData *HeapTupleHeader;

typedef struct MinimalTupleData MinimalTupleData;

typedef MinimalTupleData *MinimalTuple;
# 62 "/usr/include/postgresql/14/server/access/htup.h"
typedef struct HeapTupleData
{
 uint32 t_len;
 ItemPointerData t_self;
 Oid t_tableOid;

 HeapTupleHeader t_data;
} HeapTupleData;

typedef HeapTupleData *HeapTuple;
# 81 "/usr/include/postgresql/14/server/access/htup.h"
extern CommandId HeapTupleHeaderGetCmin(HeapTupleHeader tup);
extern CommandId HeapTupleHeaderGetCmax(HeapTupleHeader tup);
extern void HeapTupleHeaderAdjustCmax(HeapTupleHeader tup,
           CommandId *cmax, 
# 84 "/usr/include/postgresql/14/server/access/htup.h" 3 4
                           _Bool 
# 84 "/usr/include/postgresql/14/server/access/htup.h"
                                *iscombo);


extern TransactionId HeapTupleGetUpdateXid(HeapTupleHeader tuple);
# 19 "/usr/include/postgresql/14/server/access/tupconvert.h" 2

# 1 "/usr/include/postgresql/14/server/executor/tuptable.h" 1
# 18 "/usr/include/postgresql/14/server/executor/tuptable.h"
# 1 "/usr/include/postgresql/14/server/access/htup_details.h" 1
# 18 "/usr/include/postgresql/14/server/access/htup_details.h"
# 1 "/usr/include/postgresql/14/server/access/transam.h" 1
# 17 "/usr/include/postgresql/14/server/access/transam.h"
# 1 "/usr/include/postgresql/14/server/access/xlogdefs.h" 1
# 15 "/usr/include/postgresql/14/server/access/xlogdefs.h"
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/aarch64-linux-gnu/bits/fcntl.h" 1 3 4
# 40 "/usr/include/aarch64-linux-gnu/bits/fcntl.h" 3 4

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






extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
# 448 "/usr/include/aarch64-linux-gnu/bits/fcntl-linux.h" 3 4
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
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    __dev_t __pad1;
    __off_t st_size;
    __blksize_t st_blksize;
    int __pad2;
    __blkcnt_t st_blocks;







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
# 149 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 158 "/usr/include/fcntl.h" 3 4
extern int fcntl64 (int __fd, int __cmd, ...);
# 181 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 191 "/usr/include/fcntl.h" 3 4
extern int open64 (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 205 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 216 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 227 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 237 "/usr/include/fcntl.h" 3 4
extern int creat64 (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 285 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 295 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 306 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);







# 1 "/usr/include/aarch64-linux-gnu/bits/fcntl2.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/fcntl2.h" 3 4
extern int __open_2 (const char *__path, int __oflag) __attribute__ ((__nonnull__ (1)));
extern int __open_alias (const char *__path, int __oflag, ...) __asm__ ("" "open")
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





extern int __openat_2 (int __fd, const char *__path, int __oflag)
     __attribute__ ((__nonnull__ (2)));
extern int __openat_alias (int __fd, const char *__path, int __oflag, ...) __asm__ ("" "openat")

     __attribute__ ((__nonnull__ (2)));
# 111 "/usr/include/aarch64-linux-gnu/bits/fcntl2.h" 3 4
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



# 16 "/usr/include/postgresql/14/server/access/xlogdefs.h" 2






# 21 "/usr/include/postgresql/14/server/access/xlogdefs.h"
typedef uint64 XLogRecPtr;
# 48 "/usr/include/postgresql/14/server/access/xlogdefs.h"
typedef uint64 XLogSegNo;
# 59 "/usr/include/postgresql/14/server/access/xlogdefs.h"
typedef uint32 TimeLineID;





typedef uint16 RepOriginId;
# 18 "/usr/include/postgresql/14/server/access/transam.h" 2
# 65 "/usr/include/postgresql/14/server/access/transam.h"
typedef struct FullTransactionId
{
 uint64 value;
} FullTransactionId;

static inline FullTransactionId
FullTransactionIdFromEpochAndXid(uint32 epoch, TransactionId xid)
{
 FullTransactionId result;

 result.value = ((uint64) epoch) << 32 | xid;

 return result;
}

static inline FullTransactionId
FullTransactionIdFromU64(uint64 value)
{
 FullTransactionId result;

 result.value = value;

 return result;
}
# 102 "/usr/include/postgresql/14/server/access/transam.h"
static inline void
FullTransactionIdRetreat(FullTransactionId *dest)
{
 dest->value--;






 if (((*dest).value < (FullTransactionIdFromEpochAndXid(0, ((TransactionId) 3))).value))
  return;





 while (((uint32) (*dest).value) < ((TransactionId) 3))
  dest->value--;
}





static inline void
FullTransactionIdAdvance(FullTransactionId *dest)
{
 dest->value++;


 if (((*dest).value < (FullTransactionIdFromEpochAndXid(0, ((TransactionId) 3))).value))
  return;

 while (((uint32) (*dest).value) < ((TransactionId) 3))
  dest->value++;
}
# 204 "/usr/include/postgresql/14/server/access/transam.h"
typedef struct VariableCacheData
{



 Oid nextOid;
 uint32 oidCount;




 FullTransactionId nextXid;

 TransactionId oldestXid;
 TransactionId xidVacLimit;
 TransactionId xidWarnLimit;
 TransactionId xidStopLimit;
 TransactionId xidWrapLimit;
 Oid oldestXidDB;




 TransactionId oldestCommitTsXid;
 TransactionId newestCommitTsXid;




 FullTransactionId latestCompletedXid;
# 243 "/usr/include/postgresql/14/server/access/transam.h"
 uint64 xactCompletionCount;




 TransactionId oldestClogXid;

} VariableCacheData;

typedef VariableCacheData *VariableCache;
# 261 "/usr/include/postgresql/14/server/access/transam.h"
extern 
# 261 "/usr/include/postgresql/14/server/access/transam.h" 3 4
      _Bool 
# 261 "/usr/include/postgresql/14/server/access/transam.h"
           TransactionStartedDuringRecovery(void);


extern VariableCache ShmemVariableCache;




extern 
# 269 "/usr/include/postgresql/14/server/access/transam.h" 3 4
      _Bool 
# 269 "/usr/include/postgresql/14/server/access/transam.h"
           TransactionIdDidCommit(TransactionId transactionId);
extern 
# 270 "/usr/include/postgresql/14/server/access/transam.h" 3 4
      _Bool 
# 270 "/usr/include/postgresql/14/server/access/transam.h"
           TransactionIdDidAbort(TransactionId transactionId);
extern 
# 271 "/usr/include/postgresql/14/server/access/transam.h" 3 4
      _Bool 
# 271 "/usr/include/postgresql/14/server/access/transam.h"
           TransactionIdIsKnownCompleted(TransactionId transactionId);
extern void TransactionIdCommitTree(TransactionId xid, int nxids, TransactionId *xids);
extern void TransactionIdAsyncCommitTree(TransactionId xid, int nxids, TransactionId *xids, XLogRecPtr lsn);
extern void TransactionIdAbortTree(TransactionId xid, int nxids, TransactionId *xids);
extern 
# 275 "/usr/include/postgresql/14/server/access/transam.h" 3 4
      _Bool 
# 275 "/usr/include/postgresql/14/server/access/transam.h"
           TransactionIdPrecedes(TransactionId id1, TransactionId id2);
extern 
# 276 "/usr/include/postgresql/14/server/access/transam.h" 3 4
      _Bool 
# 276 "/usr/include/postgresql/14/server/access/transam.h"
           TransactionIdPrecedesOrEquals(TransactionId id1, TransactionId id2);
extern 
# 277 "/usr/include/postgresql/14/server/access/transam.h" 3 4
      _Bool 
# 277 "/usr/include/postgresql/14/server/access/transam.h"
           TransactionIdFollows(TransactionId id1, TransactionId id2);
extern 
# 278 "/usr/include/postgresql/14/server/access/transam.h" 3 4
      _Bool 
# 278 "/usr/include/postgresql/14/server/access/transam.h"
           TransactionIdFollowsOrEquals(TransactionId id1, TransactionId id2);
extern TransactionId TransactionIdLatest(TransactionId mainxid,
           int nxids, const TransactionId *xids);
extern XLogRecPtr TransactionIdGetCommitLSN(TransactionId xid);


extern FullTransactionId GetNewTransactionId(
# 284 "/usr/include/postgresql/14/server/access/transam.h" 3 4
                                            _Bool 
# 284 "/usr/include/postgresql/14/server/access/transam.h"
                                                 isSubXact);
extern void AdvanceNextFullTransactionIdPastXid(TransactionId xid);
extern FullTransactionId ReadNextFullTransactionId(void);
extern void SetTransactionIdLimit(TransactionId oldest_datfrozenxid,
          Oid oldest_datoid);
extern void AdvanceOldestClogXid(TransactionId oldest_datfrozenxid);
extern 
# 290 "/usr/include/postgresql/14/server/access/transam.h" 3 4
      _Bool 
# 290 "/usr/include/postgresql/14/server/access/transam.h"
           ForceTransactionIdLimitUpdate(void);
extern Oid GetNewObjectId(void);
# 309 "/usr/include/postgresql/14/server/access/transam.h"
static inline TransactionId
ReadNextTransactionId(void)
{
 return ((uint32) (ReadNextFullTransactionId()).value);
}


static inline TransactionId
TransactionIdRetreatedBy(TransactionId xid, uint32 amount)
{
 xid -= amount;

 while (xid < ((TransactionId) 3))
  xid--;

 return xid;
}


static inline TransactionId
TransactionIdOlder(TransactionId a, TransactionId b)
{
 if (!((a) != ((TransactionId) 0)))
  return b;

 if (!((b) != ((TransactionId) 0)))
  return a;

 if (TransactionIdPrecedes(a, b))
  return a;
 return b;
}


static inline TransactionId
NormalTransactionIdOlder(TransactionId a, TransactionId b)
{
 ((void)
# 346 "/usr/include/postgresql/14/server/access/transam.h" 3 4
1
# 346 "/usr/include/postgresql/14/server/access/transam.h"
);
 ((void)
# 347 "/usr/include/postgresql/14/server/access/transam.h" 3 4
1
# 347 "/usr/include/postgresql/14/server/access/transam.h"
);
 if ((((void)
# 348 "/usr/include/postgresql/14/server/access/transam.h" 3 4
    1
# 348 "/usr/include/postgresql/14/server/access/transam.h"
    ), (int32) ((a) - (b)) < 0))
  return a;
 return b;
}


static inline FullTransactionId
FullTransactionIdNewer(FullTransactionId a, FullTransactionId b)
{
 if (!((((uint32) (a).value)) != ((TransactionId) 0)))
  return b;

 if (!((((uint32) (b).value)) != ((TransactionId) 0)))
  return a;

 if (((a).value > (b).value))
  return a;
 return b;
}
# 19 "/usr/include/postgresql/14/server/access/htup_details.h" 2

# 1 "/usr/include/postgresql/14/server/access/tupmacs.h" 1
# 17 "/usr/include/postgresql/14/server/access/tupmacs.h"
# 1 "/usr/include/postgresql/14/server/catalog/pg_type_d.h" 1
# 18 "/usr/include/postgresql/14/server/access/tupmacs.h" 2
# 21 "/usr/include/postgresql/14/server/access/htup_details.h" 2
# 1 "/usr/include/postgresql/14/server/storage/bufpage.h" 1
# 19 "/usr/include/postgresql/14/server/storage/bufpage.h"
# 1 "/usr/include/postgresql/14/server/storage/item.h" 1
# 17 "/usr/include/postgresql/14/server/storage/item.h"
typedef Pointer Item;
# 20 "/usr/include/postgresql/14/server/storage/bufpage.h" 2
# 78 "/usr/include/postgresql/14/server/storage/bufpage.h"
typedef Pointer Page;
# 87 "/usr/include/postgresql/14/server/storage/bufpage.h"
typedef uint16 LocationIndex;






typedef struct
{
 uint32 xlogid;
 uint32 xrecoff;
} PageXLogRecPtr;
# 151 "/usr/include/postgresql/14/server/storage/bufpage.h"
typedef struct PageHeaderData
{

 PageXLogRecPtr pd_lsn;

 uint16 pd_checksum;
 uint16 pd_flags;
 LocationIndex pd_lower;
 LocationIndex pd_upper;
 LocationIndex pd_special;
 uint16 pd_pagesize_version;
 TransactionId pd_prune_xid;
 ItemIdData pd_linp[];
} PageHeaderData;

typedef PageHeaderData *PageHeader;
# 312 "/usr/include/postgresql/14/server/storage/bufpage.h"
static inline 
# 312 "/usr/include/postgresql/14/server/storage/bufpage.h" 3 4
             _Bool

# 313 "/usr/include/postgresql/14/server/storage/bufpage.h"
PageValidateSpecialPointer(Page page)
{
 ((void)
# 315 "/usr/include/postgresql/14/server/storage/bufpage.h" 3 4
1
# 315 "/usr/include/postgresql/14/server/storage/bufpage.h"
);
 ((void)
# 316 "/usr/include/postgresql/14/server/storage/bufpage.h" 3 4
1
# 316 "/usr/include/postgresql/14/server/storage/bufpage.h"
);
 ((void)
# 317 "/usr/include/postgresql/14/server/storage/bufpage.h" 3 4
1
# 317 "/usr/include/postgresql/14/server/storage/bufpage.h"
);

 return 
# 319 "/usr/include/postgresql/14/server/storage/bufpage.h" 3 4
       1
# 319 "/usr/include/postgresql/14/server/storage/bufpage.h"
           ;
}
# 432 "/usr/include/postgresql/14/server/storage/bufpage.h"
_Static_assert(8192 == ((8192 / sizeof(size_t)) * sizeof(size_t)), "BLCKSZ has to be a multiple of sizeof(size_t)")
                                                     ;

extern void PageInit(Page page, Size pageSize, Size specialSize);
extern 
# 436 "/usr/include/postgresql/14/server/storage/bufpage.h" 3 4
      _Bool 
# 436 "/usr/include/postgresql/14/server/storage/bufpage.h"
           PageIsVerifiedExtended(Page page, BlockNumber blkno, int flags);
extern OffsetNumber PageAddItemExtended(Page page, Item item, Size size,
          OffsetNumber offsetNumber, int flags);
extern Page PageGetTempPage(Page page);
extern Page PageGetTempPageCopy(Page page);
extern Page PageGetTempPageCopySpecial(Page page);
extern void PageRestoreTempPage(Page tempPage, Page oldPage);
extern void PageRepairFragmentation(Page page);
extern void PageTruncateLinePointerArray(Page page);
extern Size PageGetFreeSpace(Page page);
extern Size PageGetFreeSpaceForMultipleTuples(Page page, int ntups);
extern Size PageGetExactFreeSpace(Page page);
extern Size PageGetHeapFreeSpace(Page page);
extern void PageIndexTupleDelete(Page page, OffsetNumber offset);
extern void PageIndexMultiDelete(Page page, OffsetNumber *itemnos, int nitems);
extern void PageIndexTupleDeleteNoCompact(Page page, OffsetNumber offset);
extern 
# 452 "/usr/include/postgresql/14/server/storage/bufpage.h" 3 4
      _Bool 
# 452 "/usr/include/postgresql/14/server/storage/bufpage.h"
           PageIndexTupleOverwrite(Page page, OffsetNumber offnum,
         Item newtup, Size newsize);
extern char *PageSetChecksumCopy(Page page, BlockNumber blkno);
extern void PageSetChecksumInplace(Page page, BlockNumber blkno);
# 22 "/usr/include/postgresql/14/server/access/htup_details.h" 2
# 121 "/usr/include/postgresql/14/server/access/htup_details.h"
typedef struct HeapTupleFields
{
 TransactionId t_xmin;
 TransactionId t_xmax;

 union
 {
  CommandId t_cid;
  TransactionId t_xvac;
 } t_field3;
} HeapTupleFields;

typedef struct DatumTupleFields
{
 int32 datum_len_;

 int32 datum_typmod;

 Oid datum_typeid;
# 150 "/usr/include/postgresql/14/server/access/htup_details.h"
} DatumTupleFields;

struct HeapTupleHeaderData
{
 union
 {
  HeapTupleFields t_heap;
  DatumTupleFields t_datum;
 } t_choice;

 ItemPointerData t_ctid;





 uint16 t_infomask2;


 uint16 t_infomask;


 uint8 t_hoff;




 bits8 t_bits[];


};
# 625 "/usr/include/postgresql/14/server/access/htup_details.h"
struct MinimalTupleData
{
 uint32 t_len;

 char mt_padding[((
# 629 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
                 __builtin_offsetof (
# 629 "/usr/include/postgresql/14/server/access/htup_details.h"
                 HeapTupleHeaderData
# 629 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
                 , 
# 629 "/usr/include/postgresql/14/server/access/htup_details.h"
                 t_infomask2
# 629 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
                 ) 
# 629 "/usr/include/postgresql/14/server/access/htup_details.h"
                 - sizeof(uint32)) % 8)];



 uint16 t_infomask2;

 uint16 t_infomask;

 uint8 t_hoff;



 bits8 t_bits[];


};
# 776 "/usr/include/postgresql/14/server/access/htup_details.h"
extern Size heap_compute_data_size(TupleDesc tupleDesc,
           Datum *values, 
# 777 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
                         _Bool 
# 777 "/usr/include/postgresql/14/server/access/htup_details.h"
                              *isnull);
extern void heap_fill_tuple(TupleDesc tupleDesc,
       Datum *values, 
# 779 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
                     _Bool 
# 779 "/usr/include/postgresql/14/server/access/htup_details.h"
                          *isnull,
       char *data, Size data_size,
       uint16 *infomask, bits8 *bit);
extern 
# 782 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
      _Bool 
# 782 "/usr/include/postgresql/14/server/access/htup_details.h"
           heap_attisnull(HeapTuple tup, int attnum, TupleDesc tupleDesc);
extern Datum nocachegetattr(HeapTuple tup, int attnum,
       TupleDesc att);
extern Datum heap_getsysattr(HeapTuple tup, int attnum, TupleDesc tupleDesc,
        
# 786 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
       _Bool 
# 786 "/usr/include/postgresql/14/server/access/htup_details.h"
            *isnull);
extern Datum getmissingattr(TupleDesc tupleDesc,
       int attnum, 
# 788 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
                  _Bool 
# 788 "/usr/include/postgresql/14/server/access/htup_details.h"
                       *isnull);
extern HeapTuple heap_copytuple(HeapTuple tuple);
extern void heap_copytuple_with_tuple(HeapTuple src, HeapTuple dest);
extern Datum heap_copy_tuple_as_datum(HeapTuple tuple, TupleDesc tupleDesc);
extern HeapTuple heap_form_tuple(TupleDesc tupleDescriptor,
         Datum *values, 
# 793 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
                       _Bool 
# 793 "/usr/include/postgresql/14/server/access/htup_details.h"
                            *isnull);
extern HeapTuple heap_modify_tuple(HeapTuple tuple,
           TupleDesc tupleDesc,
           Datum *replValues,
           
# 797 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
          _Bool 
# 797 "/usr/include/postgresql/14/server/access/htup_details.h"
               *replIsnull,
           
# 798 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
          _Bool 
# 798 "/usr/include/postgresql/14/server/access/htup_details.h"
               *doReplace);
extern HeapTuple heap_modify_tuple_by_cols(HeapTuple tuple,
             TupleDesc tupleDesc,
             int nCols,
             int *replCols,
             Datum *replValues,
             
# 804 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
            _Bool 
# 804 "/usr/include/postgresql/14/server/access/htup_details.h"
                 *replIsnull);
extern void heap_deform_tuple(HeapTuple tuple, TupleDesc tupleDesc,
         Datum *values, 
# 806 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
                       _Bool 
# 806 "/usr/include/postgresql/14/server/access/htup_details.h"
                            *isnull);
extern void heap_freetuple(HeapTuple htup);
extern MinimalTuple heap_form_minimal_tuple(TupleDesc tupleDescriptor,
           Datum *values, 
# 809 "/usr/include/postgresql/14/server/access/htup_details.h" 3 4
                         _Bool 
# 809 "/usr/include/postgresql/14/server/access/htup_details.h"
                              *isnull);
extern void heap_free_minimal_tuple(MinimalTuple mtup);
extern MinimalTuple heap_copy_minimal_tuple(MinimalTuple mtup);
extern HeapTuple heap_tuple_from_minimal_tuple(MinimalTuple mtup);
extern MinimalTuple minimal_tuple_from_heap_tuple(HeapTuple htup);
extern size_t varsize_any(void *p);
extern HeapTuple heap_expand_tuple(HeapTuple sourceTuple, TupleDesc tupleDesc);
extern MinimalTuple minimal_expand_tuple(HeapTuple sourceTuple, TupleDesc tupleDesc);
# 19 "/usr/include/postgresql/14/server/executor/tuptable.h" 2
# 1 "/usr/include/postgresql/14/server/access/sysattr.h" 1
# 20 "/usr/include/postgresql/14/server/executor/tuptable.h" 2

# 1 "/usr/include/postgresql/14/server/storage/buf.h" 1
# 23 "/usr/include/postgresql/14/server/storage/buf.h"
typedef int Buffer;
# 44 "/usr/include/postgresql/14/server/storage/buf.h"
typedef struct BufferAccessStrategyData *BufferAccessStrategy;
# 22 "/usr/include/postgresql/14/server/executor/tuptable.h" 2
# 111 "/usr/include/postgresql/14/server/executor/tuptable.h"
struct TupleTableSlotOps;
typedef struct TupleTableSlotOps TupleTableSlotOps;


typedef struct TupleTableSlot
{
 NodeTag type;

 uint16 tts_flags;

 AttrNumber tts_nvalid;
 const TupleTableSlotOps *const tts_ops;

 TupleDesc tts_tupleDescriptor;

 Datum *tts_values;

 
# 128 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
_Bool 
# 128 "/usr/include/postgresql/14/server/executor/tuptable.h"
        *tts_isnull;
 MemoryContext tts_mcxt;
 ItemPointerData tts_tid;
 Oid tts_tableOid;
} TupleTableSlot;


struct TupleTableSlotOps
{

 size_t base_slot_size;


 void (*init) (TupleTableSlot *slot);


 void (*release) (TupleTableSlot *slot);







 void (*clear) (TupleTableSlot *slot);
# 161 "/usr/include/postgresql/14/server/executor/tuptable.h"
 void (*getsomeattrs) (TupleTableSlot *slot, int natts);






 Datum (*getsysattr) (TupleTableSlot *slot, int attnum, 
# 168 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
                                                        _Bool 
# 168 "/usr/include/postgresql/14/server/executor/tuptable.h"
                                                             *isnull);





 void (*materialize) (TupleTableSlot *slot);





 void (*copyslot) (TupleTableSlot *dstslot, TupleTableSlot *srcslot);







 HeapTuple (*get_heap_tuple) (TupleTableSlot *slot);







 MinimalTuple (*get_minimal_tuple) (TupleTableSlot *slot);
# 206 "/usr/include/postgresql/14/server/executor/tuptable.h"
 HeapTuple (*copy_heap_tuple) (TupleTableSlot *slot);
# 216 "/usr/include/postgresql/14/server/executor/tuptable.h"
 MinimalTuple (*copy_minimal_tuple) (TupleTableSlot *slot);
};





extern const TupleTableSlotOps TTSOpsVirtual;
extern const TupleTableSlotOps TTSOpsHeapTuple;
extern const TupleTableSlotOps TTSOpsMinimalTuple;
extern const TupleTableSlotOps TTSOpsBufferHeapTuple;
# 238 "/usr/include/postgresql/14/server/executor/tuptable.h"
typedef struct VirtualTupleTableSlot
{
 TupleTableSlot base;

 char *data;
} VirtualTupleTableSlot;

typedef struct HeapTupleTableSlot
{
 TupleTableSlot base;


 HeapTuple tuple;

 uint32 off;
 HeapTupleData tupdata;
} HeapTupleTableSlot;


typedef struct BufferHeapTupleTableSlot
{
 HeapTupleTableSlot base;







 Buffer buffer;
} BufferHeapTupleTableSlot;

typedef struct MinimalTupleTableSlot
{
 TupleTableSlot base;
# 282 "/usr/include/postgresql/14/server/executor/tuptable.h"
 HeapTuple tuple;
 MinimalTuple mintuple;
 HeapTupleData minhdr;

 uint32 off;
} MinimalTupleTableSlot;
# 296 "/usr/include/postgresql/14/server/executor/tuptable.h"
extern TupleTableSlot *MakeTupleTableSlot(TupleDesc tupleDesc,
            const TupleTableSlotOps *tts_ops);
extern TupleTableSlot *ExecAllocTableSlot(List **tupleTable, TupleDesc desc,
            const TupleTableSlotOps *tts_ops);
extern void ExecResetTupleTable(List *tupleTable, 
# 300 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
                                                 _Bool 
# 300 "/usr/include/postgresql/14/server/executor/tuptable.h"
                                                      shouldFree);
extern TupleTableSlot *MakeSingleTupleTableSlot(TupleDesc tupdesc,
            const TupleTableSlotOps *tts_ops);
extern void ExecDropSingleTupleTableSlot(TupleTableSlot *slot);
extern void ExecSetSlotDescriptor(TupleTableSlot *slot, TupleDesc tupdesc);
extern TupleTableSlot *ExecStoreHeapTuple(HeapTuple tuple,
            TupleTableSlot *slot,
            
# 307 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
           _Bool 
# 307 "/usr/include/postgresql/14/server/executor/tuptable.h"
                shouldFree);
extern void ExecForceStoreHeapTuple(HeapTuple tuple,
         TupleTableSlot *slot,
         
# 310 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
        _Bool 
# 310 "/usr/include/postgresql/14/server/executor/tuptable.h"
             shouldFree);
extern TupleTableSlot *ExecStoreBufferHeapTuple(HeapTuple tuple,
            TupleTableSlot *slot,
            Buffer buffer);
extern TupleTableSlot *ExecStorePinnedBufferHeapTuple(HeapTuple tuple,
               TupleTableSlot *slot,
               Buffer buffer);
extern TupleTableSlot *ExecStoreMinimalTuple(MinimalTuple mtup,
            TupleTableSlot *slot,
            
# 319 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
           _Bool 
# 319 "/usr/include/postgresql/14/server/executor/tuptable.h"
                shouldFree);
extern void ExecForceStoreMinimalTuple(MinimalTuple mtup, TupleTableSlot *slot,
            
# 321 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
           _Bool 
# 321 "/usr/include/postgresql/14/server/executor/tuptable.h"
                shouldFree);
extern TupleTableSlot *ExecStoreVirtualTuple(TupleTableSlot *slot);
extern TupleTableSlot *ExecStoreAllNullTuple(TupleTableSlot *slot);
extern void ExecStoreHeapTupleDatum(Datum data, TupleTableSlot *slot);
extern HeapTuple ExecFetchSlotHeapTuple(TupleTableSlot *slot, 
# 325 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
                                                             _Bool 
# 325 "/usr/include/postgresql/14/server/executor/tuptable.h"
                                                                  materialize, 
# 325 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
                                                                               _Bool 
# 325 "/usr/include/postgresql/14/server/executor/tuptable.h"
                                                                                    *shouldFree);
extern MinimalTuple ExecFetchSlotMinimalTuple(TupleTableSlot *slot,
             
# 327 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
            _Bool 
# 327 "/usr/include/postgresql/14/server/executor/tuptable.h"
                 *shouldFree);
extern Datum ExecFetchSlotHeapTupleDatum(TupleTableSlot *slot);
extern void slot_getmissingattrs(TupleTableSlot *slot, int startAttNum,
         int lastAttNum);
extern void slot_getsomeattrs_int(TupleTableSlot *slot, int attnum);
# 340 "/usr/include/postgresql/14/server/executor/tuptable.h"
static inline void
slot_getsomeattrs(TupleTableSlot *slot, int attnum)
{
 if (slot->tts_nvalid < attnum)
  slot_getsomeattrs_int(slot, attnum);
}







static inline void
slot_getallattrs(TupleTableSlot *slot)
{
 slot_getsomeattrs(slot, slot->tts_tupleDescriptor->natts);
}
# 366 "/usr/include/postgresql/14/server/executor/tuptable.h"
static inline 
# 366 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
             _Bool

# 367 "/usr/include/postgresql/14/server/executor/tuptable.h"
slot_attisnull(TupleTableSlot *slot, int attnum)
{
 ((void)
# 369 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
1
# 369 "/usr/include/postgresql/14/server/executor/tuptable.h"
);

 if (attnum > slot->tts_nvalid)
  slot_getsomeattrs(slot, attnum);

 return slot->tts_isnull[attnum - 1];
}




static inline Datum
slot_getattr(TupleTableSlot *slot, int attnum,
    
# 382 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
   _Bool 
# 382 "/usr/include/postgresql/14/server/executor/tuptable.h"
        *isnull)
{
 ((void)
# 384 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
1
# 384 "/usr/include/postgresql/14/server/executor/tuptable.h"
);

 if (attnum > slot->tts_nvalid)
  slot_getsomeattrs(slot, attnum);

 *isnull = slot->tts_isnull[attnum - 1];

 return slot->tts_values[attnum - 1];
}
# 401 "/usr/include/postgresql/14/server/executor/tuptable.h"
static inline Datum
slot_getsysattr(TupleTableSlot *slot, int attnum, 
# 402 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
                                                 _Bool 
# 402 "/usr/include/postgresql/14/server/executor/tuptable.h"
                                                      *isnull)
{
 ((void)
# 404 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
1
# 404 "/usr/include/postgresql/14/server/executor/tuptable.h"
);

 if (attnum == (-6))
 {
  *isnull = 
# 408 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
           0
# 408 "/usr/include/postgresql/14/server/executor/tuptable.h"
                ;
  return ((Datum) (slot->tts_tableOid));
 }
 else if (attnum == (-1))
 {
  *isnull = 
# 413 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
           0
# 413 "/usr/include/postgresql/14/server/executor/tuptable.h"
                ;
  return ((Datum) (&slot->tts_tid));
 }


 return slot->tts_ops->getsysattr(slot, attnum, isnull);
}




static inline TupleTableSlot *
ExecClearTuple(TupleTableSlot *slot)
{
 slot->tts_ops->clear(slot);

 return slot;
}
# 442 "/usr/include/postgresql/14/server/executor/tuptable.h"
static inline void
ExecMaterializeSlot(TupleTableSlot *slot)
{
 slot->tts_ops->materialize(slot);
}




static inline HeapTuple
ExecCopySlotHeapTuple(TupleTableSlot *slot)
{
 ((void)
# 454 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
1
# 454 "/usr/include/postgresql/14/server/executor/tuptable.h"
);

 return slot->tts_ops->copy_heap_tuple(slot);
}




static inline MinimalTuple
ExecCopySlotMinimalTuple(TupleTableSlot *slot)
{
 return slot->tts_ops->copy_minimal_tuple(slot);
}







static inline TupleTableSlot *
ExecCopySlot(TupleTableSlot *dstslot, TupleTableSlot *srcslot)
{
 ((void)
# 477 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
1
# 477 "/usr/include/postgresql/14/server/executor/tuptable.h"
);
 ((void)
# 478 "/usr/include/postgresql/14/server/executor/tuptable.h" 3 4
1
# 478 "/usr/include/postgresql/14/server/executor/tuptable.h"
);

 dstslot->tts_ops->copyslot(dstslot, srcslot);

 return dstslot;
}
# 21 "/usr/include/postgresql/14/server/access/tupconvert.h" 2
# 1 "/usr/include/postgresql/14/server/nodes/bitmapset.h" 1
# 26 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
struct List;
# 38 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
typedef uint64 bitmapword;
typedef int64 signedbitmapword;
# 49 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
typedef struct Bitmapset
{
 int nwords;
 bitmapword words[];
} Bitmapset;



typedef enum
{
 BMS_EQUAL,
 BMS_SUBSET1,
 BMS_SUBSET2,
 BMS_DIFFERENT
} BMS_Comparison;


typedef enum
{
 BMS_EMPTY_SET,
 BMS_SINGLETON,
 BMS_MULTIPLE
} BMS_Membership;






extern Bitmapset *bms_copy(const Bitmapset *a);
extern 
# 79 "/usr/include/postgresql/14/server/nodes/bitmapset.h" 3 4
      _Bool 
# 79 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
           bms_equal(const Bitmapset *a, const Bitmapset *b);
extern int bms_compare(const Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_make_singleton(int x);
extern void bms_free(Bitmapset *a);

extern Bitmapset *bms_union(const Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_intersect(const Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_difference(const Bitmapset *a, const Bitmapset *b);
extern 
# 87 "/usr/include/postgresql/14/server/nodes/bitmapset.h" 3 4
      _Bool 
# 87 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
           bms_is_subset(const Bitmapset *a, const Bitmapset *b);
extern BMS_Comparison bms_subset_compare(const Bitmapset *a, const Bitmapset *b);
extern 
# 89 "/usr/include/postgresql/14/server/nodes/bitmapset.h" 3 4
      _Bool 
# 89 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
           bms_is_member(int x, const Bitmapset *a);
extern int bms_member_index(Bitmapset *a, int x);
extern 
# 91 "/usr/include/postgresql/14/server/nodes/bitmapset.h" 3 4
      _Bool 
# 91 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
           bms_overlap(const Bitmapset *a, const Bitmapset *b);
extern 
# 92 "/usr/include/postgresql/14/server/nodes/bitmapset.h" 3 4
      _Bool 
# 92 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
           bms_overlap_list(const Bitmapset *a, const struct List *b);
extern 
# 93 "/usr/include/postgresql/14/server/nodes/bitmapset.h" 3 4
      _Bool 
# 93 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
           bms_nonempty_difference(const Bitmapset *a, const Bitmapset *b);
extern int bms_singleton_member(const Bitmapset *a);
extern 
# 95 "/usr/include/postgresql/14/server/nodes/bitmapset.h" 3 4
      _Bool 
# 95 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
           bms_get_singleton_member(const Bitmapset *a, int *member);
extern int bms_num_members(const Bitmapset *a);


extern BMS_Membership bms_membership(const Bitmapset *a);
extern 
# 100 "/usr/include/postgresql/14/server/nodes/bitmapset.h" 3 4
      _Bool 
# 100 "/usr/include/postgresql/14/server/nodes/bitmapset.h"
           bms_is_empty(const Bitmapset *a);



extern Bitmapset *bms_add_member(Bitmapset *a, int x);
extern Bitmapset *bms_del_member(Bitmapset *a, int x);
extern Bitmapset *bms_add_members(Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_add_range(Bitmapset *a, int lower, int upper);
extern Bitmapset *bms_int_members(Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_del_members(Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_join(Bitmapset *a, Bitmapset *b);


extern int bms_first_member(Bitmapset *a);
extern int bms_next_member(const Bitmapset *a, int prevbit);
extern int bms_prev_member(const Bitmapset *a, int prevbit);


extern uint32 bms_hash_value(const Bitmapset *a);
extern uint32 bitmap_hash(const void *key, Size keysize);
extern int bitmap_match(const void *key1, const void *key2, Size keysize);
# 22 "/usr/include/postgresql/14/server/access/tupconvert.h" 2


typedef struct TupleConversionMap
{
 TupleDesc indesc;
 TupleDesc outdesc;
 AttrMap *attrMap;
 Datum *invalues;
 
# 30 "/usr/include/postgresql/14/server/access/tupconvert.h" 3 4
_Bool 
# 30 "/usr/include/postgresql/14/server/access/tupconvert.h"
        *inisnull;
 Datum *outvalues;
 
# 32 "/usr/include/postgresql/14/server/access/tupconvert.h" 3 4
_Bool 
# 32 "/usr/include/postgresql/14/server/access/tupconvert.h"
        *outisnull;
} TupleConversionMap;


extern TupleConversionMap *convert_tuples_by_position(TupleDesc indesc,
               TupleDesc outdesc,
               const char *msg);

extern TupleConversionMap *convert_tuples_by_name(TupleDesc indesc,
              TupleDesc outdesc);

extern HeapTuple execute_attr_map_tuple(HeapTuple tuple, TupleConversionMap *map);
extern TupleTableSlot *execute_attr_map_slot(AttrMap *attrMap,
            TupleTableSlot *in_slot,
            TupleTableSlot *out_slot);
extern Bitmapset *execute_attr_map_cols(AttrMap *attrMap, Bitmapset *inbitmap);

extern void free_conversion_map(TupleConversionMap *map);
# 18 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/executor/instrument.h" 1
# 16 "/usr/include/postgresql/14/server/executor/instrument.h"
# 1 "/usr/include/postgresql/14/server/portability/instr_time.h" 1
# 64 "/usr/include/postgresql/14/server/portability/instr_time.h"
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/time.h" 1 3 4
# 73 "/usr/include/aarch64-linux-gnu/bits/time.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/timex.h" 1 3 4
# 26 "/usr/include/aarch64-linux-gnu/bits/timex.h" 3 4

# 26 "/usr/include/aarch64-linux-gnu/bits/timex.h" 3 4
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



# 65 "/usr/include/postgresql/14/server/portability/instr_time.h" 2
# 86 "/usr/include/postgresql/14/server/portability/instr_time.h"

# 86 "/usr/include/postgresql/14/server/portability/instr_time.h"
typedef struct timespec instr_time;
# 17 "/usr/include/postgresql/14/server/executor/instrument.h" 2







typedef struct BufferUsage
{
 int64 shared_blks_hit;
 int64 shared_blks_read;
 int64 shared_blks_dirtied;
 int64 shared_blks_written;
 int64 local_blks_hit;
 int64 local_blks_read;
 int64 local_blks_dirtied;
 int64 local_blks_written;
 int64 temp_blks_read;
 int64 temp_blks_written;
 instr_time blk_read_time;
 instr_time blk_write_time;
} BufferUsage;
# 47 "/usr/include/postgresql/14/server/executor/instrument.h"
typedef struct WalUsage
{
 int64 wal_records;
 int64 wal_fpi;
 uint64 wal_bytes;
} WalUsage;


typedef enum InstrumentOption
{
 INSTRUMENT_TIMER = 1 << 0,
 INSTRUMENT_BUFFERS = 1 << 1,
 INSTRUMENT_ROWS = 1 << 2,
 INSTRUMENT_WAL = 1 << 3,
 INSTRUMENT_ALL = (0x7FFFFFFF)
} InstrumentOption;

typedef struct Instrumentation
{

 
# 67 "/usr/include/postgresql/14/server/executor/instrument.h" 3 4
_Bool 
# 67 "/usr/include/postgresql/14/server/executor/instrument.h"
      need_timer;
 
# 68 "/usr/include/postgresql/14/server/executor/instrument.h" 3 4
_Bool 
# 68 "/usr/include/postgresql/14/server/executor/instrument.h"
      need_bufusage;
 
# 69 "/usr/include/postgresql/14/server/executor/instrument.h" 3 4
_Bool 
# 69 "/usr/include/postgresql/14/server/executor/instrument.h"
      need_walusage;
 
# 70 "/usr/include/postgresql/14/server/executor/instrument.h" 3 4
_Bool 
# 70 "/usr/include/postgresql/14/server/executor/instrument.h"
      async_mode;

 
# 72 "/usr/include/postgresql/14/server/executor/instrument.h" 3 4
_Bool 
# 72 "/usr/include/postgresql/14/server/executor/instrument.h"
      running;
 instr_time starttime;
 instr_time counter;
 double firsttuple;
 double tuplecount;
 BufferUsage bufusage_start;
 WalUsage walusage_start;

 double startup;
 double total;
 double ntuples;
 double ntuples2;
 double nloops;
 double nfiltered1;
 double nfiltered2;
 BufferUsage bufusage;
 WalUsage walusage;
} Instrumentation;

typedef struct WorkerInstrumentation
{
 int num_workers;
 Instrumentation instrument[];
} WorkerInstrumentation;

extern BufferUsage pgBufferUsage;
extern WalUsage pgWalUsage;

extern Instrumentation *InstrAlloc(int n, int instrument_options,
           
# 101 "/usr/include/postgresql/14/server/executor/instrument.h" 3 4
          _Bool 
# 101 "/usr/include/postgresql/14/server/executor/instrument.h"
               async_mode);
extern void InstrInit(Instrumentation *instr, int instrument_options);
extern void InstrStartNode(Instrumentation *instr);
extern void InstrStopNode(Instrumentation *instr, double nTuples);
extern void InstrUpdateTupleCount(Instrumentation *instr, double nTuples);
extern void InstrEndLoop(Instrumentation *instr);
extern void InstrAggNode(Instrumentation *dst, Instrumentation *add);
extern void InstrStartParallelQuery(void);
extern void InstrEndParallelQuery(BufferUsage *bufusage, WalUsage *walusage);
extern void InstrAccumParallelQuery(BufferUsage *bufusage, WalUsage *walusage);
extern void BufferUsageAccumDiff(BufferUsage *dst,
         const BufferUsage *add, const BufferUsage *sub);
extern void WalUsageAccumDiff(WalUsage *dst, const WalUsage *add,
         const WalUsage *sub);
# 19 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/fmgr.h" 1
# 22 "/usr/include/postgresql/14/server/fmgr.h"
typedef struct Node *fmNodePtr;
typedef struct Aggref *fmAggrefPtr;


typedef void (*fmExprContextCallbackFunction) (Datum arg);


typedef struct StringInfoData *fmStringInfo;
# 38 "/usr/include/postgresql/14/server/fmgr.h"
typedef struct FunctionCallInfoBaseData *FunctionCallInfo;

typedef Datum (*PGFunction) (FunctionCallInfo fcinfo);
# 56 "/usr/include/postgresql/14/server/fmgr.h"
typedef struct FmgrInfo
{
 PGFunction fn_addr;
 Oid fn_oid;
 short fn_nargs;
 
# 61 "/usr/include/postgresql/14/server/fmgr.h" 3 4
_Bool 
# 61 "/usr/include/postgresql/14/server/fmgr.h"
      fn_strict;
 
# 62 "/usr/include/postgresql/14/server/fmgr.h" 3 4
_Bool 
# 62 "/usr/include/postgresql/14/server/fmgr.h"
      fn_retset;
 unsigned char fn_stats;
 void *fn_extra;
 MemoryContext fn_mcxt;
 fmNodePtr fn_expr;
} FmgrInfo;
# 85 "/usr/include/postgresql/14/server/fmgr.h"
typedef struct FunctionCallInfoBaseData
{
 FmgrInfo *flinfo;
 fmNodePtr context;
 fmNodePtr resultinfo;
 Oid fncollation;

 
# 92 "/usr/include/postgresql/14/server/fmgr.h" 3 4
_Bool 
# 92 "/usr/include/postgresql/14/server/fmgr.h"
      isnull;
 short nargs;

 NullableDatum args[];
} FunctionCallInfoBaseData;
# 124 "/usr/include/postgresql/14/server/fmgr.h"
extern void fmgr_info(Oid functionId, FmgrInfo *finfo);






extern void fmgr_info_cxt(Oid functionId, FmgrInfo *finfo,
        MemoryContext mcxt);
# 141 "/usr/include/postgresql/14/server/fmgr.h"
extern void fmgr_info_copy(FmgrInfo *dstinfo, FmgrInfo *srcinfo,
         MemoryContext destcxt);

extern void fmgr_symbol(Oid functionId, char **mod, char **fn);
# 234 "/usr/include/postgresql/14/server/fmgr.h"
extern struct varlena *pg_detoast_datum(struct varlena *datum);
extern struct varlena *pg_detoast_datum_copy(struct varlena *datum);
extern struct varlena *pg_detoast_datum_slice(struct varlena *datum,
             int32 first, int32 count);
extern struct varlena *pg_detoast_datum_packed(struct varlena *datum);
# 394 "/usr/include/postgresql/14/server/fmgr.h"
typedef struct
{
 int api_version;

} Pg_finfo_record;


typedef const Pg_finfo_record *(*PGFInfoFunction) (void);
# 453 "/usr/include/postgresql/14/server/fmgr.h"
typedef struct
{
 int len;
 int version;
 int funcmaxargs;
 int indexmaxkeys;
 int namedatalen;
 int float8byval;
} Pg_magic_struct;
# 478 "/usr/include/postgresql/14/server/fmgr.h"
typedef const Pg_magic_struct *(*PGModuleMagicFunction) (void);
# 504 "/usr/include/postgresql/14/server/fmgr.h"
extern Datum DirectFunctionCall1Coll(PGFunction func, Oid collation,
          Datum arg1);
extern Datum DirectFunctionCall2Coll(PGFunction func, Oid collation,
          Datum arg1, Datum arg2);
extern Datum DirectFunctionCall3Coll(PGFunction func, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3);
extern Datum DirectFunctionCall4Coll(PGFunction func, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4);
extern Datum DirectFunctionCall5Coll(PGFunction func, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5);
extern Datum DirectFunctionCall6Coll(PGFunction func, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6);
extern Datum DirectFunctionCall7Coll(PGFunction func, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6, Datum arg7);
extern Datum DirectFunctionCall8Coll(PGFunction func, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6, Datum arg7, Datum arg8);
extern Datum DirectFunctionCall9Coll(PGFunction func, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6, Datum arg7, Datum arg8,
          Datum arg9);
# 543 "/usr/include/postgresql/14/server/fmgr.h"
extern Datum CallerFInfoFunctionCall1(PGFunction func, FmgrInfo *flinfo,
           Oid collation, Datum arg1);
extern Datum CallerFInfoFunctionCall2(PGFunction func, FmgrInfo *flinfo,
           Oid collation, Datum arg1, Datum arg2);





extern Datum FunctionCall0Coll(FmgrInfo *flinfo, Oid collation);
extern Datum FunctionCall1Coll(FmgrInfo *flinfo, Oid collation,
          Datum arg1);
extern Datum FunctionCall2Coll(FmgrInfo *flinfo, Oid collation,
          Datum arg1, Datum arg2);
extern Datum FunctionCall3Coll(FmgrInfo *flinfo, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3);
extern Datum FunctionCall4Coll(FmgrInfo *flinfo, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4);
extern Datum FunctionCall5Coll(FmgrInfo *flinfo, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5);
extern Datum FunctionCall6Coll(FmgrInfo *flinfo, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6);
extern Datum FunctionCall7Coll(FmgrInfo *flinfo, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6, Datum arg7);
extern Datum FunctionCall8Coll(FmgrInfo *flinfo, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6, Datum arg7, Datum arg8);
extern Datum FunctionCall9Coll(FmgrInfo *flinfo, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6, Datum arg7, Datum arg8,
          Datum arg9);







extern Datum OidFunctionCall0Coll(Oid functionId, Oid collation);
extern Datum OidFunctionCall1Coll(Oid functionId, Oid collation,
          Datum arg1);
extern Datum OidFunctionCall2Coll(Oid functionId, Oid collation,
          Datum arg1, Datum arg2);
extern Datum OidFunctionCall3Coll(Oid functionId, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3);
extern Datum OidFunctionCall4Coll(Oid functionId, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4);
extern Datum OidFunctionCall5Coll(Oid functionId, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5);
extern Datum OidFunctionCall6Coll(Oid functionId, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6);
extern Datum OidFunctionCall7Coll(Oid functionId, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6, Datum arg7);
extern Datum OidFunctionCall8Coll(Oid functionId, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6, Datum arg7, Datum arg8);
extern Datum OidFunctionCall9Coll(Oid functionId, Oid collation,
          Datum arg1, Datum arg2,
          Datum arg3, Datum arg4, Datum arg5,
          Datum arg6, Datum arg7, Datum arg8,
          Datum arg9);
# 685 "/usr/include/postgresql/14/server/fmgr.h"
extern Datum InputFunctionCall(FmgrInfo *flinfo, char *str,
          Oid typioparam, int32 typmod);
extern Datum OidInputFunctionCall(Oid functionId, char *str,
          Oid typioparam, int32 typmod);
extern char *OutputFunctionCall(FmgrInfo *flinfo, Datum val);
extern char *OidOutputFunctionCall(Oid functionId, Datum val);
extern Datum ReceiveFunctionCall(FmgrInfo *flinfo, fmStringInfo buf,
         Oid typioparam, int32 typmod);
extern Datum OidReceiveFunctionCall(Oid functionId, fmStringInfo buf,
         Oid typioparam, int32 typmod);
extern bytea *SendFunctionCall(FmgrInfo *flinfo, Datum val);
extern bytea *OidSendFunctionCall(Oid functionId, Datum val);





extern const Pg_finfo_record *fetch_finfo_record(void *filehandle, const char *funcname);
extern void clear_external_function_hash(void *filehandle);
extern Oid fmgr_internal_function(const char *proname);
extern Oid get_fn_expr_rettype(FmgrInfo *flinfo);
extern Oid get_fn_expr_argtype(FmgrInfo *flinfo, int argnum);
extern Oid get_call_expr_argtype(fmNodePtr expr, int argnum);
extern 
# 708 "/usr/include/postgresql/14/server/fmgr.h" 3 4
      _Bool 
# 708 "/usr/include/postgresql/14/server/fmgr.h"
           get_fn_expr_arg_stable(FmgrInfo *flinfo, int argnum);
extern 
# 709 "/usr/include/postgresql/14/server/fmgr.h" 3 4
      _Bool 
# 709 "/usr/include/postgresql/14/server/fmgr.h"
           get_call_expr_arg_stable(fmNodePtr expr, int argnum);
extern 
# 710 "/usr/include/postgresql/14/server/fmgr.h" 3 4
      _Bool 
# 710 "/usr/include/postgresql/14/server/fmgr.h"
           get_fn_expr_variadic(FmgrInfo *flinfo);
extern bytea *get_fn_opclass_options(FmgrInfo *flinfo);
extern 
# 712 "/usr/include/postgresql/14/server/fmgr.h" 3 4
      _Bool 
# 712 "/usr/include/postgresql/14/server/fmgr.h"
           has_fn_opclass_options(FmgrInfo *flinfo);
extern void set_fn_opclass_options(FmgrInfo *flinfo, bytea *options);
extern 
# 714 "/usr/include/postgresql/14/server/fmgr.h" 3 4
      _Bool 
# 714 "/usr/include/postgresql/14/server/fmgr.h"
           CheckFunctionValidatorAccess(Oid validatorOid, Oid functionOid);




extern char *Dynamic_library_path;

extern void *load_external_function(const char *filename, const char *funcname,
         
# 722 "/usr/include/postgresql/14/server/fmgr.h" 3 4
        _Bool 
# 722 "/usr/include/postgresql/14/server/fmgr.h"
             signalNotFound, void **filehandle);
extern void *lookup_external_function(void *filehandle, const char *funcname);
extern void load_file(const char *filename, 
# 724 "/usr/include/postgresql/14/server/fmgr.h" 3 4
                                           _Bool 
# 724 "/usr/include/postgresql/14/server/fmgr.h"
                                                restricted);
extern void **find_rendezvous_variable(const char *varName);
extern Size EstimateLibraryStateSpace(void);
extern void SerializeLibraryState(Size maxsize, char *start_address);
extern void RestoreLibraryState(char *start_address);
# 741 "/usr/include/postgresql/14/server/fmgr.h"
extern int AggCheckCallContext(FunctionCallInfo fcinfo,
        MemoryContext *aggcontext);
extern fmAggrefPtr AggGetAggref(FunctionCallInfo fcinfo);
extern MemoryContext AggGetTempMemoryContext(FunctionCallInfo fcinfo);
extern 
# 745 "/usr/include/postgresql/14/server/fmgr.h" 3 4
      _Bool 
# 745 "/usr/include/postgresql/14/server/fmgr.h"
           AggStateIsShared(FunctionCallInfo fcinfo);
extern void AggRegisterCallback(FunctionCallInfo fcinfo,
        fmExprContextCallbackFunction func,
        Datum arg);
# 759 "/usr/include/postgresql/14/server/fmgr.h"
typedef enum FmgrHookEventType
{
 FHET_START,
 FHET_END,
 FHET_ABORT
} FmgrHookEventType;

typedef 
# 766 "/usr/include/postgresql/14/server/fmgr.h" 3 4
       _Bool 
# 766 "/usr/include/postgresql/14/server/fmgr.h"
            (*needs_fmgr_hook_type) (Oid fn_oid);

typedef void (*fmgr_hook_type) (FmgrHookEventType event,
        FmgrInfo *flinfo, Datum *arg);

extern needs_fmgr_hook_type needs_fmgr_hook;
extern fmgr_hook_type fmgr_hook;
# 20 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/lib/ilist.h" 1
# 120 "/usr/include/postgresql/14/server/lib/ilist.h"
typedef struct dlist_node dlist_node;
struct dlist_node
{
 dlist_node *prev;
 dlist_node *next;
};
# 135 "/usr/include/postgresql/14/server/lib/ilist.h"
typedef struct dlist_head
{







 dlist_node head;
} dlist_head;
# 159 "/usr/include/postgresql/14/server/lib/ilist.h"
typedef struct dlist_iter
{
 dlist_node *cur;
 dlist_node *end;
} dlist_iter;
# 178 "/usr/include/postgresql/14/server/lib/ilist.h"
typedef struct dlist_mutable_iter
{
 dlist_node *cur;
 dlist_node *next;
 dlist_node *end;
} dlist_mutable_iter;






typedef struct slist_node slist_node;
struct slist_node
{
 slist_node *next;
};
# 203 "/usr/include/postgresql/14/server/lib/ilist.h"
typedef struct slist_head
{
 slist_node head;
} slist_head;
# 224 "/usr/include/postgresql/14/server/lib/ilist.h"
typedef struct slist_iter
{
 slist_node *cur;
} slist_iter;
# 239 "/usr/include/postgresql/14/server/lib/ilist.h"
typedef struct slist_mutable_iter
{
 slist_node *cur;
 slist_node *next;
 slist_node *prev;
} slist_mutable_iter;
# 255 "/usr/include/postgresql/14/server/lib/ilist.h"
extern void slist_delete(slist_head *head, slist_node *node);
# 277 "/usr/include/postgresql/14/server/lib/ilist.h"
static inline void
dlist_init(dlist_head *head)
{
 head->head.next = head->head.prev = &head->head;
}






static inline 
# 288 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
             _Bool

# 289 "/usr/include/postgresql/14/server/lib/ilist.h"
dlist_is_empty(dlist_head *head)
{
 ((void) (head));

 return head->head.next == 
# 293 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
                          ((void *)0) 
# 293 "/usr/include/postgresql/14/server/lib/ilist.h"
                               || head->head.next == &(head->head);
}




static inline void
dlist_push_head(dlist_head *head, dlist_node *node)
{
 if (head->head.next == 
# 302 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
                       ((void *)0)
# 302 "/usr/include/postgresql/14/server/lib/ilist.h"
                           )
  dlist_init(head);

 node->next = head->head.next;
 node->prev = &head->head;
 node->next->prev = node;
 head->head.next = node;

 ((void) (head));
}




static inline void
dlist_push_tail(dlist_head *head, dlist_node *node)
{
 if (head->head.next == 
# 319 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
                       ((void *)0)
# 319 "/usr/include/postgresql/14/server/lib/ilist.h"
                           )
  dlist_init(head);

 node->next = &head->head;
 node->prev = head->head.prev;
 node->prev->next = node;
 head->head.prev = node;

 ((void) (head));
}




static inline void
dlist_insert_after(dlist_node *after, dlist_node *node)
{
 node->prev = after;
 node->next = after->next;
 after->next = node;
 node->next->prev = node;
}




static inline void
dlist_insert_before(dlist_node *before, dlist_node *node)
{
 node->prev = before->prev;
 node->next = before;
 before->prev = node;
 node->prev->next = node;
}




static inline void
dlist_delete(dlist_node *node)
{
 node->prev->next = node->next;
 node->next->prev = node->prev;
}




static inline dlist_node *
dlist_pop_head_node(dlist_head *head)
{
 dlist_node *node;

 ((void)
# 372 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
1
# 372 "/usr/include/postgresql/14/server/lib/ilist.h"
);
 node = head->head.next;
 dlist_delete(node);
 return node;
}







static inline void
dlist_move_head(dlist_head *head, dlist_node *node)
{

 if (head->head.next == node)
  return;

 dlist_delete(node);
 dlist_push_head(head, node);

 ((void) (head));
}







static inline void
dlist_move_tail(dlist_head *head, dlist_node *node)
{

 if (head->head.prev == node)
  return;

 dlist_delete(node);
 dlist_push_tail(head, node);

 ((void) (head));
}





static inline 
# 420 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
             _Bool

# 421 "/usr/include/postgresql/14/server/lib/ilist.h"
dlist_has_next(dlist_head *head, dlist_node *node)
{
 return node->next != &head->head;
}





static inline 
# 430 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
             _Bool

# 431 "/usr/include/postgresql/14/server/lib/ilist.h"
dlist_has_prev(dlist_head *head, dlist_node *node)
{
 return node->prev != &head->head;
}




static inline dlist_node *
dlist_next_node(dlist_head *head, dlist_node *node)
{
 ((void)
# 442 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
1
# 442 "/usr/include/postgresql/14/server/lib/ilist.h"
);
 return node->next;
}




static inline dlist_node *
dlist_prev_node(dlist_head *head, dlist_node *node)
{
 ((void)
# 452 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
1
# 452 "/usr/include/postgresql/14/server/lib/ilist.h"
);
 return node->prev;
}


static inline void *
dlist_head_element_off(dlist_head *head, size_t off)
{
 ((void)
# 460 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
1
# 460 "/usr/include/postgresql/14/server/lib/ilist.h"
);
 return (char *) head->head.next - off;
}




static inline dlist_node *
dlist_head_node(dlist_head *head)
{
 return (dlist_node *) dlist_head_element_off(head, 0);
}


static inline void *
dlist_tail_element_off(dlist_head *head, size_t off)
{
 ((void)
# 477 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
1
# 477 "/usr/include/postgresql/14/server/lib/ilist.h"
);
 return (char *) head->head.prev - off;
}




static inline dlist_node *
dlist_tail_node(dlist_head *head)
{
 return (dlist_node *) dlist_tail_element_off(head, 0);
}
# 572 "/usr/include/postgresql/14/server/lib/ilist.h"
static inline void
slist_init(slist_head *head)
{
 head->head.next = 
# 575 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
                  ((void *)0)
# 575 "/usr/include/postgresql/14/server/lib/ilist.h"
                      ;
}




static inline 
# 581 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
             _Bool

# 582 "/usr/include/postgresql/14/server/lib/ilist.h"
slist_is_empty(slist_head *head)
{
 ((void) (head));

 return head->head.next == 
# 586 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
                          ((void *)0)
# 586 "/usr/include/postgresql/14/server/lib/ilist.h"
                              ;
}




static inline void
slist_push_head(slist_head *head, slist_node *node)
{
 node->next = head->head.next;
 head->head.next = node;

 ((void) (head));
}




static inline void
slist_insert_after(slist_node *after, slist_node *node)
{
 node->next = after->next;
 after->next = node;
}




static inline slist_node *
slist_pop_head_node(slist_head *head)
{
 slist_node *node;

 ((void)
# 619 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
1
# 619 "/usr/include/postgresql/14/server/lib/ilist.h"
);
 node = head->head.next;
 head->head.next = node->next;
 ((void) (head));
 return node;
}




static inline 
# 629 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
             _Bool

# 630 "/usr/include/postgresql/14/server/lib/ilist.h"
slist_has_next(slist_head *head, slist_node *node)
{
 ((void) (head));

 return node->next != 
# 634 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
                     ((void *)0)
# 634 "/usr/include/postgresql/14/server/lib/ilist.h"
                         ;
}




static inline slist_node *
slist_next_node(slist_head *head, slist_node *node)
{
 ((void)
# 643 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
1
# 643 "/usr/include/postgresql/14/server/lib/ilist.h"
);
 return node->next;
}


static inline void *
slist_head_element_off(slist_head *head, size_t off)
{
 ((void)
# 651 "/usr/include/postgresql/14/server/lib/ilist.h" 3 4
1
# 651 "/usr/include/postgresql/14/server/lib/ilist.h"
);
 return (char *) head->head.next - off;
}




static inline slist_node *
slist_head_node(slist_head *head)
{
 return (slist_node *) slist_head_element_off(head, 0);
}







static inline void
slist_delete_current(slist_mutable_iter *iter)
{





 iter->prev->next = iter->next;





 iter->cur = iter->prev;
}
# 21 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/lib/pairingheap.h" 1
# 14 "/usr/include/postgresql/14/server/lib/pairingheap.h"
# 1 "/usr/include/postgresql/14/server/lib/stringinfo.h" 1
# 36 "/usr/include/postgresql/14/server/lib/stringinfo.h"
typedef struct StringInfoData
{
 char *data;
 int len;
 int maxlen;
 int cursor;
} StringInfoData;

typedef StringInfoData *StringInfo;
# 73 "/usr/include/postgresql/14/server/lib/stringinfo.h"
extern StringInfo makeStringInfo(void);






extern void initStringInfo(StringInfo str);






extern void resetStringInfo(StringInfo str);
# 96 "/usr/include/postgresql/14/server/lib/stringinfo.h"
extern void appendStringInfo(StringInfo str, const char *fmt,...) __attribute__((format(gnu_printf, 2, 3)));
# 107 "/usr/include/postgresql/14/server/lib/stringinfo.h"
extern int appendStringInfoVA(StringInfo str, const char *fmt, va_list args) __attribute__((format(gnu_printf, 2, 0)));






extern void appendStringInfoString(StringInfo str, const char *s);






extern void appendStringInfoChar(StringInfo str, char ch);
# 137 "/usr/include/postgresql/14/server/lib/stringinfo.h"
extern void appendStringInfoSpaces(StringInfo str, int count);






extern void appendBinaryStringInfo(StringInfo str,
           const char *data, int datalen);






extern void appendBinaryStringInfoNT(StringInfo str,
          const char *data, int datalen);





extern void enlargeStringInfo(StringInfo str, int needed);
# 15 "/usr/include/postgresql/14/server/lib/pairingheap.h" 2
# 30 "/usr/include/postgresql/14/server/lib/pairingheap.h"
typedef struct pairingheap_node
{
 struct pairingheap_node *first_child;
 struct pairingheap_node *next_sibling;
 struct pairingheap_node *prev_or_parent;
} pairingheap_node;
# 60 "/usr/include/postgresql/14/server/lib/pairingheap.h"
typedef int (*pairingheap_comparator) (const pairingheap_node *a,
            const pairingheap_node *b,
            void *arg);
# 71 "/usr/include/postgresql/14/server/lib/pairingheap.h"
typedef struct pairingheap
{
 pairingheap_comparator ph_compare;
 void *ph_arg;
 pairingheap_node *ph_root;
} pairingheap;

extern pairingheap *pairingheap_allocate(pairingheap_comparator compare,
           void *arg);
extern void pairingheap_free(pairingheap *heap);
extern void pairingheap_add(pairingheap *heap, pairingheap_node *node);
extern pairingheap_node *pairingheap_first(pairingheap *heap);
extern pairingheap_node *pairingheap_remove_first(pairingheap *heap);
extern void pairingheap_remove(pairingheap *heap, pairingheap_node *node);
# 22 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/nodes/params.h" 1
# 18 "/usr/include/postgresql/14/server/nodes/params.h"
struct Bitmapset;
struct ExprState;
struct Param;
struct ParseState;
# 90 "/usr/include/postgresql/14/server/nodes/params.h"
typedef struct ParamExternData
{
 Datum value;
 
# 93 "/usr/include/postgresql/14/server/nodes/params.h" 3 4
_Bool 
# 93 "/usr/include/postgresql/14/server/nodes/params.h"
      isnull;
 uint16 pflags;
 Oid ptype;
} ParamExternData;

typedef struct ParamListInfoData *ParamListInfo;

typedef ParamExternData *(*ParamFetchHook) (ParamListInfo params,
           int paramid, 
# 101 "/usr/include/postgresql/14/server/nodes/params.h" 3 4
                       _Bool 
# 101 "/usr/include/postgresql/14/server/nodes/params.h"
                            speculative,
           ParamExternData *workspace);

typedef void (*ParamCompileHook) (ParamListInfo params, struct Param *param,
          struct ExprState *state,
          Datum *resv, 
# 106 "/usr/include/postgresql/14/server/nodes/params.h" 3 4
                      _Bool 
# 106 "/usr/include/postgresql/14/server/nodes/params.h"
                           *resnull);

typedef void (*ParserSetupHook) (struct ParseState *pstate, void *arg);

typedef struct ParamListInfoData
{
 ParamFetchHook paramFetch;
 void *paramFetchArg;
 ParamCompileHook paramCompile;
 void *paramCompileArg;
 ParserSetupHook parserSetup;
 void *parserSetupArg;
 char *paramValuesStr;
 int numParams;





 ParamExternData params[];
} ParamListInfoData;
# 146 "/usr/include/postgresql/14/server/nodes/params.h"
typedef struct ParamExecData
{
 void *execPlan;
 Datum value;
 
# 150 "/usr/include/postgresql/14/server/nodes/params.h" 3 4
_Bool 
# 150 "/usr/include/postgresql/14/server/nodes/params.h"
      isnull;
} ParamExecData;


typedef struct ParamsErrorCbData
{
 const char *portalName;
 ParamListInfo params;
} ParamsErrorCbData;


extern ParamListInfo makeParamList(int numParams);
extern ParamListInfo copyParamList(ParamListInfo from);
extern Size EstimateParamListSpace(ParamListInfo paramLI);
extern void SerializeParamList(ParamListInfo paramLI, char **start_address);
extern ParamListInfo RestoreParamList(char **start_address);
extern char *BuildParamLogString(ParamListInfo params, char **paramTextValues,
         int valueLen);
extern void ParamsErrorCallback(void *arg);
# 23 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/nodes/plannodes.h" 1
# 17 "/usr/include/postgresql/14/server/nodes/plannodes.h"
# 1 "/usr/include/postgresql/14/server/access/sdir.h" 1
# 22 "/usr/include/postgresql/14/server/access/sdir.h"
typedef enum ScanDirection
{
 BackwardScanDirection = -1,
 NoMovementScanDirection = 0,
 ForwardScanDirection = 1
} ScanDirection;
# 18 "/usr/include/postgresql/14/server/nodes/plannodes.h" 2
# 1 "/usr/include/postgresql/14/server/access/stratnum.h" 1
# 22 "/usr/include/postgresql/14/server/access/stratnum.h"
typedef uint16 StrategyNumber;
# 19 "/usr/include/postgresql/14/server/nodes/plannodes.h" 2


# 1 "/usr/include/postgresql/14/server/nodes/lockoptions.h" 1
# 21 "/usr/include/postgresql/14/server/nodes/lockoptions.h"
typedef enum LockClauseStrength
{
 LCS_NONE,
 LCS_FORKEYSHARE,
 LCS_FORSHARE,
 LCS_FORNOKEYUPDATE,
 LCS_FORUPDATE
} LockClauseStrength;







typedef enum LockWaitPolicy
{

 LockWaitBlock,

 LockWaitSkip,

 LockWaitError
} LockWaitPolicy;




typedef enum LockTupleMode
{

 LockTupleKeyShare,

 LockTupleShare,

 LockTupleNoKeyExclusive,

 LockTupleExclusive
} LockTupleMode;
# 22 "/usr/include/postgresql/14/server/nodes/plannodes.h" 2
# 1 "/usr/include/postgresql/14/server/nodes/primnodes.h" 1
# 39 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct Alias
{
 NodeTag type;
 char *aliasname;
 List *colnames;
} Alias;


typedef enum OnCommitAction
{
 ONCOMMIT_NOOP,
 ONCOMMIT_PRESERVE_ROWS,
 ONCOMMIT_DELETE_ROWS,
 ONCOMMIT_DROP
} OnCommitAction;
# 63 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct RangeVar
{
 NodeTag type;
 char *catalogname;
 char *schemaname;
 char *relname;
 
# 69 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 69 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      inh;

 char relpersistence;
 Alias *alias;
 int location;
} RangeVar;







typedef struct TableFunc
{
 NodeTag type;
 List *ns_uris;
 List *ns_names;
 Node *docexpr;
 Node *rowexpr;
 List *colnames;
 List *coltypes;
 List *coltypmods;
 List *colcollations;
 List *colexprs;
 List *coldefexprs;
 Bitmapset *notnulls;
 int ordinalitycol;
 int location;
} TableFunc;
# 108 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct IntoClause
{
 NodeTag type;

 RangeVar *rel;
 List *colNames;
 char *accessMethod;
 List *options;
 OnCommitAction onCommit;
 char *tableSpaceName;
 Node *viewQuery;
 
# 119 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 119 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      skipData;
} IntoClause;
# 136 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct Expr
{
 NodeTag type;
} Expr;
# 186 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct Var
{
 Expr xpr;
 Index varno;

 AttrNumber varattno;

 Oid vartype;
 int32 vartypmod;
 Oid varcollid;
 Index varlevelsup;


 Index varnosyn;
 AttrNumber varattnosyn;
 int location;
} Var;
# 212 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct Const
{
 Expr xpr;
 Oid consttype;
 int32 consttypmod;
 Oid constcollid;
 int constlen;
 Datum constvalue;
 
# 220 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 220 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      constisnull;

 
# 222 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 222 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      constbyval;



 int location;
} Const;
# 256 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef enum ParamKind
{
 PARAM_EXTERN,
 PARAM_EXEC,
 PARAM_SUBLINK,
 PARAM_MULTIEXPR
} ParamKind;

typedef struct Param
{
 Expr xpr;
 ParamKind paramkind;
 int paramid;
 Oid paramtype;
 int32 paramtypmod;
 Oid paramcollid;
 int location;
} Param;
# 320 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct Aggref
{
 Expr xpr;
 Oid aggfnoid;
 Oid aggtype;
 Oid aggcollid;
 Oid inputcollid;
 Oid aggtranstype;
 List *aggargtypes;
 List *aggdirectargs;
 List *args;
 List *aggorder;
 List *aggdistinct;
 Expr *aggfilter;
 
# 334 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 334 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      aggstar;
 
# 335 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 335 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      aggvariadic;

 char aggkind;
 Index agglevelsup;
 AggSplit aggsplit;
 int aggno;
 int aggtransno;
 int location;
} Aggref;
# 369 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct GroupingFunc
{
 Expr xpr;
 List *args;

 List *refs;
 List *cols;
 Index agglevelsup;
 int location;
} GroupingFunc;




typedef struct WindowFunc
{
 Expr xpr;
 Oid winfnoid;
 Oid wintype;
 Oid wincollid;
 Oid inputcollid;
 List *args;
 Expr *aggfilter;
 Index winref;
 
# 393 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 393 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      winstar;
 
# 394 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 394 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      winagg;
 int location;
} WindowFunc;
# 436 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct SubscriptingRef
{
 Expr xpr;
 Oid refcontainertype;
 Oid refelemtype;
 Oid refrestype;
 int32 reftypmod;
 Oid refcollid;
 List *refupperindexpr;

 List *reflowerindexpr;


 Expr *refexpr;

 Expr *refassgnexpr;

} SubscriptingRef;







typedef enum CoercionContext
{
 COERCION_IMPLICIT,
 COERCION_ASSIGNMENT,
 COERCION_PLPGSQL,
 COERCION_EXPLICIT
} CoercionContext;
# 481 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef enum CoercionForm
{
 COERCE_EXPLICIT_CALL,
 COERCE_EXPLICIT_CAST,
 COERCE_IMPLICIT_CAST,
 COERCE_SQL_SYNTAX
} CoercionForm;




typedef struct FuncExpr
{
 Expr xpr;
 Oid funcid;
 Oid funcresulttype;
 
# 497 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 497 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      funcretset;
 
# 498 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 498 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      funcvariadic;

 CoercionForm funcformat;
 Oid funccollid;
 Oid inputcollid;
 List *args;
 int location;
} FuncExpr;
# 521 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct NamedArgExpr
{
 Expr xpr;
 Expr *arg;
 char *name;
 int argnumber;
 int location;
} NamedArgExpr;
# 539 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct OpExpr
{
 Expr xpr;
 Oid opno;
 Oid opfuncid;
 Oid opresulttype;
 
# 545 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 545 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      opretset;
 Oid opcollid;
 Oid inputcollid;
 List *args;
 int location;
} OpExpr;
# 562 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef OpExpr DistinctExpr;







typedef OpExpr NullIfExpr;
# 588 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct ScalarArrayOpExpr
{
 Expr xpr;
 Oid opno;
 Oid opfuncid;
 Oid hashfuncid;
 
# 594 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 594 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      useOr;
 Oid inputcollid;
 List *args;
 int location;
} ScalarArrayOpExpr;
# 607 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef enum BoolExprType
{
 AND_EXPR, OR_EXPR, NOT_EXPR
} BoolExprType;

typedef struct BoolExpr
{
 Expr xpr;
 BoolExprType boolop;
 List *args;
 int location;
} BoolExpr;
# 671 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef enum SubLinkType
{
 EXISTS_SUBLINK,
 ALL_SUBLINK,
 ANY_SUBLINK,
 ROWCOMPARE_SUBLINK,
 EXPR_SUBLINK,
 MULTIEXPR_SUBLINK,
 ARRAY_SUBLINK,
 CTE_SUBLINK
} SubLinkType;


typedef struct SubLink
{
 Expr xpr;
 SubLinkType subLinkType;
 int subLinkId;
 Node *testexpr;
 List *operName;
 Node *subselect;
 int location;
} SubLink;
# 733 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct SubPlan
{
 Expr xpr;

 SubLinkType subLinkType;

 Node *testexpr;
 List *paramIds;

 int plan_id;

 char *plan_name;

 Oid firstColType;
 int32 firstColTypmod;
 Oid firstColCollation;


 
# 751 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 751 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      useHashTable;

 
# 753 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 753 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      unknownEqFalse;


 
# 756 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 756 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      parallel_safe;



 List *setParam;

 List *parParam;
 List *args;

 Cost startup_cost;
 Cost per_call_cost;
} SubPlan;
# 780 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct AlternativeSubPlan
{
 Expr xpr;
 List *subplans;
} AlternativeSubPlan;
# 795 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct FieldSelect
{
 Expr xpr;
 Expr *arg;
 AttrNumber fieldnum;
 Oid resulttype;

 int32 resulttypmod;
 Oid resultcollid;
} FieldSelect;
# 824 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct FieldStore
{
 Expr xpr;
 Expr *arg;
 List *newvals;
 List *fieldnums;
 Oid resulttype;

} FieldStore;
# 847 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct RelabelType
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;
 int32 resulttypmod;
 Oid resultcollid;
 CoercionForm relabelformat;
 int location;
} RelabelType;
# 867 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct CoerceViaIO
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;

 Oid resultcollid;
 CoercionForm coerceformat;
 int location;
} CoerceViaIO;
# 891 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct ArrayCoerceExpr
{
 Expr xpr;
 Expr *arg;
 Expr *elemexpr;
 Oid resulttype;
 int32 resulttypmod;
 Oid resultcollid;
 CoercionForm coerceformat;
 int location;
} ArrayCoerceExpr;
# 916 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct ConvertRowtypeExpr
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;

 CoercionForm convertformat;
 int location;
} ConvertRowtypeExpr;
# 933 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct CollateExpr
{
 Expr xpr;
 Expr *arg;
 Oid collOid;
 int location;
} CollateExpr;
# 963 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct CaseExpr
{
 Expr xpr;
 Oid casetype;
 Oid casecollid;
 Expr *arg;
 List *args;
 Expr *defresult;
 int location;
} CaseExpr;




typedef struct CaseWhen
{
 Expr xpr;
 Expr *expr;
 Expr *result;
 int location;
} CaseWhen;
# 1005 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct CaseTestExpr
{
 Expr xpr;
 Oid typeId;
 int32 typeMod;
 Oid collation;
} CaseTestExpr;
# 1021 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct ArrayExpr
{
 Expr xpr;
 Oid array_typeid;
 Oid array_collid;
 Oid element_typeid;
 List *elements;
 
# 1028 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 1028 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      multidims;
 int location;
} ArrayExpr;
# 1055 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct RowExpr
{
 Expr xpr;
 List *args;
 Oid row_typeid;
# 1073 "/usr/include/postgresql/14/server/nodes/primnodes.h"
 CoercionForm row_format;
 List *colnames;
 int location;
} RowExpr;
# 1092 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef enum RowCompareType
{

 ROWCOMPARE_LT = 1,
 ROWCOMPARE_LE = 2,
 ROWCOMPARE_EQ = 3,
 ROWCOMPARE_GE = 4,
 ROWCOMPARE_GT = 5,
 ROWCOMPARE_NE = 6
} RowCompareType;

typedef struct RowCompareExpr
{
 Expr xpr;
 RowCompareType rctype;
 List *opnos;
 List *opfamilies;
 List *inputcollids;
 List *largs;
 List *rargs;
} RowCompareExpr;




typedef struct CoalesceExpr
{
 Expr xpr;
 Oid coalescetype;
 Oid coalescecollid;
 List *args;
 int location;
} CoalesceExpr;




typedef enum MinMaxOp
{
 IS_GREATEST,
 IS_LEAST
} MinMaxOp;

typedef struct MinMaxExpr
{
 Expr xpr;
 Oid minmaxtype;
 Oid minmaxcollid;
 Oid inputcollid;
 MinMaxOp op;
 List *args;
 int location;
} MinMaxExpr;
# 1157 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef enum SQLValueFunctionOp
{
 SVFOP_CURRENT_DATE,
 SVFOP_CURRENT_TIME,
 SVFOP_CURRENT_TIME_N,
 SVFOP_CURRENT_TIMESTAMP,
 SVFOP_CURRENT_TIMESTAMP_N,
 SVFOP_LOCALTIME,
 SVFOP_LOCALTIME_N,
 SVFOP_LOCALTIMESTAMP,
 SVFOP_LOCALTIMESTAMP_N,
 SVFOP_CURRENT_ROLE,
 SVFOP_CURRENT_USER,
 SVFOP_USER,
 SVFOP_SESSION_USER,
 SVFOP_CURRENT_CATALOG,
 SVFOP_CURRENT_SCHEMA
} SQLValueFunctionOp;

typedef struct SQLValueFunction
{
 Expr xpr;
 SQLValueFunctionOp op;
 Oid type;
 int32 typmod;
 int location;
} SQLValueFunction;
# 1196 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef enum XmlExprOp
{
 IS_XMLCONCAT,
 IS_XMLELEMENT,
 IS_XMLFOREST,
 IS_XMLPARSE,
 IS_XMLPI,
 IS_XMLROOT,
 IS_XMLSERIALIZE,
 IS_DOCUMENT
} XmlExprOp;

typedef enum
{
 XMLOPTION_DOCUMENT,
 XMLOPTION_CONTENT
} XmlOptionType;

typedef struct XmlExpr
{
 Expr xpr;
 XmlExprOp op;
 char *name;
 List *named_args;
 List *arg_names;
 List *args;
 XmlOptionType xmloption;
 Oid type;
 int32 typmod;
 int location;
} XmlExpr;
# 1247 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef enum NullTestType
{
 IS_NULL, IS_NOT_NULL
} NullTestType;

typedef struct NullTest
{
 Expr xpr;
 Expr *arg;
 NullTestType nulltesttype;
 
# 1257 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 1257 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      argisrow;
 int location;
} NullTest;
# 1270 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef enum BoolTestType
{
 IS_TRUE, IS_NOT_TRUE, IS_FALSE, IS_NOT_FALSE, IS_UNKNOWN, IS_NOT_UNKNOWN
} BoolTestType;

typedef struct BooleanTest
{
 Expr xpr;
 Expr *arg;
 BoolTestType booltesttype;
 int location;
} BooleanTest;
# 1292 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct CoerceToDomain
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;
 int32 resulttypmod;
 Oid resultcollid;
 CoercionForm coercionformat;
 int location;
} CoerceToDomain;
# 1312 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct CoerceToDomainValue
{
 Expr xpr;
 Oid typeId;
 int32 typeMod;
 Oid collation;
 int location;
} CoerceToDomainValue;
# 1328 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct SetToDefault
{
 Expr xpr;
 Oid typeId;
 int32 typeMod;
 Oid collation;
 int location;
} SetToDefault;
# 1349 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct CurrentOfExpr
{
 Expr xpr;
 Index cvarno;
 char *cursor_name;
 int cursor_param;
} CurrentOfExpr;
# 1364 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct NextValueExpr
{
 Expr xpr;
 Oid seqid;
 Oid typeId;
} NextValueExpr;
# 1378 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct InferenceElem
{
 Expr xpr;
 Node *expr;
 Oid infercollid;
 Oid inferopclass;
} InferenceElem;
# 1441 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct TargetEntry
{
 Expr xpr;
 Expr *expr;
 AttrNumber resno;
 char *resname;
 Index ressortgroupref;

 Oid resorigtbl;
 AttrNumber resorigcol;
 
# 1451 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 1451 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      resjunk;

} TargetEntry;
# 1493 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct RangeTblRef
{
 NodeTag type;
 int rtindex;
} RangeTblRef;
# 1527 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct JoinExpr
{
 NodeTag type;
 JoinType jointype;
 
# 1531 "/usr/include/postgresql/14/server/nodes/primnodes.h" 3 4
_Bool 
# 1531 "/usr/include/postgresql/14/server/nodes/primnodes.h"
      isNatural;
 Node *larg;
 Node *rarg;
 List *usingClause;
 Alias *join_using_alias;
 Node *quals;
 Alias *alias;
 int rtindex;
} JoinExpr;
# 1550 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct FromExpr
{
 NodeTag type;
 List *fromlist;
 Node *quals;
} FromExpr;
# 1566 "/usr/include/postgresql/14/server/nodes/primnodes.h"
typedef struct OnConflictExpr
{
 NodeTag type;
 OnConflictAction action;


 List *arbiterElems;

 Node *arbiterWhere;
 Oid constraint;


 List *onConflictSet;
 Node *onConflictWhere;
 int exclRelIndex;
 List *exclRelTlist;
} OnConflictExpr;
# 23 "/usr/include/postgresql/14/server/nodes/plannodes.h" 2
# 42 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct PlannedStmt
{
 NodeTag type;

 CmdType commandType;

 uint64 queryId;

 
# 50 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 50 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      hasReturning;

 
# 52 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 52 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      hasModifyingCTE;

 
# 54 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 54 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      canSetTag;

 
# 56 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 56 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      transientPlan;

 
# 58 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 58 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      dependsOnRole;

 
# 60 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 60 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      parallelModeNeeded;

 int jitFlags;

 struct Plan *planTree;

 List *rtable;


 List *resultRelations;

 List *appendRelations;

 List *subplans;


 Bitmapset *rewindPlanIDs;

 List *rowMarks;

 List *relationOids;

 List *invalItems;

 List *paramExecTypes;

 Node *utilityStmt;


 int stmt_location;
 int stmt_len;
} PlannedStmt;
# 110 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct Plan
{
 NodeTag type;




 Cost startup_cost;
 Cost total_cost;




 double plan_rows;
 int plan_width;




 
# 129 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 129 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      parallel_aware;
 
# 130 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 130 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      parallel_safe;




 
# 135 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 135 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      async_capable;




 int plan_node_id;
 List *targetlist;
 List *qual;
 struct Plan *lefttree;
 struct Plan *righttree;
 List *initPlan;
# 159 "/usr/include/postgresql/14/server/nodes/plannodes.h"
 Bitmapset *extParam;
 Bitmapset *allParam;
} Plan;
# 185 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct Result
{
 Plan plan;
 Node *resconstantqual;
} Result;







typedef struct ProjectSet
{
 Plan plan;
} ProjectSet;
# 217 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct ModifyTable
{
 Plan plan;
 CmdType operation;
 
# 221 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 221 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      canSetTag;
 Index nominalRelation;
 Index rootRelation;
 
# 224 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 224 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      partColsUpdated;
 List *resultRelations;
 List *updateColnosLists;
 List *withCheckOptionLists;
 List *returningLists;
 List *fdwPrivLists;
 Bitmapset *fdwDirectModifyPlans;
 List *rowMarks;
 int epqParam;
 OnConflictAction onConflictAction;
 List *arbiterIndexes;
 List *onConflictSet;
 List *onConflictCols;
 Node *onConflictWhere;
 Index exclRelRTI;
 List *exclRelTlist;
} ModifyTable;

struct PartitionPruneInfo;






typedef struct Append
{
 Plan plan;
 Bitmapset *apprelids;
 List *appendplans;
 int nasyncplans;





 int first_partial_plan;


 struct PartitionPruneInfo *part_prune_info;
} Append;






typedef struct MergeAppend
{
 Plan plan;
 Bitmapset *apprelids;
 List *mergeplans;

 int numCols;
 AttrNumber *sortColIdx;
 Oid *sortOperators;
 Oid *collations;
 
# 281 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 281 "/usr/include/postgresql/14/server/nodes/plannodes.h"
        *nullsFirst;

 struct PartitionPruneInfo *part_prune_info;
} MergeAppend;
# 294 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct RecursiveUnion
{
 Plan plan;
 int wtParam;

 int numCols;

 AttrNumber *dupColIdx;
 Oid *dupOperators;
 Oid *dupCollations;
 long numGroups;
} RecursiveUnion;
# 315 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct BitmapAnd
{
 Plan plan;
 List *bitmapplans;
} BitmapAnd;
# 329 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct BitmapOr
{
 Plan plan;
 
# 332 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 332 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      isshared;
 List *bitmapplans;
} BitmapOr;






typedef struct Scan
{
 Plan plan;
 Index scanrelid;
} Scan;





typedef Scan SeqScan;





typedef struct SampleScan
{
 Scan scan;

 struct TableSampleClause *tablesample;
} SampleScan;
# 401 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct IndexScan
{
 Scan scan;
 Oid indexid;
 List *indexqual;
 List *indexqualorig;
 List *indexorderby;
 List *indexorderbyorig;
 List *indexorderbyops;
 ScanDirection indexorderdir;
} IndexScan;
# 444 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct IndexOnlyScan
{
 Scan scan;
 Oid indexid;
 List *indexqual;
 List *indexorderby;
 List *indextlist;
 ScanDirection indexorderdir;
 List *recheckqual;
} IndexOnlyScan;
# 472 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct BitmapIndexScan
{
 Scan scan;
 Oid indexid;
 
# 476 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 476 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      isshared;
 List *indexqual;
 List *indexqualorig;
} BitmapIndexScan;
# 490 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct BitmapHeapScan
{
 Scan scan;
 List *bitmapqualorig;
} BitmapHeapScan;
# 504 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct TidScan
{
 Scan scan;
 List *tidquals;
} TidScan;
# 517 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct TidRangeScan
{
 Scan scan;
 List *tidrangequals;
} TidRangeScan;
# 539 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct SubqueryScan
{
 Scan scan;
 Plan *subplan;
} SubqueryScan;





typedef struct FunctionScan
{
 Scan scan;
 List *functions;
 
# 553 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 553 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      funcordinality;
} FunctionScan;





typedef struct ValuesScan
{
 Scan scan;
 List *values_lists;
} ValuesScan;





typedef struct TableFuncScan
{
 Scan scan;
 TableFunc *tablefunc;
} TableFuncScan;





typedef struct CteScan
{
 Scan scan;
 int ctePlanId;
 int cteParam;
} CteScan;





typedef struct NamedTuplestoreScan
{
 Scan scan;
 char *enrname;
} NamedTuplestoreScan;





typedef struct WorkTableScan
{
 Scan scan;
 int wtParam;
} WorkTableScan;
# 646 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct ForeignScan
{
 Scan scan;
 CmdType operation;
 Index resultRelation;
 Oid fs_server;
 List *fdw_exprs;
 List *fdw_private;
 List *fdw_scan_tlist;
 List *fdw_recheck_quals;
 Bitmapset *fs_relids;
 
# 657 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 657 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      fsSystemCol;
} ForeignScan;
# 673 "/usr/include/postgresql/14/server/nodes/plannodes.h"
struct CustomScanMethods;

typedef struct CustomScan
{
 Scan scan;
 uint32 flags;

 List *custom_plans;
 List *custom_exprs;
 List *custom_private;
 List *custom_scan_tlist;
 Bitmapset *custom_relids;
 const struct CustomScanMethods *methods;
} CustomScan;
# 716 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct Join
{
 Plan plan;
 JoinType jointype;
 
# 720 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 720 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      inner_unique;
 List *joinqual;
} Join;
# 735 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct NestLoop
{
 Join join;
 List *nestParams;
} NestLoop;

typedef struct NestLoopParam
{
 NodeTag type;
 int paramno;
 Var *paramval;
} NestLoopParam;
# 759 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct MergeJoin
{
 Join join;
 
# 762 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 762 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      skip_mark_restore;
 List *mergeclauses;

 Oid *mergeFamilies;
 Oid *mergeCollations;
 int *mergeStrategies;
 
# 768 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 768 "/usr/include/postgresql/14/server/nodes/plannodes.h"
        *mergeNullsFirst;
} MergeJoin;





typedef struct HashJoin
{
 Join join;
 List *hashclauses;
 List *hashoperators;
 List *hashcollations;





 List *hashkeys;
} HashJoin;





typedef struct Material
{
 Plan plan;
} Material;





typedef struct Memoize
{
 Plan plan;

 int numKeys;

 Oid *hashOperators;
 Oid *collations;
 List *param_exprs;

 
# 812 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 812 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      singlerow;


 
# 815 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 815 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      binary_mode;

 uint32 est_entries;


 Bitmapset *keyparamids;
} Memoize;





typedef struct Sort
{
 Plan plan;
 int numCols;
 AttrNumber *sortColIdx;
 Oid *sortOperators;
 Oid *collations;
 
# 834 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 834 "/usr/include/postgresql/14/server/nodes/plannodes.h"
        *nullsFirst;
} Sort;





typedef struct IncrementalSort
{
 Sort sort;
 int nPresortedCols;
} IncrementalSort;







typedef struct Group
{
 Plan plan;
 int numCols;
 AttrNumber *grpColIdx;
 Oid *grpOperators;
 Oid *grpCollations;
} Group;
# 876 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct Agg
{
 Plan plan;
 AggStrategy aggstrategy;
 AggSplit aggsplit;
 int numCols;
 AttrNumber *grpColIdx;
 Oid *grpOperators;
 Oid *grpCollations;
 long numGroups;
 uint64 transitionSpace;
 Bitmapset *aggParams;

 List *groupingSets;
 List *chain;
} Agg;





typedef struct WindowAgg
{
 Plan plan;
 Index winref;
 int partNumCols;
 AttrNumber *partColIdx;
 Oid *partOperators;
 Oid *partCollations;
 int ordNumCols;
 AttrNumber *ordColIdx;
 Oid *ordOperators;
 Oid *ordCollations;
 int frameOptions;
 Node *startOffset;
 Node *endOffset;

 Oid startInRangeFunc;
 Oid endInRangeFunc;
 Oid inRangeColl;
 
# 916 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 916 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      inRangeAsc;
 
# 917 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 917 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      inRangeNullsFirst;
} WindowAgg;





typedef struct Unique
{
 Plan plan;
 int numCols;
 AttrNumber *uniqColIdx;
 Oid *uniqOperators;
 Oid *uniqCollations;
} Unique;
# 944 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct Gather
{
 Plan plan;
 int num_workers;
 int rescan_param;
 
# 949 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 949 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      single_copy;
 
# 950 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 950 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      invisible;
 Bitmapset *initParam;

} Gather;





typedef struct GatherMerge
{
 Plan plan;
 int num_workers;
 int rescan_param;

 int numCols;
 AttrNumber *sortColIdx;
 Oid *sortOperators;
 Oid *collations;
 
# 969 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 969 "/usr/include/postgresql/14/server/nodes/plannodes.h"
        *nullsFirst;
 Bitmapset *initParam;

} GatherMerge;
# 982 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct Hash
{
 Plan plan;





 List *hashkeys;
 Oid skewTable;
 AttrNumber skewColumn;
 
# 993 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 993 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      skewInherit;

 double rows_total;
} Hash;





typedef struct SetOp
{
 Plan plan;
 SetOpCmd cmd;
 SetOpStrategy strategy;
 int numCols;

 AttrNumber *dupColIdx;
 Oid *dupOperators;
 Oid *dupCollations;
 AttrNumber flagColIdx;
 int firstFlag;
 long numGroups;
} SetOp;
# 1026 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct LockRows
{
 Plan plan;
 List *rowMarks;
 int epqParam;
} LockRows;
# 1040 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct Limit
{
 Plan plan;
 Node *limitOffset;
 Node *limitCount;
 LimitOption limitOption;
 int uniqNumCols;
 AttrNumber *uniqColIdx;
 Oid *uniqOperators;
 Oid *uniqCollations;
} Limit;
# 1083 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef enum RowMarkType
{
 ROW_MARK_EXCLUSIVE,
 ROW_MARK_NOKEYEXCLUSIVE,
 ROW_MARK_SHARE,
 ROW_MARK_KEYSHARE,
 ROW_MARK_REFERENCE,
 ROW_MARK_COPY
} RowMarkType;
# 1133 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct PlanRowMark
{
 NodeTag type;
 Index rti;
 Index prti;
 Index rowmarkId;
 RowMarkType markType;
 int allMarkTypes;
 LockClauseStrength strength;
 LockWaitPolicy waitPolicy;
 
# 1143 "/usr/include/postgresql/14/server/nodes/plannodes.h" 3 4
_Bool 
# 1143 "/usr/include/postgresql/14/server/nodes/plannodes.h"
      isParent;
} PlanRowMark;
# 1177 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct PartitionPruneInfo
{
 NodeTag type;
 List *prune_infos;
 Bitmapset *other_subplans;
} PartitionPruneInfo;
# 1201 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct PartitionedRelPruneInfo
{
 NodeTag type;
 Index rtindex;
 Bitmapset *present_parts;

 int nparts;
 int *subplan_map;
 int *subpart_map;
 Oid *relid_map;







 List *initial_pruning_steps;
 List *exec_pruning_steps;
 Bitmapset *execparamids;

} PartitionedRelPruneInfo;







typedef struct PartitionPruneStep
{
 NodeTag type;
 int step_id;
} PartitionPruneStep;
# 1263 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct PartitionPruneStepOp
{
 PartitionPruneStep step;

 StrategyNumber opstrategy;
 List *exprs;
 List *cmpfns;
 Bitmapset *nullkeys;
} PartitionPruneStepOp;







typedef enum PartitionPruneCombineOp
{
 PARTPRUNE_COMBINE_UNION,
 PARTPRUNE_COMBINE_INTERSECT
} PartitionPruneCombineOp;

typedef struct PartitionPruneStepCombine
{
 PartitionPruneStep step;

 PartitionPruneCombineOp combineOp;
 List *source_stepids;
} PartitionPruneStepCombine;
# 1303 "/usr/include/postgresql/14/server/nodes/plannodes.h"
typedef struct PlanInvalItem
{
 NodeTag type;
 int cacheId;
 uint32 hashValue;
} PlanInvalItem;
# 24 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/nodes/tidbitmap.h" 1
# 26 "/usr/include/postgresql/14/server/nodes/tidbitmap.h"
# 1 "/usr/include/postgresql/14/server/utils/dsa.h" 1
# 17 "/usr/include/postgresql/14/server/utils/dsa.h"
# 1 "/usr/include/postgresql/14/server/port/atomics.h" 1
# 47 "/usr/include/postgresql/14/server/port/atomics.h"
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
# 23 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min-dynamic.h" 3 4


# 24 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min-dynamic.h" 3 4
extern long int __sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));

# 82 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 196 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 200 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 64 "/usr/include/aarch64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/uio_lim.h" 1 3 4
# 65 "/usr/include/aarch64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 204 "/usr/include/limits.h" 2 3 4
# 204 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/aarch64-linux-gnu/11/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/aarch64-linux-gnu/11/include/limits.h" 2 3 4
# 48 "/usr/include/postgresql/14/server/port/atomics.h" 2
# 68 "/usr/include/postgresql/14/server/port/atomics.h"
# 1 "/usr/include/postgresql/14/server/port/atomics/arch-arm.h" 1
# 69 "/usr/include/postgresql/14/server/port/atomics.h" 2
# 95 "/usr/include/postgresql/14/server/port/atomics.h"
# 1 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h" 1
# 63 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"

# 63 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
typedef struct pg_atomic_flag
{






 volatile int value;



} pg_atomic_flag;
# 84 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
typedef struct pg_atomic_uint32
{
 volatile uint32 value;
} pg_atomic_uint32;
# 98 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
typedef struct pg_atomic_uint64
{
 volatile uint64 value __attribute__((aligned(8)));
} pg_atomic_uint64;
# 111 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
static inline 
# 111 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h" 3 4
             _Bool

# 112 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
pg_atomic_test_set_flag_impl(volatile pg_atomic_flag *ptr)
{


 return __sync_lock_test_and_set(&ptr->value, 1) == 0;
}






static inline 
# 124 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h" 3 4
             _Bool

# 125 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
pg_atomic_unlocked_test_flag_impl(volatile pg_atomic_flag *ptr)
{
 return ptr->value == 0;
}




static inline void
pg_atomic_clear_flag_impl(volatile pg_atomic_flag *ptr)
{
 __sync_lock_release(&ptr->value);
}




static inline void
pg_atomic_init_flag_impl(volatile pg_atomic_flag *ptr)
{
 pg_atomic_clear_flag_impl(ptr);
}







static inline 
# 154 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h" 3 4
             _Bool

# 155 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
pg_atomic_compare_exchange_u32_impl(volatile pg_atomic_uint32 *ptr,
         uint32 *expected, uint32 newval)
{

 return __atomic_compare_exchange_n(&ptr->value, expected, newval, 
# 159 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h" 3 4
                                                                  0
# 159 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
                                                                       ,
            5, 5);
}
# 183 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
static inline uint32
pg_atomic_fetch_add_u32_impl(volatile pg_atomic_uint32 *ptr, int32 add_)
{
 return __sync_fetch_and_add(&ptr->value, add_);
}




static inline uint32
pg_atomic_fetch_sub_u32_impl(volatile pg_atomic_uint32 *ptr, int32 sub_)
{
 return __sync_fetch_and_sub(&ptr->value, sub_);
}




static inline uint32
pg_atomic_fetch_and_u32_impl(volatile pg_atomic_uint32 *ptr, uint32 and_)
{
 return __sync_fetch_and_and(&ptr->value, and_);
}




static inline uint32
pg_atomic_fetch_or_u32_impl(volatile pg_atomic_uint32 *ptr, uint32 or_)
{
 return __sync_fetch_and_or(&ptr->value, or_);
}







static inline 
# 222 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h" 3 4
             _Bool

# 223 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
pg_atomic_compare_exchange_u64_impl(volatile pg_atomic_uint64 *ptr,
         uint64 *expected, uint64 newval)
{
 return __atomic_compare_exchange_n(&ptr->value, expected, newval, 
# 226 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h" 3 4
                                                                  0
# 226 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
                                                                       ,
            5, 5);
}
# 250 "/usr/include/postgresql/14/server/port/atomics/generic-gcc.h"
static inline uint64
pg_atomic_fetch_add_u64_impl(volatile pg_atomic_uint64 *ptr, int64 add_)
{
 return __sync_fetch_and_add(&ptr->value, add_);
}




static inline uint64
pg_atomic_fetch_sub_u64_impl(volatile pg_atomic_uint64 *ptr, int64 sub_)
{
 return __sync_fetch_and_sub(&ptr->value, sub_);
}




static inline uint64
pg_atomic_fetch_and_u64_impl(volatile pg_atomic_uint64 *ptr, uint64 and_)
{
 return __sync_fetch_and_and(&ptr->value, and_);
}




static inline uint64
pg_atomic_fetch_or_u64_impl(volatile pg_atomic_uint64 *ptr, uint64 or_)
{
 return __sync_fetch_and_or(&ptr->value, or_);
}
# 96 "/usr/include/postgresql/14/server/port/atomics.h" 2
# 115 "/usr/include/postgresql/14/server/port/atomics.h"
# 1 "/usr/include/postgresql/14/server/port/atomics/fallback.h" 1
# 116 "/usr/include/postgresql/14/server/port/atomics.h" 2





# 1 "/usr/include/postgresql/14/server/port/atomics/generic.h" 1
# 45 "/usr/include/postgresql/14/server/port/atomics/generic.h"
static inline uint32
pg_atomic_read_u32_impl(volatile pg_atomic_uint32 *ptr)
{
 return ptr->value;
}




static inline void
pg_atomic_write_u32_impl(volatile pg_atomic_uint32 *ptr, uint32 val)
{
 ptr->value = val;
}




static inline void
pg_atomic_unlocked_write_u32_impl(volatile pg_atomic_uint32 *ptr, uint32 val)
{
 ptr->value = val;
}
# 160 "/usr/include/postgresql/14/server/port/atomics/generic.h"
static inline void
pg_atomic_init_u32_impl(volatile pg_atomic_uint32 *ptr, uint32 val_)
{
 ptr->value = val_;
}




static inline uint32
pg_atomic_exchange_u32_impl(volatile pg_atomic_uint32 *ptr, uint32 xchg_)
{
 uint32 old;
 old = ptr->value;
 while (!pg_atomic_compare_exchange_u32_impl(ptr, &old, xchg_))
            ;
 return old;
}
# 230 "/usr/include/postgresql/14/server/port/atomics/generic.h"
static inline uint32
pg_atomic_add_fetch_u32_impl(volatile pg_atomic_uint32 *ptr, int32 add_)
{
 return pg_atomic_fetch_add_u32_impl(ptr, add_) + add_;
}




static inline uint32
pg_atomic_sub_fetch_u32_impl(volatile pg_atomic_uint32 *ptr, int32 sub_)
{
 return pg_atomic_fetch_sub_u32_impl(ptr, sub_) - sub_;
}




static inline uint64
pg_atomic_exchange_u64_impl(volatile pg_atomic_uint64 *ptr, uint64 xchg_)
{
 uint64 old;
 old = ptr->value;
 while (!pg_atomic_compare_exchange_u64_impl(ptr, &old, xchg_))
            ;
 return old;
}
# 279 "/usr/include/postgresql/14/server/port/atomics/generic.h"
static inline void
pg_atomic_write_u64_impl(volatile pg_atomic_uint64 *ptr, uint64 val)
{




 pg_atomic_exchange_u64_impl(ptr, val);
}
# 310 "/usr/include/postgresql/14/server/port/atomics/generic.h"
static inline uint64
pg_atomic_read_u64_impl(volatile pg_atomic_uint64 *ptr)
{
 uint64 old = 0;







 pg_atomic_compare_exchange_u64_impl(ptr, &old, 0);

 return old;
}





static inline void
pg_atomic_init_u64_impl(volatile pg_atomic_uint64 *ptr, uint64 val_)
{
 ptr->value = val_;
}
# 387 "/usr/include/postgresql/14/server/port/atomics/generic.h"
static inline uint64
pg_atomic_add_fetch_u64_impl(volatile pg_atomic_uint64 *ptr, int64 add_)
{
 return pg_atomic_fetch_add_u64_impl(ptr, add_) + add_;
}




static inline uint64
pg_atomic_sub_fetch_u64_impl(volatile pg_atomic_uint64 *ptr, int64 sub_)
{
 return pg_atomic_fetch_sub_u64_impl(ptr, sub_) - sub_;
}
# 122 "/usr/include/postgresql/14/server/port/atomics.h" 2
# 171 "/usr/include/postgresql/14/server/port/atomics.h"
static inline void
pg_atomic_init_flag(volatile pg_atomic_flag *ptr)
{
 pg_atomic_init_flag_impl(ptr);
}
# 184 "/usr/include/postgresql/14/server/port/atomics.h"
static inline 
# 184 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
             _Bool

# 185 "/usr/include/postgresql/14/server/port/atomics.h"
pg_atomic_test_set_flag(volatile pg_atomic_flag *ptr)
{
 return pg_atomic_test_set_flag_impl(ptr);
}
# 197 "/usr/include/postgresql/14/server/port/atomics.h"
static inline 
# 197 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
             _Bool

# 198 "/usr/include/postgresql/14/server/port/atomics.h"
pg_atomic_unlocked_test_flag(volatile pg_atomic_flag *ptr)
{
 return pg_atomic_unlocked_test_flag_impl(ptr);
}






static inline void
pg_atomic_clear_flag(volatile pg_atomic_flag *ptr)
{
 pg_atomic_clear_flag_impl(ptr);
}
# 222 "/usr/include/postgresql/14/server/port/atomics.h"
static inline void
pg_atomic_init_u32(volatile pg_atomic_uint32 *ptr, uint32 val)
{
 ((void)
# 225 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 225 "/usr/include/postgresql/14/server/port/atomics.h"
);

 pg_atomic_init_u32_impl(ptr, val);
}
# 240 "/usr/include/postgresql/14/server/port/atomics.h"
static inline uint32
pg_atomic_read_u32(volatile pg_atomic_uint32 *ptr)
{
 ((void)
# 243 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 243 "/usr/include/postgresql/14/server/port/atomics.h"
);
 return pg_atomic_read_u32_impl(ptr);
}
# 257 "/usr/include/postgresql/14/server/port/atomics.h"
static inline void
pg_atomic_write_u32(volatile pg_atomic_uint32 *ptr, uint32 val)
{
 ((void)
# 260 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 260 "/usr/include/postgresql/14/server/port/atomics.h"
);

 pg_atomic_write_u32_impl(ptr, val);
}
# 276 "/usr/include/postgresql/14/server/port/atomics.h"
static inline void
pg_atomic_unlocked_write_u32(volatile pg_atomic_uint32 *ptr, uint32 val)
{
 ((void)
# 279 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 279 "/usr/include/postgresql/14/server/port/atomics.h"
);

 pg_atomic_unlocked_write_u32_impl(ptr, val);
}
# 291 "/usr/include/postgresql/14/server/port/atomics.h"
static inline uint32
pg_atomic_exchange_u32(volatile pg_atomic_uint32 *ptr, uint32 newval)
{
 ((void)
# 294 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 294 "/usr/include/postgresql/14/server/port/atomics.h"
);

 return pg_atomic_exchange_u32_impl(ptr, newval);
}
# 310 "/usr/include/postgresql/14/server/port/atomics.h"
static inline 
# 310 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
             _Bool

# 311 "/usr/include/postgresql/14/server/port/atomics.h"
pg_atomic_compare_exchange_u32(volatile pg_atomic_uint32 *ptr,
          uint32 *expected, uint32 newval)
{
 ((void)
# 314 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 314 "/usr/include/postgresql/14/server/port/atomics.h"
);
 ((void)
# 315 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 315 "/usr/include/postgresql/14/server/port/atomics.h"
);

 return pg_atomic_compare_exchange_u32_impl(ptr, expected, newval);
}
# 327 "/usr/include/postgresql/14/server/port/atomics.h"
static inline uint32
pg_atomic_fetch_add_u32(volatile pg_atomic_uint32 *ptr, int32 add_)
{
 ((void)
# 330 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 330 "/usr/include/postgresql/14/server/port/atomics.h"
);
 return pg_atomic_fetch_add_u32_impl(ptr, add_);
}
# 342 "/usr/include/postgresql/14/server/port/atomics.h"
static inline uint32
pg_atomic_fetch_sub_u32(volatile pg_atomic_uint32 *ptr, int32 sub_)
{
 ((void)
# 345 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 345 "/usr/include/postgresql/14/server/port/atomics.h"
);
 ((void)
# 346 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 346 "/usr/include/postgresql/14/server/port/atomics.h"
);
 return pg_atomic_fetch_sub_u32_impl(ptr, sub_);
}
# 357 "/usr/include/postgresql/14/server/port/atomics.h"
static inline uint32
pg_atomic_fetch_and_u32(volatile pg_atomic_uint32 *ptr, uint32 and_)
{
 ((void)
# 360 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 360 "/usr/include/postgresql/14/server/port/atomics.h"
);
 return pg_atomic_fetch_and_u32_impl(ptr, and_);
}
# 371 "/usr/include/postgresql/14/server/port/atomics.h"
static inline uint32
pg_atomic_fetch_or_u32(volatile pg_atomic_uint32 *ptr, uint32 or_)
{
 ((void)
# 374 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 374 "/usr/include/postgresql/14/server/port/atomics.h"
);
 return pg_atomic_fetch_or_u32_impl(ptr, or_);
}
# 385 "/usr/include/postgresql/14/server/port/atomics.h"
static inline uint32
pg_atomic_add_fetch_u32(volatile pg_atomic_uint32 *ptr, int32 add_)
{
 ((void)
# 388 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 388 "/usr/include/postgresql/14/server/port/atomics.h"
);
 return pg_atomic_add_fetch_u32_impl(ptr, add_);
}
# 400 "/usr/include/postgresql/14/server/port/atomics.h"
static inline uint32
pg_atomic_sub_fetch_u32(volatile pg_atomic_uint32 *ptr, int32 sub_)
{
 ((void)
# 403 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 403 "/usr/include/postgresql/14/server/port/atomics.h"
);
 ((void)
# 404 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 404 "/usr/include/postgresql/14/server/port/atomics.h"
);
 return pg_atomic_sub_fetch_u32_impl(ptr, sub_);
}







static inline void
pg_atomic_init_u64(volatile pg_atomic_uint64 *ptr, uint64 val)
{






 ((void)
# 423 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 423 "/usr/include/postgresql/14/server/port/atomics.h"
);

 pg_atomic_init_u64_impl(ptr, val);
}

static inline uint64
pg_atomic_read_u64(volatile pg_atomic_uint64 *ptr)
{

 ((void)
# 432 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 432 "/usr/include/postgresql/14/server/port/atomics.h"
);

 return pg_atomic_read_u64_impl(ptr);
}

static inline void
pg_atomic_write_u64(volatile pg_atomic_uint64 *ptr, uint64 val)
{

 ((void)
# 441 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 441 "/usr/include/postgresql/14/server/port/atomics.h"
);

 pg_atomic_write_u64_impl(ptr, val);
}

static inline uint64
pg_atomic_exchange_u64(volatile pg_atomic_uint64 *ptr, uint64 newval)
{

 ((void)
# 450 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 450 "/usr/include/postgresql/14/server/port/atomics.h"
);

 return pg_atomic_exchange_u64_impl(ptr, newval);
}

static inline 
# 455 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
             _Bool

# 456 "/usr/include/postgresql/14/server/port/atomics.h"
pg_atomic_compare_exchange_u64(volatile pg_atomic_uint64 *ptr,
          uint64 *expected, uint64 newval)
{

 ((void)
# 460 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 460 "/usr/include/postgresql/14/server/port/atomics.h"
);
 ((void)
# 461 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 461 "/usr/include/postgresql/14/server/port/atomics.h"
);

 return pg_atomic_compare_exchange_u64_impl(ptr, expected, newval);
}

static inline uint64
pg_atomic_fetch_add_u64(volatile pg_atomic_uint64 *ptr, int64 add_)
{

 ((void)
# 470 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 470 "/usr/include/postgresql/14/server/port/atomics.h"
);

 return pg_atomic_fetch_add_u64_impl(ptr, add_);
}

static inline uint64
pg_atomic_fetch_sub_u64(volatile pg_atomic_uint64 *ptr, int64 sub_)
{

 ((void)
# 479 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 479 "/usr/include/postgresql/14/server/port/atomics.h"
);

 ((void)
# 481 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 481 "/usr/include/postgresql/14/server/port/atomics.h"
);
 return pg_atomic_fetch_sub_u64_impl(ptr, sub_);
}

static inline uint64
pg_atomic_fetch_and_u64(volatile pg_atomic_uint64 *ptr, uint64 and_)
{

 ((void)
# 489 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 489 "/usr/include/postgresql/14/server/port/atomics.h"
);

 return pg_atomic_fetch_and_u64_impl(ptr, and_);
}

static inline uint64
pg_atomic_fetch_or_u64(volatile pg_atomic_uint64 *ptr, uint64 or_)
{

 ((void)
# 498 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 498 "/usr/include/postgresql/14/server/port/atomics.h"
);

 return pg_atomic_fetch_or_u64_impl(ptr, or_);
}

static inline uint64
pg_atomic_add_fetch_u64(volatile pg_atomic_uint64 *ptr, int64 add_)
{

 ((void)
# 507 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 507 "/usr/include/postgresql/14/server/port/atomics.h"
);

 return pg_atomic_add_fetch_u64_impl(ptr, add_);
}

static inline uint64
pg_atomic_sub_fetch_u64(volatile pg_atomic_uint64 *ptr, int64 sub_)
{

 ((void)
# 516 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 516 "/usr/include/postgresql/14/server/port/atomics.h"
);

 ((void)
# 518 "/usr/include/postgresql/14/server/port/atomics.h" 3 4
1
# 518 "/usr/include/postgresql/14/server/port/atomics.h"
);
 return pg_atomic_sub_fetch_u64_impl(ptr, sub_);
}
# 18 "/usr/include/postgresql/14/server/utils/dsa.h" 2
# 1 "/usr/include/postgresql/14/server/storage/dsm.h" 1
# 16 "/usr/include/postgresql/14/server/storage/dsm.h"
# 1 "/usr/include/postgresql/14/server/storage/dsm_impl.h" 1
# 42 "/usr/include/postgresql/14/server/storage/dsm_impl.h"
extern int dynamic_shared_memory_type;
extern int min_dynamic_shared_memory;
# 55 "/usr/include/postgresql/14/server/storage/dsm_impl.h"
typedef uint32 dsm_handle;


typedef enum
{
 DSM_OP_CREATE,
 DSM_OP_ATTACH,
 DSM_OP_DETACH,
 DSM_OP_DESTROY
} dsm_op;


extern 
# 67 "/usr/include/postgresql/14/server/storage/dsm_impl.h" 3 4
      _Bool 
# 67 "/usr/include/postgresql/14/server/storage/dsm_impl.h"
           dsm_impl_op(dsm_op op, dsm_handle handle, Size request_size,
      void **impl_private, void **mapped_address, Size *mapped_size,
      int elevel);


extern void dsm_impl_pin_segment(dsm_handle handle, void *impl_private,
         void **impl_private_pm_handle);
extern void dsm_impl_unpin_segment(dsm_handle handle, void **impl_private);
# 17 "/usr/include/postgresql/14/server/storage/dsm.h" 2

typedef struct dsm_segment dsm_segment;







struct PGShmemHeader;
extern void dsm_cleanup_using_control_segment(dsm_handle old_control_handle);
extern void dsm_postmaster_startup(struct PGShmemHeader *);
extern void dsm_backend_shutdown(void);
extern void dsm_detach_all(void);

extern size_t dsm_estimate_size(void);
extern void dsm_shmem_init(void);






extern dsm_segment *dsm_create(Size size, int flags);
extern dsm_segment *dsm_attach(dsm_handle h);
extern void dsm_detach(dsm_segment *seg);


extern void dsm_pin_mapping(dsm_segment *seg);
extern void dsm_unpin_mapping(dsm_segment *seg);
extern void dsm_pin_segment(dsm_segment *seg);
extern void dsm_unpin_segment(dsm_handle h);
extern dsm_segment *dsm_find_mapping(dsm_handle h);


extern void *dsm_segment_address(dsm_segment *seg);
extern Size dsm_segment_map_length(dsm_segment *seg);
extern dsm_handle dsm_segment_handle(dsm_segment *seg);


typedef void (*on_dsm_detach_callback) (dsm_segment *, Datum arg);
extern void on_dsm_detach(dsm_segment *seg,
        on_dsm_detach_callback function, Datum arg);
extern void cancel_on_dsm_detach(dsm_segment *seg,
         on_dsm_detach_callback function, Datum arg);
extern void reset_on_dsm_detach(void);
# 19 "/usr/include/postgresql/14/server/utils/dsa.h" 2


struct dsa_area;
typedef struct dsa_area dsa_area;
# 62 "/usr/include/postgresql/14/server/utils/dsa.h"
typedef uint64 dsa_pointer;
typedef pg_atomic_uint64 dsa_pointer_atomic;
# 100 "/usr/include/postgresql/14/server/utils/dsa.h"
typedef dsm_handle dsa_handle;

extern dsa_area *dsa_create(int tranche_id);
extern dsa_area *dsa_create_in_place(void *place, size_t size,
          int tranche_id, dsm_segment *segment);
extern dsa_area *dsa_attach(dsa_handle handle);
extern dsa_area *dsa_attach_in_place(void *place, dsm_segment *segment);
extern void dsa_release_in_place(void *place);
extern void dsa_on_dsm_detach_release_in_place(dsm_segment *, Datum);
extern void dsa_on_shmem_exit_release_in_place(int, Datum);
extern void dsa_pin_mapping(dsa_area *area);
extern void dsa_detach(dsa_area *area);
extern void dsa_pin(dsa_area *area);
extern void dsa_unpin(dsa_area *area);
extern void dsa_set_size_limit(dsa_area *area, size_t limit);
extern size_t dsa_minimum_size(void);
extern dsa_handle dsa_get_handle(dsa_area *area);
extern dsa_pointer dsa_allocate_extended(dsa_area *area, size_t size, int flags);
extern void dsa_free(dsa_area *area, dsa_pointer dp);
extern void *dsa_get_address(dsa_area *area, dsa_pointer dp);
extern void dsa_trim(dsa_area *area);
extern void dsa_dump(dsa_area *area);
# 27 "/usr/include/postgresql/14/server/nodes/tidbitmap.h" 2






typedef struct TIDBitmap TIDBitmap;


typedef struct TBMIterator TBMIterator;
typedef struct TBMSharedIterator TBMSharedIterator;


typedef struct TBMIterateResult
{
 BlockNumber blockno;
 int ntuples;
 
# 44 "/usr/include/postgresql/14/server/nodes/tidbitmap.h" 3 4
_Bool 
# 44 "/usr/include/postgresql/14/server/nodes/tidbitmap.h"
      recheck;

 OffsetNumber offsets[];
} TBMIterateResult;



extern TIDBitmap *tbm_create(long maxbytes, dsa_area *dsa);
extern void tbm_free(TIDBitmap *tbm);
extern void tbm_free_shared_area(dsa_area *dsa, dsa_pointer dp);

extern void tbm_add_tuples(TIDBitmap *tbm,
         const ItemPointer tids, int ntids,
         
# 57 "/usr/include/postgresql/14/server/nodes/tidbitmap.h" 3 4
        _Bool 
# 57 "/usr/include/postgresql/14/server/nodes/tidbitmap.h"
             recheck);
extern void tbm_add_page(TIDBitmap *tbm, BlockNumber pageno);

extern void tbm_union(TIDBitmap *a, const TIDBitmap *b);
extern void tbm_intersect(TIDBitmap *a, const TIDBitmap *b);

extern 
# 63 "/usr/include/postgresql/14/server/nodes/tidbitmap.h" 3 4
      _Bool 
# 63 "/usr/include/postgresql/14/server/nodes/tidbitmap.h"
           tbm_is_empty(const TIDBitmap *tbm);

extern TBMIterator *tbm_begin_iterate(TIDBitmap *tbm);
extern dsa_pointer tbm_prepare_shared_iterate(TIDBitmap *tbm);
extern TBMIterateResult *tbm_iterate(TBMIterator *iterator);
extern TBMIterateResult *tbm_shared_iterate(TBMSharedIterator *iterator);
extern void tbm_end_iterate(TBMIterator *iterator);
extern void tbm_end_shared_iterate(TBMSharedIterator *iterator);
extern TBMSharedIterator *tbm_attach_shared_iterate(dsa_area *dsa,
             dsa_pointer dp);
extern long tbm_calculate_entries(double maxbytes);
# 25 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/partitioning/partdefs.h" 1
# 16 "/usr/include/postgresql/14/server/partitioning/partdefs.h"
typedef struct PartitionBoundInfoData *PartitionBoundInfo;

typedef struct PartitionKeyData *PartitionKey;

typedef struct PartitionBoundSpec PartitionBoundSpec;

typedef struct PartitionDescData *PartitionDesc;

typedef struct PartitionDirectoryData *PartitionDirectory;
# 26 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/storage/condition_variable.h" 1
# 25 "/usr/include/postgresql/14/server/storage/condition_variable.h"
# 1 "/usr/include/postgresql/14/server/storage/proclist_types.h" 1
# 26 "/usr/include/postgresql/14/server/storage/proclist_types.h"
typedef struct proclist_node
{
 int next;
 int prev;
} proclist_node;





typedef struct proclist_head
{
 int head;
 int tail;
} proclist_head;




typedef struct proclist_mutable_iter
{
 int cur;
 int next;
} proclist_mutable_iter;
# 26 "/usr/include/postgresql/14/server/storage/condition_variable.h" 2
# 1 "/usr/include/postgresql/14/server/storage/spin.h" 1
# 54 "/usr/include/postgresql/14/server/storage/spin.h"
# 1 "/usr/include/postgresql/14/server/storage/s_lock.h" 1
# 330 "/usr/include/postgresql/14/server/storage/s_lock.h"
typedef int slock_t;

static __inline__ int
tas(volatile slock_t *lock)
{
 return __sync_lock_test_and_set(lock, 1);
}
# 1028 "/usr/include/postgresql/14/server/storage/s_lock.h"
extern slock_t dummy_spinlock;




extern int s_lock(volatile slock_t *lock, const char *file, int line, const char *func);




extern void set_spins_per_delay(int shared_spins_per_delay);
extern int update_spins_per_delay(int shared_spins_per_delay);





typedef struct
{
 int spins;
 int delays;
 int cur_delay;
 const char *file;
 int line;
 const char *func;
} SpinDelayStatus;

static inline void
init_spin_delay(SpinDelayStatus *status,
    const char *file, int line, const char *func)
{
 status->spins = 0;
 status->delays = 0;
 status->cur_delay = 0;
 status->file = file;
 status->line = line;
 status->func = func;
}


void perform_spin_delay(SpinDelayStatus *status);
void finish_spin_delay(SpinDelayStatus *status);
# 55 "/usr/include/postgresql/14/server/storage/spin.h" 2
# 69 "/usr/include/postgresql/14/server/storage/spin.h"
extern int SpinlockSemas(void);
extern Size SpinlockSemaSize(void);
# 27 "/usr/include/postgresql/14/server/storage/condition_variable.h" 2

typedef struct
{
 slock_t mutex;
 proclist_head wakeup;
} ConditionVariable;






typedef union ConditionVariableMinimallyPadded
{
 ConditionVariable cv;
 char pad[(sizeof(ConditionVariable) <= 16 ? 16 : 32)];
} ConditionVariableMinimallyPadded;


extern void ConditionVariableInit(ConditionVariable *cv);
# 56 "/usr/include/postgresql/14/server/storage/condition_variable.h"
extern void ConditionVariableSleep(ConditionVariable *cv, uint32 wait_event_info);
extern 
# 57 "/usr/include/postgresql/14/server/storage/condition_variable.h" 3 4
      _Bool 
# 57 "/usr/include/postgresql/14/server/storage/condition_variable.h"
           ConditionVariableTimedSleep(ConditionVariable *cv, long timeout,
          uint32 wait_event_info);
extern void ConditionVariableCancelSleep(void);







extern void ConditionVariablePrepareToSleep(ConditionVariable *cv);


extern void ConditionVariableSignal(ConditionVariable *cv);
extern void ConditionVariableBroadcast(ConditionVariable *cv);
# 27 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/utils/hsearch.h" 1
# 21 "/usr/include/postgresql/14/server/utils/hsearch.h"
typedef uint32 (*HashValueFunc) (const void *key, Size keysize);







typedef int (*HashCompareFunc) (const void *key1, const void *key2,
        Size keysize);






typedef void *(*HashCopyFunc) (void *dest, const void *src, Size keysize);






typedef void *(*HashAllocFunc) (Size request);






typedef struct HASHELEMENT
{
 struct HASHELEMENT *link;
 uint32 hashvalue;
} HASHELEMENT;


typedef struct HASHHDR HASHHDR;


typedef struct HTAB HTAB;



typedef struct HASHCTL
{

 long num_partitions;

 long ssize;

 long dsize;
 long max_dsize;

 Size keysize;
 Size entrysize;

 HashValueFunc hash;

 HashCompareFunc match;

 HashCopyFunc keycopy;

 HashAllocFunc alloc;

 MemoryContext hcxt;

 HASHHDR *hctl;
} HASHCTL;
# 111 "/usr/include/postgresql/14/server/utils/hsearch.h"
typedef enum
{
 HASH_FIND,
 HASH_ENTER,
 HASH_REMOVE,
 HASH_ENTER_NULL
} HASHACTION;


typedef struct
{
 HTAB *hashp;
 uint32 curBucket;
 HASHELEMENT *curEntry;
} HASH_SEQ_STATUS;




extern HTAB *hash_create(const char *tabname, long nelem,
       const HASHCTL *info, int flags);
extern void hash_destroy(HTAB *hashp);
extern void hash_stats(const char *where, HTAB *hashp);
extern void *hash_search(HTAB *hashp, const void *keyPtr, HASHACTION action,
       
# 135 "/usr/include/postgresql/14/server/utils/hsearch.h" 3 4
      _Bool 
# 135 "/usr/include/postgresql/14/server/utils/hsearch.h"
           *foundPtr);
extern uint32 get_hash_value(HTAB *hashp, const void *keyPtr);
extern void *hash_search_with_hash_value(HTAB *hashp, const void *keyPtr,
           uint32 hashvalue, HASHACTION action,
           
# 139 "/usr/include/postgresql/14/server/utils/hsearch.h" 3 4
          _Bool 
# 139 "/usr/include/postgresql/14/server/utils/hsearch.h"
               *foundPtr);
extern 
# 140 "/usr/include/postgresql/14/server/utils/hsearch.h" 3 4
      _Bool 
# 140 "/usr/include/postgresql/14/server/utils/hsearch.h"
           hash_update_hash_key(HTAB *hashp, void *existingEntry,
         const void *newKeyPtr);
extern long hash_get_num_entries(HTAB *hashp);
extern void hash_seq_init(HASH_SEQ_STATUS *status, HTAB *hashp);
extern void *hash_seq_search(HASH_SEQ_STATUS *status);
extern void hash_seq_term(HASH_SEQ_STATUS *status);
extern void hash_freeze(HTAB *hashp);
extern Size hash_estimate_size(long num_entries, Size entrysize);
extern long hash_select_dirsize(long num_entries);
extern Size hash_get_shared_size(HASHCTL *info, int flags);
extern void AtEOXact_HashTables(
# 150 "/usr/include/postgresql/14/server/utils/hsearch.h" 3 4
                               _Bool 
# 150 "/usr/include/postgresql/14/server/utils/hsearch.h"
                                    isCommit);
extern void AtEOSubXact_HashTables(
# 151 "/usr/include/postgresql/14/server/utils/hsearch.h" 3 4
                                  _Bool 
# 151 "/usr/include/postgresql/14/server/utils/hsearch.h"
                                       isCommit, int nestDepth);
# 28 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/utils/queryenvironment.h" 1
# 20 "/usr/include/postgresql/14/server/utils/queryenvironment.h"
typedef enum EphemeralNameRelationType
{
 ENR_NAMED_TUPLESTORE
} EphemeralNameRelationType;
# 32 "/usr/include/postgresql/14/server/utils/queryenvironment.h"
typedef struct EphemeralNamedRelationMetadataData
{
 char *name;


 Oid reliddesc;
 TupleDesc tupdesc;

 EphemeralNameRelationType enrtype;
 double enrtuples;
} EphemeralNamedRelationMetadataData;

typedef EphemeralNamedRelationMetadataData *EphemeralNamedRelationMetadata;





typedef struct EphemeralNamedRelationData
{
 EphemeralNamedRelationMetadataData md;
 void *reldata;
} EphemeralNamedRelationData;

typedef EphemeralNamedRelationData *EphemeralNamedRelation;







typedef struct QueryEnvironment QueryEnvironment;


extern QueryEnvironment *create_queryEnv(void);
extern EphemeralNamedRelationMetadata get_visible_ENR_metadata(QueryEnvironment *queryEnv, const char *refname);
extern void register_ENR(QueryEnvironment *queryEnv, EphemeralNamedRelation enr);
extern void unregister_ENR(QueryEnvironment *queryEnv, const char *name);
extern EphemeralNamedRelation get_ENR(QueryEnvironment *queryEnv, const char *name);
extern TupleDesc ENRMetadataGetTupDesc(EphemeralNamedRelationMetadata enrmd);
# 29 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/utils/reltrigger.h" 1
# 23 "/usr/include/postgresql/14/server/utils/reltrigger.h"
typedef struct Trigger
{
 Oid tgoid;

 char *tgname;
 Oid tgfoid;
 int16 tgtype;
 char tgenabled;
 
# 31 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 31 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      tgisinternal;
 
# 32 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 32 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      tgisclone;
 Oid tgconstrrelid;
 Oid tgconstrindid;
 Oid tgconstraint;
 
# 36 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 36 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      tgdeferrable;
 
# 37 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 37 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      tginitdeferred;
 int16 tgnargs;
 int16 tgnattr;
 int16 *tgattr;
 char **tgargs;
 char *tgqual;
 char *tgoldtable;
 char *tgnewtable;
} Trigger;

typedef struct TriggerDesc
{
 Trigger *triggers;
 int numtriggers;





 
# 56 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 56 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_insert_before_row;
 
# 57 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 57 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_insert_after_row;
 
# 58 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 58 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_insert_instead_row;
 
# 59 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 59 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_insert_before_statement;
 
# 60 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 60 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_insert_after_statement;
 
# 61 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 61 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_update_before_row;
 
# 62 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 62 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_update_after_row;
 
# 63 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 63 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_update_instead_row;
 
# 64 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 64 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_update_before_statement;
 
# 65 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 65 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_update_after_statement;
 
# 66 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 66 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_delete_before_row;
 
# 67 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 67 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_delete_after_row;
 
# 68 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 68 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_delete_instead_row;
 
# 69 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 69 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_delete_before_statement;
 
# 70 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 70 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_delete_after_statement;

 
# 72 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 72 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_truncate_before_statement;
 
# 73 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 73 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_truncate_after_statement;

 
# 75 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 75 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_insert_new_table;
 
# 76 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 76 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_update_old_table;
 
# 77 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 77 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_update_new_table;
 
# 78 "/usr/include/postgresql/14/server/utils/reltrigger.h" 3 4
_Bool 
# 78 "/usr/include/postgresql/14/server/utils/reltrigger.h"
      trig_delete_old_table;
} TriggerDesc;
# 30 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/utils/sharedtuplestore.h" 1
# 17 "/usr/include/postgresql/14/server/utils/sharedtuplestore.h"
# 1 "/usr/include/postgresql/14/server/storage/fd.h" 1
# 46 "/usr/include/postgresql/14/server/storage/fd.h"
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/dirent.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/bits/dirent.h" 3 4

# 22 "/usr/include/aarch64-linux-gnu/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 173 "/usr/include/dirent.h" 3 4
extern struct dirent64 *readdir64 (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__deprecated__));
# 201 "/usr/include/dirent.h" 3 4
extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
  __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__deprecated__));




extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 245 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 246 "/usr/include/dirent.h" 2 3 4
# 255 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 278 "/usr/include/dirent.h" 3 4
extern int scandir64 (const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (const struct dirent64 *),
        int (*__cmp) (const struct dirent64 **,
        const struct dirent64 **))
     __attribute__ ((__nonnull__ (1, 2)));
# 293 "/usr/include/dirent.h" 3 4
extern int scandirat (int __dfd, const char *__restrict __dir,
        struct dirent ***__restrict __namelist,
        int (*__selector) (const struct dirent *),
        int (*__cmp) (const struct dirent **,
        const struct dirent **))
     __attribute__ ((__nonnull__ (2, 3)));
# 315 "/usr/include/dirent.h" 3 4
extern int scandirat64 (int __dfd, const char *__restrict __dir,
   struct dirent64 ***__restrict __namelist,
   int (*__selector) (const struct dirent64 *),
   int (*__cmp) (const struct dirent64 **,
          const struct dirent64 **))
     __attribute__ ((__nonnull__ (2, 3)));




extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 340 "/usr/include/dirent.h" 3 4
extern int alphasort64 (const struct dirent64 **__e1,
   const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 353 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
# 370 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));






extern int versionsort (const struct dirent **__e1,
   const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 396 "/usr/include/dirent.h" 3 4
extern int versionsort64 (const struct dirent64 **__e1,
     const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





# 1 "/usr/include/aarch64-linux-gnu/bits/dirent_ext.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/dirent_ext.h" 3 4






extern __ssize_t getdents64 (int __fd, void *__buffer, size_t __length)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 405 "/usr/include/dirent.h" 2 3 4
# 47 "/usr/include/postgresql/14/server/storage/fd.h" 2


# 48 "/usr/include/postgresql/14/server/storage/fd.h"
typedef enum RecoveryInitSyncMethod
{
 RECOVERY_INIT_SYNC_METHOD_FSYNC,
 RECOVERY_INIT_SYNC_METHOD_SYNCFS
} RecoveryInitSyncMethod;

struct iovec;

typedef int File;



extern int max_files_per_process;
extern 
# 61 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                  _Bool 
# 61 "/usr/include/postgresql/14/server/storage/fd.h"
                       data_sync_retry;
extern int recovery_init_sync_method;




extern int max_safe_fds;
# 87 "/usr/include/postgresql/14/server/storage/fd.h"
extern File PathNameOpenFile(const char *fileName, int fileFlags);
extern File PathNameOpenFilePerm(const char *fileName, int fileFlags, mode_t fileMode);
extern File OpenTemporaryFile(
# 89 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                             _Bool 
# 89 "/usr/include/postgresql/14/server/storage/fd.h"
                                  interXact);
extern void FileClose(File file);
extern int FilePrefetch(File file, off_t offset, int amount, uint32 wait_event_info);
extern int FileRead(File file, char *buffer, int amount, off_t offset, uint32 wait_event_info);
extern int FileWrite(File file, char *buffer, int amount, off_t offset, uint32 wait_event_info);
extern int FileSync(File file, uint32 wait_event_info);
extern off_t FileSize(File file);
extern int FileTruncate(File file, off_t offset, uint32 wait_event_info);
extern void FileWriteback(File file, off_t offset, off_t nbytes, uint32 wait_event_info);
extern char *FilePathName(File file);
extern int FileGetRawDesc(File file);
extern int FileGetRawFlags(File file);
extern mode_t FileGetRawMode(File file);


extern File PathNameCreateTemporaryFile(const char *name, 
# 104 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                                                         _Bool 
# 104 "/usr/include/postgresql/14/server/storage/fd.h"
                                                              error_on_failure);
extern File PathNameOpenTemporaryFile(const char *path, int mode);
extern 
# 106 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
      _Bool 
# 106 "/usr/include/postgresql/14/server/storage/fd.h"
           PathNameDeleteTemporaryFile(const char *name, 
# 106 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                                                         _Bool 
# 106 "/usr/include/postgresql/14/server/storage/fd.h"
                                                              error_on_failure);
extern void PathNameCreateTemporaryDir(const char *base, const char *name);
extern void PathNameDeleteTemporaryDir(const char *name);
extern void TempTablespacePath(char *path, Oid tablespace);


extern FILE *AllocateFile(const char *name, const char *mode);
extern int FreeFile(FILE *file);


extern FILE *OpenPipeStream(const char *command, const char *mode);
extern int ClosePipeStream(FILE *file);


extern DIR *AllocateDir(const char *dirname);
extern struct dirent *ReadDir(DIR *dir, const char *dirname);
extern struct dirent *ReadDirExtended(DIR *dir, const char *dirname,
           int elevel);
extern int FreeDir(DIR *dir);


extern int OpenTransientFile(const char *fileName, int fileFlags);
extern int OpenTransientFilePerm(const char *fileName, int fileFlags, mode_t fileMode);
extern int CloseTransientFile(int fd);


extern int BasicOpenFile(const char *fileName, int fileFlags);
extern int BasicOpenFilePerm(const char *fileName, int fileFlags, mode_t fileMode);


extern 
# 136 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
      _Bool 
# 136 "/usr/include/postgresql/14/server/storage/fd.h"
           AcquireExternalFD(void);
extern void ReserveExternalFD(void);
extern void ReleaseExternalFD(void);


extern int MakePGDirectory(const char *directoryName);


extern void InitFileAccess(void);
extern void set_max_safe_fds(void);
extern void closeAllVfds(void);
extern void SetTempTablespaces(Oid *tableSpaces, int numSpaces);
extern 
# 148 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
      _Bool 
# 148 "/usr/include/postgresql/14/server/storage/fd.h"
           TempTablespacesAreSet(void);
extern int GetTempTablespaces(Oid *tableSpaces, int numSpaces);
extern Oid GetNextTempTableSpace(void);
extern void AtEOXact_Files(
# 151 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                          _Bool 
# 151 "/usr/include/postgresql/14/server/storage/fd.h"
                               isCommit);
extern void AtEOSubXact_Files(
# 152 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                             _Bool 
# 152 "/usr/include/postgresql/14/server/storage/fd.h"
                                  isCommit, SubTransactionId mySubid,
         SubTransactionId parentSubid);
extern void RemovePgTempFiles(void);
extern void RemovePgTempFilesInDir(const char *tmpdirname, 
# 155 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                                                          _Bool 
# 155 "/usr/include/postgresql/14/server/storage/fd.h"
                                                               missing_ok,
           
# 156 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
          _Bool 
# 156 "/usr/include/postgresql/14/server/storage/fd.h"
               unlink_all);
extern 
# 157 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
      _Bool 
# 157 "/usr/include/postgresql/14/server/storage/fd.h"
           looks_like_temp_rel_name(const char *name);

extern int pg_fsync(int fd);
extern int pg_fsync_no_writethrough(int fd);
extern int pg_fsync_writethrough(int fd);
extern int pg_fdatasync(int fd);
extern void pg_flush_data(int fd, off_t offset, off_t amount);
extern ssize_t pg_pwritev_with_retry(int fd,
          const struct iovec *iov,
          int iovcnt,
          off_t offset);
extern int pg_truncate(const char *path, off_t length);
extern void fsync_fname(const char *fname, 
# 169 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                                          _Bool 
# 169 "/usr/include/postgresql/14/server/storage/fd.h"
                                               isdir);
extern int fsync_fname_ext(const char *fname, 
# 170 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                                             _Bool 
# 170 "/usr/include/postgresql/14/server/storage/fd.h"
                                                  isdir, 
# 170 "/usr/include/postgresql/14/server/storage/fd.h" 3 4
                                                         _Bool 
# 170 "/usr/include/postgresql/14/server/storage/fd.h"
                                                              ignore_perm, int elevel);
extern int durable_rename(const char *oldfile, const char *newfile, int loglevel);
extern int durable_unlink(const char *fname, int loglevel);
extern int durable_rename_excl(const char *oldfile, const char *newfile, int loglevel);
extern void SyncDataDirectory(void);
extern int data_sync_elevel(int elevel);
# 18 "/usr/include/postgresql/14/server/utils/sharedtuplestore.h" 2
# 1 "/usr/include/postgresql/14/server/storage/sharedfileset.h" 1
# 25 "/usr/include/postgresql/14/server/storage/sharedfileset.h"
typedef struct SharedFileSet
{
 pid_t creator_pid;
 uint32 number;
 slock_t mutex;
 int refcnt;
 int ntablespaces;
 Oid tablespaces[8];


} SharedFileSet;

extern void SharedFileSetInit(SharedFileSet *fileset, dsm_segment *seg);
extern void SharedFileSetAttach(SharedFileSet *fileset, dsm_segment *seg);
extern File SharedFileSetCreate(SharedFileSet *fileset, const char *name);
extern File SharedFileSetOpen(SharedFileSet *fileset, const char *name,
         int mode);
extern 
# 42 "/usr/include/postgresql/14/server/storage/sharedfileset.h" 3 4
      _Bool 
# 42 "/usr/include/postgresql/14/server/storage/sharedfileset.h"
           SharedFileSetDelete(SharedFileSet *fileset, const char *name,
        
# 43 "/usr/include/postgresql/14/server/storage/sharedfileset.h" 3 4
       _Bool 
# 43 "/usr/include/postgresql/14/server/storage/sharedfileset.h"
            error_on_failure);
extern void SharedFileSetDeleteAll(SharedFileSet *fileset);
extern void SharedFileSetUnregister(SharedFileSet *input_fileset);
# 19 "/usr/include/postgresql/14/server/utils/sharedtuplestore.h" 2

struct SharedTuplestore;
typedef struct SharedTuplestore SharedTuplestore;

struct SharedTuplestoreAccessor;
typedef struct SharedTuplestoreAccessor SharedTuplestoreAccessor;







extern size_t sts_estimate(int participants);

extern SharedTuplestoreAccessor *sts_initialize(SharedTuplestore *sts,
            int participants,
            int my_participant_number,
            size_t meta_data_size,
            int flags,
            SharedFileSet *fileset,
            const char *name);

extern SharedTuplestoreAccessor *sts_attach(SharedTuplestore *sts,
           int my_participant_number,
           SharedFileSet *fileset);

extern void sts_end_write(SharedTuplestoreAccessor *accessor);

extern void sts_reinitialize(SharedTuplestoreAccessor *accessor);

extern void sts_begin_parallel_scan(SharedTuplestoreAccessor *accessor);

extern void sts_end_parallel_scan(SharedTuplestoreAccessor *accessor);

extern void sts_puttuple(SharedTuplestoreAccessor *accessor,
       void *meta_data,
       MinimalTuple tuple);

extern MinimalTuple sts_parallel_scan_next(SharedTuplestoreAccessor *accessor,
             void *meta_data);
# 31 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/utils/snapshot.h" 1
# 18 "/usr/include/postgresql/14/server/utils/snapshot.h"
# 1 "/usr/include/postgresql/14/server/datatype/timestamp.h" 1
# 19 "/usr/include/postgresql/14/server/utils/snapshot.h" 2
# 35 "/usr/include/postgresql/14/server/utils/snapshot.h"
typedef enum SnapshotType
{
# 50 "/usr/include/postgresql/14/server/utils/snapshot.h"
 SNAPSHOT_MVCC = 0,
# 64 "/usr/include/postgresql/14/server/utils/snapshot.h"
 SNAPSHOT_SELF,




 SNAPSHOT_ANY,




 SNAPSHOT_TOAST,
# 102 "/usr/include/postgresql/14/server/utils/snapshot.h"
 SNAPSHOT_DIRTY,






 SNAPSHOT_HISTORIC_MVCC,
# 118 "/usr/include/postgresql/14/server/utils/snapshot.h"
 SNAPSHOT_NON_VACUUMABLE
} SnapshotType;

typedef struct SnapshotData *Snapshot;
# 142 "/usr/include/postgresql/14/server/utils/snapshot.h"
typedef struct SnapshotData
{
 SnapshotType snapshot_type;
# 157 "/usr/include/postgresql/14/server/utils/snapshot.h"
 TransactionId xmin;
 TransactionId xmax;
# 168 "/usr/include/postgresql/14/server/utils/snapshot.h"
 TransactionId *xip;
 uint32 xcnt;
# 180 "/usr/include/postgresql/14/server/utils/snapshot.h"
 TransactionId *subxip;
 int32 subxcnt;
 
# 182 "/usr/include/postgresql/14/server/utils/snapshot.h" 3 4
_Bool 
# 182 "/usr/include/postgresql/14/server/utils/snapshot.h"
      suboverflowed;

 
# 184 "/usr/include/postgresql/14/server/utils/snapshot.h" 3 4
_Bool 
# 184 "/usr/include/postgresql/14/server/utils/snapshot.h"
      takenDuringRecovery;
 
# 185 "/usr/include/postgresql/14/server/utils/snapshot.h" 3 4
_Bool 
# 185 "/usr/include/postgresql/14/server/utils/snapshot.h"
      copied;

 CommandId curcid;





 uint32 speculativeToken;





 struct GlobalVisState *vistest;




 uint32 active_count;
 uint32 regd_count;
 pairingheap_node ph_node;

 TimestampTz whenTaken;
 XLogRecPtr lsn;






 uint64 snapXactCompletionCount;
} SnapshotData;
# 32 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/utils/sortsupport.h" 1
# 56 "/usr/include/postgresql/14/server/utils/sortsupport.h"
# 1 "/usr/include/postgresql/14/server/utils/relcache.h" 1
# 26 "/usr/include/postgresql/14/server/utils/relcache.h"
typedef struct RelationData *Relation;







typedef Relation *RelationPtr;




extern Relation RelationIdGetRelation(Oid relationId);
extern void RelationClose(Relation relation);




extern List *RelationGetFKeyList(Relation relation);
extern List *RelationGetIndexList(Relation relation);
extern List *RelationGetStatExtList(Relation relation);
extern Oid RelationGetPrimaryKeyIndex(Relation relation);
extern Oid RelationGetReplicaIndex(Relation relation);
extern List *RelationGetIndexExpressions(Relation relation);
extern List *RelationGetDummyIndexExpressions(Relation relation);
extern List *RelationGetIndexPredicate(Relation relation);
extern Datum *RelationGetIndexRawAttOptions(Relation relation);
extern bytea **RelationGetIndexAttOptions(Relation relation, 
# 54 "/usr/include/postgresql/14/server/utils/relcache.h" 3 4
                                                            _Bool 
# 54 "/usr/include/postgresql/14/server/utils/relcache.h"
                                                                 copy);

typedef enum IndexAttrBitmapKind
{
 INDEX_ATTR_BITMAP_ALL,
 INDEX_ATTR_BITMAP_KEY,
 INDEX_ATTR_BITMAP_PRIMARY_KEY,
 INDEX_ATTR_BITMAP_IDENTITY_KEY
} IndexAttrBitmapKind;

extern Bitmapset *RelationGetIndexAttrBitmap(Relation relation,
            IndexAttrBitmapKind attrKind);

extern Bitmapset *RelationGetIdentityKeyBitmap(Relation relation);

extern void RelationGetExclusionInfo(Relation indexRelation,
          Oid **operators,
          Oid **procs,
          uint16 **strategies);

extern void RelationInitIndexAccessInfo(Relation relation);


struct PublicationActions;
extern struct PublicationActions *GetRelationPublicationActions(Relation relation);

extern void RelationInitTableAccessMethod(Relation relation);




extern int errtable(Relation rel);
extern int errtablecol(Relation rel, int attnum);
extern int errtablecolname(Relation rel, const char *colname);
extern int errtableconstraint(Relation rel, const char *conname);




extern void RelationCacheInitialize(void);
extern void RelationCacheInitializePhase2(void);
extern void RelationCacheInitializePhase3(void);




extern Relation RelationBuildLocalRelation(const char *relname,
             Oid relnamespace,
             TupleDesc tupDesc,
             Oid relid,
             Oid accessmtd,
             Oid relfilenode,
             Oid reltablespace,
             
# 107 "/usr/include/postgresql/14/server/utils/relcache.h" 3 4
            _Bool 
# 107 "/usr/include/postgresql/14/server/utils/relcache.h"
                 shared_relation,
             
# 108 "/usr/include/postgresql/14/server/utils/relcache.h" 3 4
            _Bool 
# 108 "/usr/include/postgresql/14/server/utils/relcache.h"
                 mapped_relation,
             char relpersistence,
             char relkind);




extern void RelationSetNewRelfilenode(Relation relation, char persistence);
extern void RelationAssumeNewRelfilenode(Relation relation);




extern void RelationForgetRelation(Oid rid);

extern void RelationCacheInvalidateEntry(Oid relationId);

extern void RelationCacheInvalidate(
# 125 "/usr/include/postgresql/14/server/utils/relcache.h" 3 4
                                   _Bool 
# 125 "/usr/include/postgresql/14/server/utils/relcache.h"
                                        debug_discard);

extern void RelationCloseSmgrByOid(Oid relationId);






extern void AtEOXact_RelationCache(
# 134 "/usr/include/postgresql/14/server/utils/relcache.h" 3 4
                                  _Bool 
# 134 "/usr/include/postgresql/14/server/utils/relcache.h"
                                       isCommit);
extern void AtEOSubXact_RelationCache(
# 135 "/usr/include/postgresql/14/server/utils/relcache.h" 3 4
                                     _Bool 
# 135 "/usr/include/postgresql/14/server/utils/relcache.h"
                                          isCommit, SubTransactionId mySubid,
           SubTransactionId parentSubid);




extern 
# 141 "/usr/include/postgresql/14/server/utils/relcache.h" 3 4
      _Bool 
# 141 "/usr/include/postgresql/14/server/utils/relcache.h"
           RelationIdIsInInitFile(Oid relationId);
extern void RelationCacheInitFilePreInvalidate(void);
extern void RelationCacheInitFilePostInvalidate(void);
extern void RelationCacheInitFileRemove(void);


extern 
# 147 "/usr/include/postgresql/14/server/utils/relcache.h" 3 4
      _Bool 
# 147 "/usr/include/postgresql/14/server/utils/relcache.h"
           criticalRelcachesBuilt;


extern 
# 150 "/usr/include/postgresql/14/server/utils/relcache.h" 3 4
      _Bool 
# 150 "/usr/include/postgresql/14/server/utils/relcache.h"
           criticalSharedRelcachesBuilt;
# 57 "/usr/include/postgresql/14/server/utils/sortsupport.h" 2

typedef struct SortSupportData *SortSupport;

typedef struct SortSupportData
{




 MemoryContext ssup_cxt;
 Oid ssup_collation;






 
# 74 "/usr/include/postgresql/14/server/utils/sortsupport.h" 3 4
_Bool 
# 74 "/usr/include/postgresql/14/server/utils/sortsupport.h"
      ssup_reverse;
 
# 75 "/usr/include/postgresql/14/server/utils/sortsupport.h" 3 4
_Bool 
# 75 "/usr/include/postgresql/14/server/utils/sortsupport.h"
      ssup_nulls_first;





 AttrNumber ssup_attno;





 void *ssup_extra;
# 106 "/usr/include/postgresql/14/server/utils/sortsupport.h"
 int (*comparator) (Datum x, Datum y, SortSupport ssup);
# 155 "/usr/include/postgresql/14/server/utils/sortsupport.h"
 
# 155 "/usr/include/postgresql/14/server/utils/sortsupport.h" 3 4
_Bool 
# 155 "/usr/include/postgresql/14/server/utils/sortsupport.h"
      abbreviate;
# 172 "/usr/include/postgresql/14/server/utils/sortsupport.h"
 Datum (*abbrev_converter) (Datum original, SortSupport ssup);
# 182 "/usr/include/postgresql/14/server/utils/sortsupport.h"
 
# 182 "/usr/include/postgresql/14/server/utils/sortsupport.h" 3 4
_Bool 
# 182 "/usr/include/postgresql/14/server/utils/sortsupport.h"
      (*abbrev_abort) (int memtupcount, SortSupport ssup);
# 191 "/usr/include/postgresql/14/server/utils/sortsupport.h"
 int (*abbrev_full_comparator) (Datum x, Datum y, SortSupport ssup);
} SortSupportData;






static inline int
ApplySortComparator(Datum datum1, 
# 200 "/usr/include/postgresql/14/server/utils/sortsupport.h" 3 4
                                 _Bool 
# 200 "/usr/include/postgresql/14/server/utils/sortsupport.h"
                                      isNull1,
     Datum datum2, 
# 201 "/usr/include/postgresql/14/server/utils/sortsupport.h" 3 4
                  _Bool 
# 201 "/usr/include/postgresql/14/server/utils/sortsupport.h"
                       isNull2,
     SortSupport ssup)
{
 int compare;

 if (isNull1)
 {
  if (isNull2)
   compare = 0;
  else if (ssup->ssup_nulls_first)
   compare = -1;
  else
   compare = 1;
 }
 else if (isNull2)
 {
  if (ssup->ssup_nulls_first)
   compare = 1;
  else
   compare = -1;
 }
 else
 {
  compare = ssup->comparator(datum1, datum2, ssup);
  if (ssup->ssup_reverse)
   ((compare) = ((compare) < 0) ? 1 : -(compare));
 }

 return compare;
}






static inline int
ApplySortAbbrevFullComparator(Datum datum1, 
# 238 "/usr/include/postgresql/14/server/utils/sortsupport.h" 3 4
                                           _Bool 
# 238 "/usr/include/postgresql/14/server/utils/sortsupport.h"
                                                isNull1,
         Datum datum2, 
# 239 "/usr/include/postgresql/14/server/utils/sortsupport.h" 3 4
                      _Bool 
# 239 "/usr/include/postgresql/14/server/utils/sortsupport.h"
                           isNull2,
         SortSupport ssup)
{
 int compare;

 if (isNull1)
 {
  if (isNull2)
   compare = 0;
  else if (ssup->ssup_nulls_first)
   compare = -1;
  else
   compare = 1;
 }
 else if (isNull2)
 {
  if (ssup->ssup_nulls_first)
   compare = 1;
  else
   compare = -1;
 }
 else
 {
  compare = ssup->abbrev_full_comparator(datum1, datum2, ssup);
  if (ssup->ssup_reverse)
   ((compare) = ((compare) < 0) ? 1 : -(compare));
 }

 return compare;
}


extern void PrepareSortSupportComparisonShim(Oid cmpFunc, SortSupport ssup);
extern void PrepareSortSupportFromOrderingOp(Oid orderingOp, SortSupport ssup);
extern void PrepareSortSupportFromIndexRel(Relation indexRel, int16 strategy,
             SortSupport ssup);
extern void PrepareSortSupportFromGistIndexRel(Relation indexRel, SortSupport ssup);
# 33 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/utils/tuplesort.h" 1
# 24 "/usr/include/postgresql/14/server/utils/tuplesort.h"
# 1 "/usr/include/postgresql/14/server/access/itup.h" 1
# 35 "/usr/include/postgresql/14/server/access/itup.h"
typedef struct IndexTupleData
{
 ItemPointerData t_tid;
# 49 "/usr/include/postgresql/14/server/access/itup.h"
 unsigned short t_info;

} IndexTupleData;

typedef IndexTupleData *IndexTuple;

typedef struct IndexAttributeBitMapData
{
 bits8 bits[(32 + 8 - 1) / 8];
} IndexAttributeBitMapData;

typedef IndexAttributeBitMapData * IndexAttributeBitMap;
# 151 "/usr/include/postgresql/14/server/access/itup.h"
extern IndexTuple index_form_tuple(TupleDesc tupleDescriptor,
           Datum *values, 
# 152 "/usr/include/postgresql/14/server/access/itup.h" 3 4
                         _Bool 
# 152 "/usr/include/postgresql/14/server/access/itup.h"
                              *isnull);
extern Datum nocache_index_getattr(IndexTuple tup, int attnum,
           TupleDesc tupleDesc);
extern void index_deform_tuple(IndexTuple tup, TupleDesc tupleDescriptor,
          Datum *values, 
# 156 "/usr/include/postgresql/14/server/access/itup.h" 3 4
                        _Bool 
# 156 "/usr/include/postgresql/14/server/access/itup.h"
                             *isnull);
extern void index_deform_tuple_internal(TupleDesc tupleDescriptor,
          Datum *values, 
# 158 "/usr/include/postgresql/14/server/access/itup.h" 3 4
                        _Bool 
# 158 "/usr/include/postgresql/14/server/access/itup.h"
                             *isnull,
          char *tp, bits8 *bp, int hasnulls);
extern IndexTuple CopyIndexTuple(IndexTuple source);
extern IndexTuple index_truncate_tuple(TupleDesc sourceDescriptor,
            IndexTuple source, int leavenatts);
# 25 "/usr/include/postgresql/14/server/utils/tuplesort.h" 2
# 34 "/usr/include/postgresql/14/server/utils/tuplesort.h"
typedef struct Tuplesortstate Tuplesortstate;
typedef struct Sharedsort Sharedsort;






typedef struct SortCoordinateData
{

 
# 45 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
_Bool 
# 45 "/usr/include/postgresql/14/server/utils/tuplesort.h"
      isWorker;






 int nParticipants;


 Sharedsort *sharedsort;
} SortCoordinateData;

typedef struct SortCoordinateData *SortCoordinate;
# 72 "/usr/include/postgresql/14/server/utils/tuplesort.h"
typedef enum
{
 SORT_TYPE_STILL_IN_PROGRESS = 0,
 SORT_TYPE_TOP_N_HEAPSORT = 1 << 0,
 SORT_TYPE_QUICKSORT = 1 << 1,
 SORT_TYPE_EXTERNAL_SORT = 1 << 2,
 SORT_TYPE_EXTERNAL_MERGE = 1 << 3
} TuplesortMethod;



typedef enum
{
 SORT_SPACE_TYPE_DISK,
 SORT_SPACE_TYPE_MEMORY
} TuplesortSpaceType;

typedef struct TuplesortInstrumentation
{
 TuplesortMethod sortMethod;
 TuplesortSpaceType spaceType;
 int64 spaceUsed;
} TuplesortInstrumentation;
# 199 "/usr/include/postgresql/14/server/utils/tuplesort.h"
extern Tuplesortstate *tuplesort_begin_heap(TupleDesc tupDesc,
           int nkeys, AttrNumber *attNums,
           Oid *sortOperators, Oid *sortCollations,
           
# 202 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
          _Bool 
# 202 "/usr/include/postgresql/14/server/utils/tuplesort.h"
               *nullsFirstFlags,
           int workMem, SortCoordinate coordinate,
           
# 204 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
          _Bool 
# 204 "/usr/include/postgresql/14/server/utils/tuplesort.h"
               randomAccess);
extern Tuplesortstate *tuplesort_begin_cluster(TupleDesc tupDesc,
              Relation indexRel, int workMem,
              SortCoordinate coordinate, 
# 207 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
                                        _Bool 
# 207 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                                             randomAccess);
extern Tuplesortstate *tuplesort_begin_index_btree(Relation heapRel,
               Relation indexRel,
               
# 210 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
              _Bool 
# 210 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                   enforceUnique,
               int workMem, SortCoordinate coordinate,
               
# 212 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
              _Bool 
# 212 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                   randomAccess);
extern Tuplesortstate *tuplesort_begin_index_hash(Relation heapRel,
              Relation indexRel,
              uint32 high_mask,
              uint32 low_mask,
              uint32 max_buckets,
              int workMem, SortCoordinate coordinate,
              
# 219 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
             _Bool 
# 219 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                  randomAccess);
extern Tuplesortstate *tuplesort_begin_index_gist(Relation heapRel,
              Relation indexRel,
              int workMem, SortCoordinate coordinate,
              
# 223 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
             _Bool 
# 223 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                  randomAccess);
extern Tuplesortstate *tuplesort_begin_datum(Oid datumType,
            Oid sortOperator, Oid sortCollation,
            
# 226 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
           _Bool 
# 226 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                nullsFirstFlag,
            int workMem, SortCoordinate coordinate,
            
# 228 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
           _Bool 
# 228 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                randomAccess);

extern void tuplesort_set_bound(Tuplesortstate *state, int64 bound);
extern 
# 231 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
      _Bool 
# 231 "/usr/include/postgresql/14/server/utils/tuplesort.h"
           tuplesort_used_bound(Tuplesortstate *state);

extern void tuplesort_puttupleslot(Tuplesortstate *state,
           TupleTableSlot *slot);
extern void tuplesort_putheaptuple(Tuplesortstate *state, HeapTuple tup);
extern void tuplesort_putindextuplevalues(Tuplesortstate *state,
            Relation rel, ItemPointer self,
            Datum *values, 
# 238 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
                          _Bool 
# 238 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                               *isnull);
extern void tuplesort_putdatum(Tuplesortstate *state, Datum val,
          
# 240 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
         _Bool 
# 240 "/usr/include/postgresql/14/server/utils/tuplesort.h"
              isNull);

extern void tuplesort_performsort(Tuplesortstate *state);

extern 
# 244 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
      _Bool 
# 244 "/usr/include/postgresql/14/server/utils/tuplesort.h"
           tuplesort_gettupleslot(Tuplesortstate *state, 
# 244 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
                                                         _Bool 
# 244 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                                                              forward,
           
# 245 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
          _Bool 
# 245 "/usr/include/postgresql/14/server/utils/tuplesort.h"
               copy, TupleTableSlot *slot, Datum *abbrev);
extern HeapTuple tuplesort_getheaptuple(Tuplesortstate *state, 
# 246 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
                                                              _Bool 
# 246 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                                                                   forward);
extern IndexTuple tuplesort_getindextuple(Tuplesortstate *state, 
# 247 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
                                                                _Bool 
# 247 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                                                                     forward);
extern 
# 248 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
      _Bool 
# 248 "/usr/include/postgresql/14/server/utils/tuplesort.h"
           tuplesort_getdatum(Tuplesortstate *state, 
# 248 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
                                                     _Bool 
# 248 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                                                          forward,
          Datum *val, 
# 249 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
                     _Bool 
# 249 "/usr/include/postgresql/14/server/utils/tuplesort.h"
                          *isNull, Datum *abbrev);

extern 
# 251 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
      _Bool 
# 251 "/usr/include/postgresql/14/server/utils/tuplesort.h"
           tuplesort_skiptuples(Tuplesortstate *state, int64 ntuples,
         
# 252 "/usr/include/postgresql/14/server/utils/tuplesort.h" 3 4
        _Bool 
# 252 "/usr/include/postgresql/14/server/utils/tuplesort.h"
             forward);

extern void tuplesort_end(Tuplesortstate *state);

extern void tuplesort_reset(Tuplesortstate *state);

extern void tuplesort_get_stats(Tuplesortstate *state,
        TuplesortInstrumentation *stats);
extern const char *tuplesort_method_name(TuplesortMethod m);
extern const char *tuplesort_space_type_name(TuplesortSpaceType t);

extern int tuplesort_merge_order(int64 allowedMem);

extern Size tuplesort_estimate_shared(int nworkers);
extern void tuplesort_initialize_shared(Sharedsort *shared, int nWorkers,
          dsm_segment *seg);
extern void tuplesort_attach_shared(Sharedsort *shared, dsm_segment *seg);
# 277 "/usr/include/postgresql/14/server/utils/tuplesort.h"
extern void tuplesort_rescan(Tuplesortstate *state);
extern void tuplesort_markpos(Tuplesortstate *state);
extern void tuplesort_restorepos(Tuplesortstate *state);
# 34 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/14/server/utils/tuplestore.h" 1
# 40 "/usr/include/postgresql/14/server/utils/tuplestore.h"
typedef struct Tuplestorestate Tuplestorestate;






extern Tuplestorestate *tuplestore_begin_heap(
# 47 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
                                             _Bool 
# 47 "/usr/include/postgresql/14/server/utils/tuplestore.h"
                                                  randomAccess,
             
# 48 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
            _Bool 
# 48 "/usr/include/postgresql/14/server/utils/tuplestore.h"
                 interXact,
             int maxKBytes);

extern void tuplestore_set_eflags(Tuplestorestate *state, int eflags);

extern void tuplestore_puttupleslot(Tuplestorestate *state,
         TupleTableSlot *slot);
extern void tuplestore_puttuple(Tuplestorestate *state, HeapTuple tuple);
extern void tuplestore_putvalues(Tuplestorestate *state, TupleDesc tdesc,
         Datum *values, 
# 57 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
                       _Bool 
# 57 "/usr/include/postgresql/14/server/utils/tuplestore.h"
                            *isnull);




extern int tuplestore_alloc_read_pointer(Tuplestorestate *state, int eflags);

extern void tuplestore_select_read_pointer(Tuplestorestate *state, int ptr);

extern void tuplestore_copy_read_pointer(Tuplestorestate *state,
           int srcptr, int destptr);

extern void tuplestore_trim(Tuplestorestate *state);

extern 
# 71 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
      _Bool 
# 71 "/usr/include/postgresql/14/server/utils/tuplestore.h"
           tuplestore_in_memory(Tuplestorestate *state);

extern 
# 73 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
      _Bool 
# 73 "/usr/include/postgresql/14/server/utils/tuplestore.h"
           tuplestore_gettupleslot(Tuplestorestate *state, 
# 73 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
                                                           _Bool 
# 73 "/usr/include/postgresql/14/server/utils/tuplestore.h"
                                                                forward,
         
# 74 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
        _Bool 
# 74 "/usr/include/postgresql/14/server/utils/tuplestore.h"
             copy, TupleTableSlot *slot);

extern 
# 76 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
      _Bool 
# 76 "/usr/include/postgresql/14/server/utils/tuplestore.h"
           tuplestore_advance(Tuplestorestate *state, 
# 76 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
                                                      _Bool 
# 76 "/usr/include/postgresql/14/server/utils/tuplestore.h"
                                                           forward);

extern 
# 78 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
      _Bool 
# 78 "/usr/include/postgresql/14/server/utils/tuplestore.h"
           tuplestore_skiptuples(Tuplestorestate *state,
          int64 ntuples, 
# 79 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
                        _Bool 
# 79 "/usr/include/postgresql/14/server/utils/tuplestore.h"
                             forward);

extern int64 tuplestore_tuple_count(Tuplestorestate *state);

extern 
# 83 "/usr/include/postgresql/14/server/utils/tuplestore.h" 3 4
      _Bool 
# 83 "/usr/include/postgresql/14/server/utils/tuplestore.h"
           tuplestore_ateof(Tuplestorestate *state);

extern void tuplestore_rescan(Tuplestorestate *state);

extern void tuplestore_clear(Tuplestorestate *state);

extern void tuplestore_end(Tuplestorestate *state);
# 35 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2

struct PlanState;
struct ParallelHashJoinState;
struct ExecRowMark;
struct ExprState;
struct ExprContext;
struct RangeTblEntry;
struct ExprEvalStep;
struct CopyMultiInsertBuffer;
# 53 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef Datum (*ExprStateEvalFunc) (struct ExprState *expression,
         struct ExprContext *econtext,
         
# 55 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
        _Bool 
# 55 "/usr/include/postgresql/14/server/nodes/execnodes.h"
             *isNull);





typedef struct ExprState
{
 NodeTag tag;

 uint8 flags;






 
# 72 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 72 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      resnull;

 Datum resvalue;





 TupleTableSlot *resultslot;




 struct ExprEvalStep *steps;





 ExprStateEvalFunc evalfunc;


 Expr *expr;


 void *evalfunc_private;






 int steps_len;
 int steps_alloc;


 struct PlanState *parent;
 ParamListInfo ext_params;

 Datum *innermost_caseval;
 
# 112 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 112 "/usr/include/postgresql/14/server/nodes/execnodes.h"
        *innermost_casenull;

 Datum *innermost_domainval;
 
# 115 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 115 "/usr/include/postgresql/14/server/nodes/execnodes.h"
        *innermost_domainnull;
} ExprState;
# 155 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct IndexInfo
{
 NodeTag type;
 int ii_NumIndexAttrs;
 int ii_NumIndexKeyAttrs;
 AttrNumber ii_IndexAttrNumbers[32];
 List *ii_Expressions;
 List *ii_ExpressionsState;
 List *ii_Predicate;
 ExprState *ii_PredicateState;
 Oid *ii_ExclusionOps;
 Oid *ii_ExclusionProcs;
 uint16 *ii_ExclusionStrats;
 Oid *ii_UniqueOps;
 Oid *ii_UniqueProcs;
 uint16 *ii_UniqueStrats;
 Datum *ii_OpclassOptions;
 
# 172 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 172 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ii_Unique;
 
# 173 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 173 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ii_ReadyForInserts;
 
# 174 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 174 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ii_Concurrent;
 
# 175 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 175 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ii_BrokenHotChain;
 int ii_ParallelWorkers;
 Oid ii_Am;
 void *ii_AmCache;
 MemoryContext ii_Context;
} IndexInfo;







typedef void (*ExprContextCallbackFunction) (Datum arg);

typedef struct ExprContext_CB
{
 struct ExprContext_CB *next;
 ExprContextCallbackFunction function;
 Datum arg;
} ExprContext_CB;
# 220 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct ExprContext
{
 NodeTag type;



 TupleTableSlot *ecxt_scantuple;

 TupleTableSlot *ecxt_innertuple;

 TupleTableSlot *ecxt_outertuple;


 MemoryContext ecxt_per_query_memory;
 MemoryContext ecxt_per_tuple_memory;


 ParamExecData *ecxt_param_exec_vals;
 ParamListInfo ecxt_param_list_info;






 Datum *ecxt_aggvalues;

 
# 247 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 247 "/usr/include/postgresql/14/server/nodes/execnodes.h"
        *ecxt_aggnulls;



 Datum caseValue_datum;

 
# 253 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 253 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      caseValue_isNull;



 Datum domainValue_datum;

 
# 259 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 259 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      domainValue_isNull;


 struct EState *ecxt_estate;


 ExprContext_CB *ecxt_callbacks;
} ExprContext;





typedef enum
{
 ExprSingleResult,
 ExprMultipleResult,
 ExprEndResult
} ExprDoneCond;







typedef enum
{
 SFRM_ValuePerCall = 0x01,
 SFRM_Materialize = 0x02,
 SFRM_Materialize_Random = 0x04,
 SFRM_Materialize_Preferred = 0x08
} SetFunctionReturnMode;







typedef struct ReturnSetInfo
{
 NodeTag type;

 ExprContext *econtext;
 TupleDesc expectedDesc;
 int allowedModes;

 SetFunctionReturnMode returnMode;
 ExprDoneCond isDone;

 Tuplestorestate *setResult;
 TupleDesc setDesc;
} ReturnSetInfo;
# 329 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct ProjectionInfo
{
 NodeTag type;

 ExprState pi_state;

 ExprContext *pi_exprContext;
} ProjectionInfo;
# 362 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct JunkFilter
{
 NodeTag type;
 List *jf_targetList;
 TupleDesc jf_cleanTupType;
 AttrNumber *jf_cleanMap;
 TupleTableSlot *jf_resultSlot;
} JunkFilter;






typedef struct OnConflictSetState
{
 NodeTag type;

 TupleTableSlot *oc_Existing;
 TupleTableSlot *oc_ProjSlot;
 ProjectionInfo *oc_ProjInfo;
 ExprState *oc_WhereClause;
} OnConflictSetState;
# 403 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct ResultRelInfo
{
 NodeTag type;


 Index ri_RangeTableIndex;


 Relation ri_RelationDesc;


 int ri_NumIndices;


 RelationPtr ri_IndexRelationDescs;


 IndexInfo **ri_IndexRelationInfo;





 AttrNumber ri_RowIdAttNo;


 ProjectionInfo *ri_projectNew;

 TupleTableSlot *ri_newTupleSlot;

 TupleTableSlot *ri_oldTupleSlot;

 
# 435 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 435 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ri_projectNewInfoValid;


 TriggerDesc *ri_TrigDesc;


 FmgrInfo *ri_TrigFunctions;


 ExprState **ri_TrigWhenExprs;


 Instrumentation *ri_TrigInstrument;


 TupleTableSlot *ri_ReturningSlot;
 TupleTableSlot *ri_TrigOldSlot;
 TupleTableSlot *ri_TrigNewSlot;


 struct FdwRoutine *ri_FdwRoutine;


 void *ri_FdwState;


 
# 461 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 461 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ri_usesFdwDirectModify;


 int ri_NumSlots;
 int ri_NumSlotsInitialized;
 int ri_BatchSize;
 TupleTableSlot **ri_Slots;
 TupleTableSlot **ri_PlanSlots;


 List *ri_WithCheckOptions;


 List *ri_WithCheckOptionExprs;


 ExprState **ri_ConstraintExprs;


 ExprState **ri_GeneratedExprs;


 int ri_NumGeneratedNeeded;


 List *ri_returningList;


 ProjectionInfo *ri_projectReturning;


 List *ri_onConflictArbiterIndexes;


 OnConflictSetState *ri_onConflict;


 ExprState *ri_PartitionCheckExpr;
# 512 "/usr/include/postgresql/14/server/nodes/execnodes.h"
 struct ResultRelInfo *ri_RootResultRelInfo;
 TupleConversionMap *ri_RootToPartitionMap;
 TupleTableSlot *ri_PartitionTupleSlot;







 TupleConversionMap *ri_ChildToRootMap;
 
# 523 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 523 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ri_ChildToRootMapValid;


 struct CopyMultiInsertBuffer *ri_CopyMultiInsertBuffer;
} ResultRelInfo;







typedef struct AsyncRequest
{
 struct PlanState *requestor;
 struct PlanState *requestee;
 int request_index;
 
# 540 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 540 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      callback_pending;
 
# 541 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 541 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      request_complete;
 TupleTableSlot *result;

} AsyncRequest;







typedef struct EState
{
 NodeTag type;


 ScanDirection es_direction;
 Snapshot es_snapshot;
 Snapshot es_crosscheck_snapshot;
 List *es_range_table;
 Index es_range_table_size;
 Relation *es_relations;

 struct ExecRowMark **es_rowmarks;

 PlannedStmt *es_plannedstmt;
 const char *es_sourceText;

 JunkFilter *es_junkFilter;


 CommandId es_output_cid;


 ResultRelInfo **es_result_relations;


 List *es_opened_result_relations;



 PartitionDirectory es_partition_directory;





 List *es_tuple_routing_result_relations;


 List *es_trig_target_relations;


 ParamListInfo es_param_list_info;
 ParamExecData *es_param_exec_vals;

 QueryEnvironment *es_queryEnv;


 MemoryContext es_query_cxt;

 List *es_tupleTable;

 uint64 es_processed;

 int es_top_eflags;
 int es_instrument;
 
# 608 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 608 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      es_finished;

 List *es_exprcontexts;

 List *es_subplanstates;

 List *es_auxmodifytables;






 ExprContext *es_per_tuple_exprcontext;







 struct EPQState *es_epq_active;

 
# 631 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 631 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      es_use_parallel_mode;


 struct dsa_area *es_query_dsa;
# 645 "/usr/include/postgresql/14/server/nodes/execnodes.h"
 int es_jit_flags;
 struct JitContext *es_jit;
 struct JitInstrumentation *es_jit_worker_instr;
} EState;
# 670 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct ExecRowMark
{
 Relation relation;
 Oid relid;
 Index rti;
 Index prti;
 Index rowmarkId;
 RowMarkType markType;
 LockClauseStrength strength;
 LockWaitPolicy waitPolicy;
 
# 680 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 680 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ermActive;
 ItemPointerData curCtid;
 void *ermExtra;
} ExecRowMark;
# 694 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct ExecAuxRowMark
{
 ExecRowMark *rowmark;
 AttrNumber ctidAttNo;
 AttrNumber toidAttNo;
 AttrNumber wholeAttNo;
} ExecAuxRowMark;
# 719 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct TupleHashEntryData *TupleHashEntry;
typedef struct TupleHashTableData *TupleHashTable;

typedef struct TupleHashEntryData
{
 MinimalTuple firstTuple;
 void *additional;
 uint32 status;
 uint32 hash;
} TupleHashEntryData;







# 1 "/usr/include/postgresql/14/server/lib/simplehash.h" 1
# 96 "/usr/include/postgresql/14/server/lib/simplehash.h"
# 1 "/usr/include/postgresql/14/server/port/pg_bitutils.h" 1
# 17 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
extern const uint8 pg_leftmost_one_pos[256];
extern const uint8 pg_rightmost_one_pos[256];
extern const uint8 pg_number_of_ones[256];
# 31 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
static inline int
pg_leftmost_one_pos32(uint32 word)
{

 ((void)
# 35 "/usr/include/postgresql/14/server/port/pg_bitutils.h" 3 4
1
# 35 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
);

 return 31 - __builtin_clz(word);
# 48 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
}





static inline int
pg_leftmost_one_pos64(uint64 word)
{

 ((void)
# 58 "/usr/include/postgresql/14/server/port/pg_bitutils.h" 3 4
1
# 58 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
);


 return 63 - __builtin_clzl(word);
# 77 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
}






static inline int
pg_rightmost_one_pos32(uint32 word)
{

 ((void)
# 88 "/usr/include/postgresql/14/server/port/pg_bitutils.h" 3 4
1
# 88 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
);

 return __builtin_ctz(word);
# 104 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
}





static inline int
pg_rightmost_one_pos64(uint64 word)
{

 ((void)
# 114 "/usr/include/postgresql/14/server/port/pg_bitutils.h" 3 4
1
# 114 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
);


 return __builtin_ctzl(word);
# 136 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
}
# 145 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
static inline uint32
pg_nextpower2_32(uint32 num)
{
 ((void)
# 148 "/usr/include/postgresql/14/server/port/pg_bitutils.h" 3 4
1
# 148 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
);






 if ((num & (num - 1)) == 0)
  return num;

 return ((uint32) 1) << (pg_leftmost_one_pos32(num) + 1);
}
# 168 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
static inline uint64
pg_nextpower2_64(uint64 num)
{
 ((void)
# 171 "/usr/include/postgresql/14/server/port/pg_bitutils.h" 3 4
1
# 171 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
);






 if ((num & (num - 1)) == 0)
  return num;

 return ((uint64) 1) << (pg_leftmost_one_pos64(num) + 1);
}
# 201 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
static inline uint32
pg_prevpower2_32(uint32 num)
{
 return ((uint32) 1) << pg_leftmost_one_pos32(num);
}
# 214 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
static inline uint64
pg_prevpower2_64(uint64 num)
{
 return ((uint64) 1) << pg_leftmost_one_pos64(num);
}
# 234 "/usr/include/postgresql/14/server/port/pg_bitutils.h"
static inline uint32
pg_ceil_log2_32(uint32 num)
{
 if (num < 2)
  return 0;
 else
  return pg_leftmost_one_pos32(num - 1) + 1;
}





static inline uint64
pg_ceil_log2_64(uint64 num)
{
 if (num < 2)
  return 0;
 else
  return pg_leftmost_one_pos64(num - 1) + 1;
}


extern int (*pg_popcount32) (uint32 word);
extern int (*pg_popcount64) (uint64 word);


extern uint64 pg_popcount(const char *buf, int bytes);




static inline uint32
pg_rotate_right32(uint32 word, int n)
{
 return (word >> n) | (word << (sizeof(word) * 8 - n));
}
# 97 "/usr/include/postgresql/14/server/lib/simplehash.h" 2
# 144 "/usr/include/postgresql/14/server/lib/simplehash.h"
typedef struct tuplehash_hash
{





 uint64 size;


 uint32 members;


 uint32 sizemask;


 uint32 grow_threshold;


 TupleHashEntryData *data;



 MemoryContext ctx;



 void *private_data;
} tuplehash_hash;

typedef enum tuplehash_status
{
 tuplehash_SH_EMPTY = 0x00,
 tuplehash_SH_IN_USE = 0x01
} tuplehash_status;

typedef struct tuplehash_iterator
{
 uint32 cur;
 uint32 end;
 
# 184 "/usr/include/postgresql/14/server/lib/simplehash.h" 3 4
_Bool 
# 184 "/usr/include/postgresql/14/server/lib/simplehash.h"
      done;
} tuplehash_iterator;
# 196 "/usr/include/postgresql/14/server/lib/simplehash.h"
extern tuplehash_hash *tuplehash_create(MemoryContext ctx, uint32 nelements,
          void *private_data);



extern void tuplehash_destroy(tuplehash_hash * tb);


extern void tuplehash_reset(tuplehash_hash * tb);


extern void tuplehash_grow(tuplehash_hash * tb, uint64 newsize);


extern TupleHashEntryData *tuplehash_insert(tuplehash_hash * tb, MinimalTuple key, 
# 210 "/usr/include/postgresql/14/server/lib/simplehash.h" 3 4
                                                                  _Bool 
# 210 "/usr/include/postgresql/14/server/lib/simplehash.h"
                                                                       *found);





extern TupleHashEntryData *tuplehash_insert_hash(tuplehash_hash * tb, MinimalTuple key,
           uint32 hash, 
# 217 "/usr/include/postgresql/14/server/lib/simplehash.h" 3 4
                       _Bool 
# 217 "/usr/include/postgresql/14/server/lib/simplehash.h"
                            *found);


extern TupleHashEntryData *tuplehash_lookup(tuplehash_hash * tb, MinimalTuple key);


extern TupleHashEntryData *tuplehash_lookup_hash(tuplehash_hash * tb, MinimalTuple key,
           uint32 hash);


extern void tuplehash_delete_item(tuplehash_hash * tb, TupleHashEntryData * entry);


extern 
# 230 "/usr/include/postgresql/14/server/lib/simplehash.h" 3 4
        _Bool 
# 230 "/usr/include/postgresql/14/server/lib/simplehash.h"
             tuplehash_delete(tuplehash_hash * tb, MinimalTuple key);


extern void tuplehash_start_iterate(tuplehash_hash * tb, tuplehash_iterator * iter);





extern void tuplehash_start_iterate_at(tuplehash_hash * tb, tuplehash_iterator * iter, uint32 at);


extern TupleHashEntryData *tuplehash_iterate(tuplehash_hash * tb, tuplehash_iterator * iter);


extern void tuplehash_stat(tuplehash_hash * tb);
# 737 "/usr/include/postgresql/14/server/nodes/execnodes.h" 2

typedef struct TupleHashTableData
{
 tuplehash_hash *hashtab;
 int numCols;
 AttrNumber *keyColIdx;
 FmgrInfo *tab_hash_funcs;
 ExprState *tab_eq_func;
 Oid *tab_collations;
 MemoryContext tablecxt;
 MemoryContext tempcxt;
 Size entrysize;
 TupleTableSlot *tableslot;

 TupleTableSlot *inputslot;
 FmgrInfo *in_hash_funcs;
 ExprState *cur_eq_func;
 uint32 hash_iv;
 ExprContext *exprcontext;
} TupleHashTableData;

typedef tuplehash_iterator TupleHashIterator;
# 791 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct WindowFuncExprState
{
 NodeTag type;
 WindowFunc *wfunc;
 List *args;
 ExprState *aggfilter;
 int wfuncno;
} WindowFuncExprState;
# 810 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct SetExprState
{
 NodeTag type;
 Expr *expr;
 List *args;






 ExprState *elidedFuncState;






 FmgrInfo func;






 Tuplestorestate *funcResultStore;
 TupleTableSlot *funcResultSlot;





 TupleDesc funcResultDesc;
 
# 843 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 843 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      funcReturnsTuple;





 
# 849 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 849 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      funcReturnsSet;
# 858 "/usr/include/postgresql/14/server/nodes/execnodes.h"
 
# 858 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 858 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      setArgsValid;







 
# 866 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 866 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      shutdown_reg;






 FunctionCallInfo fcinfo;
} SetExprState;





typedef struct SubPlanState
{
 NodeTag type;
 SubPlan *subplan;
 struct PlanState *planstate;
 struct PlanState *parent;
 ExprState *testexpr;
 List *args;
 HeapTuple curTuple;
 Datum curArray;

 TupleDesc descRight;
 ProjectionInfo *projLeft;
 ProjectionInfo *projRight;
 TupleHashTable hashtable;
 TupleHashTable hashnulls;
 
# 896 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 896 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      havehashrows;
 
# 897 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 897 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      havenullrows;
 MemoryContext hashtablecxt;
 MemoryContext hashtempcxt;
 ExprContext *innerecontext;
 int numCols;

 AttrNumber *keyColIdx;
 Oid *tab_eq_funcoids;

 Oid *tab_collations;
 FmgrInfo *tab_hash_funcs;
 FmgrInfo *tab_eq_funcs;
 FmgrInfo *lhs_hash_funcs;
 FmgrInfo *cur_eq_funcs;
 ExprState *cur_eq_comp;
} SubPlanState;
# 921 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef enum DomainConstraintType
{
 DOM_CONSTRAINT_NOTNULL,
 DOM_CONSTRAINT_CHECK
} DomainConstraintType;

typedef struct DomainConstraintState
{
 NodeTag type;
 DomainConstraintType constrainttype;
 char *name;
 Expr *check_expr;
 ExprState *check_exprstate;
} DomainConstraintState;
# 953 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef TupleTableSlot *(*ExecProcNodeMtd) (struct PlanState *pstate);
# 962 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct PlanState
{
 NodeTag type;

 Plan *plan;

 EState *state;



 ExecProcNodeMtd ExecProcNode;
 ExecProcNodeMtd ExecProcNodeReal;


 Instrumentation *instrument;
 WorkerInstrumentation *worker_instrument;


 struct SharedJitInstrumentation *worker_jit_instrument;






 ExprState *qual;
 struct PlanState *lefttree;
 struct PlanState *righttree;

 List *initPlan;

 List *subPlan;




 Bitmapset *chgParam;




 TupleDesc ps_ResultTupleDesc;
 TupleTableSlot *ps_ResultTupleSlot;
 ExprContext *ps_ExprContext;
 ProjectionInfo *ps_ProjInfo;

 
# 1008 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1008 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      async_capable;






 TupleDesc scandesc;
# 1040 "/usr/include/postgresql/14/server/nodes/execnodes.h"
 const TupleTableSlotOps *scanops;
 const TupleTableSlotOps *outerops;
 const TupleTableSlotOps *innerops;
 const TupleTableSlotOps *resultops;
 
# 1044 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1044 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      scanopsfixed;
 
# 1045 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1045 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      outeropsfixed;
 
# 1046 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1046 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      inneropsfixed;
 
# 1047 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1047 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      resultopsfixed;
 
# 1048 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1048 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      scanopsset;
 
# 1049 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1049 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      outeropsset;
 
# 1050 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1050 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      inneropsset;
 
# 1051 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1051 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      resultopsset;
} PlanState;
# 1099 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct EPQState
{


 EState *parentestate;
 int epqParam;






 List *tuple_table;
 TupleTableSlot **relsubs_slot;






 Plan *plan;
 List *arowMarks;







 TupleTableSlot *origslot;




 EState *recheckestate;






 ExecAuxRowMark **relsubs_rowmark;





 
# 1146 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1146 "/usr/include/postgresql/14/server/nodes/execnodes.h"
        *relsubs_done;

 PlanState *recheckplanstate;
} EPQState;






typedef struct ResultState
{
 PlanState ps;
 ExprState *resconstantqual;
 
# 1160 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1160 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      rs_done;
 
# 1161 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1161 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      rs_checkqual;
} ResultState;
# 1171 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct ProjectSetState
{
 PlanState ps;
 Node **elems;
 ExprDoneCond *elemdone;
 int nelems;
 
# 1177 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1177 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      pending_srf_tuples;
 MemoryContext argcontext;
} ProjectSetState;





typedef struct ModifyTableState
{
 PlanState ps;
 CmdType operation;
 
# 1189 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1189 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      canSetTag;
 
# 1190 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1190 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      mt_done;
 int mt_nrels;
 ResultRelInfo *resultRelInfo;







 ResultRelInfo *rootResultRelInfo;

 EPQState mt_epqstate;
 
# 1203 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1203 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      fireBSTriggers;







 int mt_resultOidAttno;
 Oid mt_lastResultOid;
 int mt_lastResultIndex;
 HTAB *mt_resultOidHash;





 TupleTableSlot *mt_root_tuple_slot;


 struct PartitionTupleRouting *mt_partition_tuple_routing;


 struct TransitionCaptureState *mt_transition_capture;


 struct TransitionCaptureState *mt_oc_transition_capture;
} ModifyTableState;
# 1245 "/usr/include/postgresql/14/server/nodes/execnodes.h"
struct AppendState;
typedef struct AppendState AppendState;
struct ParallelAppendState;
typedef struct ParallelAppendState ParallelAppendState;
struct PartitionPruneState;

struct AppendState
{
 PlanState ps;
 PlanState **appendplans;
 int as_nplans;
 int as_whichplan;
 
# 1257 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1257 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      as_begun;
 Bitmapset *as_asyncplans;
 int as_nasyncplans;
 AsyncRequest **as_asyncrequests;
 TupleTableSlot **as_asyncresults;
 int as_nasyncresults;
 
# 1263 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1263 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      as_syncdone;

 int as_nasyncremain;
 Bitmapset *as_needrequest;
 struct WaitEventSet *as_eventset;

 int as_first_partial_plan;

 ParallelAppendState *as_pstate;
 Size pstate_len;
 struct PartitionPruneState *as_prune_state;
 Bitmapset *as_valid_subplans;
 Bitmapset *as_valid_asyncplans;
 
# 1276 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1276 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      (*choose_next_subplan) (AppendState *);
};
# 1294 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct MergeAppendState
{
 PlanState ps;
 PlanState **mergeplans;
 int ms_nplans;
 int ms_nkeys;
 SortSupport ms_sortkeys;
 TupleTableSlot **ms_slots;
 struct binaryheap *ms_heap;
 
# 1303 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1303 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ms_initialized;
 struct PartitionPruneState *ms_prune_state;
 Bitmapset *ms_valid_subplans;
} MergeAppendState;
# 1319 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct RecursiveUnionState
{
 PlanState ps;
 
# 1322 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1322 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      recursing;
 
# 1323 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1323 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      intermediate_empty;
 Tuplestorestate *working_table;
 Tuplestorestate *intermediate_table;

 Oid *eqfuncoids;
 FmgrInfo *hashfunctions;
 MemoryContext tempContext;
 TupleHashTable hashtable;
 MemoryContext tableContext;
} RecursiveUnionState;





typedef struct BitmapAndState
{
 PlanState ps;
 PlanState **bitmapplans;
 int nplans;
} BitmapAndState;





typedef struct BitmapOrState
{
 PlanState ps;
 PlanState **bitmapplans;
 int nplans;
} BitmapOrState;
# 1375 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct ScanState
{
 PlanState ps;
 Relation ss_currentRelation;
 struct TableScanDescData *ss_currentScanDesc;
 TupleTableSlot *ss_ScanTupleSlot;
} ScanState;





typedef struct SeqScanState
{
 ScanState ss;
 Size pscan_len;
} SeqScanState;





typedef struct SampleScanState
{
 ScanState ss;
 List *args;
 ExprState *repeatable;

 struct TsmRoutine *tsmroutine;
 void *tsm_state;
 
# 1405 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1405 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      use_bulkread;
 
# 1406 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1406 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      use_pagemode;
 
# 1407 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1407 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      begun;
 uint32 seed;
 int64 donetuples;
 
# 1410 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1410 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      haveblock;
 
# 1411 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1411 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      done;
} SampleScanState;






typedef struct
{
 struct ScanKeyData *scan_key;
 ExprState *key_expr;
 
# 1423 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1423 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      key_toastable;
} IndexRuntimeKeyInfo;

typedef struct
{
 struct ScanKeyData *scan_key;
 ExprState *array_expr;
 int next_elem;
 int num_elems;
 Datum *elem_values;
 
# 1433 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1433 "/usr/include/postgresql/14/server/nodes/execnodes.h"
        *elem_nulls;
} IndexArrayKeyInfo;
# 1462 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct IndexScanState
{
 ScanState ss;
 ExprState *indexqualorig;
 List *indexorderbyorig;
 struct ScanKeyData *iss_ScanKeys;
 int iss_NumScanKeys;
 struct ScanKeyData *iss_OrderByKeys;
 int iss_NumOrderByKeys;
 IndexRuntimeKeyInfo *iss_RuntimeKeys;
 int iss_NumRuntimeKeys;
 
# 1473 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1473 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      iss_RuntimeKeysReady;
 ExprContext *iss_RuntimeContext;
 Relation iss_RelationDesc;
 struct IndexScanDescData *iss_ScanDesc;


 pairingheap *iss_ReorderQueue;
 
# 1480 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1480 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      iss_ReachedEnd;
 Datum *iss_OrderByValues;
 
# 1482 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1482 "/usr/include/postgresql/14/server/nodes/execnodes.h"
        *iss_OrderByNulls;
 SortSupport iss_SortSupport;
 
# 1484 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1484 "/usr/include/postgresql/14/server/nodes/execnodes.h"
        *iss_OrderByTypByVals;
 int16 *iss_OrderByTypLens;
 Size iss_PscanLen;
} IndexScanState;
# 1508 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct IndexOnlyScanState
{
 ScanState ss;
 ExprState *recheckqual;
 struct ScanKeyData *ioss_ScanKeys;
 int ioss_NumScanKeys;
 struct ScanKeyData *ioss_OrderByKeys;
 int ioss_NumOrderByKeys;
 IndexRuntimeKeyInfo *ioss_RuntimeKeys;
 int ioss_NumRuntimeKeys;
 
# 1518 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1518 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ioss_RuntimeKeysReady;
 ExprContext *ioss_RuntimeContext;
 Relation ioss_RelationDesc;
 struct IndexScanDescData *ioss_ScanDesc;
 TupleTableSlot *ioss_TableSlot;
 Buffer ioss_VMBuffer;
 Size ioss_PscanLen;
} IndexOnlyScanState;
# 1543 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct BitmapIndexScanState
{
 ScanState ss;
 TIDBitmap *biss_result;
 struct ScanKeyData *biss_ScanKeys;
 int biss_NumScanKeys;
 IndexRuntimeKeyInfo *biss_RuntimeKeys;
 int biss_NumRuntimeKeys;
 IndexArrayKeyInfo *biss_ArrayKeys;
 int biss_NumArrayKeys;
 
# 1553 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1553 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      biss_RuntimeKeysReady;
 ExprContext *biss_RuntimeContext;
 Relation biss_RelationDesc;
 struct IndexScanDescData *biss_ScanDesc;
} BitmapIndexScanState;
# 1572 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef enum
{
 BM_INITIAL,
 BM_INPROGRESS,
 BM_FINISHED
} SharedBitmapState;
# 1592 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct ParallelBitmapHeapState
{
 dsa_pointer tbmiterator;
 dsa_pointer prefetch_iterator;
 slock_t mutex;
 int prefetch_pages;
 int prefetch_target;
 SharedBitmapState state;
 ConditionVariable cv;
 char phs_snapshot_data[];
} ParallelBitmapHeapState;
# 1628 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct BitmapHeapScanState
{
 ScanState ss;
 ExprState *bitmapqualorig;
 TIDBitmap *tbm;
 TBMIterator *tbmiterator;
 TBMIterateResult *tbmres;
 
# 1635 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1635 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      can_skip_fetch;
 int return_empty_tuples;
 Buffer vmbuffer;
 Buffer pvmbuffer;
 long exact_pages;
 long lossy_pages;
 TBMIterator *prefetch_iterator;
 int prefetch_pages;
 int prefetch_target;
 int prefetch_maximum;
 Size pscan_len;
 
# 1646 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1646 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      initialized;
 TBMSharedIterator *shared_tbmiterator;
 TBMSharedIterator *shared_prefetch_iterator;
 ParallelBitmapHeapState *pstate;
} BitmapHeapScanState;
# 1663 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct TidScanState
{
 ScanState ss;
 List *tss_tidexprs;
 
# 1667 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1667 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      tss_isCurrentOf;
 int tss_NumTids;
 int tss_TidPtr;
 ItemPointerData *tss_TidList;
 HeapTupleData tss_htup;
} TidScanState;
# 1683 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct TidRangeScanState
{
 ScanState ss;
 List *trss_tidexprs;
 ItemPointerData trss_mintid;
 ItemPointerData trss_maxtid;
 
# 1689 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1689 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      trss_inScan;
} TidRangeScanState;
# 1699 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct SubqueryScanState
{
 ScanState ss;
 PlanState *subplan;
} SubqueryScanState;
# 1721 "/usr/include/postgresql/14/server/nodes/execnodes.h"
struct FunctionScanPerFuncState;

typedef struct FunctionScanState
{
 ScanState ss;
 int eflags;
 
# 1727 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1727 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      ordinality;
 
# 1728 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1728 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      simple;
 int64 ordinal;
 int nfuncs;
 struct FunctionScanPerFuncState *funcstates;
 MemoryContext argcontext;
} FunctionScanState;
# 1759 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct ValuesScanState
{
 ScanState ss;
 ExprContext *rowcontext;
 List **exprlists;
 List **exprstatelists;
 int array_len;
 int curr_idx;
} ValuesScanState;







typedef struct TableFuncScanState
{
 ScanState ss;
 ExprState *docexpr;
 ExprState *rowexpr;
 List *colexprs;
 List *coldefexprs;
 List *ns_names;
 List *ns_uris;
 Bitmapset *notnulls;
 void *opaque;
 const struct TableFuncRoutine *routine;
 FmgrInfo *in_functions;
 Oid *typioparams;
 int64 ordinal;
 MemoryContext perTableCxt;
 Tuplestorestate *tupstore;
} TableFuncScanState;
# 1804 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct CteScanState
{
 ScanState ss;
 int eflags;
 int readptr;
 PlanState *cteplanstate;

 struct CteScanState *leader;

 Tuplestorestate *cte_table;
 
# 1814 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1814 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      eof_cte;
} CteScanState;
# 1827 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct NamedTuplestoreScanState
{
 ScanState ss;
 int readptr;
 TupleDesc tupdesc;
 Tuplestorestate *relation;
} NamedTuplestoreScanState;
# 1843 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct WorkTableScanState
{
 ScanState ss;
 RecursiveUnionState *rustate;
} WorkTableScanState;







typedef struct ForeignScanState
{
 ScanState ss;
 ExprState *fdw_recheck_quals;
 Size pscan_len;
 ResultRelInfo *resultRelInfo;

 struct FdwRoutine *fdwroutine;
 void *fdw_state;
} ForeignScanState;
# 1879 "/usr/include/postgresql/14/server/nodes/execnodes.h"
struct CustomExecMethods;

typedef struct CustomScanState
{
 ScanState ss;
 uint32 flags;

 List *custom_ps;
 Size pscan_len;
 const struct CustomExecMethods *methods;
} CustomScanState;
# 1902 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct JoinState
{
 PlanState ps;
 JoinType jointype;
 
# 1906 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1906 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      single_match;

 ExprState *joinqual;
} JoinState;
# 1919 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct NestLoopState
{
 JoinState js;
 
# 1922 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1922 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      nl_NeedNewOuter;
 
# 1923 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1923 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      nl_MatchedOuter;
 TupleTableSlot *nl_NullInnerTupleSlot;
} NestLoopState;
# 1950 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct MergeJoinClauseData *MergeJoinClause;

typedef struct MergeJoinState
{
 JoinState js;
 int mj_NumClauses;
 MergeJoinClause mj_Clauses;
 int mj_JoinState;
 
# 1958 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1958 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      mj_SkipMarkRestore;
 
# 1959 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1959 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      mj_ExtraMarks;
 
# 1960 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1960 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      mj_ConstFalseJoin;
 
# 1961 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1961 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      mj_FillOuter;
 
# 1962 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1962 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      mj_FillInner;
 
# 1963 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1963 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      mj_MatchedOuter;
 
# 1964 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 1964 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      mj_MatchedInner;
 TupleTableSlot *mj_OuterTupleSlot;
 TupleTableSlot *mj_InnerTupleSlot;
 TupleTableSlot *mj_MarkedTupleSlot;
 TupleTableSlot *mj_NullOuterTupleSlot;
 TupleTableSlot *mj_NullInnerTupleSlot;
 ExprContext *mj_OuterEContext;
 ExprContext *mj_InnerEContext;
} MergeJoinState;
# 2001 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct HashJoinTupleData *HashJoinTuple;
typedef struct HashJoinTableData *HashJoinTable;

typedef struct HashJoinState
{
 JoinState js;
 ExprState *hashclauses;
 List *hj_OuterHashKeys;
 List *hj_HashOperators;
 List *hj_Collations;
 HashJoinTable hj_HashTable;
 uint32 hj_CurHashValue;
 int hj_CurBucketNo;
 int hj_CurSkewBucketNo;
 HashJoinTuple hj_CurTuple;
 TupleTableSlot *hj_OuterTupleSlot;
 TupleTableSlot *hj_HashTupleSlot;
 TupleTableSlot *hj_NullOuterTupleSlot;
 TupleTableSlot *hj_NullInnerTupleSlot;
 TupleTableSlot *hj_FirstOuterTupleSlot;
 int hj_JoinState;
 
# 2022 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2022 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      hj_MatchedOuter;
 
# 2023 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2023 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      hj_OuterNotEmpty;
} HashJoinState;
# 2041 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct MaterialState
{
 ScanState ss;
 int eflags;
 
# 2045 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2045 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      eof_underlying;
 Tuplestorestate *tuplestorestate;
} MaterialState;

struct MemoizeEntry;
struct MemoizeTuple;
struct MemoizeKey;

typedef struct MemoizeInstrumentation
{
 uint64 cache_hits;

 uint64 cache_misses;

 uint64 cache_evictions;

 uint64 cache_overflows;



 uint64 mem_peak;
} MemoizeInstrumentation;





typedef struct SharedMemoizeInfo
{
 int num_workers;
 MemoizeInstrumentation sinstrument[];
} SharedMemoizeInfo;
# 2085 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct MemoizeState
{
 ScanState ss;
 int mstatus;
 int nkeys;
 struct memoize_hash *hashtable;
 TupleDesc hashkeydesc;
 TupleTableSlot *tableslot;
 TupleTableSlot *probeslot;
 ExprState *cache_eq_expr;
 ExprState **param_exprs;

 FmgrInfo *hashfunctions;
 Oid *collations;
 uint64 mem_used;
 uint64 mem_limit;
 MemoryContext tableContext;
 dlist_head lru_list;
 struct MemoizeTuple *last_tuple;



 struct MemoizeEntry *entry;

 
# 2109 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2109 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      singlerow;

 
# 2111 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2111 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      binary_mode;

 MemoizeInstrumentation stats;
 SharedMemoizeInfo *shared_info;
 Bitmapset *keyparamids;

} MemoizeState;
# 2126 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct PresortedKeyData
{
 FmgrInfo flinfo;
 FunctionCallInfo fcinfo;
 OffsetNumber attno;
} PresortedKeyData;





typedef struct SharedSortInfo
{
 int num_workers;
 TuplesortInstrumentation sinstrument[];
} SharedSortInfo;





typedef struct SortState
{
 ScanState ss;
 
# 2150 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2150 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      randomAccess;
 
# 2151 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2151 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      bounded;
 int64 bound;
 
# 2153 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2153 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      sort_Done;
 
# 2154 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2154 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      bounded_Done;
 int64 bound_Done;
 void *tuplesortstate;
 
# 2157 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2157 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      am_worker;
 SharedSortInfo *shared_info;
} SortState;





typedef struct IncrementalSortGroupInfo
{
 int64 groupCount;
 int64 maxDiskSpaceUsed;
 int64 totalDiskSpaceUsed;
 int64 maxMemorySpaceUsed;
 int64 totalMemorySpaceUsed;
 bits32 sortMethods;
} IncrementalSortGroupInfo;

typedef struct IncrementalSortInfo
{
 IncrementalSortGroupInfo fullsortGroupInfo;
 IncrementalSortGroupInfo prefixsortGroupInfo;
} IncrementalSortInfo;





typedef struct SharedIncrementalSortInfo
{
 int num_workers;
 IncrementalSortInfo sinfo[];
} SharedIncrementalSortInfo;





typedef enum
{
 INCSORT_LOADFULLSORT,
 INCSORT_LOADPREFIXSORT,
 INCSORT_READFULLSORT,
 INCSORT_READPREFIXSORT,
} IncrementalSortExecutionStatus;

typedef struct IncrementalSortState
{
 ScanState ss;
 
# 2206 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2206 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      bounded;
 int64 bound;
 
# 2208 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2208 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      outerNodeDone;
 int64 bound_Done;
 IncrementalSortExecutionStatus execution_status;
 int64 n_fullsort_remaining;
 Tuplesortstate *fullsort_state;
 Tuplesortstate *prefixsort_state;

 PresortedKeyData *presorted_keys;

 IncrementalSortInfo incsort_info;


 TupleTableSlot *group_pivot;
 TupleTableSlot *transfer_tuple;
 
# 2222 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2222 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      am_worker;
 SharedIncrementalSortInfo *shared_info;
} IncrementalSortState;





typedef struct GroupState
{
 ScanState ss;
 ExprState *eqfunction;
 
# 2234 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2234 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      grp_done;
} GroupState;





typedef struct AggregateInstrumentation
{
 Size hash_mem_peak;
 uint64 hash_disk_used;
 int hash_batches_used;
} AggregateInstrumentation;





typedef struct SharedAggInfo
{
 int num_workers;
 AggregateInstrumentation sinstrument[];
} SharedAggInfo;
# 2271 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct AggStatePerAggData *AggStatePerAgg;
typedef struct AggStatePerTransData *AggStatePerTrans;
typedef struct AggStatePerGroupData *AggStatePerGroup;
typedef struct AggStatePerPhaseData *AggStatePerPhase;
typedef struct AggStatePerHashData *AggStatePerHash;

typedef struct AggState
{
 ScanState ss;
 List *aggs;
 int numaggs;
 int numtrans;
 AggStrategy aggstrategy;
 AggSplit aggsplit;
 AggStatePerPhase phase;
 int numphases;
 int current_phase;
 AggStatePerAgg peragg;
 AggStatePerTrans pertrans;
 ExprContext *hashcontext;
 ExprContext **aggcontexts;
 ExprContext *tmpcontext;

 ExprContext *curaggcontext;
 AggStatePerAgg curperagg;

 AggStatePerTrans curpertrans;
 
# 2298 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2298 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      input_done;
 
# 2299 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2299 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      agg_done;
 int projected_set;

 int current_set;
 Bitmapset *grouped_cols;
 List *all_grouped_cols;
 Bitmapset *colnos_needed;
 int max_colno_needed;
 
# 2307 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2307 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      all_cols_needed;

 int maxsets;
 AggStatePerPhase phases;
 Tuplesortstate *sort_in;
 Tuplesortstate *sort_out;
 TupleTableSlot *sort_slot;

 AggStatePerGroup *pergroups;

 HeapTuple grp_firstTuple;

 
# 2319 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2319 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      table_filled;
 int num_hashes;
 MemoryContext hash_metacxt;
 struct HashTapeInfo *hash_tapeinfo;
 struct HashAggSpill *hash_spills;

 TupleTableSlot *hash_spill_rslot;
 TupleTableSlot *hash_spill_wslot;
 List *hash_batches;
 
# 2328 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2328 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      hash_ever_spilled;
 
# 2329 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2329 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      hash_spill_mode;

 Size hash_mem_limit;
 uint64 hash_ngroups_limit;
 int hash_planned_partitions;

 double hashentrysize;
 Size hash_mem_peak;
 uint64 hash_ngroups_current;

 uint64 hash_disk_used;
 int hash_batches_used;

 AggStatePerHash perhash;
 AggStatePerGroup *hash_pergroup;




 AggStatePerGroup *all_pergroups;

 ProjectionInfo *combinedproj;
 SharedAggInfo *shared_info;
} AggState;






typedef struct WindowStatePerFuncData *WindowStatePerFunc;
typedef struct WindowStatePerAggData *WindowStatePerAgg;

typedef struct WindowAggState
{
 ScanState ss;


 List *funcs;
 int numfuncs;
 int numaggs;

 WindowStatePerFunc perfunc;
 WindowStatePerAgg peragg;
 ExprState *partEqfunction;
 ExprState *ordEqfunction;
 Tuplestorestate *buffer;
 int current_ptr;
 int framehead_ptr;
 int frametail_ptr;
 int grouptail_ptr;
 int64 spooled_rows;
 int64 currentpos;
 int64 frameheadpos;
 int64 frametailpos;

 struct WindowObjectData *agg_winobj;
 int64 aggregatedbase;
 int64 aggregatedupto;

 int frameOptions;
 ExprState *startOffset;
 ExprState *endOffset;
 Datum startOffsetValue;
 Datum endOffsetValue;


 FmgrInfo startInRangeFunc;
 FmgrInfo endInRangeFunc;
 Oid inRangeColl;
 
# 2399 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2399 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      inRangeAsc;
 
# 2400 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2400 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      inRangeNullsFirst;


 int64 currentgroup;
 int64 frameheadgroup;
 int64 frametailgroup;
 int64 groupheadpos;
 int64 grouptailpos;

 MemoryContext partcontext;
 MemoryContext aggcontext;
 MemoryContext curaggcontext;
 ExprContext *tmpcontext;

 
# 2414 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2414 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      all_first;
 
# 2415 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2415 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      all_done;
 
# 2416 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2416 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      partition_spooled;

 
# 2418 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2418 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      more_partitions;

 
# 2420 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2420 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      framehead_valid;

 
# 2422 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2422 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      frametail_valid;

 
# 2424 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2424 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      grouptail_valid;


 TupleTableSlot *first_part_slot;

 TupleTableSlot *framehead_slot;
 TupleTableSlot *frametail_slot;


 TupleTableSlot *agg_row_slot;
 TupleTableSlot *temp_slot_1;
 TupleTableSlot *temp_slot_2;
} WindowAggState;
# 2449 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct UniqueState
{
 PlanState ps;
 ExprState *eqfunction;
} UniqueState;
# 2462 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct GatherState
{
 PlanState ps;
 
# 2465 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2465 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      initialized;
 
# 2466 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2466 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      need_to_scan_locally;
 int64 tuples_needed;

 TupleTableSlot *funnel_slot;
 struct ParallelExecutorInfo *pei;

 int nworkers_launched;
 int nreaders;
 int nextreader;
 struct TupleQueueReader **reader;
} GatherState;
# 2486 "/usr/include/postgresql/14/server/nodes/execnodes.h"
struct GMReaderTupleBuffer;

typedef struct GatherMergeState
{
 PlanState ps;
 
# 2491 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2491 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      initialized;
 
# 2492 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2492 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      gm_initialized;
 
# 2493 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2493 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      need_to_scan_locally;
 int64 tuples_needed;

 TupleDesc tupDesc;
 int gm_nkeys;
 SortSupport gm_sortkeys;
 struct ParallelExecutorInfo *pei;


 int nworkers_launched;
 int nreaders;
 TupleTableSlot **gm_slots;
 struct TupleQueueReader **reader;
 struct GMReaderTupleBuffer *gm_tuple_buffers;
 struct binaryheap *gm_heap;
} GatherMergeState;





typedef struct HashInstrumentation
{
 int nbuckets;
 int nbuckets_original;
 int nbatch;
 int nbatch_original;
 Size space_peak;
} HashInstrumentation;





typedef struct SharedHashInfo
{
 int num_workers;
 HashInstrumentation hinstrument[];
} SharedHashInfo;





typedef struct HashState
{
 PlanState ps;
 HashJoinTable hashtable;
 List *hashkeys;







 SharedHashInfo *shared_info;






 HashInstrumentation *hinstrument;


 struct ParallelHashJoinState *parallel_state;
} HashState;
# 2572 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef struct SetOpStatePerGroupData *SetOpStatePerGroup;

typedef struct SetOpState
{
 PlanState ps;
 ExprState *eqfunction;
 Oid *eqfuncoids;
 FmgrInfo *hashfunctions;
 
# 2580 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2580 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      setop_done;
 long numOutput;

 SetOpStatePerGroup pergroup;
 HeapTuple grp_firstTuple;

 TupleHashTable hashtable;
 MemoryContext tableContext;
 
# 2588 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2588 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      table_filled;
 TupleHashIterator hashiter;
} SetOpState;







typedef struct LockRowsState
{
 PlanState ps;
 List *lr_arowMarks;
 EPQState lr_epqstate;
} LockRowsState;
# 2617 "/usr/include/postgresql/14/server/nodes/execnodes.h"
typedef enum
{
 LIMIT_INITIAL,
 LIMIT_RESCAN,
 LIMIT_EMPTY,
 LIMIT_INWINDOW,
 LIMIT_WINDOWEND_TIES,
 LIMIT_SUBPLANEOF,
 LIMIT_WINDOWEND,
 LIMIT_WINDOWSTART
} LimitStateCond;

typedef struct LimitState
{
 PlanState ps;
 ExprState *limitOffset;
 ExprState *limitCount;
 LimitOption limitOption;
 int64 offset;
 int64 count;
 
# 2637 "/usr/include/postgresql/14/server/nodes/execnodes.h" 3 4
_Bool 
# 2637 "/usr/include/postgresql/14/server/nodes/execnodes.h"
      noCount;
 LimitStateCond lstate;
 int64 position;
 TupleTableSlot *subSlot;
 ExprState *eqfunction;

 TupleTableSlot *last_slot;
} LimitState;
# 19 "/usr/include/postgresql/14/server/executor/execdesc.h" 2
# 1 "/usr/include/postgresql/14/server/tcop/dest.h" 1
# 71 "/usr/include/postgresql/14/server/tcop/dest.h"
# 1 "/usr/include/postgresql/14/server/tcop/cmdtag.h" 1
# 20 "/usr/include/postgresql/14/server/tcop/cmdtag.h"
typedef enum CommandTag
{
# 1 "/usr/include/postgresql/14/server/tcop/cmdtaglist.h" 1
# 27 "/usr/include/postgresql/14/server/tcop/cmdtaglist.h"
CMDTAG_UNKNOWN,
CMDTAG_ALTER_ACCESS_METHOD,
CMDTAG_ALTER_AGGREGATE,
CMDTAG_ALTER_CAST,
CMDTAG_ALTER_COLLATION,
CMDTAG_ALTER_CONSTRAINT,
CMDTAG_ALTER_CONVERSION,
CMDTAG_ALTER_DATABASE,
CMDTAG_ALTER_DEFAULT_PRIVILEGES,
CMDTAG_ALTER_DOMAIN,
CMDTAG_ALTER_EVENT_TRIGGER,
CMDTAG_ALTER_EXTENSION,
CMDTAG_ALTER_FOREIGN_DATA_WRAPPER,
CMDTAG_ALTER_FOREIGN_TABLE,
CMDTAG_ALTER_FUNCTION,
CMDTAG_ALTER_INDEX,
CMDTAG_ALTER_LANGUAGE,
CMDTAG_ALTER_LARGE_OBJECT,
CMDTAG_ALTER_MATERIALIZED_VIEW,
CMDTAG_ALTER_OPERATOR,
CMDTAG_ALTER_OPERATOR_CLASS,
CMDTAG_ALTER_OPERATOR_FAMILY,
CMDTAG_ALTER_POLICY,
CMDTAG_ALTER_PROCEDURE,
CMDTAG_ALTER_PUBLICATION,
CMDTAG_ALTER_ROLE,
CMDTAG_ALTER_ROUTINE,
CMDTAG_ALTER_RULE,
CMDTAG_ALTER_SCHEMA,
CMDTAG_ALTER_SEQUENCE,
CMDTAG_ALTER_SERVER,
CMDTAG_ALTER_STATISTICS,
CMDTAG_ALTER_SUBSCRIPTION,
CMDTAG_ALTER_SYSTEM,
CMDTAG_ALTER_TABLE,
CMDTAG_ALTER_TABLESPACE,
CMDTAG_ALTER_TEXT_SEARCH_CONFIGURATION,
CMDTAG_ALTER_TEXT_SEARCH_DICTIONARY,
CMDTAG_ALTER_TEXT_SEARCH_PARSER,
CMDTAG_ALTER_TEXT_SEARCH_TEMPLATE,
CMDTAG_ALTER_TRANSFORM,
CMDTAG_ALTER_TRIGGER,
CMDTAG_ALTER_TYPE,
CMDTAG_ALTER_USER_MAPPING,
CMDTAG_ALTER_VIEW,
CMDTAG_ANALYZE,
CMDTAG_BEGIN,
CMDTAG_CALL,
CMDTAG_CHECKPOINT,
CMDTAG_CLOSE,
CMDTAG_CLOSE_CURSOR,
CMDTAG_CLOSE_CURSOR_ALL,
CMDTAG_CLUSTER,
CMDTAG_COMMENT,
CMDTAG_COMMIT,
CMDTAG_COMMIT_PREPARED,
CMDTAG_COPY,
CMDTAG_COPY_FROM,
CMDTAG_CREATE_ACCESS_METHOD,
CMDTAG_CREATE_AGGREGATE,
CMDTAG_CREATE_CAST,
CMDTAG_CREATE_COLLATION,
CMDTAG_CREATE_CONSTRAINT,
CMDTAG_CREATE_CONVERSION,
CMDTAG_CREATE_DATABASE,
CMDTAG_CREATE_DOMAIN,
CMDTAG_CREATE_EVENT_TRIGGER,
CMDTAG_CREATE_EXTENSION,
CMDTAG_CREATE_FOREIGN_DATA_WRAPPER,
CMDTAG_CREATE_FOREIGN_TABLE,
CMDTAG_CREATE_FUNCTION,
CMDTAG_CREATE_INDEX,
CMDTAG_CREATE_LANGUAGE,
CMDTAG_CREATE_MATERIALIZED_VIEW,
CMDTAG_CREATE_OPERATOR,
CMDTAG_CREATE_OPERATOR_CLASS,
CMDTAG_CREATE_OPERATOR_FAMILY,
CMDTAG_CREATE_POLICY,
CMDTAG_CREATE_PROCEDURE,
CMDTAG_CREATE_PUBLICATION,
CMDTAG_CREATE_ROLE,
CMDTAG_CREATE_ROUTINE,
CMDTAG_CREATE_RULE,
CMDTAG_CREATE_SCHEMA,
CMDTAG_CREATE_SEQUENCE,
CMDTAG_CREATE_SERVER,
CMDTAG_CREATE_STATISTICS,
CMDTAG_CREATE_SUBSCRIPTION,
CMDTAG_CREATE_TABLE,
CMDTAG_CREATE_TABLE_AS,
CMDTAG_CREATE_TABLESPACE,
CMDTAG_CREATE_TEXT_SEARCH_CONFIGURATION,
CMDTAG_CREATE_TEXT_SEARCH_DICTIONARY,
CMDTAG_CREATE_TEXT_SEARCH_PARSER,
CMDTAG_CREATE_TEXT_SEARCH_TEMPLATE,
CMDTAG_CREATE_TRANSFORM,
CMDTAG_CREATE_TRIGGER,
CMDTAG_CREATE_TYPE,
CMDTAG_CREATE_USER_MAPPING,
CMDTAG_CREATE_VIEW,
CMDTAG_DEALLOCATE,
CMDTAG_DEALLOCATE_ALL,
CMDTAG_DECLARE_CURSOR,
CMDTAG_DELETE,
CMDTAG_DISCARD,
CMDTAG_DISCARD_ALL,
CMDTAG_DISCARD_PLANS,
CMDTAG_DISCARD_SEQUENCES,
CMDTAG_DISCARD_TEMP,
CMDTAG_DO,
CMDTAG_DROP_ACCESS_METHOD,
CMDTAG_DROP_AGGREGATE,
CMDTAG_DROP_CAST,
CMDTAG_DROP_COLLATION,
CMDTAG_DROP_CONSTRAINT,
CMDTAG_DROP_CONVERSION,
CMDTAG_DROP_DATABASE,
CMDTAG_DROP_DOMAIN,
CMDTAG_DROP_EVENT_TRIGGER,
CMDTAG_DROP_EXTENSION,
CMDTAG_DROP_FOREIGN_DATA_WRAPPER,
CMDTAG_DROP_FOREIGN_TABLE,
CMDTAG_DROP_FUNCTION,
CMDTAG_DROP_INDEX,
CMDTAG_DROP_LANGUAGE,
CMDTAG_DROP_MATERIALIZED_VIEW,
CMDTAG_DROP_OPERATOR,
CMDTAG_DROP_OPERATOR_CLASS,
CMDTAG_DROP_OPERATOR_FAMILY,
CMDTAG_DROP_OWNED,
CMDTAG_DROP_POLICY,
CMDTAG_DROP_PROCEDURE,
CMDTAG_DROP_PUBLICATION,
CMDTAG_DROP_ROLE,
CMDTAG_DROP_ROUTINE,
CMDTAG_DROP_RULE,
CMDTAG_DROP_SCHEMA,
CMDTAG_DROP_SEQUENCE,
CMDTAG_DROP_SERVER,
CMDTAG_DROP_STATISTICS,
CMDTAG_DROP_SUBSCRIPTION,
CMDTAG_DROP_TABLE,
CMDTAG_DROP_TABLESPACE,
CMDTAG_DROP_TEXT_SEARCH_CONFIGURATION,
CMDTAG_DROP_TEXT_SEARCH_DICTIONARY,
CMDTAG_DROP_TEXT_SEARCH_PARSER,
CMDTAG_DROP_TEXT_SEARCH_TEMPLATE,
CMDTAG_DROP_TRANSFORM,
CMDTAG_DROP_TRIGGER,
CMDTAG_DROP_TYPE,
CMDTAG_DROP_USER_MAPPING,
CMDTAG_DROP_VIEW,
CMDTAG_EXECUTE,
CMDTAG_EXPLAIN,
CMDTAG_FETCH,
CMDTAG_GRANT,
CMDTAG_GRANT_ROLE,
CMDTAG_IMPORT_FOREIGN_SCHEMA,
CMDTAG_INSERT,
CMDTAG_LISTEN,
CMDTAG_LOAD,
CMDTAG_LOCK_TABLE,
CMDTAG_MOVE,
CMDTAG_NOTIFY,
CMDTAG_PREPARE,
CMDTAG_PREPARE_TRANSACTION,
CMDTAG_REASSIGN_OWNED,
CMDTAG_REFRESH_MATERIALIZED_VIEW,
CMDTAG_REINDEX,
CMDTAG_RELEASE,
CMDTAG_RESET,
CMDTAG_REVOKE,
CMDTAG_REVOKE_ROLE,
CMDTAG_ROLLBACK,
CMDTAG_ROLLBACK_PREPARED,
CMDTAG_SAVEPOINT,
CMDTAG_SECURITY_LABEL,
CMDTAG_SELECT,
CMDTAG_SELECT_FOR_KEY_SHARE,
CMDTAG_SELECT_FOR_NO_KEY_UPDATE,
CMDTAG_SELECT_FOR_SHARE,
CMDTAG_SELECT_FOR_UPDATE,
CMDTAG_SELECT_INTO,
CMDTAG_SET,
CMDTAG_SET_CONSTRAINTS,
CMDTAG_SHOW,
CMDTAG_START_TRANSACTION,
CMDTAG_TRUNCATE_TABLE,
CMDTAG_UNLISTEN,
CMDTAG_UPDATE,
CMDTAG_VACUUM,
# 23 "/usr/include/postgresql/14/server/tcop/cmdtag.h" 2
 COMMAND_TAG_NEXTTAG
} CommandTag;



typedef struct QueryCompletion
{
 CommandTag commandTag;
 uint64 nprocessed;
} QueryCompletion;


static inline void
SetQueryCompletion(QueryCompletion *qc, CommandTag commandTag,
       uint64 nprocessed)
{
 qc->commandTag = commandTag;
 qc->nprocessed = nprocessed;
}

static inline void
CopyQueryCompletion(QueryCompletion *dst, const QueryCompletion *src)
{
 dst->commandTag = src->commandTag;
 dst->nprocessed = src->nprocessed;
}


extern void InitializeQueryCompletion(QueryCompletion *qc);
extern const char *GetCommandTagName(CommandTag commandTag);
extern 
# 53 "/usr/include/postgresql/14/server/tcop/cmdtag.h" 3 4
      _Bool 
# 53 "/usr/include/postgresql/14/server/tcop/cmdtag.h"
           command_tag_display_rowcount(CommandTag commandTag);
extern 
# 54 "/usr/include/postgresql/14/server/tcop/cmdtag.h" 3 4
      _Bool 
# 54 "/usr/include/postgresql/14/server/tcop/cmdtag.h"
           command_tag_event_trigger_ok(CommandTag commandTag);
extern 
# 55 "/usr/include/postgresql/14/server/tcop/cmdtag.h" 3 4
      _Bool 
# 55 "/usr/include/postgresql/14/server/tcop/cmdtag.h"
           command_tag_table_rewrite_ok(CommandTag commandTag);
extern CommandTag GetCommandTagEnum(const char *tagname);
# 72 "/usr/include/postgresql/14/server/tcop/dest.h" 2
# 87 "/usr/include/postgresql/14/server/tcop/dest.h"
typedef enum
{
 DestNone,
 DestDebug,
 DestRemote,
 DestRemoteExecute,
 DestRemoteSimple,
 DestSPI,
 DestTuplestore,
 DestIntoRel,
 DestCopyOut,
 DestSQLFunction,
 DestTransientRel,
 DestTupleQueue
} CommandDest;
# 114 "/usr/include/postgresql/14/server/tcop/dest.h"
typedef struct _DestReceiver DestReceiver;

struct _DestReceiver
{

 
# 119 "/usr/include/postgresql/14/server/tcop/dest.h" 3 4
_Bool 
# 119 "/usr/include/postgresql/14/server/tcop/dest.h"
      (*receiveSlot) (TupleTableSlot *slot,
        DestReceiver *self);

 void (*rStartup) (DestReceiver *self,
        int operation,
        TupleDesc typeinfo);
 void (*rShutdown) (DestReceiver *self);

 void (*rDestroy) (DestReceiver *self);

 CommandDest mydest;

};

extern DestReceiver *None_Receiver;




extern void BeginCommand(CommandTag commandTag, CommandDest dest);
extern DestReceiver *CreateDestReceiver(CommandDest dest);
extern void EndCommand(const QueryCompletion *qc, CommandDest dest,
        
# 141 "/usr/include/postgresql/14/server/tcop/dest.h" 3 4
       _Bool 
# 141 "/usr/include/postgresql/14/server/tcop/dest.h"
            force_undecorated_output);
extern void EndReplicationCommand(const char *commandTag);



extern void NullCommand(CommandDest dest);
extern void ReadyForQuery(CommandDest dest);
# 20 "/usr/include/postgresql/14/server/executor/execdesc.h" 2
# 33 "/usr/include/postgresql/14/server/executor/execdesc.h"
typedef struct QueryDesc
{

 CmdType operation;
 PlannedStmt *plannedstmt;
 const char *sourceText;
 Snapshot snapshot;
 Snapshot crosscheck_snapshot;
 DestReceiver *dest;
 ParamListInfo params;
 QueryEnvironment *queryEnv;
 int instrument_options;


 TupleDesc tupDesc;
 EState *estate;
 PlanState *planstate;


 
# 52 "/usr/include/postgresql/14/server/executor/execdesc.h" 3 4
_Bool 
# 52 "/usr/include/postgresql/14/server/executor/execdesc.h"
      already_executed;


 struct Instrumentation *totaltime;
} QueryDesc;


extern QueryDesc *CreateQueryDesc(PlannedStmt *plannedstmt,
          const char *sourceText,
          Snapshot snapshot,
          Snapshot crosscheck_snapshot,
          DestReceiver *dest,
          ParamListInfo params,
          QueryEnvironment *queryEnv,
          int instrument_options);

extern void FreeQueryDesc(QueryDesc *qdesc);
# 18 "/usr/include/postgresql/14/server/executor/executor.h" 2


# 1 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 1
# 28 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
# 1 "/usr/include/postgresql/14/server/nodes/value.h" 1
# 42 "/usr/include/postgresql/14/server/nodes/value.h"
typedef struct Value
{
 NodeTag type;
 union ValUnion
 {
  int ival;
  char *str;
 } val;
} Value;





extern Value *makeInteger(int i);
extern Value *makeFloat(char *numericStr);
extern Value *makeString(char *str);
extern Value *makeBitString(char *str);
# 29 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 2



typedef enum OverridingKind
{
 OVERRIDING_NOT_SET = 0,
 OVERRIDING_USER_VALUE,
 OVERRIDING_SYSTEM_VALUE
} OverridingKind;


typedef enum QuerySource
{
 QSRC_ORIGINAL,
 QSRC_PARSER,
 QSRC_INSTEAD_RULE,
 QSRC_QUAL_INSTEAD_RULE,
 QSRC_NON_INSTEAD_RULE
} QuerySource;


typedef enum SortByDir
{
 SORTBY_DEFAULT,
 SORTBY_ASC,
 SORTBY_DESC,
 SORTBY_USING
} SortByDir;

typedef enum SortByNulls
{
 SORTBY_NULLS_DEFAULT,
 SORTBY_NULLS_FIRST,
 SORTBY_NULLS_LAST
} SortByNulls;


typedef enum SetQuantifier
{
 SET_QUANTIFIER_DEFAULT,
 SET_QUANTIFIER_ALL,
 SET_QUANTIFIER_DISTINCT
} SetQuantifier;
# 80 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef uint32 AclMode;
# 116 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct Query
{
 NodeTag type;

 CmdType commandType;

 QuerySource querySource;

 uint64 queryId;

 
# 126 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 126 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      canSetTag;

 Node *utilityStmt;

 int resultRelation;


 
# 133 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 133 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hasAggs;
 
# 134 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 134 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hasWindowFuncs;
 
# 135 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 135 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hasTargetSRFs;
 
# 136 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 136 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hasSubLinks;
 
# 137 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 137 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hasDistinctOn;
 
# 138 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 138 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hasRecursive;
 
# 139 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 139 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hasModifyingCTE;
 
# 140 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 140 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hasForUpdate;
 
# 141 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 141 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hasRowSecurity;

 
# 143 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 143 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      isReturn;

 List *cteList;

 List *rtable;
 FromExpr *jointree;

 List *targetList;

 OverridingKind override;

 OnConflictExpr *onConflict;

 List *returningList;

 List *groupClause;
 
# 159 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 159 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      groupDistinct;

 List *groupingSets;

 Node *havingQual;

 List *windowClause;

 List *distinctClause;

 List *sortClause;

 Node *limitOffset;
 Node *limitCount;
 LimitOption limitOption;

 List *rowMarks;

 Node *setOperations;


 List *constraintDeps;


 List *withCheckOptions;
# 192 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
 int stmt_location;
 int stmt_len;
} Query;
# 218 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct TypeName
{
 NodeTag type;
 List *names;
 Oid typeOid;
 
# 223 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 223 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      setof;
 
# 224 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 224 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      pct_type;
 List *typmods;
 int32 typemod;
 List *arrayBounds;
 int location;
} TypeName;
# 244 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct ColumnRef
{
 NodeTag type;
 List *fields;
 int location;
} ColumnRef;




typedef struct ParamRef
{
 NodeTag type;
 int number;
 int location;
} ParamRef;




typedef enum A_Expr_Kind
{
 AEXPR_OP,
 AEXPR_OP_ANY,
 AEXPR_OP_ALL,
 AEXPR_DISTINCT,
 AEXPR_NOT_DISTINCT,
 AEXPR_NULLIF,
 AEXPR_IN,
 AEXPR_LIKE,
 AEXPR_ILIKE,
 AEXPR_SIMILAR,
 AEXPR_BETWEEN,
 AEXPR_NOT_BETWEEN,
 AEXPR_BETWEEN_SYM,
 AEXPR_NOT_BETWEEN_SYM
} A_Expr_Kind;

typedef struct A_Expr
{
 NodeTag type;
 A_Expr_Kind kind;
 List *name;
 Node *lexpr;
 Node *rexpr;
 int location;
} A_Expr;




typedef struct A_Const
{
 NodeTag type;
 Value val;
 int location;
} A_Const;




typedef struct TypeCast
{
 NodeTag type;
 Node *arg;
 TypeName *typeName;
 int location;
} TypeCast;




typedef struct CollateClause
{
 NodeTag type;
 Node *arg;
 List *collname;
 int location;
} CollateClause;




typedef enum RoleSpecType
{
 ROLESPEC_CSTRING,
 ROLESPEC_CURRENT_ROLE,
 ROLESPEC_CURRENT_USER,
 ROLESPEC_SESSION_USER,
 ROLESPEC_PUBLIC
} RoleSpecType;

typedef struct RoleSpec
{
 NodeTag type;
 RoleSpecType roletype;
 char *rolename;
 int location;
} RoleSpec;
# 358 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct FuncCall
{
 NodeTag type;
 List *funcname;
 List *args;
 List *agg_order;
 Node *agg_filter;
 struct WindowDef *over;
 
# 366 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 366 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      agg_within_group;
 
# 367 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 367 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      agg_star;
 
# 368 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 368 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      agg_distinct;
 
# 369 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 369 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      func_variadic;
 CoercionForm funcformat;
 int location;
} FuncCall;







typedef struct A_Star
{
 NodeTag type;
} A_Star;







typedef struct A_Indices
{
 NodeTag type;
 
# 394 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 394 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_slice;
 Node *lidx;
 Node *uidx;
} A_Indices;
# 414 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct A_Indirection
{
 NodeTag type;
 Node *arg;
 List *indirection;
} A_Indirection;




typedef struct A_ArrayExpr
{
 NodeTag type;
 List *elements;
 int location;
} A_ArrayExpr;
# 449 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct ResTarget
{
 NodeTag type;
 char *name;
 List *indirection;
 Node *val;
 int location;
} ResTarget;
# 467 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct MultiAssignRef
{
 NodeTag type;
 Node *source;
 int colno;
 int ncolumns;
} MultiAssignRef;




typedef struct SortBy
{
 NodeTag type;
 Node *node;
 SortByDir sortby_dir;
 SortByNulls sortby_nulls;
 List *useOp;
 int location;
} SortBy;
# 496 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct WindowDef
{
 NodeTag type;
 char *name;
 char *refname;
 List *partitionClause;
 List *orderClause;
 int frameOptions;
 Node *startOffset;
 Node *endOffset;
 int location;
} WindowDef;
# 550 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct RangeSubselect
{
 NodeTag type;
 
# 553 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 553 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      lateral;
 Node *subquery;
 Alias *alias;
} RangeSubselect;
# 572 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct RangeFunction
{
 NodeTag type;
 
# 575 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 575 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      lateral;
 
# 576 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 576 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      ordinality;
 
# 577 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 577 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_rowsfrom;
 List *functions;
 Alias *alias;
 List *coldeflist;

} RangeFunction;




typedef struct RangeTableFunc
{
 NodeTag type;
 
# 590 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 590 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      lateral;
 Node *docexpr;
 Node *rowexpr;
 List *namespaces;
 List *columns;
 Alias *alias;
 int location;
} RangeTableFunc;







typedef struct RangeTableFuncCol
{
 NodeTag type;
 char *colname;
 TypeName *typeName;
 
# 610 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 610 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      for_ordinality;
 
# 611 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 611 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_not_null;
 Node *colexpr;
 Node *coldefexpr;
 int location;
} RangeTableFuncCol;
# 627 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct RangeTableSample
{
 NodeTag type;
 Node *relation;
 List *method;
 List *args;
 Node *repeatable;
 int location;
} RangeTableSample;
# 655 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct ColumnDef
{
 NodeTag type;
 char *colname;
 TypeName *typeName;
 char *compression;
 int inhcount;
 
# 662 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 662 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_local;
 
# 663 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 663 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_not_null;
 
# 664 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 664 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_from_type;
 char storage;
 Node *raw_default;
 Node *cooked_default;
 char identity;
 RangeVar *identitySequence;

 char generated;
 CollateClause *collClause;
 Oid collOid;
 List *constraints;
 List *fdwoptions;
 int location;
} ColumnDef;




typedef struct TableLikeClause
{
 NodeTag type;
 RangeVar *relation;
 bits32 options;
 Oid relationOid;
} TableLikeClause;

typedef enum TableLikeOption
{
 CREATE_TABLE_LIKE_COMMENTS = 1 << 0,
 CREATE_TABLE_LIKE_COMPRESSION = 1 << 1,
 CREATE_TABLE_LIKE_CONSTRAINTS = 1 << 2,
 CREATE_TABLE_LIKE_DEFAULTS = 1 << 3,
 CREATE_TABLE_LIKE_GENERATED = 1 << 4,
 CREATE_TABLE_LIKE_IDENTITY = 1 << 5,
 CREATE_TABLE_LIKE_INDEXES = 1 << 6,
 CREATE_TABLE_LIKE_STATISTICS = 1 << 7,
 CREATE_TABLE_LIKE_STORAGE = 1 << 8,
 CREATE_TABLE_LIKE_ALL = (0x7FFFFFFF)
} TableLikeOption;
# 711 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct IndexElem
{
 NodeTag type;
 char *name;
 Node *expr;
 char *indexcolname;
 List *collation;
 List *opclass;
 List *opclassopts;
 SortByDir ordering;
 SortByNulls nulls_ordering;
} IndexElem;
# 734 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef enum DefElemAction
{
 DEFELEM_UNSPEC,
 DEFELEM_SET,
 DEFELEM_ADD,
 DEFELEM_DROP
} DefElemAction;

typedef struct DefElem
{
 NodeTag type;
 char *defnamespace;
 char *defname;
 Node *arg;
 DefElemAction defaction;
 int location;
} DefElem;
# 761 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct LockingClause
{
 NodeTag type;
 List *lockedRels;
 LockClauseStrength strength;
 LockWaitPolicy waitPolicy;
} LockingClause;




typedef struct XmlSerialize
{
 NodeTag type;
 XmlOptionType xmloption;
 Node *expr;
 TypeName *typeName;
 int location;
} XmlSerialize;
# 789 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct PartitionElem
{
 NodeTag type;
 char *name;
 Node *expr;
 List *collation;
 List *opclass;
 int location;
} PartitionElem;






typedef struct PartitionSpec
{
 NodeTag type;
 char *strategy;

 List *partParams;
 int location;
} PartitionSpec;
# 824 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
struct PartitionBoundSpec
{
 NodeTag type;

 char strategy;
 
# 829 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 829 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_default;


 int modulus;
 int remainder;


 List *listdatums;


 List *lowerdatums;
 List *upperdatums;

 int location;
};






typedef enum PartitionRangeDatumKind
{
 PARTITION_RANGE_DATUM_MINVALUE = -1,
 PARTITION_RANGE_DATUM_VALUE = 0,
 PARTITION_RANGE_DATUM_MAXVALUE = 1
} PartitionRangeDatumKind;

typedef struct PartitionRangeDatum
{
 NodeTag type;

 PartitionRangeDatumKind kind;
 Node *value;


 int location;
} PartitionRangeDatum;




typedef struct PartitionCmd
{
 NodeTag type;
 RangeVar *name;
 PartitionBoundSpec *bound;
 
# 876 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 876 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      concurrent;
} PartitionCmd;
# 976 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef enum RTEKind
{
 RTE_RELATION,
 RTE_SUBQUERY,
 RTE_JOIN,
 RTE_FUNCTION,
 RTE_TABLEFUNC,
 RTE_VALUES,
 RTE_CTE,
 RTE_NAMEDTUPLESTORE,
 RTE_RESULT


} RTEKind;

typedef struct RangeTblEntry
{
 NodeTag type;

 RTEKind rtekind;
# 1022 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
 Oid relid;
 char relkind;
 int rellockmode;
 struct TableSampleClause *tablesample;




 Query *subquery;
 
# 1031 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1031 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      security_barrier;
# 1068 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
 JoinType jointype;
 int joinmergedcols;
 List *joinaliasvars;
 List *joinleftcols;
 List *joinrightcols;






 Alias *join_using_alias;
# 1089 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
 List *functions;
 
# 1090 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1090 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      funcordinality;




 TableFunc *tablefunc;




 List *values_lists;




 char *ctename;
 Index ctelevelsup;
 
# 1107 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1107 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      self_reference;
# 1127 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
 List *coltypes;
 List *coltypmods;
 List *colcollations;




 char *enrname;
 double enrtuples;




 Alias *alias;
 Alias *eref;
 
# 1142 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1142 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      lateral;
 
# 1143 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1143 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      inh;
 
# 1144 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1144 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      inFromCl;
 AclMode requiredPerms;
 Oid checkAsUser;
 Bitmapset *selectedCols;
 Bitmapset *insertedCols;
 Bitmapset *updatedCols;
 Bitmapset *extraUpdatedCols;
 List *securityQuals;
} RangeTblEntry;
# 1170 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct RangeTblFunction
{
 NodeTag type;

 Node *funcexpr;
 int funccolcount;

 List *funccolnames;
 List *funccoltypes;
 List *funccoltypmods;
 List *funccolcollations;

 Bitmapset *funcparams;
} RangeTblFunction;






typedef struct TableSampleClause
{
 NodeTag type;
 Oid tsmhandler;
 List *args;
 Expr *repeatable;
} TableSampleClause;







typedef enum WCOKind
{
 WCO_VIEW_CHECK,
 WCO_RLS_INSERT_CHECK,
 WCO_RLS_UPDATE_CHECK,
 WCO_RLS_CONFLICT_CHECK
} WCOKind;

typedef struct WithCheckOption
{
 NodeTag type;
 WCOKind kind;
 char *relname;
 char *polname;
 Node *qual;
 
# 1219 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1219 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      cascaded;
} WithCheckOption;
# 1280 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct SortGroupClause
{
 NodeTag type;
 Index tleSortGroupRef;
 Oid eqop;
 Oid sortop;
 
# 1286 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1286 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      nulls_first;
 
# 1287 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1287 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      hashable;
} SortGroupClause;
# 1340 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef enum
{
 GROUPING_SET_EMPTY,
 GROUPING_SET_SIMPLE,
 GROUPING_SET_ROLLUP,
 GROUPING_SET_CUBE,
 GROUPING_SET_SETS
} GroupingSetKind;

typedef struct GroupingSet
{
 NodeTag type;
 GroupingSetKind kind;
 List *content;
 int location;
} GroupingSet;
# 1374 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct WindowClause
{
 NodeTag type;
 char *name;
 char *refname;
 List *partitionClause;
 List *orderClause;
 int frameOptions;
 Node *startOffset;
 Node *endOffset;
 Oid startInRangeFunc;
 Oid endInRangeFunc;
 Oid inRangeColl;
 
# 1387 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1387 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      inRangeAsc;
 
# 1388 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1388 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      inRangeNullsFirst;
 Index winref;
 
# 1390 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1390 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      copiedOrder;
} WindowClause;
# 1405 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct RowMarkClause
{
 NodeTag type;
 Index rti;
 LockClauseStrength strength;
 LockWaitPolicy waitPolicy;
 
# 1411 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1411 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      pushedDown;
} RowMarkClause;
# 1421 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct WithClause
{
 NodeTag type;
 List *ctes;
 
# 1425 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1425 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      recursive;
 int location;
} WithClause;







typedef struct InferClause
{
 NodeTag type;
 List *indexElems;
 Node *whereClause;
 char *conname;
 int location;
} InferClause;







typedef struct OnConflictClause
{
 NodeTag type;
 OnConflictAction action;
 InferClause *infer;
 List *targetList;
 Node *whereClause;
 int location;
} OnConflictClause;






typedef enum CTEMaterialize
{
 CTEMaterializeDefault,
 CTEMaterializeAlways,
 CTEMaterializeNever
} CTEMaterialize;

typedef struct CTESearchClause
{
 NodeTag type;
 List *search_col_list;
 
# 1476 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1476 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      search_breadth_first;
 char *search_seq_column;
 int location;
} CTESearchClause;

typedef struct CTECycleClause
{
 NodeTag type;
 List *cycle_col_list;
 char *cycle_mark_column;
 Node *cycle_mark_value;
 Node *cycle_mark_default;
 char *cycle_path_column;
 int location;

 Oid cycle_mark_type;
 int cycle_mark_typmod;
 Oid cycle_mark_collation;
 Oid cycle_mark_neop;
} CTECycleClause;

typedef struct CommonTableExpr
{
 NodeTag type;
 char *ctename;
 List *aliascolnames;
 CTEMaterialize ctematerialized;

 Node *ctequery;
 CTESearchClause *search_clause;
 CTECycleClause *cycle_clause;
 int location;

 
# 1509 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1509 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      cterecursive;
 int cterefcount;

 List *ctecolnames;
 List *ctecoltypes;
 List *ctecoltypmods;
 List *ctecolcollations;
} CommonTableExpr;
# 1533 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct TriggerTransition
{
 NodeTag type;
 char *name;
 
# 1537 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1537 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      isNew;
 
# 1538 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1538 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      isTable;
} TriggerTransition;
# 1557 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct RawStmt
{
 NodeTag type;
 Node *stmt;
 int stmt_location;
 int stmt_len;
} RawStmt;
# 1577 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct InsertStmt
{
 NodeTag type;
 RangeVar *relation;
 List *cols;
 Node *selectStmt;
 OnConflictClause *onConflictClause;
 List *returningList;
 WithClause *withClause;
 OverridingKind override;
} InsertStmt;





typedef struct DeleteStmt
{
 NodeTag type;
 RangeVar *relation;
 List *usingClause;
 Node *whereClause;
 List *returningList;
 WithClause *withClause;
} DeleteStmt;





typedef struct UpdateStmt
{
 NodeTag type;
 RangeVar *relation;
 List *targetList;
 Node *whereClause;
 List *fromClause;
 List *returningList;
 WithClause *withClause;
} UpdateStmt;
# 1631 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef enum SetOperation
{
 SETOP_NONE = 0,
 SETOP_UNION,
 SETOP_INTERSECT,
 SETOP_EXCEPT
} SetOperation;

typedef struct SelectStmt
{
 NodeTag type;




 List *distinctClause;

 IntoClause *intoClause;
 List *targetList;
 List *fromClause;
 Node *whereClause;
 List *groupClause;
 
# 1653 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1653 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      groupDistinct;
 Node *havingClause;
 List *windowClause;
# 1665 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
 List *valuesLists;





 List *sortClause;
 Node *limitOffset;
 Node *limitCount;
 LimitOption limitOption;
 List *lockingClause;
 WithClause *withClause;




 SetOperation op;
 
# 1682 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1682 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      all;
 struct SelectStmt *larg;
 struct SelectStmt *rarg;

} SelectStmt;
# 1708 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct SetOperationStmt
{
 NodeTag type;
 SetOperation op;
 
# 1712 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1712 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      all;
 Node *larg;
 Node *rarg;



 List *colTypes;
 List *colTypmods;
 List *colCollations;
 List *groupClauses;

} SetOperationStmt;





typedef struct ReturnStmt
{
 NodeTag type;
 Node *returnval;
} ReturnStmt;
# 1743 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct PLAssignStmt
{
 NodeTag type;

 char *name;
 List *indirection;
 int nnames;
 SelectStmt *val;
 int location;
} PLAssignStmt;
# 1775 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef enum ObjectType
{
 OBJECT_ACCESS_METHOD,
 OBJECT_AGGREGATE,
 OBJECT_AMOP,
 OBJECT_AMPROC,
 OBJECT_ATTRIBUTE,
 OBJECT_CAST,
 OBJECT_COLUMN,
 OBJECT_COLLATION,
 OBJECT_CONVERSION,
 OBJECT_DATABASE,
 OBJECT_DEFAULT,
 OBJECT_DEFACL,
 OBJECT_DOMAIN,
 OBJECT_DOMCONSTRAINT,
 OBJECT_EVENT_TRIGGER,
 OBJECT_EXTENSION,
 OBJECT_FDW,
 OBJECT_FOREIGN_SERVER,
 OBJECT_FOREIGN_TABLE,
 OBJECT_FUNCTION,
 OBJECT_INDEX,
 OBJECT_LANGUAGE,
 OBJECT_LARGEOBJECT,
 OBJECT_MATVIEW,
 OBJECT_OPCLASS,
 OBJECT_OPERATOR,
 OBJECT_OPFAMILY,
 OBJECT_POLICY,
 OBJECT_PROCEDURE,
 OBJECT_PUBLICATION,
 OBJECT_PUBLICATION_REL,
 OBJECT_ROLE,
 OBJECT_ROUTINE,
 OBJECT_RULE,
 OBJECT_SCHEMA,
 OBJECT_SEQUENCE,
 OBJECT_SUBSCRIPTION,
 OBJECT_STATISTIC_EXT,
 OBJECT_TABCONSTRAINT,
 OBJECT_TABLE,
 OBJECT_TABLESPACE,
 OBJECT_TRANSFORM,
 OBJECT_TRIGGER,
 OBJECT_TSCONFIGURATION,
 OBJECT_TSDICTIONARY,
 OBJECT_TSPARSER,
 OBJECT_TSTEMPLATE,
 OBJECT_TYPE,
 OBJECT_USER_MAPPING,
 OBJECT_VIEW
} ObjectType;
# 1837 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct CreateSchemaStmt
{
 NodeTag type;
 char *schemaname;
 RoleSpec *authrole;
 List *schemaElts;
 
# 1843 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1843 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
} CreateSchemaStmt;

typedef enum DropBehavior
{
 DROP_RESTRICT,
 DROP_CASCADE
} DropBehavior;





typedef struct AlterTableStmt
{
 NodeTag type;
 RangeVar *relation;
 List *cmds;
 ObjectType objtype;
 
# 1862 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1862 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} AlterTableStmt;

typedef enum AlterTableType
{
 AT_AddColumn,
 AT_AddColumnRecurse,
 AT_AddColumnToView,
 AT_ColumnDefault,
 AT_CookedColumnDefault,
 AT_DropNotNull,
 AT_SetNotNull,
 AT_DropExpression,
 AT_CheckNotNull,
 AT_SetStatistics,
 AT_SetOptions,
 AT_ResetOptions,
 AT_SetStorage,
 AT_SetCompression,
 AT_DropColumn,
 AT_DropColumnRecurse,
 AT_AddIndex,
 AT_ReAddIndex,
 AT_AddConstraint,
 AT_AddConstraintRecurse,
 AT_ReAddConstraint,
 AT_ReAddDomainConstraint,
 AT_AlterConstraint,
 AT_ValidateConstraint,
 AT_ValidateConstraintRecurse,
 AT_AddIndexConstraint,
 AT_DropConstraint,
 AT_DropConstraintRecurse,
 AT_ReAddComment,
 AT_AlterColumnType,
 AT_AlterColumnGenericOptions,
 AT_ChangeOwner,
 AT_ClusterOn,
 AT_DropCluster,
 AT_SetLogged,
 AT_SetUnLogged,
 AT_DropOids,
 AT_SetTableSpace,
 AT_SetRelOptions,
 AT_ResetRelOptions,
 AT_ReplaceRelOptions,
 AT_EnableTrig,
 AT_EnableAlwaysTrig,
 AT_EnableReplicaTrig,
 AT_DisableTrig,
 AT_EnableTrigAll,
 AT_DisableTrigAll,
 AT_EnableTrigUser,
 AT_DisableTrigUser,
 AT_EnableRule,
 AT_EnableAlwaysRule,
 AT_EnableReplicaRule,
 AT_DisableRule,
 AT_AddInherit,
 AT_DropInherit,
 AT_AddOf,
 AT_DropOf,
 AT_ReplicaIdentity,
 AT_EnableRowSecurity,
 AT_DisableRowSecurity,
 AT_ForceRowSecurity,
 AT_NoForceRowSecurity,
 AT_GenericOptions,
 AT_AttachPartition,
 AT_DetachPartition,
 AT_DetachPartitionFinalize,
 AT_AddIdentity,
 AT_SetIdentity,
 AT_DropIdentity,
 AT_ReAddStatistics
} AlterTableType;

typedef struct ReplicaIdentityStmt
{
 NodeTag type;
 char identity_type;
 char *name;
} ReplicaIdentityStmt;

typedef struct AlterTableCmd
{
 NodeTag type;
 AlterTableType subtype;
 char *name;

 int16 num;

 RoleSpec *newowner;
 Node *def;

 DropBehavior behavior;
 
# 1958 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1958 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
 
# 1959 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1959 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      recurse;
} AlterTableCmd;






typedef struct AlterCollationStmt
{
 NodeTag type;
 List *collname;
} AlterCollationStmt;
# 1981 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct AlterDomainStmt
{
 NodeTag type;
 char subtype;







 List *typeName;
 char *name;
 Node *def;
 DropBehavior behavior;
 
# 1996 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 1996 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} AlterDomainStmt;






typedef enum GrantTargetType
{
 ACL_TARGET_OBJECT,
 ACL_TARGET_ALL_IN_SCHEMA,
 ACL_TARGET_DEFAULTS
} GrantTargetType;

typedef struct GrantStmt
{
 NodeTag type;
 
# 2014 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2014 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_grant;
 GrantTargetType targtype;
 ObjectType objtype;
 List *objects;

 List *privileges;

 List *grantees;
 
# 2022 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2022 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      grant_option;
 RoleSpec *grantor;
 DropBehavior behavior;
} GrantStmt;
# 2044 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct ObjectWithArgs
{
 NodeTag type;
 List *objname;
 List *objargs;
 List *objfuncargs;
 
# 2050 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2050 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      args_unspecified;
} ObjectWithArgs;
# 2060 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct AccessPriv
{
 NodeTag type;
 char *priv_name;
 List *cols;
} AccessPriv;
# 2076 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct GrantRoleStmt
{
 NodeTag type;
 List *granted_roles;
 List *grantee_roles;
 
# 2081 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2081 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_grant;
 
# 2082 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2082 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      admin_opt;
 RoleSpec *grantor;
 DropBehavior behavior;
} GrantRoleStmt;





typedef struct AlterDefaultPrivilegesStmt
{
 NodeTag type;
 List *options;
 GrantStmt *action;
} AlterDefaultPrivilegesStmt;
# 2106 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct CopyStmt
{
 NodeTag type;
 RangeVar *relation;
 Node *query;

 List *attlist;

 
# 2114 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2114 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_from;
 
# 2115 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2115 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_program;
 char *filename;
 List *options;
 Node *whereClause;
} CopyStmt;
# 2128 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef enum
{
 VAR_SET_VALUE,
 VAR_SET_DEFAULT,
 VAR_SET_CURRENT,
 VAR_SET_MULTI,
 VAR_RESET,
 VAR_RESET_ALL
} VariableSetKind;

typedef struct VariableSetStmt
{
 NodeTag type;
 VariableSetKind kind;
 char *name;
 List *args;
 
# 2144 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2144 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_local;
} VariableSetStmt;





typedef struct VariableShowStmt
{
 NodeTag type;
 char *name;
} VariableShowStmt;
# 2168 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct CreateStmt
{
 NodeTag type;
 RangeVar *relation;
 List *tableElts;
 List *inhRelations;

 PartitionBoundSpec *partbound;
 PartitionSpec *partspec;
 TypeName *ofTypename;
 List *constraints;
 List *options;
 OnCommitAction oncommit;
 char *tablespacename;
 char *accessMethod;
 
# 2183 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2183 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
} CreateStmt;
# 2217 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef enum ConstrType
{
 CONSTR_NULL,

 CONSTR_NOTNULL,
 CONSTR_DEFAULT,
 CONSTR_IDENTITY,
 CONSTR_GENERATED,
 CONSTR_CHECK,
 CONSTR_PRIMARY,
 CONSTR_UNIQUE,
 CONSTR_EXCLUSION,
 CONSTR_FOREIGN,
 CONSTR_ATTR_DEFERRABLE,
 CONSTR_ATTR_NOT_DEFERRABLE,
 CONSTR_ATTR_DEFERRED,
 CONSTR_ATTR_IMMEDIATE
} ConstrType;
# 2248 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct Constraint
{
 NodeTag type;
 ConstrType contype;


 char *conname;
 
# 2255 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2255 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      deferrable;
 
# 2256 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2256 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      initdeferred;
 int location;


 
# 2260 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2260 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_no_inherit;
 Node *raw_expr;
 char *cooked_expr;
 char generated_when;


 List *keys;

 List *including;



 List *exclusions;


 List *options;
 char *indexname;
 char *indexspace;
 
# 2278 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2278 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      reset_default_tblspc;


 char *access_method;
 Node *where_clause;


 RangeVar *pktable;
 List *fk_attrs;
 List *pk_attrs;
 char fk_matchtype;
 char fk_upd_action;
 char fk_del_action;
 List *old_conpfeqop;
 Oid old_pktable_oid;



 
# 2296 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2296 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      skip_validation;
 
# 2297 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2297 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      initially_valid;
} Constraint;






typedef struct CreateTableSpaceStmt
{
 NodeTag type;
 char *tablespacename;
 RoleSpec *owner;
 char *location;
 List *options;
} CreateTableSpaceStmt;

typedef struct DropTableSpaceStmt
{
 NodeTag type;
 char *tablespacename;
 
# 2318 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2318 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} DropTableSpaceStmt;

typedef struct AlterTableSpaceOptionsStmt
{
 NodeTag type;
 char *tablespacename;
 List *options;
 
# 2326 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2326 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      isReset;
} AlterTableSpaceOptionsStmt;

typedef struct AlterTableMoveAllStmt
{
 NodeTag type;
 char *orig_tablespacename;
 ObjectType objtype;
 List *roles;
 char *new_tablespacename;
 
# 2336 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2336 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      nowait;
} AlterTableMoveAllStmt;






typedef struct CreateExtensionStmt
{
 NodeTag type;
 char *extname;
 
# 2348 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2348 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
 List *options;
} CreateExtensionStmt;


typedef struct AlterExtensionStmt
{
 NodeTag type;
 char *extname;
 List *options;
} AlterExtensionStmt;

typedef struct AlterExtensionContentsStmt
{
 NodeTag type;
 char *extname;
 int action;
 ObjectType objtype;
 Node *object;
} AlterExtensionContentsStmt;






typedef struct CreateFdwStmt
{
 NodeTag type;
 char *fdwname;
 List *func_options;
 List *options;
} CreateFdwStmt;

typedef struct AlterFdwStmt
{
 NodeTag type;
 char *fdwname;
 List *func_options;
 List *options;
} AlterFdwStmt;






typedef struct CreateForeignServerStmt
{
 NodeTag type;
 char *servername;
 char *servertype;
 char *version;
 char *fdwname;
 
# 2402 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2402 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
 List *options;
} CreateForeignServerStmt;

typedef struct AlterForeignServerStmt
{
 NodeTag type;
 char *servername;
 char *version;
 List *options;
 
# 2412 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2412 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      has_version;
} AlterForeignServerStmt;






typedef struct CreateForeignTableStmt
{
 CreateStmt base;
 char *servername;
 List *options;
} CreateForeignTableStmt;






typedef struct CreateUserMappingStmt
{
 NodeTag type;
 RoleSpec *user;
 char *servername;
 
# 2437 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2437 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
 List *options;
} CreateUserMappingStmt;

typedef struct AlterUserMappingStmt
{
 NodeTag type;
 RoleSpec *user;
 char *servername;
 List *options;
} AlterUserMappingStmt;

typedef struct DropUserMappingStmt
{
 NodeTag type;
 RoleSpec *user;
 char *servername;
 
# 2454 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2454 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} DropUserMappingStmt;






typedef enum ImportForeignSchemaType
{
 FDW_IMPORT_SCHEMA_ALL,
 FDW_IMPORT_SCHEMA_LIMIT_TO,
 FDW_IMPORT_SCHEMA_EXCEPT
} ImportForeignSchemaType;

typedef struct ImportForeignSchemaStmt
{
 NodeTag type;
 char *server_name;
 char *remote_schema;
 char *local_schema;
 ImportForeignSchemaType list_type;
 List *table_list;
 List *options;
} ImportForeignSchemaStmt;





typedef struct CreatePolicyStmt
{
 NodeTag type;
 char *policy_name;
 RangeVar *table;
 char *cmd_name;
 
# 2490 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2490 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      permissive;
 List *roles;
 Node *qual;
 Node *with_check;
} CreatePolicyStmt;





typedef struct AlterPolicyStmt
{
 NodeTag type;
 char *policy_name;
 RangeVar *table;
 List *roles;
 Node *qual;
 Node *with_check;
} AlterPolicyStmt;





typedef struct CreateAmStmt
{
 NodeTag type;
 char *amname;
 List *handler_name;
 char amtype;
} CreateAmStmt;





typedef struct CreateTrigStmt
{
 NodeTag type;
 
# 2529 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2529 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      replace;
 
# 2530 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2530 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      isconstraint;
 char *trigname;
 RangeVar *relation;
 List *funcname;
 List *args;
 
# 2535 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2535 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      row;

 int16 timing;

 int16 events;
 List *columns;
 Node *whenClause;

 List *transitionRels;

 
# 2545 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2545 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      deferrable;
 
# 2546 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2546 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      initdeferred;
 RangeVar *constrrel;
} CreateTrigStmt;





typedef struct CreateEventTrigStmt
{
 NodeTag type;
 char *trigname;
 char *eventname;
 List *whenclause;
 List *funcname;
} CreateEventTrigStmt;





typedef struct AlterEventTrigStmt
{
 NodeTag type;
 char *trigname;
 char tgenabled;

} AlterEventTrigStmt;





typedef struct CreatePLangStmt
{
 NodeTag type;
 
# 2582 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2582 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      replace;
 char *plname;
 List *plhandler;
 List *plinline;
 List *plvalidator;
 
# 2587 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2587 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      pltrusted;
} CreatePLangStmt;
# 2599 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef enum RoleStmtType
{
 ROLESTMT_ROLE,
 ROLESTMT_USER,
 ROLESTMT_GROUP
} RoleStmtType;

typedef struct CreateRoleStmt
{
 NodeTag type;
 RoleStmtType stmt_type;
 char *role;
 List *options;
} CreateRoleStmt;

typedef struct AlterRoleStmt
{
 NodeTag type;
 RoleSpec *role;
 List *options;
 int action;
} AlterRoleStmt;

typedef struct AlterRoleSetStmt
{
 NodeTag type;
 RoleSpec *role;
 char *database;
 VariableSetStmt *setstmt;
} AlterRoleSetStmt;

typedef struct DropRoleStmt
{
 NodeTag type;
 List *roles;
 
# 2634 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2634 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} DropRoleStmt;






typedef struct CreateSeqStmt
{
 NodeTag type;
 RangeVar *sequence;
 List *options;
 Oid ownerId;
 
# 2648 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2648 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      for_identity;
 
# 2649 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2649 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
} CreateSeqStmt;

typedef struct AlterSeqStmt
{
 NodeTag type;
 RangeVar *sequence;
 List *options;
 
# 2657 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2657 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      for_identity;
 
# 2658 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2658 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} AlterSeqStmt;





typedef struct DefineStmt
{
 NodeTag type;
 ObjectType kind;
 
# 2669 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2669 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      oldstyle;
 List *defnames;
 List *args;
 List *definition;
 
# 2673 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2673 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
 
# 2674 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2674 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      replace;
} DefineStmt;





typedef struct CreateDomainStmt
{
 NodeTag type;
 List *domainname;
 TypeName *typeName;
 CollateClause *collClause;
 List *constraints;
} CreateDomainStmt;





typedef struct CreateOpClassStmt
{
 NodeTag type;
 List *opclassname;
 List *opfamilyname;
 char *amname;
 TypeName *datatype;
 List *items;
 
# 2702 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2702 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      isDefault;
} CreateOpClassStmt;





typedef struct CreateOpClassItem
{
 NodeTag type;
 int itemtype;
 ObjectWithArgs *name;
 int number;
 List *order_family;
 List *class_args;


 TypeName *storedtype;
} CreateOpClassItem;





typedef struct CreateOpFamilyStmt
{
 NodeTag type;
 List *opfamilyname;
 char *amname;
} CreateOpFamilyStmt;





typedef struct AlterOpFamilyStmt
{
 NodeTag type;
 List *opfamilyname;
 char *amname;
 
# 2742 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2742 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      isDrop;
 List *items;
} AlterOpFamilyStmt;






typedef struct DropStmt
{
 NodeTag type;
 List *objects;
 ObjectType removeType;
 DropBehavior behavior;
 
# 2757 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2757 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
 
# 2758 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2758 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      concurrent;
} DropStmt;





typedef struct TruncateStmt
{
 NodeTag type;
 List *relations;
 
# 2769 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2769 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      restart_seqs;
 DropBehavior behavior;
} TruncateStmt;





typedef struct CommentStmt
{
 NodeTag type;
 ObjectType objtype;
 Node *object;
 char *comment;
} CommentStmt;





typedef struct SecLabelStmt
{
 NodeTag type;
 ObjectType objtype;
 Node *object;
 char *provider;
 char *label;
} SecLabelStmt;
# 2818 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct DeclareCursorStmt
{
 NodeTag type;
 char *portalname;
 int options;
 Node *query;
} DeclareCursorStmt;





typedef struct ClosePortalStmt
{
 NodeTag type;
 char *portalname;

} ClosePortalStmt;





typedef enum FetchDirection
{

 FETCH_FORWARD,
 FETCH_BACKWARD,

 FETCH_ABSOLUTE,
 FETCH_RELATIVE
} FetchDirection;



typedef struct FetchStmt
{
 NodeTag type;
 FetchDirection direction;
 long howMany;
 char *portalname;
 
# 2859 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2859 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      ismove;
} FetchStmt;
# 2873 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct IndexStmt
{
 NodeTag type;
 char *idxname;
 RangeVar *relation;
 char *accessMethod;
 char *tableSpace;
 List *indexParams;
 List *indexIncludingParams;

 List *options;
 Node *whereClause;
 List *excludeOpNames;
 char *idxcomment;
 Oid indexOid;
 Oid oldNode;
 SubTransactionId oldCreateSubid;
 SubTransactionId oldFirstRelfilenodeSubid;

 
# 2892 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2892 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      unique;
 
# 2893 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2893 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      primary;
 
# 2894 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2894 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      isconstraint;
 
# 2895 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2895 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      deferrable;
 
# 2896 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2896 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      initdeferred;
 
# 2897 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2897 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      transformed;
 
# 2898 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2898 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      concurrent;
 
# 2899 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2899 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
 
# 2900 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2900 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      reset_default_tblspc;

} IndexStmt;





typedef struct CreateStatsStmt
{
 NodeTag type;
 List *defnames;
 List *stat_types;
 List *exprs;
 List *relations;
 char *stxcomment;
 
# 2916 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2916 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      transformed;
 
# 2917 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2917 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
} CreateStatsStmt;
# 2927 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct StatsElem
{
 NodeTag type;
 char *name;
 Node *expr;
} StatsElem;






typedef struct AlterStatsStmt
{
 NodeTag type;
 List *defnames;
 int stxstattarget;
 
# 2944 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2944 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} AlterStatsStmt;





typedef struct CreateFunctionStmt
{
 NodeTag type;
 
# 2954 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2954 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_procedure;
 
# 2955 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 2955 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      replace;
 List *funcname;
 List *parameters;
 TypeName *returnType;
 List *options;
 Node *sql_body;
} CreateFunctionStmt;

typedef enum FunctionParameterMode
{

 FUNC_PARAM_IN = 'i',
 FUNC_PARAM_OUT = 'o',
 FUNC_PARAM_INOUT = 'b',
 FUNC_PARAM_VARIADIC = 'v',
 FUNC_PARAM_TABLE = 't',

 FUNC_PARAM_DEFAULT = 'd'
} FunctionParameterMode;

typedef struct FunctionParameter
{
 NodeTag type;
 char *name;
 TypeName *argType;
 FunctionParameterMode mode;
 Node *defexpr;
} FunctionParameter;

typedef struct AlterFunctionStmt
{
 NodeTag type;
 ObjectType objtype;
 ObjectWithArgs *func;
 List *actions;
} AlterFunctionStmt;







typedef struct DoStmt
{
 NodeTag type;
 List *args;
} DoStmt;

typedef struct InlineCodeBlock
{
 NodeTag type;
 char *source_text;
 Oid langOid;
 
# 3009 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3009 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      langIsTrusted;
 
# 3010 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3010 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      atomic;
} InlineCodeBlock;
# 3022 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct CallStmt
{
 NodeTag type;
 FuncCall *funccall;
 FuncExpr *funcexpr;
 List *outargs;
} CallStmt;

typedef struct CallContext
{
 NodeTag type;
 
# 3033 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3033 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      atomic;
} CallContext;





typedef struct RenameStmt
{
 NodeTag type;
 ObjectType renameType;
 ObjectType relationType;
 RangeVar *relation;
 Node *object;
 char *subname;

 char *newname;
 DropBehavior behavior;
 
# 3051 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3051 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} RenameStmt;





typedef struct AlterObjectDependsStmt
{
 NodeTag type;
 ObjectType objectType;
 RangeVar *relation;
 Node *object;
 Value *extname;
 
# 3065 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3065 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      remove;
} AlterObjectDependsStmt;





typedef struct AlterObjectSchemaStmt
{
 NodeTag type;
 ObjectType objectType;
 RangeVar *relation;
 Node *object;
 char *newschema;
 
# 3079 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3079 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} AlterObjectSchemaStmt;





typedef struct AlterOwnerStmt
{
 NodeTag type;
 ObjectType objectType;
 RangeVar *relation;
 Node *object;
 RoleSpec *newowner;
} AlterOwnerStmt;





typedef struct AlterOperatorStmt
{
 NodeTag type;
 ObjectWithArgs *opername;
 List *options;
} AlterOperatorStmt;





typedef struct AlterTypeStmt
{
 NodeTag type;
 List *typeName;
 List *options;
} AlterTypeStmt;





typedef struct RuleStmt
{
 NodeTag type;
 RangeVar *relation;
 char *rulename;
 Node *whereClause;
 CmdType event;
 
# 3128 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3128 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      instead;
 List *actions;
 
# 3130 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3130 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      replace;
} RuleStmt;





typedef struct NotifyStmt
{
 NodeTag type;
 char *conditionname;
 char *payload;
} NotifyStmt;





typedef struct ListenStmt
{
 NodeTag type;
 char *conditionname;
} ListenStmt;





typedef struct UnlistenStmt
{
 NodeTag type;
 char *conditionname;
} UnlistenStmt;





typedef enum TransactionStmtKind
{
 TRANS_STMT_BEGIN,
 TRANS_STMT_START,
 TRANS_STMT_COMMIT,
 TRANS_STMT_ROLLBACK,
 TRANS_STMT_SAVEPOINT,
 TRANS_STMT_RELEASE,
 TRANS_STMT_ROLLBACK_TO,
 TRANS_STMT_PREPARE,
 TRANS_STMT_COMMIT_PREPARED,
 TRANS_STMT_ROLLBACK_PREPARED
} TransactionStmtKind;

typedef struct TransactionStmt
{
 NodeTag type;
 TransactionStmtKind kind;
 List *options;
 char *savepoint_name;
 char *gid;
 
# 3189 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3189 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      chain;
} TransactionStmt;





typedef struct CompositeTypeStmt
{
 NodeTag type;
 RangeVar *typevar;
 List *coldeflist;
} CompositeTypeStmt;





typedef struct CreateEnumStmt
{
 NodeTag type;
 List *typeName;
 List *vals;
} CreateEnumStmt;





typedef struct CreateRangeStmt
{
 NodeTag type;
 List *typeName;
 List *params;
} CreateRangeStmt;





typedef struct AlterEnumStmt
{
 NodeTag type;
 List *typeName;
 char *oldVal;
 char *newVal;
 char *newValNeighbor;
 
# 3236 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3236 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      newValIsAfter;
 
# 3237 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3237 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      skipIfNewValExists;
} AlterEnumStmt;





typedef enum ViewCheckOption
{
 NO_CHECK_OPTION,
 LOCAL_CHECK_OPTION,
 CASCADED_CHECK_OPTION
} ViewCheckOption;

typedef struct ViewStmt
{
 NodeTag type;
 RangeVar *view;
 List *aliases;
 Node *query;
 
# 3257 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3257 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      replace;
 List *options;
 ViewCheckOption withCheckOption;
} ViewStmt;





typedef struct LoadStmt
{
 NodeTag type;
 char *filename;
} LoadStmt;





typedef struct CreatedbStmt
{
 NodeTag type;
 char *dbname;
 List *options;
} CreatedbStmt;





typedef struct AlterDatabaseStmt
{
 NodeTag type;
 char *dbname;
 List *options;
} AlterDatabaseStmt;

typedef struct AlterDatabaseSetStmt
{
 NodeTag type;
 char *dbname;
 VariableSetStmt *setstmt;
} AlterDatabaseSetStmt;





typedef struct DropdbStmt
{
 NodeTag type;
 char *dbname;
 
# 3309 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3309 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
 List *options;
} DropdbStmt;





typedef struct AlterSystemStmt
{
 NodeTag type;
 VariableSetStmt *setstmt;
} AlterSystemStmt;





typedef struct ClusterStmt
{
 NodeTag type;
 RangeVar *relation;
 char *indexname;
 List *params;
} ClusterStmt;
# 3342 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct VacuumStmt
{
 NodeTag type;
 List *options;
 List *rels;
 
# 3347 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3347 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_vacuumcmd;
} VacuumStmt;
# 3357 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct VacuumRelation
{
 NodeTag type;
 RangeVar *relation;
 Oid oid;
 List *va_cols;
} VacuumRelation;
# 3373 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct ExplainStmt
{
 NodeTag type;
 Node *query;
 List *options;
} ExplainStmt;
# 3393 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
typedef struct CreateTableAsStmt
{
 NodeTag type;
 Node *query;
 IntoClause *into;
 ObjectType objtype;
 
# 3399 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3399 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      is_select_into;
 
# 3400 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3400 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      if_not_exists;
} CreateTableAsStmt;





typedef struct RefreshMatViewStmt
{
 NodeTag type;
 
# 3410 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3410 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      concurrent;
 
# 3411 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3411 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      skipData;
 RangeVar *relation;
} RefreshMatViewStmt;





typedef struct CheckPointStmt
{
 NodeTag type;
} CheckPointStmt;






typedef enum DiscardMode
{
 DISCARD_ALL,
 DISCARD_PLANS,
 DISCARD_SEQUENCES,
 DISCARD_TEMP
} DiscardMode;

typedef struct DiscardStmt
{
 NodeTag type;
 DiscardMode target;
} DiscardStmt;





typedef struct LockStmt
{
 NodeTag type;
 List *relations;
 int mode;
 
# 3452 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3452 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      nowait;
} LockStmt;





typedef struct ConstraintsSetStmt
{
 NodeTag type;
 List *constraints;
 
# 3463 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3463 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      deferred;
} ConstraintsSetStmt;





typedef enum ReindexObjectType
{
 REINDEX_OBJECT_INDEX,
 REINDEX_OBJECT_TABLE,
 REINDEX_OBJECT_SCHEMA,
 REINDEX_OBJECT_SYSTEM,
 REINDEX_OBJECT_DATABASE
} ReindexObjectType;

typedef struct ReindexStmt
{
 NodeTag type;
 ReindexObjectType kind;

 RangeVar *relation;
 const char *name;
 List *params;
} ReindexStmt;





typedef struct CreateConversionStmt
{
 NodeTag type;
 List *conversion_name;
 char *for_encoding_name;
 char *to_encoding_name;
 List *func_name;
 
# 3500 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3500 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      def;
} CreateConversionStmt;





typedef struct CreateCastStmt
{
 NodeTag type;
 TypeName *sourcetype;
 TypeName *targettype;
 ObjectWithArgs *func;
 CoercionContext context;
 
# 3514 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3514 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      inout;
} CreateCastStmt;





typedef struct CreateTransformStmt
{
 NodeTag type;
 
# 3524 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3524 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      replace;
 TypeName *type_name;
 char *lang;
 ObjectWithArgs *fromsql;
 ObjectWithArgs *tosql;
} CreateTransformStmt;





typedef struct PrepareStmt
{
 NodeTag type;
 char *name;
 List *argtypes;
 Node *query;
} PrepareStmt;







typedef struct ExecuteStmt
{
 NodeTag type;
 char *name;
 List *params;
} ExecuteStmt;






typedef struct DeallocateStmt
{
 NodeTag type;
 char *name;

} DeallocateStmt;




typedef struct DropOwnedStmt
{
 NodeTag type;
 List *roles;
 DropBehavior behavior;
} DropOwnedStmt;




typedef struct ReassignOwnedStmt
{
 NodeTag type;
 List *roles;
 RoleSpec *newrole;
} ReassignOwnedStmt;




typedef struct AlterTSDictionaryStmt
{
 NodeTag type;
 List *dictname;
 List *options;
} AlterTSDictionaryStmt;




typedef enum AlterTSConfigType
{
 ALTER_TSCONFIG_ADD_MAPPING,
 ALTER_TSCONFIG_ALTER_MAPPING_FOR_TOKEN,
 ALTER_TSCONFIG_REPLACE_DICT,
 ALTER_TSCONFIG_REPLACE_DICT_FOR_TOKEN,
 ALTER_TSCONFIG_DROP_MAPPING
} AlterTSConfigType;

typedef struct AlterTSConfigurationStmt
{
 NodeTag type;
 AlterTSConfigType kind;
 List *cfgname;





 List *tokentype;
 List *dicts;
 
# 3622 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3622 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      override;
 
# 3623 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3623 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      replace;
 
# 3624 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3624 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
} AlterTSConfigurationStmt;


typedef struct CreatePublicationStmt
{
 NodeTag type;
 char *pubname;
 List *options;
 List *tables;
 
# 3634 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3634 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      for_all_tables;
} CreatePublicationStmt;

typedef struct AlterPublicationStmt
{
 NodeTag type;
 char *pubname;


 List *options;


 List *tables;
 
# 3647 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3647 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      for_all_tables;
 DefElemAction tableAction;
} AlterPublicationStmt;

typedef struct CreateSubscriptionStmt
{
 NodeTag type;
 char *subname;
 char *conninfo;
 List *publication;
 List *options;
} CreateSubscriptionStmt;

typedef enum AlterSubscriptionType
{
 ALTER_SUBSCRIPTION_OPTIONS,
 ALTER_SUBSCRIPTION_CONNECTION,
 ALTER_SUBSCRIPTION_SET_PUBLICATION,
 ALTER_SUBSCRIPTION_ADD_PUBLICATION,
 ALTER_SUBSCRIPTION_DROP_PUBLICATION,
 ALTER_SUBSCRIPTION_REFRESH,
 ALTER_SUBSCRIPTION_ENABLED
} AlterSubscriptionType;

typedef struct AlterSubscriptionStmt
{
 NodeTag type;
 AlterSubscriptionType kind;
 char *subname;
 char *conninfo;
 List *publication;
 List *options;
} AlterSubscriptionStmt;

typedef struct DropSubscriptionStmt
{
 NodeTag type;
 char *subname;
 
# 3685 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 3 4
_Bool 
# 3685 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
      missing_ok;
 DropBehavior behavior;
} DropSubscriptionStmt;
# 21 "/usr/include/postgresql/14/server/executor/executor.h" 2
# 1 "/usr/include/postgresql/14/server/utils/memutils.h" 1
# 20 "/usr/include/postgresql/14/server/utils/memutils.h"
# 1 "/usr/include/postgresql/14/server/nodes/memnodes.h" 1
# 29 "/usr/include/postgresql/14/server/nodes/memnodes.h"
typedef struct MemoryContextCounters
{
 Size nblocks;
 Size freechunks;
 Size totalspace;
 Size freespace;
} MemoryContextCounters;
# 54 "/usr/include/postgresql/14/server/nodes/memnodes.h"
typedef void (*MemoryStatsPrintFunc) (MemoryContext context, void *passthru,
           const char *stats_string,
           
# 56 "/usr/include/postgresql/14/server/nodes/memnodes.h" 3 4
          _Bool 
# 56 "/usr/include/postgresql/14/server/nodes/memnodes.h"
               print_to_stderr);

typedef struct MemoryContextMethods
{
 void *(*alloc) (MemoryContext context, Size size);

 void (*free_p) (MemoryContext context, void *pointer);
 void *(*realloc) (MemoryContext context, void *pointer, Size size);
 void (*reset) (MemoryContext context);
 void (*delete_context) (MemoryContext context);
 Size (*get_chunk_space) (MemoryContext context, void *pointer);
 
# 67 "/usr/include/postgresql/14/server/nodes/memnodes.h" 3 4
_Bool 
# 67 "/usr/include/postgresql/14/server/nodes/memnodes.h"
      (*is_empty) (MemoryContext context);
 void (*stats) (MemoryContext context,
        MemoryStatsPrintFunc printfunc, void *passthru,
        MemoryContextCounters *totals,
        
# 71 "/usr/include/postgresql/14/server/nodes/memnodes.h" 3 4
       _Bool 
# 71 "/usr/include/postgresql/14/server/nodes/memnodes.h"
            print_to_stderr);



} MemoryContextMethods;


typedef struct MemoryContextData
{
 NodeTag type;

 
# 82 "/usr/include/postgresql/14/server/nodes/memnodes.h" 3 4
_Bool 
# 82 "/usr/include/postgresql/14/server/nodes/memnodes.h"
      isReset;
 
# 83 "/usr/include/postgresql/14/server/nodes/memnodes.h" 3 4
_Bool 
# 83 "/usr/include/postgresql/14/server/nodes/memnodes.h"
      allowInCritSection;
 Size mem_allocated;
 const MemoryContextMethods *methods;
 MemoryContext parent;
 MemoryContext firstchild;
 MemoryContext prevchild;
 MemoryContext nextchild;
 const char *name;
 const char *ident;
 MemoryContextCallback *reset_cbs;
} MemoryContextData;
# 21 "/usr/include/postgresql/14/server/utils/memutils.h" 2
# 55 "/usr/include/postgresql/14/server/utils/memutils.h"
extern MemoryContext TopMemoryContext;
extern MemoryContext ErrorContext;
extern MemoryContext PostmasterContext;
extern MemoryContext CacheMemoryContext;
extern MemoryContext MessageContext;
extern MemoryContext TopTransactionContext;
extern MemoryContext CurTransactionContext;


extern MemoryContext PortalContext;
# 73 "/usr/include/postgresql/14/server/utils/memutils.h"
extern void MemoryContextInit(void);
extern void MemoryContextReset(MemoryContext context);
extern void MemoryContextDelete(MemoryContext context);
extern void MemoryContextResetOnly(MemoryContext context);
extern void MemoryContextResetChildren(MemoryContext context);
extern void MemoryContextDeleteChildren(MemoryContext context);
extern void MemoryContextSetIdentifier(MemoryContext context, const char *id);
extern void MemoryContextSetParent(MemoryContext context,
           MemoryContext new_parent);
extern Size GetMemoryChunkSpace(void *pointer);
extern MemoryContext MemoryContextGetParent(MemoryContext context);
extern 
# 84 "/usr/include/postgresql/14/server/utils/memutils.h" 3 4
      _Bool 
# 84 "/usr/include/postgresql/14/server/utils/memutils.h"
           MemoryContextIsEmpty(MemoryContext context);
extern Size MemoryContextMemAllocated(MemoryContext context, 
# 85 "/usr/include/postgresql/14/server/utils/memutils.h" 3 4
                                                            _Bool 
# 85 "/usr/include/postgresql/14/server/utils/memutils.h"
                                                                 recurse);
extern void MemoryContextStats(MemoryContext context);
extern void MemoryContextStatsDetail(MemoryContext context, int max_children,
          
# 88 "/usr/include/postgresql/14/server/utils/memutils.h" 3 4
         _Bool 
# 88 "/usr/include/postgresql/14/server/utils/memutils.h"
              print_to_stderr);
extern void MemoryContextAllowInCriticalSection(MemoryContext context,
            
# 90 "/usr/include/postgresql/14/server/utils/memutils.h" 3 4
           _Bool 
# 90 "/usr/include/postgresql/14/server/utils/memutils.h"
                allow);




extern 
# 95 "/usr/include/postgresql/14/server/utils/memutils.h" 3 4
      _Bool 
# 95 "/usr/include/postgresql/14/server/utils/memutils.h"
           MemoryContextContains(MemoryContext context, void *pointer);
# 113 "/usr/include/postgresql/14/server/utils/memutils.h"
static inline MemoryContext
GetMemoryChunkContext(void *pointer)
{
 MemoryContext context;






 ((void)
# 123 "/usr/include/postgresql/14/server/utils/memutils.h" 3 4
1
# 123 "/usr/include/postgresql/14/server/utils/memutils.h"
);
 ((void)
# 124 "/usr/include/postgresql/14/server/utils/memutils.h" 3 4
1
# 124 "/usr/include/postgresql/14/server/utils/memutils.h"
);




 context = *(MemoryContext *) (((char *) pointer) - sizeof(void *));

 ((void)
# 131 "/usr/include/postgresql/14/server/utils/memutils.h" 3 4
1
# 131 "/usr/include/postgresql/14/server/utils/memutils.h"
);

 return context;
}







extern void MemoryContextCreate(MemoryContext node,
        NodeTag tag,
        const MemoryContextMethods *methods,
        MemoryContext parent,
        const char *name);

extern void HandleLogMemoryContextInterrupt(void);
extern void ProcessLogMemoryContextInterrupt(void);






extern MemoryContext AllocSetContextCreateInternal(MemoryContext parent,
               const char *name,
               Size minContextSize,
               Size initBlockSize,
               Size maxBlockSize);
# 178 "/usr/include/postgresql/14/server/utils/memutils.h"
extern MemoryContext SlabContextCreate(MemoryContext parent,
            const char *name,
            Size blockSize,
            Size chunkSize);


extern MemoryContext GenerationContextCreate(MemoryContext parent,
            const char *name,
            Size blockSize);
# 22 "/usr/include/postgresql/14/server/executor/executor.h" 2
# 65 "/usr/include/postgresql/14/server/executor/executor.h"
typedef void (*ExecutorStart_hook_type) (QueryDesc *queryDesc, int eflags);
extern ExecutorStart_hook_type ExecutorStart_hook;


typedef void (*ExecutorRun_hook_type) (QueryDesc *queryDesc,
            ScanDirection direction,
            uint64 count,
            
# 72 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
           _Bool 
# 72 "/usr/include/postgresql/14/server/executor/executor.h"
                execute_once);
extern ExecutorRun_hook_type ExecutorRun_hook;


typedef void (*ExecutorFinish_hook_type) (QueryDesc *queryDesc);
extern ExecutorFinish_hook_type ExecutorFinish_hook;


typedef void (*ExecutorEnd_hook_type) (QueryDesc *queryDesc);
extern ExecutorEnd_hook_type ExecutorEnd_hook;


typedef 
# 84 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
       _Bool 
# 84 "/usr/include/postgresql/14/server/executor/executor.h"
            (*ExecutorCheckPerms_hook_type) (List *, 
# 84 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                                     _Bool
# 84 "/usr/include/postgresql/14/server/executor/executor.h"
                                                         );
extern ExecutorCheckPerms_hook_type ExecutorCheckPerms_hook;





struct Path;

extern void ExecReScan(PlanState *node);
extern void ExecMarkPos(PlanState *node);
extern void ExecRestrPos(PlanState *node);
extern 
# 96 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 96 "/usr/include/postgresql/14/server/executor/executor.h"
           ExecSupportsMarkRestore(struct Path *pathnode);
extern 
# 97 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 97 "/usr/include/postgresql/14/server/executor/executor.h"
           ExecSupportsBackwardScan(Plan *node);
extern 
# 98 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 98 "/usr/include/postgresql/14/server/executor/executor.h"
           ExecMaterializesOutput(NodeTag plantype);




extern 
# 103 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 103 "/usr/include/postgresql/14/server/executor/executor.h"
           execCurrentOf(CurrentOfExpr *cexpr,
        ExprContext *econtext,
        Oid table_oid,
        ItemPointer current_tid);




extern ExprState *execTuplesMatchPrepare(TupleDesc desc,
           int numCols,
           const AttrNumber *keyColIdx,
           const Oid *eqOperators,
           const Oid *collations,
           PlanState *parent);
extern void execTuplesHashPrepare(int numCols,
          const Oid *eqOperators,
          Oid **eqFuncOids,
          FmgrInfo **hashFunctions);
extern TupleHashTable BuildTupleHashTable(PlanState *parent,
            TupleDesc inputDesc,
            int numCols, AttrNumber *keyColIdx,
            const Oid *eqfuncoids,
            FmgrInfo *hashfunctions,
            Oid *collations,
            long nbuckets, Size additionalsize,
            MemoryContext tablecxt,
            MemoryContext tempcxt, 
# 129 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                  _Bool 
# 129 "/usr/include/postgresql/14/server/executor/executor.h"
                                       use_variable_hash_iv);
extern TupleHashTable BuildTupleHashTableExt(PlanState *parent,
            TupleDesc inputDesc,
            int numCols, AttrNumber *keyColIdx,
            const Oid *eqfuncoids,
            FmgrInfo *hashfunctions,
            Oid *collations,
            long nbuckets, Size additionalsize,
            MemoryContext metacxt,
            MemoryContext tablecxt,
            MemoryContext tempcxt, 
# 139 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                  _Bool 
# 139 "/usr/include/postgresql/14/server/executor/executor.h"
                                       use_variable_hash_iv);
extern TupleHashEntry LookupTupleHashEntry(TupleHashTable hashtable,
             TupleTableSlot *slot,
             
# 142 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
            _Bool 
# 142 "/usr/include/postgresql/14/server/executor/executor.h"
                 *isnew, uint32 *hash);
extern uint32 TupleHashTableHash(TupleHashTable hashtable,
         TupleTableSlot *slot);
extern TupleHashEntry LookupTupleHashEntryHash(TupleHashTable hashtable,
              TupleTableSlot *slot,
              
# 147 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
             _Bool 
# 147 "/usr/include/postgresql/14/server/executor/executor.h"
                  *isnew, uint32 hash);
extern TupleHashEntry FindTupleHashEntry(TupleHashTable hashtable,
           TupleTableSlot *slot,
           ExprState *eqcomp,
           FmgrInfo *hashfunctions);
extern void ResetTupleHashTable(TupleHashTable hashtable);




extern JunkFilter *ExecInitJunkFilter(List *targetList,
           TupleTableSlot *slot);
extern JunkFilter *ExecInitJunkFilterConversion(List *targetList,
            TupleDesc cleanTupType,
            TupleTableSlot *slot);
extern AttrNumber ExecFindJunkAttribute(JunkFilter *junkfilter,
          const char *attrName);
extern AttrNumber ExecFindJunkAttributeInTlist(List *targetlist,
              const char *attrName);
extern TupleTableSlot *ExecFilterJunk(JunkFilter *junkfilter,
           TupleTableSlot *slot);
# 177 "/usr/include/postgresql/14/server/executor/executor.h"
static inline Datum
ExecGetJunkAttribute(TupleTableSlot *slot, AttrNumber attno, 
# 178 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                                            _Bool 
# 178 "/usr/include/postgresql/14/server/executor/executor.h"
                                                                 *isNull)
{
 ((void)
# 180 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
1
# 180 "/usr/include/postgresql/14/server/executor/executor.h"
);
 return slot_getattr(slot, attno, isNull);
}





extern void ExecutorStart(QueryDesc *queryDesc, int eflags);
extern void standard_ExecutorStart(QueryDesc *queryDesc, int eflags);
extern void ExecutorRun(QueryDesc *queryDesc,
      ScanDirection direction, uint64 count, 
# 191 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                            _Bool 
# 191 "/usr/include/postgresql/14/server/executor/executor.h"
                                                 execute_once);
extern void standard_ExecutorRun(QueryDesc *queryDesc,
         ScanDirection direction, uint64 count, 
# 193 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                               _Bool 
# 193 "/usr/include/postgresql/14/server/executor/executor.h"
                                                    execute_once);
extern void ExecutorFinish(QueryDesc *queryDesc);
extern void standard_ExecutorFinish(QueryDesc *queryDesc);
extern void ExecutorEnd(QueryDesc *queryDesc);
extern void standard_ExecutorEnd(QueryDesc *queryDesc);
extern void ExecutorRewind(QueryDesc *queryDesc);
extern 
# 199 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 199 "/usr/include/postgresql/14/server/executor/executor.h"
           ExecCheckRTPerms(List *rangeTable, 
# 199 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                              _Bool 
# 199 "/usr/include/postgresql/14/server/executor/executor.h"
                                                   ereport_on_violation);
extern void CheckValidResultRel(ResultRelInfo *resultRelInfo, CmdType operation);
extern void InitResultRelInfo(ResultRelInfo *resultRelInfo,
         Relation resultRelationDesc,
         Index resultRelationIndex,
         ResultRelInfo *partition_root_rri,
         int instrument_options);
extern ResultRelInfo *ExecGetTriggerResultRel(EState *estate, Oid relid);
extern void ExecConstraints(ResultRelInfo *resultRelInfo,
       TupleTableSlot *slot, EState *estate);
extern 
# 209 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 209 "/usr/include/postgresql/14/server/executor/executor.h"
           ExecPartitionCheck(ResultRelInfo *resultRelInfo,
          TupleTableSlot *slot, EState *estate, 
# 210 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                               _Bool 
# 210 "/usr/include/postgresql/14/server/executor/executor.h"
                                                    emitError);
extern void ExecPartitionCheckEmitError(ResultRelInfo *resultRelInfo,
          TupleTableSlot *slot, EState *estate);
extern void ExecWithCheckOptions(WCOKind kind, ResultRelInfo *resultRelInfo,
         TupleTableSlot *slot, EState *estate);
extern LockTupleMode ExecUpdateLockMode(EState *estate, ResultRelInfo *relinfo);
extern ExecRowMark *ExecFindRowMark(EState *estate, Index rti, 
# 216 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                                              _Bool 
# 216 "/usr/include/postgresql/14/server/executor/executor.h"
                                                                   missing_ok);
extern ExecAuxRowMark *ExecBuildAuxRowMark(ExecRowMark *erm, List *targetlist);
extern TupleTableSlot *EvalPlanQual(EPQState *epqstate, Relation relation,
         Index rti, TupleTableSlot *testslot);
extern void EvalPlanQualInit(EPQState *epqstate, EState *parentestate,
        Plan *subplan, List *auxrowmarks, int epqParam);
extern void EvalPlanQualSetPlan(EPQState *epqstate,
        Plan *subplan, List *auxrowmarks);
extern TupleTableSlot *EvalPlanQualSlot(EPQState *epqstate,
          Relation relation, Index rti);


extern 
# 228 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 228 "/usr/include/postgresql/14/server/executor/executor.h"
           EvalPlanQualFetchRowMark(EPQState *epqstate, Index rti, TupleTableSlot *slot);
extern TupleTableSlot *EvalPlanQualNext(EPQState *epqstate);
extern void EvalPlanQualBegin(EPQState *epqstate);
extern void EvalPlanQualEnd(EPQState *epqstate);




extern PlanState *ExecInitNode(Plan *node, EState *estate, int eflags);
extern void ExecSetExecProcNode(PlanState *node, ExecProcNodeMtd function);
extern Node *MultiExecProcNode(PlanState *node);
extern void ExecEndNode(PlanState *node);
extern 
# 240 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 240 "/usr/include/postgresql/14/server/executor/executor.h"
           ExecShutdownNode(PlanState *node);
extern void ExecSetTupleBound(int64 tuples_needed, PlanState *child_node);
# 251 "/usr/include/postgresql/14/server/executor/executor.h"
static inline TupleTableSlot *
ExecProcNode(PlanState *node)
{
 if (node->chgParam != 
# 254 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                      ((void *)0)
# 254 "/usr/include/postgresql/14/server/executor/executor.h"
                          )
  ExecReScan(node);

 return node->ExecProcNode(node);
}





extern ExprState *ExecInitExpr(Expr *node, PlanState *parent);
extern ExprState *ExecInitExprWithParams(Expr *node, ParamListInfo ext_params);
extern ExprState *ExecInitQual(List *qual, PlanState *parent);
extern ExprState *ExecInitCheck(List *qual, PlanState *parent);
extern List *ExecInitExprList(List *nodes, PlanState *parent);
extern ExprState *ExecBuildAggTrans(AggState *aggstate, struct AggStatePerPhaseData *phase,
         
# 270 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
        _Bool 
# 270 "/usr/include/postgresql/14/server/executor/executor.h"
             doSort, 
# 270 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                     _Bool 
# 270 "/usr/include/postgresql/14/server/executor/executor.h"
                          doHash, 
# 270 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                  _Bool 
# 270 "/usr/include/postgresql/14/server/executor/executor.h"
                                       nullcheck);
extern ExprState *ExecBuildGroupingEqual(TupleDesc ldesc, TupleDesc rdesc,
           const TupleTableSlotOps *lops, const TupleTableSlotOps *rops,
           int numCols,
           const AttrNumber *keyColIdx,
           const Oid *eqfunctions,
           const Oid *collations,
           PlanState *parent);
extern ExprState *ExecBuildParamSetEqual(TupleDesc desc,
           const TupleTableSlotOps *lops,
           const TupleTableSlotOps *rops,
           const Oid *eqfunctions,
           const Oid *collations,
           const List *param_exprs,
           PlanState *parent);
extern ProjectionInfo *ExecBuildProjectionInfo(List *targetList,
              ExprContext *econtext,
              TupleTableSlot *slot,
              PlanState *parent,
              TupleDesc inputDesc);
extern ProjectionInfo *ExecBuildUpdateProjection(List *targetList,
             
# 291 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
            _Bool 
# 291 "/usr/include/postgresql/14/server/executor/executor.h"
                 evalTargetList,
             List *targetColnos,
             TupleDesc relDesc,
             ExprContext *econtext,
             TupleTableSlot *slot,
             PlanState *parent);
extern ExprState *ExecPrepareExpr(Expr *node, EState *estate);
extern ExprState *ExecPrepareQual(List *qual, EState *estate);
extern ExprState *ExecPrepareCheck(List *qual, EState *estate);
extern List *ExecPrepareExprList(List *nodes, EState *estate);
# 315 "/usr/include/postgresql/14/server/executor/executor.h"
static inline Datum
ExecEvalExpr(ExprState *state,
    ExprContext *econtext,
    
# 318 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
   _Bool 
# 318 "/usr/include/postgresql/14/server/executor/executor.h"
        *isNull)
{
 return state->evalfunc(state, econtext, isNull);
}
# 330 "/usr/include/postgresql/14/server/executor/executor.h"
static inline Datum
ExecEvalExprSwitchContext(ExprState *state,
        ExprContext *econtext,
        
# 333 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
       _Bool 
# 333 "/usr/include/postgresql/14/server/executor/executor.h"
            *isNull)
{
 Datum retDatum;
 MemoryContext oldContext;

 oldContext = MemoryContextSwitchTo(econtext->ecxt_per_tuple_memory);
 retDatum = state->evalfunc(state, econtext, isNull);
 MemoryContextSwitchTo(oldContext);
 return retDatum;
}
# 358 "/usr/include/postgresql/14/server/executor/executor.h"
static inline TupleTableSlot *
ExecProject(ProjectionInfo *projInfo)
{
 ExprContext *econtext = projInfo->pi_exprContext;
 ExprState *state = &projInfo->pi_state;
 TupleTableSlot *slot = state->resultslot;
 
# 364 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
_Bool 
# 364 "/usr/include/postgresql/14/server/executor/executor.h"
      isnull;





 ExecClearTuple(slot);


 (void) ExecEvalExprSwitchContext(state, econtext, &isnull);





 slot->tts_flags &= ~(1 << 1);
 slot->tts_nvalid = slot->tts_tupleDescriptor->natts;

 return slot;
}
# 395 "/usr/include/postgresql/14/server/executor/executor.h"
static inline 
# 395 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
             _Bool

# 396 "/usr/include/postgresql/14/server/executor/executor.h"
ExecQual(ExprState *state, ExprContext *econtext)
{
 Datum ret;
 
# 399 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
_Bool 
# 399 "/usr/include/postgresql/14/server/executor/executor.h"
      isnull;


 if (state == 
# 402 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
             ((void *)0)
# 402 "/usr/include/postgresql/14/server/executor/executor.h"
                 )
  return 
# 403 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
        1
# 403 "/usr/include/postgresql/14/server/executor/executor.h"
            ;


 ((void)
# 406 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
1
# 406 "/usr/include/postgresql/14/server/executor/executor.h"
);

 ret = ExecEvalExprSwitchContext(state, econtext, &isnull);


 ((void)
# 411 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
1
# 411 "/usr/include/postgresql/14/server/executor/executor.h"
);

 return ((
# 413 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
       _Bool
# 413 "/usr/include/postgresql/14/server/executor/executor.h"
       ) ((ret) != 0));
}







static inline 
# 422 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
             _Bool

# 423 "/usr/include/postgresql/14/server/executor/executor.h"
ExecQualAndReset(ExprState *state, ExprContext *econtext)
{
 
# 425 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
_Bool 
# 425 "/usr/include/postgresql/14/server/executor/executor.h"
      ret = ExecQual(state, econtext);


 MemoryContextReset(econtext->ecxt_per_tuple_memory);
 return ret;
}


extern 
# 433 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 433 "/usr/include/postgresql/14/server/executor/executor.h"
           ExecCheck(ExprState *state, ExprContext *context);




extern SetExprState *ExecInitTableFunctionResult(Expr *expr,
             ExprContext *econtext, PlanState *parent);
extern Tuplestorestate *ExecMakeTableFunctionResult(SetExprState *setexpr,
             ExprContext *econtext,
             MemoryContext argContext,
             TupleDesc expectedDesc,
             
# 444 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
            _Bool 
# 444 "/usr/include/postgresql/14/server/executor/executor.h"
                 randomAccess);
extern SetExprState *ExecInitFunctionResultSet(Expr *expr,
              ExprContext *econtext, PlanState *parent);
extern Datum ExecMakeFunctionResultSet(SetExprState *fcache,
            ExprContext *econtext,
            MemoryContext argContext,
            
# 450 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
           _Bool 
# 450 "/usr/include/postgresql/14/server/executor/executor.h"
                *isNull,
            ExprDoneCond *isDone);




typedef TupleTableSlot *(*ExecScanAccessMtd) (ScanState *node);
typedef 
# 457 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
       _Bool 
# 457 "/usr/include/postgresql/14/server/executor/executor.h"
            (*ExecScanRecheckMtd) (ScanState *node, TupleTableSlot *slot);

extern TupleTableSlot *ExecScan(ScanState *node, ExecScanAccessMtd accessMtd,
        ExecScanRecheckMtd recheckMtd);
extern void ExecAssignScanProjectionInfo(ScanState *node);
extern void ExecAssignScanProjectionInfoWithVarno(ScanState *node, Index varno);
extern void ExecScanReScan(ScanState *node);




extern void ExecInitResultTypeTL(PlanState *planstate);
extern void ExecInitResultSlot(PlanState *planstate,
          const TupleTableSlotOps *tts_ops);
extern void ExecInitResultTupleSlotTL(PlanState *planstate,
           const TupleTableSlotOps *tts_ops);
extern void ExecInitScanTupleSlot(EState *estate, ScanState *scanstate,
          TupleDesc tupleDesc,
          const TupleTableSlotOps *tts_ops);
extern TupleTableSlot *ExecInitExtraTupleSlot(EState *estate,
             TupleDesc tupledesc,
             const TupleTableSlotOps *tts_ops);
extern TupleTableSlot *ExecInitNullTupleSlot(EState *estate, TupleDesc tupType,
            const TupleTableSlotOps *tts_ops);
extern TupleDesc ExecTypeFromTL(List *targetList);
extern TupleDesc ExecCleanTypeFromTL(List *targetList);
extern TupleDesc ExecTypeFromExprList(List *exprList);
extern void ExecTypeSetColNames(TupleDesc typeInfo, List *namesList);
extern void UpdateChangedParamSet(PlanState *node, Bitmapset *newchg);

typedef struct TupOutputState
{
 TupleTableSlot *slot;
 DestReceiver *dest;
} TupOutputState;

extern TupOutputState *begin_tup_output_tupdesc(DestReceiver *dest,
            TupleDesc tupdesc,
            const TupleTableSlotOps *tts_ops);
extern void do_tup_output(TupOutputState *tstate, Datum *values, 
# 496 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                                                _Bool 
# 496 "/usr/include/postgresql/14/server/executor/executor.h"
                                                                     *isnull);
extern void do_text_output_multiline(TupOutputState *tstate, const char *txt);
extern void end_tup_output(TupOutputState *tstate);
# 519 "/usr/include/postgresql/14/server/executor/executor.h"
extern EState *CreateExecutorState(void);
extern void FreeExecutorState(EState *estate);
extern ExprContext *CreateExprContext(EState *estate);
extern ExprContext *CreateWorkExprContext(EState *estate);
extern ExprContext *CreateStandaloneExprContext(void);
extern void FreeExprContext(ExprContext *econtext, 
# 524 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                                  _Bool 
# 524 "/usr/include/postgresql/14/server/executor/executor.h"
                                                       isCommit);
extern void ReScanExprContext(ExprContext *econtext);




extern ExprContext *MakePerTupleExprContext(EState *estate);
# 548 "/usr/include/postgresql/14/server/executor/executor.h"
extern void ExecAssignExprContext(EState *estate, PlanState *planstate);
extern TupleDesc ExecGetResultType(PlanState *planstate);
extern const TupleTableSlotOps *ExecGetResultSlotOps(PlanState *planstate,
              
# 551 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
             _Bool 
# 551 "/usr/include/postgresql/14/server/executor/executor.h"
                  *isfixed);
extern void ExecAssignProjectionInfo(PlanState *planstate,
          TupleDesc inputDesc);
extern void ExecConditionalAssignProjectionInfo(PlanState *planstate,
            TupleDesc inputDesc, Index varno);
extern void ExecFreeExprContext(PlanState *planstate);
extern void ExecAssignScanType(ScanState *scanstate, TupleDesc tupDesc);
extern void ExecCreateScanSlotFromOuterPlan(EState *estate,
           ScanState *scanstate,
           const TupleTableSlotOps *tts_ops);

extern 
# 562 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 562 "/usr/include/postgresql/14/server/executor/executor.h"
           ExecRelationIsTargetRelation(EState *estate, Index scanrelid);

extern Relation ExecOpenScanRelation(EState *estate, Index scanrelid, int eflags);

extern void ExecInitRangeTable(EState *estate, List *rangeTable);
extern void ExecCloseRangeTableRelations(EState *estate);
extern void ExecCloseResultRelations(EState *estate);

static inline RangeTblEntry *
exec_rt_fetch(Index rti, EState *estate)
{
 return (RangeTblEntry *) list_nth(estate->es_range_table, rti - 1);
}

extern Relation ExecGetRangeTableRelation(EState *estate, Index rti);
extern void ExecInitResultRelation(EState *estate, ResultRelInfo *resultRelInfo,
           Index rti);

extern int executor_errposition(EState *estate, int location);

extern void RegisterExprContextCallback(ExprContext *econtext,
          ExprContextCallbackFunction function,
          Datum arg);
extern void UnregisterExprContextCallback(ExprContext *econtext,
            ExprContextCallbackFunction function,
            Datum arg);

extern Datum GetAttributeByName(HeapTupleHeader tuple, const char *attname,
        
# 590 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
       _Bool 
# 590 "/usr/include/postgresql/14/server/executor/executor.h"
            *isNull);
extern Datum GetAttributeByNum(HeapTupleHeader tuple, AttrNumber attrno,
          
# 592 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
         _Bool 
# 592 "/usr/include/postgresql/14/server/executor/executor.h"
              *isNull);

extern int ExecTargetListLength(List *targetlist);
extern int ExecCleanTargetListLength(List *targetlist);

extern TupleTableSlot *ExecGetTriggerOldSlot(EState *estate, ResultRelInfo *relInfo);
extern TupleTableSlot *ExecGetTriggerNewSlot(EState *estate, ResultRelInfo *relInfo);
extern TupleTableSlot *ExecGetReturningSlot(EState *estate, ResultRelInfo *relInfo);
extern TupleConversionMap *ExecGetChildToRootMap(ResultRelInfo *resultRelInfo);

extern Bitmapset *ExecGetInsertedCols(ResultRelInfo *relinfo, EState *estate);
extern Bitmapset *ExecGetUpdatedCols(ResultRelInfo *relinfo, EState *estate);
extern Bitmapset *ExecGetExtraUpdatedCols(ResultRelInfo *relinfo, EState *estate);
extern Bitmapset *ExecGetAllUpdatedCols(ResultRelInfo *relinfo, EState *estate);




extern void ExecOpenIndices(ResultRelInfo *resultRelInfo, 
# 610 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                                                         _Bool 
# 610 "/usr/include/postgresql/14/server/executor/executor.h"
                                                              speculative);
extern void ExecCloseIndices(ResultRelInfo *resultRelInfo);
extern List *ExecInsertIndexTuples(ResultRelInfo *resultRelInfo,
           TupleTableSlot *slot, EState *estate,
           
# 614 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
          _Bool 
# 614 "/usr/include/postgresql/14/server/executor/executor.h"
               update,
           
# 615 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
          _Bool 
# 615 "/usr/include/postgresql/14/server/executor/executor.h"
               noDupErr,
           
# 616 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
          _Bool 
# 616 "/usr/include/postgresql/14/server/executor/executor.h"
               *specConflict, List *arbiterIndexes);
extern 
# 617 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 617 "/usr/include/postgresql/14/server/executor/executor.h"
           ExecCheckIndexConstraints(ResultRelInfo *resultRelInfo,
           TupleTableSlot *slot,
           EState *estate, ItemPointer conflictTid,
           List *arbiterIndexes);
extern void check_exclusion_constraint(Relation heap, Relation index,
            IndexInfo *indexInfo,
            ItemPointer tupleid,
            Datum *values, 
# 624 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                          _Bool 
# 624 "/usr/include/postgresql/14/server/executor/executor.h"
                               *isnull,
            EState *estate, 
# 625 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
                           _Bool 
# 625 "/usr/include/postgresql/14/server/executor/executor.h"
                                newIndex);




extern 
# 630 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 630 "/usr/include/postgresql/14/server/executor/executor.h"
           RelationFindReplTupleByIndex(Relation rel, Oid idxoid,
           LockTupleMode lockmode,
           TupleTableSlot *searchslot,
           TupleTableSlot *outslot);
extern 
# 634 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
      _Bool 
# 634 "/usr/include/postgresql/14/server/executor/executor.h"
           RelationFindReplTupleSeq(Relation rel, LockTupleMode lockmode,
          TupleTableSlot *searchslot, TupleTableSlot *outslot);

extern void ExecSimpleRelationInsert(ResultRelInfo *resultRelInfo,
          EState *estate, TupleTableSlot *slot);
extern void ExecSimpleRelationUpdate(ResultRelInfo *resultRelInfo,
          EState *estate, EPQState *epqstate,
          TupleTableSlot *searchslot, TupleTableSlot *slot);
extern void ExecSimpleRelationDelete(ResultRelInfo *resultRelInfo,
          EState *estate, EPQState *epqstate,
          TupleTableSlot *searchslot);
extern void CheckCmdReplicaIdentity(Relation rel, CmdType cmd);

extern void CheckSubscriptionRelkind(char relkind, const char *nspname,
          const char *relname);




extern TupleTableSlot *ExecGetUpdateNewTuple(ResultRelInfo *relinfo,
            TupleTableSlot *planSlot,
            TupleTableSlot *oldSlot);
extern ResultRelInfo *ExecLookupResultRelByOid(ModifyTableState *node,
              Oid resultoid,
              
# 658 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
             _Bool 
# 658 "/usr/include/postgresql/14/server/executor/executor.h"
                  missing_ok,
              
# 659 "/usr/include/postgresql/14/server/executor/executor.h" 3 4
             _Bool 
# 659 "/usr/include/postgresql/14/server/executor/executor.h"
                  update_cache);
# 22 "/usr/include/postgresql/14/server/funcapi.h" 2
# 1 "/usr/include/postgresql/14/server/executor/tuptable.h" 1
# 23 "/usr/include/postgresql/14/server/funcapi.h" 2
# 1 "/usr/include/postgresql/14/server/fmgr.h" 1
# 24 "/usr/include/postgresql/14/server/funcapi.h" 2
# 35 "/usr/include/postgresql/14/server/funcapi.h"
typedef struct AttInMetadata
{

 TupleDesc tupdesc;


 FmgrInfo *attinfuncs;


 Oid *attioparams;


 int32 *atttypmods;
} AttInMetadata;
# 57 "/usr/include/postgresql/14/server/funcapi.h"
typedef struct FuncCallContext
{






 uint64 call_cntr;
# 74 "/usr/include/postgresql/14/server/funcapi.h"
 uint64 max_calls;







 void *user_fctx;
# 91 "/usr/include/postgresql/14/server/funcapi.h"
 AttInMetadata *attinmeta;
# 101 "/usr/include/postgresql/14/server/funcapi.h"
 MemoryContext multi_call_memory_ctx;
# 112 "/usr/include/postgresql/14/server/funcapi.h"
 TupleDesc tuple_desc;

} FuncCallContext;
# 146 "/usr/include/postgresql/14/server/funcapi.h"
typedef enum TypeFuncClass
{
 TYPEFUNC_SCALAR,
 TYPEFUNC_COMPOSITE,
 TYPEFUNC_COMPOSITE_DOMAIN,
 TYPEFUNC_RECORD,
 TYPEFUNC_OTHER
} TypeFuncClass;

extern TypeFuncClass get_call_result_type(FunctionCallInfo fcinfo,
            Oid *resultTypeId,
            TupleDesc *resultTupleDesc);
extern TypeFuncClass get_expr_result_type(Node *expr,
            Oid *resultTypeId,
            TupleDesc *resultTupleDesc);
extern TypeFuncClass get_func_result_type(Oid functionId,
            Oid *resultTypeId,
            TupleDesc *resultTupleDesc);

extern TupleDesc get_expr_result_tupdesc(Node *expr, 
# 165 "/usr/include/postgresql/14/server/funcapi.h" 3 4
                                                    _Bool 
# 165 "/usr/include/postgresql/14/server/funcapi.h"
                                                         noError);

extern 
# 167 "/usr/include/postgresql/14/server/funcapi.h" 3 4
      _Bool 
# 167 "/usr/include/postgresql/14/server/funcapi.h"
           resolve_polymorphic_argtypes(int numargs, Oid *argtypes,
           char *argmodes,
           Node *call_expr);

extern int get_func_arg_info(HeapTuple procTup,
         Oid **p_argtypes, char ***p_argnames,
         char **p_argmodes);

extern int get_func_input_arg_names(Datum proargnames, Datum proargmodes,
          char ***arg_names);

extern int get_func_trftypes(HeapTuple procTup, Oid **p_trftypes);
extern char *get_func_result_name(Oid functionId);

extern TupleDesc build_function_result_tupdesc_d(char prokind,
             Datum proallargtypes,
             Datum proargmodes,
             Datum proargnames);
extern TupleDesc build_function_result_tupdesc_t(HeapTuple procTuple);
# 224 "/usr/include/postgresql/14/server/funcapi.h"
extern TupleDesc RelationNameGetTupleDesc(const char *relname);
extern TupleDesc TypeGetTupleDesc(Oid typeoid, List *colaliases);


extern TupleDesc BlessTupleDesc(TupleDesc tupdesc);
extern AttInMetadata *TupleDescGetAttInMetadata(TupleDesc tupdesc);
extern HeapTuple BuildTupleFromCStrings(AttInMetadata *attinmeta, char **values);
extern Datum HeapTupleHeaderGetDatum(HeapTupleHeader tuple);
# 289 "/usr/include/postgresql/14/server/funcapi.h"
extern FuncCallContext *init_MultiFuncCall(FunctionCallInfo fcinfo);
extern FuncCallContext *per_MultiFuncCall(FunctionCallInfo fcinfo);
extern void end_MultiFuncCall(FunctionCallInfo fcinfo, FuncCallContext *funcctx);
# 344 "/usr/include/postgresql/14/server/funcapi.h"
extern int extract_variadic_args(FunctionCallInfo fcinfo, int variadic_start,
          
# 345 "/usr/include/postgresql/14/server/funcapi.h" 3 4
         _Bool 
# 345 "/usr/include/postgresql/14/server/funcapi.h"
              convert_unknown, Datum **values,
          Oid **types, 
# 346 "/usr/include/postgresql/14/server/funcapi.h" 3 4
                      _Bool 
# 346 "/usr/include/postgresql/14/server/funcapi.h"
                           **nulls);
# 15 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c" 2

extern Datum citus_dist_stat_activity(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_citus_dist_stat_activity(void); const Pg_finfo_record * pg_finfo_citus_dist_stat_activity (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;
extern Datum citus_worker_stat_activity(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_citus_worker_stat_activity(void); const Pg_finfo_record * pg_finfo_citus_worker_stat_activity (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;


Datum
citus_dist_stat_activity(FunctionCallInfo fcinfo)
{
 do { int __errno_location __attribute__((unused)); if (__builtin_constant_p(21) && (21) >= 21 ? errstart_cold(21, 
# 23 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c" 3 4
((void *)0)
# 23 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c"
) : errstart(21, 
# 23 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c" 3 4
((void *)0)
# 23 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c"
)) (errmsg("This UDF is deprecated.")), errfinish("//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c", 23, __func__); if (__builtin_constant_p(21) && (21) >= 21) __builtin_unreachable(); } while(0);

 do { fcinfo->isnull = 
# 25 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c" 3 4
1
# 25 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c"
; return (Datum) 0; } while (0);
}



Datum
citus_worker_stat_activity(FunctionCallInfo fcinfo)
{
 do { int __errno_location __attribute__((unused)); if (__builtin_constant_p(21) && (21) >= 21 ? errstart_cold(21, 
# 33 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c" 3 4
((void *)0)
# 33 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c"
) : errstart(21, 
# 33 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c" 3 4
((void *)0)
# 33 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c"
)) (errmsg("This UDF is deprecated.")), errfinish("//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c", 33, __func__); if (__builtin_constant_p(21) && (21) >= 21) __builtin_unreachable(); } while(0);

 do { fcinfo->isnull = 
# 35 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c" 3 4
1
# 35 "//./citus/src/backend/distributed/transaction/citus_dist_stat_activity.c"
; return (Datum) 0; } while (0);
}
