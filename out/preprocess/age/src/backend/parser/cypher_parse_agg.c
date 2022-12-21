# 0 "src/backend/parser/cypher_parse_agg.c"
# 1 "/age//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/backend/parser/cypher_parse_agg.c"
# 25 "src/backend/parser/cypher_parse_agg.c"
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
# 26 "src/backend/parser/cypher_parse_agg.c" 2

# 1 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 1
# 21 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
# 1 "/usr/include/postgresql/11/server/catalog/genbki.h" 1
# 22 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 2
# 1 "/usr/include/postgresql/11/server/catalog/pg_constraint_d.h" 1
# 23 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 2

# 1 "/usr/include/postgresql/11/server/catalog/dependency.h" 1
# 17 "/usr/include/postgresql/11/server/catalog/dependency.h"
# 1 "/usr/include/postgresql/11/server/catalog/objectaddress.h" 1
# 16 "/usr/include/postgresql/11/server/catalog/objectaddress.h"
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
# 17 "/usr/include/postgresql/11/server/catalog/objectaddress.h" 2
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
# 18 "/usr/include/postgresql/11/server/catalog/objectaddress.h" 2
# 1 "/usr/include/postgresql/11/server/utils/acl.h" 1
# 35 "/usr/include/postgresql/11/server/utils/acl.h"
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
# 36 "/usr/include/postgresql/11/server/utils/acl.h" 2
# 1 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 1
# 25 "/usr/include/postgresql/11/server/nodes/parsenodes.h"
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
# 26 "/usr/include/postgresql/11/server/nodes/parsenodes.h" 2
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
# 20 "/usr/include/postgresql/11/server/nodes/primnodes.h"
# 1 "/usr/include/postgresql/11/server/access/attnum.h" 1
# 21 "/usr/include/postgresql/11/server/access/attnum.h"
typedef int16 AttrNumber;
# 21 "/usr/include/postgresql/11/server/nodes/primnodes.h" 2
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
# 17 "/usr/include/postgresql/11/server/utils/queryenvironment.h"
# 1 "/usr/include/postgresql/11/server/access/tupdesc.h" 1
# 18 "/usr/include/postgresql/11/server/access/tupdesc.h"
# 1 "/usr/include/postgresql/11/server/catalog/pg_attribute.h" 1
# 26 "/usr/include/postgresql/11/server/catalog/pg_attribute.h"
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
# 18 "/usr/include/postgresql/11/server/utils/queryenvironment.h" 2


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
# 1 "/usr/include/postgresql/11/server/utils/relcache.h" 1
# 26 "/usr/include/postgresql/11/server/utils/relcache.h"
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
# 20 "/usr/include/postgresql/11/server/parser/parse_node.h" 2
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
# 64 "/usr/include/postgresql/11/server/utils/array.h"
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
# 65 "/usr/include/postgresql/11/server/utils/array.h" 2
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
# 1 "/usr/include/postgresql/11/server/utils/snapshot.h" 1
# 17 "/usr/include/postgresql/11/server/utils/snapshot.h"
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
# 18 "/usr/include/postgresql/11/server/utils/snapshot.h" 2
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
# 14 "/usr/include/postgresql/11/server/lib/pairingheap.h"
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
# 15 "/usr/include/postgresql/11/server/lib/pairingheap.h" 2
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
# 40 "/usr/include/postgresql/11/server/utils/acl.h" 2
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
# 18 "/usr/include/postgresql/11/server/catalog/dependency.h" 2
# 87 "/usr/include/postgresql/11/server/catalog/dependency.h"
typedef enum DependencyType
{
 DEPENDENCY_NORMAL = 'n',
 DEPENDENCY_AUTO = 'a',
 DEPENDENCY_INTERNAL = 'i',
 DEPENDENCY_INTERNAL_AUTO = 'I',
 DEPENDENCY_EXTENSION = 'e',
 DEPENDENCY_AUTO_EXTENSION = 'x',
 DEPENDENCY_PIN = 'p'
} DependencyType;
# 134 "/usr/include/postgresql/11/server/catalog/dependency.h"
typedef enum SharedDependencyType
{
 SHARED_DEPENDENCY_PIN = 'p',
 SHARED_DEPENDENCY_OWNER = 'o',
 SHARED_DEPENDENCY_ACL = 'a',
 SHARED_DEPENDENCY_POLICY = 'r',
 SHARED_DEPENDENCY_TABLESPACE = 't',
 SHARED_DEPENDENCY_INVALID = 0
} SharedDependencyType;


typedef struct ObjectAddresses ObjectAddresses;





typedef enum ObjectClass
{
 OCLASS_CLASS,
 OCLASS_PROC,
 OCLASS_TYPE,
 OCLASS_CAST,
 OCLASS_COLLATION,
 OCLASS_CONSTRAINT,
 OCLASS_CONVERSION,
 OCLASS_DEFAULT,
 OCLASS_LANGUAGE,
 OCLASS_LARGEOBJECT,
 OCLASS_OPERATOR,
 OCLASS_OPCLASS,
 OCLASS_OPFAMILY,
 OCLASS_AM,
 OCLASS_AMOP,
 OCLASS_AMPROC,
 OCLASS_REWRITE,
 OCLASS_TRIGGER,
 OCLASS_SCHEMA,
 OCLASS_STATISTIC_EXT,
 OCLASS_TSPARSER,
 OCLASS_TSDICT,
 OCLASS_TSTEMPLATE,
 OCLASS_TSCONFIG,
 OCLASS_ROLE,
 OCLASS_DATABASE,
 OCLASS_TBLSPACE,
 OCLASS_FDW,
 OCLASS_FOREIGN_SERVER,
 OCLASS_USER_MAPPING,
 OCLASS_DEFACL,
 OCLASS_EXTENSION,
 OCLASS_EVENT_TRIGGER,
 OCLASS_POLICY,
 OCLASS_PUBLICATION,
 OCLASS_PUBLICATION_REL,
 OCLASS_SUBSCRIPTION,
 OCLASS_TRANSFORM
} ObjectClass;
# 205 "/usr/include/postgresql/11/server/catalog/dependency.h"
extern void AcquireDeletionLock(const ObjectAddress *object, int flags);

extern void ReleaseDeletionLock(const ObjectAddress *object);

extern void performDeletion(const ObjectAddress *object,
    DropBehavior behavior, int flags);

extern void performMultipleDeletions(const ObjectAddresses *objects,
       DropBehavior behavior, int flags);

extern void recordDependencyOnExpr(const ObjectAddress *depender,
        Node *expr, List *rtable,
        DependencyType behavior);

extern void recordDependencyOnSingleRelExpr(const ObjectAddress *depender,
        Node *expr, Oid relId,
        DependencyType behavior,
        DependencyType self_behavior,
        
# 223 "/usr/include/postgresql/11/server/catalog/dependency.h" 3 4
       _Bool 
# 223 "/usr/include/postgresql/11/server/catalog/dependency.h"
            reverse_self);

extern ObjectClass getObjectClass(const ObjectAddress *object);

extern ObjectAddresses *new_object_addresses(void);

extern void add_exact_object_address(const ObjectAddress *object,
       ObjectAddresses *addrs);

extern 
# 232 "/usr/include/postgresql/11/server/catalog/dependency.h" 3 4
      _Bool 
# 232 "/usr/include/postgresql/11/server/catalog/dependency.h"
           object_address_present(const ObjectAddress *object,
        const ObjectAddresses *addrs);

extern void record_object_address_dependencies(const ObjectAddress *depender,
           ObjectAddresses *referenced,
           DependencyType behavior);

extern void free_object_addresses(ObjectAddresses *addrs);



extern void recordDependencyOn(const ObjectAddress *depender,
       const ObjectAddress *referenced,
       DependencyType behavior);

extern void recordMultipleDependencies(const ObjectAddress *depender,
         const ObjectAddress *referenced,
         int nreferenced,
         DependencyType behavior);

extern void recordDependencyOnCurrentExtension(const ObjectAddress *object,
           
# 253 "/usr/include/postgresql/11/server/catalog/dependency.h" 3 4
          _Bool 
# 253 "/usr/include/postgresql/11/server/catalog/dependency.h"
               isReplace);

extern void checkMembershipInCurrentExtension(const ObjectAddress *object);

extern long deleteDependencyRecordsFor(Oid classId, Oid objectId,
         
# 258 "/usr/include/postgresql/11/server/catalog/dependency.h" 3 4
        _Bool 
# 258 "/usr/include/postgresql/11/server/catalog/dependency.h"
             skipExtensionDeps);

extern long deleteDependencyRecordsForClass(Oid classId, Oid objectId,
        Oid refclassId, char deptype);

extern long changeDependencyFor(Oid classId, Oid objectId,
     Oid refClassId, Oid oldRefObjectId,
     Oid newRefObjectId);

extern Oid getExtensionOfObject(Oid classId, Oid objectId);
extern List *getAutoExtensionsOfObject(Oid classId, Oid objectId);

extern 
# 270 "/usr/include/postgresql/11/server/catalog/dependency.h" 3 4
      _Bool 
# 270 "/usr/include/postgresql/11/server/catalog/dependency.h"
           sequenceIsOwned(Oid seqId, char deptype, Oid *tableId, int32 *colId);
extern List *getOwnedSequences(Oid relid, AttrNumber attnum);
extern Oid getOwnedSequence(Oid relid, AttrNumber attnum);

extern Oid get_constraint_index(Oid constraintId);

extern Oid get_index_constraint(Oid indexId);



extern void recordSharedDependencyOn(ObjectAddress *depender,
       ObjectAddress *referenced,
       SharedDependencyType deptype);

extern void deleteSharedDependencyRecordsFor(Oid classId, Oid objectId,
         int32 objectSubId);

extern void recordDependencyOnOwner(Oid classId, Oid objectId, Oid owner);

extern void changeDependencyOnOwner(Oid classId, Oid objectId,
      Oid newOwnerId);

extern void recordDependencyOnTablespace(Oid classId, Oid objectId,
           Oid tablespace);

extern void changeDependencyOnTablespace(Oid classId, Oid objectId,
           Oid newTablespaceId);

extern void updateAclDependencies(Oid classId, Oid objectId, int32 objectSubId,
       Oid ownerId,
       int noldmembers, Oid *oldmembers,
       int nnewmembers, Oid *newmembers);

extern 
# 303 "/usr/include/postgresql/11/server/catalog/dependency.h" 3 4
      _Bool 
# 303 "/usr/include/postgresql/11/server/catalog/dependency.h"
           checkSharedDependencies(Oid classId, Oid objectId,
      char **detail_msg, char **detail_log_msg);

extern void shdepLockAndCheckObject(Oid classId, Oid objectId);

extern void copyTemplateDependencies(Oid templateDbId, Oid newDbId);

extern void dropDatabaseDependencies(Oid databaseId);

extern void shdepDropOwned(List *relids, DropBehavior behavior);

extern void shdepReassignOwned(List *relids, Oid newrole);
# 25 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 2







typedef struct FormData_pg_constraint
{
# 47 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
 NameData conname;
 Oid connamespace;
 char contype;
 
# 50 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
_Bool 
# 50 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
      condeferrable;
 
# 51 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
_Bool 
# 51 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
      condeferred;
 
# 52 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
_Bool 
# 52 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
      convalidated;






 Oid conrelid;
# 68 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
 Oid contypid;
# 78 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
 Oid conindid;





 Oid conparentid;





 Oid confrelid;
 char confupdtype;
 char confdeltype;
 char confmatchtype;


 
# 96 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
_Bool 
# 96 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
      conislocal;


 int32 coninhcount;


 
# 102 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
_Bool 
# 102 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
      connoinherit;
# 151 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
} FormData_pg_constraint;






typedef FormData_pg_constraint *Form_pg_constraint;
# 181 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
typedef enum ConstraintCategory
{
 CONSTRAINT_RELATION,
 CONSTRAINT_DOMAIN,
 CONSTRAINT_ASSERTION
} ConstraintCategory;





typedef struct ClonedConstraint
{
 Oid relid;
 Oid refrelid;
 Oid conindid;
 Oid conid;
 Constraint *constraint;
} ClonedConstraint;


extern Oid CreateConstraintEntry(const char *constraintName,
       Oid constraintNamespace,
       char constraintType,
       
# 205 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
      _Bool 
# 205 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
           isDeferrable,
       
# 206 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
      _Bool 
# 206 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
           isDeferred,
       
# 207 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
      _Bool 
# 207 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
           isValidated,
       Oid parentConstrId,
       Oid relId,
       const int16 *constraintKey,
       int constraintNKeys,
       int constraintNTotalKeys,
       Oid domainId,
       Oid indexRelId,
       Oid foreignRelId,
       const int16 *foreignKey,
       const Oid *pfEqOp,
       const Oid *ppEqOp,
       const Oid *ffEqOp,
       int foreignNKeys,
       char foreignUpdateType,
       char foreignDeleteType,
       char foreignMatchType,
       const Oid *exclOp,
       Node *conExpr,
       const char *conBin,
       const char *conSrc,
       
# 228 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
      _Bool 
# 228 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
           conIsLocal,
       int conInhCount,
       
# 230 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
      _Bool 
# 230 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
           conNoInherit,
       
# 231 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
      _Bool 
# 231 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
           is_internal);

extern void RemoveConstraintById(Oid conId);
extern void RenameConstraintById(Oid conId, const char *newname);

extern 
# 236 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
      _Bool 
# 236 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
           ConstraintNameIsUsed(ConstraintCategory conCat, Oid objId,
      const char *conname);
extern 
# 238 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
      _Bool 
# 238 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
           ConstraintNameExists(const char *conname, Oid namespaceid);
extern char *ChooseConstraintName(const char *name1, const char *name2,
      const char *label, Oid namespaceid,
      List *others);

extern void AlterConstraintNamespaces(Oid ownerId, Oid oldNspId,
        Oid newNspId, 
# 244 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
                     _Bool 
# 244 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
                          isType, ObjectAddresses *objsMoved);
extern void ConstraintSetParentConstraint(Oid childConstrId,
         Oid parentConstrId);
extern Oid get_relation_constraint_oid(Oid relid, const char *conname, 
# 247 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
                                                                      _Bool 
# 247 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
                                                                           missing_ok);
extern Bitmapset *get_relation_constraint_attnos(Oid relid, const char *conname,
          
# 249 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
         _Bool 
# 249 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
              missing_ok, Oid *constraintOid);
extern Oid get_domain_constraint_oid(Oid typid, const char *conname, 
# 250 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
                                                                    _Bool 
# 250 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
                                                                         missing_ok);
extern Oid get_relation_idx_constraint_oid(Oid relationId, Oid indexId);

extern Bitmapset *get_primary_key_attnos(Oid relid, 
# 253 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
                                                   _Bool 
# 253 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
                                                        deferrableOk,
        Oid *constraintOid);
extern void DeconstructFkConstraintRow(HeapTuple tuple, int *numfks,
         AttrNumber *conkey, AttrNumber *confkey,
         Oid *pf_eq_oprs, Oid *pp_eq_oprs, Oid *ff_eq_oprs);

extern 
# 259 "/usr/include/postgresql/11/server/catalog/pg_constraint.h" 3 4
      _Bool 
# 259 "/usr/include/postgresql/11/server/catalog/pg_constraint.h"
           check_functional_grouping(Oid relid,
        Index varno, Index varlevelsup,
        List *grouping_columns,
        List **constraintDeps);
# 28 "src/backend/parser/cypher_parse_agg.c" 2
# 1 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 1
# 30 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
typedef 
# 30 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
       _Bool 
# 30 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
            (*check_function_callback) (Oid func_id, void *context);


extern Oid exprType(const Node *expr);
extern int32 exprTypmod(const Node *expr);
extern 
# 35 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
      _Bool 
# 35 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
           exprIsLengthCoercion(const Node *expr, int32 *coercedTypmod);
extern Node *relabel_to_typmod(Node *expr, int32 typmod);
extern Node *strip_implicit_coercions(Node *node);
extern 
# 38 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
      _Bool 
# 38 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
           expression_returns_set(Node *clause);

extern Oid exprCollation(const Node *expr);
extern Oid exprInputCollation(const Node *expr);
extern void exprSetCollation(Node *expr, Oid collation);
extern void exprSetInputCollation(Node *expr, Oid inputcollation);

extern int exprLocation(const Node *expr);

extern void fix_opfuncids(Node *node);
extern void set_opfuncid(OpExpr *opexpr);
extern void set_sa_opfuncid(ScalarArrayOpExpr *opexpr);

extern 
# 51 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
      _Bool 
# 51 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
           check_functions_in_node(Node *node, check_function_callback checker,
      void *context);

extern 
# 54 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
      _Bool 
# 54 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
           expression_tree_walker(Node *node, 
# 54 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
                                              _Bool 
# 54 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
                                                   (*walker) (),
           void *context);
extern Node *expression_tree_mutator(Node *node, Node *(*mutator) (),
          void *context);

extern 
# 59 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
      _Bool 
# 59 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
           query_tree_walker(Query *query, 
# 59 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
                                           _Bool 
# 59 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
                                                (*walker) (),
         void *context, int flags);
extern Query *query_tree_mutator(Query *query, Node *(*mutator) (),
         void *context, int flags);

extern 
# 64 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
      _Bool 
# 64 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
           range_table_walker(List *rtable, 
# 64 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
                                            _Bool 
# 64 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
                                                 (*walker) (),
          void *context, int flags);
extern List *range_table_mutator(List *rtable, Node *(*mutator) (),
         void *context, int flags);

extern 
# 69 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
      _Bool 
# 69 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
           query_or_expression_tree_walker(Node *node, 
# 69 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
                                                       _Bool 
# 69 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
                                                            (*walker) (),
           void *context, int flags);
extern Node *query_or_expression_tree_mutator(Node *node, Node *(*mutator) (),
             void *context, int flags);

extern 
# 74 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
      _Bool 
# 74 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
           raw_expression_tree_walker(Node *node, 
# 74 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
                                                  _Bool 
# 74 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
                                                       (*walker) (),
            void *context);

struct PlanState;
extern 
# 78 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
      _Bool 
# 78 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
           planstate_tree_walker(struct PlanState *planstate, 
# 78 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h" 3 4
                                                              _Bool 
# 78 "/usr/include/postgresql/11/server/nodes/nodeFuncs.h"
                                                                   (*walker) (),
          void *context);
# 29 "src/backend/parser/cypher_parse_agg.c" 2
# 1 "/usr/include/postgresql/11/server/optimizer/tlist.h" 1
# 17 "/usr/include/postgresql/11/server/optimizer/tlist.h"
# 1 "/usr/include/postgresql/11/server/nodes/relation.h" 1
# 17 "/usr/include/postgresql/11/server/nodes/relation.h"
# 1 "/usr/include/postgresql/11/server/access/sdir.h" 1
# 22 "/usr/include/postgresql/11/server/access/sdir.h"
typedef enum ScanDirection
{
 BackwardScanDirection = -1,
 NoMovementScanDirection = 0,
 ForwardScanDirection = 1
} ScanDirection;
# 18 "/usr/include/postgresql/11/server/nodes/relation.h" 2


# 1 "/usr/include/postgresql/11/server/nodes/params.h" 1
# 18 "/usr/include/postgresql/11/server/nodes/params.h"
struct Bitmapset;
struct ExprState;
struct Param;
struct ParseState;
# 90 "/usr/include/postgresql/11/server/nodes/params.h"
typedef struct ParamExternData
{
 Datum value;
 
# 93 "/usr/include/postgresql/11/server/nodes/params.h" 3 4
_Bool 
# 93 "/usr/include/postgresql/11/server/nodes/params.h"
      isnull;
 uint16 pflags;
 Oid ptype;
} ParamExternData;

typedef struct ParamListInfoData *ParamListInfo;

typedef ParamExternData *(*ParamFetchHook) (ParamListInfo params,
           int paramid, 
# 101 "/usr/include/postgresql/11/server/nodes/params.h" 3 4
                       _Bool 
# 101 "/usr/include/postgresql/11/server/nodes/params.h"
                            speculative,
           ParamExternData *workspace);

typedef void (*ParamCompileHook) (ParamListInfo params, struct Param *param,
          struct ExprState *state,
          Datum *resv, 
# 106 "/usr/include/postgresql/11/server/nodes/params.h" 3 4
                      _Bool 
# 106 "/usr/include/postgresql/11/server/nodes/params.h"
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
 int numParams;





 ParamExternData params[];
} ParamListInfoData;
# 145 "/usr/include/postgresql/11/server/nodes/params.h"
typedef struct ParamExecData
{
 void *execPlan;
 Datum value;
 
# 149 "/usr/include/postgresql/11/server/nodes/params.h" 3 4
_Bool 
# 149 "/usr/include/postgresql/11/server/nodes/params.h"
      isnull;
} ParamExecData;



extern ParamListInfo copyParamList(ParamListInfo from);
extern Size EstimateParamListSpace(ParamListInfo paramLI);
extern void SerializeParamList(ParamListInfo paramLI, char **start_address);
extern ParamListInfo RestoreParamList(char **start_address);
# 21 "/usr/include/postgresql/11/server/nodes/relation.h" 2
# 29 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef Bitmapset *Relids;





typedef enum CostSelector
{
 STARTUP_COST, TOTAL_COST
} CostSelector;





typedef struct QualCost
{
 Cost startup;
 Cost per_tuple;
} QualCost;
# 57 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct AggClauseCosts
{
 int numAggs;
 int numOrderedAggs;
 
# 61 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 61 "/usr/include/postgresql/11/server/nodes/relation.h"
      hasNonPartial;
 
# 62 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 62 "/usr/include/postgresql/11/server/nodes/relation.h"
      hasNonSerial;
 QualCost transCost;
 Cost finalCost;
 Size transitionSpace;
} AggClauseCosts;





typedef enum UpperRelationKind
{
 UPPERREL_SETOP,
 UPPERREL_PARTIAL_GROUP_AGG,

 UPPERREL_GROUP_AGG,
 UPPERREL_WINDOW,
 UPPERREL_DISTINCT,
 UPPERREL_ORDERED,
 UPPERREL_FINAL

} UpperRelationKind;






typedef enum InheritanceKind
{
 INHKIND_NONE,
 INHKIND_INHERITED,
 INHKIND_PARTITIONED
} InheritanceKind;
# 106 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct PlannerGlobal
{
 NodeTag type;

 ParamListInfo boundParams;

 List *subplans;

 List *subroots;

 Bitmapset *rewindPlanIDs;

 List *finalrtable;

 List *finalrowmarks;

 List *resultRelations;

 List *nonleafResultRelations;
 List *rootResultRelations;

 List *relationOids;

 List *invalItems;

 List *paramExecTypes;

 Index lastPHId;

 Index lastRowMarkId;

 int lastPlanNodeId;

 
# 139 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 139 "/usr/include/postgresql/11/server/nodes/relation.h"
      transientPlan;

 
# 141 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 141 "/usr/include/postgresql/11/server/nodes/relation.h"
      dependsOnRole;

 
# 143 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 143 "/usr/include/postgresql/11/server/nodes/relation.h"
      parallelModeOK;

 
# 145 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 145 "/usr/include/postgresql/11/server/nodes/relation.h"
      parallelModeNeeded;

 char maxParallelHazard;
} PlannerGlobal;
# 165 "/usr/include/postgresql/11/server/nodes/relation.h"
struct AppendRelInfo;

typedef struct PlannerInfo
{
 NodeTag type;

 Query *parse;

 PlannerGlobal *glob;

 Index query_level;

 struct PlannerInfo *parent_root;







 List *plan_params;
 Bitmapset *outer_params;
# 195 "/usr/include/postgresql/11/server/nodes/relation.h"
 struct RelOptInfo **simple_rel_array;
 int simple_rel_array_size;







 RangeTblEntry **simple_rte_array;







 struct AppendRelInfo **append_rel_array;







 Relids all_baserels;







 Relids nullable_baserels;
# 239 "/usr/include/postgresql/11/server/nodes/relation.h"
 List *join_rel_list;
 struct HTAB *join_rel_hash;
# 249 "/usr/include/postgresql/11/server/nodes/relation.h"
 List **join_rel_level;
 int join_cur_level;

 List *init_plans;

 List *cte_plan_ids;

 List *multiexpr_params;


 List *eq_classes;

 List *canon_pathkeys;

 List *left_join_clauses;



 List *right_join_clauses;



 List *full_join_clauses;


 List *join_info_list;

 List *append_rel_list;

 List *rowMarks;

 List *placeholder_list;

 List *fkey_list;

 List *query_pathkeys;

 List *group_pathkeys;
 List *window_pathkeys;
 List *distinct_pathkeys;
 List *sort_pathkeys;

 List *part_schemes;


 List *initial_rels;


 List *upper_rels[UPPERREL_FINAL + 1];


 struct PathTarget *upper_targets[UPPERREL_FINAL + 1];





 List *processed_tlist;


 AttrNumber *grouping_map;
 List *minmax_aggs;

 MemoryContext planner_cxt;

 double total_table_pages;

 double tuple_fraction;
 double limit_tuples;

 Index qual_security_level;


 InheritanceKind inhTargetKind;


 
# 325 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 325 "/usr/include/postgresql/11/server/nodes/relation.h"
      hasJoinRTEs;
 
# 326 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 326 "/usr/include/postgresql/11/server/nodes/relation.h"
      hasLateralRTEs;
 
# 327 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 327 "/usr/include/postgresql/11/server/nodes/relation.h"
      hasDeletedRTEs;
 
# 328 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 328 "/usr/include/postgresql/11/server/nodes/relation.h"
      hasHavingQual;
 
# 329 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 329 "/usr/include/postgresql/11/server/nodes/relation.h"
      hasPseudoConstantQuals;

 
# 331 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 331 "/usr/include/postgresql/11/server/nodes/relation.h"
      hasRecursion;


 int wt_param_id;
 struct Path *non_recursive_path;


 Relids curOuterRels;
 List *curOuterParams;


 void *join_search_private;


 
# 345 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 345 "/usr/include/postgresql/11/server/nodes/relation.h"
      partColsUpdated;
} PlannerInfo;
# 372 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct PartitionSchemeData
{
 char strategy;
 int16 partnatts;
 Oid *partopfamily;
 Oid *partopcintype;
 Oid *partcollation;


 int16 *parttyplen;
 
# 382 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 382 "/usr/include/postgresql/11/server/nodes/relation.h"
        *parttypbyval;


 FmgrInfo *partsupfunc;
} PartitionSchemeData;

typedef struct PartitionSchemeData *PartitionScheme;
# 580 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef enum RelOptKind
{
 RELOPT_BASEREL,
 RELOPT_JOINREL,
 RELOPT_OTHER_MEMBER_REL,
 RELOPT_OTHER_JOINREL,
 RELOPT_UPPER_REL,
 RELOPT_OTHER_UPPER_REL,
 RELOPT_DEADREL
} RelOptKind;
# 615 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct RelOptInfo
{
 NodeTag type;

 RelOptKind reloptkind;


 Relids relids;


 double rows;


 
# 628 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 628 "/usr/include/postgresql/11/server/nodes/relation.h"
      consider_startup;
 
# 629 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 629 "/usr/include/postgresql/11/server/nodes/relation.h"
      consider_param_startup;
 
# 630 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 630 "/usr/include/postgresql/11/server/nodes/relation.h"
      consider_parallel;


 struct PathTarget *reltarget;


 List *pathlist;
 List *ppilist;
 List *partial_pathlist;
 struct Path *cheapest_startup_path;
 struct Path *cheapest_total_path;
 struct Path *cheapest_unique_path;
 List *cheapest_parameterized_paths;



 Relids direct_lateral_relids;
 Relids lateral_relids;


 Index relid;
 Oid reltablespace;
 RTEKind rtekind;
 AttrNumber min_attr;
 AttrNumber max_attr;
 Relids *attr_needed;
 int32 *attr_widths;
 List *lateral_vars;
 Relids lateral_referencers;
 List *indexlist;
 List *statlist;
 BlockNumber pages;
 double tuples;
 double allvisfrac;
 PlannerInfo *subroot;
 List *subplan_params;
 int rel_parallel_workers;


 Oid serverid;
 Oid userid;
 
# 671 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 671 "/usr/include/postgresql/11/server/nodes/relation.h"
      useridiscurrent;

 struct FdwRoutine *fdwroutine;
 void *fdw_private;


 List *unique_for_rels;

 List *non_unique_for_rels;


 List *baserestrictinfo;
 QualCost baserestrictcost;
 Index baserestrict_min_security;

 List *joininfo;

 
# 688 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 688 "/usr/include/postgresql/11/server/nodes/relation.h"
      has_eclass_joins;


 
# 691 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 691 "/usr/include/postgresql/11/server/nodes/relation.h"
      consider_partitionwise_join;


 Relids top_parent_relids;



 PartitionScheme part_scheme;
 int nparts;
 struct PartitionBoundInfoData *boundinfo;
 List *partition_qual;
 struct RelOptInfo **part_rels;

 List **partexprs;
 List **nullable_partexprs;
 List *partitioned_child_rels;
} RelOptInfo;
# 760 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct IndexOptInfo
{
 NodeTag type;

 Oid indexoid;
 Oid reltablespace;
 RelOptInfo *rel;


 BlockNumber pages;
 double tuples;
 int tree_height;


 int ncolumns;
 int nkeycolumns;
 int *indexkeys;

 Oid *indexcollations;
 Oid *opfamily;
 Oid *opcintype;
 Oid *sortopfamily;
 
# 782 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 782 "/usr/include/postgresql/11/server/nodes/relation.h"
        *reverse_sort;
 
# 783 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 783 "/usr/include/postgresql/11/server/nodes/relation.h"
        *nulls_first;
 
# 784 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 784 "/usr/include/postgresql/11/server/nodes/relation.h"
        *canreturn;

 Oid relam;

 List *indexprs;
 List *indpred;

 List *indextlist;

 List *indrestrictinfo;





 
# 799 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 799 "/usr/include/postgresql/11/server/nodes/relation.h"
      predOK;
 
# 800 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 800 "/usr/include/postgresql/11/server/nodes/relation.h"
      unique;
 
# 801 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 801 "/usr/include/postgresql/11/server/nodes/relation.h"
      immediate;
 
# 802 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 802 "/usr/include/postgresql/11/server/nodes/relation.h"
      hypothetical;


 
# 805 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 805 "/usr/include/postgresql/11/server/nodes/relation.h"
      amcanorderbyop;
 
# 806 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 806 "/usr/include/postgresql/11/server/nodes/relation.h"
      amoptionalkey;
 
# 807 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 807 "/usr/include/postgresql/11/server/nodes/relation.h"
      amsearcharray;
 
# 808 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 808 "/usr/include/postgresql/11/server/nodes/relation.h"
      amsearchnulls;
 
# 809 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 809 "/usr/include/postgresql/11/server/nodes/relation.h"
      amhasgettuple;
 
# 810 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 810 "/usr/include/postgresql/11/server/nodes/relation.h"
      amhasgetbitmap;
 
# 811 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 811 "/usr/include/postgresql/11/server/nodes/relation.h"
      amcanparallel;
 
# 812 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 812 "/usr/include/postgresql/11/server/nodes/relation.h"
      amcanmarkpos;

 void (*amcostestimate) ();
} IndexOptInfo;
# 825 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct ForeignKeyOptInfo
{
 NodeTag type;


 Index con_relid;
 Index ref_relid;
 int nkeys;
 AttrNumber conkey[32];
 AttrNumber confkey[32];
 Oid conpfeqop[32];


 int nmatched_ec;
 int nmatched_rcols;
 int nmatched_ri;

 struct EquivalenceClass *eclass[32];

 List *rinfos[32];
} ForeignKeyOptInfo;
# 854 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct StatisticExtInfo
{
 NodeTag type;

 Oid statOid;
 RelOptInfo *rel;
 char kind;
 Bitmapset *keys;
} StatisticExtInfo;
# 904 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct EquivalenceClass
{
 NodeTag type;

 List *ec_opfamilies;
 Oid ec_collation;
 List *ec_members;
 List *ec_sources;
 List *ec_derives;
 Relids ec_relids;

 
# 915 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 915 "/usr/include/postgresql/11/server/nodes/relation.h"
      ec_has_const;
 
# 916 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 916 "/usr/include/postgresql/11/server/nodes/relation.h"
      ec_has_volatile;
 
# 917 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 917 "/usr/include/postgresql/11/server/nodes/relation.h"
      ec_below_outer_join;
 
# 918 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 918 "/usr/include/postgresql/11/server/nodes/relation.h"
      ec_broken;
 Index ec_sortref;
 Index ec_min_security;
 Index ec_max_security;
 struct EquivalenceClass *ec_merged;
} EquivalenceClass;
# 954 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct EquivalenceMember
{
 NodeTag type;

 Expr *em_expr;
 Relids em_relids;
 Relids em_nullable_relids;
 
# 961 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 961 "/usr/include/postgresql/11/server/nodes/relation.h"
      em_is_const;
 
# 962 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 962 "/usr/include/postgresql/11/server/nodes/relation.h"
      em_is_child;
 Oid em_datatype;
} EquivalenceMember;
# 983 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct PathKey
{
 NodeTag type;

 EquivalenceClass *pk_eclass;
 Oid pk_opfamily;
 int pk_strategy;
 
# 990 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 990 "/usr/include/postgresql/11/server/nodes/relation.h"
      pk_nulls_first;
} PathKey;
# 1017 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct PathTarget
{
 NodeTag type;
 List *exprs;
 Index *sortgrouprefs;
 QualCost cost;
 int width;
} PathTarget;
# 1045 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct ParamPathInfo
{
 NodeTag type;

 Relids ppi_req_outer;
 double ppi_rows;
 List *ppi_clauses;
} ParamPathInfo;
# 1084 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct Path
{
 NodeTag type;

 NodeTag pathtype;

 RelOptInfo *parent;
 PathTarget *pathtarget;

 ParamPathInfo *param_info;

 
# 1095 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1095 "/usr/include/postgresql/11/server/nodes/relation.h"
      parallel_aware;
 
# 1096 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1096 "/usr/include/postgresql/11/server/nodes/relation.h"
      parallel_safe;
 int parallel_workers;


 double rows;
 Cost startup_cost;
 Cost total_cost;

 List *pathkeys;

} Path;
# 1164 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct IndexPath
{
 Path path;
 IndexOptInfo *indexinfo;
 List *indexclauses;
 List *indexquals;
 List *indexqualcols;
 List *indexorderbys;
 List *indexorderbycols;
 ScanDirection indexscandir;
 Cost indextotalcost;
 Selectivity indexselectivity;
} IndexPath;
# 1195 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct BitmapHeapPath
{
 Path path;
 Path *bitmapqual;
} BitmapHeapPath;







typedef struct BitmapAndPath
{
 Path path;
 List *bitmapquals;
 Selectivity bitmapselectivity;
} BitmapAndPath;







typedef struct BitmapOrPath
{
 Path path;
 List *bitmapquals;
 Selectivity bitmapselectivity;
} BitmapOrPath;
# 1234 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct TidPath
{
 Path path;
 List *tidquals;
} TidPath;
# 1248 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct SubqueryScanPath
{
 Path path;
 Path *subpath;
} SubqueryScanPath;
# 1264 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct ForeignPath
{
 Path path;
 Path *fdw_outerpath;
 List *fdw_private;
} ForeignPath;
# 1290 "/usr/include/postgresql/11/server/nodes/relation.h"
struct CustomPathMethods;

typedef struct CustomPath
{
 Path path;
 uint32 flags;

 List *custom_paths;
 List *custom_private;
 const struct CustomPathMethods *methods;
} CustomPath;
# 1317 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct AppendPath
{
 Path path;

 List *partitioned_rels;
 List *subpaths;


 int first_partial_path;
} AppendPath;
# 1337 "/usr/include/postgresql/11/server/nodes/relation.h"
extern 
# 1337 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
      _Bool 
# 1337 "/usr/include/postgresql/11/server/nodes/relation.h"
           is_dummy_rel(RelOptInfo *rel);





typedef struct MergeAppendPath
{
 Path path;

 List *partitioned_rels;
 List *subpaths;
 double limit_tuples;
} MergeAppendPath;
# 1359 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct ResultPath
{
 Path path;
 List *quals;
} ResultPath;







typedef struct MaterialPath
{
 Path path;
 Path *subpath;
} MaterialPath;
# 1389 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef enum
{
 UNIQUE_PATH_NOOP,
 UNIQUE_PATH_HASH,
 UNIQUE_PATH_SORT
} UniquePathMethod;

typedef struct UniquePath
{
 Path path;
 Path *subpath;
 UniquePathMethod umethod;
 List *in_operators;
 List *uniq_exprs;
} UniquePath;






typedef struct GatherPath
{
 Path path;
 Path *subpath;
 
# 1414 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1414 "/usr/include/postgresql/11/server/nodes/relation.h"
      single_copy;
 int num_workers;
} GatherPath;





typedef struct GatherMergePath
{
 Path path;
 Path *subpath;
 int num_workers;
} GatherMergePath;






typedef struct JoinPath
{
 Path path;

 JoinType jointype;

 
# 1440 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1440 "/usr/include/postgresql/11/server/nodes/relation.h"
      inner_unique;


 Path *outerjoinpath;
 Path *innerjoinpath;

 List *joinrestrictinfo;






} JoinPath;





typedef JoinPath NestPath;
# 1496 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct MergePath
{
 JoinPath jpath;
 List *path_mergeclauses;
 List *outersortkeys;
 List *innersortkeys;
 
# 1502 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1502 "/usr/include/postgresql/11/server/nodes/relation.h"
      skip_mark_restore;
 
# 1503 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1503 "/usr/include/postgresql/11/server/nodes/relation.h"
      materialize_inner;
} MergePath;
# 1515 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct HashPath
{
 JoinPath jpath;
 List *path_hashclauses;
 int num_batches;
 double inner_rows_total;
} HashPath;
# 1537 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct ProjectionPath
{
 Path path;
 Path *subpath;
 
# 1541 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1541 "/usr/include/postgresql/11/server/nodes/relation.h"
      dummypp;
} ProjectionPath;






typedef struct ProjectSetPath
{
 Path path;
 Path *subpath;
} ProjectSetPath;
# 1563 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct SortPath
{
 Path path;
 Path *subpath;
} SortPath;
# 1577 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct GroupPath
{
 Path path;
 Path *subpath;
 List *groupClause;
 List *qual;
} GroupPath;







typedef struct UpperUniquePath
{
 Path path;
 Path *subpath;
 int numkeys;
} UpperUniquePath;
# 1605 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct AggPath
{
 Path path;
 Path *subpath;
 AggStrategy aggstrategy;
 AggSplit aggsplit;
 double numGroups;
 List *groupClause;
 List *qual;
} AggPath;





typedef struct GroupingSetData
{
 NodeTag type;
 List *set;
 double numGroups;
} GroupingSetData;

typedef struct RollupData
{
 NodeTag type;
 List *groupClause;
 List *gsets;
 List *gsets_data;
 double numGroups;
 
# 1634 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1634 "/usr/include/postgresql/11/server/nodes/relation.h"
      hashable;
 
# 1635 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1635 "/usr/include/postgresql/11/server/nodes/relation.h"
      is_hashed;
} RollupData;





typedef struct GroupingSetsPath
{
 Path path;
 Path *subpath;
 AggStrategy aggstrategy;
 List *rollups;
 List *qual;
} GroupingSetsPath;




typedef struct MinMaxAggPath
{
 Path path;
 List *mmaggregates;
 List *quals;
} MinMaxAggPath;




typedef struct WindowAggPath
{
 Path path;
 Path *subpath;
 WindowClause *winclause;
} WindowAggPath;




typedef struct SetOpPath
{
 Path path;
 Path *subpath;
 SetOpCmd cmd;
 SetOpStrategy strategy;
 List *distinctList;
 AttrNumber flagColIdx;
 int firstFlag;
 double numGroups;
} SetOpPath;




typedef struct RecursiveUnionPath
{
 Path path;
 Path *leftpath;
 Path *rightpath;
 List *distinctList;
 int wtParam;
 double numGroups;
} RecursiveUnionPath;




typedef struct LockRowsPath
{
 Path path;
 Path *subpath;
 List *rowMarks;
 int epqParam;
} LockRowsPath;
# 1717 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct ModifyTablePath
{
 Path path;
 CmdType operation;
 
# 1721 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1721 "/usr/include/postgresql/11/server/nodes/relation.h"
      canSetTag;
 Index nominalRelation;

 List *partitioned_rels;
 
# 1725 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1725 "/usr/include/postgresql/11/server/nodes/relation.h"
      partColsUpdated;
 List *resultRelations;
 List *subpaths;
 List *subroots;
 List *withCheckOptionLists;
 List *returningLists;
 List *rowMarks;
 OnConflictExpr *onconflict;
 int epqParam;
} ModifyTablePath;




typedef struct LimitPath
{
 Path path;
 Path *subpath;
 Node *limitOffset;
 Node *limitCount;
} LimitPath;
# 1888 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct RestrictInfo
{
 NodeTag type;

 Expr *clause;

 
# 1894 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1894 "/usr/include/postgresql/11/server/nodes/relation.h"
      is_pushed_down;

 
# 1896 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1896 "/usr/include/postgresql/11/server/nodes/relation.h"
      outerjoin_delayed;

 
# 1898 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1898 "/usr/include/postgresql/11/server/nodes/relation.h"
      can_join;

 
# 1900 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1900 "/usr/include/postgresql/11/server/nodes/relation.h"
      pseudoconstant;

 
# 1902 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1902 "/usr/include/postgresql/11/server/nodes/relation.h"
      leakproof;

 Index security_level;


 Relids clause_relids;


 Relids required_relids;


 Relids outer_relids;


 Relids nullable_relids;


 Relids left_relids;
 Relids right_relids;


 Expr *orclause;


 EquivalenceClass *parent_ec;


 QualCost eval_cost;
 Selectivity norm_selec;


 Selectivity outer_selec;



 List *mergeopfamilies;


 EquivalenceClass *left_ec;
 EquivalenceClass *right_ec;
 EquivalenceMember *left_em;
 EquivalenceMember *right_em;
 List *scansel_cache;


 
# 1947 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1947 "/usr/include/postgresql/11/server/nodes/relation.h"
      outer_is_left;


 Oid hashjoinoperator;


 Selectivity left_bucketsize;
 Selectivity right_bucketsize;
 Selectivity left_mcvfreq;
 Selectivity right_mcvfreq;
} RestrictInfo;
# 1980 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct MergeScanSelCache
{

 Oid opfamily;
 Oid collation;
 int strategy;
 
# 1986 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 1986 "/usr/include/postgresql/11/server/nodes/relation.h"
      nulls_first;

 Selectivity leftstartsel;
 Selectivity leftendsel;
 Selectivity rightstartsel;
 Selectivity rightendsel;
} MergeScanSelCache;
# 2008 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct PlaceHolderVar
{
 Expr xpr;
 Expr *phexpr;
 Relids phrels;
 Index phid;
 Index phlevelsup;
} PlaceHolderVar;
# 2075 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct SpecialJoinInfo
{
 NodeTag type;
 Relids min_lefthand;
 Relids min_righthand;
 Relids syn_lefthand;
 Relids syn_righthand;
 JoinType jointype;
 
# 2083 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 2083 "/usr/include/postgresql/11/server/nodes/relation.h"
      lhs_strict;
 
# 2084 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 2084 "/usr/include/postgresql/11/server/nodes/relation.h"
      delay_upper_joins;

 
# 2086 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 2086 "/usr/include/postgresql/11/server/nodes/relation.h"
      semi_can_btree;
 
# 2087 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 2087 "/usr/include/postgresql/11/server/nodes/relation.h"
      semi_can_hash;
 List *semi_operators;
 List *semi_rhs_exprs;
} SpecialJoinInfo;
# 2126 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct AppendRelInfo
{
 NodeTag type;







 Index parent_relid;
 Index child_relid;







 Oid parent_reltype;
 Oid child_reltype;
# 2164 "/usr/include/postgresql/11/server/nodes/relation.h"
 List *translated_vars;






 Oid parent_reloid;
} AppendRelInfo;
# 2200 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct PlaceHolderInfo
{
 NodeTag type;

 Index phid;
 PlaceHolderVar *ph_var;
 Relids ph_eval_at;
 Relids ph_lateral;
 Relids ph_needed;
 int32 ph_width;
} PlaceHolderInfo;






typedef struct MinMaxAggInfo
{
 NodeTag type;

 Oid aggfnoid;
 Oid aggsortop;
 Expr *target;
 PlannerInfo *subroot;
 Path *path;
 Cost pathcost;
 Param *param;
} MinMaxAggInfo;
# 2277 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct PlannerParamItem
{
 NodeTag type;

 Node *item;
 int paramId;
} PlannerParamItem;
# 2301 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct SemiAntiJoinFactors
{
 Selectivity outer_match_frac;
 Selectivity match_count;
} SemiAntiJoinFactors;
# 2320 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct JoinPathExtraData
{
 List *restrictlist;
 List *mergeclause_list;
 
# 2324 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 2324 "/usr/include/postgresql/11/server/nodes/relation.h"
      inner_unique;
 SpecialJoinInfo *sjinfo;
 SemiAntiJoinFactors semifactors;
 Relids param_source_rels;
} JoinPathExtraData;
# 2360 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef enum
{
 PARTITIONWISE_AGGREGATE_NONE,
 PARTITIONWISE_AGGREGATE_FULL,
 PARTITIONWISE_AGGREGATE_PARTIAL
} PartitionwiseAggregateType;
# 2380 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct
{

 int flags;
 
# 2384 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 2384 "/usr/include/postgresql/11/server/nodes/relation.h"
      partial_costs_set;
 AggClauseCosts agg_partial_costs;
 AggClauseCosts agg_final_costs;


 
# 2389 "/usr/include/postgresql/11/server/nodes/relation.h" 3 4
_Bool 
# 2389 "/usr/include/postgresql/11/server/nodes/relation.h"
      target_parallel_safe;
 Node *havingQual;
 List *targetList;
 PartitionwiseAggregateType patype;
} GroupPathExtraData;
# 2407 "/usr/include/postgresql/11/server/nodes/relation.h"
typedef struct JoinCostWorkspace
{

 Cost startup_cost;
 Cost total_cost;


 Cost run_cost;


 Cost inner_run_cost;
 Cost inner_rescan_run_cost;


 double outer_rows;
 double inner_rows;
 double outer_skip_rows;
 double inner_skip_rows;


 int numbuckets;
 int numbatches;
 double inner_rows_total;
} JoinCostWorkspace;
# 18 "/usr/include/postgresql/11/server/optimizer/tlist.h" 2


extern TargetEntry *tlist_member(Expr *node, List *targetlist);
extern TargetEntry *tlist_member_ignore_relabel(Expr *node, List *targetlist);

extern List *add_to_flat_tlist(List *tlist, List *exprs);

extern List *get_tlist_exprs(List *tlist, 
# 25 "/usr/include/postgresql/11/server/optimizer/tlist.h" 3 4
                                         _Bool 
# 25 "/usr/include/postgresql/11/server/optimizer/tlist.h"
                                              includeJunk);

extern int count_nonjunk_tlist_entries(List *tlist);

extern 
# 29 "/usr/include/postgresql/11/server/optimizer/tlist.h" 3 4
      _Bool 
# 29 "/usr/include/postgresql/11/server/optimizer/tlist.h"
           tlist_same_exprs(List *tlist1, List *tlist2);

extern 
# 31 "/usr/include/postgresql/11/server/optimizer/tlist.h" 3 4
      _Bool 
# 31 "/usr/include/postgresql/11/server/optimizer/tlist.h"
           tlist_same_datatypes(List *tlist, List *colTypes, 
# 31 "/usr/include/postgresql/11/server/optimizer/tlist.h" 3 4
                                                             _Bool 
# 31 "/usr/include/postgresql/11/server/optimizer/tlist.h"
                                                                  junkOK);
extern 
# 32 "/usr/include/postgresql/11/server/optimizer/tlist.h" 3 4
      _Bool 
# 32 "/usr/include/postgresql/11/server/optimizer/tlist.h"
           tlist_same_collations(List *tlist, List *colCollations, 
# 32 "/usr/include/postgresql/11/server/optimizer/tlist.h" 3 4
                                                                   _Bool 
# 32 "/usr/include/postgresql/11/server/optimizer/tlist.h"
                                                                        junkOK);

extern void apply_tlist_labeling(List *dest_tlist, List *src_tlist);

extern TargetEntry *get_sortgroupref_tle(Index sortref,
      List *targetList);
extern TargetEntry *get_sortgroupclause_tle(SortGroupClause *sgClause,
      List *targetList);
extern Node *get_sortgroupclause_expr(SortGroupClause *sgClause,
       List *targetList);
extern List *get_sortgrouplist_exprs(List *sgClauses,
      List *targetList);

extern SortGroupClause *get_sortgroupref_clause(Index sortref,
      List *clauses);
extern SortGroupClause *get_sortgroupref_clause_noerr(Index sortref,
         List *clauses);

extern Oid *extract_grouping_ops(List *groupClause);
extern AttrNumber *extract_grouping_cols(List *groupClause, List *tlist);
extern 
# 52 "/usr/include/postgresql/11/server/optimizer/tlist.h" 3 4
      _Bool 
# 52 "/usr/include/postgresql/11/server/optimizer/tlist.h"
           grouping_is_sortable(List *groupClause);
extern 
# 53 "/usr/include/postgresql/11/server/optimizer/tlist.h" 3 4
      _Bool 
# 53 "/usr/include/postgresql/11/server/optimizer/tlist.h"
           grouping_is_hashable(List *groupClause);

extern PathTarget *make_pathtarget_from_tlist(List *tlist);
extern List *make_tlist_from_pathtarget(PathTarget *target);
extern PathTarget *copy_pathtarget(PathTarget *src);
extern PathTarget *create_empty_pathtarget(void);
extern void add_column_to_pathtarget(PathTarget *target,
       Expr *expr, Index sortgroupref);
extern void add_new_column_to_pathtarget(PathTarget *target, Expr *expr);
extern void add_new_columns_to_pathtarget(PathTarget *target, List *exprs);
extern void apply_pathtarget_labeling_to_tlist(List *tlist, PathTarget *target);
extern void split_pathtarget_at_srfs(PlannerInfo *root,
       PathTarget *target, PathTarget *input_target,
       List **targets, List **targets_contain_srfs);
# 30 "src/backend/parser/cypher_parse_agg.c" 2
# 1 "/usr/include/postgresql/11/server/optimizer/var.h" 1
# 30 "/usr/include/postgresql/11/server/optimizer/var.h"
extern Relids pull_varnos(Node *node);
extern Relids pull_varnos_of_level(Node *node, int levelsup);
extern void pull_varattnos(Node *node, Index varno, Bitmapset **varattnos);
extern List *pull_vars_of_level(Node *node, int levelsup);
extern 
# 34 "/usr/include/postgresql/11/server/optimizer/var.h" 3 4
      _Bool 
# 34 "/usr/include/postgresql/11/server/optimizer/var.h"
           contain_var_clause(Node *node);
extern 
# 35 "/usr/include/postgresql/11/server/optimizer/var.h" 3 4
      _Bool 
# 35 "/usr/include/postgresql/11/server/optimizer/var.h"
           contain_vars_of_level(Node *node, int levelsup);
extern int locate_var_of_level(Node *node, int levelsup);
extern List *pull_var_clause(Node *node, int flags);
extern Node *flatten_join_alias_vars(PlannerInfo *root, Node *node);
# 31 "src/backend/parser/cypher_parse_agg.c" 2
# 1 ".//src/include/parser/cypher_parse_agg.h" 1
# 30 ".//src/include/parser/cypher_parse_agg.h"
extern void parse_check_aggregates(ParseState *pstate, Query *qry);
# 32 "src/backend/parser/cypher_parse_agg.c" 2
# 1 "/usr/include/postgresql/11/server/parser/parsetree.h" 1
# 48 "/usr/include/postgresql/11/server/parser/parsetree.h"
extern char *get_rte_attribute_name(RangeTblEntry *rte, AttrNumber attnum);





extern void get_rte_attribute_type(RangeTblEntry *rte, AttrNumber attnum,
        Oid *vartype, int32 *vartypmod, Oid *varcollid);





extern 
# 61 "/usr/include/postgresql/11/server/parser/parsetree.h" 3 4
      _Bool 
# 61 "/usr/include/postgresql/11/server/parser/parsetree.h"
           get_rte_attribute_is_dropped(RangeTblEntry *rte,
        AttrNumber attnum);







extern TargetEntry *get_tle_by_resno(List *tlist, AttrNumber resno);






extern RowMarkClause *get_parse_rowmark(Query *qry, Index rtindex);
# 33 "src/backend/parser/cypher_parse_agg.c" 2
# 1 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h" 1
# 20 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h"
typedef struct replace_rte_variables_context replace_rte_variables_context;

typedef Node *(*replace_rte_variables_callback) (Var *var,
             replace_rte_variables_context *context);

struct replace_rte_variables_context
{
 replace_rte_variables_callback callback;
 void *callback_arg;
 int target_varno;
 int sublevels_up;
 
# 31 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h" 3 4
_Bool 
# 31 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h"
      inserted_sublink;
};

typedef enum ReplaceVarsNoMatchOption
{
 REPLACEVARS_REPORT_ERROR,
 REPLACEVARS_CHANGE_VARNO,
 REPLACEVARS_SUBSTITUTE_NULL
} ReplaceVarsNoMatchOption;


extern void OffsetVarNodes(Node *node, int offset, int sublevels_up);
extern void ChangeVarNodes(Node *node, int old_varno, int new_varno,
      int sublevels_up);
extern void IncrementVarSublevelsUp(Node *node, int delta_sublevels_up,
      int min_sublevels_up);
extern void IncrementVarSublevelsUp_rtable(List *rtable,
          int delta_sublevels_up, int min_sublevels_up);

extern 
# 50 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h" 3 4
      _Bool 
# 50 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h"
           rangeTableEntry_used(Node *node, int rt_index,
      int sublevels_up);

extern Query *getInsertSelectQuery(Query *parsetree, Query ***subquery_ptr);

extern void AddQual(Query *parsetree, Node *qual);
extern void AddInvertedQual(Query *parsetree, Node *qual);

extern 
# 58 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h" 3 4
      _Bool 
# 58 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h"
           contain_aggs_of_level(Node *node, int levelsup);
extern int locate_agg_of_level(Node *node, int levelsup);
extern 
# 60 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h" 3 4
      _Bool 
# 60 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h"
           contain_windowfuncs(Node *node);
extern int locate_windowfunc(Node *node);
extern 
# 62 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h" 3 4
      _Bool 
# 62 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h"
           checkExprHasSubLink(Node *node);

extern Node *replace_rte_variables(Node *node,
       int target_varno, int sublevels_up,
       replace_rte_variables_callback callback,
       void *callback_arg,
       
# 68 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h" 3 4
      _Bool 
# 68 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h"
           *outer_hasSubLinks);
extern Node *replace_rte_variables_mutator(Node *node,
         replace_rte_variables_context *context);

extern Node *map_variable_attnos(Node *node,
     int target_varno, int sublevels_up,
     const AttrNumber *attno_map, int map_length,
     Oid to_rowtype, 
# 75 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h" 3 4
                    _Bool 
# 75 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h"
                         *found_whole_row);

extern Node *ReplaceVarsFromTargetList(Node *node,
        int target_varno, int sublevels_up,
        RangeTblEntry *target_rte,
        List *targetlist,
        ReplaceVarsNoMatchOption nomatch_option,
        int nomatch_varno,
        
# 83 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h" 3 4
       _Bool 
# 83 "/usr/include/postgresql/11/server/rewrite/rewriteManip.h"
            *outer_hasSubLinks);
# 34 "src/backend/parser/cypher_parse_agg.c" 2

typedef struct
{
    ParseState *pstate;
    int min_varlevel;
    int min_agglevel;
    int sublevels_up;
} check_agg_arguments_context;

typedef struct
{
    ParseState *pstate;
    Query *qry;
    PlannerInfo *root;
    List *groupClauses;
    List *groupClauseCommonVars;
    
# 50 "src/backend/parser/cypher_parse_agg.c" 3 4
   _Bool 
# 50 "src/backend/parser/cypher_parse_agg.c"
        have_non_var_grouping;
    List **func_grouped_rels;
    int sublevels_up;
    
# 53 "src/backend/parser/cypher_parse_agg.c" 3 4
   _Bool 
# 53 "src/backend/parser/cypher_parse_agg.c"
        in_agg_direct_args;
} check_ungrouped_columns_context;

static void check_ungrouped_columns(Node *node, ParseState *pstate, Query *qry,
                                    List *groupClauses, List *groupClauseVars,
                                    
# 58 "src/backend/parser/cypher_parse_agg.c" 3 4
                                   _Bool 
# 58 "src/backend/parser/cypher_parse_agg.c"
                                        have_non_var_grouping,
                                    List **func_grouped_rels);
static 
# 60 "src/backend/parser/cypher_parse_agg.c" 3 4
      _Bool 
# 60 "src/backend/parser/cypher_parse_agg.c"
           check_ungrouped_columns_walker(Node *node,
                                           check_ungrouped_columns_context *context);
static void finalize_grouping_exprs(Node *node, ParseState *pstate, Query *qry,
                                    List *groupClauses, PlannerInfo *root,
                                    
# 64 "src/backend/parser/cypher_parse_agg.c" 3 4
                                   _Bool 
# 64 "src/backend/parser/cypher_parse_agg.c"
                                        have_non_var_grouping);
static 
# 65 "src/backend/parser/cypher_parse_agg.c" 3 4
      _Bool 
# 65 "src/backend/parser/cypher_parse_agg.c"
           finalize_grouping_exprs_walker(Node *node,
                                           check_ungrouped_columns_context *context);
static List *expand_groupingset_node(GroupingSet *gs);
static List * expand_grouping_sets(List *groupingSets, int limit);
# 83 "src/backend/parser/cypher_parse_agg.c"
void parse_check_aggregates(ParseState *pstate, Query *qry)
{
    List *gset_common = ((List *) 
# 85 "src/backend/parser/cypher_parse_agg.c" 3 4
                       ((void *)0)
# 85 "src/backend/parser/cypher_parse_agg.c"
                       );
    List *groupClauses = ((List *) 
# 86 "src/backend/parser/cypher_parse_agg.c" 3 4
                        ((void *)0)
# 86 "src/backend/parser/cypher_parse_agg.c"
                        );
    List *groupClauseCommonVars = ((List *) 
# 87 "src/backend/parser/cypher_parse_agg.c" 3 4
                                 ((void *)0)
# 87 "src/backend/parser/cypher_parse_agg.c"
                                 );
    
# 88 "src/backend/parser/cypher_parse_agg.c" 3 4
   _Bool 
# 88 "src/backend/parser/cypher_parse_agg.c"
        have_non_var_grouping;
    List *func_grouped_rels = ((List *) 
# 89 "src/backend/parser/cypher_parse_agg.c" 3 4
                             ((void *)0)
# 89 "src/backend/parser/cypher_parse_agg.c"
                             );
    ListCell *l;
    
# 91 "src/backend/parser/cypher_parse_agg.c" 3 4
   _Bool 
# 91 "src/backend/parser/cypher_parse_agg.c"
        hasJoinRTEs;
    
# 92 "src/backend/parser/cypher_parse_agg.c" 3 4
   _Bool 
# 92 "src/backend/parser/cypher_parse_agg.c"
        hasSelfRefRTEs;
    PlannerInfo *root = 
# 93 "src/backend/parser/cypher_parse_agg.c" 3 4
                       ((void *)0)
# 93 "src/backend/parser/cypher_parse_agg.c"
                           ;
    Node *clause;


    ((void)
# 97 "src/backend/parser/cypher_parse_agg.c" 3 4
   1
# 97 "src/backend/parser/cypher_parse_agg.c"
   );





    if (qry->groupingSets)
    {




        List *gsets = expand_grouping_sets(qry->groupingSets, 4096);

        if (!gsets)
            do { if (errstart(20, "src/backend/parser/cypher_parse_agg.c", 112, __func__, 
# 112 "src/backend/parser/cypher_parse_agg.c" 3 4
           ((void *)0)
# 112 "src/backend/parser/cypher_parse_agg.c"
           )) errfinish (errcode((((('5') - '0') & 0x3F) + (((('4') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), errmsg("too many grouping sets present (maximum 4096)"), parser_errposition(pstate, qry->groupClause ? exprLocation((Node *) qry->groupClause) : exprLocation((Node *) qry->groupingSets))); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)





                                                                                   ;





        gset_common = ((list_head(gsets))->data.ptr_value);

        if (gset_common)
        {
            for ((l) = (((list_head(gsets))->next)); (l) != 
# 128 "src/backend/parser/cypher_parse_agg.c" 3 4
           ((void *)0)
# 128 "src/backend/parser/cypher_parse_agg.c"
           ; (l) = ((l)->next))
            {
                gset_common = list_intersection_int(gset_common, ((l)->data.ptr_value));
                if (!gset_common)
                    break;
            }
        }







        if (list_length(gsets) == 1 && qry->groupClause)
            qry->groupingSets = ((List *) 
# 143 "src/backend/parser/cypher_parse_agg.c" 3 4
                               ((void *)0)
# 143 "src/backend/parser/cypher_parse_agg.c"
                               );
    }





    hasJoinRTEs = hasSelfRefRTEs = 
# 150 "src/backend/parser/cypher_parse_agg.c" 3 4
                                  0
# 150 "src/backend/parser/cypher_parse_agg.c"
                                       ;
    for ((l) = list_head(pstate->p_rtable); (l) != 
# 151 "src/backend/parser/cypher_parse_agg.c" 3 4
   ((void *)0)
# 151 "src/backend/parser/cypher_parse_agg.c"
   ; (l) = ((l)->next))
    {
        RangeTblEntry *rte = (RangeTblEntry *) ((l)->data.ptr_value);

        if (rte->rtekind == RTE_JOIN)
            hasJoinRTEs = 
# 156 "src/backend/parser/cypher_parse_agg.c" 3 4
                         1
# 156 "src/backend/parser/cypher_parse_agg.c"
                             ;
        else if (rte->rtekind == RTE_CTE && rte->self_reference)
            hasSelfRefRTEs = 
# 158 "src/backend/parser/cypher_parse_agg.c" 3 4
                            1
# 158 "src/backend/parser/cypher_parse_agg.c"
                                ;
    }
# 168 "src/backend/parser/cypher_parse_agg.c"
    for ((l) = list_head(qry->groupClause); (l) != 
# 168 "src/backend/parser/cypher_parse_agg.c" 3 4
   ((void *)0)
# 168 "src/backend/parser/cypher_parse_agg.c"
   ; (l) = ((l)->next))
    {
        SortGroupClause *grpcl = (SortGroupClause *) ((l)->data.ptr_value);
        TargetEntry *expr;

        expr = get_sortgroupclause_tle(grpcl, qry->targetList);
        if (expr == 
# 174 "src/backend/parser/cypher_parse_agg.c" 3 4
                   ((void *)0)
# 174 "src/backend/parser/cypher_parse_agg.c"
                       )
            continue;

        groupClauses = lcons(expr, groupClauses);
    }
# 188 "src/backend/parser/cypher_parse_agg.c"
    if (hasJoinRTEs)
    {
        root = ((PlannerInfo *) ({ Node *_result; ((void)
# 190 "src/backend/parser/cypher_parse_agg.c" 3 4
              1
# 190 "src/backend/parser/cypher_parse_agg.c"
              ); _result = (Node *) ( ( ((sizeof(PlannerInfo)) & (sizeof(long) - 1)) == 0 && (sizeof(PlannerInfo)) <= 1024 && 1024 != 0 && (0) == 0 ) ? MemoryContextAllocZeroAligned(CurrentMemoryContext, sizeof(PlannerInfo)) : MemoryContextAllocZero(CurrentMemoryContext, sizeof(PlannerInfo)) ); _result->type = (T_PlannerInfo); _result; }));
        root->parse = qry;
        root->planner_cxt = CurrentMemoryContext;
        root->hasJoinRTEs = 
# 193 "src/backend/parser/cypher_parse_agg.c" 3 4
                           1
# 193 "src/backend/parser/cypher_parse_agg.c"
                               ;

        groupClauses = (List *) flatten_join_alias_vars(root,
                                                        (Node *) groupClauses);
    }
# 208 "src/backend/parser/cypher_parse_agg.c"
    have_non_var_grouping = 
# 208 "src/backend/parser/cypher_parse_agg.c" 3 4
                           0
# 208 "src/backend/parser/cypher_parse_agg.c"
                                ;
    for ((l) = list_head(groupClauses); (l) != 
# 209 "src/backend/parser/cypher_parse_agg.c" 3 4
   ((void *)0)
# 209 "src/backend/parser/cypher_parse_agg.c"
   ; (l) = ((l)->next))
    {
        TargetEntry *tle = ((l)->data.ptr_value);

        if (!((((const Node*)(tle->expr))->type) == T_Var))
        {
            have_non_var_grouping = 
# 215 "src/backend/parser/cypher_parse_agg.c" 3 4
                                   1
# 215 "src/backend/parser/cypher_parse_agg.c"
                                       ;
        }
        else if (!qry->groupingSets ||
                 list_member_int(gset_common, tle->ressortgroupref))
        {
            groupClauseCommonVars = lappend(groupClauseCommonVars, tle->expr);
        }
    }
# 235 "src/backend/parser/cypher_parse_agg.c"
    clause = (Node *) qry->targetList;
    finalize_grouping_exprs(clause, pstate, qry, groupClauses, root,
                            have_non_var_grouping);
    if (hasJoinRTEs)
        clause = flatten_join_alias_vars(root, clause);
    check_ungrouped_columns(clause, pstate, qry, groupClauses,
                            groupClauseCommonVars, have_non_var_grouping,
                            &func_grouped_rels);

    clause = (Node *) qry->havingQual;
    finalize_grouping_exprs(clause, pstate, qry, groupClauses, root,
                            have_non_var_grouping);
    if (hasJoinRTEs)
        clause = flatten_join_alias_vars(root, clause);
    check_ungrouped_columns(clause, pstate, qry, groupClauses,
                            groupClauseCommonVars, have_non_var_grouping,
                            &func_grouped_rels);




    if (pstate->p_hasAggs && hasSelfRefRTEs)
        do { if (errstart(20, "src/backend/parser/cypher_parse_agg.c", 257, __func__, 
# 257 "src/backend/parser/cypher_parse_agg.c" 3 4
       ((void *)0)
# 257 "src/backend/parser/cypher_parse_agg.c"
       )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('P') - '0') & 0x3F) << 12) + (((('1') - '0') & 0x3F) << 18) + (((('9') - '0') & 0x3F) << 24))), errmsg("aggregate functions are not allowed in a recursive query's recursive term"), parser_errposition(pstate, locate_agg_of_level((Node *) qry, 0))); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)


                                                                                   ;
}
# 284 "src/backend/parser/cypher_parse_agg.c"
static void check_ungrouped_columns(Node *node, ParseState *pstate, Query *qry,
                                    List *groupClauses,
                                    List *groupClauseCommonVars,
                                    
# 287 "src/backend/parser/cypher_parse_agg.c" 3 4
                                   _Bool 
# 287 "src/backend/parser/cypher_parse_agg.c"
                                        have_non_var_grouping,
                                    List **func_grouped_rels)
{
    check_ungrouped_columns_context context;

    context.pstate = pstate;
    context.qry = qry;
    context.root = 
# 294 "src/backend/parser/cypher_parse_agg.c" 3 4
                  ((void *)0)
# 294 "src/backend/parser/cypher_parse_agg.c"
                      ;
    context.groupClauses = groupClauses;
    context.groupClauseCommonVars = groupClauseCommonVars;
    context.have_non_var_grouping = have_non_var_grouping;
    context.func_grouped_rels = func_grouped_rels;
    context.sublevels_up = 0;
    context.in_agg_direct_args = 
# 300 "src/backend/parser/cypher_parse_agg.c" 3 4
                                0
# 300 "src/backend/parser/cypher_parse_agg.c"
                                     ;
    check_ungrouped_columns_walker(node, &context);
}

static 
# 304 "src/backend/parser/cypher_parse_agg.c" 3 4
      _Bool 
# 304 "src/backend/parser/cypher_parse_agg.c"
           check_ungrouped_columns_walker(Node *node, check_ungrouped_columns_context *context)
{
    ListCell *gl;

    if (node == 
# 308 "src/backend/parser/cypher_parse_agg.c" 3 4
               ((void *)0)
# 308 "src/backend/parser/cypher_parse_agg.c"
                   )
        return 
# 309 "src/backend/parser/cypher_parse_agg.c" 3 4
              0
# 309 "src/backend/parser/cypher_parse_agg.c"
                   ;

    if (((((const Node*)(node))->type) == T_Const) || ((((const Node*)(node))->type) == T_Param))
        return 
# 312 "src/backend/parser/cypher_parse_agg.c" 3 4
              0
# 312 "src/backend/parser/cypher_parse_agg.c"
                   ;

    if (((((const Node*)(node))->type) == T_Aggref))
    {
        Aggref *agg = (Aggref *) node;

        if ((int) agg->agglevelsup == context->sublevels_up)
        {
# 328 "src/backend/parser/cypher_parse_agg.c"
            
# 328 "src/backend/parser/cypher_parse_agg.c" 3 4
           _Bool 
# 328 "src/backend/parser/cypher_parse_agg.c"
                result;

            ((void)
# 330 "src/backend/parser/cypher_parse_agg.c" 3 4
           1
# 330 "src/backend/parser/cypher_parse_agg.c"
           );
            context->in_agg_direct_args = 
# 331 "src/backend/parser/cypher_parse_agg.c" 3 4
                                         1
# 331 "src/backend/parser/cypher_parse_agg.c"
                                             ;
            result = check_ungrouped_columns_walker((Node *) agg->aggdirectargs,
                                                    context);
            context->in_agg_direct_args = 
# 334 "src/backend/parser/cypher_parse_agg.c" 3 4
                                         0
# 334 "src/backend/parser/cypher_parse_agg.c"
                                              ;
            return result;
        }







        if ((int) agg->agglevelsup > context->sublevels_up)
            return 
# 345 "src/backend/parser/cypher_parse_agg.c" 3 4
                  0
# 345 "src/backend/parser/cypher_parse_agg.c"
                       ;
    }

    if (((((const Node*)(node))->type) == T_GroupingFunc))
    {
        GroupingFunc *grp = (GroupingFunc *) node;



        if ((int) grp->agglevelsup >= context->sublevels_up)
            return 
# 355 "src/backend/parser/cypher_parse_agg.c" 3 4
                  0
# 355 "src/backend/parser/cypher_parse_agg.c"
                       ;
    }
# 365 "src/backend/parser/cypher_parse_agg.c"
    if (context->have_non_var_grouping && context->sublevels_up == 0)
    {
        for ((gl) = list_head(context->groupClauses); (gl) != 
# 367 "src/backend/parser/cypher_parse_agg.c" 3 4
       ((void *)0)
# 367 "src/backend/parser/cypher_parse_agg.c"
       ; (gl) = ((gl)->next))
        {
            TargetEntry *tle = ((gl)->data.ptr_value);

            if (equal(node, tle->expr))
                return 
# 372 "src/backend/parser/cypher_parse_agg.c" 3 4
                      0
# 372 "src/backend/parser/cypher_parse_agg.c"
                           ;
        }
    }







    if (((((const Node*)(node))->type) == T_Var))
    {
        Var *var = (Var *) node;
        RangeTblEntry *rte;
        char *attname;

        if (var->varlevelsup != context->sublevels_up)
            return 
# 389 "src/backend/parser/cypher_parse_agg.c" 3 4
                  0
# 389 "src/backend/parser/cypher_parse_agg.c"
                       ;




        if (!context->have_non_var_grouping || context->sublevels_up != 0)
        {
            for ((gl) = list_head(context->groupClauses); (gl) != 
# 396 "src/backend/parser/cypher_parse_agg.c" 3 4
           ((void *)0)
# 396 "src/backend/parser/cypher_parse_agg.c"
           ; (gl) = ((gl)->next))
            {
                Var *gvar = (Var *) ((TargetEntry *) ((gl)->data.ptr_value))->expr;

                if (((((const Node*)(gvar))->type) == T_Var) &&
                    gvar->varno == var->varno &&
                    gvar->varattno == var->varattno &&
                    gvar->varlevelsup == 0)
                    return 
# 404 "src/backend/parser/cypher_parse_agg.c" 3 4
                          0
# 404 "src/backend/parser/cypher_parse_agg.c"
                               ;
            }
        }
# 424 "src/backend/parser/cypher_parse_agg.c"
        if (list_member_int(*context->func_grouped_rels, var->varno))
            return 
# 425 "src/backend/parser/cypher_parse_agg.c" 3 4
                  0
# 425 "src/backend/parser/cypher_parse_agg.c"
                       ;

        ((void)
# 427 "src/backend/parser/cypher_parse_agg.c" 3 4
       1
# 427 "src/backend/parser/cypher_parse_agg.c"
       )
                                                                          ;
        rte = ((RangeTblEntry *) list_nth(context->pstate->p_rtable, (var->varno)-1));
        if (rte->rtekind == RTE_RELATION)
        {
            if (check_functional_grouping(rte->relid, var->varno, 0,
                                          context->groupClauseCommonVars,
                                          &context->qry->constraintDeps))
            {
                *context->func_grouped_rels = lappend_int(*context->func_grouped_rels,
                                                          var->varno);
                return 
# 438 "src/backend/parser/cypher_parse_agg.c" 3 4
                      0
# 438 "src/backend/parser/cypher_parse_agg.c"
                           ;
            }
        }


        attname = get_rte_attribute_name(rte, var->varattno);
        if (context->sublevels_up == 0)
            do { if (errstart(20, "src/backend/parser/cypher_parse_agg.c", 445, __func__, 
# 445 "src/backend/parser/cypher_parse_agg.c" 3 4
           ((void *)0)
# 445 "src/backend/parser/cypher_parse_agg.c"
           )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('8') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("\"%s\" must be either part of an explicitly listed key or used inside an aggregate function", attname), context->in_agg_direct_args ? errdetail("Direct arguments of an ordered-set aggregate must use only grouped columns.") : 0, parser_errposition(context->pstate, var->location)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)



                                                                                              ;
        else
            do { if (errstart(20, "src/backend/parser/cypher_parse_agg.c", 451, __func__, 
# 451 "src/backend/parser/cypher_parse_agg.c" 3 4
           ((void *)0)
# 451 "src/backend/parser/cypher_parse_agg.c"
           )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('8') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("subquery uses ungrouped column \"%s.%s\" from outer query", rte->eref->aliasname, attname), parser_errposition(context->pstate, var->location)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)


                                                                                       ;
    }

    if (((((const Node*)(node))->type) == T_Query))
    {

        
# 460 "src/backend/parser/cypher_parse_agg.c" 3 4
       _Bool 
# 460 "src/backend/parser/cypher_parse_agg.c"
            result;

        context->sublevels_up++;
        result = query_tree_walker((Query *) node,
                                   check_ungrouped_columns_walker,
                                   (void *) context, 0);
        context->sublevels_up--;
        return result;
    }

    return expression_tree_walker(node, check_ungrouped_columns_walker,
                                  (void *) context);
}
# 485 "src/backend/parser/cypher_parse_agg.c"
static void finalize_grouping_exprs(Node *node, ParseState *pstate, Query *qry,
                                    List *groupClauses, PlannerInfo *root,
                                    
# 487 "src/backend/parser/cypher_parse_agg.c" 3 4
                                   _Bool 
# 487 "src/backend/parser/cypher_parse_agg.c"
                                        have_non_var_grouping)
{
    check_ungrouped_columns_context context;

    context.pstate = pstate;
    context.qry = qry;
    context.root = root;
    context.groupClauses = groupClauses;
    context.groupClauseCommonVars = ((List *) 
# 495 "src/backend/parser/cypher_parse_agg.c" 3 4
                                   ((void *)0)
# 495 "src/backend/parser/cypher_parse_agg.c"
                                   );
    context.have_non_var_grouping = have_non_var_grouping;
    context.func_grouped_rels = 
# 497 "src/backend/parser/cypher_parse_agg.c" 3 4
                               ((void *)0)
# 497 "src/backend/parser/cypher_parse_agg.c"
                                   ;
    context.sublevels_up = 0;
    context.in_agg_direct_args = 
# 499 "src/backend/parser/cypher_parse_agg.c" 3 4
                                0
# 499 "src/backend/parser/cypher_parse_agg.c"
                                     ;
    finalize_grouping_exprs_walker(node, &context);
}

static 
# 503 "src/backend/parser/cypher_parse_agg.c" 3 4
      _Bool 
# 503 "src/backend/parser/cypher_parse_agg.c"
           finalize_grouping_exprs_walker(Node *node,
                                           check_ungrouped_columns_context *context)
{
    ListCell *gl;

    if (node == 
# 508 "src/backend/parser/cypher_parse_agg.c" 3 4
               ((void *)0)
# 508 "src/backend/parser/cypher_parse_agg.c"
                   )
        return 
# 509 "src/backend/parser/cypher_parse_agg.c" 3 4
              0
# 509 "src/backend/parser/cypher_parse_agg.c"
                   ;
    if (((((const Node*)(node))->type) == T_Const) || ((((const Node*)(node))->type) == T_Param))
        return 
# 511 "src/backend/parser/cypher_parse_agg.c" 3 4
              0
# 511 "src/backend/parser/cypher_parse_agg.c"
                   ;

    if (((((const Node*)(node))->type) == T_Aggref))
    {
        Aggref *agg = (Aggref *) node;

        if ((int) agg->agglevelsup == context->sublevels_up)
        {






            
# 525 "src/backend/parser/cypher_parse_agg.c" 3 4
           _Bool 
# 525 "src/backend/parser/cypher_parse_agg.c"
                result;

            ((void)
# 527 "src/backend/parser/cypher_parse_agg.c" 3 4
           1
# 527 "src/backend/parser/cypher_parse_agg.c"
           );
            context->in_agg_direct_args = 
# 528 "src/backend/parser/cypher_parse_agg.c" 3 4
                                         1
# 528 "src/backend/parser/cypher_parse_agg.c"
                                             ;
            result = finalize_grouping_exprs_walker((Node *) agg->aggdirectargs,
                                                context);
            context->in_agg_direct_args = 
# 531 "src/backend/parser/cypher_parse_agg.c" 3 4
                                         0
# 531 "src/backend/parser/cypher_parse_agg.c"
                                              ;
            return result;
        }







        if ((int) agg->agglevelsup > context->sublevels_up)
            return 
# 542 "src/backend/parser/cypher_parse_agg.c" 3 4
                  0
# 542 "src/backend/parser/cypher_parse_agg.c"
                       ;
    }

    if (((((const Node*)(node))->type) == T_GroupingFunc))
    {
        GroupingFunc *grp = (GroupingFunc *) node;






        if ((int) grp->agglevelsup == context->sublevels_up)
        {
            ListCell *lc;
            List *ref_list = ((List *) 
# 557 "src/backend/parser/cypher_parse_agg.c" 3 4
                            ((void *)0)
# 557 "src/backend/parser/cypher_parse_agg.c"
                            );

            for ((lc) = list_head(grp->args); (lc) != 
# 559 "src/backend/parser/cypher_parse_agg.c" 3 4
           ((void *)0)
# 559 "src/backend/parser/cypher_parse_agg.c"
           ; (lc) = ((lc)->next))
            {
                Node *expr = ((lc)->data.ptr_value);
                Index ref = 0;

                if (context->root)
                    expr = flatten_join_alias_vars(context->root, expr);







                if (((((const Node*)(expr))->type) == T_Var))
                {
                    Var *var = (Var *) expr;

                    if (var->varlevelsup == context->sublevels_up)
                    {
                        for ((gl) = list_head(context->groupClauses); (gl) != 
# 579 "src/backend/parser/cypher_parse_agg.c" 3 4
                       ((void *)0)
# 579 "src/backend/parser/cypher_parse_agg.c"
                       ; (gl) = ((gl)->next))
                        {
                            TargetEntry *tle = ((gl)->data.ptr_value);
                            Var *gvar = (Var *) tle->expr;

                            if (((((const Node*)(gvar))->type) == T_Var) &&
                                gvar->varno == var->varno &&
                                gvar->varattno == var->varattno &&
                                gvar->varlevelsup == 0)
                            {
                                ref = tle->ressortgroupref;
                                break;
                            }
                        }
                    }
                }
                else if (context->have_non_var_grouping &&
                         context->sublevels_up == 0)
                {
                    for ((gl) = list_head(context->groupClauses); (gl) != 
# 598 "src/backend/parser/cypher_parse_agg.c" 3 4
                   ((void *)0)
# 598 "src/backend/parser/cypher_parse_agg.c"
                   ; (gl) = ((gl)->next))
                    {
                        TargetEntry *tle = ((gl)->data.ptr_value);

                        if (equal(expr, tle->expr))
                        {
                           ref = tle->ressortgroupref;
                           break;
                        }
                    }
                }

                if (ref == 0)
                    do { if (errstart(20, "src/backend/parser/cypher_parse_agg.c", 611, __func__, 
# 611 "src/backend/parser/cypher_parse_agg.c" 3 4
                   ((void *)0)
# 611 "src/backend/parser/cypher_parse_agg.c"
                   )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('8') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("arguments to GROUPING must be grouping expressions of the associated query level"), parser_errposition(context->pstate, exprLocation(expr))); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)



                                                  ;

                ref_list = lappend_int(ref_list, ref);
            }

            grp->refs = ref_list;
        }

        if ((int) grp->agglevelsup > context->sublevels_up)
            return 
# 624 "src/backend/parser/cypher_parse_agg.c" 3 4
                  0
# 624 "src/backend/parser/cypher_parse_agg.c"
                       ;
    }

    if (((((const Node*)(node))->type) == T_Query))
    {

        
# 630 "src/backend/parser/cypher_parse_agg.c" 3 4
       _Bool 
# 630 "src/backend/parser/cypher_parse_agg.c"
            result;

        context->sublevels_up++;
        result = query_tree_walker((Query *) node,
                                   finalize_grouping_exprs_walker,
                                   (void *) context, 0);
        context->sublevels_up--;
        return result;
    }
    return expression_tree_walker(node, finalize_grouping_exprs_walker,
                                  (void *) context);
}
# 655 "src/backend/parser/cypher_parse_agg.c"
static List * expand_groupingset_node(GroupingSet *gs)
{
    List *result = ((List *) 
# 657 "src/backend/parser/cypher_parse_agg.c" 3 4
                  ((void *)0)
# 657 "src/backend/parser/cypher_parse_agg.c"
                  );

    switch (gs->kind)
    {
        case GROUPING_SET_EMPTY:
            result = lcons(((List *) 
# 662 "src/backend/parser/cypher_parse_agg.c" 3 4
                    ((void *)0)
# 662 "src/backend/parser/cypher_parse_agg.c"
                    ), ((List *) 
# 662 "src/backend/parser/cypher_parse_agg.c" 3 4
                    ((void *)0)
# 662 "src/backend/parser/cypher_parse_agg.c"
                    ));
            break;

        case GROUPING_SET_SIMPLE:
            result = lcons(gs->content, ((List *) 
# 666 "src/backend/parser/cypher_parse_agg.c" 3 4
                    ((void *)0)
# 666 "src/backend/parser/cypher_parse_agg.c"
                    ));
            break;

        case GROUPING_SET_ROLLUP:
        {
            List *rollup_val = gs->content;
            ListCell *lc;
            int curgroup_size = list_length(gs->content);

            while (curgroup_size > 0)
            {
                List *current_result = ((List *) 
# 677 "src/backend/parser/cypher_parse_agg.c" 3 4
                                      ((void *)0)
# 677 "src/backend/parser/cypher_parse_agg.c"
                                      );
                int i = curgroup_size;

                for ((lc) = list_head(rollup_val); (lc) != 
# 680 "src/backend/parser/cypher_parse_agg.c" 3 4
               ((void *)0)
# 680 "src/backend/parser/cypher_parse_agg.c"
               ; (lc) = ((lc)->next))
                {
                    GroupingSet *gs_current = (GroupingSet *) ((lc)->data.ptr_value);

                    ((void)
# 684 "src/backend/parser/cypher_parse_agg.c" 3 4
                   1
# 684 "src/backend/parser/cypher_parse_agg.c"
                   );

                    current_result = list_concat(current_result,
                                                 list_copy(gs_current->content));


                    if (--i == 0)
                        break;
                }

                result = lappend(result, current_result);
                --curgroup_size;
            }

            result = lappend(result, ((List *) 
# 698 "src/backend/parser/cypher_parse_agg.c" 3 4
                                    ((void *)0)
# 698 "src/backend/parser/cypher_parse_agg.c"
                                    ));
        }
            break;

        case GROUPING_SET_CUBE:
        {
            List *cube_list = gs->content;
            int number_bits = list_length(cube_list);
            uint32 num_sets;
            uint32 i;


            ((void)
# 710 "src/backend/parser/cypher_parse_agg.c" 3 4
           1
# 710 "src/backend/parser/cypher_parse_agg.c"
           );

            num_sets = (1U << number_bits);

            for (i = 0; i < num_sets; i++)
            {
                List *current_result = ((List *) 
# 716 "src/backend/parser/cypher_parse_agg.c" 3 4
                                      ((void *)0)
# 716 "src/backend/parser/cypher_parse_agg.c"
                                      );
                ListCell *lc;
                uint32 mask = 1U;

                for ((lc) = list_head(cube_list); (lc) != 
# 720 "src/backend/parser/cypher_parse_agg.c" 3 4
               ((void *)0)
# 720 "src/backend/parser/cypher_parse_agg.c"
               ; (lc) = ((lc)->next))
                {
                    GroupingSet *gs_current = (GroupingSet *) ((lc)->data.ptr_value);

                    ((void)
# 724 "src/backend/parser/cypher_parse_agg.c" 3 4
                   1
# 724 "src/backend/parser/cypher_parse_agg.c"
                   );

                    if (mask & i)
                    {
                        current_result = list_concat(current_result,
                                                     list_copy(gs_current->content));
                    }

                    mask <<= 1;
                }

                result = lappend(result, current_result);
            }
        }
            break;

        case GROUPING_SET_SETS:
        {
            ListCell *lc;

            for ((lc) = list_head(gs->content); (lc) != 
# 744 "src/backend/parser/cypher_parse_agg.c" 3 4
           ((void *)0)
# 744 "src/backend/parser/cypher_parse_agg.c"
           ; (lc) = ((lc)->next))
            {
                List *current_result = expand_groupingset_node(((lc)->data.ptr_value));

                result = list_concat(result, current_result);
            }
        }
            break;
    }

    return result;
}

static int cmp_list_len_asc(const void *a, const void *b)
{
    int la = list_length(*(List *const *) a);
    int lb = list_length(*(List *const *) b);

    return (la > lb) ? 1 : (la == lb) ? 0 : -1;
}
# 772 "src/backend/parser/cypher_parse_agg.c"
static List * expand_grouping_sets(List *groupingSets, int limit)
{
    List *expanded_groups = ((List *) 
# 774 "src/backend/parser/cypher_parse_agg.c" 3 4
                           ((void *)0)
# 774 "src/backend/parser/cypher_parse_agg.c"
                           );
    List *result = ((List *) 
# 775 "src/backend/parser/cypher_parse_agg.c" 3 4
                  ((void *)0)
# 775 "src/backend/parser/cypher_parse_agg.c"
                  );
    double numsets = 1;
    ListCell *lc;

    if (groupingSets == ((List *) 
# 779 "src/backend/parser/cypher_parse_agg.c" 3 4
                       ((void *)0)
# 779 "src/backend/parser/cypher_parse_agg.c"
                       ))
        return ((List *) 
# 780 "src/backend/parser/cypher_parse_agg.c" 3 4
              ((void *)0)
# 780 "src/backend/parser/cypher_parse_agg.c"
              );

    for ((lc) = list_head(groupingSets); (lc) != 
# 782 "src/backend/parser/cypher_parse_agg.c" 3 4
   ((void *)0)
# 782 "src/backend/parser/cypher_parse_agg.c"
   ; (lc) = ((lc)->next))
    {
        List *current_result = ((List *) 
# 784 "src/backend/parser/cypher_parse_agg.c" 3 4
                              ((void *)0)
# 784 "src/backend/parser/cypher_parse_agg.c"
                              );
        GroupingSet *gs = ((lc)->data.ptr_value);

        current_result = expand_groupingset_node(gs);

        ((void)
# 789 "src/backend/parser/cypher_parse_agg.c" 3 4
       1
# 789 "src/backend/parser/cypher_parse_agg.c"
       );

        numsets *= list_length(current_result);

        if (limit >= 0 && numsets > limit)
            return ((List *) 
# 794 "src/backend/parser/cypher_parse_agg.c" 3 4
                  ((void *)0)
# 794 "src/backend/parser/cypher_parse_agg.c"
                  );

        expanded_groups = lappend(expanded_groups, current_result);
    }







    for ((lc) = list_head((List *) ((list_head(expanded_groups))->data.ptr_value)); (lc) != 
# 805 "src/backend/parser/cypher_parse_agg.c" 3 4
   ((void *)0)
# 805 "src/backend/parser/cypher_parse_agg.c"
   ; (lc) = ((lc)->next))
    {
        result = lappend(result, list_union_int(((List *) 
# 807 "src/backend/parser/cypher_parse_agg.c" 3 4
                                               ((void *)0)
# 807 "src/backend/parser/cypher_parse_agg.c"
                                               ), (List *) ((lc)->data.ptr_value)));
    }

    for ((lc) = (((list_head(expanded_groups))->next)); (lc) != 
# 810 "src/backend/parser/cypher_parse_agg.c" 3 4
   ((void *)0)
# 810 "src/backend/parser/cypher_parse_agg.c"
   ; (lc) = ((lc)->next))
    {
        List *p = ((lc)->data.ptr_value);
        List *new_result = ((List *) 
# 813 "src/backend/parser/cypher_parse_agg.c" 3 4
                          ((void *)0)
# 813 "src/backend/parser/cypher_parse_agg.c"
                          );
        ListCell *lc2;

        for ((lc2) = list_head(result); (lc2) != 
# 816 "src/backend/parser/cypher_parse_agg.c" 3 4
       ((void *)0)
# 816 "src/backend/parser/cypher_parse_agg.c"
       ; (lc2) = ((lc2)->next))
        {
            List *q = ((lc2)->data.ptr_value);
            ListCell *lc3;

            for ((lc3) = list_head(p); (lc3) != 
# 821 "src/backend/parser/cypher_parse_agg.c" 3 4
           ((void *)0)
# 821 "src/backend/parser/cypher_parse_agg.c"
           ; (lc3) = ((lc3)->next))
            {
                new_result = lappend(new_result,
                                     list_union_int(q,(List *) ((lc3)->data.ptr_value)));
            }
        }
        result = new_result;
    }

    if (list_length(result) > 1)
    {
        int result_len = list_length(result);
        List **buf = palloc(sizeof(List *) * result_len);
        List **ptr = buf;

        for ((lc) = list_head(result); (lc) != 
# 836 "src/backend/parser/cypher_parse_agg.c" 3 4
       ((void *)0)
# 836 "src/backend/parser/cypher_parse_agg.c"
       ; (lc) = ((lc)->next))
        {
            *ptr++ = ((lc)->data.ptr_value);
        }

        pg_qsort(buf,result_len,sizeof(List *),cmp_list_len_asc);

        result = ((List *) 
# 843 "src/backend/parser/cypher_parse_agg.c" 3 4
                ((void *)0)
# 843 "src/backend/parser/cypher_parse_agg.c"
                );
        ptr = buf;

        while (result_len-- > 0)
            result = lappend(result, *ptr++);

        pfree(buf);
    }

    return result;
}
