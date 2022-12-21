# 0 "src/backend/utils/adt/agtype_ops.c"
# 1 "/age//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/backend/utils/adt/agtype_ops.c"
# 24 "src/backend/utils/adt/agtype_ops.c"
# 1 "/usr/include/postgresql/11/server/postgres.h" 1
# 46 "/usr/include/postgresql/11/server/postgres.h"
# 1 "/usr/include/postgresql/11/server/c.h" 1
# 49 "/usr/include/postgresql/11/server/c.h"
# 1 "/usr/include/postgresql/11/server/postgres_ext.h" 1
# 26 "/usr/include/postgresql/11/server/postgres_ext.h"
# 1 "/usr/include/postgresql/11/server/pg_config_ext.h" 1
# 27 "/usr/include/postgresql/11/server/postgres_ext.h" 2




typedef unsigned int Oid;
# 47 "/usr/include/postgresql/11/server/postgres_ext.h"
typedef long int pg_int64;
# 50 "/usr/include/postgresql/11/server/c.h" 2




# 1 "/usr/include/postgresql/11/server/pg_config.h" 1
# 55 "/usr/include/postgresql/11/server/c.h" 2
# 1 "/usr/include/postgresql/11/server/pg_config_manual.h" 1
# 56 "/usr/include/postgresql/11/server/c.h" 2
# 1 "/usr/include/postgresql/11/server/pg_config_os.h" 1
# 57 "/usr/include/postgresql/11/server/c.h" 2


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








# 60 "/usr/include/postgresql/11/server/c.h" 2
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








# 61 "/usr/include/postgresql/11/server/c.h" 2
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




# 62 "/usr/include/postgresql/11/server/c.h" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stddef.h" 3 4
} max_align_t;
# 63 "/usr/include/postgresql/11/server/c.h" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdarg.h" 1 3 4
# 64 "/usr/include/postgresql/11/server/c.h" 2




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
# 69 "/usr/include/postgresql/11/server/c.h" 2


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




# 72 "/usr/include/postgresql/11/server/c.h" 2



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








# 76 "/usr/include/postgresql/11/server/c.h" 2

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

# 78 "/usr/include/postgresql/11/server/c.h" 2
# 282 "/usr/include/postgresql/11/server/c.h"
# 1 "/usr/lib/gcc/aarch64-linux-gnu/11/include/stdbool.h" 1 3 4
# 283 "/usr/include/postgresql/11/server/c.h" 2
# 314 "/usr/include/postgresql/11/server/c.h"

# 314 "/usr/include/postgresql/11/server/c.h"
typedef char *Pointer;
# 323 "/usr/include/postgresql/11/server/c.h"
typedef signed char int8;
typedef signed short int16;
typedef signed int int32;
# 335 "/usr/include/postgresql/11/server/c.h"
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;






typedef uint8 bits8;
typedef uint16 bits16;
typedef uint32 bits32;
# 355 "/usr/include/postgresql/11/server/c.h"
typedef long int int64;


typedef unsigned long int uint64;
# 394 "/usr/include/postgresql/11/server/c.h"
typedef __int128 int128

__attribute__((aligned(8)))

;

typedef unsigned __int128 uint128

__attribute__((aligned(8)))

;
# 445 "/usr/include/postgresql/11/server/c.h"
typedef size_t Size;
# 454 "/usr/include/postgresql/11/server/c.h"
typedef unsigned int Index;
# 464 "/usr/include/postgresql/11/server/c.h"
typedef signed int Offset;




typedef float float4;
typedef double float8;
# 483 "/usr/include/postgresql/11/server/c.h"
typedef Oid regproc;
typedef regproc RegProcedure;

typedef uint32 TransactionId;

typedef uint32 LocalTransactionId;

typedef uint32 SubTransactionId;





typedef TransactionId MultiXactId;

typedef uint32 MultiXactOffset;

typedef uint32 CommandId;
# 509 "/usr/include/postgresql/11/server/c.h"
typedef struct
{
 int indx[6];
} IntArray;
# 528 "/usr/include/postgresql/11/server/c.h"
struct varlena
{
 char vl_len_[4];
 char vl_dat[];
};
# 541 "/usr/include/postgresql/11/server/c.h"
typedef struct varlena bytea;
typedef struct varlena text;
typedef struct varlena BpChar;
typedef struct varlena VarChar;
# 556 "/usr/include/postgresql/11/server/c.h"
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
# 781 "/usr/include/postgresql/11/server/c.h"
extern void ExceptionalCondition(const char *conditionName,
      const char *errorType,
      const char *fileName, int lineNumber) __attribute__((noreturn));
# 1047 "/usr/include/postgresql/11/server/c.h"
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
# 1248 "/usr/include/postgresql/11/server/c.h"
# 1 "/usr/include/postgresql/11/server/port.h" 1
# 16 "/usr/include/postgresql/11/server/port.h"
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

# 17 "/usr/include/postgresql/11/server/port.h" 2
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



# 18 "/usr/include/postgresql/11/server/port.h" 2
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



# 19 "/usr/include/postgresql/11/server/port.h" 2
# 31 "/usr/include/postgresql/11/server/port.h"

# 31 "/usr/include/postgresql/11/server/port.h"
typedef int pgsocket;
# 41 "/usr/include/postgresql/11/server/port.h"
extern 
# 41 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 41 "/usr/include/postgresql/11/server/port.h"
           pg_set_noblock(pgsocket sock);
extern 
# 42 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 42 "/usr/include/postgresql/11/server/port.h"
           pg_set_block(pgsocket sock);



extern 
# 46 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 46 "/usr/include/postgresql/11/server/port.h"
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
# 55 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 55 "/usr/include/postgresql/11/server/port.h"
           path_contains_parent_reference(const char *path);
extern 
# 56 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 56 "/usr/include/postgresql/11/server/port.h"
           path_is_relative_and_below_cwd(const char *path);
extern 
# 57 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 57 "/usr/include/postgresql/11/server/port.h"
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
# 71 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 71 "/usr/include/postgresql/11/server/port.h"
           get_home_path(char *ret_path);
extern void get_parent_directory(char *path);


extern char **pgfnames(const char *path);
extern void pgfnames_cleanup(char **filenames);
# 107 "/usr/include/postgresql/11/server/port.h"
extern void set_pglocale_pgservice(const char *argv0, const char *app);


extern int find_my_exec(const char *argv0, char *retpath);
extern int find_other_exec(const char *argv0, const char *target,
    const char *versionstr, char *retpath);
# 131 "/usr/include/postgresql/11/server/port.h"
extern void pg_usleep(long microsec);


extern int pg_strcasecmp(const char *s1, const char *s2);
extern int pg_strncasecmp(const char *s1, const char *s2, size_t n);
extern unsigned char pg_toupper(unsigned char ch);
extern unsigned char pg_tolower(unsigned char ch);
extern unsigned char pg_ascii_toupper(unsigned char ch);
extern unsigned char pg_ascii_tolower(unsigned char ch);
# 197 "/usr/include/postgresql/11/server/port.h"
extern const char *pg_strsignal(int signum);


extern void simple_prompt(const char *prompt, char *destination, size_t destlen,
     
# 201 "/usr/include/postgresql/11/server/port.h" 3 4
    _Bool 
# 201 "/usr/include/postgresql/11/server/port.h"
         echo);

extern int pclose_check(FILE *stream);
# 248 "/usr/include/postgresql/11/server/port.h"
extern 
# 248 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 248 "/usr/include/postgresql/11/server/port.h"
           rmtree(const char *path, 
# 248 "/usr/include/postgresql/11/server/port.h" 3 4
                                    _Bool 
# 248 "/usr/include/postgresql/11/server/port.h"
                                         rmtopdir);
# 333 "/usr/include/postgresql/11/server/port.h"
extern double pg_erand48(unsigned short xseed[3]);
extern long pg_lrand48(void);
extern long pg_jrand48(unsigned short xseed[3]);
extern void pg_srand48(long seed);


extern int fls(int mask);
# 348 "/usr/include/postgresql/11/server/port.h"
extern int getpeereid(int sock, uid_t *uid, gid_t *gid);
# 386 "/usr/include/postgresql/11/server/port.h"
extern size_t strlcat(char *dst, const char *src, size_t siz);



extern size_t strlcpy(char *dst, const char *src, size_t siz);
# 414 "/usr/include/postgresql/11/server/port.h"
extern char *pqStrerror(int errnum, char *strerrbuf, size_t buflen);


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


extern int pg_get_encoding_from_locale(const char *ctype, 
# 439 "/usr/include/postgresql/11/server/port.h" 3 4
                                                         _Bool 
# 439 "/usr/include/postgresql/11/server/port.h"
                                                              write_message);






extern char *inet_net_ntop(int af, const void *src, int bits,
     char *dst, size_t size);



extern 
# 451 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 451 "/usr/include/postgresql/11/server/port.h"
           pg_strong_random(void *buf, size_t len);



extern int pg_check_dir(const char *dir);


extern int pg_mkdir_p(char *path, int omode);


typedef void (*pqsigfunc) (int signo);
extern pqsigfunc pqsignal(int signo, pqsigfunc func);


extern char *escape_single_quotes_ascii(const char *src);


extern char *wait_result_to_str(int exit_status);
extern 
# 469 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 469 "/usr/include/postgresql/11/server/port.h"
           wait_result_is_signal(int exit_status, int signum);
extern 
# 470 "/usr/include/postgresql/11/server/port.h" 3 4
      _Bool 
# 470 "/usr/include/postgresql/11/server/port.h"
           wait_result_is_any_signal(int exit_status, 
# 470 "/usr/include/postgresql/11/server/port.h" 3 4
                                                      _Bool 
# 470 "/usr/include/postgresql/11/server/port.h"
                                                           include_command_not_found);
# 1249 "/usr/include/postgresql/11/server/c.h" 2
# 47 "/usr/include/postgresql/11/server/postgres.h" 2
# 1 "/usr/include/postgresql/11/server/utils/elog.h" 1
# 17 "/usr/include/postgresql/11/server/utils/elog.h"
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



# 18 "/usr/include/postgresql/11/server/utils/elog.h" 2
# 71 "/usr/include/postgresql/11/server/utils/elog.h"
# 1 "/usr/include/postgresql/11/server/utils/errcodes.h" 1
# 72 "/usr/include/postgresql/11/server/utils/elog.h" 2
# 127 "/usr/include/postgresql/11/server/utils/elog.h"

# 127 "/usr/include/postgresql/11/server/utils/elog.h"
extern 
# 127 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
      _Bool 
# 127 "/usr/include/postgresql/11/server/utils/elog.h"
           errstart(int elevel, const char *filename, int lineno,
   const char *funcname, const char *domain);
extern void errfinish(int dummy,...);

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
# 166 "/usr/include/postgresql/11/server/utils/elog.h"
extern int set_errcontext_domain(const char *domain);

extern int errcontext_msg(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errhidestmt(
# 170 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
                      _Bool 
# 170 "/usr/include/postgresql/11/server/utils/elog.h"
                           hide_stmt);
extern int errhidecontext(
# 171 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
                         _Bool 
# 171 "/usr/include/postgresql/11/server/utils/elog.h"
                              hide_ctx);

extern int errfunction(const char *funcname);
extern int errposition(int cursorpos);

extern int internalerrposition(int cursorpos);
extern int internalerrquery(const char *query);

extern int err_generic_string(int field, const char *str);

extern int geterrcode(void);
extern int geterrposition(void);
extern int getinternalerrposition(void);
# 224 "/usr/include/postgresql/11/server/utils/elog.h"
extern void elog_start(const char *filename, int lineno, const char *funcname);
extern void elog_finish(int elevel, const char *fmt,...) __attribute__((format(gnu_printf, 2, 3)));




extern void pre_format_elog_string(int errnumber, const char *domain);
extern char *format_elog_string(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));




typedef struct ErrorContextCallback
{
 struct ErrorContextCallback *previous;
 void (*callback) (void *arg);
 void *arg;
} ErrorContextCallback;

extern ErrorContextCallback *error_context_stack;
# 318 "/usr/include/postgresql/11/server/utils/elog.h"
extern sigjmp_buf *PG_exception_stack;
# 329 "/usr/include/postgresql/11/server/utils/elog.h"
typedef struct ErrorData
{
 int elevel;
 
# 332 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
_Bool 
# 332 "/usr/include/postgresql/11/server/utils/elog.h"
      output_to_server;
 
# 333 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
_Bool 
# 333 "/usr/include/postgresql/11/server/utils/elog.h"
      output_to_client;
 
# 334 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
_Bool 
# 334 "/usr/include/postgresql/11/server/utils/elog.h"
      show_funcname;
 
# 335 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
_Bool 
# 335 "/usr/include/postgresql/11/server/utils/elog.h"
      hide_stmt;
 
# 336 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
_Bool 
# 336 "/usr/include/postgresql/11/server/utils/elog.h"
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
# 391 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
      _Bool 
# 391 "/usr/include/postgresql/11/server/utils/elog.h"
           syslog_sequence_numbers;
extern 
# 392 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
      _Bool 
# 392 "/usr/include/postgresql/11/server/utils/elog.h"
           syslog_split_messages;
# 401 "/usr/include/postgresql/11/server/utils/elog.h"
extern void DebugFileOpen(void);
extern char *unpack_sql_state(int sql_state);
extern 
# 403 "/usr/include/postgresql/11/server/utils/elog.h" 3 4
      _Bool 
# 403 "/usr/include/postgresql/11/server/utils/elog.h"
           in_error_recursion_trouble(void);


extern void set_syslog_parameters(const char *ident, int facility);







extern void write_stderr(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
# 48 "/usr/include/postgresql/11/server/postgres.h" 2
# 1 "/usr/include/postgresql/11/server/utils/palloc.h" 1
# 36 "/usr/include/postgresql/11/server/utils/palloc.h"
typedef struct MemoryContextData *MemoryContext;
# 45 "/usr/include/postgresql/11/server/utils/palloc.h"
typedef void (*MemoryContextCallbackFunction) (void *arg);

typedef struct MemoryContextCallback
{
 MemoryContextCallbackFunction func;
 void *arg;
 struct MemoryContextCallback *next;
} MemoryContextCallback;






extern MemoryContext CurrentMemoryContext;
# 71 "/usr/include/postgresql/11/server/utils/palloc.h"
extern void *MemoryContextAlloc(MemoryContext context, Size size);
extern void *MemoryContextAllocZero(MemoryContext context, Size size);
extern void *MemoryContextAllocZeroAligned(MemoryContext context, Size size);
extern void *MemoryContextAllocExtended(MemoryContext context,
         Size size, int flags);

extern void *palloc(Size size);
extern void *palloc0(Size size);
extern void *palloc_extended(Size size, int flags);
extern void *repalloc(void *pointer, Size size);
extern void pfree(void *pointer);
# 119 "/usr/include/postgresql/11/server/utils/palloc.h"
extern void *MemoryContextAllocHuge(MemoryContext context, Size size);
extern void *repalloc_huge(void *pointer, Size size);
# 130 "/usr/include/postgresql/11/server/utils/palloc.h"
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
# 49 "/usr/include/postgresql/11/server/postgres.h" 2
# 67 "/usr/include/postgresql/11/server/postgres.h"
typedef struct varatt_external
{
 int32 va_rawsize;
 int32 va_extsize;
 Oid va_valueid;
 Oid va_toastrelid;
} varatt_external;
# 84 "/usr/include/postgresql/11/server/postgres.h"
typedef struct varatt_indirect
{
 struct varlena *pointer;
} varatt_indirect;
# 99 "/usr/include/postgresql/11/server/postgres.h"
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
# 138 "/usr/include/postgresql/11/server/postgres.h"
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
  uint32 va_rawsize;
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
# 367 "/usr/include/postgresql/11/server/postgres.h"
typedef uintptr_t Datum;
# 652 "/usr/include/postgresql/11/server/postgres.h"
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
# 676 "/usr/include/postgresql/11/server/postgres.h"
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
# 700 "/usr/include/postgresql/11/server/postgres.h"
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
# 725 "/usr/include/postgresql/11/server/postgres.h"
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
# 25 "src/backend/utils/adt/agtype_ops.c" 2

# 1 "/usr/include/math.h" 1 3 4
# 27 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/math.h" 2 3 4












# 1 "/usr/include/aarch64-linux-gnu/bits/math-vector.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/math-vector.h" 2 3 4
# 41 "/usr/include/math.h" 2 3 4
# 152 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/flt-eval-method.h" 1 3 4
# 153 "/usr/include/math.h" 2 3 4
# 163 "/usr/include/math.h" 3 4

# 163 "/usr/include/math.h" 3 4
typedef float float_t;
typedef double double_t;
# 204 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/fp-logb.h" 1 3 4
# 205 "/usr/include/math.h" 2 3 4
# 247 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/fp-fast.h" 1 3 4
# 248 "/usr/include/math.h" 2 3 4



enum
  {
    FP_INT_UPWARD =

      0,
    FP_INT_DOWNWARD =

      1,
    FP_INT_TOWARDZERO =

      2,
    FP_INT_TONEARESTFROMZERO =

      3,
    FP_INT_TONEAREST =

      4,
  };
# 312 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/aarch64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern int __issignaling (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
# 313 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
 extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));



 extern void sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                        ;




 extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));





 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



 extern double exp10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp10 (double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));






 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));



 extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




 extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
# 177 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));




extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 213 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));





 extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
 extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));




extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));







extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern double nextdown (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextdown (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double nextup (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextup (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long int llogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




extern double roundeven (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __roundeven (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern __intmax_t fromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                            ;



extern __uintmax_t ufromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                              ;




extern __intmax_t fromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                             ;




extern __uintmax_t ufromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                               ;


extern int canonicalize (double *__cx, const double *__x) __attribute__ ((__nothrow__ , __leaf__));






extern double fmaxmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaxmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fminmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double fmaximum (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaximum (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fminimum (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminimum (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmaximum_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaximum_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fminimum_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminimum_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmaximum_mag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaximum_mag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fminimum_mag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminimum_mag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmaximum_mag_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaximum_mag_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fminimum_mag_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminimum_mag_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int totalorder (const double *__x, const double *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern int totalordermag (const double *__x, const double *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern double getpayload (const double *__x) __attribute__ ((__nothrow__ , __leaf__)); extern double __getpayload (const double *__x) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayload (double *__x, double __payload) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadsig (double *__x, double __payload) __attribute__ ((__nothrow__ , __leaf__));







extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 314 "/usr/include/math.h" 2 3 4
# 329 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/aarch64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern int __issignalingf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
# 330 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
 extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




 extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));



 extern void sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                        ;




 extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));





 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



 extern float exp10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp10f (float __x) __attribute__ ((__nothrow__ , __leaf__));




 extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




 extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));






 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));



 extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




 extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
# 177 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));




extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 213 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));





 extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
 extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));




extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));







extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern float nextdownf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextdownf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float nextupf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextupf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern long int llogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




extern float roundevenf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundevenf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern __intmax_t fromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                            ;



extern __uintmax_t ufromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                              ;




extern __intmax_t fromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                             ;




extern __uintmax_t ufromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                               ;


extern int canonicalizef (float *__cx, const float *__x) __attribute__ ((__nothrow__ , __leaf__));






extern float fmaxmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float fmaximumf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaximumf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminimumf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminimumf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmaximum_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaximum_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminimum_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminimum_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmaximum_magf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaximum_magf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminimum_magf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminimum_magf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmaximum_mag_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaximum_mag_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminimum_mag_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminimum_mag_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int totalorderf (const float *__x, const float *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern int totalordermagf (const float *__x, const float *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern float getpayloadf (const float *__x) __attribute__ ((__nothrow__ , __leaf__)); extern float __getpayloadf (const float *__x) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadf (float *__x, float __payload) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadsigf (float *__x, float __payload) __attribute__ ((__nothrow__ , __leaf__));







extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 331 "/usr/include/math.h" 2 3 4
# 398 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/aarch64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
# 399 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
 extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                        ;




 extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



 extern long double exp10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));






 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



 extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




 extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
# 177 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));




extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 213 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));





 extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
 extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));




extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));







extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern long double nextdownl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextdownl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double nextupl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextupl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long int llogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




extern long double roundevenl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundevenl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern __intmax_t fromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                            ;



extern __uintmax_t ufromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                              ;




extern __intmax_t fromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                             ;




extern __uintmax_t ufromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                               ;


extern int canonicalizel (long double *__cx, const long double *__x) __attribute__ ((__nothrow__ , __leaf__));






extern long double fmaxmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double fmaximuml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaximuml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminimuml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminimuml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmaximum_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaximum_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminimum_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminimum_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmaximum_magl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaximum_magl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminimum_magl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminimum_magl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmaximum_mag_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaximum_mag_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminimum_mag_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminimum_mag_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int totalorderl (const long double *__x, const long double *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern int totalordermagl (const long double *__x, const long double *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern long double getpayloadl (const long double *__x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __getpayloadl (const long double *__x) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadl (long double *__x, long double __payload) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadsigl (long double *__x, long double __payload) __attribute__ ((__nothrow__ , __leaf__));







extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 400 "/usr/include/math.h" 2 3 4
# 450 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
 extern _Float32 acosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __acosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32 asinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __asinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32 atanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __atanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32 atan2f32 (_Float32 __y, _Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __atan2f32 (_Float32 __y, _Float32 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32 cosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __cosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32 sinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __sinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32 tanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __tanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float32 coshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __coshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32 sinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __sinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32 tanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __tanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));



 extern void sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                        ;




 extern _Float32 acoshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __acoshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32 asinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __asinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32 atanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __atanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float32 expf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __expf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 frexpf32 (_Float32 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __frexpf32 (_Float32 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 ldexpf32 (_Float32 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __ldexpf32 (_Float32 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32 logf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __logf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32 log10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __log10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 modff32 (_Float32 __x, _Float32 *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __modff32 (_Float32 __x, _Float32 *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



 extern _Float32 exp10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __exp10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float32 expm1f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __expm1f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32 log1pf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __log1pf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 logbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __logbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float32 exp2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __exp2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32 log2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __log2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));






 extern _Float32 powf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __powf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 sqrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __sqrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));



 extern _Float32 hypotf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __hypotf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float32 cbrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __cbrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float32 ceilf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __ceilf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fabsf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fabsf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 floorf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __floorf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fmodf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __fmodf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
# 198 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 copysignf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __copysignf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float32 nanf32 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nanf32 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 220 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 j0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __j0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 j1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __j1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 jnf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __jnf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 y0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __y0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 y1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __y1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 ynf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __ynf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float32 erff32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __erff32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 erfcf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __erfcf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 lgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __lgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));




extern _Float32 tgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __tgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
# 252 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 lgammaf32_r (_Float32, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __lgammaf32_r (_Float32, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern _Float32 rintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __rintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 nextafterf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nextafterf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));






extern _Float32 nextdownf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nextdownf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));

extern _Float32 nextupf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nextupf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32 remainderf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __remainderf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32 scalbnf32 (_Float32 __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __scalbnf32 (_Float32 __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));




extern long int llogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));




extern _Float32 scalblnf32 (_Float32 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __scalblnf32 (_Float32 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32 nearbyintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nearbyintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32 roundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __roundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float32 truncf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __truncf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float32 remquof32 (_Float32 __x, _Float32 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __remquof32 (_Float32 __x, _Float32 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32 fdimf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __fdimf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32 fmaxf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaxf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fminf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float32 fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) __attribute__ ((__nothrow__ , __leaf__));




extern _Float32 roundevenf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __roundevenf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern __intmax_t fromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                            ;



extern __uintmax_t ufromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                              ;




extern __intmax_t fromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                             ;




extern __uintmax_t ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                               ;


extern int canonicalizef32 (_Float32 *__cx, const _Float32 *__x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float32 fmaxmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaxmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fminmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float32 fmaximumf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaximumf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fminimumf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminimumf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fmaximum_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaximum_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fminimum_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminimum_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fmaximum_magf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaximum_magf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fminimum_magf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminimum_magf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fmaximum_mag_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaximum_mag_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32 fminimum_mag_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminimum_mag_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int totalorderf32 (const _Float32 *__x, const _Float32 *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern int totalordermagf32 (const _Float32 *__x, const _Float32 *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern _Float32 getpayloadf32 (const _Float32 *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __getpayloadf32 (const _Float32 *__x) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadf32 (_Float32 *__x, _Float32 __payload) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadsigf32 (_Float32 *__x, _Float32 __payload) __attribute__ ((__nothrow__ , __leaf__));
# 451 "/usr/include/math.h" 2 3 4
# 467 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
 extern _Float64 acosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __acosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64 asinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __asinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64 atanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __atanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64 atan2f64 (_Float64 __y, _Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __atan2f64 (_Float64 __y, _Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64 cosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __cosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64 sinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __sinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64 tanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __tanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float64 coshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __coshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64 sinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __sinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64 tanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __tanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));



 extern void sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                        ;




 extern _Float64 acoshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __acoshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64 asinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __asinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64 atanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __atanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float64 expf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __expf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 frexpf64 (_Float64 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __frexpf64 (_Float64 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 ldexpf64 (_Float64 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __ldexpf64 (_Float64 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64 logf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __logf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64 log10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __log10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 modff64 (_Float64 __x, _Float64 *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __modff64 (_Float64 __x, _Float64 *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



 extern _Float64 exp10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __exp10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float64 expm1f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __expm1f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64 log1pf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __log1pf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 logbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __logbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float64 exp2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __exp2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64 log2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __log2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));






 extern _Float64 powf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __powf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 sqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __sqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));



 extern _Float64 hypotf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __hypotf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float64 cbrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __cbrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float64 ceilf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __ceilf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fabsf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fabsf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 floorf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __floorf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fmodf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __fmodf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
# 198 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 copysignf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __copysignf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float64 nanf64 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nanf64 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 220 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 j0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __j0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 j1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __j1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 jnf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __jnf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 y0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __y0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 y1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __y1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 ynf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __ynf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float64 erff64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __erff64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 erfcf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __erfcf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 lgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __lgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));




extern _Float64 tgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __tgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
# 252 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 lgammaf64_r (_Float64, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __lgammaf64_r (_Float64, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern _Float64 rintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __rintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 nextafterf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nextafterf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));






extern _Float64 nextdownf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nextdownf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));

extern _Float64 nextupf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nextupf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64 remainderf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __remainderf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64 scalbnf64 (_Float64 __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __scalbnf64 (_Float64 __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));




extern long int llogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));




extern _Float64 scalblnf64 (_Float64 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __scalblnf64 (_Float64 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64 nearbyintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nearbyintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64 roundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __roundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float64 truncf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __truncf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float64 remquof64 (_Float64 __x, _Float64 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __remquof64 (_Float64 __x, _Float64 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64 fdimf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __fdimf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64 fmaxf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaxf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fminf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float64 fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__));




extern _Float64 roundevenf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __roundevenf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern __intmax_t fromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                            ;



extern __uintmax_t ufromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                              ;




extern __intmax_t fromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                             ;




extern __uintmax_t ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                               ;


extern int canonicalizef64 (_Float64 *__cx, const _Float64 *__x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float64 fmaxmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaxmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fminmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float64 fmaximumf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaximumf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fminimumf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminimumf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fmaximum_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaximum_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fminimum_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminimum_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fmaximum_magf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaximum_magf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fminimum_magf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminimum_magf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fmaximum_mag_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaximum_mag_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64 fminimum_mag_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminimum_mag_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int totalorderf64 (const _Float64 *__x, const _Float64 *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern int totalordermagf64 (const _Float64 *__x, const _Float64 *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern _Float64 getpayloadf64 (const _Float64 *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __getpayloadf64 (const _Float64 *__x) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadf64 (_Float64 *__x, _Float64 __payload) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadsigf64 (_Float64 *__x, _Float64 __payload) __attribute__ ((__nothrow__ , __leaf__));
# 468 "/usr/include/math.h" 2 3 4
# 484 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
 extern _Float128 acosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __acosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float128 asinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __asinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float128 atanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __atanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float128 atan2f128 (_Float128 __y, _Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __atan2f128 (_Float128 __y, _Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float128 cosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __cosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float128 sinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __sinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float128 tanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __tanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float128 coshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __coshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float128 sinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __sinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float128 tanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __tanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));



 extern void sincosf128 (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf128 (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                        ;




 extern _Float128 acoshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __acoshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float128 asinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __asinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float128 atanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __atanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float128 expf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __expf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float128 frexpf128 (_Float128 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __frexpf128 (_Float128 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern _Float128 ldexpf128 (_Float128 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __ldexpf128 (_Float128 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float128 logf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __logf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float128 log10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __log10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float128 modff128 (_Float128 __x, _Float128 *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __modff128 (_Float128 __x, _Float128 *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



 extern _Float128 exp10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __exp10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float128 expm1f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __expm1f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float128 log1pf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __log1pf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float128 logbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __logbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float128 exp2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __exp2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float128 log2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __log2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));






 extern _Float128 powf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __powf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float128 sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));



 extern _Float128 hypotf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __hypotf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float128 cbrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __cbrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float128 ceilf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __ceilf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fabsf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fabsf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 floorf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __floorf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fmodf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __fmodf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
# 198 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float128 copysignf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __copysignf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float128 nanf128 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nanf128 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 220 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float128 j0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __j0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 j1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __j1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 jnf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __jnf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 y0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __y0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 y1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __y1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 ynf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __ynf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float128 erff128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __erff128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 erfcf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __erfcf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 lgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __lgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));




extern _Float128 tgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __tgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
# 252 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float128 lgammaf128_r (_Float128, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __lgammaf128_r (_Float128, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern _Float128 rintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __rintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float128 nextafterf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nextafterf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));






extern _Float128 nextdownf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nextdownf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));

extern _Float128 nextupf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nextupf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float128 remainderf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __remainderf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float128 scalbnf128 (_Float128 __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __scalbnf128 (_Float128 __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));




extern long int llogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));




extern _Float128 scalblnf128 (_Float128 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __scalblnf128 (_Float128 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern _Float128 nearbyintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nearbyintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float128 roundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __roundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float128 truncf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __truncf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float128 remquof128 (_Float128 __x, _Float128 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __remquof128 (_Float128 __x, _Float128 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float128 fdimf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __fdimf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float128 fmaxf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaxf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fminf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float128 fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));




extern _Float128 roundevenf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __roundevenf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern __intmax_t fromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                            ;



extern __uintmax_t ufromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                              ;




extern __intmax_t fromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                             ;




extern __uintmax_t ufromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                               ;


extern int canonicalizef128 (_Float128 *__cx, const _Float128 *__x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float128 fmaxmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaxmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fminmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float128 fmaximumf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaximumf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fminimumf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminimumf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fmaximum_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaximum_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fminimum_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminimum_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fmaximum_magf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaximum_magf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fminimum_magf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminimum_magf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fmaximum_mag_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaximum_mag_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float128 fminimum_mag_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminimum_mag_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int totalorderf128 (const _Float128 *__x, const _Float128 *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern int totalordermagf128 (const _Float128 *__x, const _Float128 *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern _Float128 getpayloadf128 (const _Float128 *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __getpayloadf128 (const _Float128 *__x) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadf128 (_Float128 *__x, _Float128 __payload) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadsigf128 (_Float128 *__x, _Float128 __payload) __attribute__ ((__nothrow__ , __leaf__));
# 485 "/usr/include/math.h" 2 3 4
# 501 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
 extern _Float32x acosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __acosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32x asinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __asinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32x atanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __atanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32x atan2f32x (_Float32x __y, _Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __atan2f32x (_Float32x __y, _Float32x __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32x cosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __cosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32x sinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __sinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32x tanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __tanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float32x coshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __coshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32x sinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __sinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32x tanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __tanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));



 extern void sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                        ;




 extern _Float32x acoshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __acoshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32x asinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __asinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float32x atanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __atanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float32x expf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __expf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x frexpf32x (_Float32x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __frexpf32x (_Float32x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x ldexpf32x (_Float32x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __ldexpf32x (_Float32x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32x logf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __logf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32x log10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __log10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x modff32x (_Float32x __x, _Float32x *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __modff32x (_Float32x __x, _Float32x *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



 extern _Float32x exp10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __exp10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float32x expm1f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __expm1f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32x log1pf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __log1pf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x logbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __logbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float32x exp2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __exp2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float32x log2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __log2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));






 extern _Float32x powf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __powf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x sqrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __sqrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));



 extern _Float32x hypotf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __hypotf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float32x cbrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __cbrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float32x ceilf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __ceilf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fabsf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fabsf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x floorf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __floorf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fmodf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __fmodf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
# 198 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x copysignf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __copysignf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float32x nanf32x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nanf32x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 220 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x j0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __j0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x j1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __j1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x jnf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __jnf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x y0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __y0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x y1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __y1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x ynf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __ynf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float32x erff32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __erff32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x erfcf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __erfcf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x lgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __lgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));




extern _Float32x tgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __tgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
# 252 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x lgammaf32x_r (_Float32x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __lgammaf32x_r (_Float32x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern _Float32x rintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __rintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x nextafterf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nextafterf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));






extern _Float32x nextdownf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nextdownf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));

extern _Float32x nextupf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nextupf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32x remainderf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __remainderf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32x scalbnf32x (_Float32x __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __scalbnf32x (_Float32x __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));




extern long int llogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));




extern _Float32x scalblnf32x (_Float32x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __scalblnf32x (_Float32x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32x nearbyintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nearbyintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32x roundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __roundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float32x truncf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __truncf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float32x remquof32x (_Float32x __x, _Float32x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __remquof32x (_Float32x __x, _Float32x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32x fdimf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __fdimf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float32x fmaxf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaxf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fminf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float32x fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) __attribute__ ((__nothrow__ , __leaf__));




extern _Float32x roundevenf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __roundevenf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern __intmax_t fromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                            ;



extern __uintmax_t ufromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                              ;




extern __intmax_t fromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                             ;




extern __uintmax_t ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                               ;


extern int canonicalizef32x (_Float32x *__cx, const _Float32x *__x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float32x fmaxmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaxmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fminmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float32x fmaximumf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaximumf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fminimumf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminimumf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fmaximum_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaximum_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fminimum_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminimum_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fmaximum_magf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaximum_magf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fminimum_magf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminimum_magf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fmaximum_mag_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaximum_mag_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float32x fminimum_mag_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminimum_mag_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int totalorderf32x (const _Float32x *__x, const _Float32x *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern int totalordermagf32x (const _Float32x *__x, const _Float32x *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern _Float32x getpayloadf32x (const _Float32x *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __getpayloadf32x (const _Float32x *__x) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadf32x (_Float32x *__x, _Float32x __payload) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadsigf32x (_Float32x *__x, _Float32x __payload) __attribute__ ((__nothrow__ , __leaf__));
# 502 "/usr/include/math.h" 2 3 4
# 518 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
 extern _Float64x acosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __acosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64x asinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __asinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64x atanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __atanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64x atan2f64x (_Float64x __y, _Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __atan2f64x (_Float64x __y, _Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64x cosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __cosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64x sinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __sinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64x tanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __tanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float64x coshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __coshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64x sinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __sinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64x tanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __tanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));



 extern void sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                        ;




 extern _Float64x acoshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __acoshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64x asinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __asinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

 extern _Float64x atanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __atanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float64x expf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __expf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x frexpf64x (_Float64x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __frexpf64x (_Float64x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x ldexpf64x (_Float64x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __ldexpf64x (_Float64x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64x logf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __logf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64x log10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __log10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x modff64x (_Float64x __x, _Float64x *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __modff64x (_Float64x __x, _Float64x *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



 extern _Float64x exp10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __exp10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float64x expm1f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __expm1f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64x log1pf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __log1pf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x logbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __logbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float64x exp2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __exp2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


 extern _Float64x log2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __log2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));






 extern _Float64x powf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __powf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));



 extern _Float64x hypotf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __hypotf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));




 extern _Float64x cbrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __cbrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float64x ceilf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __ceilf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fabsf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fabsf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x floorf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __floorf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fmodf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __fmodf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
# 198 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x copysignf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __copysignf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float64x nanf64x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nanf64x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 220 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x j0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __j0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x j1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __j1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x jnf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __jnf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x y0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __y0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x y1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __y1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x ynf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __ynf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__));





 extern _Float64x erff64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __erff64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x erfcf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __erfcf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x lgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __lgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));




extern _Float64x tgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __tgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
# 252 "/usr/include/aarch64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x lgammaf64x_r (_Float64x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __lgammaf64x_r (_Float64x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern _Float64x rintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __rintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x nextafterf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nextafterf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));






extern _Float64x nextdownf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nextdownf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));

extern _Float64x nextupf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nextupf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64x remainderf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __remainderf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64x scalbnf64x (_Float64x __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __scalbnf64x (_Float64x __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));




extern long int llogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));




extern _Float64x scalblnf64x (_Float64x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __scalblnf64x (_Float64x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64x nearbyintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nearbyintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64x roundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __roundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float64x truncf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __truncf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float64x remquof64x (_Float64x __x, _Float64x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __remquof64x (_Float64x __x, _Float64x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64x fdimf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __fdimf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));



extern _Float64x fmaxf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaxf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fminf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern _Float64x fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__));




extern _Float64x roundevenf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __roundevenf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern __intmax_t fromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                            ;



extern __uintmax_t ufromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                              ;




extern __intmax_t fromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                             ;




extern __uintmax_t ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__))
                               ;


extern int canonicalizef64x (_Float64x *__cx, const _Float64x *__x) __attribute__ ((__nothrow__ , __leaf__));






extern _Float64x fmaxmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaxmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fminmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern _Float64x fmaximumf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaximumf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fminimumf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminimumf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fmaximum_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaximum_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fminimum_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminimum_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fmaximum_magf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaximum_magf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fminimum_magf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminimum_magf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fmaximum_mag_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaximum_mag_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern _Float64x fminimum_mag_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminimum_mag_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int totalorderf64x (const _Float64x *__x, const _Float64x *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern int totalordermagf64x (const _Float64x *__x, const _Float64x *__y) __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__pure__));


extern _Float64x getpayloadf64x (const _Float64x *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __getpayloadf64x (const _Float64x *__x) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadf64x (_Float64x *__x, _Float64x __payload) __attribute__ ((__nothrow__ , __leaf__));


extern int setpayloadsigf64x (_Float64x *__x, _Float64x __payload) __attribute__ ((__nothrow__ , __leaf__));
# 519 "/usr/include/math.h" 2 3 4
# 566 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern float fadd (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fdiv (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern float ffma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));


extern float fmul (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fsqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern float fsub (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
# 567 "/usr/include/math.h" 2 3 4
# 587 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern float faddl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fdivl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern float ffmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));


extern float fmull (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fsqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern float fsubl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
# 588 "/usr/include/math.h" 2 3 4
# 616 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern double daddl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double ddivl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double dfmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));


extern double dmull (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double dsqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double dsubl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
# 617 "/usr/include/math.h" 2 3 4
# 697 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32divf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32mulf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32sqrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32subf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
# 698 "/usr/include/math.h" 2 3 4
# 707 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32divf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32mulf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32sqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32subf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
# 708 "/usr/include/math.h" 2 3 4
# 717 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32divf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32mulf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32subf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
# 718 "/usr/include/math.h" 2 3 4
# 727 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32divf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32mulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32 f32subf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
# 728 "/usr/include/math.h" 2 3 4
# 747 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32x f32xaddf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xdivf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xfmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xmulf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xsqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xsubf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
# 748 "/usr/include/math.h" 2 3 4
# 757 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32x f32xaddf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xdivf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xfmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xmulf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xsqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xsubf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
# 758 "/usr/include/math.h" 2 3 4
# 767 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32x f32xaddf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xdivf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xfmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xmulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xsqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float32x f32xsubf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
# 768 "/usr/include/math.h" 2 3 4
# 787 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float64 f64addf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64divf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64mulf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64subf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
# 788 "/usr/include/math.h" 2 3 4
# 797 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float64 f64addf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64divf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64mulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64 f64subf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
# 798 "/usr/include/math.h" 2 3 4
# 817 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float64x f64xaddf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x f64xdivf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x f64xfmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x f64xmulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x f64xsqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));


extern _Float64x f64xsubf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
# 818 "/usr/include/math.h" 2 3 4
# 854 "/usr/include/math.h" 3 4
extern int signgam;
# 934 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 1054 "/usr/include/math.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/iscanonical.h" 1 3 4
# 1055 "/usr/include/math.h" 2 3 4
# 1423 "/usr/include/math.h" 3 4

# 27 "src/backend/utils/adt/agtype_ops.c" 2

# 1 "/usr/include/postgresql/11/server/catalog/pg_type_d.h" 1
# 29 "src/backend/utils/adt/agtype_ops.c" 2
# 1 "/usr/include/postgresql/11/server/fmgr.h" 1
# 22 "/usr/include/postgresql/11/server/fmgr.h"

# 22 "/usr/include/postgresql/11/server/fmgr.h"
typedef struct Node *fmNodePtr;
typedef struct Aggref *fmAggrefPtr;


typedef void (*fmExprContextCallbackFunction) (Datum arg);


typedef struct StringInfoData *fmStringInfo;
# 38 "/usr/include/postgresql/11/server/fmgr.h"
typedef struct FunctionCallInfoData *FunctionCallInfo;

typedef Datum (*PGFunction) (FunctionCallInfo fcinfo);
# 56 "/usr/include/postgresql/11/server/fmgr.h"
typedef struct FmgrInfo
{
 PGFunction fn_addr;
 Oid fn_oid;
 short fn_nargs;
 
# 61 "/usr/include/postgresql/11/server/fmgr.h" 3 4
_Bool 
# 61 "/usr/include/postgresql/11/server/fmgr.h"
      fn_strict;
 
# 62 "/usr/include/postgresql/11/server/fmgr.h" 3 4
_Bool 
# 62 "/usr/include/postgresql/11/server/fmgr.h"
      fn_retset;
 unsigned char fn_stats;
 void *fn_extra;
 MemoryContext fn_mcxt;
 fmNodePtr fn_expr;
} FmgrInfo;
# 77 "/usr/include/postgresql/11/server/fmgr.h"
typedef struct FunctionCallInfoData
{
 FmgrInfo *flinfo;
 fmNodePtr context;
 fmNodePtr resultinfo;
 Oid fncollation;

 
# 84 "/usr/include/postgresql/11/server/fmgr.h" 3 4
_Bool 
# 84 "/usr/include/postgresql/11/server/fmgr.h"
      isnull;
 short nargs;

 Datum arg[100];

 
# 89 "/usr/include/postgresql/11/server/fmgr.h" 3 4
_Bool 
# 89 "/usr/include/postgresql/11/server/fmgr.h"
      argnull[100];
} FunctionCallInfoData;





extern void fmgr_info(Oid functionId, FmgrInfo *finfo);






extern void fmgr_info_cxt(Oid functionId, FmgrInfo *finfo,
     MemoryContext mcxt);
# 113 "/usr/include/postgresql/11/server/fmgr.h"
extern void fmgr_info_copy(FmgrInfo *dstinfo, FmgrInfo *srcinfo,
      MemoryContext destcxt);

extern void fmgr_symbol(Oid functionId, char **mod, char **fn);
# 209 "/usr/include/postgresql/11/server/fmgr.h"
extern struct varlena *pg_detoast_datum(struct varlena *datum);
extern struct varlena *pg_detoast_datum_copy(struct varlena *datum);
extern struct varlena *pg_detoast_datum_slice(struct varlena *datum,
        int32 first, int32 count);
extern struct varlena *pg_detoast_datum_packed(struct varlena *datum);
# 363 "/usr/include/postgresql/11/server/fmgr.h"
typedef struct
{
 int api_version;

} Pg_finfo_record;


typedef const Pg_finfo_record *(*PGFInfoFunction) (void);
# 422 "/usr/include/postgresql/11/server/fmgr.h"
typedef struct
{
 int len;
 int version;
 int funcmaxargs;
 int indexmaxkeys;
 int namedatalen;
 int float4byval;
 int float8byval;
} Pg_magic_struct;
# 449 "/usr/include/postgresql/11/server/fmgr.h"
typedef const Pg_magic_struct *(*PGModuleMagicFunction) (void);
# 474 "/usr/include/postgresql/11/server/fmgr.h"
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
# 513 "/usr/include/postgresql/11/server/fmgr.h"
extern Datum CallerFInfoFunctionCall1(PGFunction func, FmgrInfo *flinfo,
       Oid collation, Datum arg1);
extern Datum CallerFInfoFunctionCall2(PGFunction func, FmgrInfo *flinfo,
       Oid collation, Datum arg1, Datum arg2);





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
# 654 "/usr/include/postgresql/11/server/fmgr.h"
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
# 677 "/usr/include/postgresql/11/server/fmgr.h" 3 4
      _Bool 
# 677 "/usr/include/postgresql/11/server/fmgr.h"
           get_fn_expr_arg_stable(FmgrInfo *flinfo, int argnum);
extern 
# 678 "/usr/include/postgresql/11/server/fmgr.h" 3 4
      _Bool 
# 678 "/usr/include/postgresql/11/server/fmgr.h"
           get_call_expr_arg_stable(fmNodePtr expr, int argnum);
extern 
# 679 "/usr/include/postgresql/11/server/fmgr.h" 3 4
      _Bool 
# 679 "/usr/include/postgresql/11/server/fmgr.h"
           get_fn_expr_variadic(FmgrInfo *flinfo);
extern 
# 680 "/usr/include/postgresql/11/server/fmgr.h" 3 4
      _Bool 
# 680 "/usr/include/postgresql/11/server/fmgr.h"
           CheckFunctionValidatorAccess(Oid validatorOid, Oid functionOid);




extern char *Dynamic_library_path;

extern PGFunction load_external_function(const char *filename, const char *funcname,
        
# 688 "/usr/include/postgresql/11/server/fmgr.h" 3 4
       _Bool 
# 688 "/usr/include/postgresql/11/server/fmgr.h"
            signalNotFound, void **filehandle);
extern PGFunction lookup_external_function(void *filehandle, const char *funcname);
extern void load_file(const char *filename, 
# 690 "/usr/include/postgresql/11/server/fmgr.h" 3 4
                                           _Bool 
# 690 "/usr/include/postgresql/11/server/fmgr.h"
                                                restricted);
extern void **find_rendezvous_variable(const char *varName);
extern Size EstimateLibraryStateSpace(void);
extern void SerializeLibraryState(Size maxsize, char *start_address);
extern void RestoreLibraryState(char *start_address);
# 707 "/usr/include/postgresql/11/server/fmgr.h"
extern int AggCheckCallContext(FunctionCallInfo fcinfo,
     MemoryContext *aggcontext);
extern fmAggrefPtr AggGetAggref(FunctionCallInfo fcinfo);
extern MemoryContext AggGetTempMemoryContext(FunctionCallInfo fcinfo);
extern 
# 711 "/usr/include/postgresql/11/server/fmgr.h" 3 4
      _Bool 
# 711 "/usr/include/postgresql/11/server/fmgr.h"
           AggStateIsShared(FunctionCallInfo fcinfo);
extern void AggRegisterCallback(FunctionCallInfo fcinfo,
     fmExprContextCallbackFunction func,
     Datum arg);
# 725 "/usr/include/postgresql/11/server/fmgr.h"
typedef enum FmgrHookEventType
{
 FHET_START,
 FHET_END,
 FHET_ABORT
} FmgrHookEventType;

typedef 
# 732 "/usr/include/postgresql/11/server/fmgr.h" 3 4
       _Bool 
# 732 "/usr/include/postgresql/11/server/fmgr.h"
            (*needs_fmgr_hook_type) (Oid fn_oid);

typedef void (*fmgr_hook_type) (FmgrHookEventType event,
        FmgrInfo *flinfo, Datum *arg);

extern needs_fmgr_hook_type needs_fmgr_hook;
extern fmgr_hook_type fmgr_hook;
# 30 "src/backend/utils/adt/agtype_ops.c" 2
# 1 "/usr/include/postgresql/11/server/utils/builtins.h" 1
# 18 "/usr/include/postgresql/11/server/utils/builtins.h"
# 1 "/usr/include/postgresql/11/server/nodes/nodes.h" 1
# 26 "/usr/include/postgresql/11/server/nodes/nodes.h"
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
 T_Sort,
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
 T_SortState,
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
 T_ArrayRef,
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
# 209 "/usr/include/postgresql/11/server/nodes/nodes.h"
 T_ExprState,
 T_AggrefExprState,
 T_WindowFuncExprState,
 T_SetExprState,
 T_SubPlanState,
 T_AlternativeSubPlanState,
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
 T_SubqueryScanPath,
 T_ForeignPath,
 T_CustomPath,
 T_NestPath,
 T_MergePath,
 T_HashPath,
 T_AppendPath,
 T_MergeAppendPath,
 T_ResultPath,
 T_MaterialPath,
 T_UniquePath,
 T_GatherPath,
 T_GatherMergePath,
 T_ProjectionPath,
 T_ProjectSetPath,
 T_SortPath,
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
 T_PlaceHolderVar,
 T_SpecialJoinInfo,
 T_AppendRelInfo,
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
# 498 "/usr/include/postgresql/11/server/nodes/nodes.h"
 T_TriggerData,
 T_EventTriggerData,
 T_ReturnSetInfo,
 T_WindowObjectData,
 T_TIDBitmap,
 T_InlineCodeBlock,
 T_FdwRoutine,
 T_IndexAmRoutine,
 T_TsmRoutine,
 T_ForeignKeyCacheInfo,
 T_CallContext
} NodeTag;







typedef struct Node
{
 NodeTag type;
} Node;
# 598 "/usr/include/postgresql/11/server/nodes/nodes.h"
struct Bitmapset;
struct StringInfoData;

extern void outNode(struct StringInfoData *str, const void *obj);
extern void outToken(struct StringInfoData *str, const char *s);
extern void outBitmapset(struct StringInfoData *str,
    const struct Bitmapset *bms);
extern void outDatum(struct StringInfoData *str, uintptr_t value,
   int typlen, 
# 606 "/usr/include/postgresql/11/server/nodes/nodes.h" 3 4
              _Bool 
# 606 "/usr/include/postgresql/11/server/nodes/nodes.h"
                   typbyval);
extern char *nodeToString(const void *obj);
extern char *bmsToString(const struct Bitmapset *bms);




extern void *stringToNode(char *str);
extern struct Bitmapset *readBitmapset(void);
extern uintptr_t readDatum(
# 615 "/usr/include/postgresql/11/server/nodes/nodes.h" 3 4
                          _Bool 
# 615 "/usr/include/postgresql/11/server/nodes/nodes.h"
                               typbyval);
extern 
# 616 "/usr/include/postgresql/11/server/nodes/nodes.h" 3 4
      _Bool 
# 616 "/usr/include/postgresql/11/server/nodes/nodes.h"
           *readBoolCols(int numCols);
extern int *readIntCols(int numCols);
extern Oid *readOidCols(int numCols);
extern int16 *readAttrNumberCols(int numCols);




extern void *copyObjectImpl(const void *obj);
# 636 "/usr/include/postgresql/11/server/nodes/nodes.h"
extern 
# 636 "/usr/include/postgresql/11/server/nodes/nodes.h" 3 4
      _Bool 
# 636 "/usr/include/postgresql/11/server/nodes/nodes.h"
           equal(const void *a, const void *b);
# 647 "/usr/include/postgresql/11/server/nodes/nodes.h"
typedef double Selectivity;
typedef double Cost;
# 657 "/usr/include/postgresql/11/server/nodes/nodes.h"
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
# 681 "/usr/include/postgresql/11/server/nodes/nodes.h"
typedef enum JoinType
{




 JOIN_INNER,
 JOIN_LEFT,
 JOIN_FULL,
 JOIN_RIGHT,
# 701 "/usr/include/postgresql/11/server/nodes/nodes.h"
 JOIN_SEMI,
 JOIN_ANTI,





 JOIN_UNIQUE_OUTER,
 JOIN_UNIQUE_INNER




} JoinType;
# 743 "/usr/include/postgresql/11/server/nodes/nodes.h"
typedef enum AggStrategy
{
 AGG_PLAIN,
 AGG_SORTED,
 AGG_HASHED,
 AGG_MIXED
} AggStrategy;
# 765 "/usr/include/postgresql/11/server/nodes/nodes.h"
typedef enum AggSplit
{

 AGGSPLIT_SIMPLE = 0,

 AGGSPLIT_INITIAL_SERIAL = 0x02 | 0x04,

 AGGSPLIT_FINAL_DESERIAL = 0x01 | 0x08
} AggSplit;
# 787 "/usr/include/postgresql/11/server/nodes/nodes.h"
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
# 19 "/usr/include/postgresql/11/server/utils/builtins.h" 2
# 1 "/usr/include/postgresql/11/server/utils/fmgrprotos.h" 1
# 24 "/usr/include/postgresql/11/server/utils/fmgrprotos.h"
extern Datum byteaout(FunctionCallInfo fcinfo);
extern Datum charout(FunctionCallInfo fcinfo);
extern Datum namein(FunctionCallInfo fcinfo);
extern Datum nameout(FunctionCallInfo fcinfo);
extern Datum int2in(FunctionCallInfo fcinfo);
extern Datum int2out(FunctionCallInfo fcinfo);
extern Datum int2vectorin(FunctionCallInfo fcinfo);
extern Datum int2vectorout(FunctionCallInfo fcinfo);
extern Datum int4in(FunctionCallInfo fcinfo);
extern Datum int4out(FunctionCallInfo fcinfo);
extern Datum regprocin(FunctionCallInfo fcinfo);
extern Datum regprocout(FunctionCallInfo fcinfo);
extern Datum textin(FunctionCallInfo fcinfo);
extern Datum textout(FunctionCallInfo fcinfo);
extern Datum tidin(FunctionCallInfo fcinfo);
extern Datum tidout(FunctionCallInfo fcinfo);
extern Datum xidin(FunctionCallInfo fcinfo);
extern Datum xidout(FunctionCallInfo fcinfo);
extern Datum cidin(FunctionCallInfo fcinfo);
extern Datum cidout(FunctionCallInfo fcinfo);
extern Datum oidvectorin(FunctionCallInfo fcinfo);
extern Datum oidvectorout(FunctionCallInfo fcinfo);
extern Datum boollt(FunctionCallInfo fcinfo);
extern Datum boolgt(FunctionCallInfo fcinfo);
extern Datum booleq(FunctionCallInfo fcinfo);
extern Datum chareq(FunctionCallInfo fcinfo);
extern Datum nameeq(FunctionCallInfo fcinfo);
extern Datum int2eq(FunctionCallInfo fcinfo);
extern Datum int2lt(FunctionCallInfo fcinfo);
extern Datum int4eq(FunctionCallInfo fcinfo);
extern Datum int4lt(FunctionCallInfo fcinfo);
extern Datum texteq(FunctionCallInfo fcinfo);
extern Datum xideq(FunctionCallInfo fcinfo);
extern Datum cideq(FunctionCallInfo fcinfo);
extern Datum charne(FunctionCallInfo fcinfo);
extern Datum charle(FunctionCallInfo fcinfo);
extern Datum chargt(FunctionCallInfo fcinfo);
extern Datum charge(FunctionCallInfo fcinfo);
extern Datum chartoi4(FunctionCallInfo fcinfo);
extern Datum i4tochar(FunctionCallInfo fcinfo);
extern Datum nameregexeq(FunctionCallInfo fcinfo);
extern Datum boolne(FunctionCallInfo fcinfo);
extern Datum pg_ddl_command_in(FunctionCallInfo fcinfo);
extern Datum pg_ddl_command_out(FunctionCallInfo fcinfo);
extern Datum pg_ddl_command_recv(FunctionCallInfo fcinfo);
extern Datum pgsql_version(FunctionCallInfo fcinfo);
extern Datum pg_ddl_command_send(FunctionCallInfo fcinfo);
extern Datum eqsel(FunctionCallInfo fcinfo);
extern Datum neqsel(FunctionCallInfo fcinfo);
extern Datum scalarltsel(FunctionCallInfo fcinfo);
extern Datum scalargtsel(FunctionCallInfo fcinfo);
extern Datum eqjoinsel(FunctionCallInfo fcinfo);
extern Datum neqjoinsel(FunctionCallInfo fcinfo);
extern Datum scalarltjoinsel(FunctionCallInfo fcinfo);
extern Datum scalargtjoinsel(FunctionCallInfo fcinfo);
extern Datum unknownin(FunctionCallInfo fcinfo);
extern Datum unknownout(FunctionCallInfo fcinfo);
extern Datum numeric_fac(FunctionCallInfo fcinfo);
extern Datum box_above_eq(FunctionCallInfo fcinfo);
extern Datum box_below_eq(FunctionCallInfo fcinfo);
extern Datum point_in(FunctionCallInfo fcinfo);
extern Datum point_out(FunctionCallInfo fcinfo);
extern Datum lseg_in(FunctionCallInfo fcinfo);
extern Datum lseg_out(FunctionCallInfo fcinfo);
extern Datum path_in(FunctionCallInfo fcinfo);
extern Datum path_out(FunctionCallInfo fcinfo);
extern Datum box_in(FunctionCallInfo fcinfo);
extern Datum box_out(FunctionCallInfo fcinfo);
extern Datum box_overlap(FunctionCallInfo fcinfo);
extern Datum box_ge(FunctionCallInfo fcinfo);
extern Datum box_gt(FunctionCallInfo fcinfo);
extern Datum box_eq(FunctionCallInfo fcinfo);
extern Datum box_lt(FunctionCallInfo fcinfo);
extern Datum box_le(FunctionCallInfo fcinfo);
extern Datum point_above(FunctionCallInfo fcinfo);
extern Datum point_left(FunctionCallInfo fcinfo);
extern Datum point_right(FunctionCallInfo fcinfo);
extern Datum point_below(FunctionCallInfo fcinfo);
extern Datum point_eq(FunctionCallInfo fcinfo);
extern Datum on_pb(FunctionCallInfo fcinfo);
extern Datum on_ppath(FunctionCallInfo fcinfo);
extern Datum box_center(FunctionCallInfo fcinfo);
extern Datum areasel(FunctionCallInfo fcinfo);
extern Datum areajoinsel(FunctionCallInfo fcinfo);
extern Datum int4mul(FunctionCallInfo fcinfo);
extern Datum int4ne(FunctionCallInfo fcinfo);
extern Datum int2ne(FunctionCallInfo fcinfo);
extern Datum int2gt(FunctionCallInfo fcinfo);
extern Datum int4gt(FunctionCallInfo fcinfo);
extern Datum int2le(FunctionCallInfo fcinfo);
extern Datum int4le(FunctionCallInfo fcinfo);
extern Datum int4ge(FunctionCallInfo fcinfo);
extern Datum int2ge(FunctionCallInfo fcinfo);
extern Datum int2mul(FunctionCallInfo fcinfo);
extern Datum int2div(FunctionCallInfo fcinfo);
extern Datum int4div(FunctionCallInfo fcinfo);
extern Datum int2mod(FunctionCallInfo fcinfo);
extern Datum int4mod(FunctionCallInfo fcinfo);
extern Datum textne(FunctionCallInfo fcinfo);
extern Datum int24eq(FunctionCallInfo fcinfo);
extern Datum int42eq(FunctionCallInfo fcinfo);
extern Datum int24lt(FunctionCallInfo fcinfo);
extern Datum int42lt(FunctionCallInfo fcinfo);
extern Datum int24gt(FunctionCallInfo fcinfo);
extern Datum int42gt(FunctionCallInfo fcinfo);
extern Datum int24ne(FunctionCallInfo fcinfo);
extern Datum int42ne(FunctionCallInfo fcinfo);
extern Datum int24le(FunctionCallInfo fcinfo);
extern Datum int42le(FunctionCallInfo fcinfo);
extern Datum int24ge(FunctionCallInfo fcinfo);
extern Datum int42ge(FunctionCallInfo fcinfo);
extern Datum int24mul(FunctionCallInfo fcinfo);
extern Datum int42mul(FunctionCallInfo fcinfo);
extern Datum int24div(FunctionCallInfo fcinfo);
extern Datum int42div(FunctionCallInfo fcinfo);
extern Datum int2pl(FunctionCallInfo fcinfo);
extern Datum int4pl(FunctionCallInfo fcinfo);
extern Datum int24pl(FunctionCallInfo fcinfo);
extern Datum int42pl(FunctionCallInfo fcinfo);
extern Datum int2mi(FunctionCallInfo fcinfo);
extern Datum int4mi(FunctionCallInfo fcinfo);
extern Datum int24mi(FunctionCallInfo fcinfo);
extern Datum int42mi(FunctionCallInfo fcinfo);
extern Datum oideq(FunctionCallInfo fcinfo);
extern Datum oidne(FunctionCallInfo fcinfo);
extern Datum box_same(FunctionCallInfo fcinfo);
extern Datum box_contain(FunctionCallInfo fcinfo);
extern Datum box_left(FunctionCallInfo fcinfo);
extern Datum box_overleft(FunctionCallInfo fcinfo);
extern Datum box_overright(FunctionCallInfo fcinfo);
extern Datum box_right(FunctionCallInfo fcinfo);
extern Datum box_contained(FunctionCallInfo fcinfo);
extern Datum box_contain_pt(FunctionCallInfo fcinfo);
extern Datum pg_node_tree_in(FunctionCallInfo fcinfo);
extern Datum pg_node_tree_out(FunctionCallInfo fcinfo);
extern Datum pg_node_tree_recv(FunctionCallInfo fcinfo);
extern Datum pg_node_tree_send(FunctionCallInfo fcinfo);
extern Datum float4in(FunctionCallInfo fcinfo);
extern Datum float4out(FunctionCallInfo fcinfo);
extern Datum float4mul(FunctionCallInfo fcinfo);
extern Datum float4div(FunctionCallInfo fcinfo);
extern Datum float4pl(FunctionCallInfo fcinfo);
extern Datum float4mi(FunctionCallInfo fcinfo);
extern Datum float4um(FunctionCallInfo fcinfo);
extern Datum float4abs(FunctionCallInfo fcinfo);
extern Datum float4_accum(FunctionCallInfo fcinfo);
extern Datum float4larger(FunctionCallInfo fcinfo);
extern Datum float4smaller(FunctionCallInfo fcinfo);
extern Datum int4um(FunctionCallInfo fcinfo);
extern Datum int2um(FunctionCallInfo fcinfo);
extern Datum float8in(FunctionCallInfo fcinfo);
extern Datum float8out(FunctionCallInfo fcinfo);
extern Datum float8mul(FunctionCallInfo fcinfo);
extern Datum float8div(FunctionCallInfo fcinfo);
extern Datum float8pl(FunctionCallInfo fcinfo);
extern Datum float8mi(FunctionCallInfo fcinfo);
extern Datum float8um(FunctionCallInfo fcinfo);
extern Datum float8abs(FunctionCallInfo fcinfo);
extern Datum float8_accum(FunctionCallInfo fcinfo);
extern Datum float8larger(FunctionCallInfo fcinfo);
extern Datum float8smaller(FunctionCallInfo fcinfo);
extern Datum lseg_center(FunctionCallInfo fcinfo);
extern Datum path_center(FunctionCallInfo fcinfo);
extern Datum poly_center(FunctionCallInfo fcinfo);
extern Datum dround(FunctionCallInfo fcinfo);
extern Datum dtrunc(FunctionCallInfo fcinfo);
extern Datum dsqrt(FunctionCallInfo fcinfo);
extern Datum dcbrt(FunctionCallInfo fcinfo);
extern Datum dpow(FunctionCallInfo fcinfo);
extern Datum dexp(FunctionCallInfo fcinfo);
extern Datum dlog1(FunctionCallInfo fcinfo);
extern Datum i2tod(FunctionCallInfo fcinfo);
extern Datum i2tof(FunctionCallInfo fcinfo);
extern Datum dtoi2(FunctionCallInfo fcinfo);
extern Datum ftoi2(FunctionCallInfo fcinfo);
extern Datum line_distance(FunctionCallInfo fcinfo);
extern Datum abstimein(FunctionCallInfo fcinfo);
extern Datum abstimeout(FunctionCallInfo fcinfo);
extern Datum reltimein(FunctionCallInfo fcinfo);
extern Datum reltimeout(FunctionCallInfo fcinfo);
extern Datum timepl(FunctionCallInfo fcinfo);
extern Datum timemi(FunctionCallInfo fcinfo);
extern Datum tintervalin(FunctionCallInfo fcinfo);
extern Datum tintervalout(FunctionCallInfo fcinfo);
extern Datum intinterval(FunctionCallInfo fcinfo);
extern Datum tintervalrel(FunctionCallInfo fcinfo);
extern Datum timenow(FunctionCallInfo fcinfo);
extern Datum abstimeeq(FunctionCallInfo fcinfo);
extern Datum abstimene(FunctionCallInfo fcinfo);
extern Datum abstimelt(FunctionCallInfo fcinfo);
extern Datum abstimegt(FunctionCallInfo fcinfo);
extern Datum abstimele(FunctionCallInfo fcinfo);
extern Datum abstimege(FunctionCallInfo fcinfo);
extern Datum reltimeeq(FunctionCallInfo fcinfo);
extern Datum reltimene(FunctionCallInfo fcinfo);
extern Datum reltimelt(FunctionCallInfo fcinfo);
extern Datum reltimegt(FunctionCallInfo fcinfo);
extern Datum reltimele(FunctionCallInfo fcinfo);
extern Datum reltimege(FunctionCallInfo fcinfo);
extern Datum tintervalsame(FunctionCallInfo fcinfo);
extern Datum tintervalct(FunctionCallInfo fcinfo);
extern Datum tintervalov(FunctionCallInfo fcinfo);
extern Datum tintervalleneq(FunctionCallInfo fcinfo);
extern Datum tintervallenne(FunctionCallInfo fcinfo);
extern Datum tintervallenlt(FunctionCallInfo fcinfo);
extern Datum tintervallengt(FunctionCallInfo fcinfo);
extern Datum tintervallenle(FunctionCallInfo fcinfo);
extern Datum tintervallenge(FunctionCallInfo fcinfo);
extern Datum tintervalstart(FunctionCallInfo fcinfo);
extern Datum tintervalend(FunctionCallInfo fcinfo);
extern Datum timeofday(FunctionCallInfo fcinfo);
extern Datum abstime_finite(FunctionCallInfo fcinfo);
extern Datum float8_combine(FunctionCallInfo fcinfo);
extern Datum inter_sl(FunctionCallInfo fcinfo);
extern Datum inter_lb(FunctionCallInfo fcinfo);
extern Datum float48mul(FunctionCallInfo fcinfo);
extern Datum float48div(FunctionCallInfo fcinfo);
extern Datum float48pl(FunctionCallInfo fcinfo);
extern Datum float48mi(FunctionCallInfo fcinfo);
extern Datum float84mul(FunctionCallInfo fcinfo);
extern Datum float84div(FunctionCallInfo fcinfo);
extern Datum float84pl(FunctionCallInfo fcinfo);
extern Datum float84mi(FunctionCallInfo fcinfo);
extern Datum float4eq(FunctionCallInfo fcinfo);
extern Datum float4ne(FunctionCallInfo fcinfo);
extern Datum float4lt(FunctionCallInfo fcinfo);
extern Datum float4le(FunctionCallInfo fcinfo);
extern Datum float4gt(FunctionCallInfo fcinfo);
extern Datum float4ge(FunctionCallInfo fcinfo);
extern Datum float8eq(FunctionCallInfo fcinfo);
extern Datum float8ne(FunctionCallInfo fcinfo);
extern Datum float8lt(FunctionCallInfo fcinfo);
extern Datum float8le(FunctionCallInfo fcinfo);
extern Datum float8gt(FunctionCallInfo fcinfo);
extern Datum float8ge(FunctionCallInfo fcinfo);
extern Datum float48eq(FunctionCallInfo fcinfo);
extern Datum float48ne(FunctionCallInfo fcinfo);
extern Datum float48lt(FunctionCallInfo fcinfo);
extern Datum float48le(FunctionCallInfo fcinfo);
extern Datum float48gt(FunctionCallInfo fcinfo);
extern Datum float48ge(FunctionCallInfo fcinfo);
extern Datum float84eq(FunctionCallInfo fcinfo);
extern Datum float84ne(FunctionCallInfo fcinfo);
extern Datum float84lt(FunctionCallInfo fcinfo);
extern Datum float84le(FunctionCallInfo fcinfo);
extern Datum float84gt(FunctionCallInfo fcinfo);
extern Datum float84ge(FunctionCallInfo fcinfo);
extern Datum ftod(FunctionCallInfo fcinfo);
extern Datum dtof(FunctionCallInfo fcinfo);
extern Datum i2toi4(FunctionCallInfo fcinfo);
extern Datum i4toi2(FunctionCallInfo fcinfo);
extern Datum pg_jit_available(FunctionCallInfo fcinfo);
extern Datum i4tod(FunctionCallInfo fcinfo);
extern Datum dtoi4(FunctionCallInfo fcinfo);
extern Datum i4tof(FunctionCallInfo fcinfo);
extern Datum ftoi4(FunctionCallInfo fcinfo);
extern Datum width_bucket_float8(FunctionCallInfo fcinfo);
extern Datum json_in(FunctionCallInfo fcinfo);
extern Datum json_out(FunctionCallInfo fcinfo);
extern Datum json_recv(FunctionCallInfo fcinfo);
extern Datum json_send(FunctionCallInfo fcinfo);
extern Datum index_am_handler_in(FunctionCallInfo fcinfo);
extern Datum index_am_handler_out(FunctionCallInfo fcinfo);
extern Datum hashmacaddr8(FunctionCallInfo fcinfo);
extern Datum hash_aclitem(FunctionCallInfo fcinfo);
extern Datum bthandler(FunctionCallInfo fcinfo);
extern Datum hashhandler(FunctionCallInfo fcinfo);
extern Datum gisthandler(FunctionCallInfo fcinfo);
extern Datum ginhandler(FunctionCallInfo fcinfo);
extern Datum spghandler(FunctionCallInfo fcinfo);
extern Datum brinhandler(FunctionCallInfo fcinfo);
extern Datum scalarlesel(FunctionCallInfo fcinfo);
extern Datum scalargesel(FunctionCallInfo fcinfo);
extern Datum amvalidate(FunctionCallInfo fcinfo);
extern Datum poly_same(FunctionCallInfo fcinfo);
extern Datum poly_contain(FunctionCallInfo fcinfo);
extern Datum poly_left(FunctionCallInfo fcinfo);
extern Datum poly_overleft(FunctionCallInfo fcinfo);
extern Datum poly_overright(FunctionCallInfo fcinfo);
extern Datum poly_right(FunctionCallInfo fcinfo);
extern Datum poly_contained(FunctionCallInfo fcinfo);
extern Datum poly_overlap(FunctionCallInfo fcinfo);
extern Datum poly_in(FunctionCallInfo fcinfo);
extern Datum poly_out(FunctionCallInfo fcinfo);
extern Datum btint2cmp(FunctionCallInfo fcinfo);
extern Datum btint4cmp(FunctionCallInfo fcinfo);
extern Datum btfloat4cmp(FunctionCallInfo fcinfo);
extern Datum btfloat8cmp(FunctionCallInfo fcinfo);
extern Datum btoidcmp(FunctionCallInfo fcinfo);
extern Datum btabstimecmp(FunctionCallInfo fcinfo);
extern Datum btcharcmp(FunctionCallInfo fcinfo);
extern Datum btnamecmp(FunctionCallInfo fcinfo);
extern Datum bttextcmp(FunctionCallInfo fcinfo);
extern Datum lseg_distance(FunctionCallInfo fcinfo);
extern Datum lseg_interpt(FunctionCallInfo fcinfo);
extern Datum dist_ps(FunctionCallInfo fcinfo);
extern Datum dist_pb(FunctionCallInfo fcinfo);
extern Datum dist_sb(FunctionCallInfo fcinfo);
extern Datum close_ps(FunctionCallInfo fcinfo);
extern Datum close_pb(FunctionCallInfo fcinfo);
extern Datum close_sb(FunctionCallInfo fcinfo);
extern Datum on_ps(FunctionCallInfo fcinfo);
extern Datum path_distance(FunctionCallInfo fcinfo);
extern Datum dist_ppath(FunctionCallInfo fcinfo);
extern Datum on_sb(FunctionCallInfo fcinfo);
extern Datum inter_sb(FunctionCallInfo fcinfo);
extern Datum text_to_array_null(FunctionCallInfo fcinfo);
extern Datum cash_cmp(FunctionCallInfo fcinfo);
extern Datum array_append(FunctionCallInfo fcinfo);
extern Datum array_prepend(FunctionCallInfo fcinfo);
extern Datum btreltimecmp(FunctionCallInfo fcinfo);
extern Datum bttintervalcmp(FunctionCallInfo fcinfo);
extern Datum btarraycmp(FunctionCallInfo fcinfo);
extern Datum array_cat(FunctionCallInfo fcinfo);
extern Datum array_to_text_null(FunctionCallInfo fcinfo);
extern Datum scalarlejoinsel(FunctionCallInfo fcinfo);
extern Datum array_ne(FunctionCallInfo fcinfo);
extern Datum array_lt(FunctionCallInfo fcinfo);
extern Datum array_gt(FunctionCallInfo fcinfo);
extern Datum array_le(FunctionCallInfo fcinfo);
extern Datum text_to_array(FunctionCallInfo fcinfo);
extern Datum array_to_text(FunctionCallInfo fcinfo);
extern Datum array_ge(FunctionCallInfo fcinfo);
extern Datum scalargejoinsel(FunctionCallInfo fcinfo);
extern Datum hashmacaddr(FunctionCallInfo fcinfo);
extern Datum hashtext(FunctionCallInfo fcinfo);
extern Datum rtrim1(FunctionCallInfo fcinfo);
extern Datum btoidvectorcmp(FunctionCallInfo fcinfo);
extern Datum name_text(FunctionCallInfo fcinfo);
extern Datum text_name(FunctionCallInfo fcinfo);
extern Datum name_bpchar(FunctionCallInfo fcinfo);
extern Datum bpchar_name(FunctionCallInfo fcinfo);
extern Datum hashinet(FunctionCallInfo fcinfo);
extern Datum hashint4extended(FunctionCallInfo fcinfo);
extern Datum hash_numeric(FunctionCallInfo fcinfo);
extern Datum macaddr_in(FunctionCallInfo fcinfo);
extern Datum macaddr_out(FunctionCallInfo fcinfo);
extern Datum pg_num_nulls(FunctionCallInfo fcinfo);
extern Datum pg_num_nonnulls(FunctionCallInfo fcinfo);
extern Datum hashint2extended(FunctionCallInfo fcinfo);
extern Datum hashint8extended(FunctionCallInfo fcinfo);
extern Datum hashfloat4extended(FunctionCallInfo fcinfo);
extern Datum hashfloat8extended(FunctionCallInfo fcinfo);
extern Datum hashoidextended(FunctionCallInfo fcinfo);
extern Datum hashcharextended(FunctionCallInfo fcinfo);
extern Datum hashnameextended(FunctionCallInfo fcinfo);
extern Datum hashtextextended(FunctionCallInfo fcinfo);
extern Datum hashint2(FunctionCallInfo fcinfo);
extern Datum hashint4(FunctionCallInfo fcinfo);
extern Datum hashfloat4(FunctionCallInfo fcinfo);
extern Datum hashfloat8(FunctionCallInfo fcinfo);
extern Datum hashoid(FunctionCallInfo fcinfo);
extern Datum hashchar(FunctionCallInfo fcinfo);
extern Datum hashname(FunctionCallInfo fcinfo);
extern Datum hashvarlena(FunctionCallInfo fcinfo);
extern Datum hashoidvector(FunctionCallInfo fcinfo);
extern Datum text_larger(FunctionCallInfo fcinfo);
extern Datum text_smaller(FunctionCallInfo fcinfo);
extern Datum int8in(FunctionCallInfo fcinfo);
extern Datum int8out(FunctionCallInfo fcinfo);
extern Datum int8um(FunctionCallInfo fcinfo);
extern Datum int8pl(FunctionCallInfo fcinfo);
extern Datum int8mi(FunctionCallInfo fcinfo);
extern Datum int8mul(FunctionCallInfo fcinfo);
extern Datum int8div(FunctionCallInfo fcinfo);
extern Datum int8eq(FunctionCallInfo fcinfo);
extern Datum int8ne(FunctionCallInfo fcinfo);
extern Datum int8lt(FunctionCallInfo fcinfo);
extern Datum int8gt(FunctionCallInfo fcinfo);
extern Datum int8le(FunctionCallInfo fcinfo);
extern Datum int8ge(FunctionCallInfo fcinfo);
extern Datum int84eq(FunctionCallInfo fcinfo);
extern Datum int84ne(FunctionCallInfo fcinfo);
extern Datum int84lt(FunctionCallInfo fcinfo);
extern Datum int84gt(FunctionCallInfo fcinfo);
extern Datum int84le(FunctionCallInfo fcinfo);
extern Datum int84ge(FunctionCallInfo fcinfo);
extern Datum int84(FunctionCallInfo fcinfo);
extern Datum int48(FunctionCallInfo fcinfo);
extern Datum i8tod(FunctionCallInfo fcinfo);
extern Datum dtoi8(FunctionCallInfo fcinfo);
extern Datum array_larger(FunctionCallInfo fcinfo);
extern Datum array_smaller(FunctionCallInfo fcinfo);
extern Datum inet_abbrev(FunctionCallInfo fcinfo);
extern Datum cidr_abbrev(FunctionCallInfo fcinfo);
extern Datum inet_set_masklen(FunctionCallInfo fcinfo);
extern Datum oidvectorne(FunctionCallInfo fcinfo);
extern Datum hash_array(FunctionCallInfo fcinfo);
extern Datum cidr_set_masklen(FunctionCallInfo fcinfo);
extern Datum pg_indexam_has_property(FunctionCallInfo fcinfo);
extern Datum pg_index_has_property(FunctionCallInfo fcinfo);
extern Datum pg_index_column_has_property(FunctionCallInfo fcinfo);
extern Datum i8tof(FunctionCallInfo fcinfo);
extern Datum ftoi8(FunctionCallInfo fcinfo);
extern Datum namelt(FunctionCallInfo fcinfo);
extern Datum namele(FunctionCallInfo fcinfo);
extern Datum namegt(FunctionCallInfo fcinfo);
extern Datum namege(FunctionCallInfo fcinfo);
extern Datum namene(FunctionCallInfo fcinfo);
extern Datum bpchar(FunctionCallInfo fcinfo);
extern Datum varchar(FunctionCallInfo fcinfo);
extern Datum mktinterval(FunctionCallInfo fcinfo);
extern Datum oidvectorlt(FunctionCallInfo fcinfo);
extern Datum oidvectorle(FunctionCallInfo fcinfo);
extern Datum oidvectoreq(FunctionCallInfo fcinfo);
extern Datum oidvectorge(FunctionCallInfo fcinfo);
extern Datum oidvectorgt(FunctionCallInfo fcinfo);
extern Datum network_network(FunctionCallInfo fcinfo);
extern Datum network_netmask(FunctionCallInfo fcinfo);
extern Datum network_masklen(FunctionCallInfo fcinfo);
extern Datum network_broadcast(FunctionCallInfo fcinfo);
extern Datum network_host(FunctionCallInfo fcinfo);
extern Datum current_user(FunctionCallInfo fcinfo);
extern Datum network_family(FunctionCallInfo fcinfo);
extern Datum int82(FunctionCallInfo fcinfo);
extern Datum be_lo_create(FunctionCallInfo fcinfo);
extern Datum oidlt(FunctionCallInfo fcinfo);
extern Datum oidle(FunctionCallInfo fcinfo);
extern Datum byteaoctetlen(FunctionCallInfo fcinfo);
extern Datum byteaGetByte(FunctionCallInfo fcinfo);
extern Datum byteaSetByte(FunctionCallInfo fcinfo);
extern Datum byteaGetBit(FunctionCallInfo fcinfo);
extern Datum byteaSetBit(FunctionCallInfo fcinfo);
extern Datum dist_pl(FunctionCallInfo fcinfo);
extern Datum dist_lb(FunctionCallInfo fcinfo);
extern Datum dist_sl(FunctionCallInfo fcinfo);
extern Datum dist_cpoly(FunctionCallInfo fcinfo);
extern Datum poly_distance(FunctionCallInfo fcinfo);
extern Datum network_show(FunctionCallInfo fcinfo);
extern Datum text_lt(FunctionCallInfo fcinfo);
extern Datum text_le(FunctionCallInfo fcinfo);
extern Datum text_gt(FunctionCallInfo fcinfo);
extern Datum text_ge(FunctionCallInfo fcinfo);
extern Datum array_eq(FunctionCallInfo fcinfo);
extern Datum session_user(FunctionCallInfo fcinfo);
extern Datum array_dims(FunctionCallInfo fcinfo);
extern Datum array_ndims(FunctionCallInfo fcinfo);
extern Datum byteaoverlay(FunctionCallInfo fcinfo);
extern Datum array_in(FunctionCallInfo fcinfo);
extern Datum array_out(FunctionCallInfo fcinfo);
extern Datum byteaoverlay_no_len(FunctionCallInfo fcinfo);
extern Datum macaddr_trunc(FunctionCallInfo fcinfo);
extern Datum int28(FunctionCallInfo fcinfo);
extern Datum smgrin(FunctionCallInfo fcinfo);
extern Datum smgrout(FunctionCallInfo fcinfo);
extern Datum smgreq(FunctionCallInfo fcinfo);
extern Datum smgrne(FunctionCallInfo fcinfo);
extern Datum be_lo_import(FunctionCallInfo fcinfo);
extern Datum be_lo_export(FunctionCallInfo fcinfo);
extern Datum int4inc(FunctionCallInfo fcinfo);
extern Datum be_lo_import_with_oid(FunctionCallInfo fcinfo);
extern Datum int4larger(FunctionCallInfo fcinfo);
extern Datum int4smaller(FunctionCallInfo fcinfo);
extern Datum int2larger(FunctionCallInfo fcinfo);
extern Datum int2smaller(FunctionCallInfo fcinfo);
extern Datum hashvarlenaextended(FunctionCallInfo fcinfo);
extern Datum hashoidvectorextended(FunctionCallInfo fcinfo);
extern Datum hash_aclitem_extended(FunctionCallInfo fcinfo);
extern Datum hashmacaddrextended(FunctionCallInfo fcinfo);
extern Datum hashinetextended(FunctionCallInfo fcinfo);
extern Datum hash_numeric_extended(FunctionCallInfo fcinfo);
extern Datum hashmacaddr8extended(FunctionCallInfo fcinfo);
extern Datum hash_array_extended(FunctionCallInfo fcinfo);
extern Datum tintervaleq(FunctionCallInfo fcinfo);
extern Datum tintervalne(FunctionCallInfo fcinfo);
extern Datum tintervallt(FunctionCallInfo fcinfo);
extern Datum tintervalgt(FunctionCallInfo fcinfo);
extern Datum tintervalle(FunctionCallInfo fcinfo);
extern Datum tintervalge(FunctionCallInfo fcinfo);
extern Datum pg_client_encoding(FunctionCallInfo fcinfo);
extern Datum current_query(FunctionCallInfo fcinfo);
extern Datum macaddr_eq(FunctionCallInfo fcinfo);
extern Datum macaddr_lt(FunctionCallInfo fcinfo);
extern Datum macaddr_le(FunctionCallInfo fcinfo);
extern Datum macaddr_gt(FunctionCallInfo fcinfo);
extern Datum macaddr_ge(FunctionCallInfo fcinfo);
extern Datum macaddr_ne(FunctionCallInfo fcinfo);
extern Datum macaddr_cmp(FunctionCallInfo fcinfo);
extern Datum int82pl(FunctionCallInfo fcinfo);
extern Datum int82mi(FunctionCallInfo fcinfo);
extern Datum int82mul(FunctionCallInfo fcinfo);
extern Datum int82div(FunctionCallInfo fcinfo);
extern Datum int28pl(FunctionCallInfo fcinfo);
extern Datum btint8cmp(FunctionCallInfo fcinfo);
extern Datum cash_mul_flt4(FunctionCallInfo fcinfo);
extern Datum cash_div_flt4(FunctionCallInfo fcinfo);
extern Datum flt4_mul_cash(FunctionCallInfo fcinfo);
extern Datum textpos(FunctionCallInfo fcinfo);
extern Datum textlike(FunctionCallInfo fcinfo);
extern Datum textnlike(FunctionCallInfo fcinfo);
extern Datum int48eq(FunctionCallInfo fcinfo);
extern Datum int48ne(FunctionCallInfo fcinfo);
extern Datum int48lt(FunctionCallInfo fcinfo);
extern Datum int48gt(FunctionCallInfo fcinfo);
extern Datum int48le(FunctionCallInfo fcinfo);
extern Datum int48ge(FunctionCallInfo fcinfo);
extern Datum namelike(FunctionCallInfo fcinfo);
extern Datum namenlike(FunctionCallInfo fcinfo);
extern Datum char_bpchar(FunctionCallInfo fcinfo);
extern Datum current_database(FunctionCallInfo fcinfo);
extern Datum int4_mul_cash(FunctionCallInfo fcinfo);
extern Datum int2_mul_cash(FunctionCallInfo fcinfo);
extern Datum cash_mul_int4(FunctionCallInfo fcinfo);
extern Datum cash_div_int4(FunctionCallInfo fcinfo);
extern Datum cash_mul_int2(FunctionCallInfo fcinfo);
extern Datum cash_div_int2(FunctionCallInfo fcinfo);
extern Datum lower(FunctionCallInfo fcinfo);
extern Datum upper(FunctionCallInfo fcinfo);
extern Datum initcap(FunctionCallInfo fcinfo);
extern Datum lpad(FunctionCallInfo fcinfo);
extern Datum rpad(FunctionCallInfo fcinfo);
extern Datum ltrim(FunctionCallInfo fcinfo);
extern Datum rtrim(FunctionCallInfo fcinfo);
extern Datum text_substr(FunctionCallInfo fcinfo);
extern Datum translate(FunctionCallInfo fcinfo);
extern Datum ltrim1(FunctionCallInfo fcinfo);
extern Datum text_substr_no_len(FunctionCallInfo fcinfo);
extern Datum btrim(FunctionCallInfo fcinfo);
extern Datum btrim1(FunctionCallInfo fcinfo);
extern Datum cash_in(FunctionCallInfo fcinfo);
extern Datum cash_out(FunctionCallInfo fcinfo);
extern Datum cash_eq(FunctionCallInfo fcinfo);
extern Datum cash_ne(FunctionCallInfo fcinfo);
extern Datum cash_lt(FunctionCallInfo fcinfo);
extern Datum cash_le(FunctionCallInfo fcinfo);
extern Datum cash_gt(FunctionCallInfo fcinfo);
extern Datum cash_ge(FunctionCallInfo fcinfo);
extern Datum cash_pl(FunctionCallInfo fcinfo);
extern Datum cash_mi(FunctionCallInfo fcinfo);
extern Datum cash_mul_flt8(FunctionCallInfo fcinfo);
extern Datum cash_div_flt8(FunctionCallInfo fcinfo);
extern Datum cashlarger(FunctionCallInfo fcinfo);
extern Datum cashsmaller(FunctionCallInfo fcinfo);
extern Datum inet_in(FunctionCallInfo fcinfo);
extern Datum inet_out(FunctionCallInfo fcinfo);
extern Datum flt8_mul_cash(FunctionCallInfo fcinfo);
extern Datum network_eq(FunctionCallInfo fcinfo);
extern Datum network_lt(FunctionCallInfo fcinfo);
extern Datum network_le(FunctionCallInfo fcinfo);
extern Datum network_gt(FunctionCallInfo fcinfo);
extern Datum network_ge(FunctionCallInfo fcinfo);
extern Datum network_ne(FunctionCallInfo fcinfo);
extern Datum network_cmp(FunctionCallInfo fcinfo);
extern Datum network_sub(FunctionCallInfo fcinfo);
extern Datum network_subeq(FunctionCallInfo fcinfo);
extern Datum network_sup(FunctionCallInfo fcinfo);
extern Datum network_supeq(FunctionCallInfo fcinfo);
extern Datum cash_words(FunctionCallInfo fcinfo);
extern Datum generate_series_timestamp(FunctionCallInfo fcinfo);
extern Datum generate_series_timestamptz(FunctionCallInfo fcinfo);
extern Datum int28mi(FunctionCallInfo fcinfo);
extern Datum int28mul(FunctionCallInfo fcinfo);
extern Datum text_char(FunctionCallInfo fcinfo);
extern Datum int8mod(FunctionCallInfo fcinfo);
extern Datum char_text(FunctionCallInfo fcinfo);
extern Datum int28div(FunctionCallInfo fcinfo);
extern Datum hashint8(FunctionCallInfo fcinfo);
extern Datum be_lo_open(FunctionCallInfo fcinfo);
extern Datum be_lo_close(FunctionCallInfo fcinfo);
extern Datum be_loread(FunctionCallInfo fcinfo);
extern Datum be_lowrite(FunctionCallInfo fcinfo);
extern Datum be_lo_lseek(FunctionCallInfo fcinfo);
extern Datum be_lo_creat(FunctionCallInfo fcinfo);
extern Datum be_lo_tell(FunctionCallInfo fcinfo);
extern Datum on_pl(FunctionCallInfo fcinfo);
extern Datum on_sl(FunctionCallInfo fcinfo);
extern Datum close_pl(FunctionCallInfo fcinfo);
extern Datum close_sl(FunctionCallInfo fcinfo);
extern Datum close_lb(FunctionCallInfo fcinfo);
extern Datum be_lo_unlink(FunctionCallInfo fcinfo);
extern Datum hashbpcharextended(FunctionCallInfo fcinfo);
extern Datum path_inter(FunctionCallInfo fcinfo);
extern Datum box_area(FunctionCallInfo fcinfo);
extern Datum box_width(FunctionCallInfo fcinfo);
extern Datum box_height(FunctionCallInfo fcinfo);
extern Datum box_distance(FunctionCallInfo fcinfo);
extern Datum path_area(FunctionCallInfo fcinfo);
extern Datum box_intersect(FunctionCallInfo fcinfo);
extern Datum box_diagonal(FunctionCallInfo fcinfo);
extern Datum path_n_lt(FunctionCallInfo fcinfo);
extern Datum path_n_gt(FunctionCallInfo fcinfo);
extern Datum path_n_eq(FunctionCallInfo fcinfo);
extern Datum path_n_le(FunctionCallInfo fcinfo);
extern Datum path_n_ge(FunctionCallInfo fcinfo);
extern Datum path_length(FunctionCallInfo fcinfo);
extern Datum point_ne(FunctionCallInfo fcinfo);
extern Datum point_vert(FunctionCallInfo fcinfo);
extern Datum point_horiz(FunctionCallInfo fcinfo);
extern Datum point_distance(FunctionCallInfo fcinfo);
extern Datum point_slope(FunctionCallInfo fcinfo);
extern Datum lseg_construct(FunctionCallInfo fcinfo);
extern Datum lseg_intersect(FunctionCallInfo fcinfo);
extern Datum lseg_parallel(FunctionCallInfo fcinfo);
extern Datum lseg_perp(FunctionCallInfo fcinfo);
extern Datum lseg_vertical(FunctionCallInfo fcinfo);
extern Datum lseg_horizontal(FunctionCallInfo fcinfo);
extern Datum lseg_eq(FunctionCallInfo fcinfo);
extern Datum be_lo_truncate(FunctionCallInfo fcinfo);
extern Datum timestamptz_izone(FunctionCallInfo fcinfo);
extern Datum gist_point_compress(FunctionCallInfo fcinfo);
extern Datum aclitemin(FunctionCallInfo fcinfo);
extern Datum aclitemout(FunctionCallInfo fcinfo);
extern Datum aclinsert(FunctionCallInfo fcinfo);
extern Datum aclremove(FunctionCallInfo fcinfo);
extern Datum aclcontains(FunctionCallInfo fcinfo);
extern Datum getdatabaseencoding(FunctionCallInfo fcinfo);
extern Datum bpcharin(FunctionCallInfo fcinfo);
extern Datum bpcharout(FunctionCallInfo fcinfo);
extern Datum varcharin(FunctionCallInfo fcinfo);
extern Datum varcharout(FunctionCallInfo fcinfo);
extern Datum bpchareq(FunctionCallInfo fcinfo);
extern Datum bpcharlt(FunctionCallInfo fcinfo);
extern Datum bpcharle(FunctionCallInfo fcinfo);
extern Datum bpchargt(FunctionCallInfo fcinfo);
extern Datum bpcharge(FunctionCallInfo fcinfo);
extern Datum bpcharne(FunctionCallInfo fcinfo);
extern Datum aclitem_eq(FunctionCallInfo fcinfo);
extern Datum bpchar_larger(FunctionCallInfo fcinfo);
extern Datum bpchar_smaller(FunctionCallInfo fcinfo);
extern Datum pg_prepared_xact(FunctionCallInfo fcinfo);
extern Datum generate_series_step_int4(FunctionCallInfo fcinfo);
extern Datum generate_series_int4(FunctionCallInfo fcinfo);
extern Datum generate_series_step_int8(FunctionCallInfo fcinfo);
extern Datum generate_series_int8(FunctionCallInfo fcinfo);
extern Datum bpcharcmp(FunctionCallInfo fcinfo);
extern Datum text_regclass(FunctionCallInfo fcinfo);
extern Datum hashbpchar(FunctionCallInfo fcinfo);
extern Datum format_type(FunctionCallInfo fcinfo);
extern Datum date_in(FunctionCallInfo fcinfo);
extern Datum date_out(FunctionCallInfo fcinfo);
extern Datum date_eq(FunctionCallInfo fcinfo);
extern Datum date_lt(FunctionCallInfo fcinfo);
extern Datum date_le(FunctionCallInfo fcinfo);
extern Datum date_gt(FunctionCallInfo fcinfo);
extern Datum date_ge(FunctionCallInfo fcinfo);
extern Datum date_ne(FunctionCallInfo fcinfo);
extern Datum date_cmp(FunctionCallInfo fcinfo);
extern Datum time_lt(FunctionCallInfo fcinfo);
extern Datum time_le(FunctionCallInfo fcinfo);
extern Datum time_gt(FunctionCallInfo fcinfo);
extern Datum time_ge(FunctionCallInfo fcinfo);
extern Datum time_ne(FunctionCallInfo fcinfo);
extern Datum time_cmp(FunctionCallInfo fcinfo);
extern Datum date_larger(FunctionCallInfo fcinfo);
extern Datum date_smaller(FunctionCallInfo fcinfo);
extern Datum date_mi(FunctionCallInfo fcinfo);
extern Datum date_pli(FunctionCallInfo fcinfo);
extern Datum date_mii(FunctionCallInfo fcinfo);
extern Datum time_in(FunctionCallInfo fcinfo);
extern Datum time_out(FunctionCallInfo fcinfo);
extern Datum time_eq(FunctionCallInfo fcinfo);
extern Datum circle_add_pt(FunctionCallInfo fcinfo);
extern Datum circle_sub_pt(FunctionCallInfo fcinfo);
extern Datum circle_mul_pt(FunctionCallInfo fcinfo);
extern Datum circle_div_pt(FunctionCallInfo fcinfo);
extern Datum timestamptz_in(FunctionCallInfo fcinfo);
extern Datum timestamptz_out(FunctionCallInfo fcinfo);
extern Datum timestamp_eq(FunctionCallInfo fcinfo);
extern Datum timestamp_ne(FunctionCallInfo fcinfo);
extern Datum timestamp_lt(FunctionCallInfo fcinfo);
extern Datum timestamp_le(FunctionCallInfo fcinfo);
extern Datum timestamp_ge(FunctionCallInfo fcinfo);
extern Datum timestamp_gt(FunctionCallInfo fcinfo);
extern Datum float8_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamptz_zone(FunctionCallInfo fcinfo);
extern Datum interval_in(FunctionCallInfo fcinfo);
extern Datum interval_out(FunctionCallInfo fcinfo);
extern Datum interval_eq(FunctionCallInfo fcinfo);
extern Datum interval_ne(FunctionCallInfo fcinfo);
extern Datum interval_lt(FunctionCallInfo fcinfo);
extern Datum interval_le(FunctionCallInfo fcinfo);
extern Datum interval_ge(FunctionCallInfo fcinfo);
extern Datum interval_gt(FunctionCallInfo fcinfo);
extern Datum interval_um(FunctionCallInfo fcinfo);
extern Datum interval_pl(FunctionCallInfo fcinfo);
extern Datum interval_mi(FunctionCallInfo fcinfo);
extern Datum timestamptz_part(FunctionCallInfo fcinfo);
extern Datum interval_part(FunctionCallInfo fcinfo);
extern Datum abstime_timestamptz(FunctionCallInfo fcinfo);
extern Datum date_timestamptz(FunctionCallInfo fcinfo);
extern Datum interval_justify_hours(FunctionCallInfo fcinfo);
extern Datum reltime_interval(FunctionCallInfo fcinfo);
extern Datum timestamptz_date(FunctionCallInfo fcinfo);
extern Datum abstime_date(FunctionCallInfo fcinfo);
extern Datum timestamptz_abstime(FunctionCallInfo fcinfo);
extern Datum xid_age(FunctionCallInfo fcinfo);
extern Datum timestamp_mi(FunctionCallInfo fcinfo);
extern Datum timestamptz_pl_interval(FunctionCallInfo fcinfo);
extern Datum timestamptz_mi_interval(FunctionCallInfo fcinfo);
extern Datum generate_subscripts(FunctionCallInfo fcinfo);
extern Datum generate_subscripts_nodir(FunctionCallInfo fcinfo);
extern Datum array_fill(FunctionCallInfo fcinfo);
extern Datum interval_reltime(FunctionCallInfo fcinfo);
extern Datum timestamp_smaller(FunctionCallInfo fcinfo);
extern Datum timestamp_larger(FunctionCallInfo fcinfo);
extern Datum interval_smaller(FunctionCallInfo fcinfo);
extern Datum interval_larger(FunctionCallInfo fcinfo);
extern Datum timestamptz_age(FunctionCallInfo fcinfo);
extern Datum interval_scale(FunctionCallInfo fcinfo);
extern Datum timestamptz_trunc(FunctionCallInfo fcinfo);
extern Datum interval_trunc(FunctionCallInfo fcinfo);
extern Datum int8inc(FunctionCallInfo fcinfo);
extern Datum int8abs(FunctionCallInfo fcinfo);
extern Datum int8larger(FunctionCallInfo fcinfo);
extern Datum int8smaller(FunctionCallInfo fcinfo);
extern Datum texticregexeq(FunctionCallInfo fcinfo);
extern Datum texticregexne(FunctionCallInfo fcinfo);
extern Datum nameicregexeq(FunctionCallInfo fcinfo);
extern Datum nameicregexne(FunctionCallInfo fcinfo);
extern Datum boolin(FunctionCallInfo fcinfo);
extern Datum boolout(FunctionCallInfo fcinfo);
extern Datum byteain(FunctionCallInfo fcinfo);
extern Datum charin(FunctionCallInfo fcinfo);
extern Datum charlt(FunctionCallInfo fcinfo);
extern Datum unique_key_recheck(FunctionCallInfo fcinfo);
extern Datum int4abs(FunctionCallInfo fcinfo);
extern Datum nameregexne(FunctionCallInfo fcinfo);
extern Datum int2abs(FunctionCallInfo fcinfo);
extern Datum textregexeq(FunctionCallInfo fcinfo);
extern Datum textregexne(FunctionCallInfo fcinfo);
extern Datum textlen(FunctionCallInfo fcinfo);
extern Datum textcat(FunctionCallInfo fcinfo);
extern Datum PG_char_to_encoding(FunctionCallInfo fcinfo);
extern Datum tidne(FunctionCallInfo fcinfo);
extern Datum cidr_in(FunctionCallInfo fcinfo);
extern Datum parse_ident(FunctionCallInfo fcinfo);
extern Datum pg_column_size(FunctionCallInfo fcinfo);
extern Datum overlaps_timetz(FunctionCallInfo fcinfo);
extern Datum datetime_timestamp(FunctionCallInfo fcinfo);
extern Datum timetz_part(FunctionCallInfo fcinfo);
extern Datum int84pl(FunctionCallInfo fcinfo);
extern Datum int84mi(FunctionCallInfo fcinfo);
extern Datum int84mul(FunctionCallInfo fcinfo);
extern Datum int84div(FunctionCallInfo fcinfo);
extern Datum int48pl(FunctionCallInfo fcinfo);
extern Datum int48mi(FunctionCallInfo fcinfo);
extern Datum int48mul(FunctionCallInfo fcinfo);
extern Datum int48div(FunctionCallInfo fcinfo);
extern Datum quote_ident(FunctionCallInfo fcinfo);
extern Datum quote_literal(FunctionCallInfo fcinfo);
extern Datum array_fill_with_lower_bounds(FunctionCallInfo fcinfo);
extern Datum i8tooid(FunctionCallInfo fcinfo);
extern Datum oidtoi8(FunctionCallInfo fcinfo);
extern Datum quote_nullable(FunctionCallInfo fcinfo);
extern Datum suppress_redundant_updates_trigger(FunctionCallInfo fcinfo);
extern Datum tideq(FunctionCallInfo fcinfo);
extern Datum currtid_byreloid(FunctionCallInfo fcinfo);
extern Datum currtid_byrelname(FunctionCallInfo fcinfo);
extern Datum interval_justify_days(FunctionCallInfo fcinfo);
extern Datum datetimetz_timestamptz(FunctionCallInfo fcinfo);
extern Datum now(FunctionCallInfo fcinfo);
extern Datum positionsel(FunctionCallInfo fcinfo);
extern Datum positionjoinsel(FunctionCallInfo fcinfo);
extern Datum contsel(FunctionCallInfo fcinfo);
extern Datum contjoinsel(FunctionCallInfo fcinfo);
extern Datum overlaps_timestamp(FunctionCallInfo fcinfo);
extern Datum overlaps_time(FunctionCallInfo fcinfo);
extern Datum timestamp_in(FunctionCallInfo fcinfo);
extern Datum timestamp_out(FunctionCallInfo fcinfo);
extern Datum timestamp_cmp(FunctionCallInfo fcinfo);
extern Datum interval_cmp(FunctionCallInfo fcinfo);
extern Datum timestamp_time(FunctionCallInfo fcinfo);
extern Datum bpcharlen(FunctionCallInfo fcinfo);
extern Datum interval_div(FunctionCallInfo fcinfo);
extern Datum dlog10(FunctionCallInfo fcinfo);
extern Datum oidvectortypes(FunctionCallInfo fcinfo);
extern Datum timetz_in(FunctionCallInfo fcinfo);
extern Datum timetz_out(FunctionCallInfo fcinfo);
extern Datum timetz_eq(FunctionCallInfo fcinfo);
extern Datum timetz_ne(FunctionCallInfo fcinfo);
extern Datum timetz_lt(FunctionCallInfo fcinfo);
extern Datum timetz_le(FunctionCallInfo fcinfo);
extern Datum timetz_ge(FunctionCallInfo fcinfo);
extern Datum timetz_gt(FunctionCallInfo fcinfo);
extern Datum timetz_cmp(FunctionCallInfo fcinfo);
extern Datum network_hostmask(FunctionCallInfo fcinfo);
extern Datum makeaclitem(FunctionCallInfo fcinfo);
extern Datum time_interval(FunctionCallInfo fcinfo);
extern Datum pg_lock_status(FunctionCallInfo fcinfo);
extern Datum date_finite(FunctionCallInfo fcinfo);
extern Datum textoctetlen(FunctionCallInfo fcinfo);
extern Datum bpcharoctetlen(FunctionCallInfo fcinfo);
extern Datum time_larger(FunctionCallInfo fcinfo);
extern Datum time_smaller(FunctionCallInfo fcinfo);
extern Datum timetz_larger(FunctionCallInfo fcinfo);
extern Datum timetz_smaller(FunctionCallInfo fcinfo);
extern Datum time_part(FunctionCallInfo fcinfo);
extern Datum pg_get_constraintdef(FunctionCallInfo fcinfo);
extern Datum timestamptz_timetz(FunctionCallInfo fcinfo);
extern Datum timestamp_finite(FunctionCallInfo fcinfo);
extern Datum interval_finite(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_start(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_client_addr(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_client_port(FunctionCallInfo fcinfo);
extern Datum current_schema(FunctionCallInfo fcinfo);
extern Datum current_schemas(FunctionCallInfo fcinfo);
extern Datum textoverlay(FunctionCallInfo fcinfo);
extern Datum textoverlay_no_len(FunctionCallInfo fcinfo);
extern Datum line_parallel(FunctionCallInfo fcinfo);
extern Datum line_perp(FunctionCallInfo fcinfo);
extern Datum line_vertical(FunctionCallInfo fcinfo);
extern Datum line_horizontal(FunctionCallInfo fcinfo);
extern Datum circle_center(FunctionCallInfo fcinfo);
extern Datum interval_time(FunctionCallInfo fcinfo);
extern Datum points_box(FunctionCallInfo fcinfo);
extern Datum box_add(FunctionCallInfo fcinfo);
extern Datum box_sub(FunctionCallInfo fcinfo);
extern Datum box_mul(FunctionCallInfo fcinfo);
extern Datum box_div(FunctionCallInfo fcinfo);
extern Datum cidr_out(FunctionCallInfo fcinfo);
extern Datum poly_contain_pt(FunctionCallInfo fcinfo);
extern Datum pt_contained_poly(FunctionCallInfo fcinfo);
extern Datum path_isclosed(FunctionCallInfo fcinfo);
extern Datum path_isopen(FunctionCallInfo fcinfo);
extern Datum path_npoints(FunctionCallInfo fcinfo);
extern Datum path_close(FunctionCallInfo fcinfo);
extern Datum path_open(FunctionCallInfo fcinfo);
extern Datum path_add(FunctionCallInfo fcinfo);
extern Datum path_add_pt(FunctionCallInfo fcinfo);
extern Datum path_sub_pt(FunctionCallInfo fcinfo);
extern Datum path_mul_pt(FunctionCallInfo fcinfo);
extern Datum path_div_pt(FunctionCallInfo fcinfo);
extern Datum construct_point(FunctionCallInfo fcinfo);
extern Datum point_add(FunctionCallInfo fcinfo);
extern Datum point_sub(FunctionCallInfo fcinfo);
extern Datum point_mul(FunctionCallInfo fcinfo);
extern Datum point_div(FunctionCallInfo fcinfo);
extern Datum poly_npoints(FunctionCallInfo fcinfo);
extern Datum poly_box(FunctionCallInfo fcinfo);
extern Datum poly_path(FunctionCallInfo fcinfo);
extern Datum box_poly(FunctionCallInfo fcinfo);
extern Datum path_poly(FunctionCallInfo fcinfo);
extern Datum circle_in(FunctionCallInfo fcinfo);
extern Datum circle_out(FunctionCallInfo fcinfo);
extern Datum circle_same(FunctionCallInfo fcinfo);
extern Datum circle_contain(FunctionCallInfo fcinfo);
extern Datum circle_left(FunctionCallInfo fcinfo);
extern Datum circle_overleft(FunctionCallInfo fcinfo);
extern Datum circle_overright(FunctionCallInfo fcinfo);
extern Datum circle_right(FunctionCallInfo fcinfo);
extern Datum circle_contained(FunctionCallInfo fcinfo);
extern Datum circle_overlap(FunctionCallInfo fcinfo);
extern Datum circle_below(FunctionCallInfo fcinfo);
extern Datum circle_above(FunctionCallInfo fcinfo);
extern Datum circle_eq(FunctionCallInfo fcinfo);
extern Datum circle_ne(FunctionCallInfo fcinfo);
extern Datum circle_lt(FunctionCallInfo fcinfo);
extern Datum circle_gt(FunctionCallInfo fcinfo);
extern Datum circle_le(FunctionCallInfo fcinfo);
extern Datum circle_ge(FunctionCallInfo fcinfo);
extern Datum circle_area(FunctionCallInfo fcinfo);
extern Datum circle_diameter(FunctionCallInfo fcinfo);
extern Datum circle_radius(FunctionCallInfo fcinfo);
extern Datum circle_distance(FunctionCallInfo fcinfo);
extern Datum cr_circle(FunctionCallInfo fcinfo);
extern Datum poly_circle(FunctionCallInfo fcinfo);
extern Datum circle_poly(FunctionCallInfo fcinfo);
extern Datum dist_pc(FunctionCallInfo fcinfo);
extern Datum circle_contain_pt(FunctionCallInfo fcinfo);
extern Datum pt_contained_circle(FunctionCallInfo fcinfo);
extern Datum box_circle(FunctionCallInfo fcinfo);
extern Datum circle_box(FunctionCallInfo fcinfo);
extern Datum lseg_ne(FunctionCallInfo fcinfo);
extern Datum lseg_lt(FunctionCallInfo fcinfo);
extern Datum lseg_le(FunctionCallInfo fcinfo);
extern Datum lseg_gt(FunctionCallInfo fcinfo);
extern Datum lseg_ge(FunctionCallInfo fcinfo);
extern Datum lseg_length(FunctionCallInfo fcinfo);
extern Datum close_ls(FunctionCallInfo fcinfo);
extern Datum close_lseg(FunctionCallInfo fcinfo);
extern Datum line_in(FunctionCallInfo fcinfo);
extern Datum line_out(FunctionCallInfo fcinfo);
extern Datum line_eq(FunctionCallInfo fcinfo);
extern Datum line_construct_pp(FunctionCallInfo fcinfo);
extern Datum line_interpt(FunctionCallInfo fcinfo);
extern Datum line_intersect(FunctionCallInfo fcinfo);
extern Datum bit_in(FunctionCallInfo fcinfo);
extern Datum bit_out(FunctionCallInfo fcinfo);
extern Datum pg_get_ruledef(FunctionCallInfo fcinfo);
extern Datum nextval_oid(FunctionCallInfo fcinfo);
extern Datum currval_oid(FunctionCallInfo fcinfo);
extern Datum setval_oid(FunctionCallInfo fcinfo);
extern Datum varbit_in(FunctionCallInfo fcinfo);
extern Datum varbit_out(FunctionCallInfo fcinfo);
extern Datum biteq(FunctionCallInfo fcinfo);
extern Datum bitne(FunctionCallInfo fcinfo);
extern Datum bitge(FunctionCallInfo fcinfo);
extern Datum bitgt(FunctionCallInfo fcinfo);
extern Datum bitle(FunctionCallInfo fcinfo);
extern Datum bitlt(FunctionCallInfo fcinfo);
extern Datum bitcmp(FunctionCallInfo fcinfo);
extern Datum PG_encoding_to_char(FunctionCallInfo fcinfo);
extern Datum drandom(FunctionCallInfo fcinfo);
extern Datum setseed(FunctionCallInfo fcinfo);
extern Datum dasin(FunctionCallInfo fcinfo);
extern Datum dacos(FunctionCallInfo fcinfo);
extern Datum datan(FunctionCallInfo fcinfo);
extern Datum datan2(FunctionCallInfo fcinfo);
extern Datum dsin(FunctionCallInfo fcinfo);
extern Datum dcos(FunctionCallInfo fcinfo);
extern Datum dtan(FunctionCallInfo fcinfo);
extern Datum dcot(FunctionCallInfo fcinfo);
extern Datum degrees(FunctionCallInfo fcinfo);
extern Datum radians(FunctionCallInfo fcinfo);
extern Datum dpi(FunctionCallInfo fcinfo);
extern Datum interval_mul(FunctionCallInfo fcinfo);
extern Datum pg_typeof(FunctionCallInfo fcinfo);
extern Datum ascii(FunctionCallInfo fcinfo);
extern Datum chr(FunctionCallInfo fcinfo);
extern Datum repeat(FunctionCallInfo fcinfo);
extern Datum similar_escape(FunctionCallInfo fcinfo);
extern Datum mul_d_interval(FunctionCallInfo fcinfo);
extern Datum texticlike(FunctionCallInfo fcinfo);
extern Datum texticnlike(FunctionCallInfo fcinfo);
extern Datum nameiclike(FunctionCallInfo fcinfo);
extern Datum nameicnlike(FunctionCallInfo fcinfo);
extern Datum like_escape(FunctionCallInfo fcinfo);
extern Datum oidgt(FunctionCallInfo fcinfo);
extern Datum oidge(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef_name(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef(FunctionCallInfo fcinfo);
extern Datum pg_get_userbyid(FunctionCallInfo fcinfo);
extern Datum pg_get_indexdef(FunctionCallInfo fcinfo);
extern Datum RI_FKey_check_ins(FunctionCallInfo fcinfo);
extern Datum RI_FKey_check_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_cascade_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_cascade_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_restrict_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_restrict_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_setnull_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_setnull_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_setdefault_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_setdefault_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_noaction_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_noaction_upd(FunctionCallInfo fcinfo);
extern Datum pg_get_triggerdef(FunctionCallInfo fcinfo);
extern Datum pg_get_serial_sequence(FunctionCallInfo fcinfo);
extern Datum bit_and(FunctionCallInfo fcinfo);
extern Datum bit_or(FunctionCallInfo fcinfo);
extern Datum bitxor(FunctionCallInfo fcinfo);
extern Datum bitnot(FunctionCallInfo fcinfo);
extern Datum bitshiftleft(FunctionCallInfo fcinfo);
extern Datum bitshiftright(FunctionCallInfo fcinfo);
extern Datum bitcat(FunctionCallInfo fcinfo);
extern Datum bitsubstr(FunctionCallInfo fcinfo);
extern Datum bitlength(FunctionCallInfo fcinfo);
extern Datum bitoctetlength(FunctionCallInfo fcinfo);
extern Datum bitfromint4(FunctionCallInfo fcinfo);
extern Datum bittoint4(FunctionCallInfo fcinfo);
extern Datum bit(FunctionCallInfo fcinfo);
extern Datum pg_get_keywords(FunctionCallInfo fcinfo);
extern Datum varbit(FunctionCallInfo fcinfo);
extern Datum time_hash(FunctionCallInfo fcinfo);
extern Datum aclexplode(FunctionCallInfo fcinfo);
extern Datum time_mi_time(FunctionCallInfo fcinfo);
extern Datum boolle(FunctionCallInfo fcinfo);
extern Datum boolge(FunctionCallInfo fcinfo);
extern Datum btboolcmp(FunctionCallInfo fcinfo);
extern Datum timetz_hash(FunctionCallInfo fcinfo);
extern Datum interval_hash(FunctionCallInfo fcinfo);
extern Datum bitposition(FunctionCallInfo fcinfo);
extern Datum bitsubstr_no_len(FunctionCallInfo fcinfo);
extern Datum numeric_in(FunctionCallInfo fcinfo);
extern Datum numeric_out(FunctionCallInfo fcinfo);
extern Datum numeric(FunctionCallInfo fcinfo);
extern Datum numeric_abs(FunctionCallInfo fcinfo);
extern Datum numeric_sign(FunctionCallInfo fcinfo);
extern Datum numeric_round(FunctionCallInfo fcinfo);
extern Datum numeric_trunc(FunctionCallInfo fcinfo);
extern Datum numeric_ceil(FunctionCallInfo fcinfo);
extern Datum numeric_floor(FunctionCallInfo fcinfo);
extern Datum length_in_encoding(FunctionCallInfo fcinfo);
extern Datum pg_convert_from(FunctionCallInfo fcinfo);
extern Datum inet_to_cidr(FunctionCallInfo fcinfo);
extern Datum pg_get_expr(FunctionCallInfo fcinfo);
extern Datum pg_convert_to(FunctionCallInfo fcinfo);
extern Datum numeric_eq(FunctionCallInfo fcinfo);
extern Datum numeric_ne(FunctionCallInfo fcinfo);
extern Datum numeric_gt(FunctionCallInfo fcinfo);
extern Datum numeric_ge(FunctionCallInfo fcinfo);
extern Datum numeric_lt(FunctionCallInfo fcinfo);
extern Datum numeric_le(FunctionCallInfo fcinfo);
extern Datum numeric_add(FunctionCallInfo fcinfo);
extern Datum numeric_sub(FunctionCallInfo fcinfo);
extern Datum numeric_mul(FunctionCallInfo fcinfo);
extern Datum numeric_div(FunctionCallInfo fcinfo);
extern Datum numeric_mod(FunctionCallInfo fcinfo);
extern Datum numeric_sqrt(FunctionCallInfo fcinfo);
extern Datum numeric_exp(FunctionCallInfo fcinfo);
extern Datum numeric_ln(FunctionCallInfo fcinfo);
extern Datum numeric_log(FunctionCallInfo fcinfo);
extern Datum numeric_power(FunctionCallInfo fcinfo);
extern Datum int4_numeric(FunctionCallInfo fcinfo);
extern Datum float4_numeric(FunctionCallInfo fcinfo);
extern Datum float8_numeric(FunctionCallInfo fcinfo);
extern Datum numeric_int4(FunctionCallInfo fcinfo);
extern Datum numeric_float4(FunctionCallInfo fcinfo);
extern Datum numeric_float8(FunctionCallInfo fcinfo);
extern Datum time_pl_interval(FunctionCallInfo fcinfo);
extern Datum time_mi_interval(FunctionCallInfo fcinfo);
extern Datum timetz_pl_interval(FunctionCallInfo fcinfo);
extern Datum timetz_mi_interval(FunctionCallInfo fcinfo);
extern Datum numeric_inc(FunctionCallInfo fcinfo);
extern Datum setval3_oid(FunctionCallInfo fcinfo);
extern Datum numeric_smaller(FunctionCallInfo fcinfo);
extern Datum numeric_larger(FunctionCallInfo fcinfo);
extern Datum interval_to_char(FunctionCallInfo fcinfo);
extern Datum numeric_cmp(FunctionCallInfo fcinfo);
extern Datum timestamptz_to_char(FunctionCallInfo fcinfo);
extern Datum numeric_uminus(FunctionCallInfo fcinfo);
extern Datum numeric_to_char(FunctionCallInfo fcinfo);
extern Datum int4_to_char(FunctionCallInfo fcinfo);
extern Datum int8_to_char(FunctionCallInfo fcinfo);
extern Datum float4_to_char(FunctionCallInfo fcinfo);
extern Datum float8_to_char(FunctionCallInfo fcinfo);
extern Datum numeric_to_number(FunctionCallInfo fcinfo);
extern Datum to_timestamp(FunctionCallInfo fcinfo);
extern Datum numeric_int8(FunctionCallInfo fcinfo);
extern Datum to_date(FunctionCallInfo fcinfo);
extern Datum int8_numeric(FunctionCallInfo fcinfo);
extern Datum int2_numeric(FunctionCallInfo fcinfo);
extern Datum numeric_int2(FunctionCallInfo fcinfo);
extern Datum oidin(FunctionCallInfo fcinfo);
extern Datum oidout(FunctionCallInfo fcinfo);
extern Datum pg_convert(FunctionCallInfo fcinfo);
extern Datum iclikesel(FunctionCallInfo fcinfo);
extern Datum icnlikesel(FunctionCallInfo fcinfo);
extern Datum iclikejoinsel(FunctionCallInfo fcinfo);
extern Datum icnlikejoinsel(FunctionCallInfo fcinfo);
extern Datum regexeqsel(FunctionCallInfo fcinfo);
extern Datum likesel(FunctionCallInfo fcinfo);
extern Datum icregexeqsel(FunctionCallInfo fcinfo);
extern Datum regexnesel(FunctionCallInfo fcinfo);
extern Datum nlikesel(FunctionCallInfo fcinfo);
extern Datum icregexnesel(FunctionCallInfo fcinfo);
extern Datum regexeqjoinsel(FunctionCallInfo fcinfo);
extern Datum likejoinsel(FunctionCallInfo fcinfo);
extern Datum icregexeqjoinsel(FunctionCallInfo fcinfo);
extern Datum regexnejoinsel(FunctionCallInfo fcinfo);
extern Datum nlikejoinsel(FunctionCallInfo fcinfo);
extern Datum icregexnejoinsel(FunctionCallInfo fcinfo);
extern Datum float8_avg(FunctionCallInfo fcinfo);
extern Datum float8_var_samp(FunctionCallInfo fcinfo);
extern Datum float8_stddev_samp(FunctionCallInfo fcinfo);
extern Datum numeric_accum(FunctionCallInfo fcinfo);
extern Datum int2_accum(FunctionCallInfo fcinfo);
extern Datum int4_accum(FunctionCallInfo fcinfo);
extern Datum int8_accum(FunctionCallInfo fcinfo);
extern Datum numeric_avg(FunctionCallInfo fcinfo);
extern Datum numeric_var_samp(FunctionCallInfo fcinfo);
extern Datum numeric_stddev_samp(FunctionCallInfo fcinfo);
extern Datum int2_sum(FunctionCallInfo fcinfo);
extern Datum int4_sum(FunctionCallInfo fcinfo);
extern Datum int8_sum(FunctionCallInfo fcinfo);
extern Datum interval_accum(FunctionCallInfo fcinfo);
extern Datum interval_avg(FunctionCallInfo fcinfo);
extern Datum to_ascii_default(FunctionCallInfo fcinfo);
extern Datum to_ascii_enc(FunctionCallInfo fcinfo);
extern Datum to_ascii_encname(FunctionCallInfo fcinfo);
extern Datum int28eq(FunctionCallInfo fcinfo);
extern Datum int28ne(FunctionCallInfo fcinfo);
extern Datum int28lt(FunctionCallInfo fcinfo);
extern Datum int28gt(FunctionCallInfo fcinfo);
extern Datum int28le(FunctionCallInfo fcinfo);
extern Datum int28ge(FunctionCallInfo fcinfo);
extern Datum int82eq(FunctionCallInfo fcinfo);
extern Datum int82ne(FunctionCallInfo fcinfo);
extern Datum int82lt(FunctionCallInfo fcinfo);
extern Datum int82gt(FunctionCallInfo fcinfo);
extern Datum int82le(FunctionCallInfo fcinfo);
extern Datum int82ge(FunctionCallInfo fcinfo);
extern Datum int2and(FunctionCallInfo fcinfo);
extern Datum int2or(FunctionCallInfo fcinfo);
extern Datum int2xor(FunctionCallInfo fcinfo);
extern Datum int2not(FunctionCallInfo fcinfo);
extern Datum int2shl(FunctionCallInfo fcinfo);
extern Datum int2shr(FunctionCallInfo fcinfo);
extern Datum int4and(FunctionCallInfo fcinfo);
extern Datum int4or(FunctionCallInfo fcinfo);
extern Datum int4xor(FunctionCallInfo fcinfo);
extern Datum int4not(FunctionCallInfo fcinfo);
extern Datum int4shl(FunctionCallInfo fcinfo);
extern Datum int4shr(FunctionCallInfo fcinfo);
extern Datum int8and(FunctionCallInfo fcinfo);
extern Datum int8or(FunctionCallInfo fcinfo);
extern Datum int8xor(FunctionCallInfo fcinfo);
extern Datum int8not(FunctionCallInfo fcinfo);
extern Datum int8shl(FunctionCallInfo fcinfo);
extern Datum int8shr(FunctionCallInfo fcinfo);
extern Datum int8up(FunctionCallInfo fcinfo);
extern Datum int2up(FunctionCallInfo fcinfo);
extern Datum int4up(FunctionCallInfo fcinfo);
extern Datum float4up(FunctionCallInfo fcinfo);
extern Datum float8up(FunctionCallInfo fcinfo);
extern Datum numeric_uplus(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_id(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_numscans(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_tuples_returned(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_tuples_fetched(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_tuples_inserted(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_tuples_updated(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_tuples_deleted(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_blocks_fetched(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_blocks_hit(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_idset(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_pid(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_dbid(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_userid(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_activity(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_numbackends(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_xact_commit(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_xact_rollback(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_blocks_fetched(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_blocks_hit(FunctionCallInfo fcinfo);
extern Datum binary_encode(FunctionCallInfo fcinfo);
extern Datum binary_decode(FunctionCallInfo fcinfo);
extern Datum byteaeq(FunctionCallInfo fcinfo);
extern Datum bytealt(FunctionCallInfo fcinfo);
extern Datum byteale(FunctionCallInfo fcinfo);
extern Datum byteagt(FunctionCallInfo fcinfo);
extern Datum byteage(FunctionCallInfo fcinfo);
extern Datum byteane(FunctionCallInfo fcinfo);
extern Datum byteacmp(FunctionCallInfo fcinfo);
extern Datum timestamp_scale(FunctionCallInfo fcinfo);
extern Datum int2_avg_accum(FunctionCallInfo fcinfo);
extern Datum int4_avg_accum(FunctionCallInfo fcinfo);
extern Datum int8_avg(FunctionCallInfo fcinfo);
extern Datum oidlarger(FunctionCallInfo fcinfo);
extern Datum oidsmaller(FunctionCallInfo fcinfo);
extern Datum timestamptz_scale(FunctionCallInfo fcinfo);
extern Datum time_scale(FunctionCallInfo fcinfo);
extern Datum timetz_scale(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_tuples_hot_updated(FunctionCallInfo fcinfo);
extern Datum numeric_div_trunc(FunctionCallInfo fcinfo);
extern Datum bytealike(FunctionCallInfo fcinfo);
extern Datum byteanlike(FunctionCallInfo fcinfo);
extern Datum like_escape_bytea(FunctionCallInfo fcinfo);
extern Datum byteacat(FunctionCallInfo fcinfo);
extern Datum bytea_substr(FunctionCallInfo fcinfo);
extern Datum bytea_substr_no_len(FunctionCallInfo fcinfo);
extern Datum byteapos(FunctionCallInfo fcinfo);
extern Datum byteatrim(FunctionCallInfo fcinfo);
extern Datum timestamptz_time(FunctionCallInfo fcinfo);
extern Datum timestamp_trunc(FunctionCallInfo fcinfo);
extern Datum timestamp_part(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_activity(FunctionCallInfo fcinfo);
extern Datum abstime_timestamp(FunctionCallInfo fcinfo);
extern Datum date_timestamp(FunctionCallInfo fcinfo);
extern Datum pg_backend_pid(FunctionCallInfo fcinfo);
extern Datum timestamptz_timestamp(FunctionCallInfo fcinfo);
extern Datum timestamp_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamp_date(FunctionCallInfo fcinfo);
extern Datum timestamp_abstime(FunctionCallInfo fcinfo);
extern Datum timestamp_pl_interval(FunctionCallInfo fcinfo);
extern Datum timestamp_mi_interval(FunctionCallInfo fcinfo);
extern Datum pg_conf_load_time(FunctionCallInfo fcinfo);
extern Datum timetz_zone(FunctionCallInfo fcinfo);
extern Datum timetz_izone(FunctionCallInfo fcinfo);
extern Datum timestamp_hash(FunctionCallInfo fcinfo);
extern Datum timetz_time(FunctionCallInfo fcinfo);
extern Datum time_timetz(FunctionCallInfo fcinfo);
extern Datum timestamp_to_char(FunctionCallInfo fcinfo);
extern Datum aggregate_dummy(FunctionCallInfo fcinfo);
extern Datum timestamp_age(FunctionCallInfo fcinfo);
extern Datum timestamp_zone(FunctionCallInfo fcinfo);
extern Datum timestamp_izone(FunctionCallInfo fcinfo);
extern Datum date_pl_interval(FunctionCallInfo fcinfo);
extern Datum date_mi_interval(FunctionCallInfo fcinfo);
extern Datum textregexsubstr(FunctionCallInfo fcinfo);
extern Datum bitfromint8(FunctionCallInfo fcinfo);
extern Datum bittoint8(FunctionCallInfo fcinfo);
extern Datum show_config_by_name(FunctionCallInfo fcinfo);
extern Datum set_config_by_name(FunctionCallInfo fcinfo);
extern Datum pg_table_is_visible(FunctionCallInfo fcinfo);
extern Datum pg_type_is_visible(FunctionCallInfo fcinfo);
extern Datum pg_function_is_visible(FunctionCallInfo fcinfo);
extern Datum pg_operator_is_visible(FunctionCallInfo fcinfo);
extern Datum pg_opclass_is_visible(FunctionCallInfo fcinfo);
extern Datum show_all_settings(FunctionCallInfo fcinfo);
extern Datum replace_text(FunctionCallInfo fcinfo);
extern Datum split_text(FunctionCallInfo fcinfo);
extern Datum to_hex32(FunctionCallInfo fcinfo);
extern Datum to_hex64(FunctionCallInfo fcinfo);
extern Datum array_lower(FunctionCallInfo fcinfo);
extern Datum array_upper(FunctionCallInfo fcinfo);
extern Datum pg_conversion_is_visible(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_activity_start(FunctionCallInfo fcinfo);
extern Datum pg_terminate_backend(FunctionCallInfo fcinfo);
extern Datum pg_get_functiondef(FunctionCallInfo fcinfo);
extern Datum text_pattern_lt(FunctionCallInfo fcinfo);
extern Datum text_pattern_le(FunctionCallInfo fcinfo);
extern Datum pg_get_function_arguments(FunctionCallInfo fcinfo);
extern Datum text_pattern_ge(FunctionCallInfo fcinfo);
extern Datum text_pattern_gt(FunctionCallInfo fcinfo);
extern Datum pg_get_function_result(FunctionCallInfo fcinfo);
extern Datum bttext_pattern_cmp(FunctionCallInfo fcinfo);
extern Datum pg_database_size_name(FunctionCallInfo fcinfo);
extern Datum width_bucket_numeric(FunctionCallInfo fcinfo);
extern Datum pg_cancel_backend(FunctionCallInfo fcinfo);
extern Datum pg_start_backup(FunctionCallInfo fcinfo);
extern Datum pg_stop_backup(FunctionCallInfo fcinfo);
extern Datum bpchar_pattern_lt(FunctionCallInfo fcinfo);
extern Datum bpchar_pattern_le(FunctionCallInfo fcinfo);
extern Datum array_length(FunctionCallInfo fcinfo);
extern Datum bpchar_pattern_ge(FunctionCallInfo fcinfo);
extern Datum bpchar_pattern_gt(FunctionCallInfo fcinfo);
extern Datum gist_point_consistent(FunctionCallInfo fcinfo);
extern Datum btbpchar_pattern_cmp(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_id(FunctionCallInfo fcinfo);
extern Datum btint48cmp(FunctionCallInfo fcinfo);
extern Datum btint84cmp(FunctionCallInfo fcinfo);
extern Datum btint24cmp(FunctionCallInfo fcinfo);
extern Datum btint42cmp(FunctionCallInfo fcinfo);
extern Datum btint28cmp(FunctionCallInfo fcinfo);
extern Datum btint82cmp(FunctionCallInfo fcinfo);
extern Datum btfloat48cmp(FunctionCallInfo fcinfo);
extern Datum btfloat84cmp(FunctionCallInfo fcinfo);
extern Datum inet_client_addr(FunctionCallInfo fcinfo);
extern Datum inet_client_port(FunctionCallInfo fcinfo);
extern Datum inet_server_addr(FunctionCallInfo fcinfo);
extern Datum inet_server_port(FunctionCallInfo fcinfo);
extern Datum regprocedurein(FunctionCallInfo fcinfo);
extern Datum regprocedureout(FunctionCallInfo fcinfo);
extern Datum regoperin(FunctionCallInfo fcinfo);
extern Datum regoperout(FunctionCallInfo fcinfo);
extern Datum regoperatorin(FunctionCallInfo fcinfo);
extern Datum regoperatorout(FunctionCallInfo fcinfo);
extern Datum regclassin(FunctionCallInfo fcinfo);
extern Datum regclassout(FunctionCallInfo fcinfo);
extern Datum regtypein(FunctionCallInfo fcinfo);
extern Datum regtypeout(FunctionCallInfo fcinfo);
extern Datum pg_stat_clear_snapshot(FunctionCallInfo fcinfo);
extern Datum pg_get_function_identity_arguments(FunctionCallInfo fcinfo);
extern Datum fmgr_internal_validator(FunctionCallInfo fcinfo);
extern Datum fmgr_c_validator(FunctionCallInfo fcinfo);
extern Datum fmgr_sql_validator(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_id(FunctionCallInfo fcinfo);
extern Datum pg_stat_reset(FunctionCallInfo fcinfo);
extern Datum textregexreplace_noopt(FunctionCallInfo fcinfo);
extern Datum textregexreplace(FunctionCallInfo fcinfo);
extern Datum pg_total_relation_size(FunctionCallInfo fcinfo);
extern Datum pg_size_pretty(FunctionCallInfo fcinfo);
extern Datum pg_options_to_table(FunctionCallInfo fcinfo);
extern Datum record_in(FunctionCallInfo fcinfo);
extern Datum record_out(FunctionCallInfo fcinfo);
extern Datum cstring_in(FunctionCallInfo fcinfo);
extern Datum cstring_out(FunctionCallInfo fcinfo);
extern Datum any_in(FunctionCallInfo fcinfo);
extern Datum any_out(FunctionCallInfo fcinfo);
extern Datum anyarray_in(FunctionCallInfo fcinfo);
extern Datum anyarray_out(FunctionCallInfo fcinfo);
extern Datum void_in(FunctionCallInfo fcinfo);
extern Datum void_out(FunctionCallInfo fcinfo);
extern Datum trigger_in(FunctionCallInfo fcinfo);
extern Datum trigger_out(FunctionCallInfo fcinfo);
extern Datum language_handler_in(FunctionCallInfo fcinfo);
extern Datum language_handler_out(FunctionCallInfo fcinfo);
extern Datum internal_in(FunctionCallInfo fcinfo);
extern Datum internal_out(FunctionCallInfo fcinfo);
extern Datum opaque_in(FunctionCallInfo fcinfo);
extern Datum opaque_out(FunctionCallInfo fcinfo);
extern Datum dceil(FunctionCallInfo fcinfo);
extern Datum dfloor(FunctionCallInfo fcinfo);
extern Datum dsign(FunctionCallInfo fcinfo);
extern Datum md5_text(FunctionCallInfo fcinfo);
extern Datum anyelement_in(FunctionCallInfo fcinfo);
extern Datum anyelement_out(FunctionCallInfo fcinfo);
extern Datum postgresql_fdw_validator(FunctionCallInfo fcinfo);
extern Datum pg_encoding_max_length_sql(FunctionCallInfo fcinfo);
extern Datum md5_bytea(FunctionCallInfo fcinfo);
extern Datum pg_tablespace_size_oid(FunctionCallInfo fcinfo);
extern Datum pg_tablespace_size_name(FunctionCallInfo fcinfo);
extern Datum pg_database_size_oid(FunctionCallInfo fcinfo);
extern Datum array_unnest(FunctionCallInfo fcinfo);
extern Datum pg_relation_size(FunctionCallInfo fcinfo);
extern Datum array_agg_transfn(FunctionCallInfo fcinfo);
extern Datum array_agg_finalfn(FunctionCallInfo fcinfo);
extern Datum date_lt_timestamp(FunctionCallInfo fcinfo);
extern Datum date_le_timestamp(FunctionCallInfo fcinfo);
extern Datum date_eq_timestamp(FunctionCallInfo fcinfo);
extern Datum date_gt_timestamp(FunctionCallInfo fcinfo);
extern Datum date_ge_timestamp(FunctionCallInfo fcinfo);
extern Datum date_ne_timestamp(FunctionCallInfo fcinfo);
extern Datum date_cmp_timestamp(FunctionCallInfo fcinfo);
extern Datum date_lt_timestamptz(FunctionCallInfo fcinfo);
extern Datum date_le_timestamptz(FunctionCallInfo fcinfo);
extern Datum date_eq_timestamptz(FunctionCallInfo fcinfo);
extern Datum date_gt_timestamptz(FunctionCallInfo fcinfo);
extern Datum date_ge_timestamptz(FunctionCallInfo fcinfo);
extern Datum date_ne_timestamptz(FunctionCallInfo fcinfo);
extern Datum date_cmp_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamp_lt_date(FunctionCallInfo fcinfo);
extern Datum timestamp_le_date(FunctionCallInfo fcinfo);
extern Datum timestamp_eq_date(FunctionCallInfo fcinfo);
extern Datum timestamp_gt_date(FunctionCallInfo fcinfo);
extern Datum timestamp_ge_date(FunctionCallInfo fcinfo);
extern Datum timestamp_ne_date(FunctionCallInfo fcinfo);
extern Datum timestamp_cmp_date(FunctionCallInfo fcinfo);
extern Datum timestamptz_lt_date(FunctionCallInfo fcinfo);
extern Datum timestamptz_le_date(FunctionCallInfo fcinfo);
extern Datum timestamptz_eq_date(FunctionCallInfo fcinfo);
extern Datum timestamptz_gt_date(FunctionCallInfo fcinfo);
extern Datum timestamptz_ge_date(FunctionCallInfo fcinfo);
extern Datum timestamptz_ne_date(FunctionCallInfo fcinfo);
extern Datum timestamptz_cmp_date(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_id(FunctionCallInfo fcinfo);
extern Datum shell_in(FunctionCallInfo fcinfo);
extern Datum shell_out(FunctionCallInfo fcinfo);
extern Datum array_recv(FunctionCallInfo fcinfo);
extern Datum array_send(FunctionCallInfo fcinfo);
extern Datum record_recv(FunctionCallInfo fcinfo);
extern Datum record_send(FunctionCallInfo fcinfo);
extern Datum int2recv(FunctionCallInfo fcinfo);
extern Datum int2send(FunctionCallInfo fcinfo);
extern Datum int4recv(FunctionCallInfo fcinfo);
extern Datum int4send(FunctionCallInfo fcinfo);
extern Datum int8recv(FunctionCallInfo fcinfo);
extern Datum int8send(FunctionCallInfo fcinfo);
extern Datum int2vectorrecv(FunctionCallInfo fcinfo);
extern Datum int2vectorsend(FunctionCallInfo fcinfo);
extern Datum bytearecv(FunctionCallInfo fcinfo);
extern Datum byteasend(FunctionCallInfo fcinfo);
extern Datum textrecv(FunctionCallInfo fcinfo);
extern Datum textsend(FunctionCallInfo fcinfo);
extern Datum unknownrecv(FunctionCallInfo fcinfo);
extern Datum unknownsend(FunctionCallInfo fcinfo);
extern Datum oidrecv(FunctionCallInfo fcinfo);
extern Datum oidsend(FunctionCallInfo fcinfo);
extern Datum oidvectorrecv(FunctionCallInfo fcinfo);
extern Datum oidvectorsend(FunctionCallInfo fcinfo);
extern Datum namerecv(FunctionCallInfo fcinfo);
extern Datum namesend(FunctionCallInfo fcinfo);
extern Datum float4recv(FunctionCallInfo fcinfo);
extern Datum float4send(FunctionCallInfo fcinfo);
extern Datum float8recv(FunctionCallInfo fcinfo);
extern Datum float8send(FunctionCallInfo fcinfo);
extern Datum point_recv(FunctionCallInfo fcinfo);
extern Datum point_send(FunctionCallInfo fcinfo);
extern Datum bpcharrecv(FunctionCallInfo fcinfo);
extern Datum bpcharsend(FunctionCallInfo fcinfo);
extern Datum varcharrecv(FunctionCallInfo fcinfo);
extern Datum varcharsend(FunctionCallInfo fcinfo);
extern Datum charrecv(FunctionCallInfo fcinfo);
extern Datum charsend(FunctionCallInfo fcinfo);
extern Datum boolrecv(FunctionCallInfo fcinfo);
extern Datum boolsend(FunctionCallInfo fcinfo);
extern Datum tidrecv(FunctionCallInfo fcinfo);
extern Datum tidsend(FunctionCallInfo fcinfo);
extern Datum xidrecv(FunctionCallInfo fcinfo);
extern Datum xidsend(FunctionCallInfo fcinfo);
extern Datum cidrecv(FunctionCallInfo fcinfo);
extern Datum cidsend(FunctionCallInfo fcinfo);
extern Datum regprocrecv(FunctionCallInfo fcinfo);
extern Datum regprocsend(FunctionCallInfo fcinfo);
extern Datum regprocedurerecv(FunctionCallInfo fcinfo);
extern Datum regproceduresend(FunctionCallInfo fcinfo);
extern Datum regoperrecv(FunctionCallInfo fcinfo);
extern Datum regopersend(FunctionCallInfo fcinfo);
extern Datum regoperatorrecv(FunctionCallInfo fcinfo);
extern Datum regoperatorsend(FunctionCallInfo fcinfo);
extern Datum regclassrecv(FunctionCallInfo fcinfo);
extern Datum regclasssend(FunctionCallInfo fcinfo);
extern Datum regtyperecv(FunctionCallInfo fcinfo);
extern Datum regtypesend(FunctionCallInfo fcinfo);
extern Datum bit_recv(FunctionCallInfo fcinfo);
extern Datum bit_send(FunctionCallInfo fcinfo);
extern Datum varbit_recv(FunctionCallInfo fcinfo);
extern Datum varbit_send(FunctionCallInfo fcinfo);
extern Datum numeric_recv(FunctionCallInfo fcinfo);
extern Datum numeric_send(FunctionCallInfo fcinfo);
extern Datum abstimerecv(FunctionCallInfo fcinfo);
extern Datum abstimesend(FunctionCallInfo fcinfo);
extern Datum reltimerecv(FunctionCallInfo fcinfo);
extern Datum reltimesend(FunctionCallInfo fcinfo);
extern Datum tintervalrecv(FunctionCallInfo fcinfo);
extern Datum tintervalsend(FunctionCallInfo fcinfo);
extern Datum date_recv(FunctionCallInfo fcinfo);
extern Datum date_send(FunctionCallInfo fcinfo);
extern Datum time_recv(FunctionCallInfo fcinfo);
extern Datum time_send(FunctionCallInfo fcinfo);
extern Datum timetz_recv(FunctionCallInfo fcinfo);
extern Datum timetz_send(FunctionCallInfo fcinfo);
extern Datum timestamp_recv(FunctionCallInfo fcinfo);
extern Datum timestamp_send(FunctionCallInfo fcinfo);
extern Datum timestamptz_recv(FunctionCallInfo fcinfo);
extern Datum timestamptz_send(FunctionCallInfo fcinfo);
extern Datum interval_recv(FunctionCallInfo fcinfo);
extern Datum interval_send(FunctionCallInfo fcinfo);
extern Datum lseg_recv(FunctionCallInfo fcinfo);
extern Datum lseg_send(FunctionCallInfo fcinfo);
extern Datum path_recv(FunctionCallInfo fcinfo);
extern Datum path_send(FunctionCallInfo fcinfo);
extern Datum box_recv(FunctionCallInfo fcinfo);
extern Datum box_send(FunctionCallInfo fcinfo);
extern Datum poly_recv(FunctionCallInfo fcinfo);
extern Datum poly_send(FunctionCallInfo fcinfo);
extern Datum line_recv(FunctionCallInfo fcinfo);
extern Datum line_send(FunctionCallInfo fcinfo);
extern Datum circle_recv(FunctionCallInfo fcinfo);
extern Datum circle_send(FunctionCallInfo fcinfo);
extern Datum cash_recv(FunctionCallInfo fcinfo);
extern Datum cash_send(FunctionCallInfo fcinfo);
extern Datum macaddr_recv(FunctionCallInfo fcinfo);
extern Datum macaddr_send(FunctionCallInfo fcinfo);
extern Datum inet_recv(FunctionCallInfo fcinfo);
extern Datum inet_send(FunctionCallInfo fcinfo);
extern Datum cidr_recv(FunctionCallInfo fcinfo);
extern Datum cidr_send(FunctionCallInfo fcinfo);
extern Datum cstring_recv(FunctionCallInfo fcinfo);
extern Datum cstring_send(FunctionCallInfo fcinfo);
extern Datum anyarray_recv(FunctionCallInfo fcinfo);
extern Datum anyarray_send(FunctionCallInfo fcinfo);
extern Datum pg_get_ruledef_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef_name_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_indexdef_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_constraintdef_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_expr_ext(FunctionCallInfo fcinfo);
extern Datum pg_prepared_statement(FunctionCallInfo fcinfo);
extern Datum pg_cursor(FunctionCallInfo fcinfo);
extern Datum float8_var_pop(FunctionCallInfo fcinfo);
extern Datum float8_stddev_pop(FunctionCallInfo fcinfo);
extern Datum numeric_var_pop(FunctionCallInfo fcinfo);
extern Datum booland_statefunc(FunctionCallInfo fcinfo);
extern Datum boolor_statefunc(FunctionCallInfo fcinfo);
extern Datum timestamp_lt_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamp_le_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamp_eq_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamp_gt_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamp_ge_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamp_ne_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamp_cmp_timestamptz(FunctionCallInfo fcinfo);
extern Datum timestamptz_lt_timestamp(FunctionCallInfo fcinfo);
extern Datum timestamptz_le_timestamp(FunctionCallInfo fcinfo);
extern Datum timestamptz_eq_timestamp(FunctionCallInfo fcinfo);
extern Datum timestamptz_gt_timestamp(FunctionCallInfo fcinfo);
extern Datum timestamptz_ge_timestamp(FunctionCallInfo fcinfo);
extern Datum timestamptz_ne_timestamp(FunctionCallInfo fcinfo);
extern Datum timestamptz_cmp_timestamp(FunctionCallInfo fcinfo);
extern Datum pg_tablespace_databases(FunctionCallInfo fcinfo);
extern Datum int4_bool(FunctionCallInfo fcinfo);
extern Datum bool_int4(FunctionCallInfo fcinfo);
extern Datum lastval(FunctionCallInfo fcinfo);
extern Datum pg_postmaster_start_time(FunctionCallInfo fcinfo);
extern Datum pg_blocking_pids(FunctionCallInfo fcinfo);
extern Datum box_below(FunctionCallInfo fcinfo);
extern Datum box_overbelow(FunctionCallInfo fcinfo);
extern Datum box_overabove(FunctionCallInfo fcinfo);
extern Datum box_above(FunctionCallInfo fcinfo);
extern Datum poly_below(FunctionCallInfo fcinfo);
extern Datum poly_overbelow(FunctionCallInfo fcinfo);
extern Datum poly_overabove(FunctionCallInfo fcinfo);
extern Datum poly_above(FunctionCallInfo fcinfo);
extern Datum gist_box_consistent(FunctionCallInfo fcinfo);
extern Datum jsonb_float8(FunctionCallInfo fcinfo);
extern Datum gist_box_penalty(FunctionCallInfo fcinfo);
extern Datum gist_box_picksplit(FunctionCallInfo fcinfo);
extern Datum gist_box_union(FunctionCallInfo fcinfo);
extern Datum gist_box_same(FunctionCallInfo fcinfo);
extern Datum gist_poly_consistent(FunctionCallInfo fcinfo);
extern Datum gist_poly_compress(FunctionCallInfo fcinfo);
extern Datum circle_overbelow(FunctionCallInfo fcinfo);
extern Datum circle_overabove(FunctionCallInfo fcinfo);
extern Datum gist_circle_consistent(FunctionCallInfo fcinfo);
extern Datum gist_circle_compress(FunctionCallInfo fcinfo);
extern Datum numeric_stddev_pop(FunctionCallInfo fcinfo);
extern Datum domain_in(FunctionCallInfo fcinfo);
extern Datum domain_recv(FunctionCallInfo fcinfo);
extern Datum pg_timezone_abbrevs(FunctionCallInfo fcinfo);
extern Datum xmlexists(FunctionCallInfo fcinfo);
extern Datum pg_reload_conf(FunctionCallInfo fcinfo);
extern Datum pg_rotate_logfile_v2(FunctionCallInfo fcinfo);
extern Datum pg_stat_file_1arg(FunctionCallInfo fcinfo);
extern Datum pg_read_file_off_len(FunctionCallInfo fcinfo);
extern Datum pg_ls_dir_1arg(FunctionCallInfo fcinfo);
extern Datum pg_sleep(FunctionCallInfo fcinfo);
extern Datum inetnot(FunctionCallInfo fcinfo);
extern Datum inetand(FunctionCallInfo fcinfo);
extern Datum inetor(FunctionCallInfo fcinfo);
extern Datum inetpl(FunctionCallInfo fcinfo);
extern Datum inetmi_int8(FunctionCallInfo fcinfo);
extern Datum inetmi(FunctionCallInfo fcinfo);
extern Datum statement_timestamp(FunctionCallInfo fcinfo);
extern Datum clock_timestamp(FunctionCallInfo fcinfo);
extern Datum gin_cmp_prefix(FunctionCallInfo fcinfo);
extern Datum pg_has_role_name_name(FunctionCallInfo fcinfo);
extern Datum pg_has_role_name_id(FunctionCallInfo fcinfo);
extern Datum pg_has_role_id_name(FunctionCallInfo fcinfo);
extern Datum pg_has_role_id_id(FunctionCallInfo fcinfo);
extern Datum pg_has_role_name(FunctionCallInfo fcinfo);
extern Datum pg_has_role_id(FunctionCallInfo fcinfo);
extern Datum interval_justify_interval(FunctionCallInfo fcinfo);
extern Datum pg_get_triggerdef_ext(FunctionCallInfo fcinfo);
extern Datum dasind(FunctionCallInfo fcinfo);
extern Datum dacosd(FunctionCallInfo fcinfo);
extern Datum datand(FunctionCallInfo fcinfo);
extern Datum datan2d(FunctionCallInfo fcinfo);
extern Datum dsind(FunctionCallInfo fcinfo);
extern Datum dcosd(FunctionCallInfo fcinfo);
extern Datum dtand(FunctionCallInfo fcinfo);
extern Datum dcotd(FunctionCallInfo fcinfo);
extern Datum pg_stop_backup_v2(FunctionCallInfo fcinfo);
extern Datum numeric_avg_serialize(FunctionCallInfo fcinfo);
extern Datum numeric_avg_deserialize(FunctionCallInfo fcinfo);
extern Datum ginarrayextract(FunctionCallInfo fcinfo);
extern Datum ginarrayconsistent(FunctionCallInfo fcinfo);
extern Datum int8_avg_accum(FunctionCallInfo fcinfo);
extern Datum arrayoverlap(FunctionCallInfo fcinfo);
extern Datum arraycontains(FunctionCallInfo fcinfo);
extern Datum arraycontained(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_tuples_returned(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_tuples_fetched(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_tuples_inserted(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_tuples_updated(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_tuples_deleted(FunctionCallInfo fcinfo);
extern Datum regexp_matches_no_flags(FunctionCallInfo fcinfo);
extern Datum regexp_matches(FunctionCallInfo fcinfo);
extern Datum regexp_split_to_table_no_flags(FunctionCallInfo fcinfo);
extern Datum regexp_split_to_table(FunctionCallInfo fcinfo);
extern Datum regexp_split_to_array_no_flags(FunctionCallInfo fcinfo);
extern Datum regexp_split_to_array(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_bgwriter_timed_checkpoints(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_bgwriter_requested_checkpoints(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_bgwriter_buf_written_checkpoints(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_bgwriter_buf_written_clean(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_bgwriter_maxwritten_clean(FunctionCallInfo fcinfo);
extern Datum ginqueryarrayextract(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_buf_written_backend(FunctionCallInfo fcinfo);
extern Datum anynonarray_in(FunctionCallInfo fcinfo);
extern Datum anynonarray_out(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_last_vacuum_time(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_last_autovacuum_time(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_last_analyze_time(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_last_autoanalyze_time(FunctionCallInfo fcinfo);
extern Datum int8_avg_combine(FunctionCallInfo fcinfo);
extern Datum int8_avg_serialize(FunctionCallInfo fcinfo);
extern Datum int8_avg_deserialize(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_wait_event_type(FunctionCallInfo fcinfo);
extern Datum tidgt(FunctionCallInfo fcinfo);
extern Datum tidlt(FunctionCallInfo fcinfo);
extern Datum tidge(FunctionCallInfo fcinfo);
extern Datum tidle(FunctionCallInfo fcinfo);
extern Datum bttidcmp(FunctionCallInfo fcinfo);
extern Datum tidlarger(FunctionCallInfo fcinfo);
extern Datum tidsmaller(FunctionCallInfo fcinfo);
extern Datum int8inc_any(FunctionCallInfo fcinfo);
extern Datum int8inc_float8_float8(FunctionCallInfo fcinfo);
extern Datum float8_regr_accum(FunctionCallInfo fcinfo);
extern Datum float8_regr_sxx(FunctionCallInfo fcinfo);
extern Datum float8_regr_syy(FunctionCallInfo fcinfo);
extern Datum float8_regr_sxy(FunctionCallInfo fcinfo);
extern Datum float8_regr_avgx(FunctionCallInfo fcinfo);
extern Datum float8_regr_avgy(FunctionCallInfo fcinfo);
extern Datum float8_regr_r2(FunctionCallInfo fcinfo);
extern Datum float8_regr_slope(FunctionCallInfo fcinfo);
extern Datum float8_regr_intercept(FunctionCallInfo fcinfo);
extern Datum float8_covar_pop(FunctionCallInfo fcinfo);
extern Datum float8_covar_samp(FunctionCallInfo fcinfo);
extern Datum float8_corr(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_blk_read_time(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_blk_write_time(FunctionCallInfo fcinfo);
extern Datum pg_switch_wal(FunctionCallInfo fcinfo);
extern Datum pg_current_wal_lsn(FunctionCallInfo fcinfo);
extern Datum pg_walfile_name_offset(FunctionCallInfo fcinfo);
extern Datum pg_walfile_name(FunctionCallInfo fcinfo);
extern Datum pg_current_wal_insert_lsn(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_wait_event(FunctionCallInfo fcinfo);
extern Datum pg_my_temp_schema(FunctionCallInfo fcinfo);
extern Datum pg_is_other_temp_schema(FunctionCallInfo fcinfo);
extern Datum pg_timezone_names(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_backend_xact_start(FunctionCallInfo fcinfo);
extern Datum numeric_avg_accum(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_buf_alloc(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_live_tuples(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_dead_tuples(FunctionCallInfo fcinfo);
extern Datum pg_advisory_lock_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_lock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_lock_int8(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_lock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_lock_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_lock_shared_int4(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_lock_int4(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_lock_shared_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_shared_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_all(FunctionCallInfo fcinfo);
extern Datum xml_in(FunctionCallInfo fcinfo);
extern Datum xml_out(FunctionCallInfo fcinfo);
extern Datum xmlcomment(FunctionCallInfo fcinfo);
extern Datum texttoxml(FunctionCallInfo fcinfo);
extern Datum xmlvalidate(FunctionCallInfo fcinfo);
extern Datum xml_recv(FunctionCallInfo fcinfo);
extern Datum xml_send(FunctionCallInfo fcinfo);
extern Datum xmlconcat2(FunctionCallInfo fcinfo);
extern Datum varbittypmodin(FunctionCallInfo fcinfo);
extern Datum intervaltypmodin(FunctionCallInfo fcinfo);
extern Datum intervaltypmodout(FunctionCallInfo fcinfo);
extern Datum timestamptypmodin(FunctionCallInfo fcinfo);
extern Datum timestamptypmodout(FunctionCallInfo fcinfo);
extern Datum timestamptztypmodin(FunctionCallInfo fcinfo);
extern Datum timestamptztypmodout(FunctionCallInfo fcinfo);
extern Datum timetypmodin(FunctionCallInfo fcinfo);
extern Datum timetypmodout(FunctionCallInfo fcinfo);
extern Datum timetztypmodin(FunctionCallInfo fcinfo);
extern Datum timetztypmodout(FunctionCallInfo fcinfo);
extern Datum bpchartypmodin(FunctionCallInfo fcinfo);
extern Datum bpchartypmodout(FunctionCallInfo fcinfo);
extern Datum varchartypmodin(FunctionCallInfo fcinfo);
extern Datum varchartypmodout(FunctionCallInfo fcinfo);
extern Datum numerictypmodin(FunctionCallInfo fcinfo);
extern Datum numerictypmodout(FunctionCallInfo fcinfo);
extern Datum bittypmodin(FunctionCallInfo fcinfo);
extern Datum bittypmodout(FunctionCallInfo fcinfo);
extern Datum varbittypmodout(FunctionCallInfo fcinfo);
extern Datum xmltotext(FunctionCallInfo fcinfo);
extern Datum table_to_xml(FunctionCallInfo fcinfo);
extern Datum query_to_xml(FunctionCallInfo fcinfo);
extern Datum cursor_to_xml(FunctionCallInfo fcinfo);
extern Datum table_to_xmlschema(FunctionCallInfo fcinfo);
extern Datum query_to_xmlschema(FunctionCallInfo fcinfo);
extern Datum cursor_to_xmlschema(FunctionCallInfo fcinfo);
extern Datum table_to_xml_and_xmlschema(FunctionCallInfo fcinfo);
extern Datum query_to_xml_and_xmlschema(FunctionCallInfo fcinfo);
extern Datum xpath(FunctionCallInfo fcinfo);
extern Datum schema_to_xml(FunctionCallInfo fcinfo);
extern Datum schema_to_xmlschema(FunctionCallInfo fcinfo);
extern Datum schema_to_xml_and_xmlschema(FunctionCallInfo fcinfo);
extern Datum database_to_xml(FunctionCallInfo fcinfo);
extern Datum database_to_xmlschema(FunctionCallInfo fcinfo);
extern Datum database_to_xml_and_xmlschema(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_in(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_out(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_recv(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_send(FunctionCallInfo fcinfo);
extern Datum txid_current(FunctionCallInfo fcinfo);
extern Datum txid_current_snapshot(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_xmin(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_xmax(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_xip(FunctionCallInfo fcinfo);
extern Datum txid_visible_in_snapshot(FunctionCallInfo fcinfo);
extern Datum uuid_in(FunctionCallInfo fcinfo);
extern Datum uuid_out(FunctionCallInfo fcinfo);
extern Datum uuid_lt(FunctionCallInfo fcinfo);
extern Datum uuid_le(FunctionCallInfo fcinfo);
extern Datum uuid_eq(FunctionCallInfo fcinfo);
extern Datum uuid_ge(FunctionCallInfo fcinfo);
extern Datum uuid_gt(FunctionCallInfo fcinfo);
extern Datum uuid_ne(FunctionCallInfo fcinfo);
extern Datum uuid_cmp(FunctionCallInfo fcinfo);
extern Datum uuid_recv(FunctionCallInfo fcinfo);
extern Datum uuid_send(FunctionCallInfo fcinfo);
extern Datum uuid_hash(FunctionCallInfo fcinfo);
extern Datum booltext(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_function_calls(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_function_total_time(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_function_self_time(FunctionCallInfo fcinfo);
extern Datum record_eq(FunctionCallInfo fcinfo);
extern Datum record_ne(FunctionCallInfo fcinfo);
extern Datum record_lt(FunctionCallInfo fcinfo);
extern Datum record_gt(FunctionCallInfo fcinfo);
extern Datum record_le(FunctionCallInfo fcinfo);
extern Datum record_ge(FunctionCallInfo fcinfo);
extern Datum btrecordcmp(FunctionCallInfo fcinfo);
extern Datum pg_table_size(FunctionCallInfo fcinfo);
extern Datum pg_indexes_size(FunctionCallInfo fcinfo);
extern Datum pg_relation_filenode(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_name_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_name_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_id_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_id_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_name_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_name_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_id_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_id_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_attnum(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_id(FunctionCallInfo fcinfo);
extern Datum bitoverlay(FunctionCallInfo fcinfo);
extern Datum bitoverlay_no_len(FunctionCallInfo fcinfo);
extern Datum bitgetbit(FunctionCallInfo fcinfo);
extern Datum bitsetbit(FunctionCallInfo fcinfo);
extern Datum pg_relation_filepath(FunctionCallInfo fcinfo);
extern Datum pg_listening_channels(FunctionCallInfo fcinfo);
extern Datum pg_notify(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_numscans(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_tuples_returned(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_tuples_fetched(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_tuples_inserted(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_tuples_updated(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_tuples_deleted(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_tuples_hot_updated(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_blocks_fetched(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_blocks_hit(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_function_calls(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_function_total_time(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_xact_function_self_time(FunctionCallInfo fcinfo);
extern Datum xpath_exists(FunctionCallInfo fcinfo);
extern Datum xml_is_well_formed(FunctionCallInfo fcinfo);
extern Datum xml_is_well_formed_document(FunctionCallInfo fcinfo);
extern Datum xml_is_well_formed_content(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_vacuum_count(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_autovacuum_count(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_analyze_count(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_autoanalyze_count(FunctionCallInfo fcinfo);
extern Datum text_concat(FunctionCallInfo fcinfo);
extern Datum text_concat_ws(FunctionCallInfo fcinfo);
extern Datum text_left(FunctionCallInfo fcinfo);
extern Datum text_right(FunctionCallInfo fcinfo);
extern Datum text_reverse(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_buf_fsync_backend(FunctionCallInfo fcinfo);
extern Datum gist_point_distance(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_conflict_tablespace(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_conflict_lock(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_conflict_snapshot(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_conflict_bufferpin(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_conflict_startup_deadlock(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_conflict_all(FunctionCallInfo fcinfo);
extern Datum pg_wal_replay_pause(FunctionCallInfo fcinfo);
extern Datum pg_wal_replay_resume(FunctionCallInfo fcinfo);
extern Datum pg_is_wal_replay_paused(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_stat_reset_time(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_bgwriter_stat_reset_time(FunctionCallInfo fcinfo);
extern Datum ginarrayextract_2args(FunctionCallInfo fcinfo);
extern Datum gin_extract_tsvector_2args(FunctionCallInfo fcinfo);
extern Datum pg_sequence_parameters(FunctionCallInfo fcinfo);
extern Datum pg_available_extensions(FunctionCallInfo fcinfo);
extern Datum pg_available_extension_versions(FunctionCallInfo fcinfo);
extern Datum pg_extension_update_paths(FunctionCallInfo fcinfo);
extern Datum pg_extension_config_dump(FunctionCallInfo fcinfo);
extern Datum gin_extract_tsquery_5args(FunctionCallInfo fcinfo);
extern Datum gin_tsquery_consistent_6args(FunctionCallInfo fcinfo);
extern Datum pg_advisory_xact_lock_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_xact_lock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_xact_lock_int8(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_xact_lock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_xact_lock_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_xact_lock_shared_int4(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_xact_lock_int4(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_xact_lock_shared_int4(FunctionCallInfo fcinfo);
extern Datum varchar_transform(FunctionCallInfo fcinfo);
extern Datum pg_create_restore_point(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_wal_senders(FunctionCallInfo fcinfo);
extern Datum window_row_number(FunctionCallInfo fcinfo);
extern Datum window_rank(FunctionCallInfo fcinfo);
extern Datum window_dense_rank(FunctionCallInfo fcinfo);
extern Datum window_percent_rank(FunctionCallInfo fcinfo);
extern Datum window_cume_dist(FunctionCallInfo fcinfo);
extern Datum window_ntile(FunctionCallInfo fcinfo);
extern Datum window_lag(FunctionCallInfo fcinfo);
extern Datum window_lag_with_offset(FunctionCallInfo fcinfo);
extern Datum window_lag_with_offset_and_default(FunctionCallInfo fcinfo);
extern Datum window_lead(FunctionCallInfo fcinfo);
extern Datum window_lead_with_offset(FunctionCallInfo fcinfo);
extern Datum window_lead_with_offset_and_default(FunctionCallInfo fcinfo);
extern Datum window_first_value(FunctionCallInfo fcinfo);
extern Datum window_last_value(FunctionCallInfo fcinfo);
extern Datum window_nth_value(FunctionCallInfo fcinfo);
extern Datum fdw_handler_in(FunctionCallInfo fcinfo);
extern Datum fdw_handler_out(FunctionCallInfo fcinfo);
extern Datum void_recv(FunctionCallInfo fcinfo);
extern Datum void_send(FunctionCallInfo fcinfo);
extern Datum btint2sortsupport(FunctionCallInfo fcinfo);
extern Datum btint4sortsupport(FunctionCallInfo fcinfo);
extern Datum btint8sortsupport(FunctionCallInfo fcinfo);
extern Datum btfloat4sortsupport(FunctionCallInfo fcinfo);
extern Datum btfloat8sortsupport(FunctionCallInfo fcinfo);
extern Datum btoidsortsupport(FunctionCallInfo fcinfo);
extern Datum btnamesortsupport(FunctionCallInfo fcinfo);
extern Datum date_sortsupport(FunctionCallInfo fcinfo);
extern Datum timestamp_sortsupport(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_id(FunctionCallInfo fcinfo);
extern Datum macaddr_not(FunctionCallInfo fcinfo);
extern Datum macaddr_and(FunctionCallInfo fcinfo);
extern Datum macaddr_or(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_temp_files(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_temp_bytes(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_db_deadlocks(FunctionCallInfo fcinfo);
extern Datum array_to_json(FunctionCallInfo fcinfo);
extern Datum array_to_json_pretty(FunctionCallInfo fcinfo);
extern Datum row_to_json(FunctionCallInfo fcinfo);
extern Datum row_to_json_pretty(FunctionCallInfo fcinfo);
extern Datum numeric_transform(FunctionCallInfo fcinfo);
extern Datum varbit_transform(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef_wrap(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_checkpoint_write_time(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_checkpoint_sync_time(FunctionCallInfo fcinfo);
extern Datum pg_collation_for(FunctionCallInfo fcinfo);
extern Datum pg_trigger_depth(FunctionCallInfo fcinfo);
extern Datum pg_wal_lsn_diff(FunctionCallInfo fcinfo);
extern Datum pg_size_pretty_numeric(FunctionCallInfo fcinfo);
extern Datum array_remove(FunctionCallInfo fcinfo);
extern Datum array_replace(FunctionCallInfo fcinfo);
extern Datum rangesel(FunctionCallInfo fcinfo);
extern Datum be_lo_lseek64(FunctionCallInfo fcinfo);
extern Datum be_lo_tell64(FunctionCallInfo fcinfo);
extern Datum be_lo_truncate64(FunctionCallInfo fcinfo);
extern Datum json_agg_transfn(FunctionCallInfo fcinfo);
extern Datum json_agg_finalfn(FunctionCallInfo fcinfo);
extern Datum to_json(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_mod_since_analyze(FunctionCallInfo fcinfo);
extern Datum numeric_sum(FunctionCallInfo fcinfo);
extern Datum array_cardinality(FunctionCallInfo fcinfo);
extern Datum json_object_agg_transfn(FunctionCallInfo fcinfo);
extern Datum record_image_eq(FunctionCallInfo fcinfo);
extern Datum record_image_ne(FunctionCallInfo fcinfo);
extern Datum record_image_lt(FunctionCallInfo fcinfo);
extern Datum record_image_gt(FunctionCallInfo fcinfo);
extern Datum record_image_le(FunctionCallInfo fcinfo);
extern Datum record_image_ge(FunctionCallInfo fcinfo);
extern Datum btrecordimagecmp(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_archiver(FunctionCallInfo fcinfo);
extern Datum json_object_agg_finalfn(FunctionCallInfo fcinfo);
extern Datum json_build_array(FunctionCallInfo fcinfo);
extern Datum json_build_array_noargs(FunctionCallInfo fcinfo);
extern Datum json_build_object(FunctionCallInfo fcinfo);
extern Datum json_build_object_noargs(FunctionCallInfo fcinfo);
extern Datum json_object(FunctionCallInfo fcinfo);
extern Datum json_object_two_arg(FunctionCallInfo fcinfo);
extern Datum json_to_record(FunctionCallInfo fcinfo);
extern Datum json_to_recordset(FunctionCallInfo fcinfo);
extern Datum jsonb_array_length(FunctionCallInfo fcinfo);
extern Datum jsonb_each(FunctionCallInfo fcinfo);
extern Datum jsonb_populate_record(FunctionCallInfo fcinfo);
extern Datum jsonb_typeof(FunctionCallInfo fcinfo);
extern Datum jsonb_object_field_text(FunctionCallInfo fcinfo);
extern Datum jsonb_array_element(FunctionCallInfo fcinfo);
extern Datum jsonb_array_element_text(FunctionCallInfo fcinfo);
extern Datum jsonb_extract_path(FunctionCallInfo fcinfo);
extern Datum width_bucket_array(FunctionCallInfo fcinfo);
extern Datum jsonb_array_elements(FunctionCallInfo fcinfo);
extern Datum pg_lsn_in(FunctionCallInfo fcinfo);
extern Datum pg_lsn_out(FunctionCallInfo fcinfo);
extern Datum pg_lsn_lt(FunctionCallInfo fcinfo);
extern Datum pg_lsn_le(FunctionCallInfo fcinfo);
extern Datum pg_lsn_eq(FunctionCallInfo fcinfo);
extern Datum pg_lsn_ge(FunctionCallInfo fcinfo);
extern Datum pg_lsn_gt(FunctionCallInfo fcinfo);
extern Datum pg_lsn_ne(FunctionCallInfo fcinfo);
extern Datum pg_lsn_mi(FunctionCallInfo fcinfo);
extern Datum pg_lsn_recv(FunctionCallInfo fcinfo);
extern Datum pg_lsn_send(FunctionCallInfo fcinfo);
extern Datum pg_lsn_cmp(FunctionCallInfo fcinfo);
extern Datum pg_lsn_hash(FunctionCallInfo fcinfo);
extern Datum bttextsortsupport(FunctionCallInfo fcinfo);
extern Datum generate_series_step_numeric(FunctionCallInfo fcinfo);
extern Datum generate_series_numeric(FunctionCallInfo fcinfo);
extern Datum json_strip_nulls(FunctionCallInfo fcinfo);
extern Datum jsonb_strip_nulls(FunctionCallInfo fcinfo);
extern Datum jsonb_object(FunctionCallInfo fcinfo);
extern Datum jsonb_object_two_arg(FunctionCallInfo fcinfo);
extern Datum jsonb_agg_transfn(FunctionCallInfo fcinfo);
extern Datum jsonb_agg_finalfn(FunctionCallInfo fcinfo);
extern Datum jsonb_object_agg_transfn(FunctionCallInfo fcinfo);
extern Datum jsonb_object_agg_finalfn(FunctionCallInfo fcinfo);
extern Datum jsonb_build_array(FunctionCallInfo fcinfo);
extern Datum jsonb_build_array_noargs(FunctionCallInfo fcinfo);
extern Datum jsonb_build_object(FunctionCallInfo fcinfo);
extern Datum jsonb_build_object_noargs(FunctionCallInfo fcinfo);
extern Datum dist_ppoly(FunctionCallInfo fcinfo);
extern Datum array_position(FunctionCallInfo fcinfo);
extern Datum array_position_start(FunctionCallInfo fcinfo);
extern Datum array_positions(FunctionCallInfo fcinfo);
extern Datum gist_circle_distance(FunctionCallInfo fcinfo);
extern Datum numeric_scale(FunctionCallInfo fcinfo);
extern Datum gist_point_fetch(FunctionCallInfo fcinfo);
extern Datum numeric_sortsupport(FunctionCallInfo fcinfo);
extern Datum gist_poly_distance(FunctionCallInfo fcinfo);
extern Datum dist_cpoint(FunctionCallInfo fcinfo);
extern Datum dist_polyp(FunctionCallInfo fcinfo);
extern Datum pg_read_file_v2(FunctionCallInfo fcinfo);
extern Datum show_config_by_name_missing_ok(FunctionCallInfo fcinfo);
extern Datum pg_read_binary_file(FunctionCallInfo fcinfo);
extern Datum pg_notification_queue_usage(FunctionCallInfo fcinfo);
extern Datum pg_ls_dir(FunctionCallInfo fcinfo);
extern Datum row_security_active(FunctionCallInfo fcinfo);
extern Datum row_security_active_name(FunctionCallInfo fcinfo);
extern Datum uuid_sortsupport(FunctionCallInfo fcinfo);
extern Datum jsonb_concat(FunctionCallInfo fcinfo);
extern Datum jsonb_delete(FunctionCallInfo fcinfo);
extern Datum jsonb_delete_idx(FunctionCallInfo fcinfo);
extern Datum jsonb_delete_path(FunctionCallInfo fcinfo);
extern Datum jsonb_set(FunctionCallInfo fcinfo);
extern Datum jsonb_pretty(FunctionCallInfo fcinfo);
extern Datum pg_stat_file(FunctionCallInfo fcinfo);
extern Datum xidneq(FunctionCallInfo fcinfo);
extern Datum tsm_handler_in(FunctionCallInfo fcinfo);
extern Datum tsm_handler_out(FunctionCallInfo fcinfo);
extern Datum tsm_bernoulli_handler(FunctionCallInfo fcinfo);
extern Datum tsm_system_handler(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_wal_receiver(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_progress_info(FunctionCallInfo fcinfo);
extern Datum tsvector_filter(FunctionCallInfo fcinfo);
extern Datum tsvector_setweight_by_filter(FunctionCallInfo fcinfo);
extern Datum tsvector_delete_str(FunctionCallInfo fcinfo);
extern Datum tsvector_unnest(FunctionCallInfo fcinfo);
extern Datum tsvector_delete_arr(FunctionCallInfo fcinfo);
extern Datum int4_avg_combine(FunctionCallInfo fcinfo);
extern Datum interval_combine(FunctionCallInfo fcinfo);
extern Datum tsvector_to_array(FunctionCallInfo fcinfo);
extern Datum array_to_tsvector(FunctionCallInfo fcinfo);
extern Datum bpchar_sortsupport(FunctionCallInfo fcinfo);
extern Datum show_all_file_settings(FunctionCallInfo fcinfo);
extern Datum pg_current_wal_flush_lsn(FunctionCallInfo fcinfo);
extern Datum bytea_sortsupport(FunctionCallInfo fcinfo);
extern Datum bttext_pattern_sortsupport(FunctionCallInfo fcinfo);
extern Datum btbpchar_pattern_sortsupport(FunctionCallInfo fcinfo);
extern Datum pg_size_bytes(FunctionCallInfo fcinfo);
extern Datum numeric_serialize(FunctionCallInfo fcinfo);
extern Datum numeric_deserialize(FunctionCallInfo fcinfo);
extern Datum numeric_avg_combine(FunctionCallInfo fcinfo);
extern Datum numeric_poly_combine(FunctionCallInfo fcinfo);
extern Datum numeric_poly_serialize(FunctionCallInfo fcinfo);
extern Datum numeric_poly_deserialize(FunctionCallInfo fcinfo);
extern Datum numeric_combine(FunctionCallInfo fcinfo);
extern Datum float8_regr_combine(FunctionCallInfo fcinfo);
extern Datum jsonb_delete_array(FunctionCallInfo fcinfo);
extern Datum cash_mul_int8(FunctionCallInfo fcinfo);
extern Datum cash_div_int8(FunctionCallInfo fcinfo);
extern Datum txid_current_if_assigned(FunctionCallInfo fcinfo);
extern Datum pg_get_partkeydef(FunctionCallInfo fcinfo);
extern Datum pg_ls_logdir(FunctionCallInfo fcinfo);
extern Datum pg_ls_waldir(FunctionCallInfo fcinfo);
extern Datum pg_ndistinct_in(FunctionCallInfo fcinfo);
extern Datum pg_ndistinct_out(FunctionCallInfo fcinfo);
extern Datum pg_ndistinct_recv(FunctionCallInfo fcinfo);
extern Datum pg_ndistinct_send(FunctionCallInfo fcinfo);
extern Datum macaddr_sortsupport(FunctionCallInfo fcinfo);
extern Datum txid_status(FunctionCallInfo fcinfo);
extern Datum pg_safe_snapshot_blocking_pids(FunctionCallInfo fcinfo);
extern Datum pg_isolation_test_session_is_blocked(FunctionCallInfo fcinfo);
extern Datum pg_identify_object_as_address(FunctionCallInfo fcinfo);
extern Datum brin_minmax_opcinfo(FunctionCallInfo fcinfo);
extern Datum brin_minmax_add_value(FunctionCallInfo fcinfo);
extern Datum brin_minmax_consistent(FunctionCallInfo fcinfo);
extern Datum brin_minmax_union(FunctionCallInfo fcinfo);
extern Datum int8_avg_accum_inv(FunctionCallInfo fcinfo);
extern Datum numeric_poly_sum(FunctionCallInfo fcinfo);
extern Datum numeric_poly_avg(FunctionCallInfo fcinfo);
extern Datum numeric_poly_var_pop(FunctionCallInfo fcinfo);
extern Datum numeric_poly_var_samp(FunctionCallInfo fcinfo);
extern Datum numeric_poly_stddev_pop(FunctionCallInfo fcinfo);
extern Datum numeric_poly_stddev_samp(FunctionCallInfo fcinfo);
extern Datum regexp_match_no_flags(FunctionCallInfo fcinfo);
extern Datum regexp_match(FunctionCallInfo fcinfo);
extern Datum int8_mul_cash(FunctionCallInfo fcinfo);
extern Datum pg_config(FunctionCallInfo fcinfo);
extern Datum pg_hba_file_rules(FunctionCallInfo fcinfo);
extern Datum pg_statistics_obj_is_visible(FunctionCallInfo fcinfo);
extern Datum pg_dependencies_in(FunctionCallInfo fcinfo);
extern Datum pg_dependencies_out(FunctionCallInfo fcinfo);
extern Datum pg_dependencies_recv(FunctionCallInfo fcinfo);
extern Datum pg_dependencies_send(FunctionCallInfo fcinfo);
extern Datum pg_get_partition_constraintdef(FunctionCallInfo fcinfo);
extern Datum time_hash_extended(FunctionCallInfo fcinfo);
extern Datum timetz_hash_extended(FunctionCallInfo fcinfo);
extern Datum timestamp_hash_extended(FunctionCallInfo fcinfo);
extern Datum uuid_hash_extended(FunctionCallInfo fcinfo);
extern Datum pg_lsn_hash_extended(FunctionCallInfo fcinfo);
extern Datum hashenumextended(FunctionCallInfo fcinfo);
extern Datum pg_get_statisticsobjdef(FunctionCallInfo fcinfo);
extern Datum jsonb_hash_extended(FunctionCallInfo fcinfo);
extern Datum hash_range_extended(FunctionCallInfo fcinfo);
extern Datum interval_hash_extended(FunctionCallInfo fcinfo);
extern Datum sha224_bytea(FunctionCallInfo fcinfo);
extern Datum sha256_bytea(FunctionCallInfo fcinfo);
extern Datum sha384_bytea(FunctionCallInfo fcinfo);
extern Datum sha512_bytea(FunctionCallInfo fcinfo);
extern Datum prefixsel(FunctionCallInfo fcinfo);
extern Datum prefixjoinsel(FunctionCallInfo fcinfo);
extern Datum pg_control_system(FunctionCallInfo fcinfo);
extern Datum pg_control_checkpoint(FunctionCallInfo fcinfo);
extern Datum pg_control_recovery(FunctionCallInfo fcinfo);
extern Datum pg_control_init(FunctionCallInfo fcinfo);
extern Datum pg_import_system_collations(FunctionCallInfo fcinfo);
extern Datum macaddr8_recv(FunctionCallInfo fcinfo);
extern Datum macaddr8_send(FunctionCallInfo fcinfo);
extern Datum pg_collation_actual_version(FunctionCallInfo fcinfo);
extern Datum jsonb_numeric(FunctionCallInfo fcinfo);
extern Datum jsonb_int2(FunctionCallInfo fcinfo);
extern Datum jsonb_int4(FunctionCallInfo fcinfo);
extern Datum jsonb_int8(FunctionCallInfo fcinfo);
extern Datum jsonb_float4(FunctionCallInfo fcinfo);
extern Datum pg_filenode_relation(FunctionCallInfo fcinfo);
extern Datum be_lo_from_bytea(FunctionCallInfo fcinfo);
extern Datum be_lo_get(FunctionCallInfo fcinfo);
extern Datum be_lo_get_fragment(FunctionCallInfo fcinfo);
extern Datum be_lo_put(FunctionCallInfo fcinfo);
extern Datum make_timestamp(FunctionCallInfo fcinfo);
extern Datum make_timestamptz(FunctionCallInfo fcinfo);
extern Datum make_timestamptz_at_timezone(FunctionCallInfo fcinfo);
extern Datum make_interval(FunctionCallInfo fcinfo);
extern Datum jsonb_array_elements_text(FunctionCallInfo fcinfo);
extern Datum spg_range_quad_config(FunctionCallInfo fcinfo);
extern Datum spg_range_quad_choose(FunctionCallInfo fcinfo);
extern Datum spg_range_quad_picksplit(FunctionCallInfo fcinfo);
extern Datum spg_range_quad_inner_consistent(FunctionCallInfo fcinfo);
extern Datum spg_range_quad_leaf_consistent(FunctionCallInfo fcinfo);
extern Datum jsonb_populate_recordset(FunctionCallInfo fcinfo);
extern Datum to_regoperator(FunctionCallInfo fcinfo);
extern Datum jsonb_object_field(FunctionCallInfo fcinfo);
extern Datum to_regprocedure(FunctionCallInfo fcinfo);
extern Datum gin_compare_jsonb(FunctionCallInfo fcinfo);
extern Datum gin_extract_jsonb(FunctionCallInfo fcinfo);
extern Datum gin_extract_jsonb_query(FunctionCallInfo fcinfo);
extern Datum gin_consistent_jsonb(FunctionCallInfo fcinfo);
extern Datum gin_extract_jsonb_path(FunctionCallInfo fcinfo);
extern Datum gin_extract_jsonb_query_path(FunctionCallInfo fcinfo);
extern Datum gin_consistent_jsonb_path(FunctionCallInfo fcinfo);
extern Datum gin_triconsistent_jsonb(FunctionCallInfo fcinfo);
extern Datum gin_triconsistent_jsonb_path(FunctionCallInfo fcinfo);
extern Datum jsonb_to_record(FunctionCallInfo fcinfo);
extern Datum jsonb_to_recordset(FunctionCallInfo fcinfo);
extern Datum to_regoper(FunctionCallInfo fcinfo);
extern Datum to_regtype(FunctionCallInfo fcinfo);
extern Datum to_regproc(FunctionCallInfo fcinfo);
extern Datum to_regclass(FunctionCallInfo fcinfo);
extern Datum bool_accum(FunctionCallInfo fcinfo);
extern Datum bool_accum_inv(FunctionCallInfo fcinfo);
extern Datum bool_alltrue(FunctionCallInfo fcinfo);
extern Datum bool_anytrue(FunctionCallInfo fcinfo);
extern Datum anyenum_in(FunctionCallInfo fcinfo);
extern Datum anyenum_out(FunctionCallInfo fcinfo);
extern Datum enum_in(FunctionCallInfo fcinfo);
extern Datum enum_out(FunctionCallInfo fcinfo);
extern Datum enum_eq(FunctionCallInfo fcinfo);
extern Datum enum_ne(FunctionCallInfo fcinfo);
extern Datum enum_lt(FunctionCallInfo fcinfo);
extern Datum enum_gt(FunctionCallInfo fcinfo);
extern Datum enum_le(FunctionCallInfo fcinfo);
extern Datum enum_ge(FunctionCallInfo fcinfo);
extern Datum enum_cmp(FunctionCallInfo fcinfo);
extern Datum hashenum(FunctionCallInfo fcinfo);
extern Datum enum_smaller(FunctionCallInfo fcinfo);
extern Datum enum_larger(FunctionCallInfo fcinfo);
extern Datum enum_first(FunctionCallInfo fcinfo);
extern Datum enum_last(FunctionCallInfo fcinfo);
extern Datum enum_range_bounds(FunctionCallInfo fcinfo);
extern Datum enum_range_all(FunctionCallInfo fcinfo);
extern Datum enum_recv(FunctionCallInfo fcinfo);
extern Datum enum_send(FunctionCallInfo fcinfo);
extern Datum string_agg_transfn(FunctionCallInfo fcinfo);
extern Datum string_agg_finalfn(FunctionCallInfo fcinfo);
extern Datum pg_describe_object(FunctionCallInfo fcinfo);
extern Datum text_format(FunctionCallInfo fcinfo);
extern Datum text_format_nv(FunctionCallInfo fcinfo);
extern Datum bytea_string_agg_transfn(FunctionCallInfo fcinfo);
extern Datum bytea_string_agg_finalfn(FunctionCallInfo fcinfo);
extern Datum int8dec(FunctionCallInfo fcinfo);
extern Datum int8dec_any(FunctionCallInfo fcinfo);
extern Datum numeric_accum_inv(FunctionCallInfo fcinfo);
extern Datum interval_accum_inv(FunctionCallInfo fcinfo);
extern Datum network_overlap(FunctionCallInfo fcinfo);
extern Datum inet_gist_consistent(FunctionCallInfo fcinfo);
extern Datum inet_gist_union(FunctionCallInfo fcinfo);
extern Datum inet_gist_compress(FunctionCallInfo fcinfo);
extern Datum jsonb_bool(FunctionCallInfo fcinfo);
extern Datum inet_gist_penalty(FunctionCallInfo fcinfo);
extern Datum inet_gist_picksplit(FunctionCallInfo fcinfo);
extern Datum inet_gist_same(FunctionCallInfo fcinfo);
extern Datum networksel(FunctionCallInfo fcinfo);
extern Datum networkjoinsel(FunctionCallInfo fcinfo);
extern Datum network_larger(FunctionCallInfo fcinfo);
extern Datum network_smaller(FunctionCallInfo fcinfo);
extern Datum pg_event_trigger_dropped_objects(FunctionCallInfo fcinfo);
extern Datum int2_accum_inv(FunctionCallInfo fcinfo);
extern Datum int4_accum_inv(FunctionCallInfo fcinfo);
extern Datum int8_accum_inv(FunctionCallInfo fcinfo);
extern Datum int2_avg_accum_inv(FunctionCallInfo fcinfo);
extern Datum int4_avg_accum_inv(FunctionCallInfo fcinfo);
extern Datum int2int4_sum(FunctionCallInfo fcinfo);
extern Datum inet_gist_fetch(FunctionCallInfo fcinfo);
extern Datum pg_logical_emit_message_text(FunctionCallInfo fcinfo);
extern Datum pg_logical_emit_message_bytea(FunctionCallInfo fcinfo);
extern Datum jsonb_insert(FunctionCallInfo fcinfo);
extern Datum pg_xact_commit_timestamp(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_next_pg_type_oid(FunctionCallInfo fcinfo);
extern Datum pg_last_committed_xact(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_next_array_pg_type_oid(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_next_toast_pg_type_oid(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_next_heap_pg_class_oid(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_next_index_pg_class_oid(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_next_toast_pg_class_oid(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_next_pg_enum_oid(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_next_pg_authid_oid(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_create_empty_extension(FunctionCallInfo fcinfo);
extern Datum event_trigger_in(FunctionCallInfo fcinfo);
extern Datum event_trigger_out(FunctionCallInfo fcinfo);
extern Datum tsvectorin(FunctionCallInfo fcinfo);
extern Datum tsvectorout(FunctionCallInfo fcinfo);
extern Datum tsqueryin(FunctionCallInfo fcinfo);
extern Datum tsqueryout(FunctionCallInfo fcinfo);
extern Datum tsvector_lt(FunctionCallInfo fcinfo);
extern Datum tsvector_le(FunctionCallInfo fcinfo);
extern Datum tsvector_eq(FunctionCallInfo fcinfo);
extern Datum tsvector_ne(FunctionCallInfo fcinfo);
extern Datum tsvector_ge(FunctionCallInfo fcinfo);
extern Datum tsvector_gt(FunctionCallInfo fcinfo);
extern Datum tsvector_cmp(FunctionCallInfo fcinfo);
extern Datum tsvector_strip(FunctionCallInfo fcinfo);
extern Datum tsvector_setweight(FunctionCallInfo fcinfo);
extern Datum tsvector_concat(FunctionCallInfo fcinfo);
extern Datum ts_match_vq(FunctionCallInfo fcinfo);
extern Datum ts_match_qv(FunctionCallInfo fcinfo);
extern Datum tsvectorsend(FunctionCallInfo fcinfo);
extern Datum tsvectorrecv(FunctionCallInfo fcinfo);
extern Datum tsquerysend(FunctionCallInfo fcinfo);
extern Datum tsqueryrecv(FunctionCallInfo fcinfo);
extern Datum gtsvectorin(FunctionCallInfo fcinfo);
extern Datum gtsvectorout(FunctionCallInfo fcinfo);
extern Datum gtsvector_compress(FunctionCallInfo fcinfo);
extern Datum gtsvector_decompress(FunctionCallInfo fcinfo);
extern Datum gtsvector_picksplit(FunctionCallInfo fcinfo);
extern Datum gtsvector_union(FunctionCallInfo fcinfo);
extern Datum gtsvector_same(FunctionCallInfo fcinfo);
extern Datum gtsvector_penalty(FunctionCallInfo fcinfo);
extern Datum gtsvector_consistent(FunctionCallInfo fcinfo);
extern Datum gin_extract_tsvector(FunctionCallInfo fcinfo);
extern Datum gin_extract_tsquery(FunctionCallInfo fcinfo);
extern Datum gin_tsquery_consistent(FunctionCallInfo fcinfo);
extern Datum tsquery_lt(FunctionCallInfo fcinfo);
extern Datum tsquery_le(FunctionCallInfo fcinfo);
extern Datum tsquery_eq(FunctionCallInfo fcinfo);
extern Datum tsquery_ne(FunctionCallInfo fcinfo);
extern Datum tsquery_ge(FunctionCallInfo fcinfo);
extern Datum tsquery_gt(FunctionCallInfo fcinfo);
extern Datum tsquery_cmp(FunctionCallInfo fcinfo);
extern Datum tsquery_and(FunctionCallInfo fcinfo);
extern Datum tsquery_or(FunctionCallInfo fcinfo);
extern Datum tsquery_not(FunctionCallInfo fcinfo);
extern Datum tsquery_numnode(FunctionCallInfo fcinfo);
extern Datum tsquerytree(FunctionCallInfo fcinfo);
extern Datum tsquery_rewrite(FunctionCallInfo fcinfo);
extern Datum tsquery_rewrite_query(FunctionCallInfo fcinfo);
extern Datum tsmatchsel(FunctionCallInfo fcinfo);
extern Datum tsmatchjoinsel(FunctionCallInfo fcinfo);
extern Datum ts_typanalyze(FunctionCallInfo fcinfo);
extern Datum ts_stat1(FunctionCallInfo fcinfo);
extern Datum ts_stat2(FunctionCallInfo fcinfo);
extern Datum tsq_mcontains(FunctionCallInfo fcinfo);
extern Datum tsq_mcontained(FunctionCallInfo fcinfo);
extern Datum gtsquery_compress(FunctionCallInfo fcinfo);
extern Datum text_starts_with(FunctionCallInfo fcinfo);
extern Datum gtsquery_picksplit(FunctionCallInfo fcinfo);
extern Datum gtsquery_union(FunctionCallInfo fcinfo);
extern Datum gtsquery_same(FunctionCallInfo fcinfo);
extern Datum gtsquery_penalty(FunctionCallInfo fcinfo);
extern Datum gtsquery_consistent(FunctionCallInfo fcinfo);
extern Datum ts_rank_wttf(FunctionCallInfo fcinfo);
extern Datum ts_rank_wtt(FunctionCallInfo fcinfo);
extern Datum ts_rank_ttf(FunctionCallInfo fcinfo);
extern Datum ts_rank_tt(FunctionCallInfo fcinfo);
extern Datum ts_rankcd_wttf(FunctionCallInfo fcinfo);
extern Datum ts_rankcd_wtt(FunctionCallInfo fcinfo);
extern Datum ts_rankcd_ttf(FunctionCallInfo fcinfo);
extern Datum ts_rankcd_tt(FunctionCallInfo fcinfo);
extern Datum tsvector_length(FunctionCallInfo fcinfo);
extern Datum ts_token_type_byid(FunctionCallInfo fcinfo);
extern Datum ts_token_type_byname(FunctionCallInfo fcinfo);
extern Datum ts_parse_byid(FunctionCallInfo fcinfo);
extern Datum ts_parse_byname(FunctionCallInfo fcinfo);
extern Datum prsd_start(FunctionCallInfo fcinfo);
extern Datum prsd_nexttoken(FunctionCallInfo fcinfo);
extern Datum prsd_end(FunctionCallInfo fcinfo);
extern Datum prsd_headline(FunctionCallInfo fcinfo);
extern Datum prsd_lextype(FunctionCallInfo fcinfo);
extern Datum ts_lexize(FunctionCallInfo fcinfo);
extern Datum gin_cmp_tslexeme(FunctionCallInfo fcinfo);
extern Datum dsimple_init(FunctionCallInfo fcinfo);
extern Datum dsimple_lexize(FunctionCallInfo fcinfo);
extern Datum dsynonym_init(FunctionCallInfo fcinfo);
extern Datum dsynonym_lexize(FunctionCallInfo fcinfo);
extern Datum dispell_init(FunctionCallInfo fcinfo);
extern Datum dispell_lexize(FunctionCallInfo fcinfo);
extern Datum regconfigin(FunctionCallInfo fcinfo);
extern Datum regconfigout(FunctionCallInfo fcinfo);
extern Datum regconfigrecv(FunctionCallInfo fcinfo);
extern Datum regconfigsend(FunctionCallInfo fcinfo);
extern Datum thesaurus_init(FunctionCallInfo fcinfo);
extern Datum thesaurus_lexize(FunctionCallInfo fcinfo);
extern Datum ts_headline_byid_opt(FunctionCallInfo fcinfo);
extern Datum ts_headline_byid(FunctionCallInfo fcinfo);
extern Datum to_tsvector_byid(FunctionCallInfo fcinfo);
extern Datum to_tsquery_byid(FunctionCallInfo fcinfo);
extern Datum plainto_tsquery_byid(FunctionCallInfo fcinfo);
extern Datum to_tsvector(FunctionCallInfo fcinfo);
extern Datum to_tsquery(FunctionCallInfo fcinfo);
extern Datum plainto_tsquery(FunctionCallInfo fcinfo);
extern Datum tsvector_update_trigger_byid(FunctionCallInfo fcinfo);
extern Datum tsvector_update_trigger_bycolumn(FunctionCallInfo fcinfo);
extern Datum ts_headline_opt(FunctionCallInfo fcinfo);
extern Datum ts_headline(FunctionCallInfo fcinfo);
extern Datum pg_ts_parser_is_visible(FunctionCallInfo fcinfo);
extern Datum pg_ts_dict_is_visible(FunctionCallInfo fcinfo);
extern Datum pg_ts_config_is_visible(FunctionCallInfo fcinfo);
extern Datum get_current_ts_config(FunctionCallInfo fcinfo);
extern Datum ts_match_tt(FunctionCallInfo fcinfo);
extern Datum ts_match_tq(FunctionCallInfo fcinfo);
extern Datum pg_ts_template_is_visible(FunctionCallInfo fcinfo);
extern Datum regdictionaryin(FunctionCallInfo fcinfo);
extern Datum regdictionaryout(FunctionCallInfo fcinfo);
extern Datum regdictionaryrecv(FunctionCallInfo fcinfo);
extern Datum regdictionarysend(FunctionCallInfo fcinfo);
extern Datum pg_stat_reset_shared(FunctionCallInfo fcinfo);
extern Datum pg_stat_reset_single_table_counters(FunctionCallInfo fcinfo);
extern Datum pg_stat_reset_single_function_counters(FunctionCallInfo fcinfo);
extern Datum pg_tablespace_location(FunctionCallInfo fcinfo);
extern Datum pg_create_physical_replication_slot(FunctionCallInfo fcinfo);
extern Datum pg_drop_replication_slot(FunctionCallInfo fcinfo);
extern Datum pg_get_replication_slots(FunctionCallInfo fcinfo);
extern Datum pg_logical_slot_get_changes(FunctionCallInfo fcinfo);
extern Datum pg_logical_slot_get_binary_changes(FunctionCallInfo fcinfo);
extern Datum pg_logical_slot_peek_changes(FunctionCallInfo fcinfo);
extern Datum pg_logical_slot_peek_binary_changes(FunctionCallInfo fcinfo);
extern Datum pg_create_logical_replication_slot(FunctionCallInfo fcinfo);
extern Datum to_jsonb(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_snapshot_timestamp(FunctionCallInfo fcinfo);
extern Datum gin_clean_pending_list(FunctionCallInfo fcinfo);
extern Datum gtsvector_consistent_oldsig(FunctionCallInfo fcinfo);
extern Datum gin_extract_tsquery_oldsig(FunctionCallInfo fcinfo);
extern Datum gin_tsquery_consistent_oldsig(FunctionCallInfo fcinfo);
extern Datum gtsquery_consistent_oldsig(FunctionCallInfo fcinfo);
extern Datum inet_spg_config(FunctionCallInfo fcinfo);
extern Datum inet_spg_choose(FunctionCallInfo fcinfo);
extern Datum inet_spg_picksplit(FunctionCallInfo fcinfo);
extern Datum inet_spg_inner_consistent(FunctionCallInfo fcinfo);
extern Datum inet_spg_leaf_consistent(FunctionCallInfo fcinfo);
extern Datum pg_current_logfile(FunctionCallInfo fcinfo);
extern Datum pg_current_logfile_1arg(FunctionCallInfo fcinfo);
extern Datum jsonb_send(FunctionCallInfo fcinfo);
extern Datum jsonb_out(FunctionCallInfo fcinfo);
extern Datum jsonb_recv(FunctionCallInfo fcinfo);
extern Datum jsonb_in(FunctionCallInfo fcinfo);
extern Datum pg_get_function_arg_default(FunctionCallInfo fcinfo);
extern Datum pg_export_snapshot(FunctionCallInfo fcinfo);
extern Datum pg_is_in_recovery(FunctionCallInfo fcinfo);
extern Datum int4_cash(FunctionCallInfo fcinfo);
extern Datum int8_cash(FunctionCallInfo fcinfo);
extern Datum pg_is_in_backup(FunctionCallInfo fcinfo);
extern Datum pg_backup_start_time(FunctionCallInfo fcinfo);
extern Datum pg_collation_is_visible(FunctionCallInfo fcinfo);
extern Datum array_typanalyze(FunctionCallInfo fcinfo);
extern Datum arraycontsel(FunctionCallInfo fcinfo);
extern Datum arraycontjoinsel(FunctionCallInfo fcinfo);
extern Datum pg_get_multixact_members(FunctionCallInfo fcinfo);
extern Datum pg_last_wal_receive_lsn(FunctionCallInfo fcinfo);
extern Datum pg_last_wal_replay_lsn(FunctionCallInfo fcinfo);
extern Datum cash_div_cash(FunctionCallInfo fcinfo);
extern Datum cash_numeric(FunctionCallInfo fcinfo);
extern Datum numeric_cash(FunctionCallInfo fcinfo);
extern Datum pg_read_file_all(FunctionCallInfo fcinfo);
extern Datum pg_read_binary_file_off_len(FunctionCallInfo fcinfo);
extern Datum pg_read_binary_file_all(FunctionCallInfo fcinfo);
extern Datum pg_opfamily_is_visible(FunctionCallInfo fcinfo);
extern Datum pg_last_xact_replay_timestamp(FunctionCallInfo fcinfo);
extern Datum anyrange_in(FunctionCallInfo fcinfo);
extern Datum anyrange_out(FunctionCallInfo fcinfo);
extern Datum range_in(FunctionCallInfo fcinfo);
extern Datum range_out(FunctionCallInfo fcinfo);
extern Datum range_recv(FunctionCallInfo fcinfo);
extern Datum range_send(FunctionCallInfo fcinfo);
extern Datum pg_identify_object(FunctionCallInfo fcinfo);
extern Datum range_constructor2(FunctionCallInfo fcinfo);
extern Datum range_constructor3(FunctionCallInfo fcinfo);
extern Datum pg_relation_is_updatable(FunctionCallInfo fcinfo);
extern Datum pg_column_is_updatable(FunctionCallInfo fcinfo);
extern Datum make_date(FunctionCallInfo fcinfo);
extern Datum make_time(FunctionCallInfo fcinfo);
extern Datum range_lower(FunctionCallInfo fcinfo);
extern Datum range_upper(FunctionCallInfo fcinfo);
extern Datum range_empty(FunctionCallInfo fcinfo);
extern Datum range_lower_inc(FunctionCallInfo fcinfo);
extern Datum range_upper_inc(FunctionCallInfo fcinfo);
extern Datum range_lower_inf(FunctionCallInfo fcinfo);
extern Datum range_upper_inf(FunctionCallInfo fcinfo);
extern Datum range_eq(FunctionCallInfo fcinfo);
extern Datum range_ne(FunctionCallInfo fcinfo);
extern Datum range_overlaps(FunctionCallInfo fcinfo);
extern Datum range_contains_elem(FunctionCallInfo fcinfo);
extern Datum range_contains(FunctionCallInfo fcinfo);
extern Datum elem_contained_by_range(FunctionCallInfo fcinfo);
extern Datum range_contained_by(FunctionCallInfo fcinfo);
extern Datum range_adjacent(FunctionCallInfo fcinfo);
extern Datum range_before(FunctionCallInfo fcinfo);
extern Datum range_after(FunctionCallInfo fcinfo);
extern Datum range_overleft(FunctionCallInfo fcinfo);
extern Datum range_overright(FunctionCallInfo fcinfo);
extern Datum range_union(FunctionCallInfo fcinfo);
extern Datum range_intersect(FunctionCallInfo fcinfo);
extern Datum range_minus(FunctionCallInfo fcinfo);
extern Datum range_cmp(FunctionCallInfo fcinfo);
extern Datum range_lt(FunctionCallInfo fcinfo);
extern Datum range_le(FunctionCallInfo fcinfo);
extern Datum range_ge(FunctionCallInfo fcinfo);
extern Datum range_gt(FunctionCallInfo fcinfo);
extern Datum range_gist_consistent(FunctionCallInfo fcinfo);
extern Datum range_gist_union(FunctionCallInfo fcinfo);
extern Datum pg_replication_slot_advance(FunctionCallInfo fcinfo);
extern Datum range_gist_penalty(FunctionCallInfo fcinfo);
extern Datum range_gist_picksplit(FunctionCallInfo fcinfo);
extern Datum range_gist_same(FunctionCallInfo fcinfo);
extern Datum hash_range(FunctionCallInfo fcinfo);
extern Datum int4range_canonical(FunctionCallInfo fcinfo);
extern Datum daterange_canonical(FunctionCallInfo fcinfo);
extern Datum range_typanalyze(FunctionCallInfo fcinfo);
extern Datum timestamp_transform(FunctionCallInfo fcinfo);
extern Datum interval_transform(FunctionCallInfo fcinfo);
extern Datum ginarraytriconsistent(FunctionCallInfo fcinfo);
extern Datum gin_tsquery_triconsistent(FunctionCallInfo fcinfo);
extern Datum int4range_subdiff(FunctionCallInfo fcinfo);
extern Datum int8range_subdiff(FunctionCallInfo fcinfo);
extern Datum numrange_subdiff(FunctionCallInfo fcinfo);
extern Datum daterange_subdiff(FunctionCallInfo fcinfo);
extern Datum int8range_canonical(FunctionCallInfo fcinfo);
extern Datum tsrange_subdiff(FunctionCallInfo fcinfo);
extern Datum tstzrange_subdiff(FunctionCallInfo fcinfo);
extern Datum jsonb_object_keys(FunctionCallInfo fcinfo);
extern Datum jsonb_each_text(FunctionCallInfo fcinfo);
extern Datum mxid_age(FunctionCallInfo fcinfo);
extern Datum jsonb_extract_path_text(FunctionCallInfo fcinfo);
extern Datum acldefault_sql(FunctionCallInfo fcinfo);
extern Datum time_transform(FunctionCallInfo fcinfo);
extern Datum json_object_field(FunctionCallInfo fcinfo);
extern Datum json_object_field_text(FunctionCallInfo fcinfo);
extern Datum json_array_element(FunctionCallInfo fcinfo);
extern Datum json_array_element_text(FunctionCallInfo fcinfo);
extern Datum json_extract_path(FunctionCallInfo fcinfo);
extern Datum brin_summarize_new_values(FunctionCallInfo fcinfo);
extern Datum json_extract_path_text(FunctionCallInfo fcinfo);
extern Datum pg_get_object_address(FunctionCallInfo fcinfo);
extern Datum json_array_elements(FunctionCallInfo fcinfo);
extern Datum json_array_length(FunctionCallInfo fcinfo);
extern Datum json_object_keys(FunctionCallInfo fcinfo);
extern Datum json_each(FunctionCallInfo fcinfo);
extern Datum json_each_text(FunctionCallInfo fcinfo);
extern Datum json_populate_record(FunctionCallInfo fcinfo);
extern Datum json_populate_recordset(FunctionCallInfo fcinfo);
extern Datum json_typeof(FunctionCallInfo fcinfo);
extern Datum json_array_elements_text(FunctionCallInfo fcinfo);
extern Datum ordered_set_transition(FunctionCallInfo fcinfo);
extern Datum ordered_set_transition_multi(FunctionCallInfo fcinfo);
extern Datum percentile_disc_final(FunctionCallInfo fcinfo);
extern Datum percentile_cont_float8_final(FunctionCallInfo fcinfo);
extern Datum percentile_cont_interval_final(FunctionCallInfo fcinfo);
extern Datum percentile_disc_multi_final(FunctionCallInfo fcinfo);
extern Datum percentile_cont_float8_multi_final(FunctionCallInfo fcinfo);
extern Datum percentile_cont_interval_multi_final(FunctionCallInfo fcinfo);
extern Datum mode_final(FunctionCallInfo fcinfo);
extern Datum hypothetical_rank_final(FunctionCallInfo fcinfo);
extern Datum hypothetical_percent_rank_final(FunctionCallInfo fcinfo);
extern Datum hypothetical_cume_dist_final(FunctionCallInfo fcinfo);
extern Datum hypothetical_dense_rank_final(FunctionCallInfo fcinfo);
extern Datum timestamp_izone_transform(FunctionCallInfo fcinfo);
extern Datum timestamp_zone_transform(FunctionCallInfo fcinfo);
extern Datum brin_summarize_range(FunctionCallInfo fcinfo);
extern Datum brin_desummarize_range(FunctionCallInfo fcinfo);
extern Datum spg_quad_config(FunctionCallInfo fcinfo);
extern Datum spg_quad_choose(FunctionCallInfo fcinfo);
extern Datum spg_quad_picksplit(FunctionCallInfo fcinfo);
extern Datum spg_quad_inner_consistent(FunctionCallInfo fcinfo);
extern Datum spg_quad_leaf_consistent(FunctionCallInfo fcinfo);
extern Datum spg_kd_config(FunctionCallInfo fcinfo);
extern Datum spg_kd_choose(FunctionCallInfo fcinfo);
extern Datum spg_kd_picksplit(FunctionCallInfo fcinfo);
extern Datum spg_kd_inner_consistent(FunctionCallInfo fcinfo);
extern Datum spg_text_config(FunctionCallInfo fcinfo);
extern Datum spg_text_choose(FunctionCallInfo fcinfo);
extern Datum spg_text_picksplit(FunctionCallInfo fcinfo);
extern Datum spg_text_inner_consistent(FunctionCallInfo fcinfo);
extern Datum spg_text_leaf_consistent(FunctionCallInfo fcinfo);
extern Datum pg_sequence_last_value(FunctionCallInfo fcinfo);
extern Datum jsonb_ne(FunctionCallInfo fcinfo);
extern Datum jsonb_lt(FunctionCallInfo fcinfo);
extern Datum jsonb_gt(FunctionCallInfo fcinfo);
extern Datum jsonb_le(FunctionCallInfo fcinfo);
extern Datum jsonb_ge(FunctionCallInfo fcinfo);
extern Datum jsonb_eq(FunctionCallInfo fcinfo);
extern Datum jsonb_cmp(FunctionCallInfo fcinfo);
extern Datum jsonb_hash(FunctionCallInfo fcinfo);
extern Datum jsonb_contains(FunctionCallInfo fcinfo);
extern Datum jsonb_exists(FunctionCallInfo fcinfo);
extern Datum jsonb_exists_any(FunctionCallInfo fcinfo);
extern Datum jsonb_exists_all(FunctionCallInfo fcinfo);
extern Datum jsonb_contained(FunctionCallInfo fcinfo);
extern Datum array_agg_array_transfn(FunctionCallInfo fcinfo);
extern Datum array_agg_array_finalfn(FunctionCallInfo fcinfo);
extern Datum range_merge(FunctionCallInfo fcinfo);
extern Datum inet_merge(FunctionCallInfo fcinfo);
extern Datum boxes_bound_box(FunctionCallInfo fcinfo);
extern Datum inet_same_family(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_record_init_privs(FunctionCallInfo fcinfo);
extern Datum regnamespacein(FunctionCallInfo fcinfo);
extern Datum regnamespaceout(FunctionCallInfo fcinfo);
extern Datum to_regnamespace(FunctionCallInfo fcinfo);
extern Datum regnamespacerecv(FunctionCallInfo fcinfo);
extern Datum regnamespacesend(FunctionCallInfo fcinfo);
extern Datum point_box(FunctionCallInfo fcinfo);
extern Datum regroleout(FunctionCallInfo fcinfo);
extern Datum to_regrole(FunctionCallInfo fcinfo);
extern Datum regrolerecv(FunctionCallInfo fcinfo);
extern Datum regrolesend(FunctionCallInfo fcinfo);
extern Datum regrolein(FunctionCallInfo fcinfo);
extern Datum pg_rotate_logfile(FunctionCallInfo fcinfo);
extern Datum pg_read_file(FunctionCallInfo fcinfo);
extern Datum binary_upgrade_set_missing_value(FunctionCallInfo fcinfo);
extern Datum brin_inclusion_opcinfo(FunctionCallInfo fcinfo);
extern Datum brin_inclusion_add_value(FunctionCallInfo fcinfo);
extern Datum brin_inclusion_consistent(FunctionCallInfo fcinfo);
extern Datum brin_inclusion_union(FunctionCallInfo fcinfo);
extern Datum macaddr8_in(FunctionCallInfo fcinfo);
extern Datum macaddr8_out(FunctionCallInfo fcinfo);
extern Datum macaddr8_trunc(FunctionCallInfo fcinfo);
extern Datum macaddr8_eq(FunctionCallInfo fcinfo);
extern Datum macaddr8_lt(FunctionCallInfo fcinfo);
extern Datum macaddr8_le(FunctionCallInfo fcinfo);
extern Datum macaddr8_gt(FunctionCallInfo fcinfo);
extern Datum macaddr8_ge(FunctionCallInfo fcinfo);
extern Datum macaddr8_ne(FunctionCallInfo fcinfo);
extern Datum macaddr8_cmp(FunctionCallInfo fcinfo);
extern Datum macaddr8_not(FunctionCallInfo fcinfo);
extern Datum macaddr8_and(FunctionCallInfo fcinfo);
extern Datum macaddr8_or(FunctionCallInfo fcinfo);
extern Datum macaddrtomacaddr8(FunctionCallInfo fcinfo);
extern Datum macaddr8tomacaddr(FunctionCallInfo fcinfo);
extern Datum macaddr8_set7bit(FunctionCallInfo fcinfo);
extern Datum in_range_int8_int8(FunctionCallInfo fcinfo);
extern Datum in_range_int4_int8(FunctionCallInfo fcinfo);
extern Datum in_range_int4_int4(FunctionCallInfo fcinfo);
extern Datum in_range_int4_int2(FunctionCallInfo fcinfo);
extern Datum in_range_int2_int8(FunctionCallInfo fcinfo);
extern Datum in_range_int2_int4(FunctionCallInfo fcinfo);
extern Datum in_range_int2_int2(FunctionCallInfo fcinfo);
extern Datum in_range_date_interval(FunctionCallInfo fcinfo);
extern Datum in_range_timestamp_interval(FunctionCallInfo fcinfo);
extern Datum in_range_timestamptz_interval(FunctionCallInfo fcinfo);
extern Datum in_range_interval_interval(FunctionCallInfo fcinfo);
extern Datum in_range_time_interval(FunctionCallInfo fcinfo);
extern Datum in_range_timetz_interval(FunctionCallInfo fcinfo);
extern Datum in_range_float8_float8(FunctionCallInfo fcinfo);
extern Datum in_range_float4_float8(FunctionCallInfo fcinfo);
extern Datum in_range_numeric_numeric(FunctionCallInfo fcinfo);
extern Datum ts_headline_jsonb_byid_opt(FunctionCallInfo fcinfo);
extern Datum ts_headline_jsonb_byid(FunctionCallInfo fcinfo);
extern Datum ts_headline_jsonb_opt(FunctionCallInfo fcinfo);
extern Datum ts_headline_jsonb(FunctionCallInfo fcinfo);
extern Datum ts_headline_json_byid_opt(FunctionCallInfo fcinfo);
extern Datum ts_headline_json_byid(FunctionCallInfo fcinfo);
extern Datum ts_headline_json_opt(FunctionCallInfo fcinfo);
extern Datum ts_headline_json(FunctionCallInfo fcinfo);
extern Datum jsonb_string_to_tsvector(FunctionCallInfo fcinfo);
extern Datum json_string_to_tsvector(FunctionCallInfo fcinfo);
extern Datum jsonb_string_to_tsvector_byid(FunctionCallInfo fcinfo);
extern Datum json_string_to_tsvector_byid(FunctionCallInfo fcinfo);
extern Datum jsonb_to_tsvector(FunctionCallInfo fcinfo);
extern Datum jsonb_to_tsvector_byid(FunctionCallInfo fcinfo);
extern Datum json_to_tsvector(FunctionCallInfo fcinfo);
extern Datum json_to_tsvector_byid(FunctionCallInfo fcinfo);
extern Datum pg_event_trigger_table_rewrite_oid(FunctionCallInfo fcinfo);
extern Datum pg_event_trigger_table_rewrite_reason(FunctionCallInfo fcinfo);
extern Datum pg_event_trigger_ddl_commands(FunctionCallInfo fcinfo);
extern Datum phraseto_tsquery(FunctionCallInfo fcinfo);
extern Datum tsquery_phrase(FunctionCallInfo fcinfo);
extern Datum tsquery_phrase_distance(FunctionCallInfo fcinfo);
extern Datum phraseto_tsquery_byid(FunctionCallInfo fcinfo);
extern Datum websearch_to_tsquery_byid(FunctionCallInfo fcinfo);
extern Datum websearch_to_tsquery(FunctionCallInfo fcinfo);
extern Datum spg_bbox_quad_config(FunctionCallInfo fcinfo);
extern Datum spg_poly_quad_compress(FunctionCallInfo fcinfo);
extern Datum spg_box_quad_config(FunctionCallInfo fcinfo);
extern Datum spg_box_quad_choose(FunctionCallInfo fcinfo);
extern Datum spg_box_quad_picksplit(FunctionCallInfo fcinfo);
extern Datum spg_box_quad_inner_consistent(FunctionCallInfo fcinfo);
extern Datum spg_box_quad_leaf_consistent(FunctionCallInfo fcinfo);
extern Datum satisfies_hash_partition(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_create(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_drop(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_oid(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_session_setup(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_session_reset(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_session_is_setup(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_session_progress(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_xact_setup(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_xact_reset(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_advance(FunctionCallInfo fcinfo);
extern Datum pg_replication_origin_progress(FunctionCallInfo fcinfo);
extern Datum pg_show_replication_origin_status(FunctionCallInfo fcinfo);
extern Datum pg_stat_get_subscription(FunctionCallInfo fcinfo);
extern Datum pg_get_publication_tables(FunctionCallInfo fcinfo);
extern Datum pg_get_replica_identity_index(FunctionCallInfo fcinfo);
extern Datum pg_relation_is_publishable(FunctionCallInfo fcinfo);
# 20 "/usr/include/postgresql/11/server/utils/builtins.h" 2



extern 
# 23 "/usr/include/postgresql/11/server/utils/builtins.h" 3 4
      _Bool 
# 23 "/usr/include/postgresql/11/server/utils/builtins.h"
           parse_bool(const char *value, 
# 23 "/usr/include/postgresql/11/server/utils/builtins.h" 3 4
                                         _Bool 
# 23 "/usr/include/postgresql/11/server/utils/builtins.h"
                                              *result);
extern 
# 24 "/usr/include/postgresql/11/server/utils/builtins.h" 3 4
      _Bool 
# 24 "/usr/include/postgresql/11/server/utils/builtins.h"
           parse_bool_with_len(const char *value, size_t len, 
# 24 "/usr/include/postgresql/11/server/utils/builtins.h" 3 4
                                                              _Bool 
# 24 "/usr/include/postgresql/11/server/utils/builtins.h"
                                                                   *result);


extern void domain_check(Datum value, 
# 27 "/usr/include/postgresql/11/server/utils/builtins.h" 3 4
                                     _Bool 
# 27 "/usr/include/postgresql/11/server/utils/builtins.h"
                                          isnull, Oid domainType,
    void **extra, MemoryContext mcxt);
extern int errdatatype(Oid datatypeOid);
extern int errdomainconstraint(Oid datatypeOid, const char *conname);


extern unsigned hex_encode(const char *src, unsigned len, char *dst);
extern unsigned hex_decode(const char *src, unsigned len, char *dst);


extern int2vector *buildint2vector(const int16 *int2s, int n);


extern int namecpy(Name n1, Name n2);
extern int namestrcpy(Name name, const char *str);
extern int namestrcmp(Name name, const char *str);


extern int32 pg_atoi(const char *s, int size, int c);
extern void pg_itoa(int16 i, char *a);
extern void pg_ltoa(int32 l, char *a);
extern void pg_lltoa(int64 ll, char *a);
extern char *pg_ltostr_zeropad(char *str, int32 value, int32 minwidth);
extern char *pg_ltostr(char *str, int32 value);
extern uint64 pg_strtouint64(const char *str, char **endptr, int base);


extern int extra_float_digits;

extern double get_float8_infinity(void);
extern float get_float4_infinity(void);
extern double get_float8_nan(void);
extern float get_float4_nan(void);
extern int is_infinite(double val);
extern double float8in_internal(char *num, char **endptr_p,
      const char *type_name, const char *orig_string);
extern char *float8out_internal(double num);
extern int float4_cmp_internal(float4 a, float4 b);
extern int float8_cmp_internal(float8 a, float8 b);


extern oidvector *buildoidvector(const Oid *oids, int n);
extern Oid oidparse(Node *node);
extern int oid_cmp(const void *p1, const void *p2);


extern char *regexp_fixed_prefix(text *text_re, 
# 73 "/usr/include/postgresql/11/server/utils/builtins.h" 3 4
                                               _Bool 
# 73 "/usr/include/postgresql/11/server/utils/builtins.h"
                                                    case_insensitive,
     Oid collation, 
# 74 "/usr/include/postgresql/11/server/utils/builtins.h" 3 4
                   _Bool 
# 74 "/usr/include/postgresql/11/server/utils/builtins.h"
                        *exact);


extern 
# 77 "/usr/include/postgresql/11/server/utils/builtins.h" 3 4
      _Bool 
# 77 "/usr/include/postgresql/11/server/utils/builtins.h"
           quote_all_identifiers;
extern const char *quote_identifier(const char *ident);
extern char *quote_qualified_identifier(const char *qualifier,
         const char *ident);
extern void generate_operator_clause(fmStringInfo buf,
       const char *leftop, Oid leftoptype,
       Oid opoid,
       const char *rightop, Oid rightoptype);


extern int bpchartruelen(char *s, int len);


extern text *cstring_to_text(const char *s);
extern text *cstring_to_text_with_len(const char *s, int len);
extern char *text_to_cstring(const text *t);
extern void text_to_cstring_buffer(const text *src, char *dst, size_t dst_len);





extern int xidComparator(const void *arg1, const void *arg2);
extern int xidLogicalComparator(const void *arg1, const void *arg2);


extern char *inet_cidr_ntop(int af, const void *src, int bits,
      char *dst, size_t size);


extern int inet_net_pton(int af, const char *src,
     void *dst, size_t size);


extern double convert_network_to_scalar(Datum value, Oid typid, 
# 111 "/usr/include/postgresql/11/server/utils/builtins.h" 3 4
                                                               _Bool 
# 111 "/usr/include/postgresql/11/server/utils/builtins.h"
                                                                    *failure);
extern Datum network_scan_first(Datum in);
extern Datum network_scan_last(Datum in);
extern void clean_ipv6_addr(int addr_family, char *addr);


extern Datum numeric_float8_no_overflow(FunctionCallInfo fcinfo);







extern char *format_type_extended(Oid type_oid, int32 typemod, bits16 flags);

extern char *format_type_be(Oid type_oid);
extern char *format_type_be_qualified(Oid type_oid);
extern char *format_type_with_typemod(Oid type_oid, int32 typemod);

extern int32 type_maximum_size(Oid type_oid, int32 typemod);


extern char *quote_literal_cstr(const char *rawstr);
# 31 "src/backend/utils/adt/agtype_ops.c" 2
# 1 "/usr/include/postgresql/11/server/utils/numeric.h" 1
# 42 "/usr/include/postgresql/11/server/utils/numeric.h"
struct NumericData;
typedef struct NumericData *Numeric;
# 59 "/usr/include/postgresql/11/server/utils/numeric.h"
extern 
# 59 "/usr/include/postgresql/11/server/utils/numeric.h" 3 4
      _Bool 
# 59 "/usr/include/postgresql/11/server/utils/numeric.h"
           numeric_is_nan(Numeric num);
int32 numeric_maximum_size(int32 typmod);
extern char *numeric_out_sci(Numeric num, int scale);
extern char *numeric_normalize(Numeric num);
# 32 "src/backend/utils/adt/agtype_ops.c" 2

# 1 ".//src/include/utils/agtype.h" 1
# 35 ".//src/include/utils/agtype.h"
# 1 "/usr/include/postgresql/11/server/access/htup_details.h" 1
# 17 "/usr/include/postgresql/11/server/access/htup_details.h"
# 1 "/usr/include/postgresql/11/server/access/htup.h" 1
# 17 "/usr/include/postgresql/11/server/access/htup.h"
# 1 "/usr/include/postgresql/11/server/storage/itemptr.h" 1
# 17 "/usr/include/postgresql/11/server/storage/itemptr.h"
# 1 "/usr/include/postgresql/11/server/storage/block.h" 1
# 31 "/usr/include/postgresql/11/server/storage/block.h"
typedef uint32 BlockNumber;
# 53 "/usr/include/postgresql/11/server/storage/block.h"
typedef struct BlockIdData
{
 uint16 bi_hi;
 uint16 bi_lo;
} BlockIdData;

typedef BlockIdData *BlockId;
# 18 "/usr/include/postgresql/11/server/storage/itemptr.h" 2
# 1 "/usr/include/postgresql/11/server/storage/off.h" 1
# 17 "/usr/include/postgresql/11/server/storage/off.h"
# 1 "/usr/include/postgresql/11/server/storage/itemid.h" 1
# 24 "/usr/include/postgresql/11/server/storage/itemid.h"
typedef struct ItemIdData
{
 unsigned lp_off:15,
    lp_flags:2,
    lp_len:15;
} ItemIdData;

typedef ItemIdData *ItemId;
# 46 "/usr/include/postgresql/11/server/storage/itemid.h"
typedef uint16 ItemOffset;
typedef uint16 ItemLength;
# 18 "/usr/include/postgresql/11/server/storage/off.h" 2






typedef uint16 OffsetNumber;
# 19 "/usr/include/postgresql/11/server/storage/itemptr.h" 2
# 36 "/usr/include/postgresql/11/server/storage/itemptr.h"
typedef struct ItemPointerData
{
 BlockIdData ip_blkid;
 OffsetNumber ip_posid;
}



__attribute__((packed))
__attribute__((aligned(2)))

ItemPointerData;

typedef ItemPointerData *ItemPointer;
# 203 "/usr/include/postgresql/11/server/storage/itemptr.h"
extern 
# 203 "/usr/include/postgresql/11/server/storage/itemptr.h" 3 4
      _Bool 
# 203 "/usr/include/postgresql/11/server/storage/itemptr.h"
           ItemPointerEquals(ItemPointer pointer1, ItemPointer pointer2);
extern int32 ItemPointerCompare(ItemPointer arg1, ItemPointer arg2);
# 18 "/usr/include/postgresql/11/server/access/htup.h" 2



typedef struct HeapTupleHeaderData HeapTupleHeaderData;

typedef HeapTupleHeaderData *HeapTupleHeader;

typedef struct MinimalTupleData MinimalTupleData;

typedef MinimalTupleData *MinimalTuple;
# 62 "/usr/include/postgresql/11/server/access/htup.h"
typedef struct HeapTupleData
{
 uint32 t_len;
 ItemPointerData t_self;
 Oid t_tableOid;

 HeapTupleHeader t_data;
} HeapTupleData;

typedef HeapTupleData *HeapTuple;
# 81 "/usr/include/postgresql/11/server/access/htup.h"
extern CommandId HeapTupleHeaderGetCmin(HeapTupleHeader tup);
extern CommandId HeapTupleHeaderGetCmax(HeapTupleHeader tup);
extern void HeapTupleHeaderAdjustCmax(HeapTupleHeader tup,
        CommandId *cmax, 
# 84 "/usr/include/postgresql/11/server/access/htup.h" 3 4
                        _Bool 
# 84 "/usr/include/postgresql/11/server/access/htup.h"
                             *iscombo);


extern TransactionId HeapTupleGetUpdateXid(HeapTupleHeader tuple);
# 18 "/usr/include/postgresql/11/server/access/htup_details.h" 2
# 1 "/usr/include/postgresql/11/server/access/tupdesc.h" 1
# 17 "/usr/include/postgresql/11/server/access/tupdesc.h"
# 1 "/usr/include/postgresql/11/server/access/attnum.h" 1
# 21 "/usr/include/postgresql/11/server/access/attnum.h"
typedef int16 AttrNumber;
# 18 "/usr/include/postgresql/11/server/access/tupdesc.h" 2
# 1 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 1
# 25 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
# 1 "/usr/include/postgresql/11/server/catalog/genbki.h" 1
# 26 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 2
# 1 "/usr/include/postgresql/11/server/catalog/pg_attribute_d.h" 1
# 27 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 2
# 37 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
typedef struct FormData_pg_attribute
{
 Oid attrelid;
 NameData attname;
# 49 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
 Oid atttypid;
# 58 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
 int32 attstattarget ;





 int16 attlen;
# 79 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
 int16 attnum;





 int32 attndims;
# 94 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
 int32 attcacheoff ;







 int32 atttypmod ;





 
# 108 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 3 4
_Bool 
# 108 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
      attbyval;
# 123 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
 char attstorage;





 char attalign;


 
# 132 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 3 4
_Bool 
# 132 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
      attnotnull;


 
# 135 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 3 4
_Bool 
# 135 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
      atthasdef ;


 
# 138 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 3 4
_Bool 
# 138 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
      atthasmissing ;


 char attidentity ;


 
# 144 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 3 4
_Bool 
# 144 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
      attisdropped ;
# 155 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
 
# 155 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 3 4
_Bool 
# 155 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
      attislocal ;


 int32 attinhcount ;


 Oid attcollation;
# 181 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
} FormData_pg_attribute;
# 197 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
typedef FormData_pg_attribute *Form_pg_attribute;
# 19 "/usr/include/postgresql/11/server/access/tupdesc.h" 2
# 1 "/usr/include/postgresql/11/server/nodes/pg_list.h" 1
# 43 "/usr/include/postgresql/11/server/nodes/pg_list.h"
typedef struct ListCell ListCell;

typedef struct List
{
 NodeTag type;
 int length;
 ListCell *head;
 ListCell *tail;
} List;

struct ListCell
{
 union
 {
  void *ptr_value;
  int int_value;
  Oid oid_value;
 } data;
 ListCell *next;
};
# 76 "/usr/include/postgresql/11/server/nodes/pg_list.h"
static inline ListCell *
list_head(const List *l)
{
 return l ? l->head : 
# 79 "/usr/include/postgresql/11/server/nodes/pg_list.h" 3 4
                     ((void *)0)
# 79 "/usr/include/postgresql/11/server/nodes/pg_list.h"
                         ;
}

static inline ListCell *
list_tail(List *l)
{
 return l ? l->tail : 
# 85 "/usr/include/postgresql/11/server/nodes/pg_list.h" 3 4
                     ((void *)0)
# 85 "/usr/include/postgresql/11/server/nodes/pg_list.h"
                         ;
}

static inline int
list_length(const List *l)
{
 return l ? l->length : 0;
}
# 208 "/usr/include/postgresql/11/server/nodes/pg_list.h"
extern List *lappend(List *list, void *datum);
extern List *lappend_int(List *list, int datum);
extern List *lappend_oid(List *list, Oid datum);

extern ListCell *lappend_cell(List *list, ListCell *prev, void *datum);
extern ListCell *lappend_cell_int(List *list, ListCell *prev, int datum);
extern ListCell *lappend_cell_oid(List *list, ListCell *prev, Oid datum);

extern List *lcons(void *datum, List *list);
extern List *lcons_int(int datum, List *list);
extern List *lcons_oid(Oid datum, List *list);

extern List *list_concat(List *list1, List *list2);
extern List *list_truncate(List *list, int new_size);

extern ListCell *list_nth_cell(const List *list, int n);
extern void *list_nth(const List *list, int n);
extern int list_nth_int(const List *list, int n);
extern Oid list_nth_oid(const List *list, int n);


extern 
# 229 "/usr/include/postgresql/11/server/nodes/pg_list.h" 3 4
      _Bool 
# 229 "/usr/include/postgresql/11/server/nodes/pg_list.h"
           list_member(const List *list, const void *datum);
extern 
# 230 "/usr/include/postgresql/11/server/nodes/pg_list.h" 3 4
      _Bool 
# 230 "/usr/include/postgresql/11/server/nodes/pg_list.h"
           list_member_ptr(const List *list, const void *datum);
extern 
# 231 "/usr/include/postgresql/11/server/nodes/pg_list.h" 3 4
      _Bool 
# 231 "/usr/include/postgresql/11/server/nodes/pg_list.h"
           list_member_int(const List *list, int datum);
extern 
# 232 "/usr/include/postgresql/11/server/nodes/pg_list.h" 3 4
      _Bool 
# 232 "/usr/include/postgresql/11/server/nodes/pg_list.h"
           list_member_oid(const List *list, Oid datum);

extern List *list_delete(List *list, void *datum);
extern List *list_delete_ptr(List *list, void *datum);
extern List *list_delete_int(List *list, int datum);
extern List *list_delete_oid(List *list, Oid datum);
extern List *list_delete_first(List *list);
extern List *list_delete_cell(List *list, ListCell *cell, ListCell *prev);

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

extern List *list_append_unique(List *list, void *datum);
extern List *list_append_unique_ptr(List *list, void *datum);
extern List *list_append_unique_int(List *list, int datum);
extern List *list_append_unique_oid(List *list, Oid datum);

extern List *list_concat_unique(List *list1, List *list2);
extern List *list_concat_unique_ptr(List *list1, List *list2);
extern List *list_concat_unique_int(List *list1, List *list2);
extern List *list_concat_unique_oid(List *list1, List *list2);

extern void list_free(List *list);
extern void list_free_deep(List *list);

extern List *list_copy(const List *list);
extern List *list_copy_tail(const List *list, int nskip);

typedef int (*list_qsort_comparator) (const void *a, const void *b);
extern List *list_qsort(const List *list, list_qsort_comparator cmp);
# 20 "/usr/include/postgresql/11/server/access/tupdesc.h" 2


typedef struct attrDefault
{
 AttrNumber adnum;
 char *adbin;
} AttrDefault;

typedef struct attrMissing *MissingPtr;

typedef struct constrCheck
{
 char *ccname;
 char *ccbin;
 
# 34 "/usr/include/postgresql/11/server/access/tupdesc.h" 3 4
_Bool 
# 34 "/usr/include/postgresql/11/server/access/tupdesc.h"
      ccvalid;
 
# 35 "/usr/include/postgresql/11/server/access/tupdesc.h" 3 4
_Bool 
# 35 "/usr/include/postgresql/11/server/access/tupdesc.h"
      ccnoinherit;
} ConstrCheck;


typedef struct tupleConstr
{
 AttrDefault *defval;
 ConstrCheck *check;
 MissingPtr missing;
 uint16 num_defval;
 uint16 num_check;
 
# 46 "/usr/include/postgresql/11/server/access/tupdesc.h" 3 4
_Bool 
# 46 "/usr/include/postgresql/11/server/access/tupdesc.h"
      has_not_null;
} TupleConstr;
# 80 "/usr/include/postgresql/11/server/access/tupdesc.h"
typedef struct tupleDesc
{
 int natts;
 Oid tdtypeid;
 int32 tdtypmod;
 
# 85 "/usr/include/postgresql/11/server/access/tupdesc.h" 3 4
_Bool 
# 85 "/usr/include/postgresql/11/server/access/tupdesc.h"
      tdhasoid;
 int tdrefcount;
 TupleConstr *constr;

 FormData_pg_attribute attrs[];
} *TupleDesc;




extern TupleDesc CreateTemplateTupleDesc(int natts, 
# 95 "/usr/include/postgresql/11/server/access/tupdesc.h" 3 4
                                                   _Bool 
# 95 "/usr/include/postgresql/11/server/access/tupdesc.h"
                                                        hasoid);

extern TupleDesc CreateTupleDesc(int natts, 
# 97 "/usr/include/postgresql/11/server/access/tupdesc.h" 3 4
                                           _Bool 
# 97 "/usr/include/postgresql/11/server/access/tupdesc.h"
                                                hasoid,
    Form_pg_attribute *attrs);

extern TupleDesc CreateTupleDescCopy(TupleDesc tupdesc);

extern TupleDesc CreateTupleDescCopyConstr(TupleDesc tupdesc);





extern void TupleDescCopy(TupleDesc dst, TupleDesc src);

extern void TupleDescCopyEntry(TupleDesc dst, AttrNumber dstAttno,
       TupleDesc src, AttrNumber srcAttno);

extern void FreeTupleDesc(TupleDesc tupdesc);

extern void IncrTupleDescRefCount(TupleDesc tupdesc);
extern void DecrTupleDescRefCount(TupleDesc tupdesc);
# 130 "/usr/include/postgresql/11/server/access/tupdesc.h"
extern 
# 130 "/usr/include/postgresql/11/server/access/tupdesc.h" 3 4
      _Bool 
# 130 "/usr/include/postgresql/11/server/access/tupdesc.h"
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
# 19 "/usr/include/postgresql/11/server/access/htup_details.h" 2
# 1 "/usr/include/postgresql/11/server/access/tupmacs.h" 1
# 20 "/usr/include/postgresql/11/server/access/htup_details.h" 2
# 1 "/usr/include/postgresql/11/server/access/transam.h" 1
# 17 "/usr/include/postgresql/11/server/access/transam.h"
# 1 "/usr/include/postgresql/11/server/access/xlogdefs.h" 1
# 15 "/usr/include/postgresql/11/server/access/xlogdefs.h"
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



# 16 "/usr/include/postgresql/11/server/access/xlogdefs.h" 2






# 21 "/usr/include/postgresql/11/server/access/xlogdefs.h"
typedef uint64 XLogRecPtr;
# 34 "/usr/include/postgresql/11/server/access/xlogdefs.h"
typedef uint64 XLogSegNo;
# 45 "/usr/include/postgresql/11/server/access/xlogdefs.h"
typedef uint32 TimeLineID;





typedef uint16 RepOriginId;
# 18 "/usr/include/postgresql/11/server/access/transam.h" 2
# 106 "/usr/include/postgresql/11/server/access/transam.h"
typedef struct VariableCacheData
{



 Oid nextOid;
 uint32 oidCount;




 TransactionId nextXid;

 TransactionId oldestXid;
 TransactionId xidVacLimit;
 TransactionId xidWarnLimit;
 TransactionId xidStopLimit;
 TransactionId xidWrapLimit;
 Oid oldestXidDB;




 TransactionId oldestCommitTsXid;
 TransactionId newestCommitTsXid;




 TransactionId latestCompletedXid;





 TransactionId oldestClogXid;

} VariableCacheData;

typedef VariableCacheData *VariableCache;
# 154 "/usr/include/postgresql/11/server/access/transam.h"
extern 
# 154 "/usr/include/postgresql/11/server/access/transam.h" 3 4
      _Bool 
# 154 "/usr/include/postgresql/11/server/access/transam.h"
           TransactionStartedDuringRecovery(void);


extern VariableCache ShmemVariableCache;




extern 
# 162 "/usr/include/postgresql/11/server/access/transam.h" 3 4
      _Bool 
# 162 "/usr/include/postgresql/11/server/access/transam.h"
           TransactionIdDidCommit(TransactionId transactionId);
extern 
# 163 "/usr/include/postgresql/11/server/access/transam.h" 3 4
      _Bool 
# 163 "/usr/include/postgresql/11/server/access/transam.h"
           TransactionIdDidAbort(TransactionId transactionId);
extern 
# 164 "/usr/include/postgresql/11/server/access/transam.h" 3 4
      _Bool 
# 164 "/usr/include/postgresql/11/server/access/transam.h"
           TransactionIdIsKnownCompleted(TransactionId transactionId);
extern void TransactionIdAbort(TransactionId transactionId);
extern void TransactionIdCommitTree(TransactionId xid, int nxids, TransactionId *xids);
extern void TransactionIdAsyncCommitTree(TransactionId xid, int nxids, TransactionId *xids, XLogRecPtr lsn);
extern void TransactionIdAbortTree(TransactionId xid, int nxids, TransactionId *xids);
extern 
# 169 "/usr/include/postgresql/11/server/access/transam.h" 3 4
      _Bool 
# 169 "/usr/include/postgresql/11/server/access/transam.h"
           TransactionIdPrecedes(TransactionId id1, TransactionId id2);
extern 
# 170 "/usr/include/postgresql/11/server/access/transam.h" 3 4
      _Bool 
# 170 "/usr/include/postgresql/11/server/access/transam.h"
           TransactionIdPrecedesOrEquals(TransactionId id1, TransactionId id2);
extern 
# 171 "/usr/include/postgresql/11/server/access/transam.h" 3 4
      _Bool 
# 171 "/usr/include/postgresql/11/server/access/transam.h"
           TransactionIdFollows(TransactionId id1, TransactionId id2);
extern 
# 172 "/usr/include/postgresql/11/server/access/transam.h" 3 4
      _Bool 
# 172 "/usr/include/postgresql/11/server/access/transam.h"
           TransactionIdFollowsOrEquals(TransactionId id1, TransactionId id2);
extern TransactionId TransactionIdLatest(TransactionId mainxid,
     int nxids, const TransactionId *xids);
extern XLogRecPtr TransactionIdGetCommitLSN(TransactionId xid);


extern TransactionId GetNewTransactionId(
# 178 "/usr/include/postgresql/11/server/access/transam.h" 3 4
                                        _Bool 
# 178 "/usr/include/postgresql/11/server/access/transam.h"
                                             isSubXact);
extern TransactionId ReadNewTransactionId(void);
extern void SetTransactionIdLimit(TransactionId oldest_datfrozenxid,
       Oid oldest_datoid);
extern void AdvanceOldestClogXid(TransactionId oldest_datfrozenxid);
extern 
# 183 "/usr/include/postgresql/11/server/access/transam.h" 3 4
      _Bool 
# 183 "/usr/include/postgresql/11/server/access/transam.h"
           ForceTransactionIdLimitUpdate(void);
extern Oid GetNewObjectId(void);
# 21 "/usr/include/postgresql/11/server/access/htup_details.h" 2
# 1 "/usr/include/postgresql/11/server/storage/bufpage.h" 1
# 19 "/usr/include/postgresql/11/server/storage/bufpage.h"
# 1 "/usr/include/postgresql/11/server/storage/item.h" 1
# 17 "/usr/include/postgresql/11/server/storage/item.h"
typedef Pointer Item;
# 20 "/usr/include/postgresql/11/server/storage/bufpage.h" 2
# 74 "/usr/include/postgresql/11/server/storage/bufpage.h"
typedef Pointer Page;
# 83 "/usr/include/postgresql/11/server/storage/bufpage.h"
typedef uint16 LocationIndex;






typedef struct
{
 uint32 xlogid;
 uint32 xrecoff;
} PageXLogRecPtr;
# 147 "/usr/include/postgresql/11/server/storage/bufpage.h"
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
# 308 "/usr/include/postgresql/11/server/storage/bufpage.h"
static inline 
# 308 "/usr/include/postgresql/11/server/storage/bufpage.h" 3 4
             _Bool

# 309 "/usr/include/postgresql/11/server/storage/bufpage.h"
PageValidateSpecialPointer(Page page)
{
 ((void)
# 311 "/usr/include/postgresql/11/server/storage/bufpage.h" 3 4
1
# 311 "/usr/include/postgresql/11/server/storage/bufpage.h"
);
 ((void)
# 312 "/usr/include/postgresql/11/server/storage/bufpage.h" 3 4
1
# 312 "/usr/include/postgresql/11/server/storage/bufpage.h"
);
 ((void)
# 313 "/usr/include/postgresql/11/server/storage/bufpage.h" 3 4
1
# 313 "/usr/include/postgresql/11/server/storage/bufpage.h"
);

 return 
# 315 "/usr/include/postgresql/11/server/storage/bufpage.h" 3 4
       1
# 315 "/usr/include/postgresql/11/server/storage/bufpage.h"
           ;
}
# 422 "/usr/include/postgresql/11/server/storage/bufpage.h"
extern void PageInit(Page page, Size pageSize, Size specialSize);
extern 
# 423 "/usr/include/postgresql/11/server/storage/bufpage.h" 3 4
      _Bool 
# 423 "/usr/include/postgresql/11/server/storage/bufpage.h"
           PageIsVerified(Page page, BlockNumber blkno);
extern 
# 424 "/usr/include/postgresql/11/server/storage/bufpage.h" 3 4
      _Bool 
# 424 "/usr/include/postgresql/11/server/storage/bufpage.h"
           PageIsVerifiedExtended(Page page, BlockNumber blkno, int flags);
extern OffsetNumber PageAddItemExtended(Page page, Item item, Size size,
     OffsetNumber offsetNumber, int flags);
extern Page PageGetTempPage(Page page);
extern Page PageGetTempPageCopy(Page page);
extern Page PageGetTempPageCopySpecial(Page page);
extern void PageRestoreTempPage(Page tempPage, Page oldPage);
extern void PageRepairFragmentation(Page page);
extern Size PageGetFreeSpace(Page page);
extern Size PageGetFreeSpaceForMultipleTuples(Page page, int ntups);
extern Size PageGetExactFreeSpace(Page page);
extern Size PageGetHeapFreeSpace(Page page);
extern void PageIndexTupleDelete(Page page, OffsetNumber offset);
extern void PageIndexMultiDelete(Page page, OffsetNumber *itemnos, int nitems);
extern void PageIndexTupleDeleteNoCompact(Page page, OffsetNumber offset);
extern 
# 439 "/usr/include/postgresql/11/server/storage/bufpage.h" 3 4
      _Bool 
# 439 "/usr/include/postgresql/11/server/storage/bufpage.h"
           PageIndexTupleOverwrite(Page page, OffsetNumber offnum,
      Item newtup, Size newsize);
extern char *PageSetChecksumCopy(Page page, BlockNumber blkno);
extern void PageSetChecksumInplace(Page page, BlockNumber blkno);
# 22 "/usr/include/postgresql/11/server/access/htup_details.h" 2
# 120 "/usr/include/postgresql/11/server/access/htup_details.h"
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
# 149 "/usr/include/postgresql/11/server/access/htup_details.h"
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
# 639 "/usr/include/postgresql/11/server/access/htup_details.h"
struct MinimalTupleData
{
 uint32 t_len;

 char mt_padding[((
# 643 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
                 __builtin_offsetof (
# 643 "/usr/include/postgresql/11/server/access/htup_details.h"
                 HeapTupleHeaderData
# 643 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
                 , 
# 643 "/usr/include/postgresql/11/server/access/htup_details.h"
                 t_infomask2
# 643 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
                 ) 
# 643 "/usr/include/postgresql/11/server/access/htup_details.h"
                 - sizeof(uint32)) % 8)];



 uint16 t_infomask2;

 uint16 t_infomask;

 uint8 t_hoff;



 bits8 t_bits[];


};
# 796 "/usr/include/postgresql/11/server/access/htup_details.h"
extern Size heap_compute_data_size(TupleDesc tupleDesc,
        Datum *values, 
# 797 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
                      _Bool 
# 797 "/usr/include/postgresql/11/server/access/htup_details.h"
                           *isnull);
extern void heap_fill_tuple(TupleDesc tupleDesc,
    Datum *values, 
# 799 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
                  _Bool 
# 799 "/usr/include/postgresql/11/server/access/htup_details.h"
                       *isnull,
    char *data, Size data_size,
    uint16 *infomask, bits8 *bit);
extern 
# 802 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
      _Bool 
# 802 "/usr/include/postgresql/11/server/access/htup_details.h"
           heap_attisnull(HeapTuple tup, int attnum, TupleDesc tupleDesc);
extern Datum nocachegetattr(HeapTuple tup, int attnum,
      TupleDesc att);
extern Datum heap_getsysattr(HeapTuple tup, int attnum, TupleDesc tupleDesc,
    
# 806 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
   _Bool 
# 806 "/usr/include/postgresql/11/server/access/htup_details.h"
        *isnull);
extern Datum getmissingattr(TupleDesc tupleDesc,
      int attnum, 
# 808 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
                 _Bool 
# 808 "/usr/include/postgresql/11/server/access/htup_details.h"
                      *isnull);
extern HeapTuple heap_copytuple(HeapTuple tuple);
extern void heap_copytuple_with_tuple(HeapTuple src, HeapTuple dest);
extern Datum heap_copy_tuple_as_datum(HeapTuple tuple, TupleDesc tupleDesc);
extern HeapTuple heap_form_tuple(TupleDesc tupleDescriptor,
    Datum *values, 
# 813 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
                  _Bool 
# 813 "/usr/include/postgresql/11/server/access/htup_details.h"
                       *isnull);
extern HeapTuple heap_modify_tuple(HeapTuple tuple,
      TupleDesc tupleDesc,
      Datum *replValues,
      
# 817 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
     _Bool 
# 817 "/usr/include/postgresql/11/server/access/htup_details.h"
          *replIsnull,
      
# 818 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
     _Bool 
# 818 "/usr/include/postgresql/11/server/access/htup_details.h"
          *doReplace);
extern HeapTuple heap_modify_tuple_by_cols(HeapTuple tuple,
        TupleDesc tupleDesc,
        int nCols,
        int *replCols,
        Datum *replValues,
        
# 824 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
       _Bool 
# 824 "/usr/include/postgresql/11/server/access/htup_details.h"
            *replIsnull);
extern void heap_deform_tuple(HeapTuple tuple, TupleDesc tupleDesc,
      Datum *values, 
# 826 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
                    _Bool 
# 826 "/usr/include/postgresql/11/server/access/htup_details.h"
                         *isnull);
extern void heap_freetuple(HeapTuple htup);
extern MinimalTuple heap_form_minimal_tuple(TupleDesc tupleDescriptor,
      Datum *values, 
# 829 "/usr/include/postgresql/11/server/access/htup_details.h" 3 4
                    _Bool 
# 829 "/usr/include/postgresql/11/server/access/htup_details.h"
                         *isnull);
extern void heap_free_minimal_tuple(MinimalTuple mtup);
extern MinimalTuple heap_copy_minimal_tuple(MinimalTuple mtup);
extern HeapTuple heap_tuple_from_minimal_tuple(MinimalTuple mtup);
extern MinimalTuple minimal_tuple_from_heap_tuple(HeapTuple htup);
extern size_t varsize_any(void *p);
extern HeapTuple heap_expand_tuple(HeapTuple sourceTuple, TupleDesc tupleDesc);
extern MinimalTuple minimal_expand_tuple(HeapTuple sourceTuple, TupleDesc tupleDesc);
# 36 ".//src/include/utils/agtype.h" 2
# 1 "/usr/include/postgresql/11/server/lib/stringinfo.h" 1
# 35 "/usr/include/postgresql/11/server/lib/stringinfo.h"
typedef struct StringInfoData
{
 char *data;
 int len;
 int maxlen;
 int cursor;
} StringInfoData;

typedef StringInfoData *StringInfo;
# 72 "/usr/include/postgresql/11/server/lib/stringinfo.h"
extern StringInfo makeStringInfo(void);






extern void initStringInfo(StringInfo str);






extern void resetStringInfo(StringInfo str);
# 95 "/usr/include/postgresql/11/server/lib/stringinfo.h"
extern void appendStringInfo(StringInfo str, const char *fmt,...) __attribute__((format(gnu_printf, 2, 3)));
# 106 "/usr/include/postgresql/11/server/lib/stringinfo.h"
extern int appendStringInfoVA(StringInfo str, const char *fmt, va_list args) __attribute__((format(gnu_printf, 2, 0)));






extern void appendStringInfoString(StringInfo str, const char *s);






extern void appendStringInfoChar(StringInfo str, char ch);
# 136 "/usr/include/postgresql/11/server/lib/stringinfo.h"
extern void appendStringInfoSpaces(StringInfo str, int count);






extern void appendBinaryStringInfo(StringInfo str,
        const char *data, int datalen);






extern void appendBinaryStringInfoNT(StringInfo str,
       const char *data, int datalen);





extern void enlargeStringInfo(StringInfo str, int needed);
# 37 ".//src/include/utils/agtype.h" 2

# 1 "/usr/include/postgresql/11/server/utils/array.h" 1
# 65 "/usr/include/postgresql/11/server/utils/array.h"
# 1 "/usr/include/postgresql/11/server/utils/expandeddatum.h" 1
# 67 "/usr/include/postgresql/11/server/utils/expandeddatum.h"
typedef Size (*EOM_get_flat_size_method) (ExpandedObjectHeader *eohptr);
typedef void (*EOM_flatten_into_method) (ExpandedObjectHeader *eohptr,
           void *result, Size allocated_size);


typedef struct ExpandedObjectMethods
{
 EOM_get_flat_size_method get_flat_size;
 EOM_flatten_into_method flatten_into;
} ExpandedObjectMethods;
# 98 "/usr/include/postgresql/11/server/utils/expandeddatum.h"
struct ExpandedObjectHeader
{

 int32 vl_len_;


 const ExpandedObjectMethods *eoh_methods;


 MemoryContext eoh_context;


 char eoh_rw_ptr[(
# 110 "/usr/include/postgresql/11/server/utils/expandeddatum.h" 3 4
                 __builtin_offsetof (
# 110 "/usr/include/postgresql/11/server/utils/expandeddatum.h"
                 varattrib_1b_e
# 110 "/usr/include/postgresql/11/server/utils/expandeddatum.h" 3 4
                 , 
# 110 "/usr/include/postgresql/11/server/utils/expandeddatum.h"
                 va_data
# 110 "/usr/include/postgresql/11/server/utils/expandeddatum.h" 3 4
                 ) 
# 110 "/usr/include/postgresql/11/server/utils/expandeddatum.h"
                 + sizeof(varatt_expanded))];


 char eoh_ro_ptr[(
# 113 "/usr/include/postgresql/11/server/utils/expandeddatum.h" 3 4
                 __builtin_offsetof (
# 113 "/usr/include/postgresql/11/server/utils/expandeddatum.h"
                 varattrib_1b_e
# 113 "/usr/include/postgresql/11/server/utils/expandeddatum.h" 3 4
                 , 
# 113 "/usr/include/postgresql/11/server/utils/expandeddatum.h"
                 va_data
# 113 "/usr/include/postgresql/11/server/utils/expandeddatum.h" 3 4
                 ) 
# 113 "/usr/include/postgresql/11/server/utils/expandeddatum.h"
                 + sizeof(varatt_expanded))];
};
# 148 "/usr/include/postgresql/11/server/utils/expandeddatum.h"
extern ExpandedObjectHeader *DatumGetEOHP(Datum d);
extern void EOH_init_header(ExpandedObjectHeader *eohptr,
    const ExpandedObjectMethods *methods,
    MemoryContext obj_context);
extern Size EOH_get_flat_size(ExpandedObjectHeader *eohptr);
extern void EOH_flatten_into(ExpandedObjectHeader *eohptr,
     void *result, Size allocated_size);
extern Datum MakeExpandedObjectReadOnlyInternal(Datum d);
extern Datum TransferExpandedObject(Datum d, MemoryContext new_parent);
extern void DeleteExpandedObject(Datum d);
# 66 "/usr/include/postgresql/11/server/utils/array.h" 2


struct ExprState;
struct ExprContext;
# 80 "/usr/include/postgresql/11/server/utils/array.h"
typedef struct
{
 int32 vl_len_;
 int ndim;
 int32 dataoffset;
 Oid elemtype;
} ArrayType;
# 103 "/usr/include/postgresql/11/server/utils/array.h"
typedef struct ExpandedArrayHeader
{

 ExpandedObjectHeader hdr;


 int ea_magic;


 int ndims;
 int *dims;
 int *lbound;


 Oid element_type;
 int16 typlen;
 
# 119 "/usr/include/postgresql/11/server/utils/array.h" 3 4
_Bool 
# 119 "/usr/include/postgresql/11/server/utils/array.h"
      typbyval;
 char typalign;
# 134 "/usr/include/postgresql/11/server/utils/array.h"
 Datum *dvalues;
 
# 135 "/usr/include/postgresql/11/server/utils/array.h" 3 4
_Bool 
# 135 "/usr/include/postgresql/11/server/utils/array.h"
        *dnulls;
 int dvalueslen;
 int nelems;






 Size flat_size;
# 153 "/usr/include/postgresql/11/server/utils/array.h"
 ArrayType *fvalue;
 char *fstartptr;
 char *fendptr;
} ExpandedArrayHeader;
# 165 "/usr/include/postgresql/11/server/utils/array.h"
typedef union AnyArrayType
{
 ArrayType flt;
 ExpandedArrayHeader xpn;
} AnyArrayType;





typedef struct ArrayBuildState
{
 MemoryContext mcontext;
 Datum *dvalues;
 
# 179 "/usr/include/postgresql/11/server/utils/array.h" 3 4
_Bool 
# 179 "/usr/include/postgresql/11/server/utils/array.h"
        *dnulls;
 int alen;
 int nelems;
 Oid element_type;
 int16 typlen;
 
# 184 "/usr/include/postgresql/11/server/utils/array.h" 3 4
_Bool 
# 184 "/usr/include/postgresql/11/server/utils/array.h"
      typbyval;
 char typalign;
 
# 186 "/usr/include/postgresql/11/server/utils/array.h" 3 4
_Bool 
# 186 "/usr/include/postgresql/11/server/utils/array.h"
      private_cxt;
} ArrayBuildState;





typedef struct ArrayBuildStateArr
{
 MemoryContext mcontext;
 char *data;
 bits8 *nullbitmap;
 int abytes;
 int nbytes;
 int aitems;
 int nitems;
 int ndims;
 int dims[6];
 int lbs[6];
 Oid array_type;
 Oid element_type;
 
# 207 "/usr/include/postgresql/11/server/utils/array.h" 3 4
_Bool 
# 207 "/usr/include/postgresql/11/server/utils/array.h"
      private_cxt;
} ArrayBuildStateArr;





typedef struct ArrayBuildStateAny
{

 ArrayBuildState *scalarstate;
 ArrayBuildStateArr *arraystate;
} ArrayBuildStateAny;




typedef struct ArrayMetaState
{
 Oid element_type;
 int16 typlen;
 
# 228 "/usr/include/postgresql/11/server/utils/array.h" 3 4
_Bool 
# 228 "/usr/include/postgresql/11/server/utils/array.h"
      typbyval;
 char typalign;
 char typdelim;
 Oid typioparam;
 Oid typiofunc;
 FmgrInfo proc;
} ArrayMetaState;




typedef struct ArrayMapState
{
 ArrayMetaState inp_extra;
 ArrayMetaState ret_extra;
} ArrayMapState;


typedef struct ArrayIteratorData *ArrayIterator;
# 337 "/usr/include/postgresql/11/server/utils/array.h"
extern 
# 337 "/usr/include/postgresql/11/server/utils/array.h" 3 4
      _Bool 
# 337 "/usr/include/postgresql/11/server/utils/array.h"
           Array_nulls;




extern void CopyArrayEls(ArrayType *array,
    Datum *values,
    
# 344 "/usr/include/postgresql/11/server/utils/array.h" 3 4
   _Bool 
# 344 "/usr/include/postgresql/11/server/utils/array.h"
        *nulls,
    int nitems,
    int typlen,
    
# 347 "/usr/include/postgresql/11/server/utils/array.h" 3 4
   _Bool 
# 347 "/usr/include/postgresql/11/server/utils/array.h"
        typbyval,
    char typalign,
    
# 349 "/usr/include/postgresql/11/server/utils/array.h" 3 4
   _Bool 
# 349 "/usr/include/postgresql/11/server/utils/array.h"
        freedata);

extern Datum array_get_element(Datum arraydatum, int nSubscripts, int *indx,
      int arraytyplen, int elmlen, 
# 352 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                                  _Bool 
# 352 "/usr/include/postgresql/11/server/utils/array.h"
                                       elmbyval, char elmalign,
      
# 353 "/usr/include/postgresql/11/server/utils/array.h" 3 4
     _Bool 
# 353 "/usr/include/postgresql/11/server/utils/array.h"
          *isNull);
extern Datum array_set_element(Datum arraydatum, int nSubscripts, int *indx,
      Datum dataValue, 
# 355 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                      _Bool 
# 355 "/usr/include/postgresql/11/server/utils/array.h"
                           isNull,
      int arraytyplen, int elmlen, 
# 356 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                                  _Bool 
# 356 "/usr/include/postgresql/11/server/utils/array.h"
                                       elmbyval, char elmalign);
extern Datum array_get_slice(Datum arraydatum, int nSubscripts,
    int *upperIndx, int *lowerIndx,
    
# 359 "/usr/include/postgresql/11/server/utils/array.h" 3 4
   _Bool 
# 359 "/usr/include/postgresql/11/server/utils/array.h"
        *upperProvided, 
# 359 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                        _Bool 
# 359 "/usr/include/postgresql/11/server/utils/array.h"
                             *lowerProvided,
    int arraytyplen, int elmlen, 
# 360 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                                _Bool 
# 360 "/usr/include/postgresql/11/server/utils/array.h"
                                     elmbyval, char elmalign);
extern Datum array_set_slice(Datum arraydatum, int nSubscripts,
    int *upperIndx, int *lowerIndx,
    
# 363 "/usr/include/postgresql/11/server/utils/array.h" 3 4
   _Bool 
# 363 "/usr/include/postgresql/11/server/utils/array.h"
        *upperProvided, 
# 363 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                        _Bool 
# 363 "/usr/include/postgresql/11/server/utils/array.h"
                             *lowerProvided,
    Datum srcArrayDatum, 
# 364 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                        _Bool 
# 364 "/usr/include/postgresql/11/server/utils/array.h"
                             isNull,
    int arraytyplen, int elmlen, 
# 365 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                                _Bool 
# 365 "/usr/include/postgresql/11/server/utils/array.h"
                                     elmbyval, char elmalign);

extern Datum array_ref(ArrayType *array, int nSubscripts, int *indx,
    int arraytyplen, int elmlen, 
# 368 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                                _Bool 
# 368 "/usr/include/postgresql/11/server/utils/array.h"
                                     elmbyval, char elmalign,
    
# 369 "/usr/include/postgresql/11/server/utils/array.h" 3 4
   _Bool 
# 369 "/usr/include/postgresql/11/server/utils/array.h"
        *isNull);
extern ArrayType *array_set(ArrayType *array, int nSubscripts, int *indx,
    Datum dataValue, 
# 371 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                    _Bool 
# 371 "/usr/include/postgresql/11/server/utils/array.h"
                         isNull,
    int arraytyplen, int elmlen, 
# 372 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                                _Bool 
# 372 "/usr/include/postgresql/11/server/utils/array.h"
                                     elmbyval, char elmalign);

extern Datum array_map(Datum arrayd,
    struct ExprState *exprstate, struct ExprContext *econtext,
    Oid retType, ArrayMapState *amstate);

extern void array_bitmap_copy(bits8 *destbitmap, int destoffset,
      const bits8 *srcbitmap, int srcoffset,
      int nitems);

extern ArrayType *construct_array(Datum *elems, int nelems,
    Oid elmtype,
    int elmlen, 
# 384 "/usr/include/postgresql/11/server/utils/array.h" 3 4
               _Bool 
# 384 "/usr/include/postgresql/11/server/utils/array.h"
                    elmbyval, char elmalign);
extern ArrayType *construct_md_array(Datum *elems,
       
# 386 "/usr/include/postgresql/11/server/utils/array.h" 3 4
      _Bool 
# 386 "/usr/include/postgresql/11/server/utils/array.h"
           *nulls,
       int ndims,
       int *dims,
       int *lbs,
       Oid elmtype, int elmlen, 
# 390 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                               _Bool 
# 390 "/usr/include/postgresql/11/server/utils/array.h"
                                    elmbyval, char elmalign);
extern ArrayType *construct_empty_array(Oid elmtype);
extern ExpandedArrayHeader *construct_empty_expanded_array(Oid element_type,
          MemoryContext parentcontext,
          ArrayMetaState *metacache);
extern void deconstruct_array(ArrayType *array,
      Oid elmtype,
      int elmlen, 
# 397 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                 _Bool 
# 397 "/usr/include/postgresql/11/server/utils/array.h"
                      elmbyval, char elmalign,
      Datum **elemsp, 
# 398 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                     _Bool 
# 398 "/usr/include/postgresql/11/server/utils/array.h"
                          **nullsp, int *nelemsp);
extern 
# 399 "/usr/include/postgresql/11/server/utils/array.h" 3 4
      _Bool 
# 399 "/usr/include/postgresql/11/server/utils/array.h"
           array_contains_nulls(ArrayType *array);

extern ArrayBuildState *initArrayResult(Oid element_type,
    MemoryContext rcontext, 
# 402 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                           _Bool 
# 402 "/usr/include/postgresql/11/server/utils/array.h"
                                subcontext);
extern ArrayBuildState *accumArrayResult(ArrayBuildState *astate,
     Datum dvalue, 
# 404 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                  _Bool 
# 404 "/usr/include/postgresql/11/server/utils/array.h"
                       disnull,
     Oid element_type,
     MemoryContext rcontext);
extern Datum makeArrayResult(ArrayBuildState *astate,
    MemoryContext rcontext);
extern Datum makeMdArrayResult(ArrayBuildState *astate, int ndims,
      int *dims, int *lbs, MemoryContext rcontext, 
# 410 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                                                  _Bool 
# 410 "/usr/include/postgresql/11/server/utils/array.h"
                                                       release);

extern ArrayBuildStateArr *initArrayResultArr(Oid array_type, Oid element_type,
       MemoryContext rcontext, 
# 413 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                              _Bool 
# 413 "/usr/include/postgresql/11/server/utils/array.h"
                                   subcontext);
extern ArrayBuildStateArr *accumArrayResultArr(ArrayBuildStateArr *astate,
     Datum dvalue, 
# 415 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                  _Bool 
# 415 "/usr/include/postgresql/11/server/utils/array.h"
                       disnull,
     Oid array_type,
     MemoryContext rcontext);
extern Datum makeArrayResultArr(ArrayBuildStateArr *astate,
       MemoryContext rcontext, 
# 419 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                              _Bool 
# 419 "/usr/include/postgresql/11/server/utils/array.h"
                                   release);

extern ArrayBuildStateAny *initArrayResultAny(Oid input_type,
       MemoryContext rcontext, 
# 422 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                              _Bool 
# 422 "/usr/include/postgresql/11/server/utils/array.h"
                                   subcontext);
extern ArrayBuildStateAny *accumArrayResultAny(ArrayBuildStateAny *astate,
     Datum dvalue, 
# 424 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                  _Bool 
# 424 "/usr/include/postgresql/11/server/utils/array.h"
                       disnull,
     Oid input_type,
     MemoryContext rcontext);
extern Datum makeArrayResultAny(ArrayBuildStateAny *astate,
       MemoryContext rcontext, 
# 428 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                              _Bool 
# 428 "/usr/include/postgresql/11/server/utils/array.h"
                                   release);

extern ArrayIterator array_create_iterator(ArrayType *arr, int slice_ndim, ArrayMetaState *mstate);
extern 
# 431 "/usr/include/postgresql/11/server/utils/array.h" 3 4
      _Bool 
# 431 "/usr/include/postgresql/11/server/utils/array.h"
           array_iterate(ArrayIterator iterator, Datum *value, 
# 431 "/usr/include/postgresql/11/server/utils/array.h" 3 4
                                                               _Bool 
# 431 "/usr/include/postgresql/11/server/utils/array.h"
                                                                    *isnull);
extern void array_free_iterator(ArrayIterator iterator);





extern int ArrayGetOffset(int n, const int *dim, const int *lb, const int *indx);
extern int ArrayGetOffset0(int n, const int *tup, const int *scale);
extern int ArrayGetNItems(int ndim, const int *dims);
extern void ArrayCheckBounds(int ndim, const int *dims, const int *lb);
extern void mda_get_range(int n, int *span, const int *st, const int *endp);
extern void mda_get_prod(int n, const int *range, int *prod);
extern void mda_get_offset_values(int n, int *dist, const int *prod, const int *span);
extern int mda_next_tuple(int n, int *curr, const int *span);
extern int32 *ArrayGetIntegerTypmods(ArrayType *arr, int *n);




extern Datum expand_array(Datum arraydatum, MemoryContext parentcontext,
    ArrayMetaState *metacache);
extern ExpandedArrayHeader *DatumGetExpandedArray(Datum d);
extern ExpandedArrayHeader *DatumGetExpandedArrayX(Datum d,
        ArrayMetaState *metacache);
extern AnyArrayType *DatumGetAnyArrayP(Datum d);
extern void deconstruct_expanded_array(ExpandedArrayHeader *eah);
# 39 ".//src/include/utils/agtype.h" 2

# 1 "/usr/include/postgresql/11/server/utils/syscache.h" 1
# 32 "/usr/include/postgresql/11/server/utils/syscache.h"
enum SysCacheIdentifier
{
 AGGFNOID = 0,
 AMNAME,
 AMOID,
 AMOPOPID,
 AMOPSTRATEGY,
 AMPROCNUM,
 ATTNAME,
 ATTNUM,
 AUTHMEMMEMROLE,
 AUTHMEMROLEMEM,
 AUTHNAME,
 AUTHOID,
 CASTSOURCETARGET,
 CLAAMNAMENSP,
 CLAOID,
 COLLNAMEENCNSP,
 COLLOID,
 CONDEFAULT,
 CONNAMENSP,
 CONSTROID,
 CONVOID,
 DATABASEOID,
 DEFACLROLENSPOBJ,
 ENUMOID,
 ENUMTYPOIDNAME,
 EVENTTRIGGERNAME,
 EVENTTRIGGEROID,
 FOREIGNDATAWRAPPERNAME,
 FOREIGNDATAWRAPPEROID,
 FOREIGNSERVERNAME,
 FOREIGNSERVEROID,
 FOREIGNTABLEREL,
 INDEXRELID,
 LANGNAME,
 LANGOID,
 NAMESPACENAME,
 NAMESPACEOID,
 OPERNAMENSP,
 OPEROID,
 OPFAMILYAMNAMENSP,
 OPFAMILYOID,
 PARTRELID,
 PROCNAMEARGSNSP,
 PROCOID,
 PUBLICATIONNAME,
 PUBLICATIONOID,
 PUBLICATIONREL,
 PUBLICATIONRELMAP,
 RANGETYPE,
 RELNAMENSP,
 RELOID,
 REPLORIGIDENT,
 REPLORIGNAME,
 RULERELNAME,
 SEQRELID,
 STATEXTNAMENSP,
 STATEXTOID,
 STATRELATTINH,
 SUBSCRIPTIONNAME,
 SUBSCRIPTIONOID,
 SUBSCRIPTIONRELMAP,
 TABLESPACEOID,
 TRFOID,
 TRFTYPELANG,
 TSCONFIGMAP,
 TSCONFIGNAMENSP,
 TSCONFIGOID,
 TSDICTNAMENSP,
 TSDICTOID,
 TSPARSERNAMENSP,
 TSPARSEROID,
 TSTEMPLATENAMENSP,
 TSTEMPLATEOID,
 TYPENAMENSP,
 TYPEOID,
 USERMAPPINGOID,
 USERMAPPINGUSERSERVER


};

extern void InitCatalogCache(void);
extern void InitCatalogCachePhase2(void);

extern HeapTuple SearchSysCache(int cacheId,
      Datum key1, Datum key2, Datum key3, Datum key4);





extern HeapTuple SearchSysCache1(int cacheId,
    Datum key1);
extern HeapTuple SearchSysCache2(int cacheId,
    Datum key1, Datum key2);
extern HeapTuple SearchSysCache3(int cacheId,
    Datum key1, Datum key2, Datum key3);
extern HeapTuple SearchSysCache4(int cacheId,
    Datum key1, Datum key2, Datum key3, Datum key4);

extern void ReleaseSysCache(HeapTuple tuple);


extern HeapTuple SearchSysCacheCopy(int cacheId,
       Datum key1, Datum key2, Datum key3, Datum key4);
extern 
# 139 "/usr/include/postgresql/11/server/utils/syscache.h" 3 4
      _Bool 
# 139 "/usr/include/postgresql/11/server/utils/syscache.h"
           SearchSysCacheExists(int cacheId,
      Datum key1, Datum key2, Datum key3, Datum key4);
extern Oid GetSysCacheOid(int cacheId,
      Datum key1, Datum key2, Datum key3, Datum key4);

extern HeapTuple SearchSysCacheAttName(Oid relid, const char *attname);
extern HeapTuple SearchSysCacheCopyAttName(Oid relid, const char *attname);
extern 
# 146 "/usr/include/postgresql/11/server/utils/syscache.h" 3 4
      _Bool 
# 146 "/usr/include/postgresql/11/server/utils/syscache.h"
           SearchSysCacheExistsAttName(Oid relid, const char *attname);

extern HeapTuple SearchSysCacheAttNum(Oid relid, int16 attnum);
extern HeapTuple SearchSysCacheCopyAttNum(Oid relid, int16 attnum);

extern Datum SysCacheGetAttr(int cacheId, HeapTuple tup,
    AttrNumber attributeNumber, 
# 152 "/usr/include/postgresql/11/server/utils/syscache.h" 3 4
                               _Bool 
# 152 "/usr/include/postgresql/11/server/utils/syscache.h"
                                    *isNull);

extern uint32 GetSysCacheHashValue(int cacheId,
      Datum key1, Datum key2, Datum key3, Datum key4);


struct catclist;
extern struct catclist *SearchSysCacheList(int cacheId, int nkeys,
       Datum key1, Datum key2, Datum key3);

extern void SysCacheInvalidate(int cacheId, uint32 hashValue);

extern 
# 164 "/usr/include/postgresql/11/server/utils/syscache.h" 3 4
      _Bool 
# 164 "/usr/include/postgresql/11/server/utils/syscache.h"
           RelationInvalidatesSnapshotsOnly(Oid relid);
extern 
# 165 "/usr/include/postgresql/11/server/utils/syscache.h" 3 4
      _Bool 
# 165 "/usr/include/postgresql/11/server/utils/syscache.h"
           RelationHasSysCache(Oid relid);
extern 
# 166 "/usr/include/postgresql/11/server/utils/syscache.h" 3 4
      _Bool 
# 166 "/usr/include/postgresql/11/server/utils/syscache.h"
           RelationSupportsSysCache(Oid relid);
# 41 ".//src/include/utils/agtype.h" 2

# 1 ".//src/include/catalog/ag_namespace.h" 1
# 25 ".//src/include/catalog/ag_namespace.h"
Oid ag_catalog_namespace_id(void);
Oid pg_catalog_namespace_id(void);
# 43 ".//src/include/utils/agtype.h" 2
# 1 ".//src/include/utils/graphid.h" 1
# 26 ".//src/include/utils/graphid.h"
# 1 "/usr/include/postgresql/11/server/utils/fmgroids.h" 1
# 27 ".//src/include/utils/graphid.h" 2




typedef int64 graphid;
# 62 ".//src/include/utils/graphid.h"
graphid make_graphid(const int32 label_id, const int64 entry_id);
int32 get_graphid_label_id(const graphid gid);
int64 get_graphid_entry_id(const graphid gid);
Oid get_GRAPHIDOID(void);
Oid get_GRAPHIDARRAYOID(void);
void clear_global_Oids_GRAPHID(void);
# 44 ".//src/include/utils/agtype.h" 2


typedef enum
{
    WAGT_DONE,
    WAGT_KEY,
    WAGT_VALUE,
    WAGT_ELEM,
    WAGT_BEGIN_ARRAY,
    WAGT_END_ARRAY,
    WAGT_BEGIN_OBJECT,
    WAGT_END_OBJECT
} agtype_iterator_token;
# 102 ".//src/include/utils/agtype.h"
typedef struct agtype_pair agtype_pair;
typedef struct agtype_value agtype_value;
# 169 ".//src/include/utils/agtype.h"
typedef uint32 agtentry;
# 233 ".//src/include/utils/agtype.h"
typedef struct agtype_container
{
    uint32 header;
    agtentry children[];


} agtype_container;
# 278 ".//src/include/utils/agtype.h"
typedef struct
{
    int32 vl_len_;
    agtype_container root;
} agtype;
# 309 ".//src/include/utils/agtype.h"
enum agtype_value_type
{

    AGTV_NULL = 0x0,
    AGTV_STRING,
    AGTV_NUMERIC,
    AGTV_INTEGER,
    AGTV_FLOAT,
    AGTV_BOOL,
    AGTV_VERTEX,
    AGTV_EDGE,
    AGTV_PATH,

    AGTV_ARRAY = 0x10,
    AGTV_OBJECT,

    AGTV_BINARY
};







struct agtype_value
{
    enum agtype_value_type type;

    union
    {
        int64 int_value;
        float8 float_value;
        Numeric numeric;
        
# 343 ".//src/include/utils/agtype.h" 3 4
       _Bool 
# 343 ".//src/include/utils/agtype.h"
            boolean;
        struct
        {
            int len;
            char *val;
        } string;

        struct
        {
            int num_elems;
            agtype_value *elems;
            
# 354 ".//src/include/utils/agtype.h" 3 4
           _Bool 
# 354 ".//src/include/utils/agtype.h"
                raw_scalar;
        } array;

        struct
        {
            int num_pairs;
            agtype_pair *pairs;
        } object;

        struct
        {
            int len;
            agtype_container *data;
        } binary;
    } val;
};
# 384 ".//src/include/utils/agtype.h"
struct agtype_pair
{
    agtype_value key;
    agtype_value value;
    uint32 order;
};


typedef struct agtype_parse_state
{
    agtype_value cont_val;
    Size size;
    struct agtype_parse_state *next;
# 405 ".//src/include/utils/agtype.h"
    agtype_value *last_updated_value;
} agtype_parse_state;





typedef enum
{
    AGTI_ARRAY_START,
    AGTI_ARRAY_ELEM,
    AGTI_OBJECT_START,
    AGTI_OBJECT_KEY,
    AGTI_OBJECT_VALUE
} agt_iterator_state;

typedef struct agtype_iterator
{

    agtype_container *container;
    uint32 num_elems;



    
# 429 ".//src/include/utils/agtype.h" 3 4
   _Bool 
# 429 ".//src/include/utils/agtype.h"
        is_scalar;
    agtentry *children;

    char *data_proper;


    int curr_index;


    uint32 curr_data_offset;






    uint32 curr_value_offset;


    agt_iterator_state state;

    struct agtype_iterator *parent;
} agtype_iterator;


typedef struct agtype_in_state
{
    agtype_parse_state *parse_state;
    agtype_value *res;
} agtype_in_state;


int reserve_from_buffer(StringInfo buffer, int len);
short pad_buffer_to_int(StringInfo buffer);
uint32 get_agtype_offset(const agtype_container *agtc, int index);
uint32 get_agtype_length(const agtype_container *agtc, int index);
int compare_agtype_containers_orderability(agtype_container *a,
                                           agtype_container *b);
agtype_value *find_agtype_value_from_container(agtype_container *container,
                                               uint32 flags,
                                               agtype_value *key);
agtype_value *get_ith_agtype_value_from_container(agtype_container *container,
                                                  uint32 i);
agtype_value *push_agtype_value(agtype_parse_state **pstate,
                                agtype_iterator_token seq,
                                agtype_value *agtval);
agtype_iterator *agtype_iterator_init(agtype_container *container);
agtype_iterator_token agtype_iterator_next(agtype_iterator **it,
                                           agtype_value *val,
                                           
# 478 ".//src/include/utils/agtype.h" 3 4
                                          _Bool 
# 478 ".//src/include/utils/agtype.h"
                                               skip_nested);
agtype *agtype_value_to_agtype(agtype_value *val);

# 480 ".//src/include/utils/agtype.h" 3 4
_Bool 
# 480 ".//src/include/utils/agtype.h"
    agtype_deep_contains(agtype_iterator **val,
                          agtype_iterator **m_contained);
void agtype_hash_scalar_value(const agtype_value *scalar_val, uint32 *hash);
void agtype_hash_scalar_value_extended(const agtype_value *scalar_val,
                                       uint64 *hash, uint64 seed);
void convert_extended_array(StringInfo buffer, agtentry *pheader,
                            agtype_value *val);
void convert_extended_object(StringInfo buffer, agtentry *pheader,
                             agtype_value *val);
Datum get_numeric_datum_from_agtype_value(agtype_value *agtv);

# 490 ".//src/include/utils/agtype.h" 3 4
_Bool 
# 490 ".//src/include/utils/agtype.h"
    is_numeric_result(agtype_value *lhs, agtype_value *rhs);
# 508 ".//src/include/utils/agtype.h"
agtype_value *get_agtype_value_object_value(const agtype_value *agtv_object,
                                            char *search_key,
                                            int search_key_length);
char *agtype_to_cstring(StringInfo out, agtype_container *in,
                        int estimated_len);
char *agtype_to_cstring_indent(StringInfo out, agtype_container *in,
                               int estimated_len);
size_t check_string_length(size_t len);
Datum integer_to_agtype(int64 i);
Datum float_to_agtype(float8 f);
Datum string_to_agtype(char *s);
Datum boolean_to_agtype(
# 519 ".//src/include/utils/agtype.h" 3 4
                       _Bool 
# 519 ".//src/include/utils/agtype.h"
                            b);
void uniqueify_agtype_object(agtype_value *object);
char *agtype_value_type_to_string(enum agtype_value_type type);

# 522 ".//src/include/utils/agtype.h" 3 4
_Bool 
# 522 ".//src/include/utils/agtype.h"
    is_decimal_needed(char *numstr);
int compare_agtype_scalar_values(agtype_value *a, agtype_value *b);
agtype_value *alter_property_value(agtype_value *properties, char *var_name,
                                   agtype *new_v, 
# 525 ".//src/include/utils/agtype.h" 3 4
                                                 _Bool 
# 525 ".//src/include/utils/agtype.h"
                                                      remove_property);

agtype *get_one_agtype_from_variadic_args(FunctionCallInfo fcinfo,
                                          int variadic_offset,
                                          int expected_nargs);
Datum make_vertex(Datum id, Datum label, Datum properties);
Datum make_edge(Datum id, Datum startid, Datum endid, Datum label,
                   Datum properties);
Datum make_path(List *path);
Datum column_get_datum(TupleDesc tupdesc, HeapTuple tuple, int column,
                       const char *attname, Oid typid, 
# 535 ".//src/include/utils/agtype.h" 3 4
                                                      _Bool 
# 535 ".//src/include/utils/agtype.h"
                                                           isnull);
agtype_value *agtype_value_build_vertex(graphid id, char *label,
                                        Datum properties);
agtype_value *agtype_value_build_edge(graphid id, char *label, graphid end_id,
                                      graphid start_id, Datum properties);
agtype_value *get_agtype_value(char *funcname, agtype *agt_arg,
                               enum agtype_value_type type, 
# 541 ".//src/include/utils/agtype.h" 3 4
                                                           _Bool 
# 541 ".//src/include/utils/agtype.h"
                                                                error);

# 542 ".//src/include/utils/agtype.h" 3 4
_Bool 
# 542 ".//src/include/utils/agtype.h"
    is_agtype_null(agtype *agt_arg);
agtype_value *string_to_agtype_value(char *s);
agtype_value *integer_to_agtype_value(int64 int_value);
void add_agtype(Datum val, 
# 545 ".//src/include/utils/agtype.h" 3 4
                          _Bool 
# 545 ".//src/include/utils/agtype.h"
                               is_null, agtype_in_state *result, Oid val_type,
                
# 546 ".//src/include/utils/agtype.h" 3 4
               _Bool 
# 546 ".//src/include/utils/agtype.h"
                    key_scalar);


Oid get_AGTYPEOID(void);
Oid get_AGTYPEARRAYOID(void);
void clear_global_Oids_AGTYPE(void);
# 34 "src/backend/utils/adt/agtype_ops.c" 2

static void ereport_op_str(const char *op, agtype *lhs, agtype *rhs);
static agtype *agtype_concat(agtype *agt1, agtype *agt2);
static agtype_value *iterator_concat(agtype_iterator **it1,
                                     agtype_iterator **it2,
                                     agtype_parse_state **state);
static void concat_to_agtype_string(agtype_value *result, char *lhs, int llen,
                                    char *rhs, int rlen);
static char *get_string_from_agtype_value(agtype_value *agtv, int *length);

static void concat_to_agtype_string(agtype_value *result, char *lhs, int llen,
                                    char *rhs, int rlen)
{
    int length = llen + rlen;
    char *buffer = result->val.string.val;

    ((void)
# 50 "src/backend/utils/adt/agtype_ops.c" 3 4
   1
# 50 "src/backend/utils/adt/agtype_ops.c"
   );
    check_string_length(length);
    buffer = palloc(length);

    strncpy(buffer, lhs, llen);
    strncpy(buffer + llen, rhs, rlen);

    result->type = AGTV_STRING;
    result->val.string.len = length;
    result->val.string.val = buffer;
}

static char *get_string_from_agtype_value(agtype_value *agtv, int *length)
{
    Datum number;
    char *string;

    switch (agtv->type)
    {
    case AGTV_INTEGER:
        number = DirectFunctionCall1Coll(int8out, ((Oid) 0), ((Datum) (agtv->val.int_value)))
                                                                       ;
        string = ((char *) ((Pointer) (number)));
        *length = strlen(string);
        return string;
    case AGTV_FLOAT:
        number = DirectFunctionCall1Coll(float8out, ((Oid) 0), Float8GetDatum(agtv->val.float_value))
                                                                           ;
        string = ((char *) ((Pointer) (number)));
        *length = strlen(string);

        if (is_decimal_needed(string))
        {
            char *str = palloc(*length + 2);
            strncpy(str, string, *length);
            strncpy(str + *length, ".0", 2);
            *length += 2;
            string = str;
        }
        return string;
    case AGTV_STRING:
        *length = agtv->val.string.len;
        return agtv->val.string.val;

    case AGTV_NUMERIC:
        string = ((char *) ((Pointer) (DirectFunctionCall1Coll(numeric_out, ((Oid) 0), ((Datum) (agtv->val.numeric))))))
                                                         ;
        *length = strlen(string);
        return string;

    case AGTV_NULL:
    case AGTV_BOOL:
    case AGTV_ARRAY:
    case AGTV_OBJECT:
    case AGTV_BINARY:
    default:
        *length = 0;
        return 
# 107 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0)
# 107 "src/backend/utils/adt/agtype_ops.c"
                  ;
    }
    return 
# 109 "src/backend/utils/adt/agtype_ops.c" 3 4
          ((void *)0)
# 109 "src/backend/utils/adt/agtype_ops.c"
              ;
}

Datum get_numeric_datum_from_agtype_value(agtype_value *agtv)
{
    switch (agtv->type)
    {
    case AGTV_INTEGER:
        return DirectFunctionCall1Coll(int8_numeric, ((Oid) 0), ((Datum) (agtv->val.int_value)))
                                                                     ;
    case AGTV_FLOAT:
        return DirectFunctionCall1Coll(float8_numeric, ((Oid) 0), Float8GetDatum(agtv->val.float_value))
                                                                         ;
    case AGTV_NUMERIC:
        return ((Datum) (agtv->val.numeric));

    default:
        break;
    }

    return 0;
}


# 132 "src/backend/utils/adt/agtype_ops.c" 3 4
_Bool 
# 132 "src/backend/utils/adt/agtype_ops.c"
    is_numeric_result(agtype_value *lhs, agtype_value *rhs)
{
    if (((lhs->type == AGTV_NUMERIC || rhs->type == AGTV_NUMERIC) &&
         (lhs->type == AGTV_INTEGER || lhs->type == AGTV_FLOAT ||
          rhs->type == AGTV_INTEGER || rhs->type == AGTV_FLOAT )) ||
        (lhs->type == AGTV_NUMERIC && rhs->type == AGTV_NUMERIC))
        return 
# 138 "src/backend/utils/adt/agtype_ops.c" 3 4
              1
# 138 "src/backend/utils/adt/agtype_ops.c"
                  ;
    return 
# 139 "src/backend/utils/adt/agtype_ops.c" 3 4
          0
# 139 "src/backend/utils/adt/agtype_ops.c"
               ;
}

extern Datum agtype_add(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_add(void); const Pg_finfo_record * pg_finfo_agtype_add (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;


Datum agtype_add(FunctionCallInfo fcinfo)
{
    agtype *lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    agtype_value *agtv_lhs;
    agtype_value *agtv_rhs;
    agtype_value agtv_result;


    if (!(((*(uint32 *)(((varattrib_4b *) (lhs))->va_4byte.va_data) & 0x10000000) != 0) && ((*(uint32 *)(((varattrib_4b *) (rhs))->va_4byte.va_data) & 0x10000000) != 0)))
    {
        Datum agt;


        if ((((*(uint32 *)(((varattrib_4b *) (lhs))->va_4byte.va_data) & 0x10000000) != 0) && ((*(uint32 *)(((varattrib_4b *) (rhs))->va_4byte.va_data) & 0x20000000) != 0)) ||
            (((*(uint32 *)(((varattrib_4b *) (lhs))->va_4byte.va_data) & 0x20000000) != 0) && ((*(uint32 *)(((varattrib_4b *) (rhs))->va_4byte.va_data) & 0x10000000) != 0)) ||

            (((*(uint32 *)(((varattrib_4b *) (lhs))->va_4byte.va_data) & 0x20000000) != 0) && ((*(uint32 *)(((varattrib_4b *) (rhs))->va_4byte.va_data) & 0x20000000) != 0)))
            ereport_op_str("+", lhs, rhs);

        agt = ((Datum) (agtype_concat(lhs, rhs)));

        return (agt);
    }


    agtv_lhs = get_ith_agtype_value_from_container(&lhs->root, 0);
    agtv_rhs = get_ith_agtype_value_from_container(&rhs->root, 0);





    if ((agtv_lhs->type == AGTV_STRING || agtv_rhs->type == AGTV_STRING) &&
        (agtv_lhs->type == AGTV_INTEGER || agtv_lhs->type == AGTV_FLOAT ||
         agtv_lhs->type == AGTV_NUMERIC || agtv_lhs->type == AGTV_STRING ||
         agtv_rhs->type == AGTV_INTEGER || agtv_rhs->type == AGTV_FLOAT ||
         agtv_rhs->type == AGTV_NUMERIC || agtv_rhs->type == AGTV_STRING))
    {
        int llen = 0;
        char *lhs = get_string_from_agtype_value(agtv_lhs, &llen);
        int rlen = 0;
        char *rhs = get_string_from_agtype_value(agtv_rhs, &rlen);

        concat_to_agtype_string(&agtv_result, lhs, llen, rhs, rlen);
    }

    else if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_INTEGER;
        agtv_result.val.int_value = agtv_lhs->val.int_value +
                                    agtv_rhs->val.int_value;
    }

    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.float_value +
                                      agtv_rhs->val.float_value;
    }

    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.float_value +
                                      agtv_rhs->val.int_value;
    }

    else if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.int_value +
                                      agtv_rhs->val.float_value;
    }

    else if (is_numeric_result(agtv_lhs, agtv_rhs))
    {
        Datum numd, lhsd, rhsd;

        lhsd = get_numeric_datum_from_agtype_value(agtv_lhs);
        rhsd = get_numeric_datum_from_agtype_value(agtv_rhs);
        numd = DirectFunctionCall2Coll(numeric_add, ((Oid) 0), lhsd, rhsd);

        agtv_result.type = AGTV_NUMERIC;
        agtv_result.val.numeric = ((Numeric) pg_detoast_datum((struct varlena *) ((Pointer) (numd))));
    }
    else

        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 233, __func__, 
# 233 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 233 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("Invalid input parameter types for agtype_add")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                                ;

    return ((Datum) (agtype_value_to_agtype(&agtv_result)));
}

extern Datum agtype_any_add(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_add(void); const Pg_finfo_record * pg_finfo_agtype_any_add (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;


Datum agtype_any_add(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 251 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 251 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 251 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 251 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 253 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 253 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_add, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                     ;

    return ((Datum) (((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) (result))))));
}

extern Datum agtype_sub(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_sub(void); const Pg_finfo_record * pg_finfo_agtype_sub (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_sub(FunctionCallInfo fcinfo)
{
    agtype *lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    agtype_value *agtv_lhs;
    agtype_value *agtv_rhs;
    agtype_value agtv_result;

    if (!(((*(uint32 *)(((varattrib_4b *) (lhs))->va_4byte.va_data) & 0x10000000) != 0)) || !(((*(uint32 *)(((varattrib_4b *) (rhs))->va_4byte.va_data) & 0x10000000) != 0)))
    {
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 277, __func__, 
# 277 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 277 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("must be scalar value, not array or object")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                             ;

        do { fcinfo->isnull = 
# 280 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 280 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    agtv_lhs = get_ith_agtype_value_from_container(&lhs->root, 0);
    agtv_rhs = get_ith_agtype_value_from_container(&rhs->root, 0);

    if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_INTEGER;
        agtv_result.val.int_value = agtv_lhs->val.int_value -
                                    agtv_rhs->val.int_value;
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.float_value -
                                      agtv_rhs->val.float_value;
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.float_value -
                                      agtv_rhs->val.int_value;
    }
    else if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.int_value -
                                      agtv_rhs->val.float_value;
    }

    else if (is_numeric_result(agtv_lhs, agtv_rhs))
    {
        Datum numd, lhsd, rhsd;

        lhsd = get_numeric_datum_from_agtype_value(agtv_lhs);
        rhsd = get_numeric_datum_from_agtype_value(agtv_rhs);
        numd = DirectFunctionCall2Coll(numeric_sub, ((Oid) 0), lhsd, rhsd);

        agtv_result.type = AGTV_NUMERIC;
        agtv_result.val.numeric = ((Numeric) pg_detoast_datum((struct varlena *) ((Pointer) (numd))));
    }
    else
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 323, __func__, 
# 323 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 323 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("Invalid input parameter types for agtype_sub")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                                ;

    return ((Datum) (agtype_value_to_agtype(&agtv_result)));
}

extern Datum agtype_any_sub(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_sub(void); const Pg_finfo_record * pg_finfo_agtype_any_sub (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;


Datum agtype_any_sub(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 341 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 341 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 341 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 341 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 343 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 343 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_sub, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                     ;

    return ((Datum) (((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) (result))))));
}

extern Datum agtype_neg(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_neg(void); const Pg_finfo_record * pg_finfo_agtype_neg (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_neg(FunctionCallInfo fcinfo)
{
    agtype *v = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype_value *agtv_value;
    agtype_value agtv_result;

    if (!(((*(uint32 *)(((varattrib_4b *) (v))->va_4byte.va_data) & 0x10000000) != 0)))
    {
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 365, __func__, 
# 365 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 365 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("must be scalar value, not array or object")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                             ;

        do { fcinfo->isnull = 
# 368 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 368 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    agtv_value = get_ith_agtype_value_from_container(&v->root, 0);

    if (agtv_value->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_INTEGER;
        agtv_result.val.int_value = -agtv_value->val.int_value;
    }
    else if (agtv_value->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = -agtv_value->val.float_value;
    }
    else if (agtv_value->type == AGTV_NUMERIC)
    {
        Datum numd, vald;

        vald = ((Datum) (agtv_value->val.numeric));
        numd = DirectFunctionCall1Coll(numeric_uminus, ((Oid) 0), vald);

        agtv_result.type = AGTV_NUMERIC;
        agtv_result.val.numeric = ((Numeric) pg_detoast_datum((struct varlena *) ((Pointer) (numd))));
    }
    else
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 394, __func__, 
# 394 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 394 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("Invalid input parameter type for agtype_neg")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                               ;

    return ((Datum) (agtype_value_to_agtype(&agtv_result)));
}

extern Datum agtype_mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_mul(void); const Pg_finfo_record * pg_finfo_agtype_mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_mul(FunctionCallInfo fcinfo)
{
    agtype *lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    agtype_value *agtv_lhs;
    agtype_value *agtv_rhs;
    agtype_value agtv_result;

    if (!(((*(uint32 *)(((varattrib_4b *) (lhs))->va_4byte.va_data) & 0x10000000) != 0)) || !(((*(uint32 *)(((varattrib_4b *) (rhs))->va_4byte.va_data) & 0x10000000) != 0)))
    {
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 415, __func__, 
# 415 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 415 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("must be scalar value, not array or object")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                             ;

        do { fcinfo->isnull = 
# 418 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 418 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    agtv_lhs = get_ith_agtype_value_from_container(&lhs->root, 0);
    agtv_rhs = get_ith_agtype_value_from_container(&rhs->root, 0);

    if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_INTEGER;
        agtv_result.val.int_value = agtv_lhs->val.int_value *
                                    agtv_rhs->val.int_value;
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.float_value *
                                      agtv_rhs->val.float_value;
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.float_value *
                                      agtv_rhs->val.int_value;
    }
    else if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.int_value *
                                      agtv_rhs->val.float_value;
    }

    else if (is_numeric_result(agtv_lhs, agtv_rhs))
    {
        Datum numd, lhsd, rhsd;

        lhsd = get_numeric_datum_from_agtype_value(agtv_lhs);
        rhsd = get_numeric_datum_from_agtype_value(agtv_rhs);
        numd = DirectFunctionCall2Coll(numeric_mul, ((Oid) 0), lhsd, rhsd);

        agtv_result.type = AGTV_NUMERIC;
        agtv_result.val.numeric = ((Numeric) pg_detoast_datum((struct varlena *) ((Pointer) (numd))));
    }
    else
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 461, __func__, 
# 461 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 461 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("Invalid input parameter types for agtype_mul")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                                ;

    return ((Datum) (agtype_value_to_agtype(&agtv_result)));
}

extern Datum agtype_any_mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_mul(void); const Pg_finfo_record * pg_finfo_agtype_any_mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;


Datum agtype_any_mul(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 479 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 479 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 479 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 479 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 481 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 481 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_mul, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                     ;

    return ((Datum) (((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) (result))))));
}

extern Datum agtype_div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_div(void); const Pg_finfo_record * pg_finfo_agtype_div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_div(FunctionCallInfo fcinfo)
{
    agtype *lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    agtype_value *agtv_lhs;
    agtype_value *agtv_rhs;
    agtype_value agtv_result;

    if (!(((*(uint32 *)(((varattrib_4b *) (lhs))->va_4byte.va_data) & 0x10000000) != 0)) || !(((*(uint32 *)(((varattrib_4b *) (rhs))->va_4byte.va_data) & 0x10000000) != 0)))
    {
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 505, __func__, 
# 505 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 505 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("must be scalar value, not array or object")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                             ;

        do { fcinfo->isnull = 
# 508 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 508 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    agtv_lhs = get_ith_agtype_value_from_container(&lhs->root, 0);
    agtv_rhs = get_ith_agtype_value_from_container(&rhs->root, 0);

    if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_INTEGER)
    {
        if (agtv_rhs->val.int_value == 0)
        {
            do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 518, __func__, 
# 518 "src/backend/utils/adt/agtype_ops.c" 3 4
           ((void *)0)
# 518 "src/backend/utils/adt/agtype_ops.c"
           )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('1') - '0') & 0x3F) << 18) + (((('2') - '0') & 0x3F) << 24))), errmsg("division by zero")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                        ;
            do { fcinfo->isnull = 
# 520 "src/backend/utils/adt/agtype_ops.c" 3 4
           1
# 520 "src/backend/utils/adt/agtype_ops.c"
           ; return (Datum) 0; } while (0);
        }

        agtv_result.type = AGTV_INTEGER;
        agtv_result.val.int_value = agtv_lhs->val.int_value /
                                    agtv_rhs->val.int_value;
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_FLOAT)
    {
        if (agtv_rhs->val.float_value == 0)
        {
            do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 531, __func__, 
# 531 "src/backend/utils/adt/agtype_ops.c" 3 4
           ((void *)0)
# 531 "src/backend/utils/adt/agtype_ops.c"
           )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('1') - '0') & 0x3F) << 18) + (((('2') - '0') & 0x3F) << 24))), errmsg("division by zero")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                        ;
            do { fcinfo->isnull = 
# 533 "src/backend/utils/adt/agtype_ops.c" 3 4
           1
# 533 "src/backend/utils/adt/agtype_ops.c"
           ; return (Datum) 0; } while (0);
        }

        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.float_value /
                                      agtv_rhs->val.float_value;
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_INTEGER)
    {
        if (agtv_rhs->val.int_value == 0)
        {
            do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 544, __func__, 
# 544 "src/backend/utils/adt/agtype_ops.c" 3 4
           ((void *)0)
# 544 "src/backend/utils/adt/agtype_ops.c"
           )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('1') - '0') & 0x3F) << 18) + (((('2') - '0') & 0x3F) << 24))), errmsg("division by zero")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                        ;
            do { fcinfo->isnull = 
# 546 "src/backend/utils/adt/agtype_ops.c" 3 4
           1
# 546 "src/backend/utils/adt/agtype_ops.c"
           ; return (Datum) 0; } while (0);
        }

        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.float_value /
                                      agtv_rhs->val.int_value;
    }
    else if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_FLOAT)
    {
        if (agtv_rhs->val.float_value == 0)
        {
            do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 557, __func__, 
# 557 "src/backend/utils/adt/agtype_ops.c" 3 4
           ((void *)0)
# 557 "src/backend/utils/adt/agtype_ops.c"
           )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('1') - '0') & 0x3F) << 18) + (((('2') - '0') & 0x3F) << 24))), errmsg("division by zero")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                        ;
            do { fcinfo->isnull = 
# 559 "src/backend/utils/adt/agtype_ops.c" 3 4
           1
# 559 "src/backend/utils/adt/agtype_ops.c"
           ; return (Datum) 0; } while (0);
        }

        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = agtv_lhs->val.int_value /
                                      agtv_rhs->val.float_value;
    }

    else if (is_numeric_result(agtv_lhs, agtv_rhs))
    {
        Datum numd, lhsd, rhsd;

        lhsd = get_numeric_datum_from_agtype_value(agtv_lhs);
        rhsd = get_numeric_datum_from_agtype_value(agtv_rhs);
        numd = DirectFunctionCall2Coll(numeric_div, ((Oid) 0), lhsd, rhsd);

        agtv_result.type = AGTV_NUMERIC;
        agtv_result.val.numeric = ((Numeric) pg_detoast_datum((struct varlena *) ((Pointer) (numd))));
    }
    else
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 579, __func__, 
# 579 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 579 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("Invalid input parameter types for agtype_div")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                                ;

     return ((Datum) (agtype_value_to_agtype(&agtv_result)));
}

extern Datum agtype_any_div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_div(void); const Pg_finfo_record * pg_finfo_agtype_any_div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;


Datum agtype_any_div(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 597 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 597 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 597 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 597 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 599 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 599 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_div, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                     ;

    return ((Datum) (((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) (result))))));
}

extern Datum agtype_mod(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_mod(void); const Pg_finfo_record * pg_finfo_agtype_mod (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_mod(FunctionCallInfo fcinfo)
{
    agtype *lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    agtype_value *agtv_lhs;
    agtype_value *agtv_rhs;
    agtype_value agtv_result;

    if (!(((*(uint32 *)(((varattrib_4b *) (lhs))->va_4byte.va_data) & 0x10000000) != 0)) || !(((*(uint32 *)(((varattrib_4b *) (rhs))->va_4byte.va_data) & 0x10000000) != 0)))
    {
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 623, __func__, 
# 623 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 623 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("must be scalar value, not array or object")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                             ;

        do { fcinfo->isnull = 
# 626 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 626 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    agtv_lhs = get_ith_agtype_value_from_container(&lhs->root, 0);
    agtv_rhs = get_ith_agtype_value_from_container(&rhs->root, 0);

    if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_INTEGER;
        agtv_result.val.int_value = agtv_lhs->val.int_value %
                                    agtv_rhs->val.int_value;
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = fmod(agtv_lhs->val.float_value,
                                           agtv_rhs->val.float_value);
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = fmod(agtv_lhs->val.float_value,
                                           agtv_rhs->val.int_value);
    }
    else if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = fmod(agtv_lhs->val.int_value,
                                           agtv_rhs->val.float_value);
    }

    else if (is_numeric_result(agtv_lhs, agtv_rhs))
    {
        Datum numd, lhsd, rhsd;

        lhsd = get_numeric_datum_from_agtype_value(agtv_lhs);
        rhsd = get_numeric_datum_from_agtype_value(agtv_rhs);
        numd = DirectFunctionCall2Coll(numeric_mod, ((Oid) 0), lhsd, rhsd);

        agtv_result.type = AGTV_NUMERIC;
        agtv_result.val.numeric = ((Numeric) pg_detoast_datum((struct varlena *) ((Pointer) (numd))));
    }
    else
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 669, __func__, 
# 669 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 669 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("Invalid input parameter types for agtype_mod")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                                ;

    return ((Datum) (agtype_value_to_agtype(&agtv_result)));
}

extern Datum agtype_any_mod(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_mod(void); const Pg_finfo_record * pg_finfo_agtype_any_mod (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;


Datum agtype_any_mod(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 687 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 687 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 687 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 687 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 689 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 689 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_mod, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                     ;

    return ((Datum) (((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) (result))))));
}

extern Datum agtype_pow(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_pow(void); const Pg_finfo_record * pg_finfo_agtype_pow (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_pow(FunctionCallInfo fcinfo)
{
    agtype *lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    agtype_value *agtv_lhs;
    agtype_value *agtv_rhs;
    agtype_value agtv_result;

    if (!(((*(uint32 *)(((varattrib_4b *) (lhs))->va_4byte.va_data) & 0x10000000) != 0)) || !(((*(uint32 *)(((varattrib_4b *) (rhs))->va_4byte.va_data) & 0x10000000) != 0)))
    {
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 713, __func__, 
# 713 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 713 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("must be scalar value, not array or object")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                             ;

        do { fcinfo->isnull = 
# 716 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 716 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    agtv_lhs = get_ith_agtype_value_from_container(&lhs->root, 0);
    agtv_rhs = get_ith_agtype_value_from_container(&rhs->root, 0);

    if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = pow(agtv_lhs->val.int_value,
                                          agtv_rhs->val.int_value);
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = pow(agtv_lhs->val.float_value,
                                          agtv_rhs->val.float_value);
    }
    else if (agtv_lhs->type == AGTV_FLOAT && agtv_rhs->type == AGTV_INTEGER)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = pow(agtv_lhs->val.float_value,
                                          agtv_rhs->val.int_value);
    }
    else if (agtv_lhs->type == AGTV_INTEGER && agtv_rhs->type == AGTV_FLOAT)
    {
        agtv_result.type = AGTV_FLOAT;
        agtv_result.val.float_value = pow(agtv_lhs->val.int_value,
                                          agtv_rhs->val.float_value);
    }

    else if (is_numeric_result(agtv_lhs, agtv_rhs))
    {
        Datum numd, lhsd, rhsd;

        lhsd = get_numeric_datum_from_agtype_value(agtv_lhs);
        rhsd = get_numeric_datum_from_agtype_value(agtv_rhs);
        numd = DirectFunctionCall2Coll(numeric_power, ((Oid) 0), lhsd, rhsd);

        agtv_result.type = AGTV_NUMERIC;
        agtv_result.val.numeric = ((Numeric) pg_detoast_datum((struct varlena *) ((Pointer) (numd))));
    }
    else
        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 759, __func__, 
# 759 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 759 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("Invalid input parameter types for agtype_pow")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                                ;

    return ((Datum) (agtype_value_to_agtype(&agtv_result)));
}

extern Datum agtype_eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_eq(void); const Pg_finfo_record * pg_finfo_agtype_eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_eq(FunctionCallInfo fcinfo)
{
    agtype *agtype_lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *agtype_rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    
# 771 "src/backend/utils/adt/agtype_ops.c" 3 4
   _Bool 
# 771 "src/backend/utils/adt/agtype_ops.c"
        result;

    result = (compare_agtype_containers_orderability(&agtype_lhs->root,
                                                     &agtype_rhs->root) == 0);

    do { if ((Pointer) (agtype_lhs) != ((Pointer) ((fcinfo->arg[0])))) pfree(agtype_lhs); } while (0);
    do { if ((Pointer) (agtype_rhs) != ((Pointer) ((fcinfo->arg[1])))) pfree(agtype_rhs); } while (0);

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_any_eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_eq(void); const Pg_finfo_record * pg_finfo_agtype_any_eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_any_eq(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 793 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 793 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 793 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 793 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 795 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 795 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_eq, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                    ;

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_ne(void); const Pg_finfo_record * pg_finfo_agtype_ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_ne(FunctionCallInfo fcinfo)
{
    agtype *agtype_lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *agtype_rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    
# 810 "src/backend/utils/adt/agtype_ops.c" 3 4
   _Bool 
# 810 "src/backend/utils/adt/agtype_ops.c"
        result = 
# 810 "src/backend/utils/adt/agtype_ops.c" 3 4
                 1
# 810 "src/backend/utils/adt/agtype_ops.c"
                     ;

    result = (compare_agtype_containers_orderability(&agtype_lhs->root,
                                                     &agtype_rhs->root) != 0);

    do { if ((Pointer) (agtype_lhs) != ((Pointer) ((fcinfo->arg[0])))) pfree(agtype_lhs); } while (0);
    do { if ((Pointer) (agtype_rhs) != ((Pointer) ((fcinfo->arg[1])))) pfree(agtype_rhs); } while (0);

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_any_ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_ne(void); const Pg_finfo_record * pg_finfo_agtype_any_ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_any_ne(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 832 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 832 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 832 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 832 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 834 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 834 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_ne, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                    ;

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_lt(void); const Pg_finfo_record * pg_finfo_agtype_lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_lt(FunctionCallInfo fcinfo)
{
    agtype *agtype_lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *agtype_rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    
# 849 "src/backend/utils/adt/agtype_ops.c" 3 4
   _Bool 
# 849 "src/backend/utils/adt/agtype_ops.c"
        result;

    result = (compare_agtype_containers_orderability(&agtype_lhs->root,
                                                     &agtype_rhs->root) < 0);

    do { if ((Pointer) (agtype_lhs) != ((Pointer) ((fcinfo->arg[0])))) pfree(agtype_lhs); } while (0);
    do { if ((Pointer) (agtype_rhs) != ((Pointer) ((fcinfo->arg[1])))) pfree(agtype_rhs); } while (0);

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_any_lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_lt(void); const Pg_finfo_record * pg_finfo_agtype_any_lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_any_lt(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 871 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 871 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 871 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 871 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 873 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 873 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_lt, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                    ;

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_gt(void); const Pg_finfo_record * pg_finfo_agtype_gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_gt(FunctionCallInfo fcinfo)
{
    agtype *agtype_lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *agtype_rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    
# 888 "src/backend/utils/adt/agtype_ops.c" 3 4
   _Bool 
# 888 "src/backend/utils/adt/agtype_ops.c"
        result;

    result = (compare_agtype_containers_orderability(&agtype_lhs->root,
                                                     &agtype_rhs->root) > 0);

    do { if ((Pointer) (agtype_lhs) != ((Pointer) ((fcinfo->arg[0])))) pfree(agtype_lhs); } while (0);
    do { if ((Pointer) (agtype_rhs) != ((Pointer) ((fcinfo->arg[1])))) pfree(agtype_rhs); } while (0);

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_any_gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_gt(void); const Pg_finfo_record * pg_finfo_agtype_any_gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_any_gt(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 910 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 910 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 910 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 910 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 912 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 912 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_gt, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                    ;

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_le(void); const Pg_finfo_record * pg_finfo_agtype_le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_le(FunctionCallInfo fcinfo)
{
    agtype *agtype_lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *agtype_rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    
# 927 "src/backend/utils/adt/agtype_ops.c" 3 4
   _Bool 
# 927 "src/backend/utils/adt/agtype_ops.c"
        result;

    result = (compare_agtype_containers_orderability(&agtype_lhs->root,
                                                     &agtype_rhs->root) <= 0);

    do { if ((Pointer) (agtype_lhs) != ((Pointer) ((fcinfo->arg[0])))) pfree(agtype_lhs); } while (0);
    do { if ((Pointer) (agtype_rhs) != ((Pointer) ((fcinfo->arg[1])))) pfree(agtype_rhs); } while (0);

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_any_le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_le(void); const Pg_finfo_record * pg_finfo_agtype_any_le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_any_le(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 949 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 949 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 949 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 949 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 951 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 951 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_le, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                    ;

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_ge(void); const Pg_finfo_record * pg_finfo_agtype_ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_ge(FunctionCallInfo fcinfo)
{
    agtype *agtype_lhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    agtype *agtype_rhs = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    
# 966 "src/backend/utils/adt/agtype_ops.c" 3 4
   _Bool 
# 966 "src/backend/utils/adt/agtype_ops.c"
        result;

    result = (compare_agtype_containers_orderability(&agtype_lhs->root,
                                                     &agtype_rhs->root) >= 0);

    do { if ((Pointer) (agtype_lhs) != ((Pointer) ((fcinfo->arg[0])))) pfree(agtype_lhs); } while (0);
    do { if ((Pointer) (agtype_rhs) != ((Pointer) ((fcinfo->arg[1])))) pfree(agtype_rhs); } while (0);

    return ((Datum) ((result) ? 1 : 0));
}

extern Datum agtype_any_ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_any_ge(void); const Pg_finfo_record * pg_finfo_agtype_any_ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum agtype_any_ge(FunctionCallInfo fcinfo)
{
    agtype *lhs;
    agtype *rhs;
    Datum result;

    lhs = get_one_agtype_from_variadic_args(fcinfo, 0, 2);
    rhs = get_one_agtype_from_variadic_args(fcinfo, 1, 1);

    if (lhs == 
# 988 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0) 
# 988 "src/backend/utils/adt/agtype_ops.c"
                   || rhs == 
# 988 "src/backend/utils/adt/agtype_ops.c" 3 4
                             ((void *)0)
# 988 "src/backend/utils/adt/agtype_ops.c"
                                 )
    {
        do { fcinfo->isnull = 
# 990 "src/backend/utils/adt/agtype_ops.c" 3 4
       1
# 990 "src/backend/utils/adt/agtype_ops.c"
       ; return (Datum) 0; } while (0);
    }

    result = DirectFunctionCall2Coll(agtype_ge, ((Oid) 0), ((Datum) (lhs)), ((Datum) (rhs)))
                                                                    ;

    return ((Datum) ((result) ? 1 : 0));
}


extern Datum agtype_contains(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_contains(void); const Pg_finfo_record * pg_finfo_agtype_contains (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_contains(FunctionCallInfo fcinfo)
{
    agtype_iterator *constraint_it, *property_it;
    agtype *properties, *constraints;

    if ((fcinfo->argnull[0]) || (fcinfo->argnull[1]))
    {
        return ((Datum) ((
# 1012 "src/backend/utils/adt/agtype_ops.c" 3 4
       0
# 1012 "src/backend/utils/adt/agtype_ops.c"
       ) ? 1 : 0));
    }

    properties = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    constraints = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));

    constraint_it = agtype_iterator_init(&constraints->root);
    property_it = agtype_iterator_init(&properties->root);

    return ((Datum) ((agtype_deep_contains(&property_it, &constraint_it)) ? 1 : 0));
}


extern Datum agtype_contained_by(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_contained_by(void); const Pg_finfo_record * pg_finfo_agtype_contained_by (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_contained_by(FunctionCallInfo fcinfo)
{
    agtype_iterator *constraint_it, *property_it;
    agtype *properties, *constraints;

    if ((fcinfo->argnull[0]) || (fcinfo->argnull[1]))
    {
        return ((Datum) ((
# 1037 "src/backend/utils/adt/agtype_ops.c" 3 4
       0
# 1037 "src/backend/utils/adt/agtype_ops.c"
       ) ? 1 : 0));
    }

    properties = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    constraints = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));

    constraint_it = agtype_iterator_init(&constraints->root);
    property_it = agtype_iterator_init(&properties->root);

    return ((Datum) ((agtype_deep_contains(&constraint_it, &property_it)) ? 1 : 0));
}

extern Datum agtype_exists(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_exists(void); const Pg_finfo_record * pg_finfo_agtype_exists (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;



Datum agtype_exists(FunctionCallInfo fcinfo)
{
    agtype *agt = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    text *key = ((text *) pg_detoast_datum_packed((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    agtype_value aval;
    agtype_value *v = 
# 1058 "src/backend/utils/adt/agtype_ops.c" 3 4
                     ((void *)0)
# 1058 "src/backend/utils/adt/agtype_ops.c"
                         ;







    aval.type = AGTV_STRING;
    aval.val.string.val = (((((varattrib_1b *) (key))->va_header & 0x01) == 0x01) ? (((varattrib_1b *) (key))->va_data) : (((varattrib_4b *) (key))->va_4byte.va_data));
    aval.val.string.len = (((((varattrib_1b *) (key))->va_header) == 0x01) ? (
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         __builtin_offsetof (
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         varattrib_1b_e
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         , 
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         va_data
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         ) 
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         + (((((varattrib_1b_e *) (key))->va_tag)) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : ((((((varattrib_1b_e *) (key))->va_tag)) & ~1) == VARTAG_EXPANDED_RO) ? sizeof(varatt_expanded) : ((((varattrib_1b_e *) (key))->va_tag)) == VARTAG_ONDISK ? sizeof(varatt_external) : (
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         1
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         )))-
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         __builtin_offsetof (
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         varattrib_1b_e
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         , 
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         va_data
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         ) 
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         : (((((varattrib_1b *) (key))->va_header & 0x01) == 0x01) ? ((((varattrib_1b *) (key))->va_header >> 1) & 0x7F)-
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         __builtin_offsetof (
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         varattrib_1b
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         , 
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         va_data
# 1068 "src/backend/utils/adt/agtype_ops.c" 3 4
                         ) 
# 1068 "src/backend/utils/adt/agtype_ops.c"
                         : ((((varattrib_4b *) (key))->va_4byte.va_header >> 2) & 0x3FFFFFFF)-((int32) sizeof(int32))));

    v = find_agtype_value_from_container(&agt->root,
                                         0x20000000 | 0x40000000,
                                         &aval);

    return ((Datum) ((v != 
# 1074 "src/backend/utils/adt/agtype_ops.c" 3 4
   ((void *)0)
# 1074 "src/backend/utils/adt/agtype_ops.c"
   ) ? 1 : 0));
}

extern Datum agtype_exists_any(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_exists_any(void); const Pg_finfo_record * pg_finfo_agtype_exists_any (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_exists_any(FunctionCallInfo fcinfo)
{
    agtype *agt = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    ArrayType *keys = ((ArrayType *) pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    int i;
    Datum *key_datums;
    
# 1088 "src/backend/utils/adt/agtype_ops.c" 3 4
   _Bool 
# 1088 "src/backend/utils/adt/agtype_ops.c"
        *key_nulls;
    int elem_count;

    deconstruct_array(keys, 25, -1, 
# 1091 "src/backend/utils/adt/agtype_ops.c" 3 4
                                        0
# 1091 "src/backend/utils/adt/agtype_ops.c"
                                             , 'i', &key_datums, &key_nulls,
                      &elem_count);

    for (i = 0; i < elem_count; i++)
    {
        agtype_value strVal;

        if (key_nulls[i])
        {
            continue;
        }

        strVal.type = AGTV_STRING;
        strVal.val.string.val = (((varattrib_4b *) (key_datums[i]))->va_4byte.va_data);
        strVal.val.string.len = ((((varattrib_4b *) (key_datums[i]))->va_4byte.va_header >> 2) & 0x3FFFFFFF) - ((int32) sizeof(int32));

        if (find_agtype_value_from_container(&agt->root,
                                        0x20000000 | 0x40000000,
                                        &strVal) != 
# 1109 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                   ((void *)0)
# 1109 "src/backend/utils/adt/agtype_ops.c"
                                                       )
        {
            return ((Datum) ((
# 1111 "src/backend/utils/adt/agtype_ops.c" 3 4
           1
# 1111 "src/backend/utils/adt/agtype_ops.c"
           ) ? 1 : 0));
        }
    }

    return ((Datum) ((
# 1115 "src/backend/utils/adt/agtype_ops.c" 3 4
   0
# 1115 "src/backend/utils/adt/agtype_ops.c"
   ) ? 1 : 0));
}

extern Datum agtype_exists_all(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_agtype_exists_all(void); const Pg_finfo_record * pg_finfo_agtype_exists_all (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;




Datum agtype_exists_all(FunctionCallInfo fcinfo)
{
    agtype *agt = ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    ArrayType *keys = ((ArrayType *) pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));
    int i;
    Datum *key_datums;
    
# 1129 "src/backend/utils/adt/agtype_ops.c" 3 4
   _Bool 
# 1129 "src/backend/utils/adt/agtype_ops.c"
        *key_nulls;
    int elem_count;

    deconstruct_array(keys, 25, -1, 
# 1132 "src/backend/utils/adt/agtype_ops.c" 3 4
                                        0
# 1132 "src/backend/utils/adt/agtype_ops.c"
                                             , 'i', &key_datums, &key_nulls,
                      &elem_count);

    for (i = 0; i < elem_count; i++)
    {
        agtype_value strVal;

        if (key_nulls[i])
        {
            continue;
        }

        strVal.type = AGTV_STRING;
        strVal.val.string.val = (((varattrib_4b *) (key_datums[i]))->va_4byte.va_data);
        strVal.val.string.len = ((((varattrib_4b *) (key_datums[i]))->va_4byte.va_header >> 2) & 0x3FFFFFFF) - ((int32) sizeof(int32));

        if (find_agtype_value_from_container(&agt->root,
                                        0x20000000 | 0x40000000,
                                        &strVal) == 
# 1150 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                   ((void *)0)
# 1150 "src/backend/utils/adt/agtype_ops.c"
                                                       )
        {
            return ((Datum) ((
# 1152 "src/backend/utils/adt/agtype_ops.c" 3 4
           0
# 1152 "src/backend/utils/adt/agtype_ops.c"
           ) ? 1 : 0));
        }
    }

    return ((Datum) ((
# 1156 "src/backend/utils/adt/agtype_ops.c" 3 4
   1
# 1156 "src/backend/utils/adt/agtype_ops.c"
   ) ? 1 : 0));
}

static agtype *agtype_concat(agtype *agt1, agtype *agt2)
{
    agtype_parse_state *state = 
# 1161 "src/backend/utils/adt/agtype_ops.c" 3 4
                               ((void *)0)
# 1161 "src/backend/utils/adt/agtype_ops.c"
                                   ;
    agtype_value *res;
    agtype_iterator *it1;
    agtype_iterator *it2;







    if (((*(uint32 *)(((varattrib_4b *) (agt1))->va_4byte.va_data) & 0x20000000) != 0) == ((*(uint32 *)(((varattrib_4b *) (agt2))->va_4byte.va_data) & 0x20000000) != 0))
    {
        if ((*(uint32 *)(((varattrib_4b *) (agt1))->va_4byte.va_data) & 0x0FFFFFFF) == 0 && !((*(uint32 *)(((varattrib_4b *) (agt2))->va_4byte.va_data) & 0x10000000) != 0))
            return agt2;
        else if ((*(uint32 *)(((varattrib_4b *) (agt2))->va_4byte.va_data) & 0x0FFFFFFF) == 0 && !((*(uint32 *)(((varattrib_4b *) (agt1))->va_4byte.va_data) & 0x10000000) != 0))
            return agt1;
    }

    it1 = agtype_iterator_init(&agt1->root);
    it2 = agtype_iterator_init(&agt2->root);

    res = iterator_concat(&it1, &it2, &state);

    ((void)
# 1185 "src/backend/utils/adt/agtype_ops.c" 3 4
   1
# 1185 "src/backend/utils/adt/agtype_ops.c"
   );

    return (agtype_value_to_agtype(res));
}
# 1197 "src/backend/utils/adt/agtype_ops.c"
static agtype_value *iterator_concat(agtype_iterator **it1,
                                     agtype_iterator **it2,
                                     agtype_parse_state **state)
{
    agtype_value v1, v2, *res = 
# 1201 "src/backend/utils/adt/agtype_ops.c" 3 4
                               ((void *)0)
# 1201 "src/backend/utils/adt/agtype_ops.c"
                                   ;
    agtype_iterator_token r1, r2, rk1, rk2;

    r1 = rk1 = agtype_iterator_next(it1, &v1, 
# 1204 "src/backend/utils/adt/agtype_ops.c" 3 4
                                             0
# 1204 "src/backend/utils/adt/agtype_ops.c"
                                                  );
    r2 = rk2 = agtype_iterator_next(it2, &v2, 
# 1205 "src/backend/utils/adt/agtype_ops.c" 3 4
                                             0
# 1205 "src/backend/utils/adt/agtype_ops.c"
                                                  );




    if (rk1 == WAGT_BEGIN_OBJECT && rk2 == WAGT_BEGIN_OBJECT)
    {




        push_agtype_value(state, r1, 
# 1216 "src/backend/utils/adt/agtype_ops.c" 3 4
                                    ((void *)0)
# 1216 "src/backend/utils/adt/agtype_ops.c"
                                        );
        while ((r1 = agtype_iterator_next(it1, &v1, 
# 1217 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                   1
# 1217 "src/backend/utils/adt/agtype_ops.c"
                                                       )) != WAGT_END_OBJECT)
            push_agtype_value(state, r1, &v1);





        while ((r2 = agtype_iterator_next(it2, &v2, 
# 1224 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                   1
# 1224 "src/backend/utils/adt/agtype_ops.c"
                                                       )) != 0)
            res = push_agtype_value(state, r2,
                                    r2 != WAGT_END_OBJECT ? &v2 : 
# 1226 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                                 ((void *)0)
# 1226 "src/backend/utils/adt/agtype_ops.c"
                                                                     );
    }




    else if (rk1 == WAGT_BEGIN_ARRAY && rk2 == WAGT_BEGIN_ARRAY)
    {
        push_agtype_value(state, r1, 
# 1234 "src/backend/utils/adt/agtype_ops.c" 3 4
                                    ((void *)0)
# 1234 "src/backend/utils/adt/agtype_ops.c"
                                        );

        while ((r1 = agtype_iterator_next(it1, &v1, 
# 1236 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                   1
# 1236 "src/backend/utils/adt/agtype_ops.c"
                                                       )) != WAGT_END_ARRAY)
        {
            ((void)
# 1238 "src/backend/utils/adt/agtype_ops.c" 3 4
           1
# 1238 "src/backend/utils/adt/agtype_ops.c"
           );
            push_agtype_value(state, r1, &v1);
        }

        while ((r2 = agtype_iterator_next(it2, &v2, 
# 1242 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                   1
# 1242 "src/backend/utils/adt/agtype_ops.c"
                                                       )) != WAGT_END_ARRAY)
        {
            ((void)
# 1244 "src/backend/utils/adt/agtype_ops.c" 3 4
           1
# 1244 "src/backend/utils/adt/agtype_ops.c"
           );
            push_agtype_value(state, WAGT_ELEM, &v2);
        }

        res = push_agtype_value(state, WAGT_END_ARRAY,
                                
# 1249 "src/backend/utils/adt/agtype_ops.c" 3 4
                               ((void *)0) 
# 1249 "src/backend/utils/adt/agtype_ops.c"
                                                        );
    }

    else if (((rk1 == WAGT_BEGIN_ARRAY && !(*it1)->is_scalar) &&
              rk2 == WAGT_BEGIN_OBJECT) ||
             (rk1 == WAGT_BEGIN_OBJECT &&
              (rk2 == WAGT_BEGIN_ARRAY && !(*it2)->is_scalar)))
    {
        agtype_iterator **it_array = rk1 == WAGT_BEGIN_ARRAY ? it1 : it2;
        agtype_iterator **it_object = rk1 == WAGT_BEGIN_OBJECT ? it1 : it2;

        
# 1260 "src/backend/utils/adt/agtype_ops.c" 3 4
       _Bool 
# 1260 "src/backend/utils/adt/agtype_ops.c"
            prepend = (rk1 == WAGT_BEGIN_OBJECT);

        push_agtype_value(state, WAGT_BEGIN_ARRAY, 
# 1262 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                  ((void *)0)
# 1262 "src/backend/utils/adt/agtype_ops.c"
                                                      );

        if (prepend)
        {
            push_agtype_value(state, WAGT_BEGIN_OBJECT, 
# 1266 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                       ((void *)0)
# 1266 "src/backend/utils/adt/agtype_ops.c"
                                                           );
            while ((r1 = agtype_iterator_next(it_object, &v1, 
# 1267 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                             1
# 1267 "src/backend/utils/adt/agtype_ops.c"
                                                                 )) != 0)
                push_agtype_value(state, r1,
                                  r1 != WAGT_END_OBJECT ? &v1 : 
# 1269 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                               ((void *)0)
# 1269 "src/backend/utils/adt/agtype_ops.c"
                                                                   );

            while ((r2 = agtype_iterator_next(it_array, &v2, 
# 1271 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                            1
# 1271 "src/backend/utils/adt/agtype_ops.c"
                                                                )) != 0)
                res = push_agtype_value(state, r2,
                                        r2 != WAGT_END_ARRAY ? &v2 : 
# 1273 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                                    ((void *)0)
# 1273 "src/backend/utils/adt/agtype_ops.c"
                                                                        );
        }
        else
        {
            while ((r1 = agtype_iterator_next(it_array, &v1, 
# 1277 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                            1
# 1277 "src/backend/utils/adt/agtype_ops.c"
                                                                )) !=
                   WAGT_END_ARRAY)
                push_agtype_value(state, r1, &v1);

            push_agtype_value(state, WAGT_BEGIN_OBJECT, 
# 1281 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                       ((void *)0)
# 1281 "src/backend/utils/adt/agtype_ops.c"
                                                           );
            while ((r2 = agtype_iterator_next(it_object, &v2, 
# 1282 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                             1
# 1282 "src/backend/utils/adt/agtype_ops.c"
                                                                 )) != 0)
                push_agtype_value(state, r2,
                                  r2 != WAGT_END_OBJECT ? &v2 : 
# 1284 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                               ((void *)0)
# 1284 "src/backend/utils/adt/agtype_ops.c"
                                                                   );

            res = push_agtype_value(state, WAGT_END_ARRAY, 
# 1286 "src/backend/utils/adt/agtype_ops.c" 3 4
                                                          ((void *)0)
# 1286 "src/backend/utils/adt/agtype_ops.c"
                                                              );
        }
    }
    else
    {




        do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 1295, __func__, 
# 1295 "src/backend/utils/adt/agtype_ops.c" 3 4
       ((void *)0)
# 1295 "src/backend/utils/adt/agtype_ops.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("invalid concatenation of agtype objects")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                                           ;
    }

    return res;
}

static void ereport_op_str(const char *op, agtype *lhs, agtype *rhs)
{
    const char *msgfmt;
    const char *lstr;
    const char *rstr;

    ((void)
# 1308 "src/backend/utils/adt/agtype_ops.c" 3 4
   1
# 1308 "src/backend/utils/adt/agtype_ops.c"
   );

    if (lhs == 
# 1310 "src/backend/utils/adt/agtype_ops.c" 3 4
              ((void *)0)
# 1310 "src/backend/utils/adt/agtype_ops.c"
                  )
    {
        msgfmt = "invalid expression: %s%s%s";
        lstr = "";
    }
    else
    {
        msgfmt = "invalid expression: %s %s %s";
        lstr = agtype_to_cstring(
# 1318 "src/backend/utils/adt/agtype_ops.c" 3 4
                                ((void *)0)
# 1318 "src/backend/utils/adt/agtype_ops.c"
                                    , &lhs->root, ((((varattrib_4b *) (lhs))->va_4byte.va_header >> 2) & 0x3FFFFFFF));
    }
    rstr = agtype_to_cstring(
# 1320 "src/backend/utils/adt/agtype_ops.c" 3 4
                            ((void *)0)
# 1320 "src/backend/utils/adt/agtype_ops.c"
                                , &rhs->root, ((((varattrib_4b *) (rhs))->va_4byte.va_header >> 2) & 0x3FFFFFFF));

    do { if (errstart(20, "src/backend/utils/adt/agtype_ops.c", 1322, __func__, 
# 1322 "src/backend/utils/adt/agtype_ops.c" 3 4
   ((void *)0)
# 1322 "src/backend/utils/adt/agtype_ops.c"
   )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg(msgfmt, lstr, op, rstr)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)
                                                    ;
}
