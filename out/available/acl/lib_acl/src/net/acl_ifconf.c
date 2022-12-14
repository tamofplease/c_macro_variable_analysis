#define __S_IFBLK 0060000
#define SOL_LLC 268
#define TCP_KEEPCNT 6
#define _IO_CURRENTLY_PUTTING 0x800
#define _BITS_FLOATN_COMMON_H 
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define IP_UNBLOCK_SOURCE 37
#define _BITS_SIGINFO_CONSTS_H 1
#define ACL_PROCESS_INCLUDE_H 
#define IPV6_RTHDR_TYPE_0 0
#define ACL_DNS_FLAG_CHECK_DNS_NET (1 << 2)
#define ACL_XML_S_LLT 1
#define SI_TIMER SI_TIMER
#define __SSP_STRONG__ 3
#define S_ISCHR(mode) __S_ISTYPE((mode), __S_IFCHR)
#define ACL_DB_ATOU(_str_) (_str_ ? strtoul(_str_, (char **) NULL, 10) : 0)
#define IPV6_2292HOPOPTS 3
#define ACL_BINHASH_STAT_DUPLEX_KEY 2
#define __DBL_MIN_EXP__ (-1021)
#define AF_LLC PF_LLC
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define si_timerid _sifields._timer.si_tid
#define ACL_EVENT_FD_IDLE 0
#define _BITS_SIGEVENT_CONSTS_H 1
#define __FLT32X_MAX_EXP__ 1024
#define EMULTIHOP 72
#define ACL_VBUF_FLAG_TIMEOUT (1<<2)
#define ACL_TRIGGER_BUF_SIZE 1024
#define ACL_ACCESS_INCLUDE_H 
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define PROT_NONE 0x0
#define SIOCSIFPFLAGS 0x8934
#define SIOGIFINDEX SIOCGIFINDEX
#define ACL_SPOOL_CTL_END ACL_IOCTL_CTL_END
#define ACL_DEPRECATED __attribute__((__deprecated__))
#define AF_MAX PF_MAX
#define _SC_PII _SC_PII
#define AIO_PRIO_DELTA_MAX 20
#define TCP_CONGESTION 13
#define ACL_AQUEUE_INCLUDE_H 
#define IPOPT_SECUR_CONFID 0xf135
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define __CFLOAT32 _Complex _Float32
#define FIONBIO 0x5421
#define NO_ADDRESS NO_DATA
#define IFF_SLAVE IFF_SLAVE
#define __UINT_LEAST16_MAX__ 0xffff
#define acl_myrealloc(ptr,size) acl_realloc_glue(__FILE__, __LINE__, (ptr), size)
#define ACL_RFC1035_MAXHOSTNAMESZ 256
#define IP_ROUTER_ALERT 5
#define ACL_DEPRECATED_FOR(f) __attribute__((deprecated("Use " #f " instead")))
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define TCPI_OPT_SYN_DATA 32
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define __FLT128_MAX_10_EXP__ 4932
#define TCPOPT_WINDOW 3
#define RE_DUP_MAX (0x7fff)
#define TIOCGLCKTRMIOS 0x5456
#define IP_DEFAULT_MULTICAST_TTL 1
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define ACL_MASTER_FLOW_READ 3
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define ACL_BITS_MASK_FREE(mask) acl_myfree((mask)->data)
#define LDBL_HAS_SUBNORM __LDBL_HAS_DENORM__
#define acl_fputc acl_putc
#define __F_GETSIG 11
#define ACL_VSTREAM_POPEN_EXPORT 8
#define RTLD_NOW 0x00002
#define ACL_JSON_T_OBJ (1 << 11)
#define ifr_name ifr_ifrn.ifrn_name
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define ACL_XML2_INCLUDE_H 
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __bswap_16(x) (__extension__ ({ unsigned short int __v, __x = (unsigned short int) (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_16 (__x); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))
#define CRPRNT CREPRINT
#define _SC_2_VERSION _SC_2_VERSION
#define si_fd _sifields._sigpoll.si_fd
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define _T_WCHAR_ 
#define _SC_IPV6 _SC_IPV6
#define EUNATCH 49
#define SOL_ATM 264
#define ACL_RING_APPEND(ring_in,entry_in) do { ACL_RING *ring_ptr = (ring_in), *entry_ptr = (entry_in); entry_ptr->succ = ring_ptr->succ; entry_ptr->pred = ring_ptr; entry_ptr->parent = ring_ptr->parent; ring_ptr->succ->pred = entry_ptr; ring_ptr->succ = entry_ptr; ring_ptr->parent->len++; } while (0)
#define __HAVE_COLUMN 
#define ACL_MSGIO_OPEN 6
#define ACL_VBUF_CHARAT(v,offset) ((int) (v).data[offset])
#define NI_MAXSERV 32
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define TCP_CORK 3
#define SO_KEEPALIVE 9
#define TCP_FASTOPEN_CONNECT 30
#define _NETINET_IN_H 1
#define __flexarr []
#define PF_IRDA 23
#define acl_unused __attribute__ ((__unused__))
#define acl_vstring_fgets_null(s,p) (acl_vstring_gets_null((s), (p)) == ACL_VSTREAM_EOF ? 0 : (s))
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define _IO_FLAGS2_USER_WBUF 8
#define ACL_CACHE2_INCLUDE_H 
#define si_arch _sifields._sigsys._arch
#define ACL_EHOSTDOWN EHOSTDOWN
#define ACL_API 
#define _SCHED_H 1
#define ACL_FHANDLE_O_MKDIR (1 << 2)
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define __S64_TYPE long int
#define _POSIX_PRIORITIZED_IO 200809L
#define IP_TOS 1
#define ACL_VBUF_FLAG_FIXED (1<<3)
#define __stub_fchflags 
#define ACL_MDT_FLAG_SLICE_RTGC_OFF (1 << 13)
#define IPOPT_TS_TSONLY 0
#define __SQUAD_TYPE long int
#define SIOCGIFNETMASK 0x891b
#define TCXONC 0x540A
#define SIGBUS 7
#define ACL_VBUF_FLAG_SLICE (1<<4)
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define SIOCSIFHWADDR 0x8924
#define __GNU_LIBRARY__ 6
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define sa_sigaction __sigaction_handler.sa_sigaction
#define ACL_DNS_OK_CACHE 1
#define ACL_SLICE_INCLUDE_H 
#define PTHREAD_CANCELED ((void *) -1)
#define _BITS_TIME_H 1
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define __socklen_t_defined 
#define MAXTTL 255
#define O_ACCMODE 0003
#define ILL_ILLTRP ILL_ILLTRP
#define ACL_APP_CTL_PRE_JAIL ACL_MASTER_SERVER_PRE_INIT
#define ACL_DNS_INCLUDE_H 
#define ACL_MASTER_STAT_START_OK 4
#define TIOCEXCL 0x540C
#define IPTOS_PREC_CRITIC_ECP IPTOS_CLASS_CS5
#define __TIME_T_TYPE __SYSCALL_SLONG_TYPE
#define __CHAR_BIT__ 8
#define IPTOS_MINCOST IPTOS_LOWCOST
#define __FSWORD_T_TYPE __SYSCALL_SLONG_TYPE
#define acl_debug(SECTION,LEVEL) !acl_do_debug((SECTION), (LEVEL)) ? (void) 0 : acl_msg_info
#define SIGRTMIN (__libc_current_sigrtmin ())
#define FIOASYNC 0x5452
#define IPV6_LEAVE_GROUP 21
#define _XOPEN_CRYPT 1
#define _G_HAVE_MREMAP 1
#define makedev(maj,min) __SYSMACROS_DM (makedev) gnu_dev_makedev (maj, min)
#define FIOGETOWN 0x8903
#define EAFNOSUPPORT 97
#define _BITS_LIBIO_H 1
#define SHRT_MAX __SHRT_MAX__
#define EREMCHG 78
#define ACL_IOCTL_CTL_INIT_FN 5
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define IP_HDRINCL 3
#define TIOCLINUX 0x541C
#define __ASSERT_FUNCTION __extension__ __PRETTY_FUNCTION__
#define EACCES 13
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define SIOCADDDLCI 0x8980
#define _STAT_VER_LINUX 1
#define ACL_ISASCII(c) isascii(_ACL_UCHAR_(c))
#define IFF_ALLMULTI IFF_ALLMULTI
#define ACL_XML2_S_ATTR 9
#define ACL_MSGIO_ON_MSG(id,callback,arg) do { acl_msgio_reg(NULL, id, callback, arg); } while(0)
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define IPV6_PMTUDISC_INTERFACE 4
#define TCP_ULP 31
#define DELAYTIMER_MAX 2147483647
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define EDESTADDRREQ 89
#define ACL_VSTREAM_POPEN_END 0
#define F_SHLCK 8
#define ACL_FMT_I64D "%lld"
#define DT_WHT DT_WHT
#define acl_ring_last ACL_RING_LAST
#define __WINT_MAX__ 0xffffffffU
#define ACL_FMT_I64U "%llu"
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define si_pid _sifields._kill.si_pid
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 56
#define acl_fifo_pop acl_fifo_pop_front
#define ACL_DO_GRIPE 1
#define ACL_ITERATOR_INCLUDE_H 
#define acl_ring_to_appl ACL_RING_TO_APPL
#define __FLT32_MIN_EXP__ (-125)
#define IP_TTL 2
#define TIOCM_DTR 0x002
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define ACL_VSTREAM_SET_FILE(stream_ptr,_fh) do { ACL_VSTREAM *__stream_ptr = stream_ptr; __stream_ptr->fd.h_file = _fh; } while (0)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define ACL_VSTREAM_FLAG_WRITE (1 << 1)
#define ACL_DEFINE_SUNX86_INCLUDE_H 
#define SIOCSIFHWBROADCAST 0x8937
#define __HAVE_FLOAT16 0
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define S_ISLNK(mode) __S_ISTYPE((mode), __S_IFLNK)
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define IPOPT_OPTVAL 0
#define IPV6_PATHMTU 61
#define _POSIX2_BC_DIM_MAX 2048
#define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
#define acl_vstring_fgets_nonl(s,p) (acl_vstring_gets_nonl((s), (p)) == ACL_VSTREAM_EOF ? 0 : (s))
#define EILSEQ 84
#define va_start(v,l) __builtin_va_start(v,l)
#define ACL_TOUPPER(c) toupper(_ACL_UCHAR_(c))
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ACL_MASTER_SERVER_ON_CLOSE 16
#define ACL_VSTREAM_TYPE_INET4 (1 << 6)
#define ESPIPE 29
#define SOCK_RDM SOCK_RDM
#define ACL_EINTR EINTR
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define _POSIX_TTY_NAME_MAX 9
#define S_IEXEC S_IXUSR
#define ACL_APP_CTL_EXIT_FN ACL_MASTER_SERVER_EXIT
#define PF_DECnet 12
#define __OFF_T_MATCHES_OFF64_T 1
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __stub_putmsg 
#define acl_getc acl_fgetc
#define IP_MAX_MEMBERSHIPS 20
#define _BITS_SCHED_H 1
#define ENAMETOOLONG 36
#define IN_MULTICAST(a) IN_CLASSD(a)
#define SIOCDELDLCI 0x8981
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define __WCHAR_MAX__ 0x7fffffff
#define AF_APPLETALK PF_APPLETALK
#define SIOCGIFADDR 0x8915
#define _SC_2_C_DEV _SC_2_C_DEV
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define acl_vstream_ftimeout(stream_ptr) ((stream_ptr)->flag & ACL_VSTREAM_FLAG_TIMEOUT)
#define ACL_DB_ERR_SELECT 100
#define ACL_IOSTUFF_INCLUDE_H 
#define SOL_PPPOL2TP 273
#define SIOCGIFSLAVE 0x8929
#define AF_IB PF_IB
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define TCSETS2 _IOW('T', 0x2B, struct termios2)
#define INT16_MAX (32767)
#define MS_ASYNC 1
#define _POSIX_MAPPED_FILES 200809L
#define IPV6_NEXTHOP 9
#define __BLKCNT_T_TYPE __SYSCALL_SLONG_TYPE
#define MADV_MERGEABLE 12
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define ACL_APP_CTL_ON_SIGHUP ACL_MASTER_SERVER_SIGHUP
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define ACL_DLL_FARPROC void*
#define __S_IREAD 0400
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define SIGTTOU 22
#define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
#define htons(x) __bswap_16 (x)
#define ACL_XML3_IS_COMMENT(x) (((x)->flag & ACL_XML3_F_META_CM))
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define IPOPT_SECUR_MMMM 0xbc4d
#define ACL_RING_LAST(head) (acl_ring_pred(head) != (head) ? acl_ring_pred(head) : 0)
#define RTLD_LOCAL 0
#define ACL_DNS_ERR_NO_SUPPORT -4
#define MCAST_LEAVE_SOURCE_GROUP 47
#define _IO_flockfile(_fp) 
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 0
#define _IOFBF 0
#define IPV6_IPSEC_POLICY 34
#define ACL_RFC1035_TYPE_MF 4
#define __FLT_EVAL_METHOD__ 0
#define TCPI_OPT_TIMESTAMPS 1
#define si_addr _sifields._sigfault.si_addr
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define ACL_VSTRING_CTL_END 0
#define TTYDEF_IFLAG (BRKINT | ISTRIP | ICRNL | IMAXBEL | IXON | IXANY)
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define _IO_NO_WRITES 8
#define ACL_TEST_GLOBAL_INCLUDE_H 
#define ifr_dstaddr ifr_ifru.ifru_dstaddr
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define ACL_RES_INCLUDE_H 
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define __unix__ 1
#define ACL_AQUEUE_ERR_LOCK 1
#define ACL_LISTEN_INCLUDE_H 
#define ifr_qlen ifr_ifru.ifru_ivalue
#define acl_ring_pred ACL_RING_PRED
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define ACL_PTHREAD_ONCE_INIT PTHREAD_ONCE_INIT
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define ACL_DB_DEBUG_MEM (1<<0)
#define SO_SELECT_ERR_QUEUE 45
#define ACL_IOCTL_CTL_THREAD_IDLE 2
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define __FLT64_DECIMAL_DIG__ 17
#define ACL_VSTREAM_TYPE_LISTEN (1 << 2)
#define _G_HAVE_ST_BLKSIZE defined (_STATBUF_ST_BLKSIZE)
#define IPV6_PMTUDISC_PROBE 3
#define LDBL_MAX __LDBL_MAX__
#define ACL_HASH_INCLUD_H 
#define IP_FREEBIND 15
#define SCHED_RR 2
#define ACL_JSON_T_BOOL (1 << 7)
#define __stub_setlogin 
#define ACL_VSTRING_SIZE(vp) ((vp)->vbuf.len)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define __SYSCALL_WORDSIZE 64
#define ACL_BITS_MASK_REALLOC(mask,nmax) do { size_t _byte_len = ACL_BITS_MASK_BYTES_NEEDED(nmax); size_t _old_len = (mask)->data_len; (mask)->data = (char*) acl_myrealloc((mask)->data, _byte_len); memset((mask)->data + _old_len, 0, _byte_len - _old_len); (mask)->data_len = _byte_len; } while (0)
#define _IO_peekc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) && __underflow (_fp) == EOF ? EOF : *(unsigned char *) (_fp)->_IO_read_ptr)
#define ACL_ITER_INFO(iter,container) (container)->iter_info(&(iter), (container))
#define ACL_MASK_ADDR_H_INCLUDED 
#define ACL_VSTREAM_EOF (-1)
#define AI_NUMERICSERV 0x0400
#define ACL_FLOCK_STYLE_FLOCK 1
#define ACL_ISSPACE(c) isspace(_ACL_UCHAR_(c))
#define MAP_32BIT 0x40
#define FNONBLOCK O_NONBLOCK
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define INT8_MIN (-128)
#define __x86_64 1
#define XATTR_SIZE_MAX 65536
#define ACL_SCAN_FLAG_RECURSIVE (1 << 0)
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define __ASSERT_VOID_CAST (void)
#define acl_vstream_readline acl_vstream_gets
#define ACL_EVENT_TIMEOUT ACL_EVENT_RW_TIMEOUT
#define __O_NOFOLLOW 0400000
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define __SIGEV_MAX_SIZE 64
#define VAR_AUT_GOTO "GOTO"
#define ACL_MBOX_INCLUDE_H 
#define acl_spool_loop acl_ioctl_loop
#define IPOPT_OLEN 1
#define _IOC_TYPE(nr) (((nr) >> _IOC_TYPESHIFT) & _IOC_TYPEMASK)
#define __attribute_nonstring__ 
#define __S_IFIFO 0010000
#define MCAST_LEAVE_GROUP 45
#define SOL_BLUETOOTH 274
#define IFF_MULTICAST IFF_MULTICAST
#define EOWNERDEAD 130
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define IPOPT_SECUR_UNCLASS 0x0000
#define __CFLOAT128 _Complex _Float128
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define ACL_SPOOL_TIMER_FN ACL_IOCTL_TIMER_FN
#define HAVE_MSGHDR_MSG_CONTROL 
#define ACL_RFC1035_TYPE_TXT 16
#define IOC_IN (_IOC_WRITE << _IOC_DIRSHIFT)
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define IPOPT_SID IPOPT_SATID
#define POLL_MSG POLL_MSG
#define ACL_RFC1035_CLASS_HS 4
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define acl_pthread_mutexattr_destroy pthread_mutexattr_destroy
#define ACL_VSTREAM_POPEN_WAITPID_FN 7
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN (-32767-1)
#define ACL_RFC1035_TYPE_MINFO 14
#define ENOTTY 25
#define __FINITE_MATH_ONLY__ 0
#define ACL_EVENT_XCPT (1 << 4)
#define si_overrun _sifields._timer.si_overrun
#define ACL_APP_CTL_CFG_STR ACL_MASTER_SERVER_STR_TABLE
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define SO_ATTACH_REUSEPORT_CBPF 51
#define ACL_CFG_SET_ITEM_INT(_xcp_,_name_,_obj_,_def_) do { ACL_XINETD_CFG_PARSER *_tmp_xcp_ = _xcp_; const char *_ptr_; _ptr_ = acl_xinetd_cfg_get(_tmp_xcp_, _name_); if (_ptr_ && *_ptr_) { _obj_ = atoi(_ptr_); if (_obj_ <= 0) _obj_ = _def_; } else _obj_ = _def_; } while (0);
#define ACL_BITS_MASK_FD_BIT(number) (1 << ((number) % ACL_BITS_MASK_NBBY))
#define UINTMAX_C(c) c ## UL
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define ACL_SET_EUGID_INCLUDE_H 
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define acl_myfree_fn acl_free_fn_glue
#define ACL_FLOCK_OP_BITS (ACL_FLOCK_OP_SHARED | ACL_FLOCK_OP_EXCLUSIVE | ACL_FLOCK_OP_NOWAIT)
#define _CS_V6_ENV _CS_V6_ENV
#define ACL_ISALPHA(c) isalpha(_ACL_UCHAR_(c))
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define SIOCGIFHWADDR 0x8927
#define __u_char_defined 
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define SOL_PACKET 263
#define WIFEXITED(status) __WIFEXITED (status)
#define IPOPT_RESERVED1 0x20
#define IPOPT_RESERVED2 0x60
#define ACL_XML3_S_AVAL 10
#define ACL_DBH_STATUS_INUSE 2
#define __pid_t_defined 
#define EADV 68
#define ERANGE 34
#define __GNUC_PATCHLEVEL__ 0
#define ACL_VSTREAM_FLAG_NS (1 << 22)
#define __FLT32_HAS_DENORM__ 1
#define ECANCELED 125
#define IPV6_HOPOPTS 54
#define S_IFBLK __S_IFBLK
#define _POSIX_TRACE_EVENT_FILTER -1
#define SIGFPE 8
#define ACL_MASTER_SERVER_PRE_INIT 10
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define ACL_EVENT_ERROR ACL_EVENT_XCPT
#define ACL_XML_FLAG_IGNORE_SLASH (1 << 1)
#define SO_SECURITY_AUTHENTICATION 22
#define SCM_SRCRT IPV6_RXSRCRT
#define _IO_pid_t __pid_t
#define ACL_MASTER_SERVER_CTX 24
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define IPTOS_PREC_MASK IPTOS_CLASS_MASK
#define LDBL_DECIMAL_DIG __LDBL_DECIMAL_DIG__
#define __LDBL_REDIR1(name,proto,alias) name proto
#define _ACL_UCHAR_(c) ((unsigned char)(c))
#define MSG_MORE MSG_MORE
#define _SYS_STAT_H 1
#define _BITS_TYPES_LOCALE_T_H 1
#define _LIMITS_H___ 
#define MSG_WAITALL MSG_WAITALL
#define __has_include(STR) __has_include__(STR)
#define _IOC_DIRSHIFT (_IOC_SIZESHIFT+_IOC_SIZEBITS)
#define TIOCGPTN _IOR('T', 0x30, unsigned int)
#define __size_t 
#define acl_vstring_fgets_bound(s,p,l) (acl_vstring_gets_bound((s), (p), (l)) == ACL_VSTREAM_EOF ? 0 : (s))
#define TH_ACK 0x10
#define ACL_VSTRING_SKIP(vp) { while ((vp)->vbuf.ptr < (vp)->vbuf.data + (vp)->vbuf.len && *(vp)->vbuf.ptr) { (vp)->vbuf.ptr++; } }
#define IPTOS_ECN_CE 0x03
#define INT_FAST8_MAX (127)
#define __DEC64_MAX_EXP__ 385
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 1
#define acl_array_insert acl_array_succ_insert
#define _XOPEN_XCU_VERSION 4
#define __O_NOATIME 01000000
#define ETXTBSY 26
#define __SI_SIGFAULT_ADDL 
#define ENOMEM 12
#define TTYDEF_LFLAG (ECHO | ICANON | ISIG | IEXTEN | ECHOE|ECHOKE|ECHOCTL)
#define __SIZEOF_PTHREAD_CONDATTR_T 4
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define _SYS_TIME_H 1
#define SOL_TIPC 271
#define _BITS_SOCKADDR_H 1
#define acl_spool_add acl_ioctl_add
#define NSIG _NSIG
#define __INT_LEAST8_WIDTH__ 8
#define ACL_BINHASH_FLAG_SLICE1 (1 << 2)
#define _CS_PATH _CS_PATH
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define h_addr h_addr_list[0]
#define SIOCSIFNETMASK 0x891c
#define SO_INCOMING_NAPI_ID 56
#define MSG_PEEK MSG_PEEK
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define _IO_FLAGS2_MMAP 1
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define htobe16(x) __bswap_16 (x)
#define _XBS5_LPBIG_OFFBIG -1
#define IN_CLASSB_NSHIFT 16
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define NO_RECOVERY 3
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define NFDBITS __NFDBITS
#define N_SMSBLOCK 12
#define __SHRT_MAX__ 0x7fff
#define POLLRDBAND 0x080
#define acl_vstring_avail(vp) ((vp)->vbuf.len - ((vp)->vbuf.ptr - (vp)->vbuf.data))
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define ILL_ILLOPC ILL_ILLOPC
#define IPOPT_NUMBER_MASK 0x1f
#define ILL_ILLOPN ILL_ILLOPN
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define __FLT64X_MAX_10_EXP__ 4932
#define ACL_MBOX_T_SPSC 0
#define ACL_NET_INCLUDE_H 
#define S_IXOTH (S_IXGRP >> 3)
#define MAP_TYPE 0x0f
#define __ILP32_OFFBIG_CFLAGS "-m32 -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64"
#define _IO_need_lock(_fp) (((_fp)->_flags2 & _IO_FLAGS2_NEED_LOCK) != 0)
#define ACL_ECONNRESET ECONNRESET
#define ACL_DB_ERR_ALLOC 105
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define ACL_XML3_F_LEAF (1 << 4)
#define __clockid_t_defined 1
#define SOL_IPV6 41
#define __daddr_t_defined 
#define AVL_INDEX2NODE(x) ((avl_node_t *)((x) & ~1))
#define __O_CLOEXEC 02000000
#define IP_MTU 14
#define LDBL_MAX_EXP __LDBL_MAX_EXP__
#define ACL_PTHREAD_POOL_INCLUDE_H 
#define AUT_FLAG_STOP 9
#define ACL_ASTREAM_STATUS_OK 0
#define ACL_USERNAME_INCLUDE_H 
#define IPV6_HDRINCL 36
#define IP_MAXPACKET 65535
#define AF_ROSE PF_ROSE
#define AVL_INDEX2CHILD(x) ((x) & 1)
#define SIGSTKFLT 16
#define ACL_VSTREAM_CLR_NS(x) ((x)->flag &= ~ACL_VSTREAM_FLAG_NS)
#define SA_NODEFER 0x40000000
#define _IOS_BIN 128
#define __fortify_function __extern_always_inline __attribute_artificial__
#define ACL_IOCTL_CTL_THREAD_MAX 1
#define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)
#define ACL_DBUF_POOL_INCLUDE_H 
#define ACL_XML2_FLAG_XML_ENCODE (1 << 3)
#define _RPC_NETDB_H 1
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define SOCK_DCCP SOCK_DCCP
#define NAME_MAX 255
#define _IO_MAGIC_MASK 0xFFFF0000
#define _POSIX_JOB_CONTROL 1
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define MAP_EXECUTABLE 0x01000
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define DBL_MANT_DIG __DBL_MANT_DIG__
#define IFNAMSIZ IF_NAMESIZE
#define _IOC_SIZESHIFT (_IOC_TYPESHIFT+_IOC_TYPEBITS)
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define _IO_UNIFIED_JUMPTABLES 1
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define TIOCPKT_STOP 4
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define PF_SECURITY 14
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define SIOCGIFMETRIC 0x891d
#define htobe64(x) __bswap_64 (x)
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define acl_pthread_self pthread_self
#define __UINTMAX_TYPE__ long unsigned int
#define EINPROGRESS 115
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define __HAVE_DISTINCT_FLOAT32X 0
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define ACL_DEBUG_WQ (ACL_DEBUG_INTER_BASE + 1)
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define ACL_ASTREAM_STATUS_NS_ERROR 1
#define INT_FAST8_MIN (-128)
#define _UNISTD_H 1
#define ACL_XML_S_TXT 11
#define ACL_YQUEUE_INCLUDE_H 
#define ACL_MASTER_SERVER_ON_LISTEN 27
#define EAI_AGAIN -3
#define _POSIX_THREAD_CPUTIME 0
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define __linux 1
#define ENOPROTOOPT 92
#define __DEC32_EPSILON__ 1E-6DF
#define WCHAR_MIN __WCHAR_MIN
#define TH_RST 0x04
#define ACL_AQUEUE_ERR_TIMEOUT 3
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define ACL_AIO_CTL_END 0
#define _IO_cleanup_region_end(_Doit) 
#define AI_ADDRCONFIG 0x0020
#define si_int _sifields._rt.si_sigval.sival_int
#define ACL_HOSTNAME_TYPE_MX 3
#define ACL_ROOT_PATH "/bin:/usr/bin:/sbin:/usr/sbin"
#define _IO_DONT_CLOSE 0100000
#define acl_pthread_detach pthread_detach
#define PF_BLUETOOTH 31
#define __unix 1
#define ACL_XML3_S_LLT 1
#define ACL_TOKEN_WIDTH 256
#define _BITS_PTHREADTYPES_ARCH_H 1
#define ACL_FHANDLE_S_MUTEX_ON (1 << 1)
#define ACL_HAS_POLL 
#define __UINT32_MAX__ 0xffffffffU
#define ACL_SANE_BASENAME_INCLUDE_H 
#define _BITS_SS_FLAGS_H 1
#define __UID_T_TYPE __U32_TYPE
#define IPTOS_ECN_MASK 0x03
#define ACL_SCAN_CTL_END 0
#define _POSIX_READER_WRITER_LOCKS 200809L
#define acl_pthread_pool_add acl_pthread_pool_add_one
#define getc(_fp) _IO_getc (_fp)
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define PF_SMC 43
#define _POSIX_AIO_MAX 1
#define __SIZE_T 
#define _POSIX_RAW_SOCKETS 200809L
#define SO_WIFI_STATUS 41
#define acl_stack_pop_tail acl_stack_pop
#define NETDB_SUCCESS 0
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define _POSIX_PIPE_BUF 512
#define LDBL_MANT_DIG __LDBL_MANT_DIG__
#define FD_SETSIZE __FD_SETSIZE
#define ACL_XML2_F_SELF_CL (1 << 3)
#define SIGUSR1 10
#define __LDBL_MAX_EXP__ 16384
#define _BITS_POSIX_OPT_H 1
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define PF_SNA 22
#define _ATFILE_SOURCE 1
#define PF_WANPIPE 25
#define ifc_buf ifc_ifcu.ifcu_buf
#define UINT_FAST16_MAX (18446744073709551615UL)
#define _IO_ssize_t __ssize_t
#define _SC_NETWORKING _SC_NETWORKING
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define acl_mystrdup(str) acl_strdup_glue(__FILE__, __LINE__, (str))
#define MSG_FIN MSG_FIN
#define ACL_VSTREAM_CLR_US(x) ((x)->flag &= ~ACL_VSTREAM_FLAG_US)
#define SO_NO_CHECK 11
#define __WINT_MIN__ 0U
#define ifr_addr ifr_ifru.ifru_addr
#define PF_IEEE802154 36
#define EPROTOTYPE 91
#define ERESTART 85
#define _SC_SHELL _SC_SHELL
#define ACL_DNS_ERR_UNPACK -15
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define TCP_REPAIR_QUEUE 20
#define TCP_REPAIR 19
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define ACL_MASTER_GEN_NAME "GENERATION"
#define EISNAM 120
#define _STATBUF_ST_RDEV 
#define __linux__ 1
#define TCP_COOKIE_MAX 16
#define UINT16_C(c) c
#define ACL_CFG_MACRO_INCLUDE_H 
#define ACL_MASTER_SERVER_SIGHUP 28
#define AF_NETROM PF_NETROM
#define SO_BPF_EXTENSIONS 48
#define _IOS_OUTPUT 2
#define ACL_STDLIB_INCLUDE_H 
#define __FLT128_MIN_10_EXP__ (-4931)
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define TRY_AGAIN 2
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ACL_CLOSE_ON_EXEC 1
#define ENOMSG 42
#define _PC_PRIO_IO _PC_PRIO_IO
#define EXIT_FAILURE 1
#define ACL_MEMDB_INCLUDE_H 
#define TCPOPT_SACK 5
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define htonl(x) __bswap_32 (x)
#define ACL_INET_FLAG_EXCLUSIVE 1 << 3
#define __INT_LEAST16_WIDTH__ 16
#define ACL_VSTREAM_GETC(stream_ptr) ( (stream_ptr)->read_cnt > 0 ? (stream_ptr)->read_cnt--, (stream_ptr)->offset++, *(stream_ptr)->read_ptr++: (stream_ptr)->sys_getc((stream_ptr)))
#define _SIZE_T_DEFINED_ 
#define IPV6_MTU_DISCOVER 23
#define EAI_NONAME -2
#define _POSIX_AIO_LISTIO_MAX 2
#define ACL_BINHASH_FOREACH(iter,table_ptr) if (table_ptr) for((void) acl_binhash_iter_head((table_ptr), &iter); (iter).ptr; (void) acl_binhash_iter_next(&iter))
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define ACL_APP_CTL_DENY_INFO ACL_MASTER_DENY_INFO
#define _IOR_BAD(type,nr,size) _IOC(_IOC_READ,(type),(nr),sizeof(size))
#define ACL_JSON_T_NUMBER (1 << 6)
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define ACL_VSTREAM_OUT (&acl_vstream_fstd[1])
#define ACL_VSTREAM_ERR (&acl_vstream_fstd[2])
#define AF_FILE PF_FILE
#define __SCHAR_MAX__ 0x7f
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define IOC_INOUT ((_IOC_WRITE|_IOC_READ) << _IOC_DIRSHIFT)
#define SO_REUSEADDR 2
#define N_X25 6
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define __USE_KERNEL_IPV6_DEFS 0
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_SYNCHRONIZED_IO 200809L
#define __KERNEL_STRICT_NAMES 
#define _IO_stderr ((_IO_FILE*)(&_IO_2_1_stderr_))
#define _IO_ferror_unlocked(__fp) (((__fp)->_flags & _IO_ERR_SEEN) != 0)
#define ACL_CONFIG_INT_TABLE ACL_CFG_INT_TABLE
#define IP_MF 0x2000
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define _BITS_SIGSTACK_H 1
#define __INT64_C(c) c ## L
#define FLT_TRUE_MIN __FLT_DENORM_MIN__
#define BUS_ADRERR BUS_ADRERR
#define ACL_HOSTNAME_TYPE_NS 5
#define _SC_TIMERS _SC_TIMERS
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define SA_SIGINFO 4
#define __DBL_DIG__ 15
#define ACL_VALID_LABEL_LEN 63
#define ACL_IOCTL_CTL_DELAY_USEC 4
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define WSTOPPED 2
#define SOL_X25 262
#define SO_DEBUG 1
#define ACL_PTHREAD_POOL_DEF_THREADS 100
#define ACL_SLICE_FLAG_GC1 (1 << 0)
#define ACL_SLICE_FLAG_GC2 (1 << 1)
#define ACL_SLICE_FLAG_GC3 (1 << 2)
#define SO_BINDTODEVICE 25
#define __FLT64X_MANT_DIG__ 64
#define __osockaddr_defined 1
#define _FORTIFY_SOURCE 2
#define ACL_APP_CTL_CFG_BOOL ACL_MASTER_SERVER_BOOL_TABLE
#define TIOCPKT_NOSTOP 16
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define ACL_VSTREAM_TYPE_LISTEN_UNIX (1 << 4)
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define ACL_AIO_FLAG_ISWR (1 << 2)
#define _SC_2_C_BIND _SC_2_C_BIND
#define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#define _POSIX_LINK_MAX 8
#define ACL_HTABLE_FLAG_MSLOOK (1 << 2)
#define ACL_MASTER_STAT_TAKEN 0
#define ACL_SPOOL_INCLUDE_H 
#define TCP_NOTSENT_LOWAT 25
#define _IOT_ifreq_short _IOT(_IOTS(char),IFNAMSIZ,_IOTS(short),1,0,0)
#define AF_TIPC PF_TIPC
#define COLL_WEIGHTS_MAX 255
#define acl_pthread_join pthread_join
#define __isascii(c) (((c) & ~0x7f) == 0)
#define ACL_DNS_ERR_NO_EXIST -3
#define __toascii(c) ((c) & 0x7f)
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define ACL_VSTREAM_FLAG_BAD (ACL_VSTREAM_FLAG_ERR | ACL_VSTREAM_FLAG_EOF | ACL_VSTREAM_FLAG_TIMEOUT)
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define __SIZEOF_POINTER__ 8
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define ACL_VSTREAM_BFRD_CNT(stream_ptr) ((stream_ptr) == NULL ? -1 : (stream_ptr)->read_cnt)
#define _BITS_SIGINFO_ARCH_H 1
#define _DEFAULT_SOURCE 1
#define TCPOLEN_TIMESTAMP 10
#define SO_MARK 36
#define SOL_TLS 282
#define _POSIX2_BC_STRING_MAX 1000
#define __USE_EXTERN_INLINES 1
#define __attribute_used__ __attribute__ ((__used__))
#define _STDIO_USES_IOSTREAM 
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (_IO_putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define ACL_MASTER_SERVER_DENY_INFO 25
#define ACL_FIFO_ITER_VALUE(iter) ((iter).ptr->data)
#define S_IFMT __S_IFMT
#define FIOSETOWN 0x8901
#define _IO_IN_BACKUP 0x100
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define CLOCK_REALTIME 0
#define __LOCK_ALIGNMENT 
#define AUT_STAT_BUSY 1
#define _XOPEN_REALTIME_THREADS 1
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define ETIMEDOUT 110
#define SO_LOCK_FILTER 44
#define _SC_VERSION _SC_VERSION
#define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
#define ACL_VSTRING_SPACE(vp,len) ACL_VBUF_SPACE(&(vp)->vbuf, len)
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define _ARPA_INET_H 1
#define IPPROTO_EGP IPPROTO_EGP
#define IPOPT_OFFSET 2
#define __USER_LABEL_PREFIX__ 
#define __SI_ERRNO_THEN_CODE 1
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define _EXTERN_INLINE __extern_inline
#define DT_BLK DT_BLK
#define F_SETLKW64 7
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define ENODATA 61
#define ACL_VSTREAM_TYPE_LISTEN_IOCP (1 << 5)
#define strrncmp acl_strrncmp
#define IPV6_AUTHHDR 10
#define SCM_TIMESTAMPING_PKTINFO 58
#define AT_SYMLINK_NOFOLLOW 0x100
#define __GLIBC__ 2
#define _SC_POLL _SC_POLL
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define __END_DECLS 
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define ACL_MUTEX_MAXWAIT (~(unsigned int)0)
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define ACL_VSTRING_AT_OFFSET(vp,offset) { (vp)->vbuf.ptr = (vp)->vbuf.data + (offset); }
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define RTLD_NODELETE 0x01000
#define CREPRINT CTRL('r')
#define WCONTINUED 8
#define acl_mystr_truncate_byln acl_strtrunc_byln
#define UINT8_MAX (255)
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define _MKNOD_VER_LINUX 0
#define ACL_XML3_S_LGT 2
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _ALLOCA_H 1
#define ACL_MASTER_SERVER_BOOL_TABLE 3
#define IPTOS_CLASS_DEFAULT IPTOS_CLASS_CS0
#define _IOT_ifconf _IOT(_IOTS(struct ifconf),1,0,0,0,0)
#define __LDBL_HAS_INFINITY__ 1
#define __warndecl(name,msg) extern void name (void) __attribute__((__warning__ (msg)))
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define _BITS_UINTN_IDENTITY_H 1
#define TCSBRKP 0x5425
#define TIOCGPTPEER _IO('T', 0x41)
#define F_GETLK F_GETLK64
#define _SYS_SELECT_H 1
#define POSIX_MADV_WILLNEED 3
#define _IO_LINE_BUF 0x200
#define __SYSMACROS_DM1(...) __glibc_macro_warning (#__VA_ARGS__)
#define FIONREAD 0x541B
#define _IOS_NOCREATE 32
#define PF_ALG 38
#define ACL_MDT_FLAG_DMR (1 << 2)
#define _XOPEN_ENH_I18N 1
#define ACL_VSTREAM_FLAG_SOCKPAIR (1 << 16)
#define AF_PHONET PF_PHONET
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define _SC_LONG_BIT _SC_LONG_BIT
#define NCC 8
#define _FLOAT_H___ 
#define TIOCGSID 0x5429
#define ACL_MASTER_SERVER_ON_BIND ACL_MASTER_SERVER_ON_LISTEN
#define ACL_VSTREAM_FLAG_TIMEOUT (1 << 12)
#define INET_ADDRSTRLEN 16
#define FLT_MAX_10_EXP __FLT_MAX_10_EXP__
#define SIOCSIFMAP 0x8971
#define FPE_FLTDIV FPE_FLTDIV
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define ACL_VSTREAM_TYPE_UNIX (1 << 8)
#define IP_IPSEC_POLICY 16
#define acl_json_create_leaf acl_json_create_text
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define IPPROTO_PIM IPPROTO_PIM
#define DECIMAL_DIG __DECIMAL_DIG__
#define ifr_bandwidth ifr_ifru.ifru_ivalue
#define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
#define IPOPT_SECURITY 130
#define ACL_SCAN_DIR_INCLUDE_H 
#define _BSD_SIZE_T_DEFINED_ 
#define ACL_IOCTL_CTL_EXIT_CTX 8
#define _STAT_VER_KERNEL 0
#define ACL_VBUF_PRINT_INCLUDE_H 
#define ACL_RFC1035_TYPE_NULL 10
#define __FLT32_DIG__ 6
#define EINTR 4
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define AF_INET6 PF_INET6
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define __RLIM_T_MATCHES_RLIM64_T 1
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define _G_BUFSIZ 8192
#define MAP_FAILED ((void *) -1)
#define _DIRENT_MATCHES_DIRENT64 1
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define SOL_NETLINK 270
#define ACL_SOCKET_WBUF_SIZE 204800
#define INT32_MIN (-2147483647-1)
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define SS_DISABLE SS_DISABLE
#define ENOLINK 67
#define ACL_UNIX 
#define __HAVE_FLOAT128X 0
#define _IO_EOF_SEEN 0x10
#define AF_WANPIPE PF_WANPIPE
#define MADV_UNMERGEABLE 13
#define _POSIX_SPAWN 200809L
#define acl_binhash_iter_key ACL_BINHASH_ITER_KEY
#define __SHRT_WIDTH__ 16
#define PF_LLC 26
#define isblank_l(c,l) __isblank_l ((c), (l))
#define ACL_CACHE_INCLUDE_H 
#define __f64x(x) x ##f64x
#define ACL_DB_AUTO_COMMIT(_db_pool_) (_db_pool_ ? _db_pool_->db_info.auto_commit : 0)
#define ACL_JSON_FLAG_PART_WORD (1 << 0)
#define ACL_MASTER_SERVER_ON_HANDSHAKE 19
#define SO_LINGER 13
#define s6_addr16 __in6_u.__u6_addr16
#define ACL_HTABLE_INCLUDE_H 
#define IPTOS_TOS_MASK 0x1E
#define ACL_RFC1035_TYPE_AAAA 28
#define SO_BROADCAST 6
#define TMP_MAX 238328
#define si_status _sifields._sigchld.si_status
#define TCP_MD5SIG_EXT 32
#define __SSIZE_T_TYPE __SWORD_TYPE
#define PF_UNIX PF_LOCAL
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define __DEV_T_TYPE __UQUAD_TYPE
#define ACL_AIO_FLAG_DEAD (1 << 4)
#define ACL_RING_PRED(c) ((c)->pred)
#define ACL_RES_USE_TCP 1
#define IPVERSION 4
#define UINT_LEAST8_MAX (255)
#define CMIN 1
#define __SI_MAX_SIZE 128
#define IPV6_DSTOPTS 59
#define SIGIO SIGPOLL
#define _IO_SKIPWS 01
#define POSIX_MADV_DONTNEED 4
#define DBL_HAS_SUBNORM __DBL_HAS_DENORM__
#define ACL_VSTREAM_IS_MS(x) (((x)->flag & ACL_VSTREAM_FLAG_MS) != 0)
#define ILL_ILLADR ILL_ILLADR
#define ACL_AIO_CTL_READ_HOOK_DEL 15
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define ACL_HOSTNAME_TYPE_SOA 4
#define __nonnull(params) __attribute__ ((__nonnull__ params))
#define ACL_PTHREAD_POOL_DEF_IDLE 0
#define ACL_DEBUG_THR_POOL (ACL_DEBUG_INTER_BASE + 3)
#define IP_RF 0x8000
#define s6_addr32 __in6_u.__u6_addr32
#define _SS_SIZE 128
#define __BITS_SOCKET_H 
#define ACL_EVENT_ACCEPT (1 << 1)
#define le32toh(x) __uint32_identity (x)
#define NI_NOFQDN 4
#define __DEC32_MAX__ 9.999999E96DF
#define __GLIBC_USE_IEC_60559_BFP_EXT 0
#define ACL_MSGIO_INCLUDE_H 
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define ACL_EVENT_FD_BUSY 1
#define __O_LARGEFILE 0
#define PF_CAIF 37
#define ACL_AIO_CTL_STREAM 10
#define acl_pthread_cond_signal pthread_cond_signal
#define _POSIX_NAME_MAX 14
#define ACL_HAS_PTHREAD 
#define TCP_S_DATA_OUT (1 << 3)
#define acl_xml2_parse acl_xml2_update
#define _IO_SHOWPOS 02000
#define ACL_AIO_CTL_CTX 3
#define __ASM_GENERIC_IOCTLS_H 
#define PF_ASH 18
#define UINT64_C(c) c ## UL
#define TIOCNXCL 0x540D
#define AT_SYMLINK_FOLLOW 0x400
#define SIOCSIFFLAGS 0x8914
#define SI_MESGQ SI_MESGQ
#define ifr_newname ifr_ifru.ifru_newname
#define DT_SOCK DT_SOCK
#define _ASSERT_H_DECLS 
#define MADV_REMOVE 9
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define ACL_SINGLE_PARAMS_INCLUDE_H 
#define ACL_XML3_S_RTAG 8
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define S_IFLNK __S_IFLNK
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define ACL_ISPRINT(c) isprint(_ACL_UCHAR_(c))
#define IPPROTO_ESP IPPROTO_ESP
#define LDBL_MIN_EXP __LDBL_MIN_EXP__
#define RTSIG_MAX 32
#define acl_vstream_ispipe(vp) ((vp)->pid != 0)
#define EPERM 1
#define ACL_DEFINE_INCLUDE_H 
#define SIGPOLL 29
#define ACL_VSTREAM_SET_EOF(stream_ptr) do { ACL_VSTREAM *__stream_ptr = stream_ptr; __stream_ptr->flag |= ACL_VSTREAM_FLAG_EOF; } while (0)
#define ACL_VSTREAM_CTL_TIMEOUT 5
#define ACL_RES_ERR_READ -101
#define _STDDEF_H 
#define EAI_FAMILY -6
#define MINSIGSTKSZ 2048
#define VAR_AUT_PAUSE "PAUSE"
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define ACL_RES_ERR_NULL -103
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define CLOCK_BOOTTIME_ALARM 9
#define TIOCSLCKTRMIOS 0x5457
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define ACL_BINHASH_FLAG_SLICE_RTGC_OFF (1 << 1)
#define __FLT32X_HAS_INFINITY__ 1
#define SO_ACCEPTCONN 30
#define __INT32_MAX__ 0x7fffffff
#define acl_spool_listen_ex acl_ioctl_listen_ex
#define _IO_BOOLALPHA 0200000
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __SIZEOF_PTHREAD_COND_T 48
#define AF_BRIDGE PF_BRIDGE
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define ACL_FIFO_INCLUDE_H 
#define _POSIX_V7_LPBIG_OFFBIG -1
#define ACL_VSTREAM_IN (&acl_vstream_fstd[0])
#define __INT_WIDTH__ 32
#define IPV6_RECVPATHMTU 60
#define __SIZEOF_LONG__ 8
#define _IONBF 2
#define O_NDELAY O_NONBLOCK
#define __S_IFCHR 0020000
#define acl_ring_last_appl ACL_RING_LAST_APPL
#define O_ASYNC 020000
#define _IO_getc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define _SYS_UCONTEXT_H 1
#define ACL_AIO_CTL_WRITE_NESTED 12
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define __STDC_IEC_559__ 1
#define SIGEV_NONE SIGEV_NONE
#define acl_spool_enable_connect acl_ioctl_enable_connect
#define SIOCGIFBRDADDR 0x8919
#define acl_spool_free acl_ioctl_free
#define SO_TYPE 3
#define __STDC_ISO_10646__ 201706L
#define ACL_FLOCK_OP_EXCLUSIVE 2
#define PF_NETLINK 16
#define _SC_NL_NMAX _SC_NL_NMAX
#define __UINT16_C(c) c
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define ACL_DB_OK 0
#define ACL_DNS_ERR_DENY -5
#define MAP_PRIVATE 0x02
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define IP_MULTICAST_LOOP 34
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define _IO_PENDING_OUTPUT_COUNT(_fp) ((_fp)->_IO_write_ptr - (_fp)->_IO_write_base)
#define ACL_CFG_SET_ITEM_STR(_xcp_,_name_,_obj_) do { ACL_XINETD_CFG_PARSER *_tmp_xcp_ = _xcp_; const char *_ptr_; _ptr_ = acl_xinetd_cfg_get(_tmp_xcp_, _name_); if (_ptr_ && *_ptr_) { _obj_ = acl_mystrdup(_ptr_); if (_obj_ == NULL) acl_msg_fatal("%s(%d): acl_mystrdup error=%s for %s", __FILE__, __LINE__, strerror(errno), _ptr_); } } while (0);
#define __DECIMAL_DIG__ 21
#define _POSIX2_RE_DUP_MAX 255
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 2
#define ACL_BINHASH_FLAG_SLICE3 (1 << 4)
#define __PTHREAD_MUTEX_NUSERS_AFTER_KIND 0
#define LOCK_EX 2
#define AF_CAN PF_CAN
#define TIOCSRS485 0x542F
#define SOCK_PACKET SOCK_PACKET
#define _POSIX2_EXPR_NEST_MAX 32
#define _IOC_NR(nr) (((nr) >> _IOC_NRSHIFT) & _IOC_NRMASK)
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define ACL_MASTER_XPORT_NAME_UNIX "unix"
#define ACL_EMFILE EMFILE
#define __gnu_linux__ 1
#define ACL_ISLOWER(c) islower(_ACL_UCHAR_(c))
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define __INTMAX_WIDTH__ 64
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define MAX_INPUT 255
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define _ENDIAN_H 1
#define ACL_VSTREAM_IS_US(x) (((x)->flag & ACL_VSTREAM_FLAG_US) != 0)
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define INT_FAST16_MAX (9223372036854775807L)
#define ENETDOWN 100
#define SOL_IP 0
#define ESTALE 116
#define IPPROTO_PUP IPPROTO_PUP
#define ACL_JSON_T_A_DOUBLE (1 << 4)
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __has_include_next(STR) __has_include_next__(STR)
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define AUT_FLAG_LOOP_BREAK 2
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define SIOCSIFLINK 0x8911
#define ACL_VSTREAM_SOCK(stream_ptr) ((stream_ptr)->fd.sock)
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __HAVE_FLOAT64X_LONG_DOUBLE 1
#define ACL_ENETDOWN ENETDOWN
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define TIOCGDEV _IOR('T', 0x32, unsigned int)
#define _IOC_DIRMASK ((1 << _IOC_DIRBITS)-1)
#define DBL_MIN_EXP __DBL_MIN_EXP__
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define PTRDIFF_MAX (9223372036854775807L)
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define EKEYREJECTED 129
#define ACL_WRITEABLE_CHECK 1
#define ____sigset_t_defined 
#define _IO_LEFT 02
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define VAR_AUT_LOG_PRINT 0x0001
#define IP_ORIGDSTADDR 20
#define __FLT64X_MIN_10_EXP__ (-4931)
#define _SC_UINT_MAX _SC_UINT_MAX
#define F_OK 0
#define ACL_ENETUNREACH ENETUNREACH
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define ACL_FILE_HANDLE int
#define ENOSR 63
#define __USE_ISOC11 1
#define S_ISDIR(mode) __S_ISTYPE((mode), __S_IFDIR)
#define __HAVE_FLOAT64X 1
#define ACL_YPIPI_CINLUDE_H 
#define IPOPT_DEBMEAS 0x40
#define SIOCGIFPFLAGS 0x8935
#define ACL_RING_FIRST(head) (acl_ring_succ(head) != (head) ? acl_ring_succ(head) : 0)
#define DUP2 dup2
#define ifr_hwaddr ifr_ifru.ifru_hwaddr
#define N_STRIP 4
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define ACL_XML2_S_MTAG 12
#define ACL_MASTER_CLASS_PRIVATE "private"
#define _BITS_STRING_FORTIFIED_H 1
#define SOL_ICMPV6 58
#define __FLT64_MANT_DIG__ 53
#define IPPROTO_IDP IPPROTO_IDP
#define __attribute_const__ __attribute__ ((__const__))
#define acl_vstream_get_char acl_vstream_getc
#define _REENTRANT 1
#define acl_mymalloc(size) acl_malloc_glue(__FILE__, __LINE__, size)
#define _PC_PATH_MAX _PC_PATH_MAX
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define __SOCKADDR_ARG struct sockaddr *__restrict
#define ACL_APP_CTL_THREAD_INIT_CTX ACL_MASTER_SERVER_THREAD_INIT_CTX
#define acl_pthread_attr_destroy pthread_attr_destroy
#define FLT_MIN_EXP __FLT_MIN_EXP__
#define ACL_FILE_EOF (1 << 0)
#define O_NOCTTY 0400
#define htobe32(x) __bswap_32 (x)
#define ACL_VSTREAM_PATH(stream_ptr) ((stream_ptr)->path ? (stream_ptr)->path : "")
#define O_APPEND 02000
#define AF_BLUETOOTH PF_BLUETOOTH
#define IPPROTO_IPIP IPPROTO_IPIP
#define acl_ring_first_appl ACL_RING_FIRST_APPL
#define SIOCSARP 0x8955
#define AUT_FLAG_ELIF 7
#define L_tmpnam 20
#define ACL_TIMED_WAIT_INCLUDE_H 
#define _DIRENT_HAVE_D_RECLEN 
#define ___int_wchar_t_h 
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define isascii(c) __isascii (c)
#define _T_PTRDIFF 
#define toascii(c) __toascii (c)
#define __GNUC__ 7
#define IPTOS_ECN(x) ((x) & IPTOS_ECN_MASK)
#define MADV_WIPEONFORK 18
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define __MMX__ 1
#define IPPROTO_TCP IPPROTO_TCP
#define _IO_SCIENTIFIC 04000
#define IPV6_2292PKTOPTIONS 6
#define TIOCCBRK 0x5428
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define _LFS64_STDIO 1
#define L_ctermid 9
#define __OFF64_T_TYPE __SQUAD_TYPE
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define ACL_SCANF(format_idx,arg_idx) __attribute__((__format__ (__scanf__, (format_idx), (arg_idx))))
#define IPPROTO_RAW IPPROTO_RAW
#define PF_ISDN 34
#define _POSIX_THREAD_THREADS_MAX 64
#define SIOCGIFMAP 0x8970
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define ACL_XML2_S_AVAL 10
#define acl_htable_stat_r acl_htable_stat
#define MCL_ONFAULT 4
#define POSIX_FADV_WILLNEED 3
#define ACL_ALLOCATOR_INCLUDE_H 
#define ACL_SANE_INET_INCLUDE_H 
#define ACL_EAGAIN EAGAIN
#define AF_NFC PF_NFC
#define IN_CLASSA_NSHIFT 24
#define LOCK_NB 4
#define ACL_MALLOC_INCLUDE_H 
#define _SC_ARG_MAX _SC_ARG_MAX
#define isupper(c) __isctype((c), _ISupper)
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define ESOCKTNOSUPPORT 94
#define acl_vbuf_clearerr(v) ((v)->flags &= ~ACL_VBUF_FLAG_BAD)
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define ACL_MASTER_STAT_SIGHUP_ERR 3
#define ACL_XML_F_SELF_CL (1 << 3)
#define MSG_CTRUNC MSG_CTRUNC
#define acl_spool_start acl_ioctl_start
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define AUT_FLAG_IF 5
#define EAI_MEMORY -10
#define ACL_MASTER_SERVER_END 0
#define VAR_AUT_STOP "STOP"
#define SSIZE_MAX LONG_MAX
#define MSG_PROXY MSG_PROXY
#define ACL_VSTREAM_CTL_CONTEXT 6
#define acl_stack_push acl_stack_append
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __PTHREAD_SPINS_DATA short __spins; short __elision
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ACL_PATH_BSHELL "/bin/sh"
#define EAI_FAIL -4
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define _SYS_SOCKET_H 1
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define sa_handler __sigaction_handler.sa_handler
#define LONG_MAX __LONG_MAX__
#define AF_ROUTE PF_ROUTE
#define IPV6_RECVHOPOPTS 53
#define ACL_XML2_F_CDATA (1 << 5)
#define ACL_XML2_IS_COMMENT(x) (((x)->flag & ACL_XML2_F_META_CM))
#define STDERR_FILENO 2
#define IPTOS_CLASS_MASK 0xe0
#define ACL_XML2_F_LEAF (1 << 4)
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define __ONCE_ALIGNMENT 
#define ACL_BINHASH_ITER_VALUE(iter) ((iter).ptr->value)
#define ACL_XML3_S_LCH 3
#define _POSIX_HOST_NAME_MAX 255
#define __FLT64_MAX_10_EXP__ 308
#define ACL_VBUF_SPACE acl_vbuf_space
#define MATCH1(p) ((*(p) == ':' || *(p) == ACL_ADDR_SEP))
#define NI_MAXHOST 1025
#define __GLIBC_USE_LIB_EXT2 0
#define __USE_ISOC95 1
#define _TIME_H 1
#define __USE_ISOC99 1
#define IPOPT_COPY 0x80
#define MATCH2(p) (*(p) == '*' && (*((p) + 1) == ':' || *((p) + 1) == ACL_ADDR_SEP))
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define _POSIX_SEM_NSEMS_MAX 256
#define MSG_DONTROUTE MSG_DONTROUTE
#define N_MASC 8
#define IPTOS_CLASS_CS0 0x00
#define IPTOS_CLASS_CS1 0x20
#define IPTOS_CLASS_CS2 0x40
#define IPTOS_CLASS_CS3 0x60
#define IPTOS_CLASS_CS4 0x80
#define WTERMSIG(status) __WTERMSIG (status)
#define ACL_IPLINK_INCLUDE_H 
#define ACL_MSG_INCLUDE_H 
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define ACL_AIO_CTL_CONNECT_HOOK_ADD 22
#define ACL_AQUEUE_ERR_COND_SIGNALE 5
#define IPOPT_SECUR_EFTO 0x789a
#define ACL_DBERR_INCLUDE_H 
#define _IO_uid_t __uid_t
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define FIOCLEX 0x5451
#define ____sigval_t_defined 
#define TIOCSERGSTRUCT 0x5458
#define AF_SECURITY PF_SECURITY
#define TCSBRK 0x5409
#define N_IRDA 11
#define _STDIO_H 1
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define ACL_INET_FLAG_FASTOPEN 1 << 2
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define SO_DETACH_BPF SO_DETACH_FILTER
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define _BITS_STDINT_UINTN_H 1
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define SI_QUEUE SI_QUEUE
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define _POSIX_SIGQUEUE_MAX 32
#define ACL_SEM_INCLUDE_H 
#define LOCK_SH 1
#define _SYS_MMAN_H 1
#define MAP_ANON MAP_ANONYMOUS
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define __DBL_HAS_INFINITY__ 1
#define __SIZEOF_PTHREAD_MUTEX_T 40
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define IP_MTU_DISCOVER 10
#define IPV6_PMTUDISC_OMIT 5
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#define ACL_IOCTL_INCLUDE_H 
#define __NGREG 23
#define ITIMER_PROF ITIMER_PROF
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define IP_MINTTL 21
#define W_EXITCODE(ret,sig) __W_EXITCODE (ret, sig)
#define CDSUSP CTRL('y')
#define IPOPT_MINOFF 4
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define __F_GETOWN 9
#define MSG_FASTOPEN MSG_FASTOPEN
#define DBL_DECIMAL_DIG __DBL_DECIMAL_DIG__
#define RAND_MAX 2147483647
#define PF_NETROM 6
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define isspace(c) __isctype((c), _ISspace)
#define stdin stdin
#define ACL_VSTREAM_PEER(stream_ptr) ((stream_ptr)->addr_peer ? (stream_ptr)->addr_peer : "")
#define O_RDONLY 00
#define SIGQUIT 3
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define si_syscall _sifields._sigsys._syscall
#define AUT_FLAG_ELSE 6
#define __USE_XOPEN2K 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define _POSIX_TIMER_MAX 32
#define acl_foreach_reverse ACL_FOREACH_REVERSE
#define ACL_HEX_CODE_INCLUDE_H 
#define _SC_CLK_TCK _SC_CLK_TCK
#define ACL_INTERNAL_LOCK ACL_FLOCK_STYLE_FLOCK
#define __lldiv_t_defined 1
#define ACL_TRANSFER_FD_INCLUDE_H 
#define ACL_VSTRING_INCLUDE_H 
#define __DEC32_MIN_EXP__ (-94)
#define ACL_VALID_HOSTNAME_LEN 255
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define SCHED_FIFO 1
#define __DADDR_T_TYPE __S32_TYPE
#define SIOCADDRT 0x890B
#define ACL_VSTREAM_SET_NS(x) ((x)->flag |= ACL_VSTREAM_FLAG_NS)
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define IPV6_ORIGDSTADDR 74
#define _POSIX_PATH_MAX 256
#define IPV6_UNICAST_IF 76
#define __INTPTR_WIDTH__ 64
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define EPIPE 32
#define _IOS_TRUNC 16
#define AF_NETLINK PF_NETLINK
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define acl_htable_foreach ACL_HTABLE_FOREACH
#define TCP_MSS 512
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define ACL_MASTER_SERVER_INT_TABLE 1
#define acl_pthread_cond_destroy pthread_cond_destroy
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define LONG_MIN (-LONG_MAX - 1L)
#define IPPROTO_IPV6 IPPROTO_IPV6
#define __FD_SETSIZE 1024
#define IPTOS_PREC_IMMEDIATE IPTOS_CLASS_CS2
#define be32toh(x) __bswap_32 (x)
#define ACL_DEBUG_EVENT (ACL_DEBUG_INTER_BASE + 4)
#define MS_SYNC 4
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _IO_MAGIC 0xFBAD0000
#define IPPROTO_SCTP IPPROTO_SCTP
#define ACL_SPOOL_CTL_DELAY_SEC ACL_IOCTL_CTL_DELAY_SEC
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define ACL_VSTREAM_POPEN_SHELL 6
#define __FLT32X_HAS_DENORM__ 1
#define h_errno (*__h_errno_location ())
#define __INT_FAST16_TYPE__ long int
#define ACL_ISDIGIT(c) isdigit(_ACL_UCHAR_(c))
#define SOMAXCONN 128
#define ACL_XML3_S_MEND 15
#define TCSETSW 0x5403
#define _XBS5_LP64_OFF64 1
#define _SIZE_T_DEFINED 
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define IPTTLDEC 1
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define POSIX_MADV_NORMAL 0
#define ACL_APP_CTL_THREAD_INIT ACL_MASTER_SERVER_THREAD_INIT
#define SI_USER SI_USER
#define ACL_ECONNREFUSED ECONNREFUSED
#define _WCHAR_T_DEFINED_ 
#define SIOCGIFBR 0x8940
#define isalpha(c) __isctype((c), _ISalpha)
#define _POSIX_NO_TRUNC 1
#define ECHILD 10
#define ACL_RFC1035_TYPE_MX 15
#define EBADMSG 74
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define FLT_MIN_10_EXP __FLT_MIN_10_EXP__
#define _POSIX_REGEXP 1
#define __f64(x) x ##f64
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define __USE_POSIX199506 1
#define SIOCGIFCOUNT 0x8938
#define _FEATURES_H 1
#define __LDBL_HAS_DENORM__ 1
#define ACL_DNS_FLAG_ALLOC (1 << 0)
#define acl_mystr_strip acl_strstrip
#define _BITS_POSIX2_LIM_H 1
#define _STAT_VER _STAT_VER_LINUX
#define ifr_map ifr_ifru.ifru_map
#define ACL_MASTER_STATUS_FD 5
#define __stub_getmsg 
#define _POSIX_RE_DUP_MAX 255
#define ACL_VSTREAM_BUFSIZE 4096
#define _POSIX_MESSAGE_PASSING 200809L
#define _IO_FIXED 010000
#define ACL_MEM_SLICE_INCLUDE_H 
#define FLT_MIN __FLT_MIN__
#define __S_IFREG 0100000
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define __stub_fattach 
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define ACL_SCAN_CTL_RMDIR_FN 3
#define __DEC128_MAX__ 9.999999999999999999999999999999999E6144DL
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __INT_LEAST32_MAX__ 0x7fffffff
#define SIGABRT 6
#define _IO_UNBUFFERED 2
#define ACL_FHANDLE_F_LOCK (1 << 0)
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define __O_DSYNC 010000
#define _IOC_NRSHIFT 0
#define acl_vstream_fclose acl_vstream_close
#define _IO_INTERNAL 010
#define _POSIX_MEMORY_PROTECTION 200809L
#define POSIX_FADV_NORMAL 0
#define __DEC32_MIN__ 1E-95DF
#define SIGSTKSZ 8192
#define _IOC_SIZE(nr) (((nr) >> _IOC_SIZESHIFT) & _IOC_SIZEMASK)
#define ACL_CONNECT_INCLUDE_H 
#define ACL_HTABLE_FLAG_KEY_LOWER (1 << 3)
#define SA_RESETHAND 0x80000000
#define __dev_t_defined 
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define EAI_SOCKTYPE -7
#define ACL_CORE_LIMIT_INCLUDE_H 
#define ACL_DNS_ERR_NO_AUTH -9
#define B_TRUE 1
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define __S32_TYPE int
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define IP_PKTOPTIONS 9
#define acl_spool_create_ex acl_ioctl_create_ex
#define __ACL_MASTER_PROTO_INCLUDE_H__ 
#define __cleanup_fct_attribute 
#define ACL_DNS_ERR_YX -6
#define ACL_DEBUG_INTER_BASE 0
#define F_SETFD 2
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define SO_DONTROUTE 5
#define __DBL_MAX_EXP__ 1024
#define SOL_SOCKET 1
#define __WCHAR_WIDTH__ 32
#define ACL_FOREACH(iter,container) for ((container)->iter_head(&(iter), (container)); (iter).ptr; (container)->iter_next(&(iter), (container)))
#define __BIT_TYPES_DEFINED__ 1
#define AUT_SET_STR(__test_line__,__name__,__value__) do { __value__ = aut_line_getvalue(__test_line__, __name__); if (__value__ == NULL) { printf("%s(%d): getvalue error for %s, line=%d\n", __FILE__, __LINE__, __name__, aut_line_number(__test_line__)); return (-1); } } while (0)
#define MAP_LOCKED 0x02000
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define ACL_EVENT_NULL_CONTEXT ((char *) 0)
#define ACL_MASTER_STAT_AVAIL 1
#define __toascii_l(c,l) ((l), __toascii (c))
#define IP_PMTUDISC_WANT 1
#define IP_RECVERR 11
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define ACL_XML2_S_MTXT 13
#define ACL_XML3_S_MTAG 12
#define __DEC128_EPSILON__ 1E-33DL
#define ACL_XML2_F_META_QM (1 << 0)
#define ACL_CONFIG_INT64_TABLE ACL_CFG_INT64_TABLE
#define _POSIX_TIMERS 200809L
#define ACL_XML3_S_RGT 7
#define EREMOTEIO 121
#define ACL_FHANDLE_O_MLOCK (1 << 1)
#define __SSE2_MATH__ 1
#define ACL_OPEN_LOCK_INCLUDE_H 
#define __ATOMIC_HLE_RELEASE 131072
#define CINTR CTRL('c')
#define __FSFILCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define ACL_INET_FLAG_NONE 0
#define PDP_ENDIAN __PDP_ENDIAN
#define IPV6_ADDRFORM 1
#define EREMOTE 66
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _VA_LIST_ 
#define isspace_l(c,l) __isspace_l ((c), (l))
#define S_BLKSIZE 512
#define ACL_RING_FOREACH_REVERSE(iter,head_ptr) for ((iter).ptr = acl_ring_pred((head_ptr)); (iter).ptr != (head_ptr); (iter).ptr = acl_ring_pred((iter).ptr))
#define acl_stat stat64
#define ACL_EVENT_TIME (1 << 5)
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define acl_uint64 unsigned long long int
#define ACL_MASTER_SERVER_THREAD_EXIT_CTX 23
#define _BITS_SYSMACROS_H 1
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __SYSCALL_ULONG_TYPE
#define __amd64 1
#define _POSIX_TZNAME_MAX 6
#define CEOL _POSIX_VDISABLE
#define SIGILL 4
#define ACL_VSTREAM_FLAG_RDSHORT (1 << 13)
#define _POSIX_SSIZE_MAX 32767
#define BUS_OBJERR BUS_OBJERR
#define acl_array_destroy acl_array_free
#define TCGETS2 _IOR('T', 0x2A, struct termios2)
#define MADV_KEEPONFORK 19
#define ACL_AQUEUE_ERR_UNKNOWN -1
#define _IO_LINKED 0x80
#define AF_UNSPEC PF_UNSPEC
#define ACL_USE_PATHS_H 
#define MCAST_INCLUDE 1
#define TIOCM_DSR 0x100
#define IPPROTO_RSVP IPPROTO_RSVP
#define SEGV_MAPERR SEGV_MAPERR
#define ACL_MEMPOOL_CTL_DISABLE 2
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define _POSIX_MAX_CANON 255
#define _IO_HAVE_ST_BLKSIZE _G_HAVE_ST_BLKSIZE
#define __STDC_NO_THREADS__ 1
#define IPV6_UNICAST_HOPS 16
#define AVL_AFTER (1)
#define __HAVE_FLOAT32 1
#define __STD_AFX_INCLUDE_H__ 
#define ACL_SPOOL_NOTIFY_FN ACL_IOCTL_NOTIFY_FN
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define SIOCDELMULTI 0x8932
#define POLLHUP 0x010
#define PF_PHONET 35
#define TCGETA 0x5405
#define __USECONDS_T_TYPE __U32_TYPE
#define TCP_DEFER_ACCEPT 9
#define _IO_DELETE_DONT_CLOSE 0x40
#define _PTRDIFF_T_DECLARED 
#define ACL_AIO_CTL_LISTEN_FN 2
#define N_6PACK 7
#define TCGETX 0x5432
#define __OFF_T_TYPE __SYSCALL_SLONG_TYPE
#define IPOPT_CLASS(o) ((o) & IPOPT_CLASS_MASK)
#define IP_PMTUDISC_PROBE 3
#define ACL_XML_FLAG_XML_DECODE (1 << 2)
#define ACL_VSTREAM_POPEN_INCLUDE_H 
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define sigmask(sig) ((int)(1u << ((sig) - 1)))
#define MAX_IPOPTLEN 40
#define SEGV_BNDERR SEGV_BNDERR
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define acl_pthread_mutex_unlock pthread_mutex_unlock
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define O_FSYNC O_SYNC
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define EXFULL 54
#define __ATOMIC_HLE_ACQUIRE 65536
#define ACL_SLICE_FLAG_OFF (0)
#define ACL_EHOSTUNREACH EHOSTUNREACH
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 0
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define TCP_KEEPIDLE 4
#define ACL_XML_S_NXT 0
#define _T_WCHAR 
#define AF_AX25 PF_AX25
#define _PC_VDISABLE _PC_VDISABLE
#define ACL_EISCONN EISCONN
#define IFF_POINTOPOINT IFF_POINTOPOINT
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define SO_COOKIE 57
#define AF_RDS PF_RDS
#define IPPROTO_AH IPPROTO_AH
#define __SIZEOF_SIZE_T__ 8
#define _SC_BARRIERS _SC_BARRIERS
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define TIOCGICOUNT 0x545D
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define PROT_GROWSDOWN 0x01000000
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define __HAVE_FLOAT64 1
#define IPOPT_MEASUREMENT IPOPT_DEBMEAS
#define st_atime st_atim.tv_sec
#define PTHREAD_MUTEX_INITIALIZER { { 0, 0, 0, 0, 0, __PTHREAD_SPINS, { 0, 0 } } }
#define ACL_BITS_MASK_CLR(number,mask) (ACL_BITS_MASK_FD_BYTE((number), (mask)) &= ~ACL_BITS_MASK_FD_BIT(number))
#define ACL_RES_ERR_CONN -104
#define ACL_DNS_ERR_SVR -2
#define SO_PEERSEC 31
#define AVL_XBALANCE(n) ((int)(((n)->avl_pcb & 3) - 1))
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define SIG_BLOCK 0
#define __FD_ZERO(fdsp) do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " __FD_ZERO_STOS : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&__FDS_BITS (fdsp)[0]) : "memory"); } while (0)
#define ACL_RFC1035_TYPE_SOA 6
#define ACL_AIO_CTL_TIMEO_HOOK_ADD 20
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define ENOTEMPTY 39
#define ACL_IFCONF_INCLUDE_H 
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX (18446744073709551615UL)
#define _GETOPT_POSIX_H 1
#define __SIZEOF_WINT_T__ 4
#define INT_LEAST16_MIN (-32767-1)
#define _SC_BASE _SC_BASE
#define ACL_ETIMEDOUT ETIMEDOUT
#define ifr_flags ifr_ifru.ifru_flags
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define ACL_XML2_FLAG_IGNORE_SLASH (1 << 1)
#define TIOCSPGRP 0x5410
#define MSG_WAITFORONE MSG_WAITFORONE
#define __f32x(x) x ##f32x
#define AVL_DATA2NODE(d,o) ((struct avl_node *)((uintptr_t)(d) + (o)))
#define TCSETSW2 _IOW('T', 0x2C, struct termios2)
#define acl_pthread_cond_init pthread_cond_init
#define PF_UNSPEC 0
#define ENOTNAM 118
#define __u_intN_t(N,MODE) typedef unsigned int u_int ##N ##_t __attribute__ ((__mode__ (MODE)))
#define ACL_XML_S_MEND 15
#define __LONG_LONG_WIDTH__ 64
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define ACL_MASTER_SERVER_THREAD_INIT_CTX 21
#define __U16_TYPE unsigned short int
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define CLD_EXITED CLD_EXITED
#define AI_CANONNAME 0x0002
#define _GCC_WCHAR_T 
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX (4294967295u)
#define SIOCATMARK 0x8905
#define TIOCM_RI TIOCM_RNG
#define SUN_LEN(ptr) ((size_t) (((struct sockaddr_un *) 0)->sun_path) + strlen ((ptr)->sun_path))
#define ACL_BINHASH_STAT_OK 0
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp ((struct __jmp_buf_tag *) (void *) __cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define S_IWUSR __S_IWRITE
#define PF_X25 9
#define UINTPTR_MAX (18446744073709551615UL)
#define _IOC_SIZEMASK ((1 << _IOC_SIZEBITS)-1)
#define acl_vbuf_eof(v) ((v)->flags & ACL_VBUF_FLAG_EOF)
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define ACL_APP_CTL_CFG_INT ACL_MASTER_SERVER_INT_TABLE
#define ACL_XML_S_RTAG 8
#define _PTRDIFF_T 
#define ACL_MASTER_XPORT_NAME_INET "inet"
#define ACL_RES_ERR_RTMO -102
#define SO_PASSSEC 34
#define __PTHREAD_MUTEX_LOCK_ELISION 1
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define NETDB_INTERNAL -1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define ACL_AIO_CTL_READ_HOOK_ADD 14
#define acl_htable_delete_r acl_htable_delete
#define _SC_PIPE _SC_PIPE
#define __GXX_ABI_VERSION 1011
#define MCL_FUTURE 2
#define si_uid _sifields._kill.si_uid
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define ACL_NORMAL_EXIT_STATUS(status) !(status)
#define _SC_PAGESIZE _SC_PAGESIZE
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define ACL_VSTREAM_FLAG_DEFER_FREE (1 << 4)
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define ifa_dstaddr ifa_ifu.ifu_dstaddr
#define __FLT_MIN_EXP__ (-125)
#define PF_BRIDGE 7
#define IP_PMTUDISC_DONT 0
#define MAP_FIXED 0x10
#define ACL_HTABLE_ITER_VALUE(iter) ((iter).ptr->value)
#define acl_spool_disable_readwrite acl_ioctl_disable_readwrite
#define POLLNVAL 0x020
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define __FD_CLR(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] &= ~__FD_MASK (d)))
#define WEXITED 4
#define EBADE 52
#define ACL_ENOBUFS ENOBUFS
#define _PC_LINK_MAX _PC_LINK_MAX
#define IPV6_V6ONLY 26
#define IFF_DYNAMIC IFF_DYNAMIC
#define ACL_AIO_INCLUDE_H 
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define SOL_IUCV 277
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define __glibc_clang_has_extension(ext) 0
#define ACL_EWOULDBLOCK EWOULDBLOCK
#define _POSIX_SYMLINK_MAX 255
#define O_WRONLY 01
#define ACL_AIO_SET_CTX(stream_ptr,_ctx_) do { ACL_ASTREAM *__stream_ptr = stream_ptr; __stream_ptr->context = _ctx_; } while(0)
#define AF_PPPOX PF_PPPOX
#define UINT32_MAX (4294967295U)
#define ENOEXEC 8
#define _POSIX_SHELL 1
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define IPV6_RECVRTHDR 56
#define alloca(size) __builtin_alloca (size)
#define LDBL_MIN __LDBL_MIN__
#define ACL_EVENT_POLL 1
#define ACL_VSTREAM_CTL_CTX ACL_VSTREAM_CTL_CONTEXT
#define _XOPEN_SHM 1
#define IP_MULTICAST_ALL 49
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define PF_IPX 4
#define ACL_MYMALLOC_INCLUDE_H 
#define HOST_NOT_FOUND 1
#define _SC_LINE_MAX _SC_LINE_MAX
#define ACL_IOCTL_CTL_EXIT_FN 6
#define ACL_TOKEN_TREE_MATCH(acl_token_tree_in,s_in,delim_in,delim_tab_in,acl_token_out) do { ACL_TOKEN *acl_token_iter = (acl_token_tree_in), *acl_token_tmp; (acl_token_out) = NULL; if (((const char*) delim_in)) { int _i; while (*(s_in)) { for (_i = 0; ((const char*) delim_in)[_i]; _i++) { if (*(s_in) == ((const char*) delim_in)[_i]) goto _END; } acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { if ((acl_token_out)) break; acl_token_iter = (acl_token_tree_in); acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { (s_in)++; continue; } } if ((acl_token_tmp->flag & ACL_TOKEN_F_STOP)) (acl_token_out) = acl_token_tmp; acl_token_iter = acl_token_tmp; (s_in)++; } _END: break; } else if (((char*) delim_tab_in)) { while (*(s_in)) { if (((char*) delim_tab_in)[*((const unsigned char*)(s_in))]) break; acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { if ((acl_token_out)) break; acl_token_iter = (acl_token_tree_in); acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { (s_in)++; continue; } } if ((acl_token_tmp->flag & ACL_TOKEN_F_STOP)) (acl_token_out) = acl_token_tmp; acl_token_iter = acl_token_tmp; (s_in)++; } } else { while (*(s_in)) { acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { if ((acl_token_out)) break; acl_token_iter = (acl_token_tree_in); acl_token_tmp = acl_token_iter->tokens[*((const unsigned char*)(s_in))]; if (acl_token_tmp == NULL) { (s_in)++; continue; } } if ((acl_token_tmp->flag & ACL_TOKEN_F_STOP)) (acl_token_out) = acl_token_tmp; acl_token_iter = acl_token_tmp; (s_in)++; } } } while (0)
#define _POSIX_PTHREAD_SEMANTICS 1
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __PTRDIFF_T 
#define _DIRENT_HAVE_D_OFF 
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define ENOCSI 50
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_WORD_BIT _SC_WORD_BIT
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define AUT_RETURN_ERROR(__test_line__) do { printf("%s(%d): %s error, line=%d\n", __FILE__, __LINE__, aut_line_cmdname(__test_line__), aut_line_number(__test_line__)); return (-1); } while (0)
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define __HAVE_GENERIC_SELECTION 1
#define DBL_DIG __DBL_DIG__
#define ACL_PTHREAD_KEYS_MAX PTHREAD_KEYS_MAX
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define ifr_netmask ifr_ifru.ifru_netmask
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define _POSIX_ADVISORY_INFO 200809L
#define ifr_mtu ifr_ifru.ifru_mtu
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define IPV6_RECVHOPLIMIT 51
#define F_GETFL 3
#define IFF_NOARP IFF_NOARP
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define TIOCSERGWILD 0x5454
#define ACL_VSTREAM_FLAG_EOF (1 << 11)
#define F_LOCK 1
#define _POSIX_SEMAPHORES 200809L
#define MAP_STACK 0x20000
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define ACL_RFC1035_TYPE_MAILA 253
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define S_IRWXG (S_IRWXU >> 3)
#define ACL_RFC1035_TYPE_MAILB 253
#define IPV6_RECVTCLASS 66
#define _ANSI_STDDEF_H 
#define toascii_l(c,l) __toascii_l ((c), (l))
#define O_RSYNC O_SYNC
#define IOCSIZE_SHIFT (_IOC_SIZESHIFT)
#define IP_DF 0x4000
#define TCP_SAVE_SYN 27
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define ACL_DB_ERR_UPDATE 101
#define N_HDLC 13
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define EADDRINUSE 98
#define _VA_LIST 
#define _BITS_STDIO_LIM_H 1
#define ACL_VBUF_TO_APPL(vbuf_ptr,app_type,vbuf_member) ((app_type *) (((char *) (vbuf_ptr)) - offsetof(app_type,vbuf_member)))
#define IPPROTO_MH IPPROTO_MH
#define __STRINGS_FORTIFIED 1
#define ACL_APP_CTL_ON_CLOSE ACL_MASTER_SERVER_ON_CLOSE
#define MAXNAMLEN NAME_MAX
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define ACL_SCAN_CTL_FN 1
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define ACL_ARRAY_INCLUDE_H 
#define __key_t_defined 
#define ACL_VSTREAM_FLAG_CONNECT (1 << 15)
#define SO_BUSY_POLL 46
#define TIOCMBIC 0x5417
#define TCGETS 0x5401
#define TTYDEF_CFLAG (CREAD | CS7 | PARENB | HUPCL)
#define ACL_PRINTF(format_idx,arg_idx) __attribute__((__format__ (__printf__, (format_idx), (arg_idx))))
#define IFF_BROADCAST IFF_BROADCAST
#define isxdigit(c) __isctype((c), _ISxdigit)
#define LDBL_TRUE_MIN __LDBL_DENORM_MIN__
#define TH_SYN 0x02
#define acl_pthread_getspecific pthread_getspecific
#define IPV6_MTU 24
#define SO_RCVLOWAT 18
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define ACL_DNS_ERR_YXRR -7
#define __F_SETOWN_EX 15
#define IPV6_RECVDSTOPTS 58
#define isblank(c) __isctype((c), _ISblank)
#define __LITTLE_ENDIAN 1234
#define AVL_SETCHILD(n,c) ((n)->avl_pcb = (uintptr_t)(((n)->avl_pcb & ~4) | ((c) << 2)))
#define IPPROTO_MTP IPPROTO_MTP
#define acl_mystr_trim acl_strtrim
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define _IOC_TYPEMASK ((1 << _IOC_TYPEBITS)-1)
#define TCP_COOKIE_TRANSACTIONS 15
#define __WCOREFLAG 0x80
#define ACL_VSTREAM_CTL_PATH 3
#define TCP_MD5SIG_MAXKEYLEN 80
#define _XOPEN_LEGACY 1
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define IPOPT_SATID 136
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __HAVE_DISTINCT_FLOAT64 0
#define __O_DIRECTORY 0200000
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define __LP64__ 1
#define __S_ISUID 04000
#define UTIME_NOW ((1l << 30) - 1l)
#define __isascii_l(c,l) ((l), __isascii (c))
#define _BITS_SIGNUM_GENERIC_H 1
#define __ASM_GENERIC_SOCKET_H 
#define _IO_off64_t __off64_t
#define IPV6_MULTICAST_IF 17
#define IFF_PORTSEL IFF_PORTSEL
#define IPOPT_CONTROL 0x00
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define __S_ISVTX 01000
#define _POSIX_CLOCKRES_MIN 20000000
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define _POSIX_IPV6 200809L
#define FLT_RADIX __FLT_RADIX__
#define __WTERMSIG(status) ((status) & 0x7f)
#define _POSIX_SYMLOOP_MAX 8
#define ACL_RFC1035_TYPE_ALL 255
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SO_SNDTIMEO 21
#define __USE_UNIX98 
#define st_ctime st_ctim.tv_sec
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define __MODE_T_TYPE __U32_TYPE
#define CLOCK_REALTIME_ALARM 8
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define EOF (-1)
#define LIB_ACL_INCLUDE_H 
#define ACL_VSTREAM_FLAG_READ (1 << 0)
#define SIGTRAP 5
#define EISDIR 21
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define TIOCSTI 0x5412
#define __DECIMAL_BID_FORMAT__ 1
#define IFF_RUNNING IFF_RUNNING
#define ACL_DEFINE_BSD_INCLUDE_H 
#define ACL_XML_S_MTAG 12
#define __FLT64_MIN_EXP__ (-1021)
#define SHUT_RDWR SHUT_RDWR
#define ACL_NETDB_INCLUDE_H 
#define ACL_XML2_S_RLT 6
#define acl_ring_foreach ACL_RING_FOREACH
#define IPV6_RECVERR 25
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PF_MAX 44
#define O_DSYNC __O_DSYNC
#define IPTOS_PREC_PRIORITY IPTOS_CLASS_CS1
#define ACL_HTABLE_STAT_INVAL 1
#define _IOS_ATEND 4
#define acl_ring_succ ACL_RING_SUCC
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define CHAR_MAX SCHAR_MAX
#define WAIT_MYPGRP 0
#define INT_LEAST8_MAX (127)
#define FPE_INTDIV FPE_INTDIV
#define ACL_CODE_INCLUDE_H 
#define ACL_XML3_F_META_QM (1 << 0)
#define IP_RECVTOS 13
#define _BITS_SETJMP_H 1
#define SOL_DECNET 261
#define MAP_NORESERVE 0x04000
#define TCP_CC_INFO 26
#define __CFLOAT64X _Complex _Float64x
#define TCPOPT_EOL 0
#define __FLT64_MIN_10_EXP__ (-307)
#define AF_KCM PF_KCM
#define _BITS_SIGNUM_H 1
#define ACL_XML3_S_RLT 6
#define IPPROTO_TP IPPROTO_TP
#define __FDS_BITS(set) ((set)->__fds_bits)
#define ACL_XML2_S_CDATA 16
#define IP_OFFMASK 0x1fff
#define ACL_VBUF_FLAG_EOF (1<<1)
#define acl_vstring_str(vp) ((char *) (vp)->vbuf.data)
#define SO_PROTOCOL 38
#define ACL_XML3_S_TXT 11
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define MADV_HWPOISON 100
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define si_pkey _sifields._sigfault._bounds._pkey
#define ACL_HTABLE_STAT_OK 0
#define __FLT64X_DECIMAL_DIG__ 21
#define ACL_STRINGOPS_INCLUDE_H 
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define IP_BIND_ADDRESS_NO_PORT 24
#define __DEC128_MIN__ 1E-6143DL
#define ACL_RING_PREPEND(ring_in,entry_in) do { ACL_RING *ring_ptr = (ring_in), *entry_ptr = (entry_in); entry_ptr->pred = ring_ptr->pred; entry_ptr->succ = ring_ptr; entry_ptr->parent = ring_ptr->parent; ring_ptr->pred->succ = entry_ptr; ring_ptr->pred = entry_ptr; ring_ptr->parent->len++; } while (0)
#define ifr_data ifr_ifru.ifru_data
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define _IOS_NOREPLACE 64
#define ACL_MASTER_SERVER_ON_TIMEOUT 18
#define ACL_XML3_FLAG_IGNORE_SLASH (1 << 1)
#define AVL_MKINDEX(n,c) ((avl_index_t)(n) | (c))
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX (2147483647)
#define AF_KEY PF_KEY
#define ACL_DLINK_INCLUDE 
#define F_WRLCK 1
#define EIDRM 43
#define PF_ROSE 11
#define PROT_READ 0x1
#define TCPI_OPT_ECN 8
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define ACL_MASTER_SERVER_THREAD_INIT 20
#define ACL_ENOMEM ENOMEM
#define FPE_FLTSUB FPE_FLTSUB
#define _PC_NAME_MAX _PC_NAME_MAX
#define _IOC(dir,type,nr,size) (((dir) << _IOC_DIRSHIFT) | ((type) << _IOC_TYPESHIFT) | ((nr) << _IOC_NRSHIFT) | ((size) << _IOC_SIZESHIFT))
#define acl_spool_create acl_ioctl_create
#define MADV_DONTDUMP 16
#define ACL_URLCODE_INCLUDE_H 
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define LOGIN_NAME_MAX 256
#define _IO_TIED_PUT_GET 0x400
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define CHAR_BIT __CHAR_BIT__
#define _PC_MAX_CANON _PC_MAX_CANON
#define IPTOS_RELIABILITY 0x04
#define EDEADLOCK EDEADLK
#define ACL_RFC1035_TYPE_NS 2
#define ACL_RFC1035_TYPE_HINFO 13
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define PF_INET6 10
#define TIOCGSERIAL 0x541E
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define ACL_VBUF_FLAG_ERR (1<<0)
#define TIOCSETD 0x5423
#define ACL_ALLOCATOR_CTL_MIN_SIZE 1
#define TCSETAF 0x5408
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define ACL_AVL_H 
#define acl_binhash_foreach_reverse ACL_BINHASH_FOREACH_REVERSE
#define __USE_POSIX2 1
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define IP_TRANSPARENT 19
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define ACL_VSTREAM_FLAG_ERR (1 << 10)
#define VAR_AUT_ENDIF "ENDIF"
#define SIOCGIFFLAGS 0x8913
#define __SLONGWORD_TYPE long int
#define ACL_APP_CTL_ON_ACCEPT ACL_MASTER_SERVER_ON_ACCEPT
#define IP_RECVTTL 12
#define acl_binhash_iter_value ACL_BINHASH_ITER_VALUE
#define ACL_GETOPT_INCLUDE_H 
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ACL_JSON_T_A_BOOL (1 << 2)
#define SIOCSIFMETRIC 0x891e
#define acl_spool_enable_read acl_ioctl_enable_read
#define acl_vstring_fgets_nonl_bound(s,p,l) (acl_vstring_gets_nonl_bound((s), (p), (l)) == ACL_VSTREAM_EOF ? 0 : (s))
#define MSG_RST MSG_RST
#define AUT_FLAG_LOOP_BEGIN 1
#define ACL_INIT_INCLUDE_H 
#define _IOR(type,nr,size) _IOC(_IOC_READ,(type),(nr),(_IOC_TYPECHECK(size)))
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define _SC_TRACE _SC_TRACE
#define SIGEV_THREAD SIGEV_THREAD
#define IPV6_2292PKTINFO 2
#define ACL_IPITEM ACL_DITEM
#define ACL_BITS_MASK_SET(number,mask) (ACL_BITS_MASK_FD_BYTE((number), (mask)) |= ACL_BITS_MASK_FD_BIT(number))
#define CHAR_MIN SCHAR_MIN
#define MAX_CANON 255
#define ACL_FPATH(fp) ACL_VSTREAM_PATH((fp)->fp)
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define AF_IUCV PF_IUCV
#define INT_LEAST8_MIN (-128)
#define ACL_XML3_S_LTAG 5
#define _IOW(type,nr,size) _IOC(_IOC_WRITE,(type),(nr),(_IOC_TYPECHECK(size)))
#define HAS_UINTPTR 
#define __VERSION__ "7.5.0"
#define FIOQSIZE 0x5460
#define S_IFCHR __S_IFCHR
#define acl_pthread_attr_setdetachstate pthread_attr_setdetachstate
#define __IOV_MAX 1024
#define TCPOLEN_WINDOW 3
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define ACL_BINHASH_FOREACH_REVERSE(iter,table_ptr) if (table_ptr) for((void) acl_binhash_iter_tail((table_ptr), &iter); (iter).ptr; (void) acl_binhash_iter_prev(&iter))
#define F_SETOWN __F_SETOWN
#define ACL_PTHREAD_MUTEX_RECURSIVE PTHREAD_MUTEX_RECURSIVE_NP
#define IP_PKTINFO 8
#define __UINT64_C(c) c ## UL
#define _PTRDIFF_T_ 
#define ACL_VSPRINTF_INCLUDE_H 
#define ACL_MAKE_DIRS_INCLUDE_H 
#define _SYS_CDEFS_H 1
#define __ACL_DEFINE_MACOSX_INCLUDE_H__ 
#define isprint(c) __isctype((c), _ISprint)
#define IPTOS_DSCP_EF 0xb8
#define _MKNOD_VER 0
#define ACL_VSTREAM_IS_NS(x) (((x)->flag & ACL_VSTREAM_FLAG_NS) != 0)
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define S_IFDIR __S_IFDIR
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define SIOCRTMSG 0x890D
#define ACL_DB_ERR_CALLBACK 1
#define acl_pthread_cond_timedwait pthread_cond_timedwait
#define SIOCSIFENCAP 0x8926
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define EBFONT 59
#define ACL_XML2_S_RGT 7
#define acl_xml_parse acl_xml_update
#define MADV_DOFORK 11
#define ACL_AIO_CTL_KEEP_READ 13
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define FP_XSTATE_MAGIC2_SIZE sizeof(FP_XSTATE_MAGIC2)
#define _POSIX_VERSION 200809L
#define SIOCSIFTXQLEN 0x8943
#define TCP_MAX_WINSHIFT 14
#define _STDC_PREDEF_H 1
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define TCP_COOKIE_OUT_NEVER (1 << 1)
#define ifr_slave ifr_ifru.ifru_slave
#define __ACL_UDP_PARAMS_INCLUDE_H_ 
#define __INT_WCHAR_T_H 
#define _IO_file_flags _flags
#define F_UNLCK 2
#define SIOCSIFBR 0x8941
#define IPTOS_THROUGHPUT 0x08
#define __USE_XOPEN2K8 1
#define ACL_TEST_MACRO_INCLUDE_H 
#define ACL_VSTREAM_FLAG_CLIENT (1 << 14)
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define ACL_TEST_STRUCT_INCLUDE_H 
#define SOCK_DGRAM SOCK_DGRAM
#define POLLOUT 0x004
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define islower_l(c,l) __islower_l ((c), (l))
#define _IOWR_BAD(type,nr,size) _IOC(_IOC_READ|_IOC_WRITE,(type),(nr),sizeof(size))
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define ACL_EVENT_READ (1 << 0)
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define ENOTSOCK 88
#define CSUSP CTRL('z')
#define st_mtime st_mtim.tv_sec
#define O_RDWR 02
#define ACL_VSTREAM_POPEN_UID 3
#define LINE_MAX _POSIX2_LINE_MAX
#define MCL_CURRENT 1
#define __STRING(x) #x
#define SO_OOBINLINE 10
#define NGROUPS_MAX 65536
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define EHOSTUNREACH 113
#define NI_NUMERICHOST 1
#define _T_PTRDIFF_ 
#define FPE_FLTRES FPE_FLTRES
#define SIGVTALRM 26
#define MSG_CONFIRM MSG_CONFIRM
#define IFF_NOTRAILERS IFF_NOTRAILERS
#define AF_ECONET PF_ECONET
#define XATTR_LIST_MAX 65536
#define PF_FILE PF_LOCAL
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define ifa_broadaddr ifa_ifu.ifu_broadaddr
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define acl_pthread_attr_setstacksize pthread_attr_setstacksize
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define __FLT128_MAX_EXP__ 16384
#define ENOTDIR 20
#define __INO_T_TYPE __SYSCALL_ULONG_TYPE
#define ACL_JSON_T_PAIR (1 << 14)
#define SIOCGIFINDEX 0x8933
#define islower(c) __isctype((c), _ISlower)
#define __ACL_XMLCODE_INCLUDE_H__ 
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define PROT_WRITE 0x2
#define SOL_NFC 280
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define F_ULOCK 0
#define ACL_MDT_FLAG_SLICE1 (1 << 10)
#define SI_ASYNCIO SI_ASYNCIO
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define TCP_LINGER2 8
#define ACL_MASTER_FLOW_WRITE 4
#define IPOPT_SECUR_TOPSECRET 0x6bc5
#define __struct_tm_defined 1
#define ACL_MDT_FLAG_SLICE3 (1 << 12)
#define _BITS_G_CONFIG_H 1
#define ACL_FIONREAD_IN_TERMIOS_H 
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define __ssize_t_defined 
#define EBADFD 77
#define TIOCMSET 0x5418
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _POSIX_STREAM_MAX 8
#define SIOCSIFDSTADDR 0x8918
#define _SC_FSYNC _SC_FSYNC
#define ACL_ASTREAM_STATUS_CONNECT_TIMEOUT 3
#define __FLT32_MANT_DIG__ 24
#define IPV6_MULTICAST_HOPS 18
#define EL3HLT 46
#define _SYS_SIZE_T_H 
#define __sigval_t_defined 
#define ACL_VSTREAM_FLAG_US (1 << 21)
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define ACL_HTABLE_FOREACH(iter,table_ptr) if (table_ptr) for((void) acl_htable_iter_head((table_ptr), &iter); (iter).ptr; (void) acl_htable_iter_next(&iter))
#define FPE_INTOVF FPE_INTOVF
#define AUT_FLAG_LOOP_CONTINUE 3
#define ACL_JSON_T_ELEMENT (1 << 15)
#define SIOCDELRT 0x890C
#define ACL_RFC1035_CLASS_CH 3
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SIGPROF 27
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define __SUSECONDS_T_TYPE __SYSCALL_SLONG_TYPE
#define FD_CLOEXEC 1
#define PF_TIPC 30
#define ACL_DNS_ERR_EXIST -17
#define ACL_RING_FIRST_APPL(head,app_type,ring_member) (acl_ring_succ(head) != (head) ? ACL_RING_TO_APPL(acl_ring_succ(head), app_type, ring_member) : 0)
#define VAR_AUT_LOOP_BEGIN "LOOP_BEGIN"
#define __S_IFDIR 0040000
#define _POSIX_TRACE_INHERIT -1
#define __SIZE_T__ 
#define ACL_INET_FLAG_REUSEPORT 1 << 1
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define acl_spool_connect acl_ioctl_connect
#define __stub_gtty 
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define NO_DATA 4
#define ACL_VSTREAM_FLAG_PREREAD (1 << 19)
#define MAP_HUGE_SHIFT 26
#define si_value _sifields._rt.si_sigval
#define ACL_MSGIO_OK 0
#define __NLINK_T_TYPE __SYSCALL_ULONG_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define SO_NOFCS 43
#define ELNRNG 48
#define EFAULT 14
#define IOCSIZE_MASK (_IOC_SIZEMASK << _IOC_SIZESHIFT)
#define acl_htable_walk_r acl_htable_walk
#define IP_PASSSEC 18
#define IPPORT_RESERVED 1024
#define __nlink_t_defined 
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define ACL_CONFIG_STR_TABLE ACL_CFG_STR_TABLE
#define IPV6_TRANSPARENT 75
#define si_utime _sifields._sigchld.si_utime
#define __SIGRTMIN 32
#define TCSETSF 0x5404
#define MSG_BATCH MSG_BATCH
#define TCP_COOKIE_PAIR_SIZE (2*TCP_COOKIE_MAX)
#define ACL_MEM_HOOK_INCLUDE_H 
#define TCP_MSS_DESIRED 1220U
#define AT_FDCWD -100
#define ACL_LINUX 
#define AI_ALL 0x0010
#define _IO_SHOWPOINT 0400
#define TCP_COOKIE_MIN 8
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define SIOCGSTAMP 0x8906
#define INT32_MAX (2147483647)
#define acl_vbuf_timeout(v) ((v)->flags & ACL_VBUF_FLAG_TIMEOUT)
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define FFSYNC O_FSYNC
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define __stub_sstk 
#define ACL_VSTREAM_POPEN_COMMAND 1
#define ACL_ASTREAM_STATUS_CONNECT_ERROR 2
#define ACL_FLOCK_INCLUDE_H 
#define _PATH_PROTOCOLS "/etc/protocols"
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __wur __attribute_warn_unused_result__
#define ACL_VSTRING_TERMINATE(vp) ACL_VBUF_TERM(&(vp)->vbuf)
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define isprint_l(c,l) __isprint_l ((c), (l))
#define __STDC_IEC_559_COMPLEX__ 1
#define _G_HAVE_MMAP 1
#define ACL_HOSTNAME_TYPE_TXT 6
#define TIOCSBRK 0x5427
#define acl_int64 long long int
#define POSIX_FADV_SEQUENTIAL 2
#define __FLT128_HAS_DENORM__ 1
#define ACL_EVENT_WRITE (1 << 2)
#define ACL_FHANDLE_O_EXCL (1 << 6)
#define FLT_DIG __FLT_DIG__
#define SO_INCOMING_CPU 49
#define SO_TIMESTAMPING 37
#define SIG_UNBLOCK 1
#define ACL_XML_S_MTXT 13
#define _POSIX_RTSIG_MAX 8
#define MADV_DODUMP 17
#define ACL_MASTER_XPORT_NAME_FIFO "fifo"
#define SIOCGIFENCAP 0x8925
#define acl_spool_iswset acl_ioctl_iswset
#define __off64_t_defined 
#define ACL_RFC1035_TYPE_AXFR 252
#define acl_spool_enable_listen acl_ioctl_enable_listen
#define __FLT128_DIG__ 33
#define __SCHAR_WIDTH__ 8
#define SIOCGSTAMPNS 0x8907
#define IN_CLASSB_MAX 65536
#define acl_spool_isset acl_ioctl_isset
#define __INT32_C(c) c
#define __DEC64_EPSILON__ 1E-15DD
#define __ORDER_PDP_ENDIAN__ 3412
#define ACL_MASTER_STAT_START_ERR 5
#define __DEC128_MIN_EXP__ (-6142)
#define ACL_HAS_FCNTL_LOCK 
#define __PDP_ENDIAN 3412
#define _POSIX_MEMLOCK 200809L
#define TH_PUSH 0x08
#define IPTOS_DSCP_AF11 0x28
#define IPTOS_DSCP_AF12 0x30
#define IPTOS_DSCP_AF13 0x38
#define _NETINET_TCP_H 1
#define EL2HLT 51
#define IP_ADD_MEMBERSHIP 35
#define ACL_VSTREAM_TYPE_INET6 (1 << 7)
#define __FLT32_MAX_10_EXP__ 38
#define ACL_XML_S_AVAL 10
#define ACL_GBCODE_INCLUDE_H 
#define TCPOPT_TIMESTAMP 8
#define DT_CHR DT_CHR
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define LDBL_MIN_10_EXP __LDBL_MIN_10_EXP__
#define isupper_l(c,l) __isupper_l ((c), (l))
#define ACL_XINETD_CFG_INCLUDE_H 
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define IPTOS_DSCP(x) ((x) & IPTOS_DSCP_MASK)
#define TTYDEF_OFLAG (OPOST | ONLCR | XTABS)
#define IPTOS_DSCP_AF21 0x48
#define IF_NAMESIZE 16
#define BYTE_ORDER __BYTE_ORDER
#define s6_addr __in6_u.__u6_addr8
#define ENOKEY 126
#define _IOC_TYPEBITS 8
#define CLOCK_MONOTONIC_COARSE 6
#define PF_ROUTE PF_NETLINK
#define __INT_FAST32_TYPE__ long int
#define N_AX25 5
#define __have_pthread_attr_t 1
#define ACL_EVENT_WMSG 3
#define CBRK CEOL
#define CSTOP CTRL('s')
#define _SYS_TTYDEFAULTS_H_ 
#define _POSIX_CPUTIME 0
#define ACL_XML3_F_META_CM (1 << 1)
#define ACL_MASTER_XPORT_NAME_UDP "udp"
#define CQUIT 034
#define ACL_FHANDLE_S_FLOCK_ON (1 << 0)
#define _BITS_TYPESIZES_H 1
#define _XOPEN_VERSION 700
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define ILL_COPROC ILL_COPROC
#define ACL_PTHREAD_PROCESS_PRIVATE 0
#define S_IWGRP (S_IWUSR >> 3)
#define IPV6_HOPLIMIT 52
#define ACL_MASTER_SERVER_API_INCLUDE_H 
#define SAFE_COPY(x,y) ACL_SAFE_STRNCPY((x), (y), sizeof(x))
#define ACL_HTABLE_FOREACH_REVERSE(iter,table_ptr) if (table_ptr) for((void) acl_htable_iter_tail((table_ptr), &iter); (iter).ptr; (void) acl_htable_iter_prev(&iter))
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define htole32(x) __uint32_identity (x)
#define SIOCSIFBRDADDR 0x891a
#define SIG_DFL ((__sighandler_t) 0)
#define MADV_DONTFORK 10
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define acl_xml3_parse acl_xml3_update
#define IPPROTO_UDP IPPROTO_UDP
#define IPTOS_DSCP_AF41 0x88
#define IPTOS_DSCP_AF42 0x90
#define IPTOS_DSCP_AF43 0x98
#define PF_KCM 41
#define IPOPT_TIMESTAMP IPOPT_TS
#define __FLT64X_HAS_INFINITY__ 1
#define unix 1
#define ACL_XML_S_LCH 3
#define ACL_AQUEUE_ERR_UNLOCK 2
#define ACL_PTHREAD_RWLOCK_H 
#define _POSIX_MAX_INPUT 255
#define ACL_XML3_F_META_EM (1 << 2)
#define SS_ONSTACK SS_ONSTACK
#define IPTOS_PREC_ROUTINE IPTOS_CLASS_CS0
#define __FD_ZERO_STOS "stosq"
#define _IOC_DIRBITS 2
#define TCP_FASTOPEN 23
#define ESHUTDOWN 108
#define F_GETOWN __F_GETOWN
#define AUT_OBJ_INNER 1
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define F_SETLK F_SETLK64
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define acl_ring_foreach_reverse ACL_RING_FOREACH_REVERSE
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define __INT16_MAX__ 0x7fff
#define __THROWNL __attribute__ ((__nothrow__))
#define _BSD_SIZE_T_ 
#define IPTOS_DSCP_AF33 0x78
#define __SIZE_TYPE__ long unsigned int
#define ACL_VBUF_INCLUDE_H 
#define ACL_ETIME ETIME
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define POLLWRBAND 0x200
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define acl_vbuf_error(v) ((v)->flags & ACL_VBUF_FLAG_BAD)
#define UINT_FAST32_MAX (18446744073709551615UL)
#define _POSIX_THREADS 200809L
#define ACL_XML_S_LTAG 5
#define IPTOS_PREC(tos) IPTOS_CLASS(tos)
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define VAR_AUT_ITEM_COUNT "COUNT"
#define _IOC_WRITE 1U
#define TIOCGRS485 0x542E
#define NI_NUMERICSERV 2
#define AF_INET PF_INET
#define __FLT64X_DIG__ 18
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define ACL_XML_S_LEM 4
#define TCP_KEEPINTVL 5
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define _IO_SHOWBASE 0200
#define TCP_S_DATA_IN (1 << 2)
#define __PTHREAD_COMPAT_PADDING_END 
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define TCPI_OPT_SACK 2
#define __INT8_TYPE__ signed char
#define TIOCGPKT _IOR('T', 0x38, int)
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define ACL_XML_S_RGT 7
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define VAR_AUT_LOG "LOG"
#define IPTOS_ECN_ECT0 0x02
#define SOL_NETBEUI 267
#define SIOCDIFADDR 0x8936
#define acl_foreach ACL_FOREACH
#define ACL_CHUNK_CHAIN_INCLUDE_H 
#define ACL_AIO_CTL_CLOSE_HOOK_DEL 19
#define IPOPT_NOOP IPOPT_NOP
#define ACL_VBUF_EOF (-1)
#define IPTOS_ECN_ECT1 0x01
#define ACL_READLINE_INCLUDE_H 
#define IPTOS_LOWDELAY 0x10
#define __HAVE_DISTINCT_FLOAT128 1
#define __ELF__ 1
#define AF_MPLS PF_MPLS
#define ENOMEDIUM 123
#define SI_TKILL SI_TKILL
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define ACL_APP_CTL_END ACL_MASTER_SERVER_END
#define CLOCK_THREAD_CPUTIME_ID 3
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define IPDEFTTL 64
#define IPV6_PKTINFO 50
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define ACL_DEBUG_INCLUDE_H 
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define UIO_MAXIOV __IOV_MAX
#define __F_GETOWN_EX 16
#define __ILP32_OFFBIG_LDFLAGS "-m32"
#define ACL_IPLINK ACL_DLINK
#define ACL_AIO_CTL_WRITE_HOOK_DEL 17
#define ACL_RING_SUCC(c) ((c)->succ)
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define _BITS_BYTESWAP_H 1
#define ACL_FLOCK_OP_NOWAIT 4
#define ACL_RFC1035_TYPE_PTR 12
#define __ID_T_TYPE __U32_TYPE
#define TCP_WINDOW_CLAMP 10
#define ACL_MYLOG_INCLUDE_H 
#define _ASM_GENERIC_ERRNO_BASE_H 
#define isdigit(c) __isctype((c), _ISdigit)
#define ELIBSCN 81
#define F_TLOCK 2
#define ACL_XML3_F_SELF_CL (1 << 3)
#define _IOC_NRMASK ((1 << _IOC_NRBITS)-1)
#define ACL_MASTER_SERVER_TIME_TABLE 4
#define TIOCGPTLCK _IOR('T', 0x39, int)
#define TCP_THIN_DUPACK 17
#define TIOCSERGETLSR 0x5459
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define AF_SMC PF_SMC
#define _IO_funlockfile(_fp) 
#define SO_DOMAIN 39
#define SOL_RAW 255
#define IPTOS_LOWCOST 0x02
#define ACL_XML_F_META_EM (1 << 2)
#define AI_V4MAPPED 0x0008
#define ACL_VBUF_TERM(v) ((v)->ptr < (v)->data + (v)->len ? *(v)->ptr = 0 : ACL_VBUF_SPACE((v), 1), *(v)->ptr = 0)
#define acl_pthread_mutex_init pthread_mutex_init
#define __FLT_RADIX__ 2
#define SO_REUSEPORT 15
#define AUT_SET_INT(__test_line__,__name__,__value__) do { const char *__ptr__; __ptr__ = aut_line_getvalue(__test_line__, __name__); if (__ptr__ == NULL) { printf("%s(%d): getvalue error for %s, line=%d\n", __FILE__, __LINE__, __name__, aut_line_number(__test_line__)); return (-1); } __value__ = atoi(__ptr__); } while (0)
#define SOL_IRDA 266
#define __INT_LEAST16_TYPE__ short int
#define ACL_ISALNUM(c) isalnum(_ACL_UCHAR_(c))
#define ACL_AIO_FLAG_FLUSH_CLOSE (1 << 5)
#define SA_NOMASK SA_NODEFER
#define IP_MSS 576
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define ACL_PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define TIOCPKT_IOCTL 64
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define IPTOS_PREC_INTERNETCONTROL IPTOS_CLASS_CS6
#define O_SYNC 04010000
#define ACL_VSTRING_BASE64_CODE_INCLUDE_H 
#define CERASE 0177
#define minor(dev) __SYSMACROS_DM (minor) gnu_dev_minor (dev)
#define _POSIX_C_SOURCE 200809L
#define TCP_SYNCNT 7
#define IP_MULTICAST_IF 32
#define IP_DROP_MEMBERSHIP 36
#define IPOPT_TS_PRESPEC 3
#define _G_IO_IO_FILE_VERSION 0x20001
#define ACL_APP_CTL_THREAD_EXIT ACL_MASTER_SERVER_THREAD_EXIT
#define EAI_BADFLAGS -1
#define ACL_RFC1035_TYPE_MD 3
#define ACL_RFC1035_TYPE_MG 8
#define PTHREAD_STACK_MIN 16384
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define __SSE_MATH__ 1
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define N_PROFIBUS_FDL 10
#define _POSIX_ARG_MAX 4096
#define MADV_WILLNEED 3
#define BUS_ADRALN BUS_ADRALN
#define AUT_OBJ_OUTER 0
#define SO_PEERNAME 28
#define AF_ATMSVC PF_ATMSVC
#define ENAVAIL 119
#define __uid_t_defined 
#define __k8 1
#define ACL_VSTRING_LEN(vp) (size_t) ((vp)->vbuf.ptr - (vp)->vbuf.data)
#define SO_SNDBUFFORCE 32
#define SOL_RDS 276
#define acl_htable_foreach_reverse ACL_HTABLE_FOREACH_REVERSE
#define __SIZEOF_PTHREAD_BARRIERATTR_T 4
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __ACL_MASTER_FLOW_INCLUDED_H__ 
#define __LDBL_REDIR(name,proto) name proto
#define ACL_VSTREAM_CLR_MS(x) ((x)->flag &= ~ACL_VSTREAM_FLAG_MS)
#define CLOCK_MONOTONIC_RAW 4
#define F_SETLK64 6
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define MSG_TRUNC MSG_TRUNC
#define ACL_RFC1035_CLASS_CS 2
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define ACL_VSTREAM_ERRNO(stream_ptr) ((stream_ptr)->errnum)
#define IPTOS_DSCP_MASK 0xfc
#define SIGCONT 18
#define ACL_VSTREAM_TYPE_SOCK (1 << 0)
#define O_CLOEXEC __O_CLOEXEC
#define MADV_FREE 8
#define __f32(x) x ##f32
#define ELOOP 40
#define SIOCDARP 0x8953
#define ENOSTR 60
#define FLT_ROUNDS 1
#define __blksize_t_defined 
#define VAR_AUT_LOG_FPRINT 0x0010
#define ACL_BTREE_INCLUDE_H 
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define ACL_HTABLE_CTL_HASH_FN 2
#define acl_mystrtok acl_strtok
#define _SC_SELECT _SC_SELECT
#define _PATH_SERVICES "/etc/services"
#define IOC_OUT (_IOC_READ << _IOC_DIRSHIFT)
#define _POSIX_TIMEOUTS 200809L
#define acl_htable_reset_r acl_htable_reset
#define ACL_SAFE_INCLUDE_H 
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define _IO_IS_FILEBUF 0x2000
#define ACL_FHANDLE_PATH(x) (ACL_VSTREAM_PATH((x)->fp))
#define _LFS64_LARGEFILE 1
#define EOVERFLOW 75
#define __bswap_constant_16(x) ((unsigned short int) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define PF_NETBEUI 13
#define S_IRUSR __S_IREAD
#define SIGPIPE 13
#define IPPROTO_IP IPPROTO_IP
#define AF_PACKET PF_PACKET
#define __WCHAR_MAX __WCHAR_MAX__
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define IPOPT_NUMBER(o) ((o) & IPOPT_NUMBER_MASK)
#define ACL_IF_VSTREAM_ERR(stream_ptr) ((stream_ptr)->flag & ACL_VSTREAM_FLAG_BAD)
#define ACL_VSTREAM_FLAG_CONNECTING (1 << 18)
#define DBL_MAX __DBL_MAX__
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SI_ALIGNMENT 
#define __SIZEOF_PTRDIFF_T__ 8
#define ACL_XML3_S_LEM 4
#define _LFS64_ASYNCHRONOUS_IO 1
#define SEEK_SET 0
#define _IO_feof_unlocked(__fp) (((__fp)->_flags & _IO_EOF_SEEN) != 0)
#define _BITS_WCHAR_H 1
#define IP_XFRM_POLICY 17
#define SCHED_OTHER 0
#define TIOCM_CAR 0x040
#define ACL_MYCHOWN_INCLUDE_H 
#define acl_mystrndup(str,len) acl_strndup_glue(__FILE__, __LINE__, (str), len)
#define AF_IEEE802154 PF_IEEE802154
#define acl_spool_listen acl_ioctl_listen
#define ACL_SCAN_CTL_CTX 2
#define EPROTO 71
#define __NETINET_IP_H 1
#define __iovec_defined 1
#define ACL_IOCTL_CTL_THREAD_STACKSIZE 9
#define acl_assert assert
#define ACL_TOKEN_F_UTF8 (1 << 3)
#define __bswap_constant_32(x) ((((x) & 0xff000000) >> 24) | (((x) & 0x00ff0000) >> 8) | (((x) & 0x0000ff00) << 8) | (((x) & 0x000000ff) << 24))
#define AVL_NEXT(tree,node) avl_walk(tree, node, AVL_AFTER)
#define __sig_atomic_t_defined 1
#define _IO_FLAGS2_NOTCANCEL 2
#define IN_CLASSA_MAX 128
#define SO_TIMESTAMP 29
#define __stub_sigreturn 
#define ACL_DEFINE_WIN32_INCLUDE_H 
#define ACL_DLL_HANDLE void*
#define ACL_DB_ERR_EMPTY 102
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define CSTART CTRL('q')
#define __FLT32X_MANT_DIG__ 53
#define CLOCK_TAI 11
#define ACL_PATH_STDPATH "/usr/bin:/usr/sbin"
#define IPOPT_SECUR_SECRET 0xd788
#define acl_fifo_foreach ACL_FIFO_FOREACH
#define SO_DETACH_FILTER 27
#define EUCLEAN 117
#define __restrict_arr __restrict
#define ACL_HTABLE_FLAG_USE_LOCK (1 << 1)
#define INTPTR_MIN (-9223372036854775807L-1)
#define acl_vstream_buffed_fwrite acl_vstream_buffed_writen
#define __CFLOAT32X _Complex _Float32x
#define INT8_C(c) c
#define IP_MSFILTER 41
#define ACL_XML3_S_ATTR 9
#define _SIGNAL_H 
#define TCSETSF2 _IOW('T', 0x2D, struct termios2)
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define ACL_XML2_S_MEND 15
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define ACL_EINPROGRESS EINPROGRESS
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define TCSETXW 0x5435
#define EAI_OVERFLOW -12
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define __USE_MISC 1
#define EBUSY 16
#define ACL_RFC1035_CLASS_IN 1
#define __UWORD_TYPE unsigned long int
#define _GCC_LIMITS_H_ 
#define DBL_MIN_10_EXP __DBL_MIN_10_EXP__
#define IP_BLOCK_SOURCE 38
#define __S_IEXEC 0100
#define TCPI_OPT_ECN_SEEN 16
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define acl_spool_request_timer acl_ioctl_request_timer
#define W_OK 2
#define WNOHANG 1
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define ACL_VSTREAM_INCLUDE_H 
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __x86_64__ 1
#define _SIZE_T_ 
#define __bswap_constant_64(x) (__extension__ ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56)))
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define ACL_MASTER_LISTEN_FD 6
#define MAP_POPULATE 0x08000
#define __FLT32X_MIN_EXP__ (-1021)
#define __PTHREAD_RWLOCK_INT_FLAGS_SHARED 1
#define __DEC32_SUBNORMAL_MIN__ 0.000001E-95DF
#define _IO_iconv_t _G_iconv_t
#define DT_FIFO DT_FIFO
#define _IO_USER_BUF 1
#define O_CREAT 0100
#define __S_IWRITE 0200
#define _WCHAR_T_H 
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define ACL_ISPUNCT(c) ispunct(_ACL_UCHAR_(c))
#define IP_RETOPTS 7
#define ENODEV 19
#define SIOCGIFMEM 0x891f
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define POLL_OUT POLL_OUT
#define SIOCPROTOPRIVATE 0x89E0
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __stub_revoke 
#define __timer_t_defined 1
#define _POSIX_CHOWN_RESTRICTED 0
#define MSG_OOB MSG_OOB
#define ACL_RFC1035_TYPE_MB 7
#define __WCLONE 0x80000000
#define ACL_BITS_MASK_ZERO(mask) memset((mask)->data, 0, (mask)->data_len);
#define INT_MAX __INT_MAX__
#define ACL_VSTREAM_POPEN_ENV 5
#define ACL_HAS_FLOCK_LOCK 
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define ACL_DEFINE_LINUX_INCLUDE_H 
#define IPFRAGTTL 60
#define ACL_UNUSED __attribute__((__unused__))
#define major(dev) __SYSMACROS_DM (major) gnu_dev_major (dev)
#define _POSIX_MONOTONIC_CLOCK 0
#define ACL_RING_INCLUDE_H 
#define IPTOS_PREC_FLASH IPTOS_CLASS_CS3
#define acl_myfree(_ptr_) do { if (_ptr_) { acl_free_glue(__FILE__, __LINE__, (_ptr_)); (_ptr_) = NULL; } } while (0)
#define EKEYEXPIRED 127
#define acl_fifo_push_info acl_fifo_push_info_back
#define IPV4_MATCH(p) (EQ((p), "*") || EQ((p), "*.*.*.*") || EQ((p), "0.0.0.0"))
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define ACL_AIO_PARAMS_INCLUDE_H 
#define _IO_off_t __off_t
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define S_ISVTX __S_ISVTX
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define ACL_BASE64_CODE_INCLUDE_H 
#define EROFS 30
#define SIOCSPGRP 0x8902
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define DBL_MIN __DBL_MIN__
#define _POSIX2_LINE_MAX 2048
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define ACL_DEBUG_PROCTL (ACL_DEBUG_INTER_BASE + 2)
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define __UINT_LEAST64_TYPE__ long unsigned int
#define AVL_NODE2DATA(n,o) ((void *)((uintptr_t)(n) - (o)))
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define SO_BSDCOMPAT 14
#define SIOCSIFSLAVE 0x8930
#define ACL_APP_CTL_CFG_INT64 ACL_MASTER_SERVER_INT64_TABLE
#define ACL_FLOCK_STYLE_FCNTL 2
#define IPV6_PMTUDISC_DO 2
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define IPV6_RTHDRDSTOPTS 55
#define __FLT_HAS_QUIET_NAN__ 1
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define IP_RECVOPTS 6
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define TIOCM_RTS 0x004
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define ACL_SET_UGID_INCLUDE_H 
#define INT32_C(c) c
#define __FLT_MAX_10_EXP__ 38
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define ACL_RING_DETACH(entry_in) do { ACL_RING *succ, *pred, *entry_ptr = (entry_in); succ = entry_ptr->succ; pred = entry_ptr->pred; if (succ != NULL && pred != NULL) { pred->succ = succ; succ->pred = pred; entry_ptr->parent->len--; entry_ptr->succ = entry_ptr->pred = NULL; } } while (0)
#define ACL_DBPOOL_INCLUDE_H 
#define ACL_CONFIG_BOOL_TABLE ACL_CFG_BOOL_TABLE
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define PROT_GROWSUP 0x02000000
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define UINT_LEAST16_MAX (65535)
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define __DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL
#define _PC_SYNC_IO _PC_SYNC_IO
#define ELIBACC 79
#define SIGWINCH 28
#define ACL_SPLIT_AT_INCLUDE_H 
#define va_copy(d,s) __builtin_va_copy(d,s)
#define acl_vstring_end(vp) ((char *) (vp)->vbuf.ptr)
#define AUT_FLAG_LOOP_END 4
#define EHWPOISON 133
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define ACL_XML_IS_CDATA(x) (((x)->flag & ACL_XML_F_CDATA))
#define __FLT_HAS_INFINITY__ 1
#define ACL_DNS_ERR_NOT_ZONE -10
#define acl_ioctl_app_main acl_threads_server_main
#define ACL_EVENT_NULL_TYPE 0
#define SO_SNDBUF 7
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define acl_spool_accept acl_ioctl_accept
#define ACL_DBH_STATUS_NULL 0
#define ACL_AIO_CTL_READ_NESTED 11
#define ACL_EVENT_RW_TIMEOUT (1 << 6)
#define NI_DGRAM 16
#define IPV6_JOIN_ANYCAST 27
#define L_INCR SEEK_CUR
#define MCAST_UNBLOCK_SOURCE 44
#define _BSD_PTRDIFF_T_ 
#define _SYS_WAIT_H 1
#define _BITS_PTHREADTYPES_COMMON_H 1
#define IPV6_TCLASS 67
#define SIGXFSZ 25
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define SIGHUP 1
#define TIOCPKT_DATA 0
#define __UINT_FAST16_TYPE__ long unsigned int
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __DEC64_MAX__ 9.999999999999999E384DD
#define ACL_XML_INCLUDE_H 
#define __ENUM_IDTYPE_T 1
#define __PTHREAD_MUTEX_USE_UNION 0
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define ACL_XML3_F_META (ACL_XML3_F_META_QM | ACL_XML3_F_META_CM | ACL_XML3_F_META_EM)
#define acl_pthread_once pthread_once
#define __INT_FAST32_WIDTH__ 64
#define ACL_FHANDLE_INCLUDE_H 
#define NULL ((void *)0)
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define AF_IRDA PF_IRDA
#define __CHAR16_TYPE__ short unsigned int
#define SIGTTIN 21
#define AVL_XPARENT(n) ((struct avl_node *)((n)->avl_pcb & ~7))
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __ss_aligntype unsigned long int
#define ACL_XML3_INCLUDE_H 
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define TCSETAW 0x5407
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define PF_PPPOX 24
#define _STRINGS_H 1
#define __F_SETOWN 8
#define _VA_LIST_DEFINED 
#define __W_CONTINUED 0xffff
#define W_STOPCODE(sig) __W_STOPCODE (sig)
#define __SIZE_WIDTH__ 64
#define ACL_FILEFD int
#define CFLUSH CDISCARD
#define __BLKSIZE_T_TYPE __SYSCALL_SLONG_TYPE
#define PF_ECONET 19
#define __SEG_FS 1
#define _IO_size_t size_t
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define __stub_lchmod 
#define ACL_EXEC_COMMAND_INCLUDE_H 
#define CKILL CTRL('u')
#define N_TTY 0
#define __LP64_OFF64_LDFLAGS "-m64"
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define __DEC64_MANT_DIG__ 16
#define ACL_MASTER_SERVER_LOOP 12
#define ACL_MASTER_SERVER_INT64_TABLE 6
#define AF_RXRPC PF_RXRPC
#define __INT64_MAX__ 0x7fffffffffffffffL
#define IPV6_XFRM_POLICY 35
#define EDEADLK 35
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define _IOC_TYPESHIFT (_IOC_NRSHIFT+_IOC_NRBITS)
#define ACL_FOREACH_REVERSE(iter,container) for ((container)->iter_tail(&(iter), (container)); (iter).ptr; (container)->iter_prev(&(iter), (container)))
#define __SEG_GS 1
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define EL3RST 47
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define PF_QIPCRTR 42
#define SIG_ATOMIC_MIN (-2147483647-1)
#define ACL_DBH_STATUS_READY 1
#define ACL_VSTRING_ADDCH(vp,ch) ACL_VBUF_PUT(&(vp)->vbuf, ch)
#define __SIG_ATOMIC_WIDTH__ 32
#define ACL_PATH_DEFPATH "/usr/bin"
#define si_stime _sifields._sigchld.si_stime
#define ACL_SAFE_OPEN_H_INCLUDE_H 
#define _IFADDRS_H 1
#define ACL_BINHASH_FLAG_SLICE2 (1 << 3)
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define CLNEXT CTRL('v')
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define htole16(x) __uint16_identity (x)
#define SIGCHLD 17
#define acl_iter_info ACL_ITER_INFO
#define ACL_LOADCFG_INCLUDE_H 
#define SOL_KCM 281
#define ECONNREFUSED 111
#define TIOCSCTTY 0x540E
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define ACL_IOCTL_CTL_DELAY_SEC 3
#define TIOCMGET 0x5415
#define ACL_VSTREAM_FLAG_TAGYES (1 << 17)
#define PATH_SEP_C '/'
#define ACL_AVL_IMPL_H 
#define PATH_SEP_S "/"
#define ACL_TOKEN_F_PASS (1 << 1)
#define __STDC_VERSION__ 201112L
#define DBL_EPSILON __DBL_EPSILON__
#define SIOCSIFMEM 0x8920
#define ACL_XML2_FLAG_XML_DECODE (1 << 2)
#define AVL_XCHILD(n) (((n)->avl_pcb >> 2) & 1)
#define __DEC32_MAX_EXP__ 97
#define DT_UNKNOWN DT_UNKNOWN
#define EDOM 33
#define TCSETA 0x5406
#define TIOCSERSWILD 0x5455
#define ACL_DBSQL_INCLUDE_H 
#define TIMER_ABSTIME 1
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define ACL_VBUF_FLAG_MMAP (1<<6)
#define __INT_FAST8_MAX__ 0x7f
#define _POSIX_FSYNC 200809L
#define ILL_BADSTK ILL_BADSTK
#define __PMT(args) args
#define TCP_MAXSEG 2
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define IFF_LOOPBACK IFF_LOOPBACK
#define _SYS_TYPES_H 1
#define AF_NETBEUI PF_NETBEUI
#define FP_XSTATE_MAGIC1 0x46505853U
#define ACL_RFC1035_TYPE_MR 9
#define IPV6_2292RTHDR 5
#define __ACL_PTHREAD_INCLUDE_H__ 
#define ECONNRESET 104
#define SO_TIMESTAMPNS 35
#define IPTOS_CLASS_CS5 0xa0
#define _OLD_STDIO_MAGIC 0xFABC0000
#define IPTOS_CLASS_CS6 0xc0
#define ACL_XML2_S_LCH 3
#define SIGSYS 31
#define SEGV_ACCERR SEGV_ACCERR
#define _LINUX_LIMITS_H 
#define AF_SNA PF_SNA
#define linux 1
#define IPTOS_CLASS_CS7 0xe0
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define SOL_DCCP 269
#define __S_ISTYPE(mode,mask) (((mode) & __S_IFMT) == (mask))
#define SIGSTOP 19
#define ACL_MASTER_SERVER_STR_TABLE 2
#define TCPOLEN_SACK_PERMITTED 2
#define _IOS_APPEND 8
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define ENXIO 6
#define FLT_EPSILON __FLT_EPSILON__
#define ntohl(x) __bswap_32 (x)
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define SA_NOCLDSTOP 1
#define ntohs(x) __bswap_16 (x)
#define IPOPT_SSRR 137
#define CLOCK_MONOTONIC 1
#define ACL_VBUF_FLAG_BAD (ACL_VBUF_FLAG_ERR | ACL_VBUF_FLAG_EOF | ACL_VBUF_FLAG_TIMEOUT)
#define ACL_XML_F_META_QM (1 << 0)
#define AVL_BEFORE (0)
#define IPV6_RTHDR_LOOSE 0
#define MAP_DENYWRITE 0x00800
#define TCP_COOKIE_IN_ALWAYS (1 << 0)
#define __FLT64_HAS_QUIET_NAN__ 1
#define IPOPT_CLASS_MASK 0x60
#define ACL_MISC_INCLUDE_H 
#define ____FILE_defined 1
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define ACL_RFC1035_TYPE_WKS 11
#define _IOLBF 1
#define ILL_PRVREG ILL_PRVREG
#define ACL_XML_S_ATTR 9
#define ifr_ifindex ifr_ifru.ifru_ivalue
#define htole64(x) __uint64_identity (x)
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define FPE_FLTINV FPE_FLTINV
#define F_GETLK64 5
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define TIOCPKT_FLUSHREAD 1
#define ACL_RING_TO_APPL(ring_ptr,app_type,ring_member) ((app_type *) (((char *) (ring_ptr)) - offsetof(app_type,ring_member)))
#define _IO_UPPERCASE 01000
#define F_SETLKW F_SETLKW64
#define ACL_AIO_CTL_TIMEOUT 4
#define SA_INTERRUPT 0x20000000
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define O_LARGEFILE __O_LARGEFILE
#define L_XTND SEEK_END
#define __WALL 0x40000000
#define MCAST_JOIN_GROUP 42
#define ALIGN_TYPE size_t
#define ACL_DONT_GRIPE 0
#define INET6_ADDRSTRLEN 46
#define __FLT32_MIN_10_EXP__ (-37)
#define __SSE2__ 1
#define MCAST_MSFILTER 48
#define __KEY_T_TYPE __S32_TYPE
#define sigev_notify_function _sigev_un._sigev_thread._function
#define FAPPEND O_APPEND
#define IPV6_MINHOPCOUNT 73
#define __F_SETSIG 10
#define ACL_XML2_S_MCMT 14
#define __FLT32X_DIG__ 15
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define ACL_XML2_S_LGT 2
#define acl_mycalloc(nmemb,size) acl_calloc_glue(__FILE__, __LINE__, nmemb, size)
#define SIOCGIFTXQLEN 0x8942
#define PF_CAN 29
#define __WORDSIZE 64
#define TIOCINQ FIONREAD
#define TIOCVHANGUP 0x5437
#define TIOCSSOFTCAR 0x541A
#define TIOCM_SR 0x010
#define _DLFCN_H 1
#define ACL_BITS_MASK_BYTES_NEEDED(len) (size_t) (((acl_int64) (len) + (ACL_BITS_MASK_NBBY - 1)) / ACL_BITS_MASK_NBBY)
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define ACL_BITS_MASK_ALLOC(mask,nmax) do { size_t _byte_len = ACL_BITS_MASK_BYTES_NEEDED(nmax); (mask)->data = (char*) acl_mymalloc(_byte_len); memset((mask)->data, 0, _byte_len); (mask)->data_len = _byte_len; } while (0)
#define ACL_XML_F_CDATA (1 << 5)
#define __BEGIN_DECLS 
#define _SC_PII_XTI _SC_PII_XTI
#define __LDBL_MANT_DIG__ 64
#define __sched_priority sched_priority
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define SEGV_PKUERR SEGV_PKUERR
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define IPV6_RECVFRAGSIZE 77
#define ACL_SPOOL_CTL_DELAY_USEC ACL_IOCTL_CTL_DELAY_USEC
#define ACL_ISGRAPH(c) isgraph(_ACL_UCHAR_(c))
#define S_IFSOCK __S_IFSOCK
#define ACL_XML_F_META (ACL_XML_F_META_QM | ACL_XML_F_META_CM | ACL_XML_F_META_EM)
#define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#define ifr_metric ifr_ifru.ifru_ivalue
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define EFBIG 27
#define SOCK_RAW SOCK_RAW
#define CLD_STOPPED CLD_STOPPED
#define SIOCSRARP 0x8962
#define __DBL_HAS_QUIET_NAN__ 1
#define _IO_BAD_SEEN 0x4000
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define EQ !strcmp
#define ACL_VSTREAM_TYPE_FILE (1 << 1)
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define IPV6_JOIN_GROUP 20
#define acl_spool_ctl acl_ioctl_ctl
#define POLL_HUP POLL_HUP
#define ACL_AQUEUE_OK 0
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define _STRING_H 1
#define ACL_SOCKET_INVALID (int) -1
#define IPPROTO_MPLS IPPROTO_MPLS
#define ACL_JSON_T_NULL (1 << 8)
#define __GNUC_VA_LIST 
#define SA_STACK SA_ONSTACK
#define _GCC_MAX_ALIGN_T 
#define AF_VSOCK PF_VSOCK
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define ACL_VALID_HOSTNAME_INCLUDE_H 
#define __code_model_small__ 1
#define ACL_XML_F_LEAF (1 << 4)
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define ACL_FLOCK_OP_NONE 0
#define _SYS_IOCTL_H 1
#define ACL_EXPERIMENT_INCLUDE_H 
#define _XOPEN_REALTIME 1
#define assert(expr) ((void) sizeof ((expr) ? 1 : 0), __extension__ ({ if (expr) ; else __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION); }))
#define __RLIM_T_TYPE __SYSCALL_ULONG_TYPE
#define TIOCGETD 0x5424
#define __SYSMACROS_DM(symbol) __SYSMACROS_DM1 (In the GNU C Library, #symbol is defined\n by <sys/sysmacros.h>. For historical compatibility, it is\n currently defined by <sys/types.h> as well, but we plan to\n remove this soon. To use #symbol, include <sys/sysmacros.h>\n directly. If you did not intend to use a system-defined macro\n #symbol, you should undefine it after including <sys/types.h>.)
#define ACL_TRACE_INCLUDE_H 
#define ACL_FHANDLE_O_DIRECT (1 << 4)
#define le64toh(x) __uint64_identity (x)
#define POSIX_MADV_SEQUENTIAL 2
#define ACL_MASTER_CONF_INCLUDE_H 
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define PF_AX25 3
#define FILENAME_MAX 4096
#define SOL_RXRPC 272
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define ACL_SLICE_FLAG_RTGC_OFF (1 << 10)
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define acl_fstat fstat64
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define TIOCSIG _IOW('T', 0x36, int)
#define WCOREDUMP(status) __WCOREDUMP (status)
#define __ino_t_defined 
#define AF_LOCAL PF_LOCAL
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define __CLOCKID_T_TYPE __S32_TYPE
#define ACL_MDT_FLAG_KMR (1 << 1)
#define ACL_VSTREAM_FLAG_CACHE_SEEK (1 << 3)
#define __SIZEOF_FLOAT__ 4
#define ACL_XML2_S_LLT 1
#define ACL_XML2_F_META_CM (1 << 1)
#define ACL_PTHREAD_RWLOCK_INITIALIZER NULL
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define ACL_THREAD_INCLUDE_H 
#define TIOCSERCONFIG 0x5453
#define ACL_HAVE_NO_RWLOCK 
#define _POSIX_MEMLOCK_RANGE 200809L
#define IPPROTO_ICMP IPPROTO_ICMP
#define PTHREAD_RWLOCK_INITIALIZER { { 0, 0, 0, 0, 0, 0, 0, 0, __PTHREAD_RWLOCK_ELISION_EXTRA, 0, 0 } }
#define ACL_VSTREAM_SET_RWTIMO(stream_ptr,_rw_timeo) do { ACL_VSTREAM *__stream_ptr = stream_ptr; __stream_ptr->rw_timeout = _rw_timeo; } while (0)
#define __stub_fdetach 
#define ACL_ALLOCATOR_CTL_END 0
#define ACL_XML2_F_META (ACL_XML2_F_META_QM | ACL_XML2_F_META_CM | ACL_XML2_F_META_EM)
#define S_ISBLK(mode) __S_ISTYPE((mode), __S_IFBLK)
#define AUT_STAT_FREE 0
#define ELIBEXEC 83
#define ACL_MSGIO_CONNECT_TIMEOUT 4
#define __pic__ 2
#define __PTHREAD_RWLOCK_ELISION_EXTRA 0, { 0, 0, 0, 0, 0, 0, 0 }
#define IFF_DEBUG IFF_DEBUG
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define acl_pthread_key_create pthread_key_create
#define TCPI_OPT_WSCALE 4
#define ETOOMANYREFS 109
#define __S_IFLNK 0120000
#define _POSIX_MQ_OPEN_MAX 8
#define ACL_BITS_MASK_NBBY (8)
#define __INT_FAST64_WIDTH__ 64
#define ACL_PRINT_CHAR(x) ((((x) >= 'a' && (x) <='z') || ((x) >= 'A' && (x) <= 'Z') || ((x) >= '0' && (x) <= '9') || (x) == ';' || (x) == '!' || (x) == ':' || (x) == ',' || (x) == '.' || (x) == '@' || (x) == '#' || (x) == '$' || (x) == '%' || (x) == '^' || (x) == '&' || (x) == '*' || (x) == '(' || (x) == ')' || (x) == '-' || (x) == '=' || (x) == '|' || (x) == '\\' || (x) == '[' || (x) == ']' || (x) == '{' || (x) == '}' || (x) == '\'' || (x) == '"') ? (x) : '-')
#define __DEC64_MIN_EXP__ (-382)
#define __stub_chflags 
#define SIGALRM 14
#define putc(_ch,_fp) _IO_putc (_ch, _fp)
#define ACL_THREADS_PARAMS_INCLUDE_H 
#define __UQUAD_TYPE unsigned long int
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define EDOTDOT 73
#define __BYTE_ORDER __LITTLE_ENDIAN
#define _BITS_UIO_LIM_H 1
#define ACL_VSTREAM_SET_SOCK(stream_ptr,_fd) do { ACL_VSTREAM *__stream_ptr = stream_ptr; __stream_ptr->fd.sock = _fd; } while (0)
#define CDISCARD CTRL('o')
#define __FLT32_DECIMAL_DIG__ 9
#define __O_DIRECT 040000
#define ACL_XML3_FLAG_MULTI_ROOT (1 << 0)
#define TCSETS 0x5402
#define ACL_TIMER_INCLUDE_H 
#define TTY_NAME_MAX 32
#define ACL_TCP_CTL_INCLUDE_H 
#define __USE_POSIX 1
#define EADDRNOTAVAIL 99
#define PF_NFC 39
#define ETIME 62
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define _NETDB_H 1
#define TCPOLEN_MAXSEG 4
#define ACL_PASS_ON_EXEC 0
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define BUFSIZ _IO_BUFSIZ
#define ACL_MASTER_CLASS_PUBLIC "public"
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define SIOCSIFMTU 0x8922
#define ACL_MASTER_SERVER_EXIT 13
#define SO_PEEK_OFF 42
#define __FLT32_HAS_INFINITY__ 1
#define ACL_XML_S_MCMT 14
#define INT_FAST32_MAX (9223372036854775807L)
#define ACL_RES_USE_UDP 0
#define __PTHREAD_COMPAT_PADDING_MID 
#define ACL_HOSTNAME_TYPE_IPV4 0
#define ACL_HOSTNAME_TYPE_IPV6 1
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define ACL_DLL_INCLUDE_H 
#define ACL_XML_F_META_CM (1 << 1)
#define __S_IFSOCK 0140000
#define _WCHAR_T_DECLARED 
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define __UINT_FAST64_TYPE__ long unsigned int
#define ACL_MASTER_SERVER_EXIT_TIMER 26
#define ACL_VSTREAM_NET_INCLUDE_H 
#define PROT_EXEC 0x4
#define MAP_SHARED 0x01
#define _IO_putc_unlocked(_ch,_fp) (_IO_BE ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end, 0) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define _POSIX2_CHAR_TERM 200809L
#define WNOWAIT 0x01000000
#define TIOCSPTLCK _IOW('T', 0x31, int)
#define TIOCPKT_START 8
#define EXIT_SUCCESS 0
#define __LDBL_REDIR_DECL(name) 
#define VAR_AUT_LOOP_END "LOOP_END"
#define CEOF CTRL('d')
#define AF_ALG PF_ALG
#define IPTOS_DSCP_AF22 0x50
#define _SC_2_PBS _SC_2_PBS
#define TIOCGPGRP 0x540F
#define AF_QIPCRTR PF_QIPCRTR
#define UINT_FAST8_MAX (255)
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define F_GETFD 1
#define IPTOS_DSCP_AF23 0x58
#define AVL_SETBALANCE(n,b) ((n)->avl_pcb = (uintptr_t)((((n)->avl_pcb & ~3) | ((b) + 1))))
#define __amd64__ 1
#define _FCNTL_H 1
#define IPV6_ADDR_PREFERENCES 72
#define ACL_VSTREAM_PUTC(ch,stream_ptr) ( (stream_ptr)->wbuf_size == 0 ? (acl_vstream_buffed_space((stream_ptr)), ((stream_ptr)->wbuf[(size_t) (stream_ptr)->wbuf_dlen++] = (ch))) : ((stream_ptr)->wbuf_dlen == stream_ptr->wbuf_size ? (acl_vstream_fflush((stream_ptr)) == ACL_VSTREAM_EOF ? ACL_VSTREAM_EOF : ((stream_ptr)->wbuf[(size_t) (stream_ptr)->wbuf_dlen++] = (ch))) : ((stream_ptr)->wbuf[(size_t) (stream_ptr)->wbuf_dlen++] = (ch))))
#define STDIN_FILENO 0
#define S_IWOTH (S_IWGRP >> 3)
#define si_band _sifields._sigpoll.si_band
#define AI_PASSIVE 0x0001
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define TCSETX 0x5433
#define WAIT_ANY (-1)
#define DBL_MAX_EXP __DBL_MAX_EXP__
#define S_IREAD S_IRUSR
#define __ILP32_OFF32_LDFLAGS "-m32"
#define __S16_TYPE short int
#define ACL_SLICE_FLAG_LP64_ALIGN (1 << 11)
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define acl_spool_isrset acl_ioctl_isrset
#define IPV6_RTHDR 57
#define ACL_XML_S_LGT 2
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define EPROTONOSUPPORT 93
#define UINT_MAX (INT_MAX * 2U + 1U)
#define ACL_EVENT_SELECT 0
#define __itimerspec_defined 1
#define TIOCGWINSZ 0x5413
#define _T_SIZE_ 
#define EBADR 53
#define IFF_MASTER IFF_MASTER
#define FLT_HAS_SUBNORM __FLT_HAS_DENORM__
#define LLONG_MAX __LONG_LONG_MAX__
#define _SYS_UN_H 1
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define __CPU_SETSIZE 1024
#define ENOTRECOVERABLE 131
#define ACL_VSTREAM_CTL_CACHE_SEEK 7
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define PF_ATMSVC 20
#define IN_CLASSC_NET 0xffffff00
#define __FD_SET(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] |= __FD_MASK (d)))
#define TIOCMIWAIT 0x545C
#define _ASM_GENERIC_IOCTL_H 
#define POLLIN 0x001
#define INT16_C(c) c
#define __SIGRTMAX 64
#define __WNOTHREAD 0x20000000
#define _G_va_list __gnuc_va_list
#define TCP_QUICKACK 12
#define _IOS_INPUT 1
#define __USE_LARGEFILE64 1
#define ACL_MASTER_SERVER_SOLITARY 14
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define ACL_MASTER_STAT_SIGHUP_OK 2
#define IFF_PROMISC IFF_PROMISC
#define acl_binhash_foreach ACL_BINHASH_FOREACH
#define __INT64_TYPE__ long int
#define IP_PMTUDISC_OMIT 5
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define EIO 5
#define __FLT_MAX_EXP__ 128
#define _CS_V7_ENV _CS_V7_ENV
#define ACL_RFC1035_TYPE_A 1
#define CEOT CEOF
#define CLOCK_PROCESS_CPUTIME_ID 2
#define ACL_ASTREAM_STATUS_INVALID -1
#define NI_NAMEREQD 8
#define ACL_JSON_T_A_NULL (1 << 3)
#define LDBL_MAX_10_EXP __LDBL_MAX_10_EXP__
#define ACL_VSTREAM_FLAG_RW (1 << 2)
#define ITIMER_REAL ITIMER_REAL
#define ACL_SPOOL ACL_IOCTL
#define TIOCPKT_FLUSHWRITE 2
#define TCP_MD5SIG_FLAG_PREFIX 1
#define FLT_MAX_EXP __FLT_MAX_EXP__
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define _IOT_ifreq_int _IOT(_IOTS(char),IFNAMSIZ,_IOTS(int),1,0,0)
#define __gid_t_defined 
#define ENETUNREACH 101
#define ifr_broadaddr ifr_ifru.ifru_broadaddr
#define EXDEV 18
#define ACL_PTHREAD_PROCESS_SHARED 1
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define IN_LOOPBACKNET 127
#define O_DIRECTORY __O_DIRECTORY
#define ACL_DNS_OK 0
#define ACL_TOKEN_TREE_WORD_MATCH(acl_token_tree_in,word_in,acl_token_out) { const unsigned char *_ptr = (const unsigned char*) word_in; ACL_TOKEN *_token_iter = acl_token_tree_in, *_token = NULL; while (*_ptr) { _token = _token_iter->tokens[*_ptr]; if (_token == NULL) break; _token_iter = _token; _ptr++; } if (_token && (_token->flag & ACL_TOKEN_F_STOP)) acl_token_out = _token; else acl_token_out = NULL; }
#define S_IRGRP (S_IRUSR >> 3)
#define UINT32_C(c) c ## U
#define TIOCPKT 0x5420
#define __ORDER_BIG_ENDIAN__ 4321
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define IPV6_DONTFRAG 62
#define _POSIX_REALTIME_SIGNALS 200809L
#define PF_PACKET 17
#define _POSIX_V6_LP64_OFF64 1
#define ACL_XML2_S_LTAG 5
#define MSG_SYN MSG_SYN
#define ACL_XML3_S_MCMT 14
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define _POSIX_TRACE -1
#define _NSIG (__SIGRTMAX + 1)
#define O_TRUNC 01000
#define ACL_MASTER_SERVER_THREAD_EXIT 22
#define __clock_t_defined 1
#define _POSIX_SEM_VALUE_MAX 32767
#define AF_ATMPVC PF_ATMPVC
#define ESRCH 3
#define ACL_FIFO_FOREACH_REVERSE(iter,fifo_ptr) for ((iter).ptr = (fifo_ptr)->tail; (iter).ptr; (iter).ptr = (iter).ptr->prev)
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __GLIBC_MINOR__ 27
#define __DEC64_MIN__ 1E-383DD
#define IFF_AUTOMEDIA IFF_AUTOMEDIA
#define __WINT_TYPE__ unsigned int
#define __UINT_LEAST32_TYPE__ unsigned int
#define MB_LEN_MAX 16
#define EDQUOT 122
#define __SIZEOF_SHORT__ 2
#define SIOCSIFNAME 0x8923
#define STDOUT_FILENO 1
#define __SSE__ 1
#define SEM_VALUE_MAX (2147483647)
#define IPOPT_TS_TSANDADDR 1
#define CLOCK_BOOTTIME 7
#define _CTYPE_H 1
#define AF_ASH PF_ASH
#define FNDELAY O_NDELAY
#define IPPROTO_GRE IPPROTO_GRE
#define __intptr_t_defined 
#define ACL_TOKEN_F_NONE 0
#define __LDBL_MIN_EXP__ (-16381)
#define IPOPT_SEC IPOPT_SECURITY
#define _IO_va_list __gnuc_va_list
#define ACL_JSON_T_A_STRING (1 << 0)
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define ACL_RFC1035_TYPE_CNAME 5
#define acl_spool_cancel_timer acl_ioctl_cancel_timer
#define ACL_AQUEUE_ERR_COND_WAIT 4
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define IPTOS_CLASS(class) ((class) & IPTOS_CLASS_MASK)
#define ACL_APP_CTL_INIT_FN ACL_MASTER_SERVER_POST_INIT
#define ACL_PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _POSIX_VDISABLE '\0'
#define ACL_CHROOT_UID_INCLUDE_H 
#define ACL_SCAN_FLAG_RMDIR (1 << 1)
#define ACL_MSGIO_USER 1000
#define ACL_ARGV_INCLUDE_H 
#define IPV6_RECVPKTINFO 49
#define ACL_AIO_CTL_LINE_LENGTH 5
#define UINT16_MAX (65535)
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define SIGCLD SIGCHLD
#define ENOSPC 28
#define stdout stdout
#define IP_OPTIONS 4
#define __WINT_WIDTH__ 32
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define N_SYNC_PPP 14
#define ACL_ISCNTRL(c) iscntrl(_ACL_UCHAR_(c))
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define __INT_LEAST8_MAX__ 0x7f
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define ACL_MYDB_INCLUDE_H 
#define ACL_MASTER_XPORT_NAME_SOCK "sock"
#define __USE_POSIX199309 1
#define SO_RCVBUF 8
#define MAP_FILE 0
#define _IOC_TYPECHECK(t) (sizeof(t))
#define SIGUSR2 12
#define _IOC_READ 2U
#define __FLT32X_MAX_10_EXP__ 308
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define S_ISREG(mode) __S_ISTYPE((mode), __S_IFREG)
#define ____mbstate_t_defined 1
#define TCP_TIMESTAMP 24
#define ACL_MDT_FLAG_SLICE2 (1 << 11)
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define TIOCM_CD TIOCM_CAR
#define sched_priority sched_priority
#define SO_ATTACH_REUSEPORT_EBPF 52
#define EBADRQC 56
#define ACL_ARGV_END ((char *) 0)
#define MAP_GROWSDOWN 0x00100
#define SIGTSTP 20
#define ACL_XML2_S_LEM 4
#define N_MOUSE 2
#define __SIZEOF_INT128__ 16
#define ACL_AIO_SET_TIMEOUT(stream_ptr,_timeo_) do { ACL_ASTREAM *__stream_ptr = stream_ptr; __stream_ptr->timeout = _timeo_; } while(0)
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define SO_RCVBUFFORCE 33
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define TCP_MAXWIN 65535
#define __LDBL_MAX_10_EXP__ 4932
#define ACL_TLS_OUT_OF_INDEXES 0xffffffff
#define acl_pthread_create pthread_create
#define __ATOMIC_RELAXED 0
#define ACL_NORETURN __attribute__((__noreturn__))
#define IP_PMTUDISC 10
#define TIOCOUTQ 0x5411
#define ACL_XML_IS_COMMENT(x) (((x)->flag & ACL_XML_F_META_CM))
#define __FSBLKCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define _IOC_NONE 0U
#define MADV_NOHUGEPAGE 15
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define EMSGSIZE 90
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define SA_ONESHOT SA_RESETHAND
#define __stub_stty 
#define SCM_TIMESTAMPING_OPT_STATS 54
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define ACL_VSTRING_VSTREAM_INCLUDE_H 
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define TH_FIN 0x01
#define XATTR_NAME_MAX 255
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define ACL_AIO_CTL_CLOSE_HOOK_ADD 18
#define VAR_AUT_IF "IF"
#define _LP64 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define TCP_MSS_DEFAULT 536U
#define POSIX_FADV_RANDOM 1
#define ACL_TOKEN_TREE_INCLUDE_H 
#define PIPE_BUF 4096
#define __UINT8_C(c) c
#define ACL_XML2_S_NXT 0
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define ACL_DB_ERR_AFFECTED 104
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define _BITS_STDINT_INTN_H 1
#define __FLT64_MAX_EXP__ 1024
#define IPTOS_TOS(tos) ((tos) & IPTOS_TOS_MASK)
#define IPPROTO_NONE IPPROTO_NONE
#define SOL_TCP 6
#define CWERASE CTRL('w')
#define _NET_IF_H 1
#define ACL_BITS_MAP_INCLUDE_H 
#define SIGKILL 9
#define ACL_XML_FLAG_XML_ENCODE (1 << 3)
#define ACL_ATOMIC_INCLUDE_H 
#define ACL_XML2_S_RTAG 8
#define ACL_ADDR_SEP '|'
#define __INT_LEAST32_TYPE__ int
#define SOL_CAIF 278
#define ACL_TEST_VAR_INCLUDE_H 
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define ECHRNG 44
#define _SC_REGEXP _SC_REGEXP
#define EHOSTDOWN 112
#define VAR_AUT_SLEEP "SLEEP"
#define __ASM_GENERIC_SOCKIOS_H 
#define SIOCDRARP 0x8960
#define __wchar_t__ 
#define ACL_AIO_CTL_TIMEO_HOOK_DEL 21
#define ACL_DB_ERR_STORE 103
#define MAP_HUGE_MASK 0x3f
#define acl_pthread_mutexattr_settype pthread_mutexattr_settype
#define SIOCGIFCONF 0x8912
#define SO_RXQ_OVFL 40
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __USE_POSIX_IMPLICITLY 1
#define ACL_DNS_ERR_TIMEOUT -16
#define __UINT64_TYPE__ long unsigned int
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define ACL_HTABLE_STAT_DUPLEX_KEY 2
#define ACL_BINHASH_FLAG_KEY_REUSE (1 << 0)
#define _PTHREAD_H 1
#define TCP_REPAIR_OPTIONS 22
#define AVL_PREV(tree,node) avl_walk(tree, node, AVL_BEFORE)
#define ENOLCK 37
#define ACL_DNS_ERR_FMT -1
#define ENFILE 23
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __ILP32_OFF32_CFLAGS "-m32"
#define MSG_DONTWAIT MSG_DONTWAIT
#define ACL_MSGIO_EXCEPT 2
#define _IO_RIGHT 04
#define ACL_PROCTL_INCLUDE_H 
#define SO_MEMINFO 55
#define _SC_IOV_MAX _SC_IOV_MAX
#define ACL_HTABLE_CTL_END 0
#define _SC_PASS_MAX _SC_PASS_MAX
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define _LARGEFILE64_SOURCE 
#define _STDDEF_H_ 
#define _XOPEN_UNIX 1
#define __stack_t_defined 1
#define SIOCSIFADDR 0x8916
#define __stub___compat_bdflush 
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define ACL_MSGIO_QUIT 5
#define be64toh(x) __bswap_64 (x)
#define ifc_req ifc_ifcu.ifcu_req
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define ENOSYS 38
#define ACL_XML2_FLAG_MULTI_ROOT (1 << 0)
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define TIOCSWINSZ 0x5414
#define ACL_PATH_MAILDIR "/var/mail"
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define SA_RESTART 0x10000000
#define ACL_MDT_FLAG_UNI (1 << 0)
#define IPPROTO_IGMP IPPROTO_IGMP
#define _LFS_LARGEFILE 1
#define ACL_METER_TIME(info) acl_meter_time(__FILE__, __LINE__, info)
#define DT_DIR DT_DIR
#define ACL_XML_S_RLT 6
#define ACL_SOCKET_RBUF_SIZE 204800
#define ACL_FSTREAM(fp) ((fp)->fp)
#define MADV_SEQUENTIAL 2
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define EXPERIMENT 1
#define __INT_FAST8_TYPE__ signed char
#define LDBL_EPSILON __LDBL_EPSILON__
#define TCP_INFO 11
#define ACL_AIO_CTL_WRITE_HOOK_ADD 16
#define PF_IUCV 32
#define PF_RDS 21
#define __PID_T_TYPE __S32_TYPE
#define FIONCLEX 0x5450
#define CHARCLASS_NAME_MAX 2048
#define AUT_FLAG_ENDIF 8
#define acl_ring_first ACL_RING_FIRST
#define _STATBUF_ST_NSEC 
#define TCPOPT_MAXSEG 2
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX _SC_AIO_MAX
#define DT_LNK DT_LNK
#define CTIME 0
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define ENOTCONN 107
#define N_SLIP 1
#define va_arg(v,l) __builtin_va_arg(v,l)
#define VAR_AUT_LOOP_CONTINUE "LOOP_CONTINUE"
#define ACL_APP_CTL_ON_TIMEOUT ACL_MASTER_SERVER_ON_TIMEOUT
#define _SYS_POLL_H 1
#define S_ISGID __S_ISGID
#define IN_CLASSB_NET 0xffff0000
#define IPTOS_ECN_NOT_ECT 0x00
#define _THREAD_SHARED_TYPES_H 1
#define ACL_JSON_T_LEAF (1 << 12)
#define AT_REMOVEDIR 0x200
#define __f128(x) x ##f128
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define ACL_ENOTCONN ENOTCONN
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define _LINUX_IOCTL_H 
#define _IOC_DIR(nr) (((nr) >> _IOC_DIRSHIFT) & _IOC_DIRMASK)
#define __GNUC_STDC_INLINE__ 1
#define _BITS_FLOATN_H 
#define ACL_VSTREAM_SET_US(x) ((x)->flag |= ACL_VSTREAM_FLAG_US)
#define P_tmpdir "/tmp"
#define __attribute_pure__ __attribute__ ((__pure__))
#define __FLT64_HAS_DENORM__ 1
#define ACL_DNS_ERR_NXRR -8
#define POLLERR 0x008
#define __WORDSIZE_TIME64_COMPAT32 1
#define ACL_XML2_F_META_EM (1 << 2)
#define __HAVE_DISTINCT_FLOAT32 0
#define EPFNOSUPPORT 96
#define ENOTSUP EOPNOTSUPP
#define ESRMNT 69
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define IP_CHECKSUM 23
#define _IO_stdin ((_IO_FILE*)(&_IO_2_1_stdin_))
#define isalnum(c) __isctype((c), _ISalnum)
#define IN_CLASSC_NSHIFT 8
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define IPV6_ROUTER_ALERT 22
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define _IO_cleanup_region_start(_fct,_fp) 
#define ACL_FILE_INVALID (int) -1
#define MADV_RANDOM 1
#define MADV_NORMAL 0
#define _IO_NO_READS 4
#define _POSIX2_BC_BASE_MAX 99
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define PTHREAD_ONCE_INIT 0
#define _IO_DEC 020
#define _BITS_TYPES___LOCALE_T_H 1
#define __DBL_DECIMAL_DIG__ 17
#define IPOPT_RA 148
#define __STDC_UTF_32__ 1
#define ACL_HOSTNAME_TYPE_CNAME 2
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define DBL_MAX_10_EXP __DBL_MAX_10_EXP__
#define __INT_FAST8_WIDTH__ 8
#define IPOPT_RR 7
#define ACL_HTABLE_FLAG_KEY_REUSE (1 << 0)
#define _POSIX_MQ_PRIO_MAX 32
#define __FXSR__ 1
#define TIOCPKT_DOSTOP 32
#define ACL_SANE_SOCKET_INCLUDE_H 
#define ACL_MYMASTER_INCLUDE_H 
#define CLD_DUMPED CLD_DUMPED
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define _SIZE_T 
#define ENOANO 55
#define _IO_ERR_SEEN 0x20
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __ULONG32_TYPE unsigned int
#define TCP_QUEUE_SEQ 21
#define TIOCSERSETMULTI 0x545B
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define FLT_DECIMAL_DIG __FLT_DECIMAL_DIG__
#define __siginfo_t_defined 1
#define _IO_OCT 040
#define _PATH_HOSTS "/etc/hosts"
#define __SI_CLOCK_T __clock_t
#define UTIME_OMIT ((1l << 30) - 2l)
#define SOCK_STREAM SOCK_STREAM
#define _SYS_UIO_H 1
#define acl_pthread_mutexattr_init pthread_mutexattr_init
#define FOPEN_MAX 16
#define TIME_UTC 1
#define __BIG_ENDIAN 4321
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define ACL_DNS_FLAG_CHECK_DNS_IP (1 << 1)
#define ACL_SPOOL_WORKER_FN ACL_IOCTL_WORKER_FN
#define __suseconds_t_defined 
#define ACL_AIO_FLAG_DELAY_CLOSE (1 << 3)
#define ACL_JSON_T_A_NUMBER (1 << 1)
#define _IOC_NRBITS 8
#define IPOPT_TS 68
#define ACL_VBUF_PUT(v,c) ((v)->ptr < (v)->data + (v)->len ? (int) (*(v)->ptr++ = (c)) : acl_vbuf_put((v),(c)))
#define POLLPRI 0x002
#define F_EXLCK 4
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define MQ_PRIO_MAX 32768
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define IFF_UP IFF_UP
#define _IO_STDIO 040000
#define ACL_RING_FOREACH(iter,head_ptr) for ((iter).ptr = acl_ring_succ((head_ptr)); (iter).ptr != (head_ptr); (iter).ptr = acl_ring_succ((iter).ptr))
#define __off_t_defined 
#define ACL_VSTREAM_LOCAL(stream_ptr) ((stream_ptr)->addr_local ? (stream_ptr)->addr_local : "")
#define SO_CNX_ADVICE 53
#define ACL_UNIT_TEST_INCLUDE_H 
#define ENOTBLK 15
#define SIOCGARP 0x8954
#define acl_spool_nworker acl_ioctl_nworker
#define _BITS_SIGTHREAD_H 1
#define ACL_FHANDLE_O_SYNC (1 << 5)
#define _IO_IS_APPENDING 0x1000
#define SI_KERNEL SI_KERNEL
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define ACL_JSON_T_DOUBLE (1 << 9)
#define _FILE_OFFSET_BITS 64
#define S_IWRITE S_IWUSR
#define ACL_TOLOWER(c) tolower(_ACL_UCHAR_(c))
#define acl_htable_iter_value ACL_HTABLE_ITER_VALUE
#define DT_REG DT_REG
#define SIGPWR 30
#define ACL_HTABLE_ITER_KEY(iter) ((iter).ptr->key.c_key)
#define _STRUCT_TIMESPEC 1
#define TIOCM_ST 0x008
#define CSTATUS _POSIX_VDISABLE
#define ACL_TRIGGER_REQ_WAKEUP 'W'
#define _POSIX_REENTRANT_FUNCTIONS 1
#define ACL_HOST_PORT_INCLUDE_H 
#define ACL_BLOCKING 0
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define _GCC_SIZE_T 
#define ACL_VSTREAM_FILE(stream_ptr) ((stream_ptr)->fd.h_file)
#define acl_fifo_push acl_fifo_push_back
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define ACL_BINHASH_ITER_KEY(iter) ((iter).ptr->key.c_key)
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define __INO64_T_TYPE __UQUAD_TYPE
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define ACL_EVENTS_H_INCLUDED 
#define ACL_XML_S_CDATA 16
#define IPV6_AUTOFLOWLABEL 70
#define ACL_JSON_T_MEMBER (1 << 13)
#define acl_pthread_cond_wait pthread_cond_wait
#define __U64_TYPE unsigned long int
#define L_SET SEEK_SET
#define SO_PEERGROUPS 59
#define _LIBC_LIMITS_H_ 1
#define _IOT_ifreq _IOT(_IOTS(char),IFNAMSIZ,_IOTS(char),16,0,0)
#define ACL_NON_BLOCKING 1
#define ACL_SYS_PATCH_INCLUDE_H 
#define IPV6_2292DSTOPTS 4
#define IP_RECVFRAGSIZE 25
#define _IOC_SIZEBITS 14
#define ACL_VSTREAM_POPEN_ARGV 2
#define O_EXCL 0200
#define __UINT32_C(c) c ## U
#define acl_vstream_fgets acl_vstream_gets
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define EISCONN 106
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define EAI_SYSTEM -11
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define ACL_VSTREAM_TYPE_LISTEN_INET (1 << 3)
#define acl_mystrline acl_strline
#define ACL_FHANDLE_O_FLOCK (1 << 0)
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define _IO_BUFSIZ _G_BUFSIZ
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define ACL_MASTER_SERVER_UNLIMITED 15
#define ACL_MASTER_SERVER_RAW_TABLE 5
#define acl_pthread_mutex_trylock pthread_mutex_trylock
#define IPOPT_NOP 1
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define IP_NODEFRAG 22
#define NGREG __NGREG
#define TCP_MD5SIG 14
#define __POSIX_FADV_DONTNEED 4
#define _LFS_ASYNCHRONOUS_IO 1
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define TIOCM_LE 0x001
#define AF_UNIX PF_UNIX
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define IFHWADDRLEN 6
#define IP_RECVRETOPTS IP_RETOPTS
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define TCPOPT_SACK_PERMITTED 4
#define IPPROTO_COMP IPPROTO_COMP
#define FLT_MANT_DIG __FLT_MANT_DIG__
#define DBL_TRUE_MIN __DBL_DENORM_MIN__
#define EUSERS 87
#define SI_ASYNCNL SI_ASYNCNL
#define ACL_PREPARE_COMPILE 1
#define _VA_LIST_T_H 
#define ACL_BINHASH_STAT_INVAL 1
#define AF_DECnet PF_DECnet
#define __INT8_MAX__ 0x7f
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define __LONG_WIDTH__ 64
#define __STDLIB_MB_LEN_MAX 16
#define SIOCGRARP 0x8961
#define __PIC__ 2
#define SIG_ERR ((__sighandler_t) -1)
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define AI_NUMERICHOST 0x0004
#define __UINT_FAST32_TYPE__ long unsigned int
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define O_NOFOLLOW __O_NOFOLLOW
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define _IOW_BAD(type,nr,size) _IOC(_IOC_WRITE,(type),(nr),sizeof(size))
#define POLL_ERR POLL_ERR
#define ACL_XML3_S_NXT 0
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define __INO_T_MATCHES_INO64_T 1
#define N_HCI 15
#define _IO_fpos_t _G_fpos_t
#define __POSIX_FADV_NOREUSE 5
#define ACL_JSON_T_ARRAY (1 << 10)
#define __CHAR32_TYPE__ unsigned int
#define AF_CAIF PF_CAIF
#define ACL_HTABLE_CTL_RWLOCK 1
#define TIOCSSERIAL 0x541F
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define TIOCCONS 0x541D
#define ispunct(c) __isctype((c), _ISpunct)
#define ACL_MASTER_SERVER_POST_INIT 11
#define ACL_ENV_INCLUDE_H 
#define acl_pthread_setspecific pthread_setspecific
#define TCSETXF 0x5434
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __ACL_RFC1035_INCLUDE_H__ 
#define ACL_DNS_ERR_BUILD_REQ -18
#define VAR_AUT_LOOP_BREAK "LOOP_BREAK"
#define SO_ATTACH_BPF 50
#define WINT_MIN (0u)
#define __fsfilcnt_t_defined 
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define MAP_HUGETLB 0x40000
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define _IO(type,nr) _IOC(_IOC_NONE,(type),(nr),0)
#define ECOMM 70
#define EMFILE 24
#define ACL_VSTREAM_SET_MS(x) ((x)->flag |= ACL_VSTREAM_FLAG_MS)
#define SA_NOCLDWAIT 2
#define __va_list__ 
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define IPTOS_DSCP_AF31 0x68
#define AUT_LOOP_BREAK -100
#define SO_SNDLOWAT 19
#define ACL_RING_LAST_APPL(head,app_type,ring_member) (acl_ring_pred(head) != (head) ? ACL_RING_TO_APPL(acl_ring_pred(head), app_type, ring_member) : 0)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define IPTOS_DSCP_AF32 0x70
#define RTLD_NOLOAD 0x00004
#define _POSIX_ASYNC_IO 1
#define CTRL(x) (x&037)
#define SO_ERROR 4
#define POLL_PRI POLL_PRI
#define _POSIX_NGROUPS_MAX 8
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define ACL_FHANDLE_O_NOATIME (1 << 3)
#define ERFKILL 132
#define MSG_EOR MSG_EOR
#define __INT32_TYPE__ int
#define IPOPT_END IPOPT_EOL
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define WUNTRACED 2
#define _ASSERT_H 1
#define FASYNC O_ASYNC
#define ENOBUFS 105
#define SIOCADDMULTI 0x8931
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __time_t_defined 1
#define SIOCGIFNAME 0x8910
#define _SYS_SYSMACROS_H 1
#define _SC_INT_MIN _SC_INT_MIN
#define ACL_ISUPPER(c) isupper(_ACL_UCHAR_(c))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define _IO_BE(expr,res) __builtin_expect ((expr), res)
#define ACL_RES_ERR_SEND -100
#define IPV6_PMTUDISC_WANT 1
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK 5
#define IPOPT_EOL 0
#define TIOCGSOFTCAR 0x5419
#define AT_EACCESS 0x200
#define ACL_APP_CTL_THREAD_EXIT_CTX ACL_MASTER_SERVER_THREAD_EXIT_CTX
#define __SWORD_TYPE long int
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define be16toh(x) __bswap_16 (x)
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define SIGINT 2
#define __PTHREAD_SPINS 0, 0
#define RTLD_BINDING_MASK 0x3
#define _BITS_POSIX1_LIM_H 1
#define AVL_SETPARENT(n,p) ((n)->avl_pcb = (((n)->avl_pcb & 7) | (uintptr_t)(p)))
#define ACL_FIFO_FOREACH(iter,fifo_ptr) for ((iter).ptr = (fifo_ptr)->head; (iter).ptr; (iter).ptr = (iter).ptr->next)
#define ACL_IOCTL_CTL_INIT_CTX 7
#define SIOCGIFMTU 0x8921
#define ACL_EVENT_CONNECT (1 << 3)
#define ACL_MSGIO_TIMEOUT 1
#define ACL_VSTRING_RESET(vp) { (vp)->vbuf.ptr = (vp)->vbuf.data; acl_vbuf_clearerr(&(vp)->vbuf); }
#define ACL_MASTER_TYPE_INCLUDE_H 
#define SO_GET_FILTER SO_ATTACH_FILTER
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define MCAST_BLOCK_SOURCE 43
#define ACL_EVENT_KERNEL 2
#define __DEC128_MAX_EXP__ 6145
#define IN_CLASSA_NET 0xff000000
#define ACL_VBUF_FLAG_DBUF (1<<5)
#define acl_pthread_mutex_lock pthread_mutex_lock
#define TIOCSER_TEMT 0x01
#define _T_SIZE 
#define SIGIOT SIGABRT
#define UINT8_C(c) c
#define ACL_SAFE_STRNCPY(_obj,_src,_size) do { if (_size > 0) { size_t _n = strlen(_src); _n = _n > (size_t ) _size - 1? (size_t) _size - 1 : _n; memcpy(_obj, _src, _n); _obj[_n] = 0; } } while (0)
#define acl_vstring_fgets(s,p) (acl_vstring_gets((s), (p)) == ACL_VSTREAM_EOF ? 0 : (s))
#define SO_MAX_PACING_RATE 47
#define __va_arg_pack() __builtin_va_arg_pack ()
#define EWOULDBLOCK EAGAIN
#define ACL_BINHASH_STAT_NO_KEY 3
#define DTTOIF(dirtype) ((dirtype) << 12)
#define S_IXGRP (S_IXUSR >> 3)
#define TCP_USER_TIMEOUT 18
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define va_end(v) __builtin_va_end(v)
#define POLL_IN POLL_IN
#define __ATOMIC_CONSUME 1
#define ACL_AIO_FLAG_ISRD (1 << 1)
#define ACL_VSTREAM_CTL_WRITE_FN 2
#define FP_XSTATE_MAGIC2 0x46505845U
#define TCP_SAVED_SYN 28
#define ACL_SOCKET int
#define _IO_stdout ((_IO_FILE*)(&_IO_2_1_stdout_))
#define ACL_ALLOCATOR_CTL_MAX_SIZE 2
#define __GNUC_MINOR__ 5
#define __INT_FAST16_WIDTH__ 64
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define PF_KEY 15
#define __DEC32_MANT_DIG__ 7
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define acl_vstream_fwrite acl_vstream_writen
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define ELIBBAD 80
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define INTMAX_C(c) c ## L
#define RTLD_DEEPBIND 0x00008
#define acl_htable_iter_key ACL_HTABLE_ITER_KEY
#define ESTRPIPE 86
#define __glibc_clang_prereq(maj,min) 0
#define ACL_VSTREAM_CTL_FD 4
#define ILL_PRVOPC ILL_PRVOPC
#define PF_INET 2
#define _PATH_NETWORKS "/etc/networks"
#define _SC_SIGNALS _SC_SIGNALS
#define TCPOPT_NOP 1
#define si_call_addr _sifields._sigsys._call_addr
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define TIOCSERGETMULTI 0x545A
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define _STDINT_H 1
#define __CONST_SOCKADDR_ARG const struct sockaddr *
#define __DBL_MAX_10_EXP__ 308
#define __FILE_defined 1
#define ACL_EINVAL EINVAL
#define POLLRDNORM 0x040
#define WCOREFLAG __WCOREFLAG
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define TCP_REPAIR_WINDOW 29
#define SO_ZEROCOPY 60
#define PF_MPLS 28
#define S_ISUID __S_ISUID
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define TCFLSH 0x540B
#define ACL_DEBUG_MALLOC_INCLUDE_H 
#define _POSIX_TRACE_LOG -1
#define isascii_l(c,l) __isascii_l ((c), (l))
#define __INT16_C(c) c
#define _DIRENT_H 1
#define ACL_SPOOL_CTL_THREAD_IDLE ACL_IOCTL_CTL_THREAD_IDLE
#define SCM_TIMESTAMP SO_TIMESTAMP
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define ACL_STACK_INCLUDE_H 
#define PF_RXRPC 33
#define ACL_BITS_MASK_BYTE_COUNT(mask) ((mask)->data_len)
#define TTYDEF_SPEED (B9600)
#define TIOCM_RNG 0x080
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define __U32_TYPE unsigned int
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define ACL_WATCHDOG_INCLUDE_H 
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define MS_INVALIDATE 2
#define SOL_AAL 265
#define ACL_DEFINE_UNIX_INCLUDE_H 
#define _SC_THREADS _SC_THREADS
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SIG_IGN ((__sighandler_t) 1)
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define N_R3964 9
#define MADV_DONTNEED 4
#define __STDC__ 1
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define TCP_THIN_LINEAR_TIMEOUTS 16
#define ELIBMAX 82
#define EEXIST 17
#define static_assert _Static_assert
#define TIOCGEXCL _IOR('T', 0x40, int)
#define ACL_MASTER_SERVER_ON_UNBIND 29
#define __sigstack_defined 1
#define __PTRDIFF_TYPE__ long int
#define __USE_FILE_OFFSET64 1
#define ACL_XML3_S_MTXT 13
#define ACL_METER_TIME_INCLUDE_H 
#define IP_UNICAST_IF 50
#define ACL_AIO_FLAG_IOCP_CLOSE (1 << 0)
#define errno (*__errno_location ())
#define EL2NSYNC 45
#define __ino64_t_defined 
#define ACL_UNIX_INCLUDE_H 
#define ACL_MDT_FLAG_NUL (0)
#define acl_spool_enable_write acl_ioctl_enable_write
#define AF_ISDN PF_ISDN
#define SIOCDEVPRIVATE 0x89F0
#define ACL_ECONNABORTED ECONNABORTED
#define ACL_MASTER_SERVER_IN_FLOW_DELAY 8
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define PF_ATMPVC 8
#define ACL_TOKEN_F_DENY (1 << 2)
#define _BITS_STAT_H 1
#define acl_pthread_cond_broadcast pthread_cond_broadcast
#define IPV6_MULTICAST_LOOP 19
#define ACL_TOKEN_F_STOP (1 << 0)
#define _IO_HEX 0100
#define __ATOMIC_SEQ_CST 5
#define IPTOS_PREC_NETCONTROL IPTOS_CLASS_CS7
#define N_PPP 3
#define POLLWRNORM 0x100
#define F_DUPFD_CLOEXEC 1030
#define SIOCGIFDSTADDR 0x8917
#define S_ISFIFO(mode) __S_ISTYPE((mode), __S_IFIFO)
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define ACL_MEMPOOL_CTL_MUTEX 1
#define IPV6_2292HOPLIMIT 8
#define ENOENT 2
#define EAI_SERVICE -8
#define acl_pthread_mutex_destroy pthread_mutex_destroy
#define ACL_VSTREAM_CTL_END 0
#define ENOPKG 65
#define __CLOCK_T_TYPE __SYSCALL_SLONG_TYPE
#define ACL_JSON_INCLUDE_H 
#define AF_X25 PF_X25
#define ACL_BITS_MASK_ISSET(number,mask) (ACL_BITS_MASK_FD_BYTE((number), (mask)) & ACL_BITS_MASK_FD_BIT(number))
#define LDBL_DIG __LDBL_DIG__
#define _USE_FAST_MACRO 1
#define _IO_fpos64_t _G_fpos64_t
#define RTLD_GLOBAL 0x00100
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define IPV6_LEAVE_ANYCAST 28
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define UINT_LEAST32_MAX (4294967295U)
#define PF_IB 27
#define ACL_VSTREAM_FLAG_MS (1 << 20)
#define __UINTPTR_TYPE__ long unsigned int
#define strrncasecmp acl_strrncasecmp
#define TH_URG 0x20
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define TIOCM_CTS 0x020
#define CLD_KILLED CLD_KILLED
#define MADV_HUGEPAGE 14
#define _IOWR(type,nr,size) _IOC(_IOC_READ|_IOC_WRITE,(type),(nr),(_IOC_TYPECHECK(size)))
#define SIGTERM 15
#define PTHREAD_KEYS_MAX 1024
#define __DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD
#define TIOCMBIS 0x5416
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define EBADSLT 57
#define SHUT_RD SHUT_RD
#define __DEC128_MANT_DIG__ 34
#define IPV6_PMTUDISC_DONT 0
#define __LDBL_MIN_10_EXP__ (-4931)
#define _SC_FIFO _SC_FIFO
#define EKEYREVOKED 128
#define IP_MULTICAST_TTL 33
#define __useconds_t_defined 
#define F_SETFL 4
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define TIOCNOTTY 0x5422
#define _DIRENT_HAVE_D_TYPE 
#define _SC_SPAWN _SC_SPAWN
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define __SI_BAND_TYPE long int
#define MAP_ANONYMOUS 0x20
#define ACL_XML2_IS_CDATA(x) (((x)->flag & ACL_XML2_F_CDATA))
#define ACL_VSTREAM_POPEN_GID 4
#define __HAVE_DISTINCT_FLOAT64X 0
#define LOCK_UN 8
#define _IO_wint_t wint_t
#define acl_fifo_iter_value ACL_FIFO_ITER_VALUE
#define SIG_SETMASK 2
#define ACL_VSTREAM_CTL_READ_FN 1
#define __SIZEOF_LONG_LONG__ 8
#define MAP_NONBLOCK 0x10000
#define AF_IPX PF_IPX
#define ACL_BINHASH_INCLUDE_H 
#define __USE_ATFILE 1
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define _POSIX_OPEN_MAX 20
#define _POSIX_LOGIN_NAME_MAX 9
#define ACL_AIO_CTL_ACCEPT_FN 1
#define isgraph(c) __isctype((c), _ISgraph)
#define _GCC_PTRDIFF_T 
#define ACL_SPOOL_CTL_THREAD_MAX ACL_IOCTL_CTL_THREAD_MAX
#define __O_PATH 010000000
#define __FLT128_DECIMAL_DIG__ 36
#define _POSIX_THREAD_KEYS_MAX 128
#define R_OK 4
#define ACL_MASTER_SERVER_ON_ACCEPT 17
#define B_FALSE 0
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define acl_mymemdup(ptr,len) acl_memdup_glue(__FILE__, __LINE__, (ptr), len)
#define ACL_MSGIO_CONNECT 3
#define ACL_IOCTL_CTL_END 0
#define __LDBL_DIG__ 18
#define ENOTUNIQ 76
#define __exctype(name) extern int name (int) __THROW
#define _SC_NZERO _SC_NZERO
#define _GETOPT_CORE_H 1
#define ACL_XML2_S_TXT 11
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define ACL_MBOX_T_MPSC 1
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define S_IROTH (S_IRGRP >> 3)
#define ACL_MYSTRING_INCLUDE_H 
#define POSIX_MADV_RANDOM 1
#define iscntrl(c) __isctype((c), _IScntrl)
#define ACL_VSTRING_CTL_MAXLEN 1
#define IPOPT_LSRR 131
#define _SC_STREAMS _SC_STREAMS
#define __POSIX2_THIS_VERSION 200809L
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define __ldiv_t_defined 1
#define ___int_ptrdiff_t_h 
#define ACL_FLOCK_OP_SHARED 1
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define PATH_MAX 4096
#define acl_pthread_attr_init pthread_attr_init
#define X_OK 1
#define ACL_JSON_FLAG_ADD_SPACE (1 << 1)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define IPOPT_COPIED(o) ((o) & IPOPT_COPY)
#define _IO_UNITBUF 020000
#define ACL_FILE_INCLUDE_H 
#define SOL_ALG 279
#define IP_PMTUDISC_INTERFACE 4
#define RTLD_LAZY 0x00001
#define SHUT_WR SHUT_WR
#define FLT_MAX __FLT_MAX__
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define PF_VSOCK 40
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define __S_IFMT 0170000
#define ACL_BITS_MASK_FD_BYTE(number,mask) (((unsigned char *) (mask)->data)[(number) / ACL_BITS_MASK_NBBY])
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define _IO_peekc(_fp) _IO_peekc_unlocked (_fp)
#define __INT_LEAST64_WIDTH__ 64
#define IPOPT_SECUR_RESTR 0xaf13
#define INT_LEAST16_MAX (32767)
#define IPTOS_PREC_FLASHOVERRIDE IPTOS_CLASS_CS4
#define ACL_AIO_CTL_CONNECT_HOOK_DEL 23
#define _IO_ftrylockfile(_fp) 
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __FD_ISSET(d,set) ((__FDS_BITS (set)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define _GNU_SOURCE 
#define _POSIX_SAVED_IDS 1
#define SO_PRIORITY 12
#define SO_RCVTIMEO 20
#define _BITS_CPU_SET_H 1
#define __P(args) args
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define _POSIX_BARRIERS 200809L
#define ACL_MEMPOOL_CTL_END 0
#define acl_fifo_foreach_reverse ACL_FIFO_FOREACH_REVERSE
#define ACL_HTMLCODE_INCLUDE_H 
#define PF_LOCAL 1
#define __S_ISGID 02000
#define VAR_AUT_ELSE "ELSE"
#define d_fileno d_ino
#define ACL_XML_FLAG_MULTI_ROOT (1 << 0)
#define __ATOMIC_ACQ_REL 4
#define S_IFIFO __S_IFIFO
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define TCP_NODELAY 1
#define __fsblkcnt_t_defined 
#define ACL_INET_FLAG_NBLOCK 1
#define FPE_FLTUND FPE_FLTUND
#define __LP64_OFF64_CFLAGS "-m64"
#define EMEDIUMTYPE 124
#define _STDLIB_H 1
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define ACL_JSON_T_STRING (1 << 5)
