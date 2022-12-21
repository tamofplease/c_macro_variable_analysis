# 0 "src/backend/parser/ag_scanner.c"
# 1 "/age//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/backend/parser/ag_scanner.c"
# 2 "src/backend/parser/ag_scanner.c"
# 31 "src/backend/parser/ag_scanner.c"
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
# 32 "src/backend/parser/ag_scanner.c" 2

# 1 "/usr/include/postgresql/11/server/common/string.h" 1
# 13 "/usr/include/postgresql/11/server/common/string.h"
extern 
# 13 "/usr/include/postgresql/11/server/common/string.h" 3 4
      _Bool 
# 13 "/usr/include/postgresql/11/server/common/string.h"
           pg_str_endswith(const char *str, const char *end);
extern int strtoint(const char *__restrict__ str, char **__restrict__ endptr,
   int base);
# 34 "src/backend/parser/ag_scanner.c" 2
# 1 "/usr/include/postgresql/11/server/mb/pg_wchar.h" 1
# 25 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
typedef unsigned int pg_wchar;
# 238 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
typedef enum pg_enc
{
 PG_SQL_ASCII = 0,
 PG_EUC_JP,
 PG_EUC_CN,
 PG_EUC_KR,
 PG_EUC_TW,
 PG_EUC_JIS_2004,
 PG_UTF8,
 PG_MULE_INTERNAL,
 PG_LATIN1,
 PG_LATIN2,
 PG_LATIN3,
 PG_LATIN4,
 PG_LATIN5,
 PG_LATIN6,
 PG_LATIN7,
 PG_LATIN8,
 PG_LATIN9,
 PG_LATIN10,
 PG_WIN1256,
 PG_WIN1258,
 PG_WIN866,
 PG_WIN874,
 PG_KOI8R,
 PG_WIN1251,
 PG_WIN1252,
 PG_ISO_8859_5,
 PG_ISO_8859_6,
 PG_ISO_8859_7,
 PG_ISO_8859_8,
 PG_WIN1250,
 PG_WIN1253,
 PG_WIN1254,
 PG_WIN1255,
 PG_WIN1257,
 PG_KOI8U,



 PG_SJIS,
 PG_BIG5,
 PG_GBK,
 PG_UHC,
 PG_GB18030,
 PG_JOHAB,
 PG_SHIFT_JIS_2004,
 _PG_LAST_ENCODING_

} pg_enc;
# 326 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
typedef struct pg_enc2name
{
 const char *name;
 pg_enc encoding;



} pg_enc2name;

extern const pg_enc2name pg_enc2name_tbl[];




typedef struct pg_enc2gettext
{
 pg_enc encoding;
 const char *name;
} pg_enc2gettext;

extern const pg_enc2gettext pg_enc2gettext_tbl[];




extern 
# 351 "/usr/include/postgresql/11/server/mb/pg_wchar.h" 3 4
      _Bool 
# 351 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
           is_encoding_supported_by_icu(int encoding);
extern const char *get_encoding_name_for_icu(int encoding);




typedef int (*mb2wchar_with_len_converter) (const unsigned char *from,
           pg_wchar *to,
           int len);

typedef int (*wchar2mb_with_len_converter) (const pg_wchar *from,
           unsigned char *to,
           int len);

typedef int (*mblen_converter) (const unsigned char *mbstr);

typedef int (*mbdisplaylen_converter) (const unsigned char *mbstr);

typedef 
# 369 "/usr/include/postgresql/11/server/mb/pg_wchar.h" 3 4
       _Bool 
# 369 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
            (*mbcharacter_incrementer) (unsigned char *mbstr, int len);

typedef int (*mbverifier) (const unsigned char *mbstr, int len);

typedef struct
{
 mb2wchar_with_len_converter mb2wchar_with_len;

 wchar2mb_with_len_converter wchar2mb_with_len;

 mblen_converter mblen;
 mbdisplaylen_converter dsplen;
 mbverifier mbverify;
 int maxmblen;
} pg_wchar_tbl;

extern const pg_wchar_tbl pg_wchar_table[];
# 427 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
typedef struct
{




 const uint16 *chars16;
 const uint32 *chars32;


 uint32 b1root;
 uint8 b1_lower;
 uint8 b1_upper;


 uint32 b2root;
 uint8 b2_1_lower;
 uint8 b2_1_upper;
 uint8 b2_2_lower;
 uint8 b2_2_upper;


 uint32 b3root;
 uint8 b3_1_lower;
 uint8 b3_1_upper;
 uint8 b3_2_lower;
 uint8 b3_2_upper;
 uint8 b3_3_lower;
 uint8 b3_3_upper;


 uint32 b4root;
 uint8 b4_1_lower;
 uint8 b4_1_upper;
 uint8 b4_2_lower;
 uint8 b4_2_upper;
 uint8 b4_3_lower;
 uint8 b4_3_upper;
 uint8 b4_4_lower;
 uint8 b4_4_upper;

} pg_mb_radix_tree;




typedef struct
{
 uint32 utf1;
 uint32 utf2;
 uint32 code;
} pg_utf_to_local_combined;




typedef struct
{
 uint32 code;
 uint32 utf1;
 uint32 utf2;
} pg_local_to_utf_combined;






typedef uint32 (*utf_local_conversion_func) (uint32 code);
# 515 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
extern int pg_char_to_encoding(const char *name);
extern const char *pg_encoding_to_char(int encoding);
extern int pg_valid_server_encoding_id(int encoding);





extern int pg_mb2wchar(const char *from, pg_wchar *to);
extern int pg_mb2wchar_with_len(const char *from, pg_wchar *to, int len);
extern int pg_encoding_mb2wchar_with_len(int encoding,
         const char *from, pg_wchar *to, int len);
extern int pg_wchar2mb(const pg_wchar *from, char *to);
extern int pg_wchar2mb_with_len(const pg_wchar *from, char *to, int len);
extern int pg_encoding_wchar2mb_with_len(int encoding,
         const pg_wchar *from, char *to, int len);
extern int pg_char_and_wchar_strcmp(const char *s1, const pg_wchar *s2);
extern int pg_wchar_strncmp(const pg_wchar *s1, const pg_wchar *s2, size_t n);
extern int pg_char_and_wchar_strncmp(const char *s1, const pg_wchar *s2, size_t n);
extern size_t pg_wchar_strlen(const pg_wchar *wstr);
extern int pg_mblen(const char *mbstr);
extern int pg_dsplen(const char *mbstr);
extern int pg_encoding_mblen(int encoding, const char *mbstr);
extern int pg_encoding_dsplen(int encoding, const char *mbstr);
extern int pg_encoding_verifymb(int encoding, const char *mbstr, int len);
extern int pg_mule_mblen(const unsigned char *mbstr);
extern int pg_mic_mblen(const unsigned char *mbstr);
extern int pg_mbstrlen(const char *mbstr);
extern int pg_mbstrlen_with_len(const char *mbstr, int len);
extern int pg_mbcliplen(const char *mbstr, int len, int limit);
extern int pg_encoding_mbcliplen(int encoding, const char *mbstr,
       int len, int limit);
extern int pg_mbcharcliplen(const char *mbstr, int len, int imit);
extern int pg_encoding_max_length(int encoding);
extern int pg_database_encoding_max_length(void);
extern mbcharacter_incrementer pg_database_encoding_character_incrementer(void);

extern int PrepareClientEncoding(int encoding);
extern int SetClientEncoding(int encoding);
extern void InitializeClientEncoding(void);
extern int pg_get_client_encoding(void);
extern const char *pg_get_client_encoding_name(void);

extern void SetDatabaseEncoding(int encoding);
extern int GetDatabaseEncoding(void);
extern const char *GetDatabaseEncodingName(void);
extern void SetMessageEncoding(int encoding);
extern int GetMessageEncoding(void);


extern int pg_bind_textdomain_codeset(const char *domainname);


extern int pg_valid_client_encoding(const char *name);
extern int pg_valid_server_encoding(const char *name);

extern unsigned char *unicode_to_utf8(pg_wchar c, unsigned char *utf8string);
extern pg_wchar utf8_to_unicode(const unsigned char *c);
extern int pg_utf_mblen(const unsigned char *);
extern unsigned char *pg_do_encoding_conversion(unsigned char *src, int len,
        int src_encoding,
        int dest_encoding);

extern char *pg_client_to_server(const char *s, int len);
extern char *pg_server_to_client(const char *s, int len);
extern char *pg_any_to_server(const char *s, int len, int encoding);
extern char *pg_server_to_any(const char *s, int len, int encoding);

extern unsigned short BIG5toCNS(unsigned short big5, unsigned char *lc);
extern unsigned short CNStoBIG5(unsigned short cns, unsigned char lc);

extern void UtfToLocal(const unsigned char *utf, int len,
     unsigned char *iso,
     const pg_mb_radix_tree *map,
     const pg_utf_to_local_combined *cmap, int cmapsize,
     utf_local_conversion_func conv_func,
     int encoding);
extern void LocalToUtf(const unsigned char *iso, int len,
     unsigned char *utf,
     const pg_mb_radix_tree *map,
     const pg_local_to_utf_combined *cmap, int cmapsize,
     utf_local_conversion_func conv_func,
     int encoding);

extern 
# 599 "/usr/include/postgresql/11/server/mb/pg_wchar.h" 3 4
      _Bool 
# 599 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
           pg_verifymbstr(const char *mbstr, int len, 
# 599 "/usr/include/postgresql/11/server/mb/pg_wchar.h" 3 4
                                                      _Bool 
# 599 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
                                                           noError);
extern 
# 600 "/usr/include/postgresql/11/server/mb/pg_wchar.h" 3 4
      _Bool 
# 600 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
           pg_verify_mbstr(int encoding, const char *mbstr, int len,
    
# 601 "/usr/include/postgresql/11/server/mb/pg_wchar.h" 3 4
   _Bool 
# 601 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
        noError);
extern int pg_verify_mbstr_len(int encoding, const char *mbstr, int len,
     
# 603 "/usr/include/postgresql/11/server/mb/pg_wchar.h" 3 4
    _Bool 
# 603 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
         noError);

extern void check_encoding_conversion_args(int src_encoding,
          int dest_encoding,
          int len,
          int expected_src_encoding,
          int expected_dest_encoding);

extern void report_invalid_encoding(int encoding, const char *mbstr, int len) __attribute__((noreturn));
extern void report_untranslatable_char(int src_encoding, int dest_encoding,
         const char *mbstr, int len) __attribute__((noreturn));

extern void local2local(const unsigned char *l, unsigned char *p, int len,
   int src_encoding, int dest_encoding, const unsigned char *tab);
extern void pg_ascii2mic(const unsigned char *l, unsigned char *p, int len);
extern void pg_mic2ascii(const unsigned char *mic, unsigned char *p, int len);
extern void latin2mic(const unsigned char *l, unsigned char *p, int len,
    int lc, int encoding);
extern void mic2latin(const unsigned char *mic, unsigned char *p, int len,
    int lc, int encoding);
extern void latin2mic_with_table(const unsigned char *l, unsigned char *p,
      int len, int lc, int encoding,
      const unsigned char *tab);
extern void mic2latin_with_table(const unsigned char *mic, unsigned char *p,
      int len, int lc, int encoding,
      const unsigned char *tab);

extern 
# 630 "/usr/include/postgresql/11/server/mb/pg_wchar.h" 3 4
      _Bool 
# 630 "/usr/include/postgresql/11/server/mb/pg_wchar.h"
           pg_utf8_islegal(const unsigned char *source, int length);
# 35 "src/backend/parser/ag_scanner.c" 2

# 1 ".//src/include/parser/ag_scanner.h" 1
# 34 ".//src/include/parser/ag_scanner.h"
typedef enum ag_token_type
{
    AG_TOKEN_NULL,
    AG_TOKEN_INTEGER,
    AG_TOKEN_DECIMAL,
    AG_TOKEN_STRING,
    AG_TOKEN_IDENTIFIER,
    AG_TOKEN_PARAMETER,
    AG_TOKEN_LT_GT,
    AG_TOKEN_LT_EQ,
    AG_TOKEN_GT_EQ,
    AG_TOKEN_DOT_DOT,
    AG_TOKEN_TYPECAST,
    AG_TOKEN_PLUS_EQ,
    AG_TOKEN_EQ_TILDE,
    AG_TOKEN_CHAR
} ag_token_type;
# 65 ".//src/include/parser/ag_scanner.h"
typedef struct ag_token
{
    ag_token_type type;
    union
    {
        char c;
        int i;
        const char *s;
    } value;
    int location;
} ag_token;


typedef void *ag_scanner_t;

ag_scanner_t ag_scanner_create(const char *s);
void ag_scanner_destroy(ag_scanner_t scanner);
ag_token ag_scanner_next_token(ag_scanner_t scanner);

int ag_scanner_errmsg(const char *msg, ag_scanner_t *scanner);
int ag_scanner_errposition(const int location, ag_scanner_t *scanner);
# 37 "src/backend/parser/ag_scanner.c" 2
# 39 "src/backend/parser/ag_scanner.c"
# 288 "src/backend/parser/ag_scanner.c"
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


# 289 "src/backend/parser/ag_scanner.c" 2

# 289 "src/backend/parser/ag_scanner.c"
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
# 362 "src/backend/parser/ag_scanner.c"
typedef void* yyscan_t;
# 412 "src/backend/parser/ag_scanner.c"
typedef struct yy_buffer_state *YY_BUFFER_STATE;




typedef size_t yy_size_t;
# 444 "src/backend/parser/ag_scanner.c"
struct yy_buffer_state
 {
 FILE *yy_input_file;

 char *yy_ch_buf;
 char *yy_buf_pos;




 int yy_buf_size;




 int yy_n_chars;





 int yy_is_our_buffer;






 int yy_is_interactive;





 int yy_at_bol;

    int yy_bs_lineno;
    int yy_bs_column;




 int yy_fill_buffer;

 int yy_buffer_status;
# 504 "src/backend/parser/ag_scanner.c"
 };
# 521 "src/backend/parser/ag_scanner.c"
void ag_yyrestart ( FILE *input_file , yyscan_t yyscanner );
void ag_yy_switch_to_buffer ( YY_BUFFER_STATE new_buffer , yyscan_t yyscanner );
YY_BUFFER_STATE ag_yy_create_buffer ( FILE *file, int size , yyscan_t yyscanner );
void ag_yy_delete_buffer ( YY_BUFFER_STATE b , yyscan_t yyscanner );
void ag_yy_flush_buffer ( YY_BUFFER_STATE b , yyscan_t yyscanner );
void ag_yypush_buffer_state ( YY_BUFFER_STATE new_buffer , yyscan_t yyscanner );
void ag_yypop_buffer_state ( yyscan_t yyscanner );

static void ag_yyensure_buffer_stack ( yyscan_t yyscanner );
static void ag_yy_load_buffer_state ( yyscan_t yyscanner );
static void ag_yy_init_buffer ( YY_BUFFER_STATE b, FILE *file , yyscan_t yyscanner );


YY_BUFFER_STATE ag_yy_scan_buffer ( char *base, yy_size_t size , yyscan_t yyscanner );
YY_BUFFER_STATE ag_yy_scan_string ( const char *yy_str , yyscan_t yyscanner );
YY_BUFFER_STATE ag_yy_scan_bytes ( const char *bytes, int len , yyscan_t yyscanner );

void *ag_yyalloc ( yy_size_t , yyscan_t yyscanner );
void *ag_yyrealloc ( void *, yy_size_t , yyscan_t yyscanner );
void ag_yyfree ( void * , yyscan_t yyscanner );
# 567 "src/backend/parser/ag_scanner.c"
typedef flex_uint8_t YY_CHAR;

typedef const struct yy_trans_info *yy_state_type;



static yy_state_type yy_get_previous_state ( yyscan_t yyscanner );
static yy_state_type yy_try_NUL_trans ( yy_state_type current_state , yyscan_t yyscanner);
static int yy_get_next_buffer ( yyscan_t yyscanner );
static void __attribute__((__noreturn__)) yy_fatal_error ( const char* msg , yyscan_t yyscanner );
# 589 "src/backend/parser/ag_scanner.c"
struct yy_trans_info
 {
 flex_int16_t yy_verify;
 flex_int16_t yy_nxt;
 };
static const struct yy_trans_info yy_transition[9056] =
    {
 { 0, 0 }, { 0,8800 }, { 0, 0 }, { 0,8798 }, { 1,3096 },
 { 2,3096 }, { 3,3096 }, { 4,3096 }, { 5,3096 }, { 6,3096 },
 { 7,3096 }, { 8,3096 }, { 9,3098 }, { 10,3103 }, { 11,3098 },
 { 12,3098 }, { 13,3098 }, { 14,3096 }, { 15,3096 }, { 16,3096 },
 { 17,3096 }, { 18,3096 }, { 19,3096 }, { 20,3096 }, { 21,3096 },
 { 22,3096 }, { 23,3096 }, { 24,3096 }, { 25,3096 }, { 26,3096 },
 { 27,3096 }, { 28,3096 }, { 29,3096 }, { 30,3096 }, { 31,3096 },
 { 32,3098 }, { 33,3096 }, { 34,3100 }, { 35,3096 }, { 36,3105 },
 { 37,3118 }, { 38,3096 }, { 39,3120 }, { 40,3118 }, { 41,3118 },
 { 42,3118 }, { 43,3137 }, { 44,3118 }, { 45,3118 }, { 46,3362 },

 { 47,3154 }, { 48,3374 }, { 49,3396 }, { 50,3396 }, { 51,3396 },
 { 52,3396 }, { 53,3396 }, { 54,3396 }, { 55,3396 }, { 56,3396 },
 { 57,3396 }, { 58,3376 }, { 59,3118 }, { 60,3378 }, { 61,3380 },
 { 62,3393 }, { 63,3096 }, { 64,3096 }, { 65,3459 }, { 66,3459 },
 { 67,3459 }, { 68,3459 }, { 69,3459 }, { 70,3459 }, { 71,3459 },
 { 72,3459 }, { 73,3459 }, { 74,3459 }, { 75,3459 }, { 76,3459 },
 { 77,3459 }, { 78,3459 }, { 79,3459 }, { 80,3459 }, { 81,3459 },
 { 82,3459 }, { 83,3459 }, { 84,3459 }, { 85,3459 }, { 86,3459 },
 { 87,3459 }, { 88,3459 }, { 89,3459 }, { 90,3459 }, { 91,3118 },
 { 92,3096 }, { 93,3118 }, { 94,3118 }, { 95,3459 }, { 96,3398 },

 { 97,3459 }, { 98,3459 }, { 99,3459 }, { 100,3459 }, { 101,3459 },
 { 102,3459 }, { 103,3459 }, { 104,3459 }, { 105,3459 }, { 106,3459 },
 { 107,3459 }, { 108,3459 }, { 109,3459 }, { 110,3459 }, { 111,3459 },
 { 112,3459 }, { 113,3459 }, { 114,3459 }, { 115,3459 }, { 116,3459 },
 { 117,3459 }, { 118,3459 }, { 119,3459 }, { 120,3459 }, { 121,3459 },
 { 122,3459 }, { 123,3118 }, { 124,3118 }, { 125,3118 }, { 126,3096 },
 { 127,3096 }, { 128,3459 }, { 129,3459 }, { 130,3459 }, { 131,3459 },
 { 132,3459 }, { 133,3459 }, { 134,3459 }, { 135,3459 }, { 136,3459 },
 { 137,3459 }, { 138,3459 }, { 139,3459 }, { 140,3459 }, { 141,3459 },
 { 142,3459 }, { 143,3459 }, { 144,3459 }, { 145,3459 }, { 146,3459 },

 { 147,3459 }, { 148,3459 }, { 149,3459 }, { 150,3459 }, { 151,3459 },
 { 152,3459 }, { 153,3459 }, { 154,3459 }, { 155,3459 }, { 156,3459 },
 { 157,3459 }, { 158,3459 }, { 159,3459 }, { 160,3459 }, { 161,3459 },
 { 162,3459 }, { 163,3459 }, { 164,3459 }, { 165,3459 }, { 166,3459 },
 { 167,3459 }, { 168,3459 }, { 169,3459 }, { 170,3459 }, { 171,3459 },
 { 172,3459 }, { 173,3459 }, { 174,3459 }, { 175,3459 }, { 176,3459 },
 { 177,3459 }, { 178,3459 }, { 179,3459 }, { 180,3459 }, { 181,3459 },
 { 182,3459 }, { 183,3459 }, { 184,3459 }, { 185,3459 }, { 186,3459 },
 { 187,3459 }, { 188,3459 }, { 189,3459 }, { 190,3459 }, { 191,3459 },
 { 192,3459 }, { 193,3459 }, { 194,3459 }, { 195,3459 }, { 196,3459 },

 { 197,3459 }, { 198,3459 }, { 199,3459 }, { 200,3459 }, { 201,3459 },
 { 202,3459 }, { 203,3459 }, { 204,3459 }, { 205,3459 }, { 206,3459 },
 { 207,3459 }, { 208,3459 }, { 209,3459 }, { 210,3459 }, { 211,3459 },
 { 212,3459 }, { 213,3459 }, { 214,3459 }, { 215,3459 }, { 216,3459 },
 { 217,3459 }, { 218,3459 }, { 219,3459 }, { 220,3459 }, { 221,3459 },
 { 222,3459 }, { 223,3459 }, { 224,3459 }, { 225,3459 }, { 226,3459 },
 { 227,3459 }, { 228,3459 }, { 229,3459 }, { 230,3459 }, { 231,3459 },
 { 232,3459 }, { 233,3459 }, { 234,3459 }, { 235,3459 }, { 236,3459 },
 { 237,3459 }, { 238,3459 }, { 239,3459 }, { 240,3459 }, { 241,3459 },
 { 242,3459 }, { 243,3459 }, { 244,3459 }, { 245,3459 }, { 246,3459 },

 { 247,3459 }, { 248,3459 }, { 249,3459 }, { 250,3459 }, { 251,3459 },
 { 252,3459 }, { 253,3459 }, { 254,3459 }, { 255,3459 }, { 256,3096 },
 { 0, 0 }, { 0,8540 }, { 1,2838 }, { 2,2838 }, { 3,2838 },
 { 4,2838 }, { 5,2838 }, { 6,2838 }, { 7,2838 }, { 8,2838 },
 { 9,2840 }, { 10,2845 }, { 11,2840 }, { 12,2840 }, { 13,2840 },
 { 14,2838 }, { 15,2838 }, { 16,2838 }, { 17,2838 }, { 18,2838 },
 { 19,2838 }, { 20,2838 }, { 21,2838 }, { 22,2838 }, { 23,2838 },
 { 24,2838 }, { 25,2838 }, { 26,2838 }, { 27,2838 }, { 28,2838 },
 { 29,2838 }, { 30,2838 }, { 31,2838 }, { 32,2840 }, { 33,2838 },
 { 34,2842 }, { 35,2838 }, { 36,2847 }, { 37,2860 }, { 38,2838 },

 { 39,2862 }, { 40,2860 }, { 41,2860 }, { 42,2860 }, { 43,2879 },
 { 44,2860 }, { 45,2860 }, { 46,3104 }, { 47,2896 }, { 48,3116 },
 { 49,3138 }, { 50,3138 }, { 51,3138 }, { 52,3138 }, { 53,3138 },
 { 54,3138 }, { 55,3138 }, { 56,3138 }, { 57,3138 }, { 58,3118 },
 { 59,2860 }, { 60,3120 }, { 61,3122 }, { 62,3135 }, { 63,2838 },
 { 64,2838 }, { 65,3201 }, { 66,3201 }, { 67,3201 }, { 68,3201 },
 { 69,3201 }, { 70,3201 }, { 71,3201 }, { 72,3201 }, { 73,3201 },
 { 74,3201 }, { 75,3201 }, { 76,3201 }, { 77,3201 }, { 78,3201 },
 { 79,3201 }, { 80,3201 }, { 81,3201 }, { 82,3201 }, { 83,3201 },
 { 84,3201 }, { 85,3201 }, { 86,3201 }, { 87,3201 }, { 88,3201 },

 { 89,3201 }, { 90,3201 }, { 91,2860 }, { 92,2838 }, { 93,2860 },
 { 94,2860 }, { 95,3201 }, { 96,3140 }, { 97,3201 }, { 98,3201 },
 { 99,3201 }, { 100,3201 }, { 101,3201 }, { 102,3201 }, { 103,3201 },
 { 104,3201 }, { 105,3201 }, { 106,3201 }, { 107,3201 }, { 108,3201 },
 { 109,3201 }, { 110,3201 }, { 111,3201 }, { 112,3201 }, { 113,3201 },
 { 114,3201 }, { 115,3201 }, { 116,3201 }, { 117,3201 }, { 118,3201 },
 { 119,3201 }, { 120,3201 }, { 121,3201 }, { 122,3201 }, { 123,2860 },
 { 124,2860 }, { 125,2860 }, { 126,2838 }, { 127,2838 }, { 128,3201 },
 { 129,3201 }, { 130,3201 }, { 131,3201 }, { 132,3201 }, { 133,3201 },
 { 134,3201 }, { 135,3201 }, { 136,3201 }, { 137,3201 }, { 138,3201 },

 { 139,3201 }, { 140,3201 }, { 141,3201 }, { 142,3201 }, { 143,3201 },
 { 144,3201 }, { 145,3201 }, { 146,3201 }, { 147,3201 }, { 148,3201 },
 { 149,3201 }, { 150,3201 }, { 151,3201 }, { 152,3201 }, { 153,3201 },
 { 154,3201 }, { 155,3201 }, { 156,3201 }, { 157,3201 }, { 158,3201 },
 { 159,3201 }, { 160,3201 }, { 161,3201 }, { 162,3201 }, { 163,3201 },
 { 164,3201 }, { 165,3201 }, { 166,3201 }, { 167,3201 }, { 168,3201 },
 { 169,3201 }, { 170,3201 }, { 171,3201 }, { 172,3201 }, { 173,3201 },
 { 174,3201 }, { 175,3201 }, { 176,3201 }, { 177,3201 }, { 178,3201 },
 { 179,3201 }, { 180,3201 }, { 181,3201 }, { 182,3201 }, { 183,3201 },
 { 184,3201 }, { 185,3201 }, { 186,3201 }, { 187,3201 }, { 188,3201 },

 { 189,3201 }, { 190,3201 }, { 191,3201 }, { 192,3201 }, { 193,3201 },
 { 194,3201 }, { 195,3201 }, { 196,3201 }, { 197,3201 }, { 198,3201 },
 { 199,3201 }, { 200,3201 }, { 201,3201 }, { 202,3201 }, { 203,3201 },
 { 204,3201 }, { 205,3201 }, { 206,3201 }, { 207,3201 }, { 208,3201 },
 { 209,3201 }, { 210,3201 }, { 211,3201 }, { 212,3201 }, { 213,3201 },
 { 214,3201 }, { 215,3201 }, { 216,3201 }, { 217,3201 }, { 218,3201 },
 { 219,3201 }, { 220,3201 }, { 221,3201 }, { 222,3201 }, { 223,3201 },
 { 224,3201 }, { 225,3201 }, { 226,3201 }, { 227,3201 }, { 228,3201 },
 { 229,3201 }, { 230,3201 }, { 231,3201 }, { 232,3201 }, { 233,3201 },
 { 234,3201 }, { 235,3201 }, { 236,3201 }, { 237,3201 }, { 238,3201 },

 { 239,3201 }, { 240,3201 }, { 241,3201 }, { 242,3201 }, { 243,3201 },
 { 244,3201 }, { 245,3201 }, { 246,3201 }, { 247,3201 }, { 248,3201 },
 { 249,3201 }, { 250,3201 }, { 251,3201 }, { 252,3201 }, { 253,3201 },
 { 254,3201 }, { 255,3201 }, { 256,2838 }, { 0, 0 }, { 0,8282 },
 { 1,3200 }, { 2,3200 }, { 3,3200 }, { 4,3200 }, { 5,3200 },
 { 6,3200 }, { 7,3200 }, { 8,3200 }, { 9,3200 }, { 10,3200 },
 { 11,3200 }, { 12,3200 }, { 13,3200 }, { 14,3200 }, { 15,3200 },
 { 16,3200 }, { 17,3200 }, { 18,3200 }, { 19,3200 }, { 20,3200 },
 { 21,3200 }, { 22,3200 }, { 23,3200 }, { 24,3200 }, { 25,3200 },
 { 26,3200 }, { 27,3200 }, { 28,3200 }, { 29,3200 }, { 30,3200 },

 { 31,3200 }, { 32,3200 }, { 33,3200 }, { 34,3200 }, { 35,3200 },
 { 36,3200 }, { 37,3200 }, { 38,3200 }, { 39,3200 }, { 40,3200 },
 { 41,3200 }, { 42,2920 }, { 43,3200 }, { 44,3200 }, { 45,3200 },
 { 46,3200 }, { 47,3200 }, { 48,3200 }, { 49,3200 }, { 50,3200 },
 { 51,3200 }, { 52,3200 }, { 53,3200 }, { 54,3200 }, { 55,3200 },
 { 56,3200 }, { 57,3200 }, { 58,3200 }, { 59,3200 }, { 60,3200 },
 { 61,3200 }, { 62,3200 }, { 63,3200 }, { 64,3200 }, { 65,3200 },
 { 66,3200 }, { 67,3200 }, { 68,3200 }, { 69,3200 }, { 70,3200 },
 { 71,3200 }, { 72,3200 }, { 73,3200 }, { 74,3200 }, { 75,3200 },
 { 76,3200 }, { 77,3200 }, { 78,3200 }, { 79,3200 }, { 80,3200 },

 { 81,3200 }, { 82,3200 }, { 83,3200 }, { 84,3200 }, { 85,3200 },
 { 86,3200 }, { 87,3200 }, { 88,3200 }, { 89,3200 }, { 90,3200 },
 { 91,3200 }, { 92,3200 }, { 93,3200 }, { 94,3200 }, { 95,3200 },
 { 96,3200 }, { 97,3200 }, { 98,3200 }, { 99,3200 }, { 100,3200 },
 { 101,3200 }, { 102,3200 }, { 103,3200 }, { 104,3200 }, { 105,3200 },
 { 106,3200 }, { 107,3200 }, { 108,3200 }, { 109,3200 }, { 110,3200 },
 { 111,3200 }, { 112,3200 }, { 113,3200 }, { 114,3200 }, { 115,3200 },
 { 116,3200 }, { 117,3200 }, { 118,3200 }, { 119,3200 }, { 120,3200 },
 { 121,3200 }, { 122,3200 }, { 123,3200 }, { 124,3200 }, { 125,3200 },
 { 126,3200 }, { 127,3200 }, { 128,3200 }, { 129,3200 }, { 130,3200 },

 { 131,3200 }, { 132,3200 }, { 133,3200 }, { 134,3200 }, { 135,3200 },
 { 136,3200 }, { 137,3200 }, { 138,3200 }, { 139,3200 }, { 140,3200 },
 { 141,3200 }, { 142,3200 }, { 143,3200 }, { 144,3200 }, { 145,3200 },
 { 146,3200 }, { 147,3200 }, { 148,3200 }, { 149,3200 }, { 150,3200 },
 { 151,3200 }, { 152,3200 }, { 153,3200 }, { 154,3200 }, { 155,3200 },
 { 156,3200 }, { 157,3200 }, { 158,3200 }, { 159,3200 }, { 160,3200 },
 { 161,3200 }, { 162,3200 }, { 163,3200 }, { 164,3200 }, { 165,3200 },
 { 166,3200 }, { 167,3200 }, { 168,3200 }, { 169,3200 }, { 170,3200 },
 { 171,3200 }, { 172,3200 }, { 173,3200 }, { 174,3200 }, { 175,3200 },
 { 176,3200 }, { 177,3200 }, { 178,3200 }, { 179,3200 }, { 180,3200 },

 { 181,3200 }, { 182,3200 }, { 183,3200 }, { 184,3200 }, { 185,3200 },
 { 186,3200 }, { 187,3200 }, { 188,3200 }, { 189,3200 }, { 190,3200 },
 { 191,3200 }, { 192,3200 }, { 193,3200 }, { 194,3200 }, { 195,3200 },
 { 196,3200 }, { 197,3200 }, { 198,3200 }, { 199,3200 }, { 200,3200 },
 { 201,3200 }, { 202,3200 }, { 203,3200 }, { 204,3200 }, { 205,3200 },
 { 206,3200 }, { 207,3200 }, { 208,3200 }, { 209,3200 }, { 210,3200 },
 { 211,3200 }, { 212,3200 }, { 213,3200 }, { 214,3200 }, { 215,3200 },
 { 216,3200 }, { 217,3200 }, { 218,3200 }, { 219,3200 }, { 220,3200 },
 { 221,3200 }, { 222,3200 }, { 223,3200 }, { 224,3200 }, { 225,3200 },
 { 226,3200 }, { 227,3200 }, { 228,3200 }, { 229,3200 }, { 230,3200 },

 { 231,3200 }, { 232,3200 }, { 233,3200 }, { 234,3200 }, { 235,3200 },
 { 236,3200 }, { 237,3200 }, { 238,3200 }, { 239,3200 }, { 240,3200 },
 { 241,3200 }, { 242,3200 }, { 243,3200 }, { 244,3200 }, { 245,3200 },
 { 246,3200 }, { 247,3200 }, { 248,3200 }, { 249,3200 }, { 250,3200 },
 { 251,3200 }, { 252,3200 }, { 253,3200 }, { 254,3200 }, { 255,3200 },
 { 256,3200 }, { 0, 0 }, { 0,8024 }, { 1,2942 }, { 2,2942 },
 { 3,2942 }, { 4,2942 }, { 5,2942 }, { 6,2942 }, { 7,2942 },
 { 8,2942 }, { 9,2942 }, { 10,2942 }, { 11,2942 }, { 12,2942 },
 { 13,2942 }, { 14,2942 }, { 15,2942 }, { 16,2942 }, { 17,2942 },
 { 18,2942 }, { 19,2942 }, { 20,2942 }, { 21,2942 }, { 22,2942 },

 { 23,2942 }, { 24,2942 }, { 25,2942 }, { 26,2942 }, { 27,2942 },
 { 28,2942 }, { 29,2942 }, { 30,2942 }, { 31,2942 }, { 32,2942 },
 { 33,2942 }, { 34,2942 }, { 35,2942 }, { 36,2942 }, { 37,2942 },
 { 38,2942 }, { 39,2942 }, { 40,2942 }, { 41,2942 }, { 42,2662 },
 { 43,2942 }, { 44,2942 }, { 45,2942 }, { 46,2942 }, { 47,2942 },
 { 48,2942 }, { 49,2942 }, { 50,2942 }, { 51,2942 }, { 52,2942 },
 { 53,2942 }, { 54,2942 }, { 55,2942 }, { 56,2942 }, { 57,2942 },
 { 58,2942 }, { 59,2942 }, { 60,2942 }, { 61,2942 }, { 62,2942 },
 { 63,2942 }, { 64,2942 }, { 65,2942 }, { 66,2942 }, { 67,2942 },
 { 68,2942 }, { 69,2942 }, { 70,2942 }, { 71,2942 }, { 72,2942 },

 { 73,2942 }, { 74,2942 }, { 75,2942 }, { 76,2942 }, { 77,2942 },
 { 78,2942 }, { 79,2942 }, { 80,2942 }, { 81,2942 }, { 82,2942 },
 { 83,2942 }, { 84,2942 }, { 85,2942 }, { 86,2942 }, { 87,2942 },
 { 88,2942 }, { 89,2942 }, { 90,2942 }, { 91,2942 }, { 92,2942 },
 { 93,2942 }, { 94,2942 }, { 95,2942 }, { 96,2942 }, { 97,2942 },
 { 98,2942 }, { 99,2942 }, { 100,2942 }, { 101,2942 }, { 102,2942 },
 { 103,2942 }, { 104,2942 }, { 105,2942 }, { 106,2942 }, { 107,2942 },
 { 108,2942 }, { 109,2942 }, { 110,2942 }, { 111,2942 }, { 112,2942 },
 { 113,2942 }, { 114,2942 }, { 115,2942 }, { 116,2942 }, { 117,2942 },
 { 118,2942 }, { 119,2942 }, { 120,2942 }, { 121,2942 }, { 122,2942 },

 { 123,2942 }, { 124,2942 }, { 125,2942 }, { 126,2942 }, { 127,2942 },
 { 128,2942 }, { 129,2942 }, { 130,2942 }, { 131,2942 }, { 132,2942 },
 { 133,2942 }, { 134,2942 }, { 135,2942 }, { 136,2942 }, { 137,2942 },
 { 138,2942 }, { 139,2942 }, { 140,2942 }, { 141,2942 }, { 142,2942 },
 { 143,2942 }, { 144,2942 }, { 145,2942 }, { 146,2942 }, { 147,2942 },
 { 148,2942 }, { 149,2942 }, { 150,2942 }, { 151,2942 }, { 152,2942 },
 { 153,2942 }, { 154,2942 }, { 155,2942 }, { 156,2942 }, { 157,2942 },
 { 158,2942 }, { 159,2942 }, { 160,2942 }, { 161,2942 }, { 162,2942 },
 { 163,2942 }, { 164,2942 }, { 165,2942 }, { 166,2942 }, { 167,2942 },
 { 168,2942 }, { 169,2942 }, { 170,2942 }, { 171,2942 }, { 172,2942 },

 { 173,2942 }, { 174,2942 }, { 175,2942 }, { 176,2942 }, { 177,2942 },
 { 178,2942 }, { 179,2942 }, { 180,2942 }, { 181,2942 }, { 182,2942 },
 { 183,2942 }, { 184,2942 }, { 185,2942 }, { 186,2942 }, { 187,2942 },
 { 188,2942 }, { 189,2942 }, { 190,2942 }, { 191,2942 }, { 192,2942 },
 { 193,2942 }, { 194,2942 }, { 195,2942 }, { 196,2942 }, { 197,2942 },
 { 198,2942 }, { 199,2942 }, { 200,2942 }, { 201,2942 }, { 202,2942 },
 { 203,2942 }, { 204,2942 }, { 205,2942 }, { 206,2942 }, { 207,2942 },
 { 208,2942 }, { 209,2942 }, { 210,2942 }, { 211,2942 }, { 212,2942 },
 { 213,2942 }, { 214,2942 }, { 215,2942 }, { 216,2942 }, { 217,2942 },
 { 218,2942 }, { 219,2942 }, { 220,2942 }, { 221,2942 }, { 222,2942 },

 { 223,2942 }, { 224,2942 }, { 225,2942 }, { 226,2942 }, { 227,2942 },
 { 228,2942 }, { 229,2942 }, { 230,2942 }, { 231,2942 }, { 232,2942 },
 { 233,2942 }, { 234,2942 }, { 235,2942 }, { 236,2942 }, { 237,2942 },
 { 238,2942 }, { 239,2942 }, { 240,2942 }, { 241,2942 }, { 242,2942 },
 { 243,2942 }, { 244,2942 }, { 245,2942 }, { 246,2942 }, { 247,2942 },
 { 248,2942 }, { 249,2942 }, { 250,2942 }, { 251,2942 }, { 252,2942 },
 { 253,2942 }, { 254,2942 }, { 255,2942 }, { 256,2942 }, { 0, 0 },
 { 0,7766 }, { 1,2942 }, { 2,2942 }, { 3,2942 }, { 4,2942 },
 { 5,2942 }, { 6,2942 }, { 7,2942 }, { 8,2942 }, { 9,2942 },
 { 10,2942 }, { 11,2942 }, { 12,2942 }, { 13,2942 }, { 14,2942 },

 { 15,2942 }, { 16,2942 }, { 17,2942 }, { 18,2942 }, { 19,2942 },
 { 20,2942 }, { 21,2942 }, { 22,2942 }, { 23,2942 }, { 24,2942 },
 { 25,2942 }, { 26,2942 }, { 27,2942 }, { 28,2942 }, { 29,2942 },
 { 30,2942 }, { 31,2942 }, { 32,2942 }, { 33,2942 }, { 34,2406 },
 { 35,2942 }, { 36,2942 }, { 37,2942 }, { 38,2942 }, { 39,2942 },
 { 40,2942 }, { 41,2942 }, { 42,2942 }, { 43,2942 }, { 44,2942 },
 { 45,2942 }, { 46,2942 }, { 47,2942 }, { 48,2942 }, { 49,2942 },
 { 50,2942 }, { 51,2942 }, { 52,2942 }, { 53,2942 }, { 54,2942 },
 { 55,2942 }, { 56,2942 }, { 57,2942 }, { 58,2942 }, { 59,2942 },
 { 60,2942 }, { 61,2942 }, { 62,2942 }, { 63,2942 }, { 64,2942 },

 { 65,2942 }, { 66,2942 }, { 67,2942 }, { 68,2942 }, { 69,2942 },
 { 70,2942 }, { 71,2942 }, { 72,2942 }, { 73,2942 }, { 74,2942 },
 { 75,2942 }, { 76,2942 }, { 77,2942 }, { 78,2942 }, { 79,2942 },
 { 80,2942 }, { 81,2942 }, { 82,2942 }, { 83,2942 }, { 84,2942 },
 { 85,2942 }, { 86,2942 }, { 87,2942 }, { 88,2942 }, { 89,2942 },
 { 90,2942 }, { 91,2942 }, { 92,3200 }, { 93,2942 }, { 94,2942 },
 { 95,2942 }, { 96,2942 }, { 97,2942 }, { 98,2942 }, { 99,2942 },
 { 100,2942 }, { 101,2942 }, { 102,2942 }, { 103,2942 }, { 104,2942 },
 { 105,2942 }, { 106,2942 }, { 107,2942 }, { 108,2942 }, { 109,2942 },
 { 110,2942 }, { 111,2942 }, { 112,2942 }, { 113,2942 }, { 114,2942 },

 { 115,2942 }, { 116,2942 }, { 117,2942 }, { 118,2942 }, { 119,2942 },
 { 120,2942 }, { 121,2942 }, { 122,2942 }, { 123,2942 }, { 124,2942 },
 { 125,2942 }, { 126,2942 }, { 127,2942 }, { 128,2942 }, { 129,2942 },
 { 130,2942 }, { 131,2942 }, { 132,2942 }, { 133,2942 }, { 134,2942 },
 { 135,2942 }, { 136,2942 }, { 137,2942 }, { 138,2942 }, { 139,2942 },
 { 140,2942 }, { 141,2942 }, { 142,2942 }, { 143,2942 }, { 144,2942 },
 { 145,2942 }, { 146,2942 }, { 147,2942 }, { 148,2942 }, { 149,2942 },
 { 150,2942 }, { 151,2942 }, { 152,2942 }, { 153,2942 }, { 154,2942 },
 { 155,2942 }, { 156,2942 }, { 157,2942 }, { 158,2942 }, { 159,2942 },
 { 160,2942 }, { 161,2942 }, { 162,2942 }, { 163,2942 }, { 164,2942 },

 { 165,2942 }, { 166,2942 }, { 167,2942 }, { 168,2942 }, { 169,2942 },
 { 170,2942 }, { 171,2942 }, { 172,2942 }, { 173,2942 }, { 174,2942 },
 { 175,2942 }, { 176,2942 }, { 177,2942 }, { 178,2942 }, { 179,2942 },
 { 180,2942 }, { 181,2942 }, { 182,2942 }, { 183,2942 }, { 184,2942 },
 { 185,2942 }, { 186,2942 }, { 187,2942 }, { 188,2942 }, { 189,2942 },
 { 190,2942 }, { 191,2942 }, { 192,2942 }, { 193,2942 }, { 194,2942 },
 { 195,2942 }, { 196,2942 }, { 197,2942 }, { 198,2942 }, { 199,2942 },
 { 200,2942 }, { 201,2942 }, { 202,2942 }, { 203,2942 }, { 204,2942 },
 { 205,2942 }, { 206,2942 }, { 207,2942 }, { 208,2942 }, { 209,2942 },
 { 210,2942 }, { 211,2942 }, { 212,2942 }, { 213,2942 }, { 214,2942 },

 { 215,2942 }, { 216,2942 }, { 217,2942 }, { 218,2942 }, { 219,2942 },
 { 220,2942 }, { 221,2942 }, { 222,2942 }, { 223,2942 }, { 224,2942 },
 { 225,2942 }, { 226,2942 }, { 227,2942 }, { 228,2942 }, { 229,2942 },
 { 230,2942 }, { 231,2942 }, { 232,2942 }, { 233,2942 }, { 234,2942 },
 { 235,2942 }, { 236,2942 }, { 237,2942 }, { 238,2942 }, { 239,2942 },
 { 240,2942 }, { 241,2942 }, { 242,2942 }, { 243,2942 }, { 244,2942 },
 { 245,2942 }, { 246,2942 }, { 247,2942 }, { 248,2942 }, { 249,2942 },
 { 250,2942 }, { 251,2942 }, { 252,2942 }, { 253,2942 }, { 254,2942 },
 { 255,2942 }, { 256,2942 }, { 0, 0 }, { 0,7508 }, { 1,2684 },
 { 2,2684 }, { 3,2684 }, { 4,2684 }, { 5,2684 }, { 6,2684 },

 { 7,2684 }, { 8,2684 }, { 9,2684 }, { 10,2684 }, { 11,2684 },
 { 12,2684 }, { 13,2684 }, { 14,2684 }, { 15,2684 }, { 16,2684 },
 { 17,2684 }, { 18,2684 }, { 19,2684 }, { 20,2684 }, { 21,2684 },
 { 22,2684 }, { 23,2684 }, { 24,2684 }, { 25,2684 }, { 26,2684 },
 { 27,2684 }, { 28,2684 }, { 29,2684 }, { 30,2684 }, { 31,2684 },
 { 32,2684 }, { 33,2684 }, { 34,2148 }, { 35,2684 }, { 36,2684 },
 { 37,2684 }, { 38,2684 }, { 39,2684 }, { 40,2684 }, { 41,2684 },
 { 42,2684 }, { 43,2684 }, { 44,2684 }, { 45,2684 }, { 46,2684 },
 { 47,2684 }, { 48,2684 }, { 49,2684 }, { 50,2684 }, { 51,2684 },
 { 52,2684 }, { 53,2684 }, { 54,2684 }, { 55,2684 }, { 56,2684 },

 { 57,2684 }, { 58,2684 }, { 59,2684 }, { 60,2684 }, { 61,2684 },
 { 62,2684 }, { 63,2684 }, { 64,2684 }, { 65,2684 }, { 66,2684 },
 { 67,2684 }, { 68,2684 }, { 69,2684 }, { 70,2684 }, { 71,2684 },
 { 72,2684 }, { 73,2684 }, { 74,2684 }, { 75,2684 }, { 76,2684 },
 { 77,2684 }, { 78,2684 }, { 79,2684 }, { 80,2684 }, { 81,2684 },
 { 82,2684 }, { 83,2684 }, { 84,2684 }, { 85,2684 }, { 86,2684 },
 { 87,2684 }, { 88,2684 }, { 89,2684 }, { 90,2684 }, { 91,2684 },
 { 92,2942 }, { 93,2684 }, { 94,2684 }, { 95,2684 }, { 96,2684 },
 { 97,2684 }, { 98,2684 }, { 99,2684 }, { 100,2684 }, { 101,2684 },
 { 102,2684 }, { 103,2684 }, { 104,2684 }, { 105,2684 }, { 106,2684 },

 { 107,2684 }, { 108,2684 }, { 109,2684 }, { 110,2684 }, { 111,2684 },
 { 112,2684 }, { 113,2684 }, { 114,2684 }, { 115,2684 }, { 116,2684 },
 { 117,2684 }, { 118,2684 }, { 119,2684 }, { 120,2684 }, { 121,2684 },
 { 122,2684 }, { 123,2684 }, { 124,2684 }, { 125,2684 }, { 126,2684 },
 { 127,2684 }, { 128,2684 }, { 129,2684 }, { 130,2684 }, { 131,2684 },
 { 132,2684 }, { 133,2684 }, { 134,2684 }, { 135,2684 }, { 136,2684 },
 { 137,2684 }, { 138,2684 }, { 139,2684 }, { 140,2684 }, { 141,2684 },
 { 142,2684 }, { 143,2684 }, { 144,2684 }, { 145,2684 }, { 146,2684 },
 { 147,2684 }, { 148,2684 }, { 149,2684 }, { 150,2684 }, { 151,2684 },
 { 152,2684 }, { 153,2684 }, { 154,2684 }, { 155,2684 }, { 156,2684 },

 { 157,2684 }, { 158,2684 }, { 159,2684 }, { 160,2684 }, { 161,2684 },
 { 162,2684 }, { 163,2684 }, { 164,2684 }, { 165,2684 }, { 166,2684 },
 { 167,2684 }, { 168,2684 }, { 169,2684 }, { 170,2684 }, { 171,2684 },
 { 172,2684 }, { 173,2684 }, { 174,2684 }, { 175,2684 }, { 176,2684 },
 { 177,2684 }, { 178,2684 }, { 179,2684 }, { 180,2684 }, { 181,2684 },
 { 182,2684 }, { 183,2684 }, { 184,2684 }, { 185,2684 }, { 186,2684 },
 { 187,2684 }, { 188,2684 }, { 189,2684 }, { 190,2684 }, { 191,2684 },
 { 192,2684 }, { 193,2684 }, { 194,2684 }, { 195,2684 }, { 196,2684 },
 { 197,2684 }, { 198,2684 }, { 199,2684 }, { 200,2684 }, { 201,2684 },
 { 202,2684 }, { 203,2684 }, { 204,2684 }, { 205,2684 }, { 206,2684 },

 { 207,2684 }, { 208,2684 }, { 209,2684 }, { 210,2684 }, { 211,2684 },
 { 212,2684 }, { 213,2684 }, { 214,2684 }, { 215,2684 }, { 216,2684 },
 { 217,2684 }, { 218,2684 }, { 219,2684 }, { 220,2684 }, { 221,2684 },
 { 222,2684 }, { 223,2684 }, { 224,2684 }, { 225,2684 }, { 226,2684 },
 { 227,2684 }, { 228,2684 }, { 229,2684 }, { 230,2684 }, { 231,2684 },
 { 232,2684 }, { 233,2684 }, { 234,2684 }, { 235,2684 }, { 236,2684 },
 { 237,2684 }, { 238,2684 }, { 239,2684 }, { 240,2684 }, { 241,2684 },
 { 242,2684 }, { 243,2684 }, { 244,2684 }, { 245,2684 }, { 246,2684 },
 { 247,2684 }, { 248,2684 }, { 249,2684 }, { 250,2684 }, { 251,2684 },
 { 252,2684 }, { 253,2684 }, { 254,2684 }, { 255,2684 }, { 256,2684 },

 { 0, 0 }, { 0,7250 }, { 1,2942 }, { 2,2942 }, { 3,2942 },
 { 4,2942 }, { 5,2942 }, { 6,2942 }, { 7,2942 }, { 8,2942 },
 { 9,2942 }, { 10,2942 }, { 11,2942 }, { 12,2942 }, { 13,2942 },
 { 14,2942 }, { 15,2942 }, { 16,2942 }, { 17,2942 }, { 18,2942 },
 { 19,2942 }, { 20,2942 }, { 21,2942 }, { 22,2942 }, { 23,2942 },
 { 24,2942 }, { 25,2942 }, { 26,2942 }, { 27,2942 }, { 28,2942 },
 { 29,2942 }, { 30,2942 }, { 31,2942 }, { 32,2942 }, { 33,2942 },
 { 34,2942 }, { 35,2942 }, { 36,2942 }, { 37,2942 }, { 38,2942 },
 { 39,1908 }, { 40,2942 }, { 41,2942 }, { 42,2942 }, { 43,2942 },
 { 44,2942 }, { 45,2942 }, { 46,2942 }, { 47,2942 }, { 48,2942 },

 { 49,2942 }, { 50,2942 }, { 51,2942 }, { 52,2942 }, { 53,2942 },
 { 54,2942 }, { 55,2942 }, { 56,2942 }, { 57,2942 }, { 58,2942 },
 { 59,2942 }, { 60,2942 }, { 61,2942 }, { 62,2942 }, { 63,2942 },
 { 64,2942 }, { 65,2942 }, { 66,2942 }, { 67,2942 }, { 68,2942 },
 { 69,2942 }, { 70,2942 }, { 71,2942 }, { 72,2942 }, { 73,2942 },
 { 74,2942 }, { 75,2942 }, { 76,2942 }, { 77,2942 }, { 78,2942 },
 { 79,2942 }, { 80,2942 }, { 81,2942 }, { 82,2942 }, { 83,2942 },
 { 84,2942 }, { 85,2942 }, { 86,2942 }, { 87,2942 }, { 88,2942 },
 { 89,2942 }, { 90,2942 }, { 91,2942 }, { 92,2684 }, { 93,2942 },
 { 94,2942 }, { 95,2942 }, { 96,2942 }, { 97,2942 }, { 98,2942 },

 { 99,2942 }, { 100,2942 }, { 101,2942 }, { 102,2942 }, { 103,2942 },
 { 104,2942 }, { 105,2942 }, { 106,2942 }, { 107,2942 }, { 108,2942 },
 { 109,2942 }, { 110,2942 }, { 111,2942 }, { 112,2942 }, { 113,2942 },
 { 114,2942 }, { 115,2942 }, { 116,2942 }, { 117,2942 }, { 118,2942 },
 { 119,2942 }, { 120,2942 }, { 121,2942 }, { 122,2942 }, { 123,2942 },
 { 124,2942 }, { 125,2942 }, { 126,2942 }, { 127,2942 }, { 128,2942 },
 { 129,2942 }, { 130,2942 }, { 131,2942 }, { 132,2942 }, { 133,2942 },
 { 134,2942 }, { 135,2942 }, { 136,2942 }, { 137,2942 }, { 138,2942 },
 { 139,2942 }, { 140,2942 }, { 141,2942 }, { 142,2942 }, { 143,2942 },
 { 144,2942 }, { 145,2942 }, { 146,2942 }, { 147,2942 }, { 148,2942 },

 { 149,2942 }, { 150,2942 }, { 151,2942 }, { 152,2942 }, { 153,2942 },
 { 154,2942 }, { 155,2942 }, { 156,2942 }, { 157,2942 }, { 158,2942 },
 { 159,2942 }, { 160,2942 }, { 161,2942 }, { 162,2942 }, { 163,2942 },
 { 164,2942 }, { 165,2942 }, { 166,2942 }, { 167,2942 }, { 168,2942 },
 { 169,2942 }, { 170,2942 }, { 171,2942 }, { 172,2942 }, { 173,2942 },
 { 174,2942 }, { 175,2942 }, { 176,2942 }, { 177,2942 }, { 178,2942 },
 { 179,2942 }, { 180,2942 }, { 181,2942 }, { 182,2942 }, { 183,2942 },
 { 184,2942 }, { 185,2942 }, { 186,2942 }, { 187,2942 }, { 188,2942 },
 { 189,2942 }, { 190,2942 }, { 191,2942 }, { 192,2942 }, { 193,2942 },
 { 194,2942 }, { 195,2942 }, { 196,2942 }, { 197,2942 }, { 198,2942 },

 { 199,2942 }, { 200,2942 }, { 201,2942 }, { 202,2942 }, { 203,2942 },
 { 204,2942 }, { 205,2942 }, { 206,2942 }, { 207,2942 }, { 208,2942 },
 { 209,2942 }, { 210,2942 }, { 211,2942 }, { 212,2942 }, { 213,2942 },
 { 214,2942 }, { 215,2942 }, { 216,2942 }, { 217,2942 }, { 218,2942 },
 { 219,2942 }, { 220,2942 }, { 221,2942 }, { 222,2942 }, { 223,2942 },
 { 224,2942 }, { 225,2942 }, { 226,2942 }, { 227,2942 }, { 228,2942 },
 { 229,2942 }, { 230,2942 }, { 231,2942 }, { 232,2942 }, { 233,2942 },
 { 234,2942 }, { 235,2942 }, { 236,2942 }, { 237,2942 }, { 238,2942 },
 { 239,2942 }, { 240,2942 }, { 241,2942 }, { 242,2942 }, { 243,2942 },
 { 244,2942 }, { 245,2942 }, { 246,2942 }, { 247,2942 }, { 248,2942 },

 { 249,2942 }, { 250,2942 }, { 251,2942 }, { 252,2942 }, { 253,2942 },
 { 254,2942 }, { 255,2942 }, { 256,2942 }, { 0, 0 }, { 0,6992 },
 { 1,2684 }, { 2,2684 }, { 3,2684 }, { 4,2684 }, { 5,2684 },
 { 6,2684 }, { 7,2684 }, { 8,2684 }, { 9,2684 }, { 10,2684 },
 { 11,2684 }, { 12,2684 }, { 13,2684 }, { 14,2684 }, { 15,2684 },
 { 16,2684 }, { 17,2684 }, { 18,2684 }, { 19,2684 }, { 20,2684 },
 { 21,2684 }, { 22,2684 }, { 23,2684 }, { 24,2684 }, { 25,2684 },
 { 26,2684 }, { 27,2684 }, { 28,2684 }, { 29,2684 }, { 30,2684 },
 { 31,2684 }, { 32,2684 }, { 33,2684 }, { 34,2684 }, { 35,2684 },
 { 36,2684 }, { 37,2684 }, { 38,2684 }, { 39,1650 }, { 40,2684 },

 { 41,2684 }, { 42,2684 }, { 43,2684 }, { 44,2684 }, { 45,2684 },
 { 46,2684 }, { 47,2684 }, { 48,2684 }, { 49,2684 }, { 50,2684 },
 { 51,2684 }, { 52,2684 }, { 53,2684 }, { 54,2684 }, { 55,2684 },
 { 56,2684 }, { 57,2684 }, { 58,2684 }, { 59,2684 }, { 60,2684 },
 { 61,2684 }, { 62,2684 }, { 63,2684 }, { 64,2684 }, { 65,2684 },
 { 66,2684 }, { 67,2684 }, { 68,2684 }, { 69,2684 }, { 70,2684 },
 { 71,2684 }, { 72,2684 }, { 73,2684 }, { 74,2684 }, { 75,2684 },
 { 76,2684 }, { 77,2684 }, { 78,2684 }, { 79,2684 }, { 80,2684 },
 { 81,2684 }, { 82,2684 }, { 83,2684 }, { 84,2684 }, { 85,2684 },
 { 86,2684 }, { 87,2684 }, { 88,2684 }, { 89,2684 }, { 90,2684 },

 { 91,2684 }, { 92,2426 }, { 93,2684 }, { 94,2684 }, { 95,2684 },
 { 96,2684 }, { 97,2684 }, { 98,2684 }, { 99,2684 }, { 100,2684 },
 { 101,2684 }, { 102,2684 }, { 103,2684 }, { 104,2684 }, { 105,2684 },
 { 106,2684 }, { 107,2684 }, { 108,2684 }, { 109,2684 }, { 110,2684 },
 { 111,2684 }, { 112,2684 }, { 113,2684 }, { 114,2684 }, { 115,2684 },
 { 116,2684 }, { 117,2684 }, { 118,2684 }, { 119,2684 }, { 120,2684 },
 { 121,2684 }, { 122,2684 }, { 123,2684 }, { 124,2684 }, { 125,2684 },
 { 126,2684 }, { 127,2684 }, { 128,2684 }, { 129,2684 }, { 130,2684 },
 { 131,2684 }, { 132,2684 }, { 133,2684 }, { 134,2684 }, { 135,2684 },
 { 136,2684 }, { 137,2684 }, { 138,2684 }, { 139,2684 }, { 140,2684 },

 { 141,2684 }, { 142,2684 }, { 143,2684 }, { 144,2684 }, { 145,2684 },
 { 146,2684 }, { 147,2684 }, { 148,2684 }, { 149,2684 }, { 150,2684 },
 { 151,2684 }, { 152,2684 }, { 153,2684 }, { 154,2684 }, { 155,2684 },
 { 156,2684 }, { 157,2684 }, { 158,2684 }, { 159,2684 }, { 160,2684 },
 { 161,2684 }, { 162,2684 }, { 163,2684 }, { 164,2684 }, { 165,2684 },
 { 166,2684 }, { 167,2684 }, { 168,2684 }, { 169,2684 }, { 170,2684 },
 { 171,2684 }, { 172,2684 }, { 173,2684 }, { 174,2684 }, { 175,2684 },
 { 176,2684 }, { 177,2684 }, { 178,2684 }, { 179,2684 }, { 180,2684 },
 { 181,2684 }, { 182,2684 }, { 183,2684 }, { 184,2684 }, { 185,2684 },
 { 186,2684 }, { 187,2684 }, { 188,2684 }, { 189,2684 }, { 190,2684 },

 { 191,2684 }, { 192,2684 }, { 193,2684 }, { 194,2684 }, { 195,2684 },
 { 196,2684 }, { 197,2684 }, { 198,2684 }, { 199,2684 }, { 200,2684 },
 { 201,2684 }, { 202,2684 }, { 203,2684 }, { 204,2684 }, { 205,2684 },
 { 206,2684 }, { 207,2684 }, { 208,2684 }, { 209,2684 }, { 210,2684 },
 { 211,2684 }, { 212,2684 }, { 213,2684 }, { 214,2684 }, { 215,2684 },
 { 216,2684 }, { 217,2684 }, { 218,2684 }, { 219,2684 }, { 220,2684 },
 { 221,2684 }, { 222,2684 }, { 223,2684 }, { 224,2684 }, { 225,2684 },
 { 226,2684 }, { 227,2684 }, { 228,2684 }, { 229,2684 }, { 230,2684 },
 { 231,2684 }, { 232,2684 }, { 233,2684 }, { 234,2684 }, { 235,2684 },
 { 236,2684 }, { 237,2684 }, { 238,2684 }, { 239,2684 }, { 240,2684 },

 { 241,2684 }, { 242,2684 }, { 243,2684 }, { 244,2684 }, { 245,2684 },
 { 246,2684 }, { 247,2684 }, { 248,2684 }, { 249,2684 }, { 250,2684 },
 { 251,2684 }, { 252,2684 }, { 253,2684 }, { 254,2684 }, { 255,2684 },
 { 256,2684 }, { 0, 0 }, { 0,6734 }, { 1,1397 }, { 2,1397 },
 { 3,1397 }, { 4,1397 }, { 5,1397 }, { 6,1397 }, { 7,1397 },
 { 8,1397 }, { 9,1397 }, { 10,1397 }, { 11,1397 }, { 12,1397 },
 { 13,1397 }, { 14,1397 }, { 15,1397 }, { 16,1397 }, { 17,1397 },
 { 18,1397 }, { 19,1397 }, { 20,1397 }, { 21,1397 }, { 22,1397 },
 { 23,1397 }, { 24,1397 }, { 25,1397 }, { 26,1397 }, { 27,1397 },
 { 28,1397 }, { 29,1397 }, { 30,1397 }, { 31,1397 }, { 32,1397 },

 { 33,1397 }, { 34,1397 }, { 35,1397 }, { 36,1397 }, { 37,1397 },
 { 38,1397 }, { 39,1397 }, { 40,1397 }, { 41,1397 }, { 42,1397 },
 { 43,1397 }, { 44,1397 }, { 45,1397 }, { 46,1397 }, { 47,1397 },
 { 48,1397 }, { 49,1397 }, { 50,1397 }, { 51,1397 }, { 52,1397 },
 { 53,1397 }, { 54,1397 }, { 55,1397 }, { 56,1397 }, { 57,1397 },
 { 58,1397 }, { 59,1397 }, { 60,1397 }, { 61,1397 }, { 62,1397 },
 { 63,1397 }, { 64,1397 }, { 65,1397 }, { 66,1397 }, { 67,1397 },
 { 68,1397 }, { 69,1397 }, { 70,1397 }, { 71,1397 }, { 72,1397 },
 { 73,1397 }, { 74,1397 }, { 75,1397 }, { 76,1397 }, { 77,1397 },
 { 78,1397 }, { 79,1397 }, { 80,1397 }, { 81,1397 }, { 82,1397 },

 { 83,1397 }, { 84,1397 }, { 85,1397 }, { 86,1397 }, { 87,1397 },
 { 88,1397 }, { 89,1397 }, { 90,1397 }, { 91,1397 }, { 92,1403 },
 { 93,1397 }, { 94,1397 }, { 95,1397 }, { 96,1397 }, { 97,1397 },
 { 98,1397 }, { 99,1397 }, { 100,1397 }, { 101,1397 }, { 102,1397 },
 { 103,1397 }, { 104,1397 }, { 105,1397 }, { 106,1397 }, { 107,1397 },
 { 108,1397 }, { 109,1397 }, { 110,1397 }, { 111,1397 }, { 112,1397 },
 { 113,1397 }, { 114,1397 }, { 115,1397 }, { 116,1397 }, { 117,1397 },
 { 118,1397 }, { 119,1397 }, { 120,1397 }, { 121,1397 }, { 122,1397 },
 { 123,1397 }, { 124,1397 }, { 125,1397 }, { 126,1397 }, { 127,1397 },
 { 128,1397 }, { 129,1397 }, { 130,1397 }, { 131,1397 }, { 132,1397 },

 { 133,1397 }, { 134,1397 }, { 135,1397 }, { 136,1397 }, { 137,1397 },
 { 138,1397 }, { 139,1397 }, { 140,1397 }, { 141,1397 }, { 142,1397 },
 { 143,1397 }, { 144,1397 }, { 145,1397 }, { 146,1397 }, { 147,1397 },
 { 148,1397 }, { 149,1397 }, { 150,1397 }, { 151,1397 }, { 152,1397 },
 { 153,1397 }, { 154,1397 }, { 155,1397 }, { 156,1397 }, { 157,1397 },
 { 158,1397 }, { 159,1397 }, { 160,1397 }, { 161,1397 }, { 162,1397 },
 { 163,1397 }, { 164,1397 }, { 165,1397 }, { 166,1397 }, { 167,1397 },
 { 168,1397 }, { 169,1397 }, { 170,1397 }, { 171,1397 }, { 172,1397 },
 { 173,1397 }, { 174,1397 }, { 175,1397 }, { 176,1397 }, { 177,1397 },
 { 178,1397 }, { 179,1397 }, { 180,1397 }, { 181,1397 }, { 182,1397 },

 { 183,1397 }, { 184,1397 }, { 185,1397 }, { 186,1397 }, { 187,1397 },
 { 188,1397 }, { 189,1397 }, { 190,1397 }, { 191,1397 }, { 192,1397 },
 { 193,1397 }, { 194,1397 }, { 195,1397 }, { 196,1397 }, { 197,1397 },
 { 198,1397 }, { 199,1397 }, { 200,1397 }, { 201,1397 }, { 202,1397 },
 { 203,1397 }, { 204,1397 }, { 205,1397 }, { 206,1397 }, { 207,1397 },
 { 208,1397 }, { 209,1397 }, { 210,1397 }, { 211,1397 }, { 212,1397 },
 { 213,1397 }, { 214,1397 }, { 215,1397 }, { 216,1397 }, { 217,1397 },
 { 218,1397 }, { 219,1397 }, { 220,1397 }, { 221,1397 }, { 222,1397 },
 { 223,1397 }, { 224,1397 }, { 225,1397 }, { 226,1397 }, { 227,1397 },
 { 228,1397 }, { 229,1397 }, { 230,1397 }, { 231,1397 }, { 232,1397 },

 { 233,1397 }, { 234,1397 }, { 235,1397 }, { 236,1397 }, { 237,1397 },
 { 238,1397 }, { 239,1397 }, { 240,1397 }, { 241,1397 }, { 242,1397 },
 { 243,1397 }, { 244,1397 }, { 245,1397 }, { 246,1397 }, { 247,1397 },
 { 248,1397 }, { 249,1397 }, { 250,1397 }, { 251,1397 }, { 252,1397 },
 { 253,1397 }, { 254,1397 }, { 255,1397 }, { 256,1397 }, { 0, 0 },
 { 0,6476 }, { 1,1139 }, { 2,1139 }, { 3,1139 }, { 4,1139 },
 { 5,1139 }, { 6,1139 }, { 7,1139 }, { 8,1139 }, { 9,1139 },
 { 10,1139 }, { 11,1139 }, { 12,1139 }, { 13,1139 }, { 14,1139 },
 { 15,1139 }, { 16,1139 }, { 17,1139 }, { 18,1139 }, { 19,1139 },
 { 20,1139 }, { 21,1139 }, { 22,1139 }, { 23,1139 }, { 24,1139 },

 { 25,1139 }, { 26,1139 }, { 27,1139 }, { 28,1139 }, { 29,1139 },
 { 30,1139 }, { 31,1139 }, { 32,1139 }, { 33,1139 }, { 34,1139 },
 { 35,1139 }, { 36,1139 }, { 37,1139 }, { 38,1139 }, { 39,1139 },
 { 40,1139 }, { 41,1139 }, { 42,1139 }, { 43,1139 }, { 44,1139 },
 { 45,1139 }, { 46,1139 }, { 47,1139 }, { 48,1139 }, { 49,1139 },
 { 50,1139 }, { 51,1139 }, { 52,1139 }, { 53,1139 }, { 54,1139 },
 { 55,1139 }, { 56,1139 }, { 57,1139 }, { 58,1139 }, { 59,1139 },
 { 60,1139 }, { 61,1139 }, { 62,1139 }, { 63,1139 }, { 64,1139 },
 { 65,1139 }, { 66,1139 }, { 67,1139 }, { 68,1139 }, { 69,1139 },
 { 70,1139 }, { 71,1139 }, { 72,1139 }, { 73,1139 }, { 74,1139 },

 { 75,1139 }, { 76,1139 }, { 77,1139 }, { 78,1139 }, { 79,1139 },
 { 80,1139 }, { 81,1139 }, { 82,1139 }, { 83,1139 }, { 84,1139 },
 { 85,1139 }, { 86,1139 }, { 87,1139 }, { 88,1139 }, { 89,1139 },
 { 90,1139 }, { 91,1139 }, { 92,1145 }, { 93,1139 }, { 94,1139 },
 { 95,1139 }, { 96,1139 }, { 97,1139 }, { 98,1139 }, { 99,1139 },
 { 100,1139 }, { 101,1139 }, { 102,1139 }, { 103,1139 }, { 104,1139 },
 { 105,1139 }, { 106,1139 }, { 107,1139 }, { 108,1139 }, { 109,1139 },
 { 110,1139 }, { 111,1139 }, { 112,1139 }, { 113,1139 }, { 114,1139 },
 { 115,1139 }, { 116,1139 }, { 117,1139 }, { 118,1139 }, { 119,1139 },
 { 120,1139 }, { 121,1139 }, { 122,1139 }, { 123,1139 }, { 124,1139 },

 { 125,1139 }, { 126,1139 }, { 127,1139 }, { 128,1139 }, { 129,1139 },
 { 130,1139 }, { 131,1139 }, { 132,1139 }, { 133,1139 }, { 134,1139 },
 { 135,1139 }, { 136,1139 }, { 137,1139 }, { 138,1139 }, { 139,1139 },
 { 140,1139 }, { 141,1139 }, { 142,1139 }, { 143,1139 }, { 144,1139 },
 { 145,1139 }, { 146,1139 }, { 147,1139 }, { 148,1139 }, { 149,1139 },
 { 150,1139 }, { 151,1139 }, { 152,1139 }, { 153,1139 }, { 154,1139 },
 { 155,1139 }, { 156,1139 }, { 157,1139 }, { 158,1139 }, { 159,1139 },
 { 160,1139 }, { 161,1139 }, { 162,1139 }, { 163,1139 }, { 164,1139 },
 { 165,1139 }, { 166,1139 }, { 167,1139 }, { 168,1139 }, { 169,1139 },
 { 170,1139 }, { 171,1139 }, { 172,1139 }, { 173,1139 }, { 174,1139 },

 { 175,1139 }, { 176,1139 }, { 177,1139 }, { 178,1139 }, { 179,1139 },
 { 180,1139 }, { 181,1139 }, { 182,1139 }, { 183,1139 }, { 184,1139 },
 { 185,1139 }, { 186,1139 }, { 187,1139 }, { 188,1139 }, { 189,1139 },
 { 190,1139 }, { 191,1139 }, { 192,1139 }, { 193,1139 }, { 194,1139 },
 { 195,1139 }, { 196,1139 }, { 197,1139 }, { 198,1139 }, { 199,1139 },
 { 200,1139 }, { 201,1139 }, { 202,1139 }, { 203,1139 }, { 204,1139 },
 { 205,1139 }, { 206,1139 }, { 207,1139 }, { 208,1139 }, { 209,1139 },
 { 210,1139 }, { 211,1139 }, { 212,1139 }, { 213,1139 }, { 214,1139 },
 { 215,1139 }, { 216,1139 }, { 217,1139 }, { 218,1139 }, { 219,1139 },
 { 220,1139 }, { 221,1139 }, { 222,1139 }, { 223,1139 }, { 224,1139 },

 { 225,1139 }, { 226,1139 }, { 227,1139 }, { 228,1139 }, { 229,1139 },
 { 230,1139 }, { 231,1139 }, { 232,1139 }, { 233,1139 }, { 234,1139 },
 { 235,1139 }, { 236,1139 }, { 237,1139 }, { 238,1139 }, { 239,1139 },
 { 240,1139 }, { 241,1139 }, { 242,1139 }, { 243,1139 }, { 244,1139 },
 { 245,1139 }, { 246,1139 }, { 247,1139 }, { 248,1139 }, { 249,1139 },
 { 250,1139 }, { 251,1139 }, { 252,1139 }, { 253,1139 }, { 254,1139 },
 { 255,1139 }, { 256,1139 }, { 0, 0 }, { 0,6218 }, { 1,2168 },
 { 2,2168 }, { 3,2168 }, { 4,2168 }, { 5,2168 }, { 6,2168 },
 { 7,2168 }, { 8,2168 }, { 9,2168 }, { 10,2168 }, { 11,2168 },
 { 12,2168 }, { 13,2168 }, { 14,2168 }, { 15,2168 }, { 16,2168 },

 { 17,2168 }, { 18,2168 }, { 19,2168 }, { 20,2168 }, { 21,2168 },
 { 22,2168 }, { 23,2168 }, { 24,2168 }, { 25,2168 }, { 26,2168 },
 { 27,2168 }, { 28,2168 }, { 29,2168 }, { 30,2168 }, { 31,2168 },
 { 32,2168 }, { 33,2168 }, { 34,2168 }, { 35,2168 }, { 36,2168 },
 { 37,2168 }, { 38,2168 }, { 39,2168 }, { 40,2168 }, { 41,2168 },
 { 42,2168 }, { 43,2168 }, { 44,2168 }, { 45,2168 }, { 46,2168 },
 { 47,2168 }, { 48,2168 }, { 49,2168 }, { 50,2168 }, { 51,2168 },
 { 52,2168 }, { 53,2168 }, { 54,2168 }, { 55,2168 }, { 56,2168 },
 { 57,2168 }, { 58,2168 }, { 59,2168 }, { 60,2168 }, { 61,2168 },
 { 62,2168 }, { 63,2168 }, { 64,2168 }, { 65,2168 }, { 66,2168 },

 { 67,2168 }, { 68,2168 }, { 69,2168 }, { 70,2168 }, { 71,2168 },
 { 72,2168 }, { 73,2168 }, { 74,2168 }, { 75,2168 }, { 76,2168 },
 { 77,2168 }, { 78,2168 }, { 79,2168 }, { 80,2168 }, { 81,2168 },
 { 82,2168 }, { 83,2168 }, { 84,2168 }, { 85,2168 }, { 86,2168 },
 { 87,2168 }, { 88,2168 }, { 89,2168 }, { 90,2168 }, { 91,2168 },
 { 92,2168 }, { 93,2168 }, { 94,2168 }, { 95,2168 }, { 96, 906 },
 { 97,2168 }, { 98,2168 }, { 99,2168 }, { 100,2168 }, { 101,2168 },
 { 102,2168 }, { 103,2168 }, { 104,2168 }, { 105,2168 }, { 106,2168 },
 { 107,2168 }, { 108,2168 }, { 109,2168 }, { 110,2168 }, { 111,2168 },
 { 112,2168 }, { 113,2168 }, { 114,2168 }, { 115,2168 }, { 116,2168 },

 { 117,2168 }, { 118,2168 }, { 119,2168 }, { 120,2168 }, { 121,2168 },
 { 122,2168 }, { 123,2168 }, { 124,2168 }, { 125,2168 }, { 126,2168 },
 { 127,2168 }, { 128,2168 }, { 129,2168 }, { 130,2168 }, { 131,2168 },
 { 132,2168 }, { 133,2168 }, { 134,2168 }, { 135,2168 }, { 136,2168 },
 { 137,2168 }, { 138,2168 }, { 139,2168 }, { 140,2168 }, { 141,2168 },
 { 142,2168 }, { 143,2168 }, { 144,2168 }, { 145,2168 }, { 146,2168 },
 { 147,2168 }, { 148,2168 }, { 149,2168 }, { 150,2168 }, { 151,2168 },
 { 152,2168 }, { 153,2168 }, { 154,2168 }, { 155,2168 }, { 156,2168 },
 { 157,2168 }, { 158,2168 }, { 159,2168 }, { 160,2168 }, { 161,2168 },
 { 162,2168 }, { 163,2168 }, { 164,2168 }, { 165,2168 }, { 166,2168 },

 { 167,2168 }, { 168,2168 }, { 169,2168 }, { 170,2168 }, { 171,2168 },
 { 172,2168 }, { 173,2168 }, { 174,2168 }, { 175,2168 }, { 176,2168 },
 { 177,2168 }, { 178,2168 }, { 179,2168 }, { 180,2168 }, { 181,2168 },
 { 182,2168 }, { 183,2168 }, { 184,2168 }, { 185,2168 }, { 186,2168 },
 { 187,2168 }, { 188,2168 }, { 189,2168 }, { 190,2168 }, { 191,2168 },
 { 192,2168 }, { 193,2168 }, { 194,2168 }, { 195,2168 }, { 196,2168 },
 { 197,2168 }, { 198,2168 }, { 199,2168 }, { 200,2168 }, { 201,2168 },
 { 202,2168 }, { 203,2168 }, { 204,2168 }, { 205,2168 }, { 206,2168 },
 { 207,2168 }, { 208,2168 }, { 209,2168 }, { 210,2168 }, { 211,2168 },
 { 212,2168 }, { 213,2168 }, { 214,2168 }, { 215,2168 }, { 216,2168 },

 { 217,2168 }, { 218,2168 }, { 219,2168 }, { 220,2168 }, { 221,2168 },
 { 222,2168 }, { 223,2168 }, { 224,2168 }, { 225,2168 }, { 226,2168 },
 { 227,2168 }, { 228,2168 }, { 229,2168 }, { 230,2168 }, { 231,2168 },
 { 232,2168 }, { 233,2168 }, { 234,2168 }, { 235,2168 }, { 236,2168 },
 { 237,2168 }, { 238,2168 }, { 239,2168 }, { 240,2168 }, { 241,2168 },
 { 242,2168 }, { 243,2168 }, { 244,2168 }, { 245,2168 }, { 246,2168 },
 { 247,2168 }, { 248,2168 }, { 249,2168 }, { 250,2168 }, { 251,2168 },
 { 252,2168 }, { 253,2168 }, { 254,2168 }, { 255,2168 }, { 256,2168 },
 { 0, 0 }, { 0,5960 }, { 1,1910 }, { 2,1910 }, { 3,1910 },
 { 4,1910 }, { 5,1910 }, { 6,1910 }, { 7,1910 }, { 8,1910 },

 { 9,1910 }, { 10,1910 }, { 11,1910 }, { 12,1910 }, { 13,1910 },
 { 14,1910 }, { 15,1910 }, { 16,1910 }, { 17,1910 }, { 18,1910 },
 { 19,1910 }, { 20,1910 }, { 21,1910 }, { 22,1910 }, { 23,1910 },
 { 24,1910 }, { 25,1910 }, { 26,1910 }, { 27,1910 }, { 28,1910 },
 { 29,1910 }, { 30,1910 }, { 31,1910 }, { 32,1910 }, { 33,1910 },
 { 34,1910 }, { 35,1910 }, { 36,1910 }, { 37,1910 }, { 38,1910 },
 { 39,1910 }, { 40,1910 }, { 41,1910 }, { 42,1910 }, { 43,1910 },
 { 44,1910 }, { 45,1910 }, { 46,1910 }, { 47,1910 }, { 48,1910 },
 { 49,1910 }, { 50,1910 }, { 51,1910 }, { 52,1910 }, { 53,1910 },
 { 54,1910 }, { 55,1910 }, { 56,1910 }, { 57,1910 }, { 58,1910 },

 { 59,1910 }, { 60,1910 }, { 61,1910 }, { 62,1910 }, { 63,1910 },
 { 64,1910 }, { 65,1910 }, { 66,1910 }, { 67,1910 }, { 68,1910 },
 { 69,1910 }, { 70,1910 }, { 71,1910 }, { 72,1910 }, { 73,1910 },
 { 74,1910 }, { 75,1910 }, { 76,1910 }, { 77,1910 }, { 78,1910 },
 { 79,1910 }, { 80,1910 }, { 81,1910 }, { 82,1910 }, { 83,1910 },
 { 84,1910 }, { 85,1910 }, { 86,1910 }, { 87,1910 }, { 88,1910 },
 { 89,1910 }, { 90,1910 }, { 91,1910 }, { 92,1910 }, { 93,1910 },
 { 94,1910 }, { 95,1910 }, { 96, 648 }, { 97,1910 }, { 98,1910 },
 { 99,1910 }, { 100,1910 }, { 101,1910 }, { 102,1910 }, { 103,1910 },
 { 104,1910 }, { 105,1910 }, { 106,1910 }, { 107,1910 }, { 108,1910 },

 { 109,1910 }, { 110,1910 }, { 111,1910 }, { 112,1910 }, { 113,1910 },
 { 114,1910 }, { 115,1910 }, { 116,1910 }, { 117,1910 }, { 118,1910 },
 { 119,1910 }, { 120,1910 }, { 121,1910 }, { 122,1910 }, { 123,1910 },
 { 124,1910 }, { 125,1910 }, { 126,1910 }, { 127,1910 }, { 128,1910 },
 { 129,1910 }, { 130,1910 }, { 131,1910 }, { 132,1910 }, { 133,1910 },
 { 134,1910 }, { 135,1910 }, { 136,1910 }, { 137,1910 }, { 138,1910 },
 { 139,1910 }, { 140,1910 }, { 141,1910 }, { 142,1910 }, { 143,1910 },
 { 144,1910 }, { 145,1910 }, { 146,1910 }, { 147,1910 }, { 148,1910 },
 { 149,1910 }, { 150,1910 }, { 151,1910 }, { 152,1910 }, { 153,1910 },
 { 154,1910 }, { 155,1910 }, { 156,1910 }, { 157,1910 }, { 158,1910 },

 { 159,1910 }, { 160,1910 }, { 161,1910 }, { 162,1910 }, { 163,1910 },
 { 164,1910 }, { 165,1910 }, { 166,1910 }, { 167,1910 }, { 168,1910 },
 { 169,1910 }, { 170,1910 }, { 171,1910 }, { 172,1910 }, { 173,1910 },
 { 174,1910 }, { 175,1910 }, { 176,1910 }, { 177,1910 }, { 178,1910 },
 { 179,1910 }, { 180,1910 }, { 181,1910 }, { 182,1910 }, { 183,1910 },
 { 184,1910 }, { 185,1910 }, { 186,1910 }, { 187,1910 }, { 188,1910 },
 { 189,1910 }, { 190,1910 }, { 191,1910 }, { 192,1910 }, { 193,1910 },
 { 194,1910 }, { 195,1910 }, { 196,1910 }, { 197,1910 }, { 198,1910 },
 { 199,1910 }, { 200,1910 }, { 201,1910 }, { 202,1910 }, { 203,1910 },
 { 204,1910 }, { 205,1910 }, { 206,1910 }, { 207,1910 }, { 208,1910 },

 { 209,1910 }, { 210,1910 }, { 211,1910 }, { 212,1910 }, { 213,1910 },
 { 214,1910 }, { 215,1910 }, { 216,1910 }, { 217,1910 }, { 218,1910 },
 { 219,1910 }, { 220,1910 }, { 221,1910 }, { 222,1910 }, { 223,1910 },
 { 224,1910 }, { 225,1910 }, { 226,1910 }, { 227,1910 }, { 228,1910 },
 { 229,1910 }, { 230,1910 }, { 231,1910 }, { 232,1910 }, { 233,1910 },
 { 234,1910 }, { 235,1910 }, { 236,1910 }, { 237,1910 }, { 238,1910 },
 { 239,1910 }, { 240,1910 }, { 241,1910 }, { 242,1910 }, { 243,1910 },
 { 244,1910 }, { 245,1910 }, { 246,1910 }, { 247,1910 }, { 248,1910 },
 { 249,1910 }, { 250,1910 }, { 251,1910 }, { 252,1910 }, { 253,1910 },
 { 254,1910 }, { 255,1910 }, { 256,1910 }, { 0, 40 }, { 0,5702 },

 { 0, 1 }, { 0,5700 }, { 0, 14 }, { 0,5698 }, { 0, 0 },
 { 0, 1 }, { 0,5695 }, { 0, 40 }, { 0,5693 }, { 0, 0 },
 { 9,1908 }, { 10,1908 }, { 11,1908 }, { 12,1908 }, { 13,1908 },
 { 9,1903 }, { 10,1903 }, { 11,1903 }, { 12,1903 }, { 13,1903 },
 { 0, 39 }, { 0,5680 }, { 0, 15 }, { 0,5678 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 32,1908 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 32,1903 }, { 0, 39 },
 { 0,5661 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 39 }, { 0,5644 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 65,1903 }, { 66,1903 },
 { 67,1903 }, { 68,1903 }, { 69,1903 }, { 70,1903 }, { 71,1903 },
 { 72,1903 }, { 73,1903 }, { 74,1903 }, { 75,1903 }, { 76,1903 },
 { 77,1903 }, { 78,1903 }, { 79,1903 }, { 80,1903 }, { 81,1903 },
 { 82,1903 }, { 83,1903 }, { 84,1903 }, { 85,1903 }, { 86,1903 },
 { 87,1903 }, { 88,1903 }, { 89,1903 }, { 90,1903 }, { 42, 338 },

 { 0, 0 }, { 61, 351 }, { 0, 0 }, { 95,1903 }, { 47,2199 },
 { 97,1903 }, { 98,1903 }, { 99,1903 }, { 100,1903 }, { 101,1903 },
 { 102,1903 }, { 103,1903 }, { 104,1903 }, { 105,1903 }, { 106,1903 },
 { 107,1903 }, { 108,1903 }, { 109,1903 }, { 110,1903 }, { 111,1903 },
 { 112,1903 }, { 113,1903 }, { 114,1903 }, { 115,1903 }, { 116,1903 },
 { 117,1903 }, { 118,1903 }, { 119,1903 }, { 120,1903 }, { 121,1903 },
 { 122,1903 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 128,1903 }, { 129,1903 }, { 130,1903 }, { 131,1903 },
 { 132,1903 }, { 133,1903 }, { 134,1903 }, { 135,1903 }, { 136,1903 },
 { 137,1903 }, { 138,1903 }, { 139,1903 }, { 140,1903 }, { 141,1903 },

 { 142,1903 }, { 143,1903 }, { 144,1903 }, { 145,1903 }, { 146,1903 },
 { 147,1903 }, { 148,1903 }, { 149,1903 }, { 150,1903 }, { 151,1903 },
 { 152,1903 }, { 153,1903 }, { 154,1903 }, { 155,1903 }, { 156,1903 },
 { 157,1903 }, { 158,1903 }, { 159,1903 }, { 160,1903 }, { 161,1903 },
 { 162,1903 }, { 163,1903 }, { 164,1903 }, { 165,1903 }, { 166,1903 },
 { 167,1903 }, { 168,1903 }, { 169,1903 }, { 170,1903 }, { 171,1903 },
 { 172,1903 }, { 173,1903 }, { 174,1903 }, { 175,1903 }, { 176,1903 },
 { 177,1903 }, { 178,1903 }, { 179,1903 }, { 180,1903 }, { 181,1903 },
 { 182,1903 }, { 183,1903 }, { 184,1903 }, { 185,1903 }, { 186,1903 },
 { 187,1903 }, { 188,1903 }, { 189,1903 }, { 190,1903 }, { 191,1903 },

 { 192,1903 }, { 193,1903 }, { 194,1903 }, { 195,1903 }, { 196,1903 },
 { 197,1903 }, { 198,1903 }, { 199,1903 }, { 200,1903 }, { 201,1903 },
 { 202,1903 }, { 203,1903 }, { 204,1903 }, { 205,1903 }, { 206,1903 },
 { 207,1903 }, { 208,1903 }, { 209,1903 }, { 210,1903 }, { 211,1903 },
 { 212,1903 }, { 213,1903 }, { 214,1903 }, { 215,1903 }, { 216,1903 },
 { 217,1903 }, { 218,1903 }, { 219,1903 }, { 220,1903 }, { 221,1903 },
 { 222,1903 }, { 223,1903 }, { 224,1903 }, { 225,1903 }, { 226,1903 },
 { 227,1903 }, { 228,1903 }, { 229,1903 }, { 230,1903 }, { 231,1903 },
 { 232,1903 }, { 233,1903 }, { 234,1903 }, { 235,1903 }, { 236,1903 },
 { 237,1903 }, { 238,1903 }, { 239,1903 }, { 240,1903 }, { 241,1903 },

 { 242,1903 }, { 243,1903 }, { 244,1903 }, { 245,1903 }, { 246,1903 },
 { 247,1903 }, { 248,1903 }, { 249,1903 }, { 250,1903 }, { 251,1903 },
 { 252,1903 }, { 253,1903 }, { 254,1903 }, { 255,1903 }, { 0, 39 },
 { 0,5436 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 6 }, { 0,5424 }, { 0, 39 }, { 0,5422 },
 { 0, 39 }, { 0,5420 }, { 0, 39 }, { 0,5418 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 39 }, { 0,5405 }, { 0, 0 }, { 0, 6 }, { 0,5402 },

 { 0, 27 }, { 0,5400 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 46, 128 }, { 0, 0 }, { 48,1903 }, { 49,1903 },
 { 50,1903 }, { 51,1903 }, { 52,1903 }, { 53,1903 }, { 54,1903 },
 { 55,1903 }, { 56,1903 }, { 57,1903 }, { 46,2237 }, { 0, 0 },
 { 48,2259 }, { 49,2259 }, { 50,2259 }, { 51,2259 }, { 52,2259 },
 { 53,2259 }, { 54,2259 }, { 55,2259 }, { 56,2259 }, { 57,2259 },
 { 0, 0 }, { 0, 0 }, { 58, 123 }, { 0, 3 }, { 0,5362 },
 { 0, 24 }, { 0,5360 }, { 61, 123 }, { 62, 125 }, { 0, 0 },
 { 46,2215 }, { 69,2296 }, { 48,2237 }, { 49,2237 }, { 50,2237 },

 { 51,2237 }, { 52,2237 }, { 53,2237 }, { 54,2237 }, { 55,2237 },
 { 56,2237 }, { 57,2237 }, { 61, 125 }, { 0, 25 }, { 0,5342 },
 { 0, 0 }, { 0, 26 }, { 0,5339 }, { 0, 23 }, { 0,5337 },
 { 88,2318 }, { 0, 0 }, { 0, 0 }, { 69,2274 }, { 0, 23 },
 { 0,5331 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 101,2296 }, { 0, 0 },
 { 0, 0 }, { 42,1588 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 47,1590 }, { 0, 0 }, { 0, 30 }, { 0,5312 },
 { 0, 36 }, { 0,5310 }, { 0, 35 }, { 0,5308 }, { 0, 2 },
 { 0,5306 }, { 0, 0 }, { 120,2318 }, { 36,2271 }, { 0, 0 },

 { 101,2274 }, { 0, 38 }, { 0,5299 }, { 0, 33 }, { 0,5297 },
 { 0, 32 }, { 0,5295 }, { 0, 37 }, { 0,5293 }, { 126, 125 },
 { 48,2271 }, { 49,2271 }, { 50,2271 }, { 51,2271 }, { 52,2271 },
 { 53,2271 }, { 54,2271 }, { 55,2271 }, { 56,2271 }, { 57,2271 },
 { 0, 34 }, { 0,5280 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 65,2271 }, { 66,2271 }, { 67,2271 },
 { 68,2271 }, { 69,2271 }, { 70,2271 }, { 71,2271 }, { 72,2271 },
 { 73,2271 }, { 74,2271 }, { 75,2271 }, { 76,2271 }, { 77,2271 },
 { 78,2271 }, { 79,2271 }, { 80,2271 }, { 81,2271 }, { 82,2271 },
 { 83,2271 }, { 84,2271 }, { 85,2271 }, { 86,2271 }, { 87,2271 },

 { 88,2271 }, { 89,2271 }, { 90,2271 }, { 0, 0 }, { 0, 0 },
 { 85,3421 }, { 0, 0 }, { 95,2271 }, { 0, 0 }, { 97,2271 },
 { 98,2271 }, { 99,2271 }, { 100,2271 }, { 101,2271 }, { 102,2271 },
 { 103,2271 }, { 104,2271 }, { 105,2271 }, { 106,2271 }, { 107,2271 },
 { 108,2271 }, { 109,2271 }, { 110,2271 }, { 111,2271 }, { 112,2271 },
 { 113,2271 }, { 114,2271 }, { 115,2271 }, { 116,2271 }, { 117,2271 },
 { 118,2271 }, { 119,2271 }, { 120,2271 }, { 121,2271 }, { 122,2271 },
 { 96,1546 }, { 0, 0 }, { 117,3444 }, { 0, 0 }, { 0, 0 },
 { 128,2271 }, { 129,2271 }, { 130,2271 }, { 131,2271 }, { 132,2271 },
 { 133,2271 }, { 134,2271 }, { 135,2271 }, { 136,2271 }, { 137,2271 },

 { 138,2271 }, { 139,2271 }, { 140,2271 }, { 141,2271 }, { 142,2271 },
 { 143,2271 }, { 144,2271 }, { 145,2271 }, { 146,2271 }, { 147,2271 },
 { 148,2271 }, { 149,2271 }, { 150,2271 }, { 151,2271 }, { 152,2271 },
 { 153,2271 }, { 154,2271 }, { 155,2271 }, { 156,2271 }, { 157,2271 },
 { 158,2271 }, { 159,2271 }, { 160,2271 }, { 161,2271 }, { 162,2271 },
 { 163,2271 }, { 164,2271 }, { 165,2271 }, { 166,2271 }, { 167,2271 },
 { 168,2271 }, { 169,2271 }, { 170,2271 }, { 171,2271 }, { 172,2271 },
 { 173,2271 }, { 174,2271 }, { 175,2271 }, { 176,2271 }, { 177,2271 },
 { 178,2271 }, { 179,2271 }, { 180,2271 }, { 181,2271 }, { 182,2271 },
 { 183,2271 }, { 184,2271 }, { 185,2271 }, { 186,2271 }, { 187,2271 },

 { 188,2271 }, { 189,2271 }, { 190,2271 }, { 191,2271 }, { 192,2271 },
 { 193,2271 }, { 194,2271 }, { 195,2271 }, { 196,2271 }, { 197,2271 },
 { 198,2271 }, { 199,2271 }, { 200,2271 }, { 201,2271 }, { 202,2271 },
 { 203,2271 }, { 204,2271 }, { 205,2271 }, { 206,2271 }, { 207,2271 },
 { 208,2271 }, { 209,2271 }, { 210,2271 }, { 211,2271 }, { 212,2271 },
 { 213,2271 }, { 214,2271 }, { 215,2271 }, { 216,2271 }, { 217,2271 },
 { 218,2271 }, { 219,2271 }, { 220,2271 }, { 221,2271 }, { 222,2271 },
 { 223,2271 }, { 224,2271 }, { 225,2271 }, { 226,2271 }, { 227,2271 },
 { 228,2271 }, { 229,2271 }, { 230,2271 }, { 231,2271 }, { 232,2271 },
 { 233,2271 }, { 234,2271 }, { 235,2271 }, { 236,2271 }, { 237,2271 },

 { 238,2271 }, { 239,2271 }, { 240,2271 }, { 241,2271 }, { 242,2271 },
 { 243,2271 }, { 244,2271 }, { 245,2271 }, { 246,2271 }, { 247,2271 },
 { 248,2271 }, { 249,2271 }, { 250,2271 }, { 251,2271 }, { 252,2271 },
 { 253,2271 }, { 254,2271 }, { 255,2271 }, { 0, 3 }, { 0,5082 },
 { 1,2271 }, { 2,2271 }, { 3,2271 }, { 4,2271 }, { 5,2271 },
 { 6,2271 }, { 7,2271 }, { 8,2271 }, { 9,2271 }, { 10,2271 },
 { 11,2271 }, { 12,2271 }, { 13,2271 }, { 14,2271 }, { 15,2271 },
 { 16,2271 }, { 17,2271 }, { 18,2271 }, { 19,2271 }, { 20,2271 },
 { 21,2271 }, { 22,2271 }, { 23,2271 }, { 24,2271 }, { 25,2271 },
 { 26,2271 }, { 27,2271 }, { 28,2271 }, { 29,2271 }, { 30,2271 },

 { 31,2271 }, { 32,2271 }, { 33,2271 }, { 34,2271 }, { 35,2271 },
 { 36,2271 }, { 37,2271 }, { 38,2271 }, { 39,2271 }, { 40,2271 },
 { 41,2271 }, { 0, 0 }, { 43,2271 }, { 44,2271 }, { 45,2271 },
 { 46,2271 }, { 47,2271 }, { 48,2271 }, { 49,2271 }, { 50,2271 },
 { 51,2271 }, { 52,2271 }, { 53,2271 }, { 54,2271 }, { 55,2271 },
 { 56,2271 }, { 57,2271 }, { 58,2271 }, { 59,2271 }, { 60,2271 },
 { 61,2271 }, { 62,2271 }, { 63,2271 }, { 64,2271 }, { 65,2271 },
 { 66,2271 }, { 67,2271 }, { 68,2271 }, { 69,2271 }, { 70,2271 },
 { 71,2271 }, { 72,2271 }, { 73,2271 }, { 74,2271 }, { 75,2271 },
 { 76,2271 }, { 77,2271 }, { 78,2271 }, { 79,2271 }, { 80,2271 },

 { 81,2271 }, { 82,2271 }, { 83,2271 }, { 84,2271 }, { 85,2271 },
 { 86,2271 }, { 87,2271 }, { 88,2271 }, { 89,2271 }, { 90,2271 },
 { 91,2271 }, { 92,2271 }, { 93,2271 }, { 94,2271 }, { 95,2271 },
 { 96,2271 }, { 97,2271 }, { 98,2271 }, { 99,2271 }, { 100,2271 },
 { 101,2271 }, { 102,2271 }, { 103,2271 }, { 104,2271 }, { 105,2271 },
 { 106,2271 }, { 107,2271 }, { 108,2271 }, { 109,2271 }, { 110,2271 },
 { 111,2271 }, { 112,2271 }, { 113,2271 }, { 114,2271 }, { 115,2271 },
 { 116,2271 }, { 117,2271 }, { 118,2271 }, { 119,2271 }, { 120,2271 },
 { 121,2271 }, { 122,2271 }, { 123,2271 }, { 124,2271 }, { 125,2271 },
 { 126,2271 }, { 127,2271 }, { 128,2271 }, { 129,2271 }, { 130,2271 },

 { 131,2271 }, { 132,2271 }, { 133,2271 }, { 134,2271 }, { 135,2271 },
 { 136,2271 }, { 137,2271 }, { 138,2271 }, { 139,2271 }, { 140,2271 },
 { 141,2271 }, { 142,2271 }, { 143,2271 }, { 144,2271 }, { 145,2271 },
 { 146,2271 }, { 147,2271 }, { 148,2271 }, { 149,2271 }, { 150,2271 },
 { 151,2271 }, { 152,2271 }, { 153,2271 }, { 154,2271 }, { 155,2271 },
 { 156,2271 }, { 157,2271 }, { 158,2271 }, { 159,2271 }, { 160,2271 },
 { 161,2271 }, { 162,2271 }, { 163,2271 }, { 164,2271 }, { 165,2271 },
 { 166,2271 }, { 167,2271 }, { 168,2271 }, { 169,2271 }, { 170,2271 },
 { 171,2271 }, { 172,2271 }, { 173,2271 }, { 174,2271 }, { 175,2271 },
 { 176,2271 }, { 177,2271 }, { 178,2271 }, { 179,2271 }, { 180,2271 },

 { 181,2271 }, { 182,2271 }, { 183,2271 }, { 184,2271 }, { 185,2271 },
 { 186,2271 }, { 187,2271 }, { 188,2271 }, { 189,2271 }, { 190,2271 },
 { 191,2271 }, { 192,2271 }, { 193,2271 }, { 194,2271 }, { 195,2271 },
 { 196,2271 }, { 197,2271 }, { 198,2271 }, { 199,2271 }, { 200,2271 },
 { 201,2271 }, { 202,2271 }, { 203,2271 }, { 204,2271 }, { 205,2271 },
 { 206,2271 }, { 207,2271 }, { 208,2271 }, { 209,2271 }, { 210,2271 },
 { 211,2271 }, { 212,2271 }, { 213,2271 }, { 214,2271 }, { 215,2271 },
 { 216,2271 }, { 217,2271 }, { 218,2271 }, { 219,2271 }, { 220,2271 },
 { 221,2271 }, { 222,2271 }, { 223,2271 }, { 224,2271 }, { 225,2271 },
 { 226,2271 }, { 227,2271 }, { 228,2271 }, { 229,2271 }, { 230,2271 },

 { 231,2271 }, { 232,2271 }, { 233,2271 }, { 234,2271 }, { 235,2271 },
 { 236,2271 }, { 237,2271 }, { 238,2271 }, { 239,2271 }, { 240,2271 },
 { 241,2271 }, { 242,2271 }, { 243,2271 }, { 244,2271 }, { 245,2271 },
 { 246,2271 }, { 247,2271 }, { 248,2271 }, { 249,2271 }, { 250,2271 },
 { 251,2271 }, { 252,2271 }, { 253,2271 }, { 254,2271 }, { 255,2271 },
 { 256,2271 }, { 0, 16 }, { 0,4824 }, { 1,2271 }, { 2,2271 },
 { 3,2271 }, { 4,2271 }, { 5,2271 }, { 6,2271 }, { 7,2271 },
 { 8,2271 }, { 9,2271 }, { 10,2271 }, { 11,2271 }, { 12,2271 },
 { 13,2271 }, { 14,2271 }, { 15,2271 }, { 16,2271 }, { 17,2271 },
 { 18,2271 }, { 19,2271 }, { 20,2271 }, { 21,2271 }, { 22,2271 },

 { 23,2271 }, { 24,2271 }, { 25,2271 }, { 26,2271 }, { 27,2271 },
 { 28,2271 }, { 29,2271 }, { 30,2271 }, { 31,2271 }, { 32,2271 },
 { 33,2271 }, { 0, 0 }, { 35,2271 }, { 36,2271 }, { 37,2271 },
 { 38,2271 }, { 39,2271 }, { 40,2271 }, { 41,2271 }, { 42,2271 },
 { 43,2271 }, { 44,2271 }, { 45,2271 }, { 46,2271 }, { 47,2271 },
 { 48,2271 }, { 49,2271 }, { 50,2271 }, { 51,2271 }, { 52,2271 },
 { 53,2271 }, { 54,2271 }, { 55,2271 }, { 56,2271 }, { 57,2271 },
 { 58,2271 }, { 59,2271 }, { 60,2271 }, { 61,2271 }, { 62,2271 },
 { 63,2271 }, { 64,2271 }, { 65,2271 }, { 66,2271 }, { 67,2271 },
 { 68,2271 }, { 69,2271 }, { 70,2271 }, { 71,2271 }, { 72,2271 },

 { 73,2271 }, { 74,2271 }, { 75,2271 }, { 76,2271 }, { 77,2271 },
 { 78,2271 }, { 79,2271 }, { 80,2271 }, { 81,2271 }, { 82,2271 },
 { 83,2271 }, { 84,2271 }, { 85,2271 }, { 86,2271 }, { 87,2271 },
 { 88,2271 }, { 89,2271 }, { 90,2271 }, { 91,2271 }, { 0, 0 },
 { 93,2271 }, { 94,2271 }, { 95,2271 }, { 96,2271 }, { 97,2271 },
 { 98,2271 }, { 99,2271 }, { 100,2271 }, { 101,2271 }, { 102,2271 },
 { 103,2271 }, { 104,2271 }, { 105,2271 }, { 106,2271 }, { 107,2271 },
 { 108,2271 }, { 109,2271 }, { 110,2271 }, { 111,2271 }, { 112,2271 },
 { 113,2271 }, { 114,2271 }, { 115,2271 }, { 116,2271 }, { 117,2271 },
 { 118,2271 }, { 119,2271 }, { 120,2271 }, { 121,2271 }, { 122,2271 },

 { 123,2271 }, { 124,2271 }, { 125,2271 }, { 126,2271 }, { 127,2271 },
 { 128,2271 }, { 129,2271 }, { 130,2271 }, { 131,2271 }, { 132,2271 },
 { 133,2271 }, { 134,2271 }, { 135,2271 }, { 136,2271 }, { 137,2271 },
 { 138,2271 }, { 139,2271 }, { 140,2271 }, { 141,2271 }, { 142,2271 },
 { 143,2271 }, { 144,2271 }, { 145,2271 }, { 146,2271 }, { 147,2271 },
 { 148,2271 }, { 149,2271 }, { 150,2271 }, { 151,2271 }, { 152,2271 },
 { 153,2271 }, { 154,2271 }, { 155,2271 }, { 156,2271 }, { 157,2271 },
 { 158,2271 }, { 159,2271 }, { 160,2271 }, { 161,2271 }, { 162,2271 },
 { 163,2271 }, { 164,2271 }, { 165,2271 }, { 166,2271 }, { 167,2271 },
 { 168,2271 }, { 169,2271 }, { 170,2271 }, { 171,2271 }, { 172,2271 },

 { 173,2271 }, { 174,2271 }, { 175,2271 }, { 176,2271 }, { 177,2271 },
 { 178,2271 }, { 179,2271 }, { 180,2271 }, { 181,2271 }, { 182,2271 },
 { 183,2271 }, { 184,2271 }, { 185,2271 }, { 186,2271 }, { 187,2271 },
 { 188,2271 }, { 189,2271 }, { 190,2271 }, { 191,2271 }, { 192,2271 },
 { 193,2271 }, { 194,2271 }, { 195,2271 }, { 196,2271 }, { 197,2271 },
 { 198,2271 }, { 199,2271 }, { 200,2271 }, { 201,2271 }, { 202,2271 },
 { 203,2271 }, { 204,2271 }, { 205,2271 }, { 206,2271 }, { 207,2271 },
 { 208,2271 }, { 209,2271 }, { 210,2271 }, { 211,2271 }, { 212,2271 },
 { 213,2271 }, { 214,2271 }, { 215,2271 }, { 216,2271 }, { 217,2271 },
 { 218,2271 }, { 219,2271 }, { 220,2271 }, { 221,2271 }, { 222,2271 },

 { 223,2271 }, { 224,2271 }, { 225,2271 }, { 226,2271 }, { 227,2271 },
 { 228,2271 }, { 229,2271 }, { 230,2271 }, { 231,2271 }, { 232,2271 },
 { 233,2271 }, { 234,2271 }, { 235,2271 }, { 236,2271 }, { 237,2271 },
 { 238,2271 }, { 239,2271 }, { 240,2271 }, { 241,2271 }, { 242,2271 },
 { 243,2271 }, { 244,2271 }, { 245,2271 }, { 246,2271 }, { 247,2271 },
 { 248,2271 }, { 249,2271 }, { 250,2271 }, { 251,2271 }, { 252,2271 },
 { 253,2271 }, { 254,2271 }, { 255,2271 }, { 256,2271 }, { 0, 19 },
 { 0,4566 }, { 1, 796 }, { 2, 796 }, { 3, 796 }, { 4, 796 },
 { 5, 796 }, { 6, 796 }, { 7, 796 }, { 8, 796 }, { 9, 796 },
 { 10, 796 }, { 11, 796 }, { 12, 796 }, { 13, 796 }, { 14, 796 },

 { 15, 796 }, { 16, 796 }, { 17, 796 }, { 18, 796 }, { 19, 796 },
 { 20, 796 }, { 21, 796 }, { 22, 796 }, { 23, 796 }, { 24, 796 },
 { 25, 796 }, { 26, 796 }, { 27, 796 }, { 28, 796 }, { 29, 796 },
 { 30, 796 }, { 31, 796 }, { 32, 796 }, { 33, 796 }, { 34, 798 },
 { 35, 796 }, { 36, 796 }, { 37, 796 }, { 38, 796 }, { 39, 798 },
 { 40, 796 }, { 41, 796 }, { 42, 796 }, { 43, 796 }, { 44, 796 },
 { 45, 796 }, { 46, 796 }, { 47, 798 }, { 48, 796 }, { 49, 796 },
 { 50, 796 }, { 51, 796 }, { 52, 796 }, { 53, 796 }, { 54, 796 },
 { 55, 796 }, { 56, 796 }, { 57, 796 }, { 58, 796 }, { 59, 796 },
 { 60, 796 }, { 61, 796 }, { 62, 796 }, { 63, 796 }, { 64, 796 },

 { 65, 796 }, { 66, 796 }, { 67, 796 }, { 68, 796 }, { 69, 796 },
 { 70, 796 }, { 71, 796 }, { 72, 796 }, { 73, 796 }, { 74, 796 },
 { 75, 796 }, { 76, 796 }, { 77, 796 }, { 78, 796 }, { 79, 796 },
 { 80, 796 }, { 81, 796 }, { 82, 796 }, { 83, 796 }, { 84, 796 },
 { 85,2271 }, { 86, 796 }, { 87, 796 }, { 88, 796 }, { 89, 796 },
 { 90, 796 }, { 91, 796 }, { 92, 798 }, { 93, 796 }, { 94, 796 },
 { 95, 796 }, { 96, 796 }, { 97, 796 }, { 98, 798 }, { 99, 796 },
 { 100, 796 }, { 101, 796 }, { 102, 798 }, { 103, 796 }, { 104, 796 },
 { 105, 796 }, { 106, 796 }, { 107, 796 }, { 108, 796 }, { 109, 796 },
 { 110, 798 }, { 111, 796 }, { 112, 796 }, { 113, 796 }, { 114, 798 },

 { 115, 796 }, { 116, 798 }, { 117,2294 }, { 118, 796 }, { 119, 796 },
 { 120, 796 }, { 121, 796 }, { 122, 796 }, { 123, 796 }, { 124, 796 },
 { 125, 796 }, { 126, 796 }, { 127, 796 }, { 128, 796 }, { 129, 796 },
 { 130, 796 }, { 131, 796 }, { 132, 796 }, { 133, 796 }, { 134, 796 },
 { 135, 796 }, { 136, 796 }, { 137, 796 }, { 138, 796 }, { 139, 796 },
 { 140, 796 }, { 141, 796 }, { 142, 796 }, { 143, 796 }, { 144, 796 },
 { 145, 796 }, { 146, 796 }, { 147, 796 }, { 148, 796 }, { 149, 796 },
 { 150, 796 }, { 151, 796 }, { 152, 796 }, { 153, 796 }, { 154, 796 },
 { 155, 796 }, { 156, 796 }, { 157, 796 }, { 158, 796 }, { 159, 796 },
 { 160, 796 }, { 161, 796 }, { 162, 796 }, { 163, 796 }, { 164, 796 },

 { 165, 796 }, { 166, 796 }, { 167, 796 }, { 168, 796 }, { 169, 796 },
 { 170, 796 }, { 171, 796 }, { 172, 796 }, { 173, 796 }, { 174, 796 },
 { 175, 796 }, { 176, 796 }, { 177, 796 }, { 178, 796 }, { 179, 796 },
 { 180, 796 }, { 181, 796 }, { 182, 796 }, { 183, 796 }, { 184, 796 },
 { 185, 796 }, { 186, 796 }, { 187, 796 }, { 188, 796 }, { 189, 796 },
 { 190, 796 }, { 191, 796 }, { 192, 796 }, { 193, 796 }, { 194, 796 },
 { 195, 796 }, { 196, 796 }, { 197, 796 }, { 198, 796 }, { 199, 796 },
 { 200, 796 }, { 201, 796 }, { 202, 796 }, { 203, 796 }, { 204, 796 },
 { 205, 796 }, { 206, 796 }, { 207, 796 }, { 208, 796 }, { 209, 796 },
 { 210, 796 }, { 211, 796 }, { 212, 796 }, { 213, 796 }, { 214, 796 },

 { 215, 796 }, { 216, 796 }, { 217, 796 }, { 218, 796 }, { 219, 796 },
 { 220, 796 }, { 221, 796 }, { 222, 796 }, { 223, 796 }, { 224, 796 },
 { 225, 796 }, { 226, 796 }, { 227, 796 }, { 228, 796 }, { 229, 796 },
 { 230, 796 }, { 231, 796 }, { 232, 796 }, { 233, 796 }, { 234, 796 },
 { 235, 796 }, { 236, 796 }, { 237, 796 }, { 238, 796 }, { 239, 796 },
 { 240, 796 }, { 241, 796 }, { 242, 796 }, { 243, 796 }, { 244, 796 },
 { 245, 796 }, { 246, 796 }, { 247, 796 }, { 248, 796 }, { 249, 796 },
 { 250, 796 }, { 251, 796 }, { 252, 796 }, { 253, 796 }, { 254, 796 },
 { 255, 796 }, { 256, 796 }, { 0, 17 }, { 0,4308 }, { 1,2140 },
 { 2,2140 }, { 3,2140 }, { 4,2140 }, { 5,2140 }, { 6,2140 },

 { 7,2140 }, { 8,2140 }, { 9,2140 }, { 10,2140 }, { 11,2140 },
 { 12,2140 }, { 13,2140 }, { 14,2140 }, { 15,2140 }, { 16,2140 },
 { 17,2140 }, { 18,2140 }, { 19,2140 }, { 20,2140 }, { 21,2140 },
 { 22,2140 }, { 23,2140 }, { 24,2140 }, { 25,2140 }, { 26,2140 },
 { 27,2140 }, { 28,2140 }, { 29,2140 }, { 30,2140 }, { 31,2140 },
 { 32,2140 }, { 33,2140 }, { 34,2140 }, { 35,2140 }, { 36,2140 },
 { 37,2140 }, { 38,2140 }, { 0, 0 }, { 40,2140 }, { 41,2140 },
 { 42,2140 }, { 43,2140 }, { 44,2140 }, { 45,2140 }, { 46,2140 },
 { 47,2140 }, { 48,2140 }, { 49,2140 }, { 50,2140 }, { 51,2140 },
 { 52,2140 }, { 53,2140 }, { 54,2140 }, { 55,2140 }, { 56,2140 },

 { 57,2140 }, { 58,2140 }, { 59,2140 }, { 60,2140 }, { 61,2140 },
 { 62,2140 }, { 63,2140 }, { 64,2140 }, { 65,2140 }, { 66,2140 },
 { 67,2140 }, { 68,2140 }, { 69,2140 }, { 70,2140 }, { 71,2140 },
 { 72,2140 }, { 73,2140 }, { 74,2140 }, { 75,2140 }, { 76,2140 },
 { 77,2140 }, { 78,2140 }, { 79,2140 }, { 80,2140 }, { 81,2140 },
 { 82,2140 }, { 83,2140 }, { 84,2140 }, { 85,2140 }, { 86,2140 },
 { 87,2140 }, { 88,2140 }, { 89,2140 }, { 90,2140 }, { 91,2140 },
 { 0, 0 }, { 93,2140 }, { 94,2140 }, { 95,2140 }, { 96,2140 },
 { 97,2140 }, { 98,2140 }, { 99,2140 }, { 100,2140 }, { 101,2140 },
 { 102,2140 }, { 103,2140 }, { 104,2140 }, { 105,2140 }, { 106,2140 },

 { 107,2140 }, { 108,2140 }, { 109,2140 }, { 110,2140 }, { 111,2140 },
 { 112,2140 }, { 113,2140 }, { 114,2140 }, { 115,2140 }, { 116,2140 },
 { 117,2140 }, { 118,2140 }, { 119,2140 }, { 120,2140 }, { 121,2140 },
 { 122,2140 }, { 123,2140 }, { 124,2140 }, { 125,2140 }, { 126,2140 },
 { 127,2140 }, { 128,2140 }, { 129,2140 }, { 130,2140 }, { 131,2140 },
 { 132,2140 }, { 133,2140 }, { 134,2140 }, { 135,2140 }, { 136,2140 },
 { 137,2140 }, { 138,2140 }, { 139,2140 }, { 140,2140 }, { 141,2140 },
 { 142,2140 }, { 143,2140 }, { 144,2140 }, { 145,2140 }, { 146,2140 },
 { 147,2140 }, { 148,2140 }, { 149,2140 }, { 150,2140 }, { 151,2140 },
 { 152,2140 }, { 153,2140 }, { 154,2140 }, { 155,2140 }, { 156,2140 },

 { 157,2140 }, { 158,2140 }, { 159,2140 }, { 160,2140 }, { 161,2140 },
 { 162,2140 }, { 163,2140 }, { 164,2140 }, { 165,2140 }, { 166,2140 },
 { 167,2140 }, { 168,2140 }, { 169,2140 }, { 170,2140 }, { 171,2140 },
 { 172,2140 }, { 173,2140 }, { 174,2140 }, { 175,2140 }, { 176,2140 },
 { 177,2140 }, { 178,2140 }, { 179,2140 }, { 180,2140 }, { 181,2140 },
 { 182,2140 }, { 183,2140 }, { 184,2140 }, { 185,2140 }, { 186,2140 },
 { 187,2140 }, { 188,2140 }, { 189,2140 }, { 190,2140 }, { 191,2140 },
 { 192,2140 }, { 193,2140 }, { 194,2140 }, { 195,2140 }, { 196,2140 },
 { 197,2140 }, { 198,2140 }, { 199,2140 }, { 200,2140 }, { 201,2140 },
 { 202,2140 }, { 203,2140 }, { 204,2140 }, { 205,2140 }, { 206,2140 },

 { 207,2140 }, { 208,2140 }, { 209,2140 }, { 210,2140 }, { 211,2140 },
 { 212,2140 }, { 213,2140 }, { 214,2140 }, { 215,2140 }, { 216,2140 },
 { 217,2140 }, { 218,2140 }, { 219,2140 }, { 220,2140 }, { 221,2140 },
 { 222,2140 }, { 223,2140 }, { 224,2140 }, { 225,2140 }, { 226,2140 },
 { 227,2140 }, { 228,2140 }, { 229,2140 }, { 230,2140 }, { 231,2140 },
 { 232,2140 }, { 233,2140 }, { 234,2140 }, { 235,2140 }, { 236,2140 },
 { 237,2140 }, { 238,2140 }, { 239,2140 }, { 240,2140 }, { 241,2140 },
 { 242,2140 }, { 243,2140 }, { 244,2140 }, { 245,2140 }, { 246,2140 },
 { 247,2140 }, { 248,2140 }, { 249,2140 }, { 250,2140 }, { 251,2140 },
 { 252,2140 }, { 253,2140 }, { 254,2140 }, { 255,2140 }, { 256,2140 },

 { 0, 28 }, { 0,4050 }, { 1,2267 }, { 2,2267 }, { 3,2267 },
 { 4,2267 }, { 5,2267 }, { 6,2267 }, { 7,2267 }, { 8,2267 },
 { 9,2267 }, { 10,2267 }, { 11,2267 }, { 12,2267 }, { 13,2267 },
 { 14,2267 }, { 15,2267 }, { 16,2267 }, { 17,2267 }, { 18,2267 },
 { 19,2267 }, { 20,2267 }, { 21,2267 }, { 22,2267 }, { 23,2267 },
 { 24,2267 }, { 25,2267 }, { 26,2267 }, { 27,2267 }, { 28,2267 },
 { 29,2267 }, { 30,2267 }, { 31,2267 }, { 32,2267 }, { 33,2267 },
 { 34,2267 }, { 35,2267 }, { 36,2267 }, { 37,2267 }, { 38,2267 },
 { 39,2267 }, { 40,2267 }, { 41,2267 }, { 42,2267 }, { 43,2267 },
 { 44,2267 }, { 45,2267 }, { 46,2267 }, { 47,2267 }, { 48,2267 },

 { 49,2267 }, { 50,2267 }, { 51,2267 }, { 52,2267 }, { 53,2267 },
 { 54,2267 }, { 55,2267 }, { 56,2267 }, { 57,2267 }, { 58,2267 },
 { 59,2267 }, { 60,2267 }, { 61,2267 }, { 62,2267 }, { 63,2267 },
 { 64,2267 }, { 65,2267 }, { 66,2267 }, { 67,2267 }, { 68,2267 },
 { 69,2267 }, { 70,2267 }, { 71,2267 }, { 72,2267 }, { 73,2267 },
 { 74,2267 }, { 75,2267 }, { 76,2267 }, { 77,2267 }, { 78,2267 },
 { 79,2267 }, { 80,2267 }, { 81,2267 }, { 82,2267 }, { 83,2267 },
 { 84,2267 }, { 85,2267 }, { 86,2267 }, { 87,2267 }, { 88,2267 },
 { 89,2267 }, { 90,2267 }, { 91,2267 }, { 92,2267 }, { 93,2267 },
 { 94,2267 }, { 95,2267 }, { 0, 0 }, { 97,2267 }, { 98,2267 },

 { 99,2267 }, { 100,2267 }, { 101,2267 }, { 102,2267 }, { 103,2267 },
 { 104,2267 }, { 105,2267 }, { 106,2267 }, { 107,2267 }, { 108,2267 },
 { 109,2267 }, { 110,2267 }, { 111,2267 }, { 112,2267 }, { 113,2267 },
 { 114,2267 }, { 115,2267 }, { 116,2267 }, { 117,2267 }, { 118,2267 },
 { 119,2267 }, { 120,2267 }, { 121,2267 }, { 122,2267 }, { 123,2267 },
 { 124,2267 }, { 125,2267 }, { 126,2267 }, { 127,2267 }, { 128,2267 },
 { 129,2267 }, { 130,2267 }, { 131,2267 }, { 132,2267 }, { 133,2267 },
 { 134,2267 }, { 135,2267 }, { 136,2267 }, { 137,2267 }, { 138,2267 },
 { 139,2267 }, { 140,2267 }, { 141,2267 }, { 142,2267 }, { 143,2267 },
 { 144,2267 }, { 145,2267 }, { 146,2267 }, { 147,2267 }, { 148,2267 },

 { 149,2267 }, { 150,2267 }, { 151,2267 }, { 152,2267 }, { 153,2267 },
 { 154,2267 }, { 155,2267 }, { 156,2267 }, { 157,2267 }, { 158,2267 },
 { 159,2267 }, { 160,2267 }, { 161,2267 }, { 162,2267 }, { 163,2267 },
 { 164,2267 }, { 165,2267 }, { 166,2267 }, { 167,2267 }, { 168,2267 },
 { 169,2267 }, { 170,2267 }, { 171,2267 }, { 172,2267 }, { 173,2267 },
 { 174,2267 }, { 175,2267 }, { 176,2267 }, { 177,2267 }, { 178,2267 },
 { 179,2267 }, { 180,2267 }, { 181,2267 }, { 182,2267 }, { 183,2267 },
 { 184,2267 }, { 185,2267 }, { 186,2267 }, { 187,2267 }, { 188,2267 },
 { 189,2267 }, { 190,2267 }, { 191,2267 }, { 192,2267 }, { 193,2267 },
 { 194,2267 }, { 195,2267 }, { 196,2267 }, { 197,2267 }, { 198,2267 },

 { 199,2267 }, { 200,2267 }, { 201,2267 }, { 202,2267 }, { 203,2267 },
 { 204,2267 }, { 205,2267 }, { 206,2267 }, { 207,2267 }, { 208,2267 },
 { 209,2267 }, { 210,2267 }, { 211,2267 }, { 212,2267 }, { 213,2267 },
 { 214,2267 }, { 215,2267 }, { 216,2267 }, { 217,2267 }, { 218,2267 },
 { 219,2267 }, { 220,2267 }, { 221,2267 }, { 222,2267 }, { 223,2267 },
 { 224,2267 }, { 225,2267 }, { 226,2267 }, { 227,2267 }, { 228,2267 },
 { 229,2267 }, { 230,2267 }, { 231,2267 }, { 232,2267 }, { 233,2267 },
 { 234,2267 }, { 235,2267 }, { 236,2267 }, { 237,2267 }, { 238,2267 },
 { 239,2267 }, { 240,2267 }, { 241,2267 }, { 242,2267 }, { 243,2267 },
 { 244,2267 }, { 245,2267 }, { 246,2267 }, { 247,2267 }, { 248,2267 },

 { 249,2267 }, { 250,2267 }, { 251,2267 }, { 252,2267 }, { 253,2267 },
 { 254,2267 }, { 255,2267 }, { 256,2267 }, { 0, 1 }, { 0,3792 },
 { 0, 31 }, { 0,3790 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 9, 0 }, { 10, 0 },
 { 11, 0 }, { 12, 0 }, { 13, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 3 }, { 0,3774 }, { 0, 4 }, { 0,3772 },
 { 0, 19 }, { 0,3770 }, { 0, 18 }, { 0,3768 }, { 0, 29 },
 { 0,3766 }, { 0, 11 }, { 0,3764 }, { 0, 20 }, { 0,3762 },
 { 0, 0 }, { 32, 0 }, { 0, 21 }, { 0,3758 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 36,2265 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48,2265 },
 { 49,2265 }, { 50,2265 }, { 51,2265 }, { 52,2265 }, { 53,2265 },
 { 54,2265 }, { 55,2265 }, { 56,2265 }, { 57,2265 }, { 42, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 47, 2 },
 { 0, 0 }, { 65,2265 }, { 66,2265 }, { 67,2265 }, { 68,2265 },
 { 69,2265 }, { 70,2265 }, { 71,2265 }, { 72,2265 }, { 73,2265 },
 { 74,2265 }, { 75,2265 }, { 76,2265 }, { 77,2265 }, { 78,2265 },
 { 79,2265 }, { 80,2265 }, { 81,2265 }, { 82,2265 }, { 83,2265 },
 { 84,2265 }, { 85,2265 }, { 86,2265 }, { 87,2265 }, { 88,2265 },

 { 89,2265 }, { 90,2265 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 95,2265 }, { 0, 0 }, { 97,2265 }, { 98,2265 },
 { 99,2265 }, { 100,2265 }, { 101,2265 }, { 102,2265 }, { 103,2265 },
 { 104,2265 }, { 105,2265 }, { 106,2265 }, { 107,2265 }, { 108,2265 },
 { 109,2265 }, { 110,2265 }, { 111,2265 }, { 112,2265 }, { 113,2265 },
 { 114,2265 }, { 115,2265 }, { 116,2265 }, { 117,2265 }, { 118,2265 },
 { 119,2265 }, { 120,2265 }, { 121,2265 }, { 122,2265 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 128,2265 },
 { 129,2265 }, { 130,2265 }, { 131,2265 }, { 132,2265 }, { 133,2265 },
 { 134,2265 }, { 135,2265 }, { 136,2265 }, { 137,2265 }, { 138,2265 },

 { 139,2265 }, { 140,2265 }, { 141,2265 }, { 142,2265 }, { 143,2265 },
 { 144,2265 }, { 145,2265 }, { 146,2265 }, { 147,2265 }, { 148,2265 },
 { 149,2265 }, { 150,2265 }, { 151,2265 }, { 152,2265 }, { 153,2265 },
 { 154,2265 }, { 155,2265 }, { 156,2265 }, { 157,2265 }, { 158,2265 },
 { 159,2265 }, { 160,2265 }, { 161,2265 }, { 162,2265 }, { 163,2265 },
 { 164,2265 }, { 165,2265 }, { 166,2265 }, { 167,2265 }, { 168,2265 },
 { 169,2265 }, { 170,2265 }, { 171,2265 }, { 172,2265 }, { 173,2265 },
 { 174,2265 }, { 175,2265 }, { 176,2265 }, { 177,2265 }, { 178,2265 },
 { 179,2265 }, { 180,2265 }, { 181,2265 }, { 182,2265 }, { 183,2265 },
 { 184,2265 }, { 185,2265 }, { 186,2265 }, { 187,2265 }, { 188,2265 },

 { 189,2265 }, { 190,2265 }, { 191,2265 }, { 192,2265 }, { 193,2265 },
 { 194,2265 }, { 195,2265 }, { 196,2265 }, { 197,2265 }, { 198,2265 },
 { 199,2265 }, { 200,2265 }, { 201,2265 }, { 202,2265 }, { 203,2265 },
 { 204,2265 }, { 205,2265 }, { 206,2265 }, { 207,2265 }, { 208,2265 },
 { 209,2265 }, { 210,2265 }, { 211,2265 }, { 212,2265 }, { 213,2265 },
 { 214,2265 }, { 215,2265 }, { 216,2265 }, { 217,2265 }, { 218,2265 },
 { 219,2265 }, { 220,2265 }, { 221,2265 }, { 222,2265 }, { 223,2265 },
 { 224,2265 }, { 225,2265 }, { 226,2265 }, { 227,2265 }, { 228,2265 },
 { 229,2265 }, { 230,2265 }, { 231,2265 }, { 232,2265 }, { 233,2265 },
 { 234,2265 }, { 235,2265 }, { 236,2265 }, { 237,2265 }, { 238,2265 },

 { 239,2265 }, { 240,2265 }, { 241,2265 }, { 242,2265 }, { 243,2265 },
 { 244,2265 }, { 245,2265 }, { 246,2265 }, { 247,2265 }, { 248,2265 },
 { 249,2265 }, { 250,2265 }, { 251,2265 }, { 252,2265 }, { 253,2265 },
 { 254,2265 }, { 255,2265 }, { 0, 9 }, { 0,3533 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 48, 0 }, { 49, 0 }, { 50, 0 }, { 51, 0 },
 { 52, 0 }, { 53, 0 }, { 54, 0 }, { 55, 0 }, { 56, 0 },
 { 57, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 69, 405 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 5 }, { 0,3445 }, { 1,2177 }, { 2,2177 }, { 3,2177 },
 { 4,2177 }, { 5,2177 }, { 6,2177 }, { 7,2177 }, { 8,2177 },
 { 9,2177 }, { 0, 0 }, { 11,2177 }, { 12,2177 }, { 101, 405 },
 { 14,2177 }, { 15,2177 }, { 16,2177 }, { 17,2177 }, { 18,2177 },
 { 19,2177 }, { 20,2177 }, { 21,2177 }, { 22,2177 }, { 23,2177 },
 { 24,2177 }, { 25,2177 }, { 26,2177 }, { 27,2177 }, { 28,2177 },
 { 29,2177 }, { 30,2177 }, { 31,2177 }, { 32,2177 }, { 33,2177 },
 { 34,2177 }, { 35,2177 }, { 36,2177 }, { 37,2177 }, { 38,2177 },
 { 39,2177 }, { 40,2177 }, { 41,2177 }, { 42,2177 }, { 43,2177 },

 { 44,2177 }, { 45,2177 }, { 46,2177 }, { 47,2177 }, { 48,2177 },
 { 49,2177 }, { 50,2177 }, { 51,2177 }, { 52,2177 }, { 53,2177 },
 { 54,2177 }, { 55,2177 }, { 56,2177 }, { 57,2177 }, { 58,2177 },
 { 59,2177 }, { 60,2177 }, { 61,2177 }, { 62,2177 }, { 63,2177 },
 { 64,2177 }, { 65,2177 }, { 66,2177 }, { 67,2177 }, { 68,2177 },
 { 69,2177 }, { 70,2177 }, { 71,2177 }, { 72,2177 }, { 73,2177 },
 { 74,2177 }, { 75,2177 }, { 76,2177 }, { 77,2177 }, { 78,2177 },
 { 79,2177 }, { 80,2177 }, { 81,2177 }, { 82,2177 }, { 83,2177 },
 { 84,2177 }, { 85,2177 }, { 86,2177 }, { 87,2177 }, { 88,2177 },
 { 89,2177 }, { 90,2177 }, { 91,2177 }, { 92,2177 }, { 93,2177 },

 { 94,2177 }, { 95,2177 }, { 96,2177 }, { 97,2177 }, { 98,2177 },
 { 99,2177 }, { 100,2177 }, { 101,2177 }, { 102,2177 }, { 103,2177 },
 { 104,2177 }, { 105,2177 }, { 106,2177 }, { 107,2177 }, { 108,2177 },
 { 109,2177 }, { 110,2177 }, { 111,2177 }, { 112,2177 }, { 113,2177 },
 { 114,2177 }, { 115,2177 }, { 116,2177 }, { 117,2177 }, { 118,2177 },
 { 119,2177 }, { 120,2177 }, { 121,2177 }, { 122,2177 }, { 123,2177 },
 { 124,2177 }, { 125,2177 }, { 126,2177 }, { 127,2177 }, { 128,2177 },
 { 129,2177 }, { 130,2177 }, { 131,2177 }, { 132,2177 }, { 133,2177 },
 { 134,2177 }, { 135,2177 }, { 136,2177 }, { 137,2177 }, { 138,2177 },
 { 139,2177 }, { 140,2177 }, { 141,2177 }, { 142,2177 }, { 143,2177 },

 { 144,2177 }, { 145,2177 }, { 146,2177 }, { 147,2177 }, { 148,2177 },
 { 149,2177 }, { 150,2177 }, { 151,2177 }, { 152,2177 }, { 153,2177 },
 { 154,2177 }, { 155,2177 }, { 156,2177 }, { 157,2177 }, { 158,2177 },
 { 159,2177 }, { 160,2177 }, { 161,2177 }, { 162,2177 }, { 163,2177 },
 { 164,2177 }, { 165,2177 }, { 166,2177 }, { 167,2177 }, { 168,2177 },
 { 169,2177 }, { 170,2177 }, { 171,2177 }, { 172,2177 }, { 173,2177 },
 { 174,2177 }, { 175,2177 }, { 176,2177 }, { 177,2177 }, { 178,2177 },
 { 179,2177 }, { 180,2177 }, { 181,2177 }, { 182,2177 }, { 183,2177 },
 { 184,2177 }, { 185,2177 }, { 186,2177 }, { 187,2177 }, { 188,2177 },
 { 189,2177 }, { 190,2177 }, { 191,2177 }, { 192,2177 }, { 193,2177 },

 { 194,2177 }, { 195,2177 }, { 196,2177 }, { 197,2177 }, { 198,2177 },
 { 199,2177 }, { 200,2177 }, { 201,2177 }, { 202,2177 }, { 203,2177 },
 { 204,2177 }, { 205,2177 }, { 206,2177 }, { 207,2177 }, { 208,2177 },
 { 209,2177 }, { 210,2177 }, { 211,2177 }, { 212,2177 }, { 213,2177 },
 { 214,2177 }, { 215,2177 }, { 216,2177 }, { 217,2177 }, { 218,2177 },
 { 219,2177 }, { 220,2177 }, { 221,2177 }, { 222,2177 }, { 223,2177 },
 { 224,2177 }, { 225,2177 }, { 226,2177 }, { 227,2177 }, { 228,2177 },
 { 229,2177 }, { 230,2177 }, { 231,2177 }, { 232,2177 }, { 233,2177 },
 { 234,2177 }, { 235,2177 }, { 236,2177 }, { 237,2177 }, { 238,2177 },
 { 239,2177 }, { 240,2177 }, { 241,2177 }, { 242,2177 }, { 243,2177 },

 { 244,2177 }, { 245,2177 }, { 246,2177 }, { 247,2177 }, { 248,2177 },
 { 249,2177 }, { 250,2177 }, { 251,2177 }, { 252,2177 }, { 253,2177 },
 { 254,2177 }, { 255,2177 }, { 256,2177 }, { 0, 9 }, { 0,3187 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 6 }, { 0,3165 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 46,-577 }, { 0, 0 }, { 48,2177 }, { 49,2177 }, { 50,2177 },
 { 51,2177 }, { 52,2177 }, { 53,2177 }, { 54,2177 }, { 55,2177 },
 { 56,2177 }, { 57,2177 }, { 0, 12 }, { 0,3128 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 46, -22 }, { 69, 59 }, { 48, 0 },
 { 49, 0 }, { 50, 0 }, { 51, 0 }, { 52, 0 }, { 53, 0 },
 { 54, 0 }, { 55, 0 }, { 56, 0 }, { 57, 0 }, { 0, 8 },
 { 0,3106 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 69, 37 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 101, 59 }, { 43,2128 }, { 0, 0 }, { 45,2128 }, { 0, 0 },
 { 0, 0 }, { 48,2140 }, { 49,2140 }, { 50,2140 }, { 51,2140 },
 { 52,2140 }, { 53,2140 }, { 54,2140 }, { 55,2140 }, { 56,2140 },
 { 57,2140 }, { 0, 0 }, { 0, 26 }, { 0,3068 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 101, 37 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48,2133 }, { 49,2133 },
 { 50,2133 }, { 51,2133 }, { 52,2133 }, { 53,2133 }, { 54,2133 },

 { 55,2133 }, { 56,2133 }, { 57,2133 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 65,2133 }, { 66,2133 }, { 67,2133 }, { 68,2133 }, { 69,2133 },
 { 70,2133 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 36, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 48, 0 }, { 49, 0 }, { 50, 0 }, { 51, 0 },
 { 52, 0 }, { 53, 0 }, { 54, 0 }, { 55, 0 }, { 56, 0 },
 { 57, 0 }, { 0, 0 }, { 97,2133 }, { 98,2133 }, { 99,2133 },
 { 100,2133 }, { 101,2133 }, { 102,2133 }, { 65, 0 }, { 66, 0 },

 { 67, 0 }, { 68, 0 }, { 69, 0 }, { 70, 0 }, { 71, 0 },
 { 72, 0 }, { 73, 0 }, { 74, 0 }, { 75, 0 }, { 76, 0 },
 { 77, 0 }, { 78, 0 }, { 79, 0 }, { 80, 0 }, { 81, 0 },
 { 82, 0 }, { 83, 0 }, { 84, 0 }, { 85, 0 }, { 86, 0 },
 { 87, 0 }, { 88, 0 }, { 89, 0 }, { 90, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 95, 0 }, { 0, 0 },
 { 97, 0 }, { 98, 0 }, { 99, 0 }, { 100, 0 }, { 101, 0 },
 { 102, 0 }, { 103, 0 }, { 104, 0 }, { 105, 0 }, { 106, 0 },
 { 107, 0 }, { 108, 0 }, { 109, 0 }, { 110, 0 }, { 111, 0 },
 { 112, 0 }, { 113, 0 }, { 114, 0 }, { 115, 0 }, { 116, 0 },

 { 117, 0 }, { 118, 0 }, { 119, 0 }, { 120, 0 }, { 121, 0 },
 { 122, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 128, 0 }, { 129, 0 }, { 130, 0 }, { 131, 0 },
 { 132, 0 }, { 133, 0 }, { 134, 0 }, { 135, 0 }, { 136, 0 },
 { 137, 0 }, { 138, 0 }, { 139, 0 }, { 140, 0 }, { 141, 0 },
 { 142, 0 }, { 143, 0 }, { 144, 0 }, { 145, 0 }, { 146, 0 },
 { 147, 0 }, { 148, 0 }, { 149, 0 }, { 150, 0 }, { 151, 0 },
 { 152, 0 }, { 153, 0 }, { 154, 0 }, { 155, 0 }, { 156, 0 },
 { 157, 0 }, { 158, 0 }, { 159, 0 }, { 160, 0 }, { 161, 0 },
 { 162, 0 }, { 163, 0 }, { 164, 0 }, { 165, 0 }, { 166, 0 },

 { 167, 0 }, { 168, 0 }, { 169, 0 }, { 170, 0 }, { 171, 0 },
 { 172, 0 }, { 173, 0 }, { 174, 0 }, { 175, 0 }, { 176, 0 },
 { 177, 0 }, { 178, 0 }, { 179, 0 }, { 180, 0 }, { 181, 0 },
 { 182, 0 }, { 183, 0 }, { 184, 0 }, { 185, 0 }, { 186, 0 },
 { 187, 0 }, { 188, 0 }, { 189, 0 }, { 190, 0 }, { 191, 0 },
 { 192, 0 }, { 193, 0 }, { 194, 0 }, { 195, 0 }, { 196, 0 },
 { 197, 0 }, { 198, 0 }, { 199, 0 }, { 200, 0 }, { 201, 0 },
 { 202, 0 }, { 203, 0 }, { 204, 0 }, { 205, 0 }, { 206, 0 },
 { 207, 0 }, { 208, 0 }, { 209, 0 }, { 210, 0 }, { 211, 0 },
 { 212, 0 }, { 213, 0 }, { 214, 0 }, { 215, 0 }, { 216, 0 },

 { 217, 0 }, { 218, 0 }, { 219, 0 }, { 220, 0 }, { 221, 0 },
 { 222, 0 }, { 223, 0 }, { 224, 0 }, { 225, 0 }, { 226, 0 },
 { 227, 0 }, { 228, 0 }, { 229, 0 }, { 230, 0 }, { 231, 0 },
 { 232, 0 }, { 233, 0 }, { 234, 0 }, { 235, 0 }, { 236, 0 },
 { 237, 0 }, { 238, 0 }, { 239, 0 }, { 240, 0 }, { 241, 0 },
 { 242, 0 }, { 243, 0 }, { 244, 0 }, { 245, 0 }, { 246, 0 },
 { 247, 0 }, { 248, 0 }, { 249, 0 }, { 250, 0 }, { 251, 0 },
 { 252, 0 }, { 253, 0 }, { 254, 0 }, { 255, 0 }, { 0, 3 },
 { 0,2811 }, { 1, 0 }, { 2, 0 }, { 3, 0 }, { 4, 0 },
 { 5, 0 }, { 6, 0 }, { 7, 0 }, { 8, 0 }, { 9, 0 },

 { 10, 0 }, { 11, 0 }, { 12, 0 }, { 13, 0 }, { 14, 0 },
 { 15, 0 }, { 16, 0 }, { 17, 0 }, { 18, 0 }, { 19, 0 },
 { 20, 0 }, { 21, 0 }, { 22, 0 }, { 23, 0 }, { 24, 0 },
 { 25, 0 }, { 26, 0 }, { 27, 0 }, { 28, 0 }, { 29, 0 },
 { 30, 0 }, { 31, 0 }, { 32, 0 }, { 33, 0 }, { 34, 0 },
 { 35, 0 }, { 36, 0 }, { 37, 0 }, { 38, 0 }, { 39, 0 },
 { 40, 0 }, { 41, 0 }, { 0, 0 }, { 43, 0 }, { 44, 0 },
 { 45, 0 }, { 46, 0 }, { 47, 0 }, { 48, 0 }, { 49, 0 },
 { 50, 0 }, { 51, 0 }, { 52, 0 }, { 53, 0 }, { 54, 0 },
 { 55, 0 }, { 56, 0 }, { 57, 0 }, { 58, 0 }, { 59, 0 },

 { 60, 0 }, { 61, 0 }, { 62, 0 }, { 63, 0 }, { 64, 0 },
 { 65, 0 }, { 66, 0 }, { 67, 0 }, { 68, 0 }, { 69, 0 },
 { 70, 0 }, { 71, 0 }, { 72, 0 }, { 73, 0 }, { 74, 0 },
 { 75, 0 }, { 76, 0 }, { 77, 0 }, { 78, 0 }, { 79, 0 },
 { 80, 0 }, { 81, 0 }, { 82, 0 }, { 83, 0 }, { 84, 0 },
 { 85, 0 }, { 86, 0 }, { 87, 0 }, { 88, 0 }, { 89, 0 },
 { 90, 0 }, { 91, 0 }, { 92, 0 }, { 93, 0 }, { 94, 0 },
 { 95, 0 }, { 96, 0 }, { 97, 0 }, { 98, 0 }, { 99, 0 },
 { 100, 0 }, { 101, 0 }, { 102, 0 }, { 103, 0 }, { 104, 0 },
 { 105, 0 }, { 106, 0 }, { 107, 0 }, { 108, 0 }, { 109, 0 },

 { 110, 0 }, { 111, 0 }, { 112, 0 }, { 113, 0 }, { 114, 0 },
 { 115, 0 }, { 116, 0 }, { 117, 0 }, { 118, 0 }, { 119, 0 },
 { 120, 0 }, { 121, 0 }, { 122, 0 }, { 123, 0 }, { 124, 0 },
 { 125, 0 }, { 126, 0 }, { 127, 0 }, { 128, 0 }, { 129, 0 },
 { 130, 0 }, { 131, 0 }, { 132, 0 }, { 133, 0 }, { 134, 0 },
 { 135, 0 }, { 136, 0 }, { 137, 0 }, { 138, 0 }, { 139, 0 },
 { 140, 0 }, { 141, 0 }, { 142, 0 }, { 143, 0 }, { 144, 0 },
 { 145, 0 }, { 146, 0 }, { 147, 0 }, { 148, 0 }, { 149, 0 },
 { 150, 0 }, { 151, 0 }, { 152, 0 }, { 153, 0 }, { 154, 0 },
 { 155, 0 }, { 156, 0 }, { 157, 0 }, { 158, 0 }, { 159, 0 },

 { 160, 0 }, { 161, 0 }, { 162, 0 }, { 163, 0 }, { 164, 0 },
 { 165, 0 }, { 166, 0 }, { 167, 0 }, { 168, 0 }, { 169, 0 },
 { 170, 0 }, { 171, 0 }, { 172, 0 }, { 173, 0 }, { 174, 0 },
 { 175, 0 }, { 176, 0 }, { 177, 0 }, { 178, 0 }, { 179, 0 },
 { 180, 0 }, { 181, 0 }, { 182, 0 }, { 183, 0 }, { 184, 0 },
 { 185, 0 }, { 186, 0 }, { 187, 0 }, { 188, 0 }, { 189, 0 },
 { 190, 0 }, { 191, 0 }, { 192, 0 }, { 193, 0 }, { 194, 0 },
 { 195, 0 }, { 196, 0 }, { 197, 0 }, { 198, 0 }, { 199, 0 },
 { 200, 0 }, { 201, 0 }, { 202, 0 }, { 203, 0 }, { 204, 0 },
 { 205, 0 }, { 206, 0 }, { 207, 0 }, { 208, 0 }, { 209, 0 },

 { 210, 0 }, { 211, 0 }, { 212, 0 }, { 213, 0 }, { 214, 0 },
 { 215, 0 }, { 216, 0 }, { 217, 0 }, { 218, 0 }, { 219, 0 },
 { 220, 0 }, { 221, 0 }, { 222, 0 }, { 223, 0 }, { 224, 0 },
 { 225, 0 }, { 226, 0 }, { 227, 0 }, { 228, 0 }, { 229, 0 },
 { 230, 0 }, { 231, 0 }, { 232, 0 }, { 233, 0 }, { 234, 0 },
 { 235, 0 }, { 236, 0 }, { 237, 0 }, { 238, 0 }, { 239, 0 },
 { 240, 0 }, { 241, 0 }, { 242, 0 }, { 243, 0 }, { 244, 0 },
 { 245, 0 }, { 246, 0 }, { 247, 0 }, { 248, 0 }, { 249, 0 },
 { 250, 0 }, { 251, 0 }, { 252, 0 }, { 253, 0 }, { 254, 0 },
 { 255, 0 }, { 256, 0 }, { 0, 16 }, { 0,2553 }, { 1, 0 },

 { 2, 0 }, { 3, 0 }, { 4, 0 }, { 5, 0 }, { 6, 0 },
 { 7, 0 }, { 8, 0 }, { 9, 0 }, { 10, 0 }, { 11, 0 },
 { 12, 0 }, { 13, 0 }, { 14, 0 }, { 15, 0 }, { 16, 0 },
 { 17, 0 }, { 18, 0 }, { 19, 0 }, { 20, 0 }, { 21, 0 },
 { 22, 0 }, { 23, 0 }, { 24, 0 }, { 25, 0 }, { 26, 0 },
 { 27, 0 }, { 28, 0 }, { 29, 0 }, { 30, 0 }, { 31, 0 },
 { 32, 0 }, { 33, 0 }, { 0, 0 }, { 35, 0 }, { 36, 0 },
 { 37, 0 }, { 38, 0 }, { 39, 0 }, { 40, 0 }, { 41, 0 },
 { 42, 0 }, { 43, 0 }, { 44, 0 }, { 45, 0 }, { 46, 0 },
 { 47, 0 }, { 48, 0 }, { 49, 0 }, { 50, 0 }, { 51, 0 },

 { 52, 0 }, { 53, 0 }, { 54, 0 }, { 55, 0 }, { 56, 0 },
 { 57, 0 }, { 58, 0 }, { 59, 0 }, { 60, 0 }, { 61, 0 },
 { 62, 0 }, { 63, 0 }, { 64, 0 }, { 65, 0 }, { 66, 0 },
 { 67, 0 }, { 68, 0 }, { 69, 0 }, { 70, 0 }, { 71, 0 },
 { 72, 0 }, { 73, 0 }, { 74, 0 }, { 75, 0 }, { 76, 0 },
 { 77, 0 }, { 78, 0 }, { 79, 0 }, { 80, 0 }, { 81, 0 },
 { 82, 0 }, { 83, 0 }, { 84, 0 }, { 85, 0 }, { 86, 0 },
 { 87, 0 }, { 88, 0 }, { 89, 0 }, { 90, 0 }, { 91, 0 },
 { 0, 0 }, { 93, 0 }, { 94, 0 }, { 95, 0 }, { 96, 0 },
 { 97, 0 }, { 98, 0 }, { 99, 0 }, { 100, 0 }, { 101, 0 },

 { 102, 0 }, { 103, 0 }, { 104, 0 }, { 105, 0 }, { 106, 0 },
 { 107, 0 }, { 108, 0 }, { 109, 0 }, { 110, 0 }, { 111, 0 },
 { 112, 0 }, { 113, 0 }, { 114, 0 }, { 115, 0 }, { 116, 0 },
 { 117, 0 }, { 118, 0 }, { 119, 0 }, { 120, 0 }, { 121, 0 },
 { 122, 0 }, { 123, 0 }, { 124, 0 }, { 125, 0 }, { 126, 0 },
 { 127, 0 }, { 128, 0 }, { 129, 0 }, { 130, 0 }, { 131, 0 },
 { 132, 0 }, { 133, 0 }, { 134, 0 }, { 135, 0 }, { 136, 0 },
 { 137, 0 }, { 138, 0 }, { 139, 0 }, { 140, 0 }, { 141, 0 },
 { 142, 0 }, { 143, 0 }, { 144, 0 }, { 145, 0 }, { 146, 0 },
 { 147, 0 }, { 148, 0 }, { 149, 0 }, { 150, 0 }, { 151, 0 },

 { 152, 0 }, { 153, 0 }, { 154, 0 }, { 155, 0 }, { 156, 0 },
 { 157, 0 }, { 158, 0 }, { 159, 0 }, { 160, 0 }, { 161, 0 },
 { 162, 0 }, { 163, 0 }, { 164, 0 }, { 165, 0 }, { 166, 0 },
 { 167, 0 }, { 168, 0 }, { 169, 0 }, { 170, 0 }, { 171, 0 },
 { 172, 0 }, { 173, 0 }, { 174, 0 }, { 175, 0 }, { 176, 0 },
 { 177, 0 }, { 178, 0 }, { 179, 0 }, { 180, 0 }, { 181, 0 },
 { 182, 0 }, { 183, 0 }, { 184, 0 }, { 185, 0 }, { 186, 0 },
 { 187, 0 }, { 188, 0 }, { 189, 0 }, { 190, 0 }, { 191, 0 },
 { 192, 0 }, { 193, 0 }, { 194, 0 }, { 195, 0 }, { 196, 0 },
 { 197, 0 }, { 198, 0 }, { 199, 0 }, { 200, 0 }, { 201, 0 },

 { 202, 0 }, { 203, 0 }, { 204, 0 }, { 205, 0 }, { 206, 0 },
 { 207, 0 }, { 208, 0 }, { 209, 0 }, { 210, 0 }, { 211, 0 },
 { 212, 0 }, { 213, 0 }, { 214, 0 }, { 215, 0 }, { 216, 0 },
 { 217, 0 }, { 218, 0 }, { 219, 0 }, { 220, 0 }, { 221, 0 },
 { 222, 0 }, { 223, 0 }, { 224, 0 }, { 225, 0 }, { 226, 0 },
 { 227, 0 }, { 228, 0 }, { 229, 0 }, { 230, 0 }, { 231, 0 },
 { 232, 0 }, { 233, 0 }, { 234, 0 }, { 235, 0 }, { 236, 0 },
 { 237, 0 }, { 238, 0 }, { 239, 0 }, { 240, 0 }, { 241, 0 },
 { 242, 0 }, { 243, 0 }, { 244, 0 }, { 245, 0 }, { 246, 0 },
 { 247, 0 }, { 248, 0 }, { 249, 0 }, { 250, 0 }, { 251, 0 },

 { 252, 0 }, { 253, 0 }, { 254, 0 }, { 255, 0 }, { 256, 0 },
 { 0, 22 }, { 0,2295 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 22 }, { 0,2272 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48,1381 },
 { 49,1381 }, { 50,1381 }, { 51,1381 }, { 52,1381 }, { 53,1381 },
 { 54,1381 }, { 55,1381 }, { 56,1381 }, { 57,1381 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 65,1381 }, { 66,1381 }, { 67,1381 }, { 68,1381 },
 { 69,1381 }, { 70,1381 }, { 48,1381 }, { 49,1381 }, { 50,1381 },
 { 51,1381 }, { 52,1381 }, { 53,1381 }, { 54,1381 }, { 55,1381 },
 { 56,1381 }, { 57,1381 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 65,1381 },
 { 66,1381 }, { 67,1381 }, { 68,1381 }, { 69,1381 }, { 70,1381 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 97,1381 }, { 98,1381 },
 { 99,1381 }, { 100,1381 }, { 101,1381 }, { 102,1381 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 97,1381 }, { 98,1381 }, { 99,1381 }, { 100,1381 },
 { 101,1381 }, { 102,1381 }, { 0, 17 }, { 0,2168 }, { 1, 0 },
 { 2, 0 }, { 3, 0 }, { 4, 0 }, { 5, 0 }, { 6, 0 },
 { 7, 0 }, { 8, 0 }, { 9, 0 }, { 10, 0 }, { 11, 0 },
 { 12, 0 }, { 13, 0 }, { 14, 0 }, { 15, 0 }, { 16, 0 },

 { 17, 0 }, { 18, 0 }, { 19, 0 }, { 20, 0 }, { 21, 0 },
 { 22, 0 }, { 23, 0 }, { 24, 0 }, { 25, 0 }, { 26, 0 },
 { 27, 0 }, { 28, 0 }, { 29, 0 }, { 30, 0 }, { 31, 0 },
 { 32, 0 }, { 33, 0 }, { 34, 0 }, { 35, 0 }, { 36, 0 },
 { 37, 0 }, { 38, 0 }, { 0, 0 }, { 40, 0 }, { 41, 0 },
 { 42, 0 }, { 43, 0 }, { 44, 0 }, { 45, 0 }, { 46, 0 },
 { 47, 0 }, { 48, 0 }, { 49, 0 }, { 50, 0 }, { 51, 0 },
 { 52, 0 }, { 53, 0 }, { 54, 0 }, { 55, 0 }, { 56, 0 },
 { 57, 0 }, { 58, 0 }, { 59, 0 }, { 60, 0 }, { 61, 0 },
 { 62, 0 }, { 63, 0 }, { 64, 0 }, { 65, 0 }, { 66, 0 },

 { 67, 0 }, { 68, 0 }, { 69, 0 }, { 70, 0 }, { 71, 0 },
 { 72, 0 }, { 73, 0 }, { 74, 0 }, { 75, 0 }, { 76, 0 },
 { 77, 0 }, { 78, 0 }, { 79, 0 }, { 80, 0 }, { 81, 0 },
 { 82, 0 }, { 83, 0 }, { 84, 0 }, { 85, 0 }, { 86, 0 },
 { 87, 0 }, { 88, 0 }, { 89, 0 }, { 90, 0 }, { 91, 0 },
 { 0, 0 }, { 93, 0 }, { 94, 0 }, { 95, 0 }, { 96, 0 },
 { 97, 0 }, { 98, 0 }, { 99, 0 }, { 100, 0 }, { 101, 0 },
 { 102, 0 }, { 103, 0 }, { 104, 0 }, { 105, 0 }, { 106, 0 },
 { 107, 0 }, { 108, 0 }, { 109, 0 }, { 110, 0 }, { 111, 0 },
 { 112, 0 }, { 113, 0 }, { 114, 0 }, { 115, 0 }, { 116, 0 },

 { 117, 0 }, { 118, 0 }, { 119, 0 }, { 120, 0 }, { 121, 0 },
 { 122, 0 }, { 123, 0 }, { 124, 0 }, { 125, 0 }, { 126, 0 },
 { 127, 0 }, { 128, 0 }, { 129, 0 }, { 130, 0 }, { 131, 0 },
 { 132, 0 }, { 133, 0 }, { 134, 0 }, { 135, 0 }, { 136, 0 },
 { 137, 0 }, { 138, 0 }, { 139, 0 }, { 140, 0 }, { 141, 0 },
 { 142, 0 }, { 143, 0 }, { 144, 0 }, { 145, 0 }, { 146, 0 },
 { 147, 0 }, { 148, 0 }, { 149, 0 }, { 150, 0 }, { 151, 0 },
 { 152, 0 }, { 153, 0 }, { 154, 0 }, { 155, 0 }, { 156, 0 },
 { 157, 0 }, { 158, 0 }, { 159, 0 }, { 160, 0 }, { 161, 0 },
 { 162, 0 }, { 163, 0 }, { 164, 0 }, { 165, 0 }, { 166, 0 },

 { 167, 0 }, { 168, 0 }, { 169, 0 }, { 170, 0 }, { 171, 0 },
 { 172, 0 }, { 173, 0 }, { 174, 0 }, { 175, 0 }, { 176, 0 },
 { 177, 0 }, { 178, 0 }, { 179, 0 }, { 180, 0 }, { 181, 0 },
 { 182, 0 }, { 183, 0 }, { 184, 0 }, { 185, 0 }, { 186, 0 },
 { 187, 0 }, { 188, 0 }, { 189, 0 }, { 190, 0 }, { 191, 0 },
 { 192, 0 }, { 193, 0 }, { 194, 0 }, { 195, 0 }, { 196, 0 },
 { 197, 0 }, { 198, 0 }, { 199, 0 }, { 200, 0 }, { 201, 0 },
 { 202, 0 }, { 203, 0 }, { 204, 0 }, { 205, 0 }, { 206, 0 },
 { 207, 0 }, { 208, 0 }, { 209, 0 }, { 210, 0 }, { 211, 0 },
 { 212, 0 }, { 213, 0 }, { 214, 0 }, { 215, 0 }, { 216, 0 },

 { 217, 0 }, { 218, 0 }, { 219, 0 }, { 220, 0 }, { 221, 0 },
 { 222, 0 }, { 223, 0 }, { 224, 0 }, { 225, 0 }, { 226, 0 },
 { 227, 0 }, { 228, 0 }, { 229, 0 }, { 230, 0 }, { 231, 0 },
 { 232, 0 }, { 233, 0 }, { 234, 0 }, { 235, 0 }, { 236, 0 },
 { 237, 0 }, { 238, 0 }, { 239, 0 }, { 240, 0 }, { 241, 0 },
 { 242, 0 }, { 243, 0 }, { 244, 0 }, { 245, 0 }, { 246, 0 },
 { 247, 0 }, { 248, 0 }, { 249, 0 }, { 250, 0 }, { 251, 0 },
 { 252, 0 }, { 253, 0 }, { 254, 0 }, { 255, 0 }, { 256, 0 },
 { 0, 22 }, { 0,1910 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 22 }, { 0,1887 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48,1057 },
 { 49,1057 }, { 50,1057 }, { 51,1057 }, { 52,1057 }, { 53,1057 },
 { 54,1057 }, { 55,1057 }, { 56,1057 }, { 57,1057 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 65,1057 }, { 66,1057 }, { 67,1057 }, { 68,1057 },
 { 69,1057 }, { 70,1057 }, { 48,1057 }, { 49,1057 }, { 50,1057 },
 { 51,1057 }, { 52,1057 }, { 53,1057 }, { 54,1057 }, { 55,1057 },
 { 56,1057 }, { 57,1057 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 65,1057 },
 { 66,1057 }, { 67,1057 }, { 68,1057 }, { 69,1057 }, { 70,1057 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 97,1057 }, { 98,1057 },
 { 99,1057 }, { 100,1057 }, { 101,1057 }, { 102,1057 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 97,1057 }, { 98,1057 }, { 99,1057 }, { 100,1057 },
 { 101,1057 }, { 102,1057 }, { 0, 28 }, { 0,1783 }, { 1, 0 },
 { 2, 0 }, { 3, 0 }, { 4, 0 }, { 5, 0 }, { 6, 0 },
 { 7, 0 }, { 8, 0 }, { 9, 0 }, { 10, 0 }, { 11, 0 },
 { 12, 0 }, { 13, 0 }, { 14, 0 }, { 15, 0 }, { 16, 0 },
 { 17, 0 }, { 18, 0 }, { 19, 0 }, { 20, 0 }, { 21, 0 },
 { 22, 0 }, { 23, 0 }, { 24, 0 }, { 25, 0 }, { 26, 0 },
 { 27, 0 }, { 28, 0 }, { 29, 0 }, { 30, 0 }, { 31, 0 },

 { 32, 0 }, { 33, 0 }, { 34, 0 }, { 35, 0 }, { 36, 0 },
 { 37, 0 }, { 38, 0 }, { 39, 0 }, { 40, 0 }, { 41, 0 },
 { 42, 0 }, { 43, 0 }, { 44, 0 }, { 45, 0 }, { 46, 0 },
 { 47, 0 }, { 48, 0 }, { 49, 0 }, { 50, 0 }, { 51, 0 },
 { 52, 0 }, { 53, 0 }, { 54, 0 }, { 55, 0 }, { 56, 0 },
 { 57, 0 }, { 58, 0 }, { 59, 0 }, { 60, 0 }, { 61, 0 },
 { 62, 0 }, { 63, 0 }, { 64, 0 }, { 65, 0 }, { 66, 0 },
 { 67, 0 }, { 68, 0 }, { 69, 0 }, { 70, 0 }, { 71, 0 },
 { 72, 0 }, { 73, 0 }, { 74, 0 }, { 75, 0 }, { 76, 0 },
 { 77, 0 }, { 78, 0 }, { 79, 0 }, { 80, 0 }, { 81, 0 },

 { 82, 0 }, { 83, 0 }, { 84, 0 }, { 85, 0 }, { 86, 0 },
 { 87, 0 }, { 88, 0 }, { 89, 0 }, { 90, 0 }, { 91, 0 },
 { 92, 0 }, { 93, 0 }, { 94, 0 }, { 95, 0 }, { 0, 0 },
 { 97, 0 }, { 98, 0 }, { 99, 0 }, { 100, 0 }, { 101, 0 },
 { 102, 0 }, { 103, 0 }, { 104, 0 }, { 105, 0 }, { 106, 0 },
 { 107, 0 }, { 108, 0 }, { 109, 0 }, { 110, 0 }, { 111, 0 },
 { 112, 0 }, { 113, 0 }, { 114, 0 }, { 115, 0 }, { 116, 0 },
 { 117, 0 }, { 118, 0 }, { 119, 0 }, { 120, 0 }, { 121, 0 },
 { 122, 0 }, { 123, 0 }, { 124, 0 }, { 125, 0 }, { 126, 0 },
 { 127, 0 }, { 128, 0 }, { 129, 0 }, { 130, 0 }, { 131, 0 },

 { 132, 0 }, { 133, 0 }, { 134, 0 }, { 135, 0 }, { 136, 0 },
 { 137, 0 }, { 138, 0 }, { 139, 0 }, { 140, 0 }, { 141, 0 },
 { 142, 0 }, { 143, 0 }, { 144, 0 }, { 145, 0 }, { 146, 0 },
 { 147, 0 }, { 148, 0 }, { 149, 0 }, { 150, 0 }, { 151, 0 },
 { 152, 0 }, { 153, 0 }, { 154, 0 }, { 155, 0 }, { 156, 0 },
 { 157, 0 }, { 158, 0 }, { 159, 0 }, { 160, 0 }, { 161, 0 },
 { 162, 0 }, { 163, 0 }, { 164, 0 }, { 165, 0 }, { 166, 0 },
 { 167, 0 }, { 168, 0 }, { 169, 0 }, { 170, 0 }, { 171, 0 },
 { 172, 0 }, { 173, 0 }, { 174, 0 }, { 175, 0 }, { 176, 0 },
 { 177, 0 }, { 178, 0 }, { 179, 0 }, { 180, 0 }, { 181, 0 },

 { 182, 0 }, { 183, 0 }, { 184, 0 }, { 185, 0 }, { 186, 0 },
 { 187, 0 }, { 188, 0 }, { 189, 0 }, { 190, 0 }, { 191, 0 },
 { 192, 0 }, { 193, 0 }, { 194, 0 }, { 195, 0 }, { 196, 0 },
 { 197, 0 }, { 198, 0 }, { 199, 0 }, { 200, 0 }, { 201, 0 },
 { 202, 0 }, { 203, 0 }, { 204, 0 }, { 205, 0 }, { 206, 0 },
 { 207, 0 }, { 208, 0 }, { 209, 0 }, { 210, 0 }, { 211, 0 },
 { 212, 0 }, { 213, 0 }, { 214, 0 }, { 215, 0 }, { 216, 0 },
 { 217, 0 }, { 218, 0 }, { 219, 0 }, { 220, 0 }, { 221, 0 },
 { 222, 0 }, { 223, 0 }, { 224, 0 }, { 225, 0 }, { 226, 0 },
 { 227, 0 }, { 228, 0 }, { 229, 0 }, { 230, 0 }, { 231, 0 },

 { 232, 0 }, { 233, 0 }, { 234, 0 }, { 235, 0 }, { 236, 0 },
 { 237, 0 }, { 238, 0 }, { 239, 0 }, { 240, 0 }, { 241, 0 },
 { 242, 0 }, { 243, 0 }, { 244, 0 }, { 245, 0 }, { 246, 0 },
 { 247, 0 }, { 248, 0 }, { 249, 0 }, { 250, 0 }, { 251, 0 },
 { 252, 0 }, { 253, 0 }, { 254, 0 }, { 255, 0 }, { 256, 0 },
 { 0, 31 }, { 0,1525 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 36, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48, 0 },
 { 49, 0 }, { 50, 0 }, { 51, 0 }, { 52, 0 }, { 53, 0 },
 { 54, 0 }, { 55, 0 }, { 56, 0 }, { 57, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 65, 0 }, { 66, 0 }, { 67, 0 }, { 68, 0 },
 { 69, 0 }, { 70, 0 }, { 71, 0 }, { 72, 0 }, { 73, 0 },

 { 74, 0 }, { 75, 0 }, { 76, 0 }, { 77, 0 }, { 78, 0 },
 { 79, 0 }, { 80, 0 }, { 81, 0 }, { 82, 0 }, { 83, 0 },
 { 84, 0 }, { 85, 0 }, { 86, 0 }, { 87, 0 }, { 88, 0 },
 { 89, 0 }, { 90, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 95, 0 }, { 0, 0 }, { 97, 0 }, { 98, 0 },
 { 99, 0 }, { 100, 0 }, { 101, 0 }, { 102, 0 }, { 103, 0 },
 { 104, 0 }, { 105, 0 }, { 106, 0 }, { 107, 0 }, { 108, 0 },
 { 109, 0 }, { 110, 0 }, { 111, 0 }, { 112, 0 }, { 113, 0 },
 { 114, 0 }, { 115, 0 }, { 116, 0 }, { 117, 0 }, { 118, 0 },
 { 119, 0 }, { 120, 0 }, { 121, 0 }, { 122, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 128, 0 },
 { 129, 0 }, { 130, 0 }, { 131, 0 }, { 132, 0 }, { 133, 0 },
 { 134, 0 }, { 135, 0 }, { 136, 0 }, { 137, 0 }, { 138, 0 },
 { 139, 0 }, { 140, 0 }, { 141, 0 }, { 142, 0 }, { 143, 0 },
 { 144, 0 }, { 145, 0 }, { 146, 0 }, { 147, 0 }, { 148, 0 },
 { 149, 0 }, { 150, 0 }, { 151, 0 }, { 152, 0 }, { 153, 0 },
 { 154, 0 }, { 155, 0 }, { 156, 0 }, { 157, 0 }, { 158, 0 },
 { 159, 0 }, { 160, 0 }, { 161, 0 }, { 162, 0 }, { 163, 0 },
 { 164, 0 }, { 165, 0 }, { 166, 0 }, { 167, 0 }, { 168, 0 },
 { 169, 0 }, { 170, 0 }, { 171, 0 }, { 172, 0 }, { 173, 0 },

 { 174, 0 }, { 175, 0 }, { 176, 0 }, { 177, 0 }, { 178, 0 },
 { 179, 0 }, { 180, 0 }, { 181, 0 }, { 182, 0 }, { 183, 0 },
 { 184, 0 }, { 185, 0 }, { 186, 0 }, { 187, 0 }, { 188, 0 },
 { 189, 0 }, { 190, 0 }, { 191, 0 }, { 192, 0 }, { 193, 0 },
 { 194, 0 }, { 195, 0 }, { 196, 0 }, { 197, 0 }, { 198, 0 },
 { 199, 0 }, { 200, 0 }, { 201, 0 }, { 202, 0 }, { 203, 0 },
 { 204, 0 }, { 205, 0 }, { 206, 0 }, { 207, 0 }, { 208, 0 },
 { 209, 0 }, { 210, 0 }, { 211, 0 }, { 212, 0 }, { 213, 0 },
 { 214, 0 }, { 215, 0 }, { 216, 0 }, { 217, 0 }, { 218, 0 },
 { 219, 0 }, { 220, 0 }, { 221, 0 }, { 222, 0 }, { 223, 0 },

 { 224, 0 }, { 225, 0 }, { 226, 0 }, { 227, 0 }, { 228, 0 },
 { 229, 0 }, { 230, 0 }, { 231, 0 }, { 232, 0 }, { 233, 0 },
 { 234, 0 }, { 235, 0 }, { 236, 0 }, { 237, 0 }, { 238, 0 },
 { 239, 0 }, { 240, 0 }, { 241, 0 }, { 242, 0 }, { 243, 0 },
 { 244, 0 }, { 245, 0 }, { 246, 0 }, { 247, 0 }, { 248, 0 },
 { 249, 0 }, { 250, 0 }, { 251, 0 }, { 252, 0 }, { 253, 0 },
 { 254, 0 }, { 255, 0 }, { 0, 5 }, { 0,1268 }, { 1, 0 },
 { 2, 0 }, { 3, 0 }, { 4, 0 }, { 5, 0 }, { 6, 0 },
 { 7, 0 }, { 8, 0 }, { 9, 0 }, { 0, 0 }, { 11, 0 },
 { 12, 0 }, { 0, 0 }, { 14, 0 }, { 15, 0 }, { 16, 0 },

 { 17, 0 }, { 18, 0 }, { 19, 0 }, { 20, 0 }, { 21, 0 },
 { 22, 0 }, { 23, 0 }, { 24, 0 }, { 25, 0 }, { 26, 0 },
 { 27, 0 }, { 28, 0 }, { 29, 0 }, { 30, 0 }, { 31, 0 },
 { 32, 0 }, { 33, 0 }, { 34, 0 }, { 35, 0 }, { 36, 0 },
 { 37, 0 }, { 38, 0 }, { 39, 0 }, { 40, 0 }, { 41, 0 },
 { 42, 0 }, { 43, 0 }, { 44, 0 }, { 45, 0 }, { 46, 0 },
 { 47, 0 }, { 48, 0 }, { 49, 0 }, { 50, 0 }, { 51, 0 },
 { 52, 0 }, { 53, 0 }, { 54, 0 }, { 55, 0 }, { 56, 0 },
 { 57, 0 }, { 58, 0 }, { 59, 0 }, { 60, 0 }, { 61, 0 },
 { 62, 0 }, { 63, 0 }, { 64, 0 }, { 65, 0 }, { 66, 0 },

 { 67, 0 }, { 68, 0 }, { 69, 0 }, { 70, 0 }, { 71, 0 },
 { 72, 0 }, { 73, 0 }, { 74, 0 }, { 75, 0 }, { 76, 0 },
 { 77, 0 }, { 78, 0 }, { 79, 0 }, { 80, 0 }, { 81, 0 },
 { 82, 0 }, { 83, 0 }, { 84, 0 }, { 85, 0 }, { 86, 0 },
 { 87, 0 }, { 88, 0 }, { 89, 0 }, { 90, 0 }, { 91, 0 },
 { 92, 0 }, { 93, 0 }, { 94, 0 }, { 95, 0 }, { 96, 0 },
 { 97, 0 }, { 98, 0 }, { 99, 0 }, { 100, 0 }, { 101, 0 },
 { 102, 0 }, { 103, 0 }, { 104, 0 }, { 105, 0 }, { 106, 0 },
 { 107, 0 }, { 108, 0 }, { 109, 0 }, { 110, 0 }, { 111, 0 },
 { 112, 0 }, { 113, 0 }, { 114, 0 }, { 115, 0 }, { 116, 0 },

 { 117, 0 }, { 118, 0 }, { 119, 0 }, { 120, 0 }, { 121, 0 },
 { 122, 0 }, { 123, 0 }, { 124, 0 }, { 125, 0 }, { 126, 0 },
 { 127, 0 }, { 128, 0 }, { 129, 0 }, { 130, 0 }, { 131, 0 },
 { 132, 0 }, { 133, 0 }, { 134, 0 }, { 135, 0 }, { 136, 0 },
 { 137, 0 }, { 138, 0 }, { 139, 0 }, { 140, 0 }, { 141, 0 },
 { 142, 0 }, { 143, 0 }, { 144, 0 }, { 145, 0 }, { 146, 0 },
 { 147, 0 }, { 148, 0 }, { 149, 0 }, { 150, 0 }, { 151, 0 },
 { 152, 0 }, { 153, 0 }, { 154, 0 }, { 155, 0 }, { 156, 0 },
 { 157, 0 }, { 158, 0 }, { 159, 0 }, { 160, 0 }, { 161, 0 },
 { 162, 0 }, { 163, 0 }, { 164, 0 }, { 165, 0 }, { 166, 0 },

 { 167, 0 }, { 168, 0 }, { 169, 0 }, { 170, 0 }, { 171, 0 },
 { 172, 0 }, { 173, 0 }, { 174, 0 }, { 175, 0 }, { 176, 0 },
 { 177, 0 }, { 178, 0 }, { 179, 0 }, { 180, 0 }, { 181, 0 },
 { 182, 0 }, { 183, 0 }, { 184, 0 }, { 185, 0 }, { 186, 0 },
 { 187, 0 }, { 188, 0 }, { 189, 0 }, { 190, 0 }, { 191, 0 },
 { 192, 0 }, { 193, 0 }, { 194, 0 }, { 195, 0 }, { 196, 0 },
 { 197, 0 }, { 198, 0 }, { 199, 0 }, { 200, 0 }, { 201, 0 },
 { 202, 0 }, { 203, 0 }, { 204, 0 }, { 205, 0 }, { 206, 0 },
 { 207, 0 }, { 208, 0 }, { 209, 0 }, { 210, 0 }, { 211, 0 },
 { 212, 0 }, { 213, 0 }, { 214, 0 }, { 215, 0 }, { 216, 0 },

 { 217, 0 }, { 218, 0 }, { 219, 0 }, { 220, 0 }, { 221, 0 },
 { 222, 0 }, { 223, 0 }, { 224, 0 }, { 225, 0 }, { 226, 0 },
 { 227, 0 }, { 228, 0 }, { 229, 0 }, { 230, 0 }, { 231, 0 },
 { 232, 0 }, { 233, 0 }, { 234, 0 }, { 235, 0 }, { 236, 0 },
 { 237, 0 }, { 238, 0 }, { 239, 0 }, { 240, 0 }, { 241, 0 },
 { 242, 0 }, { 243, 0 }, { 244, 0 }, { 245, 0 }, { 246, 0 },
 { 247, 0 }, { 248, 0 }, { 249, 0 }, { 250, 0 }, { 251, 0 },
 { 252, 0 }, { 253, 0 }, { 254, 0 }, { 255, 0 }, { 256, 0 },
 { 0, 9 }, { 0,1010 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 13 }, { 0,1000 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 10 }, { 0, 988 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 7 }, { 0, 973 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48, 0 },
 { 49, 0 }, { 50, 0 }, { 51, 0 }, { 52, 0 }, { 53, 0 },
 { 54, 0 }, { 55, 0 }, { 56, 0 }, { 57, 0 }, { 48, 12 },

 { 49, 12 }, { 50, 12 }, { 51, 12 }, { 52, 12 }, { 53, 12 },
 { 54, 12 }, { 55, 12 }, { 56, 12 }, { 57, 12 }, { 0, 0 },
 { 69,-2118 }, { 48, 0 }, { 49, 0 }, { 50, 0 }, { 51, 0 },
 { 52, 0 }, { 53, 0 }, { 54, 0 }, { 55, 0 }, { 56, 0 },
 { 57, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 48, 0 }, { 49, 0 }, { 50, 0 }, { 51, 0 },
 { 52, 0 }, { 53, 0 }, { 54, 0 }, { 55, 0 }, { 56, 0 },
 { 57, 0 }, { 0, 22 }, { 0, 914 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 101,-2118 }, { 65, 0 }, { 66, 0 },
 { 67, 0 }, { 68, 0 }, { 69, 0 }, { 70, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 22 },
 { 0, 891 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 97, 0 }, { 98, 0 }, { 99, 0 }, { 100, 0 }, { 101, 0 },
 { 102, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 48, 143 }, { 49, 143 }, { 50, 143 }, { 51, 143 }, { 52, 143 },
 { 53, 143 }, { 54, 143 }, { 55, 143 }, { 56, 143 }, { 57, 143 },
 { 0, 0 }, { 0, 0 }, { 0, 22 }, { 0, 853 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 65, 143 }, { 66, 143 }, { 67, 143 },
 { 68, 143 }, { 69, 143 }, { 70, 143 }, { 48, 143 }, { 49, 143 },
 { 50, 143 }, { 51, 143 }, { 52, 143 }, { 53, 143 }, { 54, 143 },
 { 55, 143 }, { 56, 143 }, { 57, 143 }, { 0, 0 }, { 0, 0 },
 { 0, 22 }, { 0, 830 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 65, 143 }, { 66, 143 }, { 67, 143 }, { 68, 143 }, { 69, 143 },
 { 70, 143 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 97, 143 },
 { 98, 143 }, { 99, 143 }, { 100, 143 }, { 101, 143 }, { 102, 143 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 48, 143 }, { 49, 143 }, { 50, 143 }, { 51, 143 },

 { 52, 143 }, { 53, 143 }, { 54, 143 }, { 55, 143 }, { 56, 143 },
 { 57, 143 }, { 0, 0 }, { 97, 143 }, { 98, 143 }, { 99, 143 },
 { 100, 143 }, { 101, 143 }, { 102, 143 }, { 65, 143 }, { 66, 143 },
 { 67, 143 }, { 68, 143 }, { 69, 143 }, { 70, 143 }, { 48, 143 },
 { 49, 143 }, { 50, 143 }, { 51, 143 }, { 52, 143 }, { 53, 143 },
 { 54, 143 }, { 55, 143 }, { 56, 143 }, { 57, 143 }, { 0, 22 },
 { 0, 771 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 65, 143 }, { 66, 143 }, { 67, 143 }, { 68, 143 },
 { 69, 143 }, { 70, 143 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 97, 143 }, { 98, 143 }, { 99, 143 }, { 100, 143 }, { 101, 143 },

 { 102, 143 }, { 0, 0 }, { 0, 22 }, { 0, 748 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 97, 143 }, { 98, 143 },
 { 99, 143 }, { 100, 143 }, { 101, 143 }, { 102, 143 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48, 143 }, { 49, 143 },
 { 50, 143 }, { 51, 143 }, { 52, 143 }, { 53, 143 }, { 54, 143 },
 { 55, 143 }, { 56, 143 }, { 57, 143 }, { 0, 0 }, { 0, 0 },
 { 0, 22 }, { 0, 710 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 65, 143 }, { 66, 143 }, { 67, 143 }, { 68, 143 }, { 69, 143 },

 { 70, 143 }, { 48, 143 }, { 49, 143 }, { 50, 143 }, { 51, 143 },
 { 52, 143 }, { 53, 143 }, { 54, 143 }, { 55, 143 }, { 56, 143 },
 { 57, 143 }, { 0, 0 }, { 0, 0 }, { 0, 22 }, { 0, 687 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 65, 143 }, { 66, 143 },
 { 67, 143 }, { 68, 143 }, { 69, 143 }, { 70, 143 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 97, 143 }, { 98, 143 }, { 99, 143 },
 { 100, 143 }, { 101, 143 }, { 102, 143 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48, 143 },
 { 49, 143 }, { 50, 143 }, { 51, 143 }, { 52, 143 }, { 53, 143 },
 { 54, 143 }, { 55, 143 }, { 56, 143 }, { 57, 143 }, { 0, 0 },

 { 97, 143 }, { 98, 143 }, { 99, 143 }, { 100, 143 }, { 101, 143 },
 { 102, 143 }, { 65, 143 }, { 66, 143 }, { 67, 143 }, { 68, 143 },
 { 69, 143 }, { 70, 143 }, { 48, 143 }, { 49, 143 }, { 50, 143 },
 { 51, 143 }, { 52, 143 }, { 53, 143 }, { 54, 143 }, { 55, 143 },
 { 56, 143 }, { 57, 143 }, { 0, 22 }, { 0, 628 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 65, 143 },
 { 66, 143 }, { 67, 143 }, { 68, 143 }, { 69, 143 }, { 70, 143 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 97, 143 }, { 98, 143 },
 { 99, 143 }, { 100, 143 }, { 101, 143 }, { 102, 143 }, { 0, 0 },
 { 0, 22 }, { 0, 605 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 97, 143 }, { 98, 143 }, { 99, 143 }, { 100, 143 },
 { 101, 143 }, { 102, 143 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 48, 143 }, { 49, 143 }, { 50, 143 }, { 51, 143 },
 { 52, 143 }, { 53, 143 }, { 54, 143 }, { 55, 143 }, { 56, 143 },
 { 57, 143 }, { 0, 0 }, { 0, 0 }, { 0, 22 }, { 0, 567 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 65, 143 }, { 66, 143 },
 { 67, 143 }, { 68, 143 }, { 69, 143 }, { 70, 143 }, { 48,-3157 },
 { 49,-3157 }, { 50,-3157 }, { 51,-3157 }, { 52,-3157 }, { 53,-3157 },

 { 54,-3157 }, { 55,-3157 }, { 56,-3157 }, { 57,-3157 }, { 0, 0 },
 { 0, 0 }, { 0, 22 }, { 0, 544 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 65,-3157 }, { 66,-3157 }, { 67,-3157 }, { 68,-3157 },
 { 69,-3157 }, { 70,-3157 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 97, 143 }, { 98, 143 }, { 99, 143 }, { 100, 143 }, { 101, 143 },
 { 102, 143 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 48, 105 }, { 49, 105 }, { 50, 105 },
 { 51, 105 }, { 52, 105 }, { 53, 105 }, { 54, 105 }, { 55, 105 },
 { 56, 105 }, { 57, 105 }, { 0, 0 }, { 97,-3157 }, { 98,-3157 },
 { 99,-3157 }, { 100,-3157 }, { 101,-3157 }, { 102,-3157 }, { 65, 105 },

 { 66, 105 }, { 67, 105 }, { 68, 105 }, { 69, 105 }, { 70, 105 },
 { 48,-3214 }, { 49,-3214 }, { 50,-3214 }, { 51,-3214 }, { 52,-3214 },
 { 53,-3214 }, { 54,-3214 }, { 55,-3214 }, { 56,-3214 }, { 57,-3214 },
 { 0, 22 }, { 0, 485 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 65,-3214 }, { 66,-3214 }, { 67,-3214 },
 { 68,-3214 }, { 69,-3214 }, { 70,-3214 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 97, 105 }, { 98, 105 }, { 99, 105 }, { 100, 105 },
 { 101, 105 }, { 102, 105 }, { 0, 0 }, { 0, 22 }, { 0, 462 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 97,-3214 },
 { 98,-3214 }, { 99,-3214 }, { 100,-3214 }, { 101,-3214 }, { 102,-3214 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48, 61 },
 { 49, 61 }, { 50, 61 }, { 51, 61 }, { 52, 61 }, { 53, 61 },
 { 54, 61 }, { 55, 61 }, { 56, 61 }, { 57, 61 }, { 0, 0 },
 { 0, 0 }, { 0, 22 }, { 0, 424 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 65, 61 }, { 66, 61 }, { 67, 61 }, { 68, 61 },
 { 69, 61 }, { 70, 61 }, { 48, 61 }, { 49, 61 }, { 50, 61 },
 { 51, 61 }, { 52, 61 }, { 53, 61 }, { 54, 61 }, { 55, 61 },
 { 56, 61 }, { 57, 61 }, { 0, 0 }, { 0, 0 }, { 0, 22 },

 { 0, 401 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 65, 61 },
 { 66, 61 }, { 67, 61 }, { 68, 61 }, { 69, 61 }, { 70, 61 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 97, 61 }, { 98, 61 },
 { 99, 61 }, { 100, 61 }, { 101, 61 }, { 102, 61 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 48, 82 }, { 49, 82 }, { 50, 82 }, { 51, 82 }, { 52, 82 },
 { 53, 82 }, { 54, 82 }, { 55, 82 }, { 56, 82 }, { 57, 82 },
 { 0, 0 }, { 97, 61 }, { 98, 61 }, { 99, 61 }, { 100, 61 },
 { 101, 61 }, { 102, 61 }, { 65, 82 }, { 66, 82 }, { 67, 82 },
 { 68, 82 }, { 69, 82 }, { 70, 82 }, { 48, 82 }, { 49, 82 },

 { 50, 82 }, { 51, 82 }, { 52, 82 }, { 53, 82 }, { 54, 82 },
 { 55, 82 }, { 56, 82 }, { 57, 82 }, { 0, 22 }, { 0, 342 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 65, 82 }, { 66, 82 }, { 67, 82 }, { 68, 82 }, { 69, 82 },
 { 70, 82 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 97, 82 },
 { 98, 82 }, { 99, 82 }, { 100, 82 }, { 101, 82 }, { 102, 82 },
 { 0, 0 }, { 0, 22 }, { 0, 319 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 97, 82 }, { 98, 82 }, { 99, 82 },

 { 100, 82 }, { 101, 82 }, { 102, 82 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 48, 61 }, { 49, 61 }, { 50, 61 },
 { 51, 61 }, { 52, 61 }, { 53, 61 }, { 54, 61 }, { 55, 61 },
 { 56, 61 }, { 57, 61 }, { 0, 0 }, { 0, 0 }, { 0, 22 },
 { 0, 281 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 65, 61 },
 { 66, 61 }, { 67, 61 }, { 68, 61 }, { 69, 61 }, { 70, 61 },
 { 48, 61 }, { 49, 61 }, { 50, 61 }, { 51, 61 }, { 52, 61 },
 { 53, 61 }, { 54, 61 }, { 55, 61 }, { 56, 61 }, { 57, 61 },
 { 0, 0 }, { 0, 0 }, { 0, 22 }, { 0, 258 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 65, 61 }, { 66, 61 }, { 67, 61 },

 { 68, 61 }, { 69, 61 }, { 70, 61 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 97, 61 }, { 98, 61 }, { 99, 61 }, { 100, 61 },
 { 101, 61 }, { 102, 61 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 48,-3481 }, { 49,-3481 },
 { 50,-3481 }, { 51,-3481 }, { 52,-3481 }, { 53,-3481 }, { 54,-3481 },
 { 55,-3481 }, { 56,-3481 }, { 57,-3481 }, { 0, 0 }, { 97, 61 },
 { 98, 61 }, { 99, 61 }, { 100, 61 }, { 101, 61 }, { 102, 61 },
 { 65,-3481 }, { 66,-3481 }, { 67,-3481 }, { 68,-3481 }, { 69,-3481 },
 { 70,-3481 }, { 48,-3500 }, { 49,-3500 }, { 50,-3500 }, { 51,-3500 },
 { 52,-3500 }, { 53,-3500 }, { 54,-3500 }, { 55,-3500 }, { 56,-3500 },

 { 57,-3500 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 65,-3500 }, { 66,-3500 },
 { 67,-3500 }, { 68,-3500 }, { 69,-3500 }, { 70,-3500 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 97,-3481 }, { 98,-3481 }, { 99,-3481 },
 { 100,-3481 }, { 101,-3481 }, { 102,-3481 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 97,-3500 }, { 98,-3500 }, { 99,-3500 }, { 100,-3500 }, { 101,-3500 },
 { 102,-3500 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
 { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },

 { 257, 42 }, { 1, 0 }, };

static const struct yy_trans_info *yy_start_state_list[13] =
    {
    &yy_transition[1],
    &yy_transition[3],
    &yy_transition[261],
    &yy_transition[519],
    &yy_transition[777],
    &yy_transition[1035],
    &yy_transition[1293],
    &yy_transition[1551],
    &yy_transition[1809],
    &yy_transition[2067],
    &yy_transition[2325],
    &yy_transition[2583],
    &yy_transition[2841],

    } ;
# 1 "src/backend/parser/ag_scanner.l"
# 242 "src/backend/parser/ag_scanner.l"
typedef struct strbuf
{
    char *buffer;
    int capacity;
    int length;
} strbuf;

static void strbuf_init(strbuf *sb, int capacity);
static void strbuf_cleanup(strbuf *sb);
static void strbuf_append_buf(strbuf *sb, const char *b, const int len);
static void strbuf_append_char(strbuf *sb, const char c);
static void strbuf_append_codepoint(strbuf *sb, const pg_wchar c);
static void strbuf_ensure_capacity(strbuf *sb, int len);
static const char *strbuf_get_str(strbuf *sb);
static void strbuf_reset(strbuf *sb);

typedef struct ag_yy_extra
{






    strbuf literal_buf;


    pg_wchar high_surrogate;
    int start_cond;


    const char *scan_buf;
    int last_loc;
} ag_yy_extra;

static void integer_literal_to_token(const char *s, ag_token *token,
                                     ag_yy_extra *extra);


static void _numstr_to_decimal(const char *numstr, const int base, strbuf *sb);
static uint32 hexdigit_value(const char c);
static uint32 octdigit_value(const char c);

static 
# 285 "src/backend/parser/ag_scanner.l" 3 4
      _Bool 
# 285 "src/backend/parser/ag_scanner.l"
           is_high_surrogate(const pg_wchar c);
static 
# 286 "src/backend/parser/ag_scanner.l" 3 4
      _Bool 
# 286 "src/backend/parser/ag_scanner.l"
           is_low_surrogate(const pg_wchar c);
static pg_wchar surrogate_pair_to_codepoint(const pg_wchar hi,
                                            const pg_wchar lo);
# 298 "src/backend/parser/ag_scanner.l"
static int _scan_errmsg(const char *msg, const ag_yy_extra *extra);

static int _scan_errposition(const int location, const ag_yy_extra *extra);
# 2767 "src/backend/parser/ag_scanner.c"
# 2768 "src/backend/parser/ag_scanner.c"
# 2787 "src/backend/parser/ag_scanner.c"
struct yyguts_t
    {


    ag_yy_extra yyextra_r;


    FILE *yyin_r, *yyout_r;
    size_t yy_buffer_stack_top;
    size_t yy_buffer_stack_max;
    YY_BUFFER_STATE * yy_buffer_stack;
    char yy_hold_char;
    int yy_n_chars;
    int yyleng_r;
    char *yy_c_buf_p;
    int yy_init;
    int yy_start;
    int yy_did_buffer_switch_on_eof;
    int yy_start_stack_ptr;
    int yy_start_stack_depth;
    int *yy_start_stack;
    yy_state_type yy_last_accepting_state;
    char* yy_last_accepting_cpos;

    int yylineno_r;
    int yy_flex_debug_r;

    char *yytext_r;
    int yy_more_flag;
    int yy_more_len;

    };

static int yy_init_globals ( yyscan_t yyscanner );

int ag_yylex_init (yyscan_t* scanner);

int ag_yylex_init_extra ( ag_yy_extra user_defined, yyscan_t* scanner);




int ag_yylex_destroy ( yyscan_t yyscanner );

ag_yy_extra ag_yyget_extra ( yyscan_t yyscanner );

void ag_yyset_extra ( ag_yy_extra user_defined , yyscan_t yyscanner );

int ag_yyget_column ( yyscan_t yyscanner );

void ag_yyset_column ( int _column_no , yyscan_t yyscanner );
# 2974 "src/backend/parser/ag_scanner.c"
ag_token ag_scanner_next_token(yyscan_t yyscanner)
{
 yy_state_type yy_current_state;
 char *yy_cp, *yy_bp;
 int yy_act;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 if ( !yyg->yy_init )
  {
  yyg->yy_init = 1;





  if ( ! yyg->yy_start )
   yyg->yy_start = 1;

  if ( ! yyg->yyin_r )
   yyg->yyin_r = 
# 2993 "src/backend/parser/ag_scanner.c" 3 4
         stdin
# 2993 "src/backend/parser/ag_scanner.c"
              ;

  if ( ! yyg->yyout_r )
   yyg->yyout_r = 
# 2996 "src/backend/parser/ag_scanner.c" 3 4
          stdout
# 2996 "src/backend/parser/ag_scanner.c"
                ;

  if ( ! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 2998 "src/backend/parser/ag_scanner.c" 3 4
        ((void *)0)
# 2998 "src/backend/parser/ag_scanner.c"
        ) ) {
   ag_yyensure_buffer_stack (yyscanner);
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] =
    ag_yy_create_buffer( yyg->yyin_r, 16384 , yyscanner);
  }

  ag_yy_load_buffer_state( yyscanner );
  }

 {
# 321 "src/backend/parser/ag_scanner.l"
# 325 "src/backend/parser/ag_scanner.l"

ag_token token;
# 3018 "src/backend/parser/ag_scanner.c"

 while ( 1 )
  {
  yy_cp = yyg->yy_c_buf_p;


  *yy_cp = yyg->yy_hold_char;




  yy_bp = yy_cp;

  yy_current_state = yy_start_state_list[yyg->yy_start];
yy_match:
  {
  const struct yy_trans_info *yy_trans_info;

  YY_CHAR yy_c;

  for ( yy_c = ((YY_CHAR) (*yy_cp));
        (yy_trans_info = &yy_current_state[yy_c])->
  yy_verify == yy_c;
        yy_c = ((YY_CHAR) (*++yy_cp)) )
   yy_current_state += yy_trans_info->yy_nxt;
  }

yy_find_action:
  yy_act = yy_current_state[-1].yy_nxt;

  yyg->yytext_r = yy_bp; yyg->yyleng_r = (int) (yy_cp - yy_bp); yyg->yy_hold_char = *yy_cp; *yy_cp = '\0'; yyg->yy_c_buf_p = yy_cp;;

do_action:

  switch ( yy_act )
 {
case 1:


# 329 "src/backend/parser/ag_scanner.l"
{

}
 break;
case 2:

# 333 "src/backend/parser/ag_scanner.l"
{

    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    yyg->yy_start = 1 + 2 *(1);
}
 break;
case 3:


# 339 "src/backend/parser/ag_scanner.l"
{

}
 break;
case 4:

# 343 "src/backend/parser/ag_scanner.l"
{
    yyg->yy_start = 1 + 2 *(0);
}
 break;
case (42 + 1 + 1):
# 347 "src/backend/parser/ag_scanner.l"
{
    do { if (errstart(20, "src/backend/parser/ag_scanner.l", 348, __func__, 
# 348 "src/backend/parser/ag_scanner.l" 3 4
   ((void *)0)
# 348 "src/backend/parser/ag_scanner.l"
   )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('6') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), _scan_errmsg("unterminated /* comment", &yyg->yyextra_r), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                        ;
}
 break;
case 5:

# 353 "src/backend/parser/ag_scanner.l"
{

}
 break;
case 6:
# 358 "src/backend/parser/ag_scanner.l"
case 7:

# 358 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    integer_literal_to_token(yyg->yytext_r, &token, &yyg->yyextra_r);
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 8:

# 365 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    do { if (errstart(20, "src/backend/parser/ag_scanner.l", 367, __func__, 
# 367 "src/backend/parser/ag_scanner.l" 3 4
   ((void *)0)
# 367 "src/backend/parser/ag_scanner.l"
   )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('6') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), _scan_errmsg("invalid hexadecimal integer literal", &yyg->yyextra_r), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                        ;
}
 break;
case 9:
# 373 "src/backend/parser/ag_scanner.l"
case 10:

# 373 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_DECIMAL;
    token.value.s = yyg->yytext_r;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 11:

# 381 "src/backend/parser/ag_scanner.l"
{

    do { int yyless_macro_arg = (yyg->yyleng_r - 2); ; *yy_cp = yyg->yy_hold_char; yyg->yy_c_buf_p = yy_cp = yy_bp + yyless_macro_arg - 0; yyg->yytext_r = yy_bp; yyg->yyleng_r = (int) (yy_cp - yy_bp); yyg->yy_hold_char = *yy_cp; *yy_cp = '\0'; yyg->yy_c_buf_p = yy_cp;; } while ( 0 );

    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);


    integer_literal_to_token(yyg->yytext_r, &token, &yyg->yyextra_r);
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 12:
# 394 "src/backend/parser/ag_scanner.l"
case 13:

# 394 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    do { if (errstart(20, "src/backend/parser/ag_scanner.l", 396, __func__, 
# 396 "src/backend/parser/ag_scanner.l" 3 4
   ((void *)0)
# 396 "src/backend/parser/ag_scanner.l"
   )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('6') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), _scan_errmsg("invalid scientific notation literal", &yyg->yyextra_r), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                        ;
}
 break;
case 14:

# 401 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    strbuf_reset(&yyg->yyextra_r.literal_buf);
    yyg->yy_start = 1 + 2 *(2);
}
 break;
case 15:

# 407 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    strbuf_reset(&yyg->yyextra_r.literal_buf);
    yyg->yy_start = 1 + 2 *(3);
}
 break;
case 16:
# 414 "src/backend/parser/ag_scanner.l"
case 17:


# 414 "src/backend/parser/ag_scanner.l"
{
    strbuf_append_buf(&yyg->yyextra_r.literal_buf, yyg->yytext_r, yyg->yyleng_r);
}
 break;
case 18:

# 418 "src/backend/parser/ag_scanner.l"
{
    char c;

    switch (yyg->yytext_r[1])
    {
    case 'b':
        c = '\b';
        break;
    case 'f':
        c = '\f';
        break;
    case 'n':
        c = '\n';
        break;
    case 'r':
        c = '\r';
        break;
    case 't':
        c = '\t';
        break;
    default:

        c = yyg->yytext_r[1];
        break;
    }

    strbuf_append_char(&yyg->yyextra_r.literal_buf, c);
}
 break;
case 19:


# 447 "src/backend/parser/ag_scanner.l"
{
    if (yyg->yyleng_r == 1)
    {




        strbuf_append_char(&yyg->yyextra_r.literal_buf, '\\');
    }
    else
    {
        do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
        do { if (errstart(20, "src/backend/parser/ag_scanner.l", 459, __func__, 
# 459 "src/backend/parser/ag_scanner.l" 3 4
       ((void *)0)
# 459 "src/backend/parser/ag_scanner.l"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('5') - '0') & 0x3F) << 24))), _scan_errmsg("invalid escape sequence", &yyg->yyextra_r), errdetail("Valid escape sequences are \\\", \\', \\/, \\\\, \\b, \\f, \\n, \\r, \\t, \\uXXXX, and \\UXXXXXXXX."), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)



                                     ;
    }
}
 break;
case 20:

# 467 "src/backend/parser/ag_scanner.l"
{
    pg_wchar c;


    c = strtoul(yyg->yytext_r + 2, 
# 471 "src/backend/parser/ag_scanner.l" 3 4
                           ((void *)0)
# 471 "src/backend/parser/ag_scanner.l"
                               , 16);
    if (c > 0x10FFFF)
    {

        do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
        do { if (errstart(20, "src/backend/parser/ag_scanner.l", 476, __func__, 
# 476 "src/backend/parser/ag_scanner.l" 3 4
       ((void *)0)
# 476 "src/backend/parser/ag_scanner.l"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('5') - '0') & 0x3F) << 24))), _scan_errmsg("invalid Unicode escape value", &yyg->yyextra_r), errdetail("Unicode escape values cannot be greater than 10FFFF, which is the maximum value of a code point."), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)



                                     ;
    }
    else if (c > 0x7F)
    {
        if (GetDatabaseEncoding() != PG_UTF8)
        {
            do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
            do { if (errstart(20, "src/backend/parser/ag_scanner.l", 487, __func__, 
# 487 "src/backend/parser/ag_scanner.l" 3 4
           ((void *)0)
# 487 "src/backend/parser/ag_scanner.l"
           )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('5') - '0') & 0x3F) << 24))), _scan_errmsg("unsupported Unicode escape value", &yyg->yyextra_r), errdetail("Unicode escape values cannot be used for code point values above 007F when the server encoding is not UTF8."), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)



                                         ;
        }

        if (is_high_surrogate(c))
        {
            yyg->yyextra_r.high_surrogate = c;
            yyg->yyextra_r.start_cond = ((yyg->yy_start - 1) / 2);
            yyg->yy_start = 1 + 2 *(4);
        }
        else if (is_low_surrogate(c))
        {
            do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
            do { if (errstart(20, "src/backend/parser/ag_scanner.l", 503, __func__, 
# 503 "src/backend/parser/ag_scanner.l" 3 4
           ((void *)0)
# 503 "src/backend/parser/ag_scanner.l"
           )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('5') - '0') & 0x3F) << 24))), _scan_errmsg("invalid Unicode surrogate pair", &yyg->yyextra_r), errdetail("A low surrogate must follow a high surrogate."), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)



                                         ;
        }
        else
        {
            strbuf_append_codepoint(&yyg->yyextra_r.literal_buf, c);
        }
    }
    else if (c > 0)
    {

        strbuf_append_char(&yyg->yyextra_r.literal_buf, (char)c);
    }
    else
    {




        do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
        do { if (errstart(20, "src/backend/parser/ag_scanner.l", 526, __func__, 
# 526 "src/backend/parser/ag_scanner.l" 3 4
       ((void *)0)
# 526 "src/backend/parser/ag_scanner.l"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('5') - '0') & 0x3F) << 24))), _scan_errmsg("unsupported Unicode escape value", &yyg->yyextra_r), errdetail("Unicode code point value 0000 is not allowed in quoted strings."), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)



                                     ;
    }
}
 break;
case 21:

# 534 "src/backend/parser/ag_scanner.l"
{
    pg_wchar c;

    c = strtoul(yyg->yytext_r + 2, 
# 537 "src/backend/parser/ag_scanner.l" 3 4
                           ((void *)0)
# 537 "src/backend/parser/ag_scanner.l"
                               , 16);
    if (is_low_surrogate(c))
    {
        c = surrogate_pair_to_codepoint(yyg->yyextra_r.high_surrogate, c);

        strbuf_append_codepoint(&yyg->yyextra_r.literal_buf, c);
        yyg->yy_start = 1 + 2 *(yyg->yyextra_r.start_cond);
    }
    else
    {
        do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
        do { if (errstart(20, "src/backend/parser/ag_scanner.l", 548, __func__, 
# 548 "src/backend/parser/ag_scanner.l" 3 4
       ((void *)0)
# 548 "src/backend/parser/ag_scanner.l"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('5') - '0') & 0x3F) << 24))), _scan_errmsg("invalid Unicode surrogate pair", &yyg->yyextra_r), errdetail("A low surrogate must follow a high surrogate."), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)



                                     ;
    }
}
 break;
case 22:

# 556 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    do { if (errstart(20, "src/backend/parser/ag_scanner.l", 558, __func__, 
# 558 "src/backend/parser/ag_scanner.l" 3 4
   ((void *)0)
# 558 "src/backend/parser/ag_scanner.l"
   )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('5') - '0') & 0x3F) << 24))), _scan_errmsg("invalid Unicode escape sequence", &yyg->yyextra_r), errhint("Unicode escape sequences must be \\uXXXX or \\UXXXXXXXX."), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)



                                 ;
}
 break;
case 23:

# 565 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    do { if (errstart(20, "src/backend/parser/ag_scanner.l", 567, __func__, 
# 567 "src/backend/parser/ag_scanner.l" 3 4
   ((void *)0)
# 567 "src/backend/parser/ag_scanner.l"
   )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('5') - '0') & 0x3F) << 24))), _scan_errmsg("invalid Unicode surrogate pair", &yyg->yyextra_r), errdetail("A low surrogate must follow a high surrogate."), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)


                                        ;
}
 break;
case 24:
# 574 "src/backend/parser/ag_scanner.l"
case 25:

# 574 "src/backend/parser/ag_scanner.l"
{
    yyg->yy_start = 1 + 2 *(0);







    token.type = AG_TOKEN_STRING;
    token.value.s = strbuf_get_str(&yyg->yyextra_r.literal_buf);
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case (42 + 2 + 1):
case (42 + 3 + 1):
case (42 + 4 + 1):
# 589 "src/backend/parser/ag_scanner.l"
{
    do { if (errstart(20, "src/backend/parser/ag_scanner.l", 590, __func__, 
# 590 "src/backend/parser/ag_scanner.l" 3 4
   ((void *)0)
# 590 "src/backend/parser/ag_scanner.l"
   )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('6') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), _scan_errmsg("unterminated quoted string", &yyg->yyextra_r), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                        ;
}
 break;
case 26:

# 595 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_IDENTIFIER;
    token.value.s = yyg->yytext_r;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 27:

# 603 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    strbuf_reset(&yyg->yyextra_r.literal_buf);
    yyg->yy_start = 1 + 2 *(5);
}
 break;
case 28:


# 609 "src/backend/parser/ag_scanner.l"
{
    strbuf_append_buf(&yyg->yyextra_r.literal_buf, yyg->yytext_r, yyg->yyleng_r);
}
 break;
case 29:

# 613 "src/backend/parser/ag_scanner.l"
{
    strbuf_append_char(&yyg->yyextra_r.literal_buf, '`');
}
 break;
case 30:

# 617 "src/backend/parser/ag_scanner.l"
{
    yyg->yy_start = 1 + 2 *(0);

    if (yyg->yyextra_r.literal_buf.length == 0)
    {
        do { if (errstart(20, "src/backend/parser/ag_scanner.l", 622, __func__, 
# 622 "src/backend/parser/ag_scanner.l" 3 4
       ((void *)0)
# 622 "src/backend/parser/ag_scanner.l"
       )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('6') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('2') - '0') & 0x3F) << 24))), _scan_errmsg("zero-length quoted identifier", &yyg->yyextra_r), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                            ;
    }

    token.type = AG_TOKEN_IDENTIFIER;
    token.value.s = strbuf_get_str(&yyg->yyextra_r.literal_buf);
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case (42 + 5 + 1):
# 633 "src/backend/parser/ag_scanner.l"
{
    do { if (errstart(20, "src/backend/parser/ag_scanner.l", 634, __func__, 
# 634 "src/backend/parser/ag_scanner.l" 3 4
   ((void *)0)
# 634 "src/backend/parser/ag_scanner.l"
   )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('6') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), _scan_errmsg("unterminated quoted identifier", &yyg->yyextra_r), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                        ;
}
 break;
case 31:

# 639 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_PARAMETER;
    token.value.s = yyg->yytext_r + 1;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 32:

# 647 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_LT_GT;
    token.value.s = yyg->yytext_r;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 33:

# 655 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_LT_EQ;
    token.value.s = yyg->yytext_r;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 34:

# 663 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_GT_EQ;
    token.value.s = yyg->yytext_r;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 35:

# 671 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_DOT_DOT;
    token.value.s = yyg->yytext_r;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 36:

# 679 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_PLUS_EQ;
    token.value.s = yyg->yytext_r;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 37:

# 687 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_EQ_TILDE;
    token.value.s = yyg->yytext_r;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 38:

# 695 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_TYPECAST;
    token.value.s = yyg->yytext_r;
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 39:

# 703 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_CHAR;
    token.value.c = yyg->yytext_r[0];
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 40:

# 711 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    do { if (errstart(20, "src/backend/parser/ag_scanner.l", 713, __func__, 
# 713 "src/backend/parser/ag_scanner.l" 3 4
   ((void *)0)
# 713 "src/backend/parser/ag_scanner.l"
   )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('6') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), _scan_errmsg("unexpected character", &yyg->yyextra_r), _scan_errposition(yyg->yyextra_r.last_loc, &yyg->yyextra_r)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                        ;
}
 break;
case (42 + 0 + 1):
# 718 "src/backend/parser/ag_scanner.l"
{
    do { yyg->yyextra_r.last_loc = yyg->yytext_r - yyg->yyextra_r.scan_buf; } while (0);
    token.type = AG_TOKEN_NULL;
    token.value.c = '\0';
    token.location = (yyg->yyextra_r.last_loc);
    return token;
}
 break;
case 41:

# 726 "src/backend/parser/ag_scanner.l"
do { do { if (errstart(20, "src/backend/parser/ag_scanner.l", 726, __func__, 
# 726 "src/backend/parser/ag_scanner.l" 3 4
((void *)0)
# 726 "src/backend/parser/ag_scanner.l"
)) errfinish (errmsg_internal("%s", "flex scanner jammed")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 726 "src/backend/parser/ag_scanner.l" 3 4
((void *)0)
# 726 "src/backend/parser/ag_scanner.l"
, 
# 726 "src/backend/parser/ag_scanner.l" 3 4
((void *)0)
# 726 "src/backend/parser/ag_scanner.l"
); } while (0);
 break;
# 3583 "src/backend/parser/ag_scanner.c"

 case 42:
  {

  int yy_amount_of_matched_text = (int) (yy_cp - yyg->yytext_r) - 1;


  *yy_cp = yyg->yy_hold_char;
 

  if ( yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buffer_status == 0 )
   {
# 3604 "src/backend/parser/ag_scanner.c"
   yyg->yy_n_chars = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars;
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_input_file = yyg->yyin_r;
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buffer_status = 1;
   }
# 3616 "src/backend/parser/ag_scanner.c"
  if ( yyg->yy_c_buf_p <= &yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars] )
   {
   yy_state_type yy_next_state;

   yyg->yy_c_buf_p = yyg->yytext_r + yy_amount_of_matched_text;

   yy_current_state = yy_get_previous_state( yyscanner );
# 3633 "src/backend/parser/ag_scanner.c"
   yy_next_state = yy_try_NUL_trans( yy_current_state , yyscanner);

   yy_bp = yyg->yytext_r + 0;

   if ( yy_next_state )
    {

    yy_cp = ++yyg->yy_c_buf_p;
    yy_current_state = yy_next_state;
    goto yy_match;
    }

   else
    {
    yy_cp = yyg->yy_c_buf_p;
    goto yy_find_action;
    }
   }

  else switch ( yy_get_next_buffer( yyscanner ) )
   {
   case 1:
    {
    yyg->yy_did_buffer_switch_on_eof = 0;

    if ( ( 1) )
     {
# 3669 "src/backend/parser/ag_scanner.c"
     yyg->yy_c_buf_p = yyg->yytext_r + 0;

     yy_act = (42 + ((yyg->yy_start - 1) / 2) + 1);
     goto do_action;
     }

    else
     {
     if ( ! yyg->yy_did_buffer_switch_on_eof )
      ag_yyrestart( yyg->yyin_r , yyscanner );
     }
    break;
    }

   case 0:
    yyg->yy_c_buf_p =
     yyg->yytext_r + yy_amount_of_matched_text;

    yy_current_state = yy_get_previous_state( yyscanner );

    yy_cp = yyg->yy_c_buf_p;
    yy_bp = yyg->yytext_r + 0;
    goto yy_match;

   case 2:
    yyg->yy_c_buf_p =
    &yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars];

    yy_current_state = yy_get_previous_state( yyscanner );

    yy_cp = yyg->yy_c_buf_p;
    yy_bp = yyg->yytext_r + 0;
    goto yy_find_action;
   }
  break;
  }

 default:
  do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 3707, __func__, 
# 3707 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3707 "src/backend/parser/ag_scanner.c"
 )) errfinish (errmsg_internal("%s", "fatal flex scanner internal error--no action found")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 3707 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3707 "src/backend/parser/ag_scanner.c"
 , 
# 3707 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3707 "src/backend/parser/ag_scanner.c"
 ); } while (0)
                                                         ;
 }
  }
 }
}
# 3721 "src/backend/parser/ag_scanner.c"
static int yy_get_next_buffer (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 char *dest = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf;
 char *source = yyg->yytext_r;
 int number_to_move, i;
 int ret_val;

 if ( yyg->yy_c_buf_p > &yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars + 1] )
  do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 3730, __func__, 
# 3730 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3730 "src/backend/parser/ag_scanner.c"
 )) errfinish (errmsg_internal("%s", "fatal flex scanner internal error--end of buffer missed")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 3730 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3730 "src/backend/parser/ag_scanner.c"
 , 
# 3730 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3730 "src/backend/parser/ag_scanner.c"
 ); } while (0)
                                                             ;

 if ( yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_fill_buffer == 0 )
  {
  if ( yyg->yy_c_buf_p - yyg->yytext_r - 0 == 1 )
   {



   return 1;
   }

  else
   {



   return 2;
   }
  }




 number_to_move = (int) (yyg->yy_c_buf_p - yyg->yytext_r - 1);

 for ( i = 0; i < number_to_move; ++i )
  *(dest++) = *(source++);

 if ( yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buffer_status == 2 )



  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars = yyg->yy_n_chars = 0;

 else
  {
   int num_to_read =
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_size - number_to_move - 1;

  while ( num_to_read <= 0 )
   {


   YY_BUFFER_STATE b = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top];

   int yy_c_buf_p_offset =
    (int) (yyg->yy_c_buf_p - b->yy_ch_buf);

   if ( b->yy_is_our_buffer )
    {
    int new_size = b->yy_buf_size * 2;

    if ( new_size <= 0 )
     b->yy_buf_size += b->yy_buf_size / 8;
    else
     b->yy_buf_size *= 2;

    b->yy_ch_buf = (char *)

     ag_yyrealloc( (void *) b->yy_ch_buf,
        (yy_size_t) (b->yy_buf_size + 2) , yyscanner );
    }
   else

    b->yy_ch_buf = 
# 3796 "src/backend/parser/ag_scanner.c" 3 4
                  ((void *)0)
# 3796 "src/backend/parser/ag_scanner.c"
                      ;

   if ( ! b->yy_ch_buf )
    do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 3799, __func__, 
# 3799 "src/backend/parser/ag_scanner.c" 3 4
   ((void *)0)
# 3799 "src/backend/parser/ag_scanner.c"
   )) errfinish (errmsg_internal("%s", "fatal error - scanner input buffer overflow")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 3799 "src/backend/parser/ag_scanner.c" 3 4
   ((void *)0)
# 3799 "src/backend/parser/ag_scanner.c"
   , 
# 3799 "src/backend/parser/ag_scanner.c" 3 4
   ((void *)0)
# 3799 "src/backend/parser/ag_scanner.c"
   ); } while (0)
                                                   ;

   yyg->yy_c_buf_p = &b->yy_ch_buf[yy_c_buf_p_offset];

   num_to_read = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_size -
      number_to_move - 1;

   }

  if ( num_to_read > 8192 )
   num_to_read = 8192;


  if ( yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_is_interactive ) { int c = '*'; int n; for ( n = 0; n < num_to_read && (c = getc( yyg->yyin_r )) != 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 (-1) 
# 3813 "src/backend/parser/ag_scanner.c"
 && c != '\n'; ++n ) (&yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[number_to_move])[n] = (char) c; if ( c == '\n' ) (&yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[number_to_move])[n++] = (char) c; if ( c == 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 (-1) 
# 3813 "src/backend/parser/ag_scanner.c"
 && ferror( yyg->yyin_r ) ) do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 3813, __func__, 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3813 "src/backend/parser/ag_scanner.c"
 )) errfinish (errmsg_internal("%s", "input in flex scanner failed")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3813 "src/backend/parser/ag_scanner.c"
 , 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3813 "src/backend/parser/ag_scanner.c"
 ); } while (0); yyg->yy_n_chars = n; } else { 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 (*__errno_location ())
# 3813 "src/backend/parser/ag_scanner.c"
 =0; while ( (yyg->yy_n_chars = (int) fread((&yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[number_to_move]), 1, (yy_size_t) num_to_read, yyg->yyin_r)) == 0 && ferror(yyg->yyin_r)) { if( 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 (*__errno_location ()) 
# 3813 "src/backend/parser/ag_scanner.c"
 != 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 4
# 3813 "src/backend/parser/ag_scanner.c"
 ) { do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 3813, __func__, 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3813 "src/backend/parser/ag_scanner.c"
 )) errfinish (errmsg_internal("%s", "input in flex scanner failed")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3813 "src/backend/parser/ag_scanner.c"
 , 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 3813 "src/backend/parser/ag_scanner.c"
 ); } while (0); break; } 
# 3813 "src/backend/parser/ag_scanner.c" 3 4
 (*__errno_location ())
# 3813 "src/backend/parser/ag_scanner.c"
 =0; clearerr(yyg->yyin_r); } }
                                 ;

  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars = yyg->yy_n_chars;
  }

 if ( yyg->yy_n_chars == 0 )
  {
  if ( number_to_move == 0 )
   {
   ret_val = 1;
   ag_yyrestart( yyg->yyin_r , yyscanner);
   }

  else
   {
   ret_val = 2;
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buffer_status =
    2;
   }
  }

 else
  ret_val = 0;

 if ((yyg->yy_n_chars + number_to_move) > yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_size) {

  int new_size = yyg->yy_n_chars + number_to_move + (yyg->yy_n_chars >> 1);
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf = (char *) ag_yyrealloc(
   (void *) yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf, (yy_size_t) new_size , yyscanner );
  if ( ! yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf )
   do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 3844, __func__, 
# 3844 "src/backend/parser/ag_scanner.c" 3 4
  ((void *)0)
# 3844 "src/backend/parser/ag_scanner.c"
  )) errfinish (errmsg_internal("%s", "out of dynamic memory in yy_get_next_buffer()")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 3844 "src/backend/parser/ag_scanner.c" 3 4
  ((void *)0)
# 3844 "src/backend/parser/ag_scanner.c"
  , 
# 3844 "src/backend/parser/ag_scanner.c" 3 4
  ((void *)0)
# 3844 "src/backend/parser/ag_scanner.c"
  ); } while (0);

  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_size = (int) (new_size - 2);
 }

 yyg->yy_n_chars += number_to_move;
 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars] = 0;
 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars + 1] = 0;

 yyg->yytext_r = &yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[0];

 return ret_val;
}



    static yy_state_type yy_get_previous_state (yyscan_t yyscanner)
{
 yy_state_type yy_current_state;
 char *yy_cp;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 yy_current_state = yy_start_state_list[yyg->yy_start];

 for ( yy_cp = yyg->yytext_r + 0; yy_cp < yyg->yy_c_buf_p; ++yy_cp )
  {
  yy_current_state += yy_current_state[(*yy_cp ? ((YY_CHAR) (*yy_cp)) : 256)].yy_nxt;
  }

 return yy_current_state;
}






    static yy_state_type yy_try_NUL_trans (yy_state_type yy_current_state , yyscan_t yyscanner)
{
 int yy_is_jam;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 int yy_c = 256;
 const struct yy_trans_info *yy_trans_info;

 yy_trans_info = &yy_current_state[(unsigned int) yy_c];
 yy_current_state += yy_trans_info->yy_nxt;
 yy_is_jam = (yy_trans_info->yy_verify != yy_c);

 (void)yyg;
 return yy_is_jam ? 0 : yy_current_state;
}
# 3981 "src/backend/parser/ag_scanner.c"
    void ag_yyrestart (FILE * input_file , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 if ( ! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 3985 "src/backend/parser/ag_scanner.c" 3 4
       ((void *)0)
# 3985 "src/backend/parser/ag_scanner.c"
       ) ){
        ag_yyensure_buffer_stack (yyscanner);
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] =
            ag_yy_create_buffer( yyg->yyin_r, 16384 , yyscanner);
 }

 ag_yy_init_buffer( ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 3991 "src/backend/parser/ag_scanner.c" 3 4
                ((void *)0)
# 3991 "src/backend/parser/ag_scanner.c"
                ), input_file , yyscanner);
 ag_yy_load_buffer_state( yyscanner );
}





    void ag_yy_switch_to_buffer (YY_BUFFER_STATE new_buffer , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;






 ag_yyensure_buffer_stack (yyscanner);
 if ( ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4009 "src/backend/parser/ag_scanner.c" 3 4
     ((void *)0)
# 4009 "src/backend/parser/ag_scanner.c"
     ) == new_buffer )
  return;

 if ( ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4012 "src/backend/parser/ag_scanner.c" 3 4
     ((void *)0)
# 4012 "src/backend/parser/ag_scanner.c"
     ) )
  {

  *yyg->yy_c_buf_p = yyg->yy_hold_char;
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_pos = yyg->yy_c_buf_p;
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars = yyg->yy_n_chars;
  }

 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = new_buffer;
 ag_yy_load_buffer_state( yyscanner );






 yyg->yy_did_buffer_switch_on_eof = 1;
}

static void ag_yy_load_buffer_state (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 yyg->yy_n_chars = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars;
 yyg->yytext_r = yyg->yy_c_buf_p = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_pos;
 yyg->yyin_r = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_input_file;
 yyg->yy_hold_char = *yyg->yy_c_buf_p;
}







    YY_BUFFER_STATE ag_yy_create_buffer (FILE * file, int size , yyscan_t yyscanner)
{
 YY_BUFFER_STATE b;

 b = (YY_BUFFER_STATE) ag_yyalloc( sizeof( struct yy_buffer_state ) , yyscanner );
 if ( ! b )
  do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 4052, __func__, 
# 4052 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 4052 "src/backend/parser/ag_scanner.c"
 )) errfinish (errmsg_internal("%s", "out of dynamic memory in yy_create_buffer()")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 4052 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 4052 "src/backend/parser/ag_scanner.c"
 , 
# 4052 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 4052 "src/backend/parser/ag_scanner.c"
 ); } while (0);

 b->yy_buf_size = size;




 b->yy_ch_buf = (char *) ag_yyalloc( (yy_size_t) (b->yy_buf_size + 2) , yyscanner );
 if ( ! b->yy_ch_buf )
  do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 4061, __func__, 
# 4061 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 4061 "src/backend/parser/ag_scanner.c"
 )) errfinish (errmsg_internal("%s", "out of dynamic memory in yy_create_buffer()")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 4061 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 4061 "src/backend/parser/ag_scanner.c"
 , 
# 4061 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 4061 "src/backend/parser/ag_scanner.c"
 ); } while (0);

 b->yy_is_our_buffer = 1;

 ag_yy_init_buffer( b, file , yyscanner);

 return b;
}





    void ag_yy_delete_buffer (YY_BUFFER_STATE b , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 if ( ! b )
  return;

 if ( b == ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4081 "src/backend/parser/ag_scanner.c" 3 4
          ((void *)0)
# 4081 "src/backend/parser/ag_scanner.c"
          ) )
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = (YY_BUFFER_STATE) 0;

 if ( b->yy_is_our_buffer )
  ag_yyfree( (void *) b->yy_ch_buf , yyscanner );

 ag_yyfree( (void *) b , yyscanner );
}





    static void ag_yy_init_buffer (YY_BUFFER_STATE b, FILE * file , yyscan_t yyscanner)

{
 int oerrno = 
# 4097 "src/backend/parser/ag_scanner.c" 3 4
             (*__errno_location ())
# 4097 "src/backend/parser/ag_scanner.c"
                  ;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 ag_yy_flush_buffer( b , yyscanner);

 b->yy_input_file = file;
 b->yy_fill_buffer = 1;





    if (b != ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4109 "src/backend/parser/ag_scanner.c" 3 4
            ((void *)0)
# 4109 "src/backend/parser/ag_scanner.c"
            )){
        b->yy_bs_lineno = 1;
        b->yy_bs_column = 0;
    }

        b->yy_is_interactive = 0;

 
# 4116 "src/backend/parser/ag_scanner.c" 3 4
(*__errno_location ()) 
# 4116 "src/backend/parser/ag_scanner.c"
      = oerrno;
}





    void ag_yy_flush_buffer (YY_BUFFER_STATE b , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 if ( ! b )
  return;

 b->yy_n_chars = 0;





 b->yy_ch_buf[0] = 0;
 b->yy_ch_buf[1] = 0;

 b->yy_buf_pos = &b->yy_ch_buf[0];

 b->yy_at_bol = 1;
 b->yy_buffer_status = 0;

 if ( b == ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4143 "src/backend/parser/ag_scanner.c" 3 4
          ((void *)0)
# 4143 "src/backend/parser/ag_scanner.c"
          ) )
  ag_yy_load_buffer_state( yyscanner );
}







void ag_yypush_buffer_state (YY_BUFFER_STATE new_buffer , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 if (new_buffer == 
# 4156 "src/backend/parser/ag_scanner.c" 3 4
                  ((void *)0)
# 4156 "src/backend/parser/ag_scanner.c"
                      )
  return;

 ag_yyensure_buffer_stack(yyscanner);


 if ( ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4162 "src/backend/parser/ag_scanner.c" 3 4
     ((void *)0)
# 4162 "src/backend/parser/ag_scanner.c"
     ) )
  {

  *yyg->yy_c_buf_p = yyg->yy_hold_char;
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_pos = yyg->yy_c_buf_p;
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars = yyg->yy_n_chars;
  }


 if (( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4171 "src/backend/parser/ag_scanner.c" 3 4
    ((void *)0)
# 4171 "src/backend/parser/ag_scanner.c"
    ))
  yyg->yy_buffer_stack_top++;
 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = new_buffer;


 ag_yy_load_buffer_state( yyscanner );
 yyg->yy_did_buffer_switch_on_eof = 1;
}





void ag_yypop_buffer_state (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 if (!( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4187 "src/backend/parser/ag_scanner.c" 3 4
     ((void *)0)
# 4187 "src/backend/parser/ag_scanner.c"
     ))
  return;

 ag_yy_delete_buffer(( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4190 "src/backend/parser/ag_scanner.c" 3 4
                 ((void *)0)
# 4190 "src/backend/parser/ag_scanner.c"
                 ) , yyscanner);
 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = 
# 4191 "src/backend/parser/ag_scanner.c" 3 4
                           ((void *)0)
# 4191 "src/backend/parser/ag_scanner.c"
                               ;
 if (yyg->yy_buffer_stack_top > 0)
  --yyg->yy_buffer_stack_top;

 if (( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4195 "src/backend/parser/ag_scanner.c" 3 4
    ((void *)0)
# 4195 "src/backend/parser/ag_scanner.c"
    )) {
  ag_yy_load_buffer_state( yyscanner );
  yyg->yy_did_buffer_switch_on_eof = 1;
 }
}




static void ag_yyensure_buffer_stack (yyscan_t yyscanner)
{
 yy_size_t num_to_alloc;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 if (!yyg->yy_buffer_stack) {





      num_to_alloc = 1;
  yyg->yy_buffer_stack = (struct yy_buffer_state**)ag_yyalloc
        (num_to_alloc * sizeof(struct yy_buffer_state*)
        , yyscanner);
  if ( ! yyg->yy_buffer_stack )
   do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 4220, __func__, 
# 4220 "src/backend/parser/ag_scanner.c" 3 4
  ((void *)0)
# 4220 "src/backend/parser/ag_scanner.c"
  )) errfinish (errmsg_internal("%s", "out of dynamic memory in yyensure_buffer_stack()")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 4220 "src/backend/parser/ag_scanner.c" 3 4
  ((void *)0)
# 4220 "src/backend/parser/ag_scanner.c"
  , 
# 4220 "src/backend/parser/ag_scanner.c" 3 4
  ((void *)0)
# 4220 "src/backend/parser/ag_scanner.c"
  ); } while (0);

  memset(yyg->yy_buffer_stack, 0, num_to_alloc * sizeof(struct yy_buffer_state*));

  yyg->yy_buffer_stack_max = num_to_alloc;
  yyg->yy_buffer_stack_top = 0;
  return;
 }

 if (yyg->yy_buffer_stack_top >= (yyg->yy_buffer_stack_max) - 1){


  yy_size_t grow_size = 8 ;

  num_to_alloc = yyg->yy_buffer_stack_max + grow_size;
  yyg->yy_buffer_stack = (struct yy_buffer_state**)ag_yyrealloc
        (yyg->yy_buffer_stack,
        num_to_alloc * sizeof(struct yy_buffer_state*)
        , yyscanner);
  if ( ! yyg->yy_buffer_stack )
   do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 4240, __func__, 
# 4240 "src/backend/parser/ag_scanner.c" 3 4
  ((void *)0)
# 4240 "src/backend/parser/ag_scanner.c"
  )) errfinish (errmsg_internal("%s", "out of dynamic memory in yyensure_buffer_stack()")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 4240 "src/backend/parser/ag_scanner.c" 3 4
  ((void *)0)
# 4240 "src/backend/parser/ag_scanner.c"
  , 
# 4240 "src/backend/parser/ag_scanner.c" 3 4
  ((void *)0)
# 4240 "src/backend/parser/ag_scanner.c"
  ); } while (0);


  memset(yyg->yy_buffer_stack + yyg->yy_buffer_stack_max, 0, grow_size * sizeof(struct yy_buffer_state*));
  yyg->yy_buffer_stack_max = num_to_alloc;
 }
}







YY_BUFFER_STATE ag_yy_scan_buffer (char * base, yy_size_t size , yyscan_t yyscanner)
{
 YY_BUFFER_STATE b;

 if ( size < 2 ||
      base[size-2] != 0 ||
      base[size-1] != 0 )

  return 
# 4262 "src/backend/parser/ag_scanner.c" 3 4
        ((void *)0)
# 4262 "src/backend/parser/ag_scanner.c"
            ;

 b = (YY_BUFFER_STATE) ag_yyalloc( sizeof( struct yy_buffer_state ) , yyscanner );
 if ( ! b )
  do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 4266, __func__, 
# 4266 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 4266 "src/backend/parser/ag_scanner.c"
 )) errfinish (errmsg_internal("%s", "out of dynamic memory in yy_scan_buffer()")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 4266 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 4266 "src/backend/parser/ag_scanner.c"
 , 
# 4266 "src/backend/parser/ag_scanner.c" 3 4
 ((void *)0)
# 4266 "src/backend/parser/ag_scanner.c"
 ); } while (0);

 b->yy_buf_size = (int) (size - 2);
 b->yy_buf_pos = b->yy_ch_buf = base;
 b->yy_is_our_buffer = 0;
 b->yy_input_file = 
# 4271 "src/backend/parser/ag_scanner.c" 3 4
                   ((void *)0)
# 4271 "src/backend/parser/ag_scanner.c"
                       ;
 b->yy_n_chars = b->yy_buf_size;
 b->yy_is_interactive = 0;
 b->yy_at_bol = 1;
 b->yy_fill_buffer = 0;
 b->yy_buffer_status = 0;

 ag_yy_switch_to_buffer( b , yyscanner );

 return b;
}





static void __attribute__((__noreturn__)) yy_fatal_error (const char* msg , yyscan_t yyscanner)
{
 struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 (void)yyg;
 fprintf( 
# 4291 "src/backend/parser/ag_scanner.c" 3 4
         stderr
# 4291 "src/backend/parser/ag_scanner.c"
               , "%s\n", msg );
 exit( 2 );
}
# 4317 "src/backend/parser/ag_scanner.c"
ag_yy_extra ag_yyget_extra (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyg->yyextra_r;
}




int ag_yyget_column (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

        if (! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4330 "src/backend/parser/ag_scanner.c" 3 4
             ((void *)0)
# 4330 "src/backend/parser/ag_scanner.c"
             ))
            return 0;

    return (yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_bs_column);
}
# 4344 "src/backend/parser/ag_scanner.c"
void ag_yyset_extra (ag_yy_extra user_defined , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyg->yyextra_r = user_defined ;
}





void ag_yyset_column (int _column_no , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;


        if (! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4359 "src/backend/parser/ag_scanner.c" 3 4
             ((void *)0)
# 4359 "src/backend/parser/ag_scanner.c"
             ) )
           do { do { if (errstart(20, "src/backend/parser/ag_scanner.c", 4360, __func__, 
# 4360 "src/backend/parser/ag_scanner.c" 3 4
          ((void *)0)
# 4360 "src/backend/parser/ag_scanner.c"
          )) errfinish (errmsg_internal("%s", "yyset_column called with no buffer")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0); yy_fatal_error(
# 4360 "src/backend/parser/ag_scanner.c" 3 4
          ((void *)0)
# 4360 "src/backend/parser/ag_scanner.c"
          , 
# 4360 "src/backend/parser/ag_scanner.c" 3 4
          ((void *)0)
# 4360 "src/backend/parser/ag_scanner.c"
          ); } while (0);

    (yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_bs_column) = _column_no;
}
# 4373 "src/backend/parser/ag_scanner.c"
int ag_yylex_init(yyscan_t* ptr_yy_globals)
{
    if (ptr_yy_globals == 
# 4375 "src/backend/parser/ag_scanner.c" 3 4
                         ((void *)0)
# 4375 "src/backend/parser/ag_scanner.c"
                             ){
        
# 4376 "src/backend/parser/ag_scanner.c" 3 4
       (*__errno_location ()) 
# 4376 "src/backend/parser/ag_scanner.c"
             = 
# 4376 "src/backend/parser/ag_scanner.c" 3 4
               22
# 4376 "src/backend/parser/ag_scanner.c"
                     ;
        return 1;
    }

    *ptr_yy_globals = (yyscan_t) ag_yyalloc ( sizeof( struct yyguts_t ), 
# 4380 "src/backend/parser/ag_scanner.c" 3 4
                                                                     ((void *)0) 
# 4380 "src/backend/parser/ag_scanner.c"
                                                                          );

    if (*ptr_yy_globals == 
# 4382 "src/backend/parser/ag_scanner.c" 3 4
                          ((void *)0)
# 4382 "src/backend/parser/ag_scanner.c"
                              ){
        
# 4383 "src/backend/parser/ag_scanner.c" 3 4
       (*__errno_location ()) 
# 4383 "src/backend/parser/ag_scanner.c"
             = 
# 4383 "src/backend/parser/ag_scanner.c" 3 4
               12
# 4383 "src/backend/parser/ag_scanner.c"
                     ;
        return 1;
    }


    memset(*ptr_yy_globals,0x00,sizeof(struct yyguts_t));

    return yy_init_globals ( *ptr_yy_globals );
}
# 4400 "src/backend/parser/ag_scanner.c"
int ag_yylex_init_extra( ag_yy_extra yy_user_defined, yyscan_t* ptr_yy_globals )
{
    struct yyguts_t dummy_yyguts;

    ag_yyset_extra (yy_user_defined, &dummy_yyguts);

    if (ptr_yy_globals == 
# 4406 "src/backend/parser/ag_scanner.c" 3 4
                         ((void *)0)
# 4406 "src/backend/parser/ag_scanner.c"
                             ){
        
# 4407 "src/backend/parser/ag_scanner.c" 3 4
       (*__errno_location ()) 
# 4407 "src/backend/parser/ag_scanner.c"
             = 
# 4407 "src/backend/parser/ag_scanner.c" 3 4
               22
# 4407 "src/backend/parser/ag_scanner.c"
                     ;
        return 1;
    }

    *ptr_yy_globals = (yyscan_t) ag_yyalloc ( sizeof( struct yyguts_t ), &dummy_yyguts );

    if (*ptr_yy_globals == 
# 4413 "src/backend/parser/ag_scanner.c" 3 4
                          ((void *)0)
# 4413 "src/backend/parser/ag_scanner.c"
                              ){
        
# 4414 "src/backend/parser/ag_scanner.c" 3 4
       (*__errno_location ()) 
# 4414 "src/backend/parser/ag_scanner.c"
             = 
# 4414 "src/backend/parser/ag_scanner.c" 3 4
               12
# 4414 "src/backend/parser/ag_scanner.c"
                     ;
        return 1;
    }



    memset(*ptr_yy_globals,0x00,sizeof(struct yyguts_t));

    ag_yyset_extra (yy_user_defined, *ptr_yy_globals);

    return yy_init_globals ( *ptr_yy_globals );
}

static int yy_init_globals (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;




    yyg->yy_buffer_stack = 
# 4434 "src/backend/parser/ag_scanner.c" 3 4
                          ((void *)0)
# 4434 "src/backend/parser/ag_scanner.c"
                              ;
    yyg->yy_buffer_stack_top = 0;
    yyg->yy_buffer_stack_max = 0;
    yyg->yy_c_buf_p = 
# 4437 "src/backend/parser/ag_scanner.c" 3 4
                     ((void *)0)
# 4437 "src/backend/parser/ag_scanner.c"
                         ;
    yyg->yy_init = 0;
    yyg->yy_start = 0;

    yyg->yy_start_stack_ptr = 0;
    yyg->yy_start_stack_depth = 0;
    yyg->yy_start_stack = 
# 4443 "src/backend/parser/ag_scanner.c" 3 4
                          ((void *)0)
# 4443 "src/backend/parser/ag_scanner.c"
                              ;






    yyg->yyin_r = 
# 4450 "src/backend/parser/ag_scanner.c" 3 4
          ((void *)0)
# 4450 "src/backend/parser/ag_scanner.c"
              ;
    yyg->yyout_r = 
# 4451 "src/backend/parser/ag_scanner.c" 3 4
           ((void *)0)
# 4451 "src/backend/parser/ag_scanner.c"
               ;





    return 0;
}


int ag_yylex_destroy (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;


 while(( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4466 "src/backend/parser/ag_scanner.c" 3 4
      ((void *)0)
# 4466 "src/backend/parser/ag_scanner.c"
      )){
  ag_yy_delete_buffer( ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
# 4467 "src/backend/parser/ag_scanner.c" 3 4
                   ((void *)0)
# 4467 "src/backend/parser/ag_scanner.c"
                   ) , yyscanner );
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = 
# 4468 "src/backend/parser/ag_scanner.c" 3 4
                            ((void *)0)
# 4468 "src/backend/parser/ag_scanner.c"
                                ;
  ag_yypop_buffer_state(yyscanner);
 }


 ag_yyfree(yyg->yy_buffer_stack , yyscanner);
 yyg->yy_buffer_stack = 
# 4474 "src/backend/parser/ag_scanner.c" 3 4
                       ((void *)0)
# 4474 "src/backend/parser/ag_scanner.c"
                           ;


        ag_yyfree( yyg->yy_start_stack , yyscanner );
        yyg->yy_start_stack = 
# 4478 "src/backend/parser/ag_scanner.c" 3 4
                             ((void *)0)
# 4478 "src/backend/parser/ag_scanner.c"
                                 ;



    yy_init_globals( yyscanner);


    ag_yyfree ( yyscanner , yyscanner );
    yyscanner = 
# 4486 "src/backend/parser/ag_scanner.c" 3 4
               ((void *)0)
# 4486 "src/backend/parser/ag_scanner.c"
                   ;
    return 0;
}
# 726 "src/backend/parser/ag_scanner.l"







void *ag_yyalloc(yy_size_t size, yyscan_t yyscanner)
{
    return palloc(size);
}

void *ag_yyrealloc(void *ptr, yy_size_t size, yyscan_t yyscanner)
{

    if (ptr)
    {
        if (size == 0)
        {
            pfree(ptr);
            return 
# 746 "src/backend/parser/ag_scanner.l" 3 4
                  ((void *)0)
# 746 "src/backend/parser/ag_scanner.l"
                      ;
        }
        else
        {
            return repalloc(ptr, size);
        }
    }
    else
    {
        return palloc(size);
    }
}

void ag_yyfree(void *ptr, yyscan_t yyscanner)
{
    if (ptr)
        pfree(ptr);
}

static void strbuf_init(strbuf *sb, int capacity)
{
    sb->buffer = palloc(capacity);
    sb->capacity = capacity;
    sb->length = 0;
}

static void strbuf_cleanup(strbuf *sb)
{
    if (sb->buffer)
        pfree(sb->buffer);
}

static void strbuf_append_buf(strbuf *sb, const char *b, const int len)
{
    strbuf_ensure_capacity(sb, sb->length + len);
    memcpy(sb->buffer + sb->length, b, len);
    sb->length += len;
}

static void strbuf_append_char(strbuf *sb, const char c)
{
    strbuf_ensure_capacity(sb, sb->length + 1);
    sb->buffer[sb->length] = c;
    sb->length += 1;
}

static void strbuf_append_codepoint(strbuf *sb, const pg_wchar c)
{
    unsigned char buf[6];

    unicode_to_utf8(c, buf);
    strbuf_append_buf(sb, (char *)buf, pg_utf_mblen(buf));
}





static void strbuf_ensure_capacity(strbuf *sb, int len)
{

    if (len < sb->capacity)
        return;

    do
    {
        sb->capacity *= 2;
    } while (sb->capacity <= len);

    sb->buffer = repalloc(sb->buffer, sb->capacity);
}

static const char *strbuf_get_str(strbuf *sb)
{
    sb->buffer[sb->length] = '\0';
    return sb->buffer;
}

static void strbuf_reset(strbuf *sb)
{
    sb->length = 0;
}

static void integer_literal_to_token(const char *s, ag_token *token,
                                     ag_yy_extra *extra)
{
    char *endptr;
    int i;

    
# 835 "src/backend/parser/ag_scanner.l" 3 4
   (*__errno_location ()) 
# 835 "src/backend/parser/ag_scanner.l"
         = 0;
    i = strtoint(s, &endptr, 0);





    if (*endptr != '\0')
    {
        do { if (errstart(20, "src/backend/parser/ag_scanner.l", 844, __func__, 
# 844 "src/backend/parser/ag_scanner.l" 3 4
       ((void *)0)
# 844 "src/backend/parser/ag_scanner.l"
       )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('6') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), _scan_errmsg("invalid octal integer literal", extra), _scan_errposition(extra->last_loc, extra)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                                                   ;
    }


    if (
# 850 "src/backend/parser/ag_scanner.l" 3 4
       (*__errno_location ()) 
# 850 "src/backend/parser/ag_scanner.l"
             == 
# 850 "src/backend/parser/ag_scanner.l" 3 4
                34
# 850 "src/backend/parser/ag_scanner.l"
                      )
    {






        if (s[0] == '0')
        {
            strbuf_reset(&extra->literal_buf);







            if (s[1] == 'X' || s[1] == 'x')
                _numstr_to_decimal(s + 2, 16, &extra->literal_buf);
            else
                _numstr_to_decimal(s + 1, 8, &extra->literal_buf);

            s = strbuf_get_str(&extra->literal_buf);
        }
        token->type = AG_TOKEN_DECIMAL;
        token->value.s = s;
        return;
    }

    token->type = AG_TOKEN_INTEGER;
    token->value.i = i;
}





static void _numstr_to_decimal(const char *numstr, const int base, strbuf *sb)
{

    int ndigits_per_word;
    int nbits_per_digit;
    uint32 (*digit_value)(const char);
# 904 "src/backend/parser/ag_scanner.l"
    const uint64 divisor = 1000000000;
    const int ndivisions = 3;
    const int ndigits_per_remainder = 9;

    int ndigits;
    int nwords;
    uint32 *words;
    const char *digitp;
    int word_i;
    int ndigits_word0;
    uint32 word;
    uint32 *remainders;
    int nremainders;
    int i;


    switch (base)
    {
    case 16:
# 940 "src/backend/parser/ag_scanner.l"
        ndigits_per_word = 8;
        nbits_per_digit = 4;
        digit_value = hexdigit_value;
        break;
    case 8:
# 962 "src/backend/parser/ag_scanner.l"
        ndigits_per_word = 10;
        nbits_per_digit = 3;
        digit_value = octdigit_value;
        break;
    default:
        ((void)
# 967 "src/backend/parser/ag_scanner.l" 3 4
       1
# 967 "src/backend/parser/ag_scanner.l"
       );
        return;
    }


    while (*numstr == '0')
        numstr++;


    ndigits = strlen(numstr);
    ((void)
# 977 "src/backend/parser/ag_scanner.l" 3 4
   1
# 977 "src/backend/parser/ag_scanner.l"
   );


    nwords = (ndigits + (ndigits_per_word - 1)) / ndigits_per_word;
    words = palloc(sizeof(*words) * nwords);

    digitp = numstr;
    word_i = 0;


    ndigits_word0 = ndigits % ndigits_per_word;
    if (ndigits_word0 == 0)
        ndigits_word0 = ndigits_per_word;


    word = digit_value(*digitp++);
    for (i = 1; i < ndigits_word0; i++)
    {
        word <<= nbits_per_digit;
        word |= digit_value(*digitp++);
    }
    words[word_i++] = word;


    while (word_i < nwords)
    {
        word = digit_value(*digitp++);
        for (i = 1; i < ndigits_per_word; i++)
        {
            word <<= nbits_per_digit;
            word |= digit_value(*digitp++);
        }
        words[word_i++] = word;
    }


    remainders = palloc(sizeof(*remainders) * (ndivisions * nwords));

    nremainders = 0;
    word_i = 0;

    while (word_i < nwords)
    {
        uint64 r;

        r = 0;

        for (i = word_i; i < nwords; i++)
        {
            uint64 d;
            uint64 q;

            d = (uint64)words[i];
            d |= r << (nbits_per_digit * ndigits_per_word);

            q = d / divisor;
            r = d % divisor;

            words[i] = (uint32)q;
        }


        remainders[nremainders++] = (uint32)r;





        if (words[word_i] == 0)
            word_i++;
    }


    for (i = nremainders - 1; i >= 0; i--)
    {
        char buf[ndigits_per_remainder];
        int buf_i;
        uint32 tmp;

        buf_i = ndigits_per_remainder;

        for (tmp = remainders[i]; tmp > 0; tmp /= 10)
            buf[--buf_i] = '0' + (char)(tmp % 10);


        if (i < nremainders - 1)
        {
            while (buf_i > 0)
                buf[--buf_i] = '0';
        }

        strbuf_append_buf(sb, &buf[buf_i], ndigits_per_remainder - buf_i);
    }

    pfree(remainders);
    pfree(words);
}

static uint32 hexdigit_value(const char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';

    if (c >= 'A' && c <= 'F')
        return 0xA + (c - 'A');

    ((void)
# 1083 "src/backend/parser/ag_scanner.l" 3 4
   1
# 1083 "src/backend/parser/ag_scanner.l"
   );
    return 0xA + (c - 'a');
}

static uint32 octdigit_value(const char c)
{
    ((void)
# 1089 "src/backend/parser/ag_scanner.l" 3 4
   1
# 1089 "src/backend/parser/ag_scanner.l"
   );
    return c - '0';
}

static 
# 1093 "src/backend/parser/ag_scanner.l" 3 4
      _Bool 
# 1093 "src/backend/parser/ag_scanner.l"
           is_high_surrogate(const pg_wchar c)
{
    return (c >= 0xD800 && c <= 0xDBFF);
}

static 
# 1098 "src/backend/parser/ag_scanner.l" 3 4
      _Bool 
# 1098 "src/backend/parser/ag_scanner.l"
           is_low_surrogate(const pg_wchar c)
{
    return (c >= 0xDC00 && c <= 0xDFFF);
}


static pg_wchar surrogate_pair_to_codepoint(const pg_wchar hi,
                                            const pg_wchar lo)
{
    const pg_wchar surrogate_offset = 0x10000 - (0xD800 << 10) - 0xDC00;

    return (hi << 10) + lo + surrogate_offset;
}

static int _scan_errmsg(const char *msg, const ag_yy_extra *extra)
{
    const char *t = extra->scan_buf + extra->last_loc;

    if (t[0] == 0)
        return errmsg("%s at end of input", msg);
    else
        return errmsg("%s at or near \"%s\"", msg, t);
}

static int _scan_errposition(const int location, const ag_yy_extra *extra)
{
    int pos;


    if (location < 0)
        return 0;


    pos = pg_mbstrlen_with_len(extra->scan_buf, location) + 1;

    return errposition(pos);
}

ag_scanner_t ag_scanner_create(const char *s)
{
    Size len;
    char *buf;
    yyscan_t yyscanner;
    ag_yy_extra extra;
    int ret;


    len = strlen(s);
    buf = palloc(len + 2);
    memcpy(buf, s, len);
    buf[len] = 0;
    buf[len + 1] = 0;

    ret = ag_yylex_init(&yyscanner);
    if (ret)
        do { elog_start("src/backend/parser/ag_scanner.l", 1153, __func__); elog_finish(20, "ag_yylex_init() failed: %m"); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0);

    strbuf_init(&extra.literal_buf, 1024);
    extra.high_surrogate = 0;
    extra.start_cond = 0;
    extra.scan_buf = buf;
    extra.last_loc = 0;
    ag_yyset_extra(extra, yyscanner);

    ag_yy_scan_buffer(buf, len + 2, yyscanner);

    return yyscanner;
}

void ag_scanner_destroy(ag_scanner_t scanner)
{
    ag_yy_extra extra;

    extra = ag_yyget_extra(scanner);
    strbuf_cleanup(&extra.literal_buf);

    ag_yylex_destroy(scanner);
}

int ag_scanner_errmsg(const char *msg, ag_scanner_t *scanner)
{
    ag_yy_extra extra;

    extra = ag_yyget_extra(scanner);

    return _scan_errmsg(msg, &extra);
}

int ag_scanner_errposition(const int location, ag_scanner_t *scanner)
{
    ag_yy_extra extra;

    extra = ag_yyget_extra(scanner);

    return _scan_errposition(location, &extra);
}
