# 0 "src/backend/utils/adt/age_global_graph.c"
# 1 "/age//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/backend/utils/adt/age_global_graph.c"
# 20 "src/backend/utils/adt/age_global_graph.c"
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
# 21 "src/backend/utils/adt/age_global_graph.c" 2

# 1 "/usr/include/postgresql/11/server/catalog/namespace.h" 1
# 17 "/usr/include/postgresql/11/server/catalog/namespace.h"
# 1 "/usr/include/postgresql/11/server/nodes/primnodes.h" 1
# 20 "/usr/include/postgresql/11/server/nodes/primnodes.h"
# 1 "/usr/include/postgresql/11/server/access/attnum.h" 1
# 21 "/usr/include/postgresql/11/server/access/attnum.h"
typedef int16 AttrNumber;
# 21 "/usr/include/postgresql/11/server/nodes/primnodes.h" 2
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
# 22 "/usr/include/postgresql/11/server/nodes/primnodes.h" 2
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
# 23 "/usr/include/postgresql/11/server/nodes/primnodes.h" 2
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
# 18 "/usr/include/postgresql/11/server/catalog/namespace.h" 2
# 1 "/usr/include/postgresql/11/server/storage/lock.h" 1
# 21 "/usr/include/postgresql/11/server/storage/lock.h"
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
# 22 "/usr/include/postgresql/11/server/storage/lock.h" 2
# 1 "/usr/include/postgresql/11/server/storage/backendid.h" 1
# 21 "/usr/include/postgresql/11/server/storage/backendid.h"
typedef int BackendId;



extern BackendId MyBackendId;


extern BackendId ParallelMasterBackendId;
# 23 "/usr/include/postgresql/11/server/storage/lock.h" 2
# 1 "/usr/include/postgresql/11/server/storage/lwlock.h" 1
# 21 "/usr/include/postgresql/11/server/storage/lwlock.h"
# 1 "/usr/include/postgresql/11/server/storage/proclist_types.h" 1
# 26 "/usr/include/postgresql/11/server/storage/proclist_types.h"
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
# 22 "/usr/include/postgresql/11/server/storage/lwlock.h" 2
# 1 "/usr/include/postgresql/11/server/storage/s_lock.h" 1
# 330 "/usr/include/postgresql/11/server/storage/s_lock.h"
typedef int slock_t;

static __inline__ int
tas(volatile slock_t *lock)
{
 return __sync_lock_test_and_set(lock, 1);
}
# 1050 "/usr/include/postgresql/11/server/storage/s_lock.h"
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
# 23 "/usr/include/postgresql/11/server/storage/lwlock.h" 2
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
# 24 "/usr/include/postgresql/11/server/storage/lwlock.h" 2

struct PGPROC;






typedef struct LWLock
{
 uint16 tranche;
 pg_atomic_uint32 state;
 proclist_head waiters;




} LWLock;
# 77 "/usr/include/postgresql/11/server/storage/lwlock.h"
typedef union LWLockPadded
{
 LWLock lock;
 char pad[128];
} LWLockPadded;


typedef union LWLockMinimallyPadded
{
 LWLock lock;
 char pad[(sizeof(LWLock) <= 32 ? 32 : 64)];
} LWLockMinimallyPadded;

extern LWLockPadded *MainLWLockArray;
extern char *MainLWLockNames[];


typedef struct NamedLWLockTranche
{
 int trancheId;
 char *trancheName;
} NamedLWLockTranche;

extern NamedLWLockTranche *NamedLWLockTrancheArray;
extern int NamedLWLockTrancheRequests;


# 1 "/usr/include/postgresql/11/server/storage/lwlocknames.h" 1
# 105 "/usr/include/postgresql/11/server/storage/lwlock.h" 2
# 132 "/usr/include/postgresql/11/server/storage/lwlock.h"
typedef enum LWLockMode
{
 LW_EXCLUSIVE,
 LW_SHARED,
 LW_WAIT_UNTIL_FREE


} LWLockMode;






extern 
# 146 "/usr/include/postgresql/11/server/storage/lwlock.h" 3 4
      _Bool 
# 146 "/usr/include/postgresql/11/server/storage/lwlock.h"
           LWLockAcquire(LWLock *lock, LWLockMode mode);
extern 
# 147 "/usr/include/postgresql/11/server/storage/lwlock.h" 3 4
      _Bool 
# 147 "/usr/include/postgresql/11/server/storage/lwlock.h"
           LWLockConditionalAcquire(LWLock *lock, LWLockMode mode);
extern 
# 148 "/usr/include/postgresql/11/server/storage/lwlock.h" 3 4
      _Bool 
# 148 "/usr/include/postgresql/11/server/storage/lwlock.h"
           LWLockAcquireOrWait(LWLock *lock, LWLockMode mode);
extern void LWLockRelease(LWLock *lock);
extern void LWLockReleaseClearVar(LWLock *lock, uint64 *valptr, uint64 val);
extern void LWLockReleaseAll(void);
extern 
# 152 "/usr/include/postgresql/11/server/storage/lwlock.h" 3 4
      _Bool 
# 152 "/usr/include/postgresql/11/server/storage/lwlock.h"
           LWLockHeldByMe(LWLock *lock);
extern 
# 153 "/usr/include/postgresql/11/server/storage/lwlock.h" 3 4
      _Bool 
# 153 "/usr/include/postgresql/11/server/storage/lwlock.h"
           LWLockAnyHeldByMe(LWLock *lock, int nlocks, size_t stride);
extern 
# 154 "/usr/include/postgresql/11/server/storage/lwlock.h" 3 4
      _Bool 
# 154 "/usr/include/postgresql/11/server/storage/lwlock.h"
           LWLockHeldByMeInMode(LWLock *lock, LWLockMode mode);

extern 
# 156 "/usr/include/postgresql/11/server/storage/lwlock.h" 3 4
      _Bool 
# 156 "/usr/include/postgresql/11/server/storage/lwlock.h"
           LWLockWaitForVar(LWLock *lock, uint64 *valptr, uint64 oldval, uint64 *newval);
extern void LWLockUpdateVar(LWLock *lock, uint64 *valptr, uint64 value);

extern Size LWLockShmemSize(void);
extern void CreateLWLocks(void);
extern void InitLWLockAccess(void);

extern const char *GetLWLockIdentifier(uint32 classId, uint16 eventId);







extern void RequestNamedLWLockTranche(const char *tranche_name, int num_lwlocks);
extern LWLockPadded *GetNamedLWLockTranche(const char *tranche_name);
# 187 "/usr/include/postgresql/11/server/storage/lwlock.h"
extern int LWLockNewTrancheId(void);
extern void LWLockRegisterTranche(int tranche_id, const char *tranche_name);
extern void LWLockInitialize(LWLock *lock, int tranche_id);







typedef enum BuiltinTrancheIds
{
 LWTRANCHE_CLOG_BUFFERS = 48,
 LWTRANCHE_COMMITTS_BUFFERS,
 LWTRANCHE_SUBTRANS_BUFFERS,
 LWTRANCHE_MXACTOFFSET_BUFFERS,
 LWTRANCHE_MXACTMEMBER_BUFFERS,
 LWTRANCHE_ASYNC_BUFFERS,
 LWTRANCHE_OLDSERXID_BUFFERS,
 LWTRANCHE_WAL_INSERT,
 LWTRANCHE_BUFFER_CONTENT,
 LWTRANCHE_BUFFER_IO_IN_PROGRESS,
 LWTRANCHE_REPLICATION_ORIGIN,
 LWTRANCHE_REPLICATION_SLOT_IO_IN_PROGRESS,
 LWTRANCHE_PROC,
 LWTRANCHE_BUFFER_MAPPING,
 LWTRANCHE_LOCK_MANAGER,
 LWTRANCHE_PREDICATE_LOCK_MANAGER,
 LWTRANCHE_PARALLEL_HASH_JOIN,
 LWTRANCHE_PARALLEL_QUERY_DSA,
 LWTRANCHE_SESSION_DSA,
 LWTRANCHE_SESSION_RECORD_TABLE,
 LWTRANCHE_SESSION_TYPMOD_TABLE,
 LWTRANCHE_SHARED_TUPLESTORE,
 LWTRANCHE_TBM,
 LWTRANCHE_PARALLEL_APPEND,
 LWTRANCHE_FIRST_USER_DEFINED
} BuiltinTrancheIds;






typedef LWLock *LWLockId;
# 24 "/usr/include/postgresql/11/server/storage/lock.h" 2
# 1 "/usr/include/postgresql/11/server/storage/shmem.h" 1
# 24 "/usr/include/postgresql/11/server/storage/shmem.h"
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
# 25 "/usr/include/postgresql/11/server/storage/shmem.h" 2



typedef struct SHM_QUEUE
{
 struct SHM_QUEUE *prev;
 struct SHM_QUEUE *next;
} SHM_QUEUE;


extern void InitShmemAccess(void *seghdr);
extern void InitShmemAllocation(void);
extern void *ShmemAlloc(Size size);
extern void *ShmemAllocNoError(Size size);
extern void *ShmemAllocUnlocked(Size size);
extern 
# 40 "/usr/include/postgresql/11/server/storage/shmem.h" 3 4
      _Bool 
# 40 "/usr/include/postgresql/11/server/storage/shmem.h"
           ShmemAddrIsValid(const void *addr);
extern void InitShmemIndex(void);
extern HTAB *ShmemInitHash(const char *name, long init_size, long max_size,
     HASHCTL *infoP, int hash_flags);
extern void *ShmemInitStruct(const char *name, Size size, 
# 44 "/usr/include/postgresql/11/server/storage/shmem.h" 3 4
                                                         _Bool 
# 44 "/usr/include/postgresql/11/server/storage/shmem.h"
                                                              *foundPtr);
extern Size add_size(Size s1, Size s2);
extern Size mul_size(Size s1, Size s2);


extern void RequestAddinShmemSpace(Size size);
# 58 "/usr/include/postgresql/11/server/storage/shmem.h"
typedef struct
{
 char key[(48)];
 void *location;
 Size size;
} ShmemIndexEnt;




extern void SHMQueueInit(SHM_QUEUE *queue);
extern void SHMQueueElemInit(SHM_QUEUE *queue);
extern void SHMQueueDelete(SHM_QUEUE *queue);
extern void SHMQueueInsertBefore(SHM_QUEUE *queue, SHM_QUEUE *elem);
extern void SHMQueueInsertAfter(SHM_QUEUE *queue, SHM_QUEUE *elem);
extern Pointer SHMQueueNext(const SHM_QUEUE *queue, const SHM_QUEUE *curElem,
    Size linkOffset);
extern Pointer SHMQueuePrev(const SHM_QUEUE *queue, const SHM_QUEUE *curElem,
    Size linkOffset);
extern 
# 77 "/usr/include/postgresql/11/server/storage/shmem.h" 3 4
      _Bool 
# 77 "/usr/include/postgresql/11/server/storage/shmem.h"
           SHMQueueEmpty(const SHM_QUEUE *queue);
extern 
# 78 "/usr/include/postgresql/11/server/storage/shmem.h" 3 4
      _Bool 
# 78 "/usr/include/postgresql/11/server/storage/shmem.h"
           SHMQueueIsDetached(const SHM_QUEUE *queue);
# 25 "/usr/include/postgresql/11/server/storage/lock.h" 2



typedef struct PGPROC PGPROC;

typedef struct PROC_QUEUE
{
 SHM_QUEUE links;
 int size;
} PROC_QUEUE;


extern int max_locks_per_xact;
# 64 "/usr/include/postgresql/11/server/storage/lock.h"
typedef struct
{
 BackendId backendId;
 LocalTransactionId localTransactionId;
} VirtualTransactionId;
# 113 "/usr/include/postgresql/11/server/storage/lock.h"
typedef struct LockMethodData
{
 int numLockModes;
 const LOCKMASK *conflictTab;
 const char *const *lockModeNames;
 const 
# 118 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
      _Bool 
# 118 "/usr/include/postgresql/11/server/storage/lock.h"
           *trace_flag;
} LockMethodData;

typedef const LockMethodData *LockMethod;





typedef uint16 LOCKMETHODID;
# 140 "/usr/include/postgresql/11/server/storage/lock.h"
typedef enum LockTagType
{
 LOCKTAG_RELATION,

 LOCKTAG_RELATION_EXTEND,

 LOCKTAG_PAGE,

 LOCKTAG_TUPLE,

 LOCKTAG_TRANSACTION,

 LOCKTAG_VIRTUALTRANSACTION,

 LOCKTAG_SPECULATIVE_TOKEN,

 LOCKTAG_OBJECT,







 LOCKTAG_USERLOCK,
 LOCKTAG_ADVISORY,
 LOCKTAG_DATABASE_FROZEN_IDS

} LockTagType;



extern const char *const LockTagTypeNames[];
# 182 "/usr/include/postgresql/11/server/storage/lock.h"
typedef struct LOCKTAG
{
 uint32 locktag_field1;
 uint32 locktag_field2;
 uint32 locktag_field3;
 uint16 locktag_field4;
 uint8 locktag_type;
 uint8 locktag_lockmethodid;
} LOCKTAG;
# 296 "/usr/include/postgresql/11/server/storage/lock.h"
typedef struct LOCK
{

 LOCKTAG tag;


 LOCKMASK grantMask;
 LOCKMASK waitMask;
 SHM_QUEUE procLocks;
 PROC_QUEUE waitProcs;
 int requested[10];
 int nRequested;
 int granted[10];
 int nGranted;
} LOCK;
# 349 "/usr/include/postgresql/11/server/storage/lock.h"
typedef struct PROCLOCKTAG
{

 LOCK *myLock;
 PGPROC *myProc;
} PROCLOCKTAG;

typedef struct PROCLOCK
{

 PROCLOCKTAG tag;


 PGPROC *groupLeader;
 LOCKMASK holdMask;
 LOCKMASK releaseMask;
 SHM_QUEUE lockLink;
 SHM_QUEUE procLink;
} PROCLOCK;
# 395 "/usr/include/postgresql/11/server/storage/lock.h"
typedef struct LOCALLOCKTAG
{
 LOCKTAG lock;
 LOCKMODE mode;
} LOCALLOCKTAG;

typedef struct LOCALLOCKOWNER
{






 struct ResourceOwnerData *owner;
 int64 nLocks;
} LOCALLOCKOWNER;

typedef struct LOCALLOCK
{

 LOCALLOCKTAG tag;


 LOCK *lock;
 PROCLOCK *proclock;
 uint32 hashcode;
 int64 nLocks;
 
# 423 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
_Bool 
# 423 "/usr/include/postgresql/11/server/storage/lock.h"
      holdsStrongLockCount;
 
# 424 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
_Bool 
# 424 "/usr/include/postgresql/11/server/storage/lock.h"
      lockCleared;
 int numLockOwners;
 int maxLockOwners;
 LOCALLOCKOWNER *lockOwners;
} LOCALLOCK;
# 438 "/usr/include/postgresql/11/server/storage/lock.h"
typedef struct LockInstanceData
{
 LOCKTAG locktag;
 LOCKMASK holdMask;
 LOCKMODE waitLockMode;
 BackendId backend;
 LocalTransactionId lxid;
 int pid;
 int leaderPid;
 
# 447 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
_Bool 
# 447 "/usr/include/postgresql/11/server/storage/lock.h"
      fastpath;
} LockInstanceData;

typedef struct LockData
{
 int nelements;
 LockInstanceData *locks;
} LockData;

typedef struct BlockedProcData
{
 int pid;


 int first_lock;
 int num_locks;


 int first_waiter;
 int num_waiters;
} BlockedProcData;

typedef struct BlockedProcsData
{
 BlockedProcData *procs;
 LockInstanceData *locks;
 int *waiter_pids;
 int nprocs;
 int maxprocs;
 int nlocks;
 int maxlocks;
 int npids;
 int maxpids;
} BlockedProcsData;



typedef enum
{
 LOCKACQUIRE_NOT_AVAIL,
 LOCKACQUIRE_OK,
 LOCKACQUIRE_ALREADY_HELD,
 LOCKACQUIRE_ALREADY_CLEAR
} LockAcquireResult;


typedef enum
{
 DS_NOT_YET_CHECKED,
 DS_NO_DEADLOCK,
 DS_SOFT_DEADLOCK,
 DS_HARD_DEADLOCK,
 DS_BLOCKED_BY_AUTOVACUUM

} DeadLockState;
# 532 "/usr/include/postgresql/11/server/storage/lock.h"
extern void InitLocks(void);
extern LockMethod GetLocksMethodTable(const LOCK *lock);
extern LockMethod GetLockTagsMethodTable(const LOCKTAG *locktag);
extern uint32 LockTagHashCode(const LOCKTAG *locktag);
extern 
# 536 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
      _Bool 
# 536 "/usr/include/postgresql/11/server/storage/lock.h"
           DoLockModesConflict(LOCKMODE mode1, LOCKMODE mode2);
extern LockAcquireResult LockAcquire(const LOCKTAG *locktag,
   LOCKMODE lockmode,
   
# 539 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
  _Bool 
# 539 "/usr/include/postgresql/11/server/storage/lock.h"
       sessionLock,
   
# 540 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
  _Bool 
# 540 "/usr/include/postgresql/11/server/storage/lock.h"
       dontWait);
extern LockAcquireResult LockAcquireExtended(const LOCKTAG *locktag,
     LOCKMODE lockmode,
     
# 543 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
    _Bool 
# 543 "/usr/include/postgresql/11/server/storage/lock.h"
         sessionLock,
     
# 544 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
    _Bool 
# 544 "/usr/include/postgresql/11/server/storage/lock.h"
         dontWait,
     
# 545 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
    _Bool 
# 545 "/usr/include/postgresql/11/server/storage/lock.h"
         reportMemoryError,
     LOCALLOCK **locallockp);
extern void AbortStrongLockAcquire(void);
extern void MarkLockClear(LOCALLOCK *locallock);
extern 
# 549 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
      _Bool 
# 549 "/usr/include/postgresql/11/server/storage/lock.h"
           LockRelease(const LOCKTAG *locktag,
   LOCKMODE lockmode, 
# 550 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
                     _Bool 
# 550 "/usr/include/postgresql/11/server/storage/lock.h"
                          sessionLock);
extern void LockReleaseAll(LOCKMETHODID lockmethodid, 
# 551 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
                                                     _Bool 
# 551 "/usr/include/postgresql/11/server/storage/lock.h"
                                                          allLocks);
extern void LockReleaseSession(LOCKMETHODID lockmethodid);
extern void LockReleaseCurrentOwner(LOCALLOCK **locallocks, int nlocks);
extern void LockReassignCurrentOwner(LOCALLOCK **locallocks, int nlocks);
extern 
# 555 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
      _Bool 
# 555 "/usr/include/postgresql/11/server/storage/lock.h"
           LockHasWaiters(const LOCKTAG *locktag,
      LOCKMODE lockmode, 
# 556 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
                        _Bool 
# 556 "/usr/include/postgresql/11/server/storage/lock.h"
                             sessionLock);
extern VirtualTransactionId *GetLockConflicts(const LOCKTAG *locktag,
     LOCKMODE lockmode);
extern void AtPrepare_Locks(void);
extern void PostPrepare_Locks(TransactionId xid);
extern int LockCheckConflicts(LockMethod lockMethodTable,
       LOCKMODE lockmode,
       LOCK *lock, PROCLOCK *proclock);
extern void GrantLock(LOCK *lock, PROCLOCK *proclock, LOCKMODE lockmode);
extern void GrantAwaitedLock(void);
extern void RemoveFromWaitQueue(PGPROC *proc, uint32 hashcode);
extern Size LockShmemSize(void);
extern LockData *GetLockStatusData(void);
extern BlockedProcsData *GetBlockerStatusData(int blocked_pid);

extern xl_standby_lock *GetRunningTransactionLocks(int *nlocks);
extern const char *GetLockmodeName(LOCKMETHODID lockmethodid, LOCKMODE mode);

extern void lock_twophase_recover(TransactionId xid, uint16 info,
       void *recdata, uint32 len);
extern void lock_twophase_postcommit(TransactionId xid, uint16 info,
       void *recdata, uint32 len);
extern void lock_twophase_postabort(TransactionId xid, uint16 info,
      void *recdata, uint32 len);
extern void lock_twophase_standby_recover(TransactionId xid, uint16 info,
         void *recdata, uint32 len);

extern DeadLockState DeadLockCheck(PGPROC *proc);
extern PGPROC *GetBlockingAutoVacuumPgproc(void);
extern void DeadLockReport(void) __attribute__((noreturn));
extern void RememberSimpleDeadLock(PGPROC *proc1,
        LOCKMODE lockmode,
        LOCK *lock,
        PGPROC *proc2);
extern void InitDeadLockChecking(void);

extern int LockWaiterCount(const LOCKTAG *locktag);







extern void VirtualXactLockTableInsert(VirtualTransactionId vxid);
extern void VirtualXactLockTableCleanup(void);
extern 
# 602 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
      _Bool 
# 602 "/usr/include/postgresql/11/server/storage/lock.h"
           VirtualXactLock(VirtualTransactionId vxid, 
# 602 "/usr/include/postgresql/11/server/storage/lock.h" 3 4
                                                      _Bool 
# 602 "/usr/include/postgresql/11/server/storage/lock.h"
                                                           wait);
# 19 "/usr/include/postgresql/11/server/catalog/namespace.h" 2
# 28 "/usr/include/postgresql/11/server/catalog/namespace.h"
typedef struct _FuncCandidateList
{
 struct _FuncCandidateList *next;
 int pathpos;
 Oid oid;
 int nargs;
 int nvargs;
 int ndargs;
 int *argnumbers;
 Oid args[];
} *FuncCandidateList;




typedef enum TempNamespaceStatus
{
 TEMP_NAMESPACE_NOT_TEMP,
 TEMP_NAMESPACE_IDLE,
 TEMP_NAMESPACE_IN_USE
} TempNamespaceStatus;




typedef struct OverrideSearchPath
{
 List *schemas;
 
# 56 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
_Bool 
# 56 "/usr/include/postgresql/11/server/catalog/namespace.h"
      addCatalog;
 
# 57 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
_Bool 
# 57 "/usr/include/postgresql/11/server/catalog/namespace.h"
      addTemp;
} OverrideSearchPath;




typedef enum RVROption
{
 RVR_MISSING_OK = 1 << 0,
 RVR_NOWAIT = 1 << 1,
 RVR_SKIP_LOCKED = 1 << 2
} RVROption;

typedef void (*RangeVarGetRelidCallback) (const RangeVar *relation, Oid relId,
            Oid oldRelId, void *callback_arg);





extern Oid RangeVarGetRelidExtended(const RangeVar *relation,
       LOCKMODE lockmode, uint32 flags,
       RangeVarGetRelidCallback callback,
       void *callback_arg);
extern Oid RangeVarGetCreationNamespace(const RangeVar *newRelation);
extern Oid RangeVarGetAndCheckCreationNamespace(RangeVar *newRelation,
          LOCKMODE lockmode,
          Oid *existing_relation_id);
extern void RangeVarAdjustRelationPersistence(RangeVar *newRelation, Oid nspid);
extern Oid RelnameGetRelid(const char *relname);
extern 
# 87 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 87 "/usr/include/postgresql/11/server/catalog/namespace.h"
           RelationIsVisible(Oid relid);

extern Oid TypenameGetTypid(const char *typname);
extern Oid TypenameGetTypidExtended(const char *typname, 
# 90 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                                        _Bool 
# 90 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                                             temp_ok);
extern 
# 91 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 91 "/usr/include/postgresql/11/server/catalog/namespace.h"
           TypeIsVisible(Oid typid);

extern FuncCandidateList FuncnameGetCandidates(List *names,
       int nargs, List *argnames,
       
# 95 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 95 "/usr/include/postgresql/11/server/catalog/namespace.h"
           expand_variadic,
       
# 96 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 96 "/usr/include/postgresql/11/server/catalog/namespace.h"
           expand_defaults,
       
# 97 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 97 "/usr/include/postgresql/11/server/catalog/namespace.h"
           missing_ok);
extern 
# 98 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 98 "/usr/include/postgresql/11/server/catalog/namespace.h"
           FunctionIsVisible(Oid funcid);

extern Oid OpernameGetOprid(List *names, Oid oprleft, Oid oprright);
extern FuncCandidateList OpernameGetCandidates(List *names, char oprkind,
       
# 102 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 102 "/usr/include/postgresql/11/server/catalog/namespace.h"
           missing_schema_ok);
extern 
# 103 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 103 "/usr/include/postgresql/11/server/catalog/namespace.h"
           OperatorIsVisible(Oid oprid);

extern Oid OpclassnameGetOpcid(Oid amid, const char *opcname);
extern 
# 106 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 106 "/usr/include/postgresql/11/server/catalog/namespace.h"
           OpclassIsVisible(Oid opcid);

extern Oid OpfamilynameGetOpfid(Oid amid, const char *opfname);
extern 
# 109 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 109 "/usr/include/postgresql/11/server/catalog/namespace.h"
           OpfamilyIsVisible(Oid opfid);

extern Oid CollationGetCollid(const char *collname);
extern 
# 112 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 112 "/usr/include/postgresql/11/server/catalog/namespace.h"
           CollationIsVisible(Oid collid);

extern Oid ConversionGetConid(const char *conname);
extern 
# 115 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 115 "/usr/include/postgresql/11/server/catalog/namespace.h"
           ConversionIsVisible(Oid conid);

extern Oid get_statistics_object_oid(List *names, 
# 117 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                                 _Bool 
# 117 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                                      missing_ok);
extern 
# 118 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 118 "/usr/include/postgresql/11/server/catalog/namespace.h"
           StatisticsObjIsVisible(Oid stxid);

extern Oid get_ts_parser_oid(List *names, 
# 120 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                         _Bool 
# 120 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                              missing_ok);
extern 
# 121 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 121 "/usr/include/postgresql/11/server/catalog/namespace.h"
           TSParserIsVisible(Oid prsId);

extern Oid get_ts_dict_oid(List *names, 
# 123 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                       _Bool 
# 123 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                            missing_ok);
extern 
# 124 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 124 "/usr/include/postgresql/11/server/catalog/namespace.h"
           TSDictionaryIsVisible(Oid dictId);

extern Oid get_ts_template_oid(List *names, 
# 126 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                           _Bool 
# 126 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                                missing_ok);
extern 
# 127 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 127 "/usr/include/postgresql/11/server/catalog/namespace.h"
           TSTemplateIsVisible(Oid tmplId);

extern Oid get_ts_config_oid(List *names, 
# 129 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                         _Bool 
# 129 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                              missing_ok);
extern 
# 130 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 130 "/usr/include/postgresql/11/server/catalog/namespace.h"
           TSConfigIsVisible(Oid cfgid);

extern void DeconstructQualifiedName(List *names,
       char **nspname_p,
       char **objname_p);
extern Oid LookupNamespaceNoError(const char *nspname);
extern Oid LookupExplicitNamespace(const char *nspname, 
# 136 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                                       _Bool 
# 136 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                                            missing_ok);
extern Oid get_namespace_oid(const char *nspname, 
# 137 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                                 _Bool 
# 137 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                                      missing_ok);

extern Oid LookupCreationNamespace(const char *nspname);
extern void CheckSetNamespace(Oid oldNspOid, Oid nspOid);
extern Oid QualifiedNameGetCreationNamespace(List *names, char **objname_p);
extern RangeVar *makeRangeVarFromNameList(List *names);
extern char *NameListToString(List *names);
extern char *NameListToQuotedString(List *names);

extern 
# 146 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 146 "/usr/include/postgresql/11/server/catalog/namespace.h"
           isTempNamespace(Oid namespaceId);
extern 
# 147 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 147 "/usr/include/postgresql/11/server/catalog/namespace.h"
           isTempToastNamespace(Oid namespaceId);
extern 
# 148 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 148 "/usr/include/postgresql/11/server/catalog/namespace.h"
           isTempOrTempToastNamespace(Oid namespaceId);
extern 
# 149 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 149 "/usr/include/postgresql/11/server/catalog/namespace.h"
           isAnyTempNamespace(Oid namespaceId);
extern 
# 150 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 150 "/usr/include/postgresql/11/server/catalog/namespace.h"
           isOtherTempNamespace(Oid namespaceId);
extern TempNamespaceStatus checkTempNamespaceStatus(Oid namespaceId);
extern 
# 152 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 152 "/usr/include/postgresql/11/server/catalog/namespace.h"
           isTempNamespaceInUse(Oid namespaceId);
extern int GetTempNamespaceBackendId(Oid namespaceId);
extern Oid GetTempToastNamespace(void);
extern void GetTempNamespaceState(Oid *tempNamespaceId,
       Oid *tempToastNamespaceId);
extern void SetTempNamespaceState(Oid tempNamespaceId,
       Oid tempToastNamespaceId);
extern void ResetTempTableNamespace(void);

extern OverrideSearchPath *GetOverrideSearchPath(MemoryContext context);
extern OverrideSearchPath *CopyOverrideSearchPath(OverrideSearchPath *path);
extern 
# 163 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
      _Bool 
# 163 "/usr/include/postgresql/11/server/catalog/namespace.h"
           OverrideSearchPathMatchesCurrent(OverrideSearchPath *path);
extern void PushOverrideSearchPath(OverrideSearchPath *newpath);
extern void PopOverrideSearchPath(void);

extern Oid get_collation_oid(List *collname, 
# 167 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                            _Bool 
# 167 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                                 missing_ok);
extern Oid get_conversion_oid(List *conname, 
# 168 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                            _Bool 
# 168 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                                 missing_ok);
extern Oid FindDefaultConversionProc(int32 for_encoding, int32 to_encoding);



extern void InitializeSearchPath(void);
extern void AtEOXact_Namespace(
# 174 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                              _Bool 
# 174 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                   isCommit, 
# 174 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                             _Bool 
# 174 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                                  parallel);
extern void AtEOSubXact_Namespace(
# 175 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                                 _Bool 
# 175 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                      isCommit, SubTransactionId mySubid,
       SubTransactionId parentSubid);


extern char *namespace_search_path;

extern List *fetch_search_path(
# 181 "/usr/include/postgresql/11/server/catalog/namespace.h" 3 4
                              _Bool 
# 181 "/usr/include/postgresql/11/server/catalog/namespace.h"
                                   includeImplicit);
extern int fetch_search_path_array(Oid *sarray, int sarray_len);
# 23 "src/backend/utils/adt/age_global_graph.c" 2
# 1 "/usr/include/postgresql/11/server/utils/lsyscache.h" 1
# 17 "/usr/include/postgresql/11/server/utils/lsyscache.h"
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
# 18 "/usr/include/postgresql/11/server/utils/lsyscache.h" 2



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
# 64 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 64 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           op_in_opfamily(Oid opno, Oid opfamily);
extern int get_op_opfamily_strategy(Oid opno, Oid opfamily);
extern Oid get_op_opfamily_sortfamily(Oid opno, Oid opfamily);
extern void get_op_opfamily_properties(Oid opno, Oid opfamily, 
# 67 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
                                                              _Bool 
# 67 "/usr/include/postgresql/11/server/utils/lsyscache.h"
                                                                   ordering_op,
         int *strategy,
         Oid *lefttype,
         Oid *righttype);
extern Oid get_opfamily_member(Oid opfamily, Oid lefttype, Oid righttype,
     int16 strategy);
extern 
# 73 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 73 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_ordering_op_properties(Oid opno,
         Oid *opfamily, Oid *opcintype, int16 *strategy);
extern Oid get_equality_op_for_ordering_op(Oid opno, 
# 75 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
                                                    _Bool 
# 75 "/usr/include/postgresql/11/server/utils/lsyscache.h"
                                                         *reverse);
extern Oid get_ordering_op_for_equality_op(Oid opno, 
# 76 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
                                                    _Bool 
# 76 "/usr/include/postgresql/11/server/utils/lsyscache.h"
                                                         use_lhs_type);
extern List *get_mergejoin_opfamilies(Oid opno);
extern 
# 78 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 78 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_compatible_hash_operators(Oid opno,
         Oid *lhs_opno, Oid *rhs_opno);
extern 
# 80 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 80 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_op_hash_functions(Oid opno,
       RegProcedure *lhs_procno, RegProcedure *rhs_procno);
extern List *get_op_btree_interpretation(Oid opno);
extern 
# 83 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 83 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           equality_ops_are_compatible(Oid opno1, Oid opno2);
extern Oid get_opfamily_proc(Oid opfamily, Oid lefttype, Oid righttype,
      int16 procnum);
extern char *get_attname(Oid relid, AttrNumber attnum, 
# 86 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
                                                      _Bool 
# 86 "/usr/include/postgresql/11/server/utils/lsyscache.h"
                                                           missing_ok);
extern AttrNumber get_attnum(Oid relid, const char *attname);
extern char get_attidentity(Oid relid, AttrNumber attnum);
extern Oid get_atttype(Oid relid, AttrNumber attnum);
extern int32 get_atttypmod(Oid relid, AttrNumber attnum);
extern void get_atttypetypmodcoll(Oid relid, AttrNumber attnum,
       Oid *typid, int32 *typmod, Oid *collid);
extern char *get_collation_name(Oid colloid);
extern char *get_constraint_name(Oid conoid);
extern char *get_language_name(Oid langoid, 
# 95 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
                                           _Bool 
# 95 "/usr/include/postgresql/11/server/utils/lsyscache.h"
                                                missing_ok);
extern Oid get_opclass_family(Oid opclass);
extern Oid get_opclass_input_type(Oid opclass);
extern RegProcedure get_opcode(Oid opno);
extern char *get_opname(Oid opno);
extern Oid get_op_rettype(Oid opno);
extern void op_input_types(Oid opno, Oid *lefttype, Oid *righttype);
extern 
# 102 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 102 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           op_mergejoinable(Oid opno, Oid inputtype);
extern 
# 103 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 103 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           op_hashjoinable(Oid opno, Oid inputtype);
extern 
# 104 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 104 "/usr/include/postgresql/11/server/utils/lsyscache.h"
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
# 116 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 116 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_func_retset(Oid funcid);
extern 
# 117 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 117 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           func_strict(Oid funcid);
extern char func_volatile(Oid funcid);
extern char func_parallel(Oid funcid);
extern char get_func_prokind(Oid funcid);
extern 
# 121 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 121 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_func_leakproof(Oid funcid);
extern float4 get_func_cost(Oid funcid);
extern float4 get_func_rows(Oid funcid);
extern Oid get_relname_relid(const char *relname, Oid relnamespace);
extern char *get_rel_name(Oid relid);
extern Oid get_rel_namespace(Oid relid);
extern Oid get_rel_type_id(Oid relid);
extern char get_rel_relkind(Oid relid);
extern 
# 129 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 129 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_rel_relispartition(Oid relid);
extern Oid get_rel_tablespace(Oid relid);
extern char get_rel_persistence(Oid relid);
extern Oid get_transform_fromsql(Oid typid, Oid langid, List *trftypes);
extern Oid get_transform_tosql(Oid typid, Oid langid, List *trftypes);
extern 
# 134 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 134 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_typisdefined(Oid typid);
extern int16 get_typlen(Oid typid);
extern 
# 136 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 136 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_typbyval(Oid typid);
extern void get_typlenbyval(Oid typid, int16 *typlen, 
# 137 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
                                                     _Bool 
# 137 "/usr/include/postgresql/11/server/utils/lsyscache.h"
                                                          *typbyval);
extern void get_typlenbyvalalign(Oid typid, int16 *typlen, 
# 138 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
                                                          _Bool 
# 138 "/usr/include/postgresql/11/server/utils/lsyscache.h"
                                                               *typbyval,
      char *typalign);
extern Oid getTypeIOParam(HeapTuple typeTuple);
extern void get_type_io_data(Oid typid,
     IOFuncSelector which_func,
     int16 *typlen,
     
# 144 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
    _Bool 
# 144 "/usr/include/postgresql/11/server/utils/lsyscache.h"
         *typbyval,
     char *typalign,
     char *typdelim,
     Oid *typioparam,
     Oid *func);
extern char get_typstorage(Oid typid);
extern Node *get_typdefault(Oid typid);
extern char get_typtype(Oid typid);
extern 
# 152 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 152 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           type_is_rowtype(Oid typid);
extern 
# 153 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 153 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           type_is_enum(Oid typid);
extern 
# 154 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 154 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           type_is_range(Oid typid);
extern void get_type_category_preferred(Oid typid,
       char *typcategory,
       
# 157 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 157 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           *typispreferred);
extern Oid get_typ_typrelid(Oid typid);
extern Oid get_element_type(Oid typid);
extern Oid get_array_type(Oid typid);
extern Oid get_promoted_array_type(Oid typid);
extern Oid get_base_element_type(Oid typid);
extern void getTypeInputInfo(Oid type, Oid *typInput, Oid *typIOParam);
extern void getTypeOutputInfo(Oid type, Oid *typOutput, 
# 164 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
                                                       _Bool 
# 164 "/usr/include/postgresql/11/server/utils/lsyscache.h"
                                                            *typIsVarlena);
extern void getTypeBinaryInputInfo(Oid type, Oid *typReceive, Oid *typIOParam);
extern void getTypeBinaryOutputInfo(Oid type, Oid *typSend, 
# 166 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
                                                           _Bool 
# 166 "/usr/include/postgresql/11/server/utils/lsyscache.h"
                                                                *typIsVarlena);
extern Oid get_typmodin(Oid typid);
extern Oid get_typcollation(Oid typid);
extern 
# 169 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 169 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           type_is_collatable(Oid typid);
extern Oid getBaseType(Oid typid);
extern Oid getBaseTypeAndTypmod(Oid typid, int32 *typmod);
extern int32 get_typavgwidth(Oid typid, int32 typmod);
extern int32 get_attavgwidth(Oid relid, AttrNumber attnum);
extern 
# 174 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 174 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_attstatsslot(AttStatsSlot *sslot, HeapTuple statstuple,
     int reqkind, Oid reqop, int flags);
extern void free_attstatsslot(AttStatsSlot *sslot);
extern char *get_namespace_name(Oid nspid);
extern char *get_namespace_name_or_temp(Oid nspid);
extern Oid get_range_subtype(Oid rangeOid);
extern Oid get_range_collation(Oid rangeOid);
extern 
# 181 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 181 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_index_isreplident(Oid index_oid);
extern 
# 182 "/usr/include/postgresql/11/server/utils/lsyscache.h" 3 4
      _Bool 
# 182 "/usr/include/postgresql/11/server/utils/lsyscache.h"
           get_index_isclustered(Oid index_oid);
# 24 "src/backend/utils/adt/age_global_graph.c" 2
# 1 "/usr/include/postgresql/11/server/utils/memutils.h" 1
# 20 "/usr/include/postgresql/11/server/utils/memutils.h"
# 1 "/usr/include/postgresql/11/server/nodes/memnodes.h" 1
# 29 "/usr/include/postgresql/11/server/nodes/memnodes.h"
typedef struct MemoryContextCounters
{
 Size nblocks;
 Size freechunks;
 Size totalspace;
 Size freespace;
} MemoryContextCounters;
# 54 "/usr/include/postgresql/11/server/nodes/memnodes.h"
typedef void (*MemoryStatsPrintFunc) (MemoryContext context, void *passthru,
           const char *stats_string);

typedef struct MemoryContextMethods
{
 void *(*alloc) (MemoryContext context, Size size);

 void (*free_p) (MemoryContext context, void *pointer);
 void *(*realloc) (MemoryContext context, void *pointer, Size size);
 void (*reset) (MemoryContext context);
 void (*delete_context) (MemoryContext context);
 Size (*get_chunk_space) (MemoryContext context, void *pointer);
 
# 66 "/usr/include/postgresql/11/server/nodes/memnodes.h" 3 4
_Bool 
# 66 "/usr/include/postgresql/11/server/nodes/memnodes.h"
      (*is_empty) (MemoryContext context);
 void (*stats) (MemoryContext context,
        MemoryStatsPrintFunc printfunc, void *passthru,
        MemoryContextCounters *totals);



} MemoryContextMethods;


typedef struct MemoryContextData
{
 NodeTag type;

 
# 80 "/usr/include/postgresql/11/server/nodes/memnodes.h" 3 4
_Bool 
# 80 "/usr/include/postgresql/11/server/nodes/memnodes.h"
      isReset;
 
# 81 "/usr/include/postgresql/11/server/nodes/memnodes.h" 3 4
_Bool 
# 81 "/usr/include/postgresql/11/server/nodes/memnodes.h"
      allowInCritSection;
 const MemoryContextMethods *methods;
 MemoryContext parent;
 MemoryContext firstchild;
 MemoryContext prevchild;
 MemoryContext nextchild;
 const char *name;
 const char *ident;
 MemoryContextCallback *reset_cbs;
} MemoryContextData;
# 21 "/usr/include/postgresql/11/server/utils/memutils.h" 2
# 55 "/usr/include/postgresql/11/server/utils/memutils.h"
extern MemoryContext TopMemoryContext;
extern MemoryContext ErrorContext;
extern MemoryContext PostmasterContext;
extern MemoryContext CacheMemoryContext;
extern MemoryContext MessageContext;
extern MemoryContext TopTransactionContext;
extern MemoryContext CurTransactionContext;


extern MemoryContext PortalContext;
# 73 "/usr/include/postgresql/11/server/utils/memutils.h"
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
# 84 "/usr/include/postgresql/11/server/utils/memutils.h" 3 4
      _Bool 
# 84 "/usr/include/postgresql/11/server/utils/memutils.h"
           MemoryContextIsEmpty(MemoryContext context);
extern void MemoryContextStats(MemoryContext context);
extern void MemoryContextStatsDetail(MemoryContext context, int max_children);
extern void MemoryContextAllowInCriticalSection(MemoryContext context,
         
# 88 "/usr/include/postgresql/11/server/utils/memutils.h" 3 4
        _Bool 
# 88 "/usr/include/postgresql/11/server/utils/memutils.h"
             allow);




extern 
# 93 "/usr/include/postgresql/11/server/utils/memutils.h" 3 4
      _Bool 
# 93 "/usr/include/postgresql/11/server/utils/memutils.h"
           MemoryContextContains(MemoryContext context, void *pointer);
# 111 "/usr/include/postgresql/11/server/utils/memutils.h"
static inline MemoryContext
GetMemoryChunkContext(void *pointer)
{
 MemoryContext context;






 ((void)
# 121 "/usr/include/postgresql/11/server/utils/memutils.h" 3 4
1
# 121 "/usr/include/postgresql/11/server/utils/memutils.h"
);
 ((void)
# 122 "/usr/include/postgresql/11/server/utils/memutils.h" 3 4
1
# 122 "/usr/include/postgresql/11/server/utils/memutils.h"
);




 context = *(MemoryContext *) (((char *) pointer) - sizeof(void *));

 ((void)
# 129 "/usr/include/postgresql/11/server/utils/memutils.h" 3 4
1
# 129 "/usr/include/postgresql/11/server/utils/memutils.h"
);

 return context;
}







extern void MemoryContextCreate(MemoryContext node,
     NodeTag tag,
     const MemoryContextMethods *methods,
     MemoryContext parent,
     const char *name);







extern MemoryContext AllocSetContextCreateExtended(MemoryContext parent,
         const char *name,
         Size minContextSize,
         Size initBlockSize,
         Size maxBlockSize);
# 174 "/usr/include/postgresql/11/server/utils/memutils.h"
extern MemoryContext SlabContextCreate(MemoryContext parent,
      const char *name,
      Size blockSize,
      Size chunkSize);


extern MemoryContext GenerationContextCreate(MemoryContext parent,
      const char *name,
      Size blockSize);
# 25 "src/backend/utils/adt/age_global_graph.c" 2
# 1 "/usr/include/postgresql/11/server/utils/rel.h" 1
# 17 "/usr/include/postgresql/11/server/utils/rel.h"
# 1 "/usr/include/postgresql/11/server/access/tupdesc.h" 1
# 18 "/usr/include/postgresql/11/server/access/tupdesc.h"
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
# 18 "/usr/include/postgresql/11/server/utils/rel.h" 2
# 1 "/usr/include/postgresql/11/server/access/xlog.h" 1
# 14 "/usr/include/postgresql/11/server/access/xlog.h"
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
# 15 "/usr/include/postgresql/11/server/access/xlog.h" 2
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
# 16 "/usr/include/postgresql/11/server/access/xlog.h" 2
# 1 "/usr/include/postgresql/11/server/access/xloginsert.h" 1
# 17 "/usr/include/postgresql/11/server/access/xloginsert.h"
# 1 "/usr/include/postgresql/11/server/storage/buf.h" 1
# 23 "/usr/include/postgresql/11/server/storage/buf.h"
typedef int Buffer;
# 44 "/usr/include/postgresql/11/server/storage/buf.h"
typedef struct BufferAccessStrategyData *BufferAccessStrategy;
# 18 "/usr/include/postgresql/11/server/access/xloginsert.h" 2
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
# 19 "/usr/include/postgresql/11/server/access/xloginsert.h" 2
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
# 20 "/usr/include/postgresql/11/server/access/xloginsert.h" 2
# 42 "/usr/include/postgresql/11/server/access/xloginsert.h"
extern void XLogBeginInsert(void);
extern void XLogSetRecordFlags(uint8 flags);
extern XLogRecPtr XLogInsert(RmgrId rmid, uint8 info);
extern void XLogEnsureRecordSpace(int nbuffers, int ndatas);
extern void XLogRegisterData(char *data, int len);
extern void XLogRegisterBuffer(uint8 block_id, Buffer buffer, uint8 flags);
extern void XLogRegisterBlock(uint8 block_id, RelFileNode *rnode,
      ForkNumber forknum, BlockNumber blknum, char *page,
      uint8 flags);
extern void XLogRegisterBufData(uint8 block_id, char *data, int len);
extern void XLogResetInsertion(void);
extern 
# 53 "/usr/include/postgresql/11/server/access/xloginsert.h" 3 4
      _Bool 
# 53 "/usr/include/postgresql/11/server/access/xloginsert.h"
           XLogCheckBufferNeedsBackup(Buffer buffer);

extern XLogRecPtr log_newpage(RelFileNode *rnode, ForkNumber forkNum,
   BlockNumber blk, char *page, 
# 56 "/usr/include/postgresql/11/server/access/xloginsert.h" 3 4
                               _Bool 
# 56 "/usr/include/postgresql/11/server/access/xloginsert.h"
                                    page_std);
extern XLogRecPtr log_newpage_buffer(Buffer buffer, 
# 57 "/usr/include/postgresql/11/server/access/xloginsert.h" 3 4
                                                   _Bool 
# 57 "/usr/include/postgresql/11/server/access/xloginsert.h"
                                                        page_std);
extern void log_newpage_range(Relation rel, ForkNumber forkNum,
      BlockNumber startblk, BlockNumber endblk, 
# 59 "/usr/include/postgresql/11/server/access/xloginsert.h" 3 4
                                               _Bool 
# 59 "/usr/include/postgresql/11/server/access/xloginsert.h"
                                                    page_std);
extern XLogRecPtr XLogSaveBufferForHint(Buffer buffer, 
# 60 "/usr/include/postgresql/11/server/access/xloginsert.h" 3 4
                                                      _Bool 
# 60 "/usr/include/postgresql/11/server/access/xloginsert.h"
                                                           buffer_std);

extern void InitXLogInsert(void);
# 17 "/usr/include/postgresql/11/server/access/xlog.h" 2
# 1 "/usr/include/postgresql/11/server/access/xlogreader.h" 1
# 28 "/usr/include/postgresql/11/server/access/xlogreader.h"
# 1 "/usr/include/postgresql/11/server/access/xlogrecord.h" 1
# 16 "/usr/include/postgresql/11/server/access/xlogrecord.h"
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
# 18 "/usr/include/postgresql/11/server/access/xlog.h" 2
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
# 19 "/usr/include/postgresql/11/server/access/xlog.h" 2
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
# 20 "/usr/include/postgresql/11/server/access/xlog.h" 2

# 1 "/usr/include/postgresql/11/server/storage/fd.h" 1
# 42 "/usr/include/postgresql/11/server/storage/fd.h"
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
# 43 "/usr/include/postgresql/11/server/storage/fd.h" 2







# 49 "/usr/include/postgresql/11/server/storage/fd.h"
typedef int File;



extern int max_files_per_process;
extern 
# 54 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
                  _Bool 
# 54 "/usr/include/postgresql/11/server/storage/fd.h"
                       data_sync_retry;




extern int max_safe_fds;







extern File PathNameOpenFile(const char *fileName, int fileFlags);
extern File PathNameOpenFilePerm(const char *fileName, int fileFlags, mode_t fileMode);
extern File OpenTemporaryFile(
# 69 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
                             _Bool 
# 69 "/usr/include/postgresql/11/server/storage/fd.h"
                                  interXact);
extern void FileClose(File file);
extern int FilePrefetch(File file, off_t offset, int amount, uint32 wait_event_info);
extern int FileRead(File file, char *buffer, int amount, uint32 wait_event_info);
extern int FileWrite(File file, char *buffer, int amount, uint32 wait_event_info);
extern int FileSync(File file, uint32 wait_event_info);
extern off_t FileSeek(File file, off_t offset, int whence);
extern int FileTruncate(File file, off_t offset, uint32 wait_event_info);
extern void FileWriteback(File file, off_t offset, off_t nbytes, uint32 wait_event_info);
extern char *FilePathName(File file);
extern int FileGetRawDesc(File file);
extern int FileGetRawFlags(File file);
extern mode_t FileGetRawMode(File file);


extern File PathNameCreateTemporaryFile(const char *name, 
# 84 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
                                                         _Bool 
# 84 "/usr/include/postgresql/11/server/storage/fd.h"
                                                              error_on_failure);
extern File PathNameOpenTemporaryFile(const char *name);
extern 
# 86 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
      _Bool 
# 86 "/usr/include/postgresql/11/server/storage/fd.h"
           PathNameDeleteTemporaryFile(const char *name, 
# 86 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
                                                         _Bool 
# 86 "/usr/include/postgresql/11/server/storage/fd.h"
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


extern int MakePGDirectory(const char *directoryName);


extern void InitFileAccess(void);
extern void set_max_safe_fds(void);
extern void closeAllVfds(void);
extern void SetTempTablespaces(Oid *tableSpaces, int numSpaces);
extern 
# 123 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
      _Bool 
# 123 "/usr/include/postgresql/11/server/storage/fd.h"
           TempTablespacesAreSet(void);
extern int GetTempTablespaces(Oid *tableSpaces, int numSpaces);
extern Oid GetNextTempTableSpace(void);
extern void AtEOXact_Files(
# 126 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
                          _Bool 
# 126 "/usr/include/postgresql/11/server/storage/fd.h"
                               isCommit);
extern void AtEOSubXact_Files(
# 127 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
                             _Bool 
# 127 "/usr/include/postgresql/11/server/storage/fd.h"
                                  isCommit, SubTransactionId mySubid,
      SubTransactionId parentSubid);
extern void RemovePgTempFiles(void);
extern 
# 130 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
      _Bool 
# 130 "/usr/include/postgresql/11/server/storage/fd.h"
           looks_like_temp_rel_name(const char *name);

extern int pg_fsync(int fd);
extern int pg_fsync_no_writethrough(int fd);
extern int pg_fsync_writethrough(int fd);
extern int pg_fdatasync(int fd);
extern void pg_flush_data(int fd, off_t offset, off_t amount);
extern void fsync_fname(const char *fname, 
# 137 "/usr/include/postgresql/11/server/storage/fd.h" 3 4
                                          _Bool 
# 137 "/usr/include/postgresql/11/server/storage/fd.h"
                                               isdir);
extern int durable_rename(const char *oldfile, const char *newfile, int loglevel);
extern int durable_unlink(const char *fname, int loglevel);
extern int durable_link_or_rename(const char *oldfile, const char *newfile, int loglevel);
extern void SyncDataDirectory(void);
extern int data_sync_elevel(int elevel);
# 22 "/usr/include/postgresql/11/server/access/xlog.h" 2
# 30 "/usr/include/postgresql/11/server/access/xlog.h"
extern int sync_method;

extern TimeLineID ThisTimeLineID;
# 41 "/usr/include/postgresql/11/server/access/xlog.h"
extern 
# 41 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 41 "/usr/include/postgresql/11/server/access/xlog.h"
           InRecovery;
# 64 "/usr/include/postgresql/11/server/access/xlog.h"
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

extern XLogRecPtr ProcLastRecPtr;
extern XLogRecPtr XactLastRecEnd;
extern XLogRecPtr XactLastCommitEnd;

extern 
# 94 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 94 "/usr/include/postgresql/11/server/access/xlog.h"
           reachedConsistency;


extern int wal_segment_size;
extern int min_wal_size_mb;
extern int max_wal_size_mb;
extern int wal_keep_segments;
extern int XLOGbuffers;
extern int XLogArchiveTimeout;
extern int wal_retrieve_retry_interval;
extern char *XLogArchiveCommand;
extern 
# 105 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 105 "/usr/include/postgresql/11/server/access/xlog.h"
           EnableHotStandby;
extern 
# 106 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 106 "/usr/include/postgresql/11/server/access/xlog.h"
           fullPageWrites;
extern 
# 107 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 107 "/usr/include/postgresql/11/server/access/xlog.h"
           wal_log_hints;
extern 
# 108 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 108 "/usr/include/postgresql/11/server/access/xlog.h"
           wal_compression;
extern 
# 109 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 109 "/usr/include/postgresql/11/server/access/xlog.h"
           *wal_consistency_checking;
extern char *wal_consistency_checking_string;
extern 
# 111 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 111 "/usr/include/postgresql/11/server/access/xlog.h"
           log_checkpoints;

extern int CheckPointSegments;


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

extern int wal_level;
# 207 "/usr/include/postgresql/11/server/access/xlog.h"
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

struct XLogRecData;

extern XLogRecPtr XLogInsertRecord(struct XLogRecData *rdata,
     XLogRecPtr fpw_lsn,
     uint8 flags);
extern void XLogFlush(XLogRecPtr RecPtr);
extern 
# 237 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 237 "/usr/include/postgresql/11/server/access/xlog.h"
           XLogBackgroundFlush(void);
extern 
# 238 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 238 "/usr/include/postgresql/11/server/access/xlog.h"
           XLogNeedsFlush(XLogRecPtr RecPtr);
extern int XLogFileInit(XLogSegNo segno, 
# 239 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                                        _Bool 
# 239 "/usr/include/postgresql/11/server/access/xlog.h"
                                             *use_existent, 
# 239 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                                                            _Bool 
# 239 "/usr/include/postgresql/11/server/access/xlog.h"
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
# 253 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 253 "/usr/include/postgresql/11/server/access/xlog.h"
           RecoveryInProgress(void);
extern RecoveryState GetRecoveryState(void);
extern 
# 255 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 255 "/usr/include/postgresql/11/server/access/xlog.h"
           HotStandbyActive(void);
extern 
# 256 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 256 "/usr/include/postgresql/11/server/access/xlog.h"
           HotStandbyActiveInReplay(void);
extern 
# 257 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 257 "/usr/include/postgresql/11/server/access/xlog.h"
           XLogInsertAllowed(void);
extern void GetXLogReceiptTime(TimestampTz *rtime, 
# 258 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                                                  _Bool 
# 258 "/usr/include/postgresql/11/server/access/xlog.h"
                                                       *fromStream);
extern XLogRecPtr GetXLogReplayRecPtr(TimeLineID *replayTLI);
extern XLogRecPtr GetXLogInsertRecPtr(void);
extern XLogRecPtr GetXLogWriteRecPtr(void);
extern 
# 262 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 262 "/usr/include/postgresql/11/server/access/xlog.h"
           RecoveryIsPaused(void);
extern void SetRecoveryPause(
# 263 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                            _Bool 
# 263 "/usr/include/postgresql/11/server/access/xlog.h"
                                 recoveryPause);
extern TimestampTz GetLatestXTime(void);
extern TimestampTz GetCurrentChunkReplayStartTime(void);
extern char *XLogFileNameP(TimeLineID tli, XLogSegNo segno);

extern void UpdateControlFile(void);
extern uint64 GetSystemIdentifier(void);
extern char *GetMockAuthenticationNonce(void);
extern 
# 271 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 271 "/usr/include/postgresql/11/server/access/xlog.h"
           DataChecksumsEnabled(void);
extern XLogRecPtr GetFakeLSNForUnloggedRel(void);
extern Size XLOGShmemSize(void);
extern void XLOGShmemInit(void);
extern void BootStrapXLOG(void);
extern void LocalProcessControlFile(
# 276 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                                   _Bool 
# 276 "/usr/include/postgresql/11/server/access/xlog.h"
                                        reset);
extern void StartupXLOG(void);
extern void ShutdownXLOG(int code, Datum arg);
extern void InitXLOGAccess(void);
extern void CreateCheckPoint(int flags);
extern 
# 281 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 281 "/usr/include/postgresql/11/server/access/xlog.h"
           CreateRestartPoint(int flags);
extern void XLogPutNextOid(Oid nextOid);
extern XLogRecPtr XLogRestorePoint(const char *rpName);
extern void UpdateFullPageWrites(void);
extern void GetFullPageWriteInfo(XLogRecPtr *RedoRecPtr_p, 
# 285 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                                                          _Bool 
# 285 "/usr/include/postgresql/11/server/access/xlog.h"
                                                               *doPageWrites_p);
extern XLogRecPtr GetRedoRecPtr(void);
extern XLogRecPtr GetInsertRecPtr(void);
extern XLogRecPtr GetFlushRecPtr(void);
extern XLogRecPtr GetLastImportantRecPtr(void);
extern void GetNextXidAndEpoch(TransactionId *xid, uint32 *epoch);
extern void RemovePromoteSignalFiles(void);

extern 
# 293 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 293 "/usr/include/postgresql/11/server/access/xlog.h"
           CheckPromoteSignal(void);
extern void WakeupRecovery(void);
extern void SetWalWriterSleeping(
# 295 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                                _Bool 
# 295 "/usr/include/postgresql/11/server/access/xlog.h"
                                     sleeping);

extern void XLogRequestWalReceiverReply(void);

extern void assign_max_wal_size(int newval, void *extra);
extern void assign_checkpoint_completion_target(double newval, void *extra);
# 316 "/usr/include/postgresql/11/server/access/xlog.h"
typedef enum SessionBackupState
{
 SESSION_BACKUP_NONE,
 SESSION_BACKUP_EXCLUSIVE,
 SESSION_BACKUP_NON_EXCLUSIVE
} SessionBackupState;

extern XLogRecPtr do_pg_start_backup(const char *backupidstr, 
# 323 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                                                             _Bool 
# 323 "/usr/include/postgresql/11/server/access/xlog.h"
                                                                  fast,
       TimeLineID *starttli_p, StringInfo labelfile,
       List **tablespaces, StringInfo tblspcmapfile, 
# 325 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                                                    _Bool 
# 325 "/usr/include/postgresql/11/server/access/xlog.h"
                                                         infotbssize,
       
# 326 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
      _Bool 
# 326 "/usr/include/postgresql/11/server/access/xlog.h"
           needtblspcmapfile);
extern XLogRecPtr do_pg_stop_backup(char *labelfile, 
# 327 "/usr/include/postgresql/11/server/access/xlog.h" 3 4
                                                    _Bool 
# 327 "/usr/include/postgresql/11/server/access/xlog.h"
                                                         waitforarchive,
      TimeLineID *stoptli_p);
extern void do_pg_abort_backup(int code, Datum arg);
extern void register_persistent_abort_backup_handler(void);
extern SessionBackupState get_backup_status(void);
# 19 "/usr/include/postgresql/11/server/utils/rel.h" 2
# 1 "/usr/include/postgresql/11/server/catalog/pg_class.h" 1
# 22 "/usr/include/postgresql/11/server/catalog/pg_class.h"
# 1 "/usr/include/postgresql/11/server/catalog/pg_class_d.h" 1
# 23 "/usr/include/postgresql/11/server/catalog/pg_class.h" 2






typedef struct FormData_pg_class
{
 NameData relname;
 Oid relnamespace;
 Oid reltype;

 Oid reloftype;

 Oid relowner;
 Oid relam;
 Oid relfilenode;


 Oid reltablespace;
 int32 relpages;
 float4 reltuples;
 int32 relallvisible;

 Oid reltoastrelid;
 
# 48 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 48 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relhasindex;
 
# 49 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 49 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relisshared;
 char relpersistence;
 char relkind;
 int16 relnatts;






 int16 relchecks;
 
# 60 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 60 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relhasoids;
 
# 61 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 61 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relhasrules;
 
# 62 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 62 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relhastriggers;
 
# 63 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 63 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relhassubclass;
 
# 64 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 64 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relrowsecurity;
 
# 65 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 65 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relforcerowsecurity;

 
# 67 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 67 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relispopulated;
 char relreplident;
 
# 69 "/usr/include/postgresql/11/server/catalog/pg_class.h" 3 4
_Bool 
# 69 "/usr/include/postgresql/11/server/catalog/pg_class.h"
      relispartition;
 Oid relrewrite;

 TransactionId relfrozenxid;
 TransactionId relminmxid;
# 82 "/usr/include/postgresql/11/server/catalog/pg_class.h"
} FormData_pg_class;
# 93 "/usr/include/postgresql/11/server/catalog/pg_class.h"
typedef FormData_pg_class *Form_pg_class;
# 20 "/usr/include/postgresql/11/server/utils/rel.h" 2
# 1 "/usr/include/postgresql/11/server/catalog/pg_index.h" 1
# 22 "/usr/include/postgresql/11/server/catalog/pg_index.h"
# 1 "/usr/include/postgresql/11/server/catalog/pg_index_d.h" 1
# 23 "/usr/include/postgresql/11/server/catalog/pg_index.h" 2






typedef struct FormData_pg_index
{
 Oid indexrelid;
 Oid indrelid;
 int16 indnatts;
 int16 indnkeyatts;
 
# 35 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 35 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indisunique;
 
# 36 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 36 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indisprimary;
 
# 37 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 37 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indisexclusion;
 
# 38 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 38 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indimmediate;
 
# 39 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 39 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indisclustered;
 
# 40 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 40 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indisvalid;
 
# 41 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 41 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indcheckxmin;
 
# 42 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 42 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indisready;
 
# 43 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 43 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indislive;
 
# 44 "/usr/include/postgresql/11/server/catalog/pg_index.h" 3 4
_Bool 
# 44 "/usr/include/postgresql/11/server/catalog/pg_index.h"
      indisreplident;


 int2vector indkey;
# 59 "/usr/include/postgresql/11/server/catalog/pg_index.h"
} FormData_pg_index;






typedef FormData_pg_index *Form_pg_index;
# 21 "/usr/include/postgresql/11/server/utils/rel.h" 2
# 1 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 1
# 21 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
# 1 "/usr/include/postgresql/11/server/catalog/pg_publication_d.h" 1
# 22 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 2

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
# 19 "/usr/include/postgresql/11/server/utils/snapshot.h"
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
# 24 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 2






typedef struct FormData_pg_publication
{
 NameData pubname;

 Oid pubowner;





 
# 40 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 40 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      puballtables;


 
# 43 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 43 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      pubinsert;


 
# 46 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 46 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      pubupdate;


 
# 49 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 49 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      pubdelete;


 
# 52 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 52 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      pubtruncate;

} FormData_pg_publication;






typedef FormData_pg_publication *Form_pg_publication;

typedef struct PublicationActions
{
 
# 65 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 65 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      pubinsert;
 
# 66 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 66 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      pubupdate;
 
# 67 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 67 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      pubdelete;
 
# 68 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 68 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      pubtruncate;
} PublicationActions;

typedef struct Publication
{
 Oid oid;
 char *name;
 
# 75 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
_Bool 
# 75 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
      alltables;
 PublicationActions pubactions;
} Publication;

extern Publication *GetPublication(Oid pubid);
extern Publication *GetPublicationByName(const char *pubname, 
# 80 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
                                                             _Bool 
# 80 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
                                                                  missing_ok);
extern List *GetRelationPublications(Oid relid);
extern List *GetPublicationRelations(Oid pubid);
extern List *GetAllTablesPublications(void);
extern List *GetAllTablesPublicationRelations(void);

extern 
# 86 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
      _Bool 
# 86 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
           is_publishable_relation(Relation rel);
extern ObjectAddress publication_add_relation(Oid pubid, Relation targetrel,
       
# 88 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
      _Bool 
# 88 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
           if_not_exists);

extern Oid get_publication_oid(const char *pubname, 
# 90 "/usr/include/postgresql/11/server/catalog/pg_publication.h" 3 4
                                                   _Bool 
# 90 "/usr/include/postgresql/11/server/catalog/pg_publication.h"
                                                        missing_ok);
extern char *get_publication_name(Oid pubid);

extern Datum pg_get_publication_tables(FunctionCallInfo fcinfo);
# 22 "/usr/include/postgresql/11/server/utils/rel.h" 2


# 1 "/usr/include/postgresql/11/server/rewrite/prs2lock.h" 1
# 24 "/usr/include/postgresql/11/server/rewrite/prs2lock.h"
typedef struct RewriteRule
{
 Oid ruleId;
 CmdType event;
 Node *qual;
 List *actions;
 char enabled;
 
# 31 "/usr/include/postgresql/11/server/rewrite/prs2lock.h" 3 4
_Bool 
# 31 "/usr/include/postgresql/11/server/rewrite/prs2lock.h"
      isInstead;
} RewriteRule;







typedef struct RuleLock
{
 int numLocks;
 RewriteRule **rules;
} RuleLock;
# 25 "/usr/include/postgresql/11/server/utils/rel.h" 2



# 1 "/usr/include/postgresql/11/server/utils/reltrigger.h" 1
# 23 "/usr/include/postgresql/11/server/utils/reltrigger.h"
typedef struct Trigger
{
 Oid tgoid;

 char *tgname;
 Oid tgfoid;
 int16 tgtype;
 char tgenabled;
 
# 31 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 31 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      tgisinternal;
 Oid tgconstrrelid;
 Oid tgconstrindid;
 Oid tgconstraint;
 
# 35 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 35 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      tgdeferrable;
 
# 36 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 36 "/usr/include/postgresql/11/server/utils/reltrigger.h"
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





 
# 55 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 55 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_insert_before_row;
 
# 56 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 56 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_insert_after_row;
 
# 57 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 57 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_insert_instead_row;
 
# 58 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 58 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_insert_before_statement;
 
# 59 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 59 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_insert_after_statement;
 
# 60 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 60 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_update_before_row;
 
# 61 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 61 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_update_after_row;
 
# 62 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 62 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_update_instead_row;
 
# 63 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 63 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_update_before_statement;
 
# 64 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 64 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_update_after_statement;
 
# 65 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 65 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_delete_before_row;
 
# 66 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 66 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_delete_after_row;
 
# 67 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 67 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_delete_instead_row;
 
# 68 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 68 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_delete_before_statement;
 
# 69 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 69 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_delete_after_statement;

 
# 71 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 71 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_truncate_before_statement;
 
# 72 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 72 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_truncate_after_statement;

 
# 74 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 74 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_insert_new_table;
 
# 75 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 75 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_update_old_table;
 
# 76 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 76 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_update_new_table;
 
# 77 "/usr/include/postgresql/11/server/utils/reltrigger.h" 3 4
_Bool 
# 77 "/usr/include/postgresql/11/server/utils/reltrigger.h"
      trig_delete_old_table;
} TriggerDesc;
# 29 "/usr/include/postgresql/11/server/utils/rel.h" 2







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
 
# 60 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 60 "/usr/include/postgresql/11/server/utils/rel.h"
      rd_islocaltemp;
 
# 61 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 61 "/usr/include/postgresql/11/server/utils/rel.h"
      rd_isnailed;
 
# 62 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 62 "/usr/include/postgresql/11/server/utils/rel.h"
      rd_isvalid;
 char rd_indexvalid;

 
# 65 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 65 "/usr/include/postgresql/11/server/utils/rel.h"
      rd_statvalid;
# 85 "/usr/include/postgresql/11/server/utils/rel.h"
 SubTransactionId rd_createSubid;
 SubTransactionId rd_newRelfilenodeSubid;


 Form_pg_class rd_rel;
 TupleDesc rd_att;
 Oid rd_id;
 LockInfoData rd_lockInfo;
 RuleLock *rd_rules;
 MemoryContext rd_rulescxt;
 TriggerDesc *trigdesc;

 struct RowSecurityDesc *rd_rsdesc;


 List *rd_fkeylist;
 
# 101 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 101 "/usr/include/postgresql/11/server/utils/rel.h"
      rd_fkeyvalid;

 MemoryContext rd_partkeycxt;
 struct PartitionKeyData *rd_partkey;
 MemoryContext rd_pdcxt;
 struct PartitionDescData *rd_partdesc;
 List *rd_partcheck;


 List *rd_indexlist;
 Oid rd_oidindex;
 Oid rd_pkindex;
 Oid rd_replidindex;


 List *rd_statlist;


 Bitmapset *rd_indexattr;
 Bitmapset *rd_projindexattr;
 Bitmapset *rd_keyattr;
 Bitmapset *rd_pkattr;
 Bitmapset *rd_idattr;
 Bitmapset *rd_projidx;

 PublicationActions *rd_pubactions;






 bytea *rd_options;


 Form_pg_index rd_index;

 struct HeapTupleData *rd_indextuple;
# 155 "/usr/include/postgresql/11/server/utils/rel.h"
 Oid rd_amhandler;
 MemoryContext rd_indexcxt;

 struct IndexAmRoutine *rd_amroutine;
 Oid *rd_opfamily;
 Oid *rd_opcintype;
 RegProcedure *rd_support;
 FmgrInfo *rd_supportinfo;
 int16 *rd_indoption;
 List *rd_indexprs;
 List *rd_indpred;
 Oid *rd_exclops;
 Oid *rd_exclprocs;
 uint16 *rd_exclstrats;
 void *rd_amcache;
 Oid *rd_indcollation;
# 181 "/usr/include/postgresql/11/server/utils/rel.h"
 struct FdwRoutine *rd_fdwroutine;
# 192 "/usr/include/postgresql/11/server/utils/rel.h"
 Oid rd_toastoid;


 struct PgStat_TableStatus *pgstat_info;


 
# 198 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 198 "/usr/include/postgresql/11/server/utils/rel.h"
      rd_partcheckvalid;
 MemoryContext rd_partcheckcxt;
} RelationData;
# 217 "/usr/include/postgresql/11/server/utils/rel.h"
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




typedef struct GenericIndexOpts
{
 int32 vl_len_;
 
# 236 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 236 "/usr/include/postgresql/11/server/utils/rel.h"
      recheck_on_update;
} GenericIndexOpts;
# 248 "/usr/include/postgresql/11/server/utils/rel.h"
typedef struct AutoVacOpts
{
 
# 250 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 250 "/usr/include/postgresql/11/server/utils/rel.h"
      enabled;
 int vacuum_threshold;
 int analyze_threshold;
 int vacuum_cost_delay;
 int vacuum_cost_limit;
 int freeze_min_age;
 int freeze_max_age;
 int freeze_table_age;
 int multixact_freeze_min_age;
 int multixact_freeze_max_age;
 int multixact_freeze_table_age;
 int log_min_duration;
 float8 vacuum_scale_factor;
 float8 analyze_scale_factor;
} AutoVacOpts;

typedef struct StdRdOptions
{
 int32 vl_len_;
 int fillfactor;

 float8 vacuum_cleanup_index_scale_factor;
 int toast_tuple_target;
 AutoVacOpts autovacuum;
 
# 274 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 274 "/usr/include/postgresql/11/server/utils/rel.h"
      user_catalog_table;
 int parallel_workers;
} StdRdOptions;
# 336 "/usr/include/postgresql/11/server/utils/rel.h"
typedef struct ViewOptions
{
 int32 vl_len_;
 
# 339 "/usr/include/postgresql/11/server/utils/rel.h" 3 4
_Bool 
# 339 "/usr/include/postgresql/11/server/utils/rel.h"
      security_barrier;
 int check_option_offset;
} ViewOptions;
# 608 "/usr/include/postgresql/11/server/utils/rel.h"
extern void RelationIncrementReferenceCount(Relation rel);
extern void RelationDecrementReferenceCount(Relation rel);
extern List *RelationGetRepsetList(Relation rel);
# 26 "src/backend/utils/adt/age_global_graph.c" 2
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
# 27 "src/backend/utils/adt/age_global_graph.c" 2
# 1 ".//src/include/commands/label_commands.h" 1
# 58 ".//src/include/commands/label_commands.h"
Datum create_vlabel(FunctionCallInfo fcinfo);

Datum create_elabel(FunctionCallInfo fcinfo);

Oid create_label(char *graph_name, char *label_name, char label_type,
                 List *parents);
# 28 "src/backend/utils/adt/age_global_graph.c" 2

# 1 ".//src/include/utils/age_global_graph.h" 1
# 23 ".//src/include/utils/age_global_graph.h"
# 1 ".//src/include/utils/graphid.h" 1
# 26 ".//src/include/utils/graphid.h"
# 1 "/usr/include/postgresql/11/server/utils/fmgroids.h" 1
# 27 ".//src/include/utils/graphid.h" 2
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
# 28 ".//src/include/utils/graphid.h" 2

# 1 ".//src/include/catalog/ag_namespace.h" 1
# 25 ".//src/include/catalog/ag_namespace.h"
Oid ag_catalog_namespace_id(void);
Oid pg_catalog_namespace_id(void);
# 30 ".//src/include/utils/graphid.h" 2

typedef int64 graphid;
# 62 ".//src/include/utils/graphid.h"
graphid make_graphid(const int32 label_id, const int64 entry_id);
int32 get_graphid_label_id(const graphid gid);
int64 get_graphid_entry_id(const graphid gid);
Oid get_GRAPHIDOID(void);
Oid get_GRAPHIDARRAYOID(void);
void clear_global_Oids_GRAPHID(void);
# 24 ".//src/include/utils/age_global_graph.h" 2
# 1 ".//src/include/utils/age_graphid_ds.h" 1
# 35 ".//src/include/utils/age_graphid_ds.h"
typedef struct GraphIdNode GraphIdNode;


typedef struct ListGraphId ListGraphId;


GraphIdNode *next_GraphIdNode(GraphIdNode *node);
graphid get_graphid(GraphIdNode *node);



ListGraphId *new_graphid_stack(void);

void free_graphid_stack(ListGraphId *stack);

void push_graphid_stack(ListGraphId *stack, graphid id);

graphid pop_graphid_stack(ListGraphId *stack);

GraphIdNode *peek_stack_head(ListGraphId *stack);

GraphIdNode *peek_stack_tail(ListGraphId *stack);

int64 get_stack_size(ListGraphId *stack);






ListGraphId *append_graphid(ListGraphId *container, graphid id);

void free_ListGraphId(ListGraphId *container);

GraphIdNode *get_list_head(ListGraphId *list);

int64 get_list_size(ListGraphId *list);
# 25 ".//src/include/utils/age_global_graph.h" 2
# 33 ".//src/include/utils/age_global_graph.h"
typedef struct vertex_entry vertex_entry;


typedef struct edge_entry edge_entry;

typedef struct GRAPH_global_context GRAPH_global_context;


GRAPH_global_context *manage_GRAPH_global_contexts(char *graph_name,
                                                   Oid graph_oid);
GRAPH_global_context *find_GRAPH_global_context(Oid graph_oid);

# 44 ".//src/include/utils/age_global_graph.h" 3 4
_Bool 
# 44 ".//src/include/utils/age_global_graph.h"
    is_ggctx_invalid(GRAPH_global_context *ggctx);

ListGraphId *get_graph_vertices(GRAPH_global_context *ggctx);
vertex_entry *get_vertex_entry(GRAPH_global_context *ggctx,
                               graphid vertex_id);
edge_entry *get_edge_entry(GRAPH_global_context *ggctx, graphid edge_id);

graphid get_vertex_entry_id(vertex_entry *ve);
ListGraphId *get_vertex_entry_edges_in(vertex_entry *ve);
ListGraphId *get_vertex_entry_edges_out(vertex_entry *ve);
ListGraphId *get_vertex_entry_edges_self(vertex_entry *ve);
Oid get_vertex_entry_label_table_oid(vertex_entry *ve);
Datum get_vertex_entry_properties(vertex_entry *ve);

graphid get_edge_entry_id(edge_entry *ee);
Oid get_edge_entry_label_table_oid(edge_entry *ee);
Datum get_edge_entry_properties(edge_entry *ee);
graphid get_edge_entry_start_vertex_id(edge_entry *ee);
graphid get_edge_entry_end_vertex_id(edge_entry *ee);
# 30 "src/backend/utils/adt/age_global_graph.c" 2
# 1 ".//src/include/utils/agtype.h" 1
# 35 ".//src/include/utils/agtype.h"
# 1 "/usr/include/postgresql/11/server/access/htup_details.h" 1
# 19 "/usr/include/postgresql/11/server/access/htup_details.h"
# 1 "/usr/include/postgresql/11/server/access/tupmacs.h" 1
# 20 "/usr/include/postgresql/11/server/access/htup_details.h" 2
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
# 31 "src/backend/utils/adt/age_global_graph.c" 2
# 1 ".//src/include/catalog/ag_graph.h" 1
# 25 ".//src/include/catalog/ag_graph.h"
# 1 ".//src/include/catalog/ag_catalog.h" 1
# 28 ".//src/include/catalog/ag_catalog.h"
void object_access_hook_init(void);
void object_access_hook_fini(void);

void process_utility_hook_init(void);
void process_utility_hook_fini(void);

Oid ag_relation_id(const char *name, const char *kind);
# 26 ".//src/include/catalog/ag_graph.h" 2
# 37 ".//src/include/catalog/ag_graph.h"
Oid insert_graph(const Name graph_name, const Oid nsp_id);
void delete_graph(const Name graph_name);
void update_graph_name(const Name graph_name, const Name new_name);

Oid get_graph_oid(const char *graph_name);
char *get_graph_namespace_name(const char *graph_name);

List *get_graphnames(void);
void drop_graphs(List *graphnames);
# 32 "src/backend/utils/adt/age_global_graph.c" 2
# 1 ".//src/include/catalog/ag_label.h" 1
# 25 ".//src/include/catalog/ag_label.h"
# 1 "/usr/include/postgresql/11/server/nodes/execnodes.h" 1
# 17 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
# 26 "/usr/include/postgresql/11/server/nodes/tidbitmap.h"
# 1 "/usr/include/postgresql/11/server/utils/dsa.h" 1
# 18 "/usr/include/postgresql/11/server/utils/dsa.h"
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
# 18 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/11/server/access/heapam.h" 1
# 34 "/usr/include/postgresql/11/server/access/heapam.h"
typedef struct BulkInsertStateData *BulkInsertState;




typedef enum LockTupleMode
{

 LockTupleKeyShare,

 LockTupleShare,

 LockTupleNoKeyExclusive,

 LockTupleExclusive
} LockTupleMode;
# 69 "/usr/include/postgresql/11/server/access/heapam.h"
typedef struct HeapUpdateFailureData
{
 ItemPointerData ctid;
 TransactionId xmax;
 CommandId cmax;
} HeapUpdateFailureData;
# 86 "/usr/include/postgresql/11/server/access/heapam.h"
extern Relation relation_open(Oid relationId, LOCKMODE lockmode);
extern Relation try_relation_open(Oid relationId, LOCKMODE lockmode);
extern Relation relation_openrv(const RangeVar *relation, LOCKMODE lockmode);
extern Relation relation_openrv_extended(const RangeVar *relation,
       LOCKMODE lockmode, 
# 90 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                         _Bool 
# 90 "/usr/include/postgresql/11/server/access/heapam.h"
                              missing_ok);
extern void relation_close(Relation relation, LOCKMODE lockmode);

extern Relation heap_open(Oid relationId, LOCKMODE lockmode);
extern Relation heap_openrv(const RangeVar *relation, LOCKMODE lockmode);
extern Relation heap_openrv_extended(const RangeVar *relation,
      LOCKMODE lockmode, 
# 96 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                        _Bool 
# 96 "/usr/include/postgresql/11/server/access/heapam.h"
                             missing_ok);




typedef struct HeapScanDescData *HeapScanDesc;
typedef struct ParallelHeapScanDescData *ParallelHeapScanDesc;







extern HeapScanDesc heap_beginscan(Relation relation, Snapshot snapshot,
      int nkeys, ScanKey key);
extern HeapScanDesc heap_beginscan_catalog(Relation relation, int nkeys,
        ScanKey key);
extern HeapScanDesc heap_beginscan_strat(Relation relation, Snapshot snapshot,
      int nkeys, ScanKey key,
      
# 116 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
     _Bool 
# 116 "/usr/include/postgresql/11/server/access/heapam.h"
          allow_strat, 
# 116 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                       _Bool 
# 116 "/usr/include/postgresql/11/server/access/heapam.h"
                            allow_sync);
extern HeapScanDesc heap_beginscan_bm(Relation relation, Snapshot snapshot,
      int nkeys, ScanKey key);
extern HeapScanDesc heap_beginscan_sampling(Relation relation,
      Snapshot snapshot, int nkeys, ScanKey key,
      
# 121 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
     _Bool 
# 121 "/usr/include/postgresql/11/server/access/heapam.h"
          allow_strat, 
# 121 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                       _Bool 
# 121 "/usr/include/postgresql/11/server/access/heapam.h"
                            allow_sync, 
# 121 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                                        _Bool 
# 121 "/usr/include/postgresql/11/server/access/heapam.h"
                                             allow_pagemode);
extern void heap_setscanlimits(HeapScanDesc scan, BlockNumber startBlk,
       BlockNumber endBlk);
extern void heapgetpage(HeapScanDesc scan, BlockNumber page);
extern void heap_rescan(HeapScanDesc scan, ScanKey key);
extern void heap_rescan_set_params(HeapScanDesc scan, ScanKey key,
        
# 127 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
       _Bool 
# 127 "/usr/include/postgresql/11/server/access/heapam.h"
            allow_strat, 
# 127 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                         _Bool 
# 127 "/usr/include/postgresql/11/server/access/heapam.h"
                              allow_sync, 
# 127 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                                          _Bool 
# 127 "/usr/include/postgresql/11/server/access/heapam.h"
                                               allow_pagemode);
extern void heap_endscan(HeapScanDesc scan);
extern HeapTuple heap_getnext(HeapScanDesc scan, ScanDirection direction);

extern Size heap_parallelscan_estimate(Snapshot snapshot);
extern void heap_parallelscan_initialize(ParallelHeapScanDesc target,
        Relation relation, Snapshot snapshot);
extern void heap_parallelscan_reinitialize(ParallelHeapScanDesc parallel_scan);
extern HeapScanDesc heap_beginscan_parallel(Relation, ParallelHeapScanDesc);

extern 
# 137 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
      _Bool 
# 137 "/usr/include/postgresql/11/server/access/heapam.h"
           heap_fetch(Relation relation, Snapshot snapshot,
     HeapTuple tuple, Buffer *userbuf, 
# 138 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                                      _Bool 
# 138 "/usr/include/postgresql/11/server/access/heapam.h"
                                           keep_buf,
     Relation stats_relation);
extern 
# 140 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
      _Bool 
# 140 "/usr/include/postgresql/11/server/access/heapam.h"
           heap_hot_search_buffer(ItemPointer tid, Relation relation,
        Buffer buffer, Snapshot snapshot, HeapTuple heapTuple,
        
# 142 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
       _Bool 
# 142 "/usr/include/postgresql/11/server/access/heapam.h"
            *all_dead, 
# 142 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                       _Bool 
# 142 "/usr/include/postgresql/11/server/access/heapam.h"
                            first_call);
extern 
# 143 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
      _Bool 
# 143 "/usr/include/postgresql/11/server/access/heapam.h"
           heap_hot_search(ItemPointer tid, Relation relation,
    Snapshot snapshot, 
# 144 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                      _Bool 
# 144 "/usr/include/postgresql/11/server/access/heapam.h"
                           *all_dead);

extern void heap_get_latest_tid(Relation relation, Snapshot snapshot,
     ItemPointer tid);
extern void setLastTid(const ItemPointer tid);

extern BulkInsertState GetBulkInsertState(void);
extern void FreeBulkInsertState(BulkInsertState);
extern void ReleaseBulkInsertStatePin(BulkInsertState bistate);

extern Oid heap_insert(Relation relation, HeapTuple tup, CommandId cid,
   int options, BulkInsertState bistate);
extern void heap_multi_insert(Relation relation, HeapTuple *tuples, int ntuples,
      CommandId cid, int options, BulkInsertState bistate);
extern HTSU_Result heap_delete(Relation relation, ItemPointer tid,
   CommandId cid, Snapshot crosscheck, 
# 159 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                                      _Bool 
# 159 "/usr/include/postgresql/11/server/access/heapam.h"
                                           wait,
   HeapUpdateFailureData *hufd, 
# 160 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                               _Bool 
# 160 "/usr/include/postgresql/11/server/access/heapam.h"
                                    changingPart);
extern void heap_finish_speculative(Relation relation, HeapTuple tuple);
extern void heap_abort_speculative(Relation relation, HeapTuple tuple);
extern HTSU_Result heap_update(Relation relation, ItemPointer otid,
   HeapTuple newtup,
   CommandId cid, Snapshot crosscheck, 
# 165 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
                                      _Bool 
# 165 "/usr/include/postgresql/11/server/access/heapam.h"
                                           wait,
   HeapUpdateFailureData *hufd, LockTupleMode *lockmode);
extern HTSU_Result heap_lock_tuple(Relation relation, HeapTuple tuple,
    CommandId cid, LockTupleMode mode, LockWaitPolicy wait_policy,
    
# 169 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
   _Bool 
# 169 "/usr/include/postgresql/11/server/access/heapam.h"
        follow_update,
    Buffer *buffer, HeapUpdateFailureData *hufd);
extern void heap_inplace_update(Relation relation, HeapTuple tuple);
extern 
# 172 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
      _Bool 
# 172 "/usr/include/postgresql/11/server/access/heapam.h"
           heap_freeze_tuple(HeapTupleHeader tuple,
      TransactionId relfrozenxid, TransactionId relminmxid,
      TransactionId cutoff_xid, TransactionId cutoff_multi);
extern 
# 175 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
      _Bool 
# 175 "/usr/include/postgresql/11/server/access/heapam.h"
           heap_tuple_needs_freeze(HeapTupleHeader tuple, TransactionId cutoff_xid,
      MultiXactId cutoff_multi, Buffer buf);
extern 
# 177 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
      _Bool 
# 177 "/usr/include/postgresql/11/server/access/heapam.h"
           heap_tuple_needs_eventual_freeze(HeapTupleHeader tuple);

extern Oid simple_heap_insert(Relation relation, HeapTuple tup);
extern void simple_heap_delete(Relation relation, ItemPointer tid);
extern void simple_heap_update(Relation relation, ItemPointer otid,
       HeapTuple tup);

extern void heap_sync(Relation relation);
extern void heap_update_snapshot(HeapScanDesc scan, Snapshot snapshot);


extern void heap_page_prune_opt(Relation relation, Buffer buffer);
extern int heap_page_prune(Relation relation, Buffer buffer,
    TransactionId OldestXmin,
    
# 191 "/usr/include/postgresql/11/server/access/heapam.h" 3 4
   _Bool 
# 191 "/usr/include/postgresql/11/server/access/heapam.h"
        report_stats, TransactionId *latestRemovedXid);
extern void heap_page_prune_execute(Buffer buffer,
      OffsetNumber *redirected, int nredirected,
      OffsetNumber *nowdead, int ndead,
      OffsetNumber *nowunused, int nunused);
extern void heap_get_root_tuples(Page page, OffsetNumber *root_offsets);


extern void ss_report_location(Relation rel, BlockNumber location);
extern BlockNumber ss_get_location(Relation rel, BlockNumber relnblocks);
extern void SyncScanShmemInit(void);
extern Size SyncScanShmemSize(void);
# 19 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/11/server/access/tupconvert.h" 1
# 22 "/usr/include/postgresql/11/server/access/tupconvert.h"
typedef struct TupleConversionMap
{
 TupleDesc indesc;
 TupleDesc outdesc;
 AttrNumber *attrMap;
 Datum *invalues;
 
# 28 "/usr/include/postgresql/11/server/access/tupconvert.h" 3 4
_Bool 
# 28 "/usr/include/postgresql/11/server/access/tupconvert.h"
        *inisnull;
 Datum *outvalues;
 
# 30 "/usr/include/postgresql/11/server/access/tupconvert.h" 3 4
_Bool 
# 30 "/usr/include/postgresql/11/server/access/tupconvert.h"
        *outisnull;
} TupleConversionMap;


extern TupleConversionMap *convert_tuples_by_position(TupleDesc indesc,
         TupleDesc outdesc,
         const char *msg);

extern TupleConversionMap *convert_tuples_by_name(TupleDesc indesc,
        TupleDesc outdesc,
        const char *msg);

extern AttrNumber *convert_tuples_by_name_map(TupleDesc indesc,
         TupleDesc outdesc,
         const char *msg);

extern HeapTuple do_convert_tuple(HeapTuple tuple, TupleConversionMap *map);
extern Bitmapset *execute_attr_map_cols(Bitmapset *inbitmap, TupleConversionMap *map);

extern void free_conversion_map(TupleConversionMap *map);
# 20 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/11/server/executor/instrument.h" 1
# 16 "/usr/include/postgresql/11/server/executor/instrument.h"
# 1 "/usr/include/postgresql/11/server/portability/instr_time.h" 1
# 61 "/usr/include/postgresql/11/server/portability/instr_time.h"
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



# 62 "/usr/include/postgresql/11/server/portability/instr_time.h" 2
# 83 "/usr/include/postgresql/11/server/portability/instr_time.h"

# 83 "/usr/include/postgresql/11/server/portability/instr_time.h"
typedef struct timespec instr_time;
# 17 "/usr/include/postgresql/11/server/executor/instrument.h" 2


typedef struct BufferUsage
{
 long shared_blks_hit;
 long shared_blks_read;
 long shared_blks_dirtied;
 long shared_blks_written;
 long local_blks_hit;
 long local_blks_read;
 long local_blks_dirtied;
 long local_blks_written;
 long temp_blks_read;
 long temp_blks_written;
 instr_time blk_read_time;
 instr_time blk_write_time;
} BufferUsage;


typedef enum InstrumentOption
{
 INSTRUMENT_TIMER = 1 << 0,
 INSTRUMENT_BUFFERS = 1 << 1,
 INSTRUMENT_ROWS = 1 << 2,
 INSTRUMENT_ALL = (0x7FFFFFFF)
} InstrumentOption;

typedef struct Instrumentation
{

 
# 47 "/usr/include/postgresql/11/server/executor/instrument.h" 3 4
_Bool 
# 47 "/usr/include/postgresql/11/server/executor/instrument.h"
      need_timer;
 
# 48 "/usr/include/postgresql/11/server/executor/instrument.h" 3 4
_Bool 
# 48 "/usr/include/postgresql/11/server/executor/instrument.h"
      need_bufusage;

 
# 50 "/usr/include/postgresql/11/server/executor/instrument.h" 3 4
_Bool 
# 50 "/usr/include/postgresql/11/server/executor/instrument.h"
      running;
 instr_time starttime;
 instr_time counter;
 double firsttuple;
 double tuplecount;
 BufferUsage bufusage_start;

 double startup;
 double total;
 double ntuples;
 double ntuples2;
 double nloops;
 double nfiltered1;
 double nfiltered2;
 BufferUsage bufusage;
} Instrumentation;

typedef struct WorkerInstrumentation
{
 int num_workers;
 Instrumentation instrument[];
} WorkerInstrumentation;

extern BufferUsage pgBufferUsage;

extern Instrumentation *InstrAlloc(int n, int instrument_options);
extern void InstrInit(Instrumentation *instr, int instrument_options);
extern void InstrStartNode(Instrumentation *instr);
extern void InstrStopNode(Instrumentation *instr, double nTuples);
extern void InstrEndLoop(Instrumentation *instr);
extern void InstrAggNode(Instrumentation *dst, Instrumentation *add);
extern void InstrStartParallelQuery(void);
extern void InstrEndParallelQuery(BufferUsage *result);
extern void InstrAccumParallelQuery(BufferUsage *result);
# 21 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2

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
# 23 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/11/server/nodes/plannodes.h" 1
# 42 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct PlannedStmt
{
 NodeTag type;

 CmdType commandType;

 uint64 queryId;

 
# 50 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 50 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      hasReturning;

 
# 52 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 52 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      hasModifyingCTE;

 
# 54 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 54 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      canSetTag;

 
# 56 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 56 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      transientPlan;

 
# 58 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 58 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      dependsOnRole;

 
# 60 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 60 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      parallelModeNeeded;

 int jitFlags;

 struct Plan *planTree;

 List *rtable;


 List *resultRelations;





 List *nonleafResultRelations;






 List *rootResultRelations;

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
# 121 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct Plan
{
 NodeTag type;




 Cost startup_cost;
 Cost total_cost;




 double plan_rows;
 int plan_width;




 
# 140 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 140 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      parallel_aware;
 
# 141 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 141 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      parallel_safe;




 int plan_node_id;
 List *targetlist;
 List *qual;
 struct Plan *lefttree;
 struct Plan *righttree;
 List *initPlan;
# 165 "/usr/include/postgresql/11/server/nodes/plannodes.h"
 Bitmapset *extParam;
 Bitmapset *allParam;
} Plan;
# 191 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct Result
{
 Plan plan;
 Node *resconstantqual;
} Result;







typedef struct ProjectSet
{
 Plan plan;
} ProjectSet;
# 217 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct ModifyTable
{
 Plan plan;
 CmdType operation;
 
# 221 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 221 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      canSetTag;
 Index nominalRelation;

 List *partitioned_rels;
 
# 225 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 225 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      partColsUpdated;
 List *resultRelations;
 int resultRelIndex;
 int rootResultRelIndex;
 List *plans;
 List *withCheckOptionLists;
 List *returningLists;
 List *fdwPrivLists;
 Bitmapset *fdwDirectModifyPlans;
 List *rowMarks;
 int epqParam;
 OnConflictAction onConflictAction;
 List *arbiterIndexes;
 List *onConflictSet;
 Node *onConflictWhere;
 Index exclRelRTI;
 List *exclRelTlist;
} ModifyTable;

struct PartitionPruneInfo;






typedef struct Append
{
 Plan plan;
 List *appendplans;





 int first_partial_plan;


 List *partitioned_rels;


 struct PartitionPruneInfo *part_prune_info;
} Append;






typedef struct MergeAppend
{
 Plan plan;

 List *partitioned_rels;
 List *mergeplans;

 int numCols;
 AttrNumber *sortColIdx;
 Oid *sortOperators;
 Oid *collations;
 
# 285 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 285 "/usr/include/postgresql/11/server/nodes/plannodes.h"
        *nullsFirst;
} MergeAppend;
# 296 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct RecursiveUnion
{
 Plan plan;
 int wtParam;

 int numCols;

 AttrNumber *dupColIdx;
 Oid *dupOperators;
 long numGroups;
} RecursiveUnion;
# 316 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct BitmapAnd
{
 Plan plan;
 List *bitmapplans;
} BitmapAnd;
# 330 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct BitmapOr
{
 Plan plan;
 
# 333 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 333 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
# 402 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
# 445 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
# 473 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct BitmapIndexScan
{
 Scan scan;
 Oid indexid;
 
# 477 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 477 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      isshared;
 List *indexqual;
 List *indexqualorig;
} BitmapIndexScan;
# 491 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct BitmapHeapScan
{
 Scan scan;
 List *bitmapqualorig;
} BitmapHeapScan;
# 504 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct TidScan
{
 Scan scan;
 List *tidquals;
} TidScan;
# 526 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct SubqueryScan
{
 Scan scan;
 Plan *subplan;
} SubqueryScan;





typedef struct FunctionScan
{
 Scan scan;
 List *functions;
 
# 540 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 540 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
# 626 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct ForeignScan
{
 Scan scan;
 CmdType operation;
 Oid fs_server;
 List *fdw_exprs;
 List *fdw_private;
 List *fdw_scan_tlist;
 List *fdw_recheck_quals;
 Bitmapset *fs_relids;
 
# 636 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 636 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      fsSystemCol;
} ForeignScan;
# 652 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
# 695 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct Join
{
 Plan plan;
 JoinType jointype;
 
# 699 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 699 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      inner_unique;
 List *joinqual;
} Join;
# 714 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
# 738 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct MergeJoin
{
 Join join;
 
# 741 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 741 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      skip_mark_restore;
 List *mergeclauses;

 Oid *mergeFamilies;
 Oid *mergeCollations;
 int *mergeStrategies;
 
# 747 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 747 "/usr/include/postgresql/11/server/nodes/plannodes.h"
        *mergeNullsFirst;
} MergeJoin;





typedef struct HashJoin
{
 Join join;
 List *hashclauses;
} HashJoin;





typedef struct Material
{
 Plan plan;
} Material;





typedef struct Sort
{
 Plan plan;
 int numCols;
 AttrNumber *sortColIdx;
 Oid *sortOperators;
 Oid *collations;
 
# 780 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 780 "/usr/include/postgresql/11/server/nodes/plannodes.h"
        *nullsFirst;
} Sort;







typedef struct Group
{
 Plan plan;
 int numCols;
 AttrNumber *grpColIdx;
 Oid *grpOperators;
} Group;
# 811 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct Agg
{
 Plan plan;
 AggStrategy aggstrategy;
 AggSplit aggsplit;
 int numCols;
 AttrNumber *grpColIdx;
 Oid *grpOperators;
 long numGroups;
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
 int ordNumCols;
 AttrNumber *ordColIdx;
 Oid *ordOperators;
 int frameOptions;
 Node *startOffset;
 Node *endOffset;

 Oid startInRangeFunc;
 Oid endInRangeFunc;
 Oid inRangeColl;
 
# 847 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 847 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      inRangeAsc;
 
# 848 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 848 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      inRangeNullsFirst;
} WindowAgg;





typedef struct Unique
{
 Plan plan;
 int numCols;
 AttrNumber *uniqColIdx;
 Oid *uniqOperators;
} Unique;
# 874 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct Gather
{
 Plan plan;
 int num_workers;
 int rescan_param;
 
# 879 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 879 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      single_copy;
 
# 880 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 880 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
 
# 899 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 899 "/usr/include/postgresql/11/server/nodes/plannodes.h"
        *nullsFirst;
 Bitmapset *initParam;

} GatherMerge;
# 912 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct Hash
{
 Plan plan;
 Oid skewTable;
 AttrNumber skewColumn;
 
# 917 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 917 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
 AttrNumber flagColIdx;
 int firstFlag;
 long numGroups;
} SetOp;
# 949 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct LockRows
{
 Plan plan;
 List *rowMarks;
 int epqParam;
} LockRows;
# 963 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct Limit
{
 Plan plan;
 Node *limitOffset;
 Node *limitCount;
} Limit;
# 1001 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef enum RowMarkType
{
 ROW_MARK_EXCLUSIVE,
 ROW_MARK_NOKEYEXCLUSIVE,
 ROW_MARK_SHARE,
 ROW_MARK_KEYSHARE,
 ROW_MARK_REFERENCE,
 ROW_MARK_COPY
} RowMarkType;
# 1052 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
 
# 1062 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 1062 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      isParent;
} PlanRowMark;
# 1096 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct PartitionPruneInfo
{
 NodeTag type;
 List *prune_infos;
 Bitmapset *other_subplans;
} PartitionPruneInfo;
# 1119 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct PartitionedRelPruneInfo
{
 NodeTag type;
 Oid reloid;
 List *pruning_steps;
 Bitmapset *present_parts;

 int nparts;
 int nexprs;
 int *subplan_map;
 int *subpart_map;
 
# 1130 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 1130 "/usr/include/postgresql/11/server/nodes/plannodes.h"
        *hasexecparam;
 
# 1131 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 1131 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      do_initial_prune;

 
# 1133 "/usr/include/postgresql/11/server/nodes/plannodes.h" 3 4
_Bool 
# 1133 "/usr/include/postgresql/11/server/nodes/plannodes.h"
      do_exec_prune;

 Bitmapset *execparamids;
 List *initial_pruning_steps;
 List *exec_pruning_steps;
} PartitionedRelPruneInfo;







typedef struct PartitionPruneStep
{
 NodeTag type;
 int step_id;
} PartitionPruneStep;
# 1179 "/usr/include/postgresql/11/server/nodes/plannodes.h"
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
# 1219 "/usr/include/postgresql/11/server/nodes/plannodes.h"
typedef struct PlanInvalItem
{
 NodeTag type;
 int cacheId;
 uint32 hashValue;
} PlanInvalItem;
# 24 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2



# 1 "/usr/include/postgresql/11/server/utils/sharedtuplestore.h" 1
# 18 "/usr/include/postgresql/11/server/utils/sharedtuplestore.h"
# 1 "/usr/include/postgresql/11/server/storage/sharedfileset.h" 1
# 20 "/usr/include/postgresql/11/server/storage/sharedfileset.h"
# 1 "/usr/include/postgresql/11/server/storage/spin.h" 1
# 69 "/usr/include/postgresql/11/server/storage/spin.h"
extern int SpinlockSemas(void);
extern Size SpinlockSemaSize(void);
# 21 "/usr/include/postgresql/11/server/storage/sharedfileset.h" 2




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
extern File SharedFileSetOpen(SharedFileSet *fileset, const char *name);
extern 
# 41 "/usr/include/postgresql/11/server/storage/sharedfileset.h" 3 4
      _Bool 
# 41 "/usr/include/postgresql/11/server/storage/sharedfileset.h"
           SharedFileSetDelete(SharedFileSet *fileset, const char *name,
     
# 42 "/usr/include/postgresql/11/server/storage/sharedfileset.h" 3 4
    _Bool 
# 42 "/usr/include/postgresql/11/server/storage/sharedfileset.h"
         error_on_failure);
extern void SharedFileSetDeleteAll(SharedFileSet *fileset);
# 19 "/usr/include/postgresql/11/server/utils/sharedtuplestore.h" 2

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
# 28 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2
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
# 29 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/11/server/utils/tuplestore.h" 1
# 34 "/usr/include/postgresql/11/server/utils/tuplestore.h"
# 1 "/usr/include/postgresql/11/server/executor/tuptable.h" 1
# 113 "/usr/include/postgresql/11/server/executor/tuptable.h"
typedef struct TupleTableSlot
{
 NodeTag type;
 
# 116 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
_Bool 
# 116 "/usr/include/postgresql/11/server/executor/tuptable.h"
      tts_isempty;
 
# 117 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
_Bool 
# 117 "/usr/include/postgresql/11/server/executor/tuptable.h"
      tts_shouldFree;
 
# 118 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
_Bool 
# 118 "/usr/include/postgresql/11/server/executor/tuptable.h"
      tts_shouldFreeMin;

 
# 120 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
_Bool 
# 120 "/usr/include/postgresql/11/server/executor/tuptable.h"
      tts_slow;

 HeapTuple tts_tuple;

 TupleDesc tts_tupleDescriptor;
 MemoryContext tts_mcxt;
 Buffer tts_buffer;

 int tts_nvalid;

 Datum *tts_values;

 
# 132 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
_Bool 
# 132 "/usr/include/postgresql/11/server/executor/tuptable.h"
        *tts_isnull;
 MinimalTuple tts_mintuple;
 HeapTupleData tts_minhdr;

 uint32 tts_off;
 
# 137 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
_Bool 
# 137 "/usr/include/postgresql/11/server/executor/tuptable.h"
      tts_fixedTupleDescriptor;
} TupleTableSlot;
# 150 "/usr/include/postgresql/11/server/executor/tuptable.h"
extern TupleTableSlot *MakeTupleTableSlot(TupleDesc desc);
extern TupleTableSlot *ExecAllocTableSlot(List **tupleTable, TupleDesc desc);
extern void ExecResetTupleTable(List *tupleTable, 
# 152 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
                                                 _Bool 
# 152 "/usr/include/postgresql/11/server/executor/tuptable.h"
                                                      shouldFree);
extern TupleTableSlot *MakeSingleTupleTableSlot(TupleDesc tupdesc);
extern void ExecDropSingleTupleTableSlot(TupleTableSlot *slot);
extern void ExecSetSlotDescriptor(TupleTableSlot *slot, TupleDesc tupdesc);
extern TupleTableSlot *ExecStoreTuple(HeapTuple tuple,
      TupleTableSlot *slot,
      Buffer buffer,
      
# 159 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
     _Bool 
# 159 "/usr/include/postgresql/11/server/executor/tuptable.h"
          shouldFree);
extern TupleTableSlot *ExecStoreMinimalTuple(MinimalTuple mtup,
       TupleTableSlot *slot,
       
# 162 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
      _Bool 
# 162 "/usr/include/postgresql/11/server/executor/tuptable.h"
           shouldFree);
extern TupleTableSlot *ExecClearTuple(TupleTableSlot *slot);
extern TupleTableSlot *ExecStoreVirtualTuple(TupleTableSlot *slot);
extern TupleTableSlot *ExecStoreAllNullTuple(TupleTableSlot *slot);
extern HeapTuple ExecCopySlotTuple(TupleTableSlot *slot);
extern MinimalTuple ExecCopySlotMinimalTuple(TupleTableSlot *slot);
extern HeapTuple ExecFetchSlotTuple(TupleTableSlot *slot);
extern MinimalTuple ExecFetchSlotMinimalTuple(TupleTableSlot *slot);
extern Datum ExecFetchSlotTupleDatum(TupleTableSlot *slot);
extern HeapTuple ExecMaterializeSlot(TupleTableSlot *slot);
extern TupleTableSlot *ExecCopySlot(TupleTableSlot *dstslot,
    TupleTableSlot *srcslot);


extern Datum slot_getattr(TupleTableSlot *slot, int attnum, 
# 176 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
                                                           _Bool 
# 176 "/usr/include/postgresql/11/server/executor/tuptable.h"
                                                                *isnull);
extern void slot_getallattrs(TupleTableSlot *slot);
extern void slot_getsomeattrs(TupleTableSlot *slot, int attnum);
extern 
# 179 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
      _Bool 
# 179 "/usr/include/postgresql/11/server/executor/tuptable.h"
           slot_attisnull(TupleTableSlot *slot, int attnum);
extern 
# 180 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
      _Bool 
# 180 "/usr/include/postgresql/11/server/executor/tuptable.h"
           slot_getsysattr(TupleTableSlot *slot, int attnum,
    Datum *value, 
# 181 "/usr/include/postgresql/11/server/executor/tuptable.h" 3 4
                 _Bool 
# 181 "/usr/include/postgresql/11/server/executor/tuptable.h"
                      *isnull);
extern void slot_getmissingattrs(TupleTableSlot *slot, int startAttNum, int lastAttNum);
# 35 "/usr/include/postgresql/11/server/utils/tuplestore.h" 2





typedef struct Tuplestorestate Tuplestorestate;






extern Tuplestorestate *tuplestore_begin_heap(
# 47 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
                                             _Bool 
# 47 "/usr/include/postgresql/11/server/utils/tuplestore.h"
                                                  randomAccess,
       
# 48 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
      _Bool 
# 48 "/usr/include/postgresql/11/server/utils/tuplestore.h"
           interXact,
       int maxKBytes);

extern void tuplestore_set_eflags(Tuplestorestate *state, int eflags);

extern void tuplestore_puttupleslot(Tuplestorestate *state,
      TupleTableSlot *slot);
extern void tuplestore_puttuple(Tuplestorestate *state, HeapTuple tuple);
extern void tuplestore_putvalues(Tuplestorestate *state, TupleDesc tdesc,
      Datum *values, 
# 57 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
                    _Bool 
# 57 "/usr/include/postgresql/11/server/utils/tuplestore.h"
                         *isnull);




extern int tuplestore_alloc_read_pointer(Tuplestorestate *state, int eflags);

extern void tuplestore_select_read_pointer(Tuplestorestate *state, int ptr);

extern void tuplestore_copy_read_pointer(Tuplestorestate *state,
        int srcptr, int destptr);

extern void tuplestore_trim(Tuplestorestate *state);

extern 
# 71 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
      _Bool 
# 71 "/usr/include/postgresql/11/server/utils/tuplestore.h"
           tuplestore_in_memory(Tuplestorestate *state);

extern 
# 73 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
      _Bool 
# 73 "/usr/include/postgresql/11/server/utils/tuplestore.h"
           tuplestore_gettupleslot(Tuplestorestate *state, 
# 73 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
                                                           _Bool 
# 73 "/usr/include/postgresql/11/server/utils/tuplestore.h"
                                                                forward,
      
# 74 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
     _Bool 
# 74 "/usr/include/postgresql/11/server/utils/tuplestore.h"
          copy, TupleTableSlot *slot);

extern 
# 76 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
      _Bool 
# 76 "/usr/include/postgresql/11/server/utils/tuplestore.h"
           tuplestore_advance(Tuplestorestate *state, 
# 76 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
                                                      _Bool 
# 76 "/usr/include/postgresql/11/server/utils/tuplestore.h"
                                                           forward);

extern 
# 78 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
      _Bool 
# 78 "/usr/include/postgresql/11/server/utils/tuplestore.h"
           tuplestore_skiptuples(Tuplestorestate *state,
       int64 ntuples, 
# 79 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
                     _Bool 
# 79 "/usr/include/postgresql/11/server/utils/tuplestore.h"
                          forward);

extern int64 tuplestore_tuple_count(Tuplestorestate *state);

extern 
# 83 "/usr/include/postgresql/11/server/utils/tuplestore.h" 3 4
      _Bool 
# 83 "/usr/include/postgresql/11/server/utils/tuplestore.h"
           tuplestore_ateof(Tuplestorestate *state);

extern void tuplestore_rescan(Tuplestorestate *state);

extern void tuplestore_clear(Tuplestorestate *state);

extern void tuplestore_end(Tuplestorestate *state);
# 30 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2
# 1 "/usr/include/postgresql/11/server/utils/tuplesort.h" 1
# 24 "/usr/include/postgresql/11/server/utils/tuplesort.h"
# 1 "/usr/include/postgresql/11/server/access/itup.h" 1
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
# 25 "/usr/include/postgresql/11/server/utils/tuplesort.h" 2
# 35 "/usr/include/postgresql/11/server/utils/tuplesort.h"
typedef struct Tuplesortstate Tuplesortstate;
typedef struct Sharedsort Sharedsort;






typedef struct SortCoordinateData
{

 
# 46 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
_Bool 
# 46 "/usr/include/postgresql/11/server/utils/tuplesort.h"
      isWorker;






 int nParticipants;


 Sharedsort *sharedsort;
} SortCoordinateData;

typedef struct SortCoordinateData *SortCoordinate;






typedef enum
{
 SORT_TYPE_STILL_IN_PROGRESS = 0,
 SORT_TYPE_TOP_N_HEAPSORT,
 SORT_TYPE_QUICKSORT,
 SORT_TYPE_EXTERNAL_SORT,
 SORT_TYPE_EXTERNAL_MERGE
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
 long spaceUsed;
} TuplesortInstrumentation;
# 191 "/usr/include/postgresql/11/server/utils/tuplesort.h"
extern Tuplesortstate *tuplesort_begin_heap(TupleDesc tupDesc,
      int nkeys, AttrNumber *attNums,
      Oid *sortOperators, Oid *sortCollations,
      
# 194 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
     _Bool 
# 194 "/usr/include/postgresql/11/server/utils/tuplesort.h"
          *nullsFirstFlags,
      int workMem, SortCoordinate coordinate,
      
# 196 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
     _Bool 
# 196 "/usr/include/postgresql/11/server/utils/tuplesort.h"
          randomAccess);
extern Tuplesortstate *tuplesort_begin_cluster(TupleDesc tupDesc,
      Relation indexRel, int workMem,
      SortCoordinate coordinate, 
# 199 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
                                _Bool 
# 199 "/usr/include/postgresql/11/server/utils/tuplesort.h"
                                     randomAccess);
extern Tuplesortstate *tuplesort_begin_index_btree(Relation heapRel,
       Relation indexRel,
       
# 202 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
      _Bool 
# 202 "/usr/include/postgresql/11/server/utils/tuplesort.h"
           enforceUnique,
       int workMem, SortCoordinate coordinate,
       
# 204 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
      _Bool 
# 204 "/usr/include/postgresql/11/server/utils/tuplesort.h"
           randomAccess);
extern Tuplesortstate *tuplesort_begin_index_hash(Relation heapRel,
         Relation indexRel,
         uint32 high_mask,
         uint32 low_mask,
         uint32 max_buckets,
         int workMem, SortCoordinate coordinate,
         
# 211 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
        _Bool 
# 211 "/usr/include/postgresql/11/server/utils/tuplesort.h"
             randomAccess);
extern Tuplesortstate *tuplesort_begin_datum(Oid datumType,
       Oid sortOperator, Oid sortCollation,
       
# 214 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
      _Bool 
# 214 "/usr/include/postgresql/11/server/utils/tuplesort.h"
           nullsFirstFlag,
       int workMem, SortCoordinate coordinate,
       
# 216 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
      _Bool 
# 216 "/usr/include/postgresql/11/server/utils/tuplesort.h"
           randomAccess);

extern void tuplesort_set_bound(Tuplesortstate *state, int64 bound);

extern void tuplesort_puttupleslot(Tuplesortstate *state,
        TupleTableSlot *slot);
extern void tuplesort_putheaptuple(Tuplesortstate *state, HeapTuple tup);
extern void tuplesort_putindextuplevalues(Tuplesortstate *state,
         Relation rel, ItemPointer self,
         Datum *values, 
# 225 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
                       _Bool 
# 225 "/usr/include/postgresql/11/server/utils/tuplesort.h"
                            *isnull);
extern void tuplesort_putdatum(Tuplesortstate *state, Datum val,
       
# 227 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
      _Bool 
# 227 "/usr/include/postgresql/11/server/utils/tuplesort.h"
           isNull);

extern void tuplesort_performsort(Tuplesortstate *state);

extern 
# 231 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
      _Bool 
# 231 "/usr/include/postgresql/11/server/utils/tuplesort.h"
           tuplesort_gettupleslot(Tuplesortstate *state, 
# 231 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
                                                         _Bool 
# 231 "/usr/include/postgresql/11/server/utils/tuplesort.h"
                                                              forward,
        
# 232 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
       _Bool 
# 232 "/usr/include/postgresql/11/server/utils/tuplesort.h"
            copy, TupleTableSlot *slot, Datum *abbrev);
extern HeapTuple tuplesort_getheaptuple(Tuplesortstate *state, 
# 233 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
                                                              _Bool 
# 233 "/usr/include/postgresql/11/server/utils/tuplesort.h"
                                                                   forward);
extern IndexTuple tuplesort_getindextuple(Tuplesortstate *state, 
# 234 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
                                                                _Bool 
# 234 "/usr/include/postgresql/11/server/utils/tuplesort.h"
                                                                     forward);
extern 
# 235 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
      _Bool 
# 235 "/usr/include/postgresql/11/server/utils/tuplesort.h"
           tuplesort_getdatum(Tuplesortstate *state, 
# 235 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
                                                     _Bool 
# 235 "/usr/include/postgresql/11/server/utils/tuplesort.h"
                                                          forward,
       Datum *val, 
# 236 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
                  _Bool 
# 236 "/usr/include/postgresql/11/server/utils/tuplesort.h"
                       *isNull, Datum *abbrev);

extern 
# 238 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
      _Bool 
# 238 "/usr/include/postgresql/11/server/utils/tuplesort.h"
           tuplesort_skiptuples(Tuplesortstate *state, int64 ntuples,
      
# 239 "/usr/include/postgresql/11/server/utils/tuplesort.h" 3 4
     _Bool 
# 239 "/usr/include/postgresql/11/server/utils/tuplesort.h"
          forward);

extern void tuplesort_end(Tuplesortstate *state);

extern void tuplesort_get_stats(Tuplesortstate *state,
     TuplesortInstrumentation *stats);
extern const char *tuplesort_method_name(TuplesortMethod m);
extern const char *tuplesort_space_type_name(TuplesortSpaceType t);

extern int tuplesort_merge_order(int64 allowedMem);

extern Size tuplesort_estimate_shared(int nworkers);
extern void tuplesort_initialize_shared(Sharedsort *shared, int nWorkers,
       dsm_segment *seg);
extern void tuplesort_attach_shared(Sharedsort *shared, dsm_segment *seg);
# 262 "/usr/include/postgresql/11/server/utils/tuplesort.h"
extern void tuplesort_rescan(Tuplesortstate *state);
extern void tuplesort_markpos(Tuplesortstate *state);
extern void tuplesort_restorepos(Tuplesortstate *state);
# 31 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2

# 1 "/usr/include/postgresql/11/server/storage/condition_variable.h" 1
# 28 "/usr/include/postgresql/11/server/storage/condition_variable.h"
typedef struct
{
 slock_t mutex;
 proclist_head wakeup;
} ConditionVariable;


extern void ConditionVariableInit(ConditionVariable *cv);
# 45 "/usr/include/postgresql/11/server/storage/condition_variable.h"
extern void ConditionVariableSleep(ConditionVariable *cv, uint32 wait_event_info);
extern void ConditionVariableCancelSleep(void);







extern void ConditionVariablePrepareToSleep(ConditionVariable *cv);


extern void ConditionVariableSignal(ConditionVariable *cv);
extern void ConditionVariableBroadcast(ConditionVariable *cv);
# 33 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2


struct PlanState;
struct ParallelHashJoinState;
struct ExprState;
struct ExprContext;
struct ExprEvalStep;
# 49 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef Datum (*ExprStateEvalFunc) (struct ExprState *expression,
         struct ExprContext *econtext,
         
# 51 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
        _Bool 
# 51 "/usr/include/postgresql/11/server/nodes/execnodes.h"
             *isNull);





typedef struct ExprState
{
 Node tag;

 uint8 flags;






 
# 68 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 68 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
 
# 107 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 107 "/usr/include/postgresql/11/server/nodes/execnodes.h"
        *innermost_casenull;

 Datum *innermost_domainval;
 
# 110 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 110 "/usr/include/postgresql/11/server/nodes/execnodes.h"
        *innermost_domainnull;
} ExprState;
# 149 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
 
# 165 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 165 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      ii_Unique;
 
# 166 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 166 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      ii_ReadyForInserts;
 
# 167 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 167 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      ii_Concurrent;
 
# 168 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 168 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
# 213 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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

 
# 240 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 240 "/usr/include/postgresql/11/server/nodes/execnodes.h"
        *ecxt_aggnulls;



 Datum caseValue_datum;

 
# 246 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 246 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      caseValue_isNull;



 Datum domainValue_datum;

 
# 252 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 252 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
# 322 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct ProjectionInfo
{
 NodeTag type;

 ExprState pi_state;

 ExprContext *pi_exprContext;
} ProjectionInfo;
# 359 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct JunkFilter
{
 NodeTag type;
 List *jf_targetList;
 TupleDesc jf_cleanTupType;
 AttrNumber *jf_cleanMap;
 TupleTableSlot *jf_resultSlot;
 AttrNumber jf_junkAttNo;
} JunkFilter;






typedef struct OnConflictSetState
{
 NodeTag type;

 ProjectionInfo *oc_ProjInfo;
 TupleDesc oc_ProjTupdesc;
 ExprState *oc_WhereClause;
} OnConflictSetState;
# 390 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct ResultRelInfo
{
 NodeTag type;


 Index ri_RangeTableIndex;


 Relation ri_RelationDesc;


 int ri_NumIndices;


 RelationPtr ri_IndexRelationDescs;


 IndexInfo **ri_IndexRelationInfo;


 TriggerDesc *ri_TrigDesc;


 FmgrInfo *ri_TrigFunctions;


 ExprState **ri_TrigWhenExprs;


 Instrumentation *ri_TrigInstrument;


 struct FdwRoutine *ri_FdwRoutine;


 void *ri_FdwState;


 
# 428 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 428 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      ri_usesFdwDirectModify;


 List *ri_WithCheckOptions;


 List *ri_WithCheckOptionExprs;


 ExprState **ri_ConstraintExprs;


 JunkFilter *ri_junkFilter;


 List *ri_returningList;


 ProjectionInfo *ri_projectReturning;


 List *ri_onConflictArbiterIndexes;


 OnConflictSetState *ri_onConflict;


 List *ri_PartitionCheck;


 ExprState *ri_PartitionCheckExpr;







 struct ResultRelInfo *ri_RootResultRelInfo;


 
# 469 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 469 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      ri_PartitionReadyForRouting;
} ResultRelInfo;







typedef struct EState
{
 NodeTag type;


 ScanDirection es_direction;
 Snapshot es_snapshot;
 Snapshot es_crosscheck_snapshot;
 List *es_range_table;
 PlannedStmt *es_plannedstmt;
 const char *es_sourceText;

 JunkFilter *es_junkFilter;


 CommandId es_output_cid;


 ResultRelInfo *es_result_relations;
 int es_num_result_relations;
 ResultRelInfo *es_result_relation_info;
# 507 "/usr/include/postgresql/11/server/nodes/execnodes.h"
 ResultRelInfo *es_root_result_relations;
 int es_num_root_result_relations;





 List *es_tuple_routing_result_relations;


 List *es_trig_target_relations;
 TupleTableSlot *es_trig_tuple_slot;
 TupleTableSlot *es_trig_oldtup_slot;
 TupleTableSlot *es_trig_newtup_slot;


 ParamListInfo es_param_list_info;
 ParamExecData *es_param_exec_vals;

 QueryEnvironment *es_queryEnv;


 MemoryContext es_query_cxt;

 List *es_tupleTable;

 List *es_rowMarks;

 uint64 es_processed;
 Oid es_lastoid;

 int es_top_eflags;
 int es_instrument;
 
# 540 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 540 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      es_finished;

 List *es_exprcontexts;

 List *es_subplanstates;

 List *es_auxmodifytables;






 ExprContext *es_per_tuple_exprcontext;
# 564 "/usr/include/postgresql/11/server/nodes/execnodes.h"
 HeapTuple *es_epqTuple;
 
# 565 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 565 "/usr/include/postgresql/11/server/nodes/execnodes.h"
        *es_epqTupleSet;
 
# 566 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 566 "/usr/include/postgresql/11/server/nodes/execnodes.h"
        *es_epqScanDone;

 
# 568 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 568 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      es_use_parallel_mode;


 struct dsa_area *es_query_dsa;
# 582 "/usr/include/postgresql/11/server/nodes/execnodes.h"
 int es_jit_flags;
 struct JitContext *es_jit;
 struct JitInstrumentation *es_jit_worker_instr;
} EState;
# 605 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
 
# 615 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 615 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      ermActive;
 ItemPointerData curCtid;
 void *ermExtra;
} ExecRowMark;
# 632 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct ExecAuxRowMark
{
 ExecRowMark *rowmark;
 AttrNumber ctidAttNo;
 AttrNumber toidAttNo;
 AttrNumber wholeAttNo;
} ExecAuxRowMark;
# 657 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct TupleHashEntryData *TupleHashEntry;
typedef struct TupleHashTableData *TupleHashTable;

typedef struct TupleHashEntryData
{
 MinimalTuple firstTuple;
 void *additional;
 uint32 status;
 uint32 hash;
} TupleHashEntryData;







# 1 "/usr/include/postgresql/11/server/lib/simplehash.h" 1
# 99 "/usr/include/postgresql/11/server/lib/simplehash.h"
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
 tuplehash_EMPTY = 0x00,
 tuplehash_IN_USE = 0x01
} tuplehash_status;

typedef struct tuplehash_iterator
{
 uint32 cur;
 uint32 end;
 
# 137 "/usr/include/postgresql/11/server/lib/simplehash.h" 3 4
_Bool 
# 137 "/usr/include/postgresql/11/server/lib/simplehash.h"
      done;
} tuplehash_iterator;


extern tuplehash_hash *tuplehash_create(MemoryContext ctx, uint32 nelements,
    void *private_data);
extern void tuplehash_destroy(tuplehash_hash * tb);
extern void tuplehash_reset(tuplehash_hash * tb);
extern void tuplehash_grow(tuplehash_hash * tb, uint64 newsize);
extern TupleHashEntryData *tuplehash_insert(tuplehash_hash * tb, MinimalTuple key, 
# 146 "/usr/include/postgresql/11/server/lib/simplehash.h" 3 4
                                                                  _Bool 
# 146 "/usr/include/postgresql/11/server/lib/simplehash.h"
                                                                       *found);
extern TupleHashEntryData *tuplehash_lookup(tuplehash_hash * tb, MinimalTuple key);
extern 
# 148 "/usr/include/postgresql/11/server/lib/simplehash.h" 3 4
        _Bool 
# 148 "/usr/include/postgresql/11/server/lib/simplehash.h"
             tuplehash_delete(tuplehash_hash * tb, MinimalTuple key);
extern void tuplehash_start_iterate(tuplehash_hash * tb, tuplehash_iterator * iter);
extern void tuplehash_start_iterate_at(tuplehash_hash * tb, tuplehash_iterator * iter, uint32 at);
extern TupleHashEntryData *tuplehash_iterate(tuplehash_hash * tb, tuplehash_iterator * iter);
extern void tuplehash_stat(tuplehash_hash * tb);
# 675 "/usr/include/postgresql/11/server/nodes/execnodes.h" 2

typedef struct TupleHashTableData
{
 tuplehash_hash *hashtab;
 int numCols;
 AttrNumber *keyColIdx;
 FmgrInfo *tab_hash_funcs;
 ExprState *tab_eq_func;
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
# 728 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct AggrefExprState
{
 NodeTag type;
 Aggref *aggref;
 int aggno;
} AggrefExprState;





typedef struct WindowFuncExprState
{
 NodeTag type;
 WindowFunc *wfunc;
 List *args;
 ExprState *aggfilter;
 int wfuncno;
} WindowFuncExprState;
# 758 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
 
# 791 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 791 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      funcReturnsTuple;





 
# 797 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 797 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      funcReturnsSet;
# 806 "/usr/include/postgresql/11/server/nodes/execnodes.h"
 
# 806 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 806 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      setArgsValid;







 
# 814 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 814 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      shutdown_reg;






 FunctionCallInfoData fcinfo_data;
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
 
# 844 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 844 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      havehashrows;
 
# 845 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 845 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      havenullrows;
 MemoryContext hashtablecxt;
 MemoryContext hashtempcxt;
 ExprContext *innerecontext;

 AttrNumber *keyColIdx;
 Oid *tab_eq_funcoids;

 FmgrInfo *tab_hash_funcs;
 FmgrInfo *tab_eq_funcs;
 FmgrInfo *lhs_hash_funcs;
 FmgrInfo *cur_eq_funcs;
 ExprState *cur_eq_comp;
 int numCols;
} SubPlanState;





typedef struct AlternativeSubPlanState
{
 NodeTag type;
 AlternativeSubPlan *subplan;
 List *subplans;
 int active;
} AlternativeSubPlanState;
# 880 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
# 912 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef TupleTableSlot *(*ExecProcNodeMtd) (struct PlanState *pstate);
# 921 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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




 TupleTableSlot *ps_ResultTupleSlot;
 ExprContext *ps_ExprContext;
 ProjectionInfo *ps_ProjInfo;






 TupleDesc scandesc;
} PlanState;
# 1006 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct EPQState
{
 EState *estate;
 PlanState *planstate;
 TupleTableSlot *origslot;
 Plan *plan;
 List *arowMarks;
 int epqParam;
} EPQState;






typedef struct ResultState
{
 PlanState ps;
 ExprState *resconstantqual;
 
# 1025 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1025 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      rs_done;
 
# 1026 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1026 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      rs_checkqual;
} ResultState;
# 1036 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct ProjectSetState
{
 PlanState ps;
 Node **elems;
 ExprDoneCond *elemdone;
 int nelems;
 
# 1042 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1042 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      pending_srf_tuples;
 MemoryContext argcontext;
} ProjectSetState;





typedef struct ModifyTableState
{
 PlanState ps;
 CmdType operation;
 
# 1054 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1054 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      canSetTag;
 
# 1055 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1055 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      mt_done;
 PlanState **mt_plans;
 int mt_nplans;
 int mt_whichplan;
 ResultRelInfo *resultRelInfo;
 ResultRelInfo *rootResultRelInfo;

 List **mt_arowmarks;
 EPQState mt_epqstate;
 
# 1064 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1064 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      fireBSTriggers;
 TupleTableSlot *mt_existing;
 List *mt_excludedtlist;
 TupleTableSlot *mt_conflproj;


 struct PartitionTupleRouting *mt_partition_tuple_routing;


 struct TransitionCaptureState *mt_transition_capture;


 struct TransitionCaptureState *mt_oc_transition_capture;


 TupleConversionMap **mt_per_subplan_tupconv_maps;
} ModifyTableState;
# 1095 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
 int as_first_partial_plan;

 ParallelAppendState *as_pstate;
 Size pstate_len;
 struct PartitionPruneState *as_prune_state;
 Bitmapset *as_valid_subplans;
 
# 1113 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1113 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      (*choose_next_subplan) (AppendState *);
};
# 1127 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct MergeAppendState
{
 PlanState ps;
 PlanState **mergeplans;
 int ms_nplans;
 int ms_nkeys;
 SortSupport ms_sortkeys;
 TupleTableSlot **ms_slots;
 struct binaryheap *ms_heap;
 
# 1136 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1136 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      ms_initialized;
} MergeAppendState;
# 1150 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct RecursiveUnionState
{
 PlanState ps;
 
# 1153 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1153 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      recursing;
 
# 1154 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1154 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
# 1206 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct ScanState
{
 PlanState ps;
 Relation ss_currentRelation;
 HeapScanDesc ss_currentScanDesc;
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
 
# 1236 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1236 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      use_bulkread;
 
# 1237 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1237 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      use_pagemode;
 
# 1238 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1238 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      begun;
 uint32 seed;
} SampleScanState;






typedef struct
{
 ScanKey scan_key;
 ExprState *key_expr;
 
# 1251 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1251 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      key_toastable;
} IndexRuntimeKeyInfo;

typedef struct
{
 ScanKey scan_key;
 ExprState *array_expr;
 int next_elem;
 int num_elems;
 Datum *elem_values;
 
# 1261 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1261 "/usr/include/postgresql/11/server/nodes/execnodes.h"
        *elem_nulls;
} IndexArrayKeyInfo;
# 1290 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct IndexScanState
{
 ScanState ss;
 ExprState *indexqualorig;
 List *indexorderbyorig;
 ScanKey iss_ScanKeys;
 int iss_NumScanKeys;
 ScanKey iss_OrderByKeys;
 int iss_NumOrderByKeys;
 IndexRuntimeKeyInfo *iss_RuntimeKeys;
 int iss_NumRuntimeKeys;
 
# 1301 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1301 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      iss_RuntimeKeysReady;
 ExprContext *iss_RuntimeContext;
 Relation iss_RelationDesc;
 IndexScanDesc iss_ScanDesc;


 pairingheap *iss_ReorderQueue;
 
# 1308 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1308 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      iss_ReachedEnd;
 Datum *iss_OrderByValues;
 
# 1310 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1310 "/usr/include/postgresql/11/server/nodes/execnodes.h"
        *iss_OrderByNulls;
 SortSupport iss_SortSupport;
 
# 1312 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1312 "/usr/include/postgresql/11/server/nodes/execnodes.h"
        *iss_OrderByTypByVals;
 int16 *iss_OrderByTypLens;
 Size iss_PscanLen;
} IndexScanState;
# 1335 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct IndexOnlyScanState
{
 ScanState ss;
 ExprState *recheckqual;
 ScanKey ioss_ScanKeys;
 int ioss_NumScanKeys;
 ScanKey ioss_OrderByKeys;
 int ioss_NumOrderByKeys;
 IndexRuntimeKeyInfo *ioss_RuntimeKeys;
 int ioss_NumRuntimeKeys;
 
# 1345 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1345 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      ioss_RuntimeKeysReady;
 ExprContext *ioss_RuntimeContext;
 Relation ioss_RelationDesc;
 IndexScanDesc ioss_ScanDesc;
 Buffer ioss_VMBuffer;
 Size ioss_PscanLen;
} IndexOnlyScanState;
# 1369 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct BitmapIndexScanState
{
 ScanState ss;
 TIDBitmap *biss_result;
 ScanKey biss_ScanKeys;
 int biss_NumScanKeys;
 IndexRuntimeKeyInfo *biss_RuntimeKeys;
 int biss_NumRuntimeKeys;
 IndexArrayKeyInfo *biss_ArrayKeys;
 int biss_NumArrayKeys;
 
# 1379 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1379 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      biss_RuntimeKeysReady;
 ExprContext *biss_RuntimeContext;
 Relation biss_RelationDesc;
 IndexScanDesc biss_ScanDesc;
} BitmapIndexScanState;
# 1398 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef enum
{
 BM_INITIAL,
 BM_INPROGRESS,
 BM_FINISHED
} SharedBitmapState;
# 1418 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
# 1454 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct BitmapHeapScanState
{
 ScanState ss;
 ExprState *bitmapqualorig;
 TIDBitmap *tbm;
 TBMIterator *tbmiterator;
 TBMIterateResult *tbmres;
 
# 1461 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1461 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      can_skip_fetch;
 
# 1462 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1462 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      skip_fetch;
 Buffer vmbuffer;
 Buffer pvmbuffer;
 long exact_pages;
 long lossy_pages;
 TBMIterator *prefetch_iterator;
 int prefetch_pages;
 int prefetch_target;
 int prefetch_maximum;
 Size pscan_len;
 
# 1472 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1472 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      initialized;
 TBMSharedIterator *shared_tbmiterator;
 TBMSharedIterator *shared_prefetch_iterator;
 ParallelBitmapHeapState *pstate;
} BitmapHeapScanState;
# 1489 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct TidScanState
{
 ScanState ss;
 List *tss_tidexprs;
 
# 1493 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1493 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      tss_isCurrentOf;
 int tss_NumTids;
 int tss_TidPtr;
 ItemPointerData *tss_TidList;
 HeapTupleData tss_htup;
} TidScanState;
# 1507 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct SubqueryScanState
{
 ScanState ss;
 PlanState *subplan;
} SubqueryScanState;
# 1529 "/usr/include/postgresql/11/server/nodes/execnodes.h"
struct FunctionScanPerFuncState;

typedef struct FunctionScanState
{
 ScanState ss;
 int eflags;
 
# 1535 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1535 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      ordinality;
 
# 1536 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1536 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      simple;
 int64 ordinal;
 int nfuncs;
 struct FunctionScanPerFuncState *funcstates;
 MemoryContext argcontext;
} FunctionScanState;
# 1567 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct ValuesScanState
{
 ScanState ss;
 ExprContext *rowcontext;
 List **exprlists;
 int array_len;
 int curr_idx;

 List **exprstatelists;
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
# 1613 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct CteScanState
{
 ScanState ss;
 int eflags;
 int readptr;
 PlanState *cteplanstate;

 struct CteScanState *leader;

 Tuplestorestate *cte_table;
 
# 1623 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1623 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      eof_cte;
} CteScanState;
# 1636 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct NamedTuplestoreScanState
{
 ScanState ss;
 int readptr;
 TupleDesc tupdesc;
 Tuplestorestate *relation;
} NamedTuplestoreScanState;
# 1652 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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

 struct FdwRoutine *fdwroutine;
 void *fdw_state;
} ForeignScanState;
# 1687 "/usr/include/postgresql/11/server/nodes/execnodes.h"
struct CustomExecMethods;

typedef struct CustomScanState
{
 ScanState ss;
 uint32 flags;

 List *custom_ps;
 Size pscan_len;
 const struct CustomExecMethods *methods;
} CustomScanState;
# 1710 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct JoinState
{
 PlanState ps;
 JoinType jointype;
 
# 1714 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1714 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      single_match;

 ExprState *joinqual;
} JoinState;
# 1727 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct NestLoopState
{
 JoinState js;
 
# 1730 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1730 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      nl_NeedNewOuter;
 
# 1731 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1731 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      nl_MatchedOuter;
 TupleTableSlot *nl_NullInnerTupleSlot;
} NestLoopState;
# 1758 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct MergeJoinClauseData *MergeJoinClause;

typedef struct MergeJoinState
{
 JoinState js;
 int mj_NumClauses;
 MergeJoinClause mj_Clauses;
 int mj_JoinState;
 
# 1766 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1766 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      mj_SkipMarkRestore;
 
# 1767 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1767 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      mj_ExtraMarks;
 
# 1768 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1768 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      mj_ConstFalseJoin;
 
# 1769 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1769 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      mj_FillOuter;
 
# 1770 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1770 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      mj_FillInner;
 
# 1771 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1771 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      mj_MatchedOuter;
 
# 1772 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1772 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      mj_MatchedInner;
 TupleTableSlot *mj_OuterTupleSlot;
 TupleTableSlot *mj_InnerTupleSlot;
 TupleTableSlot *mj_MarkedTupleSlot;
 TupleTableSlot *mj_NullOuterTupleSlot;
 TupleTableSlot *mj_NullInnerTupleSlot;
 ExprContext *mj_OuterEContext;
 ExprContext *mj_InnerEContext;
} MergeJoinState;
# 1810 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct HashJoinTupleData *HashJoinTuple;
typedef struct HashJoinTableData *HashJoinTable;

typedef struct HashJoinState
{
 JoinState js;
 ExprState *hashclauses;
 List *hj_OuterHashKeys;
 List *hj_InnerHashKeys;
 List *hj_HashOperators;
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
 
# 1831 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1831 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      hj_MatchedOuter;
 
# 1832 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1832 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      hj_OuterNotEmpty;
} HashJoinState;
# 1850 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct MaterialState
{
 ScanState ss;
 int eflags;
 
# 1854 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1854 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      eof_underlying;
 Tuplestorestate *tuplestorestate;
} MaterialState;





typedef struct SharedSortInfo
{
 int num_workers;
 TuplesortInstrumentation sinstrument[];
} SharedSortInfo;





typedef struct SortState
{
 ScanState ss;
 
# 1875 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1875 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      randomAccess;
 
# 1876 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1876 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      bounded;
 int64 bound;
 
# 1878 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1878 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      sort_Done;
 
# 1879 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1879 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      bounded_Done;
 int64 bound_Done;
 void *tuplesortstate;
 
# 1882 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1882 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      am_worker;
 SharedSortInfo *shared_info;
} SortState;





typedef struct GroupState
{
 ScanState ss;
 ExprState *eqfunction;
 
# 1894 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1894 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      grp_done;
} GroupState;
# 1910 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
 
# 1937 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1937 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      input_done;
 
# 1938 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1938 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      agg_done;
 int projected_set;

 int current_set;
 Bitmapset *grouped_cols;
 List *all_grouped_cols;

 int maxsets;
 AggStatePerPhase phases;
 Tuplesortstate *sort_in;
 Tuplesortstate *sort_out;
 TupleTableSlot *sort_slot;

 AggStatePerGroup *pergroups;

 HeapTuple grp_firstTuple;

 
# 1955 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 1955 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      table_filled;
 int num_hashes;
 AggStatePerHash perhash;
 AggStatePerGroup *hash_pergroup;




 AggStatePerGroup *all_pergroups;

 ProjectionInfo *combinedproj;
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
 
# 2013 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2013 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      inRangeAsc;
 
# 2014 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2014 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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

 
# 2028 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2028 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      all_first;
 
# 2029 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2029 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      all_done;
 
# 2030 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2030 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      partition_spooled;

 
# 2032 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2032 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      more_partitions;

 
# 2034 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2034 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      framehead_valid;

 
# 2036 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2036 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      frametail_valid;

 
# 2038 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2038 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      grouptail_valid;


 TupleTableSlot *first_part_slot;

 TupleTableSlot *framehead_slot;
 TupleTableSlot *frametail_slot;


 TupleTableSlot *agg_row_slot;
 TupleTableSlot *temp_slot_1;
 TupleTableSlot *temp_slot_2;
} WindowAggState;
# 2063 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct UniqueState
{
 PlanState ps;
 ExprState *eqfunction;
} UniqueState;
# 2076 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct GatherState
{
 PlanState ps;
 
# 2079 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2079 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      initialized;
 
# 2080 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2080 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      need_to_scan_locally;
 int64 tuples_needed;

 TupleTableSlot *funnel_slot;
 struct ParallelExecutorInfo *pei;

 int nworkers_launched;
 int nreaders;
 int nextreader;
 struct TupleQueueReader **reader;
} GatherState;
# 2100 "/usr/include/postgresql/11/server/nodes/execnodes.h"
struct GMReaderTupleBuffer;

typedef struct GatherMergeState
{
 PlanState ps;
 
# 2105 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2105 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      initialized;
 
# 2106 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2106 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      gm_initialized;
 
# 2107 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2107 "/usr/include/postgresql/11/server/nodes/execnodes.h"
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
 size_t space_peak;
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
# 2175 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef struct SetOpStatePerGroupData *SetOpStatePerGroup;

typedef struct SetOpState
{
 PlanState ps;
 ExprState *eqfunction;
 Oid *eqfuncoids;
 FmgrInfo *hashfunctions;
 
# 2183 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2183 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      setop_done;
 long numOutput;

 SetOpStatePerGroup pergroup;
 HeapTuple grp_firstTuple;

 TupleHashTable hashtable;
 MemoryContext tableContext;
 
# 2191 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2191 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      table_filled;
 TupleHashIterator hashiter;
} SetOpState;







typedef struct LockRowsState
{
 PlanState ps;
 List *lr_arowMarks;
 EPQState lr_epqstate;
 HeapTuple *lr_curtuples;
 int lr_ntables;
} LockRowsState;
# 2222 "/usr/include/postgresql/11/server/nodes/execnodes.h"
typedef enum
{
 LIMIT_INITIAL,
 LIMIT_RESCAN,
 LIMIT_EMPTY,
 LIMIT_INWINDOW,
 LIMIT_SUBPLANEOF,
 LIMIT_WINDOWEND,
 LIMIT_WINDOWSTART
} LimitStateCond;

typedef struct LimitState
{
 PlanState ps;
 ExprState *limitOffset;
 ExprState *limitCount;
 int64 offset;
 int64 count;
 
# 2240 "/usr/include/postgresql/11/server/nodes/execnodes.h" 3 4
_Bool 
# 2240 "/usr/include/postgresql/11/server/nodes/execnodes.h"
      noCount;
 LimitStateCond lstate;
 int64 position;
 TupleTableSlot *subSlot;
} LimitState;
# 26 ".//src/include/catalog/ag_label.h" 2
# 73 ".//src/include/catalog/ag_label.h"
Oid insert_label(const char *label_name, Oid label_graph, int32 label_id,
                 char label_kind, Oid label_relation, const char *seq_name);
void delete_label(Oid relation);

Oid get_label_oid(const char *label_name, Oid label_graph);
int32 get_label_id(const char *label_name, Oid label_graph);
Oid get_label_relation(const char *label_name, Oid label_graph);
char *get_label_relation_name(const char *label_name, Oid label_graph);


# 82 ".//src/include/catalog/ag_label.h" 3 4
_Bool 
# 82 ".//src/include/catalog/ag_label.h"
    label_id_exists(Oid label_graph, int32 label_id);
RangeVar *get_label_range_var(char *graph_name, Oid graph_oid, char *label_name);

List *get_all_edge_labels_per_graph(EState *estate, Oid graph_oid);
# 33 "src/backend/utils/adt/age_global_graph.c" 2
# 45 "src/backend/utils/adt/age_global_graph.c"
typedef struct vertex_entry
{
    graphid vertex_id;
    ListGraphId *edges_in;
    ListGraphId *edges_out;
    ListGraphId *edges_self;
    Oid vertex_label_table_oid;
    Datum vertex_properties;
} vertex_entry;


typedef struct edge_entry
{
    graphid edge_id;
    Oid edge_label_table_oid;
    Datum edge_properties;
    graphid start_vertex_id;
    graphid end_vertex_id;
} edge_entry;






typedef struct GRAPH_global_context
{
    char *graph_name;
    Oid graph_oid;
    HTAB *vertex_hashtable;
    HTAB *edge_hashtable;
    TransactionId xmin;
    TransactionId xmax;
    CommandId curcid;
    int64 num_loaded_vertices;
    int64 num_loaded_edges;
    ListGraphId *vertices;
    struct GRAPH_global_context *next;
} GRAPH_global_context;


static GRAPH_global_context *global_graph_contexts = 
# 86 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                    ((void *)0)
# 86 "src/backend/utils/adt/age_global_graph.c"
                                                        ;



static void free_specific_GRAPH_global_context(GRAPH_global_context *ggctx);
static 
# 91 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 91 "src/backend/utils/adt/age_global_graph.c"
           delete_specific_GRAPH_global_contexts(char *graph_name);
static 
# 92 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 92 "src/backend/utils/adt/age_global_graph.c"
           delete_GRAPH_global_contexts(void);
static void create_GRAPH_global_hashtables(GRAPH_global_context *ggctx);
static void load_GRAPH_global_hashtables(GRAPH_global_context *ggctx);
static void load_vertex_hashtable(GRAPH_global_context *ggctx);
static void load_edge_hashtable(GRAPH_global_context *ggctx);
static void freeze_GRAPH_global_hashtables(GRAPH_global_context *ggctx);
static List *get_ag_labels_names(Snapshot snapshot, Oid graph_oid,
                                 char label_type);
static 
# 100 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 100 "src/backend/utils/adt/age_global_graph.c"
           insert_edge(GRAPH_global_context *ggctx, graphid edge_id,
                        Datum edge_properties, graphid start_vertex_id,
                        graphid end_vertex_id, Oid edge_label_table_oid);
static 
# 103 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 103 "src/backend/utils/adt/age_global_graph.c"
           insert_vertex_edge(GRAPH_global_context *ggctx,
                               graphid start_vertex_id, graphid end_vertex_id,
                               graphid edge_id);
static 
# 106 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 106 "src/backend/utils/adt/age_global_graph.c"
           insert_vertex_entry(GRAPH_global_context *ggctx, graphid vertex_id,
                                Oid vertex_label_table_oid,
                                Datum vertex_properties);
# 117 "src/backend/utils/adt/age_global_graph.c"

# 117 "src/backend/utils/adt/age_global_graph.c" 3 4
_Bool 
# 117 "src/backend/utils/adt/age_global_graph.c"
    is_ggctx_invalid(GRAPH_global_context *ggctx)
{
    Snapshot snap = GetActiveSnapshot();






    return (ggctx->xmin != snap->xmin ||
            ggctx->xmax != snap->xmax ||
            ggctx->curcid != snap->curcid);

}






static void create_GRAPH_global_hashtables(GRAPH_global_context *ggctx)
{
    HASHCTL vertex_ctl;
    HASHCTL edge_ctl;
    char *graph_name = 
# 141 "src/backend/utils/adt/age_global_graph.c" 3 4
                      ((void *)0)
# 141 "src/backend/utils/adt/age_global_graph.c"
                          ;
    char *vhn = 
# 142 "src/backend/utils/adt/age_global_graph.c" 3 4
               ((void *)0)
# 142 "src/backend/utils/adt/age_global_graph.c"
                   ;
    char *ehn = 
# 143 "src/backend/utils/adt/age_global_graph.c" 3 4
               ((void *)0)
# 143 "src/backend/utils/adt/age_global_graph.c"
                   ;
    int glen;
    int vlen;
    int elen;


    graph_name = ggctx->graph_name;
    glen = strlen(graph_name);

    vlen = strlen("Vertex to edge lists ");

    elen = strlen("Edge to vertex mapping ");

    vhn = palloc0(vlen + glen + 1);
    ehn = palloc0(elen + glen + 1);

    strcpy(vhn, "Vertex to edge lists ");
    strcpy(ehn, "Edge to vertex mapping ");

    vhn = strncat(vhn, graph_name, glen);
    ehn = strncat(ehn, graph_name, glen);


    do { void *_vstart = (void *) (&vertex_ctl); int _val = (0); Size _len = (sizeof(vertex_ctl)); if ((((uintptr_t) _vstart) & (sizeof(long) - 1)) == 0 && (_len & (sizeof(long) - 1)) == 0 && _val == 0 && _len <= 1024 && 1024 != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0);
    vertex_ctl.keysize = sizeof(int64);
    vertex_ctl.entrysize = sizeof(vertex_entry);
    vertex_ctl.hash = tag_hash;
    ggctx->vertex_hashtable = hash_create(vhn, 1000000,
                                          &vertex_ctl,
                                          0x0010 | 0x0040);
    pfree(vhn);


    do { void *_vstart = (void *) (&edge_ctl); int _val = (0); Size _len = (sizeof(edge_ctl)); if ((((uintptr_t) _vstart) & (sizeof(long) - 1)) == 0 && (_len & (sizeof(long) - 1)) == 0 && _val == 0 && _len <= 1024 && 1024 != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0);
    edge_ctl.keysize = sizeof(int64);
    edge_ctl.entrysize = sizeof(edge_entry);
    edge_ctl.hash = tag_hash;
    ggctx->edge_hashtable = hash_create(ehn, 1000000, &edge_ctl,
                                        0x0010 | 0x0040);
    pfree(ehn);
}


static List *get_ag_labels_names(Snapshot snapshot, Oid graph_oid,
                                 char label_type)
{
    List *labels = ((List *) 
# 189 "src/backend/utils/adt/age_global_graph.c" 3 4
                  ((void *)0)
# 189 "src/backend/utils/adt/age_global_graph.c"
                  );
    ScanKeyData scan_keys[2];
    Relation ag_label;
    HeapScanDesc scan_desc;
    HeapTuple tuple;
    TupleDesc tupdesc;


    ((void)
# 197 "src/backend/utils/adt/age_global_graph.c" 3 4
   1
# 197 "src/backend/utils/adt/age_global_graph.c"
   );


    ScanKeyInit(&scan_keys[1], 2, 3,
                184, ((Datum) (graph_oid)));
    ScanKeyInit(&scan_keys[0], 4, 3,
                61, ((Datum) (label_type)));


    ag_label = heap_open(ag_relation_id("ag_label", "table"), 5);
    scan_desc = heap_beginscan(ag_label, snapshot, 2, scan_keys);


    tupdesc = ((ag_label)->rd_att);

    ((void)
# 212 "src/backend/utils/adt/age_global_graph.c" 3 4
   1
# 212 "src/backend/utils/adt/age_global_graph.c"
   );


    while((tuple = heap_getnext(scan_desc, ForwardScanDirection)) != 
# 215 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                                    ((void *)0)
# 215 "src/backend/utils/adt/age_global_graph.c"
                                                                        )
    {
        Name label;
        
# 218 "src/backend/utils/adt/age_global_graph.c" 3 4
       _Bool 
# 218 "src/backend/utils/adt/age_global_graph.c"
            is_null = 
# 218 "src/backend/utils/adt/age_global_graph.c" 3 4
                      0
# 218 "src/backend/utils/adt/age_global_graph.c"
                           ;


        ((void)
# 221 "src/backend/utils/adt/age_global_graph.c" 3 4
       1
# 221 "src/backend/utils/adt/age_global_graph.c"
       );

        label = ((Name) ((Pointer) (( ((1) > 0) ? ( ((1) > (int) (((tuple)->t_data)->t_infomask2 & 0x07FF)) ? getmissingattr((tupdesc), (1), (&is_null)) : ( ((void)
# 223 "src/backend/utils/adt/age_global_graph.c" 3 4
               1
# 223 "src/backend/utils/adt/age_global_graph.c"
               ), (*((&is_null)) = 
# 223 "src/backend/utils/adt/age_global_graph.c" 3 4
               0
# 223 "src/backend/utils/adt/age_global_graph.c"
               ), (!(((tuple))->t_data->t_infomask & 0x0001)) ? ( (&(((tupdesc)))->attrs[(((1))-1)])->attcacheoff >= 0 ? ( ( (((&(((tupdesc)))->attrs[(((1))-1)]))->attbyval) ? ( (((&(((tupdesc)))->attrs[(((1))-1)]))->attlen) == (int) sizeof(Datum) ? *((Datum *)((char *) ((tuple))->t_data + ((tuple))->t_data->t_hoff + (&(((tupdesc)))->attrs[(((1))-1)])->attcacheoff)) : ( (((&(((tupdesc)))->attrs[(((1))-1)]))->attlen) == (int) sizeof(int32) ? ((Datum) (*((int32 *)((char *) ((tuple))->t_data + ((tuple))->t_data->t_hoff + (&(((tupdesc)))->attrs[(((1))-1)])->attcacheoff)))) : ( (((&(((tupdesc)))->attrs[(((1))-1)]))->attlen) == (int) sizeof(int16) ? ((Datum) (*((int16 *)((char *) ((tuple))->t_data + ((tuple))->t_data->t_hoff + (&(((tupdesc)))->attrs[(((1))-1)])->attcacheoff)))) : ( ((void)
# 223 "src/backend/utils/adt/age_global_graph.c" 3 4
               1
# 223 "src/backend/utils/adt/age_global_graph.c"
               ), ((Datum) (*((char *)((char *) ((tuple))->t_data + ((tuple))->t_data->t_hoff + (&(((tupdesc)))->attrs[(((1))-1)])->attcacheoff)))) ) ) ) ) : ((Datum) ((char *) ((char *) ((tuple))->t_data + ((tuple))->t_data->t_hoff + (&(((tupdesc)))->attrs[(((1))-1)])->attcacheoff))) ) ) : nocachegetattr(((tuple)), ((1)), ((tupdesc))) ) : ( (!((((tuple))->t_data->t_bits)[(((1))-1) >> 3] & (1 << ((((1))-1) & 0x07)))) ? ( (*((&is_null)) = 
# 223 "src/backend/utils/adt/age_global_graph.c" 3 4
               1
# 223 "src/backend/utils/adt/age_global_graph.c"
               ), (Datum)
# 223 "src/backend/utils/adt/age_global_graph.c" 3 4
               ((void *)0) 
# 223 "src/backend/utils/adt/age_global_graph.c"
               ) : ( nocachegetattr(((tuple)), ((1)), ((tupdesc))) ) ) ) ) : heap_getsysattr((tuple), (1), (tupdesc), (&is_null)) ))))
                                                    ;
        ((void)
# 225 "src/backend/utils/adt/age_global_graph.c" 3 4
       1
# 225 "src/backend/utils/adt/age_global_graph.c"
       );

        labels = lappend(labels, label);
    }


    heap_endscan(scan_desc);
    relation_close(ag_label,5);

    return labels;
}





static 
# 241 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 241 "src/backend/utils/adt/age_global_graph.c"
           insert_edge(GRAPH_global_context *ggctx, graphid edge_id,
                        Datum edge_properties, graphid start_vertex_id,
                        graphid end_vertex_id, Oid edge_label_table_oid)
{
    edge_entry *value = 
# 245 "src/backend/utils/adt/age_global_graph.c" 3 4
                       ((void *)0)
# 245 "src/backend/utils/adt/age_global_graph.c"
                           ;
    
# 246 "src/backend/utils/adt/age_global_graph.c" 3 4
   _Bool 
# 246 "src/backend/utils/adt/age_global_graph.c"
        found = 
# 246 "src/backend/utils/adt/age_global_graph.c" 3 4
                0
# 246 "src/backend/utils/adt/age_global_graph.c"
                     ;


    value = (edge_entry *)hash_search(ggctx->edge_hashtable, (void *)&edge_id,
                                      HASH_ENTER, &found);






    if (found || value == 
# 257 "src/backend/utils/adt/age_global_graph.c" 3 4
                         ((void *)0)
# 257 "src/backend/utils/adt/age_global_graph.c"
                             )
    {
        return 
# 259 "src/backend/utils/adt/age_global_graph.c" 3 4
              0
# 259 "src/backend/utils/adt/age_global_graph.c"
                   ;
    }


    do { void *_vstart = (void *) (value); int _val = (0); Size _len = (sizeof(edge_entry)); if ((((uintptr_t) _vstart) & (sizeof(long) - 1)) == 0 && (_len & (sizeof(long) - 1)) == 0 && _val == 0 && _len <= 1024 && 1024 != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0);





    value->edge_id = edge_id;
    value->edge_properties = edge_properties;
    value->start_vertex_id = start_vertex_id;
    value->end_vertex_id = end_vertex_id;
    value->edge_label_table_oid = edge_label_table_oid;


    ggctx->num_loaded_edges++;

    return 
# 278 "src/backend/utils/adt/age_global_graph.c" 3 4
          1
# 278 "src/backend/utils/adt/age_global_graph.c"
              ;
}





static 
# 285 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 285 "src/backend/utils/adt/age_global_graph.c"
           insert_vertex_entry(GRAPH_global_context *ggctx, graphid vertex_id,
                                Oid vertex_label_table_oid,
                                Datum vertex_properties)
{
    vertex_entry *ve = 
# 289 "src/backend/utils/adt/age_global_graph.c" 3 4
                      ((void *)0)
# 289 "src/backend/utils/adt/age_global_graph.c"
                          ;
    
# 290 "src/backend/utils/adt/age_global_graph.c" 3 4
   _Bool 
# 290 "src/backend/utils/adt/age_global_graph.c"
        found = 
# 290 "src/backend/utils/adt/age_global_graph.c" 3 4
                0
# 290 "src/backend/utils/adt/age_global_graph.c"
                     ;


    ve = (vertex_entry *)hash_search(ggctx->vertex_hashtable,
                                     (void *)&vertex_id, HASH_ENTER, &found);


    if (found)
    {
        return 
# 299 "src/backend/utils/adt/age_global_graph.c" 3 4
              0
# 299 "src/backend/utils/adt/age_global_graph.c"
                   ;
    }


    do { void *_vstart = (void *) (ve); int _val = (0); Size _len = (sizeof(vertex_entry)); if ((((uintptr_t) _vstart) & (sizeof(long) - 1)) == 0 && (_len & (sizeof(long) - 1)) == 0 && _val == 0 && _len <= 1024 && 1024 != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0);





    ve->vertex_id = vertex_id;

    ve->vertex_label_table_oid = vertex_label_table_oid;

    ve->vertex_properties = vertex_properties;

    ve->edges_in = 
# 315 "src/backend/utils/adt/age_global_graph.c" 3 4
                  ((void *)0)
# 315 "src/backend/utils/adt/age_global_graph.c"
                      ;
    ve->edges_out = 
# 316 "src/backend/utils/adt/age_global_graph.c" 3 4
                   ((void *)0)
# 316 "src/backend/utils/adt/age_global_graph.c"
                       ;
    ve->edges_self = 
# 317 "src/backend/utils/adt/age_global_graph.c" 3 4
                    ((void *)0)
# 317 "src/backend/utils/adt/age_global_graph.c"
                        ;


    ggctx->vertices = append_graphid(ggctx->vertices, vertex_id);


    ggctx->num_loaded_vertices++;

    return 
# 325 "src/backend/utils/adt/age_global_graph.c" 3 4
          1
# 325 "src/backend/utils/adt/age_global_graph.c"
              ;
}





static 
# 332 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 332 "src/backend/utils/adt/age_global_graph.c"
           insert_vertex_edge(GRAPH_global_context *ggctx,
                               graphid start_vertex_id, graphid end_vertex_id,
                               graphid edge_id)
{
    vertex_entry *value = 
# 336 "src/backend/utils/adt/age_global_graph.c" 3 4
                         ((void *)0)
# 336 "src/backend/utils/adt/age_global_graph.c"
                             ;
    
# 337 "src/backend/utils/adt/age_global_graph.c" 3 4
   _Bool 
# 337 "src/backend/utils/adt/age_global_graph.c"
        found = 
# 337 "src/backend/utils/adt/age_global_graph.c" 3 4
                0
# 337 "src/backend/utils/adt/age_global_graph.c"
                     ;
    
# 338 "src/backend/utils/adt/age_global_graph.c" 3 4
   _Bool 
# 338 "src/backend/utils/adt/age_global_graph.c"
        is_selfloop = 
# 338 "src/backend/utils/adt/age_global_graph.c" 3 4
                      0
# 338 "src/backend/utils/adt/age_global_graph.c"
                           ;


    is_selfloop = (start_vertex_id == end_vertex_id);


    value = (vertex_entry *)hash_search(ggctx->vertex_hashtable,
                                        (void *)&start_vertex_id, HASH_FIND,
                                        &found);

    ((void)
# 348 "src/backend/utils/adt/age_global_graph.c" 3 4
   1
# 348 "src/backend/utils/adt/age_global_graph.c"
   );
    if (!found)
    {
        return found;
    }


    if (is_selfloop)
    {
        value->edges_self = append_graphid(value->edges_self, edge_id);
        return found;
    }


    value->edges_out = append_graphid(value->edges_out, edge_id);


    value = (vertex_entry *)hash_search(ggctx->vertex_hashtable,
                                        (void *)&end_vertex_id, HASH_FIND,
                                        &found);

    ((void)
# 369 "src/backend/utils/adt/age_global_graph.c" 3 4
   1
# 369 "src/backend/utils/adt/age_global_graph.c"
   );
    if (!found)
    {
        return found;
    }


    value->edges_in = append_graphid(value->edges_in, edge_id);

    return found;
}


static void load_vertex_hashtable(GRAPH_global_context *ggctx)
{
    Oid graph_oid;
    Oid graph_namespace_oid;
    Snapshot snapshot;
    List *vertex_label_names = ((List *) 
# 387 "src/backend/utils/adt/age_global_graph.c" 3 4
                              ((void *)0)
# 387 "src/backend/utils/adt/age_global_graph.c"
                              );
    ListCell *lc;


    graph_oid = ggctx->graph_oid;
    graph_namespace_oid = get_namespace_oid(ggctx->graph_name, 
# 392 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                              0
# 392 "src/backend/utils/adt/age_global_graph.c"
                                                                   );

    snapshot = GetActiveSnapshot();

    vertex_label_names = get_ag_labels_names(snapshot, graph_oid,
                                             'v');

    for ((lc) = list_head(vertex_label_names); (lc) != 
# 399 "src/backend/utils/adt/age_global_graph.c" 3 4
   ((void *)0)
# 399 "src/backend/utils/adt/age_global_graph.c"
   ; (lc) = ((lc)->next))
    {
        Relation graph_vertex_label;
        HeapScanDesc scan_desc;
        HeapTuple tuple;
        char *vertex_label_name;
        Oid vertex_label_table_oid;
        TupleDesc tupdesc;


        vertex_label_name = ((lc)->data.ptr_value);

        vertex_label_table_oid = get_relname_relid(vertex_label_name,
                                                   graph_namespace_oid);

        graph_vertex_label = heap_open(vertex_label_table_oid, 5);
        scan_desc = heap_beginscan(graph_vertex_label, snapshot, 0, 
# 415 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                                   ((void *)0)
# 415 "src/backend/utils/adt/age_global_graph.c"
                                                                       );

        tupdesc = ((graph_vertex_label)->rd_att);

        if (tupdesc->natts != 2)
        {
            do { if (errstart(20, "src/backend/utils/adt/age_global_graph.c", 421, __func__, 
# 421 "src/backend/utils/adt/age_global_graph.c" 3 4
           ((void *)0)
# 421 "src/backend/utils/adt/age_global_graph.c"
           )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('P') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), errmsg("Invalid number of attributes for %s.%s", ggctx->graph_name, vertex_label_name)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)


                                                            ;
        }

        while((tuple = heap_getnext(scan_desc, ForwardScanDirection)) != 
# 427 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                                        ((void *)0)
# 427 "src/backend/utils/adt/age_global_graph.c"
                                                                            )
        {
            graphid vertex_id;
            Datum vertex_properties;
            
# 431 "src/backend/utils/adt/age_global_graph.c" 3 4
           _Bool 
# 431 "src/backend/utils/adt/age_global_graph.c"
                inserted = 
# 431 "src/backend/utils/adt/age_global_graph.c" 3 4
                           0
# 431 "src/backend/utils/adt/age_global_graph.c"
                                ;


            ((void)
# 434 "src/backend/utils/adt/age_global_graph.c" 3 4
           1
# 434 "src/backend/utils/adt/age_global_graph.c"
           );

            vertex_id = ((int64) (column_get_datum(tupdesc, tuple, 0, "id", get_GRAPHIDOID(), 
# 436 "src/backend/utils/adt/age_global_graph.c" 3 4
                       1
# 436 "src/backend/utils/adt/age_global_graph.c"
                       )))
                                                                         ;

            vertex_properties = column_get_datum(tupdesc, tuple, 1,
                                                 "properties", get_AGTYPEOID(), 
# 440 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                                         1
# 440 "src/backend/utils/adt/age_global_graph.c"
                                                                             );


            inserted = insert_vertex_entry(ggctx, vertex_id,
                                           vertex_label_table_oid,
                                           vertex_properties);


            if (!inserted)
            {
                 do { elog_start("src/backend/utils/adt/age_global_graph.c", 450, __func__); elog_finish(20, "insert_vertex_entry: failed due to duplicate"); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0);
            }
        }


        heap_endscan(scan_desc);
        relation_close(graph_vertex_label,5);
    }
}





static void load_GRAPH_global_hashtables(GRAPH_global_context *ggctx)
{

    ggctx->num_loaded_vertices = 0;
    ggctx->num_loaded_edges = 0;


    load_vertex_hashtable(ggctx);


    load_edge_hashtable(ggctx);
}





static void load_edge_hashtable(GRAPH_global_context *ggctx)
{
    Oid graph_oid;
    Oid graph_namespace_oid;
    Snapshot snapshot;
    List *edge_label_names = ((List *) 
# 486 "src/backend/utils/adt/age_global_graph.c" 3 4
                            ((void *)0)
# 486 "src/backend/utils/adt/age_global_graph.c"
                            );
    ListCell *lc;


    graph_oid = ggctx->graph_oid;
    graph_namespace_oid = get_namespace_oid(ggctx->graph_name, 
# 491 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                              0
# 491 "src/backend/utils/adt/age_global_graph.c"
                                                                   );

    snapshot = GetActiveSnapshot();

    edge_label_names = get_ag_labels_names(snapshot, graph_oid,
                                           'e');

    for ((lc) = list_head(edge_label_names); (lc) != 
# 498 "src/backend/utils/adt/age_global_graph.c" 3 4
   ((void *)0)
# 498 "src/backend/utils/adt/age_global_graph.c"
   ; (lc) = ((lc)->next))
    {
        Relation graph_edge_label;
        HeapScanDesc scan_desc;
        HeapTuple tuple;
        char *edge_label_name;
        Oid edge_label_table_oid;
        TupleDesc tupdesc;


        edge_label_name = ((lc)->data.ptr_value);

        edge_label_table_oid = get_relname_relid(edge_label_name,
                                                 graph_namespace_oid);

        graph_edge_label = heap_open(edge_label_table_oid, 5);
        scan_desc = heap_beginscan(graph_edge_label, snapshot, 0, 
# 514 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                                 ((void *)0)
# 514 "src/backend/utils/adt/age_global_graph.c"
                                                                     );

        tupdesc = ((graph_edge_label)->rd_att);

        if (tupdesc->natts != 4)
        {
            do { if (errstart(20, "src/backend/utils/adt/age_global_graph.c", 520, __func__, 
# 520 "src/backend/utils/adt/age_global_graph.c" 3 4
           ((void *)0)
# 520 "src/backend/utils/adt/age_global_graph.c"
           )) errfinish (errcode((((('4') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('P') - '0') & 0x3F) << 12) + (((('0') - '0') & 0x3F) << 18) + (((('1') - '0') & 0x3F) << 24))), errmsg("Invalid number of attributes for %s.%s", ggctx->graph_name, edge_label_name)); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)


                                                          ;
        }

        while((tuple = heap_getnext(scan_desc, ForwardScanDirection)) != 
# 526 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                                        ((void *)0)
# 526 "src/backend/utils/adt/age_global_graph.c"
                                                                            )
        {
            graphid edge_id;
            graphid edge_vertex_start_id;
            graphid edge_vertex_end_id;
            Datum edge_properties;
            
# 532 "src/backend/utils/adt/age_global_graph.c" 3 4
           _Bool 
# 532 "src/backend/utils/adt/age_global_graph.c"
                inserted = 
# 532 "src/backend/utils/adt/age_global_graph.c" 3 4
                           0
# 532 "src/backend/utils/adt/age_global_graph.c"
                                ;


            ((void)
# 535 "src/backend/utils/adt/age_global_graph.c" 3 4
           1
# 535 "src/backend/utils/adt/age_global_graph.c"
           );

            edge_id = ((int64) (column_get_datum(tupdesc, tuple, 0, "id", get_GRAPHIDOID(), 
# 537 "src/backend/utils/adt/age_global_graph.c" 3 4
                     1
# 537 "src/backend/utils/adt/age_global_graph.c"
                     )))
                                                                       ;

            edge_vertex_start_id = ((int64) (column_get_datum(tupdesc, tuple, 1, "start_id", get_GRAPHIDOID(), 
# 540 "src/backend/utils/adt/age_global_graph.c" 3 4
                                  1
# 540 "src/backend/utils/adt/age_global_graph.c"
                                  )))



                                                                        ;

            edge_vertex_end_id = ((int64) (column_get_datum(tupdesc, tuple, 2, "end_id", get_GRAPHIDOID(), 
# 546 "src/backend/utils/adt/age_global_graph.c" 3 4
                                1
# 546 "src/backend/utils/adt/age_global_graph.c"
                                )))


                                                                      ;

            edge_properties = column_get_datum(tupdesc, tuple, 3, "properties",
                                               get_AGTYPEOID(), 
# 552 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                         1
# 552 "src/backend/utils/adt/age_global_graph.c"
                                                             );


            inserted = insert_edge(ggctx, edge_id, edge_properties,
                                   edge_vertex_start_id, edge_vertex_end_id,
                                   edge_label_table_oid);


            if (!inserted)
            {
                 do { elog_start("src/backend/utils/adt/age_global_graph.c", 562, __func__); elog_finish(20, "insert_edge: failed to insert"); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0);
            }


            inserted = insert_vertex_edge(ggctx, edge_vertex_start_id,
                                          edge_vertex_end_id, edge_id);

            if (!inserted)
            {
                 do { elog_start("src/backend/utils/adt/age_global_graph.c", 571, __func__); elog_finish(20, "insert_vertex_edge: failed to insert"); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0);
            }
        }


        heap_endscan(scan_desc);
        relation_close(graph_edge_label,5);
    }
}






static void freeze_GRAPH_global_hashtables(GRAPH_global_context *ggctx)
{
    hash_freeze(ggctx->vertex_hashtable);
    hash_freeze(ggctx->edge_hashtable);
}





static void free_specific_GRAPH_global_context(GRAPH_global_context *ggctx)
{
    GraphIdNode *curr_vertex = 
# 598 "src/backend/utils/adt/age_global_graph.c" 3 4
                              ((void *)0)
# 598 "src/backend/utils/adt/age_global_graph.c"
                                  ;


    if (ggctx == 
# 601 "src/backend/utils/adt/age_global_graph.c" 3 4
                ((void *)0)
# 601 "src/backend/utils/adt/age_global_graph.c"
                    )
    {
        return;
    }


    pfree(ggctx->graph_name);
    ggctx->graph_name = 
# 608 "src/backend/utils/adt/age_global_graph.c" 3 4
                       ((void *)0)
# 608 "src/backend/utils/adt/age_global_graph.c"
                           ;

    ggctx->graph_oid = ((Oid) 0);
    ggctx->next = 
# 611 "src/backend/utils/adt/age_global_graph.c" 3 4
                 ((void *)0)
# 611 "src/backend/utils/adt/age_global_graph.c"
                     ;


    curr_vertex = peek_stack_head(ggctx->vertices);
    while (curr_vertex != 
# 615 "src/backend/utils/adt/age_global_graph.c" 3 4
                         ((void *)0)
# 615 "src/backend/utils/adt/age_global_graph.c"
                             )
    {
        GraphIdNode *next_vertex = 
# 617 "src/backend/utils/adt/age_global_graph.c" 3 4
                                  ((void *)0)
# 617 "src/backend/utils/adt/age_global_graph.c"
                                      ;
        vertex_entry *value = 
# 618 "src/backend/utils/adt/age_global_graph.c" 3 4
                             ((void *)0)
# 618 "src/backend/utils/adt/age_global_graph.c"
                                 ;
        
# 619 "src/backend/utils/adt/age_global_graph.c" 3 4
       _Bool 
# 619 "src/backend/utils/adt/age_global_graph.c"
            found = 
# 619 "src/backend/utils/adt/age_global_graph.c" 3 4
                    0
# 619 "src/backend/utils/adt/age_global_graph.c"
                         ;
        graphid vertex_id;


        next_vertex = next_GraphIdNode(curr_vertex);


        vertex_id = get_graphid(curr_vertex);


        value = (vertex_entry *)hash_search(ggctx->vertex_hashtable,
                                            (void *)&vertex_id, HASH_FIND,
                                            &found);

        ((void)
# 633 "src/backend/utils/adt/age_global_graph.c" 3 4
       1
# 633 "src/backend/utils/adt/age_global_graph.c"
       );


        free_ListGraphId(value->edges_in);
        free_ListGraphId(value->edges_out);
        free_ListGraphId(value->edges_self);

        value->edges_in = 
# 640 "src/backend/utils/adt/age_global_graph.c" 3 4
                         ((void *)0)
# 640 "src/backend/utils/adt/age_global_graph.c"
                             ;
        value->edges_out = 
# 641 "src/backend/utils/adt/age_global_graph.c" 3 4
                          ((void *)0)
# 641 "src/backend/utils/adt/age_global_graph.c"
                              ;
        value->edges_self = 
# 642 "src/backend/utils/adt/age_global_graph.c" 3 4
                           ((void *)0)
# 642 "src/backend/utils/adt/age_global_graph.c"
                               ;


        curr_vertex = next_vertex;
    }


    free_ListGraphId(ggctx->vertices);
    ggctx->vertices = 
# 650 "src/backend/utils/adt/age_global_graph.c" 3 4
                     ((void *)0)
# 650 "src/backend/utils/adt/age_global_graph.c"
                         ;


    hash_destroy(ggctx->vertex_hashtable);
    hash_destroy(ggctx->edge_hashtable);

    ggctx->vertex_hashtable = 
# 656 "src/backend/utils/adt/age_global_graph.c" 3 4
                             ((void *)0)
# 656 "src/backend/utils/adt/age_global_graph.c"
                                 ;
    ggctx->edge_hashtable = 
# 657 "src/backend/utils/adt/age_global_graph.c" 3 4
                           ((void *)0)
# 657 "src/backend/utils/adt/age_global_graph.c"
                               ;


    pfree(ggctx);
    ggctx = 
# 661 "src/backend/utils/adt/age_global_graph.c" 3 4
           ((void *)0)
# 661 "src/backend/utils/adt/age_global_graph.c"
               ;
}







GRAPH_global_context *manage_GRAPH_global_contexts(char *graph_name,
                                                   Oid graph_oid)
{
    GRAPH_global_context *new_ggctx = 
# 673 "src/backend/utils/adt/age_global_graph.c" 3 4
                                     ((void *)0)
# 673 "src/backend/utils/adt/age_global_graph.c"
                                         ;
    GRAPH_global_context *curr_ggctx = 
# 674 "src/backend/utils/adt/age_global_graph.c" 3 4
                                      ((void *)0)
# 674 "src/backend/utils/adt/age_global_graph.c"
                                          ;
    GRAPH_global_context *prev_ggctx = 
# 675 "src/backend/utils/adt/age_global_graph.c" 3 4
                                      ((void *)0)
# 675 "src/backend/utils/adt/age_global_graph.c"
                                          ;
    MemoryContext oldctx = 
# 676 "src/backend/utils/adt/age_global_graph.c" 3 4
                          ((void *)0)
# 676 "src/backend/utils/adt/age_global_graph.c"
                              ;


    oldctx = MemoryContextSwitchTo(TopMemoryContext);
# 693 "src/backend/utils/adt/age_global_graph.c"
    prev_ggctx = 
# 693 "src/backend/utils/adt/age_global_graph.c" 3 4
                ((void *)0)
# 693 "src/backend/utils/adt/age_global_graph.c"
                    ;
    curr_ggctx = global_graph_contexts;
    while (curr_ggctx != 
# 695 "src/backend/utils/adt/age_global_graph.c" 3 4
                        ((void *)0)
# 695 "src/backend/utils/adt/age_global_graph.c"
                            )
    {
        GRAPH_global_context *next_ggctx = curr_ggctx->next;


        if (is_ggctx_invalid(curr_ggctx))
        {





            if (prev_ggctx == 
# 707 "src/backend/utils/adt/age_global_graph.c" 3 4
                             ((void *)0)
# 707 "src/backend/utils/adt/age_global_graph.c"
                                 )
            {
                global_graph_contexts = next_ggctx;
            }
            else
            {
                prev_ggctx->next = curr_ggctx->next;
            }


            free_specific_GRAPH_global_context(curr_ggctx);
        }
        else
        {
            prev_ggctx = curr_ggctx;
        }


        curr_ggctx = next_ggctx;
    }


    curr_ggctx = global_graph_contexts;
    while (curr_ggctx != 
# 730 "src/backend/utils/adt/age_global_graph.c" 3 4
                        ((void *)0)
# 730 "src/backend/utils/adt/age_global_graph.c"
                            )
    {
        if (curr_ggctx->graph_oid == graph_oid)
        {

            MemoryContextSwitchTo(oldctx);

            return curr_ggctx;
        }
        curr_ggctx = curr_ggctx->next;
    }


    new_ggctx = palloc0(sizeof(GRAPH_global_context));

    if (global_graph_contexts != 
# 745 "src/backend/utils/adt/age_global_graph.c" 3 4
                                ((void *)0)
# 745 "src/backend/utils/adt/age_global_graph.c"
                                    )
    {
        new_ggctx->next = global_graph_contexts;
    }
    else
    {
        new_ggctx->next = 
# 751 "src/backend/utils/adt/age_global_graph.c" 3 4
                         ((void *)0)
# 751 "src/backend/utils/adt/age_global_graph.c"
                             ;
    }


    global_graph_contexts = new_ggctx;


    new_ggctx->graph_name = pstrdup(graph_name);
    new_ggctx->graph_oid = graph_oid;


    new_ggctx->xmin = GetActiveSnapshot()->xmin;
    new_ggctx->xmax = GetActiveSnapshot()->xmax;
    new_ggctx->curcid = GetActiveSnapshot()->curcid;


    new_ggctx->vertices = 
# 767 "src/backend/utils/adt/age_global_graph.c" 3 4
                         ((void *)0)
# 767 "src/backend/utils/adt/age_global_graph.c"
                             ;


    create_GRAPH_global_hashtables(new_ggctx);
    load_GRAPH_global_hashtables(new_ggctx);
    freeze_GRAPH_global_hashtables(new_ggctx);


    MemoryContextSwitchTo(oldctx);

    return new_ggctx;
}





static 
# 784 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 784 "src/backend/utils/adt/age_global_graph.c"
           delete_GRAPH_global_contexts(void)
{
    GRAPH_global_context *curr_ggctx = 
# 786 "src/backend/utils/adt/age_global_graph.c" 3 4
                                      ((void *)0)
# 786 "src/backend/utils/adt/age_global_graph.c"
                                          ;
    
# 787 "src/backend/utils/adt/age_global_graph.c" 3 4
   _Bool 
# 787 "src/backend/utils/adt/age_global_graph.c"
        retval = 
# 787 "src/backend/utils/adt/age_global_graph.c" 3 4
                 0
# 787 "src/backend/utils/adt/age_global_graph.c"
                      ;


    curr_ggctx = global_graph_contexts;


    while (curr_ggctx != 
# 793 "src/backend/utils/adt/age_global_graph.c" 3 4
                        ((void *)0)
# 793 "src/backend/utils/adt/age_global_graph.c"
                            )
    {
        GRAPH_global_context *next_ggctx = curr_ggctx->next;


        free_specific_GRAPH_global_context(curr_ggctx);


        curr_ggctx = next_ggctx;

        retval = 
# 803 "src/backend/utils/adt/age_global_graph.c" 3 4
                1
# 803 "src/backend/utils/adt/age_global_graph.c"
                    ;
    }


    global_graph_contexts = 
# 807 "src/backend/utils/adt/age_global_graph.c" 3 4
                           ((void *)0)
# 807 "src/backend/utils/adt/age_global_graph.c"
                               ;

    return retval;
}





static 
# 816 "src/backend/utils/adt/age_global_graph.c" 3 4
      _Bool 
# 816 "src/backend/utils/adt/age_global_graph.c"
           delete_specific_GRAPH_global_contexts(char *graph_name)
{
    GRAPH_global_context *prev_ggctx = 
# 818 "src/backend/utils/adt/age_global_graph.c" 3 4
                                      ((void *)0)
# 818 "src/backend/utils/adt/age_global_graph.c"
                                          ;
    GRAPH_global_context *curr_ggctx = 
# 819 "src/backend/utils/adt/age_global_graph.c" 3 4
                                      ((void *)0)
# 819 "src/backend/utils/adt/age_global_graph.c"
                                          ;
    Oid graph_oid = ((Oid) 0);

    if (graph_name == 
# 822 "src/backend/utils/adt/age_global_graph.c" 3 4
                     ((void *)0)
# 822 "src/backend/utils/adt/age_global_graph.c"
                         )
    {
        return 
# 824 "src/backend/utils/adt/age_global_graph.c" 3 4
              0
# 824 "src/backend/utils/adt/age_global_graph.c"
                   ;
    }


    graph_oid = get_graph_oid(graph_name);


    curr_ggctx = global_graph_contexts;


    while (curr_ggctx != 
# 834 "src/backend/utils/adt/age_global_graph.c" 3 4
                        ((void *)0)
# 834 "src/backend/utils/adt/age_global_graph.c"
                            )
    {
        GRAPH_global_context *next_ggctx = curr_ggctx->next;

        if (curr_ggctx->graph_oid == graph_oid)
        {





            if (prev_ggctx == 
# 845 "src/backend/utils/adt/age_global_graph.c" 3 4
                             ((void *)0)
# 845 "src/backend/utils/adt/age_global_graph.c"
                                 )
            {
                global_graph_contexts = next_ggctx;
            }
            else
            {
                prev_ggctx->next = curr_ggctx->next;
            }


            free_specific_GRAPH_global_context(curr_ggctx);


            return 
# 858 "src/backend/utils/adt/age_global_graph.c" 3 4
                  1
# 858 "src/backend/utils/adt/age_global_graph.c"
                      ;
        }


        prev_ggctx = curr_ggctx;
        curr_ggctx = next_ggctx;
    }


    return 
# 867 "src/backend/utils/adt/age_global_graph.c" 3 4
          0
# 867 "src/backend/utils/adt/age_global_graph.c"
               ;
}






vertex_entry *get_vertex_entry(GRAPH_global_context *ggctx, graphid vertex_id)
{
    vertex_entry *ve = 
# 877 "src/backend/utils/adt/age_global_graph.c" 3 4
                      ((void *)0)
# 877 "src/backend/utils/adt/age_global_graph.c"
                          ;
    
# 878 "src/backend/utils/adt/age_global_graph.c" 3 4
   _Bool 
# 878 "src/backend/utils/adt/age_global_graph.c"
        found = 
# 878 "src/backend/utils/adt/age_global_graph.c" 3 4
                0
# 878 "src/backend/utils/adt/age_global_graph.c"
                     ;


    ve = (vertex_entry *)hash_search(ggctx->vertex_hashtable,
                                     (void *)&vertex_id, HASH_FIND, &found);
    return ve;
}


edge_entry *get_edge_entry(GRAPH_global_context *ggctx, graphid edge_id)
{
    edge_entry *ee = 
# 889 "src/backend/utils/adt/age_global_graph.c" 3 4
                    ((void *)0)
# 889 "src/backend/utils/adt/age_global_graph.c"
                        ;
    
# 890 "src/backend/utils/adt/age_global_graph.c" 3 4
   _Bool 
# 890 "src/backend/utils/adt/age_global_graph.c"
        found = 
# 890 "src/backend/utils/adt/age_global_graph.c" 3 4
                0
# 890 "src/backend/utils/adt/age_global_graph.c"
                     ;


    ee = (edge_entry *)hash_search(ggctx->edge_hashtable, (void *)&edge_id,
                                   HASH_FIND, &found);

    ((void)
# 896 "src/backend/utils/adt/age_global_graph.c" 3 4
   1
# 896 "src/backend/utils/adt/age_global_graph.c"
   );

    return ee;
}





GRAPH_global_context *find_GRAPH_global_context(Oid graph_oid)
{
    GRAPH_global_context *ggctx = 
# 907 "src/backend/utils/adt/age_global_graph.c" 3 4
                                 ((void *)0)
# 907 "src/backend/utils/adt/age_global_graph.c"
                                     ;


    ggctx = global_graph_contexts;

    while(ggctx != 
# 912 "src/backend/utils/adt/age_global_graph.c" 3 4
                  ((void *)0)
# 912 "src/backend/utils/adt/age_global_graph.c"
                      )
    {

        if (ggctx->graph_oid == graph_oid)
        {
            return ggctx;
        }


        ggctx = ggctx->next;
    }


    return 
# 925 "src/backend/utils/adt/age_global_graph.c" 3 4
          ((void *)0)
# 925 "src/backend/utils/adt/age_global_graph.c"
              ;
}


ListGraphId *get_graph_vertices(GRAPH_global_context *ggctx)
{
    return ggctx->vertices;
}


graphid get_vertex_entry_id(vertex_entry *ve)
{
    return ve->vertex_id;
}

ListGraphId *get_vertex_entry_edges_in(vertex_entry *ve)
{
    return ve->edges_in;
}

ListGraphId *get_vertex_entry_edges_out(vertex_entry *ve)
{
    return ve->edges_out;
}

ListGraphId *get_vertex_entry_edges_self(vertex_entry *ve)
{
    return ve->edges_self;
}


Oid get_vertex_entry_label_table_oid(vertex_entry *ve)
{
    return ve->vertex_label_table_oid;
}

Datum get_vertex_entry_properties(vertex_entry *ve)
{
    return ve->vertex_properties;
}


graphid get_edge_entry_id(edge_entry *ee)
{
    return ee->edge_id;
}

Oid get_edge_entry_label_table_oid(edge_entry *ee)
{
    return ee->edge_label_table_oid;
}

Datum get_edge_entry_properties(edge_entry *ee)
{
    return ee->edge_properties;
}

graphid get_edge_entry_start_vertex_id(edge_entry *ee)
{
    return ee->start_vertex_id;
}

graphid get_edge_entry_end_vertex_id(edge_entry *ee)
{
    return ee->end_vertex_id;
}




extern Datum age_delete_global_graphs(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_age_delete_global_graphs(void); const Pg_finfo_record * pg_finfo_age_delete_global_graphs (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum age_delete_global_graphs(FunctionCallInfo fcinfo)
{
    agtype_value *agtv_temp = 
# 999 "src/backend/utils/adt/age_global_graph.c" 3 4
                             ((void *)0)
# 999 "src/backend/utils/adt/age_global_graph.c"
                                 ;
    
# 1000 "src/backend/utils/adt/age_global_graph.c" 3 4
   _Bool 
# 1000 "src/backend/utils/adt/age_global_graph.c"
        success = 
# 1000 "src/backend/utils/adt/age_global_graph.c" 3 4
                  0
# 1000 "src/backend/utils/adt/age_global_graph.c"
                       ;


    if (!(fcinfo->argnull[0]))
    {
        agtv_temp = get_agtype_value("delete_global_graphs",
                                     ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0]))))),
                                     AGTV_STRING, 
# 1007 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                 0
# 1007 "src/backend/utils/adt/age_global_graph.c"
                                                      );
    }

    if (agtv_temp == 
# 1010 "src/backend/utils/adt/age_global_graph.c" 3 4
                    ((void *)0) 
# 1010 "src/backend/utils/adt/age_global_graph.c"
                         || agtv_temp->type == AGTV_NULL)
    {
        success = delete_GRAPH_global_contexts();
    }
    else if (agtv_temp->type == AGTV_STRING)
    {
        char *graph_name = 
# 1016 "src/backend/utils/adt/age_global_graph.c" 3 4
                          ((void *)0)
# 1016 "src/backend/utils/adt/age_global_graph.c"
                              ;

        graph_name = agtv_temp->val.string.val;
        success = delete_specific_GRAPH_global_contexts(graph_name);
    }
    else
    {
        do { if (errstart(20, "src/backend/utils/adt/age_global_graph.c", 1023, __func__, 
# 1023 "src/backend/utils/adt/age_global_graph.c" 3 4
       ((void *)0)
# 1023 "src/backend/utils/adt/age_global_graph.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("delete_global_graphs: invalid graph name type")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                                                          ;
    }

    return ((Datum) ((success) ? 1 : 0));
}


extern Datum age_vertex_stats(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_age_vertex_stats(void); const Pg_finfo_record * pg_finfo_age_vertex_stats (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum age_vertex_stats(FunctionCallInfo fcinfo)
{
    GRAPH_global_context *ggctx = 
# 1036 "src/backend/utils/adt/age_global_graph.c" 3 4
                                 ((void *)0)
# 1036 "src/backend/utils/adt/age_global_graph.c"
                                     ;
    vertex_entry *ve = 
# 1037 "src/backend/utils/adt/age_global_graph.c" 3 4
                      ((void *)0)
# 1037 "src/backend/utils/adt/age_global_graph.c"
                          ;
    ListGraphId *edges = 
# 1038 "src/backend/utils/adt/age_global_graph.c" 3 4
                        ((void *)0)
# 1038 "src/backend/utils/adt/age_global_graph.c"
                            ;
    agtype_value *agtv_vertex = 
# 1039 "src/backend/utils/adt/age_global_graph.c" 3 4
                               ((void *)0)
# 1039 "src/backend/utils/adt/age_global_graph.c"
                                   ;
    agtype_value *agtv_temp = 
# 1040 "src/backend/utils/adt/age_global_graph.c" 3 4
                             ((void *)0)
# 1040 "src/backend/utils/adt/age_global_graph.c"
                                 ;
    agtype_value agtv_integer;
    agtype_in_state result;
    char *graph_name = 
# 1043 "src/backend/utils/adt/age_global_graph.c" 3 4
                      ((void *)0)
# 1043 "src/backend/utils/adt/age_global_graph.c"
                          ;
    Oid graph_oid = ((Oid) 0);
    graphid vid = 0;
    int64 self_loops = 0;
    int64 degree = 0;


    if ((fcinfo->argnull[0]))
    {
        do { if (errstart(20, "src/backend/utils/adt/age_global_graph.c", 1052, __func__, 
# 1052 "src/backend/utils/adt/age_global_graph.c" 3 4
       ((void *)0)
# 1052 "src/backend/utils/adt/age_global_graph.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("vertex_stats: graph name cannot be NULL")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                                                    ;
    }


    agtv_temp = get_agtype_value("vertex_stats", ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[0]))))),
                                 AGTV_STRING, 
# 1059 "src/backend/utils/adt/age_global_graph.c" 3 4
                                             1
# 1059 "src/backend/utils/adt/age_global_graph.c"
                                                 );


    if ((fcinfo->argnull[1]))
    {
        do { if (errstart(20, "src/backend/utils/adt/age_global_graph.c", 1064, __func__, 
# 1064 "src/backend/utils/adt/age_global_graph.c" 3 4
       ((void *)0)
# 1064 "src/backend/utils/adt/age_global_graph.c"
       )) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("vertex_stats: vertex cannot be NULL")); if (__builtin_constant_p(20) && (20) >= 20) __builtin_unreachable(); } while(0)

                                                                ;
    }


    agtv_vertex = get_agtype_value("vertex_stats", ((agtype *)pg_detoast_datum((struct varlena *) ((Pointer) ((fcinfo->arg[1]))))),
                                   AGTV_VERTEX, 
# 1071 "src/backend/utils/adt/age_global_graph.c" 3 4
                                               1
# 1071 "src/backend/utils/adt/age_global_graph.c"
                                                   );

    graph_name = pnstrdup(agtv_temp->val.string.val,
                          agtv_temp->val.string.len);


    graph_oid = get_graph_oid(graph_name);





    ggctx = manage_GRAPH_global_contexts(graph_name, graph_oid);


    pfree(graph_name);


    agtv_temp = get_agtype_value_object_value(agtv_vertex, "id", sizeof("id") - 1);
    vid = agtv_temp->val.int_value;


    ve = get_vertex_entry(ggctx, vid);


    memset(&result, 0, sizeof(agtype_in_state));


    result.res = push_agtype_value(&result.parse_state, WAGT_BEGIN_OBJECT,
                                   
# 1100 "src/backend/utils/adt/age_global_graph.c" 3 4
                                  ((void *)0)
# 1100 "src/backend/utils/adt/age_global_graph.c"
                                      );

    result.res = push_agtype_value(&result.parse_state, WAGT_KEY,
                                   string_to_agtype_value("id"));
    result.res = push_agtype_value(&result.parse_state, WAGT_VALUE, agtv_temp);


    agtv_temp = get_agtype_value_object_value(agtv_vertex, "label", sizeof("label") - 1);
    result.res = push_agtype_value(&result.parse_state, WAGT_KEY,
                                   string_to_agtype_value("label"));
    result.res = push_agtype_value(&result.parse_state, WAGT_VALUE, agtv_temp);


    agtv_temp = &agtv_integer;
    agtv_temp->type = AGTV_INTEGER;
    agtv_temp->val.int_value = 0;


    edges = get_vertex_entry_edges_self(ve);
    self_loops = (edges != 
# 1119 "src/backend/utils/adt/age_global_graph.c" 3 4
                          ((void *)0)
# 1119 "src/backend/utils/adt/age_global_graph.c"
                              ) ? get_list_size(edges) : 0;
    agtv_temp->val.int_value = self_loops;
    result.res = push_agtype_value(&result.parse_state, WAGT_KEY,
                                   string_to_agtype_value("self_loops"));
    result.res = push_agtype_value(&result.parse_state, WAGT_VALUE, agtv_temp);


    edges = get_vertex_entry_edges_in(ve);
    degree = (edges != 
# 1127 "src/backend/utils/adt/age_global_graph.c" 3 4
                      ((void *)0)
# 1127 "src/backend/utils/adt/age_global_graph.c"
                          ) ? get_list_size(edges) : 0;
    agtv_temp->val.int_value = degree + self_loops;
    result.res = push_agtype_value(&result.parse_state, WAGT_KEY,
                                   string_to_agtype_value("in_degree"));
    result.res = push_agtype_value(&result.parse_state, WAGT_VALUE, agtv_temp);


    edges = get_vertex_entry_edges_out(ve);
    degree = (edges != 
# 1135 "src/backend/utils/adt/age_global_graph.c" 3 4
                      ((void *)0)
# 1135 "src/backend/utils/adt/age_global_graph.c"
                          ) ? get_list_size(edges) : 0;
    agtv_temp->val.int_value = degree + self_loops;
    result.res = push_agtype_value(&result.parse_state, WAGT_KEY,
                                   string_to_agtype_value("out_degree"));
    result.res = push_agtype_value(&result.parse_state, WAGT_VALUE, agtv_temp);


    result.res = push_agtype_value(&result.parse_state, WAGT_END_OBJECT, 
# 1142 "src/backend/utils/adt/age_global_graph.c" 3 4
                                                                        ((void *)0)
# 1142 "src/backend/utils/adt/age_global_graph.c"
                                                                            );

    result.res->type = AGTV_OBJECT;

    return ((Datum) (agtype_value_to_agtype(result.res)));
}
