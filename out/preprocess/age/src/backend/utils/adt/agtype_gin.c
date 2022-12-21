# 0 "src/backend/utils/adt/agtype_gin.c"
# 1 "/age//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/backend/utils/adt/agtype_gin.c"
# 29 "src/backend/utils/adt/agtype_gin.c"
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
# 30 "src/backend/utils/adt/agtype_gin.c" 2

# 1 "/usr/include/postgresql/11/server/access/gin.h" 1
# 13 "/usr/include/postgresql/11/server/access/gin.h"
# 1 "/usr/include/postgresql/11/server/access/xlogreader.h" 1
# 28 "/usr/include/postgresql/11/server/access/xlogreader.h"
# 1 "/usr/include/postgresql/11/server/access/xlogrecord.h" 1
# 14 "/usr/include/postgresql/11/server/access/xlogrecord.h"
# 1 "/usr/include/postgresql/11/server/access/rmgr.h" 1
# 11 "/usr/include/postgresql/11/server/access/rmgr.h"
typedef uint8 RmgrId;
# 25 "/usr/include/postgresql/11/server/access/rmgr.h"
typedef enum RmgrIds
{
# 1 "/usr/include/postgresql/11/server/access/rmgrlist.h" 1
# 28 "/usr/include/postgresql/11/server/access/rmgrlist.h"
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
# 28 "/usr/include/postgresql/11/server/access/rmgr.h" 2
 RM_NEXT_ID
} RmgrIds;
# 15 "/usr/include/postgresql/11/server/access/xlogrecord.h" 2
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
# 16 "/usr/include/postgresql/11/server/access/xlogrecord.h" 2
# 1 "/usr/include/postgresql/11/server/port/pg_crc32c.h" 1
# 36 "/usr/include/postgresql/11/server/port/pg_crc32c.h"
# 1 "/usr/include/postgresql/11/server/port/pg_bswap.h" 1
# 37 "/usr/include/postgresql/11/server/port/pg_crc32c.h" 2

typedef uint32 pg_crc32c;
# 71 "/usr/include/postgresql/11/server/port/pg_crc32c.h"
extern pg_crc32c pg_comp_crc32c_sb8(pg_crc32c crc, const void *data, size_t len);
extern pg_crc32c (*pg_comp_crc32c) (pg_crc32c crc, const void *data, size_t len);





extern pg_crc32c pg_comp_crc32c_armv8(pg_crc32c crc, const void *data, size_t len);
# 17 "/usr/include/postgresql/11/server/access/xlogrecord.h" 2
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
# 18 "/usr/include/postgresql/11/server/access/xlogrecord.h" 2
# 1 "/usr/include/postgresql/11/server/storage/relfilenode.h" 1
# 17 "/usr/include/postgresql/11/server/storage/relfilenode.h"
# 1 "/usr/include/postgresql/11/server/common/relpath.h" 1
# 20 "/usr/include/postgresql/11/server/common/relpath.h"
# 1 "/usr/include/postgresql/11/server/catalog/catversion.h" 1
# 21 "/usr/include/postgresql/11/server/common/relpath.h" 2
# 40 "/usr/include/postgresql/11/server/common/relpath.h"
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
# 18 "/usr/include/postgresql/11/server/storage/relfilenode.h" 2
# 1 "/usr/include/postgresql/11/server/storage/backendid.h" 1
# 21 "/usr/include/postgresql/11/server/storage/backendid.h"
typedef int BackendId;



extern BackendId MyBackendId;


extern BackendId ParallelMasterBackendId;
# 19 "/usr/include/postgresql/11/server/storage/relfilenode.h" 2
# 57 "/usr/include/postgresql/11/server/storage/relfilenode.h"
typedef struct RelFileNode
{
 Oid spcNode;
 Oid dbNode;
 Oid relNode;
} RelFileNode;
# 72 "/usr/include/postgresql/11/server/storage/relfilenode.h"
typedef struct RelFileNodeBackend
{
 RelFileNode node;
 BackendId backend;
} RelFileNodeBackend;
# 19 "/usr/include/postgresql/11/server/access/xlogrecord.h" 2
# 41 "/usr/include/postgresql/11/server/access/xlogrecord.h"
typedef struct XLogRecord
{
 uint32 xl_tot_len;
 TransactionId xl_xid;
 XLogRecPtr xl_prev;
 uint8 xl_info;
 RmgrId xl_rmid;

 pg_crc32c xl_crc;



} XLogRecord;
# 92 "/usr/include/postgresql/11/server/access/xlogrecord.h"
typedef struct XLogRecordBlockHeader
{
 uint8 id;
 uint8 fork_flags;
 uint16 data_length;





} XLogRecordBlockHeader;
# 131 "/usr/include/postgresql/11/server/access/xlogrecord.h"
typedef struct XLogRecordBlockImageHeader
{
 uint16 length;
 uint16 hole_offset;
 uint8 bimg_info;





} XLogRecordBlockImageHeader;
# 156 "/usr/include/postgresql/11/server/access/xlogrecord.h"
typedef struct XLogRecordBlockCompressHeader
{
 uint16 hole_length;
} XLogRecordBlockCompressHeader;
# 195 "/usr/include/postgresql/11/server/access/xlogrecord.h"
typedef struct XLogRecordDataHeaderShort
{
 uint8 id;
 uint8 data_length;
} XLogRecordDataHeaderShort;



typedef struct XLogRecordDataHeaderLong
{
 uint8 id;

} XLogRecordDataHeaderLong;
# 29 "/usr/include/postgresql/11/server/access/xlogreader.h" 2

typedef struct XLogReaderState XLogReaderState;


typedef int (*XLogPageReadCB) (XLogReaderState *xlogreader,
          XLogRecPtr targetPagePtr,
          int reqLen,
          XLogRecPtr targetRecPtr,
          char *readBuf,
          TimeLineID *pageTLI);

typedef struct
{

 
# 43 "/usr/include/postgresql/11/server/access/xlogreader.h" 3 4
_Bool 
# 43 "/usr/include/postgresql/11/server/access/xlogreader.h"
      in_use;


 RelFileNode rnode;
 ForkNumber forknum;
 BlockNumber blkno;


 uint8 flags;


 
# 54 "/usr/include/postgresql/11/server/access/xlogreader.h" 3 4
_Bool 
# 54 "/usr/include/postgresql/11/server/access/xlogreader.h"
      has_image;
 
# 55 "/usr/include/postgresql/11/server/access/xlogreader.h" 3 4
_Bool 
# 55 "/usr/include/postgresql/11/server/access/xlogreader.h"
      apply_image;
 char *bkp_image;
 uint16 hole_offset;
 uint16 hole_length;
 uint16 bimg_len;
 uint8 bimg_info;


 
# 63 "/usr/include/postgresql/11/server/access/xlogreader.h" 3 4
_Bool 
# 63 "/usr/include/postgresql/11/server/access/xlogreader.h"
      has_data;
 char *data;
 uint16 data_len;
 uint16 data_bufsz;
} DecodedBkpBlock;

struct XLogReaderState
{
# 79 "/usr/include/postgresql/11/server/access/xlogreader.h"
 int wal_segment_size;
# 102 "/usr/include/postgresql/11/server/access/xlogreader.h"
 XLogPageReadCB read_page;





 uint64 system_identifier;




 void *private_data;





 XLogRecPtr ReadRecPtr;
 XLogRecPtr EndRecPtr;
# 130 "/usr/include/postgresql/11/server/access/xlogreader.h"
 XLogRecord *decoded_record;

 char *main_data;
 uint32 main_data_len;
 uint32 main_data_bufsz;

 RepOriginId record_origin;


 DecodedBkpBlock blocks[32 + 1];

 int max_block_id;
# 152 "/usr/include/postgresql/11/server/access/xlogreader.h"
 char *readBuf;
 uint32 readLen;


 XLogSegNo readSegNo;
 uint32 readOff;
 TimeLineID readPageTLI;





 XLogRecPtr latestPagePtr;
 TimeLineID latestPageTLI;


 XLogRecPtr currRecPtr;

 TimeLineID currTLI;
# 180 "/usr/include/postgresql/11/server/access/xlogreader.h"
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
       XLogPageReadCB pagereadfunc,
       void *private_data);


extern void XLogReaderFree(XLogReaderState *state);


extern struct XLogRecord *XLogReadRecord(XLogReaderState *state,
      XLogRecPtr recptr, char **errormsg);


extern 
# 219 "/usr/include/postgresql/11/server/access/xlogreader.h" 3 4
      _Bool 
# 219 "/usr/include/postgresql/11/server/access/xlogreader.h"
           XLogReaderValidatePageHeader(XLogReaderState *state,
        XLogRecPtr recptr, char *phdr);


extern void XLogReaderInvalReadState(XLogReaderState *state);







extern 
# 231 "/usr/include/postgresql/11/server/access/xlogreader.h" 3 4
      _Bool 
# 231 "/usr/include/postgresql/11/server/access/xlogreader.h"
           DecodeXLogRecord(XLogReaderState *state, XLogRecord *record,
     char **errmsg);
# 250 "/usr/include/postgresql/11/server/access/xlogreader.h"
extern 
# 250 "/usr/include/postgresql/11/server/access/xlogreader.h" 3 4
      _Bool 
# 250 "/usr/include/postgresql/11/server/access/xlogreader.h"
           RestoreBlockImage(XLogReaderState *recoder, uint8 block_id, char *dst);
extern char *XLogRecGetBlockData(XLogReaderState *record, uint8 block_id, Size *len);
extern 
# 252 "/usr/include/postgresql/11/server/access/xlogreader.h" 3 4
      _Bool 
# 252 "/usr/include/postgresql/11/server/access/xlogreader.h"
           XLogRecGetBlockTag(XLogReaderState *record, uint8 block_id,
       RelFileNode *rnode, ForkNumber *forknum,
       BlockNumber *blknum);
# 14 "/usr/include/postgresql/11/server/access/gin.h" 2
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
# 15 "/usr/include/postgresql/11/server/access/gin.h" 2

# 1 "/usr/include/postgresql/11/server/utils/relcache.h" 1
# 17 "/usr/include/postgresql/11/server/utils/relcache.h"
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
# 40 "/usr/include/postgresql/11/server/nodes/pg_list.h"
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
# 41 "/usr/include/postgresql/11/server/nodes/pg_list.h" 2


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
# 18 "/usr/include/postgresql/11/server/utils/relcache.h" 2
# 1 "/usr/include/postgresql/11/server/nodes/bitmapset.h" 1
# 26 "/usr/include/postgresql/11/server/nodes/bitmapset.h"
struct List;







typedef uint32 bitmapword;
typedef int32 signedbitmapword;

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
# 67 "/usr/include/postgresql/11/server/nodes/bitmapset.h" 3 4
      _Bool 
# 67 "/usr/include/postgresql/11/server/nodes/bitmapset.h"
           bms_equal(const Bitmapset *a, const Bitmapset *b);
extern int bms_compare(const Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_make_singleton(int x);
extern void bms_free(Bitmapset *a);

extern Bitmapset *bms_union(const Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_intersect(const Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_difference(const Bitmapset *a, const Bitmapset *b);
extern 
# 75 "/usr/include/postgresql/11/server/nodes/bitmapset.h" 3 4
      _Bool 
# 75 "/usr/include/postgresql/11/server/nodes/bitmapset.h"
           bms_is_subset(const Bitmapset *a, const Bitmapset *b);
extern BMS_Comparison bms_subset_compare(const Bitmapset *a, const Bitmapset *b);
extern 
# 77 "/usr/include/postgresql/11/server/nodes/bitmapset.h" 3 4
      _Bool 
# 77 "/usr/include/postgresql/11/server/nodes/bitmapset.h"
           bms_is_member(int x, const Bitmapset *a);
extern 
# 78 "/usr/include/postgresql/11/server/nodes/bitmapset.h" 3 4
      _Bool 
# 78 "/usr/include/postgresql/11/server/nodes/bitmapset.h"
           bms_overlap(const Bitmapset *a, const Bitmapset *b);
extern 
# 79 "/usr/include/postgresql/11/server/nodes/bitmapset.h" 3 4
      _Bool 
# 79 "/usr/include/postgresql/11/server/nodes/bitmapset.h"
           bms_overlap_list(const Bitmapset *a, const struct List *b);
extern 
# 80 "/usr/include/postgresql/11/server/nodes/bitmapset.h" 3 4
      _Bool 
# 80 "/usr/include/postgresql/11/server/nodes/bitmapset.h"
           bms_nonempty_difference(const Bitmapset *a, const Bitmapset *b);
extern int bms_singleton_member(const Bitmapset *a);
extern 
# 82 "/usr/include/postgresql/11/server/nodes/bitmapset.h" 3 4
      _Bool 
# 82 "/usr/include/postgresql/11/server/nodes/bitmapset.h"
           bms_get_singleton_member(const Bitmapset *a, int *member);
extern int bms_num_members(const Bitmapset *a);


extern BMS_Membership bms_membership(const Bitmapset *a);
extern 
# 87 "/usr/include/postgresql/11/server/nodes/bitmapset.h" 3 4
      _Bool 
# 87 "/usr/include/postgresql/11/server/nodes/bitmapset.h"
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
# 19 "/usr/include/postgresql/11/server/utils/relcache.h" 2







typedef struct RelationData *Relation;







typedef Relation *RelationPtr;




extern Relation RelationIdGetRelation(Oid relationId);
extern void RelationClose(Relation relation);




extern List *RelationGetFKeyList(Relation relation);
extern List *RelationGetIndexList(Relation relation);
extern List *RelationGetStatExtList(Relation relation);
extern Oid RelationGetOidIndex(Relation relation);
extern Oid RelationGetPrimaryKeyIndex(Relation relation);
extern Oid RelationGetReplicaIndex(Relation relation);
extern List *RelationGetIndexExpressions(Relation relation);
extern List *RelationGetDummyIndexExpressions(Relation relation);
extern List *RelationGetIndexPredicate(Relation relation);

typedef enum IndexAttrBitmapKind
{
 INDEX_ATTR_BITMAP_HOT,
 INDEX_ATTR_BITMAP_PROJ,
 INDEX_ATTR_BITMAP_KEY,
 INDEX_ATTR_BITMAP_PRIMARY_KEY,
 INDEX_ATTR_BITMAP_IDENTITY_KEY
} IndexAttrBitmapKind;

extern Bitmapset *RelationGetIndexAttrBitmap(Relation relation,
         IndexAttrBitmapKind keyAttrs);

extern void RelationGetExclusionInfo(Relation indexRelation,
       Oid **operators,
       Oid **procs,
       uint16 **strategies);

extern void RelationSetIndexList(Relation relation,
      List *indexIds, Oid oidIndex);

extern void RelationInitIndexAccessInfo(Relation relation);


struct PublicationActions;
extern struct PublicationActions *GetRelationPublicationActions(Relation relation);




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
         Oid relfilenode,
         Oid reltablespace,
         
# 105 "/usr/include/postgresql/11/server/utils/relcache.h" 3 4
        _Bool 
# 105 "/usr/include/postgresql/11/server/utils/relcache.h"
             shared_relation,
         
# 106 "/usr/include/postgresql/11/server/utils/relcache.h" 3 4
        _Bool 
# 106 "/usr/include/postgresql/11/server/utils/relcache.h"
             mapped_relation,
         char relpersistence,
         char relkind);




extern void RelationSetNewRelfilenode(Relation relation, char persistence,
        TransactionId freezeXid, MultiXactId minmulti);




extern void RelationForgetRelation(Oid rid);

extern void RelationCacheInvalidateEntry(Oid relationId);

extern void RelationCacheInvalidate(
# 123 "/usr/include/postgresql/11/server/utils/relcache.h" 3 4
                                   _Bool 
# 123 "/usr/include/postgresql/11/server/utils/relcache.h"
                                        debug_discard);

extern void RelationCloseSmgrByOid(Oid relationId);

extern void AtEOXact_RelationCache(
# 127 "/usr/include/postgresql/11/server/utils/relcache.h" 3 4
                                  _Bool 
# 127 "/usr/include/postgresql/11/server/utils/relcache.h"
                                       isCommit);
extern void AtEOSubXact_RelationCache(
# 128 "/usr/include/postgresql/11/server/utils/relcache.h" 3 4
                                     _Bool 
# 128 "/usr/include/postgresql/11/server/utils/relcache.h"
                                          isCommit, SubTransactionId mySubid,
        SubTransactionId parentSubid);




extern 
# 134 "/usr/include/postgresql/11/server/utils/relcache.h" 3 4
      _Bool 
# 134 "/usr/include/postgresql/11/server/utils/relcache.h"
           RelationIdIsInInitFile(Oid relationId);
extern void RelationCacheInitFilePreInvalidate(void);
extern void RelationCacheInitFilePostInvalidate(void);
extern void RelationCacheInitFileRemove(void);


extern 
# 140 "/usr/include/postgresql/11/server/utils/relcache.h" 3 4
      _Bool 
# 140 "/usr/include/postgresql/11/server/utils/relcache.h"
           criticalRelcachesBuilt;


extern 
# 143 "/usr/include/postgresql/11/server/utils/relcache.h" 3 4
      _Bool 
# 143 "/usr/include/postgresql/11/server/utils/relcache.h"
           criticalSharedRelcachesBuilt;
# 17 "/usr/include/postgresql/11/server/access/gin.h" 2
# 41 "/usr/include/postgresql/11/server/access/gin.h"
typedef struct GinStatsData
{
 BlockNumber nPendingPages;
 BlockNumber nTotalPages;
 BlockNumber nEntryPages;
 BlockNumber nDataPages;
 int64 nEntries;
 int32 ginVersion;
} GinStatsData;







typedef char GinTernaryValue;
# 69 "/usr/include/postgresql/11/server/access/gin.h"
extern int GinFuzzySearchLimit;
extern int gin_pending_list_limit;


extern void ginGetStats(Relation index, GinStatsData *stats);
extern void ginUpdateStats(Relation index, const GinStatsData *stats);
# 32 "src/backend/utils/adt/agtype_gin.c" 2
# 1 "/usr/include/postgresql/11/server/access/hash.h" 1
# 20 "/usr/include/postgresql/11/server/access/hash.h"
# 1 "/usr/include/postgresql/11/server/access/amapi.h" 1
# 15 "/usr/include/postgresql/11/server/access/amapi.h"
# 1 "/usr/include/postgresql/11/server/access/genam.h" 1
# 17 "/usr/include/postgresql/11/server/access/genam.h"
# 1 "/usr/include/postgresql/11/server/access/sdir.h" 1
# 22 "/usr/include/postgresql/11/server/access/sdir.h"
typedef enum ScanDirection
{
 BackwardScanDirection = -1,
 NoMovementScanDirection = 0,
 ForwardScanDirection = 1
} ScanDirection;
# 18 "/usr/include/postgresql/11/server/access/genam.h" 2
# 1 "/usr/include/postgresql/11/server/access/skey.h" 1
# 18 "/usr/include/postgresql/11/server/access/skey.h"
# 1 "/usr/include/postgresql/11/server/access/stratnum.h" 1
# 22 "/usr/include/postgresql/11/server/access/stratnum.h"
typedef uint16 StrategyNumber;
# 19 "/usr/include/postgresql/11/server/access/skey.h" 2
# 1 "/usr/include/postgresql/11/server/fmgr.h" 1
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
# 20 "/usr/include/postgresql/11/server/access/skey.h" 2
# 64 "/usr/include/postgresql/11/server/access/skey.h"
typedef struct ScanKeyData
{
 int sk_flags;
 AttrNumber sk_attno;
 StrategyNumber sk_strategy;
 Oid sk_subtype;
 Oid sk_collation;
 FmgrInfo sk_func;
 Datum sk_argument;
} ScanKeyData;

typedef ScanKeyData *ScanKey;
# 129 "/usr/include/postgresql/11/server/access/skey.h"
extern void ScanKeyInit(ScanKey entry,
   AttrNumber attributeNumber,
   StrategyNumber strategy,
   RegProcedure procedure,
   Datum argument);
extern void ScanKeyEntryInitialize(ScanKey entry,
        int flags,
        AttrNumber attributeNumber,
        StrategyNumber strategy,
        Oid subtype,
        Oid collation,
        RegProcedure procedure,
        Datum argument);
extern void ScanKeyEntryInitializeWithInfo(ScanKey entry,
          int flags,
          AttrNumber attributeNumber,
          StrategyNumber strategy,
          Oid subtype,
          Oid collation,
          FmgrInfo *finfo,
          Datum argument);
# 19 "/usr/include/postgresql/11/server/access/genam.h" 2
# 1 "/usr/include/postgresql/11/server/nodes/tidbitmap.h" 1
# 25 "/usr/include/postgresql/11/server/nodes/tidbitmap.h"
# 1 "/usr/include/postgresql/11/server/storage/itemptr.h" 1
# 18 "/usr/include/postgresql/11/server/storage/itemptr.h"
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
# 26 "/usr/include/postgresql/11/server/nodes/tidbitmap.h" 2
# 1 "/usr/include/postgresql/11/server/utils/dsa.h" 1
# 17 "/usr/include/postgresql/11/server/utils/dsa.h"
# 1 "/usr/include/postgresql/11/server/port/atomics.h" 1
# 47 "/usr/include/postgresql/11/server/port/atomics.h"
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
# 48 "/usr/include/postgresql/11/server/port/atomics.h" 2
# 68 "/usr/include/postgresql/11/server/port/atomics.h"
# 1 "/usr/include/postgresql/11/server/port/atomics/arch-arm.h" 1
# 69 "/usr/include/postgresql/11/server/port/atomics.h" 2
# 98 "/usr/include/postgresql/11/server/port/atomics.h"
# 1 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h" 1
# 63 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"

# 63 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
typedef struct pg_atomic_flag
{






 volatile int value;



} pg_atomic_flag;
# 84 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
typedef struct pg_atomic_uint32
{
 volatile uint32 value;
} pg_atomic_uint32;
# 98 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
typedef struct pg_atomic_uint64
{
 volatile uint64 value __attribute__((aligned(8)));
} pg_atomic_uint64;
# 111 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
static inline 
# 111 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h" 3 4
             _Bool

# 112 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
pg_atomic_test_set_flag_impl(volatile pg_atomic_flag *ptr)
{


 return __sync_lock_test_and_set(&ptr->value, 1) == 0;
}






static inline 
# 124 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h" 3 4
             _Bool

# 125 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
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
# 154 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h" 3 4
             _Bool

# 155 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
pg_atomic_compare_exchange_u32_impl(volatile pg_atomic_uint32 *ptr,
         uint32 *expected, uint32 newval)
{

 return __atomic_compare_exchange_n(&ptr->value, expected, newval, 
# 159 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h" 3 4
                                                                  0
# 159 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
                                                                       ,
            5, 5);
}
# 183 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
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
# 222 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h" 3 4
             _Bool

# 223 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
pg_atomic_compare_exchange_u64_impl(volatile pg_atomic_uint64 *ptr,
         uint64 *expected, uint64 newval)
{
 return __atomic_compare_exchange_n(&ptr->value, expected, newval, 
# 226 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h" 3 4
                                                                  0
# 226 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
                                                                       ,
            5, 5);
}
# 250 "/usr/include/postgresql/11/server/port/atomics/generic-gcc.h"
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
# 99 "/usr/include/postgresql/11/server/port/atomics.h" 2
# 118 "/usr/include/postgresql/11/server/port/atomics.h"
# 1 "/usr/include/postgresql/11/server/port/atomics/fallback.h" 1
# 119 "/usr/include/postgresql/11/server/port/atomics.h" 2





# 1 "/usr/include/postgresql/11/server/port/atomics/generic.h" 1
# 45 "/usr/include/postgresql/11/server/port/atomics/generic.h"
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
# 160 "/usr/include/postgresql/11/server/port/atomics/generic.h"
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
# 230 "/usr/include/postgresql/11/server/port/atomics/generic.h"
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
# 279 "/usr/include/postgresql/11/server/port/atomics/generic.h"
static inline void
pg_atomic_write_u64_impl(volatile pg_atomic_uint64 *ptr, uint64 val)
{




 pg_atomic_exchange_u64_impl(ptr, val);
}
# 310 "/usr/include/postgresql/11/server/port/atomics/generic.h"
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
# 387 "/usr/include/postgresql/11/server/port/atomics/generic.h"
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
# 125 "/usr/include/postgresql/11/server/port/atomics.h" 2
# 174 "/usr/include/postgresql/11/server/port/atomics.h"
static inline void
pg_atomic_init_flag(volatile pg_atomic_flag *ptr)
{
 pg_atomic_init_flag_impl(ptr);
}
# 187 "/usr/include/postgresql/11/server/port/atomics.h"
static inline 
# 187 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
             _Bool

# 188 "/usr/include/postgresql/11/server/port/atomics.h"
pg_atomic_test_set_flag(volatile pg_atomic_flag *ptr)
{
 return pg_atomic_test_set_flag_impl(ptr);
}
# 200 "/usr/include/postgresql/11/server/port/atomics.h"
static inline 
# 200 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
             _Bool

# 201 "/usr/include/postgresql/11/server/port/atomics.h"
pg_atomic_unlocked_test_flag(volatile pg_atomic_flag *ptr)
{
 return pg_atomic_unlocked_test_flag_impl(ptr);
}






static inline void
pg_atomic_clear_flag(volatile pg_atomic_flag *ptr)
{
 pg_atomic_clear_flag_impl(ptr);
}
# 225 "/usr/include/postgresql/11/server/port/atomics.h"
static inline void
pg_atomic_init_u32(volatile pg_atomic_uint32 *ptr, uint32 val)
{
 ((void)
# 228 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 228 "/usr/include/postgresql/11/server/port/atomics.h"
);

 pg_atomic_init_u32_impl(ptr, val);
}
# 243 "/usr/include/postgresql/11/server/port/atomics.h"
static inline uint32
pg_atomic_read_u32(volatile pg_atomic_uint32 *ptr)
{
 ((void)
# 246 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 246 "/usr/include/postgresql/11/server/port/atomics.h"
);
 return pg_atomic_read_u32_impl(ptr);
}
# 260 "/usr/include/postgresql/11/server/port/atomics.h"
static inline void
pg_atomic_write_u32(volatile pg_atomic_uint32 *ptr, uint32 val)
{
 ((void)
# 263 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 263 "/usr/include/postgresql/11/server/port/atomics.h"
);

 pg_atomic_write_u32_impl(ptr, val);
}
# 279 "/usr/include/postgresql/11/server/port/atomics.h"
static inline void
pg_atomic_unlocked_write_u32(volatile pg_atomic_uint32 *ptr, uint32 val)
{
 ((void)
# 282 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 282 "/usr/include/postgresql/11/server/port/atomics.h"
);

 pg_atomic_unlocked_write_u32_impl(ptr, val);
}
# 294 "/usr/include/postgresql/11/server/port/atomics.h"
static inline uint32
pg_atomic_exchange_u32(volatile pg_atomic_uint32 *ptr, uint32 newval)
{
 ((void)
# 297 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 297 "/usr/include/postgresql/11/server/port/atomics.h"
);

 return pg_atomic_exchange_u32_impl(ptr, newval);
}
# 313 "/usr/include/postgresql/11/server/port/atomics.h"
static inline 
# 313 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
             _Bool

# 314 "/usr/include/postgresql/11/server/port/atomics.h"
pg_atomic_compare_exchange_u32(volatile pg_atomic_uint32 *ptr,
          uint32 *expected, uint32 newval)
{
 ((void)
# 317 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 317 "/usr/include/postgresql/11/server/port/atomics.h"
);
 ((void)
# 318 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 318 "/usr/include/postgresql/11/server/port/atomics.h"
);

 return pg_atomic_compare_exchange_u32_impl(ptr, expected, newval);
}
# 330 "/usr/include/postgresql/11/server/port/atomics.h"
static inline uint32
pg_atomic_fetch_add_u32(volatile pg_atomic_uint32 *ptr, int32 add_)
{
 ((void)
# 333 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 333 "/usr/include/postgresql/11/server/port/atomics.h"
);
 return pg_atomic_fetch_add_u32_impl(ptr, add_);
}
# 345 "/usr/include/postgresql/11/server/port/atomics.h"
static inline uint32
pg_atomic_fetch_sub_u32(volatile pg_atomic_uint32 *ptr, int32 sub_)
{
 ((void)
# 348 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 348 "/usr/include/postgresql/11/server/port/atomics.h"
);
 ((void)
# 349 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 349 "/usr/include/postgresql/11/server/port/atomics.h"
);
 return pg_atomic_fetch_sub_u32_impl(ptr, sub_);
}
# 360 "/usr/include/postgresql/11/server/port/atomics.h"
static inline uint32
pg_atomic_fetch_and_u32(volatile pg_atomic_uint32 *ptr, uint32 and_)
{
 ((void)
# 363 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 363 "/usr/include/postgresql/11/server/port/atomics.h"
);
 return pg_atomic_fetch_and_u32_impl(ptr, and_);
}
# 374 "/usr/include/postgresql/11/server/port/atomics.h"
static inline uint32
pg_atomic_fetch_or_u32(volatile pg_atomic_uint32 *ptr, uint32 or_)
{
 ((void)
# 377 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 377 "/usr/include/postgresql/11/server/port/atomics.h"
);
 return pg_atomic_fetch_or_u32_impl(ptr, or_);
}
# 388 "/usr/include/postgresql/11/server/port/atomics.h"
static inline uint32
pg_atomic_add_fetch_u32(volatile pg_atomic_uint32 *ptr, int32 add_)
{
 ((void)
# 391 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 391 "/usr/include/postgresql/11/server/port/atomics.h"
);
 return pg_atomic_add_fetch_u32_impl(ptr, add_);
}
# 403 "/usr/include/postgresql/11/server/port/atomics.h"
static inline uint32
pg_atomic_sub_fetch_u32(volatile pg_atomic_uint32 *ptr, int32 sub_)
{
 ((void)
# 406 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 406 "/usr/include/postgresql/11/server/port/atomics.h"
);
 ((void)
# 407 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 407 "/usr/include/postgresql/11/server/port/atomics.h"
);
 return pg_atomic_sub_fetch_u32_impl(ptr, sub_);
}







static inline void
pg_atomic_init_u64(volatile pg_atomic_uint64 *ptr, uint64 val)
{






 ((void)
# 426 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 426 "/usr/include/postgresql/11/server/port/atomics.h"
);

 pg_atomic_init_u64_impl(ptr, val);
}

static inline uint64
pg_atomic_read_u64(volatile pg_atomic_uint64 *ptr)
{

 ((void)
# 435 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 435 "/usr/include/postgresql/11/server/port/atomics.h"
);

 return pg_atomic_read_u64_impl(ptr);
}

static inline void
pg_atomic_write_u64(volatile pg_atomic_uint64 *ptr, uint64 val)
{

 ((void)
# 444 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 444 "/usr/include/postgresql/11/server/port/atomics.h"
);

 pg_atomic_write_u64_impl(ptr, val);
}

static inline uint64
pg_atomic_exchange_u64(volatile pg_atomic_uint64 *ptr, uint64 newval)
{

 ((void)
# 453 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 453 "/usr/include/postgresql/11/server/port/atomics.h"
);

 return pg_atomic_exchange_u64_impl(ptr, newval);
}

static inline 
# 458 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
             _Bool

# 459 "/usr/include/postgresql/11/server/port/atomics.h"
pg_atomic_compare_exchange_u64(volatile pg_atomic_uint64 *ptr,
          uint64 *expected, uint64 newval)
{

 ((void)
# 463 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 463 "/usr/include/postgresql/11/server/port/atomics.h"
);
 ((void)
# 464 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 464 "/usr/include/postgresql/11/server/port/atomics.h"
);

 return pg_atomic_compare_exchange_u64_impl(ptr, expected, newval);
}

static inline uint64
pg_atomic_fetch_add_u64(volatile pg_atomic_uint64 *ptr, int64 add_)
{

 ((void)
# 473 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 473 "/usr/include/postgresql/11/server/port/atomics.h"
);

 return pg_atomic_fetch_add_u64_impl(ptr, add_);
}

static inline uint64
pg_atomic_fetch_sub_u64(volatile pg_atomic_uint64 *ptr, int64 sub_)
{

 ((void)
# 482 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 482 "/usr/include/postgresql/11/server/port/atomics.h"
);

 ((void)
# 484 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 484 "/usr/include/postgresql/11/server/port/atomics.h"
);
 return pg_atomic_fetch_sub_u64_impl(ptr, sub_);
}

static inline uint64
pg_atomic_fetch_and_u64(volatile pg_atomic_uint64 *ptr, uint64 and_)
{

 ((void)
# 492 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 492 "/usr/include/postgresql/11/server/port/atomics.h"
);

 return pg_atomic_fetch_and_u64_impl(ptr, and_);
}

static inline uint64
pg_atomic_fetch_or_u64(volatile pg_atomic_uint64 *ptr, uint64 or_)
{

 ((void)
# 501 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 501 "/usr/include/postgresql/11/server/port/atomics.h"
);

 return pg_atomic_fetch_or_u64_impl(ptr, or_);
}

static inline uint64
pg_atomic_add_fetch_u64(volatile pg_atomic_uint64 *ptr, int64 add_)
{

 ((void)
# 510 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 510 "/usr/include/postgresql/11/server/port/atomics.h"
);

 return pg_atomic_add_fetch_u64_impl(ptr, add_);
}

static inline uint64
pg_atomic_sub_fetch_u64(volatile pg_atomic_uint64 *ptr, int64 sub_)
{

 ((void)
# 519 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 519 "/usr/include/postgresql/11/server/port/atomics.h"
);

 ((void)
# 521 "/usr/include/postgresql/11/server/port/atomics.h" 3 4
1
# 521 "/usr/include/postgresql/11/server/port/atomics.h"
);
 return pg_atomic_sub_fetch_u64_impl(ptr, sub_);
}
# 18 "/usr/include/postgresql/11/server/utils/dsa.h" 2
# 1 "/usr/include/postgresql/11/server/storage/dsm.h" 1
# 16 "/usr/include/postgresql/11/server/storage/dsm.h"
# 1 "/usr/include/postgresql/11/server/storage/dsm_impl.h" 1
# 43 "/usr/include/postgresql/11/server/storage/dsm_impl.h"
extern int dynamic_shared_memory_type;
# 55 "/usr/include/postgresql/11/server/storage/dsm_impl.h"
typedef uint32 dsm_handle;


typedef enum
{
 DSM_OP_CREATE,
 DSM_OP_ATTACH,
 DSM_OP_DETACH,
 DSM_OP_RESIZE,
 DSM_OP_DESTROY
} dsm_op;


extern 
# 68 "/usr/include/postgresql/11/server/storage/dsm_impl.h" 3 4
      _Bool 
# 68 "/usr/include/postgresql/11/server/storage/dsm_impl.h"
           dsm_impl_op(dsm_op op, dsm_handle handle, Size request_size,
   void **impl_private, void **mapped_address, Size *mapped_size,
   int elevel);


extern 
# 73 "/usr/include/postgresql/11/server/storage/dsm_impl.h" 3 4
      _Bool 
# 73 "/usr/include/postgresql/11/server/storage/dsm_impl.h"
           dsm_impl_can_resize(void);


extern void dsm_impl_pin_segment(dsm_handle handle, void *impl_private,
      void **impl_private_pm_handle);
extern void dsm_impl_unpin_segment(dsm_handle handle, void **impl_private);
# 17 "/usr/include/postgresql/11/server/storage/dsm.h" 2

typedef struct dsm_segment dsm_segment;







struct PGShmemHeader;
extern void dsm_cleanup_using_control_segment(dsm_handle old_control_handle);
extern void dsm_postmaster_startup(struct PGShmemHeader *);
extern void dsm_backend_shutdown(void);
extern void dsm_detach_all(void);






extern dsm_segment *dsm_create(Size size, int flags);
extern dsm_segment *dsm_attach(dsm_handle h);
extern void *dsm_resize(dsm_segment *seg, Size size);
extern void *dsm_remap(dsm_segment *seg);
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
# 19 "/usr/include/postgresql/11/server/utils/dsa.h" 2


struct dsa_area;
typedef struct dsa_area dsa_area;
# 62 "/usr/include/postgresql/11/server/utils/dsa.h"
typedef uint64 dsa_pointer;
typedef pg_atomic_uint64 dsa_pointer_atomic;
# 100 "/usr/include/postgresql/11/server/utils/dsa.h"
typedef dsm_handle dsa_handle;

extern void dsa_startup(void);

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
# 27 "/usr/include/postgresql/11/server/nodes/tidbitmap.h" 2






typedef struct TIDBitmap TIDBitmap;


typedef struct TBMIterator TBMIterator;
typedef struct TBMSharedIterator TBMSharedIterator;


typedef struct
{
 BlockNumber blockno;
 int ntuples;
 
# 44 "/usr/include/postgresql/11/server/nodes/tidbitmap.h" 3 4
_Bool 
# 44 "/usr/include/postgresql/11/server/nodes/tidbitmap.h"
      recheck;

 OffsetNumber offsets[];
} TBMIterateResult;



extern TIDBitmap *tbm_create(long maxbytes, dsa_area *dsa);
extern void tbm_free(TIDBitmap *tbm);
extern void tbm_free_shared_area(dsa_area *dsa, dsa_pointer dp);

extern void tbm_add_tuples(TIDBitmap *tbm,
      const ItemPointer tids, int ntids,
      
# 57 "/usr/include/postgresql/11/server/nodes/tidbitmap.h" 3 4
     _Bool 
# 57 "/usr/include/postgresql/11/server/nodes/tidbitmap.h"
          recheck);
extern void tbm_add_page(TIDBitmap *tbm, BlockNumber pageno);

extern void tbm_union(TIDBitmap *a, const TIDBitmap *b);
extern void tbm_intersect(TIDBitmap *a, const TIDBitmap *b);

extern 
# 63 "/usr/include/postgresql/11/server/nodes/tidbitmap.h" 3 4
      _Bool 
# 63 "/usr/include/postgresql/11/server/nodes/tidbitmap.h"
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
# 20 "/usr/include/postgresql/11/server/access/genam.h" 2
# 1 "/usr/include/postgresql/11/server/storage/lockdefs.h" 1
# 25 "/usr/include/postgresql/11/server/storage/lockdefs.h"
typedef int LOCKMASK;
typedef int LOCKMODE;
# 48 "/usr/include/postgresql/11/server/storage/lockdefs.h"
typedef struct xl_standby_lock
{
 TransactionId xid;
 Oid dbOid;
 Oid relOid;
} xl_standby_lock;
# 21 "/usr/include/postgresql/11/server/access/genam.h" 2

# 1 "/usr/include/postgresql/11/server/utils/snapshot.h" 1
# 16 "/usr/include/postgresql/11/server/utils/snapshot.h"
# 1 "/usr/include/postgresql/11/server/access/htup.h" 1
# 21 "/usr/include/postgresql/11/server/access/htup.h"
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
# 17 "/usr/include/postgresql/11/server/utils/snapshot.h" 2

# 1 "/usr/include/postgresql/11/server/datatype/timestamp.h" 1
# 38 "/usr/include/postgresql/11/server/datatype/timestamp.h"
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
# 19 "/usr/include/postgresql/11/server/utils/snapshot.h" 2
# 1 "/usr/include/postgresql/11/server/lib/pairingheap.h" 1
# 30 "/usr/include/postgresql/11/server/lib/pairingheap.h"
typedef struct pairingheap_node
{
 struct pairingheap_node *first_child;
 struct pairingheap_node *next_sibling;
 struct pairingheap_node *prev_or_parent;
} pairingheap_node;
# 60 "/usr/include/postgresql/11/server/lib/pairingheap.h"
typedef int (*pairingheap_comparator) (const pairingheap_node *a,
            const pairingheap_node *b,
            void *arg);
# 71 "/usr/include/postgresql/11/server/lib/pairingheap.h"
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
# 20 "/usr/include/postgresql/11/server/utils/snapshot.h" 2
# 1 "/usr/include/postgresql/11/server/storage/buf.h" 1
# 23 "/usr/include/postgresql/11/server/storage/buf.h"
typedef int Buffer;
# 44 "/usr/include/postgresql/11/server/storage/buf.h"
typedef struct BufferAccessStrategyData *BufferAccessStrategy;
# 21 "/usr/include/postgresql/11/server/utils/snapshot.h" 2


typedef struct SnapshotData *Snapshot;
# 33 "/usr/include/postgresql/11/server/utils/snapshot.h"
typedef 
# 33 "/usr/include/postgresql/11/server/utils/snapshot.h" 3 4
       _Bool 
# 33 "/usr/include/postgresql/11/server/utils/snapshot.h"
            (*SnapshotSatisfiesFunc) (HeapTuple htup,
            Snapshot snapshot, Buffer buffer);
# 53 "/usr/include/postgresql/11/server/utils/snapshot.h"
typedef struct SnapshotData
{
 SnapshotSatisfiesFunc satisfies;
# 68 "/usr/include/postgresql/11/server/utils/snapshot.h"
 TransactionId xmin;
 TransactionId xmax;
# 79 "/usr/include/postgresql/11/server/utils/snapshot.h"
 TransactionId *xip;
 uint32 xcnt;
# 91 "/usr/include/postgresql/11/server/utils/snapshot.h"
 TransactionId *subxip;
 int32 subxcnt;
 
# 93 "/usr/include/postgresql/11/server/utils/snapshot.h" 3 4
_Bool 
# 93 "/usr/include/postgresql/11/server/utils/snapshot.h"
      suboverflowed;

 
# 95 "/usr/include/postgresql/11/server/utils/snapshot.h" 3 4
_Bool 
# 95 "/usr/include/postgresql/11/server/utils/snapshot.h"
      takenDuringRecovery;
 
# 96 "/usr/include/postgresql/11/server/utils/snapshot.h" 3 4
_Bool 
# 96 "/usr/include/postgresql/11/server/utils/snapshot.h"
      copied;

 CommandId curcid;





 uint32 speculativeToken;




 uint32 active_count;
 uint32 regd_count;
 pairingheap_node ph_node;

 TimestampTz whenTaken;
 XLogRecPtr lsn;
} SnapshotData;





typedef enum
{
 HeapTupleMayBeUpdated,
 HeapTupleInvisible,
 HeapTupleSelfUpdated,
 HeapTupleUpdated,
 HeapTupleBeingUpdated,
 HeapTupleWouldBlock
} HTSU_Result;
# 23 "/usr/include/postgresql/11/server/access/genam.h" 2


struct IndexInfo;




typedef struct IndexBuildResult
{
 double heap_tuples;
 double index_tuples;
} IndexBuildResult;
# 44 "/usr/include/postgresql/11/server/access/genam.h"
typedef struct IndexVacuumInfo
{
 Relation index;
 
# 47 "/usr/include/postgresql/11/server/access/genam.h" 3 4
_Bool 
# 47 "/usr/include/postgresql/11/server/access/genam.h"
      analyze_only;
 
# 48 "/usr/include/postgresql/11/server/access/genam.h" 3 4
_Bool 
# 48 "/usr/include/postgresql/11/server/access/genam.h"
      estimated_count;
 int message_level;
 double num_heap_tuples;
 BufferAccessStrategy strategy;
} IndexVacuumInfo;
# 71 "/usr/include/postgresql/11/server/access/genam.h"
typedef struct IndexBulkDeleteResult
{
 BlockNumber num_pages;
 BlockNumber pages_removed;
 
# 75 "/usr/include/postgresql/11/server/access/genam.h" 3 4
_Bool 
# 75 "/usr/include/postgresql/11/server/access/genam.h"
      estimated_count;
 double num_index_tuples;
 double tuples_removed;
 BlockNumber pages_deleted;
 BlockNumber pages_free;
} IndexBulkDeleteResult;


typedef 
# 83 "/usr/include/postgresql/11/server/access/genam.h" 3 4
       _Bool 
# 83 "/usr/include/postgresql/11/server/access/genam.h"
            (*IndexBulkDeleteCallback) (ItemPointer itemptr, void *state);


typedef struct IndexScanDescData *IndexScanDesc;
typedef struct SysScanDescData *SysScanDesc;

typedef struct ParallelIndexScanDescData *ParallelIndexScanDesc;
# 111 "/usr/include/postgresql/11/server/access/genam.h"
typedef enum IndexUniqueCheck
{
 UNIQUE_CHECK_NO,
 UNIQUE_CHECK_YES,
 UNIQUE_CHECK_PARTIAL,
 UNIQUE_CHECK_EXISTING
} IndexUniqueCheck;



typedef struct IndexOrderByDistance
{
 double value;
 
# 124 "/usr/include/postgresql/11/server/access/genam.h" 3 4
_Bool 
# 124 "/usr/include/postgresql/11/server/access/genam.h"
      isnull;
} IndexOrderByDistance;
# 137 "/usr/include/postgresql/11/server/access/genam.h"
extern Relation index_open(Oid relationId, LOCKMODE lockmode);
extern void index_close(Relation relation, LOCKMODE lockmode);

extern 
# 140 "/usr/include/postgresql/11/server/access/genam.h" 3 4
      _Bool 
# 140 "/usr/include/postgresql/11/server/access/genam.h"
           index_insert(Relation indexRelation,
    Datum *values, 
# 141 "/usr/include/postgresql/11/server/access/genam.h" 3 4
                  _Bool 
# 141 "/usr/include/postgresql/11/server/access/genam.h"
                       *isnull,
    ItemPointer heap_t_ctid,
    Relation heapRelation,
    IndexUniqueCheck checkUnique,
    struct IndexInfo *indexInfo);

extern IndexScanDesc index_beginscan(Relation heapRelation,
    Relation indexRelation,
    Snapshot snapshot,
    int nkeys, int norderbys);
extern IndexScanDesc index_beginscan_bitmap(Relation indexRelation,
        Snapshot snapshot,
        int nkeys);
extern void index_rescan(IndexScanDesc scan,
    ScanKey keys, int nkeys,
    ScanKey orderbys, int norderbys);
extern void index_endscan(IndexScanDesc scan);
extern void index_markpos(IndexScanDesc scan);
extern void index_restrpos(IndexScanDesc scan);
extern Size index_parallelscan_estimate(Relation indexrel, Snapshot snapshot);
extern void index_parallelscan_initialize(Relation heaprel, Relation indexrel,
         Snapshot snapshot, ParallelIndexScanDesc target);
extern void index_parallelrescan(IndexScanDesc scan);
extern IndexScanDesc index_beginscan_parallel(Relation heaprel,
       Relation indexrel, int nkeys, int norderbys,
       ParallelIndexScanDesc pscan);
extern ItemPointer index_getnext_tid(IndexScanDesc scan,
      ScanDirection direction);
extern HeapTuple index_fetch_heap(IndexScanDesc scan);
extern HeapTuple index_getnext(IndexScanDesc scan, ScanDirection direction);
extern int64 index_getbitmap(IndexScanDesc scan, TIDBitmap *bitmap);

extern IndexBulkDeleteResult *index_bulk_delete(IndexVacuumInfo *info,
      IndexBulkDeleteResult *stats,
      IndexBulkDeleteCallback callback,
      void *callback_state);
extern IndexBulkDeleteResult *index_vacuum_cleanup(IndexVacuumInfo *info,
      IndexBulkDeleteResult *stats);
extern 
# 179 "/usr/include/postgresql/11/server/access/genam.h" 3 4
      _Bool 
# 179 "/usr/include/postgresql/11/server/access/genam.h"
           index_can_return(Relation indexRelation, int attno);
extern RegProcedure index_getprocid(Relation irel, AttrNumber attnum,
    uint16 procnum);
extern FmgrInfo *index_getprocinfo(Relation irel, AttrNumber attnum,
      uint16 procnum);




extern IndexScanDesc RelationGetIndexScan(Relation indexRelation,
      int nkeys, int norderbys);
extern void IndexScanEnd(IndexScanDesc scan);
extern char *BuildIndexValueDescription(Relation indexRelation,
         Datum *values, 
# 192 "/usr/include/postgresql/11/server/access/genam.h" 3 4
                       _Bool 
# 192 "/usr/include/postgresql/11/server/access/genam.h"
                            *isnull);




extern SysScanDesc systable_beginscan(Relation heapRelation,
       Oid indexId,
       
# 199 "/usr/include/postgresql/11/server/access/genam.h" 3 4
      _Bool 
# 199 "/usr/include/postgresql/11/server/access/genam.h"
           indexOK,
       Snapshot snapshot,
       int nkeys, ScanKey key);
extern HeapTuple systable_getnext(SysScanDesc sysscan);
extern 
# 203 "/usr/include/postgresql/11/server/access/genam.h" 3 4
      _Bool 
# 203 "/usr/include/postgresql/11/server/access/genam.h"
           systable_recheck_tuple(SysScanDesc sysscan, HeapTuple tup);
extern void systable_endscan(SysScanDesc sysscan);
extern SysScanDesc systable_beginscan_ordered(Relation heapRelation,
         Relation indexRelation,
         Snapshot snapshot,
         int nkeys, ScanKey key);
extern HeapTuple systable_getnext_ordered(SysScanDesc sysscan,
       ScanDirection direction);
extern void systable_endscan_ordered(SysScanDesc sysscan);
# 16 "/usr/include/postgresql/11/server/access/amapi.h" 2






struct PlannerInfo;
struct IndexPath;


struct IndexInfo;







typedef enum IndexAMProperty
{
 AMPROP_UNKNOWN = 0,
 AMPROP_ASC,
 AMPROP_DESC,
 AMPROP_NULLS_FIRST,
 AMPROP_NULLS_LAST,
 AMPROP_ORDERABLE,
 AMPROP_DISTANCE_ORDERABLE,
 AMPROP_RETURNABLE,
 AMPROP_SEARCH_ARRAY,
 AMPROP_SEARCH_NULLS,
 AMPROP_CLUSTERABLE,
 AMPROP_INDEX_SCAN,
 AMPROP_BITMAP_SCAN,
 AMPROP_BACKWARD_SCAN,
 AMPROP_CAN_ORDER,
 AMPROP_CAN_UNIQUE,
 AMPROP_CAN_MULTI_COL,
 AMPROP_CAN_EXCLUDE,
 AMPROP_CAN_INCLUDE
} IndexAMProperty;







typedef IndexBuildResult *(*ambuild_function) (Relation heapRelation,
              Relation indexRelation,
              struct IndexInfo *indexInfo);


typedef void (*ambuildempty_function) (Relation indexRelation);


typedef 
# 71 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
       _Bool 
# 71 "/usr/include/postgresql/11/server/access/amapi.h"
            (*aminsert_function) (Relation indexRelation,
           Datum *values,
           
# 73 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
          _Bool 
# 73 "/usr/include/postgresql/11/server/access/amapi.h"
               *isnull,
           ItemPointer heap_tid,
           Relation heapRelation,
           IndexUniqueCheck checkUnique,
           struct IndexInfo *indexInfo);


typedef IndexBulkDeleteResult *(*ambulkdelete_function) (IndexVacuumInfo *info,
               IndexBulkDeleteResult *stats,
               IndexBulkDeleteCallback callback,
               void *callback_state);


typedef IndexBulkDeleteResult *(*amvacuumcleanup_function) (IndexVacuumInfo *info,
               IndexBulkDeleteResult *stats);


typedef 
# 90 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
       _Bool 
# 90 "/usr/include/postgresql/11/server/access/amapi.h"
            (*amcanreturn_function) (Relation indexRelation, int attno);


typedef void (*amcostestimate_function) (struct PlannerInfo *root,
           struct IndexPath *path,
           double loop_count,
           Cost *indexStartupCost,
           Cost *indexTotalCost,
           Selectivity *indexSelectivity,
           double *indexCorrelation,
           double *indexPages);


typedef bytea *(*amoptions_function) (Datum reloptions,
           
# 104 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
          _Bool 
# 104 "/usr/include/postgresql/11/server/access/amapi.h"
               validate);


typedef 
# 107 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
       _Bool 
# 107 "/usr/include/postgresql/11/server/access/amapi.h"
            (*amproperty_function) (Oid index_oid, int attno,
          IndexAMProperty prop, const char *propname,
          
# 109 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
         _Bool 
# 109 "/usr/include/postgresql/11/server/access/amapi.h"
              *res, 
# 109 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
                    _Bool 
# 109 "/usr/include/postgresql/11/server/access/amapi.h"
                         *isnull);


typedef 
# 112 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
       _Bool 
# 112 "/usr/include/postgresql/11/server/access/amapi.h"
            (*amvalidate_function) (Oid opclassoid);


typedef IndexScanDesc (*ambeginscan_function) (Relation indexRelation,
              int nkeys,
              int norderbys);


typedef void (*amrescan_function) (IndexScanDesc scan,
           ScanKey keys,
           int nkeys,
           ScanKey orderbys,
           int norderbys);


typedef 
# 127 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
       _Bool 
# 127 "/usr/include/postgresql/11/server/access/amapi.h"
            (*amgettuple_function) (IndexScanDesc scan,
          ScanDirection direction);


typedef int64 (*amgetbitmap_function) (IndexScanDesc scan,
            TIDBitmap *tbm);


typedef void (*amendscan_function) (IndexScanDesc scan);


typedef void (*ammarkpos_function) (IndexScanDesc scan);


typedef void (*amrestrpos_function) (IndexScanDesc scan);






typedef Size (*amestimateparallelscan_function) (void);


typedef void (*aminitparallelscan_function) (void *target);


typedef void (*amparallelrescan_function) (IndexScanDesc scan);





typedef struct IndexAmRoutine
{
 NodeTag type;





 uint16 amstrategies;

 uint16 amsupport;

 
# 172 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 172 "/usr/include/postgresql/11/server/access/amapi.h"
      amcanorder;

 
# 174 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 174 "/usr/include/postgresql/11/server/access/amapi.h"
      amcanorderbyop;

 
# 176 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 176 "/usr/include/postgresql/11/server/access/amapi.h"
      amcanbackward;

 
# 178 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 178 "/usr/include/postgresql/11/server/access/amapi.h"
      amcanunique;

 
# 180 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 180 "/usr/include/postgresql/11/server/access/amapi.h"
      amcanmulticol;

 
# 182 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 182 "/usr/include/postgresql/11/server/access/amapi.h"
      amoptionalkey;

 
# 184 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 184 "/usr/include/postgresql/11/server/access/amapi.h"
      amsearcharray;

 
# 186 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 186 "/usr/include/postgresql/11/server/access/amapi.h"
      amsearchnulls;

 
# 188 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 188 "/usr/include/postgresql/11/server/access/amapi.h"
      amstorage;

 
# 190 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 190 "/usr/include/postgresql/11/server/access/amapi.h"
      amclusterable;

 
# 192 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 192 "/usr/include/postgresql/11/server/access/amapi.h"
      ampredlocks;

 
# 194 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 194 "/usr/include/postgresql/11/server/access/amapi.h"
      amcanparallel;

 
# 196 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
_Bool 
# 196 "/usr/include/postgresql/11/server/access/amapi.h"
      amcaninclude;

 Oid amkeytype;
# 207 "/usr/include/postgresql/11/server/access/amapi.h"
 ambuild_function ambuild;
 ambuildempty_function ambuildempty;
 aminsert_function aminsert;
 ambulkdelete_function ambulkdelete;
 amvacuumcleanup_function amvacuumcleanup;
 amcanreturn_function amcanreturn;
 amcostestimate_function amcostestimate;
 amoptions_function amoptions;
 amproperty_function amproperty;
 amvalidate_function amvalidate;
 ambeginscan_function ambeginscan;
 amrescan_function amrescan;
 amgettuple_function amgettuple;
 amgetbitmap_function amgetbitmap;
 amendscan_function amendscan;
 ammarkpos_function ammarkpos;
 amrestrpos_function amrestrpos;


 amestimateparallelscan_function amestimateparallelscan;
 aminitparallelscan_function aminitparallelscan;
 amparallelrescan_function amparallelrescan;
} IndexAmRoutine;



extern IndexAmRoutine *GetIndexAmRoutine(Oid amhandler);
extern IndexAmRoutine *GetIndexAmRoutineByAmId(Oid amoid, 
# 234 "/usr/include/postgresql/11/server/access/amapi.h" 3 4
                                                         _Bool 
# 234 "/usr/include/postgresql/11/server/access/amapi.h"
                                                              noerror);
# 21 "/usr/include/postgresql/11/server/access/hash.h" 2
# 1 "/usr/include/postgresql/11/server/access/itup.h" 1
# 18 "/usr/include/postgresql/11/server/access/itup.h"
# 1 "/usr/include/postgresql/11/server/access/tupmacs.h" 1
# 19 "/usr/include/postgresql/11/server/access/itup.h" 2
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
# 20 "/usr/include/postgresql/11/server/access/itup.h" 2
# 35 "/usr/include/postgresql/11/server/access/itup.h"
typedef struct IndexTupleData
{
 ItemPointerData t_tid;
# 49 "/usr/include/postgresql/11/server/access/itup.h"
 unsigned short t_info;

} IndexTupleData;

typedef IndexTupleData *IndexTuple;

typedef struct IndexAttributeBitMapData
{
 bits8 bits[(32 + 8 - 1) / 8];
} IndexAttributeBitMapData;

typedef IndexAttributeBitMapData * IndexAttributeBitMap;
# 151 "/usr/include/postgresql/11/server/access/itup.h"
extern IndexTuple index_form_tuple(TupleDesc tupleDescriptor,
     Datum *values, 
# 152 "/usr/include/postgresql/11/server/access/itup.h" 3 4
                   _Bool 
# 152 "/usr/include/postgresql/11/server/access/itup.h"
                        *isnull);
extern Datum nocache_index_getattr(IndexTuple tup, int attnum,
       TupleDesc tupleDesc);
extern void index_deform_tuple(IndexTuple tup, TupleDesc tupleDescriptor,
       Datum *values, 
# 156 "/usr/include/postgresql/11/server/access/itup.h" 3 4
                     _Bool 
# 156 "/usr/include/postgresql/11/server/access/itup.h"
                          *isnull);
extern IndexTuple CopyIndexTuple(IndexTuple source);
extern IndexTuple index_truncate_tuple(TupleDesc sourceDescriptor,
      IndexTuple source, int leavenatts);
# 22 "/usr/include/postgresql/11/server/access/hash.h" 2



# 1 "/usr/include/postgresql/11/server/storage/bufmgr.h" 1
# 22 "/usr/include/postgresql/11/server/storage/bufmgr.h"
# 1 "/usr/include/postgresql/11/server/utils/snapmgr.h" 1
# 18 "/usr/include/postgresql/11/server/utils/snapmgr.h"
# 1 "/usr/include/postgresql/11/server/utils/resowner.h" 1
# 27 "/usr/include/postgresql/11/server/utils/resowner.h"
typedef struct ResourceOwnerData *ResourceOwner;





extern ResourceOwner CurrentResourceOwner;
extern ResourceOwner CurTransactionResourceOwner;
extern ResourceOwner TopTransactionResourceOwner;
# 45 "/usr/include/postgresql/11/server/utils/resowner.h"
typedef enum
{
 RESOURCE_RELEASE_BEFORE_LOCKS,
 RESOURCE_RELEASE_LOCKS,
 RESOURCE_RELEASE_AFTER_LOCKS
} ResourceReleasePhase;





typedef void (*ResourceReleaseCallback) (ResourceReleasePhase phase,
           
# 57 "/usr/include/postgresql/11/server/utils/resowner.h" 3 4
          _Bool 
# 57 "/usr/include/postgresql/11/server/utils/resowner.h"
               isCommit,
           
# 58 "/usr/include/postgresql/11/server/utils/resowner.h" 3 4
          _Bool 
# 58 "/usr/include/postgresql/11/server/utils/resowner.h"
               isTopLevel,
           void *arg);







extern ResourceOwner ResourceOwnerCreate(ResourceOwner parent,
     const char *name);
extern void ResourceOwnerRelease(ResourceOwner owner,
      ResourceReleasePhase phase,
      
# 71 "/usr/include/postgresql/11/server/utils/resowner.h" 3 4
     _Bool 
# 71 "/usr/include/postgresql/11/server/utils/resowner.h"
          isCommit,
      
# 72 "/usr/include/postgresql/11/server/utils/resowner.h" 3 4
     _Bool 
# 72 "/usr/include/postgresql/11/server/utils/resowner.h"
          isTopLevel);
extern void ResourceOwnerDelete(ResourceOwner owner);
extern ResourceOwner ResourceOwnerGetParent(ResourceOwner owner);
extern void ResourceOwnerNewParent(ResourceOwner owner,
        ResourceOwner newparent);
extern void RegisterResourceReleaseCallback(ResourceReleaseCallback callback,
        void *arg);
extern void UnregisterResourceReleaseCallback(ResourceReleaseCallback callback,
          void *arg);
# 19 "/usr/include/postgresql/11/server/utils/snapmgr.h" 2
# 48 "/usr/include/postgresql/11/server/utils/snapmgr.h"
extern int old_snapshot_threshold;


extern Size SnapMgrShmemSize(void);
extern void SnapMgrInit(void);
extern TimestampTz GetSnapshotCurrentTimestamp(void);
extern TimestampTz GetOldSnapshotThresholdTimestamp(void);

extern 
# 56 "/usr/include/postgresql/11/server/utils/snapmgr.h" 3 4
      _Bool 
# 56 "/usr/include/postgresql/11/server/utils/snapmgr.h"
           FirstSnapshotSet;

extern TransactionId TransactionXmin;
extern TransactionId RecentXmin;
extern TransactionId RecentGlobalXmin;
extern TransactionId RecentGlobalDataXmin;

extern Snapshot GetTransactionSnapshot(void);
extern Snapshot GetLatestSnapshot(void);
extern void SnapshotSetCommandId(CommandId curcid);
extern Snapshot GetOldestSnapshot(void);

extern Snapshot GetCatalogSnapshot(Oid relid);
extern Snapshot GetNonHistoricCatalogSnapshot(Oid relid);
extern void InvalidateCatalogSnapshot(void);
extern void InvalidateCatalogSnapshotConditionally(void);

extern void PushActiveSnapshot(Snapshot snapshot);
extern void PushActiveSnapshotWithLevel(Snapshot snapshot, int snap_level);
extern void PushCopiedSnapshot(Snapshot snapshot);
extern void UpdateActiveSnapshotCommandId(void);
extern void PopActiveSnapshot(void);
extern Snapshot GetActiveSnapshot(void);
extern 
# 79 "/usr/include/postgresql/11/server/utils/snapmgr.h" 3 4
      _Bool 
# 79 "/usr/include/postgresql/11/server/utils/snapmgr.h"
           ActiveSnapshotSet(void);

extern Snapshot RegisterSnapshot(Snapshot snapshot);
extern void UnregisterSnapshot(Snapshot snapshot);
extern Snapshot RegisterSnapshotOnOwner(Snapshot snapshot, ResourceOwner owner);
extern void UnregisterSnapshotFromOwner(Snapshot snapshot, ResourceOwner owner);

extern void AtSubCommit_Snapshot(int level);
extern void AtSubAbort_Snapshot(int level);
extern void AtEOXact_Snapshot(
# 88 "/usr/include/postgresql/11/server/utils/snapmgr.h" 3 4
                             _Bool 
# 88 "/usr/include/postgresql/11/server/utils/snapmgr.h"
                                  isCommit, 
# 88 "/usr/include/postgresql/11/server/utils/snapmgr.h" 3 4
                                            _Bool 
# 88 "/usr/include/postgresql/11/server/utils/snapmgr.h"
                                                 resetXmin);

extern void ImportSnapshot(const char *idstr);
extern 
# 91 "/usr/include/postgresql/11/server/utils/snapmgr.h" 3 4
      _Bool 
# 91 "/usr/include/postgresql/11/server/utils/snapmgr.h"
           XactHasExportedSnapshots(void);
extern void DeleteAllExportedSnapshotFiles(void);
extern 
# 93 "/usr/include/postgresql/11/server/utils/snapmgr.h" 3 4
      _Bool 
# 93 "/usr/include/postgresql/11/server/utils/snapmgr.h"
           ThereAreNoPriorRegisteredSnapshots(void);
extern TransactionId TransactionIdLimitedForOldSnapshots(TransactionId recentXmin,
         Relation relation);
extern void MaintainOldSnapshotTimeMapping(TimestampTz whenTaken,
          TransactionId xmin);

extern char *ExportSnapshot(Snapshot snapshot);


struct HTAB;
extern struct HTAB *HistoricSnapshotGetTupleCids(void);
extern void SetupHistoricSnapshot(Snapshot snapshot_now, struct HTAB *tuplecids);
extern void TeardownHistoricSnapshot(
# 105 "/usr/include/postgresql/11/server/utils/snapmgr.h" 3 4
                                    _Bool 
# 105 "/usr/include/postgresql/11/server/utils/snapmgr.h"
                                         is_error);
extern 
# 106 "/usr/include/postgresql/11/server/utils/snapmgr.h" 3 4
      _Bool 
# 106 "/usr/include/postgresql/11/server/utils/snapmgr.h"
           HistoricSnapshotActive(void);

extern Size EstimateSnapshotSpace(Snapshot snapshot);
extern void SerializeSnapshot(Snapshot snapshot, char *start_address);
extern Snapshot RestoreSnapshot(char *start_address);
extern void RestoreTransactionSnapshot(Snapshot snapshot, void *master_pgproc);
# 23 "/usr/include/postgresql/11/server/storage/bufmgr.h" 2
# 1 "/usr/include/postgresql/11/server/utils/tqual.h" 1
# 23 "/usr/include/postgresql/11/server/utils/tqual.h"
extern SnapshotData SnapshotSelfData;
extern SnapshotData SnapshotAnyData;
extern SnapshotData CatalogSnapshotData;
# 49 "/usr/include/postgresql/11/server/utils/tqual.h"
typedef enum
{
 HEAPTUPLE_DEAD,
 HEAPTUPLE_LIVE,
 HEAPTUPLE_RECENTLY_DEAD,
 HEAPTUPLE_INSERT_IN_PROGRESS,
 HEAPTUPLE_DELETE_IN_PROGRESS
} HTSV_Result;


extern 
# 59 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 59 "/usr/include/postgresql/11/server/utils/tqual.h"
           HeapTupleSatisfiesMVCC(HeapTuple htup,
        Snapshot snapshot, Buffer buffer);
extern 
# 61 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 61 "/usr/include/postgresql/11/server/utils/tqual.h"
           HeapTupleSatisfiesSelf(HeapTuple htup,
        Snapshot snapshot, Buffer buffer);
extern 
# 63 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 63 "/usr/include/postgresql/11/server/utils/tqual.h"
           HeapTupleSatisfiesAny(HeapTuple htup,
       Snapshot snapshot, Buffer buffer);
extern 
# 65 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 65 "/usr/include/postgresql/11/server/utils/tqual.h"
           HeapTupleSatisfiesToast(HeapTuple htup,
      Snapshot snapshot, Buffer buffer);
extern 
# 67 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 67 "/usr/include/postgresql/11/server/utils/tqual.h"
           HeapTupleSatisfiesDirty(HeapTuple htup,
      Snapshot snapshot, Buffer buffer);
extern 
# 69 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 69 "/usr/include/postgresql/11/server/utils/tqual.h"
           HeapTupleSatisfiesNonVacuumable(HeapTuple htup,
        Snapshot snapshot, Buffer buffer);
extern 
# 71 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 71 "/usr/include/postgresql/11/server/utils/tqual.h"
           HeapTupleSatisfiesHistoricMVCC(HeapTuple htup,
          Snapshot snapshot, Buffer buffer);


extern HTSU_Result HeapTupleSatisfiesUpdate(HeapTuple htup,
       CommandId curcid, Buffer buffer);
extern HTSV_Result HeapTupleSatisfiesVacuum(HeapTuple htup,
       TransactionId OldestXmin, Buffer buffer);
extern 
# 79 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 79 "/usr/include/postgresql/11/server/utils/tqual.h"
           HeapTupleIsSurelyDead(HeapTuple htup,
       TransactionId OldestXmin);
extern 
# 81 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 81 "/usr/include/postgresql/11/server/utils/tqual.h"
           XidInMVCCSnapshot(TransactionId xid, Snapshot snapshot);

extern void HeapTupleSetHintBits(HeapTupleHeader tuple, Buffer buffer,
      uint16 infomask, TransactionId xid);
extern 
# 85 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 85 "/usr/include/postgresql/11/server/utils/tqual.h"
           HeapTupleHeaderIsOnlyLocked(HeapTupleHeader tuple);





struct HTAB;
extern 
# 92 "/usr/include/postgresql/11/server/utils/tqual.h" 3 4
      _Bool 
# 92 "/usr/include/postgresql/11/server/utils/tqual.h"
           ResolveCminCmaxDuringDecoding(struct HTAB *tuplecid_data,
         Snapshot snapshot,
         HeapTuple htup,
         Buffer buffer,
         CommandId *cmin, CommandId *cmax);
# 24 "/usr/include/postgresql/11/server/storage/bufmgr.h" 2

typedef void *Block;


typedef enum BufferAccessStrategyType
{
 BAS_NORMAL,
 BAS_BULKREAD,

 BAS_BULKWRITE,
 BAS_VACUUM
} BufferAccessStrategyType;


typedef enum
{
 RBM_NORMAL,
 RBM_ZERO_AND_LOCK,

 RBM_ZERO_AND_CLEANUP_LOCK,

 RBM_ZERO_ON_ERROR,
 RBM_NORMAL_NO_LOG

} ReadBufferMode;


struct WritebackContext;


extern int NBuffers;


extern 
# 57 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
      _Bool 
# 57 "/usr/include/postgresql/11/server/storage/bufmgr.h"
           zero_damaged_pages;
extern int bgwriter_lru_maxpages;
extern double bgwriter_lru_multiplier;
extern 
# 60 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
      _Bool 
# 60 "/usr/include/postgresql/11/server/storage/bufmgr.h"
           track_io_timing;
extern int target_prefetch_pages;

extern int checkpoint_flush_after;
extern int backend_flush_after;
extern int bgwriter_flush_after;


extern char *BufferBlocks;


extern int effective_io_concurrency;


extern int NLocBuffer;
extern Block *LocalBufferBlockPointers;
extern int32 *LocalRefCount;
# 165 "/usr/include/postgresql/11/server/storage/bufmgr.h"
extern 
# 165 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
      _Bool 
# 165 "/usr/include/postgresql/11/server/storage/bufmgr.h"
           ComputeIoConcurrency(int io_concurrency, double *target);
extern void PrefetchBuffer(Relation reln, ForkNumber forkNum,
      BlockNumber blockNum);
extern Buffer ReadBuffer(Relation reln, BlockNumber blockNum);
extern Buffer ReadBufferExtended(Relation reln, ForkNumber forkNum,
       BlockNumber blockNum, ReadBufferMode mode,
       BufferAccessStrategy strategy);
extern Buffer ReadBufferWithoutRelcache(RelFileNode rnode,
        ForkNumber forkNum, BlockNumber blockNum,
        ReadBufferMode mode, BufferAccessStrategy strategy);
extern void ReleaseBuffer(Buffer buffer);
extern void UnlockReleaseBuffer(Buffer buffer);
extern void MarkBufferDirty(Buffer buffer);
extern void IncrBufferRefCount(Buffer buffer);
extern Buffer ReleaseAndReadBuffer(Buffer buffer, Relation relation,
      BlockNumber blockNum);

extern void InitBufferPool(void);
extern void InitBufferPoolAccess(void);
extern void InitBufferPoolBackend(void);
extern void AtEOXact_Buffers(
# 185 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
                            _Bool 
# 185 "/usr/include/postgresql/11/server/storage/bufmgr.h"
                                 isCommit);
extern void PrintBufferLeakWarning(Buffer buffer);
extern void CheckPointBuffers(int flags);
extern BlockNumber BufferGetBlockNumber(Buffer buffer);
extern BlockNumber RelationGetNumberOfBlocksInFork(Relation relation,
        ForkNumber forkNum);
extern void FlushOneBuffer(Buffer buffer);
extern void FlushRelationBuffers(Relation rel);
extern void FlushDatabaseBuffers(Oid dbid);
extern void DropRelFileNodeBuffers(RelFileNodeBackend rnode,
        ForkNumber forkNum, BlockNumber firstDelBlock);
extern void DropRelFileNodesAllBuffers(RelFileNodeBackend *rnodes, int nnodes);
extern void DropDatabaseBuffers(Oid dbid);




extern 
# 202 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
      _Bool 
# 202 "/usr/include/postgresql/11/server/storage/bufmgr.h"
           BufferIsPermanent(Buffer buffer);
extern XLogRecPtr BufferGetLSNAtomic(Buffer buffer);




extern Size BufferShmemSize(void);
extern void BufferGetTag(Buffer buffer, RelFileNode *rnode,
    ForkNumber *forknum, BlockNumber *blknum);

extern void MarkBufferDirtyHint(Buffer buffer, 
# 212 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
                                              _Bool 
# 212 "/usr/include/postgresql/11/server/storage/bufmgr.h"
                                                   buffer_std);

extern void UnlockBuffers(void);
extern void LockBuffer(Buffer buffer, int mode);
extern 
# 216 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
      _Bool 
# 216 "/usr/include/postgresql/11/server/storage/bufmgr.h"
           ConditionalLockBuffer(Buffer buffer);
extern void LockBufferForCleanup(Buffer buffer);
extern 
# 218 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
      _Bool 
# 218 "/usr/include/postgresql/11/server/storage/bufmgr.h"
           ConditionalLockBufferForCleanup(Buffer buffer);
extern 
# 219 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
      _Bool 
# 219 "/usr/include/postgresql/11/server/storage/bufmgr.h"
           IsBufferCleanupOK(Buffer buffer);
extern 
# 220 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
      _Bool 
# 220 "/usr/include/postgresql/11/server/storage/bufmgr.h"
           HoldingBufferPinThatDelaysRecovery(void);

extern void AbortBufferIO(void);

extern void BufmgrCommit(void);
extern 
# 225 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
      _Bool 
# 225 "/usr/include/postgresql/11/server/storage/bufmgr.h"
           BgBufferSync(struct WritebackContext *wb_context);

extern void AtProcExit_LocalBuffers(void);

extern void TestForOldSnapshot_impl(Snapshot snapshot, Relation relation);


extern BufferAccessStrategy GetAccessStrategy(BufferAccessStrategyType btype);
extern void FreeAccessStrategy(BufferAccessStrategy strategy);
# 264 "/usr/include/postgresql/11/server/storage/bufmgr.h"
static inline void
TestForOldSnapshot(Snapshot snapshot, Relation relation, Page page)
{
 ((void)
# 267 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
1
# 267 "/usr/include/postgresql/11/server/storage/bufmgr.h"
);

 if (old_snapshot_threshold >= 0
  && (snapshot) != 
# 270 "/usr/include/postgresql/11/server/storage/bufmgr.h" 3 4
                  ((void *)0)
  
# 271 "/usr/include/postgresql/11/server/storage/bufmgr.h"
 && ((snapshot)->satisfies == HeapTupleSatisfiesMVCC
   || (snapshot)->satisfies == HeapTupleSatisfiesToast)
  && !(((snapshot)->lsn) == 0)
  && ((uint64) (((PageHeader) (page))->pd_lsn).xlogid << 32 | (((PageHeader) (page))->pd_lsn).xrecoff) > (snapshot)->lsn)
  TestForOldSnapshot_impl(snapshot, relation);
}
# 26 "/usr/include/postgresql/11/server/access/hash.h" 2

# 1 "/usr/include/postgresql/11/server/utils/hsearch.h" 1
# 21 "/usr/include/postgresql/11/server/utils/hsearch.h"
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
 long ffactor;
 Size keysize;
 Size entrysize;
 HashValueFunc hash;
 HashCompareFunc match;
 HashCopyFunc keycopy;
 HashAllocFunc alloc;
 MemoryContext hcxt;
 HASHHDR *hctl;
} HASHCTL;
# 103 "/usr/include/postgresql/11/server/utils/hsearch.h"
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
   HASHCTL *info, int flags);
extern void hash_destroy(HTAB *hashp);
extern void hash_stats(const char *where, HTAB *hashp);
extern void *hash_search(HTAB *hashp, const void *keyPtr, HASHACTION action,
   
# 127 "/usr/include/postgresql/11/server/utils/hsearch.h" 3 4
  _Bool 
# 127 "/usr/include/postgresql/11/server/utils/hsearch.h"
       *foundPtr);
extern uint32 get_hash_value(HTAB *hashp, const void *keyPtr);
extern void *hash_search_with_hash_value(HTAB *hashp, const void *keyPtr,
       uint32 hashvalue, HASHACTION action,
       
# 131 "/usr/include/postgresql/11/server/utils/hsearch.h" 3 4
      _Bool 
# 131 "/usr/include/postgresql/11/server/utils/hsearch.h"
           *foundPtr);
extern 
# 132 "/usr/include/postgresql/11/server/utils/hsearch.h" 3 4
      _Bool 
# 132 "/usr/include/postgresql/11/server/utils/hsearch.h"
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
# 142 "/usr/include/postgresql/11/server/utils/hsearch.h" 3 4
                               _Bool 
# 142 "/usr/include/postgresql/11/server/utils/hsearch.h"
                                    isCommit);
extern void AtEOSubXact_HashTables(
# 143 "/usr/include/postgresql/11/server/utils/hsearch.h" 3 4
                                  _Bool 
# 143 "/usr/include/postgresql/11/server/utils/hsearch.h"
                                       isCommit, int nestDepth);
# 152 "/usr/include/postgresql/11/server/utils/hsearch.h"
extern uint32 string_hash(const void *key, Size keysize);
extern uint32 tag_hash(const void *key, Size keysize);
extern uint32 uint32_hash(const void *key, Size keysize);
extern uint32 bitmap_hash(const void *key, Size keysize);
extern int bitmap_match(const void *key1, const void *key2, Size keysize);
# 28 "/usr/include/postgresql/11/server/access/hash.h" 2






typedef uint32 Bucket;
# 87 "/usr/include/postgresql/11/server/access/hash.h"
typedef struct HashPageOpaqueData
{
 BlockNumber hasho_prevblkno;
 BlockNumber hasho_nextblkno;
 Bucket hasho_bucket;
 uint16 hasho_flag;
 uint16 hasho_page_id;
} HashPageOpaqueData;

typedef HashPageOpaqueData *HashPageOpaque;
# 111 "/usr/include/postgresql/11/server/access/hash.h"
typedef struct HashScanPosItem
{
 ItemPointerData heapTid;
 OffsetNumber indexOffset;
} HashScanPosItem;

typedef struct HashScanPosData
{
 Buffer buf;
 BlockNumber currPage;
 BlockNumber nextPage;
 BlockNumber prevPage;
# 131 "/usr/include/postgresql/11/server/access/hash.h"
 int firstItem;
 int lastItem;
 int itemIndex;

 HashScanPosItem items[((int) ((8192 - (
# 135 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                      __builtin_offsetof (
# 135 "/usr/include/postgresql/11/server/access/hash.h"
                      PageHeaderData
# 135 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                      , 
# 135 "/usr/include/postgresql/11/server/access/hash.h"
                      pd_linp
# 135 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                      )
# 135 "/usr/include/postgresql/11/server/access/hash.h"
                      )) / ((((uintptr_t) ((sizeof(IndexTupleData) + 1)) + ((8) - 1)) & ~((uintptr_t) ((8) - 1))) + sizeof(ItemIdData))))];
} HashScanPosData;
# 166 "/usr/include/postgresql/11/server/access/hash.h"
typedef struct HashScanOpaqueData
{

 uint32 hashso_sk_hash;


 Buffer hashso_bucket_buf;






 Buffer hashso_split_bucket_buf;


 
# 182 "/usr/include/postgresql/11/server/access/hash.h" 3 4
_Bool 
# 182 "/usr/include/postgresql/11/server/access/hash.h"
      hashso_buc_populated;





 
# 188 "/usr/include/postgresql/11/server/access/hash.h" 3 4
_Bool 
# 188 "/usr/include/postgresql/11/server/access/hash.h"
      hashso_buc_split;

 int *killedItems;
 int numKilled;





 HashScanPosData currPos;
} HashScanOpaqueData;

typedef HashScanOpaqueData *HashScanOpaque;
# 252 "/usr/include/postgresql/11/server/access/hash.h"
typedef struct HashMetaPageData
{
 uint32 hashm_magic;
 uint32 hashm_version;
 double hashm_ntuples;
 uint16 hashm_ffactor;
 uint16 hashm_bsize;
 uint16 hashm_bmsize;

 uint16 hashm_bmshift;
 uint32 hashm_maxbucket;
 uint32 hashm_highmask;
 uint32 hashm_lowmask;
 uint32 hashm_ovflpoint;

 uint32 hashm_firstfree;
 uint32 hashm_nmaps;
 RegProcedure hashm_procid;
 uint32 hashm_spares[(((32 - 10) * (1 << 2)) + 10)];

 BlockNumber hashm_mapp[((8192 / 8) < (1024) ? (8192 / 8) : (1024))];
} HashMetaPageData;

typedef HashMetaPageData *HashMetaPage;
# 361 "/usr/include/postgresql/11/server/access/hash.h"
extern IndexBuildResult *hashbuild(Relation heap, Relation index,
    struct IndexInfo *indexInfo);
extern void hashbuildempty(Relation index);
extern 
# 364 "/usr/include/postgresql/11/server/access/hash.h" 3 4
      _Bool 
# 364 "/usr/include/postgresql/11/server/access/hash.h"
           hashinsert(Relation rel, Datum *values, 
# 364 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                                                   _Bool 
# 364 "/usr/include/postgresql/11/server/access/hash.h"
                                                        *isnull,
     ItemPointer ht_ctid, Relation heapRel,
     IndexUniqueCheck checkUnique,
     struct IndexInfo *indexInfo);
extern 
# 368 "/usr/include/postgresql/11/server/access/hash.h" 3 4
      _Bool 
# 368 "/usr/include/postgresql/11/server/access/hash.h"
           hashgettuple(IndexScanDesc scan, ScanDirection dir);
extern int64 hashgetbitmap(IndexScanDesc scan, TIDBitmap *tbm);
extern IndexScanDesc hashbeginscan(Relation rel, int nkeys, int norderbys);
extern void hashrescan(IndexScanDesc scan, ScanKey scankey, int nscankeys,
     ScanKey orderbys, int norderbys);
extern void hashendscan(IndexScanDesc scan);
extern IndexBulkDeleteResult *hashbulkdelete(IndexVacuumInfo *info,
      IndexBulkDeleteResult *stats,
      IndexBulkDeleteCallback callback,
      void *callback_state);
extern IndexBulkDeleteResult *hashvacuumcleanup(IndexVacuumInfo *info,
      IndexBulkDeleteResult *stats);
extern bytea *hashoptions(Datum reloptions, 
# 380 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                                           _Bool 
# 380 "/usr/include/postgresql/11/server/access/hash.h"
                                                validate);
extern 
# 381 "/usr/include/postgresql/11/server/access/hash.h" 3 4
      _Bool 
# 381 "/usr/include/postgresql/11/server/access/hash.h"
           hashvalidate(Oid opclassoid);

extern Datum hash_any(register const unsigned char *k, register int keylen);
extern Datum hash_any_extended(register const unsigned char *k,
      register int keylen, uint64 seed);
extern Datum hash_uint32(uint32 k);
extern Datum hash_uint32_extended(uint32 k, uint64 seed);




extern void _hash_doinsert(Relation rel, IndexTuple itup, Relation heapRel);
extern OffsetNumber _hash_pgaddtup(Relation rel, Buffer buf,
      Size itemsize, IndexTuple itup);
extern void _hash_pgaddmultitup(Relation rel, Buffer buf, IndexTuple *itups,
     OffsetNumber *itup_offsets, uint16 nitups);


extern Buffer _hash_addovflpage(Relation rel, Buffer metabuf, Buffer buf, 
# 399 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                                                                         _Bool 
# 399 "/usr/include/postgresql/11/server/access/hash.h"
                                                                              retain_pin);
extern BlockNumber _hash_freeovflpage(Relation rel, Buffer bucketbuf, Buffer ovflbuf,
       Buffer wbuf, IndexTuple *itups, OffsetNumber *itup_offsets,
       Size *tups_size, uint16 nitups, BufferAccessStrategy bstrategy);
extern void _hash_initbitmapbuffer(Buffer buf, uint16 bmsize, 
# 403 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                                                             _Bool 
# 403 "/usr/include/postgresql/11/server/access/hash.h"
                                                                  initpage);
extern void _hash_squeezebucket(Relation rel,
     Bucket bucket, BlockNumber bucket_blkno,
     Buffer bucket_buf,
     BufferAccessStrategy bstrategy);
extern uint32 _hash_ovflblkno_to_bitno(HashMetaPage metap, BlockNumber ovflblkno);


extern Buffer _hash_getbuf(Relation rel, BlockNumber blkno,
    int access, int flags);
extern Buffer _hash_getbuf_with_condlock_cleanup(Relation rel,
           BlockNumber blkno, int flags);
extern HashMetaPage _hash_getcachedmetap(Relation rel, Buffer *metabuf,
      
# 416 "/usr/include/postgresql/11/server/access/hash.h" 3 4
     _Bool 
# 416 "/usr/include/postgresql/11/server/access/hash.h"
          force_refresh);
extern Buffer _hash_getbucketbuf_from_hashkey(Relation rel, uint32 hashkey,
        int access,
        HashMetaPage *cachedmetap);
extern Buffer _hash_getinitbuf(Relation rel, BlockNumber blkno);
extern void _hash_initbuf(Buffer buf, uint32 max_bucket, uint32 num_bucket,
     uint32 flag, 
# 422 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                 _Bool 
# 422 "/usr/include/postgresql/11/server/access/hash.h"
                      initpage);
extern Buffer _hash_getnewbuf(Relation rel, BlockNumber blkno,
    ForkNumber forkNum);
extern Buffer _hash_getbuf_with_strategy(Relation rel, BlockNumber blkno,
         int access, int flags,
         BufferAccessStrategy bstrategy);
extern void _hash_relbuf(Relation rel, Buffer buf);
extern void _hash_dropbuf(Relation rel, Buffer buf);
extern void _hash_dropscanbuf(Relation rel, HashScanOpaque so);
extern uint32 _hash_init(Relation rel, double num_tuples,
     ForkNumber forkNum);
extern void _hash_init_metabuffer(Buffer buf, double num_tuples,
       RegProcedure procid, uint16 ffactor, 
# 434 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                                           _Bool 
# 434 "/usr/include/postgresql/11/server/access/hash.h"
                                                initpage);
extern void _hash_pageinit(Page page, Size size);
extern void _hash_expandtable(Relation rel, Buffer metabuf);
extern void _hash_finish_split(Relation rel, Buffer metabuf, Buffer obuf,
       Bucket obucket, uint32 maxbucket, uint32 highmask,
       uint32 lowmask);


extern 
# 442 "/usr/include/postgresql/11/server/access/hash.h" 3 4
      _Bool 
# 442 "/usr/include/postgresql/11/server/access/hash.h"
           _hash_next(IndexScanDesc scan, ScanDirection dir);
extern 
# 443 "/usr/include/postgresql/11/server/access/hash.h" 3 4
      _Bool 
# 443 "/usr/include/postgresql/11/server/access/hash.h"
           _hash_first(IndexScanDesc scan, ScanDirection dir);


typedef struct HSpool HSpool;

extern HSpool *_h_spoolinit(Relation heap, Relation index, uint32 num_buckets);
extern void _h_spooldestroy(HSpool *hspool);
extern void _h_spool(HSpool *hspool, ItemPointer self,
   Datum *values, 
# 451 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                 _Bool 
# 451 "/usr/include/postgresql/11/server/access/hash.h"
                      *isnull);
extern void _h_indexbuild(HSpool *hspool, Relation heapRel);


extern 
# 455 "/usr/include/postgresql/11/server/access/hash.h" 3 4
      _Bool 
# 455 "/usr/include/postgresql/11/server/access/hash.h"
           _hash_checkqual(IndexScanDesc scan, IndexTuple itup);
extern uint32 _hash_datum2hashkey(Relation rel, Datum key);
extern uint32 _hash_datum2hashkey_type(Relation rel, Datum key, Oid keytype);
extern Bucket _hash_hashkey2bucket(uint32 hashkey, uint32 maxbucket,
      uint32 highmask, uint32 lowmask);
extern uint32 _hash_log2(uint32 num);
extern uint32 _hash_spareindex(uint32 num_bucket);
extern uint32 _hash_get_totalbuckets(uint32 splitpoint_phase);
extern void _hash_checkpage(Relation rel, Buffer buf, int flags);
extern uint32 _hash_get_indextuple_hashkey(IndexTuple itup);
extern 
# 465 "/usr/include/postgresql/11/server/access/hash.h" 3 4
      _Bool 
# 465 "/usr/include/postgresql/11/server/access/hash.h"
           _hash_convert_tuple(Relation index,
     Datum *user_values, 
# 466 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                        _Bool 
# 466 "/usr/include/postgresql/11/server/access/hash.h"
                             *user_isnull,
     Datum *index_values, 
# 467 "/usr/include/postgresql/11/server/access/hash.h" 3 4
                         _Bool 
# 467 "/usr/include/postgresql/11/server/access/hash.h"
                              *index_isnull);
extern OffsetNumber _hash_binsearch(Page page, uint32 hash_value);
extern OffsetNumber _hash_binsearch_last(Page page, uint32 hash_value);
extern BlockNumber _hash_get_oldblock_from_newbucket(Relation rel, Bucket new_bucket);
extern BlockNumber _hash_get_newblock_from_oldbucket(Relation rel, Bucket old_bucket);
extern Bucket _hash_get_newbucket_from_oldbucket(Relation rel, Bucket old_bucket,
           uint32 lowmask, uint32 maxbucket);
extern void _hash_kill_items(IndexScanDesc scan);


extern void hashbucketcleanup(Relation rel, Bucket cur_bucket,
      Buffer bucket_buf, BlockNumber bucket_blkno,
      BufferAccessStrategy bstrategy,
      uint32 maxbucket, uint32 highmask, uint32 lowmask,
      double *tuples_removed, double *num_index_tuples,
      
# 482 "/usr/include/postgresql/11/server/access/hash.h" 3 4
     _Bool 
# 482 "/usr/include/postgresql/11/server/access/hash.h"
          bucket_has_garbage,
      IndexBulkDeleteCallback callback, void *callback_state);
# 33 "src/backend/utils/adt/agtype_gin.c" 2

# 1 "/usr/include/postgresql/11/server/catalog/pg_collation.h" 1
# 22 "/usr/include/postgresql/11/server/catalog/pg_collation.h"
# 1 "/usr/include/postgresql/11/server/catalog/pg_collation_d.h" 1
# 23 "/usr/include/postgresql/11/server/catalog/pg_collation.h" 2






typedef struct FormData_pg_collation
{
 NameData collname;
 Oid collnamespace;
 Oid collowner;
 char collprovider;
 int32 collencoding;
 NameData collcollate;
 NameData collctype;




} FormData_pg_collation;






typedef FormData_pg_collation *Form_pg_collation;
# 60 "/usr/include/postgresql/11/server/catalog/pg_collation.h"
extern Oid CollationCreate(const char *collname, Oid collnamespace,
    Oid collowner,
    char collprovider,
    int32 collencoding,
    const char *collcollate, const char *collctype,
    const char *collversion,
    
# 66 "/usr/include/postgresql/11/server/catalog/pg_collation.h" 3 4
   _Bool 
# 66 "/usr/include/postgresql/11/server/catalog/pg_collation.h"
        if_not_exists,
    
# 67 "/usr/include/postgresql/11/server/catalog/pg_collation.h" 3 4
   _Bool 
# 67 "/usr/include/postgresql/11/server/catalog/pg_collation.h"
        quiet);
extern void RemoveCollationById(Oid collationOid);
# 35 "src/backend/utils/adt/agtype_gin.c" 2
# 1 "/usr/include/postgresql/11/server/catalog/pg_type.h" 1
# 22 "/usr/include/postgresql/11/server/catalog/pg_type.h"
# 1 "/usr/include/postgresql/11/server/catalog/pg_type_d.h" 1
# 23 "/usr/include/postgresql/11/server/catalog/pg_type.h" 2

# 1 "/usr/include/postgresql/11/server/catalog/objectaddress.h" 1
# 18 "/usr/include/postgresql/11/server/catalog/objectaddress.h"
# 1 "/usr/include/postgresql/11/server/utils/acl.h" 1
# 36 "/usr/include/postgresql/11/server/utils/acl.h"
# 1 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 1
# 26 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
# 1 "/usr/include/postgresql/11/server/nodes/lockoptions.h" 1
# 21 "/usr/include/postgresql/11/server/nodes/lockoptions.h"
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
# 27 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 2
# 1 "/usr/include/postgresql/11/server/nodes/primnodes.h" 1
# 39 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 63 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct RangeVar
{
 NodeTag type;
 char *catalogname;
 char *schemaname;
 char *relname;
 
# 69 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 69 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 108 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct IntoClause
{
 NodeTag type;

 RangeVar *rel;
 List *colNames;
 List *options;
 OnCommitAction onCommit;
 char *tableSpaceName;
 Node *viewQuery;
 
# 118 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 118 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      skipData;
} IntoClause;
# 135 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct Expr
{
 NodeTag type;
} Expr;
# 166 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct Var
{
 Expr xpr;
 Index varno;

 AttrNumber varattno;

 Oid vartype;
 int32 vartypmod;
 Oid varcollid;
 Index varlevelsup;


 Index varnoold;
 AttrNumber varoattno;
 int location;
} Var;
# 192 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct Const
{
 Expr xpr;
 Oid consttype;
 int32 consttypmod;
 Oid constcollid;
 int constlen;
 Datum constvalue;
 
# 200 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 200 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      constisnull;

 
# 202 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 202 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      constbyval;



 int location;
} Const;
# 236 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 294 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
 
# 308 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 308 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      aggstar;
 
# 309 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 309 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      aggvariadic;

 char aggkind;
 Index agglevelsup;
 AggSplit aggsplit;
 int location;
} Aggref;
# 341 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
 
# 365 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 365 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      winstar;
 
# 366 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 366 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      winagg;
 int location;
} WindowFunc;
# 399 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct ArrayRef
{
 Expr xpr;
 Oid refarraytype;
 Oid refelemtype;
 int32 reftypmod;
 Oid refcollid;
 List *refupperindexpr;

 List *reflowerindexpr;


 Expr *refexpr;

 Expr *refassgnexpr;

} ArrayRef;







typedef enum CoercionContext
{
 COERCION_IMPLICIT,
 COERCION_ASSIGNMENT,
 COERCION_EXPLICIT
} CoercionContext;
# 439 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef enum CoercionForm
{
 COERCE_EXPLICIT_CALL,
 COERCE_EXPLICIT_CAST,
 COERCE_IMPLICIT_CAST
} CoercionForm;




typedef struct FuncExpr
{
 Expr xpr;
 Oid funcid;
 Oid funcresulttype;
 
# 454 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 454 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      funcretset;
 
# 455 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 455 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      funcvariadic;

 CoercionForm funcformat;
 Oid funccollid;
 Oid inputcollid;
 List *args;
 int location;
} FuncExpr;
# 478 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct NamedArgExpr
{
 Expr xpr;
 Expr *arg;
 char *name;
 int argnumber;
 int location;
} NamedArgExpr;
# 496 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct OpExpr
{
 Expr xpr;
 Oid opno;
 Oid opfuncid;
 Oid opresulttype;
 
# 502 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 502 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      opretset;
 Oid opcollid;
 Oid inputcollid;
 List *args;
 int location;
} OpExpr;
# 519 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef OpExpr DistinctExpr;







typedef OpExpr NullIfExpr;
# 539 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct ScalarArrayOpExpr
{
 Expr xpr;
 Oid opno;
 Oid opfuncid;
 
# 544 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 544 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      useOr;
 Oid inputcollid;
 List *args;
 int location;
} ScalarArrayOpExpr;
# 557 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 621 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 683 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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


 
# 701 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 701 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      useHashTable;

 
# 703 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 703 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      unknownEqFalse;


 
# 706 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 706 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      parallel_safe;



 List *setParam;

 List *parParam;
 List *args;

 Cost startup_cost;
 Cost per_call_cost;

 int subLinkId;
} SubPlan;
# 729 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct AlternativeSubPlan
{
 Expr xpr;
 List *subplans;
} AlternativeSubPlan;
# 744 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct FieldSelect
{
 Expr xpr;
 Expr *arg;
 AttrNumber fieldnum;
 Oid resulttype;

 int32 resulttypmod;
 Oid resultcollid;
} FieldSelect;
# 773 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct FieldStore
{
 Expr xpr;
 Expr *arg;
 List *newvals;
 List *fieldnums;
 Oid resulttype;

} FieldStore;
# 796 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 816 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct CoerceViaIO
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;

 Oid resultcollid;
 CoercionForm coerceformat;
 int location;
} CoerceViaIO;
# 840 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 865 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct ConvertRowtypeExpr
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;

 CoercionForm convertformat;
 int location;
} ConvertRowtypeExpr;
# 882 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct CollateExpr
{
 Expr xpr;
 Expr *arg;
 Oid collOid;
 int location;
} CollateExpr;
# 912 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 954 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct CaseTestExpr
{
 Expr xpr;
 Oid typeId;
 int32 typeMod;
 Oid collation;
} CaseTestExpr;
# 970 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct ArrayExpr
{
 Expr xpr;
 Oid array_typeid;
 Oid array_collid;
 Oid element_typeid;
 List *elements;
 
# 977 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 977 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      multidims;
 int location;
} ArrayExpr;
# 1004 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct RowExpr
{
 Expr xpr;
 List *args;
 Oid row_typeid;
# 1022 "/usr/include/postgresql/11/server/nodes/primnodes.h"
 CoercionForm row_format;
 List *colnames;
 int location;
} RowExpr;
# 1041 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 1106 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 1145 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 1196 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef enum NullTestType
{
 IS_NULL, IS_NOT_NULL
} NullTestType;

typedef struct NullTest
{
 Expr xpr;
 Expr *arg;
 NullTestType nulltesttype;
 
# 1206 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 1206 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      argisrow;
 int location;
} NullTest;
# 1219 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 1241 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 1261 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct CoerceToDomainValue
{
 Expr xpr;
 Oid typeId;
 int32 typeMod;
 Oid collation;
 int location;
} CoerceToDomainValue;
# 1277 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct SetToDefault
{
 Expr xpr;
 Oid typeId;
 int32 typeMod;
 Oid collation;
 int location;
} SetToDefault;
# 1298 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct CurrentOfExpr
{
 Expr xpr;
 Index cvarno;
 char *cursor_name;
 int cursor_param;
} CurrentOfExpr;
# 1313 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct NextValueExpr
{
 Expr xpr;
 Oid seqid;
 Oid typeId;
} NextValueExpr;
# 1327 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct InferenceElem
{
 Expr xpr;
 Node *expr;
 Oid infercollid;
 Oid inferopclass;
} InferenceElem;
# 1389 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct TargetEntry
{
 Expr xpr;
 Expr *expr;
 AttrNumber resno;
 char *resname;
 Index ressortgroupref;

 Oid resorigtbl;
 AttrNumber resorigcol;
 
# 1399 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 1399 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      resjunk;

} TargetEntry;
# 1441 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct RangeTblRef
{
 NodeTag type;
 int rtindex;
} RangeTblRef;
# 1470 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct JoinExpr
{
 NodeTag type;
 JoinType jointype;
 
# 1474 "/usr/include/postgresql/11/server/nodes/primnodes.h" 3 4
_Bool 
# 1474 "/usr/include/postgresql/11/server/nodes/primnodes.h"
      isNatural;
 Node *larg;
 Node *rarg;
 List *usingClause;
 Node *quals;
 Alias *alias;
 int rtindex;
} JoinExpr;
# 1492 "/usr/include/postgresql/11/server/nodes/primnodes.h"
typedef struct FromExpr
{
 NodeTag type;
 List *fromlist;
 Node *quals;
} FromExpr;
# 1508 "/usr/include/postgresql/11/server/nodes/primnodes.h"
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
# 28 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 2
# 1 "/usr/include/postgresql/11/server/nodes/value.h" 1
# 42 "/usr/include/postgresql/11/server/nodes/value.h"
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
# 29 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 2
# 1 "/usr/include/postgresql/11/server/partitioning/partdefs.h" 1
# 16 "/usr/include/postgresql/11/server/partitioning/partdefs.h"
typedef struct PartitionBoundInfoData *PartitionBoundInfo;

typedef struct PartitionKeyData *PartitionKey;

typedef struct PartitionBoundSpec PartitionBoundSpec;

typedef struct PartitionDescData *PartitionDesc;
# 30 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 2


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
# 72 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef uint32 AclMode;
# 108 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct Query
{
 NodeTag type;

 CmdType commandType;

 QuerySource querySource;

 uint64 queryId;

 
# 118 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 118 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      canSetTag;

 Node *utilityStmt;

 int resultRelation;


 
# 125 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 125 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hasAggs;
 
# 126 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 126 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hasWindowFuncs;
 
# 127 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 127 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hasTargetSRFs;
 
# 128 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 128 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hasSubLinks;
 
# 129 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 129 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hasDistinctOn;
 
# 130 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 130 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hasRecursive;
 
# 131 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 131 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hasModifyingCTE;
 
# 132 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 132 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hasForUpdate;
 
# 133 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 133 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hasRowSecurity;

 List *cteList;

 List *rtable;
 FromExpr *jointree;

 List *targetList;

 OverridingKind override;

 OnConflictExpr *onConflict;

 List *returningList;

 List *groupClause;

 List *groupingSets;

 Node *havingQual;

 List *windowClause;

 List *distinctClause;

 List *sortClause;

 Node *limitOffset;
 Node *limitCount;

 List *rowMarks;

 Node *setOperations;


 List *constraintDeps;


 List *withCheckOptions;
# 181 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
 int stmt_location;
 int stmt_len;
} Query;
# 207 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct TypeName
{
 NodeTag type;
 List *names;
 Oid typeOid;
 
# 212 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 212 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      setof;
 
# 213 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 213 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      pct_type;
 List *typmods;
 int32 typemod;
 List *arrayBounds;
 int location;
} TypeName;
# 233 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 AEXPR_OF,
 AEXPR_IN,
 AEXPR_LIKE,
 AEXPR_ILIKE,
 AEXPR_SIMILAR,
 AEXPR_BETWEEN,
 AEXPR_NOT_BETWEEN,
 AEXPR_BETWEEN_SYM,
 AEXPR_NOT_BETWEEN_SYM,
 AEXPR_PAREN
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
# 348 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct FuncCall
{
 NodeTag type;
 List *funcname;
 List *args;
 List *agg_order;
 Node *agg_filter;
 
# 355 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 355 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      agg_within_group;
 
# 356 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 356 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      agg_star;
 
# 357 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 357 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      agg_distinct;
 
# 358 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 358 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      func_variadic;
 struct WindowDef *over;
 int location;
} FuncCall;







typedef struct A_Star
{
 NodeTag type;
} A_Star;







typedef struct A_Indices
{
 NodeTag type;
 
# 383 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 383 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_slice;
 Node *lidx;
 Node *uidx;
} A_Indices;
# 403 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 438 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct ResTarget
{
 NodeTag type;
 char *name;
 List *indirection;
 Node *val;
 int location;
} ResTarget;
# 456 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 485 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 539 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct RangeSubselect
{
 NodeTag type;
 
# 542 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 542 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      lateral;
 Node *subquery;
 Alias *alias;
} RangeSubselect;
# 561 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct RangeFunction
{
 NodeTag type;
 
# 564 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 564 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      lateral;
 
# 565 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 565 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      ordinality;
 
# 566 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 566 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_rowsfrom;
 List *functions;
 Alias *alias;
 List *coldeflist;

} RangeFunction;




typedef struct RangeTableFunc
{
 NodeTag type;
 
# 579 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 579 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 599 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 599 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      for_ordinality;
 
# 600 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 600 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_not_null;
 Node *colexpr;
 Node *coldefexpr;
 int location;
} RangeTableFuncCol;
# 616 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct RangeTableSample
{
 NodeTag type;
 Node *relation;
 List *method;
 List *args;
 Node *repeatable;
 int location;
} RangeTableSample;
# 644 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct ColumnDef
{
 NodeTag type;
 char *colname;
 TypeName *typeName;
 int inhcount;
 
# 650 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 650 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_local;
 
# 651 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 651 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_not_null;
 
# 652 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 652 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_from_type;
 
# 653 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 653 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_from_parent;
 char storage;
 Node *raw_default;
 Node *cooked_default;
 char identity;
 RangeVar *identitySequence;

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
 CREATE_TABLE_LIKE_CONSTRAINTS = 1 << 1,
 CREATE_TABLE_LIKE_DEFAULTS = 1 << 2,
 CREATE_TABLE_LIKE_IDENTITY = 1 << 3,
 CREATE_TABLE_LIKE_INDEXES = 1 << 4,
 CREATE_TABLE_LIKE_STATISTICS = 1 << 5,
 CREATE_TABLE_LIKE_STORAGE = 1 << 6,
 CREATE_TABLE_LIKE_ALL = (0x7FFFFFFF)
} TableLikeOption;
# 697 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct IndexElem
{
 NodeTag type;
 char *name;
 Node *expr;
 char *indexcolname;
 List *collation;
 List *opclass;
 SortByDir ordering;
 SortByNulls nulls_ordering;
} IndexElem;
# 719 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 746 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 774 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 809 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
struct PartitionBoundSpec
{
 NodeTag type;

 char strategy;
 
# 814 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 814 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
} PartitionCmd;
# 947 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef enum RTEKind
{
 RTE_RELATION,
 RTE_SUBQUERY,
 RTE_JOIN,
 RTE_FUNCTION,
 RTE_TABLEFUNC,
 RTE_VALUES,
 RTE_CTE,
 RTE_NAMEDTUPLESTORE
} RTEKind;

typedef struct RangeTblEntry
{
 NodeTag type;

 RTEKind rtekind;
# 979 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
 Oid relid;
 char relkind;
 struct TableSampleClause *tablesample;




 Query *subquery;
 
# 987 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 987 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      security_barrier;
# 1006 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
 JoinType jointype;
 List *joinaliasvars;
# 1017 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
 List *functions;
 
# 1018 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1018 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      funcordinality;




 TableFunc *tablefunc;




 List *values_lists;




 char *ctename;
 Index ctelevelsup;
 
# 1035 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1035 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      self_reference;
# 1055 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
 List *coltypes;
 List *coltypmods;
 List *colcollations;




 char *enrname;
 double enrtuples;




 Alias *alias;
 Alias *eref;
 
# 1070 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1070 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      lateral;
 
# 1071 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1071 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      inh;
 
# 1072 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1072 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      inFromCl;
 AclMode requiredPerms;
 Oid checkAsUser;
 Bitmapset *selectedCols;
 Bitmapset *insertedCols;
 Bitmapset *updatedCols;
 List *securityQuals;
} RangeTblEntry;
# 1097 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 1146 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1146 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      cascaded;
} WithCheckOption;
# 1207 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct SortGroupClause
{
 NodeTag type;
 Index tleSortGroupRef;
 Oid eqop;
 Oid sortop;
 
# 1213 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1213 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      nulls_first;
 
# 1214 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1214 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      hashable;
} SortGroupClause;
# 1267 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 1301 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 1314 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1314 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      inRangeAsc;
 
# 1315 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1315 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      inRangeNullsFirst;
 Index winref;
 
# 1317 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1317 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      copiedOrder;
} WindowClause;
# 1332 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct RowMarkClause
{
 NodeTag type;
 Index rti;
 LockClauseStrength strength;
 LockWaitPolicy waitPolicy;
 
# 1338 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1338 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      pushedDown;
} RowMarkClause;
# 1348 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct WithClause
{
 NodeTag type;
 List *ctes;
 
# 1352 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1352 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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







typedef struct CommonTableExpr
{
 NodeTag type;
 char *ctename;
 List *aliascolnames;

 Node *ctequery;
 int location;

 
# 1402 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1402 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      cterecursive;
 int cterefcount;

 List *ctecolnames;
 List *ctecoltypes;
 List *ctecoltypmods;
 List *ctecolcollations;
} CommonTableExpr;
# 1426 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct TriggerTransition
{
 NodeTag type;
 char *name;
 
# 1430 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1430 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      isNew;
 
# 1431 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1431 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      isTable;
} TriggerTransition;
# 1450 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct RawStmt
{
 NodeTag type;
 Node *stmt;
 int stmt_location;
 int stmt_len;
} RawStmt;
# 1470 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 1524 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 Node *havingClause;
 List *windowClause;
# 1557 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
 List *valuesLists;





 List *sortClause;
 Node *limitOffset;
 Node *limitCount;
 List *lockingClause;
 WithClause *withClause;




 SetOperation op;
 
# 1573 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1573 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      all;
 struct SelectStmt *larg;
 struct SelectStmt *rarg;

} SelectStmt;
# 1599 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct SetOperationStmt
{
 NodeTag type;
 SetOperation op;
 
# 1603 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1603 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      all;
 Node *larg;
 Node *rarg;



 List *colTypes;
 List *colTypmods;
 List *colCollations;
 List *groupClauses;

} SetOperationStmt;
# 1637 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 1699 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct CreateSchemaStmt
{
 NodeTag type;
 char *schemaname;
 RoleSpec *authrole;
 List *schemaElts;
 
# 1705 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1705 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 ObjectType relkind;
 
# 1724 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1724 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
} AlterTableStmt;

typedef enum AlterTableType
{
 AT_AddColumn,
 AT_AddColumnRecurse,
 AT_AddColumnToView,
 AT_ColumnDefault,
 AT_DropNotNull,
 AT_SetNotNull,
 AT_SetStatistics,
 AT_SetOptions,
 AT_ResetOptions,
 AT_SetStorage,
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
 AT_ProcessedConstraint,

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
 AT_AddOids,
 AT_AddOidsRecurse,
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
 AT_AddIdentity,
 AT_SetIdentity,
 AT_DropIdentity
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
 
# 1818 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1818 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
 
# 1819 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1819 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      recurse;
} AlterTableCmd;






typedef struct AlterCollationStmt
{
 NodeTag type;
 List *collname;
} AlterCollationStmt;
# 1841 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct AlterDomainStmt
{
 NodeTag type;
 char subtype;







 List *typeName;
 char *name;
 Node *def;
 DropBehavior behavior;
 
# 1856 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1856 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 1874 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1874 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_grant;
 GrantTargetType targtype;
 ObjectType objtype;
 List *objects;

 List *privileges;

 List *grantees;
 
# 1882 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1882 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      grant_option;
 DropBehavior behavior;
} GrantStmt;






typedef struct ObjectWithArgs
{
 NodeTag type;
 List *objname;
 List *objargs;
 
# 1896 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1896 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      args_unspecified;


} ObjectWithArgs;
# 1908 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct AccessPriv
{
 NodeTag type;
 char *priv_name;
 List *cols;
} AccessPriv;
# 1924 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct GrantRoleStmt
{
 NodeTag type;
 List *granted_roles;
 List *grantee_roles;
 
# 1929 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1929 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_grant;
 
# 1930 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1930 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 1954 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct CopyStmt
{
 NodeTag type;
 RangeVar *relation;
 Node *query;

 List *attlist;

 
# 1962 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1962 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_from;
 
# 1963 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1963 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_program;
 char *filename;
 List *options;
} CopyStmt;
# 1975 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 1991 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 1991 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_local;
} VariableSetStmt;





typedef struct VariableShowStmt
{
 NodeTag type;
 char *name;
} VariableShowStmt;
# 2015 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2029 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2029 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      if_not_exists;
} CreateStmt;
# 2063 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef enum ConstrType
{
 CONSTR_NULL,

 CONSTR_NOTNULL,
 CONSTR_DEFAULT,
 CONSTR_IDENTITY,
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
# 2093 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct Constraint
{
 NodeTag type;
 ConstrType contype;


 char *conname;
 
# 2100 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2100 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      deferrable;
 
# 2101 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2101 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      initdeferred;
 int location;


 
# 2105 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2105 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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



 
# 2139 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2139 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      skip_validation;
 
# 2140 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2140 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2161 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2161 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
} DropTableSpaceStmt;

typedef struct AlterTableSpaceOptionsStmt
{
 NodeTag type;
 char *tablespacename;
 List *options;
 
# 2169 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2169 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      isReset;
} AlterTableSpaceOptionsStmt;

typedef struct AlterTableMoveAllStmt
{
 NodeTag type;
 char *orig_tablespacename;
 ObjectType objtype;
 List *roles;
 char *new_tablespacename;
 
# 2179 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2179 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      nowait;
} AlterTableMoveAllStmt;






typedef struct CreateExtensionStmt
{
 NodeTag type;
 char *extname;
 
# 2191 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2191 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2245 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2245 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      if_not_exists;
 List *options;
} CreateForeignServerStmt;

typedef struct AlterForeignServerStmt
{
 NodeTag type;
 char *servername;
 char *version;
 List *options;
 
# 2255 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2255 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2280 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2280 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2297 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2297 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2333 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2333 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 char *trigname;
 RangeVar *relation;
 List *funcname;
 List *args;
 
# 2376 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2376 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      row;

 int16 timing;

 int16 events;
 List *columns;
 Node *whenClause;
 
# 2383 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2383 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      isconstraint;

 List *transitionRels;

 
# 2387 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2387 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      deferrable;
 
# 2388 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2388 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2425 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2425 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      replace;
 char *plname;
 List *plhandler;
 List *plinline;
 List *plvalidator;
 
# 2430 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2430 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      pltrusted;
} CreatePLangStmt;
# 2442 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2477 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2477 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
} DropRoleStmt;






typedef struct CreateSeqStmt
{
 NodeTag type;
 RangeVar *sequence;
 List *options;
 Oid ownerId;
 
# 2491 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2491 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      for_identity;
 
# 2492 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2492 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      if_not_exists;
} CreateSeqStmt;

typedef struct AlterSeqStmt
{
 NodeTag type;
 RangeVar *sequence;
 List *options;
 
# 2500 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2500 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      for_identity;
 
# 2501 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2501 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
} AlterSeqStmt;





typedef struct DefineStmt
{
 NodeTag type;
 ObjectType kind;
 
# 2512 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2512 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      oldstyle;
 List *defnames;
 List *args;
 List *definition;
 
# 2516 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2516 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      if_not_exists;
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
 
# 2544 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2544 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2584 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2584 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      isDrop;
 List *items;
} AlterOpFamilyStmt;






typedef struct DropStmt
{
 NodeTag type;
 List *objects;
 ObjectType removeType;
 DropBehavior behavior;
 
# 2599 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2599 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
 
# 2600 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2600 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      concurrent;
} DropStmt;





typedef struct TruncateStmt
{
 NodeTag type;
 List *relations;
 
# 2611 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2611 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 2659 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2700 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2700 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      ismove;
} FetchStmt;
# 2718 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct IndexStmt
{
 NodeTag type;
 char *idxname;
 RangeVar *relation;
 Oid relationId;
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
 
# 2735 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2735 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      unique;
 
# 2736 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2736 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      primary;
 
# 2737 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2737 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      isconstraint;
 
# 2738 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2738 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      deferrable;
 
# 2739 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2739 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      initdeferred;
 
# 2740 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2740 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      transformed;
 
# 2741 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2741 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      concurrent;
 
# 2742 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2742 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      if_not_exists;
} IndexStmt;





typedef struct CreateStatsStmt
{
 NodeTag type;
 List *defnames;
 List *stat_types;
 List *exprs;
 List *relations;
 char *stxcomment;
 
# 2757 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2757 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      if_not_exists;
} CreateStatsStmt;





typedef struct CreateFunctionStmt
{
 NodeTag type;
 
# 2767 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2767 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_procedure;
 
# 2768 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2768 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      replace;
 List *funcname;
 List *parameters;
 TypeName *returnType;
 List *options;
} CreateFunctionStmt;

typedef enum FunctionParameterMode
{

 FUNC_PARAM_IN = 'i',
 FUNC_PARAM_OUT = 'o',
 FUNC_PARAM_INOUT = 'b',
 FUNC_PARAM_VARIADIC = 'v',
 FUNC_PARAM_TABLE = 't'
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
 
# 2819 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2819 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      langIsTrusted;
 
# 2820 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2820 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      atomic;
} InlineCodeBlock;





typedef struct CallStmt
{
 NodeTag type;
 FuncCall *funccall;
 FuncExpr *funcexpr;
} CallStmt;

typedef struct CallContext
{
 NodeTag type;
 
# 2837 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2837 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 2855 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2855 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
} RenameStmt;





typedef struct AlterObjectDependsStmt
{
 NodeTag type;
 ObjectType objectType;
 RangeVar *relation;
 Node *object;
 Value *extname;
} AlterObjectDependsStmt;





typedef struct AlterObjectSchemaStmt
{
 NodeTag type;
 ObjectType objectType;
 RangeVar *relation;
 Node *object;
 char *newschema;
 
# 2882 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2882 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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






typedef struct RuleStmt
{
 NodeTag type;
 RangeVar *relation;
 char *rulename;
 Node *whereClause;
 CmdType event;
 
# 2922 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2922 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      instead;
 List *actions;
 
# 2924 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 2924 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 3029 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3029 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      newValIsAfter;
 
# 3030 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3030 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 3050 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3050 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 3102 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3102 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
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
 
# 3124 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3124 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      verbose;
} ClusterStmt;
# 3135 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef enum VacuumOption
{
 VACOPT_VACUUM = 1 << 0,
 VACOPT_ANALYZE = 1 << 1,
 VACOPT_VERBOSE = 1 << 2,
 VACOPT_FREEZE = 1 << 3,
 VACOPT_FULL = 1 << 4,
 VACOPT_NOWAIT = 1 << 5,
 VACOPT_SKIPTOAST = 1 << 6,
 VACOPT_DISABLE_PAGE_SKIPPING = 1 << 7
} VacuumOption;
# 3154 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct VacuumRelation
{
 NodeTag type;
 RangeVar *relation;
 Oid oid;
 List *va_cols;
} VacuumRelation;

typedef struct VacuumStmt
{
 NodeTag type;
 int options;
 List *rels;
} VacuumStmt;
# 3177 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct ExplainStmt
{
 NodeTag type;
 Node *query;
 List *options;
} ExplainStmt;
# 3197 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
typedef struct CreateTableAsStmt
{
 NodeTag type;
 Node *query;
 IntoClause *into;
 ObjectType relkind;
 
# 3203 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3203 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      is_select_into;
 
# 3204 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3204 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      if_not_exists;
} CreateTableAsStmt;





typedef struct RefreshMatViewStmt
{
 NodeTag type;
 
# 3214 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3214 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      concurrent;
 
# 3215 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3215 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 3256 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3256 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      nowait;
} LockStmt;





typedef struct ConstraintsSetStmt
{
 NodeTag type;
 List *constraints;
 
# 3267 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3267 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      deferred;
} ConstraintsSetStmt;
# 3278 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 int options;
} ReindexStmt;





typedef struct CreateConversionStmt
{
 NodeTag type;
 List *conversion_name;
 char *for_encoding_name;
 char *to_encoding_name;
 List *func_name;
 
# 3308 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3308 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      def;
} CreateConversionStmt;





typedef struct CreateCastStmt
{
 NodeTag type;
 TypeName *sourcetype;
 TypeName *targettype;
 ObjectWithArgs *func;
 CoercionContext context;
 
# 3322 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3322 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      inout;
} CreateCastStmt;





typedef struct CreateTransformStmt
{
 NodeTag type;
 
# 3332 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3332 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 
# 3430 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3430 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      override;
 
# 3431 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3431 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      replace;
 
# 3432 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3432 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
} AlterTSConfigurationStmt;


typedef struct CreatePublicationStmt
{
 NodeTag type;
 char *pubname;
 List *options;
 List *tables;
 
# 3442 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3442 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      for_all_tables;
} CreatePublicationStmt;

typedef struct AlterPublicationStmt
{
 NodeTag type;
 char *pubname;


 List *options;


 List *tables;
 
# 3455 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3455 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
 ALTER_SUBSCRIPTION_PUBLICATION,
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
 
# 3491 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 3 4
_Bool 
# 3491 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
      missing_ok;
 DropBehavior behavior;
} DropSubscriptionStmt;
# 37 "/usr/include/postgresql/11/server/utils/acl.h" 2
# 1 "/usr/include/postgresql/11/server/parser/parse_node.h" 1
# 18 "/usr/include/postgresql/11/server/parser/parse_node.h"
# 1 "/usr/include/postgresql/11/server/utils/queryenvironment.h" 1
# 20 "/usr/include/postgresql/11/server/utils/queryenvironment.h"
typedef enum EphemeralNameRelationType
{
 ENR_NAMED_TUPLESTORE
} EphemeralNameRelationType;
# 32 "/usr/include/postgresql/11/server/utils/queryenvironment.h"
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
# 19 "/usr/include/postgresql/11/server/parser/parse_node.h" 2
# 33 "/usr/include/postgresql/11/server/parser/parse_node.h"
typedef enum ParseExprKind
{
 EXPR_KIND_NONE = 0,
 EXPR_KIND_OTHER,
 EXPR_KIND_JOIN_ON,
 EXPR_KIND_JOIN_USING,
 EXPR_KIND_FROM_SUBSELECT,
 EXPR_KIND_FROM_FUNCTION,
 EXPR_KIND_WHERE,
 EXPR_KIND_HAVING,
 EXPR_KIND_FILTER,
 EXPR_KIND_WINDOW_PARTITION,
 EXPR_KIND_WINDOW_ORDER,
 EXPR_KIND_WINDOW_FRAME_RANGE,
 EXPR_KIND_WINDOW_FRAME_ROWS,
 EXPR_KIND_WINDOW_FRAME_GROUPS,
 EXPR_KIND_SELECT_TARGET,
 EXPR_KIND_INSERT_TARGET,
 EXPR_KIND_UPDATE_SOURCE,
 EXPR_KIND_UPDATE_TARGET,
 EXPR_KIND_GROUP_BY,
 EXPR_KIND_ORDER_BY,
 EXPR_KIND_DISTINCT_ON,
 EXPR_KIND_LIMIT,
 EXPR_KIND_OFFSET,
 EXPR_KIND_RETURNING,
 EXPR_KIND_VALUES,
 EXPR_KIND_VALUES_SINGLE,
 EXPR_KIND_CHECK_CONSTRAINT,
 EXPR_KIND_DOMAIN_CHECK,
 EXPR_KIND_COLUMN_DEFAULT,
 EXPR_KIND_FUNCTION_DEFAULT,
 EXPR_KIND_INDEX_EXPRESSION,
 EXPR_KIND_INDEX_PREDICATE,
 EXPR_KIND_ALTER_COL_TRANSFORM,
 EXPR_KIND_EXECUTE_PARAMETER,
 EXPR_KIND_TRIGGER_WHEN,
 EXPR_KIND_POLICY,
 EXPR_KIND_PARTITION_EXPRESSION,
 EXPR_KIND_CALL_ARGUMENT
} ParseExprKind;





typedef struct ParseState ParseState;

typedef Node *(*PreParseColumnRefHook) (ParseState *pstate, ColumnRef *cref);
typedef Node *(*PostParseColumnRefHook) (ParseState *pstate, ColumnRef *cref, Node *var);
typedef Node *(*ParseParamRefHook) (ParseState *pstate, ParamRef *pref);
typedef Node *(*CoerceParamHook) (ParseState *pstate, Param *param,
          Oid targetTypeId, int32 targetTypeMod,
          int location);
# 170 "/usr/include/postgresql/11/server/parser/parse_node.h"
struct ParseState
{
 struct ParseState *parentParseState;
 const char *p_sourcetext;
 List *p_rtable;
 List *p_joinexprs;
 List *p_joinlist;

 List *p_namespace;

 
# 180 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 180 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_lateral_active;
 List *p_ctenamespace;
 List *p_future_ctes;
 CommonTableExpr *p_parent_cte;
 Relation p_target_relation;
 RangeTblEntry *p_target_rangetblentry;
 
# 186 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 186 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_is_insert;
 List *p_windowdefs;
 ParseExprKind p_expr_kind;
 int p_next_resno;
 List *p_multiassign_exprs;
 List *p_locking_clause;
 
# 192 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 192 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_locked_from_parent;

 
# 194 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 194 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_resolve_unknowns;


 QueryEnvironment *p_queryEnv;


 
# 200 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 200 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_hasAggs;
 
# 201 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 201 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_hasWindowFuncs;
 
# 202 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 202 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_hasTargetSRFs;
 
# 203 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 203 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_hasSubLinks;
 
# 204 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 204 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_hasModifyingCTE;

 Node *p_last_srf;





 PreParseColumnRefHook p_pre_columnref_hook;
 PostParseColumnRefHook p_post_columnref_hook;
 ParseParamRefHook p_paramref_hook;
 CoerceParamHook p_coerce_param_hook;
 void *p_ref_hook_state;
};
# 246 "/usr/include/postgresql/11/server/parser/parse_node.h"
typedef struct ParseNamespaceItem
{
 RangeTblEntry *p_rte;
 
# 249 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 249 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_rel_visible;
 
# 250 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 250 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_cols_visible;
 
# 251 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 251 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_lateral_only;
 
# 252 "/usr/include/postgresql/11/server/parser/parse_node.h" 3 4
_Bool 
# 252 "/usr/include/postgresql/11/server/parser/parse_node.h"
      p_lateral_ok;
} ParseNamespaceItem;


typedef struct ParseCallbackState
{
 ParseState *pstate;
 int location;
 ErrorContextCallback errcallback;
} ParseCallbackState;


extern ParseState *make_parsestate(ParseState *parentParseState);
extern void free_parsestate(ParseState *pstate);
extern int parser_errposition(ParseState *pstate, int location);

extern void setup_parser_errposition_callback(ParseCallbackState *pcbstate,
          ParseState *pstate, int location);
extern void cancel_parser_errposition_callback(ParseCallbackState *pcbstate);

extern Var *make_var(ParseState *pstate, RangeTblEntry *rte, int attrno,
   int location);
extern Oid transformArrayType(Oid *arrayType, int32 *arrayTypmod);
extern ArrayRef *transformArraySubscripts(ParseState *pstate,
       Node *arrayBase,
       Oid arrayType,
       Oid elementType,
       int32 arrayTypMod,
       List *indirection,
       Node *assignFrom);
extern Const *make_const(ParseState *pstate, Value *value, int location);
# 38 "/usr/include/postgresql/11/server/utils/acl.h" 2
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
# 39 "/usr/include/postgresql/11/server/utils/acl.h" 2
# 55 "/usr/include/postgresql/11/server/utils/acl.h"
typedef struct AclItem
{
 Oid ai_grantee;
 Oid ai_grantor;
 AclMode ai_privs;
} AclItem;
# 107 "/usr/include/postgresql/11/server/utils/acl.h"
typedef ArrayType Acl;
# 171 "/usr/include/postgresql/11/server/utils/acl.h"
typedef enum
{
 ACLMASK_ALL,
 ACLMASK_ANY
} AclMaskHow;


typedef enum
{
 ACLCHECK_OK = 0,
 ACLCHECK_NO_PRIV,
 ACLCHECK_NOT_OWNER
} AclResult;





extern Acl *acldefault(ObjectType objtype, Oid ownerId);
extern Acl *get_user_default_acl(ObjectType objtype, Oid ownerId,
      Oid nsp_oid);
extern void recordDependencyOnNewAcl(Oid classId, Oid objectId, int32 objsubId,
       Oid ownerId, Acl *acl);

extern Acl *aclupdate(const Acl *old_acl, const AclItem *mod_aip,
    int modechg, Oid ownerId, DropBehavior behavior);
extern Acl *aclnewowner(const Acl *old_acl, Oid oldOwnerId, Oid newOwnerId);
extern Acl *make_empty_acl(void);
extern Acl *aclcopy(const Acl *orig_acl);
extern Acl *aclconcat(const Acl *left_acl, const Acl *right_acl);
extern Acl *aclmerge(const Acl *left_acl, const Acl *right_acl, Oid ownerId);
extern void aclitemsort(Acl *acl);
extern 
# 203 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 203 "/usr/include/postgresql/11/server/utils/acl.h"
           aclequal(const Acl *left_acl, const Acl *right_acl);

extern AclMode aclmask(const Acl *acl, Oid roleid, Oid ownerId,
  AclMode mask, AclMaskHow how);
extern int aclmembers(const Acl *acl, Oid **roleids);

extern 
# 209 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 209 "/usr/include/postgresql/11/server/utils/acl.h"
           has_privs_of_role(Oid member, Oid role);
extern 
# 210 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 210 "/usr/include/postgresql/11/server/utils/acl.h"
           is_member_of_role(Oid member, Oid role);
extern 
# 211 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 211 "/usr/include/postgresql/11/server/utils/acl.h"
           is_member_of_role_nosuper(Oid member, Oid role);
extern 
# 212 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 212 "/usr/include/postgresql/11/server/utils/acl.h"
           is_admin_of_role(Oid member, Oid role);
extern void check_is_member_of_role(Oid member, Oid role);
extern Oid get_role_oid(const char *rolename, 
# 214 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
                                             _Bool 
# 214 "/usr/include/postgresql/11/server/utils/acl.h"
                                                  missing_ok);
extern Oid get_role_oid_or_public(const char *rolename);
extern Oid get_rolespec_oid(const RoleSpec *role, 
# 216 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
                                                 _Bool 
# 216 "/usr/include/postgresql/11/server/utils/acl.h"
                                                      missing_ok);
extern void check_rolespec_name(const RoleSpec *role, const char *detail_msg);
extern HeapTuple get_rolespec_tuple(const RoleSpec *role);
extern char *get_rolespec_name(const RoleSpec *role);

extern void select_best_grantor(Oid roleId, AclMode privileges,
     const Acl *acl, Oid ownerId,
     Oid *grantorId, AclMode *grantOptions);

extern void initialize_acl(void);




extern void ExecuteGrantStmt(GrantStmt *stmt);
extern void ExecAlterDefaultPrivilegesStmt(ParseState *pstate, AlterDefaultPrivilegesStmt *stmt);

extern void RemoveRoleFromObjectACL(Oid roleid, Oid classid, Oid objid);
extern void RemoveDefaultACLById(Oid defaclOid);

extern AclMode pg_attribute_aclmask(Oid table_oid, AttrNumber attnum,
      Oid roleid, AclMode mask, AclMaskHow how);
extern AclMode pg_class_aclmask(Oid table_oid, Oid roleid,
     AclMode mask, AclMaskHow how);
extern AclMode pg_database_aclmask(Oid db_oid, Oid roleid,
     AclMode mask, AclMaskHow how);
extern AclMode pg_proc_aclmask(Oid proc_oid, Oid roleid,
    AclMode mask, AclMaskHow how);
extern AclMode pg_language_aclmask(Oid lang_oid, Oid roleid,
     AclMode mask, AclMaskHow how);
extern AclMode pg_largeobject_aclmask_snapshot(Oid lobj_oid, Oid roleid,
        AclMode mask, AclMaskHow how, Snapshot snapshot);
extern AclMode pg_namespace_aclmask(Oid nsp_oid, Oid roleid,
      AclMode mask, AclMaskHow how);
extern AclMode pg_tablespace_aclmask(Oid spc_oid, Oid roleid,
       AclMode mask, AclMaskHow how);
extern AclMode pg_foreign_data_wrapper_aclmask(Oid fdw_oid, Oid roleid,
        AclMode mask, AclMaskHow how);
extern AclMode pg_foreign_server_aclmask(Oid srv_oid, Oid roleid,
        AclMode mask, AclMaskHow how);
extern AclMode pg_type_aclmask(Oid type_oid, Oid roleid,
    AclMode mask, AclMaskHow how);

extern AclResult pg_attribute_aclcheck(Oid table_oid, AttrNumber attnum,
       Oid roleid, AclMode mode);
extern AclResult pg_attribute_aclcheck_all(Oid table_oid, Oid roleid,
        AclMode mode, AclMaskHow how);
extern AclResult pg_class_aclcheck(Oid table_oid, Oid roleid, AclMode mode);
extern AclResult pg_database_aclcheck(Oid db_oid, Oid roleid, AclMode mode);
extern AclResult pg_proc_aclcheck(Oid proc_oid, Oid roleid, AclMode mode);
extern AclResult pg_language_aclcheck(Oid lang_oid, Oid roleid, AclMode mode);
extern AclResult pg_largeobject_aclcheck_snapshot(Oid lang_oid, Oid roleid,
         AclMode mode, Snapshot snapshot);
extern AclResult pg_namespace_aclcheck(Oid nsp_oid, Oid roleid, AclMode mode);
extern AclResult pg_tablespace_aclcheck(Oid spc_oid, Oid roleid, AclMode mode);
extern AclResult pg_foreign_data_wrapper_aclcheck(Oid fdw_oid, Oid roleid, AclMode mode);
extern AclResult pg_foreign_server_aclcheck(Oid srv_oid, Oid roleid, AclMode mode);
extern AclResult pg_type_aclcheck(Oid type_oid, Oid roleid, AclMode mode);

extern void aclcheck_error(AclResult aclerr, ObjectType objtype,
      const char *objectname);

extern void aclcheck_error_col(AclResult aclerr, ObjectType objtype,
       const char *objectname, const char *colname);

extern void aclcheck_error_type(AclResult aclerr, Oid typeOid);

extern void recordExtObjInitPriv(Oid objoid, Oid classoid);
extern void removeExtObjInitPriv(Oid objoid, Oid classoid);



extern 
# 288 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 288 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_class_ownercheck(Oid class_oid, Oid roleid);
extern 
# 289 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 289 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_type_ownercheck(Oid type_oid, Oid roleid);
extern 
# 290 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 290 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_oper_ownercheck(Oid oper_oid, Oid roleid);
extern 
# 291 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 291 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_proc_ownercheck(Oid proc_oid, Oid roleid);
extern 
# 292 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 292 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_language_ownercheck(Oid lan_oid, Oid roleid);
extern 
# 293 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 293 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_largeobject_ownercheck(Oid lobj_oid, Oid roleid);
extern 
# 294 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 294 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_namespace_ownercheck(Oid nsp_oid, Oid roleid);
extern 
# 295 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 295 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_tablespace_ownercheck(Oid spc_oid, Oid roleid);
extern 
# 296 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 296 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_opclass_ownercheck(Oid opc_oid, Oid roleid);
extern 
# 297 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 297 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_opfamily_ownercheck(Oid opf_oid, Oid roleid);
extern 
# 298 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 298 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_database_ownercheck(Oid db_oid, Oid roleid);
extern 
# 299 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 299 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_collation_ownercheck(Oid coll_oid, Oid roleid);
extern 
# 300 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 300 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_conversion_ownercheck(Oid conv_oid, Oid roleid);
extern 
# 301 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 301 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_ts_dict_ownercheck(Oid dict_oid, Oid roleid);
extern 
# 302 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 302 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_ts_config_ownercheck(Oid cfg_oid, Oid roleid);
extern 
# 303 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 303 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_foreign_data_wrapper_ownercheck(Oid srv_oid, Oid roleid);
extern 
# 304 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 304 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_foreign_server_ownercheck(Oid srv_oid, Oid roleid);
extern 
# 305 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 305 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_event_trigger_ownercheck(Oid et_oid, Oid roleid);
extern 
# 306 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 306 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_extension_ownercheck(Oid ext_oid, Oid roleid);
extern 
# 307 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 307 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_publication_ownercheck(Oid pub_oid, Oid roleid);
extern 
# 308 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 308 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_subscription_ownercheck(Oid sub_oid, Oid roleid);
extern 
# 309 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 309 "/usr/include/postgresql/11/server/utils/acl.h"
           pg_statistics_object_ownercheck(Oid stat_oid, Oid roleid);
extern 
# 310 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 310 "/usr/include/postgresql/11/server/utils/acl.h"
           has_createrole_privilege(Oid roleid);
extern 
# 311 "/usr/include/postgresql/11/server/utils/acl.h" 3 4
      _Bool 
# 311 "/usr/include/postgresql/11/server/utils/acl.h"
           has_bypassrls_privilege(Oid roleid);
# 19 "/usr/include/postgresql/11/server/catalog/objectaddress.h" 2





typedef struct ObjectAddress
{
 Oid classId;
 Oid objectId;
 int32 objectSubId;
} ObjectAddress;

extern const ObjectAddress InvalidObjectAddress;
# 43 "/usr/include/postgresql/11/server/catalog/objectaddress.h"
extern ObjectAddress get_object_address(ObjectType objtype, Node *object,
       Relation *relp,
       LOCKMODE lockmode, 
# 45 "/usr/include/postgresql/11/server/catalog/objectaddress.h" 3 4
                         _Bool 
# 45 "/usr/include/postgresql/11/server/catalog/objectaddress.h"
                              missing_ok);

extern ObjectAddress get_object_address_rv(ObjectType objtype, RangeVar *rel,
       List *object, Relation *relp,
       LOCKMODE lockmode, 
# 49 "/usr/include/postgresql/11/server/catalog/objectaddress.h" 3 4
                         _Bool 
# 49 "/usr/include/postgresql/11/server/catalog/objectaddress.h"
                              missing_ok);

extern void check_object_ownership(Oid roleid,
        ObjectType objtype, ObjectAddress address,
        Node *object, Relation relation);

extern Oid get_object_namespace(const ObjectAddress *address);

extern 
# 57 "/usr/include/postgresql/11/server/catalog/objectaddress.h" 3 4
      _Bool 
# 57 "/usr/include/postgresql/11/server/catalog/objectaddress.h"
           is_objectclass_supported(Oid class_id);
extern Oid get_object_oid_index(Oid class_id);
extern int get_object_catcache_oid(Oid class_id);
extern int get_object_catcache_name(Oid class_id);
extern AttrNumber get_object_attnum_name(Oid class_id);
extern AttrNumber get_object_attnum_namespace(Oid class_id);
extern AttrNumber get_object_attnum_owner(Oid class_id);
extern AttrNumber get_object_attnum_acl(Oid class_id);
extern ObjectType get_object_type(Oid class_id, Oid object_id);
extern 
# 66 "/usr/include/postgresql/11/server/catalog/objectaddress.h" 3 4
      _Bool 
# 66 "/usr/include/postgresql/11/server/catalog/objectaddress.h"
           get_object_namensp_unique(Oid class_id);

extern HeapTuple get_catalog_object_by_oid(Relation catalog,
        Oid objectId);

extern char *getObjectDescription(const ObjectAddress *object);
extern char *getObjectDescriptionOids(Oid classid, Oid objid);

extern int read_objtype_from_string(const char *objtype);
extern char *getObjectTypeDescription(const ObjectAddress *object);
extern char *getObjectIdentity(const ObjectAddress *address);
extern char *getObjectIdentityParts(const ObjectAddress *address,
        List **objname, List **objargs);
extern ArrayType *strlist_to_textarray(List *list);

extern ObjectType get_relkind_objtype(char relkind);
# 25 "/usr/include/postgresql/11/server/catalog/pg_type.h" 2
# 37 "/usr/include/postgresql/11/server/catalog/pg_type.h"
typedef struct FormData_pg_type
{

 NameData typname;


 Oid typnamespace ;


 Oid typowner ;
# 55 "/usr/include/postgresql/11/server/catalog/pg_type.h"
 int16 typlen;
# 65 "/usr/include/postgresql/11/server/catalog/pg_type.h"
 
# 65 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
_Bool 
# 65 "/usr/include/postgresql/11/server/catalog/pg_type.h"
      typbyval;
# 74 "/usr/include/postgresql/11/server/catalog/pg_type.h"
 char typtype ;
# 84 "/usr/include/postgresql/11/server/catalog/pg_type.h"
 char typcategory;


 
# 87 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
_Bool 
# 87 "/usr/include/postgresql/11/server/catalog/pg_type.h"
      typispreferred ;






 
# 94 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
_Bool 
# 94 "/usr/include/postgresql/11/server/catalog/pg_type.h"
      typisdefined ;


 char typdelim ;


 Oid typrelid ;
# 113 "/usr/include/postgresql/11/server/catalog/pg_type.h"
 Oid typelem ;





 Oid typarray ;






 regproc typinput ;
 regproc typoutput ;


 regproc typreceive ;
 regproc typsend ;




 regproc typmodin ;
 regproc typmodout ;




 regproc typanalyze ;
# 168 "/usr/include/postgresql/11/server/catalog/pg_type.h"
 char typalign;
# 180 "/usr/include/postgresql/11/server/catalog/pg_type.h"
 char typstorage ;
# 190 "/usr/include/postgresql/11/server/catalog/pg_type.h"
 
# 190 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
_Bool 
# 190 "/usr/include/postgresql/11/server/catalog/pg_type.h"
      typnotnull ;





 Oid typbasetype ;






 int32 typtypmod ;





 int32 typndims ;





 Oid typcollation ;
# 241 "/usr/include/postgresql/11/server/catalog/pg_type.h"
} FormData_pg_type;






typedef FormData_pg_type *Form_pg_type;
# 290 "/usr/include/postgresql/11/server/catalog/pg_type.h"
extern ObjectAddress TypeShellMake(const char *typeName,
     Oid typeNamespace,
     Oid ownerId);

extern ObjectAddress TypeCreate(Oid newTypeOid,
     const char *typeName,
     Oid typeNamespace,
     Oid relationOid,
     char relationKind,
     Oid ownerId,
     int16 internalSize,
     char typeType,
     char typeCategory,
     
# 303 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
    _Bool 
# 303 "/usr/include/postgresql/11/server/catalog/pg_type.h"
         typePreferred,
     char typDelim,
     Oid inputProcedure,
     Oid outputProcedure,
     Oid receiveProcedure,
     Oid sendProcedure,
     Oid typmodinProcedure,
     Oid typmodoutProcedure,
     Oid analyzeProcedure,
     Oid elementType,
     
# 313 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
    _Bool 
# 313 "/usr/include/postgresql/11/server/catalog/pg_type.h"
         isImplicitArray,
     Oid arrayType,
     Oid baseType,
     const char *defaultTypeValue,
     char *defaultTypeBin,
     
# 318 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
    _Bool 
# 318 "/usr/include/postgresql/11/server/catalog/pg_type.h"
         passedByValue,
     char alignment,
     char storage,
     int32 typeMod,
     int32 typNDims,
     
# 323 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
    _Bool 
# 323 "/usr/include/postgresql/11/server/catalog/pg_type.h"
         typeNotNull,
     Oid typeCollation);

extern void GenerateTypeDependencies(Oid typeObjectId,
       Form_pg_type typeForm,
       Node *defaultExpr,
       void *typacl,
       char relationKind,
       
# 331 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
      _Bool 
# 331 "/usr/include/postgresql/11/server/catalog/pg_type.h"
           isImplicitArray,
       
# 332 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
      _Bool 
# 332 "/usr/include/postgresql/11/server/catalog/pg_type.h"
           isDependentType,
       
# 333 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
      _Bool 
# 333 "/usr/include/postgresql/11/server/catalog/pg_type.h"
           rebuild);

extern void RenameTypeInternal(Oid typeOid, const char *newTypeName,
       Oid typeNamespace);

extern char *makeArrayTypeName(const char *typeName, Oid typeNamespace);

extern 
# 340 "/usr/include/postgresql/11/server/catalog/pg_type.h" 3 4
      _Bool 
# 340 "/usr/include/postgresql/11/server/catalog/pg_type.h"
           moveArrayTypeName(Oid typeOid, const char *typeName,
      Oid typeNamespace);
# 36 "src/backend/utils/adt/agtype_gin.c" 2
# 1 "/usr/include/postgresql/11/server/utils/builtins.h" 1
# 19 "/usr/include/postgresql/11/server/utils/builtins.h"
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
# 37 "src/backend/utils/adt/agtype_gin.c" 2
# 1 "/usr/include/postgresql/11/server/utils/varlena.h" 1
# 17 "/usr/include/postgresql/11/server/utils/varlena.h"
# 1 "/usr/include/postgresql/11/server/utils/sortsupport.h" 1
# 58 "/usr/include/postgresql/11/server/utils/sortsupport.h"
typedef struct SortSupportData *SortSupport;

typedef struct SortSupportData
{




 MemoryContext ssup_cxt;
 Oid ssup_collation;






 
# 74 "/usr/include/postgresql/11/server/utils/sortsupport.h" 3 4
_Bool 
# 74 "/usr/include/postgresql/11/server/utils/sortsupport.h"
      ssup_reverse;
 
# 75 "/usr/include/postgresql/11/server/utils/sortsupport.h" 3 4
_Bool 
# 75 "/usr/include/postgresql/11/server/utils/sortsupport.h"
      ssup_nulls_first;





 AttrNumber ssup_attno;





 void *ssup_extra;
# 106 "/usr/include/postgresql/11/server/utils/sortsupport.h"
 int (*comparator) (Datum x, Datum y, SortSupport ssup);
# 155 "/usr/include/postgresql/11/server/utils/sortsupport.h"
 
# 155 "/usr/include/postgresql/11/server/utils/sortsupport.h" 3 4
_Bool 
# 155 "/usr/include/postgresql/11/server/utils/sortsupport.h"
      abbreviate;
# 172 "/usr/include/postgresql/11/server/utils/sortsupport.h"
 Datum (*abbrev_converter) (Datum original, SortSupport ssup);
# 182 "/usr/include/postgresql/11/server/utils/sortsupport.h"
 
# 182 "/usr/include/postgresql/11/server/utils/sortsupport.h" 3 4
_Bool 
# 182 "/usr/include/postgresql/11/server/utils/sortsupport.h"
      (*abbrev_abort) (int memtupcount, SortSupport ssup);
# 191 "/usr/include/postgresql/11/server/utils/sortsupport.h"
 int (*abbrev_full_comparator) (Datum x, Datum y, SortSupport ssup);
} SortSupportData;






static inline int
ApplySortComparator(Datum datum1, 
# 200 "/usr/include/postgresql/11/server/utils/sortsupport.h" 3 4
                                 _Bool 
# 200 "/usr/include/postgresql/11/server/utils/sortsupport.h"
                                      isNull1,
     Datum datum2, 
# 201 "/usr/include/postgresql/11/server/utils/sortsupport.h" 3 4
                  _Bool 
# 201 "/usr/include/postgresql/11/server/utils/sortsupport.h"
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
# 238 "/usr/include/postgresql/11/server/utils/sortsupport.h" 3 4
                                           _Bool 
# 238 "/usr/include/postgresql/11/server/utils/sortsupport.h"
                                                isNull1,
         Datum datum2, 
# 239 "/usr/include/postgresql/11/server/utils/sortsupport.h" 3 4
                      _Bool 
# 239 "/usr/include/postgresql/11/server/utils/sortsupport.h"
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
# 18 "/usr/include/postgresql/11/server/utils/varlena.h" 2

extern int varstr_cmp(const char *arg1, int len1, const char *arg2, int len2, Oid collid);
extern void varstr_sortsupport(SortSupport ssup, Oid collid, 
# 20 "/usr/include/postgresql/11/server/utils/varlena.h" 3 4
                                                            _Bool 
# 20 "/usr/include/postgresql/11/server/utils/varlena.h"
                                                                 bpchar);
extern int varstr_levenshtein(const char *source, int slen,
       const char *target, int tlen,
       int ins_c, int del_c, int sub_c,
       
# 24 "/usr/include/postgresql/11/server/utils/varlena.h" 3 4
      _Bool 
# 24 "/usr/include/postgresql/11/server/utils/varlena.h"
           trusted);
extern int varstr_levenshtein_less_equal(const char *source, int slen,
         const char *target, int tlen,
         int ins_c, int del_c, int sub_c,
         int max_d, 
# 28 "/usr/include/postgresql/11/server/utils/varlena.h" 3 4
                   _Bool 
# 28 "/usr/include/postgresql/11/server/utils/varlena.h"
                        trusted);
extern List *textToQualifiedNameList(text *textval);
extern 
# 30 "/usr/include/postgresql/11/server/utils/varlena.h" 3 4
      _Bool 
# 30 "/usr/include/postgresql/11/server/utils/varlena.h"
           SplitIdentifierString(char *rawstring, char separator,
       List **namelist);
extern 
# 32 "/usr/include/postgresql/11/server/utils/varlena.h" 3 4
      _Bool 
# 32 "/usr/include/postgresql/11/server/utils/varlena.h"
           SplitDirectoriesString(char *rawstring, char separator,
        List **namelist);
extern 
# 34 "/usr/include/postgresql/11/server/utils/varlena.h" 3 4
      _Bool 
# 34 "/usr/include/postgresql/11/server/utils/varlena.h"
           SplitGUCList(char *rawstring, char separator,
    List **namelist);
extern text *replace_text_regexp(text *src_text, void *regexp,
     text *replace_text, 
# 37 "/usr/include/postgresql/11/server/utils/varlena.h" 3 4
                        _Bool 
# 37 "/usr/include/postgresql/11/server/utils/varlena.h"
                             glob);
# 38 "src/backend/utils/adt/agtype_gin.c" 2

# 1 ".//src/include/utils/agtype.h" 1
# 35 ".//src/include/utils/agtype.h"
# 1 "/usr/include/postgresql/11/server/access/htup_details.h" 1
# 20 "/usr/include/postgresql/11/server/access/htup_details.h"
# 1 "/usr/include/postgresql/11/server/access/transam.h" 1
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
# 40 ".//src/include/utils/agtype.h" 2
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
# 40 "src/backend/utils/adt/agtype_gin.c" 2

typedef struct PathHashStack
{
    uint32 hash;
    struct PathHashStack *parent;
} PathHashStack;

static Datum make_text_key(char flag, const char *str, int len);
static Datum make_scalar_key(const agtype_value *scalar_val, 
# 48 "src/backend/utils/adt/agtype_gin.c" 3 4
                                                            _Bool 
# 48 "src/backend/utils/adt/agtype_gin.c"
                                                                 is_key);
# 63 "src/backend/utils/adt/agtype_gin.c"
extern Datum gin_compare_agtype(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_gin_compare_agtype(void); const Pg_finfo_record * pg_finfo_gin_compare_agtype (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;
Datum gin_compare_agtype(FunctionCallInfo fcinfo)
{
    text *arg1, *arg2;
    int32 result;
    char *a1p, *a2p;
    int len1, len2;

    if ((fcinfo->argnull[0]) || (fcinfo->argnull[1]))
    {
        do { fcinfo->isnull = 
# 73 "src/backend/utils/adt/agtype_gin.c" 3 4
       1
# 73 "src/backend/utils/adt/agtype_gin.c"
       ; return (Datum) 0; } while (0);
    }

    arg1 = ((text *) pg_detoast_datum_packed((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    arg2 = ((text *) pg_detoast_datum_packed((struct varlena *) ((Pointer) ((fcinfo->arg[1])))));

    a1p = (((((varattrib_1b *) (arg1))->va_header & 0x01) == 0x01) ? (((varattrib_1b *) (arg1))->va_data) : (((varattrib_4b *) (arg1))->va_4byte.va_data));
    a2p = (((((varattrib_1b *) (arg2))->va_header & 0x01) == 0x01) ? (((varattrib_1b *) (arg2))->va_data) : (((varattrib_4b *) (arg2))->va_4byte.va_data));

    len1 = (((((varattrib_1b *) (arg1))->va_header) == 0x01) ? (
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          __builtin_offsetof (
# 82 "src/backend/utils/adt/agtype_gin.c"
          varattrib_1b_e
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          , 
# 82 "src/backend/utils/adt/agtype_gin.c"
          va_data
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          ) 
# 82 "src/backend/utils/adt/agtype_gin.c"
          + (((((varattrib_1b_e *) (arg1))->va_tag)) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : ((((((varattrib_1b_e *) (arg1))->va_tag)) & ~1) == VARTAG_EXPANDED_RO) ? sizeof(varatt_expanded) : ((((varattrib_1b_e *) (arg1))->va_tag)) == VARTAG_ONDISK ? sizeof(varatt_external) : (
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          1
# 82 "src/backend/utils/adt/agtype_gin.c"
          )))-
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          __builtin_offsetof (
# 82 "src/backend/utils/adt/agtype_gin.c"
          varattrib_1b_e
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          , 
# 82 "src/backend/utils/adt/agtype_gin.c"
          va_data
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          ) 
# 82 "src/backend/utils/adt/agtype_gin.c"
          : (((((varattrib_1b *) (arg1))->va_header & 0x01) == 0x01) ? ((((varattrib_1b *) (arg1))->va_header >> 1) & 0x7F)-
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          __builtin_offsetof (
# 82 "src/backend/utils/adt/agtype_gin.c"
          varattrib_1b
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          , 
# 82 "src/backend/utils/adt/agtype_gin.c"
          va_data
# 82 "src/backend/utils/adt/agtype_gin.c" 3 4
          ) 
# 82 "src/backend/utils/adt/agtype_gin.c"
          : ((((varattrib_4b *) (arg1))->va_4byte.va_header >> 2) & 0x3FFFFFFF)-((int32) sizeof(int32))));
    len2 = (((((varattrib_1b *) (arg2))->va_header) == 0x01) ? (
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          __builtin_offsetof (
# 83 "src/backend/utils/adt/agtype_gin.c"
          varattrib_1b_e
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          , 
# 83 "src/backend/utils/adt/agtype_gin.c"
          va_data
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          ) 
# 83 "src/backend/utils/adt/agtype_gin.c"
          + (((((varattrib_1b_e *) (arg2))->va_tag)) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : ((((((varattrib_1b_e *) (arg2))->va_tag)) & ~1) == VARTAG_EXPANDED_RO) ? sizeof(varatt_expanded) : ((((varattrib_1b_e *) (arg2))->va_tag)) == VARTAG_ONDISK ? sizeof(varatt_external) : (
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          1
# 83 "src/backend/utils/adt/agtype_gin.c"
          )))-
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          __builtin_offsetof (
# 83 "src/backend/utils/adt/agtype_gin.c"
          varattrib_1b_e
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          , 
# 83 "src/backend/utils/adt/agtype_gin.c"
          va_data
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          ) 
# 83 "src/backend/utils/adt/agtype_gin.c"
          : (((((varattrib_1b *) (arg2))->va_header & 0x01) == 0x01) ? ((((varattrib_1b *) (arg2))->va_header >> 1) & 0x7F)-
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          __builtin_offsetof (
# 83 "src/backend/utils/adt/agtype_gin.c"
          varattrib_1b
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          , 
# 83 "src/backend/utils/adt/agtype_gin.c"
          va_data
# 83 "src/backend/utils/adt/agtype_gin.c" 3 4
          ) 
# 83 "src/backend/utils/adt/agtype_gin.c"
          : ((((varattrib_4b *) (arg2))->va_4byte.va_header >> 2) & 0x3FFFFFFF)-((int32) sizeof(int32))));


    result = varstr_cmp(a1p, len1, a2p, len2, 950);

    do { if ((Pointer) (arg1) != ((Pointer) ((fcinfo->arg[0])))) pfree(arg1); } while (0);
    do { if ((Pointer) (arg2) != ((Pointer) ((fcinfo->arg[1])))) pfree(arg2); } while (0);

    return ((Datum) (result));
}






extern Datum gin_extract_agtype(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_gin_extract_agtype(void); const Pg_finfo_record * pg_finfo_gin_extract_agtype (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;
Datum gin_extract_agtype(FunctionCallInfo fcinfo)
{
    agtype *agt;
    int32 *nentries;
    int total;
    agtype_iterator *it;
    agtype_value v;
    agtype_iterator_token r;
    int i = 0;
    Datum *entries;

    if ((fcinfo->argnull[0]) || (fcinfo->argnull[1]))
    {
        return ((Datum) (
# 113 "src/backend/utils/adt/agtype_gin.c" 3 4
       ((void *)0)
# 113 "src/backend/utils/adt/agtype_gin.c"
       ));
    }

    agt = (agtype *) ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
    nentries = (int32 *) ((Pointer) ((fcinfo->arg[1])));
    total = 2 * (*(uint32 *)(((varattrib_4b *) (agt))->va_4byte.va_data) & 0x0FFFFFFF);


    if (total == 0)
    {
        *nentries = 0;
        return ((Datum) (
# 124 "src/backend/utils/adt/agtype_gin.c" 3 4
       ((void *)0)
# 124 "src/backend/utils/adt/agtype_gin.c"
       ));
    }


    entries = (Datum *) palloc(sizeof(Datum) * total);

    it = agtype_iterator_init(&agt->root);

    while ((r = agtype_iterator_next(&it, &v, 
# 132 "src/backend/utils/adt/agtype_gin.c" 3 4
                                             0
# 132 "src/backend/utils/adt/agtype_gin.c"
                                                  )) != WAGT_DONE)
    {

        if (i >= total)
        {
            total *= 2;
            entries = (Datum *) repalloc(entries, sizeof(Datum) * total);
        }

        switch (r)
        {
            case WAGT_KEY:
                entries[i++] = make_scalar_key(&v, 
# 144 "src/backend/utils/adt/agtype_gin.c" 3 4
                                                  1
# 144 "src/backend/utils/adt/agtype_gin.c"
                                                      );
                break;
            case WAGT_ELEM:

                entries[i++] = make_scalar_key(&v, (v.type == AGTV_STRING));
                break;
            case WAGT_VALUE:
                entries[i++] = make_scalar_key(&v, 
# 151 "src/backend/utils/adt/agtype_gin.c" 3 4
                                                  0
# 151 "src/backend/utils/adt/agtype_gin.c"
                                                       );
                break;
            default:

                break;
        }
    }

    *nentries = i;

    return ((Datum) (entries));
}
# 182 "src/backend/utils/adt/agtype_gin.c"
extern Datum gin_extract_agtype_query(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_gin_extract_agtype_query(void); const Pg_finfo_record * pg_finfo_gin_extract_agtype_query (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;
Datum gin_extract_agtype_query(FunctionCallInfo fcinfo)
{
    int32 *nentries;
    StrategyNumber strategy;
    int32 *searchMode;
    Datum *entries;

    if ((fcinfo->argnull[0]) || (fcinfo->argnull[1]) ||
        (fcinfo->argnull[2]) || (fcinfo->argnull[6]))
    {
        do { fcinfo->isnull = 
# 193 "src/backend/utils/adt/agtype_gin.c" 3 4
       1
# 193 "src/backend/utils/adt/agtype_gin.c"
       ; return (Datum) 0; } while (0);
    }

    nentries = (int32 *) ((Pointer) ((fcinfo->arg[1])));
    strategy = ((uint16) ((fcinfo->arg[2])));
    searchMode = (int32 *) ((Pointer) ((fcinfo->arg[6])));

    if (strategy == 7)
    {

        entries = (Datum *)
            ((Pointer) (DirectFunctionCall2Coll(gin_extract_agtype, ((Oid) 0), (fcinfo->arg[0]), ((Datum) (nentries)))))

                                                                           ;

        if (*nentries == 0)
        {
            *searchMode = 2;
        }
    }
    else if (strategy == 9)
    {

        text *query = ((text *) pg_detoast_datum_packed((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));

        *nentries = 1;
        entries = (Datum *)palloc(sizeof(Datum));
        entries[0] = make_text_key(0x01, (((((varattrib_1b *) (query))->va_header & 0x01) == 0x01) ? (((varattrib_1b *) (query))->va_data) : (((varattrib_4b *) (query))->va_4byte.va_data)),
                                   (((((varattrib_1b *) (query))->va_header) == 0x01) ? (
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  __builtin_offsetof (
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  varattrib_1b_e
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  , 
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  va_data
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  ) 
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  + (((((varattrib_1b_e *) (query))->va_tag)) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : ((((((varattrib_1b_e *) (query))->va_tag)) & ~1) == VARTAG_EXPANDED_RO) ? sizeof(varatt_expanded) : ((((varattrib_1b_e *) (query))->va_tag)) == VARTAG_ONDISK ? sizeof(varatt_external) : (
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  1
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  )))-
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  __builtin_offsetof (
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  varattrib_1b_e
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  , 
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  va_data
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  ) 
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  : (((((varattrib_1b *) (query))->va_header & 0x01) == 0x01) ? ((((varattrib_1b *) (query))->va_header >> 1) & 0x7F)-
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  __builtin_offsetof (
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  varattrib_1b
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  , 
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  va_data
# 221 "src/backend/utils/adt/agtype_gin.c" 3 4
                                  ) 
# 221 "src/backend/utils/adt/agtype_gin.c"
                                  : ((((varattrib_4b *) (query))->va_4byte.va_header >> 2) & 0x3FFFFFFF)-((int32) sizeof(int32)))));
    }
    else if (strategy == 10 ||
             strategy == 11)
    {

        ArrayType *query = ((ArrayType *) pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0])))));
        Datum *key_datums;
        
# 229 "src/backend/utils/adt/agtype_gin.c" 3 4
       _Bool 
# 229 "src/backend/utils/adt/agtype_gin.c"
            *key_nulls;
        int key_count;
        int i, j;

        deconstruct_array(query, 25, -1, 
# 233 "src/backend/utils/adt/agtype_gin.c" 3 4
                                             0
# 233 "src/backend/utils/adt/agtype_gin.c"
                                                  , 'i',
                          &key_datums, &key_nulls, &key_count);

        entries = (Datum *) palloc(sizeof(Datum) * key_count);

        for (i = 0, j = 0; i < key_count; i++)
        {

            if (key_nulls[i])
            {
                continue;
            }

            entries[j++] = make_text_key(0x01,
                                         (((varattrib_4b *) (key_datums[i]))->va_4byte.va_data),
                                         ((((varattrib_4b *) (key_datums[i]))->va_4byte.va_header >> 2) & 0x3FFFFFFF) - ((int32) sizeof(int32)));
        }

        *nentries = j;

        if (j == 0 && strategy == 11)
        {
            *searchMode = 2;
        }
    }
    else
    {
        do { elog_start("src/backend/utils/adt/agtype_gin.c", 260, __func__); elog_finish(20, "unrecognized strategy number: %d", strategy); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0);
        entries = 
# 261 "src/backend/utils/adt/agtype_gin.c" 3 4
                 ((void *)0)
# 261 "src/backend/utils/adt/agtype_gin.c"
                     ;
    }

    return ((Datum) (entries));
}
# 297 "src/backend/utils/adt/agtype_gin.c"
extern Datum gin_consistent_agtype(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_gin_consistent_agtype(void); const Pg_finfo_record * pg_finfo_gin_consistent_agtype (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;
Datum gin_consistent_agtype(FunctionCallInfo fcinfo)
{
    
# 300 "src/backend/utils/adt/agtype_gin.c" 3 4
   _Bool 
# 300 "src/backend/utils/adt/agtype_gin.c"
        *check;
    StrategyNumber strategy;
    int32 nkeys;
    
# 303 "src/backend/utils/adt/agtype_gin.c" 3 4
   _Bool 
# 303 "src/backend/utils/adt/agtype_gin.c"
        *recheck;
    
# 304 "src/backend/utils/adt/agtype_gin.c" 3 4
   _Bool 
# 304 "src/backend/utils/adt/agtype_gin.c"
        res = 
# 304 "src/backend/utils/adt/agtype_gin.c" 3 4
              1
# 304 "src/backend/utils/adt/agtype_gin.c"
                  ;
    int32 i;

    if ((fcinfo->argnull[0]) || (fcinfo->argnull[1]) ||
        (fcinfo->argnull[3]) || (fcinfo->argnull[5]))
    {
        do { fcinfo->isnull = 
# 310 "src/backend/utils/adt/agtype_gin.c" 3 4
       1
# 310 "src/backend/utils/adt/agtype_gin.c"
       ; return (Datum) 0; } while (0);
    }

    check = (
# 313 "src/backend/utils/adt/agtype_gin.c" 3 4
            _Bool 
# 313 "src/backend/utils/adt/agtype_gin.c"
                 *) ((Pointer) ((fcinfo->arg[0])));
    strategy = ((uint16) ((fcinfo->arg[1])));
    nkeys = ((int32) ((fcinfo->arg[3])));
    recheck = (
# 316 "src/backend/utils/adt/agtype_gin.c" 3 4
              _Bool 
# 316 "src/backend/utils/adt/agtype_gin.c"
                   *) ((Pointer) ((fcinfo->arg[5])));

    if (strategy == 7)
    {
# 328 "src/backend/utils/adt/agtype_gin.c"
        *recheck = 
# 328 "src/backend/utils/adt/agtype_gin.c" 3 4
                  1
# 328 "src/backend/utils/adt/agtype_gin.c"
                      ;
        for (i = 0; i < nkeys; i++)
        {
            if (!check[i])
            {
                res = 
# 333 "src/backend/utils/adt/agtype_gin.c" 3 4
                     0
# 333 "src/backend/utils/adt/agtype_gin.c"
                          ;
                break;
            }
        }
    }
    else if (strategy == 9)
    {







        *recheck = 
# 347 "src/backend/utils/adt/agtype_gin.c" 3 4
                  1
# 347 "src/backend/utils/adt/agtype_gin.c"
                      ;
        res = 
# 348 "src/backend/utils/adt/agtype_gin.c" 3 4
             1
# 348 "src/backend/utils/adt/agtype_gin.c"
                 ;
    }
    else if (strategy == 10)
    {

        *recheck = 
# 353 "src/backend/utils/adt/agtype_gin.c" 3 4
                  1
# 353 "src/backend/utils/adt/agtype_gin.c"
                      ;
        res = 
# 354 "src/backend/utils/adt/agtype_gin.c" 3 4
             1
# 354 "src/backend/utils/adt/agtype_gin.c"
                 ;
    }
    else if (strategy == 11)
    {

        *recheck = 
# 359 "src/backend/utils/adt/agtype_gin.c" 3 4
                  1
# 359 "src/backend/utils/adt/agtype_gin.c"
                      ;

        for (i = 0; i < nkeys; i++)
        {
            if (!check[i])
            {
                res = 
# 365 "src/backend/utils/adt/agtype_gin.c" 3 4
                     0
# 365 "src/backend/utils/adt/agtype_gin.c"
                          ;
                break;
            }
        }
    }
    else
    {
        do { elog_start("src/backend/utils/adt/agtype_gin.c", 372, __func__); elog_finish(20, "unrecognized strategy number: %d", strategy); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0);
    }

    return ((Datum) ((res) ? 1 : 0));
}
# 395 "src/backend/utils/adt/agtype_gin.c"
extern Datum gin_triconsistent_agtype(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_gin_triconsistent_agtype(void); const Pg_finfo_record * pg_finfo_gin_triconsistent_agtype (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;
Datum gin_triconsistent_agtype(FunctionCallInfo fcinfo)
{
    GinTernaryValue *check;
    StrategyNumber strategy;
    int32 nkeys;
    GinTernaryValue res = 2;
    int32 i;

    if ((fcinfo->argnull[0]) || (fcinfo->argnull[1]) || (fcinfo->argnull[3]))
    {
        do { fcinfo->isnull = 
# 406 "src/backend/utils/adt/agtype_gin.c" 3 4
       1
# 406 "src/backend/utils/adt/agtype_gin.c"
       ; return (Datum) 0; } while (0);
    }

    check = (GinTernaryValue *)((Pointer) ((fcinfo->arg[0])));
    strategy = ((uint16) ((fcinfo->arg[1])));
    nkeys = ((int32) ((fcinfo->arg[3])));






    if (strategy == 7 ||
        strategy == 11)
    {

        for (i = 0; i < nkeys; i++)
        {
            if (check[i] == 0)
            {
                res = 0;
                break;
            }
        }
    }
    else if (strategy == 9 ||
             strategy == 10)
    {

        res = 0;
        for (i = 0; i < nkeys; i++)
        {
            if (check[i] == 1 || check[i] == 2)
            {
                res = 2;
                break;
            }
        }
    }
    else
    {
        do { elog_start("src/backend/utils/adt/agtype_gin.c", 447, __func__); elog_finish(20, "unrecognized strategy number: %d", strategy); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0);
    }

    return ((Datum)(res));
}







static Datum make_text_key(char flag, const char *str, int len)
{
    text *item;
    char hashbuf[10];

    if (len > 125)
    {
        uint32 hashval;

        hashval = ((uint32) (hash_any((const unsigned char *) str, len)));
        snprintf(hashbuf, sizeof(hashbuf), "%08x", hashval);
        str = hashbuf;
        len = 8;
        flag |= 0x10;
    }






    item = (text *)palloc(((int32) sizeof(int32)) + len + 1);
    (((varattrib_4b *) (item))->va_4byte.va_header = (((uint32) (((int32) sizeof(int32)) + len + 1)) << 2));

    *(((varattrib_4b *) (item))->va_4byte.va_data) = flag;

    memcpy((((varattrib_4b *) (item))->va_4byte.va_data) + 1, str, len);

    return ((Datum) (item));
}







static Datum make_scalar_key(const agtype_value *scalarVal, 
# 496 "src/backend/utils/adt/agtype_gin.c" 3 4
                                                           _Bool 
# 496 "src/backend/utils/adt/agtype_gin.c"
                                                                is_key)
{
    Datum item = 0;
    char *cstr = 
# 499 "src/backend/utils/adt/agtype_gin.c" 3 4
                ((void *)0)
# 499 "src/backend/utils/adt/agtype_gin.c"
                    ;
    char buf[25 + 1];
    switch (scalarVal->type)
    {
    case AGTV_NULL:
        ((void)
# 504 "src/backend/utils/adt/agtype_gin.c" 3 4
       1
# 504 "src/backend/utils/adt/agtype_gin.c"
       );
        item = make_text_key(0x02, "", 0);
        break;
    case AGTV_INTEGER:
    {
        char *result;

        ((void)
# 511 "src/backend/utils/adt/agtype_gin.c" 3 4
       1
# 511 "src/backend/utils/adt/agtype_gin.c"
       );

        pg_lltoa(scalarVal->val.int_value, buf);

        result = pstrdup(buf);
        item = make_text_key(0x04, result, strlen(result));
        break;
    }
    case AGTV_FLOAT:
        ((void)
# 520 "src/backend/utils/adt/agtype_gin.c" 3 4
       1
# 520 "src/backend/utils/adt/agtype_gin.c"
       );
        cstr = float8out_internal(scalarVal->val.float_value);
        item = make_text_key(0x04, cstr, strlen(cstr));
        break;
    case AGTV_BOOL:
        ((void)
# 525 "src/backend/utils/adt/agtype_gin.c" 3 4
       1
# 525 "src/backend/utils/adt/agtype_gin.c"
       );
        item = make_text_key(0x03,
                             scalarVal->val.boolean ? "t" : "f", 1);
        break;
    case AGTV_NUMERIC:
        ((void)
# 530 "src/backend/utils/adt/agtype_gin.c" 3 4
       1
# 530 "src/backend/utils/adt/agtype_gin.c"
       );
# 541 "src/backend/utils/adt/agtype_gin.c"
        cstr = numeric_normalize(scalarVal->val.numeric);
        item = make_text_key(0x04, cstr, strlen(cstr));
        pfree(cstr);
        break;
    case AGTV_STRING:
        item = make_text_key(is_key ? 0x01 : 0x05,
                             scalarVal->val.string.val,
                             scalarVal->val.string.len);
        break;
    case AGTV_VERTEX:
    case AGTV_EDGE:
    case AGTV_PATH:
        do { elog_start("src/backend/utils/adt/agtype_gin.c", 553, __func__); elog_finish(20, "agtype type: %d is not a scalar", scalarVal->type); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0);
        break;
    default:
        do { elog_start("src/backend/utils/adt/agtype_gin.c", 556, __func__); elog_finish(20, "unrecognized agtype type: %d", scalarVal->type); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0);
        break;
    }

    return item;
}
