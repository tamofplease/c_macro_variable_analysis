# 0 "//./citus/src/backend/distributed/utils/relation_utils.c"
# 1 "/citus//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "//./citus/src/backend/distributed/utils/relation_utils.c"
# 13 "//./citus/src/backend/distributed/utils/relation_utils.c"
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
# 14 "//./citus/src/backend/distributed/utils/relation_utils.c" 2

# 1 "//./citus/src/include/distributed/relation_utils.h" 1
# 16 "//./citus/src/include/distributed/relation_utils.h"
# 1 "/usr/include/postgresql/14/server/utils/relcache.h" 1
# 17 "/usr/include/postgresql/14/server/utils/relcache.h"
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
# 18 "/usr/include/postgresql/14/server/utils/relcache.h" 2
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
# 19 "/usr/include/postgresql/14/server/utils/relcache.h" 2







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
# 17 "//./citus/src/include/distributed/relation_utils.h" 2

extern char * RelationGetNamespaceName(Relation relation);
# 16 "//./citus/src/backend/distributed/utils/relation_utils.c" 2

# 1 "/usr/include/postgresql/14/server/utils/lsyscache.h" 1
# 17 "/usr/include/postgresql/14/server/utils/lsyscache.h"
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
# 18 "/usr/include/postgresql/14/server/utils/lsyscache.h" 2



struct SubscriptRoutines;


typedef struct OpBtreeInterpretation
{
 Oid opfamily_id;
 int strategy;
 Oid oplefttype;
 Oid oprighttype;
} OpBtreeInterpretation;


typedef enum IOFuncSelector
{
 IOFunc_input,
 IOFunc_output,
 IOFunc_receive,
 IOFunc_send
} IOFuncSelector;






typedef struct AttStatsSlot
{

 Oid staop;
 Oid stacoll;

 Oid valuetype;
 Datum *values;
 int nvalues;

 float4 *numbers;
 int nnumbers;


 void *values_arr;
 void *numbers_arr;
} AttStatsSlot;


typedef int32 (*get_attavgwidth_hook_type) (Oid relid, AttrNumber attnum);
extern get_attavgwidth_hook_type get_attavgwidth_hook;

extern 
# 68 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 68 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           op_in_opfamily(Oid opno, Oid opfamily);
extern int get_op_opfamily_strategy(Oid opno, Oid opfamily);
extern Oid get_op_opfamily_sortfamily(Oid opno, Oid opfamily);
extern void get_op_opfamily_properties(Oid opno, Oid opfamily, 
# 71 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                                              _Bool 
# 71 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                                   ordering_op,
            int *strategy,
            Oid *lefttype,
            Oid *righttype);
extern Oid get_opfamily_member(Oid opfamily, Oid lefttype, Oid righttype,
        int16 strategy);
extern 
# 77 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 77 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_ordering_op_properties(Oid opno,
            Oid *opfamily, Oid *opcintype, int16 *strategy);
extern Oid get_equality_op_for_ordering_op(Oid opno, 
# 79 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                                    _Bool 
# 79 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                         *reverse);
extern Oid get_ordering_op_for_equality_op(Oid opno, 
# 80 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                                    _Bool 
# 80 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                         use_lhs_type);
extern List *get_mergejoin_opfamilies(Oid opno);
extern 
# 82 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 82 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_compatible_hash_operators(Oid opno,
            Oid *lhs_opno, Oid *rhs_opno);
extern 
# 84 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 84 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_op_hash_functions(Oid opno,
          RegProcedure *lhs_procno, RegProcedure *rhs_procno);
extern List *get_op_btree_interpretation(Oid opno);
extern 
# 87 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 87 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           equality_ops_are_compatible(Oid opno1, Oid opno2);
extern 
# 88 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 88 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           comparison_ops_are_compatible(Oid opno1, Oid opno2);
extern Oid get_opfamily_proc(Oid opfamily, Oid lefttype, Oid righttype,
         int16 procnum);
extern char *get_attname(Oid relid, AttrNumber attnum, 
# 91 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                                      _Bool 
# 91 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                           missing_ok);
extern AttrNumber get_attnum(Oid relid, const char *attname);
extern int get_attstattarget(Oid relid, AttrNumber attnum);
extern char get_attgenerated(Oid relid, AttrNumber attnum);
extern Oid get_atttype(Oid relid, AttrNumber attnum);
extern void get_atttypetypmodcoll(Oid relid, AttrNumber attnum,
          Oid *typid, int32 *typmod, Oid *collid);
extern Datum get_attoptions(Oid relid, int16 attnum);
extern Oid get_cast_oid(Oid sourcetypeid, Oid targettypeid, 
# 99 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                                           _Bool 
# 99 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                                missing_ok);
extern char *get_collation_name(Oid colloid);
extern 
# 101 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 101 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_collation_isdeterministic(Oid colloid);
extern char *get_constraint_name(Oid conoid);
extern Oid get_constraint_index(Oid conoid);
extern char *get_language_name(Oid langoid, 
# 104 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                           _Bool 
# 104 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                missing_ok);
extern Oid get_opclass_family(Oid opclass);
extern Oid get_opclass_input_type(Oid opclass);
extern 
# 107 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 107 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_opclass_opfamily_and_input_type(Oid opclass,
            Oid *opfamily, Oid *opcintype);
extern RegProcedure get_opcode(Oid opno);
extern char *get_opname(Oid opno);
extern Oid get_op_rettype(Oid opno);
extern void op_input_types(Oid opno, Oid *lefttype, Oid *righttype);
extern 
# 113 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 113 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           op_mergejoinable(Oid opno, Oid inputtype);
extern 
# 114 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 114 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           op_hashjoinable(Oid opno, Oid inputtype);
extern 
# 115 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 115 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           op_strict(Oid opno);
extern char op_volatile(Oid opno);
extern Oid get_commutator(Oid opno);
extern Oid get_negator(Oid opno);
extern RegProcedure get_oprrest(Oid opno);
extern RegProcedure get_oprjoin(Oid opno);
extern char *get_func_name(Oid funcid);
extern Oid get_func_namespace(Oid funcid);
extern Oid get_func_rettype(Oid funcid);
extern int get_func_nargs(Oid funcid);
extern Oid get_func_signature(Oid funcid, Oid **argtypes, int *nargs);
extern Oid get_func_variadictype(Oid funcid);
extern 
# 127 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 127 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_func_retset(Oid funcid);
extern 
# 128 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 128 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           func_strict(Oid funcid);
extern char func_volatile(Oid funcid);
extern char func_parallel(Oid funcid);
extern char get_func_prokind(Oid funcid);
extern 
# 132 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 132 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_func_leakproof(Oid funcid);
extern RegProcedure get_func_support(Oid funcid);
extern Oid get_relname_relid(const char *relname, Oid relnamespace);
extern char *get_rel_name(Oid relid);
extern Oid get_rel_namespace(Oid relid);
extern Oid get_rel_type_id(Oid relid);
extern char get_rel_relkind(Oid relid);
extern 
# 139 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 139 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_rel_relispartition(Oid relid);
extern Oid get_rel_tablespace(Oid relid);
extern char get_rel_persistence(Oid relid);
extern Oid get_transform_fromsql(Oid typid, Oid langid, List *trftypes);
extern Oid get_transform_tosql(Oid typid, Oid langid, List *trftypes);
extern 
# 144 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 144 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_typisdefined(Oid typid);
extern int16 get_typlen(Oid typid);
extern 
# 146 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 146 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_typbyval(Oid typid);
extern void get_typlenbyval(Oid typid, int16 *typlen, 
# 147 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                                     _Bool 
# 147 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                          *typbyval);
extern void get_typlenbyvalalign(Oid typid, int16 *typlen, 
# 148 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                                          _Bool 
# 148 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                               *typbyval,
         char *typalign);
extern Oid getTypeIOParam(HeapTuple typeTuple);
extern void get_type_io_data(Oid typid,
        IOFuncSelector which_func,
        int16 *typlen,
        
# 154 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
       _Bool 
# 154 "/usr/include/postgresql/14/server/utils/lsyscache.h"
            *typbyval,
        char *typalign,
        char *typdelim,
        Oid *typioparam,
        Oid *func);
extern char get_typstorage(Oid typid);
extern Node *get_typdefault(Oid typid);
extern char get_typtype(Oid typid);
extern 
# 162 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 162 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           type_is_rowtype(Oid typid);
extern 
# 163 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 163 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           type_is_enum(Oid typid);
extern 
# 164 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 164 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           type_is_range(Oid typid);
extern 
# 165 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 165 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           type_is_multirange(Oid typid);
extern void get_type_category_preferred(Oid typid,
          char *typcategory,
          
# 168 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
         _Bool 
# 168 "/usr/include/postgresql/14/server/utils/lsyscache.h"
              *typispreferred);
extern Oid get_typ_typrelid(Oid typid);
extern Oid get_element_type(Oid typid);
extern Oid get_array_type(Oid typid);
extern Oid get_promoted_array_type(Oid typid);
extern Oid get_base_element_type(Oid typid);
extern void getTypeInputInfo(Oid type, Oid *typInput, Oid *typIOParam);
extern void getTypeOutputInfo(Oid type, Oid *typOutput, 
# 175 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                                       _Bool 
# 175 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                            *typIsVarlena);
extern void getTypeBinaryInputInfo(Oid type, Oid *typReceive, Oid *typIOParam);
extern void getTypeBinaryOutputInfo(Oid type, Oid *typSend, 
# 177 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
                                                           _Bool 
# 177 "/usr/include/postgresql/14/server/utils/lsyscache.h"
                                                                *typIsVarlena);
extern Oid get_typmodin(Oid typid);
extern Oid get_typcollation(Oid typid);
extern 
# 180 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 180 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           type_is_collatable(Oid typid);
extern RegProcedure get_typsubscript(Oid typid, Oid *typelemp);
extern const struct SubscriptRoutines *getSubscriptingRoutines(Oid typid,
                  Oid *typelemp);
extern Oid getBaseType(Oid typid);
extern Oid getBaseTypeAndTypmod(Oid typid, int32 *typmod);
extern int32 get_typavgwidth(Oid typid, int32 typmod);
extern int32 get_attavgwidth(Oid relid, AttrNumber attnum);
extern 
# 188 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 188 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_attstatsslot(AttStatsSlot *sslot, HeapTuple statstuple,
        int reqkind, Oid reqop, int flags);
extern void free_attstatsslot(AttStatsSlot *sslot);
extern char *get_namespace_name(Oid nspid);
extern char *get_namespace_name_or_temp(Oid nspid);
extern Oid get_range_subtype(Oid rangeOid);
extern Oid get_range_collation(Oid rangeOid);
extern Oid get_range_multirange(Oid rangeOid);
extern Oid get_multirange_range(Oid multirangeOid);
extern Oid get_index_column_opclass(Oid index_oid, int attno);
extern 
# 198 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 198 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_index_isreplident(Oid index_oid);
extern 
# 199 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 199 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_index_isvalid(Oid index_oid);
extern 
# 200 "/usr/include/postgresql/14/server/utils/lsyscache.h" 3 4
      _Bool 
# 200 "/usr/include/postgresql/14/server/utils/lsyscache.h"
           get_index_isclustered(Oid index_oid);
# 18 "//./citus/src/backend/distributed/utils/relation_utils.c" 2
# 1 "/usr/include/postgresql/14/server/utils/rel.h" 1
# 18 "/usr/include/postgresql/14/server/utils/rel.h"
# 1 "/usr/include/postgresql/14/server/access/xlog.h" 1
# 14 "/usr/include/postgresql/14/server/access/xlog.h"
# 1 "/usr/include/postgresql/14/server/access/rmgr.h" 1
# 11 "/usr/include/postgresql/14/server/access/rmgr.h"
typedef uint8 RmgrId;
# 25 "/usr/include/postgresql/14/server/access/rmgr.h"
typedef enum RmgrIds
{
# 1 "/usr/include/postgresql/14/server/access/rmgrlist.h" 1
# 28 "/usr/include/postgresql/14/server/access/rmgrlist.h"
RM_XLOG_ID,
RM_XACT_ID,
RM_SMGR_ID,
RM_CLOG_ID,
RM_DBASE_ID,
RM_TBLSPC_ID,
RM_MULTIXACT_ID,
RM_RELMAP_ID,
RM_STANDBY_ID,
RM_HEAP2_ID,
RM_HEAP_ID,
RM_BTREE_ID,
RM_HASH_ID,
RM_GIN_ID,
RM_GIST_ID,
RM_SEQ_ID,
RM_SPGIST_ID,
RM_BRIN_ID,
RM_COMMIT_TS_ID,
RM_REPLORIGIN_ID,
RM_GENERIC_ID,
RM_LOGICALMSG_ID,
# 28 "/usr/include/postgresql/14/server/access/rmgr.h" 2
 RM_NEXT_ID
} RmgrIds;
# 15 "/usr/include/postgresql/14/server/access/xlog.h" 2
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
# 256 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, off_t __len);
# 265 "/usr/include/fcntl.h" 3 4
extern int lockf64 (int __fd, int __cmd, off64_t __len);







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
# 16 "/usr/include/postgresql/14/server/access/xlog.h" 2
# 1 "/usr/include/postgresql/14/server/access/xloginsert.h" 1
# 17 "/usr/include/postgresql/14/server/access/xloginsert.h"
# 1 "/usr/include/postgresql/14/server/storage/buf.h" 1
# 23 "/usr/include/postgresql/14/server/storage/buf.h"
typedef int Buffer;
# 44 "/usr/include/postgresql/14/server/storage/buf.h"
typedef struct BufferAccessStrategyData *BufferAccessStrategy;
# 18 "/usr/include/postgresql/14/server/access/xloginsert.h" 2
# 1 "/usr/include/postgresql/14/server/storage/relfilenode.h" 1
# 17 "/usr/include/postgresql/14/server/storage/relfilenode.h"
# 1 "/usr/include/postgresql/14/server/common/relpath.h" 1
# 20 "/usr/include/postgresql/14/server/common/relpath.h"
# 1 "/usr/include/postgresql/14/server/catalog/catversion.h" 1
# 21 "/usr/include/postgresql/14/server/common/relpath.h" 2
# 40 "/usr/include/postgresql/14/server/common/relpath.h"
typedef enum ForkNumber
{
 InvalidForkNumber = -1,
 MAIN_FORKNUM = 0,
 FSM_FORKNUM,
 VISIBILITYMAP_FORKNUM,
 INIT_FORKNUM






} ForkNumber;





extern const char *const forkNames[];

extern ForkNumber forkname_to_number(const char *forkName);
extern int forkname_chars(const char *str, ForkNumber *fork);




extern char *GetDatabasePath(Oid dbNode, Oid spcNode);

extern char *GetRelationPath(Oid dbNode, Oid spcNode, Oid relNode,
        int backendId, ForkNumber forkNumber);
# 18 "/usr/include/postgresql/14/server/storage/relfilenode.h" 2
# 1 "/usr/include/postgresql/14/server/storage/backendid.h" 1
# 21 "/usr/include/postgresql/14/server/storage/backendid.h"
typedef int BackendId;



extern BackendId MyBackendId;


extern BackendId ParallelLeaderBackendId;
# 19 "/usr/include/postgresql/14/server/storage/relfilenode.h" 2
# 57 "/usr/include/postgresql/14/server/storage/relfilenode.h"
typedef struct RelFileNode
{
 Oid spcNode;
 Oid dbNode;
 Oid relNode;
} RelFileNode;
# 72 "/usr/include/postgresql/14/server/storage/relfilenode.h"
typedef struct RelFileNodeBackend
{
 RelFileNode node;
 BackendId backend;
} RelFileNodeBackend;
# 19 "/usr/include/postgresql/14/server/access/xloginsert.h" 2
# 42 "/usr/include/postgresql/14/server/access/xloginsert.h"
extern void XLogBeginInsert(void);
extern void XLogSetRecordFlags(uint8 flags);
extern XLogRecPtr XLogInsert(RmgrId rmid, uint8 info);
extern void XLogEnsureRecordSpace(int max_block_id, int ndatas);
extern void XLogRegisterData(char *data, int len);
extern void XLogRegisterBuffer(uint8 block_id, Buffer buffer, uint8 flags);
extern void XLogRegisterBlock(uint8 block_id, RelFileNode *rnode,
         ForkNumber forknum, BlockNumber blknum, char *page,
         uint8 flags);
extern void XLogRegisterBufData(uint8 block_id, char *data, int len);
extern void XLogResetInsertion(void);
extern 
# 53 "/usr/include/postgresql/14/server/access/xloginsert.h" 3 4
      _Bool 
# 53 "/usr/include/postgresql/14/server/access/xloginsert.h"
           XLogCheckBufferNeedsBackup(Buffer buffer);

extern XLogRecPtr log_newpage(RelFileNode *rnode, ForkNumber forkNum,
         BlockNumber blk, char *page, 
# 56 "/usr/include/postgresql/14/server/access/xloginsert.h" 3 4
                                     _Bool 
# 56 "/usr/include/postgresql/14/server/access/xloginsert.h"
                                          page_std);
extern void log_newpages(RelFileNode *rnode, ForkNumber forkNum, int num_pages,
       BlockNumber *blknos, char **pages, 
# 58 "/usr/include/postgresql/14/server/access/xloginsert.h" 3 4
                                         _Bool 
# 58 "/usr/include/postgresql/14/server/access/xloginsert.h"
                                              page_std);
extern XLogRecPtr log_newpage_buffer(Buffer buffer, 
# 59 "/usr/include/postgresql/14/server/access/xloginsert.h" 3 4
                                                   _Bool 
# 59 "/usr/include/postgresql/14/server/access/xloginsert.h"
                                                        page_std);
extern void log_newpage_range(Relation rel, ForkNumber forkNum,
         BlockNumber startblk, BlockNumber endblk, 
# 61 "/usr/include/postgresql/14/server/access/xloginsert.h" 3 4
                                                  _Bool 
# 61 "/usr/include/postgresql/14/server/access/xloginsert.h"
                                                       page_std);
extern XLogRecPtr XLogSaveBufferForHint(Buffer buffer, 
# 62 "/usr/include/postgresql/14/server/access/xloginsert.h" 3 4
                                                      _Bool 
# 62 "/usr/include/postgresql/14/server/access/xloginsert.h"
                                                           buffer_std);

extern void InitXLogInsert(void);
# 17 "/usr/include/postgresql/14/server/access/xlog.h" 2
# 1 "/usr/include/postgresql/14/server/access/xlogreader.h" 1
# 38 "/usr/include/postgresql/14/server/access/xlogreader.h"
# 1 "/usr/include/postgresql/14/server/access/transam.h" 1
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
# 39 "/usr/include/postgresql/14/server/access/xlogreader.h" 2


# 1 "/usr/include/postgresql/14/server/access/xlogrecord.h" 1
# 16 "/usr/include/postgresql/14/server/access/xlogrecord.h"
# 1 "/usr/include/postgresql/14/server/port/pg_crc32c.h" 1
# 36 "/usr/include/postgresql/14/server/port/pg_crc32c.h"
# 1 "/usr/include/postgresql/14/server/port/pg_bswap.h" 1
# 37 "/usr/include/postgresql/14/server/port/pg_crc32c.h" 2

typedef uint32 pg_crc32c;
# 71 "/usr/include/postgresql/14/server/port/pg_crc32c.h"
extern pg_crc32c pg_comp_crc32c_sb8(pg_crc32c crc, const void *data, size_t len);
extern pg_crc32c (*pg_comp_crc32c) (pg_crc32c crc, const void *data, size_t len);





extern pg_crc32c pg_comp_crc32c_armv8(pg_crc32c crc, const void *data, size_t len);
# 17 "/usr/include/postgresql/14/server/access/xlogrecord.h" 2
# 41 "/usr/include/postgresql/14/server/access/xlogrecord.h"
typedef struct XLogRecord
{
 uint32 xl_tot_len;
 TransactionId xl_xid;
 XLogRecPtr xl_prev;
 uint8 xl_info;
 RmgrId xl_rmid;

 pg_crc32c xl_crc;



} XLogRecord;
# 92 "/usr/include/postgresql/14/server/access/xlogrecord.h"
typedef struct XLogRecordBlockHeader
{
 uint8 id;
 uint8 fork_flags;
 uint16 data_length;





} XLogRecordBlockHeader;
# 130 "/usr/include/postgresql/14/server/access/xlogrecord.h"
typedef struct XLogRecordBlockImageHeader
{
 uint16 length;
 uint16 hole_offset;
 uint8 bimg_info;





} XLogRecordBlockImageHeader;
# 155 "/usr/include/postgresql/14/server/access/xlogrecord.h"
typedef struct XLogRecordBlockCompressHeader
{
 uint16 hole_length;
} XLogRecordBlockCompressHeader;
# 194 "/usr/include/postgresql/14/server/access/xlogrecord.h"
typedef struct XLogRecordDataHeaderShort
{
 uint8 id;
 uint8 data_length;
} XLogRecordDataHeaderShort;



typedef struct XLogRecordDataHeaderLong
{
 uint8 id;

} XLogRecordDataHeaderLong;
# 42 "/usr/include/postgresql/14/server/access/xlogreader.h" 2


typedef struct WALOpenSegment
{
 int ws_file;
 XLogSegNo ws_segno;
 TimeLineID ws_tli;
} WALOpenSegment;


typedef struct WALSegmentContext
{
 char ws_dir[1024];
 int ws_segsize;
} WALSegmentContext;

typedef struct XLogReaderState XLogReaderState;


typedef int (*XLogPageReadCB) (XLogReaderState *xlogreader,
          XLogRecPtr targetPagePtr,
          int reqLen,
          XLogRecPtr targetRecPtr,
          char *readBuf);
typedef void (*WALSegmentOpenCB) (XLogReaderState *xlogreader,
          XLogSegNo nextSegNo,
          TimeLineID *tli_p);
typedef void (*WALSegmentCloseCB) (XLogReaderState *xlogreader);

typedef struct XLogReaderRoutine
{
# 93 "/usr/include/postgresql/14/server/access/xlogreader.h"
 XLogPageReadCB page_read;
# 107 "/usr/include/postgresql/14/server/access/xlogreader.h"
 WALSegmentOpenCB segment_open;





 WALSegmentCloseCB segment_close;
} XLogReaderRoutine;



typedef struct
{

 
# 121 "/usr/include/postgresql/14/server/access/xlogreader.h" 3 4
_Bool 
# 121 "/usr/include/postgresql/14/server/access/xlogreader.h"
      in_use;


 RelFileNode rnode;
 ForkNumber forknum;
 BlockNumber blkno;


 uint8 flags;


 
# 132 "/usr/include/postgresql/14/server/access/xlogreader.h" 3 4
_Bool 
# 132 "/usr/include/postgresql/14/server/access/xlogreader.h"
      has_image;
 
# 133 "/usr/include/postgresql/14/server/access/xlogreader.h" 3 4
_Bool 
# 133 "/usr/include/postgresql/14/server/access/xlogreader.h"
      apply_image;
 char *bkp_image;
 uint16 hole_offset;
 uint16 hole_length;
 uint16 bimg_len;
 uint8 bimg_info;


 
# 141 "/usr/include/postgresql/14/server/access/xlogreader.h" 3 4
_Bool 
# 141 "/usr/include/postgresql/14/server/access/xlogreader.h"
      has_data;
 char *data;
 uint16 data_len;
 uint16 data_bufsz;
} DecodedBkpBlock;

struct XLogReaderState
{



 XLogReaderRoutine routine;
# 163 "/usr/include/postgresql/14/server/access/xlogreader.h"
 uint64 system_identifier;




 void *private_data;






 XLogRecPtr ReadRecPtr;
 XLogRecPtr EndRecPtr;
# 186 "/usr/include/postgresql/14/server/access/xlogreader.h"
 XLogRecord *decoded_record;

 char *main_data;
 uint32 main_data_len;
 uint32 main_data_bufsz;

 RepOriginId record_origin;

 TransactionId toplevel_xid;


 DecodedBkpBlock blocks[32 + 1];

 int max_block_id;
# 210 "/usr/include/postgresql/14/server/access/xlogreader.h"
 char *readBuf;
 uint32 readLen;


 WALSegmentContext segcxt;
 WALOpenSegment seg;
 uint32 segoff;





 XLogRecPtr latestPagePtr;
 TimeLineID latestPageTLI;


 XLogRecPtr currRecPtr;

 TimeLineID currTLI;
# 238 "/usr/include/postgresql/14/server/access/xlogreader.h"
 XLogRecPtr currTLIValidUntil;





 TimeLineID nextTLI;





 char *readRecordBuf;
 uint32 readRecordBufSize;


 char *errormsg_buf;






 XLogRecPtr abortedRecPtr;
 XLogRecPtr missingContrecPtr;

 XLogRecPtr overwrittenRecPtr;
};


extern XLogReaderState *XLogReaderAllocate(int wal_segment_size,
             const char *waldir,
             XLogReaderRoutine *routine,
             void *private_data);
extern XLogReaderRoutine *LocalXLogReaderRoutine(void);


extern void XLogReaderFree(XLogReaderState *state);


extern void XLogBeginRead(XLogReaderState *state, XLogRecPtr RecPtr);





extern struct XLogRecord *XLogReadRecord(XLogReaderState *state,
           char **errormsg);


extern 
# 288 "/usr/include/postgresql/14/server/access/xlogreader.h" 3 4
      _Bool 
# 288 "/usr/include/postgresql/14/server/access/xlogreader.h"
           XLogReaderValidatePageHeader(XLogReaderState *state,
           XLogRecPtr recptr, char *phdr);





typedef struct WALReadError
{
 int wre_errno;
 int wre_off;
 int wre_req;
 int wre_read;
 WALOpenSegment wre_seg;
} WALReadError;

extern 
# 304 "/usr/include/postgresql/14/server/access/xlogreader.h" 3 4
      _Bool 
# 304 "/usr/include/postgresql/14/server/access/xlogreader.h"
           WALRead(XLogReaderState *state,
     char *buf, XLogRecPtr startptr, Size count,
     TimeLineID tli, WALReadError *errinfo);



extern 
# 310 "/usr/include/postgresql/14/server/access/xlogreader.h" 3 4
      _Bool 
# 310 "/usr/include/postgresql/14/server/access/xlogreader.h"
           DecodeXLogRecord(XLogReaderState *state, XLogRecord *record,
        char **errmsg);
# 331 "/usr/include/postgresql/14/server/access/xlogreader.h"
extern FullTransactionId XLogRecGetFullXid(XLogReaderState *record);


extern 
# 334 "/usr/include/postgresql/14/server/access/xlogreader.h" 3 4
      _Bool 
# 334 "/usr/include/postgresql/14/server/access/xlogreader.h"
           RestoreBlockImage(XLogReaderState *record, uint8 block_id, char *page);
extern char *XLogRecGetBlockData(XLogReaderState *record, uint8 block_id, Size *len);
extern 
# 336 "/usr/include/postgresql/14/server/access/xlogreader.h" 3 4
      _Bool 
# 336 "/usr/include/postgresql/14/server/access/xlogreader.h"
           XLogRecGetBlockTag(XLogReaderState *record, uint8 block_id,
          RelFileNode *rnode, ForkNumber *forknum,
          BlockNumber *blknum);
# 18 "/usr/include/postgresql/14/server/access/xlog.h" 2
# 1 "/usr/include/postgresql/14/server/datatype/timestamp.h" 1
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
# 19 "/usr/include/postgresql/14/server/access/xlog.h" 2
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
# 20 "/usr/include/postgresql/14/server/access/xlog.h" 2

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
# 233 "/usr/include/dirent.h" 3 4
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

extern long int __sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));

# 82 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 234 "/usr/include/dirent.h" 2 3 4
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
# 22 "/usr/include/postgresql/14/server/access/xlog.h" 2
# 30 "/usr/include/postgresql/14/server/access/xlog.h"
extern int sync_method;

extern TimeLineID ThisTimeLineID;
# 41 "/usr/include/postgresql/14/server/access/xlog.h"
extern 
# 41 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 41 "/usr/include/postgresql/14/server/access/xlog.h"
           InRecovery;
# 64 "/usr/include/postgresql/14/server/access/xlog.h"
typedef enum
{
 STANDBY_DISABLED,
 STANDBY_INITIALIZED,
 STANDBY_SNAPSHOT_PENDING,
 STANDBY_SNAPSHOT_READY
} HotStandbyState;

extern HotStandbyState standbyState;







typedef enum
{
 RECOVERY_TARGET_UNSET,
 RECOVERY_TARGET_XID,
 RECOVERY_TARGET_TIME,
 RECOVERY_TARGET_NAME,
 RECOVERY_TARGET_LSN,
 RECOVERY_TARGET_IMMEDIATE
} RecoveryTargetType;




typedef enum
{
 RECOVERY_TARGET_TIMELINE_CONTROLFILE,
 RECOVERY_TARGET_TIMELINE_LATEST,
 RECOVERY_TARGET_TIMELINE_NUMERIC
} RecoveryTargetTimeLineGoal;

extern XLogRecPtr ProcLastRecPtr;
extern XLogRecPtr XactLastRecEnd;
extern XLogRecPtr XactLastCommitEnd;

extern 
# 104 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 104 "/usr/include/postgresql/14/server/access/xlog.h"
           reachedConsistency;


extern int wal_segment_size;
extern int min_wal_size_mb;
extern int max_wal_size_mb;
extern int wal_keep_size_mb;
extern int max_slot_wal_keep_size_mb;
extern int XLOGbuffers;
extern int XLogArchiveTimeout;
extern int wal_retrieve_retry_interval;
extern char *XLogArchiveCommand;
extern 
# 116 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 116 "/usr/include/postgresql/14/server/access/xlog.h"
           EnableHotStandby;
extern 
# 117 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 117 "/usr/include/postgresql/14/server/access/xlog.h"
           fullPageWrites;
extern 
# 118 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 118 "/usr/include/postgresql/14/server/access/xlog.h"
           wal_log_hints;
extern 
# 119 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 119 "/usr/include/postgresql/14/server/access/xlog.h"
           wal_compression;
extern 
# 120 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 120 "/usr/include/postgresql/14/server/access/xlog.h"
           wal_init_zero;
extern 
# 121 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 121 "/usr/include/postgresql/14/server/access/xlog.h"
           wal_recycle;
extern 
# 122 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 122 "/usr/include/postgresql/14/server/access/xlog.h"
           *wal_consistency_checking;
extern char *wal_consistency_checking_string;
extern 
# 124 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 124 "/usr/include/postgresql/14/server/access/xlog.h"
           log_checkpoints;
extern char *recoveryRestoreCommand;
extern char *recoveryEndCommand;
extern char *archiveCleanupCommand;
extern 
# 128 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 128 "/usr/include/postgresql/14/server/access/xlog.h"
           recoveryTargetInclusive;
extern int recoveryTargetAction;
extern int recovery_min_apply_delay;
extern char *PrimaryConnInfo;
extern char *PrimarySlotName;
extern 
# 133 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 133 "/usr/include/postgresql/14/server/access/xlog.h"
           wal_receiver_create_temp_slot;
extern 
# 134 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 134 "/usr/include/postgresql/14/server/access/xlog.h"
           track_wal_io_timing;


extern TransactionId recoveryTargetXid;
extern char *recovery_target_time_string;
extern const char *recoveryTargetName;
extern XLogRecPtr recoveryTargetLSN;
extern RecoveryTargetType recoveryTarget;
extern char *PromoteTriggerFile;
extern RecoveryTargetTimeLineGoal recoveryTargetTimeLineGoal;
extern TimeLineID recoveryTargetTLIRequested;
extern TimeLineID recoveryTargetTLI;

extern int CheckPointSegments;


extern 
# 150 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 150 "/usr/include/postgresql/14/server/access/xlog.h"
           StandbyModeRequested;
extern 
# 151 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 151 "/usr/include/postgresql/14/server/access/xlog.h"
           StandbyMode;


typedef enum ArchiveMode
{
 ARCHIVE_MODE_OFF = 0,
 ARCHIVE_MODE_ON,
 ARCHIVE_MODE_ALWAYS
} ArchiveMode;
extern int XLogArchiveMode;


typedef enum WalLevel
{
 WAL_LEVEL_MINIMAL = 0,
 WAL_LEVEL_REPLICA,
 WAL_LEVEL_LOGICAL
} WalLevel;


typedef enum RecoveryState
{
 RECOVERY_STATE_CRASH = 0,
 RECOVERY_STATE_ARCHIVE,
 RECOVERY_STATE_DONE
} RecoveryState;


typedef enum RecoveryPauseState
{
 RECOVERY_NOT_PAUSED,
 RECOVERY_PAUSE_REQUESTED,
 RECOVERY_PAUSED
} RecoveryPauseState;

extern int wal_level;
# 253 "/usr/include/postgresql/14/server/access/xlog.h"
typedef struct CheckpointStatsData
{
 TimestampTz ckpt_start_t;
 TimestampTz ckpt_write_t;
 TimestampTz ckpt_sync_t;
 TimestampTz ckpt_sync_end_t;
 TimestampTz ckpt_end_t;

 int ckpt_bufs_written;

 int ckpt_segs_added;
 int ckpt_segs_removed;
 int ckpt_segs_recycled;

 int ckpt_sync_rels;
 uint64 ckpt_longest_sync;
 uint64 ckpt_agg_sync_time;



} CheckpointStatsData;

extern CheckpointStatsData CheckpointStats;




typedef enum WALAvailability
{
 WALAVAIL_INVALID_LSN,
 WALAVAIL_RESERVED,
 WALAVAIL_EXTENDED,

 WALAVAIL_UNRESERVED,
 WALAVAIL_REMOVED
} WALAvailability;

struct XLogRecData;

extern XLogRecPtr XLogInsertRecord(struct XLogRecData *rdata,
           XLogRecPtr fpw_lsn,
           uint8 flags,
           int num_fpi);
extern void XLogFlush(XLogRecPtr RecPtr);
extern 
# 297 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 297 "/usr/include/postgresql/14/server/access/xlog.h"
           XLogBackgroundFlush(void);
extern 
# 298 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 298 "/usr/include/postgresql/14/server/access/xlog.h"
           XLogNeedsFlush(XLogRecPtr RecPtr);
extern int XLogFileInit(XLogSegNo segno, 
# 299 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
                                        _Bool 
# 299 "/usr/include/postgresql/14/server/access/xlog.h"
                                             *use_existent, 
# 299 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
                                                            _Bool 
# 299 "/usr/include/postgresql/14/server/access/xlog.h"
                                                                 use_lock);
extern int XLogFileOpen(XLogSegNo segno);

extern void CheckXLogRemoved(XLogSegNo segno, TimeLineID tli);
extern XLogSegNo XLogGetLastRemovedSegno(void);
extern void XLogSetAsyncXactLSN(XLogRecPtr record);
extern void XLogSetReplicationSlotMinimumLSN(XLogRecPtr lsn);

extern void xlog_redo(XLogReaderState *record);
extern void xlog_desc(StringInfo buf, XLogReaderState *record);
extern const char *xlog_identify(uint8 info);

extern void issue_xlog_fsync(int fd, XLogSegNo segno);

extern 
# 313 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 313 "/usr/include/postgresql/14/server/access/xlog.h"
           RecoveryInProgress(void);
extern RecoveryState GetRecoveryState(void);
extern 
# 315 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 315 "/usr/include/postgresql/14/server/access/xlog.h"
           HotStandbyActive(void);
extern 
# 316 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 316 "/usr/include/postgresql/14/server/access/xlog.h"
           HotStandbyActiveInReplay(void);
extern 
# 317 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 317 "/usr/include/postgresql/14/server/access/xlog.h"
           XLogInsertAllowed(void);
extern void GetXLogReceiptTime(TimestampTz *rtime, 
# 318 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
                                                  _Bool 
# 318 "/usr/include/postgresql/14/server/access/xlog.h"
                                                       *fromStream);
extern XLogRecPtr GetXLogReplayRecPtr(TimeLineID *replayTLI);
extern XLogRecPtr GetXLogInsertRecPtr(void);
extern XLogRecPtr GetXLogWriteRecPtr(void);
extern RecoveryPauseState GetRecoveryPauseState(void);
extern void SetRecoveryPause(
# 323 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
                            _Bool 
# 323 "/usr/include/postgresql/14/server/access/xlog.h"
                                 recoveryPause);
extern TimestampTz GetLatestXTime(void);
extern TimestampTz GetCurrentChunkReplayStartTime(void);

extern void UpdateControlFile(void);
extern uint64 GetSystemIdentifier(void);
extern char *GetMockAuthenticationNonce(void);
extern 
# 330 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 330 "/usr/include/postgresql/14/server/access/xlog.h"
           DataChecksumsEnabled(void);
extern XLogRecPtr GetFakeLSNForUnloggedRel(void);
extern Size XLOGShmemSize(void);
extern void XLOGShmemInit(void);
extern void BootStrapXLOG(void);
extern void LocalProcessControlFile(
# 335 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
                                   _Bool 
# 335 "/usr/include/postgresql/14/server/access/xlog.h"
                                        reset);
extern void StartupXLOG(void);
extern void ShutdownXLOG(int code, Datum arg);
extern void InitXLOGAccess(void);
extern void CreateCheckPoint(int flags);
extern 
# 340 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 340 "/usr/include/postgresql/14/server/access/xlog.h"
           CreateRestartPoint(int flags);
extern WALAvailability GetWALAvailability(XLogRecPtr targetLSN);
extern XLogRecPtr CalculateMaxmumSafeLSN(void);
extern void XLogPutNextOid(Oid nextOid);
extern XLogRecPtr XLogRestorePoint(const char *rpName);
extern void UpdateFullPageWrites(void);
extern void GetFullPageWriteInfo(XLogRecPtr *RedoRecPtr_p, 
# 346 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
                                                          _Bool 
# 346 "/usr/include/postgresql/14/server/access/xlog.h"
                                                               *doPageWrites_p);
extern XLogRecPtr GetRedoRecPtr(void);
extern XLogRecPtr GetInsertRecPtr(void);
extern XLogRecPtr GetFlushRecPtr(void);
extern XLogRecPtr GetLastImportantRecPtr(void);
extern void RemovePromoteSignalFiles(void);

extern 
# 353 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 353 "/usr/include/postgresql/14/server/access/xlog.h"
           PromoteIsTriggered(void);
extern 
# 354 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
      _Bool 
# 354 "/usr/include/postgresql/14/server/access/xlog.h"
           CheckPromoteSignal(void);
extern void WakeupRecovery(void);
extern void SetWalWriterSleeping(
# 356 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
                                _Bool 
# 356 "/usr/include/postgresql/14/server/access/xlog.h"
                                     sleeping);

extern void StartupRequestWalReceiverRestart(void);
extern void XLogRequestWalReceiverReply(void);

extern void assign_max_wal_size(int newval, void *extra);
extern void assign_checkpoint_completion_target(double newval, void *extra);
# 378 "/usr/include/postgresql/14/server/access/xlog.h"
typedef enum SessionBackupState
{
 SESSION_BACKUP_NONE,
 SESSION_BACKUP_EXCLUSIVE,
 SESSION_BACKUP_NON_EXCLUSIVE
} SessionBackupState;

extern XLogRecPtr do_pg_start_backup(const char *backupidstr, 
# 385 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
                                                             _Bool 
# 385 "/usr/include/postgresql/14/server/access/xlog.h"
                                                                  fast,
          TimeLineID *starttli_p, StringInfo labelfile,
          List **tablespaces, StringInfo tblspcmapfile);
extern XLogRecPtr do_pg_stop_backup(char *labelfile, 
# 388 "/usr/include/postgresql/14/server/access/xlog.h" 3 4
                                                    _Bool 
# 388 "/usr/include/postgresql/14/server/access/xlog.h"
                                                         waitforarchive,
         TimeLineID *stoptli_p);
extern void do_pg_abort_backup(int code, Datum arg);
extern void register_persistent_abort_backup_handler(void);
extern SessionBackupState get_backup_status(void);
# 19 "/usr/include/postgresql/14/server/utils/rel.h" 2
# 1 "/usr/include/postgresql/14/server/catalog/pg_class.h" 1
# 22 "/usr/include/postgresql/14/server/catalog/pg_class.h"
# 1 "/usr/include/postgresql/14/server/catalog/pg_class_d.h" 1
# 23 "/usr/include/postgresql/14/server/catalog/pg_class.h" 2
# 32 "/usr/include/postgresql/14/server/catalog/pg_class.h"
typedef struct FormData_pg_class
{

 Oid oid;


 NameData relname;


 Oid relnamespace ;


 Oid reltype ;


 Oid reloftype ;


 Oid relowner ;


 Oid relam ;



 Oid relfilenode ;


 Oid reltablespace ;


 int32 relpages ;


 float4 reltuples ;


 int32 relallvisible ;


 Oid reltoastrelid ;


 
# 75 "/usr/include/postgresql/14/server/catalog/pg_class.h" 3 4
_Bool 
# 75 "/usr/include/postgresql/14/server/catalog/pg_class.h"
      relhasindex ;


 
# 78 "/usr/include/postgresql/14/server/catalog/pg_class.h" 3 4
_Bool 
# 78 "/usr/include/postgresql/14/server/catalog/pg_class.h"
      relisshared ;


 char relpersistence ;


 char relkind ;


 int16 relnatts ;
# 96 "/usr/include/postgresql/14/server/catalog/pg_class.h"
 int16 relchecks ;


 
# 99 "/usr/include/postgresql/14/server/catalog/pg_class.h" 3 4
_Bool 
# 99 "/usr/include/postgresql/14/server/catalog/pg_class.h"
      relhasrules ;


 
# 102 "/usr/include/postgresql/14/server/catalog/pg_class.h" 3 4
_Bool 
# 102 "/usr/include/postgresql/14/server/catalog/pg_class.h"
      relhastriggers ;


 
# 105 "/usr/include/postgresql/14/server/catalog/pg_class.h" 3 4
_Bool 
# 105 "/usr/include/postgresql/14/server/catalog/pg_class.h"
      relhassubclass ;


 
# 108 "/usr/include/postgresql/14/server/catalog/pg_class.h" 3 4
_Bool 
# 108 "/usr/include/postgresql/14/server/catalog/pg_class.h"
      relrowsecurity ;


 
# 111 "/usr/include/postgresql/14/server/catalog/pg_class.h" 3 4
_Bool 
# 111 "/usr/include/postgresql/14/server/catalog/pg_class.h"
      relforcerowsecurity ;


 
# 114 "/usr/include/postgresql/14/server/catalog/pg_class.h" 3 4
_Bool 
# 114 "/usr/include/postgresql/14/server/catalog/pg_class.h"
      relispopulated ;


 char relreplident ;


 
# 120 "/usr/include/postgresql/14/server/catalog/pg_class.h" 3 4
_Bool 
# 120 "/usr/include/postgresql/14/server/catalog/pg_class.h"
      relispartition ;


 Oid relrewrite ;


 TransactionId relfrozenxid ;


 TransactionId relminmxid ;
# 142 "/usr/include/postgresql/14/server/catalog/pg_class.h"
} FormData_pg_class;
# 153 "/usr/include/postgresql/14/server/catalog/pg_class.h"
typedef FormData_pg_class *Form_pg_class;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;
# 20 "/usr/include/postgresql/14/server/utils/rel.h" 2
# 1 "/usr/include/postgresql/14/server/catalog/pg_index.h" 1
# 22 "/usr/include/postgresql/14/server/catalog/pg_index.h"
# 1 "/usr/include/postgresql/14/server/catalog/pg_index_d.h" 1
# 23 "/usr/include/postgresql/14/server/catalog/pg_index.h" 2






typedef struct FormData_pg_index
{
 Oid indexrelid ;
 Oid indrelid ;

 int16 indnatts;
 int16 indnkeyatts;
 
# 36 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 36 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indisunique;
 
# 37 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 37 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indisprimary;
 
# 38 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 38 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indisexclusion;
 
# 39 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 39 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indimmediate;
 
# 40 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 40 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indisclustered;
 
# 41 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 41 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indisvalid;
 
# 42 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 42 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indcheckxmin;
 
# 43 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 43 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indisready;
 
# 44 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 44 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indislive;
 
# 45 "/usr/include/postgresql/14/server/catalog/pg_index.h" 3 4
_Bool 
# 45 "/usr/include/postgresql/14/server/catalog/pg_index.h"
      indisreplident;


 int2vector indkey ;
# 62 "/usr/include/postgresql/14/server/catalog/pg_index.h"
} FormData_pg_index;






typedef FormData_pg_index *Form_pg_index;

extern int no_such_variable;

extern int no_such_variable;



extern int no_such_variable;
# 21 "/usr/include/postgresql/14/server/utils/rel.h" 2
# 1 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 1
# 21 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
# 1 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 1
# 17 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
# 1 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 1
# 26 "/usr/include/postgresql/14/server/nodes/parsenodes.h"
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
# 27 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 2
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
# 28 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 2
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
# 1 "/usr/include/postgresql/14/server/partitioning/partdefs.h" 1
# 16 "/usr/include/postgresql/14/server/partitioning/partdefs.h"
typedef struct PartitionBoundInfoData *PartitionBoundInfo;

typedef struct PartitionKeyData *PartitionKey;

typedef struct PartitionBoundSpec PartitionBoundSpec;

typedef struct PartitionDescData *PartitionDesc;

typedef struct PartitionDirectoryData *PartitionDirectory;
# 30 "/usr/include/postgresql/14/server/nodes/parsenodes.h" 2


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
# 18 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 2
# 1 "/usr/include/postgresql/14/server/storage/lockdefs.h" 1
# 25 "/usr/include/postgresql/14/server/storage/lockdefs.h"
typedef int LOCKMASK;
typedef int LOCKMODE;
# 52 "/usr/include/postgresql/14/server/storage/lockdefs.h"
typedef struct xl_standby_lock
{
 TransactionId xid;
 Oid dbOid;
 Oid relOid;
} xl_standby_lock;
# 19 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 2





typedef struct ObjectAddress
{
 Oid classId;
 Oid objectId;
 int32 objectSubId;
} ObjectAddress;

extern const ObjectAddress InvalidObjectAddress;
# 43 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
extern ObjectAddress get_object_address(ObjectType objtype, Node *object,
          Relation *relp,
          LOCKMODE lockmode, 
# 45 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 3 4
                            _Bool 
# 45 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
                                 missing_ok);

extern ObjectAddress get_object_address_rv(ObjectType objtype, RangeVar *rel,
             List *object, Relation *relp,
             LOCKMODE lockmode, 
# 49 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 3 4
                               _Bool 
# 49 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
                                    missing_ok);

extern void check_object_ownership(Oid roleid,
           ObjectType objtype, ObjectAddress address,
           Node *object, Relation relation);

extern Oid get_object_namespace(const ObjectAddress *address);

extern 
# 57 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 3 4
      _Bool 
# 57 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
           is_objectclass_supported(Oid class_id);
extern const char *get_object_class_descr(Oid class_id);
extern Oid get_object_oid_index(Oid class_id);
extern int get_object_catcache_oid(Oid class_id);
extern int get_object_catcache_name(Oid class_id);
extern AttrNumber get_object_attnum_oid(Oid class_id);
extern AttrNumber get_object_attnum_name(Oid class_id);
extern AttrNumber get_object_attnum_namespace(Oid class_id);
extern AttrNumber get_object_attnum_owner(Oid class_id);
extern AttrNumber get_object_attnum_acl(Oid class_id);
extern ObjectType get_object_type(Oid class_id, Oid object_id);
extern 
# 68 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 3 4
      _Bool 
# 68 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
           get_object_namensp_unique(Oid class_id);

extern HeapTuple get_catalog_object_by_oid(Relation catalog,
             AttrNumber oidcol, Oid objectId);

extern char *getObjectDescription(const ObjectAddress *object,
          
# 74 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 3 4
         _Bool 
# 74 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
              missing_ok);
extern char *getObjectDescriptionOids(Oid classid, Oid objid);

extern int read_objtype_from_string(const char *objtype);
extern char *getObjectTypeDescription(const ObjectAddress *object,
           
# 79 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 3 4
          _Bool 
# 79 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
               missing_ok);
extern char *getObjectIdentity(const ObjectAddress *address,
          
# 81 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 3 4
         _Bool 
# 81 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
              missing_ok);
extern char *getObjectIdentityParts(const ObjectAddress *address,
         List **objname, List **objargs,
         
# 84 "/usr/include/postgresql/14/server/catalog/objectaddress.h" 3 4
        _Bool 
# 84 "/usr/include/postgresql/14/server/catalog/objectaddress.h"
             missing_ok);
extern struct ArrayType *strlist_to_textarray(List *list);

extern ObjectType get_relkind_objtype(char relkind);
# 22 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 2
# 1 "/usr/include/postgresql/14/server/catalog/pg_publication_d.h" 1
# 23 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 2






typedef struct FormData_pg_publication
{
 Oid oid;

 NameData pubname;

 Oid pubowner ;





 
# 41 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 41 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      puballtables;


 
# 44 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 44 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubinsert;


 
# 47 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 47 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubupdate;


 
# 50 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 50 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubdelete;


 
# 53 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 53 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubtruncate;


 
# 56 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 56 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubviaroot;
} FormData_pg_publication;






typedef FormData_pg_publication *Form_pg_publication;

extern int no_such_variable;

extern int no_such_variable;


typedef struct PublicationActions
{
 
# 73 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 73 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubinsert;
 
# 74 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 74 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubupdate;
 
# 75 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 75 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubdelete;
 
# 76 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 76 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubtruncate;
} PublicationActions;

typedef struct Publication
{
 Oid oid;
 char *name;
 
# 83 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 83 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      alltables;
 
# 84 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
_Bool 
# 84 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
      pubviaroot;
 PublicationActions pubactions;
} Publication;

extern Publication *GetPublication(Oid pubid);
extern Publication *GetPublicationByName(const char *pubname, 
# 89 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
                                                             _Bool 
# 89 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
                                                                  missing_ok);
extern List *GetRelationPublications(Oid relid);
# 101 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
typedef enum PublicationPartOpt
{
 PUBLICATION_PART_ROOT,
 PUBLICATION_PART_LEAF,
 PUBLICATION_PART_ALL,
} PublicationPartOpt;

extern List *GetPublicationRelations(Oid pubid, PublicationPartOpt pub_partopt);
extern List *GetAllTablesPublications(void);
extern List *GetAllTablesPublicationRelations(
# 110 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
                                             _Bool 
# 110 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
                                                  pubviaroot);

extern 
# 112 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
      _Bool 
# 112 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
           is_publishable_relation(Relation rel);
extern ObjectAddress publication_add_relation(Oid pubid, Relation targetrel,
             
# 114 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
            _Bool 
# 114 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
                 if_not_exists);
extern List *GetPubPartitionOptionRelations(List *result,
           PublicationPartOpt pub_partopt,
           Oid relid);

extern Oid get_publication_oid(const char *pubname, 
# 119 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
                                                   _Bool 
# 119 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
                                                        missing_ok);
extern char *get_publication_name(Oid pubid, 
# 120 "/usr/include/postgresql/14/server/catalog/pg_publication.h" 3 4
                                            _Bool 
# 120 "/usr/include/postgresql/14/server/catalog/pg_publication.h"
                                                 missing_ok);
# 22 "/usr/include/postgresql/14/server/utils/rel.h" 2


# 1 "/usr/include/postgresql/14/server/rewrite/prs2lock.h" 1
# 24 "/usr/include/postgresql/14/server/rewrite/prs2lock.h"
typedef struct RewriteRule
{
 Oid ruleId;
 CmdType event;
 Node *qual;
 List *actions;
 char enabled;
 
# 31 "/usr/include/postgresql/14/server/rewrite/prs2lock.h" 3 4
_Bool 
# 31 "/usr/include/postgresql/14/server/rewrite/prs2lock.h"
      isInstead;
} RewriteRule;







typedef struct RuleLock
{
 int numLocks;
 RewriteRule **rules;
} RuleLock;
# 25 "/usr/include/postgresql/14/server/utils/rel.h" 2



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
# 29 "/usr/include/postgresql/14/server/utils/rel.h" 2







typedef struct LockRelId
{
 Oid relId;
 Oid dbId;
} LockRelId;

typedef struct LockInfoData
{
 LockRelId lockRelId;
} LockInfoData;

typedef LockInfoData *LockInfo;





typedef struct RelationData
{
 RelFileNode rd_node;

 struct SMgrRelationData *rd_smgr;
 int rd_refcnt;
 BackendId rd_backend;
 
# 60 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 60 "/usr/include/postgresql/14/server/utils/rel.h"
      rd_islocaltemp;
 
# 61 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 61 "/usr/include/postgresql/14/server/utils/rel.h"
      rd_isnailed;
 
# 62 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 62 "/usr/include/postgresql/14/server/utils/rel.h"
      rd_isvalid;
 
# 63 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 63 "/usr/include/postgresql/14/server/utils/rel.h"
      rd_indexvalid;

 
# 65 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 65 "/usr/include/postgresql/14/server/utils/rel.h"
      rd_statvalid;
# 102 "/usr/include/postgresql/14/server/utils/rel.h"
 SubTransactionId rd_createSubid;
 SubTransactionId rd_newRelfilenodeSubid;

 SubTransactionId rd_firstRelfilenodeSubid;

 SubTransactionId rd_droppedSubid;

 Form_pg_class rd_rel;
 TupleDesc rd_att;
 Oid rd_id;
 LockInfoData rd_lockInfo;
 RuleLock *rd_rules;
 MemoryContext rd_rulescxt;
 TriggerDesc *trigdesc;

 struct RowSecurityDesc *rd_rsdesc;


 List *rd_fkeylist;
 
# 121 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 121 "/usr/include/postgresql/14/server/utils/rel.h"
      rd_fkeyvalid;


 PartitionKey rd_partkey;
 MemoryContext rd_partkeycxt;


 PartitionDesc rd_partdesc;
 MemoryContext rd_pdcxt;


 PartitionDesc rd_partdesc_nodetached;
 MemoryContext rd_pddcxt;
# 142 "/usr/include/postgresql/14/server/utils/rel.h"
 TransactionId rd_partdesc_nodetached_xmin;


 List *rd_partcheck;
 
# 146 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 146 "/usr/include/postgresql/14/server/utils/rel.h"
      rd_partcheckvalid;
 MemoryContext rd_partcheckcxt;


 List *rd_indexlist;
 Oid rd_pkindex;
 Oid rd_replidindex;


 List *rd_statlist;


 Bitmapset *rd_indexattr;
 Bitmapset *rd_keyattr;
 Bitmapset *rd_pkattr;
 Bitmapset *rd_idattr;

 PublicationActions *rd_pubactions;






 bytea *rd_options;
# 179 "/usr/include/postgresql/14/server/utils/rel.h"
 Oid rd_amhandler;




 const struct TableAmRoutine *rd_tableam;


 Form_pg_index rd_index;

 struct HeapTupleData *rd_indextuple;
# 199 "/usr/include/postgresql/14/server/utils/rel.h"
 MemoryContext rd_indexcxt;

 struct IndexAmRoutine *rd_indam;
 Oid *rd_opfamily;
 Oid *rd_opcintype;
 RegProcedure *rd_support;
 struct FmgrInfo *rd_supportinfo;
 int16 *rd_indoption;
 List *rd_indexprs;
 List *rd_indpred;
 Oid *rd_exclops;
 Oid *rd_exclprocs;
 uint16 *rd_exclstrats;
 Oid *rd_indcollation;
 bytea **rd_opcoptions;
# 224 "/usr/include/postgresql/14/server/utils/rel.h"
 void *rd_amcache;
# 235 "/usr/include/postgresql/14/server/utils/rel.h"
 struct FdwRoutine *rd_fdwroutine;
# 246 "/usr/include/postgresql/14/server/utils/rel.h"
 Oid rd_toastoid;


 struct PgStat_TableStatus *pgstat_info;
} RelationData;
# 267 "/usr/include/postgresql/14/server/utils/rel.h"
typedef struct ForeignKeyCacheInfo
{
 NodeTag type;
 Oid conoid;
 Oid conrelid;
 Oid confrelid;
 int nkeys;

 AttrNumber conkey[32];
 AttrNumber confkey[32];
 Oid conpfeqop[32];
} ForeignKeyCacheInfo;
# 290 "/usr/include/postgresql/14/server/utils/rel.h"
typedef struct AutoVacOpts
{
 
# 292 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 292 "/usr/include/postgresql/14/server/utils/rel.h"
      enabled;
 int vacuum_threshold;
 int vacuum_ins_threshold;
 int analyze_threshold;
 int vacuum_cost_limit;
 int freeze_min_age;
 int freeze_max_age;
 int freeze_table_age;
 int multixact_freeze_min_age;
 int multixact_freeze_max_age;
 int multixact_freeze_table_age;
 int log_min_duration;
 float8 vacuum_cost_delay;
 float8 vacuum_scale_factor;
 float8 vacuum_ins_scale_factor;
 float8 analyze_scale_factor;
} AutoVacOpts;


typedef enum StdRdOptIndexCleanup
{
 STDRD_OPTION_VACUUM_INDEX_CLEANUP_AUTO = 0,
 STDRD_OPTION_VACUUM_INDEX_CLEANUP_OFF,
 STDRD_OPTION_VACUUM_INDEX_CLEANUP_ON
} StdRdOptIndexCleanup;

typedef struct StdRdOptions
{
 int32 vl_len_;
 int fillfactor;
 int toast_tuple_target;
 AutoVacOpts autovacuum;
 
# 324 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 324 "/usr/include/postgresql/14/server/utils/rel.h"
      user_catalog_table;
 int parallel_workers;
 StdRdOptIndexCleanup vacuum_index_cleanup;
 
# 327 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 327 "/usr/include/postgresql/14/server/utils/rel.h"
      vacuum_truncate;
} StdRdOptions;
# 384 "/usr/include/postgresql/14/server/utils/rel.h"
typedef enum ViewOptCheckOption
{
 VIEW_OPTION_CHECK_OPTION_NOT_SET,
 VIEW_OPTION_CHECK_OPTION_LOCAL,
 VIEW_OPTION_CHECK_OPTION_CASCADED
} ViewOptCheckOption;





typedef struct ViewOptions
{
 int32 vl_len_;
 
# 398 "/usr/include/postgresql/14/server/utils/rel.h" 3 4
_Bool 
# 398 "/usr/include/postgresql/14/server/utils/rel.h"
      security_barrier;
 ViewOptCheckOption check_option;
} ViewOptions;
# 669 "/usr/include/postgresql/14/server/utils/rel.h"
extern void RelationIncrementReferenceCount(Relation rel);
extern void RelationDecrementReferenceCount(Relation rel);
# 19 "//./citus/src/backend/distributed/utils/relation_utils.c" 2





char *
RelationGetNamespaceName(Relation relation)
{
 Oid namespaceId = ((relation)->rd_rel->relnamespace);
 char *namespaceName = get_namespace_name(namespaceId);
 return namespaceName;
}
