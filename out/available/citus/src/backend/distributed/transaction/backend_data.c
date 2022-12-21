#define __S_IFBLK 0060000
#define DatumGetByteaP(X) ((bytea *) PG_DETOAST_DATUM(X))
#define Anum_pg_index_indisready 12
#define SOL_LLC 268
#define REGCOLLATIONOID 4191
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define BootstrapTransactionId ((TransactionId) 1)
#define DATEMULTIRANGEOID 4535
#define Anum_pg_authid_rolcreaterole 5
#define __SSP_STRONG__ 3
#define __attr_access(x) __attribute__ ((__access__ x))
#define ERRCODE_INVALID_JSON_TEXT MAKE_SQLSTATE('2','2','0','3','2')
#define __DBL_MIN_EXP__ (-1021)
#define foreach_oid(var,l) for (ListCell *(var ## CellDoNotUse) = list_head(l); (var ## CellDoNotUse) != NULL && (((var) = lfirst_oid(var ## CellDoNotUse)) || true); var ## CellDoNotUse = lnext(l, var ## CellDoNotUse))
#define RELKIND_PARTITIONED_INDEX 'I'
#define EMULTIHOP 72
#define SET_LOCKTAG_RELATION_EXTEND(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION_EXTEND, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define ERRCODE_AMBIGUOUS_COLUMN MAKE_SQLSTATE('4','2','7','0','2')
#define ERRCODE_DUPLICATE_ALIAS MAKE_SQLSTATE('4','2','7','1','2')
#define SYNC_FILE_RANGE_WRITE_AND_WAIT (SYNC_FILE_RANGE_WRITE | SYNC_FILE_RANGE_WAIT_BEFORE | SYNC_FILE_RANGE_WAIT_AFTER)
#define AT_STATX_SYNC_AS_STAT 0x0000
#define STATUS_EOF (-2)
#define MAX_FORKNUM INIT_FORKNUM
#define RelationCloseSmgr(relation) do { if ((relation)->rd_smgr != NULL) { smgrclose((relation)->rd_smgr); Assert((relation)->rd_smgr == NULL); } } while (0)
#define AF_MAX PF_MAX
#define _SC_PII _SC_PII
#define __CFLOAT32 _Complex _Float32
#define __UINT_LEAST16_MAX__ 0xffff
#define IP_ROUTER_ALERT 5
#define JSONPATHARRAYOID 4073
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define __FLT128_MAX_10_EXP__ 4932
#define OPCLASS_ITEM_STORAGETYPE 3
#define RE_DUP_MAX (0x7fff)
#define SVE_SIG_REGS_OFFSET ((sizeof(struct sve_context) + (__SVE_VQ_BYTES - 1)) / __SVE_VQ_BYTES * __SVE_VQ_BYTES)
#define PG_DEPENDENCIESOID 3402
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define outerPlanState(node) (((PlanState *)(node))->lefttree)
#define BackendIdForTempRelations() (ParallelLeaderBackendId == InvalidBackendId ? MyBackendId : ParallelLeaderBackendId)
#define sa_sigaction __sigaction_handler.sa_sigaction
#define XLOG_MARK_UNIMPORTANT 0x02
#define ILIST_H 
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define EUSERS 87
#define si_fd _sifields._sigpoll.si_fd
#define _GETOPT_CORE_H 1
#define GUC_check_errmsg pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errmsg_string = format_elog_string
#define USE_LLVM 1
#define _T_WCHAR_ 
#define _SC_IPV6 _SC_IPV6
#define RWH_WRITE_LIFE_SHORT 2
#define IS_VALID_DATE(d) ((DATETIME_MIN_JULIAN - POSTGRES_EPOCH_JDATE) <= (d) && (d) < (DATE_END_JULIAN - POSTGRES_EPOCH_JDATE))
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define NI_MAXSERV 32
#define ERRCODE_CONNECTION_DOES_NOT_EXIST MAKE_SQLSTATE('0','8','0','0','3')
#define restrict __restrict__
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define __CFLOAT64 _Complex _Float64
#define ERRCODE_RESERVED_NAME MAKE_SQLSTATE('4','2','9','3','9')
#define OIDVECTORARRAYOID 1013
#define si_arch _sifields._sigsys._arch
#define LockHashPartitionLockByIndex(i) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + (i)].lock)
#define __S64_TYPE long int
#define _PRINTF_NAN_LEN_MAX 4
#define PG_BINARY_R "r"
#define __FLT_MAX_EXP__ 128
#define PG_BINARY_W "w"
#define INTSTYLE_POSTGRES 0
#define GUC_SUPERUSER_ONLY 0x0100
#define __SQUAD_TYPE long int
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _BITS_SIGINFO_CONSTS_H 1
#define PG_GETARG_EXPANDED_ARRAYX(n,metacache) DatumGetExpandedArrayX(PG_GETARG_DATUM(n), metacache)
#define SIGBUS 7
#define GUC_UNIT_MB 0x4000
#define ERRCODE_INVALID_ARGUMENT_FOR_NTILE MAKE_SQLSTATE('2','2','0','1','4')
#define _BSD_SIZE_T_DEFINED_ 
#define NL_NMAX INT_MAX
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define ERRCODE_SINGLETON_SQL_JSON_ITEM_REQUIRED MAKE_SQLSTATE('2','2','0','3','8')
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define XACT_FLAGS_NEEDIMMEDIATECOMMIT (1U << 2)
#define BTGreaterEqualStrategyNumber 4
#define CONFIGURE_ARGS " '--build=aarch64-linux-gnu' '--prefix=/usr' '--includedir=${prefix}/include' '--mandir=${prefix}/share/man' '--infodir=${prefix}/share/info' '--sysconfdir=/etc' '--localstatedir=/var' '--disable-option-checking' '--disable-silent-rules' '--libdir=${prefix}/lib/aarch64-linux-gnu' '--runstatedir=/run' '--disable-maintainer-mode' '--disable-dependency-tracking' '--with-tcl' '--with-perl' '--with-python' '--with-pam' '--with-openssl' '--with-libxml' '--with-libxslt' '--mandir=/usr/share/postgresql/14/man' '--docdir=/usr/share/doc/postgresql-doc-14' '--sysconfdir=/etc/postgresql-common' '--datarootdir=/usr/share/' '--datadir=/usr/share/postgresql/14' '--bindir=/usr/lib/postgresql/14/bin' '--libdir=/usr/lib/aarch64-linux-gnu/' '--libexecdir=/usr/lib/postgresql/' '--includedir=/usr/include/postgresql/' '--with-extra-version= (Ubuntu 14.5-0ubuntu0.22.04.1)' '--enable-nls' '--enable-thread-safety' '--enable-debug' '--enable-dtrace' '--disable-rpath' '--with-uuid=e2fs' '--with-gnu-ld' '--with-gssapi' '--with-ldap' '--with-pgport=5432' '--with-system-tzdata=/usr/share/zoneinfo' 'AWK=mawk' 'MKDIR_P=/bin/mkdir -p' 'PROVE=/usr/bin/prove' 'PYTHON=/usr/bin/python3' 'TAR=/bin/tar' 'XSLTPROC=xsltproc --nonet' 'CFLAGS=-g -O2 -flto=auto -ffat-lto-objects -flto=auto -ffat-lto-objects -fstack-protector-strong -Wformat -Werror=format-security' 'LDFLAGS=-Wl,-Bsymbolic-functions -flto=auto -ffat-lto-objects -flto=auto -Wl,-z,relro -Wl,-z,now' '--enable-tap-tests' '--with-icu' '--with-llvm' 'LLVM_CONFIG=/usr/bin/llvm-config-14' 'CLANG=/usr/bin/clang-14' '--with-lz4' '--with-systemd' '--with-selinux' 'build_alias=aarch64-linux-gnu' 'CPPFLAGS=-Wdate-time -D_FORTIFY_SOURCE=2' 'CXXFLAGS=-g -O2 -flto=auto -ffat-lto-objects -flto=auto -ffat-lto-objects -fstack-protector-strong -Wformat -Werror=format-security'"
#define __CHAR_BIT__ 8
#define SO_DOMAIN 39
#define MINIMAL_TUPLE_DATA_OFFSET offsetof(MinimalTupleData, t_infomask2)
#define HTUP_H 
#define USE_OPENSSL 1
#define REMOTE_TRANSACTION_H 
#define heap_getattr(tup,attnum,tupleDesc,isnull) ( ((attnum) > 0) ? ( ((attnum) > (int) HeapTupleHeaderGetNatts((tup)->t_data)) ? getmissingattr((tupleDesc), (attnum), (isnull)) : fastgetattr((tup), (attnum), (tupleDesc), (isnull)) ) : heap_getsysattr((tup), (attnum), (tupleDesc), (isnull)) )
#define SHORTALIGN(LEN) TYPEALIGN(ALIGNOF_SHORT, (LEN))
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define HASH_CONTEXT 0x0400
#define AuthIdRelationId 1260
#define EREMCHG 78
#define VARATT_IS_EXPANDED_HEADER(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_header == (uint32) EOH_HEADER_MAGIC)
#define PG_VERSION_STR "PostgreSQL 14.5 (Ubuntu 14.5-0ubuntu0.22.04.1) on aarch64-unknown-linux-gnu, compiled by gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0, 64-bit"
#define pairingheap_reset(h) ((h)->ph_root = NULL)
#define HASH_KEYCOPY 0x0100
#define SIGTTIN 21
#define EACCES 13
#define PG_RETURN_UINT32(x) return UInt32GetDatum(x)
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define ROLE_PG_WRITE_SERVER_FILES 4570
#define SOCK_RAW SOCK_RAW
#define InstrCountFiltered2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered2 += (delta); } while(0)
#define PG_GETARG_BOOL(n) DatumGetBool(PG_GETARG_DATUM(n))
#define Anum_pg_authid_rolcreatedb 6
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define EDESTADDRREQ 89
#define ERRCODE_NO_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','5')
#define AMFLAG_HAS_TID_RANGE (1 << 0)
#define ERRCODE_INVALID_TEXT_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','2')
#define __SVE_FFR_OFFSET(vq) (__SVE_PREGS_OFFSET(vq) + __SVE_PREGS_SIZE(vq))
#define FIELDNO_NULLABLE_DATUM_DATUM 0
#define pg_attribute_cold __attribute__((cold))
#define si_pid _sifields._kill.si_pid
#define ERRCODE_DATA_EXCEPTION MAKE_SQLSTATE('2','2','0','0','0')
#define PG_DIAG_STATEMENT_POSITION 'P'
#define INT8RANGEOID 3926
#define PIPE_BUF 4096
#define PG_MINORVERSION_NUM 5
#define PG_AUTHID_D_H 
#define IP_TTL 2
#define DEFAULT_TABLE_ACCESS_METHOD "heap"
#define DatumGetArrayTypeP(X) ((ArrayType *) PG_DETOAST_DATUM(X))
#define UInt64GetDatum(X) ((Datum) (X))
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define RECORDARRAYOID 2287
#define __USE_XOPEN2KXSI 1
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define RelationIsScannable(relation) ((relation)->rd_rel->relispopulated)
#define CASHOID MONEYOID
#define index_getattr(tup,attnum,tupleDesc,isnull) ( AssertMacro(PointerIsValid(isnull) && (attnum) > 0), *(isnull) = false, !IndexTupleHasNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup) + IndexInfoFindDataOffset((tup)->t_info) + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocache_index_getattr((tup), (attnum), (tupleDesc)) ) : ( (att_isnull((attnum)-1, (char *)(tup) + sizeof(IndexTupleData))) ? ( *(isnull) = true, (Datum)NULL ) : ( nocache_index_getattr((tup), (attnum), (tupleDesc)) ) ) )
#define RWH_WRITE_LIFE_EXTREME 5
#define VARDATA(PTR) VARDATA_4B(PTR)
#define SOCK_RDM SOCK_RDM
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define Int8GetDatum(X) ((Datum) (X))
#define ERRCODE_TRANSACTION_ROLLBACK MAKE_SQLSTATE('4','0','0','0','0')
#define PF_DECnet 12
#define INVALID_PLACEMENT_ID 0
#define IPV6_CHECKSUM 7
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define XactCompletionForceSyncCommit(xinfo) ((xinfo & XACT_COMPLETION_FORCE_SYNC_COMMIT) != 0)
#define UINT_FAST16_WIDTH __WORDSIZE
#define IP_MAX_MEMBERSHIPS 20
#define HAVE_STRUCT_ADDRINFO 1
#define BITMAPLEN(NATTS) (((int)(NATTS) + 7) / 8)
#define PG_MCV_LISTOID 5017
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define PG_GETARG_BYTEA_P_SLICE(n,a,b) DatumGetByteaPSlice(PG_GETARG_DATUM(n),a,b)
#define pairingheap_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define MaxAttrSize (10 * 1024 * 1024)
#define foreach_ptr(var,l) for (ListCell *(var ## CellDoNotUse) = list_head(l); (var ## CellDoNotUse) != NULL && (((var) = lfirst(var ## CellDoNotUse)) || true); var ## CellDoNotUse = lnext(l, var ## CellDoNotUse))
#define strtoi64(str,endptr,base) ((int64) strtol(str, endptr, base))
#define PRIXFAST32 __PRIPTR_PREFIX "X"
#define ReplicationSlotAllocationLock (&MainLWLockArray[36].lock)
#define pg_attribute_printf(f,a) __attribute__((format(PG_PRINTF_ATTRIBUTE, f, a)))
#define ERRCODE_UNDEFINED_COLUMN MAKE_SQLSTATE('4','2','7','0','3')
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __STATFS_MATCHES_STATFS64 1
#define SHAREDINVALRELMAP_ID (-4)
#define VirtualTransactionIdEquals(vxid1,vxid2) ((vxid1).backendId == (vxid2).backendId && (vxid1).localTransactionId == (vxid2).localTransactionId)
#define RESPONSE_OKAY 0
#define _BITS_SOCKADDR_H 1
#define InvalidSnapshot ((Snapshot) NULL)
#define Anum_pg_class_reloftype 5
#define XACT_REPEATABLE_READ 2
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define lsecond(l) lfirst(list_nth_cell(l, 1))
#define NUM_FIXED_LWLOCKS (PREDICATELOCK_MANAGER_LWLOCK_OFFSET + NUM_PREDICATELOCK_PARTITIONS)
#define PG_SOMAXCONN 10000
#define ARR_DATA_PTR(a) (((char *) (a)) + ARR_DATA_OFFSET(a))
#define USE_SQL_DATES 2
#define SPIN_H 
#define MCAST_LEAVE_SOURCE_GROUP 47
#define BKPBLOCK_WILL_INIT 0x40
#define __FLT32X_DECIMAL_DIG__ 17
#define IPV6_IPSEC_POLICY 34
#define __PIC__ 2
#define RelationIsAccessibleInLogicalDecoding(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && (IsCatalogRelation(relation) || RelationIsUsedAsCatalogTable(relation)))
#define _POSIX_MQ_PRIO_MAX 32
#define MovedPartitionsBlockNumber InvalidBlockNumber
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _IO_USER_LOCK 0x8000
#define BOOTSTRAP_SUPERUSERID 10
#define STA_DEL 0x0020
#define IPV6_2292HOPOPTS 3
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define ERRCODE_SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','4')
#define ACL_SELECT_FOR_UPDATE ACL_UPDATE
#define Max(x,y) ((x) > (y) ? (x) : (y))
#define Anum_pg_class_relrowsecurity 23
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define HAVE_SYSLOG 1
#define IPV6_PMTUDISC_PROBE 3
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define IP_FREEBIND 15
#define HOLD_INTERRUPTS() (InterruptHoldoffCount++)
#define LONG_WIDTH __WORDSIZE
#define _POSIX_PATH_MAX 256
#define SEGV_BNDERR SEGV_BNDERR
#define TYPALIGN_DOUBLE 'd'
#define init_local_spin_delay(status) init_spin_delay(status, __FILE__, __LINE__, PG_FUNCNAME_MACRO)
#define REGDICTIONARYOID 3769
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __SAFE_MEM_LIB_H__ 
#define __RLIM_T_MATCHES_RLIM64_T 1
#define AF_IPX PF_IPX
#define GUC_UNIT_MIN 0x30000
#define _POSIX_MEMLOCK 200809L
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define TYPCATEGORY_COMPOSITE 'C'
#define __O_NOFOLLOW 0100000
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','5')
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define FmgrHookIsNeeded(fn_oid) (!needs_fmgr_hook ? false : (*needs_fmgr_hook)(fn_oid))
#define OIDOID 26
#define __SIGEV_MAX_SIZE 64
#define PG_INT128_TYPE __int128
#define TRANSACTION_MANAGMENT_H 
#define __SVE_VL_MAX (__SVE_VQ_MAX * __SVE_VQ_BYTES)
#define __sigval_t_defined 
#define MCAST_LEAVE_GROUP 45
#define SOL_BLUETOOTH 274
#define SizeOfXLogRecordDataHeaderShort (sizeof(uint8) * 2)
#define IPC_H 
#define FD_SETSIZE __FD_SETSIZE
#define __CFLOAT128 _Complex _Float128
#define _SC_CPUTIME _SC_CPUTIME
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define _ASM_GENERIC_ERRNO_BASE_H 
#define __SVE_ZREGS_OFFSET 0
#define __SVE_VL_MIN (__SVE_VQ_MIN * __SVE_VQ_BYTES)
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define PG_DYNSHMEM_DIR "pg_dynshmem"
#define IS_OTHER_REL(rel) ((rel)->reloptkind == RELOPT_OTHER_MEMBER_REL || (rel)->reloptkind == RELOPT_OTHER_JOINREL || (rel)->reloptkind == RELOPT_OTHER_UPPER_REL)
#define __DBL_MIN_10_EXP__ (-307)
#define makeNode(_type_) ((_type_ *) newNode(sizeof(_type_),T_ ##_type_))
#define GAI_NOWAIT 1
#define ENOTTY 25
#define XACT_SERIALIZABLE 3
#define FunctionCall5(flinfo,arg1,arg2,arg3,arg4,arg5) FunctionCall5Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define TRACE_SORT 1
#define ERRCODE_ERROR_IN_ASSIGNMENT MAKE_SQLSTATE('2','2','0','0','5')
#define RelationGetTargetPageFreeSpace(relation,defaultff) (BLCKSZ * (100 - RelationGetFillFactor(relation, defaultff)) / 100)
#define _ISOC11_SOURCE 1
#define MOD_NANO ADJ_NANO
#define slist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, slist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define L_cuserid 9
#define _CS_V6_ENV _CS_V6_ENV
#define ALLOCSET_DEFAULT_MAXSIZE (8 * 1024 * 1024)
#define Anum_pg_attribute_attalign 11
#define __u_char_defined 
#define UTIME_NOW ((1l << 30) - 1l)
#define SYNC_H 
#define foreach_int(var,l) for (ListCell *(var ## CellDoNotUse) = list_head(l); (var ## CellDoNotUse) != NULL && (((var) = lfirst_int(var ## CellDoNotUse)) || true); var ## CellDoNotUse = lnext(l, var ## CellDoNotUse))
#define HAVE_DECL_F_FULLFSYNC 0
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define RTLessStrategyNumber 20
#define __FLT64X_HAS_INFINITY__ 1
#define BKPBLOCK_HAS_IMAGE 0x10
#define IPV6_HOPOPTS 54
#define S_ISGID __S_ISGID
#define S_IFBLK __S_IFBLK
#define Anum_pg_type_typrelid 12
#define _POSIX_TRACE_EVENT_FILTER -1
#define Min(x,y) ((x) < (y) ? (x) : (y))
#define __INT_LEAST16_TYPE__ short int
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define Anum_pg_type_typcollation 29
#define SO_SECURITY_AUTHENTICATION 22
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define PG_RETURN_CSTRING(x) return CStringGetDatum(x)
#define vsprintf pg_vsprintf
#define PG_MAJORVERSION_NUM 14
#define NameStr(name) ((name).data)
#define _BITS_TYPES_LOCALE_T_H 1
#define UINT8_WIDTH 8
#define MSG_WAITALL MSG_WAITALL
#define REGPROCEDUREARRAYOID 2207
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define SCNdLEAST8 "hhd"
#define PG_DIAG_CONTEXT 'W'
#define INT8ARRAYOID 1016
#define _WCHAR_T_DEFINED 
#define IsAnyAutoVacuumProcess() (IsAutoVacuumLauncherProcess() || IsAutoVacuumWorkerProcess())
#define _POSIX_V7_LP64_OFF64 1
#define _XOPEN_XCU_VERSION 4
#define __O_NOATIME 01000000
#define USECS_PER_DAY INT64CONST(86400000000)
#define HAVE_INT_OPTERR 1
#define __SI_SIGFAULT_ADDL 
#define ENOMEM 12
#define BITARRAYOID 1561
#define SPLICE_F_GIFT 8
#define _SYS_TIME_H 1
#define SOL_TIPC 271
#define ACL_TRUNCATE_CHR 'D'
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define TTS_FIXED(slot) (((slot)->tts_flags & TTS_FLAG_FIXED) != 0)
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH _CS_PATH
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define _ERRNO_H 1
#define h_addr h_addr_list[0]
#define ACL_DELETE_CHR 'd'
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define __stub_sigreturn 
#define for_each_cell(cell,lst,initcell) for (ForEachState cell ##__state = for_each_cell_setup(lst, initcell); (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define _XBS5_LPBIG_OFFBIG -1
#define IN_CLASSB_NSHIFT 16
#define DEFAULT_BGWRITER_FLUSH_AFTER 64
#define __always_inline __inline __attribute__ ((__always_inline__))
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define NFDBITS __NFDBITS
#define REGCLASSOID 2205
#define ACL_ALL_RIGHTS_SEQUENCE (ACL_USAGE|ACL_SELECT|ACL_UPDATE)
#define POINTOID 600
#define SCNd8 "hhd"
#define FALLOC_FL_UNSHARE_RANGE 0x40
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define PG_RETURN_INT64(x) return Int64GetDatum(x)
#define PROC_VACUUM_FOR_WRAPAROUND 0x08
#define S_IXOTH (S_IXGRP >> 3)
#define InitTupleHashIterator(htable,iter) tuplehash_start_iterate(htable->hashtab, iter)
#define SINVAL_H 
#define WCHAR_WIDTH 32
#define DSA_ALLOC_NO_OOM 0x02
#define lfourth_oid(l) lfirst_oid(list_nth_cell(l, 3))
#define slist_check(head) ((void) (head))
#define SOL_IPV6 41
#define HeapTupleHeaderSetXminFrozen(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_FROZEN) )
#define __O_CLOEXEC 02000000
#define INT8MULTIRANGEARRAYOID 6157
#define IP_MTU 14
#define PG_VERSION_13 130000
#define PG_VERSION_14 140000
#define PG_VERSION_15 150000
#define __ARM_FP 14
#define FIELDNO_FUNCTIONCALLINFODATA_ISNULL 4
#define AF_ROSE PF_ROSE
#define SIGSTKFLT 16
#define DatumGetUInt32(X) ((uint32) (X))
#define __fortify_function __extern_always_inline __attribute_artificial__
#define LP_UNUSED 0
#define sve_vl_from_vq(vq) __sve_vl_from_vq(vq)
#define Anum_pg_type_typtypmod 27
#define _RPC_NETDB_H 1
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define SCNd16 "hd"
#define TZ_STRLEN_MAX 255
#define SIZEOF_OFF_T 8
#define MinSizeOfXactRelfilenodes offsetof(xl_xact_relfilenodes, xnodes)
#define FAPPEND O_APPEND
#define SOCK_DCCP SOCK_DCCP
#define NAME_MAX 255
#define __mbstate_t_defined 1
#define CommandIdGetDatum(X) ((Datum) (X))
#define _POSIX_JOB_CONTROL 1
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define PG_HAVE_ATOMIC_TEST_SET_FLAG 
#define Anum_pg_attribute_atthasmissing 16
#define PF_SECURITY 14
#define MaxAttrNumber 32767
#define IPV6_2292DSTOPTS 4
#define CppAsString2(x) CppAsString(x)
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define RWF_WRITE_LIFE_NOT_SET RWH_WRITE_LIFE_NOT_SET
#define PG_DIAG_TABLE_NAME 't'
#define strtou64(str,endptr,base) ((uint64) strtoul(str, endptr, base))
#define __ASM_GENERIC_BITS_PER_LONG 
#define ARR_SIZE(a) VARSIZE(a)
#define MinSizeOfXactAbort sizeof(xl_xact_abort)
#define HAVE_DECL_PREADV 1
#define ENABLE_THREAD_SAFETY 1
#define HAVE_WCTYPE_H 1
#define RELATION_IS_OTHER_TEMP(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP && !(relation)->rd_islocaltemp)
#define SCNd32 "d"
#define ATTMAP_H 
#define sprintf pg_sprintf
#define DatumGetUInt64(X) ((uint64) (X))
#define _POSIX_THREAD_CPUTIME 0
#define pg_bswap16(x) __builtin_bswap16(x)
#define __linux 1
#define VARATT_IS_4B_C(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x02)
#define ERROR_BUFFER_SIZE 256
#define PG_MAGIC_FUNCTION_NAME Pg_magic_func
#define AGG_CONTEXT_WINDOW 2
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define VARATT_IS_4B_U(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x00)
#define ACL_ALL_RIGHTS_LANGUAGE (ACL_USAGE)
#define VARCHAROID 1043
#define ERRCODE_SUCCESSFUL_COMPLETION MAKE_SQLSTATE('0','0','0','0','0')
#define AI_ADDRCONFIG 0x0020
#define si_int _sifields._rt.si_sigval.sival_int
#define TYPTYPE_ENUM 'e'
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define _BITS_PTHREADTYPES_ARCH_H 1
#define HOURS_PER_DAY 24
#define RTContainsStrategyNumber 7
#define LockHashPartitionLockByProc(leader_pgproc) LockHashPartitionLock((leader_pgproc)->pgprocno)
#define FirstGenbkiObjectId 10000
#define __UINT32_MAX__ 0xffffffffU
#define ERRCODE_S_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','2')
#define __bool_true_false_are_defined 1
#define _BITS_SS_FLAGS_H 1
#define IsTrueArrayType(typeForm) (OidIsValid((typeForm)->typelem) && (typeForm)->typsubscript == F_ARRAY_SUBSCRIPT_HANDLER)
#define __TIMER_T_TYPE void *
#define INT4MULTIRANGEARRAYOID 6150
#define ERRCODE_DATETIME_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','0','8')
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define __SIZE_T 
#define DSM_CREATE_NULL_IF_MAXSEGMENTS 0x0001
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define _POSIX_PIPE_BUF 512
#define DatumGetHeapTupleHeaderCopy(X) ((HeapTupleHeader) PG_DETOAST_DATUM_COPY(X))
#define __S_ISVTX 01000
#define SIGUSR2 12
#define _BITS_POSIX_OPT_H 1
#define ALIGNOF_DOUBLE 8
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define PF_SNA 22
#define _ATFILE_SOURCE 1
#define NO_MAX_DSIZE (-1)
#define SCNuLEAST16 "hu"
#define _SC_NETWORKING _SC_NETWORKING
#define HEAPAM_H 
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define __FLT128_MIN_EXP__ (-16381)
#define _STATBUF_ST_BLKSIZE 
#define MSG_FIN MSG_FIN
#define PATH_REQ_OUTER(path) ((path)->param_info ? (path)->param_info->ppi_req_outer : (Relids) NULL)
#define SO_NO_CHECK 11
#define UINT_FAST64_WIDTH 64
#define RTLeftStrategyNumber 1
#define ACL_ALL_RIGHTS_TABLESPACE (ACL_CREATE)
#define Anum_pg_attribute_attcompression 13
#define WUNTRACED 2
#define ERESTART 85
#define PG_HAVE_ATOMIC_ADD_FETCH_U32 
#define Anum_pg_publication_pubviaroot 9
#define NZERO 20
#define EISNAM 120
#define UINT16_C(c) c
#define BlockIdEquals(blockId1,blockId2) ((blockId1)->bi_hi == (blockId2)->bi_hi && (blockId1)->bi_lo == (blockId2)->bi_lo)
#define LOCK_READ 64
#define FullTransactionIdIsNormal(x) FullTransactionIdFollowsOrEquals(x, FirstNormalFullTransactionId)
#define SCNuLEAST32 "u"
#define Anum_pg_index_indpred 20
#define SCNo8 "hho"
#define ENOKEY 126
#define ENOMSG 42
#define _PC_PRIO_IO _PC_PRIO_IO
#define RENAME_EXCHANGE (1 << 1)
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define SpinLockInit(lock) S_INIT_LOCK(lock)
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define qsort(a,b,c,d) pg_qsort(a,b,c,d)
#define FIELDNO_EXPRSTATE_RESNULL 2
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define AF_FILE PF_FILE
#define __SCHAR_MAX__ 0x7f
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define PG_IOLBF _IOLBF
#define __USE_KERNEL_IPV6_DEFS 0
#define GUC_UNIT_S 0x20000
#define __attribute_used__ __attribute__ ((__used__))
#define RelationHasReferenceCountZero(relation) ((bool)((relation)->rd_refcnt == 0))
#define VARATT_IS_EXTENDED(PTR) (!VARATT_IS_4B_U(PTR))
#define ERRCODE_INVALID_DATABASE_DEFINITION MAKE_SQLSTATE('4','2','P','1','2')
#define __KERNEL_STRICT_NAMES 
#define SCNxFAST16 __PRIPTR_PREFIX "x"
#define SYNC_METHOD_FSYNC 0
#define pg_write_barrier_impl() __atomic_thread_fence(__ATOMIC_RELEASE)
#define __INT64_C(c) c ## L
#define PG_INSTR_CLOCK CLOCK_MONOTONIC
#define SCNuLEAST64 __PRI64_PREFIX "u"
#define SA_SIGINFO 4
#define FIELDNO_HEAPTUPLEHEADERDATA_HOFF 4
#define HAVE_TYPEOF 1
#define STA_PPSWANDER 0x0400
#define __CHAR16_TYPE__ short unsigned int
#define GUC_REPORT 0x0010
#define ERRCODE_WITH_CHECK_OPTION_VIOLATION MAKE_SQLSTATE('4','4','0','0','0')
#define PROCARRAY_H 
#define RelationGetRelationName(relation) (NameStr((relation)->rd_rel->relname))
#define DSM_IMPL_SYSV 2
#define DO_AGGSPLIT_SERIALIZE(as) (((as) & AGGSPLITOP_SERIALIZE) != 0)
#define PATHOID 602
#define AttributeRelationId 1249
#define RELATION_IS_LOCAL(relation) ((relation)->rd_islocaltemp || (relation)->rd_createSubid != InvalidSubTransactionId)
#define SIZEOF_DSA_POINTER 8
#define WL_SOCKET_WRITEABLE (1 << 2)
#define CHECKPOINT_FLUSH_ALL 0x0010
#define PG_GETARG_EXPANDED_ARRAY(n) DatumGetExpandedArray(PG_GETARG_DATUM(n))
#define BGW_EXTRALEN 128
#define dlist_check(head) ((void) (head))
#define LOG_DESTINATION_STDERR 1
#define __isascii(c) (((c) & ~0x7f) == 0)
#define __toascii(c) ((c) & 0x7f)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define SO_TIMESTAMP_OLD 29
#define _SC_2_UPE _SC_2_UPE
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define S_IRWXO (S_IRWXG >> 3)
#define SCNu8 "hhu"
#define Anum_pg_dist_partition_colocationid 4
#define F_SET_RW_HINT 1036
#define WL_EXIT_ON_PM_DEATH (1 << 5)
#define BLCKSZ 8192
#define _BITS_SIGINFO_ARCH_H 1
#define SizeOfXLogRecordBlockCompressHeader sizeof(XLogRecordBlockCompressHeader)
#define si_addr _sifields._sigfault.si_addr
#define SOL_TLS 282
#define DatumGetCommandId(X) ((CommandId) (X))
#define XLOGRECORD_H 
#define RelationHasLocalCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option == VIEW_OPTION_CHECK_OPTION_LOCAL)
#define FRAMEOPTION_END_UNBOUNDED_FOLLOWING 0x00100
#define WILDCARD_NODE_ID 0
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define ERRCODE_FDW_UNABLE_TO_CREATE_EXECUTION MAKE_SQLSTATE('H','V','0','0','L')
#define SCNxFAST64 __PRI64_PREFIX "x"
#define FIOSETOWN 0x8901
#define SpinLockFree(lock) S_LOCK_FREE(lock)
#define IS_VALID_TIMESTAMP(t) (MIN_TIMESTAMP <= (t) && (t) < END_TIMESTAMP)
#define FullTransactionIdFollows(a,b) ((a).value > (b).value)
#define HeapTupleHasVarWidth(tuple) (((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH) != 0)
#define ERRCODE_INSUFFICIENT_RESOURCES MAKE_SQLSTATE('5','3','0','0','0')
#define HAVE_DLOPEN 1
#define Anum_pg_class_relfilenode 8
#define SO_LOCK_FILTER 44
#define TSROUND(j) (rint(((double) (j)) * TS_PREC_INV) / TS_PREC_INV)
#define _ASM_GENERIC_INT_LL64_H 
#define PRIuFAST16 __PRIPTR_PREFIX "u"
#define _SC_VERSION _SC_VERSION
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define RELKIND_COMPOSITE_TYPE 'c'
#define RTSubStrategyNumber 24
#define __wint_t_defined 1
#define IPPROTO_EGP IPPROTO_EGP
#define __USER_LABEL_PREFIX__ 
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define RelFileNodeEquals(node1,node2) ((node1).relNode == (node2).relNode && (node1).dbNode == (node2).dbNode && (node1).spcNode == (node2).spcNode)
#define SCNx8 "hhx"
#define _BITS_ENDIANNESS_H 1
#define errcontext set_errcontext_domain(TEXTDOMAIN), errcontext_msg
#define ObjectAddressSubSet(addr,class_id,object_id,object_sub_id) do { (addr).classId = (class_id); (addr).objectId = (object_id); (addr).objectSubId = (object_sub_id); } while (0)
#define __LC_MEASUREMENT 11
#define llast(l) lfirst(list_last_cell(l))
#define Anum_pg_attribute_attbyval 10
#define SCM_TIMESTAMPING_PKTINFO 58
#define AT_SYMLINK_NOFOLLOW 0x100
#define PARALLEL_H 
#define __GLIBC__ 2
#define _SC_POLL _SC_POLL
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define Anum_pg_authid_rolsuper 3
#define PRIuFAST32 __PRIPTR_PREFIX "u"
#define RENAME_NOREPLACE (1 << 0)
#define MaxHeapTupleSize (BLCKSZ - MAXALIGN(SizeOfPageHeaderData + sizeof(ItemIdData)))
#define HASH_ATTACH 0x1000
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define ERRCODE_FDW_INCONSISTENT_DESCRIPTOR_INFORMATION MAKE_SQLSTATE('H','V','0','2','1')
#define WCONTINUED 8
#define RelationUsesLocalBuffers(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_TEMP)
#define setjmp(env) _setjmp (env)
#define HAVE_READLINE_HISTORY_H 1
#define UINT_LEAST8_WIDTH 8
#define TUPLE_LOCK_FLAG_LOCK_UPDATE_IN_PROGRESS (1 << 0)
#define SizeOfXLogRecordBlockHeader (offsetof(XLogRecordBlockHeader, data_length) + sizeof(uint16))
#define ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('2','3','0','0','0')
#define HASH_SHARED_MEM 0x0800
#define ERRCODE_FDW_INVALID_STRING_LENGTH_OR_BUFFER_LENGTH MAKE_SQLSTATE('H','V','0','9','0')
#define FRAMEOPTION_EXCLUSION (FRAMEOPTION_EXCLUDE_CURRENT_ROW | FRAMEOPTION_EXCLUDE_GROUP | FRAMEOPTION_EXCLUDE_TIES)
#define BUFFERALIGN(LEN) TYPEALIGN(ALIGNOF_BUFFER, (LEN))
#define ERRCODE_STACKED_DIAGNOSTICS_ACCESSED_WITHOUT_ACTIVE_HANDLER MAKE_SQLSTATE('0','Z','0','0','2')
#define _LARGEFILE64_SOURCE 1
#define __LDBL_HAS_INFINITY__ 1
#define _BITS_UINTN_IDENTITY_H 1
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define DatumGetUInt16(X) ((uint16) (X))
#define ERRCODE_EXTERNAL_ROUTINE_INVOCATION_EXCEPTION MAKE_SQLSTATE('3','9','0','0','0')
#define __fsfilcnt_t_defined 
#define RTOldBelowStrategyNumber 29
#define __FLT32X_HAS_DENORM__ 1
#define Anum_pg_authid_rolvaliduntil 12
#define PG_RETURN_UINT16(x) return UInt16GetDatum(x)
#define ERRCODE_FLOATING_POINT_EXCEPTION MAKE_SQLSTATE('2','2','P','0','1')
#define FRAMEOPTION_NONDEFAULT 0x00001
#define AF_PHONET PF_PHONET
#define MaxCommandIdAttributeNumber (-5)
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U64 
#define INET_ADDRSTRLEN 16
#define _BITS_TYPESIZES_H 1
#define CITUS_REBALANCER_APPLICATION_NAME_PREFIX "citus_rebalancer gpid="
#define ACL_REFERENCES (1<<5)
#define ERRCODE_FDW_INVALID_COLUMN_NAME MAKE_SQLSTATE('H','V','0','0','7')
#define __GNU_LIBRARY__ 6
#define DatumGetAclP(X) ((Acl *) PG_DETOAST_DATUM(X))
#define PG_ATTRIBUTE_D_H 
#define __FLT32_DIG__ 6
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define ERRCODE_INVALID_COLUMN_DEFINITION MAKE_SQLSTATE('4','2','6','1','1')
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define HASH_PARTITION 0x0001
#define SS_DISABLE SS_DISABLE
#define SO_TIMESTAMPING_OLD 37
#define ENOLINK 67
#define ControlFileLock (&MainLWLockArray[9].lock)
#define __HAVE_FLOAT128X 0
#define __FLT32_IS_IEC_60559__ 2
#define __GLIBC_MINOR__ 35
#define RELKIND_HAS_STORAGE(relkind) ((relkind) == RELKIND_RELATION || (relkind) == RELKIND_INDEX || (relkind) == RELKIND_SEQUENCE || (relkind) == RELKIND_TOASTVALUE || (relkind) == RELKIND_MATVIEW)
#define PF_LLC 26
#define EISDIR 21
#define isblank_l(c,l) __isblank_l ((c), (l))
#define TransactionIdIsNormal(xid) ((xid) >= FirstNormalTransactionId)
#define s6_addr16 __in6_u.__u6_addr16
#define HAVE_SRANDOM 1
#define SO_BROADCAST 6
#define __SVE_NUM_ZREGS 32
#define ERRCODE_INVALID_GRANT_OPERATION MAKE_SQLSTATE('0','L','P','0','1')
#define __SSIZE_T_TYPE __SWORD_TYPE
#define AutovacuumLock (&MainLWLockArray[22].lock)
#define __DEV_T_TYPE __UQUAD_TYPE
#define USECS_PER_SEC INT64CONST(1000000)
#define ACL_ALL_RIGHTS_FDW (ACL_USAGE)
#define PG_RETURN_UINT64(x) return UInt64GetDatum(x)
#define TSMULTIRANGEARRAYOID 6152
#define SIGIO SIGPOLL
#define FD_H 
#define PACKAGE_TARNAME "postgresql"
#define XLogRecHasBlockRef(decoder,block_id) ((decoder)->blocks[block_id].in_use)
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __STDC_UTF_16__ 1
#define OidFunctionCall7(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7) OidFunctionCall7Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define s6_addr32 __in6_u.__u6_addr32
#define le32toh(x) __uint32_identity (x)
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define PG_GETARG_TIMESTAMP(n) DatumGetTimestamp(PG_GETARG_DATUM(n))
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define __O_LARGEFILE 0
#define Anum_pg_authid_rolpassword 11
#define NIL ((List *) NULL)
#define EXECNODES_H 
#define SCM_TXTIME SO_TXTIME
#define FLOAT8OID 701
#define ERRCODE_PROGRAM_LIMIT_EXCEEDED MAKE_SQLSTATE('5','4','0','0','0')
#define AT_RECURSIVE 0x8000
#define AT_SYMLINK_FOLLOW 0x400
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define DT_SOCK DT_SOCK
#define InvalidBackendId (-1)
#define DSM_IMPL_MMAP 4
#define CACHELINEALIGN(LEN) TYPEALIGN(PG_CACHE_LINE_SIZE, (LEN))
#define AttrNumberGetAttrOffset(attNum) ( AssertMacro(AttrNumberIsForUserDefinedAttr(attNum)), ((attNum) - 1) )
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define PG_RETURN_CHAR(x) return CharGetDatum(x)
#define Int64GetDatumFast(X) Int64GetDatum(X)
#define SYNC_METHOD_FDATASYNC 1
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_PII_OSI _SC_PII_OSI
#define __FLT32X_HAS_INFINITY__ 1
#define XLR_BLOCK_ID_TOPLEVEL_XID 252
#define Anum_pg_type_typispreferred 9
#define SO_ACCEPTCONN 30
#define UINT32_WIDTH 32
#define PG_RETURN_INT32(x) return Int32GetDatum(x)
#define __INT32_MAX__ 0x7fffffff
#define DatumGetObjectId(X) ((Oid) (X))
#define ERRCODE_RAISE_EXCEPTION MAKE_SQLSTATE('P','0','0','0','1')
#define GetCTETargetList(cte) (AssertMacro(IsA((cte)->ctequery, Query)), ((Query *) (cte)->ctequery)->commandType == CMD_SELECT ? ((Query *) (cte)->ctequery)->targetList : ((Query *) (cte)->ctequery)->returningList)
#define __GLIBC_USE_DEPRECATED_GETS 0
#define _POSIX_V7_LPBIG_OFFBIG -1
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define PG_GETARG_INTERVAL_P(n) DatumGetIntervalP(PG_GETARG_DATUM(n))
#define __INT_WIDTH__ 32
#define O_NDELAY O_NONBLOCK
#define IS_DUMMY_REL(r) is_dummy_rel(r)
#define __S_IFCHR 0020000
#define __SIZE_WIDTH__ 64
#define S_ISVTX __S_ISVTX
#define ERRCODE_IS_CATEGORY(ec) (((ec) & ~((1 << 12) - 1)) == 0)
#define PROC_XMIN_FLAGS (PROC_IN_VACUUM | PROC_IN_SAFE_IC)
#define BKI_ARRAY_DEFAULT(value) 
#define HAVE_POSIX_FALLOCATE 1
#define HEAP_HASEXTERNAL 0x0004
#define __STDC_IEC_559__ 1
#define MAKE_SQLSTATE(ch1,ch2,ch3,ch4,ch5) (PGSIXBIT(ch1) + (PGSIXBIT(ch2) << 6) + (PGSIXBIT(ch3) << 12) + (PGSIXBIT(ch4) << 18) + (PGSIXBIT(ch5) << 24))
#define SO_TYPE 3
#define __STDC_ISO_10646__ 201706L
#define CHECKPOINT_IS_SHUTDOWN 0x0001
#define _SC_NL_NMAX _SC_NL_NMAX
#define __PTRDIFF_WIDTH__ 64
#define SCM_RIGHTS SCM_RIGHTS
#define SEM_VALUE_MAX (2147483647)
#define AGGSPLITOP_SKIPFINAL 0x02
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define HEAP_XMAX_IS_KEYSHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_KEYSHR_LOCK)
#define ACL_MODECHG_ADD 1
#define HEAP_MIN_FILLFACTOR 10
#define __SC_THREAD_STACK_MIN_VALUE 75
#define BGW_DEFAULT_RESTART_INTERVAL 60
#define BoolIsValid(boolean) ((boolean) == false || (boolean) == true)
#define DatumGetChar(X) ((char) (X))
#define PROC_IS_AUTOVACUUM 0x01
#define __DECIMAL_DIG__ 36
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define ERRCODE_INVALID_SQL_STATEMENT_NAME MAKE_SQLSTATE('2','6','0','0','0')
#define __USE_FORTIFY_LEVEL 2
#define LOCK_EX 2
#define REGROLEOID 4096
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define HeapTupleHeaderGetRawCommandId(tup) ( (tup)->t_choice.t_heap.t_field3.t_cid )
#define UNKNOWNOID 705
#define TS_PREC_INV 1000000.0
#define Anum_pg_index_indisclustered 9
#define GET_VXID_FROM_PGPROC(vxid,proc) ((vxid).backendId = (proc).backendId, (vxid).localTransactionId = (proc).lxid)
#define _POSIX2_EXPR_NEST_MAX 32
#define OIDARRAYOID 1028
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define parse_analyze_varparams_compat(a,b,c,d,e) parse_analyze_varparams(a, b, c, d)
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define ERRCODE_E_R_I_E_EVENT_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','3')
#define _LARGEFILE_SOURCE 1
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define __FLT128_IS_IEC_60559__ 2
#define ENABLE_NLS 1
#define ESTALE 116
#define HeapTupleHasNulls(tuple) (((tuple)->t_data->t_infomask & HEAP_HASNULL) != 0)
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __SI_MAX_SIZE 128
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define LC_TIME __LC_TIME
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define AutovacuumScheduleLock (&MainLWLockArray[23].lock)
#define SEGV_ACCADI SEGV_ACCADI
#define IPV6_FREEBIND 78
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define __SIZEOF_FLOAT__ 4
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define ALIGNOF_LONG 8
#define OID_MAX UINT_MAX
#define _POSIX_LOGIN_NAME_MAX 9
#define __S_IFIFO 0010000
#define PTRDIFF_MAX (9223372036854775807L)
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define FPSIMD_MAGIC 0x46508001
#define XactSLRULock (&MainLWLockArray[11].lock)
#define pg_attribute_packed() __attribute__((packed))
#define HAVE__BUILTIN_CONSTANT_P 1
#define _XBS5_ILP32_OFF32 -1
#define __ASM_SIGCONTEXT_H 
#define ProcArrayLock (&MainLWLockArray[4].lock)
#define IP_ORIGDSTADDR 20
#define _SC_UINT_MAX _SC_UINT_MAX
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define HAVE_STDLIB_H 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define OPEN_SYNC_FLAG O_SYNC
#define ADJ_MICRO 0x1000
#define TYPALIGN_INT 'i'
#define dlist_tail_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) dlist_tail_element_off(lhead, offsetof(type, membername))))
#define PRS2LOCK_H 
#define PGERROR 21
#define SOL_ICMPV6 58
#define FLOAT8PASSBYVAL true
#define HeapTupleIsHeapOnly(tuple) HeapTupleHeaderIsHeapOnly((tuple)->t_data)
#define __attribute_const__ __attribute__ ((__const__))
#define ERRCODE_INDETERMINATE_DATATYPE MAKE_SQLSTATE('4','2','P','1','8')
#define ERRCODE_FDW_REPLY_HANDLE MAKE_SQLSTATE('H','V','0','0','K')
#define EXEC_FLAG_EXPLAIN_ONLY 0x0001
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define SOL_PNPIPE 275
#define DO_AGGSPLIT_COMBINE(as) (((as) & AGGSPLITOP_COMBINE) != 0)
#define ERRCODE_NO_DATA_FOUND MAKE_SQLSTATE('P','0','0','0','2')
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define htobe32(x) __bswap_32 (x)
#define AF_BLUETOOTH PF_BLUETOOTH
#define ItemIdSetRedirect(itemId,link) ( (itemId)->lp_flags = LP_REDIRECT, (itemId)->lp_off = (link), (itemId)->lp_len = 0 )
#define HeapTupleHeaderSetXminCommitted(tup) ( AssertMacro(!HeapTupleHeaderXminInvalid(tup)), ((tup)->t_infomask |= HEAP_XMIN_COMMITTED) )
#define XACT_FLAGS_ACQUIREDACCESSEXCLUSIVELOCK (1U << 1)
#define pg_restrict __restrict__
#define L_tmpnam 20
#define _DIRENT_HAVE_D_RECLEN 
#define PG_GETARG_BPCHAR_P(n) DatumGetBpCharP(PG_GETARG_DATUM(n))
#define PG_DIAG_SCHEMA_NAME 's'
#define ___int_wchar_t_h 
#define UINT8_C(c) c
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define isascii(c) __isascii (c)
#define MINS_PER_HOUR 60
#define __GNUC__ 11
#define HAVE_DECL_POSIX_FADVISE 1
#define PRIoLEAST16 "o"
#define HAVE_SYS_TYPES_H 1
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define IPPROTO_TCP IPPROTO_TCP
#define HAVE_GCC__ATOMIC_INT32_CAS 1
#define PG_DIAG_SQLSTATE 'C'
#define CLOCK_PROCESS_CPUTIME_ID 2
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ERRCODE_T_R_STATEMENT_COMPLETION_UNKNOWN MAKE_SQLSTATE('4','0','0','0','3')
#define appendStringInfoCharMacro(str,ch) (((str)->len + 1 >= (str)->maxlen) ? appendStringInfoChar(str, ch) : (void)((str)->data[(str)->len] = (ch), (str)->data[++(str)->len] = '\0'))
#define JSONBARRAYOID 3807
#define EXPANDED_POINTER_SIZE (VARHDRSZ_EXTERNAL + sizeof(varatt_expanded))
#define __SAFE_TYPES_H__ 
#define PG_GETARG_TRANSACTIONID(n) DatumGetTransactionId(PG_GETARG_DATUM(n))
#define PF_ISDN 34
#define TYPCATEGORY_UNKNOWN 'X'
#define OPENSSL_API_COMPAT 0x10001000L
#define TSM_HANDLEROID 3310
#define XLogArchiveCommandSet() (XLogArchiveCommand[0] != '\0')
#define PageIsEmpty(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData)
#define POSIX_FADV_WILLNEED 3
#define HAVE_PTHREAD_BARRIER_WAIT 1
#define AF_NFC PF_NFC
#define INDOPTION_DESC 0x0001
#define HAVE_DECL_STRNLEN 1
#define PRIoLEAST32 "o"
#define BlockNumberIsValid(blockNumber) ((bool) ((BlockNumber) (blockNumber) != InvalidBlockNumber))
#define ERRCODE_WARNING_NULL_VALUE_ELIMINATED_IN_SET_FUNCTION MAKE_SQLSTATE('0','1','0','0','3')
#define LOCK_NB 4
#define TRANSAM_H 
#define SCNxLEAST8 "hhx"
#define INT8OID 20
#define __daddr_t_defined 
#define GUC_NO_RESET_ALL 0x0008
#define MSG_CTRUNC MSG_CTRUNC
#define SIZEOF_SIZE_T 8
#define ERRCODE_S_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('2','F','0','0','3')
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define LOCK_H_ 
#define HAVE_LZ4_H 1
#define EAI_MEMORY -10
#define PRIdLEAST16 "d"
#define UINT64CONST(x) (x ##UL)
#define list_make4_int(x1,x2,x3,x4) list_make4_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3), list_make_int_cell(x4))
#define MSG_PROXY MSG_PROXY
#define HSEARCH_H 
#define SO_DETACH_REUSEPORT_BPF 68
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define ACL_SELECT (1<<1)
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define TABLE_INSERT_NO_LOGICAL 0x0008
#define sa_handler __sigaction_handler.sa_handler
#define LONG_MAX __LONG_MAX__
#define MACADDR8ARRAYOID 775
#define IPV6_RECVHOPOPTS 53
#define PG_RETURN_NAME(x) return NameGetDatum(x)
#define STDERR_FILENO 2
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define pg_read_barrier() pg_read_barrier_impl()
#define ItemIdGetFlags(itemId) ((itemId)->lp_flags)
#define JSONPATHOID 4072
#define PRIuMAX __PRI64_PREFIX "u"
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define Anum_pg_attribute_attnum 6
#define __FLT64_MAX_10_EXP__ 308
#define list_make_ptr_cell(v) ((ListCell) {.ptr_value = (v)})
#define HEAP_HOT_UPDATED 0x4000
#define pg_ntoh16(x) pg_bswap16(x)
#define PRIdLEAST32 "d"
#define DLIST_STATIC_INIT(name) {{&(name).head, &(name).head}}
#define PRIoLEAST64 __PRI64_PREFIX "o"
#define __GLIBC_USE_LIB_EXT2 1
#define PG_HAVE_ATOMIC_FETCH_ADD_U64 
#define FunctionCall1(flinfo,arg1) FunctionCall1Coll(flinfo, InvalidOid, arg1)
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define HOST_NAME_MAX 64
#define __sigevent_t_defined 1
#define Anum_pg_attribute_attndims 7
#define ERRCODE_NON_UNIQUE_KEYS_IN_A_JSON_OBJECT MAKE_SQLSTATE('2','2','0','3','7')
#define HAVE_GETRLIMIT 1
#define WTERMSIG(status) __WTERMSIG (status)
#define ERRCODE_UNTERMINATED_C_STRING MAKE_SQLSTATE('2','2','0','2','4')
#define Anum_pg_type_typalign 23
#define AF_SECURITY PF_SECURITY
#define STA_PPSTIME 0x0004
#define __FLT32_HAS_INFINITY__ 1
#define BufferIsLocal(buffer) ((buffer) < 0)
#define LOCK_RW 192
#define EXIT_SUCCESS 0
#define PG_BSWAP_H 
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define UINT64_WIDTH 64
#define TYPTYPE_RANGE 'r'
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define HAVE_STRTOULL 1
#define PRIiFAST16 __PRIPTR_PREFIX "i"
#define SI_QUEUE SI_QUEUE
#define ERRCODE_AMBIGUOUS_ALIAS MAKE_SQLSTATE('4','2','P','0','9')
#define UINTMAX_WIDTH 64
#define JSONARRAYOID 199
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define HeapTupleHeaderSetNatts(tup,natts) ( (tup)->t_infomask2 = ((tup)->t_infomask2 & ~HEAP_NATTS_MASK) | (natts) )
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define VARATT_EXTERNAL_GET_COMPRESS_METHOD(toast_pointer) ((toast_pointer).va_extinfo >> VARLENA_EXTSIZE_BITS)
#define PG_VERSION_16 160000
#define SCM_CREDENTIALS SCM_CREDENTIALS
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define ELF_PRARGSZ (80)
#define expand_function_arguments_compat(a,b,c,d) expand_function_arguments(a, b, c, d)
#define HAVE_FDATASYNC 1
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define PG_CACHE_LINE_SIZE 128
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define snprintf pg_snprintf
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define PRId8 "d"
#define RAND_MAX 2147483647
#define __va_arg_pack() __builtin_va_arg_pack ()
#define PRIiFAST32 __PRIPTR_PREFIX "i"
#define HAVE_READLINK 1
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define _FEATURES_H 1
#define __SI_HAVE_SIGSYS 1
#define _BITS_SIGCONTEXT_H 1
#define GTSVECTORARRAYOID 3644
#define NL_LANGMAX _POSIX2_LINE_MAX
#define pg_ntoh64(x) pg_bswap64(x)
#define SHARED_TUPLESTORE_SINGLE_PASS 0x01
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define RELCACHE_H 
#define CIDROID 650
#define HASH_BLOBS 0x0020
#define __DADDR_T_TYPE __S32_TYPE
#define Anum_pg_class_relforcerowsecurity 24
#define elog(elevel,...) ereport(elevel, errmsg_internal(__VA_ARGS__))
#define XID8OID 5069
#define HAVE_SYS_UIO_H 1
#define SAFE_STR_MIN_LOWERCASE ( 2 )
#define PACKAGE_BUGREPORT "pgsql-bugs@lists.postgresql.org"
#define IPV6_UNICAST_IF 76
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define ERRCODE_RESTRICT_VIOLATION MAKE_SQLSTATE('2','3','0','0','1')
#define MAX_HANDLE_SZ 128
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define REGROLEARRAYOID 4097
#define PG_HAVE_ATOMIC_COMPARE_EXCHANGE_U32 
#define VirtualTransactionIdIsRecoveredPreparedXact(vxid) ((vxid).backendId == InvalidBackendId)
#define TablespaceCreateLock (&MainLWLockArray[19].lock)
#define PG_TYPEARRAYOID 210
#define FALLOC_FL_INSERT_RANGE 0x20
#define SIZE_WIDTH __WORDSIZE
#define PRIiFAST64 __PRI64_PREFIX "i"
#define __FD_SETSIZE 1024
#define MultiXactOffsetSLRULock (&MainLWLockArray[14].lock)
#define h_errno (*__h_errno_location ())
#define HASH_STRINGS 0x0010
#define _XBS5_LP64_OFF64 1
#define DISTRIBUTE_BY_RANGE 'r'
#define lfourth(l) lfirst(list_nth_cell(l, 3))
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define __FLT64_HAS_DENORM__ 1
#define SI_USER SI_USER
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define SCHAR_WIDTH 8
#define DEVNULL "/dev/null"
#define PRIi8 "i"
#define ERRCODE_INVALID_TRANSACTION_STATE MAKE_SQLSTATE('2','5','0','0','0')
#define PG_ENSURE_ERROR_CLEANUP(cleanup_function,arg) do { before_shmem_exit(cleanup_function, arg); PG_TRY()
#define EBADMSG 74
#define XLogRecGetDataLen(decoder) ((decoder)->main_data_len)
#define ROLE_PG_READ_ALL_SETTINGS 3374
#define MakeExpandedObjectReadOnly(d,isnull,typlen) (((isnull) || (typlen) != -1) ? (d) : MakeExpandedObjectReadOnlyInternal(d))
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#define __SVE_FFR_SIZE(vq) __SVE_PREG_SIZE(vq)
#define __LDBL_HAS_DENORM__ 1
#define ItemIdGetOffset(itemId) ((itemId)->lp_off)
#define XLogRecHasBlockImage(decoder,block_id) ((decoder)->blocks[block_id].has_image)
#define SCNiLEAST16 "hi"
#define S_IFSOCK __S_IFSOCK
#define __SOCKADDR_ALLTYPES __SOCKADDR_ONETYPE (sockaddr) __SOCKADDR_ONETYPE (sockaddr_at) __SOCKADDR_ONETYPE (sockaddr_ax25) __SOCKADDR_ONETYPE (sockaddr_dl) __SOCKADDR_ONETYPE (sockaddr_eon) __SOCKADDR_ONETYPE (sockaddr_in) __SOCKADDR_ONETYPE (sockaddr_in6) __SOCKADDR_ONETYPE (sockaddr_inarp) __SOCKADDR_ONETYPE (sockaddr_ipx) __SOCKADDR_ONETYPE (sockaddr_iso) __SOCKADDR_ONETYPE (sockaddr_ns) __SOCKADDR_ONETYPE (sockaddr_un) __SOCKADDR_ONETYPE (sockaddr_x25)
#define AssertPendingSyncs_RelationCache() do {} while (0)
#define LC_TIME_MASK (1 << __LC_TIME)
#define PG_DIAG_INTERNAL_QUERY 'q'
#define LC_ADDRESS __LC_ADDRESS
#define SCNx32 "x"
#define SIGABRT 6
#define intVal(v) (((Value *)(v))->val.ival)
#define ACL_ALL_RIGHTS_COLUMN (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_REFERENCES)
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED CLD_CONTINUED
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define EA_MAGIC 689375833
#define GUC_NOT_WHILE_SEC_REST 0x0400
#define RTSuperStrategyNumber 26
#define POSIX_FADV_NORMAL 0
#define PG_VERSION_CONSTANTS 
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#define ERRCODE_INVALID_TRANSACTION_TERMINATION MAKE_SQLSTATE('2','D','0','0','0')
#define TIMEOID 1083
#define SCNiLEAST32 "i"
#define __dev_t_defined 
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define HeapTupleHeaderSetTypMod(tup,typmod) ( (tup)->t_choice.t_datum.datum_typmod = (typmod) )
#define ClassOidIndexId 2662
#define HAVE_SYS_UN_H 1
#define SO_DONTROUTE 5
#define INETARRAYOID 1041
#define __DBL_MAX_EXP__ 1024
#define ERRCODE_FDW_COLUMN_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','5')
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define PARAM_FLAG_CONST 0x0001
#define S_LOCK_H 
#define HAVE_STRSIGNAL 1
#define __WCHAR_WIDTH__ 32
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define SEGV_ADIDERR SEGV_ADIDERR
#define __SAFE_LIB_H__ 
#define MinCommandIdAttributeNumber (-3)
#define DatumGetInt32(X) ((int32) (X))
#define _BITS_WCHAR_H 1
#define IP_RECVERR 11
#define innerPlanState(node) (((PlanState *)(node))->righttree)
#define ERRCODE_SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED MAKE_SQLSTATE('2','5','0','0','7')
#define BKI_LOOKUP_OPT(catalog) 
#define COMPLETION_TAG_BUFSIZE 64
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define PageXLogRecPtrGet(val) ((uint64) (val).xlogid << 32 | (val).xrecoff)
#define ERRCODE_DUPLICATE_FUNCTION MAKE_SQLSTATE('4','2','7','2','3')
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define isspace_l(c,l) __isspace_l ((c), (l))
#define PRIo8 "o"
#define SCNiLEAST64 __PRI64_PREFIX "i"
#define XLR_BLOCK_ID_DATA_LONG 254
#define ETOOMANYREFS 109
#define TYPCATEGORY_INVALID '\0'
#define ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE MAKE_SQLSTATE('0','3','0','0','0')
#define PG_TRY() do { sigjmp_buf *_save_exception_stack = PG_exception_stack; ErrorContextCallback *_save_context_stack = error_context_stack; sigjmp_buf _local_sigjmp_buf; bool _do_rethrow = false; if (sigsetjmp(_local_sigjmp_buf, 0) == 0) { PG_exception_stack = &_local_sigjmp_buf
#define _POSIX_TZNAME_MAX 6
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define TSTZMULTIRANGEOID 4534
#define _POSIX_SSIZE_MAX 32767
#define __FLT_IS_IEC_60559__ 2
#define SCNdLEAST16 "hd"
#define MCAST_INCLUDE 1
#define _POSIX_RE_DUP_MAX 255
#define SCNdFAST16 __PRIPTR_PREFIX "d"
#define _POSIX_MAX_CANON 255
#define GUC_UNIT_KB 0x1000
#define IPV6_UNICAST_HOPS 16
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EXTRA_MAGIC 0x45585401
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define PF_PHONET 35
#define RTOldAboveStrategyNumber 30
#define __bitwise__ 
#define __USECONDS_T_TYPE __U32_TYPE
#define HAVE_GCC__ATOMIC_INT64_CAS 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define ERRCODE_CANNOT_CONNECT_NOW MAKE_SQLSTATE('5','7','P','0','3')
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define INSTR_TIME_IS_ZERO(t) ((t).tv_nsec == 0 && (t).tv_sec == 0)
#define ENONET 64
#define FPE_FLTOVF FPE_FLTOVF
#define FD_CLOEXEC 1
#define _LINUX_STDDEF_H 
#define IsolationIsSerializable() (XactIsoLevel == XACT_SERIALIZABLE)
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define SCNdFAST32 __PRIPTR_PREFIX "d"
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define AF_AX25 PF_AX25
#define _PC_VDISABLE _PC_VDISABLE
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SI_SIGIO SI_SIGIO
#define SO_COOKIE 57
#define strVal(v) (((Value *)(v))->val.str)
#define Anum_pg_index_indislive 13
#define CURSOR_OPT_GENERIC_PLAN 0x0200
#define _BITS_STDIO2_H 1
#define get_partition_parent_compat(a,b) get_partition_parent(a, b)
#define HEAP_XMAX_IS_LOCKED_ONLY(infomask) (((infomask) & HEAP_XMAX_LOCK_ONLY) || (((infomask) & (HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK)) == HEAP_XMAX_EXCL_LOCK))
#define HEAP_XMAX_IS_MULTI 0x1000
#define _SC_BARRIERS _SC_BARRIERS
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define ACL_EXECUTE_CHR 'X'
#define SVE_SIG_PREGS_SIZE(vq) __SVE_PREGS_SIZE(vq)
#define pairingheap_is_empty(h) ((h)->ph_root == NULL)
#define ERRCODE_INVALID_OBJECT_DEFINITION MAKE_SQLSTATE('4','2','P','1','7')
#define DatumGetTransactionId(X) ((TransactionId) (X))
#define st_atime st_atim.tv_sec
#define PARTITION_STRATEGY_LIST 'l'
#define __stub___compat_uselib 
#define SHAREDTUPLESTORE_H 
#define __INT_FAST8_TYPE__ signed char
#define GUC_H 
#define _POSIX_CPUTIME 0
#define si_stime _sifields._sigchld.si_stime
#define __ARM_ALIGN_MAX_PWR 28
#define _LINUX_TYPES_H 
#define __USE_POSIX 1
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define __DBL_IS_IEC_60559__ 2
#define PRIu8 "u"
#define DTTOIF(dirtype) ((dirtype) << 12)
#define __SIZEOF_WINT_T__ 4
#define PRIxLEAST8 "x"
#define Anum_pg_class_relhasindex 14
#define HeapTupleHeaderXminInvalid(tup) ( ((tup)->t_infomask & (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)) == HEAP_XMIN_INVALID )
#define SCNdFAST64 __PRI64_PREFIX "d"
#define EBUSY 16
#define FIELDNO_NULLABLE_DATUM_ISNULL 1
#define __f32x(x) x ##f32x
#define SOCK_PACKET SOCK_PACKET
#define PG_CRC32C_H 
#define ENOTNAM 118
#define ERRCODE_INSUFFICIENT_PRIVILEGE MAKE_SQLSTATE('4','2','5','0','1')
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define _LINUX_CLOSE_RANGE_H 
#define ERRCODE_QUERY_CANCELED MAKE_SQLSTATE('5','7','0','1','4')
#define __U16_TYPE unsigned short int
#define CLD_EXITED CLD_EXITED
#define RELPERSISTENCE_TEMP 't'
#define WINT_MAX (4294967295u)
#define PQfreeNotify(ptr) PQfreemem(ptr)
#define _BITS_POSIX2_LIM_H 1
#define _POSIX_NAME_MAX 14
#define UINTPTR_MAX (18446744073709551615UL)
#define SORTSUPPORT_H 
#define PRIx8 "x"
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#define ERRCODE_DIAGNOSTICS_EXCEPTION MAKE_SQLSTATE('0','Z','0','0','0')
#define HeapTupleHeaderSetMatch(tup) ( (tup)->t_infomask2 |= HEAP_TUPLE_HAS_MATCH )
#define linitial_oid(l) lfirst_oid(list_nth_cell(l, 0))
#define ItemIdSetUnused(itemId) ( (itemId)->lp_flags = LP_UNUSED, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define HTUP_DETAILS_H 
#define VARDATA_COMPRESSED_GET_COMPRESS_METHOD(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_tcinfo >> VARLENA_EXTSIZE_BITS)
#define PageClearHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags &= ~PD_HAS_FREE_LINES)
#define LC_MONETARY __LC_MONETARY
#define __ASM_GENERIC_POSIX_TYPES_H 
#define PG_RETURN_ARRAYTYPE_P(x) PG_RETURN_POINTER(x)
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define HEAP_XMAX_INVALID 0x0800
#define TransactionIdIsValid(xid) ((xid) != InvalidTransactionId)
#define XLOG_XACT_COMMIT_PREPARED 0x30
#define __FLT_MIN_EXP__ (-125)
#define JULIAN_MINMONTH (11)
#define lsecond_oid(l) lfirst_oid(list_nth_cell(l, 1))
#define TWOPHASE_H 
#define WEXITED 4
#define ERRORMESSAGE_H 
#define F_GETOWN __F_GETOWN
#define IPV6_V6ONLY 26
#define PG_GET_COLLATION() (fcinfo->fncollation)
#define __S_IFREG 0100000
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define REGPROCEDUREOID 2202
#define _POSIX_SYMLINK_MAX 255
#define PIV_LOG_WARNING (1 << 0)
#define AF_PPPOX PF_PPPOX
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define HAVE_UNISTD_H 1
#define PG_GET_OPCLASS_OPTIONS() get_fn_opclass_options(fcinfo->flinfo)
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define IPV6_RECVRTHDR 56
#define alloca(size) __builtin_alloca (size)
#define HeapTupleHeaderSetHotUpdated(tup) ( (tup)->t_infomask2 |= HEAP_HOT_UPDATED )
#define LWLOCK_PADDED_SIZE PG_CACHE_LINE_SIZE
#define STANDBY_H 
#define ERRCODE_INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION MAKE_SQLSTATE('2','2','0','1','G')
#define NL_SETMAX INT_MAX
#define IP_MULTICAST_ALL 49
#define HAVE_SYS_IPC_H 1
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define HAVE_RL_COMPLETION_SUPPRESS_QUOTE 1
#define AllocSizeIsValid(size) ((Size) (size) <= MaxAllocSize)
#define S_UNLOCK(lock) __sync_lock_release(lock)
#define PF_IRDA 23
#define TYPCATEGORY_PSEUDOTYPE 'P'
#define __THROWNL __attribute__ ((__nothrow__))
#define __WINT_WIDTH__ 32
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define ReplicationOriginLock (&MainLWLockArray[40].lock)
#define _DIRENT_HAVE_D_OFF 
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define va_end(v) __builtin_va_end(v)
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define INT_LEAST32_WIDTH 32
#define VARHDRSZ_SHORT offsetof(varattrib_1b, va_data)
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define CHECKPOINT_IMMEDIATE 0x0004
#define _LOCALE_H 1
#define MAXALIGN_DOWN(LEN) TYPEALIGN_DOWN(MAXIMUM_ALIGNOF, (LEN))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long int
#define PG_DIST_PARTITION_H 
#define _NSIG (__SIGRTMAX + 1)
#define REPLICATION_MODEL_2PC 't'
#define ERRCODE_READ_ONLY_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','6')
#define ADJ_TIMECONST 0x0020
#define __ARM_FP16_ARGS 1
#define HAVE_PREAD 1
#define PG_RETURN_BYTEA_P(x) PG_RETURN_POINTER(x)
#define ACL_MODECHG_DEL 2
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define ROLE_PG_STAT_SCAN_TABLES 3377
#define ERRCODE_CHARACTER_NOT_IN_REPERTOIRE MAKE_SQLSTATE('2','2','0','2','1')
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define IPV6_RECVTCLASS 66
#define ERRCODE_PROTOCOL_VIOLATION MAKE_SQLSTATE('0','8','P','0','1')
#define __INT_LEAST32_MAX__ 0x7fffffff
#define O_RSYNC O_SYNC
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define _SC_STREAMS _SC_STREAMS
#define WINT_MIN (0u)
#define TSQUERYARRAYOID 3645
#define PageSetAllVisible(page) (((PageHeader) (page))->pd_flags |= PD_ALL_VISIBLE)
#define VARATT_EXTERNAL_GET_EXTSIZE(toast_pointer) ((toast_pointer).va_extinfo & VARLENA_EXTSIZE_MASK)
#define EXPANDEDDATUM_H 
#define __key_t_defined 
#define SCNxFAST32 __PRIPTR_PREFIX "x"
#define USE_DSM_MMAP 
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define ERRCODE_UNDEFINED_PARAMETER MAKE_SQLSTATE('4','2','P','0','2')
#define __unix__ 1
#define IPV6_MTU 24
#define SO_RCVLOWAT 18
#define TABLE_H 
#define IPV6_RECVDSTOPTS 58
#define SIG_ATOMIC_WIDTH 32
#define CLASS_TUPLE_SIZE (offsetof(FormData_pg_class,relminmxid) + sizeof(TransactionId))
#define IPPROTO_MTP IPPROTO_MTP
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define CLOCK_REALTIME_COARSE 5
#define SK_SEARCHARRAY 0x0020
#define SECURITY_RESTRICTED_OPERATION 0x0002
#define _XOPEN_LEGACY 1
#define ERRCODE_SQL_JSON_MEMBER_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','A')
#define __HAVE_DISTINCT_FLOAT64 0
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x) != 0, 0)
#define DatumGetTimestampTz(X) ((TimestampTz) DatumGetInt64(X))
#define __ASM_GENERIC_SOCKET_H 
#define BTLessStrategyNumber 1
#define __SVE_ZREG_OFFSET(vq,n) (__SVE_ZREGS_OFFSET + __SVE_ZREG_SIZE(vq) * (n))
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define InvalidStrategy ((StrategyNumber) 0)
#define FIELDNO_HEAPTUPLEHEADERDATA_BITS 5
#define __FLT_EVAL_METHOD_C99__ 0
#define RelCacheInitLock (&MainLWLockArray[16].lock)
#define Anum_pg_type_typreceive 18
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __USE_UNIX98 1
#define st_ctime st_ctim.tv_sec
#define DECLARE_TOAST(name,toastoid,indexoid) extern int no_such_variable
#define NUM_PREDICATELOCK_PARTITIONS (1 << LOG2_NUM_PREDICATELOCK_PARTITIONS)
#define WINT_WIDTH 32
#define ERRCODE_CANT_CHANGE_RUNTIME_PARAM MAKE_SQLSTATE('5','5','P','0','2')
#define IPV6_DSTOPTS 59
#define CLOCK_REALTIME_ALARM 8
#define SpinLockAcquire(lock) S_LOCK(lock)
#define PG_END_TRY() } if (_do_rethrow) PG_RE_THROW(); PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack; } while (0)
#define TUPTABLE_H 
#define DatumGetVarCharPSlice(X,m,n) ((VarChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define TZDISP_LIMIT ((MAX_TZDISP_HOUR + 1) * SECS_PER_HOUR)
#define F_SEAL_SEAL 0x0001
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define S_IFREG __S_IFREG
#define InvalidTransactionId ((TransactionId) 0)
#define STA_NANO 0x2000
#define ItemPointerGetOffsetNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetOffsetNumberNoCheck(pointer) )
#define ACLITEM_ALL_GOPTION_BITS ((AclMode) 0xFFFF << 16)
#define ESCAPE_STRING_SYNTAX 'E'
#define __FLT64_MIN_EXP__ (-1021)
#define ERRCODE_SQL_JSON_SCALAR_REQUIRED MAKE_SQLSTATE('2','2','0','3','F')
#define IPV6_RECVERR 25
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define PF_MAX 46
#define PROCSIGNAL_H 
#define HAVE_INDEXOPTINFO_TYPEDEF 1
#define AssertState(condition) ((void)true)
#define innerPlan(node) (((Plan *)(node))->righttree)
#define SIGNAL_ARGS int postgres_signal_arg
#define CHAR_MAX UCHAR_MAX
#define SHMEM_H 
#define ScanDirectionIsNoMovement(direction) ((bool) ((direction) == NoMovementScanDirection))
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define PG_GETARG_ACL_P_COPY(n) DatumGetAclPCopy(PG_GETARG_DATUM(n))
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define FPE_INTDIV FPE_INTDIV
#define SEEK_DATA 3
#define IP_RECVTOS 13
#define PROCLOCK_LOCKMETHOD(proclock) LOCK_LOCKMETHOD(*((proclock).tag.myLock))
#define FRAMEOPTION_DEFAULTS (FRAMEOPTION_RANGE | FRAMEOPTION_START_UNBOUNDED_PRECEDING | FRAMEOPTION_END_CURRENT_ROW)
#define SO_PEERSEC 31
#define SOL_DECNET 261
#define ERRCODE_UNDEFINED_FUNCTION MAKE_SQLSTATE('4','2','8','8','3')
#define PRIxPTR __PRIPTR_PREFIX "x"
#define RESPONSE_NOT_OKAY 2
#define PG_RETURN_BPCHAR_P(x) PG_RETURN_POINTER(x)
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define SLAB_DEFAULT_BLOCK_SIZE (8 * 1024)
#define __USE_POSIX199309 1
#define __FDS_BITS(set) ((set)->fds_bits)
#define SHARD_NAME_SEPARATOR '_'
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define ERRCODE_L_E_INVALID_SPECIFICATION MAKE_SQLSTATE('0','F','0','0','1')
#define XLogRecPtrIsInvalid(r) ((r) == InvalidXLogRecPtr)
#define TimestampGetDatum(X) Int64GetDatum(X)
#define LONG_BIT 64
#define __FLT16_MIN_10_EXP__ (-4)
#define IP_TOS 1
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define DatumGetBpCharP(X) ((BpChar *) PG_DETOAST_DATUM(X))
#define PG_NARGS() (fcinfo->nargs)
#define INNER_VAR 65000
#define TRAP_HWBKPT TRAP_HWBKPT
#define JSONOID 114
#define EXECDESC_H 
#define HeapTupleHeaderGetRawXmax(tup) ( (tup)->t_choice.t_heap.t_xmax )
#define EvalPlanQualSetSlot(epqstate,slot) ((epqstate)->origslot = (slot))
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define WORKER_DEFAULT_CLUSTER "default"
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define EIDRM 43
#define PF_ROSE 11
#define ECOMM 70
#define EXEC_FLAG_SKIP_TRIGGERS 0x0010
#define HEAP_UPDATED 0x2000
#define _PC_NAME_MAX _PC_NAME_MAX
#define __BITS_PER_LONG 64
#define BOOLOID 16
#define InvalidAttrNumber 0
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define VARATT_IS_EXTERNAL_NON_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && !VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SET_VARTAG_1B_E(PTR,tag) (((varattrib_1b_e *) (PTR))->va_header = 0x01, ((varattrib_1b_e *) (PTR))->va_tag = (tag))
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define _PC_MAX_CANON _PC_MAX_CANON
#define PF_INET6 10
#define LMGR_H 
#define VARATT_CAN_MAKE_SHORT(PTR) (VARATT_IS_4B_U(PTR) && (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT) <= VARATT_SHORT_MAX)
#define ADJ_NANO 0x2000
#define __USE_POSIX2 1
#define IP_TRANSPARENT 19
#define XLogRecGetData(decoder) ((decoder)->main_data)
#define RelationSetTargetBlock(relation,targblock) do { RelationOpenSmgr(relation); (relation)->rd_smgr->smgr_targblock = (targblock); } while (0)
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ERRCODE_INTERNAL_ERROR MAKE_SQLSTATE('X','X','0','0','0')
#define FRAMEOPTION_EXCLUDE_GROUP 0x10000
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define RelationGetParallelWorkers(relation,defaultpw) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->parallel_workers : (defaultpw))
#define _POSIX_NGROUPS_MAX 8
#define ADJ_STATUS 0x0010
#define _POSIX_V7_ILP32_OFF32 -1
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define CitusMakeNode(_type_) ((_type_ *) CitusNewNode(sizeof(_type_),T_ ##_type_))
#define RelationRelationId 1259
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define NUMRANGEOID 3906
#define __INT_LEAST32_WIDTH__ 32
#define ERRCODE_INVALID_ROW_COUNT_IN_LIMIT_CLAUSE MAKE_SQLSTATE('2','2','0','1','W')
#define SHMEM_INDEX_SIZE (64)
#define __siginfo_t_defined 1
#define DECLARE_UNIQUE_INDEX_PKEY(name,oid,decl) extern int no_such_variable
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define IPV6_AUTOFLOWLABEL 70
#define SCNiMAX __PRI64_PREFIX "i"
#define PF_APPLETALK 5
#define IPV6_2292PKTINFO 2
#define HAVE_EXECINFO_H 1
#define __FLT_MANT_DIG__ 24
#define OIDVECTOROID 30
#define AF_IUCV PF_IUCV
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define TransactionIdGetDatum(X) ((Datum) (X))
#define __VERSION__ "11.3.0"
#define S_IFCHR __S_IFCHR
#define SCNoLEAST8 "hho"
#define __IOV_MAX 1024
#define PRIuPTR __PRIPTR_PREFIX "u"
#define TXID_SNAPSHOTOID 2970
#define IP_PKTINFO 8
#define __UINT64_C(c) c ## UL
#define ACL_MODECHG_EQL 3
#define INIT_CRC32C(crc) ((crc) = 0xFFFFFFFF)
#define CIRCLEARRAYOID 719
#define MONTHS_PER_YEAR 12
#define CIRCLEOID 718
#define ACL_CONNECT (1<<11)
#define INT64CONST(x) (x ##L)
#define USE_XSD_DATES 4
#define _SYS_CDEFS_H 1
#define ILL_ILLTRP ILL_ILLTRP
#define INDEX_MAX_KEYS 32
#define isprint(c) __isctype((c), _ISprint)
#define Anum_pg_index_indisprimary 6
#define TIMESTAMP_H 
#define SET_VARSIZE_4B_C(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2) | 0x02)
#define RENAME_WHITEOUT (1 << 2)
#define ERRCODE_INVALID_XML_PROCESSING_INSTRUCTION MAKE_SQLSTATE('2','2','0','0','T')
#define MaxTupleAttributeNumber 1664
#define EBFONT 59
#define HAVE_SYS_SEM_H 1
#define LSN_FORMAT_ARGS(lsn) (AssertVariableIsOfTypeMacro((lsn), XLogRecPtr), (uint32) ((lsn) >> 32)), ((uint32) (lsn))
#define FIELDNO_AGGSTATE_CURRENT_SET 20
#define PG_PORT_H 
#define _POSIX_VERSION 200809L
#define _STDC_PREDEF_H 1
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define ESLEMIN ( 402 )
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define TEXTARRAYOID 1009
#define PRIXLEAST32 "X"
#define CLOG_ZEROPAGE 0x00
#define INT_FAST8_WIDTH 8
#define __INT_WCHAR_T_H 
#define PGDLLEXPORT 
#define DeferredError(code,message,detail,hint) DeferredErrorInternal(code, message, detail, hint, __FILE__, __LINE__, PG_FUNCNAME_MACRO)
#define TRANSACTION_STATUS_IN_PROGRESS 0x00
#define SET_VARSIZE_COMPRESSED(PTR,len) SET_VARSIZE_4B_C(PTR, len)
#define LOCALLOCK_LOCKMETHOD(llock) ((llock).tag.lock.locktag_lockmethodid)
#define DEFAULT_SPINS_PER_DELAY 100
#define PARTITION_STRATEGY_HASH 'h'
#define copyObject(obj) ((typeof(obj)) copyObjectImpl(obj))
#define HAVE_GCC__SYNC_INT32_CAS 1
#define SOCK_DGRAM SOCK_DGRAM
#define _____fpos_t_defined 1
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define MINIMAL_TUPLE_PADDING ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) % MAXIMUM_ALIGNOF)
#define CommitTsSLRULock (&MainLWLockArray[38].lock)
#define DN_RENAME 0x00000010
#define __bitwise __bitwise__
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define ERRCODE_INDEX_CORRUPTED MAKE_SQLSTATE('X','X','0','0','2')
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define __ARM_FEATURE_FMA 1
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define O_RDWR 02
#define ERRCODE_INVALID_ESCAPE_SEQUENCE MAKE_SQLSTATE('2','2','0','2','5')
#define _SYS_SOCKET_H 1
#define AIO_PRIO_DELTA_MAX 20
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _T_PTRDIFF_ 
#define MSG_CONFIRM MSG_CONFIRM
#define PF_FILE PF_LOCAL
#define HeapTupleHeaderClearHeapOnly(tup) ( (tup)->t_infomask2 &= ~HEAP_ONLY_TUPLE )
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define ENOTDIR 20
#define PRIXLEAST64 __PRI64_PREFIX "X"
#define Anum_pg_attribute_attcollation 22
#define __INT_FAST16_WIDTH__ 64
#define BACKUP_LABEL_OLD "backup_label.old"
#define CURSOR_OPT_BINARY 0x0001
#define FIELDNO_EXPRCONTEXT_DOMAINDATUM 12
#define SIGPOLL 29
#define SOL_NFC 280
#define PARTDEFS_H 
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define TEXTOID 25
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define ERRCODE_NULL_VALUE_NO_INDICATOR_PARAMETER MAKE_SQLSTATE('2','2','0','0','2')
#define INTERRUPTS_PENDING_CONDITION() (unlikely(InterruptPending))
#define BOXOID 603
#define XACT_COMPLETION_UPDATE_RELCACHE_FILE (1U << 30)
#define DATEARRAYOID 1182
#define ERRCODE_INVALID_COLUMN_REFERENCE MAKE_SQLSTATE('4','2','P','1','0')
#define ItemPointerSetBlockNumber(pointer,blockNumber) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber) )
#define VARSIZE_EXTERNAL(PTR) (VARHDRSZ_EXTERNAL + VARTAG_SIZE(VARTAG_EXTERNAL(PTR)))
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define XLR_CHECK_CONSISTENCY 0x02
#define __FLT32_MANT_DIG__ 24
#define REPLICATION_MODEL_INVALID 'i'
#define RTNotEqualStrategyNumber 19
#define ACL_ALL_RIGHTS_TYPE (ACL_USAGE)
#define SVE_VQ_MAX __SVE_VQ_MAX
#define INTALIGN(LEN) TYPEALIGN(ALIGNOF_INT, (LEN))
#define isupper_l(c,l) __isupper_l ((c), (l))
#define ERRCODE_INDETERMINATE_COLLATION MAKE_SQLSTATE('4','2','P','2','2')
#define SIGINT 2
#define stats_compat(a,b,c,d,e) stats(a, b, c, d, e)
#define planner_rt_fetch(rti,root) ((root)->simple_rte_array ? (root)->simple_rte_array[rti] : rt_fetch(rti, (root)->parse->rtable))
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define ACL_EXECUTE (1<<7)
#define MovedPartitionsOffsetNumber 0xfffd
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define __S_IFDIR 0040000
#define USE_POSIX_FADVISE 
#define RTBelowStrategyNumber 10
#define __SIZE_T__ 
#define Anum_pg_publication_pubtruncate 8
#define __stub_gtty 
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define PARSE_NODE_H 
#define si_value _sifields._rt.si_sigval
#define XID8ARRAYOID 271
#define XLogArchivingActive() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode > ARCHIVE_MODE_OFF)
#define EFAULT 14
#define IP_PASSSEC 18
#define IPPORT_RESERVED 1024
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define si_utime _sifields._sigchld.si_utime
#define PG_GETARG_UINT16(n) DatumGetUInt16(PG_GETARG_DATUM(n))
#define ItemIdGetLength(itemId) ((itemId)->lp_len)
#define ADJ_SETOFFSET 0x0100
#define MSG_BATCH MSG_BATCH
#define RELPERSISTENCE_PERMANENT 'p'
#define LC_PAPER __LC_PAPER
#define _POSIX_QLIMIT 1
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define AI_ALL 0x0010
#define Anum_pg_class_relminmxid 30
#define GUC_UNIT_MS 0x10000
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define FFSYNC O_FSYNC
#define PG_UINT64_MAX UINT64CONST(0xFFFFFFFFFFFFFFFF)
#define pg_bswap64(x) __builtin_bswap64(x)
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define RTOverLeftStrategyNumber 2
#define __wur __attribute_warn_unused_result__
#define SIGHUP 1
#define __FLT16_DIG__ 3
#define PageGetContents(page) ((char *) (page) + MAXALIGN(SizeOfPageHeaderData))
#define PG_GETARG_UINT32(n) DatumGetUInt32(PG_GETARG_DATUM(n))
#define ELOOP 40
#define SET_LOCKTAG_ADVISORY(locktag,id1,id2,id3,id4) ((locktag).locktag_field1 = (id1), (locktag).locktag_field2 = (id2), (locktag).locktag_field3 = (id3), (locktag).locktag_field4 = (id4), (locktag).locktag_type = LOCKTAG_ADVISORY, (locktag).locktag_lockmethodid = USER_LOCKMETHOD)
#define EXTNODENAME_MAX_LEN 64
#define HEAP_LOCKED_UPGRADED(infomask) ( ((infomask) & HEAP_XMAX_IS_MULTI) != 0 && ((infomask) & HEAP_XMAX_LOCK_ONLY) != 0 && (((infomask) & (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)) == 0) )
#define TIMER_ABSTIME 1
#define Anum_pg_attribute_atttypmod 9
#define SYNC_METHOD_FSYNC_WRITETHROUGH 3
#define HeapTupleClearHotUpdated(tuple) HeapTupleHeaderClearHotUpdated((tuple)->t_data)
#define ROLE_PG_READ_SERVER_FILES 4569
#define WL_SOCKET_MASK (WL_SOCKET_READABLE | WL_SOCKET_WRITEABLE | WL_SOCKET_CONNECTED)
#define IS_SIMPLE_REL(rel) ((rel)->reloptkind == RELOPT_BASEREL || (rel)->reloptkind == RELOPT_OTHER_MEMBER_REL)
#define __FLT128_HAS_DENORM__ 1
#define VARATT_IS_EXTERNAL_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define F_SETFL 4
#define SIG_UNBLOCK 1
#define _POSIX_RTSIG_MAX 8
#define RTRightStrategyNumber 5
#define __off64_t_defined 
#define ERRCODE_INVALID_ROLE_SPECIFICATION MAKE_SQLSTATE('0','P','0','0','0')
#define __F_GETSIG 11
#define PageSetHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags |= PD_HAS_FREE_LINES)
#define PG_ATTRIBUTEARRAYOID 270
#define IN_CLASSB_MAX 65536
#define __ORDER_PDP_ENDIAN__ 3412
#define GUC_DISALLOW_IN_FILE 0x0040
#define __PDP_ENDIAN 3412
#define DT_NOBEGIN PG_INT64_MIN
#define _ISOC95_SOURCE 1
#define FunctionCall2(flinfo,arg1,arg2) FunctionCall2Coll(flinfo, InvalidOid, arg1, arg2)
#define FunctionCall3(flinfo,arg1,arg2,arg3) FunctionCall3Coll(flinfo, InvalidOid, arg1, arg2, arg3)
#define FullTransactionIdEquals(a,b) ((a).value == (b).value)
#define FunctionCall6(flinfo,arg1,arg2,arg3,arg4,arg5,arg6) FunctionCall6Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define FunctionCall7(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7) FunctionCall7Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define FunctionCall8(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) FunctionCall8Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define FunctionCall9(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) FunctionCall9Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define EL2HLT 51
#define __ARM_64BIT_STATE 1
#define REPLICATION_MODEL_COORDINATOR 'c'
#define DT_BLK DT_BLK
#define SVE_VQ_MIN __SVE_VQ_MIN
#define DEFAULT_SYNC_METHOD PLATFORM_DEFAULT_SYNC_METHOD
#define MAXPGPATH 1024
#define GetPerTupleExprContext(estate) ((estate)->es_per_tuple_exprcontext ? (estate)->es_per_tuple_exprcontext : MakePerTupleExprContext(estate))
#define __socklen_t_defined 
#define s6_addr __in6_u.__u6_addr8
#define Anum_pg_authid_rolcanlogin 7
#define CLOCK_MONOTONIC_COARSE 6
#define PF_ROUTE PF_NETLINK
#define PQsetdb(M_PGHOST,M_PGPORT,M_PGOPT,M_PGTTY,M_DBNAME) PQsetdbLogin(M_PGHOST, M_PGPORT, M_PGOPT, M_PGTTY, M_DBNAME, NULL, NULL)
#define att_align_nominal(cur_offset,attalign) ( ((attalign) == TYPALIGN_INT) ? INTALIGN(cur_offset) : (((attalign) == TYPALIGN_CHAR) ? (uintptr_t) (cur_offset) : (((attalign) == TYPALIGN_DOUBLE) ? DOUBLEALIGN(cur_offset) : ( AssertMacro((attalign) == TYPALIGN_SHORT), SHORTALIGN(cur_offset) ))) )
#define __have_pthread_attr_t 1
#define PageGetSpecialSize(page) ((uint16) (PageGetPageSize(page) - ((PageHeader)(page))->pd_special))
#define VARSIZE_ANY_EXHDR(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR)-VARHDRSZ_EXTERNAL : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR)-VARHDRSZ_SHORT : VARSIZE_4B(PTR)-VARHDRSZ))
#define SCNi8 "hhi"
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define _XOPEN_VERSION 700
#define ILL_COPROC ILL_COPROC
#define IPV6_HOPLIMIT 52
#define ERRCODE_SQL_JSON_NUMBER_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','B')
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define __INT_FAST8_MAX__ 0x7f
#define PG_GETARG_ACL_P(n) DatumGetAclP(PG_GETARG_DATUM(n))
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define Anum_pg_attribute_attidentity 17
#define WSTOPSIG(status) __WSTOPSIG (status)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define PRIuFAST8 "u"
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define _STRUCT_TIMESPEC 1
#define IP_MULTICAST_TTL 33
#define IPPROTO_UDP IPPROTO_UDP
#define ESLEMAX ( 403 )
#define STDC_HEADERS 1
#define Int16GetDatum(X) ((Datum) (X))
#define ERRCODE_INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','3')
#define TYPTYPE_PSEUDO 'p'
#define GENBKI_H 
#define SS_ONSTACK SS_ONSTACK
#define PG_DETOAST_DATUM_COPY(datum) pg_detoast_datum_copy((struct varlena *) DatumGetPointer(datum))
#define RWH_WRITE_LIFE_MEDIUM 3
#define Anum_pg_class_relreplident 26
#define IndexTupleHasNulls(itup) ((((IndexTuple) (itup))->t_info & INDEX_NULL_MASK))
#define __need___va_list 
#define CitusIsA(nodeptr,_type_) (CitusNodeTag(nodeptr) == T_ ##_type_)
#define F_SETLK 6
#define NUM_LOCK_PARTITIONS (1 << LOG2_NUM_LOCK_PARTITIONS)
#define _SC_PIPE _SC_PIPE
#define UINT16_WIDTH 16
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define __INT16_MAX__ 0x7fff
#define EKEYREJECTED 129
#define _BSD_SIZE_T_ 
#define HAVE_GETADDRINFO 1
#define F_SEAL_SHRINK 0x0002
#define __SIZE_TYPE__ long unsigned int
#define VARATT_IS_1B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x01)
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define AF_KEY PF_KEY
#define ERRCODE_IN_FAILED_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','2')
#define SOL_SOCKET 1
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define SerialSLRULock (&MainLWLockArray[31].lock)
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define FPE_CONDTRAP FPE_CONDTRAP
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define XidFromFullTransactionId(x) ((uint32) (x).value)
#define __FLT32_MIN_EXP__ (-125)
#define AF_INET PF_INET
#define Anum_pg_index_indrelid 2
#define FLOAT4_FITS_IN_INT16(num) ((num) >= (float4) PG_INT16_MIN && (num) < -((float4) PG_INT16_MIN))
#define BTGreaterStrategyNumber 5
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define HeapTupleHeaderIsHeapOnly(tup) ( ((tup)->t_infomask2 & HEAP_ONLY_TUPLE) != 0 )
#define SOL_NETBEUI 267
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define LC_NUMERIC __LC_NUMERIC
#define __HAVE_DISTINCT_FLOAT128 0
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define NOTICE 18
#define CLOCK_THREAD_CPUTIME_ID 3
#define IPV6_PMTUDISC_DO 2
#define IPV6_PKTINFO 50
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define VARATT_IS_4B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x00)
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define OidIsValid(objectId) ((bool) ((objectId) != InvalidOid))
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define __F_GETOWN_EX 16
#define FLOAT4_FITS_IN_INT32(num) ((num) >= (float4) PG_INT32_MIN && (num) < -((float4) PG_INT32_MIN))
#define __UINT32_TYPE__ unsigned int
#define PG_MAJORVERSION "14"
#define RelFileNodeBackendEquals(node1,node2) ((node1).node.relNode == (node2).node.relNode && (node1).node.dbNode == (node2).node.dbNode && (node1).backend == (node2).backend && (node1).node.spcNode == (node2).node.spcNode)
#define SIOCGSTAMP_OLD 0x8906
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define Anum_pg_class_relnamespace 3
#define INDEXING_H 
#define REPLICA_IDENTITY_FULL 'f'
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define TEXTDOMAIN NULL
#define SVE_SIG_PREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_PREG_OFFSET(vq, n))
#define DatumGetInt16(X) ((int16) (X))
#define OUTER_VAR 65001
#define ERRCODE_FDW_INVALID_OPTION_INDEX MAKE_SQLSTATE('H','V','0','0','C')
#define dlist_reverse_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->prev ? (iter).end->prev : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->prev)
#define ACL_SELECT_CHR 'r'
#define INT4MULTIRANGEOID 4451
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define _SYS_TYPES_H 1
#define O_NOATIME __O_NOATIME
#define SO_RXQ_OVFL 40
#define AI_V4MAPPED 0x0008
#define MinSizeOfXactSubxacts offsetof(xl_xact_subxacts, subxacts)
#define PRIdLEAST8 "d"
#define SOL_IRDA 266
#define MAXDIM 6
#define SAFE_STR_MIN_SPECIALS ( 1 )
#define __ARM_ARCH_PROFILE 65
#define INDEX_AM_RESERVED_BIT 0x2000
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define HeapTupleHeaderGetNatts(tup) ((tup)->t_infomask2 & HEAP_NATTS_MASK)
#define INTPTR_MAX (9223372036854775807L)
#define __UINTMAX_C(c) c ## UL
#define REGTYPEOID 2206
#define RelFileNodeBackendIsTemp(rnode) ((rnode).backend != InvalidBackendId)
#define USE_REPL_SNPRINTF 1
#define SO_ERROR 4
#define XLR_SPECIAL_REL_UPDATE 0x01
#define Anum_pg_class_relacl 31
#define _POSIX_C_SOURCE 200809L
#define FLOAT4_FITS_IN_INT64(num) ((num) >= (float4) PG_INT64_MIN && (num) < -((float4) PG_INT64_MIN))
#define IP_MULTICAST_IF 32
#define VirtualTransactionIdIsValid(vxid) (LocalTransactionIdIsValid((vxid).localTransactionId))
#define IP_DROP_MEMBERSHIP 36
#define InvalidOffsetNumber ((OffsetNumber) 0)
#define BackgroundWorkerLock (&MainLWLockArray[33].lock)
#define PG_GETARG_VARCHAR_PP(n) DatumGetVarCharPP(PG_GETARG_DATUM(n))
#define SELECT_TRUE_QUERY "SELECT TRUE FROM %s LIMIT 1"
#define QUERY_SEND_FAILED 1
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_LEAVE_GROUP 21
#define INT64_MODIFIER "l"
#define SCNxLEAST32 "x"
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define ERRCODE_INVALID_CURSOR_STATE MAKE_SQLSTATE('2','4','0','0','0')
#define ENAVAIL 119
#define vprintf pg_vprintf
#define TTS_FLAG_SLOW (1 << 3)
#define SO_SNDBUFFORCE 32
#define Natts_pg_dist_partition 6
#define LATCH_H 
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define __LDBL_REDIR(name,proto) name proto
#define HAVE_DECL_STRTOULL 1
#define __LDBL_MAX_10_EXP__ 4932
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define OffsetToPointer(base,offset) ((void *)((char *) base + offset))
#define SIGCONT 18
#define XACT_COMPLETION_APPLY_FEEDBACK (1U << 29)
#define ACL_ALL_RIGHTS_FUNCTION (ACL_EXECUTE)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define PRIu16 "u"
#define lthird_node(type,l) castNode(type, lthird(l))
#define __blksize_t_defined 
#define PG_HAVE_ATOMIC_ADD_FETCH_U64 
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define _PATH_SERVICES "/etc/services"
#define LIBPQ_HAS_PIPELINING 1
#define F_SETSIG __F_SETSIG
#define _POSIX2_BC_DIM_MAX 2048
#define SOL_XDP 283
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define HAVE_UNSETENV 1
#define _LFS64_LARGEFILE 1
#define HAVE_TERMIOS_H 1
#define PF_NETBEUI 13
#define SHAREDFILESET_H 
#define CURSOR_OPT_FAST_PLAN 0x0100
#define TTS_SHOULDFREE(slot) (((slot)->tts_flags & TTS_FLAG_SHOULDFREE) != 0)
#define __WCHAR_MAX __WCHAR_MAX__
#define __GLIBC_USE_ISOC2X 1
#define CONDITION_VARIABLE_H 
#define FRAMEOPTION_EXCLUDE_TIES 0x20000
#define CITUS_TUPLESTORE_H 
#define _LFS64_ASYNCHRONOUS_IO 1
#define XLogRecGetPrev(decoder) ((decoder)->decoded_record->xl_prev)
#define _ANSI_STDDEF_H 
#define SizeOfXLogRecordBlockImageHeader (offsetof(XLogRecordBlockImageHeader, bimg_info) + sizeof(uint8))
#define PRIu32 "u"
#define ERRCODE_TOO_MANY_CONNECTIONS MAKE_SQLSTATE('5','3','3','0','0')
#define IP_PMTUDISC_WANT 1
#define IP_XFRM_POLICY 17
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define FUNC_MAX_ARGS 100
#define HeapTupleHeaderHasMatch(tup) ( ((tup)->t_infomask2 & HEAP_TUPLE_HAS_MATCH) != 0 )
#define __iovec_defined 1
#define FALLOC_FL_KEEP_SIZE 0x01
#define InvalidRelation ((Relation) NULL)
#define TTS_FLAG_EMPTY (1 << 1)
#define ERRCODE_NOT_NULL_VIOLATION MAKE_SQLSTATE('2','3','5','0','2')
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define ObjectIdGetDatum(X) ((Datum) (X))
#define IN_CLASSA_MAX 128
#define LOCK_WRITE 128
#define STATUS_ERROR (-1)
#define SizeForFunctionCallInfo(nargs) (offsetof(FunctionCallInfoBaseData, args) + sizeof(NullableDatum) * (nargs))
#define RelationOpenSmgr(relation) do { if ((relation)->rd_smgr == NULL) smgrsetowner(&((relation)->rd_smgr), smgropen((relation)->rd_node, (relation)->rd_backend)); } while (0)
#define VARHDRSZ_EXTERNAL offsetof(varattrib_1b_e, va_data)
#define NAMEDATALEN 64
#define _XOPEN_SOURCE_EXTENDED 1
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define __SVE_ZREG_SIZE(vq) ((__u32)(vq) * __SVE_VQ_BYTES)
#define ESR_MAGIC 0x45535201
#define IPV6_RECVPATHMTU 60
#define Assert(condition) ((void)true)
#define INT4ARRAYOID 1007
#define SO_DETACH_FILTER 27
#define NoLock 0
#define SCNoMAX __PRI64_PREFIX "o"
#define EAI_AGAIN -3
#define TABLE_INSERT_FROZEN 0x0004
#define O_SYNC 04010000
#define AF_MPLS PF_MPLS
#define INT8_C(c) c
#define PF_IB 27
#define DirectFunctionCall5(func,arg1,arg2,arg3,arg4,arg5) DirectFunctionCall5Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define ENOMEDIUM 123
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define PRIu64 __PRI64_PREFIX "u"
#define LONGALIGN(LEN) TYPEALIGN(ALIGNOF_LONG, (LEN))
#define S_IFDIR __S_IFDIR
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define PRS2_NEW_VARNO 2
#define Anum_pg_class_relhasrules 20
#define __UWORD_TYPE unsigned long int
#define TRAP_BRKPT TRAP_BRKPT
#define F_OFD_SETLK 37
#define HAVE_RL_RESET_SCREEN_SIZE 1
#define _POSIX2_BC_SCALE_MAX 99
#define TRAP_UNK TRAP_UNK
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define ResetTupleHashIterator(htable,iter) InitTupleHashIterator(htable, iter)
#define Anum_pg_class_relowner 6
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define __FLT64_IS_IEC_60559__ 2
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define __AARCH64EL__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define SAFE_STR_MIN_NUMBERS ( 1 )
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define forboth_int_oid(var1,l1,var2,l2) for (ListCell *(var1 ## CellDoNotUse) = list_head(l1), *(var2 ## CellDoNotUse) = list_head(l2); (var1 ## CellDoNotUse) != NULL && (var2 ## CellDoNotUse) != NULL && (((var1) = lfirst_int(var1 ## CellDoNotUse)) || true) && (((var2) = lfirst_oid(var2 ## CellDoNotUse)) || true); var1 ## CellDoNotUse = lnext(l1, var1 ## CellDoNotUse), var2 ## CellDoNotUse = lnext(l2, var2 ## CellDoNotUse) )
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define pairingheap_const_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, const pairingheap_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, pairingheap_node), ((const type *) ((const char *) (ptr) - offsetof(type, membername))))
#define STA_FLL 0x0008
#define MinTransactionIdAttributeNumber (-2)
#define SQL_STR_DOUBLE(ch,escape_backslash) ((ch) == '\'' || ((ch) == '\\' && (escape_backslash)))
#define PRIxLEAST16 "x"
#define ERRCODE_FDW_INVALID_HANDLE MAKE_SQLSTATE('H','V','0','0','B')
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define LINEOID 628
#define __timer_t_defined 1
#define pg_memory_barrier_impl() __atomic_thread_fence(__ATOMIC_SEQ_CST)
#define HAVE_STRUCT_TM_TM_ZONE 1
#define __WCLONE 0x80000000
#define PG_GETARG_OID(n) DatumGetObjectId(PG_GETARG_DATUM(n))
#define PQ_QUERY_PARAM_MAX_LIMIT 65535
#define TYPCATEGORY_ARRAY 'A'
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define SET_LOCKTAG_VIRTUALTRANSACTION(locktag,vxid) ((locktag).locktag_field1 = (vxid).backendId, (locktag).locktag_field2 = (vxid).localTransactionId, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_VIRTUALTRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define PgAuthidToastIndex 4176
#define TYPCATEGORY_ENUM 'E'
#define DELAY_CHKPT_COMPLETE (1<<1)
#define XLOG_XACT_OPMASK 0x70
#define ERRCODE_INVALID_SCHEMA_DEFINITION MAKE_SQLSTATE('4','2','P','1','5')
#define PRIxLEAST32 "x"
#define SNAPSHOT_H 
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define ItemPointerGetOffsetNumberNoCheck(pointer) ( (pointer)->ip_posid )
#define AssertMacro(condition) ((void)true)
#define EROFS 30
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define HEAP_MOVED_OFF 0x4000
#define AttributeNumberIsValid(attributeNumber) ((bool) ((attributeNumber) != InvalidAttrNumber))
#define ADJ_FREQUENCY 0x0002
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define HAVE_SYNC_FILE_RANGE 1
#define HAVE_IPV6 1
#define AuthIdRelation_Rowtype_Id 2842
#define SO_BSDCOMPAT 14
#define HAVE__BUILTIN_UNREACHABLE 1
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define IPV6_RTHDRDSTOPTS 55
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define INT32_C(c) c
#define DsaPointerIsValid(x) ((x) != InvalidDsaPointer)
#define _____fpos64_t_defined 1
#define NAMEOID 19
#define SHRT_WIDTH 16
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#define LOG_DESTINATION_EVENTLOG 4
#define ESUNTERM ( 407 )
#define ACLITEMOID 1033
#define GUC_NOT_IN_SAMPLE 0x0020
#define PageSetPrunable(page,xid) do { Assert(TransactionIdIsNormal(xid)); if (!TransactionIdIsValid(((PageHeader) (page))->pd_prune_xid) || TransactionIdPrecedes(xid, ((PageHeader) (page))->pd_prune_xid)) ((PageHeader) (page))->pd_prune_xid = (xid); } while (0)
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define HeapTupleHeaderGetUpdateXid(tup) ( (!((tup)->t_infomask & HEAP_XMAX_INVALID) && ((tup)->t_infomask & HEAP_XMAX_IS_MULTI) && !((tup)->t_infomask & HEAP_XMAX_LOCK_ONLY)) ? HeapTupleGetUpdateXid(tup) : HeapTupleHeaderGetRawXmax(tup) )
#define __WCHAR_T__ 
#define UINT_LEAST64_WIDTH 64
#define HAVE_LDAP_H 1
#define __SIZEOF_SIZE_T__ 8
#define InvalidOid ((Oid) 0)
#define RELKIND_PARTITIONED_TABLE 'p'
#define __glibc_objsize0(__o) __bos0 (__o)
#define CHECKPOINT_END_OF_RECOVERY 0x0002
#define PG_INT8_MAX (0x7F)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define _POSIX_TIMERS 200809L
#define PRIxLEAST64 __PRI64_PREFIX "x"
#define ACL_CONNECT_CHR 'c'
#define XLogHintBitIsNeeded() (DataChecksumsEnabled() || wal_log_hints)
#define NI_DGRAM 16
#define PRIxFAST16 __PRIPTR_PREFIX "x"
#define IPV6_JOIN_ANYCAST 27
#define __unix 1
#define TRAP_BRANCH TRAP_BRANCH
#define IP_HDRINCL 3
#define PG_RETURN_VARCHAR_P(x) PG_RETURN_POINTER(x)
#define FIELDNO_EXPRCONTEXT_DOMAINNULL 13
#define _BITS_PTHREADTYPES_COMMON_H 1
#define IPV6_TCLASS 67
#define BACKENDID_H 
#define pgoff_t off_t
#define PRIX16 "X"
#define Anum_pg_attribute_atttypid 3
#define RelationGetRelid(relation) ((relation)->rd_id)
#define __UINT_FAST16_TYPE__ long unsigned int
#define FirstBootstrapObjectId 12000
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define ERRCODE_UNDEFINED_SCHEMA MAKE_SQLSTATE('3','F','0','0','0')
#define ERRCODE_SYSTEM_ERROR MAKE_SQLSTATE('5','8','0','0','0')
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define VA_ARGS_NARGS_(_01,_02,_03,_04,_05,_06,_07,_08,_09,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,N,...) (N)
#define TupleDescSize(src) (offsetof(struct TupleDescData, attrs) + (src)->natts * sizeof(FormData_pg_attribute))
#define _POSIX_RAW_SOCKETS 200809L
#define Anum_pg_attribute_attacl 23
#define Anum_pg_type_typnamespace 3
#define STA_MODE 0x4000
#define EXEC_FLAG_REWIND 0x0002
#define FKCONSTR_MATCH_FULL 'f'
#define PRIxFAST32 __PRIPTR_PREFIX "x"
#define __PRAGMA_REDEFINE_EXTNAME 1
#define list_make5_oid(x1,x2,x3,x4,x5) list_make5_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3), list_make_oid_cell(x4), list_make_oid_cell(x5))
#define __ss_aligntype unsigned long int
#define ItemPointerIsValid(pointer) ((bool) (PointerIsValid(pointer) && ((pointer)->ip_posid != 0)))
#define Anum_pg_attribute_attmissingval 26
#define RWH_WRITE_LIFE_NONE 1
#define SIGEV_NONE SIGEV_NONE
#define TUPMACS_H 
#define ERRCODE_INVALID_CHARACTER_VALUE_FOR_CAST MAKE_SQLSTATE('2','2','0','1','8')
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define Anum_pg_type_typnotnull 25
#define SK_ISNULL 0x0001
#define RTGreaterEqualStrategyNumber 23
#define _STRINGS_H 1
#define SI_MESGQ SI_MESGQ
#define __F_SETOWN 8
#define _VA_LIST_DEFINED 
#define PRIX32 "X"
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define FIELDNO_TUPLETABLESLOT_VALUES 5
#define __BLKSIZE_T_TYPE __S32_TYPE
#define PF_ECONET 19
#define __INT_LEAST16_MAX__ 0x7fff
#define linitial(l) lfirst(list_nth_cell(l, 0))
#define _SC_CLK_TCK _SC_CLK_TCK
#define Anum_pg_authid_oid 1
#define RSIZE_MIN_STR ( 1 )
#define HAVE_SPECIALJOININFO_TYPEDEF 1
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define UCHAR_WIDTH 8
#define PG_PUBLICATION_H 
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define EDEADLK 35
#define RELKIND_SEQUENCE 'S'
#define SHMEM_INDEX_KEYSIZE (48)
#define ERRCODE_CANNOT_COERCE MAKE_SQLSTATE('4','2','8','4','6')
#define PgAuthidToastTable 4175
#define EOH_HEADER_MAGIC (-1)
#define S_INIT_LOCK(lock) S_UNLOCK(lock)
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define TYPTYPE_MULTIRANGE 'm'
#define SmgrIsTemp(smgr) RelFileNodeBackendIsTemp((smgr)->smgr_rnode)
#define pg_spin_delay_impl() ((void)0)
#define IsBootstrapProcessingMode() (Mode == BootstrapProcessing)
#define __SIG_ATOMIC_WIDTH__ 32
#define HeapTupleHeaderIndicatesMovedPartitions(tup) ItemPointerIndicatesMovedPartitions(&(tup)->t_ctid)
#define HAVE_UNIX_SOCKETS 1
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define ERRCODE_E_R_I_E_INVALID_SQLSTATE_RETURNED MAKE_SQLSTATE('3','9','0','0','1')
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define PRIxFAST64 __PRI64_PREFIX "x"
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define __INT_LEAST64_TYPE__ long int
#define INT64_MAX (__INT64_C(9223372036854775807))
#define INT2VECTORARRAYOID 1006
#define htole16(x) __uint16_identity (x)
#define SIGCHLD 17
#define ERRCODE_TRIGGERED_ACTION_EXCEPTION MAKE_SQLSTATE('0','9','0','0','0')
#define GROUPING_CAN_USE_HASH 0x0002
#define MAXNAMLEN NAME_MAX
#define HeapTupleAllFixed(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASVARWIDTH))
#define __INT16_TYPE__ short int
#define CSTRINGOID 2275
#define PRIX64 __PRI64_PREFIX "X"
#define PG_MAGIC_FUNCTION_NAME_STRING "Pg_magic_func"
#define _XOPEN_LIM_H 1
#define Anum_pg_class_relispartition 27
#define DT_UNKNOWN DT_UNKNOWN
#define PRIoFAST16 __PRIPTR_PREFIX "o"
#define ERRCODE_TOO_MANY_ARGUMENTS MAKE_SQLSTATE('5','4','0','2','3')
#define MinSizeOfXactCommit (offsetof(xl_xact_commit, xact_time) + sizeof(TimestampTz))
#define OldSnapshotTimeMapLock (&MainLWLockArray[42].lock)
#define htole32(x) __uint32_identity (x)
#define EDQUOT 122
#define VARLENA_EXTSIZE_MASK ((1U << VARLENA_EXTSIZE_BITS) - 1)
#define PG_INT8_MIN (-0x7F-1)
#define HAVE_RL_COMPLETION_MATCHES 1
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define F_WRLCK 1
#define USER_LOCKMETHOD 2
#define PG_GETARG_TEXT_PP(n) DatumGetTextPP(PG_GETARG_DATUM(n))
#define ACL_DAT(ACL) ((AclItem *) ARR_DATA_PTR(ACL))
#define PG_VERSION_COMPAT_H 
#define FirstNormalTransactionId ((TransactionId) 3)
#define strerror pg_strerror
#define RTAboveStrategyNumber 11
#define PageGetItem(page,itemId) ( AssertMacro(PageIsValid(page)), AssertMacro(ItemIdHasStorage(itemId)), (Item)(((char *)(page)) + ItemIdGetOffset(itemId)) )
#define NI_NUMERICSERV 2
#define DSM_IMPL_WINDOWS 3
#define SIGSYS 31
#define linux 1
#define IsNormalProcessingMode() (Mode == NormalProcessing)
#define SOL_DCCP 269
#define AI_IDN 0x0040
#define TIMESTAMP_NOBEGIN(j) do {(j) = DT_NOBEGIN;} while (0)
#define EXECUTOR_H 
#define ARR_ELEMTYPE(a) ((a)->elemtype)
#define MOD_MICRO ADJ_MICRO
#define CURSOR_OPT_ASENSITIVE 0x0010
#define ntohl(x) __bswap_32 (x)
#define SA_NOCLDSTOP 1
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define ntohs(x) __bswap_16 (x)
#define PG_HAVE_ATOMIC_INIT_U32 
#define DATERANGEARRAYOID 3913
#define BITS_PER_BITMAPWORD 64
#define INTERNALOID 2281
#define HEAP_LOCK_MASK (HEAP_XMAX_SHR_LOCK | HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define SCNdMAX __PRI64_PREFIX "d"
#define SSIZE_MAX LONG_MAX
#define ERRCODE_DUPLICATE_FILE MAKE_SQLSTATE('5','8','P','0','2')
#define REFCURSORARRAYOID 2201
#define ____FILE_defined 1
#define HAVE_DECL_STRLCAT 0
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define NUMERICARRAYOID 1231
#define ILL_PRVREG ILL_PRVREG
#define PDP_ENDIAN __PDP_ENDIAN
#define BGWORKER_BYPASS_ALLOWCONN 1
#define htole64(x) __uint64_identity (x)
#define LSEGOID 601
#define FPE_FLTINV FPE_FLTINV
#define FIELDNO_EXPRCONTEXT_AGGNULLS 9
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define HEAPTUPLESIZE MAXALIGN(sizeof(HeapTupleData))
#define Anum_pg_attribute_attnotnull 14
#define F_SETLKW 7
#define HeapTupleSetHeapOnly(tuple) HeapTupleHeaderSetHeapOnly((tuple)->t_data)
#define SA_INTERRUPT 0x20000000
#define MOD_ESTERROR ADJ_ESTERROR
#define O_LARGEFILE __O_LARGEFILE
#define EVENT_TRIGGEROID 3838
#define ERRCODE_IDLE_IN_TRANSACTION_SESSION_TIMEOUT MAKE_SQLSTATE('2','5','P','0','3')
#define AllocSetContextCreate(parent,name,...) (StaticAssertExpr(__builtin_constant_p(name), "memory context names must be constant strings"), AllocSetContextCreateInternal(parent, name, __VA_ARGS__))
#define HAVE__BUILTIN_FRAME_ADDRESS 1
#define ERRCODE_E_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','4')
#define IsPolymorphicTypeFamily1(typid) ((typid) == ANYELEMENTOID || (typid) == ANYARRAYOID || (typid) == ANYNONARRAYOID || (typid) == ANYENUMOID || (typid) == ANYRANGEOID || (typid) == ANYMULTIRANGEOID)
#define IsPolymorphicTypeFamily2(typid) ((typid) == ANYCOMPATIBLEOID || (typid) == ANYCOMPATIBLEARRAYOID || (typid) == ANYCOMPATIBLENONARRAYOID || (typid) == ANYCOMPATIBLERANGEOID || (typid) == ANYCOMPATIBLEMULTIRANGEOID)
#define ITEM_H 
#define __FLT32_MIN_10_EXP__ (-37)
#define __GNUC_MINOR__ 3
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define SVE_SIG_ZREG_SIZE(vq) __SVE_ZREG_SIZE(vq)
#define ACL_CREATE_CHR 'C'
#define ShareUpdateExclusiveLock 4
#define RTOldContainedByStrategyNumber 14
#define HEAP_MOVED (HEAP_MOVED_OFF | HEAP_MOVED_IN)
#define PG_HAVE_ATOMIC_INIT_U64 
#define __FLT32X_DIG__ 15
#define _VA_LIST_ 
#define GUC_UNIT_BYTE 0x8000
#define ERRCODE_UNIQUE_VIOLATION MAKE_SQLSTATE('2','3','5','0','5')
#define REGBUF_KEEP_DATA 0x10
#define CUSTOMPATH_SUPPORT_BACKWARD_SCAN 0x0001
#define ERRCODE_TOO_MANY_JSON_OBJECT_MEMBERS MAKE_SQLSTATE('2','2','0','3','E')
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define HAVE_LANGINFO_H 1
#define TIDBITMAP_H 
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define _SC_PII_XTI _SC_PII_XTI
#define HAVE_BIO_GET_DATA 1
#define FKCONSTR_ACTION_SETDEFAULT 'd'
#define SA_NODEFER 0x40000000
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define pairingheap_is_singular(h) ((h)->ph_root && (h)->ph_root->first_child == NULL)
#define VARHDRSZ_COMPRESSED offsetof(varattrib_4b, va_compressed.va_data)
#define LC_TELEPHONE __LC_TELEPHONE
#define PRIXLEAST8 "X"
#define ENAMETOOLONG 36
#define ERRCODE_DEPENDENT_OBJECTS_STILL_EXIST MAKE_SQLSTATE('2','B','P','0','1')
#define ERRCODE_FDW_OUT_OF_MEMORY MAKE_SQLSTATE('H','V','0','0','1')
#define USE_ISO_DATES 1
#define NI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("NI_IDN_ALLOW_UNASSIGNED is deprecated") 64
#define ACL_UPDATE (1<<2)
#define CLD_STOPPED CLD_STOPPED
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DBL_HAS_QUIET_NAN__ 1
#define BOOL_WIDTH 1
#define TYPALIGN_SHORT 's'
#define SET_VARSIZE_SHORT(PTR,len) SET_VARSIZE_1B(PTR, len)
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __FLT16_HAS_INFINITY__ 1
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define SO_DETACH_BPF SO_DETACH_FILTER
#define TIMESTAMP_IS_NOBEGIN(j) ((j) == DT_NOBEGIN)
#define BPCHARARRAYOID 1014
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define IPPROTO_MPLS IPPROTO_MPLS
#define ERRCODE_INTERVAL_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','1','5')
#define SA_STACK SA_ONSTACK
#define AF_VSOCK PF_VSOCK
#define BUS_ADRERR BUS_ADRERR
#define ARR_DIMS(a) ((int *) (((char *) (a)) + sizeof(ArrayType)))
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define __f128(x) x ##f128
#define BTEqualStrategyNumber 3
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define pg_bswap32(x) __builtin_bswap32(x)
#define le64toh(x) __uint64_identity (x)
#define TYPCATEGORY_RANGE 'R'
#define RTGreaterStrategyNumber 22
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define __FLT16_MANT_DIG__ 11
#define ESOCKTNOSUPPORT 94
#define AF_LOCAL PF_LOCAL
#define VARDATA_COMPRESSED_GET_EXTSIZE(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_tcinfo & VARLENA_EXTSIZE_MASK)
#define __INTPTR_TYPE__ long int
#define __WCHAR_TYPE__ unsigned int
#define SVE_SIG_FFR_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_FFR_OFFSET(vq))
#define HAVE_UUID_UUID_H 1
#define __SLONGWORD_TYPE long int
#define HeapTupleIsValid(tuple) PointerIsValid(tuple)
#define FP_LOCK_SLOTS_PER_BACKEND 16
#define Anum_pg_type_typacl 32
#define POSTGRES_H 
#define PageGetSpecialPointer(page) ( AssertMacro(PageValidateSpecialPointer(page)), (char *) ((char *) (page) + ((PageHeader) (page))->pd_special) )
#define ESEMPTY ( 405 )
#define EXEC_FLAG_MARK 0x0008
#define BGWORKER_BACKEND_DATABASE_CONNECTION 0x0002
#define __pic__ 2
#define lfirst(lc) ((lc)->ptr_value)
#define Anum_pg_class_relallvisible 12
#define ItemPointerSet(pointer,blockNumber,offNum) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber), (pointer)->ip_posid = offNum )
#define MaxOffsetNumber ((OffsetNumber) (BLCKSZ / sizeof(ItemIdData)))
#define __S_IFLNK 0120000
#define __ARM_ARCH_8A 1
#define ERRCODE_LOCK_FILE_EXISTS MAKE_SQLSTATE('F','0','0','0','1')
#define __stub_chflags 
#define ERRCODE_LOCK_NOT_AVAILABLE MAKE_SQLSTATE('5','5','P','0','3')
#define HAVE_INT128 1
#define SCNxPTR __PRIPTR_PREFIX "x"
#define WL_SOCKET_READABLE (1 << 1)
#define list_make4_oid(x1,x2,x3,x4) list_make4_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3), list_make_oid_cell(x4))
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define EDOTDOT 73
#define list_make_oid_cell(v) ((ListCell) {.oid_value = (v)})
#define __FLT32_DECIMAL_DIG__ 9
#define __O_DIRECT 0200000
#define PF_SMC 43
#define PF_NFC 39
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#define RelationIsValid(relation) PointerIsValid(relation)
#define HAVE_RANDOM 1
#define PAI_OVERWRITE (1 << 0)
#define REGNAMESPACEOID 4089
#define BUFSIZ 8192
#define HAVE_SHM_OPEN 1
#define __SVE_PREGS_SIZE(vq) (__SVE_PREG_OFFSET(vq, __SVE_NUM_PREGS) - __SVE_PREGS_OFFSET(vq))
#define PG_GETARG_FLOAT8(n) DatumGetFloat8(PG_GETARG_DATUM(n))
#define REPLICATION_MODEL_STREAMING 's'
#define SO_PEEK_OFF 42
#define DatumGetCString(X) ((char *) DatumGetPointer(X))
#define __LDBL_REDIR2_DECL(name) 
#define castNode(_type_,nodeptr) ((_type_ *) (nodeptr))
#define __FLT_MAX_10_EXP__ 38
#define _WCHAR_T_DECLARED 
#define AddinShmemInitLock (&MainLWLockArray[21].lock)
#define SRF_IS_FIRSTCALL() (fcinfo->flinfo->fn_extra == NULL)
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define GLOBAL_PID_NODE_ID_MULTIPLIER 10000000000
#define BUFFER_MAPPING_LWLOCK_OFFSET NUM_INDIVIDUAL_LWLOCKS
#define WNOWAIT 0x01000000
#define XACT_FLAGS_ACCESSEDTEMPNAMESPACE (1U << 0)
#define PRIXFAST8 "X"
#define IPV6_PATHMTU 61
#define DISABLE_CONNECTION_THROTTLING -1
#define ShmemIndexLock (&MainLWLockArray[1].lock)
#define MultiXactIdGetDatum(X) ((Datum) (X))
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define PF_XDP 44
#define AF_ALG PF_ALG
#define for_each_from(cell,lst,N) for (ForEachState cell ##__state = for_each_from_setup(lst, N); (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define _SC_2_PBS _SC_2_PBS
#define AF_QIPCRTR PF_QIPCRTR
#define ERRCODE_NOT_AN_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','L')
#define _FCNTL_H 1
#define PG_TEMP_FILE_PREFIX "pgsql_tmp"
#define IPV6_ADDR_PREFERENCES 72
#define DSM_IMPL_POSIX 1
#define SCNoFAST16 __PRIPTR_PREFIX "o"
#define DatumGetBpCharPP(X) ((BpChar *) PG_DETOAST_DATUM_PACKED(X))
#define XLR_MAX_BLOCK_ID 32
#define MONEYOID 790
#define __LC_COLLATE 3
#define SO_ZEROCOPY 60
#define SVE_VQ_BYTES __SVE_VQ_BYTES
#define __S16_TYPE short int
#define Anum_pg_class_reloptions 32
#define HAVE_DECL_STRLCPY 0
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define PRIXMAX __PRI64_PREFIX "X"
#define ERRCODE_T_R_SERIALIZATION_FAILURE MAKE_SQLSTATE('4','0','0','0','1')
#define EPROTONOSUPPORT 93
#define UINT_MAX (INT_MAX * 2U + 1U)
#define ADJ_TICK 0x4000
#define RELFILENODE_H 
#define IndexRelationId 2610
#define TSRANGEARRAYOID 3909
#define _BITS_STDINT_INTN_H 1
#define __TIMESIZE 64
#define INVERT_COMPARE_RESULT(var) ((var) = ((var) < 0) ? 1 : -(var))
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define ERRCODE_INVALID_TIME_ZONE_DISPLACEMENT_VALUE MAKE_SQLSTATE('2','2','0','0','9')
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define PROC_VACUUM_STATE_MASK (PROC_IN_VACUUM | PROC_IN_SAFE_IC | PROC_VACUUM_FOR_WRAPAROUND)
#define BKI_SCHEMA_MACRO 
#define IN_CLASSC_NET 0xffffff00
#define fprintf pg_fprintf
#define SCNoFAST32 __PRIPTR_PREFIX "o"
#define __SIGRTMAX 64
#define ALLOCSET_SEPARATE_THRESHOLD 8192
#define InvalidFullTransactionId FullTransactionIdFromEpochAndXid(0, InvalidTransactionId)
#define SIGCLD SIGCHLD
#define LONG_ALIGN_MASK (sizeof(long) - 1)
#define __USE_LARGEFILE64 1
#define ERRCODE_FDW_SCHEMA_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','Q')
#define __FLT16_HAS_QUIET_NAN__ 1
#define IP_PMTUDISC_OMIT 5
#define ERRCODE_FDW_INVALID_DATA_TYPE_DESCRIPTORS MAKE_SQLSTATE('H','V','0','0','6')
#define __WINT_MAX__ 0xffffffffU
#define SCNuMAX __PRI64_PREFIX "u"
#define HASH_COMPARE 0x0080
#define IsInitProcessingMode() (Mode == InitProcessing)
#define __cookie_io_functions_t_defined 1
#define __gid_t_defined 
#define FRAMEOPTION_END_UNBOUNDED_PRECEDING 0x00040
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define IN_LOOPBACKNET 127
#define VARDATA_1B(PTR) (((varattrib_1b *) (PTR))->va_data)
#define AARR_HASNULL(a) (VARATT_IS_EXPANDED_HEADER(a) ? ((a)->xpn.dvalues != NULL ? (a)->xpn.dnulls != NULL : ARR_HASNULL((a)->xpn.fvalue)) : ARR_HASNULL((ArrayType *) (a)))
#define PointerIsAligned(pointer,type) (((uintptr_t)(pointer) % (sizeof (type))) == 0)
#define __ASM_SVE_CONTEXT_H 
#define TSQUERYOID 3615
#define SK_SEARCHNOTNULL 0x0080
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define _POSIX2_RE_DUP_MAX 255
#define SVE_SIG_CONTEXT_SIZE(vq) (SVE_SIG_REGS_OFFSET + SVE_SIG_REGS_SIZE(vq))
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define IPV6_DONTFRAG 62
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_V6_LP64_OFF64 1
#define TRY_AGAIN 2
#define HAVE_OPENSSL_INIT_SSL 1
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define Abs(x) ((x) >= 0 ? (x) : -(x))
#define __SVE_VQ_BYTES 16
#define SCNoFAST64 __PRI64_PREFIX "o"
#define PublicationNameIndexId 6111
#define SCNd64 __PRI64_PREFIX "d"
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define __clock_t_defined 1
#define TSVECTOROID 3614
#define _POSIX_SEM_VALUE_MAX 32767
#define linitial_int(l) lfirst_int(list_nth_cell(l, 0))
#define AF_ATMPVC PF_ATMPVC
#define CITUS_RUN_COMMAND_APPLICATION_NAME_PREFIX "citus_run_command gpid="
#define HEAP_INSERT_SPECULATIVE 0x0010
#define LC_CTYPE __LC_CTYPE
#define Anum_pg_dist_partition_repmodel 5
#define __UINT_LEAST32_TYPE__ unsigned int
#define ADJ_OFFSET_SS_READ 0xa001
#define SET_VARSIZE(PTR,len) SET_VARSIZE_4B(PTR, len)
#define SCNu16 "hu"
#define _XBS5_ILP32_OFFBIG -1
#define _CTYPE_H 1
#define AF_ASH PF_ASH
#define FNDELAY O_NDELAY
#define IPPROTO_GRE IPPROTO_GRE
#define Anum_pg_attribute_atthasdef 15
#define VARATT_EXTERNAL_IS_COMPRESSED(toast_pointer) (VARATT_EXTERNAL_GET_EXTSIZE(toast_pointer) < (toast_pointer).va_rawsize - VARHDRSZ)
#define DOUBLEALIGN(LEN) TYPEALIGN(ALIGNOF_DOUBLE, (LEN))
#define __LDBL_MIN_EXP__ (-16381)
#define VARDATA_4B(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_data)
#define XLOG_XACT_ABORT 0x20
#define VARTAG_EXTERNAL(PTR) VARTAG_1B_E(PTR)
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define Anum_pg_publication_puballtables 4
#define HAVE_RL_FILENAME_QUOTE_CHARACTERS 1
#define lsecond_int(l) lfirst_int(list_nth_cell(l, 1))
#define __BIT_TYPES_DEFINED__ 1
#define _POSIX_VDISABLE '\0'
#define ERRCODE_ESCAPE_CHARACTER_CONFLICT MAKE_SQLSTATE('2','2','0','0','B')
#define PG_FINALLY() } else _do_rethrow = true; { PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack
#define SCNu32 "u"
#define stdout stdout
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define MSG_RST MSG_RST
#define IP_OPTIONS 4
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define XLOG_INVALIDATIONS 0x20
#define REGTYPEARRAYOID 2211
#define __struct_FILE_defined 1
#define lfirst_int(lc) ((lc)->int_value)
#define INTPTR_WIDTH __WORDSIZE
#define TUPLE_LOCK_FLAG_FIND_LAST_VERSION (1 << 1)
#define SpecTokenOffsetNumber 0xfffe
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define __INT_LEAST8_MAX__ 0x7f
#define SIGUSR1 10
#define VARDATA_ANY(PTR) (VARATT_IS_1B(PTR) ? VARDATA_1B(PTR) : VARDATA_4B(PTR))
#define __FLT32X_MAX_10_EXP__ 308
#define INT32_WIDTH 32
#define ERRCODE_SQL_JSON_OBJECT_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','C')
#define XACT_XINFO_HAS_SUBXACTS (1U << 1)
#define palloc0fast(sz) ( MemSetTest(0, sz) ? MemoryContextAllocZeroAligned(CurrentMemoryContext, sz) : MemoryContextAllocZero(CurrentMemoryContext, sz) )
#define ESRCH 3
#define ____mbstate_t_defined 1
#define SO_ATTACH_REUSEPORT_EBPF 52
#define FIELDNO_HEAPTUPLETABLESLOT_TUPLE 1
#define __SIGRTMIN 32
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define CURSOR_OPT_INSENSITIVE 0x0008
#define ROWID_VAR 65003
#define O_RDONLY 00
#define SO_RCVBUFFORCE 33
#define HASH_FIXED_SIZE 0x2000
#define ERRCODE_INVALID_ARGUMENT_FOR_POWER_FUNCTION MAKE_SQLSTATE('2','2','0','1','F')
#define SCNu64 __PRI64_PREFIX "u"
#define _BITS_SIGNUM_GENERIC_H 1
#define ERRCODE_WARNING_DEPRECATED_FEATURE MAKE_SQLSTATE('0','1','P','0','1')
#define IP_PMTUDISC 10
#define L_INCR SEEK_CUR
#define PG_HAVE_ATOMIC_INIT_FLAG 
#define ERRCODE_DUPLICATE_TABLE MAKE_SQLSTATE('4','2','P','0','7')
#define EMSGSIZE 90
#define __ASM_POSIX_TYPES_H 
#define TYPCATEGORY_NETWORK 'I'
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define Anum_pg_class_reltype 4
#define ANYNONARRAYOID 2776
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define ItemPointerCopy(fromPointer,toPointer) ( AssertMacro(PointerIsValid(toPointer)), AssertMacro(PointerIsValid(fromPointer)), *(toPointer) = *(fromPointer) )
#define InvalidCommandId (~(CommandId)0)
#define SOL_CAIF 278
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define ERRCODE_OBJECT_NOT_IN_PREREQUISITE_STATE MAKE_SQLSTATE('5','5','0','0','0')
#define _SIZET_ 
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define SIGPIPE 13
#define LOCKBIT_OFF(lockmode) (~(1 << (lockmode)))
#define MinSizeOfInvalidations offsetof(xl_invalidations, msgs)
#define _LP64 1
#define ACL_OPTION_TO_PRIVS(privs) (((AclMode) (privs) >> 16) & 0xFFFF)
#define MAXALIGN(LEN) TYPEALIGN(MAXIMUM_ALIGNOF, (LEN))
#define __UINT8_C(c) c
#define CMDTAG_H 
#define dlist_container(type,membername,ptr) (AssertVariableIsOfTypeMacro(ptr, dlist_node *), AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), ((type *) ((char *) (ptr) - offsetof(type, membername))))
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE IPPROTO_NONE
#define MOD_MAXERROR ADJ_MAXERROR
#define IPPROTO_RSVP IPPROTO_RSVP
#define TIMESTAMP_NOT_FINITE(j) (TIMESTAMP_IS_NOBEGIN(j) || TIMESTAMP_IS_NOEND(j))
#define __S_IFSOCK 0140000
#define MAX_CATALOG_MULTI_INSERT_BYTES 65535
#define WL_POSTMASTER_DEATH (1 << 4)
#define IOV_MAX __IOV_MAX
#define exec_subplan_get_plan(plannedstmt,subplan) ((Plan *) list_nth((plannedstmt)->subplans, (subplan)->plan_id - 1))
#define __stub_stty 
#define foreach_current_index(cell) (cell ##__state.i)
#define list_make3_oid(x1,x2,x3) list_make3_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2), list_make_oid_cell(x3))
#define CHECKPOINT_WAIT 0x0020
#define __ASM_GENERIC_SOCKIOS_H 
#define TIDOID 27
#define __UINT64_TYPE__ long unsigned int
#define TSTZRANGEARRAYOID 3911
#define HAVE_STRUCT_SOCKADDR_UN 1
#define EAI_ADDRFAMILY -9
#define IsA(nodeptr,_type_) (nodeTag(nodeptr) == T_ ##_type_)
#define PG_GETARG_TIMESTAMPTZ(n) DatumGetTimestampTz(PG_GETARG_DATUM(n))
#define __stub___compat_query_module 
#define FirstCommandId ((CommandId) 0)
#define __ARM_NEON 1
#define newNode(size,tag) ({ Node *_result; AssertMacro((size) >= sizeof(Node)); _result = (Node *) palloc0fast(size); _result->type = (tag); _result; })
#define FRAMEOPTION_START_UNBOUNDED_PRECEDING 0x00020
#define INTERVAL_TYPMOD(p,r) ((((r) & INTERVAL_RANGE_MASK) << 16) | ((p) & INTERVAL_PRECISION_MASK))
#define ALL_CONNECTION_FAILURE_ERRNOS EPIPE: case ECONNRESET: case ECONNABORTED: case EHOSTDOWN: case EHOSTUNREACH: case ENETDOWN: case ENETRESET: case ENETUNREACH
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define SO_MEMINFO 55
#define _SC_IOV_MAX _SC_IOV_MAX
#define _SC_PASS_MAX _SC_PASS_MAX
#define SCNiFAST8 "hhi"
#define __PRI64_PREFIX "l"
#define RelationIsUsedAsCatalogTable(relation) ((relation)->rd_options && ((relation)->rd_rel->relkind == RELKIND_RELATION || (relation)->rd_rel->relkind == RELKIND_MATVIEW) ? ((StdRdOptions *) (relation)->rd_options)->user_catalog_table : false)
#define _SC_LONG_BIT _SC_LONG_BIT
#define ERRCODE_SQL_JSON_ARRAY_NOT_FOUND MAKE_SQLSTATE('2','2','0','3','9')
#define ACL_ALL_RIGHTS_STR "arwdDxtXUCTc"
#define ERRCODE_DUPLICATE_COLUMN MAKE_SQLSTATE('4','2','7','0','1')
#define __stack_t_defined 1
#define _POSIX_MAPPED_FILES 200809L
#define PG_TEXTDOMAIN(domain) (domain "-" PG_MAJORVERSION)
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define O_TRUNC 01000
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define ACLITEM_GET_RIGHTS(item) ((item).ai_privs)
#define Anum_pg_type_typsubscript 13
#define OIDCHARS 10
#define HAVE_DECL_LLVMGETHOSTCPUFEATURES 1
#define IPPROTO_IGMP IPPROTO_IGMP
#define LSEGARRAYOID 1018
#define GUC_check_errhint pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errhint_string = format_elog_string
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define PG_END_ENSURE_ERROR_CLEANUP(cleanup_function,arg) cancel_before_shmem_exit(cleanup_function, arg); PG_CATCH(); { cancel_before_shmem_exit(cleanup_function, arg); cleanup_function (0, arg); PG_RE_THROW(); } PG_END_TRY(); } while (0)
#define PG_RE_THROW() pg_re_throw()
#define MinHeapTupleSize MAXALIGN(SizeofHeapTupleHeader)
#define Anum_pg_publication_pubdelete 7
#define SEGV_ADIPERR SEGV_ADIPERR
#define PF_IUCV 32
#define PRIiMAX __PRI64_PREFIX "i"
#define __PID_T_TYPE __S32_TYPE
#define SET_LOCKTAG_TRANSACTION(locktag,xid) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_TRANSACTION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define DatumGetInt64(X) ((int64) (X))
#define HAVE_SYS_PRCTL_H 1
#define HAVE_POLL 1
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX _SC_AIO_MAX
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define ENOTCONN 107
#define TTY_NAME_MAX 32
#define GetPGProcByNumber(n) (&ProcGlobal->allProcs[(n)])
#define XACT_XINFO_HAS_RELFILENODES (1U << 2)
#define PG_RETURN_INTERVAL_P(x) return IntervalPGetDatum(x)
#define Natts_pg_authid 12
#define RelationGetToastTupleTarget(relation,defaulttarg) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->toast_tuple_target : (defaulttarg))
#define IN_CLASSB_NET 0xffff0000
#define ERRCODE_UNDEFINED_CURSOR MAKE_SQLSTATE('3','4','0','0','0')
#define AccessShareLock 1
#define XLOG_BLCKSZ 8192
#define TIMESTAMPARRAYOID 1115
#define __SVE_PREGS_OFFSET(vq) (__SVE_ZREGS_OFFSET + __SVE_ZREGS_SIZE(vq))
#define LOCALLOCK_LOCKTAG(llock) ((LockTagType) (llock).tag.lock.locktag_type)
#define INTERVAL_RANGE(t) (((t) >> 16) & INTERVAL_RANGE_MASK)
#define BlockIdGetBlockNumber(blockId) ( AssertMacro(BlockIdIsValid(blockId)), ((((BlockNumber) (blockId)->bi_hi) << 16) | ((BlockNumber) (blockId)->bi_lo)) )
#define S_IFLNK __S_IFLNK
#define _POSIX_UIO_MAXIOV 16
#define __DBL_MAX_10_EXP__ 308
#define P_tmpdir "/tmp"
#define TXID_SNAPSHOTARRAYOID 2949
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define MSG_TRYHARD MSG_DONTROUTE
#define HAVE_DECL_LLVMCREATEPERFJITEVENTLISTENER 1
#define _POSIX_MESSAGE_PASSING 200809L
#define __HAVE_FLOAT32 1
#define sve_vq_from_vl(vl) __sve_vq_from_vl(vl)
#define __WORDSIZE_TIME64_COMPAT32 0
#define EPFNOSUPPORT 96
#define HAVE_STDBOOL_H 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define IPV6_ROUTER_ALERT 22
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define RaiseDeferredError(error,elevel) do { RaiseDeferredErrorInternal(error, elevel); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) { pg_unreachable(); } } while (0)
#define ACL_ALL_RIGHTS_RELATION (ACL_INSERT|ACL_SELECT|ACL_UPDATE|ACL_DELETE|ACL_TRUNCATE|ACL_REFERENCES|ACL_TRIGGER)
#define __DBL_DECIMAL_DIG__ 17
#define RELTRIGGER_H 
#define PRS2_OLD_VARNO 1
#define ERRCODE_CONFIGURATION_LIMIT_EXCEEDED MAKE_SQLSTATE('5','3','4','0','0')
#define LP_REDIRECT 2
#define ItemPointerSetInvalid(pointer) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), InvalidBlockNumber), (pointer)->ip_posid = InvalidOffsetNumber )
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define _SIZE_T 
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define linitial_node(type,l) castNode(type, linitial(l))
#define INT_LEAST64_WIDTH 64
#define lfirst_oid(lc) ((lc)->oid_value)
#define TypeRelationId 1247
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define PG_RETURN_EXPANDED_ARRAY(x) PG_RETURN_DATUM(EOHPGetRWDatum(&(x)->hdr))
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define XLOG_XACT_HAS_INFO 0x80
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define fetchatt(A,T) fetch_att(T, (A)->attbyval, (A)->attlen)
#define SOCK_STREAM SOCK_STREAM
#define REGBUF_WILL_INIT (0x04 | 0x02)
#define SA_NOMASK SA_NODEFER
#define TIME_UTC 1
#define __BIG_ENDIAN 4321
#define XLOG_DEFS_H 
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define PG_TYPE_H 
#define F_EXLCK 4
#define store_att_byval(T,newdatum,attlen) do { switch (attlen) { case sizeof(char): *(char *) (T) = DatumGetChar(newdatum); break; case sizeof(int16): *(int16 *) (T) = DatumGetInt16(newdatum); break; case sizeof(int32): *(int32 *) (T) = DatumGetInt32(newdatum); break; case sizeof(Datum): *(Datum *) (T) = (newdatum); break; default: elog(ERROR, "unsupported byval length: %d", (int) (attlen)); break; } } while (0)
#define PG_HAVE_ATOMIC_READ_U32 
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __ASM_BITSPERLONG_H 
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define SRF_RETURN_NEXT_NULL(_funcctx) do { ReturnSetInfo *rsi; (_funcctx)->call_cntr++; rsi = (ReturnSetInfo *) fcinfo->resultinfo; rsi->isDone = ExprMultipleResult; PG_RETURN_NULL(); } while (0)
#define ERRCODE_FDW_INVALID_OPTION_NAME MAKE_SQLSTATE('H','V','0','0','D')
#define NUM_INDIVIDUAL_LWLOCKS 48
#define IndexRelationGetNumberOfKeyAttributes(relation) ((relation)->rd_index->indnkeyatts)
#define GUC_UNIT_MEMORY 0xF000
#define EAI_SYSTEM -11
#define ENOTBLK 15
#define RECORDOID 2249
#define ERRCODE_SNAPSHOT_TOO_OLD MAKE_SQLSTATE('7','2','0','0','0')
#define FALLOC_FL_NO_HIDE_STALE 0x04
#define SI_KERNEL SI_KERNEL
#define ACL_H 
#define PG_GETARG_BYTEA_P(n) DatumGetByteaP(PG_GETARG_DATUM(n))
#define PRIdFAST16 __PRIPTR_PREFIX "d"
#define FRAMEOPTION_RANGE 0x00002
#define __INTMAX_WIDTH__ 64
#define INT4OID 23
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
#define _POSIX_REENTRANT_FUNCTIONS 1
#define ERRCODE_UNDEFINED_DATABASE MAKE_SQLSTATE('3','D','0','0','0')
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define __mode_t_defined 
#define BGWORKER_SHMEM_ACCESS 0x0001
#define F_OFD_SETLKW 38
#define CITUS_LISTUTILS_H 
#define __ORDER_BIG_ENDIAN__ 4321
#define PLATFORM_DEFAULT_SYNC_METHOD SYNC_METHOD_FDATASYNC
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define Anum_pg_class_relnatts 18
#define ESZEROL ( 401 )
#define XACT_READ_UNCOMMITTED 0
#define CHAR_WIDTH 8
#define USE_PREFETCH 
#define INT2OID 21
#define ESNODIFF ( 408 )
#define IP_RECVFRAGSIZE 25
#define __UINT32_C(c) c ## U
#define PRIdFAST32 __PRIPTR_PREFIX "d"
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define AI_CANONIDN 0x0080
#define EISCONN 106
#define CHARARRAYOID 1002
#define INET6_ADDRSTRLEN 46
#define ENABLE_GSS 1
#define SET_LOCKTAG_PAGE(locktag,dboid,reloid,blocknum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_PAGE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define PageIsAllVisible(page) (((PageHeader) (page))->pd_flags & PD_ALL_VISIBLE)
#define SIGEV_THREAD SIGEV_THREAD
#define OPCLASS_ITEM_OPERATOR 1
#define REGOPEROID 2203
#define forfour(cell1,list1,cell2,list2,cell3,list3,cell4,list4) for (ForFourState cell1 ##__state = {(list1), (list2), (list3), (list4), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), multi_for_advance_cell(cell4, cell1 ##__state, l4, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL && cell4 != NULL); cell1 ##__state.i++)
#define IP_NODEFRAG 22
#define __ATOMIC_RELEASE 3
#define __glibc_has_builtin(name) __has_builtin (name)
#define _LFS_ASYNCHRONOUS_IO 1
#define SMGR_H 
#define Natts_pg_type 32
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define AF_UNIX PF_UNIX
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define IP_RECVRETOPTS IP_RETOPTS
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define IPPROTO_COMP IPPROTO_COMP
#define USE_DSM_POSIX 
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define HAVE_GETOPT_H 1
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define _VA_LIST_T_H 
#define GUC_LIST_INPUT 0x0001
#define DN_MODIFY 0x00000002
#define ItemIdSetDead(itemId) ( (itemId)->lp_flags = LP_DEAD, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define PRIdFAST64 __PRI64_PREFIX "d"
#define __UINT_FAST32_TYPE__ long unsigned int
#define VARSIZE_1B(PTR) ((((varattrib_1b *) (PTR))->va_header >> 1) & 0x7F)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define lthird(l) lfirst(list_nth_cell(l, 2))
#define O_NOFOLLOW __O_NOFOLLOW
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define ERRCODE_MORE_THAN_ONE_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','4')
#define POLL_ERR POLL_ERR
#define SOL_IP 0
#define F_SEAL_FUTURE_WRITE 0x0010
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define REGCLASSARRAYOID 2210
#define UInt8GetDatum(X) ((Datum) (X))
#define SVE_VL_MAX __SVE_VL_MAX
#define AF_CAIF PF_CAIF
#define list_make2_oid(x1,x2) list_make2_impl(T_OidList, list_make_oid_cell(x1), list_make_oid_cell(x2))
#define ItemPointerGetBlockNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetBlockNumberNoCheck(pointer) )
#define HAVE_GETHOSTBYNAME_R 1
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define TYPCATEGORY_GEOMETRIC 'G'
#define ispunct(c) __isctype((c), _ISpunct)
#define DatumGetUInt8(X) ((uint8) (X))
#define HAVE_DECL_STRTOLL 1
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define DatumGetBpCharPCopy(X) ((BpChar *) PG_DETOAST_DATUM_COPY(X))
#define HAVE_STRCHRNUL 1
#define PG_RETURN_ACL_P(x) PG_RETURN_POINTER(x)
#define ScanDirectionIsValid(direction) ((bool) (BackwardScanDirection <= (direction) && (direction) <= ForwardScanDirection))
#define _POSIX_MQ_OPEN_MAX 8
#define HAVE__BUILTIN_POPCOUNT 1
#define __SAFE_LIB_ERRNO_H__ 
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define HEAP_XMAX_LOCK_ONLY 0x0080
#define __FP_FAST_FMA 1
#define ERRCODE_FDW_ERROR MAKE_SQLSTATE('H','V','0','0','0')
#define F_SET_FILE_RW_HINT 1038
#define PG_BINARY 0
#define SA_NOCLDWAIT 2
#define __va_list__ 
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define SO_SNDLOWAT 19
#define VARSIZE_4B(PTR) ((((varattrib_4b *) (PTR))->va_4byte.va_header >> 2) & 0x3FFFFFFF)
#define __sve_vl_from_vq(vq) ((vq) * __SVE_VQ_BYTES)
#define PG_HAVE_ATOMIC_UNLOCKED_WRITE_U32 
#define FIELDNO_EXPRSTATE_RESULTSLOT 4
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX_ASYNC_IO 1
#define PG_GETARG_ARRAYTYPE_P_COPY(n) DatumGetArrayTypePCopy(PG_GETARG_DATUM(n))
#define HeapTupleHeaderSetXmax(tup,xid) ( (tup)->t_choice.t_heap.t_xmax = (xid) )
#define pg_read_barrier_impl() __atomic_thread_fence(__ATOMIC_ACQUIRE)
#define CLOCK_REALTIME 0
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define ERFKILL 132
#define fcSetArgNull(fc,n) fcSetArgExt(fc, n, (Datum) 0, true)
#define ERRCODE_S_E_INVALID_SPECIFICATION MAKE_SQLSTATE('3','B','0','0','1')
#define REGBUF_NO_IMAGE 0x02
#define FIN_CRC32C(crc) ((crc) ^= 0xFFFFFFFF)
#define FKCONSTR_ACTION_NOACTION 'a'
#define __INT32_TYPE__ int
#define DN_MULTISHOT 0x80000000
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define ERRCODE_INVALID_ARGUMENT_FOR_SQL_JSON_DATETIME_FUNCTION MAKE_SQLSTATE('2','2','0','3','1')
#define WARNING_CLIENT_ONLY 20
#define __SIZEOF_DOUBLE__ 8
#define PG_HAVE_ATOMIC_FETCH_AND_U64 
#define LOG2_NUM_PREDICATELOCK_PARTITIONS 4
#define MCAST_MSFILTER 48
#define FuncnameGetCandidates_compat(a,b,c,d,e,f,g) FuncnameGetCandidates(a, b, c, d, e, f, g)
#define ACL_CREATE_TEMP (1<<10)
#define IPV6_PMTUDISC_WANT 1
#define PG_LIST_H 
#define Anum_pg_attribute_attstattarget 4
#define HeapTupleHeaderGetDatumLength(tup) VARSIZE(tup)
#define EPROTOTYPE 91
#define ARR_NDIM(a) ((a)->ndim)
#define __SWORD_TYPE long int
#define be16toh(x) __bswap_16 (x)
#define GetProcessingMode() Mode
#define EL3HLT 46
#define DECLARE_ARRAY_FOREIGN_KEY_OPT(cols,reftbl,refcols) extern int no_such_variable
#define _BITS_POSIX1_LIM_H 1
#define SK_ROW_END 0x0010
#define CIDOID 29
#define PQTRACE_REGRESS_MODE (1<<1)
#define SO_GET_FILTER SO_ATTACH_FILTER
#define forthree(cell1,list1,cell2,list2,cell3,list3) for (ForThreeState cell1 ##__state = {(list1), (list2), (list3), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL); cell1 ##__state.i++)
#define MCAST_BLOCK_SOURCE 43
#define _DIRENT_MATCHES_DIRENT64 1
#define FORKNAMECHARS 4
#define dsa_pointer_atomic_compare_exchange pg_atomic_compare_exchange_u64
#define ScanDirectionIsForward(direction) ((bool) ((direction) == ForwardScanDirection))
#define RTSameStrategyNumber 6
#define IN_CLASSA_NET 0xff000000
#define PG_USED_FOR_ASSERTS_ONLY pg_attribute_unused()
#define unvolatize(underlying_type,expr) (StaticAssertExpr(__builtin_types_compatible_p(__typeof(expr), volatile underlying_type), "wrong cast"), (underlying_type) (expr))
#define _T_SIZE 
#define StoreInvalidTransactionId(dest) (*(dest) = InvalidTransactionId)
#define VARATT_CONVERTED_SHORT_SIZE(PTR) (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT)
#define REPLICA_IDENTITY_INDEX 'i'
#define ERRCODE_OUT_OF_MEMORY MAKE_SQLSTATE('5','3','2','0','0')
#define ObjectAddressSet(addr,class_id,object_id) ObjectAddressSubSet(addr, class_id, object_id, 0)
#define SO_MAX_PACING_RATE 47
#define __SVE_PREG_OFFSET(vq,n) (__SVE_PREGS_OFFSET(vq) + __SVE_PREG_SIZE(vq) * (n))
#define ARR_OVERHEAD_WITHNULLS(ndims,nitems) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims) + ((nitems) + 7) / 8)
#define __sve_vl_valid(vl) ((vl) % __SVE_VQ_BYTES == 0 && (vl) >= __SVE_VL_MIN && (vl) <= __SVE_VL_MAX)
#define TIMEARRAYOID 1183
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define ERRCODE_INVALID_TABLE_DEFINITION MAKE_SQLSTATE('4','2','P','1','6')
#define DEFAULT_LOCKMETHOD 1
#define SVE_VL_MIN __SVE_VL_MIN
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define IsolationUsesXactSnapshot() (XactIsoLevel >= XACT_REPEATABLE_READ)
#define _POSIX_V7_ILP32_OFFBIG -1
#define PRIiLEAST8 "i"
#define FirstNormalFullTransactionId FullTransactionIdFromEpochAndXid(0, FirstNormalTransactionId)
#define ELIBBAD 80
#define USE_PAM 1
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define TYPTYPE_COMPOSITE 'c'
#define fcGetArgValue(fc,n) ((fc)->args[n].value)
#define _CS_V7_ENV _CS_V7_ENV
#define ESTRPIPE 86
#define __glibc_clang_prereq(maj,min) 0
#define ERRCODE_STATEMENT_TOO_COMPLEX MAKE_SQLSTATE('5','4','0','0','1')
#define PF_INET 2
#define _SC_SIGNALS _SC_SIGNALS
#define TIMESTAMP_IS_NOEND(j) ((j) == DT_NOEND)
#define ECONNREFUSED 111
#define si_call_addr _sifields._sigsys._call_addr
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ATTRIBUTE_IDENTITY_BY_DEFAULT 'd'
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define atooid(x) ((Oid) strtoul((x), NULL, 10))
#define Anum_pg_publication_pubupdate 6
#define SCNi32 "i"
#define _RWLOCK_INTERNAL_H 
#define UINT_FAST8_WIDTH 8
#define SCNxFAST8 "hhx"
#define FRAMEOPTION_ROWS 0x00004
#define UINT16_MAX (65535)
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define FRAMEOPTION_GROUPS 0x00008
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define IPV6_MINHOPCOUNT 73
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define PF_MPLS 28
#define POLYGONARRAYOID 1027
#define WORKER_MANAGER_H 
#define PG_LSNOID 3220
#define __USE_XOPEN_EXTENDED 1
#define XLogIsNeeded() (wal_level >= WAL_LEVEL_REPLICA)
#define InvalidPid (-1)
#define _POSIX_TRACE_LOG -1
#define __INT16_C(c) c
#define HeapTupleHeaderSetXmin(tup,xid) ( (tup)->t_choice.t_heap.t_xmin = (xid) )
#define PF_RXRPC 33
#define __ARM_ARCH_ISA_A64 1
#define MemSetLoop(start,val,len) do { long * _start = (long *) (start); long * _stop = (long *) ((char *) _start + (Size) (len)); while (_start < _stop) *_start++ = 0; } while (0)
#define INDOPTION_NULLS_FIRST 0x0002
#define _SC_THREADS _SC_THREADS
#define TIMEZONE_GLOBAL timezone
#define pg_attribute_format_arg(a) __attribute__((format_arg(a)))
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SIG_IGN ((__sighandler_t) 1)
#define EREMOTEIO 121
#define INVALID_CITUS_INTERNAL_BACKEND_GPID 0
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define ENFILE 23
#define RESUME_CANCEL_INTERRUPTS() do { Assert(QueryCancelHoldoffCount > 0); QueryCancelHoldoffCount--; } while(0)
#define ERRCODE_FDW_DYNAMIC_PARAMETER_VALUE_NEEDED MAKE_SQLSTATE('H','V','0','0','2')
#define ACL_N_SIZE(N) (ARR_OVERHEAD_NONULLS(1) + ((N) * sizeof(AclItem)))
#define Natts_pg_publication 9
#define _NETINET_IN_H 1
#define Anum_pg_class_relname 2
#define __PTRDIFF_TYPE__ long int
#define ERRCODE_SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION MAKE_SQLSTATE('4','2','0','0','0')
#define PARAMS_H 
#define IP_UNICAST_IF 50
#define AccessExclusiveLock 8
#define DT_LNK DT_LNK
#define __LC_IDENTIFICATION 12
#define EADV 68
#define FLEXIBLE_ARRAY_MEMBER 
#define XACT_XINFO_HAS_GID (1U << 7)
#define ANYMULTIRANGEOID 4537
#define pg_nextpower2_size_t(num) pg_nextpower2_64(num)
#define VARATT_NOT_PAD_BYTE(PTR) (*((uint8 *) (PTR)) != 0)
#define PF_ATMPVC 8
#define CATALOG_VERSION_NO 202107181
#define _BITS_STAT_H 1
#define InitFunctionCallInfoData(Fcinfo,Flinfo,Nargs,Collation,Context,Resultinfo) do { (Fcinfo).flinfo = (Flinfo); (Fcinfo).context = (Context); (Fcinfo).resultinfo = (Resultinfo); (Fcinfo).fncollation = (Collation); (Fcinfo).isnull = false; (Fcinfo).nargs = (Nargs); } while (0)
#define PG_HAVE_ATOMIC_CLEAR_FLAG 
#define PG_GETARG_VARCHAR_P_SLICE(n,a,b) DatumGetVarCharPSlice(PG_GETARG_DATUM(n),a,b)
#define HEAP_KEYS_UPDATED 0x2000
#define __ARM_PCS_AAPCS64 1
#define PG_DDL_COMMANDOID 32
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define InvalidSubTransactionId ((SubTransactionId) 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define EAI_SERVICE -8
#define INTSTYLE_ISO_8601 3
#define ENOPKG 65
#define FKCONSTR_ACTION_RESTRICT 'r'
#define RELKIND_TOASTVALUE 't'
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define AF_X25 PF_X25
#define Anum_pg_type_typtype 7
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define ERRCODE_FDW_INVALID_USE_OF_NULL_POINTER MAKE_SQLSTATE('H','V','0','0','9')
#define PageGetPageSize(page) ((Size) (((PageHeader) (page))->pd_pagesize_version & (uint16) 0xFF00))
#define MaxBlockNumber ((BlockNumber) 0xFFFFFFFE)
#define GUC_UNIT_XBLOCKS 0x3000
#define EXFULL 54
#define ERRCODE_OPERATOR_INTERVENTION MAKE_SQLSTATE('5','7','0','0','0')
#define __UINTPTR_TYPE__ long unsigned int
#define IS_DUMMY_APPEND(p) (IsA((p), AppendPath) && ((AppendPath *) (p))->subpaths == NIL)
#define CLD_KILLED CLD_KILLED
#define _STATBUF_ST_RDEV 
#define HEAP_INSERT_FROZEN TABLE_INSERT_FROZEN
#define BKI_LOOKUP(catalog) 
#define SO_RCVTIMEO_NEW 66
#define __SVE_NUM_PREGS 16
#define SOL_AAL 265
#define SHUT_RD SHUT_RD
#define VARLENA_EXTSIZE_BITS 30
#define O_PATH __O_PATH
#define _SC_FIFO _SC_FIFO
#define __BITS_SOCKET_H 
#define HEAP_INSERT_NO_LOGICAL TABLE_INSERT_NO_LOGICAL
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define TIMESTAMP_END_JULIAN (109203528)
#define _DIRENT_HAVE_D_TYPE 
#define _SC_SPAWN _SC_SPAWN
#define BLOCK_H 
#define Anum_pg_type_typisdefined 10
#define VARCHARARRAYOID 1015
#define SizeOfPageHeaderData (offsetof(PageHeaderData, pd_linp))
#define ERRCODE_INVALID_INDICATOR_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','1','0')
#define SCNoLEAST64 __PRI64_PREFIX "o"
#define ERRCODE_NAME_TOO_LONG MAKE_SQLSTATE('4','2','6','2','2')
#define FLOAT8ARRAYOID 1022
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define REGCONFIGOID 3734
#define TIMESTAMP_MASK(b) (1 << (b))
#define ERRCODE_INVALID_FUNCTION_DEFINITION MAKE_SQLSTATE('4','2','P','1','3')
#define PG_UINT8_MAX (0xFF)
#define SIG_SETMASK 2
#define pg_compiler_barrier() pg_compiler_barrier_impl()
#define __FP_FAST_FMAF32x 1
#define INTERVAL_FULL_PRECISION (0xFFFF)
#define IPV6_MULTICAST_ALL 29
#define PRIo16 "o"
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define HTEqualStrategyNumber 1
#define _POSIX_OPEN_MAX 20
#define HAVE_GCC__SYNC_CHAR_TAS 1
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define ERRCODE_TRIM_ERROR MAKE_SQLSTATE('2','2','0','2','7')
#define UInt16GetDatum(X) ((Datum) (X))
#define FIELDNO_HEAPTUPLEDATA_DATA 3
#define REFCURSOROID 1790
#define RTContainedByStrategyNumber 8
#define PG_TEMP_FILES_DIR "pgsql_tmp"
#define __FLT128_DECIMAL_DIG__ 36
#define ERRCODE_SUBSTRING_ERROR MAKE_SQLSTATE('2','2','0','1','1')
#define LOG_DESTINATION_CSVLOG 8
#define FIELDNO_EXPRCONTEXT_INNERTUPLE 2
#define ERRCODE_E_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('3','8','0','0','3')
#define PG_HAS_OPCLASS_OPTIONS() has_fn_opclass_options(fcinfo->flinfo)
#define MemoryContextCopyAndSetIdentifier(cxt,id) MemoryContextSetIdentifier(cxt, MemoryContextStrdup(cxt, id))
#define HTMaxStrategyNumber 1
#define MEMUTILS_H 
#define ENOTUNIQ 76
#define _PWD_H 1
#define list_make1(x1) list_make1_impl(T_List, list_make_ptr_cell(x1))
#define list_make2(x1,x2) list_make2_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2))
#define list_make3(x1,x2,x3) list_make3_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3))
#define list_make4(x1,x2,x3,x4) list_make4_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3), list_make_ptr_cell(x4))
#define list_make5(x1,x2,x3,x4,x5) list_make5_impl(T_List, list_make_ptr_cell(x1), list_make_ptr_cell(x2), list_make_ptr_cell(x3), list_make_ptr_cell(x4), list_make_ptr_cell(x5))
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define PRIo32 "o"
#define EOHPGetRWDatum(eohptr) PointerGetDatum((eohptr)->eoh_rw_ptr)
#define ERRCODE_WARNING_IMPLICIT_ZERO_BIT_PADDING MAKE_SQLSTATE('0','1','0','0','8')
#define NotifyQueueTailLock (&MainLWLockArray[47].lock)
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define ERRCODE_INVALID_SQL_JSON_SUBSCRIPT MAKE_SQLSTATE('2','2','0','3','3')
#define VARATT_SHORT_MAX 0x7F
#define PRIoMAX __PRI64_PREFIX "o"
#define __FLT_MIN_10_EXP__ (-37)
#define PG_RETURN_VOID() return (Datum) 0
#define TYPALIGN_CHAR 'c'
#define SOL_ALG 279
#define SHUT_WR SHUT_WR
#define AT_EMPTY_PATH 0x1000
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define __FLT16_DECIMAL_DIG__ 5
#define __S_IFMT 0170000
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define __INT_LEAST64_WIDTH__ 64
#define INT_LEAST16_MAX (32767)
#define Anum_pg_index_indisunique 5
#define PRIoLEAST8 "o"
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 95
#define _GNU_SOURCE 1
#define _POSIX_SAVED_IDS 1
#define SAFE_STR_PASSWORD_MAX_LENGTH ( 32 )
#define NUM_BUFFER_PARTITIONS 128
#define Natts_pg_index 20
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define TTS_IS_VIRTUAL(slot) ((slot)->tts_ops == &TTSOpsVirtual)
#define PG_DIAG_SEVERITY_NONLOCALIZED 'V'
#define Anum_pg_authid_rolbypassrls 9
#define IsPolymorphicType(typid) (IsPolymorphicTypeFamily1(typid) || IsPolymorphicTypeFamily2(typid))
#define __POSIX_FADV_DONTNEED 4
#define NI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("NI_IDN_USE_STD3_ASCII_RULES is deprecated") 128
#define PG_DIAG_CONSTRAINT_NAME 'n'
#define PageClearFull(page) (((PageHeader) (page))->pd_flags &= ~PD_PAGE_FULL)
#define PRIo64 __PRI64_PREFIX "o"
#define PG_CLASS_H 
#define PRIXFAST16 __PRIPTR_PREFIX "X"
#define AttributeRelidNameIndexId 2658
#define DAYS_PER_YEAR 365.25
#define FIELDNO_EXPRCONTEXT_CASENULL 11
#define SerializablePredicateListLock (&MainLWLockArray[30].lock)
#define IndexIndrelidIndexId 2678
#define d_fileno d_ino
#define TYPCATEGORY_DATETIME 'D'
#define __ATOMIC_ACQ_REL 4
#define __U32_TYPE unsigned int
#define XLOG_INCLUDE_ORIGIN 0x01
#define ALLOCSET_DEFAULT_SIZES ALLOCSET_DEFAULT_MINSIZE, ALLOCSET_DEFAULT_INITSIZE, ALLOCSET_DEFAULT_MAXSIZE
#define HAVE_SYS_SELECT_H 1
#define _STDLIB_H 1
#define PG_GETARG_RAW_VARLENA_P(n) ((struct varlena *) PG_GETARG_POINTER(n))
#define IP_RECVERR_RFC4884 26
#define _T_WCHAR 
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define Anum_pg_index_indclass 17
#define _BITS_FLOATN_COMMON_H 
#define IP_UNBLOCK_SOURCE 37
#define Anum_pg_publication_oid 1
#define IPV6_RTHDR_TYPE_0 0
#define CppAsString(identifier) #identifier
#define IP_RECVTTL 12
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define si_timerid _sifields._timer.si_tid
#define _BITS_SIGEVENT_CONSTS_H 1
#define __FLT32X_MAX_EXP__ 1024
#define ____sigset_t_defined 
#define TRANSACTION_STATUS_ABORTED 0x02
#define ClassNameNspIndexId 2663
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define SVE_SIG_ZREGS_SIZE(vq) __SVE_ZREGS_SIZE(vq)
#define DatumIsReadWriteExpandedObject(d,isnull,typlen) (((isnull) || (typlen) != -1) ? false : VARATT_IS_EXTERNAL_EXPANDED_RW(DatumGetPointer(d)))
#define HAS_TEST_AND_SET 
#define RINFO_IS_PUSHED_DOWN(rinfo,joinrelids) ((rinfo)->is_pushed_down || !bms_is_subset((rinfo)->required_relids, joinrelids))
#define O_NOCTTY 0400
#define LONGALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_LONG, (LEN))
#define HeapTupleHeaderSetXminInvalid(tup) ( AssertMacro(!HeapTupleHeaderXminCommitted(tup)), ((tup)->t_infomask |= HEAP_XMIN_INVALID) )
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define _WALSENDER_H 
#define ROLE_PG_READ_ALL_STATS 3375
#define SHM_MQ_H 
#define NO_ADDRESS NO_DATA
#define _STDBOOL_H 
#define __ARM_SIZEOF_WCHAR_T 4
#define PG_PAGE_LAYOUT_VERSION 4
#define HAVE_STRING_H 1
#define __ATOMIC_ACQUIRE 2
#define RTMaxStrategyNumber 30
#define Anum_pg_dist_partition_partmethod 2
#define RELKIND_MATVIEW 'm'
#define GAI_WAIT 0
#define IP_DEFAULT_MULTICAST_TTL 1
#define INSTR_TIME_SET_ZERO(t) ((t).tv_sec = 0, (t).tv_nsec = 0)
#define __ARM_FEATURE_UNALIGNED 1
#define ANYRANGEOID 3831
#define PG_INDEX_H 
#define PRIXFAST64 __PRI64_PREFIX "X"
#define ATTNUM_H 
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SEGV_MTEAERR SEGV_MTEAERR
#define __GCC_IEC_559_COMPLEX 2
#define PRIXLEAST16 "X"
#define VARATT_IS_EXTERNAL_ONDISK(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_ONDISK)
#define LOG_DESTINATION_SYSLOG 2
#define DECLARE_FOREIGN_KEY(cols,reftbl,refcols) extern int no_such_variable
#define __uid_t_defined 
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define __UINT_LEAST8_TYPE__ unsigned char
#define EUNATCH 49
#define SOL_ATM 264
#define _SETJMP_H 1
#define MemoryContextIsValid(context) ((context) != NULL && (IsA((context), AllocSetContext) || IsA((context), SlabContext) || IsA((context), GenerationContext)))
#define WL_SOCKET_CONNECTED WL_SOCKET_WRITEABLE
#define INT_LEAST16_MIN (-32767-1)
#define USE_ICU 1
#define LWLOCK_H 
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define AF_RDS PF_RDS
#define __flexarr []
#define _SC_LINE_MAX _SC_LINE_MAX
#define SEGV_PKUERR SEGV_PKUERR
#define PATHNODES_H 
#define ACL_TRIGGER_CHR 't'
#define BlockIdCopy(toBlockId,fromBlockId) ( AssertMacro(PointerIsValid(toBlockId)), AssertMacro(PointerIsValid(fromBlockId)), (toBlockId)->bi_hi = (fromBlockId)->bi_hi, (toBlockId)->bi_lo = (fromBlockId)->bi_lo )
#define _BITS_SETJMP_H 1
#define _POSIX_PRIORITIZED_IO 200809L
#define PG_DETOAST_DATUM_SLICE(datum,f,c) pg_detoast_datum_slice((struct varlena *) DatumGetPointer(datum), (int32) (f), (int32) (c))
#define PG_INT32_MAX (0x7FFFFFFF)
#define __stub_fchflags 
#define PG_RETURN_OID(x) return ObjectIdGetDatum(x)
#define SVE_NUM_ZREGS __SVE_NUM_ZREGS
#define SK_ROW_MEMBER 0x0008
#define __INTMAX_C(c) c ## L
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define IS_DIR_SEP(ch) ((ch) == '/')
#define REMOTE_COMMAND_H 
#define _BITS_TIME_H 1
#define O_ACCMODE 0003
#define ERRCODE_NO_DATA MAKE_SQLSTATE('0','2','0','0','0')
#define ERRCODE_INVALID_XML_COMMENT MAKE_SQLSTATE('2','2','0','0','S')
#define SizeofHeapTupleHeader offsetof(HeapTupleHeaderData, t_bits)
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __FSWORD_T_TYPE __SWORD_TYPE
#define SIG_HOLD ((__sighandler_t) 2)
#define AF_XDP PF_XDP
#define ACCEPT_TYPE_ARG3 socklen_t
#define FIOGETOWN 0x8903
#define ERRCODE_UNDEFINED_OBJECT MAKE_SQLSTATE('4','2','7','0','4')
#define EAFNOSUPPORT 97
#define ERRCODE_DATATYPE_MISMATCH MAKE_SQLSTATE('4','2','8','0','4')
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ERRCODE_INVALID_ARGUMENT_FOR_LOG MAKE_SQLSTATE('2','2','0','1','E')
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
#define EEXIST 17
#define ACCEPT_TYPE_RETURN int
#define INSTR_TIME_ACCUM_DIFF(x,y,z) do { (x).tv_sec += (y).tv_sec - (z).tv_sec; (x).tv_nsec += (y).tv_nsec - (z).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define VARBITOID 1562
#define USE_LIBXML 1
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define _XOPEN_UNIX 1
#define IPV6_PMTUDISC_INTERFACE 4
#define PG_DIAG_MESSAGE_PRIMARY 'M'
#define DELAYTIMER_MAX 2147483647
#define Anum_pg_attribute_attinhcount 21
#define SYNCHRONOUS_COMMIT_ON SYNCHRONOUS_COMMIT_REMOTE_FLUSH
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define DT_WHT DT_WHT
#define TTS_IS_HEAPTUPLE(slot) ((slot)->tts_ops == &TTSOpsHeapTuple)
#define Anum_pg_class_relrewrite 28
#define INT16_C(c) c
#define XLR_INFO_MASK 0x0F
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define NUM_ATOMICS_SEMAPHORES 64
#define _SC_2_C_DEV _SC_2_C_DEV
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define LockHashPartitionLock(hashcode) (&MainLWLockArray[LOCK_MANAGER_LWLOCK_OFFSET + LockHashPartition(hashcode)].lock)
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK2 2
#define HAVE_SECURITY_PAM_APPL_H 1
#define boolVal(v) intVal(v)
#define EXIT_FAILURE 1
#define ENOEXEC 8
#define INT8_MAX (127)
#define CLD_TRAPPED CLD_TRAPPED
#define DEBUG4 11
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define ACLITEM_ALL_PRIV_BITS ((AclMode) 0xFFFF)
#define ALLOCSET_START_SMALL_SIZES ALLOCSET_SMALL_MINSIZE, ALLOCSET_SMALL_INITSIZE, ALLOCSET_DEFAULT_MAXSIZE
#define ERRCODE_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','1')
#define SizeofMinimalTupleHeader offsetof(MinimalTupleData, t_bits)
#define FRAMEOPTION_BETWEEN 0x00010
#define MQ_PRIO_MAX 32768
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define vsnprintf pg_vsnprintf
#define _GETOPT_POSIX_H 1
#define ERRCODE_TOO_MANY_ROWS MAKE_SQLSTATE('P','0','0','0','3')
#define PIV_REPORT_STAT (1 << 1)
#define LC_ALL __LC_ALL
#define _XOPEN_SOURCE 700
#define UINT_LEAST32_WIDTH 32
#define EILSEQ 84
#define TTS_FLAG_SHOULDFREE (1 << 2)
#define ERRCODE_INVALID_TRANSACTION_INITIATION MAKE_SQLSTATE('0','B','0','0','0')
#define fcSetArg(fc,n,value) fcSetArgExt(fc, n, value, false)
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define ESPIPE 29
#define NUMMULTIRANGEOID 4532
#define _POSIX_TTY_NAME_MAX 9
#define __USE_LARGEFILE 1
#define SI_DETHREAD SI_DETHREAD
#define HeapTupleHeaderSetDatumLength(tup,len) SET_VARSIZE(tup, len)
#define AUTOVACUUM_H 
#define __OFF_T_MATCHES_OFF64_T 1
#define standard_ProcessUtility_compat(a,b,c,d,e,f,g,h) standard_ProcessUtility(a, b, c, d, e, f, g, h)
#define SET_LOCKTAG_OBJECT(locktag,dboid,classoid,objoid,objsubid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (classoid), (locktag).locktag_field3 = (objoid), (locktag).locktag_field4 = (objsubid), (locktag).locktag_type = LOCKTAG_OBJECT, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define iscntrl(c) __isctype((c), _IScntrl)
#define list_make5_int(x1,x2,x3,x4,x5) list_make5_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3), list_make_int_cell(x4), list_make_int_cell(x5))
#define RelationCreateStorage_compat(a,b,c) RelationCreateStorage(a, b)
#define ARR_LBOUND(a) ((int *) (((char *) (a)) + sizeof(ArrayType) + sizeof(int) * ARR_NDIM(a)))
#define AssertTransactionIdInAllowableRange(xid) ((void)true)
#define OPEN_DATASYNC_FLAG O_DSYNC
#define PRIdMAX __PRI64_PREFIX "d"
#define __WCHAR_MAX__ 0xffffffffU
#define AF_APPLETALK PF_APPLETALK
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define SOL_PPPOL2TP 273
#define AF_IB PF_IB
#define ERRCODE_ARRAY_ELEMENT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define SO_NETNS_COOKIE 71
#define INT16_MAX (32767)
#define PG_BRIN_MINMAX_MULTI_SUMMARYOID 4601
#define LANGUAGE_HANDLEROID 2280
#define IPV6_NEXTHOP 9
#define relpathbackend(rnode,backend,forknum) GetRelationPath((rnode).dbNode, (rnode).spcNode, (rnode).relNode, backend, forknum)
#define PG_RETURN_TEXT_P(x) PG_RETURN_POINTER(x)
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define MEMNODES_H 
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define AF_MCTP PF_MCTP
#define HAVE_PG_ATTRIBUTE_NORETURN 1
#define __S_IREAD 0400
#define BOXARRAYOID 1020
#define ADJ_ESTERROR 0x0008
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define NUMERICOID 1700
#define Anum_pg_index_indexrelid 1
#define HEAP_NATTS_MASK 0x07FF
#define LIBPQ_FE_H 
#define RMGR_H 
#define FRAMEOPTION_EXCLUDE_CURRENT_ROW 0x08000
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define F_GETOWN_EX __F_GETOWN_EX
#define PD_HAS_FREE_LINES 0x0001
#define ERRCODE_FOREIGN_KEY_VIOLATION MAKE_SQLSTATE('2','3','5','0','3')
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define BKPBLOCK_FORK_MASK 0x0F
#define FKCONSTR_ACTION_CASCADE 'c'
#define ALLOCSET_DEFAULT_INITSIZE (8 * 1024)
#define PACKAGE_STRING "PostgreSQL 14.5"
#define _IOFBF 0
#define ERRCODE_DUPLICATE_DATABASE MAKE_SQLSTATE('4','2','P','0','4')
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define INTERVALARRAYOID 1187
#define ERRCODE_DATABASE_DROPPED MAKE_SQLSTATE('5','7','P','0','4')
#define VARBITARRAYOID 1563
#define pg_prevent_errno_in_scope() int __errno_location pg_attribute_unused()
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define FIELDNO_TUPLETABLESLOT_FLAGS 1
#define ERRCODE_INVALID_SCHEMA_NAME MAKE_SQLSTATE('3','F','0','0','0')
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define RowMarkRequiresRowShareLock(marktype) ((marktype) <= ROW_MARK_KEYSHARE)
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#define SO_SELECT_ERR_QUEUE 45
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define SIGXCPU 24
#define XLogLogicalInfoActive() (wal_level >= WAL_LEVEL_LOGICAL)
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 1
#define VARATT_IS_1B_E(PTR) ((((varattrib_1b *) (PTR))->va_header) == 0x01)
#define F_GETPIPE_SZ 1032
#define __FLT128_HAS_QUIET_NAN__ 1
#define Anum_pg_type_typanalyze 22
#define lengthof(array) (sizeof (array) / sizeof ((array)[0]))
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define SLIST_STATIC_INIT(name) {{NULL}}
#define PG_CLASSARRAYOID 273
#define AI_NUMERICSERV 0x0400
#define ItemPointerSetOffsetNumber(pointer,offsetNumber) ( AssertMacro(PointerIsValid(pointer)), (pointer)->ip_posid = (offsetNumber) )
#define FNONBLOCK O_NONBLOCK
#define XATTR_SIZE_MAX 65536
#define HAVE_POLL_H 1
#define HEAP_XMAX_SHR_LOCK (HEAP_XMAX_EXCL_LOCK | HEAP_XMAX_KEYSHR_LOCK)
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define MAX_TIMESTAMP_PRECISION 6
#define ANYELEMENTOID 2283
#define CharGetDatum(X) ((Datum) (X))
#define TABLESPACE_MAP "tablespace_map"
#define lfourth_int(l) lfirst_int(list_nth_cell(l, 3))
#define MaxTransactionIdAttributeNumber (-4)
#define HAVE_LIBREADLINE 1
#define ILL_BADIADDR ILL_BADIADDR
#define QUERYENVIRONMENT_H 
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define PG_RETURN_TIMESTAMPTZ(x) return TimestampTzGetDatum(x)
#define CONNECTION_MANAGMENT_H 
#define VA_ARGS_NARGS(...) VA_ARGS_NARGS_(__VA_ARGS__, 63,62,61,60, 59,58,57,56,55,54,53,52,51,50, 49,48,47,46,45,44,43,42,41,40, 39,38,37,36,35,34,33,32,31,30, 29,28,27,26,25,24,23,22,21,20, 19,18,17,16,15,14,13,12,11,10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#define PG_COPYRES_ATTRS 0x01
#define EOWNERDEAD 130
#define _PROC_H_ 
#define HEAP_XMAX_IS_EXCL_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_EXCL_LOCK)
#define RELAY_UTILITY_H 
#define TSMULTIRANGEOID 4533
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define HAVE_PTHREAD 1
#define HeapTupleHeaderGetTypMod(tup) ( (tup)->t_choice.t_datum.datum_typmod )
#define SHUT_RDWR SHUT_RDWR
#define POLL_MSG POLL_MSG
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define PG_HAVE_ATOMIC_READ_U64 
#define INT16_MIN (-32767-1)
#define SIZEOF_BOOL 1
#define HAVE_ASN1_STRING_GET0_DATA 1
#define __FINITE_MATH_ONLY__ 0
#define si_overrun _sifields._timer.si_overrun
#define __sig_atomic_t_defined 1
#define PageGetMaxOffsetNumber(page) (((PageHeader) (page))->pd_lower <= SizeOfPageHeaderData ? 0 : ((((PageHeader) (page))->pd_lower - SizeOfPageHeaderData) / sizeof(ItemIdData)))
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define ERRCODE_E_R_I_E_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('3','9','0','0','4')
#define PG_RETURN_FLOAT8(x) return Float8GetDatum(x)
#define ERRCODE_INVALID_NAME MAKE_SQLSTATE('4','2','6','0','2')
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define MOD_TIMECONST ADJ_TIMECONST
#define PG_INDEX_D_H 
#define planner_subplan_get_plan(root,subplan) ((Plan *) list_nth((root)->glob->subplans, (subplan)->plan_id - 1))
#define CSTRINGARRAYOID 1263
#define TransactionIdStore(xid,dest) (*(dest) = (xid))
#define AmArchiverProcess() (MyAuxProcType == ArchiverProcess)
#define EBADE 52
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define FALLOC_FL_ZERO_RANGE 0x10
#define EBADR 53
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define STA_PPSERROR 0x0800
#define XLR_NORMAL_RDATAS 20
#define __pid_t_defined 
#define EL2NSYNC 45
#define ERANGE 34
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define ECANCELED 125
#define TYPTYPE_DOMAIN 'd'
#define InvalidDsaPointer ((dsa_pointer) 0)
#define pg_attribute_hot __attribute__((hot))
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof (elf_greg_t))
#define PROC_IN_VACUUM 0x02
#define SCM_SRCRT IPV6_RXSRCRT
#define MaxAllocHugeSize (SIZE_MAX / 2)
#define TRANSACTION_STATUS_SUB_COMMITTED 0x03
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define _THREAD_MUTEX_INTERNAL_H 1
#define __LDBL_REDIR1(name,proto,alias) name proto
#define MSG_MORE MSG_MORE
#define ERRCODE_EXTERNAL_ROUTINE_EXCEPTION MAKE_SQLSTATE('3','8','0','0','0')
#define __size_t 
#define EOF (-1)
#define NGROUPS_MAX 65536
#define RelationGetNumberOfAttributes(relation) ((relation)->rd_rel->relnatts)
#define INT_FAST8_MAX (127)
#define MOD_STATUS ADJ_STATUS
#define UNIX_EPOCH_JDATE 2440588
#define GUC_LIST_QUOTE 0x0002
#define SO_INCOMING_NAPI_ID 56
#define ETXTBSY 26
#define LOCK_LOCKTAG(lock) ((LockTagType) (lock).tag.locktag_type)
#define HEAP_HASNULL 0x0001
#define RELPATH_H 
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define Anum_pg_authid_rolinherit 4
#define AmBootstrapProcess() (MyAuxProcType == BootstrapProcess)
#define Anum_pg_type_typsend 19
#define NSIG _NSIG
#define att_align_pointer(cur_offset,attalign,attlen,attptr) ( ((attlen) == -1 && VARATT_NOT_PAD_BYTE(attptr)) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define RTOverRightStrategyNumber 4
#define AuthIdOidIndexId 2677
#define EAI_INPROGRESS -100
#define MSG_PEEK MSG_PEEK
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define EAI_CANCELED -101
#define htobe16(x) __bswap_16 (x)
#define ERRCODE_INVALID_FOREIGN_KEY MAKE_SQLSTATE('4','2','8','3','0')
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define __SHRT_MAX__ 0x7fff
#define Anum_pg_type_typinput 16
#define STA_UNSYNC 0x0040
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define USE_SYSTEMD 1
#define ILL_ILLOPC ILL_ILLOPC
#define __ARM_FEATURE_IDIV 1
#define ILL_ILLOPN ILL_ILLOPN
#define Anum_pg_type_typcategory 8
#define Anum_pg_type_typbyval 6
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define __FLT64X_MAX_10_EXP__ 4932
#define PG_SNAPSHOTARRAYOID 5039
#define SIGTTOU 22
#define DEST_H 
#define AllocHugeSizeIsValid(size) ((Size) (size) <= MaxAllocHugeSize)
#define EXEC_FLAG_BACKWARD 0x0004
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define __clockid_t_defined 1
#define Anum_pg_type_typdelim 11
#define __LDBL_IS_IEC_60559__ 2
#define SO_RCVTIMEO_OLD 20
#define __CHAR32_TYPE__ unsigned int
#define HeapTupleHeaderSetMovedPartitions(tup) ItemPointerSetMovedPartitions(&(tup)->t_ctid)
#define IPV6_HDRINCL 36
#define NSS_BUFLEN_PASSWD 1024
#define HeapTupleHeaderGetXmin(tup) ( HeapTupleHeaderXminFrozen(tup) ? FrozenTransactionId : HeapTupleHeaderGetRawXmin(tup) )
#define SerializableXactHashLock (&MainLWLockArray[28].lock)
#define TAS_SPIN(lock) TAS(lock)
#define ERRCODE_TRANSACTION_RESOLUTION_UNKNOWN MAKE_SQLSTATE('0','8','0','0','7')
#define _POSIX2_BC_BASE_MAX 99
#define ReplicationSlotControlLock (&MainLWLockArray[37].lock)
#define HAVE_DECL_PWRITEV 1
#define do_text_output_oneline(tstate,str_to_emit) do { Datum values_[1]; bool isnull_[1]; values_[0] = PointerGetDatum(cstring_to_text(str_to_emit)); isnull_[0] = false; do_tup_output(tstate, values_, isnull_); pfree(DatumGetPointer(values_[0])); } while (0)
#define PageSetLSN(page,lsn) PageXLogRecPtrSet(((PageHeader) (page))->pd_lsn, lsn)
#define ROLE_PG_WRITE_ALL_DATA 6182
#define __LITTLE_ENDIAN 1234
#define RelationGetFillFactor(relation,defaultff) ((relation)->rd_options ? ((StdRdOptions *) (relation)->rd_options)->fillfactor : (defaultff))
#define INDEX_VAR 65002
#define SVE_MAGIC 0x53564501
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define PG_BRIN_BLOOM_SUMMARYOID 4600
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define Anum_pg_index_indcheckxmin 11
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define ItemIdMarkDead(itemId) ( (itemId)->lp_flags = LP_DEAD )
#define htobe64(x) __bswap_64 (x)
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define UINTPTR_WIDTH __WORDSIZE
#define WL_LATCH_SET (1 << 0)
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define PG_DYNSHMEM_MMAP_FILE_PREFIX "mmap."
#define ERRCODE_T_R_DEADLOCK_DETECTED MAKE_SQLSTATE('4','0','P','0','1')
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define INT_FAST8_MIN (-128)
#define _UNISTD_H 1
#define WCHAR_MIN __WCHAR_MIN
#define ERRCODE_E_R_I_E_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','1')
#define ERRCODE_PLPGSQL_ERROR MAKE_SQLSTATE('P','0','0','0','0')
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define ALLOCSET_SMALL_MAXSIZE (8 * 1024)
#define PG_USE_STDBOOL 1
#define SCNo16 "ho"
#define ____gwchar_t_defined 1
#define XLOGREADER_H 
#define floatVal(v) atof(((Value *)(v))->val.str)
#define HeapTupleClearHeapOnly(tuple) HeapTupleHeaderClearHeapOnly((tuple)->t_data)
#define __UID_T_TYPE __U32_TYPE
#define _POSIX_READER_WRITER_LOCKS 200809L
#define MinSizeOfXactAssignment offsetof(xl_xact_assignment, xsub)
#define __AARCH64_CMODEL_SMALL__ 1
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define HAVE_GETIFADDRS 1
#define _POSIX_AIO_MAX 1
#define OffsetNumberIsValid(offsetNumber) ((bool) ((offsetNumber != InvalidOffsetNumber) && (offsetNumber <= MaxOffsetNumber)))
#define INT_FAST32_WIDTH __WORDSIZE
#define SO_WIFI_STATUS 41
#define HAVE_LDAP_INITIALIZE 1
#define NETDB_SUCCESS 0
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define BGWORKER_CLASS_PARALLEL 0x0010
#define __LDBL_MAX_EXP__ 16384
#define SCNo32 "o"
#define Anum_pg_index_indisreplident 14
#define PRIMNODES_H 
#define ENOTEMPTY 39
#define is_absolute_path(filename) ( IS_DIR_SEP((filename)[0]) )
#define UINT_FAST16_MAX (18446744073709551615UL)
#define PG_PROCARRAYOID 272
#define ROLE_PG_SIGNAL_BACKEND 4200
#define INTSTYLE_POSTGRES_VERBOSE 1
#define foreach_ptr_append(var,l) for (int var ## PositionDoNotUse = 0; (var ## PositionDoNotUse) < list_length(l) && (((var) = list_nth(l, var ## PositionDoNotUse)) || true); var ## PositionDoNotUse ++)
#define __WINT_MIN__ 0U
#define REGBUF_STANDARD 0x08
#define GROUPING_CAN_USE_SORT 0x0001
#define HEAP_XMAX_KEYSHR_LOCK 0x0010
#define _SC_SHELL _SC_SHELL
#define ACL_ALL_RIGHTS_LARGEOBJECT (ACL_SELECT|ACL_UPDATE)
#define printf(...) pg_printf(__VA_ARGS__)
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define SECS_PER_MINUTE 60
#define PG_GETARG_FLOAT4(n) DatumGetFloat4(PG_GETARG_DATUM(n))
#define PG_MODULE_MAGIC_DATA { sizeof(Pg_magic_struct), PG_VERSION_NUM / 100, FUNC_MAX_ARGS, INDEX_MAX_KEYS, NAMEDATALEN, FLOAT8PASSBYVAL }
#define __linux__ 1
#define F_SEAL_WRITE 0x0008
#define IndexInfoFindDataOffset(t_info) ( (!((t_info) & INDEX_NULL_MASK)) ? ( (Size)MAXALIGN(sizeof(IndexTupleData)) ) : ( (Size)MAXALIGN(sizeof(IndexTupleData) + sizeof(IndexAttributeBitMapData)) ) )
#define DatumGetBpCharPSlice(X,m,n) ((BpChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define RELSCAN_H 
#define att_isnull(ATT,BITS) (!((BITS)[(ATT) >> 3] & (1 << ((ATT) & 0x07))))
#define ERRCODE_AMBIGUOUS_FUNCTION MAKE_SQLSTATE('4','2','7','2','5')
#define AF_NETROM PF_NETROM
#define TransactionIdAdvance(dest) do { (dest)++; if ((dest) < FirstNormalTransactionId) (dest) = FirstNormalTransactionId; } while(0)
#define SO_BPF_EXTENSIONS 48
#define HeapTupleHeaderGetSpeculativeToken(tup) ( AssertMacro(HeapTupleHeaderIsSpeculative(tup)), ItemPointerGetBlockNumber(&(tup)->t_ctid) )
#define REGBUF_FORCE_IMAGE 0x01
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define MOD_CLKB ADJ_TICK
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define DatumGetByteaPCopy(X) ((bytea *) PG_DETOAST_DATUM_COPY(X))
#define SCNo64 __PRI64_PREFIX "o"
#define _GCC_PTRDIFF_T 
#define ESNOTFND ( 409 )
#define ADJ_MAXERROR 0x0004
#define htonl(x) __bswap_32 (x)
#define __itimerspec_defined 1
#define HAVE_GCC__SYNC_INT32_TAS 1
#define unix 1
#define htons(x) __bswap_16 (x)
#define IPV6_MTU_DISCOVER 23
#define EAI_NONAME -2
#define _POSIX_AIO_LISTIO_MAX 2
#define _POSIX_SPIN_LOCKS 200809L
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define _SC_SELECT _SC_SELECT
#define PG_FREE_IF_COPY(ptr,n) do { if ((Pointer) (ptr) != PG_GETARG_POINTER(n)) pfree(ptr); } while (0)
#define INTSTYLE_SQL_STANDARD 2
#define REGCOLLATIONARRAYOID 4192
#define DSA_ALLOC_HUGE 0x01
#define SO_REUSEADDR 2
#define Anum_pg_type_typlen 5
#define __WCHAR_MIN__ 0U
#define DatumGetTimestamp(X) ((Timestamp) DatumGetInt64(X))
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _POSIX_SYNCHRONIZED_IO 200809L
#define Anum_pg_authid_rolconnlimit 10
#define ACL_GRANT_OPTION_FOR(privs) (((AclMode) (privs) & 0xFFFF) << 16)
#define RSIZE_MAX_STR ( 4UL << 10 )
#define DATEMULTIRANGEARRAYOID 6155
#define STANDBYDEFS_H 
#define VARATT_IS_SHORT(PTR) VARATT_IS_1B(PTR)
#define PG_UINT16_MAX (0xFFFF)
#define HAVE_LIBCRYPTO 1
#define UINT_WIDTH 32
#define CppConcat(x,y) x ##y
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define SET_VARSIZE_1B(PTR,len) (((varattrib_1b *) (PTR))->va_header = (((uint8) (len)) << 1) | 0x01)
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define SA_ONSTACK 0x08000000
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define F_RDLCK 0
#define PG_BITUTILS_H 
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define O_APPEND 02000
#define __osockaddr_defined 1
#define XACT_XINFO_HAS_ORIGIN (1U << 5)
#define shm_toc_estimate_keys(e,cnt) ((e)->number_of_keys = add_size((e)->number_of_keys, cnt))
#define _SYS_USER_H 1
#define _FORTIFY_SOURCE 2
#define Anum_pg_attribute_attrelid 1
#define __INT8_MAX__ 0x7f
#define DEF_PGPORT 5432
#define GTSVECTOROID 3642
#define PG_GETARG_BYTEA_PP(n) DatumGetByteaPP(PG_GETARG_DATUM(n))
#define XLOG_INCLUDE_XID 0x04
#define PG_DIAG_SOURCE_FUNCTION 'R'
#define _SC_BASE _SC_BASE
#define _BITS_TIMEX_H 1
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _POSIX_LINK_MAX 8
#define AGG_CONTEXT_AGGREGATE 1
#define PointerIsValid(pointer) ((const void*)(pointer) != NULL)
#define VARTAG_IS_EXPANDED(tag) (((tag) & ~1) == VARTAG_EXPANDED_RO)
#define SKEY_H 
#define AF_TIPC PF_TIPC
#define TIDARRAYOID 1010
#define DO_AGGSPLIT_SKIPFINAL(as) (((as) & AGGSPLITOP_SKIPFINAL) != 0)
#define LOCKTAG_LAST_TYPE LOCKTAG_ADVISORY
#define ACL_USAGE_CHR 'U'
#define RangeTableEntryFromNSItem(a) ((a)->p_rte)
#define Anum_pg_attribute_attgenerated 18
#define TABLEAM_H 
#define isblank(c) __isctype((c), _ISblank)
#define _DEFAULT_SOURCE 1
#define _LINUX_POSIX_TYPES_H 
#define SO_MARK 36
#define ACL_CREATE (1<<9)
#define PointerGetDatum(X) ((Datum) (X))
#define HeapTupleHeaderSetHeapOnly(tup) ( (tup)->t_infomask2 |= HEAP_ONLY_TUPLE )
#define __USE_EXTERN_INLINES 1
#define AARR_NDIM(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.ndims : ARR_NDIM((ArrayType *) (a)))
#define Anum_pg_type_typdefault 31
#define HAVE_DECL_RTLD_NOW 1
#define PinTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) IncrTupleDescRefCount(tupdesc); } while (0)
#define OBJECTADDRESS_H 
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define __LOCK_ALIGNMENT 
#define fastgetattr(tup,attnum,tupleDesc,isnull) ( AssertMacro((attnum) > 0), (*(isnull) = false), HeapTupleNoNulls(tup) ? ( TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff >= 0 ? ( fetchatt(TupleDescAttr((tupleDesc), (attnum)-1), (char *) (tup)->t_data + (tup)->t_data->t_hoff + TupleDescAttr((tupleDesc), (attnum)-1)->attcacheoff) ) : nocachegetattr((tup), (attnum), (tupleDesc)) ) : ( att_isnull((attnum)-1, (tup)->t_data->t_bits) ? ( (*(isnull) = true), (Datum)NULL ) : ( nocachegetattr((tup), (attnum), (tupleDesc)) ) ) )
#define _XOPEN_REALTIME_THREADS 1
#define _POSIX_CHILD_MAX 25
#define ETIMEDOUT 110
#define HAVE__BUILTIN_TYPES_COMPATIBLE_P 1
#define ERRCODE_INVALID_AUTHORIZATION_SPECIFICATION MAKE_SQLSTATE('2','8','0','0','0')
#define __USE_GNU_GETTEXT 1
#define BITS_PER_BYTE 8
#define PG_INT64_MAX INT64CONST(0x7FFFFFFFFFFFFFFF)
#define __SI_ERRNO_THEN_CODE 1
#define ExclusiveLock 7
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define TypeNameNspIndexId 2704
#define SetTuplestoreDestReceiverParams_compat(a,b,c,d,e,f) SetTuplestoreDestReceiverParams(a, b, c, d, e, f)
#define ENODATA 61
#define INDEX_SIZE_MASK 0x1FFF
#define PRIuLEAST32 "u"
#define USE_GERMAN_DATES 3
#define DISTRIBUTE_BY_HASH 'h'
#define IPV6_AUTHHDR 10
#define ERRCODE_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('2','2','0','0','4')
#define MAX_RANDOM_VALUE PG_INT32_MAX
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define DN_ACCESS 0x00000001
#define __END_DECLS 
#define WORKER_DEFAULT_RACK "default"
#define FKCONSTR_ACTION_SETNULL 'n'
#define _STATBUF_ST_NSEC 
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG -1
#define __CONCAT(x,y) x ## y
#define Anum_pg_class_relkind 17
#define IPV6_RECVERR_RFC4884 31
#define pgproc_statusflags_compat(pgproc) ((pgproc)->statusFlags)
#define HAVE_COMPUTED_GOTO 1
#define SET_VARTAG_EXTERNAL(PTR,tag) SET_VARTAG_1B_E(PTR, tag)
#define DATEORDER_YMD 0
#define dlist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, dlist_node), (type *) dlist_head_element_off(lhead, offsetof(type, membername)))
#define SizeOfXLogRecord (offsetof(XLogRecord, xl_crc) + sizeof(pg_crc32c))
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define TUPDESC_H 
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _ALLOCA_H 1
#define ACL_SIZE(ACL) ARR_SIZE(ACL)
#define LOCKOPTIONS_H 
#define __SLONG32_TYPE int
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define PG_HAVE_ATOMIC_U32_SUPPORT 
#define _SYS_SELECT_H 1
#define IndexRelationGetNumberOfAttributes(relation) ((relation)->rd_index->indnatts)
#define PRIuLEAST64 __PRI64_PREFIX "u"
#define ERRCODE_COLLATION_MISMATCH MAKE_SQLSTATE('4','2','P','2','1')
#define RelationNeedsWAL(relation) (RelationIsPermanent(relation) && (XLogIsNeeded() || (relation->rd_createSubid == InvalidSubTransactionId && relation->rd_firstRelfilenodeSubid == InvalidSubTransactionId)))
#define HAVE_STDINT_H 1
#define PF_ALG 38
#define _XOPEN_ENH_I18N 1
#define NUM_SPINLOCK_SEMAPHORES 128
#define ERRCODE_INVALID_CATALOG_NAME MAKE_SQLSTATE('3','D','0','0','0')
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define SCOPE_DELIMITER '%'
#define __jmp_buf_tag_defined 1
#define DirectFunctionCall2(func,arg1,arg2) DirectFunctionCall2Coll(func, InvalidOid, arg1, arg2)
#define ELOG_H 
#define __LC_TELEPHONE 10
#define REGDICTIONARYARRAYOID 3770
#define SET_NULLABLE_FIELD(ptr,field,value) (ptr)->__nullable_storage.field = (value); (ptr)->field = &((ptr)->__nullable_storage.field)
#define SIGURG 23
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define PG_DIAG_INTERNAL_POSITION 'p'
#define pull_varnos_compat(a,b) pull_varnos(a, b)
#define IP_IPSEC_POLICY 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define IPPROTO_PIM IPPROTO_PIM
#define DatumGetHeapTupleHeader(X) ((HeapTupleHeader) PG_DETOAST_DATUM(X))
#define HAVE_INTTYPES_H 1
#define __DBL_DIG__ 15
#define Anum_pg_class_relisshared 15
#define PG_PRINTF_ATTRIBUTE gnu_printf
#define ERRCODE_DISK_FULL MAKE_SQLSTATE('5','3','1','0','0')
#define EINTR 4
#define AF_INET6 PF_INET6
#define SOL_NETLINK 270
#define PATH_MAX 4096
#define CLOCK_BOOTTIME 7
#define SHRT_MIN (-SHRT_MAX - 1)
#define _IO_EOF_SEEN 0x0010
#define DEBUG1 14
#define DEBUG2 13
#define DEBUG3 12
#define DEBUG5 10
#define _POSIX_SPAWN 200809L
#define __SHRT_WIDTH__ 16
#define __f64x(x) x ##f64x
#define SO_LINGER 13
#define INT4RANGEOID 3904
#define TYPCATEGORY_NUMERIC 'N'
#define PG_INT64_MIN (-INT64CONST(0x7FFFFFFFFFFFFFFF) - 1)
#define TRIGGEROID 2279
#define PageGetLSN(page) PageXLogRecPtrGet(((PageHeader) (page))->pd_lsn)
#define Anum_pg_type_typndims 28
#define TMP_MAX 238328
#define si_status _sifields._sigchld.si_status
#define ALIGNOF_BUFFER 32
#define AF_WANPIPE PF_WANPIPE
#define PF_UNIX PF_LOCAL
#define ERRCODE_INVALID_REGULAR_EXPRESSION MAKE_SQLSTATE('2','2','0','1','B')
#define __FLT32_MAX_EXP__ 128
#define AmCheckpointerProcess() (MyAuxProcType == CheckpointerProcess)
#define DATEOID 1082
#define ERRCODE_IDLE_SESSION_TIMEOUT MAKE_SQLSTATE('5','7','P','0','5')
#define TupleDescAttr(tupdesc,i) (&(tupdesc)->attrs[(i)])
#define fcSetArgExt(fc,n,val,is_null) (((fc)->args[n].isnull = (is_null)), ((fc)->args[n].value = (val)))
#define PrevProcessUtility_compat(a,b,c,d,e,f,g,h) PrevProcessUtility(a, b, c, d, e, f, g, h)
#define SECS_PER_YEAR (36525 * 864)
#define ILL_ILLADR ILL_ILLADR
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC PF_UNSPEC
#define _SS_SIZE 128
#define SIGQUIT 3
#define ResetExprContext(econtext) MemoryContextReset((econtext)->ecxt_per_tuple_memory)
#define RTSubEqualStrategyNumber 25
#define NI_NOFQDN 4
#define SK_UNARY 0x0002
#define MAXTZLEN 10
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define LOCAL_FCINFO(name,nargs) union { FunctionCallInfoBaseData fcinfo; char fcinfo_data[SizeForFunctionCallInfo(nargs)]; } name ##data; FunctionCallInfo name = &name ##data.fcinfo
#define XLOGINSERT_H 
#define sl_default_handler ignore_handler_s
#define SYNC_METHOD_OPEN 2
#define PF_CAIF 37
#define O_TMPFILE __O_TMPFILE
#define PG_TABLE_SIZE_FUNCTION "pg_table_size(%s)"
#define forfive(cell1,list1,cell2,list2,cell3,list3,cell4,list4,cell5,list5) for (ForFiveState cell1 ##__state = {(list1), (list2), (list3), (list4), (list5), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), multi_for_advance_cell(cell3, cell1 ##__state, l3, i), multi_for_advance_cell(cell4, cell1 ##__state, l4, i), multi_for_advance_cell(cell5, cell1 ##__state, l5, i), (cell1 != NULL && cell2 != NULL && cell3 != NULL && cell4 != NULL && cell5 != NULL); cell1 ##__state.i++)
#define PACKAGE_NAME "PostgreSQL"
#define PF_ASH 18
#define JULIAN_MAXYEAR (5874898)
#define INTERVAL_PRECISION_MASK (0xFFFF)
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define DynamicSharedMemoryControlLock (&MainLWLockArray[34].lock)
#define HOLD_CANCEL_INTERRUPTS() (QueryCancelHoldoffCount++)
#define EAI_IDN_ENCODE -105
#define DECLARE_UNIQUE_INDEX(name,oid,decl) extern int no_such_variable
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define PATHARRAYOID 1019
#define _WCHAR_T_ 
#define FIELDNO_TUPLETABLESLOT_ISNULL 6
#define EPERM 1
#define WORKER_LENGTH 256
#define _STDDEF_H 
#define EAI_FAMILY -6
#define VARSIZE(PTR) VARSIZE_4B(PTR)
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define ROLE_PG_MONITOR 3373
#define lthird_int(l) lfirst_int(list_nth_cell(l, 2))
#define AssertVariableIsOfType(varname,typename) StaticAssertStmt(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename))
#define PF_AX25 3
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define __SIZEOF_PTRDIFF_T__ 8
#define AF_BRIDGE PF_BRIDGE
#define PG_GETARG_ANY_ARRAY_P(n) DatumGetAnyArrayP(PG_GETARG_DATUM(n))
#define SCNoLEAST16 "ho"
#define _BITS_FLOATN_H 
#define RelationIsPopulated(relation) ((relation)->rd_rel->relispopulated)
#define INTERVAL_RANGE_MASK (0x7FFF)
#define BtreeVacuumLock (&MainLWLockArray[20].lock)
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _IONBF 2
#define TTS_FLAG_FIXED (1 << 4)
#define _SYS_UCONTEXT_H 1
#define FIELDNO_EXPRCONTEXT_OUTERTUPLE 3
#define LOCKBIT_ON(lockmode) (1 << (lockmode))
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define AGGSPLITOP_SERIALIZE 0x04
#define RelationRelation_Rowtype_Id 83
#define NameGetDatum(X) CStringGetDatum(NameStr(*(X)))
#define toascii(c) __toascii (c)
#define NL_TEXTMAX INT_MAX
#define ERRCODE_S_R_E_FUNCTION_EXECUTED_NO_RETURN_STATEMENT MAKE_SQLSTATE('2','F','0','0','5')
#define PF_NETLINK 16
#define XACT_XINFO_HAS_AE_LOCKS (1U << 6)
#define Anum_pg_class_relhastriggers 21
#define __UINT16_C(c) c
#define RTOverAboveStrategyNumber 12
#define PG_GETARG_ARRAYTYPE_P(n) DatumGetArrayTypeP(PG_GETARG_DATUM(n))
#define SCNoLEAST32 "o"
#define MaxLockTupleMode LockTupleExclusive
#define HAVE_LIBSELINUX 1
#define IP_MULTICAST_LOOP 34
#define NI_NAMEREQD 8
#define si_syscall _sifields._sigsys._syscall
#define TIMETZOID 1266
#define SOL_X25 262
#define AF_CAN PF_CAN
#define PRIoFAST32 __PRIPTR_PREFIX "o"
#define STA_FREQHOLD 0x0080
#define BUFPAGE_H 
#define O_WRONLY 01
#define U64FromFullTransactionId(x) ((x).value)
#define __gnu_linux__ 1
#define O_EXCL 0200
#define _ENDIAN_H 1
#define SPIN_DELAY() ((void) 0)
#define TSTZMULTIRANGEARRAYOID 6153
#define INT_FAST16_MAX (9223372036854775807L)
#define EOHPGetRODatum(eohptr) PointerGetDatum((eohptr)->eoh_ro_ptr)
#define __HAVE_DISTINCT_FLOAT32 0
#define IPPROTO_PUP IPPROTO_PUP
#define ERRCODE_INVALID_BINARY_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','3')
#define METADATA_UTILITY_H 
#define ACL_TRUNCATE (1<<4)
#define list_make2_int(x1,x2) list_make2_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2))
#define ENOTSOCK 88
#define OFF_H 
#define ALLOCSET_SMALL_SIZES ALLOCSET_SMALL_MINSIZE, ALLOCSET_SMALL_INITSIZE, ALLOCSET_SMALL_MAXSIZE
#define list_make_int_cell(v) ((ListCell) {.int_value = (v)})
#define PG_O_DIRECT O_DIRECT
#define SCNdLEAST32 "d"
#define SVE_SIG_PREG_SIZE(vq) __SVE_PREG_SIZE(vq)
#define ACTIVE_TRANSACTION_COLUMN_COUNT 7
#define AmBackgroundWriterProcess() (MyAuxProcType == BgWriterProcess)
#define TableOidAttributeNumber (-6)
#define __UQUAD_TYPE unsigned long int
#define TYPCATEGORY_STRING 'S'
#define PG_GETARG_POINTER(n) DatumGetPointer(PG_GETARG_DATUM(n))
#define TUPLESTORE_H 
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define ERRCODE_NON_NUMERIC_SQL_JSON_ITEM MAKE_SQLSTATE('2','2','0','3','6')
#define SYNC_FILE_RANGE_WRITE 2
#define WARNING 19
#define ENOSR 63
#define PRIoFAST64 __PRI64_PREFIX "o"
#define st_mtime st_mtim.tv_sec
#define __USE_ISOC11 1
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define INSTR_TIME_GET_MILLISEC(t) (((double) (t).tv_sec * 1000.0) + ((double) (t).tv_nsec) / 1000000.0)
#define __FLT16_MIN_EXP__ (-13)
#define ERRCODE_FDW_NO_SCHEMAS MAKE_SQLSTATE('H','V','0','0','P')
#define Anum_pg_type_typowner 4
#define PRIi64 __PRI64_PREFIX "i"
#define PGSIXBIT(ch) (((ch) - '0') & 0x3F)
#define __stub___compat_bdflush 
#define MAX_PORT_LENGTH 10
#define _BITS_STRING_FORTIFIED_H 1
#define __FLT64_MANT_DIG__ 53
#define SVE_SIG_REGS_SIZE(vq) (__SVE_FFR_OFFSET(vq) + __SVE_FFR_SIZE(vq))
#define IPPROTO_IDP IPPROTO_IDP
#define SCNdLEAST64 __PRI64_PREFIX "d"
#define timestamptz_cmp_internal(dt1,dt2) timestamp_cmp_internal(dt1, dt2)
#define HAVE_APPEND_HISTORY 1
#define ROLE_PG_DATABASE_OWNER 6171
#define __FLT64X_MANT_DIG__ 113
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define RelationGetDescr(relation) ((relation)->rd_att)
#define IPPROTO_IPIP IPPROTO_IPIP
#define HAVE_RL_FILENAME_QUOTING_FUNCTION 1
#define ELIBACC 79
#define PARTITION_MAX_KEYS 32
#define _T_PTRDIFF 
#define pg_noinline __attribute__((noinline))
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define att_addlength_pointer(cur_offset,attlen,attptr) ( ((attlen) > 0) ? ( (cur_offset) + (attlen) ) : (((attlen) == -1) ? ( (cur_offset) + VARSIZE_ANY(attptr) ) : ( AssertMacro((attlen) == -2), (cur_offset) + (strlen((char *) (attptr)) + 1) )) )
#define PROCLIST_TYPES_H 
#define __glibc_has_extension(ext) 0
#define SECURITY_NOFORCE_RLS 0x0004
#define IPV6_2292PKTOPTIONS 6
#define PAI_IS_HEAP (1 << 1)
#define CV_MINIMAL_SIZE (sizeof(ConditionVariable) <= 16 ? 16 : 32)
#define pg_attribute_noreturn() __attribute__((noreturn))
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define _LFS64_STDIO 1
#define L_ctermid 9
#define PG_GETARG_CHAR(n) DatumGetChar(PG_GETARG_DATUM(n))
#define INSTR_TIME_GET_DOUBLE(t) (((double) (t).tv_sec) + ((double) (t).tv_nsec) / 1000000000.0)
#define PG_BINARY_A "a"
#define FRAMEOPTION_START_OFFSET (FRAMEOPTION_START_OFFSET_PRECEDING | FRAMEOPTION_START_OFFSET_FOLLOWING)
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define SHAREDINVALSNAPSHOT_ID (-5)
#define ClassTblspcRelfilenodeIndexId 3455
#define pg_attribute_no_sanitize_alignment() __attribute__((no_sanitize("alignment")))
#define XLOG_XACT_COMMIT 0x00
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define PG_HAVE_ATOMIC_WRITE_U32 
#define InvalidBuffer 0
#define PG_GETARG_TEXT_P_SLICE(n,a,b) DatumGetTextPSlice(PG_GETARG_DATUM(n),a,b)
#define _SC_ARG_MAX _SC_ARG_MAX
#define isupper(c) __isctype((c), _ISupper)
#define XACT_COMPLETION_FORCE_SYNC_COMMIT (1U << 31)
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define INT4RANGEARRAYOID 3905
#define IsParallelWorker() (ParallelWorkerNumber >= 0)
#define OidFunctionCall0(functionId) OidFunctionCall0Coll(functionId, InvalidOid)
#define HEAP_XMAX_COMMITTED 0x0400
#define FRAMEOPTION_START_OFFSET_PRECEDING 0x00800
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ELNRNG 48
#define EAI_FAIL -4
#define GUC_DISALLOW_IN_AUTO_FILE 0x0800
#define HEAP_XMAX_EXCL_LOCK 0x0040
#define AF_ROUTE PF_ROUTE
#define Anum_pg_index_indkey 15
#define PageIsNew(page) (((PageHeader) (page))->pd_upper == 0)
#define ERRCODE_SEQUENCE_GENERATOR_LIMIT_EXCEEDED MAKE_SQLSTATE('2','2','0','0','H')
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define __SI_ALIGNMENT 
#define Anum_pg_index_indisvalid 10
#define PG_HAVE_ATOMIC_EXCHANGE_U32 
#define PageIsFull(page) (((PageHeader) (page))->pd_flags & PD_PAGE_FULL)
#define NI_MAXHOST 1025
#define TSTZRANGEOID 3910
#define ESBADFMT ( 410 )
#define __USE_ISOC99 1
#define ERRCODE_DUPLICATE_JSON_OBJECT_KEY_VALUE MAKE_SQLSTATE('2','2','0','3','0')
#define O_FSYNC O_SYNC
#define ERRCODE_INVALID_ESCAPE_OCTET MAKE_SQLSTATE('2','2','0','0','D')
#define _POSIX_SEM_NSEMS_MAX 256
#define __UINT16_TYPE__ short unsigned int
#define MSG_DONTROUTE MSG_DONTROUTE
#define OidFunctionCall9(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) OidFunctionCall9Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define HAVE_WORKING_LINK 1
#define relpathperm(rnode,forknum) relpathbackend(rnode, InvalidBackendId, forknum)
#define __FLT16_MAX_10_EXP__ 4
#define __GNUC_STDC_INLINE__ 1
#define HAVE__BUILTIN_OP_OVERFLOW 1
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define ARRAY_H 
#define Int32GetDatum(X) ((Datum) (X))
#define Anum_pg_attribute_attname 2
#define HAVE_FSEEKO 1
#define USE_POSTGRES_DATES 0
#define _STDIO_H 1
#define MOD_FREQUENCY ADJ_FREQUENCY
#define list_nth_node(type,list,n) castNode(type, list_nth(list, n))
#define ItemIdIsUsed(itemId) ((itemId)->lp_flags != LP_UNUSED)
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define FPE_FLTDIV FPE_FLTDIV
#define C_H 
#define LOCK_LOCKMETHOD(lock) ((LOCKMETHODID) (lock).tag.locktag_lockmethodid)
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define FLOAT4OID 700
#define LINEARRAYOID 629
#define _BITS_STDINT_UINTN_H 1
#define _POSIX2_BC_STRING_MAX 1000
#define ANYCOMPATIBLEOID 5077
#define AttributeRelidNumIndexId 2659
#define ERRCODE_AMBIGUOUS_PARAMETER MAKE_SQLSTATE('4','2','P','0','8')
#define getObjectIdentity_compat(a,b) getObjectIdentity(a, b)
#define INTERVAL_PRECISION(t) ((t) & INTERVAL_PRECISION_MASK)
#define __DBL_HAS_INFINITY__ 1
#define dummyret void
#define XACT_H 
#define SizeOfXLogRecordDataHeaderLong (sizeof(uint8) + sizeof(uint32))
#define PG_HAVE_ATOMIC_EXCHANGE_U64 
#define __SI_CLOCK_T __clock_t
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define SRF_RETURN_NEXT(_funcctx,_result) do { ReturnSetInfo *rsi; (_funcctx)->call_cntr++; rsi = (ReturnSetInfo *) fcinfo->resultinfo; rsi->isDone = ExprMultipleResult; PG_RETURN_DATUM(_result); } while (0)
#define WEOF (0xffffffffu)
#define IPV6_PMTUDISC_OMIT 5
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define get_pathtarget_sortgroupref(target,colno) ((target)->sortgrouprefs ? (target)->sortgrouprefs[colno] : (Index) 0)
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define FIELDNO_EXPRCONTEXT_AGGVALUES 8
#define CITUS_NODES_H 
#define Anum_pg_class_reltoastrelid 13
#define MSG_FASTOPEN MSG_FASTOPEN
#define SET_LOCKTAG_SPECULATIVE_INSERTION(locktag,xid,token) ((locktag).locktag_field1 = (xid), (locktag).locktag_field2 = (token), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_SPECULATIVE_TOKEN, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define PF_NETROM 6
#define __USE_XOPEN 1
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define isspace(c) __isctype((c), _ISspace)
#define stdin stdin
#define PRIi16 "i"
#define HAVE_SYS_SIGNALFD_H 1
#define REPLICA_IDENTITY_DEFAULT 'd'
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define ERRCODE_INVALID_TABLESAMPLE_ARGUMENT MAKE_SQLSTATE('2','2','0','2','H')
#define HAVE_INT_TIMEZONE 1
#define PG_AUTOCONF_FILENAME "postgresql.auto.conf"
#define HAVE_STRNLEN 1
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define AlterTableStmtObjType_compat(a) ((a)->objtype)
#define TransactionIdRetreat(dest) do { (dest)--; } while ((dest) < FirstNormalTransactionId)
#define FIELDNO_HEAPTUPLEHEADERDATA_INFOMASK 3
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define IPV6_ORIGDSTADDR 74
#define UUIDOID 2950
#define TUPCONVERT_H 
#define NAMEARRAYOID 1003
#define VARTAG_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_tag)
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define StaticAssertStmt(condition,errmessage) do { _Static_assert(condition, errmessage); } while(0)
#define PRIi32 "i"
#define pg_write_barrier() pg_write_barrier_impl()
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define make_simple_restrictinfo_compat(a,b) make_simple_restrictinfo(a, b)
#define pg_memory_barrier() pg_memory_barrier_impl()
#define PG_RETURN_FLOAT4(x) return Float4GetDatum(x)
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IPPROTO_IPV6 IPPROTO_IPV6
#define HeapTupleHeaderXminFrozen(tup) ( ((tup)->t_infomask & (HEAP_XMIN_FROZEN)) == HEAP_XMIN_FROZEN )
#define be32toh(x) __bswap_32 (x)
#define PGUNSIXBIT(val) (((val) & 0x3F) + '0')
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define IPPROTO_SCTP IPPROTO_SCTP
#define SO_PEERNAME 28
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define AF_ECONET PF_ECONET
#define __INT_FAST16_TYPE__ long int
#define PGPROC_MAX_CACHED_SUBXIDS 64
#define NI_IDN 32
#define ScanTupleHashTable(htable,iter) tuplehash_iterate(htable->hashtab, iter)
#define _SIZE_T_DEFINED 
#define SECURITY_LOCAL_USERID_CHANGE 0x0001
#define ERRCODE_BAD_COPY_FILE_FORMAT MAKE_SQLSTATE('2','2','P','0','4')
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define list_make1_int(x1) list_make1_impl(T_IntList, list_make_int_cell(x1))
#define RelationGetNamespace(relation) ((relation)->rd_rel->relnamespace)
#define lsecond_node(type,l) castNode(type, lsecond(l))
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define _WCHAR_T_DEFINED_ 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define dlist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end; (iter).cur != (iter).end; (iter).cur = (iter).cur->next)
#define isalpha(c) __isctype((c), _ISalpha)
#define _POSIX_NO_TRUNC 1
#define ECHILD 10
#define SCNdFAST8 "hhd"
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define BufferIsInvalid(buffer) ((buffer) == InvalidBuffer)
#define _POSIX_REGEXP 1
#define UINT_LEAST8_MAX (255)
#define START_CRIT_SECTION() (CritSectionCount++)
#define DSA_H 
#define HAVE_LINUX_EIDRM_BUG 
#define END_TIMESTAMP INT64CONST(9223371331200000000)
#define ERRCODE_WARNING_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','1','0','0','C')
#define LC_NAME_MASK (1 << __LC_NAME)
#define ItemPointerIndicatesMovedPartitions(pointer) ( ItemPointerGetOffsetNumber(pointer) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(pointer) == MovedPartitionsBlockNumber )
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define FirstNormalObjectId 16384
#define F_GET_RW_HINT 1035
#define __stub_setlogin 
#define PG_GETARG_HEAPTUPLEHEADER(n) DatumGetHeapTupleHeader(PG_GETARG_DATUM(n))
#define HEAP_INSERT_SKIP_FSM TABLE_INSERT_SKIP_FSM
#define _POSIX_SPORADIC_SERVER -1
#define __FLT128_HAS_INFINITY__ 1
#define LC_MESSAGES __LC_MESSAGES
#define HEAP_XACT_MASK 0xFFF0
#define SetListCellPtr(a,b) ((a)->ptr_value = (b))
#define PF_MCTP 45
#define INSTR_TIME_H 
#define __O_DSYNC 010000
#define FIELDNO_EXPRCONTEXT_CASEDATUM 10
#define RELPERSISTENCE_UNLOGGED 'u'
#define MemSetTest(val,len) ( ((len) & LONG_ALIGN_MASK) == 0 && (len) <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0 && (val) == 0 )
#define _POSIX_MEMORY_PROTECTION 200809L
#define Natts_pg_attribute 26
#define PG_TYPE_D_H 
#define INDEX_AM_HANDLEROID 325
#define PG_GETARG_VARLENA_PP(n) PG_DETOAST_DATUM_PACKED(PG_GETARG_DATUM(n))
#define true 1
#define SA_RESETHAND 0x80000000
#define ERRCODE_WARNING_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('0','1','0','0','4')
#define EAI_SOCKTYPE -7
#define __S32_TYPE int
#define IS_OUTER_JOIN(jointype) (((1 << (jointype)) & ((1 << JOIN_LEFT) | (1 << JOIN_FULL) | (1 << JOIN_RIGHT) | (1 << JOIN_ANTI))) != 0)
#define relpath(rnode,forknum) relpathbackend((rnode).node, (rnode).backend, forknum)
#define IP_PKTOPTIONS 9
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define PG_DETOAST_DATUM(datum) pg_detoast_datum((struct varlena *) DatumGetPointer(datum))
#define _SC_2_C_BIND _SC_2_C_BIND
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __FLT64_MIN_10_EXP__ (-307)
#define ERRCODE_FDW_TOO_MANY_HANDLES MAKE_SQLSTATE('H','V','0','1','4')
#define VARATT_IS_COMPRESSED(PTR) VARATT_IS_4B_C(PTR)
#define _SYS_PROCFS_H 1
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define REGNAMESPACEARRAYOID 4090
#define XMLOID 142
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define MinSizeOfXactInvals offsetof(xl_xact_invals, msgs)
#define __toascii_l(c,l) ((l), __toascii (c))
#define TYPSTORAGE_EXTENDED 'x'
#define PG_AUTHID_H 
#define _POSIX_DELAYTIMER_MAX 32
#define CHECKPOINT_FORCE 0x0008
#define AGGSPLITOP_COMBINE 0x01
#define _LIBINTL_H 1
#define PageClearAllVisible(page) (((PageHeader) (page))->pd_flags &= ~PD_ALL_VISIBLE)
#define __SVE_ZREGS_SIZE(vq) (__SVE_ZREG_OFFSET(vq, __SVE_NUM_ZREGS) - __SVE_ZREGS_OFFSET)
#define PG_NDISTINCTOID 3361
#define Anum_pg_class_oid 1
#define F_GET_FILE_RW_HINT 1037
#define __HAVE_FLOAT16 0
#define IPV6_ADDRFORM 1
#define HeapTupleHeaderSetXvac(tup,xid) do { Assert((tup)->t_infomask & HEAP_MOVED); (tup)->t_choice.t_heap.t_field3.t_xvac = (xid); } while (0)
#define EREMOTE 66
#define ERRCODE_STRING_DATA_LENGTH_MISMATCH MAKE_SQLSTATE('2','2','0','2','6')
#define SET_LOCKTAG_TUPLE(locktag,dboid,reloid,blocknum,offnum) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = (blocknum), (locktag).locktag_field4 = (offnum), (locktag).locktag_type = LOCKTAG_TUPLE, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define shm_toc_initialize_estimator(e) ((e)->space_for_chunks = 0, (e)->number_of_keys = 0)
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define UINT_LEAST16_WIDTH 16
#define __FLT128_MAX_EXP__ 16384
#define RTEqualStrategyNumber 18
#define pg_hton16(x) pg_bswap16(x)
#define WALWriteLock (&MainLWLockArray[8].lock)
#define SIZEOF_DATUM SIZEOF_VOID_P
#define VARTAG_SIZE(tag) ((tag) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : VARTAG_IS_EXPANDED(tag) ? sizeof(varatt_expanded) : (tag) == VARTAG_ONDISK ? sizeof(varatt_external) : TrapMacro(true, "unrecognized TOAST vartag"))
#define BUS_OBJERR BUS_OBJERR
#define TIMETZARRAYOID 1270
#define ACLITEM_GET_PRIVS(item) ((item).ai_privs & 0xFFFF)
#define ERRCODE_SQL_ROUTINE_EXCEPTION MAKE_SQLSTATE('2','F','0','0','0')
#define SRF_PERCALL_SETUP() per_MultiFuncCall(fcinfo)
#define INT_WIDTH 32
#define PG_GETARG_BYTEA_P_COPY(n) DatumGetByteaPCopy(PG_GETARG_DATUM(n))
#define SEGV_MAPERR SEGV_MAPERR
#define AARR_DIMS(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.dims : ARR_DIMS((ArrayType *) (a)))
#define TTS_IS_BUFFERTUPLE(slot) ((slot)->tts_ops == &TTSOpsBufferHeapTuple)
#define HAVE_HISTORY_TRUNCATE_FILE 1
#define ANYCOMPATIBLEMULTIRANGEOID 4538
#define Anum_pg_type_oid 1
#define F_ADD_SEALS 1033
#define _PTRDIFF_T_DECLARED 
#define _BITS_STDIO_H 1
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define IP_PMTUDISC_PROBE 3
#define __glibc_objsize(__o) __bos (__o)
#define pg_hton32(x) pg_bswap32(x)
#define DatumBigEndianToNative(x) pg_bswap64(x)
#define FRAMEOPTION_END_OFFSET_FOLLOWING 0x04000
#define dsa_pointer_atomic_write pg_atomic_write_u64
#define ESRMNT 69
#define ACLITEM_SET_PRIVS_GOPTIONS(item,privs,goptions) ((item).ai_privs = ((AclMode) (privs) & 0xFFFF) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define STA_PLL 0x0001
#define BlockIdIsValid(blockId) ((bool) PointerIsValid(blockId))
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 0
#define COLL_WEIGHTS_MAX 255
#define IPPROTO_AH IPPROTO_AH
#define BKI_BOOTSTRAP 
#define TSRANGEOID 3908
#define TrapMacro(condition,errorType) (true)
#define STA_PPSFREQ 0x0002
#define PRIiLEAST16 "i"
#define RelationMappingLock (&MainLWLockArray[25].lock)
#define _WCHAR_H 1
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define Int64GetDatum(X) ((Datum) (X))
#define MIN_TIMESTAMP INT64CONST(-211813488000000000)
#define _WCHAR_T 
#define O_NONBLOCK 04000
#define SCNiPTR __PRIPTR_PREFIX "i"
#define isalnum(c) __isctype((c), _ISalnum)
#define SubtransSLRULock (&MainLWLockArray[12].lock)
#define __HAVE_FLOAT64 1
#define HeapTupleHeaderClearMatch(tup) ( (tup)->t_infomask2 &= ~HEAP_TUPLE_HAS_MATCH )
#define CommitTsLock (&MainLWLockArray[39].lock)
#define GIDSIZE 200
#define Anum_pg_publication_pubinsert 5
#define INSTR_TIME_GET_MICROSEC(t) (((uint64) (t).tv_sec * (uint64) 1000000) + (uint64) ((t).tv_nsec / 1000))
#define NO_RECOVERY 3
#define SIG_BLOCK 0
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define ItemIdIsDead(itemId) ((itemId)->lp_flags == LP_DEAD)
#define ERRCODE_FDW_OPTION_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','J')
#define BITMAPSET_H 
#define PG_DIAG_COLUMN_NAME 'c'
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX (18446744073709551615UL)
#define PRIiLEAST32 "i"
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define _PTRDIFF_T 
#define INETOID 869
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define HAVE_BACKTRACE_SYMBOLS 1
#define MSG_WAITFORONE MSG_WAITFORONE
#define USE_FLOAT8_BYVAL 1
#define PF_UNSPEC 0
#define UINT64_C(c) c ## UL
#define BKI_FORCE_NOT_NULL 
#define BoolGetDatum(X) ((Datum) ((X) ? 1 : 0))
#define __LDBL_MIN_10_EXP__ (-4931)
#define RTOverlapStrategyNumber 3
#define DEFAULT_BACKEND_FLUSH_AFTER 0
#define PGWARNING 19
#define F_SETLEASE 1024
#define strerror_r pg_strerror_r
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define PD_ALL_VISIBLE 0x0004
#define _GCC_WCHAR_T 
#define dngettext(domainname,msgid1,msgid2,n) dcngettext (domainname, msgid1, msgid2, n, LC_MESSAGES)
#define HAVE_BIO_METH_NEW 1
#define SO_PASSSEC 34
#define XLOG_RUNNING_XACTS 0x10
#define S_IWUSR __S_IWRITE
#define PRIiFAST8 "i"
#define HeapTupleHeaderSetCmax(tup,cid,iscombo) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); if (iscombo) (tup)->t_infomask |= HEAP_COMBOCID; else (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define getObjectTypeDescription_compat(a,b) getObjectTypeDescription(a, b)
#define PF_X25 9
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define PRIiLEAST64 __PRI64_PREFIX "i"
#define SIOCATMARK 0x8905
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define F_SETPIPE_SZ 1031
#define NETDB_INTERNAL -1
#define DSM_HANDLE_INVALID 0
#define __ARM_FP16_FORMAT_IEEE 1
#define si_uid _sifields._kill.si_uid
#define __WTERMSIG(status) ((status) & 0x7f)
#define ERRCODE_DATETIME_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','8')
#define ERRCODE_HELD_CURSOR_REQUIRES_SAME_ISOLATION_LEVEL MAKE_SQLSTATE('2','5','0','0','8')
#define CURSOR_OPT_HOLD 0x0020
#define PG_RETURN_POINTER(x) return PointerGetDatum(x)
#define _POSIX_THREAD_THREADS_MAX 64
#define _SC_PAGESIZE _SC_PAGESIZE
#define PG_GETARG_BPCHAR_PP(n) DatumGetBpCharPP(PG_GETARG_DATUM(n))
#define foreach_delete_current(lst,cell) (cell ##__state.i--, (List *) (cell ##__state.l = list_delete_cell(lst, cell)))
#define PG_FUNCNAME_MACRO __func__
#define PRIdLEAST64 __PRI64_PREFIX "d"
#define UINT_LEAST16_MAX (65535)
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define SIZEOF_VOID_P 8
#define IP_PMTUDISC_DONT 0
#define RelationIsLogicallyLogged(relation) (XLogLogicalInfoActive() && RelationNeedsWAL(relation) && (relation)->rd_rel->relkind != RELKIND_FOREIGN_TABLE && !IsCatalogRelation(relation))
#define ReleaseTupleDesc(tupdesc) do { if ((tupdesc)->tdrefcount >= 0) DecrTupleDescRefCount(tupdesc); } while (0)
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define HAVE_FUNCNAME__FUNC 1
#define FirstNormalUnloggedLSN ((XLogRecPtr) 1000)
#define ANYARRAYOID 2277
#define F_SHLCK 8
#define __useconds_t_defined 
#define pg_nodiscard __attribute__((warn_unused_result))
#define TimestampTzPlusMilliseconds(tz,ms) ((tz) + ((ms) * (int64) 1000))
#define VALUE_H 
#define SRF_RETURN_DONE(_funcctx) do { ReturnSetInfo *rsi; end_MultiFuncCall(fcinfo, _funcctx); rsi = (ReturnSetInfo *) fcinfo->resultinfo; rsi->isDone = ExprEndResult; PG_RETURN_NULL(); } while (0)
#define DEFAULT_EVENT_SOURCE "PostgreSQL"
#define CURSOR_OPT_PARALLEL_OK 0x0800
#define IPPROTO_IP IPPROTO_IP
#define UINT32_MAX (4294967295U)
#define INT8_MIN (-128)
#define XLOG_XACT_INVALIDATIONS 0x60
#define _GCC_LIMITS_H_ 
#define FILE_POSSIBLY_DELETED(err) ((err) == ENOENT)
#define LIBPQ_HAS_TRACE_FLAGS 1
#define ItemPointerSetMovedPartitions(pointer) ItemPointerSet((pointer), MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define AssertVariableIsOfTypeMacro(varname,typename) (StaticAssertExpr(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename)))
#define WNOHANG 1
#define ADJ_TAI 0x0080
#define CLOCK_TAI 11
#define MAX_INTERVAL_PRECISION 6
#define _XOPEN_SHM 1
#define DEF_PGPORT_STR "5432"
#define REL_H 
#define PF_IPX 4
#define HOST_NOT_FOUND 1
#define FRAMEOPTION_END_OFFSET (FRAMEOPTION_END_OFFSET_PRECEDING | FRAMEOPTION_END_OFFSET_FOLLOWING)
#define SEGV_ACCERR SEGV_ACCERR
#define DatumGetIntervalP(X) ((Interval *) DatumGetPointer(X))
#define __PTRDIFF_T 
#define RTContainsElemStrategyNumber 16
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define ERRCODE_UNDEFINED_TABLE MAKE_SQLSTATE('4','2','P','0','1')
#define ENOCSI 50
#define _SC_WORD_BIT _SC_WORD_BIT
#define pg_attribute_unused() __attribute__((unused))
#define __HAVE_GENERIC_SELECTION 1
#define F_GETFD 1
#define STA_PPSSIGNAL 0x0100
#define _POSIX_CLOCKRES_MIN 20000000
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define DatumGetVarCharPP(X) ((VarChar *) PG_DETOAST_DATUM_PACKED(X))
#define F_GETFL 3
#define LC_MEASUREMENT __LC_MEASUREMENT
#define F_LOCK 1
#define VOIDOID 2278
#define ShareRowExclusiveLock 6
#define TABLE_INSERT_SKIP_FSM 0x0002
#define PG_DIAG_DATATYPE_NAME 'd'
#define S_IRWXG (S_IRWXU >> 3)
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define SCNuLEAST8 "hhu"
#define DSM_IMPL_H 
#define HAVE_STRINGS_H 1
#define PublicationObjectIndexId 6110
#define InstrCountFiltered1(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->nfiltered1 += (delta); } while(0)
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define BKPIMAGE_IS_COMPRESSED 0x02
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define ERRCODE_INDICATOR_OVERFLOW MAKE_SQLSTATE('2','2','0','2','2')
#define GUC_QUALIFIER_SEPARATOR '.'
#define EADDRINUSE 98
#define TYPSTORAGE_MAIN 'm'
#define _VA_LIST 
#define IPPROTO_MH IPPROTO_MH
#define PRIx16 "x"
#define IN_CLASSA_NSHIFT 24
#define TIMESTAMPTZARRAYOID 1185
#define MCAST_UNBLOCK_SOURCE 44
#define PG_HAVE_ATOMIC_FLAG_SUPPORT 
#define HeapTupleHeaderSetCmin(tup,cid) do { Assert(!((tup)->t_infomask & HEAP_MOVED)); (tup)->t_choice.t_heap.t_field3.t_cid = (cid); (tup)->t_infomask &= ~HEAP_COMBOCID; } while (0)
#define HAVE_X509_GET_SIGNATURE_NID 1
#define AttrOffsetGetAttrNumber(attributeOffset) ((AttrNumber) (1 + (attributeOffset)))
#define JSONBOID 3802
#define IPV6_RTHDR_STRICT 1
#define __O_PATH 010000000
#define isxdigit(c) __isctype((c), _ISxdigit)
#define ROLE_PG_EXECUTE_SERVER_PROGRAM 4571
#define _POSIX_TIMER_MAX 32
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define SEGV_MTESERR SEGV_MTESERR
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define INSTR_TIME_ADD(x,y) do { (x).tv_sec += (y).tv_sec; (x).tv_nsec += (y).tv_nsec; while ((x).tv_nsec >= 1000000000) { (x).tv_nsec -= 1000000000; (x).tv_sec++; } } while (0)
#define XLOG_XACT_ABORT_PREPARED 0x40
#define BeginCopyFrom_compat(a,b,c,d,e,f,g,h) BeginCopyFrom(a, b, c, d, e, f, g, h)
#define StaticAssertExpr(condition,errmessage) ((void) ({ StaticAssertStmt(condition, errmessage); true; }))
#define __WCOREFLAG 0x80
#define HAVE_READLINE_READLINE_H 1
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define PRIx32 "x"
#define __O_DIRECTORY 040000
#define SYNC_METHOD_OPEN_DSYNC 4
#define __isascii_l(c,l) ((l), __isascii (c))
#define ERRCODE_DUPLICATE_SCHEMA MAKE_SQLSTATE('4','2','P','0','6')
#define IPV6_MULTICAST_IF 17
#define INT8_WIDTH 8
#define ACL_INSERT (1<<0)
#define PG_RELATION_SIZE_FUNCTION "pg_relation_size(%s)"
#define __restrict_arr __restrict
#define forboth(cell1,list1,cell2,list2) for (ForBothState cell1 ##__state = {(list1), (list2), 0}; multi_for_advance_cell(cell1, cell1 ##__state, l1, i), multi_for_advance_cell(cell2, cell1 ##__state, l2, i), (cell1 != NULL && cell2 != NULL); cell1 ##__state.i++)
#define TZNAME_GLOBAL tzname
#define __ldiv_t_defined 1
#define _POSIX_SYMLOOP_MAX 8
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define SET_VARSIZE_4B(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2))
#define LOCK_MAND 32
#define Anum_pg_dist_partition_partkey 3
#define HAVE_DECL_RTLD_GLOBAL 1
#define ARR_OVERHEAD_NONULLS(ndims) MAXALIGN(sizeof(ArrayType) + 2 * sizeof(int) * (ndims))
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define PG_RETURN_DATUM(x) return (x)
#define __MODE_T_TYPE __U32_TYPE
#define F_SETLKW64 7
#define Anum_pg_index_indexprs 19
#define F_GETLK 5
#define INTPTR_MIN (-9223372036854775807L-1)
#define HAVE_HMAC_CTX_FREE 1
#define SIGTRAP 5
#define DATEORDER_DMY 1
#define __nonnull(params) __attribute_nonnull__ (params)
#define Anum_pg_index_indcollation 16
#define CHAROID 18
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _BITS_STRUCT_STAT_H 1
#define DatumGetPointer(X) ((Pointer) (X))
#define ERRCODE_INVALID_XML_CONTENT MAKE_SQLSTATE('2','2','0','0','N')
#define HAVE_STRUCT_OPTION 1
#define XLOG_XACT_ASSIGNMENT 0x50
#define F_GETSIG __F_GETSIG
#define PRIx64 __PRI64_PREFIX "x"
#define TABLESPACE_MAP_OLD "tablespace_map.old"
#define O_DSYNC __O_DSYNC
#define WRITEBACK_MAX_PENDING_FLUSHES 256
#define WORKER_PARTITIONED_RELATION_SIZE_FUNCTION "worker_partitioned_relation_size(%s)"
#define list_make1_oid(x1) list_make1_impl(T_OidList, list_make_oid_cell(x1))
#define NL_ARGMAX _POSIX_ARG_MAX
#define INT_LEAST8_MAX (127)
#define __aarch64__ 1
#define CIDRARRAYOID 651
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __CFLOAT64X _Complex _Float64x
#define __CFLOAT32X _Complex _Float32x
#define FLOAT8_FITS_IN_INT32(num) ((num) >= (float8) PG_INT32_MIN && (num) < -((float8) PG_INT32_MIN))
#define AF_KCM PF_KCM
#define XLogRecGetRmid(decoder) ((decoder)->decoded_record->xl_rmid)
#define IPPROTO_TP IPPROTO_TP
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define ngettext(msgid1,msgid2,n) dngettext (NULL, msgid1, msgid2, n)
#define JULIAN_MAXMONTH (6)
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define SO_PROTOCOL 38
#define ERRCODE_INVALID_GRANTOR MAKE_SQLSTATE('0','L','0','0','0')
#define RSIZE_MAX_MEM ( 256UL << 20 )
#define ItemIdGetRedirect(itemId) ((itemId)->lp_off)
#define BGW_MAXLEN 96
#define si_pkey _sifields._sigfault._bounds._pkey
#define XMLARRAYOID 143
#define __FLT64X_DECIMAL_DIG__ 36
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define IP_BIND_ADDRESS_NO_PORT 24
#define INT8_H 
#define RelationGetTargetPageUsage(relation,defaultff) (BLCKSZ * RelationGetFillFactor(relation, defaultff) / 100)
#define Anum_pg_type_typmodout 21
#define ERRCODE_WARNING_PRIVILEGE_NOT_GRANTED MAKE_SQLSTATE('0','1','0','0','7')
#define PG_GETARG_NAME(n) DatumGetName(PG_GETARG_DATUM(n))
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX (2147483647)
#define STA_INS 0x0010
#define MISCADMIN_H 
#define LOG2_NUM_LOCK_PARTITIONS 4
#define FPE_FLTSUB FPE_FLTSUB
#define SCNoFAST8 "hho"
#define PG_INT64_TYPE long int
#define ANYCOMPATIBLEARRAYOID 5078
#define INT_FAST16_WIDTH __WORDSIZE
#define ERRCODE_FDW_INVALID_STRING_FORMAT MAKE_SQLSTATE('H','V','0','0','A')
#define FLOAT8_FITS_IN_INT64(num) ((num) >= (float8) PG_INT64_MIN && (num) < -((float8) PG_INT64_MIN))
#define FIELDNO_AGGSTATE_ALL_PERGROUPS 53
#define LOGIN_NAME_MAX 256
#define unconstify(underlying_type,expr) (StaticAssertExpr(__builtin_types_compatible_p(__typeof(expr), const underlying_type), "wrong cast"), (underlying_type) (expr))
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define CHAR_BIT __CHAR_BIT__
#define __attribute_pure__ __attribute__ ((__pure__))
#define EDEADLOCK EDEADLK
#define tuplestore_donestoring(state) ((void) 0)
#define INTERVALOID 1186
#define PG_COPYRES_TUPLES 0x02
#define SVE_SIG_PREGS_OFFSET(vq) (SVE_SIG_REGS_OFFSET + __SVE_PREGS_OFFSET(vq))
#define CLOG_H 
#define PG_VERSION_NUM 140005
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define ERRCODE_FDW_UNABLE_TO_ESTABLISH_CONNECTION MAKE_SQLSTATE('H','V','0','0','N')
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define TupleGetDatum(_slot,_tuple) HeapTupleGetDatum(_tuple)
#define Anum_pg_index_indimmediate 8
#define XLogRecGetTotalLen(decoder) ((decoder)->decoded_record->xl_tot_len)
#define ERRCODE_SYNTAX_ERROR MAKE_SQLSTATE('4','2','6','0','1')
#define INT2ARRAYOID 1005
#define HeapTupleHeaderIsSpeculative(tup) ( (ItemPointerGetOffsetNumberNoCheck(&(tup)->t_ctid) == SpecTokenOffsetNumber) )
#define TTS_EMPTY(slot) (((slot)->tts_flags & TTS_FLAG_EMPTY) != 0)
#define CHECKPOINT_CAUSE_TIME 0x0100
#define PageClearPrunable(page) (((PageHeader) (page))->pd_prune_xid = InvalidTransactionId)
#define HAVE_SYS_RESOURCE_H 1
#define dsa_pointer_atomic_fetch_add pg_atomic_fetch_add_u64
#define NUMRANGEARRAYOID 3907
#define __FLT64X_IS_IEC_60559__ 2
#define ERRCODE_IO_ERROR MAKE_SQLSTATE('5','8','0','3','0')
#define Anum_pg_class_relispopulated 25
#define HAVE_RL_FILENAME_COMPLETION_FUNCTION 1
#define __ptr_t void *
#define MAX_INPUT 255
#define CLOCK_BOOTTIME_ALARM 9
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define HAVE_IFADDRS_H 1
#define IS_VALID_JULIAN(y,m,d) (((y) > JULIAN_MINYEAR || ((y) == JULIAN_MINYEAR && ((m) >= JULIAN_MINMONTH))) && ((y) < JULIAN_MAXYEAR || ((y) == JULIAN_MAXYEAR && ((m) < JULIAN_MAXMONTH))))
#define DatumGetVarCharP(X) ((VarChar *) PG_DETOAST_DATUM(X))
#define PG_DIAG_MESSAGE_DETAIL 'D'
#define MAX_CANON 255
#define HeapTupleHeaderGetXvac(tup) ( ((tup)->t_infomask & HEAP_MOVED) ? (tup)->t_choice.t_heap.t_field3.t_xvac : InvalidTransactionId )
#define __LDBL_DECIMAL_DIG__ 36
#define INT8RANGEARRAYOID 3927
#define INT_LEAST8_MIN (-128)
#define RelationIsPermanent(relation) ((relation)->rd_rel->relpersistence == RELPERSISTENCE_PERMANENT)
#define ItemIdIsRedirected(itemId) ((itemId)->lp_flags == LP_REDIRECT)
#define errno (*__errno_location ())
#define FKCONSTR_MATCH_PARTIAL 'p'
#define ERRCODE_CONNECTION_EXCEPTION MAKE_SQLSTATE('0','8','0','0','0')
#define gettext_noop(x) (x)
#define PG_GETARG_TEXT_P(n) DatumGetTextP(PG_GETARG_DATUM(n))
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __USE_GNU 1
#define CURSOR_OPT_CUSTOM_PLAN 0x0400
#define MOD_OFFSET ADJ_OFFSET
#define _PTRDIFF_T_ 
#define HAVE_STDIO_H 1
#define SO_KEEPALIVE 9
#define F_GET_SEALS 1034
#define ACCEPT_TYPE_ARG1 int
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define DT_NOEND PG_INT64_MAX
#define HASH_ALLOC 0x0200
#define ACL_NO_RIGHTS 0
#define SCNi16 "hi"
#define NUM_TUPLESORTMETHODS 4
#define AuthIdRolnameIndexId 2676
#define ERRCODE_BRANCH_TRANSACTION_ALREADY_ACTIVE MAKE_SQLSTATE('2','5','0','0','2')
#define TYPTYPE_BASE 'b'
#define CITUS_NODE_TAG_START 1200
#define INT_LEAST32_MIN (-2147483647-1)
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define MEMSET_LOOP_LIMIT 1024
#define __GXX_ABI_VERSION 1016
#define MONEYARRAYOID 791
#define HeapTupleHeaderGetTypeId(tup) ( (tup)->t_choice.t_datum.datum_typeid )
#define RELKIND_RELATION 'r'
#define F_UNLCK 2
#define WalSndWakeupRequest() do { wake_wal_senders = true; } while (0)
#define UINTMAX_C(c) c ## UL
#define __USE_XOPEN2K8 1
#define closesocket close
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define PRIxFAST8 "x"
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define Anum_pg_class_relfrozenxid 29
#define ALLOCSET_DEFAULT_MINSIZE 0
#define ScanDirectionIsBackward(direction) ((bool) ((direction) == BackwardScanDirection))
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define islower_l(c,l) __islower_l ((c), (l))
#define ARR_NULLBITMAP(a) (ARR_HASNULL(a) ? (bits8 *) (((char *) (a)) + sizeof(ArrayType) + 2 * sizeof(int) * ARR_NDIM(a)) : (bits8 *) NULL)
#define AARR_ELEMTYPE(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.element_type : ARR_ELEMTYPE((ArrayType *) (a)))
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define ACL_ALL_RIGHTS_SCHEMA (ACL_USAGE|ACL_CREATE)
#define DSA_POINTER_FORMAT "%016" INT64_MODIFIER "x"
#define ENETDOWN 100
#define SInvalWriteLock (&MainLWLockArray[6].lock)
#define ERROR 21
#define RESUME_INTERRUPTS() do { Assert(InterruptHoldoffCount > 0); InterruptHoldoffCount--; } while(0)
#define LINE_MAX _POSIX2_LINE_MAX
#define __STRING(x) #x
#define BPCHAROID 1042
#define SO_OOBINLINE 10
#define PANIC 23
#define AGGSPLITOP_DESERIALIZE 0x08
#define PF_WANPIPE 25
#define NI_NUMERICHOST 1
#define __F_GETOWN 9
#define SIGVTALRM 26
#define F_OFD_GETLK 36
#define EAI_ALLDONE -103
#define INSTR_TIME_SUBTRACT(x,y) do { (x).tv_sec -= (y).tv_sec; (x).tv_nsec -= (y).tv_nsec; while ((x).tv_nsec < 0) { (x).tv_nsec += 1000000000; (x).tv_sec--; } } while (0)
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define DirectFunctionCall1(func,arg1) DirectFunctionCall1Coll(func, InvalidOid, arg1)
#define TTS_SLOW(slot) (((slot)->tts_flags & TTS_FLAG_SLOW) != 0)
#define DirectFunctionCall3(func,arg1,arg2,arg3) DirectFunctionCall3Coll(func, InvalidOid, arg1, arg2, arg3)
#define DirectFunctionCall4(func,arg1,arg2,arg3,arg4) DirectFunctionCall4Coll(func, InvalidOid, arg1, arg2, arg3, arg4)
#define TYPSTORAGE_EXTERNAL 'e'
#define DirectFunctionCall6(func,arg1,arg2,arg3,arg4,arg5,arg6) DirectFunctionCall6Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define DirectFunctionCall7(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7) DirectFunctionCall7Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define DirectFunctionCall8(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) DirectFunctionCall8Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define DirectFunctionCall9(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) DirectFunctionCall9Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define CATALOG(name,oid,oidmacro) typedef struct CppConcat(FormData_,name)
#define __INO_T_TYPE __ULONGWORD_TYPE
#define islower(c) __isctype((c), _ISlower)
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define CitusNodeTag(nodeptr) CitusNodeTagI((Node*) nodeptr)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define NotifyQueueLock (&MainLWLockArray[27].lock)
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define TRAP_TRACE TRAP_TRACE
#define PG_HAVE_ATOMIC_WRITE_U64 
#define SVE_SIG_ZREGS_OFFSET (SVE_SIG_REGS_OFFSET + __SVE_ZREGS_OFFSET)
#define __F_SETOWN_EX 15
#define SCNi64 __PRI64_PREFIX "i"
#define F_ULOCK 0
#define SI_ASYNCIO SI_ASYNCIO
#define DSM_H 
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define __LC_ALL 6
#define GROUPING_CAN_PARTIAL_AGG 0x0004
#define _FALLOC_H_ 
#define PROC_IN_SAFE_IC 0x04
#define __struct_tm_defined 1
#define ItemIdIsNormal(itemId) ((itemId)->lp_flags == LP_NORMAL)
#define _SC_TRACE _SC_TRACE
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define __ssize_t_defined 
#define EBADFD 77
#define HAVE_LIBXSLT 1
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define _SC_FSYNC _SC_FSYNC
#define FIELDNO_MINIMALTUPLETABLESLOT_TUPLE 1
#define FPE_INTOVF FPE_INTOVF
#define PageGetItemId(page,offsetNumber) ((ItemId) (&((PageHeader) (page))->pd_linp[(offsetNumber) - 1]))
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define gettext(msgid) dgettext (NULL, msgid)
#define WORKER_PARTITIONED_RELATION_TOTAL_SIZE_FUNCTION "worker_partitioned_relation_total_size(%s)"
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SIGPROF 27
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define SetInvalidVirtualTransactionId(vxid) ((vxid).backendId = InvalidBackendId, (vxid).localTransactionId = InvalidLocalTransactionId)
#define PF_BRIDGE 7
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define SET_LOCKTAG_DATABASE_FROZEN_IDS(locktag,dboid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = 0, (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_DATABASE_FROZEN_IDS, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define PF_TIPC 30
#define SCNoPTR __PRIPTR_PREFIX "o"
#define BITOID 1560
#define pg_spin_delay() pg_spin_delay_impl()
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define PG_GETARG_DATUM(n) (fcinfo->args[n].value)
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define RELKIND_FOREIGN_TABLE 'f'
#define HAVE_LIBLZ4 1
#define IPV6_MULTICAST_HOPS 18
#define CURSOR_OPT_SCROLL 0x0002
#define S_IFMT __S_IFMT
#define ACL_TRIGGER (1<<6)
#define LogicalRepWorkerLock (&MainLWLockArray[43].lock)
#define __nlink_t_defined 
#define INSTRUMENT_H 
#define IS_UPPER_REL(rel) ((rel)->reloptkind == RELOPT_UPPER_REL || (rel)->reloptkind == RELOPT_OTHER_UPPER_REL)
#define ERRCODE_INVALID_TABLESAMPLE_REPEAT MAKE_SQLSTATE('2','2','0','2','G')
#define IPV6_TRANSPARENT 75
#define PG_RETURN_INT16(x) return Int16GetDatum(x)
#define IndexRelidIndexId 2679
#define VARSIZE_SHORT(PTR) VARSIZE_1B(PTR)
#define pg_backend_random pg_strong_random
#define HeapTupleHasExternal(tuple) (((tuple)->t_data->t_infomask & HEAP_HASEXTERNAL) != 0)
#define ERRCODE_WINDOWING_ERROR MAKE_SQLSTATE('4','2','P','2','0')
#define __LC_ADDRESS 9
#define AT_FDCWD -100
#define HeapTupleNoNulls(tuple) (!((tuple)->t_data->t_infomask & HEAP_HASNULL))
#define _SYS_SIZE_T_H 
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define ERRCODE_INVALID_CURSOR_NAME MAKE_SQLSTATE('3','4','0','0','0')
#define ereport(elevel,...) ereport_domain(elevel, TEXTDOMAIN, __VA_ARGS__)
#define ERRCODE_INVALID_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','2','3')
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define INT32_MAX (2147483647)
#define LONG_MIN (-LONG_MAX - 1L)
#define __USE_ATFILE 1
#define __INT32_C(c) c
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define SRF_FIRSTCALL_INIT() init_MultiFuncCall(fcinfo)
#define _PATH_PROTOCOLS "/etc/protocols"
#define __glibc_macro_warning1(message) _Pragma (#message)
#define HAVE_ATOMICS 1
#define MACADDROID 829
#define ACLITEM_SET_GOPTIONS(item,goptions) ((item).ai_privs = ((item).ai_privs & ~(((AclMode) 0xFFFF) << 16)) | (((AclMode) (goptions) & 0xFFFF) << 16))
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define __STDC_IEC_559_COMPLEX__ 1
#define XL_ROUTINE(...) &(XLogReaderRoutine){__VA_ARGS__}
#define AI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("AI_IDN_USE_STD3_ASCII_RULES is deprecated") 0x0200
#define ACL_DELETE (1<<3)
#define OPCLASS_ITEM_FUNCTION 2
#define SyncRepLock (&MainLWLockArray[32].lock)
#define XactCompletionApplyFeedback(xinfo) ((xinfo & XACT_COMPLETION_APPLY_FEEDBACK) != 0)
#define PageXLogRecPtrSet(ptr,lsn) ((ptr).xlogid = (uint32) ((lsn) >> 32), (ptr).xrecoff = (uint32) (lsn))
#define XidGenLock (&MainLWLockArray[3].lock)
#define DN_ATTRIB 0x00000020
#define HAVE_WRITEV 1
#define PG_DETOAST_DATUM_PACKED(datum) pg_detoast_datum_packed((struct varlena *) DatumGetPointer(datum))
#define BTLessEqualStrategyNumber 2
#define dsa_pointer_atomic_init pg_atomic_init_u64
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define DOUBLEALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_DOUBLE, (LEN))
#define JULIAN_MINYEAR (-4713)
#define GUC_EXPLAIN 0x100000
#define __error_t_defined 1
#define __FLT128_DIG__ 33
#define PG_MODULE_MAGIC extern PGDLLEXPORT const Pg_magic_struct *PG_MAGIC_FUNCTION_NAME(void); const Pg_magic_struct * PG_MAGIC_FUNCTION_NAME(void) { static const Pg_magic_struct Pg_magic_data = PG_MODULE_MAGIC_DATA; return &Pg_magic_data; } extern int no_such_variable
#define __SCHAR_WIDTH__ 8
#define HAVE_SYS_EPOLL_H 1
#define LOCALHOST_NODE_ID -1
#define HAVE_GETOPT 1
#define SCNiLEAST8 "hhi"
#define DAYS_PER_MONTH 30
#define slist_head_element(type,membername,lhead) (AssertVariableIsOfTypeMacro(((type *) NULL)->membername, slist_node), (type *) slist_head_element_off(lhead, offsetof(type, membername)))
#define MultiXactMemberSLRULock (&MainLWLockArray[15].lock)
#define XLOG_H 
#define IP_ADD_MEMBERSHIP 35
#define ERRCODE_INVALID_ARGUMENT_FOR_NTH_VALUE MAKE_SQLSTATE('2','2','0','1','6')
#define __FLT32_MAX_10_EXP__ 38
#define DT_CHR DT_CHR
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define PG_PUBLICATION_D_H 
#define PG_HAVE_SPIN_DELAY 
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define ANYCOMPATIBLERANGEOID 5080
#define __INT_FAST32_TYPE__ long int
#define pg_compiler_barrier_impl() __asm__ __volatile__("" ::: "memory")
#define bool _Bool
#define DEFAULT_CHECKPOINT_FLUSH_AFTER 32
#define PG_LSNARRAYOID 3221
#define HAVE_SYS_STAT_H 1
#define TTS_IS_MINIMALTUPLE(slot) ((slot)->tts_ops == &TTSOpsMinimalTuple)
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define DN_DELETE 0x00000008
#define S_IWGRP (S_IWUSR >> 3)
#define forboth_ptr_oid(var1,l1,var2,l2) for (ListCell *(var1 ## CellDoNotUse) = list_head(l1), *(var2 ## CellDoNotUse) = list_head(l2); (var1 ## CellDoNotUse) != NULL && (var2 ## CellDoNotUse) != NULL && (((var1) = lfirst(var1 ## CellDoNotUse)) || true) && (((var2) = lfirst_oid(var2 ## CellDoNotUse)) || true); var1 ## CellDoNotUse = lnext(l1, var1 ## CellDoNotUse), var2 ## CellDoNotUse = lnext(l2, var2 ## CellDoNotUse) )
#define MINIMAL_TUPLE_OFFSET ((offsetof(HeapTupleHeaderData, t_infomask2) - sizeof(uint32)) / MAXIMUM_ALIGNOF * MAXIMUM_ALIGNOF)
#define SIG_DFL ((__sighandler_t) 0)
#define PG_INT16_MAX (0x7FFF)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define F_OK 0
#define _PC_PATH_MAX _PC_PATH_MAX
#define isgraph(c) __isctype((c), _ISgraph)
#define SHAREDINVALRELCACHE_ID (-2)
#define RelationHasCascadedCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option == VIEW_OPTION_CHECK_OPTION_CASCADED)
#define Anum_pg_authid_rolreplication 8
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define Anum_pg_attribute_attfdwoptions 25
#define ERRCODE_TOO_MANY_COLUMNS MAKE_SQLSTATE('5','4','0','1','1')
#define SInvalReadLock (&MainLWLockArray[5].lock)
#define PQTRACE_SUPPRESS_TIMESTAMPS (1<<0)
#define PG_VERSION "14.5 (Ubuntu 14.5-0ubuntu0.22.04.1)"
#define _POSIX_MAX_INPUT 255
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define _PC_LINK_MAX _PC_LINK_MAX
#define ESHUTDOWN 108
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define HAVE_SYS_SHM_H 1
#define INT32_MIN (-2147483647-1)
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define SO_SNDTIMEO_NEW 67
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define Anum_pg_class_relpersistence 16
#define AssertPointerAlignment(ptr,bndr) ((void)true)
#define SO_BINDTODEVICE 25
#define Anum_pg_dist_partition_logicalrelid 1
#define IPV6_RECVPKTINFO 49
#define AssertArg(condition) ((void)true)
#define TIMESTAMPTZOID 1184
#define RTSuperEqualStrategyNumber 27
#define LC_COLLATE __LC_COLLATE
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200809L
#define HeapTupleHeaderSetSpeculativeToken(tup,token) ( ItemPointerSet(&(tup)->t_ctid, token, SpecTokenOffsetNumber) )
#define ACL_ALL_RIGHTS_FOREIGN_SERVER (ACL_USAGE)
#define Anum_pg_type_typbasetype 26
#define ACL_NUM(ACL) (ARR_DIMS(ACL)[0])
#define BUF_H 
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define F_SETOWN __F_SETOWN
#define EXPLAIN_H 
#define XATTR_LIST_MAX 65536
#define INT_FAST64_WIDTH 64
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define HAVE_STRTOF 1
#define __FLT64X_DIG__ 33
#define SHARD_SIZES_COLUMN_COUNT (3)
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define FRAMEOPTION_END_CURRENT_ROW 0x00400
#define HAVE_LIBLDAP 1
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define PGINVALID_SOCKET (-1)
#define __INT8_TYPE__ signed char
#define MAX_LOCKMODES 10
#define F_SETLK64 6
#define ARR_DATA_OFFSET(a) (ARR_HASNULL(a) ? (a)->dataoffset : ARR_OVERHEAD_NONULLS(ARR_NDIM(a)))
#define InstrCountTuples2(node,delta) do { if (((PlanState *)(node))->instrument) ((PlanState *)(node))->instrument->ntuples2 += (delta); } while (0)
#define HAVE__BUILTIN_CLZ 1
#define XLogRecHasAnyBlockRefs(decoder) ((decoder)->max_block_id >= 0)
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define USECS_PER_MINUTE INT64CONST(60000000)
#define ITUP_H 
#define __ELF__ 1
#define PACKAGE_VERSION "14.5"
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define HASH_FUNCTION 0x0040
#define BTMaxStrategyNumber 5
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define BKPIMAGE_HAS_HOLE 0x01
#define InHotStandby (standbyState >= STANDBY_SNAPSHOT_PENDING)
#define DISTRIBUTE_BY_APPEND 'a'
#define PRIxMAX __PRI64_PREFIX "x"
#define XACT_XINFO_HAS_INVALS (1U << 3)
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define fmgr_info_set_expr(expr,finfo) ((finfo)->fn_expr = (expr))
#define ALIGNOF_INT 4
#define RowExclusiveLock 3
#define isdigit(c) __isctype((c), _ISdigit)
#define ERRCODE_WRONG_OBJECT_TYPE MAKE_SQLSTATE('4','2','8','0','9')
#define ELIBSCN 81
#define RTLessEqualStrategyNumber 21
#define F_TLOCK 2
#define ESFMTTYP ( 411 )
#define ERRCODE_GENERATED_ALWAYS MAKE_SQLSTATE('4','2','8','C','9')
#define SDIR_H 
#define _PGTIME_H 
#define REGOPERATOROID 2204
#define BKPBLOCK_SAME_REL 0x80
#define F_GETLEASE 1025
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define MCXT_ALLOC_HUGE 0x01
#define ACL_ALL_RIGHTS_DATABASE (ACL_CREATE|ACL_CREATE_TEMP|ACL_CONNECT)
#define SOL_RAW 255
#define PG_SNAPSHOTOID 5038
#define USECS_PER_HOUR INT64CONST(3600000000)
#define INT_LEAST16_WIDTH 16
#define __FLT_RADIX__ 2
#define Anum_pg_type_typarray 15
#define SO_REUSEPORT 15
#define PG_INT16_MIN (-0x7FFF-1)
#define HEAP_XMIN_FROZEN (HEAP_XMIN_COMMITTED|HEAP_XMIN_INVALID)
#define DISTRIBUTE_BY_INVALID '\0'
#define _BITS_TIME64_H 1
#define AI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("AI_IDN_ALLOW_UNASSIGNED is deprecated") 0x0100
#define ESNOSPC ( 406 )
#define PG_INT32_MIN (-0x7FFFFFFF-1)
#define ERRCODE_S_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','4')
#define TYPCATEGORY_BOOLEAN 'B'
#define SCNdPTR __PRIPTR_PREFIX "d"
#define HAVE_USELOCALE 1
#define __LC_MESSAGES 5
#define SLAB_LARGE_BLOCK_SIZE (8 * 1024 * 1024)
#define EAI_BADFLAGS -1
#define SCNxLEAST16 "hx"
#define XLogRecBlockImageApply(decoder,block_id) ((decoder)->blocks[block_id].apply_image)
#define USE_UNNAMED_POSIX_SEMAPHORES 1
#define _POSIX_ARG_MAX 4096
#define BUS_ADRALN BUS_ADRALN
#define AF_ATMSVC PF_ATMSVC
#define DEFAULT_DYNAMIC_SHARED_MEMORY_TYPE DSM_IMPL_POSIX
#define S_LOCK_FREE(lock) (*(lock) == 0)
#define SOL_RDS 276
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define UINT_FAST32_MAX (18446744073709551615UL)
#define SCNx16 "hx"
#define HEAP2_XACT_MASK 0xE000
#define CLOCK_MONOTONIC_RAW 4
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define RELSEG_SIZE 131072
#define MSG_TRUNC MSG_TRUNC
#define RegProcedureIsValid(p) OidIsValid(p)
#define _SC_FD_MGMT _SC_FD_MGMT
#define F_TEST 3
#define Anum_pg_attribute_attislocal 20
#define INDEX_VAR_MASK 0x4000
#define __f32(x) x ##f32
#define N_ACL_RIGHTS 12
#define SAFE_STR_MIN_UPPERCASE ( 2 )
#define SO_PREFER_BUSY_POLL 69
#define TYPEALIGN_DOWN(ALIGNVAL,LEN) (((uintptr_t) (LEN)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define _BITS_SIGSTACK_H 1
#define _POSIX_TIMEOUTS 200809L
#define SyncScanLock (&MainLWLockArray[24].lock)
#define HAVE__BUILTIN_CTZ 1
#define PG_DIAG_MESSAGE_HINT 'H'
#define TABLESPACE_VERSION_DIRECTORY "PG_" PG_MAJORVERSION "_" CppAsString2(CATALOG_VERSION_NO)
#define EOVERFLOW 75
#define __STDC_IEC_60559_BFP__ 201404L
#define REGOPERATORARRAYOID 2209
#define S_IRUSR __S_IREAD
#define GUC_UNIT_BLOCKS 0x2000
#define list_make3_int(x1,x2,x3) list_make3_impl(T_IntList, list_make_int_cell(x1), list_make_int_cell(x2), list_make_int_cell(x3))
#define FunctionCall4(flinfo,arg1,arg2,arg3,arg4) FunctionCall4Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4)
#define AF_PACKET PF_PACKET
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define HeapTupleHeaderIsHotUpdated(tup) ( ((tup)->t_infomask2 & HEAP_HOT_UPDATED) != 0 && ((tup)->t_infomask & HEAP_XMAX_INVALID) == 0 && !HeapTupleHeaderXminInvalid(tup) )
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define O_CLOEXEC __O_CLOEXEC
#define WAIT_EVENT_SET_INDEX_FAILED -2
#define __SIZEOF_PTHREAD_COND_T 48
#define __P(args) args
#define SEEK_SET 0
#define PG_KRB_SRVNAM "postgres"
#define __sve_vq_from_vl(vl) ((vl) / __SVE_VQ_BYTES)
#define EAI_NODATA -5
#define OffsetNumberNext(offsetNumber) ((OffsetNumber) (1 + (offsetNumber)))
#define PageIsValid(page) PointerIsValid(page)
#define AF_IEEE802154 PF_IEEE802154
#define ERRCODE_FEATURE_NOT_SUPPORTED MAKE_SQLSTATE('0','A','0','0','0')
#define SCNxLEAST64 __PRI64_PREFIX "x"
#define BYTEAOID 17
#define VARDATA_EXTERNAL(PTR) VARDATA_1B_E(PTR)
#define __f64(x) x ##f64
#define LSNOID PG_LSNOID
#define PG_GETARG_VARCHAR_P_COPY(n) DatumGetVarCharPCopy(PG_GETARG_DATUM(n))
#define pg_pread pread
#define PageGetPageLayoutVersion(page) (((PageHeader) (page))->pd_pagesize_version & 0x00FF)
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define INT_LEAST8_WIDTH 8
#define ERRCODE_INVALID_DATETIME_FORMAT MAKE_SQLSTATE('2','2','0','0','7')
#define DATE_END_JULIAN (2147483494)
#define ACL_REFERENCES_CHR 'x'
#define __FLT32X_MANT_DIG__ 53
#define shm_toc_estimate_chunk(e,sz) ((e)->space_for_chunks = add_size((e)->space_for_chunks, BUFFERALIGN(sz)))
#define SCNx64 __PRI64_PREFIX "x"
#define XLR_NORMAL_MAX_BLOCK_ID 4
#define EUCLEAN 117
#define _POSIX_IPV6 200809L
#define XactCompletionRelcacheInitFileInval(xinfo) ((xinfo & XACT_COMPLETION_UPDATE_RELCACHE_FILE) != 0)
#define EpochFromFullTransactionId(x) ((uint32) ((x).value >> 32))
#define IP_MSFILTER 41
#define _EXTERN_INLINE __extern_inline
#define HASH_DIRSIZE 0x0004
#define _SIGNAL_H 
#define HAVE_GETPWUID_R 1
#define _POSIX_SHELL 1
#define PG_RETURN_BOOL(x) return BoolGetDatum(x)
#define PG_TOTAL_RELATION_SIZE_FUNCTION "pg_total_relation_size(%s)"
#define EAI_OVERFLOW -12
#define ALLOCSET_SMALL_INITSIZE (1 * 1024)
#define ShareLock 5
#define AttributeRelation_Rowtype_Id 75
#define __LC_PAPER 7
#define IP_BLOCK_SOURCE 38
#define __S_IEXEC 0100
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define W_OK 2
#define FIELDNO_AGGSTATE_CURAGGCONTEXT 14
#define BKI_FORCE_NULL 
#define _SIZE_T_ 
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define __FLT16_IS_IEC_60559__ 2
#define MaxAllocSize ((Size) 0x3fffffff)
#define __FLT16_MAX_EXP__ 16
#define REGPROCOID 24
#define RELCACHE_INIT_FILENAME "pg_internal.init"
#define DEFAULT_XLOG_SEG_SIZE (16*1024*1024)
#define O_CREAT 0100
#define __S_IWRITE 0200
#define _WCHAR_T_H 
#define IP_RETOPTS 7
#define EPROTO 71
#define ENODEV 19
#define POLL_OUT POLL_OUT
#define GUC_check_errdetail pre_format_elog_string(errno, TEXTDOMAIN), GUC_check_errdetail_string = format_elog_string
#define BOOL_MAX 1
#define INT16_WIDTH 16
#define LLONG_WIDTH 64
#define BGWORKER_H 
#define CHECK_FOR_INTERRUPTS() do { if (INTERRUPTS_PENDING_CONDITION()) ProcessInterrupts(); } while(0)
#define __stub_revoke 
#define _POSIX_CHOWN_RESTRICTED 0
#define USE_LIBXSLT 1
#define INT_MAX __INT_MAX__
#define PG_GETARG_ACLITEM_P(n) DatumGetAclItemP(PG_GETARG_DATUM(n))
#define likely(x) __builtin_expect((x) != 0, 1)
#define __stub___compat_create_module 
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define for_both_cell(cell1,list1,initcell1,cell2,list2,initcell2) for (ForBothCellState cell1 ##__state = for_both_cell_setup(list1, initcell1, list2, initcell2); multi_for_advance_cell(cell1, cell1 ##__state, l1, i1), multi_for_advance_cell(cell2, cell1 ##__state, l2, i2), (cell1 != NULL && cell2 != NULL); cell1 ##__state.i1++, cell1 ##__state.i2++)
#define RTPrefixStrategyNumber 28
#define foreach(cell,lst) for (ForEachState cell ##__state = {(lst), 0}; (cell ##__state.l != NIL && cell ##__state.i < cell ##__state.l->length) ? (cell = &cell ##__state.l->elements[cell ##__state.i], true) : (cell = NULL, false); cell ##__state.i++)
#define _POSIX_MONOTONIC_CLOCK 0
#define EKEYEXPIRED 127
#define F_NOTIFY 1026
#define BKPIMAGE_APPLY 0x04
#define HEAP_COMBOCID 0x0020
#define ATOMICS_H 
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define O_DIRECT __O_DIRECT
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define ACL_UPDATE_CHR 'w'
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __USE_ISOC95 1
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define MINSIGSTKSZ SIGSTKSZ
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define _TIME_H 1
#define ERRCODE_CONNECTION_FAILURE MAKE_SQLSTATE('0','8','0','0','6')
#define DT_REG DT_REG
#define SHAREDINVALSMGR_ID (-3)
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 6
#define ERRCODE_INVALID_ROW_COUNT_IN_RESULT_OFFSET_CLAUSE MAKE_SQLSTATE('2','2','0','1','X')
#define ProcessUtility_compat(a,b,c,d,e,f,g,h) ProcessUtility(a, b, c, d, e, f, g, h)
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define Anum_pg_publication_pubowner 3
#define _POSIX_TRACE_INHERIT -1
#define STRINGINFO_H 
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define ERRCODE_INVALID_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','M')
#define ERRCODE_FDW_TABLE_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','R')
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define _PATH_NETWORKS "/etc/networks"
#define PF_IEEE802154 36
#define ACLITEM_GET_GOPTIONS(item) (((item).ai_privs >> 16) & 0xFFFF)
#define RECOVERY_SIGNAL_FILE "recovery.signal"
#define GUC_IS_NAME 0x0200
#define CStringGetDatum(X) PointerGetDatum(X)
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define _PC_SYNC_IO _PC_SYNC_IO
#define SHAREDINVALCATALOG_ID (-1)
#define SIGWINCH 28
#define va_copy(d,s) __builtin_va_copy(d,s)
#define TypeRelation_Rowtype_Id 71
#define ACLITEM_SET_RIGHTS(item,rights) ((item).ai_privs = (AclMode) (rights))
#define PG_GETARG_INT16(n) DatumGetInt16(PG_GETARG_DATUM(n))
#define EHWPOISON 133
#define DECLARE_INDEX(name,oid,decl) extern int no_such_variable
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define __FLT_HAS_INFINITY__ 1
#define HAVE_SPINLOCKS 1
#define MaxIndexTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(sizeof(IndexTupleData) + 1) + sizeof(ItemIdData))))
#define SO_SNDBUF 7
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define XLogRecGetXid(decoder) ((decoder)->decoded_record->xl_xid)
#define INTERVAL_FULL_RANGE (0x7FFF)
#define HAVE_LONG_INT_64 1
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define _BSD_PTRDIFF_T_ 
#define EXTENSIBLE_H 
#define PRIXPTR __PRIPTR_PREFIX "X"
#define GUC_NO_SHOW_ALL 0x0004
#define SIGXFSZ 25
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define CITUS_APPLICATION_NAME_PREFIX "citus_internal gpid="
#define CHECKPOINT_CAUSE_XLOG 0x0080
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define ERRCODE_TRIGGERED_DATA_CHANGE_VIOLATION MAKE_SQLSTATE('2','7','0','0','0')
#define Anum_pg_attribute_attcacheoff 8
#define TYPCATEGORY_USER 'U'
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define LP_DEAD 3
#define FirstOffsetNumber ((OffsetNumber) 1)
#define ERRCODE_LOCATOR_EXCEPTION MAKE_SQLSTATE('0','F','0','0','0')
#define PG_GETARG_INT32(n) DatumGetInt32(PG_GETARG_DATUM(n))
#define SET_LOCKTAG_RELATION(locktag,dboid,reloid) ((locktag).locktag_field1 = (dboid), (locktag).locktag_field2 = (reloid), (locktag).locktag_field3 = 0, (locktag).locktag_field4 = 0, (locktag).locktag_type = LOCKTAG_RELATION, (locktag).locktag_lockmethodid = DEFAULT_LOCKMETHOD)
#define __INT_FAST32_WIDTH__ 64
#define BGW_NEVER_RESTART -1
#define dlist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, dlist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, dlist_head *), (iter).end = &(lhead)->head, (iter).cur = (iter).end->next ? (iter).end->next : (iter).end, (iter).next = (iter).cur->next; (iter).cur != (iter).end; (iter).cur = (iter).next, (iter).next = (iter).cur->next)
#define NULL ((void *)0)
#define JULIAN_MINDAY (24)
#define AF_IRDA PF_IRDA
#define HAVE__BOOL 1
#define ARR_HASNULL(a) ((a)->dataoffset != 0)
#define E2BIG 7
#define SIGRTMAX (__libc_current_sigrtmax ())
#define BIG_ENDIAN __BIG_ENDIAN
#define PF_PPPOX 24
#define CitusNewNode(size,tag) ({ CitusNode *_result; AssertMacro((size) >= sizeof(CitusNode)); _result = (CitusNode *) palloc0fast(size); _result->extensible.type = T_ExtensibleNode; _result->extensible.extnodename = CitusNodeTagNames[tag - CITUS_NODE_TAG_START]; _result->citus_tag =(int) (tag); _result; })
#define SO_ATTACH_REUSEPORT_CBPF 51
#define O_ASYNC 020000
#define SO_TIMESTAMPNS_NEW 64
#define DatumGetTextPP(X) ((text *) PG_DETOAST_DATUM_PACKED(X))
#define INT_MIN (-INT_MAX - 1)
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define NO_DATA 4
#define HAVE_SYMLINK 1
#define AF_RXRPC PF_RXRPC
#define IPV6_XFRM_POLICY 35
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define ACL_CREATE_TEMP_CHR 'T'
#define OidFunctionCall3(functionId,arg1,arg2,arg3) OidFunctionCall3Coll(functionId, InvalidOid, arg1, arg2, arg3)
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define PG_GETARG_INT64(n) DatumGetInt64(PG_GETARG_DATUM(n))
#define EL3RST 47
#define CheckpointerCommLock (&MainLWLockArray[17].lock)
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define ERRCODE_UNSAFE_NEW_ENUM_VALUE_USAGE MAKE_SQLSTATE('5','5','P','0','4')
#define PF_QIPCRTR 42
#define Anum_pg_index_indnatts 3
#define FIELDNO_FUNCTIONCALLINFODATA_ARGS 6
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define SI_TKILL SI_TKILL
#define XACT_XINFO_HAS_DBINFO (1U << 0)
#define SVE_SIG_ZREG_OFFSET(vq,n) (SVE_SIG_REGS_OFFSET + __SVE_ZREG_OFFSET(vq, n))
#define HEAP_XMAX_IS_SHR_LOCKED(infomask) (((infomask) & HEAP_LOCK_MASK) == HEAP_XMAX_SHR_LOCK)
#define HAVE_GSSAPI_GSSAPI_H 1
#define PG_HAVE_ATOMIC_FETCH_AND_U32 
#define SOL_KCM 281
#define MCXT_ALLOC_ZERO 0x04
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define MSG_OOB MSG_OOB
#define _INTTYPES_H 1
#define S_LOCK(lock) (TAS(lock) ? s_lock((lock), __FILE__, __LINE__, PG_FUNCNAME_MACRO) : 0)
#define PD_PAGE_FULL 0x0002
#define PG_SEMA_H 
#define PG_GETARG_BPCHAR_P_SLICE(n,a,b) DatumGetBpCharPSlice(PG_GETARG_DATUM(n),a,b)
#define __STDC_VERSION__ 199901L
#define WrapLimitsVacuumLock (&MainLWLockArray[46].lock)
#define MemSet(start,val,len) do { void *_vstart = (void *) (start); int _val = (val); Size _len = (len); if ((((uintptr_t) _vstart) & LONG_ALIGN_MASK) == 0 && (_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0)
#define ERRCODE_OBJECT_IN_USE MAKE_SQLSTATE('5','5','0','0','6')
#define lfirst_node(type,lc) castNode(type, lfirst(lc))
#define HEAP_HASVARWIDTH 0x0002
#define SO_DEBUG 1
#define SEEK_HOLE 4
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define __WCHAR_MB_LEN_MAX 16
#define VARATT_IS_EXTERNAL_INDIRECT(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_INDIRECT)
#define __ARM_ARCH 8
#define Anum_pg_attribute_attlen 5
#define RM_MAX_ID (RM_NEXT_ID - 1)
#define ILL_BADSTK ILL_BADSTK
#define __PMT(args) args
#define llast_int(l) lfirst_int(list_last_cell(l))
#define HAVE_INET_ATON 1
#define AF_SMC PF_SMC
#define AF_NETBEUI PF_NETBEUI
#define AT_NO_AUTOMOUNT 0x800
#define PREDICATELOCK_MANAGER_LWLOCK_OFFSET (LOCK_MANAGER_LWLOCK_OFFSET + NUM_LOCK_PARTITIONS)
#define IPV6_2292RTHDR 5
#define POSTGRES_EXT_H 
#define ERRCODE_CHECK_VIOLATION MAKE_SQLSTATE('2','3','5','1','4')
#define ECONNRESET 104
#define IS_SPECIAL_VARNO(varno) ((varno) >= INNER_VAR)
#define HeapScanIsValid(scan) PointerIsValid(scan)
#define PGDLLIMPORT 
#define PRIuFAST64 __PRI64_PREFIX "u"
#define AttrNumberIsForUserDefinedAttr(attributeNumber) ((bool) ((attributeNumber) > 0))
#define _LINUX_LIMITS_H 
#define AF_SNA PF_SNA
#define HAVE_CLOCK_GETTIME 1
#define _SC_2_VERSION _SC_2_VERSION
#define IntervalPGetDatum(X) PointerGetDatum(X)
#define LP_NORMAL 1
#define FirstLowInvalidHeapAttributeNumber (-7)
#define SIGSTOP 19
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define ENXIO 6
#define EXEC_FLAG_WITH_NO_DATA 0x0020
#define SCNuFAST16 __PRIPTR_PREFIX "u"
#define CLOCK_MONOTONIC 1
#define IS_PARTITIONED_REL(rel) ((rel)->part_scheme && (rel)->boundinfo && (rel)->nparts > 0 && (rel)->part_rels && !IS_DUMMY_REL(rel))
#define IPV6_RTHDR_LOOSE 0
#define PG_RETURN_ACLITEM_P(x) PG_RETURN_POINTER(x)
#define AARR_LBOUND(a) (VARATT_IS_EXPANDED_HEADER(a) ? (a)->xpn.lbound : ARR_LBOUND((ArrayType *) (a)))
#define PG_FUNCTION_ARGS FunctionCallInfo fcinfo
#define SIGALRM 14
#define __FLT64_HAS_QUIET_NAN__ 1
#define ROLE_PG_READ_ALL_DATA 6181
#define ERRCODE_EXCLUSION_VIOLATION MAKE_SQLSTATE('2','3','P','0','1')
#define SIGRTMIN (__libc_current_sigrtmin ())
#define ERRCODE_DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST MAKE_SQLSTATE('2','B','0','0','0')
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define F_GETLK64 5
#define forboth_ptr(var1,l1,var2,l2) for (ListCell *(var1 ## CellDoNotUse) = list_head(l1), *(var2 ## CellDoNotUse) = list_head(l2); (var1 ## CellDoNotUse) != NULL && (var2 ## CellDoNotUse) != NULL && (((var1) = lfirst(var1 ## CellDoNotUse)) || true) && (((var2) = lfirst(var2 ## CellDoNotUse)) || true); var1 ## CellDoNotUse = lnext(l1, var1 ## CellDoNotUse), var2 ## CellDoNotUse = lnext(l2, var2 ## CellDoNotUse) )
#define INTERVAL_MASK(b) (1 << (b))
#define EBADRQC 56
#define EQ_CRC32C(c1,c2) ((c1) == (c2))
#define TermTupleHashIterator(iter) ((void) 0)
#define PG_HAVE_ATOMIC_UNLOCKED_TEST_FLAG 
#define AT_STATX_FORCE_SYNC 0x2000
#define PROMOTE_SIGNAL_FILE "promote"
#define DatumGetTextP(X) ((text *) PG_DETOAST_DATUM(X))
#define SelfItemPointerAttributeNumber (-1)
#define LockHashPartition(hashcode) ((hashcode) % NUM_LOCK_PARTITIONS)
#define USE_ARMV8_CRC32C_WITH_RUNTIME_CHECK 1
#define HAVE_LOCALE_T 1
#define Anum_pg_class_relhassubclass 22
#define L_XTND SEEK_END
#define __WALL 0x40000000
#define SCNuFAST32 __PRIPTR_PREFIX "u"
#define MCAST_JOIN_GROUP 42
#define ERRCODE_ZERO_LENGTH_CHARACTER_STRING MAKE_SQLSTATE('2','2','0','0','F')
#define dsa_allocate(area,size) dsa_allocate_extended(area, size, 0)
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define POSTGRES_EPOCH_JDATE 2451545
#define PG_HAVE_ATOMIC_FETCH_ADD_U32 
#define __KEY_T_TYPE __S32_TYPE
#define __SVE_VQ_MAX 512
#define RELKIND_VIEW 'v'
#define __F_SETSIG 10
#define POLYGONOID 604
#define ERRCODE_NO_ADDITIONAL_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','2','0','0','1')
#define ItemPointerGetBlockNumberNoCheck(pointer) ( BlockIdGetBlockNumber(&(pointer)->ip_blkid) )
#define LOCK_GRAPH_H 
#define PF_CAN 29
#define LOG 15
#define FIELDNO_EXPRSTATE_RESVALUE 3
#define INT8MULTIRANGEOID 4536
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 113
#define FIELDNO_AGGSTATE_CURPERTRANS 16
#define ___int_ptrdiff_t_h 
#define __stub___compat_get_kernel_syms 
#define CHAR_MIN 0
#define IPV6_RECVFRAGSIZE 77
#define DATERANGEOID 3912
#define ALLOW_ALL_EXTERNAL_CONNECTIONS -1
#define VARDATA_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_data)
#define att_addlength_datum(cur_offset,attlen,attdatum) att_addlength_pointer(cur_offset, attlen, DatumGetPointer(attdatum))
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define SVE_SIG_FFR_SIZE(vq) __SVE_FFR_SIZE(vq)
#define InvalidLocalTransactionId 0
#define SCNuFAST64 __PRI64_PREFIX "u"
#define __FLT64_HAS_INFINITY__ 1
#define PG_HAVE_ATOMIC_FETCH_OR_U32 
#define PG_GETARG_HEAPTUPLEHEADER_COPY(n) DatumGetHeapTupleHeaderCopy(PG_GETARG_DATUM(n))
#define ERRCODE_FDW_INVALID_DATA_TYPE MAKE_SQLSTATE('H','V','0','0','4')
#define MCXT_ALLOC_NO_OOM 0x02
#define false 0
#define IPV6_JOIN_GROUP 20
#define POLL_HUP POLL_HUP
#define HASH_SEGMENT 0x0002
#define _STRING_H 1
#define UINT_FAST32_WIDTH __WORDSIZE
#define __GNUC_VA_LIST 
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define HAVE_DECL_LLVMORCGETSYMBOLADDRESSIN 0
#define HAVE_LIBM 1
#define BYTEAARRAYOID 1001
#define BlockIdSet(blockId,blockNumber) ( AssertMacro(PointerIsValid(blockId)), (blockId)->bi_hi = (blockNumber) >> 16, (blockId)->bi_lo = (blockNumber) & 0xffff )
#define WSTOPPED 2
#define HAVE_LIBZ 1
#define fcGetArgNull(fc,n) ((fc)->args[n].isnull)
#define ERRCODE_UNDEFINED_FILE MAKE_SQLSTATE('5','8','P','0','1')
#define ERRCODE_MOST_SPECIFIC_TYPE_MISMATCH MAKE_SQLSTATE('2','2','0','0','G')
#define PARTITION_STRATEGY_RANGE 'r'
#define _XOPEN_REALTIME 1
#define HAVE_LIBSSL 1
#define ATTRIBUTE_IDENTITY_ALWAYS 'a'
#define DISTRIBUTE_BY_NONE 'n'
#define Anum_pg_class_reltuples 11
#define FILENAME_MAX 4096
#define SOL_RXRPC 272
#define MaxLockMode 8
#define EEO_FLAG_IS_QUAL (1 << 0)
#define REGCONFIGARRAYOID 3735
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define PublicationRelationId 6104
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define VARHDRSZ ((int32) sizeof(int32))
#define IPPROTO_RAW IPPROTO_RAW
#define HAVE_POSIX_FADVISE 1
#define __ino_t_defined 
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define __CLOCKID_T_TYPE __S32_TYPE
#define PG_HAVE_ATOMIC_FETCH_OR_U64 
#define HeapTupleHeaderGetRawXmin(tup) ( (tup)->t_choice.t_heap.t_xmin )
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define ESOVRLP ( 404 )
#define PRIiPTR __PRIPTR_PREFIX "i"
#define USE_LDAP 1
#define Anum_pg_publication_pubname 2
#define ____sigval_t_defined 
#define DatumGetVarCharPCopy(X) ((VarChar *) PG_DETOAST_DATUM_COPY(X))
#define COORDINATOR_GROUP_ID 0
#define _POSIX_MEMLOCK_RANGE 200809L
#define GLOBAL_PID_NODE_ID_FOR_NODES_NOT_IN_METADATA 99999999
#define CHECKPOINT_REQUESTED 0x0040
#define XACT_XINFO_HAS_TWOPHASE (1U << 4)
#define NUM_AUXILIARY_PROCS 5
#define IPPROTO_ICMP IPPROTO_ICMP
#define SerializableFinishedListLock (&MainLWLockArray[29].lock)
#define MACADDRARRAYOID 1040
#define ELIBEXEC 83
#define RWH_WRITE_LIFE_NOT_SET 0
#define FKCONSTR_MATCH_SIMPLE 's'
#define Anum_pg_class_relam 7
#define PG_DIAG_SOURCE_FILE 'F'
#define UNSET_NULLABLE_FIELD(ptr,field) (ptr)->field = NULL; memset_struct_0((ptr)->__nullable_storage.field)
#define ERRCODE_TO_CATEGORY(ec) ((ec) & ((1 << 12) - 1))
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define LocalTransactionIdIsValid(lxid) ((lxid) != InvalidLocalTransactionId)
#define HAVE__STATIC_ASSERT 1
#define RTOverBelowStrategyNumber 9
#define HAVE_DECL_LLVMCREATEGDBREGISTRATIONLISTENER 1
#define __INT_FAST64_WIDTH__ 64
#define CUSTOMPATH_SUPPORT_MARK_RESTORE 0x0002
#define INDEX_NULL_MASK 0x8000
#define __SVE_VQ_MIN 1
#define AmStartupProcess() (MyAuxProcType == StartupProcess)
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ERRCODE_NONSTANDARD_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','P','0','6')
#define DatumGetByteaPSlice(X,m,n) ((bytea *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define __BYTE_ORDER __LITTLE_ENDIAN
#define TupIsNull(slot) ((slot) == NULL || TTS_EMPTY(slot))
#define _BITS_UIO_LIM_H 1
#define ALIGNOF_SHORT 2
#define INT64_WIDTH 64
#define EADDRNOTAVAIL 99
#define ETIME 62
#define _NETDB_H 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define ERRCODE_SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','1')
#define DatumGetTextPCopy(X) ((text *) PG_DETOAST_DATUM_COPY(X))
#define INT_FAST32_MAX (9223372036854775807L)
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define __FLT64X_MAX_EXP__ 16384
#define XactTruncationLock (&MainLWLockArray[44].lock)
#define lfourth_node(type,l) castNode(type, lfourth(l))
#define SVE_NUM_PREGS __SVE_NUM_PREGS
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define __UINT_FAST64_TYPE__ long unsigned int
#define ANYENUMOID 3500
#define XLR_BLOCK_ID_ORIGIN 253
#define BACKEND_DATA_H 
#define Anum_pg_class_relpages 10
#define TABLE_AM_HANDLEROID 269
#define HAVE_PPOLL 1
#define HeapTupleSetHotUpdated(tuple) HeapTupleHeaderSetHotUpdated((tuple)->t_data)
#define RelationGetPartitionDesc_compat(a,b) RelationGetPartitionDesc(a, b)
#define __LDBL_REDIR_DECL(name) 
#define Anum_pg_index_indnkeyatts 4
#define UINT_FAST8_MAX (255)
#define PG_COPYRES_NOTICEHOOKS 0x08
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR __S_IEXEC
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define _POSIX_ADVISORY_INFO 200809L
#define AmWalReceiverProcess() (MyAuxProcType == WalReceiverProcess)
#define BYTE_ORDER __BYTE_ORDER
#define RTSIG_MAX 32
#define PTRDIFF_WIDTH __WORDSIZE
#define pgstat_init_relation(r) pgstat_initstats(r)
#define ULLONG_WIDTH 64
#define XLogRecGetOrigin(decoder) ((decoder)->record_origin)
#define si_band _sifields._sigpoll.si_band
#define COMP_CRC32C(crc,data,len) ((crc) = pg_comp_crc32c((crc), (data), (len)))
#define UINT8_MAX (255)
#define TIMESTAMP_NOEND(j) do {(j) = DT_NOEND;} while (0)
#define ERRCODE_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('2','2','0','0','1')
#define XLR_BLOCK_ID_DATA_SHORT 255
#define __FILE_defined 1
#define SOL_IUCV 277
#define LOCKDEFS_H_ 
#define HAVE_PWRITE 1
#define IPV6_RTHDR 57
#define STDIN_FILENO 0
#define Anum_pg_authid_rolname 2
#define SI_ASYNCNL SI_ASYNCNL
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define MemSetAligned(start,val,len) do { long *_start = (long *) (start); int _val = (val); Size _len = (len); if ((_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_start, _val, _len); } while (0)
#define SECS_PER_DAY 86400
#define _T_SIZE_ 
#define ADJ_OFFSET 0x0001
#define LLONG_MAX __LONG_LONG_MAX__
#define IPV6_RECVHOPLIMIT 51
#define ERRCODE_WARNING MAKE_SQLSTATE('0','1','0','0','0')
#define ENOTRECOVERABLE 131
#define PAIRINGHEAP_H 
#define PF_ATMSVC 20
#define HAVE_EXPLICIT_BZERO 1
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define ERRCODE_INVALID_PSTATEMENT_DEFINITION MAKE_SQLSTATE('4','2','P','1','4')
#define XLogRecGetInfo(decoder) ((decoder)->decoded_record->xl_info)
#define __WNOTHREAD 0x20000000
#define __LC_NUMERIC 1
#define HAVE_LIBPAM 1
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define AF_LLC PF_LLC
#define __INT64_TYPE__ long int
#define HEAP_XMAX_BITS (HEAP_XMAX_COMMITTED | HEAP_XMAX_INVALID | HEAP_XMAX_IS_MULTI | HEAP_LOCK_MASK | HEAP_XMAX_LOCK_ONLY)
#define XLOG_XACT_PREPARE 0x10
#define ERRCODE_E_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','2')
#define EIO 5
#define UINT64_FORMAT "%" INT64_MODIFIER "u"
#define ITIMER_REAL ITIMER_REAL
#define HAVE_LINK 1
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define ENETUNREACH 101
#define EXDEV 18
#define PG_GETARG_VARCHAR_P(n) DatumGetVarCharP(PG_GETARG_DATUM(n))
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define va_start(v,l) __builtin_va_start(v,l)
#define PRIX8 "X"
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define S_IRGRP (S_IRUSR >> 3)
#define UINT32_C(c) c ## U
#define HAVE_INT64_TIMESTAMP 
#define ERRCODE_FDW_INVALID_COLUMN_NUMBER MAKE_SQLSTATE('H','V','0','0','8')
#define pg_ntoh32(x) pg_bswap32(x)
#define HAVE_SYNCFS 1
#define PG_RETURN_NULL() do { fcinfo->isnull = true; return (Datum) 0; } while (0)
#define ERRCODE_INVALID_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','0','C')
#define PF_PACKET 17
#define HAVE__BUILTIN_BSWAP16 1
#define MSG_SYN MSG_SYN
#define HAVE_SETSID 1
#define __INO64_T_TYPE __UQUAD_TYPE
#define INSTR_TIME_SET_CURRENT(t) ((void) clock_gettime(PG_INSTR_CLOCK, &(t)))
#define _POSIX_V6_ILP32_OFF32 -1
#define WORKER_PARTITIONED_TABLE_SIZE_FUNCTION "worker_partitioned_table_size(%s)"
#define DatumGetAclItemP(X) ((AclItem *) DatumGetPointer(X))
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define _POSIX_TRACE -1
#define __FP_FAST_FMAF32 1
#define BKI_DEFAULT(value) 
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __WINT_TYPE__ unsigned int
#define MB_LEN_MAX 16
#define _POSIX_FSYNC 200809L
#define __SIZEOF_SHORT__ 2
#define F_SEAL_GROW 0x0004
#define IS_HIGHBIT_SET(ch) ((unsigned char)(ch) & HIGHBIT)
#define STDOUT_FILENO 1
#define _ASM_GENERIC_TYPES_H 
#define HIGHBIT (0x80)
#define ALLOCSET_SMALL_MINSIZE 0
#define TRANSACTION_IDENTIFIER_H 
#define llast_oid(l) lfirst_oid(list_last_cell(l))
#define __intptr_t_defined 
#define BKI_SHARED_RELATION 
#define outerPlan(node) (((Plan *)(node))->lefttree)
#define SOL_PACKET 263
#define BKPBLOCK_HAS_DATA 0x20
#define MOD_TAI ADJ_TAI
#define HAVE__BUILTIN_BSWAP32 1
#define ITEMID_H 
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define WORKER_RACK_TRIES 5
#define HAVE_STRERROR_R 1
#define ERRCODE_ADMIN_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','1')
#define ACLITEM_SET_PRIVS(item,privs) ((item).ai_privs = ((item).ai_privs & ~((AclMode) 0xFFFF)) | ((AclMode) (privs) & 0xFFFF))
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define XLR_RMGR_INFO_MASK 0xF0
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ERRCODE_UNDEFINED_PSTATEMENT MAKE_SQLSTATE('2','6','0','0','0')
#define OidGenLock (&MainLWLockArray[2].lock)
#define AT_STATX_DONT_SYNC 0x4000
#define HAVE_PLANNERINFO_TYPEDEF 1
#define ENOSPC 28
#define ERRCODE_UNTRANSLATABLE_CHARACTER MAKE_SQLSTATE('2','2','P','0','5')
#define HEAP_DEFAULT_FILLFACTOR 100
#define SCNuPTR __PRIPTR_PREFIX "u"
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define ERRCODE_E_R_I_E_SRF_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','2')
#define RTKNNSearchStrategyNumber 15
#define EOK ( 0 )
#define FETCH_ALL LONG_MAX
#define RSIZE_MAX_MEM16 ( RSIZE_MAX_MEM/2 )
#define SO_RCVBUF 8
#define VARDATA_SHORT(PTR) VARDATA_1B(PTR)
#define HAVE_MKDTEMP 1
#define AmWalWriterProcess() (MyAuxProcType == WalWriterProcess)
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define TransactionIdEquals(id1,id2) ((id1) == (id2))
#define __INT_LEAST32_TYPE__ int
#define PG_HAVE_ATOMIC_U64_SUPPORT 
#define XLOG_STANDBY_LOCK 0x00
#define HAVE__BUILTIN_BSWAP64 1
#define BUFFERALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_BUFFER, (LEN))
#define SIGTSTP 20
#define HASH_TOKEN_COUNT INT64CONST(4294967296)
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define PG_CATCH() } else { PG_exception_stack = _save_exception_stack; error_context_stack = _save_context_stack
#define MaxHeapAttributeNumber 1600
#define ERRCODE_DUPLICATE_OBJECT MAKE_SQLSTATE('4','2','7','1','0')
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define PageSetFull(page) (((PageHeader) (page))->pd_flags |= PD_PAGE_FULL)
#define _POSIX_SIGQUEUE_MAX 32
#define RSIZE_MAX_MEM32 ( RSIZE_MAX_MEM/4 )
#define _POSIX_SEMAPHORES 200809L
#define __W_CONTINUED 0xffff
#define __ATOMIC_RELAXED 0
#define ACLITEMARRAYOID 1034
#define llast_node(type,l) castNode(type, llast(l))
#define CURSOR_OPT_NO_SCROLL 0x0004
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define RELKIND_INDEX 'i'
#define RelationIsMapped(relation) (RELKIND_HAS_STORAGE((relation)->rd_rel->relkind) && ((relation)->rd_rel->relfilenode == InvalidOid))
#define ESNULLP ( 400 )
#define SA_ONESHOT SA_RESETHAND
#define L_SET SEEK_SET
#define MAX_NODE_LENGTH 255
#define XIDARRAYOID 1011
#define SCM_TIMESTAMPING_OPT_STATS 54
#define ERRCODE_T_R_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('4','0','0','0','2')
#define HAVE_GCC__SYNC_INT64_CAS 1
#define METADATA_CACHE_H 
#define le16toh(x) __uint16_identity (x)
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define EDOM 33
#define XATTR_NAME_MAX 255
#define pg_prevpower2_size_t(num) pg_prevpower2_64(num)
#define LOCK_SH 1
#define HEAP_MOVED_IN 0x8000
#define ENOSTR 60
#define MaxTransactionId ((TransactionId) 0xFFFFFFFF)
#define att_align_datum(cur_offset,attalign,attlen,attdatum) ( ((attlen) == -1 && VARATT_IS_SHORT(DatumGetPointer(attdatum))) ? (uintptr_t) (cur_offset) : att_align_nominal(cur_offset, attalign) )
#define SIOCSPGRP 0x8902
#define HAVE_READV 1
#define REPLICA_IDENTITY_NOTHING 'n'
#define SetProcessingMode(mode) do { AssertArg((mode) == BootstrapProcessing || (mode) == InitProcessing || (mode) == NormalProcessing); Mode = (mode); } while(0)
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define Float8GetDatumFast(X) Float8GetDatum(X)
#define ERRCODE_ASSERT_FAILURE MAKE_SQLSTATE('P','0','0','0','4')
#define SHM_TOC_H 
#define SIGKILL 9
#define FRAMEOPTION_START_OFFSET_FOLLOWING 0x02000
#define TYPCATEGORY_TIMESPAN 'T'
#define INSTR_TIME_SET_CURRENT_LAZY(t) (INSTR_TIME_IS_ZERO(t) ? INSTR_TIME_SET_CURRENT(t), true : false)
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define WalSndWakeupProcessRequests() do { if (wake_wal_senders) { wake_wal_senders = false; if (max_wal_senders > 0) WalSndWakeup(); } } while (0)
#define ECHRNG 44
#define _SC_REGEXP _SC_REGEXP
#define EHOSTDOWN 112
#define _LFS_LARGEFILE 1
#define InvalidBlockNumber ((BlockNumber) 0xFFFFFFFF)
#define STA_CLK 0x8000
#define RWH_WRITE_LIFE_LONG 4
#define __wchar_t__ 
#define FrozenTransactionId ((TransactionId) 2)
#define FullTransactionIdFollowsOrEquals(a,b) ((a).value >= (b).value)
#define SEEK_END 2
#define OffsetNumberPrev(offsetNumber) ((OffsetNumber) (-1 + (offsetNumber)))
#define USE_SSL 
#define DatumGetAclPCopy(X) ((Acl *) PG_DETOAST_DATUM_COPY(X))
#define HeapTupleHeaderClearHotUpdated(tup) ( (tup)->t_infomask2 &= ~HEAP_HOT_UPDATED )
#define _POSIX2_LINE_MAX 2048
#define GROUP_ID_UPGRADING -2
#define PALLOC_H 
#define LOCK_MANAGER_LWLOCK_OFFSET (BUFFER_MAPPING_LWLOCK_OFFSET + NUM_BUFFER_PARTITIONS)
#define _ISOC99_SOURCE 1
#define SCNiFAST16 __PRIPTR_PREFIX "i"
#define ERRCODE_FDW_FUNCTION_SEQUENCE_ERROR MAKE_SQLSTATE('H','V','0','1','0')
#define DatumGetName(X) ((Name) DatumGetPointer(X))
#define ENOLCK 37
#define HEAP_ONLY_TUPLE 0x8000
#define COMMERROR LOG_SERVER_ONLY
#define StaticAssertDecl(condition,errmessage) _Static_assert(condition, errmessage)
#define BOOLARRAYOID 1000
#define MSG_DONTWAIT MSG_DONTWAIT
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define GUC_UNIT_TIME 0xF0000
#define WAIT_EVENT_SET_INDEX_NOT_INITIALIZED -1
#define JULIAN_MAXDAY (3)
#define RelationIsSecurityView(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options ? ((ViewOptions *) (relation)->rd_options)->security_barrier : false)
#define PG_STRERROR_R_BUFLEN 256
#define FIELDNO_TUPLETABLESLOT_NVALID 2
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define _STDDEF_H_ 
#define __S_ISUID 04000
#define HAVE_UUID_E2FS 1
#define __LC_NAME 8
#define TYPSTORAGE_PLAIN 'p'
#define ACL_USAGE (1<<8)
#define MAXALIGN64(LEN) TYPEALIGN64(MAXIMUM_ALIGNOF, (LEN))
#define INVALID_SHARD_ID 0
#define USHRT_WIDTH 16
#define SCNiFAST32 __PRIPTR_PREFIX "i"
#define PageAddItem(page,item,size,offsetNumber,overwrite,is_heap) PageAddItemExtended(page, item, size, offsetNumber, ((overwrite) ? PAI_OVERWRITE : 0) | ((is_heap) ? PAI_IS_HEAP : 0))
#define be64toh(x) __bswap_64 (x)
#define ENOSYS 38
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define SA_RESTART 0x10000000
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define ERRCODE_SAVEPOINT_EXCEPTION MAKE_SQLSTATE('3','B','0','0','0')
#define EXE ""
#define ACL_ID_PUBLIC 0
#define UUIDARRAYOID 2951
#define MAXIMUM_ALIGNOF 8
#define STRATNUM_H 
#define AI_PASSIVE 0x0001
#define DT_DIR DT_DIR
#define __UINT_LEAST64_TYPE__ long unsigned int
#define ERRCODE_ARRAY_SUBSCRIPT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define PF_RDS 21
#define FIELDNO_EXPRCONTEXT_SCANTUPLE 1
#define WL_TIMEOUT (1 << 3)
#define CHARCLASS_NAME_MAX 2048
#define pg_hton64(x) pg_bswap64(x)
#define ERRCODE_DUPLICATE_PSTATEMENT MAKE_SQLSTATE('4','2','P','0','5')
#define NotifySLRULock (&MainLWLockArray[26].lock)
#define _BITS_LOCALE_H 1
#define XACT_READ_COMMITTED 1
#define DEFAULT_PGSOCKET_DIR "/var/run/postgresql"
#define va_arg(v,l) __builtin_va_arg(v,l)
#define TUPLESORT_H 
#define VARATT_IS_EXTERNAL_EXPANDED_RO(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RO)
#define NODES_H 
#define VARATT_IS_EXTERNAL_EXPANDED_RW(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RW)
#define slist_foreach_modify(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_mutable_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).prev = &(lhead)->head, (iter).cur = (iter).prev->next, (iter).next = (iter).cur ? (iter).cur->next : NULL; (iter).cur != NULL; (iter).prev = (iter).cur, (iter).cur = (iter).next, (iter).next = (iter).next ? (iter).next->next : NULL)
#define _THREAD_SHARED_TYPES_H 1
#define Anum_pg_type_typmodin 20
#define AT_REMOVEDIR 0x200
#define SCNiFAST64 __PRI64_PREFIX "i"
#define ERRCODE_GROUPING_ERROR MAKE_SQLSTATE('4','2','8','0','3')
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define _SC_TIMERS _SC_TIMERS
#define SCNxMAX __PRI64_PREFIX "x"
#define OidFunctionCall1(functionId,arg1) OidFunctionCall1Coll(functionId, InvalidOid, arg1)
#define OidFunctionCall2(functionId,arg1,arg2) OidFunctionCall2Coll(functionId, InvalidOid, arg1, arg2)
#define OidFunctionCall4(functionId,arg1,arg2,arg3,arg4) OidFunctionCall4Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4)
#define OidFunctionCall5(functionId,arg1,arg2,arg3,arg4,arg5) OidFunctionCall5Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define OidFunctionCall6(functionId,arg1,arg2,arg3,arg4,arg5,arg6) OidFunctionCall6Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define OidFunctionCall8(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) OidFunctionCall8Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define ERRCODE_DIVISION_BY_ZERO MAKE_SQLSTATE('2','2','0','1','2')
#define PLANNODES_H 
#define Trap(condition,errorType) ((void)true)
#define AT_STATX_SYNC_TYPE 0x6000
#define ItemIdIsValid(itemId) PointerIsValid(itemId)
#define FullTransactionIdPrecedesOrEquals(a,b) ((a).value <= (b).value)
#define makeBoolean(val) makeInteger(val)
#define _BITS_SIGNUM_ARCH_H 1
#define ENOTSUP EOPNOTSUPP
#define IP_CHECKSUM 23
#define ERRCODE_E_R_E_CONTAINING_SQL_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','1')
#define __kernel_old_uid_t __kernel_old_uid_t
#define FullTransactionIdIsValid(x) TransactionIdIsValid(XidFromFullTransactionId(x))
#define HAVE_RL_COMPLETION_APPEND_CHARACTER 1
#define TAS(lock) tas(lock)
#define R_OK 4
#define HEAP_TUPLE_HAS_MATCH HEAP_ONLY_TUPLE
#define WALBufMappingLock (&MainLWLockArray[7].lock)
#define _BITS_SIGTHREAD_H 1
#define __FLT16_HAS_DENORM__ 1
#define _BITS_TYPES___LOCALE_T_H 1
#define SIZEOF_LONG 8
#define toascii_l(c,l) __toascii_l ((c), (l))
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define HAVE_NET_IF_H 1
#define RowShareLock 2
#define AF_NETLINK PF_NETLINK
#define __INT_FAST8_WIDTH__ 8
#define IndexTupleSize(itup) ((Size) ((itup)->t_info & INDEX_SIZE_MASK))
#define RTOldContainsStrategyNumber 13
#define FALLOC_FL_PUNCH_HOLE 0x02
#define ANYOID 2276
#define CLD_DUMPED CLD_DUMPED
#define ATTRIBUTE_GENERATED_STORED 's'
#define vfprintf pg_vfprintf
#define RTAdjacentStrategyNumber 17
#define PG_RETURN_TIMESTAMP(x) return TimestampGetDatum(x)
#define FATAL 22
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define NON_EXEC_STATIC static
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define XLogRecGetTopXid(decoder) ((decoder)->toplevel_xid)
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __ULONG32_TYPE unsigned int
#define ULONG_WIDTH __WORDSIZE
#define _BITS_SIGACTION_H 1
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define STA_PPSJITTER 0x0200
#define BKI_ROWTYPE_OID(oid,oidmacro) 
#define _PATH_HOSTS "/etc/hosts"
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define UTIME_OMIT ((1l << 30) - 2l)
#define FOPEN_MAX 16
#define PRIuLEAST16 "u"
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __suseconds_t_defined 
#define SPLICE_F_NONBLOCK 2
#define HEAP_XMIN_INVALID 0x0200
#define FIELDNO_HEAPTUPLETABLESLOT_OFF 2
#define SIGFPE 8
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define TwoPhaseStateLock (&MainLWLockArray[18].lock)
#define __off_t_defined 
#define SK_SEARCHNULL 0x0040
#define HEAP_HASOID_OLD 0x0008
#define SO_CNX_ADVICE 53
#define FUNCAPI_H 
#define TimestampTzGetDatum(X) Int64GetDatum(X)
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define IP_MTU_DISCOVER 10
#define SO_NOFCS 43
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define GETSTRUCT(TUP) ((char *) ((TUP)->t_data) + (TUP)->t_data->t_hoff)
#define HAVE_GETOPT_LONG 1
#define SIGPWR 30
#define FRAMEOPTION_START_CURRENT_ROW 0x00200
#define VARATT_EXTERNAL_SET_SIZE_AND_COMPRESS_METHOD(toast_pointer,len,cm) do { Assert((cm) == TOAST_PGLZ_COMPRESSION_ID || (cm) == TOAST_LZ4_COMPRESSION_ID); ((toast_pointer).va_extinfo = (len) | ((uint32) (cm) << VARLENA_EXTSIZE_BITS)); } while (0)
#define XLogArchivingAlways() (AssertMacro(XLogArchiveMode == ARCHIVE_MODE_OFF || wal_level >= WAL_LEVEL_REPLICA), XLogArchiveMode == ARCHIVE_MODE_ALWAYS)
#define _GCC_SIZE_T 
#define TRANSACTION_STATUS_COMMITTED 0x01
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define PG_NODE_TREEOID 194
#define PROC_IN_LOGICAL_DECODING 0x10
#define __U64_TYPE unsigned long int
#define Anum_pg_attribute_attoptions 24
#define SO_PEERGROUPS 59
#define _LIBC_LIMITS_H_ 1
#define __USE_XOPEN2K8XSI 1
#define SHRT_MAX __SHRT_MAX__
#define SO_SNDTIMEO_OLD 21
#define MemoryContextResetAndDeleteChildren(ctx) MemoryContextReset(ctx)
#define ERRCODE_CRASH_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','2')
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define PG_GETARG_BPCHAR_P_COPY(n) DatumGetBpCharPCopy(PG_GETARG_DATUM(n))
#define _POSIX_V6_ILP32_OFFBIG -1
#define MACADDR8OID 774
#define slist_foreach(iter,lhead) for (AssertVariableIsOfTypeMacro(iter, slist_iter), AssertVariableIsOfTypeMacro(lhead, slist_head *), (iter).cur = (lhead)->head.next; (iter).cur != NULL; (iter).cur = (iter).cur->next)
#define ITIMER_PROF ITIMER_PROF
#define _SC_INT_MAX _SC_INT_MAX
#define __size_t__ 
#define HAVE_LIBXML2 1
#define DatumGetBool(X) ((bool) ((X) != 0))
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define Anum_pg_class_relchecks 19
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define ResetPerTupleExprContext(estate) do { if ((estate)->es_per_tuple_exprcontext) ResetExprContext((estate)->es_per_tuple_exprcontext); } while (0)
#define HAVE_STRTOLL 1
#define PageHasFreeLinePointers(page) (((PageHeader) (page))->pd_flags & PD_HAS_FREE_LINES)
#define SIOCGSTAMPNS_OLD 0x8907
#define CLOG_TRUNCATE 0x10
#define IP_MINTTL 21
#define TYPEALIGN(ALIGNVAL,LEN) (((uintptr_t) (LEN) + ((ALIGNVAL) - 1)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define DATEORDER_MDY 2
#define _POSIX_BARRIERS 200809L
#define __ONCE_FLAG_INIT { 0 }
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define END_CRIT_SECTION() do { Assert(CritSectionCount > 0); CritSectionCount--; } while(0)
#define PageIsVerified(page,blkno) PageIsVerifiedExtended(page, blkno, PIV_LOG_WARNING | PIV_REPORT_STAT)
#define __LC_CTYPE 0
#define GUC_CUSTOM_PLACEHOLDER 0x0080
#define MultiXactGenLock (&MainLWLockArray[13].lock)
#define S_IWOTH (S_IWGRP >> 3)
#define REGOPERARRAYOID 2208
#define SO_TIMESTAMP_NEW 63
#define isascii_l(c,l) __isascii_l ((c), (l))
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define sigcontext_struct sigcontext
#define PG_DIAG_SEVERITY 'S'
#define AF_DECnet PF_DECnet
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define ERRCODE_INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','4')
#define __LONG_WIDTH__ 64
#define NodeSetTag(nodeptr,t) (((Node*)(nodeptr))->type = (t))
#define __STDLIB_MB_LEN_MAX 16
#define FIELDNO_TUPLETABLESLOT_TUPLEDESCRIPTOR 4
#define IndexTupleHasVarwidths(itup) ((((IndexTuple) (itup))->t_info & INDEX_VAR_MASK))
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define SIG_ERR ((__sighandler_t) -1)
#define AI_NUMERICHOST 0x0004
#define ereport_domain(elevel,domain,...) do { pg_prevent_errno_in_scope(); if (__builtin_constant_p(elevel) && (elevel) >= ERROR ? errstart_cold(elevel, domain) : errstart(elevel, domain)) __VA_ARGS__, errfinish(__FILE__, __LINE__, PG_FUNCNAME_MACRO); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define HAVE_HMAC_CTX_NEW 1
#define __PRIPTR_PREFIX "l"
#define XLogStandbyInfoActive() (wal_level >= WAL_LEVEL_REPLICA)
#define __INO_T_MATCHES_INO64_T 1
#define PG_COPYRES_EVENTS 0x04
#define HeapTupleHeaderHasExternal(tup) (((tup)->t_infomask & HEAP_HASEXTERNAL) != 0)
#define FPE_FLTRES FPE_FLTRES
#define __POSIX_FADV_NOREUSE 5
#define PG_DATA_CHECKSUM_VERSION 1
#define PG_DIAG_SOURCE_LINE 'L'
#define ENOPROTOOPT 92
#define TYPEALIGN64(ALIGNVAL,LEN) (((uint64) (LEN) + ((ALIGNVAL) - 1)) & ~((uint64) ((ALIGNVAL) - 1)))
#define DO_AGGSPLIT_DESERIALIZE(as) (((as) & AGGSPLITOP_DESERIALIZE) != 0)
#define PG_GETARG_VARLENA_P(n) PG_DETOAST_DATUM(PG_GETARG_DATUM(n))
#define DELAY_CHKPT_START (1<<0)
#define NormalTransactionIdFollows(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) > 0)
#define INVALID_PGPROCNO PG_INT32_MAX
#define MAX_TZDISP_HOUR 15
#define EAI_NOTCANCELED -102
#define BKPBLOCK_FLAG_MASK 0xF0
#define ADJUST_POOLSIZE_AUTOMATICALLY 0
#define SO_ATTACH_BPF 50
#define HAVE_DECL_LLVMGETHOSTCPUNAME 1
#define __GLIBC_USE_IEC_60559_EXT 1
#define FMGR_H 
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define RelationHasCheckOption(relation) (AssertMacro(relation->rd_rel->relkind == RELKIND_VIEW), (relation)->rd_options && ((ViewOptions *) (relation)->rd_options)->check_option != VIEW_OPTION_CHECK_OPTION_NOT_SET)
#define STA_CLOCKERR 0x1000
#define UINT_LEAST32_MAX (4294967295U)
#define EMFILE 24
#define ACCESS_RELATION_H 
#define DECLARE_ARRAY_FOREIGN_KEY(cols,reftbl,refcols) extern int no_such_variable
#define MultiXactTruncationLock (&MainLWLockArray[41].lock)
#define HAVE_NETINET_TCP_H 1
#define SO_BUSY_POLL_BUDGET 70
#define isprint_l(c,l) __isprint_l ((c), (l))
#define FLOAT8_FITS_IN_INT16(num) ((num) >= (float8) PG_INT16_MIN && (num) < -((float8) PG_INT16_MIN))
#define ERRCODE_INVALID_CURSOR_DEFINITION MAKE_SQLSTATE('4','2','P','1','1')
#define SK_ROW_HEADER 0x0004
#define Anum_pg_type_typstorage 24
#define VARATT_IS_EXTERNAL(PTR) VARATT_IS_1B_E(PTR)
#define __lldiv_t_defined 1
#define POLL_PRI POLL_PRI
#define MaxSizeOfXLogRecordBlockHeader (SizeOfXLogRecordBlockHeader + SizeOfXLogRecordBlockImageHeader + SizeOfXLogRecordBlockCompressHeader + sizeof(RelFileNode) + sizeof(BlockNumber))
#define RelationGetTargetBlock(relation) ( (relation)->rd_smgr != NULL ? (relation)->rd_smgr->smgr_targblock : InvalidBlockNumber )
#define SIGILL 4
#define pg_pwrite pwrite
#define MSG_EOR MSG_EOR
#define DATATYPE_TIMESTAMP_H 
#define dgettext(domainname,msgid) dcgettext (domainname, msgid, LC_MESSAGES)
#define VARSIZE_ANY(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR) : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR) : VARSIZE_4B(PTR)))
#define __STRINGS_FORTIFIED 1
#define FALLOC_FL_COLLAPSE_RANGE 0x08
#define PG_HAVE_ATOMIC_FETCH_SUB_U32 
#define STANDBY_SIGNAL_FILE "standby.signal"
#define ItemIdHasStorage(itemId) ((itemId)->lp_len != 0)
#define ENOBUFS 105
#define __time_t_defined 1
#define _SC_INT_MIN _SC_INT_MIN
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define Anum_pg_class_reltablespace 9
#define IN_MULTICAST(a) IN_CLASSD(a)
#define TypeOidIndexId 2703
#define dsa_allocate0(area,size) dsa_allocate_extended(area, size, DSA_ALLOC_ZERO)
#define AT_EACCESS 0x200
#define SYSATTR_H 
#define __INTMAX_TYPE__ long int
#define IPPROTO_DCCP IPPROTO_DCCP
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define __SIZEOF_WCHAR_T__ 4
#define NormalTransactionIdPrecedes(id1,id2) (AssertMacro(TransactionIdIsNormal(id1) && TransactionIdIsNormal(id2)), (int32) ((id1) - (id2)) < 0)
#define Anum_pg_type_typdefaultbin 30
#define Anum_pg_type_typoutput 17
#define O_DIRECTORY __O_DIRECTORY
#define RelationGetForm(relation) ((relation)->rd_rel)
#define ACL_INSERT_CHR 'a'
#define Anum_pg_index_indisexclusion 7
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define Anum_pg_dist_partition_autoconverted 6
#define PF_KCM 41
#define STATUS_OK (0)
#define REDISTRIBUTE_BY_HASH 'x'
#define SIGIOT SIGABRT
#define WORD_BIT 32
#define POINTARRAYOID 1017
#define SCM_TIMESTAMP SO_TIMESTAMP
#define EWOULDBLOCK EAGAIN
#define FRAMEOPTION_END_OFFSET_PRECEDING 0x01000
#define PG_HAVE_ATOMIC_FETCH_SUB_U64 
#define DN_CREATE 0x00000004
#define PRIdFAST8 "d"
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define HeapTupleGetDatum(tuple) HeapTupleHeaderGetDatum((tuple)->t_data)
#define BACKUP_LABEL_FILE "backup_label"
#define S_IXGRP (S_IXUSR >> 3)
#define ERRCODE_FDW_INVALID_DESCRIPTOR_FIELD_IDENTIFIER MAKE_SQLSTATE('H','V','0','9','1')
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define NUMMULTIRANGEARRAYOID 6151
#define __ATOMIC_CONSUME 1
#define CIDARRAYOID 1012
#define SO_TIMESTAMPING_NEW 65
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define sigev_notify_function _sigev_un._sigev_thread._function
#define PRIuLEAST8 "u"
#define PF_KEY 15
#define HeapTupleHeaderSetTypeId(tup,typeid) ( (tup)->t_choice.t_datum.datum_typeid = (typeid) )
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define ItemIdSetNormal(itemId,off,len) ( (itemId)->lp_flags = LP_NORMAL, (itemId)->lp_off = (off), (itemId)->lp_len = (len) )
#define Anum_pg_class_relpartbound 33
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define SK_ORDER_BY 0x0100
#define sve_vl_valid(vl) __sve_vl_valid(vl)
#define TSVECTORARRAYOID 3643
#define INTMAX_C(c) c ## L
#define SOMAXCONN 4096
#define HAVE_GETRUSAGE 1
#define DSA_ALLOC_ZERO 0x04
#define ILL_PRVOPC ILL_PRVOPC
#define PG_RETURN_TRANSACTIONID(x) return TransactionIdGetDatum(x)
#define TYPCATEGORY_BITSTRING 'V'
#define ANYCOMPATIBLENONARRAYOID 5079
#define ERRCODE_INVALID_PASSWORD MAKE_SQLSTATE('2','8','P','0','1')
#define POSIX_FADV_RANDOM 1
#define INT2VECTOROID 22
#define REGPROCARRAYOID 1008
#define ALIGNOF_PG_INT128_TYPE 16
#define ERRCODE_FDW_UNABLE_TO_CREATE_REPLY MAKE_SQLSTATE('H','V','0','0','M')
#define _STDINT_H 1
#define MaxHeapTuplesPerPage ((int) ((BLCKSZ - SizeOfPageHeaderData) / (MAXALIGN(SizeofHeapTupleHeader) + sizeof(ItemIdData))))
#define IN_CLASSC_NSHIFT 8
#define PG_GETARG_TEXT_P_COPY(n) DatumGetTextPCopy(PG_GETARG_DATUM(n))
#define USE_LZ4 1
#define SpinLockRelease(lock) S_UNLOCK(lock)
#define _POSIX_HOST_NAME_MAX 255
#define PG_HAVE_ATOMIC_SUB_FETCH_U32 
#define PG_ARGISNULL(n) (fcinfo->args[n].isnull)
#define GET_ACTIVE_TRANSACTION_QUERY "SELECT * FROM get_all_active_transactions();"
#define S_ISUID __S_ISUID
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define LC_NAME __LC_NAME
#define SHORTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_SHORT, (LEN))
#define HAVE_DECL_FDATASYNC 1
#define MinSizeOfXactRunningXacts offsetof(xl_running_xacts, xids)
#define FullTransactionIdPrecedes(a,b) ((a).value < (b).value)
#define Anum_pg_attribute_attstorage 12
#define ERRCODE_CARDINALITY_VIOLATION MAKE_SQLSTATE('2','1','0','0','0')
#define CREATE_SEQUENCE_COMMAND "CREATE SEQUENCE IF NOT EXISTS %s AS %s INCREMENT BY " INT64_FORMAT " MINVALUE " INT64_FORMAT " MAXVALUE " INT64_FORMAT " START WITH " INT64_FORMAT " CACHE " INT64_FORMAT " %sCYCLE"
#define POLL_IN POLL_IN
#define _DIRENT_H 1
#define ERRCODE_INVALID_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','1','9')
#define __WCHAR_T 
#define ERRCODE_TOO_MANY_JSON_ARRAY_ELEMENTS MAKE_SQLSTATE('2','2','0','3','D')
#define _LIMITS_H___ 
#define PageSizeIsValid(pageSize) ((pageSize) == BLCKSZ)
#define INT64_FORMAT "%" INT64_MODIFIER "d"
#define DATETIME_MIN_JULIAN (0)
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define SHARED_CONNECTION_STATS_H 
#define PG_GETARG_CSTRING(n) DatumGetCString(PG_GETARG_DATUM(n))
#define SI_TIMER SI_TIMER
#define __LC_MONETARY 4
#define VARDATA_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_data)
#define LOG_SERVER_ONLY 16
#define USE_DSM_SYSV 
#define PG_RETURN_HEAPTUPLEHEADER(x) return HeapTupleHeaderGetDatum(x)
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define ELIBMAX 82
#define SAFE_STR_PASSWORD_MIN_LENGTH ( 6 )
#define __sigstack_defined 1
#define INFO 17
#define SPLICE_F_MORE 4
#define _ISOC2X_SOURCE 1
#define FRAMEOPTION_START_UNBOUNDED_FOLLOWING 0x00080
#define INTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_INT, (LEN))
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define GetPerTupleMemoryContext(estate) (GetPerTupleExprContext(estate)->ecxt_per_tuple_memory)
#define InvalidXLogRecPtr 0
#define FASYNC O_ASYNC
#define PG_HAVE_ATOMIC_SUB_FETCH_U64 
#define TopSubTransactionId ((SubTransactionId) 1)
#define MAX_KILOBYTES INT_MAX
#define __ino64_t_defined 
#define PG_UINT32_MAX (0xFFFFFFFFU)
#define PQnoPasswordSupplied "fe_sendauth: no password supplied\n"
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define AF_ISDN PF_ISDN
#define Natts_pg_class 33
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define DatumGetTextPSlice(X,m,n) ((text *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define __SIZEOF_POINTER__ 8
#define XIDOID 28
#define IPV6_MULTICAST_LOOP 19
#define dsa_pointer_atomic_read pg_atomic_read_u64
#define __ATOMIC_SEQ_CST 5
#define GUC_UNIT (GUC_UNIT_MEMORY | GUC_UNIT_TIME)
#define __UINT8_TYPE__ unsigned char
#define F_DUPFD_CLOEXEC 1030
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define AutoFileLock (&MainLWLockArray[35].lock)
#define IPV6_2292HOPLIMIT 8
#define PRIdPTR __PRIPTR_PREFIX "d"
#define multi_for_advance_cell(cell,state,l,i) (cell = (state.l != NIL && state.i < state.l->length) ? &state.l->elements[state.i] : NULL)
#define ERRCODE_FDW_INVALID_ATTRIBUTE_VALUE MAKE_SQLSTATE('H','V','0','2','4')
#define ENOENT 2
#define NL_MSGMAX INT_MAX
#define ERRCODE_WARNING_PRIVILEGE_NOT_REVOKED MAKE_SQLSTATE('0','1','0','0','6')
#define F_SETFD 2
#define IPV6_LEAVE_ANYCAST 28
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define Anum_pg_attribute_attisdropped 19
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __FLT32X_MIN_10_EXP__ (-307)
#define PRId16 "d"
#define pg_unreachable() __builtin_unreachable()
#define DISABLE_REMOTE_CONNECTIONS_FOR_LOCAL_QUERIES -1
#define pg_analyze_and_rewrite_fixedparams(a,b,c,d,e) pg_analyze_and_rewrite(a, b, c, d, e)
#define ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','3')
#define SIGTERM 15
#define SPLICE_F_MOVE 1
#define PTHREAD_KEYS_MAX 1024
#define USE_SYSV_SHARED_MEMORY 1
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define ATTRIBUTE_FIXED_PART_SIZE (offsetof(FormData_pg_attribute,attcollation) + sizeof(Oid))
#define EBADSLT 57
#define REL_HAS_ALL_PART_PROPS(rel) ((rel)->part_scheme && (rel)->boundinfo && (rel)->nparts > 0 && (rel)->part_rels && (rel)->partexprs && (rel)->nullable_partexprs)
#define IPV6_PMTUDISC_DONT 0
#define SO_INCOMING_CPU 49
#define AI_CANONNAME 0x0002
#define EMEDIUMTYPE 124
#define EKEYREVOKED 128
#define __FLT64X_HAS_DENORM__ 1
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define FIELDNO_EXPRSTATE_PARENT 11
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define PRId32 "d"
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define __SI_BAND_TYPE long int
#define __HAVE_DISTINCT_FLOAT64X 0
#define LOCK_UN 8
#define ERRCODE_INVALID_RECURSION MAKE_SQLSTATE('4','2','P','1','9')
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define __SIZEOF_LONG_LONG__ 8
#define PG_BACKEND_VERSIONSTR "postgres (PostgreSQL) " PG_VERSION "\n"
#define HAVE_SETENV 1
#define IS_JOIN_REL(rel) ((rel)->reloptkind == RELOPT_JOINREL || (rel)->reloptkind == RELOPT_OTHER_JOINREL)
#define EHOSTUNREACH 113
#define __USE_DYNAMIC_STACK_SIZE 1
#define DT_FIFO DT_FIFO
#define UInt32GetDatum(X) ((Datum) (X))
#define HASH_ELEM 0x0008
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define PageSetPageSizeAndVersion(page,size,version) ( AssertMacro(((size) & 0xFF00) == (size)), AssertMacro(((version) & 0x00FF) == (version)), ((PageHeader) (page))->pd_pagesize_version = (size) | (version) )
#define POSIX_FADV_SEQUENTIAL 2
#define PRIoPTR __PRIPTR_PREFIX "o"
#define __SAFE_STR_LIB_H__ 
#define ERRCODE_CASE_NOT_FOUND MAKE_SQLSTATE('2','0','0','0','0')
#define PACKAGE_URL "https://www.postgresql.org/"
#define HEAP_XMIN_COMMITTED 0x0100
#define _POSIX_THREAD_KEYS_MAX 128
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define __LDBL_DIG__ 33
#define DECLARE_FOREIGN_KEY_OPT(cols,reftbl,refcols) extern int no_such_variable
#define __exctype(name) extern int name (int) __THROW
#define pg_attribute_always_inline __attribute__((always_inline)) inline
#define PRId64 __PRI64_PREFIX "d"
#define _SC_NZERO _SC_NZERO
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','1')
#define __SVE_PREG_SIZE(vq) ((__u32)(vq) * (__SVE_VQ_BYTES / 8))
#define fetch_att(T,attbyval,attlen) ( (attbyval) ? ( (attlen) == (int) sizeof(Datum) ? *((Datum *)(T)) : ( (attlen) == (int) sizeof(int32) ? Int32GetDatum(*((int32 *)(T))) : ( (attlen) == (int) sizeof(int16) ? Int16GetDatum(*((int16 *)(T))) : ( AssertMacro((attlen) == 1), CharGetDatum(*((char *)(T))) ) ) ) ) : PointerGetDatum((char *) (T)) )
#define INTERRUPTS_CAN_BE_PROCESSED() (InterruptHoldoffCount == 0 && CritSectionCount == 0 && QueryCancelHoldoffCount == 0)
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define S_IROTH (S_IRGRP >> 3)
#define CATVERSION_H 
#define HeapTupleHeaderXminCommitted(tup) ( ((tup)->t_infomask & HEAP_XMIN_COMMITTED) != 0 )
#define Anum_pg_index_indoption 18
#define SO_TIMESTAMPNS_OLD 35
#define __POSIX2_THIS_VERSION 200809L
#define INTMAX_WIDTH 64
#define EC_MUST_BE_REDUNDANT(eclass) ((eclass)->ec_has_const && !(eclass)->ec_below_outer_join)
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define FDW_HANDLEROID 3115
#define EAI_INTR -104
#define ERRCODE_DATA_CORRUPTED MAKE_SQLSTATE('X','X','0','0','1')
#define IP_PMTUDISC_INTERFACE 4
#define ITEMPTR_H 
#define PARSENODES_H 
#define PF_VSOCK 40
#define SECS_PER_HOUR 3600
#define FunctionCallInvoke(fcinfo) ((* (fcinfo)->flinfo->fn_addr) (fcinfo))
#define PRIoFAST8 "o"
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define DatumGetArrayTypePCopy(X) ((ArrayType *) PG_DETOAST_DATUM_COPY(X))
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define DatumGetByteaPP(X) ((bytea *) PG_DETOAST_DATUM_PACKED(X))
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define lthird_oid(l) lfirst_oid(list_nth_cell(l, 2))
#define nodeTag(nodeptr) (((const Node*)(nodeptr))->type)
#define SO_BUF_LOCK 72
#define PG_CLASS_D_H 
#define HeapTupleIsHotUpdated(tuple) HeapTupleHeaderIsHotUpdated((tuple)->t_data)
#define SO_PRIORITY 12
#define pg_attribute_aligned(a) __attribute__((aligned(a)))
#define PG_ATTRIBUTE_H 
#define FLOAT4ARRAYOID 1021
#define F_SETOWN_EX __F_SETOWN_EX
#define ERRCODE_INVALID_PRECEDING_OR_FOLLOWING_SIZE MAKE_SQLSTATE('2','2','0','1','3')
#define PG_FUNCTION_INFO_V1(funcname) extern Datum funcname(PG_FUNCTION_ARGS); extern PGDLLEXPORT const Pg_finfo_record * CppConcat(pg_finfo_,funcname)(void); const Pg_finfo_record * CppConcat(pg_finfo_,funcname) (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable
#define PF_LOCAL 1
#define Anum_pg_type_typname 2
#define Anum_pg_type_typelem 14
#define S_IFIFO __S_IFIFO
#define SCNuFAST8 "hhu"
#define ERRCODE_CONFIG_FILE_ERROR MAKE_SQLSTATE('F','0','0','0','0')
#define __fsblkcnt_t_defined 
#define PD_VALID_FLAG_BITS 0x0007
#define FPE_FLTUND FPE_FLTUND
#define FIELDNO_MINIMALTUPLETABLESLOT_OFF 4
#define FPE_FLTUNK FPE_FLTUNK
#define _(x) gettext(x)
#define X_OK 1
#define ERRCODE_DUPLICATE_CURSOR MAKE_SQLSTATE('4','2','P','0','3')
#define TIMESTAMPOID 1114
#define __S_ISGID 02000
